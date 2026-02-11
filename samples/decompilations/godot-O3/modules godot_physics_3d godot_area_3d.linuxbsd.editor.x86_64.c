
/* GodotArea3D::_shapes_changed() */

void __thiscall GodotArea3D::_shapes_changed(GodotArea3D *this)

{
  if ((*(long *)(this + 0x168) == 0) && (*(SelfList **)(this + 0x40) != (SelfList *)0x0)) {
    GodotSpace3D::area_add_to_moved_list(*(SelfList **)(this + 0x40));
    return;
  }
  return;
}



/* HashMap<GodotArea3D::BodyKey, GodotArea3D::BodyState, GodotArea3D::BodyKey,
   HashMapComparatorDefault<GodotArea3D::BodyKey>,
   DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey, GodotArea3D::BodyState> >
   >::erase(GodotArea3D::BodyKey const&) [clone .isra.0] */

void __thiscall
HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
::erase(HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
        *this,BodyKey *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
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
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  int iVar38;
  ulong uVar39;
  long *plVar40;
  uint uVar41;
  uint *puVar42;
  ulong uVar43;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar7 = *(long *)(param_1 + 8);
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar43 = CONCAT44(0,uVar5);
    uVar8 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar33 = *(long *)param_1 * 0x3ffff - 1;
    uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
    uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
    uVar32 = ((int)lVar7 * 0x16a88000 | (uint)((int)lVar7 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uint)uVar33 ^ (uint)(uVar33 >> 0x16);
    iVar38 = (int)((ulong)lVar7 >> 0x20);
    uVar32 = (iVar38 * 0x16a88000 | (uint)(iVar38 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
    uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64 ^
             (*(int *)(param_1 + 0x14) * 0x16a88000 |
             (uint)(*(int *)(param_1 + 0x14) * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64 ^
             (*(int *)(param_1 + 0x10) * 0x16a88000 |
             (uint)(*(int *)(param_1 + 0x10) * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
    uVar32 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
    uVar32 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
    uVar37 = uVar32 ^ uVar32 >> 0x10;
    if (uVar32 == uVar32 >> 0x10) {
      uVar37 = 1;
      uVar33 = uVar8;
    }
    else {
      uVar33 = uVar37 * uVar8;
    }
    lVar9 = *(long *)(this + 0x10);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar43;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar33;
    lVar35 = SUB168(auVar11 * auVar21,8);
    uVar32 = *(uint *)(lVar9 + lVar35 * 4);
    uVar34 = SUB164(auVar11 * auVar21,8);
    if (uVar32 != 0) {
      uVar41 = 0;
      do {
        uVar33 = (ulong)uVar34;
        if ((((uVar37 == uVar32) &&
             (lVar35 = *(long *)(lVar6 + lVar35 * 8), *(long *)(lVar35 + 0x10) == *(long *)param_1))
            && (*(long *)(lVar35 + 0x18) == lVar7)) &&
           (*(long *)(lVar35 + 0x20) == *(long *)(param_1 + 0x10))) {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (uVar34 + 1) * uVar8;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar43;
          uVar36 = SUB168(auVar15 * auVar25,8);
          puVar42 = (uint *)(lVar9 + uVar36 * 4);
          uVar37 = SUB164(auVar15 * auVar25,8);
          uVar32 = *puVar42;
          if ((uVar32 != 0) &&
             (auVar16._8_8_ = 0, auVar16._0_8_ = uVar32 * uVar8, auVar26._8_8_ = 0,
             auVar26._0_8_ = uVar43, auVar17._8_8_ = 0,
             auVar17._0_8_ = ((uVar37 + uVar5) - SUB164(auVar16 * auVar26,8)) * uVar8,
             auVar27._8_8_ = 0, auVar27._0_8_ = uVar43, uVar31 = (ulong)uVar37, uVar39 = uVar33,
             SUB164(auVar17 * auVar27,8) != 0)) {
            while( true ) {
              uVar33 = uVar31;
              puVar1 = (uint *)(lVar9 + uVar39 * 4);
              *puVar42 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar36 * 8);
              *puVar1 = uVar32;
              puVar3 = (undefined8 *)(lVar6 + uVar39 * 8);
              uVar10 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar10;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = ((int)uVar33 + 1) * uVar8;
              auVar30._8_8_ = 0;
              auVar30._0_8_ = uVar43;
              uVar36 = SUB168(auVar20 * auVar30,8);
              puVar42 = (uint *)(lVar9 + uVar36 * 4);
              uVar32 = *puVar42;
              if ((uVar32 == 0) ||
                 (auVar18._8_8_ = 0, auVar18._0_8_ = uVar32 * uVar8, auVar28._8_8_ = 0,
                 auVar28._0_8_ = uVar43, auVar19._8_8_ = 0,
                 auVar19._0_8_ =
                      ((SUB164(auVar20 * auVar30,8) + uVar5) - SUB164(auVar18 * auVar28,8)) * uVar8,
                 auVar29._8_8_ = 0, auVar29._0_8_ = uVar43, SUB164(auVar19 * auVar29,8) == 0))
              break;
              uVar31 = uVar36 & 0xffffffff;
              uVar39 = uVar33;
            }
          }
          plVar4 = (long *)(lVar6 + uVar33 * 8);
          *(undefined4 *)(lVar9 + uVar33 * 4) = 0;
          plVar40 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar40) {
            *(long *)(this + 0x18) = *plVar40;
            plVar40 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar40) {
            *(long *)(this + 0x20) = plVar40[1];
            plVar40 = (long *)*plVar4;
          }
          if ((long *)plVar40[1] != (long *)0x0) {
            *(long *)plVar40[1] = *plVar40;
            plVar40 = (long *)*plVar4;
          }
          if (*plVar40 != 0) {
            *(long *)(*plVar40 + 8) = plVar40[1];
            plVar40 = (long *)*plVar4;
          }
          Memory::free_static(plVar40,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar33 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar41 = uVar41 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (uVar34 + 1) * uVar8;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar43;
        lVar35 = SUB168(auVar12 * auVar22,8);
        uVar32 = *(uint *)(lVar9 + lVar35 * 4);
        uVar34 = SUB164(auVar12 * auVar22,8);
      } while ((uVar32 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = uVar32 * uVar8, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar43, auVar14._8_8_ = 0,
              auVar14._0_8_ = ((uVar5 + uVar34) - SUB164(auVar13 * auVar23,8)) * uVar8,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar43, uVar41 <= SUB164(auVar14 * auVar24,8)));
    }
  }
  return;
}



/* GodotArea3D::~GodotArea3D() */

void __thiscall GodotArea3D::~GodotArea3D(GodotArea3D *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x218);
  *(undefined ***)this = &PTR__shape_changed_00102678;
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x23c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x238) * 4) != 0) {
        memset(*(void **)(this + 0x230),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x238) * 4) << 2);
      }
      *(undefined4 *)(this + 0x23c) = 0;
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x228),false);
    Memory::free_static(*(void **)(this + 0x220),false);
    Memory::free_static(*(void **)(this + 0x230),false);
  }
  pvVar5 = *(void **)(this + 0x1f0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x214) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1f8) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x1f8) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
            pvVar5 = *(void **)(this + 0x1f0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001004a1;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1f8),false);
  }
