
/* List<FileInfo, DefaultAllocator>::reverse() [clone .isra.0] */

void __thiscall List<FileInfo,DefaultAllocator>::reverse(List<FileInfo,DefaultAllocator> *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long in_FS_OFFSET;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_60;
  undefined1 local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (List<FileInfo,DefaultAllocator> *)0x0) {
    iVar2 = *(int *)(this + 0x10);
    plVar6 = *(long **)this;
    plVar5 = *(long **)(this + 8);
    if (1 < iVar2) {
      iVar7 = 0;
      do {
        local_78 = plVar6[2];
        lStack_70 = plVar6[3];
        local_60 = plVar6[5];
        plVar6[2] = 0;
        local_88 = *plVar6;
        lStack_80 = plVar6[1];
        plVar6[1] = 0;
        *plVar6 = 0;
        plVar6[3] = 0;
        local_58 = (undefined1)plVar6[6];
        plVar6[5] = 0;
        local_50 = plVar6[7];
        lVar3 = *plVar5;
        lVar4 = *plVar6;
        if (lVar4 != lVar3) {
          if (lVar4 != 0) {
            LOCK();
            plVar1 = (long *)(lVar4 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
              lVar3 = *plVar5;
            }
            else {
              *plVar6 = 0;
              lVar3 = *plVar5;
            }
          }
          *plVar6 = lVar3;
          *plVar5 = 0;
        }
        lVar3 = plVar6[1];
        lVar4 = plVar5[1];
        if (lVar3 != lVar4) {
          if (lVar3 != 0) {
            LOCK();
            plVar1 = (long *)(lVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
              lVar4 = plVar5[1];
            }
            else {
              plVar6[1] = 0;
              lVar4 = plVar5[1];
            }
          }
          plVar6[1] = lVar4;
          plVar5[1] = 0;
        }
        lVar3 = plVar6[2];
        lVar4 = plVar5[2];
        if (lVar3 != lVar4) {
          if (lVar3 != 0) {
            LOCK();
            plVar1 = (long *)(lVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
              lVar4 = plVar5[2];
            }
            else {
              plVar6[2] = 0;
              lVar4 = plVar5[2];
            }
          }
          plVar6[2] = lVar4;
          plVar5[2] = 0;
        }
        if (plVar6[3] != plVar5[3]) {
          StringName::unref();
          plVar6[3] = plVar5[3];
          plVar5[3] = 0;
        }
        if (plVar6[5] != plVar5[5]) {
          CowData<String>::_unref((CowData<String> *)(plVar6 + 5));
          plVar6[5] = plVar5[5];
          plVar5[5] = 0;
        }
        *(char *)(plVar6 + 6) = (char)plVar5[6];
        plVar6[7] = plVar5[7];
        lVar3 = *plVar5;
        if (lVar3 != local_88) {
          if (lVar3 != 0) {
            LOCK();
            plVar1 = (long *)(lVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
            else {
              *plVar5 = 0;
            }
          }
          *plVar5 = local_88;
          local_88 = 0;
        }
        lVar3 = plVar5[1];
        if (lVar3 != lStack_80) {
          if (lVar3 != 0) {
            LOCK();
            plVar1 = (long *)(lVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = plVar5[1];
              plVar5[1] = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
            else {
              plVar5[1] = 0;
            }
          }
          plVar5[1] = lStack_80;
          lStack_80 = 0;
        }
        lVar3 = plVar5[2];
        if (lVar3 != local_78) {
          if (lVar3 != 0) {
            LOCK();
            plVar1 = (long *)(lVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = plVar5[2];
              plVar5[2] = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
            else {
              plVar5[2] = 0;
            }
          }
          plVar5[2] = local_78;
          local_78 = 0;
        }
        if (plVar5[3] != lStack_70) {
          StringName::unref();
          plVar5[3] = lStack_70;
          lStack_70 = 0;
        }
        if (plVar5[5] != local_60) {
          CowData<String>::_unref((CowData<String> *)(plVar5 + 5));
          plVar5[5] = local_60;
          local_60 = 0;
        }
        *(undefined1 *)(plVar5 + 6) = local_58;
        plVar5[7] = local_50;
        CowData<String>::_unref((CowData<String> *)&local_60);
        if ((StringName::configured != '\0') && (lStack_70 != 0)) {
          StringName::unref();
        }
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_78 + -0x10),false);
          }
        }
        if (lStack_80 != 0) {
          LOCK();
          plVar1 = (long *)(lStack_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(lStack_80 + -0x10),false);
          }
        }
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_88 + -0x10),false);
          }
        }
        iVar7 = iVar7 + 1;
        plVar6 = (long *)plVar6[8];
        plVar5 = (long *)plVar5[9];
      } while (iVar7 < iVar2 / 2);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* sort_file_info_list(List<FileInfo, DefaultAllocator>&, FileSortOption) */

undefined1  [16] sort_file_info_list(List<FileInfo,DefaultAllocator> *param_1,undefined4 param_2)

