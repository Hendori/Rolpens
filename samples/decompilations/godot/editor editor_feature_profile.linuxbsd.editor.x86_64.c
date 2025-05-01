
/* EditorFeatureProfileManager::_hide_requested() */

void EditorFeatureProfileManager::_hide_requested(void)

{
  AcceptDialog::_cancel_pressed();
  return;
}



/* EditorFeatureProfile::is_feature_disabled(EditorFeatureProfile::Feature) const */

EditorFeatureProfile __thiscall
EditorFeatureProfile::is_feature_disabled(EditorFeatureProfile *this,uint param_2)

{
  if (param_2 < 9) {
    return this[(long)(int)param_2 + 0x228];
  }
  _err_print_index_error
            ("is_feature_disabled","editor/editor_feature_profile.cpp",0xa0,(ulong)param_2,9,
             "p_feature","FEATURE_MAX","",false,false);
  return (EditorFeatureProfile)0x0;
}



/* EditorFeatureProfileManager::_emit_current_profile_changed() */

void __thiscall
EditorFeatureProfileManager::_emit_current_profile_changed(EditorFeatureProfileManager *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_emit_current_profile_changed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_emit_current_profile_changed()::{lambda()#1}::operator()()::sname)
    ;
    if (iVar2 != 0) {
      _scs_create((char *)&_emit_current_profile_changed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_emit_current_profile_changed()::{lambda()#1}::operator()()::sname,&__dso_handle
                  );
      __cxa_guard_release(&_emit_current_profile_changed()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&_emit_current_profile_changed()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::set_disable_feature(EditorFeatureProfile::Feature, bool) */

void __thiscall
EditorFeatureProfile::set_disable_feature
          (EditorFeatureProfile *this,uint param_2,EditorFeatureProfile param_3)

{
  if (param_2 < 9) {
    this[(long)(int)param_2 + 0x228] = param_3;
    return;
  }
  _err_print_index_error
            ("set_disable_feature","editor/editor_feature_profile.cpp",0x9b,(ulong)param_2,9,
             "p_feature","FEATURE_MAX","",false,false);
  return;
}



/* EditorFeatureProfile::is_class_editor_disabled(StringName const&) const [clone .part.0] */

ulong __thiscall
EditorFeatureProfile::is_class_editor_disabled(EditorFeatureProfile *this,StringName *param_1)

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
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x1a8) != 0) && (*(int *)(this + 0x1cc) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c8) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1c8) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar12 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar12;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x1c0) + lVar14 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar16) &&
           (*(long *)(*(long *)(this + 0x1a8) +
                     (ulong)*(uint *)(*(long *)(this + 0x1b0) + lVar14 * 4) * 8) == *(long *)param_1
           )) {
          uVar12 = 1;
          goto LAB_001002e0;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar12;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x1c0) + lVar14 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar12, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar12, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  ClassDB::get_parent_class_nocheck((StringName *)&local_38);
  uVar12 = 0;
  if (local_38 != 0) {
    uVar12 = is_class_editor_disabled(this,(StringName *)&local_38);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
      uVar12 = uVar12 & 0xff;
    }
  }
LAB_001002e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::is_class_disabled(StringName const&) const [clone .part.0] */

ulong __thiscall
EditorFeatureProfile::is_class_disabled(EditorFeatureProfile *this,StringName *param_1)

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
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar12 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar12;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x198) + lVar14 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar16) &&
           (*(long *)(*(long *)(this + 0x180) +
                     (ulong)*(uint *)(*(long *)(this + 0x188) + lVar14 * 4) * 8) == *(long *)param_1
           )) {
          uVar12 = 1;
          goto LAB_00100490;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar12;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x198) + lVar14 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar12, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar12, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  ClassDB::get_parent_class_nocheck((StringName *)&local_38);
  uVar12 = 0;
  if (local_38 != 0) {
    uVar12 = is_class_disabled(this,(StringName *)&local_38);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
      uVar12 = uVar12 & 0xff;
    }
  }
LAB_00100490:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::is_class_editor_disabled(StringName const&) const */

ulong __thiscall
EditorFeatureProfile::is_class_editor_disabled(EditorFeatureProfile *this,StringName *param_1)

{
  long lVar1;
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
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = 0;
  if (lVar1 != 0) {
    if ((*(long *)(this + 0x1a8) != 0) && (*(int *)(this + 0x1cc) != 0)) {
      uVar12 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c8) * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1c8) * 8);
      uVar11 = *(uint *)(lVar1 + 0x20);
      if (*(uint *)(lVar1 + 0x20) == 0) {
        uVar11 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      lVar14 = SUB168(auVar3 * auVar7,8);
      uVar15 = *(uint *)(*(long *)(this + 0x1c0) + lVar14 * 4);
      iVar13 = SUB164(auVar3 * auVar7,8);
      if (uVar15 != 0) {
        uVar16 = 0;
        do {
          if ((uVar15 == uVar11) &&
             (lVar1 == *(long *)(*(long *)(this + 0x1a8) +
                                (ulong)*(uint *)(*(long *)(this + 0x1b0) + lVar14 * 4) * 8))) {
            uVar12 = 1;
            goto LAB_00100640;
          }
          uVar16 = uVar16 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar12;
          lVar14 = SUB168(auVar4 * auVar8,8);
          uVar15 = *(uint *)(*(long *)(this + 0x1c0) + lVar14 * 4);
          iVar13 = SUB164(auVar4 * auVar8,8);
        } while ((uVar15 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar12, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(this + 0x1c8) * 4) + iVar13) -
                                      SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar12, uVar16 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    ClassDB::get_parent_class_nocheck((StringName *)&local_48);
    uVar12 = 0;
    if ((local_48 != 0) &&
       ((uVar12 = is_class_editor_disabled(this,(StringName *)&local_48),
        StringName::configured != '\0' && (local_48 != 0)))) {
      StringName::unref();
      uVar12 = uVar12 & 0xff;
    }
  }
LAB_00100640:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* EditorFeatureProfile::is_class_disabled(StringName const&) const */

ulong __thiscall
EditorFeatureProfile::is_class_disabled(EditorFeatureProfile *this,StringName *param_1)

{
  long lVar1;
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
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = 0;
  if (lVar1 != 0) {
    if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
      uVar12 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
      uVar11 = *(uint *)(lVar1 + 0x20);
      if (*(uint *)(lVar1 + 0x20) == 0) {
        uVar11 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      lVar14 = SUB168(auVar3 * auVar7,8);
      uVar15 = *(uint *)(*(long *)(this + 0x198) + lVar14 * 4);
      iVar13 = SUB164(auVar3 * auVar7,8);
      if (uVar15 != 0) {
        uVar16 = 0;
        do {
          if ((uVar15 == uVar11) &&
             (lVar1 == *(long *)(*(long *)(this + 0x180) +
                                (ulong)*(uint *)(*(long *)(this + 0x188) + lVar14 * 4) * 8))) {
            uVar12 = 1;
            goto LAB_001007e0;
          }
          uVar16 = uVar16 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar12;
          lVar14 = SUB168(auVar4 * auVar8,8);
          uVar15 = *(uint *)(*(long *)(this + 0x198) + lVar14 * 4);
          iVar13 = SUB164(auVar4 * auVar8,8);
        } while ((uVar15 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar12, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(this + 0x1a0) * 4) + iVar13) -
                                      SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar12, uVar16 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    ClassDB::get_parent_class_nocheck((StringName *)&local_48);
    uVar12 = 0;
    if ((local_48 != 0) &&
       ((uVar12 = is_class_disabled(this,(StringName *)&local_48), StringName::configured != '\0' &&
        (local_48 != 0)))) {
      StringName::unref();
      uVar12 = uVar12 & 0xff;
    }
  }
LAB_001007e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* EditorFeatureProfile::has_class_properties_disabled(StringName const&) const */

undefined8 __thiscall
EditorFeatureProfile::has_class_properties_disabled(EditorFeatureProfile *this,StringName *param_1)

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
  
  if (*(long *)(this + 0x1d8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x1fc) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1f8) * 8);
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
    uVar14 = *(uint *)(*(long *)(this + 0x1e0) + lVar13 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 0x1d8) + lVar13 * 8) + 0x10) == *(long *)param_1))
        {
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x1e0) + lVar13 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* EditorFeatureProfile::is_item_collapsed(StringName const&) const */

undefined8 __thiscall
EditorFeatureProfile::is_item_collapsed(EditorFeatureProfile *this,StringName *param_1)

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
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(long *)(this + 0x200) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x224) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x220) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x220) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar14 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x218) + lVar13 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar16) &&
           (*(long *)(*(long *)(this + 0x200) +
                     (ulong)*(uint *)(*(long *)(this + 0x208) + lVar13 * 4) * 8) == *(long *)param_1
           )) {
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x218) + lVar13 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar14, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar14, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* EditorFeatureProfile::get_feature_name(EditorFeatureProfile::Feature) */

EditorFeatureProfile * __thiscall
EditorFeatureProfile::get_feature_name(EditorFeatureProfile *this,uint param_2)

{
  long lVar1;
  char *__s;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 9) {
    __s = *(char **)(feature_names + (long)(int)param_2 * 8);
    *(undefined8 *)this = 0;
    if (__s != (char *)0x0) {
      strlen(__s);
    }
    String::parse_latin1((StrRange *)this);
  }
  else {
    _err_print_index_error
              ("get_feature_name","editor/editor_feature_profile.cpp",0xa5,(ulong)param_2,9,
               "p_feature","FEATURE_MAX","",false,false);
    *(undefined8 *)this = 0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::get_feature_description(EditorFeatureProfile::Feature) */

EditorFeatureProfile * __thiscall
EditorFeatureProfile::get_feature_description(EditorFeatureProfile *this,uint param_2)

{
  long lVar1;
  char *__s;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 9) {
    __s = *(char **)(feature_descriptions + (long)(int)param_2 * 8);
    *(undefined8 *)this = 0;
    if (__s != (char *)0x0) {
      strlen(__s);
    }
    String::parse_latin1((StrRange *)this);
  }
  else {
    _err_print_index_error
              ("get_feature_description","editor/editor_feature_profile.cpp",0xaa,(ulong)param_2,9,
               "p_feature","FEATURE_MAX","",false,false);
    *(undefined8 *)this = 0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::EditorFeatureProfile() */

void __thiscall EditorFeatureProfile::EditorFeatureProfile(EditorFeatureProfile *this)

{
  undefined8 uVar1;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00125ab8;
  uVar1 = _LC28;
  this[0x230] = (EditorFeatureProfile)0x0;
  *(undefined8 *)(this + 0x1a0) = uVar1;
  *(undefined8 *)(this + 0x1c8) = uVar1;
  *(undefined8 *)(this + 0x1f8) = uVar1;
  *(undefined8 *)(this + 0x220) = uVar1;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  return;
}



/* EditorFeatureProfileManager::_get_selected_profile() */

EditorFeatureProfileManager * __thiscall
EditorFeatureProfileManager::_get_selected_profile(EditorFeatureProfileManager *this)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OptionButton::get_selected();
  if (iVar1 < 0) {
    *(undefined8 *)this = 0;
  }
  else {
    OptionButton::get_item_metadata((int)local_38);
    Variant::operator_cast_to_String((Variant *)this);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::notify_changed() */

void __thiscall EditorFeatureProfileManager::notify_changed(EditorFeatureProfileManager *this)

{
  _emit_current_profile_changed(this);
  return;
}



/* EditorFeatureProfileManager::get_current_profile() */

void EditorFeatureProfileManager::get_current_profile(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0xe58) != 0) {
    *in_RDI = *(long *)(in_RSI + 0xe58);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorFeatureProfileManager::EditorFeatureProfileManager() */

void __thiscall
EditorFeatureProfileManager::EditorFeatureProfileManager(EditorFeatureProfileManager *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  String_conflict *pSVar4;
  Vector2 *pVVar5;
  char cVar6;
  BoxContainer *pBVar7;
  BoxContainer *pBVar8;
  LineEdit *pLVar9;
  Button *pBVar10;
  HSeparator *this_00;
  OptionButton *this_01;
  VSeparator *this_02;
  SplitContainer *this_03;
  Tree *pTVar11;
  CallableCustom *pCVar12;
  EditorHelpBit *this_04;
  Label *pLVar13;
  StyleBox *this_05;
  ConfirmationDialog *pCVar14;
  EditorFileDialog *pEVar15;
  Timer *this_06;
  Object *pOVar16;
  StringName *pSVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 local_a8;
  String_conflict local_a0 [8];
  long local_98 [2];
  Object *local_88 [2];
  int local_78 [8];
  float local_58 [6];
  long local_40;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  *(undefined8 *)(this + 0xdd0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00125c18;
  this[0xe68] = (EditorFeatureProfileManager)0x0;
  *(undefined8 *)(this + 0xe70) = 0;
  *(undefined1 (*) [16])(this + 0xdb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe58) = (undefined1  [16])0x0;
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_001253c8;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(this,pBVar7,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00125050;
  postinitialize_handler((Object *)pBVar8);
  pLVar9 = (LineEdit *)operator_new(0xbb0,"");
  local_88[0] = (Object *)0x0;
  LineEdit::LineEdit(pLVar9,(String_conflict *)local_88);
  postinitialize_handler((Object *)pLVar9);
  *(LineEdit **)(this + 0xdc8) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdc8),0,0);
  uVar1 = *(undefined8 *)(this + 0xdc8);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"(none)");
  TTR(local_a0,(String_conflict *)local_98);
  LineEdit::set_text(uVar1,local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xdc8),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc8),3);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Reset to Default");
  TTR(local_a0,(String_conflict *)local_98);
  Button::Button(pBVar10,local_a0);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xdd8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdd8),0,0);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdd8),0));
  plVar2 = *(long **)(this + 0xdd8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager,int>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void_int *)"&EditorFeatureProfileManager::_profile_action");
  Callable::bind<EditorFeatureProfileManager::Action>
            ((String_conflict *)local_98,(CowData<char32_t> *)local_88,0);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String_conflict *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)local_88);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Current Profile:");
  TTR(local_a0,(String_conflict *)local_98);
  VBoxContainer::add_margin_child((String_conflict *)pBVar7,(Control *)local_a0,SUB81(pBVar8,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  this_00 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(this_00);
  postinitialize_handler((Object *)this_00);
  Node::add_child(pBVar7,this_00,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00125050;
  postinitialize_handler((Object *)pBVar8);
  this_01 = (OptionButton *)operator_new(0xd00,"");
  local_88[0] = (Object *)0x0;
  OptionButton::OptionButton(this_01,(String_conflict *)local_88);
  postinitialize_handler((Object *)this_01);
  *(OptionButton **)(this + 0xdd0) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdd0),3);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xdd0),2);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdd0),0,0);
  plVar2 = *(long **)(this + 0xdd0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager,int>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void_int *)"&EditorFeatureProfileManager::_profile_selected");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)local_88);
  Callable::~Callable((Callable *)local_88);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Create Profile");
  TTR(local_a0,(String_conflict *)local_98);
  Button::Button(pBVar10,local_a0);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xdf8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdf8),0,0);
  plVar2 = *(long **)(this + 0xdf8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager,int>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void_int *)"&EditorFeatureProfileManager::_profile_action");
  Callable::bind<EditorFeatureProfileManager::Action>
            ((String_conflict *)local_98,(CowData<char32_t> *)local_88,4);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String_conflict *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)local_88);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Remove Profile");
  TTR(local_a0,(String_conflict *)local_98);
  Button::Button(pBVar10,local_a0);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xe00) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe00),0,0);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe00),0));
  plVar2 = *(long **)(this + 0xe00);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager,int>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void_int *)"&EditorFeatureProfileManager::_profile_action");
  Callable::bind<EditorFeatureProfileManager::Action>
            ((String_conflict *)local_98,(CowData<char32_t> *)local_88,5);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String_conflict *)local_98);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)local_88);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Available Profiles:");
  TTR(local_a0,(String_conflict *)local_98);
  VBoxContainer::add_margin_child((String_conflict *)pBVar7,(Control *)local_a0,SUB81(pBVar8,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00125050;
  postinitialize_handler((Object *)pBVar8);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Make Current");
  TTR(local_a0,(String_conflict *)local_98);
  Button::Button(pBVar10,local_a0);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xde0) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xde0),0,0);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xde0),0));
  plVar2 = *(long **)(this + 0xde0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager,int>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void_int *)"&EditorFeatureProfileManager::_profile_action");
  Callable::bind<EditorFeatureProfileManager::Action>
            ((String_conflict *)local_98,(CowData<char32_t> *)local_88,1);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String_conflict *)local_98);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)local_88);
  this_02 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_02);
  postinitialize_handler((Object *)this_02);
  Node::add_child(pBVar8,this_02,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Import");
  TTR(local_a0,(String_conflict *)local_98);
  Button::Button(pBVar10,local_a0);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xde8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xde8),0,0);
  plVar2 = *(long **)(this + 0xde8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager,int>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void_int *)"&EditorFeatureProfileManager::_profile_action");
  Callable::bind<EditorFeatureProfileManager::Action>
            ((String_conflict *)local_98,(CowData<char32_t> *)local_88,2);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String_conflict *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)local_88);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Export");
  TTR(local_a0,(String_conflict *)local_98);
  Button::Button(pBVar10,local_a0);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xdf0) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdf0),0,0);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
  plVar2 = *(long **)(this + 0xdf0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager,int>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void_int *)"&EditorFeatureProfileManager::_profile_action");
  Callable::bind<EditorFeatureProfileManager::Action>
            ((String_conflict *)local_98,(CowData<char32_t> *)local_88,3);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String_conflict *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(pBVar7,pBVar8,0,0);
  this_03 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_03,false);
  this_03[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_03 = &PTR__initialize_classv_00125740;
  postinitialize_handler((Object *)this_03);
  *(SplitContainer **)(this + 0xe08) = this_03;
  Control::set_v_size_flags(this_03,3);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xe08),0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_001253c8;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0xe10) = pBVar7;
  Node::add_child(*(undefined8 *)(this + 0xe08),pBVar7,0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe10),3);
  pTVar11 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar11);
  postinitialize_handler((Object *)pTVar11);
  *(Tree **)(this + 0xe18) = pTVar11;
  Node::set_auto_translate_mode(pTVar11,2);
  pSVar4 = *(String_conflict **)(this + 0xe10);
  local_88[0] = (Object *)0x0;
  uVar1 = *(undefined8 *)(this + 0xe18);
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Configure Selected Profile:");
  TTR(local_a0,(String_conflict *)local_98);
  VBoxContainer::add_margin_child(pSVar4,(Control *)local_a0,SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xe18),0));
  Tree::set_edit_checkbox_cell_only_when_checkbox_is_pressed(SUB81(*(undefined8 *)(this + 0xe18),0))
  ;
  plVar2 = *(long **)(this + 0xe18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void *)"&EditorFeatureProfileManager::_class_list_item_selected");
  StringName::StringName((StringName *)local_98,"cell_selected",false);
  (*pcVar3)(plVar2,(String_conflict *)local_98,(CowData<char32_t> *)local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  plVar2 = *(long **)(this + 0xe18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void *)"&EditorFeatureProfileManager::_class_list_item_edited");
  StringName::StringName((StringName *)local_98,"item_edited",false);
  (*pcVar3)(plVar2,(String_conflict *)local_98,(CowData<char32_t> *)local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  plVar2 = *(long **)(this + 0xe18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(EditorFeatureProfileManager **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC4;
  *(undefined ***)pCVar12 = &PTR_hash_00126188;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar1;
  *(code **)(pCVar12 + 0x38) = _class_list_item_collapsed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "EditorFeatureProfileManager::_class_list_item_collapsed";
  Callable::Callable((Callable *)local_88,pCVar12);
  StringName::StringName((StringName *)local_98,"item_collapsed",false);
  (*pcVar3)(plVar2,(String_conflict *)local_98,(CowData<char32_t> *)local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  pSVar17 = *(StringName **)(this + 0xe18);
  StringName::StringName((StringName *)local_88,"TreeSecondary",false);
  Control::set_theme_type_variation(pSVar17);
  if ((StringName::configured != '\0') && (local_88[0] != (Object *)0x0)) {
    StringName::unref();
  }
  CanvasItem::hide();
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_001253c8;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0xe20) = pBVar7;
  Node::add_child(*(undefined8 *)(this + 0xe08),pBVar7,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe20),3);
  this_04 = (EditorHelpBit *)operator_new(0xab0,"");
  local_88[0] = (Object *)0x0;
  local_98[0] = 0;
  EditorHelpBit::EditorHelpBit
            (this_04,(String_conflict *)local_98,(String_conflict *)local_88,false,true);
  postinitialize_handler((Object *)this_04);
  *(EditorHelpBit **)(this + 0xe30) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  fVar18 = (float)EditorScale::get_scale();
  fVar18 = _LC65 * fVar18;
  fVar19 = (float)EditorScale::get_scale();
  EditorHelpBit::set_content_height_limits(fVar19 * _LC65,fVar18);
  plVar2 = *(long **)(this + 0xe30);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void *)"&EditorFeatureProfileManager::_hide_requested");
  StringName::StringName((StringName *)local_98,"request_hide",false);
  (*pcVar3)(plVar2,(String_conflict *)local_98,(CowData<char32_t> *)local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  pSVar4 = *(String_conflict **)(this + 0xe20);
  local_88[0] = (Object *)0x0;
  uVar1 = *(undefined8 *)(this + 0xe30);
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Description:");
  TTR(local_a0,(String_conflict *)local_98);
  VBoxContainer::add_margin_child(pSVar4,(Control *)local_a0,SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pTVar11 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar11);
  postinitialize_handler((Object *)pTVar11);
  *(Tree **)(this + 0xe28) = pTVar11;
  local_88[0] = (Object *)0x0;
  pSVar4 = *(String_conflict **)(this + 0xe20);
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Extra Options:");
  TTR(local_a0,(String_conflict *)local_98);
  VBoxContainer::add_margin_child(pSVar4,(Control *)local_a0,SUB81(pTVar11,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xe28),0));
  Tree::set_hide_folding(SUB81(*(undefined8 *)(this + 0xe28),0));
  Tree::set_edit_checkbox_cell_only_when_checkbox_is_pressed(SUB81(*(undefined8 *)(this + 0xe28),0))
  ;
  plVar2 = *(long **)(this + 0xe28);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void *)"&EditorFeatureProfileManager::_property_item_edited");
  StringName::StringName((StringName *)local_98,"item_edited",false);
  (*pcVar3)(plVar2,(String_conflict *)local_98,(CowData<char32_t> *)local_88,1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  CanvasItem::hide();
  pLVar13 = (Label *)operator_new(0xad8,"");
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String_conflict *)local_98,
             "Create or import a profile to edit available classes and properties.");
  TTR(local_a0,(String_conflict *)local_98);
  Label::Label(pLVar13,local_a0);
  postinitialize_handler((Object *)pLVar13);
  *(Label **)(this + 0xe38) = pLVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  this_05 = (StyleBox *)operator_new(0x2b0,"");
  StyleBox::StyleBox(this_05);
  *(undefined ***)this_05 = &PTR__initialize_classv_00124e50;
  postinitialize_handler((Object *)this_05);
  cVar6 = RefCounted::init_ref();
  if (cVar6 == '\0') {
    auVar20._0_8_ = EditorScale::get_scale();
    auVar20._8_8_ = extraout_XMM0_Qb;
    this_05 = (StyleBox *)0x0;
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = (float)auVar20._0_8_ * __LC72;
    StyleBox::set_content_margin(auVar21._0_8_,0,1);
    pSVar17 = *(StringName **)(this + 0xe38);
    local_88[0] = (Object *)0x0;
  }
  else {
    auVar22._0_8_ = EditorScale::get_scale();
    auVar22._8_8_ = extraout_XMM0_Qb_00;
    auVar23._4_12_ = auVar22._4_12_;
    auVar23._0_4_ = (float)auVar22._0_8_ * __LC72;
    StyleBox::set_content_margin(auVar23._0_8_,this_05,1);
    pSVar17 = *(StringName **)(this + 0xe38);
    local_88[0] = (Object *)0x0;
    pOVar16 = (Object *)__dynamic_cast(this_05,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar16 != (Object *)0x0) {
      local_88[0] = pOVar16;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_88[0] = (Object *)0x0;
      }
    }
  }
  Control::add_theme_style_override(pSVar17,(Ref *)(CoreStringNames::singleton + 0xb8));
  if (local_88[0] != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar16 = local_88[0];
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_88[0]);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
        Memory::free_static(pOVar16,false);
      }
    }
  }
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xe38),1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe38),3);
  Node::add_child(*(undefined8 *)(this + 0xe08),*(undefined8 *)(this + 0xe38),0,0);
  pCVar14 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar14);
  postinitialize_handler((Object *)pCVar14);
  *(ConfirmationDialog **)(this + 0xdb8) = pCVar14;
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Create Profile");
  TTR(local_a0,(String_conflict *)local_98);
  Window::set_title((String_conflict *)pCVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_001253c8;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(*(undefined8 *)(this + 0xdb8),pBVar7,0,0);
  pLVar13 = (Label *)operator_new(0xad8,"");
  local_88[0] = (Object *)0x0;
  Label::Label(pLVar13,(String_conflict *)local_88);
  postinitialize_handler((Object *)pLVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"New profile name:");
  TTR(local_a0,(String_conflict *)local_98);
  Label::set_text((String_conflict *)pLVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(pBVar7,pLVar13,0,0);
  pLVar9 = (LineEdit *)operator_new(0xbb0,"");
  local_88[0] = (Object *)0x0;
  LineEdit::LineEdit(pLVar9,(String_conflict *)local_88);
  postinitialize_handler((Object *)pLVar9);
  *(LineEdit **)(this + 0xdc0) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xdc0),0,0);
  pVVar5 = *(Vector2 **)(this + 0xdc0);
  local_58[0] = (float)EditorScale::get_scale();
  local_58[0] = local_58[0] * __LC74;
  local_58[1] = 1.0;
  Control::set_custom_minimum_size(pVVar5);
  Node::add_child(this,*(undefined8 *)(this + 0xdb8),0,0);
  plVar2 = *(long **)(this + 0xdb8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void *)"&EditorFeatureProfileManager::_create_new_profile");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  AcceptDialog::register_text_enter(*(LineEdit **)(this + 0xdb8));
  uVar1 = *(undefined8 *)(this + 0xdb8);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Create");
  TTR(local_a0,(String_conflict *)local_98);
  AcceptDialog::set_ok_button_text(uVar1,local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pCVar14 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar14);
  postinitialize_handler((Object *)pCVar14);
  *(ConfirmationDialog **)(this + 0xdb0) = pCVar14;
  Node::add_child(this,pCVar14,0,0);
  pSVar4 = *(String_conflict **)(this + 0xdb0);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Remove Profile");
  TTR(local_a0,(String_conflict *)local_98);
  Window::set_title(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  plVar2 = *(long **)(this + 0xdb0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void *)"&EditorFeatureProfileManager::_erase_selected_profile");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_88);
  Callable::~Callable((Callable *)local_88);
  pEVar15 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar15);
  postinitialize_handler((Object *)pEVar15);
  *(EditorFileDialog **)(this + 0xe40) = pEVar15;
  Node::add_child(this,pEVar15,0);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xe40),1);
  pSVar4 = *(String_conflict **)(this + 0xe40);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Godot Feature Profile");
  TTR(local_a0,(String_conflict *)local_98);
  local_a8 = 0;
  String::parse_latin1((String_conflict *)&local_a8,"*.profile");
  EditorFileDialog::add_filter(pSVar4,(String_conflict *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  plVar2 = *(long **)(this + 0xe40);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(EditorFeatureProfileManager **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC4;
  *(undefined ***)pCVar12 = &PTR_hash_00126218;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar1;
  *(code **)(pCVar12 + 0x38) = _import_profiles;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "EditorFeatureProfileManager::_import_profiles";
  Callable::Callable((Callable *)local_88,pCVar12);
  StringName::StringName((StringName *)local_98,"files_selected",false);
  (*pcVar3)(plVar2,(String_conflict *)local_98,(CowData<char32_t> *)local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  pSVar4 = *(String_conflict **)(this + 0xe40);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Import Profile(s)");
  TTR(local_a0,(String_conflict *)local_98);
  Window::set_title(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  EditorFileDialog::set_access(*(undefined8 *)(this + 0xe40),2);
  pEVar15 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar15);
  postinitialize_handler((Object *)pEVar15);
  *(EditorFileDialog **)(this + 0xe48) = pEVar15;
  Node::add_child(this,pEVar15,0);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xe48),4);
  pSVar4 = *(String_conflict **)(this + 0xe48);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Godot Feature Profile");
  TTR(local_a0,(String_conflict *)local_98);
  local_a8 = 0;
  String::parse_latin1((String_conflict *)&local_a8,"*.profile");
  EditorFileDialog::add_filter(pSVar4,(String_conflict *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  plVar2 = *(long **)(this + 0xe48);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(EditorFeatureProfileManager **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC4;
  *(undefined ***)pCVar12 = &PTR_hash_001262a8;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar1;
  *(code **)(pCVar12 + 0x38) = _export_profile;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "EditorFeatureProfileManager::_export_profile";
  Callable::Callable((Callable *)local_88,pCVar12);
  StringName::StringName((StringName *)local_98,"file_selected",false);
  (*pcVar3)(plVar2,(String_conflict *)local_98,(CowData<char32_t> *)local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  pSVar4 = *(String_conflict **)(this + 0xe48);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Export Profile");
  TTR(local_a0,(String_conflict *)local_98);
  Window::set_title(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  EditorFileDialog::set_access(*(undefined8 *)(this + 0xe48),2);
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String_conflict *)local_98,"Manage Editor Feature Profiles");
  TTR(local_a0,(String_conflict *)local_98);
  Window::set_title((String_conflict *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Variant::Variant((Variant *)local_58,"");
  local_88[0] = (Object *)0x0;
  String::parse_latin1((String_conflict *)local_88,"_default_feature_profile");
  _EDITOR_DEF((String_conflict *)local_78,(Variant *)local_88,SUB81((Variant *)local_58,0),false);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  this_06 = (Timer *)operator_new(0x428,"");
  Timer::Timer(this_06);
  postinitialize_handler((Object *)this_06);
  *(Timer **)(this + 0xe70) = this_06;
  Timer::set_wait_time(_LC89);
  Node::add_child(this,*(undefined8 *)(this + 0xe70),0,0);
  plVar2 = *(long **)(this + 0xe70);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorFeatureProfileManager>
            ((EditorFeatureProfileManager *)local_88,(char *)this,
             (_func_void *)"&EditorFeatureProfileManager::_emit_current_profile_changed");
  StringName::StringName((StringName *)local_98,"timeout",false);
  (*pcVar3)(plVar2,(String_conflict *)local_98,(CowData<char32_t> *)local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xe70),0));
  singleton = this;
  if (this_05 != (StyleBox *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler((Object *)this_05);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)this_05 + 0x140))(this_05);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(this_05,false);
          return;
        }
        goto LAB_00102cdd;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102cdd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

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



/* EditorFeatureProfileManager::get_current_profile_name() const */

void EditorFeatureProfileManager::get_current_profile_name(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xe50) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xe50));
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



/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::adjust_heap
               (long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  String_conflict *pSVar1;
  char cVar2;
  CowData<char32_t> *this;
  CowData<char32_t> *pCVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_48;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  if (lVar6 < param_3) {
    do {
      this = (CowData<char32_t> *)(param_5 + (lVar6 + -1 + param_1) * 8);
      pSVar1 = (String_conflict *)(param_5 + (param_1 + lVar6) * 8);
      cVar2 = String::operator<(pSVar1,(String_conflict *)this);
      lVar4 = lVar6 + -1;
      lVar5 = lVar6;
      if (cVar2 == '\0') {
        lVar5 = lVar6 + 1;
        this = (CowData<char32_t> *)pSVar1;
        lVar4 = lVar6;
      }
      pCVar3 = (CowData<char32_t> *)(param_5 + (local_68 + param_1) * 8);
      if (*(long *)pCVar3 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar3,(CowData *)this);
      }
      lVar6 = lVar5 * 2;
      local_68 = lVar4;
    } while (lVar6 < param_3);
  }
  else {
    this = (CowData<char32_t> *)(param_5 + (param_2 + param_1) * 8);
    lVar4 = param_2;
  }
  pCVar3 = this;
  if (param_3 == lVar6) {
    lVar4 = param_3 + -1;
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (*(long *)this != *(long *)pCVar3) {
      CowData<char32_t>::_ref(this,(CowData *)pCVar3);
    }
  }
  local_48 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_4);
  }
  lVar6 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  while (param_2 < lVar4) {
    lVar5 = lVar6 >> 1;
    pSVar1 = (String_conflict *)(param_5 + (param_1 + lVar5) * 8);
    cVar2 = String::operator<(pSVar1,(String_conflict *)&local_48);
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (cVar2 == '\0') break;
    if (*(long *)pCVar3 != *(long *)pSVar1) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)pSVar1);
    }
    lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
    pCVar3 = (CowData<char32_t> *)pSVar1;
    lVar4 = lVar5;
  }
  if (*(long *)pCVar3 != local_48) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::introsort
               (long param_1,long param_2,String_conflict *param_3,long param_4)

