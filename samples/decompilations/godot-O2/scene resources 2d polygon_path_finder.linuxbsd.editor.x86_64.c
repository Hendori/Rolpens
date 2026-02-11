
/* PolygonPathFinder::get_bounds() const */

undefined1  [16] __thiscall PolygonPathFinder::get_bounds(PolygonPathFinder *this)

{
  return *(undefined1 (*) [16])(this + 0x248);
}



/* PolygonPathFinder::get_point_penalty(int) const */

undefined4 __thiscall PolygonPathFinder::get_point_penalty(PolygonPathFinder *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x260);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8) + -2;
      goto LAB_0010005d;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8) + -2;
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + 0x34 + lVar2 * 0x40);
    }
    goto LAB_0010005d;
  }
  lVar3 = -2;
LAB_0010005d:
  _err_print_index_error
            ("get_point_penalty","scene/resources/2d/polygon_path_finder.cpp",0x21d,lVar2,lVar3,
             "p_point","points.size() - 2","",false,false);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Geometry2D::segment_intersects_segment(Vector2 const&, Vector2 const&, Vector2 const&, Vector2
   const&, Vector2*) [clone .isra.0] */

undefined8
Geometry2D::segment_intersects_segment
          (Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4,Vector2 *param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  float in_XMM0_Da;
  float fVar2;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_XMM3_Da;
  float fVar6;
  float in_XMM4_Da;
  float fVar7;
  float in_XMM5_Da;
  float fVar8;
  float local_48;
  float fStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = (float)*(undefined8 *)param_1;
  local_48 = in_XMM0_Da - fVar3;
  fVar5 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fStack_44 = in_XMM1_Da - fVar5;
  fVar2 = (float)Vector2::dot((Vector2 *)&local_48);
  uVar1 = 0;
  if (0.0 < fVar2) {
    fVar7 = fStack_44 / fVar2;
    fVar2 = local_48 / fVar2;
    fVar4 = (in_XMM3_Da - fVar5) * fVar2 - (in_XMM2_Da - fVar3) * fVar7;
    fVar6 = (in_XMM5_Da - fVar5) * fVar2 - (in_XMM4_Da - fVar3) * fVar7;
    uVar1 = 0;
    if (fVar4 < _LC7) {
      if (fVar6 < _LC7) goto LAB_00100258;
    }
    else if (fVar4 <= _LC6) {
      if (fVar4 == fVar6) goto LAB_00100258;
    }
    else {
      uVar1 = 0;
      if (_LC6 < fVar6) goto LAB_00100258;
    }
    uVar1 = 0;
    fVar8 = _LC6;
    if (_LC6 <= ABS(fVar4) * _LC6) {
      fVar8 = ABS(fVar4) * _LC6;
    }
    if (((fVar8 <= ABS(fVar4 - fVar6)) &&
        (fVar8 = (in_XMM4_Da - fVar3) * fVar2 + (in_XMM5_Da - fVar5) * fVar7,
        fVar8 = ((((in_XMM2_Da - fVar3) * fVar2 + (in_XMM3_Da - fVar5) * fVar7) - fVar8) * fVar6) /
                (fVar6 - fVar4) + fVar8, 0.0 <= fVar8)) && (fVar8 <= __LC8)) {
      if (param_2 != (Vector2 *)0x0) {
        *(ulong *)param_2 =
             CONCAT44(fVar8 * fStack_44 + (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      fVar8 * local_48 + (float)*(undefined8 *)param_1);
      }
      uVar1 = 1;
    }
  }
LAB_00100258:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::erase(int const&) [clone
   .isra.0] */

ulong __thiscall
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase
          (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  uint uVar30;
  uint uVar31;
  ulong in_RAX;
  ulong uVar32;
  long lVar33;
  uint *puVar34;
  ulong uVar35;
  uint uVar36;
  uint *puVar37;
  int iVar38;
  long lVar39;
  ulong uVar40;
  uint *puVar41;
  uint uVar42;
  uint *puVar43;
  ulong uVar44;
  ulong uVar45;
  
  uVar31 = *param_1;
  lVar6 = *(long *)this;
  if ((lVar6 == 0) || (in_RAX = (ulong)*(uint *)(this + 0x24), *(uint *)(this + 0x24) == 0)) {
    return in_RAX;
  }
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
  uVar45 = CONCAT44(0,uVar4);
  uVar35 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
  uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
  uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar42 = uVar30 ^ uVar30 >> 0x10;
  if (uVar30 == uVar30 >> 0x10) {
    uVar42 = 1;
    uVar32 = uVar35;
  }
  else {
    uVar32 = uVar42 * uVar35;
  }
  lVar7 = *(long *)(this + 0x18);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar45;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar32;
  auVar10 = auVar10 * auVar20;
  lVar39 = auVar10._8_8_;
  uVar32 = auVar10._0_8_;
  uVar30 = *(uint *)(lVar7 + lVar39 * 4);
  iVar38 = auVar10._8_4_;
  if (uVar30 != 0) {
    uVar36 = 0;
    do {
      if (uVar42 == uVar30) {
        lVar8 = *(long *)(this + 8);
        uVar30 = *(uint *)(lVar8 + lVar39 * 4);
        if (uVar31 == *(uint *)(lVar6 + (ulong)uVar30 * 4)) {
          lVar9 = *(long *)(this + 0x10);
          lVar33 = (ulong)uVar30 * 4;
          puVar34 = (uint *)(lVar33 + lVar9);
          uVar31 = *puVar34;
          uVar32 = (ulong)uVar31;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (uVar31 + 1) * uVar35;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar45;
          lVar39 = SUB168(auVar14 * auVar24,8) * 4;
          uVar42 = SUB164(auVar14 * auVar24,8);
          uVar44 = (ulong)uVar42;
          puVar41 = (uint *)(lVar7 + lVar39);
          if ((*puVar41 == 0) ||
             (auVar15._8_8_ = 0, auVar15._0_8_ = *puVar41 * uVar35, auVar25._8_8_ = 0,
             auVar25._0_8_ = uVar45, auVar16._8_8_ = 0,
             auVar16._0_8_ = ((uVar42 + uVar4) - SUB164(auVar15 * auVar25,8)) * uVar35,
             auVar26._8_8_ = 0, auVar26._0_8_ = uVar45, SUB164(auVar16 * auVar26,8) == 0)) {
            uVar44 = (ulong)uVar31;
          }
          else {
            while( true ) {
              puVar37 = (uint *)(lVar39 + lVar8);
              puVar3 = (uint *)(lVar8 + uVar32 * 4);
              puVar43 = (uint *)(uVar32 * 4 + lVar7);
              puVar1 = (undefined4 *)(lVar9 + (ulong)*puVar37 * 4);
              puVar2 = (undefined4 *)(lVar9 + (ulong)*puVar3 * 4);
              uVar5 = *puVar2;
              *puVar2 = *puVar1;
              *puVar1 = uVar5;
              uVar31 = *puVar41;
              *puVar41 = *puVar43;
              *puVar43 = uVar31;
              uVar31 = *puVar37;
              *puVar37 = *puVar3;
              *puVar3 = uVar31;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ((int)uVar44 + 1) * uVar35;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = uVar45;
              uVar40 = SUB168(auVar19 * auVar29,8);
              lVar39 = uVar40 * 4;
              puVar41 = (uint *)(lVar7 + lVar39);
              if ((*puVar41 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = *puVar41 * uVar35, auVar27._8_8_ = 0,
                 auVar27._0_8_ = uVar45, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      ((SUB164(auVar19 * auVar29,8) + uVar4) - SUB164(auVar17 * auVar27,8)) * uVar35
                 , auVar28._8_8_ = 0, auVar28._0_8_ = uVar45, SUB164(auVar18 * auVar28,8) == 0))
              break;
              uVar32 = uVar44;
              uVar44 = uVar40 & 0xffffffff;
            }
          }
          *(undefined4 *)(lVar7 + uVar44 * 4) = 0;
          uVar31 = *(int *)(this + 0x24) - 1;
          *(uint *)(this + 0x24) = uVar31;
          if (uVar31 <= uVar30) {
            return (ulong)uVar31;
          }
          *(undefined4 *)(lVar33 + lVar6) = *(undefined4 *)(lVar6 + (ulong)uVar31 * 4);
          *puVar34 = *(uint *)(lVar9 + (ulong)*(uint *)(this + 0x24) * 4);
          uVar35 = (ulong)*(uint *)(lVar9 + (ulong)*(uint *)(this + 0x24) * 4);
          *(uint *)(lVar8 + uVar35 * 4) = uVar30;
          return uVar35;
        }
      }
      uVar36 = uVar36 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (iVar38 + 1) * uVar35;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar45;
      auVar11 = auVar11 * auVar21;
      lVar39 = auVar11._8_8_;
      uVar32 = auVar11._0_8_;
      uVar30 = *(uint *)(lVar7 + lVar39 * 4);
      iVar38 = auVar11._8_4_;
    } while ((uVar30 != 0) &&
            (auVar12._8_8_ = 0, auVar12._0_8_ = uVar30 * uVar35, auVar22._8_8_ = 0,
            auVar22._0_8_ = uVar45, auVar13._8_8_ = 0,
            auVar13._0_8_ = ((uVar4 + iVar38) - SUB164(auVar12 * auVar22,8)) * uVar35,
            auVar23._8_8_ = 0, auVar23._0_8_ = uVar45, uVar32 = SUB168(auVar13 * auVar23,0),
            uVar36 <= SUB164(auVar13 * auVar23,8)));
  }
  return uVar32;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PolygonPathFinder::get_closest_point(Vector2 const&) const */

undefined8 __thiscall PolygonPathFinder::get_closest_point(PolygonPathFinder *this,Vector2 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  undefined8 local_70;
  float local_60;
  undefined8 local_48;
  long local_40;
  
  iVar2 = *(int *)(this + 0x28c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  if (iVar2 == 0) {
LAB_00100567:
    _err_print_error("get_closest_point","scene/resources/2d/polygon_path_finder.cpp",0x1fe,
                     "Condition \"Math::is_equal_approx(closest_dist, 1e20f)\" is true. Returning: Vector2()"
                     ,0,0);
    local_70 = 0;
LAB_00100590:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_70;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar9 = 0;
  local_60 = 1e+20;
  piVar7 = (int *)(*(long *)(this + 0x268) + 4);
  do {
    lVar6 = (long)piVar7[-1];
    lVar3 = *(long *)(this + 0x260);
    if (lVar6 < 0) {
      if (lVar3 == 0) {
LAB_001007c8:
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar3 + -8);
      }
LAB_00100715:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar8,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (lVar3 == 0) goto LAB_001007c8;
    lVar8 = *(long *)(lVar3 + -8);
    if (lVar8 <= lVar6) goto LAB_00100715;
    uVar1 = *(undefined8 *)(lVar3 + lVar6 * 0x40);
    lVar6 = (long)*piVar7;
    if ((lVar6 < 0) || (lVar8 <= lVar6)) goto LAB_00100715;
    uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x40);
    fVar13 = (float)((ulong)uVar1 >> 0x20);
    local_48._0_4_ = (float)uVar4 - (float)uVar1;
    local_48._4_4_ = (float)((ulong)uVar4 >> 0x20) - fVar13;
    fVar10 = (float)Vector2::length_squared();
    uVar12 = uVar1;
    if (_LC18 <= fVar10) {
      fVar11 = (float)Vector2::dot((Vector2 *)&local_48);
      fVar11 = fVar11 / fVar10;
      if ((0.0 < fVar11) && (uVar12 = uVar4, fVar11 < __LC8)) {
        uVar12 = CONCAT44(fVar13 + fVar11 * local_48._4_4_,(float)uVar1 + fVar11 * (float)local_48);
      }
    }
    local_48 = uVar12;
    fVar10 = (float)Vector2::distance_squared_to(param_1);
    if (fVar10 < local_60) {
      local_70 = local_48;
      local_60 = fVar10;
    }
    iVar9 = iVar9 + 1;
    if (iVar2 <= iVar9) {
      if (local_60 == _LC11) goto LAB_00100567;
      fVar10 = _LC6;
      if (_LC6 <= ABS(local_60) * _LC6) {
        fVar10 = ABS(local_60) * _LC6;
      }
      if (fVar10 <= ABS(local_60 - _LC11)) goto LAB_00100590;
      goto LAB_00100567;
    }
    piVar7 = piVar7 + 2;
  } while( true );
}



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

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



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

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
  __n = lVar2 * 8;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PolygonPathFinder::_is_point_inside(Vector2 const&) const */

byte __thiscall PolygonPathFinder::_is_point_inside(PolygonPathFinder *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_48;
  long local_40;
  
  iVar6 = *(int *)(this + 0x28c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar6 == 0) {
    bVar11 = 0;
LAB_00100d35:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return bVar11;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar7 = *(long *)(this + 0x268);
  lVar13 = 0;
  bVar11 = 0;
  do {
    lVar10 = (long)*(int *)(lVar7 + lVar13 * 8);
    lVar8 = *(long *)(this + 0x260);
    if (lVar10 < 0) {
      if (lVar8 == 0) {
LAB_00100e08:
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)(lVar8 + -8);
      }
LAB_00100d6d:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (lVar8 == 0) goto LAB_00100e08;
    lVar12 = *(long *)(lVar8 + -8);
    if (lVar12 <= lVar10) goto LAB_00100d6d;
    uVar4 = *(undefined8 *)(lVar8 + lVar10 * 0x40);
    lVar10 = (long)*(int *)(lVar7 + 4 + lVar13 * 8);
    if ((lVar10 < 0) || (lVar12 <= lVar10)) goto LAB_00100d6d;
    fVar1 = *(float *)param_1;
    fVar2 = *(float *)(param_1 + 4);
    uVar5 = *(undefined8 *)(lVar8 + lVar10 * 0x40);
    fVar20 = *(float *)(this + 0x240);
    fVar3 = *(float *)(this + 0x244);
    fVar15 = (float)uVar4;
    fVar17 = (float)((ulong)uVar4 >> 0x20);
    local_48 = CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar17,(float)uVar5 - fVar15);
    fVar14 = (float)Vector2::dot((Vector2 *)&local_48);
    if (0.0 < fVar14) {
      fVar19 = local_48._4_4_ / fVar14;
      fVar14 = (float)local_48 / fVar14;
      fVar16 = (fVar2 - fVar17) * fVar14 - (fVar1 - fVar15) * fVar19;
      fVar18 = (fVar3 - fVar17) * fVar14 - (fVar20 - fVar15) * fVar19;
      if (_LC7 <= fVar16) {
        if (_LC6 < fVar16) {
          if (fVar18 <= _LC6) goto LAB_00100c9f;
        }
        else if (fVar16 != fVar18) {
LAB_00100c9f:
          fVar21 = _LC6;
          if (_LC6 <= ABS(fVar16) * _LC6) {
            fVar21 = ABS(fVar16) * _LC6;
          }
          if ((fVar21 <= ABS(fVar16 - fVar18)) &&
             (fVar20 = (fVar20 - fVar15) * fVar14 + (fVar3 - fVar17) * fVar19,
             fVar20 = ((((fVar1 - fVar15) * fVar14 + (fVar2 - fVar17) * fVar19) - fVar20) * fVar18)
                      / (fVar18 - fVar16) + fVar20, 0.0 <= fVar20)) {
            bVar11 = bVar11 + (fVar20 <= __LC8);
          }
        }
      }
      else if (_LC7 <= fVar18) goto LAB_00100c9f;
    }
    if (iVar6 <= (int)lVar13 + 1) {
      bVar11 = bVar11 & 1;
      goto LAB_00100d35;
    }
    lVar13 = lVar13 + 1;
  } while( true );
}



/* PolygonPathFinder::is_point_inside(Vector2 const&) const */

void __thiscall PolygonPathFinder::is_point_inside(PolygonPathFinder *this,Vector2 *param_1)

{
  _is_point_inside(this,param_1);
  return;
}



/* PolygonPathFinder::PolygonPathFinder() */

void __thiscall PolygonPathFinder::PolygonPathFinder(PolygonPathFinder *this)

{
  Resource::Resource((Resource *)this);
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00111e28;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x288) = 2;
  *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x270) = (undefined1  [16])0x0;
  return;
}



/* PolygonPathFinder::_bind_methods() */

void PolygonPathFinder::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  MethodBind *pMVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long in_FS_OFFSET;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  char *local_118;
  undefined8 local_110;
  undefined *local_108;
  long local_100;
  long *local_f8;
  int local_f0;
  long local_e8;
  undefined4 local_e0;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  char *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  char *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar4 = PTR__LC33_00112620;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_78 = "points";
  pcStack_70 = "connections";
  auStack_50._8_8_ = auStack_50._0_8_;
  auStack_50._0_8_ = &pcStack_70;
  uVar8 = (uint)&local_58;
  local_58 = &local_78;
  D_METHODP((char *)&local_108,(char ***)"setup",uVar8);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,Vector<Vector2>const&,Vector<int>const&>(setup);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_98 = "from";
  puStack_90 = &_LC36;
  auStack_50._0_8_ = &puStack_90;
  local_58 = &local_98;
  D_METHODP((char *)&local_108,(char ***)"find_path",uVar8);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,Vector<Vector2>,Vector2_const&,Vector2_const&>
                     (find_path);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_a8 = 0;
  local_b8 = "from";
  puStack_b0 = &_LC36;
  auStack_50._0_8_ = &puStack_b0;
  local_58 = &local_b8;
  D_METHODP((char *)&local_108,(char ***)"get_intersections",uVar8);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,Vector<Vector2>,Vector2_const&,Vector2_const&>
                     (get_intersections);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_78 = "point";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_108,(char ***)"get_closest_point",uVar8);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,Vector2,Vector2_const&>(get_closest_point);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_78 = "point";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_108,(char ***)"is_point_inside",uVar8);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,bool,Vector2_const&>(is_point_inside);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_c8 = 0;
  local_d8 = puVar4;
  pcStack_d0 = "penalty";
  auStack_50._0_8_ = &pcStack_d0;
  local_58 = &local_d8;
  D_METHODP((char *)&local_108,(char ***)"set_point_penalty",uVar8);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,int,float>(set_point_penalty);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_78 = "idx";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_108,(char ***)"get_point_penalty",uVar8);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,float,int>(get_point_penalty);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_108,(char ***)"get_bounds",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,Rect2>(get_bounds);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_78 = "data";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_108,(char ***)"_set_data",uVar8);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,Dictionary_const&>(_set_data);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_108,(char ***)"_get_data",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<PolygonPathFinder,Dictionary>(_get_data);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = &_LC4;
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = &_LC46;
  local_100 = 4;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (undefined *)CONCAT44(local_108._4_4_,0x1b);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (long *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 10;
    if (local_f0 == 0x11) {
      StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
      if (local_f8 == (long *)local_118) {
        if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_f8 = (long *)local_118;
      }
      goto LAB_00101ca5;
    }
  }
  local_e0 = 10;
  StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
