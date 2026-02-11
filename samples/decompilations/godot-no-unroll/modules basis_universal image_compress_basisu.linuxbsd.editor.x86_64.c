
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* basis_universal_init() */

void basis_universal_init(void)

{
  basist::basisu_transcoder_init();
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
LAB_001002c6:
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
    if (lVar10 == 0) goto LAB_001002c6;
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
    FUN_00102cac();
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
      goto LAB_0010021c;
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
LAB_0010021c:
  puVar8[-1] = param_1;
  return;
}



/* basis_universal_unpacker_ptr(unsigned char const*, int) */

uchar * basis_universal_unpacker_ptr(uchar *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  Image *pIVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  void *pvVar18;
  int in_EDX;
  size_t __n;
  Image *pIVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined4 in_register_00000034;
  int *piVar23;
  uint uVar24;
  int iVar25;
  long in_FS_OFFSET;
  bool local_426;
  char local_425;
  long local_418;
  long local_410;
  undefined1 local_408 [8];
  void *local_400;
  char *local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined4 local_3d8;
  undefined4 local_3d4;
  Image *local_3b8;
  undefined8 local_3b0;
  int local_398;
  int local_378 [8];
  basisu_transcoder local_358 [8];
  void *local_350;
  void *local_340;
  void *local_330;
  void *local_320;
  void *local_310;
  void *local_300;
  void *local_2f0;
  void *local_2e0;
  void *local_2d0;
  void *local_2c0;
  void *local_2b0;
  void *local_2a0;
  void *local_290;
  void *local_280;
  void *local_268;
  void *local_258;
  undefined1 local_248 [496];
  undefined8 local_58 [2];
  undefined1 local_48 [8];
  long local_40;
  
  piVar23 = (int *)CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OS::get_singleton();
  lVar15 = OS::get_ticks_msec();
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  if (piVar23 == (int *)0x0) {
    _err_print_error("basis_universal_unpacker_ptr",
                     "modules/basis_universal/image_compress_basisu.cpp",0x108,
                     "Parameter \"p_data\" is null.","Cannot unpack invalid BasisUniversal data.",0,
                     0);
    goto LAB_00100cc7;
  }
  plVar16 = (long *)RenderingServer::get_singleton();
  pcVar3 = *(code **)(*plVar16 + 0x12a8);
  local_3e8 = 0;
  local_3b8 = (Image *)&_LC18;
  local_3b0 = 4;
  String::parse_latin1((StrRange *)&local_3e8);
  local_425 = (*pcVar3)(plVar16);
  lVar17 = local_3e8;
  if (local_3e8 != 0) {
    LOCK();
    plVar16 = (long *)(local_3e8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_3e8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  plVar16 = (long *)RenderingServer::get_singleton();
  pcVar3 = *(code **)(*plVar16 + 0x12a8);
  local_3e8 = 0;
  local_3b8 = (Image *)&_LC19;
  local_3b0 = 4;
  String::parse_latin1((StrRange *)&local_3e8);
  cVar7 = (*pcVar3)(plVar16);
  lVar17 = local_3e8;
  if (local_3e8 != 0) {
    LOCK();
    plVar16 = (long *)(local_3e8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_3e8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  plVar16 = (long *)RenderingServer::get_singleton();
  pcVar3 = *(code **)(*plVar16 + 0x12a8);
  local_3e8 = 0;
  local_3b8 = (Image *)&_LC20;
  local_3b0 = 4;
  String::parse_latin1((StrRange *)&local_3e8);
  local_426 = (bool)(*pcVar3)(plVar16);
  lVar17 = local_3e8;
  if (local_3e8 != 0) {
    LOCK();
    plVar16 = (long *)(local_3e8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_3e8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  plVar16 = (long *)RenderingServer::get_singleton();
  pcVar3 = *(code **)(*plVar16 + 0x12a8);
  local_3e8 = 0;
  local_3b8 = (Image *)&_LC21;
  local_3b0 = 4;
  String::parse_latin1((StrRange *)&local_3e8);
  cVar8 = (*pcVar3)(plVar16);
  lVar17 = local_3e8;
  if (local_3e8 != 0) {
    LOCK();
    plVar16 = (long *)(local_3e8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_3e8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  plVar16 = (long *)RenderingServer::get_singleton();
  pcVar3 = *(code **)(*plVar16 + 0x12a8);
  local_3e8 = 0;
  local_3b8 = (Image *)&_LC22;
  local_3b0 = 4;
  String::parse_latin1((StrRange *)&local_3e8);
  cVar9 = (*pcVar3)(plVar16);
  lVar17 = local_3e8;
  if (local_3e8 != 0) {
    LOCK();
    plVar16 = (long *)(local_3e8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_3e8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  plVar16 = (long *)RenderingServer::get_singleton();
  pcVar3 = *(code **)(*plVar16 + 0x12a8);
  local_3b8 = (Image *)0x102c6e;
  local_3e8 = 0;
  local_3b0 = 8;
  String::parse_latin1((StrRange *)&local_3e8);
  cVar10 = (*pcVar3)(plVar16);
  lVar17 = local_3e8;
  if (local_3e8 != 0) {
    LOCK();
    plVar16 = (long *)(local_3e8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_3e8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  iVar2 = *piVar23;
  switch(iVar2) {
  case 0:
    if (local_426 == false) {
      if (cVar8 != '\0') goto LAB_00100897;
      local_425 = cVar9 == '\0';
      iVar25 = (-(uint)(byte)local_425 & 0xffffffe9) + 0x1c;
      uVar11 = (-(uint)(cVar9 == '\0') & 0xfffffff8) + 0x15;
      local_426 = cVar9 == '\0';
    }
    else {
      local_426 = false;
      iVar25 = 0x15;
      local_425 = '\0';
      uVar11 = 5;
    }
    break;
  case 1:
    if (local_425 == '\0') {
      if (cVar7 == '\0') {
        local_426 = false;
        if (cVar8 != '\0') goto LAB_001006d8;
        iVar25 = (-(uint)(cVar9 == '\0') & 0xffffffe7) + 0x1e;
        uVar11 = -(uint)(cVar9 == '\0') & 0xd;
      }
      else {
LAB_00100964:
        local_426 = false;
        iVar25 = 0x23;
        uVar11 = 10;
      }
    }
    else {
LAB_00100eee:
      local_426 = false;
      iVar25 = 0x16;
      local_425 = '\0';
      uVar11 = 6;
    }
    break;
  case 2:
    if (local_425 != '\0') goto LAB_00100eee;
    if (cVar7 != '\0') goto LAB_00100964;
    local_426 = false;
    if (cVar8 == '\0') {
      iVar25 = (-(uint)(cVar9 == '\0') & 0xffffffe6) + 0x1f;
      goto LAB_00100951;
    }
    uVar11 = 3;
    iVar25 = 0x13;
    break;
  case 3:
    if (cVar8 == '\0') {
      local_426 = cVar9 == '\0';
      iVar25 = (-(uint)local_426 & 0xffffffe4) + 0x21;
      local_425 = local_426;
LAB_00100951:
      uVar11 = (-(uint)(cVar9 == '\0') & 0xc) + 1;
    }
    else {
      local_426 = false;
LAB_00100897:
      local_425 = '\0';
      iVar25 = 0x22;
      uVar11 = 3;
    }
    break;
  case 4:
    if (local_426 == false) {
      local_425 = '\0';
      if (cVar8 == '\0') {
        iVar25 = (-(uint)(cVar9 == '\0') & 0xffffffeb) + 0x1a;
        uVar11 = (-(uint)(cVar9 == '\0') & 0xfffffff9) + 0x14;
        local_426 = cVar9 == '\0';
      }
      else {
LAB_001006d8:
        uVar11 = 2;
        iVar25 = 0x11;
      }
    }
    else {
      local_426 = false;
      iVar25 = 0x14;
      local_425 = '\0';
      uVar11 = 4;
    }
    break;
  case 5:
    local_426 = false;
    if (local_425 == '\0') {
      iVar25 = (-(uint)(cVar10 == '\0') & 0xffffffec) + 0x24;
      uVar11 = (-(uint)(cVar10 == '\0') & 3) + 0x17;
    }
    else {
      local_425 = '\0';
      iVar25 = 0x18;
      uVar11 = 0x16;
    }
    break;
  default:
    _err_print_error("basis_universal_unpacker_ptr",
                     "modules/basis_universal/image_compress_basisu.cpp",0x18a,
                     "Method/function failed. Returning: image",0,0);
    goto LAB_00100cc7;
  }
  uVar21 = in_EDX - 4;
  basist::basisu_transcoder::basisu_transcoder(local_358);
  uVar22 = (uint)(piVar23 + 1);
  cVar7 = basist::basisu_transcoder::validate_header(local_358,uVar22);
  if (cVar7 == '\0') {
    _err_print_error("basis_universal_unpacker_ptr",
                     "modules/basis_universal/image_compress_basisu.cpp",0x192,
                     "Condition \"!transcoder.validate_header(src_ptr, src_size)\" is true. Returning: image"
                     ,0,0);
  }
  else {
    basist::basisu_transcoder::start_transcoding(local_358,uVar22);
    basist::basisu_transcoder::get_image_info
              (local_358,uVar22,(basisu_image_info *)(ulong)uVar21,(uint)(StrRange *)&local_3e8);
    local_400 = (void *)0x0;
    lVar17 = Image::get_image_data_size(local_3d8,local_3d4,iVar25,1 < local_3e8._4_4_);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_400,lVar17);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_400);
    if (local_400 == (void *)0x0) {
      __n = 0;
    }
    else {
      __n = *(size_t *)((long)local_400 + -8);
    }
    pvVar18 = memset(local_400,0,__n);
    if (local_3e8._4_4_ != 0) {
      uVar24 = 0;
      do {
        basist::basisu_transcoder::get_image_level_info
                  (local_358,uVar22,(basisu_image_level_info *)(ulong)uVar21,
                   (uint)(Variant *)&local_3b8,0);
        cVar7 = Image::is_format_compressed(iVar25);
        iVar5 = local_398;
        if (cVar7 == '\0') {
          iVar5 = (int)local_3b0 * local_3b0._4_4_;
        }
        lVar17 = Image::get_image_mipmap_offset(local_3d8,local_3d4,iVar25,uVar24);
        cVar7 = basist::basisu_transcoder::transcode_image_level
                          (local_358,piVar23 + 1,uVar21,0,uVar24,(long)pvVar18 + lVar17,iVar5,uVar11
                           ,0,0,0,0);
        if (cVar7 == '\0') {
          local_418 = 0;
          local_3f8 = "BasisUniversal cannot unpack level %d.";
          local_3f0 = 0x26;
          String::parse_latin1((StrRange *)&local_418);
          vformat<unsigned_int>((String_conflict *)&local_410,(uint)(StrRange *)&local_418);
          Variant::Variant((Variant *)local_378,(String_conflict *)&local_410);
          stringify_variants((Variant *)&local_3f8);
          __print_line((String_conflict *)&local_3f8);
          pcVar6 = local_3f8;
          if (local_3f8 != (char *)0x0) {
            LOCK();
            plVar16 = (long *)(local_3f8 + -0x10);
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
              local_3f8 = (char *)0x0;
              Memory::free_static(pcVar6 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_378[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar17 = local_410;
          if (local_410 != 0) {
            LOCK();
            plVar16 = (long *)(local_410 + -0x10);
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
              local_410 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          lVar17 = local_418;
          if (local_418 != 0) {
            LOCK();
            plVar16 = (long *)(local_418 + -0x10);
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
              local_418 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          break;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < local_3e8._4_4_);
    }
    Image::create_from_data
              ((Variant *)&local_3b8,local_3d8,local_3d4,1 < local_3e8._4_4_,iVar25,local_408);
    pIVar4 = *(Image **)param_1;
    pIVar19 = pIVar4;
    if (local_3b8 == pIVar4) {
LAB_00100aff:
      if ((pIVar19 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
        memdelete<Image>(local_3b8);
      }
    }
    else {
      *(Image **)param_1 = local_3b8;
      if (local_3b8 != (Image *)0x0) {
        cVar7 = RefCounted::reference();
        if (cVar7 == '\0') {
          param_1[0] = '\0';
          param_1[1] = '\0';
          param_1[2] = '\0';
          param_1[3] = '\0';
          param_1[4] = '\0';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
        }
        pIVar19 = local_3b8;
        if (pIVar4 != (Image *)0x0) {
          cVar7 = RefCounted::unreference();
          goto joined_r0x00100d1b;
        }
        goto LAB_00100aff;
      }
      if (pIVar4 != (Image *)0x0) {
        cVar7 = RefCounted::unreference();
joined_r0x00100d1b:
        pIVar19 = local_3b8;
        if (cVar7 != '\0') {
          memdelete<Image>(pIVar4);
          pIVar19 = local_3b8;
        }
        goto LAB_00100aff;
      }
    }
    if (local_425 != '\0') {
      Image::convert_ra_rgba8_to_rg();
    }
    if (local_426 != false) {
      if (iVar2 == 4) {
        Image::convert(*(undefined8 *)param_1);
      }
      else if ((iVar2 == 0) || (iVar2 == 3)) {
        Image::convert(*(undefined8 *)param_1);
      }
    }
    cVar7 = is_print_verbose_enabled();
    if (cVar7 != '\0') {
      OS::get_singleton();
      lVar17 = OS::get_ticks_msec();
      Image::get_format_name(&local_418,iVar25);
      uVar12 = Image::get_mipmap_count();
      uVar13 = Image::get_height();
      uVar14 = Image::get_width();
      local_410 = 0;
      local_3b8 = (Image *)0x1043b8;
      local_3b0 = 0x45;
      String::parse_latin1((StrRange *)&local_410);
      vformat<int,int,int,String,unsigned_long>
                ((String_conflict *)&local_3f8,(StrRange *)&local_410,uVar14,uVar13,uVar12,
                 &local_418,lVar17 - lVar15);
      Variant::Variant((Variant *)local_378,(String_conflict *)&local_3f8);
      stringify_variants((Variant *)&local_3b8);
      __print_line((String_conflict *)&local_3b8);
      pIVar4 = local_3b8;
      if (local_3b8 != (Image *)0x0) {
        LOCK();
        pIVar19 = local_3b8 + -0x10;
        *(long *)pIVar19 = *(long *)pIVar19 + -1;
        UNLOCK();
        if (*(long *)pIVar19 == 0) {
          local_3b8 = (Image *)0x0;
          Memory::free_static(pIVar4 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_378[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar6 = local_3f8;
      if (local_3f8 != (char *)0x0) {
        LOCK();
        plVar16 = (long *)(local_3f8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_3f8 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar15 = local_410;
      if (local_410 != 0) {
        LOCK();
        plVar16 = (long *)(local_410 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_410 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      lVar15 = local_418;
      if (local_418 != 0) {
        LOCK();
        plVar16 = (long *)(local_418 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_418 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
    }
    pvVar18 = local_400;
    if (local_400 != (void *)0x0) {
      LOCK();
      plVar16 = (long *)((long)local_400 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_400 = (void *)0x0;
        Memory::free_static((void *)((long)pvVar18 + -0x10),false);
      }
    }
  }
  puVar20 = local_48;
  do {
    puVar1 = (undefined8 *)(puVar20 + -0x10);
    puVar20 = puVar20 + -0x10;
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
    }
  } while (puVar20 != local_248);
  if (local_258 != (void *)0x0) {
    free(local_258);
  }
  if (local_268 != (void *)0x0) {
    free(local_268);
  }
  if (local_280 != (void *)0x0) {
    free(local_280);
  }
  if (local_290 != (void *)0x0) {
    free(local_290);
  }
  if (local_2a0 != (void *)0x0) {
    free(local_2a0);
  }
  if (local_2b0 != (void *)0x0) {
    free(local_2b0);
  }
  if (local_2c0 != (void *)0x0) {
    free(local_2c0);
  }
  if (local_2d0 != (void *)0x0) {
    free(local_2d0);
  }
  if (local_2e0 != (void *)0x0) {
    free(local_2e0);
  }
  if (local_2f0 != (void *)0x0) {
    free(local_2f0);
  }
  if (local_300 != (void *)0x0) {
    free(local_300);
  }
  if (local_310 != (void *)0x0) {
    free(local_310);
  }
  if (local_320 != (void *)0x0) {
    free(local_320);
  }
  if (local_330 != (void *)0x0) {
    free(local_330);
  }
  if (local_340 != (void *)0x0) {
    free(local_340);
  }
  if (local_350 != (void *)0x0) {
    free(local_350);
  }
LAB_00100cc7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basis_universal_unpacker(Vector<unsigned char> const&) */

Vector * basis_universal_unpacker(Vector *param_1)

{
  long lVar1;
  long in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  basis_universal_unpacker_ptr((uchar *)param_1,(int)*(undefined8 *)(in_RSI + 8));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basis_universal_packer(Ref<Image> const&, Image::UsedChannels) */

long basis_universal_packer(long param_1,undefined8 *param_2,undefined4 param_3)

{
  Object *pOVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined1 auVar8 [8];
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  Image *pIVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  bool extraout_DL;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  void *pvVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined4 *puVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  uint uVar32;
  long *plVar33;
  undefined4 uVar34;
  undefined8 *puVar35;
  void *pvVar36;
  long *plVar37;
  void *pvVar38;
  long in_FS_OFFSET;
  float fVar39;
  Object *pOVar40;
  Image *local_d20;
  undefined4 *local_d18;
  uint local_cb0;
  uint local_cac;
  long local_ca8;
  size_t local_ca0 [2];
  long local_c90;
  void *local_c88;
  ulong local_c80;
  void *local_c78;
  ulong local_c70;
  undefined4 *local_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined4 *local_c48;
  undefined8 local_c40;
  int local_c38 [8];
  job_pool local_c18 [192];
  undefined1 local_b58 [8];
  undefined8 *local_b50;
  ulong local_b48;
  undefined8 *local_b40;
  ulong local_b38;
  void *local_b30;
  ulong local_b28;
  void *local_b20;
  ulong local_b18;
  long *local_b10;
  ulong local_b08;
  long *local_b00;
  ulong local_af8;
  undefined1 *local_af0;
  undefined8 local_ae8;
  undefined1 local_ae0;
  undefined7 uStack_adf;
  undefined8 local_ad0;
  undefined2 local_ac8;
  undefined8 local_ac4;
  undefined8 uStack_abc;
  undefined1 local_ab4;
  undefined4 local_ab0;
  undefined8 local_aac;
  undefined8 uStack_aa4;
  undefined1 local_a9c;
  undefined2 local_a98;
  undefined8 local_a94;
  undefined8 uStack_a8c;
  undefined1 local_a84;
  undefined8 local_a80;
  undefined8 local_a78;
  ulong local_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined1 local_a58;
  undefined1 *local_a50;
  char *local_a48;
  undefined1 local_a40;
  undefined7 uStack_a3f;
  undefined8 local_a30;
  undefined2 local_a28;
  undefined8 local_a24;
  undefined8 uStack_a1c;
  undefined1 local_a14;
  undefined8 local_a10;
  undefined4 local_a08;
  undefined1 local_a04 [16];
  uint local_9f4;
  undefined2 local_9f0;
  undefined8 local_9ec;
  undefined8 uStack_9e4;
  undefined1 local_9dc;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined1 local_9c8;
  undefined8 local_9c4;
  undefined8 uStack_9bc;
  undefined1 local_9b4;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined1 local_9a0;
  undefined8 local_99c;
  undefined8 uStack_994;
  undefined1 local_98c;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined1 local_978;
  undefined4 local_974;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined1 local_960;
  undefined8 local_95c;
  undefined8 uStack_954;
  undefined1 local_94c;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined1 local_938;
  undefined8 local_930;
  undefined2 local_928;
  undefined4 local_924;
  undefined8 *local_920;
  ulong local_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined1 local_900;
  undefined2 local_8fc;
  astc_hdr_codec_options local_8f8 [100];
  undefined4 local_894;
  undefined2 local_890;
  job_pool *local_888;
  basis_compressor local_878 [1928];
  void *local_f0;
  uint local_e8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = pthread_mutex_lock((pthread_mutex_t *)init_mutex);
  if (iVar10 != 0) {
    std::__throw_system_error(iVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (initialized == '\0') {
    basisu::basisu_encoder_init((basisu *)0x0,false,extraout_DL);
    initialized = '\x01';
  }
  pthread_mutex_unlock((pthread_mutex_t *)init_mutex);
  OS::get_singleton();
  OS::get_ticks_msec();
  (**(code **)(*(long *)*param_2 + 0x198))((imagef *)&local_c58,(long *)*param_2,0);
  if ((Object *)local_c58 == (Object *)0x0) {
    local_d20 = (Image *)0x0;
  }
  else {
    pIVar15 = (Image *)__dynamic_cast(local_c58,&Object::typeinfo,&Image::typeinfo,0);
    local_d20 = pIVar15;
    if (pIVar15 != (Image *)0x0) {
      cVar9 = RefCounted::reference();
      local_d20 = (Image *)0x0;
      if (cVar9 != '\0') {
        local_d20 = pIVar15;
      }
      if ((Object *)local_c58 == (Object *)0x0) goto LAB_00101231;
    }
    cVar9 = RefCounted::unreference();
    pOVar40 = (Object *)local_c58;
    if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)local_c58), cVar9 != '\0')) {
      (**(code **)(*(long *)pOVar40 + 0x140))(pOVar40);
      Memory::free_static(pOVar40,false);
    }
  }
LAB_00101231:
  iVar10 = Image::get_format();
  if (iVar10 < 8) {
    Image::convert(local_d20);
LAB_0010125a:
    bVar4 = false;
  }
  else {
    iVar10 = Image::get_format();
    if (0x10 < iVar10) goto LAB_0010125a;
    Image::convert(local_d20);
    bVar4 = true;
  }
  uVar5 = _LC32;
  local_ac8 = 0;
  local_ac4 = __LC31;
  uStack_abc = _UNK_00104598;
  uVar34 = CONCAT22(_UNK_001045d2,_LC32);
  local_aac = __LC33;
  uStack_aa4 = _UNK_001045a8;
  local_a98 = 0;
  local_a94 = __LC34;
  uStack_a8c = _UNK_001045b8;
  local_b58 = (undefined1  [8])0x0;
  local_b50 = (undefined8 *)0x0;
  local_b48 = 0;
  local_b40 = (undefined8 *)0x0;
  local_b38 = 0;
  local_b30 = (void *)0x0;
  local_b28 = 0;
  local_b20 = (void *)0x0;
  local_b18 = 0;
  local_b10 = (long *)0x0;
  local_b08 = 0;
  local_b00 = (long *)0x0;
  local_af8 = 0;
  local_ae8 = 0;
  local_ae0 = 0;
  local_ad0 = 0x10000;
  local_ab4 = 0;
  local_a9c = 0;
  local_a84 = 0;
  local_a80 = _LC35;
  local_a68 = CONCAT44(_UNK_001045c4,_LC28);
  uStack_a60 = _UNK_001045c8;
  local_a24 = CONCAT44(_UNK_001045d4,CONCAT22(_UNK_001045d2,_LC32));
  uStack_a1c = _UNK_001045d8;
  local_a30 = _LC38;
  local_9ec = __LC41;
  uStack_9e4 = _UNK_001045e8;
  uStack_9d0 = CONCAT44(_LC51,_UNK_001045f8);
  local_a10 = _LC40;
  local_9d8 = __LC42;
  local_9f0 = 0;
  local_a78._0_6_ = CONCAT24(_LC32,uVar34);
  local_a70 = (ulong)(ushort)local_a70;
  local_a58 = 0;
  local_a48 = (char *)0x0;
  local_a40 = 0;
  local_a28 = _LC32;
  local_a14 = 0;
  local_a08 = 0xffffffff;
  local_9f4 = 2;
  local_9dc = 0;
  local_9c8 = 0;
  local_9b4 = 0;
  local_9c4 = __LC43;
  uStack_9bc = _UNK_00104608;
  local_9a0 = 0;
  local_9b0 = __LC44;
  uStack_9a8 = _UNK_00104618;
  local_974 = _LC47;
  local_99c = __LC45;
  uStack_994 = _UNK_00104628;
  local_8fc = 0;
  local_988 = __LC46;
  uStack_980 = _UNK_00104638;
  local_970 = __LC48;
  uStack_968 = _UNK_00104648;
  local_95c = __LC48;
  uStack_954 = _UNK_00104648;
  local_98c = 0;
  local_948 = __LC49;
  uStack_940 = _UNK_00104658;
  local_978 = 0;
  local_960 = 0;
  local_94c = 0;
  local_938 = 0;
  local_928 = 0;
  local_924 = 0;
  local_920 = (undefined8 *)0x0;
  local_918 = 0;
  local_900 = 0;
  local_910 = __LC50;
  uStack_908 = _UNK_00104668;
  local_af0 = &local_ae0;
  local_ab0 = uVar34;
  local_a50 = &local_a40;
  basisu::astc_hdr_codec_options::astc_hdr_codec_options(local_8f8);
  auVar8 = local_b58;
  local_888 = (job_pool *)0x0;
  local_ad0._0_4_ = CONCAT22(uVar5,(undefined2)local_ad0);
  local_894 = _LC51;
  local_890 = 0;
  local_b58._0_4_ = local_b58._0_4_ & 0xffff0000;
  local_b58._6_2_ = auVar8._6_2_;
  local_b58._4_2_ = 0;
  if (local_b50 != (undefined8 *)0x0) {
    puVar18 = local_b50 + (local_b48 & 0xffffffff) * 4;
    puVar26 = puVar18;
    for (puVar35 = local_b50; puVar35 != puVar18; puVar35 = puVar35 + 4) {
      if ((undefined8 *)*puVar35 != puVar35 + 2) {
        operator_delete((undefined8 *)*puVar35,puVar35[2] + 1);
      }
      puVar26 = local_b50;
    }
    free(puVar26);
    local_b50 = (undefined8 *)0x0;
    local_b48 = 0;
  }
  if (local_b40 != (undefined8 *)0x0) {
    puVar18 = local_b40 + (local_b38 & 0xffffffff) * 4;
    puVar26 = puVar18;
    for (puVar35 = local_b40; puVar35 != puVar18; puVar35 = puVar35 + 4) {
      if ((undefined8 *)*puVar35 != puVar35 + 2) {
        operator_delete((undefined8 *)*puVar35,puVar35[2] + 1);
      }
      puVar26 = local_b40;
    }
    free(puVar26);
    local_b40 = (undefined8 *)0x0;
    local_b38 = 0;
  }
  if (local_b30 != (void *)0x0) {
    pvVar38 = (void *)((long)local_b30 + (local_b28 & 0xffffffff) * 0x20);
    pvVar25 = pvVar38;
    for (pvVar36 = local_b30; pvVar36 != pvVar38; pvVar36 = (void *)((long)pvVar36 + 0x20)) {
      if (*(void **)((long)pvVar36 + 0x10) != (void *)0x0) {
        free(*(void **)((long)pvVar36 + 0x10));
      }
      pvVar25 = local_b30;
    }
    free(pvVar25);
    local_b30 = (void *)0x0;
    local_b28 = 0;
  }
  if (local_b10 != (long *)0x0) {
    plVar16 = local_b10 + (local_b08 & 0xffffffff) * 2;
    plVar33 = plVar16;
    for (plVar37 = local_b10; plVar37 != plVar16; plVar37 = plVar37 + 2) {
      pvVar38 = (void *)*plVar37;
      if (pvVar38 != (void *)0x0) {
        pvVar25 = (void *)((long)pvVar38 + (ulong)*(uint *)(plVar37 + 1) * 0x20);
        if (pvVar38 != pvVar25) {
          do {
            if (*(void **)((long)pvVar38 + 0x10) != (void *)0x0) {
              free(*(void **)((long)pvVar38 + 0x10));
            }
            pvVar38 = (void *)((long)pvVar38 + 0x20);
          } while (pvVar25 != pvVar38);
          pvVar25 = (void *)*plVar37;
        }
        free(pvVar25);
      }
      plVar33 = local_b10;
    }
    free(plVar33);
    local_b10 = (long *)0x0;
    local_b08 = 0;
  }
  local_ae8 = 0;
  *local_af0 = 0;
  local_ac4 = CONCAT44(local_ac4._4_4_,local_ac4._4_4_);
  local_aac = CONCAT44(local_aac._4_4_,local_aac._4_4_);
  local_a80 = _LC35;
  local_a94 = CONCAT44(local_a94._4_4_,local_a94._4_4_);
  local_ad0 = (local_ad0 >> 0x10 & 0xffff) << 0x10;
  local_a68._0_4_ = local_a68._4_4_;
  local_ac8 = 0;
  local_a9c = 0;
  local_ab4 = 0;
  local_a98 = 0;
  local_a84 = 0;
  local_a78 = 0x100000100000001;
  local_a70 = 0x302;
  local_a58 = 0;
  local_ab0 = uVar34;
  std::__cxx11::string::_M_replace((ulong)&local_a50,0,local_a48,0x102c77);
  fVar39 = (float)uStack_a60;
  if (((float)uStack_a60 <= _LC28) && (fVar39 = uStack_a60._4_4_, _LC28 <= uStack_a60._4_4_)) {
    fVar39 = _LC28;
  }
  local_a68 = CONCAT44(local_a68._4_4_,fVar39);
  local_a04 = (undefined1  [16])0x0;
  local_a30 = _LC38;
  local_9c4 = CONCAT44(local_9c4._4_4_,local_9c4._4_4_);
  local_a24 = CONCAT44(local_a24._4_4_,local_a24._4_4_);
  local_9b0 = CONCAT44(local_9b0._4_4_,local_9b0._4_4_);
  local_974 = _LC47;
  local_99c = CONCAT44(local_99c._4_4_,local_99c._4_4_);
  local_970 = CONCAT44(local_970._4_4_,local_970._4_4_);
  local_988 = CONCAT44(local_988._4_4_,local_988._4_4_);
  local_a58 = 1;
  local_a14 = 0;
  local_a10 = 0;
  local_a08 = 0xffffffff;
  local_9f4 = 2;
  local_9f0 = 0;
  local_9dc = 0;
  local_9b4 = 0;
  local_9a0 = 0;
  local_98c = 0;
  local_978 = 0;
  local_960 = 0;
  local_94c = 0;
  local_95c = CONCAT44(local_95c._4_4_,local_95c._4_4_);
  uVar11 = 0;
  local_938 = 0;
  local_930 = 0;
  local_928 = 0;
  local_924 = 0;
  local_948 = CONCAT44(local_948._4_4_,local_948._4_4_);
  if (local_920 != (undefined8 *)0x0) {
    puVar35 = local_920 + (local_918 & 0xffffffff) * 4;
    puVar18 = puVar35;
    local_a28 = uVar5;
    local_9ec._0_4_ = local_9ec._4_4_;
    for (puVar26 = local_920; puVar26 != puVar35; puVar26 = puVar26 + 4) {
      if ((void *)puVar26[2] != (void *)0x0) {
        free((void *)puVar26[2]);
      }
      if ((void *)*puVar26 != (void *)0x0) {
        free((void *)*puVar26);
      }
      puVar18 = local_920;
    }
    free(puVar18);
    local_920 = (undefined8 *)0x0;
    local_918 = 0;
    uVar11 = local_9f4 & 0xfffffff0;
  }
  uVar6 = _LC54;
  uVar5 = _LC53;
  local_900 = 0;
  local_910 = CONCAT44(local_910._4_4_,local_910._4_4_);
  local_9f0 = _LC54;
  local_8fc = 0;
  local_894 = _LC51;
  local_890 = 0;
  local_888 = (job_pool *)0x0;
  local_b58._0_2_ = _LC53;
  local_a08 = 1;
  fVar39 = (float)uStack_9e4;
  if ((float)uStack_9e4 <= 0.0) {
    fVar39 = (float)(-(uint)(uStack_9e4._4_4_ < 0.0) & (uint)uStack_9e4._4_4_);
  }
  local_9dc = 1;
  local_9c8 = 1;
  local_a28 = _LC53;
  iVar10 = uStack_9d0._4_4_;
  if (0x400 < uStack_9d0._4_4_) {
    iVar10 = 0x400;
  }
  local_a78._0_6_ = CONCAT24(_LC53,(undefined4)local_a78);
  local_a78 = CONCAT62(local_a78._2_6_,_LC54);
  local_9ec = CONCAT44(local_9ec._4_4_,fVar39);
  iVar21 = (int)uStack_9d0;
  if ((int)uStack_9d0 < 0x401) {
    iVar21 = iVar10;
  }
  local_9d8 = CONCAT44(local_9d8._4_4_,iVar21);
  local_9f4 = uVar11;
  OS::get_singleton();
  cVar9 = OS::is_stdout_verbose();
  if (cVar9 == '\0') {
    local_a80 = CONCAT44(0x1000100,(undefined4)local_a80);
    local_ad0._0_4_ = CONCAT22(uVar6,(undefined2)local_ad0);
  }
  plVar16 = (long *)OS::get_singleton();
  uVar11 = (**(code **)(*plVar16 + 0x2d8))(plVar16);
  basisu::job_pool::job_pool(local_c18,uVar11);
  local_888 = local_c18;
  if (bVar4) {
    local_b58._2_2_ = uVar5;
    uVar34 = 5;
    basisu::astc_hdr_codec_options::set_quality_level((int)local_8f8);
  }
  else {
    switch(param_3) {
    case 0:
    case 4:
      uVar34 = 1;
      break;
    case 1:
    case 5:
      local_a78._0_4_ = CONCAT22(uVar5,(undefined2)local_a78);
      uVar34 = 2;
      break;
    case 2:
      uVar34 = 4;
      break;
    case 3:
      local_a78._0_4_ = CONCAT22(uVar5,(undefined2)local_a78);
      uVar34 = 0;
      Image::convert_rg_to_ra_rgba8();
      break;
    default:
      _err_print_error("basis_universal_packer","modules/basis_universal/image_compress_basisu.cpp",
                       0x9f,
                       "Condition \"decompress_format == BASIS_DECOMPRESS_MAX\" is true. Returning: Vector<uint8_t>()"
                       ,0,0);
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_0010210b;
    }
  }
  uVar12 = Image::get_width();
  uVar13 = Image::get_height();
  uVar11 = uVar12;
  if (2 < (int)uVar12) {
    uVar11 = uVar12 + 3 & 0xfffffffc;
  }
  uVar14 = uVar13;
  if (2 < (int)uVar13) {
    uVar14 = uVar13 + 3 & 0xfffffffc;
  }
  uVar32 = 0;
  Image::get_data();
  local_c88 = (void *)0x0;
  local_c80 = 0;
  local_c78 = (void *)0x0;
  local_c70 = 0;
  local_c60 = (undefined4 *)0x0;
  iVar10 = Image::get_mipmap_count();
  if (-1 < iVar10) {
LAB_00101d40:
    Image::get_mipmap_offset_size_and_dimensions
              ((int)local_d20,(long *)(ulong)uVar32,&local_ca8,(int *)local_ca0,(int *)&local_cb0);
    local_d18 = (undefined4 *)(local_ca8 + local_c90);
    cVar9 = Image::has_mipmaps();
    uVar24 = local_cac;
    uVar7 = local_cb0;
    if (((((cVar9 == '\x01') && (((uVar12 | uVar13) & 3) != 0)) && (2 < (int)local_cb0)) &&
        (2 < (int)local_cac)) && ((local_cb0 != uVar11 || (uVar14 != local_cac)))) {
      if (bVar4) {
        CowData<unsigned_char>::resize<false>
                  ((CowData<unsigned_char> *)&local_c60,(long)(int)(uVar11 * uVar14) << 4);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_c60);
        lVar27 = (long)(int)uVar7;
        lVar31 = (long)(int)uVar11;
        uVar29 = 0;
        puVar18 = (undefined8 *)(local_c60 + ((ulong)(uVar11 - uVar7) + lVar27) * 4);
        puVar20 = local_c60;
        do {
          lVar17 = 0;
          do {
            uVar3 = ((undefined8 *)((long)local_d18 + lVar17))[1];
            *(undefined8 *)((long)puVar20 + lVar17) = *(undefined8 *)((long)local_d18 + lVar17);
            ((undefined8 *)((long)puVar20 + lVar17))[1] = uVar3;
            lVar17 = lVar17 + 0x10;
          } while (lVar27 * 0x10 != lVar17);
          puVar26 = (undefined8 *)(puVar20 + lVar27 * 4);
          if ((int)uVar7 < (int)uVar11) {
            do {
              puVar35 = puVar26 + 2;
              *puVar26 = puVar26[-2];
              puVar26[1] = puVar26[-1];
              puVar26 = puVar35;
            } while (puVar35 != puVar18);
          }
          uVar29 = uVar29 + 1;
          puVar18 = puVar18 + lVar31 * 2;
          local_d18 = local_d18 + lVar27 * 4;
          puVar20 = puVar20 + lVar31 * 4;
        } while (uVar24 != uVar29);
        if ((int)uVar24 < (int)uVar14) {
          iVar10 = uVar24 * uVar11;
          do {
            if (0 < (int)uVar11) goto LAB_001026b4;
            uVar24 = uVar24 + 1;
            iVar10 = iVar10 + uVar11;
          } while (uVar14 != uVar24);
        }
      }
      else {
        CowData<unsigned_char>::resize<false>
                  ((CowData<unsigned_char> *)&local_c60,(long)(int)(uVar11 * uVar14) * 4);
        uVar29 = 0;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_c60);
        lVar27 = (long)(int)uVar7;
        lVar31 = (long)(int)uVar11;
        puVar20 = local_c60 + lVar27;
        puVar28 = local_c60 + (ulong)(uVar11 - uVar7) + lVar27;
        puVar23 = local_c60;
        do {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puVar23 + lVar17) = *(undefined4 *)((long)local_d18 + lVar17);
            lVar17 = lVar17 + 4;
          } while (lVar27 * 4 - lVar17 != 0);
          if ((int)uVar7 < (int)uVar11) {
            uVar2 = puVar20[-1];
            puVar19 = puVar20;
            do {
              *puVar19 = uVar2;
              puVar19 = puVar19 + 1;
            } while (puVar28 != puVar19);
          }
          uVar29 = uVar29 + 1;
          puVar20 = puVar20 + lVar31;
          puVar28 = puVar28 + lVar31;
          local_d18 = local_d18 + lVar27;
          puVar23 = puVar23 + lVar31;
        } while (uVar24 != uVar29);
        if ((int)uVar24 < (int)uVar14) {
          iVar10 = uVar24 * uVar11;
          do {
            if (0 < (int)uVar11) goto LAB_001029b2;
            uVar24 = uVar24 + 1;
            iVar10 = iVar10 + uVar11;
          } while (uVar14 != uVar24);
        }
      }
      goto LAB_001029e1;
    }
    goto LAB_00101d9e;
  }
LAB_00101f4b:
  if (bVar4) {
    basisu::vector<basisu::vector<basisu::imagef>>::push_back
              ((vector<basisu::vector<basisu::imagef>> *)&local_b00,(vector *)&local_c78);
  }
  else {
    basisu::vector<basisu::vector<basisu::image>>::push_back
              ((vector<basisu::vector<basisu::image>> *)&local_b10,(vector *)&local_c88);
  }
  if (local_c60 != (undefined4 *)0x0) {
    LOCK();
    plVar16 = (long *)(local_c60 + -4);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      Memory::free_static(local_c60 + -4,false);
    }
  }
  if (local_c78 != (void *)0x0) {
    pvVar36 = (void *)((local_c70 & 0xffffffff) * 0x20 + (long)local_c78);
    pvVar38 = pvVar36;
    for (pvVar25 = local_c78; pvVar25 != pvVar36; pvVar25 = (void *)((long)pvVar25 + 0x20)) {
      if (*(void **)((long)pvVar25 + 0x10) != (void *)0x0) {
        free(*(void **)((long)pvVar25 + 0x10));
      }
      pvVar38 = local_c78;
    }
    free(pvVar38);
  }
  if (local_c88 != (void *)0x0) {
    pvVar36 = (void *)((local_c80 & 0xffffffff) * 0x20 + (long)local_c88);
    pvVar38 = pvVar36;
    for (pvVar25 = local_c88; pvVar25 != pvVar36; pvVar25 = (void *)((long)pvVar25 + 0x20)) {
      if (*(void **)((long)pvVar25 + 0x10) != (void *)0x0) {
        free(*(void **)((long)pvVar25 + 0x10));
      }
      pvVar38 = local_c88;
    }
    free(pvVar38);
  }
  lVar27 = local_c90;
  if (local_c90 != 0) {
    LOCK();
    plVar16 = (long *)(local_c90 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_c90 = 0;
      Memory::free_static((void *)(lVar27 + -0x10),false);
    }
  }
  basisu::basis_compressor::basis_compressor(local_878);
  basisu::basis_compressor::init((basis_compressor_params *)local_878);
  iVar10 = basisu::basis_compressor::process();
  if (iVar10 == 0) {
    local_c60 = (undefined4 *)0x0;
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)&local_c60,(ulong)(local_e8 + 4));
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_c60);
    puVar20 = local_c60;
    *local_c60 = uVar34;
    memcpy(local_c60 + 1,local_f0,(ulong)local_e8);
    cVar9 = is_print_verbose_enabled();
    if (cVar9 != '\0') {
      OS::get_singleton();
      OS::get_ticks_msec();
      uVar11 = Image::get_mipmap_count();
      iVar10 = Image::get_height();
      iVar21 = Image::get_width();
      local_c88 = (void *)0x0;
      local_c50 = 0x3a;
      local_c58 = "BasisU: Encoding a %dx%d image with %d mipmaps took %d ms.";
      String::parse_latin1((StrRange *)&local_c88);
      vformat<int,int,int,unsigned_long>
                ((String_conflict *)&local_c78,(int)(StrRange *)&local_c88,iVar21,iVar10,
                 (ulong)uVar11);
      Variant::Variant((Variant *)local_c38,(String_conflict *)&local_c78);
      stringify_variants((Variant *)&local_c58);
      __print_line((String_conflict *)&local_c58);
      pOVar40 = (Object *)local_c58;
      if ((Object *)local_c58 != (Object *)0x0) {
        LOCK();
        pOVar1 = (Object *)local_c58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_c58 = (char *)0x0;
          Memory::free_static(pOVar40 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_c38[0]] != '\0') {
        Variant::_clear_internal();
      }
      pvVar38 = local_c78;
      if (local_c78 != (void *)0x0) {
        LOCK();
        plVar16 = (long *)((long)local_c78 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_c78 = (void *)0x0;
          Memory::free_static((void *)((long)pvVar38 + -0x10),false);
        }
      }
      pvVar38 = local_c88;
      if (local_c88 != (void *)0x0) {
        LOCK();
        plVar16 = (long *)((long)local_c88 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_c88 = (void *)0x0;
          Memory::free_static((void *)((long)pvVar38 + -0x10),false);
        }
      }
    }
    *(undefined4 **)(param_1 + 8) = puVar20;
  }
  else {
    _err_print_error("basis_universal_packer","modules/basis_universal/image_compress_basisu.cpp",
                     0xf2,
                     "Condition \"basisu_err != basisu::basis_compressor::cECSuccess\" is true. Returning: Vector<uint8_t>()"
                     ,0,0);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  basisu::basis_compressor::~basis_compressor(local_878);
LAB_0010210b:
  basisu::job_pool::~job_pool(local_c18);
  if (local_920 != (undefined8 *)0x0) {
    puVar35 = local_920 + (local_918 & 0xffffffff) * 4;
    puVar18 = puVar35;
    for (puVar26 = local_920; puVar26 != puVar35; puVar26 = puVar26 + 4) {
      if ((void *)puVar26[2] != (void *)0x0) {
        free((void *)puVar26[2]);
      }
      if ((void *)*puVar26 != (void *)0x0) {
        free((void *)*puVar26);
      }
      puVar18 = local_920;
    }
    free(puVar18);
  }
  if (local_a50 != &local_a40) {
    operator_delete(local_a50,CONCAT71(uStack_a3f,local_a40) + 1);
  }
  if (local_af0 != &local_ae0) {
    operator_delete(local_af0,CONCAT71(uStack_adf,local_ae0) + 1);
  }
  if (local_b00 != (long *)0x0) {
    plVar37 = local_b00 + (local_af8 & 0xffffffff) * 2;
    plVar16 = plVar37;
    for (plVar33 = local_b00; plVar33 != plVar37; plVar33 = plVar33 + 2) {
      pvVar38 = (void *)*plVar33;
      if (pvVar38 != (void *)0x0) {
        pvVar25 = (void *)((ulong)*(uint *)(plVar33 + 1) * 0x20 + (long)pvVar38);
        if (pvVar38 != pvVar25) {
          do {
            if (*(void **)((long)pvVar38 + 0x10) != (void *)0x0) {
              free(*(void **)((long)pvVar38 + 0x10));
            }
            pvVar38 = (void *)((long)pvVar38 + 0x20);
          } while (pvVar25 != pvVar38);
          pvVar25 = (void *)*plVar33;
        }
        free(pvVar25);
      }
      plVar16 = local_b00;
    }
    free(plVar16);
  }
  if (local_b10 != (long *)0x0) {
    plVar37 = local_b10 + (local_b08 & 0xffffffff) * 2;
    plVar16 = plVar37;
    for (plVar33 = local_b10; plVar33 != plVar37; plVar33 = plVar33 + 2) {
      pvVar38 = (void *)*plVar33;
      if (pvVar38 != (void *)0x0) {
        pvVar25 = (void *)((ulong)*(uint *)(plVar33 + 1) * 0x20 + (long)pvVar38);
        if (pvVar38 != pvVar25) {
          do {
            if (*(void **)((long)pvVar38 + 0x10) != (void *)0x0) {
              free(*(void **)((long)pvVar38 + 0x10));
            }
            pvVar38 = (void *)((long)pvVar38 + 0x20);
          } while (pvVar25 != pvVar38);
          pvVar25 = (void *)*plVar33;
        }
        free(pvVar25);
      }
      plVar16 = local_b10;
    }
    free(plVar16);
  }
  if (local_b20 != (void *)0x0) {
    pvVar36 = (void *)((local_b18 & 0xffffffff) * 0x20 + (long)local_b20);
    pvVar38 = pvVar36;
    for (pvVar25 = local_b20; pvVar25 != pvVar36; pvVar25 = (void *)((long)pvVar25 + 0x20)) {
      if (*(void **)((long)pvVar25 + 0x10) != (void *)0x0) {
        free(*(void **)((long)pvVar25 + 0x10));
      }
      pvVar38 = local_b20;
    }
    free(pvVar38);
  }
  if (local_b30 != (void *)0x0) {
    pvVar36 = (void *)((local_b28 & 0xffffffff) * 0x20 + (long)local_b30);
    pvVar38 = pvVar36;
    for (pvVar25 = local_b30; pvVar25 != pvVar36; pvVar25 = (void *)((long)pvVar25 + 0x20)) {
      if (*(void **)((long)pvVar25 + 0x10) != (void *)0x0) {
        free(*(void **)((long)pvVar25 + 0x10));
      }
      pvVar38 = local_b30;
    }
    free(pvVar38);
  }
  if (local_b40 != (undefined8 *)0x0) {
    puVar35 = local_b40 + (local_b38 & 0xffffffff) * 4;
    puVar18 = puVar35;
    for (puVar26 = local_b40; puVar26 != puVar35; puVar26 = puVar26 + 4) {
      if ((undefined8 *)*puVar26 != puVar26 + 2) {
        operator_delete((undefined8 *)*puVar26,puVar26[2] + 1);
      }
      puVar18 = local_b40;
    }
    free(puVar18);
  }
  if (local_b50 != (undefined8 *)0x0) {
    puVar35 = local_b50 + (local_b48 & 0xffffffff) * 4;
    puVar18 = puVar35;
    for (puVar26 = local_b50; puVar26 != puVar35; puVar26 = puVar26 + 4) {
      if ((undefined8 *)*puVar26 != puVar26 + 2) {
        operator_delete((undefined8 *)*puVar26,puVar26[2] + 1);
      }
      puVar18 = local_b50;
    }
    free(puVar18);
  }
  cVar9 = RefCounted::unreference();
  if (cVar9 != '\0') {
    memdelete<Image>(local_d20);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_001029b2:
  do {
    puVar20 = local_c60 + (iVar10 - lVar31);
    do {
      puVar20[lVar31] = *puVar20;
      puVar20 = puVar20 + 1;
    } while (local_c60 + iVar10 != puVar20);
    uVar24 = uVar24 + 1;
    iVar10 = iVar10 + uVar11;
  } while (uVar14 != uVar24);
  goto LAB_001029e1;
LAB_001026b4:
  do {
    puVar18 = (undefined8 *)(local_c60 + (iVar10 - lVar31) * 4);
    do {
      uVar3 = puVar18[1];
      puVar26 = puVar18 + 2;
      puVar18[lVar31 * 2] = *puVar18;
      (puVar18 + lVar31 * 2)[1] = uVar3;
      puVar18 = puVar26;
    } while (puVar26 != (undefined8 *)(local_c60 + (long)iVar10 * 4));
    uVar24 = uVar24 + 1;
    iVar10 = iVar10 + uVar11;
  } while (uVar14 != uVar24);
LAB_001029e1:
  local_d18 = local_c60;
  local_cb0 = uVar11;
  local_cac = uVar14;
  if (local_c60 == (undefined4 *)0x0) {
    local_ca0[0] = 0;
  }
  else {
    local_ca0[0] = *(size_t *)(local_c60 + -2);
  }
LAB_00101d9e:
  uVar24 = local_cac;
  uVar7 = local_cb0;
  pOVar40 = (Object *)CONCAT44(local_cac,local_cb0);
  local_c58 = (char *)0x0;
  local_c50 = 0;
  local_c48 = (undefined4 *)0x0;
  uVar11 = (int)uVar11 / 2;
  local_c40 = 0;
  uVar14 = (int)uVar14 / 2;
  if (bVar4) {
    if ((local_cb0 != 0) && (local_cac != 0)) {
      iVar10 = local_cb0 * local_cac;
      if (iVar10 == 0) {
        iVar10 = 0;
        local_c58._4_4_ = 0;
        local_c58._0_4_ = 0;
      }
      else {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_c48,SUB41(iVar10,0),(uint)(iVar10 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x10,true);
        local_c40 = CONCAT44(local_c40._4_4_,iVar10);
        iVar10 = (int)local_c50;
      }
      iVar30 = 0;
      iVar21 = 0;
      uVar29 = 0;
      do {
        uVar22 = 0;
        do {
          while ((uVar3 = _UNK_00104678,
                 puVar18 = (undefined8 *)(local_c48 + (ulong)(iVar21 + uVar22) * 4),
                 (uint)local_c58 <= uVar22 || (local_c58._4_4_ <= uVar29))) {
            uVar22 = uVar22 + 1;
            *puVar18 = __LC58;
            puVar18[1] = uVar3;
            if (uVar7 == uVar22) goto LAB_00101ed7;
          }
          puVar26 = (undefined8 *)((ulong)(iVar30 + uVar22) * 0x10);
          if (puVar26 != puVar18) {
            uVar3 = puVar26[1];
            *puVar18 = *puVar26;
            puVar18[1] = uVar3;
          }
          uVar22 = uVar22 + 1;
        } while (uVar7 != uVar22);
LAB_00101ed7:
        uVar29 = uVar29 + 1;
        iVar21 = iVar21 + uVar7;
        iVar30 = iVar30 + iVar10;
      } while (uVar24 != uVar29);
      local_c50 = CONCAT44(local_c50._4_4_,uVar7);
      local_c58 = (char *)pOVar40;
    }
    memcpy(local_c48,local_d18,local_ca0[0]);
    if (uVar32 == 0) {
      basisu::vector<basisu::imagef>::push_back
                ((vector<basisu::imagef> *)&local_b20,(imagef *)&local_c58);
    }
    else {
      basisu::vector<basisu::imagef>::push_back
                ((vector<basisu::imagef> *)&local_c78,(imagef *)&local_c58);
    }
  }
  else {
    if ((local_cb0 != 0) && (local_cac != 0)) {
      uVar29 = local_cb0 * local_cac;
      if (uVar29 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_c48,SUB41(uVar29,0),(uint)(uVar29 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        local_c40 = CONCAT44(local_c40._4_4_,uVar29);
        if ((Object *)local_c58 == (Object *)0x0) {
          puVar20 = local_c48;
          do {
            puVar28 = puVar20 + 1;
            *puVar20 = basisu::g_black_color;
            puVar20 = puVar28;
          } while (local_c48 + uVar29 != puVar28);
        }
        else {
          iVar10 = 0;
          uVar29 = 0;
          do {
            uVar22 = 0;
            while( true ) {
              if ((uVar22 < (uint)local_c58) && (uVar29 < local_c58._4_4_)) {
                local_c48[uVar22 + iVar10] =
                     *(undefined4 *)((ulong)((int)local_c50 * uVar29 + uVar22) * 4);
              }
              else {
                local_c48[uVar22 + iVar10] = basisu::g_black_color;
              }
              if (uVar7 <= uVar22 + 1) break;
              uVar22 = uVar22 + 1;
            }
            uVar29 = uVar29 + 1;
            iVar10 = iVar10 + uVar7;
          } while (uVar29 < uVar24);
        }
      }
      local_c50 = CONCAT44(local_c50._4_4_,uVar7);
      local_c58 = (char *)pOVar40;
    }
    memcpy(local_c48,local_d18,local_ca0[0]);
    if (uVar32 == 0) {
      basisu::vector<basisu::image>::push_back
                ((vector<basisu::image> *)&local_b30,(image *)&local_c58);
    }
    else {
      basisu::vector<basisu::image>::push_back
                ((vector<basisu::image> *)&local_c88,(image *)&local_c58);
    }
  }
  if (local_c48 != (undefined4 *)0x0) {
    free(local_c48);
  }
  uVar32 = uVar32 + 1;
  iVar10 = Image::get_mipmap_count();
  if (iVar10 < (int)uVar32) goto LAB_00101f4b;
  goto LAB_00101d40;
}



/* basisu::vector<basisu::vec<4u, float> >::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::vec<4u,float>>::object_mover(void *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  pvVar2 = (void *)((ulong)param_3 * 0x10 + (long)param_2);
  if (param_2 != pvVar2) {
    uVar4 = 0;
    lVar3 = 0;
    do {
      uVar1 = ((undefined8 *)((long)param_2 + lVar3))[1];
      uVar4 = uVar4 + 1;
      *(undefined8 *)((long)param_1 + lVar3) = *(undefined8 *)((long)param_2 + lVar3);
      ((undefined8 *)((long)param_1 + lVar3))[1] = uVar1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
  }
  return;
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

void FUN_00102cac(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* basisu::vector<basisu::imagef>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::imagef>::object_mover(void *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *__ptr;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)((ulong)param_3 * 0x20 + (long)param_2);
  if ((undefined8 *)param_2 != puVar5) {
    do {
      *(undefined8 *)param_1 = 0;
      *(undefined4 *)((long)param_1 + 8) = 0;
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      *(undefined8 *)((long)param_1 + 0x18) = 0;
      if (param_2 != param_1) {
                    /* WARNING: Load size is inaccurate */
        *(undefined8 *)param_1 = *param_2;
        *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + 8);
        if ((undefined8 *)((long)param_1 + 0x10) == (undefined8 *)((long)param_2 + 0x10)) {
          __ptr = *(void **)((long)param_2 + 0x10);
LAB_00102d3f:
          if (__ptr == (void *)0x0) goto LAB_00102d44;
        }
        else {
          if (*(int *)((long)param_2 + 0x18) == 0) {
            __ptr = *(void **)((long)param_2 + 0x10);
LAB_00102d38:
            *(undefined4 *)((long)param_1 + 0x18) = 0;
            goto LAB_00102d3f;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)(undefined8 *)((long)param_1 + 0x10),
                     SUB41(*(int *)((long)param_2 + 0x18),0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x10,true);
          uVar1 = *(uint *)((long)param_2 + 0x18);
          lVar2 = *(long *)((long)param_1 + 0x10);
          __ptr = *(void **)((long)param_2 + 0x10);
          if (uVar1 == 0) goto LAB_00102d38;
          lVar4 = 0;
          do {
            uVar3 = ((undefined8 *)((long)__ptr + lVar4))[1];
            *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)((long)__ptr + lVar4);
            ((undefined8 *)(lVar2 + lVar4))[1] = uVar3;
            lVar4 = lVar4 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar4);
          *(uint *)((long)param_1 + 0x18) = uVar1;
        }
        free(__ptr);
      }
LAB_00102d44:
      param_2 = (void *)((long)param_2 + 0x20);
      param_1 = (void *)((long)param_1 + 0x20);
    } while (puVar5 != (undefined8 *)param_2);
  }
  return;
}



/* basisu::vector<basisu::image>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::image>::object_mover(void *param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  void *__ptr;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)((ulong)param_3 * 0x20 + (long)param_2);
  if ((undefined8 *)param_2 != puVar3) {
    do {
      while( true ) {
        *(undefined8 *)param_1 = 0;
        *(undefined4 *)((long)param_1 + 8) = 0;
        *(undefined8 *)((long)param_1 + 0x10) = 0;
        *(undefined8 *)((long)param_1 + 0x18) = 0;
        if (param_2 != param_1) break;
LAB_00102e05:
        param_2 = (void *)((long)param_2 + 0x20);
        param_1 = (void *)((long)param_1 + 0x20);
        if (puVar3 == (undefined8 *)param_2) {
          return;
        }
      }
                    /* WARNING: Load size is inaccurate */
      *(undefined8 *)param_1 = *param_2;
      *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + 8);
      if ((undefined8 *)((long)param_1 + 0x10) == (undefined8 *)((long)param_2 + 0x10)) {
        __ptr = *(void **)((long)param_2 + 0x10);
LAB_00102dfb:
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
        goto LAB_00102e05;
      }
      iVar2 = *(int *)((long)param_2 + 0x18);
      if (iVar2 == 0) {
LAB_00102df4:
        __ptr = *(void **)((long)param_2 + 0x10);
        *(int *)((long)param_1 + 0x18) = iVar2;
        goto LAB_00102dfb;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)(undefined8 *)((long)param_1 + 0x10),SUB41(iVar2,0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      if (*(void **)((long)param_1 + 0x10) == (void *)0x0) {
LAB_00102df1:
        iVar2 = *(int *)((long)param_2 + 0x18);
        goto LAB_00102df4;
      }
      puVar1 = (uint *)((long)param_2 + 0x18);
      if (*(void **)((long)param_2 + 0x10) != (void *)0x0) {
        memcpy(*(void **)((long)param_1 + 0x10),*(void **)((long)param_2 + 0x10),(ulong)*puVar1 << 2
              );
        goto LAB_00102df1;
      }
      param_2 = (void *)((long)param_2 + 0x20);
      *(uint *)((long)param_1 + 0x18) = *puVar1;
      param_1 = (void *)((long)param_1 + 0x20);
    } while (puVar3 != (undefined8 *)param_2);
  }
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



/* basisu::vector<basisu::imagef>::push_back(basisu::imagef const&) */

void __thiscall
basisu::vector<basisu::imagef>::push_back(vector<basisu::imagef> *this,imagef *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  imagef *piVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar6) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar6 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x20,
               true);
    uVar6 = *(uint *)(this + 8);
  }
  piVar5 = (imagef *)((ulong)uVar6 * 0x20 + *(long *)this);
  *(undefined8 *)piVar5 = 0;
  *(undefined4 *)(piVar5 + 8) = 0;
  *(undefined8 *)(piVar5 + 0x10) = 0;
  *(undefined8 *)(piVar5 + 0x18) = 0;
  if (piVar5 != param_1) {
    *(undefined8 *)piVar5 = *(undefined8 *)param_1;
    *(undefined4 *)(piVar5 + 8) = *(undefined4 *)(param_1 + 8);
    if (piVar5 + 0x10 != param_1 + 0x10) {
      uVar7 = *(uint *)(param_1 + 0x18);
      if (uVar7 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)(piVar5 + 0x10),SUB41(uVar7,0),0,(_func_void_void_ptr_void_ptr_uint *)0x10,
                   true);
        uVar7 = *(uint *)(param_1 + 0x18);
        lVar1 = *(long *)(piVar5 + 0x10);
        lVar2 = *(long *)(param_1 + 0x10);
        if (uVar7 != 0) {
          lVar4 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar2 + lVar4))[1];
            *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
            ((undefined8 *)(lVar1 + lVar4))[1] = uVar3;
            lVar4 = lVar4 + 0x10;
          } while ((ulong)uVar7 << 4 != lVar4);
        }
        uVar6 = *(uint *)(this + 8);
      }
      *(uint *)(piVar5 + 0x18) = uVar7;
    }
  }
  *(uint *)(this + 8) = uVar6 + 1;
  return;
}



/* basisu::vector<basisu::image>::push_back(basisu::image const&) */

void __thiscall basisu::vector<basisu::image>::push_back(vector<basisu::image> *this,image *param_1)

{
  uint uVar1;
  image *piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar3) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar3 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x20,
               true);
    uVar3 = *(uint *)(this + 8);
  }
  piVar2 = (image *)((ulong)uVar3 * 0x20 + *(long *)this);
  *(undefined8 *)piVar2 = 0;
  *(undefined4 *)(piVar2 + 8) = 0;
  *(undefined8 *)(piVar2 + 0x10) = 0;
  *(undefined8 *)(piVar2 + 0x18) = 0;
  if (piVar2 == param_1) goto LAB_0010311f;
  *(undefined8 *)piVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(piVar2 + 8) = *(undefined4 *)(param_1 + 8);
  if (piVar2 + 0x10 == param_1 + 0x10) goto LAB_0010311f;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)(piVar2 + 0x10),SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false
              );
    if (*(void **)(piVar2 + 0x10) == (void *)0x0) {
LAB_00103114:
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        memcpy(*(void **)(piVar2 + 0x10),*(void **)(param_1 + 0x10),(ulong)uVar1 << 2);
        goto LAB_00103114;
      }
    }
    uVar3 = *(uint *)(this + 8);
  }
  *(uint *)(piVar2 + 0x18) = uVar1;