LAB_001004a1:
  pvVar5 = *(void **)(this + 0x1c0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1e4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c8) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x1c8) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
            pvVar5 = *(void **)(this + 0x1c0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010053f;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1c8),false);
  }
LAB_0010053f:
  pvVar5 = *(void **)(this + 400);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1b4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1b4) = 0;
        *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x198) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x198) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
            pvVar5 = *(void **)(this + 400);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1b4) = 0;
        *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001005d7;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x198),false);
  }
LAB_001005d7:
  plVar2 = *(long **)(this + 0x168);
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)(this + 0x178);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(this + 0x180);
    }
    lVar3 = *(long *)(this + 0x180);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar4;
    }
    if (this + 0x168 == (GodotArea3D *)*plVar2) {
      *plVar2 = *(long *)(this + 0x178);
    }
    if (this + 0x168 == (GodotArea3D *)plVar2[1]) {
      plVar2[1] = lVar3;
    }
  }
  plVar2 = *(long **)(this + 0x148);
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)(this + 0x158);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(this + 0x160);
    }
    lVar3 = *(long *)(this + 0x160);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar4;
    }
    if (this + 0x148 == (GodotArea3D *)*plVar2) {
      *plVar2 = *(long *)(this + 0x158);
    }
    if (this + 0x148 == (GodotArea3D *)plVar2[1]) {
      plVar2[1] = lVar3;
    }
  }
  Callable::~Callable((Callable *)(this + 0x138));
  Callable::~Callable((Callable *)(this + 0x128));
  *(code **)this = GodotSpace3D::area_remove_from_monitor_query_list;
  plVar2 = *(long **)(this + 0xb0);
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)(this + 0xc0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(this + 200);
    }
    lVar3 = *(long *)(this + 200);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar4;
    }
    if (this + 0xb0 == (GodotArea3D *)*plVar2) {
      *plVar2 = *(long *)(this + 0xc0);
    }
    if (this + 0xb0 == (GodotArea3D *)plVar2[1]) {
      plVar2[1] = lVar3;
    }
  }
  if (*(long *)(this + 0x38) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(this + 0x38) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar4 = *(long *)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* GodotArea3D::~GodotArea3D() */

void __thiscall GodotArea3D::~GodotArea3D(GodotArea3D *this)

{
  ~GodotArea3D(this);
  operator_delete(this,0x240);
  return;
}



/* GodotArea3D::set_space(GodotSpace3D*) */

void GodotArea3D::set_space(GodotSpace3D *param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(SelfList **)(param_1 + 0x40) != (SelfList *)0x0) {
    if (*(long *)(param_1 + 0x148) != 0) {
      GodotSpace3D::area_remove_from_monitor_query_list(*(SelfList **)(param_1 + 0x40));
    }
    if (*(long *)(param_1 + 0x168) != 0) {
      GodotSpace3D::area_remove_from_moved_list(*(SelfList **)(param_1 + 0x40));
    }
  }
  if ((*(long *)(param_1 + 0x1c0) != 0) && (*(int *)(param_1 + 0x1e4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x1e0) * 4);
    if (uVar1 != 0) {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x1c8) + lVar2) != 0) {
          *(int *)(*(long *)(param_1 + 0x1c8) + lVar2) = 0;
          Memory::free_static(*(void **)(*(long *)(param_1 + 0x1c0) + lVar2 * 2),false);
          *(undefined8 *)(*(long *)(param_1 + 0x1c0) + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while ((ulong)uVar1 << 2 != lVar2);
    }
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined1 (*) [16])(param_1 + 0x1d0) = (undefined1  [16])0x0;
  }
  if ((*(long *)(param_1 + 0x1f0) != 0) && (*(int *)(param_1 + 0x214) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x210) * 4);
    if (uVar1 != 0) {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x1f8) + lVar2) != 0) {
          *(int *)(*(long *)(param_1 + 0x1f8) + lVar2) = 0;
          Memory::free_static(*(void **)(*(long *)(param_1 + 0x1f0) + lVar2 * 2),false);
          *(undefined8 *)(*(long *)(param_1 + 0x1f0) + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined1 (*) [16])(param_1 + 0x200) = (undefined1  [16])0x0;
  }
  GodotCollisionObject3D::_set_space(param_1);
  return;
}



