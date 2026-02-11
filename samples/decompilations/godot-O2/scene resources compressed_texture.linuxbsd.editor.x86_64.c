
/* CompressedTextureLayered::get_format() const */

undefined4 __thiscall CompressedTextureLayered::get_format(CompressedTextureLayered *this)

{
  return *(undefined4 *)(this + 0x2f8);
}



/* CompressedTextureLayered::get_width() const */

undefined4 __thiscall CompressedTextureLayered::get_width(CompressedTextureLayered *this)

{
  return *(undefined4 *)(this + 0x2fc);
}



/* CompressedTextureLayered::get_height() const */

undefined4 __thiscall CompressedTextureLayered::get_height(CompressedTextureLayered *this)

{
  return *(undefined4 *)(this + 0x300);
}



/* CompressedTexture2D::has_alpha() const */

undefined8 CompressedTexture2D::has_alpha(void)

{
  return 0;
}



/* CompressedTexture3D::get_format() const */

undefined4 __thiscall CompressedTexture3D::get_format(CompressedTexture3D *this)

{
  return *(undefined4 *)(this + 0x2e0);
}



/* CompressedTexture3D::get_width() const */

undefined4 __thiscall CompressedTexture3D::get_width(CompressedTexture3D *this)

{
  return *(undefined4 *)(this + 0x2e4);
}



/* CompressedTexture3D::get_height() const */

undefined4 __thiscall CompressedTexture3D::get_height(CompressedTexture3D *this)

{
  return *(undefined4 *)(this + 0x2e8);
}



/* CompressedTexture3D::get_depth() const */

undefined4 __thiscall CompressedTexture3D::get_depth(CompressedTexture3D *this)

{
  return *(undefined4 *)(this + 0x2ec);
}



/* CompressedTexture3D::has_mipmaps() const */

CompressedTexture3D __thiscall CompressedTexture3D::has_mipmaps(CompressedTexture3D *this)

{
  return this[0x2f0];
}



/* CompressedTextureLayered::get_layers() const */

undefined4 __thiscall CompressedTextureLayered::get_layers(CompressedTextureLayered *this)

{
  return *(undefined4 *)(this + 0x304);
}



/* CompressedTextureLayered::has_mipmaps() const */

CompressedTextureLayered __thiscall
CompressedTextureLayered::has_mipmaps(CompressedTextureLayered *this)

{
  return this[0x308];
}



/* CompressedTextureLayered::get_layered_type() const */

undefined4 __thiscall CompressedTextureLayered::get_layered_type(CompressedTextureLayered *this)

{
  return *(undefined4 *)(this + 0x30c);
}



/* ResourceFormatLoaderCompressedTexture2D::handles_type(String const&) const */

void __thiscall
ResourceFormatLoaderCompressedTexture2D::handles_type
          (ResourceFormatLoaderCompressedTexture2D *this,String *param_1)

{
  String::operator==(param_1,"CompressedTexture2D");
  return;
}



/* ResourceFormatLoaderCompressedTexture3D::handles_type(String const&) const */

void __thiscall
ResourceFormatLoaderCompressedTexture3D::handles_type
          (ResourceFormatLoaderCompressedTexture3D *this,String *param_1)

{
  String::operator==(param_1,"CompressedTexture3D");
  return;
}



/* ResourceFormatLoaderCompressedTextureLayered::handles_type(String const&) const */

undefined8 __thiscall
ResourceFormatLoaderCompressedTextureLayered::handles_type
          (ResourceFormatLoaderCompressedTextureLayered *this,String *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = String::operator==(param_1,"CompressedTexture2DArray");
  if (cVar1 == '\0') {
    cVar1 = String::operator==(param_1,"CompressedCubemap");
    if (cVar1 == '\0') {
      uVar2 = String::operator==(param_1,"CompressedCubemapArray");
      return uVar2;
    }
  }
  return 1;
}



/* CompressedTexture2D::draw_rect(RID, Rect2 const&, bool, Color const&, bool) const */

void __thiscall
CompressedTexture2D::draw_rect
          (CompressedTexture2D *this,undefined8 param_2,undefined8 param_3,undefined1 param_4,
          undefined8 param_5,undefined1 param_6)

{
  long *plVar1;
  
  if (*(int *)(this + 0x2fc) == 0 && *(int *)(this + 0x300) == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0xf20))
            (plVar1,param_2,param_3,*(undefined8 *)(this + 0x2f0),param_4,param_5,param_6);
  return;
}



/* CompressedTexture2D::draw_rect_region(RID, Rect2 const&, Rect2 const&, Color const&, bool, bool)
   const */

uint CompressedTexture2D::draw_rect_region
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,uint param_6)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2fc) | *(uint *)(param_1 + 0x300);
  if (uVar1 != 0) {
    uVar1 = param_6 & 0xff;
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0xf28))
              (plVar2,param_2,param_3,*(undefined8 *)(param_1 + 0x2f0),param_4,param_5);
  }
  return uVar1;
}



/* CompressedTexture2D::draw(RID, Vector2 const&, Color const&, bool) const */

void __thiscall
CompressedTexture2D::draw
          (CompressedTexture2D *this,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined1 param_5)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x2fc) != 0 || *(int *)(this + 0x300) != 0) {
    plVar1 = (long *)RenderingServer::get_singleton();
    local_48 = *param_3;
    local_40 = CONCAT44((float)(int)((ulong)*(undefined8 *)(this + 0x2fc) >> 0x20),
                        (float)(int)*(undefined8 *)(this + 0x2fc));
    (**(code **)(*plVar1 + 0xf20))
              (plVar1,param_2,&local_48,*(undefined8 *)(this + 0x2f0),0,param_4,param_5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::set_path(String const&, bool) */

void CompressedTexture2D::set_path(String *param_1,bool param_2)

{
  long *plVar1;
  undefined7 in_register_00000031;
  
  if (*(long *)(param_1 + 0x2f0) != 0) {
    plVar1 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar1 + 0x1e8))
              (plVar1,*(undefined8 *)(param_1 + 0x2f0),CONCAT71(in_register_00000031,param_2));
  }
  Resource::set_path(param_1,param_2);
  return;
}



/* CompressedTexture2D::get_rid() const */

undefined8 __thiscall CompressedTexture2D::get_rid(CompressedTexture2D *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x2f0) != 0) {
    return *(undefined8 *)(this + 0x2f0);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
  *(undefined8 *)(this + 0x2f0) = uVar2;
  return *(undefined8 *)(this + 0x2f0);
}



/* CompressedTexture3D::set_path(String const&, bool) */

void CompressedTexture3D::set_path(String *param_1,bool param_2)

{
  long *plVar1;
  undefined7 in_register_00000031;
  
  if (*(long *)(param_1 + 0x2d8) != 0) {
    plVar1 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar1 + 0x1e8))
              (plVar1,*(undefined8 *)(param_1 + 0x2d8),CONCAT71(in_register_00000031,param_2));
  }
  Resource::set_path(param_1,param_2);
  return;
}



/* CompressedTexture3D::get_rid() const */

undefined8 __thiscall CompressedTexture3D::get_rid(CompressedTexture3D *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x2d8) != 0) {
    return *(undefined8 *)(this + 0x2d8);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
  *(undefined8 *)(this + 0x2d8) = uVar2;
  return *(undefined8 *)(this + 0x2d8);
}



/* CompressedTextureLayered::set_path(String const&, bool) */

void CompressedTextureLayered::set_path(String *param_1,bool param_2)

{
  long *plVar1;
  undefined7 in_register_00000031;
  
  if (*(long *)(param_1 + 0x2f0) != 0) {
    plVar1 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar1 + 0x1e8))
              (plVar1,*(undefined8 *)(param_1 + 0x2f0),CONCAT71(in_register_00000031,param_2));
  }
  Resource::set_path(param_1,param_2);
  return;
}



/* CompressedTextureLayered::get_rid() const */

undefined8 __thiscall CompressedTextureLayered::get_rid(CompressedTextureLayered *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x2f0) != 0) {
    return *(undefined8 *)(this + 0x2f0);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x1b0))(plVar1,*(undefined4 *)(this + 0x30c));
  *(undefined8 *)(this + 0x2f0) = uVar2;
  return *(undefined8 *)(this + 0x2f0);
}



/* CompressedTexture2D::get_image() const */

void CompressedTexture2D::get_image(void)

{
  long lVar1;
  long *plVar2;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x2f0) == 0) {
    *in_RDI = 0;
  }
  else {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x1c0))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture3D::get_data() const */

void CompressedTexture3D::get_data(void)

{
  long lVar1;
  long *plVar2;
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x2d8) == 0) {
    *(undefined8 *)(in_RDI + 8) = 0;
  }
  else {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x1d0))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTextureLayered::get_layer_data(int) const */

undefined8 * CompressedTextureLayered::get_layer_data(int param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int in_EDX;
  long *in_RSI;
  undefined4 in_register_0000003c;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  
  puVar5 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RSI[0x5e] == 0) {
    *puVar5 = 0;
    goto LAB_00100655;
  }
  lVar4 = *in_RSI;
  if (in_EDX < 0) {
LAB_001006a0:
    if (*(code **)(lVar4 + 0x1e8) == get_layers) {
      iVar2 = *(int *)((long)in_RSI + 0x304);
    }
    else {
      iVar2 = (**(code **)(lVar4 + 0x1e8))();
    }
LAB_001006b2:
    _err_print_index_error
              ("get_layer_data","scene/resources/compressed_texture.cpp",0x32b,(long)in_EDX,
               (long)iVar2,"p_layer","get_layers()","",false,false);
    *puVar5 = 0;
  }
  else {
    if (*(code **)(lVar4 + 0x1e8) == get_layers) {
      iVar2 = *(int *)((long)in_RSI + 0x304);
      if (iVar2 <= in_EDX) goto LAB_001006b2;
    }
    else {
      iVar2 = (**(code **)(lVar4 + 0x1e8))();
      if (iVar2 <= in_EDX) {
        lVar4 = *in_RSI;
        goto LAB_001006a0;
      }
    }
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x1c8))(puVar5,plVar3,in_RSI[0x5e],in_EDX);
  }
LAB_00100655:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::_requested_roughness(void*, String const&,
   RenderingServer::TextureDetectRoughnessChannel) */

