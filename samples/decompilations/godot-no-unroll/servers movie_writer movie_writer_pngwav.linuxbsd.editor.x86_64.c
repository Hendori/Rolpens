
/* MovieWriterPNGWAV::get_audio_mix_rate() const */

undefined4 __thiscall MovieWriterPNGWAV::get_audio_mix_rate(MovieWriterPNGWAV *this)

{
  return *(undefined4 *)(this + 600);
}



/* MovieWriterPNGWAV::get_audio_speaker_mode() const */

undefined4 __thiscall MovieWriterPNGWAV::get_audio_speaker_mode(MovieWriterPNGWAV *this)

{
  return *(undefined4 *)(this + 0x25c);
}



/* MovieWriterPNGWAV::write_end() */

void __thiscall MovieWriterPNGWAV::write_end(MovieWriterPNGWAV *this)

{
  int iVar1;
  int iVar2;
  
  if (*(long **)(this + 0x278) != (long *)0x0) {
    iVar2 = (**(code **)(**(long **)(this + 0x278) + 0x1c8))();
    iVar1 = *(int *)(this + 0x280);
    (**(code **)(**(long **)(this + 0x278) + 0x1b8))(*(long **)(this + 0x278),4);
    (**(code **)(**(long **)(this + 0x278) + 0x278))
              (*(long **)(this + 0x278),(iVar2 - iVar1) + 0x24);
    (**(code **)(**(long **)(this + 0x278) + 0x1b8))(*(long **)(this + 0x278),0x28);
                    /* WARNING: Could not recover jumptable at 0x001000a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x278) + 0x278))(*(long **)(this + 0x278),iVar2 - iVar1);
    return;
  }
  return;
}



/* MovieWriterPNGWAV::handles_file(String const&) const */

undefined4 MovieWriterPNGWAV::handles_file(String *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  uVar3 = String::operator==((String *)&local_28,"png");
  lVar2 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
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



/* MovieWriterPNGWAV::get_supported_extensions(List<String, DefaultAllocator>*) const */

void __thiscall MovieWriterPNGWAV::get_supported_extensions(MovieWriterPNGWAV *this,List *param_1)

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
  local_38 = &_LC1;
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



/* MovieWriterPNGWAV::zeros_str(unsigned int) */

StrRange * MovieWriterPNGWAV::zeros_str(uint param_1)

{
  ulong uVar1;
  uint in_EDX;
  undefined4 in_register_0000003c;
  StrRange *pSVar2;
  long lVar3;
  long in_FS_OFFSET;
  double dVar4;
  char local_39 [8];
  undefined1 local_31;
  long local_30;
  
  pSVar2 = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  lVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    dVar4 = pow(_LC4,(double)(7 - (int)lVar3));
    uVar1 = (ulong)in_EDX / ((long)dVar4 & 0xffffffffU);
    local_39[lVar3] = (char)uVar1 + (char)(uVar1 / 10) * -10 + '0';
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  *(undefined8 *)pSVar2 = 0;
  local_31 = 0;
  strlen(local_39);
  String::parse_latin1(pSVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MovieWriterPNGWAV::write_begin(Vector2i const&, unsigned int, String const&) */

undefined8 MovieWriterPNGWAV::write_begin(Vector2i *param_1,uint param_2,String *param_3)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  bool bVar13;
  Object *local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_basename();
  pOVar12 = local_58;
  pOVar3 = *(Object **)(param_1 + 0x260);
  if (pOVar3 == local_58) {
    if (pOVar3 != (Object *)0x0) {
      LOCK();
      pOVar3 = pOVar3 + -0x10;
      *(long *)pOVar3 = *(long *)pOVar3 + -1;
      UNLOCK();
      if (*(long *)pOVar3 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static(pOVar12 + -0x10,false);
      }
    }
  }
  else {
    if (pOVar3 != (Object *)0x0) {
      LOCK();
      pOVar3 = pOVar3 + -0x10;
      *(long *)pOVar3 = *(long *)pOVar3 + -1;
      UNLOCK();
      if (*(long *)pOVar3 == 0) {
        lVar4 = *(long *)(param_1 + 0x260);
        *(undefined8 *)(param_1 + 0x260) = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    *(Object **)(param_1 + 0x260) = local_58;
  }
  cVar6 = String::is_relative_path();
  if (cVar6 != '\0') {
    operator+((char *)&local_58,(String *)&_LC5);
    pOVar12 = local_58;
    pOVar3 = *(Object **)(param_1 + 0x260);
    if (pOVar3 == local_58) {
      if (pOVar3 != (Object *)0x0) {
        LOCK();
        pOVar3 = pOVar3 + -0x10;
        *(long *)pOVar3 = *(long *)pOVar3 + -1;
        UNLOCK();
        if (*(long *)pOVar3 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar12 + -0x10,false);
        }
      }
    }
    else {
      if (pOVar3 != (Object *)0x0) {
        LOCK();
        pOVar3 = pOVar3 + -0x10;
        *(long *)pOVar3 = *(long *)pOVar3 + -1;
        UNLOCK();
        if (*(long *)pOVar3 == 0) {
          lVar4 = *(long *)(param_1 + 0x260);
          *(undefined8 *)(param_1 + 0x260) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      *(Object **)(param_1 + 0x260) = local_58;
    }
  }
  String::get_base_dir();
  DirAccess::open((String *)&local_80,(Error *)&local_58);
  pOVar3 = local_58;
  if (local_58 != (Object *)0x0) {
    LOCK();
    pOVar12 = local_58 + -0x10;
    *(long *)pOVar12 = *(long *)pOVar12 + -1;
    UNLOCK();
    if (*(long *)pOVar12 == 0) {
      local_58 = (Object *)0x0;
      Memory::free_static(pOVar3 + -0x10,false);
    }
  }
  if (local_80 == (Object *)0x0) {
    _err_print_error("write_begin","servers/movie_writer/movie_writer_pngwav.cpp",0x49,
                     "Condition \"d.is_null()\" is true. Returning: FAILED",0,0);
    if (((local_80 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_80), cVar6 != '\0')) {
      (**(code **)(*(long *)local_80 + 0x140))(local_80);
      Memory::free_static(local_80,false);
    }
    uVar10 = 1;
    goto LAB_0010096a;
  }
  String::get_file();
LAB_00100540:
  local_58 = (Object *)&_LC9;
  local_60 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_60);
  zeros_str((uint)(StrRange *)&local_68);
  String::operator+((String *)&local_58,(String *)&local_78);
  String::operator+((String *)&local_70,(String *)&local_58);
  pOVar3 = local_58;
  if (local_58 != (Object *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (Object *)0x0;
      Memory::free_static(pOVar3 + -0x10,false);
    }
  }
  lVar4 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
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
  pcVar5 = *(code **)(*(long *)local_80 + 0x208);
  local_58 = (Object *)0x0;
  plVar1 = (long *)(local_70 + -0x10);
  if (local_70 != 0) {
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00100657;
      LOCK();
      lVar9 = *plVar1;
      bVar13 = lVar4 == lVar9;
      if (bVar13) {
        *plVar1 = lVar4 + 1;
        lVar9 = lVar4;
      }
      UNLOCK();
    } while (!bVar13);
    if (lVar9 != -1) {
      local_58 = (Object *)local_70;
    }
  }
LAB_00100657:
  iVar7 = (*pcVar5)();
  pOVar3 = local_58;
  if (local_58 != (Object *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (Object *)0x0;
      Memory::free_static((void *)((long)pOVar3 + -0x10),false);
    }
  }
  lVar4 = local_70;
  if (iVar7 == 0) {
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
    goto LAB_00100540;
  }
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
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (((local_80 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_80), cVar6 != '\0')) {
    (**(code **)(*(long *)local_80 + 0x140))(local_80);
    Memory::free_static(local_80,false);
  }
  local_68 = 0;
  local_58 = (Object *)&_LC10;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  String::operator+((String *)&local_60,(String *)(param_1 + 0x260));
  FileAccess::open((String *)&local_58,(int)(StrRange *)&local_60,(Error *)0x7);
  pOVar3 = *(Object **)(param_1 + 0x278);
  pOVar12 = pOVar3;
  if (local_58 == pOVar3) {
LAB_001007a1:
    if (((pOVar12 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar3 = local_58, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  else {
    *(Object **)(param_1 + 0x278) = local_58;
    if (local_58 != (Object *)0x0) {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        *(undefined8 *)(param_1 + 0x278) = 0;
      }
      pOVar12 = local_58;
      if (pOVar3 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        goto joined_r0x00100796;
      }
      goto LAB_001007a1;
    }
    if (pOVar3 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
joined_r0x00100796:
      pOVar12 = local_58;
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), pOVar12 = local_58, cVar6 != '\0'))
      {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar12 = local_58;
      }
      goto LAB_001007a1;
    }
  }
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
  lVar4 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  plVar1 = *(long **)(param_1 + 0x278);
  if (plVar1 == (long *)0x0) {
    _err_print_error("write_begin","servers/movie_writer/movie_writer_pngwav.cpp",0x55,
                     "Condition \"f_wav.is_null()\" is true. Returning: ERR_CANT_OPEN",0,0);
    uVar10 = 0x13;
  }
  else {
    *(int *)(param_1 + 0x26c) = (int)param_3;
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0x101465,4);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x278))(*(long **)(param_1 + 0x278),0x24);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x2d0))(*(long **)(param_1 + 0x278),&_LC13,4);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x2d0))(*(long **)(param_1 + 0x278),&_LC14,4);
    if (*(int *)(param_1 + 0x25c) - 1U < 3) {
      iVar11 = *(int *)(param_1 + 0x25c) + 1;
      iVar7 = iVar11 * 2;
      iVar11 = iVar11 * 8;
    }
    else {
      iVar11 = 8;
      iVar7 = 2;
    }
    (**(code **)(**(long **)(param_1 + 0x278) + 0x278))(*(long **)(param_1 + 0x278),0x10);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x270))(*(long **)(param_1 + 0x278),1);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x270))(*(long **)(param_1 + 0x278),iVar7);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x278))
              (*(long **)(param_1 + 0x278),*(undefined4 *)(param_1 + 600));
    uVar2 = *(uint *)(param_1 + 600);
    *(uint *)(param_1 + 0x270) = (uVar2 / *(uint *)(param_1 + 0x26c)) * iVar11;
    (**(code **)(**(long **)(param_1 + 0x278) + 0x278))
              (*(long **)(param_1 + 0x278),uVar2 * iVar11,
               (ulong)uVar2 % (ulong)*(uint *)(param_1 + 0x26c));
    (**(code **)(**(long **)(param_1 + 0x278) + 0x270))(*(long **)(param_1 + 0x278),iVar11);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x270))(*(long **)(param_1 + 0x278),0x20);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x2d0))(*(long **)(param_1 + 0x278),&_LC15,4);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x278))(*(long **)(param_1 + 0x278),0);
    uVar8 = (**(code **)(**(long **)(param_1 + 0x278) + 0x1c8))();
    *(undefined4 *)(param_1 + 0x280) = uVar8;
    uVar10 = 0;
  }
