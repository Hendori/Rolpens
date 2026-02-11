
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

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



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_001002b6:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_001002b6;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_001010b0();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_0010020c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_0010020c:
  puVar8[-1] = param_1;
  return;
}



/* WebPCommon::webp_load_image_from_buffer(Image*, unsigned char const*, int) */

undefined4 WebPCommon::webp_load_image_from_buffer(Image *param_1,uchar *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_78 [8];
  long local_70;
  int local_68;
  int local_64;
  int local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Image *)0x0) {
    uVar5 = 0x1f;
    _err_print_error("webp_load_image_from_buffer","modules/webp/webp_common.cpp",0x9c,
                     "Parameter \"p_image\" is null.",0,0);
    goto LAB_00100419;
  }
  lVar4 = (long)param_3;
  iVar2 = WebPGetFeaturesInternal(param_2,lVar4,&local_68,0x209);
  if (iVar2 != 0) {
    uVar5 = 0x10;
    _err_print_error("webp_load_image_from_buffer","modules/webp/webp_common.cpp",0xa0,
                     "Method/function failed. Returning: ERR_FILE_CORRUPT",0,0);
    goto LAB_00100419;
  }
  local_70 = 0;
  lVar3 = (long)(int)(local_68 * local_64 * (4 - (uint)(local_60 == 0)));
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_70,lVar3);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_70);
  if (local_60 == 0) {
    lVar4 = WebPDecodeRGBInto(param_2,lVar4,local_70,lVar3,local_68 * 3);
    if (lVar4 != 0) goto LAB_001003ce;
LAB_00100460:
    uVar5 = 0x10;
    _err_print_error("webp_load_image_from_buffer","modules/webp/webp_common.cpp",0xaf,
                     "Condition \"errdec\" is true. Returning: ERR_FILE_CORRUPT",
                     "Failed decoding WebP image.",0,0);
  }
  else {
    lVar4 = WebPDecodeRGBAInto(param_2,lVar4,local_70,lVar3,local_68 << 2);
    if (lVar4 == 0) goto LAB_00100460;
LAB_001003ce:
    Image::set_data(param_1,local_68,local_64,0,5 - (uint)(local_60 == 0),auStack_78);
    uVar5 = 0;
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
LAB_00100419:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebPCommon::_webp_unpack(Vector<unsigned char> const&) */

WebPCommon * __thiscall WebPCommon::_webp_unpack(WebPCommon *this,Vector *param_1)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 auStack_68 [8];
  long local_60;
  int local_58;
  int local_54;
  int local_50;
  long local_30;
  
  pcVar2 = *(char **)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pcVar2 == (char *)0x0) || ((int)*(undefined8 *)(pcVar2 + -8) < 1)) {
    _err_print_error("_webp_unpack","modules/webp/webp_common.cpp",0x7e,
                     "Condition \"size <= 0\" is true. Returning: Ref<Image>()",0,0);
    *(undefined8 *)this = 0;
    goto LAB_001006dd;
  }
  if (((((*pcVar2 != 'R') || (pcVar2[1] != 'I')) || (pcVar2[2] != 'F')) ||
      ((pcVar2[3] != 'F' || (pcVar2[8] != 'W')))) ||
     ((pcVar2[9] != 'E' || ((pcVar2[10] != 'B' || (pcVar2[0xb] != 'P')))))) {
    _err_print_error("_webp_unpack","modules/webp/webp_common.cpp",0x82,
                     "Condition \"r[0] != \'R\' || r[1] != \'I\' || r[2] != \'F\' || r[3] != \'F\' || r[8] != \'W\' || r[9] != \'E\' || r[10] != \'B\' || r[11] != \'P\'\" is true. Returning: Ref<Image>()"
                     ,0,0);
    *(undefined8 *)this = 0;
    goto LAB_001006dd;
  }
  lVar6 = (long)(int)*(undefined8 *)(pcVar2 + -8);
  iVar4 = WebPGetFeaturesInternal(pcVar2,lVar6,&local_58,0x209);
  if (iVar4 != 0) {
    _err_print_error("_webp_unpack","modules/webp/webp_common.cpp",0x85,
                     "Method/function failed. Returning: Ref<Image>()","Error unpacking WebP image."
                     ,0,0);
    *(undefined8 *)this = 0;
    goto LAB_001006dd;
  }
  local_60 = 0;
  lVar7 = (long)(int)(local_58 * local_54 * (4 - (uint)(local_50 == 0)));
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,lVar7);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
  if (local_50 == 0) {
    lVar6 = WebPDecodeRGBInto(pcVar2,lVar6,local_60,lVar7,local_58 * 3);
    if (lVar6 != 0) goto LAB_00100629;
LAB_00100728:
    _err_print_error("_webp_unpack","modules/webp/webp_common.cpp",0x95,
                     "Condition \"errdec\" is true. Returning: Ref<Image>()",
                     "Failed decoding WebP image.",0,0);
    *(undefined8 *)this = 0;
  }
  else {
    lVar6 = WebPDecodeRGBAInto(pcVar2,lVar6,local_60,lVar7,local_58 << 2);
    if (lVar6 == 0) goto LAB_00100728;
LAB_00100629:
    pOVar5 = (Object *)operator_new(0x268,"");
    Image::Image((Image *)pOVar5,local_58,local_54,0,5 - (uint)(local_50 == 0),auStack_68);
    postinitialize_handler(pOVar5);
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') {
      *(undefined8 *)this = 0;
    }
    else {
      *(Object **)this = pOVar5;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)this = 0;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        memdelete<Image>((Image *)pOVar5);
      }
    }
  }
  lVar6 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