{
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uStack_10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  
  switch(param_2) {
  case 0:
    List<FileInfo,DefaultAllocator>::sort_custom<Comparator<FileInfo>>(param_1);
    auVar3._8_8_ = extraout_RDX_00;
    auVar3._0_8_ = extraout_RAX_00;
    return auVar3;
  case 1:
    List<FileInfo,DefaultAllocator>::sort_custom<Comparator<FileInfo>>(param_1);
    auVar2 = List<FileInfo,DefaultAllocator>::reverse(*(List<FileInfo,DefaultAllocator> **)param_1);
    return auVar2;
  case 2:
    List<FileInfo,DefaultAllocator>::sort_custom<FileInfoTypeComparator>(param_1);
    auVar4._8_8_ = extraout_RDX_01;
    auVar4._0_8_ = extraout_RAX_01;
    return auVar4;
  case 3:
    List<FileInfo,DefaultAllocator>::sort_custom<FileInfoTypeComparator>(param_1);
    auVar2 = List<FileInfo,DefaultAllocator>::reverse(*(List<FileInfo,DefaultAllocator> **)param_1);
    return auVar2;
  case 4:
    List<FileInfo,DefaultAllocator>::sort_custom<FileInfoModifiedTimeComparator>(param_1);
    auVar1._8_8_ = extraout_RDX;
    auVar1._0_8_ = extraout_RAX;
    return auVar1;
  case 5:
    List<FileInfo,DefaultAllocator>::sort_custom<FileInfoModifiedTimeComparator>(param_1);
    auVar2 = List<FileInfo,DefaultAllocator>::reverse(*(List<FileInfo,DefaultAllocator> **)param_1);
    return auVar2;
  default:
    _err_print_error("sort_file_info_list","editor/file_info.cpp",0x3a,"Method/function failed.",
                     "Invalid file sort option.",0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_10;
    return auVar2 << 0x40;
  }
}



/* SortArray<List<FileInfo, DefaultAllocator>::Element*, List<FileInfo,
   DefaultAllocator>::AuxiliaryComparator<FileInfoModifiedTimeComparator>, true>::introsort(long,
   long, List<FileInfo, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<FileInfo,DefaultAllocator>::Element*,List<FileInfo,DefaultAllocator>::AuxiliaryComparator<FileInfoModifiedTimeComparator>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  ulong uVar1;
  Element *pEVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Element **ppEVar6;
  ulong uVar7;
  Element **ppEVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  Element *pEVar12;
  ulong uVar13;
  Element *pEVar14;
  Element **ppEVar15;
  long lVar16;
  long local_58;
  
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_001007a2:
    lVar10 = lVar16 + -2 >> 1;
    lVar11 = lVar10 * 2 + 2;
    ppEVar8 = param_3 + param_1 + lVar10;
    pEVar12 = *ppEVar8;
    lVar5 = lVar10;
    lVar9 = lVar11;
    if (lVar16 <= lVar11) goto LAB_001008ae;
LAB_001007e3:
    do {
      pEVar2 = param_3[param_1 + lVar11];
      pEVar14 = param_3[param_1 + lVar11 + -1];
      lVar3 = lVar11 + -1;
      lVar4 = lVar11;
      ppEVar6 = param_3 + param_1 + lVar11 + -1;
      if (*(ulong *)(pEVar2 + 0x38) <= *(ulong *)(pEVar14 + 0x38)) {
        lVar4 = lVar11 + 1;
        lVar3 = lVar11;
        pEVar14 = pEVar2;
        ppEVar6 = param_3 + param_1 + lVar11;
      }
      lVar11 = lVar4 * 2;
      param_3[lVar5 + param_1] = pEVar14;
      lVar5 = lVar3;
    } while (lVar16 != lVar11 && SBORROW8(lVar16,lVar11) == lVar16 + lVar4 * -2 < 0);
    ppEVar15 = ppEVar6;
    if (lVar16 == lVar11) goto LAB_001008b4;
    do {
      lVar11 = lVar9;
      lVar9 = lVar3 + -1;
      if (lVar3 <= lVar10) goto LAB_001009f2;
      uVar7 = *(ulong *)(pEVar12 + 0x38);
      do {
        lVar5 = lVar9 >> 1;
        pEVar2 = param_3[param_1 + lVar5];
        if (*(ulong *)(pEVar2 + 0x38) <= uVar7) {
          param_3[lVar3 + param_1] = pEVar12;
          goto joined_r0x0010088e;
        }
        param_3[lVar3 + param_1] = pEVar2;
        lVar9 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
        lVar3 = lVar5;
      } while (lVar10 < lVar5);
      param_3[param_1 + lVar5] = pEVar12;
joined_r0x0010088e:
      if (lVar10 == 0) {
        ppEVar8 = param_3 + param_1;
        lVar16 = (param_2 + -1) - param_1;
        goto LAB_001008f0;
      }
      while( true ) {
        ppEVar8 = ppEVar8 + -1;
        lVar11 = lVar11 + -2;
        lVar10 = lVar10 + -1;
        pEVar12 = *ppEVar8;
        lVar5 = lVar10;
        lVar9 = lVar11;
        if (lVar11 < lVar16) goto LAB_001007e3;
LAB_001008ae:
        lVar9 = lVar11;
        ppEVar15 = ppEVar8;
        ppEVar6 = ppEVar8;
        if (lVar11 == lVar16) break;
LAB_001009f2:
        *ppEVar6 = pEVar12;
      }
LAB_001008b4:
      lVar3 = lVar11 + -1;
      ppEVar6 = param_3 + param_1 + lVar3;
      *ppEVar15 = *ppEVar6;
    } while( true );
  }
  lVar11 = param_2;
  local_58 = param_4;
LAB_001005e1:
  pEVar12 = param_3[lVar11 + -1];
  local_58 = local_58 + -1;
  uVar13 = *(ulong *)(pEVar12 + 0x38);
  uVar7 = *(ulong *)(param_3[param_1] + 0x38);
  uVar1 = *(ulong *)(param_3[(lVar16 >> 1) + param_1] + 0x38);
  if (uVar1 < uVar7) {
    if (uVar13 < uVar1) {
LAB_00100774:
      pEVar12 = param_3[(lVar16 >> 1) + param_1];
      uVar13 = uVar1;
      goto LAB_00100627;
    }
    if (uVar13 < uVar7) goto LAB_00100627;
  }
  else if (uVar7 <= uVar13) {
    if (uVar13 < uVar1) goto LAB_00100627;
    goto LAB_00100774;
  }
  pEVar12 = param_3[param_1];
  uVar13 = uVar7;
LAB_00100627:
  lVar16 = lVar11;
  param_2 = param_1;
  do {
    if (uVar13 < uVar7) {
      if (lVar11 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        uVar13 = *(ulong *)(pEVar12 + 0x38);
        goto LAB_00100668;
      }
    }
    else {
LAB_00100668:
      lVar9 = lVar16 + -1;
      ppEVar8 = param_3 + lVar9;
      if (*(ulong *)(*ppEVar8 + 0x38) < uVar13) {
        ppEVar6 = param_3 + lVar16 + -2;
        while (param_1 != lVar9) {
          lVar9 = lVar9 + -1;
          ppEVar8 = ppEVar6;
          if (uVar13 <= *(ulong *)(*ppEVar6 + 0x38)) goto LAB_001006ce;
          ppEVar6 = ppEVar6 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_001006ce:
      if (lVar9 <= param_2) break;
      pEVar2 = param_3[param_2];
      param_3[param_2] = *ppEVar8;
      uVar13 = *(ulong *)(pEVar12 + 0x38);
      *ppEVar8 = pEVar2;
      lVar16 = lVar9;
    }
    lVar9 = param_2 + 1;
    param_2 = param_2 + 1;
    uVar7 = *(ulong *)(param_3[lVar9] + 0x38);
  } while( true );
  introsort(param_2,lVar11,param_3,local_58);
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  lVar11 = param_2;
  if (local_58 == 0) goto LAB_001007a2;
  goto LAB_001005e1;
LAB_001008f0:
  pEVar12 = ppEVar8[lVar16];
  ppEVar8[lVar16] = *ppEVar8;
  if (lVar16 < 3) {
    if (lVar16 != 2) {
      *ppEVar8 = pEVar12;
      return;
    }
    lVar11 = param_1 + 1;
    lVar9 = 0;
    lVar16 = 1;
    *ppEVar8 = param_3[lVar11];
LAB_00100976:
    uVar7 = *(ulong *)(pEVar12 + 0x38);
    while( true ) {
      ppEVar6 = param_3 + lVar11;
      pEVar2 = param_3[param_1 + lVar9];
      if (*(ulong *)(pEVar2 + 0x38) <= uVar7) break;
      *ppEVar6 = pEVar2;
      if (lVar9 == 0) {
        param_3[param_1 + lVar9] = pEVar12;
        goto LAB_001008f0;
      }
      lVar11 = param_1 + lVar9;
      lVar9 = (lVar9 + -1) / 2;
    }
  }
  else {
    lVar11 = 2;
    lVar9 = 0;
    do {
      pEVar2 = param_3[param_1 + lVar11];
      pEVar14 = param_3[param_1 + lVar11 + -1];
      lVar5 = lVar11 + -1;
      ppEVar6 = param_3 + param_1 + lVar11 + -1;
      lVar10 = lVar11;
      if (*(ulong *)(pEVar2 + 0x38) <= *(ulong *)(pEVar14 + 0x38)) {
        lVar10 = lVar11 + 1;
        lVar5 = lVar11;
        ppEVar6 = param_3 + param_1 + lVar11;
        pEVar14 = pEVar2;
      }
      lVar11 = lVar10 * 2;
      param_3[lVar9 + param_1] = pEVar14;
      lVar9 = lVar5;
    } while (lVar16 != lVar11 && SBORROW8(lVar16,lVar11) == lVar16 + lVar10 * -2 < 0);
    if (lVar16 == lVar11) {
      lVar11 = param_1 + lVar16 + -1;
      lVar9 = lVar16 + -2 >> 1;
      *ppEVar6 = param_3[lVar11];
      lVar16 = lVar16 + -1;
      goto LAB_00100976;
    }
    lVar11 = param_1 + lVar5;
    lVar16 = lVar16 + -1;
    lVar9 = (lVar5 + -1) / 2;
    if (0 < lVar5) goto LAB_00100976;
  }
  *ppEVar6 = pEVar12;
  goto LAB_001008f0;
}



/* SortArray<List<FileInfo, DefaultAllocator>::Element*, List<FileInfo,
   DefaultAllocator>::AuxiliaryComparator<Comparator<FileInfo> >, true>::introsort(long, long,
   List<FileInfo, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<FileInfo,DefaultAllocator>::Element*,List<FileInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<FileInfo>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  String *pSVar1;
  Element *pEVar2;
  char cVar3;
  Element **ppEVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  Element **ppEVar9;
  Element **ppEVar10;
  long lVar11;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Element **local_50;
  
  lVar8 = param_2 - param_1;
  if (lVar8 < 0x11) {
    return;
  }
  local_78 = param_2;
  if (param_4 != 0) {
    ppEVar10 = param_3 + param_1;
    local_68 = param_2;
    local_60 = param_4;
LAB_00100a80:
    local_60 = local_60 + -1;
    ppEVar4 = param_3 + (lVar8 >> 1) + param_1;
    cVar3 = String::filenocasecmp_to((String *)*ppEVar10);
    if (cVar3 < '\0') {
      cVar3 = String::filenocasecmp_to((String *)*ppEVar4);
      ppEVar9 = ppEVar4;
      if (cVar3 < '\0') goto LAB_00100adf;
      cVar3 = String::filenocasecmp_to((String *)*ppEVar10);
      ppEVar4 = ppEVar10;
    }
    else {
      cVar3 = String::filenocasecmp_to((String *)*ppEVar10);
      ppEVar9 = ppEVar10;
      if (cVar3 < '\0') goto LAB_00100adf;
      cVar3 = String::filenocasecmp_to((String *)*ppEVar4);
    }
    ppEVar9 = ppEVar4;
    if (cVar3 < '\0') {
      ppEVar9 = param_3 + local_68 + -1;
    }
LAB_00100adf:
    pSVar1 = (String *)*ppEVar9;
    lVar8 = local_68;
    local_78 = param_1;
    do {
      cVar3 = String::filenocasecmp_to((String *)param_3[local_78]);
      if (cVar3 < '\0') {
        if (local_68 + -1 == local_78) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00100b14;
        }
      }
      else {
LAB_00100b14:
        lVar8 = lVar8 + -1;
        ppEVar4 = param_3 + lVar8;
        while (cVar3 = String::filenocasecmp_to(pSVar1), cVar3 < '\0') {
          if (param_1 == lVar8) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          lVar8 = lVar8 + -1;
          ppEVar4 = ppEVar4 + -1;
        }
        if (lVar8 <= local_78) goto LAB_00100bb8;
        pEVar2 = param_3[local_78];
        param_3[local_78] = *ppEVar4;
        *ppEVar4 = pEVar2;
      }
      local_78 = local_78 + 1;
    } while( true );
  }
LAB_00100c44:
  lVar7 = lVar8 + -2 >> 1;
  local_50 = param_3 + param_1 + lVar7;
  local_58 = lVar7 * 2 + 2;
  do {
    pEVar2 = *local_50;
    lVar5 = local_58;
    local_70 = lVar7;
    if (local_58 < lVar8) {
      do {
        cVar3 = String::filenocasecmp_to((String *)param_3[param_1 + lVar5]);
        lVar6 = lVar5 + -1;
        ppEVar10 = param_3 + param_1 + lVar5 + -1;
        lVar11 = lVar5;
        if (-1 < cVar3) {
          lVar11 = lVar5 + 1;
          lVar6 = lVar5;
          ppEVar10 = param_3 + param_1 + lVar5;
        }
        lVar5 = lVar11 * 2;
        param_3[local_70 + param_1] = *ppEVar10;
        local_70 = lVar6;
      } while (lVar5 < lVar8);
      ppEVar4 = ppEVar10;
      if (lVar5 == lVar8) {
LAB_00100f0c:
        lVar6 = lVar5 + -1;
        ppEVar10 = param_3 + param_1 + lVar6;
        *ppEVar4 = *ppEVar10;
      }
      lVar5 = lVar6 + -1;
      if (lVar6 <= lVar7) goto LAB_00100f5d;
      do {
        lVar11 = lVar5 >> 1;
        ppEVar10 = param_3 + param_1 + lVar11;
        cVar3 = String::filenocasecmp_to((String *)*ppEVar10);
        if (-1 < cVar3) {
          param_3[lVar6 + param_1] = pEVar2;
          goto joined_r0x00100dcc;
        }
        param_3[lVar6 + param_1] = *ppEVar10;
        lVar5 = (lVar11 + -1) - (lVar11 + -1 >> 0x3f);
        lVar6 = lVar11;
      } while (lVar7 < lVar11);
      *ppEVar10 = pEVar2;
joined_r0x00100dcc:
      if (lVar7 == 0) goto LAB_00100dce;
    }
    else {
      ppEVar4 = local_50;
      ppEVar10 = local_50;
      if (local_58 == lVar8) goto LAB_00100f0c;
LAB_00100f5d:
      *ppEVar10 = pEVar2;
    }
    local_50 = local_50 + -1;
    lVar7 = lVar7 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_00100bb8:
  introsort(local_78,local_68,param_3,local_60);
  lVar8 = local_78 - param_1;
  if (lVar8 < 0x11) {
    return;
  }
  local_68 = local_78;
  if (local_60 == 0) goto LAB_00100c44;
  goto LAB_00100a80;
LAB_00100dce:
  ppEVar10 = param_3 + param_1;
  local_68 = (local_78 + -1) - param_1;
LAB_00100df0:
  do {
    pEVar2 = ppEVar10[local_68];
    ppEVar10[local_68] = *ppEVar10;
    if (local_68 < 3) {
      if (local_68 != 2) {
        *ppEVar10 = pEVar2;
        return;
      }
      lVar8 = param_1 + 1;
      lVar7 = 0;
      *ppEVar10 = param_3[lVar8];
LAB_00100ed0:
      while( true ) {
        ppEVar9 = param_3 + param_1 + lVar7;
        cVar3 = String::filenocasecmp_to((String *)*ppEVar9);
        ppEVar4 = param_3 + lVar8;
        if (-1 < cVar3) break;
        *ppEVar4 = *ppEVar9;
        if (lVar7 == 0) {
          local_68 = local_68 + -1;
          *ppEVar9 = pEVar2;
          goto LAB_00100df0;
        }
        lVar8 = param_1 + lVar7;
        lVar7 = (lVar7 + -1) / 2;
      }
    }
    else {
      local_78 = 0;
      lVar8 = 2;
      do {
        cVar3 = String::filenocasecmp_to((String *)param_3[param_1 + lVar8]);
        lVar7 = lVar8;
        lVar5 = lVar8 + -1;
        ppEVar4 = param_3 + param_1 + lVar8 + -1;
        if (-1 < cVar3) {
          lVar7 = lVar8 + 1;
          lVar5 = lVar8;
          ppEVar4 = param_3 + param_1 + lVar8;
        }
        lVar8 = lVar7 * 2;
        param_3[local_78 + param_1] = *ppEVar4;
        local_78 = lVar5;
      } while (lVar8 < local_68);
      if (lVar8 == local_68) {
        lVar8 = local_68 + -1 + param_1;
        lVar7 = local_68 + -2 >> 1;
        *ppEVar4 = param_3[lVar8];
        goto LAB_00100ed0;
      }
      lVar8 = param_1 + lVar5;
      lVar7 = (lVar5 + -1) / 2;
      if (0 < lVar5) goto LAB_00100ed0;
    }
    local_68 = local_68 + -1;
    *ppEVar4 = pEVar2;
  } while( true );
}



/* FileInfoTypeComparator::TEMPNAMEPLACEHOLDERVALUE(FileInfo const&, FileInfo const&) const [clone
   .isra.0] */

ulong FileInfoTypeComparator::operator()(FileInfo *param_1,FileInfo *param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_basename();
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
LAB_00101321:
    local_78 = 0;
  }
  else {
    pcVar3 = *(char **)(lVar2 + 8);
    local_78 = 0;
    if (pcVar3 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
      if (*(long *)(lVar2 + 0x10) != 0) {
        do {
          lVar4 = *plVar1;
          if (lVar4 == 0) goto LAB_00101321;
          LOCK();
          lVar6 = *plVar1;
          bVar7 = lVar4 == lVar6;
          if (bVar7) {
            *plVar1 = lVar4 + 1;
            lVar6 = lVar4;
          }
          UNLOCK();
        } while (!bVar7);
        if (lVar6 != -1) {
          local_78 = *(long *)(lVar2 + 0x10);
          goto LAB_00101023;
        }
      }
      goto LAB_00101321;
    }
    local_50 = strlen(pcVar3);
    local_58 = pcVar3;
    String::parse_latin1((StrRange *)&local_78);
  }
LAB_00101023:
  String::get_extension();
  String::operator+((String *)&local_70,(String *)&local_80);
  String::operator+((String *)&local_60,(String *)&local_70);
  String::get_basename();
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    pcVar3 = *(char **)(lVar2 + 8);
    local_98 = 0;
    if (pcVar3 != (char *)0x0) {
      local_50 = strlen(pcVar3);
      local_58 = pcVar3;
      String::parse_latin1((StrRange *)&local_98);
      goto LAB_001010b0;
    }
    plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
    if (*(long *)(lVar2 + 0x10) != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00101341;
        LOCK();
        lVar6 = *plVar1;
        bVar7 = lVar4 == lVar6;
        if (bVar7) {
          *plVar1 = lVar4 + 1;
          lVar6 = lVar4;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar6 != -1) {
        local_98 = *(long *)(lVar2 + 0x10);
      }
      goto LAB_001010b0;
    }
  }
