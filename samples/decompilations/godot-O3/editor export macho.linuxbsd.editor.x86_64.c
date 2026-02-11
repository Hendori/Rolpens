
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



/* MachO::seg_align(unsigned long, unsigned int, unsigned int) */

uint __thiscall MachO::seg_align(MachO *this,ulong param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    if ((param_1 & 1) == 0) {
      uVar1 = 1;
      do {
        uVar1 = uVar1 * 2;
        uVar2 = uVar2 + 1;
      } while ((param_1 & uVar1) == 0);
    }
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    if (uVar2 < param_2) {
      param_3 = param_2;
    }
  }
  return param_3;
}



/* MachO::alloc_signature(unsigned long) */

undefined8 MachO::alloc_signature(ulong param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(param_1 + 0x180) == (long *)0x0) {
    _err_print_error("alloc_signature","editor/export/macho.cpp",0x32,
                     "Condition \"fa.is_null()\" is true. Returning: false",
                     "MachO: File not opened.",0,0);
LAB_00100309:
    uVar6 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x1c0) == 0) {
      lVar1 = *(long *)(param_1 + 400);
      if ((lVar1 == 0) || (*(ulong *)(param_1 + 0x1a0) < lVar1 + 0x10U)) {
        _err_print_error("alloc_signature","editor/export/macho.cpp",0x38,
                         "Method/function failed. Returning: false",
                         "MachO: Can\'t allocate signature load command, please use \"codesign_allocate\" utility first."
                         ,0,0);
        goto LAB_00100309;
      }
      lVar2 = **(long **)(param_1 + 0x180);
      *(long *)(param_1 + 0x1c0) = lVar1;
      (**(code **)(lVar2 + 0x1b8))();
      local_28 = 0x1d;
      local_24 = (-(uint)(*(char *)(param_1 + 0x188) == '\0') & 0xf0000010) + 0x10000000;
      (**(code **)(**(long **)(param_1 + 0x180) + 0x2d0))(*(long **)(param_1 + 0x180),&local_28,8);
      iVar3 = (**(code **)(**(long **)(param_1 + 0x180) + 0x1d0))();
      uVar4 = (**(code **)(**(long **)(param_1 + 0x180) + 0x1d0))();
      uVar4 = (iVar3 - (uVar4 & 0xf)) + 0x10;
      if (*(char *)(param_1 + 0x188) != '\0') {
        uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
      }
      (**(code **)(**(long **)(param_1 + 0x180) + 0x278))(*(long **)(param_1 + 0x180),uVar4);
      (**(code **)(**(long **)(param_1 + 0x180) + 0x278))(*(long **)(param_1 + 0x180),0);
      (**(code **)(**(long **)(param_1 + 0x180) + 0x1b8))(*(long **)(param_1 + 0x180),0x10);
      uVar4 = (**(code **)(**(long **)(param_1 + 0x180) + 0x1f0))();
      uVar5 = (**(code **)(**(long **)(param_1 + 0x180) + 0x1f0))();
      if (*(char *)(param_1 + 0x188) == '\0') {
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 + 0x10;
      }
      else {
        uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) +
                1;
        uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) +
                0x10;
        uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
      }
      (**(code **)(**(long **)(param_1 + 0x180) + 0x1b8))(*(long **)(param_1 + 0x180),0x10);
      (**(code **)(**(long **)(param_1 + 0x180) + 0x278))(*(long **)(param_1 + 0x180),uVar4);
      (**(code **)(**(long **)(param_1 + 0x180) + 0x278))(*(long **)(param_1 + 0x180),uVar5);
      *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 0x10;
    }
    uVar6 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MachO::get_exe_base() */

undefined8 __thiscall MachO::get_exe_base(MachO *this)

{
  if (*(long *)(this + 0x180) != 0) {
    return *(undefined8 *)(this + 0x1a0);
  }
  _err_print_error("get_exe_base","editor/export/macho.cpp",0xfd,
                   "Condition \"fa.is_null()\" is true. Returning: 0","MachO: File not opened.",0,0)
  ;
  return 0;
}



/* MachO::get_exe_limit() */

undefined8 __thiscall MachO::get_exe_limit(MachO *this)

{
  if (*(long *)(this + 0x180) != 0) {
    return *(undefined8 *)(this + 0x198);
  }
  _err_print_error("get_exe_limit","editor/export/macho.cpp",0x102,
                   "Condition \"fa.is_null()\" is true. Returning: 0","MachO: File not opened.",0,0)
  ;
  return 0;
}



/* MachO::get_align() */

undefined4 __thiscall MachO::get_align(MachO *this)

{
  if (*(long *)(this + 0x180) != 0) {
    return *(undefined4 *)(this + 0x1a8);
  }
  _err_print_error("get_align","editor/export/macho.cpp",0x107,
                   "Condition \"fa.is_null()\" is true. Returning: 0","MachO: File not opened.",0,0)
  ;
  return 0;
}



/* MachO::get_cputype() */

undefined4 __thiscall MachO::get_cputype(MachO *this)

{
  if (*(long *)(this + 0x180) != 0) {
    return *(undefined4 *)(this + 0x1ac);
  }
  _err_print_error("get_cputype","editor/export/macho.cpp",0x10c,
                   "Condition \"fa.is_null()\" is true. Returning: 0","MachO: File not opened.",0,0)
  ;
  return 0;
}



/* MachO::get_cpusubtype() */

undefined4 __thiscall MachO::get_cpusubtype(MachO *this)

{
  if (*(long *)(this + 0x180) != 0) {
    return *(undefined4 *)(this + 0x1b0);
  }
  _err_print_error("get_cpusubtype","editor/export/macho.cpp",0x111,
                   "Condition \"fa.is_null()\" is true. Returning: 0","MachO: File not opened.",0,0)
  ;
  return 0;
}



/* MachO::get_size() */

undefined8 __thiscall MachO::get_size(MachO *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x180) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x180) + 0x1d0))();
    return uVar1;
  }
  _err_print_error("get_size","editor/export/macho.cpp",0x116,
                   "Condition \"fa.is_null()\" is true. Returning: 0","MachO: File not opened.",0,0)
  ;
  return 0;
}



/* MachO::get_signature_offset() */