/* GodotArea3D::BodyKey::BodyKey(GodotArea3D*, unsigned int, unsigned int) */

void __thiscall
GodotArea3D::BodyKey::BodyKey(BodyKey *this,GodotArea3D *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(uint *)(this + 0x10) = param_2;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(uint *)(this + 0x14) = param_3;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotArea3D::set_transform(Transform3D const&) */

void __thiscall GodotArea3D::set_transform(GodotArea3D *this,Transform3D *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x168) == 0) && (*(SelfList **)(this + 0x40) != (SelfList *)0x0)) {
    GodotSpace3D::area_add_to_moved_list(*(SelfList **)(this + 0x40));
  }
  if (__LC0 < (double)(*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                       *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                      *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c))) {
    local_90 = 0;
    local_80 = 0x15;
    local_88 = "\' units from origin).";
    String::parse_latin1((StrRange *)&local_90);
    itos((long)&local_a0);
    operator+((char *)&local_98,(String *)"Object went too far away (more than \'");
    String::operator+((String *)&local_88,(String *)&local_98);
    _err_print_error("_set_transform","modules/godot_physics_3d/godot_collision_object_3d.h",0x5b,
                     "Condition \"p_transform.origin.length_squared() > (3.1622776601683791e+18 * 3.1622776601683791e+18)\" is true."
                     ,(String *)&local_88,0,0);
    pcVar4 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x50) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x60) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x70) = uVar2;
    GodotCollisionObject3D::_update_shapes();
  }
  Transform3D::affine_inverse();
  *(undefined8 *)(this + 0x78) = local_78;
  *(undefined8 *)(this + 0x80) = uStack_70;
  *(undefined8 *)(this + 0x88) = local_68;
  *(undefined8 *)(this + 0x90) = uStack_60;
  *(undefined8 *)(this + 0x98) = local_58;
  *(undefined8 *)(this + 0xa0) = uStack_50;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotArea3D::set_monitor_callback(Callable const&) */

void __thiscall GodotArea3D::set_monitor_callback(GodotArea3D *this,Callable *param_1)

{
  uint uVar1;
  long lVar2;
  
  GodotCollisionObject3D::_unregister_shapes();
  Callable::operator=((Callable *)(this + 0x128),param_1);
  if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
    if (uVar1 != 0) {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x1c8) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x1c8) + lVar2) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0x1c0) + lVar2 * 2),false);
          *(undefined8 *)(*(long *)(this + 0x1c0) + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while ((ulong)uVar1 << 2 != lVar2);
    }
    *(undefined4 *)(this + 0x1e4) = 0;
    *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
    if (uVar1 != 0) {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x1f8) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x1f8) + lVar2) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0x1f0) + lVar2 * 2),false);
          *(undefined8 *)(*(long *)(this + 0x1f0) + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x214) = 0;
    *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  }
  (*(code *)**(undefined8 **)this)(this);
  if ((*(long *)(this + 0x168) == 0) && (*(SelfList **)(this + 0x40) != (SelfList *)0x0)) {
    GodotSpace3D::area_add_to_moved_list(*(SelfList **)(this + 0x40));
    return;
  }
  return;
}



/* GodotArea3D::set_area_monitor_callback(Callable const&) */

void __thiscall GodotArea3D::set_area_monitor_callback(GodotArea3D *this,Callable *param_1)