LAB_00101ca5:
  local_148 = 0;
  local_118 = "PolygonPathFinder";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

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
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PolygonPathFinder::get_intersections(Vector2 const&, Vector2 const&) const */

Vector2 * PolygonPathFinder::get_intersections(Vector2 *param_1,Vector2 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  code *pcVar10;
  float *in_RCX;
  long lVar11;
  float *in_RDX;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_48;
  long local_40;
  
  iVar6 = *(int *)(param_2 + 0x28c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  if (iVar6 == 0) {
LAB_001020f9:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  piVar8 = *(int **)(param_2 + 0x268);
  lVar13 = 0;
  lVar9 = *(long *)(param_2 + 0x260);
  iVar7 = *piVar8;
  while (lVar11 = (long)iVar7, -1 < lVar11) {
    if (lVar9 == 0) goto LAB_001023b8;
    lVar12 = *(long *)(lVar9 + -8);
    if (lVar12 <= lVar11) goto LAB_0010233d;
    uVar4 = *(undefined8 *)(lVar9 + lVar11 * 0x40);
    lVar11 = (long)piVar8[lVar13 * 2 + 1];
    if ((lVar12 <= lVar11) || (lVar11 < 0)) goto LAB_0010233d;
    fVar1 = *in_RDX;
    fVar2 = in_RDX[1];
    uVar5 = *(undefined8 *)(lVar9 + lVar11 * 0x40);
    fVar20 = *in_RCX;
    fVar18 = (float)uVar4;
    fVar19 = (float)((ulong)uVar4 >> 0x20);
    local_48 = CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar19,(float)uVar5 - fVar18);
    fVar3 = in_RCX[1];
    fVar14 = (float)Vector2::dot((Vector2 *)&local_48);
    if (0.0 < fVar14) {
      fVar17 = local_48._4_4_ / fVar14;
      fVar14 = (float)local_48 / fVar14;
      fVar15 = (fVar2 - fVar19) * fVar14 - (fVar1 - fVar18) * fVar17;
      fVar16 = (fVar3 - fVar19) * fVar14 - (fVar20 - fVar18) * fVar17;
      if (_LC7 <= fVar15) {
        if (_LC6 < fVar15) {
          if (fVar16 <= _LC6) goto LAB_00102274;
        }
        else if (fVar15 != fVar16) {
LAB_00102274:
          fVar21 = _LC6;
          if (_LC6 <= ABS(fVar15) * _LC6) {
            fVar21 = ABS(fVar15) * _LC6;
          }
          if (((fVar21 <= ABS(fVar15 - fVar16)) &&
              (fVar20 = (fVar20 - fVar18) * fVar14 + (fVar3 - fVar19) * fVar17,
              fVar20 = ((((fVar1 - fVar18) * fVar14 + (fVar2 - fVar19) * fVar17) - fVar20) * fVar16)
                       / (fVar16 - fVar15) + fVar20, 0.0 <= fVar20)) && (fVar20 <= __LC8)) {
            Vector<Vector2>::push_back((Vector<Vector2> *)param_1);
          }
        }
      }
      else if (_LC7 <= fVar16) goto LAB_00102274;
    }
    if (iVar6 <= (int)lVar13 + 1) goto LAB_001020f9;
    lVar13 = lVar13 + 1;
    lVar9 = *(long *)(param_2 + 0x260);
    iVar7 = piVar8[lVar13 * 2];
  }
  if (lVar9 == 0) {
LAB_001023b8:
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar9 + -8);
  }
LAB_0010233d:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar12,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}



/* Error CowData<int>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<int> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<int> *pCVar10;
  CowData<int> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<int> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<int> *)(lVar12 * 4);
    if (pCVar4 != (CowData<int> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<int> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar5 = param_1 * 4 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<int> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<int> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00107532();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_001024f1;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_001025e2;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_001024f1:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001025e2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* CowData<PolygonPathFinder::Point>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<PolygonPathFinder::Point>::_copy_on_write(CowData<PolygonPathFinder::Point> *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar15 = 0x10;
  if (lVar2 * 0x40 != 0) {
    uVar15 = lVar2 * 0x40 - 1;
    uVar15 = uVar15 | uVar15 >> 1;
    uVar15 = uVar15 | uVar15 >> 2;
    uVar15 = uVar15 | uVar15 >> 4;
    uVar15 = uVar15 | uVar15 >> 8;
    uVar15 = uVar15 | uVar15 >> 0x10;
    uVar15 = (uVar15 | uVar15 >> 0x20) + 0x11;
  }
  puVar8 = (undefined8 *)Memory::alloc_static(uVar15,false);
  if (puVar8 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar14 = 0;
  *puVar8 = 1;
  puVar8[1] = lVar2;
  puVar13 = puVar8 + 2;
  if (lVar2 != 0) {
    do {
      puVar16 = (undefined8 *)(lVar14 * 0x40 + *(long *)this);
      uVar9 = *puVar16;
      puVar13[5] = 0;
      *(undefined1 (*) [16])(puVar13 + 1) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar13 + 3) = (undefined1  [16])0x0;
      uVar15 = puVar16[5];
      *puVar13 = uVar9;
      puVar13[5] = uVar15;
      if ((int)(uVar15 >> 0x20) != 0) {
        uVar1 = *(uint *)(hash_table_size_primes + (uVar15 & 0xffffffff) * 4);
        uVar15 = (ulong)uVar1 << 2;
        uVar9 = Memory::alloc_static(uVar15,false);
        puVar13[4] = uVar9;
        uVar9 = Memory::alloc_static(uVar15,false);
        puVar13[1] = uVar9;
        uVar9 = Memory::alloc_static(uVar15,false);
        puVar13[3] = uVar9;
        lVar10 = Memory::alloc_static(uVar15,false);
        puVar13[2] = lVar10;
        if (*(int *)((long)puVar13 + 0x2c) != 0) {
          lVar3 = puVar13[1];
          lVar4 = puVar16[1];
          lVar11 = 0;
          lVar5 = puVar16[3];
          lVar6 = puVar13[3];
          do {
            *(undefined4 *)(lVar3 + lVar11 * 4) = *(undefined4 *)(lVar4 + lVar11 * 4);
            *(undefined4 *)(lVar6 + lVar11 * 4) = *(undefined4 *)(lVar5 + lVar11 * 4);
            lVar11 = lVar11 + 1;
          } while ((uint)lVar11 < *(uint *)((long)puVar13 + 0x2c));
        }
        if (uVar1 != 0) {
          lVar3 = puVar16[4];
          lVar4 = puVar13[4];
          uVar12 = 0;
          lVar5 = puVar16[2];
          do {
            *(undefined4 *)(lVar4 + uVar12) = *(undefined4 *)(lVar3 + uVar12);
            *(undefined4 *)(lVar10 + uVar12) = *(undefined4 *)(lVar5 + uVar12);
            uVar12 = uVar12 + 4;
          } while (uVar15 != uVar12);
        }
      }
      lVar14 = lVar14 + 1;
      puVar13[6] = puVar16[6];
      *(undefined4 *)(puVar13 + 7) = *(undefined4 *)(puVar16 + 7);
      puVar13 = puVar13 + 8;
    } while (lVar2 != lVar14);
  }
  _unref(this);
  *(undefined8 **)this = puVar8 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PolygonPathFinder::find_path(Vector2 const&, Vector2 const&) */

Vector2 * PolygonPathFinder::find_path(Vector2 *param_1,Vector2 *param_2)

