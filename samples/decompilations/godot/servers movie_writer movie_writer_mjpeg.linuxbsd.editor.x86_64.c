
/* MovieWriterMJPEG::get_audio_mix_rate() const */

undefined4 __thiscall MovieWriterMJPEG::get_audio_mix_rate(MovieWriterMJPEG *this)

{
  return *(undefined4 *)(this + 600);
}



/* MovieWriterMJPEG::get_audio_speaker_mode() const */

undefined4 __thiscall MovieWriterMJPEG::get_audio_speaker_mode(MovieWriterMJPEG *this)

{
  return *(undefined4 *)(this + 0x25c);
}



/* MovieWriterMJPEG::write_end() */

void __thiscall MovieWriterMJPEG::write_end(MovieWriterMJPEG *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = *(long **)(this + 0x2b0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,&_LC0,4);
    (**(code **)(**(long **)(this + 0x2b0) + 0x278))
              (*(long **)(this + 0x2b0),*(int *)(this + 0x268) << 5);
    if (*(int *)(this + 0x268) != 0) {
      lVar8 = 0;
      iVar6 = 4;
      do {
        (**(code **)(**(long **)(this + 0x2b0) + 0x2d0))(*(long **)(this + 0x2b0),&_LC1,4);
        (**(code **)(**(long **)(this + 0x2b0) + 0x278))(*(long **)(this + 0x2b0),0x10);
        (**(code **)(**(long **)(this + 0x2b0) + 0x278))(*(long **)(this + 0x2b0),iVar6);
        lVar2 = *(long *)(this + 0x280);
        if (lVar2 == 0) {
LAB_00100368:
          lVar7 = 0;
LAB_0010036b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar2 + -8);
        if (lVar7 <= lVar8) goto LAB_0010036b;
        (**(code **)(**(long **)(this + 0x2b0) + 0x278))
                  (*(long **)(this + 0x2b0),*(undefined4 *)(lVar2 + lVar8 * 4));
        lVar2 = *(long *)(this + 0x280);
        if (lVar2 == 0) goto LAB_00100368;
        lVar7 = *(long *)(lVar2 + -8);
        if (lVar7 <= lVar8) goto LAB_0010036b;
        iVar6 = iVar6 + 8 + *(int *)(lVar2 + lVar8 * 4);
        (**(code **)(**(long **)(this + 0x2b0) + 0x2d0))(*(long **)(this + 0x2b0),&_LC7,4);
        (**(code **)(**(long **)(this + 0x2b0) + 0x278))(*(long **)(this + 0x2b0),0x10);
        (**(code **)(**(long **)(this + 0x2b0) + 0x278))(*(long **)(this + 0x2b0),iVar6);
        (**(code **)(**(long **)(this + 0x2b0) + 0x278))
                  (*(long **)(this + 0x2b0),*(undefined4 *)(this + 0x274));
        iVar6 = iVar6 + 8 + *(int *)(this + 0x274);
        if (*(long *)(this + 0x280) == 0) goto LAB_00100368;
        lVar7 = *(long *)(*(long *)(this + 0x280) + -8);
        if (lVar7 <= lVar8) goto LAB_0010036b;
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x268));
    }
    iVar6 = (**(code **)(**(long **)(this + 0x2b0) + 0x1c8))();
    (**(code **)(**(long **)(this + 0x2b0) + 0x1b8))(*(long **)(this + 0x2b0),4);
    (**(code **)(**(long **)(this + 0x2b0) + 0x278))(*(long **)(this + 0x2b0),iVar6 + -0x4e);
    (**(code **)(**(long **)(this + 0x2b0) + 0x1b8))
              (*(long **)(this + 0x2b0),*(undefined8 *)(this + 0x288));
    (**(code **)(**(long **)(this + 0x2b0) + 0x278))
              (*(long **)(this + 0x2b0),*(undefined4 *)(this + 0x268));
    (**(code **)(**(long **)(this + 0x2b0) + 0x1b8))
              (*(long **)(this + 0x2b0),*(undefined8 *)(this + 0x290));
    (**(code **)(**(long **)(this + 0x2b0) + 0x278))
              (*(long **)(this + 0x2b0),*(undefined4 *)(this + 0x268));
    (**(code **)(**(long **)(this + 0x2b0) + 0x1b8))
              (*(long **)(this + 0x2b0),*(undefined8 *)(this + 0x298));
    (**(code **)(**(long **)(this + 0x2b0) + 0x278))
              (*(long **)(this + 0x2b0),*(undefined4 *)(this + 0x268));
    (**(code **)(**(long **)(this + 0x2b0) + 0x1b8))
              (*(long **)(this + 0x2b0),*(undefined8 *)(this + 0x2a0));
    (**(code **)(**(long **)(this + 0x2b0) + 0x278))
              (*(long **)(this + 0x2b0),
               (ulong)(uint)(*(int *)(this + 0x268) * *(int *)(this + 600)) /
               (ulong)*(uint *)(this + 0x26c));
    (**(code **)(**(long **)(this + 0x2b0) + 0x1b8))
              (*(long **)(this + 0x2b0),*(undefined8 *)(this + 0x2a8));
    (**(code **)(**(long **)(this + 0x2b0) + 0x278))();
    if (*(long *)(this + 0x2b0) != 0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        pOVar3 = *(Object **)(this + 0x2b0);
        cVar5 = predelete_handler(pOVar3);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    *(undefined8 *)(this + 0x2b0) = 0;
  }
  return;
}



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_int>::_copy_on_write(CowData<unsigned_int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
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
    puVar4[1] = lVar2;
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



/* MovieWriterMJPEG::handles_file(String const&) const */

undefined4 MovieWriterMJPEG::handles_file(String *param_1)

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
  uVar3 = String::operator==((String *)&local_28,"avi");
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



/* MovieWriterMJPEG::get_supported_extensions(List<String, DefaultAllocator>*) const */

void __thiscall MovieWriterMJPEG::get_supported_extensions(MovieWriterMJPEG *this,List *param_1)

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
  local_38 = &_LC12;
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



/* MovieWriterMJPEG::write_begin(Vector2i const&, unsigned int, String const&) */

undefined4 MovieWriterMJPEG::write_begin(Vector2i *param_1,uint param_2,String *param_3)

{
  Object *pOVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  Object *pOVar8;
  undefined4 in_register_00000034;
  int *piVar9;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  Object *local_48;
  long local_40;
  
  piVar9 = (int *)CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_basename();
  pOVar8 = local_48;
  pOVar1 = *(Object **)(param_1 + 0x260);
  if (pOVar1 == local_48) {
    if (pOVar1 != (Object *)0x0) {
      LOCK();
      pOVar1 = pOVar1 + -0x10;
      *(long *)pOVar1 = *(long *)pOVar1 + -1;
      UNLOCK();
      if (*(long *)pOVar1 == 0) {
        local_48 = (Object *)0x0;
        Memory::free_static(pOVar8 + -0x10,false);
      }
    }
  }
  else {
    if (pOVar1 != (Object *)0x0) {
      LOCK();
      pOVar1 = pOVar1 + -0x10;
      *(long *)pOVar1 = *(long *)pOVar1 + -1;
      UNLOCK();
      if (*(long *)pOVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x260);
        *(undefined8 *)(param_1 + 0x260) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(Object **)(param_1 + 0x260) = local_48;
  }
  cVar4 = String::is_relative_path();
  if (cVar4 != '\0') {
    operator+((char *)&local_48,(String *)"res://");
    pOVar8 = local_48;
    pOVar1 = *(Object **)(param_1 + 0x260);
    if (pOVar1 == local_48) {
      if (pOVar1 != (Object *)0x0) {
        LOCK();
        pOVar1 = pOVar1 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar8 + -0x10,false);
        }
      }
    }
    else {
      if (pOVar1 != (Object *)0x0) {
        LOCK();
        pOVar1 = pOVar1 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          lVar2 = *(long *)(param_1 + 0x260);
          *(undefined8 *)(param_1 + 0x260) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(Object **)(param_1 + 0x260) = local_48;
    }
  }
  String::operator+=((String *)(param_1 + 0x260),".avi");
  FileAccess::open((String *)&local_48,(int)(String *)(param_1 + 0x260),(Error *)0x7);
  pOVar1 = *(Object **)(param_1 + 0x2b0);
  pOVar8 = pOVar1;
  if (local_48 == pOVar1) {
LAB_0010087d:
    if (((pOVar8 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar1 = local_48, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    plVar3 = *(long **)(param_1 + 0x2b0);
    *(int *)(param_1 + 0x26c) = (int)param_3;
    if (plVar3 != (long *)0x0) {
      iVar6 = 4;
      (**(code **)(*plVar3 + 0x2d0))(plVar3,&_LC20,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC21,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC22,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),300);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC23,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC24,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x38);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))
                (*(long **)(param_1 + 0x2b0),1000000 / ((ulong)param_3 & 0xffffffff));
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),7000);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x10);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x2b0) + 0x1c8))();
      *(undefined8 *)(param_1 + 0x288) = uVar5;
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),1);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),*piVar9);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),piVar9[1]);
      do {
        (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC22,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x84);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC25,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC26,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x30);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC27,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC28,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),1);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))
                (*(long **)(param_1 + 0x2b0),(ulong)param_3 & 0xffffffff);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x2b0) + 0x1c8))();
      *(undefined8 *)(param_1 + 0x290) = uVar5;
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC29,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x28);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x28);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),*piVar9);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),piVar9[1]);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),1);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),0x18);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC28,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))
                (*(long **)(param_1 + 0x2b0),(*piVar9 * 3 + 3U & 0xfffffffc) * piVar9[1]);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC22,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x10);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC30,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC31,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),4);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x2b0) + 0x1c8))();
      *(undefined8 *)(param_1 + 0x298) = uVar5;
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      if (*(int *)(param_1 + 0x25c) - 1U < 3) {
        local_50 = *(int *)(param_1 + 0x25c) + 1;
        local_4c = local_50 * 2;
        local_50 = local_50 * 8;
      }
      else {
        local_50 = 8;
        local_4c = 2;
      }
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC22,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x54);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC25,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC26,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x30);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC32,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),local_50);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))
                (*(long **)(param_1 + 0x2b0),*(int *)(param_1 + 600) * local_50);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x2b0) + 0x1c8))();
      *(undefined8 *)(param_1 + 0x2a0) = uVar5;
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x3000);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0xffffffff);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),local_50);
      *(uint *)(param_1 + 0x274) =
           (*(uint *)(param_1 + 600) / *(uint *)(param_1 + 0x26c)) * local_50;
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC29,4);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0x10);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),1);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),local_4c);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))
                (*(long **)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 600));
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))
                (*(long **)(param_1 + 0x2b0),*(int *)(param_1 + 600) * local_50);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),local_50);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x270))(*(long **)(param_1 + 0x2b0),0x20);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC22,4);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x2b0) + 0x1c8))();
      *(undefined8 *)(param_1 + 0x2a8) = uVar5;
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x278))(*(long **)(param_1 + 0x2b0),0);
      (**(code **)(**(long **)(param_1 + 0x2b0) + 0x2d0))(*(long **)(param_1 + 0x2b0),&_LC33,4);
      uVar7 = 0;
      goto LAB_0010109e;
    }
  }
  else {
    *(Object **)(param_1 + 0x2b0) = local_48;
    if (local_48 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(param_1 + 0x2b0) = 0;
      }
      pOVar8 = local_48;
      if (pOVar1 != (Object *)0x0) goto LAB_00100868;
      goto LAB_0010087d;
    }
    if (pOVar1 != (Object *)0x0) {
LAB_00100868:
      cVar4 = RefCounted::unreference();
      pOVar8 = local_48;
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar1), pOVar8 = local_48, cVar4 != '\0'))
      {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        pOVar8 = local_48;
      }
      goto LAB_0010087d;
    }
    *(int *)(param_1 + 0x26c) = (int)param_3;
  }
  uVar7 = 0x13;
  _err_print_error("write_begin","servers/movie_writer/movie_writer_mjpeg.cpp",0x3f,
                   "Condition \"f.is_null()\" is true. Returning: ERR_CANT_OPEN",0,0);
