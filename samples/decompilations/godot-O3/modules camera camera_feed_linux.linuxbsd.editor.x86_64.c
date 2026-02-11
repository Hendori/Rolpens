
/* CameraFeedLinux::get_formats() const */

void CameraFeedLinux::get_formats(void)

{
  char cVar1;
  int *piVar2;
  Variant *pVVar3;
  long in_RSI;
  Array *in_RDI;
  int *piVar4;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  piVar4 = *(int **)(in_RSI + 0x1b8);
  if ((piVar4 != (int *)0x0) && (piVar2 = piVar4 + *(long *)(piVar4 + -2) * 8, piVar2 != piVar4)) {
    do {
      Dictionary::Dictionary(local_80);
      Variant::Variant((Variant *)local_58,*piVar4);
      Variant::Variant((Variant *)local_78,"width");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar1 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar1 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,piVar4[1]);
      Variant::Variant((Variant *)local_78,"height");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(String *)(piVar4 + 2));
      Variant::Variant((Variant *)local_78,"format");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar1 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar1 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,piVar4[4]);
      Variant::Variant((Variant *)local_78,"frame_numerator");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,piVar4[5]);
      Variant::Variant((Variant *)local_78,"frame_denominator");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_80);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      piVar4 = piVar4 + 8;
      Dictionary::~Dictionary(local_80);
    } while (piVar2 != piVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CameraFeedLinux::get_format() const */

void CameraFeedLinux::get_format(void)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long in_RSI;
  undefined8 *in_RDI;
  long lVar7;
  
  lVar4 = (long)*(int *)(in_RSI + 0x1c8);
  if (*(int *)(in_RSI + 0x1c8) == -1) {
    *in_RDI = 0;
    uVar5 = 0;
    uVar3 = 0;
    in_RDI[1] = 0;
LAB_00100578:
    *(undefined4 *)(in_RDI + 3) = uVar3;
    in_RDI[2] = uVar5;
    return;
  }
  lVar1 = *(long *)(in_RSI + 0x1b8);
  if (lVar4 < 0) {
    if (lVar1 != 0) {
      lVar7 = *(long *)(lVar1 + -8);
      goto LAB_001005b1;
    }
  }
  else if (lVar1 != 0) {
    lVar7 = *(long *)(lVar1 + -8);
    if (lVar7 <= lVar4) goto LAB_001005b1;
    puVar6 = (undefined8 *)(lVar1 + lVar4 * 0x20);
    uVar5 = *puVar6;
    in_RDI[1] = 0;
    lVar4 = puVar6[1];
    *in_RDI = uVar5;
    if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(in_RDI + 1),(CowData *)(puVar6 + 1));
    }
    uVar5 = puVar6[2];
    uVar3 = *(undefined4 *)(puVar6 + 3);
    goto LAB_00100578;
  }
  lVar7 = 0;
LAB_001005b1:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CameraFeedLinux::_unmap_buffers(unsigned int) */

void __thiscall CameraFeedLinux::_unmap_buffers(CameraFeedLinux *this,uint param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(this + 0x230) + lVar2);
      lVar2 = lVar2 + 0x10;
      munmap((void *)*puVar1,puVar1[1]);
    } while ((ulong)param_1 << 4 != lVar2);
    return;
  }
  return;
}



/* CameraFeedLinux::_start_thread() */

void __thiscall CameraFeedLinux::_start_thread(CameraFeedLinux *this)

{
  long lVar1;
  Thread *this_00;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x210] = (CameraFeedLinux)0x0;
  this_00 = (Thread *)operator_new(0x10,"");
  Thread::Thread(this_00);
  *(Thread **)(this + 0x218) = this_00;
  Thread::start((_func_void_void_ptr *)this_00,update_buffer_thread_func,(Settings *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraFeedLinux::get_device_name() const */

void CameraFeedLinux::get_device_name(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x220) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x220));
  }
  return;
}



/* CameraFeedLinux::_create_buffer_decoder() */

CopyBufferDecoder * __thiscall CameraFeedLinux::_create_buffer_decoder(CameraFeedLinux *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  CopyBufferDecoder *this_00;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  lVar6 = (long)*(int *)(this + 0x1c8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(this + 0x1b8);
  if (lVar6 < 0) {
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + -8);
      goto LAB_00100929;
    }
  }
  else if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + -8);
    if (lVar7 <= lVar6) goto LAB_00100929;
    uVar2 = *(uint *)(lVar3 + 0x18 + lVar6 * 0x20);
    if (uVar2 != 0x55595659) {
      if (uVar2 < 0x5559565a) {
        if ((uVar2 == 0x4745504a) || (uVar2 == 0x47504a4d)) {
          this_00 = (CopyBufferDecoder *)operator_new(0x30,"");
          JpegBufferDecoder::JpegBufferDecoder((JpegBufferDecoder *)this_00,(CameraFeed *)this);
          goto LAB_001007ab;
        }
        goto LAB_00100787;
      }
      if (uVar2 != 0x59555956) {
        if (uVar2 < 0x59555957) {
          if ((uVar2 != 0x56555959) && (uVar2 != 0x56595559)) {
LAB_00100787:
            this_00 = (CopyBufferDecoder *)operator_new(0x38,"");
            CopyBufferDecoder::CopyBufferDecoder(this_00,(CameraFeed *)this,true);
            goto LAB_001007ab;
          }
        }
        else if (uVar2 != 0x59565955) goto LAB_00100787;
      }
    }
    Variant::Variant((Variant *)local_38,"output");
    Dictionary::operator[]((Variant *)(this + 0x1c0));
    Variant::operator_cast_to_String((Variant *)&local_40);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar5 = String::operator==((String *)&local_40,"separate");
    if (cVar5 == '\0') {
      cVar5 = String::operator==((String *)&local_40,"grayscale");
      if (cVar5 == '\0') {
        cVar5 = String::operator==((String *)&local_40,"copy");
        if (cVar5 == '\0') {
          this_00 = (CopyBufferDecoder *)operator_new(0x38,"");
          YuyvToRgbBufferDecoder::YuyvToRgbBufferDecoder
                    ((YuyvToRgbBufferDecoder *)this_00,(CameraFeed *)this);
        }
        else {
          this_00 = (CopyBufferDecoder *)operator_new(0x38,"");
          CopyBufferDecoder::CopyBufferDecoder(this_00,(CameraFeed *)this,false);
        }
      }
      else {
        this_00 = (CopyBufferDecoder *)operator_new(0x38,"");
        YuyvToGrayscaleBufferDecoder::YuyvToGrayscaleBufferDecoder
                  ((YuyvToGrayscaleBufferDecoder *)this_00,(CameraFeed *)this);
      }
    }
    else {
      this_00 = (CopyBufferDecoder *)operator_new(0x58,"");
      SeparateYuyvBufferDecoder::SeparateYuyvBufferDecoder
                ((SeparateYuyvBufferDecoder *)this_00,(CameraFeed *)this);
    }
    lVar3 = local_40;
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
LAB_001007ab:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return this_00;
  }
  lVar7 = 0;