{
  long *plVar1;
  CowData<PolygonPathFinder::Point> *this;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  Vector<Vector2> *pVVar10;
  code *pcVar11;
  ulong uVar12;
  char cVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  long *in_RCX;
  long lVar19;
  Vector2 *pVVar20;
  long *in_RDX;
  Vector2 *extraout_RDX;
  long lVar21;
  Vector2 *pVVar22;
  int iVar23;
  Vector<Vector2> *pVVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  Vector2 *pVVar28;
  Vector2 *pVVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  Vector<Vector2> *pVVar37;
  uint uVar38;
  int iVar39;
  long in_FS_OFFSET;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  Vector<Vector2> *pVVar46;
  long local_148;
  Vector<Vector2> *local_128;
  uint local_b4;
  uint local_b0;
  int local_ac;
  ulong local_a8 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  Vector<Vector2> *local_70;
  Vector<Vector2> *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (Vector<Vector2> *)*in_RDX;
  *(undefined8 *)(param_1 + 8) = 0;
  local_68 = (Vector<Vector2> *)*in_RCX;
  cVar13 = _is_point_inside((PolygonPathFinder *)param_2,(Vector2 *)&local_70);
  if (cVar13 != '\0') {
    uVar8 = 0xffffffff;
    uVar7 = 0xffffffff;
LAB_00102a1b:
    cVar13 = _is_point_inside((PolygonPathFinder *)param_2,(Vector2 *)&local_68);
    if (cVar13 == '\0') {
      iVar32 = *(int *)(param_2 + 0x28c);
      if (iVar32 != 0) {
        lVar27 = *(long *)(param_2 + 0x268);
        pVVar24 = (Vector<Vector2> *)0x0;
        local_148._0_4_ = -NAN;
        uVar30 = 0xffffffff;
        pVVar37 = pVVar24;
        fVar40 = _LC11;
        while( true ) {
          lVar19 = (long)*(int *)(lVar27 + (long)pVVar24 * 8);
          lVar34 = *(long *)(param_2 + 0x260);
          if (lVar19 < 0) break;
          if (lVar34 == 0) goto LAB_00102e48;
          pVVar29 = *(Vector2 **)(lVar34 + -8);
          if ((long)pVVar29 <= lVar19) goto LAB_00102bb0;
          pVVar46 = *(Vector<Vector2> **)(lVar34 + lVar19 * 0x40);
          lVar19 = (long)*(int *)(lVar27 + 4 + (long)pVVar24 * 8);
          if (((long)pVVar29 <= lVar19) || (lVar19 < 0)) goto LAB_00102bb0;
          pVVar10 = *(Vector<Vector2> **)(lVar34 + lVar19 * 0x40);
          fVar43 = SUB84(pVVar46,0);
          fVar41 = (float)((ulong)pVVar46 >> 0x20);
          local_60 = CONCAT44((float)((ulong)local_68 >> 0x20) - fVar41,SUB84(local_68,0) - fVar43);
          local_58._0_4_ = SUB84(pVVar10,0) - fVar43;
          local_58._4_4_ = (float)((ulong)pVVar10 >> 0x20) - fVar41;
          fVar44 = (float)Vector2::length_squared();
          if (_LC18 <= fVar44) {
            fVar42 = (float)Vector2::dot((Vector2 *)&local_58);
            fVar42 = fVar42 / fVar44;
            if ((0.0 < fVar42) && (pVVar46 = pVVar10, fVar42 < __LC8)) {
              pVVar46 = (Vector<Vector2> *)
                        CONCAT44(fVar41 + fVar42 * local_58._4_4_,fVar43 + fVar42 * (float)local_58)
              ;
            }
          }
          local_58 = pVVar46;
          fVar44 = (float)Vector2::distance_squared_to((Vector2 *)&local_68);
          if (fVar44 < fVar40) {
            local_148._0_4_ = *(float *)(lVar27 + (long)pVVar24 * 8);
            uVar30 = *(uint *)(lVar27 + 4 + (long)pVVar24 * 8);
            pVVar37 = local_58;
            fVar40 = fVar44;
          }
          if (iVar32 <= (int)pVVar24 + 1) {
            uVar36 = *(uint *)(param_2 + 0x28c);
            local_68 = pVVar37;
            goto LAB_00102a4e;
          }
          pVVar24 = pVVar24 + 1;
        }
        goto LAB_00102b88;
      }
      local_68 = (Vector<Vector2> *)0x0;
    }
    else {
      local_148._0_4_ = -NAN;
      uVar36 = *(uint *)(param_2 + 0x28c);
      uVar30 = 0xffffffff;
LAB_00102a4e:
      pVVar22 = (Vector2 *)(ulong)uVar36;
      if (uVar36 != 0) {
        lVar33 = 0;
        lVar27 = *(long *)(param_2 + 0x268);
        while( true ) {
          lVar34 = *(long *)(lVar27 + lVar33 * 8);
          if ((lVar34 != CONCAT44(uVar8,uVar7)) && (lVar34 != CONCAT44(uVar30,(float)local_148))) {
            lVar19 = (long)*(int *)(lVar27 + lVar33 * 8);
            lVar34 = *(long *)(param_2 + 0x260);
            if (lVar19 < 0) goto joined_r0x00102e3b;
            if (lVar34 == 0) goto LAB_00102e48;
            pVVar29 = *(Vector2 **)(lVar34 + -8);
            if ((long)pVVar29 <= lVar19) goto LAB_00102bb0;
            local_58 = *(Vector<Vector2> **)(lVar34 + lVar19 * 0x40);
            lVar19 = (long)*(int *)(lVar27 + 4 + lVar33 * 8);
            if (((long)pVVar29 <= lVar19) || (lVar19 < 0)) goto LAB_00102bb0;
            bVar14 = Geometry2D::segment_intersects_segment
                               ((Vector2 *)&local_58,(Vector2 *)0x0,pVVar22,
                                (Vector2 *)(lVar19 * 0x40 + lVar34),pVVar29);
            pVVar22 = extraout_RDX;
            if (bVar14 != 0) {
              if (*(long *)(param_2 + 0x260) == 0) {
                lVar27 = 0;
                lVar33 = -2;
                goto LAB_0010348a;
              }
              lVar27 = *(long *)(*(long *)(param_2 + 0x260) + -8);
              uVar36 = (int)lVar27 - 2;
              uVar38 = (int)lVar27 - 1;
              lVar34 = (long)(int)uVar36;
              lVar33 = lVar34;
              local_b4 = uVar36;
              local_b0 = uVar38;
              if ((lVar27 <= lVar34) || (lVar34 < 0)) goto LAB_0010348a;
              this = (CowData<PolygonPathFinder::Point> *)(param_2 + 0x260);
              CowData<PolygonPathFinder::Point>::_copy_on_write(this);
              lVar27 = *(long *)(param_2 + 0x260);
              lVar21 = (ulong)uVar36 * 0x40;
              *(Vector<Vector2> **)(lVar27 + lVar21) = local_70;
              lVar26 = (long)(int)uVar38;
              if (lVar26 < 0) {
                if (lVar27 == 0) goto LAB_001034b2;
              }
              else {
                if (lVar27 == 0) goto LAB_001034b2;
                if (lVar26 < *(long *)(lVar27 + -8)) {
                  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
                  lVar27 = *(long *)(param_2 + 0x260);
                  lVar19 = (ulong)uVar38 * 0x40;
                  *(Vector<Vector2> **)(lVar27 + lVar19) = local_68;
                  if (lVar27 == 0) goto LAB_00103469;
                  lVar27 = *(long *)(lVar27 + -8);
                  if (lVar27 <= lVar34) goto LAB_0010348a;
                  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
                  lVar27 = *(long *)(param_2 + 0x260);
                  *(undefined4 *)(lVar27 + 0x30 + lVar21) = 0;
                  if (lVar27 == 0) goto LAB_001034b2;
                  lVar27 = *(long *)(lVar27 + -8);
                  lVar33 = lVar26;
                  if (lVar27 <= lVar26) goto LAB_0010348a;
                  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
                  lVar27 = *(long *)(param_2 + 0x260);
                  *(undefined4 *)(lVar27 + 0x30 + lVar19) = 0;
                  if (lVar27 == 0) goto LAB_00103469;
                  lVar27 = *(long *)(lVar27 + -8);
                  lVar33 = lVar34;
                  if (lVar27 <= lVar34) goto LAB_0010348a;
                  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
                  lVar27 = *(long *)(param_2 + 0x260);
                  *(undefined4 *)(lVar27 + 0x38 + lVar21) = 0xffffffff;
                  if (lVar27 == 0) goto LAB_001034b2;
                  lVar27 = *(long *)(lVar27 + -8);
                  lVar33 = lVar26;
                  if (lVar27 <= lVar26) goto LAB_0010348a;
                  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
                  lVar27 = *(long *)(param_2 + 0x260);
                  *(undefined4 *)(lVar27 + 0x38 + lVar19) = 0xffffffff;
                  if (lVar27 == 0) goto LAB_00103469;
                  lVar27 = *(long *)(lVar27 + -8);
                  lVar33 = lVar34;
                  if (lVar27 <= lVar34) goto LAB_0010348a;
                  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
                  lVar27 = *(long *)(param_2 + 0x260);
                  *(undefined4 *)(lVar27 + 0x34 + lVar21) = 0;
                  if (lVar27 == 0) goto LAB_001034b2;
                  lVar27 = *(long *)(lVar27 + -8);
                  lVar33 = lVar26;
                  if (lVar27 <= lVar26) goto LAB_0010348a;
                  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
                  lVar27 = *(long *)(param_2 + 0x260);
                  lVar25 = 0;
                  *(undefined4 *)(lVar27 + 0x34 + lVar19) = 0;
                  local_a8[0] = local_a8[0] & 0xffffffff00000000;
                  goto joined_r0x001031bd;
                }
              }
              lVar27 = *(long *)(lVar27 + -8);
              lVar33 = lVar26;
              goto LAB_0010348a;
            }
          }
          if ((int)uVar36 <= (int)lVar33 + 1) break;
          lVar33 = lVar33 + 1;
        }
      }
    }
    Vector<Vector2>::push_back(local_70,param_1);
    Vector<Vector2>::push_back(local_68,param_1);
    goto LAB_00102c17;
  }
  local_128 = (Vector<Vector2> *)0x0;
  iVar32 = *(int *)(param_2 + 0x28c);
  if (iVar32 == 0) {
    uVar8 = 0xffffffff;
    uVar7 = 0xffffffff;
LAB_00102a0e:
    local_70 = local_128;
    goto LAB_00102a1b;
  }
  lVar27 = *(long *)(param_2 + 0x268);
  lVar33 = 0;
  uVar8 = 0xffffffff;
  uVar7 = 0xffffffff;
  local_148._0_4_ = _LC11;
  while( true ) {
    lVar19 = (long)*(int *)(lVar27 + lVar33 * 8);
    lVar34 = *(long *)(param_2 + 0x260);
    if (lVar19 < 0) break;
    if (lVar34 == 0) goto LAB_00102e48;
    pVVar29 = *(Vector2 **)(lVar34 + -8);
    if ((long)pVVar29 <= lVar19) goto LAB_00102bb0;
    pVVar37 = *(Vector<Vector2> **)(lVar34 + lVar19 * 0x40);
    lVar19 = (long)*(int *)(lVar27 + 4 + lVar33 * 8);
    if ((lVar19 < 0) || ((long)pVVar29 <= lVar19)) goto LAB_00102bb0;
    pVVar24 = *(Vector<Vector2> **)(lVar34 + lVar19 * 0x40);
    fVar44 = SUB84(pVVar37,0);
    fVar43 = (float)((ulong)pVVar37 >> 0x20);
    local_60 = CONCAT44((float)((ulong)local_70 >> 0x20) - fVar43,SUB84(local_70,0) - fVar44);
    local_58._0_4_ = SUB84(pVVar24,0) - fVar44;
    local_58._4_4_ = (float)((ulong)pVVar24 >> 0x20) - fVar43;
    fVar40 = (float)Vector2::length_squared();
    if (_LC18 <= fVar40) {
      fVar41 = (float)Vector2::dot((Vector2 *)&local_58);
      fVar41 = fVar41 / fVar40;
      if ((0.0 < fVar41) && (pVVar37 = pVVar24, fVar41 < __LC8)) {
        pVVar37 = (Vector<Vector2> *)
                  CONCAT44(fVar43 + fVar41 * local_58._4_4_,fVar44 + fVar41 * (float)local_58);
      }
    }
    local_58 = pVVar37;
    fVar40 = (float)Vector2::distance_squared_to((Vector2 *)&local_70);
    if (fVar40 < (float)local_148) {
      uVar7 = *(uint *)(lVar27 + lVar33 * 8);
      uVar8 = *(uint *)(lVar27 + 4 + lVar33 * 8);
      local_128 = local_58;
      local_148._0_4_ = fVar40;
    }
    if (iVar32 <= (int)lVar33 + 1) goto LAB_00102a0e;
    lVar33 = lVar33 + 1;
  }
LAB_00102b88:
  if (lVar34 != 0) {
    pVVar29 = *(Vector2 **)(lVar34 + -8);
    goto LAB_00102bb0;
  }
  goto LAB_00102e48;
joined_r0x001031bd:
  if (lVar27 == 0) goto LAB_00103469;
  lVar27 = *(long *)(lVar27 + -8);
  if (lVar27 + -2 <= lVar25) {
    local_78 = 2;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    lVar33 = lVar34;
    if (lVar27 <= lVar34) goto LAB_0010348a;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    lVar27 = *(long *)(param_2 + 0x260);
    *(undefined4 *)(lVar27 + 0x30 + lVar21) = 0;
    if (lVar27 != 0) {
      lVar27 = *(long *)(lVar27 + -8);
      if (lVar27 <= lVar34) goto LAB_0010348a;
      CowData<PolygonPathFinder::Point>::_copy_on_write(this);
      lVar27 = *(long *)(param_2 + 0x260);
      lVar21 = lVar21 + lVar27;
      *(uint *)(lVar21 + 0x38) = uVar36;
      if (lVar27 == 0) goto LAB_00103f0c;
      pVVar29 = *(Vector2 **)(lVar27 + -8);
      lVar19 = lVar34;
      if ((long)pVVar29 <= lVar34) goto LAB_00102bb0;
      iVar32 = *(int *)(lVar21 + 0x2c);
      if (iVar32 == 0) goto LAB_001038cf;
      local_148 = *(long *)(lVar21 + 8);
      iVar39 = 0;
      goto LAB_00103afe;
    }
    goto LAB_00103469;
  }
  lVar35 = lVar25 * 0x40;
  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
  lVar27 = *(long *)(param_2 + 0x260);
  *(undefined4 *)(lVar27 + 0x38 + lVar35) = 0xffffffff;
  lVar33 = lVar25;
  if (lVar27 == 0) {
LAB_001036f7:
    lVar27 = 0;
    lVar33 = lVar25;
    goto LAB_0010348a;
  }
  lVar27 = *(long *)(lVar27 + -8);
  if (lVar27 <= lVar25) goto LAB_0010348a;
  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
  lVar27 = *(long *)(param_2 + 0x260);
  *(undefined4 *)((undefined8 *)(lVar27 + lVar35) + 6) = 0;
  lVar19 = lVar25;
  if (lVar27 == 0) {
LAB_00103619:
    pVVar29 = (Vector2 *)0x0;
    goto LAB_00102bb0;
  }
  pVVar29 = *(Vector2 **)(lVar27 + -8);
  if ((long)pVVar29 <= lVar25) goto LAB_00102bb0;
  uVar6 = *(undefined8 *)(lVar27 + lVar35);
  local_58 = (Vector<Vector2> *)
             CONCAT44((float)((ulong)uVar6 >> 0x20) * _LC64._4_4_ +
                      (float)((ulong)local_70 >> 0x20) * _LC64._4_4_,
                      (float)uVar6 * (float)_LC64 + SUB84(local_70,0) * (float)_LC64);
  bVar15 = _is_point_inside((PolygonPathFinder *)param_2,(Vector2 *)&local_58);
  lVar27 = *(long *)(param_2 + 0x260);
  if (lVar27 == 0) goto LAB_00103619;
  pVVar29 = *(Vector2 **)(lVar27 + -8);
  if ((long)pVVar29 <= lVar25) goto LAB_00102bb0;
  local_58 = (Vector<Vector2> *)
             CONCAT44((float)((ulong)*(undefined8 *)(lVar27 + lVar35) >> 0x20) * _LC64._4_4_ +
                      (float)((ulong)local_68 >> 0x20) * _LC64._4_4_,
                      (float)*(undefined8 *)(lVar27 + lVar35) * (float)_LC64 +
                      SUB84(local_68,0) * (float)_LC64);
  bVar16 = _is_point_inside((PolygonPathFinder *)param_2,(Vector2 *)&local_58);
  iVar32 = *(int *)(param_2 + 0x28c);
  uVar31 = (uint)lVar25;
  if (iVar32 != 0) {
    lVar35 = *(long *)(param_2 + 0x268);
    pVVar20 = (Vector2 *)0x0;
    lVar27 = *(long *)(param_2 + 0x260);
    pVVar22 = pVVar20;
    pVVar28 = pVVar29;
LAB_00103500:
    uVar18 = *(uint *)(lVar35 + (long)pVVar22 * 8);
    if (uVar18 != uVar31) {
      uVar9 = *(uint *)(lVar35 + 4 + (long)pVVar22 * 8);
      if (uVar9 != uVar31) {
        lVar19 = (long)(int)uVar18;
        if (lVar19 < 0) {
          if (lVar27 != 0) {
            pVVar29 = *(Vector2 **)(lVar27 + -8);
            goto LAB_00102bb0;
          }
        }
        else if (lVar27 != 0) {
          pVVar29 = *(Vector2 **)(lVar27 + -8);
          if ((long)pVVar29 <= lVar19) goto LAB_00102bb0;
          local_58 = *(Vector<Vector2> **)(lVar27 + lVar19 * 0x40);
          lVar19 = (long)(int)uVar9;
          if (((long)pVVar29 <= lVar19) || (lVar19 < 0)) goto LAB_00102bb0;
          if (bVar15 != 0) {
            pVVar20 = (Vector2 *)(ulong)uVar7;
            pVVar28 = (Vector2 *)CONCAT71((int7)((ulong)pVVar28 >> 8),uVar7 != uVar18);
            if (((uVar18 == uVar8 || uVar9 == uVar8) || uVar7 == uVar18) || (uVar7 == uVar9)) {
              bVar17 = bVar16;
              if (bVar16 == 0) goto LAB_001035ab;
              goto LAB_001035e9;
            }
            lVar19 = lVar25;
            if ((long)pVVar29 <= lVar25) goto LAB_00102bb0;
            bVar17 = Geometry2D::segment_intersects_segment
                               ((Vector2 *)&local_58,(Vector2 *)0x0,(Vector2 *)(ulong)uVar9,pVVar20,
                                pVVar28);
            bVar17 = bVar17 ^ 1;
            pVVar29 = pVVar28;
            if (bVar16 != 0) {
              lVar27 = *(long *)(param_2 + 0x260);
              uVar18 = *(uint *)(lVar35 + (long)pVVar22 * 8);
              goto LAB_001035e9;
            }
LAB_001036ae:
            if (bVar17 != 0) {
LAB_001036b7:
              lVar27 = *(long *)(param_2 + 0x260);
              pVVar28 = pVVar29;
              bVar15 = bVar17;
              goto LAB_001035ab;
            }
            lVar27 = *(long *)(param_2 + 0x260);
            goto LAB_0010344a;
          }
          bVar17 = bVar15;
          if (bVar16 == 0) goto LAB_0010344a;
LAB_001035e9:
          bVar15 = bVar17;
          bVar16 = bVar14;
          if (uVar18 != uVar30) {
            uVar9 = *(uint *)(lVar35 + 4 + (long)pVVar22 * 8);
            if ((uVar9 != uVar30 && (float)uVar18 != (float)local_148) &&
               ((float)uVar9 != (float)local_148)) {
              if (lVar27 == 0) {
                pVVar29 = (Vector2 *)0x0;
                lVar19 = lVar25;
              }
              else {
                pVVar29 = *(Vector2 **)(lVar27 + -8);
                lVar19 = lVar25;
                if (lVar25 < (long)pVVar29) {
                  bVar15 = Geometry2D::segment_intersects_segment
                                     ((Vector2 *)&local_58,(Vector2 *)0x0,(Vector2 *)(ulong)uVar9,
                                      pVVar20,pVVar29);
                  bVar16 = bVar15 ^ 1;
                  if (bVar15 == 1) goto LAB_001036ae;
                  goto LAB_001036b7;
                }
              }
              goto LAB_00102bb0;
            }
          }
          goto LAB_001035ab;
        }
        pVVar29 = (Vector2 *)0x0;
        goto LAB_00102bb0;
      }
    }
LAB_001035ab:
    if (iVar32 <= (int)pVVar22 + 1) goto LAB_0010330d;
    pVVar22 = pVVar22 + 1;
    goto LAB_00103500;
  }
  lVar27 = *(long *)(param_2 + 0x260);
LAB_0010330d:
  if (bVar15 != 0) {
    if (lVar27 == 0) goto LAB_001036f7;
    lVar27 = *(long *)(lVar27 + -8);
    if (lVar27 <= lVar25) goto LAB_0010348a;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_98);
    if (*(long *)(param_2 + 0x260) == 0) {
      lVar27 = 0;
      lVar33 = lVar34;
      goto LAB_0010348a;
    }
    lVar27 = *(long *)(*(long *)(param_2 + 0x260) + -8);
    lVar33 = lVar34;
    if (lVar27 <= lVar34) goto LAB_0010348a;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_98);
    lVar27 = *(long *)(param_2 + 0x260);
  }
  if (bVar16 != 0) {
    if (lVar27 == 0) goto LAB_001036f7;
    lVar27 = *(long *)(lVar27 + -8);
    lVar33 = lVar25;
    if (lVar27 <= lVar25) goto LAB_0010348a;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_98);
    if (*(long *)(param_2 + 0x260) == 0) goto LAB_001034b2;
    lVar27 = *(long *)(*(long *)(param_2 + 0x260) + -8);
    lVar33 = lVar26;
    if (lVar27 <= lVar26) goto LAB_0010348a;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_98);
    lVar27 = *(long *)(param_2 + 0x260);
  }
LAB_0010344a:
  lVar25 = lVar25 + 1;
  local_a8[0] = CONCAT44(local_a8[0]._4_4_,uVar31 + 1);
  goto joined_r0x001031bd;
LAB_001034b2:
  lVar27 = 0;
  lVar33 = lVar26;
  goto LAB_0010348a;
LAB_00103afe:
  if ((local_148 == 0) && (iVar39 == -1)) goto LAB_001038cf;
  piVar2 = (int *)(local_148 + (long)iVar39 * 4);
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_a8);
  lVar19 = (long)*piVar2;
  if (lVar19 < 0) {
    lVar34 = *(long *)(param_2 + 0x260);
    goto joined_r0x00102e3b;
  }
  lVar34 = *(long *)(param_2 + 0x260);
  if (lVar34 == 0) goto LAB_00102e48;
  if (*(long *)(lVar34 + -8) <= lVar19) goto LAB_00102ec9;
  uVar45 = Vector2::distance_to((Vector2 *)&local_70);
  lVar19 = (long)*piVar2;
  if (-1 < lVar19) {
    lVar34 = *(long *)(param_2 + 0x260);
    if (lVar34 == 0) goto LAB_00103c74;
    lVar33 = lVar19;
    if (lVar19 < *(long *)(lVar34 + -8)) {
      CowData<PolygonPathFinder::Point>::_copy_on_write(this);
      lVar34 = *(long *)(param_2 + 0x260);
      lVar33 = (long)*piVar2;
      *(undefined4 *)(lVar34 + 0x30 + lVar19 * 0x40) = uVar45;
      lVar19 = lVar33;
      if (lVar33 < 0) goto joined_r0x00103c8b;
      if (lVar34 == 0) {
        lVar27 = 0;
        goto LAB_0010348a;
      }
      if (*(long *)(lVar34 + -8) <= lVar33) goto LAB_00103c48;
      iVar39 = iVar39 + 1;
      CowData<PolygonPathFinder::Point>::_copy_on_write(this);
      *(uint *)(lVar33 * 0x40 + *(long *)(param_2 + 0x260) + 0x38) = uVar36;
      if (iVar32 <= iVar39) {
        iVar39 = -1;
        iVar32 = 0;
        local_148 = 0;
      }
      goto LAB_00103afe;
    }
    goto LAB_00103c48;
  }
  lVar34 = *(long *)(param_2 + 0x260);