{
  long *plVar1;
  String_conflict *pSVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  String_conflict *pSVar6;
  CowData<char32_t> *this;
  long lVar7;
  String_conflict *pSVar8;
  String_conflict *pSVar9;
  long lVar10;
  CowData *pCVar11;
  long in_FS_OFFSET;
  long local_90;
  long local_78;
  long local_70;
  long local_50;
  long local_48;
  long local_40;
  
  lVar7 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar7) {
    local_90 = param_2;
    if (param_4 != 0) {
      pSVar6 = param_3 + param_1 * 8;
      local_78 = param_2;
      local_70 = param_4;
LAB_001030e8:
      local_70 = local_70 + -1;
      pSVar9 = param_3 + ((lVar7 >> 1) + param_1) * 8;
      pSVar2 = param_3 + local_78 * 8 + -8;
      cVar5 = String::operator<(pSVar6,pSVar9);
      if (cVar5 == '\0') {
        cVar5 = String::operator<(pSVar6,pSVar2);
        pSVar8 = pSVar6;
        if (cVar5 != '\0') goto LAB_00103146;
        cVar5 = String::operator<(pSVar9,pSVar2);
      }
      else {
        cVar5 = String::operator<(pSVar9,pSVar2);
        pSVar8 = pSVar9;
        if (cVar5 != '\0') goto LAB_00103146;
        cVar5 = String::operator<(pSVar6,pSVar2);
        pSVar9 = pSVar6;
      }
      pSVar8 = pSVar9;
      if (cVar5 != '\0') {
        pSVar8 = pSVar2;
      }
LAB_00103146:
      local_48 = 0;
      if (*(long *)pSVar8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)pSVar8);
      }
      lVar7 = local_78;
      pSVar9 = pSVar6;
      local_90 = param_1;
      do {
        cVar5 = String::operator<(pSVar9,(String_conflict *)&local_48);
        if (cVar5 == '\0') {
LAB_001031a7:
          lVar7 = lVar7 + -1;
          this = (CowData<char32_t> *)(param_3 + lVar7 * 8);
          while (cVar5 = String::operator<((String_conflict *)&local_48,(String_conflict *)this),
                cVar5 != '\0') {
            if (param_1 == lVar7) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar7 = lVar7 + -1;
            this = this + -8;
          }
          if (lVar7 <= local_90) goto LAB_00103260;
          lVar10 = *(long *)pSVar9;
          *(undefined8 *)pSVar9 = 0;
          if (*(long *)this != 0) {
            *(long *)pSVar9 = *(long *)this;
            *(undefined8 *)this = 0;
          }
          if (lVar10 != 0) {
            CowData<char32_t>::_unref(this);
            *(long *)this = lVar10;
          }
        }
        else if (local_78 + -1 == local_90) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_001031a7;
        }
        pSVar9 = pSVar9 + 8;
        local_90 = local_90 + 1;
      } while( true );
    }
LAB_00103327:
    lVar10 = lVar7 + -2 >> 1;
    pSVar6 = param_3 + (lVar10 + param_1) * 8;
    while( true ) {
      local_48 = 0;
      if (*(long *)pSVar6 == 0) {
        adjust_heap(param_1,lVar10,lVar7,(CowData<char32_t> *)&local_48,param_3);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)pSVar6);
        lVar4 = local_48;
        adjust_heap(param_1,lVar10,lVar7,(CowData<char32_t> *)&local_48,param_3);
        if (lVar4 != 0) {
          LOCK();
          plVar1 = (long *)(lVar4 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      if (lVar10 == 0) break;
      pSVar6 = (String_conflict *)((CowData *)pSVar6 + -8);
      lVar10 = lVar10 + -1;
    }
    pSVar6 = param_3 + local_90 * 8 + -8;
    pCVar11 = (CowData *)(param_3 + param_1 * 8);
    lVar7 = (local_90 + -1) - param_1;
    do {
      local_50 = 0;
      if (*(long *)pSVar6 == 0) {
        if (*(long *)pCVar11 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar6,pCVar11);
        }
LAB_001034e7:
        local_48 = 0;
        adjust_heap(param_1,0,lVar7,(CowData<char32_t> *)&local_48,param_3);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)pSVar6);
        lVar10 = local_50;
        if (*(long *)pSVar6 != *(long *)pCVar11) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar6,pCVar11);
        }
        local_48 = 0;
        if (lVar10 == 0) goto LAB_001034e7;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_50);
        lVar4 = local_48;
        adjust_heap(param_1,0,lVar7,(CowData<char32_t> *)&local_48,param_3);
        if (lVar4 == 0) {
LAB_0010348f:
          LOCK();
          plVar1 = (long *)(lVar10 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_50 + -0x10),false);
          }
        }
        else {
          LOCK();
          plVar1 = (long *)(lVar4 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
          lVar10 = local_50;
          if (local_50 != 0) goto LAB_0010348f;
        }
      }
      pSVar6 = (String_conflict *)((CowData<char32_t> *)pSVar6 + -8);
      bVar3 = 1 < lVar7;
      lVar7 = lVar7 + -1;
    } while (bVar3);
  }
LAB_001032ff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00103260:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  introsort(local_90,local_78,param_3,local_70);
  lVar7 = local_90 - param_1;
  if (lVar7 < 0x11) goto LAB_001032ff;
  local_78 = local_90;
  if (local_70 == 0) goto LAB_00103327;
  goto LAB_001030e8;
}



/* EditorFeatureProfile::save_to_file(String const&) */

undefined8 __thiscall
EditorFeatureProfile::save_to_file(EditorFeatureProfile *this,String_conflict *param_1)

{
  long *plVar1;
  Object *pOVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  Object *pOVar7;
  char cVar8;
  Variant *pVVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  EditorFeatureProfile *pEVar13;
  undefined **ppuVar14;
  long in_FS_OFFSET;
  Dictionary local_328 [8];
  Array local_320 [8];
  Array local_318 [8];
  Array local_310 [8];
  long local_308;
  Object *local_300;
  long local_2f8;
  long local_2f0;
  char *local_2e8;
  size_t local_2e0;
  int local_2d8 [8];
  undefined **local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_78;
  int local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_328);
  Variant::Variant((Variant *)&local_2b8,"feature_profile");
  Variant::Variant((Variant *)local_2d8,"type");
  pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_328);
  if (pVVar9 != (Variant *)&local_2b8) {
    if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar9 = 0;
    *(int *)pVVar9 = (int)local_2b8;
    *(undefined8 *)(pVVar9 + 8) = local_2b0;
    *(undefined8 *)(pVVar9 + 0x10) = uStack_2a8;
    local_2b8 = (undefined **)((ulong)local_2b8 & 0xffffffff00000000);
  }
  if (Variant::needs_deinit[local_2d8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_2b8] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_320);
  iVar3 = *(int *)(this + 0x1a4);
  if (iVar3 != 0) {
    lVar12 = 0;
    plVar4 = *(long **)(this + 0x180);
    lVar11 = *plVar4;
    if (lVar11 == 0) goto LAB_001040a5;
    do {
      pcVar5 = *(char **)(lVar11 + 8);
      local_2f0 = 0;
      if (pcVar5 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_2f0,(CowData *)(lVar11 + 0x10));
      }
      else {
        local_2e0 = strlen(pcVar5);
        local_2e8 = pcVar5;
        String::parse_latin1((StrRange *)&local_2f0);
      }
      while( true ) {
        Variant::Variant((Variant *)&local_2b8,(String_conflict *)&local_2f0);
        Array::push_back((Variant *)local_320);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f0);
        if (iVar3 <= (int)lVar12 + 1) goto LAB_00103668;
        lVar12 = lVar12 + 1;
        lVar11 = plVar4[lVar12];
        if (lVar11 != 0) break;
LAB_001040a5:
        local_2f0 = 0;
      }
    } while( true );
  }
LAB_00103668:
  Array::sort();
  Variant::Variant((Variant *)&local_2b8,local_320);
  Variant::Variant((Variant *)local_2d8,"disabled_classes");
  pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_328);
  if (pVVar9 != (Variant *)&local_2b8) {
    if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar9 = 0;
    *(int *)pVVar9 = (int)local_2b8;
    *(undefined8 *)(pVVar9 + 8) = local_2b0;
    *(undefined8 *)(pVVar9 + 0x10) = uStack_2a8;
    local_2b8 = (undefined **)((ulong)local_2b8 & 0xffffffff00000000);
  }
  if (Variant::needs_deinit[local_2d8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_2b8] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_318);
  iVar3 = *(int *)(this + 0x1cc);
  if (iVar3 != 0) {
    plVar4 = *(long **)(this + 0x1a8);
    lVar12 = 0;
    lVar11 = *plVar4;
    if (lVar11 == 0) goto LAB_001037e9;
    do {
      pcVar5 = *(char **)(lVar11 + 8);
      local_2f0 = 0;
      if (pcVar5 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_2f0,(CowData *)(lVar11 + 0x10));
      }
      else {
        local_2e0 = strlen(pcVar5);
        local_2e8 = pcVar5;
        String::parse_latin1((StrRange *)&local_2f0);
      }
      while( true ) {
        Variant::Variant((Variant *)&local_2b8,(String_conflict *)&local_2f0);
        Array::push_back((Variant *)local_318);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f0);
        if (iVar3 <= (int)lVar12 + 1) goto LAB_00103804;
        lVar12 = lVar12 + 1;
        lVar11 = plVar4[lVar12];
        if (lVar11 != 0) break;
LAB_001037e9:
        local_2f0 = 0;
      }
    } while( true );
  }