uint __thiscall MachO::get_signature_offset(MachO *this)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = *(long **)(this + 0x180);
  if (plVar1 == (long *)0x0) {
    _err_print_error("get_signature_offset","editor/export/macho.cpp",0x11b,
                     "Condition \"fa.is_null()\" is true. Returning: 0","MachO: File not opened.",0,
                     0);
  }
  else {
    if (*(long *)(this + 0x1c0) != 0) {
      (**(code **)(*plVar1 + 0x1b8))(plVar1,*(long *)(this + 0x1c0) + 8);
      if (this[0x188] != (MachO)0x0) {
        uVar2 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
        return uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      }
      uVar2 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
      return uVar2;
    }
    _err_print_error("get_signature_offset","editor/export/macho.cpp",0x11c,
                     "Condition \"signature_offset == 0\" is true. Returning: 0",
                     "MachO: No signature load command.",0,0);
  }
  return 0;
}



/* MachO::get_code_limit() */

long __thiscall MachO::get_code_limit(MachO *this)

{
  uint uVar1;
  long lVar2;
  
  if (*(long **)(this + 0x180) == (long *)0x0) {
    _err_print_error("get_code_limit","editor/export/macho.cpp",0x127,
                     "Condition \"fa.is_null()\" is true. Returning: 0","MachO: File not opened.",0,
                     0);
    return 0;
  }
  if (*(long *)(this + 0x1c0) == 0) {
    lVar2 = (**(code **)(**(long **)(this + 0x180) + 0x1d0))();
    uVar1 = (**(code **)(**(long **)(this + 0x180) + 0x1d0))();
    return (lVar2 + 0x10) - (ulong)(uVar1 & 0xf);
  }
  lVar2 = get_signature_offset(this);
  return lVar2;
}



/* MachO::get_signature_size() */

uint __thiscall MachO::get_signature_size(MachO *this)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = *(long **)(this + 0x180);
  if (plVar1 == (long *)0x0) {
    _err_print_error("get_signature_size","editor/export/macho.cpp",0x131,
                     "Condition \"fa.is_null()\" is true. Returning: 0","MachO: File not opened.",0,
                     0);
  }
  else {
    if (*(long *)(this + 0x1c0) != 0) {
      (**(code **)(*plVar1 + 0x1b8))(plVar1,*(long *)(this + 0x1c0) + 0xc);
      if (this[0x188] != (MachO)0x0) {
        uVar2 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
        return uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      }
      uVar2 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
      return uVar2;
    }
    _err_print_error("get_signature_size","editor/export/macho.cpp",0x132,
                     "Condition \"signature_offset == 0\" is true. Returning: 0",
                     "MachO: No signature load command.",0,0);
  }
  return 0;
}



/* MachO::is_signed() */

uint __thiscall MachO::is_signed(MachO *this)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  plVar1 = *(long **)(this + 0x180);
  if (plVar1 == (long *)0x0) {
    _err_print_error("is_signed","editor/export/macho.cpp",0x13d,
                     "Condition \"fa.is_null()\" is true. Returning: false",
                     "MachO: File not opened.",0,0);
  }
  else if (*(long *)(this + 0x1c0) != 0) {
    pcVar2 = *(code **)(*plVar1 + 0x1b8);
    uVar6 = get_signature_offset(this);
    (*pcVar2)(plVar1,uVar6);
    iVar3 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
    if (iVar3 == -0x3ff32106) {
      (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
      uVar4 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
      if (uVar4 != 0) {
        uVar8 = 0;
        do {
          iVar3 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          uVar5 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          if (iVar3 == 0) {
            plVar1 = *(long **)(this + 0x180);
            pcVar2 = *(code **)(*plVar1 + 0x1b8);
            lVar7 = get_signature_offset(this);
            (*pcVar2)(plVar1,(ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                    | uVar5 << 0x18) + 0xc + lVar7);
            uVar4 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
            return (((uVar4 & 0xff00) << 8) >> 0x11 ^ 1) & 1;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18));
      }
    }
  }
  return 0;
}



/* MachO::get_file() const */

void MachO::get_file(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x180) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x180);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* MachO::get_file() */

void MachO::get_file(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x180) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x180);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* MachO::set_signature_size(unsigned long) */

