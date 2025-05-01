
/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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



/* SortArray<int, _DefaultComparator<int>, true>::introsort(long, long, int*, long) const [clone
   .isra.0] */

void SortArray<int,_DefaultComparator<int>,true>::introsort
               (long param_1,long param_2,int *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  long local_58;
  
  lVar10 = param_2 - param_1;
  if (lVar10 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_0010030c:
    lVar6 = lVar10 + -2 >> 1;
    lVar13 = lVar6 * 2 + 2;
    piVar4 = param_3 + param_1 + lVar6;
    iVar12 = *piVar4;
    lVar5 = lVar6;
    lVar8 = lVar13;
    if (lVar10 <= lVar13) goto LAB_001003fc;
LAB_0010034b:
    do {
      iVar9 = param_3[param_1 + lVar13 + -1];
      iVar1 = param_3[param_1 + lVar13];
      lVar2 = lVar13 + -1;
      lVar7 = lVar13;
      piVar3 = param_3 + param_1 + lVar13 + -1;
      if (iVar9 <= iVar1) {
        lVar7 = lVar13 + 1;
        lVar2 = lVar13;
        piVar3 = param_3 + param_1 + lVar13;
        iVar9 = iVar1;
      }
      lVar13 = lVar7 * 2;
      param_3[lVar5 + param_1] = iVar9;
      lVar5 = lVar2;
    } while (lVar10 != lVar13 && SBORROW8(lVar10,lVar13) == lVar10 + lVar7 * -2 < 0);
    piVar11 = piVar3;
    if (lVar10 == lVar13) goto LAB_00100402;
    do {
      lVar13 = lVar8;
      lVar5 = lVar2 + -1;
      if (lVar2 <= lVar6) goto LAB_00100528;
      do {
        lVar8 = lVar5 >> 1;
        iVar9 = param_3[param_1 + lVar8];
        if (iVar12 <= iVar9) {
          param_3[lVar2 + param_1] = iVar12;
          goto joined_r0x001003dc;
        }
        param_3[lVar2 + param_1] = iVar9;
        lVar5 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
        lVar2 = lVar8;
      } while (lVar6 < lVar8);
      param_3[param_1 + lVar8] = iVar12;
joined_r0x001003dc:
      if (lVar6 == 0) {
        piVar4 = param_3 + param_1;
        lVar10 = (param_2 + -1) - param_1;
        goto LAB_00100438;
      }
      while( true ) {
        piVar4 = piVar4 + -1;
        lVar13 = lVar13 + -2;
        lVar6 = lVar6 + -1;
        iVar12 = *piVar4;
        lVar5 = lVar6;
        lVar8 = lVar13;
        if (lVar13 < lVar10) goto LAB_0010034b;
LAB_001003fc:
        piVar11 = piVar4;
        piVar3 = piVar4;
        lVar8 = lVar13;
        if (lVar13 == lVar10) break;
LAB_00100528:
        *piVar3 = iVar12;
      }
LAB_00100402:
      lVar2 = lVar13 + -1;
      piVar3 = param_3 + param_1 + lVar2;
      *piVar11 = *piVar3;
    } while( true );
  }
  lVar13 = param_2;
  local_58 = param_4;
LAB_00100177:
  local_58 = local_58 + -1;
  iVar12 = param_3[lVar13 + -1];
  iVar9 = param_3[param_1];
  iVar1 = param_3[(lVar10 >> 1) + param_1];
  if (iVar9 < iVar1) {
    if (iVar9 < iVar12) {
      iVar9 = iVar12;
    }
    if (iVar1 < iVar12) {
      iVar9 = iVar1;
    }
  }
  else {
    if (iVar1 < iVar12) {
      iVar1 = iVar12;
    }
    if (iVar12 <= iVar9) {
      iVar9 = iVar1;
    }
  }
  lVar10 = lVar13;
  param_2 = param_1;
  do {
    if (param_3[param_2] < iVar9) {
      if (lVar13 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_001001e0;
      }
    }
    else {
LAB_001001e0:
      lVar5 = lVar10 + -1;
      piVar4 = param_3 + lVar5;
      if (iVar9 < *piVar4) {
        piVar3 = param_3 + lVar10 + -2;
        while (param_1 != lVar5) {
          lVar5 = lVar5 + -1;
          piVar4 = piVar3;
          if (*piVar3 <= iVar9) goto LAB_00100242;
          piVar3 = piVar3 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_00100242:
      if (lVar5 <= param_2) break;
      iVar12 = param_3[param_2];
      param_3[param_2] = *piVar4;
      *piVar4 = iVar12;
      lVar10 = lVar5;
    }
    param_2 = param_2 + 1;
  } while( true );
  introsort(param_2,lVar13,param_3,local_58);
  lVar10 = param_2 - param_1;
  if (lVar10 < 0x11) {
    return;
  }
  lVar13 = param_2;
  if (local_58 == 0) goto LAB_0010030c;
  goto LAB_00100177;
LAB_00100438:
  iVar12 = piVar4[lVar10];
  piVar4[lVar10] = *piVar4;
  if (lVar10 < 3) {
    if (lVar10 != 2) {
      *piVar4 = iVar12;
      return;
    }
    lVar13 = param_1 + 1;
    lVar5 = 0;
    lVar10 = 1;
    *piVar4 = param_3[lVar13];
LAB_001004e5:
    while( true ) {
      piVar3 = param_3 + lVar13;
      iVar9 = param_3[param_1 + lVar5];
      if (iVar12 <= iVar9) break;
      *piVar3 = iVar9;
      if (lVar5 == 0) {
        param_3[param_1 + lVar5] = iVar12;
        goto LAB_00100438;
      }
      lVar13 = param_1 + lVar5;
      lVar5 = (lVar5 + -1) / 2;
    }
  }
  else {
    lVar13 = 2;
    lVar5 = 0;
    do {
      iVar9 = param_3[param_1 + lVar13 + -1];
      iVar1 = param_3[param_1 + lVar13];
      lVar8 = lVar13 + -1;
      piVar3 = param_3 + param_1 + lVar13 + -1;
      lVar6 = lVar13;
      if (iVar9 <= iVar1) {
        lVar6 = lVar13 + 1;
        lVar8 = lVar13;
        piVar3 = param_3 + param_1 + lVar13;
        iVar9 = iVar1;
      }
      lVar13 = lVar6 * 2;
      param_3[lVar5 + param_1] = iVar9;
      lVar5 = lVar8;
    } while (lVar10 != lVar13 && SBORROW8(lVar10,lVar13) == lVar10 + lVar6 * -2 < 0);
    if (lVar10 == lVar13) {
      lVar13 = param_1 + lVar10 + -1;
      lVar5 = lVar10 + -2 >> 1;
      *piVar3 = param_3[lVar13];
      lVar10 = lVar10 + -1;
      goto LAB_001004e5;
    }
    lVar13 = param_1 + lVar8;
    lVar10 = lVar10 + -1;
    lVar5 = (lVar8 + -1) / 2;
    if (0 < lVar8) goto LAB_001004e5;
  }
  *piVar3 = iVar12;
  goto LAB_00100438;
}



/* SortArray<int, _DefaultComparator<int>, true>::sort(int*, long) const [clone .part.0] [clone
   .isra.0] */

void SortArray<int,_DefaultComparator<int>,true>::sort(int *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  
  if (param_2 == 1) {
    introsort(0,1,param_1,0);
    return;
  }
  lVar2 = 0;
  lVar8 = param_2;
  do {
    lVar8 = lVar8 >> 1;
    lVar2 = lVar2 + 1;
  } while (lVar8 != 1);
  introsort(0,param_2,param_1,lVar2 * 2);
  if (param_2 < 0x11) {
    if (param_2 != 0) {
      piVar3 = param_1 + 1;
      lVar8 = 1;
      piVar7 = piVar3;
      do {
        iVar1 = *piVar7;
        if (iVar1 < *param_1) {
          memmove(piVar3,param_1,lVar8 * 4);
          *param_1 = iVar1;
        }
        else {
          iVar5 = piVar7[-1];
          lVar2 = lVar8 + -1;
          piVar4 = piVar7;
          if (iVar1 < iVar5) {
            do {
              lVar6 = lVar2;
              if (lVar6 == 0) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                piVar4 = piVar3;
                goto LAB_00100770;
              }
              param_1[lVar6 + 1] = iVar5;
              iVar5 = param_1[lVar6 + -1];
              lVar2 = lVar6 + -1;
            } while (iVar1 < iVar5);
            piVar4 = param_1 + lVar6;
          }
LAB_00100770:
          *piVar4 = iVar1;
        }
        lVar8 = lVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (param_2 != lVar8);
    }
  }
  else {
    lVar8 = 1;
    do {
      while( true ) {
        lVar2 = lVar8;
        iVar1 = param_1[lVar2];
        if (iVar1 < *param_1) break;
        iVar5 = param_1[lVar2 + -1];
        piVar3 = param_1 + lVar2;
        lVar8 = lVar2 + -1;
        if (iVar1 < iVar5) {
          do {
            lVar6 = lVar8;
            if (lVar6 == 0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              piVar3 = param_1 + 1;
              goto LAB_00100640;
            }
            param_1[lVar6 + 1] = iVar5;
            iVar5 = param_1[lVar6 + -1];
            lVar8 = lVar6 + -1;
          } while (iVar1 < iVar5);
          piVar3 = param_1 + lVar6;
        }
LAB_00100640:
        *piVar3 = iVar1;
        lVar8 = lVar2 + 1;
        if (lVar2 + 1 == 0x10) goto LAB_0010064d;
      }
      memmove(param_1 + 1,param_1,lVar2 * 4);
      *param_1 = iVar1;
      lVar8 = lVar2 + 1;
    } while (lVar2 + 1 != 0x10);
LAB_0010064d:
    lVar2 = lVar2 + 1;
    piVar3 = param_1 + 0x10;
    do {
      iVar1 = *piVar3;
      iVar5 = piVar3[-1];
      lVar8 = lVar2 + -1;
      piVar7 = piVar3;
      if (iVar1 < iVar5) {
        do {
          param_1[lVar8 + 1] = iVar5;
          lVar6 = lVar8 + -1;
          iVar5 = param_1[lVar6];
          if (iVar5 <= iVar1) {
            piVar7 = param_1 + lVar8;
            goto LAB_001006b4;
          }
          lVar8 = lVar6;
        } while (lVar6 != 0);
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        piVar7 = param_1 + 1;
      }
LAB_001006b4:
      lVar2 = lVar2 + 1;
      *piVar7 = iVar1;
      piVar3 = piVar3 + 1;
    } while (param_2 != lVar2);
  }
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



/* PostImportPluginSkeletonTrackOrganizer::PostImportPluginSkeletonTrackOrganizer() */

void __thiscall
PostImportPluginSkeletonTrackOrganizer::PostImportPluginSkeletonTrackOrganizer
          (PostImportPluginSkeletonTrackOrganizer *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(code **)this = String::parse_latin1;
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 7;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x1a0),"_get_internal_import_options",false);
  this[0x1a8] = (PostImportPluginSkeletonTrackOrganizer)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_get_internal_option_visibility",false);
  this[0x1c0] = (PostImportPluginSkeletonTrackOrganizer)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName
            ((StringName *)(this + 0x1d0),"_get_internal_option_update_view_required",false);
  this[0x1d8] = (PostImportPluginSkeletonTrackOrganizer)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  StringName::StringName((StringName *)(this + 0x1e8),"_internal_process",false);
  this[0x1f0] = (PostImportPluginSkeletonTrackOrganizer)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  StringName::StringName((StringName *)(this + 0x200),"_get_import_options",false);
  this[0x208] = (PostImportPluginSkeletonTrackOrganizer)0x0;
  *(undefined8 *)(this + 0x210) = 0;
  StringName::StringName((StringName *)(this + 0x218),"_get_option_visibility",false);
  this[0x220] = (PostImportPluginSkeletonTrackOrganizer)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  StringName::StringName((StringName *)(this + 0x230),"_pre_process",false);
  this[0x238] = (PostImportPluginSkeletonTrackOrganizer)0x0;
  *(undefined8 *)(this + 0x240) = 0;
  StringName::StringName((StringName *)(this + 0x248),"_post_process",false);
  this[0x250] = (PostImportPluginSkeletonTrackOrganizer)0x0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00105598;
  return;
}



/* PostImportPluginSkeletonTrackOrganizer::get_internal_import_options(EditorScenePostImportPlugin::InternalImportCategory,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) [clone .part.0] */

void PostImportPluginSkeletonTrackOrganizer::get_internal_import_options(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  StringName *local_118;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  long local_c8;
  int local_c0;
  long local_b8;
  undefined4 local_b0;
  int local_a8 [8];
  undefined4 local_88;
  long local_80;
  long local_78;
  int local_70;
  long local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_a8,false);
  local_d8 = "";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_d8 = "retarget/remove_tracks/except_bone_transform";
  local_f8 = 0;
  local_d0 = 0x2c;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  if (local_f0 == 0) {
LAB_00100b3b:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00100b3b;
    StringName::StringName((StringName *)&local_e0,(String *)&local_b8,false);
    if (local_c8 == local_e0) {
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8 = local_e0;
    }
  }
  local_118 = (StringName *)&local_c8;
  local_80 = 0;
  local_88 = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,local_118);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *param_1 = (long)pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  puVar3[0xc] = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  *puVar3 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_78);
  puVar3[6] = local_70;
  if (*(long *)(puVar3 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_68);
  }
  puVar3[10] = local_60;
  Variant::operator=((Variant *)(puVar3 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*param_1 + 8);
  *(long *)(puVar3 + 0x16) = *param_1;
  plVar2 = (long *)*param_1;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar3;
  }
  plVar2[1] = (long)puVar3;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar3;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_d8 = "";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "retarget/remove_tracks/unimportant_positions";
  local_d0 = 0x2c;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  if (local_f0 == 0) {
LAB_00100edb:
    local_b0 = 6;
    StringName::operator=(local_118,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00100edb;
    StringName::StringName((StringName *)&local_e0,(String *)&local_b8,false);
    if (local_c8 == local_e0) {
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8 = local_e0;
    }
  }
  local_80 = 0;
  local_88 = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,local_118);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *param_1 = (long)pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  puVar3[0xc] = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  *puVar3 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_78);
  puVar3[6] = local_70;
  if (*(long *)(puVar3 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_68);
  }
  puVar3[10] = local_60;
  Variant::operator=((Variant *)(puVar3 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*param_1 + 8);
  *(long *)(puVar3 + 0x16) = *param_1;
  plVar2 = (long *)*param_1;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar3;
  }
  plVar2[1] = (long)puVar3;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar3;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_d8 = "None,Remove,Separate Library";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "retarget/remove_tracks/unmapped_bones";
  local_d0 = 0x25;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,2);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 2;
  local_b8 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 == 0x11) {
      StringName::StringName((StringName *)&local_e0,(String *)&local_b8,false);
      if (local_c8 == local_e0) {
        if ((StringName::configured != '\0') && (local_e0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_c8 = local_e0;
      }
      goto LAB_00101252;
    }
  }
  local_b0 = 6;
  StringName::operator=(local_118,(StringName *)&local_e8);
LAB_00101252:
  local_80 = 0;
  local_88 = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,local_118);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *param_1 = (long)pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  puVar3[0xc] = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  *puVar3 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_78);
  puVar3[6] = local_70;
  if (*(long *)(puVar3 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_68);
  }
  puVar3[10] = local_60;
  Variant::operator=((Variant *)(puVar3 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*param_1 + 8);
  *(long *)(puVar3 + 0x16) = *param_1;
  param_1 = (long *)*param_1;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = uVar1;
  if (param_1[1] != 0) {
    *(undefined4 **)(param_1[1] + 0x48) = puVar3;
  }
  param_1[1] = (long)puVar3;
  if (*param_1 == 0) {
    *param_1 = (long)puVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PostImportPluginSkeletonTrackOrganizer::get_internal_import_options(EditorScenePostImportPlugin::InternalImportCategory,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) */

void __thiscall
PostImportPluginSkeletonTrackOrganizer::get_internal_import_options
          (undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 6) {
    return;
  }
  get_internal_import_options(param_3);
  return;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* PostImportPluginSkeletonTrackOrganizer::internal_process(EditorScenePostImportPlugin::InternalImportCategory,
   Node*, Node*, Ref<Resource>, Dictionary const&) [clone .part.0] */

void PostImportPluginSkeletonTrackOrganizer::internal_process
               (String *param_1,long param_2,Variant *param_3)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  Variant *pVVar10;
  AnimationLibrary *this;
  NodePath *pNVar11;
  long lVar12;
  Object *pOVar13;
  long lVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  size_t sVar19;
  int *piVar20;
  long in_FS_OFFSET;
  bool bVar21;
  Ref *local_138;
  List *local_128;
  Object *local_e8;
  String local_e0 [8];
  long *local_d8;
  Object *local_d0;
  Object *local_c8;
  long local_c0;
  long local_b8;
  Object *local_b0;
  Vector<int> local_a8 [8];
  int *local_a0;
  Vector<int> local_98 [8];
  long local_90;
  Vector<int> local_88 [8];
  size_t local_80;
  Object *local_78;
  int *local_70;
  Object *local_68;
  int *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"retarget/bone_map");
  Dictionary::operator[](param_3);
  lVar9 = Variant::get_validated_object();
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar9 == 0) goto LAB_0010196c;
  __dynamic_cast(lVar9,&Object::typeinfo,&BoneMap::typeinfo,0);
  BoneMap::get_profile();
  if (param_2 == 0) {
joined_r0x0010195e:
    if (local_e8 == (Object *)0x0) goto LAB_0010196c;
  }
  else {
    if (local_e8 == (Object *)0x0) goto LAB_0010196c;
    lVar9 = __dynamic_cast(param_2,&Object::typeinfo,&Skeleton3D::typeinfo,0);
    if (lVar9 != 0) {
      Variant::Variant((Variant *)local_58,"retarget/remove_tracks/except_bone_transform");
      pVVar10 = (Variant *)Dictionary::operator[](param_3);
      bVar3 = Variant::operator_cast_to_bool(pVVar10);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,"retarget/remove_tracks/unimportant_positions");
      pVVar10 = (Variant *)Dictionary::operator[](param_3);
      bVar4 = Variant::operator_cast_to_bool(pVVar10);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,"retarget/remove_tracks/unmapped_bones");
      pVVar10 = (Variant *)Dictionary::operator[](param_3);
      iVar6 = Variant::operator_cast_to_int(pVVar10);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((bVar4) || (iVar6 != 0)) {
        local_68 = (Object *)0x0;
        String::parse_latin1((String *)&local_68,"AnimationPlayer");
        local_78 = (Object *)0x0;
        String::parse_latin1((String *)&local_78,"*");
        Node::find_children(local_e0,param_1,SUB81((String *)&local_78,0),
                            SUB81((String *)&local_68,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        iVar7 = Array::size();
        while (iVar7 != 0) {
          Array::pop_back();
          local_128 = (List *)Variant::operator_cast_to_Object_((Variant *)local_58);
          if (local_128 != (List *)0x0) {
            local_128 = (List *)__dynamic_cast(local_128,&Object::typeinfo,
                                               &AnimationPlayer::typeinfo,0);
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_d8 = (long *)0x0;
          AnimationMixer::get_animation_list(local_128);
          local_d0 = (Object *)0x0;
          this = (AnimationLibrary *)operator_new(0x270,"");
          AnimationLibrary::AnimationLibrary(this);
          postinitialize_handler((Object *)this);
          cVar5 = RefCounted::init_ref();
          pOVar13 = local_d0;
          if (cVar5 == '\0') {
            if (local_d0 != (Object *)0x0) {
              local_d0 = (Object *)0x0;
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                this = (AnimationLibrary *)0x0;
                cVar5 = predelete_handler(pOVar13);
                if (cVar5 != '\0') {
LAB_0010281e:
                  (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                  Memory::free_static(pOVar13,false);
                  if (this != (AnimationLibrary *)0x0) goto LAB_00102562;
                }
              }
            }
          }
          else {
            if (local_d0 != (Object *)this) {
              local_d0 = (Object *)this;
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                local_d0 = (Object *)0x0;
                if (pOVar13 != (Object *)0x0) {
                  cVar5 = RefCounted::unreference();
joined_r0x00102746:
                  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar13), cVar5 != '\0'))
                  goto LAB_0010281e;
                }
              }
              else if (pOVar13 != (Object *)0x0) {
                cVar5 = RefCounted::unreference();
                goto joined_r0x00102746;
              }
            }
LAB_00102562:
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)this), cVar5 != '\0')) {
              (**(code **)(*(long *)this + 0x140))(this);
              Memory::free_static(this,false);
            }
          }
          if ((local_d8 != (long *)0x0) && (local_138 = (Ref *)*local_d8, local_138 != (Ref *)0x0))
          {
            do {
              AnimationMixer::get_animation((StringName *)&local_c8);
              iVar7 = Animation::get_track_count();
              local_a0 = (int *)0x0;
              local_90 = 0;
              local_80 = 0;
              if (iVar7 < 1) {
                if ((iVar6 == 2) || (0 < iVar6)) {
LAB_00102444:
                  local_60 = (int *)0x0;
                  Vector<int>::append_array(local_a8);
                  goto LAB_001023c6;
                }
                Vector<int>::reverse(local_a8);
                if ((local_a0 != (int *)0x0) && (sVar19 = 0, 0 < *(long *)(local_a0 + -2)))
                goto LAB_00101f6d;
              }
              else {
                iVar15 = 0;
                do {
                  iVar18 = (int)(NodePath *)&local_b0;
                  Animation::track_get_path(iVar18);
                  NodePath::get_concatenated_names();
                  if (local_78 == (Object *)0x0) {
                    local_c0 = 0;
                  }
                  else {
                    pOVar13 = *(Object **)(local_78 + 8);
                    local_c0 = 0;
                    if (pOVar13 == (Object *)0x0) {
                      if (*(long *)(local_78 + 0x10) != 0) {
                        plVar1 = (long *)(*(long *)(local_78 + 0x10) + -0x10);
                        do {
                          lVar12 = *plVar1;
                          if (lVar12 == 0) goto LAB_00101c4d;
                          LOCK();
                          lVar14 = *plVar1;
                          bVar21 = lVar12 == lVar14;
                          if (bVar21) {
                            *plVar1 = lVar12 + 1;
                            lVar14 = lVar12;
                          }
                          UNLOCK();
                        } while (!bVar21);
                        if (lVar14 != -1) {
                          local_c0 = *(long *)(local_78 + 0x10);
                        }
                        goto LAB_00101c4d;
                      }
                      if (StringName::configured == '\0') goto LAB_00101c69;
                    }
                    else {
                      local_60 = (int *)strlen((char *)pOVar13);
                      local_68 = pOVar13;
                      String::parse_latin1((StrRange *)&local_c0);
LAB_00101c4d:
                      if ((StringName::configured == '\0') || (local_78 == (Object *)0x0))
                      goto LAB_00101c69;
                    }
                    StringName::unref();
                  }
LAB_00101c69:
                  NodePath::~NodePath((NodePath *)&local_b0);
                  AnimationMixer::get_root_node();
                  pNVar11 = (NodePath *)Node::get_node((NodePath *)local_128);
                  NodePath::NodePath((NodePath *)&local_78,(String *)&local_c0);
                  lVar12 = Node::get_node(pNVar11);
                  NodePath::~NodePath((NodePath *)&local_78);
                  NodePath::~NodePath((NodePath *)&local_68);
                  if (((lVar12 == 0) ||
                      (lVar12 = __dynamic_cast(lVar12,&Object::typeinfo,&Skeleton3D::typeinfo,0),
                      lVar12 == 0)) || (lVar9 != lVar12)) {
joined_r0x00101ecd:
                    if (bVar3) {
                      Vector<int>::push_back(local_a8,iVar15);
                    }
                  }
                  else {
                    iVar17 = (int)(String *)&local_68;
                    Animation::track_get_path(iVar17);
                    iVar8 = NodePath::get_subname_count();
                    if ((iVar8 != 1) ||
                       (((cVar5 = Animation::track_get_type((int)local_c8), cVar5 != '\x01' &&
                         (cVar5 = Animation::track_get_type((int)local_c8), cVar5 != '\x02')) &&
                        (cVar5 = Animation::track_get_type((int)local_c8), cVar5 != '\x03')))) {
                      NodePath::~NodePath((NodePath *)&local_68);
                      goto joined_r0x00101ecd;
                    }
                    NodePath::~NodePath((NodePath *)&local_68);
                    Animation::track_get_path(iVar17);
                    NodePath::get_subname((int)&local_b8);
                    NodePath::~NodePath((NodePath *)&local_68);
                    if (local_b8 == 0) goto joined_r0x00101ecd;
                    if ((*(long *)(local_b8 + 8) == 0) &&
                       ((*(long *)(local_b8 + 0x10) == 0 ||
                        (*(uint *)(*(long *)(local_b8 + 0x10) + -8) < 2)))) {
                      if (StringName::configured != '\0') {
LAB_00101eb8:
                        StringName::unref();
                      }
                      goto joined_r0x00101ecd;
                    }
                    BoneMap::find_profile_bone_name((StringName *)&local_68);
                    iVar8 = SkeletonProfile::find_bone((StringName *)local_e8);
                    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    if (iVar8 < 0) {
                      Vector<int>::push_back(local_88,iVar15);
LAB_001024fe:
                      if (StringName::configured != '\0') {
LAB_00102506:
                        if (local_b8 != 0) {
                          StringName::unref();
                        }
                      }
                    }
                    else {
                      if ((!bVar4) ||
                         (cVar5 = Animation::track_get_type((int)local_c8), cVar5 != '\x01')) {
                        Vector<int>::push_back(local_98,iVar15);
LAB_00101ea9:
                        if (StringName::configured == '\0') goto joined_r0x00101ecd;
LAB_00101ead:
                        if (local_b8 != 0) goto LAB_00101eb8;
                        goto joined_r0x00101ecd;
                      }
                      SkeletonProfile::get_bone_name(iVar18);
                      SkeletonProfile::get_root_bone();
                      if (local_b0 == local_68) {
joined_r0x0010276f:
                        if (StringName::configured != '\0') {
joined_r0x00102774:
                          if (local_68 != (Object *)0x0) {
                            StringName::unref();
                          }
                        }
                      }
                      else {
                        SkeletonProfile::get_scale_base_bone();
                        if (local_b0 != local_78) {
                          if ((StringName::configured != '\0') &&
                             (((local_78 == (Object *)0x0 ||
                               (StringName::unref(), StringName::configured != '\0')) &&
                              (local_68 != (Object *)0x0)))) {
                            StringName::unref();
                          }
                          Vector<int>::push_back(local_a8,iVar15);
                          if (StringName::configured == '\0') goto joined_r0x00101ecd;
                          if (local_b0 != (Object *)0x0) {
                            StringName::unref();
                            goto LAB_00101ea9;
                          }
                          goto LAB_00101ead;
                        }
                        if (StringName::configured != '\0') {
                          if (local_78 != (Object *)0x0) {
                            StringName::unref();
                            goto joined_r0x0010276f;
                          }
                          goto joined_r0x00102774;
                        }
                      }
                      Vector<int>::push_back(local_98,iVar15);
                      if (StringName::configured != '\0') {
                        if (local_b0 != (Object *)0x0) {
                          StringName::unref();
                          goto LAB_001024fe;
                        }
                        goto LAB_00102506;
                      }
                    }
                  }
                  lVar12 = local_c0;
                  if (local_c0 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_c0 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_c0 = 0;
                      Memory::free_static((void *)(lVar12 + -0x10),false);
                    }
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar7 != iVar15);
                if (iVar6 == 2) {
                  if (local_80 == 0) goto LAB_00102444;
                  (**(code **)(*(long *)local_c8 + 0x198))((String *)&local_68,local_c8,0);
                  local_b0 = (Object *)0x0;
                  if (local_68 != (Object *)0x0) {
                    pOVar13 = (Object *)
                              __dynamic_cast(local_68,&Object::typeinfo,&Animation::typeinfo,0);
                    if (pOVar13 != (Object *)0x0) {
                      local_b0 = pOVar13;
                      cVar5 = RefCounted::reference();
                      if (cVar5 == '\0') {
                        local_b0 = (Object *)0x0;
                      }
                      if (local_68 == (Object *)0x0) goto LAB_0010214a;
                    }
                    cVar5 = RefCounted::unreference();
                    pOVar13 = local_68;
                    if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
                      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                      Memory::free_static(pOVar13,false);
                    }
                  }
LAB_0010214a:
                  local_70 = (int *)0x0;
                  local_60 = (int *)0x0;
                  plVar1 = (long *)(local_90 + -0x10);
                  if (local_90 == 0) {
                    Vector<int>::append_array((Vector<int> *)&local_78,(String *)&local_68);
                  }
                  else {
                    do {
                      lVar12 = *plVar1;
                      if (lVar12 == 0) goto LAB_001021a8;
                      LOCK();
                      lVar14 = *plVar1;
                      bVar21 = lVar12 == lVar14;
                      if (bVar21) {
                        *plVar1 = lVar12 + 1;
                        lVar14 = lVar12;
                      }
                      UNLOCK();
                    } while (!bVar21);
                    if (lVar14 != -1) {
                      local_60 = (int *)local_90;
                    }
LAB_001021a8:
                    piVar16 = local_60;
                    Vector<int>::append_array((Vector<int> *)&local_78);
                    if (piVar16 != (int *)0x0) {
                      LOCK();
                      plVar1 = (long *)((long)piVar16 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        Memory::free_static((void *)((long)local_60 + -0x10),false);
                      }
                    }
                  }
                  local_60 = (int *)0x0;
                  plVar1 = (long *)(local_a0 + -4);
                  if (local_a0 == (int *)0x0) {
                    Vector<int>::append_array((Vector<int> *)&local_78,(String *)&local_68);
                  }
                  else {
                    do {
                      lVar12 = *plVar1;
                      if (lVar12 == 0) goto LAB_00102225;
                      LOCK();
                      lVar14 = *plVar1;
                      bVar21 = lVar12 == lVar14;
                      if (bVar21) {
                        *plVar1 = lVar12 + 1;
                        lVar14 = lVar12;
                      }
                      UNLOCK();
                    } while (!bVar21);
                    if (lVar14 != -1) {
                      local_60 = local_a0;
                    }
LAB_00102225:
                    piVar16 = local_60;
                    Vector<int>::append_array((Vector<int> *)&local_78);
                    if (piVar16 != (int *)0x0) {
                      LOCK();
                      plVar1 = (long *)(piVar16 + -4);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        Memory::free_static(local_60 + -4,false);
                      }
                    }
                  }
                  if (local_70 != (int *)0x0) {
                    lVar12 = *(long *)(local_70 + -2);
                    if (lVar12 != 0) {
                      CowData<int>::_copy_on_write((CowData<int> *)&local_70);
                      SortArray<int,_DefaultComparator<int>,true>::sort(local_70,lVar12);
                    }
                  }
                  Vector<int>::reverse((Vector<int> *)&local_78);
                  CowData<int>::_copy_on_write((CowData<int> *)&local_70);
                  piVar16 = local_70;
                  CowData<int>::_copy_on_write((CowData<int> *)&local_70);
                  piVar2 = local_70;
                  if (local_70 == (int *)0x0) {
                    piVar20 = (int *)0x0;
                    if (piVar16 != (int *)0x0) goto LAB_001022e0;
                    AnimationLibrary::add_animation((StringName *)local_d0,local_138);
                  }
                  else {
                    piVar20 = local_70 + *(long *)(local_70 + -2);
                    if (piVar16 == piVar20) {
                      AnimationLibrary::add_animation((StringName *)local_d0,local_138);
                    }
                    else {
LAB_001022e0:
                      do {
                        piVar16 = piVar16 + 1;
                        Animation::remove_track((int)local_b0);
                      } while (piVar20 != piVar16);
                      AnimationLibrary::add_animation((StringName *)local_d0,local_138);
                      if (piVar2 == (int *)0x0) goto LAB_0010232d;
                    }
                    LOCK();
                    plVar1 = (long *)(piVar2 + -4);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static(local_70 + -4,false);
                    }
                  }
LAB_0010232d:
                  if (((local_b0 != (Object *)0x0) &&
                      (cVar5 = RefCounted::unreference(), pOVar13 = local_b0, cVar5 != '\0')) &&
                     (cVar5 = predelete_handler(local_b0), cVar5 != '\0')) {
                    (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                    Memory::free_static(pOVar13,false);
                  }
LAB_0010234f:
                  local_60 = (int *)0x0;
                  plVar1 = (long *)(local_80 - 0x10);
                  if (local_80 == 0) goto LAB_00102444;
                  do {
                    lVar12 = *plVar1;
                    if (lVar12 == 0) goto LAB_00102399;
                    LOCK();
                    lVar14 = *plVar1;
                    bVar21 = lVar12 == lVar14;
                    if (bVar21) {
                      *plVar1 = lVar12 + 1;
                      lVar14 = lVar12;
                    }
                    UNLOCK();
                  } while (!bVar21);
                  if (lVar14 != -1) {
                    local_60 = (int *)local_80;
                  }
LAB_00102399:
                  piVar16 = local_60;
                  Vector<int>::append_array(local_a8);
                  if (piVar16 != (int *)0x0) {
                    LOCK();
                    plVar1 = (long *)((long)piVar16 - 0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)((long)local_60 - 0x10),false);
                    }
                  }
