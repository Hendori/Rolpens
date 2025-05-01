
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



/* AbstractYuyvBufferDecoder::~AbstractYuyvBufferDecoder() */

void __thiscall
AbstractYuyvBufferDecoder::~AbstractYuyvBufferDecoder(AbstractYuyvBufferDecoder *this)

{
  char cVar1;
  
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f48;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      return;
    }
  }
  return;
}



/* AbstractYuyvBufferDecoder::~AbstractYuyvBufferDecoder() */

void __thiscall
AbstractYuyvBufferDecoder::~AbstractYuyvBufferDecoder(AbstractYuyvBufferDecoder *this)

{
  char cVar1;
  
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f48;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      operator_delete(this,0x28);
      return;
    }
  }
  operator_delete(this,0x28);
  return;
}



/* BufferDecoder::BufferDecoder(CameraFeed*) */

void __thiscall BufferDecoder::BufferDecoder(BufferDecoder *this,CameraFeed *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(CameraFeed **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  (**(code **)(*(long *)param_1 + 0x160))(&local_48);
  lVar2 = local_40;
  *(undefined4 *)(this + 0x18) = local_48;
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
  (**(code **)(**(long **)(this + 8) + 0x160))(&local_48);
  lVar2 = local_40;
  *(undefined4 *)(this + 0x1c) = local_44;
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
    Ref<Image>::instantiate<>((Ref<Image> *)(this + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AbstractYuyvBufferDecoder::AbstractYuyvBufferDecoder(CameraFeed*) */

void __thiscall
AbstractYuyvBufferDecoder::AbstractYuyvBufferDecoder
          (AbstractYuyvBufferDecoder *this,CameraFeed *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  uint local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  BufferDecoder::BufferDecoder((BufferDecoder *)this,param_1);
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f48;
  lVar2 = **(long **)(this + 8);
  *(undefined8 *)(this + 0x20) = 0;
  (**(code **)(lVar2 + 0x160))(auStack_48);
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
  if (local_30 == 0x59555956) {
    puVar4 = (undefined8 *)operator_new__(0x10);
    uVar3 = _UNK_00102068;
    *puVar4 = __LC8;
    puVar4[1] = uVar3;
    goto LAB_001003ad;
  }
  if (local_30 < 0x59555957) {
    if (local_30 == 0x55595659) {
      puVar4 = (undefined8 *)operator_new__(0x10);
      uVar3 = _UNK_00102048;
      *puVar4 = __LC6;
      puVar4[1] = uVar3;
      goto LAB_001003ad;
    }
    if (local_30 == 0x56555959) {
      puVar4 = (undefined8 *)operator_new__(0x10);
      uVar3 = _UNK_00102038;
      *puVar4 = __LC5;
      puVar4[1] = uVar3;
      goto LAB_001003ad;
    }
  }
  else if (local_30 == 0x59565955) {
    puVar4 = (undefined8 *)operator_new__(0x10);
    uVar3 = _UNK_00102058;
    *puVar4 = __LC7;
    puVar4[1] = uVar3;
    goto LAB_001003ad;
  }
  puVar4 = (undefined8 *)operator_new__(0x10);
  uVar3 = _UNK_00102078;
  *puVar4 = __LC9;
  puVar4[1] = uVar3;
LAB_001003ad:
  *(undefined8 **)(this + 0x20) = puVar4;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JpegBufferDecoder::JpegBufferDecoder(CameraFeed*) */

void __thiscall JpegBufferDecoder::JpegBufferDecoder(JpegBufferDecoder *this,CameraFeed *param_1)

{
  BufferDecoder::BufferDecoder((BufferDecoder *)this,param_1);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_decode_00102010;
  return;
}



/* YuyvToGrayscaleBufferDecoder::decode(StreamingBuffer) */

void __thiscall
YuyvToGrayscaleBufferDecoder::decode(YuyvToGrayscaleBufferDecoder *this,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Image *pIVar5;
  char cVar6;
  long lVar7;
  Object *pOVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 auStack_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x30));
  iVar10 = *(int *)(this + 0x1c);
  lVar4 = *(long *)(this + 0x30);
  iVar2 = **(int **)(this + 0x20);
  iVar3 = (*(int **)(this + 0x20))[1];
  iVar9 = *(int *)(this + 0x18);
  if (0 < iVar10 * iVar9) {
    lVar7 = 0;
    do {
      *(undefined1 *)(lVar4 + lVar7) = *(undefined1 *)(iVar2 + param_2 + lVar7 * 2);
      *(undefined1 *)(lVar4 + 1 + lVar7) = *(undefined1 *)(param_2 + iVar3 + lVar7 * 2);
      iVar9 = *(int *)(this + 0x18);
      lVar7 = lVar7 + 2;
      iVar10 = *(int *)(this + 0x1c);
    } while ((int)lVar7 < iVar9 * iVar10);
  }
  if (*(long *)(this + 0x10) == 0) {
    local_40 = 0;
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    if (*(long *)(this + 0x30) != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00100548;
        LOCK();
        lVar7 = *plVar1;
        bVar11 = lVar4 == lVar7;
        if (bVar11) {
          *plVar1 = lVar4 + 1;
          lVar7 = lVar4;
        }
        UNLOCK();
      } while (!bVar11);
      if (lVar7 != -1) {
        local_40 = *(long *)(this + 0x30);
      }
LAB_00100548:
      iVar9 = *(int *)(this + 0x18);
      iVar10 = *(int *)(this + 0x1c);
    }
    pOVar8 = (Object *)operator_new(0x268,"");
    Image::Image((Image *)pOVar8,iVar9,iVar10,0,4,auStack_48);
    postinitialize_handler(pOVar8);
    cVar6 = RefCounted::init_ref();
    pIVar5 = *(Image **)(this + 0x10);
    if (cVar6 == '\0') {
      if (pIVar5 != (Image *)0x0) {
        *(undefined8 *)(this + 0x10) = 0;
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<Image>(pIVar5);
        }
      }
    }
    else {
      if (pIVar5 != (Image *)pOVar8) {
        *(Object **)(this + 0x10) = pOVar8;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          *(undefined8 *)(this + 0x10) = 0;
        }
        if ((pIVar5 != (Image *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
          memdelete<Image>(pIVar5);
        }
      }
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        memdelete<Image>((Image *)pOVar8);
      }
    }
    lVar4 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  else {
    Image::set_data(*(long *)(this + 0x10),iVar9,iVar10,0,0,this + 0x28);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CameraFeed::set_rgb_image(*(Ref **)(this + 8));
  return;
}



/* YuyvToRgbBufferDecoder::decode(StreamingBuffer) */

void __thiscall YuyvToRgbBufferDecoder::decode(YuyvToRgbBufferDecoder *this,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  Image *pIVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined1 local_58 [8];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = *(int **)(this + 0x20);
  iVar2 = piVar4[2];
  iVar3 = piVar4[3];
  lVar12 = *piVar4 + param_2;
  lVar18 = piVar4[1] + param_2;
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x30));
  iVar7 = *(int *)(this + 0x18);
  iVar8 = *(int *)(this + 0x1c);
  if (0 < iVar7 * iVar8) {
    lVar11 = 0;
    iVar13 = 0;
    puVar10 = *(undefined1 **)(this + 0x30);
    do {
      iVar15 = *(byte *)(iVar2 + param_2 + lVar11) - 0x80;
      iVar7 = *(byte *)(param_2 + iVar3 + lVar11) - 0x80;
      iVar17 = iVar15 * 0x81 >> 6;
      iVar8 = iVar7 * 3 >> 1;
      iVar16 = (uint)*(byte *)(lVar12 + lVar11) + iVar8;
      iVar7 = iVar15 * 3 + iVar7 * 6 >> 3;
      if (0xff < iVar16) {
        iVar16 = 0xff;
      }
      uVar14 = (char)iVar16;
      if (iVar16 < 0) {
        uVar14 = 0;
      }
      *puVar10 = uVar14;
      iVar15 = (uint)*(byte *)(lVar12 + lVar11) - iVar7;
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      uVar14 = (char)iVar15;
      if (iVar15 < 0) {
        uVar14 = 0;
      }
      puVar10[1] = uVar14;
      iVar15 = (uint)*(byte *)(lVar12 + lVar11) + iVar17;
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      uVar14 = (undefined1)iVar15;
      if (iVar15 < 0) {
        uVar14 = 0;
      }
      puVar10[2] = uVar14;
      iVar8 = iVar8 + (uint)*(byte *)(lVar18 + lVar11);
      if (0xff < iVar8) {
        iVar8 = 0xff;
      }
      uVar14 = (char)iVar8;
      if (iVar8 < 0) {
        uVar14 = 0;
      }
      puVar10[3] = uVar14;
      iVar7 = (uint)*(byte *)(lVar18 + lVar11) - iVar7;
      if (0xff < iVar7) {
        iVar7 = 0xff;
      }
      uVar14 = (char)iVar7;
      if (iVar7 < 0) {
        uVar14 = 0;
      }
      puVar10[4] = uVar14;
      iVar17 = (uint)*(byte *)(lVar18 + lVar11) + iVar17;
      if (0xff < iVar17) {
        iVar17 = 0xff;
      }
      uVar14 = (char)iVar17;
      if (iVar17 < 0) {
        uVar14 = 0;
      }
      iVar13 = iVar13 + 2;
      lVar11 = lVar11 + 4;
      puVar10[5] = uVar14;
      iVar7 = *(int *)(this + 0x18);
      iVar8 = *(int *)(this + 0x1c);
      puVar10 = puVar10 + 6;
    } while (iVar13 < iVar7 * iVar8);
  }
  if (*(long *)(this + 0x10) != 0) {
    Image::set_data(*(long *)(this + 0x10),iVar7,iVar8,0,4,this + 0x28);
    goto LAB_001007f6;
  }
  local_50 = 0;
  plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
  if (*(long *)(this + 0x30) != 0) {
    do {
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_00100860;
      LOCK();
      lVar18 = *plVar1;
      bVar19 = lVar12 == lVar18;
      if (bVar19) {
        *plVar1 = lVar12 + 1;
        lVar18 = lVar12;
      }
      UNLOCK();
    } while (!bVar19);
    if (lVar18 != -1) {
      local_50 = *(long *)(this + 0x30);
    }
LAB_00100860:
    iVar7 = *(int *)(this + 0x18);
    iVar8 = *(int *)(this + 0x1c);
  }
  pIVar9 = (Image *)operator_new(0x268,"");
  Image::Image(pIVar9,iVar7,iVar8,0,4,local_58);
  postinitialize_handler((Object *)pIVar9);
  cVar6 = RefCounted::init_ref();
  if (cVar6 == '\0') {
    pIVar9 = *(Image **)(this + 0x10);
    if (pIVar9 != (Image *)0x0) {
      *(undefined8 *)(this + 0x10) = 0;
      cVar6 = RefCounted::unreference();
      goto joined_r0x00100944;
    }
  }
  else {
    pIVar5 = *(Image **)(this + 0x10);
    if (pIVar5 != pIVar9) {
      *(Image **)(this + 0x10) = pIVar9;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        *(undefined8 *)(this + 0x10) = 0;
      }
      if ((pIVar5 != (Image *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
        memdelete<Image>(pIVar5);
      }
    }
    cVar6 = RefCounted::unreference();
joined_r0x00100944:
    if (cVar6 != '\0') {
      memdelete<Image>(pIVar9);
    }
  }
  lVar12 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
LAB_001007f6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CameraFeed::set_rgb_image(*(Ref **)(this + 8));
  return;
}



/* SeparateYuyvBufferDecoder::decode(StreamingBuffer) */

void __thiscall SeparateYuyvBufferDecoder::decode(SeparateYuyvBufferDecoder *this,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  char cVar10;
  long lVar11;
  Object *pOVar12;
  long lVar13;
  Image *pIVar14;
  int iVar15;
  Image *pIVar16;
  int iVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined1 auStack_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x30));
  lVar8 = *(long *)(this + 0x30);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x40));
  piVar9 = *(int **)(this + 0x20);
  iVar17 = *(int *)(this + 0x1c);
  lVar13 = *(long *)(this + 0x40);
  iVar2 = *piVar9;
  iVar3 = piVar9[1];
  iVar4 = piVar9[2];
  iVar5 = piVar9[3];
  iVar15 = *(int *)(this + 0x18);
  if (0 < iVar15 * iVar17) {
    lVar11 = 0;
    do {
      *(undefined1 *)(lVar8 + lVar11) = *(undefined1 *)(iVar2 + param_2 + lVar11 * 2);
      *(undefined1 *)(lVar8 + 1 + lVar11) = *(undefined1 *)(iVar3 + param_2 + lVar11 * 2);
      *(undefined1 *)(lVar13 + lVar11) = *(undefined1 *)(iVar4 + param_2 + lVar11 * 2);
      *(undefined1 *)(lVar13 + 1 + lVar11) = *(undefined1 *)(param_2 + iVar5 + lVar11 * 2);
      iVar15 = *(int *)(this + 0x18);
      lVar11 = lVar11 + 2;
      iVar17 = *(int *)(this + 0x1c);
    } while ((int)lVar11 < iVar15 * iVar17);
  }
  if (*(long *)(this + 0x48) == 0) {
    local_40 = 0;
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    if (*(long *)(this + 0x30) != 0) {
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) goto LAB_00100ac8;
        LOCK();
        lVar13 = *plVar1;
        bVar18 = lVar8 == lVar13;
        if (bVar18) {
          *plVar1 = lVar8 + 1;
          lVar13 = lVar8;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar13 != -1) {
        local_40 = *(long *)(this + 0x30);
      }
LAB_00100ac8:
      iVar15 = *(int *)(this + 0x18);
      iVar17 = *(int *)(this + 0x1c);
    }
    pOVar12 = (Object *)operator_new(0x268,"");
    Image::Image((Image *)pOVar12,iVar15,iVar17,0,4,auStack_48);
    postinitialize_handler(pOVar12);
    cVar10 = RefCounted::init_ref();
    pIVar14 = *(Image **)(this + 0x48);
    if (cVar10 == '\0') {
      if (pIVar14 != (Image *)0x0) {
        *(undefined8 *)(this + 0x48) = 0;
        cVar10 = RefCounted::unreference();
        goto joined_r0x00100cdb;
      }
    }
    else {
      pIVar16 = pIVar14;
      if (pOVar12 != (Object *)pIVar14) {
        *(Object **)(this + 0x48) = pOVar12;
        cVar10 = RefCounted::reference();
        if (cVar10 == '\0') {
          *(undefined8 *)(this + 0x48) = 0;
        }
        pIVar16 = (Image *)pOVar12;
        if ((pIVar14 != (Image *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
          memdelete<Image>(pIVar14);
        }
      }
      cVar10 = RefCounted::unreference();
      pIVar14 = pIVar16;
joined_r0x00100cdb:
      if (cVar10 != '\0') {
        memdelete<Image>(pIVar14);
      }
    }
    lVar8 = local_40;
    if (local_40 == 0) goto LAB_00100a3c;
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100a3c;
    local_40 = 0;
    Memory::free_static((void *)(lVar8 + -0x10),false);
    lVar8 = *(long *)(this + 0x50);
  }
  else {
    Image::set_data(*(long *)(this + 0x48),iVar15,iVar17,0,0,this + 0x28);
LAB_00100a3c:
    lVar8 = *(long *)(this + 0x50);
  }
  if (lVar8 != 0) {
    Image::set_data(lVar8,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),0,0,this + 0x38)
    ;
    goto LAB_00100a5d;
  }
  local_40 = 0;
  plVar1 = (long *)(*(long *)(this + 0x40) + -0x10);
  if (*(long *)(this + 0x40) != 0) {
    do {
      lVar8 = *plVar1;
      if (lVar8 == 0) goto LAB_00100bb8;
      LOCK();
      lVar13 = *plVar1;
      bVar18 = lVar8 == lVar13;
      if (bVar18) {
        *plVar1 = lVar8 + 1;
        lVar13 = lVar8;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar13 != -1) {
      local_40 = *(long *)(this + 0x40);
    }
  }
LAB_00100bb8:
  uVar6 = *(undefined4 *)(this + 0x1c);
  uVar7 = *(undefined4 *)(this + 0x18);
  pIVar14 = (Image *)operator_new(0x268,"");
  Image::Image(pIVar14,uVar7,uVar6,0,4,auStack_48);
  postinitialize_handler((Object *)pIVar14);
  cVar10 = RefCounted::init_ref();
  if (cVar10 == '\0') {
    pIVar14 = *(Image **)(this + 0x50);
    if (pIVar14 != (Image *)0x0) {
      *(undefined8 *)(this + 0x50) = 0;
      cVar10 = RefCounted::unreference();
      goto joined_r0x00100c9c;
    }
  }
  else {
    pIVar16 = *(Image **)(this + 0x50);
    if (pIVar16 != pIVar14) {
      *(Image **)(this + 0x50) = pIVar14;
      cVar10 = RefCounted::reference();
      if (cVar10 == '\0') {
        *(undefined8 *)(this + 0x50) = 0;
      }
      if ((pIVar16 != (Image *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
        memdelete<Image>(pIVar16);
      }
    }
    cVar10 = RefCounted::unreference();
joined_r0x00100c9c:
    if (cVar10 != '\0') {
      memdelete<Image>(pIVar14);
    }
  }
  lVar8 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
LAB_00100a5d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CameraFeed::set_ycbcr_images(*(Ref **)(this + 8),(Ref *)(this + 0x48));
  return;
}



/* CopyBufferDecoder::decode(StreamingBuffer) */

void CopyBufferDecoder::decode(long param_1,void *param_2,size_t param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  Image *pIVar5;
  char cVar6;
  long lVar7;
  Object *pOVar8;
  Image *pIVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 auStack_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_1 + 0x28));
  memcpy(*(void **)(param_1 + 0x28),param_2,param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    local_40 = 0;
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + -0x10);
    if (*(long *)(param_1 + 0x28) != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00100df8;
        LOCK();
        lVar7 = *plVar1;
        bVar10 = lVar4 == lVar7;
        if (bVar10) {
          *plVar1 = lVar4 + 1;
          lVar7 = lVar4;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar7 != -1) {
        local_40 = *(long *)(param_1 + 0x28);
      }
    }
LAB_00100df8:
    cVar6 = *(char *)(param_1 + 0x30);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    pOVar8 = (Object *)operator_new(0x268,"");
    Image::Image((Image *)pOVar8,uVar3,uVar2,0,(-(uint)(cVar6 == '\0') & 0xfffffffc) + 5,auStack_48)
    ;
    postinitialize_handler(pOVar8);
    cVar6 = RefCounted::init_ref();
    if (cVar6 == '\0') {
      pIVar5 = *(Image **)(param_1 + 0x10);
      if (pIVar5 != (Image *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<Image>(pIVar5);
        }
      }
    }
    else {
      pIVar5 = *(Image **)(param_1 + 0x10);
      pIVar9 = pIVar5;
      if (pOVar8 != (Object *)pIVar5) {
        *(Object **)(param_1 + 0x10) = pOVar8;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
        pIVar9 = (Image *)pOVar8;
        if ((pIVar5 != (Image *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
          memdelete<Image>(pIVar5);
        }
      }
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        memdelete<Image>(pIVar9);
      }
    }
    lVar4 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  else {
    Image::set_data(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x1c),0,
                    (-(uint)(*(char *)(param_1 + 0x30) == '\0') & 0xfffffffc) + 5,param_1 + 0x20);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CameraFeed::set_rgb_image(*(Ref **)(param_1 + 8));
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
LAB_001010f6:
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
    if (lVar10 == 0) goto LAB_001010f6;
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
    FUN_0010137c();
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
      goto LAB_0010104c;
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
LAB_0010104c:
  puVar8[-1] = param_1;
  return;
}



/* JpegBufferDecoder::decode(StreamingBuffer) */

void JpegBufferDecoder::decode(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(param_1 + 0x28),param_3);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_1 + 0x28));
  memcpy(*(void **)(param_1 + 0x28),param_2,param_3);
  iVar1 = Image::load_jpg_from_buffer(*(Vector **)(param_1 + 0x10));
  if (iVar1 != 0) {
    return;
  }
  CameraFeed::set_rgb_image(*(Ref **)(param_1 + 8));
  return;
}