LAB_001006dd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebPCommon::_webp_packer(Ref<Image> const&, float, bool) */

WebPCommon * __thiscall
WebPCommon::_webp_packer(WebPCommon *this,Ref *param_1,float param_2,bool param_3)

{
  long *plVar1;
  Object *pOVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  long in_FS_OFFSET;
  float fVar10;
  long local_200;
  void *local_1f0;
  undefined4 local_1e8;
  float fStack_1e4;
  int local_1e0;
  undefined4 local_188;
  undefined4 local_180;
  void *local_168;
  size_t local_160;
  int local_148 [2];
  undefined8 local_140;
  undefined *local_e8;
  void **local_e0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_1e8,"rendering/textures/webp_compression/compression_method",false
            );
  ProjectSettings::get_setting_with_override((StringName *)local_148);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_148);
  if (Variant::needs_deinit[local_148[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (CONCAT44(fStack_1e4,local_1e8) != 0)) {
    StringName::unref();
  }
  (**(code **)(**(long **)param_1 + 0x198))((StringName *)&local_1e8,*(long **)param_1,0);
  if (CONCAT44(fStack_1e4,local_1e8) == 0) {
    pIVar9 = (Image *)0x0;
  }
  else {
    pIVar9 = (Image *)__dynamic_cast(CONCAT44(fStack_1e4,local_1e8),&Object::typeinfo,
                                     &Image::typeinfo,0);
    if (pIVar9 != (Image *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        pIVar9 = (Image *)0x0;
      }
      if (CONCAT44(fStack_1e4,local_1e8) == 0) goto LAB_00100945;
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar2 = (Object *)CONCAT44(fStack_1e4,local_1e8);
      cVar4 = predelete_handler(pOVar2);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00100945:
  cVar4 = Image::is_compressed();
  if (cVar4 != '\0') {
    iVar6 = Image::decompress();
    if (iVar6 != 0) {
      _err_print_error("_webp_packer","modules/webp/webp_common.cpp",0x3f,
                       "Condition \"error != OK\" is true. Returning: Vector<uint8_t>()",
                       "Couldn\'t decompress image.",0,0);
      *(undefined8 *)(this + 8) = 0;
      goto LAB_00100b79;
    }
  }
  iVar6 = Image::detect_alpha();
  if (iVar6 == 0) {
    Image::convert(pIVar9,4);
  }
  else {
    Image::convert(pIVar9,5);
  }
  iVar6 = Image::get_height();
  iVar7 = Image::get_width();
  Image::get_data();
  iVar8 = WebPConfigInitInternal((StringName *)&local_1e8,0,0x20f);
  if (iVar8 == 0) {
LAB_00100b20:
    _err_print_error("_webp_packer","modules/webp/webp_common.cpp",0x50,
                     "Method/function failed. Returning: Vector<uint8_t>()",0,0);
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    iVar8 = WebPPictureInitInternal((StringName *)local_148,0x20f);
    if (iVar8 == 0) goto LAB_00100b20;
    if (param_3) {
      local_1e8 = 1;
      local_188 = 1;
    }
    local_180 = 1;
    local_1e0 = iVar5;
    if (6 < iVar5) {
      local_1e0 = 6;
    }
    local_148[0] = 1;
    fVar10 = (float)iVar7;
    local_140 = CONCAT44((int)(float)iVar6,(int)fVar10);
    if (local_1e0 < 0) {
      local_1e0 = 0;
    }
    local_e8 = &WebPMemoryWrite;
    fStack_1e4 = param_2;
    local_e0 = &local_168;
    WebPMemoryWriterInit(&local_168);
    iVar5 = Image::get_format();
    if (iVar5 == 4) {
      iVar5 = WebPPictureImportRGB((StringName *)local_148,local_200,(int)(fVar10 * __LC27));
      if (iVar5 != 0) goto LAB_00100c11;
LAB_00100ab8:
      WebPPictureFree((StringName *)local_148);
LAB_00100ac0:
      WebPMemoryWriterClear(&local_168);
      _err_print_error("_webp_packer","modules/webp/webp_common.cpp",0x70,
                       "Method/function failed. Returning: Vector<uint8_t>()","WebP packing failed."
                       ,0,0);
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      iVar5 = WebPPictureImportRGBA((StringName *)local_148,local_200,(int)(fVar10 * __LC28));
      if (iVar5 == 0) goto LAB_00100ab8;
LAB_00100c11:
      iVar5 = WebPEncode((StringName *)&local_1e8,(StringName *)local_148);
      WebPPictureFree((StringName *)local_148);
      if (iVar5 == 0) goto LAB_00100ac0;
      local_1f0 = (void *)0x0;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_1f0,local_160);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_1f0);
      pvVar3 = local_1f0;
      memcpy(local_1f0,local_168,local_160);
      WebPMemoryWriterClear(&local_168);
      *(void **)(this + 8) = pvVar3;
    }
  }
  if (local_200 != 0) {
    LOCK();
    plVar1 = (long *)(local_200 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_200 + -0x10),false);
    }
  }