LAB_0010096a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MovieWriterPNGWAV::write_frame(Ref<Image> const&, int const*) */

undefined8 __thiscall
MovieWriterPNGWAV::write_frame(MovieWriterPNGWAV *this,Ref *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Object *local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x278) == 0) {
    _err_print_error("write_frame","servers/movie_writer/movie_writer_pngwav.cpp",0x8f,
                     "Condition \"f_wav.is_null()\" is true. Returning: ERR_UNCONFIGURED",0,0);
    uVar5 = 3;
  }
  else {
    Image::save_png_to_buffer();
    local_70[0] = 0;
    local_58 = &_LC9;
    local_50 = 4;
    String::parse_latin1((StrRange *)local_70);
    zeros_str((uint)&local_80);
    String::operator+((String *)&local_78,(String *)(this + 0x260));
    String::operator+((String *)&local_58,(String *)&local_78);
    FileAccess::open((String *)&local_88,(int)(String *)&local_58,(Error *)0x2);
    puVar3 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
    lVar2 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_70[0];
    if (local_70[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_70[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70[0] = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (local_60 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(local_60 + -8);
    }
    (**(code **)(*(long *)local_88 + 0x2d0))(local_88,local_60,uVar5);
    (**(code **)(**(long **)(this + 0x278) + 0x2d0))
              (*(long **)(this + 0x278),param_2,*(undefined4 *)(this + 0x270));
    *(int *)(this + 0x268) = *(int *)(this + 0x268) + 1;
    if (local_88 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_88);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_88 + 0x140))(local_88);
          Memory::free_static(local_88,false);
        }
      }
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    uVar5 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MovieWriterPNGWAV::MovieWriterPNGWAV() */