joined_r0x00103c8b:
  lVar33 = lVar19;
  if (lVar34 == 0) {
LAB_00103c74:
    lVar27 = 0;
    lVar33 = lVar19;
  }
  else {
LAB_00103c48:
    lVar27 = *(long *)(lVar34 + -8);
  }
  goto LAB_0010348a;
LAB_001038cf:
  iVar32 = local_78._4_4_;
  if (local_78._4_4_ == 0) goto LAB_001039da;
  local_ac = -1;
  uVar6 = local_98._0_8_;
  lVar27 = 0;
  fVar40 = _LC61;
  while( true ) {
    lVar19 = (long)*(int *)(uVar6 + lVar27 * 4);
    lVar34 = *(long *)(param_2 + 0x260);
    if (lVar19 < 0) goto joined_r0x00102e3b;
    if (lVar34 == 0) goto LAB_00102e48;
    if (*(long *)(lVar34 + -8) <= lVar19) goto LAB_00102ec9;
    pVVar29 = (Vector2 *)(lVar34 + lVar19 * 0x40);
    fVar44 = *(float *)(pVVar29 + 0x30);
    fVar43 = (float)Vector2::distance_to(pVVar29);
    fVar44 = fVar43 + fVar44 + *(float *)(pVVar29 + 0x34);
    if (fVar44 < fVar40) {
      local_ac = *(int *)(uVar6 + lVar27 * 4);
      fVar40 = fVar44;
    }
    iVar39 = local_ac;
    if (iVar32 <= (int)lVar27 + 1) break;
    lVar27 = lVar27 + 1;
  }
  lVar19 = (long)local_ac;
  lVar34 = *(long *)(param_2 + 0x260);
  if (lVar19 < 0) goto joined_r0x00102e3b;
  if (lVar34 == 0) goto LAB_00102e48;
  if (*(long *)(lVar34 + -8) <= lVar19) goto LAB_00102ec9;
  pVVar29 = (Vector2 *)(lVar34 + lVar19 * 0x40);
  iVar32 = *(int *)(pVVar29 + 0x2c);
  if (iVar32 != 0) {
    iVar23 = 0;
    lVar27 = *(long *)(pVVar29 + 8);
    while ((iVar23 != -1 || (lVar27 != 0))) {
      puVar3 = (uint *)(lVar27 + (long)iVar23 * 4);
      lVar33 = (long)(int)*puVar3;
      lVar34 = *(long *)(param_2 + 0x260);
      lVar19 = lVar33;
      if (lVar33 < 0) goto joined_r0x00103c8b;
      if (lVar34 == 0) {
        lVar27 = 0;
        goto LAB_0010348a;
      }
      if (*(long *)(lVar34 + -8) <= lVar33) goto LAB_00103c48;
      CowData<PolygonPathFinder::Point>::_copy_on_write(this);
      lVar33 = lVar33 * 0x40 + *(long *)(param_2 + 0x260);
      fVar40 = (float)Vector2::distance_to(pVVar29);
      fVar40 = fVar40 + *(float *)(pVVar29 + 0x30);
      if (*(int *)(lVar33 + 0x38) == -1) {
        *(int *)(lVar33 + 0x38) = iVar39;
        *(float *)(lVar33 + 0x30) = fVar40;
        HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_a8);
        if (uVar38 == *puVar3) {
          lVar27 = *(long *)(param_2 + 0x260);
          lVar19 = lVar26;
          if (lVar27 == 0) {
            pVVar29 = (Vector2 *)0x0;
            goto LAB_00102bb0;
          }
          pVVar29 = *(Vector2 **)(lVar27 + -8);
          if ((long)pVVar29 <= lVar26) goto LAB_00102bb0;
          Vector<Vector2>::push_back(*(Vector<Vector2> **)(lVar27 + (ulong)uVar38 * 0x40),param_1);
          lVar34 = (long)(int)uVar38;
          goto LAB_00104076;
        }
      }
      else if (fVar40 < *(float *)(lVar33 + 0x30)) {
        *(int *)(lVar33 + 0x38) = iVar39;
        *(float *)(lVar33 + 0x30) = fVar40;
      }
      iVar23 = iVar23 + 1;
      if (iVar32 <= iVar23) {
        iVar23 = -1;
        iVar32 = 0;
        lVar27 = 0;
      }
    }
  }
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase
            ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)local_98,&local_ac);
  goto LAB_001038cf;
LAB_001039da:
  cVar13 = is_print_verbose_enabled();
  if (cVar13 != '\0') {
    Variant::Variant((Variant *)&local_58,"Open list empty.");
    stringify_variants((Variant *)local_a8);
    __print_line((String *)local_a8);
    uVar12 = local_a8[0];
    if (local_a8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_a8[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8[0] = 0;
        Memory::free_static((void *)(uVar12 - 0x10),false);
      }
    }
    if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
      Variant::_clear_internal();
    }
  }
  goto LAB_001039eb;
LAB_00103f0c:
  pVVar29 = (Vector2 *)0x0;
  lVar19 = lVar34;
  goto LAB_00102bb0;
  while( true ) {
    pVVar29 = *(Vector2 **)(lVar27 + -8);
    lVar19 = lVar34;
    if ((long)pVVar29 <= lVar34) goto LAB_00102bb0;
    uVar7 = *(uint *)(lVar27 + 0x38 + lVar34 * 0x40);
    lVar34 = (long)(int)uVar7;
    lVar19 = lVar34;
    if ((lVar34 < 0) || ((long)pVVar29 <= lVar34)) goto LAB_00102bb0;
    Vector<Vector2>::push_back(*(Vector<Vector2> **)(lVar27 + lVar34 * 0x40),param_1);
    if (uVar36 == uVar7) break;
LAB_00104076:
    lVar27 = *(long *)(param_2 + 0x260);
    if (lVar27 == 0) goto LAB_00103f0c;
  }
  lVar27 = *(long *)(param_1 + 8);
  for (lVar33 = 0; (lVar27 != 0 && (lVar33 < *(long *)(lVar27 + -8) / 2)); lVar33 = lVar33 + 1) {
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(param_1 + 8));
    lVar27 = *(long *)(param_1 + 8);
    if (lVar27 == 0) {
      lVar34 = 0;
    }
    else {
      lVar34 = *(long *)(lVar27 + -8);
    }
    puVar4 = (undefined8 *)(lVar27 + lVar33 * 8);
    puVar5 = (undefined8 *)(lVar27 + -8 + (lVar34 - lVar33) * 8);
    uVar6 = *puVar4;
    *puVar4 = *puVar5;
    *puVar5 = uVar6;
  }
LAB_001039eb:
  lVar27 = *(long *)(param_2 + 0x260);
  lVar33 = 0;
  while (lVar27 != 0) {
    lVar27 = *(long *)(lVar27 + -8);
    if (lVar27 + -2 <= lVar33) goto LAB_00103c92;
    lVar34 = lVar33 * 0x40;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    lVar27 = *(long *)(param_2 + 0x260);
    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase
              ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
               (lVar27 + 8 + lVar34),(int *)&local_b4);
    if (lVar27 == 0) {
LAB_00103c15:
      lVar27 = 0;
      goto LAB_0010348a;
    }
    lVar27 = *(long *)(lVar27 + -8);
    if (lVar27 <= lVar33) goto LAB_0010348a;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    lVar27 = *(long *)(param_2 + 0x260);
    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase
              ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
               (lVar27 + 8 + lVar34),(int *)&local_b0);
    if (lVar27 == 0) goto LAB_00103c15;
    lVar27 = *(long *)(lVar27 + -8);
    if (lVar27 <= lVar33) goto LAB_0010348a;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    lVar27 = *(long *)(param_2 + 0x260);
    *(undefined4 *)(lVar27 + 0x38 + lVar34) = 0xffffffff;
    if (lVar27 == 0) goto LAB_00103c15;
    lVar27 = *(long *)(lVar27 + -8);
    if (lVar27 <= lVar33) goto LAB_0010348a;
    lVar33 = lVar33 + 1;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    lVar27 = *(long *)(param_2 + 0x260);
    *(undefined4 *)(lVar27 + 0x30 + lVar34) = 0;
  }
  lVar27 = 0;
LAB_00103c92:
  lVar34 = (long)(int)local_b4;
  lVar33 = lVar34;
  if ((lVar27 <= lVar34) || (lVar34 < 0)) goto LAB_0010348a;
  lVar19 = lVar34 * 0x40;
  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
  lVar27 = *(long *)(param_2 + 0x260);
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::clear
            ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
             (lVar27 + 8 + lVar19));
  if (lVar27 != 0) {
    lVar27 = *(long *)(lVar27 + -8);
    if (lVar27 <= lVar34) goto LAB_0010348a;
    CowData<PolygonPathFinder::Point>::_copy_on_write(this);
    lVar27 = *(long *)(param_2 + 0x260);
    *(undefined4 *)(lVar27 + 0x38 + lVar19) = 0xffffffff;
    if (lVar27 != 0) {
      lVar27 = *(long *)(lVar27 + -8);
      if (lVar27 <= lVar34) goto LAB_0010348a;
      CowData<PolygonPathFinder::Point>::_copy_on_write(this);
      lVar27 = *(long *)(param_2 + 0x260);
      lVar34 = (long)(int)local_b0;
      *(undefined4 *)(lVar27 + 0x30 + lVar19) = 0;
      lVar33 = lVar34;
      if (lVar34 < 0) {
        if (lVar27 != 0) {
LAB_00103ee7:
          lVar27 = *(long *)(lVar27 + -8);
          goto LAB_0010348a;
        }
      }
      else if (lVar27 != 0) {
        if (*(long *)(lVar27 + -8) <= lVar34) goto LAB_00103ee7;
        lVar19 = lVar34 * 0x40;
        CowData<PolygonPathFinder::Point>::_copy_on_write(this);
        lVar27 = *(long *)(param_2 + 0x260);
        HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::clear
                  ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
                   (lVar27 + 8 + lVar19));
        if (lVar27 != 0) {
          lVar27 = *(long *)(lVar27 + -8);
          if (lVar27 <= lVar34) goto LAB_0010348a;
          CowData<PolygonPathFinder::Point>::_copy_on_write(this);
          lVar27 = *(long *)(param_2 + 0x260);
          *(undefined4 *)(lVar27 + 0x38 + lVar19) = 0xffffffff;
          if (lVar27 != 0) {
            lVar27 = *(long *)(lVar27 + -8);
            if (lVar34 < lVar27) {
              CowData<PolygonPathFinder::Point>::_copy_on_write(this);
              *(undefined4 *)(*(long *)(param_2 + 0x260) + 0x30 + lVar19) = 0;
              if ((void *)local_98._0_8_ != (void *)0x0) {
                uVar6 = local_88._8_8_;
                if (local_78._4_4_ != 0) {
                  uVar7 = *(uint *)(hash_table_size_primes + (local_78 & 0xffffffff) * 4);
                  for (lVar27 = 0; (uint)lVar27 < uVar7; lVar27 = lVar27 + 1) {
                    *(undefined4 *)(local_88._8_8_ + lVar27 * 4) = 0;
                  }
                }
                Memory::free_static((void *)local_98._0_8_,false);
                Memory::free_static((void *)local_88._0_8_,false);
                Memory::free_static((void *)local_98._8_8_,false);
                Memory::free_static((void *)uVar6,false);
              }
LAB_00102c17:
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                return param_1;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            goto LAB_0010348a;
          }
        }
      }
    }
  }
LAB_00103469:
  lVar27 = 0;
  lVar33 = lVar34;
LAB_0010348a:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar33,lVar27,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
joined_r0x00102e3b:
  if (lVar34 != 0) {
LAB_00102ec9:
    pVVar29 = *(Vector2 **)(lVar34 + -8);
    goto LAB_00102bb0;
  }
LAB_00102e48:
  pVVar29 = (Vector2 *)0x0;
LAB_00102bb0:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar19,(long)pVVar29,"p_index","size()","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}



/* PolygonPathFinder::set_point_penalty(int, float) */

void __thiscall
PolygonPathFinder::set_point_penalty(PolygonPathFinder *this,int param_1,float param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1;
  lVar2 = *(long *)(this + 0x260);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8) + -2;
      goto LAB_001041fd;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8) + -2;
    if (lVar1 < lVar2) {
      CowData<PolygonPathFinder::Point>::_copy_on_write
                ((CowData<PolygonPathFinder::Point> *)(this + 0x260));
      *(float *)(lVar1 * 0x40 + *(long *)(this + 0x260) + 0x34) = param_2;
      return;
    }
    goto LAB_001041fd;
  }
  lVar2 = -2;
LAB_001041fd:
  _err_print_index_error
            ("set_point_penalty","scene/resources/2d/polygon_path_finder.cpp",0x218,lVar1,lVar2,
             "p_point","points.size() - 2","",false,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<PolygonPathFinder::Point>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<PolygonPathFinder::Point>::resize<false>
          (CowData<PolygonPathFinder::Point> *this,long param_1)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar4 = 0;
    lVar12 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar12 = lVar4 * 0x40;
    if (lVar12 != 0) {
      uVar13 = lVar12 - 1U | lVar12 - 1U >> 1;
      uVar13 = uVar13 | uVar13 >> 2;
      uVar13 = uVar13 | uVar13 >> 4;
      uVar13 = uVar13 | uVar13 >> 8;
      uVar13 = uVar13 | uVar13 >> 0x10;
      lVar12 = (uVar13 | uVar13 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x40 != 0) {
    uVar13 = param_1 * 0x40 - 1;
    uVar13 = uVar13 | uVar13 >> 1;
    uVar13 = uVar13 | uVar13 >> 2;
    uVar13 = uVar13 | uVar13 >> 4;
    uVar13 = uVar13 | uVar13 >> 8;
    uVar13 = uVar13 | uVar13 >> 0x10;
    uVar13 = uVar13 | uVar13 >> 0x20;
    lVar7 = uVar13 + 1;
    if (lVar7 != 0) {
      if (param_1 <= lVar4) {
        lVar4 = *(long *)this;
        uVar13 = param_1;
        while( true ) {
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (*(ulong *)(lVar4 + -8) <= uVar13) break;
          while( true ) {
            lVar11 = uVar13 * 0x40 + lVar4;
            pvVar1 = *(void **)(lVar11 + 8);
            if (pvVar1 != (void *)0x0) break;
            uVar13 = uVar13 + 1;
            if (*(ulong *)(lVar4 + -8) <= uVar13) goto LAB_001043e8;
          }
          if (*(int *)(lVar11 + 0x2c) != 0) {
            if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar11 + 0x28) * 4) != 0) {
              memset(*(void **)(lVar11 + 0x20),0,
                     (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar11 + 0x28) * 4)
                     << 2);
            }
            *(undefined4 *)(lVar11 + 0x2c) = 0;
          }
          uVar13 = uVar13 + 1;
          Memory::free_static(pvVar1,false);
          Memory::free_static(*(void **)(lVar11 + 0x18),false);
          Memory::free_static(*(void **)(lVar11 + 0x10),false);
          Memory::free_static(*(void **)(lVar11 + 0x20),false);
          lVar4 = *(long *)this;
        }
LAB_001043e8:
        if (lVar7 != lVar12) {
          iVar3 = _realloc(this,lVar7);
          if (iVar3 != 0) {
            return;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return;
      }
      if (lVar7 == lVar12) {
LAB_001044eb:
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
          FUN_0010755e();
          return;
        }
        lVar4 = puVar8[-1];
        if (param_1 <= lVar4) goto LAB_001044c3;
      }
      else {
        if (lVar4 != 0) {
          iVar3 = _realloc(this,lVar7);
          if (iVar3 != 0) {
            return;
          }
          goto LAB_001044eb;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar13 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar10 = 0x171;
          pcVar9 = "Parameter \"mem_new\" is null.";
          goto LAB_00104562;
        }
        puVar8 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar4 = 0;
      }
      uVar10 = _LC25;
      puVar5 = puVar8 + lVar4 * 8;
      do {
        *puVar5 = 0;
        puVar6 = puVar5 + 8;
        *(undefined1 (*) [16])(puVar5 + 1) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 3) = (undefined1  [16])0x0;
        puVar5[5] = uVar10;
        puVar5[6] = 0;
        *(undefined4 *)(puVar5 + 7) = 0;
        puVar5 = puVar6;
      } while (puVar6 != puVar8 + param_1 * 8);
LAB_001044c3:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar10 = 0x16a;
  pcVar9 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00104562:
  _err_print_error("resize","./core/templates/cowdata.h",uVar10,pcVar9,0,0);
  return;
}