LAB_00100b79:
  cVar4 = RefCounted::unreference();
  if (cVar4 != '\0') {
    memdelete<Image>(pIVar9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebPCommon::_webp_lossy_pack(Ref<Image> const&, float) */

WebPCommon * __thiscall WebPCommon::_webp_lossy_pack(WebPCommon *this,Ref *param_1,float param_2)

{
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  float fVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    cVar2 = Image::is_empty();
    if (cVar2 == '\0') {
      fVar3 = param_2 * _LC31;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (_LC31 < fVar3) {
        fVar3 = _LC31;
      }
      _webp_packer(this,param_1,fVar3,false);
      goto LAB_00100d7c;
    }
  }
  _err_print_error("_webp_lossy_pack","modules/webp/webp_common.cpp",0x2a,
                   "Condition \"p_image.is_null() || p_image->is_empty()\" is true. Returning: Vector<uint8_t>()"
                   ,0,0);
  *(undefined8 *)(this + 8) = 0;
LAB_00100d7c:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebPCommon::_webp_lossless_pack(Ref<Image> const&) */

WebPCommon * __thiscall WebPCommon::_webp_lossless_pack(WebPCommon *this,Ref *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  float fVar2;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    cVar1 = Image::is_empty();
    if (cVar1 == '\0') {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,
                 "rendering/textures/webp_compression/lossless_compression_factor",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      fVar2 = Variant::operator_cast_to_float((Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      else if (_LC31 < fVar2) {
        fVar2 = _LC31;
      }
      _webp_packer(this,param_1,fVar2,true);
      goto LAB_00100ecd;
    }
  }
  _err_print_error("_webp_lossless_pack","modules/webp/webp_common.cpp",0x30,
                   "Condition \"p_image.is_null() || p_image->is_empty()\" is true. Returning: Vector<uint8_t>()"
                   ,0,0);
  *(undefined8 *)(this + 8) = 0;
LAB_00100ecd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

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

void FUN_001010b0(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = operator_delete;
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
  
  *(code **)this = operator_delete;
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
    *(code **)param_1 = operator_delete;
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



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


