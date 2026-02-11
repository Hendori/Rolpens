
/* GodotArea2Pair2D::solve(float) */

void GodotArea2Pair2D::solve(float param_1)

{
  return;
}



/* GodotAreaPair2D::setup(float) */

ulong GodotAreaPair2D::setup(float param_1)

{
  GodotShape2D *pGVar1;
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
  undefined8 local_78;
  undefined8 local_70;
  Transform2D local_68 [32];
  int local_48 [6];
  long local_30;
  
  lVar7 = *(long *)((long)in_RDI + 0x38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(*(long *)((long)in_RDI + 0x30) + 0x7c) & *(uint *)(lVar7 + 0x78)) != 0) {
    lVar8 = (long)*(int *)((long)in_RDI + 0x44);
    lVar9 = *(long *)(lVar7 + 0x38);
    local_70 = 0;
    if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_00100240:
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + -8);
        goto LAB_0010024d;
      }
    }
    else if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + -8);
      if (lVar9 <= lVar8) goto LAB_0010024d;
      Transform2D::operator*((Transform2D *)local_48,(Transform2D *)(lVar7 + 0x48));
      lVar9 = (long)*(int *)((long)in_RDI + 0x44);
      lVar7 = *(long *)(*(long *)((long)in_RDI + 0x38) + 0x38);
      if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_00100290:
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + -8);
          goto LAB_0010029d;
        }
      }
      else if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + -8);
        if (lVar8 <= lVar9) goto LAB_0010029d;
        local_78 = 0;
        lVar8 = (long)*(int *)((long)in_RDI + 0x40);
        pGVar1 = *(GodotShape2D **)(lVar7 + 0x48 + lVar9 * 0x58);
        lVar9 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
        if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_00100240;
        if (lVar9 == 0) goto LAB_00100348;
        lVar9 = *(long *)(lVar9 + -8);
        if (lVar9 <= lVar8) goto LAB_0010024d;
        Transform2D::operator*(local_68,(Transform2D *)(*(long *)((long)in_RDI + 0x30) + 0x48));
        lVar9 = (long)*(int *)((long)in_RDI + 0x40);
        lVar7 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
        if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_00100290;
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + -8);
          if (lVar8 <= lVar9) goto LAB_0010029d;
          cVar3 = GodotCollisionSolver2D::solve
                            (*(GodotShape2D **)(lVar7 + 0x48 + lVar9 * 0x58),local_68,
                             (Vector2 *)&local_78,pGVar1,(Transform2D *)local_48,
                             (Vector2 *)&local_70,(_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0
                             ,in_RDI,(Vector2 *)0x0,0.0,0.0);
          param_1 = extraout_XMM0_Da;
          if (cVar3 == '\0') goto LAB_00100188;
          goto LAB_0010018b;
        }
      }
      lVar8 = 0;
LAB_0010029d:
      _err_print_index_error
                ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",0x75,lVar9,lVar8
                 ,"p_index","shapes.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
LAB_00100348:
    lVar9 = 0;
