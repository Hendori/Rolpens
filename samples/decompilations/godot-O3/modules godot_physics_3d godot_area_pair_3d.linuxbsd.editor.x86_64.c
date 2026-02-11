
/* GodotArea2Pair3D::solve(float) */

void GodotArea2Pair3D::solve(float param_1)

{
  return;
}



/* GodotAreaPair3D::setup(float) */

ulong GodotAreaPair3D::setup(float param_1)

{
  GodotShape3D *pGVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *in_RDI;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  Transform3D aTStack_98 [48];
  int local_68 [14];
  long local_30;
  
  lVar7 = *(long *)((long)in_RDI + 0x38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(*(long *)((long)in_RDI + 0x30) + 0x20) & *(uint *)(lVar7 + 0x24)) != 0) {
    lVar8 = (long)*(int *)((long)in_RDI + 0x44);
    lVar9 = *(long *)(lVar7 + 0x38);
    if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_00100220:
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + -8);
        goto LAB_0010022d;
      }
    }
    else if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + -8);
      if (lVar9 <= lVar8) goto LAB_0010022d;
      Transform3D::operator*((Transform3D *)local_68,(Transform3D *)(lVar7 + 0x48));
      lVar9 = (long)*(int *)((long)in_RDI + 0x44);
      lVar7 = *(long *)(*(long *)((long)in_RDI + 0x38) + 0x38);
      if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_00100270:
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + -8);
          goto LAB_0010027d;
        }
      }
      else if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + -8);
        if (lVar8 <= lVar9) goto LAB_0010027d;
        lVar8 = (long)*(int *)((long)in_RDI + 0x40);
        pGVar1 = *(GodotShape3D **)(lVar7 + 0x80 + lVar9 * 0x90);
        lVar9 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
        if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_00100220;
        if (lVar9 == 0) goto LAB_00100328;
        lVar9 = *(long *)(lVar9 + -8);
        if (lVar9 <= lVar8) goto LAB_0010022d;
        Transform3D::operator*(aTStack_98,(Transform3D *)(*(long *)((long)in_RDI + 0x30) + 0x48));
        lVar9 = (long)*(int *)((long)in_RDI + 0x40);
        lVar7 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
        if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_00100270;
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + -8);
          if (lVar8 <= lVar9) goto LAB_0010027d;
          cVar3 = GodotCollisionSolver3D::solve_static
                            (*(GodotShape3D **)(lVar7 + 0x80 + lVar9 * 0x90),aTStack_98,pGVar1,
                             (Transform3D *)local_68,
                             (_func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *)0x0,
                             in_RDI,(Vector3 *)0x0,0.0,0.0);
          param_1 = extraout_XMM0_Da;
          if (cVar3 == '\0') goto LAB_00100170;
          goto LAB_00100173;
        }
      }
      lVar8 = 0;
LAB_0010027d:
      _err_print_index_error
                ("get_shape","modules/godot_physics_3d/godot_collision_object_3d.h",0x7c,lVar9,lVar8
                 ,"p_index","shapes.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
LAB_00100328:
    lVar9 = 0;
LAB_0010022d:
    _err_print_index_error
              ("get_shape_transform","modules/godot_physics_3d/godot_collision_object_3d.h",0x80,
               lVar8,lVar9,"p_index","shapes.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_00100170:
  cVar3 = '\0';
LAB_00100173:
  *(undefined2 *)((long)in_RDI + 0x49) = 0;
  uVar6 = 0;
  if (*(char *)((long)in_RDI + 0x48) == cVar3) goto LAB_00100181;
  GodotArea3D::get_param(param_1,(Variant *)local_68,*(undefined8 *)((long)in_RDI + 0x38),0);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (iVar5 == 0) {
    GodotArea3D::get_param((Variant *)local_68,*(undefined8 *)((long)in_RDI + 0x38),5);
    iVar5 = Variant::operator_cast_to_int((Variant *)local_68);
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (iVar5 != 0) goto LAB_001001ea;
    GodotArea3D::get_param((Variant *)local_68,*(undefined8 *)((long)in_RDI + 0x38),7);
    iVar5 = Variant::operator_cast_to_int((Variant *)local_68);
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (iVar5 != 0) goto LAB_001001ea;
    uVar4 = *(undefined1 *)((long)in_RDI + 0x4a);
  }
  else {
LAB_001001ea:
    *(undefined1 *)((long)in_RDI + 0x4a) = 1;
    uVar4 = 1;
  }
  *(undefined1 *)((long)in_RDI + 0x49) = uVar4;
  uVar6 = Callable::is_valid();
  if ((char)uVar6 == '\0') {
    uVar6 = (ulong)*(byte *)((long)in_RDI + 0x49);
  }
  else {
    *(undefined1 *)((long)in_RDI + 0x49) = 1;
  }
  *(char *)((long)in_RDI + 0x48) = cVar3;
LAB_00100181:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* GodotArea2Pair3D::setup(float) */

uint GodotArea2Pair3D::setup(float param_1)

{
  GodotShape3D *pGVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  void *in_RDI;
  uint uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  Transform3D aTStack_a8 [48];
  Transform3D local_78 [56];
  long local_40;
  
  lVar4 = *(long *)((long)in_RDI + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = *(uint *)(lVar4 + 0x24) & *(uint *)(*(long *)((long)in_RDI + 0x30) + 0x20);
  uVar8 = *(uint *)(lVar4 + 0x20) & *(uint *)(*(long *)((long)in_RDI + 0x30) + 0x24);
  if (uVar7 == 0 && uVar8 == 0) {
LAB_001004f0:
    cVar3 = uVar8 != 0;
    bVar9 = uVar7 != 0;
LAB_001004fd:
    *(undefined1 *)((long)in_RDI + 0x4a) = 0;
    uVar7 = 0;
    if (*(char *)((long)in_RDI + 0x48) == cVar3) {
      *(undefined1 *)((long)in_RDI + 0x4b) = 0;
      cVar3 = *(char *)((long)in_RDI + 0x49);
    }
    else {
      uVar7 = Callable::is_valid();
      if (((char)uVar7 != '\0') &&
         (uVar7 = (uint)*(byte *)((long)in_RDI + 0x4d), *(byte *)((long)in_RDI + 0x4d) != 0)) {
        *(undefined1 *)((long)in_RDI + 0x4a) = 1;
      }
      *(char *)((long)in_RDI + 0x48) = cVar3;
      *(undefined1 *)((long)in_RDI + 0x4b) = 0;
      cVar3 = *(char *)((long)in_RDI + 0x49);
      param_1 = extraout_XMM0_Da_01;
    }
    if ((bool)cVar3 != bVar9) {
      cVar3 = Callable::is_valid();
      if ((cVar3 != '\0') && (*(byte *)((long)in_RDI + 0x4c) != 0)) {
        *(undefined1 *)((long)in_RDI + 0x4b) = 1;
        uVar7 = (uint)*(byte *)((long)in_RDI + 0x4c);
      }
      *(bool *)((long)in_RDI + 0x49) = bVar9;
      param_1 = extraout_XMM0_Da_00;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  lVar5 = (long)*(int *)((long)in_RDI + 0x44);
  lVar6 = *(long *)(lVar4 + 0x38);
  if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_001005b0:
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + -8);
      goto LAB_001005bd;
    }
  }
  else if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + -8);
    if (lVar6 <= lVar5) goto LAB_001005bd;
    Transform3D::operator*(local_78,(Transform3D *)(lVar4 + 0x48));
    lVar6 = (long)*(int *)((long)in_RDI + 0x44);
    lVar4 = *(long *)(*(long *)((long)in_RDI + 0x38) + 0x38);
    if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_00100600:
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + -8);
        goto LAB_00100609;
      }
    }
    else if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + -8);
      if (lVar5 <= lVar6) goto LAB_00100609;
      lVar5 = (long)*(int *)((long)in_RDI + 0x40);
      pGVar1 = *(GodotShape3D **)(lVar4 + 0x80 + lVar6 * 0x90);
      lVar6 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
      if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_001005b0;
      if (lVar6 == 0) goto LAB_00100650;
      lVar6 = *(long *)(lVar6 + -8);
      if (lVar6 <= lVar5) goto LAB_001005bd;
      Transform3D::operator*(aTStack_a8,(Transform3D *)(*(long *)((long)in_RDI + 0x30) + 0x48));
      lVar6 = (long)*(int *)((long)in_RDI + 0x40);
      lVar4 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
      if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_00100600;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar6) goto LAB_00100609;
        bVar9 = false;
        cVar3 = GodotCollisionSolver3D::solve_static
                          (*(GodotShape3D **)(lVar4 + 0x80 + lVar6 * 0x90),aTStack_a8,pGVar1,
                           local_78,(_func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr
                                     *)0x0,in_RDI,(Vector3 *)0x0,0.0,0.0);
        param_1 = extraout_XMM0_Da;
        if (cVar3 == '\0') goto LAB_001004fd;
        goto LAB_001004f0;
      }
    }
    lVar5 = 0;