/* PolygonPathFinder::_set_data(Dictionary const&) */

void PolygonPathFinder::_set_data(Dictionary *param_1)

{
  long *plVar1;
  CowData<PolygonPathFinder::Point> *this;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  Variant *this_00;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  Variant *in_RSI;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined8 in_XMM1_Qa;
  CowData<PolygonPathFinder::Point> *local_d8;
  Variant local_90 [8];
  Variant local_88 [8];
  long local_80;
  Variant local_78 [8];
  int *local_70;
  Variant local_68 [8];
  long local_60;
  int local_58;
  int local_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)&local_58,"points");
  cVar5 = Dictionary::has(in_RSI);
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x187;
      pcVar9 = "Condition \"!p_data.has(\"points\")\" is true.";
LAB_00104a11:
      _err_print_error("_set_data","scene/resources/2d/polygon_path_finder.cpp",uVar10,pcVar9,0,0);
      return;
    }
    goto LAB_00104e4a;
  }
  Variant::Variant((Variant *)&local_58,"connections");
  cVar5 = Dictionary::has(in_RSI);
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x188;
      pcVar9 = "Condition \"!p_data.has(\"connections\")\" is true.";
      goto LAB_00104a11;
    }
    goto LAB_00104e4a;
  }
  Variant::Variant((Variant *)&local_58,"segments");
  cVar5 = Dictionary::has(in_RSI);
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x189;
      pcVar9 = "Condition \"!p_data.has(\"segments\")\" is true.";
      goto LAB_00104a11;
    }
    goto LAB_00104e4a;
  }
  Variant::Variant((Variant *)&local_58,"bounds");
  cVar5 = Dictionary::has(in_RSI);
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x18a;
      pcVar9 = "Condition \"!p_data.has(\"bounds\")\" is true.";
      goto LAB_00104a11;
    }
    goto LAB_00104e4a;
  }
  Variant::Variant((Variant *)&local_58,"points");
  Dictionary::operator[](in_RSI);
  Variant::operator_cast_to_Vector(local_88);
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_58,"connections");
  Dictionary::operator[](in_RSI);
  Variant::operator_cast_to_Array(local_90);
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  iVar6 = Array::size();
  if (local_80 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(local_80 + -8);
  }
  if (iVar6 == lVar11) {
    iVar6 = Array::size();
    if (iVar6 == 0) {
      if (local_80 == 0) {
        CowData<PolygonPathFinder::Point>::resize<false>
                  ((CowData<PolygonPathFinder::Point> *)(param_1 + 0x260),2);
        iVar6 = 0;
      }
      else {
        this = (CowData<PolygonPathFinder::Point> *)(param_1 + 0x260);
        iVar6 = (int)*(undefined8 *)(local_80 + -8);
        CowData<PolygonPathFinder::Point>::resize<false>(this,(long)(iVar6 + 2));
        lVar11 = local_80;
        if (0 < iVar6) {
          uVar8 = 0;
          do {
            if (*(long *)(param_1 + 0x260) == 0) {
LAB_001048b7:
              lVar7 = 0;
              goto LAB_001048d8;
            }
            lVar7 = *(long *)(*(long *)(param_1 + 0x260) + -8);
            if (lVar7 <= (long)uVar8) goto LAB_001048d8;
            CowData<PolygonPathFinder::Point>::_copy_on_write(this);
            *(undefined8 *)(*(long *)(param_1 + 0x260) + uVar8 * 0x40) =
                 *(undefined8 *)(lVar11 + uVar8 * 8);
            Array::operator[]((int)local_90);
            Variant::operator_cast_to_Vector(local_78);
            if (local_70 != (int *)0x0) {
              if (0 < (int)*(undefined8 *)(local_70 + -2)) {
                piVar2 = local_70 + (ulong)((int)*(undefined8 *)(local_70 + -2) - 1) + 1;
                piVar12 = local_70;
                do {
                  if (*(long *)(param_1 + 0x260) == 0) goto LAB_001048b7;
                  lVar7 = *(long *)(*(long *)(param_1 + 0x260) + -8);
                  if (lVar7 <= (long)uVar8) goto LAB_001048d8;
                  CowData<PolygonPathFinder::Point>::_copy_on_write(this);
                  piVar12 = piVar12 + 1;
                  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert
                            ((int *)local_68);
                } while (piVar12 != piVar2);
                if (local_70 == (int *)0x0) goto LAB_001049b3;
              }
              piVar2 = local_70;
              LOCK();
              plVar1 = (long *)(local_70 + -4);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = (int *)0x0;
                Memory::free_static(piVar2 + -4,false);
              }
            }
LAB_001049b3:
            bVar14 = iVar6 - 1 != uVar8;
            uVar8 = uVar8 + 1;
          } while (bVar14);
        }
      }
      local_d8 = (CowData<PolygonPathFinder::Point> *)(param_1 + 0x260);
      Variant::Variant((Variant *)&local_58,"penalties");
      cVar5 = Dictionary::has(in_RSI);
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar5 != '\0') {
        Variant::Variant((Variant *)&local_58,"penalties");
        Dictionary::operator[](in_RSI);
        Variant::operator_cast_to_Vector(local_68);
        if (Variant::needs_deinit[local_58] != '\0') {
          Variant::_clear_internal();
        }
        lVar11 = local_60;
        if (local_60 != 0) {
          if (((long)iVar6 == *(ulong *)(local_60 + -8)) && (0 < iVar6)) {
            lVar7 = *(long *)(param_1 + 0x260);
            uVar8 = 0;
            do {
              uVar3 = *(undefined4 *)(lVar11 + uVar8 * 4);
              if (lVar7 == 0) {
                lVar7 = 0;
LAB_001048d8:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,uVar8,lVar7,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              lVar7 = *(long *)(lVar7 + -8);
              if (lVar7 <= (long)uVar8) goto LAB_001048d8;
              CowData<PolygonPathFinder::Point>::_copy_on_write(local_d8);
              uVar13 = uVar8 + 1;
              lVar7 = *(long *)(param_1 + 0x260);
              *(undefined4 *)(lVar7 + 0x34 + uVar8 * 0x40) = uVar3;
              uVar8 = uVar13;
            } while (uVar13 != (long)iVar6);
            if (local_60 == 0) goto LAB_00104cbe;
          }
          lVar11 = local_60;
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
      }
LAB_00104cbe:
      Variant::Variant((Variant *)&local_58,"segments");
      Dictionary::operator[](in_RSI);
      Variant::operator_cast_to_Vector(local_78);
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
      if (local_70 != (int *)0x0) {
        if ((*(ulong *)(local_70 + -2) & 1) != 0) {
          _err_print_error("_set_data","scene/resources/2d/polygon_path_finder.cpp",0x1ae,
                           "Condition \"sc & 1\" is true.",0,0);
          CowData<int>::_unref((CowData<int> *)&local_70);
          goto LAB_00104925;
        }
        iVar6 = (int)*(ulong *)(local_70 + -2);
        if (0 < iVar6) {
          piVar2 = local_70 + (ulong)(iVar6 - 1U >> 1) * 2 + 2;
          piVar12 = local_70;
          do {
            iVar6 = piVar12[1];
            local_54 = *piVar12;
            local_58 = iVar6;
            if (local_54 <= iVar6) {
              local_58 = local_54;
              local_54 = iVar6;
            }
            piVar12 = piVar12 + 2;
            HashSet<PolygonPathFinder::Edge,PolygonPathFinder::Edge,HashMapComparatorDefault<PolygonPathFinder::Edge>>
            ::insert((Edge *)local_68);
          } while (piVar12 != piVar2);
        }
      }
      Variant::Variant((Variant *)&local_58,"bounds");
      this_00 = (Variant *)Dictionary::operator[](in_RSI);
      uVar10 = Variant::operator_cast_to_Rect2(this_00);
      *(undefined8 *)(param_1 + 0x248) = uVar10;
      *(undefined8 *)(param_1 + 0x250) = in_XMM1_Qa;
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<int>::_unref((CowData<int> *)&local_70);
    }
  }
  else {
    _err_print_error("_set_data","scene/resources/2d/polygon_path_finder.cpp",399,
                     "Condition \"c.size() != p.size()\" is true.",0,0);
  }
LAB_00104925:
  Array::~Array((Array *)local_90);
  lVar11 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104e4a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PolygonPathFinder::setup(Vector<Vector2> const&, Vector<int> const&) */

void __thiscall PolygonPathFinder::setup(PolygonPathFinder *this,Vector *param_1,Vector *param_2)

