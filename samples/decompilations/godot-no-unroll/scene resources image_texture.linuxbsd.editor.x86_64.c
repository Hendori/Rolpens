
/* ImageTexture::get_format() const */

undefined4 __thiscall ImageTexture::get_format(ImageTexture *this)

{
  return *(undefined4 *)(this + 0x2f0);
}



/* ImageTexture::get_width() const */

undefined4 __thiscall ImageTexture::get_width(ImageTexture *this)

{
  return *(undefined4 *)(this + 0x2f8);
}



/* ImageTextureLayered::get_width() const */

undefined4 __thiscall ImageTextureLayered::get_width(ImageTextureLayered *this)

{
  return *(undefined4 *)(this + 0x2fc);
}



/* ImageTexture::has_alpha() const */

undefined4 __thiscall ImageTexture::has_alpha(ImageTexture *this)

{
  return CONCAT31((int3)((*(uint *)(this + 0x2f0) & 0xfffffffb) >> 8),
                  (*(uint *)(this + 0x2f0) & 0xfffffffb) == 1);
}



/* ImageTextureLayered::get_format() const */

undefined4 __thiscall ImageTextureLayered::get_format(ImageTextureLayered *this)

{
  return *(undefined4 *)(this + 0x2f8);
}



/* ImageTextureLayered::get_height() const */

undefined4 __thiscall ImageTextureLayered::get_height(ImageTextureLayered *this)

{
  return *(undefined4 *)(this + 0x300);
}



/* ImageTextureLayered::get_layers() const */

undefined4 __thiscall ImageTextureLayered::get_layers(ImageTextureLayered *this)

{
  return *(undefined4 *)(this + 0x304);
}



/* ImageTextureLayered::has_mipmaps() const */

ImageTextureLayered __thiscall ImageTextureLayered::has_mipmaps(ImageTextureLayered *this)

{
  return this[0x308];
}



/* ImageTextureLayered::get_layered_type() const */

undefined4 __thiscall ImageTextureLayered::get_layered_type(ImageTextureLayered *this)

{
  return *(undefined4 *)(this + 0x2e8);
}



/* ImageTexture3D::get_format() const */

undefined4 __thiscall ImageTexture3D::get_format(ImageTexture3D *this)

{
  return *(undefined4 *)(this + 0x2d8);
}



/* ImageTexture3D::get_width() const */

undefined4 __thiscall ImageTexture3D::get_width(ImageTexture3D *this)

{
  return *(undefined4 *)(this + 0x2dc);
}



/* ImageTexture3D::get_height() const */

undefined4 __thiscall ImageTexture3D::get_height(ImageTexture3D *this)

{
  return *(undefined4 *)(this + 0x2e0);
}



/* ImageTexture3D::get_depth() const */

undefined4 __thiscall ImageTexture3D::get_depth(ImageTexture3D *this)

{
  return *(undefined4 *)(this + 0x2e4);
}



/* ImageTexture3D::has_mipmaps() const */

ImageTexture3D __thiscall ImageTexture3D::has_mipmaps(ImageTexture3D *this)

{
  return this[0x2e8];
}



/* ImageTexture::draw_rect(RID, Rect2 const&, bool, Color const&, bool) const */

void __thiscall
ImageTexture::draw_rect
          (ImageTexture *this,undefined8 param_2,undefined8 param_3,undefined1 param_4,
          undefined8 param_5,undefined1 param_6)

{
  long *plVar1;
  
  if (*(int *)(this + 0x2f8) == 0 && *(int *)(this + 0x2fc) == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0xf20))
            (plVar1,param_2,param_3,*(undefined8 *)(this + 0x2e8),param_4,param_5,param_6);
  return;
}



/* ImageTexture::draw_rect_region(RID, Rect2 const&, Rect2 const&, Color const&, bool, bool) const
    */

uint ImageTexture::draw_rect_region
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,uint param_6)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2f8) | *(uint *)(param_1 + 0x2fc);
  if (uVar1 != 0) {
    uVar1 = param_6 & 0xff;
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0xf28))
              (plVar2,param_2,param_3,*(undefined8 *)(param_1 + 0x2e8),param_4,param_5);
  }
  return uVar1;
}



/* ImageTexture::set_size_override(Vector2i const&) */

void __thiscall ImageTexture::set_size_override(ImageTexture *this,Vector2i *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)param_1 != 0) {
    *(int *)(this + 0x2f8) = *(int *)param_1;
  }
  if (iVar1 != 0) {
    *(int *)(this + 0x2fc) = iVar1;
  }
  plVar2 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x1e0))
            (plVar2,*(undefined8 *)(this + 0x2e8),*(undefined4 *)(this + 0x2f8),
             *(undefined4 *)(this + 0x2fc));
  return;
}



/* ImageTexture::draw(RID, Vector2 const&, Color const&, bool) const */

void __thiscall
ImageTexture::draw(ImageTexture *this,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x2f8) != 0 || *(int *)(this + 0x2fc) != 0) {
    plVar1 = (long *)RenderingServer::get_singleton();
    local_48 = *param_3;
    local_40 = CONCAT44((float)(int)((ulong)*(undefined8 *)(this + 0x2f8) >> 0x20),
                        (float)(int)*(undefined8 *)(this + 0x2f8));
    (**(code **)(*plVar1 + 0xf20))
              (plVar1,param_2,&local_48,*(undefined8 *)(this + 0x2e8),0,param_4,param_5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture3D::get_rid() const */

undefined8 __thiscall ImageTexture3D::get_rid(ImageTexture3D *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x2d0) != 0) {
    return *(undefined8 *)(this + 0x2d0);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
  *(undefined8 *)(this + 0x2d0) = uVar2;
  return *(undefined8 *)(this + 0x2d0);
}



/* ImageTexture::get_rid() const */

undefined8 __thiscall ImageTexture::get_rid(ImageTexture *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x2e8) != 0) {
    return *(undefined8 *)(this + 0x2e8);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
  *(undefined8 *)(this + 0x2e8) = uVar2;
  return *(undefined8 *)(this + 0x2e8);
}



/* ImageTextureLayered::get_rid() const */

undefined8 __thiscall ImageTextureLayered::get_rid(ImageTextureLayered *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x2f0) != 0) {
    return *(undefined8 *)(this + 0x2f0);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x1b0))(plVar1,*(undefined4 *)(this + 0x2e8));
  *(undefined8 *)(this + 0x2f0) = uVar2;
  return *(undefined8 *)(this + 0x2f0);
}



/* ImageTexture::get_image() const */

void ImageTexture::get_image(void)

{
  long lVar1;
  long *plVar2;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RSI + 0x310) == '\0') {
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



/* ImageTexture::set_image(Ref<Image> const&) */

undefined8 __thiscall ImageTexture::set_image(ImageTexture *this,Ref *param_1)

{
  char cVar1;
  ImageTexture IVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (*(long *)param_1 != 0) {
    cVar1 = Image::is_empty();
    if (cVar1 == '\0') {
      uVar3 = Image::get_width();
      *(undefined4 *)(this + 0x2f8) = uVar3;
      uVar3 = Image::get_height();
      *(undefined4 *)(this + 0x2fc) = uVar3;
      uVar3 = Image::get_format();
      *(undefined4 *)(this + 0x2f0) = uVar3;
      IVar2 = (ImageTexture)Image::has_mipmaps();
      this[0x2f4] = IVar2;
      if (*(long *)(this + 0x2e8) == 0) {
        plVar4 = (long *)RenderingServer::get_singleton();
        uVar5 = (**(code **)(*plVar4 + 0x158))(plVar4,param_1);
        *(undefined8 *)(this + 0x2e8) = uVar5;
      }
      else {
        plVar4 = (long *)RenderingServer::get_singleton();
        uVar5 = (**(code **)(*plVar4 + 0x158))(plVar4,param_1);
        plVar4 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(this + 0x2e8),uVar5);
      }
      Object::notify_property_list_changed();
      uVar5 = Resource::emit_changed();
      this[0x310] = (ImageTexture)0x1;
      return uVar5;
    }
  }
  _err_print_error("set_image","scene/resources/image_texture.cpp",0x56,
                   "Condition \"p_image.is_null() || p_image->is_empty()\" is true.","Invalid image"
                   ,0);
  return 0;
}



/* ImageTexture::set_path(String const&, bool) */

void ImageTexture::set_path(String *param_1,bool param_2)

{
  long *plVar1;
  undefined7 in_register_00000031;
  
  if (*(long *)(param_1 + 0x2e8) != 0) {
    plVar1 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar1 + 0x1e8))
              (plVar1,*(undefined8 *)(param_1 + 0x2e8),CONCAT71(in_register_00000031,param_2));
  }
  Resource::set_path(param_1,param_2);
  return;
}



/* ImageTextureLayered::set_path(String const&, bool) */

void ImageTextureLayered::set_path(String *param_1,bool param_2)

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



/* ImageTexture3D::set_path(String const&, bool) */

void ImageTexture3D::set_path(String *param_1,bool param_2)

{
  long *plVar1;
  undefined7 in_register_00000031;
  
  if (*(long *)(param_1 + 0x2d0) != 0) {
    plVar1 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar1 + 0x1e8))
              (plVar1,*(undefined8 *)(param_1 + 0x2d0),CONCAT71(in_register_00000031,param_2));
  }
  Resource::set_path(param_1,param_2);
  return;
}



/* ImageTextureLayered::get_layer_data(int) const */

undefined8 * ImageTextureLayered::get_layer_data(int param_1)

{
  long lVar1;
  long *plVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  
  puVar3 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((in_EDX < 0) || (*(int *)(in_RSI + 0x304) <= in_EDX)) {
    _err_print_index_error
              ("get_layer_data","scene/resources/image_texture.cpp",0x15c,(long)in_EDX,
               (long)*(int *)(in_RSI + 0x304),"p_layer","layers","",false,false);
    *puVar3 = 0;
  }
  else {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x1c8))(puVar3,plVar2,*(undefined8 *)(in_RSI + 0x2f0),in_EDX);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTextureLayered::update_layer(Ref<Image> const&, int) */

undefined8 __thiscall
ImageTextureLayered::update_layer(ImageTextureLayered *this,Ref *param_1,int param_2)

{
  ImageTextureLayered IVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*(long *)(this + 0x2f0) == 0) {
    uVar4 = _err_print_error("update_layer","scene/resources/image_texture.cpp",0x152,
                             "Condition \"texture.is_null()\" is true.",
                             "Texture is not initialized.",0,0);
    return uVar4;
  }
  if (*(long *)param_1 == 0) {
    uVar4 = _err_print_error("update_layer","scene/resources/image_texture.cpp",0x153,
                             "Condition \"p_image.is_null()\" is true.","Invalid image.",0,0);
  }
  else {
    iVar2 = Image::get_format();
    if (iVar2 == *(int *)(this + 0x2f8)) {
      iVar2 = Image::get_width();
      if ((iVar2 != *(int *)(this + 0x2fc)) ||
         (iVar2 = Image::get_height(), iVar2 != *(int *)(this + 0x300))) {
        uVar4 = _err_print_error("update_layer","scene/resources/image_texture.cpp",0x155,
                                 "Condition \"p_image->get_width() != width || p_image->get_height() != height\" is true."
                                 ,"Image size must match texture\'s image size.",0,0);
        return uVar4;
      }
      IVar1 = (ImageTextureLayered)Image::has_mipmaps();
      if (IVar1 != this[0x308]) {
        uVar4 = 0;
        _err_print_error("update_layer","scene/resources/image_texture.cpp",0x156,
                         "Condition \"p_image->has_mipmaps() != mipmaps\" is true.",
                         "Image mipmap configuration must match texture\'s image mipmap configuration."
                         ,0);
        return uVar4;
      }
      if ((-1 < param_2) && (param_2 < *(int *)(this + 0x304))) {
        plVar3 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001007df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(this + 0x2f0),param_1,param_2)
        ;
        return uVar4;
      }
      uVar4 = _err_print_index_error
                        ("update_layer","scene/resources/image_texture.cpp",0x157,(long)param_2,
                         (long)*(int *)(this + 0x304),"p_layer","layers",
                         "Layer index is out of bounds.",false,false);
      return uVar4;
    }
    uVar4 = _err_print_error("update_layer","scene/resources/image_texture.cpp",0x154,
                             "Condition \"p_image->get_format() != format\" is true.",
                             "Image format must match texture\'s image format.",0,0);
  }
  return uVar4;
}



/* ImageTexture3D::get_data() const */

void ImageTexture3D::get_data(void)

{
  long lVar1;
  long *plVar2;
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x2d0) == 0) {
    _err_print_error("get_data","scene/resources/image_texture.cpp",0x1bf,
                     "Condition \"!texture.is_valid()\" is true. Returning: Vector<Ref<Image>>()",0,
                     0);
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



/* ImageTexture::update(Ref<Image> const&) */

undefined8 __thiscall ImageTexture::update(ImageTexture *this,Ref *param_1)

{
  ImageTexture IVar1;
  Object *pOVar2;
  ImageTexture IVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if (*(long *)param_1 == 0) {
    uVar6 = _err_print_error("update","scene/resources/image_texture.cpp",0x6d,
                             "Condition \"p_image.is_null()\" is true.","Invalid image",0,0);
    return uVar6;
  }
  if (*(long *)(this + 0x2e8) == 0) {
    uVar6 = _err_print_error("update","scene/resources/image_texture.cpp",0x6e,
                             "Condition \"texture.is_null()\" is true.",
                             "Texture is not initialized.",0,0);
    return uVar6;
  }
  iVar4 = Image::get_width();
  if ((iVar4 != *(int *)(this + 0x2f8)) ||
     (iVar4 = Image::get_height(), iVar4 != *(int *)(this + 0x2fc))) {
    uVar6 = _err_print_error("update","scene/resources/image_texture.cpp",0x6f,
                             "Condition \"p_image->get_width() != w || p_image->get_height() != h\" is true."
                             ,"The new image dimensions must match the texture size.",0,0);
    return uVar6;
  }
  iVar4 = Image::get_format();
  if (iVar4 != *(int *)(this + 0x2f0)) {
    uVar6 = _err_print_error("update","scene/resources/image_texture.cpp",0x71,
                             "Condition \"p_image->get_format() != format\" is true.",
                             "The new image format must match the texture\'s image format.",0,0);
    return uVar6;
  }
  IVar1 = this[0x2f4];
  IVar3 = (ImageTexture)Image::has_mipmaps();
  if (IVar1 == IVar3) {
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(this + 0x2e8),param_1,0);
    Object::notify_property_list_changed();
    uVar6 = Resource::emit_changed();
    if ((*(long *)(this + 0x308) != 0) && (uVar6 = RefCounted::unreference(), (char)uVar6 != '\0'))
    {
      pOVar2 = *(Object **)(this + 0x308);
      uVar6 = predelete_handler(pOVar2);
      if ((char)uVar6 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        uVar6 = Memory::free_static(pOVar2,false);
      }
    }
    *(undefined8 *)(this + 0x308) = 0;
    this[0x310] = (ImageTexture)0x1;
    return uVar6;
  }
  uVar6 = 0;
  _err_print_error("update","scene/resources/image_texture.cpp",0x73,
                   "Condition \"mipmaps != p_image->has_mipmaps()\" is true.",
                   "The new image mipmaps configuration must match the texture\'s image mipmaps configuration"
                   ,0);
  return uVar6;
}



/* Texture2DArray::create_placeholder() const */