LAB_0010311f:
  *(uint *)(this + 8) = uVar3 + 1;
  return;
}



/* basisu::vector<basisu::vector<basisu::imagef> >::push_back(basisu::vector<basisu::imagef> const&)
    */

void __thiscall
basisu::vector<basisu::vector<basisu::imagef>>::push_back
          (vector<basisu::vector<basisu::imagef>> *this,vector *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar6 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar6) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar6 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x10,
               false);
    uVar6 = *(uint *)(this + 8);
  }
  uVar2 = *(undefined4 *)(param_1 + 8);
  puVar8 = (undefined8 *)((ulong)uVar6 * 0x10 + *(long *)this);
  *puVar8 = 0;
  puVar8[1] = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)puVar8,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
  uVar6 = *(uint *)(param_1 + 8);
  puVar9 = *(undefined8 **)param_1;
  *(uint *)(puVar8 + 1) = uVar6;
  puVar8 = (undefined8 *)*puVar8;
  if (uVar6 != 0) {
    puVar1 = puVar8 + (ulong)uVar6 * 4;
    do {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      if (puVar9 != puVar8) {
        *puVar8 = *puVar9;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
        if (puVar8 + 2 != puVar9 + 2) {
          uVar6 = *(uint *)(puVar9 + 3);
          if (uVar6 != 0) {
            basisu::elemental_vector::increase_capacity
                      ((uint)(puVar8 + 2),SUB41(uVar6,0),0,(_func_void_void_ptr_void_ptr_uint *)0x10
                       ,true);
            uVar6 = *(uint *)(puVar9 + 3);
            lVar3 = puVar8[2];
            lVar4 = puVar9[2];
            if (uVar6 != 0) {
              lVar7 = 0;
              do {
                uVar5 = ((undefined8 *)(lVar4 + lVar7))[1];
                *(undefined8 *)(lVar3 + lVar7) = *(undefined8 *)(lVar4 + lVar7);
                ((undefined8 *)(lVar3 + lVar7))[1] = uVar5;
                lVar7 = lVar7 + 0x10;
              } while ((ulong)uVar6 << 4 != lVar7);
            }
          }
          *(uint *)(puVar8 + 3) = uVar6;
        }
      }
      puVar8 = puVar8 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar8 != puVar1);
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}