LAB_00100609:
    _err_print_index_error
              ("get_shape","modules/godot_physics_3d/godot_collision_object_3d.h",0x7c,lVar6,lVar5,
               "p_index","shapes.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_00100650:
  lVar6 = 0;
LAB_001005bd:
  _err_print_index_error
            ("get_shape_transform","modules/godot_physics_3d/godot_collision_object_3d.h",0x80,lVar5
             ,lVar6,"p_index","shapes.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotAreaSoftBodyPair3D::setup(float) */

ulong GodotAreaSoftBodyPair3D::setup(float param_1)

{
  GodotShape3D *pGVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *in_RDI;
  long in_FS_OFFSET;
  Transform3D aTStack_98 [48];
  int local_68 [14];
  long local_30;
  
  lVar6 = *(long *)((long)in_RDI + 0x38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(*(long *)((long)in_RDI + 0x30) + 0x20) & *(uint *)(lVar6 + 0x24)) == 0) {
LAB_001007d0:
    cVar3 = '\0';
LAB_001007d2:
    *(undefined2 *)((long)in_RDI + 0x49) = 0;
    uVar5 = 0;
    if (*(char *)((long)in_RDI + 0x48) != cVar3) {
      GodotArea3D::get_param((Variant *)local_68,*(undefined8 *)((long)in_RDI + 0x38),0);
      iVar4 = Variant::operator_cast_to_int((Variant *)local_68);
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((iVar4 != 0) || (__LC7 < (double)*(float *)(*(long *)((long)in_RDI + 0x38) + 0x100))) {
        *(undefined1 *)((long)in_RDI + 0x4a) = 1;
      }
      uVar5 = Callable::is_valid();
      if ((char)uVar5 == '\0') {
        uVar5 = (ulong)*(byte *)((long)in_RDI + 0x49);
      }
      else {
        *(undefined1 *)((long)in_RDI + 0x49) = 1;
      }
      *(char *)((long)in_RDI + 0x48) = cVar3;
    }
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar5;
  }
  lVar7 = (long)*(int *)((long)in_RDI + 0x44);
  lVar8 = *(long *)(lVar6 + 0x38);
  if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_00100890:
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + -8);
      goto LAB_0010089d;
    }
  }
  else if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + -8);
    if (lVar8 <= lVar7) goto LAB_0010089d;
    Transform3D::operator*((Transform3D *)local_68,(Transform3D *)(lVar6 + 0x48));
    lVar8 = (long)*(int *)((long)in_RDI + 0x44);
    lVar6 = *(long *)(*(long *)((long)in_RDI + 0x38) + 0x38);
    if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_001008e0:
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + -8);
        goto LAB_001008e9;
      }
    }
    else if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + -8);
      if (lVar7 <= lVar8) goto LAB_001008e9;
      lVar7 = (long)*(int *)((long)in_RDI + 0x40);
      pGVar1 = *(GodotShape3D **)(lVar6 + 0x80 + lVar8 * 0x90);
      lVar8 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
      if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_00100890;
      if (lVar8 == 0) goto LAB_00100930;
      lVar8 = *(long *)(lVar8 + -8);
      if (lVar8 <= lVar7) goto LAB_0010089d;
      Transform3D::operator*(aTStack_98,(Transform3D *)(*(long *)((long)in_RDI + 0x30) + 0x48));
      lVar8 = (long)*(int *)((long)in_RDI + 0x40);
      lVar6 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
      if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_001008e0;
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar7 <= lVar8) goto LAB_001008e9;
        cVar3 = GodotCollisionSolver3D::solve_static
                          (*(GodotShape3D **)(lVar6 + 0x80 + lVar8 * 0x90),aTStack_98,pGVar1,
                           (Transform3D *)local_68,
                           (_func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *)0x0,
                           in_RDI,(Vector3 *)0x0,0.0,0.0);
        if (cVar3 != '\0') goto LAB_001007d2;
        goto LAB_001007d0;
      }
    }
    lVar7 = 0;
LAB_001008e9:
    _err_print_index_error
              ("get_shape","modules/godot_physics_3d/godot_collision_object_3d.h",0x7c,lVar8,lVar7,
               "p_index","shapes.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_00100930:
  lVar8 = 0;
LAB_0010089d:
  _err_print_index_error
            ("get_shape_transform","modules/godot_physics_3d/godot_collision_object_3d.h",0x80,lVar7
             ,lVar8,"p_index","shapes.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<AreaCMP>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<AreaCMP>::_copy_on_write(CowData<AreaCMP> *this)

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
  __n = lVar2 * 0x10;
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



/* HashSet<GodotConstraint3D*, HashMapHasherDefault, HashMapComparatorDefault<GodotConstraint3D*>
   >::erase(GodotConstraint3D* const&) [clone .isra.0] */

void __thiscall
HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::erase
          (HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>
           *this,GodotConstraint3D **param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  ulong uVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  
  lVar6 = *(long *)this;
  if ((lVar6 != 0) && (*(int *)(this + 0x24) != 0)) {
    lVar7 = *(long *)(this + 0x18);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar42 = CONCAT44(0,uVar31);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar32 = (long)*param_1 * 0x3ffff - 1;
    uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
    uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
    uVar32 = uVar32 >> 0x16 ^ uVar32;
    uVar40 = uVar32 & 0xffffffff;
    if ((int)uVar32 == 0) {
      uVar40 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar40 * lVar8;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar42;
    lVar37 = SUB168(auVar11 * auVar21,8);
    uVar44 = *(uint *)(lVar7 + lVar37 * 4);
    iVar35 = SUB164(auVar11 * auVar21,8);
    if (uVar44 != 0) {
      uVar33 = 0;
      do {
        if ((uint)uVar40 == uVar44) {
          lVar9 = *(long *)(this + 8);
          uVar44 = *(uint *)(lVar9 + lVar37 * 4);
          uVar32 = (ulong)uVar44;
          if (*param_1 == *(GodotConstraint3D **)(lVar6 + uVar32 * 8)) {
            lVar10 = *(long *)(this + 0x10);
            puVar1 = (uint *)(lVar10 + uVar32 * 4);
            uVar33 = *puVar1;
            uVar40 = (ulong)uVar33;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(uVar33 + 1) * lVar8;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar42;
            lVar37 = SUB168(auVar15 * auVar25,8) * 4;
            uVar36 = SUB164(auVar15 * auVar25,8);
            uVar43 = (ulong)uVar36;
            puVar39 = (uint *)(lVar7 + lVar37);
            if ((*puVar39 == 0) ||
               (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)*puVar39 * lVar8, auVar26._8_8_ = 0,
               auVar26._0_8_ = uVar42, auVar17._8_8_ = 0,
               auVar17._0_8_ = (ulong)((uVar36 + uVar31) - SUB164(auVar16 * auVar26,8)) * lVar8,
               auVar27._8_8_ = 0, auVar27._0_8_ = uVar42, SUB164(auVar17 * auVar27,8) == 0)) {
              uVar43 = (ulong)uVar33;
            }
            else {
              while( true ) {
                puVar34 = (uint *)(lVar37 + lVar9);
                puVar4 = (uint *)(lVar9 + uVar40 * 4);
                puVar41 = (uint *)(uVar40 * 4 + lVar7);
                puVar2 = (undefined4 *)(lVar10 + (ulong)*puVar34 * 4);
                puVar3 = (undefined4 *)(lVar10 + (ulong)*puVar4 * 4);
                uVar5 = *puVar3;
                *puVar3 = *puVar2;
                *puVar2 = uVar5;
                uVar33 = *puVar39;
                *puVar39 = *puVar41;
                *puVar41 = uVar33;
                uVar33 = *puVar34;
                *puVar34 = *puVar4;
                *puVar4 = uVar33;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (ulong)((int)uVar43 + 1) * lVar8;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar42;
                uVar38 = SUB168(auVar20 * auVar30,8);
                lVar37 = uVar38 * 4;
                puVar39 = (uint *)(lVar7 + lVar37);
                if ((*puVar39 == 0) ||
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar39 * lVar8, auVar28._8_8_ = 0,
                   auVar28._0_8_ = uVar42, auVar19._8_8_ = 0,
                   auVar19._0_8_ =
                        (ulong)((SUB164(auVar20 * auVar30,8) + uVar31) - SUB164(auVar18 * auVar28,8)
                               ) * lVar8, auVar29._8_8_ = 0, auVar29._0_8_ = uVar42,
                   SUB164(auVar19 * auVar29,8) == 0)) break;
                uVar40 = uVar43;
                uVar43 = uVar38 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar7 + uVar43 * 4) = 0;
            uVar31 = *(int *)(this + 0x24) - 1;
            *(uint *)(this + 0x24) = uVar31;
            if (uVar31 <= uVar44) {
              return;
            }
            uVar33 = *(uint *)(lVar10 + (ulong)uVar31 * 4);
            *(undefined8 *)(lVar6 + uVar32 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar31 * 8);
            *puVar1 = uVar33;
            *(uint *)(lVar9 + (ulong)*(uint *)(lVar10 + (ulong)*(uint *)(this + 0x24) * 4) * 4) =
                 uVar44;
            return;
          }
        }
        uVar33 = uVar33 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar8;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar42;
        lVar37 = SUB168(auVar12 * auVar22,8);
        uVar44 = *(uint *)(lVar7 + lVar37 * 4);
        iVar35 = SUB164(auVar12 * auVar22,8);
      } while ((uVar44 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar8, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar42, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar23,8)) * lVar8,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar42, uVar33 <= SUB164(auVar14 * auVar24,8)));
    }
  }
  return;
}



