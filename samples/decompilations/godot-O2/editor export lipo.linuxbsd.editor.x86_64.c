
/* CowData<LipO::FatArch>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<LipO::FatArch>::_copy_on_write(CowData<LipO::FatArch> *this)

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
  __n = lVar2 * 0x20;
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



/* LipO::get_arch_count() const */

undefined4 __thiscall LipO::get_arch_count(LipO *this)

{
  if (*(long *)(this + 0x180) == 0) {
    _err_print_error("get_arch_count","editor/export/lipo.cpp",0x125,
                     "Condition \"fa.is_null()\" is true. Returning: 0","LipO: File not opened.",0,0
                    );
    return 0;
  }
  if (*(long *)(this + 400) != 0) {
    return *(undefined4 *)(*(long *)(this + 400) + -8);
  }
  return 0;
}



/* LipO::get_arch_cputype(int) const */

undefined4 __thiscall LipO::get_arch_cputype(LipO *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 0x180) == 0) {
    _err_print_error("get_arch_cputype","editor/export/lipo.cpp",0x12a,
                     "Condition \"fa.is_null()\" is true. Returning: 0","LipO: File not opened.",0,0
                    );
    return 0;
  }
  lVar1 = *(long *)(this + 400);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_0010025d;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + lVar2 * 0x20);
    }
    goto LAB_0010025d;
  }
  lVar3 = 0;
LAB_0010025d:
  _err_print_index_error
            ("get_arch_cputype","editor/export/lipo.cpp",299,lVar2,lVar3,"p_index","archs.size()",""
             ,false,false);
  return 0;
}



/* LipO::get_arch_cpusubtype(int) const */

undefined4 __thiscall LipO::get_arch_cpusubtype(LipO *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 0x180) == 0) {
    _err_print_error("get_arch_cpusubtype","editor/export/lipo.cpp",0x130,
                     "Condition \"fa.is_null()\" is true. Returning: 0","LipO: File not opened.",0,0
                    );
    return 0;
  }
  lVar1 = *(long *)(this + 400);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_0010032d;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + 4 + lVar2 * 0x20);
    }
    goto LAB_0010032d;
  }
  lVar3 = 0;
LAB_0010032d:
  _err_print_index_error
            ("get_arch_cpusubtype","editor/export/lipo.cpp",0x131,lVar2,lVar3,"p_index",
             "archs.size()","",false,false);
  return 0;
}



/* LipO::close() */

void __thiscall LipO::close(LipO *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 400);
  if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) {
      *(undefined8 *)(this + 400) = 0;
      return;
    }
    lVar2 = *(long *)(this + 400);
    *(undefined8 *)(this + 400) = 0;
    Memory::free_static((void *)(lVar2 + -0x10),false);
    return;
  }
  return;
}



/* LipO::is_lipo(String const&) */

ulong LipO::is_lipo(String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined1 auVar9 [16];
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
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00100526;
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar2 == lVar6;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar6 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar6 != -1) {
        local_40 = *(long *)param_1;
      }
    }
LAB_00100526:
    local_48 = 0;
    local_30 = 0x1c;
    local_38 = "LipO: Can\'t open file: \"%s\".";
    String::parse_latin1((StrRange *)&local_48);
    vformat<String>(&local_38,(StrRange *)&local_48,&local_40);
    _err_print_error("is_lipo","editor/export/lipo.cpp",0x25,
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
        uVar7 = 0;
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        goto LAB_0010046e;
      }
    }
    uVar7 = 0;
  }
  else {
    auVar9 = (**(code **)(*(long *)local_50 + 0x1f0))();
    iVar5 = auVar9._0_4_;
    uVar7 = CONCAT71(auVar9._9_7_,iVar5 == -0x41450136 || iVar5 == -0x35014542) & 0xffffffff;
    if (iVar5 != -0x41450136 && iVar5 != -0x35014542) {
      uVar7 = (ulong)((uint)CONCAT71(auVar9._9_7_,iVar5 == -0x40450136) |
                     (uint)CONCAT71(auVar9._1_7_,iVar5 == -0x35014541));
    }
  }
