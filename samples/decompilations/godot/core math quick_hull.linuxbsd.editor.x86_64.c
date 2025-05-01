
/* HashMap<List<Geometry3D::MeshData::Face, DefaultAllocator>::Element*, int, HashMapHasherDefault,
   HashMapComparatorDefault<List<Geometry3D::MeshData::Face, DefaultAllocator>::Element*>,
   DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,
   DefaultAllocator>::Element*, int> > >::_lookup_pos(List<Geometry3D::MeshData::Face,
   DefaultAllocator>::Element* const&, unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
::_lookup_pos(HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
              *this,Element **param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(Element ***)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
          *param_2 = uVar11;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4
                                         ) + uVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* List<List<QuickHull::Face, DefaultAllocator>::Element*,
   DefaultAllocator>::push_back(List<QuickHull::Face, DefaultAllocator>::Element* const&) [clone
   .isra.0] */

void __thiscall
List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator>::push_back
          (List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator> *this,
          Element **param_1)

{
  Element *pEVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  
  if (*(long *)this == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
  pEVar1 = *param_1;
  puVar4[1] = 0;
  *puVar4 = pEVar1;
  plVar2 = *(long **)this;
  lVar3 = plVar2[1];
  puVar4[3] = plVar2;
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 8) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 != 0) {
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  *plVar2 = (long)puVar4;
  return;
}



/* HashMap<QuickHull::Edge, QuickHull::RetFaceConnect, QuickHull::Edge,
   HashMapComparatorDefault<QuickHull::Edge>, DefaultTypedAllocator<HashMapElement<QuickHull::Edge,
   QuickHull::RetFaceConnect> > >::_lookup_pos(QuickHull::Edge const&, unsigned int&) const [clone
   .isra.0] */

undefined8 __thiscall
HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
::_lookup_pos(HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
              *this,Edge *param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(Edge **)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
          *param_2 = uVar11;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4
                                         ) + uVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* CowData<bool>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<bool>::_copy_on_write(CowData<bool> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickHull::build(Vector<Vector3> const&, Geometry3D::MeshData&) */

undefined4 QuickHull::build(Vector *param_1,MeshData *param_2)

{
  uint *puVar1;
  float *pfVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  code *pcVar40;
  ulong uVar41;
  char cVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined8 *puVar49;
  float *pfVar50;
  Element *pEVar51;
  ulong uVar52;
  void *pvVar53;
  undefined8 uVar54;
  uint *puVar55;
  long *plVar56;
  undefined4 *puVar57;
  undefined8 *puVar58;
  int iVar59;
  ulong uVar60;
  ulong uVar61;
  uint uVar62;
  int *piVar63;
  float *pfVar64;
  long lVar65;
  float *pfVar66;
  int iVar67;
  long lVar68;
  int *piVar69;
  Plane *pPVar70;
  long lVar71;
  ulong unaff_RBP;
  char *pcVar72;
  ulong uVar73;
  ulong uVar74;
  char cVar75;
  ulong uVar76;
  ulong uVar77;
  long *plVar78;
  uint uVar79;
  Element *pEVar80;
  long in_FS_OFFSET;
  bool bVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [12];
  char *pcVar94;
  Plane *local_200;
  uint local_1f0;
  uint local_1e8;
  undefined4 local_1d0;
  long *local_178;
  undefined8 *local_170;
  Element *local_168;
  Element *local_160 [2];
  undefined8 *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  Element *local_118;
  long lStack_110;
  long local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  long lStack_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  int local_b0;
  int iStack_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar49 = *(undefined8 **)(param_1 + 8);
  local_98 = 0;
  fStack_90 = 0.0;
  fStack_8c = 0.0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  if (puVar49 != (undefined8 *)0x0) {
    fVar91 = 0.0;
    lVar68 = 0;
    do {
      while( true ) {
        lVar65 = puVar49[-1];
        if (lVar65 <= lVar68) goto LAB_001007c0;
        if (lVar68 == 0) break;
        pfVar64 = (float *)((long)puVar49 + lVar68 * 0xc);
        if (((fVar91 < 0.0) || (fStack_88 < 0.0)) || (fStack_84 < 0.0)) {
          _err_print_error("expand_to","./core/math/aabb.h",0x158);
          puVar49 = *(undefined8 **)(param_1 + 8);
          fVar91 = fStack_8c;
        }
        fVar84 = *pfVar64;
        lVar68 = lVar68 + 1;
        fVar86 = pfVar64[1];
        fVar89 = fVar84;
        if ((float)local_98 <= fVar84) {
          fVar89 = (float)local_98;
        }
        if (fVar84 <= fVar91 + (float)local_98) {
          fVar84 = fVar91 + (float)local_98;
        }
        fVar87 = fVar86;
        if (fVar86 <= fStack_88 + local_98._4_4_) {
          fVar87 = fStack_88 + local_98._4_4_;
        }
        if (local_98._4_4_ <= fVar86) {
          fVar86 = local_98._4_4_;
        }
        fVar91 = fVar84 - fVar89;
        fVar84 = pfVar64[2];
        fStack_88 = fVar87 - fVar86;
        local_98 = CONCAT44(fVar86,fVar89);
        fVar86 = fVar84;
        if (fVar84 <= fStack_84 + fStack_90) {
          fVar86 = fStack_84 + fStack_90;
        }
        if (fStack_90 <= fVar84) {
          fVar84 = fStack_90;
        }
        fStack_84 = fVar86 - fVar84;
        fStack_90 = fVar84;
        fStack_8c = fVar91;
        if (puVar49 == (undefined8 *)0x0) goto LAB_001007bd;
      }
      local_98 = *puVar49;
      lVar68 = 1;
      fStack_90 = *(float *)(puVar49 + 1);
    } while (puVar49 != (undefined8 *)0x0);
LAB_001007bd:
    lVar65 = 0;
LAB_001007c0:
    if (((fVar91 != 0.0) || (fStack_88 != 0.0)) || (fStack_84 != 0.0)) {
      local_150 = (undefined8 *)0x0;
      if (lVar65 < 0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x157);
        puVar49 = *(undefined8 **)(param_1 + 8);
      }
      else if (lVar65 != 0) {
        CowData<bool>::_copy_on_write((CowData<bool> *)&local_150);
        uVar73 = lVar65 - 1U | lVar65 - 1U >> 1;
        uVar73 = uVar73 | uVar73 >> 2;
        uVar73 = uVar73 | uVar73 >> 4;
        uVar73 = uVar73 | uVar73 >> 8;
        puVar49 = (undefined8 *)Memory::alloc_static((uVar73 | uVar73 >> 0x10) + 0x11,false);
        if (puVar49 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171);
          puVar49 = *(undefined8 **)(param_1 + 8);
        }
        else {
          local_150 = puVar49 + 2;
          *puVar49 = 1;
          puVar49[1] = lVar65;
          puVar49 = *(undefined8 **)(param_1 + 8);
        }
      }
      uVar41 = _LC47;
      uVar73 = 0;
      local_148 = (undefined1  [16])0x0;
      local_128 = _LC47;
      local_138 = (undefined1  [16])0x0;
      if (puVar49 != (undefined8 *)0x0) {
LAB_001008e9:
        do {
          if ((long)puVar49[-1] <= (long)uVar73) break;
          auVar93 = Vector3::snappedf(_LC48);
          local_78 = auVar93._0_8_;
          local_e8 = 0;
          uStack_70 = CONCAT44(uStack_70._4_4_,auVar93._8_4_);
          cVar42 = HashSet<Vector3,HashMapHasherDefault,HashMapComparatorDefault<Vector3>>::
                   _lookup_pos((HashSet<Vector3,HashMapHasherDefault,HashMapComparatorDefault<Vector3>>
                                *)local_148,(Vector3 *)&local_78,&local_e8);
          if (cVar42 != '\0') {
            if (local_150 == (undefined8 *)0x0) {
LAB_00100ac0:
              uVar60 = 0;
            }
            else {
              uVar60 = local_150[-1];
              if ((long)uVar73 < (long)uVar60) {
                CowData<bool>::_copy_on_write((CowData<bool> *)&local_150);
                *(undefined1 *)((long)local_150 + uVar73) = 0;
                puVar49 = *(undefined8 **)(param_1 + 8);
                uVar73 = uVar73 + 1;
                if (puVar49 == (undefined8 *)0x0) break;
                goto LAB_001008e9;
              }
            }
LAB_00100ac3:
            iVar43 = 0x38;
            pcVar72 = "./core/templates/vector.h";
            pcVar94 = "((Vector<T> *)(this))->_cowdata.size()";
            goto LAB_00100aed;
          }
          if (local_150 == (undefined8 *)0x0) goto LAB_00100ac0;
          uVar60 = local_150[-1];
          if ((long)uVar60 <= (long)uVar73) goto LAB_00100ac3;
          CowData<bool>::_copy_on_write((CowData<bool> *)&local_150);
          *(undefined1 *)((long)local_150 + uVar73) = 1;
          uVar73 = uVar73 + 1;
          HashSet<Vector3,HashMapHasherDefault,HashMapComparatorDefault<Vector3>>::insert
                    ((Vector3 *)&local_e8);
          puVar49 = *(undefined8 **)(param_1 + 8);
        } while (puVar49 != (undefined8 *)0x0);
        unaff_RBP = unaff_RBP & 0xffffffff;
      }
      iVar43 = AABB::get_longest_axis_index();
      puVar49 = local_150;
      pfVar64 = *(float **)(param_1 + 8);
      local_a8 = (undefined1  [16])0x0;
      if (pfVar64 == (float *)0x0) {
        uVar60 = 0;
        uVar73 = 0;
      }
      else {
        uVar52 = *(ulong *)(pfVar64 + -2);
        fVar91 = 0.0;
        cVar75 = '\0';
        cVar42 = '\0';
        pfVar50 = pfVar64 + iVar43;
        fVar84 = 0.0;
        for (uVar60 = 0; (long)uVar60 < (long)uVar52; uVar60 = uVar60 + 1) {
          if (local_150 == (undefined8 *)0x0) goto LAB_00100b20;
          uVar73 = local_150[-1];
          if ((long)local_150[-1] <= (long)uVar60) goto LAB_00100b3e;
          cVar3 = *(char *)((long)local_150 + uVar60);
          if (cVar3 != '\0') {
            fVar86 = *pfVar50;
            if (uVar60 == 0) {
              unaff_RBP = 0;
              cVar42 = cVar3;
              fVar91 = fVar86;
            }
            else {
              if (fVar86 < fVar91) {
                unaff_RBP = uVar60;
                cVar42 = cVar3;
                fVar91 = fVar86;
              }
              unaff_RBP = unaff_RBP & 0xffffffff;
              if (fVar86 <= fVar84) goto LAB_00100a63;
            }
            fVar84 = fVar86;
            local_1f0 = (uint)uVar60;
            cVar75 = cVar3;
          }
LAB_00100a63:
          pfVar50 = pfVar50 + 3;
        }
        if (cVar75 == '\0') {
          local_1f0 = 0;
          uVar60 = 0;
        }
        else {
          local_a8 = ZEXT416(local_1f0) << 0x20;
          uVar60 = (ulong)(int)local_1f0;
        }
        if (cVar42 != '\0') {
          local_a8._0_4_ = (int)unaff_RBP;
        }
        uVar73 = uVar52;
        if ((long)uVar60 < (long)uVar52) {
          uVar48 = local_a8._0_4_;
          uVar61 = (ulong)(int)local_a8._0_4_;
          pfVar50 = pfVar64 + (long)(int)local_1f0 * 3;
          uVar60 = uVar61;
          if ((long)uVar61 < (long)uVar52 && (int)local_a8._0_4_ >> 7 == 0) {
            uVar60 = 0;
            pfVar2 = pfVar64 + uVar61 * 3;
            fVar91 = pfVar2[2];
            fVar84 = pfVar2[1];
            fVar86 = *pfVar2;
            if (0 < (long)uVar52) {
              if (local_150 == (undefined8 *)0x0) {
                uVar60 = 0;
                uVar73 = 0;
              }
              else {
                uVar61 = local_150[-1];
                fVar89 = 0.0;
                fVar88 = fVar91 - pfVar50[2];
                fVar90 = fVar84 - pfVar50[1];
                cVar42 = '\0';
                fVar87 = fVar86 - *pfVar50;
                uVar44 = 0;
                pfVar50 = pfVar64;
                uVar77 = 0;
                while (uVar60 = uVar77, uVar73 = uVar61, (long)uVar77 < (long)uVar61) {
                  if (*(char *)((long)local_150 + uVar77) != '\0') {
                    fVar83 = fVar84 - pfVar50[1];
                    fVar82 = fVar86 - *pfVar50;
                    fVar85 = fVar91 - pfVar50[2];
                    fVar92 = fVar87 * fVar83 - fVar90 * fVar82;
                    fVar82 = fVar82 * fVar88 - fVar87 * fVar85;
                    fVar83 = fVar85 * fVar90 - fVar83 * fVar88;
                    fVar85 = fVar90 * fVar83 - fVar87 * fVar82;
                    fVar83 = fVar87 * fVar92 - fVar83 * fVar88;
                    fVar82 = fVar82 * fVar88 - fVar92 * fVar90;
                    fVar92 = fVar82 * fVar82 + fVar83 * fVar83 + fVar85 * fVar85;
                    if (fVar92 == 0.0) {
                      fVar85 = 0.0;
                      fVar83 = 0.0;
                      fVar82 = 0.0;
                    }
                    else {
                      fVar92 = SQRT(fVar92);
                      fVar82 = fVar82 / fVar92;
                      fVar83 = fVar83 / fVar92;
                      fVar85 = fVar85 / fVar92;
                    }
                    fVar82 = ABS((fVar86 * fVar82 + fVar84 * fVar83 + fVar91 * fVar85) -
                                 (fVar82 * *pfVar50 + fVar83 * pfVar50[1] + fVar85 * pfVar50[2]));
                    if ((uVar77 == 0) || (fVar89 < fVar82)) {
                      local_1e8 = uVar44;
                      cVar42 = *(char *)((long)local_150 + uVar77);
                      fVar89 = fVar82;
                    }
                  }
                  uVar73 = uVar77 + 1;
                  pfVar50 = pfVar50 + 3;
                  if (uVar52 == uVar73) {
                    uVar60 = (ulong)(int)local_1e8;
                    if (cVar42 == '\0') {
                      local_1e8 = 0;
                      uVar60 = 0;
                    }
                    else {
                      local_a8._8_4_ = local_1e8;
                      uVar73 = uVar52;
                      if ((long)uVar52 <= (long)uVar60) break;
                    }
                    pfVar50 = pfVar64 + uVar60 * 3;
                    fVar82 = fVar90 * (fVar86 - *pfVar50) - fVar87 * (fVar84 - pfVar50[1]);
                    fVar87 = fVar87 * (fVar91 - pfVar50[2]) - (fVar86 - *pfVar50) * fVar88;
                    fVar89 = fVar88 * (fVar84 - pfVar50[1]) - fVar90 * (fVar91 - pfVar50[2]);
                    fVar88 = fVar89 * fVar89 + fVar87 * fVar87 + fVar82 * fVar82;
                    if (fVar88 == 0.0) {
                      fVar82 = 0.0;
                      fVar87 = 0.0;
                      fVar89 = 0.0;
                    }
                    else {
                      fVar88 = SQRT(fVar88);
                      fVar89 = fVar89 / fVar88;
                      fVar87 = fVar87 / fVar88;
                      fVar82 = fVar82 / fVar88;
                    }
                    fVar88 = 0.0;
                    cVar42 = '\0';
                    uVar60 = 0;
                    pfVar50 = pfVar64;
                    goto LAB_00100f63;
                  }
                  uVar44 = (uint)uVar73;
                  uVar77 = uVar73;
                }
              }
            }
          }
        }
      }
      goto LAB_00100b3e;
    }
  }
  uVar48 = 0x14;
  goto LAB_00100bc2;
