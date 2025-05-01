
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
    FUN_00100ea0();
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



/* save_exr_buffer(Ref<Image> const&, bool) */

Ref * save_exr_buffer(Ref *param_1,bool param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  code *pcVar5;
  float fVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  size_t __n;
  ushort *puVar16;
  long lVar17;
  char *pcVar18;
  char in_DL;
  undefined1 uVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  int iVar23;
  long lVar24;
  byte *pbVar25;
  char cVar26;
  ushort uVar27;
  CowData<unsigned_char> *this;
  long lVar28;
  int iVar29;
  long in_FS_OFFSET;
  float fVar30;
  undefined1 *local_750;
  void *local_728;
  char *local_720;
  long local_718;
  void *local_710;
  char *local_708;
  undefined8 local_700;
  undefined8 *local_6f0;
  undefined4 local_6e8;
  undefined4 local_6e4;
  int local_6e0;
  int local_6d8 [4];
  int local_6c8 [4];
  undefined8 local_6b8 [4];
  undefined1 local_698 [8];
  undefined8 local_690 [4];
  undefined8 local_670;
  undefined8 local_660;
  undefined1 local_658 [16];
  undefined4 local_648;
  undefined1 auStack_644 [12];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [104];
  undefined1 *local_5b0;
  int *piStack_5a8;
  int local_5a0;
  undefined4 local_59c;
  int *local_598;
  undefined1 local_488 [1096];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = Image::get_format();
  if (iVar9 < 6) {
    if (1 < iVar9) {
LAB_0010040c:
      InitEXRHeader(local_618);
      InitEXRImage(&local_708);
      local_638._8_8_ = 0;
      local_638._0_8_ = _LC8;
      iVar3 = *(int *)(CSWTCH_43 + (ulong)(iVar9 - 2) * 4);
      local_690[0] = 0;
      local_690[2] = 0;
      local_670 = 0;
      local_660 = 0;
      local_6c8[1] = 0;
      local_6c8[2] = 0;
      local_6c8[3] = 0;
      local_6c8[0] = -1;
      auStack_644 = SUB1612((undefined1  [16])0x0,4);
      local_648 = 1;
      local_628._8_4_ = 1;
      local_628._0_8_ = _LC9;
      local_628._12_4_ = 0;
      local_658 = (undefined1  [16])0x0;
      if (iVar3 < 0) {
        uVar21 = 0xb5;
        pcVar18 = "Condition \"channel_count < 0\" is true. Returning: Vector<uint8_t>()";
LAB_001009fe:
        _err_print_error("save_exr_buffer","modules/tinyexr/image_saver_tinyexr.cpp",uVar21,pcVar18,
                         0,0);
        *(undefined8 *)(param_1 + 8) = 0;
      }
      else {
        if ((iVar3 != 1) && (in_DL != '\0')) {
          uVar21 = 0xb6;
          pcVar18 = 
          "Condition \"p_grayscale && channel_count != 1\" is true. Returning: Vector<uint8_t>()";
          goto LAB_001009fe;
        }
        if (iVar9 < 0xc) {
          iVar23 = (7 < iVar9) + 2 + (uint)(7 < iVar9);
          iVar29 = (7 < iVar9) + 1;
          cVar26 = (iVar9 < 8) * '\x02';
        }
        else {
          iVar23 = 2;
          iVar29 = 1;
          cVar26 = '\x01';
        }
        iVar9 = Image::get_width();
        iVar10 = Image::get_height();
        iVar9 = iVar9 * iVar10;
        Image::get_data();
        pvVar7 = local_710;
        if (iVar3 != 0) {
          lVar28 = (long)iVar3;
          this = (CowData<unsigned_char> *)local_690;
          lVar12 = (long)(iVar23 * iVar3 * iVar9);
          lVar24 = 0;
          lVar13 = (long)iVar9;
          do {
            CowData<unsigned_char>::resize<false>(this,(long)(iVar9 * iVar23));
            CowData<unsigned_char>::_copy_on_write(this);
            fVar6 = _LC17;
            puVar4 = *(ushort **)this;
            if (cVar26 == '\0' && iVar29 == 2) {
              if (local_710 == (void *)0x0) {
                lVar17 = 0;
              }
              else {
                lVar17 = *(long *)((long)local_710 + -8);
              }
              if (lVar17 < lVar12) {
                uVar21 = 0xd0;
                pcVar18 = 
                "FATAL: Condition \"src_data.size() < pixel_count * channel_count * target_pixel_type_size\" is true."
                ;
                goto LAB_00100aa2;
              }
              if (0 < iVar9) {
                puVar20 = (undefined4 *)((long)pvVar7 + lVar24 * 4);
                puVar16 = puVar4;
                do {
                  uVar2 = *puVar20;
                  puVar14 = puVar16 + 2;
                  puVar20 = puVar20 + lVar28;
                  *(undefined4 *)puVar16 = uVar2;
                  puVar16 = puVar14;
                } while (puVar14 != puVar4 + lVar13 * 2);
              }
            }
            else if ((cVar26 != '\x01') || (iVar29 != 1)) {
              if ((cVar26 != '\x02') || (iVar29 != 1)) {
                uVar21 = 0xee;
                pcVar18 = "FATAL: Method/function failed.";
LAB_00100aa2:
                _err_print_error("save_exr_buffer","modules/tinyexr/image_saver_tinyexr.cpp",uVar21,
                                 pcVar18,0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              if (local_710 == (void *)0x0) {
                lVar17 = 0;
              }
              else {
                lVar17 = *(long *)((long)local_710 + -8);
              }
              if (lVar17 < iVar3 * iVar9) {
                uVar21 = 0xe4;
                pcVar18 = 
                "FATAL: Condition \"src_data.size() < pixel_count * channel_count\" is true.";
                goto LAB_00100aa2;
              }
              pbVar25 = (byte *)((long)pvVar7 + lVar24);
              puVar16 = puVar4;
              if (0 < iVar9) {
                do {
                  fVar30 = (float)*pbVar25 / fVar6;
                  uVar11 = (uint)fVar30 & 0x7f800000;
                  if (uVar11 < 0x47800000) {
                    uVar27 = 0;
                    if (0x38000000 < uVar11) {
                      uVar27 = (ushort)(uVar11 + 0xc8000000 >> 0xd) |
                               (ushort)(((uint)fVar30 >> 0x1f) << 0xf) |
                               (ushort)(((uint)fVar30 & 0x7fffff) >> 0xd);
                    }
                  }
                  else {
                    if ((((uint)fVar30 & 0x7fffff) == 0) || (uVar27 = 0x3ff, uVar11 != 0x7f800000))
                    {
                      uVar27 = 0;
                    }
                    uVar27 = (ushort)(((uint)fVar30 >> 0x1f) << 0xf) | uVar27 | 0x7c00;
                  }
                  *puVar16 = uVar27;
                  puVar16 = puVar16 + 1;
                  pbVar25 = pbVar25 + lVar28;
                } while (puVar16 != puVar4 + lVar13);
              }
            }
            else {
              if (local_710 == (void *)0x0) {
                lVar17 = 0;
              }
              else {
                lVar17 = *(long *)((long)local_710 + -8);
              }
              if (lVar17 < lVar12) {
                uVar21 = 0xda;
                pcVar18 = 
                "FATAL: Condition \"src_data.size() < pixel_count * channel_count * target_pixel_type_size\" is true."
                ;
                goto LAB_00100aa2;
              }
              if (0 < iVar9) {
                puVar16 = (ushort *)((long)pvVar7 + lVar24 * 2);
                puVar14 = puVar4;
                do {
                  uVar27 = *puVar16;
                  puVar15 = puVar14 + 1;
                  puVar16 = puVar16 + lVar28;
                  *puVar14 = uVar27;
                  puVar14 = puVar15;
                } while (puVar15 != puVar4 + lVar13);
              }
            }
            uVar19 = 0x59;
            lVar17 = (long)*(int *)(local_658 + lVar24 * 4 + (long)(iVar3 + -1) * 0x10);
            local_6b8[lVar17] = puVar4;
            local_6d8[lVar17] = iVar29;
            local_6c8[lVar17] = iVar29;
            if (in_DL == '\0') {
              uVar19 = (&_LC19)[lVar24];
            }
            lVar24 = lVar24 + 1;
            this = this + 0x10;
            local_488[lVar17 * 0x110 + 1] = 0;
            local_488[lVar17 * 0x110] = uVar19;
          } while (lVar28 != lVar24);
        }
        pvVar7 = local_710;
        if (local_710 != (void *)0x0) {
          LOCK();
          plVar1 = (long *)((long)local_710 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_710 = (void *)0x0;
            Memory::free_static((void *)((long)pvVar7 + -0x10),false);
          }
        }
        local_6f0 = local_6b8;
        local_6e0 = iVar3;
        local_6e8 = Image::get_width();
        local_6e4 = Image::get_height();
        local_59c = 4;
        local_5a0 = local_6e0;
        local_5b0 = local_488;
        piStack_5a8 = local_6d8;
        local_728 = (void *)0x0;
        local_598 = local_6c8;
        local_720 = (char *)0x0;
        __n = SaveEXRImageToMemory(&local_708,local_618,&local_728,&local_720);
        if ((local_720 == (char *)0x0) || (*local_720 == '\0')) {
          local_710 = (void *)0x0;
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_710,__n);
          pvVar7 = local_728;
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_710);
          pvVar8 = local_710;
          memcpy(local_710,pvVar7,__n);
          free(local_728);
          *(void **)(param_1 + 8) = pvVar8;
        }
        else {
          *(undefined8 *)(param_1 + 8) = 0;
        }
      }
      local_750 = local_658;
      do {
        puVar22 = local_750 + -0x10;
        if (*(long *)(local_750 + -8) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(local_750 + -8) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(*(long *)(local_750 + -8) + -0x10),false);
          }
        }
        local_750 = puVar22;
      } while (puVar22 != local_698);
      goto LAB_001003d0;
    }
  }
  else if (iVar9 - 8U < 8) goto LAB_0010040c;
  local_718 = 0;
  local_708 = "Image format not supported for saving as EXR. Consider saving as PNG.";
  local_700 = 0x45;
  String::parse_latin1((StrRange *)&local_718);
  print_error((String *)&local_718);
  lVar12 = local_718;
  if (local_718 != 0) {
    LOCK();
    plVar1 = (long *)(local_718 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_718 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
LAB_001003d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* save_exr(String const&, Ref<Image> const&, bool) */

undefined8 save_exr(String *param_1,Ref *param_2,bool param_3)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_50;
  Ref local_48 [8];
  long local_40;
  Object *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  save_exr_buffer(local_48,SUB81(param_2,0));
  lVar4 = local_40;
  if (local_40 == 0) {
    local_50 = 0;
    local_38 = (Object *)0x100e77;
    local_30 = 0x12;
    String::parse_latin1((StrRange *)&local_50);
    print_error((String *)&local_50);
    if (local_50 != 0) {
LAB_00100cb6:
      lVar4 = local_50;
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
      lVar4 = local_40;
      if (local_40 != 0) goto LAB_00100d70;
    }
    uVar5 = 0xd;
    goto LAB_00100c36;
  }
  if (*(long *)(local_40 + -8) == 0) {
    local_50 = 0;
    local_38 = (Object *)0x100e77;
    local_30 = 0x12;
    String::parse_latin1((StrRange *)&local_50);
    print_error((String *)&local_50);
    if (local_50 != 0) goto LAB_00100cb6;
LAB_00100d70:
    uVar5 = 0xd;
  }
  else {
    FileAccess::open((String *)&local_38,(int)param_1,(Error *)0x2);
    if (local_38 == (Object *)0x0) {
      _err_print_error("save_exr","modules/tinyexr/image_saver_tinyexr.cpp",0x125,
                       "Condition \"ref.is_null()\" is true. Returning: ERR_FILE_CANT_WRITE",0,0);
      if (((local_38 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar2 = local_38, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      goto LAB_00100d70;
    }
    (**(code **)(*(long *)local_38 + 0x2d0))(local_38,lVar4,*(undefined8 *)(lVar4 + -8));
    if (((local_38 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar2 = local_38, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    uVar5 = 0;
  }
  LOCK();
  plVar1 = (long *)(lVar4 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static((void *)(local_40 + -0x10),false);
  }
LAB_00100c36:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
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

void FUN_00100ea0(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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