/* CopyBufferDecoder::CopyBufferDecoder(CameraFeed*, bool) */

void __thiscall
CopyBufferDecoder::CopyBufferDecoder(CopyBufferDecoder *this,CameraFeed *param_1,bool param_2)

{
  BufferDecoder::BufferDecoder((BufferDecoder *)this,param_1);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_decode_00101fe8;
  this[0x30] = (CopyBufferDecoder)param_2;
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)(this + 0x28),
             (long)(int)(*(int *)(this + 0x18) * *(int *)(this + 0x1c) *
                        ((-(uint)!param_2 & 0xfffffffe) + 4)));
  return;
}



/* YuyvToRgbBufferDecoder::YuyvToRgbBufferDecoder(CameraFeed*) */

void __thiscall
YuyvToRgbBufferDecoder::YuyvToRgbBufferDecoder(YuyvToRgbBufferDecoder *this,CameraFeed *param_1)

{
  AbstractYuyvBufferDecoder::AbstractYuyvBufferDecoder((AbstractYuyvBufferDecoder *)this,param_1);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_decode_00101fc0;
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)(this + 0x30),
             (long)(*(int *)(this + 0x18) * *(int *)(this + 0x1c) * 3));
  return;
}



/* YuyvToGrayscaleBufferDecoder::YuyvToGrayscaleBufferDecoder(CameraFeed*) */