/* GodotArea2Pair3D::GodotArea2Pair3D(GodotArea3D*, int, GodotArea3D*, int) */

void __thiscall
GodotArea2Pair3D::GodotArea2Pair3D
          (GodotArea2Pair3D *this,GodotArea3D *param_1,int param_2,GodotArea3D *param_3,int param_4)

{
  GodotArea3D GVar1;
  GodotArea3D GVar2;
  long in_FS_OFFSET;
  GodotConstraint3D *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(GodotArea3D **)(this + 0x30) = param_1;
  *(int *)(this + 0x40) = param_2;
  *(undefined ***)this = &PTR_get_soft_body_ptr_001042c0;
  GVar2 = param_1[0x124];
  GVar1 = param_3[0x124];
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(ushort *)(this + 0x4c) = CONCAT11(GVar1,GVar2);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  this[0x24] = (GodotArea2Pair3D)0x1;
  *(undefined4 *)(this + 0x48) = 0;
  *(GodotArea3D **)(this + 0x38) = param_3;
  *(int *)(this + 0x44) = param_4;
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  insert(local_38);
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  insert(local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotAreaSoftBodyPair3D::GodotAreaSoftBodyPair3D(GodotSoftBody3D*, int, GodotArea3D*, int) */

void __thiscall
GodotAreaSoftBodyPair3D::GodotAreaSoftBodyPair3D
          (GodotAreaSoftBodyPair3D *this,GodotSoftBody3D *param_1,int param_2,GodotArea3D *param_3,
          int param_4)

{
  long in_FS_OFFSET;
  GodotConstraint3D *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(GodotSoftBody3D **)(this + 0x30) = param_1;
  *(int *)(this + 0x40) = param_2;
  *(undefined ***)this = &PTR_get_soft_body_ptr_00104308;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  this[0x24] = (GodotAreaSoftBodyPair3D)0x1;
  *(undefined4 *)(this + 0x48) = 0;
  *(GodotArea3D **)(this + 0x38) = param_3;
  *(int *)(this + 0x44) = param_4;
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  insert(local_38);
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  insert(local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotAreaPair3D::GodotAreaPair3D(GodotBody3D*, int, GodotArea3D*, int) */

void __thiscall
GodotAreaPair3D::GodotAreaPair3D
          (GodotAreaPair3D *this,GodotBody3D *param_1,int param_2,GodotArea3D *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  GodotAreaPair3D *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(GodotBody3D **)(this + 0x30) = param_1;
  *(GodotArea3D **)(this + 0x38) = param_3;
  *(int *)(this + 0x40) = param_2;
  *(int *)(this + 0x44) = param_4;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  this[0x24] = (GodotAreaPair3D)0x1;
  *(undefined ***)this = &PTR_get_soft_body_ptr_00104278;
  *(undefined4 *)(this + 0x48) = 0;
  local_38[0] = this;
  puVar2 = (undefined4 *)
           HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
           ::operator[]((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                         *)(param_1 + 0x2f0),(GodotConstraint3D **)local_38);
  *puVar2 = 0;
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  insert((GodotConstraint3D **)local_38);
  iVar1 = GodotBody3D::get_mode();
  if (iVar1 == 1) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      GodotBody3D::set_active(SUB81(param_1,0));
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotArea2Pair3D::pre_solve(float) */

undefined8 GodotArea2Pair3D::pre_solve(float param_1)

{
  long lVar1;
  int *piVar2;
  long in_RDI;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  BodyKey aBStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RDI + 0x4a) != '\0') {
    lVar1 = *(long *)(in_RDI + 0x30);
    if (*(char *)(in_RDI + 0x48) == '\0') {
      GodotArea3D::BodyKey::BodyKey
                (aBStack_38,*(GodotArea3D **)(in_RDI + 0x38),*(uint *)(in_RDI + 0x44),
                 *(uint *)(in_RDI + 0x40));
      piVar2 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                      ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                    *)(lVar1 + 0x1e8),aBStack_38);
      *piVar2 = *piVar2 + -1;
      param_1 = extraout_XMM0_Da_02;
      if (*(long *)(lVar1 + 0x40) == 0) goto LAB_00101018;
      lVar1 = *(long *)(lVar1 + 0x148);
    }
    else {
      GodotArea3D::BodyKey::BodyKey
                (aBStack_38,*(GodotArea3D **)(in_RDI + 0x38),*(uint *)(in_RDI + 0x44),
                 *(uint *)(in_RDI + 0x40));
      piVar2 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                      ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                    *)(lVar1 + 0x1e8),aBStack_38);
      *piVar2 = *piVar2 + 1;
      lVar1 = *(long *)(lVar1 + 0x148);
      param_1 = extraout_XMM0_Da;
    }
    if (lVar1 == 0) {
      param_1 = (float)GodotArea3D::_queue_monitor_update();
    }
  }
LAB_00101018:
  if (*(char *)(in_RDI + 0x4b) != '\0') {
    lVar1 = *(long *)(in_RDI + 0x38);
    if (*(char *)(in_RDI + 0x49) == '\0') {
      GodotArea3D::BodyKey::BodyKey
                (aBStack_38,*(GodotArea3D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
                 *(uint *)(in_RDI + 0x44));
      piVar2 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                      ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                    *)(lVar1 + 0x1e8),aBStack_38);
      *piVar2 = *piVar2 + -1;
      param_1 = extraout_XMM0_Da_01;
      if (*(long *)(lVar1 + 0x40) == 0) goto LAB_00101059;
      lVar1 = *(long *)(lVar1 + 0x148);
    }
    else {
      GodotArea3D::BodyKey::BodyKey
                (aBStack_38,*(GodotArea3D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
                 *(uint *)(in_RDI + 0x44));
      piVar2 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                      ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                    *)(lVar1 + 0x1e8),aBStack_38);
      *piVar2 = *piVar2 + 1;
      lVar1 = *(long *)(lVar1 + 0x148);
      param_1 = extraout_XMM0_Da_00;
    }
    if (lVar1 == 0) {
      param_1 = (float)GodotArea3D::_queue_monitor_update();
    }
  }
LAB_00101059:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return 0;
}



/* GodotArea2Pair3D::~GodotArea2Pair3D() */

void __thiscall GodotArea2Pair3D::~GodotArea2Pair3D(GodotArea2Pair3D *this)