LAB_00103804:
  Array::sort();
  Variant::Variant((Variant *)&local_2b8,local_318);
  Variant::Variant((Variant *)local_2d8,"disabled_editors");
  pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_328);
  if (pVVar9 != (Variant *)&local_2b8) {
    if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar9 = 0;
    *(int *)pVVar9 = (int)local_2b8;
    *(undefined8 *)(pVVar9 + 8) = local_2b0;
    *(undefined8 *)(pVVar9 + 0x10) = uStack_2a8;
    local_2b8 = (undefined **)((ulong)local_2b8 & 0xffffffff00000000);
  }
  if (Variant::needs_deinit[local_2d8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_2b8] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_310);
  puVar6 = *(undefined8 **)(this + 0x1e8);
  while( true ) {
    if (puVar6 == (undefined8 *)0x0) {
      Variant::Variant((Variant *)&local_2b8,local_310);
      Variant::Variant((Variant *)local_2d8,"disabled_properties");
      pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_328);
      if (pVVar9 != (Variant *)&local_2b8) {
        if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = (int)local_2b8;
        *(undefined8 *)(pVVar9 + 8) = local_2b0;
        *(undefined8 *)(pVVar9 + 0x10) = uStack_2a8;
        local_2b8 = (undefined **)((ulong)local_2b8 & 0xffffffff00000000);
      }
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
        Variant::_clear_internal();
      }
      ppuVar14 = &feature_identifiers;
      Array::Array((Array *)&local_308);
      pEVar13 = this + 0x228;
      do {
        if (*pEVar13 != (EditorFeatureProfile)0x0) {
          Variant::Variant((Variant *)&local_2b8,*ppuVar14);
          Array::push_back((Variant *)&local_308);
          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
          }
        }
        pEVar13 = pEVar13 + 1;
        ppuVar14 = ppuVar14 + 1;
      } while (ppuVar14 != (undefined **)&DAT_00126688);
      Variant::Variant((Variant *)&local_2b8,(Array *)&local_308);
      Variant::Variant((Variant *)local_2d8,"disabled_features");
      pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_328);
      if (pVVar9 != (Variant *)&local_2b8) {
        if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = (int)local_2b8;
        *(undefined8 *)(pVVar9 + 8) = local_2b0;
        *(undefined8 *)(pVVar9 + 0x10) = uStack_2a8;
        local_2b8 = (undefined **)((ulong)local_2b8 & 0xffffffff00000000);
      }
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
        Variant::_clear_internal();
      }
      FileAccess::open((String_conflict *)&local_300,(int)param_1,(Error *)0x2);
      if (local_300 == (Object *)0x0) {
        local_2f0 = 0;
        String::parse_latin1((String_conflict *)&local_2f0,"\'.");
        operator+((char *)&local_2f8,(String_conflict *)"Cannot create file \'");
        String::operator+((String_conflict *)&local_2e8,(String_conflict *)&local_2f8);
        _err_print_error("save_to_file","editor/editor_feature_profile.cpp",0xd3,
                         "Condition \"f.is_null()\" is true. Returning: ERR_CANT_CREATE",
                         (String_conflict *)&local_2e8,0,0);
        uVar10 = 0x14;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f0);
      }
      else {
        Resource::Resource((Resource *)&local_2b8);
        local_68 = (undefined1  [16])0x0;
        local_2e8 = "\t";
        local_2b8 = &PTR__initialize_classv_00125e90;
        local_78 = 0;
        local_70 = 0;
        local_58 = 0;
        local_50 = 0;
        local_2f0 = 0;
        local_2e0 = 1;
        String::parse_latin1((StrRange *)&local_2f0);
        Variant::Variant((Variant *)local_2d8,local_328);
        JSON::stringify((Variant *)&local_2e8,(String_conflict *)local_2d8,
                        SUB81((StrRange *)&local_2f0,0),true);
        if (Variant::needs_deinit[local_2d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f0);
        (**(code **)(*(long *)local_300 + 0x2a8))();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
        local_2b8 = &PTR__initialize_classv_00125e90;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (Variant::needs_deinit[local_70] != '\0') {
          Variant::_clear_internal();
        }
        uVar10 = 0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        Resource::~Resource((Resource *)&local_2b8);
      }
      if (((local_300 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar7 = local_300, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_300), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      Array::~Array((Array *)&local_308);
      Array::~Array(local_310);
      Array::~Array(local_318);
      Array::~Array(local_320);
      Dictionary::~Dictionary(local_328);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar10;
    }
    iVar3 = *(int *)((long)puVar6 + 0x3c);
    if (iVar3 != 0) break;
LAB_00103b93:
    puVar6 = (undefined8 *)*puVar6;
  }
  plVar4 = (long *)puVar6[3];
  lVar12 = 0;
  lVar11 = *plVar4;
  if (lVar11 == 0) goto LAB_00103b75;
  do {
    pcVar5 = *(char **)(lVar11 + 8);
    local_2f0 = 0;
    if (pcVar5 == (char *)0x0) {
      if (*(long *)(lVar11 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_2f0,(CowData *)(lVar11 + 0x10));
      }
    }
    else {
      local_2e0 = strlen(pcVar5);
      local_2e8 = pcVar5;
      String::parse_latin1((StrRange *)&local_2f0);
    }
    while( true ) {
      local_300 = (Object *)0x0;
      local_2e8 = ":";
      local_2e0 = 1;
      String::parse_latin1((StrRange *)&local_300);
      lVar11 = puVar6[2];
      if (lVar11 == 0) {
        local_308 = 0;
      }
      else {
        pcVar5 = *(char **)(lVar11 + 8);
        local_308 = 0;
        if (pcVar5 == (char *)0x0) {
          if (*(long *)(lVar11 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_308,(CowData *)(lVar11 + 0x10));
          }
        }
        else {
          local_2e0 = strlen(pcVar5);
          local_2e8 = pcVar5;
          String::parse_latin1((StrRange *)&local_308);
        }
      }
      String::operator+((String_conflict *)&local_2f8,(String_conflict *)&local_308);
      String::operator+((String_conflict *)&local_2e8,(String_conflict *)&local_2f8);
      Variant::Variant((Variant *)&local_2b8,(String_conflict *)&local_2e8);
      Array::push_back((Variant *)local_310);
      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
        Variant::_clear_internal();
      }
      pcVar5 = local_2e8;
      if (local_2e8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_2e8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_2e8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar11 = local_2f8;
      if (local_2f8 != 0) {
        LOCK();
        plVar1 = (long *)(local_2f8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_2f8 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      lVar11 = local_308;
      if (local_308 != 0) {
        LOCK();
        plVar1 = (long *)(local_308 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_308 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      pOVar7 = local_300;
      if (local_300 != (Object *)0x0) {
        LOCK();
        pOVar2 = local_300 + -0x10;
        *(long *)pOVar2 = *(long *)pOVar2 + -1;
        UNLOCK();
        if (*(long *)pOVar2 == 0) {
          local_300 = (Object *)0x0;
          Memory::free_static(pOVar7 + -0x10,false);
        }
      }
      lVar11 = local_2f0;
      if (local_2f0 != 0) {
        LOCK();
        plVar1 = (long *)(local_2f0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_2f0 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      if (iVar3 <= (int)lVar12 + 1) goto LAB_00103b93;
      lVar12 = lVar12 + 1;
      lVar11 = plVar4[lVar12];
      if (lVar11 != 0) break;
LAB_00103b75:
      local_2f0 = 0;
    }
  } while( true );
}



/* EditorFeatureProfileManager::_export_profile(String const&) */

void __thiscall
EditorFeatureProfileManager::_export_profile
          (EditorFeatureProfileManager *this,String_conflict *param_1)

{
  String_conflict *pSVar1;
  int iVar2;
  long in_FS_OFFSET;
  String_conflict local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(EditorFeatureProfile **)(this + 0xe60) == (EditorFeatureProfile *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_export_profile","editor/editor_feature_profile.cpp",0x34f,
                       "Condition \"edited.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    iVar2 = EditorFeatureProfile::save_to_file(*(EditorFeatureProfile **)(this + 0xe60),param_1);
    pSVar1 = EditorNode::singleton;
    if (iVar2 != 0) {
      local_88 = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_88);
      local_58 = "Warning!";
      local_80 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_80);
      TTR(local_90,(String_conflict *)&local_80);
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)param_1);
      local_58 = "";
      local_68 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_68);
      local_58 = "Error saving profile to path: \'%s\'.";
      local_60 = 0;
      local_50 = 0x23;
      String::parse_latin1((StrRange *)&local_60);
      TTR((String_conflict *)&local_58,(String_conflict *)&local_60);
      vformat<String>(local_78,(String_conflict *)&local_58,(CowData<char32_t> *)&local_70);
      EditorNode::show_warning(pSVar1,(String_conflict *)local_78);
      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_save_and_update() */

void __thiscall EditorFeatureProfileManager::_save_and_update(EditorFeatureProfileManager *this)

{
  EditorFeatureProfile *this_00;
  long in_FS_OFFSET;
  long local_78;
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  String_conflict local_60 [8];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_selected_profile((EditorFeatureProfileManager *)&local_78);
  if ((local_78 == 0) || (*(uint *)(local_78 + -8) < 2)) {
    _err_print_error("_save_and_update","editor/editor_feature_profile.cpp",0x358,
                     "Condition \"edited_path.is_empty()\" is true.",0,0);
  }
  else {
    this_00 = *(EditorFeatureProfile **)(this + 0xe60);
    if (this_00 == (EditorFeatureProfile *)0x0) {
      _err_print_error("_save_and_update","editor/editor_feature_profile.cpp",0x359,
                       "Condition \"edited.is_null()\" is true.",0,0);
    }
    else {
      EditorPaths::get_feature_profiles_dir();
      local_58 = ".profile";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      String::operator+(local_60,(String_conflict *)&local_78);
      String::path_join((String_conflict *)&local_58);
      EditorFeatureProfile::save_to_file(this_00,(String_conflict *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_70);
      if (*(long *)(this + 0xe60) == *(long *)(this + 0xe58)) {
        Timer::start(_LC126);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_bind_methods() */

void EditorFeatureProfileManager::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = 0;
  local_b0 = 0x1f;
  local_b8 = "current_feature_profile_changed";
  String::parse_latin1((StrRange *)&local_d0);
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 0x1b;
  local_c8 = "EditorFeatureProfileManager";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String_conflict *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar6 = 0;
        piVar5 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
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



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::erase(StringName const&) [clone .isra.0] */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  char cVar22;
  uint uVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint *puVar30;
  uint *puVar31;
  ulong uVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  cVar22 = _lookup_pos(this,param_1,&local_44);
  uVar21 = local_44;
  if (cVar22 != '\0') {
    uVar33 = (ulong)local_44;
    lVar5 = *(long *)(this + 0x10);
    lVar6 = *(long *)(this + 0x18);
    uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar28 = CONCAT44(0,uVar23);
    local_44 = *(uint *)(lVar5 + uVar33 * 4);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)(local_44 + 1) * lVar7;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar28;
    lVar24 = SUB168(auVar9 * auVar15,8) * 4;
    uVar26 = SUB164(auVar9 * auVar15,8);
    puVar31 = (uint *)(lVar6 + lVar24);
    if ((*puVar31 == 0) ||
       (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)*puVar31 * lVar7, auVar16._8_8_ = 0,
       auVar16._0_8_ = uVar28, auVar11._8_8_ = 0,
       auVar11._0_8_ = (ulong)((uVar23 + uVar26) - SUB164(auVar10 * auVar16,8)) * lVar7,
       auVar17._8_8_ = 0, auVar17._0_8_ = uVar28, SUB164(auVar11 * auVar17,8) == 0)) {
      uVar32 = (ulong)local_44;
    }
    else {
      lVar8 = *(long *)(this + 8);
      uVar29 = (ulong)local_44;
      uVar32 = (ulong)uVar26;
      while( true ) {
        puVar25 = (uint *)(lVar24 + lVar8);
        puVar1 = (uint *)(lVar8 + uVar29 * 4);
        puVar30 = (uint *)(uVar29 * 4 + lVar6);
        puVar2 = (undefined4 *)(lVar5 + (ulong)*puVar25 * 4);
        puVar3 = (undefined4 *)(lVar5 + (ulong)*puVar1 * 4);
        uVar4 = *puVar3;
        *puVar3 = *puVar2;
        *puVar2 = uVar4;
        uVar26 = *puVar31;
        *puVar31 = *puVar30;
        *puVar30 = uVar26;
        uVar26 = *puVar25;
        *puVar25 = *puVar1;
        local_44 = (uint)uVar32;
        *puVar1 = uVar26;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(local_44 + 1) * lVar7;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar28;
        uVar27 = SUB168(auVar14 * auVar20,8);
        lVar24 = uVar27 * 4;
        puVar31 = (uint *)(lVar6 + lVar24);
        if ((*puVar31 == 0) ||
           (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)*puVar31 * lVar7, auVar18._8_8_ = 0,
           auVar18._0_8_ = uVar28, auVar13._8_8_ = 0,
           auVar13._0_8_ =
                (ulong)((SUB164(auVar14 * auVar20,8) + uVar23) - SUB164(auVar12 * auVar18,8)) *
                lVar7, auVar19._8_8_ = 0, auVar19._0_8_ = uVar28, SUB164(auVar13 * auVar19,8) == 0))
        break;
        uVar29 = uVar32;
        uVar32 = uVar27 & 0xffffffff;
      }
    }
    lVar24 = *(long *)this;
    *(undefined4 *)(lVar6 + uVar32 * 4) = 0;
    if ((StringName::configured != '\0') && (*(long *)(lVar24 + uVar33 * 8) != 0)) {
      StringName::unref();
    }
    uVar23 = *(int *)(this + 0x24) - 1;
    *(uint *)(this + 0x24) = uVar23;
    if (uVar21 < uVar23) {
      StringName::StringName
                ((StringName *)(*(long *)this + uVar33 * 8),
                 (StringName *)(*(long *)this + (ulong)uVar23 * 8));
      uVar28 = (ulong)*(uint *)(this + 0x24);
      if ((StringName::configured != '\0') && (*(long *)(*(long *)this + uVar28 * 8) != 0)) {
        StringName::unref();
        uVar28 = (ulong)*(uint *)(this + 0x24);
      }
      lVar24 = *(long *)(this + 0x10);
      *(undefined4 *)(lVar24 + uVar33 * 4) = *(undefined4 *)(lVar24 + uVar28 * 4);
      *(uint *)(*(long *)(this + 8) +
               (ulong)*(uint *)(lVar24 + (ulong)*(uint *)(this + 0x24) * 4) * 4) = uVar21;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorFeatureProfile::set_item_collapsed(StringName const&, bool) */

void __thiscall
EditorFeatureProfile::set_item_collapsed
          (EditorFeatureProfile *this,StringName *param_1,bool param_2)

{
  long in_FS_OFFSET;
  StringName aSStack_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2) {
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
              (aSStack_28);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               (this + 0x200),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::set_disable_class_editor(StringName const&, bool) */

void __thiscall
EditorFeatureProfile::set_disable_class_editor
          (EditorFeatureProfile *this,StringName *param_1,bool param_2)

{
  long in_FS_OFFSET;
  StringName aSStack_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2) {
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
              (aSStack_28);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               (this + 0x1a8),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::set_disable_class(StringName const&, bool) */

void __thiscall
EditorFeatureProfile::set_disable_class(EditorFeatureProfile *this,StringName *param_1,bool param_2)

{
  long in_FS_OFFSET;
  StringName aSStack_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2) {
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
              (aSStack_28);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               (this + 0x180),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_class_list_item_collapsed(Object*) */

void __thiscall
EditorFeatureProfileManager::_class_list_item_collapsed
          (EditorFeatureProfileManager *this,Object *param_1)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  Variant aVStack_68 [8];
  long local_60;
  StringName local_58 [16];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xe68] != (EditorFeatureProfileManager)0x1) && (param_1 != (Object *)0x0)) {
    lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    if (lVar2 != 0) {
      TreeItem::get_metadata((int)local_48);
      if ((local_48[0] == 0x15) || (local_48[0] == 4)) {
        Variant::operator_cast_to_String(aVStack_68);
        cVar1 = TreeItem::is_collapsed();
        lVar2 = *(long *)(this + 0xe60);
        StringName::StringName((StringName *)&local_60,(String_conflict *)aVStack_68,false);
        if (cVar1 == '\0') {
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
                    ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                      *)(lVar2 + 0x200),(StringName *)&local_60);
        }
        else {
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    (local_58);
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_68);
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::is_class_property_disabled(StringName const&, StringName const&) const */

undefined8 __thiscall
EditorFeatureProfile::is_class_property_disabled
          (EditorFeatureProfile *this,StringName *param_1,StringName *param_2)

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
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x1d8) != 0) && (*(int *)(this + 0x1fc) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1f8) * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar16 = SUB168(auVar3 * auVar7,8);
    uVar18 = *(uint *)(*(long *)(this + 0x1e0) + lVar16 * 4);
    iVar15 = SUB164(auVar3 * auVar7,8);
    if (uVar18 != 0) {
      uVar19 = 0;
      do {
        if ((uVar13 == uVar18) &&
           (*(long *)(*(long *)(*(long *)(this + 0x1d8) + lVar16 * 8) + 0x10) == *(long *)param_1))
        {
          local_44 = 0;
          cVar12 = HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                   ::_lookup_pos((HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                                  *)(this + 0x1d0),param_1,&local_44);
          if (cVar12 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          uVar17 = (ulong)local_44;
          local_44 = 0;
          uVar14 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                   _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                                *)(*(long *)(*(long *)(this + 0x1d8) + uVar17 * 8) + 0x18),param_2,
                               &local_44);
          goto LAB_00104feb;
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar15 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar16 = SUB168(auVar4 * auVar8,8);
        uVar18 = *(uint *)(*(long *)(this + 0x1e0) + lVar16 * 4);
        iVar15 = SUB164(auVar4 * auVar8,8);
      } while ((uVar18 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar18 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar19 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  uVar14 = 0;
LAB_00104feb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_class_list_item_selected() */

void __thiscall
EditorFeatureProfileManager::_class_list_item_selected(EditorFeatureProfileManager *this)

{
  EditorFeatureProfile *pEVar1;
  String_conflict *pSVar2;
  Object *pOVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 *puVar12;
  long in_FS_OFFSET;
  Variant local_b8 [8];
  long *local_b0;
  undefined8 local_a8;
  long local_a0;
  String_conflict local_98 [8];
  undefined8 local_90;
  long local_88;
  Object *local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xe68] != (EditorFeatureProfileManager)0x0) goto LAB_00105091;
  Tree::clear();
  lVar8 = Tree::get_selected();
  if (lVar8 == 0) goto LAB_00105091;
  TreeItem::get_metadata((int)(Variant *)local_78);
  lVar8 = (long)local_78[0];
  if ((local_78[0] == 0x15) || (local_78[0] == 4)) {
    pSVar2 = *(String_conflict **)(this + 0xe30);
    local_80 = (Object *)0x0;
    local_90 = 0;
    String::parse_latin1((String_conflict *)&local_90,"|");
    Variant::operator_cast_to_String((Variant *)&local_a0);
    operator+((char *)local_98,(String_conflict *)"class|");
    String::operator+((String_conflict *)&local_88,local_98);
    EditorHelpBit::parse_symbol(pSVar2,(String_conflict *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    Variant::operator_cast_to_String(local_b8);
    pEVar1 = *(EditorFeatureProfile **)(this + 0xe60);
    StringName::StringName((StringName *)&local_80,(String_conflict *)local_b8,false);
    if (local_80 != (Object *)0x0) {
      cVar4 = EditorFeatureProfile::is_class_disabled(pEVar1,(StringName *)&local_80);
      if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
        StringName::unref();
      }
      if (cVar4 != '\0') {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        lVar8 = (long)local_78[0];
        goto LAB_00105118;
      }
    }
    this[0xe68] = (EditorFeatureProfileManager)0x1;
    iVar7 = Tree::create_item(*(TreeItem **)(this + 0xe28),0);
    uVar9 = Tree::create_item(*(TreeItem **)(this + 0xe28),iVar7);
    local_88 = 0;
    String::parse_latin1((String_conflict *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String_conflict *)&local_90,"Class Options:");
    TTR((String_conflict *)&local_80,(String_conflict *)&local_90);
    TreeItem::set_text(uVar9,0,(CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    uVar9 = Tree::create_item(*(TreeItem **)(this + 0xe28),(int)uVar9);
    TreeItem::set_cell_mode(uVar9,0,1);
    iVar11 = (int)uVar9;
    TreeItem::set_editable(iVar11,false);
    TreeItem::set_selectable(iVar11,false);
    pEVar1 = *(EditorFeatureProfile **)(this + 0xe60);
    StringName::StringName((StringName *)&local_80,(String_conflict *)local_b8,false);
    if (local_80 != (Object *)0x0) {
      EditorFeatureProfile::is_class_editor_disabled(pEVar1,(StringName *)&local_80);
    }
    TreeItem::set_checked(iVar11,false);
    if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
      StringName::unref();
    }
    local_88 = 0;
    String::parse_latin1((String_conflict *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String_conflict *)&local_90,"Enable Contextual Editor");
    TTR((String_conflict *)&local_80,(String_conflict *)&local_90);
    TreeItem::set_text(uVar9,0,(CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    Variant::Variant((Variant *)local_58,0);
    TreeItem::set_metadata(iVar11,(Variant *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_b0 = (long *)0x0;
    StringName::StringName((StringName *)&local_80,(String_conflict *)local_b8,false);
    ClassDB::get_property_list((StringName *)&local_80,(List *)&local_b0,true,(Object *)0x0);
    if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
      StringName::unref();
    }
    if (local_b0 != (long *)0x0) {
      for (lVar8 = *local_b0; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x30)) {
        if ((*(byte *)(lVar8 + 0x28) & 4) != 0) {
          uVar9 = Tree::create_item(*(TreeItem **)(this + 0xe28),iVar7);
          local_88 = 0;
          String::parse_latin1((String_conflict *)&local_88,"");
          local_90 = 0;
          String::parse_latin1((String_conflict *)&local_90,"Class Properties:");
          TTR((String_conflict *)&local_80,(String_conflict *)&local_90);
          TreeItem::set_text(uVar9,0,(CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          uVar5 = EditorPropertyNameProcessor::get_settings_style();
          uVar6 = EditorPropertyNameProcessor::get_tooltip_style(uVar5);
          if ((local_b0 != (long *)0x0) &&
             (puVar12 = (undefined4 *)*local_b0, puVar12 != (undefined4 *)0x0)) {
            do {
              local_a8 = 0;
              if (*(long *)(puVar12 + 2) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(puVar12 + 2));
              }
              uVar10 = EditorPropertyNameProcessor::singleton;
              if ((*(byte *)(puVar12 + 10) & 4) != 0) {
                StringName::StringName((StringName *)&local_80,(String_conflict *)local_b8,false);
                EditorPropertyNameProcessor::process_name
                          ((Variant *)&local_a0,uVar10,(CowData<char32_t> *)&local_a8,uVar5,
                           (CowData<char32_t> *)&local_a8,(CowData<char32_t> *)&local_80);
                if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
                  StringName::unref();
                }
                uVar10 = EditorPropertyNameProcessor::singleton;
                StringName::StringName((StringName *)&local_80,(String_conflict *)local_b8,false);
                EditorPropertyNameProcessor::process_name
                          (local_98,uVar10,(CowData<char32_t> *)&local_a8,uVar6,
                           (CowData<char32_t> *)&local_a8,(CowData<char32_t> *)&local_80);
                if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
                  StringName::unref();
                }
                uVar10 = Tree::create_item(*(TreeItem **)(this + 0xe28),(int)uVar9);
                TreeItem::set_cell_mode(uVar10,0,1);
                iVar7 = (int)uVar10;
                TreeItem::set_editable(iVar7,false);
                TreeItem::set_selectable(iVar7,false);
                pEVar1 = *(EditorFeatureProfile **)(this + 0xe60);
                StringName::StringName((StringName *)&local_80,(String_conflict *)&local_a8,false);
                StringName::StringName((StringName *)&local_88,(String_conflict *)local_b8,false);
                EditorFeatureProfile::is_class_property_disabled
                          (pEVar1,(StringName *)&local_88,(StringName *)&local_80);
                TreeItem::set_checked(iVar7,false);
                if ((StringName::configured != '\0') &&
                   (((local_88 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                    (local_80 != (Object *)0x0)))) {
                  StringName::unref();
                }
                local_80 = (Object *)0x0;
                if (local_a0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a0);
                }
                TreeItem::set_text(uVar10,0,(CowData<char32_t> *)&local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                TreeItem::set_tooltip_text(iVar7,(String_conflict *)0x0);
                Variant::Variant((Variant *)local_58,(String_conflict *)&local_a8);
                TreeItem::set_metadata(iVar7,(Variant *)0x0);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Variant::get_type_name((String_conflict *)&local_90,*puVar12);
                pSVar2 = EditorNode::singleton;
                local_88 = 0;
                String::parse_latin1((String_conflict *)&local_88,"");
                EditorNode::get_class_icon((String_conflict *)&local_80,pSVar2);
                TreeItem::set_icon(iVar7,(Ref *)0x0);
                if (((local_80 != (Object *)0x0) &&
                    (cVar4 = RefCounted::unreference(), pOVar3 = local_80, cVar4 != '\0')) &&
                   (cVar4 = predelete_handler(local_80), cVar4 != '\0')) {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              puVar12 = *(undefined4 **)(puVar12 + 0xc);
            } while (puVar12 != (undefined4 *)0x0);
          }
          break;
        }
      }
    }
    this[0xe68] = (EditorFeatureProfileManager)0x0;
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  else {
    if (local_78[0] == 2) {
      iVar7 = Variant::operator_cast_to_int((Variant *)local_78);
      EditorFeatureProfile::get_feature_description((EditorFeatureProfile *)&local_b0,iVar7);
      pSVar2 = *(String_conflict **)(this + 0xe30);
      local_88 = 0;
      String::parse_latin1((String_conflict *)&local_88,"");
      TTR((String_conflict *)&local_80,(String_conflict *)&local_b0);
      local_90 = 0;
      local_a0 = 0;
      String::parse_latin1((String_conflict *)&local_a0,"");
      TreeItem::get_text((int)(CowData<char32_t> *)&local_a8);
      TTR(local_98,(String_conflict *)&local_a8);
      EditorHelpBit::set_custom_text(pSVar2,local_98,(String_conflict *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      lVar8 = (long)local_78[0];
    }
LAB_00105118:
    cVar4 = Variant::needs_deinit[lVar8];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
LAB_00105091:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_fill_classes_from(TreeItem*, String const&, String const&, int) */

void EditorFeatureProfileManager::_fill_classes_from
               (TreeItem *param_1,String_conflict *param_2,String_conflict *param_3,int param_4)

{
  EditorFeatureProfile *pEVar1;
  long lVar2;
  StringName *pSVar3;
  String_conflict *pSVar4;
  Object *pOVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  String_conflict *pSVar11;
  undefined4 in_register_0000000c;
  char *pcVar12;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulong local_70;
  Object *local_68;
  size_t local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar11 = (String_conflict *)Tree::create_item(*(TreeItem **)(param_1 + 0xe18),(int)param_2);
  TreeItem::set_cell_mode(pSVar11,0,1);
  pSVar4 = EditorNode::singleton;
  local_70 = 0;
  local_68 = (Object *)&_LC4;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode::get_class_icon((String_conflict *)&local_68,pSVar4);
  iVar9 = (int)pSVar11;
  TreeItem::set_icon(iVar9,(Ref *)0x0);
  if (((local_68 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_68, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_88 = 0;
  if (*(long *)param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_3);
  }
  pEVar1 = *(EditorFeatureProfile **)(param_1 + 0xe60);
  StringName::StringName((StringName *)&local_68,param_3,false);
  cVar6 = '\0';
  if (((local_68 != (Object *)0x0) &&
      (cVar6 = EditorFeatureProfile::is_class_disabled(pEVar1,(StringName *)&local_68),
      StringName::configured != '\0')) && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  pEVar1 = *(EditorFeatureProfile **)(param_1 + 0xe60);
  StringName::StringName((StringName *)&local_68,param_3,false);
  cVar7 = '\0';
  if (((local_68 != (Object *)0x0) &&
      (cVar7 = EditorFeatureProfile::is_class_editor_disabled(pEVar1,(StringName *)&local_68),
      StringName::configured != '\0')) && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  lVar2 = *(long *)(param_1 + 0xe60);
  StringName::StringName((StringName *)&local_68,param_3,false);
  local_70 = local_70 & 0xffffffff00000000;
  cVar8 = HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
          ::_lookup_pos((HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                         *)(lVar2 + 0x1d0),(StringName *)&local_68,(uint *)&local_70);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  if (cVar6 == '\0') {
    if (cVar8 == '\0') {
      if (cVar7 != '\0') {
        local_78 = (undefined8 *)0x0;
        String::parse_latin1((String_conflict *)&local_78,"");
        local_80 = 0;
        String::parse_latin1((String_conflict *)&local_80,"(Editor Disabled)");
        TTR((String_conflict *)&local_70,(String_conflict *)&local_80);
        operator+((char *)&local_68,(String_conflict *)&_LC147);
        String::operator+=((String_conflict *)&local_88,(String_conflict *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      }
    }
    else {
      local_78 = (undefined8 *)0x0;
      if (cVar7 == '\0') {
        String::parse_latin1((String_conflict *)&local_78,"");
        pcVar12 = "(Properties Disabled)";
      }
      else {
        String::parse_latin1((String_conflict *)&local_78,"");
        pcVar12 = "(Editor Disabled, Properties Disabled)";
      }
      local_80 = 0;
      String::parse_latin1((String_conflict *)&local_80,pcVar12);
      TTR((String_conflict *)&local_70,(String_conflict *)&local_80);
      operator+((char *)&local_68,(String_conflict *)&_LC147);
      String::operator+=((String_conflict *)&local_88,(String_conflict *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
  }
  else {
    pSVar3 = *(StringName **)(param_1 + 0xe18);
    if ((_fill_classes_from(TreeItem*,String_const&,String_const&,int)::{lambda()#1}::operator()()::
         sname == '\0') &&
       (iVar10 = __cxa_guard_acquire(&_fill_classes_from(TreeItem*,String_const&,String_const&,int)
                                      ::{lambda()#1}::operator()()::sname), iVar10 != 0)) {
      _scs_create((char *)&_fill_classes_from(TreeItem*,String_const&,String_const&,int)::
                           {lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_fill_classes_from(TreeItem*,String_const&,String_const&,int)::{lambda()#1}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_fill_classes_from(TreeItem*,String_const&,String_const&,int)::
                           {lambda()#1}::operator()()::sname);
    }
    local_58[0] = Control::get_theme_color
                            (pSVar3,(StringName *)
                                    &_fill_classes_from(TreeItem*,String_const&,String_const&,int)::
                                     {lambda()#1}::operator()()::sname);
    TreeItem::set_custom_color(iVar9,(Color *)0x0);
  }
  local_68 = (Object *)0x0;
  if (local_88 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_88);
  }
  TreeItem::set_text(pSVar11,0,(String_conflict *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  TreeItem::set_editable(iVar9,false);
  TreeItem::set_selectable(iVar9,false);
  Variant::Variant((Variant *)local_58,param_3);
  TreeItem::set_metadata(iVar9,(Variant *)0x0);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = *(long *)(param_1 + 0xe60);
  StringName::StringName((StringName *)&local_68,param_3,false);
  local_70 = local_70 & 0xffffffff00000000;
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos
            ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
             (lVar2 + 0x200),(StringName *)&local_68,(uint *)&local_70);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  TreeItem::set_collapsed(SUB81(pSVar11,0));
  cVar7 = String::operator==(param_3,(String_conflict *)CONCAT44(in_register_0000000c,param_4));
  if (cVar7 != '\0') {
    TreeItem::select(iVar9);
  }
  if (cVar6 == '\0') {
    TreeItem::set_checked(iVar9,false);
    local_78 = (undefined8 *)0x0;
    StringName::StringName((StringName *)&local_68,param_3,false);
    ClassDB::get_direct_inheriters_from_class((StringName *)&local_68,(List *)&local_78);
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
    List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
              ((List<StringName,DefaultAllocator> *)&local_78);
    if (local_78 != (undefined8 *)0x0) {
      for (pSVar3 = (StringName *)*local_78; pSVar3 != (StringName *)0x0;
          pSVar3 = *(StringName **)(pSVar3 + 8)) {
        lVar2 = *(long *)pSVar3;
        if (lVar2 == 0) {
          local_70 = 0;
        }
        else {
          pcVar12 = *(char **)(lVar2 + 8);
          local_70 = 0;
          if (pcVar12 == (char *)0x0) {
            if (*(long *)(lVar2 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar2 + 0x10));
            }
          }
          else {
            local_60 = strlen(pcVar12);
            local_68 = (Object *)pcVar12;
            String::parse_latin1((StrRange *)&local_70);
          }
        }
        cVar6 = String::begins_with((char *)&local_70);
        if ((cVar6 == '\0') && (iVar9 = ClassDB::get_api_type(pSVar3), iVar9 == 0)) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          lVar2 = *(long *)pSVar3;
          if (lVar2 == 0) {
            local_70 = 0;
          }
          else {
            pcVar12 = *(char **)(lVar2 + 8);
            local_70 = 0;
            if (pcVar12 == (char *)0x0) {
              if (*(long *)(lVar2 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar2 + 0x10));
              }
            }
            else {
              local_60 = strlen(pcVar12);
              local_68 = (Object *)pcVar12;
              String::parse_latin1((StrRange *)&local_70);
            }
          }
          _fill_classes_from(param_1,pSVar11,(String_conflict *)&local_70,param_4);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
    }
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_update_profile_tree_from(TreeItem*) */

void EditorFeatureProfileManager::_update_profile_tree_from(TreeItem *param_1)

{
  String_conflict *pSVar1;
  TreeItem *pTVar2;
  long in_FS_OFFSET;
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TreeItem::get_metadata((int)local_48);
  Variant::operator_cast_to_String(local_50);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar1 = (String_conflict *)TreeItem::get_parent();
  TreeItem::get_index();
  pTVar2 = (TreeItem *)TreeItem::get_parent();
  TreeItem::remove_child(pTVar2);
  _fill_classes_from(param_1,pSVar1,(String_conflict *)local_50,(int)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_class_list_item_edited() */

void __thiscall
EditorFeatureProfileManager::_class_list_item_edited(EditorFeatureProfileManager *this)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  Variant local_78 [8];
  long local_70;
  StringName local_68 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xe68] == (EditorFeatureProfileManager)0x0) && (lVar4 = Tree::get_edited(), lVar4 != 0))
  {
    bVar2 = TreeItem::is_checked((int)lVar4);
    TreeItem::get_metadata((int)(Variant *)local_58);
    if ((local_58[0] == 4) || (local_58[0] == 0x15)) {
      Variant::operator_cast_to_String(local_78);
      lVar4 = *(long *)(this + 0xe60);
      StringName::StringName((StringName *)&local_70,(String_conflict *)local_78,false);
      if (bVar2 == 0) {
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                  (local_68);
      }
      else {
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
                  ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
                   (lVar4 + 0x180),(StringName *)&local_70);
      }
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      _save_and_update(this);
      _update_profile_tree_from((TreeItem *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      cVar1 = Variant::needs_deinit[local_58[0]];
    }
    else {
      if (local_58[0] == 2) {
        uVar3 = Variant::operator_cast_to_int((Variant *)local_58);
        if (uVar3 < 9) {
          *(byte *)(*(long *)(this + 0xe60) + 0x228 + (long)(int)uVar3) = bVar2 ^ 1;
        }
        else {
          _err_print_index_error
                    ("set_disable_feature","editor/editor_feature_profile.cpp",0x9b,(ulong)uVar3,9,
                     "p_feature","FEATURE_MAX","",false,false);
        }
        _save_and_update(this);
      }
      cVar1 = Variant::needs_deinit[local_58[0]];
    }
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::set_disable_class_property(StringName const&, StringName const&, bool) */

void __thiscall
EditorFeatureProfile::set_disable_class_property
          (EditorFeatureProfile *this,StringName *param_1,StringName *param_2,bool param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
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
  uint uVar23;
  char cVar24;
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this_00;
  undefined1 (*pauVar25) [16];
  void *pvVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
  *pHVar30;
  ulong uVar31;
  long *plVar32;
  long lVar33;
  long in_FS_OFFSET;
  uint local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3) {
    pHVar30 = (HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
               *)(this + 0x1d0);
    local_58[0] = 0;
    cVar24 = HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
             ::_lookup_pos(pHVar30,param_1,local_58);
    if (cVar24 == '\0') {
      pauVar25 = (undefined1 (*) [16])
                 HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                 ::operator[](pHVar30,param_1);
      pvVar26 = *(void **)*pauVar25;
      if (pvVar26 != (void *)0x0) {
        if ((*(int *)(pauVar25[2] + 4) != 0) &&
           ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)pauVar25[2] * 4) == 0 ||
            (memset(*(void **)(pauVar25[1] + 8),0,
                    (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)pauVar25[2] * 4) * 4),
            *(int *)(pauVar25[2] + 4) != 0)))) {
          lVar33 = 0;
          do {
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar26 + lVar33 * 8) != 0)) {
              StringName::unref();
              pvVar26 = *(void **)*pauVar25;
            }
            lVar33 = lVar33 + 1;
          } while ((uint)lVar33 < *(uint *)(pauVar25[2] + 4));
          *(undefined4 *)(pauVar25[2] + 4) = 0;
          if (pvVar26 == (void *)0x0) goto LAB_0010684c;
        }
        Memory::free_static(pvVar26,false);
        Memory::free_static(*(void **)pauVar25[1],false);
        Memory::free_static(*(void **)(*pauVar25 + 8),false);
        Memory::free_static(*(void **)(pauVar25[1] + 8),false);
        *pauVar25 = (undefined1  [16])0x0;
        pauVar25[1] = (undefined1  [16])0x0;
      }
LAB_0010684c:
      *(undefined8 *)pauVar25[2] = 2;
    }
    HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
    ::operator[](pHVar30,param_1);
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
              ((StringName *)local_58);
  }
  else {
    pHVar30 = (HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
               *)(this + 0x1d0);
    local_58[0] = 0;
    cVar24 = HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
             ::_lookup_pos(pHVar30,param_1,local_58);
    if (cVar24 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("set_disable_class_property","editor/editor_feature_profile.cpp",0x76,
                         "Condition \"!disabled_properties.has(p_class)\" is true.",0,0);
        return;
      }
      goto LAB_00106910;
    }
    this_00 = (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
              HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
              ::operator[](pHVar30,param_1);
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
              (this_00,param_2);
    lVar33 = HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
             ::operator[](pHVar30,param_1);
    if (*(int *)(lVar33 + 0x24) == 0) {
      local_58[0] = 0;
      cVar24 = HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
               ::_lookup_pos(pHVar30,param_1,local_58);
      if (cVar24 != '\0') {
        lVar33 = *(long *)(this + 0x1e0);
        lVar8 = *(long *)(this + 0x1d8);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1f8) * 8);
        uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4);
        uVar31 = CONCAT44(0,uVar6);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)(local_58[0] + 1) * lVar9;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar31;
        lVar29 = SUB168(auVar11 * auVar17,8);
        puVar1 = (uint *)(lVar33 + lVar29 * 4);
        uVar27 = SUB164(auVar11 * auVar17,8);
        uVar7 = *puVar1;
        if (uVar7 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar7 * lVar9;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar31;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar6 + uVar27) - SUB164(auVar12 * auVar18,8)) * lVar9;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar31;
          iVar28 = SUB164(auVar13 * auVar19,8);
          while (uVar23 = uVar27, iVar28 != 0) {
            puVar2 = (uint *)(lVar33 + (ulong)local_58[0] * 4);
            *puVar1 = *puVar2;
            puVar3 = (undefined8 *)(lVar8 + lVar29 * 8);
            *puVar2 = uVar7;
            puVar4 = (undefined8 *)(lVar8 + (ulong)local_58[0] * 8);
            uVar10 = *puVar3;
            *puVar3 = *puVar4;
            *puVar4 = uVar10;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar23 + 1) * lVar9;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar31;
            lVar29 = SUB168(auVar16 * auVar22,8);
            puVar1 = (uint *)(lVar33 + lVar29 * 4);
            uVar27 = SUB164(auVar16 * auVar22,8);
            uVar7 = *puVar1;
            local_58[0] = uVar23;
            if (uVar7 == 0) break;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar7 * lVar9;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar31;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((uVar27 + uVar6) - SUB164(auVar14 * auVar20,8)) * lVar9;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar31;
            iVar28 = SUB164(auVar15 * auVar21,8);
          }
        }
        uVar31 = (ulong)local_58[0];
        plVar5 = (long *)(lVar8 + uVar31 * 8);
        *(undefined4 *)(lVar33 + uVar31 * 4) = 0;
        plVar32 = (long *)*plVar5;
        if (*(long **)(this + 0x1e8) == plVar32) {
          *(long *)(this + 0x1e8) = *plVar32;
          plVar32 = (long *)*plVar5;
        }
        if (plVar32 == *(long **)(this + 0x1f0)) {
          *(long *)(this + 0x1f0) = plVar32[1];
          plVar32 = (long *)*plVar5;
        }
        if ((long *)plVar32[1] != (long *)0x0) {
          *(long *)plVar32[1] = *plVar32;
          plVar32 = (long *)*plVar5;
        }
        if (*plVar32 != 0) {
          *(long *)(*plVar32 + 8) = plVar32[1];
          plVar32 = (long *)*plVar5;
        }
        pvVar26 = (void *)plVar32[3];
        if (pvVar26 != (void *)0x0) {
          if ((*(int *)((long)plVar32 + 0x3c) != 0) &&
             ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar32 + 7) * 4) == 0 ||
              (memset((void *)plVar32[6],0,
                      (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar32 + 7) * 4) *
                      4), *(int *)((long)plVar32 + 0x3c) != 0)))) {
            lVar33 = 0;
            do {
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar26 + lVar33 * 8) != 0))
              {
                StringName::unref();
                pvVar26 = (void *)plVar32[3];
              }
              lVar33 = lVar33 + 1;
            } while ((uint)lVar33 < *(uint *)((long)plVar32 + 0x3c));
            *(undefined4 *)((long)plVar32 + 0x3c) = 0;
            if (pvVar26 == (void *)0x0) goto LAB_0010673e;
          }
          Memory::free_static(pvVar26,false);
          Memory::free_static((void *)plVar32[5],false);
          Memory::free_static((void *)plVar32[4],false);
          Memory::free_static((void *)plVar32[6],false);
        }
LAB_0010673e:
        if ((StringName::configured != '\0') && (plVar32[2] != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar32,false);
        *(undefined8 *)(*(long *)(this + 0x1d8) + uVar31 * 8) = 0;
        *(int *)(this + 0x1fc) = *(int *)(this + 0x1fc) + -1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106910:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::load_from_file(String const&) */

int __thiscall
EditorFeatureProfile::load_from_file(EditorFeatureProfile *this,String_conflict *param_1)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  EditorFeatureProfile EVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long in_FS_OFFSET;
  EditorFeatureProfile *local_380;
  String_conflict *local_370;
  int local_354;
  String_conflict local_350 [8];
  String_conflict local_348 [8];
  undefined8 local_340;
  String_conflict local_338 [8];
  CowData<char32_t> local_330 [8];
  String_conflict local_328 [8];
  undefined8 local_320;
  String_conflict local_318 [8];
  long local_310;
  long local_308 [2];
  int local_2f8 [8];
  int local_2d8 [8];
  undefined **local_2b8 [72];
  undefined8 local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::get_file_as_string(local_350,param_1);
  if (local_354 != 0) goto LAB_00106971;
  Resource::Resource((Resource *)local_2b8);
  local_78 = 0;
  local_2b8[0] = &PTR__initialize_classv_00125e90;
  local_70[0] = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = (undefined1  [16])0x0;
  iVar5 = JSON::parse((String_conflict *)local_2b8,SUB81(local_350,0));
  if (iVar5 == 0) {
    Variant::Variant((Variant *)local_2d8,(Variant *)local_70);
    Variant::operator_cast_to_Dictionary((Variant *)local_338);
    if (Variant::needs_deinit[local_2d8[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_2f8,"type");
    cVar3 = Dictionary::has((Variant *)local_338);
    if (cVar3 == '\0') {
      if (Variant::needs_deinit[local_2f8[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_00106ca9:
      local_370 = (String_conflict *)local_308;
      local_310 = 0;
      String::parse_latin1((String_conflict *)&local_310,"\', it\'s not a feature profile.");
      operator+((char *)local_318,(String_conflict *)"Error parsing \'");
      String::operator+(local_370,local_318);
      _err_print_error("load_from_file","editor/editor_feature_profile.cpp",0xec,local_370,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_370);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_318);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
      local_354 = 0x2b;
    }
    else {
      Variant::Variant((Variant *)local_2d8,"type");
      Dictionary::operator[]((Variant *)local_338);
      Variant::operator_cast_to_String((Variant *)local_308);
      cVar3 = String::operator!=((String_conflict *)local_308,"feature_profile");
      CowData<char32_t>::_unref((CowData<char32_t> *)local_308);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_370 = (String_conflict *)local_308;
      if (Variant::needs_deinit[local_2f8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar3 != '\0') goto LAB_00106ca9;
      lVar8 = *(long *)(this + 0x180);
      if ((lVar8 != 0) && (*(int *)(this + 0x1a4) != 0)) {
        if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) == 0) ||
           (memset(*(void **)(this + 0x198),0,
                   (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) * 4
                  ), *(int *)(this + 0x1a4) != 0)) {
          lVar7 = 0;
          while( true ) {
            if ((StringName::configured != '\0') && (*(long *)(lVar8 + lVar7 * 8) != 0)) {
              StringName::unref();
            }
            lVar7 = lVar7 + 1;
            if (*(uint *)(this + 0x1a4) <= (uint)lVar7) break;
            lVar8 = *(long *)(this + 0x180);
          }
        }
        *(undefined4 *)(this + 0x1a4) = 0;
      }
      Variant::Variant((Variant *)local_2d8,"disabled_classes");
      cVar3 = Dictionary::has((Variant *)local_338);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar3 != '\0') {
        Variant::Variant((Variant *)local_2d8,"disabled_classes");
        Dictionary::operator[]((Variant *)local_338);
        Variant::operator_cast_to_Array((Variant *)local_318);
        if (Variant::needs_deinit[local_2d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        for (iVar5 = 0; iVar6 = Array::size(), iVar5 < iVar6; iVar5 = iVar5 + 1) {
          Array::operator[]((int)(Variant *)local_318);
          Variant::operator_cast_to_StringName((Variant *)&local_310);
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)local_370);
          if ((StringName::configured != '\0') && (local_310 != 0)) {
            StringName::unref();
          }
        }
        Array::~Array((Array *)local_318);
      }
      lVar8 = *(long *)(this + 0x1a8);
      if ((lVar8 != 0) && (*(int *)(this + 0x1cc) != 0)) {
        if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c8) * 4) == 0) ||
           (memset(*(void **)(this + 0x1c0),0,
                   (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c8) * 4) * 4
                  ), *(int *)(this + 0x1cc) != 0)) {
          lVar7 = 0;
          while( true ) {
            if ((StringName::configured != '\0') && (*(long *)(lVar8 + lVar7 * 8) != 0)) {
              StringName::unref();
            }
            lVar7 = lVar7 + 1;
            if (*(uint *)(this + 0x1cc) <= (uint)lVar7) break;
            lVar8 = *(long *)(this + 0x1a8);
          }
        }
        *(undefined4 *)(this + 0x1cc) = 0;
      }
      Variant::Variant((Variant *)local_2d8,"disabled_editors");
      cVar3 = Dictionary::has((Variant *)local_338);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar3 != '\0') {
        Variant::Variant((Variant *)local_2d8,"disabled_editors");
        Dictionary::operator[]((Variant *)local_338);
        Variant::operator_cast_to_Array((Variant *)local_318);
        if (Variant::needs_deinit[local_2d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        for (iVar5 = 0; iVar6 = Array::size(), iVar5 < iVar6; iVar5 = iVar5 + 1) {
          Array::operator[]((int)(Variant *)local_318);
          Variant::operator_cast_to_StringName((Variant *)&local_310);
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)local_370);
          if ((StringName::configured != '\0') && (local_310 != 0)) {
            StringName::unref();
          }
        }
        Array::~Array((Array *)local_318);
      }
      if ((*(long *)(this + 0x1d8) != 0) && (*(int *)(this + 0x1fc) != 0)) {
        lVar8 = 0;
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4);
        if (uVar1 != 0) {
          do {
            if (*(int *)(*(long *)(this + 0x1e0) + lVar8) != 0) {
              *(int *)(*(long *)(this + 0x1e0) + lVar8) = 0;
              pvVar2 = *(void **)(*(long *)(this + 0x1d8) + lVar8 * 2);
              HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
              ~HashSet((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                        *)((long)pvVar2 + 0x18));
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
                StringName::unref();
              }
              Memory::free_static(pvVar2,false);
              *(undefined8 *)(*(long *)(this + 0x1d8) + lVar8 * 2) = 0;
            }
            lVar8 = lVar8 + 4;
          } while (lVar8 != (ulong)uVar1 << 2);
        }
        *(undefined4 *)(this + 0x1fc) = 0;
        *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
      }
      Variant::Variant((Variant *)local_2d8,"disabled_properties");
      cVar3 = Dictionary::has((Variant *)local_338);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar3 != '\0') {
        Variant::Variant((Variant *)local_2d8,"disabled_properties");
        Dictionary::operator[]((Variant *)local_338);
        Variant::operator_cast_to_Array((Variant *)local_330);
        if (Variant::needs_deinit[local_2d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        for (iVar5 = 0; iVar6 = Array::size(), iVar5 < iVar6; iVar5 = iVar5 + 1) {
          Array::operator[]((int)(Variant *)local_330);
          Variant::operator_cast_to_String((Variant *)local_328);
          iVar6 = (int)(Variant *)local_328;
          String::get_slice((char *)local_318,iVar6);
          StringName::StringName((StringName *)local_370,local_318,false);
          String::get_slice((char *)&local_320,iVar6);
          StringName::StringName((StringName *)&local_310,(String_conflict *)&local_320,false);
          set_disable_class_property(this,(StringName *)&local_310,(StringName *)local_370,true);
          if ((StringName::configured != '\0') && (local_310 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_320);
          if ((StringName::configured != '\0') && (local_308[0] != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_318);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_328);
        }
        Array::~Array((Array *)local_330);
      }
      Variant::Variant((Variant *)local_2d8,"disabled_features");
      cVar3 = Dictionary::has((Variant *)local_338);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_354 = 0;
      if (cVar3 != '\0') {
        Variant::Variant((Variant *)local_2d8,"disabled_features");
        Dictionary::operator[]((Variant *)local_338);
        Variant::operator_cast_to_Array((Variant *)local_318);
        if (Variant::needs_deinit[local_2d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_380 = this + 0x228;
        ppuVar9 = &feature_identifiers;
        do {
          local_310 = 0;
          String::parse_latin1((String_conflict *)&local_310,*ppuVar9);
          for (iVar5 = 0; iVar6 = Array::size(), iVar5 < iVar6; iVar5 = iVar5 + 1) {
            Array::operator[]((int)(Variant *)local_318);
            Variant::operator_cast_to_String((Variant *)local_370);
            EVar4 = (EditorFeatureProfile)
                    String::operator==(local_370,(String_conflict *)&local_310);
            if (EVar4 != (EditorFeatureProfile)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_370);
              goto LAB_001071b5;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_370);
          }
          EVar4 = (EditorFeatureProfile)0x0;
LAB_001071b5:
          ppuVar9 = ppuVar9 + 1;
          *local_380 = EVar4;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
          local_380 = local_380 + 1;
        } while (ppuVar9 != (undefined **)&DAT_00126688);
        Array::~Array((Array *)local_318);
      }
    }
    Dictionary::~Dictionary((Dictionary *)local_338);
  }
  else {
    local_310 = 0;
    if (local_58 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_310,(CowData *)&local_58);
    }
    local_320 = 0;
    String::parse_latin1((String_conflict *)&local_320,": ");
    itos((long)local_330);
    local_340 = 0;
    String::parse_latin1((String_conflict *)&local_340,"\' on line ");
    operator+((char *)local_348,(String_conflict *)"Error parsing \'");
    String::operator+(local_338,local_348);
    String::operator+(local_328,local_338);
    String::operator+(local_318,local_328);
    String::operator+((String_conflict *)local_308,local_318);
    _err_print_error("load_from_file","editor/editor_feature_profile.cpp",0xe5,
                     (String_conflict *)local_308,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_308);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_318);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_328);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_338);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_348);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
    CowData<char32_t>::_unref(local_330);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_320);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
    local_354 = 0x2b;
  }
  local_2b8[0] = &PTR__initialize_classv_00125e90;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (Variant::needs_deinit[local_70[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  Resource::~Resource((Resource *)local_2b8);
LAB_00106971:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_350);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_354;
}



/* EditorFeatureProfileManager::_update_selected_profile() */

void __thiscall
EditorFeatureProfileManager::_update_selected_profile(EditorFeatureProfileManager *this)

{
  EditorFeatureProfile *this_00;
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  String_conflict *pSVar7;
  Object *pOVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  int local_dc;
  undefined8 local_c8;
  CowData<char32_t> *local_c0;
  undefined *local_a8;
  long local_a0;
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  String_conflict local_88 [8];
  CowData<char32_t> local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined *)0x0;
  lVar4 = Tree::get_selected();
  if (lVar4 == 0) {
    local_dc = -1;
  }
  else {
    Tree::get_selected();
    TreeItem::get_metadata((int)(Variant *)local_58);
    lVar4 = (long)local_58[0];
    if ((local_58[0] == 0x15) || (local_58[0] == 4)) {
      Variant::operator_cast_to_String((Variant *)&local_68);
      if (local_a8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        local_a8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_dc = -1;
      lVar4 = (long)local_58[0];
    }
    else {
      local_dc = -1;
      if (local_58[0] == 2) {
        local_dc = Variant::operator_cast_to_int((Variant *)local_58);
        lVar4 = (long)local_58[0];
      }
    }
    if (Variant::needs_deinit[lVar4] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_c0 = (CowData<char32_t> *)&local_a8;
  Tree::clear();
  _get_selected_profile((EditorFeatureProfileManager *)&local_a0);
  uVar5 = *(undefined8 *)(this + 0xde0);
  String::operator==((String_conflict *)&local_a0,(String_conflict *)(this + 0xe50));
  BaseButton::set_disabled(SUB81(uVar5,0));
  if ((local_a0 == 0) || (*(uint *)(local_a0 + -8) < 2)) {
    Tree::clear();
    if ((*(long *)(this + 0xe60) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
      pOVar1 = *(Object **)(this + 0xe60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    *(undefined8 *)(this + 0xe60) = 0;
  }
  else {
    cVar2 = String::operator==((String_conflict *)&local_a0,(String_conflict *)(this + 0xe50));
    if (cVar2 == '\0') {
      Ref<EditorFeatureProfile>::instantiate<>((Ref<EditorFeatureProfile> *)(this + 0xe60));
      this_00 = *(EditorFeatureProfile **)(this + 0xe60);
      EditorPaths::get_feature_profiles_dir();
      local_78 = 0;
      String::parse_latin1((String_conflict *)&local_78,".profile");
      String::operator+((String_conflict *)&local_70,(String_conflict *)&local_a0);
      String::path_join((String_conflict *)&local_68);
      iVar3 = EditorFeatureProfile::load_from_file(this_00,(String_conflict *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref(local_80);
      if (iVar3 != 0) {
        local_70 = 0;
        String::parse_latin1((String_conflict *)&local_70,"\'.");
        EditorPaths::get_feature_profiles_dir();
        local_90 = 0;
        String::parse_latin1((String_conflict *)&local_90,".profile");
        String::operator+(local_88,(String_conflict *)&local_a0);
        String::path_join((String_conflict *)local_80);
        operator+((char *)&local_78,
                  (String_conflict *)"Error when loading editor feature profile from file \'");
        String::operator+((String_conflict *)&local_68,(String_conflict *)&local_78);
        _err_print_error("_update_selected_profile","editor/editor_feature_profile.cpp",0x2fd,
                         "Condition \"err != OK\" is true.",(String_conflict *)&local_68,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref(local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref(local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_00107700;
      }
LAB_0010781b:
      this[0xe68] = (EditorFeatureProfileManager)0x1;
      iVar10 = 0;
      iVar3 = Tree::create_item(*(TreeItem **)(this + 0xe18),0);
      uVar5 = Tree::create_item(*(TreeItem **)(this + 0xe18),iVar3);
      local_70 = 0;
      String::parse_latin1((String_conflict *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String_conflict *)&local_78,"Main Features:");
      TTR((String_conflict *)&local_68,(String_conflict *)&local_78);
      TreeItem::set_text(uVar5,0,(String_conflict *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_c8 = 0;
      do {
        while( true ) {
          if (iVar10 == 6) {
            uVar6 = Tree::create_item(*(TreeItem **)(this + 0xe18),(int)local_c8);
          }
          else {
            uVar6 = Tree::create_item(*(TreeItem **)(this + 0xe18),(int)uVar5);
            local_c8 = uVar6;
          }
          TreeItem::set_cell_mode(uVar6,0,1);
          local_68 = &_LC4;
          local_70 = 0;
          local_60 = 0;
          String::parse_latin1((StrRange *)&local_70);
          EditorFeatureProfile::get_feature_name((EditorFeatureProfile *)&local_78,iVar10);
          TTR((String_conflict *)&local_68,(String_conflict *)&local_78);
          TreeItem::set_text(uVar6,0,(String_conflict *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          iVar9 = (int)uVar6;
          TreeItem::set_selectable(iVar9,false);
          TreeItem::set_editable(iVar9,false);
          Variant::Variant((Variant *)local_58,iVar10);
          TreeItem::set_metadata(iVar9,(Variant *)0x0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (*(char *)(*(long *)(this + 0xe60) + 0x228 + (long)iVar10) != '\0') break;
          TreeItem::set_checked(iVar9,false);
          if (local_dc != iVar10) goto LAB_001078eb;
LAB_00107a1e:
          iVar10 = iVar10 + 1;
          TreeItem::select(iVar9);
          if (iVar10 == 9) goto LAB_00107a40;
        }
        if (local_dc == iVar10) goto LAB_00107a1e;
LAB_001078eb:
        iVar10 = iVar10 + 1;
      } while (iVar10 != 9);
LAB_00107a40:
      pSVar7 = (String_conflict *)Tree::create_item(*(TreeItem **)(this + 0xe18),iVar3);
      local_70 = 0;
      String::parse_latin1((String_conflict *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String_conflict *)&local_78,"Nodes and Classes:");
      TTR((String_conflict *)&local_68,(String_conflict *)&local_78);
      TreeItem::set_text(pSVar7,0,(String_conflict *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = (undefined *)0x0;
      String::parse_latin1((String_conflict *)&local_68,"Node");
      _fill_classes_from((TreeItem *)this,pSVar7,(String_conflict *)&local_68,(int)local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_68 = (undefined *)0x0;
      String::parse_latin1((String_conflict *)&local_68,"Resource");
      _fill_classes_from((TreeItem *)this,pSVar7,(String_conflict *)&local_68,(int)local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      this[0xe68] = (EditorFeatureProfileManager)0x0;
      _class_list_item_selected(this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref(local_c0);
      goto LAB_00107714;
    }
    pOVar1 = *(Object **)(this + 0xe58);
    pOVar8 = *(Object **)(this + 0xe60);
    if (pOVar1 == pOVar8) {
LAB_00107ba7:
      if (pOVar8 != (Object *)0x0) goto LAB_0010781b;
    }
    else {
      *(Object **)(this + 0xe60) = pOVar1;
      if (pOVar1 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)(this + 0xe60) = 0;
        }
        if (pOVar8 != (Object *)0x0) goto LAB_00107ce5;
LAB_00107ba0:
        pOVar8 = *(Object **)(this + 0xe58);
        goto LAB_00107ba7;
      }
      if (pOVar8 != (Object *)0x0) {
LAB_00107ce5:
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
        goto LAB_00107ba0;
      }
    }
    _err_print_error("_update_selected_profile","editor/editor_feature_profile.cpp",0x2f8,
                     "Condition \"current.is_null()\" is true.",0,0);
  }
LAB_00107700:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref(local_c0);
LAB_00107714:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorFeatureProfileManager::_profile_selected(int) */

void EditorFeatureProfileManager::_profile_selected(int param_1)

{
  undefined4 in_register_0000003c;
  
  _update_selected_profile((EditorFeatureProfileManager *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* EditorFeatureProfileManager::_property_item_edited() */

void __thiscall
EditorFeatureProfileManager::_property_item_edited(EditorFeatureProfileManager *this)

{
  char cVar1;
  EditorFeatureProfile *this_00;
  byte bVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  Variant local_a0 [8];
  Variant local_98 [8];
  long local_90;
  long local_88 [2];
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xe68] != (EditorFeatureProfileManager)0x0) ||
     (lVar4 = Tree::get_selected(), lVar4 == 0)) goto LAB_00107e91;
  TreeItem::get_metadata((int)(Variant *)local_78);
  if ((local_78[0] == 4) || (local_78[0] == 0x15)) {
    Variant::operator_cast_to_String(local_a0);
    lVar4 = Tree::get_edited();
    if (lVar4 == 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      goto LAB_00107ef5;
    }
    bVar2 = TreeItem::is_checked((int)lVar4);
    TreeItem::get_metadata((int)local_58);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_78[0] = local_58[0];
    local_70 = local_50;
    uStack_68 = uStack_48;
    if ((local_58[0] == 4) || (local_58[0] == 0x15)) {
      Variant::operator_cast_to_String(local_98);
      this_00 = *(EditorFeatureProfile **)(this + 0xe60);
      StringName::StringName((StringName *)local_88,(String_conflict *)local_98,false);
      StringName::StringName((StringName *)&local_90,(String_conflict *)local_a0,false);
      EditorFeatureProfile::set_disable_class_property
                (this_00,(StringName *)&local_90,(StringName *)local_88,(bool)(bVar2 ^ 1));
      if ((StringName::configured != '\0') &&
         (((local_90 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_88[0] != 0)))) {
        StringName::unref();
      }
      _save_and_update(this);
      Tree::get_selected();
      _update_profile_tree_from((TreeItem *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    }
    else if ((local_58[0] == 2) &&
            (iVar3 = Variant::operator_cast_to_int((Variant *)local_78), iVar3 == 0)) {
      lVar4 = *(long *)(this + 0xe60);
      StringName::StringName((StringName *)&local_90,(String_conflict *)local_a0,false);
      if (bVar2 == 0) {
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                  ((StringName *)local_88);
      }
      else {
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase
                  ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
                   (lVar4 + 0x1a8),(StringName *)&local_90);
      }
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      _save_and_update(this);
      Tree::get_selected();
      _update_profile_tree_from((TreeItem *)this);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
LAB_00107ef5:
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
LAB_00107e91:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorFeatureProfile::_bind_methods() */

void EditorFeatureProfile::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  MethodBind *pMVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128 [2];
  long *local_118;
  undefined *local_108;
  undefined *puStack_100;
  undefined8 local_f8;
  undefined *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  char *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  undefined8 local_70;
  char **local_68;
  undefined1 auStack_60 [32];
  long local_40;
  
  puVar5 = PTR__LC177_00126de8;
  puVar4 = PTR__LC175_00126de0;
  puVar3 = PTR__LC176_00126dd8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  local_a8 = PTR__LC177_00126de8;
  puStack_a0 = PTR__LC175_00126de0;
  auStack_60._8_8_ = auStack_60._0_8_;
  auStack_60._0_8_ = &puStack_a0;
  uVar8 = (uint)&local_68;
  local_68 = &local_a8;
  D_METHODP((char *)local_128,(char ***)"set_disable_class",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,StringName_const&,bool>(set_disable_class);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_118;
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar9 = local_118 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_118 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_118[-1];
      local_118 = (long *)0x0;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  local_a8 = "class_name";
  puStack_a0 = (undefined *)0x0;
  local_68 = &local_a8;
  D_METHODP((char *)local_128,(char ***)"is_class_disabled",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,bool,StringName_const&>(is_class_disabled);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_128);
  local_b8 = 0;
  local_c8 = puVar5;
  puStack_c0 = puVar4;
  auStack_60._0_8_ = &puStack_c0;
  local_68 = &local_c8;
  D_METHODP((char *)local_128,(char ***)"set_disable_class_editor",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,StringName_const&,bool>(set_disable_class_editor)
  ;
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_118;
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar9 = local_118 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_118 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_118[-1];
      local_118 = (long *)0x0;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  local_a8 = "class_name";
  puStack_a0 = (undefined *)0x0;
  local_68 = &local_a8;
  D_METHODP((char *)local_128,(char ***)"is_class_editor_disabled",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,bool,StringName_const&>(is_class_editor_disabled)
  ;
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_118;
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar9 = local_118 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_118 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_118[-1];
      local_118 = (long *)0x0;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  local_70 = 0;
  local_78 = "disable";
  local_88 = puVar5;
  pcStack_80 = "property";
  auStack_60._8_8_ = &local_78;
  auStack_60._0_8_ = &pcStack_80;
  local_68 = &local_88;
  D_METHODP((char *)local_128,(char ***)"set_disable_class_property",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,StringName_const&,StringName_const&,bool>
                     (set_disable_class_property);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_118;
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar9 = local_118 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_118 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_118[-1];
      local_118 = (long *)0x0;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  local_d8 = 0;
  local_e8 = puVar5;
  pcStack_e0 = "property";
  auStack_60._0_8_ = &pcStack_e0;
  local_68 = &local_e8;
  D_METHODP((char *)local_128,(char ***)"is_class_property_disabled",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,bool,StringName_const&,StringName_const&>
                     (is_class_property_disabled);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_118;
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar9 = local_118 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_118 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_118[-1];
      local_118 = (long *)0x0;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  local_f8 = 0;
  local_108 = puVar3;
  puStack_100 = puVar4;
  auStack_60._0_8_ = &puStack_100;
  local_68 = &local_108;
  D_METHODP((char *)local_128,(char ***)"set_disable_feature",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,EditorFeatureProfile::Feature,bool>
                     (set_disable_feature);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_118;
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar9 = local_118 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_118 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_118[-1];
      local_118 = (long *)0x0;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  local_88 = "feature";
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_128,(char ***)"is_feature_disabled",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,bool,EditorFeatureProfile::Feature>
                     (is_feature_disabled);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_118;
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar9 = local_118 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_118 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_118[-1];
      local_118 = (long *)0x0;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  local_88 = "feature";
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_128,(char ***)"get_feature_name",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,String,EditorFeatureProfile::Feature>
                     (_get_feature_name);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_128);
  pcStack_80 = (char *)0x0;
  local_88 = "path";
  local_68 = &local_88;
  D_METHODP((char *)local_128,(char ***)"save_to_file",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,Error,String_const&>(save_to_file);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_118;
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar9 = local_118 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_118 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_118[-1];
      local_118 = (long *)0x0;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  local_88 = "path";
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_128,(char ***)"load_from_file",uVar8);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar7 = create_method_bind<EditorFeatureProfile,Error,String_const&>(load_from_file);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_118;
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar9 = local_118 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_118 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_118[-1];
      local_118 = (long *)0x0;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_3D",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_3D");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,0,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_SCRIPT",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_SCRIPT");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,1,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_ASSET_LIB",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_ASSET_LIB");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,2,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_SCENE_TREE",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_SCENE_TREE");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,3,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_NODE_DOCK",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_NODE_DOCK");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,4,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_FILESYSTEM_DOCK",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_FILESYSTEM_DOCK");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,5,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_IMPORT_DOCK",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_IMPORT_DOCK");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,6,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_HISTORY_DOCK",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_HISTORY_DOCK");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,7,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_GAME",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_GAME");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,8,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_128,"FEATURE_MAX",false);
  local_140 = 0;
  String::parse_latin1((String_conflict *)&local_140,"FEATURE_MAX");
  __constant_get_enum_name<EditorFeatureProfile::Feature>((StringName *)&local_138);
  local_148 = 0;
  String::parse_latin1((String_conflict *)&local_148,"EditorFeatureProfile");
  StringName::StringName((StringName *)&local_130,(String_conflict *)&local_148,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_130,(StringName *)&local_138,(StringName *)local_128,9,false);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((StringName::configured != '\0') && (local_128[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_update_profile_list(String const&) */

void __thiscall
EditorFeatureProfileManager::_update_profile_list
          (EditorFeatureProfileManager *this,String_conflict *param_1)

{
  CowData *pCVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  String_conflict *pSVar9;
  long lVar10;
  CowData *pCVar11;
  CowData *pCVar12;
  CowData<char32_t> *pCVar13;
  long lVar14;
  CowData *pCVar15;
  String_conflict *pSVar16;
  long in_FS_OFFSET;
  String_conflict *local_d8;
  long local_d0;
  char *local_a8;
  Object *local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  String_conflict local_78 [8];
  String_conflict *local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (char *)0x0;
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    iVar7 = OptionButton::get_selected();
    if (-1 < iVar7) {
      OptionButton::get_selected();
      OptionButton::get_item_metadata((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_68);
      if (local_a8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        local_a8 = local_68;
        local_68 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      EditorPaths::get_feature_profiles_dir();
      local_80 = 0;
      String::parse_latin1((String_conflict *)&local_80,".profile");
      String::operator+(local_78,(String_conflict *)&local_a8);
      String::path_join((String_conflict *)&local_68);
      cVar6 = FileAccess::exists((String_conflict *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (cVar6 == '\0') {
        local_68 = (char *)0x0;
        if (local_a8 != (char *)0x0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          local_a8 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_1);
  }
  local_d8 = (String_conflict *)&local_80;
  local_70 = (String_conflict *)0x0;
  EditorPaths::get_feature_profiles_dir();
  DirAccess::open((String_conflict *)&local_a0,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_a0 == (Object *)0x0) {
    local_80 = 0;
    String::parse_latin1(local_d8,"\'.");
    EditorPaths::get_feature_profiles_dir();
    operator+((char *)&local_88,(String_conflict *)"Cannot open directory \'");
    String::operator+((String_conflict *)&local_68,(String_conflict *)&local_88);
    _err_print_error("_update_profile_list","editor/editor_feature_profile.cpp",0x175,
                     "Condition \"d.is_null()\" is true.",(CowData<char32_t> *)&local_68,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    if (((local_a0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
      (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
      Memory::free_static(local_a0,false);
    }
    goto LAB_0010a3a0;
  }
  pSVar16 = (String_conflict *)0x0;
  (**(code **)(*(long *)local_a0 + 0x160))();
  while (((**(code **)(*(long *)local_a0 + 0x168))(local_d8), local_80 != 0 &&
         (1 < *(uint *)(local_80 + -8)))) {
    cVar6 = (**(code **)(*(long *)local_a0 + 0x170))();
    if ((cVar6 == '\0') && (iVar7 = String::rfind((char *)local_d8,0x10d134), iVar7 != -1)) {
      String::substr((int)(CowData<char32_t> *)&local_68,(int)local_d8);
      if (pSVar16 == (String_conflict *)0x0) {
        lVar10 = 1;
      }
      else {
        lVar10 = *(long *)(pSVar16 + -8) + 1;
      }
      iVar7 = CowData<String>::resize<false>((CowData<String> *)&local_70,lVar10);
      pSVar16 = local_70;
      if (iVar7 == 0) {
        if (local_70 == (String_conflict *)0x0) {
          lVar14 = -1;
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(local_70 + -8);
          lVar14 = lVar10 + -1;
          if (-1 < lVar14) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_70);
            pSVar16 = local_70;
            if (*(char **)(local_70 + lVar14 * 8) != local_68) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(local_70 + lVar14 * 8),(CowData *)&local_68);
            }
            goto LAB_0010a5b8;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar14,lVar10,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        pSVar16 = local_70;
      }
LAB_0010a5b8:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  if (pSVar16 == (String_conflict *)0x0) {
    OptionButton::clear();
  }
  else {
    lVar10 = *(long *)(pSVar16 + -8);
    if (lVar10 == 0) {
      OptionButton::clear();
    }
    else {
      CowData<String>::_copy_on_write((CowData<String> *)&local_70);
      pSVar9 = local_70;
      if (lVar10 == 1) {
        SortArray<String,_DefaultComparator<String>,true>::introsort(0,1,local_70,0);
        pSVar16 = pSVar9;
      }
      else {
        lVar8 = 0;
        lVar14 = lVar10;
        do {
          lVar14 = lVar14 >> 1;
          lVar8 = lVar8 + 1;
        } while (lVar14 != 1);
        pCVar15 = (CowData *)(local_70 + 8);
        SortArray<String,_DefaultComparator<String>,true>::introsort(0,lVar10,local_70,lVar8 * 2);
        if (lVar10 < 0x11) {
          lVar14 = 1;
          pCVar12 = pCVar15;
          do {
            local_68 = (char *)0x0;
            pCVar11 = pCVar12;
            lVar8 = lVar14;
            if (*(long *)pCVar12 == 0) {
              cVar6 = String::operator<((String_conflict *)&local_68,pSVar9);
              if (cVar6 == '\0') goto LAB_0010a767;
LAB_0010a6c0:
              do {
                if (*(long *)pCVar11 != *(long *)((CowData<char32_t> *)pCVar11 + -8)) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)pCVar11,
                             (CowData *)((CowData<char32_t> *)pCVar11 + -8));
                }
                lVar8 = lVar8 + -1;
                pCVar11 = (CowData *)((CowData<char32_t> *)pCVar11 + -8);
              } while (lVar8 != 0);
              if (*(char **)pSVar9 != local_68) {
                CowData<char32_t>::_ref((CowData<char32_t> *)pSVar9,(CowData *)&local_68);
              }
            }
            else {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar12);
              cVar6 = String::operator<((String_conflict *)&local_68,pSVar9);
              if (cVar6 != '\0') goto LAB_0010a6c0;
LAB_0010a767:
              local_80 = 0;
              if (local_68 != (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)local_d8,(CowData *)&local_68);
              }
              while( true ) {
                pCVar13 = (CowData<char32_t> *)pCVar11;
                pCVar11 = (CowData *)(pCVar13 + -8);
                cVar6 = String::operator<(local_d8,(String_conflict *)pCVar11);
                if (cVar6 == '\0') break;
                if (pCVar13 == (CowData<char32_t> *)pCVar15) {
                  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                   "bad comparison function; sorting will be broken",0,0);
                  break;
                }
                if (*(long *)pCVar13 != *(long *)(pCVar13 + -8)) {
                  CowData<char32_t>::_ref(pCVar13,pCVar11);
                }
              }
              if (*(long *)pCVar13 != local_80) {
                CowData<char32_t>::_ref(pCVar13,(CowData *)local_d8);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            }
            pcVar5 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar2 = (long *)(local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar5 + -0x10,false);
              }
            }
            lVar14 = lVar14 + 1;
            pCVar12 = pCVar12 + 8;
            pSVar16 = local_70;
          } while (lVar10 != lVar14);
        }
        else {
          local_d0 = 1;
          pCVar12 = pCVar15;
          do {
            local_68 = (char *)0x0;
            if (*(long *)pCVar12 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar12);
            }
            cVar6 = String::operator<((String_conflict *)&local_68,pSVar9);
            pCVar11 = pCVar12;
            if (cVar6 == '\0') {
              local_80 = 0;
              if (local_68 != (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)local_d8,(CowData *)&local_68);
              }
              while( true ) {
                pCVar13 = (CowData<char32_t> *)pCVar11;
                pCVar11 = (CowData *)(pCVar13 + -8);
                cVar6 = String::operator<(local_d8,(String_conflict *)pCVar11);
                if (cVar6 == '\0') break;
                if (pCVar13 == (CowData<char32_t> *)pCVar15) {
                  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                   "bad comparison function; sorting will be broken",0,0);
                  break;
                }
                if (*(long *)pCVar13 != *(long *)(pCVar13 + -8)) {
                  CowData<char32_t>::_ref(pCVar13,pCVar11);
                }
              }
              if (*(long *)pCVar13 != local_80) {
                CowData<char32_t>::_ref(pCVar13,(CowData *)local_d8);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            }
            else {
              do {
                pCVar1 = (CowData *)((CowData<char32_t> *)pCVar11 + -8);
                if (*(long *)pCVar11 != *(long *)((CowData<char32_t> *)pCVar11 + -8)) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)pCVar11,pCVar1);
                }
                pCVar11 = pCVar1;
              } while (pSVar9 != (String_conflict *)pCVar1);
              if ((char *)*(long *)pSVar9 != local_68) {
                CowData<char32_t>::_ref((CowData<char32_t> *)pSVar9,(CowData *)&local_68);
              }
            }
            pcVar5 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar2 = (long *)((long)local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static((void *)((long)pcVar5 + -0x10),false);
              }
            }
            local_d0 = local_d0 + 1;
            pCVar12 = pCVar12 + 8;
          } while (local_d0 != 0x10);
          pCVar15 = (CowData *)(pSVar9 + 0x80);
          local_d0 = 0x10;
          do {
            local_68 = (char *)0x0;
            pCVar12 = pCVar15;
            lVar14 = local_d0;
            if (*(long *)pCVar15 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar15);
            }
            while( true ) {
              pCVar13 = (CowData<char32_t> *)pCVar12;
              lVar14 = lVar14 + -1;
              pCVar12 = (CowData *)(pCVar13 + -8);
              cVar6 = String::operator<((String_conflict *)&local_68,(String_conflict *)pCVar12);
              if (cVar6 == '\0') break;
              if (lVar14 == 0) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                break;
              }
              if (*(long *)pCVar13 != *(long *)(pCVar13 + -8)) {
                CowData<char32_t>::_ref(pCVar13,pCVar12);
              }
            }
            if (*(char **)pCVar13 != local_68) {
              CowData<char32_t>::_ref(pCVar13,(CowData *)&local_68);
            }
            pcVar5 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar2 = (long *)(local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar5 + -0x10,false);
              }
            }
            local_d0 = local_d0 + 1;
            pCVar15 = pCVar15 + 8;
            pSVar16 = local_70;
          } while (lVar10 != local_d0);
        }
      }
      OptionButton::clear();
      if (pSVar16 == (String_conflict *)0x0) goto LAB_0010a1f4;
    }
    pSVar9 = pSVar16;
    for (lVar10 = 0; lVar10 < *(long *)(pSVar16 + -8); lVar10 = lVar10 + 1) {
      local_98 = (char *)0x0;
      if (*(long *)pSVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)pSVar9);
      }
      if (((lVar10 == 0) && ((local_a8 == (char *)0x0 || (*(uint *)(local_a8 + -8) < 2)))) &&
         (local_a8 != local_98)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_98);
      }
      cVar6 = String::operator==((String_conflict *)&local_98,(String_conflict *)(this + 0xe50));
      if (cVar6 != '\0') {
        local_88 = 0;
        local_68 = "";
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_88);
        local_68 = "(current)";
        local_90 = 0;
        local_60 = 9;
        String::parse_latin1((StrRange *)&local_90);
        TTR(local_d8,(String_conflict *)&local_90);
        operator+((char *)&local_68,(String_conflict *)&_LC147);
        String::operator+=((String_conflict *)&local_98,(String_conflict *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      OptionButton::add_item
                (*(String_conflict **)(this + 0xdd0),(int)(CowData<char32_t> *)&local_98);
      iVar7 = OptionButton::get_item_count();
      lVar14 = *(long *)(pSVar16 + -8);
      uVar3 = *(undefined8 *)(this + 0xdd0);
      if (lVar14 <= lVar10) {
LAB_0010a5e5:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar14,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      Variant::Variant((Variant *)local_58,pSVar9);
      OptionButton::set_item_metadata((int)uVar3,(Variant *)(ulong)(iVar7 - 1));
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar14 = *(long *)(pSVar16 + -8);
      if (lVar14 <= lVar10) goto LAB_0010a5e5;
      cVar6 = String::operator==(pSVar9,(String_conflict *)&local_a8);
      if (cVar6 != '\0') {
        OptionButton::select((int)*(undefined8 *)(this + 0xdd0));
      }
      pSVar9 = pSVar9 + 8;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
  }
LAB_0010a1f4:
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe10),0));
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe20),0));
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe38),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdd8),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe00),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xde0),0));
  uVar3 = *(undefined8 *)(this + 0xdc8);
  if ((*(long *)(this + 0xe50) == 0) || (*(uint *)(*(long *)(this + 0xe50) + -8) < 2)) {
    local_80 = 0;
    String::parse_latin1(local_d8,"");
    local_88 = 0;
    String::parse_latin1((String_conflict *)&local_88,"(none)");
    TTR((String_conflict *)&local_68,(String_conflict *)&local_88);
    LineEdit::set_text(uVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  }
  else {
    local_68 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(this + 0xe50));
    LineEdit::set_text(uVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  _update_selected_profile(this);
  if (((local_a0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
    Memory::free_static(local_a0,false);
  }
  CowData<String>::_unref((CowData<String> *)&local_70);
LAB_0010a3a0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_notification(int) [clone .part.0] */

void EditorFeatureProfileManager::_notification(int param_1)

{
  CowData<char32_t> *this;
  EditorFeatureProfile *this_00;
  char *pcVar1;
  int iVar2;
  undefined4 in_register_0000003c;
  EditorFeatureProfileManager *this_01;
  long in_FS_OFFSET;
  undefined8 local_80;
  String_conflict local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  this_01 = (EditorFeatureProfileManager *)CONCAT44(in_register_0000003c,param_1);
  this = (CowData<char32_t> *)(this_01 + 0xe50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = "_default_feature_profile";
  local_60 = 0x18;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String_conflict *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_68);
  if (*(char **)(this_01 + 0xe50) != local_68) {
    CowData<char32_t>::_unref(this);
    pcVar1 = local_68;
    local_68 = (char *)0x0;
    *(char **)(this_01 + 0xe50) = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((*(long *)(this_01 + 0xe50) != 0) && (1 < *(uint *)(*(long *)(this_01 + 0xe50) + -8))) {
    Ref<EditorFeatureProfile>::instantiate<>((Ref<EditorFeatureProfile> *)(this_01 + 0xe58));
    this_00 = *(EditorFeatureProfile **)(this_01 + 0xe58);
    EditorPaths::get_feature_profiles_dir();
    local_68 = ".profile";
    local_80 = 0;
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_80);
    String::operator+(local_78,(String_conflict *)this);
    String::path_join((String_conflict *)&local_68);
    iVar2 = EditorFeatureProfile::load_from_file(this_00,(String_conflict *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (iVar2 != 0) {
      operator+((char *)&local_68,(String_conflict *)"Error loading default feature profile: ");
      _err_print_error("_notification","editor/editor_feature_profile.cpp",0x14e,
                       (Variant *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_68 = (char *)0x0;
      if (*(long *)(this_01 + 0xe50) != 0) {
        CowData<char32_t>::_unref(this);
        *(undefined8 *)(this_01 + 0xe50) = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      Ref<EditorFeatureProfile>::unref((Ref<EditorFeatureProfile> *)(this_01 + 0xe58));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_profile_list(this_01,(String_conflict *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_notification(int) */

void __thiscall
EditorFeatureProfileManager::_notification(EditorFeatureProfileManager *this,int param_1)

{
  if (param_1 == 0xd) {
    _notification((int)this);
    return;
  }
  if (param_1 != 0x20) {
    return;
  }
  _update_selected_profile(this);
  return;
}



/* EditorFeatureProfileManager::set_current_profile(String const&, bool) */

void __thiscall
EditorFeatureProfileManager::set_current_profile
          (EditorFeatureProfileManager *this,String_conflict *param_1,bool param_2)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  StringName *pSVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  Object *local_a0;
  CowData<char32_t> local_98 [8];
  CowData<char32_t> local_90 [8];
  undefined8 local_88;
  long local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2) && (*(long *)param_1 != 0)) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    EditorPaths::get_feature_profiles_dir();
    DirAccess::open((String_conflict *)&local_a0,(CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    pOVar3 = local_a0;
    if (local_a0 == (Object *)0x0) {
      local_88 = 0;
      String::parse_latin1((String_conflict *)&local_88,"\'.");
      EditorPaths::get_feature_profiles_dir();
      operator+((char *)local_90,(String_conflict *)"Cannot open directory \'");
      String::operator+((String_conflict *)&local_80,(String_conflict *)local_90);
      _err_print_error("set_current_profile","editor/editor_feature_profile.cpp",0x376,
                       "Condition \"da.is_null()\" is true.",(CowData<char32_t> *)&local_80,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref(local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    else {
      pcVar2 = *(code **)(*(long *)local_a0 + 0x1d0);
      local_88 = 0;
      String::parse_latin1((String_conflict *)&local_88,".profile");
      String::operator+((String_conflict *)&local_80,param_1);
      iVar8 = 0;
      cVar4 = (*pcVar2)(pOVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (cVar4 != '\0') {
        for (; iVar5 = OptionButton::get_item_count(), iVar8 < iVar5; iVar8 = iVar8 + 1) {
          Variant::Variant((Variant *)local_58,param_1);
          OptionButton::get_item_metadata((int)(Variant *)local_78);
          cVar4 = Variant::operator==((Variant *)local_78,(Variant *)local_58);
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
          if (cVar4 != '\0') {
            OptionButton::select((int)*(undefined8 *)(this + 0xdd0));
            break;
          }
        }
        _update_selected_profile(this);
        if (((local_a0 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_a0), cVar4 != '\0')) {
          (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
          Memory::free_static(local_a0,false);
        }
        goto LAB_0010ad7d;
      }
      local_88 = 0;
      String::parse_latin1((String_conflict *)&local_88,"\' does not exist.");
      operator+((char *)local_90,(String_conflict *)"Feature profile \'");
      String::operator+((String_conflict *)&local_80,(String_conflict *)local_90);
      _err_print_error("set_current_profile","editor/editor_feature_profile.cpp",0x377,
                       "Condition \"!da->file_exists(p_profile_name + \".profile\")\" is true.",
                       (CowData<char32_t> *)&local_80,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    if (((local_a0 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_a0), cVar4 != '\0')) {
      (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
      Memory::free_static(local_a0,false);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
LAB_0010ad7d:
    pSVar6 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,param_1);
    StringName::StringName((StringName *)&local_80,"_default_feature_profile",false);
    Object::set(pSVar6,(Variant *)&local_80,(bool *)local_58);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    EditorSettings::get_singleton();
    EditorSettings::save();
    lVar7 = *(long *)param_1;
    if (*(long *)(this + 0xe50) != lVar7) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xe50),(CowData *)param_1);
      lVar7 = *(long *)param_1;
    }
    local_80 = *(long *)(this + 0xe58);
    if ((lVar7 == 0) || (*(uint *)(lVar7 + -8) < 2)) {
      if ((local_80 != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
        pOVar3 = *(Object **)(this + 0xe58);
        cVar4 = predelete_handler(pOVar3);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
      *(undefined8 *)(this + 0xe58) = 0;
    }
    else {
      lVar7 = *(long *)(this + 0xe60);
      if (local_80 != lVar7) {
        *(long *)(this + 0xe58) = lVar7;
        if ((lVar7 != 0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          *(undefined8 *)(this + 0xe58) = 0;
        }
        Ref<EditorFeatureProfile>::unref((Ref<EditorFeatureProfile> *)&local_80);
      }
    }
    local_80 = 0;
    _update_profile_list(this,(String_conflict *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _emit_current_profile_changed(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_profile_action(int) */

void __thiscall
EditorFeatureProfileManager::_profile_action(EditorFeatureProfileManager *this,int param_1)

{
  String_conflict *pSVar1;
  undefined8 uVar2;
  Vector2i *pVVar3;
  char cVar4;
  EditorFeatureProfileManager *this_00;
  long in_FS_OFFSET;
  float fVar5;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  EditorFeatureProfileManager local_68 [8];
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case 0:
    local_58 = 0;
    String::parse_latin1((String_conflict *)&local_58,"");
LAB_0010b30d:
    set_current_profile(this,(String_conflict *)&local_58,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    break;
  case 1:
    this_00 = (EditorFeatureProfileManager *)&local_58;
    _get_selected_profile(this_00);
    if ((local_58 == 0) || (*(uint *)(local_58 + -8) < 2)) {
      _err_print_error("_profile_action","editor/editor_feature_profile.cpp",0x1b0,
                       "Condition \"selected.is_empty()\" is true.",0,0);
    }
    else {
      cVar4 = String::operator==((String_conflict *)this_00,(String_conflict *)(this + 0xe50));
      if (cVar4 == '\0') goto LAB_0010b30d;
    }
LAB_0010b410:
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
    break;
  case 2:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorFileDialog::popup_file_dialog();
      return;
    }
    goto LAB_0010b64d;
  case 3:
    EditorFileDialog::popup_file_dialog();
    pSVar1 = *(String_conflict **)(this + 0xe48);
    local_60 = 0;
    String::parse_latin1((String_conflict *)&local_60,".profile");
    _get_selected_profile(local_68);
    String::operator+((String_conflict *)&local_58,(String_conflict *)local_68);
    EditorFileDialog::set_current_file(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    break;
  case 4:
    pVVar3 = *(Vector2i **)(this + 0xdb8);
    fVar5 = (float)EditorScale::get_scale();
    local_50 = CONCAT44(fVar5 * _LC219._4_4_,fVar5 * (float)_LC219);
    local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
    Window::popup_centered(pVVar3);
    LineEdit::clear();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::grab_focus();
      return;
    }
    goto LAB_0010b64d;
  case 5:
    this_00 = (EditorFeatureProfileManager *)&local_80;
    _get_selected_profile(this_00);
    if ((local_80 == 0) || (*(uint *)(local_80 + -8) < 2)) {
      _err_print_error("_profile_action","editor/editor_feature_profile.cpp",0x1c4,
                       "Condition \"selected.is_empty()\" is true.",0,0);
      goto LAB_0010b410;
    }
    uVar2 = *(undefined8 *)(this + 0xdb0);
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)this_00);
    local_70 = 0;
    String::parse_latin1((String_conflict *)&local_70,"");
    local_78 = 0;
    String::parse_latin1
              ((String_conflict *)&local_78,
               "Remove currently selected profile, \'%s\'? Cannot be undone.");
    TTR((String_conflict *)local_68,(String_conflict *)&local_78);
    vformat<String>((CowData<char32_t> *)&local_58,(String_conflict *)local_68,
                    (CowData<char32_t> *)&local_60);
    AcceptDialog::set_text(uVar2,(CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    pVVar3 = *(Vector2i **)(this + 0xdb0);
    fVar5 = (float)EditorScale::get_scale();
    local_50 = CONCAT44(fVar5 * _LC219._4_4_,fVar5 * (float)_LC219);
    local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
    Window::popup_centered(pVVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b64d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_erase_selected_profile() */

void __thiscall
EditorFeatureProfileManager::_erase_selected_profile(EditorFeatureProfileManager *this)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_80;
  Object *local_78;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_selected_profile((EditorFeatureProfileManager *)&local_80);
  if ((local_80 == 0) || (*(uint *)(local_80 + -8) < 2)) {
    _err_print_error("_erase_selected_profile","editor/editor_feature_profile.cpp",0x1ce,
                     "Condition \"selected.is_empty()\" is true.",0,0);
  }
  else {
    EditorPaths::get_feature_profiles_dir();
    DirAccess::open((String_conflict *)&local_78,(CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    pOVar2 = local_78;
    if (local_78 == (Object *)0x0) {
      local_60 = 0;
      String::parse_latin1((String_conflict *)&local_60,"\'.");
      EditorPaths::get_feature_profiles_dir();
      operator+((char *)local_68,(String_conflict *)"Cannot open directory \'");
      String::operator+((String_conflict *)&local_58,(String_conflict *)local_68);
      _err_print_error("_erase_selected_profile","editor/editor_feature_profile.cpp",0x1d0,
                       "Condition \"da.is_null()\" is true.",(CowData<char32_t> *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    else {
      pcVar1 = *(code **)(*(long *)local_78 + 0x208);
      local_60 = 0;
      local_58 = ".profile";
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_60);
      String::operator+((String_conflict *)&local_58,(String_conflict *)&local_80);
      (*pcVar1)(pOVar2,(CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      cVar3 = String::operator==((String_conflict *)&local_80,(String_conflict *)(this + 0xe50));
      local_58 = (char *)0x0;
      if (cVar3 == '\0') {
        _update_profile_list(this,(String_conflict *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      else {
        String::parse_latin1((String_conflict *)&local_58,"");
        set_current_profile(this,(String_conflict *)&local_58,false);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
    }
    if (((local_78 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
      (**(code **)(*(long *)local_78 + 0x140))(local_78);
      Memory::free_static(local_78,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorFeatureProfileManager::_create_new_profile() */

void __thiscall EditorFeatureProfileManager::_create_new_profile(EditorFeatureProfileManager *this)

{
  String_conflict *pSVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  CowData<char32_t> local_90 [8];
  String_conflict local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  String_conflict local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  EditorFeatureProfile *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81(local_90,0),SUB81((CowData<char32_t> *)&local_58,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  cVar2 = String::is_valid_filename();
  if (cVar2 == '\0') {
LAB_0010b992:
    pSVar1 = EditorNode::singleton;
    local_60 = 0;
    local_58 = (EditorFeatureProfile *)&_LC4;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = (EditorFeatureProfile *)0x10d11a;
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR(local_70,(String_conflict *)&local_68);
    local_58 = (EditorFeatureProfile *)&_LC4;
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = (EditorFeatureProfile *)0x10dc00;
    local_80 = 0;
    local_50 = 0x39;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String_conflict *)&local_58,(String_conflict *)&local_80);
    EditorNode::show_warning(pSVar1,(String_conflict *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    iVar3 = String::find_char((wchar32)local_90,0x2e);
    if (iVar3 != -1) goto LAB_0010b992;
    EditorPaths::get_feature_profiles_dir();
    local_58 = (EditorFeatureProfile *)0x10d134;
    local_60 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String_conflict *)&local_58,(String_conflict *)local_90);
    String::path_join(local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    cVar2 = FileAccess::exists(local_88);
    pSVar1 = EditorNode::singleton;
    if (cVar2 == '\0') {
      local_58 = (EditorFeatureProfile *)0x0;
      Ref<EditorFeatureProfile>::instantiate<>((Ref<EditorFeatureProfile> *)&local_58);
      EditorFeatureProfile::save_to_file(local_58,local_88);
      _update_profile_list(this,(String_conflict *)local_90);
      iVar3 = OptionButton::get_item_count();
      if (iVar3 == 1) {
        _profile_action(this,1);
      }
      Ref<EditorFeatureProfile>::unref((Ref<EditorFeatureProfile> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref(local_90);
      goto LAB_0010babf;
    }
    local_58 = (EditorFeatureProfile *)0x0;
    String::parse_latin1((String_conflict *)&local_58,"");
    local_60 = 0;
    String::parse_latin1((String_conflict *)&local_60,"Warning!");
    TTR((String_conflict *)&local_68,(String_conflict *)&local_60);
    local_78 = 0;
    String::parse_latin1((String_conflict *)&local_78,"");
    local_80 = 0;
    String::parse_latin1((String_conflict *)&local_80,"Profile with this name already exists.");
    TTR(local_70,(String_conflict *)&local_80);
    EditorNode::show_warning(pSVar1,local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  }
  CowData<char32_t>::_unref(local_90);
LAB_0010babf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::_import_profiles(Vector<String> const&) */

void __thiscall
EditorFeatureProfileManager::_import_profiles(EditorFeatureProfileManager *this,Vector *param_1)

{
  code *pcVar1;
  String_conflict *pSVar2;
  EditorFeatureProfile *pEVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  EditorFeatureProfile *local_98;
  long local_90;
  String_conflict local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  String_conflict local_70 [8];
  undefined8 local_68;
  EditorFeatureProfile *local_60;
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(param_1 + 8);
  while (lVar6 != 0) {
    if (*(long *)(lVar6 + -8) <= lVar7) {
      if (lVar6 != 0) {
        lVar7 = 0;
        goto LAB_0010bf07;
      }
      break;
    }
    local_98 = (EditorFeatureProfile *)0x0;
    Ref<EditorFeatureProfile>::instantiate<>((Ref<EditorFeatureProfile> *)&local_98);
    pEVar3 = local_98;
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) goto LAB_0010be80;
    lVar8 = *(long *)(lVar6 + -8);
    if (lVar8 <= lVar7) goto LAB_0010be83;
    iVar5 = EditorFeatureProfile::load_from_file(local_98,(String_conflict *)(lVar6 + lVar7 * 8));
    if (*(long *)(param_1 + 8) == 0) goto LAB_0010be80;
    lVar8 = *(long *)(*(long *)(param_1 + 8) + -8);
    if (lVar8 <= lVar7) goto LAB_0010be83;
    String::get_file();
    pSVar2 = EditorNode::singleton;
    if (iVar5 != 0) {
      local_48 = 0;
      String::parse_latin1((String_conflict *)&local_48,"");
      local_50 = 0;
      String::parse_latin1((String_conflict *)&local_50,"Warning!");
      TTR((String_conflict *)local_58,(String_conflict *)&local_50);
      local_68 = 0;
      if (local_90 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
      }
      local_78 = 0;
      String::parse_latin1((String_conflict *)&local_78,"");
      local_80 = 0;
      String::parse_latin1
                ((String_conflict *)&local_80,"File \'%s\' format is invalid, import aborted.");
      TTR(local_70,(String_conflict *)&local_80);
      vformat<String>((CowData<char32_t> *)&local_60,local_70,(CowData<char32_t> *)&local_68);
      EditorNode::show_warning(pSVar2,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010c150:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      Ref<EditorFeatureProfile>::unref((Ref<EditorFeatureProfile> *)&local_98);
      goto LAB_0010be56;
    }
    EditorPaths::get_feature_profiles_dir();
    String::path_join(local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    cVar4 = FileAccess::exists(local_88);
    pSVar2 = EditorNode::singleton;
    if (cVar4 != '\0') {
      local_48 = 0;
      String::parse_latin1((String_conflict *)&local_48,"");
      local_50 = 0;
      String::parse_latin1((String_conflict *)&local_50,"Warning!");
      TTR((String_conflict *)local_58,(String_conflict *)&local_50);
      String::get_basename();
      local_78 = 0;
      String::parse_latin1((String_conflict *)&local_78,"");
      local_80 = 0;
      String::parse_latin1
                ((String_conflict *)&local_80,
                 "Profile \'%s\' already exists. Remove it first before importing, import aborted.")
      ;
      TTR(local_70,(String_conflict *)&local_80);
      vformat<String>((CowData<char32_t> *)&local_60,local_70,(CowData<char32_t> *)&local_68);
      EditorNode::show_warning(pSVar2,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      goto LAB_0010c150;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pEVar3), cVar4 != '\0')) {
      (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
      Memory::free_static(pEVar3,false);
    }
    lVar7 = lVar7 + 1;
    lVar6 = *(long *)(param_1 + 8);
  }
  goto LAB_0010be1d;
LAB_0010bf07:
  do {
    if (*(long *)(lVar6 + -8) <= lVar7) break;
    local_60 = (EditorFeatureProfile *)0x0;
    Ref<EditorFeatureProfile>::instantiate<>((Ref<EditorFeatureProfile> *)&local_60);
    pEVar3 = local_60;
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
LAB_0010be80:
      lVar8 = 0;
LAB_0010be83:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar8 = *(long *)(lVar6 + -8);
    if (lVar8 <= lVar7) goto LAB_0010be83;
    iVar5 = EditorFeatureProfile::load_from_file(local_60,(String_conflict *)(lVar6 + lVar7 * 8));
    if (iVar5 == 0) {
      if (*(long *)(param_1 + 8) == 0) goto LAB_0010be80;
      lVar8 = *(long *)(*(long *)(param_1 + 8) + -8);
      if (lVar8 <= lVar7) goto LAB_0010be83;
      String::get_file();
      EditorPaths::get_feature_profiles_dir();
      String::path_join((String_conflict *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      EditorFeatureProfile::save_to_file(pEVar3,(String_conflict *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(local_58);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pEVar3), cVar4 != '\0')) {
        (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
        Memory::free_static(pEVar3,false);
      }
    }
    else {
      _err_print_error("_import_profiles","editor/editor_feature_profile.cpp",0x341,
                       "Condition \"err != OK\" is true. Continuing.",0,0);
      Ref<EditorFeatureProfile>::unref((Ref<EditorFeatureProfile> *)&local_60);
    }
    lVar6 = *(long *)(param_1 + 8);
    lVar7 = lVar7 + 1;
  } while (lVar6 != 0);
LAB_0010be1d:
  local_48 = 0;
  _update_profile_list(this,(String_conflict *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  iVar5 = OptionButton::get_item_count();
  if (iVar5 == 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _profile_action(this,1);
      return;
    }
  }
  else {
LAB_0010be56:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* StyleBoxEmpty::is_class_ptr(void*) const */

uint __thiscall StyleBoxEmpty::is_class_ptr(StyleBoxEmpty *this,void *param_1)

{
  return (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &StyleBox::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* StyleBoxEmpty::_getv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_setv(StringName const&, Variant const&) */

undefined8 StyleBoxEmpty::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_validate_propertyv(PropertyInfo&) const */

void StyleBoxEmpty::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* StyleBoxEmpty::_property_can_revertv(StringName const&) const */

undefined8 StyleBoxEmpty::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StyleBoxEmpty::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_notificationv(int, bool) */

void StyleBoxEmpty::_notificationv(int param_1,bool param_2)

{
  return;
}



/* StyleBoxEmpty::get_style_margin(Side) const */

undefined8 StyleBoxEmpty::get_style_margin(void)

{
  return 0;
}



/* StyleBoxEmpty::draw(RID, Rect2 const&) const */

void StyleBoxEmpty::draw(void)

{
  return;
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



/* AcceptDialog::custom_action(String const&) */

void AcceptDialog::custom_action(String_conflict *param_1)

{
  return;
}



/* EditorFeatureProfile::is_class_ptr(void*) const */

uint __thiscall EditorFeatureProfile::is_class_ptr(EditorFeatureProfile *this,void *param_1)

{
  return (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1267,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorFeatureProfile::_getv(StringName const&, Variant&) const */

undefined8 EditorFeatureProfile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFeatureProfile::_setv(StringName const&, Variant const&) */

undefined8 EditorFeatureProfile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFeatureProfile::_validate_propertyv(PropertyInfo&) const */

void EditorFeatureProfile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorFeatureProfile::_property_can_revertv(StringName const&) const */

undefined8 EditorFeatureProfile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorFeatureProfile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorFeatureProfile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFeatureProfile::_notificationv(int, bool) */

void EditorFeatureProfile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorFeatureProfileManager::is_class_ptr(void*) const */

uint EditorFeatureProfileManager::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x126a,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1267,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126a,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126a,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126b,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* EditorFeatureProfileManager::_property_can_revertv(StringName const&) const */

undefined8 EditorFeatureProfileManager::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorFeatureProfileManager::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorFeatureProfileManager::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::is_class_ptr(void*) const */

uint __thiscall JSON::is_class_ptr(JSON *this,void *param_1)

{
  return (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1267,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x126b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JSON::_getv(StringName const&, Variant&) const */

undefined8 JSON::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_setv(StringName const&, Variant const&) */

undefined8 JSON::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_validate_propertyv(PropertyInfo&) const */

void JSON::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JSON::_property_can_revertv(StringName const&) const */

undefined8 JSON::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JSON::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JSON::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_notificationv(int, bool) */

void JSON::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,int> *this)

{
  return;
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



/* MethodBindTR<String, EditorFeatureProfile::Feature>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<String,EditorFeatureProfile::Feature>::_gen_argument_type
          (MethodBindTR<String,EditorFeatureProfile::Feature> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffe) + 4;
}



/* MethodBindTR<String, EditorFeatureProfile::Feature>::get_argument_meta(int) const */

undefined8 MethodBindTR<String,EditorFeatureProfile::Feature>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, EditorFeatureProfile::Feature>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,EditorFeatureProfile::Feature>::_gen_argument_type
          (MethodBindTRC<bool,EditorFeatureProfile::Feature> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTRC<bool, EditorFeatureProfile::Feature>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,EditorFeatureProfile::Feature>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<EditorFeatureProfile::Feature, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<EditorFeatureProfile::Feature,bool>::_gen_argument_type
          (MethodBindT<EditorFeatureProfile::Feature,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<EditorFeatureProfile::Feature, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<EditorFeatureProfile::Feature,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, StringName const&, StringName const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,StringName_const&,StringName_const&>::_gen_argument_type
          (MethodBindTRC<bool,StringName_const&,StringName_const&> *this,int param_1)

{
  return (-((uint)param_1 < 2) & 0x14U) + 1;
}



/* MethodBindTRC<bool, StringName const&, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,StringName_const&,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<StringName const&, StringName const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&,StringName_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, StringName const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,StringName_const&>::_gen_argument_type
          (MethodBindTRC<bool,StringName_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 0x14U) + 1;
}



/* MethodBindTRC<bool, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<StringName const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<StringName_const&,bool>::_gen_argument_type
          (MethodBindT<StringName_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x14U) + 1;
  }
  return cVar1;
}



/* MethodBindT<StringName const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, Vector<String>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&>::
get_argument_count(CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void,
   Object*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void>::get_argument_count
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* MethodBindT<StringName const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,bool>::~MethodBindT(MethodBindT<StringName_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126338;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,bool>::~MethodBindT(MethodBindT<StringName_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126338;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126398;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126398;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<StringName const&, StringName const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&,bool>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001263f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&, StringName const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&,bool>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001263f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, StringName const&, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<bool,StringName_const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126458;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, StringName const&, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<bool,StringName_const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126458;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<EditorFeatureProfile::Feature, bool>::~MethodBindT() */

void __thiscall
MethodBindT<EditorFeatureProfile::Feature,bool>::~MethodBindT
          (MethodBindT<EditorFeatureProfile::Feature,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001264b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<EditorFeatureProfile::Feature, bool>::~MethodBindT() */

void __thiscall
MethodBindT<EditorFeatureProfile::Feature,bool>::~MethodBindT
          (MethodBindT<EditorFeatureProfile::Feature,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001264b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, EditorFeatureProfile::Feature>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,EditorFeatureProfile::Feature>::~MethodBindTRC
          (MethodBindTRC<bool,EditorFeatureProfile::Feature> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126518;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, EditorFeatureProfile::Feature>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,EditorFeatureProfile::Feature>::~MethodBindTRC
          (MethodBindTRC<bool,EditorFeatureProfile::Feature> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126518;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<String, EditorFeatureProfile::Feature>::~MethodBindTR() */

void __thiscall
MethodBindTR<String,EditorFeatureProfile::Feature>::~MethodBindTR
          (MethodBindTR<String,EditorFeatureProfile::Feature> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126578;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<String, EditorFeatureProfile::Feature>::~MethodBindTR() */

void __thiscall
MethodBindTR<String,EditorFeatureProfile::Feature>::~MethodBindTR
          (MethodBindTR<String,EditorFeatureProfile::Feature> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126578;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001265d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001265d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124cf0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124cf0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorFeatureProfileManager::_getv(StringName const&, Variant&) const */

undefined8 EditorFeatureProfileManager::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorFeatureProfileManager::_setv(StringName const&, Variant const&) */

undefined8 EditorFeatureProfileManager::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0012d008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<StringName const&, StringName const&, bool>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<StringName_const&,StringName_const&,bool>::_gen_argument_type
          (MethodBindT<StringName_const&,StringName_const&,bool> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((uint)param_1 < 3) && (uVar1 = 1, param_1 != 2)) {
    uVar1 = 0x15;
  }
  return uVar1;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  Element **ppEVar9;
  long lVar10;
  Element *pEVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar12 = param_2 * 2 + 2;
  lVar16 = param_2;
  if (lVar12 < param_3) {
    do {
      lVar10 = lVar12 + -1;
      ppEVar9 = param_5 + lVar10 + param_1;
      pEVar11 = *ppEVar9;
      pEVar3 = param_5[param_1 + lVar12];
      lVar13 = *(long *)pEVar11;
      lVar6 = *(long *)pEVar3;
      if (lVar6 == 0) {
        if (lVar13 != 0) {
          pbVar14 = *(byte **)(lVar13 + 8);
          uVar8 = 0;
          pbVar15 = &_LC4;
LAB_0010e0a4:
          if (pbVar14 == (byte *)0x0) {
            lVar6 = 0;
            uVar4 = **(uint **)(lVar13 + 0x10);
            if (uVar4 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_0010e050;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_0010e050;
                if (uVar4 < uVar8) break;
                uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                uVar4 = (*(uint **)(lVar13 + 0x10))[lVar6 + 1];
                lVar6 = lVar6 + 1;
              } while (uVar8 != 0 || uVar4 != 0);
            }
          }
          else {
            uVar4 = (uint)(char)*pbVar14;
            bVar5 = (byte)uVar8 | *pbVar14;
LAB_0010e0f6:
            if (bVar5 != 0) {
              lVar13 = 1;
              do {
                if (uVar8 == 0) goto LAB_0010e050;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_0010e050;
                if (uVar4 < uVar8) break;
                pbVar1 = pbVar14 + lVar13;
                uVar4 = (uint)(char)*pbVar1;
                pbVar2 = pbVar15 + lVar13;
                uVar8 = (uint)(char)*pbVar2;
                lVar13 = lVar13 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar15 = *(byte **)(lVar6 + 8);
        if (lVar13 == 0) {
          if (pbVar15 != (byte *)0x0) {
            bVar5 = *pbVar15;
            uVar8 = (uint)(char)bVar5;
            pbVar14 = &_LC4;
            uVar4 = 0;
            goto LAB_0010e0f6;
          }
          uVar8 = 0;
          pbVar14 = &_LC4;
        }
        else {
          pbVar14 = *(byte **)(lVar13 + 8);
          if (pbVar15 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar15;
            goto LAB_0010e0a4;
          }
          if (pbVar14 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar13 + 0x10);
            uVar4 = **(uint **)(lVar6 + 0x10);
            if (uVar8 != 0 || uVar4 != 0) {
              do {
                if (uVar4 == 0) goto LAB_0010e050;
                if (uVar8 == 0) break;
                if (uVar4 < uVar8) goto LAB_0010e050;
                if (uVar8 < uVar4) break;
                uVar4 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar4 != 0 || uVar8 != 0);
            }
            goto LAB_0010e078;
          }
          uVar8 = (uint)(char)*pbVar14;
        }
        lVar13 = 0;
        uVar4 = **(uint **)(lVar6 + 0x10);
        if (uVar4 != 0 || uVar8 != 0) {
          do {
            if (uVar4 == 0) goto LAB_0010e050;
            if (uVar8 == 0) break;
            if (uVar4 < uVar8) goto LAB_0010e050;
            if (uVar8 < uVar4) break;
            uVar4 = (*(uint **)(lVar6 + 0x10))[lVar13 + 1];
            uVar8 = (uint)(char)pbVar14[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar4 != 0 || uVar8 != 0);
        }
      }
LAB_0010e078:
      ppEVar9 = param_5 + param_1 + lVar12;
      lVar10 = lVar12;
      pEVar11 = pEVar3;
      lVar12 = lVar12 + 1;
LAB_0010e050:
      lVar12 = lVar12 * 2;
      param_5[param_1 + lVar16] = pEVar11;
      lVar16 = lVar10;
    } while (lVar12 < param_3);
    if (lVar12 == param_3) goto LAB_0010e47d;
  }
  else {
    ppEVar9 = param_5 + param_2 + param_1;
    if (lVar12 != param_3) goto LAB_0010e27a;
LAB_0010e47d:
    lVar10 = lVar12 + -1;
    *ppEVar9 = param_5[param_1 + lVar10];
    ppEVar9 = param_5 + param_1 + lVar10;
  }
  lVar12 = (lVar10 + -1) - (lVar10 + -1 >> 0x3f);
  if (param_2 < lVar10) {
    lVar16 = *(long *)param_4;
    while( true ) {
      lVar13 = lVar12 >> 1;
      pEVar11 = param_5[param_1 + lVar13];
      lVar12 = *(long *)pEVar11;
      if (lVar12 == 0) break;
      pbVar15 = *(byte **)(lVar12 + 8);
      if (lVar16 == 0) {
        uVar8 = 0;
        pbVar14 = &_LC4;
        if (pbVar15 != (byte *)0x0) {
          bVar5 = *pbVar15;
          uVar8 = (uint)(char)bVar5;
          uVar4 = 0;
          pbVar14 = &_LC4;
          goto LAB_0010e2fa;
        }
LAB_0010e35a:
        uVar4 = **(uint **)(lVar12 + 0x10);
        if (uVar4 == 0 && uVar8 == 0) goto LAB_0010e270;
        lVar6 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_0010e270;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_0010e270;
          uVar4 = (*(uint **)(lVar12 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar14[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_0010e270;
        }
      }
      else {
        pbVar14 = *(byte **)(lVar16 + 8);
        if (pbVar15 == (byte *)0x0) {
          if (pbVar14 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar14;
            goto LAB_0010e35a;
          }
          uVar8 = **(uint **)(lVar16 + 0x10);
          uVar4 = **(uint **)(lVar12 + 0x10);
          if (uVar8 == 0 && uVar4 == 0) goto LAB_0010e270;
          lVar6 = 4;
          while (uVar4 != 0) {
            if (uVar8 == 0) goto LAB_0010e270;
            if (uVar4 < uVar8) break;
            if (uVar8 < uVar4) goto LAB_0010e270;
            uVar4 = *(uint *)((long)*(uint **)(lVar12 + 0x10) + lVar6);
            uVar8 = *(uint *)((long)*(uint **)(lVar16 + 0x10) + lVar6);
            lVar6 = lVar6 + 4;
            if (uVar4 == 0 && uVar8 == 0) {
              param_5[param_1 + lVar10] = param_4;
              return;
            }
          }
        }
        else {
          uVar4 = (uint)(char)*pbVar15;
          uVar8 = uVar4;
          if (pbVar14 == (byte *)0x0) goto LAB_0010e2a5;
LAB_0010e2f4:
          uVar4 = (uint)(char)*pbVar14;
          bVar5 = (byte)uVar8 | *pbVar14;
LAB_0010e2fa:
          if (bVar5 == 0) goto LAB_0010e270;
          lVar12 = 1;
          while (uVar8 != 0) {
            if (uVar4 == 0) goto LAB_0010e270;
            if (uVar8 < uVar4) break;
            if (uVar4 < uVar8) goto LAB_0010e270;
            pbVar1 = pbVar14 + lVar12;
            uVar4 = (uint)(char)*pbVar1;
            pbVar2 = pbVar15 + lVar12;
            uVar8 = (uint)(char)*pbVar2;
            lVar12 = lVar12 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010e270;
          }
        }
      }
LAB_0010e240:
      param_5[lVar10 + param_1] = pEVar11;
      lVar12 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
      lVar10 = lVar13;
      if (lVar13 <= param_2) {
        param_5[param_1 + lVar13] = param_4;
        return;
      }
    }
    if (lVar16 != 0) {
      pbVar14 = *(byte **)(lVar16 + 8);
      uVar4 = 0;
      uVar8 = 0;
      pbVar15 = &_LC4;
      if (pbVar14 != (byte *)0x0) goto LAB_0010e2f4;
LAB_0010e2a5:
      uVar8 = **(uint **)(lVar16 + 0x10);
      if (uVar8 != 0 || uVar4 != 0) {
        lVar12 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_0010e270;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_0010e270;
          uVar4 = (uint)(char)pbVar15[lVar12 + 1];
          uVar8 = (*(uint **)(lVar16 + 0x10))[lVar12 + 1];
          lVar12 = lVar12 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_0010e270;
        }
        goto LAB_0010e240;
      }
    }
LAB_0010e270:
    ppEVar9 = param_5 + lVar10 + param_1;
  }
LAB_0010e27a:
  *ppEVar9 = param_4;
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::unguarded_linear_insert(long param_1,Element *param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  Element *pEVar10;
  byte *pbVar11;
  
  lVar3 = *(long *)param_2;
LAB_0010e540:
  pEVar10 = param_3[param_1 + -1];
  lVar5 = *(long *)pEVar10;
  if (lVar3 != 0) {
    pbVar9 = *(byte **)(lVar3 + 8);
    do {
      if (lVar5 == 0) {
        if (pbVar9 != (byte *)0x0) goto code_r0x0010e5f1;
        uVar7 = 0;
        pbVar11 = &_LC4;
LAB_0010e57c:
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar8 == 0 && uVar7 == 0) goto LAB_0010e70b;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0010e70b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0010e70b;
          uVar8 = (*(uint **)(lVar3 + 0x10))[lVar5 + 1];
          uVar7 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0010e70b;
        }
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar9 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar9;
          goto LAB_0010e61c;
        }
        if (pbVar11 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar11;
          goto LAB_0010e57c;
        }
        uVar7 = **(uint **)(lVar5 + 0x10);
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0010e70b;
        lVar6 = 4;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0010e70b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0010e70b;
          uVar8 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar6);
          uVar7 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0010e70b;
        }
      }
      if (param_1 == 1) goto LAB_0010e6e0;
      param_3[param_1] = pEVar10;
      pEVar10 = param_3[param_1 + -2];
      lVar5 = *(long *)pEVar10;
      param_1 = param_1 + -1;
    } while( true );
  }
  if (lVar5 != 0) {
    pbVar11 = *(byte **)(lVar5 + 8);
    uVar7 = 0;
    pbVar9 = &_LC4;
LAB_0010e61c:
    if (pbVar11 != (byte *)0x0) {
      uVar8 = (uint)(char)*pbVar11;
      bVar4 = (byte)uVar7 | *pbVar11;
      goto LAB_0010e68f;
    }
    uVar8 = **(uint **)(lVar5 + 0x10);
    if (uVar8 != 0 || uVar7 != 0) {
      lVar6 = 0;
      while (uVar7 != 0) {
        if (uVar8 == 0) goto LAB_0010e70b;
        if (uVar7 < uVar8) break;
        if (uVar8 < uVar7) goto LAB_0010e70b;
        uVar7 = (uint)(char)pbVar9[lVar6 + 1];
        uVar8 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0010e70b;
      }
      goto LAB_0010e670;
    }
  }
  goto LAB_0010e70b;
code_r0x0010e5f1:
  bVar4 = *pbVar9;
  uVar7 = (uint)(char)bVar4;
  pbVar11 = &_LC4;
  uVar8 = 0;
LAB_0010e68f:
  if (bVar4 == 0) goto LAB_0010e70b;
  lVar5 = 1;
  while (uVar7 != 0) {
    if (uVar8 == 0) goto LAB_0010e70b;
    if (uVar7 < uVar8) break;
    if (uVar8 < uVar7) goto LAB_0010e70b;
    pbVar1 = pbVar9 + lVar5;
    uVar7 = (uint)(char)*pbVar1;
    pbVar2 = pbVar11 + lVar5;
    uVar8 = (uint)(char)*pbVar2;
    lVar5 = lVar5 + 1;
    if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010e70b;
  }
LAB_0010e670:
  if (param_1 == 1) {
LAB_0010e6e0:
    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                     "bad comparison function; sorting will be broken",0,0);
    param_1 = 1;
LAB_0010e70b:
    param_3[param_1] = param_2;
    return;
  }
  param_3[param_1] = pEVar10;
  param_1 = param_1 + -1;
  goto LAB_0010e540;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::linear_insert(long param_1,long param_2,Element **param_3)

{
  Element **__src;
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  __src = param_3 + param_1;
  pEVar3 = param_3[param_2];
  lVar6 = *(long *)pEVar3;
  lVar5 = *(long *)*__src;
  if (lVar6 == 0) {
    if (lVar5 == 0) goto LAB_0010e8e0;
    pbVar10 = *(byte **)(lVar5 + 8);
    uVar8 = 0;
    pbVar11 = &_LC4;
LAB_0010e894:
    if (pbVar10 == (byte *)0x0) {
      uVar9 = **(uint **)(lVar5 + 0x10);
      if (uVar8 != 0 || uVar9 != 0) {
        lVar6 = 0;
        do {
          if (uVar8 == 0) goto LAB_0010e830;
          if (uVar9 == 0) break;
          if (uVar8 < uVar9) goto LAB_0010e830;
          if (uVar9 < uVar8) break;
          uVar8 = (uint)(char)pbVar11[lVar6 + 1];
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (uVar8 != 0 || uVar9 != 0);
      }
      goto LAB_0010e8e0;
    }
    uVar9 = (uint)(char)*pbVar10;
    bVar4 = (byte)uVar8 | *pbVar10;
LAB_0010e907:
    if (bVar4 != 0) {
      lVar6 = 1;
      do {
        if (uVar8 == 0) goto LAB_0010e830;
        if (uVar9 == 0) break;
        if (uVar8 < uVar9) goto LAB_0010e830;
        if (uVar9 < uVar8) break;
        pbVar2 = pbVar11 + lVar6;
        uVar8 = (uint)(char)*pbVar2;
        pbVar1 = pbVar10 + lVar6;
        uVar9 = (uint)(char)*pbVar1;
        lVar6 = lVar6 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
  }
  else {
    pbVar11 = *(byte **)(lVar6 + 8);
    if (lVar5 == 0) {
      if (pbVar11 != (byte *)0x0) {
        bVar4 = *pbVar11;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC4;
        uVar9 = 0;
        goto LAB_0010e907;
      }
      uVar8 = 0;
      pbVar10 = &_LC4;
    }
    else {
      pbVar10 = *(byte **)(lVar5 + 8);
      if (pbVar11 != (byte *)0x0) {
        uVar8 = (uint)(char)*pbVar11;
        goto LAB_0010e894;
      }
      if (pbVar10 == (byte *)0x0) {
        uVar8 = **(uint **)(lVar5 + 0x10);
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar8 != 0 || uVar9 != 0) {
          lVar7 = 4;
          do {
            if (uVar9 == 0) goto LAB_0010e830;
            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_0010e830;
            if (uVar8 < uVar9) break;
            uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
            uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
            lVar7 = lVar7 + 4;
          } while (uVar9 != 0 || uVar8 != 0);
        }
        goto LAB_0010e8e0;
      }
      uVar8 = (uint)(char)*pbVar10;
    }
    uVar9 = **(uint **)(lVar6 + 0x10);
    if (uVar8 != 0 || uVar9 != 0) {
      lVar5 = 0;
      do {
        if (uVar9 == 0) {
LAB_0010e830:
          if (param_1 < param_2) {
            memmove(param_3 + param_1 + 1,__src,(param_2 - param_1) * 8);
          }
          *__src = pEVar3;
          return;
        }
        if (uVar8 == 0) break;
        if (uVar9 < uVar8) goto LAB_0010e830;
        if (uVar8 < uVar9) break;
        uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
        uVar8 = (uint)(char)pbVar10[lVar5 + 1];
        lVar5 = lVar5 + 1;
      } while (uVar9 != 0 || uVar8 != 0);
    }
  }
LAB_0010e8e0:
  unguarded_linear_insert(param_2,pEVar3,param_3);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */

Element **
SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
::median_of_3(Element **param_1,Element **param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)*param_1;
  lVar9 = *(long *)*param_3;
  lVar13 = *(long *)*param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC4;
    pbVar16 = &_LC4;
    if (lVar13 == 0) {
LAB_0010f2f0:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_0010ebbe:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_0010ebc4;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC4;
      if (*pbVar16 == 0) goto LAB_0010eeb9;
LAB_0010ed12:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC4;
LAB_0010eb42:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_0010ec30:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x0010ec78;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x0010ec78;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_0010eba8;
        }
        goto LAB_0010f2f0;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x0010ec78;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x0010ec78;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_0010eba8;
      }
      if (lVar9 == 0) goto LAB_0010ef11;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_0010ebc4:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_0010ed09;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_0010f1f6;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_0010eea0:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_0010f1ff:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_0010f086:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_0010f0e8:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC4;
        goto LAB_0010ec30;
      }
      uVar4 = 0;
      pbVar15 = &_LC4;
LAB_0010ea22:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x0010ec78;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x0010ec78;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_0010eba8:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_0010ebbe;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_0010efa8:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_0010f263;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_0010eea0;
        }
LAB_0010f1f6:
        if (pbVar15 != (byte *)0x0) goto LAB_0010f0e8;
        goto LAB_0010f1ff;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_0010f2c1;
      }
LAB_0010ef11:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC4;
LAB_0010ed09:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_0010ed12;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_0010eb42;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_0010ea22;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_0010ee18:
            pbVar16 = (byte *)0x0;
            goto joined_r0x0010ec78;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_0010ee18;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_0010eba8;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_0010efa8;
      }
LAB_0010f2c1:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC4;
      uVar6 = uVar4;
LAB_0010f263:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_0010eea0;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_0010f086;
  }
LAB_0010eeb9:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x0010ec78:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC4;
    if (pbVar15 != (byte *)0x0) goto LAB_0010ed67;
LAB_0010ec94:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_0010ee30;
    }
LAB_0010f2fe:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_0010f01e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_0010ec94;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_0010f199;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_0010ee30;
        }
LAB_0010f199:
        if (pbVar16 == (byte *)0x0) goto LAB_0010f19e;
        goto LAB_0010f146;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_0010ed67:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_0010f2fe;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_0010ee30:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_0010f19e:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_0010f01e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_0010f146:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */

long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partitioner(long param_1,long param_2,Element *param_3,Element **param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  Element **ppEVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  
  lVar14 = *(long *)param_3;
  lVar7 = *(long *)param_4[param_1];
  lVar11 = param_1;
  lVar10 = param_2;
joined_r0x0010f3a7:
  if (lVar7 == 0) {
    if (lVar14 == 0) goto LAB_0010f4d8;
    pbVar13 = *(byte **)(lVar14 + 8);
    uVar9 = 0;
    pbVar12 = &_LC4;
LAB_0010f45e:
    if (pbVar13 == (byte *)0x0) {
      uVar5 = **(uint **)(lVar14 + 0x10);
      if (uVar5 != 0 || uVar9 != 0) {
        lVar7 = 0;
        do {
          if (uVar9 == 0) goto LAB_0010f428;
          if (uVar5 == 0) break;
          if (uVar9 < uVar5) goto LAB_0010f428;
          if (uVar5 < uVar9) break;
          uVar9 = (uint)(char)pbVar12[lVar7 + 1];
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (uVar9 != 0 || uVar5 != 0);
      }
      goto LAB_0010f4d8;
    }
    uVar5 = (uint)(char)*pbVar13;
    bVar6 = (byte)uVar9 | *pbVar13;
LAB_0010f725:
    if (bVar6 != 0) {
      lVar7 = 1;
      do {
        if (uVar9 == 0) goto LAB_0010f428;
        if (uVar5 == 0) break;
        if (uVar9 < uVar5) goto LAB_0010f428;
        if (uVar5 < uVar9) break;
        pbVar1 = pbVar12 + lVar7;
        uVar9 = (uint)(char)*pbVar1;
        pbVar2 = pbVar13 + lVar7;
        uVar5 = (uint)(char)*pbVar2;
        lVar7 = lVar7 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar12 = *(byte **)(lVar7 + 8);
    if (lVar14 == 0) {
      if (pbVar12 != (byte *)0x0) {
        bVar6 = *pbVar12;
        uVar9 = (uint)(char)bVar6;
        uVar5 = 0;
        pbVar13 = &_LC4;
        goto LAB_0010f725;
      }
      uVar9 = 0;
      pbVar13 = &_LC4;
    }
    else {
      pbVar13 = *(byte **)(lVar14 + 8);
      if (pbVar12 != (byte *)0x0) {
        uVar9 = (uint)(char)*pbVar12;
        goto LAB_0010f45e;
      }
      if (pbVar13 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar14 + 0x10);
        uVar5 = **(uint **)(lVar7 + 0x10);
        if (uVar9 != 0 || uVar5 != 0) {
          lVar8 = 4;
          do {
            if (uVar5 == 0) goto LAB_0010f428;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_0010f428;
            if (uVar9 < uVar5) break;
            uVar5 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
            uVar9 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar5 != 0 || uVar9 != 0);
        }
        goto LAB_0010f4d8;
      }
      uVar9 = (uint)(char)*pbVar13;
    }
    uVar5 = **(uint **)(lVar7 + 0x10);
    if (uVar5 != 0 || uVar9 != 0) {
      lVar8 = 0;
      do {
        if (uVar5 == 0) goto LAB_0010f428;
        if (uVar9 == 0) break;
        if (uVar5 < uVar9) goto LAB_0010f428;
        if (uVar9 < uVar5) break;
        uVar5 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
        uVar9 = (uint)(char)pbVar13[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar9 != 0);
    }
  }
  goto LAB_0010f4d8;
LAB_0010f428:
  if (param_2 + -1 == lVar11) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar14 = *(long *)param_3;
LAB_0010f4d8:
    lVar10 = lVar10 + -1;
    lVar7 = *(long *)param_4[lVar10];
    ppEVar4 = param_4 + lVar10;
    do {
      if (lVar14 == 0) {
        if (lVar7 == 0) goto LAB_0010f6d8;
        pbVar13 = *(byte **)(lVar7 + 8);
        uVar5 = 0;
        pbVar12 = &_LC4;
        uVar9 = 0;
        if (pbVar13 == (byte *)0x0) {
LAB_0010f5ac:
          uVar9 = **(uint **)(lVar7 + 0x10);
          if (uVar9 == 0 && uVar5 == 0) goto LAB_0010f6d8;
          lVar8 = 0;
          while (uVar5 != 0) {
            if (uVar9 == 0) goto LAB_0010f6d8;
            if (uVar5 < uVar9) break;
            if (uVar9 < uVar5) goto LAB_0010f6d8;
            uVar5 = (uint)(char)pbVar12[lVar8 + 1];
            uVar9 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
            if (uVar5 == 0 && uVar9 == 0) goto LAB_0010f6d8;
          }
        }
        else {
LAB_0010f60b:
          uVar5 = (uint)(char)*pbVar13;
          bVar6 = (byte)uVar9 | *pbVar13;
LAB_0010f611:
          if (bVar6 == 0) goto LAB_0010f6d8;
          lVar7 = 1;
          while (uVar9 != 0) {
            if (uVar5 == 0) goto LAB_0010f6d8;
            if (uVar9 < uVar5) break;
            if (uVar5 < uVar9) goto LAB_0010f6d8;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010f6d8;
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar14 + 8);
        if (lVar7 == 0) {
          uVar9 = 0;
          pbVar13 = &_LC4;
          if (pbVar12 != (byte *)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC4;
            goto LAB_0010f611;
          }
        }
        else {
          pbVar13 = *(byte **)(lVar7 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar5 = (uint)(char)*pbVar12;
            uVar9 = uVar5;
            if (pbVar13 == (byte *)0x0) goto LAB_0010f5ac;
            goto LAB_0010f60b;
          }
          if (pbVar13 == (byte *)0x0) {
            uVar9 = **(uint **)(lVar7 + 0x10);
            uVar5 = **(uint **)(lVar14 + 0x10);
            if (uVar9 != 0 || uVar5 != 0) {
              lVar8 = 4;
              while (uVar5 != 0) {
                if (uVar9 == 0) goto LAB_0010f6d8;
                if (uVar5 < uVar9) break;
                if (uVar9 < uVar5) goto LAB_0010f6d8;
                uVar5 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
                uVar9 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
                lVar8 = lVar8 + 4;
                if (uVar5 == 0 && uVar9 == 0) goto LAB_0010f6d8;
              }
              goto LAB_0010f570;
            }
            goto LAB_0010f6d8;
          }
          uVar9 = (uint)(char)*pbVar13;
        }
        uVar5 = **(uint **)(lVar14 + 0x10);
        if (uVar5 == 0 && uVar9 == 0) goto LAB_0010f6d8;
        lVar7 = 0;
        while (uVar5 != 0) {
          if (uVar9 == 0) goto LAB_0010f6d8;
          if (uVar5 < uVar9) break;
          if (uVar9 < uVar5) goto LAB_0010f6d8;
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          uVar9 = (uint)(char)pbVar13[lVar7 + 1];
          lVar7 = lVar7 + 1;
          if (uVar5 == 0 && uVar9 == 0) goto LAB_0010f6d8;
        }
      }
LAB_0010f570:
      if (lVar10 == param_1) goto LAB_0010f6b0;
      lVar10 = lVar10 + -1;
      lVar7 = *(long *)ppEVar4[-1];
      ppEVar4 = ppEVar4 + -1;
    } while( true );
  }
LAB_0010f436:
  lVar11 = lVar11 + 1;
  lVar7 = *(long *)param_4[lVar11];
  goto joined_r0x0010f3a7;
LAB_0010f6b0:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0010f6d8:
  if (lVar10 <= lVar11) {
    return lVar11;
  }
  pEVar3 = param_4[lVar11];
  param_4[lVar11] = *ppEVar4;
  *ppEVar4 = pEVar3;
  lVar14 = *(long *)param_3;
  goto LAB_0010f436;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,int>::get_object
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,int> *this)

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
      goto LAB_0010f90d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010f90d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010f90d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, String const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&> *this)

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
      goto LAB_0010fa0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010fa0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010fa0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void>::get_object
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void> *this)

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
      goto LAB_0010fb0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010fb0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010fb0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, Vector<String>
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&>::get_object
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&> *this)

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
      goto LAB_0010fc0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010fc0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010fc0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*>::get_object
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*> *this)

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
      goto LAB_0010fd0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010fd0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010fd0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partial_sort(long param_1,long param_2,long param_3,Element **param_4)

{
  Element **ppEVar1;
  byte *pbVar2;
  byte *pbVar3;
  Element *pEVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  Element **ppEVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar16 = param_3 - param_1;
  ppEVar13 = param_4;
  if (lVar16 < 2) {
    if (param_2 <= param_3) {
      return;
    }
  }
  else {
    for (lVar12 = lVar16 + -2 >> 1;
        adjust_heap(param_1,lVar12,lVar16,param_4[param_1 + lVar12],ppEVar13), lVar12 != 0;
        lVar12 = lVar12 + -1) {
    }
    if (param_2 <= param_3) goto LAB_0010febc;
  }
  ppEVar1 = ppEVar13 + param_1;
  lVar12 = param_3;
LAB_0010fe10:
  pEVar4 = ppEVar13[lVar12];
  lVar8 = *(long *)pEVar4;
  lVar7 = *(long *)*ppEVar1;
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      pbVar14 = *(byte **)(lVar7 + 8);
      uVar10 = 0;
      pbVar15 = &_LC4;
LAB_0010ff24:
      if (pbVar14 == (byte *)0x0) {
        uVar11 = **(uint **)(lVar7 + 0x10);
        if (uVar11 != 0 || uVar10 != 0) {
          lVar8 = 0;
          do {
            if (uVar10 == 0) goto LAB_0010fe90;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_0010fe90;
            if (uVar11 < uVar10) break;
            uVar10 = (uint)(char)pbVar15[lVar8 + 1];
            uVar11 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
          } while (uVar10 != 0 || uVar11 != 0);
        }
      }
      else {
        uVar11 = (uint)(char)*pbVar14;
        bVar6 = (byte)uVar10 | *pbVar14;
LAB_0010ff86:
        if (bVar6 != 0) {
          lVar8 = 1;
          do {
            if (uVar10 == 0) goto LAB_0010fe90;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_0010fe90;
            if (uVar11 < uVar10) break;
            pbVar2 = pbVar14 + lVar8;
            uVar11 = (uint)(char)*pbVar2;
            pbVar3 = pbVar15 + lVar8;
            uVar10 = (uint)(char)*pbVar3;
            lVar8 = lVar8 + 1;
          } while (*pbVar2 != 0 || *pbVar3 != 0);
        }
      }
    }
  }
  else {
    pbVar15 = *(byte **)(lVar8 + 8);
    if (lVar7 == 0) {
      if (pbVar15 != (byte *)0x0) {
        bVar6 = *pbVar15;
        uVar10 = (uint)(char)bVar6;
        pbVar14 = &_LC4;
        uVar11 = 0;
        goto LAB_0010ff86;
      }
      uVar10 = 0;
      pbVar14 = &_LC4;
    }
    else {
      pbVar14 = *(byte **)(lVar7 + 8);
      if (pbVar15 != (byte *)0x0) {
        uVar10 = (uint)(char)*pbVar15;
        goto LAB_0010ff24;
      }
      if (pbVar14 == (byte *)0x0) {
        uVar10 = **(uint **)(lVar7 + 0x10);
        uVar11 = **(uint **)(lVar8 + 0x10);
        if (uVar10 != 0 || uVar11 != 0) {
          lVar9 = 4;
          do {
            if (uVar11 == 0) goto LAB_0010fe90;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_0010fe90;
            if (uVar10 < uVar11) break;
            uVar11 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
            uVar10 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar9);
            lVar9 = lVar9 + 4;
          } while (uVar11 != 0 || uVar10 != 0);
        }
        goto LAB_0010fea4;
      }
      uVar10 = (uint)(char)*pbVar14;
    }
    uVar11 = **(uint **)(lVar8 + 0x10);
    if (uVar11 != 0 || uVar10 != 0) {
      lVar7 = 0;
      do {
        if (uVar11 == 0) goto LAB_0010fe90;
        if (uVar10 == 0) break;
        if (uVar11 < uVar10) goto LAB_0010fe90;
        if (uVar10 < uVar11) break;
        uVar11 = (*(uint **)(lVar8 + 0x10))[lVar7 + 1];
        uVar10 = (uint)(char)pbVar14[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (uVar11 != 0 || uVar10 != 0);
    }
  }
  goto LAB_0010fea4;
LAB_0010fe90:
  ppEVar13[lVar12] = *ppEVar1;
  adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
LAB_0010fea4:
  lVar12 = lVar12 + 1;
  if (param_2 <= lVar12) goto code_r0x0010feb1;
  goto LAB_0010fe10;
code_r0x0010feb1:
  if (lVar16 < 2) {
    return;
  }
LAB_0010febc:
  ppEVar1 = ppEVar13 + param_1;
  lVar16 = (param_3 + -1) - param_1;
  do {
    pEVar4 = ppEVar1[lVar16];
    ppEVar1[lVar16] = *ppEVar1;
    adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
    bVar5 = 1 < lVar16;
    lVar16 = lVar16 + -1;
  } while (bVar5);
  return;
}



/* EditorFeatureProfileManager::_validate_propertyv(PropertyInfo&) const */

void EditorFeatureProfileManager::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_0012d028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0012d028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d030 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x126b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126a,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x126b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x126b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x126b,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    if ((code *)PTR__set_0012d038 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0012d038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012d038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001105c8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012d040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00110638) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012d040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001106a8) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012d040 != CanvasItem::_get) &&
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
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110710;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110710:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110770;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110770:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001107d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001107d0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110840;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110840:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* StyleBox::get_save_class() const */

StyleBox * __thiscall StyleBox::get_save_class(StyleBox *this)

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



/* StyleBox::get_base_extension() const */

StyleBox * __thiscall StyleBox::get_base_extension(StyleBox *this)

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



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110a2e;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110a2e;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110a2e;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_00110a2e:
  Resource::~Resource((Resource *)this);
  return;
}



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110ace;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110ace;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110ace;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_00110ace:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2b0);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d048 != Container::_notification) {
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
  if ((code *)PTR__notification_0012d048 == Container::_notification) {
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
    if ((code *)PTR__notification_0012d048 != Container::_notification) {
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
  if ((code *)PTR__notification_0012d048 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d050 != Container::_notification) {
      SplitContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0012d050 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
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



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = predelete_handler;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110f7f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110f7f:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = predelete_handler;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011112f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011112f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
  return;
}



/* EditorFeatureProfile::_get_feature_name(EditorFeatureProfile::Feature) */

StrRange *
EditorFeatureProfile::_get_feature_name(StrRange *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  char *__s;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 9) {
    __s = *(char **)(feature_names + (long)(int)param_3 * 8);
    *(undefined8 *)param_1 = 0;
    if (__s != (char *)0x0) {
      strlen(__s);
    }
    String::parse_latin1(param_1);
  }
  else {
    _err_print_index_error
              ("get_feature_name","editor/editor_feature_profile.cpp",0xa5,(ulong)param_3,9,
               "p_feature","FEATURE_MAX","",false,false);
    *(undefined8 *)param_1 = 0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00111353:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111353;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001113be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001113be:
  return &_get_class_namev()::_class_name_static;
}



/* StyleBoxEmpty::_get_class_namev() const */

undefined8 * StyleBoxEmpty::_get_class_namev(void)

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
LAB_00111443:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111443;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
      goto LAB_001114ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
LAB_001114ae:
  return &_get_class_namev()::_class_name_static;
}



/* EditorFeatureProfileManager::_get_class_namev() const */

undefined8 * EditorFeatureProfileManager::_get_class_namev(void)

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
LAB_00111533:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111533;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorFeatureProfileManager"
                );
      goto LAB_0011159e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorFeatureProfileManager");
LAB_0011159e:
  return &_get_class_namev()::_class_name_static;
}



/* JSON::_get_class_namev() const */

undefined8 * JSON::_get_class_namev(void)

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
LAB_00111613:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111613;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
      goto LAB_0011167e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
LAB_0011167e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorFeatureProfile::_get_class_namev() const */

undefined8 * EditorFeatureProfile::_get_class_namev(void)

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
LAB_00111703:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111703;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorFeatureProfile");
      goto LAB_0011176e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorFeatureProfile");
LAB_0011176e:
  return &_get_class_namev()::_class_name_static;
}



/* HSplitContainer::_get_class_namev() const */

undefined8 * HSplitContainer::_get_class_namev(void)

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
LAB_001117f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001117f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0011185e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0011185e:
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
LAB_001118d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001118d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0011193e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0011193e:
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
LAB_001119c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001119c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00111a2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00111a2e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorFeatureProfile::~EditorFeatureProfile() */

void __thiscall EditorFeatureProfile::~EditorFeatureProfile(EditorFeatureProfile *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(this + 0x200);
  *(undefined ***)this = &PTR__initialize_classv_00125ab8;
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x224) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x220) * 4) != 0) {
        memset(*(void **)(this + 0x218),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x220) * 4) * 4);
        if (*(int *)(this + 0x224) == 0) goto LAB_00111de0;
      }
      lVar2 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar2 * 8) != 0)) {
          StringName::unref();
          pvVar4 = *(void **)(this + 0x200);
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x224));
      *(undefined4 *)(this + 0x224) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_00111b2e;
    }
LAB_00111de0:
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x210),false);
    Memory::free_static(*(void **)(this + 0x208),false);
    Memory::free_static(*(void **)(this + 0x218),false);
  }
LAB_00111b2e:
  pvVar4 = *(void **)(this + 0x1d8);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x1fc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1fc) = 0;
        *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1e0) + lVar2) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x1e0) + lVar2) = 0;
            pvVar5 = *(void **)((long)pvVar4 + 0x18);
            if (pvVar5 != (void *)0x0) {
              if (*(int *)((long)pvVar4 + 0x3c) != 0) {
                if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar4 + 0x38) * 4) !=
                    0) {
                  memset(*(void **)((long)pvVar4 + 0x30),0,
                         (ulong)*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)((long)pvVar4 + 0x38) * 4) << 2);
                  if (*(int *)((long)pvVar4 + 0x3c) == 0) goto LAB_00111ed0;
                }
                lVar3 = 0;
                do {
                  if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + lVar3 * 8) != 0)
                     ) {
                    StringName::unref();
                    pvVar5 = *(void **)((long)pvVar4 + 0x18);
                  }
                  lVar3 = lVar3 + 1;
                } while ((uint)lVar3 < *(uint *)((long)pvVar4 + 0x3c));
                *(undefined4 *)((long)pvVar4 + 0x3c) = 0;
                if (pvVar5 == (void *)0x0) goto LAB_00111c2a;
              }
LAB_00111ed0:
              Memory::free_static(pvVar5,false);
              Memory::free_static(*(void **)((long)pvVar4 + 0x28),false);
              Memory::free_static(*(void **)((long)pvVar4 + 0x20),false);
              Memory::free_static(*(void **)((long)pvVar4 + 0x30),false);
            }
LAB_00111c2a:
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x1d8);
            *(undefined8 *)((long)pvVar4 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1fc) = 0;
        *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00111c89;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
LAB_00111c89:
  pvVar4 = *(void **)(this + 0x1a8);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x1cc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c8) * 4) != 0) {
        memset(*(void **)(this + 0x1c0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c8) * 4) * 4);
        if (*(int *)(this + 0x1cc) == 0) goto LAB_00111e50;
      }
      lVar2 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar2 * 8) != 0)) {
          StringName::unref();
          pvVar4 = *(void **)(this + 0x1a8);
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x1cc));
      *(undefined4 *)(this + 0x1cc) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_00111d26;
    }
LAB_00111e50:
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x1b8),false);
    Memory::free_static(*(void **)(this + 0x1b0),false);
    Memory::free_static(*(void **)(this + 0x1c0),false);
  }
LAB_00111d26:
  pvVar4 = *(void **)(this + 0x180);
  if (pvVar4 == (void *)0x0) goto LAB_00111dbe;
  if (*(int *)(this + 0x1a4) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) != 0) {
      memset(*(void **)(this + 0x198),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) * 4);
      if (*(int *)(this + 0x1a4) == 0) goto LAB_00111e90;
    }
    lVar2 = 0;
    do {
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar2 * 8) != 0)) {
        StringName::unref();
        pvVar4 = *(void **)(this + 0x180);
      }
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
    if (pvVar4 == (void *)0x0) goto LAB_00111dbe;
  }
LAB_00111e90:
  Memory::free_static(pvVar4,false);
  Memory::free_static(*(void **)(this + 400),false);
  Memory::free_static(*(void **)(this + 0x188),false);
  Memory::free_static(*(void **)(this + 0x198),false);
LAB_00111dbe:
  *(undefined ***)this = &PTR__initialize_classv_00124cf0;
  Object::~Object((Object *)this);
  return;
}



/* EditorFeatureProfile::~EditorFeatureProfile() */

void __thiscall EditorFeatureProfile::~EditorFeatureProfile(EditorFeatureProfile *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(this + 0x200);
  *(undefined ***)this = &PTR__initialize_classv_00125ab8;
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x224) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x220) * 4) != 0) {
        memset(*(void **)(this + 0x218),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x220) * 4) * 4);
        if (*(int *)(this + 0x224) == 0) goto LAB_00112290;
      }
      lVar2 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar2 * 8) != 0)) {
          StringName::unref();
          pvVar4 = *(void **)(this + 0x200);
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x224));
      *(undefined4 *)(this + 0x224) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_00111fce;
    }
LAB_00112290:
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x210),false);
    Memory::free_static(*(void **)(this + 0x208),false);
    Memory::free_static(*(void **)(this + 0x218),false);
  }
LAB_00111fce:
  pvVar4 = *(void **)(this + 0x1d8);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x1fc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1fc) = 0;
        *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1e0) + lVar2) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x1e0) + lVar2) = 0;
            pvVar5 = *(void **)((long)pvVar4 + 0x18);
            if (pvVar5 != (void *)0x0) {
              if (*(int *)((long)pvVar4 + 0x3c) != 0) {
                if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar4 + 0x38) * 4) !=
                    0) {
                  memset(*(void **)((long)pvVar4 + 0x30),0,
                         (ulong)*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)((long)pvVar4 + 0x38) * 4) << 2);
                  if (*(int *)((long)pvVar4 + 0x3c) == 0) goto LAB_00112380;
                }
                lVar3 = 0;
                do {
                  if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + lVar3 * 8) != 0)
                     ) {
                    StringName::unref();
                    pvVar5 = *(void **)((long)pvVar4 + 0x18);
                  }
                  lVar3 = lVar3 + 1;
                } while ((uint)lVar3 < *(uint *)((long)pvVar4 + 0x3c));
                *(undefined4 *)((long)pvVar4 + 0x3c) = 0;
                if (pvVar5 == (void *)0x0) goto LAB_001120ca;
              }