void Texture2DArray::create_placeholder(void)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  Object *pOVar4;
  long lVar5;
  long *in_RSI;
  long *in_RDI;
  undefined8 in_R8;
  undefined8 in_R9;
  Object *pOVar6;
  long in_FS_OFFSET;
  
  pOVar6 = (Object *)0x0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar4 = (Object *)operator_new(0x300,"");
  PlaceholderTextureLayered::PlaceholderTextureLayered((PlaceholderTextureLayered *)pOVar4);
  *(undefined ***)pOVar4 = &PTR__initialize_classv_00117368;
  postinitialize_handler(pOVar4);
  cVar2 = RefCounted::init_ref();
  if (cVar2 != '\0') {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      pOVar6 = pOVar4;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  lVar5 = *in_RSI;
  if (*(code **)(lVar5 + 0x1e0) != ImageTextureLayered::get_height) {
    (**(code **)(lVar5 + 0x1e0))();
    lVar5 = *in_RSI;
  }
  if (*(code **)(lVar5 + 0x1d8) == ImageTextureLayered::get_width) {
    uVar3 = *(undefined4 *)((long)in_RSI + 0x2fc);
  }
  else {
    uVar3 = (**(code **)(lVar5 + 0x1d8))();
  }
  PlaceholderTextureLayered::set_size((Vector2i *)pOVar6);
  if (*(code **)(*in_RSI + 0x1e8) != ImageTextureLayered::get_layers) {
    (**(code **)(*in_RSI + 0x1e8))();
  }
  PlaceholderTextureLayered::set_layers((int)pOVar6);
  *in_RDI = 0;
  if (pOVar6 == (Object *)0x0) goto LAB_00100da0;
  lVar5 = __dynamic_cast(pOVar6,&Object::typeinfo,&Resource::typeinfo,0,in_R8,in_R9,uVar3);
  if (lVar5 == 0) {
LAB_00100d94:
    cVar2 = RefCounted::unreference();
  }
  else {
    *in_RDI = lVar5;
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') goto LAB_00100d94;
    *in_RDI = 0;
    cVar2 = RefCounted::unreference();
  }
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
LAB_00100da0:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Cubemap::create_placeholder() const */

void Cubemap::create_placeholder(void)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  Object *pOVar4;
  long lVar5;
  long *in_RSI;
  long *in_RDI;
  undefined8 in_R8;
  undefined8 in_R9;
  Object *pOVar6;
  long in_FS_OFFSET;
  
  pOVar6 = (Object *)0x0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar4 = (Object *)operator_new(0x300,"");
  PlaceholderTextureLayered::PlaceholderTextureLayered((PlaceholderTextureLayered *)pOVar4);
  *(undefined ***)pOVar4 = &PTR__initialize_classv_00117578;
  postinitialize_handler(pOVar4);
  cVar2 = RefCounted::init_ref();
  if (cVar2 != '\0') {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      pOVar6 = pOVar4;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  lVar5 = *in_RSI;
  if (*(code **)(lVar5 + 0x1e0) != ImageTextureLayered::get_height) {
    (**(code **)(lVar5 + 0x1e0))();
    lVar5 = *in_RSI;
  }
  if (*(code **)(lVar5 + 0x1d8) == ImageTextureLayered::get_width) {
    uVar3 = *(undefined4 *)((long)in_RSI + 0x2fc);
  }
  else {
    uVar3 = (**(code **)(lVar5 + 0x1d8))();
  }
  PlaceholderTextureLayered::set_size((Vector2i *)pOVar6);
  if (*(code **)(*in_RSI + 0x1e8) != ImageTextureLayered::get_layers) {
    (**(code **)(*in_RSI + 0x1e8))();
  }
  PlaceholderTextureLayered::set_layers((int)pOVar6);
  *in_RDI = 0;
  if (pOVar6 == (Object *)0x0) goto LAB_00100fb3;
  lVar5 = __dynamic_cast(pOVar6,&Object::typeinfo,&Resource::typeinfo,0,in_R8,in_R9,uVar3);
  if (lVar5 == 0) {
LAB_00100fa7:
    cVar2 = RefCounted::unreference();
  }
  else {
    *in_RDI = lVar5;
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') goto LAB_00100fa7;
    *in_RDI = 0;
    cVar2 = RefCounted::unreference();
  }
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
LAB_00100fb3:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CubemapArray::create_placeholder() const */

void CubemapArray::create_placeholder(void)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  Object *pOVar4;
  long lVar5;
  long *in_RSI;
  long *in_RDI;
  undefined8 in_R8;
  undefined8 in_R9;
  Object *pOVar6;
  long in_FS_OFFSET;
  
  pOVar6 = (Object *)0x0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar4 = (Object *)operator_new(0x300,"");
  PlaceholderTextureLayered::PlaceholderTextureLayered((PlaceholderTextureLayered *)pOVar4);
  *(undefined ***)pOVar4 = &PTR__initialize_classv_00117788;
  postinitialize_handler(pOVar4);
  cVar2 = RefCounted::init_ref();
  if (cVar2 != '\0') {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      pOVar6 = pOVar4;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  lVar5 = *in_RSI;
  if (*(code **)(lVar5 + 0x1e0) != ImageTextureLayered::get_height) {
    (**(code **)(lVar5 + 0x1e0))();
    lVar5 = *in_RSI;
  }
  if (*(code **)(lVar5 + 0x1d8) == ImageTextureLayered::get_width) {
    uVar3 = *(undefined4 *)((long)in_RSI + 0x2fc);
  }
  else {
    uVar3 = (**(code **)(lVar5 + 0x1d8))();
  }
  PlaceholderTextureLayered::set_size((Vector2i *)pOVar6);
  if (*(code **)(*in_RSI + 0x1e8) != ImageTextureLayered::get_layers) {
    (**(code **)(*in_RSI + 0x1e8))();
  }
  PlaceholderTextureLayered::set_layers((int)pOVar6);
  *in_RDI = 0;
  if (pOVar6 == (Object *)0x0) goto LAB_001011c3;
  lVar5 = __dynamic_cast(pOVar6,&Object::typeinfo,&Resource::typeinfo,0,in_R8,in_R9,uVar3);
  if (lVar5 == 0) {
LAB_001011b7:
    cVar2 = RefCounted::unreference();
  }
  else {
    *in_RDI = lVar5;
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') goto LAB_001011b7;
    *in_RDI = 0;
    cVar2 = RefCounted::unreference();
  }
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
LAB_001011c3:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture::create_from_image(Ref<Image> const&) */

ImageTexture * __thiscall ImageTexture::create_from_image(ImageTexture *this,Ref *param_1)

{
  char cVar1;
  Texture2D *this_00;
  char *pcVar2;
  undefined8 uVar3;
  Texture2D *this_01;
  char *pcVar4;
  
  if (*(long *)param_1 == 0) {
    pcVar4 = "Invalid image: null";
    uVar3 = 0x4c;
    pcVar2 = "Condition \"p_image.is_null()\" is true. Returning: Ref<ImageTexture>()";
  }
  else {
    cVar1 = Image::is_empty();
    if (cVar1 == '\0') {
      this_01 = (Texture2D *)0x0;
      this_00 = (Texture2D *)operator_new(0x318,"");
      Texture2D::Texture2D(this_00);
      this_00[0x2f4] = (Texture2D)0x0;
      *(undefined ***)this_00 = &PTR__initialize_classv_00117998;
      *(undefined8 *)(this_00 + 0x2e8) = 0;
      *(undefined4 *)(this_00 + 0x2f0) = 0;
      *(undefined8 *)(this_00 + 0x2f8) = 0;
      *(undefined8 *)(this_00 + 0x300) = 0;
      *(undefined8 *)(this_00 + 0x308) = 0;
      this_00[0x310] = (Texture2D)0x0;
      postinitialize_handler((Object *)this_00);
      cVar1 = RefCounted::init_ref();
      if (cVar1 != '\0') {
        cVar1 = RefCounted::reference();
        if (cVar1 != '\0') {
          this_01 = this_00;
        }
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler((Object *)this_00);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
            Memory::free_static(this_00,false);
          }
        }
      }
      set_image((ImageTexture *)this_01,param_1);
      *(Texture2D **)this = this_01;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)this = 0;
      }
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)this_01);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)this_01 + 0x140))(this_01);
          Memory::free_static(this_01,false);
        }
      }
      return this;
    }
    pcVar4 = "Invalid image: image is empty";
    uVar3 = 0x4d;
    pcVar2 = "Condition \"p_image->is_empty()\" is true. Returning: Ref<ImageTexture>()";
  }
  _err_print_error("create_from_image","scene/resources/image_texture.cpp",uVar3,pcVar2,pcVar4,0,0);
  *(undefined8 *)this = 0;
  return this;
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



/* ImageTexture::~ImageTexture() */