void __thiscall
YuyvToGrayscaleBufferDecoder::YuyvToGrayscaleBufferDecoder
          (YuyvToGrayscaleBufferDecoder *this,CameraFeed *param_1)

{
  AbstractYuyvBufferDecoder::AbstractYuyvBufferDecoder((AbstractYuyvBufferDecoder *)this,param_1);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_decode_00101f98;
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)(this + 0x30),
             (long)(*(int *)(this + 0x18) * *(int *)(this + 0x1c)));
  return;
}



/* SeparateYuyvBufferDecoder::SeparateYuyvBufferDecoder(CameraFeed*) */

void __thiscall
SeparateYuyvBufferDecoder::SeparateYuyvBufferDecoder
          (SeparateYuyvBufferDecoder *this,CameraFeed *param_1)

{
  AbstractYuyvBufferDecoder::AbstractYuyvBufferDecoder((AbstractYuyvBufferDecoder *)this,param_1);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_decode_00101f70;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)(this + 0x30),
             (long)(*(int *)(this + 0x18) * *(int *)(this + 0x1c)));
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)(this + 0x40),
             (long)(*(int *)(this + 0x18) * *(int *)(this + 0x1c)));
  Ref<Image>::instantiate<>((Ref<Image> *)(this + 0x48));
  Ref<Image>::instantiate<>((Ref<Image> *)(this + 0x50));
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