/* basisu::vector<basisu::vector<basisu::image> >::push_back(basisu::vector<basisu::image> const&)
    */

void __thiscall
basisu::vector<basisu::vector<basisu::image>>::push_back
          (vector<basisu::vector<basisu::image>> *this,vector *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar4) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar4 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x10,
               false);
    uVar4 = *(uint *)(this + 8);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  puVar2 = (undefined8 *)((ulong)uVar4 * 0x10 + *(long *)this);
  *puVar2 = 0;
  puVar2[1] = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)puVar2,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
  uVar4 = *(uint *)(param_1 + 8);
  puVar3 = *(undefined8 **)param_1;
  *(uint *)(puVar2 + 1) = uVar4;
  puVar2 = (undefined8 *)*puVar2;
  if (uVar4 != 0) {
    puVar5 = puVar2 + (ulong)uVar4 * 4;
    do {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      if (puVar3 != puVar2) {
        *puVar2 = *puVar3;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
        if (puVar2 + 2 != puVar3 + 2) {
          uVar4 = *(uint *)(puVar3 + 3);
          if (uVar4 != 0) {
            basisu::elemental_vector::increase_capacity
                      ((uint)(puVar2 + 2),SUB41(uVar4,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                       false);
            if ((void *)puVar2[2] != (void *)0x0) {
              uVar4 = *(uint *)(puVar3 + 3);
              if ((void *)puVar3[2] == (void *)0x0) goto LAB_001033a6;
              memcpy((void *)puVar2[2],(void *)puVar3[2],(ulong)uVar4 * 4);
            }
            uVar4 = *(uint *)(puVar3 + 3);
          }
LAB_001033a6:
          *(uint *)(puVar2 + 3) = uVar4;
        }
      }
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar2 != puVar5);
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x001035e0) */
/* WARNING: Removing unreachable block (ram,0x00103710) */
/* WARNING: Removing unreachable block (ram,0x00103888) */
/* WARNING: Removing unreachable block (ram,0x0010371c) */
/* WARNING: Removing unreachable block (ram,0x00103726) */
/* WARNING: Removing unreachable block (ram,0x0010386a) */
/* WARNING: Removing unreachable block (ram,0x00103732) */
/* WARNING: Removing unreachable block (ram,0x0010373c) */
/* WARNING: Removing unreachable block (ram,0x0010384c) */
/* WARNING: Removing unreachable block (ram,0x00103748) */
/* WARNING: Removing unreachable block (ram,0x00103752) */
/* WARNING: Removing unreachable block (ram,0x0010382e) */
/* WARNING: Removing unreachable block (ram,0x0010375e) */
/* WARNING: Removing unreachable block (ram,0x00103768) */
/* WARNING: Removing unreachable block (ram,0x00103810) */
/* WARNING: Removing unreachable block (ram,0x00103774) */
/* WARNING: Removing unreachable block (ram,0x0010377e) */
/* WARNING: Removing unreachable block (ram,0x001037f2) */
/* WARNING: Removing unreachable block (ram,0x00103786) */
/* WARNING: Removing unreachable block (ram,0x00103790) */
/* WARNING: Removing unreachable block (ram,0x001037d7) */
/* WARNING: Removing unreachable block (ram,0x00103798) */
/* WARNING: Removing unreachable block (ram,0x001037ad) */
/* WARNING: Removing unreachable block (ram,0x001037b9) */
/* String vformat<int, int, int, unsigned long>(String const&, int const, int const, int const,
   unsigned long const) */

String_conflict *
vformat<int,int,int,unsigned_long>
          (String_conflict *param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  undefined4 in_register_00000034;
  int iVar4;
  ulong in_R9;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,(int)param_5);
  iVar2 = 0;
  Variant::Variant(local_70,in_R9);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar4 = (int)local_108;
  Array::resize(iVar4);
  pVVar3 = local_b8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 4);
  String::sprintf((Array *)local_100,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_100[0];
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001039c8) */
/* WARNING: Removing unreachable block (ram,0x00103af8) */
/* WARNING: Removing unreachable block (ram,0x00103cc0) */
/* WARNING: Removing unreachable block (ram,0x00103b04) */
/* WARNING: Removing unreachable block (ram,0x00103b0e) */
/* WARNING: Removing unreachable block (ram,0x00103ca0) */
/* WARNING: Removing unreachable block (ram,0x00103b1a) */
/* WARNING: Removing unreachable block (ram,0x00103b24) */
/* WARNING: Removing unreachable block (ram,0x00103c80) */
/* WARNING: Removing unreachable block (ram,0x00103b30) */
/* WARNING: Removing unreachable block (ram,0x00103b3a) */
/* WARNING: Removing unreachable block (ram,0x00103c60) */
/* WARNING: Removing unreachable block (ram,0x00103b46) */
/* WARNING: Removing unreachable block (ram,0x00103b50) */
/* WARNING: Removing unreachable block (ram,0x00103c40) */
/* WARNING: Removing unreachable block (ram,0x00103b5c) */
/* WARNING: Removing unreachable block (ram,0x00103b66) */
/* WARNING: Removing unreachable block (ram,0x00103c20) */
/* WARNING: Removing unreachable block (ram,0x00103b72) */
/* WARNING: Removing unreachable block (ram,0x00103b7c) */
/* WARNING: Removing unreachable block (ram,0x00103c00) */
/* WARNING: Removing unreachable block (ram,0x00103b84) */
/* WARNING: Removing unreachable block (ram,0x00103b9a) */
/* WARNING: Removing unreachable block (ram,0x00103ba6) */
/* String vformat<unsigned int>(String const&, unsigned int const) */