undefined4 __thiscall MachO::set_signature_size(MachO *this,ulong param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  uint local_80;
  uint local_7c;
  undefined1 local_78 [20];
  uint local_64;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) == 0) {
    _err_print_error("set_signature_size","editor/export/macho.cpp",0x1e1,
                     "Condition \"fa.is_null()\" is true. Returning: false",
                     "MachO: File not opened.",0,0);
  }
  else if (*(long *)(this + 0x1b8) == 0) {
    _err_print_error("set_signature_size","editor/export/macho.cpp",0x1e4,
                     "Condition \"link_edit_offset == 0\" is true. Returning: false",
                     "MachO: No __LINKEDIT segment found.",0,0);
  }
  else {
    uVar3 = alloc_signature((ulong)this);
    if ((char)uVar3 != '\0') {
      uVar4 = get_signature_size(this);
      uVar9 = (param_1 & 0xffffffffffffc000) + 0x4000;
      if (uVar9 <= uVar4) {
        plVar1 = *(long **)(this + 0x180);
        pcVar2 = *(code **)(*plVar1 + 0x1b8);
        uVar6 = get_signature_offset(this);
        uVar9 = 0;
        (*pcVar2)(plVar1,uVar6);
        if (uVar4 != 0) {
          do {
            uVar9 = uVar9 + 1;
            (**(code **)(**(long **)(this + 0x180) + 0x268))(*(long **)(this + 0x180),0);
          } while (uVar4 != uVar9);
        }
        goto LAB_00100bab;
      }
      (**(code **)(**(long **)(this + 0x180) + 0x1b8))
                (*(long **)(this + 0x180),*(long *)(this + 0x1c0) + 0xc);
      lVar5 = **(long **)(this + 0x180);
      if (this[0x188] == (MachO)0x0) {
        (**(code **)(lVar5 + 0x278))();
      }
      else {
        uVar8 = (uint)uVar9;
        (**(code **)(lVar5 + 0x278))
                  (*(long **)(this + 0x180),
                   uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8);
      }
      lVar5 = get_signature_offset(this);
      lVar5 = lVar5 + uVar9;
      (**(code **)(**(long **)(this + 0x180) + 0x1b8))
                (*(long **)(this + 0x180),*(undefined8 *)(this + 0x1b8));
      (**(code **)(**(long **)(this + 0x180) + 0x220))(*(long **)(this + 0x180),&local_80,8);
      if (this[0x188] != (MachO)0x0) {
        local_80 = local_80 >> 0x18 | (local_80 & 0xff0000) >> 8 | (local_80 & 0xff00) << 8 |
                   local_80 << 0x18;
        local_7c = local_7c >> 0x18 | (local_7c & 0xff0000) >> 8 | (local_7c & 0xff00) << 8 |
                   local_7c << 0x18;
      }
      if (local_80 == 1) {
        (**(code **)(**(long **)(this + 0x180) + 0x220))(*(long **)(this + 0x180),local_78,0x30);
        if (this[0x188] == (MachO)0x0) {
          uVar7 = (int)lVar5 - (uint)local_60;
          local_64 = (uVar7 & 0xfffff000) + 0x1000;
        }
        else {
          local_60._0_4_ =
               (uint)local_60 >> 0x18 | ((uint)local_60 & 0xff0000) >> 8 |
               ((uint)local_60 & 0xff00) << 8 | (uint)local_60 << 0x18;
          uVar8 = (int)lVar5 - (uint)local_60;
          uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                  uVar8 * 0x1000000;
          uVar8 = (uVar8 & 0xfffff000) + 0x1000;
          local_64 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8;
        }
        local_60 = CONCAT44(uVar7,(uint)local_60);
        (**(code **)(**(long **)(this + 0x180) + 0x1b8))
                  (*(long **)(this + 0x180),*(long *)(this + 0x1b8) + 8);
        (**(code **)(**(long **)(this + 0x180) + 0x2d0))(*(long **)(this + 0x180),local_78,0x30);
      }
      else {
        if (local_80 != 0x19) {
          _err_print_error("set_signature_size","editor/export/macho.cpp",0x22c,
                           "Method/function failed. Returning: false",
                           "MachO: Invalid __LINKEDIT segment type.",0,0);
          goto LAB_00100c11;
        }
        (**(code **)(**(long **)(this + 0x180) + 0x220))(*(long **)(this + 0x180),local_78,0x40);
        if (this[0x188] == (MachO)0x0) {
          local_50 = lVar5 - local_58;
          local_60 = (local_50 & 0xfffffffffffff000) + 0x1000;
        }
        else {
          local_58 = local_58 >> 0x38 | (local_58 & 0xff000000000000) >> 0x28 |
                     (local_58 & 0xff0000000000) >> 0x18 | (local_58 & 0xff00000000) >> 8 |
                     (local_58 & 0xff000000) << 8 | (local_58 & 0xff0000) << 0x18 |
                     (local_58 & 0xff00) << 0x28 | local_58 << 0x38;
          uVar4 = lVar5 - local_58;
          local_50 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                     (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                     (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                     (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
          uVar4 = (uVar4 & 0xfffffffffffff000) + 0x1000;
          local_60 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                     (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                     (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                     (uVar4 & 0xff00) << 0x28;
        }
        (**(code **)(**(long **)(this + 0x180) + 0x1b8))
                  (*(long **)(this + 0x180),*(long *)(this + 0x1b8) + 8);
        (**(code **)(**(long **)(this + 0x180) + 0x2d0))(*(long **)(this + 0x180),local_78,0x40);
      }
      plVar1 = *(long **)(this + 0x180);
      pcVar2 = *(code **)(*plVar1 + 0x1b8);
      uVar6 = get_signature_offset(this);
      uVar4 = 0;
      (*pcVar2)(plVar1,uVar6);
      do {
        uVar4 = uVar4 + 1;
        (**(code **)(**(long **)(this + 0x180) + 0x268))(*(long **)(this + 0x180),0);
      } while (uVar9 != uVar4);
      goto LAB_00100bab;
    }
    _err_print_error("set_signature_size","editor/export/macho.cpp",0x1e5,
                     "Condition \"!alloc_signature(p_size)\" is true. Returning: false",
                     "MachO: Can\'t allocate signature load command.",0,0);
  }
LAB_00100c11:
  uVar3 = 0;
LAB_00100bab:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* MachO::is_macho(String const&) */

ulong MachO::is_macho(String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  Object *local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_50,(int)param_1,(Error *)0x1);
  if (local_50 == (Object *)0x0) {
    local_40 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)param_1);
    local_38 = "MachO: Can\'t open file: \"%s\".";
    local_48 = 0;
    local_30 = 0x1d;
    String::parse_latin1((StrRange *)&local_48);
    vformat<String>(&local_38,(StrRange *)&local_48,(CowData<char32_t> *)&local_40);
    _err_print_error("is_macho","editor/export/macho.cpp",0x69,
                     "Condition \"fb.is_null()\" is true. Returning: false",&local_38,0);
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
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uVar6 = 0;
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        goto LAB_00100e50;
      }
    }
    uVar6 = 0;
  }
  else {
    auVar7 = (**(code **)(*(long *)local_50 + 0x1f0))();
    iVar5 = auVar7._0_4_;
    uVar6 = CONCAT71(auVar7._9_7_,iVar5 == -0x31051202 || iVar5 == -0x1120532) & 0xffffffff;
    if (iVar5 != -0x31051202 && iVar5 != -0x1120532) {
      uVar6 = (ulong)((uint)CONCAT71(auVar7._9_7_,iVar5 == -0x30051202) |
                     (uint)CONCAT71(auVar7._1_7_,iVar5 == -0x1120531));
    }
  }
LAB_00100e50:
  if (local_50 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_50);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_50 + 0x140))(local_50);
        Memory::free_static(local_50,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MachO::get_filetype(String const&) */

undefined4 MachO::get_filetype(String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  Object *local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_50,(int)param_1,(Error *)0x1);
  if (local_50 == (Object *)0x0) {
    local_40 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)param_1);
    local_38 = "MachO: Can\'t open file: \"%s\".";
    local_48 = 0;
    local_30 = 0x1d;
    String::parse_latin1((StrRange *)&local_48);
    vformat<String>(&local_38,(StrRange *)&local_48,(CowData<char32_t> *)&local_40);
    pcVar5 = "Condition \"fa.is_null()\" is true. Returning: 0";
    uVar6 = 0x70;