LAB_00100929:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* CameraFeedLinux::_request_buffers() */

undefined8 __thiscall CameraFeedLinux::_request_buffers(CameraFeedLinux *this)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0;
  local_b0 = 1;
  local_b8 = _LC23;
  iVar3 = ioctl(*(int *)(this + 0x228),0xc0145608,&local_b8);
  if (iVar3 == -1) {
    __errno_location();
    local_d0 = 0;
    local_c8 = "ioctl(VIDIOC_REQBUFS) error: %d.";
    local_c0 = 0x20;
    String::parse_latin1((StrRange *)&local_d0);
    vformat<int>((String *)&local_c8,(int)(StrRange *)&local_d0);
    uVar6 = 0x80;
LAB_00100c01:
    _err_print_error("_request_buffers","modules/camera/camera_feed_linux.cpp",uVar6,
                     "Method/function failed. Returning: false",&local_c8,0,0);
    pcVar2 = local_c8;
    if (local_c8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar11 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
        uVar6 = 0;
        goto LAB_00100c55;
      }
    }
    uVar6 = 0;
  }
  else if ((uint)local_b8 < 2) {
    _err_print_error("_request_buffers","modules/camera/camera_feed_linux.cpp",0x83,
                     "Condition \"requestbuffers.count < 2\" is true. Returning: false",
                     "Not enough buffers granted.",0,0);
    uVar6 = 0;
  }
  else {
    uVar9 = local_b8 & 0xffffffff;
    *(uint *)(this + 0x238) = (uint)local_b8;
    puVar4 = (undefined8 *)operator_new__(uVar9 * 0x10);
    puVar10 = puVar4;
    do {
      *puVar10 = 0;
      puVar7 = puVar10 + 2;
      puVar10[1] = 0;
      puVar10 = puVar7;
    } while (puVar7 != puVar4 + uVar9 * 2);
    *(undefined8 **)(this + 0x230) = puVar4;
    uVar9 = 0;
    if (*(int *)(this + 0x238) != 0) {
      do {
        iVar8 = (int)uVar9;
        local_90 = (undefined1  [16])0x0;
        local_80 = (undefined1  [16])0x0;
        local_70 = (undefined1  [16])0x0;
        local_50 = (undefined1  [16])0x0;
        local_60 = ZEXT816(0x100000000);
        local_98 = CONCAT44(local_b8._4_4_,iVar8);
        iVar3 = ioctl(*(int *)(this + 0x228),0xc0585609,&local_98);
        if (iVar3 == -1) {
          if (*(void **)(this + 0x230) != (void *)0x0) {
            operator_delete__(*(void **)(this + 0x230));
          }
          __errno_location();
          local_d0 = 0;
          local_c8 = "ioctl(VIDIOC_QUERYBUF) error: %d.";
          local_c0 = 0x21;
          String::parse_latin1((StrRange *)&local_d0);
          vformat<int>((String *)&local_c8,(int)(StrRange *)&local_d0);
          uVar6 = 0x92;
          goto LAB_00100c01;
        }
        iVar3 = *(int *)(this + 0x228);
        puVar10 = (undefined8 *)(*(long *)(this + 0x230) + uVar9 * 0x10);
        puVar10[1] = (ulong)(uint)local_50._0_4_;
        pvVar5 = mmap64((void *)0x0,(ulong)(uint)local_50._0_4_,3,1,iVar3,
                        (ulong)(uint)local_60._8_4_);
        *puVar10 = pvVar5;
        pvVar5 = *(void **)(this + 0x230);
        if (*(long *)((long)pvVar5 + uVar9 * 0x10) == -1) {
          if (iVar8 != 0) {
            iVar3 = 0;
            do {
              lVar11 = 0;
              while( true ) {
                puVar10 = (undefined8 *)((long)pvVar5 + lVar11);
                lVar11 = lVar11 + 0x10;
                munmap((void *)*puVar10,puVar10[1]);
                if ((uVar9 & 0xffffffff) << 4 == lVar11) break;
                pvVar5 = *(void **)(this + 0x230);
              }
              iVar3 = iVar3 + 1;
              pvVar5 = *(void **)(this + 0x230);
            } while (iVar8 != iVar3);
          }
          if (pvVar5 != (void *)0x0) {
            operator_delete__(pvVar5);
          }
          _err_print_error("_request_buffers","modules/camera/camera_feed_linux.cpp",0x9d,
                           "Method/function failed. Returning: false","Mapping buffers failed.",0,0)
          ;
          uVar6 = 0;
          goto LAB_00100c55;
        }
        uVar9 = uVar9 + 1;
      } while ((uint)uVar9 < *(uint *)(this + 0x238));
    }
    uVar6 = 1;
  }