LAB_00112380:
              Memory::free_static(pvVar5,false);
              Memory::free_static(*(void **)((long)pvVar4 + 0x28),false);
              Memory::free_static(*(void **)((long)pvVar4 + 0x20),false);
              Memory::free_static(*(void **)((long)pvVar4 + 0x30),false);
            }
LAB_001120ca:
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x1d8);
            *(undefined8 *)((long)pvVar4 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1fc) = 0;
        *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00112129;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
LAB_00112129:
  pvVar4 = *(void **)(this + 0x1a8);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x1cc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c8) * 4) != 0) {
        memset(*(void **)(this + 0x1c0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c8) * 4) * 4);
        if (*(int *)(this + 0x1cc) == 0) goto LAB_00112300;
      }
      lVar2 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar2 * 8) != 0)) {
          StringName::unref();
          pvVar4 = *(void **)(this + 0x1a8);
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x1cc));
      *(undefined4 *)(this + 0x1cc) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_001121c6;
    }
LAB_00112300:
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x1b8),false);
    Memory::free_static(*(void **)(this + 0x1b0),false);
    Memory::free_static(*(void **)(this + 0x1c0),false);
  }
LAB_001121c6:
  pvVar4 = *(void **)(this + 0x180);
  if (pvVar4 == (void *)0x0) goto LAB_0011225e;
  if (*(int *)(this + 0x1a4) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) != 0) {
      memset(*(void **)(this + 0x198),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) * 4);
      if (*(int *)(this + 0x1a4) == 0) goto LAB_00112340;
    }
    lVar2 = 0;
    do {
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar2 * 8) != 0)) {
        StringName::unref();
        pvVar4 = *(void **)(this + 0x180);
      }
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
    if (pvVar4 == (void *)0x0) goto LAB_0011225e;
  }