void CompressedTexture2D::_requested_roughness
               (Object *param_1,undefined8 param_2,undefined4 param_3)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Object *)0x0) ||
     (local_28 = param_1, cVar2 = RefCounted::init_ref(), cVar2 == '\0')) {
    local_28 = (Object *)0x0;
  }
  if (request_roughness_callback == (code *)0x0) {
    _err_print_error("_requested_roughness","scene/resources/compressed_texture.cpp",0x6d,
                     "Parameter \"request_roughness_callback\" is null.",0,0);
  }
  else {
    (*request_roughness_callback)(&local_28,param_2,param_3);
  }
  if (((local_28 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_28, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_28), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::_requested_normal(void*) */

void CompressedTexture2D::_requested_normal(void *param_1)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (void *)0x0) ||
     (local_18 = (Object *)param_1, cVar2 = RefCounted::init_ref(), cVar2 == '\0')) {
    local_18 = (Object *)0x0;
  }
  if (request_normal_callback == (code *)0x0) {
    _err_print_error("_requested_normal","scene/resources/compressed_texture.cpp",0x74,
                     "Parameter \"request_normal_callback\" is null.",0,0);
  }
  else {
    (*request_normal_callback)(&local_18);
  }
  if (((local_18 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_18, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_18), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::_requested_3d(void*) */

void CompressedTexture2D::_requested_3d(void *param_1)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (void *)0x0) ||
     (local_18 = (Object *)param_1, cVar2 = RefCounted::init_ref(), cVar2 == '\0')) {
    local_18 = (Object *)0x0;
  }
  if (request_3d_callback == (code *)0x0) {
    _err_print_error("_requested_3d","scene/resources/compressed_texture.cpp",0x66,
                     "Parameter \"request_3d_callback\" is null.",0,0);
  }
  else {
    (*request_3d_callback)(&local_18);
  }
  if (((local_18 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_18, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_18), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::_validate_property(PropertyInfo&) const */

void CompressedTexture2D::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* CompressedTexture2D::CompressedTexture2D() */

void __thiscall CompressedTexture2D::CompressedTexture2D(CompressedTexture2D *this)

{
  Texture2D::Texture2D((Texture2D *)this);
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00110530;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  return;
}



/* CompressedTexture3D::_validate_property(PropertyInfo&) const */

void CompressedTexture3D::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* CompressedTexture3D::CompressedTexture3D() */

void __thiscall CompressedTexture3D::CompressedTexture3D(CompressedTexture3D *this)

{
  Resource::Resource((Resource *)this);
  *(code **)this = StringName::StringName;
  StringName::StringName((StringName *)(this + 0x240),"_get_format",false);
  this[0x248] = (CompressedTexture3D)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_get_width",false);
  this[0x260] = (CompressedTexture3D)0x0;
  *(undefined8 *)(this + 0x268) = 0;
  StringName::StringName((StringName *)(this + 0x270),"_get_height",false);
  this[0x278] = (CompressedTexture3D)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_get_depth",false);
  this[0x290] = (CompressedTexture3D)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_has_mipmaps",false);
  this[0x2a8] = (CompressedTexture3D)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_get_data",false);
  this[0x2c0] = (CompressedTexture3D)0x0;
  *(undefined1 (*) [16])(this + 0x2c8) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00110948;
  *(undefined8 *)(this + 0x2d8) = 0;
  this[0x2f0] = (CompressedTexture3D)0x0;
  *(undefined1 (*) [16])(this + 0x2e0) = (undefined1  [16])0x0;
  return;
}



/* CompressedTextureLayered::_validate_property(PropertyInfo&) const */

void CompressedTextureLayered::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* CompressedTextureLayered::CompressedTextureLayered(TextureLayered::LayeredType) */

void __thiscall
CompressedTextureLayered::CompressedTextureLayered
          (CompressedTextureLayered *this,undefined4 param_2)

{
  Resource::Resource((Resource *)this);
  *(code **)this = String::to_lower;
  StringName::StringName((StringName *)(this + 0x240),"_get_format",false);
  this[0x248] = (CompressedTextureLayered)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_get_layered_type",false);
  this[0x260] = (CompressedTextureLayered)0x0;
  *(undefined8 *)(this + 0x268) = 0;
  StringName::StringName((StringName *)(this + 0x270),"_get_width",false);
  this[0x278] = (CompressedTextureLayered)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_get_height",false);
  this[0x290] = (CompressedTextureLayered)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_get_layers",false);
  this[0x2a8] = (CompressedTextureLayered)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_has_mipmaps",false);
  this[0x2c0] = (CompressedTextureLayered)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  StringName::StringName((StringName *)(this + 0x2d0),"_get_layer_data",false);
  this[0x2d8] = (CompressedTextureLayered)0x0;
  *(undefined1 (*) [16])(this + 0x2e0) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00110d40;
  *(undefined8 *)(this + 0x2f0) = 0;
  this[0x308] = (CompressedTextureLayered)0x0;
  *(undefined4 *)(this + 0x30c) = param_2;
  *(undefined1 (*) [16])(this + 0x2f8) = (undefined1  [16])0x0;
  return;
}



/* ResourceFormatLoaderCompressedTexture2D::get_resource_type(String const&) const */

String * ResourceFormatLoaderCompressedTexture2D::get_resource_type(String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  cVar1 = String::operator==((String *)&local_48,"ctex");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_50);
  *(undefined8 *)param_1 = 0;
  if (cVar1 == '\0') {
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)param_1);
  }
  else {
    local_40 = 0x13;
    local_48 = "CompressedTexture2D";
    String::parse_latin1((StrRange *)param_1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture3D::~CompressedTexture3D() */

void __thiscall CompressedTexture3D::~CompressedTexture3D(CompressedTexture3D *this)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00110948;
  if (*(long *)(this + 0x2d8) != 0) {
    lVar1 = RenderingServer::get_singleton();
    if (lVar1 == 0) {
      _err_print_error("~CompressedTexture3D","scene/resources/compressed_texture.cpp",0x28d,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x2d0));
      Texture3D::~Texture3D((Texture3D *)this);
      return;
    }
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x11b0))(plVar2,*(undefined8 *)(this + 0x2d8));
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x2d0));
  bVar3 = StringName::configured != '\0';
  *(code **)this = StringName::StringName;
  if (bVar3) {
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100eda;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100eda;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100eda;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100eda;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100eda;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00100eda:
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  return;
}



/* CompressedTexture3D::~CompressedTexture3D() */

void __thiscall CompressedTexture3D::~CompressedTexture3D(CompressedTexture3D *this)

{
  ~CompressedTexture3D(this);
  operator_delete(this,0x2f8);
  return;
}



/* ResourceFormatLoaderCompressedTexture3D::get_resource_type(String const&) const */

String * ResourceFormatLoaderCompressedTexture3D::get_resource_type(String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  cVar1 = String::operator==((String *)&local_48,"ctex3d");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_50);
  *(undefined8 *)param_1 = 0;
  if (cVar1 == '\0') {
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)param_1);
  }
  else {
    local_40 = 0x13;
    local_48 = "CompressedTexture3D";
    String::parse_latin1((StrRange *)param_1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTextureLayered::~CompressedTextureLayered() */

void __thiscall CompressedTextureLayered::~CompressedTextureLayered(CompressedTextureLayered *this)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00110d40;
  if (*(long *)(this + 0x2f0) != 0) {
    lVar1 = RenderingServer::get_singleton();
    if (lVar1 == 0) {
      _err_print_error("~CompressedTextureLayered","scene/resources/compressed_texture.cpp",0x351,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x2e8));
      TextureLayered::~TextureLayered((TextureLayered *)this);
      return;
    }
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x11b0))(plVar2,*(undefined8 *)(this + 0x2f0));
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x2e8));
  bVar3 = StringName::configured != '\0';
  *(code **)this = String::to_lower;
  if (bVar3) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010116d;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010116d;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010116d;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010116d;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010116d;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010116d;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_0010116d:
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  return;
}



/* CompressedTextureLayered::~CompressedTextureLayered() */

void __thiscall CompressedTextureLayered::~CompressedTextureLayered(CompressedTextureLayered *this)

{
  ~CompressedTextureLayered(this);
  operator_delete(this,0x310);
  return;
}



/* ResourceFormatLoaderCompressedTextureLayered::get_resource_type(String const&) const */

String * ResourceFormatLoaderCompressedTextureLayered::get_resource_type(String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  cVar1 = String::operator==((String *)&local_48,"ctexarray");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_50);
  if (cVar1 == '\0') {
    String::get_extension();
    String::to_lower();
    cVar1 = String::operator==((String *)&local_48,"ccube");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_50);
    if (cVar1 == '\0') {
      String::get_extension();
      String::to_lower();
      cVar1 = String::operator==((String *)&local_48,"ccubearray");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref(local_50);
      *(undefined8 *)param_1 = 0;
      if (cVar1 == '\0') {
        local_40 = 0;
        local_48 = "";
        String::parse_latin1((StrRange *)param_1);
      }
      else {
        local_40 = 0x16;
        local_48 = "CompressedCubemapArray";
        String::parse_latin1((StrRange *)param_1);
      }
    }
    else {
      *(undefined8 *)param_1 = 0;
      local_48 = "CompressedCubemap";
      local_40 = 0x11;
      String::parse_latin1((StrRange *)param_1);
    }
  }
  else {
    *(undefined8 *)param_1 = 0;
    local_48 = "CompressedTexture2DArray";
    local_40 = 0x18;
    String::parse_latin1((StrRange *)param_1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::~CompressedTexture2D() */

void __thiscall CompressedTexture2D::~CompressedTexture2D(CompressedTexture2D *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00110530;
  if (*(long *)(this + 0x2f0) != 0) {
    lVar3 = RenderingServer::get_singleton();
    if (lVar3 == 0) {
      _err_print_error("~CompressedTexture2D","scene/resources/compressed_texture.cpp",0x1d0,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      if (*(long *)(this + 0x308) != 0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          pOVar1 = *(Object **)(this + 0x308);
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x2e8));
      Texture2D::~Texture2D((Texture2D *)this);
      return;
    }
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x11b0))(plVar4);
  }
  if (*(long *)(this + 0x308) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x308);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x2e8));
  bVar5 = StringName::configured != '\0';
  *(undefined **)this = &Texture3D::vtable;
  if (bVar5) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010150b;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010150b;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010150b;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010150b;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010150b;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010150b;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_0010150b:
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  return;
}



/* CompressedTexture2D::~CompressedTexture2D() */

void __thiscall CompressedTexture2D::~CompressedTexture2D(CompressedTexture2D *this)

{
  ~CompressedTexture2D(this);
  operator_delete(this,0x310);
  return;
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



/* CompressedTexture3D::get_load_path() const */

void CompressedTexture3D::get_load_path(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x2d0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x2d0));
  }
  return;
}



/* CompressedTexture2D::get_load_path() const */

void CompressedTexture2D::get_load_path(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x2e8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x2e8));
  }
  return;
}



/* CompressedTextureLayered::get_load_path() const */

void CompressedTextureLayered::get_load_path(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x2e8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x2e8));
  }
  return;
}



/* ResourceFormatLoaderCompressedTexture3D::get_recognized_extensions(List<String,
   DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderCompressedTexture3D::get_recognized_extensions
          (ResourceFormatLoaderCompressedTexture3D *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "ctex3d";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  if (*(long *)param_1 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (local_40 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)&local_40);
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
  if (*plVar1 == 0) {
    *plVar1 = (long)this_00;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderCompressedTexture2D::get_recognized_extensions(List<String,
   DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderCompressedTexture2D::get_recognized_extensions
          (ResourceFormatLoaderCompressedTexture2D *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC31;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  if (*(long *)param_1 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (local_40 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)&local_40);
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
  if (*plVar1 == 0) {
    *plVar1 = (long)this_00;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* ResourceFormatLoaderCompressedTextureLayered::get_recognized_extensions(List<String,
   DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderCompressedTextureLayered::get_recognized_extensions
          (ResourceFormatLoaderCompressedTextureLayered *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *pCVar3;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_40 = 9;
  local_48 = "ctexarray";
  String::parse_latin1((StrRange *)&local_50);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
  if (local_50 != 0) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_50);
  }
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar3 + 8) = 0;
  *(long **)(pCVar3 + 0x18) = plVar1;
  *(long *)(pCVar3 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
  }
  plVar1[1] = (long)pCVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_50 = 0;
  local_48 = "ccube";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_50);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
  if (local_50 != 0) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_50);
  }
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar3 + 8) = 0;
  *(long **)(pCVar3 + 0x18) = plVar1;
  *(long *)(pCVar3 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
  }
  plVar1[1] = (long)pCVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_50 = 0;
  local_48 = "ccubearray";
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_50);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
  if (local_50 != 0) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_50);
  }
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar3 + 8) = 0;
  *(long **)(pCVar3 + 0x18) = plVar1;
  *(long *)(pCVar3 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
  }
  plVar1[1] = (long)pCVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture::initialize_class() [clone .part.0] */

void Texture::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
      if ((code *)PTR__bind_methods_00116008 != RefCounted::_bind_methods) {
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
      Resource::_bind_methods();
    }
    Resource::initialize_class()::initialized = '\x01';
  }
  local_58 = "Resource";
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Texture";
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
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CompressedTextureLayered::_bind_methods() */

void CompressedTextureLayered::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  CowData<char32_t> local_78 [16];
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC55;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)&_LC56,(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00111138;
  *(code **)(pMVar4 + 0x58) = load;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 1;
  local_b0 = 0;
  local_a8 = "CompressedTextureLayered";
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_load_path",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00111198;
  *(code **)(pMVar4 + 0x58) = get_load_path;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "CompressedTextureLayered";
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "*.ctex";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "load_path";
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,4,(StrRange *)&local_d0,0xd,(StrRange *)&local_c8,6,&local_c0
            );
  local_a8 = "CompressedTextureLayered";
  local_d8 = 0;
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CompressedTextureLayered::initialize_class() [clone .part.0] */

void CompressedTextureLayered::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (TextureLayered::initialize_class()::initialized == '\0') {
    if (Texture::initialize_class()::initialized == '\0') {
      Texture::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Texture";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "TextureLayered";
    local_60 = 0;
    local_40 = 0xe;
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
    if ((code *)PTR__bind_methods_00116010 != Resource::_bind_methods) {
      TextureLayered::_bind_methods();
    }
    TextureLayered::initialize_class()::initialized = '\x01';
  }
  local_48 = "TextureLayered";
  local_58 = 0;
  local_40 = 0xe;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "CompressedTextureLayered";
  local_60 = 0;
  local_40 = 0x18;
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
  initialize_class()::initialized = 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CompressedTexture2D::_bind_methods() */

void CompressedTexture2D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e8;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC55;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)&_LC56,(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00111138;
  *(code **)(pMVar4 + 0x58) = load;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 1;
  local_b0 = 0;
  local_a8 = "CompressedTexture2D";
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_load_path",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00111198;
  *(code **)(pMVar4 + 0x58) = get_load_path;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "CompressedTexture2D";
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_98 = "*.ctex";
  local_c8 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "load_path";
  local_d0 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,4);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 0xd;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == (long *)local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = (long *)local_a8;
      }
      goto LAB_00102d87;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00102d87:
  local_e8 = (CowData<char32_t> *)&local_78;
  local_a8 = "CompressedTexture2D";
  local_d8 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CompressedTexture3D::_bind_methods() */