LAB_0010109e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* MovieWriterMJPEG::MovieWriterMJPEG() */

void __thiscall MovieWriterMJPEG::MovieWriterMJPEG(MovieWriterMJPEG *this)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  float fVar3;
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
  this[0x1b8] = (MovieWriterMJPEG)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  StringName::StringName((StringName *)(this + 0x1c8),"_get_audio_speaker_mode",false);
  this[0x1d0] = (MovieWriterMJPEG)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  StringName::StringName((StringName *)(this + 0x1e0),"_handles_file",false);
  this[0x1e8] = (MovieWriterMJPEG)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  StringName::StringName((StringName *)(this + 0x1f8),"_get_supported_extensions",false);
  this[0x200] = (MovieWriterMJPEG)0x0;
  *(undefined8 *)(this + 0x208) = 0;
  StringName::StringName((StringName *)(this + 0x210),"_write_begin",false);
  this[0x218] = (MovieWriterMJPEG)0x0;
  *(undefined8 *)(this + 0x220) = 0;
  StringName::StringName((StringName *)(this + 0x228),"_write_frame",false);
  this[0x230] = (MovieWriterMJPEG)0x0;
  *(undefined8 *)(this + 0x238) = 0;
  StringName::StringName((StringName *)(this + 0x240),"_write_end",false);
  this[0x248] = (MovieWriterMJPEG)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00103490;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 600) = 48000;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0x3f400000;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined1 (*) [16])(this + 0x288) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x298) = (undefined1  [16])0x0;
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
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"editor/movie_writer/mjpeg_quality",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(this + 0x270) = fVar3;
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