LAB_001023c6:
                  sVar19 = local_80;
                  if ((local_a0 != (int *)0x0) && (lVar12 = *(long *)(local_a0 + -2), lVar12 != 0))
                  {
                    CowData<int>::_copy_on_write((CowData<int> *)&local_a0);
                    SortArray<int,_DefaultComparator<int>,true>::sort(local_a0,lVar12);
                  }
                }
                else {
                  sVar19 = local_80;
                  if (0 < iVar6) goto LAB_0010234f;
                }
                Vector<int>::reverse(local_a8);
                if ((local_a0 != (int *)0x0) && (0 < *(long *)(local_a0 + -2))) {
LAB_00101f6d:
                  piVar16 = local_a0;
                  lVar12 = 0;
                  do {
                    lVar12 = lVar12 + 1;
                    Animation::remove_track((int)local_c8);
                  } while (lVar12 < *(long *)(piVar16 + -2));
                }
                if (sVar19 != 0) {
                  LOCK();
                  plVar1 = (long *)(sVar19 - 0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_80 - 0x10),false);
                  }
                }
              }
              if (local_90 != 0) {
                LOCK();
                plVar1 = (long *)(local_90 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_90 + -0x10),false);
                }
              }
              if (local_a0 != (int *)0x0) {
                LOCK();
                plVar1 = (long *)(local_a0 + -4);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static(local_a0 + -4,false);
                }
              }
              if (((local_c8 != (Object *)0x0) &&
                  (cVar5 = RefCounted::unreference(), pOVar13 = local_c8, cVar5 != '\0')) &&
                 (cVar5 = predelete_handler(local_c8), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                Memory::free_static(pOVar13,false);
              }
              local_138 = *(Ref **)(local_138 + 8);
            } while (local_138 != (Ref *)0x0);
          }
          iVar7 = AnimationLibrary::get_animation_list_size();
          if ((iVar7 != 0) && (iVar6 == 2)) {
            StringName::StringName((StringName *)&local_68,"unmapped_bones",false);
            AnimationMixer::add_animation_library((StringName *)local_128,(String *)&local_68);
            if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          if (((local_d0 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar13 = local_d0, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_d0), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
          }
          List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_d8);
          iVar7 = Array::size();
        }
        Array::~Array((Array *)local_e0);
      }
      goto joined_r0x0010195e;
    }
  }
  cVar5 = RefCounted::unreference();
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_e8), cVar5 != '\0')) {
    (**(code **)(*(long *)local_e8 + 0x140))(local_e8);
    Memory::free_static(local_e8,false);
  }