{
  long lVar1;
  char cVar2;
  int *piVar3;
  GodotArea3D *pGVar4;
  long in_FS_OFFSET;
  GodotArea2Pair3D *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_001042c0;
  if (this[0x48] != (GodotArea2Pair3D)0x0) {
    cVar2 = Callable::is_valid();
    if ((cVar2 != '\0') && (this[0x4d] != (GodotArea2Pair3D)0x0)) {
      lVar1 = *(long *)(this + 0x30);
      GodotArea3D::BodyKey::BodyKey
                ((BodyKey *)local_38,*(GodotArea3D **)(this + 0x38),*(uint *)(this + 0x44),
                 *(uint *)(this + 0x40));
      piVar3 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                      ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                    *)(lVar1 + 0x1e8),(BodyKey *)local_38);
      *piVar3 = *piVar3 + -1;
      if ((*(long *)(lVar1 + 0x40) != 0) && (*(long *)(lVar1 + 0x148) == 0)) {
        GodotArea3D::_queue_monitor_update();
      }
    }
  }
  if (this[0x49] != (GodotArea2Pair3D)0x0) {
    cVar2 = Callable::is_valid();
    pGVar4 = *(GodotArea3D **)(this + 0x30);
    if ((cVar2 == '\0') || (this[0x4c] == (GodotArea2Pair3D)0x0)) goto LAB_0010113e;
    lVar1 = *(long *)(this + 0x38);
    GodotArea3D::BodyKey::BodyKey
              ((BodyKey *)local_38,pGVar4,*(uint *)(this + 0x40),*(uint *)(this + 0x44));
    piVar3 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                    ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                  *)(lVar1 + 0x1e8),(BodyKey *)local_38);
    *piVar3 = *piVar3 + -1;
    if ((*(long *)(lVar1 + 0x40) != 0) && (*(long *)(lVar1 + 0x148) == 0)) {
      GodotArea3D::_queue_monitor_update();
    }
  }
  pGVar4 = *(GodotArea3D **)(this + 0x30);
LAB_0010113e:
  local_38[0] = this;
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  erase((HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>
         *)(pGVar4 + 0x218),(GodotConstraint3D **)local_38);
  local_38[0] = this;
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  erase((HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>
         *)(*(long *)(this + 0x38) + 0x218),(GodotConstraint3D **)local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotArea2Pair3D::~GodotArea2Pair3D() */

void __thiscall GodotArea2Pair3D::~GodotArea2Pair3D(GodotArea2Pair3D *this)

{
  ~GodotArea2Pair3D(this);
  operator_delete(this,0x50);
  return;
}



/* GodotAreaPair3D::pre_solve(float) */

undefined8 GodotAreaPair3D::pre_solve(float param_1)

{
  CowData<AreaCMP> *pCVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long in_RDI;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  BodyKey local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RDI + 0x49) == '\0') goto LAB_001013aa;
  lVar11 = *(long *)(in_RDI + 0x38);
  if (*(char *)(in_RDI + 0x48) == '\0') {
    if (*(char *)(in_RDI + 0x4a) != '\0') {
      lVar2 = *(long *)(in_RDI + 0x30);
      *(undefined1 *)(in_RDI + 0x4b) = 0;
      lVar12 = *(long *)(lVar2 + 0x328);
      if ((lVar12 != 0) && (lVar13 = *(long *)(lVar12 + -8), 0 < lVar13)) {
        lVar6 = 0;
        do {
          if (*(long *)(lVar11 + 0x10) == *(long *)(*(long *)(lVar12 + lVar6 * 0x10) + 0x10)) {
            if ((int)lVar6 < 0) break;
            lVar11 = (long)(int)lVar6;
            if (lVar13 <= lVar11) {
LAB_0010167d:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar11,lVar13,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pCVar1 = (CowData<AreaCMP> *)(lVar2 + 0x328);
            CowData<AreaCMP>::_copy_on_write(pCVar1);
            lVar13 = *(long *)(lVar2 + 0x328);
            lVar12 = lVar13 + lVar11 * 0x10;
            iVar5 = *(int *)(lVar12 + 8) + -1;
            *(int *)(lVar12 + 8) = iVar5;
            if (lVar13 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = *(long *)(lVar13 + -8);
              if (lVar11 < lVar12) {
                if (iVar5 < 1) {
                  CowData<AreaCMP>::_copy_on_write(pCVar1);
                  lVar2 = *(long *)(lVar2 + 0x328);
                  if (lVar2 == 0) {
                    lVar12 = -1;
                  }
                  else {
                    lVar13 = *(long *)(lVar2 + -8);
                    lVar12 = lVar13 + -1;
                    if (lVar11 < lVar12) {
                      puVar8 = (undefined8 *)(lVar2 + lVar11 * 0x10);
                      do {
                        puVar9 = puVar8 + 2;
                        *puVar8 = puVar8[2];
                        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + 3);
                        puVar8 = puVar9;
                      } while (puVar9 != (undefined8 *)(lVar2 + -0x10 + lVar13 * 0x10));
                    }
                  }
                  CowData<AreaCMP>::resize<false>(pCVar1,lVar12);
                }
                break;
              }
            }
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar12,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar6 = lVar6 + 1;
        } while (lVar13 != lVar6);
      }
    }
    cVar4 = Callable::is_valid();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_001013aa;
    lVar11 = *(long *)(in_RDI + 0x38);
    GodotArea3D::BodyKey::BodyKey
              (local_58,*(GodotBody3D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
               *(uint *)(in_RDI + 0x44));
    piVar7 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                    ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                  *)(lVar11 + 0x1b8),local_58);
    *piVar7 = *piVar7 + -1;
    param_1 = extraout_XMM0_Da_02;
    if (*(long *)(lVar11 + 0x40) == 0) goto LAB_001013aa;
    lVar11 = *(long *)(lVar11 + 0x148);
  }
  else {
    if (*(char *)(in_RDI + 0x4a) != '\0') {
      lVar2 = *(long *)(in_RDI + 0x30);
      *(undefined1 *)(in_RDI + 0x4b) = 1;
      lVar12 = *(long *)(lVar2 + 0x328);
      pCVar1 = (CowData<AreaCMP> *)(lVar2 + 0x328);
      if (lVar12 == 0) {
        iVar5 = CowData<AreaCMP>::resize<false>(pCVar1,1);
        if (iVar5 != 0) goto LAB_00101704;
        CowData<AreaCMP>::_copy_on_write(pCVar1);
        plVar10 = *(long **)(lVar2 + 0x328);
      }
      else {
        lVar13 = *(long *)(lVar12 + -8);
        if (lVar13 == 0) {
          lVar6 = 0;
          lVar12 = 1;
        }
        else {
          if (0 < lVar13) {
            lVar6 = 0;
            do {
              if (*(long *)(lVar11 + 0x10) == *(long *)(*(long *)(lVar12 + lVar6 * 0x10) + 0x10)) {
                if (-1 < (int)lVar6) {
                  lVar11 = (long)(int)lVar6;
                  if (lVar13 <= lVar11) goto LAB_0010167d;
                  CowData<AreaCMP>::_copy_on_write(pCVar1);
                  piVar7 = (int *)(*(long *)(lVar2 + 0x328) + lVar11 * 0x10 + 8);
                  *piVar7 = *piVar7 + 1;
                  goto LAB_00101465;
                }
                break;
              }
              lVar6 = lVar6 + 1;
            } while (lVar13 != lVar6);
          }
          lVar6 = 0;
          while ((lVar6 < lVar13 &&
                 (*(int *)(*(long *)(lVar12 + lVar6 * 0x10) + 0x120) <= *(int *)(lVar11 + 0x120))))
          {
            lVar6 = lVar6 + 1;
          }
          lVar12 = lVar13 + 1;
          if (lVar12 <= lVar6) {
            _err_print_index_error
                      ("insert","./core/templates/cowdata.h",0xf0,lVar6,lVar12,"p_pos","new_size",""
                       ,false,false);
            goto LAB_00101465;
          }
        }
        iVar5 = CowData<AreaCMP>::resize<false>(pCVar1,lVar12);
        if (iVar5 != 0) {
LAB_00101704:
          _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                           "Condition \"err\" is true. Returning: err",0,0);
          goto LAB_00101465;
        }
        CowData<AreaCMP>::_copy_on_write(pCVar1);
        lVar2 = *(long *)(lVar2 + 0x328);
        if (lVar6 < lVar13) {
          plVar10 = (long *)(lVar2 + lVar6 * 0x10);
          plVar14 = (long *)(lVar13 * 0x10 + lVar2);
          do {
            plVar15 = plVar14 + -2;
            *plVar14 = plVar14[-2];
            *(int *)(plVar14 + 1) = (int)plVar14[-1];
            plVar14 = plVar15;
          } while (plVar10 != plVar15);
        }
        else {
          plVar10 = (long *)(lVar2 + lVar6 * 0x10);
        }
      }
      *plVar10 = lVar11;
      *(undefined4 *)(plVar10 + 1) = 1;
    }
LAB_00101465:
    cVar4 = Callable::is_valid();
    param_1 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_001013aa;
    lVar11 = *(long *)(in_RDI + 0x38);
    GodotArea3D::BodyKey::BodyKey
              (local_58,*(GodotBody3D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
               *(uint *)(in_RDI + 0x44));
    piVar7 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                    ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                  *)(lVar11 + 0x1b8),local_58);
    *piVar7 = *piVar7 + 1;
    lVar11 = *(long *)(lVar11 + 0x148);
    param_1 = extraout_XMM0_Da_01;
  }
  if (lVar11 == 0) {
    param_1 = (float)GodotArea3D::_queue_monitor_update();
  }
