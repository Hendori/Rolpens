
/* PNGDriverCommon::check_error(png_image const&) */

undefined8 PNGDriverCommon::check_error(png_image *param_1)

{
  int iVar1;
  long lVar2;
  
  if (((byte)param_1[0x20] & 2) != 0) {
    lVar2 = Engine::get_singleton();
    if (((lVar2 == 0) || (*(char *)(lVar2 + 0xc0) == '\0')) ||
       (iVar1 = strcmp((char *)(param_1 + 0x24),"iCCP: known incorrect sRGB profile"), iVar1 != 0))
    {
      _err_print_error("check_error","drivers/png/png_driver_common.cpp",0x38,param_1 + 0x24,0,1);
    }
    return 0;
  }
  return 0;
}



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



/* PNGDriverCommon::png_to_image(unsigned char const*, unsigned long, bool, Ref<Image>) */

int PNGDriverCommon::png_to_image
              (undefined8 param_1,undefined8 param_2,char param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  png_image *ppVar8;
  long in_FS_OFFSET;
  undefined1 local_b8 [8];
  long local_b0;
  png_image local_a8 [8];
  undefined4 local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  undefined1 local_84 [68];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar8 = local_a8;
  for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)ppVar8 = 0;
    ppVar8 = ppVar8 + 8;
  }
  local_a0 = 1;
  iVar4 = png_image_begin_read_from_memory(local_a8,param_1,param_2);
  cVar3 = check_error(local_a8);
  if (cVar3 == '\0') {
    if (iVar4 != 0) {
      uVar6 = local_94 & 0xffffffc3;
      if (3 < uVar6) {
        iVar4 = 2;
        local_94 = uVar6;
        png_image_free(local_a8);
        _err_print_error("png_to_image","drivers/png/png_driver_common.cpp",0x62,
                         "Unsupported png format.",0,0);
        goto LAB_001002d3;
      }
      uVar2 = *(undefined4 *)(CSWTCH_1201 + (ulong)uVar6 * 4);
      if (param_3 == '\0') {
        local_90 = local_90 | 4;
      }
      local_b0 = 0;
      iVar7 = ((local_94 & 3) + 1) * local_9c;
      local_94 = uVar6;
      iVar4 = CowData<unsigned_char>::resize<false>
                        ((CowData<unsigned_char> *)&local_b0,(ulong)(uint)(iVar7 * local_98));
      if (iVar4 == 0) {
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_b0);
        iVar7 = png_image_finish_read(local_a8,0,local_b0,iVar7,0);
        cVar3 = check_error(local_a8);
        if (cVar3 == '\0') {
          if (iVar7 != 0) {
            Image::set_data(*param_4,local_9c,local_98,0,uVar2,local_b8);
            goto LAB_001002a8;
          }
          _err_print_error("png_to_image","drivers/png/png_driver_common.cpp",0x77,
                           "Condition \"!success\" is true. Returning: ERR_FILE_CORRUPT",0,0);
        }
        else {
          _err_print_error("png_to_image","drivers/png/png_driver_common.cpp",0x76,
                           "Condition \"check_error(png_img)\" is true. Returning: ERR_FILE_CORRUPT"
                           ,local_84,0,0);
        }
        iVar4 = 0x10;
      }
      else {
        png_image_free(local_a8);
      }
LAB_001002a8:
      lVar5 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      goto LAB_001002d3;
    }
    _err_print_error("png_to_image","drivers/png/png_driver_common.cpp",0x45,
                     "Condition \"!success\" is true. Returning: ERR_FILE_CORRUPT",0,0);
  }
  else {
    _err_print_error("png_to_image","drivers/png/png_driver_common.cpp",0x44,
                     "Condition \"check_error(png_img)\" is true. Returning: ERR_FILE_CORRUPT",
                     local_84,0,0);
  }
  iVar4 = 0x10;
LAB_001002d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PNGDriverCommon::image_to_png(Ref<Image> const&, Vector<unsigned char>&) */

int PNGDriverCommon::image_to_png(Ref *param_1,Vector *param_2)

{
  CowData<unsigned_char> *this;
  long *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  Image *pIVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  png_image *ppVar10;
  long lVar11;
  long in_FS_OFFSET;
  byte bVar12;
  ulong local_c0;
  Object *local_b8;
  long local_b0;
  png_image local_a8 [8];
  undefined4 local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_8c;
  undefined1 local_84 [68];
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)param_1 + 0x198))(&local_b8,*(long **)param_1,0);
  if (local_b8 == (Object *)0x0) {
    pIVar5 = (Image *)0x0;
  }
  else {
    pIVar5 = (Image *)__dynamic_cast(local_b8,&Object::typeinfo,&Image::typeinfo,0);
    if (pIVar5 != (Image *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pIVar5 = (Image *)0x0;
      }
      if (local_b8 == (Object *)0x0) goto LAB_001004bc;
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_b8), cVar3 != '\0')) {
      (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
      Memory::free_static(local_b8,false);
    }
  }