LAB_0010024d:
    _err_print_index_error
              ("get_shape_transform","modules/godot_physics_2d/godot_collision_object_2d.h",0x79,
               lVar8,lVar9,"p_index","shapes.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_00100188:
  cVar3 = '\0';
LAB_0010018b:
  *(undefined2 *)((long)in_RDI + 0x49) = 0;
  uVar6 = 0;
  if (*(char *)((long)in_RDI + 0x48) == cVar3) goto LAB_00100199;
  GodotArea2D::get_param(param_1,(Variant *)local_48,*(undefined8 *)((long)in_RDI + 0x38),0);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (iVar5 == 0) {
    GodotArea2D::get_param((Variant *)local_48,*(undefined8 *)((long)in_RDI + 0x38),5);
    iVar5 = Variant::operator_cast_to_int((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (iVar5 != 0) goto LAB_00100202;
    GodotArea2D::get_param((Variant *)local_48,*(undefined8 *)((long)in_RDI + 0x38),7);
    iVar5 = Variant::operator_cast_to_int((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (iVar5 != 0) goto LAB_00100202;
    uVar4 = *(undefined1 *)((long)in_RDI + 0x49);
  }
  else {
LAB_00100202:
    *(undefined1 *)((long)in_RDI + 0x49) = 1;
    uVar4 = 1;
  }
  *(undefined1 *)((long)in_RDI + 0x4a) = uVar4;
  uVar6 = Callable::is_valid();
  if ((char)uVar6 == '\0') {
    uVar6 = (ulong)*(byte *)((long)in_RDI + 0x4a);
  }
  else {
    *(undefined1 *)((long)in_RDI + 0x4a) = 1;
  }
  *(char *)((long)in_RDI + 0x48) = cVar3;
LAB_00100199:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* GodotArea2Pair2D::setup(float) */

uint GodotArea2Pair2D::setup(float param_1)

{
  GodotShape2D *pGVar1;
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
  undefined8 local_88;
  undefined8 local_80;
  Transform2D local_78 [32];
  Transform2D local_58 [24];
  long local_40;
  
  lVar4 = *(long *)((long)in_RDI + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = *(uint *)(lVar4 + 0x78) & *(uint *)(*(long *)((long)in_RDI + 0x30) + 0x7c);
  uVar8 = *(uint *)(lVar4 + 0x7c) & *(uint *)(*(long *)((long)in_RDI + 0x30) + 0x78);
  if (uVar7 == 0 && uVar8 == 0) {
LAB_00100528:
    cVar3 = uVar8 != 0;
    bVar9 = uVar7 != 0;
LAB_00100535:
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
  local_80 = 0;
  if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_001005e0:
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + -8);
      goto LAB_001005ed;
    }
  }
  else if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + -8);
    if (lVar6 <= lVar5) goto LAB_001005ed;
    Transform2D::operator*(local_58,(Transform2D *)(lVar4 + 0x48));
    lVar6 = (long)*(int *)((long)in_RDI + 0x44);
    lVar4 = *(long *)(*(long *)((long)in_RDI + 0x38) + 0x38);
    if (*(int *)((long)in_RDI + 0x44) < 0) {
LAB_00100630:
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + -8);
        goto LAB_00100639;
      }
    }
    else if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + -8);
      if (lVar5 <= lVar6) goto LAB_00100639;
      local_88 = 0;
      lVar5 = (long)*(int *)((long)in_RDI + 0x40);
      pGVar1 = *(GodotShape2D **)(lVar4 + 0x48 + lVar6 * 0x58);
      lVar6 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
      if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_001005e0;
      if (lVar6 == 0) goto LAB_00100680;
      lVar6 = *(long *)(lVar6 + -8);
      if (lVar6 <= lVar5) goto LAB_001005ed;
      Transform2D::operator*(local_78,(Transform2D *)(*(long *)((long)in_RDI + 0x30) + 0x48));
      lVar6 = (long)*(int *)((long)in_RDI + 0x40);
      lVar4 = *(long *)(*(long *)((long)in_RDI + 0x30) + 0x38);
      if (*(int *)((long)in_RDI + 0x40) < 0) goto LAB_00100630;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar6) goto LAB_00100639;
        bVar9 = false;
        cVar3 = GodotCollisionSolver2D::solve
                          (*(GodotShape2D **)(lVar4 + 0x48 + lVar6 * 0x58),local_78,
                           (Vector2 *)&local_88,pGVar1,local_58,(Vector2 *)&local_80,
                           (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0,in_RDI,(Vector2 *)0x0,
                           0.0,0.0);
        param_1 = extraout_XMM0_Da;
        if (cVar3 == '\0') goto LAB_00100535;
        goto LAB_00100528;
      }
    }
    lVar5 = 0;
LAB_00100639:
    _err_print_index_error
              ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",0x75,lVar6,lVar5,
               "p_index","shapes.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_00100680:
  lVar6 = 0;