joined_r0x00101353:
  if ((lVar68 == 0) || (*(long *)(lVar68 + -8) <= (long)uVar60)) goto LAB_0010142b;
  uVar44 = (uint)uVar60;
  if ((uVar48 != uVar44 && uVar44 != local_1f0) &&
     ((local_1e8 != uVar44 && (local_a8._12_4_ != uVar44)))) {
    uVar73 = puVar49[-1];
    if ((long)uVar73 <= (long)uVar60) goto LAB_00100b3e;
    if (((*(char *)((long)puVar49 + uVar60) != '\0') && (local_178 != (long *)0x0)) &&
       (pfVar64 = (float *)*local_178, pfVar64 != (float *)0x0)) {
      pfVar50 = (float *)(lVar68 + uVar60 * 0xc);
      do {
        if (fVar89 < (*pfVar64 * *pfVar50 + pfVar64[1] * pfVar50[1] + pfVar64[2] * pfVar50[2]) -
                     pfVar64[3]) {
          Vector<int>::push_back((Vector<int> *)(pfVar64 + 8),uVar44);
          lVar68 = *(long *)(param_1 + 8);
          break;
        }
        pfVar64 = *(float **)(pfVar64 + 0xc);
      } while (pfVar64 != (float *)0x0);
    }
  }
  uVar60 = uVar60 + 1;
  goto joined_r0x00101353;
LAB_00102ad6:
  uVar60 = uVar77;
  uVar73 = 0;
  goto LAB_00100b3e;
LAB_00101a77:
  do {
    iVar43 = *(int *)((long)plVar56 + uVar73 * 4 + 0xc);
    iVar59 = *(int *)((long)plVar56 +
                     (long)((int)uVar73 + (int)((uVar73 & 0xffffffff) / 3) * -3) * 4 + 0x10);
    iVar67 = iVar59;
    iStack_ac = iVar43;
    if (iVar43 <= iVar59) {
      iVar67 = iVar43;
      iStack_ac = iVar59;
    }
    local_b0 = iVar67;
    if ((lStack_110 != 0) && (local_f0._4_4_ != 0)) {
      uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_f0 & 0xffffffff) * 4));
      lVar68 = *(long *)(hash_table_size_primes_inv + (local_f0 & 0xffffffff) * 8);
      uVar60 = CONCAT44(iStack_ac,iVar67) * 0x3ffff - 1;
      uVar60 = (uVar60 ^ uVar60 >> 0x1f) * 0x15;
      uVar60 = (uVar60 ^ uVar60 >> 0xb) * 0x41;
      uVar46 = (uint)(uVar60 >> 0x16) ^ (uint)uVar60;
      uVar44 = 1;
      if (uVar46 != 0) {
        uVar44 = uVar46;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar44 * lVar68;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar52;
      lVar65 = SUB168(auVar12 * auVar28,8);
      uVar46 = *(uint *)(local_108 + lVar65 * 4);
      uVar60 = (ulong)uVar46;
      uVar62 = SUB164(auVar12 * auVar28,8);
      if (uVar46 != 0) {
        uVar46 = 0;
        while (((uint)uVar60 != uVar44 ||
               (CONCAT44(iStack_ac,iVar67) != *(long *)(*(long *)(lStack_110 + lVar65 * 8) + 0x10)))
              ) {
          uVar46 = uVar46 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar62 + 1) * lVar68;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar52;
          lVar65 = SUB168(auVar13 * auVar29,8);
          uVar47 = *(uint *)(local_108 + lVar65 * 4);
          uVar60 = (ulong)uVar47;
          uVar62 = SUB164(auVar13 * auVar29,8);
          if ((uVar47 == 0) ||
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar60 * lVar68, auVar30._8_8_ = 0,
             auVar30._0_8_ = uVar52, auVar15._8_8_ = 0,
             auVar15._0_8_ =
                  (ulong)((*(uint *)(hash_table_size_primes + (local_f0 & 0xffffffff) * 4) + uVar62)
                         - SUB164(auVar14 * auVar30,8)) * lVar68, auVar31._8_8_ = 0,
             auVar31._0_8_ = uVar52, SUB164(auVar15 * auVar31,8) < uVar46)) goto LAB_00101dd1;
        }
        pEVar51 = *(Element **)(lStack_110 + (ulong)uVar62 * 8);
        if (pEVar51 != (Element *)0x0) goto LAB_00101bfb;
      }
    }
LAB_00101dd1:
    local_e8 = 0;
    uStack_e4 = 0;
    lStack_e0 = 0;
    HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
    ::insert((Edge *)local_160,(RetFaceConnect *)&local_118,SUB81(&local_b0,0));
    pEVar51 = local_160[0];
LAB_00101bfb:
    if (iVar43 == iVar67) {
      *(undefined8 *)(pEVar51 + 0x18) = uVar54;
    }
    else {
      *(undefined8 *)(pEVar51 + 0x20) = uVar54;
    }
    uVar73 = uVar73 + 1;
  } while (uVar73 != 4);
  if (pvVar53 != (void *)0x0) {
    Memory::free_static(pvVar53,false);
  }
  plVar56 = (long *)plVar56[6];
  if (plVar56 == (long *)0x0) goto code_r0x00101c41;
  goto LAB_00101970;
