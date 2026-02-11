
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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0xc;
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



/* initialize_vhacd_module(ModuleInitializationLevel) */

void initialize_vhacd_module(int param_1)

{
  if (param_1 == 2) {
    Mesh::convex_decomposition_function = convex_decompose;
  }
  return;
}



/* uninitialize_vhacd_module(ModuleInitializationLevel) */

void uninitialize_vhacd_module(int param_1)

{
  if (param_1 == 2) {
    Mesh::convex_decomposition_function = 0;
  }
  return;
}



/* CowData<Vector<Vector3> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<Vector3>>::_copy_on_write(CowData<Vector<Vector3>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  bool bVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar10 = 0x10;
  if (lVar2 * 0x10 != 0) {
    uVar10 = lVar2 * 0x10 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar10,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar7 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar2;
  puVar9 = puVar5 + 2;
  if (lVar2 != 0) {
    do {
      lVar8 = lVar7 * 0x10 + *(long *)this;
      puVar9[1] = 0;
      lVar3 = *(long *)(lVar8 + 8);
      plVar1 = (long *)(lVar3 + -0x10);
      if (lVar3 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00100368;
          LOCK();
          lVar6 = *plVar1;
          bVar11 = lVar3 == lVar6;
          if (bVar11) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar6 != -1) {
          puVar9[1] = *(undefined8 *)(lVar8 + 8);
        }
      }
LAB_00100368:
      lVar7 = lVar7 + 1;
      puVar9 = puVar9 + 2;
    } while (lVar2 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* CowData<Vector<unsigned int> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<unsigned_int>>::_copy_on_write(CowData<Vector<unsigned_int>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  bool bVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar10 = 0x10;
  if (lVar2 * 0x10 != 0) {
    uVar10 = lVar2 * 0x10 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar10,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar7 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar2;
  puVar9 = puVar5 + 2;
  if (lVar2 != 0) {
    do {
      lVar8 = lVar7 * 0x10 + *(long *)this;
      puVar9[1] = 0;
      lVar3 = *(long *)(lVar8 + 8);
      plVar1 = (long *)(lVar3 + -0x10);
      if (lVar3 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00100498;
          LOCK();
          lVar6 = *plVar1;
          bVar11 = lVar3 == lVar6;
          if (bVar11) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar6 != -1) {
          puVar9[1] = *(undefined8 *)(lVar8 + 8);
        }
      }
LAB_00100498:
      lVar7 = lVar7 + 1;
      puVar9 = puVar9 + 2;
    } while (lVar2 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* convex_decompose(float const*, int, unsigned int const*, int,
   Ref<MeshConvexDecompositionSettings> const&, Vector<Vector<unsigned int> >*) */

float * convex_decompose(float *param_1,int param_2,uint *param_3,int param_4,Ref *param_5,
                        Vector *param_6)