LAB_00112340:
  Memory::free_static(pvVar4,false);
  Memory::free_static(*(void **)(this + 400),false);
  Memory::free_static(*(void **)(this + 0x188),false);
  Memory::free_static(*(void **)(this + 0x198),false);
LAB_0011225e:
  *(undefined ***)this = &PTR__initialize_classv_00124cf0;
  Object::~Object((Object *)this);
  operator_delete(this,0x238);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_118;
  long local_110;
  long local_108;
  long local_f8;
  
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_00112cc3:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_00112413:
  param_4 = param_4 + -1;
  puVar2 = (undefined8 *)
           median_of_3(param_3 + param_1,param_3 + (lVar1 >> 1) + param_1,
                       (Element **)((long)param_3 + lVar11 + -8));
  param_2 = partitioner(param_1,lVar3,(Element *)*puVar2,param_3);
  lVar1 = lVar3 - param_2;
  if (0x10 < lVar1) {
    if (param_4 != 0) {
      lVar11 = param_4;
      lVar4 = lVar3;
LAB_0011249c:
      do {
        lVar11 = lVar11 + -1;
        puVar2 = (undefined8 *)
                 median_of_3(param_3 + param_2,param_3 + (lVar1 >> 1) + param_2,param_3 + lVar4 + -1
                            );
        lVar3 = partitioner(param_2,lVar4,(Element *)*puVar2,param_3);
        lVar1 = lVar4 - lVar3;
        if (0x10 < lVar1) {
          if (lVar11 != 0) {
            local_118 = lVar4;
            lVar15 = lVar11;
LAB_00112534:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x00112580;
LAB_00112a16:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_00112a26;
            goto LAB_00112bc3;
          }
LAB_00112c38:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_00112b4f:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x00112c01;
        lVar4 = lVar3;
        if (lVar11 == 0) break;
      } while( true );
    }
    partial_sort(param_2,lVar3,lVar3,param_3);
  }
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 != 0) goto LAB_00112c9c;
  goto LAB_00112cc3;