void __thiscall MovieWriterPNGWAV::MovieWriterPNGWAV(MovieWriterPNGWAV *this)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  *(code **)this = operator_delete;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x18c) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x1b0),"_get_audio_mix_rate",false);
  this[0x1b8] = (MovieWriterPNGWAV)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  StringName::StringName((StringName *)(this + 0x1c8),"_get_audio_speaker_mode",false);
  this[0x1d0] = (MovieWriterPNGWAV)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  StringName::StringName((StringName *)(this + 0x1e0),"_handles_file",false);
  this[0x1e8] = (MovieWriterPNGWAV)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  StringName::StringName((StringName *)(this + 0x1f8),"_get_supported_extensions",false);
  this[0x200] = (MovieWriterPNGWAV)0x0;
  *(undefined8 *)(this + 0x208) = 0;
  StringName::StringName((StringName *)(this + 0x210),"_write_begin",false);
  this[0x218] = (MovieWriterPNGWAV)0x0;
  *(undefined8 *)(this + 0x220) = 0;
  StringName::StringName((StringName *)(this + 0x228),"_write_frame",false);
  this[0x230] = (MovieWriterPNGWAV)0x0;
  *(undefined8 *)(this + 0x238) = 0;
  StringName::StringName((StringName *)(this + 0x240),"_write_end",false);
  this[0x248] = (MovieWriterPNGWAV)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001028f0;
  *(undefined8 *)(this + 600) = 48000;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x280) = 0;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"editor/movie_writer/mix_rate",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  uVar1 = Variant::operator_cast_to_unsigned_int((Variant *)local_48);
  *(uint *)(this + 600) = uVar1;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"editor/movie_writer/speaker_mode",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0x25c) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MovieWriterPNGWAV::is_class_ptr(void*) const */