LAB_0010196c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PostImportPluginSkeletonTrackOrganizer::internal_process(EditorScenePostImportPlugin::InternalImportCategory,
   Node*, Node*, Ref<Resource>, Dictionary const&) */

void __thiscall
PostImportPluginSkeletonTrackOrganizer::internal_process
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  if (param_2 != 6) {
    return;
  }
  internal_process(param_3,param_4,param_6);
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1057,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1057,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* PostImportPluginSkeletonTrackOrganizer::is_class_ptr(void*) const */

uint __thiscall
PostImportPluginSkeletonTrackOrganizer::is_class_ptr
          (PostImportPluginSkeletonTrackOrganizer *this,void *param_1)

{
  return (uint)CONCAT71(0x1057,(undefined4 *)param_1 ==
                               &EditorScenePostImportPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1057,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1057,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1057,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PostImportPluginSkeletonTrackOrganizer::_getv(StringName const&, Variant&) const */

undefined8 PostImportPluginSkeletonTrackOrganizer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PostImportPluginSkeletonTrackOrganizer::_setv(StringName const&, Variant const&) */

undefined8 PostImportPluginSkeletonTrackOrganizer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PostImportPluginSkeletonTrackOrganizer::_validate_propertyv(PropertyInfo&) const */

void PostImportPluginSkeletonTrackOrganizer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PostImportPluginSkeletonTrackOrganizer::_property_can_revertv(StringName const&) const */

undefined8 PostImportPluginSkeletonTrackOrganizer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PostImportPluginSkeletonTrackOrganizer::_property_get_revertv(StringName const&, Variant&) const
    */

undefined8
PostImportPluginSkeletonTrackOrganizer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PostImportPluginSkeletonTrackOrganizer::_notificationv(int, bool) */

void PostImportPluginSkeletonTrackOrganizer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00105438;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00105438;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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
LAB_00102cf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102cf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00102d5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00102d5e:
  return &_get_class_namev()::_class_name_static;
}



/* PostImportPluginSkeletonTrackOrganizer::_get_class_namev() const */

undefined8 * PostImportPluginSkeletonTrackOrganizer::_get_class_namev(void)

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
LAB_00102df3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102df3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "PostImportPluginSkeletonTrackOrganizer");
      goto LAB_00102e5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "PostImportPluginSkeletonTrackOrganizer");