{
  long lVar1;
  CowData<Vector3> *this;
  CowData<unsigned_int> *this_00;
  long *plVar2;
  CowData<Vector<unsigned_int>> *this_01;
  code *pcVar3;
  void *__src;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  float *pfVar14;
  undefined4 in_register_0000000c;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined4 in_register_00000034;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long in_FS_OFFSET;
  float fVar21;
  long in_stack_00000008;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_84;
  long local_78;
  void *local_70;
  uint local_68;
  int local_64;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = __LC8;
  dStack_d0 = (double)_UNK_001015f8;
  local_88 = 0x400;
  local_c8 = (double)__LC9;
  dStack_c0 = (double)_UNK_00101608;
  local_b8 = (undefined1  [16])0x0;
  local_84 = 1;
  local_a8 = __LC10;
  uStack_a0 = _UNK_00101618;
  local_98 = __LC11;
  uStack_90 = _UNK_00101628;
  fVar21 = (float)MeshConvexDecompositionSettings::get_max_concavity();
  local_d8 = (double)fVar21;
  fVar21 = (float)MeshConvexDecompositionSettings::get_symmetry_planes_clipping_bias();
  dStack_d0 = (double)fVar21;
  fVar21 = (float)MeshConvexDecompositionSettings::get_revolution_axes_clipping_bias();
  local_c8 = (double)fVar21;
  fVar21 = (float)MeshConvexDecompositionSettings::get_min_volume_per_convex_hull();
  dStack_c0 = (double)fVar21;
  uVar5 = MeshConvexDecompositionSettings::get_resolution();
  local_a8 = CONCAT44(local_a8._4_4_,uVar5);
  uVar5 = MeshConvexDecompositionSettings::get_max_num_vertices_per_convex_hull();
  local_a8 = CONCAT44(uVar5,(undefined4)local_a8);
  uVar5 = MeshConvexDecompositionSettings::get_plane_downsampling();
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
  uVar5 = MeshConvexDecompositionSettings::get_convex_hull_downsampling();
  uStack_a0 = CONCAT44(uVar5,(undefined4)uStack_a0);
  bVar4 = MeshConvexDecompositionSettings::get_normalize_mesh();
  local_98 = CONCAT44(local_98._4_4_,(uint)bVar4);
  uVar5 = MeshConvexDecompositionSettings::get_mode();
  local_98 = CONCAT44(uVar5,(undefined4)local_98);
  bVar4 = MeshConvexDecompositionSettings::get_convex_hull_approximation();
  uStack_90 = CONCAT44(1,(uint)bVar4);
  local_88 = MeshConvexDecompositionSettings::get_max_convex_hulls();
  local_84 = MeshConvexDecompositionSettings::get_project_hull_vertices();
  plVar7 = (long *)VHACD::CreateVHACD();
  (**(code **)(*plVar7 + 8))
            (plVar7,CONCAT44(in_register_00000034,param_2),(ulong)param_3 & 0xffffffff,
             CONCAT44(in_register_0000000c,param_4),(ulong)param_5 & 0xffffffff,&local_d8);
  uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  lVar19 = (long)(int)uVar6;
  if (lVar19 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    if (in_stack_00000008 != 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    goto LAB_00100bc8;
  }
  if (lVar19 == 0) {
    if (in_stack_00000008 != 0) {
      if ((*(long *)(in_stack_00000008 + 8) != 0) &&
         (*(long *)(*(long *)(in_stack_00000008 + 8) + -8) != 0)) {
        CowData<Vector<unsigned_int>>::_unref
                  ((CowData<Vector<unsigned_int>> *)(in_stack_00000008 + 8));
      }
    }
    goto LAB_00100bc8;
  }
  CowData<Vector<Vector3>>::_copy_on_write((CowData<Vector<Vector3>> *)(param_1 + 2));
  uVar8 = (ulong)uVar6;
  uVar17 = uVar8 * 0x10 - 1;
  uVar17 = uVar17 | uVar17 >> 1;
  uVar17 = uVar17 | uVar17 >> 2;
  uVar17 = uVar17 | uVar17 >> 4;
  uVar17 = uVar17 | uVar17 >> 8;
  uVar17 = uVar17 | uVar17 >> 0x10;
  uVar17 = uVar17 | uVar17 >> 0x20;
  puVar9 = (undefined8 *)Memory::alloc_static(uVar17 + 0x11,false);
  if (puVar9 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
  }
  else {
    puVar12 = puVar9 + 2;
    *puVar9 = 1;
    *(undefined8 **)(param_1 + 2) = puVar12;
    do {
      puVar12[1] = 0;
      puVar12 = puVar12 + 2;
    } while (puVar9 + (uVar8 + 1) * 2 != puVar12);
    puVar9[1] = uVar8;
  }
  if (in_stack_00000008 != 0) {
    this_01 = (CowData<Vector<unsigned_int>> *)(in_stack_00000008 + 8);
    if (*(long *)(in_stack_00000008 + 8) == 0) {
      CowData<Vector<unsigned_int>>::_copy_on_write(this_01);
LAB_00101094:
      puVar9 = (undefined8 *)Memory::alloc_static(uVar17 + 0x11,false);
      if (puVar9 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        puVar12 = puVar9 + 2;
        *puVar9 = 1;
        puVar9[1] = 0;
        lVar20 = 0;
        *(undefined8 **)(in_stack_00000008 + 8) = puVar12;
LAB_0010080d:
        puVar9 = puVar12 + lVar20 * 2;
        do {
          puVar9[1] = 0;
          puVar9 = puVar9 + 2;
        } while (puVar9 != puVar12 + uVar8 * 2);
LAB_00100831:
        puVar12[-1] = uVar8;
      }
    }
    else {
      lVar20 = *(long *)(*(long *)(in_stack_00000008 + 8) + -8);
      if (lVar19 != lVar20) {
        lVar1 = uVar17 + 1;
        CowData<Vector<unsigned_int>>::_copy_on_write(this_01);
        if (lVar20 * 0x10 == 0) {
          lVar13 = 0;
          if (lVar20 < lVar19) {
LAB_00100c11:
            if (lVar20 == 0) goto LAB_00101094;
            iVar16 = CowData<Vector<unsigned_int>>::_realloc(this_01,lVar1);
            if (iVar16 == 0) goto LAB_001007f6;
            goto LAB_0010083a;
          }
        }
        else {
          uVar10 = lVar20 * 0x10 - 1;
          uVar10 = uVar10 | uVar10 >> 1;
          uVar10 = uVar10 | uVar10 >> 2;
          uVar10 = uVar10 | uVar10 >> 4;
          uVar10 = uVar10 | uVar10 >> 8;
          uVar10 = uVar10 | uVar10 >> 0x10;
          uVar10 = uVar10 | uVar10 >> 0x20;
          if (lVar20 < lVar19) {
            if (uVar17 != uVar10) goto LAB_00100c11;
LAB_001007f6:
            puVar12 = *(undefined8 **)(in_stack_00000008 + 8);
            if (puVar12 == (undefined8 *)0x0) goto convex_decompose;
            lVar20 = puVar12[-1];
            if (lVar20 < lVar19) goto LAB_0010080d;
            goto LAB_00100831;
          }
          lVar13 = uVar10 + 1;
        }
        puVar12 = *(undefined8 **)(in_stack_00000008 + 8);
        uVar17 = uVar8;
        while (puVar12 != (undefined8 *)0x0) {
          if ((ulong)puVar12[-1] <= uVar17) {
LAB_0010101e:
            if (lVar13 == lVar1) goto LAB_00100831;
            iVar16 = CowData<Vector<unsigned_int>>::_realloc(this_01,lVar1);
            if (iVar16 != 0) goto LAB_0010083a;
            puVar12 = *(undefined8 **)(in_stack_00000008 + 8);
            if (puVar12 == (undefined8 *)0x0) {
              pfVar14 = (float *)FUN_0010121e();
              return pfVar14;
            }
            goto LAB_00100831;
          }
          while (puVar12[uVar17 * 2 + 1] == 0) {
            uVar17 = uVar17 + 1;
            if ((ulong)puVar12[-1] <= uVar17) goto LAB_0010101e;
          }
          LOCK();
          plVar2 = (long *)(puVar12[uVar17 * 2 + 1] + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar19 = puVar12[uVar17 * 2 + 1];
            puVar12[uVar17 * 2 + 1] = 0;
            Memory::free_static((void *)(lVar19 + -0x10),false);
          }
          uVar17 = uVar17 + 1;
          puVar12 = *(undefined8 **)(in_stack_00000008 + 8);
        }
convex_decompose:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
  }
LAB_0010083a:
  uVar17 = 0;
  do {
    (**(code **)(*plVar7 + 0x20))(plVar7,uVar17 & 0xffffffff,&local_78);
    if (*(long *)(param_1 + 2) == 0) {
LAB_00100c30:
      lVar19 = 0;
LAB_00100c33:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar17,lVar19,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar19 = *(long *)(*(long *)(param_1 + 2) + -8);
    if (lVar19 <= (long)uVar17) goto LAB_00100c33;
    CowData<Vector<Vector3>>::_copy_on_write((CowData<Vector<Vector3>> *)(param_1 + 2));
    uVar10 = (ulong)local_68;
    lVar20 = *(long *)(param_1 + 2) + uVar17 * 0x10;
    lVar19 = *(long *)(lVar20 + 8);
    this = (CowData<Vector3> *)(lVar20 + 8);
    if (lVar19 == 0) {
      if (uVar10 != 0) {
        CowData<Vector3>::_copy_on_write(this);
        uVar15 = 0;
LAB_00100cb4:
        uVar18 = uVar10 * 0xc - 1;
        uVar18 = uVar18 | uVar18 >> 1;
        uVar18 = uVar18 >> 2 | uVar18;
        uVar18 = uVar18 >> 4 | uVar18;
        uVar18 = uVar18 >> 8 | uVar18;
        uVar18 = uVar18 >> 0x10 | uVar18;
        lVar19 = (uVar18 >> 0x20 | uVar18) + 1;
        if ((long)uVar15 < (long)uVar10) {
LAB_00100d48:
          if (uVar15 == 0) {
            puVar9 = (undefined8 *)Memory::alloc_static(lVar19 + 0x10,false);
            if (puVar9 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              puVar12 = puVar9 + 2;
              *puVar9 = 1;
              puVar9[1] = 0;
              *(undefined8 **)(lVar20 + 8) = puVar12;
              lVar19 = 0;
LAB_001009ab:
              if (lVar19 < (long)uVar10) {
                memset((void *)((long)puVar12 + lVar19 * 0xc),0,(uVar10 - lVar19) * 0xc);
              }
              puVar12[-1] = uVar10;
            }
          }
          else {
            iVar16 = CowData<Vector3>::_realloc(this,lVar19);
            if (iVar16 == 0) {
LAB_0010099a:
              puVar12 = *(undefined8 **)(lVar20 + 8);
              if (puVar12 != (undefined8 *)0x0) {
                lVar19 = puVar12[-1];
                goto LAB_001009ab;
              }
              goto convex_decompose;
            }
          }
        }
        else {
LAB_00100d04:
          iVar16 = CowData<Vector3>::_realloc(this,lVar19);
          if (iVar16 == 0) goto LAB_00100d2b;
        }
      }
    }
    else {
      uVar15 = *(ulong *)(lVar19 + -8);
      if (uVar10 != uVar15) {
        if (uVar10 == 0) {
          LOCK();
          plVar2 = (long *)(lVar19 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar19 = *(long *)(lVar20 + 8);
            *(undefined8 *)(lVar20 + 8) = 0;
            Memory::free_static((void *)(lVar19 + -0x10),false);
          }
          else {
            *(undefined8 *)(lVar20 + 8) = 0;
          }
        }
        else {
          CowData<Vector3>::_copy_on_write(this);
          uVar18 = uVar10 * 0xc - 1;
          uVar18 = uVar18 >> 1 | uVar18;
          uVar18 = uVar18 >> 2 | uVar18;
          uVar18 = uVar18 >> 4 | uVar18;
          uVar18 = uVar18 >> 8 | uVar18;
          uVar18 = uVar18 >> 0x10 | uVar18;
          uVar18 = uVar18 >> 0x20 | uVar18;
          lVar19 = uVar18 + 1;
          if (uVar15 * 0xc == 0) goto LAB_00100cb4;
          uVar11 = uVar15 * 0xc - 1;
          uVar11 = uVar11 | uVar11 >> 1;
          uVar11 = uVar11 | uVar11 >> 2;
          uVar11 = uVar11 | uVar11 >> 4;
          uVar11 = uVar11 | uVar11 >> 8;
          uVar11 = uVar11 | uVar11 >> 0x10;
          uVar11 = uVar11 | uVar11 >> 0x20;
          if ((long)uVar15 < (long)uVar10) {
            if (uVar11 != uVar18) goto LAB_00100d48;
            goto LAB_0010099a;
          }
          if (uVar11 != uVar18) goto LAB_00100d04;
LAB_00100d2b:
          if (*(long *)(lVar20 + 8) == 0) {
            pfVar14 = (float *)FUN_0010121e();
            return pfVar14;
          }
          *(ulong *)(*(long *)(lVar20 + 8) + -8) = uVar10;
        }
      }
    }
    CowData<Vector3>::_copy_on_write(this);
    lVar19 = *(long *)(lVar20 + 8);
    if (local_68 != 0) {
      iVar16 = 0;
      do {
        lVar20 = 0;
        do {
          *(float *)(lVar19 + lVar20 * 4) =
               (float)*(double *)(local_78 + (ulong)(uint)(iVar16 + (int)lVar20) * 8);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 3);
        iVar16 = iVar16 + 3;
        lVar19 = lVar19 + 0xc;
      } while (iVar16 != local_68 * 3);
    }
    if (in_stack_00000008 != 0) {
      if (*(long *)(in_stack_00000008 + 8) == 0) goto LAB_00100c30;
      lVar19 = *(long *)(*(long *)(in_stack_00000008 + 8) + -8);
      if (lVar19 <= (long)uVar17) goto LAB_00100c33;
      CowData<Vector<unsigned_int>>::_copy_on_write
                ((CowData<Vector<unsigned_int>> *)(in_stack_00000008 + 8));
      lVar20 = uVar17 * 0x10 + *(long *)(in_stack_00000008 + 8);
      lVar19 = *(long *)(lVar20 + 8);
      this_00 = (CowData<unsigned_int> *)(lVar20 + 8);
      uVar6 = local_64 * 3;
      uVar10 = (ulong)uVar6;
      if (lVar19 == 0) {
        if (uVar10 == 0) {
          uVar6 = 0;
          goto LAB_00100b8d;
        }
        CowData<unsigned_int>::_copy_on_write(this_00);
        uVar15 = 0;
LAB_00100e01:
        uVar18 = uVar10 * 4 - 1;
        uVar18 = uVar18 | uVar18 >> 1;
        uVar18 = uVar18 | uVar18 >> 2;
        uVar18 = uVar18 >> 4 | uVar18;
        uVar18 = uVar18 | uVar18 >> 8;
        uVar18 = uVar18 | uVar18 >> 0x10;
        lVar19 = (uVar18 >> 0x20 | uVar18) + 1;
        if ((long)uVar15 < (long)uVar10) {
LAB_00100e51:
          if (uVar15 != 0) goto LAB_00100d9f;
          puVar9 = (undefined8 *)Memory::alloc_static(lVar19 + 0x10,false);
          if (puVar9 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
            uVar6 = local_64 * 3;
            goto LAB_00100b8d;
          }
          puVar12 = puVar9 + 2;
          *puVar9 = 1;
          puVar9[1] = 0;
          *(undefined8 **)(lVar20 + 8) = puVar12;
LAB_00100b7f:
          puVar12[-1] = uVar10;
        }
        else {
LAB_00100d9f:
          iVar16 = CowData<unsigned_int>::_realloc(this_00,lVar19);
          if (iVar16 == 0) goto LAB_00100b72;
        }
        uVar6 = local_64 * 3;
      }
      else {
        uVar15 = *(ulong *)(lVar19 + -8);
        if (uVar10 != uVar15) {
          if (uVar10 != 0) {
            CowData<unsigned_int>::_copy_on_write(this_00);
            uVar18 = uVar10 * 4 - 1;
            uVar18 = uVar18 >> 1 | uVar18;
            uVar18 = uVar18 >> 2 | uVar18;
            uVar18 = uVar18 >> 4 | uVar18;
            uVar18 = uVar18 >> 8 | uVar18;
            uVar18 = uVar18 >> 0x10 | uVar18;
            uVar18 = uVar18 >> 0x20 | uVar18;
            lVar19 = uVar18 + 1;
            if (uVar15 * 4 == 0) goto LAB_00100e01;
            uVar11 = uVar15 * 4 - 1;
            uVar11 = uVar11 | uVar11 >> 1;
            uVar11 = uVar11 | uVar11 >> 2;
            uVar11 = uVar11 | uVar11 >> 4;
            uVar11 = uVar11 | uVar11 >> 8;
            uVar11 = uVar11 | uVar11 >> 0x10;
            uVar11 = uVar11 | uVar11 >> 0x20;
            if ((long)uVar15 < (long)uVar10) {
              if (uVar11 != uVar18) goto LAB_00100e51;
            }
            else if (uVar11 != uVar18) goto LAB_00100d9f;
LAB_00100b72:
            puVar12 = *(undefined8 **)(lVar20 + 8);
            if (puVar12 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            goto LAB_00100b7f;
          }
          LOCK();
          plVar2 = (long *)(lVar19 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar19 = *(long *)(lVar20 + 8);
            *(undefined8 *)(lVar20 + 8) = 0;
            Memory::free_static((void *)(lVar19 + -0x10),false);
            uVar6 = local_64 * 3;
          }
          else {
            *(undefined8 *)(lVar20 + 8) = 0;
            uVar6 = local_64 * 3;
          }
        }
      }
LAB_00100b8d:
      __src = local_70;
      CowData<unsigned_int>::_copy_on_write(this_00);
      memcpy(*(void **)(lVar20 + 8),__src,(ulong)uVar6 * 4);
    }
    uVar17 = uVar17 + 1;
  } while (uVar8 != uVar17);
LAB_00100bc8:
  (**(code **)(*plVar7 + 0x28))(plVar7);
  (**(code **)(*plVar7 + 0x30))(plVar7);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<Vector3> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<Vector3>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<unsigned int> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<unsigned_int>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* convex_decompose(float const*, int, unsigned int const*, int,
   Ref<MeshConvexDecompositionSettings> const&, Vector<Vector<unsigned int> >*) [clone .cold] */

void convex_decompose(float *param_1,int param_2,uint *param_3,int param_4,Ref *param_5,
                     Vector *param_6)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010121e(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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



/* CowData<Vector<Vector3> >::_unref() */

void __thiscall CowData<Vector<Vector3>>::_unref(CowData<Vector<Vector3>> *this)

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
          lVar6 = lVar6 + 0x10;
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



/* CowData<Vector<Vector3> >::_realloc(long) */

undefined8 __thiscall
CowData<Vector<Vector3>>::_realloc(CowData<Vector<Vector3>> *this,long param_1)

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



/* CowData<Vector<unsigned int> >::_unref() */

void __thiscall CowData<Vector<unsigned_int>>::_unref(CowData<Vector<unsigned_int>> *this)

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
          lVar6 = lVar6 + 0x10;
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



/* CowData<Vector<unsigned int> >::_realloc(long) */

undefined8 __thiscall
CowData<Vector<unsigned_int>>::_realloc(CowData<Vector<unsigned_int>> *this,long param_1)

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