LAB_00100c55:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* CameraFeedLinux::_start_capturing() */

undefined8 __thiscall CameraFeedLinux::_start_capturing(CameraFeedLinux *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined4 local_a4;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  uint local_88 [2];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x238) != 0) {
    uVar6 = 0;
    do {
      local_88[1] = 1;
      local_80 = (undefined1  [16])0x0;
      local_70 = (undefined1  [16])0x0;
      local_60 = (undefined1  [16])0x0;
      local_50 = ZEXT816(0x100000000);
      local_40 = (undefined1  [16])0x0;
      local_88[0] = uVar6;
      iVar4 = ioctl(*(int *)(this + 0x228),0xc058560f,local_88);
      if (iVar4 == -1) {
        __errno_location();
        local_a0 = 0;
        local_98 = "ioctl(VIDIOC_QBUF) error: %d.";
        local_90 = 0x1d;
        String::parse_latin1((StrRange *)&local_a0);
        vformat<int>((String *)&local_98,(int)(StrRange *)&local_a0);
        uVar5 = 0xae;
        goto LAB_00100eef;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x238));
  }
  local_a4 = 1;
  iVar4 = ioctl(*(int *)(this + 0x228),0x40045612,&local_a4);
  uVar5 = 1;
  if (iVar4 == -1) {
    __errno_location();
    local_a0 = 0;
    local_98 = "ioctl(VIDIOC_STREAMON) error: %d.";
    local_90 = 0x21;
    String::parse_latin1((StrRange *)&local_a0);
    vformat<int>((String *)&local_98,(int)(StrRange *)&local_a0);
    uVar5 = 0xb6;
LAB_00100eef:
    _err_print_error("_start_capturing","modules/camera/camera_feed_linux.cpp",uVar5,
                     "Method/function failed. Returning: false",&local_98,0,0);
    pcVar3 = local_98;
    if (local_98 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        uVar5 = 0;
        goto LAB_00100f38;
      }
    }
    uVar5 = 0;
  }
LAB_00100f38:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraFeedLinux::activate_feed() */

undefined4 __thiscall CameraFeedLinux::activate_feed(CameraFeedLinux *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *__file;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1c8) == -1) {
    _err_print_error("activate_feed","modules/camera/camera_feed_linux.cpp",0xed,
                     "Condition \"selected_format == -1\" is true. Returning: false",
                     "CameraFeed format needs to be set before activating.",0,0);
  }
  else {
    String::ascii(true);
    __file = (char *)CharString::get_data();
    iVar4 = open64(__file,0x802,0);
    *(int *)(this + 0x228) = iVar4;
    if (local_28 == 0) {
LAB_001010be:
      cVar3 = _request_buffers(this);
    }
    else {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001010be;
      Memory::free_static((void *)(local_28 + -0x10),false);
      cVar3 = _request_buffers(this);
    }
    if ((cVar3 != '\0') && (uVar5 = _start_capturing(this), (char)uVar5 != '\0')) {
      uVar6 = _create_buffer_decoder(this);
      *(undefined8 *)(this + 0x240) = uVar6;
      _start_thread(this);
      goto LAB_0010110f;
    }
    _err_print_error("activate_feed","modules/camera/camera_feed_linux.cpp",0xf4,
                     "Method/function failed. Returning: false","Could not activate feed.",0,0);
  }
  uVar5 = 0;
LAB_0010110f:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraFeedLinux::_stop_capturing() */

void __thiscall CameraFeedLinux::_stop_capturing(CameraFeedLinux *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 1;
  iVar4 = ioctl(*(int *)(this + 0x228),0x40045613,&local_44);
  if (iVar4 == -1) {
    __errno_location();
    local_40 = 0;
    local_38 = "ioctl(VIDIOC_STREAMOFF) error: %d.";
    local_30 = 0x22;
    String::parse_latin1((StrRange *)&local_40);
    vformat<int>((String *)&local_38,(int)(StrRange *)&local_40);
    print_error((String *)&local_38);
    pcVar3 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
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
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraFeedLinux::deactivate_feed() */

void __thiscall CameraFeedLinux::deactivate_feed(CameraFeedLinux *this)

{
  uint uVar1;
  long lVar2;
  Thread *this_00;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x210] = (CameraFeedLinux)0x1;
  Thread::wait_to_finish();
  this_00 = *(Thread **)(this + 0x218);
  Thread::~Thread(this_00);
  Memory::free_static(this_00,false);
  _stop_capturing(this);
  uVar1 = *(uint *)(this + 0x238);
  if (uVar1 != 0) {
    lVar7 = 0;
    do {
      puVar4 = (undefined8 *)(*(long *)(this + 0x230) + lVar7);
      lVar7 = lVar7 + 0x10;
      munmap((void *)*puVar4,puVar4[1]);
    } while (lVar7 != (ulong)uVar1 << 4);
  }
  if (*(void **)(this + 0x230) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x230));
  }
  plVar5 = *(long **)(this + 0x240);
  (**(code **)(*plVar5 + 8))(plVar5);
  iVar3 = 0;
  Memory::free_static(plVar5,false);
  while( true ) {
    plVar5 = (long *)RenderingServer::get_singleton();
    uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5);
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(this + (long)iVar3 * 8 + 0x1d0),uVar6);
    if (iVar3 != 0) break;
    iVar3 = 1;
  }
  *(undefined8 *)(this + 0x1a8) = 0;
  close(*(int *)(this + 0x228));
  if (deactivate_feed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&deactivate_feed()::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&deactivate_feed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&deactivate_feed()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&deactivate_feed()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&deactivate_feed()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraFeedLinux::~CameraFeedLinux() */

void __thiscall CameraFeedLinux::~CameraFeedLinux(CameraFeedLinux *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00105380;
  cVar3 = CameraFeed::is_active();
  if (cVar3 != '\0') {
    deactivate_feed(this);
  }
  if (*(long *)(this + 0x220) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x220) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x220);
      *(undefined8 *)(this + 0x220) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      CameraFeed::~CameraFeed((CameraFeed *)this);
      return;
    }
  }
  CameraFeed::~CameraFeed((CameraFeed *)this);
  return;
}