void CompressedTexture3D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  CowData<char32_t> local_78 [16];
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC55;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)&_LC56,(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00111138;
  *(code **)(pMVar4 + 0x58) = load;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 1;
  local_b0 = 0;
  local_a8 = "CompressedTexture3D";
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_load_path",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00111198;
  *(code **)(pMVar4 + 0x58) = get_load_path;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "CompressedTexture3D";
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "*.ctex";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "load_path";
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,4,(StrRange *)&local_d0,0xd,(StrRange *)&local_c8,6,&local_c0
            );
  local_a8 = "CompressedTexture3D";
  local_d8 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  size_t __n;
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar3 = 0x10;
  if (__n != 0) {
    uVar3 = __n - 1 | __n - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    uVar3 = (uVar3 | uVar3 >> 0x20) + 0x11;
  }
  puVar2 = (undefined8 *)Memory::alloc_static(uVar3,false);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = __n;
    memcpy(puVar2 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar2 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Ref<Image>::TEMPNAMEPLACEHOLDERVALUE(Ref<Image> const&) [clone .isra.0] */

void __thiscall Ref<Image>::operator=(Ref<Image> *this,Ref *param_1)

{
  Image *pIVar1;
  char cVar2;
  
  pIVar1 = *(Image **)this;
  if (pIVar1 != (Image *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pIVar1 != (Image *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<Image>(pIVar1);
        return;
      }
    }
  }
  return;
}



/* CompressedTexture2D::is_pixel_opaque(int, int) const */

undefined8 CompressedTexture2D::is_pixel_opaque(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_var;
  undefined8 uVar4;
  long *plVar5;
  Ref *pRVar6;
  BitMap *this;
  BitMap *pBVar7;
  undefined4 in_register_0000003c;
  long *plVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  long *local_60;
  Ref *local_58;
  Object *local_50;
  undefined8 local_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar8[0x61] == 0) {
    if (*(code **)(*plVar8 + 0x210) == get_image) {
      if (plVar8[0x5e] != 0) {
        plVar5 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar5 + 0x1c0))(&local_60,plVar5,plVar8[0x5e]);
        goto LAB_001037b0;
      }
      local_60 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar8 + 0x210))(&local_60,plVar8);
LAB_001037b0:
      if (local_60 != (long *)0x0) {
        cVar1 = Image::is_compressed();
        if (cVar1 != '\0') {
          pRVar6 = (Ref *)0x0;
          (**(code **)(*local_60 + 0x198))(&local_50,local_60,0);
          local_58 = (Ref *)0x0;
          if (local_50 != (Object *)0x0) {
            pRVar6 = (Ref *)__dynamic_cast(local_50,&Object::typeinfo,&Image::typeinfo,0);
            if (pRVar6 != (Ref *)0x0) {
              local_48 = 0;
              local_58 = pRVar6;
              cVar1 = RefCounted::reference();
              if (cVar1 == '\0') {
                local_58 = (Ref *)0x0;
                pRVar6 = (Ref *)0x0;
              }
              Ref<Image>::unref((Ref<Image> *)&local_48);
              if (local_50 == (Object *)0x0) goto LAB_00103890;
            }
            cVar1 = RefCounted::unreference();
            if ((cVar1 != '\0') && (cVar1 = predelete_handler(local_50), cVar1 != '\0')) {
              (**(code **)(*(long *)local_50 + 0x140))();
              Memory::free_static(local_50,false);
            }
          }
LAB_00103890:
          Image::decompress();
          Ref<Image>::operator=((Ref<Image> *)&local_60,pRVar6);
          Ref<Image>::unref((Ref<Image> *)&local_58);
        }
        this = (BitMap *)operator_new(600,"");
        BitMap::BitMap(this);
        postinitialize_handler((Object *)this);
        cVar1 = RefCounted::init_ref();
        if (cVar1 == '\0') {
          pOVar9 = (Object *)plVar8[0x61];
          if (pOVar9 != (Object *)0x0) {
            plVar8[0x61] = 0;
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
              cVar1 = predelete_handler(pOVar9);
              this = (BitMap *)0x0;
              if (cVar1 != '\0') goto LAB_001039e7;
            }
            goto LAB_0010390b;
          }
        }
        else {
          pOVar9 = (Object *)plVar8[0x61];
          pBVar7 = (BitMap *)pOVar9;
          if (this != (BitMap *)pOVar9) {
            plVar8[0x61] = (long)this;
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
              plVar8[0x61] = 0;
            }
            pBVar7 = this;
            if (((pOVar9 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
               (cVar1 = predelete_handler(pOVar9), cVar1 != '\0')) {
LAB_001039e7:
              (**(code **)(*(long *)pOVar9 + 0x140))();
              Memory::free_static(pOVar9,false);
              pBVar7 = this;
              if (this == (BitMap *)0x0) goto LAB_0010390b;
            }
          }
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pBVar7), cVar1 != '\0')) {
            (**(code **)(*(long *)pBVar7 + 0x140))(pBVar7);
            Memory::free_static(pBVar7,false);
          }
LAB_0010390b:
          pOVar9 = (Object *)plVar8[0x61];
        }
        BitMap::create_from_image_alpha((Ref *)pOVar9,_LC66);
      }
    }
    Ref<Image>::unref((Ref<Image> *)&local_60);
    if (plVar8[0x61] != 0) goto LAB_0010367b;
  }
  else {
LAB_0010367b:
    iVar2 = BitMap::get_size();
    BitMap::get_size();
    if ((iVar2 != 0) && (extraout_var != 0)) {
      iVar3 = (param_2 * iVar2) / *(int *)((long)plVar8 + 0x2fc);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      if (iVar3 < 0) {
        iVar2 = 0;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = BitMap::get_bit((int)plVar8[0x61],iVar2);
        return uVar4;
      }
      goto LAB_00103a28;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103a28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Image>>::_copy_on_write(CowData<Ref<Image>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  int iVar2;
  ulong uVar3;
  CowData<unsigned_char> *pCVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  CowData<unsigned_char> *pCVar7;
  long lVar8;
  
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
LAB_00103d16:
    lVar8 = 0;
    pCVar4 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    if (lVar8 == 0) goto LAB_00103d16;
    uVar3 = lVar8 - 1U | lVar8 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar4 = (CowData<unsigned_char> *)((uVar3 | uVar3 >> 0x20) + 1);
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  pCVar7 = (CowData<unsigned_char> *)(uVar3 | uVar3 >> 0x20);
  pCVar1 = pCVar7 + 1;
  if (param_1 <= lVar8) {
    if ((pCVar1 != pCVar4) && (iVar2 = _realloc(this,(long)pCVar1), iVar2 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_0010d3aa();
    return;
  }
  if (pCVar1 != pCVar4) {
    if (lVar8 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar7 + 0x11),false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8 **)this = puVar6;
      goto LAB_00103c6c;
    }
    pCVar7 = this;
    iVar2 = _realloc(this,(long)pCVar1);
    if (iVar2 != 0) {
      return;
    }
  }
  puVar6 = *(undefined8 **)this;
  if (puVar6 == (undefined8 *)0x0) {
    resize<false>((long)pCVar7);
    return;
  }
LAB_00103c6c:
  puVar6[-1] = param_1;
  return;
}



/* Vector<Ref<Image> >::push_back(Ref<Image>) [clone .isra.0] */

void __thiscall Vector<Ref<Image>>::push_back(Vector<Ref<Image>> *this,long *param_2)

{
  long *plVar1;
  Image *pIVar2;
  Image *pIVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(this + 8));
      pIVar2 = (Image *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pIVar3 = (Image *)*plVar1;
      if (pIVar2 == pIVar3) {
        return;
      }
      *plVar1 = (long)pIVar2;
      if ((pIVar2 != (Image *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pIVar3 == (Image *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      memdelete<Image>(pIVar3);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* CompressedTexture2D::load_image_from_file(Ref<FileAccess>, int) */

CompressedTexture2D * __thiscall
CompressedTexture2D::load_image_from_file(CompressedTexture2D *this,undefined8 *param_2,int param_3)

{
  long *plVar1;
  code *pcVar2;
  Image *pIVar3;
  Ref *pRVar4;
  undefined8 *puVar5;
  long lVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  size_t __n;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  int local_b4;
  long local_a0;
  Image *local_80;
  Ref *local_78;
  undefined8 *local_70;
  Ref *local_68;
  long local_60;
  Image *local_58;
  void *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = (**(code **)(*(long *)*param_2 + 0x1f0))();
  uVar8 = (**(code **)(*(long *)*param_2 + 0x1e8))();
  uVar19 = (uint)uVar8;
  uVar9 = (**(code **)(*(long *)*param_2 + 0x1e8))();
  uVar17 = (uint)uVar9;
  uVar11 = (**(code **)(*(long *)*param_2 + 0x1f0))();
  local_b4 = (**(code **)(*(long *)*param_2 + 0x1f0))();
  if (1 < iVar10 - 1U) {
    if (iVar10 == 3) {
      uVar11 = (**(code **)(*(long *)*param_2 + 0x1f0))();
      uVar18 = (ulong)uVar11;
      if (0 < param_3) {
        uVar11 = (uint)uVar8;
        if ((uint)uVar8 < (uint)uVar9) {
          uVar11 = uVar17;
        }
        if (param_3 < (int)uVar11) {
          plVar1 = (long *)*param_2;
          pcVar2 = *(code **)(*plVar1 + 0x1b8);
          lVar15 = (**(code **)(*plVar1 + 0x1c8))(plVar1);
          (*pcVar2)(plVar1,uVar18 + lVar15);
          *(undefined8 *)this = 0;
          goto LAB_00103f66;
        }
      }
      local_50[0] = (void *)0x0;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,uVar18);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
      (**(code **)(*(long *)*param_2 + 0x220))((long *)*param_2,local_50[0],uVar18);
      local_78 = (Ref *)0x0;
      (*Image::basis_universal_unpacker)((Ref<Image> *)&local_68,&local_58);
      Ref<Image>::operator=((Ref<Image> *)&local_78,local_68);
      Ref<Image>::unref((Ref<Image> *)&local_68);
      pRVar4 = local_78;
      if ((local_78 == (Ref *)0x0) ||
         ((cVar7 = Image::is_empty(), cVar7 != '\0' && (cVar7 = Image::is_empty(), cVar7 != '\0'))))
      {
        _err_print_error("load_image_from_file","scene/resources/compressed_texture.cpp",0x1a0,
                         "Condition \"img.is_null() || img->is_empty()\" is true. Returning: Ref<Image>()"
                         ,0,0);
        *(undefined8 *)this = 0;
      }
      else {
        Image::get_format();
        *(undefined8 *)this = 0;
        Ref<Image>::operator=((Ref<Image> *)this,pRVar4);
      }
      Ref<Image>::unref((Ref<Image> *)&local_78);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_50);
    }
    else {
      if ((iVar10 == 0) &&
         (iVar10 = Image::get_image_data_size(uVar19,uVar17,local_b4,uVar11 != 0),
         uVar11 != 0xffffffff)) {
        uVar22 = 0;
        do {
          iVar13 = Image::get_image_mipmap_offset_and_dimensions
                             (uVar19,uVar17,local_b4,uVar22,&local_80,&local_78);
          if (((uVar11 <= uVar22) || (param_3 < 1)) ||
             ((param_3 <= (int)local_80 && (param_3 <= (int)local_78)))) {
            local_50[0] = (void *)0x0;
            CowData<unsigned_char>::resize<false>
                      ((CowData<unsigned_char> *)local_50,(long)(iVar10 - iVar13));
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
            if (local_50[0] == (void *)0x0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(undefined8 *)((long)local_50[0] + -8);
            }
            (**(code **)(*(long *)*param_2 + 0x220))((long *)*param_2,local_50[0],uVar16);
            Image::create_from_data
                      ((Ref<Image> *)&local_68,(ulong)local_80 & 0xffffffff,
                       (ulong)local_78 & 0xffffffff,uVar11 != uVar22,local_b4,&local_58);
            *(undefined8 *)this = 0;
            Ref<Image>::operator=((Ref<Image> *)this,local_68);
            Ref<Image>::unref((Ref<Image> *)&local_68);
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_50);
            goto LAB_00103f66;
          }
          if (iVar13 != 0) {
            plVar1 = (long *)*param_2;
            lVar15 = *plVar1;
            pcVar2 = *(code **)(lVar15 + 0x1b8);
            lVar15 = (**(code **)(lVar15 + 0x1c8))();
            (*pcVar2)(plVar1,lVar15 + iVar13);
          }
          bVar26 = uVar11 != uVar22;
          uVar22 = uVar22 + 1;
        } while (bVar26);
      }
      *(undefined8 *)this = 0;
    }
LAB_00103f66:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return this;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_70 = (undefined8 *)0x0;
  if (uVar11 == 0xffffffff) {
    local_80 = (Image *)0x0;
    Ref<Image>::instantiate<>((Ref<Image> *)&local_80);
    local_a0 = 0;
  }
  else {
    bVar26 = true;
    local_a0 = 0;
    uVar22 = uVar17;
    uVar24 = 0;
    uVar20 = uVar19;
    do {
      uVar12 = (**(code **)(*(long *)*param_2 + 0x1f0))();
      uVar18 = (ulong)uVar12;
      uVar12 = (int)uVar20 >> 1;
      uVar23 = (int)uVar22 >> 1;
      if ((param_3 < 1) || (uVar11 - 1 <= uVar24)) {
LAB_0010414d:
        local_60 = 0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,uVar18);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
        (**(code **)(*(long *)*param_2 + 0x220))((long *)*param_2,local_60,uVar18);
        local_80 = (Image *)0x0;
        pcVar2 = Image::png_unpacker;
        if (iVar10 != 1) {
          pcVar2 = Image::webp_unpacker;
        }
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)((Ref<Image> *)&local_58,&local_68);
          Ref<Image>::operator=((Ref<Image> *)&local_80,(Ref *)local_58);
          Ref<Image>::unref((Ref<Image> *)&local_58);
          pIVar3 = local_80;
          if ((local_80 != (Image *)0x0) &&
             ((cVar7 = Image::is_empty(), cVar7 == '\0' ||
              (cVar7 = Image::is_empty(), cVar7 == '\0')))) {
            if (bVar26) {
              local_b4 = Image::get_format();
            }
            else {
              iVar13 = Image::get_format();
              if (iVar13 != local_b4) {
                Image::convert(pIVar3,local_b4);
              }
            }
            Image::get_data();
            if (local_50[0] == (void *)0x0) {
              CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_50);
            }
            else {
              local_a0 = local_a0 + *(long *)((long)local_50[0] + -8);
              CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_50);
            }
            local_58 = pIVar3;
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
              local_58 = (Image *)0x0;
              Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)&local_78,(Ref<Image> *)&local_58)
              ;
              if (uVar12 == 0) {
                uVar12 = 1;
              }
              if (uVar23 == 0) {
                uVar23 = 1;
              }
LAB_001040e9:
              cVar7 = RefCounted::unreference();
              uVar22 = uVar23;
              uVar20 = uVar12;
            }
            else {
              Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)&local_78,(Ref<Image> *)&local_58)
              ;
              if (uVar12 == 0) {
                uVar12 = 1;
              }
              if (uVar23 == 0) {
                uVar23 = 1;
              }
              cVar7 = RefCounted::unreference();
              if (cVar7 == '\0') goto LAB_001040e9;
              memdelete<Image>(pIVar3);
              cVar7 = RefCounted::unreference();
              uVar22 = uVar23;
              uVar20 = uVar12;
            }
            if (cVar7 != '\0') {
              memdelete<Image>(pIVar3);
            }
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
            bVar26 = false;
            goto LAB_00104106;
          }
        }
        _err_print_error("load_image_from_file","scene/resources/compressed_texture.cpp",0x158,
                         "Condition \"img.is_null() || img->is_empty()\" is true. Returning: Ref<Image>()"
                         ,0,0);
        *(undefined8 *)this = 0;
        Ref<Image>::unref((Ref<Image> *)&local_80);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        goto LAB_001042db;
      }
      if (uVar22 <= uVar20) {
        uVar22 = uVar20;
      }
      if ((int)uVar22 <= param_3) goto LAB_0010414d;
      plVar1 = (long *)*param_2;
      uVar20 = uVar12;
      if (uVar12 == 0) {
        uVar20 = 1;
      }
      uVar22 = uVar23;
      if (uVar23 == 0) {
        uVar22 = 1;
      }
      pcVar2 = *(code **)(*plVar1 + 0x1b8);
      lVar15 = (**(code **)(*plVar1 + 0x1c8))(plVar1);
      (*pcVar2)(plVar1,uVar18 + lVar15);