void FUN_0010137c(void)

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



/* JpegBufferDecoder::~JpegBufferDecoder() */

void __thiscall JpegBufferDecoder::~JpegBufferDecoder(JpegBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00102010;
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      return;
    }
  }
  return;
}



/* CopyBufferDecoder::~CopyBufferDecoder() */

void __thiscall CopyBufferDecoder::~CopyBufferDecoder(CopyBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00101fe8;
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      return;
    }
  }
  return;
}



/* CopyBufferDecoder::~CopyBufferDecoder() */

void __thiscall CopyBufferDecoder::~CopyBufferDecoder(CopyBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00101fe8;
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      operator_delete(this,0x38);
      return;
    }
  }
  operator_delete(this,0x38);
  return;
}



/* JpegBufferDecoder::~JpegBufferDecoder() */

void __thiscall JpegBufferDecoder::~JpegBufferDecoder(JpegBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00102010;
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      operator_delete(this,0x30);
      return;
    }
  }
  operator_delete(this,0x30);
  return;
}



/* YuyvToRgbBufferDecoder::~YuyvToRgbBufferDecoder() */

void __thiscall YuyvToRgbBufferDecoder::~YuyvToRgbBufferDecoder(YuyvToRgbBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00101fc0;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f48;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      return;
    }
  }
  return;
}