code_r0x00101c41:
  if (local_168 != (Element *)0x0) {
    for (local_200 = *(Plane **)local_168; local_200 != (Plane *)0x0;
        local_200 = *(Plane **)(local_200 + 0x20)) {
      uVar52 = 0;
      while( true ) {
        uVar61 = uVar52;
        if (*(uint *)(local_200 + 0x10) <= (uint)uVar61) break;
        uVar52 = (ulong)((uint)uVar61 + 1);
        uVar44 = *(uint *)(*(long *)(local_200 + 0x18) + uVar61 * 4);
        uVar46 = *(uint *)(*(long *)(local_200 + 0x18) +
                          (uVar52 % (ulong)*(uint *)(local_200 + 0x10)) * 4);
        uVar47 = uVar46;
        uVar62 = uVar44;
        if ((int)uVar46 < (int)uVar44) {
          uVar47 = uVar44;
          uVar62 = uVar46;
        }
        local_e8 = 0;
        cVar42 = HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
                 ::_lookup_pos((HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
                                *)&local_118,(Edge *)CONCAT44(uVar47,uVar62),&local_e8);
        lVar68 = lStack_110;
        if ((cVar42 == '\0') || (lVar65 = *(long *)(lStack_110 + (ulong)local_e8 * 8), lVar65 == 0))
        {
          _err_print_error("build","core/math/quick_hull.cpp",0x179,
                           "Condition \"!F\" is true. Continuing.",0);
        }
        else {
          pPVar70 = *(Plane **)(lVar65 + 0x18);
          if ((pPVar70 == local_200) && (pPVar70 = *(Plane **)(lVar65 + 0x20), local_200 == pPVar70)
             ) {
            _err_print_error("build","core/math/quick_hull.cpp",0x17b,
                             "Condition \"O == E\" is true. Continuing.",0);
          }
          else if (pPVar70 == (Plane *)0x0) {
            _err_print_error("build","core/math/quick_hull.cpp",0x17c,
                             "Condition \"O == nullptr\" is true. Continuing.",0);
          }
          else {
            cVar42 = Plane::is_equal_approx(pPVar70);
            if (cVar42 != '\0') {
              uVar62 = *(uint *)(pPVar70 + 0x10);
              uVar60 = (ulong)uVar62;
              uVar73 = 0;
              do {
                uVar47 = (uint)uVar73;
                if ((int)uVar62 <= (int)uVar47) goto LAB_00102025;
                if (uVar62 <= uVar47) goto LAB_00101fde;
                lVar71 = uVar73 * 4;
                uVar73 = uVar73 + 1;
                uVar79 = uVar47;
              } while (*(uint *)(*(long *)(pPVar70 + 0x18) + lVar71) != uVar44);
              while( true ) {
                iVar43 = (int)uVar61;
                uVar73 = (long)(int)uVar79 % (long)(int)uVar62;
                if ((uint)uVar60 <= (uint)uVar73) goto LAB_00101fc3;
                uVar79 = uVar79 + 1;
                uVar4 = *(uint *)(*(long *)(pPVar70 + 0x18) + (long)(int)(uint)uVar73 * 4);
                uVar73 = (long)(int)uVar79 % (long)(int)uVar62;
                if ((uint)uVar60 <= (uint)uVar73) goto LAB_00101fc3;
                uVar5 = *(uint *)(*(long *)(pPVar70 + 0x18) + (long)(int)(uint)uVar73 * 4);
                if ((uVar46 == uVar4) && (uVar44 == uVar5)) break;
                if (uVar44 != uVar4) {
                  uVar61 = (ulong)(iVar43 + 1U);
                  LocalVector<int,unsigned_int,false,false>::insert
                            ((LocalVector<int,unsigned_int,false,false> *)(local_200 + 0x10),
                             iVar43 + 1U,uVar4);
                }
                iVar43 = (int)uVar61;
                uVar73 = (ulong)uVar5;
                uVar60 = (ulong)uVar4;
                if ((int)uVar4 <= (int)uVar5) {
                  uVar73 = (ulong)uVar4;
                  uVar60 = (ulong)uVar5;
                }
                local_e8 = 0;
                cVar42 = HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
                         ::_lookup_pos((HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
                                        *)&local_118,(Edge *)(uVar73 | uVar60 << 0x20),&local_e8);
                if ((cVar42 == '\0') ||
                   (lVar71 = *(long *)(lVar68 + (ulong)local_e8 * 8), lVar71 == 0)) {
                  _err_print_error("build","core/math/quick_hull.cpp",0x193,
                                   "Condition \"!F2\" is true. Continuing.");
                }
                else if (*(Plane **)(lVar71 + 0x18) == pPVar70) {
                  *(Plane **)(lVar71 + 0x18) = local_200;
                }
                else if (*(Plane **)(lVar71 + 0x20) == pPVar70) {
                  *(Plane **)(lVar71 + 0x20) = local_200;
                }
                if ((int)uVar62 <= (int)(uVar79 - uVar47)) break;
                uVar60 = (ulong)*(uint *)(pPVar70 + 0x10);
              }
              uVar52 = (ulong)(iVar43 + 1);
LAB_00102025:
              for (plVar56 = (long *)local_100._0_8_; plVar56 != (long *)0x0;
                  plVar56 = (long *)*plVar56) {
                if ((Plane *)plVar56[3] == pPVar70) {
                  plVar56[3] = 0;
                }
                if ((Plane *)plVar56[4] == pPVar70) {
                  plVar56[4] = 0;
                }
              }
              if ((lVar68 != 0) && (iVar43 = local_f0._4_4_, local_f0._4_4_ != 0)) {
                uVar44 = *(uint *)(hash_table_size_primes + (local_f0 & 0xffffffff) * 4);
                uVar61 = CONCAT44(0,uVar44);
                lVar71 = *(long *)(hash_table_size_primes_inv + (local_f0 & 0xffffffff) * 8);
                uVar73 = *(long *)(lVar65 + 0x10) * 0x3ffff - 1;
                uVar73 = (uVar73 ^ uVar73 >> 0x1f) * 0x15;
                uVar73 = (uVar73 ^ uVar73 >> 0xb) * 0x41;
                uVar73 = uVar73 ^ uVar73 >> 0x16;
                uVar60 = 1;
                if ((int)uVar73 != 0) {
                  uVar60 = uVar73 & 0xffffffff;
                }
                uVar46 = 0;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar60 * lVar71;
                auVar32._8_8_ = 0;
                auVar32._0_8_ = uVar61;
                uVar73 = SUB168(auVar16 * auVar32,8);
LAB_00102177:
                iVar59 = (int)uVar73;
                uVar73 = uVar73 & 0xffffffff;
                uVar62 = *(uint *)(local_108 + uVar73 * 4);
                if ((uVar62 != 0) &&
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar62 * lVar71, auVar34._8_8_ = 0,
                   auVar34._0_8_ = uVar61, auVar19._8_8_ = 0,
                   auVar19._0_8_ = (ulong)((uVar44 + iVar59) - SUB164(auVar18 * auVar34,8)) * lVar71
                   , auVar35._8_8_ = 0, auVar35._0_8_ = uVar61,
                   uVar46 <= SUB164(auVar19 * auVar35,8))) {
                  if ((uVar62 != (uint)uVar60) ||
                     (*(long *)(lVar65 + 0x10) != *(long *)(*(long *)(lVar68 + uVar73 * 8) + 0x10)))
                  goto LAB_00102163;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = (ulong)(iVar59 + 1) * lVar71;
                  auVar36._8_8_ = 0;
                  auVar36._0_8_ = uVar61;
                  uVar60 = SUB168(auVar20 * auVar36,8);
                  while( true ) {
                    puVar49 = (undefined8 *)(lVar68 + uVar73 * 8);
                    plVar56 = (long *)*puVar49;
                    puVar55 = (uint *)(local_108 + (uVar60 & 0xffffffff) * 4);
                    puVar1 = (uint *)(local_108 + uVar73 * 4);
                    uVar46 = *puVar55;
                    if ((uVar46 == 0) ||
                       (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar46 * lVar71, auVar37._8_8_ = 0
                       , auVar37._0_8_ = uVar61, auVar22._8_8_ = 0,
                       auVar22._0_8_ =
                            (ulong)(((int)uVar60 + uVar44) - SUB164(auVar21 * auVar37,8)) * lVar71,
                       auVar38._8_8_ = 0, auVar38._0_8_ = uVar61, SUB164(auVar22 * auVar38,8) == 0))
                    break;
                    uVar73 = uVar60 & 0xffffffff;
                    *puVar55 = *puVar1;
                    puVar58 = (undefined8 *)(lVar68 + (uVar60 & 0xffffffff) * 8);
                    uVar54 = *puVar58;
                    *puVar1 = uVar46;
                    *puVar58 = plVar56;
                    *puVar49 = uVar54;
                    auVar23._8_8_ = 0;
                    auVar23._0_8_ = (ulong)((int)uVar60 + 1) * lVar71;
                    auVar39._8_8_ = 0;
                    auVar39._0_8_ = uVar61;
                    uVar60 = SUB168(auVar23 * auVar39,8);
                  }
                  *puVar1 = 0;
                  if (plVar56 == (long *)local_100._0_8_) {
                    local_100._0_8_ = *plVar56;
                  }
                  plVar78 = (long *)plVar56[1];
                  if (plVar56 == (long *)local_100._8_8_) {
                    local_100._8_8_ = plVar78;
                  }
                  if (plVar78 != (long *)0x0) {
                    *plVar78 = *plVar56;
                    plVar56 = (long *)*puVar49;
                  }
                  if (*plVar56 != 0) {
                    *(long *)(*plVar56 + 8) = plVar56[1];
                  }
                  Memory::free_static((void *)*puVar49,false);
                  *puVar49 = 0;
                  local_f0 = CONCAT44(iVar43 + -1,(undefined4)local_f0);
                }
              }
              pEVar80 = local_168;
              if (local_168 != (Element *)0x0) {
                if (local_168 == *(Element **)(pPVar70 + 0x30)) {
                  lVar68 = *(long *)(pPVar70 + 0x20);
                  if (*(Plane **)local_168 == pPVar70) {
                    *(long *)local_168 = lVar68;
                  }
                  lVar65 = *(long *)(pPVar70 + 0x28);
                  if (*(Plane **)(local_168 + 8) == pPVar70) {
                    *(long *)(local_168 + 8) = lVar65;
                  }
                  if (lVar65 != 0) {
                    *(long *)(lVar65 + 0x20) = lVar68;
                    lVar68 = *(long *)(pPVar70 + 0x20);
                  }
                  if (lVar68 != 0) {
                    *(long *)(lVar68 + 0x28) = lVar65;
                  }
                  if (*(void **)(pPVar70 + 0x18) != (void *)0x0) {
                    if (*(int *)(pPVar70 + 0x10) != 0) {
                      *(undefined4 *)(pPVar70 + 0x10) = 0;
                    }
                    Memory::free_static(*(void **)(pPVar70 + 0x18),false);
                  }
                  Memory::free_static(pPVar70,false);
                  *(int *)(pEVar80 + 0x10) = *(int *)(pEVar80 + 0x10) + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false");
                }
                if (*(int *)(pEVar80 + 0x10) == 0) {
                  Memory::free_static(pEVar80,false);
                  local_168 = (Element *)0x0;
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_00101e25;
LAB_00102163:
  uVar46 = uVar46 + 1;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (ulong)(iVar59 + 1) * lVar71;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar61;
  uVar73 = SUB168(auVar17 * auVar33,8);
  goto LAB_00102177;
  while( true ) {
    if ((*(char *)((long)local_150 + uVar60) != '\0') &&
       ((fVar90 = ABS((*pfVar50 * fVar89 + pfVar50[1] * fVar87 + pfVar50[2] * fVar82) -
                      (fVar86 * fVar89 + fVar84 * fVar87 + fVar91 * fVar82)), uVar60 == 0 ||
        (fVar88 < fVar90)))) {
      local_1d0 = (undefined4)uVar60;
      cVar42 = *(char *)((long)local_150 + uVar60);
      fVar88 = fVar90;
    }
    pfVar50 = pfVar50 + 3;
    bVar81 = uVar60 == uVar77;
    uVar60 = uVar60 + 1;
    if (bVar81) break;
LAB_00100f63:
    uVar73 = uVar61;
    if ((long)uVar61 <= (long)uVar60) goto LAB_00100b3e;
  }
  if (cVar42 != '\0') {
    local_a8._12_4_ = local_1d0;
  }
  fVar86 = 0.0;
  piVar63 = (int *)local_a8;
  fVar84 = 0.0;
  fVar91 = 0.0;
  do {
    uVar60 = (ulong)*piVar63;
    uVar73 = uVar52;
    if (((long)uVar52 <= (long)uVar60) || ((long)uVar60 < 0)) goto LAB_00100b3e;
    piVar63 = piVar63 + 1;
    pfVar50 = pfVar64 + uVar60 * 3;
    fVar86 = fVar86 + *pfVar50;
    fVar84 = fVar84 + pfVar50[1];
    fVar91 = fVar91 + pfVar50[2];
  } while (piVar63 != (int *)&local_98);
  local_178 = (long *)0x0;
  fVar86 = fVar86 * _LC51;
  fVar84 = fVar84 * _LC51;
  fVar91 = fVar91 * _LC51;
  piVar63 = (int *)build(Vector<Vector3>const&,Geometry3D::MeshData&)::face_order;
  uVar62 = local_1f0;
  uVar44 = uVar48;
  uVar46 = local_1e8;
  while( true ) {
    uVar60 = (ulong)uVar46;
    uVar52 = (ulong)uVar44;
    local_78 = 0;
    local_50 = 0;
    local_68 = CONCAT44(uVar62,uVar44);
    local_60 = (void *)CONCAT44(local_60._4_4_,uVar46);
    uStack_70 = 0;
    if (pfVar64 == (float *)0x0) break;
    uVar73 = *(ulong *)(pfVar64 + -2);
    if ((long)uVar73 <= (long)uVar60) goto LAB_00100b3e;
    pfVar50 = pfVar64 + uVar60 * 3;
    uVar60 = (ulong)uVar62;
    if (((long)uVar73 <= (long)uVar60) ||
       (pfVar2 = pfVar64 + uVar60 * 3, uVar60 = uVar52, (long)uVar73 <= (long)uVar52))
    goto LAB_00100b3e;
    pfVar64 = pfVar64 + uVar52 * 3;
    fVar89 = *pfVar64;
    fVar87 = pfVar64[2];
    fVar88 = pfVar64[1];
    fVar82 = (fVar89 - *pfVar2) * (fVar87 - pfVar50[2]) - (fVar89 - *pfVar50) * (fVar87 - pfVar2[2])
    ;
    fVar90 = (fVar88 - pfVar50[1]) * (fVar87 - pfVar2[2]) -
             (fVar87 - pfVar50[2]) * (fVar88 - pfVar2[1]);
    fVar83 = (fVar89 - *pfVar50) * (fVar88 - pfVar2[1]) - (fVar88 - pfVar50[1]) * (fVar89 - *pfVar2)
    ;
    fVar85 = fVar90 * fVar90 + fVar82 * fVar82 + fVar83 * fVar83;
    if (fVar85 == 0.0) {
      fVar90 = 0.0;
      fVar82 = 0.0;
      fVar83 = 0.0;
      fVar89 = fVar89 * 0.0 + fVar88 * 0.0 + fVar87 * 0.0;
    }
    else {
      fVar85 = SQRT(fVar85);
      fVar82 = fVar82 / fVar85;
      fVar90 = fVar90 / fVar85;
      fVar83 = fVar83 / fVar85;
      fVar89 = fVar88 * fVar82 + fVar89 * fVar90 + fVar87 * fVar83;
      if (fVar89 < fVar90 * fVar86 + fVar82 * fVar84 + fVar91 * fVar83) {
        local_68 = CONCAT44(uVar44,uVar62);
        fVar90 = (float)(_LC53 ^ (uint)fVar90);
        fVar82 = (float)(_LC53 ^ (uint)fVar82);
        fVar83 = (float)(_LC53 ^ (uint)fVar83);
        fVar89 = (float)(_LC53 ^ (uint)fVar89);
      }
    }
    piVar69 = piVar63 + 3;
    local_78 = CONCAT44(fVar82,fVar90);
    uStack_70 = CONCAT44(fVar89,fVar83);
    List<QuickHull::Face,DefaultAllocator>::push_back
              ((List<QuickHull::Face,DefaultAllocator> *)&local_178,(Face *)&local_78);
    if (piVar69 == (int *)0x106f10) {
      lVar68 = *(long *)(param_1 + 8);
      uVar60 = 0;
      fVar89 = (float)((double)(fStack_8c + fStack_88 + fStack_84) * __LC54);
      goto joined_r0x00101353;
    }
    pfVar64 = *(float **)(param_1 + 8);
    uVar46 = *(uint *)(local_a8 + (long)piVar63[5] * 4);
    uVar62 = *(uint *)(local_a8 + (long)piVar63[4] * 4);
    uVar44 = *(uint *)(local_a8 + (long)*piVar69 * 4);
    piVar63 = piVar69;
  }
LAB_00100b20:
  uVar73 = 0;
LAB_00100b3e:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar60,uVar73,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar40 = (code *)invalidInstructionException();
  (*pcVar40)();
LAB_0010142b:
  List<QuickHull::Face,DefaultAllocator>::sort_custom<Comparator<QuickHull::Face>>
            ((List<QuickHull::Face,DefaultAllocator> *)&local_178);
  for (iVar43 = debug_stop_after; iVar43 != 0; iVar43 = iVar43 + -1) {
    if (local_178 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar40 = (code *)invalidInstructionException();
      (*pcVar40)();
    }
    pfVar64 = (float *)local_178[1];
    piVar63 = *(int **)(pfVar64 + 10);
    if ((piVar63 == (int *)0x0) || (uVar52 = *(ulong *)(piVar63 + -2), uVar52 == 0)) break;
    if ((long)uVar52 < 1) {
LAB_00101809:
      _err_print_error("build","core/math/quick_hull.cpp",0xe7,
                       "Condition \"next == -1\" is true. Returning: ERR_BUG",0,0);
      uVar48 = 0x2f;
      goto LAB_00101833;
    }
    uVar60 = (ulong)*piVar63;
    lVar68 = *(long *)(param_1 + 8);
    if ((long)uVar60 < 0) {
LAB_001014fd:
      if (lVar68 == 0) {
LAB_00101801:
        uVar73 = 0;
      }
      else {
        uVar73 = *(ulong *)(lVar68 + -8);
      }
      goto LAB_00100b3e;
    }
    if (lVar68 == 0) goto LAB_00101801;
    uVar61 = *(ulong *)(lVar68 + -8);
    uVar74 = 0;
    uVar77 = 0xffffffff;
    fVar87 = 0.0;
    uVar76 = 0;
    while( true ) {
      uVar73 = uVar61;
      if ((long)uVar61 <= (long)uVar60) goto LAB_00100b3e;
      pfVar50 = (float *)(lVar68 + uVar60 * 0xc);
      fVar88 = (*pfVar64 * *pfVar50 + pfVar64[1] * pfVar50[1] + pfVar64[2] * pfVar50[2]) -
               pfVar64[3];
      if (fVar87 < fVar88) {
        uVar77 = uVar76;
        fVar87 = fVar88;
      }
      uVar74 = uVar74 + 1;
      if (uVar52 == uVar74) break;
      uVar60 = (ulong)piVar63[uVar74];
      uVar76 = uVar74 & 0xffffffff;
      if ((long)uVar60 < 0) goto LAB_001014fd;
    }
    if ((int)uVar77 == -1) goto LAB_00101809;
    uVar77 = (ulong)(int)uVar77;
    uVar60 = uVar77;
    uVar73 = uVar52;
    if (((long)uVar77 < 0) || ((long)uVar52 <= (long)uVar77)) goto LAB_00100b3e;
    uVar60 = (ulong)piVar63[uVar77];
    uVar73 = uVar61;
    if (((long)uVar60 < 0) || ((long)uVar61 <= (long)uVar60)) goto LAB_00100b3e;
    pEVar80 = (Element *)*local_178;
    local_c0 = uVar41;
    pfVar50 = (float *)(lVar68 + uVar60 * 0xc);
    lStack_e0 = 0;
    lStack_d8 = 0;
    fVar87 = *pfVar50;
    local_d0 = (undefined1  [16])0x0;
    fVar88 = pfVar50[1];
    fVar90 = pfVar50[2];
    local_170 = (undefined8 *)0x0;
    for (; pEVar80 != (Element *)0x0; pEVar80 = *(Element **)(pEVar80 + 0x30)) {
      if (0.0 < (fVar87 * *(float *)pEVar80 + fVar88 * *(float *)(pEVar80 + 4) +
                fVar90 * *(float *)(pEVar80 + 8)) - *(float *)(pEVar80 + 0xc)) {
        uVar73 = 1;
        local_168 = pEVar80;
        List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator>::push_back
                  ((List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator> *)
                   &local_170,&local_168);
        do {
          iVar59 = *(int *)(pEVar80 + uVar73 * 4 + 0xc);
          iVar67 = *(int *)(pEVar80 +
                           (long)(int)((long)((ulong)(uint)((int)uVar73 >> 0x1f) << 0x20 |
                                             uVar73 & 0xffffffff) % 3) * 4 + 0x10);
          iVar45 = iVar59;
          if (iVar59 <= iVar67) {
            iVar45 = iVar67;
            iVar67 = iVar59;
          }
          local_78 = CONCAT44(iVar45,iVar67);
          if ((lStack_e0 != 0) && (local_c0._4_4_ != 0)) {
            uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_c0 & 0xffffffff) * 4));
            lVar68 = *(long *)(hash_table_size_primes_inv + (local_c0 & 0xffffffff) * 8);
            uVar60 = local_78 * 0x3ffff - 1;
            uVar60 = (uVar60 ^ uVar60 >> 0x1f) * 0x15;
            uVar60 = (uVar60 ^ uVar60 >> 0xb) * 0x41;
            uVar46 = (uint)uVar60 ^ (uint)(uVar60 >> 0x16);
            uVar44 = 1;
            if (uVar46 != 0) {
              uVar44 = uVar46;
            }
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar44 * lVar68;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar52;
            lVar65 = SUB168(auVar8 * auVar24,8);
            uVar46 = *(uint *)(lStack_d8 + lVar65 * 4);
            uVar60 = (ulong)uVar46;
            uVar62 = SUB164(auVar8 * auVar24,8);
            if (uVar46 != 0) {
              uVar46 = 0;
              while ((uVar44 != (uint)uVar60 ||
                     (local_78 != *(long *)(*(long *)(lStack_e0 + lVar65 * 8) + 0x10)))) {
                uVar46 = uVar46 + 1;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)(uVar62 + 1) * lVar68;
                auVar25._8_8_ = 0;
                auVar25._0_8_ = uVar52;
                lVar65 = SUB168(auVar9 * auVar25,8);
                uVar47 = *(uint *)(lStack_d8 + lVar65 * 4);
                uVar60 = (ulong)uVar47;
                uVar62 = SUB164(auVar9 * auVar25,8);
                if ((uVar47 == 0) ||
                   (auVar10._8_8_ = 0, auVar10._0_8_ = uVar60 * lVar68, auVar26._8_8_ = 0,
                   auVar26._0_8_ = uVar52, auVar11._8_8_ = 0,
                   auVar11._0_8_ =
                        (ulong)((*(uint *)(hash_table_size_primes + (local_c0 & 0xffffffff) * 4) +
                                uVar62) - SUB164(auVar10 * auVar26,8)) * lVar68, auVar27._8_8_ = 0,
                   auVar27._0_8_ = uVar52, SUB164(auVar11 * auVar27,8) < uVar46)) goto LAB_00102609;
              }
              pEVar51 = *(Element **)(lStack_e0 + (ulong)uVar62 * 8);
              if (pEVar51 != (Element *)0x0) goto LAB_001017d1;
            }
          }
LAB_00102609:
          local_118 = (Element *)0x0;
          lStack_110 = 0;
          HashMap<QuickHull::Edge,QuickHull::FaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::FaceConnect>>>
          ::insert((Edge *)local_160,(FaceConnect *)&local_e8,SUB81((Face *)&local_78,0));
          pEVar51 = local_160[0];
LAB_001017d1:
          if (iVar59 == iVar67) {
            *(Element **)(pEVar51 + 0x18) = pEVar80;
          }
          else {
            *(Element **)(pEVar51 + 0x20) = pEVar80;
          }
          uVar73 = uVar73 + 1;
        } while (uVar73 != 4);
      }
    }
    local_160[0] = (Element *)0x0;
    local_168 = (Element *)0x0;
    for (puVar49 = (undefined8 *)local_d0._0_8_; pvVar53 = local_60, puVar49 != (undefined8 *)0x0;
        puVar49 = (undefined8 *)*puVar49) {
      if ((puVar49[3] == 0) || (puVar49[4] == 0)) {
        lVar68 = *(long *)(pfVar64 + 10);
        local_78 = 0;
        local_68 = 0;
        local_60 = (void *)((ulong)local_60 & 0xffffffff00000000);
        local_50 = 0;
        uStack_70 = 0;
        if (lVar68 == 0) goto LAB_00102ad6;
        uVar60 = uVar77;
        uVar73 = *(ulong *)(lVar68 + -8);
        if ((long)*(ulong *)(lVar68 + -8) <= (long)uVar77) goto LAB_00100b3e;
        uVar44 = *(uint *)(lVar68 + uVar77 * 4);
        uVar46 = *(uint *)(puVar49 + 2);
        uVar60 = (ulong)*(uint *)((long)puVar49 + 0x14);
        lVar68 = *(long *)(param_1 + 8);
        local_68 = CONCAT44(uVar46,uVar44);
        local_60._4_4_ = SUB84(pvVar53,4);
        local_60 = (void *)CONCAT44(local_60._4_4_,*(uint *)((long)puVar49 + 0x14));
        if (lVar68 == 0) goto LAB_00100b20;
        uVar73 = *(ulong *)(lVar68 + -8);
        if ((long)uVar73 <= (long)uVar60) goto LAB_00100b3e;
        uVar52 = (ulong)uVar46;
        pfVar50 = (float *)(uVar60 * 0xc + lVar68);
        uVar60 = uVar52;
        if ((long)uVar73 <= (long)uVar52) goto LAB_00100b3e;
        pfVar2 = (float *)(lVar68 + uVar52 * 0xc);
        uVar60 = (ulong)uVar44;
        if ((long)uVar73 <= (long)uVar60) goto LAB_00100b3e;
        pfVar66 = (float *)(lVar68 + uVar60 * 0xc);
        fVar87 = pfVar66[1];
        fVar88 = pfVar66[2];
        fVar90 = *pfVar66;
        fVar83 = (fVar90 - *pfVar2) * (fVar88 - pfVar50[2]) -
                 (fVar90 - *pfVar50) * (fVar88 - pfVar2[2]);
        fVar82 = (fVar87 - pfVar50[1]) * (fVar88 - pfVar2[2]) -
                 (fVar88 - pfVar50[2]) * (fVar87 - pfVar2[1]);
        fVar85 = (fVar90 - *pfVar50) * (fVar87 - pfVar2[1]) -
                 (fVar87 - pfVar50[1]) * (fVar90 - *pfVar2);
        fVar92 = fVar82 * fVar82 + fVar83 * fVar83 + fVar85 * fVar85;
        if (fVar92 == 0.0) {
          fVar82 = 0.0;
          fVar83 = 0.0;
          fVar85 = 0.0;
          fVar87 = fVar90 * 0.0 + fVar87 * 0.0 + fVar88 * 0.0;
        }
        else {
          fVar92 = sqrtf(fVar92);
          fVar82 = fVar82 / fVar92;
          fVar83 = fVar83 / fVar92;
          fVar85 = fVar85 / fVar92;
          fVar87 = fVar90 * fVar82 + fVar87 * fVar83 + fVar88 * fVar85;
          if (fVar87 < fVar86 * fVar82 + fVar83 * fVar84 + fVar85 * fVar91) {
            local_68 = CONCAT44(uVar44,uVar46);
            fVar82 = (float)(_LC53 ^ (uint)fVar82);
            fVar83 = (float)(_LC53 ^ (uint)fVar83);
            fVar85 = (float)(_LC53 ^ (uint)fVar85);
            fVar87 = (float)(_LC53 ^ (uint)fVar87);
          }
        }
        local_78 = CONCAT44(fVar83,fVar82);
        uStack_70 = CONCAT44(fVar87,fVar85);
        local_118 = (Element *)
                    List<QuickHull::Face,DefaultAllocator>::push_back
                              ((List<QuickHull::Face,DefaultAllocator> *)&local_178,
                               (Face *)&local_78);
        List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator>::push_back
                  ((List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator> *)
                   local_160,&local_118);
      }
    }
    if (local_170 != (undefined8 *)0x0) {
      for (plVar56 = (long *)*local_170; plVar56 != (long *)0x0; plVar56 = (long *)plVar56[1]) {
        lVar68 = *plVar56;
        lVar65 = *(long *)(lVar68 + 0x28);
        for (lVar71 = 0; (lVar65 != 0 && (lVar71 < *(long *)(lVar65 + -8))); lVar71 = lVar71 + 1) {
          lVar7 = *(long *)(pfVar64 + 10);
          iVar59 = *(int *)(lVar65 + lVar71 * 4);
          if (lVar7 == 0) goto LAB_00102ad6;
          uVar60 = uVar77;
          uVar73 = *(ulong *)(lVar7 + -8);
          if ((long)*(ulong *)(lVar7 + -8) <= (long)uVar77) goto LAB_00100b3e;
          if (iVar59 != *(int *)(lVar7 + uVar77 * 4)) {
            uVar60 = (ulong)iVar59;
            lVar7 = *(long *)(param_1 + 8);
            if ((long)uVar60 < 0) {
              if (lVar7 == 0) goto LAB_00100b20;
            }
            else {
              if (lVar7 == 0) goto LAB_00100b20;
              if ((long)uVar60 < *(long *)(lVar7 + -8)) {
                pfVar50 = (float *)(lVar7 + uVar60 * 0xc);
                if (local_160[0] != (Element *)0x0) {
                  for (puVar49 = *(undefined8 **)local_160[0]; puVar49 != (undefined8 *)0x0;
                      puVar49 = (undefined8 *)puVar49[1]) {
                    pfVar2 = (float *)*puVar49;
                    if (fVar89 < (*pfVar2 * *pfVar50 + pfVar2[1] * pfVar50[1] +
                                 pfVar2[2] * pfVar50[2]) - pfVar2[3]) {
                      Vector<int>::push_back((Vector<int> *)(pfVar2 + 8),iVar59);
                      lVar65 = *(long *)(lVar68 + 0x28);
                      break;
                    }
                  }
                }
                goto LAB_001029d9;
              }
            }
            uVar73 = *(ulong *)(lVar7 + -8);
            goto LAB_00100b3e;
          }
LAB_001029d9:
        }
      }
    }
    while ((plVar56 = local_178, local_170 != (undefined8 *)0x0 && (*(int *)(local_170 + 2) != 0)))
    {
      pvVar53 = *(void **)*local_170;
      if ((local_178 != (long *)0x0) && (pvVar53 != (void *)0x0)) {
        if (local_178 == *(long **)((long)pvVar53 + 0x40)) {
          lVar68 = *(long *)((long)pvVar53 + 0x30);
          if (pvVar53 == (void *)*local_178) {
            *local_178 = lVar68;
          }
          lVar65 = *(long *)((long)pvVar53 + 0x38);
          if (pvVar53 == (void *)local_178[1]) {
            local_178[1] = lVar65;
          }
          if (lVar65 != 0) {
            *(long *)(lVar65 + 0x30) = lVar68;
            lVar68 = *(long *)((long)pvVar53 + 0x30);
          }
          if (lVar68 != 0) {
            *(long *)(lVar68 + 0x38) = lVar65;
          }
          if (*(long *)((long)pvVar53 + 0x28) != 0) {
            LOCK();
            plVar78 = (long *)(*(long *)((long)pvVar53 + 0x28) + -0x10);
            *plVar78 = *plVar78 + -1;
            UNLOCK();
            if (*plVar78 == 0) {
              lVar68 = *(long *)((long)pvVar53 + 0x28);
              *(undefined8 *)((long)pvVar53 + 0x28) = 0;
              Memory::free_static((void *)(lVar68 + -0x10),false);
            }
          }
          Memory::free_static(pvVar53,false);
          *(int *)(plVar56 + 2) = (int)plVar56[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0);
        }
        if ((int)local_178[2] == 0) {
          Memory::free_static(local_178,false);
          local_178 = (long *)0x0;
        }
      }
      List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator>::pop_front
                ((List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator> *)
                 &local_170);
    }
    if (local_160[0] != (Element *)0x0) {
      for (plVar78 = *(long **)local_160[0]; plVar78 != (long *)0x0; plVar78 = (long *)plVar78[1]) {
        lVar68 = *plVar78;
        if ((*(long *)(lVar68 + 0x28) == 0) || (*(long *)(*(long *)(lVar68 + 0x28) + -8) == 0)) {
          if (plVar56 == *(long **)(lVar68 + 0x40)) {
            lVar65 = *(long *)(lVar68 + 0x38);
            if (lVar65 != 0) {
              lVar71 = *(long *)(lVar68 + 0x30);
              if (lVar68 == *plVar56) {
                *plVar56 = lVar71;
              }
              if (lVar68 == plVar56[1]) {
                plVar56[1] = lVar65;
              }
              *(long *)(lVar65 + 0x30) = lVar71;
              if (*(long *)(lVar68 + 0x30) != 0) {
                *(long *)(*(long *)(lVar68 + 0x30) + 0x38) = lVar65;
              }
              lVar65 = *plVar56;
              *(long *)(lVar65 + 0x38) = lVar68;
              *(long *)(lVar68 + 0x30) = lVar65;
              *(undefined8 *)(lVar68 + 0x38) = 0;
              *plVar56 = lVar68;
            }
          }
          else {
            _err_print_error("move_to_front","./core/templates/list.h",0x25d,
                             "Condition \"p_I->data != _data\" is true.",0);
          }
        }
      }
    }
    List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator>::~List
              ((List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator> *)local_160)
    ;
    HashMap<QuickHull::Edge,QuickHull::FaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::FaceConnect>>>
    ::~HashMap((HashMap<QuickHull::Edge,QuickHull::FaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::FaceConnect>>>
                *)&local_e8);
    List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator>::~List
              ((List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator> *)&local_170
              );
  }
  local_f0 = uVar41;
  local_168 = (Element *)0x0;
  lStack_110 = 0;
  local_108 = 0;
  local_100 = (undefined1  [16])0x0;
  if ((local_178 != (long *)0x0) && (plVar56 = (long *)*local_178, plVar56 != (long *)0x0)) {
LAB_00101970:
    local_78 = *plVar56;
    uStack_70 = plVar56[1];
    uVar60 = 0;
    uVar48 = (undefined4)plVar56[2];
    local_68 = 0;
    local_60 = (void *)0x0;
    uVar73 = uVar60;
    iVar43 = 0;
    do {
      uVar52 = (ulong)(uint)(iVar43 * 2);
      if (iVar43 * 2 == 0) {
        uVar52 = 1;
      }
      local_68 = CONCAT44((int)uVar52,(undefined4)local_68);
      pvVar53 = (void *)Memory::realloc_static(local_60,uVar52 * 4,false);
      local_60 = pvVar53;
      if (pvVar53 == (void *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar40 = (code *)invalidInstructionException();
        (*pcVar40)();
      }
      do {
        *(undefined4 *)((long)pvVar53 + uVar73 * 4) = uVar48;
        uVar73 = uVar73 + 1;
        local_68 = CONCAT44(local_68._4_4_,(int)uVar60 + 1);
        if (uVar73 == 3) {
          uVar73 = 1;
          uVar54 = List<Geometry3D::MeshData::Face,DefaultAllocator>::push_back
                             ((List<Geometry3D::MeshData::Face,DefaultAllocator> *)&local_168,
                              (Face *)&local_78);
          goto LAB_00101a77;
        }
        uVar48 = *(undefined4 *)((long)plVar56 + uVar73 * 4 + 0x10);
        uVar60 = uVar73 & 0xffffffff;
        iVar43 = local_68._4_4_;
      } while ((int)uVar73 != local_68._4_4_);
    } while( true );
  }
LAB_00101e25:
  LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize
            ((LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *)param_2,0);
  pEVar80 = local_168;
  if (local_168 == (Element *)0x0) {
    LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize
              ((LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *)param_2,0);
    local_c0 = uVar41;
    lStack_e0 = 0;
    lStack_d8 = 0;
    local_d0 = (undefined1  [16])0x0;
  }
  else {
    LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize
              ((LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *)param_2,
               *(uint *)(local_168 + 0x10));
    pEVar51 = *(Element **)pEVar80;
    local_c0 = uVar41;
    lStack_e0 = 0;
    lStack_d8 = 0;
    local_d0 = (undefined1  [16])0x0;
    uVar73 = 0;
    for (; local_160[0] = pEVar51, pEVar51 != (Element *)0x0;
        pEVar51 = *(Element **)(pEVar51 + 0x20)) {
      puVar55 = (uint *)HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
                        ::operator[]((HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
                                      *)&local_e8,local_160);
      *puVar55 = (uint)uVar73;
      uVar44 = *(uint *)param_2;
      if (uVar44 <= (uint)uVar73) goto LAB_00101ed2;
      uVar54 = *(undefined8 *)(pEVar51 + 8);
      puVar49 = (undefined8 *)(uVar73 * 0x20 + *(long *)(param_2 + 8));
      *puVar49 = *(undefined8 *)pEVar51;
      puVar49[1] = uVar54;
      LocalVector<int,unsigned_int,false,false>::operator=
                ((LocalVector<int,unsigned_int,false,false> *)(puVar49 + 2),
                 (LocalVector *)(pEVar51 + 0x10));
      uVar73 = uVar73 + 1;
    }
  }
  uVar44 = local_f0._4_4_;
  if (local_f0._4_4_ < *(uint *)(param_2 + 0x10)) {
    *(uint *)(param_2 + 0x10) = local_f0._4_4_;
  }
  else if (*(uint *)(param_2 + 0x10) < local_f0._4_4_) {
    if (*(uint *)(param_2 + 0x14) < local_f0._4_4_) {
      pvVar53 = *(void **)(param_2 + 0x18);
      uVar46 = local_f0._4_4_ - 1 >> 1 | local_f0._4_4_ - 1;
      uVar46 = uVar46 >> 2 | uVar46;
      uVar46 = uVar46 | uVar46 >> 4;
      uVar46 = uVar46 >> 8 | uVar46;
      uVar46 = (uVar46 >> 0x10 | uVar46) + 1;
      *(uint *)(param_2 + 0x14) = uVar46;
      lVar68 = Memory::realloc_static(pvVar53,(ulong)uVar46 << 4,false);
      *(long *)(param_2 + 0x18) = lVar68;
      if (lVar68 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0,pvVar53);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar40 = (code *)invalidInstructionException();
        (*pcVar40)();
      }
    }
    *(uint *)(param_2 + 0x10) = uVar44;
  }
  uVar73 = 0;
  for (puVar49 = (undefined8 *)local_100._0_8_; puVar49 != (undefined8 *)0x0;
      puVar49 = (undefined8 *)*puVar49) {
    uVar54 = puVar49[2];
    cVar42 = HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
             ::_lookup_pos((HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
                            *)&local_e8,(Element **)puVar49[3],(uint *)local_160);
    if (cVar42 == '\0') {
      _err_print_error("build","core/math/quick_hull.cpp",0x1c2,
                       "Condition \"!face_indices.has(E.value.left)\" is true. Continuing.",0,0);
    }
    else {
      cVar42 = HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
               ::_lookup_pos((HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
                              *)&local_e8,(Element **)puVar49[4],(uint *)local_160);
      if (cVar42 == '\0') {
        _err_print_error("build","core/math/quick_hull.cpp",0x1c3,
                         "Condition \"!face_indices.has(E.value.right)\" is true. Continuing.",0,0);
      }
      else {
        puVar57 = (undefined4 *)
                  HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
                  ::operator[]((HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
                                *)&local_e8,(Element **)(puVar49 + 3));
        uVar48 = *puVar57;
        puVar57 = (undefined4 *)
                  HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
                  ::operator[]((HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
                                *)&local_e8,(Element **)(puVar49 + 4));
        uVar6 = *puVar57;
        uVar44 = *(uint *)(param_2 + 0x10);
        if (uVar44 <= (uint)uVar73) {
LAB_00101ed2:
          uVar60 = (ulong)uVar44;
LAB_00101fc3:
          uVar73 = uVar73 & 0xffffffff;
LAB_00101fde:
          pcVar94 = "count";
          iVar43 = 0xb2;
          pcVar72 = "./core/templates/local_vector.h";
LAB_00100aed:
          _err_print_index_error
                    ("operator[]",pcVar72,iVar43,uVar73,uVar60,"p_index",pcVar94,"",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar40 = (code *)invalidInstructionException();
          (*pcVar40)();
        }
        lVar68 = uVar73 * 0x10;
        uVar73 = (ulong)((uint)uVar73 + 1);
        puVar58 = (undefined8 *)(lVar68 + *(long *)(param_2 + 0x18));
        *puVar58 = uVar54;
        puVar58[1] = CONCAT44(uVar6,uVar48);
      }
    }
  }
  LocalVector<Vector3,unsigned_int,false,false>::operator=
            ((LocalVector<Vector3,unsigned_int,false,false> *)(param_2 + 0x20),param_1);
  HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
  ::~HashMap((HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
              *)&local_e8);
  List<Geometry3D::MeshData::Face,DefaultAllocator>::~List
            ((List<Geometry3D::MeshData::Face,DefaultAllocator> *)&local_168);
  HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
  ::~HashMap((HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
              *)&local_118);
  uVar48 = 0;
LAB_00101833:
  List<QuickHull::Face,DefaultAllocator>::~List
            ((List<QuickHull::Face,DefaultAllocator> *)&local_178);
  if ((void *)local_148._0_8_ != (void *)0x0) {
    uVar54 = local_138._8_8_;
    if (local_128._4_4_ != 0) {
      uVar44 = *(uint *)(hash_table_size_primes + (local_128 & 0xffffffff) * 4);
      for (lVar68 = 0; (uint)lVar68 < uVar44; lVar68 = lVar68 + 1) {
        *(undefined4 *)(local_138._8_8_ + lVar68 * 4) = 0;
      }
    }
    Memory::free_static((void *)local_148._0_8_,false);
    Memory::free_static((void *)local_138._0_8_,false);
    Memory::free_static((void *)local_148._8_8_,false);
    Memory::free_static((void *)uVar54,false);
  }
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    plVar56 = local_150 + -2;
    *plVar56 = *plVar56 + -1;
    UNLOCK();
    if (*plVar56 == 0) {
      Memory::free_static(local_150 + -2,false);
    }
  }
LAB_00100bc2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar48;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* SortArray<List<QuickHull::Face, DefaultAllocator>::Element*, List<QuickHull::Face,
   DefaultAllocator>::AuxiliaryComparator<Comparator<QuickHull::Face> >, true>::introsort(long,
   long, List<QuickHull::Face, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<QuickHull::Face,DefaultAllocator>::Element*,List<QuickHull::Face,DefaultAllocator>::AuxiliaryComparator<Comparator<QuickHull::Face>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element *pEVar1;
  Element **ppEVar2;
  Element **ppEVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  Element *pEVar9;
  long lVar10;
  Element *pEVar11;
  Element *pEVar12;
  long lVar13;
  Element **ppEVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  long local_60;
  long local_50;
  
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    lVar7 = param_2;
    local_50 = param_4;
LAB_00102d85:
    pEVar11 = param_3[lVar7 + -1];
    local_50 = local_50 + -1;
    pEVar1 = param_3[param_1];
    pEVar9 = param_3[(lVar13 >> 1) + param_1];
    lVar13 = *(long *)(pEVar11 + 0x28);
    lVar4 = *(long *)(pEVar1 + 0x28);
    lVar10 = *(long *)(pEVar9 + 0x28);
    lVar6 = lVar13;
    param_2 = param_1;
    lVar16 = lVar7;
    if (lVar4 == 0) {
      lVar8 = 0;
      if (lVar10 != 0) goto LAB_00102dc5;
LAB_0010330a:
      pEVar12 = pEVar9;
      if (lVar13 == 0) goto LAB_00102e27;
      lVar5 = 0;
LAB_00102f8c:
      lVar15 = *(long *)(lVar13 + -8);
LAB_00102f90:
      lVar6 = lVar4;
      pEVar12 = pEVar1;
      if ((lVar15 <= lVar8) && (lVar6 = lVar13, pEVar12 = pEVar11, lVar15 <= lVar5)) {
        lVar6 = lVar10;
        pEVar12 = pEVar9;
      }
    }
    else {
      lVar8 = *(long *)(lVar4 + -8);
      if (lVar10 == 0) {
        if (-1 < lVar8) goto LAB_0010330a;
        pEVar12 = pEVar11;
        if (lVar13 == 0) goto LAB_00102e27;
        lVar5 = 0;
LAB_00102ddb:
        lVar15 = *(long *)(lVar13 + -8);
      }
      else {
LAB_00102dc5:
        lVar5 = *(long *)(lVar10 + -8);
        if (lVar5 <= lVar8) {
          if (lVar13 != 0) goto LAB_00102f8c;
          lVar15 = 0;
          goto LAB_00102f90;
        }
        if (lVar13 != 0) goto LAB_00102ddb;
        lVar15 = 0;
      }
      lVar6 = lVar10;
      pEVar12 = pEVar9;
      if ((lVar15 <= lVar5) && (lVar6 = lVar13, pEVar12 = pEVar11, lVar15 <= lVar8)) {
        lVar6 = lVar4;
        pEVar12 = pEVar1;
      }
    }
LAB_00102e27:
    if (lVar4 == 0) {
      if (lVar6 == 0) goto LAB_00102e49;
      lVar13 = 0;
LAB_00102e40:
      lVar10 = *(long *)(lVar6 + -8);
    }
    else {
      lVar13 = *(long *)(lVar4 + -8);
      if (lVar6 != 0) goto LAB_00102e40;
      lVar10 = 0;
    }
    if (lVar10 <= lVar13) {
LAB_00102e49:
      lVar16 = lVar16 + -1;
      ppEVar2 = param_3 + lVar16;
      do {
        lVar13 = *(long *)(*ppEVar2 + 0x28);
        if (lVar6 == 0) {
          if (lVar13 == 0) goto LAB_00102eab;
          lVar10 = 0;
LAB_00102e74:
          lVar13 = *(long *)(lVar13 + -8);
        }
        else {
          lVar10 = *(long *)(lVar6 + -8);
          if (lVar13 != 0) goto LAB_00102e74;
          lVar13 = 0;
        }
        if (lVar13 <= lVar10) goto LAB_00102eab;
        if (param_1 == lVar16) goto code_r0x00102e86;
        lVar16 = lVar16 + -1;
        ppEVar2 = ppEVar2 + -1;
      } while( true );
    }
    if (lVar7 + -1 == param_2) {
      _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                       "bad comparison function; sorting will be broken",0);
      lVar6 = *(long *)(pEVar12 + 0x28);
      goto LAB_00102e49;
    }
    goto LAB_00102e1a;
  }
LAB_00102fe1:
  local_60 = lVar13 + -2 >> 1;
  lVar7 = local_60 * 2 + 2;
  ppEVar2 = param_3 + param_1 + local_60;
  pEVar11 = *ppEVar2;
  bVar17 = lVar13 == lVar7;
  lVar10 = local_60;
  lVar4 = lVar7;
  if (lVar13 <= lVar7) goto LAB_001032dc;
LAB_0010302b:
  do {
    pEVar1 = param_3[param_1 + lVar7];
    pEVar9 = param_3[param_1 + lVar7 + -1];
    lVar6 = *(long *)(pEVar1 + 0x28);
    lVar16 = *(long *)(pEVar9 + 0x28);
    if (lVar6 == 0) {
      lVar6 = 0;
      if (lVar16 != 0) goto LAB_00103066;
LAB_0010306f:
      lVar5 = lVar7 + 1;
      lVar8 = lVar7;
      pEVar9 = pEVar1;
      ppEVar3 = param_3 + param_1 + lVar7;
    }
    else {
      lVar6 = *(long *)(lVar6 + -8);
      if (lVar16 == 0) {
        lVar16 = 0;
      }
      else {
LAB_00103066:
        lVar16 = *(long *)(lVar16 + -8);
      }
      lVar8 = lVar7 + -1;
      lVar5 = lVar7;
      ppEVar3 = param_3 + param_1 + lVar7 + -1;
      if (lVar16 <= lVar6) goto LAB_0010306f;
    }
    lVar7 = lVar5 * 2;
    param_3[lVar10 + param_1] = pEVar9;
    lVar10 = lVar8;
    if (lVar13 == lVar7 || SBORROW8(lVar13,lVar7) != lVar13 + lVar5 * -2 < 0) {
      ppEVar14 = ppEVar3;
      if (lVar13 == lVar7) goto LAB_001032e2;
      do {
        lVar7 = lVar4;
        lVar10 = lVar8 + -1;
        if (lVar8 <= local_60) goto LAB_001033a1;
        lVar4 = *(long *)(pEVar11 + 0x28);
        do {
          lVar6 = lVar10 >> 1;
          pEVar1 = param_3[param_1 + lVar6];
          lVar10 = *(long *)(pEVar1 + 0x28);
          if (lVar10 == 0) {
            lVar10 = 0;
            if (lVar4 == 0) {
              param_3[lVar8 + param_1] = pEVar11;
              goto joined_r0x00103138;
            }
LAB_001030cd:
            ppEVar3 = param_3 + lVar8 + param_1;
            if (*(long *)(lVar4 + -8) <= lVar10) break;
          }
          else {
            lVar10 = *(long *)(lVar10 + -8);
            if (lVar4 != 0) goto LAB_001030cd;
            ppEVar3 = param_3 + lVar8 + param_1;
            if (-1 < lVar10) break;
          }
          *ppEVar3 = pEVar1;
          lVar10 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
          lVar8 = lVar6;
          ppEVar3 = param_3 + param_1 + lVar6;
        } while (local_60 < lVar6);
        *ppEVar3 = pEVar11;
joined_r0x00103138:
        if (local_60 == 0) {
          ppEVar2 = param_3 + param_1;
          lVar13 = (param_2 + -1) - param_1;
          goto LAB_00103150;
        }
        while( true ) {
          ppEVar2 = ppEVar2 + -1;
          lVar7 = lVar7 + -2;
          local_60 = local_60 + -1;
          pEVar11 = *ppEVar2;
          bVar17 = lVar13 == lVar7;
          lVar10 = local_60;
          lVar4 = lVar7;
          if (!bVar17 && lVar7 <= lVar13) goto LAB_0010302b;
LAB_001032dc:
          ppEVar14 = ppEVar2;
          ppEVar3 = ppEVar2;
          lVar4 = lVar7;
          if (bVar17) break;
LAB_001033a1:
          *ppEVar3 = pEVar11;
        }
LAB_001032e2:
        lVar8 = lVar7 + -1;
        ppEVar3 = param_3 + param_1 + lVar8;
        *ppEVar14 = *ppEVar3;
      } while( true );
    }
  } while( true );
code_r0x00102e86:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0);
LAB_00102eab:
  if (lVar16 <= param_2) goto LAB_00102f10;
  pEVar11 = param_3[param_2];
  param_3[param_2] = *ppEVar2;
  *ppEVar2 = pEVar11;
  lVar6 = *(long *)(pEVar12 + 0x28);
LAB_00102e1a:
  lVar13 = param_2 + 1;
  param_2 = param_2 + 1;
  lVar4 = *(long *)(param_3[lVar13] + 0x28);
  goto LAB_00102e27;
LAB_00102f10:
  introsort(param_2,lVar7,param_3,local_50);
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  lVar7 = param_2;
  if (local_50 == 0) goto LAB_00102fe1;
  goto LAB_00102d85;
LAB_00103150:
  pEVar11 = ppEVar2[lVar13];
  ppEVar2[lVar13] = *ppEVar2;
  if (lVar13 < 3) {
    if (lVar13 != 2) {
      *ppEVar2 = pEVar11;
      return;
    }
    lVar7 = param_1 + 1;
    lVar10 = 0;
    *ppEVar2 = param_3[lVar7];
  }
  else {
    lVar7 = 2;
    lVar10 = 0;
    do {
      pEVar1 = param_3[param_1 + lVar7];
      pEVar9 = param_3[param_1 + lVar7 + -1];
      lVar4 = *(long *)(pEVar1 + 0x28);
      lVar6 = *(long *)(pEVar9 + 0x28);
      if (lVar4 == 0) {
        lVar4 = 0;
        if (lVar6 != 0) goto LAB_001031ae;
LAB_001031b7:
        lVar8 = lVar7 + 1;
        lVar16 = lVar7;
        ppEVar3 = param_3 + param_1 + lVar7;
        pEVar9 = pEVar1;
      }
      else {
        lVar4 = *(long *)(lVar4 + -8);
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
LAB_001031ae:
          lVar6 = *(long *)(lVar6 + -8);
        }
        lVar16 = lVar7 + -1;
        ppEVar3 = param_3 + param_1 + lVar7 + -1;
        lVar8 = lVar7;
        if (lVar6 <= lVar4) goto LAB_001031b7;
      }
      lVar7 = lVar8 * 2;
      param_3[param_1 + lVar10] = pEVar9;
      lVar10 = lVar16;
    } while (lVar7 < lVar13);
    if (lVar7 == lVar13) {
      lVar7 = lVar13 + -1 + param_1;
      lVar10 = lVar13 + -2 >> 1;
      *ppEVar3 = param_3[lVar7];
    }
    else {
      lVar7 = param_1 + lVar16;
      lVar10 = (lVar16 + -1) / 2;
      if (lVar16 < 1) {
LAB_0010333b:
        *ppEVar3 = pEVar11;
        lVar13 = lVar13 + -1;
        goto LAB_00103150;
      }
    }
  }
  lVar4 = *(long *)(pEVar11 + 0x28);
  do {
    pEVar1 = param_3[param_1 + lVar10];
    lVar6 = *(long *)(pEVar1 + 0x28);
    if (lVar6 == 0) {
      if (lVar4 == 0) {
        lVar13 = lVar13 + -1;
        param_3[lVar7] = pEVar11;
        goto LAB_00103150;
      }
      lVar6 = 0;
LAB_0010320d:
      lVar16 = *(long *)(lVar4 + -8);
    }
    else {
      lVar6 = *(long *)(lVar6 + -8);
      if (lVar4 != 0) goto LAB_0010320d;
      lVar16 = 0;
    }
    ppEVar3 = param_3 + lVar7;
    if (lVar16 <= lVar6) goto LAB_0010333b;
    *ppEVar3 = pEVar1;
    ppEVar3 = param_3 + param_1 + lVar10;
    if (lVar10 == 0) goto LAB_0010333b;
    lVar7 = param_1 + lVar10;
    lVar10 = (lVar10 + -1) / 2;
  } while( true );
}