/* CameraFeedLinux::~CameraFeedLinux() */

void __thiscall CameraFeedLinux::~CameraFeedLinux(CameraFeedLinux *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00105380;
  cVar3 = CameraFeed::is_active();
  if (cVar3 != '\0') {
    deactivate_feed(this);
  }
  if (*(long *)(this + 0x220) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x220) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x220);
      *(undefined8 *)(this + 0x220) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CameraFeed::~CameraFeed((CameraFeed *)this);
  operator_delete(this,0x248);
  return;
}



/* CameraFeedLinux::_read_frame() */

void __thiscall CameraFeedLinux::_read_frame(CameraFeedLinux *this)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  uint local_88 [15];
  undefined4 local_4c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = local_88;
  for (lVar6 = 0xb; lVar6 != 0; lVar6 = lVar6 + -1) {
    puVar7[0] = 0;
    puVar7[1] = 0;
    puVar7 = puVar7 + 2;
  }
  local_88[1] = 1;
  local_4c = 1;
  iVar3 = ioctl(*(int *)(this + 0x228),0xc0585611,local_88);
  if (iVar3 == -1) {
    piVar5 = __errno_location();
    if (*piVar5 != 0xb) {
      local_c0 = 0;
      local_b0 = 0x1e;
      local_b8 = "ioctl(VIDIOC_DQBUF) error: %d.";
      String::parse_latin1((StrRange *)&local_c0);
      vformat<int>((String *)&local_b8,(int)(StrRange *)&local_c0);
      print_error((String *)&local_b8);
      pcVar2 = local_b8;
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar6 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      this[0x210] = (CameraFeedLinux)0x1;
    }
  }
  else {
    puVar4 = (undefined8 *)((ulong)local_88[0] * 0x10 + *(long *)(this + 0x230));
    (**(code **)**(undefined8 **)(this + 0x240))(*(undefined8 **)(this + 0x240),*puVar4,puVar4[1]);
    iVar3 = ioctl(*(int *)(this + 0x228),0xc058560f,local_88);
    if (iVar3 == -1) {
      __errno_location();
      local_c0 = 0;
      local_b8 = "ioctl(VIDIOC_QBUF) error: %d.";
      local_b0 = 0x1d;
      String::parse_latin1((StrRange *)&local_c0);
      vformat<int>((String *)&local_b8,(int)(StrRange *)&local_c0);
      print_error((String *)&local_b8);
      pcVar2 = local_b8;
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar6 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    if (_read_frame()::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_read_frame()::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_read_frame()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_read_frame()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_read_frame()::{lambda()#1}::operator()()::sname);
      }
    }
    local_a8 = 0;
    local_a0 = (undefined1  [16])0x0;
    (**(code **)(*(long *)this + 0xd0))(this,&_read_frame()::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraFeedLinux::_update_buffer() */

void __thiscall CameraFeedLinux::_update_buffer(CameraFeedLinux *this)

{
  while (this[0x210] == (CameraFeedLinux)0x0) {
    _read_frame(this);
    usleep(10000);
  }
  return;
}



/* CameraFeedLinux::update_buffer_thread_func(void*) */

void CameraFeedLinux::update_buffer_thread_func(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  while (*(char *)((long)param_1 + 0x210) == '\0') {
    _read_frame((CameraFeedLinux *)param_1);
    usleep(10000);
  }
  return;
}



/* CameraFeedLinux::set_format(int, Dictionary const&) */

undefined1 CameraFeedLinux::set_format(int param_1,Dictionary *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined4 in_register_0000003c;
  long *plVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  long in_FS_OFFSET;
  byte bVar15;
  long local_220;
  char *local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [12] [16];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_50;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_0000003c,param_1);
  bVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)((long)plVar10 + 0x1cc) == '\0') {
    lVar6 = plVar10[0x37];
    iVar3 = (int)param_2;
    lVar5 = (long)iVar3;
    if (iVar3 < 0) {
      if (lVar6 == 0) goto LAB_00101dd8;
      lVar12 = *(long *)(lVar6 + -8);
    }
    else {
      if (lVar6 != 0) {
        lVar12 = *(long *)(lVar6 + -8);
        if (lVar12 <= lVar5) goto LAB_00101c8d;
        local_200 = 0;
        puVar8 = (undefined8 *)(lVar6 + lVar5 * 0x20);
        local_208 = *puVar8;
        if (puVar8[1] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_200,(CowData *)(puVar8 + 1));
        }
        local_1f8 = puVar8[2];
        uVar14 = *(undefined4 *)(puVar8 + 3);
        bVar9 = SUB81((Dictionary *)&local_218,0);
        local_1f0 = uVar14;
        String::ascii(bVar9);
        pcVar4 = (char *)CharString::get_data();
        iVar2 = open64(pcVar4,0x802,0);
        pcVar4 = local_218;
        *(int *)(plVar10 + 0x45) = iVar2;
        if (local_218 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_218 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          uVar14 = local_1f0;
          if (*plVar1 == 0) {
            local_218 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
            uVar14 = local_1f0;
          }
        }
        local_114 = 0;
        local_50 = 0;
        puVar8 = (undefined8 *)&uStack_110;
        for (lVar6 = 0x19; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + (ulong)bVar15 * -2 + 1;
        }
        local_118 = 1;
        uStack_110 = (undefined4)local_208;
        uStack_10c = (undefined4)((ulong)local_208 >> 0x20);
        local_108 = uVar14;
        iVar2 = ioctl((int)plVar10[0x45],0xc0d05605,&local_118);
        if (iVar2 == -1) {
          close((int)plVar10[0x45]);
          __errno_location();
          local_220 = 0;
          local_210 = 0x1d;
          local_218 = "Cannot set format, error: %d.";
          String::parse_latin1((StrRange *)&local_220);
          vformat<int>((String *)&local_218,(int)(StrRange *)&local_220);
          uVar7 = 0x149;
LAB_00101d6f:
          _err_print_error("set_format","modules/camera/camera_feed_linux.cpp",uVar7,
                           "Method/function failed. Returning: false",(Dictionary *)&local_218,0);
          pcVar4 = local_218;
          if (local_218 != (char *)0x0) {
            LOCK();
            plVar10 = (long *)(local_218 + -0x10);
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              local_218 = (char *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
          lVar6 = local_220;
          uVar13 = 0;
          if (local_220 != 0) {
            LOCK();
            plVar10 = (long *)(local_220 + -0x10);
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              local_220 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
        }
        else {
          if (0 < (int)local_1f8) {
            pauVar11 = local_1e0;
            for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
              *(undefined8 *)*pauVar11 = 0;
              pauVar11 = (undefined1 (*) [16])(pauVar11[-(ulong)bVar15] + 8);
            }
            *(undefined4 *)*pauVar11 = 0;
            local_1e8 = _LC50;
            local_1e0[0]._4_8_ = local_1f8;
            iVar2 = ioctl((int)plVar10[0x45],0xc0cc5616,&local_1e8);
            if (iVar2 == -1) {
              close((int)plVar10[0x45]);
              __errno_location();
              local_220 = 0;
              local_210 = 0x20;
              local_218 = "Cannot set framerate, error: %d.";
              String::parse_latin1((StrRange *)&local_220);
              vformat<int>((String *)&local_218,(int)(StrRange *)&local_220);
              uVar7 = 0x157;
              goto LAB_00101d6f;
            }
          }
          close((int)plVar10[0x45]);
          Dictionary::duplicate(bVar9);
          Dictionary::operator=((Dictionary *)(plVar10 + 0x38),(Dictionary *)&local_218);
          Dictionary::~Dictionary((Dictionary *)&local_218);
          *(int *)(plVar10 + 0x39) = iVar3;
          if ((set_format(int,Dictionary_const&)::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar3 = __cxa_guard_acquire(&set_format(int,Dictionary_const&)::{lambda()#1}::
                                           operator()()::sname), iVar3 != 0)) {
            _scs_create((char *)&set_format(int,Dictionary_const&)::{lambda()#1}::operator()()::
                                 sname,true);
            __cxa_atexit(StringName::~StringName,
                         &set_format(int,Dictionary_const&)::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&set_format(int,Dictionary_const&)::{lambda()#1}::operator()()::
                                 sname);
          }
          local_1e8 = 0;
          local_1e0[0] = (undefined1  [16])0x0;
          (**(code **)(*plVar10 + 0xd0))
                    (plVar10,&set_format(int,Dictionary_const&)::{lambda()#1}::operator()()::sname,0
                     ,0);
          if (Variant::needs_deinit[(int)local_1e8] != '\0') {
            Variant::_clear_internal();
          }
          uVar13 = 1;
        }
        if (local_200 != 0) {
          LOCK();
          plVar10 = (long *)(local_200 + -0x10);
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (*plVar10 == 0) {
            Memory::free_static((void *)(local_200 + -0x10),false);
          }
        }
        goto LAB_00101bc2;
      }
LAB_00101dd8:
      lVar12 = 0;
    }
LAB_00101c8d:
    _err_print_index_error
              ("set_format","modules/camera/camera_feed_linux.cpp",0x13a,lVar5,lVar12,"p_index",
               "formats.size()","Invalid format index.",false,false);
  }
  else {
    _err_print_error("set_format","modules/camera/camera_feed_linux.cpp",0x139,
                     "Condition \"active\" is true. Returning: false","Feed is active.",0,0);
  }
  uVar13 = 0;
LAB_00101bc2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* CowData<CameraFeed::FeedFormat>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<CameraFeed::FeedFormat>::_copy_on_write(CowData<CameraFeed::FeedFormat> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x20 != 0) {
    uVar7 = lVar1 * 0x20 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar8 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined8 *)(lVar9 * 0x20 + *(long *)this);
        uVar2 = *puVar6;
        puVar8[1] = 0;
        lVar3 = puVar6[1];
        *puVar8 = uVar2;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 1),(CowData *)(puVar6 + 1));
        }
        lVar9 = lVar9 + 1;
        puVar8[2] = puVar6[2];
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar6 + 3);
        puVar8 = puVar8 + 4;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CameraFeedLinux::_add_format(v4l2_fmtdesc, v4l2_frmsize_discrete, int, int) */

void CameraFeedLinux::_add_format(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  long *plVar1;
  char *pcVar2;
  size_t sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  undefined8 in_stack_00000030;
  undefined8 local_c0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined4 local_88;
  int iStack_84;
  undefined4 local_80;
  char *local_78;
  size_t local_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  local_a0 = 0;
  local_98 = param_2;
  local_70 = strlen(&stack0x00000014);
  local_78 = &stack0x00000014;
  String::parse_latin1((StrRange *)&local_a0);
  if (local_a0 != 0) {
    local_90 = local_a0;
  }
  local_80 = in_stack_00000030._4_4_;
  local_88 = param_3;
  iStack_84 = param_4;
  cVar4 = is_print_verbose_enabled();
  if (cVar4 == '\0') {
    local_c0 = CONCAT44(param_4,param_3);
    uVar7 = in_stack_00000030._4_4_;
  }
  else {
    local_a8 = 0;
    local_78 = "%s %dx%d@%d/%dfps";
    local_70 = 0x11;
    String::parse_latin1((StrRange *)&local_a8);
    local_c0._4_4_ = (int)((ulong)param_2 >> 0x20);
    vformat<char*,unsigned_int,unsigned_int,int,int>
              ((String *)&local_a0,(char *)&local_a8,(uint)&stack0x00000014,(uint)param_2,
               local_c0._4_4_,param_4);
    Variant::Variant((Variant *)local_58,(String *)&local_a0);
    stringify_variants((Variant *)&local_78);
    __print_line((String *)&local_78);
    pcVar2 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar8 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar8 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    local_c0 = CONCAT44(iStack_84,local_88);
    param_2 = local_98;
    uVar7 = local_80;
  }
  lVar8 = local_90;
  local_70 = 0;
  local_78 = (char *)param_2;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_90);
  }
  sVar3 = local_70;
  local_68 = local_c0;
  if (*(long *)(param_1 + 0x1b8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x1b8) + -8) + 1;
  }
  local_60 = uVar7;
  iVar5 = CowData<CameraFeed::FeedFormat>::resize<false>
                    ((CowData<CameraFeed::FeedFormat> *)(param_1 + 0x1b8),lVar6);
  if (iVar5 == 0) {
    if (*(long *)(param_1 + 0x1b8) == 0) {
      lVar9 = -1;
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 0x1b8) + -8);
      lVar9 = lVar6 + -1;
      if (-1 < lVar9) {
        CowData<CameraFeed::FeedFormat>::_copy_on_write
                  ((CowData<CameraFeed::FeedFormat> *)(param_1 + 0x1b8));
        puVar10 = (undefined8 *)(lVar9 * 0x20 + *(long *)(param_1 + 0x1b8));
        *puVar10 = local_78;
        if (sVar3 != puVar10[1]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 1),(CowData *)&local_70);
        }
        *(undefined4 *)(puVar10 + 3) = uVar7;
        puVar10[2] = local_c0;
        goto LAB_00102187;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar6,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00102187:
  if (sVar3 != 0) {
    LOCK();
    plVar1 = (long *)(sVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar8 = local_90;
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
      lVar8 = local_90;
    }
  }
  if (lVar8 != 0) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_90 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CameraFeedLinux::_query_device(String const&) */