LAB_00104106:
      puVar5 = local_70;
      bVar25 = uVar24 != uVar11;
      uVar24 = uVar24 + 1;
    } while (bVar25);
    local_80 = (Image *)0x0;
    Ref<Image>::instantiate<>((Ref<Image> *)&local_80);
    if (puVar5 != (undefined8 *)0x0) {
      if (puVar5[-1] == 1) {
        Ref<Image>::operator=((Ref<Image> *)&local_80,(Ref *)*puVar5);
        *(undefined8 *)this = 0;
        Ref<Image>::operator=((Ref<Image> *)this,(Ref *)local_80);
      }
      else {
        local_60 = 0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,local_a0);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
        lVar6 = local_60;
        lVar15 = puVar5[-1];
        if (lVar15 < 1) goto LAB_001047ee;
        lVar21 = 0;
        iVar10 = 0;
        do {
          Image::get_data();
          if (local_50[0] == (void *)0x0) {
            __n = 0;
            iVar13 = iVar10;
          }
          else {
            iVar13 = (int)*(undefined8 *)((long)local_50[0] + -8);
            __n = (size_t)iVar13;
            iVar13 = iVar13 + iVar10;
          }
          lVar21 = lVar21 + 1;
          memcpy((void *)(iVar10 + lVar6),local_50[0],__n);
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_50);
          pIVar3 = local_80;
          lVar15 = puVar5[-1];
          iVar10 = iVar13;
        } while (lVar21 < lVar15);
        if (lVar15 < 1) goto LAB_001047ee;
        uVar14 = Image::get_format();
        Image::set_data(pIVar3,uVar19,uVar17,1,uVar14,&local_68);
        *(undefined8 *)this = 0;
        Ref<Image>::operator=((Ref<Image> *)this,(Ref *)pIVar3);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
      }
      Ref<Image>::unref((Ref<Image> *)&local_80);
LAB_001042db:
      CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_70);
      goto LAB_00103f66;
    }
  }
  local_60 = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,local_a0);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
  lVar15 = 0;
LAB_001047ee:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar15,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CompressedTexture2D::_load_data(String const&, int&, int&, Ref<Image>&, bool&, bool&, bool&,
   int&, int) */

undefined8 __thiscall
CompressedTexture2D::_load_data
          (CompressedTexture2D *this,String *param_1,int *param_2,int *param_3,Ref *param_4,
          bool *param_5,bool *param_6,bool *param_7,int *param_8,int param_9)

{
  Object *pOVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  Object *local_68;
  undefined8 local_60;
  Object *local_58;
  Ref *local_50;
  char local_44;
  char local_43;
  char local_42;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x308) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    pOVar1 = *(Object **)(this + 0x308);
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))();
      Memory::free_static(pOVar1,false);
    }
  }
  *(undefined8 *)(this + 0x308) = 0;
  if (*(long *)param_4 == 0) {
    uVar7 = 0x1f;
    _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x26,
                     "Condition \"image.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    goto LAB_00104956;
  }
  FileAccess::open((String *)&local_68,(int)param_1,(Error *)0x1);
  if (local_68 == (Object *)0x0) {
    local_58 = (Object *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Unable to open file: %s.");
    vformat<String>((CowData<char32_t> *)&local_50,(String *)&local_60,
                    (CowData<char32_t> *)&local_58);
    _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x29,
                     "Condition \"f.is_null()\" is true. Returning: ERR_CANT_OPEN",
                     (CowData<char32_t> *)&local_50,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_00104c46:
    uVar7 = 0x13;
  }
  else {
    (**(code **)(*(long *)local_68 + 0x220))(local_68,&local_44,4);
    if ((((local_44 == 'G') && (local_43 == 'S')) && (local_42 == 'T')) && (local_41 == '2')) {
      uVar5 = (**(code **)(*(long *)local_68 + 0x1f0))();
      if (uVar5 < 2) {
        iVar6 = (**(code **)(*(long *)local_68 + 0x1f0))();
        *param_2 = iVar6;
        iVar6 = (**(code **)(*(long *)local_68 + 0x1f0))();
        *param_3 = iVar6;
        uVar5 = (**(code **)(*(long *)local_68 + 0x1f0))();
        iVar6 = (**(code **)(*(long *)local_68 + 0x1f0))();
        *param_8 = iVar6;
        (**(code **)(*(long *)local_68 + 0x1f0))();
        (**(code **)(*(long *)local_68 + 0x1f0))();
        (**(code **)(*(long *)local_68 + 0x1f0))();
        pOVar1 = local_68;
        bVar4 = false;
        bVar2 = (byte)(uVar5 >> 0x18);
        if (request_3d_callback != 0) {
          bVar4 = (bool)(bVar2 & 1);
        }
        *param_5 = bVar4;
        bVar4 = false;
        if (request_roughness_callback != 0) {
          bVar4 = (bool)(bVar2 >> 3 & 1);
        }
        *param_7 = bVar4;
        bVar4 = false;
        if (request_normal_callback != 0) {
          bVar4 = (bool)(bVar2 >> 2 & 1);
        }
        *param_6 = bVar4;
        iVar6 = 0;
        if ((uVar5 & 0x400000) != 0) {
          iVar6 = param_9;
        }
        if (local_68 == (Object *)0x0) {
LAB_00104aaf:
          local_58 = (Object *)0x0;
          load_image_from_file((CompressedTexture2D *)&local_50,&local_58,iVar6);
          Ref<Image>::operator=((Ref<Image> *)param_4,local_50);
          Ref<Image>::unref((Ref<Image> *)&local_50);
        }
        else {
          local_58 = local_68;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') goto LAB_00104aaf;
          load_image_from_file((CompressedTexture2D *)&local_50,&local_58,iVar6);
          Ref<Image>::operator=((Ref<Image> *)param_4,local_50);
          Ref<Image>::unref((Ref<Image> *)&local_50);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
        if ((*(long *)param_4 == 0) || (cVar3 = Image::is_empty(), cVar3 != '\0'))
        goto LAB_00104c46;
        uVar7 = 0;
        goto LAB_0010493f;
      }
      _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x34,
                       "Method/function failed. Returning: ERR_FILE_CORRUPT",
                       "Compressed texture file is too new.",0,0);
    }
    else {
      _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x2e,
                       "Method/function failed. Returning: ERR_FILE_CORRUPT",
                       "Compressed texture file is corrupt (Bad header).",0,0);
    }
    uVar7 = 0x10;
  }
LAB_0010493f:
  if (((local_68 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
    (**(code **)(*(long *)local_68 + 0x140))(local_68);
    Memory::free_static(local_68,false);
  }
LAB_00104956:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* CompressedTexture2D::load(String const&) */

int __thiscall CompressedTexture2D::load(CompressedTexture2D *this,String *param_1)

{
  Image *pIVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Resource *this_00;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  Resource *pRVar8;
  Image *pIVar9;
  int iVar10;
  long in_FS_OFFSET;
  byte bVar11;
  bool local_4f;
  bool local_4e;
  bool local_4d;
  int local_4c;
  int local_48;
  int local_44;
  Image *local_40;
  long local_38;
  long local_30;
  
  bVar11 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (Image *)0x0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar8 = this_00;
  for (lVar7 = 0x4d; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined8 *)pRVar8 = 0;
    pRVar8 = pRVar8 + (ulong)bVar11 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(undefined **)this_00 = &ResourceFormatLoader::vtable;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  pIVar1 = local_40;
  if (cVar2 == '\0') {
    if (local_40 != (Image *)0x0) {
      local_40 = (Image *)0x0;
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<Image>(pIVar1);
      }
    }
  }
  else {
    pIVar9 = local_40;
    if (this_00 != (Resource *)local_40) {
      local_40 = (Image *)this_00;
      cVar2 = RefCounted::reference();
      pIVar9 = (Image *)this_00;
      if (cVar2 == '\0') {
        local_40 = (Image *)0x0;
        if (pIVar1 != (Image *)0x0) {
          cVar2 = RefCounted::unreference();
joined_r0x00105113:
          if (cVar2 != '\0') {
            memdelete<Image>(pIVar1);
          }
        }
      }
      else if (pIVar1 != (Image *)0x0) {
        cVar2 = RefCounted::unreference();
        goto joined_r0x00105113;
      }
    }
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar9);
    }
  }
  iVar3 = _load_data(this,param_1,&local_4c,&local_48,(Ref *)&local_40,&local_4f,&local_4e,&local_4d
                     ,&local_44,0);
  if (iVar3 != 0) goto LAB_00104f83;
  if (*(long *)(this + 0x2f0) == 0) {
    plVar5 = (long *)RenderingServer::get_singleton();
    uVar6 = (**(code **)(*plVar5 + 0x158))(plVar5,(Ref *)&local_40);
    *(undefined8 *)(this + 0x2f0) = uVar6;
  }
  else {
    plVar5 = (long *)RenderingServer::get_singleton();
    uVar6 = (**(code **)(*plVar5 + 0x158))(plVar5,(Ref *)&local_40);
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(this + 0x2f0),uVar6);
  }
  if (local_4c != 0 || local_48 != 0) {
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x1e0))(plVar5,*(undefined8 *)(this + 0x2f0),local_4c,local_48);
  }
  *(ulong *)(this + 0x2fc) = CONCAT44(local_48,local_4c);
  if (*(long *)(this + 0x2e8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x2e8),(CowData *)param_1);
  }
  uVar4 = Image::get_format();
  *(undefined4 *)(this + 0x2f8) = uVar4;
  Resource::get_path();
  if ((local_38 == 0) || (iVar10 = (int)*(undefined8 *)(local_38 + -8), iVar10 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
LAB_00105065:
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(this + 0x2f0),param_1);
    if (local_4f != false) goto LAB_00104ef7;
LAB_0010508b:
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x200))(plVar5,*(undefined8 *)(this + 0x2f0),0,0);
    if (local_4d == false) goto LAB_001050b2;
LAB_00104f24:
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x210))(plVar5,*(undefined8 *)(this + 0x2f0),_requested_roughness,this);
    if (local_4e != false) goto LAB_00104f51;
LAB_001050d9:
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(this + 0x2f0),0,0);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if (iVar10 == 1) goto LAB_00105065;
    if (local_4f == false) goto LAB_0010508b;
LAB_00104ef7:
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x200))(plVar5,*(undefined8 *)(this + 0x2f0),_requested_3d,this);
    if (local_4d != false) goto LAB_00104f24;