/* CowData<bool>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<bool>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* QuickHull::build(Vector<Vector3> const&, Geometry3D::MeshData&) [clone .cold] */

void QuickHull::build(Vector *param_1,MeshData *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* List<QuickHull::Face, DefaultAllocator>::~List() */

void __thiscall
List<QuickHull::Face,DefaultAllocator>::~List(List<QuickHull::Face,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x28) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x28) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x28);
          *(undefined8 *)((long)pvVar2 + 0x28) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* List<QuickHull::Face, DefaultAllocator>::push_back(QuickHull::Face const&) */

undefined8 * __thiscall
List<QuickHull::Face,DefaultAllocator>::push_back
          (List<QuickHull::Face,DefaultAllocator> *this,Face *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  bool bVar8;
  
  if (*(long *)this == 0) {
    pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar7;
    *(undefined4 *)pauVar7[1] = 0;
    *pauVar7 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined8 *)operator_new(0x48,DefaultAllocator::alloc);
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined4 *)((long)puVar4 + 0xc) = 0;
  *(undefined1 (*) [16])(puVar4 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 7) = (undefined1  [16])0x0;
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *puVar4 = uVar2;
  puVar4[1] = uVar3;
  lVar5 = 0x10;
  do {
    *(undefined4 *)((long)puVar4 + lVar5) = *(undefined4 *)(param_1 + lVar5);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1c);
  plVar1 = (long *)(*(long *)(param_1 + 0x28) + -0x10);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      lVar5 = *plVar1;
      if (lVar5 == 0) goto LAB_00103718;
      LOCK();
      lVar6 = *plVar1;
      bVar8 = lVar5 == lVar6;
      if (bVar8) {
        *plVar1 = lVar5 + 1;
        lVar6 = lVar5;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar6 != -1) {
      puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    }
  }