LAB_00101172:
    _err_print_error("get_filetype","editor/export/macho.cpp",uVar6,pcVar5,&local_38,0,0);
    pcVar5 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
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
    uVar7 = 0;
  }
  else {
    iVar4 = (**(code **)(*(long *)local_50 + 0x1f0))();
    if ((iVar4 == -0x31051202) || (iVar4 == -0x1120532)) {
      (**(code **)(*(long *)local_50 + 0x220))(local_50,&local_38,0x18);
    }
    else {
      if ((iVar4 != -0x30051202) && (iVar4 != -0x1120531)) {
        local_40 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)param_1);
        local_38 = "MachO: File is not a valid MachO binary: \"%s\".";
        local_48 = 0;
        local_30 = 0x2e;
        String::parse_latin1((StrRange *)&local_48);
        vformat<String>(&local_38,(StrRange *)&local_48,(CowData<char32_t> *)&local_40);
        pcVar5 = "Method/function failed. Returning: 0";
        uVar6 = 0x7d;
        goto LAB_00101172;
      }
      (**(code **)(*(long *)local_50 + 0x220))(local_50,&local_38,0x18);
      (**(code **)(*(long *)local_50 + 0x1f0))();
    }
    uVar7 = (undefined4)local_30;
  }
  if (local_50 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_50);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_50 + 0x140))(local_50);
        Memory::free_static(local_50,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MachO::open_file(String const&) */

undefined8 __thiscall MachO::open_file(MachO *this,String *param_1)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  Object *pOVar14;
  long in_FS_OFFSET;
  long local_118;
  undefined8 local_110;
  char *local_108;
  size_t local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  char local_d8 [16];
  undefined8 local_c8;
  ulong local_c0;
  uint local_b0;
  uint local_a0;
  char local_98 [40];
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_f8,(int)param_1,(Error *)0x3);
  pOVar2 = *(Object **)(this + 0x180);
  pOVar14 = pOVar2;
  if ((Object *)local_f8 == pOVar2) {
LAB_00101361:
    if (((pOVar14 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar2 = (Object *)local_f8, cVar4 != '\0')) &&
       (cVar4 = predelete_handler((Object *)local_f8), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    if (*(long **)(this + 0x180) == (long *)0x0) goto LAB_00101401;
    uVar5 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
    this[0x188] = (MachO)((uVar5 & 0xfeffffff) == 0xcefaedfe);
    if ((uVar5 != 0xcefaedfe) && (uVar5 != 0xfeedface)) {
      if ((uVar5 == 0xcffaedfe) || (uVar5 == 0xfeedfacf)) {
        (**(code **)(**(long **)(this + 0x180) + 0x220))
                  (*(long **)(this + 0x180),(String *)&local_f8,0x18);
        (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
        goto LAB_00101528;
      }
      local_108 = (char *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)param_1);
      local_f8 = "MachO: File is not a valid MachO binary: \"%s\".";
      local_110 = 0;
      local_f0 = 0x2e;
      String::parse_latin1((StrRange *)&local_110);
      vformat<String>((String *)&local_f8,(StrRange *)&local_110,(CowData<char32_t> *)&local_108);
      pcVar11 = "Method/function failed. Returning: false";
      uVar8 = 0x92;
      goto LAB_0010146e;
    }
    (**(code **)(**(long **)(this + 0x180) + 0x220))
              (*(long **)(this + 0x180),(String *)&local_f8,0x18);
LAB_00101528:
    uVar5 = local_f0._4_4_;
    uVar10 = local_f8._4_4_;
    uVar12 = (uint)local_f8;
    if (this[0x188] != (MachO)0x0) {
      uVar5 = local_f0._4_4_ >> 0x18 | (local_f0._4_4_ & 0xff0000) >> 8 |
              (local_f0._4_4_ & 0xff00) << 8 | local_f0._4_4_ << 0x18;
      uVar10 = local_f8._4_4_ >> 0x18 | (local_f8._4_4_ & 0xff0000) >> 8 |
               (local_f8._4_4_ & 0xff00) << 8 | local_f8._4_4_ << 0x18;
      uVar12 = (uint)local_f8 >> 0x18 | ((uint)local_f8 & 0xff0000) >> 8 |
               ((uint)local_f8 & 0xff00) << 8 | (uint)local_f8 << 0x18;
      local_f0 = CONCAT44(uVar5,(undefined4)local_f0);
      local_f8 = (char *)CONCAT44(uVar10,uVar12);
    }
    *(uint *)(this + 0x1b0) = uVar10;
    uVar10 = 0;
    *(uint *)(this + 0x1ac) = uVar12;
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined8 *)(this + 0x1a0) = 0xffffffffffffffff;
    *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
    if (uVar5 != 0) {
      do {
        (**(code **)(**(long **)(this + 0x180) + 0x220))
                  (*(long **)(this + 0x180),(CowData<char32_t> *)&local_110,8);
        if (this[0x188] != (MachO)0x0) {
          local_110 = CONCAT44(local_110._4_4_ >> 0x18 | (local_110._4_4_ & 0xff0000) >> 8 |
                               (local_110._4_4_ & 0xff00) << 8 | local_110._4_4_ << 0x18,
                               (uint)local_110 >> 0x18 | ((uint)local_110 & 0xff0000) >> 8 |
                               ((uint)local_110 & 0xff00) << 8 | (uint)local_110 << 0x18);
        }
        lVar7 = (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
        if ((uint)local_110 == 0x19) {
          (**(code **)(**(long **)(this + 0x180) + 0x220))(*(long **)(this + 0x180),local_d8,0x40);
          if (this[0x188] != (MachO)0x0) {
            local_a0 = local_a0 >> 0x18 | (local_a0 & 0xff0000) >> 8 | (local_a0 & 0xff00) << 8 |
                       local_a0 << 0x18;
            local_c8 = local_c8 >> 0x38 | (local_c8 & 0xff000000000000) >> 0x28 |
                       (local_c8 & 0xff0000000000) >> 0x18 | (local_c8 & 0xff00000000) >> 8 |
                       (local_c8 & 0xff000000) << 8 | (local_c8 & 0xff0000) << 0x18 |
                       (local_c8 & 0xff00) << 0x28 | local_c8 << 0x38;
            local_c0 = local_c0 >> 0x38 | (local_c0 & 0xff000000000000) >> 0x28 |
                       (local_c0 & 0xff0000000000) >> 0x18 | (local_c0 & 0xff00000000) >> 8 |
                       (local_c0 & 0xff000000) << 8 | (local_c0 & 0xff0000) << 0x18 |
                       (local_c0 & 0xff00) << 0x28 | local_c0 << 0x38;
          }
          uVar5 = 0xf;
          if (local_c8 != 0) {
            if ((local_c8 & 1) == 0) {
              uVar5 = 0;
              uVar13 = 1;
              do {
                uVar13 = uVar13 * 2;
                uVar5 = uVar5 + 1;
              } while ((uVar13 & local_c8) == 0);
              if (0xf < uVar5) {
                uVar5 = 0xf;
              }
              if (uVar5 < 3) {
                uVar5 = 3;
              }
            }
            else {
              uVar5 = 3;
            }
          }
          local_118 = 0;
          uVar12 = *(uint *)(this + 0x1a8);
          if (*(uint *)(this + 0x1a8) < uVar5) {
            uVar12 = uVar5;
          }
          *(uint *)(this + 0x1a8) = uVar12;
          local_100 = strlen(local_d8);
          local_108 = local_d8;
          String::parse_latin1((StrRange *)&local_118);
          cVar4 = String::operator==((String *)&local_118,"__TEXT");
          lVar3 = local_118;
          if (local_118 != 0) {
            LOCK();
            plVar1 = (long *)(local_118 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_118 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (cVar4 == '\0') {
LAB_00101703:
            local_118 = 0;
            local_100 = strlen(local_d8);
            local_108 = local_d8;
            String::parse_latin1((StrRange *)&local_118);
            cVar4 = String::operator==((String *)&local_118,"__LINKEDIT");
            lVar3 = local_118;
            if (local_118 != 0) {
              LOCK();
              plVar1 = (long *)(local_118 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_118 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (cVar4 != '\0') {
              *(long *)(this + 0x1b8) = lVar7 + -8;
            }
          }
          else {
            uVar13 = *(ulong *)(this + 0x198);
            if (*(ulong *)(this + 0x198) < local_c0) {
              uVar13 = local_c0;
            }
            uVar5 = 0;
            *(ulong *)(this + 0x198) = uVar13;
            if (local_a0 != 0) {
              do {
                while( true ) {
                  (**(code **)(**(long **)(this + 0x180) + 0x220))
                            (*(long **)(this + 0x180),local_98,0x50);
                  local_118 = 0;
                  local_100 = strlen(local_98);
                  local_108 = local_98;
                  String::parse_latin1((StrRange *)&local_118);
                  cVar4 = String::operator==((String *)&local_118,"__text");
                  lVar3 = local_118;
                  if (local_118 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_118 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_118 = 0;
                      Memory::free_static((void *)(lVar3 + -0x10),false);
                    }
                  }
                  if (cVar4 != '\0') break;
LAB_00101990:
                  uVar5 = uVar5 + 1;
                  if (local_a0 <= uVar5) goto LAB_00101780;
                }
                uVar13 = *(ulong *)(this + 0x1a0);
                uVar12 = *(uint *)(this + 0x1a8);
                if (this[0x188] != (MachO)0x0) {
                  uVar9 = (ulong)(local_68 >> 0x18 | (local_68 & 0xff0000) >> 8 |
                                  (local_68 & 0xff00) << 8 | local_68 << 0x18);
                  uVar6 = local_64 >> 0x18 | (local_64 & 0xff0000) >> 8 | (local_64 & 0xff00) << 8 |
                          local_64 << 0x18;
                  if (uVar13 < uVar9) {
                    uVar9 = uVar13;
                  }
                  if (uVar6 < uVar12) {
                    uVar6 = uVar12;
                  }
                  *(ulong *)(this + 0x1a0) = uVar9;
                  *(uint *)(this + 0x1a8) = uVar6;
                  goto LAB_00101990;
                }
                uVar9 = (ulong)local_68;
                if (uVar13 < local_68) {
                  uVar9 = uVar13;
                }
                uVar6 = local_64;
                if (local_64 < uVar12) {
                  uVar6 = uVar12;
                }
                uVar5 = uVar5 + 1;
                *(ulong *)(this + 0x1a0) = uVar9;
                *(uint *)(this + 0x1a8) = uVar6;
              } while (uVar5 < local_a0);
            }
          }
        }
        else if ((uint)local_110 == 0x1d) {
          *(long *)(this + 0x1c0) = lVar7 + -8;
        }
        else if ((uint)local_110 == 1) {
          (**(code **)(**(long **)(this + 0x180) + 0x220))(*(long **)(this + 0x180),local_d8,0x30);
          uVar5 = (uint)local_c8;
          if (this[0x188] != (MachO)0x0) {
            local_b0 = local_b0 >> 0x18 | (local_b0 & 0xff0000) >> 8 | (local_b0 & 0xff00) << 8 |
                       local_b0 << 0x18;
            uVar5 = (uint)local_c8 >> 0x18 | ((uint)local_c8 & 0xff0000) >> 8 |
                    ((uint)local_c8 & 0xff00) << 8 | (uint)local_c8 << 0x18;
            local_c8 = CONCAT44(local_c8._4_4_ >> 0x18 | (local_c8._4_4_ & 0xff0000) >> 8 |
                                (local_c8._4_4_ & 0xff00) << 8 | local_c8._4_4_ << 0x18,uVar5);
          }
          uVar12 = 0xf;
          if (uVar5 != 0) {
            if ((uVar5 & 1) == 0) {
              uVar12 = 1;
              uVar6 = 0;
              do {
                uVar12 = uVar12 * 2;
                uVar6 = uVar6 + 1;
              } while ((uVar5 & uVar12) == 0);
              uVar12 = 0xf;
              if (uVar6 < 0x10) {
                uVar12 = uVar6;
              }
              if (uVar12 < 2) {
                uVar12 = 2;
              }
            }
            else {
              uVar12 = 2;
            }
          }
          local_118 = 0;
          uVar5 = *(uint *)(this + 0x1a8);
          if (*(uint *)(this + 0x1a8) < uVar12) {
            uVar5 = uVar12;
          }
          *(uint *)(this + 0x1a8) = uVar5;
          local_100 = strlen(local_d8);
          local_108 = local_d8;
          String::parse_latin1((StrRange *)&local_118);
          cVar4 = String::operator==((String *)&local_118,"__TEXT");
          lVar3 = local_118;
          if (local_118 != 0) {
            LOCK();
            plVar1 = (long *)(local_118 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_118 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (cVar4 == '\0') goto LAB_00101703;
          uVar13 = local_c8 >> 0x20;
          if (local_c8 >> 0x20 < *(ulong *)(this + 0x198)) {
            uVar13 = *(ulong *)(this + 0x198);
          }
          uVar5 = 0;
          *(ulong *)(this + 0x198) = uVar13;
          if (local_b0 != 0) {
            do {
              (**(code **)(**(long **)(this + 0x180) + 0x220))
                        (*(long **)(this + 0x180),local_98,0x44);
              local_118 = 0;
              local_100 = strlen(local_98);
              local_108 = local_98;
              String::parse_latin1((StrRange *)&local_118);
              cVar4 = String::operator==((String *)&local_118,"__text");
              lVar3 = local_118;
              if (local_118 != 0) {
                LOCK();
                plVar1 = (long *)(local_118 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_118 = 0;
                  Memory::free_static((void *)(lVar3 + -0x10),false);
                }
              }
              if (cVar4 == '\0') {
                if (this[0x188] != (MachO)0x0) goto LAB_00101ba0;
LAB_00101c61:
                uVar12 = local_6c;
                if (local_6c < *(uint *)(this + 0x1a8)) {
                  uVar12 = *(uint *)(this + 0x1a8);
                }
              }
              else {
                uVar13 = *(ulong *)(this + 0x1a0);
                if (this[0x188] == (MachO)0x0) {
                  uVar9 = (ulong)local_70;
                  if (uVar13 < local_70) {
                    uVar9 = uVar13;
                  }
                  *(ulong *)(this + 0x1a0) = uVar9;
                  goto LAB_00101c61;
                }
                uVar9 = (ulong)(local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 |
                                (local_70 & 0xff00) << 8 | local_70 << 0x18);
                if (uVar13 < uVar9) {
                  uVar9 = uVar13;
                }
                *(ulong *)(this + 0x1a0) = uVar9;
LAB_00101ba0:
                uVar12 = local_6c >> 0x18 | (local_6c & 0xff0000) >> 8 | (local_6c & 0xff00) << 8 |
                         local_6c << 0x18;
                if (uVar12 < *(uint *)(this + 0x1a8)) {
                  uVar12 = *(uint *)(this + 0x1a8);
                }
              }
              *(uint *)(this + 0x1a8) = uVar12;
              uVar5 = uVar5 + 1;
            } while (uVar5 < local_b0);
          }
        }
LAB_00101780:
        uVar10 = uVar10 + 1;
        (**(code **)(**(long **)(this + 0x180) + 0x1b8))
                  (*(long **)(this + 0x180),lVar7 + -8 + (local_110 >> 0x20));
        lVar7 = lVar7 + -8 + (local_110 >> 0x20);
        *(long *)(this + 400) = lVar7;
      } while (uVar10 < local_f0._4_4_);
      if ((*(long *)(this + 0x198) != 0) && (lVar7 != 0)) {
        uVar8 = 1;
        goto LAB_001017dc;
      }
    }
    local_110 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)param_1);
    local_108 = "MachO: No load commands or executable code found: \"%s\".";
    local_118 = 0;
    local_100 = 0x37;
    String::parse_latin1((StrRange *)&local_118);
    vformat<String>(&local_108,(StrRange *)&local_118,(CowData<char32_t> *)&local_110);
    _err_print_error("open_file","editor/export/macho.cpp",0xf6,
                     "Method/function failed. Returning: false",&local_108,0,0);
    pcVar11 = local_108;
    if (local_108 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_108 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_108 = (char *)0x0;
        Memory::free_static(pcVar11 + -0x10,false);
      }
    }
    lVar7 = local_118;
    if (local_118 != 0) {
      LOCK();
      plVar1 = (long *)(local_118 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_118 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar13 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(uVar13 - 0x10),false);
        uVar8 = 0;
        goto LAB_001017dc;
      }
    }
  }
  else {
    *(char **)(this + 0x180) = local_f8;
    if ((Object *)local_f8 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x180) = 0;
      }
      pOVar14 = (Object *)local_f8;
      if (pOVar2 != (Object *)0x0) goto LAB_0010134c;
      goto LAB_00101361;
    }
    if (pOVar2 != (Object *)0x0) {
LAB_0010134c:
      cVar4 = RefCounted::unreference();
      pOVar14 = (Object *)local_f8;
      if ((cVar4 != '\0') &&
         (cVar4 = predelete_handler(pOVar2), pOVar14 = (Object *)local_f8, cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
        pOVar14 = (Object *)local_f8;
      }
      goto LAB_00101361;
    }
LAB_00101401:
    local_108 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)param_1);
    local_f8 = "MachO: Can\'t open file: \"%s\".";
    local_110 = 0;
    local_f0 = 0x1d;
    String::parse_latin1((StrRange *)&local_110);
    vformat<String>((String *)&local_f8,(StrRange *)&local_110,(CowData<char32_t> *)&local_108);
    pcVar11 = "Condition \"fa.is_null()\" is true. Returning: false";
    uVar8 = 0x84;
LAB_0010146e:
    _err_print_error("open_file","editor/export/macho.cpp",uVar8,pcVar11,(String *)&local_f8,0,0);
    pOVar2 = (Object *)local_f8;
    if ((Object *)local_f8 != (Object *)0x0) {
      LOCK();
      pOVar14 = (Object *)local_f8 + -0x10;
      *(long *)pOVar14 = *(long *)pOVar14 + -1;
      UNLOCK();
      if (*(long *)pOVar14 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pOVar2 + -0x10,false);
      }
    }
    uVar13 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(uVar13 - 0x10),false);
      }
    }
    pcVar11 = local_108;
    if (local_108 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_108 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_108 = (char *)0x0;
        Memory::free_static(pcVar11 + -0x10,false);
      }
    }
  }
  uVar8 = 0;
