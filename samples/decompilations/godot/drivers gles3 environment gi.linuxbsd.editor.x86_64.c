
/* GLES3::GI::voxel_gi_allocate() */

undefined8 GLES3::GI::voxel_gi_allocate(void)

{
  return 0;
}



/* GLES3::GI::voxel_gi_initialize(RID) */

void GLES3::GI::voxel_gi_initialize(void)

{
  return;
}



/* GLES3::GI::voxel_gi_allocate_data(RID, Transform3D const&, AABB const&, Vector3i const&,
   Vector<unsigned char> const&, Vector<unsigned char> const&, Vector<unsigned char> const&,
   Vector<int> const&) */

void GLES3::GI::voxel_gi_allocate_data(void)

{
  return;
}



/* GLES3::GI::voxel_gi_get_bounds(RID) const */

undefined8 * GLES3::GI::voxel_gi_get_bounds(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* GLES3::GI::voxel_gi_get_octree_size(RID) const */

undefined1  [16] GLES3::GI::voxel_gi_get_octree_size(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::GI::voxel_gi_get_data_cells(RID) const */

long GLES3::GI::voxel_gi_get_data_cells(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* GLES3::GI::voxel_gi_get_level_counts(RID) const */

long GLES3::GI::voxel_gi_get_level_counts(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* GLES3::GI::voxel_gi_get_to_cell_xform(RID) const */

undefined1 (*) [16] GLES3::GI::voxel_gi_get_to_cell_xform(undefined1 (*param_1) [16])

{
  uint uVar1;
  
  uVar1 = _LC1;
  *(undefined4 *)param_1[2] = 0x3f800000;
  *(undefined8 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[2] + 0xc) = 0;
  *param_1 = ZEXT416(uVar1);
  param_1[1] = ZEXT416(uVar1);
  return param_1;
}



/* GLES3::GI::voxel_gi_set_propagation(RID, float) */

void GLES3::GI::voxel_gi_set_propagation(void)

{
  return;
}



/* GLES3::GI::voxel_gi_get_propagation(RID) const */

undefined8 GLES3::GI::voxel_gi_get_propagation(void)

{
  return 0;
}



/* GLES3::GI::voxel_gi_get_baked_exposure_normalization(RID) const */

undefined4 GLES3::GI::voxel_gi_get_baked_exposure_normalization(void)

{
  return _LC1;
}



/* GLES3::GI::voxel_gi_set_use_two_bounces(RID, bool) */

void GLES3::GI::voxel_gi_set_use_two_bounces(void)

{
  return;
}



/* GLES3::GI::voxel_gi_is_using_two_bounces(RID) const */

undefined8 GLES3::GI::voxel_gi_is_using_two_bounces(void)

{
  return 0;
}



/* GLES3::GI::voxel_gi_get_version(RID) const */

undefined8 GLES3::GI::voxel_gi_get_version(void)

{
  return 0;
}



/* GLES3::GI::sdfgi_reset() */

void GLES3::GI::sdfgi_reset(void)

{
  return;
}



/* GLES3::GI::~GI() */

void __thiscall GLES3::GI::~GI(GI *this)

{
  return;
}



/* GLES3::GI::~GI() */

void __thiscall GLES3::GI::~GI(GI *this)

{
  operator_delete(this,8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* GLES3::GI::~GI() */

void __thiscall GLES3::GI::~GI(GI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