code_r0x00112580:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_001125bc:
    do {
      lVar13 = lVar13 + -1;
      puVar2 = (undefined8 *)
               median_of_3(param_3 + lVar4,param_3 + (lVar1 >> 1) + lVar4,param_3 + lVar6 + -1);
      lVar5 = partitioner(lVar4,lVar6,(Element *)*puVar2,param_3);
      lVar1 = lVar6 - lVar5;
      if (0x10 < lVar1) {
        if (lVar13 != 0) {
          lVar7 = lVar6;
          local_f8 = lVar13;
LAB_00112642:
          do {
            local_f8 = local_f8 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar5,param_3 + (lVar1 >> 1) + lVar5,param_3 + lVar7 + -1
                                );
            lVar6 = partitioner(lVar5,lVar7,(Element *)*puVar2,param_3);
            lVar1 = lVar7 - lVar6;
            if (0x10 < lVar1) {
              if (local_f8 != 0) {
                lVar8 = lVar7;
                local_110 = local_f8;
LAB_001126c3:
                do {
                  local_110 = local_110 + -1;
                  puVar2 = (undefined8 *)
                           median_of_3(param_3 + lVar6,param_3 + (lVar1 >> 1) + lVar6,
                                       param_3 + lVar8 + -1);
                  lVar7 = partitioner(lVar6,lVar8,(Element *)*puVar2,param_3);
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                    if (local_110 != 0) {
                      lVar9 = lVar8;
                      local_118 = local_110;
LAB_00112741:
                      do {
                        local_118 = local_118 + -1;
                        puVar2 = (undefined8 *)
                                 median_of_3(param_3 + lVar7,param_3 + (lVar1 >> 1) + lVar7,
                                             param_3 + lVar9 + -1);
                        lVar8 = partitioner(lVar7,lVar9,(Element *)*puVar2,param_3);
                        lVar1 = lVar9 - lVar8;
                        if (0x10 < lVar1) {
                          if (local_118 != 0) {
                            lVar10 = lVar9;
                            local_108 = local_118;
LAB_001127b7:
                            do {
                              local_108 = local_108 + -1;
                              puVar2 = (undefined8 *)
                                       median_of_3(param_3 + lVar8,param_3 + (lVar1 >> 1) + lVar8,
                                                   param_3 + lVar10 + -1);
                              lVar9 = partitioner(lVar8,lVar10,(Element *)*puVar2,param_3);
                              lVar1 = lVar10 - lVar9;
                              if (0x10 < lVar1) {
                                if (local_108 != 0) {
                                  lVar12 = local_108;
                                  lVar14 = lVar10;
                                  do {
                                    lVar12 = lVar12 + -1;
                                    puVar2 = (undefined8 *)
                                             median_of_3(param_3 + lVar9,
                                                         param_3 + (lVar1 >> 1) + lVar9,
                                                         param_3 + lVar14 + -1);
                                    lVar10 = partitioner(lVar9,lVar14,(Element *)*puVar2,param_3);
                                    introsort(lVar10,lVar14,param_3,lVar12);
                                    lVar1 = lVar10 - lVar9;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar9 - lVar8;
                                      lVar10 = lVar9;
                                      if (lVar1 < 0x11) goto LAB_0011294c;
                                      goto LAB_001127b7;
                                    }
                                    lVar14 = lVar10;
                                  } while (lVar12 != 0);
                                }
                                partial_sort(lVar9,lVar10,lVar10,param_3);
                              }
                              lVar1 = lVar9 - lVar8;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar8 - lVar7;
                                lVar9 = lVar8;
                                if (lVar1 < 0x11) goto joined_r0x00112a60;
                                goto LAB_00112741;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_0011294c:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x001129db;
                          goto LAB_001126c3;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x00112a60:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x00112aa0;
                    goto LAB_00112642;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x001129db:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_00112a16;
              goto LAB_001125bc;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x00112aa0:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_00112b4f;
        goto LAB_00112534;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_00112bc3:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_0011249c;
    goto joined_r0x00112c01;
  }
LAB_00112a26:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_00112c38;
  goto LAB_00112534;
joined_r0x00112c01:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_00112c9c:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_00112413;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String_conflict *this,char *param_1)

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



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
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



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if ((*(int *)(this + 0x24) != 0) &&
     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) == 0 ||
      (memset(*(void **)(this + 0x18),0,
              (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2),
      *(int *)(this + 0x24) != 0)))) {
    lVar1 = 0;
    do {
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + lVar1 * 8) != 0)) {
        StringName::unref();
        pvVar2 = *(void **)this;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
    if (pvVar2 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar2,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  Memory::free_static(*(void **)(this + 8),false);
  Memory::free_static(*(void **)(this + 0x18),false);
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
      if (pvVar9 == (void *)0x0) goto LAB_001130d4;
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x10),false);
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x18),false);
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  }
LAB_001130d4:
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



/* void Ref<EditorFeatureProfile>::instantiate<>() */

void __thiscall Ref<EditorFeatureProfile>::instantiate<>(Ref<EditorFeatureProfile> *this)

{
  char cVar1;
  EditorFeatureProfile *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (EditorFeatureProfile *)operator_new(0x238,"");
  EditorFeatureProfile::EditorFeatureProfile(this_00);
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
    this_00 = (EditorFeatureProfile *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (EditorFeatureProfile *)pOVar3) goto LAB_001132c5;
    *(EditorFeatureProfile **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001132c5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (EditorFeatureProfile *)0x0) {
    return;
  }
LAB_001132c5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Ref<EditorFeatureProfile>::unref() */

void __thiscall Ref<EditorFeatureProfile>::unref(Ref<EditorFeatureProfile> *this)

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



/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */

void __thiscall
List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
          (List<StringName,DefaultAllocator> *this)

{
  int iVar1;
  long *plVar2;
  Element **ppEVar3;
  undefined8 *puVar4;
  Element **ppEVar5;
  Element **ppEVar6;
  Element *pEVar7;
  long lVar8;
  Element *pEVar9;
  long lVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar11 = (Element *)(long)iVar1;
  ppEVar3 = (Element **)Memory::alloc_static((long)pEVar11 * 8,true);
  if (ppEVar3 == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    ppEVar3[-1] = pEVar11;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = ppEVar3;
    for (pEVar7 = (Element *)**(long **)this; pEVar7 != (Element *)0x0;
        pEVar7 = *(Element **)(pEVar7 + 8)) {
      *ppEVar5 = pEVar7;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar10 = 0;
  pEVar7 = pEVar11;
  do {
    pEVar7 = (Element *)((long)pEVar7 >> 1);
    lVar10 = lVar10 + 1;
  } while (pEVar7 != (Element *)0x1);
  lVar10 = lVar10 * 2;
  pEVar7 = (Element *)0x1;
  pEVar9 = pEVar11;
  if ((long)pEVar11 < 0x11) {
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,(long)pEVar7,ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  else {
    do {
      lVar10 = lVar10 + -1;
      puVar4 = (undefined8 *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::median_of_3(ppEVar3,ppEVar3 + ((long)pEVar9 >> 1),ppEVar3 + (long)(pEVar9 + -1));
      pEVar7 = (Element *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::partitioner(0,(long)pEVar9,(Element *)*puVar4,ppEVar3);
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::introsort((long)pEVar7,(long)pEVar9,ppEVar3,lVar10);
      lVar8 = 1;
      if ((long)pEVar7 < 0x11) goto LAB_00113510;
      pEVar9 = pEVar7;
    } while (lVar10 != 0);
    SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
    ::partial_sort(0,(long)pEVar7,(long)pEVar7,ppEVar3);
LAB_00113510:
    do {
      lVar10 = lVar8 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,lVar8,ppEVar3);
      lVar8 = lVar10;
    } while (lVar10 != 0x10);
    pEVar7 = (Element *)0x10;
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::unguarded_linear_insert((long)pEVar7,ppEVar3[(long)pEVar7],ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  plVar2 = *(long **)this;
  pEVar7 = *ppEVar3;
  *plVar2 = (long)pEVar7;
  *(undefined8 *)(pEVar7 + 0x10) = 0;
  *(Element **)(*ppEVar3 + 8) = ppEVar3[1];
  pEVar7 = ppEVar3[(long)(pEVar11 + -1)];
  plVar2[1] = (long)pEVar7;
  *(Element **)(pEVar7 + 0x10) = ppEVar3[(long)(pEVar11 + -2)];
  *(undefined8 *)(ppEVar3[(long)(pEVar11 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar5 = ppEVar3;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x10) = *ppEVar5;
      *(Element **)(*ppEVar6 + 8) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (ppEVar3 + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(ppEVar3,true);
  return;
}



/* Callable create_custom_callable_function_pointer<EditorFeatureProfileManager,
   int>(EditorFeatureProfileManager*, char const*, void (EditorFeatureProfileManager::*)(int)) */

EditorFeatureProfileManager *
create_custom_callable_function_pointer<EditorFeatureProfileManager,int>
          (EditorFeatureProfileManager *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00126068;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<EditorFeatureProfileManager::Action>(EditorFeatureProfileManager::Action)
   const */

Variant **
Callable::bind<EditorFeatureProfileManager::Action>(Variant **param_1,int param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp(param_1,param_2);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Callable
   create_custom_callable_function_pointer<EditorFeatureProfileManager>(EditorFeatureProfileManager*,
   char const*, void (EditorFeatureProfileManager::*)()) */

EditorFeatureProfileManager *
create_custom_callable_function_pointer<EditorFeatureProfileManager>
          (EditorFeatureProfileManager *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001260f8;
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



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00125e90;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x260));
  if (Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* WARNING: Removing unreachable block (ram,0x00113b58) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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



/* JSON::_initialize_classv() */

void JSON::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0012d060 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "JSON";
    local_70 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_0012d058 != Resource::_bind_methods) {
      JSON::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::~EditorFeatureProfileManager() */

void __thiscall
EditorFeatureProfileManager::~EditorFeatureProfileManager(EditorFeatureProfileManager *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00125c18;
  if (*(long *)(this + 0xe60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xe60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xe58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xe58);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe50));
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
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



/* EditorFeatureProfileManager::get_class() const */

void EditorFeatureProfileManager::get_class(void)

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



/* HSplitContainer::get_class() const */

void HSplitContainer::get_class(void)

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



/* EditorFeatureProfile::get_class() const */

void EditorFeatureProfile::get_class(void)

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



/* StyleBoxEmpty::get_class() const */

void StyleBoxEmpty::get_class(void)

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



/* JSON::get_class() const */

void JSON::get_class(void)

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
    StringName::StringName((StringName *)&local_48,(String_conflict *)(this + 0x20),false);
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



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void>::call
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String_conflict local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String_conflict)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00114acf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00114acf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00114b80;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00114acf:
    local_40 = 0;
    String::parse_latin1((String_conflict *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String_conflict *)"Invalid Object id \'");
    String::operator+(local_38,(String_conflict *)local_48);
    _err_print_error(&_LC97,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114b80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, Object*>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*>::call
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String_conflict local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String_conflict)0x0;
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00114d79;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00114d79;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00114cd0:
          uVar3 = _LC98;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_00114cd0;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114d17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_00114e2a;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00114d79:
    local_50 = 0;
    String::parse_latin1((String_conflict *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String_conflict *)"Invalid Object id \'");
    String::operator+(local_48,(String_conflict *)local_58);
    _err_print_error(&_LC97,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114e2a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,int>::call
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,int> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String_conflict local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String_conflict)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00114fe8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00114fe8;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC99;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00115099;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00114fe8:
    local_40 = 0;
    String::parse_latin1((String_conflict *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String_conflict *)"Invalid Object id \'");
    String::operator+(local_38,(String_conflict *)local_48);
    _err_print_error(&_LC97,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00115099:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&>::call
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC100;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011516e;
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
  local_40 = 0;
  String::parse_latin1((String_conflict *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String_conflict *)"Invalid Object id \'");
  String::operator+((String_conflict *)local_38,(String_conflict *)local_48);
  _err_print_error(&_LC97,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011516e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorFeatureProfileManager::~EditorFeatureProfileManager() */

void __thiscall
EditorFeatureProfileManager::~EditorFeatureProfileManager(EditorFeatureProfileManager *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00125c18;
  if (*(long *)(this + 0xe60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xe60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xe58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xe58);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe50));
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe78);
  return;
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
    StringName::StringName((StringName *)&local_50,(String_conflict *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String_conflict *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_0012d068 != Object::_bind_methods) {
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



/* StyleBoxEmpty::_initialize_classv() */

void StyleBoxEmpty::_initialize_classv(void)

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
    if (StyleBox::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0012d060 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "StyleBox";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0012d070 != Resource::_bind_methods) {
        StyleBox::_bind_methods();
      }
      StyleBox::initialize_class()::initialized = '\x01';
    }
    local_58 = "StyleBox";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "StyleBoxEmpty";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00125e90;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x260));
  if (Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x270);
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
              String::parse_latin1((String_conflict *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String_conflict *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_0012d060 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String_conflict *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String_conflict *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
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
            if ((code *)PTR__bind_compatibility_methods_0012d078 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String_conflict *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String_conflict *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String_conflict *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String_conflict *)&local_70,"Container");
        StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0012d080 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

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
    if (SplitContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String_conflict *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String_conflict *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_0012d060 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String_conflict *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String_conflict *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
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
            if ((code *)PTR__bind_compatibility_methods_0012d078 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String_conflict *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String_conflict *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        String::parse_latin1((String_conflict *)&local_68,"Control");
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "SplitContainer";
      local_70 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0012d088 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "SplitContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "HSplitContainer";
    local_70 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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
              String::parse_latin1((String_conflict *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String_conflict *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_0012d060 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String_conflict *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String_conflict *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
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
            if ((code *)PTR__bind_compatibility_methods_0012d078 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String_conflict *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String_conflict *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_60);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String_conflict *)&local_70,"Container");
        StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0012d080 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00116d3b;
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00116d3b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00116d3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::is_class(String const&) const */

undefined8 __thiscall Window::is_class(Window *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00116f4b;
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00116f4b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011704e;
    }
  }
LAB_00116f4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011704e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfileManager::is_class(String const&) const */

undefined8 __thiscall
EditorFeatureProfileManager::is_class(EditorFeatureProfileManager *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011715b;
  }
  cVar5 = String::operator==(param_1,"EditorFeatureProfileManager");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011715b;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0011725e;
    }
  }
LAB_0011715b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011725e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011736b;
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011736b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011746e;
    }
  }
LAB_0011736b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011746e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011757b;
  }
  cVar5 = String::operator==(param_1,"HSplitContainer");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011757b;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
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
        cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
        if (cVar5 != '\0') goto LAB_0011757b;
      }
      cVar5 = String::operator==(param_1,"Container");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Control::is_class((Control *)this,param_1);
          return uVar6;
        }
        goto LAB_00117768;
      }
    }
  }
LAB_0011757b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00117768:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011786b;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011786b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011786b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00117a6b;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00117a6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::is_class(String const&) const */

undefined8 __thiscall StyleBoxEmpty::is_class(StyleBoxEmpty *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00117bbb;
  }
  cVar5 = String::operator==(param_1,"StyleBoxEmpty");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00117bbb;
    }
    cVar5 = String::operator==(param_1,"StyleBox");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Resource::is_class((Resource *)this,param_1);
        return uVar6;
      }
      goto LAB_00117cbe;
    }
  }
LAB_00117bbb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00117cbe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::is_class(String const&) const */

undefined8 __thiscall
EditorFeatureProfile::is_class(EditorFeatureProfile *this,String_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00117dcb;
  }
  cVar4 = String::operator==(param_1,"EditorFeatureProfile");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00117dcb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::is_class(String const&) const */

undefined8 __thiscall JSON::is_class(JSON *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00117f1b;
  }
  cVar5 = String::operator==(param_1,"JSON");
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
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
      if (cVar5 != '\0') goto LAB_00117f1b;
    }
    cVar5 = String::operator==(param_1,"Resource");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_00118058;
    }
  }