/* YuyvToGrayscaleBufferDecoder::~YuyvToGrayscaleBufferDecoder() */

void __thiscall
YuyvToGrayscaleBufferDecoder::~YuyvToGrayscaleBufferDecoder(YuyvToGrayscaleBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00101f98;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f48;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      return;
    }
  }
  return;
}



/* YuyvToRgbBufferDecoder::~YuyvToRgbBufferDecoder() */

void __thiscall YuyvToRgbBufferDecoder::~YuyvToRgbBufferDecoder(YuyvToRgbBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00101fc0;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f48;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      operator_delete(this,0x38);
      return;
    }
  }
  operator_delete(this,0x38);
  return;
}



/* YuyvToGrayscaleBufferDecoder::~YuyvToGrayscaleBufferDecoder() */

void __thiscall
YuyvToGrayscaleBufferDecoder::~YuyvToGrayscaleBufferDecoder(YuyvToGrayscaleBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00101f98;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f48;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      operator_delete(this,0x38);
      return;
    }
  }
  operator_delete(this,0x38);
  return;
}



/* SeparateYuyvBufferDecoder::~SeparateYuyvBufferDecoder() */

void __thiscall
SeparateYuyvBufferDecoder::~SeparateYuyvBufferDecoder(SeparateYuyvBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00101f70;
  if (*(long *)(this + 0x50) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x50));
    }
  }
  if (*(long *)(this + 0x48) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x48));
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x40) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f48;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      return;
    }
  }
  return;
}