LAB_001013aa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



/* GodotAreaPair3D::~GodotAreaPair3D() */

void __thiscall GodotAreaPair3D::~GodotAreaPair3D(GodotAreaPair3D *this)

{
  CowData<AreaCMP> *this_00;
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  code *pcVar24;
  char cVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  long *plVar39;
  ulong uVar40;
  uint uVar41;
  uint *puVar42;
  long in_FS_OFFSET;
  GodotConstraint3D **local_78;
  GodotAreaPair3D *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_00104278;
  if (this[0x48] != (GodotAreaPair3D)0x0) {
    if (this[0x4b] != (GodotAreaPair3D)0x0) {
      lVar4 = *(long *)(this + 0x30);
      this[0x4b] = (GodotAreaPair3D)0x0;
      lVar34 = *(long *)(lVar4 + 0x328);
      if ((lVar34 != 0) && (lVar38 = *(long *)(lVar34 + -8), 0 < lVar38)) {
        lVar27 = 0;
        do {
          if (*(long *)(*(long *)(this + 0x38) + 0x10) ==
              *(long *)(*(long *)(lVar34 + lVar27 * 0x10) + 0x10)) {
            if ((int)lVar27 < 0) break;
            lVar34 = (long)(int)lVar27;
            if (lVar38 <= lVar34) {
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar34,lVar38,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar24 = (code *)invalidInstructionException();
              (*pcVar24)();
            }
            this_00 = (CowData<AreaCMP> *)(lVar4 + 0x328);
            CowData<AreaCMP>::_copy_on_write(this_00);
            lVar27 = *(long *)(lVar4 + 0x328);
            lVar38 = lVar27 + lVar34 * 0x10;
            iVar26 = *(int *)(lVar38 + 8) + -1;
            *(int *)(lVar38 + 8) = iVar26;
            if (lVar27 == 0) {
              lVar38 = 0;
            }
            else {
              lVar38 = *(long *)(lVar27 + -8);
              if (lVar34 < lVar38) {
                if (iVar26 < 1) {
                  CowData<AreaCMP>::_copy_on_write(this_00);
                  lVar4 = *(long *)(lVar4 + 0x328);
                  if (lVar4 == 0) {
                    lVar38 = -1;
                  }
                  else {
                    lVar27 = *(long *)(lVar4 + -8);
                    lVar38 = lVar27 + -1;
                    if (lVar34 < lVar38) {
                      puVar30 = (undefined8 *)(lVar4 + lVar34 * 0x10);
                      do {
                        puVar31 = puVar30 + 2;
                        *puVar30 = puVar30[2];
                        *(undefined4 *)(puVar30 + 1) = *(undefined4 *)(puVar30 + 3);
                        puVar30 = puVar31;
                      } while (puVar31 != (undefined8 *)(lVar4 + -0x10 + lVar27 * 0x10));
                    }
                  }
                  CowData<AreaCMP>::resize<false>(this_00,lVar38);
                }
                break;
              }
            }
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar34,lVar38,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar24 = (code *)invalidInstructionException();
            (*pcVar24)();
          }
          lVar27 = lVar27 + 1;
        } while (lVar38 != lVar27);
      }
    }
    cVar25 = Callable::is_valid();
    if (cVar25 != '\0') {
      lVar4 = *(long *)(this + 0x38);
      GodotArea3D::BodyKey::BodyKey
                ((BodyKey *)local_58,*(GodotBody3D **)(this + 0x30),*(uint *)(this + 0x40),
                 *(uint *)(this + 0x44));
      piVar29 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                       ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                     *)(lVar4 + 0x1b8),(BodyKey *)local_58);
      *piVar29 = *piVar29 + -1;
      if ((*(long *)(lVar4 + 0x40) != 0) && (*(long *)(lVar4 + 0x148) == 0)) {
        GodotArea3D::_queue_monitor_update();
      }
    }
  }
  local_78 = (GodotConstraint3D **)local_58;
  lVar4 = *(long *)(this + 0x30);
  lVar34 = *(long *)(lVar4 + 0x2f8);
  if ((lVar34 != 0) && (*(int *)(lVar4 + 0x31c) != 0)) {
    lVar38 = *(long *)(lVar4 + 0x300);
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar4 + 0x318) * 4);
    lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar4 + 0x318) * 8);
    uVar40 = CONCAT44(0,uVar3);
    uVar28 = (long)this * 0x3ffff - 1;
    uVar28 = (uVar28 ^ uVar28 >> 0x1f) * 0x15;
    uVar28 = (uVar28 ^ uVar28 >> 0xb) * 0x41;
    uVar28 = uVar28 >> 0x16 ^ uVar28;
    uVar35 = uVar28 & 0xffffffff;
    if ((int)uVar28 == 0) {
      uVar35 = 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar35 * lVar27;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar40;
    uVar28 = SUB168(auVar6 * auVar15,8);
    uVar36 = *(uint *)(lVar38 + uVar28 * 4);
    uVar37 = (ulong)SUB164(auVar6 * auVar15,8);
    if (uVar36 != 0) {
      uVar41 = 0;
      do {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)((int)uVar37 + 1) * lVar27;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar40;
        uVar33 = SUB168(auVar9 * auVar18,8);
        uVar32 = SUB164(auVar9 * auVar18,8);
        if ((uVar36 == (uint)uVar35) &&
           (this == *(GodotAreaPair3D **)(*(long *)(lVar34 + uVar28 * 8) + 0x10))) {
          puVar42 = (uint *)(lVar38 + uVar33 * 4);
          uVar36 = *puVar42;
          if ((uVar36 != 0) &&
             (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar36 * lVar27, auVar19._8_8_ = 0,
             auVar19._0_8_ = uVar40, auVar11._8_8_ = 0,
             auVar11._0_8_ = (ulong)((uVar32 + uVar3) - SUB164(auVar10 * auVar19,8)) * lVar27,
             auVar20._8_8_ = 0, auVar20._0_8_ = uVar40, uVar28 = (ulong)uVar32, uVar35 = uVar37,
             SUB164(auVar11 * auVar20,8) != 0)) {
            while( true ) {
              uVar37 = uVar28;
              puVar2 = (uint *)(lVar38 + uVar35 * 4);
              *puVar42 = *puVar2;
              puVar30 = (undefined8 *)(lVar34 + uVar33 * 8);
              *puVar2 = uVar36;
              puVar31 = (undefined8 *)(lVar34 + uVar35 * 8);
              uVar5 = *puVar30;
              *puVar30 = *puVar31;
              *puVar31 = uVar5;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = (ulong)((int)uVar37 + 1) * lVar27;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = uVar40;
              uVar33 = SUB168(auVar14 * auVar23,8);
              puVar42 = (uint *)(lVar38 + uVar33 * 4);
              uVar36 = *puVar42;
              if ((uVar36 == 0) ||
                 (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar36 * lVar27, auVar21._8_8_ = 0,
                 auVar21._0_8_ = uVar40, auVar13._8_8_ = 0,
                 auVar13._0_8_ =
                      (ulong)((SUB164(auVar14 * auVar23,8) + uVar3) - SUB164(auVar12 * auVar21,8)) *
                      lVar27, auVar22._8_8_ = 0, auVar22._0_8_ = uVar40,
                 SUB164(auVar13 * auVar22,8) == 0)) break;
              uVar28 = uVar33 & 0xffffffff;
              uVar35 = uVar37;
            }
          }
          *(undefined4 *)(lVar38 + uVar37 * 4) = 0;
          plVar1 = (long *)(lVar34 + uVar37 * 8);
          plVar39 = (long *)*plVar1;
          if (*(long **)(lVar4 + 0x308) == plVar39) {
            *(long *)(lVar4 + 0x308) = *plVar39;
            plVar39 = (long *)*plVar1;
          }
          if (*(long **)(lVar4 + 0x310) == plVar39) {
            *(long *)(lVar4 + 0x310) = plVar39[1];
            plVar39 = (long *)*plVar1;
          }
          if ((long *)plVar39[1] != (long *)0x0) {
            *(long *)plVar39[1] = *plVar39;
            plVar39 = (long *)*plVar1;
          }
          if (*plVar39 != 0) {
            *(long *)(*plVar39 + 8) = plVar39[1];
            plVar39 = (long *)*plVar1;
          }
          Memory::free_static(plVar39,false);
          *(undefined8 *)(*(long *)(lVar4 + 0x2f8) + uVar37 * 8) = 0;
          *(int *)(lVar4 + 0x31c) = *(int *)(lVar4 + 0x31c) + -1;
          break;
        }
        uVar36 = *(uint *)(lVar38 + uVar33 * 4);
        uVar37 = uVar33 & 0xffffffff;
        uVar41 = uVar41 + 1;
      } while ((uVar36 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar36 * lVar27, auVar16._8_8_ = 0,
              auVar16._0_8_ = uVar40, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar3 + uVar32) - SUB164(auVar7 * auVar16,8)) * lVar27,
              auVar17._8_8_ = 0, auVar17._0_8_ = uVar40, uVar28 = uVar33,
              uVar41 <= SUB164(auVar8 * auVar17,8)));
    }
  }
  local_58[0] = this;
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  erase((HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>
         *)(*(long *)(this + 0x38) + 0x218),local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotAreaPair3D::~GodotAreaPair3D() */

void __thiscall GodotAreaPair3D::~GodotAreaPair3D(GodotAreaPair3D *this)

{
  ~GodotAreaPair3D(this);
  operator_delete(this,0x50);
  return;
}



/* GodotAreaSoftBodyPair3D::~GodotAreaSoftBodyPair3D() */

void __thiscall GodotAreaSoftBodyPair3D::~GodotAreaSoftBodyPair3D(GodotAreaSoftBodyPair3D *this)

{
  CowData<AreaCMP> *this_00;
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  GodotAreaSoftBodyPair3D *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_00104308;
  if (this[0x48] != (GodotAreaSoftBodyPair3D)0x0) {
    if (this[0x4b] != (GodotAreaSoftBodyPair3D)0x0) {
      lVar1 = *(long *)(this + 0x30);
      this[0x4b] = (GodotAreaSoftBodyPair3D)0x0;
      lVar9 = *(long *)(lVar1 + 0x2b8);
      if ((lVar9 != 0) && (lVar10 = *(long *)(lVar9 + -8), 0 < lVar10)) {
        lVar5 = 0;
        do {
          if (*(long *)(*(long *)(this + 0x38) + 0x10) ==
              *(long *)(*(long *)(lVar9 + lVar5 * 0x10) + 0x10)) {
            if ((int)lVar5 < 0) break;
            lVar9 = (long)(int)lVar5;
            if (lVar10 <= lVar9) {
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar9,lVar10,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            this_00 = (CowData<AreaCMP> *)(lVar1 + 0x2b8);
            CowData<AreaCMP>::_copy_on_write(this_00);
            lVar5 = *(long *)(lVar1 + 0x2b8);
            lVar10 = lVar5 + lVar9 * 0x10;
            iVar4 = *(int *)(lVar10 + 8) + -1;
            *(int *)(lVar10 + 8) = iVar4;
            if (lVar5 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = *(long *)(lVar5 + -8);
              if (lVar9 < lVar10) {
                if (iVar4 < 1) {
                  CowData<AreaCMP>::_copy_on_write(this_00);
                  lVar1 = *(long *)(lVar1 + 0x2b8);
                  if (lVar1 == 0) {
                    lVar10 = -1;
                  }
                  else {
                    lVar5 = *(long *)(lVar1 + -8);
                    lVar10 = lVar5 + -1;
                    if (lVar9 < lVar10) {
                      puVar7 = (undefined8 *)(lVar1 + lVar9 * 0x10);
                      do {
                        puVar8 = puVar7 + 2;
                        *puVar7 = puVar7[2];
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar7 + 3);
                        puVar7 = puVar8;
                      } while ((undefined8 *)(lVar1 + -0x10 + lVar5 * 0x10) != puVar8);
                    }
                  }
                  CowData<AreaCMP>::resize<false>(this_00,lVar10);
                }
                break;
              }
            }
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar5 = lVar5 + 1;
        } while (lVar10 != lVar5);
      }
    }
    cVar3 = Callable::is_valid();
    if (cVar3 != '\0') {
      lVar1 = *(long *)(this + 0x38);
      GodotArea3D::BodyKey::BodyKey
                ((BodyKey *)local_48,*(GodotSoftBody3D **)(this + 0x30),*(uint *)(this + 0x40),
                 *(uint *)(this + 0x44));
      piVar6 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                      ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                    *)(lVar1 + 0x188),(BodyKey *)local_48);
      *piVar6 = *piVar6 + -1;
      if ((*(long *)(lVar1 + 0x40) != 0) && (*(long *)(lVar1 + 0x148) == 0)) {
        GodotArea3D::_queue_monitor_update();
      }
    }
  }
  local_48[0] = this;
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  erase((HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>
         *)(*(long *)(this + 0x30) + 0x288),(GodotConstraint3D **)local_48);
  local_48[0] = this;
  HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
  erase((HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>
         *)(*(long *)(this + 0x38) + 0x218),(GodotConstraint3D **)local_48);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotAreaSoftBodyPair3D::~GodotAreaSoftBodyPair3D() */

void __thiscall GodotAreaSoftBodyPair3D::~GodotAreaSoftBodyPair3D(GodotAreaSoftBodyPair3D *this)

{
  ~GodotAreaSoftBodyPair3D(this);
  operator_delete(this,0x50);
  return;
}



/* GodotAreaSoftBodyPair3D::pre_solve(float) */

undefined8 GodotAreaSoftBodyPair3D::pre_solve(float param_1)

{
  CowData<AreaCMP> *pCVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long in_RDI;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  BodyKey local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RDI + 0x49) == '\0') goto LAB_001020da;
  lVar11 = *(long *)(in_RDI + 0x38);
  if (*(char *)(in_RDI + 0x48) == '\0') {
    if (*(char *)(in_RDI + 0x4a) != '\0') {
      lVar2 = *(long *)(in_RDI + 0x30);
      *(undefined1 *)(in_RDI + 0x4b) = 0;
      lVar12 = *(long *)(lVar2 + 0x2b8);
      if ((lVar12 != 0) && (lVar13 = *(long *)(lVar12 + -8), 0 < lVar13)) {
        lVar6 = 0;
        do {
          if (*(long *)(lVar11 + 0x10) == *(long *)(*(long *)(lVar12 + lVar6 * 0x10) + 0x10)) {
            if ((int)lVar6 < 0) break;
            lVar11 = (long)(int)lVar6;
            if (lVar13 <= lVar11) {
LAB_001023ad:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar11,lVar13,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pCVar1 = (CowData<AreaCMP> *)(lVar2 + 0x2b8);
            CowData<AreaCMP>::_copy_on_write(pCVar1);
            lVar13 = *(long *)(lVar2 + 0x2b8);
            lVar12 = lVar13 + lVar11 * 0x10;
            iVar5 = *(int *)(lVar12 + 8) + -1;
            *(int *)(lVar12 + 8) = iVar5;
            if (lVar13 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = *(long *)(lVar13 + -8);
              if (lVar11 < lVar12) {
                if (iVar5 < 1) {
                  CowData<AreaCMP>::_copy_on_write(pCVar1);
                  lVar2 = *(long *)(lVar2 + 0x2b8);
                  if (lVar2 == 0) {
                    lVar12 = -1;
                  }
                  else {
                    lVar13 = *(long *)(lVar2 + -8);
                    lVar12 = lVar13 + -1;
                    if (lVar11 < lVar12) {
                      puVar8 = (undefined8 *)(lVar2 + lVar11 * 0x10);
                      do {
                        puVar9 = puVar8 + 2;
                        *puVar8 = puVar8[2];
                        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + 3);
                        puVar8 = puVar9;
                      } while (puVar9 != (undefined8 *)(lVar2 + -0x10 + lVar13 * 0x10));
                    }
                  }
                  CowData<AreaCMP>::resize<false>(pCVar1,lVar12);
                }
                break;
              }
            }
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar12,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar6 = lVar6 + 1;
        } while (lVar13 != lVar6);
      }
    }
    cVar4 = Callable::is_valid();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_001020da;
    lVar11 = *(long *)(in_RDI + 0x38);
    GodotArea3D::BodyKey::BodyKey
              (local_58,*(GodotSoftBody3D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
               *(uint *)(in_RDI + 0x44));
    piVar7 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                    ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                  *)(lVar11 + 0x188),local_58);
    *piVar7 = *piVar7 + -1;
    param_1 = extraout_XMM0_Da_02;
    if (*(long *)(lVar11 + 0x40) == 0) goto LAB_001020da;
    lVar11 = *(long *)(lVar11 + 0x148);
  }
  else {
    if (*(char *)(in_RDI + 0x4a) != '\0') {
      lVar2 = *(long *)(in_RDI + 0x30);
      *(undefined1 *)(in_RDI + 0x4b) = 1;
      lVar12 = *(long *)(lVar2 + 0x2b8);
      pCVar1 = (CowData<AreaCMP> *)(lVar2 + 0x2b8);
      if (lVar12 == 0) {
        iVar5 = CowData<AreaCMP>::resize<false>(pCVar1,1);
        if (iVar5 != 0) goto LAB_00102434;
        CowData<AreaCMP>::_copy_on_write(pCVar1);
        plVar10 = *(long **)(lVar2 + 0x2b8);
      }
      else {
        lVar13 = *(long *)(lVar12 + -8);
        if (lVar13 == 0) {
          lVar6 = 0;
          lVar12 = 1;
        }
        else {
          if (0 < lVar13) {
            lVar6 = 0;
            do {
              if (*(long *)(lVar11 + 0x10) == *(long *)(*(long *)(lVar12 + lVar6 * 0x10) + 0x10)) {
                if (-1 < (int)lVar6) {
                  lVar11 = (long)(int)lVar6;
                  if (lVar13 <= lVar11) goto LAB_001023ad;
                  CowData<AreaCMP>::_copy_on_write(pCVar1);
                  piVar7 = (int *)(*(long *)(lVar2 + 0x2b8) + lVar11 * 0x10 + 8);
                  *piVar7 = *piVar7 + 1;
                  goto LAB_00102195;
                }
                break;
              }
              lVar6 = lVar6 + 1;
            } while (lVar13 != lVar6);
          }
          lVar6 = 0;
          while ((lVar6 < lVar13 &&
                 (*(int *)(*(long *)(lVar12 + lVar6 * 0x10) + 0x120) <= *(int *)(lVar11 + 0x120))))
          {
            lVar6 = lVar6 + 1;
          }
          lVar12 = lVar13 + 1;
          if (lVar12 <= lVar6) {
            _err_print_index_error
                      ("insert","./core/templates/cowdata.h",0xf0,lVar6,lVar12,"p_pos","new_size",""
                       ,false,false);
            goto LAB_00102195;
          }
        }
        iVar5 = CowData<AreaCMP>::resize<false>(pCVar1,lVar12);
        if (iVar5 != 0) {
LAB_00102434:
          _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                           "Condition \"err\" is true. Returning: err",0,0);
          goto LAB_00102195;
        }
        CowData<AreaCMP>::_copy_on_write(pCVar1);
        lVar2 = *(long *)(lVar2 + 0x2b8);
        if (lVar6 < lVar13) {
          plVar10 = (long *)(lVar2 + lVar6 * 0x10);
          plVar14 = (long *)(lVar13 * 0x10 + lVar2);
          do {
            plVar15 = plVar14 + -2;
            *plVar14 = plVar14[-2];
            *(int *)(plVar14 + 1) = (int)plVar14[-1];
            plVar14 = plVar15;
          } while (plVar10 != plVar15);
        }
        else {
          plVar10 = (long *)(lVar2 + lVar6 * 0x10);
        }
      }
      *plVar10 = lVar11;
      *(undefined4 *)(plVar10 + 1) = 1;
    }