LAB_00103718:
  plVar1 = *(long **)this;
  lVar5 = plVar1[1];
  puVar4[6] = 0;
  puVar4[8] = plVar1;
  puVar4[7] = lVar5;
  if (lVar5 != 0) {
    *(undefined8 **)(lVar5 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    *plVar1 = (long)puVar4;
    return puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  return puVar4;
}



/* List<List<QuickHull::Face, DefaultAllocator>::Element*, DefaultAllocator>::~List() */

undefined8 __thiscall
List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator>::~List
          (List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_18;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return uStack_18;
  }
  do {
    pvVar1 = (void *)*plVar5;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        uVar4 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar4;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x18) == plVar5) {
      lVar3 = *(long *)((long)pvVar1 + 8);
      lVar2 = *(long *)((long)pvVar1 + 0x10);
      *plVar5 = lVar3;
      if (pvVar1 == (void *)plVar5[1]) {
        plVar5[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 8);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      Memory::free_static(pvVar1,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  uVar4 = Memory::free_static(plVar5,false);
  return uVar4;
}



/* HashMap<QuickHull::Edge, QuickHull::FaceConnect, QuickHull::Edge,
   HashMapComparatorDefault<QuickHull::Edge>, DefaultTypedAllocator<HashMapElement<QuickHull::Edge,
   QuickHull::FaceConnect> > >::~HashMap() */

void __thiscall
HashMap<QuickHull::Edge,QuickHull::FaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::FaceConnect>>>
::~HashMap(HashMap<QuickHull::Edge,QuickHull::FaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::FaceConnect>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<QuickHull::Edge, QuickHull::FaceConnect, QuickHull::Edge,
   HashMapComparatorDefault<QuickHull::Edge>, DefaultTypedAllocator<HashMapElement<QuickHull::Edge,
   QuickHull::FaceConnect> > >::insert(QuickHull::Edge const&, QuickHull::FaceConnect const&, bool)
    */

Edge * HashMap<QuickHull::Edge,QuickHull::FaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::FaceConnect>>>
       ::insert(Edge *param_1,FaceConnect *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *__s;
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
  undefined1 (*pauVar30) [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  undefined8 uVar34;
  void *__s_00;
  undefined1 (*pauVar35) [16];
  undefined8 *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  long *plVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  long lVar41;
  undefined8 uVar42;
  ulong uVar43;
  uint uVar44;
  char in_R8B;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  undefined1 (*pauVar48) [16];
  long in_FS_OFFSET;
  void *local_b0;
  
  plVar37 = (long *)CONCAT71(in_register_00000011,param_3);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  local_b0 = *(void **)(param_2 + 8);
  if (local_b0 == (void *)0x0) {
    uVar47 = (ulong)uVar40;
    uVar33 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    uVar34 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 0x10) = uVar34;
    local_b0 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(param_2 + 8) = local_b0;
    if (uVar40 != 0) {
      pvVar5 = *(void **)(param_2 + 0x10);
      if ((pvVar5 < (void *)((long)local_b0 + uVar43)) &&
         (local_b0 < (void *)((long)pvVar5 + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar33 * 4) = 0;
          *(undefined8 *)((long)local_b0 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar47 != uVar33);
        goto LAB_00103a71;
      }
      memset(pvVar5,0,uVar33);
      memset(local_b0,0,uVar43);
      iVar36 = *(int *)(param_2 + 0x2c);
      lVar41 = *plVar37;
      goto LAB_00103a7d;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    lVar41 = *plVar37;
    if (local_b0 != (void *)0x0) goto LAB_00103a7d;
  }
  else {
LAB_00103a71:
    iVar36 = *(int *)(param_2 + 0x2c);
    lVar41 = *plVar37;
LAB_00103a7d:
    if (iVar36 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar33 = lVar41 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar47 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar47 = 1;
      }
      uVar46 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar47 * lVar4;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar43;
      lVar38 = SUB168(auVar6 * auVar18,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      uVar32 = SUB164(auVar6 * auVar18,8);
      if (uVar44 != 0) {
        do {
          if (((uint)uVar47 == uVar44) &&
             (*(long *)(*(long *)((long)local_b0 + lVar38 * 8) + 0x10) == lVar41)) {
            pauVar35 = *(undefined1 (**) [16])((long)local_b0 + (ulong)uVar32 * 8);
            uVar34 = in_RCX[1];
            *(undefined8 *)(pauVar35[1] + 8) = *in_RCX;
            *(undefined8 *)pauVar35[2] = uVar34;
            goto LAB_00103f39;
          }
          uVar46 = uVar46 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar32 + 1) * lVar4;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar43;
          lVar38 = SUB168(auVar7 * auVar19,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar32 = SUB164(auVar7 * auVar19,8);
        } while ((uVar44 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar44 * lVar4, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar43, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar32) -
                                      SUB164(auVar8 * auVar20,8)) * lVar4, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, uVar46 <= SUB164(auVar9 * auVar21,8)));
      }
    }
  }
  if ((float)uVar40 * __LC15 < (float)(iVar36 + 1)) {
    uVar40 = *(uint *)(param_2 + 0x28);
    if (uVar40 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar35 = (undefined1 (*) [16])0x0;
      goto LAB_00103f39;
    }
    uVar33 = (ulong)(uVar40 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar33 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    uVar47 = (ulong)uVar40;
    *(int *)(param_2 + 0x28) = (int)uVar33;
    pvVar5 = *(void **)(param_2 + 0x10);
    uVar33 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    uVar34 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 0x10) = uVar34;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar47 != uVar33);
      }
      else {
        memset(__s,0,uVar33);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar44 != 0) {
      uVar33 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar5 + uVar33 * 4);
        if (uVar40 != 0) {
          lVar41 = *(long *)(param_2 + 0x10);
          uVar45 = 0;
          uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar32);
          lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar40 * lVar4;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar43;
          lVar38 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(lVar41 + lVar38 * 4);
          iVar36 = SUB164(auVar10 * auVar22,8);
          uVar46 = *puVar1;
          uVar34 = *(undefined8 *)((long)local_b0 + uVar33 * 8);
          while (uVar46 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar46 * lVar4;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar32 + iVar36) - SUB164(auVar11 * auVar23,8)) * lVar4;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar43;
            uVar31 = SUB164(auVar12 * auVar24,8);
            uVar42 = uVar34;
            if (uVar31 < uVar45) {
              *puVar1 = uVar40;
              puVar2 = (undefined8 *)((long)__s_00 + lVar38 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar34;
              uVar40 = uVar46;
              uVar45 = uVar31;
            }
            uVar45 = uVar45 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar36 + 1) * lVar4;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar43;
            lVar38 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(lVar41 + lVar38 * 4);
            iVar36 = SUB164(auVar13 * auVar25,8);
            uVar34 = uVar42;
            uVar46 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar38 * 8) = uVar34;
          *puVar1 = uVar40;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar44);
      Memory::free_static(local_b0,false);
      Memory::free_static(pvVar5,false);
    }
  }
  lVar41 = *plVar37;
  uVar34 = *in_RCX;
  uVar42 = in_RCX[1];
  pauVar35 = (undefined1 (*) [16])operator_new(0x28,"");
  *pauVar35 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar35[1] + 8) = uVar34;
  *(undefined8 *)pauVar35[2] = uVar42;
  *(long *)pauVar35[1] = lVar41;
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar35;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar35;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar35;
    *(undefined8 **)(*pauVar35 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar35;
  }
  else {
    lVar41 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar41 + 8) = pauVar35;
    *(long *)*pauVar35 = lVar41;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar35;
  }
  lVar41 = *(long *)(param_2 + 0x10);
  uVar33 = *plVar37 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar46 = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar40);
  uVar32 = (uint)uVar43;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar43 * lVar4;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar33;
  lVar39 = SUB168(auVar14 * auVar26,8);
  lVar38 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar41 + lVar39 * 4);
  iVar36 = SUB164(auVar14 * auVar26,8);
  uVar44 = *puVar1;
  pauVar30 = pauVar35;
  while (uVar44 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar44 * lVar4;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar33;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar40 + iVar36) - SUB164(auVar15 * auVar27,8)) * lVar4;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar33;
    uVar32 = SUB164(auVar16 * auVar28,8);
    pauVar48 = pauVar30;
    if (uVar32 < uVar46) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar38 + lVar39 * 8);
      pauVar48 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar30;
      uVar46 = uVar32;
    }
    uVar32 = (uint)uVar43;
    uVar46 = uVar46 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar36 + 1) * lVar4;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar33;
    lVar39 = SUB168(auVar17 * auVar29,8);
    puVar1 = (uint *)(lVar41 + lVar39 * 4);
    iVar36 = SUB164(auVar17 * auVar29,8);
    pauVar30 = pauVar48;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar38 + lVar39 * 8) = pauVar30;
  *puVar1 = uVar32;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00103f39:
  *(undefined1 (**) [16])param_1 = pauVar35;
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<List<QuickHull::Face, DefaultAllocator>::Element*, DefaultAllocator>::pop_front() */

