
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererDummy::TextureStorage::TextureStorage() */

void __thiscall RendererDummy::TextureStorage::TextureStorage(TextureStorage *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00102258;
  uVar1 = __LC0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_canvas_texture_allocate_00101ec8;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  uVar2 = _UNK_00102268;
  uVar1 = __LC1;
  *(undefined ***)(this + 0x18) = &PTR__RID_Alloc_00101ea8;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x58) = 1;
  singleton = this;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar2;
  return;
}



/* RendererDummy::TextureStorage::~TextureStorage() */

void __thiscall RendererDummy::TextureStorage::~TextureStorage(TextureStorage *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_canvas_texture_allocate_00101ec8;
  singleton = 0;
  *(undefined ***)(this + 0x18) = &PTR__RID_Alloc_00101ea8;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x34);
  uVar4 = *(uint *)(this + 0x30);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x20) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x28) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x20) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 0x20),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x28),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererDummy::TextureStorage::~TextureStorage() */

void __thiscall RendererDummy::TextureStorage::~TextureStorage(TextureStorage *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_canvas_texture_allocate_00101ec8;
  singleton = 0;
  *(undefined ***)(this + 0x18) = &PTR__RID_Alloc_00101ea8;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x34);
  uVar4 = *(uint *)(this + 0x30);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x20) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x28) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x20),false);
    Memory::free_static(*(void **)(this + 0x28),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x70);
  return;
}



/* RendererDummy::TextureStorage::canvas_texture_allocate() */