/* MovieWriterMJPEG::write_frame(Ref<Image> const&, int const*) */

undefined8 __thiscall
MovieWriterMJPEG::write_frame(MovieWriterMJPEG *this,Ref *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_40;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x2b0) == 0) {
    _err_print_error("write_frame","servers/movie_writer/movie_writer_mjpeg.cpp",0xc2,
                     "Condition \"f.is_null()\" is true. Returning: ERR_UNCONFIGURED",0,0);
    uVar4 = 3;
    goto LAB_0010178d;
  }
  Image::save_jpg_to_buffer(*(float *)(this + 0x270));
  if (local_40 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(local_40 + -8);
  }
  (**(code **)(**(long **)(this + 0x2b0) + 0x2d0))(*(long **)(this + 0x2b0),&_LC1,4);
  if (local_40 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(local_40 + -8);
  }
  (**(code **)(**(long **)(this + 0x2b0) + 0x278))(*(long **)(this + 0x2b0),uVar5);
  if (local_40 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(local_40 + -8);
  }
  (**(code **)(**(long **)(this + 0x2b0) + 0x2d0))(*(long **)(this + 0x2b0),local_40,uVar4);
  if ((local_40 != 0) && ((*(byte *)(local_40 + -8) & 1) != 0)) {
    iVar7 = iVar7 + 1;
    (**(code **)(**(long **)(this + 0x2b0) + 0x268))(*(long **)(this + 0x2b0),0);
  }
  if (*(long *)(this + 0x280) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 0x280) + -8) + 1;
  }
  iVar3 = CowData<unsigned_int>::resize<false>((CowData<unsigned_int> *)(this + 0x280),lVar6);
  if (iVar3 == 0) {
    if (*(long *)(this + 0x280) == 0) {
      lVar8 = -1;
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 0x280) + -8);
      lVar8 = lVar6 + -1;
      if (-1 < lVar8) {
        CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int> *)(this + 0x280));
        *(int *)(*(long *)(this + 0x280) + lVar8 * 4) = iVar7;
        goto LAB_00101727;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar6,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00101727:
  (**(code **)(**(long **)(this + 0x2b0) + 0x2d0))(*(long **)(this + 0x2b0),&_LC7,4);
  (**(code **)(**(long **)(this + 0x2b0) + 0x278))
            (*(long **)(this + 0x2b0),*(undefined4 *)(this + 0x274));
  (**(code **)(**(long **)(this + 0x2b0) + 0x2d0))
            (*(long **)(this + 0x2b0),param_2,*(undefined4 *)(this + 0x274));
  *(int *)(this + 0x268) = *(int *)(this + 0x268) + 1;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  uVar4 = 0;