LAB_001017dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
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
LAB_00102086:
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
    if (lVar10 == 0) goto LAB_00102086;
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
    FUN_00102c04();
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
      goto LAB_00101fdc;
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
LAB_00101fdc:
  puVar8[-1] = param_1;
  return;
}



/* MachO::get_requirements() */

void MachO::get_requirements(void)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  MachO *in_RSI;
  long in_RDI;
  uint uVar10;
  long in_FS_OFFSET;
  undefined8 local_50 [2];
  long local_40;
  
  plVar1 = *(long **)(in_RSI + 0x180);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
    _err_print_error("get_requirements","editor/export/macho.cpp",0x1b8,
                     "Condition \"fa.is_null()\" is true. Returning: PackedByteArray()",
                     "MachO: File not opened.",0,0);
    *(undefined8 *)(in_RDI + 8) = 0;
  }
  else {
    if (*(long *)(in_RSI + 0x1c0) != 0) {
      pcVar2 = *(code **)(*plVar1 + 0x1b8);
      uVar6 = get_signature_offset(in_RSI);
      (*pcVar2)(plVar1,uVar6);
      iVar3 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
      if (iVar3 == -0x3ff32106) {
        (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
        uVar4 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
        if (uVar4 != 0) {
          uVar10 = 0;
          do {
            (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            uVar5 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            uVar8 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                           uVar5 << 0x18);
            uVar6 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1c8))();
            plVar1 = *(long **)(in_RSI + 0x180);
            pcVar2 = *(code **)(*plVar1 + 0x1b8);
            lVar7 = get_signature_offset(in_RSI);
            (*pcVar2)(plVar1,lVar7 + uVar8);
            iVar3 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            uVar5 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            if (iVar3 == 0x10cdefa) {
              plVar1 = *(long **)(in_RSI + 0x180);
              local_50[0] = 0;
              pcVar2 = *(code **)(*plVar1 + 0x1b8);
              lVar7 = get_signature_offset(in_RSI);
              uVar9 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                             uVar5 << 0x18);
              (*pcVar2)(plVar1,uVar8 + lVar7);
              CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,uVar9);
              plVar1 = *(long **)(in_RSI + 0x180);
              pcVar2 = *(code **)(*plVar1 + 0x220);
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
              uVar6 = local_50[0];
              (*pcVar2)(plVar1,local_50[0],uVar9);
              *(undefined8 *)(in_RDI + 8) = uVar6;
              goto LAB_0010212a;
            }
            uVar10 = uVar10 + 1;
            (**(code **)(**(long **)(in_RSI + 0x180) + 0x1b8))(*(long **)(in_RSI + 0x180),uVar6);
          } while (uVar10 < (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                            uVar4 << 0x18));
        }
      }
    }
    *(undefined8 *)(in_RDI + 8) = 0;
  }