void __thiscall CameraFeedLinux::_query_device(CameraFeedLinux *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  int local_190;
  long local_178;
  long local_170;
  char *local_168;
  size_t local_160;
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8;
  int local_e8 [11];
  undefined4 uStack_bc;
  undefined1 local_a8 [16];
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::ascii(SUB81((String *)&local_168,0));
  pcVar6 = (char *)CharString::get_data();
  iVar3 = open64(pcVar6,0x802,0);
  pcVar6 = local_168;
  *(int *)(this + 0x228) = iVar3;
  if (local_168 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_168 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_168 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar6 + -0x10),false);
    }
    iVar3 = *(int *)(this + 0x228);
  }
  if (iVar3 == -1) {
    piVar7 = __errno_location();
    local_170 = 0;
    iVar3 = *piVar7;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_001028f3;
        LOCK();
        lVar8 = *plVar1;
        bVar9 = lVar2 == lVar8;
        if (bVar9) {
          *plVar1 = lVar2 + 1;
          lVar8 = lVar2;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar8 != -1) {
        local_170 = *(long *)param_1;
      }
    }
LAB_001028f3:
    local_178 = 0;
    local_168 = "Cannot open file descriptor for %s. Error: %d.";
    local_160 = 0x2e;
    String::parse_latin1((StrRange *)&local_178);
    vformat<String,int>((String *)&local_168,(StrRange *)&local_178,&local_170,iVar3);
    _err_print_error("_query_device","modules/camera/camera_feed_linux.cpp",0x38,
                     "Condition \"file_descriptor == -1\" is true.",(String *)&local_168,0,0);
    pcVar6 = local_168;
    if (local_168 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_168 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_168 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
    lVar2 = local_178;
    if (local_178 != 0) {
      LOCK();
      plVar1 = (long *)(local_178 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_178 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    iVar3 = ioctl(iVar3,0x80685600,local_a8);
    if (iVar3 != -1) {
      local_170 = 0;
      local_160 = strlen(local_98);
      local_168 = local_98;
      String::parse_latin1((StrRange *)&local_170);
      lVar8 = local_170;
      lVar2 = *(long *)(this + 0x180);
      if (lVar2 == local_170) {
        if (lVar2 != 0) {
          LOCK();
          plVar1 = (long *)(lVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_170 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
      }
      else {
        if (lVar2 != 0) {
          LOCK();
          plVar1 = (long *)(lVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *(long *)(this + 0x180);
            *(undefined8 *)(this + 0x180) = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        *(long *)(this + 0x180) = local_170;
      }
      iVar3 = 0;
      while( true ) {
        local_e8[1] = 1;
        uStack_bc = 0;
        local_e8[0] = iVar3;
        iVar4 = ioctl(*(int *)(this + 0x228),0xc0405602,local_e8);
        if (iVar4 == -1) break;
        local_190 = 0;
        while( true ) {
          local_130 = 0;
          local_150 = (undefined1  [16])0x0;
          local_158 = CONCAT44(uStack_bc,local_190);
          local_140 = (undefined1  [16])0x0;
          iVar4 = ioctl(*(int *)(this + 0x228),0xc02c564a,&local_158);
          if (iVar4 == -1) break;
          iVar4 = 0;
          while( true ) {
            local_f8 = 0;
            local_118 = (undefined1  [16])0x0;
            local_128 = CONCAT44(uStack_bc,iVar4);
            local_108 = (undefined1  [16])0x0;
            uStack_120 = local_150._4_8_;
            iVar5 = ioctl(*(int *)(this + 0x228),0xc034564b,&local_128);
            if (iVar5 == -1) break;
            iVar4 = iVar4 + 1;
            _add_format(this,local_150._4_8_,local_118._4_4_,local_118._8_4_);
          }
          if (iVar4 == 0) {
            _add_format(this,local_150._4_8_,0xffffffff,1);
          }
          local_190 = local_190 + 1;
        }
        iVar3 = iVar3 + 1;
      }
      close(*(int *)(this + 0x228));
      goto LAB_00102794;
    }
    __errno_location();
    local_170 = 0;
    local_160 = 0x1f;
    local_168 = "Cannot query device. Error: %d.";
    String::parse_latin1((StrRange *)&local_170);
    vformat<int>((String *)&local_168,(int)(StrRange *)&local_170);
    _err_print_error("_query_device","modules/camera/camera_feed_linux.cpp",0x3c,
                     "Method/function failed.",(String *)&local_168,0,0);
    pcVar6 = local_168;
    if (local_168 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_168 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_168 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
  }
  lVar2 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_00102794:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CameraFeedLinux::CameraFeedLinux(String const&) */

void __thiscall CameraFeedLinux::CameraFeedLinux(CameraFeedLinux *this,String *param_1)

{
  long lVar1;
  
  CameraFeed::CameraFeed((CameraFeed *)this);
  *(undefined ***)this = &PTR__initialize_classv_00105380;
  this[0x210] = (CameraFeedLinux)0x0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x228) = 0xffffffff;
  *(undefined8 *)(this + 0x230) = 0;
  lVar1 = *(long *)param_1;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x220),(CowData *)param_1);
  }
  _query_device(this,(String *)(this + 0x220));
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



/* CameraFeed::is_class_ptr(void*) const */

uint __thiscall CameraFeed::is_class_ptr(CameraFeed *this,void *param_1)

{
  return (uint)CONCAT71(0x1055,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1055,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CameraFeed::_getv(StringName const&, Variant&) const */

undefined8 CameraFeed::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CameraFeed::_setv(StringName const&, Variant const&) */

undefined8 CameraFeed::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CameraFeed::_validate_propertyv(PropertyInfo&) const */

void CameraFeed::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CameraFeed::_property_can_revertv(StringName const&) const */

undefined8 CameraFeed::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CameraFeed::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CameraFeed::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CameraFeed::_notificationv(int, bool) */

void CameraFeed::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CameraFeed::_get_class_namev() const */

undefined8 * CameraFeed::_get_class_namev(void)

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
LAB_00102bd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102bd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CameraFeed");
      goto LAB_00102c3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CameraFeed");
LAB_00102c3e:
  return &_get_class_namev()::_class_name_static;
}



/* CameraFeed::get_class() const */

void CameraFeed::get_class(void)

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



/* CameraFeed::_initialize_classv() */

void CameraFeed::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_001030eb;
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
LAB_001031fa:
      if ((code *)PTR__bind_methods_00108008 != RefCounted::_bind_methods) {
LAB_0010320a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001031fa;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00108008 != RefCounted::_bind_methods) goto LAB_0010320a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "CameraFeed";
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
  if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
    CameraFeed::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_001030eb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CameraFeed::is_class(String const&) const */

undefined8 __thiscall CameraFeed::is_class(CameraFeed *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001032ef;
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
LAB_001032ef:
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
    if (cVar6 != '\0') goto LAB_001033a3;
  }
  cVar6 = String::operator==(param_1,"CameraFeed");
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
              if (lVar5 == 0) goto LAB_0010347b;
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
LAB_0010347b:
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
      if (cVar6 != '\0') goto LAB_001033a3;
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
                if (lVar5 == 0) goto LAB_0010355b;
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
LAB_0010355b:
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
        if (cVar6 != '\0') goto LAB_001033a3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00103604;
    }
  }
LAB_001033a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103604:
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
LAB_00103778:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103778;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103796;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103796:
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



/* CameraFeed::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CameraFeed::_get_property_listv(CameraFeed *this,List *param_1,bool param_2)

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
  local_78 = "CameraFeed";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CameraFeed";
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
LAB_00103b78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103b78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103b95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103b95:
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
  StringName::StringName((StringName *)&local_78,"CameraFeed",false);
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



/* WARNING: Removing unreachable block (ram,0x00104010) */
/* WARNING: Removing unreachable block (ram,0x00104140) */
/* WARNING: Removing unreachable block (ram,0x001042b9) */
/* WARNING: Removing unreachable block (ram,0x0010414c) */
/* WARNING: Removing unreachable block (ram,0x00104156) */
/* WARNING: Removing unreachable block (ram,0x0010429b) */
/* WARNING: Removing unreachable block (ram,0x00104162) */
/* WARNING: Removing unreachable block (ram,0x0010416c) */
/* WARNING: Removing unreachable block (ram,0x0010427d) */
/* WARNING: Removing unreachable block (ram,0x00104178) */
/* WARNING: Removing unreachable block (ram,0x00104182) */
/* WARNING: Removing unreachable block (ram,0x0010425f) */
/* WARNING: Removing unreachable block (ram,0x0010418e) */
/* WARNING: Removing unreachable block (ram,0x00104198) */
/* WARNING: Removing unreachable block (ram,0x00104241) */
/* WARNING: Removing unreachable block (ram,0x001041a4) */
/* WARNING: Removing unreachable block (ram,0x001041ae) */
/* WARNING: Removing unreachable block (ram,0x00104223) */
/* WARNING: Removing unreachable block (ram,0x001041b6) */
/* WARNING: Removing unreachable block (ram,0x001041c0) */
/* WARNING: Removing unreachable block (ram,0x00104208) */
/* WARNING: Removing unreachable block (ram,0x001041c8) */
/* WARNING: Removing unreachable block (ram,0x001041de) */
/* WARNING: Removing unreachable block (ram,0x001041ea) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 * vformat<String,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
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
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
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



/* WARNING: Removing unreachable block (ram,0x001043f8) */
/* WARNING: Removing unreachable block (ram,0x00104528) */
/* WARNING: Removing unreachable block (ram,0x001046f0) */
/* WARNING: Removing unreachable block (ram,0x00104534) */
/* WARNING: Removing unreachable block (ram,0x0010453e) */
/* WARNING: Removing unreachable block (ram,0x001046d0) */
/* WARNING: Removing unreachable block (ram,0x0010454a) */
/* WARNING: Removing unreachable block (ram,0x00104554) */
/* WARNING: Removing unreachable block (ram,0x001046b0) */
/* WARNING: Removing unreachable block (ram,0x00104560) */
/* WARNING: Removing unreachable block (ram,0x0010456a) */
/* WARNING: Removing unreachable block (ram,0x00104690) */
/* WARNING: Removing unreachable block (ram,0x00104576) */
/* WARNING: Removing unreachable block (ram,0x00104580) */
/* WARNING: Removing unreachable block (ram,0x00104670) */
/* WARNING: Removing unreachable block (ram,0x0010458c) */
/* WARNING: Removing unreachable block (ram,0x00104596) */
/* WARNING: Removing unreachable block (ram,0x00104650) */
/* WARNING: Removing unreachable block (ram,0x001045a2) */
/* WARNING: Removing unreachable block (ram,0x001045ac) */
/* WARNING: Removing unreachable block (ram,0x00104630) */
/* WARNING: Removing unreachable block (ram,0x001045b4) */
/* WARNING: Removing unreachable block (ram,0x001045ca) */
/* WARNING: Removing unreachable block (ram,0x001045d6) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
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



/* WARNING: Removing unreachable block (ram,0x00104b70) */
/* WARNING: Removing unreachable block (ram,0x00104ca0) */
/* WARNING: Removing unreachable block (ram,0x00104e18) */
/* WARNING: Removing unreachable block (ram,0x00104cac) */
/* WARNING: Removing unreachable block (ram,0x00104cb6) */
/* WARNING: Removing unreachable block (ram,0x00104dfa) */
/* WARNING: Removing unreachable block (ram,0x00104cc2) */
/* WARNING: Removing unreachable block (ram,0x00104ccc) */
/* WARNING: Removing unreachable block (ram,0x00104ddc) */
/* WARNING: Removing unreachable block (ram,0x00104cd8) */
/* WARNING: Removing unreachable block (ram,0x00104ce2) */
/* WARNING: Removing unreachable block (ram,0x00104dbe) */
/* WARNING: Removing unreachable block (ram,0x00104cee) */
/* WARNING: Removing unreachable block (ram,0x00104cf8) */
/* WARNING: Removing unreachable block (ram,0x00104da0) */
/* WARNING: Removing unreachable block (ram,0x00104d04) */
/* WARNING: Removing unreachable block (ram,0x00104d0e) */
/* WARNING: Removing unreachable block (ram,0x00104d82) */
/* WARNING: Removing unreachable block (ram,0x00104d16) */
/* WARNING: Removing unreachable block (ram,0x00104d20) */
/* WARNING: Removing unreachable block (ram,0x00104d67) */
/* WARNING: Removing unreachable block (ram,0x00104d28) */
/* WARNING: Removing unreachable block (ram,0x00104d3d) */
/* WARNING: Removing unreachable block (ram,0x00104d49) */
/* String vformat<char*, unsigned int, unsigned int, int, int>(String const&, char* const, unsigned
   int const, unsigned int const, int const, int const) */

String * vformat<char*,unsigned_int,unsigned_int,int,int>
                   (String *param_1,char *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  Variant *pVVar1;
  undefined4 in_register_00000014;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  int in_stack_00000008;
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
  Variant::Variant(local_d8,(char *)CONCAT44(in_register_00000014,param_3));
  Variant::Variant(local_c0,param_4);
  Variant::Variant(local_a8,param_5);
  iVar2 = 0;
  Variant::Variant(local_90,param_6);
  Variant::Variant(local_78,in_stack_00000008);
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
  String::sprintf((Array *)local_120,(bool *)param_2);
  *(undefined8 *)param_1 = local_120[0];
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



/* CowData<CameraFeed::FeedFormat>::_unref() */

void __thiscall CowData<CameraFeed::FeedFormat>::_unref(CowData<CameraFeed::FeedFormat> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x20;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<CameraFeed::FeedFormat>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<CameraFeed::FeedFormat>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<CameraFeed::FeedFormat>::_realloc(long) */

undefined8 __thiscall
CowData<CameraFeed::FeedFormat>::_realloc(CowData<CameraFeed::FeedFormat> *this,long param_1)

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
/* Error CowData<CameraFeed::FeedFormat>::resize<false>(long) */

undefined8 __thiscall
CowData<CameraFeed::FeedFormat>::resize<false>(CowData<CameraFeed::FeedFormat> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 0x20;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_001052e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x20 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_001052e0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar10 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar10) {
LAB_00105182:
        if (lVar11 != lVar9) {
          uVar4 = _realloc(this,lVar11);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar3 = uVar10 * 0x20 + lVar7;
        if (*(long *)(lVar3 + 8) != 0) break;
        uVar10 = uVar10 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar10) goto LAB_00105182;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *(long *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
      uVar10 = uVar10 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_00105336;
  }
  if (lVar11 == lVar9) {
LAB_00105253:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_00105336:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00105237;
  }
  else {
    if (lVar7 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00105253;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  puVar5 = puVar8 + lVar7 * 4;
  do {
    *puVar5 = 0;
    puVar6 = puVar5 + 4;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 4);
LAB_00105237:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