uint __thiscall MovieWriterPNGWAV::is_class_ptr(MovieWriterPNGWAV *this,void *param_1)

{
  return (uint)CONCAT71(0x102a,(undefined4 *)param_1 == &MovieWriter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MovieWriterPNGWAV::_getv(StringName const&, Variant&) const */

undefined8 MovieWriterPNGWAV::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MovieWriterPNGWAV::_setv(StringName const&, Variant const&) */

undefined8 MovieWriterPNGWAV::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MovieWriterPNGWAV::_validate_propertyv(PropertyInfo&) const */

void MovieWriterPNGWAV::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MovieWriterPNGWAV::_property_can_revertv(StringName const&) const */

undefined8 MovieWriterPNGWAV::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MovieWriterPNGWAV::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MovieWriterPNGWAV::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MovieWriterPNGWAV::_notificationv(int, bool) */

void MovieWriterPNGWAV::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MovieWriterPNGWAV::_get_class_namev() const */

undefined8 * MovieWriterPNGWAV::_get_class_namev(void)

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
LAB_001013a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001013a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MovieWriterPNGWAV");
      goto LAB_0010140e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MovieWriterPNGWAV");
LAB_0010140e:
  return &_get_class_namev()::_class_name_static;
}



/* MovieWriterPNGWAV::get_class() const */

void MovieWriterPNGWAV::get_class(void)

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



/* MovieWriterPNGWAV::_initialize_classv() */

void MovieWriterPNGWAV::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00101754;
  if (MovieWriter::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "MovieWriter";
    local_60 = 0;
    local_40 = 0xb;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0010185e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010186e:
        MovieWriter::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010185e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010186e;
    }
    MovieWriter::initialize_class()::initialized = '\x01';
  }
  local_48 = "MovieWriter";
  local_58 = 0;
  local_40 = 0xb;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "MovieWriterPNGWAV";
  local_60 = 0;
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  initialize_class()::initialized = '\x01';
LAB_00101754:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MovieWriterPNGWAV::is_class(String const&) const */