LAB_00102e5e:
  return &_get_class_namev()::_class_name_static;
}



/* PostImportPluginSkeletonTrackOrganizer::~PostImportPluginSkeletonTrackOrganizer() */

void __thiscall
PostImportPluginSkeletonTrackOrganizer::~PostImportPluginSkeletonTrackOrganizer
          (PostImportPluginSkeletonTrackOrganizer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x248) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001030ea;
    }
    if (*(long *)(this + 0x230) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001030ea;
    }
    if (*(long *)(this + 0x218) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001030ea;
    }
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001030ea;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001030ea;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001030ea;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001030ea;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
    }
  }
LAB_001030ea:
  *(undefined ***)this = &PTR__initialize_classv_00105438;
  Object::~Object((Object *)this);
  return;
}



/* PostImportPluginSkeletonTrackOrganizer::~PostImportPluginSkeletonTrackOrganizer() */

void __thiscall
PostImportPluginSkeletonTrackOrganizer::~PostImportPluginSkeletonTrackOrganizer
          (PostImportPluginSkeletonTrackOrganizer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x248) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010321a;
    }
    if (*(long *)(this + 0x230) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010321a;
    }
    if (*(long *)(this + 0x218) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010321a;
    }
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010321a;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010321a;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010321a;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010321a;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
    }
  }