{
  CowData<PolygonPathFinder::Point> *this_00;
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  int iVar20;
  char cVar21;
  uint uVar22;
  ulong uVar23;
  Vector2 *pVVar24;
  Vector2 *pVVar25;
  int iVar26;
  int iVar27;
  Vector2 *pVVar28;
  long lVar29;
  Vector2 *pVVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  long lVar37;
  Vector2 *pVVar38;
  long in_FS_OFFSET;
  float fVar39;
  float fVar40;
  float fVar41;
  Vector2 *local_d0;
  uint local_c4;
  Edge local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 8) == 0) || ((*(byte *)(*(long *)(param_2 + 8) + -8) & 1) == 0)) {
    this_00 = (CowData<PolygonPathFinder::Point> *)(this + 0x260);
    if ((*(long *)(this + 0x260) != 0) && (*(long *)(*(long *)(this + 0x260) + -8) != 0)) {
      CowData<PolygonPathFinder::Point>::_unref(this_00);
    }
    if ((*(long *)(this + 0x268) != 0) && (*(int *)(this + 0x28c) != 0)) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) != 0) {
        memset(*(void **)(this + 0x280),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) << 2);
      }
      *(undefined4 *)(this + 0x28c) = 0;
    }
    if (*(long *)(param_1 + 8) == 0) {
      local_c4 = 0;
      lVar32 = 2;
    }
    else {
      local_c4 = (uint)*(undefined8 *)(*(long *)(param_1 + 8) + -8);
      lVar32 = (long)(int)(local_c4 + 2);
    }
    CowData<PolygonPathFinder::Point>::resize<false>(this_00,lVar32);
    lVar32 = *(long *)(param_1 + 8);
    *(undefined8 *)(this + 0x248) = 0;
    *(undefined8 *)(this + 0x250) = 0;
    for (pVVar38 = (Vector2 *)0x0; (lVar32 != 0 && ((long)pVVar38 < *(long *)(lVar32 + -8)));
        pVVar38 = pVVar38 + 1) {
      if (*(long *)(this + 0x260) == 0) {
LAB_00105588:
        lVar29 = 0;
        goto LAB_001055a9;
      }
      lVar29 = *(long *)(*(long *)(this + 0x260) + -8);
      if (lVar29 <= (long)pVVar38) goto LAB_001055a9;
      CowData<PolygonPathFinder::Point>::_copy_on_write(this_00);
      lVar29 = *(long *)(this + 0x260);
      *(undefined8 *)(lVar29 + (long)pVVar38 * 0x40) = *(undefined8 *)(lVar32 + (long)pVVar38 * 8);
      if (lVar29 == 0) goto LAB_00105588;
      lVar29 = *(long *)(lVar29 + -8);
      if (lVar29 <= (long)pVVar38) goto LAB_001055a9;
      CowData<PolygonPathFinder::Point>::_copy_on_write(this_00);
      lVar32 = *(long *)(this + 0x260);
      puVar10 = *(undefined8 **)(param_1 + 8);
      pfVar1 = (float *)(lVar32 + (long)pVVar38 * 0x40);
      pfVar1[0xd] = 0.0;
      if (pVVar38 == (Vector2 *)0x0) {
        if (puVar10 == (undefined8 *)0x0) {
LAB_00105618:
          pVVar25 = (Vector2 *)0x0;
        }
        else {
          pVVar25 = (Vector2 *)puVar10[-1];
          if (0 < (long)pVVar25) {
            *(undefined8 *)(this + 0x240) = *puVar10;
            if (lVar32 == 0) goto LAB_00105618;
            pVVar25 = *(Vector2 **)(lVar32 + -8);
            if (0 < (long)pVVar25) {
              *(undefined8 *)(this + 0x248) = *(undefined8 *)pfVar1;
              goto LAB_0010501c;
            }
          }
        }
        pVVar24 = (Vector2 *)0x0;
        goto LAB_001055f1;
      }
      if (puVar10 == (undefined8 *)0x0) goto LAB_001055d0;
      pVVar24 = pVVar38;
      pVVar25 = (Vector2 *)puVar10[-1];
      if ((long)puVar10[-1] <= (long)pVVar38) goto LAB_001055f1;
      fVar2 = *(float *)((long)(puVar10 + (long)pVVar38) + 4);
      fVar39 = *(float *)(puVar10 + (long)pVVar38);
      if (fVar2 <= *(float *)(this + 0x244)) {
        fVar2 = *(float *)(this + 0x244);
      }
      if (fVar39 <= *(float *)(this + 0x240)) {
        fVar39 = *(float *)(this + 0x240);
      }
      *(ulong *)(this + 0x240) = CONCAT44(fVar2,fVar39);
      if (lVar32 == 0) goto LAB_001055d0;
      pVVar25 = *(Vector2 **)(lVar32 + -8);
      if ((long)*(Vector2 **)(lVar32 + -8) <= (long)pVVar38) goto LAB_001055f1;
      fVar2 = *(float *)(this + 0x250);
      if ((fVar2 < 0.0) || (fVar39 = *(float *)(this + 0x254), fVar39 < 0.0)) {
        _err_print_error("expand_to","./core/math/rect2.h",0x100);
        fVar39 = *(float *)(this + 0x254);
        fVar2 = *(float *)(this + 0x250);
      }
      fVar3 = *(float *)(this + 0x248);
      fVar4 = *(float *)(this + 0x24c);
      fVar5 = pfVar1[1];
      fVar6 = *pfVar1;
      fVar40 = fVar6;
      if (fVar3 <= fVar6) {
        fVar40 = fVar3;
      }
      fVar41 = fVar5;
      if (fVar4 <= fVar5) {
        fVar41 = fVar4;
      }
      if (fVar6 <= fVar2 + fVar3) {
        fVar6 = fVar2 + fVar3;
      }
      if (fVar5 <= fVar39 + fVar4) {
        fVar5 = fVar39 + fVar4;
      }
      *(ulong *)(this + 0x248) = CONCAT44(fVar41,fVar40);
      *(ulong *)(this + 0x250) = CONCAT44(fVar5 - fVar41,fVar6 - fVar40);
LAB_0010501c:
      lVar32 = *(long *)(param_1 + 8);
    }
    uVar22 = Math::rand();
    *(float *)(this + 0x240) =
         (float)((double)((float)uVar22 * __LC77) * __LC78 + __LC79 +
                (double)*(float *)(this + 0x240));
    uVar22 = Math::rand();
    lVar32 = *(long *)(param_2 + 8);
    *(float *)(this + 0x244) =
         (float)((double)((float)uVar22 * __LC77) * __LC80 + __LC81 +
                (double)*(float *)(this + 0x244));
    if (lVar32 != 0) {
      pVVar30 = (Vector2 *)0x0;
      pVVar38 = (Vector2 *)0x1;
      do {
        pVVar25 = *(Vector2 **)(lVar32 + -8);
        if ((long)pVVar25 <= (long)pVVar30) break;
        pVVar24 = pVVar38;
        if ((long)pVVar25 <= (long)pVVar38) goto LAB_001055f1;
        iVar27 = *(int *)(lVar32 + (long)pVVar38 * 4);
        iVar9 = *(int *)(lVar32 + (long)pVVar30 * 4);
        iVar26 = iVar27;
        iVar20 = iVar9;
        if (iVar9 <= iVar27) {
          iVar26 = iVar9;
          iVar20 = iVar27;
        }
        local_48 = CONCAT44(iVar20,iVar26);
        if (((int)local_c4 <= iVar26) || (iVar26 < 0)) {
          _err_print_index_error
                    ("setup","scene/resources/2d/polygon_path_finder.cpp",0x53,(long)iVar26,
                     (long)(int)local_c4,"e.points[0]","point_count","",false,false);
          goto LAB_00105733;
        }
        if (((int)local_c4 <= iVar20) || (iVar20 < 0)) {
          _err_print_index_error
                    ("setup","scene/resources/2d/polygon_path_finder.cpp",0x54,(long)iVar20,
                     (long)(int)local_c4,"e.points[1]","point_count","",false,false);
          goto LAB_00105733;
        }
        pVVar25 = (Vector2 *)(long)iVar9;
        lVar32 = *(long *)(this + 0x260);
        if ((long)pVVar25 < 0) {
LAB_001057c7:
          if (lVar32 == 0) {
LAB_001057cc:
            lVar29 = 0;
            pVVar38 = pVVar25;
          }
          else {
LAB_0010575f:
            lVar29 = *(long *)(lVar32 + -8);
            pVVar38 = pVVar25;
          }
LAB_001055a9:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,(long)pVVar38,lVar29,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        if (lVar32 == 0) goto LAB_001057cc;
        if (*(long *)(lVar32 + -8) <= (long)pVVar25) goto LAB_0010575f;
        CowData<PolygonPathFinder::Point>::_copy_on_write(this_00);
        if (*(long *)(param_2 + 8) == 0) goto LAB_001055d0;
        pVVar25 = *(Vector2 **)(*(long *)(param_2 + 8) + -8);
        if ((long)pVVar25 <= (long)pVVar38) goto LAB_001055f1;
        HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_58);
        lVar32 = *(long *)(param_2 + 8);
        if (lVar32 == 0) goto LAB_001055d0;
        pVVar25 = *(Vector2 **)(lVar32 + -8);
        if ((long)*(Vector2 **)(lVar32 + -8) <= (long)pVVar38) goto LAB_001055f1;
        pVVar25 = (Vector2 *)(long)*(int *)(lVar32 + (long)pVVar38 * 4);
        lVar32 = *(long *)(this + 0x260);
        if ((long)pVVar25 < 0) goto LAB_001057c7;
        if (lVar32 == 0) {
          lVar29 = 0;
          pVVar38 = pVVar25;
          goto LAB_001055a9;
        }
        if (*(long *)(lVar32 + -8) <= (long)pVVar25) goto LAB_0010575f;
        CowData<PolygonPathFinder::Point>::_copy_on_write(this_00);
        pVVar24 = pVVar30;
        if (*(long *)(param_2 + 8) == 0) {
          pVVar25 = (Vector2 *)0x0;
          goto LAB_001055f1;
        }
        pVVar25 = *(Vector2 **)(*(long *)(param_2 + 8) + -8);
        if ((long)pVVar25 <= (long)pVVar30) goto LAB_001055f1;
        pVVar30 = pVVar30 + 2;
        pVVar38 = pVVar38 + 2;
        HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_58);
        HashSet<PolygonPathFinder::Edge,PolygonPathFinder::Edge,HashMapComparatorDefault<PolygonPathFinder::Edge>>
        ::insert(local_58);
        lVar32 = *(long *)(param_2 + 8);
      } while (lVar32 != 0);
    }
    if (0 < (int)local_c4) {
      pVVar38 = (Vector2 *)0x0;
      while( true ) {
        pVVar30 = pVVar38;
        uVar22 = (uint)pVVar30;
        uVar36 = uVar22 + 1;
        if (pVVar30 == (Vector2 *)(ulong)(local_c4 - 1)) break;
        pVVar25 = pVVar30;
        local_d0 = pVVar30 + 1;
        do {
          uVar31 = uVar22;
          uVar34 = uVar36;
          if ((int)uVar22 <= (int)uVar36) {
            uVar31 = uVar36;
            uVar34 = uVar22;
          }
          pVVar28 = (Vector2 *)CONCAT44(uVar31,uVar34);
          if ((*(long *)(this + 0x268) != 0) && (*(int *)(this + 0x28c) != 0)) {
            uVar33 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(this + 0x288) * 4));
            lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x288) * 8);
            uVar23 = (long)pVVar28 * 0x3ffff - 1;
            uVar23 = (uVar23 ^ uVar23 >> 0x1f) * 0x15;
            uVar23 = (uVar23 ^ uVar23 >> 0xb) * 0x41;
            uVar23 = uVar23 >> 0x16 ^ uVar23;
            uVar35 = uVar23 & 0xffffffff;
            if ((int)uVar23 == 0) {
              uVar35 = 1;
            }
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar35 * lVar32;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar33;
            lVar29 = SUB168(auVar11 * auVar15,8);
            uVar31 = *(uint *)(*(long *)(this + 0x280) + lVar29 * 4);
            iVar27 = SUB164(auVar11 * auVar15,8);
            if (uVar31 != 0) {
              uVar34 = 0;
              do {
                if ((uVar31 == (uint)uVar35) &&
                   (pVVar25 = pVVar28,
                   pVVar28 ==
                   *(Vector2 **)
                    (*(long *)(this + 0x268) +
                    (ulong)*(uint *)(*(long *)(this + 0x270) + lVar29 * 4) * 8))) goto LAB_0010546f;
                uVar34 = uVar34 + 1;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = (ulong)(iVar27 + 1) * lVar32;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar33;
                lVar29 = SUB168(auVar12 * auVar16,8);
                uVar31 = *(uint *)(*(long *)(this + 0x280) + lVar29 * 4);
                iVar27 = SUB164(auVar12 * auVar16,8);
              } while ((uVar31 != 0) &&
                      (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar31 * lVar32, auVar17._8_8_ = 0,
                      auVar17._0_8_ = uVar33,
                      pVVar25 = (Vector2 *)
                                ((ulong)((*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(this + 0x288) * 4) + iVar27) -
                                        SUB164(auVar13 * auVar17,8)) * lVar32), auVar14._8_8_ = 0,
                      auVar14._0_8_ = pVVar25, auVar18._8_8_ = 0, auVar18._0_8_ = uVar33,
                      uVar34 <= SUB164(auVar14 * auVar18,8)));
            }
          }
          pVVar28 = pVVar25;
          lVar32 = *(long *)(this + 0x260);
          pVVar24 = pVVar30;
          if (lVar32 == 0) {
            pVVar25 = (Vector2 *)0x0;
            goto LAB_001055f1;
          }
          pVVar38 = *(Vector2 **)(lVar32 + -8);
          pVVar25 = pVVar38;
          if ((((long)pVVar38 <= (long)pVVar30) ||
              (uVar7 = *(undefined8 *)(lVar32 + (long)pVVar30 * 0x40), pVVar24 = local_d0,
              (long)pVVar38 <= (long)local_d0)) || ((long)local_d0 < 0)) goto LAB_001055f1;
          uVar8 = *(undefined8 *)(lVar32 + (long)local_d0 * 0x40);
          local_48 = CONCAT44(_LC64._4_4_ * (float)((ulong)uVar7 >> 0x20) +
                              _LC64._4_4_ * (float)((ulong)uVar8 >> 0x20),
                              (float)_LC64 * (float)uVar7 + (float)_LC64 * (float)uVar8);
          cVar21 = _is_point_inside(this,(Vector2 *)&local_48);
          if (cVar21 != '\0') {
            iVar27 = *(int *)(this + 0x28c);
            if (iVar27 != 0) {
              lVar32 = *(long *)(this + 0x268);
              lVar37 = 0;
              lVar29 = *(long *)(this + 0x260);
              do {
                while( true ) {
                  uVar31 = *(uint *)(lVar32 + lVar37 * 8);
                  pVVar24 = (Vector2 *)(long)(int)uVar31;
                  if (uVar31 != uVar22) break;
LAB_001059d4:
                  if (iVar27 <= (int)lVar37 + 1) goto LAB_001059ee;
                  lVar37 = lVar37 + 1;
                }
                uVar34 = *(uint *)(lVar32 + 4 + lVar37 * 8);
                pVVar28 = (Vector2 *)
                          CONCAT71((int7)((ulong)pVVar28 >> 8),uVar34 == uVar22 || uVar31 == uVar36)
                ;
                if ((uVar34 == uVar22 || uVar31 == uVar36) || (uVar34 == uVar36)) goto LAB_001059d4;
                if ((long)pVVar24 < 0) {
                  if (lVar29 == 0) {
LAB_00105ad2:
                    pVVar25 = (Vector2 *)0x0;
                  }
                  else {
                    pVVar25 = *(Vector2 **)(lVar29 + -8);
                  }
                  goto LAB_001055f1;
                }
                if (lVar29 == 0) goto LAB_00105ad2;
                pVVar25 = *(Vector2 **)(lVar29 + -8);
                if ((long)pVVar25 <= (long)pVVar24) goto LAB_001055f1;
                local_48 = *(undefined8 *)(lVar29 + (long)pVVar24 * 0x40);
                pVVar24 = (Vector2 *)(long)(int)uVar34;
                if (((long)pVVar25 <= (long)pVVar24) || ((long)pVVar24 < 0)) goto LAB_001055f1;
                cVar21 = Geometry2D::segment_intersects_segment
                                   ((Vector2 *)&local_48,(Vector2 *)0x0,(Vector2 *)(ulong)uVar34,
                                    pVVar28,pVVar38);
                if (cVar21 != '\0') goto LAB_0010546f;
                if (iVar27 <= (int)lVar37 + 1) break;
                lVar29 = *(long *)(this + 0x260);
                lVar37 = lVar37 + 1;
              } while( true );
            }
            lVar29 = *(long *)(this + 0x260);
LAB_001059ee:
            pVVar38 = pVVar30;
            if (lVar29 == 0) {
              lVar29 = 0;
              goto LAB_001055a9;
            }
            lVar29 = *(long *)(lVar29 + -8);
            if (lVar29 <= (long)pVVar30) goto LAB_001055a9;
            CowData<PolygonPathFinder::Point>::_copy_on_write(this_00);
            HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_58)
            ;
            pVVar38 = local_d0;
            if (*(long *)(this + 0x260) == 0) {
              lVar29 = 0;
              goto LAB_001055a9;
            }
            lVar29 = *(long *)(*(long *)(this + 0x260) + -8);
            if (lVar29 <= (long)local_d0) goto LAB_001055a9;
            CowData<PolygonPathFinder::Point>::_copy_on_write(this_00);
            HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_58)
            ;
          }
LAB_0010546f:
          uVar36 = uVar36 + 1;
          local_d0 = local_d0 + 1;
          pVVar38 = pVVar30 + 1;
          pVVar25 = pVVar28;
        } while (uVar36 != local_c4);
      }
    }
LAB_00105733:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("setup","scene/resources/2d/polygon_path_finder.cpp",0x34,
                     "Condition \"p_connections.size() & 1\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001055d0:
  pVVar24 = pVVar38;
  pVVar25 = (Vector2 *)0x0;
LAB_001055f1:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,(long)pVVar24,(long)pVVar25,"p_index","size()",
             "",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar19 = (code *)invalidInstructionException();
  (*pcVar19)();
}



/* PolygonPathFinder::_get_data() const */

Dictionary * PolygonPathFinder::_get_data(void)

{
  long *plVar1;
  undefined8 *__dest;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  Variant *pVVar10;
  int iVar11;
  long lVar12;
  size_t __n;
  long in_RSI;
  long lVar13;
  int iVar14;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  Array local_c0 [8];
  Vector local_b8 [8];
  long local_b0;
  Vector local_a8 [8];
  long local_a0;
  Vector local_98 [8];
  undefined8 *local_90;
  Vector local_88 [8];
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  local_b0 = 0;
  local_a0 = 0;
  Array::Array(local_c0);
  if (*(long *)(in_RSI + 0x260) == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(*(long *)(in_RSI + 0x260) + -8) + -2;
    if (lVar13 < 0) {
      lVar13 = 0;
    }
  }
  CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_b0,lVar13);
  iVar14 = (int)local_c0;
  Array::resize(iVar14);
  CowData<int>::resize<false>((CowData<int> *)&local_a0,(ulong)(uint)(*(int *)(in_RSI + 0x28c) * 2))
  ;
  local_90 = (undefined8 *)0x0;
  if ((*(long *)(in_RSI + 0x260) != 0) &&
     (lVar13 = *(long *)(*(long *)(in_RSI + 0x260) + -8), 2 < lVar13)) {
    lVar13 = lVar13 + -2;
    lVar5 = lVar13 * 4;
    if ((lVar5 == 0) ||
       (uVar6 = lVar5 - 1, uVar6 = uVar6 | uVar6 >> 1, uVar6 = uVar6 | uVar6 >> 2,
       uVar6 = uVar6 | uVar6 >> 4, uVar6 = uVar6 | uVar6 >> 8, uVar6 = uVar6 | uVar6 >> 0x10,
       uVar6 = uVar6 | uVar6 >> 0x20, uVar6 == 0xffffffffffffffff)) {
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
    }
    else {
      puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_90 = puVar7 + 2;
        *puVar7 = 1;
        puVar7[1] = lVar13;
      }
    }
  }
  CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_b0);
  lVar13 = local_b0;
  if ((local_90 != (undefined8 *)0x0) && (1 < (ulong)local_90[-2])) {
    if (local_90 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar5 = local_90[-1];
    uVar6 = 0x10;
    __n = lVar5 * 4;
    if (__n != 0) {
      uVar6 = __n - 1 | __n - 1 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
    }
    puVar8 = (undefined8 *)Memory::alloc_static(uVar6,false);
    puVar7 = local_90;
    if (puVar8 == (undefined8 *)0x0) {
      _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                       "Parameter \"mem_new\" is null.",0,0);
    }
    else {
      __dest = puVar8 + 2;
      *puVar8 = 1;
      puVar8[1] = lVar5;
      memcpy(__dest,local_90,__n);
      puVar8 = local_90;
      LOCK();
      plVar1 = puVar7 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      local_90 = __dest;
      if (*plVar1 == 0) {
        local_90 = (undefined8 *)0x0;
        Memory::free_static(puVar8 + -2,false);
        local_90 = __dest;
      }
    }
  }
  puVar7 = local_90;
  lVar5 = *(long *)(in_RSI + 0x260);
  lVar12 = 0;
  while( true ) {
    if ((lVar5 == 0) || (*(long *)(lVar5 + -8) + -2 <= lVar12)) {
      CowData<int>::_copy_on_write((CowData<int> *)&local_a0);
      iVar14 = *(int *)(in_RSI + 0x28c);
      if (iVar14 != 0) {
        lVar13 = *(long *)(in_RSI + 0x268);
        lVar5 = 0;
        iVar11 = 0;
        while( true ) {
          iVar11 = iVar11 + 1;
          *(undefined4 *)(local_a0 + lVar5) = *(undefined4 *)(lVar13 + lVar5);
          *(undefined4 *)(local_a0 + 4 + lVar5) = *(undefined4 *)(lVar13 + 4 + lVar5);
          if (iVar14 <= iVar11) break;
          lVar5 = lVar5 + 8;
        }
      }
      Variant::Variant((Variant *)local_58,(Rect2 *)(in_RSI + 0x248));
      Variant::Variant((Variant *)local_78,"bounds");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar10 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)pVVar10 = 0;
        *(int *)pVVar10 = local_58[0];
        *(undefined8 *)(pVVar10 + 8) = local_50;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_b8);
      Variant::Variant((Variant *)local_78,"points");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar10 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)pVVar10 = 0;
        *(int *)pVVar10 = local_58[0];
        *(undefined8 *)(pVVar10 + 8) = local_50;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_98);
      Variant::Variant((Variant *)local_78,"penalties");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar10 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)pVVar10 = 0;
        *(int *)pVVar10 = local_58[0];
        *(undefined8 *)(pVVar10 + 8) = local_50;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_c0);
      Variant::Variant((Variant *)local_78,"connections");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar10 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)pVVar10 = 0;
        *(int *)pVVar10 = local_58[0];
        *(undefined8 *)(pVVar10 + 8) = local_50;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_a8);
      Variant::Variant((Variant *)local_78,"segments");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar10 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)pVVar10 = 0;
        *(int *)pVVar10 = local_58[0];
        *(undefined8 *)(pVVar10 + 8) = local_50;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      puVar7 = local_90;
      if (local_90 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_90 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = (undefined8 *)0x0;
          Memory::free_static(puVar7 + -2,false);
        }
      }
      Array::~Array(local_c0);
      lVar13 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return in_RDI;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar8 = (undefined8 *)(lVar5 + lVar12 * 0x40);
    uVar2 = *(undefined4 *)((long)puVar8 + 0x34);
    uVar3 = *(uint *)((long)puVar8 + 0x2c);
    *(undefined8 *)(lVar13 + lVar12 * 8) = *puVar8;
    *(undefined4 *)((long)puVar7 + lVar12 * 4) = uVar2;
    local_80 = 0;
    CowData<int>::resize<false>((CowData<int> *)&local_80,(ulong)uVar3);
    CowData<int>::_copy_on_write((CowData<int> *)&local_80);
    lVar5 = *(long *)(in_RSI + 0x260);
    if (lVar5 == 0) break;
    lVar9 = *(long *)(lVar5 + -8);
    if (lVar9 <= lVar12) goto LAB_00106250;
    lVar5 = lVar5 + lVar12 * 0x40;
    iVar11 = *(int *)(lVar5 + 0x2c);
    if (iVar11 != 0) {
      lVar5 = *(long *)(lVar5 + 8);
      lVar9 = 0;
      do {
        *(undefined4 *)(local_80 + lVar9 * 4) = *(undefined4 *)(lVar5 + lVar9 * 4);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < iVar11);
    }
    Variant::Variant((Variant *)local_58,local_88);
    pVVar10 = (Variant *)Array::operator[](iVar14);
    if (pVVar10 == (Variant *)local_58) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar10 = 0;
      *(int *)pVVar10 = local_58[0];
      *(undefined8 *)(pVVar10 + 8) = local_50;
      *(undefined8 *)(pVVar10 + 0x10) = uStack_48;
    }
    lVar5 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar5 = *(long *)(in_RSI + 0x260);
    lVar12 = lVar12 + 1;
  }
  lVar9 = 0;