{
  uint uVar1;
  long lVar2;
  
  GodotCollisionObject3D::_unregister_shapes();
  Callable::operator=((Callable *)(this + 0x138),param_1);
  if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
    if (uVar1 != 0) {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x1c8) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x1c8) + lVar2) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0x1c0) + lVar2 * 2),false);
          *(undefined8 *)(*(long *)(this + 0x1c0) + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while ((ulong)uVar1 << 2 != lVar2);
    }
    *(undefined4 *)(this + 0x1e4) = 0;
    *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
    if (uVar1 != 0) {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x1f8) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x1f8) + lVar2) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0x1f0) + lVar2 * 2),false);
          *(undefined8 *)(*(long *)(this + 0x1f0) + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x214) = 0;
    *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  }
  (*(code *)**(undefined8 **)this)(this);
  if ((*(long *)(this + 0x168) == 0) && (*(SelfList **)(this + 0x40) != (SelfList *)0x0)) {
    GodotSpace3D::area_add_to_moved_list(*(SelfList **)(this + 0x40));
    return;
  }
  return;
}



/* GodotArea3D::_set_space_override_mode(PhysicsServer3D::AreaSpaceOverrideMode&,
   PhysicsServer3D::AreaSpaceOverrideMode) */

void __thiscall GodotArea3D::_set_space_override_mode(GodotArea3D *this,int *param_1,int param_3)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) != (param_3 != 0)) {
    GodotCollisionObject3D::_unregister_shapes();
    puVar1 = *(undefined8 **)this;
    *param_1 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00100fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(this);
    return;
  }
  return;
}



/* GodotArea3D::set_param(PhysicsServer3D::AreaParameter, Variant const&) */

void __thiscall GodotArea3D::set_param(GodotArea3D *this,undefined4 param_2,Variant *param_3)