LAB_00102195:
    cVar4 = Callable::is_valid();
    param_1 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_001020da;
    lVar11 = *(long *)(in_RDI + 0x38);
    GodotArea3D::BodyKey::BodyKey
              (local_58,*(GodotSoftBody3D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
               *(uint *)(in_RDI + 0x44));
    piVar7 = (int *)HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                    ::operator[]((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                                  *)(lVar11 + 0x188),local_58);
    *piVar7 = *piVar7 + 1;
    lVar11 = *(long *)(lVar11 + 0x148);
    param_1 = extraout_XMM0_Da_01;
  }
  if (lVar11 == 0) {
    param_1 = (float)GodotArea3D::_queue_monitor_update();
  }
LAB_001020da:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



/* GodotConstraint3D::get_soft_body_ptr(int) const */

undefined8 GodotConstraint3D::get_soft_body_ptr(int param_1)

{
  return 0;
}



/* GodotConstraint3D::get_soft_body_count() const */

undefined8 GodotConstraint3D::get_soft_body_count(void)

{
  return 0;
}



/* CowData<AreaCMP>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<AreaCMP>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<GodotConstraint3D*, HashMapHasherDefault, HashMapComparatorDefault<GodotConstraint3D*>
   >::insert(GodotConstraint3D* const&) */