void __thiscall
List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator>::pop_front
          (List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = *(long **)this;
  if ((plVar1 != (long *)0x0) && (pvVar2 = (void *)*plVar1, pvVar2 != (void *)0x0)) {
    if (plVar1 == *(long **)((long)pvVar2 + 0x18)) {
      lVar4 = *(long *)((long)pvVar2 + 8);
      lVar3 = *(long *)((long)pvVar2 + 0x10);
      *plVar1 = lVar4;
      if (pvVar2 == (void *)plVar1[1]) {
        plVar1[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 8);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)this + 0x10) == 0) {
      Memory::free_static(*(void **)this,false);
      *(undefined8 *)this = 0;
    }
  }
  return;
}



/* HashMap<QuickHull::Edge, QuickHull::RetFaceConnect, QuickHull::Edge,
   HashMapComparatorDefault<QuickHull::Edge>, DefaultTypedAllocator<HashMapElement<QuickHull::Edge,
   QuickHull::RetFaceConnect> > >::~HashMap() */

void __thiscall
HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
::~HashMap(HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* List<Geometry3D::MeshData::Face, DefaultAllocator>::~List() */

void __thiscall
List<Geometry3D::MeshData::Face,DefaultAllocator>::~List
          (List<Geometry3D::MeshData::Face,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x30) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x20);
      lVar2 = *(long *)((long)pvVar1 + 0x28);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x20);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x28) = lVar2;
      }
      if (*(void **)((long)pvVar1 + 0x18) != (void *)0x0) {
        if (*(int *)((long)pvVar1 + 0x10) != 0) {
          *(undefined4 *)((long)pvVar1 + 0x10) = 0;
        }
        Memory::free_static(*(void **)((long)pvVar1 + 0x18),false);
      }
      Memory::free_static(pvVar1,false);
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



/* List<Geometry3D::MeshData::Face, DefaultAllocator>::push_back(Geometry3D::MeshData::Face const&)
    */

undefined8 * __thiscall
List<Geometry3D::MeshData::Face,DefaultAllocator>::push_back
          (List<Geometry3D::MeshData::Face,DefaultAllocator> *this,Face *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  
  if (*(long *)this == 0) {
    pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar10;
    *(undefined4 *)pauVar10[1] = 0;
    *pauVar10 = (undefined1  [16])0x0;
  }
  puVar8 = (undefined8 *)operator_new(0x38,DefaultAllocator::alloc);
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 1) = 0;
  *(undefined4 *)((long)puVar8 + 0xc) = 0;
  *(undefined1 (*) [16])(puVar8 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 5) = (undefined1  [16])0x0;
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar8[2] = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  *puVar8 = uVar5;
  puVar8[1] = uVar6;
  if (iVar1 != 0) {
    uVar7 = iVar1 - 1U | iVar1 - 1U >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
    *(uint *)((long)puVar8 + 0x14) = uVar7;
    lVar9 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 4,false);
    puVar8[3] = lVar9;
    if (lVar9 == 0) {
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    *(int *)(puVar8 + 2) = iVar1;
    if (*(int *)(param_1 + 0x10) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar9 + lVar11 * 4) = *(undefined4 *)(lVar2 + lVar11 * 4);
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < *(uint *)(param_1 + 0x10));
    }
  }
  plVar3 = *(long **)this;
  lVar9 = plVar3[1];
  puVar8[4] = 0;
  puVar8[6] = plVar3;
  puVar8[5] = lVar9;
  if (lVar9 != 0) {
    *(undefined8 **)(lVar9 + 0x20) = puVar8;
  }
  plVar3[1] = (long)puVar8;
  if (*plVar3 == 0) {
    *plVar3 = (long)puVar8;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  return puVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<QuickHull::Edge, QuickHull::RetFaceConnect, QuickHull::Edge,
   HashMapComparatorDefault<QuickHull::Edge>, DefaultTypedAllocator<HashMapElement<QuickHull::Edge,
   QuickHull::RetFaceConnect> > >::insert(QuickHull::Edge const&, QuickHull::RetFaceConnect const&,
   bool) */

Edge * HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
       ::insert(Edge *param_1,RetFaceConnect *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *__s;
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
  undefined1 (*pauVar30) [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  undefined8 uVar34;
  void *__s_00;
  undefined1 (*pauVar35) [16];
  undefined8 *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  long *plVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  long lVar41;
  undefined8 uVar42;
  ulong uVar43;
  uint uVar44;
  char in_R8B;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  undefined1 (*pauVar48) [16];
  long in_FS_OFFSET;
  void *local_b0;
  
  plVar37 = (long *)CONCAT71(in_register_00000011,param_3);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  local_b0 = *(void **)(param_2 + 8);
  if (local_b0 == (void *)0x0) {
    uVar47 = (ulong)uVar40;
    uVar33 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    uVar34 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 0x10) = uVar34;
    local_b0 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(param_2 + 8) = local_b0;
    if (uVar40 != 0) {
      pvVar5 = *(void **)(param_2 + 0x10);
      if ((pvVar5 < (void *)((long)local_b0 + uVar43)) &&
         (local_b0 < (void *)((long)pvVar5 + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar33 * 4) = 0;
          *(undefined8 *)((long)local_b0 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar47 != uVar33);
        goto LAB_001045a1;
      }
      memset(pvVar5,0,uVar33);
      memset(local_b0,0,uVar43);
      iVar36 = *(int *)(param_2 + 0x2c);
      lVar41 = *plVar37;
      goto LAB_001045ad;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    lVar41 = *plVar37;
    if (local_b0 != (void *)0x0) goto LAB_001045ad;
  }
  else {
LAB_001045a1:
    iVar36 = *(int *)(param_2 + 0x2c);
    lVar41 = *plVar37;
LAB_001045ad:
    if (iVar36 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar33 = lVar41 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar47 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar47 = 1;
      }
      uVar46 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar47 * lVar4;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar43;
      lVar38 = SUB168(auVar6 * auVar18,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      uVar32 = SUB164(auVar6 * auVar18,8);
      if (uVar44 != 0) {
        do {
          if (((uint)uVar47 == uVar44) &&
             (*(long *)(*(long *)((long)local_b0 + lVar38 * 8) + 0x10) == lVar41)) {
            pauVar35 = *(undefined1 (**) [16])((long)local_b0 + (ulong)uVar32 * 8);
            uVar34 = in_RCX[1];
            *(undefined8 *)(pauVar35[1] + 8) = *in_RCX;
            *(undefined8 *)pauVar35[2] = uVar34;
            goto LAB_00104a69;
          }
          uVar46 = uVar46 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar32 + 1) * lVar4;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar43;
          lVar38 = SUB168(auVar7 * auVar19,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar32 = SUB164(auVar7 * auVar19,8);
        } while ((uVar44 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar44 * lVar4, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar43, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar32) -
                                      SUB164(auVar8 * auVar20,8)) * lVar4, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, uVar46 <= SUB164(auVar9 * auVar21,8)));
      }
    }
  }
  if ((float)uVar40 * __LC15 < (float)(iVar36 + 1)) {
    uVar40 = *(uint *)(param_2 + 0x28);
    if (uVar40 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar35 = (undefined1 (*) [16])0x0;
      goto LAB_00104a69;
    }
    uVar33 = (ulong)(uVar40 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar33 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    uVar47 = (ulong)uVar40;
    *(int *)(param_2 + 0x28) = (int)uVar33;
    pvVar5 = *(void **)(param_2 + 0x10);
    uVar33 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    uVar34 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 0x10) = uVar34;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar47 != uVar33);
      }
      else {
        memset(__s,0,uVar33);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar44 != 0) {
      uVar33 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar5 + uVar33 * 4);
        if (uVar40 != 0) {
          lVar41 = *(long *)(param_2 + 0x10);
          uVar45 = 0;
          uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar32);
          lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar40 * lVar4;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar43;
          lVar38 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(lVar41 + lVar38 * 4);
          iVar36 = SUB164(auVar10 * auVar22,8);
          uVar46 = *puVar1;
          uVar34 = *(undefined8 *)((long)local_b0 + uVar33 * 8);
          while (uVar46 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar46 * lVar4;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar32 + iVar36) - SUB164(auVar11 * auVar23,8)) * lVar4;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar43;
            uVar31 = SUB164(auVar12 * auVar24,8);
            uVar42 = uVar34;
            if (uVar31 < uVar45) {
              *puVar1 = uVar40;
              puVar2 = (undefined8 *)((long)__s_00 + lVar38 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar34;
              uVar40 = uVar46;
              uVar45 = uVar31;
            }
            uVar45 = uVar45 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar36 + 1) * lVar4;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar43;
            lVar38 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(lVar41 + lVar38 * 4);
            iVar36 = SUB164(auVar13 * auVar25,8);
            uVar34 = uVar42;
            uVar46 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar38 * 8) = uVar34;
          *puVar1 = uVar40;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar44);
      Memory::free_static(local_b0,false);
      Memory::free_static(pvVar5,false);
    }
  }
  lVar41 = *plVar37;
  uVar34 = *in_RCX;
  uVar42 = in_RCX[1];
  pauVar35 = (undefined1 (*) [16])operator_new(0x28,"");
  *pauVar35 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar35[1] + 8) = uVar34;
  *(undefined8 *)pauVar35[2] = uVar42;
  *(long *)pauVar35[1] = lVar41;
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar35;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar35;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar35;
    *(undefined8 **)(*pauVar35 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar35;
  }
  else {
    lVar41 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar41 + 8) = pauVar35;
    *(long *)*pauVar35 = lVar41;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar35;
  }
  lVar41 = *(long *)(param_2 + 0x10);
  uVar33 = *plVar37 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar46 = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar40);
  uVar32 = (uint)uVar43;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar43 * lVar4;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar33;
  lVar39 = SUB168(auVar14 * auVar26,8);
  lVar38 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar41 + lVar39 * 4);
  iVar36 = SUB164(auVar14 * auVar26,8);
  uVar44 = *puVar1;
  pauVar30 = pauVar35;
  while (uVar44 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar44 * lVar4;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar33;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar40 + iVar36) - SUB164(auVar15 * auVar27,8)) * lVar4;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar33;
    uVar32 = SUB164(auVar16 * auVar28,8);
    pauVar48 = pauVar30;
    if (uVar32 < uVar46) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar38 + lVar39 * 8);
      pauVar48 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar30;
      uVar46 = uVar32;
    }
    uVar32 = (uint)uVar43;
    uVar46 = uVar46 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar36 + 1) * lVar4;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar33;
    lVar39 = SUB168(auVar17 * auVar29,8);
    puVar1 = (uint *)(lVar41 + lVar39 * 4);
    iVar36 = SUB164(auVar17 * auVar29,8);
    pauVar30 = pauVar48;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar38 + lVar39 * 8) = pauVar30;
  *puVar1 = uVar32;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00104a69:
  *(undefined1 (**) [16])param_1 = pauVar35;
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalVector<int, unsigned int, false, false>::insert(unsigned int, int) */