{
  GodotArea3D GVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [12];
  
  switch(param_2) {
  case 0:
    iVar2 = Variant::operator_cast_to_int(param_3);
    if ((iVar2 != 0) != (*(int *)(this + 0xd4) != 0)) {
      GodotCollisionObject3D::_unregister_shapes();
      *(int *)(this + 0xd4) = iVar2;
LAB_00101145:
                    /* WARNING: Could not recover jumptable at 0x00101154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)this)(this);
      return;
    }
    break;
  case 1:
    fVar3 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xe0) = fVar3;
    break;
  case 2:
    auVar4 = Variant::operator_cast_to_Vector3(param_3);
    *(undefined1 (*) [12])(this + 0xe4) = auVar4;
    break;
  case 3:
    GVar1 = (GodotArea3D)Variant::operator_cast_to_bool(param_3);
    this[0xf0] = GVar1;
    break;
  case 4:
    fVar3 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xf4) = fVar3;
    break;
  case 5:
    iVar2 = Variant::operator_cast_to_int(param_3);
    if ((iVar2 != 0) != (*(int *)(this + 0xd8) != 0)) {
      GodotCollisionObject3D::_unregister_shapes();
      *(int *)(this + 0xd8) = iVar2;
      goto LAB_00101145;
    }
    break;
  case 6:
    fVar3 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xf8) = fVar3;
    break;
  case 7:
    iVar2 = Variant::operator_cast_to_int(param_3);
    if ((iVar2 != 0) != (*(int *)(this + 0xdc) != 0)) {
      GodotCollisionObject3D::_unregister_shapes();
      *(int *)(this + 0xdc) = iVar2;
      goto LAB_00101145;
    }
    break;
  case 8:
    fVar3 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xfc) = fVar3;
    break;
  case 9:
    iVar2 = Variant::operator_cast_to_int(param_3);
    *(int *)(this + 0x120) = iVar2;
    break;
  case 10:
    if (*(float *)(this + 0x100) <= 0.0 && *(float *)(this + 0x100) != 0.0) {
      _err_print_error("set_param","modules/godot_physics_3d/godot_area_3d.cpp",0xa2,
                       "Condition \"wind_force_magnitude < 0\" is true.",
                       "Wind force magnitude must be a non-negative real number, but a negative number was specified."
                       ,0,0);
    }
    else {
      fVar3 = Variant::operator_cast_to_float(param_3);
      *(float *)(this + 0x100) = fVar3;
    }
    break;
  case 0xb:
    auVar4 = Variant::operator_cast_to_Vector3(param_3);
    *(undefined1 (*) [12])(this + 0x108) = auVar4;
    break;
  case 0xc:
    auVar4 = Variant::operator_cast_to_Vector3(param_3);
    *(undefined1 (*) [12])(this + 0x114) = auVar4;
    break;
  case 0xd:
    if (*(float *)(this + 0x104) <= 0.0 && *(float *)(this + 0x104) != 0.0) {
      _err_print_error("set_param","modules/godot_physics_3d/godot_area_3d.cpp",0xac,
                       "Condition \"wind_attenuation_factor < 0\" is true.",
                       "Wind attenuation factor must be a non-negative real number, but a negative number was specified."
                       ,0,0);
    }
    else {
      fVar3 = Variant::operator_cast_to_float(param_3);
      *(float *)(this + 0x104) = fVar3;
    }
    break;
  default:
    return;
  }
  return;
}



/* GodotArea3D::get_param(PhysicsServer3D::AreaParameter) const */

Variant * GodotArea3D::get_param(Variant *param_1,long param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    Variant::Variant(param_1,*(int *)(param_2 + 0xd4));
    break;
  case 1:
    Variant::Variant(param_1,*(float *)(param_2 + 0xe0));
    break;
  case 2:
    Variant::Variant(param_1,(Vector3 *)(param_2 + 0xe4));
    break;
  case 3:
    Variant::Variant(param_1,*(bool *)(param_2 + 0xf0));
    break;
  case 4:
    Variant::Variant(param_1,*(float *)(param_2 + 0xf4));
    break;
  case 5:
    Variant::Variant(param_1,*(int *)(param_2 + 0xd8));
    break;
  case 6:
    Variant::Variant(param_1,*(float *)(param_2 + 0xf8));
    break;
  case 7:
    Variant::Variant(param_1,*(int *)(param_2 + 0xdc));
    break;
  case 8:
    Variant::Variant(param_1,*(float *)(param_2 + 0xfc));
    break;
  case 9:
    Variant::Variant(param_1,*(int *)(param_2 + 0x120));
    break;
  case 10:
    Variant::Variant(param_1,*(float *)(param_2 + 0x100));
    break;
  case 0xb:
    Variant::Variant(param_1,(Vector3 *)(param_2 + 0x108));
    break;
  case 0xc:
    Variant::Variant(param_1,(Vector3 *)(param_2 + 0x114));
    break;
  case 0xd:
    Variant::Variant(param_1,*(float *)(param_2 + 0x104));
    break;
  default:
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  return param_1;
}



/* GodotArea3D::_queue_monitor_update() */

void __thiscall GodotArea3D::_queue_monitor_update(GodotArea3D *this)

{
  if (*(SelfList **)(this + 0x40) == (SelfList *)0x0) {
    _err_print_error("_queue_monitor_update","modules/godot_physics_3d/godot_area_3d.cpp",0xd6,
                     "Parameter \"get_space()\" is null.",0,0);
    return;
  }
  if (*(long *)(this + 0x148) != 0) {
    return;
  }
  GodotSpace3D::area_add_to_monitor_query_list(*(SelfList **)(this + 0x40));
  return;
}



/* GodotArea3D::set_monitorable(bool) */

void __thiscall GodotArea3D::set_monitorable(GodotArea3D *this,bool param_1)

{
  if (this[0x124] == (GodotArea3D)param_1) {
    return;
  }
  this[0x124] = (GodotArea3D)param_1;
  GodotCollisionObject3D::_set_static(SUB81(this,0));
  if (*(code **)(*(long *)this + 0x20) == _shapes_changed) {
    if ((*(long *)(this + 0x168) == 0) && (*(SelfList **)(this + 0x40) != (SelfList *)0x0)) {
      GodotSpace3D::area_add_to_moved_list(*(SelfList **)(this + 0x40));
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))(this);
  return;
}



/* GodotArea3D::call_queries() */

void __thiscall GodotArea3D::call_queries(GodotArea3D *this)

{
  Callable *pCVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  long local_128;
  long local_120;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_100 [16];
  long *local_e8;
  int *piStack_e0;
  int *local_d8;
  int *piStack_d0;
  int *local_c8;
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x128) == 0) && (*(long *)(this + 0x130) == 0)) {
    if (*(long *)(this + 0x138) == 0) goto LAB_00101510;
LAB_001014bd:
    iVar2 = *(int *)(this + 0x214);
  }
  else {
    if (*(int *)(this + 0x1e4) != 0) {
      pCVar1 = (Callable *)(this + 0x128);
      cVar4 = Callable::is_valid();
      if (cVar4 == '\0') {
        if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
          uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
          if (uVar3 != 0) {
            lVar8 = 0;
            do {
              if (*(int *)(*(long *)(this + 0x1c8) + lVar8) != 0) {
                *(int *)(*(long *)(this + 0x1c8) + lVar8) = 0;
                Memory::free_static(*(void **)(*(long *)(this + 0x1c0) + lVar8 * 2),false);
                *(undefined8 *)(*(long *)(this + 0x1c0) + lVar8 * 2) = 0;
              }
              lVar8 = lVar8 + 4;
            } while (lVar8 != (ulong)uVar3 << 2);
          }
          *(undefined4 *)(this + 0x1e4) = 0;
          *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        }
        local_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        Callable::operator=(pCVar1,(Callable *)&local_118);
        Callable::~Callable((Callable *)&local_118);
      }
      else {
        plVar7 = local_40;
        plVar6 = (long *)local_b8;
        do {
          *(int *)plVar6 = 0;
          plVar5 = plVar6 + 3;
          *(undefined1 (*) [16])(plVar6 + 1) = (undefined1  [16])0x0;
          plVar6 = plVar5;
        } while (plVar7 != plVar5);
        piStack_e0 = local_a0;
        local_d8 = local_88;
        piStack_d0 = local_70;
        local_c8 = local_58;
        local_e8 = (long *)local_b8;
        if (*(undefined8 **)(this + 0x1d0) != (undefined8 *)0x0) {
          puVar10 = *(undefined8 **)(this + 0x1d0);
          do {
            if (*(int *)(puVar10 + 5) == 0) {
              puVar9 = (undefined8 *)*puVar10;
              HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
              ::erase((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                       *)(this + 0x1b8),(BodyKey *)(puVar10 + 2));
            }
            else {
              Variant::Variant((Variant *)&local_108,(uint)(*(int *)(puVar10 + 5) < 1));
              if (Variant::needs_deinit[local_b8[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_b8[0] = (int)local_108;
              local_b0 = local_100._0_8_;
              uStack_a8 = local_100._8_8_;
              Variant::Variant((Variant *)&local_108,(RID *)(puVar10 + 2));
              if (Variant::needs_deinit[local_a0[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_a0[0] = (int)local_108;
              local_98 = local_100._0_8_;
              uStack_90 = local_100._8_8_;
              Variant::Variant((Variant *)&local_108,(ObjectID *)(puVar10 + 3));
              if (Variant::needs_deinit[local_88[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_80 = local_100._0_8_;
              uStack_78 = local_100._8_8_;
              local_88[0] = (int)local_108;
              Variant::Variant((Variant *)&local_108,*(uint *)(puVar10 + 4));
              if (Variant::needs_deinit[local_70[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_68 = local_100._0_8_;
              uStack_60 = local_100._8_8_;
              local_70[0] = (int)local_108;
              Variant::Variant((Variant *)&local_108,*(uint *)((long)puVar10 + 0x24));
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_58[0] = (int)local_108;
              local_50 = local_100._0_8_;
              uStack_48 = local_100._8_8_;
              puVar9 = (undefined8 *)*puVar10;
              HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
              ::erase((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                       *)(this + 0x1b8),(BodyKey *)(puVar10 + 2));
              local_100 = (undefined1  [16])0x0;
              local_118 = 0;
              uStack_114 = 0;
              uStack_110 = 0;
              local_108 = 0;
              Callable::callp((Variant **)pCVar1,(int)&local_e8,(Variant *)0x5,
                              (CallError *)&local_108);
              if ((local_118 != 0) && (call_queries()::first_print != '\0')) {
                Variant::get_callable_error_text
                          ((Callable *)&local_128,(Variant **)pCVar1,(int)&local_e8,(CallError *)0x5
                          );
                operator+((char *)&local_120,(String *)"Error calling monitor callback method ");
                _err_print_error("call_queries","modules/godot_physics_3d/godot_area_3d.cpp",0x109,
                                 &local_120,0,0);
                lVar8 = local_120;
                if (local_120 != 0) {
                  LOCK();
                  plVar6 = (long *)(local_120 + -0x10);
                  *plVar6 = *plVar6 + -1;
                  UNLOCK();
                  if (*plVar6 == 0) {
                    local_120 = 0;
                    Memory::free_static((void *)(lVar8 + -0x10),false);
                  }
                }
                lVar8 = local_128;
                if (local_128 != 0) {
                  LOCK();
                  plVar6 = (long *)(local_128 + -0x10);
                  *plVar6 = *plVar6 + -1;
                  UNLOCK();
                  if (*plVar6 == 0) {
                    local_128 = 0;
                    Memory::free_static((void *)(lVar8 + -0x10),false);
                  }
                }
                call_queries()::first_print = '\0';
              }
              if (Variant::needs_deinit[(int)local_108] != '\0') {
                Variant::_clear_internal();
              }
            }
            puVar10 = puVar9;
          } while (puVar9 != (undefined8 *)0x0);
        }
        do {
          plVar6 = plVar7 + -3;
          plVar7 = plVar7 + -3;
          if (Variant::needs_deinit[(int)*plVar6] != '\0') {
            Variant::_clear_internal();
          }
        } while (plVar7 != (long *)local_b8);
      }
    }
    if (*(long *)(this + 0x138) != 0) goto LAB_001014bd;
LAB_00101510:
    if (*(long *)(this + 0x140) == 0) goto LAB_001014c9;
    iVar2 = *(int *)(this + 0x214);
  }
  if (iVar2 != 0) {
    pCVar1 = (Callable *)(this + 0x138);
    cVar4 = Callable::is_valid();
    if (cVar4 == '\0') {
      if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
        if (uVar3 != 0) {
          lVar8 = 0;
          do {
            if (*(int *)(*(long *)(this + 0x1f8) + lVar8) != 0) {
              *(int *)(*(long *)(this + 0x1f8) + lVar8) = 0;
              Memory::free_static(*(void **)(*(long *)(this + 0x1f0) + lVar8 * 2),false);
              *(undefined8 *)(*(long *)(this + 0x1f0) + lVar8 * 2) = 0;
            }
            lVar8 = lVar8 + 4;
          } while (lVar8 != (ulong)uVar3 << 2);
        }
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
      }
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      Callable::operator=(pCVar1,(Callable *)&local_118);
      Callable::~Callable((Callable *)&local_118);
    }
    else {
      plVar7 = local_40;
      plVar6 = (long *)local_b8;
      do {
        *(int *)plVar6 = 0;
        plVar5 = plVar6 + 3;
        *(undefined1 (*) [16])(plVar6 + 1) = (undefined1  [16])0x0;
        plVar6 = plVar5;
      } while (plVar7 != plVar5);
      piStack_e0 = local_a0;
      local_d8 = local_88;
      piStack_d0 = local_70;
      local_c8 = local_58;
      local_e8 = (long *)local_b8;
      if (*(undefined8 **)(this + 0x200) != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)(this + 0x200);
        do {
          if (*(int *)(puVar10 + 5) == 0) {
            puVar9 = (undefined8 *)*puVar10;
            HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
            ::erase((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                     *)(this + 0x1e8),(BodyKey *)(puVar10 + 2));
          }
          else {
            Variant::Variant((Variant *)&local_108,(uint)(*(int *)(puVar10 + 5) < 1));
            if (Variant::needs_deinit[local_b8[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_b8[0] = (int)local_108;
            local_b0 = local_100._0_8_;
            uStack_a8 = local_100._8_8_;
            Variant::Variant((Variant *)&local_108,(RID *)(puVar10 + 2));
            if (Variant::needs_deinit[local_a0[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_a0[0] = (int)local_108;
            local_98 = local_100._0_8_;
            uStack_90 = local_100._8_8_;
            Variant::Variant((Variant *)&local_108,(ObjectID *)(puVar10 + 3));
            if (Variant::needs_deinit[local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_80 = local_100._0_8_;
            uStack_78 = local_100._8_8_;
            local_88[0] = (int)local_108;
            Variant::Variant((Variant *)&local_108,*(uint *)(puVar10 + 4));
            if (Variant::needs_deinit[local_70[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_68 = local_100._0_8_;
            uStack_60 = local_100._8_8_;
            local_70[0] = (int)local_108;
            Variant::Variant((Variant *)&local_108,*(uint *)((long)puVar10 + 0x24));
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_50 = local_100._0_8_;
            uStack_48 = local_100._8_8_;
            puVar9 = (undefined8 *)*puVar10;
            local_58[0] = (int)local_108;
            HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
            ::erase((HashMap<GodotArea3D::BodyKey,GodotArea3D::BodyState,GodotArea3D::BodyKey,HashMapComparatorDefault<GodotArea3D::BodyKey>,DefaultTypedAllocator<HashMapElement<GodotArea3D::BodyKey,GodotArea3D::BodyState>>>
                     *)(this + 0x1e8),(BodyKey *)(puVar10 + 2));
            local_118 = 0;
            uStack_114 = 0;
            uStack_110 = 0;
            local_108 = 0;
            local_100 = (undefined1  [16])0x0;
            Callable::callp((Variant **)pCVar1,(int)&local_e8,(Variant *)0x5,(CallError *)&local_108
                           );
            if ((local_118 != 0) && (call_queries()::first_print != '\0')) {
              Variant::get_callable_error_text
                        ((Callable *)&local_128,(Variant **)pCVar1,(int)&local_e8,(CallError *)0x5);
              operator+((char *)&local_120,(String *)"Error calling area monitor callback method ");
              _err_print_error("call_queries","modules/godot_physics_3d/godot_area_3d.cpp",0x133,
                               &local_120,0,0);
              lVar8 = local_120;
              if (local_120 != 0) {
                LOCK();
                plVar6 = (long *)(local_120 + -0x10);
                *plVar6 = *plVar6 + -1;
                UNLOCK();
                if (*plVar6 == 0) {
                  local_120 = 0;
                  Memory::free_static((void *)(lVar8 + -0x10),false);
                }
              }
              lVar8 = local_128;
              if (local_128 != 0) {
                LOCK();
                plVar6 = (long *)(local_128 + -0x10);
                *plVar6 = *plVar6 + -1;
                UNLOCK();
                if (*plVar6 == 0) {
                  local_128 = 0;
                  Memory::free_static((void *)(lVar8 + -0x10),false);
                }
              }
              call_queries()::first_print = '\0';
            }
            if (Variant::needs_deinit[(int)local_108] != '\0') {
              Variant::_clear_internal();
            }
          }
          puVar10 = puVar9;
        } while (puVar9 != (undefined8 *)0x0);
      }
      do {
        plVar6 = plVar7 + -3;
        plVar7 = plVar7 + -3;
        if (Variant::needs_deinit[(int)*plVar6] != '\0') {
          Variant::_clear_internal();
        }
      } while (plVar7 != (long *)local_b8);
    }
  }
LAB_001014c9:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotArea3D::compute_gravity(Vector3 const&, Vector3&) const */

void __thiscall GodotArea3D::compute_gravity(GodotArea3D *this,Vector3 *param_1,Vector3 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = 0.0;
  if (this[0xf0] == (GodotArea3D)0x0) {
    fVar9 = *(float *)(this + 0xe0);
    uVar1 = *(undefined8 *)(this + 0xe4);
    *(float *)(param_2 + 8) = *(float *)(this + 0xec) * fVar9;
    *(ulong *)param_2 = CONCAT44(fVar9 * (float)((ulong)uVar1 >> 0x20),fVar9 * (float)uVar1);
  }
  else {
    fVar4 = *(float *)(this + 0xec);
    fVar6 = (float)*(undefined8 *)(this + 0xe4);
    fVar12 = (float)((ulong)*(undefined8 *)(this + 0xe4) >> 0x20);
    fVar9 = *(float *)(this + 0xf4);
    fVar8 = (*(float *)(this + 0x60) * fVar6 + *(float *)(this + 100) * fVar12 +
             *(float *)(this + 0x68) * fVar4 + *(float *)(this + 0x74)) - *(float *)(param_1 + 8);
    auVar5._0_4_ = ((float)*(undefined8 *)(this + 0x48) * fVar6 + fVar12 * *(float *)(this + 0x4c) +
                    (float)*(undefined8 *)(this + 0x50) * fVar4 +
                   (float)*(undefined8 *)(this + 0x6c)) - (float)*(undefined8 *)param_1;
    auVar5._4_4_ = ((float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) * fVar6 +
                    fVar12 * *(float *)(this + 0x58) +
                    (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) * fVar4 +
                   (float)((ulong)*(undefined8 *)(this + 0x6c) >> 0x20)) -
                   (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    auVar5._8_8_ = 0;
    if (0.0 < fVar9) {
      fVar6 = auVar5._0_4_ * auVar5._0_4_ + auVar5._4_4_ * auVar5._4_4_ + fVar8 * fVar8;
      if (0.0 < fVar6) {
        fVar9 = (fVar9 * *(float *)(this + 0xe0) * fVar9) / fVar6;
        fVar6 = SQRT(fVar6);
        auVar3._4_4_ = fVar6;
        auVar3._0_4_ = fVar6;
        auVar3._8_4_ = (int)_LC18;
        auVar3._12_4_ = (int)((ulong)_LC18 >> 0x20);
        auVar5 = divps(auVar5,auVar3);
        *(ulong *)param_2 = CONCAT44(auVar5._4_4_ * fVar9,auVar5._0_4_ * fVar9);
        *(float *)(param_2 + 8) = (fVar8 / fVar6) * fVar9;
      }
      else {
        *(undefined8 *)param_2 = 0;
        *(undefined4 *)(param_2 + 8) = 0;
      }
    }
    else {
      fVar9 = *(float *)(this + 0xe0);
      fVar7 = auVar5._0_4_ * auVar5._0_4_ + auVar5._4_4_ * auVar5._4_4_ + fVar8 * fVar8;
      fVar6 = 0.0;
      fVar12 = 0.0;
      fVar10 = 0.0;
      if (fVar7 != 0.0) {
        fVar7 = SQRT(fVar7);
        auVar11._4_4_ = fVar7;
        auVar11._0_4_ = fVar7;
        auVar11._8_8_ = _LC18;
        auVar5 = divps(auVar5,auVar11);
        fVar10 = fVar8 / fVar7;
        fVar6 = auVar5._0_4_;
        fVar12 = auVar5._4_4_;
      }
      *(ulong *)param_2 = CONCAT44(fVar12 * fVar9,fVar6 * fVar9);
      *(float *)(param_2 + 8) = fVar10 * fVar9;
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this,fVar4);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotArea3D::GodotArea3D() */

void __thiscall GodotArea3D::GodotArea3D(GodotArea3D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  GodotCollisionObject3D::GodotCollisionObject3D((GodotCollisionObject3D *)this,0);
  uVar3 = _UNK_00102898;
  uVar2 = __LC19;
  *(undefined ***)this = &PTR__shape_changed_00102678;
  uVar1 = _LC21;
  *(undefined8 *)(this + 0xe0) = uVar2;
  *(undefined8 *)(this + 0xe8) = uVar3;
  uVar3 = _UNK_001028a8;
  uVar2 = __LC20;
  *(undefined8 *)(this + 0x1b0) = uVar1;
  *(undefined8 *)(this + 0xf4) = uVar2;
  *(undefined8 *)(this + 0xfc) = uVar3;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  this[0xf0] = (GodotArea3D)0x0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  this[0x124] = (GodotArea3D)0x0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(GodotArea3D **)(this + 0x150) = this;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(GodotArea3D **)(this + 0x170) = this;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  *(undefined8 *)(this + 0x210) = uVar1;
  *(undefined8 *)(this + 0x238) = uVar1;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x228) = (undefined1  [16])0x0;
  GodotCollisionObject3D::_set_static(SUB81(this,0));
  this[0xd0] = (GodotArea3D)0x0;
  return;
}