LAB_001050b2:
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x210))(plVar5,*(undefined8 *)(this + 0x2f0),0,0);
    if (local_4e == false) goto LAB_001050d9;
LAB_00104f51:
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(this + 0x2f0),_requested_normal,this);
  }
  Object::notify_property_list_changed();
  Resource::emit_changed();
LAB_00104f83:
  if ((local_40 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    memdelete<Image>(local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::reload_from_file() */

void __thiscall CompressedTexture2D::reload_from_file(CompressedTexture2D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Resource::get_path();
  cVar1 = String::is_resource_file();
  if (cVar1 != '\0') {
    ResourceLoader::path_remap((String *)&local_28);
    if (local_30 != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      local_30 = local_28;
      local_28 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    ResourceLoader::import_remap((String *)&local_28);
    if (local_30 != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      local_30 = local_28;
      local_28 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    cVar1 = String::is_resource_file();
    if (cVar1 != '\0') {
      load(this,(String *)&local_30);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      goto LAB_001051a3;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
LAB_001051a3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderCompressedTexture2D::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */

long * ResourceFormatLoaderCompressedTexture2D::load
                 (long *param_1,undefined8 param_2,String *param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  Texture2D *this;
  long lVar3;
  Texture2D *this_00;
  
  this_00 = (Texture2D *)0x0;
  this = (Texture2D *)operator_new(0x310,"");
  Texture2D::Texture2D(this);
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00110530;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  if (cVar1 != '\0') {
    cVar1 = RefCounted::reference();
    if (cVar1 != '\0') {
      this_00 = this;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this), cVar1 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  iVar2 = CompressedTexture2D::load((CompressedTexture2D *)this_00,param_3);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  if (iVar2 == 0) {
    *param_1 = 0;
    lVar3 = __dynamic_cast(this_00,&Object::typeinfo,&Resource::typeinfo,0);
    if (lVar3 != 0) {
      *param_1 = lVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
        cVar1 = RefCounted::unreference();
        goto joined_r0x0010538f;
      }
      goto LAB_0010532e;
    }
  }
  else {
LAB_0010532e:
    *param_1 = 0;
  }
  cVar1 = RefCounted::unreference();
joined_r0x0010538f:
  if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this_00), cVar1 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
    return param_1;
  }
  return param_1;
}



/* CompressedTexture3D::_load_data(String const&, Vector<Ref<Image> >&, Image::Format&, int&, int&,
   int&, bool&) */

undefined8 __thiscall
CompressedTexture3D::_load_data
          (CompressedTexture3D *this,String *param_1,Vector *param_2,Format *param_3,int *param_4,
          int *param_5,int *param_6,bool *param_7)

{
  Object *pOVar1;
  Image *pIVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  long in_FS_OFFSET;
  Object *local_68;
  undefined8 local_60;
  Image *local_58;
  Object *local_50;
  char local_44;
  char local_43;
  char local_42;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_68,(int)param_1,(Error *)0x1);
  if (local_68 == (Object *)0x0) {
    local_58 = (Image *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Unable to open file: %s.");
    vformat<String>((CowData<char32_t> *)&local_50,(String *)&local_60,
                    (CowData<char32_t> *)&local_58);
    _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x200,
                     "Condition \"f.is_null()\" is true. Returning: ERR_CANT_OPEN",
                     (CowData<char32_t> *)&local_50,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_00105685:
    uVar8 = 0x13;
  }
  else {
    (**(code **)(*(long *)local_68 + 0x220))(local_68,&local_44,4);
    if ((((local_44 == 'G') && (local_43 == 'S')) && (local_42 == 'T')) && (local_41 == 'L')) {
      uVar4 = (**(code **)(*(long *)local_68 + 0x1f0))();
      if (uVar4 < 2) {
        iVar5 = (**(code **)(*(long *)local_68 + 0x1f0))();
        *param_6 = iVar5;
        (**(code **)(*(long *)local_68 + 0x1f0))();
        (**(code **)(*(long *)local_68 + 0x1f0))();
        (**(code **)(*(long *)local_68 + 0x1f0))();
        iVar5 = (**(code **)(*(long *)local_68 + 0x1f0))();
        (**(code **)(*(long *)local_68 + 0x1f0))();
        (**(code **)(*(long *)local_68 + 0x1f0))();
        *param_7 = iVar5 != 0;
        iVar9 = 0;
        CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)(param_2 + 8),0);
        if (0 < *param_6 + iVar5) {
          do {
            pOVar1 = local_68;
            if (local_68 != (Object *)0x0) {
              local_50 = local_68;
              cVar3 = RefCounted::reference();
              if (cVar3 == '\0') goto LAB_00105576;
              CompressedTexture2D::load_image_from_file
                        ((CompressedTexture2D *)&local_58,&local_50,0);
              cVar3 = RefCounted::unreference();
              if ((cVar3 == '\0') || (cVar3 = predelete_handler(pOVar1), cVar3 == '\0'))
              goto LAB_00105583;
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
              if (local_58 != (Image *)0x0) goto LAB_00105591;
LAB_00105658:
              _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x21c,
                               "Condition \"image.is_null() || image->is_empty()\" is true. Returning: ERR_CANT_OPEN"
                               ,0,0);
              Ref<Image>::unref((Ref<Image> *)&local_58);
              goto LAB_00105685;
            }
LAB_00105576:
            local_50 = (Object *)0x0;
            CompressedTexture2D::load_image_from_file((CompressedTexture2D *)&local_58,&local_50,0);
LAB_00105583:
            if (local_58 == (Image *)0x0) goto LAB_00105658;
LAB_00105591:
            pIVar2 = local_58;
            cVar3 = Image::is_empty();
            if (cVar3 != '\0') goto LAB_00105658;
            if (iVar9 == 0) {
              uVar6 = Image::get_format();
              *(undefined4 *)param_3 = uVar6;
              iVar7 = Image::get_width();
              *param_4 = iVar7;
              iVar7 = Image::get_height();
              *param_5 = iVar7;
            }
            local_50 = (Object *)pIVar2;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              local_50 = (Object *)0x0;
              Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)param_2);
LAB_001055d3:
              cVar3 = RefCounted::unreference();
            }
            else {
              Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)param_2);
              cVar3 = RefCounted::unreference();
              if (cVar3 == '\0') goto LAB_001055d3;
              memdelete<Image>(pIVar2);
              cVar3 = RefCounted::unreference();
            }
            if (cVar3 != '\0') {
              memdelete<Image>(pIVar2);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *param_6 + iVar5);
        }
        uVar8 = 0;
      }
      else {
        uVar8 = 0x10;
        _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x20a,
                         "Method/function failed. Returning: ERR_FILE_CORRUPT",
                         "Compressed texture file is too new.",0,0);
      }
    }
    else {
      uVar8 = 0xf;
      _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x204,
                       "Condition \"header[0] != \'G\' || header[1] != \'S\' || header[2] != \'T\' || header[3] != \'L\'\" is true. Returning: ERR_FILE_UNRECOGNIZED"
                       ,0,0);
    }
  }
  if (((local_68 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
    (**(code **)(*(long *)local_68 + 0x140))(local_68);
    Memory::free_static(local_68,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture3D::load(String const&) */

int __thiscall CompressedTexture3D::load(CompressedTexture3D *this,String *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  CompressedTexture3D local_71;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  long local_60;
  Vector local_58 [8];
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50[0] = 0;
  iVar2 = _load_data(this,param_1,local_58,(Format *)&local_64,&local_70,&local_6c,&local_68,
                     (bool *)&local_71);
  if (iVar2 != 0) goto LAB_00105a11;
  if (*(long *)(this + 0x2d8) == 0) {
    plVar3 = (long *)RenderingServer::get_singleton();
    uVar4 = (**(code **)(*plVar3 + 0x168))
                      (plVar3,local_64,local_70,local_6c,local_68,local_71,local_58);
    *(undefined8 *)(this + 0x2d8) = uVar4;
  }
  else {
    plVar3 = (long *)RenderingServer::get_singleton();
    uVar4 = (**(code **)(*plVar3 + 0x168))
                      (plVar3,local_64,local_70,local_6c,local_68,local_71,local_58);
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(this + 0x2d8),uVar4);
  }
  *(ulong *)(this + 0x2e0) = CONCAT44(local_70,local_64);
  *(ulong *)(this + 0x2e8) = CONCAT44(local_68,local_6c);
  lVar1 = *(long *)param_1;
  this[0x2f0] = local_71;
  if (*(long *)(this + 0x2d0) != lVar1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x2d0),(CowData *)param_1);
  }
  Resource::get_path();
  if ((local_60 == 0) || (iVar5 = (int)*(undefined8 *)(local_60 + -8), iVar5 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00105aa5:
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(this + 0x2d8),param_1);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (iVar5 == 1) goto LAB_00105aa5;
  }
  Object::notify_property_list_changed();
  Resource::emit_changed();
LAB_00105a11:
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture3D::reload_from_file() */

void __thiscall CompressedTexture3D::reload_from_file(CompressedTexture3D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Resource::get_path();
  cVar1 = String::is_resource_file();
  if (cVar1 != '\0') {
    ResourceLoader::path_remap((String *)&local_28);
    if (local_30 != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      local_30 = local_28;
      local_28 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    ResourceLoader::import_remap((String *)&local_28);
    if (local_30 != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      local_30 = local_28;
      local_28 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    cVar1 = String::is_resource_file();
    if (cVar1 != '\0') {
      load(this,(String *)&local_30);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      goto LAB_00105b13;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
LAB_00105b13:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderCompressedTexture3D::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */

long * ResourceFormatLoaderCompressedTexture3D::load
                 (long *param_1,undefined8 param_2,String *param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  CompressedTexture3D *this;
  long lVar3;
  CompressedTexture3D *this_00;
  
  this_00 = (CompressedTexture3D *)0x0;
  this = (CompressedTexture3D *)operator_new(0x2f8,"");
  CompressedTexture3D::CompressedTexture3D(this);
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  if (cVar1 != '\0') {
    cVar1 = RefCounted::reference();
    if (cVar1 != '\0') {
      this_00 = this;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this), cVar1 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  iVar2 = CompressedTexture3D::load(this_00,param_3);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  if (iVar2 == 0) {
    *param_1 = 0;
    lVar3 = __dynamic_cast(this_00,&Object::typeinfo,&Resource::typeinfo,0);
    if (lVar3 != 0) {
      *param_1 = lVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
        cVar1 = RefCounted::unreference();
        goto joined_r0x00105cbf;
      }
      goto LAB_00105c5e;
    }
  }
  else {
LAB_00105c5e:
    *param_1 = 0;
  }
  cVar1 = RefCounted::unreference();
joined_r0x00105cbf:
  if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this_00), cVar1 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
    return param_1;
  }
  return param_1;
}



/* CompressedTextureLayered::_load_data(String const&, Vector<Ref<Image> >&, int&, int) */

undefined8 __thiscall
CompressedTextureLayered::_load_data
          (CompressedTextureLayered *this,String *param_1,Vector *param_2,int *param_3,int param_4)

{
  code *pcVar1;
  Object *pOVar2;
  Ref *pRVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  Object *local_68;
  undefined8 local_60;
  Ref *local_58;
  Object *local_50;
  char local_44;
  char local_43;
  char local_42;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 8) != 0) && (*(long *)(*(long *)(param_2 + 8) + -8) != 0)) {
    uVar8 = 0x1f;
    _err_print_error("_load_data","scene/resources/compressed_texture.cpp",700,
                     "Condition \"images.size() != 0\" is true. Returning: ERR_INVALID_PARAMETER",0,
                     0);
    goto LAB_00105df3;
  }
  FileAccess::open((String *)&local_68,(int)param_1,(Error *)0x1);
  if (local_68 == (Object *)0x0) {
    local_58 = (Ref *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Unable to open file: %s.");
    vformat<String>((CowData<char32_t> *)&local_50,(String *)&local_60,
                    (CowData<char32_t> *)&local_58);
    _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x2bf,
                     "Condition \"f.is_null()\" is true. Returning: ERR_CANT_OPEN",
                     (CowData<char32_t> *)&local_50,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_001060c6:
    uVar8 = 0x13;
  }
  else {
    (**(code **)(*(long *)local_68 + 0x220))(local_68,&local_44,4);
    if ((((local_44 == 'G') && (local_43 == 'S')) && (local_42 == 'T')) && (local_41 == 'L')) {
      uVar5 = (**(code **)(*(long *)local_68 + 0x1f0))();
      if (uVar5 < 2) {
        uVar5 = (**(code **)(*(long *)local_68 + 0x1f0))();
        iVar6 = (**(code **)(*(long *)local_68 + 0x1f0))();
        if (*(int *)(this + 0x30c) == iVar6) {
          uVar7 = (**(code **)(*(long *)local_68 + 0x1f0))();
          iVar6 = (**(code **)(*(long *)local_68 + 0x1f0))();
          *param_3 = iVar6;
          (**(code **)(*(long *)local_68 + 0x1f0))();
          (**(code **)(*(long *)local_68 + 0x1f0))();
          (**(code **)(*(long *)local_68 + 0x1f0))();
          if ((uVar7 & 0x400000) == 0) {
            param_4 = 0;
          }
          uVar10 = 0;
          CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)(param_2 + 8),(ulong)uVar5);
          if (uVar5 != 0) {
            do {
              pOVar2 = local_68;
              if (local_68 == (Object *)0x0) {
LAB_00105f33:
                local_50 = (Object *)0x0;
                CompressedTexture2D::load_image_from_file
                          ((CompressedTexture2D *)&local_58,&local_50,param_4);
              }
              else {
                local_50 = local_68;
                cVar4 = RefCounted::reference();
                if (cVar4 == '\0') goto LAB_00105f33;
                CompressedTexture2D::load_image_from_file
                          ((CompressedTexture2D *)&local_58,&local_50,param_4);
                cVar4 = RefCounted::unreference();
                if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
              pRVar3 = local_58;
              if ((local_58 == (Ref *)0x0) || (cVar4 = Image::is_empty(), cVar4 != '\0')) {
                _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x2e0,
                                 "Condition \"image.is_null() || image->is_empty()\" is true. Returning: ERR_CANT_OPEN"
                                 ,0,0);
                Ref<Image>::unref((Ref<Image> *)&local_58);
                goto LAB_001060c6;
              }
              if (*(long *)(param_2 + 8) == 0) {
                lVar9 = 0;
LAB_0010619b:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,uVar10,lVar9,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              lVar9 = *(long *)(*(long *)(param_2 + 8) + -8);
              if (lVar9 <= (long)uVar10) goto LAB_0010619b;
              CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(param_2 + 8));
              lVar9 = uVar10 * 8;
              uVar10 = uVar10 + 1;
              Ref<Image>::operator=((Ref<Image> *)(*(long *)(param_2 + 8) + lVar9),pRVar3);
              Ref<Image>::unref((Ref<Image> *)&local_58);
            } while (uVar5 != uVar10);
          }
          uVar8 = 0;
        }
        else {
          uVar8 = 0x1e;
          _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x2cf,
                           "Condition \"(int)type != layered_type\" is true. Returning: ERR_INVALID_DATA"
                           ,0,0);
        }
        goto LAB_00105ddc;
      }
      _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x2ca,
                       "Method/function failed. Returning: ERR_FILE_CORRUPT",
                       "Compressed texture file is too new.",0,0);
    }
    else {
      _err_print_error("_load_data","scene/resources/compressed_texture.cpp",0x2c4,
                       "Method/function failed. Returning: ERR_FILE_CORRUPT",
                       "Compressed texture layered file is corrupt (Bad header).",0,0);
    }
    uVar8 = 0x10;
  }
