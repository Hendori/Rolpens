
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



/* ImageLoaderTinyEXR::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ImageLoaderTinyEXR::get_recognized_extensions(ImageLoaderTinyEXR *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC6;
  local_30 = 3;
  String::parse_latin1((StrRange *)&local_40);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (local_40 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)&local_40);
  }
  lVar3 = local_40;
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
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageLoaderTinyEXR::ImageLoaderTinyEXR() */

void __thiscall ImageLoaderTinyEXR::ImageLoaderTinyEXR(ImageLoaderTinyEXR *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00103260;
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
LAB_001004a6:
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
    if (lVar10 == 0) goto LAB_001004a6;
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
    FUN_00101dae();
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
      goto LAB_001003fc;
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
LAB_001003fc:
  puVar8[-1] = param_1;
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLoaderTinyEXR::load_image(Ref<Image>, Ref<FileAccess>,
   BitField<ImageFormatLoader::LoaderFlags>, float) */

undefined8
ImageLoaderTinyEXR::load_image
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  int ******ppppppiVar3;
  int *****pppppiVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int *******pppppppiVar14;
  ushort uVar15;
  int *******pppppppiVar16;
  ushort *puVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  undefined8 uVar22;
  float *pfVar23;
  int iVar24;
  float *pfVar25;
  uint uVar26;
  int *****pppppiVar27;
  float *pfVar28;
  int *****pppppiVar29;
  float *pfVar30;
  ushort *puVar31;
  float *pfVar32;
  int *****pppppiVar33;
  ushort *puVar34;
  long lVar35;
  int iVar36;
  float *pfVar37;
  int iVar38;
  float *pfVar39;
  long in_FS_OFFSET;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_280;
  int *******local_260 [2];
  long local_250;
  long local_248;
  long local_240;
  undefined1 local_238 [32];
  int *******local_218;
  size_t local_210;
  undefined8 local_200;
  int *******local_1f8;
  size_t local_1f0;
  undefined8 local_1e0;
  int local_1d8;
  int local_1d4;
  int local_1cc;
  undefined1 local_1c8 [56];
  int local_190;
  int local_18c;
  int local_188;
  char *local_160;
  long local_158;
  int local_150;
  long local_148;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_250 = 0;
  lVar12 = (**(code **)(*(long *)*param_3 + 0x1d0))();
  if (lVar12 == 0) {
    uVar22 = 0x10;
    _err_print_error("load_image","modules/tinyexr/image_loader_tinyexr.cpp",0x28,
                     "Condition \"src_image_len == 0\" is true. Returning: ERR_FILE_CORRUPT",0,0);
    goto LAB_00100dd4;
  }
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_250,lVar12);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_250);
  lVar35 = local_250;
  uVar22 = 0x10;
  (**(code **)(*(long *)*param_3 + 0x220))((long *)*param_3,local_250,lVar12);
  local_260[0] = (int *******)0x0;
  InitEXRHeader(local_1c8);
  iVar8 = ParseEXRVersionFromMemory(local_238,lVar35,lVar12);
  if (iVar8 == 0) {
    iVar8 = ParseEXRHeaderFromMemory(local_1c8,local_238,lVar35,lVar12,local_260);
    pppppppiVar16 = local_260[0];
    if (iVar8 == 0) {
      if (local_150 < 1) {
        bVar5 = false;
      }
      else {
        lVar13 = 0;
        bVar5 = false;
        do {
          if (*(int *)(local_158 + lVar13 * 4) == 1) {
            *(undefined4 *)(local_148 + lVar13 * 4) = 2;
            bVar5 = true;
          }
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < local_150);
      }
      InitEXRImage(&local_1f8);
      iVar8 = LoadEXRImageFromMemory(&local_1f8,local_1c8,lVar35,lVar12);
      pppppppiVar16 = local_260[0];
      if (iVar8 == 0) {
        if (local_150 < 1) {
LAB_001016da:
          local_240 = 0;
          _err_print_error("load_image","modules/tinyexr/image_loader_tinyexr.cpp",0x88,
                           "Condition \"idxR == -1\" is true. Returning: ERR_FILE_CORRUPT",0,0);
          goto LAB_001016ff;
        }
        iVar19 = -1;
        local_2d4 = -1;
        local_2d8 = -1;
        iVar8 = -1;
        iVar38 = 0;
        iVar36 = -1;
        do {
          while ((iVar9 = iVar38, cVar2 = *local_160, iVar38 = local_2d4, cVar2 == 'R' &&
                 (iVar18 = iVar9, iVar24 = iVar9, iVar7 = local_2d8, local_160[1] == '\0'))) {
LAB_001006c8:
            local_2d4 = iVar38;
            local_2d8 = iVar7;
            iVar19 = iVar24;
            local_160 = local_160 + 0x110;
            iVar8 = iVar18;
            iVar38 = iVar9 + 1;
            if (local_150 == iVar9 + 1) goto LAB_00100702;
          }
          iVar18 = iVar8;
          if ((cVar2 != 'G') || (local_160[1] != '\0')) {
            iVar24 = iVar19;
            if ((((cVar2 != 'B') || (iVar7 = iVar9, local_160[1] != '\0')) &&
                ((cVar2 != 'A' || (iVar7 = local_2d8, iVar38 = iVar9, local_160[1] != '\0')))) &&
               ((iVar7 = local_2d8, iVar38 = local_2d4, cVar2 == 'Y' &&
                (iVar18 = iVar19, local_160[1] == '\0')))) {
              iVar18 = iVar9;
              iVar24 = iVar9;
              iVar7 = iVar9;
              iVar36 = iVar9;
            }
            goto LAB_001006c8;
          }
          local_160 = local_160 + 0x110;
          iVar36 = iVar9;
          iVar38 = iVar9 + 1;
        } while (local_150 != iVar9 + 1);
LAB_00100702:
        local_240 = 0;
        if (bVar5) {
          iVar8 = 2;
          if (local_2d4 == -1) goto LAB_00101479;
          iVar38 = 0xf;
          CowData<unsigned_char>::resize<false>
                    ((CowData<unsigned_char> *)&local_240,(long)(local_1d4 * local_1d8 * 8));
          iVar8 = 4;
LAB_0010075c:
          pppppppiVar16 = local_1f8;
          if (local_190 == 0) {
            local_218 = (int *******)0x0;
            local_200 = local_1e0;
            local_280 = local_1d4;
            local_2cc = local_1d8;
            local_210 = CONCAT44(local_1d4,local_1d8);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_240);
            lVar12 = 1;
            pppppppiVar16 = (int *******)&local_218;
LAB_001007e2:
            lVar13 = local_240;
            pppppppiVar14 = pppppppiVar16 + lVar12 * 4;
            local_2d0 = local_1d8;
            do {
              iVar19 = *(int *)(pppppppiVar16 + 2);
              pppppiVar33 = (int *****)0x0;
              iVar9 = *(int *)((long)pppppppiVar16 + 0x14);
              ppppppiVar3 = pppppppiVar16[3];
              pppppiVar4 = ppppppiVar3[iVar18];
              if (iVar36 != -1) {
                pppppiVar33 = ppppppiVar3[iVar36];
              }
              pppppiVar27 = (int *****)0x0;
              if (local_2d8 != -1) {
                pppppiVar27 = ppppppiVar3[local_2d8];
              }
              pppppiVar29 = (int *****)0x0;
              if (local_2d4 != -1) {
                pppppiVar29 = ppppppiVar3[local_2d4];
              }
              lVar12 = (long)((local_280 * *(int *)((long)pppppppiVar16 + 4) * local_1d8 +
                              local_2cc * *(int *)pppppppiVar16) * iVar8);
              if (0 < iVar9) {
                pfVar30 = (float *)(lVar13 + lVar12 * 4);
                iVar24 = 0;
                puVar31 = (ushort *)(lVar13 + lVar12 * 2);
                lVar12 = 0;
                pfVar39 = (float *)((long)pppppiVar4 + (long)iVar19 * 4);
                do {
                  pfVar32 = (float *)((long)pppppiVar4 + lVar12);
                  pfVar28 = (float *)0x0;
                  pfVar20 = (float *)((long)pppppiVar33 + lVar12);
                  if (pppppiVar33 == (int *****)0x0) {
                    pfVar20 = pfVar28;
                  }
                  pfVar23 = (float *)((long)pppppiVar27 + lVar12);
                  if (pppppiVar27 == (int *****)0x0) {
                    pfVar23 = pfVar28;
                  }
                  pfVar21 = (float *)((long)pppppiVar29 + lVar12);
                  if (pppppiVar29 == (int *****)0x0) {
                    pfVar21 = pfVar28;
                  }
                  if (bVar5) {
                    uVar26 = param_4 & 1;
                    puVar34 = puVar31;
                    if (0 < iVar19) {
                      do {
                        fVar6 = _LC19;
                        pfVar28 = pfVar32 + 1;
                        auVar40 = (undefined1  [16])0x0;
                        fVar44 = *pfVar32;
                        if (pfVar20 != (float *)0x0) {
                          auVar40 = ZEXT416((uint)*pfVar20);
                          pfVar20 = pfVar20 + 1;
                        }
                        auVar42._0_4_ = auVar40._0_4_;
                        fVar43 = _LC13;
                        if (pfVar23 == (float *)0x0) {
                          if (pfVar21 == (float *)0x0) {
                            if (uVar26 != 0) goto LAB_00101035;
                            auVar45 = (undefined1  [16])0x0;
                          }
                          else {
                            pfVar32 = pfVar21 + 1;
                            fVar43 = *pfVar21;
                            auVar45 = (undefined1  [16])0x0;
                            pfVar21 = pfVar32;
                            if (uVar26 != 0) {
LAB_00101035:
                              auVar45 = (undefined1  [16])0x0;
                              goto LAB_0010103d;
                            }
                          }
                        }
                        else {
                          auVar46._0_4_ = *pfVar23;
                          auVar45 = ZEXT416((uint)auVar46._0_4_);
                          pfVar23 = pfVar23 + 1;
                          if (pfVar21 != (float *)0x0) {
                            fVar43 = *pfVar21;
                            pfVar21 = pfVar21 + 1;
                          }
                          if (uVar26 == 0) goto LAB_00100c65;
                          if (auVar46._0_4_ < _LC19) {
LAB_0010103d:
                            auVar46._4_12_ = auVar45._4_12_;
                            auVar46._0_4_ = auVar45._0_4_ * __LC20;
                            if (auVar42._0_4_ < _LC19) goto LAB_00100c4c;
LAB_0010104e:
                            auVar41._0_4_ =
                                 powf((float)(((double)auVar40._0_4_ + __LC21) * __LC22),_LC23);
                            auVar40._4_4_ = 0;
                            auVar40._0_4_ = auVar41._0_4_;
                            auVar40._8_4_ = (int)extraout_XMM0_Qb_00;
                            auVar40._12_4_ = (int)((ulong)extraout_XMM0_Qb_00 >> 0x20);
                            auVar45 = ZEXT416((uint)auVar46._0_4_);
                          }
                          else {
                            auVar46._0_4_ =
                                 powf((float)(((double)auVar46._0_4_ + __LC21) * __LC22),_LC23);
                            auVar40 = ZEXT416((uint)auVar42._0_4_);
                            auVar46._4_4_ = 0;
                            auVar46._8_4_ = (int)extraout_XMM0_Qb;
                            auVar46._12_4_ = (int)((ulong)extraout_XMM0_Qb >> 0x20);
                            if (fVar6 <= auVar42._0_4_) goto LAB_0010104e;
LAB_00100c4c:
                            auVar41._4_12_ = auVar40._4_12_;
                            auVar41._0_4_ = auVar40._0_4_ * __LC20;
                            auVar40 = auVar41;
                            auVar45 = auVar46;
                          }
                          if (fVar6 <= fVar44) {
                            fVar44 = powf((float)(((double)fVar44 + __LC21) * __LC22),_LC23);
                            auVar40 = ZEXT416((uint)auVar41._0_4_);
                            auVar45 = ZEXT416((uint)auVar46._0_4_);
                          }
                          else {
                            fVar44 = fVar44 * __LC20;
                          }
                        }
LAB_00100c65:
                        uVar11 = (uint)fVar44 & 0x7f800000;
                        if (uVar11 < 0x47800000) {
                          uVar15 = 0;
                          if (0x38000000 < uVar11) {
                            uVar15 = (ushort)(((uint)fVar44 & 0x7fffff) >> 0xd) |
                                     (ushort)(((uint)fVar44 >> 0x1f) << 0xf) |
                                     (ushort)(uVar11 + 0xc8000000 >> 0xd);
                          }
                        }
                        else {
                          if ((((uint)fVar44 & 0x7fffff) == 0) ||
                             (uVar15 = 0x3ff, uVar11 != 0x7f800000)) {
                            uVar15 = 0;
                          }
                          uVar15 = (ushort)(((uint)fVar44 >> 0x1f) << 0xf) | uVar15 | 0x7c00;
                        }
                        *puVar34 = uVar15;
                        puVar17 = puVar34 + 1;
                        if (pfVar20 != (float *)0x0) {
                          uVar11 = auVar40._0_4_;
                          uVar10 = uVar11 & 0x7f800000;
                          if (uVar10 < 0x47800000) {
                            uVar15 = 0;
                            if (0x38000000 < uVar10) {
                              uVar15 = (ushort)((uVar11 & 0x7fffff) >> 0xd) |
                                       (ushort)((uVar11 >> 0x1f) << 0xf) |
                                       (ushort)(uVar10 + 0xc8000000 >> 0xd);
                            }
                          }
                          else {
                            if (((auVar40 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                               (uVar15 = 0x3ff, uVar10 != 0x7f800000)) {
                              uVar15 = 0;
                            }
                            uVar15 = (ushort)((uVar11 >> 0x1f) << 0xf) | uVar15 | 0x7c00;
                          }
                          puVar34[1] = uVar15;
                          puVar17 = puVar34 + 2;
                        }
                        if (pfVar23 != (float *)0x0) {
                          uVar11 = auVar45._0_4_;
                          uVar10 = uVar11 & 0x7f800000;
                          if (uVar10 < 0x47800000) {
                            uVar15 = 0;
                            if (0x38000000 < uVar10) {
                              uVar15 = (ushort)((uVar11 >> 0x1f) << 0xf) |
                                       (ushort)((uVar11 & 0x7fffff) >> 0xd) |
                                       (ushort)(uVar10 + 0xc8000000 >> 0xd);
                            }
                          }
                          else {
                            if (((auVar45 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                               (uVar10 != 0x7f800000)) {
                              uVar15 = 0;
                            }
                            else {
                              uVar15 = 0x3ff;
                            }
                            uVar15 = (ushort)((uVar11 >> 0x1f) << 0xf) | uVar15 | 0x7c00;
                          }
                          *puVar17 = uVar15;
                          puVar17 = puVar17 + 1;
                        }
                        if (pfVar21 != (float *)0x0) {
                          uVar11 = (uint)fVar43 & 0x7f800000;
                          if (uVar11 < 0x47800000) {
                            uVar15 = 0;
                            if (0x38000000 < uVar11) {
                              uVar15 = (ushort)(((uint)fVar43 >> 0x1f) << 0xf) |
                                       (ushort)(((uint)fVar43 & 0x7fffff) >> 0xd) |
                                       (ushort)(uVar11 + 0xc8000000 >> 0xd);
                            }
                          }
                          else {
                            if ((((uint)fVar43 & 0x7fffff) == 0) || (uVar11 != 0x7f800000)) {
                              uVar15 = 0;
                            }
                            else {
                              uVar15 = 0x3ff;
                            }
                            uVar15 = (ushort)(((uint)fVar43 >> 0x1f) << 0xf) | uVar15 | 0x7c00;
                          }
                          *puVar17 = uVar15;
                          puVar17 = puVar17 + 1;
                        }
                        puVar34 = puVar17;
                        pfVar32 = pfVar28;
                      } while (pfVar28 != pfVar39);
                    }
                  }
                  else if (0 < iVar19) {
                    pfVar28 = pfVar30;
                    do {
                      fVar6 = _LC19;
                      pfVar37 = pfVar32 + 1;
                      auVar45 = (undefined1  [16])0x0;
                      fVar44 = *pfVar32;
                      if (pfVar20 != (float *)0x0) {
                        auVar45 = ZEXT416((uint)*pfVar20);
                        pfVar20 = pfVar20 + 1;
                      }
                      auVar42._0_4_ = auVar45._0_4_;
                      fVar43 = _LC13;
                      if (pfVar23 == (float *)0x0) {
                        if (pfVar21 != (float *)0x0) {
                          fVar43 = *pfVar21;
                          pfVar21 = pfVar21 + 1;
                        }
                        auVar46._0_4_ = 0.0;
                        if ((param_4 & 1) != 0) {
                          auVar46._0_4_ = 0.0;
LAB_00101303:
                          auVar46._0_4_ = auVar46._0_4_ * __LC20;
                          if (auVar42._0_4_ < _LC19) goto LAB_00101256;
LAB_00101314:
                          auVar42._0_4_ =
                               powf((float)(((double)auVar45._0_4_ + __LC21) * __LC22),_LC23);
                          auVar45._4_4_ = 0;
                          auVar45._0_4_ = auVar42._0_4_;
                          auVar45._8_4_ = (int)extraout_XMM0_Qb_01;
                          auVar45._12_4_ = (int)((ulong)extraout_XMM0_Qb_01 >> 0x20);
joined_r0x0010137d:
                          if (fVar44 < fVar6) {
                            fVar44 = fVar44 * __LC20;
                          }
                          else {
                            fVar44 = powf((float)(((double)fVar44 + __LC21) * __LC22),_LC23);
                            auVar45 = ZEXT416((uint)auVar42._0_4_);
                          }
                        }
                      }
                      else {
                        auVar46._0_4_ = *pfVar23;
                        pfVar23 = pfVar23 + 1;
                        if (pfVar21 != (float *)0x0) {
                          fVar43 = *pfVar21;
                          pfVar21 = pfVar21 + 1;
                        }
                        if ((param_4 & 1) != 0) {
                          if (auVar46._0_4_ < _LC19) goto LAB_00101303;
                          auVar46._0_4_ =
                               powf((float)(((double)auVar46._0_4_ + __LC21) * __LC22),_LC23);
                          auVar45 = ZEXT416((uint)auVar42._0_4_);
                          if (fVar6 <= auVar42._0_4_) goto LAB_00101314;
LAB_00101256:
                          auVar42._4_12_ = auVar45._4_12_;
                          auVar42._0_4_ = auVar45._0_4_ * __LC20;
                          auVar45 = auVar42;
                          goto joined_r0x0010137d;
                        }
                      }
                      *pfVar28 = fVar44;
                      pfVar32 = pfVar28 + 1;
                      if (pfVar20 != (float *)0x0) {
                        pfVar32 = pfVar28 + 2;
                        pfVar28[1] = auVar45._0_4_;
                      }
                      pfVar25 = pfVar32;
                      if (pfVar23 != (float *)0x0) {
                        pfVar25 = pfVar32 + 1;
                        *pfVar32 = auVar46._0_4_;
                      }
                      pfVar28 = pfVar25;
                      if (pfVar21 != (float *)0x0) {
                        pfVar28 = pfVar25 + 1;
                        *pfVar25 = fVar43;
                      }
                      pfVar32 = pfVar37;
                    } while (pfVar37 != pfVar39);
                  }
                  iVar24 = iVar24 + 1;
                  pfVar39 = pfVar39 + local_2cc;
                  lVar12 = lVar12 + (long)local_2cc * 4;
                  pfVar30 = pfVar30 + local_1d8 * iVar8;
                  puVar31 = puVar31 + local_1d8 * iVar8;
                } while (iVar9 != iVar24);
              }
              pppppppiVar16 = pppppppiVar16 + 4;
            } while (pppppppiVar14 != pppppppiVar16);
          }
          else {
            local_2cc = local_18c;
            local_280 = local_188;
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_240);
            lVar12 = (long)local_1cc;
            if (0 < local_1cc) goto LAB_001007e2;
            local_2d0 = local_1d8;
          }
          uVar22 = 0;
          Image::set_data(*param_2,local_2d0,local_1d4,0,iVar38,&local_248);
          FreeEXRHeader(local_1c8);
          FreeEXRImage(&local_1f8);
        }
        else {
          iVar8 = 4;
          if (local_2d4 != -1) {
            iVar38 = 0xb;
            CowData<unsigned_char>::resize<false>
                      ((CowData<unsigned_char> *)&local_240,(long)(local_1d4 * local_1d8 * 0x10));
            iVar8 = 4;
            goto LAB_0010075c;
          }
LAB_00101479:
          if (local_2d8 == -1) {
            if (iVar36 == -1) {
              if (iVar18 == -1) goto LAB_001016da;
              CowData<unsigned_char>::resize<false>
                        ((CowData<unsigned_char> *)&local_240,(long)(local_1d8 * local_1d4 * iVar8))
              ;
              iVar8 = 1;
              iVar38 = (-(uint)!bVar5 & 0xfffffffc) + 0xc;
            }
            else {
              if (iVar18 == -1) {
                _err_print_error("load_image","modules/tinyexr/image_loader_tinyexr.cpp",0x83,
                                 "Condition \"idxR == -1\" is true. Returning: ERR_FILE_CORRUPT",0,0
                                );
                goto LAB_001016ff;
              }
              CowData<unsigned_char>::resize<false>
                        ((CowData<unsigned_char> *)&local_240,
                         (long)(local_1d8 * local_1d4 * iVar8 * 2));
              iVar8 = 2;
              iVar38 = (-(uint)!bVar5 & 0xfffffffc) + 0xd;
            }
            goto LAB_0010075c;
          }
          if (iVar36 == -1) {
            _err_print_error("load_image","modules/tinyexr/image_loader_tinyexr.cpp",0x7d,
                             "Condition \"idxG == -1\" is true. Returning: ERR_FILE_CORRUPT",0,0);
          }
          else {
            if (iVar18 != -1) {
              CowData<unsigned_char>::resize<false>
                        ((CowData<unsigned_char> *)&local_240,
                         (long)(local_1d8 * local_1d4 * iVar8 * 3));
              iVar8 = 3;
              iVar38 = (-(uint)!bVar5 & 0xfffffffc) + 0xe;
              goto LAB_0010075c;
            }
            _err_print_error("load_image","modules/tinyexr/image_loader_tinyexr.cpp",0x7e,
                             "Condition \"idxR == -1\" is true. Returning: ERR_FILE_CORRUPT",0,0);
          }
LAB_001016ff:
          uVar22 = 0x10;
        }
        lVar12 = local_240;
        if (local_240 != 0) {
          LOCK();
          plVar1 = (long *)(local_240 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          lVar35 = local_250;
          if (*plVar1 == 0) {
            local_240 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
            lVar35 = local_250;
          }
        }
        goto LAB_00100dc6;
      }
      if (local_260[0] != (int *******)0x0) {
        local_248 = 0;
        local_210 = strlen((char *)local_260[0]);
        local_218 = pppppppiVar16;
        String::parse_latin1((StrRange *)&local_248);
        _err_print_error("load_image","modules/tinyexr/image_loader_tinyexr.cpp",0x56,
                         (StrRange *)&local_248,0,0);
        lVar12 = local_248;
        if (local_248 != 0) {
          LOCK();
          plVar1 = (long *)(local_248 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          lVar35 = local_250;
          if (*plVar1 == 0) {
            local_248 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
            lVar35 = local_250;
          }
        }
        goto LAB_00100f60;
      }
    }
    else if (local_260[0] != (int *******)0x0) {
      local_218 = (int *******)0x0;
      local_1f0 = strlen((char *)local_260[0]);
      local_1f8 = pppppppiVar16;
      String::parse_latin1((StrRange *)&local_218);
      _err_print_error("load_image","modules/tinyexr/image_loader_tinyexr.cpp",0x43,
                       (StrRange *)&local_218,0,0);
      pppppppiVar16 = local_218;
      if (local_218 != (int *******)0x0) {
        LOCK();
        pppppppiVar14 = local_218 + -2;
        *pppppppiVar14 = (int ******)((long)*pppppppiVar14 + -1);
        UNLOCK();
        lVar35 = local_250;
        if (*pppppppiVar14 == (int ******)0x0) {
          local_218 = (int *******)0x0;
          Memory::free_static(pppppppiVar16 + -2,false);
          lVar35 = local_250;
        }
      }
LAB_00100f60:
      FreeEXRErrorMessage(local_260[0]);
    }
    uVar22 = 0x10;
  }
LAB_00100dc6:
  if (lVar35 != 0) {
    LOCK();
    plVar1 = (long *)(lVar35 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_250 + -0x10),false);
    }
  }
LAB_00100dd4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1033,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1033,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ImageFormatLoader::is_class_ptr(void*) const */

uint __thiscall ImageFormatLoader::is_class_ptr(ImageFormatLoader *this,void *param_1)

{
  return (uint)CONCAT71(0x1033,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1033,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1033,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ImageFormatLoader::_getv(StringName const&, Variant&) const */

undefined8 ImageFormatLoader::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageFormatLoader::_setv(StringName const&, Variant const&) */

undefined8 ImageFormatLoader::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageFormatLoader::_validate_propertyv(PropertyInfo&) const */

void ImageFormatLoader::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ImageFormatLoader::_property_can_revertv(StringName const&) const */

undefined8 ImageFormatLoader::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ImageFormatLoader::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImageFormatLoader::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageFormatLoader::_notificationv(int, bool) */

void ImageFormatLoader::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103100;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103100;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ImageLoaderTinyEXR::~ImageLoaderTinyEXR() */

void __thiscall ImageLoaderTinyEXR::~ImageLoaderTinyEXR(ImageLoaderTinyEXR *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103100;
  Object::~Object((Object *)this);
  return;
}



/* ImageLoaderTinyEXR::~ImageLoaderTinyEXR() */

void __thiscall ImageLoaderTinyEXR::~ImageLoaderTinyEXR(ImageLoaderTinyEXR *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103100;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ImageFormatLoader::_get_class_namev() const */

undefined8 * ImageFormatLoader::_get_class_namev(void)

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
LAB_00101a13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101a13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImageFormatLoader");
      goto LAB_00101a7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImageFormatLoader");
LAB_00101a7e:
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
LAB_00101af3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101af3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00101b5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00101b5e:
  return &_get_class_namev()::_class_name_static;
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



/* ImageFormatLoader::get_class() const */

void ImageFormatLoader::get_class(void)

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

void FUN_00101dae(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
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
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00101e3f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00101e3f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00101ef3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00101fa3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00101fa3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00101ef3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00101ef3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageFormatLoader::is_class(String const&) const */

undefined8 __thiscall ImageFormatLoader::is_class(ImageFormatLoader *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001020cf;
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
LAB_001020cf:
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
    if (cVar5 != '\0') goto LAB_00102183;
  }
  cVar5 = String::operator==(param_1,"ImageFormatLoader");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00102183:
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
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
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
  if (local_90 == 0) {
LAB_001024e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001024e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102506;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102506:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ImageFormatLoader::_get_property_listv(ImageFormatLoader *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ImageFormatLoader";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImageFormatLoader";
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
  if (local_90 == 0) {
LAB_001028e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001028e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102905;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102905:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ImageFormatLoader",false);
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



/* ImageFormatLoader::_initialize_classv() */

void ImageFormatLoader::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00102d2b;
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
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_00102e3a:
      if ((code *)PTR__bind_methods_00105010 != RefCounted::_bind_methods) {
LAB_00102e4a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00102e3a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00105010 != RefCounted::_bind_methods) goto LAB_00102e4a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ImageFormatLoader";
  local_70 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((code *)PTR__bind_methods_00105008 != RefCounted::_bind_methods) {
    ImageFormatLoader::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00102d2b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
/* ImageLoaderTinyEXR::~ImageLoaderTinyEXR() */

void __thiscall ImageLoaderTinyEXR::~ImageLoaderTinyEXR(ImageLoaderTinyEXR *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