/* SeparateYuyvBufferDecoder::~SeparateYuyvBufferDecoder() */

void __thiscall
SeparateYuyvBufferDecoder::~SeparateYuyvBufferDecoder(SeparateYuyvBufferDecoder *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_decode_00101f70;
  if (*(long *)(this + 0x50) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x50));
    }
  }
  if (*(long *)(this + 0x48) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x48));
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x40) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f48;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101f20;
  if (*(long *)(this + 0x10) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x10));
      operator_delete(this,0x58);
      return;
    }
  }
  operator_delete(this,0x58);
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
  *(code **)this_00 = operator_delete;
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
      if (pIVar1 == (Image *)0x0) goto LAB_00101c88;
      cVar2 = RefCounted::unreference();
    }
    else {
      if (pIVar1 == (Image *)0x0) goto LAB_00101c88;
      cVar2 = RefCounted::unreference();
    }
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar1);
    }
  }
LAB_00101c88:
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar5);
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
/* SeparateYuyvBufferDecoder::~SeparateYuyvBufferDecoder() */

void __thiscall
SeparateYuyvBufferDecoder::~SeparateYuyvBufferDecoder(SeparateYuyvBufferDecoder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* YuyvToGrayscaleBufferDecoder::~YuyvToGrayscaleBufferDecoder() */

void __thiscall
YuyvToGrayscaleBufferDecoder::~YuyvToGrayscaleBufferDecoder(YuyvToGrayscaleBufferDecoder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* YuyvToRgbBufferDecoder::~YuyvToRgbBufferDecoder() */

void __thiscall YuyvToRgbBufferDecoder::~YuyvToRgbBufferDecoder(YuyvToRgbBufferDecoder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CopyBufferDecoder::~CopyBufferDecoder() */

void __thiscall CopyBufferDecoder::~CopyBufferDecoder(CopyBufferDecoder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JpegBufferDecoder::~JpegBufferDecoder() */

void __thiscall JpegBufferDecoder::~JpegBufferDecoder(JpegBufferDecoder *this)

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