LAB_0010178d:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
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



/* MovieWriterMJPEG::is_class_ptr(void*) const */

uint __thiscall MovieWriterMJPEG::is_class_ptr(MovieWriterMJPEG *this,void *param_1)

{
  return (uint)CONCAT71(0x1036,(undefined4 *)param_1 == &MovieWriter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1036,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1036,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MovieWriterMJPEG::_getv(StringName const&, Variant&) const */

undefined8 MovieWriterMJPEG::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MovieWriterMJPEG::_setv(StringName const&, Variant const&) */

undefined8 MovieWriterMJPEG::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MovieWriterMJPEG::_validate_propertyv(PropertyInfo&) const */

void MovieWriterMJPEG::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MovieWriterMJPEG::_property_can_revertv(StringName const&) const */

undefined8 MovieWriterMJPEG::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MovieWriterMJPEG::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MovieWriterMJPEG::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MovieWriterMJPEG::_notificationv(int, bool) */

void MovieWriterMJPEG::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MovieWriterMJPEG::_get_class_namev() const */

undefined8 * MovieWriterMJPEG::_get_class_namev(void)

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
LAB_00101bb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101bb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MovieWriterMJPEG");
      goto LAB_00101c1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MovieWriterMJPEG");
LAB_00101c1e:
  return &_get_class_namev()::_class_name_static;
}



/* MovieWriterMJPEG::get_class() const */

void MovieWriterMJPEG::get_class(void)

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



/* MovieWriterMJPEG::_initialize_classv() */

void MovieWriterMJPEG::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00101e94;
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
LAB_00101f9e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_00101fae:
        MovieWriter::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00101f9e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_00101fae;
    }
    MovieWriter::initialize_class()::initialized = '\x01';
  }
  local_48 = "MovieWriter";
  local_58 = 0;
  local_40 = 0xb;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "MovieWriterMJPEG";
  local_60 = 0;
  local_40 = 0x10;
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
LAB_00101e94:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MovieWriterMJPEG::is_class(String const&) const */