undefined8 RendererDummy::TextureStorage::canvas_texture_allocate(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::canvas_texture_initialize(RID) */

void RendererDummy::TextureStorage::canvas_texture_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::canvas_texture_free(RID) */

void RendererDummy::TextureStorage::canvas_texture_free(void)

{
  return;
}



/* RendererDummy::TextureStorage::canvas_texture_set_channel(RID,
   RenderingServer::CanvasTextureChannel, RID) */

void RendererDummy::TextureStorage::canvas_texture_set_channel(void)

{
  return;
}



/* RendererDummy::TextureStorage::canvas_texture_set_shading_parameters(RID, Color const&, float) */

void RendererDummy::TextureStorage::canvas_texture_set_shading_parameters(void)

{
  return;
}



/* RendererDummy::TextureStorage::canvas_texture_set_texture_filter(RID,
   RenderingServer::CanvasItemTextureFilter) */

void RendererDummy::TextureStorage::canvas_texture_set_texture_filter(void)

{
  return;
}



/* RendererDummy::TextureStorage::canvas_texture_set_texture_repeat(RID,
   RenderingServer::CanvasItemTextureRepeat) */

void RendererDummy::TextureStorage::canvas_texture_set_texture_repeat(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_2d_layered_initialize(RID, Vector<Ref<Image> > const&,
   RenderingServer::TextureLayeredType) */

void RendererDummy::TextureStorage::texture_2d_layered_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_3d_initialize(RID, Image::Format, int, int, int, bool,
   Vector<Ref<Image> > const&) */

void RendererDummy::TextureStorage::texture_3d_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_external_initialize(RID, int, int, unsigned long) */

void RendererDummy::TextureStorage::texture_external_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_proxy_initialize(RID, RID) */

void RendererDummy::TextureStorage::texture_proxy_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_create_from_native_handle(RenderingServer::TextureType,
   Image::Format, unsigned long, int, int, int, int, RenderingServer::TextureLayeredType) */

undefined8 RendererDummy::TextureStorage::texture_create_from_native_handle(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::texture_2d_update(RID, Ref<Image> const&, int) */

void RendererDummy::TextureStorage::texture_2d_update(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_3d_update(RID, Vector<Ref<Image> > const&) */

void RendererDummy::TextureStorage::texture_3d_update(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_external_update(RID, int, int, unsigned long) */

void RendererDummy::TextureStorage::texture_external_update(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_proxy_update(RID, RID) */

void RendererDummy::TextureStorage::texture_proxy_update(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_2d_placeholder_initialize(RID) */

void RendererDummy::TextureStorage::texture_2d_placeholder_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_2d_layered_placeholder_initialize(RID,
   RenderingServer::TextureLayeredType) */

void RendererDummy::TextureStorage::texture_2d_layered_placeholder_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_3d_placeholder_initialize(RID) */

void RendererDummy::TextureStorage::texture_3d_placeholder_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_2d_layer_get(RID, int) const */

undefined8 * RendererDummy::TextureStorage::texture_2d_layer_get(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* RendererDummy::TextureStorage::texture_3d_get(RID) const */

long RendererDummy::TextureStorage::texture_3d_get(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* RendererDummy::TextureStorage::texture_replace(RID, RID) */

void __thiscall
RendererDummy::TextureStorage::texture_replace
          (TextureStorage *this,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0010055a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x50))(this,param_3);
  return;
}



/* RendererDummy::TextureStorage::texture_set_size_override(RID, int, int) */

void RendererDummy::TextureStorage::texture_set_size_override(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_set_path(RID, String const&) */

void RendererDummy::TextureStorage::texture_set_path(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_get_path(RID) const */

undefined8 * RendererDummy::TextureStorage::texture_get_path(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* RendererDummy::TextureStorage::texture_get_format(RID) const */

undefined8 RendererDummy::TextureStorage::texture_get_format(void)

{
  return 0x27;
}



/* RendererDummy::TextureStorage::texture_set_detect_3d_callback(RID, void (*)(void*), void*) */

void RendererDummy::TextureStorage::texture_set_detect_3d_callback(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_set_detect_normal_callback(RID, void (*)(void*), void*) */

void RendererDummy::TextureStorage::texture_set_detect_normal_callback(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_set_detect_roughness_callback(RID, void (*)(void*, String
   const&, RenderingServer::TextureDetectRoughnessChannel), void*) */

void RendererDummy::TextureStorage::texture_set_detect_roughness_callback(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_debug_usage(List<RenderingServer::TextureInfo,
   DefaultAllocator>*) */

void RendererDummy::TextureStorage::texture_debug_usage(List *param_1)

{
  return;
}



/* RendererDummy::TextureStorage::texture_set_force_redraw_if_visible(RID, bool) */

void RendererDummy::TextureStorage::texture_set_force_redraw_if_visible(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_size_with_proxy(RID) */

undefined8 RendererDummy::TextureStorage::texture_size_with_proxy(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::texture_rd_initialize(RID, RID const&,
   RenderingServer::TextureLayeredType) */

void RendererDummy::TextureStorage::texture_rd_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_get_rd_texture(RID, bool) const */

undefined8 RendererDummy::TextureStorage::texture_get_rd_texture(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::texture_get_native_handle(RID, bool) const */

undefined8 RendererDummy::TextureStorage::texture_get_native_handle(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::decal_allocate() */

undefined8 RendererDummy::TextureStorage::decal_allocate(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::decal_initialize(RID) */

void RendererDummy::TextureStorage::decal_initialize(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_free(RID) */

void RendererDummy::TextureStorage::decal_free(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_set_size(RID, Vector3 const&) */

void RendererDummy::TextureStorage::decal_set_size(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_set_texture(RID, RenderingServer::DecalTexture, RID) */

void RendererDummy::TextureStorage::decal_set_texture(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_set_emission_energy(RID, float) */

void RendererDummy::TextureStorage::decal_set_emission_energy(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_set_albedo_mix(RID, float) */

void RendererDummy::TextureStorage::decal_set_albedo_mix(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_set_modulate(RID, Color const&) */

void RendererDummy::TextureStorage::decal_set_modulate(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_set_cull_mask(RID, unsigned int) */

void RendererDummy::TextureStorage::decal_set_cull_mask(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_set_distance_fade(RID, bool, float, float) */

void RendererDummy::TextureStorage::decal_set_distance_fade(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_set_fade(RID, float, float) */

void RendererDummy::TextureStorage::decal_set_fade(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_set_normal_fade(RID, float) */

void RendererDummy::TextureStorage::decal_set_normal_fade(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_get_aabb(RID) const */

undefined8 * RendererDummy::TextureStorage::decal_get_aabb(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* RendererDummy::TextureStorage::decal_get_cull_mask(RID) const */

undefined8 RendererDummy::TextureStorage::decal_get_cull_mask(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::texture_add_to_decal_atlas(RID, bool) */

void RendererDummy::TextureStorage::texture_add_to_decal_atlas(void)

{
  return;
}



/* RendererDummy::TextureStorage::texture_remove_from_decal_atlas(RID, bool) */

void RendererDummy::TextureStorage::texture_remove_from_decal_atlas(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_instance_create(RID) */

undefined8 RendererDummy::TextureStorage::decal_instance_create(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::decal_instance_free(RID) */

void RendererDummy::TextureStorage::decal_instance_free(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_instance_set_transform(RID, Transform3D const&) */

void RendererDummy::TextureStorage::decal_instance_set_transform(void)

{
  return;
}



/* RendererDummy::TextureStorage::decal_instance_set_sorting_offset(RID, float) */

void RendererDummy::TextureStorage::decal_instance_set_sorting_offset(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_create() */

undefined8 RendererDummy::TextureStorage::render_target_create(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_free(RID) */

void RendererDummy::TextureStorage::render_target_free(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_set_position(RID, int, int) */

void RendererDummy::TextureStorage::render_target_set_position(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_position(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_position(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_size(RID, int, int, unsigned int) */

void RendererDummy::TextureStorage::render_target_set_size(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_size(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_size(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_transparent(RID, bool) */

void RendererDummy::TextureStorage::render_target_set_transparent(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_transparent(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_transparent(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_direct_to_screen(RID, bool) */

void RendererDummy::TextureStorage::render_target_set_direct_to_screen(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_direct_to_screen(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_direct_to_screen(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_was_used(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_was_used(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_as_unused(RID) */

void RendererDummy::TextureStorage::render_target_set_as_unused(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_set_msaa(RID, RenderingServer::ViewportMSAA) */

void RendererDummy::TextureStorage::render_target_set_msaa(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_msaa(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_msaa(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_msaa_needs_resolve(RID, bool) */

void RendererDummy::TextureStorage::render_target_set_msaa_needs_resolve(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_msaa_needs_resolve(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_msaa_needs_resolve(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_do_msaa_resolve(RID) */

void RendererDummy::TextureStorage::render_target_do_msaa_resolve(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_set_use_hdr(RID, bool) */

void RendererDummy::TextureStorage::render_target_set_use_hdr(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_is_using_hdr(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_is_using_hdr(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_request_clear(RID, Color const&) */

void RendererDummy::TextureStorage::render_target_request_clear(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_is_clear_requested(RID) */

undefined8 RendererDummy::TextureStorage::render_target_is_clear_requested(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_get_clear_request_color(RID) */

undefined1  [16] RendererDummy::TextureStorage::render_target_get_clear_request_color(void)

{
  return ZEXT816(0x3f80000000000000) << 0x40;
}



/* RendererDummy::TextureStorage::render_target_disable_clear_request(RID) */

void RendererDummy::TextureStorage::render_target_disable_clear_request(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_do_clear_request(RID) */

void RendererDummy::TextureStorage::render_target_do_clear_request(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_set_sdf_size_and_scale(RID,
   RenderingServer::ViewportSDFOversize, RenderingServer::ViewportSDFScale) */

void RendererDummy::TextureStorage::render_target_set_sdf_size_and_scale(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_sdf_rect(RID) const */

undefined1  [16] RendererDummy::TextureStorage::render_target_get_sdf_rect(void)

{
  return ZEXT816(0);
}



/* RendererDummy::TextureStorage::render_target_mark_sdf_enabled(RID, bool) */

void RendererDummy::TextureStorage::render_target_mark_sdf_enabled(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_set_vrs_mode(RID, RenderingServer::ViewportVRSMode)
    */

void RendererDummy::TextureStorage::render_target_set_vrs_mode(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_vrs_mode(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_vrs_mode(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_vrs_update_mode(RID,
   RenderingServer::ViewportVRSUpdateMode) */

void RendererDummy::TextureStorage::render_target_set_vrs_update_mode(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_vrs_update_mode(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_vrs_update_mode(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_vrs_texture(RID, RID) */

void RendererDummy::TextureStorage::render_target_set_vrs_texture(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_vrs_texture(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_vrs_texture(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_override(RID, RID, RID, RID, RID) */

void RendererDummy::TextureStorage::render_target_set_override(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_override_color(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_override_color(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_get_override_depth(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_override_depth(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_get_override_velocity(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_override_velocity(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_get_override_velocity_depth(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_override_velocity_depth(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_render_region(RID, Rect2i const&) */

void RendererDummy::TextureStorage::render_target_set_render_region(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_render_region(RID) const */

undefined1  [16] RendererDummy::TextureStorage::render_target_get_render_region(void)

{
  return ZEXT816(0);
}



/* RendererDummy::TextureStorage::render_target_get_texture(RID) */

undefined8 RendererDummy::TextureStorage::render_target_get_texture(void)

{
  return 0;
}



/* RendererDummy::TextureStorage::render_target_set_velocity_target_size(RID, Vector2i const&) */

void RendererDummy::TextureStorage::render_target_set_velocity_target_size(void)

{
  return;
}



/* RendererDummy::TextureStorage::render_target_get_velocity_target_size(RID) const */

undefined8 RendererDummy::TextureStorage::render_target_get_velocity_target_size(void)

{
  return 0;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,
   false>::make_rid(RendererDummy::TextureStorage::DummyTexture* const&) */

ulong __thiscall
RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false>::make_rid
          (RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false> *this,
          DummyTexture **param_1)

{
  int iVar1;
  DummyTexture *pDVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  
  uVar14 = *(uint *)(this + 0x20);
  if (uVar14 == *(uint *)(this + 0x1c)) {
    if (uVar14 == 0) {
      lVar13 = 0;
      uVar17 = 8;
    }
    else {
      uVar17 = (ulong)((int)((ulong)uVar14 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar13 = ((ulong)uVar14 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar6 = Memory::realloc_static(*(void **)(this + 8),uVar17,false);
    *(long *)(this + 8) = lVar6;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
    pvVar3 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar6 + lVar13) = uVar12;
    lVar6 = Memory::realloc_static(pvVar3,uVar17,false);
    *(long *)(this + 0x10) = lVar6;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    iVar1 = *(int *)(this + 0x18);
    *(undefined8 *)(lVar6 + lVar13) = uVar12;
    if (iVar1 == 0) {
      lVar6 = *(long *)(this + 0x10);
      uVar8 = 0;
    }
    else {
      lVar6 = *(long *)(this + 0x10);
      lVar4 = *(long *)(lVar6 + lVar13);
      lVar13 = *(long *)(*(long *)(this + 8) + lVar13);
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar13 + 8 + lVar7 * 0x10) = 0xffffffff;
        *(int *)(lVar4 + lVar7 * 4) = *(int *)(this + 0x20) + (int)lVar7;
        uVar8 = *(uint *)(this + 0x18);
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < uVar8);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar8;
    uVar14 = *(uint *)(this + 0x20);
  }
  else {
    lVar6 = *(long *)(this + 0x10);
    uVar8 = *(uint *)(this + 0x18);
  }
  uVar14 = *(uint *)(*(long *)(lVar6 + ((ulong)uVar14 / (ulong)uVar8) * 8) +
                    ((ulong)uVar14 % (ulong)uVar8) * 4);
  uVar17 = (ulong)uVar14;
  LOCK();
  UNLOCK();
  uVar9 = (int)RID_AllocBase::base_id + 1;
  uVar10 = uVar9 & 0x7fffffff;
  if (uVar10 != 0x7fffffff) {
    lVar13 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar17 % (ulong)uVar8) * 0x10 + *(long *)(lVar13 + (uVar17 / uVar8) * 8) + 8) =
         uVar10 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar15 = CONCAT44(uVar9,uVar14) & 0x7fffffffffffffff;
    if ((uVar15 != 0) && ((uint)uVar15 < *(uint *)(this + 0x1c))) {
      puVar11 = (undefined8 *)
                ((uVar17 % (ulong)*(uint *)(this + 0x18)) * 0x10 +
                *(long *)(lVar13 + (uVar17 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar11 + 1) < 0) {
        uVar14 = (uint)(uVar15 >> 0x20);
        if (uVar14 == (*(uint *)(puVar11 + 1) & 0x7fffffff)) {
          pDVar2 = *param_1;
          *(uint *)(puVar11 + 1) = uVar14;
          *puVar11 = pDVar2;
          return uVar15;
        }
        pcVar16 = "Attempting to initialize the wrong RID";
        uVar12 = 0xfc;
      }
      else {
        pcVar16 = "Initializing already initialized RID";
        uVar12 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar12,
                       "Method/function failed. Returning: nullptr",pcVar16,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar15;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* RendererDummy::TextureStorage::texture_allocate() */

void __thiscall RendererDummy::TextureStorage::texture_allocate(TextureStorage *this)

{
  long in_FS_OFFSET;
  DummyTexture *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (DummyTexture *)operator_new(8,"");
  *(undefined8 *)local_18 = 0;
  RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false>::make_rid
            ((RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false> *)(this + 0x18),
             &local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101100) */
/* WARNING: Removing unreachable block (ram,0x00101230) */
/* WARNING: Removing unreachable block (ram,0x001013a9) */
/* WARNING: Removing unreachable block (ram,0x0010123c) */
/* WARNING: Removing unreachable block (ram,0x00101246) */
/* WARNING: Removing unreachable block (ram,0x0010138b) */
/* WARNING: Removing unreachable block (ram,0x00101252) */
/* WARNING: Removing unreachable block (ram,0x0010125c) */
/* WARNING: Removing unreachable block (ram,0x0010136d) */
/* WARNING: Removing unreachable block (ram,0x00101268) */
/* WARNING: Removing unreachable block (ram,0x00101272) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */
/* WARNING: Removing unreachable block (ram,0x0010127e) */
/* WARNING: Removing unreachable block (ram,0x00101288) */
/* WARNING: Removing unreachable block (ram,0x00101331) */
/* WARNING: Removing unreachable block (ram,0x00101294) */
/* WARNING: Removing unreachable block (ram,0x0010129e) */
/* WARNING: Removing unreachable block (ram,0x00101313) */
/* WARNING: Removing unreachable block (ram,0x001012a6) */
/* WARNING: Removing unreachable block (ram,0x001012b0) */
/* WARNING: Removing unreachable block (ram,0x001012f8) */
/* WARNING: Removing unreachable block (ram,0x001012b8) */
/* WARNING: Removing unreachable block (ram,0x001012ce) */
/* WARNING: Removing unreachable block (ram,0x001012da) */
/* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */

String * vformat<unsigned_int,char_const*>(String *param_1,uint param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
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
  Variant::Variant(local_88,(uint)param_3);
  Variant::Variant(local_70,in_RCX);
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



/* RID_Alloc<RendererDummy::TextureStorage::DummyTexture*, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false>::~RID_Alloc
          (RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00101ea8;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererDummy::TextureStorage::DummyTexture*, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false>::~RID_Alloc
          (RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00101ea8;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
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
    *(code **)param_1 = Memory::free_static;
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



/* RendererDummy::TextureStorage::texture_free(RID) */

void __thiscall RendererDummy::TextureStorage::texture_free(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x34)) {
      puVar5 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x30)) * 0x10 +
               *(long *)(*(long *)(this + 0x20) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x30)) * 8));
      iVar1 = *(int *)(puVar5 + 1);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        plVar2 = (long *)*puVar5;
        if (plVar2 != (long *)0x0) {
          if (iVar1 < 0) {
            _err_print_error(&_LC27,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                             "Attempted to free an uninitialized or invalid RID",0,0);
          }
          else {
            *(undefined4 *)(puVar5 + 1) = 0xffffffff;
            uVar4 = *(int *)(this + 0x38) - 1;
            *(uint *)(this + 0x38) = uVar4;
            *(uint *)(*(long *)(*(long *)(this + 0x28) +
                               ((ulong)uVar4 / (ulong)*(uint *)(this + 0x30)) * 8) +
                     ((ulong)uVar4 % (ulong)*(uint *)(this + 0x30)) * 4) = (uint)param_2;
          }
          if (*plVar2 != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              memdelete<Image>((Image *)*plVar2);
              Memory::free_static(plVar2,false);
              return;
            }
          }
          Memory::free_static(plVar2,false);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("texture_free","servers/rendering/dummy/storage/texture_storage.h",0x4e,
                   "Parameter \"texture\" is null.",0,0);
  return;
}



/* RendererDummy::TextureStorage::texture_2d_get(RID) const */

long * RendererDummy::TextureStorage::texture_2d_get(long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x34))) {
    plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x30)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x20) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x30)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) {
        *param_1 = 0;
        lVar2 = *plVar4;
        if (lVar2 != 0) {
          *param_1 = lVar2;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *param_1 = 0;
          }
        }
        return param_1;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_2d_get","servers/rendering/dummy/storage/texture_storage.h",0x6b,
                   "Parameter \"t\" is null.",0,0);
  *param_1 = 0;
  return param_1;
}



/* RendererDummy::TextureStorage::texture_2d_initialize(RID, Ref<Image> const&) */

void __thiscall
RendererDummy::TextureStorage::texture_2d_initialize
          (TextureStorage *this,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  Image *pIVar4;
  undefined8 *puVar5;
  Image *pIVar6;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34))) {
    puVar5 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x30)) * 0x10 +
             *(long *)(*(long *)(this + 0x20) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x30)) * 8));
    iVar1 = *(int *)(puVar5 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*puVar5;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*param_3 + 0x198))(&local_28,(long *)*param_3,0);
        if (local_28 == (Object *)0x0) {
          pIVar6 = (Image *)*plVar2;
          if (pIVar6 != (Image *)0x0) {
            *plVar2 = 0;
            goto LAB_00101ca9;
          }
        }
        else {
          pIVar4 = (Image *)__dynamic_cast(local_28,&Object::typeinfo,&Image::typeinfo,0);
          pIVar6 = (Image *)*plVar2;
          if (pIVar6 != pIVar4) {
            *plVar2 = (long)pIVar4;
            if (pIVar4 == (Image *)0x0) {
              if (pIVar6 != (Image *)0x0) goto LAB_00101ca9;
            }
            else {
              cVar3 = RefCounted::reference();
              if (cVar3 == '\0') {
                *plVar2 = 0;
              }
              if (pIVar6 != (Image *)0x0) {
LAB_00101ca9:
                cVar3 = RefCounted::unreference();
                if (cVar3 != '\0') {
                  memdelete<Image>(pIVar6);
                }
              }
              if (local_28 == (Object *)0x0) goto LAB_00101c37;
            }
          }
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_28);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)local_28 + 0x140))(local_28);
              Memory::free_static(local_28,false);
            }
          }
        }
LAB_00101c37:
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00101d63;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("texture_2d_initialize","servers/rendering/dummy/storage/texture_storage.h",
                     0x55,"Parameter \"t\" is null.",0,0);
    return;
  }
LAB_00101d63:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererDummy::TextureStorage::DummyTexture*, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false>::~RID_Alloc
          (RID_Alloc<RendererDummy::TextureStorage::DummyTexture*,false> *this)

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