undefined8 __thiscall MovieWriterPNGWAV::is_class(MovieWriterPNGWAV *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010194f;
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
LAB_0010194f:
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
    if (cVar6 != '\0') goto LAB_00101a03;
  }
  cVar6 = String::operator==(param_1,"MovieWriterPNGWAV");
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
              if (lVar5 == 0) goto LAB_00101adb;
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
LAB_00101adb:
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
      if (cVar6 != '\0') goto LAB_00101a03;
    }
    cVar6 = String::operator==(param_1,"MovieWriter");
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
                if (lVar5 == 0) goto LAB_00101bbb;
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
LAB_00101bbb:
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
        if (cVar6 != '\0') goto LAB_00101a03;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00101c64;
    }
  }
LAB_00101a03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00101c64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MovieWriter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void MovieWriter::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "MovieWriter";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MovieWriter";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_00101dd8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101dd8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00101df6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00101df6:
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
  StringName::StringName((StringName *)&local_78,"MovieWriter",false);
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



/* MovieWriterPNGWAV::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MovieWriterPNGWAV::_get_property_listv(MovieWriterPNGWAV *this,List *param_1,bool param_2)

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
    MovieWriter::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MovieWriterPNGWAV";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MovieWriterPNGWAV";
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
LAB_001021d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001021d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001021f5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001021f5:
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
  StringName::StringName((StringName *)&local_78,"MovieWriterPNGWAV",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MovieWriter::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MovieWriter::~MovieWriter() */

void __thiscall MovieWriter::~MovieWriter(MovieWriter *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = StringName::configured != '\0';
  *(code **)this = operator_delete;
  if (bVar3) {
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001026b7;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001026b7;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001026b7;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001026b7;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001026b7;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001026b7;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
    }
  }
LAB_001026b7:
  if (*(void **)(this + 0x1a8) != (void *)0x0) {
    if (*(int *)(this + 0x1a0) != 0) {
      *(undefined4 *)(this + 0x1a0) = 0;
    }
    Memory::free_static(*(void **)(this + 0x1a8),false);
  }
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Object::~Object((Object *)this);
      return;
    }
  }
  Object::~Object((Object *)this);
  return;
}



/* MovieWriterPNGWAV::~MovieWriterPNGWAV() */

void __thiscall MovieWriterPNGWAV::~MovieWriterPNGWAV(MovieWriterPNGWAV *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001028f0;
  if (*(long *)(this + 0x278) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x278);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      MovieWriter::~MovieWriter((MovieWriter *)this);
      return;
    }
  }
  MovieWriter::~MovieWriter((MovieWriter *)this);
  return;
}



/* MovieWriterPNGWAV::~MovieWriterPNGWAV() */

void __thiscall MovieWriterPNGWAV::~MovieWriterPNGWAV(MovieWriterPNGWAV *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001028f0;
  if (*(long *)(this + 0x278) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x278);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  MovieWriter::~MovieWriter((MovieWriter *)this);
  operator_delete(this,0x288);
  return;
}



/* MovieWriter::~MovieWriter() */

void __thiscall MovieWriter::~MovieWriter(MovieWriter *this)

{
  ~MovieWriter(this);
  operator_delete(this,600);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* MovieWriterPNGWAV::~MovieWriterPNGWAV() */

void __thiscall MovieWriterPNGWAV::~MovieWriterPNGWAV(MovieWriterPNGWAV *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MovieWriter::~MovieWriter() */

void __thiscall MovieWriter::~MovieWriter(MovieWriter *this)

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