LAB_001004bc:
  cVar3 = Image::is_compressed();
  if (cVar3 == '\0') {
    cVar3 = Image::is_compressed();
  }
  else {
    Image::decompress();
    cVar3 = Image::is_compressed();
  }
  if (cVar3 != '\0') {
    _err_print_error("image_to_png","drivers/png/png_driver_common.cpp",0x86,
                     "Condition \"source_image->is_compressed()\" is true. Returning: FAILED",0,0);
    iVar4 = 1;
    goto LAB_001006e7;
  }
  ppVar10 = local_a8;
  for (lVar7 = 0xd; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined8 *)ppVar10 = 0;
    ppVar10 = ppVar10 + (ulong)bVar12 * -0x10 + 8;
  }
  local_a0 = 1;
  local_9c = Image::get_width();
  local_98 = Image::get_height();
  iVar4 = Image::get_format();
  if (iVar4 == 4) {
LAB_0010082d:
    local_94 = 2;
  }
  else {
    if (iVar4 < 5) {
      local_94 = 0;
      if ((iVar4 == 0) || (local_94 = 1, iVar4 == 1)) goto LAB_00100539;
LAB_001007f8:
      iVar4 = Image::detect_alpha();
      if (iVar4 == 0) {
        Image::convert(pIVar5,4);
        goto LAB_0010082d;
      }
      Image::convert(pIVar5,5);
    }
    else if (iVar4 != 5) goto LAB_001007f8;
    local_94 = 3;
  }
LAB_00100539:
  Image::get_data();
  lVar7 = local_b0;
  if (*(long *)(param_2 + 8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (long)*(int *)(*(long *)(param_2 + 8) + -8);
  }
  if ((local_94 & 8) == 0) {
    lVar9 = 0x80;
    iVar4 = ((local_94 >> 2 & 1) + 1) * ((local_94 & 3) + 1) * local_98;
  }
  else {
    uVar2 = local_94 & 1;
    if ((local_94 & 1) != 0) {
      uVar2 = local_8c + 0xc;
    }
    lVar9 = (ulong)(local_8c * 3 + 0x81 + uVar2) + 0xb;
    iVar4 = local_98;
  }
  this = (CowData<unsigned_char> *)(param_2 + 8);
  uVar8 = (ulong)(uint)(iVar4 * local_9c + local_98);
  lVar6 = (uVar8 + 7 >> 3) + (uVar8 + 0x3f >> 6) + uVar8;
  uVar8 = lVar6 + lVar9 + (lVar6 + 0xbU >> 0xd) * 0xc;
  local_c0 = uVar8;
  iVar4 = CowData<unsigned_char>::resize<false>(this,uVar8 + lVar11);
  if (iVar4 == 0) {
    CowData<unsigned_char>::_copy_on_write(this);
    iVar4 = png_image_write_to_memory
                      (local_a8,*(long *)(param_2 + 8) + lVar11,&local_c0,0,lVar7,0,0);
    cVar3 = check_error(local_a8);
    if (cVar3 == '\0') {
      if (iVar4 != 0) {
LAB_0010069c:
        iVar4 = CowData<unsigned_char>::resize<false>(this,local_c0 + lVar11);
        if (iVar4 != 0) {
          _err_print_error("image_to_png","drivers/png/png_driver_common.cpp",0xca,
                           "Condition \"err\" is true. Returning: err",0,0);
        }
        goto LAB_001006b2;
      }
      if (uVar8 < local_c0) {
        iVar4 = CowData<unsigned_char>::resize<false>(this,local_c0 + lVar11);
        if (iVar4 != 0) {
          _err_print_error("image_to_png","drivers/png/png_driver_common.cpp",0xbf,
                           "Condition \"err\" is true. Returning: err",0,0);
          goto LAB_001006b2;
        }
        CowData<unsigned_char>::_copy_on_write(this);
        iVar4 = png_image_write_to_memory
                          (local_a8,*(long *)(param_2 + 8) + lVar11,&local_c0,0,lVar7,0,0);
        cVar3 = check_error(local_a8);
        if (cVar3 == '\0') {
          if (iVar4 != 0) goto LAB_0010069c;
          _err_print_error("image_to_png","drivers/png/png_driver_common.cpp",0xc5,
                           "Condition \"!success\" is true. Returning: FAILED",0,0);
        }
        else {
          _err_print_error("image_to_png","drivers/png/png_driver_common.cpp",0xc4,
                           "Condition \"check_error(png_img)\" is true. Returning: FAILED",local_84,
                           0,0);
        }
      }
      else {
        _err_print_error("image_to_png","drivers/png/png_driver_common.cpp",0xbb,
                         "Condition \"compressed_size <= png_size_estimate\" is true. Returning: FAILED"
                         ,0,0);
      }
    }
    else {
      _err_print_error("image_to_png","drivers/png/png_driver_common.cpp",0xb7,
                       "Condition \"check_error(png_img)\" is true. Returning: FAILED",local_84,0,0)
      ;
    }
    iVar4 = 1;
  }
  else {
    _err_print_error("image_to_png","drivers/png/png_driver_common.cpp",0xb2,
                     "Condition \"err\" is true. Returning: err",0,0);
  }
LAB_001006b2:
  lVar7 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_001006e7:
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    memdelete<Image>(pIVar5);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) */

undefined8 __thiscall
CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

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
LAB_00100fce:
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
    if (lVar9 == 0) goto LAB_00100fce;
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
        goto LAB_00100f0c;
      }
      uVar7 = _realloc(this,lVar1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    puVar8 = *(undefined8 **)this;
    if (puVar8 != (undefined8 *)0x0) {
LAB_00100f0c:
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



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


