
/* GLES3::Fog::fog_volume_allocate() */

undefined8 GLES3::Fog::fog_volume_allocate(void)

{
  return 0;
}



/* GLES3::Fog::fog_volume_free(RID) */

void GLES3::Fog::fog_volume_free(void)

{
  return;
}



/* GLES3::Fog::fog_volume_set_shape(RID, RenderingServer::FogVolumeShape) */

void GLES3::Fog::fog_volume_set_shape(void)

{
  return;
}



/* GLES3::Fog::fog_volume_set_size(RID, Vector3 const&) */

void GLES3::Fog::fog_volume_set_size(void)

{
  return;
}



/* GLES3::Fog::fog_volume_set_material(RID, RID) */

void GLES3::Fog::fog_volume_set_material(void)

{
  return;
}



/* GLES3::Fog::fog_volume_get_aabb(RID) const */

undefined8 * GLES3::Fog::fog_volume_get_aabb(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* GLES3::Fog::fog_volume_get_shape(RID) const */

undefined8 GLES3::Fog::fog_volume_get_shape(void)

{
  return 3;
}



/* GLES3::Fog::~Fog() */

void __thiscall GLES3::Fog::~Fog(Fog *this)

{
  return;
}



/* GLES3::Fog::~Fog() */

void __thiscall GLES3::Fog::~Fog(Fog *this)

{
  operator_delete(this,8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* GLES3::Fog::~Fog() */

void __thiscall GLES3::Fog::~Fog(Fog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