LAB_00101341:
  local_98 = 0;
LAB_001010b0:
  String::get_extension();
  String::operator+((String *)&local_90,(String *)&local_a0);
  String::operator+((String *)&local_58,(String *)&local_90);
  uVar5 = String::filenocasecmp_to((String *)&local_58);
  pcVar3 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
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
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
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
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)uVar5 >> 8),(byte)uVar5 >> 7) & 0xffffffff;
}



/* SortArray<List<FileInfo, DefaultAllocator>::Element*, List<FileInfo,
   DefaultAllocator>::AuxiliaryComparator<FileInfoTypeComparator>, true>::introsort(long, long,
   List<FileInfo, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<FileInfo,DefaultAllocator>::Element*,List<FileInfo,DefaultAllocator>::AuxiliaryComparator<FileInfoTypeComparator>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element **ppEVar1;
  FileInfo *pFVar2;
  Element *pEVar3;
  char cVar4;
  Element **ppEVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Element **ppEVar10;
  Element **ppEVar11;
  long lVar12;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Element **local_50;
  
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_78 = param_2;
  if (param_4 != 0) {
    ppEVar11 = param_3 + param_1;
    local_68 = param_2;
    local_60 = param_4;
LAB_001013f1:
    local_60 = local_60 + -1;
    ppEVar1 = param_3 + (lVar9 >> 1) + param_1;
    ppEVar5 = param_3 + local_68 + -1;
    cVar4 = FileInfoTypeComparator::operator()((FileInfo *)*ppEVar11,(FileInfo *)*ppEVar1);
    if (cVar4 == '\0') {
      cVar4 = FileInfoTypeComparator::operator()((FileInfo *)*ppEVar11,(FileInfo *)*ppEVar5);
      ppEVar10 = ppEVar11;
      if (cVar4 != '\0') goto LAB_0010144d;
      cVar4 = FileInfoTypeComparator::operator()((FileInfo *)*ppEVar1,(FileInfo *)*ppEVar5);
    }
    else {
      cVar4 = FileInfoTypeComparator::operator()((FileInfo *)*ppEVar1,(FileInfo *)*ppEVar5);
      ppEVar10 = ppEVar1;
      if (cVar4 != '\0') goto LAB_0010144d;
      cVar4 = FileInfoTypeComparator::operator()((FileInfo *)*ppEVar11,(FileInfo *)*ppEVar5);
      ppEVar1 = ppEVar11;
    }
    ppEVar10 = ppEVar1;
    if (cVar4 != '\0') {
      ppEVar10 = ppEVar5;
    }
LAB_0010144d:
    pFVar2 = (FileInfo *)*ppEVar10;
    lVar9 = local_68;
    local_78 = param_1;
    do {
      cVar4 = FileInfoTypeComparator::operator()((FileInfo *)param_3[local_78],pFVar2);
      if (cVar4 == '\0') {
LAB_00101494:
        lVar9 = lVar9 + -1;
        ppEVar5 = param_3 + lVar9;
        while (cVar4 = FileInfoTypeComparator::operator()(pFVar2,(FileInfo *)*ppEVar5),
              cVar4 != '\0') {
          if (param_1 == lVar9) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          lVar9 = lVar9 + -1;
          ppEVar5 = ppEVar5 + -1;
        }
        if (lVar9 <= local_78) goto LAB_00101500;
        pEVar3 = param_3[local_78];
        param_3[local_78] = *ppEVar5;
        *ppEVar5 = pEVar3;
      }
      else if (local_68 + -1 == local_78) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_00101494;
      }
      local_78 = local_78 + 1;
    } while( true );
  }
LAB_001015c2:
  lVar7 = lVar9 + -2 >> 1;
  local_50 = param_3 + param_1 + lVar7;
  local_58 = lVar7 * 2 + 2;
  do {
    pFVar2 = (FileInfo *)*local_50;
    lVar6 = local_58;
    local_70 = lVar7;
    if (local_58 < lVar9) {
      do {
        cVar4 = FileInfoTypeComparator::operator()
                          ((FileInfo *)param_3[param_1 + lVar6],
                           (FileInfo *)param_3[param_1 + lVar6 + -1]);
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar6 + -1;
        lVar12 = lVar6;
        if (cVar4 == '\0') {
          lVar12 = lVar6 + 1;
          lVar8 = lVar6;
          ppEVar11 = param_3 + param_1 + lVar6;
        }
        lVar6 = lVar12 * 2;
        param_3[local_70 + param_1] = *ppEVar11;
        local_70 = lVar8;
      } while (lVar6 < lVar9);
      ppEVar5 = ppEVar11;
      if (lVar6 == lVar9) {
LAB_0010188d:
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar8;
        *ppEVar5 = *ppEVar11;
      }
      lVar6 = lVar8 + -1;
      if (lVar8 <= lVar7) goto LAB_001018de;
      do {
        lVar12 = lVar6 >> 1;
        ppEVar11 = param_3 + param_1 + lVar12;
        cVar4 = FileInfoTypeComparator::operator()((FileInfo *)*ppEVar11,pFVar2);
        if (cVar4 == '\0') {
          param_3[lVar8 + param_1] = (Element *)pFVar2;
          goto joined_r0x0010174d;
        }
        param_3[lVar8 + param_1] = *ppEVar11;
        lVar6 = (lVar12 + -1) - (lVar12 + -1 >> 0x3f);
        lVar8 = lVar12;
      } while (lVar7 < lVar12);
      *ppEVar11 = (Element *)pFVar2;
joined_r0x0010174d:
      if (lVar7 == 0) goto LAB_0010174f;
    }
    else {
      ppEVar5 = local_50;
      ppEVar11 = local_50;
      if (local_58 == lVar9) goto LAB_0010188d;
LAB_001018de:
      *ppEVar11 = (Element *)pFVar2;
    }
    local_50 = local_50 + -1;
    lVar7 = lVar7 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_00101500:
  introsort(local_78,local_68,param_3,local_60);
  lVar9 = local_78 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_68 = local_78;
  if (local_60 == 0) goto LAB_001015c2;
  goto LAB_001013f1;
LAB_0010174f:
  ppEVar11 = param_3 + param_1;
  local_68 = (local_78 + -1) - param_1;
LAB_00101770:
  do {
    pFVar2 = (FileInfo *)ppEVar11[local_68];
    ppEVar11[local_68] = *ppEVar11;
    if (local_68 < 3) {
      if (local_68 != 2) {
        *ppEVar11 = (Element *)pFVar2;
        return;
      }
      lVar9 = param_1 + 1;
      lVar7 = 0;
      *ppEVar11 = param_3[lVar9];
LAB_00101851:
      while( true ) {
        ppEVar1 = param_3 + param_1 + lVar7;
        cVar4 = FileInfoTypeComparator::operator()((FileInfo *)*ppEVar1,pFVar2);
        ppEVar5 = param_3 + lVar9;
        if (cVar4 == '\0') break;
        *ppEVar5 = *ppEVar1;
        if (lVar7 == 0) {
          local_68 = local_68 + -1;
          *ppEVar1 = (Element *)pFVar2;
          goto LAB_00101770;
        }
        lVar9 = param_1 + lVar7;
        lVar7 = (lVar7 + -1) / 2;
      }
    }
    else {
      local_78 = 0;
      lVar9 = 2;
      do {
        cVar4 = FileInfoTypeComparator::operator()
                          ((FileInfo *)param_3[param_1 + lVar9],
                           (FileInfo *)param_3[param_1 + lVar9 + -1]);
        lVar6 = lVar9 + -1;
        lVar7 = lVar9;
        ppEVar5 = param_3 + param_1 + lVar9 + -1;
        if (cVar4 == '\0') {
          lVar7 = lVar9 + 1;
          lVar6 = lVar9;
          ppEVar5 = param_3 + param_1 + lVar9;
        }
        lVar9 = lVar7 * 2;
        param_3[local_78 + param_1] = *ppEVar5;
        local_78 = lVar6;
      } while (lVar9 < local_68);
      if (lVar9 == local_68) {
        lVar9 = local_68 + -1 + param_1;
        lVar7 = local_68 + -2 >> 1;
        *ppEVar5 = param_3[lVar9];
        goto LAB_00101851;
      }
      lVar9 = param_1 + lVar6;
      lVar7 = (lVar6 + -1) / 2;
      if (0 < lVar6) goto LAB_00101851;
    }
    local_68 = local_68 + -1;
    *ppEVar5 = (Element *)pFVar2;
  } while( true );
}



/* void List<FileInfo, DefaultAllocator>::sort_custom<FileInfoTypeComparator>() */