LAB_00117f1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00118058:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011814f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011814f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001182ab;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001182ab;
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
        cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
        if (cVar5 != '\0') goto LAB_001182ab;
      }
      cVar5 = String::operator==(param_1,"Container");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Control::is_class((Control *)this,param_1);
          return uVar6;
        }
        goto LAB_00118498;
      }
    }
  }
LAB_001182ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00118498:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011859b;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011859b;
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
        cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
        if (cVar5 != '\0') goto LAB_0011859b;
      }
      cVar5 = String::operator==(param_1,"Container");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Control::is_class((Control *)this,param_1);
          return uVar6;
        }
        goto LAB_00118788;
      }
    }
  }
LAB_0011859b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00118788:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001188ec;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001188ec:
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
  local_78 = &_LC101;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC101;
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00118b3c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00118b3c:
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00118da1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00118da1:
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



/* JSON::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall JSON::_get_property_listv(JSON *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC22;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC22;
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00119051;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00119051:
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
  StringName::StringName((StringName *)&local_78,"JSON",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
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



/* StyleBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBox::_get_property_listv(StyleBox *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StyleBox";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBox";
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00119301;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00119301:
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
  StringName::StringName((StringName *)&local_78,"StyleBox",false);
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



/* StyleBoxEmpty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBoxEmpty::_get_property_listv(StyleBoxEmpty *this,List *param_1,bool param_2)

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
    StyleBox::_get_property_listv((StyleBox *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StyleBoxEmpty";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBoxEmpty";
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001195b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001195b1:
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
  StringName::StringName((StringName *)&local_78,"StyleBoxEmpty",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      StyleBox::_get_property_listv((StyleBox *)this,param_1,true);
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00119861;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00119861:
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



/* EditorFeatureProfile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorFeatureProfile::_get_property_listv(EditorFeatureProfile *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorFeatureProfile";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorFeatureProfile";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00119b11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00119b11:
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
  StringName::StringName((StringName *)&local_78,"EditorFeatureProfile",false);
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00119dc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00119dc1:
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
  if ((code *)PTR__get_property_list_0012d090 != Object::_get_property_list) {
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011a091;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a091:
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
  if ((code *)PTR__get_property_list_0012d098 != Object::_get_property_list) {
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011a361;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a361:
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



/* EditorFeatureProfileManager::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorFeatureProfileManager::_get_property_listv
          (EditorFeatureProfileManager *this,List *param_1,bool param_2)

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
  local_78 = "EditorFeatureProfileManager";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorFeatureProfileManager";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011a611;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a611:
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
  StringName::StringName((StringName *)&local_78,"EditorFeatureProfileManager",false);
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011a8c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a8c1:
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
  if ((code *)PTR__get_property_list_0012d0a0 != CanvasItem::_get_property_list) {
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011ab91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ab91:
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011ae41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ae41:
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011b0f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b0f1:
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011b3a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b3a1:
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



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

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
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
  local_98 = 0;
  local_70 = 0xe;
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011b651;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b651:
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
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
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



/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HSplitContainer::_get_property_listv(HSplitContainer *this,List *param_1,bool param_2)

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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HSplitContainer";
  local_98 = 0;
  local_70 = 0xf;
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011b901;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b901:
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
  StringName::StringName((StringName *)&local_78,"HSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
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



/* EditorFeatureProfileManager::_bind_methods() [clone .cold] */

void EditorFeatureProfileManager::_bind_methods(void)

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



/* EditorFeatureProfile::_bind_methods() [clone .cold] */

void EditorFeatureProfile::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorFeatureProfileManager::_initialize_classv() */

void EditorFeatureProfileManager::_initialize_classv(void)

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
            String::parse_latin1((String_conflict *)&local_60,"Object");
            StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String_conflict *)&local_70,"Node");
            StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((code *)PTR__bind_methods_0012d060 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String_conflict *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String_conflict *)&local_70,"Viewport");
          StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Viewport";
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "Window";
        local_70 = 0;
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "AcceptDialog";
      local_70 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0012d0a8 != Window::_bind_methods) {
        AcceptDialog::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0012d0b0 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "EditorFeatureProfileManager";
    local_70 = 0;
    local_50 = 0x1b;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos(StringName const&, unsigned int&) const */

undefined8 __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1,uint *param_2)

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
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(long *)this == 0) {
    return 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar14 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x18) + lVar13 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar16) &&
           (uVar16 = *(uint *)(*(long *)(this + 8) + lVar13 * 4),
           *(long *)(*(long *)this + (ulong)uVar16 * 8) == *(long *)param_1)) {
          *param_2 = uVar16;
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x18) + lVar13 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar14, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar14, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
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
  char cVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  StringName *in_RDX;
  ulong uVar30;
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *in_RSI;
  uint uVar31;
  ulong uVar32;
  undefined4 uVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  uint *puVar37;
  long in_FS_OFFSET;
  uint local_98;
  long local_78;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar24 = (ulong)uVar23 * 4;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar25;
    uVar25 = Memory::alloc_static((ulong)uVar23 * 8,false);
    *(undefined8 *)in_RSI = uVar25;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar25;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 8) = uVar25;
    if (uVar23 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar24);
    }
  }
  local_44 = 0;
  cVar22 = _lookup_pos(in_RSI,in_RDX,&local_44);
  if (cVar22 != '\0') {
    iVar29 = *(int *)(in_RSI + 0x24);
    uVar23 = local_44;
    goto LAB_0011c6a3;
  }
  if ((float)(*(int *)(in_RSI + 0x24) + 1) <= (float)uVar23 * __LC131) {
    lVar26 = *(long *)in_RDX;
    if (lVar26 != 0) goto LAB_0011c586;
LAB_0011c6fa:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (*(int *)(in_RSI + 0x20) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar29 = *(int *)(in_RSI + 0x24);
      uVar23 = 0xffffffff;
      goto LAB_0011c6a3;
    }
    uVar23 = *(int *)(in_RSI + 0x20) + 1;
    uVar24 = (ulong)uVar23;
    if (uVar23 < 2) {
      uVar24 = 2;
    }
    uVar23 = *(uint *)(hash_table_size_primes + uVar24 * 4);
    *(int *)(in_RSI + 0x20) = (int)uVar24;
    pvVar2 = *(void **)(in_RSI + 0x18);
    uVar24 = (ulong)uVar23 * 4;
    pvVar3 = *(void **)(in_RSI + 0x10);
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar25;
    uVar25 = Memory::realloc_static(*(void **)in_RSI,(ulong)uVar23 * 8,false);
    *(undefined8 *)in_RSI = uVar25;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar25;
    lVar26 = Memory::realloc_static(*(void **)(in_RSI + 8),uVar24,false);
    *(long *)(in_RSI + 8) = lVar26;
    if (uVar23 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar24);
    }
    if (*(int *)(in_RSI + 0x24) != 0) {
      uVar24 = 0;
      lVar4 = *(long *)(in_RSI + 0x18);
      lVar5 = *(long *)(in_RSI + 0x10);
      do {
        uVar35 = uVar24 & 0xffffffff;
        uVar33 = (undefined4)uVar24;
        uVar36 = 0;
        uVar23 = *(uint *)((long)pvVar2 + (ulong)*(uint *)((long)pvVar3 + uVar24 * 4) * 4);
        uVar30 = (ulong)uVar23;
        uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
        uVar32 = CONCAT44(0,uVar34);
        lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar30 * lVar27;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar32;
        lVar28 = SUB168(auVar6 * auVar14,8) * 4;
        iVar29 = SUB164(auVar6 * auVar14,8);
        puVar37 = (uint *)(lVar4 + lVar28);
        uVar1 = *puVar37;
        if (uVar1 == 0) {
          lVar27 = uVar24 * 4;
        }
        else {
          do {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar1 * lVar27;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar32;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)((uVar34 + iVar29) - SUB164(auVar7 * auVar15,8)) * lVar27;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar32;
            local_98 = SUB164(auVar8 * auVar16,8);
            if (local_98 < uVar36) {
              *(int *)(lVar5 + uVar35 * 4) = iVar29;
              uVar23 = *puVar37;
              *puVar37 = (uint)uVar30;
              uVar1 = *(uint *)(lVar28 + lVar26);
              uVar30 = (ulong)uVar23;
              *(uint *)(lVar28 + lVar26) = (uint)uVar35;
              uVar35 = (ulong)uVar1;
              uVar36 = local_98;
            }
            uVar33 = (undefined4)uVar35;
            uVar23 = (uint)uVar30;
            uVar36 = uVar36 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(iVar29 + 1) * lVar27;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar32;
            lVar28 = SUB168(auVar9 * auVar17,8) * 4;
            iVar29 = SUB164(auVar9 * auVar17,8);
            puVar37 = (uint *)(lVar4 + lVar28);
            uVar1 = *puVar37;
          } while (uVar1 != 0);
          lVar27 = uVar35 << 2;
        }
        *puVar37 = uVar23;
        uVar24 = uVar24 + 1;
        *(int *)(lVar5 + lVar27) = iVar29;
        *(undefined4 *)(lVar26 + lVar28) = uVar33;
      } while ((uint)uVar24 < *(uint *)(in_RSI + 0x24));
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(pvVar3,false);
    lVar26 = *(long *)in_RDX;
    if (lVar26 == 0) goto LAB_0011c6fa;
LAB_0011c586:
    uVar23 = *(uint *)(lVar26 + 0x20);
  }
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar24 = (ulong)uVar23;
  StringName::StringName
            ((StringName *)(*(long *)in_RSI + (ulong)*(uint *)(in_RSI + 0x24) * 8),in_RDX);
  uVar34 = *(uint *)(in_RSI + 0x24);
  lVar4 = *(long *)(in_RSI + 0x18);
  uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  uVar30 = CONCAT44(0,uVar1);
  lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar24 * lVar5;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar30;
  lVar26 = SUB168(auVar10 * auVar18,8) * 4;
  iVar29 = SUB164(auVar10 * auVar18,8);
  puVar37 = (uint *)(lVar4 + lVar26);
  uVar36 = *puVar37;
  if (uVar36 == 0) {
    local_78 = *(long *)(in_RSI + 0x10);
    lVar28 = *(long *)(in_RSI + 8);
  }
  else {
    uVar31 = 0;
    local_78 = *(long *)(in_RSI + 0x10);
    lVar28 = *(long *)(in_RSI + 8);
    do {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar5;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar30;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)((uVar1 + iVar29) - SUB164(auVar11 * auVar19,8)) * lVar5;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar30;
      local_98 = SUB164(auVar12 * auVar20,8);
      if (local_98 < uVar31) {
        *(int *)(local_78 + (ulong)uVar34 * 4) = iVar29;
        uVar23 = *puVar37;
        *puVar37 = (uint)uVar24;
        uVar36 = *(uint *)(lVar26 + lVar28);
        uVar24 = (ulong)uVar23;
        *(uint *)(lVar26 + lVar28) = uVar34;
        uVar34 = uVar36;
        uVar31 = local_98;
      }
      uVar23 = (uint)uVar24;
      uVar31 = uVar31 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)(iVar29 + 1) * lVar5;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar30;
      lVar26 = SUB168(auVar13 * auVar21,8) * 4;
      iVar29 = SUB164(auVar13 * auVar21,8);
      puVar37 = (uint *)(lVar4 + lVar26);
      uVar36 = *puVar37;
    } while (uVar36 != 0);
  }
  *puVar37 = uVar23;
  *(int *)(local_78 + (ulong)uVar34 * 4) = iVar29;
  *(uint *)(lVar28 + lVar26) = uVar34;
  uVar23 = *(uint *)(in_RSI + 0x24);
  iVar29 = uVar23 + 1;
  *(int *)(in_RSI + 0x24) = iVar29;