LAB_001005ed:
  _err_print_index_error
            ("get_shape_transform","modules/godot_physics_2d/godot_collision_object_2d.h",0x79,lVar5
             ,lVar6,"p_index","shapes.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<GodotBody2D::AreaCMP>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<GodotBody2D::AreaCMP>::_copy_on_write(CowData<GodotBody2D::AreaCMP> *this)

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



/* HashSet<GodotConstraint2D*, HashMapHasherDefault, HashMapComparatorDefault<GodotConstraint2D*>
   >::erase(GodotConstraint2D* const&) [clone .isra.0] */

void __thiscall
HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>::erase
          (HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>
           *this,GodotConstraint2D **param_1)

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
          if (*param_1 == *(GodotConstraint2D **)(lVar6 + uVar32 * 8)) {
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



/* GodotAreaPair2D::GodotAreaPair2D(GodotBody2D*, int, GodotArea2D*, int) */

void __thiscall
GodotAreaPair2D::GodotAreaPair2D
          (GodotAreaPair2D *this,GodotBody2D *param_1,int param_2,GodotArea2D *param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  long in_FS_OFFSET;
  GodotConstraint2D *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(GodotBody2D **)(this + 0x30) = param_1;
  lVar2 = *(long *)(param_1 + 0x1d8);
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (GodotAreaPair2D)0x1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_setup_00102e40;
  *(undefined4 *)(this + 0x48) = 0;
  *(GodotArea2D **)(this + 0x38) = param_3;
  *(int *)(this + 0x40) = param_2;
  *(int *)(this + 0x44) = param_4;
  if (lVar2 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(param_1 + 0x1d8) = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined8 *)operator_new(0x28,DefaultAllocator::alloc);
  plVar1 = *(long **)(param_1 + 0x1d8);
  puVar4[2] = 0;
  lVar2 = plVar1[1];
  *puVar4 = this;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[3] = lVar2;
  puVar4[4] = plVar1;
  if (lVar2 != 0) {
    *(undefined8 **)(lVar2 + 0x10) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>::
  insert(local_38);
  iVar3 = GodotBody2D::get_mode();
  if (iVar3 == 1) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      GodotBody2D::set_active(SUB81(param_1,0));
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotArea2Pair2D::GodotArea2Pair2D(GodotArea2D*, int, GodotArea2D*, int) */

void __thiscall
GodotArea2Pair2D::GodotArea2Pair2D
          (GodotArea2Pair2D *this,GodotArea2D *param_1,int param_2,GodotArea2D *param_3,int param_4)

{
  GodotArea2D GVar1;
  GodotArea2D GVar2;
  long in_FS_OFFSET;
  GodotConstraint2D *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(GodotArea2D **)(this + 0x30) = param_1;
  *(int *)(this + 0x40) = param_2;
  *(undefined ***)this = &PTR_setup_00102e78;
  GVar2 = param_1[0xd4];
  GVar1 = param_3[0xd4];
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (GodotArea2Pair2D)0x1;
  *(ushort *)(this + 0x4c) = CONCAT11(GVar1,GVar2);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(GodotArea2D **)(this + 0x38) = param_3;
  *(int *)(this + 0x44) = param_4;
  HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>::
  insert(local_38);
  HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>::
  insert(local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotArea2Pair2D::pre_solve(float) */

undefined8 GodotArea2Pair2D::pre_solve(float param_1)

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
      GodotArea2D::BodyKey::BodyKey
                (aBStack_38,*(GodotArea2D **)(in_RDI + 0x38),*(uint *)(in_RDI + 0x44),
                 *(uint *)(in_RDI + 0x40));
      piVar2 = (int *)HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                      ::operator[]((HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                                    *)(lVar1 + 0x168),aBStack_38);
      *piVar2 = *piVar2 + -1;
      param_1 = extraout_XMM0_Da_02;
      if (*(long *)(lVar1 + 0x40) == 0) goto LAB_00100ce8;
      lVar1 = *(long *)(lVar1 + 0xf8);
    }
    else {
      GodotArea2D::BodyKey::BodyKey
                (aBStack_38,*(GodotArea2D **)(in_RDI + 0x38),*(uint *)(in_RDI + 0x44),
                 *(uint *)(in_RDI + 0x40));
      piVar2 = (int *)HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                      ::operator[]((HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                                    *)(lVar1 + 0x168),aBStack_38);
      *piVar2 = *piVar2 + 1;
      lVar1 = *(long *)(lVar1 + 0xf8);
      param_1 = extraout_XMM0_Da;
    }
    if (lVar1 == 0) {
      param_1 = (float)GodotArea2D::_queue_monitor_update();
    }
  }
LAB_00100ce8:
  if (*(char *)(in_RDI + 0x4b) != '\0') {
    lVar1 = *(long *)(in_RDI + 0x38);
    if (*(char *)(in_RDI + 0x49) == '\0') {
      GodotArea2D::BodyKey::BodyKey
                (aBStack_38,*(GodotArea2D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
                 *(uint *)(in_RDI + 0x44));
      piVar2 = (int *)HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                      ::operator[]((HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                                    *)(lVar1 + 0x168),aBStack_38);
      *piVar2 = *piVar2 + -1;
      param_1 = extraout_XMM0_Da_01;
      if (*(long *)(lVar1 + 0x40) == 0) goto LAB_00100d29;
      lVar1 = *(long *)(lVar1 + 0xf8);
    }
    else {
      GodotArea2D::BodyKey::BodyKey
                (aBStack_38,*(GodotArea2D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
                 *(uint *)(in_RDI + 0x44));
      piVar2 = (int *)HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                      ::operator[]((HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                                    *)(lVar1 + 0x168),aBStack_38);
      *piVar2 = *piVar2 + 1;
      lVar1 = *(long *)(lVar1 + 0xf8);
      param_1 = extraout_XMM0_Da_00;
    }
    if (lVar1 == 0) {
      param_1 = (float)GodotArea2D::_queue_monitor_update();
    }
  }
LAB_00100d29:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return 0;
}



/* GodotArea2Pair2D::~GodotArea2Pair2D() */

void __thiscall GodotArea2Pair2D::~GodotArea2Pair2D(GodotArea2Pair2D *this)

{
  long lVar1;
  char cVar2;
  int *piVar3;
  GodotArea2D *pGVar4;
  long in_FS_OFFSET;
  GodotArea2Pair2D *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_setup_00102e78;
  if (this[0x48] != (GodotArea2Pair2D)0x0) {
    cVar2 = Callable::is_valid();
    if ((cVar2 != '\0') && (this[0x4d] != (GodotArea2Pair2D)0x0)) {
      lVar1 = *(long *)(this + 0x30);
      GodotArea2D::BodyKey::BodyKey
                ((BodyKey *)local_38,*(GodotArea2D **)(this + 0x38),*(uint *)(this + 0x44),
                 *(uint *)(this + 0x40));
      piVar3 = (int *)HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                      ::operator[]((HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                                    *)(lVar1 + 0x168),(BodyKey *)local_38);
      *piVar3 = *piVar3 + -1;
      if ((*(long *)(lVar1 + 0x40) != 0) && (*(long *)(lVar1 + 0xf8) == 0)) {
        GodotArea2D::_queue_monitor_update();
      }
    }
  }
  if (this[0x49] != (GodotArea2Pair2D)0x0) {
    cVar2 = Callable::is_valid();
    pGVar4 = *(GodotArea2D **)(this + 0x30);
    if ((cVar2 == '\0') || (this[0x4c] == (GodotArea2Pair2D)0x0)) goto LAB_00100e0e;
    lVar1 = *(long *)(this + 0x38);
    GodotArea2D::BodyKey::BodyKey
              ((BodyKey *)local_38,pGVar4,*(uint *)(this + 0x40),*(uint *)(this + 0x44));
    piVar3 = (int *)HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                    ::operator[]((HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                                  *)(lVar1 + 0x168),(BodyKey *)local_38);
    *piVar3 = *piVar3 + -1;
    if ((*(long *)(lVar1 + 0x40) != 0) && (*(long *)(lVar1 + 0xf8) == 0)) {
      GodotArea2D::_queue_monitor_update();
    }
  }
  pGVar4 = *(GodotArea2D **)(this + 0x30);
LAB_00100e0e:
  local_38[0] = this;
  HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>::
  erase((HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>
         *)(pGVar4 + 0x198),(GodotConstraint2D **)local_38);
  local_38[0] = this;
  HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>::
  erase((HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>
         *)(*(long *)(this + 0x38) + 0x198),(GodotConstraint2D **)local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotArea2Pair2D::~GodotArea2Pair2D() */

void __thiscall GodotArea2Pair2D::~GodotArea2Pair2D(GodotArea2Pair2D *this)

{
  ~GodotArea2Pair2D(this);
  operator_delete(this,0x50);
  return;
}



/* GodotAreaPair2D::pre_solve(float) */

undefined8 GodotAreaPair2D::pre_solve(float param_1)

{
  CowData<GodotBody2D::AreaCMP> *pCVar1;
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
  if (*(char *)(in_RDI + 0x4a) == '\0') goto LAB_0010107a;
  lVar11 = *(long *)(in_RDI + 0x38);
  if (*(char *)(in_RDI + 0x48) == '\0') {
    if (*(char *)(in_RDI + 0x49) != '\0') {
      lVar2 = *(long *)(in_RDI + 0x30);
      *(undefined1 *)(in_RDI + 0x4b) = 0;
      lVar12 = *(long *)(lVar2 + 0x1e8);
      if ((lVar12 != 0) && (lVar13 = *(long *)(lVar12 + -8), 0 < lVar13)) {
        lVar6 = 0;
        do {
          if (*(long *)(lVar11 + 0x10) == *(long *)(*(long *)(lVar12 + lVar6 * 0x10) + 0x10)) {
            if ((int)lVar6 < 0) break;
            lVar11 = (long)(int)lVar6;
            if (lVar13 <= lVar11) {
LAB_0010134d:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar11,lVar13,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pCVar1 = (CowData<GodotBody2D::AreaCMP> *)(lVar2 + 0x1e8);
            CowData<GodotBody2D::AreaCMP>::_copy_on_write(pCVar1);
            lVar13 = *(long *)(lVar2 + 0x1e8);
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
                  CowData<GodotBody2D::AreaCMP>::_copy_on_write(pCVar1);
                  lVar2 = *(long *)(lVar2 + 0x1e8);
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
                  CowData<GodotBody2D::AreaCMP>::resize<false>(pCVar1,lVar12);
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
    if (cVar4 == '\0') goto LAB_0010107a;
    lVar11 = *(long *)(in_RDI + 0x38);
    GodotArea2D::BodyKey::BodyKey
              (local_58,*(GodotBody2D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
               *(uint *)(in_RDI + 0x44));
    piVar7 = (int *)HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                    ::operator[]((HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                                  *)(lVar11 + 0x138),local_58);
    *piVar7 = *piVar7 + -1;
    param_1 = extraout_XMM0_Da_02;
    if (*(long *)(lVar11 + 0x40) == 0) goto LAB_0010107a;
    lVar11 = *(long *)(lVar11 + 0xf8);
  }
  else {
    if (*(char *)(in_RDI + 0x49) != '\0') {
      lVar2 = *(long *)(in_RDI + 0x30);
      *(undefined1 *)(in_RDI + 0x4b) = 1;
      lVar12 = *(long *)(lVar2 + 0x1e8);
      pCVar1 = (CowData<GodotBody2D::AreaCMP> *)(lVar2 + 0x1e8);
      if (lVar12 == 0) {
        iVar5 = CowData<GodotBody2D::AreaCMP>::resize<false>(pCVar1,1);
        if (iVar5 != 0) goto LAB_001013d4;
        CowData<GodotBody2D::AreaCMP>::_copy_on_write(pCVar1);
        plVar10 = *(long **)(lVar2 + 0x1e8);
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
                  if (lVar13 <= lVar11) goto LAB_0010134d;
                  CowData<GodotBody2D::AreaCMP>::_copy_on_write(pCVar1);
                  piVar7 = (int *)(*(long *)(lVar2 + 0x1e8) + lVar11 * 0x10 + 8);
                  *piVar7 = *piVar7 + 1;
                  goto LAB_00101135;
                }
                break;
              }
              lVar6 = lVar6 + 1;
            } while (lVar13 != lVar6);
          }
          lVar6 = 0;
          while ((lVar6 < lVar13 &&
                 (*(int *)(*(long *)(lVar12 + lVar6 * 0x10) + 0xd0) <= *(int *)(lVar11 + 0xd0)))) {
            lVar6 = lVar6 + 1;
          }
          lVar12 = lVar13 + 1;
          if (lVar12 <= lVar6) {
            _err_print_index_error
                      ("insert","./core/templates/cowdata.h",0xf0,lVar6,lVar12,"p_pos","new_size",""
                       ,false,false);
            goto LAB_00101135;
          }
        }
        iVar5 = CowData<GodotBody2D::AreaCMP>::resize<false>(pCVar1,lVar12);
        if (iVar5 != 0) {
LAB_001013d4:
          _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                           "Condition \"err\" is true. Returning: err",0,0);
          goto LAB_00101135;
        }
        CowData<GodotBody2D::AreaCMP>::_copy_on_write(pCVar1);
        lVar2 = *(long *)(lVar2 + 0x1e8);
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
LAB_00101135:
    cVar4 = Callable::is_valid();
    param_1 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_0010107a;
    lVar11 = *(long *)(in_RDI + 0x38);
    GodotArea2D::BodyKey::BodyKey
              (local_58,*(GodotBody2D **)(in_RDI + 0x30),*(uint *)(in_RDI + 0x40),
               *(uint *)(in_RDI + 0x44));
    piVar7 = (int *)HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                    ::operator[]((HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                                  *)(lVar11 + 0x138),local_58);
    *piVar7 = *piVar7 + 1;
    lVar11 = *(long *)(lVar11 + 0xf8);
    param_1 = extraout_XMM0_Da_01;
  }
  if (lVar11 == 0) {
    param_1 = (float)GodotArea2D::_queue_monitor_update();
  }
LAB_0010107a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



/* GodotAreaPair2D::~GodotAreaPair2D() */

void __thiscall GodotAreaPair2D::~GodotAreaPair2D(GodotAreaPair2D *this)

{
  CowData<GodotBody2D::AreaCMP> *this_00;
  long lVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  GodotAreaPair2D *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_setup_00102e40;
  if (this[0x48] != (GodotAreaPair2D)0x0) {
    if (this[0x4b] != (GodotAreaPair2D)0x0) {
      lVar1 = *(long *)(this + 0x30);
      this[0x4b] = (GodotAreaPair2D)0x0;
      lVar11 = *(long *)(lVar1 + 0x1e8);
      if ((lVar11 != 0) && (lVar12 = *(long *)(lVar11 + -8), 0 < lVar12)) {
        lVar7 = 0;
        do {
          if (*(long *)(*(long *)(this + 0x38) + 0x10) ==
              *(long *)(*(long *)(lVar11 + lVar7 * 0x10) + 0x10)) {
            if ((int)lVar7 < 0) break;
            lVar11 = (long)(int)lVar7;
            if (lVar12 <= lVar11) {
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar11,lVar12,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            this_00 = (CowData<GodotBody2D::AreaCMP> *)(lVar1 + 0x1e8);
            CowData<GodotBody2D::AreaCMP>::_copy_on_write(this_00);
            lVar7 = *(long *)(lVar1 + 0x1e8);
            lVar12 = lVar7 + lVar11 * 0x10;
            iVar6 = *(int *)(lVar12 + 8) + -1;
            *(int *)(lVar12 + 8) = iVar6;
            if (lVar7 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = *(long *)(lVar7 + -8);
              if (lVar11 < lVar12) {
                if (iVar6 < 1) {
                  CowData<GodotBody2D::AreaCMP>::_copy_on_write(this_00);
                  lVar1 = *(long *)(lVar1 + 0x1e8);
                  if (lVar1 == 0) {
                    lVar12 = -1;
                  }
                  else {
                    lVar7 = *(long *)(lVar1 + -8);
                    lVar12 = lVar7 + -1;
                    if (lVar11 < lVar12) {
                      puVar9 = (undefined8 *)(lVar1 + lVar11 * 0x10);
                      do {
                        puVar10 = puVar9 + 2;
                        *puVar9 = puVar9[2];
                        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar9 + 3);
                        puVar9 = puVar10;
                      } while ((undefined8 *)(lVar1 + -0x10 + lVar7 * 0x10) != puVar10);
                    }
                  }
                  CowData<GodotBody2D::AreaCMP>::resize<false>(this_00,lVar12);
                }
                break;
              }
            }
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar12,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar7 = lVar7 + 1;
        } while (lVar12 != lVar7);
      }
    }
    cVar5 = Callable::is_valid();
    if (cVar5 != '\0') {
      lVar1 = *(long *)(this + 0x38);
      GodotArea2D::BodyKey::BodyKey
                ((BodyKey *)local_48,*(GodotBody2D **)(this + 0x30),*(uint *)(this + 0x40),
                 *(uint *)(this + 0x44));
      piVar8 = (int *)HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                      ::operator[]((HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
                                    *)(lVar1 + 0x138),(BodyKey *)local_48);
      *piVar8 = *piVar8 + -1;
      if ((*(long *)(lVar1 + 0x40) != 0) && (*(long *)(lVar1 + 0xf8) == 0)) {
        GodotArea2D::_queue_monitor_update();
      }
    }
  }
  lVar1 = *(long *)(this + 0x30);
  plVar2 = *(long **)(lVar1 + 0x1d8);
  if (plVar2 != (long *)0x0) {
    for (plVar3 = (long *)*plVar2; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
      if ((this == (GodotAreaPair2D *)*plVar3) && ((int)plVar3[1] == 0)) {
        if (plVar2 == (long *)plVar3[4]) {
          lVar11 = plVar3[2];
          if (plVar3 == (long *)*plVar2) {
            *plVar2 = lVar11;
          }
          lVar12 = plVar3[3];
          if (plVar3 == (long *)plVar2[1]) {
            plVar2[1] = lVar12;
          }
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x10) = lVar11;
            lVar11 = plVar3[2];
          }
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x18) = lVar12;
          }
          Memory::free_static(plVar3,false);
          *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        if (*(int *)((long)*(void **)(lVar1 + 0x1d8) + 0x10) == 0) {
          Memory::free_static(*(void **)(lVar1 + 0x1d8),false);
          *(undefined8 *)(lVar1 + 0x1d8) = 0;
        }
        break;
      }
    }
  }
  local_48[0] = this;
  HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>::
  erase((HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>
         *)(*(long *)(this + 0x38) + 0x198),(GodotConstraint2D **)local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotAreaPair2D::~GodotAreaPair2D() */

void __thiscall GodotAreaPair2D::~GodotAreaPair2D(GodotAreaPair2D *this)

{
  ~GodotAreaPair2D(this);
  operator_delete(this,0x50);
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* CowData<GodotBody2D::AreaCMP>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GodotBody2D::AreaCMP>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<GodotConstraint2D*, HashMapHasherDefault, HashMapComparatorDefault<GodotConstraint2D*>
   >::insert(GodotConstraint2D* const&) */

undefined1  [16]
HashSet<GodotConstraint2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint2D*>>::
insert(GodotConstraint2D **param_1)

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
  GodotConstraint2D *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (GodotConstraint2D *)*in_RSI;
  if (local_88 == (GodotConstraint2D *)0x0) {
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
    local_88 = (GodotConstraint2D *)*in_RSI;
    if (local_88 != (GodotConstraint2D *)0x0) goto LAB_00101adf;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_00101adf:
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
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_00101f81;
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
  if ((float)uVar31 * __LC11 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (GodotConstraint2D *)*in_RSI;
      goto LAB_00101f81;
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
    local_88 = (GodotConstraint2D *)*in_RSI;
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
LAB_00101f81:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* HashMap<GodotArea2D::BodyKey, GodotArea2D::BodyState, GodotArea2D::BodyKey,
   HashMapComparatorDefault<GodotArea2D::BodyKey>,
   DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey, GodotArea2D::BodyState> >
   >::_lookup_pos(GodotArea2D::BodyKey const&, unsigned int&) const */

undefined8 __thiscall
HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
::_lookup_pos(HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
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
/* HashMap<GodotArea2D::BodyKey, GodotArea2D::BodyState, GodotArea2D::BodyKey,
   HashMapComparatorDefault<GodotArea2D::BodyKey>,
   DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey, GodotArea2D::BodyState> >
   >::operator[](GodotArea2D::BodyKey const&) */

undefined1 * __thiscall
HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
::operator[](HashMap<GodotArea2D::BodyKey,GodotArea2D::BodyState,GodotArea2D::BodyKey,HashMapComparatorDefault<GodotArea2D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea2D::BodyKey,GodotArea2D::BodyState>>>
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
      if ((float)uVar32 * __LC11 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar32 = *(uint *)(this + 0x28);
        if (uVar32 == 0x1c) {
          pauVar30 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00102837;
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
LAB_00102837:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar30[2] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<GodotBody2D::AreaCMP>::_realloc(long) */

undefined8 __thiscall
CowData<GodotBody2D::AreaCMP>::_realloc(CowData<GodotBody2D::AreaCMP> *this,long param_1)

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
/* Error CowData<GodotBody2D::AreaCMP>::resize<false>(long) */

undefined8 __thiscall
CowData<GodotBody2D::AreaCMP>::resize<false>(CowData<GodotBody2D::AreaCMP> *this,long param_1)

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
LAB_00102d30:
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
  if (lVar10 == 0) goto LAB_00102d30;
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
LAB_00102c9c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00102c27;
  }
  else {
    if (lVar9 != 0) {
      uVar7 = _realloc(this,lVar10);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00102c9c;
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
LAB_00102c27:
  puVar8[-1] = param_1;
  return 0;
}