void __thiscall
List<FileInfo,DefaultAllocator>::sort_custom<FileInfoTypeComparator>
          (List<FileInfo,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  Element *pEVar4;
  Element **__src;
  Element **ppEVar5;
  Element **ppEVar6;
  long lVar7;
  FileInfo *pFVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar4;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = __src;
    for (pEVar10 = (Element *)**(long **)this; pEVar10 != (Element *)0x0;
        pEVar10 = *(Element **)(pEVar10 + 0x40)) {
      *ppEVar5 = pEVar10;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar7 = 0;
  pEVar10 = pEVar4;
  do {
    pEVar10 = (Element *)((long)pEVar10 >> 1);
    lVar7 = lVar7 + 1;
  } while (pEVar10 != (Element *)0x1);
  SortArray<List<FileInfo,DefaultAllocator>::Element*,List<FileInfo,DefaultAllocator>::AuxiliaryComparator<FileInfoTypeComparator>,true>
  ::introsort(0,(long)pEVar4,__src,lVar7 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar10 = (Element *)0x1;
    pEVar11 = *__src;
    do {
      while( true ) {
        pFVar8 = (FileInfo *)__src[(long)pEVar10];
        ppEVar5 = __src + (long)pEVar10;
        cVar3 = FileInfoTypeComparator::operator()(pFVar8,(FileInfo *)pEVar11);
        if (cVar3 != '\0') break;
        while (cVar3 = FileInfoTypeComparator::operator()(pFVar8,(FileInfo *)ppEVar5[-1]),
              cVar3 != '\0') {
          if (ppEVar5 == __src + 1) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        pEVar10 = pEVar10 + 1;
        *ppEVar5 = (Element *)pFVar8;
        pFVar8 = (FileInfo *)*__src;
        pEVar11 = (Element *)pFVar8;
        if (pEVar4 == pEVar10) goto LAB_00101c65;
      }
      __n = (long)pEVar10 * 8;
      pEVar10 = pEVar10 + 1;
      memmove(__src + 1,__src,__n);
      *__src = (Element *)pFVar8;
      pEVar11 = (Element *)pFVar8;
    } while (pEVar4 != pEVar10);
  }
  else {
    lVar7 = 1;
    do {
      while( true ) {
        lVar9 = lVar7;
        pFVar8 = (FileInfo *)__src[lVar9];
        cVar3 = FileInfoTypeComparator::operator()(pFVar8,(FileInfo *)*__src);
        if (cVar3 != '\0') break;
        ppEVar5 = __src + lVar9;
        while (cVar3 = FileInfoTypeComparator::operator()(pFVar8,(FileInfo *)ppEVar5[-1]),
              cVar3 != '\0') {
          if (ppEVar5 + -1 == __src) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = (Element *)pFVar8;
        lVar7 = lVar9 + 1;
        if (lVar9 + 1 == 0x10) goto LAB_00101ae6;
      }
      memmove(__src + 1,__src,lVar9 * 8);
      *__src = (Element *)pFVar8;
      lVar7 = lVar9 + 1;
    } while (lVar9 + 1 != 0x10);
LAB_00101ae6:
    pEVar10 = (Element *)(lVar9 + 1);
    do {
      pFVar8 = (FileInfo *)__src[(long)pEVar10];
      ppEVar5 = __src + (long)pEVar10;
      pEVar11 = pEVar10;
      while( true ) {
        pEVar11 = pEVar11 + -1;
        cVar3 = FileInfoTypeComparator::operator()(pFVar8,(FileInfo *)ppEVar5[-1]);
        if (cVar3 == '\0') break;
        if (pEVar11 == (Element *)0x0) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          break;
        }
        *ppEVar5 = ppEVar5[-1];
        ppEVar5 = ppEVar5 + -1;
      }
      *ppEVar5 = (Element *)pFVar8;
      pEVar10 = pEVar10 + 1;
    } while (pEVar4 != pEVar10);
    pFVar8 = (FileInfo *)*__src;
  }
LAB_00101c65:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pFVar8;
  *(undefined8 *)(pFVar8 + 0x48) = 0;
  *(Element **)(*__src + 0x40) = __src[1];
  pEVar10 = __src[(long)(pEVar4 + -1)];
  puVar2[1] = pEVar10;
  *(Element **)(pEVar10 + 0x48) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 0x40) = 0;
  if (iVar1 != 2) {
    ppEVar5 = __src;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x48) = *ppEVar5;
      *(Element **)(*ppEVar6 + 0x40) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (__src + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(__src,true);
  return;
}



/* void List<FileInfo, DefaultAllocator>::sort_custom<FileInfoModifiedTimeComparator>() */

void __thiscall
List<FileInfo,DefaultAllocator>::sort_custom<FileInfoModifiedTimeComparator>
          (List<FileInfo,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Element *pEVar4;
  Element **__src;
  long lVar5;
  Element *pEVar6;
  Element **ppEVar7;
  Element *pEVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  Element **ppEVar12;
  Element *pEVar13;
  long lVar14;
  Element **local_60;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
    local_60 = (Element **)0x8;
  }
  else {
    __src[-1] = pEVar4;
    local_60 = __src + 1;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar7 = __src;
    for (pEVar13 = (Element *)**(long **)this; pEVar13 != (Element *)0x0;
        pEVar13 = *(Element **)(pEVar13 + 0x40)) {
      *ppEVar7 = pEVar13;
      ppEVar7 = ppEVar7 + 1;
    }
  }
  lVar9 = 0;
  pEVar13 = pEVar4;
  do {
    pEVar13 = (Element *)((long)pEVar13 >> 1);
    lVar9 = lVar9 + 1;
  } while (pEVar13 != (Element *)0x1);
  SortArray<List<FileInfo,DefaultAllocator>::Element*,List<FileInfo,DefaultAllocator>::AuxiliaryComparator<FileInfoModifiedTimeComparator>,true>
  ::introsort(0,(long)pEVar4,__src,lVar9 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar13 = (Element *)0x1;
    pEVar8 = *__src;
    do {
      while( true ) {
        pEVar6 = __src[(long)pEVar13];
        __n = (long)pEVar13 * 8;
        uVar2 = *(ulong *)(pEVar6 + 0x38);
        if (*(ulong *)(pEVar8 + 0x38) < uVar2) break;
        pEVar8 = __src[(long)(pEVar13 + -1)];
        ppEVar7 = __src + (long)pEVar13;
        pEVar10 = pEVar13 + -1;
        if (*(ulong *)(pEVar8 + 0x38) < uVar2) {
          do {
            pEVar11 = pEVar10;
            if (pEVar11 == (Element *)0x0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              ppEVar7 = local_60;
              goto LAB_001020bd;
            }
            __src[(long)(pEVar11 + 1)] = pEVar8;
            pEVar8 = __src[(long)(pEVar11 + -1)];
            pEVar10 = pEVar11 + -1;
          } while (*(ulong *)(pEVar8 + 0x38) < uVar2);
          ppEVar7 = __src + (long)pEVar11;
        }
LAB_001020bd:
        pEVar13 = pEVar13 + 1;
        *ppEVar7 = pEVar6;
        pEVar6 = *__src;
        pEVar8 = pEVar6;
        if (pEVar4 == pEVar13) goto LAB_00101f52;
      }
      pEVar13 = pEVar13 + 1;
      memmove(__src + 1,__src,__n);
      *__src = pEVar6;
      pEVar8 = pEVar6;
    } while (pEVar4 != pEVar13);
  }
  else {
    ppEVar7 = __src + 1;
    lVar9 = 1;
    do {
      while( true ) {
        lVar14 = lVar9;
        pEVar13 = *ppEVar7;
        uVar2 = *(ulong *)(pEVar13 + 0x38);
        if (*(ulong *)(*__src + 0x38) < uVar2) break;
        pEVar8 = ppEVar7[-1];
        lVar9 = lVar14 + -1;
        ppEVar12 = ppEVar7;
        if (*(ulong *)(pEVar8 + 0x38) < uVar2) {
          do {
            lVar5 = lVar9;
            if (lVar5 == 0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              ppEVar12 = local_60;
              goto LAB_00101e99;
            }
            __src[lVar5 + 1] = pEVar8;
            pEVar8 = __src[lVar5 + -1];
            lVar9 = lVar5 + -1;
          } while (*(ulong *)(pEVar8 + 0x38) < uVar2);
          ppEVar12 = __src + lVar5;
        }
LAB_00101e99:
        *ppEVar12 = pEVar13;
        ppEVar7 = ppEVar7 + 1;
        lVar9 = lVar14 + 1;
        if (lVar14 + 1 == 0x10) goto LAB_00101eae;
      }
      memmove(__src + 1,__src,lVar14 * 8);
      ppEVar7 = ppEVar7 + 1;
      *__src = pEVar13;
      lVar9 = lVar14 + 1;
    } while (lVar14 + 1 != 0x10);
LAB_00101eae:
    pEVar13 = (Element *)(lVar14 + 1);
    ppEVar7 = __src + 0x10;
    do {
      pEVar8 = *ppEVar7;
      pEVar6 = ppEVar7[-1];
      uVar2 = *(ulong *)(pEVar8 + 0x38);
      pEVar10 = pEVar13 + -1;
      ppEVar12 = ppEVar7;
      if (*(ulong *)(pEVar6 + 0x38) < uVar2) {
        do {
          __src[(long)(pEVar10 + 1)] = pEVar6;
          pEVar11 = pEVar10 + -1;
          pEVar6 = __src[(long)pEVar11];
          if (uVar2 <= *(ulong *)(pEVar6 + 0x38)) {
            ppEVar12 = __src + (long)pEVar10;
            goto LAB_00101f35;
          }
          pEVar10 = pEVar11;
        } while (pEVar11 != (Element *)0x0);
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        ppEVar12 = local_60;
      }
LAB_00101f35:
      pEVar13 = pEVar13 + 1;
      *ppEVar12 = pEVar8;
      ppEVar7 = ppEVar7 + 1;
    } while (pEVar4 != pEVar13);
    pEVar6 = *__src;
  }
LAB_00101f52:
  puVar3 = *(undefined8 **)this;
  *puVar3 = pEVar6;
  *(undefined8 *)(pEVar6 + 0x48) = 0;
  *(Element **)(*__src + 0x40) = __src[1];
  pEVar13 = __src[(long)(pEVar4 + -1)];
  puVar3[1] = pEVar13;
  *(Element **)(pEVar13 + 0x48) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 0x40) = 0;
  if (iVar1 != 2) {
    ppEVar7 = __src;
    do {
      ppEVar12 = ppEVar7 + 1;
      *(Element **)(ppEVar7[1] + 0x48) = *ppEVar7;
      *(Element **)(*ppEVar12 + 0x40) = ppEVar7[2];
      ppEVar7 = ppEVar12;
    } while (ppEVar12 != __src + (iVar1 - 2));
  }
  Memory::free_static(__src,true);
  return;
}