void __thiscall ImageTexture::~ImageTexture(ImageTexture *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00117998;
  if (*(long *)(this + 0x2e8) != 0) {
    lVar3 = RenderingServer::get_singleton();
    if (lVar3 == 0) {
      _err_print_error("~ImageTexture","scene/resources/image_texture.cpp",0xf1,
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
  bVar5 = StringName::configured != '\0';
  *(undefined **)this = &TextureLayered::vtable;
  if (bVar5) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010173f;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010173f;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010173f;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010173f;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010173f;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010173f;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_0010173f:
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  return;
}



/* ImageTexture::~ImageTexture() */

void __thiscall ImageTexture::~ImageTexture(ImageTexture *this)

{
  ~ImageTexture(this);
  operator_delete(this,0x318);
  return;
}



/* ImageTexture::ImageTexture() */

void __thiscall ImageTexture::ImageTexture(ImageTexture *this)

{
  Texture2D::Texture2D((Texture2D *)this);
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00117998;
  *(undefined4 *)(this + 0x2f0) = 0;
  this[0x2f4] = (ImageTexture)0x0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  this[0x310] = (ImageTexture)0x0;
  return;
}



/* ImageTextureLayered::create_from_images(Vector<Ref<Image> >) */

undefined8 __thiscall
ImageTextureLayered::create_from_images(ImageTextureLayered *this,long param_2)

{
  code *pcVar1;
  char cVar2;
  ImageTextureLayered IVar3;
  ImageTextureLayered IVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  
  plVar9 = *(long **)(param_2 + 8);
  if (plVar9 == (long *)0x0) {
LAB_00101c48:
    _err_print_error("create_from_images","scene/resources/image_texture.cpp",0x127,
                     "Condition \"new_layers == 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar10 = plVar9[-1];
  iVar12 = (int)lVar10;
  if (iVar12 == 0) goto LAB_00101c48;
  if (*(int *)(this + 0x2e8) == 1) {
    if (iVar12 != 6) {
      _err_print_error("create_from_images","scene/resources/image_texture.cpp",0x129,
                       "Condition \"new_layers != 6\" is true. Returning: ERR_INVALID_PARAMETER",
                       "Cubemaps require exactly 6 layers",0,0);
      return 0x1f;
    }
  }
  else if ((*(int *)(this + 0x2e8) == 2) &&
          (uVar11 = iVar12 * -0x55555555 + 0x2aaaaaaa,
          0x2aaaaaaa < (uVar11 >> 1 | (uint)((uVar11 & 1) != 0) << 0x1f))) {
    _err_print_error("create_from_images","scene/resources/image_texture.cpp",300,
                     "Condition \"(new_layers % 6) != 0\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,"Cubemap array layers must be a multiple of 6",0,0);
    return 0x1f;
  }
  if (0 < lVar10) {
    if ((*plVar9 == 0) || (cVar2 = Image::is_empty(), cVar2 != '\0')) {
      _err_print_error("create_from_images","scene/resources/image_texture.cpp",0x130,
                       "Condition \"p_images[0].is_null() || p_images[0]->is_empty()\" is true. Returning: ERR_INVALID_PARAMETER"
                       ,0,0);
      return 0x1f;
    }
    if (*(long *)(param_2 + 8) == 0) {
LAB_00101b60:
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(*(long *)(param_2 + 8) + -8);
      if (0 < lVar10) {
        iVar5 = Image::get_format();
        if (*(long *)(param_2 + 8) == 0) goto LAB_00101b60;
        lVar10 = *(long *)(*(long *)(param_2 + 8) + -8);
        if (0 < lVar10) {
          iVar6 = Image::get_width();
          if (*(long *)(param_2 + 8) == 0) goto LAB_00101b60;
          lVar10 = *(long *)(*(long *)(param_2 + 8) + -8);
          if (0 < lVar10) {
            iVar7 = Image::get_height();
            if (*(long *)(param_2 + 8) == 0) goto LAB_00101b60;
            lVar10 = *(long *)(*(long *)(param_2 + 8) + -8);
            if (0 < lVar10) {
              lVar13 = 1;
              IVar3 = (ImageTextureLayered)Image::has_mipmaps();
              lVar10 = *(long *)(param_2 + 8);
              while( true ) {
                if ((lVar10 == 0) || (*(long *)(lVar10 + -8) <= lVar13)) {
                  if (*(long *)(this + 0x2f0) == 0) {
                    plVar9 = (long *)RenderingServer::get_singleton();
                    lVar10 = (**(code **)(*plVar9 + 0x160))
                                       (plVar9,param_2,*(undefined4 *)(this + 0x2e8));
                    *(long *)(this + 0x2f0) = lVar10;
                    if (lVar10 == 0) {
                      _err_print_error("create_from_images","scene/resources/image_texture.cpp",
                                       0x146,
                                       "Condition \"!texture.is_valid()\" is true. Returning: ERR_CANT_CREATE"
                                       ,0,0);
                      return 0x14;
                    }
                  }
                  else {
                    plVar9 = (long *)RenderingServer::get_singleton();
                    lVar10 = (**(code **)(*plVar9 + 0x160))
                                       (plVar9,param_2,*(undefined4 *)(this + 0x2e8));
                    if (lVar10 == 0) {
                      _err_print_error("create_from_images","scene/resources/image_texture.cpp",
                                       0x142,
                                       "Condition \"!new_texture.is_valid()\" is true. Returning: ERR_CANT_CREATE"
                                       ,0,0);
                      return 0x14;
                    }
                    plVar9 = (long *)RenderingServer::get_singleton();
                    (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(this + 0x2f0),lVar10);
                  }
                  this[0x308] = IVar3;
                  *(ulong *)(this + 0x2f8) = CONCAT44(iVar6,iVar5);
                  *(ulong *)(this + 0x300) = CONCAT44(iVar12,iVar7);
                  return 0;
                }
                iVar8 = Image::get_format();
                if (iVar8 != iVar5) {
                  _err_print_error("create_from_images","scene/resources/image_texture.cpp",0x138,
                                   "Condition \"p_images[i]->get_format() != new_format\" is true. Returning: ERR_INVALID_PARAMETER"
                                   ,"All images must share the same format",0,0);
                  return 0x1f;
                }
                if (*(long *)(param_2 + 8) == 0) break;
                lVar10 = *(long *)(*(long *)(param_2 + 8) + -8);
                if (lVar10 <= lVar13) goto LAB_00101b80;
                iVar8 = Image::get_width();
                if (iVar8 != iVar6) {
LAB_00101c10:
                  _err_print_error("create_from_images","scene/resources/image_texture.cpp",0x13a,
                                   "Condition \"p_images[i]->get_width() != new_width || p_images[i]->get_height() != new_height\" is true. Returning: ERR_INVALID_PARAMETER"
                                   ,"All images must share the same dimensions",0,0);
                  return 0x1f;
                }
                if (*(long *)(param_2 + 8) == 0) break;
                lVar10 = *(long *)(*(long *)(param_2 + 8) + -8);
                if (lVar10 <= lVar13) goto LAB_00101b80;
                iVar8 = Image::get_height();
                if (iVar8 != iVar7) goto LAB_00101c10;
                if (*(long *)(param_2 + 8) == 0) break;
                lVar10 = *(long *)(*(long *)(param_2 + 8) + -8);
                if (lVar10 <= lVar13) goto LAB_00101b80;
                IVar4 = (ImageTextureLayered)Image::has_mipmaps();
                if (IVar4 != IVar3) {
                  _err_print_error("create_from_images","scene/resources/image_texture.cpp",0x13c,
                                   "Condition \"p_images[i]->has_mipmaps() != new_mipmaps\" is true. Returning: ERR_INVALID_PARAMETER"
                                   ,"All images must share the usage of mipmaps",0,0);
                  return 0x1f;
                }
                lVar10 = *(long *)(param_2 + 8);
                lVar13 = lVar13 + 1;
              }
              lVar10 = 0;
              goto LAB_00101b80;
            }
          }
        }
      }
    }
  }
  lVar13 = 0;
LAB_00101b80:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar10,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ImageTextureLayered::~ImageTextureLayered() */

void __thiscall ImageTextureLayered::~ImageTextureLayered(ImageTextureLayered *this)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00117bc8;
  if (*(long *)(this + 0x2f0) != 0) {
    lVar1 = RenderingServer::get_singleton();
    if (lVar1 == 0) {
      _err_print_error("~ImageTextureLayered","scene/resources/image_texture.cpp",0x17f,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      TextureLayered::~TextureLayered((TextureLayered *)this);
      return;
    }
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x11b0))(plVar2,*(undefined8 *)(this + 0x2f0));
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = StringName::StringName;
  if (bVar3) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101f01;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101f01;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101f01;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101f01;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101f01;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101f01;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00101f01:
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  return;
}



/* ImageTextureLayered::~ImageTextureLayered() */

void __thiscall ImageTextureLayered::~ImageTextureLayered(ImageTextureLayered *this)

{
  ~ImageTextureLayered(this);
  operator_delete(this,0x310);
  return;
}



/* ImageTextureLayered::ImageTextureLayered(TextureLayered::LayeredType) */

void __thiscall
ImageTextureLayered::ImageTextureLayered(ImageTextureLayered *this,undefined4 param_2)

{
  Resource::Resource((Resource *)this);
  *(code **)this = StringName::StringName;
  StringName::StringName((StringName *)(this + 0x240),"_get_format",false);
  this[0x248] = (ImageTextureLayered)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_get_layered_type",false);
  this[0x260] = (ImageTextureLayered)0x0;
  *(undefined8 *)(this + 0x268) = 0;
  StringName::StringName((StringName *)(this + 0x270),"_get_width",false);
  this[0x278] = (ImageTextureLayered)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_get_height",false);
  this[0x290] = (ImageTextureLayered)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_get_layers",false);
  this[0x2a8] = (ImageTextureLayered)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_has_mipmaps",false);
  this[0x2c0] = (ImageTextureLayered)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  StringName::StringName((StringName *)(this + 0x2d0),"_get_layer_data",false);
  this[0x2d8] = (ImageTextureLayered)0x0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00117bc8;
  *(undefined8 *)(this + 0x2f0) = 0;
  this[0x308] = (ImageTextureLayered)0x0;
  *(undefined4 *)(this + 0x2e8) = param_2;
  *(undefined1 (*) [16])(this + 0x2f8) = (undefined1  [16])0x0;
  return;
}



/* ImageTexture3D::create(Image::Format, int, int, int, bool, Vector<Ref<Image> > const&) */

undefined8 __thiscall
ImageTexture3D::create
          (ImageTexture3D *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,ImageTexture3D param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)RenderingServer::get_singleton();
  lVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (lVar2 != 0) {
    if (*(long *)(this + 0x2d0) == 0) {
      *(long *)(this + 0x2d0) = lVar2;
    }
    else {
      plVar1 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(this + 0x2d0),lVar2);
    }
    this[0x2e8] = param_6;
    *(ulong *)(this + 0x2d8) = CONCAT44(param_3,param_2);
    *(ulong *)(this + 0x2e0) = CONCAT44(param_5,param_4);
    return 0;
  }
  _err_print_error("create","scene/resources/image_texture.cpp",0x1a8,
                   "Condition \"tex.is_null()\" is true. Returning: ERR_CANT_CREATE",0,0);
  return 0x14;
}



/* ImageTexture3D::update(Vector<Ref<Image> > const&) */

void __thiscall ImageTexture3D::update(ImageTexture3D *this,Vector *param_1)

{
  long *plVar1;
  
  if (*(long *)(this + 0x2d0) != 0) {
    plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010222c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 400))(plVar1,*(undefined8 *)(this + 0x2d0),param_1);
    return;
  }
  _err_print_error("update","scene/resources/image_texture.cpp",0x1ba,
                   "Condition \"!texture.is_valid()\" is true.",0,0);
  return;
}



/* ImageTexture3D::~ImageTexture3D() */

void __thiscall ImageTexture3D::~ImageTexture3D(ImageTexture3D *this)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00117dd8;
  if (*(long *)(this + 0x2d0) != 0) {
    lVar1 = RenderingServer::get_singleton();
    if (lVar1 == 0) {
      _err_print_error("~ImageTexture3D","scene/resources/image_texture.cpp",0x20c,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      Texture3D::~Texture3D((Texture3D *)this);
      return;
    }
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x11b0))(plVar2,*(undefined8 *)(this + 0x2d0));
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = String::split;
  if (bVar3) {
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010236e;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010236e;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010236e;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010236e;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010236e;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_0010236e:
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  return;
}



/* ImageTexture3D::~ImageTexture3D() */

void __thiscall ImageTexture3D::~ImageTexture3D(ImageTexture3D *this)

{
  ~ImageTexture3D(this);
  operator_delete(this,0x2f0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageTexture3D::ImageTexture3D() */

void __thiscall ImageTexture3D::ImageTexture3D(ImageTexture3D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  Resource::Resource((Resource *)this);
  *(code **)this = String::split;
  StringName::StringName((StringName *)(this + 0x240),"_get_format",false);
  this[0x248] = (ImageTexture3D)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_get_width",false);
  this[0x260] = (ImageTexture3D)0x0;
  *(undefined8 *)(this + 0x268) = 0;
  StringName::StringName((StringName *)(this + 0x270),"_get_height",false);
  this[0x278] = (ImageTexture3D)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_get_depth",false);
  this[0x290] = (ImageTexture3D)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_has_mipmaps",false);
  this[0x2a8] = (ImageTexture3D)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_get_data",false);
  uVar2 = _UNK_00118b58;
  uVar1 = __LC81;
  this[0x2c0] = (ImageTexture3D)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00117dd8;
  *(undefined8 *)(this + 0x2d0) = 0;
  this[0x2e8] = (ImageTexture3D)0x0;
  *(undefined8 *)(this + 0x2d8) = uVar1;
  *(undefined8 *)(this + 0x2e0) = uVar2;
  return;
}



/* Texture2DArray::_bind_methods() */

void Texture2DArray::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *this;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68 [2];
  long *local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_68,(char ***)"create_placeholder",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(undefined ***)this = &PTR__gen_argument_type_00118990;
  *(undefined8 *)(this + 0x58) = 0x201;
  *(undefined8 *)(this + 0x60) = 0;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_80 = 0;
  local_78 = "Texture2DArray";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_80);
  StringName::StringName((StringName *)&local_78,(String *)&local_80,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  ClassDB::bind_methodfi(1,this,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar4 = local_58 + -2;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_58[-1];
      local_58 = (long *)0x0;
      if (lVar1 != 0) {
        lVar5 = 0;
        plVar4 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar1 != lVar5);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Cubemap::_bind_methods() */

void Cubemap::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *this;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68 [2];
  long *local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_68,(char ***)"create_placeholder",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(undefined ***)this = &PTR__gen_argument_type_00118990;
  *(undefined8 *)(this + 0x58) = 0x201;
  *(undefined8 *)(this + 0x60) = 0;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_80 = 0;
  local_78 = "Cubemap";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_80);
  StringName::StringName((StringName *)&local_78,(String *)&local_80,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  ClassDB::bind_methodfi(1,this,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar4 = local_58 + -2;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_58[-1];
      local_58 = (long *)0x0;
      if (lVar1 != 0) {
        lVar5 = 0;
        plVar4 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar1 != lVar5);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CubemapArray::_bind_methods() */

void CubemapArray::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *this;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68 [2];
  long *local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_68,(char ***)"create_placeholder",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(undefined ***)this = &PTR__gen_argument_type_00118990;
  *(undefined8 *)(this + 0x58) = 0x201;
  *(undefined8 *)(this + 0x60) = 0;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_80 = 0;
  local_78 = "CubemapArray";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_80);
  StringName::StringName((StringName *)&local_78,(String *)&local_80,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  ClassDB::bind_methodfi(1,this,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar4 = local_58 + -2;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_58[-1];
      local_58 = (long *)0x0;
      if (lVar1 != 0) {
        lVar5 = 0;
        plVar4 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar1 != lVar5);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
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
      if ((code *)PTR__bind_methods_0011e008 != RefCounted::_bind_methods) {
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



/* PlaceholderTextureLayered::initialize_class() [clone .part.0] */

void PlaceholderTextureLayered::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (TextureLayered::initialize_class()::initialized == '\0') {
    if (Texture::initialize_class()::initialized == '\0') {
      Texture::initialize_class();
    }
    local_68 = 0;
    local_50 = 7;
    local_58 = "Texture";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "TextureLayered";
    local_70 = 0;
    local_50 = 0xe;
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != TextureLayered::_bind_methods) {
      TextureLayered::_bind_methods();
    }
    TextureLayered::initialize_class()::initialized = '\x01';
  }
  local_58 = "TextureLayered";
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "PlaceholderTextureLayered";
  local_70 = 0;
  local_50 = 0x19;
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
  if ((code *)PTR__bind_methods_0011e010 != TextureLayered::_bind_methods) {
    PlaceholderTextureLayered::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImageTexture::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall ImageTexture::_get_property_list(ImageTexture *this,List *param_1)

{
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
  local_88 = 0;
  local_90 = 0;
  local_78 = "Image";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "image";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0x11;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x800002;
    if (local_60 != 0x11) {
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      goto LAB_00103180;
    }
  }
  local_50 = 0x800002;
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
LAB_00103180:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImageTexture::_bind_methods() */

void ImageTexture::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_90;
  long local_88 [2];
  long *local_78;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = "image";
  local_60 = 0;
  uVar6 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"create_from_image",uVar6);
  StringName::StringName((StringName *)&local_90,"ImageTexture",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00118630;
  *(code **)(pMVar4 + 0x58) = create_from_image;
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar4,0));
  MethodBind::_set_returns(SUB81(pMVar4,0));
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_90);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_88,(char ***)"get_format",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTexture,Image::Format>(get_format);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "image";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"set_image",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTexture,Ref<Image>const&>(set_image);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "image";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"update",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTexture,Ref<Image>const&>(update);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "size";
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"set_size_override",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTexture,Vector2i_const&>(set_size_override);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTextureLayered::_bind_methods() */

void ImageTextureLayered::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  long *local_a8;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_88 = "images";
  local_58 = &local_88;
  uVar6 = (uint)&local_58;
  D_METHODP((char *)&local_b8,(char ***)"create_from_images",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTextureLayered,Error,TypedArray<Image>const&>
                     (_create_from_images);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar5 = local_a8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  auStack_50._0_8_ = &pcStack_70;
  local_78 = "image";
  pcStack_70 = "layer";
  local_68 = 0;
  local_58 = &local_78;
  D_METHODP((char *)&local_b8,(char ***)"update_layer",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTextureLayered,Ref<Image>const&,int>(update_layer);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar5 = local_a8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"_get_images",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00118870;
  *(code **)(pMVar4 + 0x58) = _get_images;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_d0 = 0;
  local_c8 = "ImageTextureLayered";
  local_c0 = 0x13;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_c8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar5 = local_a8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "images";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_b8,(char ***)"_set_images",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTextureLayered,TypedArray<Image>const&>(_set_images);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar5 = local_a8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar7 = 0;
      local_a8 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "Image";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_b8 = "_images";
  local_b0 = 7;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,0x1c,(StrRange *)&local_f0,0x1f,(StrRange *)&local_e8,
             0x80000a,&local_e0);
  local_c8 = "ImageTextureLayered";
  local_f8 = 0;
  local_c0 = 0x13;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImageTextureLayered::initialize_class() [clone .part.0] */

void ImageTextureLayered::initialize_class(void)

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
    if ((code *)PTR__bind_methods_0011e018 != Resource::_bind_methods) {
      TextureLayered::_bind_methods();
    }
    TextureLayered::initialize_class()::initialized = '\x01';
  }
  local_48 = "TextureLayered";
  local_58 = 0;
  local_40 = 0xe;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "ImageTextureLayered";
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
  initialize_class()::initialized = 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImageTexture3D::_bind_methods() */

void ImageTexture3D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  char *local_b8;
  char *pcStack_b0;
  char *local_a8;
  char *pcStack_a0;
  char *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  char **local_78;
  undefined1 auStack_70 [16];
  char **ppcStack_60;
  char **local_58;
  undefined **ppuStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_b8 = "format";
  pcStack_b0 = "width";
  local_a8 = "height";
  pcStack_a0 = "depth";
  local_98 = "use_mipmaps";
  puStack_90 = PTR__LC112_00118b60;
  ppcStack_60 = &pcStack_a0;
  local_58 = &local_98;
  auStack_70._8_8_ = &local_a8;
  auStack_70._0_8_ = &pcStack_b0;
  ppuStack_50 = &puStack_90;
  uVar6 = (uint)&local_78;
  local_78 = &local_b8;
  D_METHODP((char *)&local_e8,(char ***)"create",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTexture3D,Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>
                     (_create);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_d8;
  if (local_d8 != (long *)0x0) {
    LOCK();
    plVar5 = local_d8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_d8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_d8[-1];
      lVar7 = 0;
      local_d8 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  local_b8 = "data";
  pcStack_b0 = (char *)0x0;
  local_78 = &local_b8;
  D_METHODP((char *)&local_e8,(char ***)"update",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTexture3D,TypedArray<Image>const&>(_update);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_d8;
  if (local_d8 != (long *)0x0) {
    LOCK();
    plVar5 = local_d8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_d8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_d8[-1];
      lVar7 = 0;
      local_d8 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_e8,(char ***)"_get_images",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00118870;
  *(code **)(pMVar4 + 0x58) = _get_images;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_100 = 0;
  local_f8 = "ImageTexture3D";
  local_f0 = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_f8,(String *)&local_100,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_f8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_d8;
  if (local_d8 != (long *)0x0) {
    LOCK();
    plVar5 = local_d8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_d8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_d8[-1];
      lVar7 = 0;
      local_d8 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  local_b8 = "images";
  pcStack_b0 = (char *)0x0;
  local_78 = &local_b8;
  D_METHODP((char *)&local_e8,(char ***)"_set_images",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar4 = create_method_bind<ImageTexture3D,TypedArray<Image>const&>(_set_images);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_d8;
  if (local_d8 != (long *)0x0) {
    LOCK();
    plVar5 = local_d8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_d8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_d8[-1];
      lVar7 = 0;
      local_d8 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_100,true);
  _scs_create((char *)&local_108,true);
  local_e8 = "Image";
  local_110 = 0;
  local_118 = 0;
  local_e0 = 5;
  String::parse_latin1((StrRange *)&local_118);
  local_120 = 0;
  local_e8 = "_images";
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_120);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,0x1c,(StrRange *)&local_120,0x1f,(StrRange *)&local_118,
             0x80000a,&local_110);
  local_f8 = "ImageTexture3D";
  local_128 = 0;
  local_f0 = 0xe;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_f8,(String *)&local_128,false);
  ClassDB::add_property
            ((StringName *)&local_f8,(PropertyInfo *)&local_e8,(StringName *)&local_108,
             (StringName *)&local_100,-1);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((((StringName::configured != '\0') &&
       ((local_110 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_108 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_100 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImageTextureLayered::_get_images() const */

void ImageTextureLayered::_get_images(void)

{
  char cVar1;
  int iVar2;
  long *in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_50 = (undefined1  [16])0x0;
  local_68 = (Object *)0x109e6d;
  local_58[0] = 0;
  local_58[1] = 0;
  local_70 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)in_RDI,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (0 < *(int *)((long)in_RSI + 0x304)) {
    iVar2 = 0;
LAB_00104bfb:
    do {
      (**(code **)(*in_RSI + 0x1f8))((StringName *)&local_68);
      Variant::Variant((Variant *)local_58,local_68);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_68 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          iVar2 = iVar2 + 1;
          memdelete<Image>((Image *)local_68);
          if (*(int *)((long)in_RSI + 0x304) <= iVar2) break;
          goto LAB_00104bfb;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((long)in_RSI + 0x304));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture::is_pixel_opaque(int, int) const */

undefined8 ImageTexture::is_pixel_opaque(int param_1,int param_2)

{
  Image *pIVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int extraout_var;
  undefined8 uVar5;
  long *plVar6;
  Image *pIVar7;
  BitMap *this;
  BitMap *pBVar8;
  undefined4 in_register_0000003c;
  long *plVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  Image *local_60;
  Image *local_58;
  Object *local_50;
  undefined8 local_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar9[0x61] == 0) {
    if (*(code **)(*plVar9 + 0x210) == get_image) {
      if ((char)plVar9[0x62] != '\0') {
        plVar6 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar6 + 0x1c0))(&local_60,plVar6,plVar9[0x5d]);
        goto LAB_00104e20;
      }
      local_60 = (Image *)0x0;
    }
    else {
      (**(code **)(*plVar9 + 0x210))(&local_60,plVar9);
LAB_00104e20:
      if (local_60 != (Image *)0x0) {
        cVar2 = Image::is_compressed();
        if (cVar2 != '\0') {
          pIVar7 = (Image *)0x0;
          (**(code **)(*(long *)local_60 + 0x198))(&local_50,local_60,0);
          local_58 = (Image *)0x0;
          if (local_50 != (Object *)0x0) {
            pIVar7 = (Image *)__dynamic_cast(local_50,&Object::typeinfo,&Image::typeinfo,0);
            if (pIVar7 != (Image *)0x0) {
              local_48 = 0;
              local_58 = pIVar7;
              cVar2 = RefCounted::reference();
              if (cVar2 == '\0') {
                local_58 = (Image *)0x0;
                pIVar7 = (Image *)0x0;
              }
              Ref<Image>::unref((Ref<Image> *)&local_48);
              if (local_50 == (Object *)0x0) goto LAB_00104f00;
            }
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_50), cVar2 != '\0')) {
              (**(code **)(*(long *)local_50 + 0x140))();
              Memory::free_static(local_50,false);
            }
          }
LAB_00104f00:
          Image::decompress();
          pIVar1 = local_60;
          if (local_60 != pIVar7) {
            local_60 = pIVar7;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              local_60 = (Image *)0x0;
            }
            if ((pIVar1 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
              memdelete<Image>(pIVar1);
            }
          }
          Ref<Image>::unref((Ref<Image> *)&local_58);
        }
        this = (BitMap *)operator_new(600,"");
        BitMap::BitMap(this);
        postinitialize_handler((Object *)this);
        cVar2 = RefCounted::init_ref();
        if (cVar2 == '\0') {
          pOVar10 = (Object *)plVar9[0x61];
          if (pOVar10 != (Object *)0x0) {
            plVar9[0x61] = 0;
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              cVar2 = predelete_handler(pOVar10);
              this = (BitMap *)0x0;
              if (cVar2 != '\0') goto LAB_0010509f;
            }
            goto LAB_00104fc8;
          }
        }
        else {
          pOVar10 = (Object *)plVar9[0x61];
          pBVar8 = (BitMap *)pOVar10;
          if (this != (BitMap *)pOVar10) {
            plVar9[0x61] = (long)this;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              plVar9[0x61] = 0;
            }
            pBVar8 = this;
            if (((pOVar10 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0'))
               && (cVar2 = predelete_handler(pOVar10), cVar2 != '\0')) {
LAB_0010509f:
              (**(code **)(*(long *)pOVar10 + 0x140))();
              Memory::free_static(pOVar10,false);
              pBVar8 = this;
              if (this == (BitMap *)0x0) goto LAB_00104fc8;
            }
          }
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)pBVar8), cVar2 != '\0')) {
            (**(code **)(*(long *)pBVar8 + 0x140))(pBVar8);
            Memory::free_static(pBVar8,false);
          }
LAB_00104fc8:
          pOVar10 = (Object *)plVar9[0x61];
        }
        BitMap::create_from_image_alpha((Ref *)pOVar10,_LC115);
      }
    }
    Ref<Image>::unref((Ref<Image> *)&local_60);
    if (plVar9[0x61] != 0) goto LAB_00104ceb;
  }
  else {
LAB_00104ceb:
    iVar3 = BitMap::get_size();
    BitMap::get_size();
    if ((iVar3 != 0) && (extraout_var != 0)) {
      iVar4 = (param_2 * iVar3) / (int)plVar9[0x5f];
      if (iVar4 <= iVar3) {
        iVar3 = iVar4;
      }
      if (iVar4 < 0) {
        iVar3 = 0;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = BitMap::get_bit((int)plVar9[0x61],iVar3);
        return uVar5;
      }
      goto LAB_001050e8;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001050e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture::_set(StringName const&, Variant const&) */

undefined4 __thiscall ImageTexture::_set(ImageTexture *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  Image *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = StringName::operator==(param_1,"image");
  if ((char)uVar2 != '\0') {
    local_38 = (Image *)0x0;
    Ref<Image>::operator=((Ref<Image> *)&local_38,param_2);
    set_image(this,(Ref *)&local_38);
    if (local_38 != (Image *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        memdelete<Image>(local_38);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture::_get(StringName const&, Variant&) const */

undefined4 __thiscall ImageTexture::_get(ImageTexture *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  Object *local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = StringName::operator==(param_1,"image");
  if ((char)uVar2 != '\0') {
    if (*(code **)(*(long *)this + 0x210) == get_image) {
      if (this[0x310] == (ImageTexture)0x0) {
        local_40 = (Object *)0x0;
      }
      else {
        plVar3 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar3 + 0x1c0))(&local_40,plVar3,*(undefined8 *)(this + 0x2e8));
      }
    }
    else {
      (**(code **)(*(long *)this + 0x210))(&local_40,this);
    }
    Variant::Variant((Variant *)local_38,local_40);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
    if (local_40 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        memdelete<Image>((Image *)local_40);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture::reload_from_file() */

void __thiscall ImageTexture::reload_from_file(ImageTexture *this)

{
  Image *pIVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  Resource *this_00;
  long lVar5;
  Resource *pRVar6;
  Image *pIVar7;
  long in_FS_OFFSET;
  byte bVar8;
  String local_50 [8];
  Image *local_48;
  Resource *local_40;
  Object *local_38;
  long local_30;
  
  bVar8 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Resource::get_path();
  ResourceLoader::path_remap(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  cVar3 = String::is_resource_file();
  if (cVar3 == '\0') goto LAB_0010548d;
  local_48 = (Image *)0x0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar6 = this_00;
  for (lVar5 = 0x4d; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pRVar6 = 0;
    pRVar6 = pRVar6 + (ulong)bVar8 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(code **)this_00 = RefCounted::unreference;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar3 = RefCounted::init_ref();
  pIVar1 = local_48;
  if (cVar3 == '\0') {
    if (local_48 != (Image *)0x0) {
      local_48 = (Image *)0x0;
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        memdelete<Image>(pIVar1);
      }
      goto LAB_001053ed;
    }
    local_38 = (Object *)0x0;
LAB_0010540e:
    local_40 = (Resource *)0x0;
  }
  else {
    pIVar7 = local_48;
    if (this_00 != (Resource *)local_48) {
      local_48 = (Image *)this_00;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_48 = (Image *)0x0;
      }
      pIVar7 = (Image *)this_00;
      if ((pIVar1 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
        memdelete<Image>(pIVar1);
      }
    }
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(pIVar7);
    }
LAB_001053ed:
    local_38 = (Object *)0x0;
    if (local_48 == (Image *)0x0) goto LAB_0010540e;
    local_40 = (Resource *)local_48;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') goto LAB_0010540e;
  }
  iVar4 = ImageLoader::load_image(_LC116,local_50,&local_40,(CowData<char32_t> *)&local_38,0);
  if ((local_40 != (Resource *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    memdelete<Image>((Image *)local_40);
  }
  if (((local_38 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar2 = local_38, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if (iVar4 == 0) {
    set_image(this,(Ref *)&local_48);
  }
  else {
    Resource::reload_from_file();
    Object::notify_property_list_changed();
    Resource::emit_changed();
  }
  if ((local_48 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    memdelete<Image>(local_48);
  }
LAB_0010548d:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImageTexture3D::_get_images() const */

Array * ImageTexture3D::_get_images(void)

{
  long *in_RSI;
  Array *in_RDI;
  long lVar1;
  long in_FS_OFFSET;
  Array local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_88);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Image";
  local_58[0] = 0;
  local_58[1] = 0;
  local_78 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_78);
  StringName::StringName((StringName *)&local_68,(String *)&local_78,false);
  Array::set_typed((uint)local_88,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (in_RSI[0x5a] != 0) {
    lVar1 = 0;
    (**(code **)(*in_RSI + 0x1f0))((StrRange *)&local_78);
    if (local_70 == 0) {
      _err_print_error("_get_images","scene/resources/image_texture.cpp",0x1d5,
                       "Condition \"raw_images.is_empty()\" is true. Returning: TypedArray<Image>()"
                       ,0,0);
      Array::Array(in_RDI);
      local_50 = (undefined1  [16])0x0;
      local_68 = "Image";
      local_58[0] = 0;
      local_58[1] = 0;
      local_80 = 0;
      local_60 = 5;
      String::parse_latin1((StrRange *)&local_80);
      StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
      Array::set_typed((uint)in_RDI,(StringName *)0x18,(Variant *)&local_68);
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_70);
      goto LAB_0010575f;
    }
    do {
      while( true ) {
        if (*(long *)(local_70 + -8) <= lVar1) goto LAB_00105748;
        Variant::Variant((Variant *)local_58,*(Object **)(local_70 + lVar1 * 8));
        Array::push_back((Variant *)local_88);
        if (Variant::needs_deinit[local_58[0]] == '\0') break;
        lVar1 = lVar1 + 1;
        Variant::_clear_internal();
        if (local_70 == 0) goto LAB_00105748;
      }
      lVar1 = lVar1 + 1;
    } while (local_70 != 0);
LAB_00105748:
    CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_70);
  }
  Array::Array(in_RDI,local_88);
LAB_0010575f:
  Array::~Array(local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
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



/* ImageTexture3D::_create(Image::Format, int, int, int, bool, TypedArray<Image> const&) */

undefined4 __thiscall
ImageTexture3D::_create
          (ImageTexture3D *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined1 param_6,int param_7)

{
  undefined8 *puVar1;
  Image *pIVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  Image *pIVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 local_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50[0] = 0;
  iVar5 = Array::size();
  CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)local_50,(long)iVar5);
  if (local_50[0] != 0) {
    lVar9 = 0;
LAB_00105a92:
    do {
      if (*(long *)(local_50[0] + -8) <= lVar9) break;
      Array::operator[](param_7);
      if (local_50[0] == 0) {
        lVar8 = 0;
LAB_00105b93:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar9,lVar8,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar8 = *(long *)(local_50[0] + -8);
      if (lVar8 <= lVar9) goto LAB_00105b93;
      CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)local_50);
      puVar1 = (undefined8 *)(local_50[0] + lVar9 * 8);
      pIVar7 = (Image *)Variant::get_validated_object();
      pIVar2 = (Image *)*puVar1;
      if (pIVar7 != pIVar2) {
        if (pIVar7 == (Image *)0x0) {
          if (pIVar2 != (Image *)0x0) {
            *puVar1 = 0;
            cVar4 = RefCounted::unreference();
joined_r0x00105a7a:
            if (cVar4 != '\0') {
              lVar9 = lVar9 + 1;
              memdelete<Image>(pIVar2);
              if (local_50[0] == 0) break;
              goto LAB_00105a92;
            }
          }
        }
        else {
          pIVar7 = (Image *)__dynamic_cast(pIVar7,&Object::typeinfo,&Image::typeinfo,0);
          if (pIVar2 != pIVar7) {
            *puVar1 = pIVar7;
            if ((pIVar7 != (Image *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
              *puVar1 = 0;
            }
            if (pIVar2 != (Image *)0x0) {
              cVar4 = RefCounted::unreference();
              goto joined_r0x00105a7a;
            }
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (local_50[0] != 0);
  }
  uVar6 = create(this,param_2,param_3,param_4,param_5,param_6,local_58);
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture3D::_set_images(TypedArray<Image> const&) */

void __thiscall ImageTexture3D::_set_images(ImageTexture3D *this,TypedArray *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  Image *pIVar9;
  Image *pIVar10;
  char *pcVar11;
  undefined8 uVar12;
  int iVar13;
  long in_FS_OFFSET;
  char local_59;
  Image *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = Array::size();
  if (iVar3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0x1e0;
      pcVar11 = "Condition \"new_layers == 0\" is true.";
LAB_00105ede:
      _err_print_error("_set_images","scene/resources/image_texture.cpp",uVar12,pcVar11,0,0);
      return;
    }
  }
  else {
    Array::operator[]((int)param_1);
    lVar8 = Variant::get_validated_object();
    if (((lVar8 == 0) ||
        (pIVar9 = (Image *)__dynamic_cast(lVar8,&Object::typeinfo,&Image::typeinfo,0),
        pIVar9 == (Image *)0x0)) ||
       (local_48 = pIVar9, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = 0x1e2;
        pcVar11 = "Condition \"img_base.is_null()\" is true.";
        goto LAB_00105ede;
      }
    }
    else {
      iVar13 = 1;
      iVar3 = 0;
      iVar4 = Image::get_format();
      iVar5 = Image::get_width();
      iVar6 = Image::get_height();
      local_59 = '\0';
      iVar7 = Array::size();
      if (1 < iVar7) {
        do {
          Array::operator[]((int)param_1);
          lVar8 = Variant::get_validated_object();
          if (((lVar8 == 0) ||
              (pIVar10 = (Image *)__dynamic_cast(lVar8,&Object::typeinfo,&Image::typeinfo,0),
              pIVar10 == (Image *)0x0)) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
            _err_print_error("_set_images","scene/resources/image_texture.cpp",0x1ec,
                             "Condition \"img.is_null()\" is true.",0,0);
            goto LAB_00105d1a;
          }
          iVar7 = Image::get_format();
          if (iVar7 != iVar4) {
            _err_print_error("_set_images","scene/resources/image_texture.cpp",0x1ed,
                             "Condition \"img->get_format() != new_format\" is true.",
                             "All images must share the same format.",0,0);
            cVar1 = RefCounted::unreference();
            if (cVar1 == '\0') goto LAB_00105d1a;
            memdelete<Image>(pIVar10);
            cVar1 = RefCounted::unreference();
            goto joined_r0x00105e83;
          }
          iVar7 = Image::get_width();
          if ((iVar7 == iVar5) && (iVar7 = Image::get_height(), iVar7 == iVar6)) {
            cVar2 = RefCounted::unreference();
          }
          else {
            if (iVar3 == 0) {
              iVar3 = iVar13;
            }
            cVar2 = RefCounted::unreference();
            local_59 = cVar1;
          }
          if (cVar2 != '\0') {
            memdelete<Image>(pIVar10);
          }
          iVar13 = iVar13 + 1;
          iVar7 = Array::size();
        } while (iVar13 < iVar7);
      }
      if (iVar3 == 0) {
        iVar3 = Array::size();
      }
      iVar3 = _create(this,iVar4,iVar5,iVar6,iVar3,local_59,param_1);
      if (iVar3 == 0) {
        Ref<Image>::unref((Ref<Image> *)&local_48);
      }
      else {
        _err_print_error("_set_images","scene/resources/image_texture.cpp",0x1fc,
                         "Condition \"err != OK\" is true.",0,0);
LAB_00105d1a:
        cVar1 = RefCounted::unreference();
joined_r0x00105e83:
        if (cVar1 != '\0') {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            memdelete<Image>(pIVar9);
            return;
          }
          goto LAB_00105f62;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
  }
LAB_00105f62:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture3D::_update(TypedArray<Image> const&) */

void __thiscall ImageTexture3D::_update(ImageTexture3D *this,TypedArray *param_1)

{
  undefined8 *puVar1;
  Image *pIVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  Image *pIVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  Vector local_58 [8];
  long local_50 [2];
  long local_40;
  
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50[0] = 0;
  iVar5 = Array::size();
  CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)local_50,(long)iVar5);
joined_r0x00105fcc:
  do {
    if ((local_50[0] == 0) || (*(long *)(local_50[0] + -8) <= lVar7)) {
      update(this,local_58);
      CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_50);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Array::operator[]((int)param_1);
    if (local_50[0] == 0) {
      lVar8 = 0;
LAB_00106113:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar8,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = *(long *)(local_50[0] + -8);
    if (lVar8 <= lVar7) goto LAB_00106113;
    CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)local_50);
    puVar1 = (undefined8 *)(local_50[0] + lVar7 * 8);
    pIVar6 = (Image *)Variant::get_validated_object();
    pIVar2 = (Image *)*puVar1;
    if (pIVar6 != pIVar2) {
      if (pIVar6 == (Image *)0x0) {
        if (pIVar2 != (Image *)0x0) {
          *puVar1 = 0;
          cVar4 = RefCounted::unreference();
joined_r0x0010601a:
          if (cVar4 != '\0') {
            lVar7 = lVar7 + 1;
            memdelete<Image>(pIVar2);
            goto joined_r0x00105fcc;
          }
        }
      }
      else {
        pIVar6 = (Image *)__dynamic_cast(pIVar6,&Object::typeinfo,&Image::typeinfo,0);
        if (pIVar2 != pIVar6) {
          *puVar1 = pIVar6;
          if ((pIVar6 != (Image *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
            *puVar1 = 0;
          }
          if (pIVar2 != (Image *)0x0) {
            cVar4 = RefCounted::unreference();
            goto joined_r0x0010601a;
          }
        }
      }
    }
    lVar7 = lVar7 + 1;
  } while( true );
}



/* ImageTextureLayered::_create_from_images(TypedArray<Image> const&) */

undefined4 __thiscall
ImageTextureLayered::_create_from_images(ImageTextureLayered *this,TypedArray *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  Image *pIVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  Image *pIVar8;
  Image *pIVar9;
  int iVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_60;
  undefined1 local_58 [8];
  long local_50 [2];
  long local_40;
  
  iVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  iVar5 = Array::size();
  if (0 < iVar5) {
    do {
      Array::operator[]((int)param_1);
      lVar7 = Variant::get_validated_object();
      if (((lVar7 == 0) ||
          (pIVar8 = (Image *)__dynamic_cast(lVar7,&Object::typeinfo,&Image::typeinfo,0),
          pIVar8 == (Image *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        uVar6 = 0x1f;
        _err_print_error("_create_from_images","scene/resources/image_texture.cpp",0x112,
                         "Condition \"img.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                        );
        goto LAB_0010621e;
      }
      cVar4 = RefCounted::reference();
      pIVar9 = (Image *)0x0;
      if (cVar4 != '\0') {
        pIVar9 = pIVar8;
      }
      if (local_60 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = *(long *)(local_60 + -8) + 1;
      }
      iVar5 = CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)&local_60,lVar7);
      if (iVar5 == 0) {
        if (local_60 != 0) {
          lVar7 = *(long *)(local_60 + -8);
          lVar11 = lVar7 + -1;
          if (lVar11 < 0) goto LAB_0010646a;
          CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)&local_60);
          puVar2 = (undefined8 *)(local_60 + lVar11 * 8);
          pIVar3 = (Image *)*puVar2;
          if (pIVar3 == pIVar9) goto LAB_001063b5;
          *puVar2 = pIVar9;
          if (pIVar9 == (Image *)0x0) {
            if ((pIVar3 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
              memdelete<Image>(pIVar3);
            }
            goto LAB_00106310;
          }
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *puVar2 = 0;
            if (pIVar3 != (Image *)0x0) {
              cVar4 = RefCounted::unreference();
              goto joined_r0x0010644a;
            }
          }
          else if (pIVar3 != (Image *)0x0) {
            cVar4 = RefCounted::unreference();
joined_r0x0010644a:
            if (cVar4 != '\0') {
              memdelete<Image>(pIVar3);
            }
          }
          cVar4 = RefCounted::unreference();
          goto joined_r0x001063c8;
        }
        lVar11 = -1;
        lVar7 = 0;
LAB_0010646a:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar7,"p_index","size()","",false,
                   false);
        if (pIVar9 != (Image *)0x0) goto LAB_001063be;
LAB_00106310:
        cVar4 = RefCounted::unreference();
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
LAB_001063b5:
        if (pIVar9 == (Image *)0x0) goto LAB_00106310;
LAB_001063be:
        cVar4 = RefCounted::unreference();
joined_r0x001063c8:
        if (cVar4 == '\0') goto LAB_00106310;
        memdelete<Image>(pIVar9);
        cVar4 = RefCounted::unreference();
      }
      if (cVar4 != '\0') {
        memdelete<Image>(pIVar8);
      }
      iVar10 = iVar10 + 1;
      iVar5 = Array::size();
    } while (iVar10 < iVar5);
  }
  local_50[0] = 0;
  plVar1 = (long *)(local_60 + -0x10);
  if (local_60 != 0) {
    do {
      lVar7 = *plVar1;
      if (lVar7 == 0) goto LAB_0010636f;
      LOCK();
      lVar11 = *plVar1;
      bVar12 = lVar7 == lVar11;
      if (bVar12) {
        *plVar1 = lVar7 + 1;
        lVar11 = lVar7;
      }
      UNLOCK();
    } while (!bVar12);
    if (lVar11 != -1) {
      local_50[0] = local_60;
    }
  }
LAB_0010636f:
  uVar6 = create_from_images(this,local_58);
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_50);
LAB_0010621e:
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* ImageTextureLayered::_set_images(TypedArray<Image> const&) */

void __thiscall ImageTextureLayered::_set_images(ImageTextureLayered *this,TypedArray *param_1)

{
  int iVar1;
  
  iVar1 = _create_from_images(this,param_1);
  if (iVar1 == 0) {
    return;
  }
  _err_print_error("_set_images","scene/resources/image_texture.cpp",0x122,
                   "Condition \"_create_from_images(p_images) != OK\" is true.",0,0);
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



/* Texture::is_class_ptr(void*) const */

uint __thiscall Texture::is_class_ptr(Texture *this,void *param_1)

{
  return (uint)CONCAT71(0x118a,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* ImageTexture::is_class_ptr(void*) const */

uint ImageTexture::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x118a,in_RSI == &Texture2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &Texture::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* ImageTexture::_validate_propertyv(PropertyInfo&) const */

void ImageTexture::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ImageTexture::_property_can_revertv(StringName const&) const */

undefined8 ImageTexture::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ImageTexture::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImageTexture::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageTexture::_notificationv(int, bool) */

void ImageTexture::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ImageTextureLayered::is_class_ptr(void*) const */

uint ImageTextureLayered::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x118a,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &Texture::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* ImageTextureLayered::_getv(StringName const&, Variant&) const */

undefined8 ImageTextureLayered::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageTextureLayered::_setv(StringName const&, Variant const&) */

undefined8 ImageTextureLayered::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageTextureLayered::_validate_propertyv(PropertyInfo&) const */

void ImageTextureLayered::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ImageTextureLayered::_property_can_revertv(StringName const&) const */

undefined8 ImageTextureLayered::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ImageTextureLayered::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImageTextureLayered::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageTextureLayered::_notificationv(int, bool) */

void ImageTextureLayered::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ImageTexture3D::is_class_ptr(void*) const */

uint ImageTexture3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x118a,in_RSI == &Texture3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &Texture::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118a,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* ImageTexture3D::_getv(StringName const&, Variant&) const */

undefined8 ImageTexture3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageTexture3D::_setv(StringName const&, Variant const&) */

undefined8 ImageTexture3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageTexture3D::_validate_propertyv(PropertyInfo&) const */

void ImageTexture3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ImageTexture3D::_property_can_revertv(StringName const&) const */

undefined8 ImageTexture3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ImageTexture3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImageTexture3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageTexture3D::_notificationv(int, bool) */

void ImageTexture3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Texture2DArray::_getv(StringName const&, Variant&) const */

undefined8 Texture2DArray::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture2DArray::_setv(StringName const&, Variant const&) */

undefined8 Texture2DArray::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture2DArray::_validate_propertyv(PropertyInfo&) const */

void Texture2DArray::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Texture2DArray::_property_can_revertv(StringName const&) const */

undefined8 Texture2DArray::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Texture2DArray::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Texture2DArray::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture2DArray::_notificationv(int, bool) */

void Texture2DArray::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Cubemap::_getv(StringName const&, Variant&) const */

undefined8 Cubemap::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Cubemap::_setv(StringName const&, Variant const&) */

undefined8 Cubemap::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Cubemap::_validate_propertyv(PropertyInfo&) const */

void Cubemap::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Cubemap::_property_can_revertv(StringName const&) const */

undefined8 Cubemap::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Cubemap::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Cubemap::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Cubemap::_notificationv(int, bool) */

void Cubemap::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CubemapArray::_getv(StringName const&, Variant&) const */

undefined8 CubemapArray::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CubemapArray::_setv(StringName const&, Variant const&) */

undefined8 CubemapArray::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CubemapArray::_validate_propertyv(PropertyInfo&) const */

void CubemapArray::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CubemapArray::_property_can_revertv(StringName const&) const */

undefined8 CubemapArray::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CubemapArray::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CubemapArray::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CubemapArray::_notificationv(int, bool) */

void CubemapArray::_notificationv(int param_1,bool param_2)

{
  return;
}



/* PlaceholderTexture2DArray::_getv(StringName const&, Variant&) const */

undefined8 PlaceholderTexture2DArray::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PlaceholderTexture2DArray::_setv(StringName const&, Variant const&) */

undefined8 PlaceholderTexture2DArray::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PlaceholderTexture2DArray::_validate_propertyv(PropertyInfo&) const */

void PlaceholderTexture2DArray::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PlaceholderTexture2DArray::_property_can_revertv(StringName const&) const */

undefined8 PlaceholderTexture2DArray::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PlaceholderTexture2DArray::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PlaceholderTexture2DArray::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PlaceholderTexture2DArray::_notificationv(int, bool) */

void PlaceholderTexture2DArray::_notificationv(int param_1,bool param_2)

{
  return;
}



/* PlaceholderCubemap::_getv(StringName const&, Variant&) const */

undefined8 PlaceholderCubemap::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PlaceholderCubemap::_setv(StringName const&, Variant const&) */

undefined8 PlaceholderCubemap::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PlaceholderCubemap::_validate_propertyv(PropertyInfo&) const */

void PlaceholderCubemap::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PlaceholderCubemap::_property_can_revertv(StringName const&) const */

undefined8 PlaceholderCubemap::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PlaceholderCubemap::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PlaceholderCubemap::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PlaceholderCubemap::_notificationv(int, bool) */

void PlaceholderCubemap::_notificationv(int param_1,bool param_2)

{
  return;
}



/* PlaceholderCubemapArray::_getv(StringName const&, Variant&) const */

undefined8 PlaceholderCubemapArray::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PlaceholderCubemapArray::_setv(StringName const&, Variant const&) */

undefined8 PlaceholderCubemapArray::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PlaceholderCubemapArray::_validate_propertyv(PropertyInfo&) const */

void PlaceholderCubemapArray::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PlaceholderCubemapArray::_property_can_revertv(StringName const&) const */

undefined8 PlaceholderCubemapArray::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PlaceholderCubemapArray::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PlaceholderCubemapArray::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PlaceholderCubemapArray::_notificationv(int, bool) */

void PlaceholderCubemapArray::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<Ref<Resource>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Resource>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Resource>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Resource>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TypedArray<Image> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<TypedArray<Image>const&>::_gen_argument_type
          (MethodBindT<TypedArray<Image>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1c;
}



/* MethodBindT<TypedArray<Image> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<TypedArray<Image>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TypedArray<Image>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<Image>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<Image>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<Image>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Image> const&, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<Image>const&,int>::_gen_argument_type
          (MethodBindT<Ref<Image>const&,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x16U) + 2;
  }
  return cVar1;
}



/* MethodBindT<Ref<Image> const&, int>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Ref<Image>const&,int>::get_argument_meta
          (MethodBindT<Ref<Image>const&,int> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindTR<Error, TypedArray<Image> const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,TypedArray<Image>const&>::_gen_argument_type
          (MethodBindTR<Error,TypedArray<Image>const&> *this,int param_1)

{
  return (-(param_1 == 0) & 0x1aU) + 2;
}



/* MethodBindTR<Error, TypedArray<Image> const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,TypedArray<Image>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector2i const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector2i_const&>::_gen_argument_type(MethodBindT<Vector2i_const&> *this,int param_1)

{
  return -(param_1 == 0) & 6;
}



/* MethodBindT<Vector2i const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Image> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Image>const&>::_gen_argument_type(MethodBindT<Ref<Image>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Image> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Image>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Image::Format>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Image::Format>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<Image::Format>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Image::Format>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<Ref<ImageTexture>, Ref<Image> const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRS<Ref<ImageTexture>, Ref<Image> const&>::get_argument_meta(int) const */

undefined8 MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, Image::Format, int, int, int, bool, TypedArray<Image>
   const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>::_gen_argument_type
          (MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&> *this,
          int param_1)

{
  undefined8 uVar1;
  
  if ((((uint)param_1 < 6) && (param_1 != 0)) && (2 < param_1 - 1U)) {
    uVar1 = 1;
    if (param_1 != 4) {
      uVar1 = 0x1c;
    }
    return uVar1;
  }
  return 2;
}



/* MethodBindTR<Error, Image::Format, int, int, int, bool, TypedArray<Image>
   const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>::get_argument_meta
          (MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&> *this,
          int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (-1 < param_1) {
    bVar1 = -(param_1 - 1U < 3) & 3;
  }
  return bVar1;
}



/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x240);
  return;
}



/* PlaceholderCubemapArray::~PlaceholderCubemapArray() */

void __thiscall PlaceholderCubemapArray::~PlaceholderCubemapArray(PlaceholderCubemapArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117788;
  PlaceholderTextureLayered::~PlaceholderTextureLayered((PlaceholderTextureLayered *)this);
  return;
}



/* PlaceholderCubemapArray::~PlaceholderCubemapArray() */

void __thiscall PlaceholderCubemapArray::~PlaceholderCubemapArray(PlaceholderCubemapArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117788;
  PlaceholderTextureLayered::~PlaceholderTextureLayered((PlaceholderTextureLayered *)this);
  operator_delete(this,0x300);
  return;
}



/* PlaceholderCubemap::~PlaceholderCubemap() */

void __thiscall PlaceholderCubemap::~PlaceholderCubemap(PlaceholderCubemap *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117578;
  PlaceholderTextureLayered::~PlaceholderTextureLayered((PlaceholderTextureLayered *)this);
  return;
}



/* PlaceholderCubemap::~PlaceholderCubemap() */

void __thiscall PlaceholderCubemap::~PlaceholderCubemap(PlaceholderCubemap *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117578;
  PlaceholderTextureLayered::~PlaceholderTextureLayered((PlaceholderTextureLayered *)this);
  operator_delete(this,0x300);
  return;
}



/* PlaceholderTexture2DArray::~PlaceholderTexture2DArray() */

void __thiscall
PlaceholderTexture2DArray::~PlaceholderTexture2DArray(PlaceholderTexture2DArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117368;
  PlaceholderTextureLayered::~PlaceholderTextureLayered((PlaceholderTextureLayered *)this);
  return;
}



/* PlaceholderTexture2DArray::~PlaceholderTexture2DArray() */

void __thiscall
PlaceholderTexture2DArray::~PlaceholderTexture2DArray(PlaceholderTexture2DArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117368;
  PlaceholderTextureLayered::~PlaceholderTextureLayered((PlaceholderTextureLayered *)this);
  operator_delete(this,0x300);
  return;
}



/* MethodBindTRS<Ref<ImageTexture>, Ref<Image> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&>::~MethodBindTRS
          (MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118630;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Ref<ImageTexture>, Ref<Image> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&>::~MethodBindTRS
          (MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118630;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRC<Image::Format>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Image::Format>::~MethodBindTRC(MethodBindTRC<Image::Format> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118690;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Image::Format>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Image::Format>::~MethodBindTRC(MethodBindTRC<Image::Format> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118690;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Image> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Image>const&>::~MethodBindT(MethodBindT<Ref<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001186f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Image> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Image>const&>::~MethodBindT(MethodBindT<Ref<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001186f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2i_const&>::~MethodBindT(MethodBindT<Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118750;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2i_const&>::~MethodBindT(MethodBindT<Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118750;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, TypedArray<Image> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,TypedArray<Image>const&>::~MethodBindTR
          (MethodBindTR<Error,TypedArray<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001187b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, TypedArray<Image> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,TypedArray<Image>const&>::~MethodBindTR
          (MethodBindTR<Error,TypedArray<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001187b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Image> const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Image>const&,int>::~MethodBindT(MethodBindT<Ref<Image>const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118810;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Image> const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Image>const&,int>::~MethodBindT(MethodBindT<Ref<Image>const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118810;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Image>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Image>>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118870;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Image>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Image>>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118870;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TypedArray<Image> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<Image>const&>::~MethodBindT(MethodBindT<TypedArray<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001188d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TypedArray<Image> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<Image>const&>::~MethodBindT(MethodBindT<TypedArray<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001188d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, Image::Format, int, int, int, bool, TypedArray<Image>
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>::~MethodBindTR
          (MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118930;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, Image::Format, int, int, int, bool, TypedArray<Image>
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>::~MethodBindTR
          (MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118930;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Resource>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Resource>>::~MethodBindTRC(MethodBindTRC<Ref<Resource>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118990;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Resource>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Resource>>::~MethodBindTRC(MethodBindTRC<Ref<Resource>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118990;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* PlaceholderTexture2DArray::_get_class_namev() const */

undefined8 * PlaceholderTexture2DArray::_get_class_namev(void)

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
                ((StringName *)&_get_class_namev()::_class_name_static,"PlaceholderTexture2DArray");
      goto LAB_00107fbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PlaceholderTexture2DArray");
LAB_00107fbe:
  return &_get_class_namev()::_class_name_static;
}



/* PlaceholderCubemap::is_class_ptr(void*) const */

uint PlaceholderCubemap::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x118a,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &PlaceholderTextureLayered::get_class_ptr_static()::ptr)
            | (uint)CONCAT71(0x118a,in_RSI == &Texture::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* PlaceholderCubemapArray::is_class_ptr(void*) const */

uint PlaceholderCubemapArray::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x118a,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &PlaceholderTextureLayered::get_class_ptr_static()::ptr)
            | (uint)CONCAT71(0x118a,in_RSI == &Texture::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* PlaceholderTexture2DArray::is_class_ptr(void*) const */

uint PlaceholderTexture2DArray::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x118a,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &PlaceholderTextureLayered::get_class_ptr_static()::ptr)
            | (uint)CONCAT71(0x118a,in_RSI == &Texture::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* Texture2DArray::is_class_ptr(void*) const */

uint Texture2DArray::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x118a,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &ImageTextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &Texture::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* Cubemap::is_class_ptr(void*) const */

uint Cubemap::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x118a,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &ImageTextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &Texture::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CubemapArray::is_class_ptr(void*) const */

uint CubemapArray::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x118a,in_RSI == &TextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &ImageTextureLayered::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &Texture::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118a,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = RefCounted::unreference;
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



/* ImageTexture::get_base_extension() const */

ImageTexture * __thiscall ImageTexture::get_base_extension(ImageTexture *this)

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



/* Cubemap::_get_class_namev() const */

undefined8 * Cubemap::_get_class_namev(void)

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
LAB_00108483:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108483;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Cubemap");
      goto LAB_001084ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Cubemap");
LAB_001084ee:
  return &_get_class_namev()::_class_name_static;
}



/* ImageTexture::_get_class_namev() const */

undefined8 * ImageTexture::_get_class_namev(void)

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
LAB_00108573:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108573;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImageTexture");
      goto LAB_001085de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImageTexture");
LAB_001085de:
  return &_get_class_namev()::_class_name_static;
}



/* ImageTextureLayered::_get_class_namev() const */

undefined8 * ImageTextureLayered::_get_class_namev(void)

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
LAB_00108663:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108663;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImageTextureLayered");
      goto LAB_001086ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImageTextureLayered");
LAB_001086ce:
  return &_get_class_namev()::_class_name_static;
}



/* CubemapArray::_get_class_namev() const */

undefined8 * CubemapArray::_get_class_namev(void)

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
LAB_00108753:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108753;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CubemapArray");
      goto LAB_001087be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CubemapArray");
LAB_001087be:
  return &_get_class_namev()::_class_name_static;
}



/* Texture2DArray::_get_class_namev() const */

undefined8 * Texture2DArray::_get_class_namev(void)

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
LAB_00108843:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108843;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Texture2DArray");
      goto LAB_001088ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Texture2DArray");
LAB_001088ae:
  return &_get_class_namev()::_class_name_static;
}



/* ImageTexture3D::_get_class_namev() const */

undefined8 * ImageTexture3D::_get_class_namev(void)

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
LAB_00108933:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108933;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImageTexture3D");
      goto LAB_0010899e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImageTexture3D");
LAB_0010899e:
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
LAB_00108a13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108a13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Texture");
      goto LAB_00108a7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Texture");
LAB_00108a7e:
  return &_get_class_namev()::_class_name_static;
}



/* PlaceholderCubemap::_get_class_namev() const */

undefined8 * PlaceholderCubemap::_get_class_namev(void)

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
LAB_00108b03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108b03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PlaceholderCubemap");
      goto LAB_00108b6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PlaceholderCubemap");
LAB_00108b6e:
  return &_get_class_namev()::_class_name_static;
}



/* PlaceholderCubemapArray::_get_class_namev() const */

undefined8 * PlaceholderCubemapArray::_get_class_namev(void)

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
LAB_00108bf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108bf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PlaceholderCubemapArray");
      goto LAB_00108c5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PlaceholderCubemapArray");
LAB_00108c5e:
  return &_get_class_namev()::_class_name_static;
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = RefCounted::unreference;
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
  *(undefined **)this = &TextureLayered::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108fa7;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108fa7;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108fa7;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108fa7;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108fa7;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108fa7;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00108fa7:
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &TextureLayered::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001090b7;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001090b7;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001090b7;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001090b7;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001090b7;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001090b7;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_001090b7:
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2e8);
  return;
}



/* TextureLayered::~TextureLayered() */

void __thiscall TextureLayered::~TextureLayered(TextureLayered *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::StringName;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001091d7;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001091d7;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001091d7;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001091d7;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001091d7;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001091d7;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_001091d7:
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  return;
}



/* CubemapArray::~CubemapArray() */

void __thiscall CubemapArray::~CubemapArray(CubemapArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118418;
  ImageTextureLayered::~ImageTextureLayered((ImageTextureLayered *)this);
  return;
}



/* CubemapArray::~CubemapArray() */

void __thiscall CubemapArray::~CubemapArray(CubemapArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118418;
  ImageTextureLayered::~ImageTextureLayered((ImageTextureLayered *)this);
  operator_delete(this,0x310);
  return;
}



/* Cubemap::~Cubemap() */

void __thiscall Cubemap::~Cubemap(Cubemap *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118200;
  ImageTextureLayered::~ImageTextureLayered((ImageTextureLayered *)this);
  return;
}



/* Cubemap::~Cubemap() */

void __thiscall Cubemap::~Cubemap(Cubemap *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118200;
  ImageTextureLayered::~ImageTextureLayered((ImageTextureLayered *)this);
  operator_delete(this,0x310);
  return;
}



/* Texture2DArray::~Texture2DArray() */

void __thiscall Texture2DArray::~Texture2DArray(Texture2DArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117fe8;
  ImageTextureLayered::~ImageTextureLayered((ImageTextureLayered *)this);
  return;
}



/* Texture2DArray::~Texture2DArray() */

void __thiscall Texture2DArray::~Texture2DArray(Texture2DArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117fe8;
  ImageTextureLayered::~ImageTextureLayered((ImageTextureLayered *)this);
  operator_delete(this,0x310);
  return;
}



/* TextureLayered::~TextureLayered() */

void __thiscall TextureLayered::~TextureLayered(TextureLayered *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::StringName;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001093d7;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001093d7;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001093d7;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001093d7;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001093d7;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001093d7;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_001093d7:
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2e8);
  return;
}



/* Texture3D::~Texture3D() */

void __thiscall Texture3D::~Texture3D(Texture3D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::split;
  if (bVar1) {
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001094d4;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001094d4;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001094d4;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001094d4;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001094d4;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_001094d4:
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture3D::~Texture3D() */

void __thiscall Texture3D::~Texture3D(Texture3D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::split;
  if (bVar1) {
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001095c4;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001095c4;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001095c4;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001095c4;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001095c4;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_001095c4:
  *(undefined ***)this = &PTR__initialize_classv_00117190;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2d0);
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



/* ImageTexture3D::get_class() const */

void ImageTexture3D::get_class(void)

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



/* ImageTexture::get_class() const */

void ImageTexture::get_class(void)

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



/* CubemapArray::get_class() const */

void CubemapArray::get_class(void)

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



/* Cubemap::get_class() const */

void Cubemap::get_class(void)

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



/* Texture2DArray::get_class() const */

void Texture2DArray::get_class(void)

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



/* ImageTextureLayered::get_class() const */

void ImageTextureLayered::get_class(void)

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



/* PlaceholderCubemapArray::get_class() const */

void PlaceholderCubemapArray::get_class(void)

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



/* PlaceholderCubemap::get_class() const */

void PlaceholderCubemap::get_class(void)

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



/* PlaceholderTexture2DArray::get_class() const */

void PlaceholderTexture2DArray::get_class(void)

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



/* MethodBindTRC<TypedArray<Image>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<Image>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Image";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x1c;
  puVar1[6] = 0x1f;
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
      if (*(char **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(char **)(puVar1 + 4) = local_48;
      }
      goto LAB_00109f75;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00109f75:
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



/* MethodBindTRC<Ref<Resource>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Resource>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Resource";
  local_40 = 8;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_0010a0a5;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_0010a0a5:
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10a150);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC85;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010a1fa;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC85;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join(this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010a1fa:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture2DArray::_bind_methods() [clone .cold] */

void Texture2DArray::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Cubemap::_bind_methods() [clone .cold] */

void Cubemap::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CubemapArray::_bind_methods() [clone .cold] */

void CubemapArray::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ImageTexture::_bind_methods() [clone .cold] */

void ImageTexture::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ImageTextureLayered::_bind_methods() [clone .cold] */

void ImageTextureLayered::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ImageTexture3D::_bind_methods() [clone .cold] */

void ImageTexture3D::_bind_methods(void)

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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010a4af;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a4af:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010a563;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010a563;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010a563:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* PlaceholderTexture2DArray::_initialize_classv() */

void PlaceholderTexture2DArray::_initialize_classv(void)

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
    if (PlaceholderTextureLayered::initialize_class()::initialized == '\0') {
      PlaceholderTextureLayered::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x19;
    local_48 = "PlaceholderTextureLayered";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PlaceholderTexture2DArray";
    local_60 = 0;
    local_40 = 0x19;
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



/* PlaceholderCubemap::_initialize_classv() */

void PlaceholderCubemap::_initialize_classv(void)

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
    if (PlaceholderTextureLayered::initialize_class()::initialized == '\0') {
      PlaceholderTextureLayered::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x19;
    local_48 = "PlaceholderTextureLayered";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PlaceholderCubemap";
    local_60 = 0;
    local_40 = 0x12;
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



/* PlaceholderCubemapArray::_initialize_classv() */

void PlaceholderCubemapArray::_initialize_classv(void)

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
    if (PlaceholderTextureLayered::initialize_class()::initialized == '\0') {
      PlaceholderTextureLayered::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x19;
    local_48 = "PlaceholderTextureLayered";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PlaceholderCubemapArray";
    local_60 = 0;
    local_40 = 0x17;
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



/* MethodBindTRC<Image::Format>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Image::Format>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Image::Format";
  local_40 = 0xd;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector2i_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
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
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC6;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,6,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture::is_class(String const&) const */

undefined8 __thiscall Texture::is_class(Texture *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010ad5f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010ad5f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010ae13;
  }
  cVar6 = String::operator==(param_1,"Texture");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010ae13;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar8;
      }
      goto LAB_0010af1e;
    }
  }
LAB_0010ae13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010af1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture3D::is_class(String const&) const */

undefined8 __thiscall ImageTexture3D::is_class(ImageTexture3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010af9f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010af9f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010b053;
  }
  cVar6 = String::operator==(param_1,"ImageTexture3D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010b053;
    }
    cVar6 = String::operator==(param_1,"Texture3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Texture::is_class((Texture *)this,param_1);
        return uVar8;
      }
      goto LAB_0010b15e;
    }
  }
LAB_0010b053:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b15e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture::is_class(String const&) const */

undefined8 __thiscall ImageTexture::is_class(ImageTexture *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010b1df;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010b1df:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010b293;
  }
  cVar6 = String::operator==(param_1,"ImageTexture");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010b293;
    }
    cVar6 = String::operator==(param_1,"Texture2D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Texture::is_class((Texture *)this,param_1);
        return uVar8;
      }
      goto LAB_0010b39e;
    }
  }
LAB_0010b293:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b39e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTextureLayered::is_class(String const&) const */

undefined8 __thiscall ImageTextureLayered::is_class(ImageTextureLayered *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010b41f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010b41f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010b4d3;
  }
  cVar6 = String::operator==(param_1,"ImageTextureLayered");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010b4d3;
    }
    cVar6 = String::operator==(param_1,"TextureLayered");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Texture::is_class((Texture *)this,param_1);
        return uVar8;
      }
      goto LAB_0010b5de;
    }
  }
LAB_0010b4d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b5de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CubemapArray::is_class(String const&) const */

undefined8 __thiscall CubemapArray::is_class(CubemapArray *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010b65f;
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
LAB_0010b65f:
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
    if (cVar5 != '\0') goto LAB_0010b713;
  }
  cVar5 = String::operator==(param_1,"CubemapArray");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = ImageTextureLayered::is_class((ImageTextureLayered *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010b713:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Cubemap::is_class(String const&) const */

undefined8 __thiscall Cubemap::is_class(Cubemap *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010b7df;
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
LAB_0010b7df:
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
    if (cVar5 != '\0') goto LAB_0010b893;
  }
  cVar5 = String::operator==(param_1,"Cubemap");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = ImageTextureLayered::is_class((ImageTextureLayered *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010b893:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture2DArray::is_class(String const&) const */

undefined8 __thiscall Texture2DArray::is_class(Texture2DArray *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010b95f;
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
LAB_0010b95f:
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
    if (cVar5 != '\0') goto LAB_0010ba13;
  }
  cVar5 = String::operator==(param_1,"Texture2DArray");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = ImageTextureLayered::is_class((ImageTextureLayered *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ba13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceholderTextureLayered::is_class(String const&) const */

undefined8 __thiscall
PlaceholderTextureLayered::is_class(PlaceholderTextureLayered *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010badf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010badf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010bb93;
  }
  cVar6 = String::operator==(param_1,"PlaceholderTextureLayered");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010bb93;
    }
    cVar6 = String::operator==(param_1,"TextureLayered");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Texture::is_class((Texture *)this,param_1);
        return uVar8;
      }
      goto LAB_0010bc9e;
    }
  }
LAB_0010bb93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010bc9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceholderCubemapArray::is_class(String const&) const */

undefined8 __thiscall
PlaceholderCubemapArray::is_class(PlaceholderCubemapArray *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010bd1f;
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
LAB_0010bd1f:
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
    if (cVar5 != '\0') goto LAB_0010bdd3;
  }
  cVar5 = String::operator==(param_1,"PlaceholderCubemapArray");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = PlaceholderTextureLayered::is_class((PlaceholderTextureLayered *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010bdd3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceholderCubemap::is_class(String const&) const */

undefined8 __thiscall PlaceholderCubemap::is_class(PlaceholderCubemap *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010be9f;
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
LAB_0010be9f:
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
    if (cVar5 != '\0') goto LAB_0010bf53;
  }
  cVar5 = String::operator==(param_1,"PlaceholderCubemap");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = PlaceholderTextureLayered::is_class((PlaceholderTextureLayered *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010bf53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceholderTexture2DArray::is_class(String const&) const */

undefined8 __thiscall
PlaceholderTexture2DArray::is_class(PlaceholderTexture2DArray *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010c01f;
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
LAB_0010c01f:
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
    if (cVar5 != '\0') goto LAB_0010c0d3;
  }
  cVar5 = String::operator==(param_1,"PlaceholderTexture2DArray");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = PlaceholderTextureLayered::is_class((PlaceholderTextureLayered *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010c0d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
      goto LAB_0010c28c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c28c:
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
      goto LAB_0010c4f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c4f1:
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
      goto LAB_0010c7a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c7a1:
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
      goto LAB_0010ca51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ca51:
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



/* PlaceholderTextureLayered::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
PlaceholderTextureLayered::_get_property_listv
          (PlaceholderTextureLayered *this,List *param_1,bool param_2)

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
  local_78 = "PlaceholderTextureLayered";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PlaceholderTextureLayered";
  local_98 = 0;
  local_70 = 0x19;
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
      goto LAB_0010cd01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cd01:
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
  StringName::StringName((StringName *)&local_78,"PlaceholderTextureLayered",false);
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



/* PlaceholderCubemap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
PlaceholderCubemap::_get_property_listv(PlaceholderCubemap *this,List *param_1,bool param_2)

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
    PlaceholderTextureLayered::_get_property_listv((PlaceholderTextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PlaceholderCubemap";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PlaceholderCubemap";
  local_98 = 0;
  local_70 = 0x12;
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
      goto LAB_0010cfb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cfb1:
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
  StringName::StringName((StringName *)&local_78,"PlaceholderCubemap",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PlaceholderTextureLayered::_get_property_listv((PlaceholderTextureLayered *)this,param_1,true)
      ;
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceholderTexture2DArray::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
PlaceholderTexture2DArray::_get_property_listv
          (PlaceholderTexture2DArray *this,List *param_1,bool param_2)

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
    PlaceholderTextureLayered::_get_property_listv((PlaceholderTextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PlaceholderTexture2DArray";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PlaceholderTexture2DArray";
  local_98 = 0;
  local_70 = 0x19;
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
      goto LAB_0010d261;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d261:
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
  StringName::StringName((StringName *)&local_78,"PlaceholderTexture2DArray",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PlaceholderTextureLayered::_get_property_listv((PlaceholderTextureLayered *)this,param_1,true)
      ;
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
      goto LAB_0010d511;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d511:
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
      goto LAB_0010d7c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d7c1:
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



/* ImageTextureLayered::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ImageTextureLayered::_get_property_listv(ImageTextureLayered *this,List *param_1,bool param_2)

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
  local_78 = "ImageTextureLayered";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImageTextureLayered";
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
      goto LAB_0010da71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010da71:
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
  StringName::StringName((StringName *)&local_78,"ImageTextureLayered",false);
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



/* CubemapArray::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CubemapArray::_get_property_listv(CubemapArray *this,List *param_1,bool param_2)

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
    ImageTextureLayered::_get_property_listv((ImageTextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CubemapArray";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CubemapArray";
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
      goto LAB_0010dd21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010dd21:
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
  StringName::StringName((StringName *)&local_78,"CubemapArray",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ImageTextureLayered::_get_property_listv((ImageTextureLayered *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture2DArray::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Texture2DArray::_get_property_listv(Texture2DArray *this,List *param_1,bool param_2)

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
    ImageTextureLayered::_get_property_listv((ImageTextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Texture2DArray";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Texture2DArray";
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
      goto LAB_0010dfd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010dfd1:
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
  StringName::StringName((StringName *)&local_78,"Texture2DArray",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ImageTextureLayered::_get_property_listv((ImageTextureLayered *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ImageTexture3D::_get_property_listv(ImageTexture3D *this,List *param_1,bool param_2)

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
  local_78 = "ImageTexture3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImageTexture3D";
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
      goto LAB_0010e281;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e281:
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
  StringName::StringName((StringName *)&local_78,"ImageTexture3D",false);
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



/* Cubemap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Cubemap::_get_property_listv(Cubemap *this,List *param_1,bool param_2)

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
    ImageTextureLayered::_get_property_listv((ImageTextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Cubemap";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Cubemap";
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
      goto LAB_0010e531;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e531:
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
  StringName::StringName((StringName *)&local_78,"Cubemap",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ImageTextureLayered::_get_property_listv((ImageTextureLayered *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceholderCubemapArray::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
PlaceholderCubemapArray::_get_property_listv
          (PlaceholderCubemapArray *this,List *param_1,bool param_2)

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
    PlaceholderTextureLayered::_get_property_listv((PlaceholderTextureLayered *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PlaceholderCubemapArray";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PlaceholderCubemapArray";
  local_98 = 0;
  local_70 = 0x17;
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
      goto LAB_0010e7e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e7e1:
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
  StringName::StringName((StringName *)&local_78,"PlaceholderCubemapArray",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PlaceholderTextureLayered::_get_property_listv((PlaceholderTextureLayered *)this,param_1,true)
      ;
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ImageTexture::_get_property_listv(ImageTexture *this,List *param_1,bool param_2)

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
  local_78 = "ImageTexture";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImageTexture";
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
      goto LAB_0010ea91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ea91:
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
  StringName::StringName((StringName *)&local_78,"ImageTexture",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
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



/* MethodBind* create_method_bind<ImageTexture, Image::Format>(Image::Format (ImageTexture::*)()
   const) */

MethodBind * create_method_bind<ImageTexture,Image::Format>(_func_Format *param_1)

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
  *(_func_Format **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118690;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ImageTexture";
  local_30 = 0xc;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<ImageTexture, Ref<Image> const&>(void (ImageTexture::*)(Ref<Image>
   const&)) */

MethodBind * create_method_bind<ImageTexture,Ref<Image>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001186f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ImageTexture";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<ImageTexture, Vector2i const&>(void (ImageTexture::*)(Vector2i
   const&)) */

MethodBind * create_method_bind<ImageTexture,Vector2i_const&>(_func_void_Vector2i_ptr *param_1)

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
  *(_func_void_Vector2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118750;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ImageTexture";
  local_30 = 0xc;
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



/* ImageTexture::_initialize_classv() */

void ImageTexture::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_0011e020 != Resource::_bind_methods) {
        Texture2D::_bind_methods();
      }
      Texture2D::initialize_class()::initialized = '\x01';
    }
    local_48 = "Texture2D";
    local_58 = 0;
    local_40 = 9;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ImageTexture";
    local_60 = 0;
    local_40 = 0xc;
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



/* MethodBind* create_method_bind<ImageTextureLayered, Error, TypedArray<Image> const&>(Error
   (ImageTextureLayered::*)(TypedArray<Image> const&)) */

MethodBind *
create_method_bind<ImageTextureLayered,Error,TypedArray<Image>const&>
          (_func_Error_TypedArray_ptr *param_1)

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
  *(_func_Error_TypedArray_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001187b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ImageTextureLayered";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<ImageTextureLayered, Ref<Image> const&, int>(void
   (ImageTextureLayered::*)(Ref<Image> const&, int)) */

MethodBind *
create_method_bind<ImageTextureLayered,Ref<Image>const&,int>(_func_void_Ref_ptr_int *param_1)

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
  *(_func_void_Ref_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118810;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "ImageTextureLayered";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<ImageTextureLayered, TypedArray<Image> const&>(void
   (ImageTextureLayered::*)(TypedArray<Image> const&)) */

MethodBind *
create_method_bind<ImageTextureLayered,TypedArray<Image>const&>(_func_void_TypedArray_ptr *param_1)

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
  *(_func_void_TypedArray_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001188d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ImageTextureLayered";
  local_30 = 0x13;
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



/* ImageTextureLayered::_initialize_classv() */

void ImageTextureLayered::_initialize_classv(void)

{
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* Texture2DArray::_initialize_classv() */

void Texture2DArray::_initialize_classv(void)

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
    if (ImageTextureLayered::initialize_class()::initialized == '\0') {
      ImageTextureLayered::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x13;
    local_48 = "ImageTextureLayered";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Texture2DArray";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Cubemap::_initialize_classv() */

void Cubemap::_initialize_classv(void)

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
    if (ImageTextureLayered::initialize_class()::initialized == '\0') {
      ImageTextureLayered::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x13;
    local_48 = "ImageTextureLayered";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Cubemap";
    local_60 = 0;
    local_40 = 7;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CubemapArray::_initialize_classv() */

void CubemapArray::_initialize_classv(void)

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
    if (ImageTextureLayered::initialize_class()::initialized == '\0') {
      ImageTextureLayered::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x13;
    local_48 = "ImageTextureLayered";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CubemapArray";
    local_60 = 0;
    local_40 = 0xc;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ImageTexture3D, Error, Image::Format, int, int, int, bool,
   TypedArray<Image> const&>(Error (ImageTexture3D::*)(Image::Format, int, int, int, bool,
   TypedArray<Image> const&)) */

MethodBind *
create_method_bind<ImageTexture3D,Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>
          (_func_Error_Format_int_int_int_bool_TypedArray_ptr *param_1)

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
  *(_func_Error_Format_int_int_int_bool_TypedArray_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118930;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 6;
  local_40 = 0;
  local_38 = "ImageTexture3D";
  local_30 = 0xe;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<ImageTexture3D, TypedArray<Image> const&>(void
   (ImageTexture3D::*)(TypedArray<Image> const&)) */

MethodBind *
create_method_bind<ImageTexture3D,TypedArray<Image>const&>(_func_void_TypedArray_ptr *param_1)

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
  *(_func_void_TypedArray_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001188d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ImageTexture3D";
  local_30 = 0xe;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* ImageTexture3D::_initialize_classv() */

void ImageTexture3D::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_0011e028 != Resource::_bind_methods) {
        Texture3D::_bind_methods();
      }
      Texture3D::initialize_class()::initialized = '\x01';
    }
    local_48 = "Texture3D";
    local_58 = 0;
    local_40 = 9;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ImageTexture3D";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
    *(code **)param_1 = RefCounted::unreference;
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



/* Ref<Image>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<Image>::operator=(Ref<Image> *this,Variant *param_1)

{
  Image *pIVar1;
  char cVar2;
  Image *pIVar3;
  
  pIVar3 = (Image *)Variant::get_validated_object();
  pIVar1 = *(Image **)this;
  if (pIVar1 == pIVar3) {
    return;
  }
  if (pIVar3 == (Image *)0x0) {
    if (pIVar1 == (Image *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pIVar3 = (Image *)__dynamic_cast(pIVar3,&Object::typeinfo,&Image::typeinfo,0);
    if (pIVar1 == pIVar3) {
      return;
    }
    *(Image **)this = pIVar3;
    if ((pIVar3 != (Image *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pIVar1 == (Image *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar1);
  return;
}



/* ImageTexture::_setv(StringName const&, Variant const&) */

undefined4 __thiscall ImageTexture::_setv(ImageTexture *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  Image *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = StringName::operator==(param_1,"image");
  if ((char)uVar2 != '\0') {
    local_38 = (Image *)0x0;
    Ref<Image>::operator=((Ref<Image> *)&local_38,param_2);
    set_image(this,(Ref *)&local_38);
    if (local_38 != (Image *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        memdelete<Image>(local_38);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageTexture::_getv(StringName const&, Variant&) const */

undefined4 __thiscall ImageTexture::_getv(ImageTexture *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  Object *local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = StringName::operator==(param_1,"image");
  if ((char)uVar2 != '\0') {
    if (*(code **)(*(long *)this + 0x210) == get_image) {
      if (this[0x310] == (ImageTexture)0x0) {
        local_40 = (Object *)0x0;
      }
      else {
        plVar3 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar3 + 0x1c0))(&local_40,plVar3,*(undefined8 *)(this + 0x2e8));
      }
    }
    else {
      (**(code **)(*(long *)this + 0x210))(&local_40,this);
    }
    Variant::Variant((Variant *)local_38,local_40);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
    if (local_40 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        memdelete<Image>((Image *)local_40);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<ImageTexture>, Ref<Image> const&>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&>::ptrcall
          (MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  char cVar2;
  Object *pOVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_30;
  Image *local_28;
  long local_20;
  
  pcVar1 = *(code **)(this + 0x58);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
                    /* WARNING: Load size is inaccurate */
  if (((long *)*param_2 == (long *)0x0) || (local_28 = **param_2, local_28 == (Image *)0x0)) {
LAB_00110140:
    local_28 = (Image *)0x0;
  }
  else {
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') goto LAB_00110140;
  }
  (*pcVar1)(&local_30);
  if (local_30 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar4 = *param_3;
    if (pOVar4 == (Object *)0x0) goto LAB_00110105;
    *(undefined8 *)param_3 = 0;
    goto LAB_001101a3;
  }
  pOVar3 = (Object *)__dynamic_cast(local_30,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar4 = *param_3;
  if (pOVar4 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar4 != (Object *)0x0) goto LAB_001101a3;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar4 != (Object *)0x0) {
LAB_001101a3:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar4);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      if (local_30 == (Object *)0x0) goto LAB_00110105;
    }
  }
  cVar2 = RefCounted::unreference();
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_30);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)local_30 + 0x140))(local_30);
      Memory::free_static(local_30,false);
    }
  }
LAB_00110105:
  if (local_28 != (Image *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<Image>(local_28);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<ImageTexture>, Ref<Image> const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&>::validated_call
          (MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&> *this,Object *param_1,Variant **param_2
          ,Variant *param_3)

{
  code *pcVar1;
  Image *pIVar2;
  char cVar3;
  Image *pIVar4;
  long in_FS_OFFSET;
  Object *local_68;
  Image *local_60;
  undefined8 local_58;
  Object *local_50;
  int local_48 [6];
  long local_30;
  
  pcVar1 = *(code **)(this + 0x58);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_48,*(Object **)(*param_2 + 0x10));
  local_60 = (Image *)0x0;
  pIVar4 = (Image *)Variant::get_validated_object();
  pIVar2 = local_60;
  if (pIVar4 == local_60) goto LAB_001102a2;
  if (pIVar4 == (Image *)0x0) {
    if (local_60 == (Image *)0x0) goto LAB_001102a2;
    local_60 = (Image *)0x0;
  }
  else {
    pIVar4 = (Image *)__dynamic_cast(pIVar4,&Object::typeinfo,&Image::typeinfo,0);
    if (pIVar2 == pIVar4) goto LAB_001102a2;
    local_60 = pIVar4;
    if (pIVar4 != (Image *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_60 = (Image *)0x0;
      }
    }
    if (pIVar2 == (Image *)0x0) goto LAB_001102a2;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    memdelete<Image>(pIVar2);
  }
LAB_001102a2:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar1)(&local_68);
  if (local_68 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_58 = *(undefined8 *)(local_68 + 0x60);
    local_50 = local_68;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_68 + 0x140))(local_68);
        Memory::free_static(local_68,false);
      }
    }
  }
  if (local_60 != (Image *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(local_60);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<ImageTexture>, Ref<Image> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar8;
  long in_FS_OFFSET;
  Object *local_58;
  Image *local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar8 = param_2[5];
    if (pVVar8 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001105a8;
LAB_00110520:
      pVVar8 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar8 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001105a8:
        uVar6 = 4;
        goto LAB_00110535;
      }
      if (in_R8D == 1) goto LAB_00110520;
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar8 = pVVar8 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar8,0x18);
    uVar4 = _LC117;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = (Image *)0x0;
    Ref<Image>::operator=((Ref<Image> *)&local_50,pVVar8);
    (*(code *)pVVar1)(&local_58,(Ref<Image> *)&local_50);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (((local_58 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
      (**(code **)(*(long *)local_58 + 0x140))(local_58);
      Memory::free_static(local_58,false);
    }
    if ((local_50 != (Image *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
      memdelete<Image>(local_50);
    }
  }
  else {
    uVar6 = 3;
LAB_00110535:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
LAB_00110645:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pIVar3 = (Image *)*plVar6;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
          memdelete<Image>(pIVar3);
          if (lVar2 == lVar7) break;
          goto LAB_00110645;
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
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
LAB_00110a70:
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
  if (lVar10 == 0) goto LAB_00110a70;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0011093a:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0011093a;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        memdelete<Image>((Image *)*plVar1);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00110900;
  }
  if (lVar10 == lVar7) {
LAB_001109eb:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00110900:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001109cb;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001109eb;
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
LAB_001109cb:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00110c68) */
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



/* MethodBindTRC<Ref<Resource>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Resource>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110e38;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC150,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111030;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_00111030:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Image>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<TypedArray<Image>>::call
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
      _err_print_error(&_LC150,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001112d0;
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
      (*(code *)pVVar2)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_001112d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2i_const&>::validated_call
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
      goto LAB_00111701;
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
                    /* WARNING: Could not recover jumptable at 0x0011158d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00111701:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2i_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001118e1;
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
                    /* WARNING: Could not recover jumptable at 0x00111769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001118e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Image::Format>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Image::Format>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
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
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC150,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001119b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_001119b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Image::Format>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Image::Format>::validated_call
          (MethodBindTRC<Image::Format> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
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
      goto LAB_00111bc4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00111bc4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Image::Format>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Image::Format>::ptrcall
          (MethodBindTRC<Image::Format> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      local_40 = 0x35;
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
      goto LAB_00111d73;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00111d73:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Resource>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Resource>>::ptrcall
          (MethodBindTRC<Ref<Resource>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110e38;
      local_40 = 0x35;
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
      goto LAB_00111f96;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00111f96;
    *(undefined8 *)param_3 = 0;
    goto LAB_00111fd9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00111fd9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00111fd9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00111f96;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00111f96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, TypedArray<Image> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Error,TypedArray<Image>const&>::validated_call
          (MethodBindTR<Error,TypedArray<Image>const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001122dc;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Image";
  local_58 = 0;
  local_70 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
  uVar3 = (*pcVar5)(param_1 + lVar1,(Array *)&local_78);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
  Array::~Array((Array *)&local_78);
LAB_001122dc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<Image> const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<TypedArray<Image>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char cVar2;
  Variant *pVVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_68 == (char *)*(long *)pVVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001125ba;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Image";
  local_58 = 0;
  local_70 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(Array *)&local_78);
  Array::~Array((Array *)&local_78);
LAB_001125ba:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Image::Format, int, int, int, bool, TypedArray<Image>
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>::validated_call
          (MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001128e8;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Image";
  local_58 = 0;
  local_70 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
  uVar3 = (*pcVar5)(param_1 + lVar1,*(undefined8 *)(*param_2 + 8),*(undefined8 *)(param_2[1] + 8),
                    *(undefined8 *)(param_2[2] + 8),*(undefined8 *)(param_2[3] + 8),param_2[4][8],
                    (Array *)&local_78);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
  Array::~Array((Array *)&local_78);
LAB_001128e8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, TypedArray<Image> const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,TypedArray<Image>const&>::ptrcall
          (MethodBindTR<Error,TypedArray<Image>const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00112bb8;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Image";
  local_58 = 0;
  local_70 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
  uVar3 = (*pcVar5)(param_1 + lVar1,(Array *)&local_78);
  *(ulong *)param_3 = (ulong)uVar3;
  Array::~Array((Array *)&local_78);
LAB_00112bb8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<Image> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TypedArray<Image>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00112e96;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Image";
  local_58 = 0;
  local_70 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(Array *)&local_78);
  Array::~Array((Array *)&local_78);
LAB_00112e96:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Image::Format, int, int, int, bool, TypedArray<Image>
   const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>::ptrcall
          (MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&> *this,
          Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001131c8;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Image";
  local_58 = 0;
  local_70 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar5)(param_1 + lVar1,**param_2,*param_2[1],*param_2[2],*param_2[3],
                    *param_2[4] != '\0',(Array *)&local_78);
  *(ulong *)param_3 = (ulong)uVar3;
  Array::~Array((Array *)&local_78);
LAB_001131c8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Image>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<TypedArray<Image>>::validated_call
          (MethodBindTRC<TypedArray<Image>> *this,Object *param_1,Variant **param_2,Variant *param_3
          )

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
      local_48 = (Variant **)0x110e38;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001133b9;
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
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_001133b9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Image>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<Image>>::ptrcall
          (MethodBindTRC<TypedArray<Image>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x110e38;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011358a;
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
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011358a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Image>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Image *pIVar2;
  char cVar3;
  Image *pIVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Image *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Image *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Image *)0x110e38;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001137f8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Image *)0x0;
  pIVar4 = (Image *)Variant::get_validated_object();
  pIVar2 = local_58;
  if (pIVar4 != local_58) {
    if (pIVar4 == (Image *)0x0) {
      if (local_58 != (Image *)0x0) {
        local_58 = (Image *)0x0;
LAB_001137b6:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          memdelete<Image>(pIVar2);
        }
      }
    }
    else {
      pIVar4 = (Image *)__dynamic_cast(pIVar4,&Object::typeinfo,&Image::typeinfo,0);
      if (pIVar2 != pIVar4) {
        local_58 = pIVar4;
        if (pIVar4 != (Image *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Image *)0x0;
          }
        }
        if (pIVar2 != (Image *)0x0) goto LAB_001137b6;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_58);
  if (local_58 != (Image *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(local_58);
    }
  }
LAB_001137f8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Image>const&,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Image *pIVar3;
  char cVar4;
  Image *pIVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Image *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Image *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Image *)0x110e38;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00113af9;
    }
    if ((StringName::configured != '\0') && (local_68 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Image *)0x0;
  pIVar5 = (Image *)Variant::get_validated_object();
  pIVar3 = local_68;
  if (pIVar5 != local_68) {
    if (pIVar5 == (Image *)0x0) {
      if (local_68 != (Image *)0x0) {
        local_68 = (Image *)0x0;
LAB_00113ab4:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          memdelete<Image>(pIVar3);
        }
      }
    }
    else {
      pIVar5 = (Image *)__dynamic_cast(pIVar5,&Object::typeinfo,&Image::typeinfo,0);
      if (pIVar3 != pIVar5) {
        local_68 = pIVar5;
        if (pIVar5 != (Image *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Image *)0x0;
          }
        }
        if (pIVar3 != (Image *)0x0) goto LAB_00113ab4;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),(StringName *)&local_68,uVar1);
  if (local_68 != (Image *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<Image>(local_68);
    }
  }
LAB_00113af9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Image>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Image *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Image *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Image *)0x110e38;
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
      goto LAB_00113d7c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Image *)**param_3, local_48 == (Image *)0x0)) {
LAB_00113d58:
    local_48 = (Image *)0x0;
  }
  else {
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') goto LAB_00113d58;
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(StringName *)&local_48);
  if (local_48 != (Image *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<Image>(local_48);
    }
  }
LAB_00113d7c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Image>const&,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Image *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Image *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Image *)0x110e38;
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
      goto LAB_00113fa3;
    }
    if ((StringName::configured != '\0') && (local_48 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = **(undefined4 **)((long)param_3 + 8);
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_48 = (Image *)**param_3, local_48 == (Image *)0x0)) {
LAB_00113f7c:
    local_48 = (Image *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00113f7c;
  }
  (*pcVar5)((long *)((long)param_2 + lVar2),(StringName *)&local_48,uVar1);
  if (local_48 != (Image *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(local_48);
    }
  }
LAB_00113fa3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, TypedArray<Image> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,TypedArray<Image>const&>::call
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
  Array local_80 [8];
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
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
      _err_print_error(&_LC150,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00114360;
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
      if (in_R8D != 1) goto LAB_001143b0;
LAB_001143a0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001143b0:
        uVar7 = 4;
        goto LAB_00114355;
      }
      if (in_R8D == 1) goto LAB_001143a0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1c);
    uVar4 = _LC154;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_70);
    Array::Array(local_80);
    local_68 = "Image";
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_78 = 0;
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_68,(String *)&local_78,false);
    Array::set_typed((uint)local_80,(StringName *)0x18,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar5 = Array::is_same_typed(local_80);
    if (cVar5 == '\0') {
      Array::assign(local_80);
    }
    else {
      Array::_ref(local_80);
    }
    Array::~Array((Array *)&local_70);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),local_80);
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    Array::~Array(local_80);
  }
  else {
    uVar7 = 3;
LAB_00114355:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00114360:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<TypedArray<Image> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TypedArray<Image>const&>::call
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
  Array local_80 [8];
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC150,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00114850;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001148a0;
LAB_00114890:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001148a0:
        uVar6 = 4;
        goto LAB_00114845;
      }
      if (in_R8D == 1) goto LAB_00114890;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1c);
    uVar4 = _LC154;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_70);
    Array::Array(local_80);
    local_68 = "Image";
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_78 = 0;
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_68,(String *)&local_78,false);
    Array::set_typed((uint)local_80,(StringName *)0x18,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    cVar5 = Array::is_same_typed(local_80);
    if (cVar5 == '\0') {
      Array::assign(local_80);
    }
    else {
      Array::_ref(local_80);
    }
    Array::~Array((Array *)&local_70);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),local_80);
    Array::~Array(local_80);
  }
  else {
    uVar6 = 3;
LAB_00114845:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00114850:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Image::Format, int, int, int, bool, TypedArray<Image> const&>::call(Object*,
   Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  undefined4 in_register_00000014;
  long *plVar15;
  Variant *pVVar16;
  long lVar17;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar18;
  long in_FS_OFFSET;
  Array local_c0 [8];
  long local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  int local_98 [2];
  undefined1 local_90 [16];
  Variant *local_78 [7];
  long local_40;
  
  plVar15 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar15 != (long *)0x0) && (plVar15[1] != 0)) && (*(char *)(plVar15[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar15[1] == 0) {
      plVar13 = (long *)plVar15[0x23];
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(**(code **)(*plVar15 + 0x40))();
      }
    }
    else {
      plVar13 = (long *)(plVar15[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar13) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC150,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_00114b9f;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar18 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 7) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar17;
    }
    if ((int)(6 - in_R8D) <= iVar7) {
      lVar11 = 0;
      do {
        if ((int)lVar11 < (int)in_R8D) {
          pVVar16 = *(Variant **)(param_4 + lVar11 * 8);
        }
        else {
          uVar14 = iVar7 + -6 + (int)lVar11;
          if (lVar17 <= (int)uVar14) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar14,lVar17,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar16 = pVVar2 + (ulong)uVar14 * 0x18;
        }
        local_78[lVar11] = pVVar16;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 6);
      *in_R9 = 0;
      if (((ulong)pVVar18 & 1) != 0) {
        pVVar18 = *(Variant **)(pVVar18 + *(long *)((long)plVar15 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[5],0x1c);
      uVar4 = _LC156;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Array((Variant *)&local_b0);
      Array::Array(local_c0);
      local_a8 = "Image";
      local_90 = (undefined1  [16])0x0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_b8 = 0;
      local_a0 = 5;
      String::parse_latin1((StrRange *)&local_b8);
      StringName::StringName((StringName *)&local_a8,(String *)&local_b8,false);
      Array::set_typed((uint)local_c0,(StringName *)0x18,(Variant *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar5 = Array::is_same_typed(local_c0);
      if (cVar5 == '\0') {
        Array::assign(local_c0);
      }
      else {
        Array::_ref(local_c0);
      }
      Array::~Array((Array *)&local_b0);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[4],1);
      uVar4 = _LC157;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_78[4]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[3],2);
      uVar4 = _LC158;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_78[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],2);
      uVar4 = _LC159;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC160;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],2);
      uVar4 = _LC161;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar12 = Variant::operator_cast_to_long(local_78[0]);
      iVar7 = (*(code *)pVVar18)((Variant *)((long)plVar15 + (long)pVVar1),uVar12 & 0xffffffff,iVar9
                                 ,iVar8,iVar7,bVar6,local_c0);
      Variant::Variant((Variant *)local_98,iVar7);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = local_98[0];
      *(undefined8 *)(param_1 + 8) = local_90._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_90._8_8_;
      Array::~Array(local_c0);
      goto LAB_00114b9f;
    }
    uVar10 = 4;
  }
  else {
    uVar10 = 3;
  }
  *in_R9 = uVar10;
  in_R9[2] = 6;
LAB_00114b9f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Ref<Image>const&>::call
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
      _err_print_error(&_LC150,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001151a0;
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
      if (in_R8D != 1) goto LAB_001151f0;
LAB_001151e0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001151f0:
        uVar6 = 4;
        goto LAB_00115195;
      }
      if (in_R8D == 1) goto LAB_001151e0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x18);
    uVar4 = _LC117;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_48 = (char *)0x0;
    Ref<Image>::operator=((Ref<Image> *)&local_48,pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Ref<Image> *)&local_48);
    Ref<Image>::unref((Ref<Image> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00115195:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001151a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector2i_const&>::call
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
  undefined8 local_38;
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
      _err_print_error(&_LC150,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001154c0;
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
      if (in_R8D != 1) goto LAB_00115510;
LAB_00115500:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00115510:
        uVar6 = 4;
        goto LAB_001154b5;
      }
      if (in_R8D == 1) goto LAB_00115500;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,6);
    uVar4 = _LC162;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2i(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_38);
  }
  else {
    uVar6 = 3;
LAB_001154b5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001154c0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Resource>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Resource>>::validated_call
          (MethodBindTRC<Ref<Resource>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x110e38;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00115756;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00115756:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Ref<Image> const&, int>(__UnexistingClass*,
   void (__UnexistingClass::*)(Ref<Image> const&, int), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Ref<Image>const&,int>
               (__UnexistingClass *param_1,_func_void_Ref_ptr_int *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
  Variant *pVVar10;
  uint uVar11;
  int iVar12;
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Image *local_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00115a60;
      pVVar10 = (Variant *)*plVar8;
LAB_00115aad:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00115a60:
        uVar7 = 4;
        goto LAB_00115a65;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00115ac8;
        pVVar10 = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        pVVar10 = (Variant *)*plVar8;
        if (uVar11 == 2) goto LAB_00115aad;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00115ac8:
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
      param_2 = *(_func_void_Ref_ptr_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC160;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x18);
    uVar4 = _LC117;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_38 = (Image *)0x0;
    Ref<Image>::operator=((Ref<Image> *)&local_38,pVVar10);
    (*param_2)((Ref *)(param_1 + (long)param_3),(int)&local_38);
    if (local_38 != (Image *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        memdelete<Image>(local_38);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_00115a65:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Image>const&,int>::call
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
      _err_print_error(&_LC150,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00115b66;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Ref<Image>const&,int>
            (p_Var2,(_func_void_Ref_ptr_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00115b66:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
    local_78 = &_LC6;
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



/* void call_get_argument_type_info_helper<TypedArray<Image> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<TypedArray<Image>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
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
    local_78 = "Image";
    local_70 = 5;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x1c,(CowData<char32_t> *)&local_90,0x1f,
               (StrRange *)&local_88,6,&local_80);
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



/* MethodBindTR<Error, TypedArray<Image> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,TypedArray<Image>const&>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<TypedArray<Image>const&>
              (0,local_70,(PropertyInfo *)&local_68);
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



/* MethodBindT<TypedArray<Image> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<TypedArray<Image>const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<TypedArray<Image>const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Image::Format, int, int, int, bool, TypedArray<Image>
   const&>(int, PropertyInfo&) */

void call_get_argument_type_info<Image::Format,int,int,int,bool,TypedArray<Image>const&>
               (int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a4 = 0;
  if (param_1 == 0) {
    local_90 = 0;
    local_70 = 0xd;
    local_78 = "Image::Format";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_88,(String *)&local_90)
    ;
    StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
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
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_a4 = 1;
  call_get_argument_type_info_helper<int>(param_1,&local_a4,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_a4,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_a4,param_2);
  iVar1 = local_a4;
  if (param_1 == local_a4) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "";
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,1,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_a4 = iVar1 + 1;
  call_get_argument_type_info_helper<TypedArray<Image>const&>(param_1,&local_a4,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Image::Format, int, int, int, bool, TypedArray<Image>
   const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  details local_70 [8];
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 6) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<Image::Format,int,int,int,bool,TypedArray<Image>const&>
              (in_EDX,(PropertyInfo *)&local_68);
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
    godot::details::enum_qualified_name_to_class_info_name(local_70,(String *)&local_78);
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



/* void call_get_argument_type_info_helper<Ref<Image> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Image>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
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
    local_78 = "Image";
    local_70 = 5;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x18,(CowData<char32_t> *)&local_90,0x11,
               (StrRange *)&local_88,6,&local_80);
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



/* MethodBindTRS<Ref<ImageTexture>, Ref<Image> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
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
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Ref<Image>const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
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
    goto LAB_00116a18;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "ImageTexture";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xc;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00116b17:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00116b17;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00116a18:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<Image>const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<Ref<Image>const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<Image>const&,int>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<Ref<Image>const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* Texture3D::~Texture3D() */

void __thiscall Texture3D::~Texture3D(Texture3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Texture2DArray::~Texture2DArray() */

void __thiscall Texture2DArray::~Texture2DArray(Texture2DArray *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Cubemap::~Cubemap() */

void __thiscall Cubemap::~Cubemap(Cubemap *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CubemapArray::~CubemapArray() */

void __thiscall CubemapArray::~CubemapArray(CubemapArray *this)

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
/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Resource>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Resource>>::~MethodBindTRC(MethodBindTRC<Ref<Resource>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, Image::Format, int, int, int, bool, TypedArray<Image>
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&>::~MethodBindTR
          (MethodBindTR<Error,Image::Format,int,int,int,bool,TypedArray<Image>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TypedArray<Image> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<Image>const&>::~MethodBindT(MethodBindT<TypedArray<Image>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<Image>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Image>>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Image> const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Image>const&,int>::~MethodBindT(MethodBindT<Ref<Image>const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, TypedArray<Image> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,TypedArray<Image>const&>::~MethodBindTR
          (MethodBindTR<Error,TypedArray<Image>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2i_const&>::~MethodBindT(MethodBindT<Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Image> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Image>const&>::~MethodBindT(MethodBindT<Ref<Image>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Image::Format>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Image::Format>::~MethodBindTRC(MethodBindTRC<Image::Format> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<Ref<ImageTexture>, Ref<Image> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&>::~MethodBindTRS
          (MethodBindTRS<Ref<ImageTexture>,Ref<Image>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PlaceholderTexture2DArray::~PlaceholderTexture2DArray() */

void __thiscall
PlaceholderTexture2DArray::~PlaceholderTexture2DArray(PlaceholderTexture2DArray *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PlaceholderCubemap::~PlaceholderCubemap() */

void __thiscall PlaceholderCubemap::~PlaceholderCubemap(PlaceholderCubemap *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PlaceholderCubemapArray::~PlaceholderCubemapArray() */

void __thiscall PlaceholderCubemapArray::~PlaceholderCubemapArray(PlaceholderCubemapArray *this)

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