LAB_0010321a:
  *(undefined ***)this = &PTR__initialize_classv_00105438;
  Object::~Object((Object *)this);
  operator_delete(this,0x260);
  return;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PostImportPluginSkeletonTrackOrganizer::get_class() const */

void PostImportPluginSkeletonTrackOrganizer::get_class(void)

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
            if (lVar5 == 0) goto LAB_0010348f;
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
LAB_0010348f:
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
    if (cVar6 != '\0') goto LAB_00103543;
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
              if (lVar5 == 0) goto LAB_001035f3;
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
LAB_001035f3:
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
      if (cVar6 != '\0') goto LAB_00103543;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103543:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PostImportPluginSkeletonTrackOrganizer::is_class(String const&) const */

undefined8 __thiscall
PostImportPluginSkeletonTrackOrganizer::is_class
          (PostImportPluginSkeletonTrackOrganizer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010372f;
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
LAB_0010372f:
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
    if (cVar6 != '\0') goto LAB_001037e3;
  }
  cVar6 = String::operator==(param_1,"PostImportPluginSkeletonTrackOrganizer");
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
              if (lVar5 == 0) goto LAB_001038a3;
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
LAB_001038a3:
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
      if (cVar6 != '\0') goto LAB_001037e3;
    }
    cVar6 = String::operator==(param_1,"EditorScenePostImportPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010394c;
    }
  }