String_conflict * vformat<unsigned_int>(String_conflict *param_1,uint param_2)

{
  char cVar1;
  Variant *this;
  uint in_EDX;
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



/* WARNING: Removing unreachable block (ram,0x00103e70) */
/* WARNING: Removing unreachable block (ram,0x00103fa0) */
/* WARNING: Removing unreachable block (ram,0x00104118) */
/* WARNING: Removing unreachable block (ram,0x00103fac) */
/* WARNING: Removing unreachable block (ram,0x00103fb6) */
/* WARNING: Removing unreachable block (ram,0x001040fa) */
/* WARNING: Removing unreachable block (ram,0x00103fc2) */
/* WARNING: Removing unreachable block (ram,0x00103fcc) */
/* WARNING: Removing unreachable block (ram,0x001040dc) */
/* WARNING: Removing unreachable block (ram,0x00103fd8) */
/* WARNING: Removing unreachable block (ram,0x00103fe2) */
/* WARNING: Removing unreachable block (ram,0x001040be) */
/* WARNING: Removing unreachable block (ram,0x00103fee) */
/* WARNING: Removing unreachable block (ram,0x00103ff8) */
/* WARNING: Removing unreachable block (ram,0x001040a0) */
/* WARNING: Removing unreachable block (ram,0x00104004) */
/* WARNING: Removing unreachable block (ram,0x0010400e) */
/* WARNING: Removing unreachable block (ram,0x00104082) */
/* WARNING: Removing unreachable block (ram,0x00104016) */
/* WARNING: Removing unreachable block (ram,0x00104020) */
/* WARNING: Removing unreachable block (ram,0x00104067) */
/* WARNING: Removing unreachable block (ram,0x00104028) */
/* WARNING: Removing unreachable block (ram,0x0010403d) */
/* WARNING: Removing unreachable block (ram,0x00104049) */
/* String vformat<int, int, int, String, unsigned long>(String const&, int const, int const, int
   const, String const, unsigned long const) */

undefined8 *
vformat<int,int,int,String,unsigned_long>
          (undefined8 *param_1,bool *param_2,int param_3,int param_4,int param_5,
          String_conflict *param_6,ulong param_7)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_128 [8];
  undefined8 local_120 [9];
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
  Variant::Variant(local_d8,param_3);
  Variant::Variant(local_c0,param_4);
  Variant::Variant(local_a8,param_5);
  iVar2 = 0;
  Variant::Variant(local_90,param_6);
  Variant::Variant(local_78,param_7);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_128);
  iVar4 = (int)local_128;
  Array::resize(iVar4);
  pVVar3 = local_d8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 5);
  String::sprintf((Array *)local_120,param_2);
  *param_1 = local_120[0];
  pVVar3 = local_48;
  Array::~Array(local_128);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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