LAB_0010212a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MachO::get_cdhash_sha256() */

void MachO::get_cdhash_sha256(void)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  MachO *in_RSI;
  long in_RDI;
  uint uVar12;
  long in_FS_OFFSET;
  SHA256Context local_70 [16];
  undefined8 local_60 [2];
  ulong local_50 [2];
  long local_40;
  
  plVar1 = *(long **)(in_RSI + 0x180);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
    _err_print_error("get_cdhash_sha256","editor/export/macho.cpp",0x189,
                     "Condition \"fa.is_null()\" is true. Returning: PackedByteArray()",
                     "MachO: File not opened.",0,0);
    *(undefined8 *)(in_RDI + 8) = 0;
  }
  else {
    if (*(long *)(in_RSI + 0x1c0) != 0) {
      pcVar2 = *(code **)(*plVar1 + 0x1b8);
      uVar9 = get_signature_offset(in_RSI);
      (*pcVar2)(plVar1,uVar9);
      iVar6 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
      if (iVar6 == -0x3ff32106) {
        uVar12 = 0;
        (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
        uVar7 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
        if (uVar7 != 0) {
          do {
            (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            uVar8 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            uVar11 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18);
            uVar9 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1c8))();
            plVar1 = *(long **)(in_RSI + 0x180);
            pcVar2 = *(code **)(*plVar1 + 0x1b8);
            lVar10 = get_signature_offset(in_RSI);
            (*pcVar2)(plVar1,lVar10 + uVar11);
            iVar6 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            uVar8 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            if (iVar6 == 0x20cdefa) {
              plVar1 = *(long **)(in_RSI + 0x180);
              pcVar2 = *(code **)(*plVar1 + 0x1b8);
              lVar10 = get_signature_offset(in_RSI);
              (*pcVar2)(plVar1,uVar11 + 0x24 + lVar10);
              cVar4 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1e0))();
              cVar5 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1e0))();
              if ((cVar4 == ' ') && (cVar5 == '\x02')) {
                local_60[0] = 0;
                CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_60,0x20);
                plVar1 = *(long **)(in_RSI + 0x180);
                pcVar2 = *(code **)(*plVar1 + 0x1b8);
                lVar10 = get_signature_offset(in_RSI);
                (*pcVar2)(plVar1,uVar11 + lVar10);
                uVar11 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                                uVar8 << 0x18);
                local_50[0] = 0;
                CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,uVar11);
                plVar1 = *(long **)(in_RSI + 0x180);
                pcVar2 = *(code **)(*plVar1 + 0x220);
                CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
                uVar3 = local_50[0];
                (*pcVar2)(plVar1,local_50[0],uVar11);
                CryptoCore::SHA256Context::SHA256Context(local_70);
                CryptoCore::SHA256Context::start();
                if (uVar3 == 0) {
                  CryptoCore::SHA256Context::update((uchar *)local_70,0);
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_60);
                  uVar9 = local_60[0];
                  CryptoCore::SHA256Context::finish((uchar *)local_70);
                  *(undefined8 *)(in_RDI + 8) = uVar9;
                  CryptoCore::SHA256Context::~SHA256Context(local_70);
                }
                else {
                  CryptoCore::SHA256Context::update((uchar *)local_70,uVar3);
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_60);
                  uVar9 = local_60[0];
                  CryptoCore::SHA256Context::finish((uchar *)local_70);
                  *(undefined8 *)(in_RDI + 8) = uVar9;
                  local_60[0] = 0;
                  CryptoCore::SHA256Context::~SHA256Context(local_70);
                  LOCK();
                  plVar1 = (long *)(uVar3 - 0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_50[0] - 0x10),false);
                  }
                }
                goto LAB_0010238a;
              }
            }
            uVar12 = uVar12 + 1;
            (**(code **)(**(long **)(in_RSI + 0x180) + 0x1b8))(*(long **)(in_RSI + 0x180),uVar9);
          } while (uVar12 < (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                            uVar7 << 0x18));
        }
      }
    }
    *(undefined8 *)(in_RDI + 8) = 0;
  }