LAB_0010046e:
  if (((local_50 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_50), cVar4 != '\0')) {
    (**(code **)(*(long *)local_50 + 0x140))(local_50);
    Memory::free_static(local_50,false);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* LipO::extract_arch(int, String const&) */

undefined8 __thiscall LipO::extract_arch(LipO *this,int param_1,String *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  Object *local_1060;
  long local_1058;
  long local_1050;
  char *local_1048;
  undefined8 local_1040;
  undefined1 local_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) == 0) {
    uVar9 = 0;
    _err_print_error("extract_arch","editor/export/lipo.cpp",0x136,
                     "Condition \"fa.is_null()\" is true. Returning: false","LipO: File not opened."
                     ,0,0);
    goto LAB_001007cb;
  }
  lVar7 = *(long *)(this + 400);
  lVar11 = (long)param_1;
  if (param_1 < 0) {
    if (lVar7 == 0) goto LAB_00100a08;
    lVar7 = *(long *)(lVar7 + -8);
  }
  else {
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + -8);
      if (lVar7 <= lVar11) goto LAB_00100865;
      FileAccess::open((String *)&local_1060,(int)param_2,(Error *)0x2);
      if (local_1060 != (Object *)0x0) {
        lVar7 = *(long *)(this + 400);
        if (lVar7 != 0) {
          lVar10 = *(long *)(lVar7 + -8);
          if (lVar10 <= lVar11) goto LAB_00100813;
          (**(code **)(**(long **)(this + 0x180) + 0x1b8))
                    (*(long **)(this + 0x180),*(undefined8 *)(lVar7 + 8 + lVar11 * 0x20));
          lVar7 = *(long *)(this + 400);
          if (lVar7 != 0) {
            lVar10 = *(long *)(lVar7 + -8);
            if (lVar10 <= lVar11) goto LAB_00100813;
            uVar2 = *(ulong *)(lVar7 + 0x10 + lVar11 * 0x20);
            iVar8 = 0;
            iVar6 = (int)(uVar2 >> 0xc);
            if (0 < iVar6) {
              do {
                lVar7 = (**(code **)(**(long **)(this + 0x180) + 0x220))
                                  (*(long **)(this + 0x180),local_1038,0x1000);
                if (lVar7 != 0) {
                  (**(code **)(*(long *)local_1060 + 0x2d0))(local_1060,local_1038,lVar7);
                }
                iVar8 = iVar8 + 1;
              } while (iVar6 != iVar8);
            }
            lVar7 = (**(code **)(**(long **)(this + 0x180) + 0x220))
                              (*(long **)(this + 0x180),local_1038,(uint)uVar2 & 0xfff);
            if (lVar7 != 0) {
              (**(code **)(*(long *)local_1060 + 0x2d0))(local_1060,local_1038,lVar7);
            }
            uVar9 = 1;
            goto LAB_001007b4;
          }
        }
        lVar10 = 0;
LAB_00100813:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_1050 = 0;
      plVar1 = (long *)(*(long *)param_2 + -0x10);
      if (*(long *)param_2 != 0) {
        do {
          lVar7 = *plVar1;
          if (lVar7 == 0) goto LAB_00100956;
          LOCK();
          lVar11 = *plVar1;
          bVar12 = lVar7 == lVar11;
          if (bVar12) {
            *plVar1 = lVar7 + 1;
            lVar11 = lVar7;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar11 != -1) {
          local_1050 = *(long *)param_2;
        }
      }
LAB_00100956:
      local_1058 = 0;
      local_1040 = 0x1c;
      local_1048 = "LipO: Can\'t open file: \"%s\".";
      String::parse_latin1((StrRange *)&local_1058);
      vformat<String>(&local_1048,(StrRange *)&local_1058,&local_1050);
      _err_print_error("extract_arch","editor/export/lipo.cpp",0x13a,
                       "Condition \"fb.is_null()\" is true. Returning: false",&local_1048,0);
      pcVar4 = local_1048;
      if (local_1048 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_1048 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_1048 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar7 = local_1058;
      if (local_1058 != 0) {
        LOCK();
        plVar1 = (long *)(local_1058 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_1058 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_1050;
      if (local_1050 == 0) {
LAB_001009fc:
        uVar9 = 0;
      }
      else {
        LOCK();
        plVar1 = (long *)(local_1050 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_001009fc;
        uVar9 = 0;
        local_1050 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
LAB_001007b4:
      if (((local_1060 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_1060), cVar5 != '\0')) {
        (**(code **)(*(long *)local_1060 + 0x140))(local_1060);
        Memory::free_static(local_1060,false);
      }
      goto LAB_001007cb;
    }
LAB_00100a08:
    lVar7 = 0;
  }
LAB_00100865:
  uVar9 = 0;
  _err_print_index_error
            ("extract_arch","editor/export/lipo.cpp",0x137,lVar11,lVar7,"p_index","archs.size()","",
             false,false);
LAB_001007cb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* Vector<LipO::FatArch>::push_back(LipO::FatArch) [clone .isra.0] */

void Vector<LipO::FatArch>::push_back(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar1 = CowData<LipO::FatArch>::resize<false>((CowData<LipO::FatArch> *)(param_1 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<LipO::FatArch>::_copy_on_write((CowData<LipO::FatArch> *)(param_1 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x20 + *(long *)(param_1 + 8));
        *puVar2 = in_stack_00000008;
        puVar2[1] = in_stack_00000010;
        puVar2[2] = in_stack_00000018;
        puVar2[3] = in_stack_00000020;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* LipO::~LipO() */

void __thiscall LipO::~LipO(LipO *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00104ec0;
  CowData<LipO::FatArch>::resize<false>((CowData<LipO::FatArch> *)(this + 400),0);
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00104c00;
  Object::~Object((Object *)this);
  return;
}



/* LipO::open_file(String const&) */

undefined8 __thiscall LipO::open_file(LipO *this,String *param_1)

{
  long *plVar1;
  LipO *pLVar2;
  Object *pOVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  Object *pOVar14;
  uint uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long local_78;
  long local_70;
  undefined8 local_68;
  ulong uStack_60;
  ulong local_58;
  uint uStack_50;
  long local_40;
  
  pLVar2 = this + 0x188;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<LipO::FatArch>::resize<false>((CowData<LipO::FatArch> *)(this + 400),0);
  FileAccess::open((String *)&local_68,(int)param_1,(Error *)0x1);
  pOVar3 = *(Object **)(this + 0x180);
  pOVar14 = pOVar3;
  if ((Object *)local_68 == pOVar3) {
LAB_00100ce6:
    if (((pOVar14 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar3 = (Object *)local_68, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_68), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if (*(long **)(this + 0x180) == (long *)0x0) goto LAB_00100e49;
    iVar6 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
    if (iVar6 == -0x41450136) {
      uVar15 = 0;
      uVar8 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
      if (uVar8 != 0) {
        do {
          uVar15 = uVar15 + 1;
          uVar9 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_68 = (char *)CONCAT44(local_68._4_4_,
                                      uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                      (uVar9 & 0xff00) << 8 | uVar9 << 0x18);
          uVar9 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_68 = (char *)CONCAT44(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                      (uVar9 & 0xff00) << 8 | uVar9 << 0x18,(undefined4)local_68);
          uVar9 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          uStack_60 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                             uVar9 << 0x18);
          uVar9 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_58 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                            uVar9 << 0x18);
          uVar9 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          uStack_50 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
          Vector<LipO::FatArch>::push_back(pLVar2);
        } while (uVar15 < (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18));
      }
LAB_00100e10:
      uVar10 = 1;
      goto LAB_00100e15;
    }
    if (iVar6 == -0x35014542) {
      iVar6 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
      if (iVar6 != 0) {
        iVar13 = 0;
        do {
          iVar13 = iVar13 + 1;
          uVar7 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_68 = (char *)CONCAT44(local_68._4_4_,uVar7);
          uVar7 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_68 = (char *)CONCAT44(uVar7,(undefined4)local_68);
          uVar8 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          uStack_60 = (ulong)uVar8;
          uVar8 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_58 = (ulong)uVar8;
          uStack_50 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          Vector<LipO::FatArch>::push_back(pLVar2);
        } while (iVar6 != iVar13);
      }
      goto LAB_00100e10;
    }
    if (iVar6 == -0x40450136) {
      uVar8 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
      if (uVar8 != 0) {
        uVar15 = 0;
        do {
          uVar15 = uVar15 + 1;
          uVar9 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_68 = (char *)CONCAT44(local_68._4_4_,
                                      uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                      (uVar9 & 0xff00) << 8 | uVar9 << 0x18);
          uVar9 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_68 = (char *)CONCAT44(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                      (uVar9 & 0xff00) << 8 | uVar9 << 0x18,(undefined4)local_68);
          uVar12 = (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
          uStack_60 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                      (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                      (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                      (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
          uVar12 = (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
          local_58 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                     (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                     (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                     (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
          uVar9 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          uStack_50 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
          (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          Vector<LipO::FatArch>::push_back(pLVar2);
        } while (uVar15 < (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18));
      }
      goto LAB_00100e10;
    }
    if (iVar6 == -0x35014541) {
      iVar6 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
      if (iVar6 != 0) {
        iVar13 = 0;
        do {
          iVar13 = iVar13 + 1;
          uVar7 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_68 = (char *)CONCAT44(local_68._4_4_,uVar7);
          uVar7 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          local_68 = (char *)CONCAT44(uVar7,(undefined4)local_68);
          uStack_60 = (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
          local_58 = (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
          uStack_50 = (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
          Vector<LipO::FatArch>::push_back(pLVar2);
        } while (iVar6 != iVar13);
      }
      goto LAB_00100e10;
    }
    CowData<LipO::FatArch>::resize<false>((CowData<LipO::FatArch> *)(this + 400),0);
    local_70 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_0010118a;
        LOCK();
        lVar11 = *plVar1;
        bVar16 = lVar4 == lVar11;
        if (bVar16) {
          *plVar1 = lVar4 + 1;
          lVar11 = lVar4;
        }
        UNLOCK();
      } while (!bVar16);
      if (lVar11 != -1) {
        local_70 = *(long *)param_1;
      }
    }
LAB_0010118a:
    local_78 = 0;
    local_68 = "LipO: Invalid fat binary: \"%s\".";
    uStack_60 = 0x1f;
    String::parse_latin1((StrRange *)&local_78);
    vformat<String>((String *)&local_68,&local_78,&local_70);
    _err_print_error("open_file","editor/export/lipo.cpp",0x11f,
                     "Method/function failed. Returning: false",(String *)&local_68,0,0);
    pOVar3 = (Object *)local_68;
  }
  else {
    *(char **)(this + 0x180) = local_68;
    if ((Object *)local_68 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0x180) = 0;
      }
      pOVar14 = (Object *)local_68;
      if (pOVar3 != (Object *)0x0) goto LAB_00100cd1;
      goto LAB_00100ce6;
    }
    if (pOVar3 != (Object *)0x0) {
LAB_00100cd1:
      cVar5 = RefCounted::unreference();
      pOVar14 = (Object *)local_68;
      if ((cVar5 != '\0') &&
         (cVar5 = predelete_handler(pOVar3), pOVar14 = (Object *)local_68, cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar14 = (Object *)local_68;
      }
      goto LAB_00100ce6;
    }
LAB_00100e49:
    local_70 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00100e81;
        LOCK();
        lVar11 = *plVar1;
        bVar16 = lVar4 == lVar11;
        if (bVar16) {
          *plVar1 = lVar4 + 1;
          lVar11 = lVar4;
        }
        UNLOCK();
      } while (!bVar16);
      if (lVar11 != -1) {
        local_70 = *(long *)param_1;
      }
    }
LAB_00100e81:
    local_78 = 0;
    local_68 = "LipO: Can\'t open file: \"%s\".";
    uStack_60 = 0x1c;
    String::parse_latin1((StrRange *)&local_78);
    vformat<String>((String *)&local_68,&local_78,&local_70);
    _err_print_error("open_file","editor/export/lipo.cpp",0xe4,
                     "Condition \"fa.is_null()\" is true. Returning: false",(String *)&local_68,0,0)
    ;
    pOVar3 = (Object *)local_68;
  }
  local_68 = (char *)pOVar3;
  if (pOVar3 != (Object *)0x0) {
    LOCK();
    pOVar14 = pOVar3 + -0x10;
    *(long *)pOVar14 = *(long *)pOVar14 + -1;
    UNLOCK();
    if (*(long *)pOVar14 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pOVar3 + -0x10,false);
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
  uVar10 = 0;
LAB_00100e15:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LipO::~LipO() */

void __thiscall LipO::~LipO(LipO *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00104ec0;
  CowData<LipO::FatArch>::resize<false>((CowData<LipO::FatArch> *)(this + 400),0);
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00104c00;
  Object::~Object((Object *)this);
  operator_delete(this,0x198);
  return;
}



/* LipO::create_file(String const&, Vector<String> const&, Vector<Vector2i> const&) */

char __thiscall LipO::create_file(LipO *this,String *param_1,Vector *param_2,Vector *param_3)

{
  CowData<LipO::FatArch> *this_00;
  uint *puVar1;
  CowData *pCVar2;
  long lVar3;
  Object *pOVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  int iVar12;
  long lVar13;
  Object *pOVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  uint local_1280;
  Object *local_1250;
  long local_1248;
  long local_1240;
  Object *local_1238;
  undefined8 uStack_1230;
  long local_1228;
  undefined4 uStack_1220;
  undefined **local_1218 [48];
  Object *local_1098;
  undefined1 local_1090;
  undefined1 local_1088 [16];
  undefined8 local_1078;
  undefined8 local_1070;
  undefined4 local_1068;
  undefined1 local_1060 [16];
  undefined1 local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (CowData<LipO::FatArch> *)(this + 400);
  CowData<LipO::FatArch>::resize<false>(this_00,0);
  FileAccess::open((String *)&local_1238,(int)param_1,(Error *)0x2);
  pOVar4 = *(Object **)(this + 0x180);
  pOVar14 = pOVar4;
  if (local_1238 == pOVar4) {
LAB_001014c2:
    if (((pOVar14 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar4 = local_1238, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_1238), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    plVar17 = *(long **)(this + 0x180);
    if (plVar17 == (long *)0x0) goto LAB_00101a69;
    lVar10 = *(long *)(param_2 + 8);
    lVar13 = *(long *)(param_3 + 8);
    if (lVar10 == 0) {
      if (lVar13 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(ulong *)(lVar13 + -8);
        if (uVar18 != 0) goto LAB_00101c78;
      }
LAB_00101cbd:
      (**(code **)(*plVar17 + 0x278))(plVar17,0xbebafeca);
LAB_0010172d:
      if (*(long *)(this + 400) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (uint)*(undefined8 *)(*(long *)(this + 400) + -8);
        uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
      }
      (**(code **)(**(long **)(this + 0x180) + 0x278))(*(long **)(this + 0x180),uVar16);
      lVar10 = *(long *)(this + 400);
      if (lVar10 != 0) {
        lVar3 = *(long *)(lVar10 + -8);
        if (uVar18 < 0xffffffff) {
          lVar13 = lVar3 * 0x14;
        }
        else {
          lVar13 = lVar3 << 5;
        }
        uVar11 = lVar13 + 8;
        lVar13 = 0;
        if (0 < lVar3) {
          do {
            lVar15 = lVar13 * 0x20;
            lVar9 = 1L << ((byte)*(undefined4 *)(lVar10 + 0x18 + lVar15) & 0x3f);
            CowData<LipO::FatArch>::_copy_on_write(this_00);
            plVar17 = *(long **)(this + 0x180);
            lVar10 = *(long *)(this + 400);
            lVar3 = *plVar17;
            puVar1 = (uint *)(lVar10 + lVar15);
            *(ulong *)(puVar1 + 2) = (lVar9 + uVar11) - (lVar9 - 1U & uVar11);
            if (uVar18 < 0xffffffff) {
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar16 = *puVar1;
              (**(code **)(lVar3 + 0x278))
                        (plVar17,uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8
                                 | uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar16 = *(uint *)(lVar10 + 4 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar16 = (uint)*(undefined8 *)(lVar10 + 8 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar16 = (uint)*(undefined8 *)(lVar10 + 0x10 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar16 = *(uint *)(lVar10 + 0x18 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
            }
            else {
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar16 = *puVar1;
              (**(code **)(lVar3 + 0x278))
                        (plVar17,uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8
                                 | uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar16 = *(uint *)(lVar10 + 4 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar11 = *(ulong *)(lVar10 + 8 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x280))
                        (*(long **)(this + 0x180),
                         uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                         (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                         (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                         (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar11 = *(ulong *)(lVar10 + 0x10 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x280))
                        (*(long **)(this + 0x180),
                         uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                         (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                         (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                         (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00101a18;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              uVar16 = *(uint *)(lVar10 + 0x18 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              (**(code **)(**(long **)(this + 0x180) + 0x278))(*(long **)(this + 0x180),0);
            }
            lVar10 = *(long *)(this + 400);
            if (lVar10 == 0) goto LAB_00101a18;
            lVar9 = *(long *)(lVar10 + -8);
            if (lVar9 <= lVar13) goto LAB_00101a39;
            lVar13 = lVar13 + 1;
            uVar11 = *(long *)(lVar10 + 8 + lVar15) + *(long *)(lVar10 + 0x10 + lVar15);
          } while (lVar13 < lVar9);
        }
        if (lVar10 != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(lVar10 + -8) <= lVar13) break;
            lVar10 = *(long *)(param_2 + 8);
            if (lVar10 == 0) {
LAB_001019f0:
              lVar9 = 0;
              goto LAB_00101a39;
            }
            lVar9 = *(long *)(lVar10 + -8);
            if (lVar9 <= lVar13) goto LAB_00101a39;
            FileAccess::open((String *)&local_1250,(int)lVar10 + (int)(lVar13 * 8),(Error *)0x1);
            if (local_1250 == (Object *)0x0) {
              CowData<LipO::FatArch>::resize<false>(this_00,0);
              lVar10 = *(long *)(param_2 + 8);
              if (lVar10 == 0) goto LAB_001019f0;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              pCVar2 = (CowData *)(lVar10 + lVar13 * 8);
              local_1240 = 0;
              if (*(long *)pCVar2 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_1240,pCVar2);
              }
              uStack_1230 = 0x1c;
              local_1248 = 0;
              local_1238 = (Object *)0x1034d4;
              String::parse_latin1((StrRange *)&local_1248);
              vformat<String>((String *)&local_1238,(StrRange *)&local_1248,
                              (CowData<char32_t> *)&local_1240);
              _err_print_error("create_file","editor/export/lipo.cpp",0xc9,
                               "Method/function failed. Returning: false",(String *)&local_1238,0,0,
                               extraout_RDX);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1238);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1248);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1240);
              Ref<FileAccess>::unref((Ref<FileAccess> *)&local_1250);
              goto LAB_00101b58;
            }
            uVar18 = (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
            lVar10 = *(long *)(this + 400);
            if (lVar10 == 0) goto LAB_001019f0;
            while( true ) {
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar13) goto LAB_00101a39;
              lVar10 = lVar10 + lVar13 * 0x20;
              if (*(ulong *)(lVar10 + 8) <= uVar18) break;
              uVar18 = uVar18 + 1;
              (**(code **)(**(long **)(this + 0x180) + 0x268))(*(long **)(this + 0x180),0);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_001019f0;
            }
            uVar18 = *(ulong *)(lVar10 + 0x10);
            iVar12 = 0;
            iVar8 = (int)(uVar18 >> 0xc);
            local_1280 = (uint)uVar18 & 0xfff;
            if (0 < iVar8) {
              do {
                lVar10 = (**(code **)(*(long *)local_1250 + 0x220))(local_1250,local_1048,0x1000);
                if (lVar10 != 0) {
                  (**(code **)(**(long **)(this + 0x180) + 0x2d0))
                            (*(long **)(this + 0x180),local_1048,lVar10);
                }
                iVar12 = iVar12 + 1;
              } while (iVar8 != iVar12);
            }
            lVar10 = (**(code **)(*(long *)local_1250 + 0x220))(local_1250,local_1048,local_1280);
            if (lVar10 != 0) {
              (**(code **)(**(long **)(this + 0x180) + 0x2d0))
                        (*(long **)(this + 0x180),local_1048,lVar10);
            }
            lVar13 = lVar13 + 1;
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_1250);
            lVar10 = *(long *)(this + 400);
          } while (lVar10 != 0);
        }
      }
      cVar6 = '\x01';
      goto LAB_00101b5b;
    }
    if (lVar13 == 0) {
      if (*(long *)(lVar10 + -8) == 0) goto LAB_00101514;
    }
    else if (*(long *)(lVar10 + -8) == *(long *)(lVar13 + -8)) {
LAB_00101514:
      lVar13 = 0;
      uVar18 = 0;
      do {
        if (*(long *)(lVar10 + -8) <= lVar13) break;
        lVar3 = lVar13 * 8;
        FileAccess::open((String *)&local_1250,(int)lVar10 + (int)lVar3,(Error *)0x1);
        if (local_1250 == (Object *)0x0) {
          CowData<LipO::FatArch>::resize<false>(this_00,0);
          lVar10 = *(long *)(param_2 + 8);
          if (lVar10 == 0) goto LAB_00101a18;
          lVar9 = *(long *)(lVar10 + -8);
          if (lVar9 <= lVar13) goto LAB_00101a39;
          local_1240 = 0;
          lVar13 = *(long *)(lVar3 + lVar10);
          plVar17 = (long *)(lVar13 + -0x10);
          if (lVar13 == 0) goto LAB_00101d32;
          goto LAB_00101d10;
        }
        RefCounted::RefCounted((RefCounted *)local_1218);
        lVar10 = *(long *)(param_2 + 8);
        local_1218[0] = &PTR__initialize_classv_00104d60;
        local_1098 = (Object *)0x0;
        local_1090 = 0;
        local_1078 = 0xffffffffffffffff;
        local_1070 = 0;
        local_1068 = 0;
        local_1088 = (undefined1  [16])0x0;
        local_1060 = (undefined1  [16])0x0;
        if (lVar10 == 0) goto LAB_00101a18;
        lVar9 = *(long *)(lVar10 + -8);
        if (lVar9 <= lVar13) goto LAB_00101a39;
        cVar6 = MachO::is_macho((String *)(lVar10 + lVar3));
        if (cVar6 != '\0') {
          if (*(long *)(param_2 + 8) == 0) goto LAB_00101a18;
          lVar9 = *(long *)(*(long *)(param_2 + 8) + -8);
          if (lVar9 <= lVar13) goto LAB_00101a39;
          cVar6 = MachO::open_file((String *)local_1218);
          if (cVar6 != '\0') {
            iVar8 = MachO::get_cputype();
            iVar12 = MachO::get_cpusubtype();
            MachO::get_size();
            MachO::get_align();
            lVar10 = *(long *)(param_2 + 8);
            if (lVar10 == 0) goto LAB_00101a18;
            lVar9 = *(long *)(lVar10 + -8);
            if (lVar9 <= lVar13) goto LAB_00101a39;
            local_1240 = 0;
            lVar9 = *(long *)(lVar10 + lVar3);
            plVar17 = (long *)(lVar9 + -0x10);
            if (lVar9 == 0) goto LAB_00102081;
            goto LAB_00102060;
          }
        }
        lVar10 = *(long *)(param_3 + 8);
        if (lVar10 == 0) goto LAB_00101a18;
        lVar9 = *(long *)(lVar10 + -8);
        if (lVar9 <= lVar13) goto LAB_00101a39;
        pOVar4 = *(Object **)(lVar10 + lVar3);
        uStack_1230 = 0;
        local_1228 = (**(code **)(*(long *)local_1250 + 0x1d0))();
        uStack_1220 = 3;
        uVar18 = uVar18 + local_1228;
        local_1238 = pOVar4;
        Vector<LipO::FatArch>::push_back(this + 0x188);
        local_1218[0] = &PTR__initialize_classv_00104d60;
        if (((local_1098 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar4 = local_1098, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_1098), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
        local_1218[0] = &PTR__initialize_classv_00104c00;
        Object::~Object((Object *)local_1218);
        if (((local_1250 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar4 = local_1250, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_1250), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
        lVar10 = *(long *)(param_2 + 8);
        lVar13 = lVar13 + 1;
      } while (lVar10 != 0);
      plVar17 = *(long **)(this + 0x180);
      if (uVar18 < 0xffffffff) goto LAB_00101cbd;
      (**(code **)(*plVar17 + 0x278))(plVar17,0xbfbafeca);
      goto LAB_0010172d;
    }
LAB_00101c78:
    _err_print_error("create_file","editor/export/lipo.cpp",0x87,
                     "Condition \"p_files.size() != p_cputypes.size()\" is true. Returning: false",0
                     ,0);
  }
  else {
    *(Object **)(this + 0x180) = local_1238;
    if (local_1238 != (Object *)0x0) {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        *(undefined8 *)(this + 0x180) = 0;
      }
      pOVar14 = local_1238;
      if (pOVar4 != (Object *)0x0) goto LAB_001014ad;
      goto LAB_001014c2;
    }
    if (pOVar4 != (Object *)0x0) {
LAB_001014ad:
      cVar6 = RefCounted::unreference();
      pOVar14 = local_1238;
      if ((cVar6 != '\0') &&
         (cVar6 = predelete_handler(pOVar4), pOVar14 = local_1238, cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        pOVar14 = local_1238;
      }
      goto LAB_001014c2;
    }
LAB_00101a69:
    local_1240 = 0;
    plVar17 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar10 = *plVar17;
        if (lVar10 == 0) goto LAB_00101a9f;
        LOCK();
        lVar13 = *plVar17;
        bVar19 = lVar10 == lVar13;
        if (bVar19) {
          *plVar17 = lVar10 + 1;
          lVar13 = lVar10;
        }
        UNLOCK();
      } while (!bVar19);
      if (lVar13 != -1) {
        local_1240 = *(long *)param_1;
      }
    }
LAB_00101a9f:
    local_1248 = 0;
    local_1238 = (Object *)0x1034d4;
    uStack_1230 = 0x1c;
    String::parse_latin1((StrRange *)&local_1248);
    vformat<String>((String *)&local_1238,(StrRange *)&local_1248,&local_1240);
    _err_print_error("create_file","editor/export/lipo.cpp",0x86,
                     "Condition \"fa.is_null()\" is true. Returning: false",(String *)&local_1238,0,
                     0);
    pOVar4 = local_1238;
    if (local_1238 != (Object *)0x0) {
      LOCK();
      pOVar14 = local_1238 + -0x10;
      *(long *)pOVar14 = *(long *)pOVar14 + -1;
      UNLOCK();
      if (*(long *)pOVar14 == 0) {
        local_1238 = (Object *)0x0;
        Memory::free_static(pOVar4 + -0x10,false);
      }
    }
    lVar10 = local_1248;
    if (local_1248 != 0) {
      LOCK();
      plVar17 = (long *)(local_1248 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_1248 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_1240;
    if (local_1240 != 0) {
      LOCK();
      plVar17 = (long *)(local_1240 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_1240 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
  }
LAB_00101b58:
  cVar6 = '\0';
  goto LAB_00101b5b;
  while( true ) {
    LOCK();
    lVar9 = *plVar17;
    bVar19 = lVar13 == lVar9;
    if (bVar19) {
      *plVar17 = lVar13 + 1;
      lVar9 = lVar13;
    }
    UNLOCK();
    if (bVar19) break;
LAB_00101d10:
    lVar13 = *plVar17;
    if (lVar13 == 0) goto LAB_00101d32;
  }
  if (lVar9 != -1) {
    local_1240 = *(long *)(lVar3 + lVar10);
  }
LAB_00101d32:
  local_1248 = 0;
  local_1238 = (Object *)0x1034d4;
  uStack_1230 = 0x1c;
  String::parse_latin1((StrRange *)&local_1248);
  vformat<String>((String *)&local_1238,(StrRange *)&local_1248,&local_1240);
  _err_print_error("create_file","editor/export/lipo.cpp",0x8e,
                   "Method/function failed. Returning: false",(String *)&local_1238,0,0);
  pOVar4 = local_1238;
  if (local_1238 != (Object *)0x0) {
    LOCK();
    pOVar14 = local_1238 + -0x10;
    *(long *)pOVar14 = *(long *)pOVar14 + -1;
    UNLOCK();
    if (*(long *)pOVar14 == 0) {
      local_1238 = (Object *)0x0;
      Memory::free_static(pOVar4 + -0x10,false);
    }
  }
  lVar10 = local_1248;
  if (local_1248 != 0) {
    LOCK();
    plVar17 = (long *)(local_1248 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1248 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  lVar10 = local_1240;
  if (local_1240 != 0) {
    LOCK();
    plVar17 = (long *)(local_1240 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1240 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  cVar6 = '\0';
  goto LAB_00101e28;
  while( true ) {
    LOCK();
    lVar15 = *plVar17;
    bVar19 = lVar9 == lVar15;
    if (bVar19) {
      *plVar17 = lVar9 + 1;
      lVar15 = lVar9;
    }
    UNLOCK();
    if (bVar19) break;
LAB_00102060:
    lVar9 = *plVar17;
    if (lVar9 == 0) goto LAB_00102081;
  }
  if (lVar15 != -1) {
    local_1240 = *(long *)(lVar10 + lVar3);
  }
LAB_00102081:
  local_1238 = (Object *)0x1041c8;
  local_1248 = 0;
  uStack_1230 = 0x25;
  String::parse_latin1((StrRange *)&local_1248);
  vformat<String>((String *)&local_1238,(StrRange *)&local_1248,&local_1240);
  _err_print_error("create_file","editor/export/lipo.cpp",0x9a,
                   "Method/function failed. Returning: arch.cputype != (uint32_t)p_cputypes[i].x || arch.cpusubtype != (uint32_t)p_cputypes[i].y"
                   ,(String *)&local_1238,0,0);
  pOVar4 = local_1238;
  if (local_1238 != (Object *)0x0) {
    LOCK();
    pOVar14 = local_1238 + -0x10;
    *(long *)pOVar14 = *(long *)pOVar14 + -1;
    UNLOCK();
    if (*(long *)pOVar14 == 0) {
      local_1238 = (Object *)0x0;
      Memory::free_static(pOVar4 + -0x10,false);
    }
  }
  lVar10 = local_1248;
  if (local_1248 != 0) {
    LOCK();
    plVar17 = (long *)(local_1248 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1248 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  lVar10 = local_1240;
  if (local_1240 != 0) {
    LOCK();
    plVar17 = (long *)(local_1240 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1240 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  lVar10 = *(long *)(param_3 + 8);
  if (lVar10 == 0) {
LAB_00101a18:
    lVar9 = 0;
LAB_00101a39:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar9,"p_index","size()","",false,true
              );
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar9 = *(long *)(lVar10 + -8);
  if (lVar9 <= lVar13) goto LAB_00101a39;
  if (iVar8 == *(int *)(lVar10 + lVar3)) {
    cVar6 = ((int *)(lVar10 + lVar3))[1] != iVar12;
  }
  local_1218[0] = &PTR__initialize_classv_00104d60;
  if (((local_1098 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar4 = local_1098, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_1098), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  local_1218[0] = &PTR__initialize_classv_00104c00;
  Object::~Object((Object *)local_1218);
LAB_00101e28:
  if (((local_1250 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_1250), cVar7 != '\0')) {
    (**(code **)(*(long *)local_1250 + 0x140))(local_1250);
    Memory::free_static(local_1250,false);
  }
LAB_00101b5b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar6;
}



/* LipO::create_file(String const&, Vector<String> const&) */

undefined8 __thiscall LipO::create_file(LipO *this,String *param_1,Vector *param_2)

{
  CowData<LipO::FatArch> *this_00;
  uint *puVar1;
  CowData *pCVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  Object *pOVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  long in_FS_OFFSET;
  bool bVar19;
  uint local_1280;
  ulong local_1278;
  Object *local_1250;
  long local_1248;
  long local_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  long local_1228;
  undefined4 uStack_1220;
  undefined **local_1218 [48];
  Object *local_1098;
  undefined1 local_1090;
  undefined1 local_1088 [16];
  undefined8 local_1078;
  undefined8 local_1070;
  undefined4 local_1068;
  undefined1 local_1060 [16];
  undefined1 local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (CowData<LipO::FatArch> *)(this + 400);
  CowData<LipO::FatArch>::resize<false>(this_00,0);
  FileAccess::open((String *)&local_1238,(int)param_1,(Error *)0x2);
  pOVar3 = *(Object **)(this + 0x180);
  pOVar13 = pOVar3;
  if ((Object *)local_1238 == pOVar3) {
LAB_001024ca:
    if (((pOVar13 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar3 = (Object *)local_1238, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_1238), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    plVar17 = *(long **)(this + 0x180);
    if (plVar17 != (long *)0x0) {
      lVar8 = *(long *)(param_2 + 8);
      if (lVar8 == 0) {
        local_1278 = 0;
LAB_00102931:
        (**(code **)(*plVar17 + 0x278))(plVar17,0xbebafeca);
      }
      else {
        local_1278 = 0;
        lVar14 = 0;
        do {
          if (*(long *)(lVar8 + -8) <= lVar14) break;
          RefCounted::RefCounted((RefCounted *)local_1218);
          local_1218[0] = &PTR__initialize_classv_00104d60;
          local_1098 = (Object *)0x0;
          local_1090 = 0;
          local_1078 = 0xffffffffffffffff;
          local_1070 = 0;
          local_1068 = 0;
          local_1088 = (undefined1  [16])0x0;
          local_1060 = (undefined1  [16])0x0;
          if (*(long *)(param_2 + 8) == 0) {
LAB_001026e0:
            lVar8 = 0;
            goto LAB_00102701;
          }
          lVar8 = *(long *)(*(long *)(param_2 + 8) + -8);
          if (lVar8 <= lVar14) goto LAB_00102701;
          lVar10 = lVar14 * 8;
          cVar5 = MachO::open_file((String *)local_1218);
          if (cVar5 == '\0') {
            lVar9 = *(long *)(param_2 + 8);
            if (lVar9 == 0) goto LAB_001026e0;
            lVar8 = *(long *)(lVar9 + -8);
            if (lVar8 <= lVar14) goto LAB_00102701;
            local_1240 = 0;
            lVar8 = *(long *)(lVar9 + lVar10);
            plVar17 = (long *)(lVar8 + -0x10);
            if (lVar8 == 0) goto LAB_00102c85;
            goto LAB_00102c64;
          }
          uVar6 = MachO::get_cputype();
          local_1238 = (char *)CONCAT44(local_1238._4_4_,uVar6);
          uVar6 = MachO::get_cpusubtype();
          uStack_1230 = 0;
          local_1238 = (char *)CONCAT44(uVar6,(undefined4)local_1238);
          lVar8 = MachO::get_size();
          uStack_1220 = MachO::get_align();
          local_1278 = local_1278 + lVar8;
          local_1228 = lVar8;
          Vector<LipO::FatArch>::push_back(this + 0x188);
          local_1218[0] = &PTR__initialize_classv_00104d60;
          if (((local_1098 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar3 = local_1098, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_1098), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))();
            Memory::free_static(pOVar3,false);
          }
          local_1218[0] = &PTR__initialize_classv_00104c00;
          Object::~Object((Object *)local_1218);
          lVar9 = *(long *)(param_2 + 8);
          if (lVar9 == 0) goto LAB_001026e0;
          lVar8 = *(long *)(lVar9 + -8);
          if (lVar8 <= lVar14) goto LAB_00102701;
          FileAccess::open((String *)&local_1250,(int)lVar9 + (int)lVar10,(Error *)0x1);
          if (local_1250 == (Object *)0x0) {
            CowData<LipO::FatArch>::resize<false>(this_00,0);
            lVar9 = *(long *)(param_2 + 8);
            if (lVar9 == 0) goto LAB_001026e0;
            lVar8 = *(long *)(lVar9 + -8);
            if (lVar8 <= lVar14) goto LAB_00102701;
            local_1240 = 0;
            lVar8 = *(long *)(lVar9 + lVar10);
            plVar17 = (long *)(lVar8 + -0x10);
            if (lVar8 == 0) goto LAB_00102e41;
            goto LAB_00102e20;
          }
          cVar5 = RefCounted::unreference();
          pOVar3 = local_1250;
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_1250), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          lVar8 = *(long *)(param_2 + 8);
          lVar14 = lVar14 + 1;
        } while (lVar8 != 0);
        plVar17 = *(long **)(this + 0x180);
        if (local_1278 < 0xffffffff) goto LAB_00102931;
        (**(code **)(*plVar17 + 0x278))(plVar17,0xbfbafeca);
      }
      if (*(long *)(this + 400) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (uint)*(undefined8 *)(*(long *)(this + 400) + -8);
        uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
      }
      (**(code **)(**(long **)(this + 0x180) + 0x278))(*(long **)(this + 0x180),uVar16);
      lVar10 = *(long *)(this + 400);
      if (lVar10 != 0) {
        lVar8 = *(long *)(lVar10 + -8);
        if (local_1278 < 0xffffffff) {
          lVar14 = lVar8 * 0x14;
        }
        else {
          lVar14 = lVar8 << 5;
        }
        uVar12 = lVar14 + 8;
        lVar14 = 0;
        if (0 < lVar8) {
          do {
            lVar15 = lVar14 * 0x20;
            lVar9 = 1L << ((byte)*(undefined4 *)(lVar10 + 0x18 + lVar15) & 0x3f);
            CowData<LipO::FatArch>::_copy_on_write(this_00);
            plVar17 = *(long **)(this + 0x180);
            lVar8 = *(long *)(this + 400);
            lVar10 = *plVar17;
            puVar1 = (uint *)(lVar8 + lVar15);
            *(ulong *)(puVar1 + 2) = (lVar9 + uVar12) - (lVar9 - 1U & uVar12);
            if (local_1278 < 0xffffffff) {
              if (lVar8 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar8 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar16 = *puVar1;
              (**(code **)(lVar10 + 0x278))
                        (plVar17,uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8
                                 | uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar16 = *(uint *)(lVar10 + 4 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar16 = (uint)*(undefined8 *)(lVar10 + 8 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar16 = (uint)*(undefined8 *)(lVar10 + 0x10 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar16 = *(uint *)(lVar10 + 0x18 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
            }
            else {
              if (lVar8 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar8 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar16 = *puVar1;
              (**(code **)(lVar10 + 0x278))
                        (plVar17,uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8
                                 | uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar16 = *(uint *)(lVar10 + 4 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar12 = *(ulong *)(lVar10 + 8 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x280))
                        (*(long **)(this + 0x180),
                         uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                         (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                         (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                         (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar12 = *(ulong *)(lVar10 + 0x10 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x280))
                        (*(long **)(this + 0x180),
                         uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                         (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                         (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                         (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              uVar16 = *(uint *)(lVar10 + 0x18 + lVar15);
              (**(code **)(**(long **)(this + 0x180) + 0x278))
                        (*(long **)(this + 0x180),
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18);
              (**(code **)(**(long **)(this + 0x180) + 0x278))(*(long **)(this + 0x180),0);
            }
            lVar10 = *(long *)(this + 400);
            if (lVar10 == 0) goto LAB_00102c08;
            lVar8 = *(long *)(lVar10 + -8);
            if (lVar8 <= lVar14) goto LAB_00102701;
            lVar14 = lVar14 + 1;
            uVar12 = *(long *)(lVar10 + 8 + lVar15) + *(long *)(lVar10 + 0x10 + lVar15);
          } while (lVar14 < lVar8);
        }
        if (lVar10 != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(lVar10 + -8) <= lVar14) break;
            lVar10 = *(long *)(param_2 + 8);
            if (lVar10 == 0) goto LAB_00102c08;
            lVar8 = *(long *)(lVar10 + -8);
            if (lVar8 <= lVar14) goto LAB_00102701;
            FileAccess::open((String *)&local_1250,(int)lVar10 + (int)(lVar14 * 8),(Error *)0x1);
            if (local_1250 == (Object *)0x0) {
              CowData<LipO::FatArch>::resize<false>(this_00,0);
              lVar10 = *(long *)(param_2 + 8);
              if (lVar10 == 0) goto LAB_00102c08;
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              pCVar2 = (CowData *)(lVar10 + lVar14 * 8);
              local_1240 = 0;
              if (*(long *)pCVar2 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_1240,pCVar2);
              }
              uStack_1230 = 0x1c;
              local_1248 = 0;
              local_1238 = "LipO: Can\'t open file: \"%s\".";
              String::parse_latin1((StrRange *)&local_1248);
              vformat<String>((String *)&local_1238,(StrRange *)&local_1248,
                              (CowData<char32_t> *)&local_1240);
              _err_print_error("create_file","editor/export/lipo.cpp",0x6b,
                               "Method/function failed. Returning: false",(String *)&local_1238,0,0,
                               extraout_RDX);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1238);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1248);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1240);
              Ref<FileAccess>::unref((Ref<FileAccess> *)&local_1250);
              goto LAB_00102860;
            }
            uVar12 = (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
            lVar10 = *(long *)(this + 400);
            if (lVar10 == 0) goto LAB_00102c08;
            while( true ) {
              lVar8 = *(long *)(lVar10 + -8);
              if (lVar8 <= lVar14) goto LAB_00102701;
              lVar10 = lVar10 + lVar14 * 0x20;
              if (*(ulong *)(lVar10 + 8) <= uVar12) break;
              uVar12 = uVar12 + 1;
              (**(code **)(**(long **)(this + 0x180) + 0x268))(*(long **)(this + 0x180),0);
              lVar10 = *(long *)(this + 400);
              if (lVar10 == 0) goto LAB_00102c08;
            }
            uVar12 = *(ulong *)(lVar10 + 0x10);
            iVar18 = 0;
            local_1280 = (uint)uVar12 & 0xfff;
            iVar7 = (int)(uVar12 >> 0xc);
            if (0 < iVar7) {
              do {
                lVar8 = (**(code **)(*(long *)local_1250 + 0x220))(local_1250,local_1048,0x1000);
                if (lVar8 != 0) {
                  (**(code **)(**(long **)(this + 0x180) + 0x2d0))
                            (*(long **)(this + 0x180),local_1048,lVar8);
                }
                iVar18 = iVar18 + 1;
              } while (iVar7 != iVar18);
            }
            lVar8 = (**(code **)(*(long *)local_1250 + 0x220))(local_1250,local_1048,local_1280);
            if (lVar8 != 0) {
              (**(code **)(**(long **)(this + 0x180) + 0x2d0))
                        (*(long **)(this + 0x180),local_1048,lVar8);
            }
            if (((local_1250 != (Object *)0x0) &&
                (cVar5 = RefCounted::unreference(), pOVar3 = local_1250, cVar5 != '\0')) &&
               (cVar5 = predelete_handler(local_1250), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
            lVar10 = *(long *)(this + 400);
            lVar14 = lVar14 + 1;
          } while (lVar10 != 0);
        }
      }
      uVar11 = 1;
      goto LAB_00102862;
    }
  }
  else {
    *(char **)(this + 0x180) = local_1238;
    if ((Object *)local_1238 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0x180) = 0;
      }
      pOVar13 = (Object *)local_1238;
      if (pOVar3 != (Object *)0x0) goto LAB_001024b5;
      goto LAB_001024ca;
    }
    if (pOVar3 != (Object *)0x0) {
LAB_001024b5:
      cVar5 = RefCounted::unreference();
      pOVar13 = (Object *)local_1238;
      if ((cVar5 != '\0') &&
         (cVar5 = predelete_handler(pOVar3), pOVar13 = (Object *)local_1238, cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar13 = (Object *)local_1238;
      }
      goto LAB_001024ca;
    }
  }
  local_1240 = 0;
  plVar17 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar8 = *plVar17;
      if (lVar8 == 0) goto LAB_001027a7;
      LOCK();
      lVar14 = *plVar17;
      bVar19 = lVar8 == lVar14;
      if (bVar19) {
        *plVar17 = lVar8 + 1;
        lVar14 = lVar8;
      }
      UNLOCK();
    } while (!bVar19);
    if (lVar14 != -1) {
      local_1240 = *(long *)param_1;
    }
  }
LAB_001027a7:
  local_1248 = 0;
  local_1238 = "LipO: Can\'t open file: \"%s\".";
  uStack_1230 = 0x1c;
  String::parse_latin1((StrRange *)&local_1248);
  vformat<String>((String *)&local_1238,(StrRange *)&local_1248,&local_1240);
  _err_print_error("create_file","editor/export/lipo.cpp",0x2e,
                   "Condition \"fa.is_null()\" is true. Returning: false",(String *)&local_1238,0,0)
  ;
  pOVar3 = (Object *)local_1238;
  if ((Object *)local_1238 != (Object *)0x0) {
    LOCK();
    pOVar13 = (Object *)local_1238 + -0x10;
    *(long *)pOVar13 = *(long *)pOVar13 + -1;
    UNLOCK();
    if (*(long *)pOVar13 == 0) {
      local_1238 = (char *)0x0;
      Memory::free_static(pOVar3 + -0x10,false);
    }
  }
  lVar8 = local_1248;
  if (local_1248 != 0) {
    LOCK();
    plVar17 = (long *)(local_1248 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1248 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_1240;
  if (local_1240 != 0) {
    LOCK();
    plVar17 = (long *)(local_1240 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1240 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  goto LAB_00102860;
  while( true ) {
    LOCK();
    lVar14 = *plVar17;
    bVar19 = lVar8 == lVar14;
    if (bVar19) {
      *plVar17 = lVar8 + 1;
      lVar14 = lVar8;
    }
    UNLOCK();
    if (bVar19) break;
LAB_00102c64:
    lVar8 = *plVar17;
    if (lVar8 == 0) goto LAB_00102c85;
  }
  if (lVar14 != -1) {
    local_1240 = *(long *)(lVar9 + lVar10);
  }
LAB_00102c85:
  local_1248 = 0;
  local_1238 = "LipO: Invalid MachO file: \"%s\".";
  uStack_1230 = 0x1f;
  String::parse_latin1((StrRange *)&local_1248);
  vformat<String>((String *)&local_1238,(StrRange *)&local_1248,&local_1240);
  _err_print_error("create_file","editor/export/lipo.cpp",0x35,
                   "Method/function failed. Returning: false",(String *)&local_1238,0,0);
  pOVar3 = (Object *)local_1238;
  if ((Object *)local_1238 != (Object *)0x0) {
    LOCK();
    pOVar13 = (Object *)local_1238 + -0x10;
    *(long *)pOVar13 = *(long *)pOVar13 + -1;
    UNLOCK();
    if (*(long *)pOVar13 == 0) {
      local_1238 = (char *)0x0;
      Memory::free_static(pOVar3 + -0x10,false);
    }
  }
  lVar8 = local_1248;
  if (local_1248 != 0) {
    LOCK();
    plVar17 = (long *)(local_1248 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1248 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_1240;
  if (local_1240 != 0) {
    LOCK();
    plVar17 = (long *)(local_1240 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1240 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  local_1218[0] = &PTR__initialize_classv_00104d60;
  if (((local_1098 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar3 = local_1098, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_1098), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  local_1218[0] = &PTR__initialize_classv_00104c00;
  Object::~Object((Object *)local_1218);
  goto LAB_00102860;
LAB_00102c08:
  lVar8 = 0;
LAB_00102701:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
  while( true ) {
    LOCK();
    lVar14 = *plVar17;
    bVar19 = lVar8 == lVar14;
    if (bVar19) {
      *plVar17 = lVar8 + 1;
      lVar14 = lVar8;
    }
    UNLOCK();
    if (bVar19) break;
LAB_00102e20:
    lVar8 = *plVar17;
    if (lVar8 == 0) goto LAB_00102e41;
  }
  if (lVar14 != -1) {
    local_1240 = *(long *)(lVar9 + lVar10);
  }
LAB_00102e41:
  local_1248 = 0;
  local_1238 = "LipO: Can\'t open file: \"%s\".";
  uStack_1230 = 0x1c;
  String::parse_latin1((StrRange *)&local_1248);
  vformat<String>((String *)&local_1238,(StrRange *)&local_1248,&local_1240);
  _err_print_error("create_file","editor/export/lipo.cpp",0x46,
                   "Method/function failed. Returning: false",(String *)&local_1238,0,0);
  pOVar3 = (Object *)local_1238;
  if ((Object *)local_1238 != (Object *)0x0) {
    LOCK();
    pOVar13 = (Object *)local_1238 + -0x10;
    *(long *)pOVar13 = *(long *)pOVar13 + -1;
    UNLOCK();
    if (*(long *)pOVar13 == 0) {
      local_1238 = (char *)0x0;
      Memory::free_static(pOVar3 + -0x10,false);
    }
  }
  lVar8 = local_1248;
  if (local_1248 != 0) {
    LOCK();
    plVar17 = (long *)(local_1248 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1248 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_1240;
  if (local_1240 != 0) {
    LOCK();
    plVar17 = (long *)(local_1240 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_1240 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (((local_1250 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_1250), cVar5 != '\0')) {
    (**(code **)(*(long *)local_1250 + 0x140))(local_1250);
    Memory::free_static(local_1250,false);
  }
LAB_00102860:
  uVar11 = 0;
LAB_00102862:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
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
  return (uint)CONCAT71(0x1050,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1050,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104c00;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104c00;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<LipO::FatArch>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<LipO::FatArch>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_001035a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001035a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010360e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010360e:
  return &_get_class_namev()::_class_name_static;
}



/* MachO::~MachO() */

void __thiscall MachO::~MachO(MachO *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00104d60;
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00104c00;
  Object::~Object((Object *)this);
  return;
}



/* MachO::~MachO() */

void __thiscall MachO::~MachO(MachO *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00104d60;
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00104c00;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
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
            if (lVar5 == 0) goto LAB_00103a4f;
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
LAB_00103a4f:
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
    if (cVar6 != '\0') goto LAB_00103b03;
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
              if (lVar5 == 0) goto LAB_00103bb3;
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
LAB_00103bb3:
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
      if (cVar6 != '\0') goto LAB_00103b03;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103b03:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
LAB_00103dd8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103dd8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103df6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103df6:
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



/* WARNING: Removing unreachable block (ram,0x00104428) */
/* WARNING: Removing unreachable block (ram,0x00104558) */
/* WARNING: Removing unreachable block (ram,0x00104720) */
/* WARNING: Removing unreachable block (ram,0x00104564) */
/* WARNING: Removing unreachable block (ram,0x0010456e) */
/* WARNING: Removing unreachable block (ram,0x00104700) */
/* WARNING: Removing unreachable block (ram,0x0010457a) */
/* WARNING: Removing unreachable block (ram,0x00104584) */
/* WARNING: Removing unreachable block (ram,0x001046e0) */
/* WARNING: Removing unreachable block (ram,0x00104590) */
/* WARNING: Removing unreachable block (ram,0x0010459a) */
/* WARNING: Removing unreachable block (ram,0x001046c0) */
/* WARNING: Removing unreachable block (ram,0x001045a6) */
/* WARNING: Removing unreachable block (ram,0x001045b0) */
/* WARNING: Removing unreachable block (ram,0x001046a0) */
/* WARNING: Removing unreachable block (ram,0x001045bc) */
/* WARNING: Removing unreachable block (ram,0x001045c6) */
/* WARNING: Removing unreachable block (ram,0x00104680) */
/* WARNING: Removing unreachable block (ram,0x001045d2) */
/* WARNING: Removing unreachable block (ram,0x001045dc) */
/* WARNING: Removing unreachable block (ram,0x00104660) */
/* WARNING: Removing unreachable block (ram,0x001045e4) */
/* WARNING: Removing unreachable block (ram,0x001045fa) */
/* WARNING: Removing unreachable block (ram,0x00104606) */
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



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<LipO::FatArch>::_realloc(long) */

undefined8 __thiscall CowData<LipO::FatArch>::_realloc(CowData<LipO::FatArch> *this,long param_1)

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
/* Error CowData<LipO::FatArch>::resize<false>(long) */

undefined8 __thiscall
CowData<LipO::FatArch>::resize<false>(CowData<LipO::FatArch> *this,long param_1)

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
    lVar3 = lVar9 * 0x20;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_00104b30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x20 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00104b30;
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
        goto LAB_00104a41;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00104a41:
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
/* MachO::~MachO() */

void __thiscall MachO::~MachO(MachO *this)

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