LAB_001037e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010394c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00103ab4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00103ab4:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* Vector<int>::reverse() */

void __thiscall Vector<int>::reverse(Vector<int> *this)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(long *)(this + 8) == 0) {
    return;
  }
  uVar8 = 0;
  lVar7 = *(long *)(*(long *)(this + 8) + -8);
  while( true ) {
    if (lVar7 / 2 <= (long)uVar8) {
      return;
    }
    CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
    lVar4 = *(long *)(this + 8);
    lVar1 = uVar8 * 4;
    if (lVar4 == 0) break;
    lVar7 = *(long *)(lVar4 + -8);
    lVar6 = lVar7 - uVar8;
    uVar8 = uVar8 + 1;
    puVar2 = (undefined4 *)(lVar4 + -4 + lVar6 * 4);
    puVar5 = (undefined4 *)(lVar4 + lVar1);
    uVar3 = *puVar5;
    *puVar5 = *puVar2;
    *puVar2 = uVar3;
  }
  uVar3 = *(undefined4 *)(uVar8 * 4);
  *(undefined4 *)(uVar8 * 4) = *(undefined4 *)(~uVar8 << 2);
  *(undefined4 *)(~uVar8 << 2) = uVar3;
  return;
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



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PostImportPluginSkeletonTrackOrganizer::_initialize_classv() */