LAB_0010238a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MachO::get_cdhash_sha1() */

void MachO::get_cdhash_sha1(void)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  MachO *in_RSI;
  long in_RDI;
  uint uVar12;
  long in_FS_OFFSET;
  SHA1Context local_70 [16];
  undefined8 local_60 [2];
  ulong local_50 [2];
  long local_40;
  
  plVar1 = *(long **)(in_RSI + 0x180);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
    _err_print_error("get_cdhash_sha1","editor/export/macho.cpp",0x15a,
                     "Condition \"fa.is_null()\" is true. Returning: PackedByteArray()",
                     "MachO: File not opened.",0,0);
    *(undefined8 *)(in_RDI + 8) = 0;
  }
  else {
    if (*(long *)(in_RSI + 0x1c0) != 0) {
      pcVar2 = *(code **)(*plVar1 + 0x1b8);
      uVar9 = get_signature_offset(in_RSI);
      (*pcVar2)(plVar1,uVar9);
      iVar6 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
      if (iVar6 == -0x3ff32106) {
        uVar12 = 0;
        (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
        uVar7 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
        if (uVar7 != 0) {
          do {
            (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            uVar8 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            uVar11 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18);
            uVar9 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1c8))();
            plVar1 = *(long **)(in_RSI + 0x180);
            pcVar2 = *(code **)(*plVar1 + 0x1b8);
            lVar10 = get_signature_offset(in_RSI);
            (*pcVar2)(plVar1,lVar10 + uVar11);
            iVar6 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            uVar8 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1f0))();
            if (iVar6 == 0x20cdefa) {
              plVar1 = *(long **)(in_RSI + 0x180);
              pcVar2 = *(code **)(*plVar1 + 0x1b8);
              lVar10 = get_signature_offset(in_RSI);
              (*pcVar2)(plVar1,uVar11 + 0x24 + lVar10);
              cVar4 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1e0))();
              cVar5 = (**(code **)(**(long **)(in_RSI + 0x180) + 0x1e0))();
              if ((cVar4 == '\x14') && (cVar5 == '\x01')) {
                local_60[0] = 0;
                CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_60,0x14);
                plVar1 = *(long **)(in_RSI + 0x180);
                pcVar2 = *(code **)(*plVar1 + 0x1b8);
                lVar10 = get_signature_offset(in_RSI);
                (*pcVar2)(plVar1,uVar11 + lVar10);
                uVar11 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                                uVar8 << 0x18);
                local_50[0] = 0;
                CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,uVar11);
                plVar1 = *(long **)(in_RSI + 0x180);
                pcVar2 = *(code **)(*plVar1 + 0x220);
                CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
                uVar3 = local_50[0];
                (*pcVar2)(plVar1,local_50[0],uVar11);
                CryptoCore::SHA1Context::SHA1Context(local_70);
                CryptoCore::SHA1Context::start();
                if (uVar3 == 0) {
                  CryptoCore::SHA1Context::update((uchar *)local_70,0);
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_60);
                  uVar9 = local_60[0];
                  CryptoCore::SHA1Context::finish((uchar *)local_70);
                  *(undefined8 *)(in_RDI + 8) = uVar9;
                  CryptoCore::SHA1Context::~SHA1Context(local_70);
                }
                else {
                  CryptoCore::SHA1Context::update((uchar *)local_70,uVar3);
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_60);
                  uVar9 = local_60[0];
                  CryptoCore::SHA1Context::finish((uchar *)local_70);
                  *(undefined8 *)(in_RDI + 8) = uVar9;
                  local_60[0] = 0;
                  CryptoCore::SHA1Context::~SHA1Context(local_70);
                  LOCK();
                  plVar1 = (long *)(uVar3 - 0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_50[0] - 0x10),false);
                  }
                }
                goto LAB_0010270a;
              }
            }
            uVar12 = uVar12 + 1;
            (**(code **)(**(long **)(in_RSI + 0x180) + 0x1b8))(*(long **)(in_RSI + 0x180),uVar9);
          } while (uVar12 < (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                            uVar7 << 0x18));
        }
      }
    }
    *(undefined8 *)(in_RDI + 8) = 0;
  }