void __thiscall
LocalVector<int,unsigned_int,false,false>::insert
          (LocalVector<int,unsigned_int,false,false> *this,uint param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)this;
  uVar8 = (ulong)param_1;
  uVar9 = uVar2 + 1;
  if (uVar9 <= param_1) {
    _err_print_index_error
              ("insert","./core/templates/local_vector.h",0xf7,uVar8,(ulong)uVar9,"p_pos",
               "count + 1","",false,false);
    return;
  }
  pvVar7 = *(void **)(this + 8);
  if (uVar2 == param_1) {
    if (param_1 == *(uint *)(this + 4)) {
      uVar8 = (ulong)(param_1 * 2);
      if (param_1 * 2 == 0) {
        uVar8 = 1;
      }
      *(int *)(this + 4) = (int)uVar8;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar8 * 4,false);
      *(void **)(this + 8) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar8 = (ulong)*(uint *)this;
      uVar9 = *(uint *)this + 1;
    }
    *(uint *)this = uVar9;
    *(int *)((long)pvVar7 + uVar8 * 4) = param_2;
    return;
  }
  if (*(uint *)(this + 4) < uVar9) {
    uVar4 = uVar2 >> 1 | uVar2;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = (uVar4 | uVar4 >> 0x10) + 1;
    *(uint *)(this + 4) = uVar4;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar4 * 4,false);
    *(void **)(this + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) {
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  *(uint *)this = uVar9;
  if (param_1 < uVar2) {
    lVar1 = (ulong)uVar2 * 4;
    puVar5 = (undefined4 *)((long)pvVar7 + lVar1);
    do {
      puVar6 = puVar5 + -1;
      *puVar5 = puVar5[(ulong)(uVar2 - 1) - (ulong)uVar2];
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)
                       (lVar1 + -4 + (ulong)((uVar2 - param_1) - 1) * -4 + (long)pvVar7));
  }
  *(int *)((long)pvVar7 + uVar8 * 4) = param_2;
  return;
}



/* LocalVector<Geometry3D::MeshData::Face, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize
          (LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar6 = (ulong)param_1 << 5;
    uVar7 = param_1;
    do {
      lVar2 = *(long *)(this + 8) + lVar6;
      if (*(void **)(lVar2 + 0x18) != (void *)0x0) {
        if (*(int *)(lVar2 + 0x10) != 0) {
          *(undefined4 *)(lVar2 + 0x10) = 0;
        }
        Memory::free_static(*(void **)(lVar2 + 0x18),false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar7 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar7) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar7 = uVar5 >> 1 | uVar5;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar7;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 << 5,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = *(uint *)this;
      if (param_1 <= uVar7) goto LAB_00104e7b;
    }
    lVar6 = *(long *)(this + 8);
    puVar3 = (undefined8 *)((ulong)uVar7 * 0x20 + lVar6);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 4;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((long)puVar3 + 0xc) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar6 + 0x20 + ((ulong)(uVar5 - uVar7) + (ulong)uVar7) * 0x20)
            );
  }
LAB_00104e7b:
  *(uint *)this = param_1;
  return;
}



/* HashMap<List<Geometry3D::MeshData::Face, DefaultAllocator>::Element*, int, HashMapHasherDefault,
   HashMapComparatorDefault<List<Geometry3D::MeshData::Face, DefaultAllocator>::Element*>,
   DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,
   DefaultAllocator>::Element*, int> > >::~HashMap() */