LAB_0011c6a3:
  *(undefined8 *)param_1 = *(undefined8 *)in_RSI;
  *(int *)(param_1 + 8) = iVar29;
  *(uint *)(param_1 + 0xc) = uVar23;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* HashMap<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > >
   >::_lookup_pos(StringName const&, unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
::_lookup_pos(HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
              *this,StringName *param_1,uint *param_2)

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
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
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
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > >
   >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
::operator[](HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *__s;
  long lVar6;
  undefined8 *puVar7;
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
  char cVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined8 *puVar29;
  void *pvVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  undefined8 *puVar40;
  long in_FS_OFFSET;
  uint local_c0;
  uint local_bc;
  HashSet local_b8 [16];
  undefined1 local_a8 [16];
  ulong local_98;
  undefined1 local_88 [16];
  long local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_c0);
  if (cVar24 != '\0') {
    puVar29 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_c0 * 8);
    goto LAB_0011cfda;
  }
  local_b8[0] = (HashSet)0x0;
  local_b8[1] = (HashSet)0x0;
  local_b8[2] = (HashSet)0x0;
  local_b8[3] = (HashSet)0x0;
  local_b8[4] = (HashSet)0x0;
  local_b8[5] = (HashSet)0x0;
  local_b8[6] = (HashSet)0x0;
  local_b8[7] = (HashSet)0x0;
  local_b8[8] = (HashSet)0x0;
  local_b8[9] = (HashSet)0x0;
  local_b8[10] = (HashSet)0x0;
  local_b8[0xb] = (HashSet)0x0;
  local_b8[0xc] = (HashSet)0x0;
  local_b8[0xd] = (HashSet)0x0;
  local_b8[0xe] = (HashSet)0x0;
  local_b8[0xf] = (HashSet)0x0;
  local_98 = _LC28;
  local_a8 = (undefined1  [16])0x0;
  uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar34 = (ulong)uVar26;
    uVar27 = uVar34 * 4;
    uVar38 = uVar34 * 8;
    uVar28 = Memory::alloc_static(uVar27,false);
    *(undefined8 *)(this + 0x10) = uVar28;
    pvVar30 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = pvVar30;
    if (uVar26 != 0) {
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)pvVar30 + uVar38)) && (pvVar30 < (void *)((long)pvVar5 + uVar27))
         ) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar27 * 4) = 0;
          *(undefined8 *)((long)pvVar30 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar34 != uVar27);
      }
      else {
        memset(pvVar5,0,uVar27);
        memset(pvVar30,0,uVar38);
      }
    }
  }
  local_bc = 0;
  cVar24 = _lookup_pos(this,param_1,&local_bc);
  if (cVar24 != '\0') {
    uVar27 = (ulong)local_bc;
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator=
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               (*(long *)(*(long *)(this + 8) + uVar27 * 8) + 0x18),local_b8);
    puVar29 = *(undefined8 **)(*(long *)(this + 8) + uVar27 * 8);
    goto LAB_0011cfda;
  }
  if ((float)uVar26 * __LC131 < (float)(*(int *)(this + 0x2c) + 1)) {
    uVar26 = *(uint *)(this + 0x28);
    if (uVar26 == 0x1c) {
      puVar29 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011cfda;
    }
    uVar27 = (ulong)(uVar26 + 1);
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar26 + 1 < 2) {
      uVar27 = 2;
    }
    uVar26 = *(uint *)(hash_table_size_primes + uVar27 * 4);
    *(int *)(this + 0x28) = (int)uVar27;
    pvVar30 = *(void **)(this + 8);
    uVar34 = (ulong)uVar26;
    uVar27 = uVar34 * 4;
    pvVar5 = *(void **)(this + 0x10);
    uVar28 = Memory::alloc_static(uVar27,false);
    *(undefined8 *)(this + 0x10) = uVar28;
    uVar38 = uVar34 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = __s_00;
    if (uVar26 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar27))) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)__s + uVar27 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar34 != uVar27);
      }
      else {
        memset(__s,0,uVar27);
        memset(__s_00,0,uVar38);
      }
    }
    if (uVar3 != 0) {
      uVar27 = 0;
      do {
        uVar26 = *(uint *)((long)pvVar5 + uVar27 * 4);
        if (uVar26 != 0) {
          uVar36 = 0;
          lVar39 = *(long *)(this + 0x10);
          uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar38 = CONCAT44(0,uVar4);
          lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar26 * lVar6;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar38;
          lVar32 = SUB168(auVar8 * auVar16,8);
          puVar1 = (uint *)(lVar39 + lVar32 * 4);
          iVar31 = SUB164(auVar8 * auVar16,8);
          uVar37 = *puVar1;
          uVar28 = *(undefined8 *)((long)pvVar30 + uVar27 * 8);
          while (uVar37 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar37 * lVar6;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar38;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar4 + iVar31) - SUB164(auVar9 * auVar17,8)) * lVar6;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar38;
            uVar25 = SUB164(auVar10 * auVar18,8);
            uVar35 = uVar28;
            if (uVar25 < uVar36) {
              *puVar1 = uVar26;
              puVar29 = (undefined8 *)((long)__s_00 + lVar32 * 8);
              uVar35 = *puVar29;
              *puVar29 = uVar28;
              uVar26 = uVar37;
              uVar36 = uVar25;
            }
            uVar36 = uVar36 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar31 + 1) * lVar6;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            lVar32 = SUB168(auVar11 * auVar19,8);
            puVar1 = (uint *)(lVar39 + lVar32 * 4);
            iVar31 = SUB164(auVar11 * auVar19,8);
            uVar28 = uVar35;
            uVar37 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar32 * 8) = uVar28;
          *puVar1 = uVar26;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar3);
      Memory::free_static(pvVar30,false);
      Memory::free_static(pvVar5,false);
    }
  }
  local_88 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_78,param_1);
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = _LC28;
  puVar29 = (undefined8 *)operator_new(0x40,"");
  *puVar29 = local_88._0_8_;
  puVar29[1] = local_88._8_8_;
  StringName::StringName((StringName *)(puVar29 + 2),(StringName *)&local_78);
  puVar29[7] = 0;
  *(undefined1 (*) [16])(puVar29 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar29 + 5) = (undefined1  [16])0x0;
  puVar29[7] = local_50;
  if ((int)(local_50 >> 0x20) != 0) {
    uVar26 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
    uVar27 = (ulong)uVar26 * 4;
    uVar28 = Memory::alloc_static(uVar27,false);
    lVar39 = 0;
    puVar29[6] = uVar28;
    uVar28 = Memory::alloc_static((ulong)uVar26 * 8,false);
    puVar29[3] = uVar28;
    uVar28 = Memory::alloc_static(uVar27,false);
    puVar29[5] = uVar28;
    uVar28 = Memory::alloc_static(uVar27,false);
    puVar29[4] = uVar28;
    if (*(int *)((long)puVar29 + 0x3c) != 0) {
      do {
        StringName::StringName
                  ((StringName *)(lVar39 * 8 + puVar29[3]),
                   (StringName *)(local_70._0_8_ + lVar39 * 8));
        *(undefined4 *)(puVar29[5] + lVar39 * 4) = *(undefined4 *)(local_60._0_8_ + lVar39 * 4);
        lVar39 = lVar39 + 1;
      } while ((uint)lVar39 < *(uint *)((long)puVar29 + 0x3c));
    }
    if (uVar26 != 0) {
      lVar39 = puVar29[6];
      lVar32 = 0;
      lVar6 = puVar29[4];
      do {
        *(undefined4 *)(lVar39 + lVar32) = *(undefined4 *)(local_60._8_8_ + lVar32);
        *(undefined4 *)(lVar6 + lVar32) = *(undefined4 *)(local_70._8_8_ + lVar32);
        lVar32 = lVar32 + 4;
      } while (uVar27 - lVar32 != 0);
    }
  }
  pvVar30 = (void *)local_70._0_8_;
  if ((void *)local_70._0_8_ != (void *)0x0) {
    if (local_50._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0) {
        memset((void *)local_60._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4);
        if (local_50._4_4_ == 0) goto LAB_0011d008;
      }
      lVar39 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar30 + lVar39 * 8) != 0)) {
          StringName::unref();
          pvVar30 = (void *)local_70._0_8_;
        }
        lVar39 = lVar39 + 1;
      } while ((uint)lVar39 < local_50._4_4_);
      local_50 = local_50 & 0xffffffff;
      if (pvVar30 == (void *)0x0) goto LAB_0011ce9a;
    }
LAB_0011d008:
    Memory::free_static(pvVar30,false);
    Memory::free_static((void *)local_60._0_8_,false);
    Memory::free_static((void *)local_70._8_8_,false);
    Memory::free_static((void *)local_60._8_8_,false);
  }
LAB_0011ce9a:
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  puVar7 = *(undefined8 **)(this + 0x20);
  if (puVar7 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar29;
  }
  else {
    *puVar7 = puVar29;
    puVar29[1] = puVar7;
  }
  *(undefined8 **)(this + 0x20) = puVar29;
  if (*(long *)param_1 == 0) {
    uVar26 = StringName::get_empty_hash();
  }
  else {
    uVar26 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar26 == 0) {
    uVar26 = 1;
  }
  uVar27 = (ulong)uVar26;
  uVar37 = 0;
  lVar39 = *(long *)(this + 0x10);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar3);
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar27 * lVar6;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar38;
  lVar33 = SUB168(auVar12 * auVar20,8);
  lVar32 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar39 + lVar33 * 4);
  iVar31 = SUB164(auVar12 * auVar20,8);
  uVar4 = *puVar1;
  puVar7 = puVar29;
  while (uVar4 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar4 * lVar6;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar38;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((iVar31 + uVar3) - SUB164(auVar13 * auVar21,8)) * lVar6;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar38;
    uVar26 = SUB164(auVar14 * auVar22,8);
    puVar40 = puVar7;
    if (uVar26 < uVar37) {
      *puVar1 = (uint)uVar27;
      uVar27 = (ulong)uVar4;
      puVar2 = (undefined8 *)(lVar32 + lVar33 * 8);
      puVar40 = (undefined8 *)*puVar2;
      *puVar2 = puVar7;
      uVar37 = uVar26;
    }
    uVar26 = (uint)uVar27;
    uVar37 = uVar37 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar31 + 1) * lVar6;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar38;
    lVar33 = SUB168(auVar15 * auVar23,8);
    puVar1 = (uint *)(lVar39 + lVar33 * 4);
    iVar31 = SUB164(auVar15 * auVar23,8);
    puVar7 = puVar40;
    uVar4 = *puVar1;
  }
  *(undefined8 **)(lVar32 + lVar33 * 8) = puVar7;
  *puVar1 = uVar26;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011cfda:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar29 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorFeatureProfile, StringName const&, bool>(void
   (EditorFeatureProfile::*)(StringName const&, bool)) */

MethodBind *
create_method_bind<EditorFeatureProfile,StringName_const&,bool>
          (_func_void_StringName_ptr_bool *param_1)

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
  *(_func_void_StringName_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126338;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "EditorFeatureProfile";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<EditorFeatureProfile, bool, StringName const&>(bool
   (EditorFeatureProfile::*)(StringName const&) const) */

MethodBind *
create_method_bind<EditorFeatureProfile,bool,StringName_const&>(_func_bool_StringName_ptr *param_1)

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
  *(_func_bool_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126398;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorFeatureProfile";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<EditorFeatureProfile, StringName const&, StringName const&,
   bool>(void (EditorFeatureProfile::*)(StringName const&, StringName const&, bool)) */

MethodBind *
create_method_bind<EditorFeatureProfile,StringName_const&,StringName_const&,bool>
          (_func_void_StringName_ptr_StringName_ptr_bool *param_1)

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
  *(_func_void_StringName_ptr_StringName_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001263f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorFeatureProfile";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<EditorFeatureProfile, bool, StringName const&, StringName
   const&>(bool (EditorFeatureProfile::*)(StringName const&, StringName const&) const) */

MethodBind *
create_method_bind<EditorFeatureProfile,bool,StringName_const&,StringName_const&>
          (_func_bool_StringName_ptr_StringName_ptr *param_1)

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
  *(_func_bool_StringName_ptr_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126458;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "EditorFeatureProfile";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<EditorFeatureProfile, EditorFeatureProfile::Feature, bool>(void
   (EditorFeatureProfile::*)(EditorFeatureProfile::Feature, bool)) */

MethodBind *
create_method_bind<EditorFeatureProfile,EditorFeatureProfile::Feature,bool>
          (_func_void_Feature_bool *param_1)

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
  *(_func_void_Feature_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001264b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "EditorFeatureProfile";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<EditorFeatureProfile, bool, EditorFeatureProfile::Feature>(bool
   (EditorFeatureProfile::*)(EditorFeatureProfile::Feature) const) */

MethodBind *
create_method_bind<EditorFeatureProfile,bool,EditorFeatureProfile::Feature>
          (_func_bool_Feature *param_1)

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
  *(_func_bool_Feature **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126518;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorFeatureProfile";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<EditorFeatureProfile, String,
   EditorFeatureProfile::Feature>(String (EditorFeatureProfile::*)(EditorFeatureProfile::Feature))
    */

MethodBind *
create_method_bind<EditorFeatureProfile,String,EditorFeatureProfile::Feature>
          (_func_String_Feature *param_1)

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
  *(_func_String_Feature **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126578;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorFeatureProfile";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<EditorFeatureProfile, Error, String const&>(Error
   (EditorFeatureProfile::*)(String const&)) */

MethodBind *
create_method_bind<EditorFeatureProfile,Error,String_const&>(_func_Error_String_ptr *param_1)

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
  *(_func_Error_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001265d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorFeatureProfile";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String_conflict *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x11daaa);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC38;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar3 = 0;
      lVar2 = -2;
    }
    else {
      lVar3 = *(long *)(local_50 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String_conflict *)&local_48,(String_conflict *)(local_50 + lVar2 * 8));
        String::operator+((String_conflict *)this,(String_conflict *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0011db74;
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
  local_60 = 0;
  local_48 = &_LC38;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0011db74:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTR<Error,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_a8 = 0;
    local_80 = 6;
    local_90 = 0;
    local_88 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    String::parse_latin1((String_conflict *)&local_b8,"");
    local_c0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,4,(CowData<char32_t> *)&local_c0,0,
               (String_conflict *)&local_b8,6,&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      local_a0._0_8_ = local_70;
      local_70 = 0;
    }
    if (local_a0._8_8_ != local_68) {
      StringName::unref();
      local_a0._8_8_ = local_68;
      local_68 = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar3 = local_a0._8_8_;
    uVar2 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *(undefined4 *)pPVar4 = (undefined4)local_a8;
    *(undefined8 *)(pPVar4 + 8) = uVar2;
    *(undefined8 *)(pPVar4 + 0x10) = uVar3;
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_90;
    *(long *)(pPVar4 + 0x20) = local_88;
    *(undefined4 *)(pPVar4 + 0x28) = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  }
  else {
    local_b0 = 0;
    local_70 = 5;
    local_78 = "Error";
    String::parse_latin1((StrRange *)&local_b0);
    godot::details::enum_qualified_name_to_class_info_name
              ((details *)&local_a8,(String_conflict *)&local_b0);
    StringName::StringName((StringName *)&local_78,(String_conflict *)&local_a8,false);
    local_b8 = 0;
    local_c0 = 0;
    PropertyInfo::PropertyInfo
              (pPVar4,2,(CowData<char32_t> *)&local_c0,0,(CowData<char32_t> *)&local_b8,0x10006,
               (StringName *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<EditorFeatureProfile::Feature, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<EditorFeatureProfile::Feature,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70._0_8_ = 0x1d;
    local_78 = "EditorFeatureProfile::Feature";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name
              ((details *)&local_88,(String_conflict *)&local_90);
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_88,false);
    local_98 = 0;
    local_a0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_a0,0,
               (CowData<char32_t> *)&local_98,0x10006,(StringName *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  else {
    if (in_EDX != 1) goto LAB_0011dfbd;
    local_88 = 0;
    local_90 = 0;
    local_78 = "";
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,1);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_0011e230:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0011e230;
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_70._8_8_ == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_70._8_8_ = local_80;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
  }
  *puVar5 = local_78._0_4_;
  if (*(long *)(puVar5 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_70._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0011dfbd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, Vector<String>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&>::call
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Variant local_48 [8];
  CowData<String> local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x22);
            uVar3 = _LC171;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_Vector(local_48);
            (*pcVar7)((long *)(lVar1 + lVar2),local_48);
            CowData<String>::_unref(local_40);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011e36e;
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
  String::parse_latin1((String_conflict *)&local_50,"\', can\'t call method.");
  uitos((ulong)local_60);
  operator+((char *)local_58,(String_conflict *)"Invalid Object id \'");
  String::operator+((String_conflict *)local_48,(String_conflict *)local_58);
  _err_print_error(&_LC97,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011e36e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GetTypeInfo<EditorFeatureProfile::Feature, void>::get_class_info() */

GetTypeInfo<EditorFeatureProfile::Feature,void> * __thiscall
GetTypeInfo<EditorFeatureProfile::Feature,void>::get_class_info
          (GetTypeInfo<EditorFeatureProfile::Feature,void> *this)

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
  local_58 = "EditorFeatureProfile::Feature";
  local_50 = 0x1d;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x11daaa);
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
        String::operator+((String_conflict *)&local_58,(String_conflict *)(local_60 + lVar2 * 8));
        String::operator+((String_conflict *)local_78,(String_conflict *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_0011e5d5;
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
LAB_0011e5d5:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String_conflict *)local_78,false);
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



/* MethodBindTR<String, EditorFeatureProfile::Feature>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<String,EditorFeatureProfile::Feature>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
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
    local_70 = 6;
    local_78 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    GetTypeInfo<EditorFeatureProfile::Feature,void>::get_class_info
              ((GetTypeInfo<EditorFeatureProfile::Feature,void> *)&local_68);
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
    goto LAB_0011e9a0;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC4;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 4;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0011e967:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011e967;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar4 + 8),false);
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
LAB_0011e9a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, EditorFeatureProfile::Feature>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,EditorFeatureProfile::Feature>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
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
    local_70 = 6;
    local_78 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    GetTypeInfo<EditorFeatureProfile::Feature,void>::get_class_info
              ((GetTypeInfo<EditorFeatureProfile::Feature,void> *)&local_68);
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
    goto LAB_0011ec20;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC4;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0011ebe7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011ebe7;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar4 + 8),false);
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
LAB_0011ec20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFeatureProfile::_initialize_classv() */

void EditorFeatureProfile::_initialize_classv(void)

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
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String_conflict *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String_conflict *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)PTR__bind_methods_0012d068 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String_conflict *)&local_58,false);
    local_48 = "EditorFeatureProfile";
    local_60 = 0;
    local_40 = 0x14;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String_conflict *)&local_60,false);
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
LAB_0011f220:
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
  if (lVar9 == 0) goto LAB_0011f220;
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
    goto LAB_0011f276;
  }
  if (lVar9 == lVar5) {
LAB_0011f19b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011f276:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011f10f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011f19b;
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
LAB_0011f10f:
  puVar7[-1] = param_1;
  return 0;
}



/* EditorFeatureProfileManager::_notificationv(int, bool) */

void __thiscall
EditorFeatureProfileManager::_notificationv
          (EditorFeatureProfileManager *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0xd) {
      _notification(iVar1);
    }
    else if (param_1 == 0x20) {
      _update_selected_profile(this);
    }
    if ((code *)PTR__notification_0012d0b8 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
    }
    Window::_notification(iVar1);
    Viewport::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Viewport::_notification(iVar1);
  Window::_notification(iVar1);
  if ((code *)PTR__notification_0012d0b8 != Window::_notification) {
    AcceptDialog::_notification(iVar1);
  }
  if (param_1 != 0xd) {
    if (param_1 != 0x20) {
      return;
    }
    _update_selected_profile(this);
    return;
  }
  _notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011f508) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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
      goto LAB_0011f7bc;
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
LAB_0011f7bc:
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
      goto LAB_0011f998;
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
LAB_0011f998:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, EditorFeatureProfile::Feature>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<String,EditorFeatureProfile::Feature>::validated_call
          (MethodBindTR<String,EditorFeatureProfile::Feature> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

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
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fba2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),
            *(undefined4 *)(*param_2 + 8));
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0011fba2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, EditorFeatureProfile::Feature>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTR<String,EditorFeatureProfile::Feature>::ptrcall
          (MethodBindTR<String,EditorFeatureProfile::Feature> *this,Object *param_1,void **param_2,
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
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fd90;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0011fd90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, EditorFeatureProfile::Feature>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<bool,EditorFeatureProfile::Feature>::validated_call
          (MethodBindTRC<bool,EditorFeatureProfile::Feature> *this,Object *param_1,Variant **param_2
          ,Variant *param_3)

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
      goto LAB_0011ff58;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_0011ff58:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, EditorFeatureProfile::Feature>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<bool,EditorFeatureProfile::Feature>::ptrcall
          (MethodBindTRC<bool,EditorFeatureProfile::Feature> *this,Object *param_1,void **param_2,
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
      goto LAB_00120137;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_00120137:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<EditorFeatureProfile::Feature, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<EditorFeatureProfile::Feature,bool>::validated_call
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
      goto LAB_001204b1;
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
                    /* WARNING: Could not recover jumptable at 0x00120336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_001204b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<EditorFeatureProfile::Feature, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<EditorFeatureProfile::Feature,bool>::ptrcall
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
      goto LAB_001206a1;
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
                    /* WARNING: Could not recover jumptable at 0x0012052a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_001206a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&, StringName const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,StringName_const&,StringName_const&>::validated_call
          (MethodBindTRC<bool,StringName_const&,StringName_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

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
      goto LAB_00120707;
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
LAB_00120707:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&, StringName const&>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<bool,StringName_const&,StringName_const&>::ptrcall
          (MethodBindTRC<bool,StringName_const&,StringName_const&> *this,Object *param_1,
          void **param_2,void *param_3)

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
      goto LAB_001208cb;
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
LAB_001208cb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<StringName_const&,StringName_const&,bool>::validated_call
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
      goto LAB_00120c27;
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
                    /* WARNING: Could not recover jumptable at 0x00120ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8,*(undefined1 *)(*(long *)(param_3 + 0x10) + 8));
    return;
  }
LAB_00120c27:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&, bool>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<StringName_const&,StringName_const&,bool>::ptrcall
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
      goto LAB_00120e11;
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
                    /* WARNING: Could not recover jumptable at 0x00120c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),**(char **)((long)param_3 + 0x10) != '\0');
    return;
  }
LAB_00120e11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<bool,StringName_const&>::validated_call
          (MethodBindTRC<bool,StringName_const&> *this,Object *param_1,Variant **param_2,
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
      goto LAB_00120e69;
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
LAB_00120e69:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,StringName_const&>::ptrcall
          (MethodBindTRC<bool,StringName_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00121045;
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
LAB_00121045:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<StringName_const&,bool>::validated_call
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
      goto LAB_001213b1;
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
                    /* WARNING: Could not recover jumptable at 0x00121237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_001213b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001215a1;
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
                    /* WARNING: Could not recover jumptable at 0x00121428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_001215a1:
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
      _err_print_error(&_LC97,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00121780;
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
      if (in_R8D != 1) goto LAB_001217d0;
LAB_001217c0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001217d0:
        uVar7 = 4;
        goto LAB_00121775;
      }
      if (in_R8D == 1) goto LAB_001217c0;
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
    uVar4 = _LC100;
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
LAB_00121775:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00121780:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<bool, EditorFeatureProfile::Feature>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<bool,EditorFeatureProfile::Feature>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC97,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121b10;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00121b50;
LAB_00121b40:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121b50:
        uVar7 = 4;
        goto LAB_00121b05;
      }
      if (in_R8D == 1) goto LAB_00121b40;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC99;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar12);
    bVar6 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar8 & 0xffffffff);
    Variant::Variant((Variant *)local_48,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00121b05:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00121b10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, EditorFeatureProfile::Feature>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<String,EditorFeatureProfile::Feature>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
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
      _err_print_error(&_LC97,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00121ea0;
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
      if (in_R8D != 1) goto LAB_00121ef0;
LAB_00121ee0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121ef0:
        uVar6 = 4;
        goto LAB_00121e95;
      }
      if (in_R8D == 1) goto LAB_00121ee0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC99;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)((CowData<char32_t> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,(String_conflict *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00121e95:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00121ea0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<bool, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,StringName_const&>::call
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
      _err_print_error(&_LC97,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122250;
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
      if (in_R8D != 1) goto LAB_001222a0;
LAB_00122290:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001222a0:
        uVar7 = 4;
        goto LAB_00122245;
      }
      if (in_R8D == 1) goto LAB_00122290;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x15);
    uVar4 = _LC235;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    bVar6 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68)
    ;
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar6 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar6) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_00122245:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00122250:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<StringName const&, StringName const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<StringName_const&,StringName_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
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
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
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
      _err_print_error(&_LC97,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001226f2;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
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
        local_58[lVar8] = pVVar13;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[2],1);
      uVar4 = _LC237;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_58[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[1],0x15);
      uVar4 = _LC238;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_70);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[0],0x15);
      uVar4 = _LC235;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_68);
      (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_68,
                         (Variant *)&local_70,bVar6);
      if (StringName::configured != '\0') {
        if (local_68 != (char *)0x0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_001226f2;
        }
        if (local_70 != 0) {
          StringName::unref();
        }
      }
      goto LAB_001226f2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_001226f2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<bool,StringName_const&,StringName_const&>::call
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
      _err_print_error(&_LC97,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122ad0;
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
      if (iVar7 != 0) goto LAB_00122b18;
      pVVar12 = *(Variant **)param_4;
LAB_00122b2d:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar7) {
LAB_00122b18:
        uVar8 = 4;
        goto LAB_00122b05;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_00122c00;
        pVVar12 = pVVar15 + lVar10 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_00122b2d;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
      if (lVar2 <= lVar10) {
LAB_00122c00:
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,0x15);
    uVar4 = _LC238;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_70);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x15);
    uVar4 = _LC235;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    bVar6 = (bool)(*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68,
                                     (Variant *)&local_70);
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar6 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (bVar6) {
      if (local_68 != (char *)0x0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00122ad0;
      }
      if (local_70 != 0) {
        StringName::unref();
      }
    }
  }
  else {
    uVar8 = 3;
LAB_00122b05:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_00122ad0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, EditorFeatureProfile::Feature,
   bool>(__UnexistingClass*, void (__UnexistingClass::*)(EditorFeatureProfile::Feature, bool),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,EditorFeatureProfile::Feature,bool>
               (__UnexistingClass *param_1,_func_void_Feature_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar6 = 3;
    goto LAB_00122e7d;
  }
  lVar7 = *(long *)(in_stack_00000008 + 8);
  iVar5 = 2 - uVar10;
  if (lVar7 == 0) {
    if (iVar5 == 0) {
      this = (Variant *)*plVar8;
LAB_00122ead:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00122de5;
    }
  }
  else {
    lVar1 = *(long *)(lVar7 + -8);
    iVar11 = (int)lVar1;
    if (iVar5 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar1 <= lVar9) goto LAB_00122ec8;
        this = (Variant *)(lVar7 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00122ead;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar5));
      if (lVar1 <= lVar9) {
LAB_00122ec8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar1,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      this_00 = (Variant *)(lVar7 + lVar9 * 0x18);
LAB_00122de5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_Feature_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar3 = _LC239;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar3 = _LC99;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      lVar7 = Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00122e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((char)(param_1 + (long)param_3),SUB81(lVar7,0));
      return;
    }
  }
  uVar6 = 4;
LAB_00122e7d:
  *(undefined4 *)param_6 = uVar6;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<EditorFeatureProfile::Feature, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<EditorFeatureProfile::Feature,bool>::call
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
      _err_print_error(&_LC97,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00122f66;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,EditorFeatureProfile::Feature,bool>
            (p_Var2,(_func_void_Feature_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00122f66:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, StringName const&, bool>(__UnexistingClass*,
   void (__UnexistingClass::*)(StringName const&, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,StringName_const&,bool>
               (__UnexistingClass *param_1,_func_void_StringName_ptr_bool *param_2,Variant **param_3
               ,int param_4,CallError *param_5,Vector *param_6)

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
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long local_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00123288;
      puVar10 = (undefined4 *)*plVar8;
LAB_001232dd:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00123288:
        uVar7 = 4;
        goto LAB_0012328d;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_001232f8;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_001232dd;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001232f8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_StringName_ptr_bool **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
    uVar4 = _LC239;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_bool(this);
    cVar5 = Variant::can_convert_strict(*puVar10,0x15);
    uVar4 = _LC235;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_38);
    (*param_2)((StringName *)(param_1 + (long)param_3),SUB81(&local_38,0));
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_0012328d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<StringName_const&,bool>::call
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
      _err_print_error(&_LC97,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00123396;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,StringName_const&,bool>
            (p_Var2,(_func_void_StringName_ptr_bool *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00123396:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

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
    local_78 = &_LC4;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x15,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
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



/* MethodBindT<StringName const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&,bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_84;
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
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  local_84 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_84,pPVar2);
  if (in_EDX == local_84) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC4;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar2 = local_68._0_4_;
    if (*(long *)(pPVar2 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_50;
    if (*(long *)(pPVar2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,StringName_const&>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
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
    goto LAB_00123988;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC4;
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
LAB_00123a6f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00123a6f;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar5 + 8),false);
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
LAB_00123988:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,StringName_const&,bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_84;
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
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  local_84 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_84,pPVar2);
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_84,pPVar2);
  if (in_EDX == local_84) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC4;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar2 = local_68._0_4_;
    if (*(long *)(pPVar2 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_50;
    if (*(long *)(pPVar2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&, StringName const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<bool,StringName_const&,StringName_const&>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<StringName_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<StringName_const&>
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
    goto LAB_00123e44;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC4;
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
LAB_00123e6f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00123e6f;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar5 + 8),false);
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
LAB_00123e44:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
                if (pvVar5 == (void *)0x0) goto LAB_00124209;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00124209:
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



/* EditorFeatureProfile::feature_names */

void EditorFeatureProfile::_GLOBAL__sub_I_feature_names(void)

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
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache = '\x01';
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
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
  if (EditorFileDialog::base_property_helper != '\0') {
    return;
  }
  EditorFileDialog::base_property_helper = 1;
  EditorFileDialog::base_property_helper._64_8_ = 0;
  EditorFileDialog::base_property_helper._56_8_ = 2;
  EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
               &__dso_handle,uStack_8);
  return;
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
/* EditorFeatureProfileManager::~EditorFeatureProfileManager() */

void __thiscall
EditorFeatureProfileManager::~EditorFeatureProfileManager(EditorFeatureProfileManager *this)

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
/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

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
/* EditorFeatureProfile::~EditorFeatureProfile() */

void __thiscall EditorFeatureProfile::~EditorFeatureProfile(EditorFeatureProfile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

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
/* MethodBindTR<String, EditorFeatureProfile::Feature>::~MethodBindTR() */

void __thiscall
MethodBindTR<String,EditorFeatureProfile::Feature>::~MethodBindTR
          (MethodBindTR<String,EditorFeatureProfile::Feature> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, EditorFeatureProfile::Feature>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,EditorFeatureProfile::Feature>::~MethodBindTRC
          (MethodBindTRC<bool,EditorFeatureProfile::Feature> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<EditorFeatureProfile::Feature, bool>::~MethodBindT() */

void __thiscall
MethodBindT<EditorFeatureProfile::Feature,bool>::~MethodBindT
          (MethodBindT<EditorFeatureProfile::Feature,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, StringName const&, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<bool,StringName_const&,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, StringName const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&,bool>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,bool>::~MethodBindT(MethodBindT<StringName_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorFeatureProfileManager, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorFeatureProfileManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorFeatureProfileManager, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,Vector<String>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorFeatureProfileManager, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFeatureProfileManager,void,String_const&> *this)

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