LAB_0010270a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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

void FUN_00102c04(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)param_1;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)param_1;
    }
    else {
      *(undefined8 *)this = 0;
      lVar2 = *(long *)param_1;
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001031d8) */
/* WARNING: Removing unreachable block (ram,0x00103308) */
/* WARNING: Removing unreachable block (ram,0x001034d0) */
/* WARNING: Removing unreachable block (ram,0x00103314) */
/* WARNING: Removing unreachable block (ram,0x0010331e) */
/* WARNING: Removing unreachable block (ram,0x001034b0) */
/* WARNING: Removing unreachable block (ram,0x0010332a) */
/* WARNING: Removing unreachable block (ram,0x00103334) */
/* WARNING: Removing unreachable block (ram,0x00103490) */
/* WARNING: Removing unreachable block (ram,0x00103340) */
/* WARNING: Removing unreachable block (ram,0x0010334a) */
/* WARNING: Removing unreachable block (ram,0x00103470) */
/* WARNING: Removing unreachable block (ram,0x00103356) */
/* WARNING: Removing unreachable block (ram,0x00103360) */
/* WARNING: Removing unreachable block (ram,0x00103450) */
/* WARNING: Removing unreachable block (ram,0x0010336c) */
/* WARNING: Removing unreachable block (ram,0x00103376) */
/* WARNING: Removing unreachable block (ram,0x00103430) */
/* WARNING: Removing unreachable block (ram,0x00103382) */
/* WARNING: Removing unreachable block (ram,0x0010338c) */
/* WARNING: Removing unreachable block (ram,0x00103410) */
/* WARNING: Removing unreachable block (ram,0x00103394) */
/* WARNING: Removing unreachable block (ram,0x001033aa) */
/* WARNING: Removing unreachable block (ram,0x001033b6) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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