/* void List<FileInfo, DefaultAllocator>::sort_custom<Comparator<FileInfo> >() */

void __thiscall
List<FileInfo,DefaultAllocator>::sort_custom<Comparator<FileInfo>>
          (List<FileInfo,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  Element *pEVar4;
  Element **__src;
  Element **ppEVar5;
  Element **ppEVar6;
  long lVar7;
  String *pSVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar4;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = __src;
    for (pEVar10 = (Element *)**(long **)this; pEVar10 != (Element *)0x0;
        pEVar10 = *(Element **)(pEVar10 + 0x40)) {
      *ppEVar5 = pEVar10;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar7 = 0;
  pEVar10 = pEVar4;
  do {
    pEVar10 = (Element *)((long)pEVar10 >> 1);
    lVar7 = lVar7 + 1;
  } while (pEVar10 != (Element *)0x1);
  SortArray<List<FileInfo,DefaultAllocator>::Element*,List<FileInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<FileInfo>>,true>
  ::introsort(0,(long)pEVar4,__src,lVar7 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar10 = (Element *)0x1;
    do {
      while( true ) {
        pSVar8 = (String *)__src[(long)pEVar10];
        ppEVar5 = __src + (long)pEVar10;
        cVar3 = String::filenocasecmp_to(pSVar8);
        if (cVar3 < '\0') break;
        while (cVar3 = String::filenocasecmp_to(pSVar8), cVar3 < '\0') {
          if (ppEVar5 == __src + 1) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        pEVar10 = pEVar10 + 1;
        *ppEVar5 = (Element *)pSVar8;
        pSVar8 = (String *)*__src;
        if (pEVar4 == pEVar10) goto LAB_00102435;
      }
      __n = (long)pEVar10 * 8;
      pEVar10 = pEVar10 + 1;
      memmove(__src + 1,__src,__n);
      *__src = (Element *)pSVar8;
    } while (pEVar4 != pEVar10);
  }
  else {
    lVar7 = 1;
    do {
      while( true ) {
        lVar9 = lVar7;
        pSVar8 = (String *)__src[lVar9];
        cVar3 = String::filenocasecmp_to(pSVar8);
        if (cVar3 < '\0') break;
        ppEVar5 = __src + lVar9;
        while (cVar3 = String::filenocasecmp_to(pSVar8), cVar3 < '\0') {
          if (ppEVar5 + -1 == __src) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = (Element *)pSVar8;
        lVar7 = lVar9 + 1;
        if (lVar9 + 1 == 0x10) goto LAB_001022b6;
      }
      memmove(__src + 1,__src,lVar9 * 8);
      *__src = (Element *)pSVar8;
      lVar7 = lVar9 + 1;
    } while (lVar9 + 1 != 0x10);
LAB_001022b6:
    pEVar10 = (Element *)(lVar9 + 1);
    do {
      pSVar8 = (String *)__src[(long)pEVar10];
      ppEVar5 = __src + (long)pEVar10;
      pEVar11 = pEVar10;
      while( true ) {
        pEVar11 = pEVar11 + -1;
        cVar3 = String::filenocasecmp_to(pSVar8);
        if (-1 < cVar3) break;
        if (pEVar11 == (Element *)0x0) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          break;
        }
        *ppEVar5 = ppEVar5[-1];
        ppEVar5 = ppEVar5 + -1;
      }
      *ppEVar5 = (Element *)pSVar8;
      pEVar10 = pEVar10 + 1;
    } while (pEVar4 != pEVar10);
    pSVar8 = (String *)*__src;
  }
LAB_00102435:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pSVar8;
  *(undefined8 *)(pSVar8 + 0x48) = 0;
  *(Element **)(*__src + 0x40) = __src[1];
  pEVar10 = __src[(long)(pEVar4 + -1)];
  puVar2[1] = pEVar10;
  *(Element **)(pEVar10 + 0x48) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 0x40) = 0;
  if (iVar1 != 2) {
    ppEVar5 = __src;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x48) = *ppEVar5;
      *(Element **)(*ppEVar6 + 0x40) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (__src + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(__src,true);
  return;
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}