LAB_00105ddc:
  if (((local_68 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
    (**(code **)(*(long *)local_68 + 0x140))(local_68);
    Memory::free_static(local_68,false);
  }
LAB_00105df3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* CompressedTextureLayered::load(String const&) */

int __thiscall CompressedTextureLayered::load(CompressedTextureLayered *this,String *param_1)

{
  code *pcVar1;
  CompressedTextureLayered CVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_54;
  long local_50;
  Vector local_48 [8];
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40[0] = 0;
  iVar3 = _load_data(this,param_1,local_48,&local_54,0);
  if (iVar3 != 0) goto LAB_001063bf;
  if (*(long *)(this + 0x2f0) == 0) {
    plVar5 = (long *)RenderingServer::get_singleton();
    uVar6 = (**(code **)(*plVar5 + 0x160))(plVar5,local_48,*(undefined4 *)(this + 0x30c));
    *(undefined8 *)(this + 0x2f0) = uVar6;
  }
  else {
    plVar5 = (long *)RenderingServer::get_singleton();
    uVar6 = (**(code **)(*plVar5 + 0x160))(plVar5,local_48,*(undefined4 *)(this + 0x30c));
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(this + 0x2f0),uVar6);
  }
  if (local_40[0] == 0) {
LAB_00106430:
    lVar7 = 0;
LAB_00106433:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar7 = *(long *)(local_40[0] + -8);
  if (lVar7 < 1) goto LAB_00106433;
  uVar4 = Image::get_width();
  *(undefined4 *)(this + 0x2fc) = uVar4;
  if (local_40[0] == 0) goto LAB_00106430;
  lVar7 = *(long *)(local_40[0] + -8);
  if (lVar7 < 1) goto LAB_00106433;
  uVar4 = Image::get_height();
  *(undefined4 *)(this + 0x300) = uVar4;
  if (local_40[0] == 0) goto LAB_00106430;
  lVar7 = *(long *)(local_40[0] + -8);
  if (lVar7 < 1) goto LAB_00106433;
  CVar2 = (CompressedTextureLayered)Image::has_mipmaps();
  this[0x308] = CVar2;
  if (local_40[0] == 0) goto LAB_00106430;
  lVar7 = *(long *)(local_40[0] + -8);
  if (lVar7 < 1) goto LAB_00106433;
  uVar4 = Image::get_format();
  *(undefined4 *)(this + 0x2f8) = uVar4;
  if (local_40[0] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_40[0] + -8);
  }
  *(undefined4 *)(this + 0x304) = uVar4;
  if (*(long *)(this + 0x2e8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x2e8),(CowData *)param_1);
  }
  Resource::get_path();
  if ((local_50 == 0) || (iVar8 = (int)*(undefined8 *)(local_50 + -8), iVar8 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00106394:
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(this + 0x2f0),param_1);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (iVar8 == 1) goto LAB_00106394;
  }
  Object::notify_property_list_changed();
  Resource::emit_changed();
LAB_001063bf:
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_40);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* CompressedTextureLayered::reload_from_file() */

void __thiscall CompressedTextureLayered::reload_from_file(CompressedTextureLayered *this)

{
  char cVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Resource::get_path();
  cVar1 = String::is_resource_file();
  if (cVar1 != '\0') {
    ResourceLoader::path_remap((String *)&local_28);
    if (local_30 != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      local_30 = local_28;
      local_28 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    ResourceLoader::import_remap((String *)&local_28);
    if (local_30 != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      local_30 = local_28;
      local_28 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    cVar1 = String::is_resource_file();
    if (cVar1 != '\0') {
      load(this,(String *)&local_30);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      goto LAB_001064e3;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
LAB_001064e3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderCompressedTextureLayered::load(String const&, String const&, Error*, bool,
   float*, ResourceFormatLoader::CacheMode) */

long * ResourceFormatLoaderCompressedTextureLayered::load
                 (long *param_1,undefined8 param_2,String *param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  CompressedTextureLayered *pCVar3;
  undefined **ppuVar4;
  CompressedTextureLayered *this;
  long lVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  cVar1 = String::operator==(local_48,"ctexarray");
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_50);
  if (cVar1 == '\0') {
    String::get_extension();
    String::to_lower();
    cVar1 = String::operator==(local_48,"ccube");
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_50);
    if (cVar1 == '\0') {
      String::get_extension();
      String::to_lower();
      cVar1 = String::operator==(local_48,"ccubearray");
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      CowData<char32_t>::_unref(local_50);
      if (cVar1 == '\0') {
        if (param_5 != (int *)0x0) {
          *param_5 = 0xf;
        }
        *param_1 = 0;
        goto LAB_00106698;
      }
      pCVar3 = (CompressedTextureLayered *)operator_new(0x310,"");
      CompressedTextureLayered::CompressedTextureLayered(pCVar3);
      ppuVar4 = &PTR__initialize_classv_00110320;
    }
    else {
      pCVar3 = (CompressedTextureLayered *)operator_new(0x310,"");
      CompressedTextureLayered::CompressedTextureLayered(pCVar3);
      ppuVar4 = &PTR__initialize_classv_00110110;
    }
  }
  else {
    pCVar3 = (CompressedTextureLayered *)operator_new(0x310,"");
    CompressedTextureLayered::CompressedTextureLayered(pCVar3);
    ppuVar4 = &PTR__initialize_classv_0010ff00;
  }
  *(undefined ***)pCVar3 = ppuVar4;
  postinitialize_handler((Object *)pCVar3);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
LAB_00106663:
    this = (CompressedTextureLayered *)0x0;
  }
  else {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pCVar3), cVar1 != '\0')) {
        (**(code **)(*(long *)pCVar3 + 0x140))(pCVar3);
        Memory::free_static(pCVar3,false);
      }
      goto LAB_00106663;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pCVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pCVar3 + 0x140))(pCVar3);
      Memory::free_static(pCVar3,false);
    }
    this = (CompressedTextureLayered *)
           __dynamic_cast(pCVar3,&Object::typeinfo,&CompressedTextureLayered::typeinfo,0);
    if ((this != (CompressedTextureLayered *)0x0) &&
       (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      this = (CompressedTextureLayered *)0x0;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pCVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pCVar3 + 0x140))(pCVar3);
      Memory::free_static(pCVar3,false);
    }
  }
  iVar2 = CompressedTextureLayered::load(this,param_3);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  if (iVar2 == 0) {
    *param_1 = 0;
    lVar5 = __dynamic_cast(this,&Object::typeinfo,&Resource::typeinfo,0);
    if (lVar5 == 0) goto LAB_00106688;
    *param_1 = lVar5;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') goto LAB_00106680;
    cVar1 = RefCounted::unreference();
  }
  else {
LAB_00106680:
    *param_1 = 0;
LAB_00106688:
    cVar1 = RefCounted::unreference();
  }
  if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x140))(this);
    Memory::free_static(this,false);
  }
LAB_00106698:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
  return (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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
  return (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* Texture::is_class_ptr(void*) const */

uint __thiscall Texture::is_class_ptr(Texture *this,void *param_1)

{
  return (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Texture::_getv(StringName const&, Variant&) const */

undefined8 Texture::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture::_setv(StringName const&, Variant const&) */

undefined8 Texture::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture::_validate_propertyv(PropertyInfo&) const */

void Texture::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Texture::_property_can_revertv(StringName const&) const */

undefined8 Texture::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Texture::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Texture::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture::_notificationv(int, bool) */

void Texture::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CompressedTexture2D::is_class_ptr(void*) const */

uint CompressedTexture2D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1112,in_RSI == &Texture2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &Texture::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CompressedTexture2D::_getv(StringName const&, Variant&) const */

undefined8 CompressedTexture2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTexture2D::_setv(StringName const&, Variant const&) */

undefined8 CompressedTexture2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTexture2D::_validate_propertyv(PropertyInfo&) const */

void CompressedTexture2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CompressedTexture2D::_property_can_revertv(StringName const&) const */

undefined8 CompressedTexture2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CompressedTexture2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CompressedTexture2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTexture2D::_notificationv(int, bool) */

void CompressedTexture2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CompressedTextureLayered::is_class_ptr(void*) const */

uint CompressedTextureLayered::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1112,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &Texture::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CompressedTextureLayered::_getv(StringName const&, Variant&) const */

undefined8 CompressedTextureLayered::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTextureLayered::_setv(StringName const&, Variant const&) */

undefined8 CompressedTextureLayered::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTextureLayered::_validate_propertyv(PropertyInfo&) const */

void CompressedTextureLayered::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CompressedTextureLayered::_property_can_revertv(StringName const&) const */

undefined8 CompressedTextureLayered::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CompressedTextureLayered::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CompressedTextureLayered::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTextureLayered::_notificationv(int, bool) */

void CompressedTextureLayered::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CompressedTexture2DArray::_getv(StringName const&, Variant&) const */

undefined8 CompressedTexture2DArray::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTexture2DArray::_setv(StringName const&, Variant const&) */

undefined8 CompressedTexture2DArray::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTexture2DArray::_validate_propertyv(PropertyInfo&) const */

void CompressedTexture2DArray::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CompressedTexture2DArray::_property_can_revertv(StringName const&) const */

undefined8 CompressedTexture2DArray::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CompressedTexture2DArray::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CompressedTexture2DArray::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTexture2DArray::_notificationv(int, bool) */

void CompressedTexture2DArray::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CompressedCubemap::_getv(StringName const&, Variant&) const */

undefined8 CompressedCubemap::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedCubemap::_setv(StringName const&, Variant const&) */

undefined8 CompressedCubemap::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedCubemap::_validate_propertyv(PropertyInfo&) const */

void CompressedCubemap::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CompressedCubemap::_property_can_revertv(StringName const&) const */

undefined8 CompressedCubemap::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CompressedCubemap::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CompressedCubemap::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedCubemap::_notificationv(int, bool) */

void CompressedCubemap::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CompressedCubemapArray::_getv(StringName const&, Variant&) const */

undefined8 CompressedCubemapArray::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedCubemapArray::_setv(StringName const&, Variant const&) */

undefined8 CompressedCubemapArray::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedCubemapArray::_validate_propertyv(PropertyInfo&) const */

void CompressedCubemapArray::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CompressedCubemapArray::_property_can_revertv(StringName const&) const */

undefined8 CompressedCubemapArray::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CompressedCubemapArray::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CompressedCubemapArray::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedCubemapArray::_notificationv(int, bool) */

void CompressedCubemapArray::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CompressedTexture3D::is_class_ptr(void*) const */

uint CompressedTexture3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1112,in_RSI == &Texture3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1111,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &Texture::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CompressedTexture3D::_getv(StringName const&, Variant&) const */

undefined8 CompressedTexture3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTexture3D::_setv(StringName const&, Variant const&) */

undefined8 CompressedTexture3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTexture3D::_validate_propertyv(PropertyInfo&) const */

void CompressedTexture3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CompressedTexture3D::_property_can_revertv(StringName const&) const */

undefined8 CompressedTexture3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CompressedTexture3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CompressedTexture3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompressedTexture3D::_notificationv(int, bool) */

void CompressedTexture3D::_notificationv(int param_1,bool param_2)

{
  return;
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



/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x240);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111138;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111138;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111198;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111198;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010fbc8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010fbc8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CompressedTexture2DArray::is_class_ptr(void*) const */

uint CompressedTexture2DArray::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1112,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &CompressedTextureLayered::get_class_ptr_static()::ptr)
            | (uint)CONCAT71(0x1112,in_RSI == &Texture::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CompressedCubemap::is_class_ptr(void*) const */

uint CompressedCubemap::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1112,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &CompressedTextureLayered::get_class_ptr_static()::ptr)
            | (uint)CONCAT71(0x1112,in_RSI == &Texture::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CompressedCubemapArray::is_class_ptr(void*) const */

uint CompressedCubemapArray::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1112,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &CompressedTextureLayered::get_class_ptr_static()::ptr)
            | (uint)CONCAT71(0x1112,in_RSI == &Texture::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
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



/* Texture2D::get_save_class() const */

Texture2D * __thiscall Texture2D::get_save_class(Texture2D *this)

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



/* CompressedTexture2D::_get_class_namev() const */

undefined8 * CompressedTexture2D::_get_class_namev(void)

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
LAB_00107ae3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107ae3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CompressedTexture2D");
      goto LAB_00107b4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CompressedTexture2D");
LAB_00107b4e:
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
LAB_00107bc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107bc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00107c2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00107c2e:
  return &_get_class_namev()::_class_name_static;
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
LAB_00107cb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107cb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
      goto LAB_00107d1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
LAB_00107d1e:
  return &_get_class_namev()::_class_name_static;
}



/* CompressedCubemapArray::_get_class_namev() const */

undefined8 * CompressedCubemapArray::_get_class_namev(void)

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
LAB_00107d93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107d93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CompressedCubemapArray");
      goto LAB_00107dfe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CompressedCubemapArray");
LAB_00107dfe:
  return &_get_class_namev()::_class_name_static;
}



/* Texture::_get_class_namev() const */

undefined8 * Texture::_get_class_namev(void)

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
LAB_00107e73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107e73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Texture");
      goto LAB_00107ede;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Texture");
LAB_00107ede:
  return &_get_class_namev()::_class_name_static;
}



/* CompressedTexture2DArray::_get_class_namev() const */

undefined8 * CompressedTexture2DArray::_get_class_namev(void)

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
LAB_00107f53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107f53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CompressedTexture2DArray");
      goto LAB_00107fbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CompressedTexture2DArray");
LAB_00107fbe:
  return &_get_class_namev()::_class_name_static;
}