void __thiscall
HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
::~HashMap(HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<List<Geometry3D::MeshData::Face, DefaultAllocator>::Element*, int, HashMapHasherDefault,
   HashMapComparatorDefault<List<Geometry3D::MeshData::Face, DefaultAllocator>::Element*>,
   DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,
   DefaultAllocator>::Element*, int> > >::operator[](List<Geometry3D::MeshData::Face,
   DefaultAllocator>::Element* const&) */

undefined1  [16] __thiscall
HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
::operator[](HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
             *this,Element **param_1)

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
  Element *pEVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  pEVar56 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar55 * 4;
    uVar39 = uVar55 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x105662;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pEVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010518b;
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
        pEVar56 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x1056aa;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pEVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00105533;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pEVar56 * 0x3ffff - 1;
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
             (pEVar56 == *(Element **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
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
LAB_00105533:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pEVar56 * 0x3ffff - 1;
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
             (*(Element **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == pEVar56)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar46;
            goto LAB_00105514;
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
LAB_0010518b:
  if ((float)uVar55 * __LC15 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00105514;
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
  pEVar56 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(Element **)pauVar42[1] = pEVar56;
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
LAB_00105514:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* LocalVector<int, unsigned int, false, false>::TEMPNAMEPLACEHOLDERVALUE(LocalVector<int, unsigned
   int, false, false> const&) */

void __thiscall
LocalVector<int,unsigned_int,false,false>::operator=
          (LocalVector<int,unsigned_int,false,false> *this,LocalVector *param_1)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)param_1;
  if (uVar6 < *(uint *)this) {
    *(uint *)this = uVar6;
  }
  else if (*(uint *)this < uVar6) {
    if (*(uint *)(this + 4) < uVar6) {
      uVar3 = uVar6 - 1 | uVar6 - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar3;
      lVar5 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar3 * 4,false);
      *(long *)(this + 8) = lVar5;
      if (lVar5 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    *(uint *)this = uVar6;
    uVar6 = *(uint *)param_1;
  }
  if (uVar6 != 0) {
    lVar5 = *(long *)(param_1 + 8);
    lVar1 = *(long *)(this + 8);
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar4 * 4) = *(undefined4 *)(lVar5 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)param_1);
  }
  return;
}



/* LocalVector<Vector3, unsigned int, false, false>::TEMPNAMEPLACEHOLDERVALUE(Vector<Vector3>
   const&) */

void __thiscall
LocalVector<Vector3,unsigned_int,false,false>::operator=
          (LocalVector<Vector3,unsigned_int,false,false> *this,Vector *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  lVar7 = *(long *)(param_1 + 8);
  uVar11 = *(uint *)this;
  uVar5 = (ulong)uVar11;
  if (lVar7 == 0) {
    if (uVar11 == 0) {
      return;
    }
    *(undefined4 *)this = 0;
    return;
  }
  uVar1 = *(ulong *)(lVar7 + -8);
  uVar9 = (uint)uVar1;
  if (uVar9 < uVar11) {
    *(uint *)this = uVar9;
    uVar5 = uVar1 & 0xffffffff;
LAB_001058d0:
    if ((int)uVar5 == 0) {
      return;
    }
  }
  else {
    if (uVar9 <= uVar11) goto LAB_001058d0;
    uVar11 = uVar9 - 1;
    if (*(uint *)(this + 4) < uVar9) {
      uVar4 = uVar11 >> 1 | uVar11;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = (uVar4 | uVar4 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar4;
      lVar7 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar4 * 0xc,false);
      *(long *)(this + 8) = lVar7;
      if (lVar7 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (ulong)*(uint *)this;
      if (*(uint *)this < uVar9) goto LAB_0010593d;
    }
    else {
LAB_0010593d:
      memset((void *)(*(long *)(this + 8) + uVar5 * 0xc),0,
             ((ulong)(uVar11 - (int)uVar5) * 3 + 3) * 4);
    }
    lVar7 = *(long *)(param_1 + 8);
    *(uint *)this = uVar9;
    uVar8 = 0;
    lVar10 = 0;
    if (lVar7 == 0) goto LAB_0010596f;
    uVar5 = uVar1 & 0xffffffff;
  }
  lVar10 = *(long *)(lVar7 + -8);
  uVar8 = 0;
  lVar6 = 0;
  while ((long)uVar8 < lVar10) {
    lVar2 = *(long *)(this + 8);
    uVar8 = uVar8 + 1;
    *(undefined8 *)(lVar2 + lVar6) = *(undefined8 *)(lVar7 + lVar6);
    *(undefined4 *)(lVar2 + 8 + lVar6) = *(undefined4 *)(lVar7 + 8 + lVar6);
    lVar6 = lVar6 + 0xc;
    if (uVar8 == uVar5) {
      return;
    }
  }
LAB_0010596f:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar10,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* HashSet<Vector3, HashMapHasherDefault, HashMapComparatorDefault<Vector3> >::_lookup_pos(Vector3
   const&, unsigned int&) const */

undefined8 __thiscall
HashSet<Vector3,HashMapHasherDefault,HashMapComparatorDefault<Vector3>>::_lookup_pos
          (HashSet<Vector3,HashMapHasherDefault,HashMapComparatorDefault<Vector3>> *this,
          Vector3 *param_1,uint *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  
  if (*(long *)this != 0) {
    if (*(int *)(this + 0x24) == 0) {
      return 0;
    }
    fVar2 = *(float *)param_1;
    uVar5 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar14 = 0x3413905a;
    if ((fVar2 != 0.0) && (uVar14 = 0x22afa5cc, !NAN(fVar2))) {
      uVar14 = ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar14 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar3 = *(float *)(param_1 + 4);
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar14 = uVar14 ^ 0x2db3efa0;
      }
      else {
        uVar14 = uVar14 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar4 = *(float *)(param_1 + 8);
    uVar14 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64;
    if (fVar4 != 0.0) {
      if (NAN(fVar4)) {
        uVar14 = uVar14 ^ 0x2db3efa0;
      }
      else {
        uVar14 = uVar14 ^ ((int)fVar4 * 0x16a88000 | (uint)((int)fVar4 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    uVar14 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64;
    uVar14 = (uVar14 >> 0x10 ^ uVar14) * -0x7a143595;
    uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
    uVar20 = uVar14 ^ uVar14 >> 0x10;
    if (uVar14 == uVar14 >> 0x10) {
      uVar20 = 1;
      uVar16 = uVar5;
    }
    else {
      uVar16 = uVar20 * uVar5;
    }
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4));
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar16;
    lVar17 = SUB168(auVar6 * auVar10,8);
    uVar14 = *(uint *)(*(long *)(this + 0x18) + lVar17 * 4);
    iVar15 = SUB164(auVar6 * auVar10,8);
    if (uVar14 != 0) {
      uVar19 = 0;
      do {
        if (uVar20 == uVar14) {
          uVar14 = *(uint *)(*(long *)(this + 8) + lVar17 * 4);
          pfVar1 = (float *)(*(long *)this + (ulong)uVar14 * 0xc);
          if ((((fVar2 == *pfVar1) || ((NAN(*pfVar1) && (NAN(fVar2))))) &&
              ((fVar3 == pfVar1[1] || ((NAN(fVar3) && (NAN(pfVar1[1]))))))) &&
             ((fVar4 == pfVar1[2] || ((NAN(fVar4) && (NAN(pfVar1[2]))))))) {
            *param_2 = uVar14;
            return 1;
          }
        }
        uVar19 = uVar19 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (iVar15 + 1) * uVar5;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar18;
        lVar17 = SUB168(auVar7 * auVar11,8);
        uVar14 = *(uint *)(*(long *)(this + 0x18) + lVar17 * 4);
        iVar15 = SUB164(auVar7 * auVar11,8);
      } while ((uVar14 != 0) &&
              (auVar8._8_8_ = 0, auVar8._0_8_ = uVar14 * uVar5, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar18, auVar9._8_8_ = 0,
              auVar9._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4)
                              + iVar15) - SUB164(auVar8 * auVar12,8)) * uVar5, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar18, uVar19 <= SUB164(auVar9 * auVar13,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Vector3, HashMapHasherDefault, HashMapComparatorDefault<Vector3> >::insert(Vector3
   const&) */

Vector3 * HashSet<Vector3,HashMapHasherDefault,HashMapComparatorDefault<Vector3>>::insert
                    (Vector3 *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  char cVar25;
  uint uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint *puVar31;
  int iVar32;
  Vector3 *in_RDX;
  ulong uVar33;
  uint uVar34;
  HashSet<Vector3,HashMapHasherDefault,HashMapComparatorDefault<Vector3>> *in_RSI;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  undefined4 uVar38;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  uint *puVar42;
  long in_FS_OFFSET;
  uint local_98;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar35 = (ulong)uVar26 * 4;
    uVar27 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar27;
    uVar27 = Memory::alloc_static((ulong)uVar26 * 0xc,false);
    *(undefined8 *)in_RSI = uVar27;
    uVar27 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar27;
    uVar27 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(in_RSI + 8) = uVar27;
    if (uVar26 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar35);
    }
  }
  local_44 = 0;
  cVar25 = _lookup_pos(in_RSI,in_RDX,&local_44);
  if (cVar25 == '\0') {
    uVar39 = *(uint *)(in_RSI + 0x24);
    uVar3 = *(uint *)(in_RSI + 0x20);
    if ((float)uVar26 * __LC15 < (float)(uVar39 + 1)) {
      if (uVar3 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        iVar32 = *(int *)(in_RSI + 0x24);
        lVar28 = *(long *)in_RSI;
        uVar26 = 0xffffffff;
        goto LAB_0010621a;
      }
      uVar35 = (ulong)(uVar3 + 1);
      if (uVar3 + 1 < 2) {
        uVar35 = 2;
      }
      uVar26 = *(uint *)(hash_table_size_primes + uVar35 * 4);
      pvVar4 = *(void **)(in_RSI + 0x18);
      *(int *)(in_RSI + 0x20) = (int)uVar35;
      uVar35 = (ulong)uVar26 * 4;
      pvVar5 = *(void **)(in_RSI + 0x10);
      uVar27 = Memory::alloc_static(uVar35,false);
      *(undefined8 *)(in_RSI + 0x18) = uVar27;
      uVar27 = Memory::realloc_static(*(void **)in_RSI,(ulong)uVar26 * 0xc,false);
      *(undefined8 *)in_RSI = uVar27;
      uVar27 = Memory::alloc_static(uVar35,false);
      *(undefined8 *)(in_RSI + 0x10) = uVar27;
      lVar28 = Memory::realloc_static(*(void **)(in_RSI + 8),uVar35,false);
      *(long *)(in_RSI + 8) = lVar28;
      if (uVar26 != 0) {
        memset(*(void **)(in_RSI + 0x18),0,uVar35);
      }
      if (*(int *)(in_RSI + 0x24) != 0) {
        uVar35 = 0;
        lVar6 = *(long *)(in_RSI + 0x18);
        lVar7 = *(long *)(in_RSI + 0x10);
        do {
          uVar40 = uVar35 & 0xffffffff;
          uVar38 = (undefined4)uVar35;
          uVar41 = 0;
          uVar26 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + uVar35 * 4) * 4);
          uVar33 = (ulong)uVar26;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
          uVar37 = CONCAT44(0,uVar39);
          lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar33 * lVar29;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar37;
          lVar30 = SUB168(auVar9 * auVar17,8) * 4;
          iVar32 = SUB164(auVar9 * auVar17,8);
          puVar42 = (uint *)(lVar6 + lVar30);
          uVar3 = *puVar42;
          if (uVar3 == 0) {
            lVar29 = uVar35 * 4;
          }
          else {
            do {
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)uVar3 * lVar29;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar37;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)((uVar39 + iVar32) - SUB164(auVar10 * auVar18,8)) * lVar29;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar37;
              local_98 = SUB164(auVar11 * auVar19,8);
              if (local_98 < uVar41) {
                *(int *)(lVar7 + uVar40 * 4) = iVar32;
                uVar26 = *puVar42;
                *puVar42 = (uint)uVar33;
                uVar3 = *(uint *)(lVar30 + lVar28);
                uVar33 = (ulong)uVar26;
                *(uint *)(lVar30 + lVar28) = (uint)uVar40;
                uVar40 = (ulong)uVar3;
                uVar41 = local_98;
              }
              uVar38 = (undefined4)uVar40;
              uVar26 = (uint)uVar33;
              uVar41 = uVar41 + 1;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = (ulong)(iVar32 + 1) * lVar29;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uVar37;
              lVar30 = SUB168(auVar12 * auVar20,8) * 4;
              iVar32 = SUB164(auVar12 * auVar20,8);
              puVar42 = (uint *)(lVar6 + lVar30);
              uVar3 = *puVar42;
            } while (uVar3 != 0);
            lVar29 = uVar40 << 2;
          }
          *puVar42 = uVar26;
          uVar35 = uVar35 + 1;
          *(int *)(lVar7 + lVar29) = iVar32;
          *(undefined4 *)(lVar28 + lVar30) = uVar38;
        } while ((uint)uVar35 < *(uint *)(in_RSI + 0x24));
      }
      Memory::free_static(pvVar4,false);
      Memory::free_static(pvVar5,false);
      uVar39 = *(uint *)(in_RSI + 0x24);
      uVar3 = *(uint *)(in_RSI + 0x20);
    }
    uVar35 = (ulong)uVar39;
    fVar2 = *(float *)in_RDX;
    uVar26 = 0x3413905a;
    if ((fVar2 != 0.0) && (uVar26 = 0x22afa5cc, !NAN(fVar2))) {
      uVar26 = ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar26 = (uVar26 << 0xd | uVar26 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar2 = *(float *)(in_RDX + 4);
    if (fVar2 != 0.0) {
      if (NAN(fVar2)) {
        uVar26 = uVar26 ^ 0x2db3efa0;
      }
      else {
        uVar26 = uVar26 ^ ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar2 = *(float *)(in_RDX + 8);
    uVar26 = (uVar26 << 0xd | uVar26 >> 0x13) * 5 + 0xe6546b64;
    if (fVar2 != 0.0) {
      if (NAN(fVar2)) {
        uVar26 = uVar26 ^ 0x2db3efa0;
      }
      else {
        uVar26 = uVar26 ^ ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    uVar26 = (uVar26 << 0xd | uVar26 >> 0x13) * 5 + 0xe6546b64;
    uVar26 = (uVar26 >> 0x10 ^ uVar26) * -0x7a143595;
    uVar41 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
    uVar26 = uVar41 ^ uVar41 >> 0x10;
    if (uVar41 == uVar41 >> 0x10) {
      uVar33 = 1;
      uVar26 = 1;
    }
    else {
      uVar33 = (ulong)uVar26;
    }
    uVar36 = 0;
    lVar28 = *(long *)in_RSI;
    puVar1 = (undefined8 *)(lVar28 + uVar35 * 0xc);
    *puVar1 = *(undefined8 *)in_RDX;
    lVar7 = *(long *)(in_RSI + 0x18);
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(in_RDX + 8);
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)uVar3 * 4);
    uVar37 = CONCAT44(0,uVar41);
    lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)uVar3 * 8);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33 * lVar30;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar37;
    lVar6 = SUB168(auVar13 * auVar21,8) * 4;
    iVar32 = SUB164(auVar13 * auVar21,8);
    lVar29 = *(long *)(in_RSI + 0x10);
    lVar8 = *(long *)(in_RSI + 8);
    puVar42 = (uint *)(lVar7 + lVar6);
    uVar3 = *puVar42;
    uVar33 = uVar35;
    while (uVar3 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar3 * lVar30;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)((uVar41 + iVar32) - SUB164(auVar14 * auVar22,8)) * lVar30;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar37;
      local_98 = SUB164(auVar15 * auVar23,8);
      uVar34 = uVar26;
      if (local_98 < uVar36) {
        puVar31 = (uint *)(lVar6 + lVar8);
        *(int *)(lVar29 + uVar35 * 4) = iVar32;
        uVar34 = *puVar42;
        *puVar42 = uVar26;
        uVar26 = *puVar31;
        *puVar31 = (uint)uVar33;
        uVar35 = (ulong)uVar26;
        uVar33 = uVar35;
        uVar36 = local_98;
      }
      uVar39 = (uint)uVar33;
      uVar36 = uVar36 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)(iVar32 + 1) * lVar30;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar37;
      lVar6 = SUB168(auVar16 * auVar24,8) * 4;
      iVar32 = SUB164(auVar16 * auVar24,8);
      puVar42 = (uint *)(lVar7 + lVar6);
      uVar26 = uVar34;
      uVar3 = *puVar42;
    }
    *puVar42 = uVar26;
    *(int *)(lVar29 + uVar35 * 4) = iVar32;
    *(uint *)(lVar8 + lVar6) = uVar39;
    uVar26 = *(uint *)(in_RSI + 0x24);
    iVar32 = uVar26 + 1;
    *(int *)(in_RSI + 0x24) = iVar32;
  }
  else {
    iVar32 = *(int *)(in_RSI + 0x24);
    lVar28 = *(long *)in_RSI;
    uVar26 = local_44;
  }
LAB_0010621a:
  *(long *)param_1 = lVar28;
  *(int *)(param_1 + 8) = iVar32;
  *(uint *)(param_1 + 0xc) = uVar26;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void List<QuickHull::Face, DefaultAllocator>::sort_custom<Comparator<QuickHull::Face> >() */

void __thiscall
List<QuickHull::Face,DefaultAllocator>::sort_custom<Comparator<QuickHull::Face>>
          (List<QuickHull::Face,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  Element **__src;
  Element **ppEVar3;
  Element **ppEVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar8 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar8 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar8;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar3 = __src;
    for (pEVar10 = (Element *)**(long **)this; pEVar10 != (Element *)0x0;
        pEVar10 = *(Element **)(pEVar10 + 0x30)) {
      *ppEVar3 = pEVar10;
      ppEVar3 = ppEVar3 + 1;
    }
  }
  lVar6 = 0;
  pEVar10 = pEVar8;
  do {
    pEVar10 = (Element *)((long)pEVar10 >> 1);
    lVar6 = lVar6 + 1;
  } while (pEVar10 != (Element *)0x1);
  SortArray<List<QuickHull::Face,DefaultAllocator>::Element*,List<QuickHull::Face,DefaultAllocator>::AuxiliaryComparator<Comparator<QuickHull::Face>>,true>
  ::introsort(0,(long)pEVar8,__src,lVar6 * 2);
  if (0x10 < (long)pEVar8) {
    lVar6 = 1;
    do {
      while( true ) {
        lVar5 = lVar6;
        pEVar10 = __src[lVar5];
        lVar6 = *(long *)(*__src + 0x28);
        if (*(long *)(pEVar10 + 0x28) != 0) break;
        lVar7 = 0;
        if (lVar6 != 0) {
LAB_00106524:
          lVar6 = *(long *)(lVar6 + -8);
          goto LAB_00106528;
        }
LAB_0010652d:
        ppEVar3 = __src + lVar5;
        while( true ) {
          lVar6 = *(long *)(ppEVar3[-1] + 0x28);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(lVar6 + -8);
          }
          if (lVar6 <= lVar7) goto LAB_00106583;
          if (__src + 1 == ppEVar3) break;
          *ppEVar3 = ppEVar3[-1];
          ppEVar3 = ppEVar3 + -1;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
LAB_00106583:
        *ppEVar3 = pEVar10;
        lVar6 = lVar5 + 1;
        if (lVar5 + 1 == 0x10) goto LAB_00106594;
      }
      lVar7 = *(long *)(*(long *)(pEVar10 + 0x28) + -8);
      if (lVar6 != 0) goto LAB_00106524;
      lVar6 = 0;
LAB_00106528:
      if (lVar6 <= lVar7) goto LAB_0010652d;
      memmove(__src + 1,__src,lVar5 * 8);
      *__src = pEVar10;
      lVar6 = lVar5 + 1;
    } while (lVar5 + 1 != 0x10);
LAB_00106594:
    pEVar10 = (Element *)(lVar5 + 1);
LAB_001065b8:
    pEVar11 = __src[(long)pEVar10];
    lVar6 = *(long *)(pEVar11 + 0x28);
    pEVar9 = pEVar10;
    do {
      lVar5 = *(long *)(__src[(long)(pEVar9 + -1)] + 0x28);
      if (lVar6 == 0) {
        if (lVar5 == 0) goto LAB_00106628;
        lVar7 = 0;
LAB_001065f8:
        lVar5 = *(long *)(lVar5 + -8);
      }
      else {
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar5 != 0) goto LAB_001065f8;
        lVar5 = 0;
      }
      if (lVar5 <= lVar7) goto LAB_00106628;
      if (pEVar9 == (Element *)0x1) goto code_r0x00106607;
      __src[(long)pEVar9] = __src[(long)(pEVar9 + -1)];
      pEVar9 = pEVar9 + -1;
    } while( true );
  }
  pEVar11 = (Element *)0x1;
  pEVar9 = *__src;
  do {
    while( true ) {
      pEVar10 = __src[(long)pEVar11];
      lVar6 = *(long *)(pEVar9 + 0x28);
      if (*(long *)(pEVar10 + 0x28) != 0) break;
      lVar5 = 0;
      if (lVar6 != 0) {
LAB_001066e1:
        lVar6 = *(long *)(lVar6 + -8);
        goto LAB_001066e5;
      }
LAB_001066ea:
      ppEVar3 = __src + (long)pEVar11;
      while( true ) {
        lVar6 = *(long *)(ppEVar3[-1] + 0x28);
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar6 + -8);
        }
        if (lVar6 <= lVar5) goto LAB_0010673c;
        if (__src + 1 == ppEVar3) break;
        *ppEVar3 = ppEVar3[-1];
        ppEVar3 = ppEVar3 + -1;
      }
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0010673c:
      pEVar11 = pEVar11 + 1;
      *ppEVar3 = pEVar10;
      pEVar10 = *__src;
      pEVar9 = pEVar10;
      if (pEVar8 == pEVar11) goto LAB_0010675e;
    }
    lVar5 = *(long *)(*(long *)(pEVar10 + 0x28) + -8);
    if (lVar6 != 0) goto LAB_001066e1;
    lVar6 = 0;
LAB_001066e5:
    if (lVar6 <= lVar5) goto LAB_001066ea;
    __n = (long)pEVar11 * 8;
    pEVar11 = pEVar11 + 1;
    memmove(__src + 1,__src,__n);
    *__src = pEVar10;
    pEVar9 = pEVar10;
  } while (pEVar8 != pEVar11);
LAB_0010675e:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pEVar10;
  *(undefined8 *)(pEVar10 + 0x38) = 0;
  *(Element **)(*__src + 0x30) = __src[1];
  pEVar10 = __src[(long)(pEVar8 + -1)];
  puVar2[1] = pEVar10;
  *(Element **)(pEVar10 + 0x38) = __src[(long)(pEVar8 + -2)];
  *(undefined8 *)(__src[(long)(pEVar8 + -1)] + 0x30) = 0;
  if (iVar1 != 2) {
    ppEVar3 = __src;
    do {
      ppEVar4 = ppEVar3 + 1;
      *(Element **)(ppEVar3[1] + 0x38) = *ppEVar3;
      *(Element **)(*ppEVar4 + 0x30) = ppEVar3[2];
      ppEVar3 = ppEVar4;
    } while (__src + (iVar1 - 2) != ppEVar4);
  }
  Memory::free_static(__src,true);
  return;
code_r0x00106607:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00106628:
  pEVar10 = pEVar10 + 1;
  __src[(long)pEVar9] = pEVar11;
  if (pEVar8 == pEVar10) goto code_r0x00106636;
  goto LAB_001065b8;
code_r0x00106636:
  pEVar10 = *__src;
  goto LAB_0010675e;
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
LAB_00106bb0:
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
  if (lVar8 == 0) goto LAB_00106bb0;
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
        goto LAB_00106ac1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00106ac1:
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



/* CowData<bool>::_realloc(long) */

undefined8 __thiscall CowData<bool>::_realloc(CowData<bool> *this,long param_1)

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



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<List<Geometry3D::MeshData::Face, DefaultAllocator>::Element*, int, HashMapHasherDefault,
   HashMapComparatorDefault<List<Geometry3D::MeshData::Face, DefaultAllocator>::Element*>,
   DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,
   DefaultAllocator>::Element*, int> > >::~HashMap() */

void __thiscall
HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
::~HashMap(HashMap<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int,HashMapHasherDefault,HashMapComparatorDefault<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*>,DefaultTypedAllocator<HashMapElement<List<Geometry3D::MeshData::Face,DefaultAllocator>::Element*,int>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Geometry3D::MeshData::Face, DefaultAllocator>::~List() */

void __thiscall
List<Geometry3D::MeshData::Face,DefaultAllocator>::~List
          (List<Geometry3D::MeshData::Face,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<QuickHull::Edge, QuickHull::RetFaceConnect, QuickHull::Edge,
   HashMapComparatorDefault<QuickHull::Edge>, DefaultTypedAllocator<HashMapElement<QuickHull::Edge,
   QuickHull::RetFaceConnect> > >::~HashMap() */

void __thiscall
HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
::~HashMap(HashMap<QuickHull::Edge,QuickHull::RetFaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::RetFaceConnect>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<QuickHull::Edge, QuickHull::FaceConnect, QuickHull::Edge,
   HashMapComparatorDefault<QuickHull::Edge>, DefaultTypedAllocator<HashMapElement<QuickHull::Edge,
   QuickHull::FaceConnect> > >::~HashMap() */

void __thiscall
HashMap<QuickHull::Edge,QuickHull::FaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::FaceConnect>>>
::~HashMap(HashMap<QuickHull::Edge,QuickHull::FaceConnect,QuickHull::Edge,HashMapComparatorDefault<QuickHull::Edge>,DefaultTypedAllocator<HashMapElement<QuickHull::Edge,QuickHull::FaceConnect>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<List<QuickHull::Face, DefaultAllocator>::Element*, DefaultAllocator>::~List() */

void __thiscall
List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator>::~List
          (List<List<QuickHull::Face,DefaultAllocator>::Element*,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<QuickHull::Face, DefaultAllocator>::~List() */

void __thiscall
List<QuickHull::Face,DefaultAllocator>::~List(List<QuickHull::Face,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