undefined1  [16]
HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::
insert(GodotConstraint3D **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  GodotConstraint3D *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (GodotConstraint3D *)*in_RSI;
  if (local_88 == (GodotConstraint3D *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (GodotConstraint3D *)*in_RSI;
    if (local_88 != (GodotConstraint3D *)0x0) goto LAB_0010275f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0010275f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_00102c01;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC12 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (GodotConstraint3D *)*in_RSI;
      goto LAB_00102c01;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (GodotConstraint3D *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00102c01:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<GodotConstraint3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotConstraint3D*>,
   DefaultTypedAllocator<HashMapElement<GodotConstraint3D*, int> > >::operator[](GodotConstraint3D*
   const&) */

undefined1  [16] __thiscall
HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
::operator[](HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
             *this,GodotConstraint3D **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  int iVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  GodotConstraint3D *pGVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  pGVar56 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar55 * 4;
    uVar39 = uVar55 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x1033d2;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pGVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00102efb;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar39)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar55 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        pGVar56 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x10341a;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pGVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_001032a3;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pGVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar52 + lVar45 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar50 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar44) &&
             (pGVar56 == *(GodotConstraint3D **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar53 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar50 = uVar50 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar55;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar52 + lVar45 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar55, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar55, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar50 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_001032a3:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pGVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar54 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar51;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar52 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(GodotConstraint3D **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == pGVar56)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar46;
            goto LAB_00103284;
          }
          uVar53 = uVar53 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar51;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar52 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar51, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar53 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00102efb:
  if ((float)uVar55 * __LC12 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00103284;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar39 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar39 * 4;
    uVar55 = uVar39 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar55;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar52 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar50 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar50 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar50 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar53 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar48 = uVar41;
            if (uVar38 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar50;
              uVar49 = uVar38;
            }
            uVar49 = uVar49 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar55;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar52 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar48;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  pGVar56 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(GodotConstraint3D **)pauVar42[1] = pGVar56;
  *(undefined4 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar52 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = (long)*param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar55 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar55 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar43 = SUB164(auVar13 * auVar29,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar3;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar47 + iVar43) - SUB164(auVar14 * auVar30,8)) * lVar3;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    uVar53 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00103284:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* HashMap<GodotArea3D::BodyKey, GodotArea3D::BodyState, GodotArea3D::BodyKey,
   HashMapComparatorDefault<GodotArea3D::BodyKey>,
   DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey, GodotArea3D::BodyState> >
   >::_lookup_pos(GodotArea3D::BodyKey const&, unsigned int&) const */

undefined8 __thiscall
HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
::_lookup_pos(HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
              *this,BodyKey *param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar12 = *(long *)param_1 * 0x3ffff - 1;
  uVar12 = (uVar12 ^ uVar12 >> 0x1f) * 0x15;
  uVar12 = (uVar12 ^ uVar12 >> 0xb) * 0x41;
  uVar11 = ((int)lVar1 * 0x16a88000 | (uint)((int)lVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uint)uVar12 ^ (uint)(uVar12 >> 0x16);
  iVar15 = (int)((ulong)lVar1 >> 0x20);
  uVar11 = (iVar15 * 0x16a88000 | (uint)(iVar15 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
  uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64 ^
           (*(int *)(param_1 + 0x14) * 0x16a88000 |
           (uint)(*(int *)(param_1 + 0x14) * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64 ^
           (*(int *)(param_1 + 0x10) * 0x16a88000 |
           (uint)(*(int *)(param_1 + 0x10) * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
  uVar11 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  uVar16 = uVar11 ^ uVar11 >> 0x10;
  if (uVar11 == uVar11 >> 0x10) {
    uVar16 = 1;
    uVar12 = uVar2;
  }
  else {
    uVar12 = uVar16 * uVar2;
  }
  uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar17;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar12;
  lVar14 = SUB168(auVar3 * auVar7,8);
  uVar11 = *(uint *)(*(long *)(this + 0x10) + lVar14 * 4);
  uVar13 = SUB164(auVar3 * auVar7,8);
  if (uVar11 != 0) {
    uVar18 = 0;
    do {
      if ((((uVar16 == uVar11) &&
           (lVar14 = *(long *)(*(long *)(this + 8) + lVar14 * 8),
           *(long *)(lVar14 + 0x10) == *(long *)param_1)) && (*(long *)(lVar14 + 0x18) == lVar1)) &&
         (*(long *)(lVar14 + 0x20) == *(long *)(param_1 + 0x10))) {
        *param_2 = uVar13;
        return 1;
      }
      uVar18 = uVar18 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (uVar13 + 1) * uVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar17;
      lVar14 = SUB168(auVar4 * auVar8,8);
      uVar11 = *(uint *)(*(long *)(this + 0x10) + lVar14 * 4);
      uVar13 = SUB164(auVar4 * auVar8,8);
    } while ((uVar11 != 0) &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = uVar11 * uVar2, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
            auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar13) - SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
            auVar10._0_8_ = uVar17, uVar18 <= SUB164(auVar6 * auVar10,8)));
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<GodotArea3D::BodyKey, GodotArea3D::BodyState, GodotArea3D::BodyKey,
   HashMapComparatorDefault<GodotArea3D::BodyKey>,
   DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey, GodotArea3D::BodyState> >
   >::operator[](GodotArea3D::BodyKey const&) */

undefined1 * __thiscall
HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
::operator[](HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
             *this,BodyKey *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 (*pauVar23) [16];
  char cVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined1 (*pauVar30) [16];
  void *pvVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_d8;
  uint local_80;
  uint local_7c [5];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_80);
  if (cVar24 == '\0') {
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar35 = (ulong)uVar32;
      uVar28 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      uVar29 = Memory::alloc_static(uVar28,false);
      *(undefined8 *)(this + 0x10) = uVar29;
      pvVar31 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar31;
      if (uVar32 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar31 + uVar39)) &&
           (pvVar31 < (void *)((long)pvVar4 + uVar28))) {
          uVar28 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar28 * 4) = 0;
            *(undefined8 *)((long)pvVar31 + uVar28 * 8) = 0;
            uVar28 = uVar28 + 1;
          } while (uVar35 != uVar28);
        }
        else {
          memset(pvVar4,0,uVar28);
          memset(pvVar31,0,uVar39);
        }
      }
    }
    local_7c[0] = 0;
    cVar24 = _lookup_pos(this,param_1,local_7c);
    if (cVar24 == '\0') {
      if ((float)uVar32 * __LC12 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar32 = *(uint *)(this + 0x28);
        if (uVar32 == 0x1c) {
          pauVar30 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00103c37;
        }
        uVar28 = (ulong)(uVar32 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
        if (uVar32 + 1 < 2) {
          uVar28 = 2;
        }
        uVar32 = *(uint *)(hash_table_size_primes + uVar28 * 4);
        uVar35 = (ulong)uVar32;
        *(int *)(this + 0x28) = (int)uVar28;
        pvVar31 = *(void **)(this + 8);
        uVar28 = uVar35 * 4;
        uVar39 = uVar35 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar29 = Memory::alloc_static(uVar28,false);
        *(undefined8 *)(this + 0x10) = uVar29;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar32 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar28))) {
            uVar28 = 0;
            do {
              *(undefined4 *)((long)__s + uVar28 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
              uVar28 = uVar28 + 1;
            } while (uVar35 != uVar28);
          }
          else {
            memset(__s,0,uVar28);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar27 != 0) {
          uVar28 = 0;
          do {
            uVar32 = *(uint *)((long)pvVar4 + uVar28 * 4);
            if (uVar32 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar37 = 0;
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar3);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar32 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar39;
              lVar33 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar33 * 4);
              iVar25 = SUB164(auVar7 * auVar15,8);
              uVar38 = *puVar1;
              uVar29 = *(undefined8 *)((long)pvVar31 + uVar28 * 8);
              while (uVar38 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar38 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar39;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar3 + iVar25) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                local_d8 = SUB164(auVar9 * auVar17,8);
                uVar36 = uVar29;
                if (local_d8 < uVar37) {
                  *puVar1 = uVar32;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar33 * 8);
                  uVar36 = *puVar2;
                  *puVar2 = uVar29;
                  uVar32 = uVar38;
                  uVar37 = local_d8;
                }
                uVar37 = uVar37 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar25 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                lVar33 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar33 * 4);
                iVar25 = SUB164(auVar10 * auVar18,8);
                uVar29 = uVar36;
                uVar38 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar33 * 8) = uVar29;
              *puVar1 = uVar32;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar27);
          Memory::free_static(pvVar31,false);
          Memory::free_static(pvVar4,false);
        }
      }
      local_68 = *(undefined8 *)param_1;
      uStack_60 = *(undefined8 *)(param_1 + 8);
      local_58 = *(undefined8 *)(param_1 + 0x10);
      pauVar30 = (undefined1 (*) [16])operator_new(0x30,"");
      *pauVar30 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar30[1] = local_68;
      *(undefined8 *)(pauVar30[1] + 8) = uStack_60;
      *(undefined4 *)(pauVar30[2] + 8) = 0;
      *(undefined8 *)pauVar30[2] = local_58;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar30;
      }
      else {
        *puVar2 = pauVar30;
        *(undefined8 **)(*pauVar30 + 8) = puVar2;
      }
      lVar5 = *(long *)param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar30;
      uVar28 = lVar5 * 0x3ffff - 1;
      uVar28 = (uVar28 ^ uVar28 >> 0x1f) * 0x15;
      uVar28 = (uVar28 ^ uVar28 >> 0xb) * 0x41;
      iVar25 = (int)*(undefined8 *)(param_1 + 8);
      iVar26 = (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
      uVar32 = (iVar25 * 0x16a88000 | (uint)(iVar25 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               (uint)uVar28 ^ (uint)(uVar28 >> 0x16);
      uVar32 = (iVar26 * 0x16a88000 | (uint)(iVar26 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
      uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64 ^
               (*(int *)(param_1 + 0x14) * 0x16a88000 |
               (uint)(*(int *)(param_1 + 0x14) * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64 ^
               (*(int *)(param_1 + 0x10) * 0x16a88000 |
               (uint)(*(int *)(param_1 + 0x10) * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
      uVar32 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar27 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
      uVar32 = uVar27 ^ uVar27 >> 0x10;
      if (uVar27 == uVar27 >> 0x10) {
        uVar28 = 1;
        uVar32 = 1;
      }
      else {
        uVar28 = (ulong)uVar32;
      }
      uVar38 = 0;
      lVar5 = *(long *)(this + 0x10);
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar39 = CONCAT44(0,uVar27);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      lVar34 = SUB168(auVar11 * auVar19,8);
      lVar33 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar34 * 4);
      iVar25 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar30;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar39;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar27 + iVar25) - SUB164(auVar12 * auVar20,8)) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar39;
        local_d8 = SUB164(auVar13 * auVar21,8);
        pauVar40 = pauVar23;
        if (local_d8 < uVar38) {
          *puVar1 = uVar32;
          puVar2 = (undefined8 *)(lVar33 + lVar34 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar32 = uVar3;
          uVar38 = local_d8;
        }
        uVar38 = uVar38 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar25 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        lVar34 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar5 + lVar34 * 4);
        iVar25 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar40;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar33 + lVar34 * 8) = pauVar23;
      *puVar1 = uVar32;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_7c[0] * 8);
      *(undefined4 *)(pauVar30[2] + 8) = 0;
    }
  }
  else {
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_80 * 8);
  }
LAB_00103c37:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar30[2] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<AreaCMP>::_realloc(long) */

undefined8 __thiscall CowData<AreaCMP>::_realloc(CowData<AreaCMP> *this,long param_1)

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
/* Error CowData<AreaCMP>::resize<false>(long) */

undefined8 __thiscall CowData<AreaCMP>::resize<false>(CowData<AreaCMP> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
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
    lVar3 = lVar9 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00104130:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x10 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar10 = uVar4 + 1;
  if (lVar10 == 0) goto LAB_00104130;
  if (param_1 <= lVar9) {
    if ((lVar10 != lVar3) && (uVar7 = _realloc(this,lVar10), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar10 == lVar3) {
LAB_0010409c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00104027;
  }
  else {
    if (lVar9 != 0) {
      uVar7 = _realloc(this,lVar10);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010409c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  puVar5 = puVar8 + lVar3 * 2;
  do {
    *puVar5 = 0;
    puVar6 = puVar5 + 2;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 2);
LAB_00104027:
  puVar8[-1] = param_1;
  return 0;
}