/* CompressedTexture3D::_get_class_namev() const */

undefined8 * CompressedTexture3D::_get_class_namev(void)

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
LAB_00108033:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108033;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CompressedTexture3D");
      goto LAB_0010809e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CompressedTexture3D");
LAB_0010809e:
  return &_get_class_namev()::_class_name_static;
}



/* CompressedTextureLayered::_get_class_namev() const */

undefined8 * CompressedTextureLayered::_get_class_namev(void)

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
LAB_00108123:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108123;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CompressedTextureLayered");
      goto LAB_0010818e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CompressedTextureLayered");
LAB_0010818e:
  return &_get_class_namev()::_class_name_static;
}



/* CompressedCubemap::_get_class_namev() const */

undefined8 * CompressedCubemap::_get_class_namev(void)

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
LAB_00108203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CompressedCubemap");
      goto LAB_0010826e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CompressedCubemap");
LAB_0010826e:
  return &_get_class_namev()::_class_name_static;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined **)this = &ResourceFormatLoader::vtable;
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



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Texture2D::Texture2D;
  if (bVar1) {
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084f3;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_001084f3:
  *(undefined ***)this = &PTR__initialize_classv_0010fbc8;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatLoaderCompressedTextureLayered::~ResourceFormatLoaderCompressedTextureLayered() */

void __thiscall
ResourceFormatLoaderCompressedTextureLayered::~ResourceFormatLoaderCompressedTextureLayered
          (ResourceFormatLoaderCompressedTextureLayered *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110f50;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* ResourceFormatLoaderCompressedTextureLayered::~ResourceFormatLoaderCompressedTextureLayered() */

void __thiscall
ResourceFormatLoaderCompressedTextureLayered::~ResourceFormatLoaderCompressedTextureLayered
          (ResourceFormatLoaderCompressedTextureLayered *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110f50;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  operator_delete(this,0x288);
  return;
}



/* ResourceFormatLoaderCompressedTexture3D::~ResourceFormatLoaderCompressedTexture3D() */

void __thiscall
ResourceFormatLoaderCompressedTexture3D::~ResourceFormatLoaderCompressedTexture3D
          (ResourceFormatLoaderCompressedTexture3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110b58;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* ResourceFormatLoaderCompressedTexture3D::~ResourceFormatLoaderCompressedTexture3D() */

void __thiscall
ResourceFormatLoaderCompressedTexture3D::~ResourceFormatLoaderCompressedTexture3D
          (ResourceFormatLoaderCompressedTexture3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110b58;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  operator_delete(this,0x288);
  return;
}



/* ResourceFormatLoaderCompressedTexture2D::~ResourceFormatLoaderCompressedTexture2D() */

void __thiscall
ResourceFormatLoaderCompressedTexture2D::~ResourceFormatLoaderCompressedTexture2D
          (ResourceFormatLoaderCompressedTexture2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110760;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* ResourceFormatLoaderCompressedTexture2D::~ResourceFormatLoaderCompressedTexture2D() */

void __thiscall
ResourceFormatLoaderCompressedTexture2D::~ResourceFormatLoaderCompressedTexture2D
          (ResourceFormatLoaderCompressedTexture2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110760;
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined **)this = &ResourceFormatLoader::vtable;
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



/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Texture3D::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108777;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108777;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108777;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108777;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108777;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108777;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00108777:
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Texture3D::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108887;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108887;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108887;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108887;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108887;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108887;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00108887:
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2e8);
  return;
}



/* Texture3D::~Texture3D() */

void __thiscall Texture3D::~Texture3D(Texture3D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::StringName;
  if (bVar1) {
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108984;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108984;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108984;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108984;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108984;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00108984:
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture3D::~Texture3D() */

void __thiscall Texture3D::~Texture3D(Texture3D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::StringName;
  if (bVar1) {
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108a74;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108a74;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108a74;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108a74;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108a74;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00108a74:
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2d0);
  return;
}



/* TextureLayered::~TextureLayered() */

void __thiscall TextureLayered::~TextureLayered(TextureLayered *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::to_lower;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108b97;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108b97;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108b97;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108b97;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108b97;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108b97;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00108b97:
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  return;
}



/* TextureLayered::~TextureLayered() */

void __thiscall TextureLayered::~TextureLayered(TextureLayered *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::to_lower;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ca7;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ca7;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ca7;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ca7;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ca7;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ca7;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00108ca7:
  *(undefined ***)this = &PTR__initialize_classv_0010fd28;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2e8);
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



/* CompressedCubemapArray::~CompressedCubemapArray() */

void __thiscall CompressedCubemapArray::~CompressedCubemapArray(CompressedCubemapArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110320;
  CompressedTextureLayered::~CompressedTextureLayered((CompressedTextureLayered *)this);
  return;
}



/* CompressedCubemapArray::~CompressedCubemapArray() */

void __thiscall CompressedCubemapArray::~CompressedCubemapArray(CompressedCubemapArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110320;
  CompressedTextureLayered::~CompressedTextureLayered((CompressedTextureLayered *)this);
  operator_delete(this,0x310);
  return;
}



/* CompressedCubemap::~CompressedCubemap() */

void __thiscall CompressedCubemap::~CompressedCubemap(CompressedCubemap *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110110;
  CompressedTextureLayered::~CompressedTextureLayered((CompressedTextureLayered *)this);
  return;
}



/* CompressedCubemap::~CompressedCubemap() */

void __thiscall CompressedCubemap::~CompressedCubemap(CompressedCubemap *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110110;
  CompressedTextureLayered::~CompressedTextureLayered((CompressedTextureLayered *)this);
  operator_delete(this,0x310);
  return;
}



/* CompressedTexture2DArray::~CompressedTexture2DArray() */

void __thiscall CompressedTexture2DArray::~CompressedTexture2DArray(CompressedTexture2DArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ff00;
  CompressedTextureLayered::~CompressedTextureLayered((CompressedTextureLayered *)this);
  return;
}



/* CompressedTexture2DArray::~CompressedTexture2DArray() */

void __thiscall CompressedTexture2DArray::~CompressedTexture2DArray(CompressedTexture2DArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ff00;
  CompressedTextureLayered::~CompressedTextureLayered((CompressedTextureLayered *)this);
  operator_delete(this,0x310);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00108f98) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  code *pcVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  CowData<char32_t> *pCVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  CowData<char32_t> *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x109112);
  if ((local_50 != (CowData<char32_t> *)0x0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC39;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (CowData<char32_t> *)0x0) {
      lVar5 = 0;
      lVar3 = -2;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar3 = lVar5 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_001091ea;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_60 = 0;
  local_48 = &_LC39;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_001091ea:
  pCVar2 = local_50;
  if (local_50 != (CowData<char32_t> *)0x0) {
    LOCK();
    pCVar4 = local_50 + -0x10;
    *(long *)pCVar4 = *(long *)pCVar4 + -1;
    UNLOCK();
    if (*(long *)pCVar4 == 0) {
      if (local_50 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar5 = *(long *)(local_50 + -8);
      local_50 = (CowData<char32_t> *)0x0;
      if (lVar5 != 0) {
        lVar3 = 0;
        pCVar4 = pCVar2;
        do {
          lVar3 = lVar3 + 1;
          CowData<char32_t>::_unref(pCVar4);
          pCVar4 = pCVar4 + 8;
        } while (lVar5 != lVar3);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
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



/* CompressedTexture3D::get_class() const */

void CompressedTexture3D::get_class(void)

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



/* CompressedTexture2D::get_class() const */

void CompressedTexture2D::get_class(void)

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



/* CompressedCubemapArray::get_class() const */

void CompressedCubemapArray::get_class(void)

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



/* CompressedCubemap::get_class() const */

void CompressedCubemap::get_class(void)

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



/* CompressedTexture2DArray::get_class() const */

void CompressedTexture2DArray::get_class(void)

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



/* CompressedTextureLayered::get_class() const */

void CompressedTextureLayered::get_class(void)

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



/* Texture::get_class() const */

void Texture::get_class(void)

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



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 4;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00109c15;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00109c15:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00109e5b;
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00109e5b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00109e5b:
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
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010a05b;
  }
  cVar4 = String::operator==(param_1,"ResourceFormatLoader");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010a05b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
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
    if ((code *)PTR__bind_methods_00116018 != Object::_bind_methods) {
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



/* ResourceFormatLoader::_initialize_classv() */

void ResourceFormatLoader::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_00116008 != RefCounted::_bind_methods) {
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_00116020 != RefCounted::_bind_methods) {
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



/* Texture::_initialize_classv() */

void Texture::_initialize_classv(void)

{
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* Texture::is_class(String const&) const */

undefined8 __thiscall Texture::is_class(Texture *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010a56b;
  }
  cVar5 = String::operator==(param_1,"Texture");
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010a56b;
    }
    cVar5 = String::operator==(param_1,"Resource");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010a66e;
    }
  }
LAB_0010a56b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a66e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::is_class(String const&) const */

undefined8 __thiscall CompressedTexture2D::is_class(CompressedTexture2D *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010a77b;
  }
  cVar5 = String::operator==(param_1,"CompressedTexture2D");
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010a77b;
    }
    cVar5 = String::operator==(param_1,"Texture2D");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Texture::is_class((Texture *)this,param_1);
        return uVar6;
      }
      goto LAB_0010a87e;
    }
  }
LAB_0010a77b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a87e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTextureLayered::is_class(String const&) const */

undefined8 __thiscall
CompressedTextureLayered::is_class(CompressedTextureLayered *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010a99b;
  }
  cVar5 = String::operator==(param_1,"CompressedTextureLayered");
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010a99b;
    }
    cVar5 = String::operator==(param_1,"TextureLayered");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Texture::is_class((Texture *)this,param_1);
        return uVar6;
      }
      goto LAB_0010aa9e;
    }
  }
LAB_0010a99b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010aa9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedCubemapArray::is_class(String const&) const */