undefined8 __thiscall MovieWriterMJPEG::is_class(MovieWriterMJPEG *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010208f;
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
LAB_0010208f:
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
    if (cVar6 != '\0') goto LAB_00102143;
  }
  cVar6 = String::operator==(param_1,"MovieWriterMJPEG");
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
              if (lVar5 == 0) goto LAB_0010221b;
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
LAB_0010221b:
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
      if (cVar6 != '\0') goto LAB_00102143;
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
                if (lVar5 == 0) goto LAB_001022fb;
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
LAB_001022fb:
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
        if (cVar6 != '\0') goto LAB_00102143;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001023a4;
    }
  }
LAB_00102143:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001023a4:
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
LAB_00102648:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102648;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102666;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102666:
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



/* MovieWriterMJPEG::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MovieWriterMJPEG::_get_property_listv(MovieWriterMJPEG *this,List *param_1,bool param_2)

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
  local_78 = "MovieWriterMJPEG";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MovieWriterMJPEG";
  local_98 = 0;
  local_70 = 0x10;
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
LAB_00102a48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102a48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102a65;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102a65:
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
  StringName::StringName((StringName *)&local_78,"MovieWriterMJPEG",false);
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
      if (StringName::configured == '\0') goto LAB_00102e17;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102e17;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102e17;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102e17;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102e17;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102e17;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
    }
  }
LAB_00102e17:
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



/* MovieWriterMJPEG::~MovieWriterMJPEG() */

void __thiscall MovieWriterMJPEG::~MovieWriterMJPEG(MovieWriterMJPEG *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00103490;
  if (*(long *)(this + 0x2b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x2b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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



/* MovieWriterMJPEG::~MovieWriterMJPEG() */

void __thiscall MovieWriterMJPEG::~MovieWriterMJPEG(MovieWriterMJPEG *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00103490;
  if (*(long *)(this + 0x2b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x2b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  operator_delete(this,0x2b8);
  return;
}



/* MovieWriter::~MovieWriter() */

void __thiscall MovieWriter::~MovieWriter(MovieWriter *this)

{
  ~MovieWriter(this);
  operator_delete(this,600);
  return;
}



/* CowData<unsigned int>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this,long param_1)

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
/* Error CowData<unsigned int>::resize<false>(long) */

undefined8 __thiscall CowData<unsigned_int>::resize<false>(CowData<unsigned_int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_001033f0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_001033f0;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00103301;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00103301:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Control flow encountered bad instruction data */
/* MovieWriterMJPEG::~MovieWriterMJPEG() */

void __thiscall MovieWriterMJPEG::~MovieWriterMJPEG(MovieWriterMJPEG *this)

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