void PostImportPluginSkeletonTrackOrganizer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorScenePostImportPlugin::initialize_class()::initialized == '\0') {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00108010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorScenePostImportPlugin";
      local_70 = 0;
      local_50 = 0x1b;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00108008 != RefCounted::_bind_methods) {
        EditorScenePostImportPlugin::_bind_methods();
      }
      EditorScenePostImportPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorScenePostImportPlugin";
    local_68 = 0;
    local_50 = 0x1b;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PostImportPluginSkeletonTrackOrganizer";
    local_70 = 0;
    local_50 = 0x26;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  StringName *local_a8;
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
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
LAB_00104448:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104448;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010446a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010446a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* EditorScenePostImportPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorScenePostImportPlugin::_get_property_listv
          (EditorScenePostImportPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  local_78 = "EditorScenePostImportPlugin";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorScenePostImportPlugin";
  local_98 = 0;
  local_70 = 0x1b;
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
LAB_001047fd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001047fd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010481f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010481f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorScenePostImportPlugin",false);
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



/* PostImportPluginSkeletonTrackOrganizer::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
PostImportPluginSkeletonTrackOrganizer::_get_property_listv
          (PostImportPluginSkeletonTrackOrganizer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    EditorScenePostImportPlugin::_get_property_listv
              ((EditorScenePostImportPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PostImportPluginSkeletonTrackOrganizer";
  local_70 = 0x26;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PostImportPluginSkeletonTrackOrganizer";
  local_98 = 0;
  local_70 = 0x26;
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
LAB_00104bdd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104bdd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104bff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104bff:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PostImportPluginSkeletonTrackOrganizer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorScenePostImportPlugin::_get_property_listv
                ((EditorScenePostImportPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

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
LAB_00105160:
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
  if (lVar8 == 0) goto LAB_00105160;
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
        goto LAB_00105071;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00105071:
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



/* Vector<int>::append_array(Vector<int>) */

void __thiscall Vector<int>::append_array(Vector<int> *this,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar6 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar6;
    }
    CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar6 = lVar6 << 2;
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar7 = 0;
LAB_00105279:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar3 + -8);
        if (lVar7 <= lVar5) goto LAB_00105279;
        uVar1 = *(undefined4 *)(lVar3 + lVar5 * 4);
        lVar5 = lVar5 + 1;
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(undefined4 *)(*(long *)(this + 8) + lVar6) = uVar1;
        lVar6 = lVar6 + 4;
      } while (lVar5 != lVar2);
    }
  }
  return;
}



/* PostImportPluginSkeletonTrackOrganizer::get_internal_import_options(EditorScenePostImportPlugin::InternalImportCategory,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) */

void PostImportPluginSkeletonTrackOrganizer::_GLOBAL__sub_I_get_internal_import_options(void)

{
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PostImportPluginSkeletonTrackOrganizer::~PostImportPluginSkeletonTrackOrganizer() */

void __thiscall
PostImportPluginSkeletonTrackOrganizer::~PostImportPluginSkeletonTrackOrganizer
          (PostImportPluginSkeletonTrackOrganizer *this)

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