LAB_00106250:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
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



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* PolygonPathFinder::is_class_ptr(void*) const */

uint __thiscall PolygonPathFinder::is_class_ptr(PolygonPathFinder *this,void *param_1)

{
  return (uint)CONCAT71(0x1123,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1123,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1123,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1123,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PolygonPathFinder::_getv(StringName const&, Variant&) const */

undefined8 PolygonPathFinder::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PolygonPathFinder::_setv(StringName const&, Variant const&) */

undefined8 PolygonPathFinder::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PolygonPathFinder::_validate_propertyv(PropertyInfo&) const */

void PolygonPathFinder::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PolygonPathFinder::_property_can_revertv(StringName const&) const */

undefined8 PolygonPathFinder::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PolygonPathFinder::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PolygonPathFinder::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PolygonPathFinder::_notificationv(int, bool) */

void PolygonPathFinder::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Dictionary const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Dictionary_const&>::_gen_argument_type(MethodBindT<Dictionary_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1b;
}



/* MethodBindT<Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Dictionary_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Rect2>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Rect2>::_gen_argument_type(int param_1)

{
  return 7;
}



/* MethodBindTRC<Rect2>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Rect2>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<float, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<float,int>::_gen_argument_type(MethodBindTRC<float,int> *this,int param_1)

{
  return 3 - (uint)(param_1 == 0);
}



/* MethodBindTRC<float, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<float,int>::get_argument_meta(MethodBindTRC<float,int> *this,int param_1)

{
  if (-1 < param_1) {
    return -(param_1 == 0) & 3;
  }
  return 9;
}



/* MethodBindT<int, float>::_gen_argument_type(int) const */

int __thiscall MethodBindT<int,float>::_gen_argument_type(MethodBindT<int,float> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 3 - (uint)(param_1 == 0);
  if (1 < (uint)param_1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* MethodBindT<int, float>::get_argument_meta(int) const */

char __thiscall MethodBindT<int,float>::get_argument_meta(MethodBindT<int,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if (param_1 != 0) {
    cVar1 = (param_1 == 1) * '\t';
  }
  return cVar1;
}



/* MethodBindTRC<bool, Vector2 const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,Vector2_const&>::_gen_argument_type
          (MethodBindTRC<bool,Vector2_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 4U) + 1;
}



/* MethodBindTRC<bool, Vector2 const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,Vector2_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector2, Vector2 const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2,Vector2_const&>::_gen_argument_type(int param_1)

{
  return 5;
}



/* MethodBindTRC<Vector2, Vector2 const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2,Vector2_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<Vector2>, Vector2 const&, Vector2 const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&>::_gen_argument_type
          (MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&> *this,int param_1)

{
  return (-(uint)((uint)param_1 < 2) & 0xffffffe2) + 0x23;
}



/* MethodBindTRC<Vector<Vector2>, Vector2 const&, Vector2 const&>::get_argument_meta(int) const */

undefined8
MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Vector<Vector2>, Vector2 const&, Vector2 const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&>::_gen_argument_type
          (MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&> *this,int param_1)

{
  return (-(uint)((uint)param_1 < 2) & 0xffffffe2) + 0x23;
}



/* MethodBindTR<Vector<Vector2>, Vector2 const&, Vector2 const&>::get_argument_meta(int) const */

undefined8
MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<Vector2> const&, Vector<int> const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector<Vector2>const&,Vector<int>const&>::_gen_argument_type
          (MethodBindT<Vector<Vector2>const&,Vector<int>const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 5U) + 0x1e;
  }
  return cVar1;
}



/* MethodBindT<Vector<Vector2> const&, Vector<int> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<Vector2>const&,Vector<int>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<Vector2> const&, Vector<int> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&,Vector<int>const&>::~MethodBindT
          (MethodBindT<Vector<Vector2>const&,Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112000;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<Vector2> const&, Vector<int> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&,Vector<int>const&>::~MethodBindT
          (MethodBindT<Vector<Vector2>const&,Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112000;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<Vector2>, Vector2 const&, Vector2 const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112060;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<Vector2>, Vector2 const&, Vector2 const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112060;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<Vector2>, Vector2 const&, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&>::~MethodBindTRC
          (MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001120c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<Vector2>, Vector2 const&, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&>::~MethodBindTRC
          (MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001120c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector2,Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112120;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector2,Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112120;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Vector2_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112180;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Vector2_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112180;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001121e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001121e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112240;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112240;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Rect2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Rect2>::~MethodBindTRC(MethodBindTRC<Rect2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001122a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Rect2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Rect2>::~MethodBindTRC(MethodBindTRC<Rect2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001122a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112300;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112300;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112360;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112360;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* PolygonPathFinder::_get_class_namev() const */

undefined8 * PolygonPathFinder::_get_class_namev(void)

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
LAB_00106fd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106fd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PolygonPathFinder");
      goto LAB_0010703e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PolygonPathFinder");
LAB_0010703e:
  return &_get_class_namev()::_class_name_static;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PolygonPathFinder::get_class() const */

void PolygonPathFinder::get_class(void)

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



/* MethodBindTRC<Rect2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Rect2>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 7;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001072ec;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001072ec:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1b;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010746c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010746c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PolygonPathFinder::_bind_methods() [clone .cold] */

void PolygonPathFinder::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<int>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107532(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<PolygonPathFinder::Point>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<PolygonPathFinder::Point>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<PolygonPathFinder::Point>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<PolygonPathFinder::Point>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0010755e(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PolygonPathFinder::_get_data() const [clone .cold] */

void PolygonPathFinder::_get_data(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_001076e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001076e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00107706;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00107706:
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_00107ae8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107ae8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107b05;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107b05:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* PolygonPathFinder::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
PolygonPathFinder::_get_property_listv(PolygonPathFinder *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PolygonPathFinder";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PolygonPathFinder";
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
LAB_00107f38:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107f38;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107f55;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107f55:
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
  StringName::StringName((StringName *)&local_78,"PolygonPathFinder",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */

undefined1  [16]
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
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
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  int iVar38;
  uint *in_RDX;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  long *in_RSI;
  uint uVar42;
  ulong uVar43;
  undefined4 uVar44;
  ulong uVar45;
  uint uVar46;
  uint *puVar47;
  undefined1 auVar48 [16];
  long *plStack_98;
  
  lVar34 = *in_RSI;
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar30 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    if (lVar34 != 0) goto LAB_0010830a;
  }
  else {
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
LAB_0010830a:
    if (uVar42 != 0) {
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar41 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar41 = 1;
        uVar40 = uVar33;
      }
      else {
        uVar40 = uVar41 * uVar33;
      }
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar43;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar40;
      lVar39 = SUB168(auVar5 * auVar17,8);
      iVar38 = SUB164(auVar5 * auVar17,8);
      uVar29 = *(uint *)(in_RSI[3] + lVar39 * 4);
      uVar40 = (ulong)uVar29;
      if (uVar29 != 0) {
        uVar29 = 0;
        do {
          if (uVar41 == (uint)uVar40) {
            uVar32 = *(uint *)(in_RSI[1] + lVar39 * 4);
            plStack_98 = (long *)(ulong)uVar32;
            if (*(uint *)(lVar34 + (long)plStack_98 * 4) == uVar31) goto LAB_001083ff;
          }
          uVar29 = uVar29 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (iVar38 + 1) * uVar33;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar43;
          lVar39 = SUB168(auVar6 * auVar18,8);
          uVar32 = *(uint *)(in_RSI[3] + lVar39 * 4);
          uVar40 = (ulong)uVar32;
          iVar38 = SUB164(auVar6 * auVar18,8);
        } while ((uVar32 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar40 * uVar33, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar43, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4
                                          ) + iVar38) - SUB164(auVar7 * auVar19,8)) * uVar33,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar43, uVar29 <= SUB164(auVar8 * auVar20,8)));
      }
    }
  }
  if ((float)uVar30 * __LC27 < (float)(uVar42 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      plStack_98 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar42 = *(uint *)((long)in_RSI + 0x24);
      lVar34 = *in_RSI;
      uVar32 = 0xffffffff;
      goto LAB_001083ff;
    }
    uVar30 = (int)in_RSI[4] + 1;
    uVar33 = (ulong)uVar30;
    if (uVar30 < 2) {
      uVar33 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar1 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar30 << 2;
    pvVar2 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar33 = 0;
      lVar39 = in_RSI[3];
      lVar3 = in_RSI[2];
      do {
        uVar45 = uVar33 & 0xffffffff;
        uVar44 = (undefined4)uVar33;
        uVar29 = 0;
        uVar30 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar33 * 4) * 4);
        uVar40 = (ulong)uVar30;
        lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar43 = CONCAT44(0,uVar42);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar40 * lVar35;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar43;
        lVar36 = SUB168(auVar9 * auVar21,8) * 4;
        iVar38 = SUB164(auVar9 * auVar21,8);
        puVar47 = (uint *)(lVar39 + lVar36);
        uVar31 = *puVar47;
        if (uVar31 == 0) {
          lVar35 = uVar33 * 4;
        }
        else {
          do {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar31 * lVar35;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar10 * auVar22,8)) * lVar35;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            uVar30 = SUB164(auVar11 * auVar23,8);
            if (uVar30 < uVar29) {
              *(int *)(lVar3 + uVar45 * 4) = iVar38;
              uVar31 = *puVar47;
              *puVar47 = (uint)uVar40;
              uVar29 = *(uint *)(lVar36 + lVar34);
              uVar40 = (ulong)uVar31;
              *(uint *)(lVar36 + lVar34) = (uint)uVar45;
              uVar45 = (ulong)uVar29;
              uVar29 = uVar30;
            }
            uVar44 = (undefined4)uVar45;
            uVar30 = (uint)uVar40;
            uVar29 = uVar29 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar38 + 1) * lVar35;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar43;
            lVar36 = SUB168(auVar12 * auVar24,8) * 4;
            iVar38 = SUB164(auVar12 * auVar24,8);
            puVar47 = (uint *)(lVar39 + lVar36);
            uVar31 = *puVar47;
          } while (uVar31 != 0);
          lVar35 = uVar45 << 2;
        }
        *puVar47 = uVar30;
        uVar33 = uVar33 + 1;
        *(int *)(lVar3 + lVar35) = iVar38;
        *(undefined4 *)(lVar34 + lVar36) = uVar44;
      } while ((uint)uVar33 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    uVar31 = *in_RDX;
  }
  uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
  uVar29 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar29 ^ uVar29 >> 0x10;
  if (uVar29 == uVar29 >> 0x10) {
    uVar33 = 1;
    uVar30 = 1;
  }
  else {
    uVar33 = (ulong)uVar30;
  }
  uVar41 = 0;
  *(uint *)(lVar34 + (ulong)uVar42 * 4) = uVar31;
  lVar3 = in_RSI[3];
  uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar40 = CONCAT44(0,uVar42);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar33 * lVar36;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar39 = SUB168(auVar13 * auVar25,8) * 4;
  iVar38 = SUB164(auVar13 * auVar25,8);
  lVar35 = in_RSI[2];
  puVar47 = (uint *)(lVar3 + lVar39);
  lVar4 = in_RSI[1];
  uVar31 = *puVar47;
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  plStack_98 = in_RSI;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar14 * auVar26,8)) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar31 = SUB164(auVar15 * auVar27,8);
    uVar32 = uVar30;
    uVar46 = uVar29;
    if (uVar31 < uVar41) {
      puVar37 = (uint *)(lVar39 + lVar4);
      *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
      uVar32 = *puVar47;
      *puVar47 = uVar30;
      uVar46 = *puVar37;
      *puVar37 = uVar29;
      uVar41 = uVar31;
    }
    uVar41 = uVar41 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar38 + 1) * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    plStack_98 = SUB168(auVar16 * auVar28,8);
    lVar39 = (long)plStack_98 * 4;
    iVar38 = SUB164(auVar16 * auVar28,8);
    puVar47 = (uint *)(lVar3 + lVar39);
    uVar29 = uVar46;
    uVar30 = uVar32;
    uVar31 = *puVar47;
  }
  *puVar47 = uVar30;
  *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
  *(uint *)(lVar4 + lVar39) = uVar29;
  uVar32 = *(uint *)((long)in_RSI + 0x24);
  uVar42 = uVar32 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar42;
LAB_001083ff:
  param_1[3] = uVar32;
  *(long *)param_1 = lVar34;
  param_1[2] = uVar42;
  auVar48._8_8_ = plStack_98;
  auVar48._0_8_ = param_1;
  return auVar48;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<PolygonPathFinder::Edge, PolygonPathFinder::Edge,
   HashMapComparatorDefault<PolygonPathFinder::Edge> >::insert(PolygonPathFinder::Edge const&) */

undefined1  [16]
HashSet<PolygonPathFinder::Edge,PolygonPathFinder::Edge,HashMapComparatorDefault<PolygonPathFinder::Edge>>
::insert(Edge *param_1)

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
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  lVar34 = *in_RSI;
  if (lVar34 == 0) {
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
    lVar34 = *in_RSI;
    local_70 = *in_RDX;
    uVar32 = *(uint *)(in_RSI + 4);
    if (lVar34 != 0) goto LAB_0010890f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_0010890f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = local_70 * 0x3ffff - 1;
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
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_00108dc1;
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
  if ((float)uVar31 * __LC27 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_00108dc1;
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
    lVar34 = *in_RSI;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  lVar36 = *in_RDX;
  *(long *)(lVar34 + uVar42 * 8) = lVar36;
  uVar33 = lVar36 * 0x3ffff - 1;
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
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar36 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar6 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar36);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar6 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar36 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar36 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar36 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar36);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar6 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar36) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00108dc1:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::clear() */

void __thiscall
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::clear
          (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  if (*(long *)this != 0) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) != 0) {
        memset(*(void **)(this + 0x18),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2);
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    return;
  }
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



/* PolygonPathFinder::is_class(String const&) const */

undefined8 __thiscall PolygonPathFinder::is_class(PolygonPathFinder *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
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
            if (lVar5 == 0) goto LAB_00108fff;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_00108fff:
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
    if (cVar6 != '\0') goto LAB_001090b3;
  }
  cVar6 = String::operator==(param_1,"PolygonPathFinder");
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
              if (lVar5 == 0) goto LAB_001091fb;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_001091fb:
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
      if (cVar6 != '\0') goto LAB_001090b3;
    }
    cVar6 = String::operator==(param_1,"Resource");
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
                if (lVar5 == 0) goto LAB_001092db;
                LOCK();
                lVar7 = *plVar1;
                bVar9 = lVar5 == lVar7;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar7 != -1) {
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
LAB_001092db:
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
        if (cVar6 != '\0') goto LAB_001090b3;
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
                  if (lVar5 == 0) goto LAB_00109183;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
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
LAB_00109183:
          cVar6 = String::operator==(param_1,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_001090b3;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_001093f1;
      }
    }
  }
