
/* ResourceImporterTextureSettings::should_import_s3tc_bptc() */

ulong ResourceImporterTextureSettings::should_import_s3tc_bptc(void)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  long *plVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"rendering/textures/vram_compression/import_s3tc_bptc",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_38);
  uVar4 = CONCAT71(extraout_var,bVar1) & 0xffffffff;
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if ((char)uVar4 == '\0') {
    plVar3 = (long *)OS::get_singleton();
    iVar2 = (**(code **)(*plVar3 + 0x340))(plVar3);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),iVar2 == 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTextureSettings::should_import_etc2_astc() */

ulong ResourceImporterTextureSettings::should_import_etc2_astc(void)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  long *plVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"rendering/textures/vram_compression/import_etc2_astc",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_38);
  uVar4 = CONCAT71(extraout_var,bVar1) & 0xffffffff;
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if ((char)uVar4 == '\0') {
    plVar3 = (long *)OS::get_singleton();
    iVar2 = (**(code **)(*plVar3 + 0x340))(plVar3);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),iVar2 == 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