undefined8 __thiscall CompressedCubemapArray::is_class(CompressedCubemapArray *this,String *param_1)

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
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010abab;
  }
  cVar4 = String::operator==(param_1,"CompressedCubemapArray");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = CompressedTextureLayered::is_class((CompressedTextureLayered *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010abab:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedCubemap::is_class(String const&) const */

undefined8 __thiscall CompressedCubemap::is_class(CompressedCubemap *this,String *param_1)

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
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010acfb;
  }
  cVar4 = String::operator==(param_1,"CompressedCubemap");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = CompressedTextureLayered::is_class((CompressedTextureLayered *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010acfb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2DArray::is_class(String const&) const */

undefined8 __thiscall
CompressedTexture2DArray::is_class(CompressedTexture2DArray *this,String *param_1)

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
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010ae4b;
  }
  cVar4 = String::operator==(param_1,"CompressedTexture2DArray");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = CompressedTextureLayered::is_class((CompressedTextureLayered *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ae4b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture3D::is_class(String const&) const */

undefined8 __thiscall CompressedTexture3D::is_class(CompressedTexture3D *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010afab;
  }
  cVar5 = String::operator==(param_1,"CompressedTexture3D");
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010afab;
    }
    cVar5 = String::operator==(param_1,"Texture3D");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Texture::is_class((Texture *)this,param_1);
        return uVar6;
      }
      goto LAB_0010b0ae;
    }
  }
LAB_0010afab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b0ae:
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
      goto LAB_0010b21c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b21c:
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



/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this,List *param_1,bool param_2)

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
      goto LAB_0010b481;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b481:
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
      goto LAB_0010b731;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b731:
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



/* Texture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Texture::_get_property_listv(Texture *this,List *param_1,bool param_2)

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
  local_78 = "Texture";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Texture";
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
      goto LAB_0010b9e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b9e1:
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
  StringName::StringName((StringName *)&local_78,"Texture",false);
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



/* TextureLayered::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall TextureLayered::_get_property_listv(TextureLayered *this,List *param_1,bool param_2)

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
    Texture::_get_property_listv((Texture *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "TextureLayered";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TextureLayered";
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
      goto LAB_0010bc91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bc91:
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
  StringName::StringName((StringName *)&local_78,"TextureLayered",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture::_get_property_listv((Texture *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTextureLayered::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
CompressedTextureLayered::_get_property_listv
          (CompressedTextureLayered *this,List *param_1,bool param_2)

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
    TextureLayered::_get_property_listv((TextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CompressedTextureLayered";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CompressedTextureLayered";
  local_98 = 0;
  local_70 = 0x18;
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
      goto LAB_0010bf41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bf41:
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
  StringName::StringName((StringName *)&local_78,"CompressedTextureLayered",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      TextureLayered::_get_property_listv((TextureLayered *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedCubemapArray::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CompressedCubemapArray::_get_property_listv(CompressedCubemapArray *this,List *param_1,bool param_2)

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
    CompressedTextureLayered::_get_property_listv((CompressedTextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CompressedCubemapArray";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CompressedCubemapArray";
  local_98 = 0;
  local_70 = 0x16;
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
      goto LAB_0010c1f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c1f1:
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
  StringName::StringName((StringName *)&local_78,"CompressedCubemapArray",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CompressedTextureLayered::_get_property_listv((CompressedTextureLayered *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedCubemap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CompressedCubemap::_get_property_listv(CompressedCubemap *this,List *param_1,bool param_2)

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
    CompressedTextureLayered::_get_property_listv((CompressedTextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CompressedCubemap";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CompressedCubemap";
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
      goto LAB_0010c4a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c4a1:
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
  StringName::StringName((StringName *)&local_78,"CompressedCubemap",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CompressedTextureLayered::_get_property_listv((CompressedTextureLayered *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Texture3D::_get_property_listv(Texture3D *this,List *param_1,bool param_2)

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
    Texture::_get_property_listv((Texture *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Texture3D";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Texture3D";
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
      goto LAB_0010c751;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c751:
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
  StringName::StringName((StringName *)&local_78,"Texture3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture::_get_property_listv((Texture *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CompressedTexture3D::_get_property_listv(CompressedTexture3D *this,List *param_1,bool param_2)

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
    Texture3D::_get_property_listv((Texture3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CompressedTexture3D";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CompressedTexture3D";
  local_98 = 0;
  local_70 = 0x13;
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
      goto LAB_0010ca01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ca01:
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
  StringName::StringName((StringName *)&local_78,"CompressedTexture3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture3D::_get_property_listv((Texture3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Texture2D::_get_property_listv(Texture2D *this,List *param_1,bool param_2)

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
    Texture::_get_property_listv((Texture *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Texture2D";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Texture2D";
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
      goto LAB_0010ccb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ccb1:
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
  StringName::StringName((StringName *)&local_78,"Texture2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture::_get_property_listv((Texture *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CompressedTexture2D::_get_property_listv(CompressedTexture2D *this,List *param_1,bool param_2)

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
    Texture2D::_get_property_listv((Texture2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CompressedTexture2D";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CompressedTexture2D";
  local_98 = 0;
  local_70 = 0x13;
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
      goto LAB_0010cf61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cf61:
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
  StringName::StringName((StringName *)&local_78,"CompressedTexture2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture2D::_get_property_listv((Texture2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2DArray::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
CompressedTexture2DArray::_get_property_listv
          (CompressedTexture2DArray *this,List *param_1,bool param_2)

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
    CompressedTextureLayered::_get_property_listv((CompressedTextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CompressedTexture2DArray";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CompressedTexture2DArray";
  local_98 = 0;
  local_70 = 0x18;
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
      goto LAB_0010d211;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d211:
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
  StringName::StringName((StringName *)&local_78,"CompressedTexture2DArray",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CompressedTextureLayered::_get_property_listv((CompressedTextureLayered *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTextureLayered::_bind_methods() [clone .cold] */

void CompressedTextureLayered::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CompressedTexture2D::_bind_methods() [clone .cold] */

void CompressedTexture2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CompressedTexture3D::_bind_methods() [clone .cold] */

void CompressedTexture3D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Image>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010d3aa(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CompressedTextureLayered::_initialize_classv() */

void CompressedTextureLayered::_initialize_classv(void)

{
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* CompressedCubemapArray::_initialize_classv() */

void CompressedCubemapArray::_initialize_classv(void)

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
    if (CompressedTextureLayered::initialize_class()::initialized == '\0') {
      CompressedTextureLayered::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x18;
    local_48 = "CompressedTextureLayered";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CompressedCubemapArray";
    local_60 = 0;
    local_40 = 0x16;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedCubemap::_initialize_classv() */

void CompressedCubemap::_initialize_classv(void)

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
    if (CompressedTextureLayered::initialize_class()::initialized == '\0') {
      CompressedTextureLayered::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x18;
    local_48 = "CompressedTextureLayered";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CompressedCubemap";
    local_60 = 0;
    local_40 = 0x11;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2DArray::_initialize_classv() */

void CompressedTexture2DArray::_initialize_classv(void)

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
    if (CompressedTextureLayered::initialize_class()::initialized == '\0') {
      CompressedTextureLayered::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x18;
    local_48 = "CompressedTextureLayered";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CompressedTexture2DArray";
    local_60 = 0;
    local_40 = 0x18;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompressedTexture2D::_initialize_classv() */

void CompressedTexture2D::_initialize_classv(void)

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
    if (Texture2D::initialize_class()::initialized == '\0') {
      if (Texture::initialize_class()::initialized == '\0') {
        Texture::initialize_class();
      }
      local_58 = 0;
      local_40 = 7;
      local_48 = "Texture";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "Texture2D";
      local_60 = 0;
      local_40 = 9;
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
      if ((code *)PTR__bind_methods_00116028 != Resource::_bind_methods) {
        Texture2D::_bind_methods();
      }
      Texture2D::initialize_class()::initialized = '\x01';
    }
    local_48 = "Texture2D";
    local_58 = 0;
    local_40 = 9;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CompressedTexture2D";
    local_60 = 0;
    local_40 = 0x13;
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



/* CompressedTexture3D::_initialize_classv() */

void CompressedTexture3D::_initialize_classv(void)

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
    if (Texture3D::initialize_class()::initialized == '\0') {
      if (Texture::initialize_class()::initialized == '\0') {
        Texture::initialize_class();
      }
      local_58 = 0;
      local_40 = 7;
      local_48 = "Texture";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "Texture3D";
      local_60 = 0;
      local_40 = 9;
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
      if ((code *)PTR__bind_methods_00116030 != Resource::_bind_methods) {
        Texture3D::_bind_methods();
      }
      Texture3D::initialize_class()::initialized = '\x01';
    }
    local_48 = "Texture3D";
    local_58 = 0;
    local_40 = 9;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CompressedTexture3D";
    local_60 = 0;
    local_40 = 0x13;
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
    *(undefined **)param_1 = &ResourceFormatLoader::vtable;
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



/* Ref<Image>::unref() */

void __thiscall Ref<Image>::unref(Ref<Image> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(*(Image **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* void Ref<Image>::instantiate<>() */

void __thiscall Ref<Image>::instantiate<>(Ref<Image> *this)

{
  Image *pIVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Resource *pRVar4;
  Image *pIVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar4 = this_00;
  for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(undefined **)this_00 = &ResourceFormatLoader::vtable;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pIVar1 = *(Image **)this;
    if (pIVar1 == (Image *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    memdelete<Image>(pIVar1);
    return;
  }
  pIVar1 = *(Image **)this;
  pIVar5 = pIVar1;
  if (this_00 != (Resource *)pIVar1) {
    *(Resource **)this = this_00;
    cVar2 = RefCounted::reference();
    pIVar5 = (Image *)this_00;
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
      if (pIVar1 == (Image *)0x0) goto LAB_0010dde8;
      cVar2 = RefCounted::unreference();
    }
    else {
      if (pIVar1 == (Image *)0x0) goto LAB_0010dde8;
      cVar2 = RefCounted::unreference();
    }
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar1);
    }
  }
LAB_0010dde8:
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar5);
  return;
}



/* CowData<Ref<Image> >::_unref() */

void __thiscall CowData<Ref<Image>>::_unref(CowData<Ref<Image>> *this)

{
  long *plVar1;
  long lVar2;
  Image *pIVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0010de95:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pIVar3 = (Image *)*plVar6;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
          memdelete<Image>(pIVar3);
          if (lVar2 == lVar7) break;
          goto LAB_0010de95;
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* CowData<Ref<Image> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Image>>::_realloc(CowData<Ref<Image>> *this,long param_1)

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
/* Error CowData<Ref<Image> >::resize<false>(long) */

undefined8 __thiscall CowData<Ref<Image>>::resize<false>(CowData<Ref<Image>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010e2e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_0010e2e0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010e1aa:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar6 + uVar8 * 8), *plVar1 == 0) {
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010e1aa;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        memdelete<Image>((Image *)*plVar1);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0010e170;
  }
  if (lVar10 == lVar7) {
LAB_0010e25b:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010e170:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010e23b;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010e25b;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0010e23b:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010e468) */
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
      _err_print_error(&_LC96,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e7a0;
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
LAB_0010e7a0:
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
      local_48 = (Variant **)0x10e5e8;
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
      goto LAB_0010ea6c;
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
LAB_0010ea6c:
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
      local_48 = (void **)0x10e5e8;
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
      goto LAB_0010ec3d;
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
LAB_0010ec3d:
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
      goto LAB_0010edec;
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
LAB_0010edec:
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
      goto LAB_0010efc8;
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
LAB_0010efc8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
      _err_print_error(&_LC96,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f2a0;
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
      if (in_R8D != 1) goto LAB_0010f2f0;
LAB_0010f2e0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010f2f0:
        uVar7 = 4;
        goto LAB_0010f295;
      }
      if (in_R8D == 1) goto LAB_0010f2e0;
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
LAB_0010f295:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010f2a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
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
    local_78 = &_LC8;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70 [2];
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70[0] = 0;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "Error";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)local_70,(String *)&local_78);
    StringName::StringName((StringName *)&local_68,(String *)local_70,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_80 = 0;
    local_88 = 0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* CompressedTexture2DArray::~CompressedTexture2DArray() */

void __thiscall CompressedTexture2DArray::~CompressedTexture2DArray(CompressedTexture2DArray *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CompressedCubemap::~CompressedCubemap() */

void __thiscall CompressedCubemap::~CompressedCubemap(CompressedCubemap *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CompressedCubemapArray::~CompressedCubemapArray() */

void __thiscall CompressedCubemapArray::~CompressedCubemapArray(CompressedCubemapArray *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TextureLayered::~TextureLayered() */

void __thiscall TextureLayered::~TextureLayered(TextureLayered *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Texture3D::~Texture3D() */

void __thiscall Texture3D::~Texture3D(Texture3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoaderCompressedTexture2D::~ResourceFormatLoaderCompressedTexture2D() */

void __thiscall
ResourceFormatLoaderCompressedTexture2D::~ResourceFormatLoaderCompressedTexture2D
          (ResourceFormatLoaderCompressedTexture2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoaderCompressedTexture3D::~ResourceFormatLoaderCompressedTexture3D() */

void __thiscall
ResourceFormatLoaderCompressedTexture3D::~ResourceFormatLoaderCompressedTexture3D
          (ResourceFormatLoaderCompressedTexture3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoaderCompressedTextureLayered::~ResourceFormatLoaderCompressedTextureLayered() */

void __thiscall
ResourceFormatLoaderCompressedTextureLayered::~ResourceFormatLoaderCompressedTextureLayered
          (ResourceFormatLoaderCompressedTextureLayered *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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
/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

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


// This is taking way too long.