LAB_001090b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001093f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Dictionary_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00109447;
  local_68 = 0;
  local_58 = &_LC4;
  local_70 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_50._8_8_;
  local_50 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x1b);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00109538:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00109538;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
  }
  lVar5 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_58._0_4_;
  if (*(long *)(puVar7 + 2) != local_50._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar6 = local_50._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_50._8_8_;
    local_50 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar6;
  }
  if (*(long *)(puVar7 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar6;
  }
  lVar5 = local_38;
  puVar7[6] = local_40;
  if (*(long *)(puVar7 + 8) == local_38) {
    puVar7[10] = local_30;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_38;
    puVar7[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_00109447:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Vector<Vector2> const&, Vector<int> const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<Vector<Vector2>const&,Vector<int>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_68 = &_LC4;
    local_80 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x23);
  }
  else {
    if (in_EDX != 1) goto LAB_00109718;
    local_78 = 0;
    local_68 = &_LC4;
    local_80 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1e);
  }
  local_88 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109815:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109815;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar6 = local_68._0_4_;
  if (*(long *)(puVar6 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_50;
  if (*(long *)(puVar6 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_48;
    local_48 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00109718:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBind* create_method_bind<PolygonPathFinder, Vector<Vector2> const&, Vector<int>
   const&>(void (PolygonPathFinder::*)(Vector<Vector2> const&, Vector<int> const&)) */

MethodBind *
create_method_bind<PolygonPathFinder,Vector<Vector2>const&,Vector<int>const&>
          (_func_void_Vector_ptr_Vector_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector_ptr_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112000;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PolygonPathFinder, Vector<Vector2>, Vector2 const&, Vector2
   const&>(Vector<Vector2> (PolygonPathFinder::*)(Vector2 const&, Vector2 const&)) */

MethodBind *
create_method_bind<PolygonPathFinder,Vector<Vector2>,Vector2_const&,Vector2_const&>
          (_func_Vector_Vector2_ptr_Vector2_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector_Vector2_ptr_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112060;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PolygonPathFinder, Vector<Vector2>, Vector2 const&, Vector2
   const&>(Vector<Vector2> (PolygonPathFinder::*)(Vector2 const&, Vector2 const&) const) */

MethodBind *
create_method_bind<PolygonPathFinder,Vector<Vector2>,Vector2_const&,Vector2_const&>
          (_func_Vector_Vector2_ptr_Vector2_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector_Vector2_ptr_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001120c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PolygonPathFinder, Vector2, Vector2 const&>(Vector2
   (PolygonPathFinder::*)(Vector2 const&) const) */

MethodBind *
create_method_bind<PolygonPathFinder,Vector2,Vector2_const&>(_func_Vector2_Vector2_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector2_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112120;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PolygonPathFinder, bool, Vector2 const&>(bool
   (PolygonPathFinder::*)(Vector2 const&) const) */

MethodBind *
create_method_bind<PolygonPathFinder,bool,Vector2_const&>(_func_bool_Vector2_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112180;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PolygonPathFinder, int, float>(void (PolygonPathFinder::*)(int,
   float)) */

MethodBind * create_method_bind<PolygonPathFinder,int,float>(_func_void_int_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001121e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PolygonPathFinder, float, int>(float (PolygonPathFinder::*)(int)
   const) */

MethodBind * create_method_bind<PolygonPathFinder,float,int>(_func_float_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_float_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112240;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PolygonPathFinder, Rect2>(Rect2 (PolygonPathFinder::*)() const) */

MethodBind * create_method_bind<PolygonPathFinder,Rect2>(_func_Rect2 *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Rect2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001122a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PolygonPathFinder, Dictionary const&>(void
   (PolygonPathFinder::*)(Dictionary const&)) */

MethodBind *
create_method_bind<PolygonPathFinder,Dictionary_const&>(_func_void_Dictionary_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112300;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PolygonPathFinder, Dictionary>(Dictionary (PolygonPathFinder::*)()
   const) */

MethodBind * create_method_bind<PolygonPathFinder,Dictionary>(_func_Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112360;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PolygonPathFinder";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PolygonPathFinder::_initialize_classv() */

void PolygonPathFinder::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00116008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PolygonPathFinder";
    local_70 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010ace0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_0010ace0;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
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
  if (lVar7 == lVar3) {
LAB_0010ac4c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0010abe1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010ac4c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_0010abe1:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* CowData<PolygonPathFinder::Point>::_unref() */

void __thiscall CowData<PolygonPathFinder::Point>::_unref(CowData<PolygonPathFinder::Point> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
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
          pvVar4 = *(void **)(lVar6 + 8);
          if (pvVar4 != (void *)0x0) {
            if (*(int *)(lVar6 + 0x2c) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x28) * 4) != 0) {
                memset(*(void **)(lVar6 + 0x20),0,
                       (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x28) * 4)
                       << 2);
              }
              *(undefined4 *)(lVar6 + 0x2c) = 0;
            }
            Memory::free_static(pvVar4,false);
            Memory::free_static(*(void **)(lVar6 + 0x18),false);
            Memory::free_static(*(void **)(lVar6 + 0x10),false);
            Memory::free_static(*(void **)(lVar6 + 0x20),false);
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x40;
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



/* PolygonPathFinder::~PolygonPathFinder() */

void __thiscall PolygonPathFinder::~PolygonPathFinder(PolygonPathFinder *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x268);
  *(undefined ***)this = &PTR__initialize_classv_00111e28;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x28c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) != 0) {
        memset(*(void **)(this + 0x280),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) << 2);
      }
      *(undefined4 *)(this + 0x28c) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 0x278),false);
    Memory::free_static(*(void **)(this + 0x270),false);
    Memory::free_static(*(void **)(this + 0x280),false);
  }
  CowData<PolygonPathFinder::Point>::_unref((CowData<PolygonPathFinder::Point> *)(this + 0x260));
  Resource::~Resource((Resource *)this);
  return;
}



/* PolygonPathFinder::~PolygonPathFinder() */

void __thiscall PolygonPathFinder::~PolygonPathFinder(PolygonPathFinder *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x268);
  *(undefined ***)this = &PTR__initialize_classv_00111e28;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x28c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) != 0) {
        memset(*(void **)(this + 0x280),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) << 2);
      }
      *(undefined4 *)(this + 0x28c) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 0x278),false);
    Memory::free_static(*(void **)(this + 0x270),false);
    Memory::free_static(*(void **)(this + 0x280),false);
  }
  CowData<PolygonPathFinder::Point>::_unref((CowData<PolygonPathFinder::Point> *)(this + 0x260));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x290);
  return;
}



/* CowData<PolygonPathFinder::Point>::_realloc(long) */

undefined8 __thiscall
CowData<PolygonPathFinder::Point>::_realloc(CowData<PolygonPathFinder::Point> *this,long param_1)

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



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x0010b2d8) */
/* WARNING: Removing unreachable block (ram,0x0010b46d) */
/* WARNING: Removing unreachable block (ram,0x0010b479) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Dictionary>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b680;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Dictionary *)&local_58);
      Variant::Variant((Variant *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010b680:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary>::validated_call
          (MethodBindTRC<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10b4c8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b989;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b989:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary>::ptrcall
          (MethodBindTRC<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10b4c8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bb9a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010bb9a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Dictionary_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bf65;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010bda9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010bf65:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Dictionary_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c185;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010bfc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010c185:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Rect2>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar6 = (long *)(local_70 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c260;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      local_58[0] = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(Rect2 *)local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010c260:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Rect2>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  Variant *pVVar5;
  long in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 in_XMM1_Qa;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c4cb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar6 = (*pcVar4)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *(undefined8 *)(in_RCX + 8) = uVar6;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_0010c4cb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Rect2>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 in_XMM1_Qa;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c6ca;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *in_RCX = uVar5;
  in_RCX[1] = in_XMM1_Qa;
LAB_0010c6ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float,int>::validated_call
          (MethodBindTRC<float,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c8ce;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar5;
LAB_0010c8ce:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,int>::ptrcall
          (MethodBindTRC<float,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010caec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar5;
LAB_0010caec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010cee5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar5._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x0010cd25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar5._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010cee5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d10d;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0010cf53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010d10d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,Vector2_const&>::validated_call
          (MethodBindTRC<bool,Vector2_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  Variant VVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d169;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  param_3[8] = VVar3;
LAB_0010d169:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,Vector2_const&>::ptrcall
          (MethodBindTRC<bool,Vector2_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d385;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined1 *)param_3 = uVar3;
LAB_0010d385:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Vector2,Vector2_const&>::validated_call
          (MethodBindTRC<Vector2,Vector2_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d5ab;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(undefined8 *)(param_3 + 8) = uVar5;
LAB_0010d5ab:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2,Vector2_const&>::ptrcall
          (MethodBindTRC<Vector2,Vector2_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d7c7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined8 *)param_3 = uVar5;
LAB_0010d7c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<Vector2>, Vector2 const&, Vector2 const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&>::validated_call
          (MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010da48;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar4 = (long *)(local_40[0] + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0010da48:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<Vector2>, Vector2 const&, Vector2 const&>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&>::ptrcall
          (MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dcbe;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar4 = (long *)(local_40[0] + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0010dcbe:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, Vector2 const&, Vector2 const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&>::validated_call
          (MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010df38;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar4 = (long *)(local_40[0] + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0010df38:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, Vector2 const&, Vector2 const&>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&>::ptrcall
          (MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e1ae;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar4 = (long *)(local_40[0] + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0010e1ae:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&, Vector<int> const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Vector<Vector2>const&,Vector<int>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e58d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e3f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10,*(long *)(*(long *)(param_3 + 8) + 8) + 0x10);
    return;
  }
LAB_0010e58d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&, Vector<int> const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Vector<Vector2>const&,Vector<int>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e7b5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010e5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010e7b5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Dictionary_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e970;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010e9c0;
LAB_0010e9b0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e9c0:
        uVar7 = 4;
        goto LAB_0010e965;
      }
      if (in_R8D == 1) goto LAB_0010e9b0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1b);
    uVar4 = _LC103;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_48);
    Dictionary::~Dictionary((Dictionary *)&local_48);
  }
  else {
    uVar7 = 3;
LAB_0010e965:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010e970:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  float fVar14;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ed08;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ed50;
LAB_0010ed40:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ed50:
        uVar8 = 4;
        goto LAB_0010ecfd;
      }
      if (in_R8D == 1) goto LAB_0010ed40;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC105;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    fVar14 = (float)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,fVar14);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_0010ecfd:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0010ed08:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Vector<Vector2>, Vector2 const&, Vector2 const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *this;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_78 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0);
      pcVar5 = local_78;
      if (local_78 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_78 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar11 = (long *)(local_80 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f150;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar14 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar14 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_0010f198;
      this = *(Variant **)param_4;
LAB_0010f1ad:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar7) {
LAB_0010f198:
        uVar8 = 4;
        goto LAB_0010f185;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar2 <= lVar10) goto LAB_0010f270;
        this = pVVar14 + lVar10 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010f1ad;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar7));
      if (lVar2 <= lVar10) {
LAB_0010f270:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar14 = pVVar14 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14,5);
    uVar4 = _LC106;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_68 = Variant::operator_cast_to_Vector2(pVVar14);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,5);
    uVar4 = _LC107;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_60 = Variant::operator_cast_to_Vector2(this);
    (*(code *)pVVar13)((Vector *)&local_78,(Variant *)((long)plVar11 + (long)pVVar1),&local_60,
                       &local_68);
    Variant::Variant((Variant *)local_58,(Vector *)&local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = local_70;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_70 != 0) {
      LOCK();
      plVar11 = (long *)(local_70 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    uVar8 = 3;
LAB_0010f185:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0010f150:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<Vector2>, Vector2 const&, Vector2 const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *this;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_78 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0);
      pcVar5 = local_78;
      if (local_78 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_78 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar11 = (long *)(local_80 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f5c0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar14 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar14 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_0010f608;
      this = *(Variant **)param_4;
LAB_0010f61d:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar7) {
LAB_0010f608:
        uVar8 = 4;
        goto LAB_0010f5f5;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar2 <= lVar10) goto LAB_0010f6e0;
        this = pVVar14 + lVar10 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010f61d;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar7));
      if (lVar2 <= lVar10) {
LAB_0010f6e0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar14 = pVVar14 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14,5);
    uVar4 = _LC106;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_68 = Variant::operator_cast_to_Vector2(pVVar14);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,5);
    uVar4 = _LC107;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_60 = Variant::operator_cast_to_Vector2(this);
    (*(code *)pVVar13)((Vector *)&local_78,(Variant *)((long)plVar11 + (long)pVVar1),&local_60,
                       &local_68);
    Variant::Variant((Variant *)local_58,(Vector *)&local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = local_70;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_70 != 0) {
      LOCK();
      plVar11 = (long *)(local_70 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    uVar8 = 3;
LAB_0010f5f5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0010f5c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Vector2,Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_68 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar10 = (long *)(local_70 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f9c0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010fa00;
LAB_0010f9f0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010fa00:
        uVar7 = 4;
        goto LAB_0010f9b5;
      }
      if (in_R8D == 1) goto LAB_0010f9f0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,5);
    uVar4 = _LC107;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = Variant::operator_cast_to_Vector2(pVVar11);
    local_58 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),&local_50);
    Variant::Variant((Variant *)local_48,(Vector2 *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0010f9b5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010f9c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar11 = (long *)(local_70 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fd80;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010fdc0;
LAB_0010fdb0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010fdc0:
        uVar8 = 4;
        goto LAB_0010fd75;
      }
      if (in_R8D == 1) goto LAB_0010fdb0;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,5);
    uVar4 = _LC107;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = Variant::operator_cast_to_Vector2(pVVar12);
    bVar7 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),&local_50);
    Variant::Variant((Variant *)local_48,bVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_0010fd75:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0010fd80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,float>
               (__UnexistingClass *param_1,_func_void_int_float *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_00110135;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0011016d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00110095;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00110188;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011016d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00110188:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00110095:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC108;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC105;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011011f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_00110135:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00110226;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,float>
            (p_Var4,(_func_void_int_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00110226:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector<Vector2> const&, Vector<int>
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Vector<Vector2> const&, Vector<int>
   const&), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector<Vector2>const&,Vector<int>const&>
               (__UnexistingClass *param_1,_func_void_Vector_ptr_Vector_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_68 [8];
  long local_60;
  Variant local_58 [8];
  long local_50;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_001105c8;
      puVar10 = (undefined4 *)*plVar8;
LAB_0011061d:
      puVar13 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_001105c8:
        uVar7 = 4;
        goto LAB_001105cd;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00110638;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0011061d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00110638:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector_ptr_Vector_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,0x1e);
    uVar4 = _LC109;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Vector(aVStack_68);
    cVar5 = Variant::can_convert_strict(*puVar10,0x23);
    uVar4 = _LC110;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Vector(local_58);
    (*param_2)((Vector *)(param_1 + (long)param_3),(Vector *)local_58);
    lVar1 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar8 = (long *)(local_50 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    lVar1 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar8 = (long *)(local_60 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_001105cd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&, Vector<int> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector<Vector2>const&,Vector<int>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001106d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector<Vector2>const&,Vector<int>const&>
            (p_Var4,(_func_void_Vector_ptr_Vector_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001106d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_00110915;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110a08:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110a08;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar5 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar6 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar6;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar5 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_00110915:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<float, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00110c25;
  }
  local_70 = 0;
  local_68 = &_LC4;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 3;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00110d37:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00110d37;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00110c25:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar7;
  long in_FS_OFFSET;
  int local_74;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar7 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar7 = 0;
  *(undefined4 *)(pPVar7 + 0x18) = 0;
  *(undefined8 *)(pPVar7 + 0x20) = 0;
  *(undefined4 *)(pPVar7 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar7 + 8) = (undefined1  [16])0x0;
  local_74 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_74,pPVar7);
  if (in_EDX != local_74) goto LAB_00110df2;
  local_68 = 0;
  local_58 = &_LC4;
  local_70 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_50._8_8_;
  local_50 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,3);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00110ee0:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00110ee0;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
  }
  lVar5 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar7 = local_58._0_4_;
  if (*(long *)(pPVar7 + 8) != local_50._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 8));
    uVar6 = local_50._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_50._8_8_;
    local_50 = auVar3 << 0x40;
    *(undefined8 *)(pPVar7 + 8) = uVar6;
  }
  if (*(long *)(pPVar7 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(pPVar7 + 0x10) = uVar6;
  }
  lVar5 = local_38;
  *(int *)(pPVar7 + 0x18) = local_40;
  if (*(long *)(pPVar7 + 0x20) == local_38) {
    *(undefined4 *)(pPVar7 + 0x28) = local_30;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 0x20));
    *(long *)(pPVar7 + 0x20) = local_38;
    *(undefined4 *)(pPVar7 + 0x28) = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_00110df2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* void call_get_argument_type_info_helper<Vector2 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector2_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_00111095;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111188:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111188;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar5 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar6 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar6;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar5 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_00111095:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Vector<Vector2>, Vector2 const&, Vector2 const&>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Vector2_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Vector2_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00111471;
  }
  local_70 = 0;
  local_68 = &_LC4;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x23;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011149f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011149f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00111471:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2,Vector2_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector2_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68)
    ;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_001115b5;
  }
  local_70 = 0;
  local_68 = &_LC4;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 5;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001116c7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001116c7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001115b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,Vector2_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector2_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68)
    ;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_001117b5;
  }
  local_70 = 0;
  local_68 = &_LC4;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001118c7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001118c7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001117b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<Vector2>, Vector2 const&, Vector2 const&>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Vector2_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Vector2_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00111a81;
  }
  local_70 = 0;
  local_68 = &_LC4;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x23;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00111aaf:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00111aaf;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00111a81:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Rect2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Rect2>::~MethodBindTRC(MethodBindTRC<Rect2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Vector2_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector2,Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<Vector2>, Vector2 const&, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&>::~MethodBindTRC
          (MethodBindTRC<Vector<Vector2>,Vector2_const&,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<Vector2>, Vector2 const&, Vector2 const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,Vector2_const&,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<Vector2> const&, Vector<int> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&,Vector<int>const&>::~MethodBindT
          (MethodBindT<Vector<Vector2>const&,Vector<int>const&> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* PolygonPathFinder::~PolygonPathFinder() */

void __thiscall PolygonPathFinder::~PolygonPathFinder(PolygonPathFinder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


