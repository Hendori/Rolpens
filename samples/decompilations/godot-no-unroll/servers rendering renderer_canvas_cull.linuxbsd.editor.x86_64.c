
/* compute_polyline_segment_dir(Vector<Vector2> const&, int, Vector2 const&) */

undefined8 compute_polyline_segment_dir(Vector *param_1,int param_2,Vector2 *param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    lVar5 = 0;
LAB_00100117:
    lVar4 = (long)param_2;
LAB_001000de:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 8) + -8);
  if ((int)lVar5 + -1 != param_2) {
    if (lVar5 <= param_2) goto LAB_00100117;
    lVar4 = (long)(param_2 + 1);
    if (lVar5 <= lVar4) goto LAB_001000de;
    local_18 = Vector2::normalized();
    cVar3 = Vector2::is_zero_approx();
    if (cVar3 == '\0') goto LAB_00100096;
  }
  local_18 = *(undefined8 *)param_3;
LAB_00100096:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_polyline_edge_offset_clamped(Vector2 const&, Vector2 const&) */

void compute_polyline_edge_offset_clamped(Vector2 *param_1,Vector2 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  fVar3 = (float)Vector2::length();
  uVar1 = *(undefined8 *)param_1;
  fVar4 = (float)Vector2::length();
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar4 -
                      (float)((ulong)uVar1 >> 0x20) * fVar3,
                      (float)*(undefined8 *)param_2 * fVar4 - (float)uVar1 * fVar3);
  local_40 = Vector2::normalized();
  fVar3 = (float)Vector2::dot((Vector2 *)&local_40);
  fVar4 = (float)Vector2::cross((Vector2 *)&local_40);
  fVar3 = atan2f(fVar4,fVar3);
  fVar3 = sinf(fVar3);
  if ((ABS(fVar3) < _LC8) || (cVar2 = Vector2::is_equal_approx(param_1), cVar2 != '\0')) {
    local_40 = CONCAT44(*(uint *)param_1 ^ __LC9,*(undefined4 *)(param_1 + 4));
  }
  Vector2::is_zero_approx();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<RendererCanvasCull::Item*, RendererCanvasCull::ItemYSort, true>::adjust_heap(long,
   long, long, RendererCanvasCull::Item*, RendererCanvasCull::Item**) const [clone .isra.0] */

void SortArray<RendererCanvasCull::Item*,RendererCanvasCull::ItemYSort,true>::adjust_heap
               (long param_1,long param_2,long param_3,Item *param_4,Item **param_5)

{
  float fVar1;
  float fVar2;
  Item *pIVar3;
  bool bVar4;
  float fVar5;
  long lVar6;
  Item **ppIVar7;
  Item **ppIVar8;
  Item *pIVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  
  fVar5 = _LC8;
  lVar10 = param_2 * 2 + 2;
  lVar6 = param_2;
  if (lVar10 < param_3) {
    do {
      lVar11 = lVar10 + -1;
      ppIVar8 = param_5 + lVar11 + param_1;
      pIVar3 = param_5[param_1 + lVar10];
      pIVar9 = *ppIVar8;
      fVar1 = *(float *)(pIVar3 + 0x1bc);
      fVar2 = *(float *)(pIVar9 + 0x1bc);
      if (fVar1 == fVar2) {
LAB_001003a7:
        if (*(int *)(pIVar9 + 0x1c0) <= *(int *)(pIVar3 + 0x1c0)) {
LAB_0010034e:
          lVar11 = lVar10;
          ppIVar8 = param_5 + param_1 + lVar10;
          lVar10 = lVar10 + 1;
          pIVar9 = pIVar3;
          goto LAB_0010035b;
        }
        param_5[lVar6 + param_1] = pIVar9;
        lVar6 = lVar11;
      }
      else {
        fVar12 = fVar5;
        if (fVar5 <= ABS(fVar1) * fVar5) {
          fVar12 = ABS(fVar1) * fVar5;
        }
        if (ABS(fVar1 - fVar2) < fVar12) goto LAB_001003a7;
        if (fVar2 <= fVar1) goto LAB_0010034e;
LAB_0010035b:
        param_5[lVar6 + param_1] = pIVar9;
        lVar6 = lVar11;
      }
      lVar10 = lVar10 * 2;
    } while (lVar10 < param_3);
    ppIVar7 = ppIVar8;
    if (lVar10 == param_3) goto LAB_001004b8;
  }
  else {
    ppIVar8 = param_5 + param_2 + param_1;
    if (lVar10 != param_3) goto LAB_0010049b;
LAB_001004b8:
    lVar6 = lVar10 + -1;
    ppIVar7 = param_5 + param_1 + lVar6;
    *ppIVar8 = *ppIVar7;
  }
  fVar5 = _LC8;
  lVar10 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
  ppIVar8 = ppIVar7;
  if (param_2 < lVar6) {
    fVar1 = *(float *)(param_4 + 0x1bc);
    do {
      lVar11 = lVar10 >> 1;
      pIVar3 = param_5[param_1 + lVar11];
      fVar2 = *(float *)(pIVar3 + 0x1bc);
      if (fVar2 == fVar1) {
LAB_00100480:
        bVar4 = *(int *)(pIVar3 + 0x1c0) < *(int *)(param_4 + 0x1c0);
      }
      else {
        fVar12 = fVar5;
        if (fVar5 <= ABS(fVar2) * fVar5) {
          fVar12 = ABS(fVar2) * fVar5;
        }
        if (ABS(fVar2 - fVar1) < fVar12) goto LAB_00100480;
        bVar4 = fVar2 < fVar1;
      }
      ppIVar8 = param_5 + lVar6 + param_1;
      if (!bVar4) break;
      param_5[lVar6 + param_1] = pIVar3;
      lVar10 = (lVar11 + -1) - (lVar11 + -1 >> 0x3f);
      lVar6 = lVar11;
      ppIVar8 = param_5 + param_1 + lVar11;
    } while (param_2 < lVar11);
  }
LAB_0010049b:
  *ppIVar8 = param_4;
  return;
}



/* CowData<RendererCanvasCull::Canvas::ChildItem>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererCanvasCull::Canvas::ChildItem>::_copy_on_write
          (CowData<RendererCanvasCull::Canvas::ChildItem> *this)

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



/* CowData<RendererCanvasCull::Item*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererCanvasCull::Item*>::_copy_on_write(CowData<RendererCanvasCull::Item*> *this)

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



/* CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
          (CowData<RendererCanvasRender::Item::CommandBlock> *this)

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



/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::erase(DependencyTracker* const&) [clone .isra.0] */

void __thiscall
HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
::erase(HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
        *this,DependencyTracker **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
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
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar7 = *(long *)(this + 0x10);
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar35 = CONCAT44(0,uVar5);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = (long)*param_1 * 0x3ffff - 1;
    uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
    uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
    uVar29 = uVar29 >> 0x16 ^ uVar29;
    uVar32 = uVar29 & 0xffffffff;
    if ((int)uVar29 == 0) {
      uVar32 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32 * lVar8;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    uVar29 = SUB168(auVar11 * auVar20,8);
    uVar37 = *(uint *)(lVar7 + uVar29 * 4);
    uVar33 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar37 != 0) {
      uVar36 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar35;
        uVar31 = SUB168(auVar14 * auVar23,8);
        uVar30 = SUB164(auVar14 * auVar23,8);
        if (((uint)uVar32 == uVar37) &&
           (*param_1 == *(DependencyTracker **)(*(long *)(lVar6 + uVar29 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar7 + uVar31 * 4);
          uVar37 = *puVar38;
          if ((uVar37 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar37 * lVar8, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar35, auVar16._8_8_ = 0,
             auVar16._0_8_ = (ulong)((uVar30 + uVar5) - SUB164(auVar15 * auVar24,8)) * lVar8,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar35, uVar29 = (ulong)uVar30, uVar32 = uVar33,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar33 = uVar29;
              puVar1 = (uint *)(lVar7 + uVar32 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar37;
              puVar3 = (undefined8 *)(lVar6 + uVar32 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar35;
              uVar31 = SUB168(auVar19 * auVar28,8);
              puVar38 = (uint *)(lVar7 + uVar31 * 4);
              uVar37 = *puVar38;
              if ((uVar37 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar37 * lVar8, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar35, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      (ulong)((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) *
                      lVar8, auVar27._8_8_ = 0, auVar27._0_8_ = uVar35,
                 SUB164(auVar18 * auVar27,8) == 0)) break;
              uVar29 = uVar31 & 0xffffffff;
              uVar32 = uVar33;
            }
          }
          plVar4 = (long *)(lVar6 + uVar33 * 8);
          *(undefined4 *)(lVar7 + uVar33 * 4) = 0;
          plVar34 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar34) {
            *(long *)(this + 0x18) = *plVar34;
            plVar34 = (long *)*plVar4;
            if (*(long **)(this + 0x20) != plVar34) goto LAB_00100a29;
          }
          else if (*(long **)(this + 0x20) != plVar34) {
LAB_00100a29:
            plVar10 = (long *)plVar34[1];
            goto joined_r0x00100a30;
          }
          *(long *)(this + 0x20) = plVar34[1];
          plVar34 = (long *)*plVar4;
          plVar10 = (long *)plVar34[1];
joined_r0x00100a30:
          if (plVar10 != (long *)0x0) {
            *plVar10 = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*plVar34 != 0) {
            *(long *)(*plVar34 + 8) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          Memory::free_static(plVar34,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar33 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar37 = *(uint *)(lVar7 + uVar31 * 4);
        uVar33 = uVar31 & 0xffffffff;
        uVar36 = uVar36 + 1;
      } while ((uVar37 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar37 * lVar8, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar35, auVar13._8_8_ = 0,
              auVar13._0_8_ = (ulong)((uVar5 + uVar30) - SUB164(auVar12 * auVar21,8)) * lVar8,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar35, uVar29 = uVar31,
              uVar36 <= SUB164(auVar13 * auVar22,8)));
    }
  }
  return;
}



/* SortArray<RendererCanvasCull::Item*, RendererCanvasCull::ItemYSort, true>::introsort(long, long,
   RendererCanvasCull::Item**, long) const [clone .isra.0] */

void SortArray<RendererCanvasCull::Item*,RendererCanvasCull::ItemYSort,true>::introsort
               (long param_1,long param_2,Item **param_3,long param_4)

{
  float fVar1;
  float fVar2;
  Item *pIVar3;
  Item *pIVar4;
  Item *pIVar5;
  bool bVar6;
  long lVar7;
  Item **ppIVar8;
  Item *pIVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar10 = param_2 - param_1;
  if (0x10 < lVar10) {
    if (param_4 != 0) {
      lVar11 = param_2;
LAB_00100b21:
      param_4 = param_4 + -1;
      pIVar3 = param_3[(lVar10 >> 1) + param_1];
      pIVar4 = param_3[param_1];
      fVar1 = *(float *)(pIVar3 + 0x1bc);
      fVar13 = *(float *)(pIVar4 + 0x1bc);
      if (fVar13 == fVar1) {
LAB_00100f1b:
        bVar6 = *(int *)(pIVar4 + 0x1c0) < *(int *)(pIVar3 + 0x1c0);
      }
      else {
        fVar2 = _LC8;
        if (_LC8 <= ABS(fVar13) * _LC8) {
          fVar2 = ABS(fVar13) * _LC8;
        }
        if (ABS(fVar13 - fVar1) < fVar2) goto LAB_00100f1b;
        bVar6 = fVar13 < fVar1;
      }
      pIVar5 = param_3[lVar11 + -1];
      fVar2 = *(float *)(pIVar5 + 0x1bc);
      param_2 = param_1;
      lVar10 = lVar11;
      fVar14 = _LC8;
      if (bVar6) {
        if (fVar1 == fVar2) {
LAB_00100f2f:
          fVar12 = fVar1;
          pIVar9 = pIVar3;
          if (*(int *)(pIVar3 + 0x1c0) < *(int *)(pIVar5 + 0x1c0)) goto LAB_00100cd9;
        }
        else {
          fVar12 = _LC8;
          if (_LC8 <= ABS(fVar1) * _LC8) {
            fVar12 = ABS(fVar1) * _LC8;
          }
          if (ABS(fVar1 - fVar2) < fVar12) goto LAB_00100f2f;
          if (fVar1 < fVar2) goto LAB_00100da5;
        }
        if (fVar13 == fVar2) {
LAB_00100ffc:
          bVar6 = *(int *)(pIVar4 + 0x1c0) < *(int *)(pIVar5 + 0x1c0);
        }
        else {
          fVar1 = _LC8;
          if (_LC8 <= ABS(fVar13) * _LC8) {
            fVar1 = ABS(fVar13) * _LC8;
          }
          if (ABS(fVar13 - fVar2) < fVar1) goto LAB_00100ffc;
          bVar6 = fVar13 < fVar2;
        }
        fVar12 = fVar2;
        pIVar9 = pIVar5;
        if (bVar6) goto LAB_00100cd9;
      }
      else {
        if (fVar13 == fVar2) {
LAB_00100f4d:
          bVar6 = *(int *)(pIVar4 + 0x1c0) < *(int *)(pIVar5 + 0x1c0);
        }
        else {
          fVar12 = _LC8;
          if (_LC8 <= ABS(fVar13) * _LC8) {
            fVar12 = ABS(fVar13) * _LC8;
          }
          if (ABS(fVar13 - fVar2) < fVar12) goto LAB_00100f4d;
          bVar6 = fVar13 < fVar2;
        }
        if (!bVar6) {
          if (fVar1 == fVar2) {
LAB_00100fe7:
            bVar6 = *(int *)(pIVar3 + 0x1c0) < *(int *)(pIVar5 + 0x1c0);
          }
          else {
            fVar12 = _LC8;
            if (_LC8 <= ABS(fVar1) * _LC8) {
              fVar12 = ABS(fVar1) * _LC8;
            }
            if (ABS(fVar1 - fVar2) < fVar12) goto LAB_00100fe7;
            bVar6 = fVar1 < fVar2;
          }
          fVar12 = fVar2;
          pIVar9 = pIVar5;
          if (bVar6) goto LAB_00100cd9;
LAB_00100da5:
          fVar12 = fVar1;
          pIVar9 = pIVar3;
          goto LAB_00100cd9;
        }
      }
      fVar12 = fVar13;
      pIVar9 = pIVar4;
LAB_00100cd9:
      if (fVar13 == fVar12) {
LAB_00100ce4:
        bVar6 = *(int *)(param_3[param_2] + 0x1c0) < *(int *)(pIVar9 + 0x1c0);
      }
      else {
        fVar1 = fVar14;
        if (fVar14 <= ABS(fVar13) * fVar14) {
          fVar1 = ABS(fVar13) * fVar14;
        }
        if (ABS(fVar13 - fVar12) < fVar1) goto LAB_00100ce4;
        bVar6 = fVar13 < fVar12;
      }
      if (!bVar6) {
LAB_00100df0:
        lVar10 = lVar10 + -1;
        ppIVar8 = param_3 + lVar10;
        do {
          fVar1 = *(float *)(*ppIVar8 + 0x1bc);
          if (fVar1 == fVar12) {
LAB_00100e63:
            bVar6 = *(int *)(pIVar9 + 0x1c0) < *(int *)(*ppIVar8 + 0x1c0);
          }
          else {
            fVar13 = fVar14;
            if (fVar14 <= ABS(fVar12) * fVar14) {
              fVar13 = ABS(fVar12) * fVar14;
            }
            if (ABS(fVar12 - fVar1) < fVar13) goto LAB_00100e63;
            bVar6 = fVar12 < fVar1;
          }
          if (!bVar6) goto LAB_00100eaf;
          if (param_1 == lVar10) goto LAB_00100e78;
          lVar10 = lVar10 + -1;
          ppIVar8 = ppIVar8 + -1;
        } while( true );
      }
      if (lVar11 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        fVar12 = *(float *)(pIVar9 + 0x1bc);
        fVar14 = _LC8;
        goto LAB_00100df0;
      }
      goto LAB_00100cc8;
    }
LAB_00100f6c:
    ppIVar8 = param_3 + param_1;
    for (lVar11 = lVar10 + -2 >> 1; adjust_heap(param_1,lVar11,lVar10,ppIVar8[lVar11],param_3),
        lVar11 != 0; lVar11 = lVar11 + -1) {
    }
    lVar10 = (param_2 + -1) - param_1;
    do {
      pIVar3 = ppIVar8[lVar10];
      ppIVar8[lVar10] = *ppIVar8;
      adjust_heap(param_1,0,lVar10,pIVar3,param_3);
      bVar6 = 1 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar6);
  }
  return;
LAB_00100e78:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
  fVar14 = _LC8;
LAB_00100eaf:
  if (lVar10 <= param_2) goto LAB_00100ed0;
  pIVar3 = param_3[param_2];
  fVar12 = *(float *)(pIVar9 + 0x1bc);
  param_3[param_2] = *ppIVar8;
  *ppIVar8 = pIVar3;
LAB_00100cc8:
  lVar7 = param_2 + 1;
  param_2 = param_2 + 1;
  fVar13 = *(float *)(param_3[lVar7] + 0x1bc);
  goto LAB_00100cd9;
LAB_00100ed0:
  lVar10 = param_2 - param_1;
  introsort(param_2,lVar11,param_3,param_4);
  if (lVar10 < 0x11) {
    return;
  }
  lVar11 = param_2;
  if (param_4 == 0) goto LAB_00100f6c;
  goto LAB_00100b21;
}



/* RendererCanvasCull::_dependency_changed(Dependency::DependencyChangedNotification,
   DependencyTracker*) */

void RendererCanvasCull::_dependency_changed(int param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = *param_2;
  if (param_1 == 1) {
    *(undefined1 *)(lVar2 + 0x288) = 1;
    plVar4 = _canvas_cull_singleton;
    if (*(long *)(lVar2 + 0x268) == 0) {
      lVar3 = *_canvas_cull_singleton;
      *(long **)(lVar2 + 0x268) = _canvas_cull_singleton;
      lVar1 = lVar2 + 0x268;
      *(undefined8 *)(lVar2 + 0x280) = 0;
      *(long *)(lVar2 + 0x278) = lVar3;
      if (lVar3 == 0) {
        plVar4[1] = lVar1;
      }
      else {
        *(long *)(lVar3 + 0x18) = lVar1;
      }
      *plVar4 = lVar1;
      return;
    }
  }
  return;
}



/* SortArray<RendererCanvasCull::Item*, RendererCanvasCull::ItemIndexSort, true>::introsort(long,
   long, RendererCanvasCull::Item**, long) const [clone .isra.0] */

void SortArray<RendererCanvasCull::Item*,RendererCanvasCull::ItemIndexSort,true>::introsort
               (long param_1,long param_2,Item **param_3,long param_4)

{
  int iVar1;
  Item *pIVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Item **ppIVar6;
  int iVar7;
  Item **ppIVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  Item *pIVar12;
  int iVar13;
  Item *pIVar14;
  Item **ppIVar15;
  long lVar16;
  long local_58;
  
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_001012c1:
    lVar10 = lVar16 + -2 >> 1;
    lVar11 = lVar10 * 2 + 2;
    ppIVar8 = param_3 + param_1 + lVar10;
    pIVar12 = *ppIVar8;
    lVar5 = lVar10;
    lVar9 = lVar11;
    if (lVar16 <= lVar11) goto LAB_001013d9;
LAB_00101303:
    do {
      pIVar2 = param_3[param_1 + lVar11];
      pIVar14 = param_3[param_1 + lVar11 + -1];
      lVar3 = lVar11 + -1;
      lVar4 = lVar11;
      ppIVar6 = param_3 + param_1 + lVar11 + -1;
      if (*(int *)(pIVar14 + 0x18c) <= *(int *)(pIVar2 + 0x18c)) {
        lVar4 = lVar11 + 1;
        lVar3 = lVar11;
        pIVar14 = pIVar2;
        ppIVar6 = param_3 + param_1 + lVar11;
      }
      lVar11 = lVar4 * 2;
      param_3[lVar5 + param_1] = pIVar14;
      lVar5 = lVar3;
    } while (lVar16 != lVar11 && SBORROW8(lVar16,lVar11) == lVar16 + lVar4 * -2 < 0);
    ppIVar15 = ppIVar6;
    if (lVar16 == lVar11) goto LAB_001013df;
    do {
      lVar11 = lVar9;
      lVar9 = lVar3 + -1;
      if (lVar3 <= lVar10) goto LAB_00101538;
      iVar13 = *(int *)(pIVar12 + 0x18c);
      do {
        lVar5 = lVar9 >> 1;
        pIVar2 = param_3[param_1 + lVar5];
        if (iVar13 <= *(int *)(pIVar2 + 0x18c)) {
          param_3[lVar3 + param_1] = pIVar12;
          goto joined_r0x001013b9;
        }
        param_3[lVar3 + param_1] = pIVar2;
        lVar9 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
        lVar3 = lVar5;
      } while (lVar10 < lVar5);
      param_3[param_1 + lVar5] = pIVar12;
joined_r0x001013b9:
      if (lVar10 == 0) {
        ppIVar8 = param_3 + param_1;
        lVar16 = (param_2 + -1) - param_1;
        goto LAB_00101418;
      }
      while( true ) {
        ppIVar8 = ppIVar8 + -1;
        lVar11 = lVar11 + -2;
        lVar10 = lVar10 + -1;
        pIVar12 = *ppIVar8;
        lVar5 = lVar10;
        lVar9 = lVar11;
        if (lVar11 < lVar16) goto LAB_00101303;
LAB_001013d9:
        lVar9 = lVar11;
        ppIVar15 = ppIVar8;
        ppIVar6 = ppIVar8;
        if (lVar11 == lVar16) break;
LAB_00101538:
        *ppIVar6 = pIVar12;
      }
LAB_001013df:
      lVar3 = lVar11 + -1;
      ppIVar6 = param_3 + param_1 + lVar3;
      *ppIVar15 = *ppIVar6;
    } while( true );
  }
  lVar11 = param_2;
  local_58 = param_4;
LAB_001010f1:
  pIVar12 = param_3[lVar11 + -1];
  local_58 = local_58 + -1;
  iVar13 = *(int *)(pIVar12 + 0x18c);
  iVar7 = *(int *)(param_3[param_1] + 0x18c);
  iVar1 = *(int *)(param_3[(lVar16 >> 1) + param_1] + 0x18c);
  if (iVar7 < iVar1) {
    if (iVar1 < iVar13) {
LAB_00101294:
      pIVar12 = param_3[(lVar16 >> 1) + param_1];
      iVar13 = iVar1;
      goto LAB_0010113b;
    }
    if (iVar7 < iVar13) goto LAB_0010113b;
  }
  else if (iVar13 <= iVar7) {
    if (iVar1 < iVar13) goto LAB_0010113b;
    goto LAB_00101294;
  }
  pIVar12 = param_3[param_1];
  iVar13 = iVar7;
LAB_0010113b:
  lVar16 = lVar11;
  param_2 = param_1;
  do {
    if (iVar7 < iVar13) {
      if (lVar11 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        iVar13 = *(int *)(pIVar12 + 0x18c);
        goto LAB_00101181;
      }
    }
    else {
LAB_00101181:
      lVar9 = lVar16 + -1;
      ppIVar8 = param_3 + lVar9;
      if (iVar13 < *(int *)(*ppIVar8 + 0x18c)) {
        ppIVar6 = param_3 + lVar16 + -2;
        while (param_1 != lVar9) {
          lVar9 = lVar9 + -1;
          ppIVar8 = ppIVar6;
          if (*(int *)(*ppIVar6 + 0x18c) <= iVar13) goto LAB_001011f0;
          ppIVar6 = ppIVar6 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_001011f0:
      if (lVar9 <= param_2) break;
      pIVar2 = param_3[param_2];
      param_3[param_2] = *ppIVar8;
      iVar13 = *(int *)(pIVar12 + 0x18c);
      *ppIVar8 = pIVar2;
      lVar16 = lVar9;
    }
    lVar9 = param_2 + 1;
    param_2 = param_2 + 1;
    iVar7 = *(int *)(param_3[lVar9] + 0x18c);
  } while( true );
  introsort(param_2,lVar11,param_3,local_58);
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  lVar11 = param_2;
  if (local_58 == 0) goto LAB_001012c1;
  goto LAB_001010f1;
LAB_00101418:
  pIVar12 = ppIVar8[lVar16];
  ppIVar8[lVar16] = *ppIVar8;
  if (lVar16 < 3) {
    if (lVar16 != 2) {
      *ppIVar8 = pIVar12;
      return;
    }
    lVar11 = param_1 + 1;
    lVar9 = 0;
    lVar16 = 1;
    *ppIVar8 = param_3[lVar11];
LAB_001014b0:
    iVar13 = *(int *)(pIVar12 + 0x18c);
    while( true ) {
      ppIVar6 = param_3 + lVar11;
      pIVar2 = param_3[param_1 + lVar9];
      if (iVar13 <= *(int *)(pIVar2 + 0x18c)) break;
      *ppIVar6 = pIVar2;
      if (lVar9 == 0) {
        param_3[param_1 + lVar9] = pIVar12;
        goto LAB_00101418;
      }
      lVar11 = param_1 + lVar9;
      lVar9 = (lVar9 + -1) / 2;
    }
  }
  else {
    lVar11 = 2;
    lVar9 = 0;
    do {
      pIVar2 = param_3[param_1 + lVar11];
      pIVar14 = param_3[param_1 + lVar11 + -1];
      lVar5 = lVar11 + -1;
      ppIVar6 = param_3 + param_1 + lVar11 + -1;
      lVar10 = lVar11;
      if (*(int *)(pIVar14 + 0x18c) <= *(int *)(pIVar2 + 0x18c)) {
        lVar10 = lVar11 + 1;
        lVar5 = lVar11;
        ppIVar6 = param_3 + param_1 + lVar11;
        pIVar14 = pIVar2;
      }
      lVar11 = lVar10 * 2;
      param_3[lVar9 + param_1] = pIVar14;
      lVar9 = lVar5;
    } while (lVar16 != lVar11 && SBORROW8(lVar16,lVar11) == lVar16 + lVar10 * -2 < 0);
    if (lVar16 == lVar11) {
      lVar11 = param_1 + lVar16 + -1;
      lVar9 = lVar16 + -2 >> 1;
      *ppIVar6 = param_3[lVar11];
      lVar16 = lVar16 + -1;
      goto LAB_001014b0;
    }
    lVar11 = param_1 + lVar5;
    lVar16 = lVar16 + -1;
    lVar9 = (lVar5 + -1) / 2;
    if (0 < lVar5) goto LAB_001014b0;
  }
  *ppIVar6 = pIVar12;
  goto LAB_00101418;
}



/* SortArray<RendererCanvasCull::Canvas::ChildItem,
   _DefaultComparator<RendererCanvasCull::Canvas::ChildItem>, true>::introsort(long, long,
   RendererCanvasCull::Canvas::ChildItem*, long) const [clone .isra.0] */

void SortArray<RendererCanvasCull::Canvas::ChildItem,_DefaultComparator<RendererCanvasCull::Canvas::ChildItem>,true>
     ::introsort(long param_1,long param_2,ChildItem *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ChildItem *pCVar5;
  int iVar6;
  ChildItem *pCVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ChildItem *pCVar13;
  long lVar14;
  long local_58;
  
  lVar12 = param_2 - param_1;
  if (lVar12 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_00101796:
    lVar14 = lVar12 + -2 >> 1;
    lVar9 = lVar14 * 2 + 2;
    pCVar7 = param_3 + (lVar14 + param_1) * 8;
    lVar8 = *(long *)pCVar7;
    lVar4 = lVar14;
    lVar10 = lVar9;
    if (lVar12 <= lVar9) goto LAB_001018a9;
LAB_001017d3:
    do {
      lVar2 = lVar9 + -1;
      lVar3 = lVar9;
      pCVar5 = param_3 + (param_1 + lVar9 + -1) * 8;
      if (*(int *)(*(long *)(param_3 + (param_1 + lVar9 + -1) * 8) + 0x18c) <=
          *(int *)(*(long *)(param_3 + (param_1 + lVar9) * 8) + 0x18c)) {
        lVar3 = lVar9 + 1;
        lVar2 = lVar9;
        pCVar5 = param_3 + (param_1 + lVar9) * 8;
      }
      lVar9 = lVar3 * 2;
      *(long *)(param_3 + (lVar4 + param_1) * 8) = *(long *)pCVar5;
      lVar4 = lVar2;
    } while (lVar12 != lVar9 && SBORROW8(lVar12,lVar9) == lVar12 + lVar3 * -2 < 0);
    pCVar13 = pCVar5;
    if (lVar12 == lVar9) goto LAB_001018af;
    do {
      lVar9 = lVar10;
      lVar10 = lVar2 + -1;
      if (lVar2 <= lVar14) goto LAB_001019f8;
      iVar11 = *(int *)(lVar8 + 0x18c);
      do {
        lVar4 = lVar10 >> 1;
        lVar10 = *(long *)(param_3 + (param_1 + lVar4) * 8);
        if (iVar11 <= *(int *)(lVar10 + 0x18c)) {
          *(long *)(param_3 + (lVar2 + param_1) * 8) = lVar8;
          goto joined_r0x00101889;
        }
        *(long *)(param_3 + (lVar2 + param_1) * 8) = lVar10;
        lVar10 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
        lVar2 = lVar4;
      } while (lVar14 < lVar4);
      *(long *)(param_3 + (param_1 + lVar4) * 8) = lVar8;
joined_r0x00101889:
      if (lVar14 == 0) {
        pCVar7 = param_3 + param_1 * 8;
        lVar12 = (param_2 + -1) - param_1;
        goto LAB_001018e0;
      }
      while( true ) {
        pCVar7 = pCVar7 + -8;
        lVar9 = lVar9 + -2;
        lVar14 = lVar14 + -1;
        lVar8 = *(long *)pCVar7;
        lVar4 = lVar14;
        lVar10 = lVar9;
        if (lVar9 < lVar12) goto LAB_001017d3;
LAB_001018a9:
        lVar10 = lVar9;
        pCVar13 = pCVar7;
        pCVar5 = pCVar7;
        if (lVar9 == lVar12) break;
LAB_001019f8:
        *(long *)pCVar5 = lVar8;
      }
LAB_001018af:
      lVar2 = lVar9 + -1;
      pCVar5 = param_3 + (param_1 + lVar2) * 8;
      *(long *)pCVar13 = *(long *)pCVar5;
    } while( true );
  }
  lVar9 = param_2;
  local_58 = param_4;
LAB_001015be:
  lVar8 = *(long *)(param_3 + lVar9 * 8 + -8);
  local_58 = local_58 + -1;
  iVar11 = *(int *)(lVar8 + 0x18c);
  iVar6 = *(int *)(*(long *)(param_3 + param_1 * 8) + 0x18c);
  iVar1 = *(int *)(*(long *)(param_3 + ((lVar12 >> 1) + param_1) * 8) + 0x18c);
  if (iVar6 < iVar1) {
    if (iVar1 < iVar11) {
LAB_0010176c:
      lVar8 = *(long *)(param_3 + ((lVar12 >> 1) + param_1) * 8);
      iVar11 = iVar1;
      goto LAB_00101608;
    }
    if (iVar6 < iVar11) goto LAB_00101608;
  }
  else if (iVar11 <= iVar6) {
    if (iVar1 < iVar11) goto LAB_00101608;
    goto LAB_0010176c;
  }
  lVar8 = *(long *)(param_3 + param_1 * 8);
  iVar11 = iVar6;
LAB_00101608:
  lVar12 = lVar9;
  param_2 = param_1;
  do {
    if (iVar6 < iVar11) {
      if (lVar9 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        iVar11 = *(int *)(lVar8 + 0x18c);
        goto LAB_00101651;
      }
    }
    else {
LAB_00101651:
      lVar12 = lVar12 + -1;
      pCVar7 = param_3 + lVar12 * 8;
      if (iVar11 < *(int *)(*(long *)pCVar7 + 0x18c)) {
        pCVar5 = param_3 + lVar12 * 8 + -8;
        while (param_1 != lVar12) {
          lVar12 = lVar12 + -1;
          pCVar7 = pCVar5;
          if (*(int *)(*(long *)pCVar5 + 0x18c) <= iVar11) goto LAB_001016c0;
          pCVar5 = pCVar5 + -8;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_001016c0:
      if (lVar12 <= param_2) break;
      lVar10 = *(long *)(param_3 + param_2 * 8);
      *(long *)(param_3 + param_2 * 8) = *(long *)pCVar7;
      iVar11 = *(int *)(lVar8 + 0x18c);
      *(long *)pCVar7 = lVar10;
    }
    lVar10 = param_2 * 8;
    param_2 = param_2 + 1;
    iVar6 = *(int *)(*(long *)(param_3 + lVar10 + 8) + 0x18c);
  } while( true );
  introsort(param_2,lVar9,param_3,local_58);
  lVar12 = param_2 - param_1;
  if (lVar12 < 0x11) {
    return;
  }
  lVar9 = param_2;
  if (local_58 == 0) goto LAB_00101796;
  goto LAB_001015be;
LAB_001018e0:
  lVar9 = *(long *)(pCVar7 + lVar12 * 8);
  *(long *)(pCVar7 + lVar12 * 8) = *(long *)pCVar7;
  if (lVar12 < 3) {
    if (lVar12 != 2) {
      *(long *)pCVar7 = lVar9;
      return;
    }
    lVar8 = param_1 + 1;
    lVar10 = 0;
    lVar12 = 1;
    *(long *)pCVar7 = *(long *)(param_3 + lVar8 * 8);
LAB_00101970:
    iVar11 = *(int *)(lVar9 + 0x18c);
    while( true ) {
      pCVar5 = param_3 + lVar8 * 8;
      lVar8 = *(long *)(param_3 + (param_1 + lVar10) * 8);
      if (iVar11 <= *(int *)(lVar8 + 0x18c)) break;
      *(long *)pCVar5 = lVar8;
      if (lVar10 == 0) {
        *(long *)(param_3 + (param_1 + lVar10) * 8) = lVar9;
        goto LAB_001018e0;
      }
      lVar8 = param_1 + lVar10;
      lVar10 = (lVar10 + -1) / 2;
    }
  }
  else {
    lVar8 = 2;
    lVar10 = 0;
    do {
      lVar4 = lVar8 + -1;
      pCVar5 = param_3 + (param_1 + lVar8 + -1) * 8;
      lVar14 = lVar8;
      if (*(int *)(*(long *)(param_3 + (param_1 + lVar8 + -1) * 8) + 0x18c) <=
          *(int *)(*(long *)(param_3 + (param_1 + lVar8) * 8) + 0x18c)) {
        lVar14 = lVar8 + 1;
        lVar4 = lVar8;
        pCVar5 = param_3 + (param_1 + lVar8) * 8;
      }
      lVar8 = lVar14 * 2;
      *(long *)(param_3 + (lVar10 + param_1) * 8) = *(long *)pCVar5;
      lVar10 = lVar4;
    } while (lVar12 != lVar8 && SBORROW8(lVar12,lVar8) == lVar12 + lVar14 * -2 < 0);
    if (lVar12 == lVar8) {
      lVar8 = param_1 + lVar12 + -1;
      lVar10 = lVar12 + -2 >> 1;
      *(long *)pCVar5 = *(long *)(param_3 + lVar8 * 8);
      lVar12 = lVar12 + -1;
      goto LAB_00101970;
    }
    lVar8 = param_1 + lVar4;
    lVar12 = lVar12 + -1;
    lVar10 = (lVar4 + -1) / 2;
    if (0 < lVar4) goto LAB_00101970;
  }
  *(long *)pCVar5 = lVar9;
  goto LAB_001018e0;
}



/* HashSet<RendererCanvasRender::LightOccluderInstance*, HashMapHasherDefault,
   HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>
   >::erase(RendererCanvasRender::LightOccluderInstance* const&) [clone .isra.0] */

void __thiscall
HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
::erase(HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
        *this,LightOccluderInstance **param_1)

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
          if (*param_1 == *(LightOccluderInstance **)(lVar6 + uVar32 * 8)) {
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



/* HashSet<RendererCanvasRender::Light*, HashMapHasherDefault,
   HashMapComparatorDefault<RendererCanvasRender::Light*> >::erase(RendererCanvasRender::Light*
   const&) [clone .isra.0] */

void __thiscall
HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
::erase(HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
        *this,Light **param_1)

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
          if (*param_1 == *(Light **)(lVar6 + uVar32 * 8)) {
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



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

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



/* RendererCanvasCull::_collect_ysort_children(RendererCanvasCull::Item*, RendererCanvasCull::Item*,
   Color const&, RendererCanvasCull::Item**, int&, int) */

void __thiscall
RendererCanvasCull::_collect_ysort_children
          (RendererCanvasCull *this,Item *param_1,Item *param_2,Color *param_3,Item **param_4,
          int *param_5,int param_6)

{
  long *plVar1;
  RendererCanvasCull RVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  Item *pIVar6;
  long lVar7;
  Item *pIVar8;
  long *plVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1d8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CowData<RendererCanvasCull::Item*>::_copy_on_write
                ((CowData<RendererCanvasCull::Item*> *)(param_1 + 0x1d8));
      return;
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x1d8) + -8);
    CowData<RendererCanvasCull::Item*>::_copy_on_write
              ((CowData<RendererCanvasCull::Item*> *)(param_1 + 0x1d8));
    plVar9 = *(long **)(param_1 + 0x1d8);
    iVar5 = (int)uVar3;
    if (0 < iVar5) {
      plVar1 = plVar9 + (ulong)(iVar5 - 1) + 1;
      do {
        lVar7 = *plVar9;
        if ((*(byte *)(lVar7 + 0x38) & 2) != 0) {
          local_58 = 0x3f800000;
          uStack_50 = 0x3f80000000000000;
          local_48 = 0;
          if ((this[0x318] == (RendererCanvasCull)0x0) || ((*(byte *)(lVar7 + 0x38) & 0x20) == 0)) {
            local_58 = *(undefined8 *)(lVar7 + 8);
            uStack_50 = *(undefined8 *)(lVar7 + 0x10);
            local_48 = *(undefined8 *)(lVar7 + 0x18);
            RVar2 = this[0x1ca];
          }
          else {
            lVar7 = Engine::get_singleton();
            TransformInterpolator::interpolate_transform_2d
                      ((Transform2D *)(*plVar9 + 0x20),(Transform2D *)(*plVar9 + 8),
                       (Transform2D *)&local_58,(float)*(double *)(lVar7 + 0x60));
            RVar2 = this[0x1ca];
          }
          if (RVar2 != (RendererCanvasCull)0x0) {
            local_68._0_8_ =
                 CONCAT44((float)((ulong)local_48 >> 0x20) + _LC33._4_4_,
                          (float)local_48 + (float)_LC33);
            local_48 = Vector2::floor();
          }
          pIVar6 = (Item *)*plVar9;
          param_4[*param_5] = pIVar6;
          Transform2D::operator*((Transform2D *)&local_88,(Transform2D *)(param_1 + 0x1a8));
          lVar7 = *plVar9;
          iVar5 = *param_5;
          *(undefined8 *)(pIVar6 + 0x1a8) = local_88;
          *(undefined8 *)(pIVar6 + 0x1b0) = uStack_80;
          uVar3 = *(undefined8 *)param_3;
          uVar4 = *(undefined8 *)(param_3 + 8);
          *(undefined8 *)(pIVar6 + 0x1b8) = local_78;
          pIVar6 = (Item *)0x0;
          if (*(char *)(lVar7 + 0x188) != '\0') {
            pIVar6 = param_2;
          }
          *(undefined8 *)(lVar7 + 0x198) = uVar3;
          *(undefined8 *)(lVar7 + 0x1a0) = uVar4;
          *(ulong *)(lVar7 + 0x1c0) = CONCAT44(param_6,iVar5);
          *(Item **)(lVar7 + 0xd0) = pIVar6;
          if (*(char *)(lVar7 + 0xea) == '\0') {
            *(undefined8 *)(lVar7 + 0xec) = *(undefined8 *)(param_1 + 0xec);
            *(undefined4 *)(lVar7 + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
            *(undefined8 *)(lVar7 + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
          }
          iVar5 = *(int *)(lVar7 + 0x160);
          if (*(char *)(lVar7 + 0x164) != '\0') {
            iVar5 = iVar5 + param_6;
            if (0x1000 < iVar5) {
              iVar5 = 0x1000;
            }
            if (iVar5 < -0x1000) {
              iVar5 = -0x1000;
            }
          }
          *param_5 = *param_5 + 1;
          if (*(char *)(lVar7 + 0x165) != '\0') {
            auVar10 = Color::operator*(param_3,(Color *)(lVar7 + 0x168));
            pIVar6 = (Item *)*plVar9;
            pIVar8 = param_2;
            if (pIVar6[0x188] == (Item)0x0) {
              pIVar8 = pIVar6;
            }
            local_68 = auVar10;
            _collect_ysort_children(this,pIVar6,pIVar8,(Color *)local_68,param_4,param_5,iVar5);
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::_count_ysort_children(RendererCanvasCull::Item*) */

int __thiscall RendererCanvasCull::_count_ysort_children(RendererCanvasCull *this,Item *param_1)

{
  undefined8 *puVar1;
  Item *pIVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x1d8);
  if ((puVar4 != (undefined8 *)0x0) && (0 < (int)puVar4[-1])) {
    iVar5 = 0;
    puVar1 = puVar4 + (ulong)((int)puVar4[-1] - 1) + 1;
    do {
      pIVar2 = (Item *)*puVar4;
      if (((byte)pIVar2[0x38] & 2) != 0) {
        iVar5 = iVar5 + 1;
        if (pIVar2[0x165] != (Item)0x0) {
          iVar3 = _count_ysort_children(this,pIVar2);
          iVar5 = iVar5 + iVar3;
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
    return iVar5;
  }
  return 0;
}



/* RendererCanvasCull::_mark_ysort_dirty(RendererCanvasCull::Item*) */

ulong __thiscall RendererCanvasCull::_mark_ysort_dirty(RendererCanvasCull *this,Item *param_1)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  __mutex = (pthread_mutex_t *)(this + 0x148);
  while( true ) {
    *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
    iVar2 = pthread_mutex_lock(__mutex);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    uVar1 = *(ulong *)(param_1 + 0x148);
    if (((*(uint *)(this + 0x134) <= (uint)uVar1) || (uVar1 >> 0x20 == 0x7fffffff)) ||
       ((*(uint *)(((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                   *(long *)(*(long *)(this + 0x120) +
                            ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8) + 0x290) &
        0x7fffffff) != (uint)(uVar1 >> 0x20))) {
      uVar3 = pthread_mutex_unlock(__mutex);
      return (ulong)uVar3;
    }
    uVar3 = pthread_mutex_unlock(__mutex);
    if (*(long *)(param_1 + 0x148) == 0) {
      return (ulong)uVar3;
    }
    uVar1 = *(ulong *)(param_1 + 0x148);
    uVar4 = uVar1 & 0xffffffff;
    if (*(uint *)(this + 0x134) <= (uint)uVar1) break;
    param_1 = (Item *)((uVar4 % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) + (uVar4 / *(uint *)(this + 0x130)) * 8));
    uVar3 = *(uint *)(param_1 + 0x290);
    if (uVar3 != (uint)(uVar1 >> 0x20)) {
      if (0x7ffffffe < uVar3 + 0x80000000) {
        return (ulong)(uVar3 + 0x80000000);
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0);
      return 0;
    }
    if (param_1[0x165] == (Item)0x0) {
      return (ulong)uVar3;
    }
  }
  return uVar4;
}



/* RendererCanvasCull::was_sdf_used() */

RendererCanvasCull __thiscall RendererCanvasCull::was_sdf_used(RendererCanvasCull *this)

{
  return this[0x1c9];
}



/* RendererCanvasCull::canvas_initialize(RID) */

void __thiscall RendererCanvasCull::canvas_initialize(RendererCanvasCull *this,ulong param_2)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar3 = _LC39;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xdc))) {
    pauVar2 = (undefined1 (*) [16])
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
              *(long *)(*(long *)(this + 200) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8));
    if ((int)*(uint *)(pauVar2[0xd] + 8) < 0) {
      uVar4 = (uint)(param_2 >> 0x20);
      if (uVar4 == (*(uint *)(pauVar2[0xd] + 8) & 0x7fffffff)) {
        *(uint *)(pauVar2[0xd] + 8) = uVar4;
        *pauVar2 = (undefined1  [16])0x0;
        pauVar2[1] = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar2[2] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar2[3] + 8) = (undefined1  [16])0x0;
        pauVar2[5] = (undefined1  [16])0x0;
        pauVar2[6] = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar2[7] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar2[8] + 8) = (undefined1  [16])0x0;
        uVar1 = _LC6;
        *(undefined8 *)pauVar2[2] = uVar3;
        *(undefined8 *)(pauVar2[4] + 8) = uVar3;
        *(undefined8 *)pauVar2[7] = uVar3;
        *(undefined8 *)(pauVar2[9] + 8) = uVar3;
        *(undefined8 *)pauVar2[0xb] = 0;
        *(undefined8 *)(pauVar2[0xc] + 8) = 0;
        pauVar2[10][0] = 1;
        *(undefined4 *)pauVar2[0xd] = 0x3f800000;
        *(undefined4 *)(pauVar2[0xb] + 8) = uVar1;
        *(undefined4 *)(pauVar2[0xb] + 0xc) = uVar1;
        *(undefined4 *)pauVar2[0xc] = uVar1;
        *(undefined4 *)(pauVar2[0xc] + 4) = uVar1;
        return;
      }
      pcVar5 = "Attempting to initialize the wrong RID";
      uVar3 = 0xfc;
    }
    else {
      pcVar5 = "Initializing already initialized RID";
      uVar3 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar3,
                     "Method/function failed. Returning: nullptr",pcVar5,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                   "Parameter \"mem\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_set_item_mirroring(RID, RID, Vector2 const&) */

void __thiscall
RendererCanvasCull::canvas_set_item_mirroring
          (RendererCanvasCull *this,ulong param_2,ulong param_3,float *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xdc))) {
    lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
            *(long *)(*(long *)(this + 200) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
    iVar1 = *(int *)(lVar5 + 0xd8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x134))) {
        lVar6 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                *(long *)(*(long *)(this + 0x120) +
                         ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
        if (*(int *)(lVar6 + 0x290) == (int)(param_3 >> 0x20)) {
          lVar5 = *(long *)(lVar5 + 0xb0);
          if (lVar5 != 0) {
            lVar4 = 0;
            while (lVar4 < *(long *)(lVar5 + -8)) {
              lVar4 = lVar4 + 1;
              if (*(long *)(lVar5 + -8 + lVar4 * 8) == lVar6) {
                if ((*param_4 == 0.0) && (param_4[1] == 0.0)) {
                  uVar3 = 0;
                  lVar5 = 0;
                }
                else {
                  uVar3 = 1;
                  lVar5 = lVar6;
                }
                *(undefined1 *)(lVar6 + 0xea) = uVar3;
                uVar2 = *(undefined8 *)param_4;
                *(long *)(lVar6 + 0xf8) = lVar5;
                *(undefined8 *)(lVar6 + 0xec) = uVar2;
                *(undefined4 *)(lVar6 + 0xf4) = 1;
                return;
              }
            }
          }
          _err_print_error("canvas_set_item_mirroring","servers/rendering/renderer_canvas_cull.cpp",
                           0x209,"Condition \"idx == -1\" is true.",0,0);
          return;
        }
        if (*(int *)(lVar6 + 0x290) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      _err_print_error("canvas_set_item_mirroring","servers/rendering/renderer_canvas_cull.cpp",
                       0x206,"Parameter \"canvas_item\" is null.",0,0);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_set_item_mirroring","servers/rendering/renderer_canvas_cull.cpp",0x204,
                   "Parameter \"canvas\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_set_item_repeat(RID, Vector2 const&, int) */

void __thiscall
RendererCanvasCull::canvas_set_item_repeat
          (RendererCanvasCull *this,ulong param_2,float *param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (param_4 < 0) {
    _err_print_error("canvas_set_item_repeat","servers/rendering/renderer_canvas_cull.cpp",0x213,
                     "Condition \"p_repeat_times < 0\" is true.",0,0);
    return;
  }
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar3 + 0x290) == (int)(param_2 >> 0x20)) {
      if ((*param_3 == 0.0) && (param_3[1] == 0.0)) {
        bVar4 = false;
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (param_4 != 0) {
          lVar2 = lVar3;
        }
        bVar4 = param_4 != 0;
      }
      *(long *)(lVar3 + 0xf8) = lVar2;
      uVar1 = *(undefined8 *)param_3;
      *(bool *)(lVar3 + 0xea) = bVar4;
      *(undefined8 *)(lVar3 + 0xec) = uVar1;
      *(int *)(lVar3 + 0xf4) = param_4;
      return;
    }
    if (*(int *)(lVar3 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_set_item_repeat","servers/rendering/renderer_canvas_cull.cpp",0x215,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_set_modulate(RID, Color const&) */

void __thiscall
RendererCanvasCull::canvas_set_modulate(RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xdc))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
            *(long *)(*(long *)(this + 200) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
    if (*(int *)(lVar2 + 0xd8) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0xb8) = *param_3;
      *(undefined8 *)(lVar2 + 0xc0) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0xd8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_set_modulate","servers/rendering/renderer_canvas_cull.cpp",0x220,
                   "Parameter \"canvas\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_set_disable_scale(bool) */

void __thiscall RendererCanvasCull::canvas_set_disable_scale(RendererCanvasCull *this,bool param_1)

{
  this[0x1c8] = (RendererCanvasCull)param_1;
  return;
}



/* RendererCanvasCull::canvas_set_parent(RID, RID, float) */

void __thiscall
RendererCanvasCull::canvas_set_parent
          (undefined4 param_1,RendererCanvasCull *this,ulong param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0xdc))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
            *(long *)(*(long *)(this + 200) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
    if (*(int *)(lVar1 + 0xd8) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(lVar1 + 200) = param_4;
      *(undefined4 *)(lVar1 + 0xd0) = param_1;
      return;
    }
    if (*(int *)(lVar1 + 0xd8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_set_parent","servers/rendering/renderer_canvas_cull.cpp",0x22a,
                   "Parameter \"canvas\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_visible(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_visible(RendererCanvasCull *this,ulong param_2,byte param_3)

{
  Item *pIVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    pIVar1 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                     *(long *)(*(long *)(this + 0x120) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    if (*(int *)(pIVar1 + 0x290) == (int)(param_2 >> 0x20)) {
      pIVar1[0x38] = (Item)((byte)pIVar1[0x38] & 0xfd | (param_3 & 1) * '\x02');
      _mark_ysort_dirty(this,pIVar1);
      return;
    }
    if (*(int *)(pIVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_visible","servers/rendering/renderer_canvas_cull.cpp",0x267,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_light_mask(RID, int) */

void __thiscall
RendererCanvasCull::canvas_item_set_light_mask
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x134)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
              *(long *)(*(long *)(this + 0x120) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
      iVar1 = *(int *)(lVar2 + 0x290);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x4c) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_item_set_light_mask","servers/rendering/renderer_canvas_cull.cpp",0x270,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_transform(RID, Transform2D const&) */

void __thiscall
RendererCanvasCull::canvas_item_set_transform
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar7 + 0x290) == (int)(param_2 >> 0x20)) {
      if (((this[0x318] != (RendererCanvasCull)0x0) && ((*(byte *)(lVar7 + 0x38) & 0x20) != 0)) &&
         ((*(byte *)(lVar7 + 0x38) & 0x10) == 0)) {
        puVar2 = *(uint **)(this + 0x2a8);
        uVar1 = *puVar2;
        pvVar5 = *(void **)(puVar2 + 2);
        if (uVar1 == puVar2[1]) {
          uVar6 = (ulong)(uVar1 * 2);
          if (uVar1 * 2 == 0) {
            uVar6 = 1;
          }
          puVar2[1] = (uint)uVar6;
          pvVar5 = (void *)Memory::realloc_static(pvVar5,uVar6 * 8,false);
          *(void **)(puVar2 + 2) = pvVar5;
          if (pvVar5 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar1 = *puVar2;
        }
        *puVar2 = uVar1 + 1;
        *(ulong *)((long)pvVar5 + (ulong)uVar1 * 8) = param_2;
        *(byte *)(lVar7 + 0x38) = *(byte *)(lVar7 + 0x38) | 0x10;
      }
      uVar4 = param_3[1];
      *(undefined8 *)(lVar7 + 8) = *param_3;
      *(undefined8 *)(lVar7 + 0x10) = uVar4;
      *(undefined8 *)(lVar7 + 0x18) = param_3[2];
      return;
    }
    if (*(int *)(lVar7 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_transform","servers/rendering/renderer_canvas_cull.cpp",0x277,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_visibility_layer(RID, unsigned int) */

void __thiscall
RendererCanvasCull::canvas_item_set_visibility_layer
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x134)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
              *(long *)(*(long *)(this + 0x120) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
      iVar1 = *(int *)(lVar2 + 0x290);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x1c8) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_item_set_visibility_layer","servers/rendering/renderer_canvas_cull.cpp",
                   0x287,"Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_get_visibility_layer(RID) */

undefined4 __thiscall
RendererCanvasCull::canvas_item_get_visibility_layer(RendererCanvasCull *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    iVar1 = *(int *)(lVar2 + 0x290);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1c8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      return 0;
    }
  }
  return 0;
}



/* RendererCanvasCull::canvas_item_set_clip(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_clip(RendererCanvasCull *this,ulong param_2,byte param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar1 + 0x290) == (int)(param_2 >> 0x20)) {
      *(byte *)(lVar1 + 0x38) = param_3 & 1 | *(byte *)(lVar1 + 0x38) & 0xfe;
      return;
    }
    if (*(int *)(lVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_clip","servers/rendering/renderer_canvas_cull.cpp",0x296,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_distance_field_mode(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_distance_field_mode
          (RendererCanvasCull *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x134)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
              *(long *)(*(long *)(this + 0x120) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
      iVar1 = *(int *)(lVar2 + 0x290);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0xe8) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_item_set_distance_field_mode",
                   "servers/rendering/renderer_canvas_cull.cpp",0x29d,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_custom_rect(RID, bool, Rect2 const&) */

void __thiscall
RendererCanvasCull::canvas_item_set_custom_rect
          (RendererCanvasCull *this,ulong param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar3 + 0x290) == (int)(param_2 >> 0x20)) {
      uVar1 = *param_4;
      uVar2 = param_4[1];
      *(undefined1 *)(lVar3 + 0x54) = param_3;
      *(undefined8 *)(lVar3 + 0x58) = uVar1;
      *(undefined8 *)(lVar3 + 0x60) = uVar2;
      return;
    }
    if (*(int *)(lVar3 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_custom_rect","servers/rendering/renderer_canvas_cull.cpp",0x2a4,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_modulate(RID, Color const&) */

void __thiscall
RendererCanvasCull::canvas_item_set_modulate
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar2 + 0x290) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x168) = *param_3;
      *(undefined8 *)(lVar2 + 0x170) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_modulate","servers/rendering/renderer_canvas_cull.cpp",0x2ac,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_self_modulate(RID, Color const&) */

void __thiscall
RendererCanvasCull::canvas_item_set_self_modulate
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar2 + 0x290) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x178) = *param_3;
      *(undefined8 *)(lVar2 + 0x180) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_self_modulate","servers/rendering/renderer_canvas_cull.cpp",
                   0x2b3,"Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_draw_behind_parent(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_draw_behind_parent
          (RendererCanvasCull *this,ulong param_2,uint param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar1 + 0x290) == (int)(param_2 >> 0x20)) {
      *(byte *)(lVar1 + 0x38) = (byte)((param_3 & 1) << 2) | *(byte *)(lVar1 + 0x38) & 0xfb;
      return;
    }
    if (*(int *)(lVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_draw_behind_parent","servers/rendering/renderer_canvas_cull.cpp"
                   ,0x2ba,"Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_use_identity_transform(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_use_identity_transform
          (RendererCanvasCull *this,ulong param_2,uint param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar1 + 0x290) == (int)(param_2 >> 0x20)) {
      *(byte *)(lVar1 + 0x38) = (byte)((param_3 & 1) << 6) | *(byte *)(lVar1 + 0x38) & 0xbf;
      return;
    }
    if (*(int *)(lVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_use_identity_transform",
                   "servers/rendering/renderer_canvas_cull.cpp",0x2c1,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_update_when_visible(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_update_when_visible
          (RendererCanvasCull *this,ulong param_2,uint param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar1 + 0x290) == (int)(param_2 >> 0x20)) {
      *(byte *)(lVar1 + 0x38) = (byte)((param_3 & 1) << 3) | *(byte *)(lVar1 + 0x38) & 0xf7;
      return;
    }
    if (*(int *)(lVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_update_when_visible",
                   "servers/rendering/renderer_canvas_cull.cpp",0x2c8,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_sort_children_by_y(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_sort_children_by_y
          (RendererCanvasCull *this,ulong param_2,Item param_3)

{
  Item *pIVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x134)) {
      pIVar1 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                       *(long *)(*(long *)(this + 0x120) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
      if (*(int *)(pIVar1 + 0x290) == (int)(param_2 >> 0x20)) {
        pIVar1[0x165] = param_3;
        _mark_ysort_dirty(this,pIVar1);
        return;
      }
      if (*(int *)(pIVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_item_set_sort_children_by_y","servers/rendering/renderer_canvas_cull.cpp"
                   ,0x71b,"Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_z_index(RID, int) */

void __thiscall
RendererCanvasCull::canvas_item_set_z_index(RendererCanvasCull *this,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (0x2000 < param_3 + 0x1000U) {
    _err_print_error("canvas_item_set_z_index","servers/rendering/renderer_canvas_cull.cpp",0x723,
                     "Condition \"p_z < RenderingServer::CANVAS_ITEM_Z_MIN || p_z > RenderingServer::CANVAS_ITEM_Z_MAX\" is true."
                     ,0,0);
    return;
  }
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    iVar1 = *(int *)(lVar2 + 0x290);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(int *)(lVar2 + 0x160) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_z_index","servers/rendering/renderer_canvas_cull.cpp",0x726,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_z_as_relative_to_parent(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_z_as_relative_to_parent
          (RendererCanvasCull *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x134)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
              *(long *)(*(long *)(this + 0x120) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
      iVar1 = *(int *)(lVar2 + 0x290);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x164) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_item_set_z_as_relative_to_parent",
                   "servers/rendering/renderer_canvas_cull.cpp",0x72d,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_attach_skeleton(RID, RID) */

void __thiscall
RendererCanvasCull::canvas_item_attach_skeleton(RendererCanvasCull *this,ulong param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar3 + 0x290) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar3 + 0x70) == param_3) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x110);
      *(long *)(lVar3 + 0x70) = param_3;
joined_r0x00103d18:
      if (lVar2 == 0) {
        return;
      }
      do {
        if (*(int *)(lVar2 + 0x10) == 4) {
          if (*(long *)(lVar3 + 0x70) != 0) goto code_r0x00103d3a;
          if (*(long *)(lVar2 + 0x48) != 0) {
            (**(code **)(*RenderingServerGlobals::mesh_storage + 0xd8))();
            *(undefined8 *)(lVar2 + 0x48) = 0;
          }
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (lVar2 == 0) {
          return;
        }
      } while( true );
    }
    if (*(int *)(lVar3 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_attach_skeleton","servers/rendering/renderer_canvas_cull.cpp",0x734,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
code_r0x00103d3a:
  if (*(long *)(lVar2 + 0x48) == 0) {
    uVar1 = (**(code **)(*RenderingServerGlobals::mesh_storage + 0xd0))
                      (RenderingServerGlobals::mesh_storage,*(undefined8 *)(lVar2 + 0x18));
    *(undefined8 *)(lVar2 + 0x48) = uVar1;
  }
  (**(code **)(*RenderingServerGlobals::mesh_storage + 0xe0))
            (RenderingServerGlobals::mesh_storage,*(undefined8 *)(lVar2 + 0x48),
             *(undefined8 *)(lVar3 + 0x70));
  lVar2 = *(long *)(lVar2 + 8);
  goto joined_r0x00103d18;
}



/* RendererCanvasCull::canvas_item_set_copy_to_backbuffer(RID, bool, Rect2 const&) */

void __thiscall
RendererCanvasCull::canvas_item_set_copy_to_backbuffer
          (RendererCanvasCull *this,ulong param_2,char param_3,float *param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar4 + 0x290) == (int)(param_2 >> 0x20)) {
      puVar3 = *(undefined8 **)(lVar4 + 0x88);
      if (param_3 == '\0') {
        if (puVar3 != (undefined8 *)0x0) {
          Memory::free_static(puVar3,false);
          *(undefined8 *)(lVar4 + 0x88) = 0;
        }
        return;
      }
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)operator_new(0x24,"");
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined8 **)(lVar4 + 0x88) = puVar3;
      }
      uVar1 = *(undefined8 *)(param_4 + 2);
      *puVar3 = *(undefined8 *)param_4;
      puVar3[1] = uVar1;
      if (((*param_4 == 0.0) && (param_4[1] == 0.0)) && (param_4[2] == 0.0)) {
        bVar2 = param_4[3] == 0.0;
      }
      else {
        bVar2 = false;
      }
      *(bool *)(puVar3 + 4) = bVar2;
      return;
    }
    if (*(int *)(lVar4 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_copy_to_backbuffer","servers/rendering/renderer_canvas_cull.cpp"
                   ,0x751,"Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_clear(RID) */

void __thiscall RendererCanvasCull::canvas_item_clear(RendererCanvasCull *this,ulong param_2)

{
  uint uVar1;
  RendererCanvasCull RVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar7 + 0x290) == (int)(param_2 >> 0x20)) {
      puVar9 = *(undefined8 **)(lVar7 + 0x110);
      puVar8 = puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        while( true ) {
          puVar4 = (undefined8 *)puVar8[1];
          if (puVar9 == puVar8) {
            (**(code **)*puVar8)(puVar9);
            Memory::free_static(puVar9,false);
            *(undefined8 *)(lVar7 + 0x110) = 0;
          }
          else {
            (**(code **)*puVar8)();
          }
          if (puVar4 == (undefined8 *)0x0) break;
          puVar9 = *(undefined8 **)(lVar7 + 0x110);
          puVar8 = puVar4;
        }
      }
      if (*(long *)(lVar7 + 0x128) == 0) {
        CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                  ((CowData<RendererCanvasRender::Item::CommandBlock> *)(lVar7 + 0x128));
      }
      else {
        uVar3 = *(uint *)(*(long *)(lVar7 + 0x128) + -8);
        uVar1 = *(int *)(lVar7 + 0x130) + 1;
        if (uVar3 < uVar1) {
          uVar1 = uVar3;
        }
        CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                  ((CowData<RendererCanvasRender::Item::CommandBlock> *)(lVar7 + 0x128));
        puVar5 = *(undefined4 **)(lVar7 + 0x128);
        puVar6 = puVar5 + (ulong)uVar1 * 4;
        if (uVar1 != 0) {
          do {
            *puVar5 = 0;
            puVar5 = puVar5 + 4;
          } while (puVar6 != puVar5);
        }
      }
      *(byte *)(lVar7 + 0x38) = *(byte *)(lVar7 + 0x38) & 0xfe;
      *(undefined1 *)(lVar7 + 0x55) = 1;
      *(undefined1 *)(lVar7 + 0xe9) = 0;
      RVar2 = this[0x1cb];
      *(undefined4 *)(lVar7 + 0x130) = 0;
      *(undefined1 (*) [16])(lVar7 + 0x110) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar7 + 200) = (undefined1  [16])0x0;
      if (RVar2 != (RendererCanvasCull)0x0) {
        *(undefined8 *)(lVar7 + 0x138) = *(undefined8 *)(this + 0x1d0);
      }
      return;
    }
    if (*(int *)(lVar7 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_clear","servers/rendering/renderer_canvas_cull.cpp",0x762,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_draw_index(RID, int) */

ulong __thiscall
RendererCanvasCull::canvas_item_set_draw_index
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x134)) {
      lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
              *(long *)(*(long *)(this + 0x120) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
      if (*(int *)(lVar6 + 0x290) == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar6 + 0x18c) = param_3;
        __mutex = (pthread_mutex_t *)(this + 0x148);
        iVar3 = pthread_mutex_lock(__mutex);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar3);
        }
        uVar5 = *(ulong *)(lVar6 + 0x148);
        if ((((uint)uVar5 < *(uint *)(this + 0x134)) && (uVar5 >> 0x20 != 0x7fffffff)) &&
           ((*(uint *)(((uVar5 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                       *(long *)(*(long *)(this + 0x120) +
                                ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8) + 0x290
                      ) & 0x7fffffff) == (uint)(uVar5 >> 0x20))) {
          pthread_mutex_unlock(__mutex);
          if (*(long *)(lVar6 + 0x148) != 0) {
            uVar5 = *(ulong *)(lVar6 + 0x148);
            if ((uint)uVar5 < *(uint *)(this + 0x134)) {
              lVar6 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
              uVar4 = *(uint *)(lVar6 + 0x290);
              if (uVar4 == (uint)(uVar5 >> 0x20)) {
                *(undefined1 *)(lVar6 + 400) = 1;
                return (ulong)uVar4;
              }
              if (uVar4 + 0x80000000 < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,uVar5 >> 0x20);
              }
            }
          }
          DAT_00000190 = 0;
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar4 = pthread_mutex_unlock(__mutex);
        uVar5 = (ulong)uVar4;
        if (*(long *)(lVar6 + 0x148) != 0) {
          uVar1 = *(ulong *)(lVar6 + 0x148);
          uVar5 = uVar1 & 0xffffffff;
          if ((uint)uVar1 < *(uint *)(this + 0xdc)) {
            uVar5 = (uVar5 % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                    *(long *)(*(long *)(this + 200) + (uVar5 / *(uint *)(this + 0xd8)) * 8);
            if (*(int *)(uVar5 + 0xd8) == (int)(uVar1 >> 0x20)) {
              *(undefined1 *)(uVar5 + 0xa0) = 1;
            }
            else if (*(int *)(uVar5 + 0xd8) + 0x80000000U < 0x7fffffff) {
              uVar5 = 0;
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0);
            }
          }
        }
        return uVar5;
      }
      if (*(int *)(lVar6 + 0x290) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  uVar5 = _err_print_error("canvas_item_set_draw_index","servers/rendering/renderer_canvas_cull.cpp"
                           ,0x76f,"Parameter \"canvas_item\" is null.",0,0);
  return uVar5;
}



/* RendererCanvasCull::canvas_item_set_material(RID, RID) */

void __thiscall
RendererCanvasCull::canvas_item_set_material
          (RendererCanvasCull *this,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar3 + 0x290) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar3 + 0x68) = param_3;
      *(undefined1 *)(lVar3 + 0x288) = 1;
      if (*(long *)(lVar3 + 0x268) != 0) {
        return;
      }
      lVar2 = *(long *)this;
      *(RendererCanvasCull **)(lVar3 + 0x268) = this;
      lVar1 = lVar3 + 0x268;
      *(undefined8 *)(lVar3 + 0x280) = 0;
      *(long *)(lVar3 + 0x278) = lVar2;
      if (lVar2 == 0) {
        *(long *)(this + 8) = lVar1;
      }
      else {
        *(long *)(lVar2 + 0x18) = lVar1;
      }
      *(long *)this = lVar1;
      return;
    }
    if (*(int *)(lVar3 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_material","servers/rendering/renderer_canvas_cull.cpp",0x782,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::_dependency_deleted(RID const&, DependencyTracker*) */

void RendererCanvasCull::_dependency_deleted(RID *param_1,DependencyTracker *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  RendererCanvasCull *pRVar4;
  
  lVar2 = *(long *)param_2;
  if (*(long *)param_1 == *(long *)(lVar2 + 0x68)) {
    canvas_item_set_material(_canvas_cull_singleton,*(undefined8 *)(lVar2 + 0x150),0);
  }
  *(undefined1 *)(lVar2 + 0x288) = 1;
  pRVar4 = _canvas_cull_singleton;
  if (*(long *)(lVar2 + 0x268) != 0) {
    return;
  }
  lVar3 = *(long *)_canvas_cull_singleton;
  *(RendererCanvasCull **)(lVar2 + 0x268) = _canvas_cull_singleton;
  lVar1 = lVar2 + 0x268;
  *(undefined8 *)(lVar2 + 0x280) = 0;
  *(long *)(lVar2 + 0x278) = lVar3;
  if (lVar3 == 0) {
    *(long *)(pRVar4 + 8) = lVar1;
  }
  else {
    *(long *)(lVar3 + 0x18) = lVar1;
  }
  *(long *)pRVar4 = lVar1;
  return;
}



/* RendererCanvasCull::canvas_item_set_use_parent_material(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_use_parent_material
          (RendererCanvasCull *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar3 + 0x290) == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar3 + 0x188) = param_3;
      *(undefined1 *)(lVar3 + 0x288) = 1;
      if (*(long *)(lVar3 + 0x268) != 0) {
        return;
      }
      lVar2 = *(long *)this;
      *(RendererCanvasCull **)(lVar3 + 0x268) = this;
      lVar1 = lVar3 + 0x268;
      *(undefined8 *)(lVar3 + 0x280) = 0;
      *(long *)(lVar3 + 0x278) = lVar2;
      if (lVar2 == 0) {
        *(long *)(this + 8) = lVar1;
      }
      else {
        *(long *)(lVar2 + 0x18) = lVar1;
      }
      *(long *)this = lVar1;
      return;
    }
    if (*(int *)(lVar3 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_use_parent_material",
                   "servers/rendering/renderer_canvas_cull.cpp",0x78a,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_set_instance_shader_parameter(RID, StringName const&, Variant
   const&) */

void RendererCanvasCull::canvas_item_set_instance_shader_parameter
               (long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x134))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x130)) * 0x298 +
            *(long *)(*(long *)(param_1 + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x130)) * 8);
    if (*(int *)(lVar1 + 0x290) == (int)(param_2 >> 0x20)) {
      InstanceUniforms::set(lVar1 + 0x230,*(undefined8 *)(lVar1 + 0x150),param_3);
      return;
    }
    if (*(int *)(lVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_instance_shader_parameter",
                   "servers/rendering/renderer_canvas_cull.cpp",0x792,"Parameter \"item\" is null.",
                   0,0);
  return;
}



/* RendererCanvasCull::canvas_item_get_instance_shader_parameter(RID, StringName const&) const */

RendererCanvasCull * __thiscall
RendererCanvasCull::canvas_item_get_instance_shader_parameter
          (RendererCanvasCull *this,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x134))) {
    iVar1 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x130)) * 0x298 +
                     *(long *)(*(long *)(param_2 + 0x120) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x130)) * 8) +
                    0x290);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      InstanceUniforms::get((StringName *)this);
      goto LAB_0010480c;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_get_instance_shader_parameter",
                   "servers/rendering/renderer_canvas_cull.cpp",0x799,"Parameter \"item\" is null.",
                   0,0);
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_0010480c:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::canvas_item_get_instance_shader_parameter_default_value(RID, StringName
   const&) const */

RendererCanvasCull * __thiscall
RendererCanvasCull::canvas_item_get_instance_shader_parameter_default_value
          (RendererCanvasCull *this,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x134))) {
    iVar1 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x130)) * 0x298 +
                     *(long *)(*(long *)(param_2 + 0x120) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x130)) * 8) +
                    0x290);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      InstanceUniforms::get_default((StringName *)this);
      goto LAB_0010491c;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_get_instance_shader_parameter_default_value",
                   "servers/rendering/renderer_canvas_cull.cpp",0x7a0,"Parameter \"item\" is null.",
                   0,0);
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_0010491c:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::canvas_item_set_debug_redraw(bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_debug_redraw(RendererCanvasCull *this,bool param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  plVar1 = RenderingServerGlobals::canvas_render;
  this[0x1cb] = (RendererCanvasCull)param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x001049ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(this + 0x1d0),plVar1,param_1,this + 0x1d8,UNRECOVERED_JUMPTABLE);
  return;
}



/* RendererCanvasCull::canvas_item_get_debug_redraw() const */

RendererCanvasCull __thiscall
RendererCanvasCull::canvas_item_get_debug_redraw(RendererCanvasCull *this)

{
  return this[0x1cb];
}



/* RendererCanvasCull::canvas_item_set_interpolated(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_interpolated
          (RendererCanvasCull *this,ulong param_2,uint param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar1 + 0x290) == (int)(param_2 >> 0x20)) {
      *(byte *)(lVar1 + 0x38) = (byte)((param_3 & 1) << 5) | *(byte *)(lVar1 + 0x38) & 0xdf;
      return;
    }
    if (*(int *)(lVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_interpolated","servers/rendering/renderer_canvas_cull.cpp",0x7cd
                   ,"Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_reset_physics_interpolation(RID) */

void __thiscall
RendererCanvasCull::canvas_item_reset_physics_interpolation(RendererCanvasCull *this,ulong param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar1 + 0x290) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar1 + 0x18);
      return;
    }
    if (*(int *)(lVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_reset_physics_interpolation",
                   "servers/rendering/renderer_canvas_cull.cpp",0x7d3,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_transform_physics_interpolation(RID, Transform2D const&) */

void __thiscall
RendererCanvasCull::canvas_item_transform_physics_interpolation
          (RendererCanvasCull *this,ulong param_2,Transform2D *param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x134)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
              *(long *)(*(long *)(this + 0x120) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
      if (*(int *)(lVar1 + 0x290) == (int)(param_2 >> 0x20)) {
        Transform2D::operator*((Transform2D *)&local_48,param_3);
        *(undefined8 *)(lVar1 + 0x20) = local_48;
        *(undefined8 *)(lVar1 + 0x28) = uStack_40;
        *(undefined8 *)(lVar1 + 0x30) = local_38;
        Transform2D::operator*((Transform2D *)&local_48,param_3);
        *(undefined8 *)(lVar1 + 8) = local_48;
        *(undefined8 *)(lVar1 + 0x10) = uStack_40;
        *(undefined8 *)(lVar1 + 0x18) = local_38;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00104d13;
      }
      if (*(int *)(lVar1 + 0x290) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("canvas_item_transform_physics_interpolation",
                     "servers/rendering/renderer_canvas_cull.cpp",0x7da,
                     "Parameter \"canvas_item\" is null.",0,0);
    return;
  }
LAB_00104d13:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::canvas_item_set_canvas_group_mode(RID, RenderingServer::CanvasGroupMode,
   float, bool, float, bool) */

void __thiscall
RendererCanvasCull::canvas_item_set_canvas_group_mode
          (int param_1,int param_2,RendererCanvasCull *this,ulong param_4,int param_5,
          undefined1 param_6,undefined1 param_7)

{
  int *piVar1;
  long lVar2;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x134))) {
    lVar2 = ((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar2 + 0x290) == (int)(param_4 >> 0x20)) {
      piVar1 = *(int **)(lVar2 + 0x40);
      if (param_5 == 0) {
        if (piVar1 != (int *)0x0) {
          Memory::free_static(piVar1,false);
          *(undefined8 *)(lVar2 + 0x40) = 0;
          return;
        }
      }
      else {
        if (piVar1 == (int *)0x0) {
          piVar1 = (int *)operator_new(0x14,"");
          *(int **)(lVar2 + 0x40) = piVar1;
        }
        *piVar1 = param_5;
        *(undefined1 *)(piVar1 + 1) = param_6;
        *(undefined1 *)(piVar1 + 3) = param_7;
        piVar1[2] = param_2;
        piVar1[4] = param_1;
      }
      return;
    }
    if (*(int *)(lVar2 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_canvas_group_mode","servers/rendering/renderer_canvas_cull.cpp",
                   0x7e1,"Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_enabled(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_light_set_enabled(RendererCanvasCull *this,ulong param_2,byte param_3)

{
  byte *pbVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    pbVar1 = (byte *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
                     *(long *)(*(long *)(this + 0x178) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8));
    if (*(int *)(pbVar1 + 0x130) == (int)(param_2 >> 0x20)) {
      *pbVar1 = param_3 & 1 | *pbVar1 & 0xfe;
      return;
    }
    if (*(int *)(pbVar1 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_enabled","servers/rendering/renderer_canvas_cull.cpp",0x831,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_texture_scale(RID, float) */

void __thiscall
RendererCanvasCull::canvas_light_set_texture_scale
          (undefined4 param_1,RendererCanvasCull *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    iVar1 = *(int *)(lVar2 + 0x130);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x4c) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_texture_scale","servers/rendering/renderer_canvas_cull.cpp",
                   0x838,"Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_transform(RID, Transform2D const&) */

void __thiscall
RendererCanvasCull::canvas_light_set_transform
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  byte *pbVar7;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    pbVar7 = (byte *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
                     *(long *)(*(long *)(this + 0x178) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8));
    if (*(int *)(pbVar7 + 0x130) == (int)(param_2 >> 0x20)) {
      if (((this[0x318] != (RendererCanvasCull)0x0) && ((*pbVar7 & 4) != 0)) && ((*pbVar7 & 2) == 0)
         ) {
        puVar2 = *(uint **)(this + 0x2d8);
        uVar1 = *puVar2;
        pvVar5 = *(void **)(puVar2 + 2);
        if (uVar1 == puVar2[1]) {
          uVar6 = (ulong)(uVar1 * 2);
          if (uVar1 * 2 == 0) {
            uVar6 = 1;
          }
          puVar2[1] = (uint)uVar6;
          pvVar5 = (void *)Memory::realloc_static(pvVar5,uVar6 * 8,false);
          *(void **)(puVar2 + 2) = pvVar5;
          if (pvVar5 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar1 = *puVar2;
        }
        *puVar2 = uVar1 + 1;
        *(ulong *)((long)pvVar5 + (ulong)uVar1 * 8) = param_2;
        *pbVar7 = *pbVar7 | 2;
      }
      uVar4 = param_3[1];
      *(undefined8 *)(pbVar7 + 0x14) = *param_3;
      *(undefined8 *)(pbVar7 + 0x1c) = uVar4;
      *(undefined8 *)(pbVar7 + 0x24) = param_3[2];
      return;
    }
    if (*(int *)(pbVar7 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_transform","servers/rendering/renderer_canvas_cull.cpp",0x83f,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_texture(RID, RID) */

void __thiscall
RendererCanvasCull::canvas_light_set_texture(RendererCanvasCull *this,ulong param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = RenderingServerGlobals::canvas_render;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    if (*(int *)(lVar2 + 0x130) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar2 + 0x78) != param_3) {
        *(long *)(lVar2 + 0x120) = *(long *)(lVar2 + 0x120) + 1;
        *(long *)(lVar2 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00105238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(lVar2 + 0x118),param_3);
        return;
      }
      return;
    }
    if (*(int *)(lVar2 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_texture","servers/rendering/renderer_canvas_cull.cpp",0x84f,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_texture_offset(RID, Vector2 const&) */

void __thiscall
RendererCanvasCull::canvas_light_set_texture_offset
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    iVar1 = *(int *)(lVar2 + 0x130);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar2 + 0x80) = *param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_texture_offset","servers/rendering/renderer_canvas_cull.cpp",
                   0x85b,"Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_color(RID, Color const&) */

void __thiscall
RendererCanvasCull::canvas_light_set_color
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    if (*(int *)(lVar2 + 0x130) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 4) = *param_3;
      *(undefined8 *)(lVar2 + 0xc) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_color","servers/rendering/renderer_canvas_cull.cpp",0x862,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_height(RID, float) */

void __thiscall
RendererCanvasCull::canvas_light_set_height
          (undefined4 param_1,RendererCanvasCull *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    iVar1 = *(int *)(lVar2 + 0x130);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x44) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_height","servers/rendering/renderer_canvas_cull.cpp",0x869,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_energy(RID, float) */

void __thiscall
RendererCanvasCull::canvas_light_set_energy
          (undefined4 param_1,RendererCanvasCull *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    iVar1 = *(int *)(lVar2 + 0x130);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x48) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_energy","servers/rendering/renderer_canvas_cull.cpp",0x870,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_z_range(RID, int, int) */

void __thiscall
RendererCanvasCull::canvas_light_set_z_range
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    if (*(int *)(lVar1 + 0x130) == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x50) = param_3;
      *(undefined4 *)(lVar1 + 0x54) = param_4;
      return;
    }
    if (*(int *)(lVar1 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_z_range","servers/rendering/renderer_canvas_cull.cpp",0x877,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_layer_range(RID, int, int) */

void __thiscall
RendererCanvasCull::canvas_light_set_layer_range
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    if (*(int *)(lVar1 + 0x130) == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x5c) = param_4;
      *(undefined4 *)(lVar1 + 0x58) = param_3;
      return;
    }
    if (*(int *)(lVar1 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_layer_range","servers/rendering/renderer_canvas_cull.cpp",0x87f
                   ,"Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_item_cull_mask(RID, int) */

void __thiscall
RendererCanvasCull::canvas_light_set_item_cull_mask
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x18c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
              *(long *)(*(long *)(this + 0x178) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
      iVar1 = *(int *)(lVar2 + 0x130);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x60) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_light_set_item_cull_mask","servers/rendering/renderer_canvas_cull.cpp",
                   0x887,"Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_item_shadow_cull_mask(RID, int) */

void __thiscall
RendererCanvasCull::canvas_light_set_item_shadow_cull_mask
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x18c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
              *(long *)(*(long *)(this + 0x178) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
      iVar1 = *(int *)(lVar2 + 0x130);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 100) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_light_set_item_shadow_cull_mask",
                   "servers/rendering/renderer_canvas_cull.cpp",0x88e,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_directional_distance(RID, float) */

void __thiscall
RendererCanvasCull::canvas_light_set_directional_distance
          (undefined4 param_1,RendererCanvasCull *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    iVar1 = *(int *)(lVar2 + 0x130);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x68) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_directional_distance",
                   "servers/rendering/renderer_canvas_cull.cpp",0x895,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_blend_mode(RID, RenderingServer::CanvasLightBlendMode) */

void __thiscall
RendererCanvasCull::canvas_light_set_blend_mode
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x18c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
              *(long *)(*(long *)(this + 0x178) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
      iVar1 = *(int *)(lVar2 + 0x130);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x70) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_light_set_blend_mode","servers/rendering/renderer_canvas_cull.cpp",0x89c,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_shadow_enabled(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_light_set_shadow_enabled
          (RendererCanvasCull *this,ulong param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = RenderingServerGlobals::canvas_render;
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x18c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
              *(long *)(*(long *)(this + 0x178) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
      if (*(int *)(lVar2 + 0x130) == (int)(param_2 >> 0x20)) {
        if (*(char *)(lVar2 + 0x90) != param_3) {
          *(char *)(lVar2 + 0x90) = param_3;
          *(long *)(lVar2 + 0x120) = *(long *)(lVar2 + 0x120) + 1;
                    /* WARNING: Could not recover jumptable at 0x00105afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(lVar2 + 0x118),param_3);
          return;
        }
        return;
      }
      if (*(int *)(lVar2 + 0x130) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_light_set_shadow_enabled","servers/rendering/renderer_canvas_cull.cpp",
                   0x8a3,"Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_shadow_filter(RID, RenderingServer::CanvasLightShadowFilter)
    */

void __thiscall
RendererCanvasCull::canvas_light_set_shadow_filter
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x18c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
              *(long *)(*(long *)(this + 0x178) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
      iVar1 = *(int *)(lVar2 + 0x130);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x98) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_light_set_shadow_filter","servers/rendering/renderer_canvas_cull.cpp",
                   0x8af,"Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_shadow_color(RID, Color const&) */

void __thiscall
RendererCanvasCull::canvas_light_set_shadow_color
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    if (*(int *)(lVar2 + 0x130) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x9c) = *param_3;
      *(undefined8 *)(lVar2 + 0xa4) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_shadow_color","servers/rendering/renderer_canvas_cull.cpp",
                   0x8b6,"Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_shadow_smooth(RID, float) */

void __thiscall
RendererCanvasCull::canvas_light_set_shadow_smooth
          (undefined4 param_1,RendererCanvasCull *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    iVar1 = *(int *)(lVar2 + 0x130);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0xac) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_shadow_smooth","servers/rendering/renderer_canvas_cull.cpp",
                   0x8bd,"Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_set_interpolated(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_light_set_interpolated
          (RendererCanvasCull *this,ulong param_2,uint param_3)

{
  byte *pbVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    pbVar1 = (byte *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
                     *(long *)(*(long *)(this + 0x178) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8));
    if (*(int *)(pbVar1 + 0x130) == (int)(param_2 >> 0x20)) {
      *pbVar1 = (byte)((param_3 & 1) << 2) | *pbVar1 & 0xfb;
      return;
    }
    if (*(int *)(pbVar1 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_interpolated","servers/rendering/renderer_canvas_cull.cpp",
                   0x8c3,"Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_reset_physics_interpolation(RID) */

void __thiscall
RendererCanvasCull::canvas_light_reset_physics_interpolation(RendererCanvasCull *this,ulong param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    if (*(int *)(lVar1 + 0x130) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x2c) = *(undefined8 *)(lVar1 + 0x14);
      *(undefined8 *)(lVar1 + 0x34) = *(undefined8 *)(lVar1 + 0x1c);
      *(undefined8 *)(lVar1 + 0x3c) = *(undefined8 *)(lVar1 + 0x24);
      return;
    }
    if (*(int *)(lVar1 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_reset_physics_interpolation",
                   "servers/rendering/renderer_canvas_cull.cpp",0x8c9,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_transform_physics_interpolation(RID, Transform2D const&) */

void __thiscall
RendererCanvasCull::canvas_light_transform_physics_interpolation
          (RendererCanvasCull *this,ulong param_2,Transform2D *param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x18c)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
              *(long *)(*(long *)(this + 0x178) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
      if (*(int *)(lVar1 + 0x130) == (int)(param_2 >> 0x20)) {
        Transform2D::operator*((Transform2D *)&local_48,param_3);
        *(undefined8 *)(lVar1 + 0x2c) = local_48;
        *(undefined8 *)(lVar1 + 0x34) = uStack_40;
        *(undefined8 *)(lVar1 + 0x3c) = local_38;
        Transform2D::operator*((Transform2D *)&local_48,param_3);
        *(undefined8 *)(lVar1 + 0x14) = local_48;
        *(undefined8 *)(lVar1 + 0x1c) = uStack_40;
        *(undefined8 *)(lVar1 + 0x24) = local_38;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_001060d3;
      }
      if (*(int *)(lVar1 + 0x130) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("canvas_light_transform_physics_interpolation",
                     "servers/rendering/renderer_canvas_cull.cpp",0x8cf,
                     "Parameter \"clight\" is null.",0,0);
    return;
  }
LAB_001060d3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::canvas_light_occluder_initialize(RID) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_initialize(RendererCanvasCull *this,ulong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint uVar3;
  char *pcVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x84))) {
    pbVar1 = (byte *)(*(long *)(*(long *)(this + 0x70) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
                     ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98);
    if ((int)*(uint *)(pbVar1 + 0x90) < 0) {
      uVar3 = (uint)(param_2 >> 0x20);
      if (uVar3 == (*(uint *)(pbVar1 + 0x90) & 0x7fffffff)) {
        *(uint *)(pbVar1 + 0x90) = uVar3;
        pbVar1[0x88] = 0;
        pbVar1[0x89] = 0;
        pbVar1[0x8a] = 0;
        pbVar1[0x8b] = 0;
        pbVar1[0x8c] = 0;
        pbVar1[0x8d] = 0;
        pbVar1[0x8e] = 0;
        pbVar1[0x8f] = 0;
        pbVar1[0x18] = 0;
        pbVar1[0x19] = 0;
        pbVar1[0x1a] = 0;
        pbVar1[0x1b] = 0;
        pbVar1[0x1c] = 0;
        pbVar1[0x1d] = 0;
        pbVar1[0x1e] = 0;
        pbVar1[0x1f] = 0;
        pbVar1[0x20] = 0;
        pbVar1[0x21] = 0;
        pbVar1[0x22] = 0;
        pbVar1[0x23] = 0;
        pbVar1[0x24] = 0;
        pbVar1[0x25] = 0;
        pbVar1[0x26] = 0;
        pbVar1[0x27] = 0;
        *pbVar1 = *pbVar1 & 0xf8 | 1;
        pbVar1[0x28] = 0;
        pbVar1[0x29] = 0;
        pbVar1[0x2a] = 0;
        pbVar1[0x2b] = 0;
        pbVar1[0x2c] = 0;
        pbVar1[0x2d] = 0;
        pbVar1[0x2e] = 0;
        pbVar1[0x2f] = 0;
        pbVar1[0x30] = 0;
        pbVar1[0x31] = 0;
        pbVar1[0x32] = 0x80;
        pbVar1[0x33] = 0x3f;
        pbVar1[0x34] = 0;
        pbVar1[0x35] = 0;
        pbVar1[0x36] = 0;
        pbVar1[0x37] = 0;
        pbVar1[0x38] = 0;
        pbVar1[0x39] = 0;
        pbVar1[0x3a] = 0;
        pbVar1[0x3b] = 0;
        pbVar1[0x3c] = 0;
        pbVar1[0x3d] = 0;
        pbVar1[0x3e] = 0x80;
        pbVar1[0x3f] = 0x3f;
        pbVar1[0x40] = 0;
        pbVar1[0x41] = 0;
        pbVar1[0x42] = 0;
        pbVar1[0x43] = 0;
        pbVar1[0x44] = 0;
        pbVar1[0x45] = 0;
        pbVar1[0x46] = 0;
        pbVar1[0x47] = 0;
        pbVar1[0x48] = 0;
        pbVar1[0x49] = 0;
        pbVar1[0x4a] = 0x80;
        pbVar1[0x4b] = 0x3f;
        pbVar1[0x4c] = 0;
        pbVar1[0x4d] = 0;
        pbVar1[0x4e] = 0;
        pbVar1[0x4f] = 0;
        pbVar1[0x50] = 0;
        pbVar1[0x51] = 0;
        pbVar1[0x52] = 0;
        pbVar1[0x53] = 0;
        pbVar1[0x54] = 0;
        pbVar1[0x55] = 0;
        pbVar1[0x56] = 0x80;
        pbVar1[0x57] = 0x3f;
        pbVar1[0x58] = 0;
        pbVar1[0x59] = 0;
        pbVar1[0x5a] = 0;
        pbVar1[0x5b] = 0;
        pbVar1[0x5c] = 0;
        pbVar1[0x5d] = 0;
        pbVar1[0x5e] = 0;
        pbVar1[0x5f] = 0;
        pbVar1[0x60] = 0;
        pbVar1[0x61] = 0;
        pbVar1[0x62] = 0x80;
        pbVar1[99] = 0x3f;
        pbVar1[100] = 0;
        pbVar1[0x65] = 0;
        pbVar1[0x66] = 0;
        pbVar1[0x67] = 0;
        pbVar1[0x68] = 0;
        pbVar1[0x69] = 0;
        pbVar1[0x6a] = 0;
        pbVar1[0x6b] = 0;
        pbVar1[0x6c] = 0;
        pbVar1[0x6d] = 0;
        pbVar1[0x6e] = 0x80;
        pbVar1[0x6f] = 0x3f;
        pbVar1[0x70] = 0;
        pbVar1[0x71] = 0;
        pbVar1[0x72] = 0;
        pbVar1[0x73] = 0;
        pbVar1[0x74] = 0;
        pbVar1[0x75] = 0;
        pbVar1[0x76] = 0;
        pbVar1[0x77] = 0;
        pbVar1[0x78] = 1;
        pbVar1[0x79] = 0;
        pbVar1[0x7a] = 0;
        pbVar1[0x7b] = 0;
        pbVar1[0x7c] = 0;
        pbVar1[0x80] = 0;
        pbVar1[0x81] = 0;
        pbVar1[0x82] = 0;
        pbVar1[0x83] = 0;
        *(undefined1 (*) [16])(pbVar1 + 8) = (undefined1  [16])0x0;
        return;
      }
      pcVar4 = "Attempting to initialize the wrong RID";
      uVar2 = 0xfc;
    }
    else {
      pcVar4 = "Initializing already initialized RID";
      uVar2 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar2,
                     "Method/function failed. Returning: nullptr",pcVar4,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                   "Parameter \"mem\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_occluder_set_enabled(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_set_enabled
          (RendererCanvasCull *this,ulong param_2,byte param_3)

{
  byte *pbVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x84))) {
    pbVar1 = (byte *)(*(long *)(*(long *)(this + 0x70) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
                     ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98);
    if (*(int *)(pbVar1 + 0x90) == (int)(param_2 >> 0x20)) {
      *pbVar1 = *pbVar1 & 0xfe | param_3 & 1;
      return;
    }
    if (*(int *)(pbVar1 + 0x90) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_occluder_set_enabled","servers/rendering/renderer_canvas_cull.cpp",
                   0x8f2,"Parameter \"occluder\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_occluder_set_as_sdf_collision(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_set_as_sdf_collision
          (RendererCanvasCull *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x84))) {
    lVar1 = *(long *)(*(long *)(this + 0x70) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98;
    iVar2 = *(int *)(lVar1 + 0x90);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar1 + 0x7c) = param_3;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_occluder_set_as_sdf_collision",
                   "servers/rendering/renderer_canvas_cull.cpp",0x915,
                   "Parameter \"occluder\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_occluder_set_transform(RID, Transform2D const&) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_set_transform
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x84))) {
    pbVar1 = (byte *)(*(long *)(*(long *)(this + 0x70) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
                     ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98);
    if (*(int *)(pbVar1 + 0x90) == (int)(param_2 >> 0x20)) {
      if (((this[0x318] != (RendererCanvasCull)0x0) && ((*pbVar1 & 4) != 0)) && ((*pbVar1 & 2) == 0)
         ) {
        puVar3 = *(uint **)(this + 0x308);
        uVar2 = *puVar3;
        pvVar6 = *(void **)(puVar3 + 2);
        if (uVar2 == puVar3[1]) {
          uVar7 = (ulong)(uVar2 * 2);
          if (uVar2 * 2 == 0) {
            uVar7 = 1;
          }
          puVar3[1] = (uint)uVar7;
          pvVar6 = (void *)Memory::realloc_static(pvVar6,uVar7 * 8,false);
          *(void **)(puVar3 + 2) = pvVar6;
          if (pvVar6 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar2 = *puVar3;
        }
        *puVar3 = uVar2 + 1;
        *(ulong *)((long)pvVar6 + (ulong)uVar2 * 8) = param_2;
        *pbVar1 = *pbVar1 | 2;
      }
      uVar5 = param_3[1];
      *(undefined8 *)(pbVar1 + 0x30) = *param_3;
      *(undefined8 *)(pbVar1 + 0x38) = uVar5;
      *(undefined8 *)(pbVar1 + 0x40) = param_3[2];
      return;
    }
    if (*(int *)(pbVar1 + 0x90) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_occluder_set_transform",
                   "servers/rendering/renderer_canvas_cull.cpp",0x91c,
                   "Parameter \"occluder\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_occluder_set_light_mask(RID, int) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_set_light_mask
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x84))) {
    lVar1 = *(long *)(*(long *)(this + 0x70) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98;
    iVar2 = *(int *)(lVar1 + 0x90);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x78) = param_3;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_occluder_set_light_mask",
                   "servers/rendering/renderer_canvas_cull.cpp",0x92c,
                   "Parameter \"occluder\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_occluder_set_interpolated(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_set_interpolated
          (RendererCanvasCull *this,ulong param_2,uint param_3)

{
  byte *pbVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x84))) {
    pbVar1 = (byte *)(*(long *)(*(long *)(this + 0x70) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
                     ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98);
    if (*(int *)(pbVar1 + 0x90) == (int)(param_2 >> 0x20)) {
      *pbVar1 = (byte)((param_3 & 1) << 2) | *pbVar1 & 0xfb;
      return;
    }
    if (*(int *)(pbVar1 + 0x90) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_occluder_set_interpolated",
                   "servers/rendering/renderer_canvas_cull.cpp",0x933,
                   "Parameter \"occluder\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_occluder_reset_physics_interpolation(RID) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_reset_physics_interpolation
          (RendererCanvasCull *this,ulong param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x84))) {
    lVar1 = *(long *)(*(long *)(this + 0x70) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98;
    if (*(int *)(lVar1 + 0x90) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0x40);
      return;
    }
    if (*(int *)(lVar1 + 0x90) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_occluder_reset_physics_interpolation",
                   "servers/rendering/renderer_canvas_cull.cpp",0x939,
                   "Parameter \"occluder\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_occluder_transform_physics_interpolation(RID, Transform2D
   const&) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_transform_physics_interpolation
          (RendererCanvasCull *this,ulong param_2,Transform2D *param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x84)) {
      lVar1 = *(long *)(*(long *)(this + 0x70) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
              ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98;
      if (*(int *)(lVar1 + 0x90) == (int)(param_2 >> 0x20)) {
        Transform2D::operator*((Transform2D *)&local_48,param_3);
        *(undefined8 *)(lVar1 + 0x48) = local_48;
        *(undefined8 *)(lVar1 + 0x50) = uStack_40;
        *(undefined8 *)(lVar1 + 0x58) = local_38;
        Transform2D::operator*((Transform2D *)&local_48,param_3);
        *(undefined8 *)(lVar1 + 0x30) = local_48;
        *(undefined8 *)(lVar1 + 0x38) = uStack_40;
        *(undefined8 *)(lVar1 + 0x40) = local_38;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00106993;
      }
      if (*(int *)(lVar1 + 0x90) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("canvas_light_occluder_transform_physics_interpolation",
                     "servers/rendering/renderer_canvas_cull.cpp",0x93f,
                     "Parameter \"occluder\" is null.",0,0);
    return;
  }
LAB_00106993:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_occluder_polygon_initialize(RID) */

void __thiscall
RendererCanvasCull::canvas_occluder_polygon_initialize(RendererCanvasCull *this,ulong param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  char *pcVar7;
  
  if (param_2 == 0) {
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
    goto LAB_00118620;
  }
  uVar4 = (uint)(param_2 >> 0x20);
  if ((uint)param_2 < *(uint *)(this + 0x2c)) {
    puVar5 = (undefined1 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50 +
             *(long *)(*(long *)(this + 0x18) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8));
    if (-1 < (int)*(uint *)(puVar5 + 0x48)) {
      pcVar7 = "Initializing already initialized RID";
      uVar3 = 0xf8;
LAB_00106ab4:
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar3,
                       "Method/function failed. Returning: nullptr",pcVar7,0,0);
      goto LAB_00106acc;
    }
    if (uVar4 != (*(uint *)(puVar5 + 0x48) & 0x7fffffff)) {
      pcVar7 = "Attempting to initialize the wrong RID";
      uVar3 = 0xfc;
      goto LAB_00106ab4;
    }
    *(uint *)(puVar5 + 0x48) = uVar4;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x40) = 2;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 0x14) = 0;
    *(undefined1 (*) [16])(puVar5 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar5 + 0x30) = (undefined1  [16])0x0;
  }
  else {
LAB_00106acc:
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
  }
  if ((uint)param_2 < *(uint *)(this + 0x2c)) {
    lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50 +
            *(long *)(*(long *)(this + 0x18) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
    uVar2 = *(uint *)(lVar6 + 0x48);
    if (uVar2 == uVar4) {
      uVar3 = (**(code **)(*RenderingServerGlobals::canvas_render + 0x48))();
      *(undefined8 *)(lVar6 + 0x18) = uVar3;
      return;
    }
    uVar2 = uVar2 + 0x80000000;
    if (uVar2 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,uVar2);
    }
  }
LAB_00118620:
  _DAT_00000018 = (**(code **)(*RenderingServerGlobals::canvas_render + 0x48))();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererCanvasCull::canvas_occluder_polygon_set_shape(RID, Vector<Vector2> const&, bool) */

void __thiscall
RendererCanvasCull::canvas_occluder_polygon_set_shape
          (RendererCanvasCull *this,ulong param_2,long param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    lVar11 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50 +
             *(long *)(*(long *)(this + 0x18) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
    if (*(int *)(lVar11 + 0x48) == (int)(param_2 >> 0x20)) {
      puVar4 = *(undefined8 **)(param_3 + 8);
      if ((puVar4 != (undefined8 *)0x0) && (uVar5 = puVar4[-1], 1 < (uint)uVar5)) {
        *(undefined8 *)(lVar11 + 4) = 0;
        uVar12 = 0;
        *(undefined8 *)(lVar11 + 0xc) = 0;
        do {
          if (uVar12 == 0) {
            uVar12 = 1;
            *(undefined8 *)(lVar11 + 4) = *puVar4;
          }
          fVar13 = *(float *)(lVar11 + 0xc);
          if ((fVar13 < 0.0) || (fVar15 = *(float *)(lVar11 + 0x10), fVar15 < 0.0)) {
            _err_print_error("expand_to","./core/math/rect2.h",0x100,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
            fVar15 = *(float *)(lVar11 + 0x10);
            fVar13 = *(float *)(lVar11 + 0xc);
          }
          fVar1 = *(float *)(lVar11 + 4);
          fVar2 = *(float *)(lVar11 + 8);
          fVar14 = *(float *)(puVar4 + uVar12);
          fVar17 = *(float *)((long)puVar4 + uVar12 * 8 + 4);
          uVar12 = uVar12 + 1;
          fVar16 = fVar14;
          if (fVar1 <= fVar14) {
            fVar16 = fVar1;
          }
          if (fVar14 <= fVar13 + fVar1) {
            fVar14 = fVar13 + fVar1;
          }
          fVar13 = fVar17;
          if (fVar17 <= fVar15 + fVar2) {
            fVar13 = fVar15 + fVar2;
          }
          if (fVar2 <= fVar17) {
            fVar17 = fVar2;
          }
          *(ulong *)(lVar11 + 4) = CONCAT44(fVar17,fVar16);
          *(ulong *)(lVar11 + 0xc) = CONCAT44(fVar13 - fVar17,fVar14 - fVar16);
        } while ((uVar5 & 0xffffffff) != uVar12);
        (**(code **)(*RenderingServerGlobals::canvas_render + 0x50))
                  (RenderingServerGlobals::canvas_render,*(undefined8 *)(lVar11 + 0x18),param_3,
                   param_4);
        iVar3 = *(int *)(lVar11 + 0x44);
        if (iVar3 != 0) {
          plVar9 = *(long **)(lVar11 + 0x20);
          uVar10 = *(undefined8 *)(lVar11 + 4);
          uVar6 = *(undefined8 *)(lVar11 + 0xc);
          iVar7 = 1;
          lVar11 = *plVar9;
          *(undefined8 *)(lVar11 + 0x20) = uVar10;
          *(undefined8 *)(lVar11 + 0x28) = uVar6;
          if (1 < iVar3) {
            do {
              lVar11 = plVar9[1];
              iVar7 = iVar7 + 1;
              plVar9 = plVar9 + 1;
              *(undefined8 *)(lVar11 + 0x20) = uVar10;
              *(undefined8 *)(lVar11 + 0x28) = uVar6;
            } while (iVar7 < iVar3);
          }
        }
        return;
      }
      uVar10 = 0x952;
      pcVar8 = "Condition \"pc < 2\" is true.";
      goto LAB_00106cf2;
    }
    if (*(int *)(lVar11 + 0x48) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar10 = 0x94f;
  pcVar8 = "Parameter \"occluder_poly\" is null.";
LAB_00106cf2:
  _err_print_error("canvas_occluder_polygon_set_shape","servers/rendering/renderer_canvas_cull.cpp",
                   uVar10,pcVar8,0,0);
  return;
}



/* RendererCanvasCull::canvas_occluder_polygon_set_cull_mode(RID,
   RenderingServer::CanvasOccluderPolygonCullMode) */

void __thiscall
RendererCanvasCull::canvas_occluder_polygon_set_cull_mode
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = RenderingServerGlobals::canvas_render;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50 +
            *(long *)(*(long *)(this + 0x18) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
    if (*(int *)(lVar5 + 0x48) == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar5 + 0x14) = param_3;
      (**(code **)(*plVar4 + 0x58))(plVar4,*(undefined8 *)(lVar5 + 0x18),param_3);
      iVar2 = *(int *)(lVar5 + 0x44);
      if (iVar2 != 0) {
        plVar4 = *(long **)(lVar5 + 0x20);
        iVar3 = 1;
        *(undefined4 *)(*plVar4 + 0x80) = param_3;
        if (1 < iVar2) {
          do {
            plVar1 = plVar4 + 1;
            iVar3 = iVar3 + 1;
            plVar4 = plVar4 + 1;
            *(undefined4 *)(*plVar1 + 0x80) = param_3;
          } while (iVar3 < iVar2);
        }
      }
      return;
    }
    if (*(int *)(lVar5 + 0x48) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_occluder_polygon_set_cull_mode",
                   "servers/rendering/renderer_canvas_cull.cpp",0x967,
                   "Parameter \"occluder_poly\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_set_shadow_texture_size(int) */

void RendererCanvasCull::canvas_set_shadow_texture_size(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00106e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*RenderingServerGlobals::canvas_render + 0x60))();
  return;
}



/* RendererCanvasCull::canvas_texture_allocate() */

void RendererCanvasCull::canvas_texture_allocate(void)

{
                    /* WARNING: Could not recover jumptable at 0x00106e9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*RenderingServerGlobals::texture_storage)();
  return;
}



/* RendererCanvasCull::canvas_texture_initialize(RID) */

void RendererCanvasCull::canvas_texture_initialize(void)

{
                    /* WARNING: Could not recover jumptable at 0x00106eae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*RenderingServerGlobals::texture_storage + 8))();
  return;
}



/* RendererCanvasCull::canvas_texture_set_channel(RID, RenderingServer::CanvasTextureChannel, RID)
    */

void RendererCanvasCull::canvas_texture_set_channel(void)

{
                    /* WARNING: Could not recover jumptable at 0x00106ece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*RenderingServerGlobals::texture_storage + 0x18))();
  return;
}



/* RendererCanvasCull::canvas_texture_set_shading_parameters(RID, Color const&, float) */

void RendererCanvasCull::canvas_texture_set_shading_parameters(void)

{
                    /* WARNING: Could not recover jumptable at 0x00106eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*RenderingServerGlobals::texture_storage + 0x20))();
  return;
}



/* RendererCanvasCull::canvas_texture_set_texture_filter(RID,
   RenderingServer::CanvasItemTextureFilter) */

void RendererCanvasCull::canvas_texture_set_texture_filter(void)

{
                    /* WARNING: Could not recover jumptable at 0x00106f0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*RenderingServerGlobals::texture_storage + 0x28))();
  return;
}



/* RendererCanvasCull::canvas_texture_set_texture_repeat(RID,
   RenderingServer::CanvasItemTextureRepeat) */

void RendererCanvasCull::canvas_texture_set_texture_repeat(void)

{
                    /* WARNING: Could not recover jumptable at 0x00106f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*RenderingServerGlobals::texture_storage + 0x30))();
  return;
}



/* RendererCanvasCull::canvas_item_set_default_texture_filter(RID,
   RenderingServer::CanvasItemTextureFilter) */

void __thiscall
RendererCanvasCull::canvas_item_set_default_texture_filter
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x134)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
              *(long *)(*(long *)(this + 0x120) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
      iVar1 = *(int *)(lVar2 + 0x290);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x140) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_item_set_default_texture_filter",
                   "servers/rendering/renderer_canvas_cull.cpp",0x98c,"Parameter \"ci\" is null.",0,
                   0);
  return;
}



/* RendererCanvasCull::canvas_item_set_default_texture_repeat(RID,
   RenderingServer::CanvasItemTextureRepeat) */

void __thiscall
RendererCanvasCull::canvas_item_set_default_texture_repeat
          (RendererCanvasCull *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x134)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
              *(long *)(*(long *)(this + 0x120) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
      iVar1 = *(int *)(lVar2 + 0x290);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x144) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_item_set_default_texture_repeat",
                   "servers/rendering/renderer_canvas_cull.cpp",0x991,"Parameter \"ci\" is null.",0,
                   0);
  return;
}



/* RendererCanvasCull::_debug_canvas_item_get_rect(RID) */

undefined1  [16] __thiscall
RendererCanvasCull::_debug_canvas_item_get_rect(RendererCanvasCull *this,ulong param_2)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    iVar1 = *(int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                     *(long *)(*(long *)(this + 0x120) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8) + 0x290
                    );
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pauVar2 = (undefined1 (*) [16])RendererCanvasRender::Item::get_rect();
      return *pauVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_debug_canvas_item_get_rect","servers/rendering/renderer_canvas_cull.cpp",0x9b9,
                   "Parameter \"canvas_item\" is null.",0,0);
  return ZEXT816(0);
}



/* RendererCanvasCull::_item_queue_update(RendererCanvasCull::Item*, bool) */

void __thiscall
RendererCanvasCull::_item_queue_update(RendererCanvasCull *this,Item *param_1,bool param_2)

{
  Item *pIVar1;
  long lVar2;
  
  if (param_2) {
    param_1[0x288] = (Item)0x1;
  }
  if (*(long *)(param_1 + 0x268) != 0) {
    return;
  }
  lVar2 = *(long *)this;
  *(RendererCanvasCull **)(param_1 + 0x268) = this;
  pIVar1 = param_1 + 0x268;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(long *)(param_1 + 0x278) = lVar2;
  if (lVar2 == 0) {
    *(Item **)(this + 8) = pIVar1;
  }
  else {
    *(Item **)(lVar2 + 0x18) = pIVar1;
  }
  *(Item **)this = pIVar1;
  return;
}



/* RendererCanvasCull::_update_dirty_item(RendererCanvasCull::Item*) */

void __thiscall RendererCanvasCull::_update_dirty_item(RendererCanvasCull *this,Item *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1[0x288] != (Item)0x0) {
    lVar4 = *(long *)(param_1 + 0x68);
    if ((param_1[0x188] != (Item)0x0) && (*(long *)(param_1 + 0x148) != 0)) {
      uVar3 = *(ulong *)(param_1 + 0x148);
      if ((uint)uVar3 < *(uint *)(this + 0x134)) {
        while( true ) {
          lVar2 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                  *(long *)(*(long *)(this + 0x120) +
                           ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
          if (*(int *)(lVar2 + 0x290) != (int)(uVar3 >> 0x20)) break;
          lVar4 = *(long *)(lVar2 + 0x68);
          if (((*(char *)(lVar2 + 0x188) == '\0') || (*(long *)(lVar2 + 0x148) == 0)) ||
             (uVar3 = *(ulong *)(lVar2 + 0x148), *(uint *)(this + 0x134) <= (uint)uVar3))
          goto LAB_001072b4;
        }
        if (*(int *)(lVar2 + 0x290) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
LAB_001072b4:
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
    InstanceUniforms::materials_start();
    if (lVar4 != 0) {
      InstanceUniforms::materials_append(param_1 + 0x230,lVar4);
      (**(code **)(*RenderingServerGlobals::material_storage + 0x128))
                (RenderingServerGlobals::material_storage,lVar4,
                 (DependencyTracker *)(param_1 + 0x1e8));
    }
    cVar1 = InstanceUniforms::materials_finish(param_1 + 0x230,*(undefined8 *)(param_1 + 0x150));
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x230);
    }
    DependencyTracker::update_end((DependencyTracker *)(param_1 + 0x1e8));
  }
  if (this != *(RendererCanvasCull **)(param_1 + 0x268)) {
    _err_print_error("remove","./core/templates/self_list.h",0x50,
                     "Condition \"p_elem->_root != this\" is true.",0,0);
    param_1[0x288] = (Item)0x0;
    return;
  }
  lVar4 = *(long *)(param_1 + 0x278);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0x280);
  }
  lVar2 = *(long *)(param_1 + 0x280);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar4;
  }
  if (param_1 + 0x268 == *(Item **)this) {
    *(undefined8 *)this = *(undefined8 *)(param_1 + 0x278);
  }
  if (param_1 + 0x268 == *(Item **)(this + 8)) {
    *(long *)(this + 8) = lVar2;
  }
  param_1[0x288] = (Item)0x0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined1 (*) [16])(param_1 + 0x278) = (undefined1  [16])0x0;
  return;
}



/* RendererCanvasCull::update_dirty_items() */

void __thiscall RendererCanvasCull::update_dirty_items(RendererCanvasCull *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  while (lVar1 != 0) {
    _update_dirty_item(this,*(Item **)(lVar1 + 8));
    lVar1 = *(long *)this;
  }
                    /* WARNING: Could not recover jumptable at 0x00107496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*RenderingServerGlobals::utilities + 0x98))();
  return;
}



/* RendererCanvasCull::canvas_item_get_instance_shader_parameter_list(RID, List<PropertyInfo,
   DefaultAllocator>*) const */

void __thiscall
RendererCanvasCull::canvas_item_get_instance_shader_parameter_list
          (RendererCanvasCull *this,ulong param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 == 0) {
    _err_print_error("canvas_item_get_instance_shader_parameter_list",
                     "servers/rendering/renderer_canvas_cull.cpp",0x7a6,
                     "Parameter \"p_parameters\" is null.",0,0);
    return;
  }
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    iVar1 = *(int *)(lVar2 + 0x290);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      while (*(long *)this != 0) {
        _update_dirty_item(this,*(Item **)(*(long *)this + 8));
      }
      (**(code **)(*RenderingServerGlobals::utilities + 0x98))();
      InstanceUniforms::get_property_list((List *)(lVar2 + 0x230));
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_get_instance_shader_parameter_list",
                   "servers/rendering/renderer_canvas_cull.cpp",0x7a8,"Parameter \"item\" is null.",
                   0,0);
  return;
}



/* RendererCanvasCull::update() */

void __thiscall RendererCanvasCull::update(RendererCanvasCull *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  while (lVar1 != 0) {
    _update_dirty_item(this,*(Item **)(lVar1 + 8));
    lVar1 = *(long *)this;
  }
                    /* WARNING: Could not recover jumptable at 0x00107606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*RenderingServerGlobals::utilities + 0x98))();
  return;
}



/* RendererCanvasCull::update_interpolation_tick(bool) */

void __thiscall RendererCanvasCull::update_interpolation_tick(RendererCanvasCull *this,bool param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  uint *puVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  
  lVar8 = 0;
  puVar5 = *(uint **)(this + 0x2b0);
  if (*puVar5 != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(puVar5 + 2) + lVar8 * 8);
      if (*puVar1 != 0) {
        uVar3 = *puVar1;
        if ((uint)uVar3 < *(uint *)(this + 0x134)) {
          lVar6 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                  *(long *)(*(long *)(this + 0x120) +
                           ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
          if (*(int *)(lVar6 + 0x290) == (int)(uVar3 >> 0x20)) {
            if ((*(byte *)(lVar6 + 0x38) & 0x10) == 0) {
              *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar6 + 0x10);
            }
          }
          else if (*(int *)(lVar6 + 0x290) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            puVar5 = *(uint **)(this + 0x2b0);
            goto LAB_00107699;
          }
        }
        puVar5 = *(uint **)(this + 0x2b0);
      }
LAB_00107699:
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *puVar5);
  }
  puVar5 = *(uint **)(this + 0x2a8);
  if ((param_1) && (*puVar5 != 0)) {
    lVar8 = 0;
    do {
      puVar1 = (ulong *)(*(long *)(puVar5 + 2) + lVar8 * 8);
      if (*puVar1 != 0) {
        uVar3 = *puVar1;
        if ((uint)uVar3 < *(uint *)(this + 0x134)) {
          lVar6 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                  *(long *)(*(long *)(this + 0x120) +
                           ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
          if (*(int *)(lVar6 + 0x290) == (int)(uVar3 >> 0x20)) {
            *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) & 0xef;
            *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar6 + 0x18);
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 8);
            *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar6 + 0x10);
          }
          else if (*(int *)(lVar6 + 0x290) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            puVar5 = *(uint **)(this + 0x2a8);
            goto LAB_00107727;
          }
        }
        puVar5 = *(uint **)(this + 0x2a8);
      }
LAB_00107727:
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *puVar5);
  }
  piVar4 = *(int **)(this + 0x2b0);
  iVar2 = *piVar4;
  *(int **)(this + 0x2a8) = piVar4;
  *(uint **)(this + 0x2b0) = puVar5;
  if (iVar2 != 0) {
    *piVar4 = 0;
  }
  puVar5 = *(uint **)(this + 0x2e0);
  lVar8 = 0;
  if (*puVar5 != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(puVar5 + 2) + lVar8 * 8);
      if (*puVar1 != 0) {
        uVar3 = *puVar1;
        if ((uint)uVar3 < *(uint *)(this + 0x18c)) {
          pbVar7 = (byte *)(((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
                           *(long *)(*(long *)(this + 0x178) +
                                    ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8));
          if (*(int *)(pbVar7 + 0x130) == (int)(uVar3 >> 0x20)) {
            if ((*pbVar7 & 2) == 0) {
              *(undefined8 *)(pbVar7 + 0x3c) = *(undefined8 *)(pbVar7 + 0x24);
              *(undefined8 *)(pbVar7 + 0x2c) = *(undefined8 *)(pbVar7 + 0x14);
              *(undefined8 *)(pbVar7 + 0x34) = *(undefined8 *)(pbVar7 + 0x1c);
            }
          }
          else if (*(int *)(pbVar7 + 0x130) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            puVar5 = *(uint **)(this + 0x2e0);
            goto LAB_001077d8;
          }
        }
        puVar5 = *(uint **)(this + 0x2e0);
      }
LAB_001077d8:
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *puVar5);
  }
  puVar5 = *(uint **)(this + 0x2d8);
  if ((param_1) && (*puVar5 != 0)) {
    lVar8 = 0;
    do {
      puVar1 = (ulong *)(*(long *)(puVar5 + 2) + lVar8 * 8);
      if (*puVar1 != 0) {
        uVar3 = *puVar1;
        if ((uint)uVar3 < *(uint *)(this + 0x18c)) {
          pbVar7 = (byte *)(((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
                           *(long *)(*(long *)(this + 0x178) +
                                    ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8));
          if (*(int *)(pbVar7 + 0x130) == (int)(uVar3 >> 0x20)) {
            *pbVar7 = *pbVar7 & 0xfd;
            *(undefined8 *)(pbVar7 + 0x3c) = *(undefined8 *)(pbVar7 + 0x24);
            *(undefined8 *)(pbVar7 + 0x2c) = *(undefined8 *)(pbVar7 + 0x14);
            *(undefined8 *)(pbVar7 + 0x34) = *(undefined8 *)(pbVar7 + 0x1c);
          }
          else if (*(int *)(pbVar7 + 0x130) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            puVar5 = *(uint **)(this + 0x2d8);
            goto LAB_00107866;
          }
        }
        puVar5 = *(uint **)(this + 0x2d8);
      }
LAB_00107866:
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *puVar5);
  }
  piVar4 = *(int **)(this + 0x2e0);
  iVar2 = *piVar4;
  *(int **)(this + 0x2d8) = piVar4;
  *(uint **)(this + 0x2e0) = puVar5;
  if (iVar2 != 0) {
    *piVar4 = 0;
  }
  puVar5 = *(uint **)(this + 0x310);
  lVar8 = 0;
  if (*puVar5 != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(puVar5 + 2) + lVar8 * 8);
      if (*puVar1 != 0) {
        uVar3 = *puVar1;
        if ((uint)uVar3 < *(uint *)(this + 0x84)) {
          pbVar7 = (byte *)(*(long *)(*(long *)(this + 0x70) +
                                     ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
                           ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98);
          if (*(int *)(pbVar7 + 0x90) == (int)(uVar3 >> 0x20)) {
            if ((*pbVar7 & 2) == 0) {
              *(undefined8 *)(pbVar7 + 0x58) = *(undefined8 *)(pbVar7 + 0x40);
              *(undefined8 *)(pbVar7 + 0x48) = *(undefined8 *)(pbVar7 + 0x30);
              *(undefined8 *)(pbVar7 + 0x50) = *(undefined8 *)(pbVar7 + 0x38);
            }
          }
          else if (*(int *)(pbVar7 + 0x90) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            puVar5 = *(uint **)(this + 0x310);
            goto LAB_0010791a;
          }
        }
        puVar5 = *(uint **)(this + 0x310);
      }
LAB_0010791a:
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *puVar5);
  }
  puVar5 = *(uint **)(this + 0x308);
  if ((param_1) && (*puVar5 != 0)) {
    lVar8 = 0;
    do {
      puVar1 = (ulong *)(*(long *)(puVar5 + 2) + lVar8 * 8);
      if (*puVar1 != 0) {
        uVar3 = *puVar1;
        if ((uint)uVar3 < *(uint *)(this + 0x84)) {
          pbVar7 = (byte *)(*(long *)(*(long *)(this + 0x70) +
                                     ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
                           ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98);
          if (*(int *)(pbVar7 + 0x90) == (int)(uVar3 >> 0x20)) {
            *pbVar7 = *pbVar7 & 0xfd;
            *(undefined8 *)(pbVar7 + 0x58) = *(undefined8 *)(pbVar7 + 0x40);
            *(undefined8 *)(pbVar7 + 0x48) = *(undefined8 *)(pbVar7 + 0x30);
            *(undefined8 *)(pbVar7 + 0x50) = *(undefined8 *)(pbVar7 + 0x38);
          }
          else if (*(int *)(pbVar7 + 0x90) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            puVar5 = *(uint **)(this + 0x308);
            goto LAB_001079a8;
          }
        }
        puVar5 = *(uint **)(this + 0x308);
      }
LAB_001079a8:
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *puVar5);
  }
  piVar4 = *(int **)(this + 0x310);
  iVar2 = *piVar4;
  *(int **)(this + 0x308) = piVar4;
  *(uint **)(this + 0x310) = puVar5;
  if (iVar2 != 0) {
    *piVar4 = 0;
  }
  return;
}



/* RendererCanvasCull::tick() */

void __thiscall RendererCanvasCull::tick(RendererCanvasCull *this)

{
  if (this[0x318] == (RendererCanvasCull)0x0) {
    return;
  }
  update_interpolation_tick(this,true);
  return;
}



/* RendererCanvasCull::InterpolationData::notify_free_canvas_item(RID, RendererCanvasCull::Item&) */

void __thiscall
RendererCanvasCull::InterpolationData::notify_free_canvas_item
          (InterpolationData *this,long param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  *(byte *)(param_3 + 0x38) = *(byte *)(param_3 + 0x38) & 0xef;
  if (this[0x90] != (InterpolationData)0x0) {
    puVar1 = *(uint **)(this + 0x20);
    uVar2 = 0;
    uVar4 = *puVar1;
    while (uVar2 < uVar4) {
      plVar3 = (long *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 8);
      while (*plVar3 != param_2) {
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if (uVar4 == uVar2) goto LAB_00107c40;
      }
      uVar4 = uVar4 - 1;
      *puVar1 = uVar4;
      if (uVar4 <= uVar2) break;
      *plVar3 = *(long *)(*(long *)(puVar1 + 2) + (ulong)uVar4 * 8);
    }
LAB_00107c40:
    puVar1 = *(uint **)(this + 0x28);
    uVar2 = 0;
    uVar4 = *puVar1;
    while (uVar2 < uVar4) {
      plVar3 = (long *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 8);
      while (*plVar3 != param_2) {
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if (uVar2 == uVar4) {
          return;
        }
      }
      uVar4 = uVar4 - 1;
      *puVar1 = uVar4;
      if (uVar4 <= uVar2) {
        return;
      }
      *plVar3 = *(long *)(*(long *)(puVar1 + 2) + (ulong)uVar4 * 8);
    }
  }
  return;
}



/* RendererCanvasCull::InterpolationData::notify_free_canvas_light(RID,
   RendererCanvasRender::Light&) */

void __thiscall
RendererCanvasCull::InterpolationData::notify_free_canvas_light
          (InterpolationData *this,long param_2,byte *param_3)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  *param_3 = *param_3 & 0xfd;
  if (this[0x90] != (InterpolationData)0x0) {
    puVar1 = *(uint **)(this + 0x50);
    uVar2 = 0;
    uVar4 = *puVar1;
    while (uVar2 < uVar4) {
      plVar3 = (long *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 8);
      while (*plVar3 != param_2) {
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if (uVar4 == uVar2) goto LAB_00107cf0;
      }
      uVar4 = uVar4 - 1;
      *puVar1 = uVar4;
      if (uVar4 <= uVar2) break;
      *plVar3 = *(long *)(*(long *)(puVar1 + 2) + (ulong)uVar4 * 8);
    }
LAB_00107cf0:
    puVar1 = *(uint **)(this + 0x58);
    uVar2 = 0;
    uVar4 = *puVar1;
    while (uVar2 < uVar4) {
      plVar3 = (long *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 8);
      while (*plVar3 != param_2) {
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if (uVar2 == uVar4) {
          return;
        }
      }
      uVar4 = uVar4 - 1;
      *puVar1 = uVar4;
      if (uVar4 <= uVar2) {
        return;
      }
      *plVar3 = *(long *)(*(long *)(puVar1 + 2) + (ulong)uVar4 * 8);
    }
  }
  return;
}



/* RendererCanvasCull::InterpolationData::notify_free_canvas_light_occluder(RID,
   RendererCanvasRender::LightOccluderInstance&) */

void __thiscall
RendererCanvasCull::InterpolationData::notify_free_canvas_light_occluder
          (InterpolationData *this,long param_2,byte *param_3)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  *param_3 = *param_3 & 0xfd;
  if (this[0x90] != (InterpolationData)0x0) {
    puVar1 = *(uint **)(this + 0x80);
    uVar2 = 0;
    uVar4 = *puVar1;
    while (uVar2 < uVar4) {
      plVar3 = (long *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 8);
      while (*plVar3 != param_2) {
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if (uVar4 == uVar2) goto LAB_00107da0;
      }
      uVar4 = uVar4 - 1;
      *puVar1 = uVar4;
      if (uVar4 <= uVar2) break;
      *plVar3 = *(long *)(*(long *)(puVar1 + 2) + (ulong)uVar4 * 8);
    }
LAB_00107da0:
    puVar1 = *(uint **)(this + 0x88);
    uVar2 = 0;
    uVar4 = *puVar1;
    while (uVar2 < uVar4) {
      plVar3 = (long *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 8);
      while (*plVar3 != param_2) {
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if (uVar2 == uVar4) {
          return;
        }
      }
      uVar4 = uVar4 - 1;
      *puVar1 = uVar4;
      if (uVar4 <= uVar2) {
        return;
      }
      *plVar3 = *(long *)(*(long *)(puVar1 + 2) + (ulong)uVar4 * 8);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::RendererCanvasCull() */

void __thiscall RendererCanvasCull::RendererCanvasCull(RendererCanvasCull *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long in_FS_OFFSET;
  double dVar6;
  undefined1 auVar7 [16];
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  long local_b0;
  long local_a8;
  int local_a0;
  long local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  uVar2 = _UNK_001236c8;
  uVar4 = __LC134;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x10) = &PTR__RID_Alloc_00123428;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x50) = 1;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x28) = uVar4;
  *(undefined8 *)(this + 0x30) = uVar2;
  uVar4 = Memory::alloc_static(0x908,false);
  *(undefined8 *)(this + 0x18) = uVar4;
  uVar4 = Memory::alloc_static((ulong)*(uint *)(this + 0x34) << 3,false);
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x68) = &PTR__RID_Alloc_00123448;
  uVar2 = _UNK_001236d8;
  uVar4 = __LC135;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xa8) = 1;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x80) = uVar4;
  *(undefined8 *)(this + 0x88) = uVar2;
  uVar4 = Memory::alloc_static(0x1208,false);
  *(undefined8 *)(this + 0x70) = uVar4;
  uVar4 = Memory::alloc_static((ulong)*(uint *)(this + 0x8c) << 3,false);
  *(undefined8 *)(this + 0x78) = uVar4;
  *(undefined1 (*) [16])(this + 0x100) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0xc0) = &PTR__RID_Alloc_00123468;
  uVar2 = _UNK_001236e8;
  uVar4 = __LC136;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x100) = 1;
  *(undefined1 (*) [16])(this + 0xf0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xd8) = uVar4;
  *(undefined8 *)(this + 0xe0) = uVar2;
  uVar4 = Memory::alloc_static(0x1b10,false);
  *(undefined8 *)(this + 200) = uVar4;
  uVar4 = Memory::alloc_static((ulong)*(uint *)(this + 0xe4) << 3,false);
  *(undefined8 *)(this + 0xd0) = uVar4;
  *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x118) = &PTR__RID_Alloc_00123488;
  uVar2 = _UNK_001236f8;
  uVar4 = __LC137;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x158) = 1;
  *(undefined8 *)(this + 0x130) = uVar4;
  *(undefined8 *)(this + 0x138) = uVar2;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  uVar4 = Memory::alloc_static(0x52c0,false);
  *(undefined8 *)(this + 0x120) = uVar4;
  uVar4 = Memory::alloc_static((ulong)*(uint *)(this + 0x13c) << 3,false);
  *(undefined8 *)(this + 0x128) = uVar4;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x170) = &PTR__RID_Alloc_001234a8;
  uVar2 = _UNK_00123708;
  uVar4 = __LC138;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1b0) = 1;
  *(undefined8 *)(this + 0x188) = uVar4;
  *(undefined8 *)(this + 400) = uVar2;
  uVar4 = Memory::alloc_static(0x2620,false);
  *(undefined8 *)(this + 0x178) = uVar4;
  uVar4 = Memory::alloc_static((ulong)*(uint *)(this + 0x194) << 3,false);
  *(undefined8 *)(this + 0x180) = uVar4;
  *(undefined8 *)(this + 0x278) = 0x3f80000000000000;
  *(RendererCanvasCull **)(this + 0x2a8) = this + 0x288;
  uVar2 = _LC276;
  uVar4 = __LC140;
  *(RendererCanvasCull **)(this + 0x2b0) = this + 0x298;
  *(RendererCanvasCull **)(this + 0x2d8) = this + 0x2b8;
  *(undefined8 *)(this + 0x1d8) = uVar4;
  *(undefined8 *)(this + 0x1e0) = uVar2;
  uVar2 = _UNK_00123728;
  uVar4 = __LC141;
  *(RendererCanvasCull **)(this + 0x2e0) = this + 0x2c8;
  *(undefined2 *)(this + 0x1c9) = 0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1f8) = uVar4;
  *(undefined8 *)(this + 0x200) = uVar2;
  this[0x1cb] = (RendererCanvasCull)0x0;
  *(undefined8 *)(this + 0x1d0) = 0;
  this[0x20c] = (RendererCanvasCull)0x0;
  *(undefined4 *)(this + 0x208) = 0x1000;
  *(undefined8 *)(this + 0x270) = 0x3f800000;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(RendererCanvasCull **)(this + 0x308) = this + 0x2e8;
  *(RendererCanvasCull **)(this + 0x310) = this + 0x2f8;
  this[0x318] = (RendererCanvasCull)0x0;
  _canvas_cull_singleton = this;
  uVar4 = Memory::alloc_static(0x10008,false);
  *(undefined8 *)(this + 0x260) = uVar4;
  uVar4 = Memory::alloc_static(0x10008,false);
  this[0x1c8] = (RendererCanvasCull)0x0;
  dVar6 = _LC142;
  *(undefined8 *)(this + 0x268) = uVar4;
  Variant::Variant((Variant *)local_58,dVar6);
  local_b8 = "0.1,2,0.001,or_greater";
  local_c8 = 0;
  local_d0 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d0);
  local_d8 = 0;
  local_b8 = "debug/canvas_items/debug_redraw_time";
  local_b0 = 0x24;
  String::parse_latin1((StrRange *)&local_d8);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,3);
  local_b0 = 0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_d8);
  }
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  if (local_d0 == 0) {
LAB_00108388:
    local_90 = 6;
    StringName::operator=((StringName *)&local_a8,(StringName *)&local_c8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_d0);
    local_90 = 6;
    if (local_a0 != 0x11) goto LAB_00108388;
    StringName::StringName((StringName *)&local_c0,(String_conflict *)&local_98,false);
    if (local_a8 == local_c0) {
      if ((StringName::configured != '\0') && (local_c0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_a8 = local_c0;
    }
  }
  bVar5 = SUB81((Variant *)local_58,0);
  _GLOBAL_DEF((PropertyInfo *)local_78,(Variant *)&local_b8,bVar5,false,false,false);
  dVar6 = Variant::operator_cast_to_double((Variant *)local_78);
  *(double *)(this + 0x1d0) = dVar6;
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
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
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_88 = __LC145;
  uStack_80 = _UNK_00123738;
  Variant::Variant((Variant *)local_58,(Color *)&local_88);
  local_b8 = "";
  local_c8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_d0);
  local_d8 = 0;
  local_b8 = "debug/canvas_items/debug_redraw_color";
  local_b0 = 0x25;
  String::parse_latin1((StrRange *)&local_d8);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,0x14);
  local_b0 = 0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_d8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_d0);
    local_90 = 6;
    if (local_a0 == 0x11) {
      StringName::StringName((StringName *)&local_c0,(String_conflict *)&local_98,false);
      if (local_a8 == local_c0) {
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_a8 = local_c0;
      }
      goto LAB_001085b7;
    }
  }
  local_90 = 6;
  StringName::operator=((StringName *)&local_a8,(StringName *)&local_c8);
LAB_001085b7:
  _GLOBAL_DEF((PropertyInfo *)local_78,(Variant *)&local_b8,bVar5,false,false,false);
  auVar7 = Variant::operator_cast_to_Color((Variant *)local_78);
  *(undefined1 (*) [16])(this + 0x1d8) = auVar7;
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
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
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererCanvasCull::update_visibility_notifiers() */

void __thiscall RendererCanvasCull::update_visibility_notifiers(RendererCanvasCull *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  Variant **ppVVar6;
  long *plVar7;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x250) != (long *)0x0) {
    plVar7 = *(long **)(this + 0x250);
    do {
      while( true ) {
        plVar2 = (long *)plVar7[2];
        lVar3 = plVar7[1];
        if (*(char *)(lVar3 + 0x30) != '\0') break;
        lVar1 = *(long *)(lVar3 + 0x38);
        lVar5 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
        if (lVar1 != lVar5) {
          if ((RendererCanvasCull *)*plVar7 == this + 0x250) {
            lVar1 = plVar7[2];
            if (lVar1 != 0) {
              *(long *)(lVar1 + 0x18) = plVar7[3];
            }
            lVar5 = plVar7[3];
            if (lVar5 != 0) {
              *(long *)(lVar5 + 0x10) = lVar1;
            }
            if (plVar7 == *(long **)(this + 0x250)) {
              *(long *)(this + 0x250) = plVar7[2];
            }
            if (plVar7 == *(long **)(this + 600)) {
              *(long *)(this + 600) = lVar5;
            }
            *plVar7 = 0;
            *(undefined1 (*) [16])(plVar7 + 2) = (undefined1  [16])0x0;
          }
          else {
            _err_print_error("remove","./core/templates/self_list.h",0x50,
                             "Condition \"p_elem->_root != this\" is true.",0,0);
          }
          ppVVar6 = (Variant **)(lVar3 + 0x20);
          cVar4 = Callable::is_valid();
          if (cVar4 != '\0') goto joined_r0x00108941;
        }
LAB_00108970:
        plVar7 = plVar2;
        if (plVar2 == (long *)0x0) goto LAB_001089d8;
      }
      *(undefined1 *)(lVar3 + 0x30) = 0;
      ppVVar6 = (Variant **)(lVar3 + 0x10);
      cVar4 = Callable::is_valid();
      if (cVar4 == '\0') goto LAB_00108970;
joined_r0x00108941:
      if ((char)RenderingServerGlobals::threaded != '\0') {
        Variant::Variant((Variant *)local_58,0);
        Callable::call_deferredp(ppVVar6,0);
        if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_001089c7;
        goto LAB_00108970;
      }
      Callable::call<>();
      if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00108970;
LAB_001089c7:
      Variant::_clear_internal();
      plVar7 = plVar2;
    } while (plVar2 != (long *)0x0);
  }
LAB_001089d8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::canvas_item_set_visibility_notifier(RID, bool, Rect2 const&, Callable const&,
   Callable const&) */

void __thiscall
RendererCanvasCull::canvas_item_set_visibility_notifier
          (RendererCanvasCull *this,ulong param_2,char param_3,undefined8 *param_4,Callable *param_5
          ,Callable *param_6)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  VisibilityNotifierData *pVVar6;
  long lVar7;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar7 + 0x290) == (int)(param_2 >> 0x20)) {
      pVVar6 = *(VisibilityNotifierData **)(lVar7 + 0x1e0);
      if (param_3 != '\0') {
        if (pVVar6 == (VisibilityNotifierData *)0x0) {
          pVVar6 = PagedAllocator<RendererCanvasCull::Item::VisibilityNotifierData,false,4096u>::
                   alloc<>((PagedAllocator<RendererCanvasCull::Item::VisibilityNotifierData,false,4096u>
                            *)(this + 0x1e8));
          *(VisibilityNotifierData **)(lVar7 + 0x1e0) = pVVar6;
        }
        uVar5 = param_4[1];
        *(undefined8 *)pVVar6 = *param_4;
        *(undefined8 *)(pVVar6 + 8) = uVar5;
        Callable::operator=((Callable *)(pVVar6 + 0x10),param_5);
        Callable::operator=((Callable *)(*(long *)(lVar7 + 0x1e0) + 0x20),param_6);
        return;
      }
      if (pVVar6 != (VisibilityNotifierData *)0x0) {
        plVar2 = *(long **)(pVVar6 + 0x40);
        if (plVar2 != (long *)0x0) {
          lVar3 = *(long *)(pVVar6 + 0x50);
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(pVVar6 + 0x58);
          }
          lVar4 = *(long *)(pVVar6 + 0x58);
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar3;
          }
          if (pVVar6 + 0x40 == (VisibilityNotifierData *)*plVar2) {
            *plVar2 = *(long *)(pVVar6 + 0x50);
          }
          if (pVVar6 + 0x40 == (VisibilityNotifierData *)plVar2[1]) {
            plVar2[1] = lVar4;
          }
        }
        Callable::~Callable((Callable *)(pVVar6 + 0x20));
        Callable::~Callable((Callable *)(pVVar6 + 0x10));
        uVar1 = *(uint *)(this + 0x1fc);
        *(VisibilityNotifierData **)
         (*(long *)(*(long *)(this + 0x1f0) +
                   (ulong)(uVar1 >> ((byte)*(undefined4 *)(this + 0x200) & 0x1f)) * 8) +
         (ulong)(uVar1 & *(uint *)(this + 0x204)) * 8) = pVVar6;
        *(uint *)(this + 0x1fc) = uVar1 + 1;
        *(undefined8 *)(lVar7 + 0x1e0) = 0;
      }
      return;
    }
    if (*(int *)(lVar7 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_set_visibility_notifier",
                   "servers/rendering/renderer_canvas_cull.cpp",0x7b0,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_attach_to_canvas(RID, RID) */

void __thiscall
RendererCanvasCull::canvas_light_attach_to_canvas
          (RendererCanvasCull *this,ulong param_2,ulong param_3)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  int iVar2;
  Light *pLVar3;
  long lVar4;
  long in_FS_OFFSET;
  Light *local_50;
  Light *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    pLVar3 = (Light *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
                      *(long *)(*(long *)(this + 0x178) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8));
    if (*(int *)(pLVar3 + 0x130) == (int)(param_2 >> 0x20)) {
      local_50 = pLVar3;
      if (*(long *)(pLVar3 + 0x88) != 0) {
        uVar1 = *(ulong *)(pLVar3 + 0x88);
        if ((uint)uVar1 < *(uint *)(this + 0xdc)) {
          lVar4 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                  *(long *)(*(long *)(this + 200) +
                           ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
          if (*(int *)(lVar4 + 0xd8) != (int)(uVar1 >> 0x20)) {
            if (0x7ffffffe < *(int *)(lVar4 + 0xd8) + 0x80000000U) goto LAB_00108f8c;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            lVar4 = 0;
          }
        }
        else {
LAB_00108f8c:
          lVar4 = 0;
        }
        if (*(int *)(local_50 + 0x6c) == 0) {
          HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
          ::erase((HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
                   *)(lVar4 + 0x28),&local_50);
        }
        else {
          HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
          ::erase((HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
                   *)(lVar4 + 0x50),&local_50);
        }
      }
      __mutex = (pthread_mutex_t *)(this + 0xf0);
      iVar2 = pthread_mutex_lock(__mutex);
      pLVar3 = local_50;
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar2);
      }
      if ((uint)param_3 < *(uint *)(this + 0xdc)) {
        if ((param_3 >> 0x20 == 0x7fffffff) ||
           ((*(uint *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                       *(long *)(*(long *)(this + 200) +
                                ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8) + 0xd8
                      ) & 0x7fffffff) != (uint)(param_3 >> 0x20))) {
          pthread_mutex_unlock(__mutex);
          *(undefined8 *)(pLVar3 + 0x88) = 0;
        }
        else {
          pthread_mutex_unlock(__mutex);
          *(ulong *)(pLVar3 + 0x88) = param_3;
          if (param_3 != 0) {
            uVar1 = *(ulong *)(pLVar3 + 0x88);
            if ((((uint)uVar1 < *(uint *)(this + 0xdc)) &&
                (iVar2 = *(int *)(((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                                  *(long *)(*(long *)(this + 200) +
                                           ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) *
                                           8) + 0xd8), iVar2 != (int)(uVar1 >> 0x20))) &&
               (iVar2 + 0x80000000U < 0x7fffffff)) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            if (*(int *)(local_50 + 0x6c) == 0) {
              HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
              ::insert(local_48);
            }
            else {
              HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
              ::insert(local_48);
            }
          }
        }
      }
      else {
        pthread_mutex_unlock(__mutex);
        *(undefined8 *)(pLVar3 + 0x88) = 0;
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109028;
    }
    if (*(int *)(pLVar3 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("canvas_light_attach_to_canvas","servers/rendering/renderer_canvas_cull.cpp",
                     0x814,"Parameter \"clight\" is null.",0,0);
    return;
  }
LAB_00109028:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::canvas_light_set_mode(RID, RenderingServer::CanvasLightMode) */

void __thiscall
RendererCanvasCull::canvas_light_set_mode(RendererCanvasCull *this,ulong param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x18c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
            *(long *)(*(long *)(this + 0x178) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
    if (*(int *)(lVar2 + 0x130) == (int)(param_2 >> 0x20)) {
      if (*(int *)(lVar2 + 0x6c) != param_3) {
        lVar1 = *(long *)(lVar2 + 0x88);
        if (lVar1 != 0) {
          canvas_light_attach_to_canvas(this,param_2,0);
          *(int *)(lVar2 + 0x6c) = param_3;
          canvas_light_attach_to_canvas(this,param_2,lVar1);
          return;
        }
        *(int *)(lVar2 + 0x6c) = param_3;
      }
      return;
    }
    if (*(int *)(lVar2 + 0x130) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_light_set_mode","servers/rendering/renderer_canvas_cull.cpp",0x7ff,
                   "Parameter \"clight\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_light_occluder_attach_to_canvas(RID, RID) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_attach_to_canvas
          (RendererCanvasCull *this,ulong param_2,ulong param_3)

{
  pthread_mutex_t *__mutex;
  LightOccluderInstance *pLVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  LightOccluderInstance *local_50;
  LightOccluderInstance *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x84))) {
    pLVar1 = (LightOccluderInstance *)
             (*(long *)(*(long *)(this + 0x70) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
             ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98);
    if (*(int *)(pLVar1 + 0x90) == (int)(param_2 >> 0x20)) {
      local_50 = pLVar1;
      if (*(long *)(pLVar1 + 8) != 0) {
        uVar2 = *(ulong *)(pLVar1 + 8);
        if ((uint)uVar2 < *(uint *)(this + 0xdc)) {
          lVar4 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                  *(long *)(*(long *)(this + 200) +
                           ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
          if (*(int *)(lVar4 + 0xd8) != (int)(uVar2 >> 0x20)) {
            if (0x7ffffffe < *(int *)(lVar4 + 0xd8) + 0x80000000U) goto LAB_0010946c;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            lVar4 = 0;
          }
        }
        else {
LAB_0010946c:
          lVar4 = 0;
        }
        HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
        ::erase((HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
                 *)(lVar4 + 0x78),&local_50);
      }
      __mutex = (pthread_mutex_t *)(this + 0xf0);
      iVar3 = pthread_mutex_lock(__mutex);
      pLVar1 = local_50;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar3);
      }
      if ((uint)param_3 < *(uint *)(this + 0xdc)) {
        if ((param_3 >> 0x20 == 0x7fffffff) ||
           ((*(uint *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                       *(long *)(*(long *)(this + 200) +
                                ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8) + 0xd8
                      ) & 0x7fffffff) != (uint)(param_3 >> 0x20))) {
          pthread_mutex_unlock(__mutex);
          *(undefined8 *)(pLVar1 + 8) = 0;
        }
        else {
          pthread_mutex_unlock(__mutex);
          *(ulong *)(pLVar1 + 8) = param_3;
          if (param_3 != 0) {
            uVar2 = *(ulong *)(pLVar1 + 8);
            if ((((uint)uVar2 < *(uint *)(this + 0xdc)) &&
                (iVar3 = *(int *)(((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                                  *(long *)(*(long *)(this + 200) +
                                           ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) *
                                           8) + 0xd8), iVar3 != (int)(uVar2 >> 0x20))) &&
               (iVar3 + 0x80000000U < 0x7fffffff)) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
            ::insert(local_48);
          }
        }
      }
      else {
        pthread_mutex_unlock(__mutex);
        *(undefined8 *)(pLVar1 + 8) = 0;
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001094b7;
    }
    if (*(int *)(pLVar1 + 0x90) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("canvas_light_occluder_attach_to_canvas",
                     "servers/rendering/renderer_canvas_cull.cpp",0x8dd,
                     "Parameter \"occluder\" is null.",0,0);
    return;
  }
LAB_001094b7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::canvas_light_occluder_set_polygon(RID, RID) */

void __thiscall
RendererCanvasCull::canvas_light_occluder_set_polygon
          (RendererCanvasCull *this,ulong param_2,ulong param_3)

{
  LightOccluderInstance *pLVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  LightOccluderInstance *pLVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long in_FS_OFFSET;
  LightOccluderInstance *local_40;
  LightOccluderInstance *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x84))) {
    pLVar1 = (LightOccluderInstance *)
             (*(long *)(*(long *)(this + 0x70) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
             ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98);
    if (*(int *)(pLVar1 + 0x90) == (int)(param_2 >> 0x20)) {
      local_40 = pLVar1;
      if (*(long *)(pLVar1 + 0x10) != 0) {
        uVar4 = *(ulong *)(pLVar1 + 0x10);
        if ((uint)uVar4 < *(uint *)(this + 0x2c)) {
          lVar9 = ((uVar4 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50 +
                  *(long *)(*(long *)(this + 0x18) +
                           ((uVar4 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
          iVar2 = *(int *)(lVar9 + 0x48);
          if (iVar2 == (int)(uVar4 >> 0x20)) {
            HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
            ::erase((HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
                     *)(lVar9 + 0x20),&local_40);
          }
          else if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
      }
      pLVar6 = local_40;
      *(ulong *)(pLVar1 + 0x10) = param_3;
      *(undefined8 *)(pLVar1 + 0x18) = 0;
      if (param_3 != 0) {
        if ((uint)param_3 < *(uint *)(this + 0x2c)) {
          lVar9 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50 +
                  *(long *)(*(long *)(this + 0x18) +
                           ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
          if (*(int *)(lVar9 + 0x48) == (int)(param_3 >> 0x20)) {
            HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
            ::insert(local_38);
            uVar8 = *(undefined8 *)(lVar9 + 4);
            uVar5 = *(undefined8 *)(lVar9 + 0xc);
            *(undefined8 *)(pLVar6 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
            uVar3 = *(undefined4 *)(lVar9 + 0x14);
            *(undefined8 *)(pLVar6 + 0x20) = uVar8;
            *(undefined8 *)(pLVar6 + 0x28) = uVar5;
            *(undefined4 *)(pLVar6 + 0x80) = uVar3;
            goto LAB_0010954b;
          }
          if (*(int *)(lVar9 + 0x48) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        *(undefined8 *)(local_40 + 0x10) = 0;
        if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010979b;
        uVar8 = 0x909;
        pcVar7 = "Parameter \"occluder_poly\" is null.";
        goto LAB_00109666;
      }
LAB_0010954b:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010979b;
    }
    if (*(int *)(pLVar1 + 0x90) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar8 = 0x8f9;
    pcVar7 = "Parameter \"occluder\" is null.";
LAB_00109666:
    _err_print_error("canvas_light_occluder_set_polygon",
                     "servers/rendering/renderer_canvas_cull.cpp",uVar8,pcVar7,0,0);
    return;
  }
LAB_0010979b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_initialize(RID) */

void __thiscall RendererCanvasCull::canvas_item_initialize(RendererCanvasCull *this,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  RID_Alloc<RendererCanvasCull::Item,true>::initialize_rid
            ((RID_Alloc<RendererCanvasCull::Item,true> *)(this + 0x118));
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar2 + 0x290) == (int)(param_2 >> 0x20)) {
      *(ulong *)(lVar2 + 0x150) = param_2;
      return;
    }
    if (*(int *)(lVar2 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,lVar2);
    }
  }
  _DAT_00000150 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_light_initialize(RID) */

void __thiscall RendererCanvasCull::canvas_light_initialize(RendererCanvasCull *this,ulong param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  RID_Alloc<RendererCanvasRender::Light,true>::initialize_rid
            ((RID_Alloc<RendererCanvasRender::Light,true> *)(this + 0x170));
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x18c)) {
      lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
              *(long *)(*(long *)(this + 0x178) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
      iVar1 = *(int *)(lVar5 + 0x130);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        uVar4 = (**(code **)(*RenderingServerGlobals::canvas_render + 0x18))();
        *(undefined8 *)(lVar5 + 0x118) = uVar4;
        return;
      }
      uVar3 = iVar1 + 0x80000000;
      if (uVar3 < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,uVar3);
      }
    }
  }
  _DAT_00000118 = (**(code **)(*RenderingServerGlobals::canvas_render + 0x18))();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  int iVar2;
  CowData<Vector2> *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  CowData<Vector2> *pCVar8;
  CowData<Vector2> *pCVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar10 = *(long *)this;
  if (lVar10 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    pCVar3 = (CowData<Vector2> *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar10 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar10 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar3 = (CowData<Vector2> *)(lVar11 * 8);
    if (pCVar3 != (CowData<Vector2> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<Vector2> *)((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar9 = (CowData<Vector2> *)(uVar4 | uVar4 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<Vector2> *)0x0) {
      if (param_1 <= lVar11) {
        if ((pCVar8 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar8), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00118734();
        return;
      }
      if (pCVar8 == pCVar3) {
LAB_00109a4c:
        puVar12 = *(undefined8 **)this;
        if (puVar12 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
        lVar10 = puVar12[-1];
        if (param_1 <= lVar10) goto LAB_001099dd;
      }
      else {
        if (lVar11 != 0) {
          pCVar9 = this;
          iVar2 = _realloc(this,(long)pCVar8);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00109a4c;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar7 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00109af2;
        }
        puVar12 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar12;
        lVar10 = 0;
      }
      memset(puVar12 + lVar10,0,(param_1 - lVar10) * 8);
LAB_001099dd:
      puVar12[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00109af2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar6,0,0);
  return;
}



/* Vector<Color>::push_back(Color) [clone .isra.0] */

void Vector<Color>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<Color>::resize<false>((CowData<Color> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Color>::_copy_on_write((CowData<Color> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
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



/* RendererCanvasCull::~RendererCanvasCull() */

void __thiscall RendererCanvasCull::~RendererCanvasCull(RendererCanvasCull *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  Item *this_00;
  uint uVar9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Memory::free_static(*(void **)(this + 0x260),false);
  Memory::free_static(*(void **)(this + 0x268),false);
  _canvas_cull_singleton = 0;
  if (*(void **)(this + 0x300) != (void *)0x0) {
    if (*(int *)(this + 0x2f8) != 0) {
      *(undefined4 *)(this + 0x2f8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x300),false);
  }
  if (*(void **)(this + 0x2f0) != (void *)0x0) {
    if (*(int *)(this + 0x2e8) != 0) {
      *(undefined4 *)(this + 0x2e8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2f0),false);
  }
  if (*(void **)(this + 0x2d0) != (void *)0x0) {
    if (*(int *)(this + 0x2c8) != 0) {
      *(undefined4 *)(this + 0x2c8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2d0),false);
  }
  if (*(void **)(this + 0x2c0) != (void *)0x0) {
    if (*(int *)(this + 0x2b8) != 0) {
      *(undefined4 *)(this + 0x2b8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2c0),false);
  }
  if (*(void **)(this + 0x2a0) != (void *)0x0) {
    if (*(int *)(this + 0x298) != 0) {
      *(undefined4 *)(this + 0x298) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2a0),false);
  }
  if (*(void **)(this + 0x290) != (void *)0x0) {
    if (*(int *)(this + 0x288) != 0) {
      *(undefined4 *)(this + 0x288) = 0;
    }
    Memory::free_static(*(void **)(this + 0x290),false);
  }
  if (*(uint *)(this + 0x1fc) < (uint)(*(int *)(this + 0x208) * *(int *)(this + 0x1f8))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_50 = 0;
      local_40 = 0x33;
      local_48 = "N18RendererCanvasCull4Item22VisibilityNotifierDataE";
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String_conflict *)&local_48,(String_conflict *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String_conflict *)&local_48,0,0);
      pcVar4 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar7 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x1f8) != 0) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x1e8) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x1f0) + lVar2),false);
    } while ((uint)lVar7 < *(uint *)(this + 0x1f8));
    Memory::free_static(*(void **)(this + 0x1e8),false);
    Memory::free_static(*(void **)(this + 0x1f0),false);
  }
  *(undefined ***)(this + 0x170) = &PTR__RID_Alloc_001234a8;
  uVar9 = *(uint *)(this + 400);
  if (uVar9 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar9);
    print_error((String_conflict *)&local_48);
    pcVar4 = local_48;
    lVar7 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
        lVar7 = local_50;
      }
    }
    local_50 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  uVar9 = *(uint *)(this + 0x18c);
  uVar3 = *(uint *)(this + 0x188);
  lVar7 = 0;
  if (uVar3 <= uVar9) {
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x178) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x180) + lVar2),false);
    } while ((uint)lVar7 < uVar9 / uVar3);
  }
  if (*(void **)(this + 0x178) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x178),false);
    Memory::free_static(*(void **)(this + 0x180),false);
  }
  *(undefined ***)(this + 0x118) = &PTR__RID_Alloc_00123488;
  uVar9 = *(uint *)(this + 0x138);
  if (uVar9 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x134);
    uVar9 = *(uint *)(this + 0x130);
    puVar6 = *(undefined8 **)(this + 0x120);
LAB_00109fe4:
    if ((uint)uVar5 < uVar9) goto LAB_0010a034;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar6[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x128) + lVar2),false);
      if ((uint)(uVar5 / uVar9) <= (uint)lVar7) break;
      puVar6 = *(undefined8 **)(this + 0x120);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar9);
    print_error((String_conflict *)&local_48);
    pcVar4 = local_48;
    lVar7 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
        lVar7 = local_50;
      }
    }
    local_50 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar9 = *(uint *)(this + 0x130);
    puVar6 = *(undefined8 **)(this + 0x120);
    if (*(int *)(this + 0x134) != 0) {
      uVar8 = 0;
      do {
        this_00 = (Item *)((uVar8 % (ulong)uVar9) * 0x298 + puVar6[uVar8 / uVar9]);
        if (-1 < *(int *)(this_00 + 0x290)) {
          Item::~Item(this_00);
          uVar9 = *(uint *)(this + 0x130);
          puVar6 = *(undefined8 **)(this + 0x120);
        }
        uVar5 = (ulong)*(uint *)(this + 0x134);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
      goto LAB_00109fe4;
    }
    if (uVar9 != 0) goto LAB_0010a034;
    Memory::free_static((void *)*puVar6,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x128),false);
  }
  puVar6 = *(undefined8 **)(this + 0x120);
LAB_0010a034:
  if (puVar6 != (undefined8 *)0x0) {
    Memory::free_static(puVar6,false);
    Memory::free_static(*(void **)(this + 0x128),false);
  }
  RID_Alloc<RendererCanvasCull::Canvas,true>::~RID_Alloc
            ((RID_Alloc<RendererCanvasCull::Canvas,true> *)(this + 0xc0));
  *(undefined ***)(this + 0x68) = &PTR__RID_Alloc_00123448;
  uVar9 = *(uint *)(this + 0x88);
  if (uVar9 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar9);
    print_error((String_conflict *)&local_48);
    pcVar4 = local_48;
    lVar7 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
        lVar7 = local_50;
      }
    }
    local_50 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  uVar9 = *(uint *)(this + 0x84);
  uVar3 = *(uint *)(this + 0x80);
  lVar7 = 0;
  if (uVar3 <= uVar9) {
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x70) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x78) + lVar2),false);
    } while ((uint)lVar7 < uVar9 / uVar3);
  }
  if (*(void **)(this + 0x70) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x70),false);
    Memory::free_static(*(void **)(this + 0x78),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true>::~RID_Alloc
            ((RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true> *)(this + 0x10));
  return;
}



/* RendererCanvasCull::canvas_allocate() */

void __thiscall RendererCanvasCull::canvas_allocate(RendererCanvasCull *this)

{
  RID_Alloc<RendererCanvasCull::Canvas,true>::allocate_rid
            ((RID_Alloc<RendererCanvasCull::Canvas,true> *)(this + 0xc0));
  return;
}



/* RendererCanvasCull::canvas_item_allocate() */

void __thiscall RendererCanvasCull::canvas_item_allocate(RendererCanvasCull *this)

{
  RID_Alloc<RendererCanvasCull::Item,true>::allocate_rid
            ((RID_Alloc<RendererCanvasCull::Item,true> *)(this + 0x118));
  return;
}



/* RendererCanvasCull::canvas_light_allocate() */

void __thiscall RendererCanvasCull::canvas_light_allocate(RendererCanvasCull *this)

{
  RID_Alloc<RendererCanvasRender::Light,true>::allocate_rid
            ((RID_Alloc<RendererCanvasRender::Light,true> *)(this + 0x170));
  return;
}



/* RendererCanvasCull::canvas_light_occluder_allocate() */

void __thiscall RendererCanvasCull::canvas_light_occluder_allocate(RendererCanvasCull *this)

{
  RID_Alloc<RendererCanvasRender::LightOccluderInstance,true>::allocate_rid
            ((RID_Alloc<RendererCanvasRender::LightOccluderInstance,true> *)(this + 0x68));
  return;
}



/* RendererCanvasCull::canvas_occluder_polygon_allocate() */

void __thiscall RendererCanvasCull::canvas_occluder_polygon_allocate(RendererCanvasCull *this)

{
  RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true>::allocate_rid
            ((RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true> *)(this + 0x10));
  return;
}



/* RendererCanvasCull::free(RID) */

undefined8 __thiscall RendererCanvasCull::free(RendererCanvasCull *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  LightOccluderInstance **ppLVar8;
  void *pvVar9;
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  code *pcVar54;
  int iVar55;
  uint uVar56;
  int iVar57;
  uint uVar58;
  ulong uVar59;
  undefined8 uVar60;
  long lVar61;
  long lVar62;
  uint *puVar63;
  long lVar64;
  long lVar65;
  uint uVar66;
  uint uVar67;
  undefined8 *puVar68;
  ulong uVar69;
  long *plVar70;
  uint uVar71;
  uint *puVar72;
  uint uVar73;
  uint *puVar74;
  ulong uVar75;
  Light *pLVar76;
  uint *puVar77;
  long *plVar78;
  Canvas *this_00;
  Item *pIVar79;
  pthread_mutex_t *__mutex_00;
  ulong *puVar80;
  ulong uVar81;
  undefined8 in_R11;
  uint uVar82;
  ulong uVar83;
  ulong uVar84;
  long lVar85;
  long lVar86;
  long in_FS_OFFSET;
  Light *local_48;
  long local_40;
  
  __mutex = (pthread_mutex_t *)(this + 0xf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar55 = pthread_mutex_lock(__mutex);
  if (iVar55 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar55);
  }
  uVar56 = (uint)param_2;
  uVar58 = (uint)(param_2 >> 0x20);
  if ((uVar56 < *(uint *)(this + 0xdc)) && (param_2 >> 0x20 != 0x7fffffff)) {
    if (uVar58 == (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                             *(long *)(*(long *)(this + 200) +
                                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8)
                            + 0xd8) & 0x7fffffff)) {
      pthread_mutex_unlock(__mutex);
      if ((param_2 != 0) && (uVar56 < *(uint *)(this + 0xdc))) {
        puVar68 = (undefined8 *)
                  (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                  *(long *)(*(long *)(this + 200) +
                           ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8));
        uVar7 = *(uint *)(puVar68 + 0x1b);
        if (uVar58 == uVar7) {
          uVar59 = param_2 * 0x3ffff - 1;
LAB_0010a7cd:
          uVar58 = *(uint *)((long)puVar68 + 0x24);
LAB_0010a7d5:
          if (uVar58 == 0) {
LAB_0010ad70:
            lVar86 = puVar68[0x16];
            if ((lVar86 != 0) && (lVar85 = 0, 0 < *(long *)(lVar86 + -8))) {
              do {
                lVar61 = lVar85 * 8;
                lVar85 = lVar85 + 1;
                *(undefined8 *)(*(long *)(lVar86 + lVar61) + 0x148) = 0;
              } while (lVar85 < *(long *)(lVar86 + -8));
            }
            iVar55 = *(int *)((long)puVar68 + 0x4c);
            if (iVar55 != 0) {
              plVar70 = (long *)puVar68[5];
              iVar57 = 0;
              while( true ) {
                iVar57 = iVar57 + 1;
                *(undefined8 *)(*plVar70 + 0x88) = 0;
                if (iVar55 <= iVar57) break;
                plVar70 = plVar70 + 1;
              }
            }
            iVar55 = *(int *)((long)puVar68 + 0x9c);
            if (iVar55 != 0) {
              plVar70 = (long *)puVar68[0xf];
              iVar57 = 0;
              while( true ) {
                iVar57 = iVar57 + 1;
                *(undefined8 *)(*plVar70 + 8) = 0;
                if (iVar55 <= iVar57) break;
                plVar70 = plVar70 + 1;
              }
            }
            iVar55 = pthread_mutex_lock(__mutex);
            if (iVar55 != 0) goto LAB_0010bf05;
            __mutex_00 = __mutex;
            if (*(uint *)(this + 0xdc) <= uVar56) goto LAB_0010b57c;
            uVar59 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8);
            lVar86 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0;
            this_00 = (Canvas *)(*(long *)(*(long *)(this + 200) + uVar59 * 8) + lVar86);
            uVar58 = *(uint *)(this_00 + 0xd8);
            if ((int)uVar58 < 0) goto LAB_0010b79b;
            if (uVar7 != uVar58) goto LAB_0010b636;
            Canvas::~Canvas(this_00);
            lVar85 = *(long *)(this + 0xd0);
            *(undefined4 *)(*(long *)(*(long *)(this + 200) + uVar59 * 8) + 0xd8 + lVar86) =
                 0xffffffff;
            uVar58 = *(int *)(this + 0xe0) - 1;
            *(uint *)(this + 0xe0) = uVar58;
            *(uint *)(*(long *)(lVar85 + ((ulong)uVar58 / (ulong)*(uint *)(this + 0xd8)) * 8) +
                     ((ulong)uVar58 % (ulong)*(uint *)(this + 0xd8)) * 4) = uVar56;
            pthread_mutex_unlock(__mutex);
          }
          else {
            puVar80 = (ulong *)*puVar68;
            while (*puVar80 != 0) {
              uVar83 = *puVar80;
              if (*(uint *)(RenderingServerGlobals::viewport + 0x5c) <= (uint)uVar83) break;
              lVar86 = ((uVar83 & 0xffffffff) %
                       (ulong)*(uint *)(RenderingServerGlobals::viewport + 0x58)) * 0x2f0 +
                       *(long *)(*(long *)(RenderingServerGlobals::viewport + 0x48) +
                                ((uVar83 & 0xffffffff) /
                                (ulong)*(uint *)(RenderingServerGlobals::viewport + 0x58)) * 8);
              if (*(int *)(lVar86 + 0x2e8) != (int)(uVar83 >> 0x20)) {
                if (*(int *)(lVar86 + 0x2e8) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                break;
              }
              lVar85 = *(long *)(lVar86 + 0x298);
              if ((lVar85 == 0) || (*(int *)(lVar86 + 700) == 0)) {
LAB_0010b208:
                _err_print_error(&_LC189,"servers/rendering/renderer_canvas_cull.cpp",0xa00,
                                 "Condition \"!E\" is true. Returning: true",0,0);
                goto LAB_0010af88;
              }
              lVar61 = *(long *)(lVar86 + 0x2a0);
              uVar58 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar86 + 0x2b8) * 4);
              uVar75 = CONCAT44(0,uVar58);
              lVar64 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar86 + 0x2b8) * 8);
              uVar83 = (uVar59 ^ uVar59 >> 0x1f) * 0x15;
              uVar83 = (uVar83 ^ uVar83 >> 0xb) * 0x41;
              uVar83 = uVar83 >> 0x16 ^ uVar83;
              uVar84 = uVar83 & 0xffffffff;
              if ((int)uVar83 == 0) {
                uVar84 = 1;
              }
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar84 * lVar64;
              auVar32._8_8_ = 0;
              auVar32._0_8_ = uVar75;
              uVar83 = SUB168(auVar10 * auVar32,8);
              uVar73 = *(uint *)(lVar61 + uVar83 * 4);
              if (uVar73 == 0) goto LAB_0010b208;
              uVar66 = SUB164(auVar10 * auVar32,8);
              uVar82 = 0;
              uVar69 = uVar83;
              uVar71 = uVar73;
              uVar67 = uVar66;
              while ((uVar71 != (uint)uVar84 ||
                     (param_2 != *(ulong *)(*(long *)(lVar85 + uVar69 * 8) + 0x10)))) {
                uVar82 = uVar82 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (ulong)(uVar67 + 1) * lVar64;
                auVar33._8_8_ = 0;
                auVar33._0_8_ = uVar75;
                uVar69 = SUB168(auVar11 * auVar33,8);
                uVar71 = *(uint *)(lVar61 + uVar69 * 4);
                uVar67 = SUB164(auVar11 * auVar33,8);
                if ((uVar71 == 0) ||
                   (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar71 * lVar64, auVar34._8_8_ = 0,
                   auVar34._0_8_ = uVar75, auVar13._8_8_ = 0,
                   auVar13._0_8_ = (ulong)((uVar58 + uVar67) - SUB164(auVar12 * auVar34,8)) * lVar64
                   , auVar35._8_8_ = 0, auVar35._0_8_ = uVar75, SUB164(auVar13 * auVar35,8) < uVar82
                   )) goto LAB_0010b208;
              }
              uVar69 = (ulong)uVar66;
              if (*(long *)(lVar85 + (ulong)uVar67 * 8) == 0) goto LAB_0010b208;
              uVar71 = 0;
LAB_0010a9c3:
              uVar81 = uVar69 & 0xffffffff;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = (ulong)((int)uVar69 + 1) * lVar64;
              auVar38._8_8_ = 0;
              auVar38._0_8_ = uVar75;
              uVar69 = SUB168(auVar16 * auVar38,8);
              uVar67 = SUB164(auVar16 * auVar38,8);
              if ((uVar73 != (uint)uVar84) ||
                 (param_2 != *(ulong *)(*(long *)(lVar85 + uVar83 * 8) + 0x10))) goto LAB_0010a988;
              puVar74 = (uint *)(lVar61 + uVar69 * 4);
              uVar83 = (ulong)uVar67;
              uVar84 = (ulong)*puVar74;
              if ((*puVar74 != 0) &&
                 (auVar17._8_8_ = 0, auVar17._0_8_ = uVar84 * lVar64, auVar39._8_8_ = 0,
                 auVar39._0_8_ = uVar75, auVar18._8_8_ = 0,
                 auVar18._0_8_ = (ulong)((uVar58 + uVar67) - SUB164(auVar17 * auVar39,8)) * lVar64,
                 auVar40._8_8_ = 0, auVar40._0_8_ = uVar75, SUB164(auVar18 * auVar40,8) != 0)) {
                while( true ) {
                  puVar72 = (uint *)(lVar61 + uVar81 * 4);
                  *puVar74 = *puVar72;
                  puVar1 = (undefined8 *)(lVar85 + uVar69 * 8);
                  *puVar72 = (uint)uVar84;
                  puVar2 = (undefined8 *)(lVar85 + uVar81 * 8);
                  uVar60 = *puVar1;
                  *puVar1 = *puVar2;
                  *puVar2 = uVar60;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = (ulong)((int)uVar83 + 1) * lVar64;
                  auVar43._8_8_ = 0;
                  auVar43._0_8_ = uVar75;
                  uVar69 = SUB168(auVar21 * auVar43,8);
                  puVar74 = (uint *)(lVar61 + uVar69 * 4);
                  uVar84 = (ulong)*puVar74;
                  uVar81 = uVar83;
                  if ((*puVar74 == 0) ||
                     (auVar19._8_8_ = 0, auVar19._0_8_ = uVar84 * lVar64, auVar41._8_8_ = 0,
                     auVar41._0_8_ = uVar75, auVar20._8_8_ = 0,
                     auVar20._0_8_ =
                          (ulong)((SUB164(auVar21 * auVar43,8) + uVar58) -
                                 SUB164(auVar19 * auVar41,8)) * lVar64, auVar42._8_8_ = 0,
                     auVar42._0_8_ = uVar75, SUB164(auVar20 * auVar42,8) == 0)) break;
                  uVar83 = uVar69 & 0xffffffff;
                }
              }
              *(undefined4 *)(lVar61 + uVar81 * 4) = 0;
              plVar70 = (long *)(lVar85 + uVar81 * 8);
              plVar78 = (long *)*plVar70;
              if (*(long **)(lVar86 + 0x2a8) == plVar78) {
                *(long *)(lVar86 + 0x2a8) = *plVar78;
                plVar78 = (long *)*plVar70;
              }
              if (plVar78 == *(long **)(lVar86 + 0x2b0)) {
                *(long *)(lVar86 + 0x2b0) = plVar78[1];
                plVar78 = (long *)*plVar70;
              }
              if ((long *)plVar78[1] != (long *)0x0) {
                *(long *)plVar78[1] = *plVar78;
                plVar78 = (long *)*plVar70;
              }
              if (*plVar78 != 0) {
                *(long *)(*plVar78 + 8) = plVar78[1];
                plVar78 = (long *)*plVar70;
              }
              Memory::free_static(plVar78,false);
              *(undefined8 *)(*(long *)(lVar86 + 0x298) + uVar81 * 8) = 0;
              *(int *)(lVar86 + 700) = *(int *)(lVar86 + 700) + -1;
LAB_0010ab1a:
              if (*(int *)((long)puVar68 + 0x24) == 0) goto LAB_0010ad70;
              puVar80 = (ulong *)*puVar68;
              lVar86 = puVar68[3];
              uVar58 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar68 + 4) * 4);
              uVar84 = CONCAT44(0,uVar58);
              lVar85 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(puVar68 + 4) * 8);
              uVar83 = *puVar80 * 0x3ffff - 1;
              uVar83 = (uVar83 ^ uVar83 >> 0x1f) * 0x15;
              uVar83 = (uVar83 ^ uVar83 >> 0xb) * 0x41;
              uVar83 = uVar83 >> 0x16 ^ uVar83;
              uVar75 = uVar83 & 0xffffffff;
              if ((int)uVar83 == 0) {
                uVar75 = 1;
              }
              auVar22._8_8_ = 0;
              auVar22._0_8_ = uVar75 * lVar85;
              auVar44._8_8_ = 0;
              auVar44._0_8_ = uVar84;
              lVar61 = SUB168(auVar22 * auVar44,8);
              uVar73 = *(uint *)(lVar86 + lVar61 * 4);
              iVar55 = SUB164(auVar22 * auVar44,8);
              if (uVar73 != 0) {
                uVar71 = 0;
                do {
                  if (uVar73 == (uint)uVar75) {
                    lVar64 = puVar68[1];
                    uVar73 = *(uint *)(lVar64 + lVar61 * 4);
                    if (*puVar80 == puVar80[uVar73]) {
                      lVar65 = puVar68[2];
                      puVar74 = (uint *)(lVar65 + (ulong)uVar73 * 4);
                      uVar71 = *puVar74;
                      auVar26._8_8_ = 0;
                      auVar26._0_8_ = (ulong)(uVar71 + 1) * lVar85;
                      auVar48._8_8_ = 0;
                      auVar48._0_8_ = uVar84;
                      lVar61 = SUB168(auVar26 * auVar48,8) * 4;
                      uVar67 = SUB164(auVar26 * auVar48,8);
                      puVar72 = (uint *)(lVar86 + lVar61);
                      if ((*puVar72 == 0) ||
                         (auVar27._8_8_ = 0, auVar27._0_8_ = (ulong)*puVar72 * lVar85,
                         auVar49._8_8_ = 0, auVar49._0_8_ = uVar84, auVar28._8_8_ = 0,
                         auVar28._0_8_ =
                              (ulong)((uVar67 + uVar58) - SUB164(auVar27 * auVar49,8)) * lVar85,
                         auVar50._8_8_ = 0, auVar50._0_8_ = uVar84, uVar66 = uVar71,
                         SUB164(auVar28 * auVar50,8) == 0)) goto LAB_0010ad1a;
                      goto LAB_0010acb9;
                    }
                  }
                  uVar71 = uVar71 + 1;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = (ulong)(iVar55 + 1) * lVar85;
                  auVar45._8_8_ = 0;
                  auVar45._0_8_ = uVar84;
                  lVar61 = SUB168(auVar23 * auVar45,8);
                  uVar73 = *(uint *)(lVar86 + lVar61 * 4);
                  iVar55 = SUB164(auVar23 * auVar45,8);
                } while ((uVar73 != 0) &&
                        (auVar24._8_8_ = 0, auVar24._0_8_ = (ulong)uVar73 * lVar85,
                        auVar46._8_8_ = 0, auVar46._0_8_ = uVar84, auVar25._8_8_ = 0,
                        auVar25._0_8_ =
                             (ulong)((uVar58 + iVar55) - SUB164(auVar24 * auVar46,8)) * lVar85,
                        auVar47._8_8_ = 0, auVar47._0_8_ = uVar84,
                        uVar71 <= SUB164(auVar25 * auVar47,8)));
              }
            }
            _err_print_error(&_LC189,"servers/rendering/renderer_canvas_cull.cpp",0x9fd,
                             "Parameter \"vp\" is null.",0,0);
          }
          goto LAB_0010af88;
        }
        if (uVar7 + 0x80000000 < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      _err_print_error(&_LC189,"servers/rendering/renderer_canvas_cull.cpp",0x9f9,
                       "Parameter \"canvas\" is null.",0,0);
      uVar60 = 0;
      goto LAB_0010a713;
    }
    pthread_mutex_unlock(__mutex);
  }
  else {
    pthread_mutex_unlock(__mutex);
  }
  __mutex_00 = (pthread_mutex_t *)(this + 0x148);
  iVar55 = pthread_mutex_lock(__mutex_00);
  if (iVar55 != 0) goto LAB_0010bf05;
  if ((uVar56 < *(uint *)(this + 0x134)) && (param_2 >> 0x20 != 0x7fffffff)) {
    if (uVar58 != (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                             *(long *)(*(long *)(this + 0x120) +
                                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8)
                            + 0x290) & 0x7fffffff)) {
      pthread_mutex_unlock(__mutex_00);
      goto LAB_0010a5bb;
    }
    pthread_mutex_unlock(__mutex_00);
    if ((param_2 == 0) || (*(uint *)(this + 0x134) <= uVar56)) {
LAB_0010afa4:
      _err_print_error(&_LC189,"servers/rendering/renderer_canvas_cull.cpp",0xa16,
                       "Parameter \"canvas_item\" is null.",0,0);
    }
    else {
      lVar86 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
               *(long *)(*(long *)(this + 0x120) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
      uVar7 = *(uint *)(lVar86 + 0x290);
      if (uVar58 != uVar7) {
        if (uVar7 + 0x80000000 < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0010afa4;
      }
      InterpolationData::notify_free_canvas_item((InterpolationData *)(this + 0x288),param_2,lVar86)
      ;
      if (*(long *)(lVar86 + 0x148) != 0) {
        iVar55 = pthread_mutex_lock(__mutex);
        if (iVar55 != 0) goto LAB_0010bf05;
        uVar59 = *(ulong *)(lVar86 + 0x148);
        if ((((uint)uVar59 < *(uint *)(this + 0xdc)) && (uVar59 >> 0x20 != 0x7fffffff)) &&
           ((*(uint *)(((uVar59 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                       *(long *)(*(long *)(this + 200) +
                                ((uVar59 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8) + 0xd8)
            & 0x7fffffff) == (uint)(uVar59 >> 0x20))) {
          pthread_mutex_unlock(__mutex);
          if (*(long *)(lVar86 + 0x148) == 0) {
LAB_0011874c:
                    /* WARNING: Does not return */
            pcVar54 = (code *)invalidInstructionException();
            (*pcVar54)();
          }
          uVar59 = *(ulong *)(lVar86 + 0x148);
          if (*(uint *)(this + 0xdc) <= (uint)uVar59) goto LAB_0011874c;
          lVar85 = ((uVar59 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                   *(long *)(*(long *)(this + 200) +
                            ((uVar59 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
          if (*(int *)(lVar85 + 0xd8) != (int)(uVar59 >> 0x20)) {
            if (*(int *)(lVar85 + 0xd8) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,uVar7);
            }
            goto LAB_0011874c;
          }
          lVar61 = *(long *)(lVar85 + 0xb0);
          if (lVar61 != 0) {
            lVar64 = *(long *)(lVar61 + -8);
            lVar65 = 0;
            do {
              lVar62 = lVar65;
              if (lVar64 <= lVar62) goto LAB_0010b027;
              lVar65 = lVar62 + 1;
            } while (lVar86 != *(long *)(lVar61 + lVar62 * 8));
            lVar61 = (long)(int)lVar62;
            if (lVar61 < lVar64) {
              CowData<RendererCanvasCull::Canvas::ChildItem>::_copy_on_write
                        ((CowData<RendererCanvasCull::Canvas::ChildItem> *)(lVar85 + 0xb0));
              lVar64 = *(long *)(lVar85 + 0xb0);
              if (lVar64 == 0) {
                lVar65 = -1;
              }
              else {
                lVar65 = *(long *)(lVar64 + -8) + -1;
                if (lVar61 < lVar65) {
                  memmove((void *)(lVar64 + lVar61 * 8),(void *)(lVar64 + 8 + lVar61 * 8),
                          (lVar65 - lVar61) * 8);
                }
              }
              CowData<RendererCanvasCull::Canvas::ChildItem>::resize<false>
                        ((CowData<RendererCanvasCull::Canvas::ChildItem> *)(lVar85 + 0xb0),lVar65);
            }
            else {
              _err_print_index_error
                        ("remove_at","./core/templates/cowdata.h",0xe4,lVar61,lVar64,"p_index",
                         "size()","",false,false);
            }
          }
        }
        else {
          pthread_mutex_unlock(__mutex);
          iVar55 = pthread_mutex_lock(__mutex_00);
          if (iVar55 != 0) goto LAB_0010bf05;
          uVar59 = *(ulong *)(lVar86 + 0x148);
          if ((((uint)uVar59 < *(uint *)(this + 0x134)) && (uVar59 >> 0x20 != 0x7fffffff)) &&
             ((*(uint *)(((uVar59 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                         *(long *)(*(long *)(this + 0x120) +
                                  ((uVar59 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8) +
                        0x290) & 0x7fffffff) == (uint)(uVar59 >> 0x20))) {
            pthread_mutex_unlock(__mutex_00);
            if (*(long *)(lVar86 + 0x148) == 0) {
LAB_0010bf47:
                    /* WARNING: Does not return */
              pcVar54 = (code *)invalidInstructionException();
              (*pcVar54)();
            }
            uVar59 = *(ulong *)(lVar86 + 0x148);
            if (*(uint *)(this + 0x134) <= (uint)uVar59) goto LAB_0010bf47;
            pIVar79 = (Item *)(((uVar59 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                              *(long *)(*(long *)(this + 0x120) +
                                       ((uVar59 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8)
                              );
            if (*(int *)(pIVar79 + 0x290) != (int)(uVar59 >> 0x20)) {
              if (*(int *)(pIVar79 + 0x290) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,this);
              }
              goto LAB_0010bf47;
            }
            lVar85 = *(long *)(pIVar79 + 0x1d8);
            if ((lVar85 != 0) && (lVar61 = *(long *)(lVar85 + -8), 0 < lVar61)) {
              lVar64 = 0;
              do {
                if (lVar86 == *(long *)(lVar85 + lVar64 * 8)) {
                  if (lVar64 < lVar61) {
                    CowData<RendererCanvasCull::Item*>::_copy_on_write
                              ((CowData<RendererCanvasCull::Item*> *)(pIVar79 + 0x1d8));
                    lVar85 = *(long *)(pIVar79 + 0x1d8);
                    if (lVar85 == 0) {
                      lVar61 = -1;
                    }
                    else {
                      lVar61 = *(long *)(lVar85 + -8) + -1;
                      if (lVar64 < lVar61) {
                        memmove((void *)(lVar85 + lVar64 * 8),(void *)(lVar85 + 8 + lVar64 * 8),
                                (lVar61 - lVar64) * 8);
                      }
                    }
                    CowData<RendererCanvasCull::Item*>::resize<false>
                              ((CowData<RendererCanvasCull::Item*> *)(pIVar79 + 0x1d8),lVar61);
                  }
                  else {
                    _err_print_index_error
                              ("remove_at","./core/templates/cowdata.h",0xe4,lVar64,lVar61,"p_index"
                               ,"size()","",false,false);
                  }
                  break;
                }
                lVar64 = lVar64 + 1;
              } while (lVar61 != lVar64);
            }
            if (pIVar79[0x165] != (Item)0x0) {
              _mark_ysort_dirty(this,pIVar79);
            }
          }
          else {
            pthread_mutex_unlock(__mutex_00);
          }
        }
      }
LAB_0010b027:
      lVar85 = *(long *)(lVar86 + 0x1d8);
      if ((lVar85 != 0) && (lVar61 = 0, 0 < *(long *)(lVar85 + -8))) {
        do {
          lVar64 = lVar61 * 8;
          lVar61 = lVar61 + 1;
          *(undefined8 *)(*(long *)(lVar85 + lVar64) + 0x148) = 0;
        } while (lVar61 < *(long *)(lVar85 + -8));
      }
      lVar85 = *(long *)(lVar86 + 0x1e0);
      if (lVar85 != 0) {
        plVar70 = *(long **)(lVar85 + 0x40);
        if (plVar70 != (long *)0x0) {
          lVar61 = *(long *)(lVar85 + 0x50);
          if (lVar61 != 0) {
            *(undefined8 *)(lVar61 + 0x18) = *(undefined8 *)(lVar85 + 0x58);
          }
          lVar64 = *(long *)(lVar85 + 0x58);
          if (lVar64 != 0) {
            *(long *)(lVar64 + 0x10) = lVar61;
          }
          if (lVar85 + 0x40 == *plVar70) {
            *plVar70 = *(long *)(lVar85 + 0x50);
          }
          if (lVar85 + 0x40 == plVar70[1]) {
            plVar70[1] = lVar64;
          }
        }
        Callable::~Callable((Callable *)(lVar85 + 0x20));
        Callable::~Callable((Callable *)(lVar85 + 0x10));
        uVar58 = *(uint *)(this + 0x1fc);
        *(long *)(*(long *)(*(long *)(this + 0x1f0) +
                           (ulong)(uVar58 >> ((byte)*(undefined4 *)(this + 0x200) & 0x1f)) * 8) +
                 (ulong)(uVar58 & *(uint *)(this + 0x204)) * 8) = lVar85;
        *(uint *)(this + 0x1fc) = uVar58 + 1;
      }
      canvas_item_set_material(this,*(undefined8 *)(lVar86 + 0x150),0);
      lVar85 = *(long *)this;
      while (lVar85 != 0) {
        _update_dirty_item(this,*(Item **)(lVar85 + 8));
        lVar85 = *(long *)this;
      }
      (**(code **)(*RenderingServerGlobals::utilities + 0x98))();
      InstanceUniforms::free(lVar86 + 0x230);
      if (*(void **)(lVar86 + 0x40) != (void *)0x0) {
        Memory::free_static(*(void **)(lVar86 + 0x40),false);
        *(undefined8 *)(lVar86 + 0x40) = 0;
      }
      iVar55 = pthread_mutex_lock(__mutex_00);
      if (iVar55 != 0) goto LAB_0010bf05;
      if (*(uint *)(this + 0x134) <= uVar56) goto LAB_0010b57c;
      uVar59 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130);
      lVar85 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298;
      pIVar79 = (Item *)(*(long *)(*(long *)(this + 0x120) + uVar59 * 8) + lVar85);
      uVar58 = *(uint *)(pIVar79 + 0x290);
      if ((int)uVar58 < 0) {
LAB_0010b79b:
        pthread_mutex_unlock(__mutex_00);
        _err_print_error(&_LC189,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0,0);
      }
      else if (uVar7 == uVar58) {
        Item::~Item(pIVar79);
        lVar86 = *(long *)(this + 0x128);
        *(undefined4 *)(*(long *)(*(long *)(this + 0x120) + uVar59 * 8) + 0x290 + lVar85) =
             0xffffffff;
        uVar58 = *(int *)(this + 0x138) - 1;
        *(uint *)(this + 0x138) = uVar58;
        uVar59 = (ulong)uVar58 / (ulong)*(uint *)(this + 0x130);
        uVar58 = uVar58 % *(uint *)(this + 0x130);
LAB_0010b1ec:
        *(uint *)(*(long *)(lVar86 + uVar59 * 8) + (ulong)uVar58 * 4) = uVar56;
        pthread_mutex_unlock(__mutex_00);
      }
      else {
LAB_0010b636:
        pthread_mutex_unlock(__mutex_00);
        _err_print_error(&_LC189,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0)
        ;
      }
    }
  }
  else {
    pthread_mutex_unlock(__mutex_00);
LAB_0010a5bb:
    __mutex_00 = (pthread_mutex_t *)(this + 0x1a0);
    iVar55 = pthread_mutex_lock(__mutex_00);
    if (iVar55 != 0) goto LAB_0010bf05;
    if ((uVar56 < *(uint *)(this + 0x18c)) && (param_2 >> 0x20 != 0x7fffffff)) {
      if (uVar58 == (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
                               *(long *)(*(long *)(this + 0x178) +
                                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) *
                                        8) + 0x130) & 0x7fffffff)) {
        pthread_mutex_unlock(__mutex_00);
        if ((param_2 != 0) && (uVar56 < *(uint *)(this + 0x18c))) {
          pLVar76 = (Light *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
                             *(long *)(*(long *)(this + 0x178) +
                                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8)
                             );
          uVar7 = *(uint *)(pLVar76 + 0x130);
          if (uVar58 == uVar7) {
            local_48 = pLVar76;
            InterpolationData::notify_free_canvas_light
                      ((InterpolationData *)(this + 0x288),param_2,pLVar76);
            if (*(long *)(pLVar76 + 0x88) != 0) {
              uVar59 = *(ulong *)(pLVar76 + 0x88);
              pLVar76 = local_48;
              if ((uint)uVar59 < *(uint *)(this + 0xdc)) {
                lVar86 = ((uVar59 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                         *(long *)(*(long *)(this + 200) +
                                  ((uVar59 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
                iVar55 = *(int *)(lVar86 + 0xd8);
                if (iVar55 == (int)(uVar59 >> 0x20)) {
                  HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
                  ::erase((HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
                           *)(lVar86 + 0x28),&local_48);
                }
                else if (iVar55 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
            }
            (**(code **)(*RenderingServerGlobals::canvas_render + 0x68))
                      (RenderingServerGlobals::canvas_render,*(undefined8 *)(pLVar76 + 0x118));
            iVar55 = pthread_mutex_lock(__mutex_00);
            if (iVar55 != 0) goto LAB_0010bf05;
            if (uVar56 < *(uint *)(this + 0x18c)) {
              lVar86 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0x138 +
                       *(long *)(*(long *)(this + 0x178) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
              uVar58 = *(uint *)(lVar86 + 0x130);
              if (-1 < (int)uVar58) {
                if (uVar7 != uVar58) goto LAB_0010b636;
                *(undefined4 *)(lVar86 + 0x130) = 0xffffffff;
                lVar86 = *(long *)(this + 0x180);
                uVar58 = *(int *)(this + 400) - 1;
                *(uint *)(this + 400) = uVar58;
                uVar59 = (ulong)uVar58 / (ulong)*(uint *)(this + 0x188);
                uVar58 = uVar58 % *(uint *)(this + 0x188);
                goto LAB_0010b1ec;
              }
              goto LAB_0010b79b;
            }
            goto LAB_0010b57c;
          }
          if (uVar7 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error(&_LC189,"servers/rendering/renderer_canvas_cull.cpp",0xa3c,
                         "Parameter \"canvas_light\" is null.",0,0);
        goto LAB_0010af88;
      }
      pthread_mutex_unlock(__mutex_00);
    }
    else {
      pthread_mutex_unlock(__mutex_00);
    }
    __mutex_00 = (pthread_mutex_t *)(this + 0x98);
    iVar55 = pthread_mutex_lock(__mutex_00);
    if (iVar55 != 0) goto LAB_0010bf05;
    if (uVar56 < *(uint *)(this + 0x84)) {
      if (param_2 >> 0x20 == 0x7fffffff) goto LAB_0010b56c;
      if (uVar58 == (*(uint *)(*(long *)(*(long *)(this + 0x70) +
                                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8
                                        ) +
                               ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98 +
                              0x90) & 0x7fffffff)) {
        pthread_mutex_unlock(__mutex_00);
        if ((param_2 != 0) && (uVar56 < *(uint *)(this + 0x84))) {
          pLVar76 = (Light *)(*(long *)(*(long *)(this + 0x70) +
                                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8)
                             + ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98);
          uVar7 = *(uint *)(pLVar76 + 0x90);
          if (uVar58 == uVar7) {
            local_48 = pLVar76;
            InterpolationData::notify_free_canvas_light_occluder
                      ((InterpolationData *)(this + 0x288),param_2,pLVar76);
            if (*(long *)(pLVar76 + 0x10) != 0) {
              uVar59 = *(ulong *)(pLVar76 + 0x10);
              pLVar76 = local_48;
              if ((uint)uVar59 < *(uint *)(this + 0x2c)) {
                lVar86 = ((uVar59 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50 +
                         *(long *)(*(long *)(this + 0x18) +
                                  ((uVar59 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
                iVar55 = *(int *)(lVar86 + 0x48);
                if (iVar55 == (int)(uVar59 >> 0x20)) {
                  HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
                  ::erase((HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
                           *)(lVar86 + 0x20),(LightOccluderInstance **)&local_48);
                }
                else if (iVar55 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0,param_2 >> 0x20);
                }
              }
            }
            if (*(long *)(pLVar76 + 8) != 0) {
              iVar55 = pthread_mutex_lock(__mutex);
              if (iVar55 != 0) goto LAB_0010bf05;
              uVar59 = *(ulong *)(pLVar76 + 8);
              if (((*(uint *)(this + 0xdc) <= (uint)uVar59) || (uVar59 >> 0x20 == 0x7fffffff)) ||
                 ((*(uint *)(((uVar59 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                             *(long *)(*(long *)(this + 200) +
                                      ((uVar59 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8) +
                            0xd8) & 0x7fffffff) != (uint)(uVar59 >> 0x20))) {
                pthread_mutex_unlock(__mutex);
                goto LAB_0010b706;
              }
              pthread_mutex_unlock(__mutex);
              if ((*(long *)(pLVar76 + 8) == 0) ||
                 (uVar59 = *(ulong *)(pLVar76 + 8), *(uint *)(this + 0xdc) <= (uint)uVar59)) {
LAB_0010bde8:
                lVar86 = 0;
              }
              else {
                lVar86 = ((uVar59 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xe0 +
                         *(long *)(*(long *)(this + 200) +
                                  ((uVar59 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
                if (*(int *)(lVar86 + 0xd8) != (int)(uVar59 >> 0x20)) {
                  if (*(int *)(lVar86 + 0xd8) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0,in_R11);
                  }
                  goto LAB_0010bde8;
                }
              }
              HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
              ::erase((HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
                       *)(lVar86 + 0x78),(LightOccluderInstance **)&local_48);
            }
LAB_0010b706:
            iVar55 = pthread_mutex_lock(__mutex_00);
            if (iVar55 != 0) goto LAB_0010bf05;
            if (*(uint *)(this + 0x84) <= uVar56) goto LAB_0010b57c;
            lVar86 = *(long *)(*(long *)(this + 0x70) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x80)) * 8) +
                     ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x80)) * 0x98;
            uVar58 = *(uint *)(lVar86 + 0x90);
            if ((int)uVar58 < 0) goto LAB_0010b79b;
            if (uVar7 != uVar58) goto LAB_0010b636;
            *(undefined4 *)(lVar86 + 0x90) = 0xffffffff;
            uVar58 = *(int *)(this + 0x88) - 1;
            *(uint *)(this + 0x88) = uVar58;
            *(uint *)(*(long *)(*(long *)(this + 0x78) +
                               ((ulong)uVar58 / (ulong)*(uint *)(this + 0x80)) * 8) +
                     ((ulong)uVar58 % (ulong)*(uint *)(this + 0x80)) * 4) = uVar56;
            pthread_mutex_unlock(__mutex_00);
            goto LAB_0010af88;
          }
          if (uVar7 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error(&_LC189,"servers/rendering/renderer_canvas_cull.cpp",0xa4c,
                         "Parameter \"occluder\" is null.",0,0);
        goto LAB_0010af88;
      }
      pthread_mutex_unlock(__mutex_00);
    }
    else {
LAB_0010b56c:
      pthread_mutex_unlock(__mutex_00);
    }
    __mutex_00 = (pthread_mutex_t *)(this + 0x40);
    iVar55 = pthread_mutex_lock(__mutex_00);
    if (iVar55 != 0) {
LAB_0010bf05:
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar55);
    }
    if (((*(uint *)(this + 0x2c) <= uVar56) || (param_2 >> 0x20 == 0x7fffffff)) ||
       (uVar58 != (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50 +
                             *(long *)(*(long *)(this + 0x18) +
                                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8)
                            + 0x48) & 0x7fffffff))) {
      pthread_mutex_unlock(__mutex_00);
      uVar60 = 0;
      goto LAB_0010a713;
    }
    pthread_mutex_unlock(__mutex_00);
    if ((param_2 != 0) && (uVar56 < *(uint *)(this + 0x2c))) {
      lVar86 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50 +
               *(long *)(*(long *)(this + 0x18) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
      uVar7 = *(uint *)(lVar86 + 0x48);
      if (uVar58 == uVar7) {
        (**(code **)(*RenderingServerGlobals::canvas_render + 0x68))();
        if (*(int *)(lVar86 + 0x44) != 0) {
          ppLVar8 = *(LightOccluderInstance ***)(lVar86 + 0x20);
          do {
            *(undefined8 *)(*ppLVar8 + 0x10) = 0;
            HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
            ::erase((HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
                     *)(lVar86 + 0x20),ppLVar8);
          } while (*(int *)(lVar86 + 0x44) != 0);
        }
        iVar55 = pthread_mutex_lock(__mutex_00);
        if (iVar55 != 0) goto LAB_0010bf05;
        if (uVar56 < *(uint *)(this + 0x2c)) {
          uVar59 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28);
          lVar85 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x50;
          lVar86 = *(long *)(*(long *)(this + 0x18) + uVar59 * 8) + lVar85;
          if (-1 < (int)*(uint *)(lVar86 + 0x48)) {
            if (uVar7 != *(uint *)(lVar86 + 0x48)) goto LAB_0010b636;
            pvVar9 = *(void **)(lVar86 + 0x20);
            if (pvVar9 != (void *)0x0) {
              if (*(int *)(lVar86 + 0x44) != 0) {
                if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar86 + 0x40) * 4) != 0) {
                  memset(*(void **)(lVar86 + 0x38),0,
                         (ulong)*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(lVar86 + 0x40) * 4) * 4);
                }
                *(undefined4 *)(lVar86 + 0x44) = 0;
              }
              Memory::free_static(pvVar9,false);
              Memory::free_static(*(void **)(lVar86 + 0x30),false);
              Memory::free_static(*(void **)(lVar86 + 0x28),false);
              Memory::free_static(*(void **)(lVar86 + 0x38),false);
              lVar86 = lVar85 + *(long *)(*(long *)(this + 0x18) + uVar59 * 8);
            }
            *(undefined4 *)(lVar86 + 0x48) = 0xffffffff;
            lVar86 = *(long *)(this + 0x20);
            uVar58 = *(int *)(this + 0x30) - 1;
            *(uint *)(this + 0x30) = uVar58;
            uVar59 = (ulong)uVar58 / (ulong)*(uint *)(this + 0x28);
            uVar58 = uVar58 % *(uint *)(this + 0x28);
            goto LAB_0010b1ec;
          }
          goto LAB_0010b79b;
        }
LAB_0010b57c:
        pthread_mutex_unlock(__mutex_00);
        _err_print_error(&_LC189,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0)
        ;
        goto LAB_0010af88;
      }
      if (uVar7 + 0x80000000 < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    _err_print_error(&_LC189,"servers/rendering/renderer_canvas_cull.cpp",0xa5f,
                     "Parameter \"occluder_poly\" is null.",0,0);
  }
LAB_0010af88:
  uVar60 = 1;
LAB_0010a713:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010a988:
  uVar73 = *(uint *)(lVar61 + uVar69 * 4);
  uVar71 = uVar71 + 1;
  if ((uVar73 == 0) ||
     (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar73 * lVar64, auVar36._8_8_ = 0,
     auVar36._0_8_ = uVar75, auVar15._8_8_ = 0,
     auVar15._0_8_ = (ulong)((uVar58 + uVar67) - SUB164(auVar14 * auVar36,8)) * lVar64,
     auVar37._8_8_ = 0, auVar37._0_8_ = uVar75, uVar83 = uVar69,
     SUB164(auVar15 * auVar37,8) < uVar71)) goto LAB_0010ab1a;
  goto LAB_0010a9c3;
  while (auVar29._8_8_ = 0, auVar29._0_8_ = (ulong)*puVar72 * lVar85, auVar51._8_8_ = 0,
        auVar51._0_8_ = uVar84, auVar30._8_8_ = 0,
        auVar30._0_8_ = (ulong)((uVar67 + uVar58) - SUB164(auVar29 * auVar51,8)) * lVar85,
        auVar52._8_8_ = 0, auVar52._0_8_ = uVar84, uVar66 = uVar71, SUB164(auVar30 * auVar52,8) != 0
        ) {
LAB_0010acb9:
    uVar71 = uVar67;
    puVar63 = (uint *)(lVar61 + lVar64);
    puVar3 = (uint *)(lVar64 + (ulong)uVar66 * 4);
    puVar77 = (uint *)((ulong)uVar66 * 4 + lVar86);
    puVar4 = (undefined4 *)(lVar65 + (ulong)*puVar63 * 4);
    puVar5 = (undefined4 *)(lVar65 + (ulong)*puVar3 * 4);
    uVar6 = *puVar5;
    *puVar5 = *puVar4;
    *puVar4 = uVar6;
    uVar67 = *puVar72;
    *puVar72 = *puVar77;
    *puVar77 = uVar67;
    uVar67 = *puVar63;
    *puVar63 = *puVar3;
    *puVar3 = uVar67;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = (ulong)(uVar71 + 1) * lVar85;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar84;
    lVar61 = SUB168(auVar31 * auVar53,8) * 4;
    uVar67 = SUB164(auVar31 * auVar53,8);
    puVar72 = (uint *)(lVar86 + lVar61);
    if (*puVar72 == 0) break;
  }
LAB_0010ad1a:
  *(undefined4 *)(lVar86 + (ulong)uVar71 * 4) = 0;
  uVar58 = *(int *)((long)puVar68 + 0x24) - 1;
  *(uint *)((long)puVar68 + 0x24) = uVar58;
  if (uVar73 < uVar58) goto code_r0x0010ad44;
  goto LAB_0010a7d5;
code_r0x0010ad44:
  uVar71 = *(uint *)(lVar65 + (ulong)uVar58 * 4);
  puVar80[uVar73] = puVar80[uVar58];
  *puVar74 = uVar71;
  *(uint *)(lVar64 + (ulong)*(uint *)(lVar65 + (ulong)*(uint *)((long)puVar68 + 0x24) * 4) * 4) =
       uVar73;
  goto LAB_0010a7cd;
}



/* RendererCanvasCull::finalize() */

void __thiscall RendererCanvasCull::finalize(RendererCanvasCull *this)

{
  _free_rids<RID_Owner<RendererCanvasCull::Canvas,true>>((RID_Owner *)this,(char *)(this + 0xc0));
  _free_rids<RID_Owner<RendererCanvasCull::Item,true>>((RID_Owner *)this,(char *)(this + 0x118));
  _free_rids<RID_Owner<RendererCanvasRender::Light,true>>((RID_Owner *)this,(char *)(this + 0x170));
  _free_rids<RID_Owner<RendererCanvasRender::LightOccluderInstance,true>>
            ((RID_Owner *)this,(char *)(this + 0x68));
  _free_rids<RID_Owner<RendererCanvasCull::LightOccluderPolygon,true>>
            ((RID_Owner *)this,(char *)(this + 0x10));
  return;
}



/* RendererCanvasCull::canvas_item_set_parent(RID, RID) */

ulong RendererCanvasCull::canvas_item_set_parent
                (RendererCanvasCull *param_1,ulong param_2,ulong param_3,undefined8 param_4,
                void *param_5)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *ppVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 in_R11;
  Item *pIVar11;
  void *pvVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  
  if ((param_2 == 0) || (*(uint *)(param_1 + 0x134) <= (uint)param_2)) {
LAB_0010c480:
    uVar6 = _err_print_error("canvas_item_set_parent","servers/rendering/renderer_canvas_cull.cpp",
                             0x23b,"Parameter \"canvas_item\" is null.",0,0);
    return uVar6;
  }
  lVar9 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x130)) * 0x298 +
          *(long *)(*(long *)(param_1 + 0x120) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x130)) * 8);
  uVar4 = *(uint *)(lVar9 + 0x290);
  uVar6 = (ulong)uVar4;
  if (uVar4 != (uint)(param_2 >> 0x20)) {
    if (uVar4 + 0x80000000 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_0010c480;
  }
  if (*(long *)(lVar9 + 0x148) != 0) {
    ppVar1 = (pthread_mutex_t *)(param_1 + 0xf0);
    iVar5 = pthread_mutex_lock(ppVar1);
    if (iVar5 != 0) goto LAB_0010c899;
    uVar6 = *(ulong *)(lVar9 + 0x148);
    if ((((uint)uVar6 < *(uint *)(param_1 + 0xdc)) && (uVar6 >> 0x20 != 0x7fffffff)) &&
       ((*(uint *)(((uVar6 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0xd8)) * 0xe0 +
                   *(long *)(*(long *)(param_1 + 200) +
                            ((uVar6 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0xd8)) * 8) + 0xd8) &
        0x7fffffff) == (uint)(uVar6 >> 0x20))) {
      pthread_mutex_unlock(ppVar1);
      if (*(long *)(lVar9 + 0x148) == 0) goto LAB_001187dc;
      uVar2 = *(ulong *)(lVar9 + 0x148);
      if (*(uint *)(param_1 + 0xdc) <= (uint)uVar2) goto LAB_001187dc;
      lVar8 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0xd8)) * 0xe0 +
              *(long *)(*(long *)(param_1 + 200) +
                       ((uVar2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0xd8)) * 8);
      uVar4 = *(uint *)(lVar8 + 0xd8);
      uVar6 = (ulong)uVar4;
      if (uVar4 != (uint)(uVar2 >> 0x20)) {
        if (uVar4 + 0x80000000 < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,param_3);
        }
        goto LAB_001187dc;
      }
      lVar10 = *(long *)(lVar8 + 0xb0);
      if (lVar10 != 0) {
        param_5 = *(void **)(lVar10 + -8);
        uVar2 = 0;
        do {
          uVar7 = uVar2;
          if ((long)param_5 <= (long)uVar7) goto LAB_0010c261;
          uVar6 = uVar7 + 1;
          uVar2 = uVar6;
        } while (lVar9 != *(long *)(lVar10 + uVar7 * 8));
        lVar10 = (long)(int)uVar7;
        if (lVar10 < (long)param_5) {
          CowData<RendererCanvasCull::Canvas::ChildItem>::_copy_on_write
                    ((CowData<RendererCanvasCull::Canvas::ChildItem> *)(lVar8 + 0xb0));
          lVar13 = *(long *)(lVar8 + 0xb0);
          if (lVar13 == 0) {
            lVar15 = -1;
          }
          else {
            lVar15 = *(long *)(lVar13 + -8) + -1;
            if (lVar10 < lVar15) {
              memmove((void *)(lVar13 + lVar10 * 8),(void *)(lVar13 + 8 + lVar10 * 8),
                      (lVar15 - lVar10) * 8);
            }
          }
          uVar6 = CowData<RendererCanvasCull::Canvas::ChildItem>::resize<false>
                            ((CowData<RendererCanvasCull::Canvas::ChildItem> *)(lVar8 + 0xb0),lVar15
                            );
        }
        else {
          uVar6 = _err_print_index_error
                            ("remove_at","./core/templates/cowdata.h",0xe4,lVar10,(long)param_5,
                             "p_index","size()","",false,false);
        }
      }
    }
    else {
      __mutex = (pthread_mutex_t *)(param_1 + 0x148);
      pthread_mutex_unlock(ppVar1);
      iVar5 = pthread_mutex_lock(__mutex);
      if (iVar5 != 0) goto LAB_0010c899;
      uVar6 = *(ulong *)(lVar9 + 0x148);
      if ((((uint)uVar6 < *(uint *)(param_1 + 0x134)) && (uVar6 >> 0x20 != 0x7fffffff)) &&
         ((*(uint *)(((uVar6 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x130)) * 0x298 +
                     *(long *)(*(long *)(param_1 + 0x120) +
                              ((uVar6 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x130)) * 8) +
                    0x290) & 0x7fffffff) == (uint)(uVar6 >> 0x20))) {
        pthread_mutex_unlock(__mutex);
        if (*(long *)(lVar9 + 0x148) == 0) goto LAB_00118796;
        uVar6 = *(ulong *)(lVar9 + 0x148);
        if (*(uint *)(param_1 + 0x134) <= (uint)uVar6) goto LAB_00118796;
        pIVar11 = (Item *)(((uVar6 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x130)) * 0x298 +
                          *(long *)(*(long *)(param_1 + 0x120) +
                                   ((uVar6 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x130)) * 8));
        if (*(int *)(pIVar11 + 0x290) != (int)(uVar6 >> 0x20)) {
          if (*(int *)(pIVar11 + 0x290) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,in_R11);
          }
          goto LAB_00118796;
        }
        uVar6 = *(ulong *)(pIVar11 + 0x1d8);
        if ((uVar6 != 0) && (param_5 = *(void **)(uVar6 - 8), 0 < (long)param_5)) {
          pvVar12 = (void *)0x0;
          do {
            if (lVar9 == *(long *)(uVar6 + (long)pvVar12 * 8)) {
              if ((long)pvVar12 < (long)param_5) {
                CowData<RendererCanvasCull::Item*>::_copy_on_write
                          ((CowData<RendererCanvasCull::Item*> *)(pIVar11 + 0x1d8));
                lVar8 = *(long *)(pIVar11 + 0x1d8);
                if (lVar8 == 0) {
                  lVar10 = -1;
                }
                else {
                  lVar10 = *(long *)(lVar8 + -8) + -1;
                  if ((long)pvVar12 < lVar10) {
                    param_5 = (void *)(lVar8 + 8 + (long)pvVar12 * 8);
                    memmove((void *)(lVar8 + (long)pvVar12 * 8),param_5,(lVar10 - (long)pvVar12) * 8
                           );
                  }
                }
                uVar6 = CowData<RendererCanvasCull::Item*>::resize<false>
                                  ((CowData<RendererCanvasCull::Item*> *)(pIVar11 + 0x1d8),lVar10);
              }
              else {
                uVar6 = _err_print_index_error
                                  ("remove_at","./core/templates/cowdata.h",0xe4,(long)pvVar12,
                                   (long)param_5,"p_index","size()","",false,false);
              }
              break;
            }
            pvVar12 = (void *)((long)pvVar12 + 1);
          } while (param_5 != pvVar12);
        }
        if (pIVar11[0x165] != (Item)0x0) {
          uVar6 = _mark_ysort_dirty(param_1,pIVar11);
        }
      }
      else {
        uVar4 = pthread_mutex_unlock(__mutex);
        uVar6 = (ulong)uVar4;
      }
    }
LAB_0010c261:
    *(undefined8 *)(lVar9 + 0x148) = 0;
  }
  if (param_3 == 0) goto LAB_0010c052;
  ppVar1 = (pthread_mutex_t *)(param_1 + 0xf0);
  iVar5 = pthread_mutex_lock(ppVar1);
  if (iVar5 != 0) goto LAB_0010c899;
  uVar4 = (uint)param_3;
  uVar14 = (uint)(param_3 >> 0x20);
  if (uVar4 < *(uint *)(param_1 + 0xdc)) {
    if ((param_3 >> 0x20 != 0x7fffffff) &&
       (uVar14 == (*(uint *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0xd8)) * 0xe0 +
                             *(long *)(*(long *)(param_1 + 200) +
                                      ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0xd8)) *
                                      8) + 0xd8) & 0x7fffffff))) {
      pthread_mutex_unlock(ppVar1);
      if (*(uint *)(param_1 + 0xdc) <= uVar4) {
LAB_001187dc:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar8 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0xd8)) * 0xe0 +
              *(long *)(*(long *)(param_1 + 200) +
                       ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0xd8)) * 8);
      if (uVar14 != *(uint *)(lVar8 + 0xd8)) {
        if (*(uint *)(lVar8 + 0xd8) + 0x80000000 < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,param_5);
        }
        goto LAB_001187dc;
      }
      if (*(long *)(lVar8 + 0xb0) == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = *(long *)(*(long *)(lVar8 + 0xb0) + -8) + 1;
      }
      iVar5 = CowData<RendererCanvasCull::Canvas::ChildItem>::resize<false>
                        ((CowData<RendererCanvasCull::Canvas::ChildItem> *)(lVar8 + 0xb0),lVar10);
      if (iVar5 == 0) {
        if (*(long *)(lVar8 + 0xb0) == 0) {
          lVar13 = -1;
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(*(long *)(lVar8 + 0xb0) + -8);
          lVar13 = lVar10 + -1;
          if (-1 < lVar13) {
            CowData<RendererCanvasCull::Canvas::ChildItem>::_copy_on_write
                      ((CowData<RendererCanvasCull::Canvas::ChildItem> *)(lVar8 + 0xb0));
            uVar6 = *(ulong *)(lVar8 + 0xb0);
            *(long *)(uVar6 + lVar13 * 8) = lVar9;
            goto LAB_0010c39d;
          }
        }
        uVar6 = _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar10,"p_index","size()",
                           "",false,false);
      }
      else {
        uVar6 = _err_print_error("push_back","./core/templates/vector.h",0x142,
                                 "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_0010c39d:
      *(undefined1 *)(lVar8 + 0xa0) = 1;
      goto LAB_0010c052;
    }
    pthread_mutex_unlock(ppVar1);
  }
  else {
    pthread_mutex_unlock(ppVar1);
  }
  ppVar1 = (pthread_mutex_t *)(param_1 + 0x148);
  iVar5 = pthread_mutex_lock(ppVar1);
  if (iVar5 != 0) {
LAB_0010c899:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  if (*(uint *)(param_1 + 0x134) <= uVar4) {
    pthread_mutex_unlock(ppVar1);
LAB_0010c426:
    uVar6 = 0;
    _err_print_error("canvas_item_set_parent","servers/rendering/renderer_canvas_cull.cpp",0x25e,
                     "Method/function failed.","Invalid parent.",0);
    return uVar6;
  }
  if ((param_3 >> 0x20 == 0x7fffffff) ||
     (uVar14 != (*(uint *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x130)) * 0x298 +
                           *(long *)(*(long *)(param_1 + 0x120) +
                                    ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x130)) * 8
                                    ) + 0x290) & 0x7fffffff))) {
    pthread_mutex_unlock(ppVar1);
    goto LAB_0010c426;
  }
  pthread_mutex_unlock(ppVar1);
  if (*(uint *)(param_1 + 0x134) <= uVar4) {
LAB_00118796:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pIVar11 = (Item *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x130)) * 0x298 +
                    *(long *)(*(long *)(param_1 + 0x120) +
                             ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x130)) * 8));
  if (uVar14 != *(uint *)(pIVar11 + 0x290)) {
    if (*(uint *)(pIVar11 + 0x290) + 0x80000000 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,*(long *)(param_1 + 0x120));
    }
    goto LAB_00118796;
  }
  if (*(long *)(pIVar11 + 0x1d8) == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(*(long *)(pIVar11 + 0x1d8) + -8) + 1;
  }
  iVar5 = CowData<RendererCanvasCull::Item*>::resize<false>
                    ((CowData<RendererCanvasCull::Item*> *)(pIVar11 + 0x1d8),lVar8);
  if (iVar5 == 0) {
    if (*(long *)(pIVar11 + 0x1d8) == 0) {
      lVar10 = -1;
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(pIVar11 + 0x1d8) + -8);
      lVar10 = lVar8 + -1;
      if (-1 < lVar10) {
        CowData<RendererCanvasCull::Item*>::_copy_on_write
                  ((CowData<RendererCanvasCull::Item*> *)(pIVar11 + 0x1d8));
        uVar6 = *(ulong *)(pIVar11 + 0x1d8);
        *(long *)(uVar6 + lVar10 * 8) = lVar9;
        goto LAB_0010c55f;
      }
    }
    uVar6 = _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar8,"p_index","size()","",
                       false,false);
  }
  else {
    uVar6 = _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010c55f:
  pIVar11[400] = (Item)0x1;
  if (pIVar11[0x165] != (Item)0x0) {
    uVar6 = _mark_ysort_dirty(param_1,pIVar11);
  }
LAB_0010c052:
  *(ulong *)(lVar9 + 0x148) = param_3;
  return uVar6;
}



/* Vector<RendererCanvasRender::Item::CommandBlock>::push_back(RendererCanvasRender::Item::CommandBlock)
   [clone .isra.0] */

void Vector<RendererCanvasRender::Item::CommandBlock>::push_back
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar1 = CowData<RendererCanvasRender::Item::CommandBlock>::resize<false>
                    ((CowData<RendererCanvasRender::Item::CommandBlock> *)(param_1 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                  ((CowData<RendererCanvasRender::Item::CommandBlock> *)(param_1 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_1 + 8));
        *puVar2 = param_2;
        puVar2[1] = param_3;
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



/* RendererCanvasCull::canvas_item_add_animation_slice(RID, double, double, double, double) */

void __thiscall
RendererCanvasCull::canvas_item_add_animation_slice
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          RendererCanvasCull *this,ulong param_6)

{
  int iVar1;
  CommandAnimationSlice *pCVar2;
  Item *this_00;
  
  if ((param_6 != 0) && ((uint)param_6 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_6 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_6 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    iVar1 = *(int *)(this_00 + 0x290);
    if (iVar1 == (int)(param_6 >> 0x20)) {
      pCVar2 = RendererCanvasRender::Item::
               alloc_command<RendererCanvasRender::Item::CommandAnimationSlice>(this_00);
      if (pCVar2 != (CommandAnimationSlice *)0x0) {
        *(undefined8 *)(pCVar2 + 0x18) = param_1;
        *(undefined8 *)(pCVar2 + 0x20) = param_2;
        *(undefined8 *)(pCVar2 + 0x28) = param_3;
        *(undefined8 *)(pCVar2 + 0x30) = param_4;
        return;
      }
      _err_print_error("canvas_item_add_animation_slice",
                       "servers/rendering/renderer_canvas_cull.cpp",0x712,
                       "Parameter \"as\" is null.",0,0);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_add_animation_slice","servers/rendering/renderer_canvas_cull.cpp",
                   0x70f,"Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_add_clip_ignore(RID, bool) */

void __thiscall
RendererCanvasCull::canvas_item_add_clip_ignore
          (RendererCanvasCull *this,ulong param_2,undefined1 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar7 + 0x290) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar7 + 0x110) != 0) {
        uVar6 = *(uint *)(lVar7 + 0x130);
        lVar2 = *(long *)(lVar7 + 0x128);
        do {
          if (lVar2 == 0) {
            if (uVar6 != 0) {
              uVar5 = (ulong)uVar6;
              lVar2 = 0;
              goto LAB_0010cc79;
            }
LAB_0010cc30:
            uVar4 = Memory::alloc_static(0x1000,false);
            Vector<RendererCanvasRender::Item::CommandBlock>::push_back(lVar7 + 0x120,0,uVar4);
            uVar5 = (ulong)*(uint *)(lVar7 + 0x130);
            if (*(long *)(lVar7 + 0x128) == 0) {
              lVar2 = 0;
              goto LAB_0010cc79;
            }
            lVar2 = *(long *)(*(long *)(lVar7 + 0x128) + -8);
          }
          else {
            lVar2 = *(long *)(lVar2 + -8);
            uVar5 = (ulong)uVar6;
            if (uVar6 == (uint)lVar2) goto LAB_0010cc30;
          }
          if (lVar2 <= (long)uVar5) {
LAB_0010cc79:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar5,lVar2,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                    ((CowData<RendererCanvasRender::Item::CommandBlock> *)(lVar7 + 0x128));
          lVar2 = *(long *)(lVar7 + 0x128);
          puVar8 = (uint *)(uVar5 * 0x10 + lVar2);
          uVar6 = *puVar8;
          if (0x17 < 0x1000 - uVar6) goto code_r0x0010cb83;
          uVar6 = *(int *)(lVar7 + 0x130) + 1;
          *(uint *)(lVar7 + 0x130) = uVar6;
        } while( true );
      }
      puVar3 = (undefined8 *)operator_new(0x18,"");
      *puVar3 = &PTR__CommandClipIgnore_001233a8;
      *(undefined4 *)(puVar3 + 2) = 8;
      *(undefined1 *)((long)puVar3 + 0x14) = 0;
      puVar3[1] = 0;
      *(undefined8 **)(lVar7 + 0x110) = puVar3;
      *(undefined8 **)(lVar7 + 0x118) = puVar3;
      goto LAB_0010cbbe;
    }
    if (*(int *)(lVar7 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_add_clip_ignore","servers/rendering/renderer_canvas_cull.cpp",0x706,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
code_r0x0010cb83:
  lVar2 = *(long *)(lVar7 + 0x118);
  puVar3 = (undefined8 *)((ulong)uVar6 + *(long *)(puVar8 + 2));
  *(undefined4 *)(puVar3 + 2) = 8;
  *puVar3 = &PTR__CommandClipIgnore_001233a8;
  *(undefined1 *)((long)puVar3 + 0x14) = 0;
  puVar3[1] = 0;
  *(undefined8 **)(lVar2 + 8) = puVar3;
  *(undefined8 **)(lVar7 + 0x118) = puVar3;
  *puVar8 = uVar6 + 0x18;
LAB_0010cbbe:
  *(undefined1 *)(lVar7 + 0x55) = 1;
  *(undefined1 *)((long)puVar3 + 0x14) = param_3;
  return;
}



/* RendererCanvasCull::canvas_item_add_multimesh(RID, RID, RID) */

void __thiscall
RendererCanvasCull::canvas_item_add_multimesh
          (RendererCanvasCull *this,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar7 + 0x290) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar7 + 0x110) != 0) {
        uVar6 = *(uint *)(lVar7 + 0x130);
        lVar2 = *(long *)(lVar7 + 0x128);
        do {
          if (lVar2 == 0) {
            if (uVar6 != 0) {
              uVar5 = (ulong)uVar6;
              lVar2 = 0;
              goto LAB_0010cf09;
            }
LAB_0010cec0:
            uVar4 = Memory::alloc_static(0x1000,false);
            Vector<RendererCanvasRender::Item::CommandBlock>::push_back(lVar7 + 0x120,0,uVar4);
            uVar5 = (ulong)*(uint *)(lVar7 + 0x130);
            if (*(long *)(lVar7 + 0x128) == 0) {
              lVar2 = 0;
              goto LAB_0010cf09;
            }
            lVar2 = *(long *)(*(long *)(lVar7 + 0x128) + -8);
          }
          else {
            lVar2 = *(long *)(lVar2 + -8);
            uVar5 = (ulong)uVar6;
            if (uVar6 == (uint)lVar2) goto LAB_0010cec0;
          }
          if (lVar2 <= (long)uVar5) {
LAB_0010cf09:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar5,lVar2,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                    ((CowData<RendererCanvasRender::Item::CommandBlock> *)(lVar7 + 0x128));
          lVar2 = *(long *)(lVar7 + 0x128);
          puVar8 = (uint *)(uVar5 * 0x10 + lVar2);
          uVar6 = *puVar8;
          if (0x27 < 0x1000 - uVar6) goto code_r0x0010ce04;
          uVar6 = *(int *)(lVar7 + 0x130) + 1;
          *(uint *)(lVar7 + 0x130) = uVar6;
        } while( true );
      }
      puVar3 = (undefined8 *)operator_new(0x28,"");
      *(undefined1 (*) [16])(puVar3 + 3) = (undefined1  [16])0x0;
      *puVar3 = &PTR__CommandMultiMesh_00123348;
      *(undefined4 *)(puVar3 + 2) = 5;
      puVar3[1] = 0;
      *(undefined8 **)(lVar7 + 0x110) = puVar3;
      *(undefined8 **)(lVar7 + 0x118) = puVar3;
      goto LAB_0010ce43;
    }
    if (*(int *)(lVar7 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_add_multimesh","servers/rendering/renderer_canvas_cull.cpp",0x6fb,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
code_r0x0010ce04:
  lVar2 = *(long *)(lVar7 + 0x118);
  puVar3 = (undefined8 *)((ulong)uVar6 + *(long *)(puVar8 + 2));
  *(undefined1 (*) [16])(puVar3 + 3) = (undefined1  [16])0x0;
  *puVar3 = &PTR__CommandMultiMesh_00123348;
  *(undefined4 *)(puVar3 + 2) = 5;
  puVar3[1] = 0;
  *(undefined8 **)(lVar2 + 8) = puVar3;
  *(undefined8 **)(lVar7 + 0x118) = puVar3;
  *puVar8 = uVar6 + 0x28;
LAB_0010ce43:
  *(undefined1 *)(lVar7 + 0x55) = 1;
  puVar3[3] = param_3;
  puVar3[4] = param_4;
  return;
}



/* RendererCanvasCull::canvas_item_add_particles(RID, RID, RID) */

void __thiscall
RendererCanvasCull::canvas_item_add_particles
          (RendererCanvasCull *this,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
            *(long *)(*(long *)(this + 0x120) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
    if (*(int *)(lVar8 + 0x290) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar8 + 0x110) != 0) {
        uVar7 = *(uint *)(lVar8 + 0x130);
        lVar3 = *(long *)(lVar8 + 0x128);
        do {
          if (lVar3 == 0) {
            if (uVar7 != 0) {
              uVar6 = (ulong)uVar7;
              lVar3 = 0;
              goto LAB_0010d1a9;
            }
LAB_0010d160:
            uVar5 = Memory::alloc_static(0x1000,false);
            Vector<RendererCanvasRender::Item::CommandBlock>::push_back(lVar8 + 0x120,0,uVar5);
            uVar6 = (ulong)*(uint *)(lVar8 + 0x130);
            if (*(long *)(lVar8 + 0x128) == 0) {
              lVar3 = 0;
              goto LAB_0010d1a9;
            }
            lVar3 = *(long *)(*(long *)(lVar8 + 0x128) + -8);
          }
          else {
            lVar3 = *(long *)(lVar3 + -8);
            uVar6 = (ulong)uVar7;
            if (uVar7 == (uint)lVar3) goto LAB_0010d160;
          }
          if (lVar3 <= (long)uVar6) {
LAB_0010d1a9:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar6,lVar3,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                    ((CowData<RendererCanvasRender::Item::CommandBlock> *)(lVar8 + 0x128));
          lVar3 = *(long *)(lVar8 + 0x128);
          puVar9 = (uint *)(uVar6 * 0x10 + lVar3);
          uVar7 = *puVar9;
          if (0x27 < 0x1000 - uVar7) goto code_r0x0010d094;
          uVar7 = *(int *)(lVar8 + 0x130) + 1;
          *(uint *)(lVar8 + 0x130) = uVar7;
        } while( true );
      }
      puVar4 = (undefined8 *)operator_new(0x28,"");
      *(undefined1 (*) [16])(puVar4 + 3) = (undefined1  [16])0x0;
      *puVar4 = &PTR__CommandParticles_00123368;
      *(undefined4 *)(puVar4 + 2) = 6;
      puVar4[1] = 0;
      *(undefined8 **)(lVar8 + 0x110) = puVar4;
      *(undefined8 **)(lVar8 + 0x118) = puVar4;
      goto LAB_0010d0d3;
    }
    if (*(int *)(lVar8 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_add_particles","servers/rendering/renderer_canvas_cull.cpp",0x6ed,
                   "Parameter \"canvas_item\" is null.",0,0);
  return;
code_r0x0010d094:
  lVar3 = *(long *)(lVar8 + 0x118);
  puVar4 = (undefined8 *)((ulong)uVar7 + *(long *)(puVar9 + 2));
  *(undefined1 (*) [16])(puVar4 + 3) = (undefined1  [16])0x0;
  *puVar4 = &PTR__CommandParticles_00123368;
  *(undefined4 *)(puVar4 + 2) = 6;
  puVar4[1] = 0;
  *(undefined8 **)(lVar3 + 8) = puVar4;
  *(undefined8 **)(lVar8 + 0x118) = puVar4;
  *puVar9 = uVar7 + 0x28;
LAB_0010d0d3:
  plVar2 = RenderingServerGlobals::particles_storage;
  *(undefined1 *)(lVar8 + 0x55) = 1;
  puVar4[3] = param_3;
  puVar4[4] = param_4;
                    /* WARNING: Could not recover jumptable at 0x0010d0fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x120))(plVar2,param_3);
  return;
}



/* RendererCanvasCull::canvas_item_add_mesh(RID, RID const&, Transform2D const&, Color const&, RID)
    */

void __thiscall
RendererCanvasCull::canvas_item_add_mesh
          (RendererCanvasCull *this,ulong param_2,long *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  CommandMesh *pCVar4;
  undefined8 uVar5;
  char *pcVar6;
  Item *this_00;
  undefined8 uVar7;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    if (*(int *)(this_00 + 0x290) == (int)(param_2 >> 0x20)) {
      if (*param_3 == 0) {
        uVar7 = 0x6db;
        pcVar6 = "Condition \"!p_mesh.is_valid()\" is true.";
      }
      else {
        pCVar4 = RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandMesh>
                           (this_00);
        if (pCVar4 != (CommandMesh *)0x0) {
          *(long *)(pCVar4 + 0x18) = *param_3;
          if (*(long *)(this_00 + 0x70) != 0) {
            uVar5 = (**(code **)(*RenderingServerGlobals::mesh_storage + 0xd0))
                              (RenderingServerGlobals::mesh_storage,*param_3);
            plVar3 = RenderingServerGlobals::mesh_storage;
            uVar7 = *(undefined8 *)(this_00 + 0x70);
            *(undefined8 *)(pCVar4 + 0x48) = uVar5;
            (**(code **)(*plVar3 + 0xe0))(plVar3,uVar5,uVar7);
          }
          uVar7 = *param_4;
          uVar5 = param_4[1];
          uVar1 = *param_5;
          uVar2 = param_5[1];
          *(undefined8 *)(pCVar4 + 0x50) = param_6;
          *(undefined8 *)(pCVar4 + 0x20) = uVar7;
          *(undefined8 *)(pCVar4 + 0x28) = uVar5;
          uVar7 = param_4[2];
          *(undefined8 *)(pCVar4 + 0x38) = uVar1;
          *(undefined8 *)(pCVar4 + 0x40) = uVar2;
          *(undefined8 *)(pCVar4 + 0x30) = uVar7;
          return;
        }
        uVar7 = 0x6de;
        pcVar6 = "Parameter \"m\" is null.";
      }
      goto LAB_0010d38a;
    }
    if (*(int *)(this_00 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar7 = 0x6da;
  pcVar6 = "Parameter \"canvas_item\" is null.";
LAB_0010d38a:
  _err_print_error("canvas_item_add_mesh","servers/rendering/renderer_canvas_cull.cpp",uVar7,pcVar6,
                   0,0);
  return;
}



/* RendererCanvasCull::canvas_item_add_set_transform(RID, Transform2D const&) */

void __thiscall
RendererCanvasCull::canvas_item_add_set_transform
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  CommandTransform *pCVar3;
  Item *this_00;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    iVar1 = *(int *)(this_00 + 0x290);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pCVar3 = RendererCanvasRender::Item::
               alloc_command<RendererCanvasRender::Item::CommandTransform>(this_00);
      if (pCVar3 != (CommandTransform *)0x0) {
        uVar2 = param_3[1];
        *(undefined8 *)(pCVar3 + 0x14) = *param_3;
        *(undefined8 *)(pCVar3 + 0x1c) = uVar2;
        *(undefined8 *)(pCVar3 + 0x24) = param_3[2];
        return;
      }
      _err_print_error("canvas_item_add_set_transform","servers/rendering/renderer_canvas_cull.cpp",
                       0x6d4,"Parameter \"tr\" is null.",0,0);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_item_add_set_transform","servers/rendering/renderer_canvas_cull.cpp",
                   0x6d1,"Parameter \"canvas_item\" is null.",0,0);
  return;
}



/* RendererCanvasCull::canvas_item_add_nine_patch(RID, Rect2 const&, Rect2 const&, RID, Vector2
   const&, Vector2 const&, RenderingServer::NinePatchAxisMode, RenderingServer::NinePatchAxisMode,
   bool, Color const&) */

void __thiscall
RendererCanvasCull::canvas_item_add_nine_patch
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5,undefined4 *param_6,undefined4 *param_7,undefined4 param_8,
          undefined4 param_9,CommandNinePatch param_10,undefined8 *param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  CommandNinePatch *pCVar9;
  char *pcVar10;
  undefined8 uVar11;
  Item *this_00;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    iVar5 = *(int *)(this_00 + 0x290);
    if (iVar5 == (int)(param_2 >> 0x20)) {
      pCVar9 = RendererCanvasRender::Item::
               alloc_command<RendererCanvasRender::Item::CommandNinePatch>(this_00);
      if (pCVar9 != (CommandNinePatch *)0x0) {
        uVar11 = *param_3;
        uVar6 = param_3[1];
        uVar7 = *param_11;
        uVar8 = param_11[1];
        *(undefined8 *)(pCVar9 + 0x60) = param_5;
        *(undefined8 *)(pCVar9 + 0x14) = uVar11;
        *(undefined8 *)(pCVar9 + 0x1c) = uVar6;
        uVar11 = *param_4;
        uVar6 = param_4[1];
        pCVar9[0x44] = param_10;
        *(undefined8 *)(pCVar9 + 0x24) = uVar11;
        *(undefined8 *)(pCVar9 + 0x2c) = uVar6;
        uVar1 = param_7[1];
        uVar2 = *param_7;
        uVar3 = param_6[1];
        *(undefined8 *)(pCVar9 + 0x48) = uVar7;
        *(undefined8 *)(pCVar9 + 0x50) = uVar8;
        uVar4 = *param_6;
        *(undefined4 *)(pCVar9 + 0x58) = param_8;
        *(undefined4 *)(pCVar9 + 0x5c) = param_9;
        *(undefined4 *)(pCVar9 + 0x34) = uVar4;
        *(undefined4 *)(pCVar9 + 0x38) = uVar3;
        *(undefined4 *)(pCVar9 + 0x3c) = uVar2;
        *(undefined4 *)(pCVar9 + 0x40) = uVar1;
        return;
      }
      uVar11 = 0x678;
      pcVar10 = "Parameter \"style\" is null.";
      goto LAB_0010d642;
    }
    if (iVar5 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar11 = 0x675;
  pcVar10 = "Parameter \"canvas_item\" is null.";
LAB_0010d642:
  _err_print_error("canvas_item_add_nine_patch","servers/rendering/renderer_canvas_cull.cpp",uVar11,
                   pcVar10,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_polyline(RID, Vector<Vector2> const&, Vector<Color> const&,
   float, bool) */

void __thiscall
RendererCanvasCull::canvas_item_add_polyline
          (float param_1,RendererCanvasCull *this,ulong param_3,Vector *param_4,long param_5,
          uint param_6)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  Vector2 *pVVar9;
  code *pcVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte bVar16;
  char cVar17;
  byte bVar18;
  uint uVar19;
  CommandPolygon *pCVar20;
  CommandPolygon *pCVar21;
  CommandPolygon *pCVar22;
  float *pfVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  char *pcVar29;
  float *pfVar30;
  int iVar31;
  Item *this_00;
  ulong uVar32;
  float *pfVar33;
  ulong uVar34;
  undefined8 *puVar35;
  float *pfVar36;
  byte bVar37;
  ulong uVar38;
  long lVar39;
  float *pfVar40;
  long in_FS_OFFSET;
  bool bVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar45;
  undefined1 auVar44 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  int local_258;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_198;
  undefined1 local_108 [8];
  long local_100;
  undefined1 local_f8 [8];
  undefined8 *local_f0;
  undefined1 local_e8 [8];
  float *local_e0;
  undefined1 local_d8 [8];
  undefined8 *local_d0;
  undefined1 local_c8 [8];
  undefined8 *local_c0 [2];
  undefined8 *local_b0;
  undefined1 local_a8 [8];
  undefined8 *local_a0;
  undefined1 local_98 [8];
  long local_90;
  undefined1 local_88 [8];
  long local_80;
  undefined1 local_78 [8];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_4 + 8) == 0) || (*(long *)(*(long *)(param_4 + 8) + -8) < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar25 = 0x3b2;
      pcVar29 = "Condition \"p_points.size() < 2\" is true.";
      goto LAB_0010e849;
    }
    goto LAB_0010f67e;
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    if (*(int *)(this_00 + 0x290) == (int)(param_3 >> 0x20)) {
      local_100 = 0;
      if (*(long *)(param_4 + 8) == 0) {
        local_258 = 0;
      }
      else {
        local_258 = *(int *)(*(long *)(param_4 + 8) + -8);
      }
      pCVar20 = RendererCanvasRender::Item::
                alloc_command<RendererCanvasRender::Item::CommandPolygon>(this_00);
      if (pCVar20 == (CommandPolygon *)0x0) {
        _err_print_error("canvas_item_add_polyline","servers/rendering/renderer_canvas_cull.cpp",
                         0x3bc,"Parameter \"pline\" is null.",0,0);
      }
      else {
        if (0.0 <= param_1) {
          pVVar9 = *(Vector2 **)(param_4 + 8);
          if (pVVar9 == (Vector2 *)0x0) {
            lVar39 = 0;
          }
          else {
            lVar39 = *(long *)(pVVar9 + -8);
            if (0 < lVar39) {
              uVar1 = local_258 - 1;
              uVar26 = (ulong)(int)uVar1;
              uVar34 = uVar26;
              if (lVar39 <= (long)uVar26 || (int)uVar1 < 0) goto LAB_0010e581;
              uVar32 = 0;
              bVar16 = Vector2::is_equal_approx(pVVar9);
              local_68 = 0;
              local_60 = 0;
              if (local_258 != 1) {
                uVar38 = 1;
                do {
                  lVar27 = *(long *)(param_4 + 8);
                  uVar34 = uVar32;
                  if (lVar27 == 0) {
                    lVar39 = 0;
                    goto LAB_0010e581;
                  }
                  lVar39 = *(long *)(lVar27 + -8);
                  if ((lVar39 <= (long)uVar32) || (uVar34 = uVar38, lVar39 <= (long)uVar38))
                  goto LAB_0010e581;
                  uVar25 = *(undefined8 *)(lVar27 + uVar38 * 8);
                  uVar43 = *(undefined8 *)(lVar27 + uVar32 * 8);
                  local_48 = CONCAT44((float)((ulong)uVar25 >> 0x20) -
                                      (float)((ulong)uVar43 >> 0x20),(float)uVar25 - (float)uVar43);
                  local_68 = Vector2::normalized();
                  cVar17 = Vector2::is_zero_approx();
                  if (cVar17 == '\0') break;
                  uVar32 = uVar32 + 1;
                  uVar38 = uVar38 + 1;
                } while (uVar32 != uVar1);
              }
              uVar32 = uVar26;
              do {
                uVar32 = uVar32 - 1;
                if (uVar26 == ((long)local_258 + -1) - (ulong)uVar1) break;
                lVar27 = *(long *)(param_4 + 8);
                uVar34 = uVar32;
                if (lVar27 == 0) {
                  lVar39 = 0;
                  goto LAB_0010e581;
                }
                lVar39 = *(long *)(lVar27 + -8);
                if ((lVar39 <= (long)uVar32) || (uVar34 = uVar26, lVar39 <= (long)uVar26))
                goto LAB_0010e581;
                uVar25 = *(undefined8 *)(lVar27 + uVar26 * 8);
                uVar43 = *(undefined8 *)(lVar27 + uVar32 * 8);
                uVar26 = uVar26 - 1;
                local_48 = CONCAT44((float)((ulong)uVar25 >> 0x20) - (float)((ulong)uVar43 >> 0x20),
                                    (float)uVar25 - (float)uVar43);
                local_60 = Vector2::normalized();
                cVar17 = Vector2::is_zero_approx();
              } while (cVar17 != '\0');
              local_f0 = (undefined8 *)0x0;
              local_e0 = (float *)0x0;
              iVar11 = local_258 * 2;
              uVar19 = bVar16 ^ 1;
              bVar18 = (byte)uVar19;
              lVar39 = (long)(int)(iVar11 + (uVar19 & param_6) * 4);
              CowData<Color>::resize<false>((CowData<Color> *)&local_f0,lVar39);
              CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_e0,lVar39);
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_e0);
              pfVar40 = local_e0;
              CowData<Color>::_copy_on_write((CowData<Color> *)&local_f0);
              puVar35 = local_f0;
              fVar52 = _LC233;
              if ((char)param_6 == '\0') {
                uVar34 = 0;
                local_58 = 0;
                local_228 = CONCAT44(_LC6,_LC6);
                uStack_220 = CONCAT44(_LC6,_LC6);
                local_208 = CONCAT44(_LC6,_LC6);
                uStack_200 = CONCAT44(_LC6,_LC6);
                do {
                  uVar19 = (uint)uVar34;
                  local_48 = compute_polyline_segment_dir(param_4,uVar19,(Vector2 *)&local_58);
                  if ((bVar16 == 0) || (uVar19 != 0)) {
                    if ((bVar16 != 0) && (uVar1 == uVar19)) {
                      local_58 = local_68;
                      goto LAB_0010ebe9;
                    }
                    if (bVar18 == 0) goto LAB_0010ebe9;
                    if (uVar19 != 0) {
                      if (uVar1 != uVar19) goto LAB_0010ebe9;
                      fVar51 = (float)((uint)local_60 ^ __LC9);
                      uVar26 = local_60 >> 0x20;
                    }
                    else {
                      fVar51 = (float)((uint)local_68 ^ __LC9);
                      uVar26 = local_68 >> 0x20;
                    }
                  }
                  else {
                    local_58 = local_60;
LAB_0010ebe9:
                    uVar26 = compute_polyline_edge_offset_clamped
                                       ((Vector2 *)&local_48,(Vector2 *)&local_58);
                    fVar51 = (float)(uVar26 >> 0x20);
                  }
                  fVar46 = param_1 * fVar52;
                  lVar27 = *(long *)(param_4 + 8);
                  if (lVar27 == 0) {
                    lVar39 = 0;
                    goto LAB_0010e581;
                  }
                  lVar39 = *(long *)(lVar27 + -8);
                  if (lVar39 <= (long)uVar34) goto LAB_0010e581;
                  pfVar30 = (float *)(lVar27 + uVar34 * 8);
                  fVar54 = pfVar30[1];
                  uVar25 = *(undefined8 *)pfVar30;
                  pfVar36 = pfVar40 + uVar34 * 4;
                  *pfVar36 = fVar46 * (float)uVar26 + *pfVar30;
                  pfVar36[1] = fVar46 * fVar51 + fVar54;
                  pfVar36[2] = (float)uVar25 - fVar46 * (float)uVar26;
                  pfVar36[3] = fVar54 - fVar46 * fVar51;
                  lVar39 = *(long *)(param_5 + 8);
                  if ((lVar39 != 0) && ((long)uVar34 < *(long *)(lVar39 + -8))) {
                    puVar6 = (undefined8 *)(lVar39 + uVar34 * 0x10);
                    local_228 = *puVar6;
                    uStack_220 = puVar6[1];
                    local_208 = local_228;
                    uStack_200 = uStack_220;
                  }
                  uVar34 = uVar34 + 1;
                  *puVar35 = local_228;
                  puVar35[1] = uStack_220;
                  puVar35[2] = local_208;
                  puVar35[3] = uStack_200;
                  local_58 = local_48;
                  puVar35 = puVar35 + 4;
                } while ((int)uVar34 < local_258);
LAB_0010f214:
                *(undefined4 *)(pCVar20 + 0x14) = 4;
                local_70 = 0;
                local_80 = 0;
                local_90 = 0;
                if (*(long *)(pCVar20 + 0x18) == 0) {
                  if (local_e0 == (float *)0x0) goto LAB_0010eaa1;
                  uVar25 = *(undefined8 *)(local_e0 + -2);
                  *(undefined8 *)(pCVar20 + 0x20) = *(undefined8 *)local_e0;
                  if (1 < (uint)uVar25) {
                    pfVar40 = local_e0 + (ulong)((uint)uVar25 - 2) * 2 + 4;
                    fVar52 = *(float *)(pCVar20 + 0x28);
                    pfVar30 = local_e0 + 2;
                    do {
                      if ((fVar52 < 0.0) || (fVar51 = *(float *)(pCVar20 + 0x2c), fVar51 < 0.0)) {
                        _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                         ,0,0);
                        fVar51 = *(float *)(pCVar20 + 0x2c);
                        fVar52 = *(float *)(pCVar20 + 0x28);
                      }
                      fVar46 = *(float *)(pCVar20 + 0x20);
                      fVar54 = *pfVar30;
                      pfVar36 = pfVar30 + 2;
                      fVar8 = *(float *)(pCVar20 + 0x24);
                      fVar55 = pfVar30[1];
                      fVar50 = fVar54;
                      if (fVar46 <= fVar54) {
                        fVar50 = fVar46;
                      }
                      if (fVar54 <= fVar52 + fVar46) {
                        fVar54 = fVar52 + fVar46;
                      }
                      fVar46 = fVar55;
                      if (fVar55 <= fVar51 + fVar8) {
                        fVar46 = fVar51 + fVar8;
                      }
                      if (fVar8 <= fVar55) {
                        fVar55 = fVar8;
                      }
                      fVar52 = fVar54 - fVar50;
                      *(ulong *)(pCVar20 + 0x20) = CONCAT44(fVar55,fVar50);
                      *(ulong *)(pCVar20 + 0x28) = CONCAT44(fVar46 - fVar55,fVar52);
                      pfVar30 = pfVar36;
                    } while (pfVar40 != pfVar36);
                  }
                  uVar25 = (**(code **)*RendererCanvasRender::singleton)
                                     (RendererCanvasRender::singleton,local_108,local_e8,local_f8,
                                      local_98,local_88,local_78);
                  *(undefined8 *)(pCVar20 + 0x18) = uVar25;
                }
                else {
                  _err_print_error("create","./servers/rendering/renderer_canvas_render.h",0x8f,
                                   "Condition \"polygon_id != 0\" is true.",0,0);
                }
                lVar39 = local_90;
                if (local_90 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_90 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_90 = 0;
                    Memory::free_static((void *)(lVar39 + -0x10),false);
                  }
                }
                lVar39 = local_80;
                if (local_80 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_80 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_80 = 0;
                    Memory::free_static((void *)(lVar39 + -0x10),false);
                  }
                }
                lVar39 = local_70;
                if (local_70 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_70 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_70 = 0;
                    Memory::free_static((void *)(lVar39 + -0x10),false);
                  }
                }
              }
              else {
                if (param_1 < _LC6) {
                  local_198 = param_1 * _LC222;
                }
                else {
                  local_198 = _LC222;
                }
                pCVar21 = RendererCanvasRender::Item::
                          alloc_command<RendererCanvasRender::Item::CommandPolygon>(this_00);
                if (pCVar21 == (CommandPolygon *)0x0) {
                  _err_print_error("canvas_item_add_polyline",
                                   "servers/rendering/renderer_canvas_cull.cpp",0x404,
                                   "Parameter \"pline_left\" is null.",0,0);
                }
                else {
                  pCVar22 = RendererCanvasRender::Item::
                            alloc_command<RendererCanvasRender::Item::CommandPolygon>(this_00);
                  if (pCVar22 != (CommandPolygon *)0x0) {
                    iVar31 = iVar11 + 5;
                    if (bVar16 != 0) {
                      iVar31 = iVar11;
                    }
                    local_d0 = (undefined8 *)0x0;
                    lVar39 = (long)iVar31;
                    local_c0[0] = (undefined8 *)0x0;
                    local_b0 = (undefined8 *)0x0;
                    local_a0 = (undefined8 *)0x0;
                    CowData<Color>::resize<false>((CowData<Color> *)&local_d0,lVar39);
                    CowData<Vector2>::resize<false>((CowData<Vector2> *)local_c0,lVar39);
                    CowData<Color>::resize<false>((CowData<Color> *)&local_b0,lVar39);
                    CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_a0,lVar39);
                    CowData<Color>::_copy_on_write((CowData<Color> *)&local_d0);
                    puVar12 = local_d0;
                    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_c0);
                    puVar13 = local_c0[0];
                    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
                    puVar15 = local_a0;
                    CowData<Color>::_copy_on_write((CowData<Color> *)&local_b0);
                    puVar14 = local_b0;
                    fVar8 = _LC233;
                    uVar34 = 0;
                    lVar27 = (long)(iVar11 + 2);
                    local_58 = 0;
                    pfVar23 = pfVar40 + lVar27 * 2;
                    puVar6 = puVar35 + lVar27 * 2;
                    pfVar30 = (float *)(puVar35 + lVar27 * 2 + 2);
                    uVar26 = (ulong)(uVar19 << 4);
                    puVar28 = local_b0 + lVar27 * 2;
                    puVar3 = puVar12 + lVar27 * 2 + 2;
                    pfVar36 = (float *)(puVar12 + lVar27 * 2 + 4);
                    uVar25 = CONCAT44(_UNK_001236b4,_LC6);
                    puVar4 = local_b0 + lVar27 * 2 + 2;
                    pfVar5 = (float *)(local_b0 + lVar27 * 2 + 4);
                    uVar19 = 0;
                    local_1d8 = _LC6;
                    fStack_1d4 = _LC6;
                    fStack_1d0 = _LC6;
                    fStack_1cc = _LC6;
                    local_1b8 = _LC6;
                    fStack_1b4 = _LC6;
                    fStack_1b0 = _LC6;
                    fStack_1ac = _LC6;
                    fVar52 = _LC6;
                    fVar51 = _LC6;
                    fVar46 = _LC6;
                    fVar54 = _LC6;
                    do {
                      bVar41 = uVar1 == uVar19;
                      local_48 = compute_polyline_segment_dir(param_4,uVar19,(Vector2 *)&local_58);
                      if (bVar16 == 0) {
LAB_0010e23d:
                        bVar37 = uVar19 == 0 & bVar18;
                        if (bVar37 == 0) {
                          if ((bVar18 == 0) || (!bVar41)) goto LAB_0010dcf9;
                          fVar50 = (float)((uint)local_60 ^ __LC9);
                          fVar55 = local_60._4_4_;
                        }
                        else {
                          fVar50 = (float)((uint)local_68 ^ __LC9);
                          fVar55 = local_68._4_4_;
                        }
                      }
                      else {
                        if (uVar19 == 0) {
                          local_58 = local_60;
                        }
                        else {
                          if (!bVar41) goto LAB_0010e23d;
                          local_58 = local_68;
                        }
LAB_0010dcf9:
                        bVar37 = 0;
                        uVar43 = compute_polyline_edge_offset_clamped
                                           ((Vector2 *)&local_48,(Vector2 *)&local_58);
                        fVar55 = (float)uVar43;
                        fVar50 = (float)((ulong)uVar43 >> 0x20);
                      }
                      fVar60 = param_1 * fVar8;
                      lVar24 = *(long *)(param_4 + 8);
                      fVar49 = fVar50 * local_198;
                      fVar53 = fVar55 * local_198;
                      if (lVar24 == 0) {
                        lVar39 = 0;
                        goto LAB_0010e581;
                      }
                      lVar39 = *(long *)(lVar24 + -8);
                      if (lVar39 <= (long)uVar34) goto LAB_0010e581;
                      pfVar33 = (float *)(lVar24 + uVar34 * 8);
                      uVar43 = *(undefined8 *)pfVar33;
                      fVar42 = *pfVar33 + fVar55 * fVar60;
                      fVar45 = pfVar33[1] + fVar50 * fVar60;
                      fVar47 = *pfVar33 - fVar55 * fVar60;
                      fVar48 = pfVar33[1] - fVar50 * fVar60;
                      pfVar33 = (float *)((long)pfVar40 + uVar26);
                      *pfVar33 = fVar42;
                      pfVar33[1] = fVar45;
                      pfVar33[2] = fVar47;
                      pfVar33[3] = fVar48;
                      *(undefined8 *)((long)puVar13 + uVar26) = CONCAT44(fVar45,fVar42);
                      ((undefined8 *)((long)puVar13 + uVar26))[1] =
                           CONCAT44(fVar49 + fVar45,fVar53 + fVar42);
                      pfVar33 = (float *)((long)puVar15 + uVar26);
                      *pfVar33 = fVar47;
                      pfVar33[1] = fVar48;
                      pfVar33[2] = fVar47 - fVar53;
                      pfVar33[3] = fVar48 - fVar49;
                      lVar39 = *(long *)(param_5 + 8);
                      if ((lVar39 != 0) && ((long)uVar34 < *(long *)(lVar39 + -8))) {
                        pfVar33 = (float *)(uVar34 * 0x10 + lVar39);
                        fVar52 = *pfVar33;
                        fVar51 = pfVar33[1];
                        fVar46 = pfVar33[2];
                        fVar54 = pfVar33[3];
                        uVar25 = *(undefined8 *)pfVar33;
                        local_1d8 = fVar52;
                        fStack_1d4 = fVar51;
                        fStack_1d0 = fVar46;
                        fStack_1cc = fVar54;
                        local_1b8 = fVar52;
                        fStack_1b4 = fVar51;
                        fStack_1b0 = fVar46;
                        fStack_1ac = fVar54;
                      }
                      pfVar33 = (float *)((long)puVar35 + uVar26 * 2);
                      *pfVar33 = fVar52;
                      pfVar33[1] = fVar51;
                      pfVar33[2] = fVar46;
                      pfVar33[3] = fVar54;
                      puVar7 = (undefined8 *)((long)puVar35 + uVar26 * 2 + 0x10);
                      *puVar7 = CONCAT44(fStack_1b4,local_1b8);
                      puVar7[1] = CONCAT44(fStack_1ac,fStack_1b0);
                      *(undefined8 *)((long)puVar12 + uVar26 * 2 + 0x10) = uVar25;
                      *(undefined4 *)((long)puVar12 + uVar26 * 2 + 0x1c) = 0;
                      puVar7 = (undefined8 *)((long)puVar12 + uVar26 * 2);
                      *puVar7 = CONCAT44(fStack_1d4,local_1d8);
                      puVar7[1] = CONCAT44(fStack_1cc,fStack_1d0);
                      *(float *)((long)puVar12 + uVar26 * 2 + 0x18) = fVar46;
                      *(undefined8 *)((long)puVar14 + uVar26 * 2 + 0x10) = uVar25;
                      *(undefined4 *)((long)puVar14 + uVar26 * 2 + 0x1c) = 0;
                      puVar7 = (undefined8 *)((long)puVar14 + uVar26 * 2);
                      *puVar7 = CONCAT44(fStack_1d4,local_1d8);
                      puVar7[1] = CONCAT44(fStack_1cc,fStack_1d0);
                      *(float *)((long)puVar14 + uVar26 * 2 + 0x18) = fVar46;
                      if (bVar37 != 0) {
                        fVar56 = fVar42 - (float)local_48 * local_198;
                        fVar57 = fVar45 - local_48._4_4_ * local_198;
                        fVar58 = fVar47 - (float)local_48 * local_198;
                        fVar59 = fVar48 - local_48._4_4_ * local_198;
                        *pfVar40 = fVar56;
                        pfVar40[1] = fVar57;
                        pfVar40[2] = fVar58;
                        pfVar40[3] = fVar59;
                        *puVar35 = uVar25;
                        *(undefined4 *)((long)puVar35 + 0xc) = 0;
                        *(undefined4 *)((long)puVar35 + 0x1c) = 0;
                        *(float *)(puVar35 + 1) = fVar46;
                        *(float *)(puVar35 + 2) = fVar52;
                        *(float *)((long)puVar35 + 0x14) = fVar51;
                        *(float *)(puVar35 + 3) = fVar46;
                        *puVar13 = CONCAT44(fVar57,fVar56);
                        puVar13[1] = CONCAT44(fVar57 + fVar49,fVar53 + fVar56);
                        *puVar12 = uVar25;
                        *(undefined4 *)((long)puVar12 + 0xc) = 0;
                        *(undefined4 *)((long)puVar12 + 0x1c) = 0;
                        *(float *)(puVar12 + 1) = fVar46;
                        *(float *)(puVar12 + 2) = fVar52;
                        *(float *)((long)puVar12 + 0x14) = fVar51;
                        *(float *)(puVar12 + 3) = fVar46;
                        *puVar15 = CONCAT44(fVar59,fVar58);
                        puVar15[1] = CONCAT44(fVar59 - fVar49,fVar58 - fVar53);
                        *puVar14 = uVar25;
                        *(undefined4 *)((long)puVar14 + 0xc) = 0;
                        *(undefined4 *)((long)puVar14 + 0x1c) = 0;
                        *(float *)(puVar14 + 1) = fVar46;
                        *(float *)(puVar14 + 2) = fVar52;
                        *(float *)((long)puVar14 + 0x14) = fVar51;
                        *(float *)(puVar14 + 3) = fVar46;
                      }
                      if ((bVar18 != 0) && (bVar41)) {
                        fVar56 = (float)local_58 * local_198 + fVar42;
                        fVar57 = local_58._4_4_ * local_198 + fVar45;
                        fVar58 = (float)local_58 * local_198 + fVar47;
                        fVar59 = local_58._4_4_ * local_198 + fVar48;
                        *pfVar23 = fVar56;
                        pfVar23[1] = fVar57;
                        pfVar23[2] = fVar58;
                        pfVar23[3] = fVar59;
                        *puVar6 = uVar25;
                        *(undefined4 *)((long)puVar6 + 0xc) = 0;
                        *(float *)(puVar6 + 1) = fVar46;
                        *pfVar30 = fVar52;
                        pfVar30[1] = fVar51;
                        pfVar30[3] = 0.0;
                        pfVar30[2] = fVar46;
                        puVar13[lVar27] = CONCAT44(fVar45,fVar42);
                        (puVar13 + lVar27)[1] = CONCAT44(fVar57 + fVar49,fVar56 + fVar53);
                        fVar42 = (float)uVar43;
                        fVar45 = (float)((ulong)uVar43 >> 0x20);
                        puVar13[lVar27 + 2] =
                             CONCAT44(fVar60 * fVar50 + fVar45 + local_58._4_4_ * local_198,
                                      fVar60 * fVar55 + fVar42 + (float)local_58 * local_198);
                        puVar12[lVar27 * 2] = CONCAT44(fStack_1d4,local_1d8);
                        (puVar12 + lVar27 * 2)[1] = CONCAT44(fStack_1cc,fStack_1d0);
                        *puVar3 = uVar25;
                        *(undefined4 *)((long)puVar3 + 0xc) = 0;
                        *(float *)(puVar3 + 1) = fVar46;
                        pfVar36[3] = 0.0;
                        *pfVar36 = fVar52;
                        pfVar36[1] = fVar51;
                        pfVar36[2] = fVar46;
                        puVar15[lVar27] = CONCAT44(fVar48,fVar47);
                        (puVar15 + lVar27)[1] = CONCAT44(fVar59 - fVar49,fVar58 - fVar53);
                        puVar15[lVar27 + 2] =
                             CONCAT44((fVar45 - fVar60 * fVar50) + local_58._4_4_ * local_198,
                                      (fVar42 - fVar60 * fVar55) + (float)local_58 * local_198);
                        *puVar28 = CONCAT44(fStack_1d4,local_1d8);
                        puVar28[1] = CONCAT44(fStack_1cc,fStack_1d0);
                        *puVar4 = uVar25;
                        *(undefined4 *)((long)puVar4 + 0xc) = 0;
                        *(float *)(puVar4 + 1) = fVar46;
                        pfVar5[3] = 0.0;
                        *pfVar5 = fVar52;
                        pfVar5[1] = fVar51;
                        pfVar5[2] = fVar46;
                      }
                      uVar19 = uVar19 + 1;
                      uVar34 = uVar34 + 1;
                      uVar26 = uVar26 + 0x10;
                      local_58 = local_48;
                    } while ((int)uVar19 < local_258);
                    *(undefined4 *)(pCVar21 + 0x14) = 4;
                    local_70 = 0;
                    local_80 = 0;
                    local_90 = 0;
                    if (*(long *)(pCVar21 + 0x18) == 0) {
                      if (local_c0[0] == (undefined8 *)0x0) {
                        *(undefined8 *)(pCVar21 + 0x20) = _DAT_00000000;
                    /* WARNING: Does not return */
                        pcVar10 = (code *)invalidInstructionException();
                        (*pcVar10)();
                      }
                      uVar25 = local_c0[0][-1];
                      *(undefined8 *)(pCVar21 + 0x20) = *local_c0[0];
                      if (1 < (uint)uVar25) {
                        fVar52 = *(float *)(pCVar21 + 0x28);
                        pfVar40 = (float *)(local_c0[0] + (ulong)((uint)uVar25 - 2) + 2);
                        pfVar30 = (float *)(local_c0[0] + 1);
                        do {
                          if ((fVar52 < 0.0) || (fVar51 = *(float *)(pCVar21 + 0x2c), fVar51 < 0.0))
                          {
                            _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                             ,0,0);
                            fVar51 = *(float *)(pCVar21 + 0x2c);
                            fVar52 = *(float *)(pCVar21 + 0x28);
                          }
                          fVar46 = *(float *)(pCVar21 + 0x20);
                          fVar54 = *pfVar30;
                          pfVar36 = pfVar30 + 2;
                          fVar8 = *(float *)(pCVar21 + 0x24);
                          fVar55 = pfVar30[1];
                          fVar50 = fVar54;
                          if (fVar46 <= fVar54) {
                            fVar50 = fVar46;
                          }
                          if (fVar54 <= fVar52 + fVar46) {
                            fVar54 = fVar52 + fVar46;
                          }
                          fVar46 = fVar55;
                          if (fVar55 <= fVar51 + fVar8) {
                            fVar46 = fVar51 + fVar8;
                          }
                          if (fVar8 <= fVar55) {
                            fVar55 = fVar8;
                          }
                          fVar52 = fVar54 - fVar50;
                          auVar44._4_4_ = fVar55;
                          auVar44._0_4_ = fVar50;
                          auVar44._12_4_ = fVar46 - fVar55;
                          auVar44._8_4_ = fVar52;
                          *(undefined1 (*) [16])(pCVar21 + 0x20) = auVar44;
                          pfVar30 = pfVar36;
                        } while (pfVar40 != pfVar36);
                      }
                      uVar25 = (**(code **)*RendererCanvasRender::singleton)
                                         (RendererCanvasRender::singleton,local_108,local_c8,
                                          local_d8,local_98,local_88,local_78);
                      *(undefined8 *)(pCVar21 + 0x18) = uVar25;
                    }
                    else {
                      _err_print_error("create","./servers/rendering/renderer_canvas_render.h",0x8f,
                                       "Condition \"polygon_id != 0\" is true.");
                    }
                    lVar39 = local_90;
                    if (local_90 != 0) {
                      LOCK();
                      plVar2 = (long *)(local_90 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_90 = 0;
                        Memory::free_static((void *)(lVar39 + -0x10),false);
                      }
                    }
                    lVar39 = local_80;
                    if (local_80 != 0) {
                      LOCK();
                      plVar2 = (long *)(local_80 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_80 = 0;
                        Memory::free_static((void *)(lVar39 + -0x10),false);
                      }
                    }
                    lVar39 = local_70;
                    if (local_70 != 0) {
                      LOCK();
                      plVar2 = (long *)(local_70 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_70 = 0;
                        Memory::free_static((void *)(lVar39 + -0x10),false);
                      }
                    }
                    *(undefined4 *)(pCVar22 + 0x14) = 4;
                    local_70 = 0;
                    local_80 = 0;
                    local_90 = 0;
                    if (*(long *)(pCVar22 + 0x18) == 0) {
                      if (local_a0 == (undefined8 *)0x0) {
                        *(undefined8 *)(pCVar22 + 0x20) = _DAT_00000000;
                    /* WARNING: Does not return */
                        pcVar10 = (code *)invalidInstructionException();
                        (*pcVar10)();
                      }
                      uVar25 = local_a0[-1];
                      *(undefined8 *)(pCVar22 + 0x20) = *local_a0;
                      if (1 < (uint)uVar25) {
                        pfVar40 = (float *)(local_a0 + (ulong)((uint)uVar25 - 2) + 2);
                        fVar52 = *(float *)(pCVar22 + 0x28);
                        pfVar30 = (float *)(local_a0 + 1);
                        do {
                          if ((fVar52 < 0.0) || (fVar51 = *(float *)(pCVar22 + 0x2c), fVar51 < 0.0))
                          {
                            _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                             ,0,0);
                            fVar51 = *(float *)(pCVar22 + 0x2c);
                            fVar52 = *(float *)(pCVar22 + 0x28);
                          }
                          fVar46 = *(float *)(pCVar22 + 0x20);
                          fVar54 = *pfVar30;
                          pfVar36 = pfVar30 + 2;
                          fVar8 = *(float *)(pCVar22 + 0x24);
                          fVar55 = pfVar30[1];
                          fVar50 = fVar54;
                          if (fVar46 <= fVar54) {
                            fVar50 = fVar46;
                          }
                          if (fVar54 <= fVar52 + fVar46) {
                            fVar54 = fVar52 + fVar46;
                          }
                          fVar46 = fVar55;
                          if (fVar55 <= fVar51 + fVar8) {
                            fVar46 = fVar51 + fVar8;
                          }
                          if (fVar8 <= fVar55) {
                            fVar55 = fVar8;
                          }
                          fVar52 = fVar54 - fVar50;
                          *(ulong *)(pCVar22 + 0x20) = CONCAT44(fVar55,fVar50);
                          *(ulong *)(pCVar22 + 0x28) = CONCAT44(fVar46 - fVar55,fVar52);
                          pfVar30 = pfVar36;
                        } while (pfVar36 != pfVar40);
                      }
                      uVar25 = (**(code **)*RendererCanvasRender::singleton)
                                         (RendererCanvasRender::singleton,local_108,local_a8);
                      *(undefined8 *)(pCVar22 + 0x18) = uVar25;
                    }
                    else {
                      _err_print_error("create","./servers/rendering/renderer_canvas_render.h",0x8f)
                      ;
                    }
                    lVar39 = local_90;
                    if (local_90 != 0) {
                      LOCK();
                      plVar2 = (long *)(local_90 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_90 = 0;
                        Memory::free_static((void *)(lVar39 + -0x10),false);
                      }
                    }
                    lVar39 = local_80;
                    if (local_80 != 0) {
                      LOCK();
                      plVar2 = (long *)(local_80 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_80 = 0;
                        Memory::free_static((void *)(lVar39 + -0x10),false);
                      }
                    }
                    lVar39 = local_70;
                    if (local_70 != 0) {
                      LOCK();
                      plVar2 = (long *)(local_70 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_70 = 0;
                        Memory::free_static((void *)(lVar39 + -0x10),false);
                      }
                    }
                    puVar35 = local_a0;
                    if (local_a0 != (undefined8 *)0x0) {
                      LOCK();
                      plVar2 = local_a0 + -2;
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_a0 = (undefined8 *)0x0;
                        Memory::free_static(puVar35 + -2,false);
                      }
                    }
                    puVar35 = local_b0;
                    if (local_b0 != (undefined8 *)0x0) {
                      LOCK();
                      plVar2 = local_b0 + -2;
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_b0 = (undefined8 *)0x0;
                        Memory::free_static(puVar35 + -2,false);
                      }
                    }
                    puVar35 = local_c0[0];
                    if (local_c0[0] != (undefined8 *)0x0) {
                      LOCK();
                      plVar2 = local_c0[0] + -2;
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_c0[0] = (undefined8 *)0x0;
                        Memory::free_static(puVar35 + -2,false);
                      }
                    }
                    puVar35 = local_d0;
                    if (local_d0 != (undefined8 *)0x0) {
                      LOCK();
                      plVar2 = local_d0 + -2;
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_d0 = (undefined8 *)0x0;
                        Memory::free_static(puVar35 + -2,false);
                      }
                    }
                    goto LAB_0010f214;
                  }
                  _err_print_error("canvas_item_add_polyline",
                                   "servers/rendering/renderer_canvas_cull.cpp",0x407,
                                   "Parameter \"pline_right\" is null.",0,0);
                }
              }
              pfVar40 = local_e0;
              if (local_e0 != (float *)0x0) {
                LOCK();
                pfVar30 = local_e0 + -4;
                *(long *)pfVar30 = *(long *)pfVar30 + -1;
                UNLOCK();
                if (*(long *)pfVar30 == 0) {
                  local_e0 = (float *)0x0;
                  Memory::free_static(pfVar40 + -4,false);
                }
              }
              puVar35 = local_f0;
              if (local_f0 != (undefined8 *)0x0) {
                LOCK();
                plVar2 = local_f0 + -2;
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_f0 = (undefined8 *)0x0;
                  Memory::free_static(puVar35 + -2,false);
                }
              }
              goto LAB_0010e500;
            }
          }
          uVar34 = 0;
LAB_0010e581:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar34,lVar39,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        if ((char)param_6 != '\0') {
          _err_print_error("canvas_item_add_polyline","servers/rendering/renderer_canvas_cull.cpp",
                           0x3c0,
                           "Antialiasing is not supported for thin polylines drawn using line strips (`p_width < 0`)."
                           ,0,1);
        }
        *(undefined4 *)(pCVar20 + 0x14) = 2;
        if (*(long *)(param_5 + 8) == 0) {
          if (local_258 != 0) {
            local_a0 = (undefined8 *)0x0;
            Vector<Color>::push_back(0x3f8000003f800000,local_a8);
            goto LAB_0010e33e;
          }
        }
        else {
          lVar39 = *(long *)(*(long *)(param_5 + 8) + -8);
          if ((lVar39 != 1) && (lVar27 = (long)local_258, lVar39 != lVar27)) {
            local_a0 = (undefined8 *)0x0;
            CowData<Color>::resize<false>((CowData<Color> *)&local_a0,lVar27);
            CowData<Color>::_copy_on_write((CowData<Color> *)&local_a0);
            if (0 < local_258) {
              pfVar40 = *(float **)(param_5 + 8);
              lVar39 = 0;
              pfVar30 = pfVar40;
              fVar52 = _LC6;
              fVar51 = _LC6;
              fVar46 = _LC6;
              fVar54 = _LC6;
              do {
                if ((pfVar40 != (float *)0x0) && (lVar39 < *(long *)(pfVar40 + -2))) {
                  fVar52 = *pfVar30;
                  fVar51 = pfVar30[1];
                  fVar46 = pfVar30[2];
                  fVar54 = pfVar30[3];
                }
                lVar24 = lVar39 + 1;
                pfVar30 = pfVar30 + 4;
                pfVar36 = (float *)(local_a0 + lVar39 * 2);
                *pfVar36 = fVar52;
                pfVar36[1] = fVar51;
                pfVar36[2] = fVar46;
                pfVar36[3] = fVar54;
                lVar39 = lVar24;
              } while (lVar27 != lVar24);
            }
LAB_0010e33e:
            local_70 = 0;
            local_80 = 0;
            local_90 = 0;
            if (*(long *)(pCVar20 + 0x18) == 0) {
              puVar35 = *(undefined8 **)(param_4 + 8);
              if (puVar35 == (undefined8 *)0x0) goto LAB_0010eaa1;
              uVar25 = puVar35[-1];
              *(undefined8 *)(pCVar20 + 0x20) = *puVar35;
              if (1 < (uint)uVar25) {
                fVar52 = *(float *)(pCVar20 + 0x28);
                pfVar40 = (float *)(puVar35 + 1);
                do {
                  if ((fVar52 < 0.0) || (fVar51 = *(float *)(pCVar20 + 0x2c), fVar51 < 0.0)) {
                    _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                     "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                     ,0,0);
                    fVar51 = *(float *)(pCVar20 + 0x2c);
                    fVar52 = *(float *)(pCVar20 + 0x28);
                  }
                  fVar46 = *(float *)(pCVar20 + 0x20);
                  fVar54 = *pfVar40;
                  pfVar30 = pfVar40 + 2;
                  fVar8 = *(float *)(pCVar20 + 0x24);
                  fVar55 = pfVar40[1];
                  fVar50 = fVar54;
                  if (fVar46 <= fVar54) {
                    fVar50 = fVar46;
                  }
                  if (fVar54 <= fVar52 + fVar46) {
                    fVar54 = fVar52 + fVar46;
                  }
                  fVar46 = fVar55;
                  if (fVar55 <= fVar51 + fVar8) {
                    fVar46 = fVar51 + fVar8;
                  }
                  if (fVar8 <= fVar55) {
                    fVar55 = fVar8;
                  }
                  fVar52 = fVar54 - fVar50;
                  *(ulong *)(pCVar20 + 0x20) = CONCAT44(fVar55,fVar50);
                  *(ulong *)(pCVar20 + 0x28) = CONCAT44(fVar46 - fVar55,fVar52);
                  pfVar40 = pfVar30;
                } while (pfVar30 != (float *)(puVar35 + (ulong)((uint)uVar25 - 2) + 2));
              }
              uVar25 = (**(code **)*RendererCanvasRender::singleton)
                                 (RendererCanvasRender::singleton,local_108,param_4,local_a8,
                                  local_98,local_88,local_78);
              *(undefined8 *)(pCVar20 + 0x18) = uVar25;
            }
            else {
              _err_print_error("create","./servers/rendering/renderer_canvas_render.h",0x8f,
                               "Condition \"polygon_id != 0\" is true.",0,0);
            }
            lVar39 = local_90;
            if (local_90 != 0) {
              LOCK();
              plVar2 = (long *)(local_90 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_90 = 0;
                Memory::free_static((void *)(lVar39 + -0x10),false);
              }
            }
            lVar39 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar39 + -0x10),false);
              }
            }
            lVar39 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar2 = (long *)(local_70 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar39 + -0x10),false);
              }
            }
            puVar35 = local_a0;
            if (local_a0 != (undefined8 *)0x0) {
              LOCK();
              plVar2 = local_a0 + -2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_a0 = (undefined8 *)0x0;
                Memory::free_static(puVar35 + -2,false);
              }
            }
            goto LAB_0010e500;
          }
        }
        local_70 = 0;
        local_80 = 0;
        local_90 = 0;
        if (*(long *)(pCVar20 + 0x18) == 0) {
          puVar35 = *(undefined8 **)(param_4 + 8);
          if (puVar35 == (undefined8 *)0x0) {
LAB_0010eaa1:
            local_70 = 0;
            local_80 = 0;
            local_90 = 0;
            *(undefined8 *)(pCVar20 + 0x20) = _DAT_00000000;
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          uVar25 = puVar35[-1];
          *(undefined8 *)(pCVar20 + 0x20) = *puVar35;
          if (1 < (uint)uVar25) {
            fVar52 = *(float *)(pCVar20 + 0x28);
            pfVar40 = (float *)(puVar35 + 1);
            do {
              if ((fVar52 < 0.0) || (fVar51 = *(float *)(pCVar20 + 0x2c), fVar51 < 0.0)) {
                _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                 "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                 ,0,0);
                fVar51 = *(float *)(pCVar20 + 0x2c);
                fVar52 = *(float *)(pCVar20 + 0x28);
              }
              fVar46 = *(float *)(pCVar20 + 0x20);
              fVar54 = *pfVar40;
              pfVar30 = pfVar40 + 2;
              fVar8 = *(float *)(pCVar20 + 0x24);
              fVar55 = pfVar40[1];
              fVar50 = fVar54;
              if (fVar46 <= fVar54) {
                fVar50 = fVar46;
              }
              if (fVar54 <= fVar52 + fVar46) {
                fVar54 = fVar52 + fVar46;
              }
              fVar46 = fVar55;
              if (fVar55 <= fVar51 + fVar8) {
                fVar46 = fVar51 + fVar8;
              }
              if (fVar8 <= fVar55) {
                fVar55 = fVar8;
              }
              fVar52 = fVar54 - fVar50;
              *(ulong *)(pCVar20 + 0x20) = CONCAT44(fVar55,fVar50);
              *(ulong *)(pCVar20 + 0x28) = CONCAT44(fVar46 - fVar55,fVar52);
              pfVar40 = pfVar30;
            } while (pfVar30 != (float *)(puVar35 + (ulong)((uint)uVar25 - 2) + 2));
          }
          uVar25 = (**(code **)*RendererCanvasRender::singleton)
                             (RendererCanvasRender::singleton,local_108,param_4,param_5,local_98,
                              local_88,local_78);
          *(undefined8 *)(pCVar20 + 0x18) = uVar25;
        }
        else {
          _err_print_error("create","./servers/rendering/renderer_canvas_render.h",0x8f,
                           "Condition \"polygon_id != 0\" is true.",0,0);
        }
        lVar39 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar2 = (long *)(local_90 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar39 + -0x10),false);
          }
        }
        lVar39 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar2 = (long *)(local_80 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar39 + -0x10),false);
          }
        }
        lVar39 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar2 = (long *)(local_70 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar39 + -0x10),false);
          }
        }
      }
LAB_0010e500:
      lVar39 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar2 = (long *)(local_100 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar39 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f67e;
    }
    if (*(int *)(this_00 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar25 = 0x3b4;
    pcVar29 = "Parameter \"canvas_item\" is null.";
LAB_0010e849:
    _err_print_error("canvas_item_add_polyline","servers/rendering/renderer_canvas_cull.cpp",uVar25,
                     pcVar29,0,0);
    return;
  }
LAB_0010f67e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_circle(RID, Vector2 const&, float, Color const&, bool) */

void __thiscall
RendererCanvasCull::canvas_item_add_circle
          (float param_1,RendererCanvasCull *this,ulong param_3,float *param_4,
          undefined1 (*param_5) [16],char param_6)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  CommandPolygon *pCVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  char *pcVar17;
  Item *this_00;
  long lVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  undefined1 (*pauVar23) [16];
  long in_FS_OFFSET;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float local_e4;
  float local_b0;
  float local_ac;
  undefined1 local_a8 [8];
  undefined8 *local_a0;
  undefined1 local_98 [8];
  undefined1 (*local_90) [16];
  undefined1 local_88 [8];
  undefined8 *local_80;
  undefined1 local_78 [8];
  long local_70;
  undefined1 local_68 [8];
  long local_60;
  undefined1 local_58 [8];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    if (*(int *)(this_00 + 0x290) == (int)(param_3 >> 0x20)) {
      pCVar11 = RendererCanvasRender::Item::
                alloc_command<RendererCanvasRender::Item::CommandPolygon>(this_00);
      if (pCVar11 == (CommandPolygon *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar14 = 0x596;
          pcVar17 = "Parameter \"circle\" is null.";
          goto LAB_00110242;
        }
        goto LAB_001103cb;
      }
      *(undefined4 *)(pCVar11 + 0x14) = 3;
      local_a0 = (undefined8 *)0x0;
      local_90 = (undefined1 (*) [16])0x0;
      CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_90,0x42);
      lVar18 = 1;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
      pauVar23 = local_90;
      *(undefined8 *)(local_90[0x20] + 8) = *(undefined8 *)param_4;
      *(ulong *)*local_90 = CONCAT44(param_1 * 0.0,param_1);
      *(ulong *)*local_90 =
           CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) + param_1 * 0.0,
                    (float)*(undefined8 *)param_4 + param_1);
      do {
        sincosf((float)(int)lVar18 * __LC240,&local_ac,&local_b0);
        *(ulong *)(*pauVar23 + lVar18 * 8) = CONCAT44(local_ac * param_1,local_b0 * param_1);
        *(ulong *)(*pauVar23 + lVar18 * 8) =
             CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) + local_ac * param_1,
                      (float)*(undefined8 *)param_4 + local_b0 * param_1);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x41);
      if (local_a0 == (undefined8 *)0x0) {
        CowData<int>::_copy_on_write((CowData<int> *)&local_a0);
LAB_0011029e:
        puVar15 = (undefined8 *)Memory::alloc_static(0x410,false);
        if (puVar15 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          local_a0 = puVar15 + 2;
          *puVar15 = 1;
          puVar15[1] = 0;
LAB_0010f8e2:
          local_a0[-1] = 0xc0;
        }
      }
      else {
        lVar18 = local_a0[-1];
        if (lVar18 != 0xc0) {
          CowData<int>::_copy_on_write((CowData<int> *)&local_a0);
          if (lVar18 * 4 != 0) {
            uVar12 = lVar18 * 4 - 1;
            uVar12 = uVar12 | uVar12 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            uVar12 = uVar12 | uVar12 >> 0x20;
            if (lVar18 < 0xc0) {
              if (uVar12 != 0x3ff) goto LAB_001101e6;
LAB_001100cb:
              if (local_a0 == (undefined8 *)0x0) {
                canvas_item_add_circle();
                return;
              }
              goto LAB_0010f8e2;
            }
            if (uVar12 != 0x3ff) goto LAB_001100ed;
LAB_0010f8d4:
            if (local_a0 == (undefined8 *)0x0) {
              canvas_item_add_circle();
              return;
            }
            goto LAB_0010f8e2;
          }
          if (lVar18 < 0xc0) {
LAB_001101e6:
            if (lVar18 == 0) goto LAB_0011029e;
            iVar19 = CowData<int>::_realloc((CowData<int> *)&local_a0,0x400);
            if (iVar19 == 0) goto LAB_001100cb;
          }
          else {
LAB_001100ed:
            iVar19 = CowData<int>::_realloc((CowData<int> *)&local_a0,0x400);
            if (iVar19 == 0) goto LAB_0010f8d4;
          }
        }
      }
      CowData<int>::_copy_on_write((CowData<int> *)&local_a0);
      auVar10 = __LC243;
      auVar9 = __LC169;
      auVar7 = __LC241;
      puVar15 = local_a0;
      iVar19 = __LC236;
      iVar28 = _UNK_00123754;
      iVar29 = _UNK_00123758;
      iVar30 = _UNK_0012375c;
      do {
        puVar13 = puVar15 + 6;
        *(int *)puVar15 = auVar10._0_4_;
        *(int *)((long)puVar15 + 4) = iVar19;
        *(int *)(puVar15 + 1) = iVar19 + auVar9._0_4_;
        *(int *)((long)puVar15 + 0xc) = auVar10._4_4_;
        *(int *)(puVar15 + 2) = iVar28;
        *(int *)((long)puVar15 + 0x14) = iVar28 + auVar9._4_4_;
        *(int *)(puVar15 + 3) = auVar10._8_4_;
        *(int *)((long)puVar15 + 0x1c) = iVar29;
        *(int *)(puVar15 + 4) = iVar29 + auVar9._8_4_;
        *(int *)((long)puVar15 + 0x24) = auVar10._12_4_;
        *(int *)(puVar15 + 5) = iVar30;
        *(int *)((long)puVar15 + 0x2c) = iVar30 + auVar9._12_4_;
        puVar15 = puVar13;
        iVar19 = iVar19 + auVar7._0_4_;
        iVar28 = iVar28 + auVar7._4_4_;
        iVar29 = iVar29 + auVar7._8_4_;
        iVar30 = iVar30 + auVar7._12_4_;
      } while (puVar13 != local_a0 + 0x60);
      local_80 = (undefined8 *)0x0;
      Vector<Color>::push_back(*(undefined8 *)*param_5,*(undefined8 *)(*param_5 + 8));
      local_50 = 0;
      local_60 = 0;
      local_70 = 0;
      if (*(long *)(pCVar11 + 0x18) == 0) {
        if (local_90 == (undefined1 (*) [16])0x0) {
          *(undefined8 *)(pCVar11 + 0x20) = _DAT_00000000;
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar14 = *(undefined8 *)(local_90[-1] + 8);
        *(undefined8 *)(pCVar11 + 0x20) = *(undefined8 *)*local_90;
        uVar16 = (uint)uVar14;
        if (1 < uVar16) {
          fVar26 = *(float *)(pCVar11 + 0x28);
          pauVar23 = local_90 + 1;
          pfVar22 = (float *)(*local_90 + 8);
          do {
            if ((fVar26 < 0.0) || (fVar24 = *(float *)(pCVar11 + 0x2c), fVar24 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
              fVar24 = *(float *)(pCVar11 + 0x2c);
              fVar26 = *(float *)(pCVar11 + 0x28);
            }
            fVar25 = *pfVar22;
            fVar27 = *(float *)(pCVar11 + 0x20);
            pfVar20 = pfVar22 + 2;
            fVar3 = *(float *)(pCVar11 + 0x24);
            fVar4 = pfVar22[1];
            fVar5 = fVar25;
            if (fVar27 <= fVar25) {
              fVar5 = fVar27;
            }
            if (fVar25 <= fVar26 + fVar27) {
              fVar25 = fVar26 + fVar27;
            }
            fVar27 = fVar4;
            if (fVar4 <= fVar24 + fVar3) {
              fVar27 = fVar24 + fVar3;
            }
            if (fVar3 <= fVar4) {
              fVar4 = fVar3;
            }
            fVar26 = fVar25 - fVar5;
            *(ulong *)(pCVar11 + 0x20) = CONCAT44(fVar4,fVar5);
            *(ulong *)(pCVar11 + 0x28) = CONCAT44(fVar27 - fVar4,fVar26);
            pfVar22 = pfVar20;
          } while ((float *)(*pauVar23 + (ulong)(uVar16 - 2) * 8) != pfVar20);
        }
        uVar14 = (**(code **)*RendererCanvasRender::singleton)
                           (RendererCanvasRender::singleton,local_a8,local_98,local_88,local_78,
                            local_68,local_58);
        *(undefined8 *)(pCVar11 + 0x18) = uVar14;
      }
      else {
        _err_print_error("create","./servers/rendering/renderer_canvas_render.h",0x8f,
                         "Condition \"polygon_id != 0\" is true.",0,0);
      }
      lVar18 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
      lVar18 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
      lVar18 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
      puVar15 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_80 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = (undefined8 *)0x0;
          Memory::free_static(puVar15 + -2,false);
        }
      }
      pauVar23 = local_90;
      if (local_90 != (undefined1 (*) [16])0x0) {
        LOCK();
        pauVar2 = local_90 + -1;
        *(long *)*pauVar2 = *(long *)*pauVar2 + -1;
        UNLOCK();
        if (*(long *)*pauVar2 == 0) {
          local_90 = (undefined1 (*) [16])0x0;
          Memory::free_static(pauVar23 + -1,false);
        }
      }
      puVar15 = local_a0;
      if (local_a0 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_a0 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = (undefined8 *)0x0;
          Memory::free_static(puVar15 + -2,false);
        }
      }
      if (param_6 != '\0') {
        local_e4 = _LC222;
        if ((0.0 <= param_1 + param_1) && (param_1 + param_1 < _LC6)) {
          local_e4 = param_1 * _LC222;
        }
        pCVar11 = RendererCanvasRender::Item::
                  alloc_command<RendererCanvasRender::Item::CommandPolygon>(this_00);
        if (pCVar11 == (CommandPolygon *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar14 = 0x5c3;
            pcVar17 = "Parameter \"feather\" is null.";
            goto LAB_00110242;
          }
          goto LAB_001103cb;
        }
        *(undefined4 *)(pCVar11 + 0x14) = 4;
        local_a0 = (undefined8 *)0x0;
        uVar6 = *(undefined4 *)(*param_5 + 8);
        uVar14 = *(undefined8 *)*param_5;
        local_90 = (undefined1 (*) [16])0x0;
        local_80 = (undefined8 *)0x0;
        CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_80,0x82);
        CowData<Color>::resize<false>((CowData<Color> *)&local_90,0x82);
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_80);
        puVar15 = local_80;
        CowData<Color>::_copy_on_write((CowData<Color> *)&local_90);
        local_e4 = local_e4 + param_1;
        iVar19 = 0;
        pauVar23 = local_90;
        fVar26 = _LC6;
        fVar24 = (float)_LC237;
        fVar25 = _LC237._4_4_;
        fVar27 = 0.0;
        while( true ) {
          iVar19 = iVar19 + 1;
          auVar7 = *param_5;
          *puVar15 = CONCAT44(param_1 * fVar25,param_1 * fVar24);
          *puVar15 = CONCAT44(param_1 * fVar25 + param_4[1],*param_4 + param_1 * fVar24);
          puVar15[1] = CONCAT44(fVar27 * local_e4,fVar26 * local_e4);
          puVar15[1] = CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) + fVar25 * local_e4,
                                (float)*(undefined8 *)param_4 + fVar24 * local_e4);
          *pauVar23 = auVar7;
          *(undefined8 *)pauVar23[1] = uVar14;
          *(undefined4 *)(pauVar23[1] + 8) = uVar6;
          *(undefined4 *)(pauVar23[1] + 0xc) = 0;
          if (iVar19 == 0x41) break;
          sincosf((float)iVar19 * __LC240,&local_ac,&local_b0);
          puVar15 = puVar15 + 2;
          pauVar23 = pauVar23 + 2;
          fVar26 = local_b0;
          fVar24 = local_b0;
          fVar25 = local_ac;
          fVar27 = local_ac;
        }
        local_50 = 0;
        local_60 = 0;
        local_70 = 0;
        if (*(long *)(pCVar11 + 0x18) == 0) {
          if (local_80 == (undefined8 *)0x0) {
            *(undefined8 *)(pCVar11 + 0x20) = _DAT_00000000;
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar14 = local_80[-1];
          *(undefined8 *)(pCVar11 + 0x20) = *local_80;
          if (1 < (uint)uVar14) {
            fVar26 = *(float *)(pCVar11 + 0x28);
            pfVar22 = (float *)(local_80 + (ulong)((uint)uVar14 - 2) + 2);
            pfVar20 = (float *)(local_80 + 1);
            do {
              if ((fVar26 < 0.0) || (fVar24 = *(float *)(pCVar11 + 0x2c), fVar24 < 0.0)) {
                _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                 "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                 ,0,0);
                fVar24 = *(float *)(pCVar11 + 0x2c);
                fVar26 = *(float *)(pCVar11 + 0x28);
              }
              fVar25 = *pfVar20;
              fVar27 = *(float *)(pCVar11 + 0x20);
              pfVar21 = pfVar20 + 2;
              fVar3 = *(float *)(pCVar11 + 0x24);
              fVar4 = pfVar20[1];
              fVar5 = fVar25;
              if (fVar27 <= fVar25) {
                fVar5 = fVar27;
              }
              if (fVar25 <= fVar26 + fVar27) {
                fVar25 = fVar26 + fVar27;
              }
              fVar27 = fVar4;
              if (fVar4 <= fVar24 + fVar3) {
                fVar27 = fVar24 + fVar3;
              }
              if (fVar3 <= fVar4) {
                fVar4 = fVar3;
              }
              fVar26 = fVar25 - fVar5;
              *(ulong *)(pCVar11 + 0x20) = CONCAT44(fVar4,fVar5);
              *(ulong *)(pCVar11 + 0x28) = CONCAT44(fVar27 - fVar4,fVar26);
              pfVar20 = pfVar21;
            } while (pfVar21 != pfVar22);
          }
          uVar14 = (**(code **)*RendererCanvasRender::singleton)
                             (RendererCanvasRender::singleton,local_a8,local_88,local_98,local_78,
                              local_68,local_58);
          *(undefined8 *)(pCVar11 + 0x18) = uVar14;
        }
        else {
          _err_print_error("create","./servers/rendering/renderer_canvas_render.h",0x8f,
                           "Condition \"polygon_id != 0\" is true.",0,0);
        }
        lVar18 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar18 + -0x10),false);
          }
        }
        lVar18 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar18 + -0x10),false);
          }
        }
        lVar18 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar18 + -0x10),false);
          }
        }
        puVar15 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = local_80 + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = (undefined8 *)0x0;
            Memory::free_static(puVar15 + -2,false);
          }
        }
        pauVar23 = local_90;
        if (local_90 != (undefined1 (*) [16])0x0) {
          LOCK();
          pauVar2 = local_90 + -1;
          *(long *)*pauVar2 = *(long *)*pauVar2 + -1;
          UNLOCK();
          if (*(long *)*pauVar2 == 0) {
            local_90 = (undefined1 (*) [16])0x0;
            Memory::free_static(pauVar23 + -1,false);
          }
        }
        puVar15 = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = local_a0 + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = (undefined8 *)0x0;
            Memory::free_static(puVar15 + -2,false);
          }
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001103cb;
    }
    if (*(int *)(this_00 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar14 = 0x590;
    pcVar17 = "Parameter \"canvas_item\" is null.";
LAB_00110242:
    _err_print_error("canvas_item_add_circle","servers/rendering/renderer_canvas_cull.cpp",uVar14,
                     pcVar17,0,0);
    return;
  }
LAB_001103cb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_polygon(RID, Vector<Vector2> const&, Vector<Color> const&,
   Vector<Vector2> const&, RID) */

void __thiscall
RendererCanvasCull::canvas_item_add_polygon
          (RendererCanvasCull *this,ulong param_2,Vector *param_3,long param_4,long param_5,
          undefined8 param_6)

{
  long *plVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  char cVar7;
  CommandPolygon *pCVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  Item *this_00;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_78 [8];
  long local_70;
  undefined1 local_68 [8];
  long local_60;
  Vector local_58 [8];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    iVar3 = *(int *)(this_00 + 0x290);
    if (iVar3 == (int)(param_2 >> 0x20)) {
      if ((*(long *)(param_3 + 8) == 0) ||
         (uVar13 = (uint)*(undefined8 *)(*(long *)(param_3 + 8) + -8), (int)uVar13 < 3)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar9 = 0x6aa;
          pcVar12 = "Condition \"pointcount < 3\" is true.";
          goto LAB_00110786;
        }
        goto LAB_0011094f;
      }
      if (*(long *)(param_4 + 8) != 0) {
        uVar10 = (uint)*(undefined8 *)(*(long *)(param_4 + 8) + -8);
        if (*(long *)(param_5 + 8) == 0) {
          if (uVar10 < 2 || uVar13 == uVar10) goto LAB_001104b3;
        }
        else {
          uVar11 = *(uint *)(*(long *)(param_5 + 8) + -8);
          if (uVar10 < 2 || uVar13 == uVar10) goto LAB_001104a7;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar9 = 0x6ad;
          pcVar12 = 
          "Condition \"color_size != 0 && color_size != 1 && color_size != pointcount\" is true.";
          goto LAB_00110786;
        }
        goto LAB_0011094f;
      }
      if (*(long *)(param_5 + 8) != 0) {
        uVar11 = *(uint *)(*(long *)(param_5 + 8) + -8);
LAB_001104a7:
        if ((uVar11 != 0) && (uVar11 != uVar13)) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar9 = 0x6ae;
            pcVar12 = "Condition \"uv_size != 0 && (uv_size != pointcount)\" is true.";
            goto LAB_00110786;
          }
          goto LAB_0011094f;
        }
      }
LAB_001104b3:
      local_50 = 0;
      cVar7 = Triangulate::triangulate(param_3,local_58);
      lVar6 = local_50;
      if (cVar7 == '\0') {
        local_70 = 0;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
          goto LAB_00110511;
        }
LAB_00110878:
        _err_print_error("canvas_item_add_polygon","servers/rendering/renderer_canvas_cull.cpp",
                         0x6b1,"Condition \"indices.is_empty()\" is true.",
                         "Invalid polygon data, triangulation failed.",0,0);
      }
      else {
        local_70 = local_50;
LAB_00110511:
        if (local_70 == 0) goto LAB_00110878;
        pCVar8 = RendererCanvasRender::Item::
                 alloc_command<RendererCanvasRender::Item::CommandPolygon>(this_00);
        if (pCVar8 == (CommandPolygon *)0x0) {
          _err_print_error("canvas_item_add_polygon","servers/rendering/renderer_canvas_cull.cpp",
                           0x6b4,"Parameter \"polygon\" is null.",0,0);
        }
        else {
          *(undefined4 *)(pCVar8 + 0x14) = 3;
          *(undefined8 *)(pCVar8 + 0x30) = param_6;
          local_60 = 0;
          local_50 = 0;
          if (*(long *)(pCVar8 + 0x18) == 0) {
            puVar4 = *(undefined8 **)(param_3 + 8);
            if (puVar4 == (undefined8 *)0x0) {
              *(undefined8 *)(pCVar8 + 0x20) = _DAT_00000000;
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar9 = puVar4[-1];
            *(undefined8 *)(pCVar8 + 0x20) = *puVar4;
            if (1 < (uint)uVar9) {
              fVar18 = *(float *)(pCVar8 + 0x28);
              pfVar14 = (float *)(puVar4 + 1);
              do {
                if ((fVar18 < 0.0) || (fVar16 = *(float *)(pCVar8 + 0x2c), fVar16 < 0.0)) {
                  _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                   "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                   ,0,0);
                  fVar16 = *(float *)(pCVar8 + 0x2c);
                  fVar18 = *(float *)(pCVar8 + 0x28);
                }
                fVar17 = *(float *)(pCVar8 + 0x20);
                fVar19 = *pfVar14;
                pfVar15 = pfVar14 + 2;
                fVar2 = *(float *)(pCVar8 + 0x24);
                fVar21 = pfVar14[1];
                fVar20 = fVar19;
                if (fVar17 <= fVar19) {
                  fVar20 = fVar17;
                }
                if (fVar19 <= fVar18 + fVar17) {
                  fVar19 = fVar18 + fVar17;
                }
                fVar17 = fVar21;
                if (fVar21 <= fVar16 + fVar2) {
                  fVar17 = fVar16 + fVar2;
                }
                if (fVar2 <= fVar21) {
                  fVar21 = fVar2;
                }
                fVar18 = fVar19 - fVar20;
                *(float *)(pCVar8 + 0x20) = fVar20;
                *(float *)(pCVar8 + 0x24) = fVar21;
                *(float *)(pCVar8 + 0x28) = fVar18;
                *(float *)(pCVar8 + 0x2c) = fVar17 - fVar21;
                pfVar14 = pfVar15;
              } while (pfVar15 != (float *)(puVar4 + (ulong)((uint)uVar9 - 2) + 2));
            }
            uVar9 = (**(code **)*RendererCanvasRender::singleton)
                              (RendererCanvasRender::singleton,local_78,param_3,param_4,param_5,
                               local_68,local_58);
            *(undefined8 *)(pCVar8 + 0x18) = uVar9;
          }
          else {
            _err_print_error("create","./servers/rendering/renderer_canvas_render.h",0x8f,
                             "Condition \"polygon_id != 0\" is true.",0,0);
          }
          lVar6 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          lVar6 = local_50;
          if (local_50 != 0) {
            LOCK();
            plVar1 = (long *)(local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_50 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011094f;
    }
    if (iVar3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar9 = 0x6a7;
    pcVar12 = "Parameter \"canvas_item\" is null.";
LAB_00110786:
    _err_print_error("canvas_item_add_polygon","servers/rendering/renderer_canvas_cull.cpp",uVar9,
                     pcVar12,0,0);
    return;
  }
LAB_0011094f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_triangle_array(RID, Vector<int> const&, Vector<Vector2>
   const&, Vector<Color> const&, Vector<Vector2> const&, Vector<int> const&, Vector<float> const&,
   RID, int) */

long RendererCanvasCull::canvas_item_add_triangle_array
               (long param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,long param_6
               ,long param_7,long param_8,undefined8 param_9)

{
  float fVar1;
  undefined8 *puVar2;
  code *pcVar3;
  CommandPolygon *pCVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  Item *this;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x134))) {
    this = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x130)) * 0x298 +
                   *(long *)(*(long *)(param_1 + 0x120) +
                            ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x130)) * 8));
    iVar8 = *(int *)(this + 0x290);
    if (iVar8 == (int)(param_2 >> 0x20)) {
      if ((*(long *)(param_4 + 8) == 0) ||
         (iVar8 = (int)*(undefined8 *)(*(long *)(param_4 + 8) + -8), iVar8 == 0)) {
        uVar5 = 0x6bf;
        pcVar7 = "Condition \"vertex_count == 0\" is true.";
      }
      else if ((*(long *)(param_5 + 8) == 0) ||
              ((lVar6 = *(long *)(*(long *)(param_5 + 8) + -8), lVar6 == 1 || (iVar8 == lVar6)))) {
        if ((*(long *)(param_6 + 8) == 0) || ((long)iVar8 == *(long *)(*(long *)(param_6 + 8) + -8))
           ) {
          if ((*(long *)(param_7 + 8) == 0) ||
             ((long)(iVar8 * 4) == *(long *)(*(long *)(param_7 + 8) + -8))) {
            if ((*(long *)(param_8 + 8) == 0) ||
               ((long)(iVar8 << 2) == *(long *)(*(long *)(param_8 + 8) + -8))) {
              pCVar4 = RendererCanvasRender::Item::
                       alloc_command<RendererCanvasRender::Item::CommandPolygon>(this);
              if (pCVar4 != (CommandPolygon *)0x0) {
                *(undefined8 *)(pCVar4 + 0x30) = param_9;
                if (*(long *)(pCVar4 + 0x18) == 0) {
                  puVar2 = *(undefined8 **)(param_4 + 8);
                  if (puVar2 == (undefined8 *)0x0) {
                    *(undefined8 *)(pCVar4 + 0x20) = _DAT_00000000;
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  uVar5 = puVar2[-1];
                  *(undefined8 *)(pCVar4 + 0x20) = *puVar2;
                  if (1 < (uint)uVar5) {
                    fVar13 = *(float *)(pCVar4 + 0x28);
                    pfVar9 = (float *)(puVar2 + 1);
                    do {
                      if ((fVar13 < 0.0) || (fVar11 = *(float *)(pCVar4 + 0x2c), fVar11 < 0.0)) {
                        _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                         ,0,0);
                        fVar11 = *(float *)(pCVar4 + 0x2c);
                        fVar13 = *(float *)(pCVar4 + 0x28);
                      }
                      fVar12 = *(float *)(pCVar4 + 0x20);
                      fVar14 = *pfVar9;
                      pfVar10 = pfVar9 + 2;
                      fVar1 = *(float *)(pCVar4 + 0x24);
                      fVar16 = pfVar9[1];
                      fVar15 = fVar14;
                      if (fVar12 <= fVar14) {
                        fVar15 = fVar12;
                      }
                      if (fVar14 <= fVar13 + fVar12) {
                        fVar14 = fVar13 + fVar12;
                      }
                      fVar12 = fVar16;
                      if (fVar16 <= fVar11 + fVar1) {
                        fVar12 = fVar11 + fVar1;
                      }
                      if (fVar1 <= fVar16) {
                        fVar16 = fVar1;
                      }
                      fVar13 = fVar14 - fVar15;
                      *(float *)(pCVar4 + 0x20) = fVar15;
                      *(float *)(pCVar4 + 0x24) = fVar16;
                      *(float *)(pCVar4 + 0x28) = fVar13;
                      *(float *)(pCVar4 + 0x2c) = fVar12 - fVar16;
                      pfVar9 = pfVar10;
                    } while ((float *)(puVar2 + (ulong)((uint)uVar5 - 2) + 2) != pfVar10);
                  }
                  uVar5 = (**(code **)*RendererCanvasRender::singleton)
                                    (RendererCanvasRender::singleton,param_3,param_4,param_5,param_6
                                     ,param_7);
                  *(undefined8 *)(pCVar4 + 0x18) = uVar5;
                }
                else {
                  param_8 = _err_print_error("create","./servers/rendering/renderer_canvas_render.h"
                                             ,0x8f,"Condition \"polygon_id != 0\" is true.",0,0);
                }
                *(undefined4 *)(pCVar4 + 0x14) = 3;
                return param_8;
              }
              uVar5 = 0x6c6;
              pcVar7 = "Parameter \"polygon\" is null.";
            }
            else {
              uVar5 = 0x6c3;
              pcVar7 = 
              "Condition \"!p_weights.is_empty() && p_weights.size() != vertex_count * 4\" is true."
              ;
            }
          }
          else {
            uVar5 = 0x6c2;
            pcVar7 = 
            "Condition \"!p_bones.is_empty() && p_bones.size() != vertex_count * 4\" is true.";
          }
        }
        else {
          uVar5 = 0x6c1;
          pcVar7 = "Condition \"!p_uvs.is_empty() && p_uvs.size() != vertex_count\" is true.";
        }
      }
      else {
        uVar5 = 0x6c0;
        pcVar7 = 
        "Condition \"!p_colors.is_empty() && p_colors.size() != vertex_count && p_colors.size() != 1\" is true."
        ;
      }
      goto LAB_00110bd2;
    }
    if (iVar8 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar5 = 0x6bc;
  pcVar7 = "Parameter \"canvas_item\" is null.";
LAB_00110bd2:
  lVar6 = _err_print_error("canvas_item_add_triangle_array",
                           "servers/rendering/renderer_canvas_cull.cpp",uVar5,pcVar7,0,0);
  return lVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_line(RID, Vector2 const&, Vector2 const&, Color const&,
   float, bool) */

void __thiscall
RendererCanvasCull::canvas_item_add_line
          (float param_1,RendererCanvasCull *this,ulong param_3,float *param_4,float *param_5,
          undefined8 *param_6,char param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  CommandPrimitive *pCVar5;
  CommandPrimitive *pCVar6;
  CommandPrimitive *pCVar7;
  char *pcVar8;
  long lVar9;
  Item *this_00;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    if (*(int *)(this_00 + 0x290) == (int)(param_3 >> 0x20)) {
      pCVar5 = RendererCanvasRender::Item::
               alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
      if (pCVar5 == (CommandPrimitive *)0x0) {
        if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001119ae;
        uVar12 = 0x2d2;
        pcVar8 = "Parameter \"line\" is null.";
        goto LAB_001117d1;
      }
      uVar12 = Vector2::normalized();
      fVar18 = (float)((ulong)uVar12 >> 0x20);
      if (param_1 < 0.0) {
        local_e4 = *param_5;
        lVar9 = 2;
        local_e8 = param_5[1];
        fVar25 = *param_4;
        fVar10 = param_4[1];
        *(undefined8 *)(pCVar5 + 0x18) = *(undefined8 *)param_4;
        *(undefined8 *)(pCVar5 + 0x20) = *(undefined8 *)param_5;
        fVar16 = fVar25;
        fVar27 = fVar10;
        local_e0 = local_e8;
        fVar31 = local_e4;
      }
      else {
        lVar9 = 4;
        fVar10 = param_1 * fVar18 * _LC233;
        fVar25 = param_1 * (float)uVar12 * _LC233;
        local_e8 = fVar10 + param_5[1];
        fVar31 = fVar25 + *param_5;
        fVar27 = fVar10 + param_4[1];
        fVar16 = fVar25 + *param_4;
        local_e0 = param_5[1] - fVar10;
        local_e4 = *param_5 - fVar25;
        fVar10 = param_4[1] - fVar10;
        fVar25 = *param_4 - fVar25;
        *(float *)(pCVar5 + 0x18) = fVar16;
        *(float *)(pCVar5 + 0x1c) = fVar27;
        *(float *)(pCVar5 + 0x20) = fVar25;
        *(float *)(pCVar5 + 0x24) = fVar10;
        *(float *)(pCVar5 + 0x28) = local_e4;
        *(float *)(pCVar5 + 0x2c) = local_e0;
        *(float *)(pCVar5 + 0x30) = fVar31;
        *(float *)(pCVar5 + 0x34) = local_e8;
      }
      *(int *)(pCVar5 + 0x14) = (int)lVar9;
      pCVar6 = pCVar5;
      do {
        uVar13 = param_6[1];
        pCVar7 = pCVar6 + 0x10;
        *(undefined8 *)(pCVar6 + 0x58) = *param_6;
        *(undefined8 *)(pCVar6 + 0x60) = uVar13;
        pCVar6 = pCVar7;
      } while (pCVar7 != pCVar5 + lVar9 * 0x10);
      if (param_7 != '\0') {
        if ((param_1 < 0.0) || (_LC6 <= param_1)) {
          local_dc = _LC222;
        }
        else {
          local_dc = param_1 * _LC222;
        }
        uVar13 = Vector2::normalized();
        fVar20 = (float)uVar12 * local_dc;
        fVar18 = fVar18 * local_dc;
        uVar12 = *param_6;
        uVar22 = (undefined4)uVar12;
        uVar21 = (undefined4)((ulong)uVar12 >> 0x20);
        uVar1 = *(undefined4 *)(param_6 + 1);
        pCVar5 = RendererCanvasRender::Item::
                 alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
        if (pCVar5 == (CommandPrimitive *)0x0) {
          _err_print_error("canvas_item_add_line","servers/rendering/renderer_canvas_cull.cpp",0x305
                           ,"Parameter \"left_border\" is null.",0,0);
        }
        else {
          uVar14 = CONCAT44(fVar18 + fVar27,fVar16 + fVar20);
          uVar26 = CONCAT44(fVar27,fVar16);
          uVar28 = CONCAT44(local_e8,fVar31);
          uVar29 = CONCAT44(local_e8 + fVar18,fVar31 + fVar20);
          *(undefined8 *)(pCVar5 + 0x18) = uVar26;
          *(undefined8 *)(pCVar5 + 0x20) = uVar14;
          *(undefined8 *)(pCVar5 + 0x28) = uVar29;
          *(undefined8 *)(pCVar5 + 0x30) = uVar28;
          uVar3 = *param_6;
          uVar4 = param_6[1];
          *(undefined8 *)(pCVar5 + 0x68) = uVar12;
          *(undefined8 *)(pCVar5 + 0x58) = uVar3;
          *(undefined8 *)(pCVar5 + 0x60) = uVar4;
          *(undefined4 *)(pCVar5 + 0x74) = 0;
          *(undefined4 *)(pCVar5 + 0x78) = uVar22;
          *(undefined4 *)(pCVar5 + 0x7c) = uVar21;
          *(undefined4 *)(pCVar5 + 0x84) = 0;
          *(undefined4 *)(pCVar5 + 0x70) = uVar1;
          *(undefined4 *)(pCVar5 + 0x80) = uVar1;
          uVar3 = *param_6;
          uVar4 = param_6[1];
          *(undefined4 *)(pCVar5 + 0x14) = 4;
          *(undefined8 *)(pCVar5 + 0x88) = uVar3;
          *(undefined8 *)(pCVar5 + 0x90) = uVar4;
          pCVar5 = RendererCanvasRender::Item::
                   alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
          uVar3 = CONCAT44(fVar10,fVar25);
          if (pCVar5 == (CommandPrimitive *)0x0) {
            _err_print_error("canvas_item_add_line","servers/rendering/renderer_canvas_cull.cpp",
                             0x315,"Parameter \"right_border\" is null.",0,0);
          }
          else {
            fVar33 = fVar10 - fVar18;
            fVar32 = fVar25 - fVar20;
            uVar30 = CONCAT44(local_e0,local_e4);
            *(undefined8 *)(pCVar5 + 0x18) = uVar3;
            *(ulong *)(pCVar5 + 0x20) = CONCAT44(fVar33,fVar32);
            uVar23 = CONCAT44(local_e0 - fVar18,local_e4 - fVar20);
            *(undefined8 *)(pCVar5 + 0x28) = uVar23;
            *(undefined8 *)(pCVar5 + 0x30) = uVar30;
            uVar4 = *param_6;
            uVar17 = param_6[1];
            *(undefined8 *)(pCVar5 + 0x68) = uVar12;
            *(undefined4 *)(pCVar5 + 0x74) = 0;
            *(undefined4 *)(pCVar5 + 0x78) = uVar22;
            *(undefined4 *)(pCVar5 + 0x7c) = uVar21;
            *(undefined4 *)(pCVar5 + 0x84) = 0;
            *(undefined8 *)(pCVar5 + 0x58) = uVar4;
            *(undefined8 *)(pCVar5 + 0x60) = uVar17;
            *(undefined4 *)(pCVar5 + 0x70) = uVar1;
            *(undefined4 *)(pCVar5 + 0x80) = uVar1;
            uVar4 = *param_6;
            uVar17 = param_6[1];
            *(undefined4 *)(pCVar5 + 0x14) = 4;
            *(undefined8 *)(pCVar5 + 0x88) = uVar4;
            *(undefined8 *)(pCVar5 + 0x90) = uVar17;
            pCVar5 = RendererCanvasRender::Item::
                     alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
            if (pCVar5 == (CommandPrimitive *)0x0) {
              _err_print_error("canvas_item_add_line","servers/rendering/renderer_canvas_cull.cpp",
                               0x325,"Parameter \"top_border\" is null.",0,0);
            }
            else {
              fVar11 = (float)uVar13 * local_dc;
              local_dc = (float)((ulong)uVar13 >> 0x20) * local_dc;
              uVar17 = CONCAT44(fVar27 + local_dc,fVar16 + fVar11);
              *(undefined8 *)(pCVar5 + 0x18) = uVar26;
              *(undefined8 *)(pCVar5 + 0x20) = uVar17;
              uVar19 = CONCAT44(fVar10 + local_dc,fVar25 + fVar11);
              *(undefined8 *)(pCVar5 + 0x28) = uVar19;
              *(undefined8 *)(pCVar5 + 0x30) = uVar3;
              uVar13 = *param_6;
              uVar4 = param_6[1];
              *(undefined8 *)(pCVar5 + 0x68) = uVar12;
              *(undefined4 *)(pCVar5 + 0x74) = 0;
              *(undefined4 *)(pCVar5 + 0x78) = uVar22;
              *(undefined4 *)(pCVar5 + 0x7c) = uVar21;
              *(undefined4 *)(pCVar5 + 0x84) = 0;
              *(undefined8 *)(pCVar5 + 0x58) = uVar13;
              *(undefined8 *)(pCVar5 + 0x60) = uVar4;
              *(undefined4 *)(pCVar5 + 0x70) = uVar1;
              *(undefined4 *)(pCVar5 + 0x80) = uVar1;
              uVar13 = *param_6;
              uVar4 = param_6[1];
              *(undefined4 *)(pCVar5 + 0x14) = 4;
              *(undefined8 *)(pCVar5 + 0x88) = uVar13;
              *(undefined8 *)(pCVar5 + 0x90) = uVar4;
              pCVar5 = RendererCanvasRender::Item::
                       alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
              if (pCVar5 == (CommandPrimitive *)0x0) {
                _err_print_error("canvas_item_add_line","servers/rendering/renderer_canvas_cull.cpp"
                                 ,0x335,"Parameter \"bottom_border\" is null.",0,0);
              }
              else {
                uVar15 = CONCAT44(local_e8 - local_dc,fVar31 - fVar11);
                *(undefined8 *)(pCVar5 + 0x18) = uVar28;
                *(undefined8 *)(pCVar5 + 0x20) = uVar15;
                uVar24 = CONCAT44(local_e0 - local_dc,local_e4 - fVar11);
                *(undefined8 *)(pCVar5 + 0x28) = uVar24;
                *(undefined8 *)(pCVar5 + 0x30) = uVar30;
                uVar13 = *param_6;
                uVar4 = param_6[1];
                *(undefined8 *)(pCVar5 + 0x68) = uVar12;
                *(undefined4 *)(pCVar5 + 0x74) = 0;
                *(undefined4 *)(pCVar5 + 0x78) = uVar22;
                *(undefined4 *)(pCVar5 + 0x7c) = uVar21;
                *(undefined4 *)(pCVar5 + 0x84) = 0;
                *(undefined8 *)(pCVar5 + 0x58) = uVar13;
                *(undefined8 *)(pCVar5 + 0x60) = uVar4;
                *(undefined4 *)(pCVar5 + 0x70) = uVar1;
                *(undefined4 *)(pCVar5 + 0x80) = uVar1;
                uVar13 = *param_6;
                uVar4 = param_6[1];
                *(undefined4 *)(pCVar5 + 0x14) = 4;
                *(undefined8 *)(pCVar5 + 0x88) = uVar13;
                *(undefined8 *)(pCVar5 + 0x90) = uVar4;
                pCVar5 = RendererCanvasRender::Item::
                         alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
                if (pCVar5 == (CommandPrimitive *)0x0) {
                  _err_print_error("canvas_item_add_line",
                                   "servers/rendering/renderer_canvas_cull.cpp",0x345,
                                   "Parameter \"top_left_corner\" is null.",0,0);
                }
                else {
                  *(undefined8 *)(pCVar5 + 0x18) = uVar26;
                  *(undefined8 *)(pCVar5 + 0x20) = uVar17;
                  *(ulong *)(pCVar5 + 0x28) =
                       CONCAT44(fVar18 + fVar27 + local_dc,fVar16 + fVar20 + fVar11);
                  *(undefined8 *)(pCVar5 + 0x30) = uVar14;
                  uVar13 = *param_6;
                  uVar4 = param_6[1];
                  *(undefined8 *)(pCVar5 + 0x68) = uVar12;
                  *(undefined4 *)(pCVar5 + 0x74) = 0;
                  *(undefined4 *)(pCVar5 + 0x78) = uVar22;
                  *(undefined4 *)(pCVar5 + 0x7c) = uVar21;
                  *(undefined4 *)(pCVar5 + 0x84) = 0;
                  *(undefined4 *)(pCVar5 + 0x88) = uVar22;
                  *(undefined4 *)(pCVar5 + 0x8c) = uVar21;
                  *(undefined4 *)(pCVar5 + 0x94) = 0;
                  *(undefined4 *)(pCVar5 + 0x14) = 4;
                  *(undefined4 *)(pCVar5 + 0x70) = uVar1;
                  *(undefined4 *)(pCVar5 + 0x80) = uVar1;
                  *(undefined4 *)(pCVar5 + 0x90) = uVar1;
                  *(undefined8 *)(pCVar5 + 0x58) = uVar13;
                  *(undefined8 *)(pCVar5 + 0x60) = uVar4;
                  pCVar5 = RendererCanvasRender::Item::
                           alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
                  if (pCVar5 == (CommandPrimitive *)0x0) {
                    _err_print_error("canvas_item_add_line",
                                     "servers/rendering/renderer_canvas_cull.cpp",0x355,
                                     "Parameter \"top_right_corner\" is null.",0,0);
                  }
                  else {
                    *(undefined8 *)(pCVar5 + 0x18) = uVar3;
                    *(undefined8 *)(pCVar5 + 0x20) = uVar19;
                    *(ulong *)(pCVar5 + 0x28) = CONCAT44(fVar33 + local_dc,fVar32 + fVar11);
                    *(ulong *)(pCVar5 + 0x30) = CONCAT44(fVar33,fVar32);
                    uVar13 = *param_6;
                    uVar3 = param_6[1];
                    *(undefined8 *)(pCVar5 + 0x68) = uVar12;
                    *(undefined4 *)(pCVar5 + 0x74) = 0;
                    *(undefined4 *)(pCVar5 + 0x78) = uVar22;
                    *(undefined4 *)(pCVar5 + 0x7c) = uVar21;
                    *(undefined4 *)(pCVar5 + 0x84) = 0;
                    *(undefined4 *)(pCVar5 + 0x88) = uVar22;
                    *(undefined4 *)(pCVar5 + 0x8c) = uVar21;
                    *(undefined4 *)(pCVar5 + 0x94) = 0;
                    *(undefined4 *)(pCVar5 + 0x14) = 4;
                    *(undefined4 *)(pCVar5 + 0x70) = uVar1;
                    *(undefined4 *)(pCVar5 + 0x80) = uVar1;
                    *(undefined4 *)(pCVar5 + 0x90) = uVar1;
                    *(undefined8 *)(pCVar5 + 0x58) = uVar13;
                    *(undefined8 *)(pCVar5 + 0x60) = uVar3;
                    pCVar5 = RendererCanvasRender::Item::
                             alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
                    if (pCVar5 == (CommandPrimitive *)0x0) {
                      _err_print_error("canvas_item_add_line",
                                       "servers/rendering/renderer_canvas_cull.cpp",0x365,
                                       "Parameter \"bottom_left_corner\" is null.",0,0);
                    }
                    else {
                      *(undefined8 *)(pCVar5 + 0x18) = uVar28;
                      *(undefined8 *)(pCVar5 + 0x20) = uVar15;
                      *(ulong *)(pCVar5 + 0x28) =
                           CONCAT44((local_e8 + fVar18) - local_dc,(fVar31 + fVar20) - fVar11);
                      *(undefined8 *)(pCVar5 + 0x30) = uVar29;
                      uVar13 = *param_6;
                      uVar3 = param_6[1];
                      *(undefined8 *)(pCVar5 + 0x68) = uVar12;
                      *(undefined4 *)(pCVar5 + 0x74) = 0;
                      *(undefined4 *)(pCVar5 + 0x78) = uVar22;
                      *(undefined4 *)(pCVar5 + 0x7c) = uVar21;
                      *(undefined4 *)(pCVar5 + 0x84) = 0;
                      *(undefined4 *)(pCVar5 + 0x88) = uVar22;
                      *(undefined4 *)(pCVar5 + 0x8c) = uVar21;
                      *(undefined4 *)(pCVar5 + 0x94) = 0;
                      *(undefined4 *)(pCVar5 + 0x14) = 4;
                      *(undefined4 *)(pCVar5 + 0x70) = uVar1;
                      *(undefined4 *)(pCVar5 + 0x80) = uVar1;
                      *(undefined4 *)(pCVar5 + 0x90) = uVar1;
                      *(undefined8 *)(pCVar5 + 0x58) = uVar13;
                      *(undefined8 *)(pCVar5 + 0x60) = uVar3;
                      pCVar5 = RendererCanvasRender::Item::
                               alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
                      if (pCVar5 == (CommandPrimitive *)0x0) {
                        _err_print_error("canvas_item_add_line",
                                         "servers/rendering/renderer_canvas_cull.cpp",0x375,
                                         "Parameter \"bottom_right_corner\" is null.",0,0);
                      }
                      else {
                        *(undefined8 *)(pCVar5 + 0x18) = uVar30;
                        *(undefined8 *)(pCVar5 + 0x20) = uVar24;
                        *(ulong *)(pCVar5 + 0x28) =
                             CONCAT44((local_e0 - fVar18) - local_dc,(local_e4 - fVar20) - fVar11);
                        *(undefined8 *)(pCVar5 + 0x30) = uVar23;
                        uVar13 = *param_6;
                        uVar3 = param_6[1];
                        *(undefined8 *)(pCVar5 + 0x68) = uVar12;
                        *(undefined4 *)(pCVar5 + 0x74) = 0;
                        *(undefined4 *)(pCVar5 + 0x78) = uVar22;
                        *(undefined4 *)(pCVar5 + 0x7c) = uVar21;
                        *(undefined4 *)(pCVar5 + 0x84) = 0;
                        *(undefined4 *)(pCVar5 + 0x88) = uVar22;
                        *(undefined4 *)(pCVar5 + 0x8c) = uVar21;
                        *(undefined4 *)(pCVar5 + 0x94) = 0;
                        *(undefined4 *)(pCVar5 + 0x14) = 4;
                        *(undefined8 *)(pCVar5 + 0x58) = uVar13;
                        *(undefined8 *)(pCVar5 + 0x60) = uVar3;
                        *(undefined4 *)(pCVar5 + 0x70) = uVar1;
                        *(undefined4 *)(pCVar5 + 0x80) = uVar1;
                        *(undefined4 *)(pCVar5 + 0x90) = uVar1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001119ae;
    }
    if (*(int *)(this_00 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar12 = 0x2cf;
    pcVar8 = "Parameter \"canvas_item\" is null.";
LAB_001117d1:
    _err_print_error("canvas_item_add_line","servers/rendering/renderer_canvas_cull.cpp",uVar12,
                     pcVar8,0,0);
    return;
  }
LAB_001119ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_multiline(RID, Vector<Vector2> const&, Vector<Color> const&,
   float, bool) */

void __thiscall
RendererCanvasCull::canvas_item_add_multiline
          (float param_1,RendererCanvasCull *this,ulong param_3,long param_4,long param_5,
          char param_6)

{
  long *plVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  CommandPolygon *pCVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  Item *this_00;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  long in_FS_OFFSET;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_b8 [8];
  undefined8 *local_b0;
  undefined1 local_a8 [8];
  long local_a0;
  undefined1 local_98 [8];
  long local_90;
  undefined1 local_88 [8];
  long local_80;
  undefined1 local_78 [8];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar15 = *(long *)(param_4 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar15 != 0) {
    uVar14 = *(ulong *)(lVar15 + -8);
    uVar13 = (ulong)((uint)uVar14 & 1);
    if ((uVar14 & 1) == 0) {
      puVar10 = *(undefined8 **)(param_5 + 8);
      if (puVar10 == (undefined8 *)0x0) {
        if (uVar14 != 0) {
LAB_00112112:
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar9 = 0x4ba;
            pcVar12 = 
            "Condition \"p_colors.size() != 1 && p_colors.size() * 2 != p_points.size()\" is true.";
            goto LAB_00111eb9;
          }
          goto LAB_00112172;
        }
        if (param_1 < 0.0) goto LAB_00111b20;
      }
      else if (puVar10[-1] == 1) {
        if (param_1 < 0.0) {
LAB_00111b20:
          if (param_6 != '\0') {
            _err_print_error("canvas_item_add_multiline",
                             "servers/rendering/renderer_canvas_cull.cpp",0x4bf,
                             "Antialiasing is not supported for thin multilines drawn using line strips (`p_width < 0`)."
                             ,0,1);
          }
          if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x134))) {
            this_00 = (Item *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                              *(long *)(*(long *)(this + 0x120) +
                                       ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8
                                       ));
            iVar3 = *(int *)(this_00 + 0x290);
            if (iVar3 == (int)(param_3 >> 0x20)) {
              local_b0 = (undefined8 *)0x0;
              lVar15 = *(long *)(param_5 + 8);
              if ((lVar15 == 0) || (*(long *)(lVar15 + -8) != 1)) {
                if (*(long *)(param_4 + 8) == 0) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = *(long *)(*(long *)(param_4 + 8) + -8);
                }
                CowData<Color>::resize<false>((CowData<Color> *)&local_b0,lVar15);
                CowData<Color>::_copy_on_write((CowData<Color> *)&local_b0);
                puVar10 = *(undefined8 **)(param_5 + 8);
                if ((puVar10 != (undefined8 *)0x0) && (lVar15 = puVar10[-1], 0 < lVar15)) {
                  puVar6 = local_b0;
                  do {
                    uVar9 = *puVar10;
                    uVar5 = puVar10[1];
                    puVar7 = puVar6 + 4;
                    puVar10 = puVar10 + 2;
                    *puVar6 = uVar9;
                    puVar6[1] = uVar5;
                    puVar6[2] = uVar9;
                    puVar6[3] = uVar5;
                    puVar6 = puVar7;
                  } while (local_b0 + lVar15 * 4 != puVar7);
                }
              }
              else {
                plVar1 = (long *)(lVar15 + -0x10);
                do {
                  lVar15 = *plVar1;
                  if (lVar15 == 0) goto LAB_00111bf1;
                  LOCK();
                  lVar16 = *plVar1;
                  bVar19 = lVar15 == lVar16;
                  if (bVar19) {
                    *plVar1 = lVar15 + 1;
                    lVar16 = lVar15;
                  }
                  UNLOCK();
                } while (!bVar19);
                if (lVar16 != -1) {
                  local_b0 = *(undefined8 **)(param_5 + 8);
                }
              }
LAB_00111bf1:
              pCVar8 = RendererCanvasRender::Item::
                       alloc_command<RendererCanvasRender::Item::CommandPolygon>(this_00);
              if (pCVar8 == (CommandPolygon *)0x0) {
                _err_print_error("canvas_item_add_multiline",
                                 "servers/rendering/renderer_canvas_cull.cpp",0x4d2,
                                 "Parameter \"pline\" is null.",0,0);
                puVar10 = local_b0;
              }
              else {
                *(undefined4 *)(pCVar8 + 0x14) = 1;
                local_70 = 0;
                local_80 = 0;
                local_90 = 0;
                local_a0 = 0;
                if (*(long *)(pCVar8 + 0x18) == 0) {
                  puVar10 = *(undefined8 **)(param_4 + 8);
                  if (puVar10 == (undefined8 *)0x0) {
                    *(undefined8 *)(pCVar8 + 0x20) = _DAT_00000000;
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                  uVar9 = puVar10[-1];
                  *(undefined8 *)(pCVar8 + 0x20) = *puVar10;
                  if (1 < (uint)uVar9) {
                    fVar22 = *(float *)(pCVar8 + 0x28);
                    pfVar17 = (float *)(puVar10 + 1);
                    do {
                      if ((fVar22 < 0.0) || (fVar20 = *(float *)(pCVar8 + 0x2c), fVar20 < 0.0)) {
                        _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                         ,0,0);
                        fVar20 = *(float *)(pCVar8 + 0x2c);
                        fVar22 = *(float *)(pCVar8 + 0x28);
                      }
                      fVar21 = *(float *)(pCVar8 + 0x20);
                      fVar23 = *pfVar17;
                      pfVar18 = pfVar17 + 2;
                      fVar2 = *(float *)(pCVar8 + 0x24);
                      fVar25 = pfVar17[1];
                      fVar24 = fVar23;
                      if (fVar21 <= fVar23) {
                        fVar24 = fVar21;
                      }
                      if (fVar23 <= fVar22 + fVar21) {
                        fVar23 = fVar22 + fVar21;
                      }
                      fVar21 = fVar25;
                      if (fVar25 <= fVar20 + fVar2) {
                        fVar21 = fVar20 + fVar2;
                      }
                      if (fVar2 <= fVar25) {
                        fVar25 = fVar2;
                      }
                      fVar22 = fVar23 - fVar24;
                      *(ulong *)(pCVar8 + 0x20) = CONCAT44(fVar25,fVar24);
                      *(ulong *)(pCVar8 + 0x28) = CONCAT44(fVar21 - fVar25,fVar22);
                      pfVar17 = pfVar18;
                    } while ((float *)(puVar10 + (ulong)((uint)uVar9 - 2) + 2) != pfVar18);
                  }
                  uVar9 = (**(code **)*RendererCanvasRender::singleton)
                                    (RendererCanvasRender::singleton,local_a8,param_4,local_b8,
                                     local_98,local_88,local_78);
                  *(undefined8 *)(pCVar8 + 0x18) = uVar9;
                }
                else {
                  _err_print_error("create","./servers/rendering/renderer_canvas_render.h",0x8f,
                                   "Condition \"polygon_id != 0\" is true.",0,0);
                }
                lVar15 = local_a0;
                if (local_a0 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_a0 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_a0 = 0;
                    Memory::free_static((void *)(lVar15 + -0x10),false);
                  }
                }
                lVar15 = local_90;
                if (local_90 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_90 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_90 = 0;
                    Memory::free_static((void *)(lVar15 + -0x10),false);
                  }
                }
                lVar15 = local_80;
                if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_80 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_80 = 0;
                    Memory::free_static((void *)(lVar15 + -0x10),false);
                  }
                }
                lVar15 = local_70;
                puVar10 = local_b0;
                if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_70 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_70 = 0;
                    Memory::free_static((void *)(lVar15 + -0x10),false);
                    puVar10 = local_b0;
                  }
                }
              }
              local_b0 = puVar10;
              if (puVar10 != (undefined8 *)0x0) {
                LOCK();
                plVar1 = puVar10 + -2;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_b0 = (undefined8 *)0x0;
                  Memory::free_static(puVar10 + -2,false);
                }
              }
              goto LAB_00111ad8;
            }
            if (iVar3 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar9 = 0x4c2;
            pcVar12 = "Parameter \"canvas_item\" is null.";
            goto LAB_00111eb9;
          }
          goto LAB_00112172;
        }
        local_58 = *puVar10;
        uStack_50 = puVar10[1];
        lVar16 = 1;
        if ((long)uVar13 < (long)uVar14 >> 1) {
          do {
            lVar11 = uVar13 * 2;
            if (((long)uVar14 <= (long)(uVar13 * 2)) ||
               (local_68 = *(undefined8 *)(lVar15 + uVar13 * 0x10), lVar11 = lVar16,
               (long)uVar14 <= lVar16)) {
LAB_00111e66:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar11,uVar14,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            local_60 = *(undefined8 *)(lVar15 + lVar16 * 8);
            uVar13 = uVar13 + 1;
            lVar16 = lVar16 + 2;
            canvas_item_add_line(this,param_3,&local_68,&local_60,&local_58,param_6);
            lVar15 = *(long *)(param_4 + 8);
          } while ((lVar15 != 0) &&
                  (uVar14 = *(ulong *)(lVar15 + -8), (long)uVar13 < (long)uVar14 >> 1));
        }
      }
      else {
        if (uVar14 != puVar10[-1] * 2) goto LAB_00112112;
        if (param_1 < 0.0) goto LAB_00111b20;
        lVar15 = 1;
        do {
          if ((long)puVar10[-1] <= (long)uVar13) break;
          lVar11 = uVar13 * 2;
          local_58 = puVar10[uVar13 * 2];
          uStack_50 = (puVar10 + uVar13 * 2)[1];
          lVar16 = *(long *)(param_4 + 8);
          if (lVar16 == 0) {
            uVar14 = 0;
            goto LAB_00111e66;
          }
          uVar14 = *(ulong *)(lVar16 + -8);
          if (((long)uVar14 <= lVar11) ||
             (local_68 = *(undefined8 *)(lVar16 + uVar13 * 0x10), lVar11 = lVar15,
             (long)uVar14 <= lVar15)) goto LAB_00111e66;
          local_60 = *(undefined8 *)(lVar16 + lVar15 * 8);
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 2;
          canvas_item_add_line(this,param_3,&local_68,&local_60,&local_58,param_6);
          puVar10 = *(undefined8 **)(param_5 + 8);
        } while (puVar10 != (undefined8 *)0x0);
      }
LAB_00111ad8:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00112172;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar9 = 0x4b9;
    pcVar12 = "Condition \"p_points.is_empty() || p_points.size() % 2 != 0\" is true.";
LAB_00111eb9:
    _err_print_error("canvas_item_add_multiline","servers/rendering/renderer_canvas_cull.cpp",uVar9,
                     pcVar12,0,0);
    return;
  }
LAB_00112172:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::canvas_item_add_primitive(RID, Vector<Vector2> const&, Vector<Color> const&,
   Vector<Vector2> const&, RID) */

void __thiscall
RendererCanvasCull::canvas_item_add_primitive
          (RendererCanvasCull *this,ulong param_2,long param_3,long param_4,long param_5,
          undefined8 param_6)

{
  CommandPrimitive *pCVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  CommandPrimitive *pCVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  Item *this_00;
  long lVar13;
  
  if ((*(long *)(param_3 + 8) == 0) || (3 < (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) - 1U))
  {
    _err_print_error("canvas_item_add_primitive","servers/rendering/renderer_canvas_cull.cpp",0x68a,
                     "Condition \"pc == 0 || pc > 4\" is true.",0,0);
    return;
  }
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    iVar2 = *(int *)(this_00 + 0x290);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      pCVar8 = RendererCanvasRender::Item::
               alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
      uVar7 = _LC6;
      if (pCVar8 != (CommandPrimitive *)0x0) {
        lVar3 = *(long *)(param_3 + 8);
        if (lVar3 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(lVar3 + -8);
          lVar12 = 0;
          for (lVar10 = 0; lVar10 < lVar13; lVar10 = lVar10 + 1) {
            *(undefined8 *)(pCVar8 + lVar10 * 8 + 0x18) = *(undefined8 *)(lVar3 + lVar10 * 8);
            lVar4 = *(long *)(param_5 + 8);
            if ((lVar4 != 0) && (lVar10 < *(long *)(lVar4 + -8))) {
              *(undefined8 *)(pCVar8 + lVar10 * 8 + 0x38) = *(undefined8 *)(lVar4 + lVar10 * 8);
            }
            puVar5 = *(undefined8 **)(param_4 + 8);
            if (puVar5 == (undefined8 *)0x0) {
LAB_00112290:
              pCVar1 = pCVar8 + lVar12 + 0x58;
              *(undefined4 *)pCVar1 = uVar7;
              *(undefined4 *)(pCVar1 + 4) = uVar7;
              *(undefined4 *)(pCVar1 + 8) = uVar7;
              *(undefined4 *)(pCVar1 + 0xc) = uVar7;
            }
            else {
              lVar4 = puVar5[-1];
              if (lVar10 < lVar4) {
                uVar11 = ((undefined8 *)((long)puVar5 + lVar12))[1];
                *(undefined8 *)(pCVar8 + lVar12 + 0x58) = *(undefined8 *)((long)puVar5 + lVar12);
                *(undefined8 *)(pCVar8 + lVar12 + 0x58 + 8) = uVar11;
              }
              else {
                if (lVar4 == 0) goto LAB_00112290;
                if (lVar4 < 1) {
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,0,lVar4,"p_index","size()","",
                             false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar6 = (code *)invalidInstructionException();
                  (*pcVar6)();
                }
                uVar11 = puVar5[1];
                *(undefined8 *)(pCVar8 + lVar12 + 0x58) = *puVar5;
                *(undefined8 *)(pCVar8 + lVar12 + 0x58 + 8) = uVar11;
              }
            }
            lVar12 = lVar12 + 0x10;
          }
        }
        *(int *)(pCVar8 + 0x14) = (int)lVar13;
        *(undefined8 *)(pCVar8 + 0x98) = param_6;
        return;
      }
      uVar11 = 0x690;
      pcVar9 = "Parameter \"prim\" is null.";
      goto LAB_0011233a;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar11 = 0x68d;
  pcVar9 = "Parameter \"canvas_item\" is null.";
LAB_0011233a:
  _err_print_error("canvas_item_add_primitive","servers/rendering/renderer_canvas_cull.cpp",uVar11,
                   pcVar9,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_texture_rect(RID, Rect2 const&, RID, bool, Color const&,
   bool) */

void __thiscall
RendererCanvasCull::canvas_item_add_texture_rect
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3,undefined8 param_4,
          char param_5,undefined8 *param_6,char param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CommandRect *pCVar4;
  char *pcVar5;
  undefined8 uVar6;
  Item *this_00;
  float fVar7;
  float fVar8;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    iVar1 = *(int *)(this_00 + 0x290);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pCVar4 = RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandRect>
                         (this_00);
      if (pCVar4 != (CommandRect *)0x0) {
        uVar6 = param_6[1];
        uVar2 = *param_3;
        uVar3 = param_3[1];
        *(undefined8 *)(pCVar4 + 0x24) = *param_6;
        *(undefined8 *)(pCVar4 + 0x2c) = uVar6;
        *(undefined8 *)(pCVar4 + 0x14) = uVar2;
        *(undefined8 *)(pCVar4 + 0x1c) = uVar3;
        if (param_5 == '\0') {
          *(undefined2 *)(pCVar4 + 0x44) = 0;
        }
        else {
          fVar8 = *(float *)((long)param_3 + 0xc);
          *(undefined2 *)(pCVar4 + 0x44) = 3;
          if (fVar8 < 0.0) {
            fVar8 = (float)((uint)fVar8 ^ __LC9);
          }
          fVar7 = *(float *)(param_3 + 1);
          if (fVar7 < 0.0) {
            fVar7 = (float)((uint)fVar7 ^ __LC9);
          }
          *(undefined8 *)(pCVar4 + 0x34) = 0;
          *(ulong *)(pCVar4 + 0x3c) = CONCAT44(fVar8,fVar7);
        }
        if (*(float *)(param_3 + 1) <= 0.0 && *(float *)(param_3 + 1) != 0.0) {
          *(ushort *)(pCVar4 + 0x44) = *(ushort *)(pCVar4 + 0x44) | 4;
          *(uint *)(pCVar4 + 0x1c) = *(uint *)(pCVar4 + 0x1c) ^ __LC9;
        }
        if (*(float *)((long)param_3 + 0xc) <= 0.0 && *(float *)((long)param_3 + 0xc) != 0.0) {
          *(ushort *)(pCVar4 + 0x44) = *(ushort *)(pCVar4 + 0x44) | 8;
          *(uint *)(pCVar4 + 0x20) = *(uint *)(pCVar4 + 0x20) ^ __LC9;
        }
        if (param_7 != '\0') {
          *(ushort *)(pCVar4 + 0x44) = *(ushort *)(pCVar4 + 0x44) | 0x10;
          *(ulong *)(pCVar4 + 0x1c) =
               CONCAT44((int)*(undefined8 *)(pCVar4 + 0x1c),
                        (int)((ulong)*(undefined8 *)(pCVar4 + 0x1c) >> 0x20));
        }
        *(undefined8 *)(pCVar4 + 0x50) = param_4;
        return;
      }
      uVar6 = 0x5ee;
      pcVar5 = "Parameter \"rect\" is null.";
      goto LAB_00112502;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar6 = 0x5eb;
  pcVar5 = "Parameter \"canvas_item\" is null.";
LAB_00112502:
  _err_print_error("canvas_item_add_texture_rect","servers/rendering/renderer_canvas_cull.cpp",uVar6
                   ,pcVar5,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_msdf_texture_rect_region(RID, Rect2 const&, RID, Rect2
   const&, Color const&, int, float, float) */

void __thiscall
RendererCanvasCull::canvas_item_add_msdf_texture_rect_region
          (undefined4 param_1,float param_2,RendererCanvasCull *this,ulong param_4,
          undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,int param_9
          )

{
  float fVar1;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  CommandRect *pCVar7;
  char *pcVar8;
  undefined8 uVar9;
  Item *this_00;
  uint uVar10;
  float fVar2;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    iVar3 = *(int *)(this_00 + 0x290);
    if (iVar3 == (int)(param_4 >> 0x20)) {
      pCVar7 = RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandRect>
                         (this_00);
      if (pCVar7 == (CommandRect *)0x0) {
        uVar9 = 0x60d;
        pcVar8 = "Parameter \"rect\" is null.";
        goto LAB_00112742;
      }
      uVar9 = *param_5;
      uVar4 = param_5[1];
      uVar5 = *param_8;
      uVar6 = param_8[1];
      *(undefined8 *)(pCVar7 + 0x50) = param_6;
      *(undefined8 *)(pCVar7 + 0x14) = uVar9;
      *(undefined8 *)(pCVar7 + 0x1c) = uVar4;
      uVar9 = *param_7;
      uVar4 = param_7[1];
      *(undefined8 *)(pCVar7 + 0x24) = uVar5;
      *(undefined8 *)(pCVar7 + 0x2c) = uVar6;
      *(undefined8 *)(pCVar7 + 0x34) = uVar9;
      *(undefined8 *)(pCVar7 + 0x3c) = uVar4;
      fVar1 = *(float *)(param_5 + 1);
      fVar2 = *(float *)(param_5 + 1);
      *(undefined2 *)(pCVar7 + 0x44) = 0x81;
      if (fVar2 <= 0.0 && fVar1 != 0.0) {
        uVar10 = *(uint *)(pCVar7 + 0x1c) ^ __LC9;
        *(undefined2 *)(pCVar7 + 0x44) = 0x85;
        *(uint *)(pCVar7 + 0x1c) = uVar10;
        if (0.0 < *(float *)(param_7 + 1) || *(float *)(param_7 + 1) == 0.0) goto LAB_0011263c;
LAB_001126c8:
        uVar10 = *(uint *)(pCVar7 + 0x3c) ^ __LC9;
        *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) ^ 4;
        *(uint *)(pCVar7 + 0x3c) = uVar10;
        if (0.0 < *(float *)((long)param_5 + 0xc) || *(float *)((long)param_5 + 0xc) == 0.0)
        goto LAB_00112646;
LAB_001126a0:
        uVar10 = *(uint *)(pCVar7 + 0x20) ^ __LC9;
        *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) | 8;
        *(uint *)(pCVar7 + 0x20) = uVar10;
        if (0.0 < *(float *)((long)param_7 + 0xc) || *(float *)((long)param_7 + 0xc) == 0.0)
        goto LAB_00112650;
      }
      else {
        if (*(float *)(param_7 + 1) <= 0.0 && *(float *)(param_7 + 1) != 0.0) goto LAB_001126c8;
LAB_0011263c:
        if (*(float *)((long)param_5 + 0xc) <= 0.0 && *(float *)((long)param_5 + 0xc) != 0.0)
        goto LAB_001126a0;
LAB_00112646:
        if (0.0 < *(float *)((long)param_7 + 0xc) || *(float *)((long)param_7 + 0xc) == 0.0)
        goto LAB_00112650;
      }
      uVar10 = *(uint *)(pCVar7 + 0x40) ^ __LC9;
      *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) ^ 8;
      *(uint *)(pCVar7 + 0x40) = uVar10;
LAB_00112650:
      *(ulong *)(pCVar7 + 0x48) = CONCAT44(param_1,((float)param_9 / param_2) * __LC280);
      return;
    }
    if (iVar3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar9 = 0x60a;
  pcVar8 = "Parameter \"canvas_item\" is null.";
LAB_00112742:
  _err_print_error("canvas_item_add_msdf_texture_rect_region",
                   "servers/rendering/renderer_canvas_cull.cpp",uVar9,pcVar8,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_lcd_texture_rect_region(RID, Rect2 const&, RID, Rect2 const&,
   Color const&) */

void __thiscall
RendererCanvasCull::canvas_item_add_lcd_texture_rect_region
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  CommandRect *pCVar7;
  char *pcVar8;
  undefined8 uVar9;
  Item *this_00;
  uint uVar10;
  float fVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    iVar3 = *(int *)(this_00 + 0x290);
    if (iVar3 == (int)(param_2 >> 0x20)) {
      pCVar7 = RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandRect>
                         (this_00);
      if (pCVar7 == (CommandRect *)0x0) {
        uVar9 = 0x62f;
        pcVar8 = "Parameter \"rect\" is null.";
        goto LAB_00112962;
      }
      uVar9 = *param_3;
      uVar4 = param_3[1];
      uVar5 = *param_6;
      uVar6 = param_6[1];
      *(undefined8 *)(pCVar7 + 0x50) = param_4;
      *(undefined8 *)(pCVar7 + 0x14) = uVar9;
      *(undefined8 *)(pCVar7 + 0x1c) = uVar4;
      uVar9 = *param_5;
      uVar4 = param_5[1];
      *(undefined8 *)(pCVar7 + 0x24) = uVar5;
      *(undefined8 *)(pCVar7 + 0x2c) = uVar6;
      *(undefined8 *)(pCVar7 + 0x34) = uVar9;
      *(undefined8 *)(pCVar7 + 0x3c) = uVar4;
      fVar1 = *(float *)(param_3 + 1);
      fVar2 = *(float *)(param_3 + 1);
      *(undefined2 *)(pCVar7 + 0x44) = 0x101;
      if (fVar2 <= 0.0 && fVar1 != 0.0) {
        uVar10 = *(uint *)(pCVar7 + 0x1c) ^ __LC9;
        *(undefined2 *)(pCVar7 + 0x44) = 0x105;
        *(uint *)(pCVar7 + 0x1c) = uVar10;
        if (*(float *)(param_5 + 1) <= 0.0 && *(float *)(param_5 + 1) != 0.0) goto LAB_001128e8;
LAB_00112872:
        if (*(float *)((long)param_3 + 0xc) <= 0.0 && *(float *)((long)param_3 + 0xc) != 0.0) {
LAB_001128c0:
          uVar10 = *(uint *)(pCVar7 + 0x20) ^ __LC9;
          *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) | 8;
          *(uint *)(pCVar7 + 0x20) = uVar10;
          if (0.0 < *(float *)((long)param_5 + 0xc) || *(float *)((long)param_5 + 0xc) == 0.0) {
            return;
          }
          goto LAB_00112898;
        }
      }
      else {
        if (0.0 < *(float *)(param_5 + 1) || *(float *)(param_5 + 1) == 0.0) goto LAB_00112872;
LAB_001128e8:
        uVar10 = *(uint *)(pCVar7 + 0x3c) ^ __LC9;
        *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) ^ 4;
        *(uint *)(pCVar7 + 0x3c) = uVar10;
        if (*(float *)((long)param_3 + 0xc) <= 0.0 && *(float *)((long)param_3 + 0xc) != 0.0)
        goto LAB_001128c0;
      }
      if (0.0 < *(float *)((long)param_5 + 0xc) || *(float *)((long)param_5 + 0xc) == 0.0) {
        return;
      }
LAB_00112898:
      uVar10 = *(uint *)(pCVar7 + 0x40) ^ __LC9;
      *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) ^ 8;
      *(uint *)(pCVar7 + 0x40) = uVar10;
      return;
    }
    if (iVar3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar9 = 0x62c;
  pcVar8 = "Parameter \"canvas_item\" is null.";
LAB_00112962:
  _err_print_error("canvas_item_add_lcd_texture_rect_region",
                   "servers/rendering/renderer_canvas_cull.cpp",uVar9,pcVar8,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_texture_rect_region(RID, Rect2 const&, RID, Rect2 const&,
   Color const&, bool, bool) */

void __thiscall
RendererCanvasCull::canvas_item_add_texture_rect_region
          (RendererCanvasCull *this,ulong param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 *param_6,char param_7,char param_8)

{
  float fVar1;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  CommandRect *pCVar7;
  char *pcVar8;
  undefined8 uVar9;
  Item *this_00;
  uint uVar10;
  float fVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    iVar3 = *(int *)(this_00 + 0x290);
    if (iVar3 == (int)(param_2 >> 0x20)) {
      pCVar7 = RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandRect>
                         (this_00);
      if (pCVar7 == (CommandRect *)0x0) {
        uVar9 = 0x64f;
        pcVar8 = "Parameter \"rect\" is null.";
        goto LAB_00112ba2;
      }
      uVar9 = *param_3;
      uVar4 = param_3[1];
      uVar5 = *param_6;
      uVar6 = param_6[1];
      *(undefined8 *)(pCVar7 + 0x50) = param_4;
      *(undefined8 *)(pCVar7 + 0x14) = uVar9;
      *(undefined8 *)(pCVar7 + 0x1c) = uVar4;
      uVar9 = *param_5;
      uVar4 = param_5[1];
      *(undefined8 *)(pCVar7 + 0x24) = uVar5;
      *(undefined8 *)(pCVar7 + 0x2c) = uVar6;
      *(undefined8 *)(pCVar7 + 0x34) = uVar9;
      *(undefined8 *)(pCVar7 + 0x3c) = uVar4;
      fVar1 = *(float *)(param_3 + 1);
      fVar2 = *(float *)(param_3 + 1);
      *(undefined2 *)(pCVar7 + 0x44) = 1;
      if (fVar2 <= 0.0 && fVar1 != 0.0) {
        uVar10 = *(uint *)(pCVar7 + 0x1c) ^ __LC9;
        *(undefined2 *)(pCVar7 + 0x44) = 5;
        *(uint *)(pCVar7 + 0x1c) = uVar10;
        if (0.0 < *(float *)(param_5 + 1) || *(float *)(param_5 + 1) == 0.0) goto LAB_00112a91;
LAB_00112b20:
        uVar10 = *(uint *)(pCVar7 + 0x3c) ^ __LC9;
        *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) ^ 4;
        *(uint *)(pCVar7 + 0x3c) = uVar10;
        if (0.0 < *(float *)((long)param_3 + 0xc) || *(float *)((long)param_3 + 0xc) == 0.0)
        goto LAB_00112a9b;
LAB_00112af8:
        uVar10 = *(uint *)(pCVar7 + 0x20) ^ __LC9;
        *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) | 8;
        *(uint *)(pCVar7 + 0x20) = uVar10;
        if (0.0 < *(float *)((long)param_5 + 0xc) || *(float *)((long)param_5 + 0xc) == 0.0)
        goto joined_r0x00112aa8;
      }
      else {
        if (*(float *)(param_5 + 1) <= 0.0 && *(float *)(param_5 + 1) != 0.0) goto LAB_00112b20;
LAB_00112a91:
        if (*(float *)((long)param_3 + 0xc) <= 0.0 && *(float *)((long)param_3 + 0xc) != 0.0)
        goto LAB_00112af8;
LAB_00112a9b:
        if (0.0 < *(float *)((long)param_5 + 0xc) || *(float *)((long)param_5 + 0xc) == 0.0)
        goto joined_r0x00112aa8;
      }
      uVar10 = *(uint *)(pCVar7 + 0x40) ^ __LC9;
      *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) ^ 8;
      *(uint *)(pCVar7 + 0x40) = uVar10;
joined_r0x00112aa8:
      if (param_7 != '\0') {
        *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) | 0x10;
        *(ulong *)(pCVar7 + 0x1c) =
             CONCAT44((int)*(undefined8 *)(pCVar7 + 0x1c),
                      (int)((ulong)*(undefined8 *)(pCVar7 + 0x1c) >> 0x20));
      }
      if (param_8 != '\0') {
        *(ushort *)(pCVar7 + 0x44) = *(ushort *)(pCVar7 + 0x44) | 0x20;
      }
      return;
    }
    if (iVar3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar9 = 0x64c;
  pcVar8 = "Parameter \"canvas_item\" is null.";
LAB_00112ba2:
  _err_print_error("canvas_item_add_texture_rect_region",
                   "servers/rendering/renderer_canvas_cull.cpp",uVar9,pcVar8,0,0);
  return;
}



/* RendererCanvasCull::canvas_item_add_rect(RID, Rect2 const&, Color const&, bool) */

void __thiscall
RendererCanvasCull::canvas_item_add_rect
          (RendererCanvasCull *this,ulong param_2,float *param_3,undefined8 *param_4,char param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  CommandRect *pCVar7;
  CommandPrimitive *pCVar8;
  char *pcVar9;
  undefined8 uVar10;
  Item *this_00;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_9c;
  float local_98;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x134))) {
    this_00 = (Item *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0x298 +
                      *(long *)(*(long *)(this + 0x120) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8));
    if (*(int *)(this_00 + 0x290) == (int)(param_2 >> 0x20)) {
      pCVar7 = RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandRect>
                         (this_00);
      if (pCVar7 == (CommandRect *)0x0) {
        uVar10 = 0x4ef;
        pcVar9 = "Parameter \"rect\" is null.";
      }
      else {
        uVar10 = param_4[1];
        uVar4 = *(undefined8 *)param_3;
        uVar11 = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(pCVar7 + 0x24) = *param_4;
        *(undefined8 *)(pCVar7 + 0x2c) = uVar10;
        *(undefined8 *)(pCVar7 + 0x14) = uVar4;
        *(undefined8 *)(pCVar7 + 0x1c) = uVar11;
        if (param_5 == '\0') {
          return;
        }
        fVar12 = param_3[2];
        fVar25 = param_3[3];
        local_9c = fVar12;
        if (fVar25 <= fVar12) {
          local_9c = fVar25;
        }
        if (local_9c < 0.0) {
          local_98 = 0.0;
          local_9c = _LC222;
        }
        else if (local_9c < _LC6) {
          local_9c = local_9c * _LC222;
          local_98 = local_9c * 0.0;
        }
        else {
          local_98 = 0.0;
          local_9c = _LC222;
        }
        fVar1 = param_3[1];
        fVar2 = *param_3;
        uVar4 = *(undefined8 *)param_3;
        fVar25 = fVar25 + fVar1;
        fVar12 = fVar12 + fVar2;
        fVar22 = fVar2 + 0.0;
        uVar11 = CONCAT44(fVar25,fVar12);
        uVar10 = *param_4;
        uVar18 = CONCAT44(fVar25,fVar22);
        fVar23 = fVar1 + 0.0;
        uVar16 = (undefined4)uVar10;
        uVar21 = CONCAT44(fVar23,fVar12);
        uVar13 = (undefined4)((ulong)uVar10 >> 0x20);
        uVar3 = *(undefined4 *)(param_4 + 1);
        pCVar8 = RendererCanvasRender::Item::
                 alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
        if (pCVar8 == (CommandPrimitive *)0x0) {
          uVar10 = 0x50d;
          pcVar9 = "Parameter \"left_border\" is null.";
        }
        else {
          fVar26 = local_98 + fVar12;
          *(undefined8 *)(pCVar8 + 0x30) = uVar21;
          uVar15 = CONCAT44(fVar1 - local_9c,fVar2 + local_98);
          *(float *)(pCVar8 + 0x28) = fVar26;
          fVar17 = fVar23 - local_9c;
          *(undefined8 *)(pCVar8 + 0x18) = uVar4;
          *(undefined8 *)(pCVar8 + 0x20) = uVar15;
          *(float *)(pCVar8 + 0x2c) = fVar17;
          uVar5 = *param_4;
          uVar6 = param_4[1];
          *(undefined8 *)(pCVar8 + 0x68) = uVar10;
          *(undefined4 *)(pCVar8 + 0x74) = 0;
          *(undefined4 *)(pCVar8 + 0x78) = uVar16;
          *(undefined4 *)(pCVar8 + 0x7c) = uVar13;
          *(undefined4 *)(pCVar8 + 0x84) = 0;
          *(undefined8 *)(pCVar8 + 0x58) = uVar5;
          *(undefined8 *)(pCVar8 + 0x60) = uVar6;
          *(undefined4 *)(pCVar8 + 0x70) = uVar3;
          *(undefined4 *)(pCVar8 + 0x80) = uVar3;
          uVar5 = *param_4;
          uVar6 = param_4[1];
          *(undefined4 *)(pCVar8 + 0x14) = 4;
          *(undefined8 *)(pCVar8 + 0x88) = uVar5;
          *(undefined8 *)(pCVar8 + 0x90) = uVar6;
          pCVar8 = RendererCanvasRender::Item::
                   alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
          if (pCVar8 == (CommandPrimitive *)0x0) {
            uVar10 = 0x51d;
            pcVar9 = "Parameter \"right_border\" is null.";
          }
          else {
            *(undefined8 *)(pCVar8 + 0x18) = uVar18;
            fVar20 = fVar22 - local_98;
            fVar19 = local_9c + fVar25;
            *(undefined8 *)(pCVar8 + 0x30) = uVar11;
            fVar24 = fVar12 - local_98;
            *(ulong *)(pCVar8 + 0x20) = CONCAT44(fVar19,fVar20);
            *(ulong *)(pCVar8 + 0x28) = CONCAT44(fVar19,fVar24);
            uVar5 = *param_4;
            uVar6 = param_4[1];
            *(undefined8 *)(pCVar8 + 0x68) = uVar10;
            *(undefined4 *)(pCVar8 + 0x74) = 0;
            *(undefined4 *)(pCVar8 + 0x78) = uVar16;
            *(undefined4 *)(pCVar8 + 0x7c) = uVar13;
            *(undefined4 *)(pCVar8 + 0x84) = 0;
            *(undefined8 *)(pCVar8 + 0x58) = uVar5;
            *(undefined8 *)(pCVar8 + 0x60) = uVar6;
            *(undefined4 *)(pCVar8 + 0x70) = uVar3;
            *(undefined4 *)(pCVar8 + 0x80) = uVar3;
            uVar5 = *param_4;
            uVar6 = param_4[1];
            *(undefined4 *)(pCVar8 + 0x14) = 4;
            *(undefined8 *)(pCVar8 + 0x88) = uVar5;
            *(undefined8 *)(pCVar8 + 0x90) = uVar6;
            pCVar8 = RendererCanvasRender::Item::
                     alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
            if (pCVar8 == (CommandPrimitive *)0x0) {
              uVar10 = 0x52d;
              pcVar9 = "Parameter \"top_border\" is null.";
            }
            else {
              *(undefined8 *)(pCVar8 + 0x30) = uVar18;
              uVar14 = CONCAT44(fVar1 + local_98,fVar2 - local_9c);
              *(float *)(pCVar8 + 0x2c) = local_98 + fVar25;
              *(float *)(pCVar8 + 0x28) = fVar22 - local_9c;
              *(undefined8 *)(pCVar8 + 0x18) = uVar4;
              *(undefined8 *)(pCVar8 + 0x20) = uVar14;
              uVar5 = *param_4;
              uVar6 = param_4[1];
              *(undefined8 *)(pCVar8 + 0x68) = uVar10;
              *(undefined4 *)(pCVar8 + 0x74) = 0;
              *(undefined4 *)(pCVar8 + 0x78) = uVar16;
              *(undefined4 *)(pCVar8 + 0x7c) = uVar13;
              *(undefined4 *)(pCVar8 + 0x84) = 0;
              *(undefined8 *)(pCVar8 + 0x58) = uVar5;
              *(undefined8 *)(pCVar8 + 0x60) = uVar6;
              *(undefined4 *)(pCVar8 + 0x70) = uVar3;
              *(undefined4 *)(pCVar8 + 0x80) = uVar3;
              uVar5 = *param_4;
              uVar6 = param_4[1];
              *(undefined4 *)(pCVar8 + 0x14) = 4;
              *(undefined8 *)(pCVar8 + 0x88) = uVar5;
              *(undefined8 *)(pCVar8 + 0x90) = uVar6;
              pCVar8 = RendererCanvasRender::Item::
                       alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
              if (pCVar8 == (CommandPrimitive *)0x0) {
                uVar10 = 0x53d;
                pcVar9 = "Parameter \"bottom_border\" is null.";
              }
              else {
                *(undefined8 *)(pCVar8 + 0x30) = uVar11;
                fVar12 = fVar12 + local_9c;
                *(undefined8 *)(pCVar8 + 0x18) = uVar21;
                *(float *)(pCVar8 + 0x20) = fVar12;
                *(float *)(pCVar8 + 0x24) = fVar23 - local_98;
                *(float *)(pCVar8 + 0x28) = fVar12;
                *(float *)(pCVar8 + 0x2c) = fVar25 - local_98;
                uVar5 = *param_4;
                uVar6 = param_4[1];
                *(undefined8 *)(pCVar8 + 0x68) = uVar10;
                *(undefined4 *)(pCVar8 + 0x74) = 0;
                *(undefined4 *)(pCVar8 + 0x78) = uVar16;
                *(undefined4 *)(pCVar8 + 0x7c) = uVar13;
                *(undefined4 *)(pCVar8 + 0x84) = 0;
                *(undefined8 *)(pCVar8 + 0x58) = uVar5;
                *(undefined8 *)(pCVar8 + 0x60) = uVar6;
                *(undefined4 *)(pCVar8 + 0x70) = uVar3;
                *(undefined4 *)(pCVar8 + 0x80) = uVar3;
                uVar5 = *param_4;
                uVar6 = param_4[1];
                *(undefined4 *)(pCVar8 + 0x14) = 4;
                *(undefined8 *)(pCVar8 + 0x88) = uVar5;
                *(undefined8 *)(pCVar8 + 0x90) = uVar6;
                pCVar8 = RendererCanvasRender::Item::
                         alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
                if (pCVar8 == (CommandPrimitive *)0x0) {
                  uVar10 = 0x54d;
                  pcVar9 = "Parameter \"top_left_corner\" is null.";
                }
                else {
                  *(undefined8 *)(pCVar8 + 0x18) = uVar4;
                  *(undefined8 *)(pCVar8 + 0x20) = uVar14;
                  *(ulong *)(pCVar8 + 0x28) =
                       CONCAT44((fVar1 - local_9c) + local_98,(fVar2 + local_98) - local_9c);
                  *(undefined8 *)(pCVar8 + 0x30) = uVar15;
                  uVar4 = *param_4;
                  uVar5 = param_4[1];
                  *(undefined8 *)(pCVar8 + 0x68) = uVar10;
                  *(undefined4 *)(pCVar8 + 0x74) = 0;
                  *(undefined4 *)(pCVar8 + 0x78) = uVar16;
                  *(undefined4 *)(pCVar8 + 0x7c) = uVar13;
                  *(undefined4 *)(pCVar8 + 0x84) = 0;
                  *(undefined4 *)(pCVar8 + 0x88) = uVar16;
                  *(undefined4 *)(pCVar8 + 0x8c) = uVar13;
                  *(undefined4 *)(pCVar8 + 0x94) = 0;
                  *(undefined4 *)(pCVar8 + 0x14) = 4;
                  *(undefined4 *)(pCVar8 + 0x70) = uVar3;
                  *(undefined4 *)(pCVar8 + 0x80) = uVar3;
                  *(undefined4 *)(pCVar8 + 0x90) = uVar3;
                  *(undefined8 *)(pCVar8 + 0x58) = uVar4;
                  *(undefined8 *)(pCVar8 + 0x60) = uVar5;
                  pCVar8 = RendererCanvasRender::Item::
                           alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
                  if (pCVar8 == (CommandPrimitive *)0x0) {
                    uVar10 = 0x55d;
                    pcVar9 = "Parameter \"top_right_corner\" is null.";
                  }
                  else {
                    *(undefined8 *)(pCVar8 + 0x18) = uVar18;
                    *(float *)(pCVar8 + 0x30) = fVar20;
                    *(float *)(pCVar8 + 0x34) = fVar19;
                    *(ulong *)(pCVar8 + 0x20) = CONCAT44(local_98 + fVar25,fVar22 - local_9c);
                    *(ulong *)(pCVar8 + 0x28) = CONCAT44(local_98 + fVar19,fVar20 - local_9c);
                    uVar4 = *param_4;
                    uVar18 = param_4[1];
                    *(undefined8 *)(pCVar8 + 0x68) = uVar10;
                    *(undefined4 *)(pCVar8 + 0x74) = 0;
                    *(undefined4 *)(pCVar8 + 0x78) = uVar16;
                    *(undefined4 *)(pCVar8 + 0x7c) = uVar13;
                    *(undefined4 *)(pCVar8 + 0x84) = 0;
                    *(undefined4 *)(pCVar8 + 0x88) = uVar16;
                    *(undefined4 *)(pCVar8 + 0x8c) = uVar13;
                    *(undefined4 *)(pCVar8 + 0x94) = 0;
                    *(undefined4 *)(pCVar8 + 0x14) = 4;
                    *(undefined4 *)(pCVar8 + 0x70) = uVar3;
                    *(undefined4 *)(pCVar8 + 0x80) = uVar3;
                    *(undefined4 *)(pCVar8 + 0x90) = uVar3;
                    *(undefined8 *)(pCVar8 + 0x58) = uVar4;
                    *(undefined8 *)(pCVar8 + 0x60) = uVar18;
                    pCVar8 = RendererCanvasRender::Item::
                             alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
                    if (pCVar8 == (CommandPrimitive *)0x0) {
                      uVar10 = 0x56d;
                      pcVar9 = "Parameter \"bottom_left_corner\" is null.";
                    }
                    else {
                      *(float *)(pCVar8 + 0x30) = fVar26;
                      *(float *)(pCVar8 + 0x34) = fVar17;
                      *(undefined8 *)(pCVar8 + 0x18) = uVar21;
                      *(ulong *)(pCVar8 + 0x20) = CONCAT44(fVar23 - local_98,fVar12);
                      *(ulong *)(pCVar8 + 0x28) = CONCAT44(fVar17 - local_98,local_9c + fVar26);
                      uVar4 = *param_4;
                      uVar18 = param_4[1];
                      *(undefined8 *)(pCVar8 + 0x68) = uVar10;
                      *(undefined4 *)(pCVar8 + 0x74) = 0;
                      *(undefined4 *)(pCVar8 + 0x78) = uVar16;
                      *(undefined4 *)(pCVar8 + 0x7c) = uVar13;
                      *(undefined4 *)(pCVar8 + 0x84) = 0;
                      *(undefined4 *)(pCVar8 + 0x88) = uVar16;
                      *(undefined4 *)(pCVar8 + 0x8c) = uVar13;
                      *(undefined4 *)(pCVar8 + 0x94) = 0;
                      *(undefined4 *)(pCVar8 + 0x14) = 4;
                      *(undefined4 *)(pCVar8 + 0x70) = uVar3;
                      *(undefined4 *)(pCVar8 + 0x80) = uVar3;
                      *(undefined4 *)(pCVar8 + 0x90) = uVar3;
                      *(undefined8 *)(pCVar8 + 0x58) = uVar4;
                      *(undefined8 *)(pCVar8 + 0x60) = uVar18;
                      pCVar8 = RendererCanvasRender::Item::
                               alloc_command<RendererCanvasRender::Item::CommandPrimitive>(this_00);
                      if (pCVar8 != (CommandPrimitive *)0x0) {
                        *(undefined8 *)(pCVar8 + 0x18) = uVar11;
                        *(float *)(pCVar8 + 0x30) = fVar24;
                        *(float *)(pCVar8 + 0x34) = fVar19;
                        *(ulong *)(pCVar8 + 0x20) = CONCAT44(fVar25 - local_98,fVar12);
                        *(ulong *)(pCVar8 + 0x28) = CONCAT44(fVar19 - local_98,local_9c + fVar24);
                        uVar4 = *param_4;
                        uVar11 = param_4[1];
                        *(undefined8 *)(pCVar8 + 0x68) = uVar10;
                        *(undefined4 *)(pCVar8 + 0x74) = 0;
                        *(undefined4 *)(pCVar8 + 0x78) = uVar16;
                        *(undefined4 *)(pCVar8 + 0x7c) = uVar13;
                        *(undefined4 *)(pCVar8 + 0x84) = 0;
                        *(undefined4 *)(pCVar8 + 0x88) = uVar16;
                        *(undefined4 *)(pCVar8 + 0x8c) = uVar13;
                        *(undefined4 *)(pCVar8 + 0x94) = 0;
                        *(undefined4 *)(pCVar8 + 0x14) = 4;
                        *(undefined8 *)(pCVar8 + 0x58) = uVar4;
                        *(undefined8 *)(pCVar8 + 0x60) = uVar11;
                        *(undefined4 *)(pCVar8 + 0x70) = uVar3;
                        *(undefined4 *)(pCVar8 + 0x80) = uVar3;
                        *(undefined4 *)(pCVar8 + 0x90) = uVar3;
                        return;
                      }
                      uVar10 = 0x57d;
                      pcVar9 = "Parameter \"bottom_right_corner\" is null.";
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_00113422;
    }
    if (*(int *)(this_00 + 0x290) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar10 = 0x4ec;
  pcVar9 = "Parameter \"canvas_item\" is null.";
LAB_00113422:
  _err_print_error("canvas_item_add_rect","servers/rendering/renderer_canvas_cull.cpp",uVar10,pcVar9
                   ,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::_cull_canvas_item(RendererCanvasCull::Item*, Transform2D const&, Rect2
   const&, Color const&, int, RendererCanvasRender::Item**, RendererCanvasRender::Item**,
   RendererCanvasCull::Item*, RendererCanvasCull::Item*, bool, unsigned int, Vector2 const&, int,
   RendererCanvasRender::Item*) */

void __thiscall
RendererCanvasCull::_cull_canvas_item
          (RendererCanvasCull *this,Item *param_1,Transform2D *param_2,Rect2 *param_3,Color *param_4
          ,int param_5,Item **param_6,Item **param_7,Item *param_8,Item *param_9,bool param_10,
          uint param_11,Vector2 *param_12,int param_13,Item *param_14)

{
  Transform2D *pTVar1;
  float *pfVar2;
  Item *pIVar3;
  undefined8 *puVar4;
  Item *pIVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  Color *pCVar13;
  int iVar14;
  undefined4 uVar15;
  float *pfVar16;
  RendererCanvasCull *pRVar17;
  long lVar18;
  undefined4 *puVar19;
  CommandRect *pCVar20;
  Item *pIVar21;
  ulong uVar22;
  Item *pIVar23;
  long lVar24;
  undefined4 *puVar25;
  Color *pCVar26;
  Item *pIVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  Item **ppIVar31;
  Item *pIVar32;
  Item *pIVar33;
  Item **ppIVar34;
  byte bVar35;
  byte bVar36;
  Transform2D *pTVar37;
  uint uVar38;
  ulong uVar39;
  size_t __n;
  long in_FS_OFFSET;
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined3 in_stack_00000029;
  undefined1 auStack_1a8 [12];
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  Item *local_180;
  Transform2D *local_178;
  Item *local_170;
  Color *local_168;
  Item *local_160;
  Transform2D *local_158;
  Item *local_150;
  Item *local_148;
  undefined8 uStack_140;
  Vector2 *local_138;
  Item **local_130;
  Item **local_128;
  Color *local_120;
  Item *local_118;
  undefined8 uStack_110;
  RendererCanvasCull *local_108;
  Rect2 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  int local_d4;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  undefined1 *puVar30;
  
  auVar10._8_8_ = local_a8._8_8_;
  auVar10._0_8_ = local_a8._0_8_;
  auVar60._8_8_ = local_c8._8_8_;
  auVar60._0_8_ = local_c8._0_8_;
  puVar29 = auStack_1a8;
  puVar30 = auStack_1a8;
  local_130 = param_6;
  local_150 = (Item *)CONCAT44(local_150._4_4_,param_5);
  local_128 = param_7;
  local_158 = (Transform2D *)CONCAT71(local_158._1_7_,param_10);
  local_148 = (Item *)param_8;
  local_118 = (Item *)param_9;
  local_138 = param_12;
  local_120 = (Color *)param_14;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar35 = (byte)param_1[0x38] >> 1;
  bVar36 = bVar35 & 1;
  puVar28 = auStack_1a8;
  local_108 = this;
  local_100 = param_3;
  if (((bVar35 & 1) == 0) ||
     (puVar28 = auStack_1a8, local_c8 = auVar60, local_a8 = auVar10,
     (param_11 & *(uint *)(param_1 + 0x1c8)) == 0)) goto LAB_00113a30;
  if (param_1[400] != (Item)0x0) {
    if ((*(long *)(param_1 + 0x1d8) != 0) &&
       (local_160 = *(Item **)(*(long *)(param_1 + 0x1d8) + -8), local_160 != (Item *)0x0)) {
      local_168 = param_4;
      CowData<RendererCanvasCull::Item*>::_copy_on_write
                ((CowData<RendererCanvasCull::Item*> *)(param_1 + 0x1d8));
      ppIVar34 = *(Item ***)(param_1 + 0x1d8);
      if (local_160 == (Item *)0x1) {
        local_160 = (Item *)local_168;
        SortArray<RendererCanvasCull::Item*,RendererCanvasCull::ItemIndexSort,true>::introsort
                  (0,1,ppIVar34,0);
        param_4 = (Color *)local_160;
      }
      else {
        lVar18 = 0;
        pIVar27 = local_160;
        do {
          pIVar27 = (Item *)((long)pIVar27 >> 1);
          lVar18 = lVar18 + 1;
        } while (pIVar27 != (Item *)0x1);
        local_170 = (Item *)local_168;
        local_168 = (Color *)pIVar27;
        SortArray<RendererCanvasCull::Item*,RendererCanvasCull::ItemIndexSort,true>::introsort
                  (0,(long)local_160,ppIVar34,lVar18 * 2);
        pIVar27 = local_160;
        pCVar26 = local_168;
        local_178 = param_2;
        if ((long)local_160 < 0x11) {
          pIVar32 = (Item *)(ppIVar34 + 1);
          local_168 = (Color *)(CONCAT71(local_168._1_7_,bVar35) & 0xffffffffffffff01);
          local_184 = _param_10;
          local_180 = local_170;
          local_170 = (Item *)param_1;
          local_160 = pIVar32;
          do {
            pIVar3 = *(Item **)pIVar32;
            iVar14 = *(int *)(pIVar3 + 0x18c);
            if (iVar14 < *(int *)(*ppIVar34 + 0x18c)) {
              memmove(local_160,ppIVar34,(long)pCVar26 * 8);
              *ppIVar34 = pIVar3;
            }
            else {
              pIVar21 = *(Item **)(pIVar32 + -8);
              pIVar33 = (Item *)pCVar26 + -1;
              pIVar23 = pIVar32;
              if (iVar14 < *(int *)(pIVar21 + 0x18c)) {
                do {
                  pIVar23 = pIVar33;
                  if (pIVar23 == (Item *)0x0) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    pIVar23 = local_160;
                    goto LAB_0011521d;
                  }
                  ppIVar34[(long)(pIVar23 + 1)] = pIVar21;
                  pIVar21 = ppIVar34[(long)(pIVar23 + -1)];
                  pIVar33 = pIVar23 + -1;
                } while (iVar14 < *(int *)(pIVar21 + 0x18c));
                pIVar23 = (Item *)(ppIVar34 + (long)pIVar23);
              }
LAB_0011521d:
              *(Item **)pIVar23 = pIVar3;
            }
            pCVar26 = (Color *)((Item *)pCVar26 + 1);
            pIVar32 = pIVar32 + 8;
          } while (pIVar27 != (Item *)pCVar26);
        }
        else {
          local_160 = (Item *)(CONCAT71(local_160._1_7_,bVar35) & 0xffffffffffffff01);
          local_168 = (Color *)pIVar27;
          local_180 = local_170;
          local_170 = (Item *)param_1;
          do {
            pIVar3 = ppIVar34[(long)pCVar26];
            iVar14 = *(int *)(pIVar3 + 0x18c);
            if (iVar14 < *(int *)(*ppIVar34 + 0x18c)) {
              memmove(ppIVar34 + 1,ppIVar34,(long)pCVar26 * 8);
              *ppIVar34 = pIVar3;
            }
            else {
              pIVar21 = ppIVar34[(long)((Item *)pCVar26 + -1)];
              ppIVar31 = ppIVar34 + (long)pCVar26;
              pIVar27 = (Item *)pCVar26 + -1;
              if (iVar14 < *(int *)(pIVar21 + 0x18c)) {
                do {
                  pIVar32 = pIVar27;
                  if (pIVar32 == (Item *)0x0) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    ppIVar31 = ppIVar34 + 1;
                    goto LAB_00113fc1;
                  }
                  ppIVar34[(long)(pIVar32 + 1)] = pIVar21;
                  pIVar21 = ppIVar34[(long)(pIVar32 + -1)];
                  pIVar27 = pIVar32 + -1;
                } while (iVar14 < *(int *)(pIVar21 + 0x18c));
                ppIVar31 = ppIVar34 + (long)pIVar32;
              }
LAB_00113fc1:
              *ppIVar31 = pIVar3;
            }
            pCVar13 = local_168;
            pCVar26 = (Color *)((Item *)pCVar26 + 1);
          } while (pCVar26 != (Color *)0x10);
          pIVar27 = (Item *)(ppIVar34 + 0x10);
          local_184 = _param_10;
          local_168 = (Color *)CONCAT71(local_168._1_7_,local_160._0_1_);
          pIVar32 = (Item *)0x10;
          local_160 = (Item *)(ppIVar34 + 1);
          do {
            pIVar3 = *(Item **)pIVar27;
            pIVar21 = *(Item **)(pIVar27 + -8);
            iVar14 = *(int *)(pIVar3 + 0x18c);
            pIVar23 = pIVar32 + -1;
            pIVar33 = pIVar27;
            if (iVar14 < *(int *)(pIVar21 + 0x18c)) {
              do {
                ppIVar34[(long)(pIVar23 + 1)] = pIVar21;
                pIVar33 = pIVar23 + -1;
                pIVar21 = ppIVar34[(long)pIVar33];
                if (*(int *)(pIVar21 + 0x18c) <= iVar14) {
                  pIVar33 = (Item *)(ppIVar34 + (long)pIVar23);
                  goto LAB_0011407d;
                }
                pIVar23 = pIVar33;
              } while (pIVar33 != (Item *)0x0);
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pIVar33 = local_160;
            }
LAB_0011407d:
            pIVar32 = pIVar32 + 1;
            *(Item **)pIVar33 = pIVar3;
            pIVar27 = pIVar27 + 8;
          } while (pCVar13 != (Color *)pIVar32);
        }
        param_1 = (Item *)local_170;
        param_4 = (Color *)local_180;
        param_2 = local_178;
        _param_10 = local_184;
        bVar36 = (byte)local_168;
      }
    }
    ((Item *)param_1)[400] = (Item)0x0;
  }
  if ((((Item *)param_1)[0x188] == (Item)0x0) || (pIVar27 = local_118, local_118 == (Item *)0x0)) {
    pIVar27 = (Item *)0x0;
    local_118 = (Item *)param_1;
  }
  *(Item **)((Item *)param_1 + 0xd0) = pIVar27;
  local_168 = (Color *)((Item *)param_1 + 0x168);
  local_c8 = Color::operator*(local_168,param_4);
  puVar28 = auStack_1a8;
  if ((double)(float)local_c8._12_4_ < _LC285) goto LAB_00113a30;
  pfVar16 = (float *)RendererCanvasRender::Item::get_rect();
  pfVar2 = *(float **)((Item *)param_1 + 0x1e0);
  fVar52 = *pfVar16;
  fVar55 = pfVar16[1];
  fVar57 = pfVar16[2];
  fVar50 = pfVar16[3];
  if ((pfVar2 != (float *)0x0) && ((fVar44 = pfVar2[2], fVar44 != 0.0 || (pfVar2[3] != 0.0)))) {
    if ((fVar57 < 0.0) ||
       (((fVar50 < 0.0 || (fVar44 < 0.0)) ||
        (fVar40 = pfVar2[3], fVar45 = fVar55, fVar47 = fVar52, fVar40 < 0.0)))) {
      local_180 = (Item *)CONCAT44(local_180._4_4_,fVar55);
      local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar57);
      local_170 = (Item *)CONCAT44(local_170._4_4_,fVar52);
      local_160 = (Item *)CONCAT44(local_160._4_4_,fVar50);
      _err_print_error("merge","./core/math/rect2.h",0xa8,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
      fVar40 = pfVar2[3];
      fVar44 = pfVar2[2];
      fVar50 = local_160._0_4_;
      fVar45 = local_180._0_4_;
      fVar47 = local_170._0_4_;
      fVar57 = local_178._0_4_;
    }
    fVar58 = *pfVar2;
    fVar59 = pfVar2[1];
    fVar52 = fVar58;
    if (fVar47 <= fVar58) {
      fVar52 = fVar47;
    }
    fVar55 = fVar59;
    if (fVar45 <= fVar59) {
      fVar55 = fVar45;
    }
    fVar48 = fVar59 + fVar40;
    if (fVar59 + fVar40 <= fVar50 + fVar45) {
      fVar48 = fVar50 + fVar45;
    }
    fVar40 = fVar58 + fVar44;
    if (fVar58 + fVar44 <= fVar47 + fVar57) {
      fVar40 = fVar47 + fVar57;
    }
    fVar50 = fVar48 - fVar55;
    fVar57 = fVar40 - fVar52;
  }
  local_88 = 0;
  local_98 = 0x3f800000;
  uStack_90 = 0x3f80000000000000;
  local_78 = 0x3f800000;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  if (SUB41(_param_10,0) == '\0') {
    if ((local_108[0x318] == (RendererCanvasCull)0x0) ||
       (((byte)((Item *)param_1)[0x38] & 0x20) == 0)) {
      local_88 = *(undefined8 *)((Item *)param_1 + 0x18);
      local_98 = *(undefined8 *)((Item *)param_1 + 8);
      uStack_90 = *(undefined8 *)((Item *)param_1 + 0x10);
    }
    else {
      local_180 = (Item *)CONCAT44(local_180._4_4_,fVar55);
      local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar57);
      local_170 = (Item *)CONCAT44(local_170._4_4_,fVar52);
      local_160 = (Item *)CONCAT44(local_160._4_4_,fVar50);
      lVar18 = Engine::get_singleton();
      TransformInterpolator::interpolate_transform_2d
                ((Transform2D *)((Item *)param_1 + 0x20),(Transform2D *)((Item *)param_1 + 8),
                 (Transform2D *)&local_98,(float)*(double *)(lVar18 + 0x60));
      fVar57 = local_178._0_4_;
      fVar55 = local_180._0_4_;
      fVar52 = local_170._0_4_;
      fVar50 = local_160._0_4_;
    }
    local_48 = *(undefined8 *)(param_2 + 0x10);
    local_58 = *(undefined8 *)param_2;
    uStack_50 = *(undefined8 *)(param_2 + 8);
    if (local_108[0x1ca] != (RendererCanvasCull)0x0) {
      local_160 = (Item *)local_a8;
      local_180 = (Item *)CONCAT44(local_180._4_4_,fVar57);
      local_a8._0_8_ =
           CONCAT44((float)((ulong)local_88 >> 0x20) + _LC33._4_4_,(float)local_88 + (float)_LC33);
      local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar52);
      local_170 = (Item *)CONCAT44(local_170._4_4_,fVar50);
      local_184 = fVar55;
      local_88 = Vector2::floor();
      local_a8._0_8_ =
           CONCAT44((float)((ulong)local_48 >> 0x20) + _LC33._4_4_,(float)local_48 + (float)_LC33);
      local_48 = Vector2::floor();
      fVar57 = local_180._0_4_;
      fVar55 = local_184;
      fVar52 = local_178._0_4_;
      fVar50 = local_170._0_4_;
    }
    local_180 = (Item *)CONCAT44(local_180._4_4_,fVar55);
    local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar57);
    local_170 = (Item *)CONCAT44(local_170._4_4_,fVar52);
    local_160 = (Item *)CONCAT44(local_160._4_4_,fVar50);
    Transform2D::operator*((Transform2D *)&local_f8,(Transform2D *)&local_58);
    local_68 = local_e8;
    local_78 = local_f8;
    uStack_70 = uStack_f0;
    fVar57 = local_178._0_4_;
    fVar55 = local_180._0_4_;
    fVar52 = local_170._0_4_;
    fVar50 = local_160._0_4_;
  }
  else {
    local_68 = *(undefined8 *)(param_2 + 0x10);
    local_78 = *(undefined8 *)param_2;
    uStack_70 = *(undefined8 *)(param_2 + 8);
  }
  local_d0 = *(undefined8 *)local_138;
  if (((Item *)param_1)[0xea] == (Item)0x0) {
    *(undefined8 *)((Item *)param_1 + 0xec) = local_d0;
    *(int *)((Item *)param_1 + 0xf4) = param_13;
    *(Color **)((Item *)param_1 + 0xf8) = local_120;
  }
  else {
    local_d0 = *(undefined8 *)((Item *)param_1 + 0xec);
    param_13 = *(int *)((Item *)param_1 + 0xf4);
    local_120 = (Color *)param_1;
  }
  local_b8 = 0.0;
  fStack_b4 = 0.0;
  local_b0 = 0.0;
  fStack_ac = 0.0;
  if (((byte)((Item *)param_1)[0x38] & 0x40) == 0) {
    fVar44 = uStack_70._4_4_ * fVar50;
    fVar50 = fVar50 * (float)uStack_70;
    fVar45 = fVar52 * (float)local_78 + (float)uStack_70 * fVar55 + (float)local_68;
    fVar47 = local_78._4_4_ * fVar52 + uStack_70._4_4_ * fVar55 + local_68._4_4_;
    fVar40 = (float)local_78 * fVar57 + fVar45;
    fVar55 = local_78._4_4_ * fVar57 + fVar47;
    fVar52 = fVar40;
    if (fVar40 <= fVar45 + 0.0) {
      fVar52 = fVar45 + 0.0;
    }
    fVar57 = fVar40;
    if (fVar45 <= fVar40) {
      fVar57 = fVar45;
    }
    fVar58 = fVar55;
    if (fVar55 <= fVar47 + 0.0) {
      fVar58 = fVar47 + 0.0;
    }
    fVar59 = fVar55;
    if (fVar47 <= fVar55) {
      fVar59 = fVar47;
    }
    fVar52 = fVar52 - fVar57;
    fVar58 = fVar58 - fVar59;
    if ((fVar52 < 0.0) || (fVar48 = fVar47 + fVar44, fVar46 = fVar45 + fVar50, fVar58 < 0.0)) {
      local_180 = (Item *)CONCAT44(local_180._4_4_,fVar47 + fVar44);
      local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar40);
      local_170 = (Item *)CONCAT44(local_170._4_4_,fVar55);
      local_160 = (Item *)CONCAT44(local_160._4_4_,fVar50);
      local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar44);
      local_194 = fVar52;
      local_190 = fVar58;
      local_18c = fVar59;
      local_188 = fVar57;
      local_184 = fVar45 + fVar50;
      _err_print_error("expand_to","./core/math/rect2.h",0x100,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
      fVar52 = local_194;
      fVar57 = local_188;
      fVar59 = local_18c;
      fVar58 = local_190;
      fVar44 = local_138._0_4_;
      fVar48 = local_180._0_4_;
      fVar55 = local_170._0_4_;
      fVar40 = local_178._0_4_;
      fVar46 = local_184;
      fVar50 = local_160._0_4_;
    }
    fVar58 = fVar58 + fVar59;
    fVar45 = fVar46;
    if (fVar57 <= fVar46) {
      fVar45 = fVar57;
    }
    fVar47 = fVar48;
    if (fVar59 <= fVar48) {
      fVar47 = fVar59;
    }
    fVar52 = fVar52 + fVar57;
  }
  else {
    fVar44 = *(float *)(local_108 + 0x27c) * fVar50;
    fVar50 = fVar50 * *(float *)(local_108 + 0x278);
    fVar45 = fVar52 * *(float *)(local_108 + 0x270) + *(float *)(local_108 + 0x278) * fVar55 +
             *(float *)(local_108 + 0x280);
    fVar47 = *(float *)(local_108 + 0x274) * fVar52 + *(float *)(local_108 + 0x27c) * fVar55 +
             *(float *)(local_108 + 0x284);
    fVar40 = *(float *)(local_108 + 0x270) * fVar57 + fVar45;
    fVar55 = *(float *)(local_108 + 0x274) * fVar57 + fVar47;
    fVar52 = fVar40;
    if (fVar40 <= fVar45 + 0.0) {
      fVar52 = fVar45 + 0.0;
    }
    fVar57 = fVar40;
    if (fVar45 <= fVar40) {
      fVar57 = fVar45;
    }
    fVar58 = fVar55;
    if (fVar55 <= fVar47 + 0.0) {
      fVar58 = fVar47 + 0.0;
    }
    fVar59 = fVar55;
    if (fVar47 <= fVar55) {
      fVar59 = fVar47;
    }
    fVar52 = fVar52 - fVar57;
    fVar58 = fVar58 - fVar59;
    if ((fVar52 < 0.0) || (fVar48 = fVar47 + fVar44, fVar46 = fVar45 + fVar50, fVar58 < 0.0)) {
      local_180 = (Item *)CONCAT44(local_180._4_4_,fVar47 + fVar44);
      local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar40);
      local_170 = (Item *)CONCAT44(local_170._4_4_,fVar55);
      local_160 = (Item *)CONCAT44(local_160._4_4_,fVar50);
      local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar44);
      local_194 = fVar52;
      local_190 = fVar58;
      local_18c = fVar59;
      local_188 = fVar57;
      local_184 = fVar45 + fVar50;
      _err_print_error("expand_to","./core/math/rect2.h",0x100,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
      fVar52 = local_194;
      fVar57 = local_188;
      fVar59 = local_18c;
      fVar58 = local_190;
      fVar44 = local_138._0_4_;
      fVar48 = local_180._0_4_;
      fVar55 = local_170._0_4_;
      fVar40 = local_178._0_4_;
      fVar46 = local_184;
      fVar50 = local_160._0_4_;
    }
    fVar58 = fVar58 + fVar59;
    fVar45 = fVar46;
    if (fVar57 <= fVar46) {
      fVar45 = fVar57;
    }
    fVar47 = fVar48;
    if (fVar59 <= fVar48) {
      fVar47 = fVar59;
    }
    fVar52 = fVar52 + fVar57;
  }
  if (fVar46 <= fVar52) {
    fVar46 = fVar52;
  }
  if (fVar48 <= fVar58) {
    fVar48 = fVar58;
  }
  fVar46 = fVar46 - fVar45;
  fVar48 = fVar48 - fVar47;
  if ((fVar46 < 0.0) || (fVar52 = fVar44 + fVar55, fVar57 = fVar50 + fVar40, fVar48 < 0.0)) {
    local_180 = (Item *)CONCAT44(local_180._4_4_,fVar48);
    local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar47);
    local_170 = (Item *)CONCAT44(local_170._4_4_,fVar45);
    local_160 = (Item *)CONCAT44(local_160._4_4_,fVar50 + fVar40);
    local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar44 + fVar55);
    local_184 = fVar46;
    _err_print_error("expand_to","./core/math/rect2.h",0x100,
                     "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                     ,0,0);
    fVar47 = local_178._0_4_;
    fVar52 = local_138._0_4_;
    fVar48 = local_180._0_4_;
    fVar45 = local_170._0_4_;
    fVar46 = local_184;
    fVar57 = local_160._0_4_;
  }
  local_b8 = fVar57;
  if (fVar45 <= fVar57) {
    local_b8 = fVar45;
  }
  if (fVar57 <= fVar46 + fVar45) {
    fVar57 = fVar46 + fVar45;
  }
  fStack_ac = fVar52;
  if (fVar52 <= fVar48 + fVar47) {
    fStack_ac = fVar48 + fVar47;
  }
  if (fVar47 <= fVar52) {
    fVar52 = fVar47;
  }
  local_b0 = fVar57 - local_b8;
  fStack_ac = fStack_ac - fVar52;
  if (local_120 != (Color *)0x0) {
    if (((float)local_d0 != 0.0) || (local_d0._4_4_ != 0.0)) {
      fVar47 = (float)param_13;
      fVar57 = *(float *)(local_120 + 0xa8);
      fVar44 = *(float *)(local_120 + 0xac);
      fVar55 = (float)*(undefined8 *)(local_120 + 0xa0);
      fVar50 = (float)((ulong)*(undefined8 *)(local_120 + 0xa0) >> 0x20);
      fVar40 = (float)(param_13 / 2) * (float)local_d0;
      fVar45 = (float)(param_13 / 2) * local_d0._4_4_;
      local_b8 = local_b8 - (fVar40 * fVar55 + fVar45 * fVar57);
      fStack_b4 = fVar52 - (fVar40 * fVar50 + fVar45 * fVar44);
      fVar40 = fVar47 * 0.0;
      fVar52 = (float)local_d0 * fVar47 * fVar50 + fVar40 * fVar44;
      local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar52);
      fVar52 = fVar52 + fStack_b4;
      fVar45 = (float)local_d0 * fVar47 * fVar55 + fVar40 * fVar57;
      local_160 = (Item *)CONCAT44(local_160._4_4_,fVar45);
      fVar45 = fVar45 + local_b8;
      if ((local_b0 < 0.0) ||
         (fVar58 = local_d0._4_4_, fVar48 = local_b0, fVar46 = local_b8, fVar54 = fStack_b4,
         fVar59 = fStack_ac, fStack_ac < 0.0)) {
        local_198 = local_d0._4_4_;
        local_180 = (Item *)CONCAT44(local_180._4_4_,fVar52);
        local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar45);
        local_170 = (Item *)CONCAT44(local_170._4_4_,local_b0);
        local_194 = local_b8;
        local_190 = fStack_b4;
        local_18c = fStack_ac;
        local_188 = fVar40;
        local_184 = fVar47;
        _err_print_error("merge","./core/math/rect2.h",0xa8,
                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                         ,0,0);
        fVar55 = *(float *)(local_120 + 0xa0);
        fVar57 = *(float *)(local_120 + 0xa8);
        fVar50 = *(float *)(local_120 + 0xa4);
        fVar44 = *(float *)(local_120 + 0xac);
        fVar58 = local_198;
        fVar45 = local_178._0_4_;
        fVar52 = local_180._0_4_;
        fVar40 = local_188;
        fVar48 = local_170._0_4_;
        fVar46 = local_194;
        fVar54 = local_190;
        fVar47 = local_184;
        fVar59 = local_18c;
      }
      fVar51 = fVar52;
      if (fVar54 <= fVar52) {
        fVar51 = fVar54;
      }
      fVar9 = fVar45;
      if (fVar46 <= fVar45) {
        fVar9 = fVar46;
      }
      fVar56 = fVar52 + fVar59;
      if (fVar52 + fVar59 <= fVar54 + fVar59) {
        fVar56 = fVar54 + fVar59;
      }
      fVar54 = fVar48 + fVar45;
      if (fVar48 + fVar45 <= fVar46 + fVar48) {
        fVar54 = fVar46 + fVar48;
      }
      fVar56 = fVar56 - fVar51;
      fVar45 = fVar55 * fVar40 + fVar57 * fVar47 * fVar58 + fVar45;
      fVar52 = fVar40 * fVar50 + fVar47 * fVar58 * fVar44 + fVar52;
      fVar54 = fVar54 - fVar9;
      if ((((fVar54 < 0.0) || (fVar56 < 0.0)) || (fVar48 < 0.0)) || (fVar59 < 0.0)) {
        local_180 = (Item *)CONCAT44(local_180._4_4_,fVar52);
        local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar45);
        local_170 = (Item *)CONCAT44(local_170._4_4_,fVar48);
        local_194 = fVar54;
        local_190 = fVar9;
        local_18c = fVar56;
        local_188 = fVar51;
        local_184 = fVar59;
        _err_print_error("merge","./core/math/rect2.h",0xa8,
                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                         ,0,0);
        fVar59 = local_184;
        fVar51 = local_188;
        fVar54 = local_194;
        fVar56 = local_18c;
        fVar9 = local_190;
        fVar52 = local_180._0_4_;
        fVar48 = local_170._0_4_;
        fVar45 = local_178._0_4_;
      }
      fVar55 = fVar45;
      if (fVar9 <= fVar45) {
        fVar55 = fVar9;
      }
      fVar57 = fVar52;
      if (fVar51 <= fVar52) {
        fVar57 = fVar51;
      }
      fVar50 = fVar48 + fVar45;
      if (fVar48 + fVar45 <= fVar9 + fVar54) {
        fVar50 = fVar9 + fVar54;
      }
      fVar44 = fVar52 + fVar59;
      if (fVar52 + fVar59 <= fVar51 + fVar56) {
        fVar44 = fVar51 + fVar56;
      }
      fVar50 = fVar50 - fVar55;
      fVar44 = fVar44 - fVar57;
      if (((fVar50 < 0.0) || (fVar44 < 0.0)) ||
         ((fVar48 < 0.0 ||
          (fVar40 = fVar52 - local_138._0_4_, fVar47 = fVar45 - local_160._0_4_, fVar59 < 0.0)))) {
        local_180 = (Item *)CONCAT44(local_180._4_4_,fVar57);
        local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar59);
        local_170 = (Item *)CONCAT44(local_170._4_4_,fVar52 - local_138._0_4_);
        local_160 = (Item *)CONCAT44(local_160._4_4_,fVar45 - local_160._0_4_);
        local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar48);
        local_18c = fVar50;
        local_188 = fVar55;
        local_184 = fVar44;
        _err_print_error("merge","./core/math/rect2.h",0xa8,
                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                         ,0,0);
        fVar59 = local_178._0_4_;
        fVar44 = local_184;
        fVar40 = local_170._0_4_;
        fVar57 = local_180._0_4_;
        fVar48 = local_138._0_4_;
        fVar55 = local_188;
        fVar50 = local_18c;
        fVar47 = local_160._0_4_;
      }
      fVar52 = fVar40;
      if (fVar57 <= fVar40) {
        fVar52 = fVar57;
      }
      local_b8 = fVar47;
      if (fVar55 <= fVar47) {
        local_b8 = fVar55;
      }
      fStack_ac = fVar40 + fVar59;
      if (fVar40 + fVar59 <= fVar44 + fVar57) {
        fStack_ac = fVar44 + fVar57;
      }
      local_b0 = fVar48 + fVar47;
      if (fVar48 + fVar47 <= fVar50 + fVar55) {
        local_b0 = fVar50 + fVar55;
      }
      local_b0 = local_b0 - local_b8;
      fStack_ac = fStack_ac - fVar52;
    }
  }
  local_b8 = local_b8 + *(float *)local_100;
  fStack_b4 = fVar52 + *(float *)(local_100 + 4);
  local_138 = (Vector2 *)CONCAT44(local_138._4_4_,local_b8);
  local_160 = (Item *)CONCAT44(local_160._4_4_,fStack_b4);
  if (*(long *)((Item *)param_1 + 0x1d8) == 0) {
    local_170._0_4_ = 0.0;
  }
  else {
    local_170._0_4_ = *(float *)(*(long *)((Item *)param_1 + 0x1d8) + -8);
  }
  CowData<RendererCanvasCull::Item*>::_copy_on_write
            ((CowData<RendererCanvasCull::Item*> *)((Item *)param_1 + 0x1d8));
  local_178 = *(Transform2D **)((Item *)param_1 + 0x1d8);
  if (((byte)((Item *)param_1)[0x38] & 1) != 0) {
    if (local_148 == (Item *)0x0) {
      auVar60 = Rect2::intersection(local_100,(Rect2 *)&local_b8);
      *(undefined1 (*) [16])((Item *)param_1 + 0xb8) = auVar60;
    }
    else {
      auVar60 = Rect2::intersection((Rect2 *)(local_148 + 0xb8),(Rect2 *)&local_b8);
      *(undefined1 (*) [16])((Item *)param_1 + 0xb8) = auVar60;
    }
    auVar12._8_8_ = local_a8._8_8_;
    auVar12._0_8_ = local_a8._0_8_;
    puVar28 = auStack_1a8;
    if ((*(float *)((Item *)param_1 + 0xc0) <= _LC233 &&
         _LC233 != *(float *)((Item *)param_1 + 0xc0)) ||
       (puVar28 = auStack_1a8, local_a8 = auVar12,
       *(float *)((Item *)param_1 + 0xc4) <= _LC233 && _LC233 != *(float *)((Item *)param_1 + 0xc4))
       ) goto LAB_00113a30;
    uVar41 = Vector2::round();
    *(undefined8 *)((Item *)param_1 + 0xb8) = uVar41;
    uVar41 = Vector2::round();
    *(undefined8 *)((Item *)param_1 + 0xc0) = uVar41;
    local_148 = (Item *)param_1;
  }
  uVar39 = (ulong)*(uint *)((Item *)param_1 + 0x160);
  *(Item **)((Item *)param_1 + 200) = local_148;
  if (((Item *)param_1)[0x164] != (Item)0x0) {
    uVar38 = *(uint *)((Item *)param_1 + 0x160) + (int)local_150._0_4_;
    if (0x1000 < (int)uVar38) {
      uVar38 = 0x1000;
    }
    uVar39 = (ulong)uVar38;
    if ((int)uVar38 < -0x1000) {
      uVar39 = 0xfffff000;
    }
  }
  iVar14 = (int)uVar39;
  if (((Item *)param_1)[0x165] != (Item)0x0) {
    if (SUB41(_param_10,0) == '\0') {
      local_138 = (Vector2 *)CONCAT44(local_138._4_4_,*(int *)((Item *)param_1 + 0x194));
      if (*(int *)((Item *)param_1 + 0x194) == -1) {
        uVar15 = _count_ysort_children(local_108,param_1);
        local_138 = (Vector2 *)CONCAT44(local_138._4_4_,uVar15);
        *(undefined4 *)((Item *)param_1 + 0x194) = uVar15;
      }
      fVar52 = _LC6;
      iVar14 = (int)local_138._0_4_ + 1;
      local_148 = (Item *)(long)iVar14;
      uVar22 = (long)local_148 * 8 + 0x17;
      puVar28 = auStack_1a8;
      while (puVar30 != auStack_1a8 + -(uVar22 & 0xfffffffffffff000)) {
        puVar29 = puVar28 + -0x1000;
        *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -8);
        puVar30 = puVar28 + -0x1000;
        puVar28 = puVar28 + -0x1000;
      }
      uVar22 = (ulong)((uint)uVar22 & 0xff0);
      lVar18 = -uVar22;
      if (uVar22 != 0) {
        *(undefined8 *)(puVar29 + -8) = *(undefined8 *)(puVar29 + -8);
      }
      ppIVar34 = (Item **)((ulong)(puVar29 + lVar18 + 0xf) & 0xfffffffffffffff0);
      *(undefined8 *)((Item *)param_1 + 0x1b8) = 0;
      *(undefined4 *)((Item *)param_1 + 0x1a8) = 0x3f800000;
      *(undefined4 *)((Item *)param_1 + 0x1ac) = 0;
      *(undefined4 *)((Item *)param_1 + 0x1b0) = 0;
      *(undefined4 *)((Item *)param_1 + 0x1b4) = 0x3f800000;
      local_58 = CONCAT44(fVar52,fVar52);
      uStack_50 = CONCAT44(fVar52,fVar52);
      local_48 = 0;
      *(undefined8 *)(puVar29 + lVar18 + -8) = 0x114eb3;
      local_120 = (Color *)&local_58;
      auVar60 = Color::operator/((Color *)&local_58,local_168);
      *ppIVar34 = param_1;
      uStack_50 = _UNK_001236b8;
      local_58 = CONCAT44(_UNK_001236b4,_LC6);
      *(long *)((Item *)param_1 + 0x198) = auVar60._0_8_;
      *(undefined4 *)((Item *)param_1 + 0x1c0) = 0;
      *(float *)((Item *)param_1 + 0x1c4) = local_150._0_4_;
      local_d4 = 1;
      *(long *)((Item *)param_1 + 0x1a0) = auVar60._8_8_;
      *(ulong *)(puVar29 + lVar18 + -0x10) = uVar39;
      *(undefined8 *)(puVar29 + lVar18 + -0x18) = 0x114f1b;
      _collect_ysort_children
                (local_108,param_1,(Item *)local_118,(Color *)&local_58,ppIVar34,&local_d4,
                 *(int *)(puVar29 + lVar18 + -0x10));
      pIVar27 = local_148;
      puVar28 = puVar29 + lVar18;
      if (iVar14 != 0) {
        if (iVar14 != 1) {
          lVar24 = 0;
          pIVar32 = local_148;
          do {
            pIVar32 = (Item *)((long)pIVar32 >> 1);
            lVar24 = lVar24 + 1;
          } while (pIVar32 != (Item *)0x1);
          __n = 8;
          local_118 = local_148;
          *(undefined8 *)(puVar29 + lVar18 + -8) = 0x114f72;
          local_148 = pIVar32;
          SortArray<RendererCanvasCull::Item*,RendererCanvasCull::ItemYSort,true>::introsort
                    (0,(long)pIVar27,ppIVar34,lVar24 * 2);
          pIVar27 = (Item *)(ppIVar34 + 1);
          pIVar32 = local_148;
          local_150 = (Item *)param_1;
          if (iVar14 < 0x11) {
LAB_00115ce7:
            pIVar3 = *(Item **)((long)ppIVar34 + __n);
            pIVar21 = *ppIVar34;
            fVar52 = *(float *)(pIVar3 + 0x1bc);
            fVar55 = *(float *)(pIVar21 + 0x1bc);
            if (fVar52 == fVar55) {
              if (*(int *)(pIVar21 + 0x1c0) <= *(int *)(pIVar3 + 0x1c0)) {
LAB_00115d1c:
                pIVar33 = (Item *)((long)ppIVar34 + __n);
                do {
                  lVar24 = *(long *)(pIVar33 + -8);
                  fVar55 = *(float *)(lVar24 + 0x1bc);
                  if (fVar52 == fVar55) {
LAB_00115d8d:
                    bVar7 = *(int *)(pIVar3 + 0x1c0) < *(int *)(lVar24 + 0x1c0);
                  }
                  else {
                    fVar57 = _LC8;
                    if (_LC8 <= _LC8 * ABS(fVar52)) {
                      fVar57 = _LC8 * ABS(fVar52);
                    }
                    if (ABS(fVar52 - fVar55) < fVar57) goto LAB_00115d8d;
                    bVar7 = fVar52 < fVar55;
                  }
                  if (!bVar7) goto LAB_00115dd1;
                  if (pIVar33 == pIVar27) goto LAB_00115d9e;
                  *(long *)pIVar33 = lVar24;
                  pIVar33 = pIVar33 + -8;
                } while( true );
              }
            }
            else {
              fVar57 = _LC8;
              if (_LC8 <= ABS(fVar52) * _LC8) {
                fVar57 = ABS(fVar52) * _LC8;
              }
              if (ABS(fVar52 - fVar55) < fVar57) {
                bVar7 = *(int *)(pIVar3 + 0x1c0) < *(int *)(pIVar21 + 0x1c0);
              }
              else {
                bVar7 = fVar52 < fVar55;
              }
              if (!bVar7) goto LAB_00115d1c;
            }
            *(undefined8 *)(puVar29 + lVar18 + -8) = 0x115cce;
            memmove(pIVar27,ppIVar34,__n);
            *ppIVar34 = pIVar3;
            goto LAB_00115cd2;
          }
          local_150 = local_118;
          local_148 = (Item *)param_1;
LAB_00115012:
          pIVar3 = *(Item **)((long)ppIVar34 + __n);
          pIVar21 = *ppIVar34;
          fVar52 = *(float *)(pIVar3 + 0x1bc);
          fVar55 = *(float *)(pIVar21 + 0x1bc);
          if (fVar52 == fVar55) {
            if (*(int *)(pIVar21 + 0x1c0) <= *(int *)(pIVar3 + 0x1c0)) goto LAB_00115047;
          }
          else {
            fVar57 = _LC8;
            if (_LC8 <= ABS(fVar52) * _LC8) {
              fVar57 = ABS(fVar52) * _LC8;
            }
            if (ABS(fVar52 - fVar55) < fVar57) {
              if (*(int *)(pIVar21 + 0x1c0) <= *(int *)(pIVar3 + 0x1c0)) goto LAB_00115047;
            }
            else if (fVar55 <= fVar52) {
LAB_00115047:
              pIVar33 = (Item *)((long)ppIVar34 + __n);
              do {
                lVar24 = *(long *)(pIVar33 + -8);
                fVar55 = *(float *)(lVar24 + 0x1bc);
                if (fVar52 == fVar55) {
LAB_001150c5:
                  bVar7 = *(int *)(pIVar3 + 0x1c0) < *(int *)(lVar24 + 0x1c0);
                }
                else {
                  fVar57 = _LC8;
                  if (_LC8 <= _LC8 * ABS(fVar52)) {
                    fVar57 = _LC8 * ABS(fVar52);
                  }
                  if (ABS(fVar52 - fVar55) < fVar57) goto LAB_001150c5;
                  bVar7 = fVar52 < fVar55;
                }
                if (!bVar7) goto LAB_001157bc;
                if (pIVar33 == pIVar27) goto LAB_00115789;
                *(long *)pIVar33 = lVar24;
                pIVar33 = pIVar33 + -8;
              } while( true );
            }
          }
          *(undefined8 *)(puVar29 + lVar18 + -8) = 0x114ffc;
          memmove(pIVar27,ppIVar34,__n);
          *ppIVar34 = pIVar3;
          goto LAB_00115000;
        }
        *(undefined8 *)(puVar29 + lVar18 + -8) = 0x116e9d;
        SortArray<RendererCanvasCull::Item*,RendererCanvasCull::ItemYSort,true>::introsort
                  (0,1,ppIVar34,0);
LAB_00116068:
        local_150 = (Item *)local_c8;
        local_168 = (Color *)local_a8;
        local_158 = (Transform2D *)&local_78;
        local_d4 = 0;
        local_160 = (Item *)param_1;
        do {
          pIVar3 = ppIVar34[local_d4];
          local_148 = *(Item **)(pIVar3 + 0xf8);
          pIVar21 = *(Item **)(local_160 + 200);
          uVar38 = *(uint *)(pIVar3 + 0xf4);
          uVar41 = *(undefined8 *)(pIVar3 + 0xd0);
          local_118 = (Item *)CONCAT44(local_118._4_4_,*(undefined4 *)(pIVar3 + 0x1c4));
          *(undefined8 *)(puVar29 + lVar18 + -8) = 0x1160f3;
          auVar60 = Color::operator*((Color *)local_150,(Color *)(pIVar3 + 0x198));
          *(undefined8 *)(puVar29 + lVar18 + -8) = 0x116128;
          local_a8 = auVar60;
          Transform2D::operator*((Transform2D *)local_120,local_158);
          pIVar5 = ppIVar34[local_d4];
          *(Item **)(puVar29 + lVar18 + -0x10) = local_148;
          *(ulong *)(puVar29 + lVar18 + -0x18) = (ulong)uVar38;
          *(Item **)(puVar29 + lVar18 + -0x20) = pIVar3 + 0xec;
          *(ulong *)(puVar29 + lVar18 + -0x28) = (ulong)param_11;
          *(undefined8 *)(puVar29 + lVar18 + -0x30) = 1;
          *(undefined8 *)(puVar29 + lVar18 + -0x38) = uVar41;
          *(Item **)(puVar29 + lVar18 + -0x40) = pIVar21;
          *(Item ***)(puVar29 + lVar18 + -0x48) = local_128;
          *(Item ***)(puVar29 + lVar18 + -0x50) = local_130;
          *(undefined8 *)(puVar29 + lVar18 + -0x58) = 0x116188;
          _cull_canvas_item(local_108,pIVar5,(Transform2D *)local_120,local_100,local_168,
                            (int)local_118._0_4_,*(Item ***)(puVar29 + lVar18 + -0x50),
                            *(Item ***)(puVar29 + lVar18 + -0x48),
                            *(Item **)(puVar29 + lVar18 + -0x40),
                            *(Item **)(puVar29 + lVar18 + -0x38),(bool)puVar29[lVar18 + -0x30],
                            *(uint *)(puVar29 + lVar18 + -0x28),
                            *(Vector2 **)(puVar29 + lVar18 + -0x20),
                            *(int *)(puVar29 + lVar18 + -0x18),*(Item **)(puVar29 + lVar18 + -0x10))
          ;
          iVar14 = local_d4 + 1;
          bVar7 = local_d4 < (int)local_138._0_4_;
          puVar28 = puVar29 + lVar18;
          local_d4 = iVar14;
        } while (bVar7);
      }
      goto LAB_00113a30;
    }
    pfVar2 = *(float **)((Item *)param_1 + 0x88);
    fVar52 = fStack_ac;
    fVar55 = local_b0;
    if (*(long *)((Item *)param_1 + 0x40) == 0) {
      local_158 = (Transform2D *)((ulong)local_158._1_7_ << 8);
      pIVar27 = (Item *)0x0;
      if (pfVar2 != (float *)0x0) goto LAB_001141a2;
LAB_0011435e:
      if (*(long *)((Item *)param_1 + 0x110) == 0) goto LAB_0011599e;
LAB_0011436c:
      if ((((*(float *)(local_100 + 8) <= 0.0 && *(float *)(local_100 + 8) != 0.0) ||
           (*(float *)(local_100 + 0xc) <= 0.0 && *(float *)(local_100 + 0xc) != 0.0)) ||
          (fVar55 < 0.0)) || (fVar52 < 0.0)) {
        local_120 = (Color *)CONCAT44(local_120._4_4_,fVar55);
        local_118 = (Item *)CONCAT44(local_118._4_4_,fVar52);
        _err_print_error("intersects","./core/math/rect2.h",0x39,
                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                         ,0,0);
        fVar52 = local_118._0_4_;
        fVar55 = local_120._0_4_;
      }
      if ((local_138._0_4_ + fVar55 < *(float *)local_100) ||
         (*(float *)local_100 + *(float *)(local_100 + 8) < local_138._0_4_)) goto LAB_001159b0;
      if ((local_160._0_4_ + fVar52 < *(float *)(local_100 + 4)) ||
         (*(float *)(local_100 + 4) + *(float *)(local_100 + 0xc) < local_160._0_4_))
      goto LAB_001159b0;
    }
    else {
      if ((*(char *)(*(long *)((Item *)param_1 + 0x40) + 4) != '\0') ||
         (*(long *)((Item *)param_1 + 0x110) != 0)) {
        pIVar27 = local_128[iVar14 + 0x1000];
        if (pfVar2 != (float *)0x0) goto LAB_001141a2;
LAB_00115a27:
        if (pIVar27 == (Item *)0x0) {
          pIVar27 = local_130[iVar14 + 0x1000];
        }
        else {
          pIVar27 = *(Item **)(pIVar27 + 0x80);
        }
        if (pIVar27 != (Item *)0x0) {
          fVar57 = 0.0;
          local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar52);
          fVar52 = 0.0;
          auVar43._0_12_ = ZEXT812(0);
          auVar43._12_4_ = 0;
          auVar53 = ZEXT816(0);
          local_168 = (Color *)CONCAT44(local_168._4_4_,fVar55);
          pIVar32 = pIVar27;
          do {
            if (pIVar27 == pIVar32) {
              fVar59 = *(float *)(pIVar27 + 0x100);
              fVar58 = *(float *)(pIVar27 + 0x104);
              fVar52 = *(float *)(pIVar27 + 0x108);
              fVar57 = *(float *)(pIVar27 + 0x10c);
            }
            else {
              if ((((fVar52 < 0.0) || (fVar57 < 0.0)) ||
                  (fVar55 = *(float *)(pIVar32 + 0x108), fVar55 < 0.0)) ||
                 (fVar50 = *(float *)(pIVar32 + 0x10c), fVar44 = auVar43._0_4_,
                 fVar40 = auVar53._0_4_, fVar50 < 0.0)) {
                local_150 = (Item *)CONCAT44(local_150._4_4_,auVar53._0_4_);
                local_148 = (Item *)CONCAT44(local_148._4_4_,auVar43._0_4_);
                local_120 = (Color *)CONCAT44(local_120._4_4_,fVar52);
                local_118 = (Item *)CONCAT44(local_118._4_4_,fVar57);
                _err_print_error("merge","./core/math/rect2.h",0xa8,
                                 "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                 ,0,0);
                fVar50 = *(float *)(pIVar32 + 0x10c);
                fVar55 = *(float *)(pIVar32 + 0x108);
                fVar57 = local_118._0_4_;
                fVar52 = local_120._0_4_;
                fVar44 = local_148._0_4_;
                fVar40 = local_150._0_4_;
              }
              fVar45 = *(float *)(pIVar32 + 0x104);
              fVar47 = *(float *)(pIVar32 + 0x100);
              fVar58 = fVar45;
              if (fVar44 <= fVar45) {
                fVar58 = fVar44;
              }
              fVar59 = fVar47;
              if (fVar40 <= fVar47) {
                fVar59 = fVar40;
              }
              fVar48 = fVar45 + fVar50;
              if (fVar45 + fVar50 <= fVar57 + fVar44) {
                fVar48 = fVar57 + fVar44;
              }
              fVar50 = fVar47 + fVar55;
              if (fVar47 + fVar55 <= fVar52 + fVar40) {
                fVar50 = fVar52 + fVar40;
              }
              fVar57 = fVar48 - fVar58;
              fVar52 = fVar50 - fVar59;
            }
            auVar43 = ZEXT416((uint)fVar58);
            auVar53 = ZEXT416((uint)fVar59);
            pIVar32 = *(Item **)(pIVar32 + 0x80);
          } while (pIVar32 != (Item *)0x0);
          lVar18 = *(long *)((Item *)param_1 + 0x40);
          fVar55 = local_158._0_4_;
          if (*(char *)(lVar18 + 4) == '\0') {
LAB_00115e36:
            fVar50 = *(float *)local_100;
            fVar44 = *(float *)(local_100 + 4);
            fVar40 = local_160._0_4_ - fVar44;
            if (((local_168._0_4_ < 0.0) || (local_158._0_4_ < 0.0)) ||
               ((fVar52 < 0.0 || (fVar45 = local_138._0_4_ - fVar50, fVar57 < 0.0)))) {
              local_160 = (Item *)CONCAT44(local_160._4_4_,fVar59);
              local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar58);
              local_150 = (Item *)CONCAT44(local_150._4_4_,fVar40);
              local_138 = (Vector2 *)CONCAT44(local_138._4_4_,local_138._0_4_ - fVar50);
              local_148 = (Item *)CONCAT44(local_148._4_4_,fVar52);
              local_120 = (Color *)CONCAT44(local_120._4_4_,fVar55);
              local_118 = (Item *)CONCAT44(local_118._4_4_,fVar57);
              _err_print_error("merge","./core/math/rect2.h",0xa8,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
              lVar18 = *(long *)((Item *)param_1 + 0x40);
              auVar53 = ZEXT416((uint)local_160._0_4_);
              fVar50 = *(float *)local_100;
              fVar44 = *(float *)(local_100 + 4);
              auVar43 = ZEXT416((uint)local_158._0_4_);
              fVar55 = local_120._0_4_;
              fVar40 = local_150._0_4_;
              fVar45 = local_138._0_4_;
              fVar52 = local_148._0_4_;
              fVar57 = local_118._0_4_;
            }
            fVar57 = auVar43._0_4_ + fVar57;
            if (fVar40 <= auVar43._0_4_) {
              auVar43._4_12_ = auVar43._4_12_;
              auVar43._0_4_ = fVar40;
            }
            fVar52 = auVar53._0_4_ + fVar52;
            if (fVar45 <= auVar53._0_4_) {
              auVar53._4_12_ = auVar53._4_12_;
              auVar53._0_4_ = fVar45;
            }
            if (fVar57 <= fVar40 + fVar55) {
              fVar57 = fVar40 + fVar55;
            }
            if (fVar52 <= local_168._0_4_ + fVar45) {
              fVar52 = local_168._0_4_ + fVar45;
            }
            fVar40 = *(float *)(lVar18 + 0x10);
            fVar55 = (fVar52 - auVar53._0_4_) + fVar40 + fVar40;
            fVar52 = fVar40 + fVar40 + (fVar57 - auVar43._0_4_);
            local_160 = (Item *)CONCAT44(local_160._4_4_,(auVar43._0_4_ - fVar40) + fVar44);
            local_138 = (Vector2 *)CONCAT44(local_138._4_4_,(auVar53._0_4_ - fVar40) + fVar50);
          }
          else {
            puVar4 = *(undefined8 **)((Item *)param_1 + 0x110);
            if (puVar4 != (undefined8 *)0x0) {
              if (((puVar4[1] != 0) || (*(int *)(puVar4 + 2) != 0)) ||
                 ((*(byte *)((long)puVar4 + 0x44) & 0x40) == 0)) goto LAB_00115e36;
              local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar59);
              local_148 = (Item *)CONCAT44(local_148._4_4_,fVar58);
              local_120 = (Color *)CONCAT44(local_120._4_4_,fVar52);
              local_118 = (Item *)CONCAT44(local_118._4_4_,fVar57);
              (**(code **)*puVar4)(puVar4);
              Memory::free_static(puVar4,false);
              *(undefined8 *)((Item *)param_1 + 0x110) = 0;
              fVar52 = local_120._0_4_;
              fVar57 = local_118._0_4_;
              fVar58 = local_148._0_4_;
              fVar59 = local_138._0_4_;
            }
            local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar59);
            local_148 = (Item *)CONCAT44(local_148._4_4_,fVar58);
            local_120 = (Color *)CONCAT44(local_120._4_4_,fVar52);
            local_118 = (Item *)CONCAT44(local_118._4_4_,fVar57);
            if (*(long *)((Item *)param_1 + 0x128) == 0) {
              CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                        ((CowData<RendererCanvasRender::Item::CommandBlock> *)
                         ((Item *)param_1 + 0x128));
            }
            else {
              uVar38 = *(uint *)(*(long *)((Item *)param_1 + 0x128) + -8);
              uVar8 = *(int *)((Item *)param_1 + 0x130) + 1U;
              if (uVar38 < *(int *)((Item *)param_1 + 0x130) + 1U) {
                uVar8 = uVar38;
              }
              CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                        ((CowData<RendererCanvasRender::Item::CommandBlock> *)
                         ((Item *)param_1 + 0x128));
              puVar19 = *(undefined4 **)((Item *)param_1 + 0x128);
              puVar25 = puVar19 + (ulong)uVar8 * 4;
              if (uVar8 != 0) {
                do {
                  *puVar19 = 0;
                  puVar19 = puVar19 + 4;
                } while (puVar19 != puVar25);
              }
            }
            ((Item *)param_1)[0x38] = (Item)((byte)((Item *)param_1)[0x38] & 0xfe);
            *(undefined1 (*) [16])((Item *)param_1 + 0x110) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])((Item *)param_1 + 200) = (undefined1  [16])0x0;
            ((Item *)param_1)[0x55] = (Item)0x1;
            *(undefined4 *)((Item *)param_1 + 0x130) = 0;
            ((Item *)param_1)[0xe9] = (Item)0x0;
            fVar52 = local_118._0_4_;
            fVar55 = local_120._0_4_;
            if ((((local_138._0_4_ == 0.0) && (local_148._0_4_ == 0.0)) && (local_120._0_4_ == 0.0))
               && (local_118._0_4_ == 0.0)) {
              fVar52 = _LC6;
              fVar55 = _LC6;
            }
            fVar57 = *(float *)(*(long *)((Item *)param_1 + 0x40) + 8);
            local_118 = (Item *)CONCAT44(local_118._4_4_,local_138._0_4_ - fVar57);
            local_120 = (Color *)CONCAT44(local_120._4_4_,local_148._0_4_ - fVar57);
            local_148 = (Item *)CONCAT44(local_148._4_4_,fVar55 + fVar57 + fVar57);
            local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar52 + fVar57 + fVar57);
            pCVar20 = RendererCanvasRender::Item::
                      alloc_command<RendererCanvasRender::Item::CommandRect>((Item *)param_1);
            *(undefined2 *)(pCVar20 + 0x44) = 0x40;
            Transform2D::affine_inverse();
            fVar50 = local_138._0_4_ * uStack_50._4_4_;
            fVar52 = local_138._0_4_ * (float)uStack_50;
            fVar40 = local_118._0_4_ * local_58._4_4_ + uStack_50._4_4_ * local_120._0_4_ +
                     local_48._4_4_;
            fVar45 = local_118._0_4_ * (float)local_58 + (float)uStack_50 * local_120._0_4_ +
                     (float)local_48;
            fVar55 = (float)local_58 * local_148._0_4_ + fVar45;
            fVar57 = local_58._4_4_ * local_148._0_4_ + fVar40;
            fVar44 = fVar55;
            if (fVar55 <= fVar45 + 0.0) {
              fVar44 = fVar45 + 0.0;
            }
            fVar47 = fVar55;
            if (fVar45 <= fVar55) {
              fVar47 = fVar45;
            }
            fVar58 = fVar57;
            if (fVar40 <= fVar57) {
              fVar58 = fVar40;
            }
            fVar44 = fVar44 - fVar47;
            fVar59 = fVar57;
            if (fVar57 <= fVar40 + 0.0) {
              fVar59 = fVar40 + 0.0;
            }
            fVar59 = fVar59 - fVar58;
            if ((fVar44 < 0.0) || (fVar48 = fVar40 + fVar50, fVar46 = fVar45 + fVar52, fVar59 < 0.0)
               ) {
              local_180 = (Item *)CONCAT44(local_180._4_4_,fVar47);
              local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar45 + fVar52);
              local_170 = (Item *)CONCAT44(local_170._4_4_,fVar40 + fVar50);
              local_168 = (Color *)CONCAT44(local_168._4_4_,fVar55);
              local_160 = (Item *)CONCAT44(local_160._4_4_,fVar57);
              local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar52);
              local_150 = (Item *)CONCAT44(local_150._4_4_,fVar50);
              local_18c = fVar44;
              local_188 = fVar59;
              local_184 = fVar58;
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
              fVar47 = local_180._0_4_;
              fVar59 = local_188;
              fVar44 = local_18c;
              fVar48 = local_170._0_4_;
              fVar52 = local_158._0_4_;
              fVar55 = local_168._0_4_;
              fVar57 = local_160._0_4_;
              fVar50 = local_150._0_4_;
              fVar46 = local_178._0_4_;
              fVar58 = local_184;
            }
            fVar40 = fVar46;
            if (fVar47 <= fVar46) {
              fVar40 = fVar47;
            }
            if (fVar46 <= fVar44 + fVar47) {
              fVar46 = fVar44 + fVar47;
            }
            fVar44 = fVar48;
            if (fVar48 <= fVar59 + fVar58) {
              fVar44 = fVar59 + fVar58;
            }
            if (fVar58 <= fVar48) {
              fVar48 = fVar58;
            }
            fVar46 = fVar46 - fVar40;
            fVar44 = fVar44 - fVar48;
            if ((fVar46 < 0.0) || (fVar45 = fVar52 + fVar55, fVar47 = fVar50 + fVar57, fVar44 < 0.0)
               ) {
              local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar46);
              local_170 = (Item *)CONCAT44(local_170._4_4_,fVar44);
              local_168 = (Color *)CONCAT44(local_168._4_4_,fVar48);
              local_160 = (Item *)CONCAT44(local_160._4_4_,fVar40);
              local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar52 + fVar55);
              local_150 = (Item *)CONCAT44(local_150._4_4_,fVar50 + fVar57);
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
              fVar44 = local_170._0_4_;
              fVar48 = local_168._0_4_;
              fVar45 = local_158._0_4_;
              fVar40 = local_160._0_4_;
              fVar47 = local_150._0_4_;
              fVar46 = local_178._0_4_;
            }
            fVar52 = fVar45;
            if (fVar40 <= fVar45) {
              fVar52 = fVar40;
            }
            fVar55 = fVar47;
            if (fVar48 <= fVar47) {
              fVar55 = fVar48;
            }
            if (fVar45 <= fVar46 + fVar40) {
              fVar45 = fVar46 + fVar40;
            }
            if (fVar47 <= fVar44 + fVar48) {
              fVar47 = fVar44 + fVar48;
            }
            fVar57 = *(float *)(*(long *)((Item *)param_1 + 0x40) + 0x10);
            *(ulong *)(pCVar20 + 0x14) = CONCAT44(fVar55,fVar52);
            *(ulong *)(pCVar20 + 0x1c) = CONCAT44(fVar47 - fVar55,fVar45 - fVar52);
            fVar52 = _LC6;
            *(float *)(pCVar20 + 0x24) = _LC6;
            *(float *)(pCVar20 + 0x28) = fVar52;
            *(float *)(pCVar20 + 0x2c) = fVar52;
            *(float *)(pCVar20 + 0x30) = fVar52;
            fVar55 = local_148._0_4_ + fVar57 + fVar57;
            fVar52 = fVar57 + fVar57 + local_138._0_4_;
            local_138 = (Vector2 *)
                        CONCAT44(local_138._4_4_,(local_118._0_4_ - fVar57) + *(float *)local_100);
            local_160 = (Item *)CONCAT44(local_160._4_4_,
                                         (local_120._0_4_ - fVar57) + *(float *)(local_100 + 4));
          }
          *(Item **)(pIVar27 + 0xd8) = param_1;
        }
        goto LAB_0011435e;
      }
      if (pfVar2 != (float *)0x0) {
        local_158 = (Transform2D *)((ulong)local_158._1_7_ << 8);
        pIVar27 = (Item *)0x0;
LAB_001141a2:
        fVar55 = pfVar2[3] * (float)uStack_70;
        fVar44 = pfVar2[3] * uStack_70._4_4_;
        fVar40 = (float)uStack_70 * pfVar2[1] + *pfVar2 * (float)local_78 + (float)local_68;
        fVar45 = local_78._4_4_ * *pfVar2 + uStack_70._4_4_ * pfVar2[1] + local_68._4_4_;
        fVar57 = pfVar2[2] * (float)local_78 + fVar40;
        fVar50 = local_78._4_4_ * pfVar2[2] + fVar45;
        fVar52 = fVar57;
        if (fVar57 <= fVar40 + 0.0) {
          fVar52 = fVar40 + 0.0;
        }
        fVar47 = fVar57;
        if (fVar40 <= fVar57) {
          fVar47 = fVar40;
        }
        fVar58 = fVar50;
        if (fVar45 <= fVar50) {
          fVar58 = fVar45;
        }
        fVar52 = fVar52 - fVar47;
        fVar59 = fVar50;
        if (fVar50 <= fVar45 + 0.0) {
          fVar59 = fVar45 + 0.0;
        }
        fVar59 = fVar59 - fVar58;
        if ((fVar52 < 0.0) ||
           (fVar48 = fVar45 + fVar44, fVar46 = fVar40 + fVar55, fVar54 = fStack_ac,
           fVar51 = local_b0, fVar59 < 0.0)) {
          local_190 = local_b0;
          local_180 = (Item *)CONCAT44(local_180._4_4_,fVar47);
          local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar40 + fVar55);
          local_170 = (Item *)CONCAT44(local_170._4_4_,fVar45 + fVar44);
          local_168 = (Color *)CONCAT44(local_168._4_4_,fVar57);
          local_150 = (Item *)CONCAT44(local_150._4_4_,fVar50);
          local_148 = (Item *)CONCAT44(local_148._4_4_,fVar55);
          local_120 = (Color *)CONCAT44(local_120._4_4_,fVar44);
          local_118 = (Item *)CONCAT44(local_118._4_4_,fStack_ac);
          local_18c = fVar52;
          local_188 = fVar59;
          local_184 = fVar58;
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
          fVar59 = local_188;
          fVar47 = local_180._0_4_;
          fVar52 = local_18c;
          fVar48 = local_170._0_4_;
          fVar55 = local_148._0_4_;
          fVar57 = local_168._0_4_;
          fVar50 = local_150._0_4_;
          fVar46 = local_178._0_4_;
          fVar44 = local_120._0_4_;
          fVar58 = local_184;
          fVar54 = local_118._0_4_;
          fVar51 = local_190;
        }
        fVar40 = fVar46;
        if (fVar47 <= fVar46) {
          fVar40 = fVar47;
        }
        fVar45 = fVar48;
        if (fVar58 <= fVar48) {
          fVar45 = fVar58;
        }
        if (fVar46 <= fVar52 + fVar47) {
          fVar46 = fVar52 + fVar47;
        }
        if (fVar48 <= fVar59 + fVar58) {
          fVar48 = fVar59 + fVar58;
        }
        fVar46 = fVar46 - fVar40;
        fVar48 = fVar48 - fVar45;
        if ((fVar46 < 0.0) || (fVar52 = fVar55 + fVar57, fVar47 = fVar44 + fVar50, fVar48 < 0.0)) {
          local_180 = (Item *)CONCAT44(local_180._4_4_,fVar51);
          local_178 = (Transform2D *)CONCAT44(local_178._4_4_,fVar46);
          local_170 = (Item *)CONCAT44(local_170._4_4_,fVar48);
          local_168 = (Color *)CONCAT44(local_168._4_4_,fVar45);
          local_150 = (Item *)CONCAT44(local_150._4_4_,fVar40);
          local_148 = (Item *)CONCAT44(local_148._4_4_,fVar55 + fVar57);
          local_120 = (Color *)CONCAT44(local_120._4_4_,fVar44 + fVar50);
          local_118 = (Item *)CONCAT44(local_118._4_4_,fVar54);
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
          fVar48 = local_170._0_4_;
          fVar45 = local_168._0_4_;
          fVar40 = local_150._0_4_;
          fVar46 = local_178._0_4_;
          fVar52 = local_148._0_4_;
          fVar47 = local_120._0_4_;
          fVar54 = local_118._0_4_;
          fVar51 = local_180._0_4_;
        }
        local_120 = (Color *)CONCAT44(local_120._4_4_,fVar51);
        local_118 = (Item *)CONCAT44(local_118._4_4_,fVar54);
        fVar55 = fVar52;
        if (fVar40 <= fVar52) {
          fVar55 = fVar40;
        }
        fVar57 = fVar47;
        if (fVar45 <= fVar47) {
          fVar57 = fVar45;
        }
        lVar18 = *(long *)((Item *)param_1 + 0x88);
        if (fVar52 <= fVar46 + fVar40) {
          fVar52 = fVar46 + fVar40;
        }
        if (fVar47 <= fVar48 + fVar45) {
          fVar47 = fVar48 + fVar45;
        }
        local_58 = CONCAT44(fVar57,fVar55);
        uStack_50 = CONCAT44(fVar47 - fVar57,fVar52 - fVar55);
        auVar60 = Rect2::intersection((Rect2 *)&local_58,local_100);
        *(undefined1 (*) [16])(lVar18 + 0x10) = auVar60;
        fVar52 = local_118._0_4_;
        fVar55 = local_120._0_4_;
        if ((char)local_158 == '\0') goto LAB_0011435e;
        goto LAB_00115a27;
      }
LAB_0011599e:
      if (*(long *)((Item *)param_1 + 0x1e0) != 0) goto LAB_0011436c;
LAB_001159b0:
      auVar11._8_8_ = local_a8._8_8_;
      auVar11._0_8_ = local_a8._0_8_;
      if ((*(long *)((Item *)param_1 + 0xe0) == 0) && (*(long *)((Item *)param_1 + 0x88) == 0)) {
        puVar28 = auStack_1a8;
        if (((Item *)param_1)[0xea] != (Item)0x0) {
          *(undefined8 *)((Item *)param_1 + 0xa0) = local_78;
          *(undefined8 *)((Item *)param_1 + 0xa8) = uStack_70;
          *(undefined8 *)((Item *)param_1 + 0xb0) = local_68;
          puVar28 = auStack_1a8;
          local_a8 = auVar11;
        }
        goto LAB_00113a30;
      }
    }
    if (((byte)((Item *)param_1)[0x38] & 8) != 0) {
      RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
    }
    if ((*(long *)((Item *)param_1 + 0x110) != 0) || (*(long *)((Item *)param_1 + 0x88) != 0)) {
      pRVar17 = (RendererCanvasCull *)&local_78;
      if (((byte)((Item *)param_1)[0x38] & 0x40) != 0) {
        pRVar17 = local_108 + 0x270;
      }
      uVar41 = *(undefined8 *)(pRVar17 + 8);
      *(undefined8 *)((Item *)param_1 + 0xa0) = *(undefined8 *)pRVar17;
      *(undefined8 *)((Item *)param_1 + 0xa8) = uVar41;
      *(undefined8 *)((Item *)param_1 + 0xb0) = *(undefined8 *)(pRVar17 + 0x10);
      local_118 = (Item *)CONCAT44(local_160._0_4_,local_138._0_4_);
      uStack_110 = CONCAT44(fVar52,fVar55);
      auVar60 = Color::operator*((Color *)local_c8,(Color *)((Item *)param_1 + 0x178));
      *(long *)((Item *)param_1 + 0x90) = auVar60._0_8_;
      *(Item **)((Item *)param_1 + 0x100) = local_118;
      *(undefined8 *)((Item *)param_1 + 0x108) = uStack_110;
      fVar52 = *(float *)local_100;
      *(long *)((Item *)param_1 + 0x98) = auVar60._8_8_;
      *(float *)((Item *)param_1 + 0x100) = local_138._0_4_ - fVar52;
      fVar52 = *(float *)(local_100 + 4);
      ((Item *)param_1)[0xe9] = (Item)0x0;
      pIVar27 = local_128[iVar14 + 0x1000];
      *(float *)((Item *)param_1 + 0x104) = local_160._0_4_ - fVar52;
      if (pIVar27 == (Item *)0x0) {
        local_130[iVar14 + 0x1000] = (Item *)param_1;
      }
      else {
        *(Item **)(pIVar27 + 0x80) = param_1;
      }
      local_128[iVar14 + 0x1000] = (Item *)param_1;
      *(int *)((Item *)param_1 + 0x50) = iVar14;
      *(undefined8 *)((Item *)param_1 + 0x80) = 0;
    }
    lVar18 = *(long *)((Item *)param_1 + 0x1e0);
    puVar28 = auStack_1a8;
    if (lVar18 != 0) {
      if (*(long *)(lVar18 + 0x40) == 0) {
        lVar24 = lVar18 + 0x40;
        *(RendererCanvasCull **)(lVar18 + 0x40) = local_108 + 0x250;
        lVar6 = *(long *)(local_108 + 0x250);
        *(undefined8 *)(lVar18 + 0x58) = 0;
        *(long *)(lVar18 + 0x50) = lVar6;
        if (lVar6 == 0) {
          *(long *)(local_108 + 600) = lVar24;
        }
        else {
          *(long *)(lVar6 + 0x18) = lVar24;
        }
        *(long *)(local_108 + 0x250) = lVar24;
        *(undefined1 *)(lVar18 + 0x30) = 1;
      }
      uVar41 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
      *(undefined8 *)(lVar18 + 0x38) = uVar41;
      puVar28 = auStack_1a8;
    }
    goto LAB_00113a30;
  }
  pIVar27 = *(Item **)((Item *)param_1 + 0x40);
  bVar35 = 0;
  if (pIVar27 != (Item *)0x0) {
    if (pIVar27[4] == (Item)0x0) {
      pIVar27 = *(Item **)((Item *)param_1 + 0x110);
      bVar35 = 0;
      if (pIVar27 == (Item *)0x0) goto LAB_001146a6;
    }
    pIVar27 = local_128[iVar14 + 0x1000];
    bVar35 = bVar36;
  }
LAB_001146a6:
  if (0 < (int)local_170._0_4_) {
    local_148 = (Item *)local_c8;
    pTVar1 = local_178 + (long)(int)local_170._0_4_ * 8;
    pTVar37 = local_178;
    local_150 = pIVar27;
    do {
      if ((((byte)(*(Item **)pTVar37)[0x38] & 4) != 0) || (bVar35 != 0)) {
        _cull_canvas_item(local_108,*(Item **)pTVar37,(Transform2D *)&local_78,local_100,
                          (Color *)local_148,iVar14,local_130,local_128,
                          *(Item **)((Item *)param_1 + 200),(Item *)local_118,false,param_11,
                          (Vector2 *)&local_d0,param_13,(Item *)local_120);
      }
      pTVar37 = pTVar37 + 8;
      pIVar27 = local_150;
    } while (pTVar1 != pTVar37);
  }
  pfVar2 = *(float **)((Item *)param_1 + 0x88);
  fVar52 = local_b0;
  fVar55 = fStack_ac;
  if (pfVar2 != (float *)0x0) {
    fVar55 = pfVar2[3] * (float)uStack_70;
    fVar50 = pfVar2[3] * uStack_70._4_4_;
    fVar44 = *pfVar2 * (float)local_78 + (float)uStack_70 * pfVar2[1] + (float)local_68;
    fVar57 = pfVar2[2] * (float)local_78 + fVar44;
    fVar40 = local_78._4_4_ * *pfVar2 + uStack_70._4_4_ * pfVar2[1] + local_68._4_4_;
    fVar52 = fVar57;
    if (fVar57 <= fVar44 + 0.0) {
      fVar52 = fVar44 + 0.0;
    }
    fVar45 = fVar57;
    if (fVar44 <= fVar57) {
      fVar45 = fVar44;
    }
    fVar47 = local_78._4_4_ * pfVar2[2] + fVar40;
    fVar52 = fVar52 - fVar45;
    fVar58 = fVar47;
    if (fVar47 <= fVar40 + 0.0) {
      fVar58 = fVar40 + 0.0;
    }
    fVar59 = fVar47;
    if (fVar40 <= fVar47) {
      fVar59 = fVar40;
    }
    fVar58 = fVar58 - fVar59;
    if ((fVar52 < 0.0) ||
       (fVar48 = fVar40 + fVar50, fVar46 = fVar44 + fVar55, fVar54 = local_b0, fVar51 = fStack_ac,
       fVar58 < 0.0)) {
      local_18c = fStack_ac;
      local_188 = local_b0;
      local_180 = (Item *)CONCAT44(local_180._4_4_,fVar40 + fVar50);
      local_168 = (Color *)CONCAT44(local_168._4_4_,fVar57);
      local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar47);
      local_150 = (Item *)CONCAT44(local_150._4_4_,fVar55);
      local_148 = (Item *)CONCAT44(local_148._4_4_,fVar50);
      local_19c = fVar52;
      local_198 = fVar58;
      local_194 = fVar59;
      local_190 = fVar45;
      local_184 = fVar44 + fVar55;
      _err_print_error("expand_to","./core/math/rect2.h",0x100,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
      fVar58 = local_198;
      fVar45 = local_190;
      fVar52 = local_19c;
      fVar48 = local_180._0_4_;
      fVar55 = local_150._0_4_;
      fVar57 = local_168._0_4_;
      fVar47 = local_158._0_4_;
      fVar46 = local_184;
      fVar50 = local_148._0_4_;
      fVar59 = local_194;
      fVar54 = local_188;
      fVar51 = local_18c;
    }
    fVar44 = fVar46;
    if (fVar45 <= fVar46) {
      fVar44 = fVar45;
    }
    fVar40 = fVar48;
    if (fVar59 <= fVar48) {
      fVar40 = fVar59;
    }
    if (fVar46 <= fVar52 + fVar45) {
      fVar46 = fVar52 + fVar45;
    }
    if (fVar48 <= fVar58 + fVar59) {
      fVar48 = fVar58 + fVar59;
    }
    fVar46 = fVar46 - fVar44;
    fVar48 = fVar48 - fVar40;
    if ((fVar46 < 0.0) || (fVar52 = fVar55 + fVar57, fVar45 = fVar50 + fVar47, fVar48 < 0.0)) {
      local_180 = (Item *)CONCAT44(local_180._4_4_,fVar44);
      local_168 = (Color *)CONCAT44(local_168._4_4_,fVar51);
      local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar54);
      local_150 = (Item *)CONCAT44(local_150._4_4_,fVar55 + fVar57);
      local_148 = (Item *)CONCAT44(local_148._4_4_,fVar50 + fVar47);
      local_18c = fVar46;
      local_188 = fVar48;
      local_184 = fVar40;
      _err_print_error("expand_to","./core/math/rect2.h",0x100,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
      fVar48 = local_188;
      fVar44 = local_180._0_4_;
      fVar40 = local_184;
      fVar46 = local_18c;
      fVar52 = local_150._0_4_;
      fVar45 = local_148._0_4_;
      fVar54 = local_158._0_4_;
      fVar51 = local_168._0_4_;
    }
    local_150 = (Item *)CONCAT44(local_150._4_4_,fVar51);
    local_148 = (Item *)CONCAT44(local_148._4_4_,fVar54);
    fVar55 = fVar45;
    if (fVar40 <= fVar45) {
      fVar55 = fVar40;
    }
    fVar57 = fVar52;
    if (fVar44 <= fVar52) {
      fVar57 = fVar44;
    }
    lVar18 = *(long *)((Item *)param_1 + 0x88);
    if (fVar52 <= fVar46 + fVar44) {
      fVar52 = fVar46 + fVar44;
    }
    if (fVar45 <= fVar48 + fVar40) {
      fVar45 = fVar48 + fVar40;
    }
    local_58 = CONCAT44(fVar55,fVar57);
    uStack_50 = CONCAT44(fVar45 - fVar55,fVar52 - fVar57);
    auVar60 = Rect2::intersection((Rect2 *)&local_58,local_100);
    *(undefined1 (*) [16])(lVar18 + 0x10) = auVar60;
    fVar52 = local_148._0_4_;
    fVar55 = local_150._0_4_;
  }
  if (bVar35 != 0) {
    if (pIVar27 == (Item *)0x0) {
      pIVar27 = local_130[iVar14 + 0x1000];
    }
    else {
      pIVar27 = *(Item **)(pIVar27 + 0x80);
    }
    if (pIVar27 != (Item *)0x0) {
      fVar57 = 0.0;
      local_180 = (Item *)CONCAT44(local_180._4_4_,fVar52);
      fVar52 = 0.0;
      auVar42._0_12_ = ZEXT812(0);
      auVar42._12_4_ = 0;
      auVar49 = ZEXT816(0);
      pIVar32 = pIVar27;
      local_184 = fVar55;
      do {
        if (pIVar27 == pIVar32) {
          fVar59 = *(float *)(pIVar27 + 0x100);
          fVar58 = *(float *)(pIVar27 + 0x104);
          fVar52 = *(float *)(pIVar27 + 0x108);
          fVar57 = *(float *)(pIVar27 + 0x10c);
        }
        else {
          if ((((fVar52 < 0.0) || (fVar57 < 0.0)) ||
              (fVar55 = *(float *)(pIVar32 + 0x108), fVar55 < 0.0)) ||
             (fVar50 = *(float *)(pIVar32 + 0x10c), fVar44 = auVar42._0_4_, fVar40 = auVar49._0_4_,
             fVar50 < 0.0)) {
            local_168 = (Color *)CONCAT44(local_168._4_4_,auVar49._0_4_);
            local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar52);
            local_150 = (Item *)CONCAT44(local_150._4_4_,fVar57);
            local_148 = (Item *)CONCAT44(local_148._4_4_,auVar42._0_4_);
            _err_print_error("merge","./core/math/rect2.h",0xa8,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
            fVar50 = *(float *)(pIVar32 + 0x10c);
            fVar55 = *(float *)(pIVar32 + 0x108);
            fVar57 = local_150._0_4_;
            fVar52 = local_158._0_4_;
            fVar44 = local_148._0_4_;
            fVar40 = local_168._0_4_;
          }
          fVar45 = *(float *)(pIVar32 + 0x104);
          fVar47 = *(float *)(pIVar32 + 0x100);
          fVar58 = fVar45;
          if (fVar44 <= fVar45) {
            fVar58 = fVar44;
          }
          fVar59 = fVar47;
          if (fVar40 <= fVar47) {
            fVar59 = fVar40;
          }
          fVar48 = fVar50 + fVar45;
          if (fVar50 + fVar45 <= fVar57 + fVar44) {
            fVar48 = fVar57 + fVar44;
          }
          fVar50 = fVar55 + fVar47;
          if (fVar55 + fVar47 <= fVar52 + fVar40) {
            fVar50 = fVar52 + fVar40;
          }
          fVar57 = fVar48 - fVar58;
          fVar52 = fVar50 - fVar59;
        }
        auVar49 = ZEXT416((uint)fVar59);
        auVar42 = ZEXT416((uint)fVar58);
        pIVar32 = *(Item **)(pIVar32 + 0x80);
      } while (pIVar32 != (Item *)0x0);
      lVar18 = *(long *)((Item *)param_1 + 0x40);
      if (*(char *)(lVar18 + 4) == '\0') {
LAB_00114a72:
        fVar50 = *(float *)local_100;
        fVar44 = *(float *)(local_100 + 4);
        local_148._0_4_ = local_138._0_4_ - fVar50;
        fVar55 = local_160._0_4_ - fVar44;
        if (((local_180._0_4_ < 0.0) || (local_184 < 0.0)) || ((fVar52 < 0.0 || (fVar57 < 0.0)))) {
          local_168 = (Color *)CONCAT44(local_168._4_4_,fVar59);
          local_160 = (Item *)CONCAT44(local_160._4_4_,fVar52);
          local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar57);
          local_150 = (Item *)CONCAT44(local_150._4_4_,fVar58);
          local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar55);
          _err_print_error("merge","./core/math/rect2.h",0xa8,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
          lVar18 = *(long *)((Item *)param_1 + 0x40);
          fVar50 = *(float *)local_100;
          fVar44 = *(float *)(local_100 + 4);
          auVar49 = ZEXT416((uint)local_168._0_4_);
          auVar42 = ZEXT416((uint)local_150._0_4_);
          fVar57 = local_158._0_4_;
          fVar55 = local_138._0_4_;
          fVar52 = local_160._0_4_;
        }
        fVar40 = auVar42._0_4_;
        fVar52 = fVar52 + auVar49._0_4_;
        if (fVar55 <= fVar40) {
          auVar42._4_12_ = auVar42._4_12_;
          auVar42._0_4_ = fVar55;
        }
        fVar40 = fVar40 + fVar57;
        if (local_148._0_4_ <= auVar49._0_4_) {
          auVar49._4_12_ = auVar49._4_12_;
          auVar49._0_4_ = local_148._0_4_;
        }
        if (fVar40 <= fVar55 + local_184) {
          fVar40 = fVar55 + local_184;
        }
        if (fVar52 <= local_148._0_4_ + local_180._0_4_) {
          fVar52 = local_148._0_4_ + local_180._0_4_;
        }
        fVar57 = *(float *)(lVar18 + 0x10);
        fVar52 = (fVar52 - auVar49._0_4_) + fVar57 + fVar57;
        fVar55 = fVar57 + fVar57 + (fVar40 - auVar42._0_4_);
        local_138 = (Vector2 *)CONCAT44(local_138._4_4_,(auVar49._0_4_ - fVar57) + fVar50);
        local_160 = (Item *)CONCAT44(local_160._4_4_,(auVar42._0_4_ - fVar57) + fVar44);
      }
      else {
        puVar4 = *(undefined8 **)((Item *)param_1 + 0x110);
        if (puVar4 != (undefined8 *)0x0) {
          if (((puVar4[1] != 0) || (*(int *)(puVar4 + 2) != 0)) ||
             ((*(byte *)((long)puVar4 + 0x44) & 0x40) == 0)) goto LAB_00114a72;
          local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar59);
          local_150 = (Item *)CONCAT44(local_150._4_4_,fVar52);
          local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar57);
          local_148 = (Item *)CONCAT44(local_148._4_4_,fVar58);
          (**(code **)*puVar4)(puVar4);
          Memory::free_static(puVar4,false);
          *(undefined8 *)((Item *)param_1 + 0x110) = 0;
          fVar57 = local_138._0_4_;
          fVar52 = local_150._0_4_;
          fVar59 = local_158._0_4_;
          fVar58 = local_148._0_4_;
        }
        local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar59);
        local_150 = (Item *)CONCAT44(local_150._4_4_,fVar52);
        local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar57);
        local_148 = (Item *)CONCAT44(local_148._4_4_,fVar58);
        if (*(long *)((Item *)param_1 + 0x128) == 0) {
          CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                    ((CowData<RendererCanvasRender::Item::CommandBlock> *)((Item *)param_1 + 0x128))
          ;
        }
        else {
          uVar38 = *(uint *)(*(long *)((Item *)param_1 + 0x128) + -8);
          uVar8 = *(int *)((Item *)param_1 + 0x130) + 1U;
          if (uVar38 < *(int *)((Item *)param_1 + 0x130) + 1U) {
            uVar8 = uVar38;
          }
          CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
                    ((CowData<RendererCanvasRender::Item::CommandBlock> *)((Item *)param_1 + 0x128))
          ;
          puVar19 = *(undefined4 **)((Item *)param_1 + 0x128);
          puVar25 = puVar19 + (ulong)uVar8 * 4;
          if (uVar8 != 0) {
            do {
              *puVar19 = 0;
              puVar19 = puVar19 + 4;
            } while (puVar19 != puVar25);
          }
        }
        ((Item *)param_1)[0x38] = (Item)((byte)((Item *)param_1)[0x38] & 0xfe);
        *(undefined1 (*) [16])((Item *)param_1 + 0x110) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((Item *)param_1 + 200) = (undefined1  [16])0x0;
        ((Item *)param_1)[0x55] = (Item)0x1;
        *(undefined4 *)((Item *)param_1 + 0x130) = 0;
        ((Item *)param_1)[0xe9] = (Item)0x0;
        fVar52 = local_138._0_4_;
        fVar55 = local_150._0_4_;
        if ((((local_158._0_4_ == 0.0) && (local_148._0_4_ == 0.0)) && (local_150._0_4_ == 0.0)) &&
           (local_138._0_4_ == 0.0)) {
          fVar52 = _LC6;
          fVar55 = _LC6;
        }
        fVar57 = *(float *)(*(long *)((Item *)param_1 + 0x40) + 8);
        fVar50 = local_148._0_4_ - fVar57;
        local_148 = (Item *)CONCAT44(local_148._4_4_,local_158._0_4_ - fVar57);
        local_150 = (Item *)CONCAT44(local_150._4_4_,fVar50);
        local_138 = (Vector2 *)CONCAT44(local_138._4_4_,fVar55 + fVar57 + fVar57);
        local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar52 + fVar57 + fVar57);
        pCVar20 = RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandRect>
                            ((Item *)param_1);
        *(undefined2 *)(pCVar20 + 0x44) = 0x40;
        Transform2D::affine_inverse();
        fVar50 = local_158._0_4_ * uStack_50._4_4_;
        fVar52 = local_158._0_4_ * (float)uStack_50;
        fVar40 = local_148._0_4_ * local_58._4_4_ + uStack_50._4_4_ * local_150._0_4_ +
                 local_48._4_4_;
        fVar45 = local_148._0_4_ * (float)local_58 + (float)uStack_50 * local_150._0_4_ +
                 (float)local_48;
        fVar55 = (float)local_58 * local_138._0_4_ + fVar45;
        fVar57 = local_58._4_4_ * local_138._0_4_ + fVar40;
        fVar44 = fVar55;
        if (fVar55 <= fVar45 + 0.0) {
          fVar44 = fVar45 + 0.0;
        }
        fVar47 = fVar55;
        if (fVar45 <= fVar55) {
          fVar47 = fVar45;
        }
        fVar58 = fVar57;
        if (fVar57 <= fVar40 + 0.0) {
          fVar58 = fVar40 + 0.0;
        }
        fVar59 = fVar57;
        if (fVar40 <= fVar57) {
          fVar59 = fVar40;
        }
        fVar44 = fVar44 - fVar47;
        fVar58 = fVar58 - fVar59;
        if ((fVar44 < 0.0) || (fVar48 = fVar40 + fVar50, fVar46 = fVar45 + fVar52, fVar58 < 0.0)) {
          local_180 = (Item *)CONCAT44(local_180._4_4_,fVar57);
          local_168 = (Color *)CONCAT44(local_168._4_4_,fVar52);
          local_160 = (Item *)CONCAT44(local_160._4_4_,fVar50);
          local_19c = fVar44;
          local_198 = fVar58;
          local_194 = fVar59;
          local_190 = fVar47;
          local_18c = fVar45 + fVar52;
          local_188 = fVar40 + fVar50;
          local_184 = fVar55;
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
          fVar47 = local_190;
          fVar59 = local_194;
          fVar58 = local_198;
          fVar44 = local_19c;
          fVar48 = local_188;
          fVar52 = local_168._0_4_;
          fVar55 = local_184;
          fVar57 = local_180._0_4_;
          fVar50 = local_160._0_4_;
          fVar46 = local_18c;
        }
        fVar40 = fVar46;
        if (fVar47 <= fVar46) {
          fVar40 = fVar47;
        }
        fVar45 = fVar48;
        if (fVar59 <= fVar48) {
          fVar45 = fVar59;
        }
        if (fVar46 <= fVar44 + fVar47) {
          fVar46 = fVar44 + fVar47;
        }
        if (fVar48 <= fVar58 + fVar59) {
          fVar48 = fVar58 + fVar59;
        }
        fVar46 = fVar46 - fVar40;
        fVar48 = fVar48 - fVar45;
        if ((fVar46 < 0.0) || (fVar44 = fVar52 + fVar55, fVar47 = fVar50 + fVar57, fVar48 < 0.0)) {
          local_180 = (Item *)CONCAT44(local_180._4_4_,fVar40);
          local_168 = (Color *)CONCAT44(local_168._4_4_,fVar52 + fVar55);
          local_160 = (Item *)CONCAT44(local_160._4_4_,fVar50 + fVar57);
          local_18c = fVar46;
          local_188 = fVar48;
          local_184 = fVar45;
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
          fVar48 = local_188;
          fVar45 = local_184;
          fVar44 = local_168._0_4_;
          fVar40 = local_180._0_4_;
          fVar47 = local_160._0_4_;
          fVar46 = local_18c;
        }
        fVar52 = fVar44;
        if (fVar40 <= fVar44) {
          fVar52 = fVar40;
        }
        fVar55 = fVar47;
        if (fVar45 <= fVar47) {
          fVar55 = fVar45;
        }
        if (fVar44 <= fVar46 + fVar40) {
          fVar44 = fVar46 + fVar40;
        }
        if (fVar47 <= fVar48 + fVar45) {
          fVar47 = fVar48 + fVar45;
        }
        fVar57 = *(float *)(*(long *)((Item *)param_1 + 0x40) + 0x10);
        *(ulong *)(pCVar20 + 0x14) = CONCAT44(fVar55,fVar52);
        *(ulong *)(pCVar20 + 0x1c) = CONCAT44(fVar47 - fVar55,fVar44 - fVar52);
        fVar52 = _LC6;
        *(float *)(pCVar20 + 0x24) = _LC6;
        *(float *)(pCVar20 + 0x28) = fVar52;
        *(float *)(pCVar20 + 0x2c) = fVar52;
        *(float *)(pCVar20 + 0x30) = fVar52;
        fVar52 = local_138._0_4_ + fVar57 + fVar57;
        fVar55 = fVar57 + fVar57 + local_158._0_4_;
        local_138 = (Vector2 *)
                    CONCAT44(local_138._4_4_,(local_148._0_4_ - fVar57) + *(float *)local_100);
        local_160 = (Item *)CONCAT44(local_160._4_4_,
                                     (local_150._0_4_ - fVar57) + *(float *)(local_100 + 4));
      }
      *(Item **)(pIVar27 + 0xd8) = param_1;
    }
  }
  uStack_140 = CONCAT44(fVar55,fVar52);
  local_148 = (Item *)CONCAT44(local_160._0_4_,local_138._0_4_);
  if ((*(long *)((Item *)param_1 + 0x110) == 0) && (*(long *)((Item *)param_1 + 0x1e0) == 0)) {
LAB_001150f0:
    if ((*(long *)((Item *)param_1 + 0xe0) != 0) || (*(long *)((Item *)param_1 + 0x88) != 0))
    goto LAB_00114c10;
    if (((Item *)param_1)[0xea] != (Item)0x0) {
      *(undefined8 *)((Item *)param_1 + 0xa0) = local_78;
      *(undefined8 *)((Item *)param_1 + 0xa8) = uStack_70;
      *(undefined8 *)((Item *)param_1 + 0xb0) = local_68;
    }
  }
  else {
    if ((*(float *)(local_100 + 8) <= 0.0 && *(float *)(local_100 + 8) != 0.0) ||
       (((*(float *)(local_100 + 0xc) <= 0.0 && *(float *)(local_100 + 0xc) != 0.0 || (fVar52 < 0.0)
         ) || (fVar55 < 0.0)))) {
      local_158 = (Transform2D *)CONCAT44(local_158._4_4_,fVar55);
      local_150 = (Item *)CONCAT44(local_150._4_4_,fVar52);
      _err_print_error("intersects","./core/math/rect2.h",0x39,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
      fVar52 = local_150._0_4_;
      fVar55 = local_158._0_4_;
    }
    if ((fVar52 + local_138._0_4_ < *(float *)local_100) ||
       (*(float *)local_100 + *(float *)(local_100 + 8) < local_138._0_4_)) goto LAB_001150f0;
    if ((fVar55 + local_160._0_4_ < *(float *)(local_100 + 4)) ||
       (*(float *)(local_100 + 4) + *(float *)(local_100 + 0xc) < local_160._0_4_))
    goto LAB_001150f0;
LAB_00114c10:
    if (((byte)((Item *)param_1)[0x38] & 8) != 0) {
      RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
    }
    if ((*(long *)((Item *)param_1 + 0x110) != 0) || (*(long *)((Item *)param_1 + 0x88) != 0)) {
      pRVar17 = (RendererCanvasCull *)&local_78;
      if (((byte)((Item *)param_1)[0x38] & 0x40) != 0) {
        pRVar17 = local_108 + 0x270;
      }
      uVar41 = *(undefined8 *)(pRVar17 + 8);
      *(undefined8 *)((Item *)param_1 + 0xa0) = *(undefined8 *)pRVar17;
      *(undefined8 *)((Item *)param_1 + 0xa8) = uVar41;
      *(undefined8 *)((Item *)param_1 + 0xb0) = *(undefined8 *)(pRVar17 + 0x10);
      auVar60 = Color::operator*((Color *)local_c8,(Color *)((Item *)param_1 + 0x178));
      *(long *)((Item *)param_1 + 0x90) = auVar60._0_8_;
      *(Item **)((Item *)param_1 + 0x100) = local_148;
      *(undefined8 *)((Item *)param_1 + 0x108) = uStack_140;
      fVar52 = *(float *)local_100;
      *(long *)((Item *)param_1 + 0x98) = auVar60._8_8_;
      *(float *)((Item *)param_1 + 0x100) = local_138._0_4_ - fVar52;
      fVar52 = *(float *)(local_100 + 4);
      ((Item *)param_1)[0xe9] = (Item)0x0;
      pIVar27 = local_128[iVar14 + 0x1000];
      *(float *)((Item *)param_1 + 0x104) = local_160._0_4_ - fVar52;
      if (pIVar27 == (Item *)0x0) {
        local_130[iVar14 + 0x1000] = (Item *)param_1;
      }
      else {
        *(Item **)(pIVar27 + 0x80) = param_1;
      }
      local_128[iVar14 + 0x1000] = (Item *)param_1;
      *(int *)((Item *)param_1 + 0x50) = iVar14;
      *(undefined8 *)((Item *)param_1 + 0x80) = 0;
    }
    lVar18 = *(long *)((Item *)param_1 + 0x1e0);
    if (lVar18 != 0) {
      if (*(long *)(lVar18 + 0x40) == 0) {
        lVar24 = lVar18 + 0x40;
        *(RendererCanvasCull **)(lVar18 + 0x40) = local_108 + 0x250;
        lVar6 = *(long *)(local_108 + 0x250);
        *(undefined8 *)(lVar18 + 0x58) = 0;
        *(long *)(lVar18 + 0x50) = lVar6;
        if (lVar6 == 0) {
          *(long *)(local_108 + 600) = lVar24;
        }
        else {
          *(long *)(lVar6 + 0x18) = lVar24;
        }
        *(long *)(local_108 + 0x250) = lVar24;
        *(undefined1 *)(lVar18 + 0x30) = 1;
      }
      uVar41 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
      *(undefined8 *)(lVar18 + 0x38) = uVar41;
    }
  }
  puVar28 = auStack_1a8;
  if (0 < (int)local_170._0_4_) {
    pTVar1 = local_178 + (long)(int)local_170._0_4_ * 8;
    local_148 = (Item *)local_c8;
    pTVar37 = local_178;
    do {
      if ((((byte)(*(Item **)pTVar37)[0x38] & 4) == 0) && (bVar35 == 0)) {
        _cull_canvas_item(local_108,*(Item **)pTVar37,(Transform2D *)&local_78,local_100,
                          (Color *)local_148,iVar14,local_130,local_128,
                          *(Item **)((Item *)param_1 + 200),(Item *)local_118,false,param_11,
                          (Vector2 *)&local_d0,param_13,(Item *)local_120);
      }
      pTVar37 = pTVar37 + 8;
      puVar28 = auStack_1a8;
    } while (pTVar37 != pTVar1);
  }
LAB_00113a30:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar28 + -8) = 0x117012;
    __stack_chk_fail();
  }
  return;
LAB_00115d9e:
  *(undefined8 *)(puVar29 + lVar18 + -8) = 0x115dca;
  local_148 = pIVar33;
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
  pIVar33 = local_148;
LAB_00115dd1:
  *(Item **)pIVar33 = pIVar3;
LAB_00115cd2:
  pIVar32 = pIVar32 + 1;
  __n = __n + 8;
  param_1 = (Item *)local_150;
  if (local_118 == pIVar32) goto LAB_00116068;
  goto LAB_00115ce7;
LAB_00115789:
  *(undefined8 *)(puVar29 + lVar18 + -8) = 0x1157b5;
  local_118 = pIVar33;
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
  pIVar33 = local_118;
LAB_001157bc:
  *(Item **)pIVar33 = pIVar3;
LAB_00115000:
  pIVar32 = pIVar32 + 1;
  __n = __n + 8;
  if (pIVar32 == (Item *)0x10) goto LAB_00115f6a;
  goto LAB_00115012;
LAB_00115f6a:
  local_118 = local_150;
  pIVar27 = (Item *)0x10;
  fVar52 = _LC8;
LAB_00115f90:
  pIVar3 = ppIVar34[(long)pIVar27];
  ppIVar31 = ppIVar34 + (long)pIVar27;
  fVar55 = *(float *)(pIVar3 + 0x1bc);
  pIVar32 = pIVar27;
  do {
    pIVar32 = pIVar32 + -1;
    pIVar21 = ppIVar31[-1];
    fVar57 = *(float *)(pIVar21 + 0x1bc);
    if (fVar55 == fVar57) {
LAB_0011600d:
      bVar7 = *(int *)(pIVar3 + 0x1c0) < *(int *)(pIVar21 + 0x1c0);
    }
    else {
      fVar50 = fVar52;
      if (fVar52 <= ABS(fVar55) * fVar52) {
        fVar50 = ABS(fVar55) * fVar52;
      }
      if (ABS(fVar55 - fVar57) < fVar50) goto LAB_0011600d;
      bVar7 = fVar55 < fVar57;
    }
    if (!bVar7) goto LAB_00116049;
    if (pIVar32 == (Item *)0x0) break;
    *ppIVar31 = pIVar21;
    ppIVar31 = ppIVar31 + -1;
  } while( true );
  *(undefined8 *)(puVar29 + lVar18 + -8) = 0x116041;
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
  fVar52 = _LC8;
LAB_00116049:
  *ppIVar31 = pIVar3;
  pIVar27 = pIVar27 + 1;
  param_1 = (Item *)local_148;
  if (local_118 == pIVar27) goto LAB_00116068;
  goto LAB_00115f90;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::_render_canvas_item_tree(RID, RendererCanvasCull::Canvas::ChildItem*, int,
   Transform2D const&, Rect2 const&, Color const&, RendererCanvasRender::Light*,
   RendererCanvasRender::Light*, RenderingServer::CanvasItemTextureFilter,
   RenderingServer::CanvasItemTextureRepeat, bool, unsigned int, RenderingMethod::RenderInfo*) */

void __thiscall
RendererCanvasCull::_render_canvas_item_tree
          (RendererCanvasCull *this,undefined8 param_2,undefined8 *param_3,int param_4,
          Transform2D *param_5,Rect2 *param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12,
          uint param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  Item *pIVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  plVar1 = RenderingServerGlobals::utilities;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar7 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_80 = 0;
    local_78 = "Cull CanvasItem Tree";
    local_70 = 0x14;
    String::parse_latin1((StrRange *)&local_80);
    (*pcVar7)(plVar1);
    lVar4 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  uVar8 = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(this + 0x270) = *(undefined8 *)param_5;
  *(undefined8 *)(this + 0x278) = uVar8;
  *(undefined8 *)(this + 0x280) = *(undefined8 *)(param_5 + 0x10);
  memset(*(void **)(this + 0x260),0,0x10008);
  memset(*(void **)(this + 0x268),0,0x10008);
  if (0 < param_4) {
    puVar2 = param_3 + param_4;
    do {
      pIVar3 = (Item *)*param_3;
      local_60 = 0;
      param_3 = param_3 + 1;
      local_58 = __LC6;
      uStack_50 = _UNK_001236b8;
      _cull_canvas_item(this,pIVar3,param_5,param_6,(Color *)&local_58,0,*(Item ***)(this + 0x260),
                        *(Item ***)(this + 0x268),(Item *)0x0,(Item *)0x0,false,param_13,
                        (Vector2 *)&local_60,1,(Item *)0x0);
    } while (param_3 != puVar2);
  }
  lVar4 = *(long *)(this + 0x260);
  lVar9 = 0;
  lVar10 = 0;
  lVar11 = 0;
  do {
    lVar6 = *(long *)(lVar4 + lVar9);
    plVar1 = RenderingServerGlobals::utilities;
    if (lVar6 != 0) {
      if (lVar11 == 0) {
        lVar10 = *(long *)(*(long *)(this + 0x268) + lVar9);
        lVar11 = lVar6;
      }
      else {
        lVar5 = *(long *)(this + 0x268);
        *(long *)(lVar10 + 0x80) = lVar6;
        lVar10 = *(long *)(lVar5 + lVar9);
        plVar1 = RenderingServerGlobals::utilities;
      }
    }
    lVar9 = lVar9 + 8;
    RenderingServerGlobals::utilities = plVar1;
  } while (lVar9 != 0x10008);
  if ((char)plVar1[1] != '\0') {
    pcVar7 = *(code **)(*plVar1 + 0x68);
    local_80 = 0;
    local_78 = "Render CanvasItems";
    local_70 = 0x12;
    String::parse_latin1((StrRange *)&local_80);
    (*pcVar7)(plVar1);
    lVar4 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  (**(code **)(*RenderingServerGlobals::canvas_render + 0x10))
            (RenderingServerGlobals::canvas_render,param_2,lVar11,param_7,param_8,param_9,param_5,
             param_10,param_11,param_12,&local_78,param_14);
  if ((char)local_78 != '\0') {
    this[0x1c9] = (RendererCanvasCull)0x1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::render_canvas(RID, RendererCanvasCull::Canvas*, Transform2D const&,
   RendererCanvasRender::Light*, RendererCanvasRender::Light*, Rect2 const&,
   RenderingServer::CanvasItemTextureFilter, RenderingServer::CanvasItemTextureRepeat, bool, bool,
   unsigned int, RenderingMethod::RenderInfo*) */

void __thiscall
RendererCanvasCull::render_canvas
          (RendererCanvasCull *this,undefined8 param_2,long param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
          undefined4 param_9,RendererCanvasCull param_10,undefined1 param_11,undefined4 param_12,
          undefined8 param_13)

{
  long *plVar1;
  ChildItem *__dest;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ChildItem *__src;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ChildItem *pCVar9;
  undefined4 uVar10;
  ChildItem *pCVar11;
  long lVar12;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar1 = RenderingServerGlobals::utilities;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_58 = "> Render Canvas";
    local_60 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_60);
    (*pcVar3)(plVar1);
    lVar12 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
  }
  this[0x1c9] = (RendererCanvasCull)0x0;
  lVar12 = *(long *)(param_3 + 0xb0);
  this[0x1ca] = param_10;
  if (*(char *)(param_3 + 0xa0) == '\0') {
LAB_001175d5:
    if (lVar12 == 0) {
LAB_00117908:
      uVar10 = 0;
      goto LAB_001175e1;
    }
  }
  else {
    if (lVar12 == 0) {
      *(undefined1 *)(param_3 + 0xa0) = 0;
      goto LAB_00117908;
    }
    lVar4 = *(long *)(lVar12 + -8);
    if (lVar4 != 0) {
      CowData<RendererCanvasCull::Canvas::ChildItem>::_copy_on_write
                ((CowData<RendererCanvasCull::Canvas::ChildItem> *)(param_3 + 0xb0));
      __src = *(ChildItem **)(param_3 + 0xb0);
      if (lVar4 == 1) {
        SortArray<RendererCanvasCull::Canvas::ChildItem,_DefaultComparator<RendererCanvasCull::Canvas::ChildItem>,true>
        ::introsort(0,1,__src,0);
        lVar12 = *(long *)(param_3 + 0xb0);
      }
      else {
        lVar6 = 0;
        lVar12 = lVar4;
        do {
          lVar12 = lVar12 >> 1;
          lVar6 = lVar6 + 1;
        } while (lVar12 != 1);
        SortArray<RendererCanvasCull::Canvas::ChildItem,_DefaultComparator<RendererCanvasCull::Canvas::ChildItem>,true>
        ::introsort(0,lVar4,__src,lVar6 * 2);
        __dest = __src + 8;
        if (lVar4 < 0x11) {
          lVar12 = 1;
          pCVar11 = __dest;
          do {
            lVar6 = *(long *)pCVar11;
            iVar2 = *(int *)(lVar6 + 0x18c);
            if (iVar2 < *(int *)(*(long *)__src + 0x18c)) {
              memmove(__dest,__src,lVar12 * 8);
              *(long *)__src = lVar6;
            }
            else {
              lVar5 = lVar12 + -1;
              pCVar9 = pCVar11;
              if (iVar2 < *(int *)(*(long *)(pCVar11 + -8) + 0x18c)) {
                do {
                  lVar7 = lVar5;
                  if (lVar7 == 0) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    pCVar9 = __dest;
                    goto LAB_001179ee;
                  }
                  *(undefined8 *)(__src + lVar7 * 8 + 8) = *(undefined8 *)(__src + lVar7 * 8);
                  lVar5 = lVar7 + -1;
                } while (iVar2 < *(int *)(*(long *)(__src + (lVar7 + -1) * 8) + 0x18c));
                pCVar9 = __src + lVar7 * 8;
              }
LAB_001179ee:
              *(long *)pCVar9 = lVar6;
            }
            lVar12 = lVar12 + 1;
            pCVar11 = pCVar11 + 8;
          } while (lVar4 != lVar12);
          lVar12 = *(long *)(param_3 + 0xb0);
        }
        else {
          lVar12 = 1;
          pCVar11 = __dest;
          do {
            lVar6 = *(long *)pCVar11;
            iVar2 = *(int *)(lVar6 + 0x18c);
            if (iVar2 < *(int *)(*(long *)__src + 0x18c)) {
              memmove(__dest,__src,lVar12 * 8);
              *(long *)__src = lVar6;
            }
            else {
              lVar5 = lVar12 + -1;
              pCVar9 = pCVar11;
              if (iVar2 < *(int *)(*(long *)(pCVar11 + -8) + 0x18c)) {
                do {
                  lVar7 = lVar5;
                  if (lVar7 == 0) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    pCVar9 = __dest;
                    goto LAB_001178f6;
                  }
                  *(undefined8 *)(__src + lVar7 * 8 + 8) = *(undefined8 *)(__src + lVar7 * 8);
                  lVar5 = lVar7 + -1;
                } while (iVar2 < *(int *)(*(long *)(__src + (lVar7 + -1) * 8) + 0x18c));
                pCVar9 = __src + lVar7 * 8;
              }
LAB_001178f6:
              *(long *)pCVar9 = lVar6;
            }
            lVar12 = lVar12 + 1;
            pCVar11 = pCVar11 + 8;
          } while (lVar12 != 0x10);
          pCVar11 = __src + 0x78;
          lVar6 = -0x80;
          lVar12 = 0x10;
          do {
            lVar5 = *(long *)(pCVar11 + 8);
            iVar2 = *(int *)(lVar5 + 0x18c);
            lVar7 = lVar12 + -1;
            if (iVar2 < *(int *)(*(long *)pCVar11 + 0x18c)) {
              do {
                *(undefined8 *)(__src + lVar7 * 8 + 8) =
                     *(undefined8 *)(pCVar11 + lVar7 * 8 + lVar6 + 8);
                lVar8 = lVar7 + -1;
                if (*(int *)(*(long *)(__src + lVar8 * 8) + 0x18c) <= iVar2) {
                  pCVar9 = __src + lVar7 * 8;
                  goto LAB_00117ab4;
                }
                lVar7 = lVar8;
              } while (lVar8 != 0);
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pCVar9 = __dest;
            }
            else {
              pCVar9 = __src + -lVar6;
            }
LAB_00117ab4:
            lVar12 = lVar12 + 1;
            *(long *)pCVar9 = lVar5;
            pCVar11 = pCVar11 + 8;
            lVar6 = lVar6 + -8;
          } while (lVar4 != lVar12);
          lVar12 = *(long *)(param_3 + 0xb0);
        }
      }
      *(undefined1 *)(param_3 + 0xa0) = 0;
      goto LAB_001175d5;
    }
    *(undefined1 *)(param_3 + 0xa0) = 0;
  }
  uVar10 = *(undefined4 *)(lVar12 + -8);
LAB_001175e1:
  CowData<RendererCanvasCull::Canvas::ChildItem>::_copy_on_write
            ((CowData<RendererCanvasCull::Canvas::ChildItem> *)(param_3 + 0xb0));
  _render_canvas_item_tree
            (this,param_2,*(undefined8 *)(param_3 + 0xb0),uVar10,param_4,param_7,param_3 + 0xb8,
             param_5,param_6,param_8,param_9,param_11,param_12,param_13);
  plVar1 = RenderingServerGlobals::utilities;
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_60 = 0;
    local_58 = "< Render Canvas";
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_60);
    (*pcVar3)(plVar1);
    lVar12 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* RendererCanvasRender::Item::CommandAnimationSlice::~CommandAnimationSlice() */

void __thiscall
RendererCanvasRender::Item::CommandAnimationSlice::~CommandAnimationSlice
          (CommandAnimationSlice *this)

{
  return;
}



/* RendererCanvasRender::Item::CommandClipIgnore::~CommandClipIgnore() */

void __thiscall
RendererCanvasRender::Item::CommandClipIgnore::~CommandClipIgnore(CommandClipIgnore *this)

{
  return;
}



/* RendererCanvasRender::Item::CommandTransform::~CommandTransform() */

void __thiscall
RendererCanvasRender::Item::CommandTransform::~CommandTransform(CommandTransform *this)

{
  return;
}



/* RendererCanvasRender::Item::CommandParticles::~CommandParticles() */

void __thiscall
RendererCanvasRender::Item::CommandParticles::~CommandParticles(CommandParticles *this)

{
  return;
}



/* RendererCanvasRender::Item::CommandMultiMesh::~CommandMultiMesh() */

void __thiscall
RendererCanvasRender::Item::CommandMultiMesh::~CommandMultiMesh(CommandMultiMesh *this)

{
  return;
}



/* RendererCanvasRender::Item::CommandPrimitive::~CommandPrimitive() */

void __thiscall
RendererCanvasRender::Item::CommandPrimitive::~CommandPrimitive(CommandPrimitive *this)

{
  return;
}



/* RendererCanvasRender::Item::CommandPolygon::~CommandPolygon() */

void __thiscall RendererCanvasRender::Item::CommandPolygon::~CommandPolygon(CommandPolygon *this)

{
  *(undefined ***)this = &PTR__CommandPolygon_00123308;
  if (*(long *)(this + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00117c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*singleton + 8))();
    return;
  }
  return;
}



/* RendererCanvasRender::Item::CommandNinePatch::~CommandNinePatch() */

void __thiscall
RendererCanvasRender::Item::CommandNinePatch::~CommandNinePatch(CommandNinePatch *this)

{
  return;
}



/* RendererCanvasRender::Item::CommandRect::~CommandRect() */

void __thiscall RendererCanvasRender::Item::CommandRect::~CommandRect(CommandRect *this)

{
  return;
}



/* RendererCanvasRender::Item::CommandAnimationSlice::~CommandAnimationSlice() */

void __thiscall
RendererCanvasRender::Item::CommandAnimationSlice::~CommandAnimationSlice
          (CommandAnimationSlice *this)

{
  operator_delete(this,0x38);
  return;
}



/* RendererCanvasRender::Item::CommandClipIgnore::~CommandClipIgnore() */

void __thiscall
RendererCanvasRender::Item::CommandClipIgnore::~CommandClipIgnore(CommandClipIgnore *this)

{
  operator_delete(this,0x18);
  return;
}



/* RendererCanvasRender::Item::CommandTransform::~CommandTransform() */

void __thiscall
RendererCanvasRender::Item::CommandTransform::~CommandTransform(CommandTransform *this)

{
  operator_delete(this,0x30);
  return;
}



/* RendererCanvasRender::Item::CommandParticles::~CommandParticles() */

void __thiscall
RendererCanvasRender::Item::CommandParticles::~CommandParticles(CommandParticles *this)

{
  operator_delete(this,0x28);
  return;
}



/* RendererCanvasRender::Item::CommandMultiMesh::~CommandMultiMesh() */

void __thiscall
RendererCanvasRender::Item::CommandMultiMesh::~CommandMultiMesh(CommandMultiMesh *this)

{
  operator_delete(this,0x28);
  return;
}



/* RendererCanvasRender::Item::CommandPrimitive::~CommandPrimitive() */

void __thiscall
RendererCanvasRender::Item::CommandPrimitive::~CommandPrimitive(CommandPrimitive *this)

{
  operator_delete(this,0xa0);
  return;
}



/* RendererCanvasRender::Item::CommandNinePatch::~CommandNinePatch() */

void __thiscall
RendererCanvasRender::Item::CommandNinePatch::~CommandNinePatch(CommandNinePatch *this)

{
  operator_delete(this,0x68);
  return;
}



/* RendererCanvasRender::Item::CommandRect::~CommandRect() */

void __thiscall RendererCanvasRender::Item::CommandRect::~CommandRect(CommandRect *this)

{
  operator_delete(this,0x58);
  return;
}



/* CowData<RendererCanvasCull::Canvas::ChildItem>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RendererCanvasCull::Canvas::ChildItem>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererCanvasCull::Item*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RendererCanvasCull::Item*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererCanvasCull::canvas_item_set_draw_index(RID, int) [clone .cold] */

void RendererCanvasCull::canvas_item_set_draw_index(void)

{
  code *pcVar1;
  int in_EAX;
  undefined8 in_RCX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_RCX);
  }
  DAT_00000190 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_occluder_polygon_initialize(RID) [clone .cold] */

void RendererCanvasCull::canvas_occluder_polygon_initialize(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0);
  }
  _DAT_00000018 = (**(code **)(*RenderingServerGlobals::canvas_render + 0x48))();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_initialize(RID) [clone .cold] */

void RendererCanvasCull::canvas_item_initialize
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,param_3);
  }
  _DAT_00000150 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_light_initialize(RID) [clone .cold] */

void RendererCanvasCull::canvas_light_initialize(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0);
  }
  _DAT_00000118 = (**(code **)(*RenderingServerGlobals::canvas_render + 0x18))();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector2>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00118734(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererCanvasCull::free(RID) [clone .cold] */

void RendererCanvasCull::free(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererCanvasCull::canvas_item_set_parent(RID, RID) [clone .cold] */

void RendererCanvasCull::canvas_item_set_parent(void)

{
  code *pcVar1;
  int in_EAX;
  undefined8 in_RCX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_RCX);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasCull::canvas_item_add_circle(RID, Vector2 const&, float, Color const&, bool) [clone
   .cold] */

void RendererCanvasCull::canvas_item_add_circle(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererCanvasRender::Item::CommandPolygon::~CommandPolygon() */

void __thiscall RendererCanvasRender::Item::CommandPolygon::~CommandPolygon(CommandPolygon *this)

{
  *(undefined ***)this = &PTR__CommandPolygon_00123308;
  if (*(long *)(this + 0x18) != 0) {
    (**(code **)(*singleton + 8))();
  }
  operator_delete(this,0x38);
  return;
}



/* RendererCanvasRender::Item::~Item() */

void __thiscall RendererCanvasRender::Item::~Item(Item *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  
  *(undefined ***)this = &PTR__Item_001233e8;
  puVar7 = *(undefined8 **)(this + 0x110);
  puVar9 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    while( true ) {
      puVar2 = (undefined8 *)puVar7[1];
      if (puVar9 == puVar7) {
        (**(code **)*puVar7)(puVar9);
        Memory::free_static(puVar9,false);
        *(undefined8 *)(this + 0x110) = 0;
      }
      else {
        (**(code **)*puVar7)();
      }
      if (puVar2 == (undefined8 *)0x0) break;
      puVar7 = puVar2;
      puVar9 = *(undefined8 **)(this + 0x110);
    }
  }
  if (*(long *)(this + 0x128) == 0) {
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    puVar3 = *(undefined4 **)(this + 0x128);
  }
  else {
    uVar4 = *(uint *)(*(long *)(this + 0x128) + -8);
    if (*(int *)(this + 0x130) + 1U <= uVar4) {
      uVar4 = *(int *)(this + 0x130) + 1U;
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    puVar3 = *(undefined4 **)(this + 0x128);
    if (uVar4 != 0) {
      puVar5 = puVar3;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar3 + (ulong)uVar4 * 4);
    }
  }
  this[0x38] = (Item)((byte)this[0x38] & 0xfe);
  *(undefined4 *)(this + 0x130) = 0;
  this[0x55] = (Item)0x1;
  this[0xe9] = (Item)0x0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  if (puVar3 != (undefined4 *)0x0) {
    lVar6 = 0;
    do {
      if (*(long *)(puVar3 + -2) <= lVar6) {
        pvVar8 = *(void **)(this + 0x88);
        if (pvVar8 != (void *)0x0) goto LAB_00119c65;
        goto LAB_00119c73;
      }
      Memory::free_static(*(void **)(puVar3 + lVar6 * 4 + 2),false);
      puVar3 = *(undefined4 **)(this + 0x128);
      lVar6 = lVar6 + 1;
    } while (puVar3 != (undefined4 *)0x0);
  }
  pvVar8 = *(void **)(this + 0x88);
  if (pvVar8 != (void *)0x0) {
LAB_00119c65:
    Memory::free_static(pvVar8,false);
    puVar3 = *(undefined4 **)(this + 0x128);
LAB_00119c73:
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar3 + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *(long *)(this + 0x128);
        *(undefined8 *)(this + 0x128) = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
        return;
      }
    }
  }
  return;
}



/* RendererCanvasRender::Item::~Item() */

void __thiscall RendererCanvasRender::Item::~Item(Item *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  
  *(undefined ***)this = &PTR__Item_001233e8;
  puVar7 = *(undefined8 **)(this + 0x110);
  puVar9 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    while( true ) {
      puVar2 = (undefined8 *)puVar7[1];
      if (puVar9 == puVar7) {
        (**(code **)*puVar7)(puVar9);
        Memory::free_static(puVar9,false);
        *(undefined8 *)(this + 0x110) = 0;
      }
      else {
        (**(code **)*puVar7)();
      }
      if (puVar2 == (undefined8 *)0x0) break;
      puVar7 = puVar2;
      puVar9 = *(undefined8 **)(this + 0x110);
    }
  }
  if (*(long *)(this + 0x128) == 0) {
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    puVar3 = *(undefined4 **)(this + 0x128);
  }
  else {
    uVar4 = *(uint *)(*(long *)(this + 0x128) + -8);
    if (*(int *)(this + 0x130) + 1U <= uVar4) {
      uVar4 = *(int *)(this + 0x130) + 1U;
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    puVar3 = *(undefined4 **)(this + 0x128);
    if (uVar4 != 0) {
      puVar5 = puVar3;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar3 + (ulong)uVar4 * 4);
    }
  }
  this[0x38] = (Item)((byte)this[0x38] & 0xfe);
  *(undefined4 *)(this + 0x130) = 0;
  this[0x55] = (Item)0x1;
  this[0xe9] = (Item)0x0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  if (puVar3 != (undefined4 *)0x0) {
    lVar6 = 0;
    do {
      if (*(long *)(puVar3 + -2) <= lVar6) {
        pvVar8 = *(void **)(this + 0x88);
        if (pvVar8 != (void *)0x0) goto LAB_00119e19;
        goto LAB_00119e27;
      }
      Memory::free_static(*(void **)(puVar3 + lVar6 * 4 + 2),false);
      puVar3 = *(undefined4 **)(this + 0x128);
      lVar6 = lVar6 + 1;
    } while (puVar3 != (undefined4 *)0x0);
  }
  pvVar8 = *(void **)(this + 0x88);
  if (pvVar8 != (void *)0x0) {
LAB_00119e19:
    Memory::free_static(pvVar8,false);
    puVar3 = *(undefined4 **)(this + 0x128);
LAB_00119e27:
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar3 + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *(long *)(this + 0x128);
        *(undefined8 *)(this + 0x128) = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  operator_delete(this,0x148);
  return;
}



/* Rect2::intersection(Rect2 const&) const */

undefined1  [16] __thiscall Rect2::intersection(Rect2 *this,Rect2 *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0xc);
  if ((((*(float *)(this + 8) <= 0.0 && *(float *)(this + 8) != 0.0) ||
       (*(float *)(this + 0xc) <= 0.0 && *(float *)(this + 0xc) != 0.0)) || (fVar4 < 0.0)) ||
     (fVar5 < 0.0)) {
    _err_print_error("intersects","./core/math/rect2.h",0x39,
                     "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                     ,0,0);
  }
  fVar1 = *(float *)this;
  if (((fVar1 < fVar4 + fVar6) && (fVar4 = *(float *)(this + 8) + fVar1, fVar6 < fVar4)) &&
     ((fVar6 = *(float *)(this + 4), fVar6 < fVar5 + fVar8 &&
      (fVar5 = *(float *)(this + 0xc) + fVar6, fVar8 < fVar5)))) {
    fVar8 = *(float *)(param_1 + 4);
    fVar2 = *(float *)param_1;
    fVar7 = fVar8;
    if (fVar8 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar6 = fVar8 + *(float *)(param_1 + 0xc);
    if (fVar5 <= fVar8 + *(float *)(param_1 + 0xc)) {
      fVar6 = fVar5;
    }
    fVar8 = fVar2;
    if (fVar2 <= fVar1) {
      fVar8 = fVar1;
    }
    fVar5 = fVar2 + *(float *)(param_1 + 8);
    if (fVar4 <= fVar2 + *(float *)(param_1 + 8)) {
      fVar5 = fVar4;
    }
    auVar3._4_4_ = fVar7;
    auVar3._0_4_ = fVar8;
    auVar3._8_4_ = fVar5 - fVar8;
    auVar3._12_4_ = fVar6 - fVar7;
    return auVar3;
  }
  return ZEXT816(0);
}



/* DependencyTracker::update_end() */

void __thiscall DependencyTracker::update_end(DependencyTracker *this)

{
  undefined1 (*pauVar1) [16];
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
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
  uint uVar39;
  int iVar40;
  ulong uVar41;
  long *plVar42;
  uint *puVar43;
  uint uVar44;
  uint uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  ulong uVar49;
  uint *puVar50;
  long lVar51;
  uint uVar52;
  uint *puVar53;
  ulong uVar54;
  ulong uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  ulong uVar58;
  
  if (*(uint *)(this + 0x44) == 0) {
    return;
  }
  uVar58 = *(ulong *)(this + 0x20);
  pauVar56 = (undefined1 (*) [16])0x0;
  uVar55 = (ulong)*(uint *)(this + 0x44);
  uVar41 = (long)this * 0x3ffff - 1;
  uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
  uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
  uVar41 = uVar41 >> 0x16 ^ uVar41;
  uVar49 = uVar41 & 0xffffffff;
  if ((int)uVar41 == 0) {
    uVar49 = 1;
  }
  lVar51 = 0;
  do {
    lVar7 = *(long *)(uVar58 + lVar51 * 8);
    lVar8 = *(long *)(lVar7 + 8);
    if ((lVar8 != 0) && (*(int *)(lVar7 + 0x2c) != 0)) {
      uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar7 + 0x28) * 4));
      lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar7 + 0x28) * 8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar49 * lVar47;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar41;
      lVar46 = SUB168(auVar11 * auVar25,8);
      uVar39 = *(uint *)(*(long *)(lVar7 + 0x10) + lVar46 * 4);
      uVar44 = SUB164(auVar11 * auVar25,8);
      if (uVar39 != 0) {
        uVar52 = 0;
        do {
          if ((uVar39 == (uint)uVar49) &&
             (this == *(DependencyTracker **)(*(long *)(lVar8 + lVar46 * 8) + 0x10))) {
            lVar8 = *(long *)(lVar8 + (ulong)uVar44 * 8);
            if (lVar8 != 0) {
              if (*(int *)(lVar8 + 0x18) != *(int *)(this + 0x18)) {
                lVar8 = *(long *)(lVar8 + 0x10);
                if (pauVar56 == (undefined1 (*) [16])0x0) {
                  pauVar56 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                  *(undefined4 *)pauVar56[1] = 0;
                  *pauVar56 = (undefined1  [16])0x0;
                }
                plVar42 = (long *)operator_new(0x28,DefaultAllocator::alloc);
                plVar42[2] = 0;
                *plVar42 = lVar7;
                plVar42[1] = lVar8;
                lVar7 = *(long *)(*pauVar56 + 8);
                plVar42[4] = (long)pauVar56;
                plVar42[3] = lVar7;
                if (lVar7 != 0) {
                  *(long **)(lVar7 + 0x10) = plVar42;
                }
                lVar7 = *(long *)*pauVar56;
                *(long **)(*pauVar56 + 8) = plVar42;
                if (lVar7 == 0) {
                  *(long **)*pauVar56 = plVar42;
                }
                *(int *)pauVar56[1] = *(int *)pauVar56[1] + 1;
              }
              goto LAB_0011a35c;
            }
            break;
          }
          uVar52 = uVar52 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar44 + 1) * lVar47;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar41;
          lVar46 = SUB168(auVar12 * auVar26,8);
          uVar39 = *(uint *)(*(long *)(lVar7 + 0x10) + lVar46 * 4);
          uVar44 = SUB164(auVar12 * auVar26,8);
        } while ((uVar39 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar39 * lVar47, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar41, auVar14._8_8_ = 0,
                auVar14._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar7 + 0x28) * 4)
                             + uVar44) - SUB164(auVar13 * auVar27,8)) * lVar47, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar41, uVar52 <= SUB164(auVar14 * auVar28,8)));
      }
    }
    _err_print_error("update_end","./servers/rendering/storage/utilities.h",0x5a,
                     "Condition \"!F\" is true. Continuing.",0,0);
LAB_0011a35c:
    if ((int)uVar55 <= (int)lVar51 + 1) goto code_r0x0011a36b;
    lVar51 = lVar51 + 1;
  } while( true );
LAB_0011a718:
  do {
    pvVar10 = *(void **)*pauVar56;
    while( true ) {
      if (pvVar10 == (void *)0x0) {
        if (*(int *)pauVar57[1] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          return;
        }
        goto LAB_0011a66c;
      }
      if (pauVar56 != *(undefined1 (**) [16])((long)pvVar10 + 0x20)) break;
      lVar51 = *(long *)((long)pvVar10 + 0x10);
      lVar7 = *(long *)((long)pvVar10 + 0x18);
      *(long *)*pauVar56 = lVar51;
      if (pvVar10 == *(void **)(*pauVar56 + 8)) {
        *(long *)(*pauVar56 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar51;
        lVar51 = *(long *)((long)pvVar10 + 0x10);
      }
      if (lVar51 != 0) {
        *(long *)(lVar51 + 0x18) = lVar7;
      }
      Memory::free_static(pvVar10,false);
      pauVar1 = pauVar56 + 1;
      *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
      if (*(int *)*pauVar1 == 0) goto LAB_0011a66c;
      pvVar10 = *(void **)*pauVar56;
    }
    _err_print_error("erase","./core/templates/list.h",0xe7,
                     "Condition \"p_I->data != this\" is true. Returning: false",0,0,pauVar57,this,
                     uVar58);
  } while (*(int *)pauVar56[1] != 0);
  goto LAB_0011a66c;
LAB_0011a458:
  uVar52 = uVar52 + 1;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)(iVar40 + 1) * lVar8;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar54;
  lVar47 = SUB168(auVar16 * auVar30,8);
  uVar44 = *(uint *)(lVar7 + lVar47 * 4);
  iVar40 = SUB164(auVar16 * auVar30,8);
  if ((uVar44 == 0) ||
     (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar44 * lVar8, auVar31._8_8_ = 0,
     auVar31._0_8_ = uVar54, auVar18._8_8_ = 0,
     auVar18._0_8_ = (ulong)((uVar39 + iVar40) - SUB164(auVar17 * auVar31,8)) * lVar8,
     auVar32._8_8_ = 0, auVar32._0_8_ = uVar54, SUB164(auVar18 * auVar32,8) < uVar52))
  goto LAB_0011a5fd;
  goto LAB_0011a4a8;
code_r0x0011a36b:
  if (pauVar56 == (undefined1 (*) [16])0x0) {
    return;
  }
LAB_0011a376:
  do {
    pauVar57 = pauVar56;
    if (*(int *)pauVar56[1] == 0) goto LAB_0011a718;
    HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
    ::erase((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
             *)**(undefined8 **)*pauVar56,(DependencyTracker **)(*(undefined8 **)*pauVar56 + 1));
    plVar42 = *(long **)*pauVar56;
    lVar51 = *(long *)(this + 0x20);
    if ((lVar51 != 0) && (*(int *)(this + 0x44) != 0)) {
      lVar7 = *(long *)(this + 0x38);
      uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4);
      uVar54 = CONCAT44(0,uVar39);
      lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x40) * 8);
      uVar41 = *plVar42 * 0x3ffff - 1;
      uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
      uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
      uVar41 = uVar41 >> 0x16 ^ uVar41;
      uVar49 = uVar41 & 0xffffffff;
      if ((int)uVar41 == 0) {
        uVar49 = 1;
      }
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar49 * lVar8;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar54;
      lVar47 = SUB168(auVar15 * auVar29,8);
      uVar44 = *(uint *)(lVar7 + lVar47 * 4);
      iVar40 = SUB164(auVar15 * auVar29,8);
      if (uVar44 != 0) {
        uVar52 = 0;
LAB_0011a4a8:
        if (uVar44 != (uint)uVar49) goto LAB_0011a458;
        lVar46 = *(long *)(this + 0x28);
        uVar44 = *(uint *)(lVar46 + lVar47 * 4);
        uVar41 = (ulong)uVar44;
        if (*plVar42 != *(long *)(lVar51 + uVar41 * 8)) goto LAB_0011a458;
        uVar58 = (ulong)uVar44;
        lVar9 = *(long *)(this + 0x30);
        puVar2 = (uint *)(lVar9 + uVar41 * 4);
        uVar52 = *puVar2;
        uVar49 = (ulong)uVar52;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = (ulong)(uVar52 + 1) * lVar8;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar54;
        lVar47 = SUB168(auVar19 * auVar33,8) * 4;
        uVar45 = SUB164(auVar19 * auVar33,8);
        uVar55 = (ulong)uVar45;
        puVar50 = (uint *)(lVar7 + lVar47);
        if ((*puVar50 == 0) ||
           (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)*puVar50 * lVar8, auVar34._8_8_ = 0,
           auVar34._0_8_ = uVar54, auVar21._8_8_ = 0,
           auVar21._0_8_ = (ulong)((uVar45 + uVar39) - SUB164(auVar20 * auVar34,8)) * lVar8,
           auVar35._8_8_ = 0, auVar35._0_8_ = uVar54, SUB164(auVar21 * auVar35,8) == 0)) {
          uVar55 = (ulong)uVar52;
        }
        else {
          while( true ) {
            puVar43 = (uint *)(lVar47 + lVar46);
            puVar5 = (uint *)(lVar46 + uVar49 * 4);
            puVar53 = (uint *)(uVar49 * 4 + lVar7);
            puVar3 = (undefined4 *)(lVar9 + (ulong)*puVar43 * 4);
            puVar4 = (undefined4 *)(lVar9 + (ulong)*puVar5 * 4);
            uVar6 = *puVar4;
            *puVar4 = *puVar3;
            *puVar3 = uVar6;
            uVar52 = *puVar50;
            *puVar50 = *puVar53;
            *puVar53 = uVar52;
            uVar52 = *puVar43;
            *puVar43 = *puVar5;
            *puVar5 = uVar52;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = (ulong)((int)uVar55 + 1) * lVar8;
            auVar38._8_8_ = 0;
            auVar38._0_8_ = uVar54;
            uVar48 = SUB168(auVar24 * auVar38,8);
            lVar47 = uVar48 * 4;
            puVar50 = (uint *)(lVar7 + lVar47);
            if ((*puVar50 == 0) ||
               (auVar22._8_8_ = 0, auVar22._0_8_ = (ulong)*puVar50 * lVar8, auVar36._8_8_ = 0,
               auVar36._0_8_ = uVar54, auVar23._8_8_ = 0,
               auVar23._0_8_ =
                    (ulong)((SUB164(auVar24 * auVar38,8) + uVar39) - SUB164(auVar22 * auVar36,8)) *
                    lVar8, auVar37._8_8_ = 0, auVar37._0_8_ = uVar54,
               SUB164(auVar23 * auVar37,8) == 0)) break;
            uVar49 = uVar55;
            uVar55 = uVar48 & 0xffffffff;
          }
        }
        *(undefined4 *)(lVar7 + uVar55 * 4) = 0;
        uVar55 = (ulong)*(uint *)(this + 0x44);
        uVar39 = *(uint *)(this + 0x44) - 1;
        *(uint *)(this + 0x44) = uVar39;
        if (uVar44 < uVar39) {
          uVar52 = *(uint *)(lVar9 + (ulong)uVar39 * 4);
          *(undefined8 *)(lVar51 + uVar41 * 8) = *(undefined8 *)(lVar51 + (ulong)uVar39 * 8);
          *puVar2 = uVar52;
          *(uint *)(lVar46 + (ulong)*(uint *)(lVar9 + (ulong)*(uint *)(this + 0x44) * 4) * 4) =
               uVar44;
        }
      }
    }
LAB_0011a5fd:
    if (pauVar57 != (undefined1 (*) [16])plVar42[4]) {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0,pauVar57,this
                       ,uVar58,uVar55);
      pauVar56 = pauVar57;
      if (*(int *)pauVar57[1] == 0) break;
      goto LAB_0011a376;
    }
    lVar51 = plVar42[2];
    lVar7 = plVar42[3];
    *(long *)*pauVar57 = lVar51;
    if (plVar42 == *(long **)(*pauVar57 + 8)) {
      *(long *)(*pauVar57 + 8) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar51;
      lVar51 = plVar42[2];
    }
    if (lVar51 != 0) {
      *(long *)(lVar51 + 0x18) = lVar7;
    }
    Memory::free_static(plVar42,false);
    uVar58 = (ulong)*(uint *)pauVar57[1];
    iVar40 = *(uint *)pauVar57[1] - 1;
    *(int *)pauVar57[1] = iVar40;
    pauVar56 = pauVar57;
  } while (iVar40 != 0);
LAB_0011a66c:
  Memory::free_static(pauVar57,false);
  return;
}



/* Variant Callable::call<>() const */

void Callable::call<>(void)

{
  Variant **in_RSI;
  CallError *in_RDI;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,0);
  *(undefined4 *)in_RDI = 0;
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  Callable::callp(in_RSI,0,(Variant *)0x0,in_RDI);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::Item::VisibilityNotifierData*
   PagedAllocator<RendererCanvasCull::Item::VisibilityNotifierData, false, 4096u>::alloc<>() */

VisibilityNotifierData * __thiscall
PagedAllocator<RendererCanvasCull::Item::VisibilityNotifierData,false,4096u>::alloc<>
          (PagedAllocator<RendererCanvasCull::Item::VisibilityNotifierData,false,4096u> *this)

{
  VisibilityNotifierData *pVVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  iVar5 = *(int *)(this + 0x14);
  if (iVar5 == 0) {
    uVar4 = *(uint *)(this + 0x10) + 1;
    lVar10 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar4;
    uVar6 = Memory::realloc_static(*(void **)this,(ulong)uVar4 << 3,false);
    *(undefined8 *)this = uVar6;
    uVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar2 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar6;
    uVar6 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x60,false);
    uVar4 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar2 + lVar10) = uVar6;
    lVar2 = *(long *)(this + 8);
    uVar6 = Memory::alloc_static((ulong)uVar4 << 3,false);
    *(undefined8 *)(lVar2 + lVar10) = uVar6;
    uVar4 = *(uint *)(this + 0x20);
    if (uVar4 == 0) {
      plVar11 = *(long **)(this + 8);
    }
    else {
      plVar11 = *(long **)(this + 8);
      lVar2 = *(long *)this;
      plVar3 = (long *)*plVar11;
      lVar7 = 0;
      plVar8 = plVar3;
      do {
        plVar9 = plVar8 + 1;
        lVar12 = *(long *)(lVar2 + lVar10) + lVar7;
        lVar7 = lVar7 + 0x60;
        *plVar8 = lVar12;
        plVar8 = plVar9;
      } while (plVar3 + uVar4 != plVar9);
    }
    iVar5 = uVar4 + *(int *)(this + 0x14);
  }
  else {
    plVar11 = *(long **)(this + 8);
  }
  uVar4 = iVar5 - 1;
  *(uint *)(this + 0x14) = uVar4;
  pVVar1 = *(VisibilityNotifierData **)
            (plVar11[uVar4 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar4 & *(uint *)(this + 0x1c)) * 8);
  *(undefined8 *)pVVar1 = 0;
  *(undefined8 *)(pVVar1 + 8) = 0;
  *(undefined8 *)(pVVar1 + 0x10) = 0;
  *(undefined8 *)(pVVar1 + 0x18) = 0;
  *(undefined8 *)(pVVar1 + 0x20) = 0;
  *(undefined8 *)(pVVar1 + 0x28) = 0;
  pVVar1[0x30] = (VisibilityNotifierData)0x0;
  *(undefined8 *)(pVVar1 + 0x38) = 0;
  *(undefined8 *)(pVVar1 + 0x40) = 0;
  *(undefined8 *)(pVVar1 + 0x50) = 0;
  *(undefined8 *)(pVVar1 + 0x58) = 0;
  *(VisibilityNotifierData **)(pVVar1 + 0x48) = pVVar1;
  return pVVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<RendererCanvasRender::Light*, HashMapHasherDefault,
   HashMapComparatorDefault<RendererCanvasRender::Light*> >::insert(RendererCanvasRender::Light*
   const&) */

undefined1  [16]
HashSet<RendererCanvasRender::Light*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::Light*>>
::insert(Light **param_1)

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
  Light *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (Light *)*in_RSI;
  if (local_88 == (Light *)0x0) {
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
    local_88 = (Light *)*in_RSI;
    if (local_88 != (Light *)0x0) goto LAB_0011ab1f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0011ab1f:
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
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_0011afc1;
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
  if ((float)uVar31 * __LC149 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (Light *)*in_RSI;
      goto LAB_0011afc1;
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
    local_88 = (Light *)*in_RSI;
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
LAB_0011afc1:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<RendererCanvasRender::LightOccluderInstance*, HashMapHasherDefault,
   HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>
   >::insert(RendererCanvasRender::LightOccluderInstance* const&) */

undefined1  [16]
HashSet<RendererCanvasRender::LightOccluderInstance*,HashMapHasherDefault,HashMapComparatorDefault<RendererCanvasRender::LightOccluderInstance*>>
::insert(LightOccluderInstance **param_1)

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
  LightOccluderInstance *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (LightOccluderInstance *)*in_RSI;
  if (local_88 == (LightOccluderInstance *)0x0) {
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
    local_88 = (LightOccluderInstance *)*in_RSI;
    if (local_88 != (LightOccluderInstance *)0x0) goto LAB_0011b13f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0011b13f:
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
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_0011b5e1;
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
  if ((float)uVar31 * __LC149 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (LightOccluderInstance *)*in_RSI;
      goto LAB_0011b5e1;
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
    local_88 = (LightOccluderInstance *)*in_RSI;
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
LAB_0011b5e1:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* RendererCanvasCull::Canvas::~Canvas() */

void __thiscall RendererCanvasCull::Canvas::~Canvas(Canvas *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  if (*(long *)(this + 0xb0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xb0);
      *(undefined8 *)(this + 0xb0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  pvVar2 = *(void **)(this + 0x78);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x9c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4) != 0) {
        memset(*(void **)(this + 0x90),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4) << 2);
      }
      *(undefined4 *)(this + 0x9c) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x88),false);
    Memory::free_static(*(void **)(this + 0x80),false);
    Memory::free_static(*(void **)(this + 0x90),false);
  }
  pvVar2 = *(void **)(this + 0x50);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x74) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4) != 0) {
        memset(*(void **)(this + 0x68),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4) << 2);
      }
      *(undefined4 *)(this + 0x74) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x60),false);
    Memory::free_static(*(void **)(this + 0x58),false);
    Memory::free_static(*(void **)(this + 0x68),false);
  }
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x4c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x48) * 4) != 0) {
        memset(*(void **)(this + 0x40),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x48) * 4) << 2);
      }
      *(undefined4 *)(this + 0x4c) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x38),false);
    Memory::free_static(*(void **)(this + 0x30),false);
    Memory::free_static(*(void **)(this + 0x40),false);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) != 0) {
        memset(*(void **)(this + 0x18),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2);
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x10),false);
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x18),false);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011bae0) */
/* WARNING: Removing unreachable block (ram,0x0011bc10) */
/* WARNING: Removing unreachable block (ram,0x0011bd89) */
/* WARNING: Removing unreachable block (ram,0x0011bc1c) */
/* WARNING: Removing unreachable block (ram,0x0011bc26) */
/* WARNING: Removing unreachable block (ram,0x0011bd6b) */
/* WARNING: Removing unreachable block (ram,0x0011bc32) */
/* WARNING: Removing unreachable block (ram,0x0011bc3c) */
/* WARNING: Removing unreachable block (ram,0x0011bd4d) */
/* WARNING: Removing unreachable block (ram,0x0011bc48) */
/* WARNING: Removing unreachable block (ram,0x0011bc52) */
/* WARNING: Removing unreachable block (ram,0x0011bd2f) */
/* WARNING: Removing unreachable block (ram,0x0011bc5e) */
/* WARNING: Removing unreachable block (ram,0x0011bc68) */
/* WARNING: Removing unreachable block (ram,0x0011bd11) */
/* WARNING: Removing unreachable block (ram,0x0011bc74) */
/* WARNING: Removing unreachable block (ram,0x0011bc7e) */
/* WARNING: Removing unreachable block (ram,0x0011bcf3) */
/* WARNING: Removing unreachable block (ram,0x0011bc86) */
/* WARNING: Removing unreachable block (ram,0x0011bc90) */
/* WARNING: Removing unreachable block (ram,0x0011bcd8) */
/* WARNING: Removing unreachable block (ram,0x0011bc98) */
/* WARNING: Removing unreachable block (ram,0x0011bcae) */
/* WARNING: Removing unreachable block (ram,0x0011bcba) */
/* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */

String_conflict *
vformat<unsigned_int,char_const*>(String_conflict *param_1,uint param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,(uint)param_3);
  Variant::Variant(local_70,in_RCX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RID_Alloc<RendererCanvasRender::LightOccluderInstance, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRender::LightOccluderInstance,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasRender::LightOccluderInstance,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00123448;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasRender::Light, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRender::Light,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasRender::Light,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001234a8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasCull::LightOccluderPolygon, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true> *this)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00123428;
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_0011c2fb:
    if ((uint)uVar5 < uVar7) goto LAB_0011c33b;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar9[lVar6],false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar5 / uVar7) <= (uint)lVar6) break;
      puVar9 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar7);
    print_error((String_conflict *)&local_48);
    pcVar4 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uVar7 = *(uint *)(this + 0x18);
    uVar8 = (ulong)uVar7;
    puVar9 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar10 = 0;
      do {
        lVar6 = (uVar10 % uVar8) * 0x50 + puVar9[uVar10 / uVar8];
        if (-1 < *(int *)(lVar6 + 0x48)) {
          pvVar3 = *(void **)(lVar6 + 0x20);
          if (pvVar3 != (void *)0x0) {
            if (*(int *)(lVar6 + 0x44) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x40) * 4) != 0) {
                memset(*(void **)(lVar6 + 0x38),0,
                       (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x40) * 4)
                       << 2);
              }
              *(undefined4 *)(lVar6 + 0x44) = 0;
            }
            Memory::free_static(pvVar3,false);
            Memory::free_static(*(void **)(lVar6 + 0x30),false);
            Memory::free_static(*(void **)(lVar6 + 0x28),false);
            Memory::free_static(*(void **)(lVar6 + 0x38),false);
            puVar9 = *(undefined8 **)(this + 8);
            uVar8 = (ulong)*(uint *)(this + 0x18);
          }
          uVar7 = (uint)uVar8;
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar5);
      goto LAB_0011c2fb;
    }
    if (uVar7 != 0) goto LAB_0011c33b;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_0011c33b:
  if (puVar9 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar9,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasCull::LightOccluderPolygon, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererCanvasCull::Canvas, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasCull::Canvas,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasCull::Canvas,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00123468;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 == 0) {
    uVar7 = (ulong)*(uint *)(this + 0x1c);
    uVar10 = (ulong)*(uint *)(this + 0x18);
    puVar11 = *(undefined8 **)(this + 8);
LAB_0011c732:
    if ((uint)uVar7 < (uint)uVar10) goto LAB_0011c773;
    lVar9 = 0;
    while( true ) {
      Memory::free_static((void *)puVar11[lVar9],false);
      lVar2 = lVar9 * 8;
      lVar9 = lVar9 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar7 / uVar10) <= (uint)lVar9) break;
      puVar11 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar6 = local_48;
    if (local_48 == (char *)0x0) {
LAB_0011c4e9:
      if (local_50 == 0) goto LAB_0011c4ff;
LAB_0011c4f3:
      lVar9 = local_50;
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011c4ff;
      local_50 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
      iVar4 = *(int *)(this + 0x1c);
      uVar3 = *(uint *)(this + 0x18);
      puVar11 = *(undefined8 **)(this + 8);
    }
    else {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011c4e9;
      local_48 = (char *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
      if (local_50 != 0) goto LAB_0011c4f3;
LAB_0011c4ff:
      iVar4 = *(int *)(this + 0x1c);
      uVar3 = *(uint *)(this + 0x18);
      puVar11 = *(undefined8 **)(this + 8);
    }
    if (iVar4 != 0) {
      uVar10 = (ulong)uVar3;
      uVar12 = 0;
      do {
        puVar8 = (undefined8 *)((uVar12 % uVar10) * 0xe0 + puVar11[uVar12 / uVar10]);
        if (-1 < *(int *)(puVar8 + 0x1b)) {
          if (puVar8[0x16] != 0) {
            LOCK();
            plVar1 = (long *)(puVar8[0x16] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar9 = puVar8[0x16];
              puVar8[0x16] = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
          pvVar5 = (void *)puVar8[0xf];
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)puVar8 + 0x9c) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar8 + 0x13) * 4) != 0) {
                memset((void *)puVar8[0x12],0,
                       (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar8 + 0x13) * 4
                                       ) << 2);
              }
              *(undefined4 *)((long)puVar8 + 0x9c) = 0;
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static((void *)puVar8[0x11],false);
            Memory::free_static((void *)puVar8[0x10],false);
            Memory::free_static((void *)puVar8[0x12],false);
          }
          pvVar5 = (void *)puVar8[10];
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)puVar8 + 0x74) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar8 + 0xe) * 4) != 0) {
                memset((void *)puVar8[0xd],0,
                       (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar8 + 0xe) * 4)
                       << 2);
              }
              *(undefined4 *)((long)puVar8 + 0x74) = 0;
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static((void *)puVar8[0xc],false);
            Memory::free_static((void *)puVar8[0xb],false);
            Memory::free_static((void *)puVar8[0xd],false);
          }
          pvVar5 = (void *)puVar8[5];
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)puVar8 + 0x4c) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar8 + 9) * 4) != 0) {
                memset((void *)puVar8[8],0,
                       (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar8 + 9) * 4)
                       << 2);
              }
              *(undefined4 *)((long)puVar8 + 0x4c) = 0;
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static((void *)puVar8[7],false);
            Memory::free_static((void *)puVar8[6],false);
            Memory::free_static((void *)puVar8[8],false);
          }
          pvVar5 = (void *)*puVar8;
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)puVar8 + 0x24) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar8 + 4) * 4) != 0) {
                memset((void *)puVar8[3],0,
                       (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar8 + 4) * 4)
                       << 2);
              }
              *(undefined4 *)((long)puVar8 + 0x24) = 0;
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static((void *)puVar8[2],false);
            Memory::free_static((void *)puVar8[1],false);
            Memory::free_static((void *)puVar8[3],false);
          }
          uVar10 = (ulong)*(uint *)(this + 0x18);
          puVar11 = *(undefined8 **)(this + 8);
        }
        uVar7 = (ulong)*(uint *)(this + 0x1c);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar7);
      goto LAB_0011c732;
    }
    if (uVar3 != 0) goto LAB_0011c773;
    Memory::free_static((void *)*puVar11,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar11 = *(undefined8 **)(this + 8);
LAB_0011c773:
  if (puVar11 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar11,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasCull::Canvas, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasCull::Canvas,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasCull::Canvas,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererCanvasRender::Light, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRender::Light,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasRender::Light,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001234a8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererCanvasRender::LightOccluderInstance, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRender::LightOccluderInstance,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasRender::LightOccluderInstance,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00123448;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RID_Alloc<RendererCanvasCull::Item, true>::initialize_rid(RID) */

void __thiscall
RID_Alloc<RendererCanvasCull::Item,true>::initialize_rid
          (RID_Alloc<RendererCanvasCull::Item,true> *this,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  long in_FS_OFFSET;
  
  uVar2 = _LC6;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x1c)) {
      puVar6 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0x298 +
               *(long *)(*(long *)(this + 8) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar6 + 0x52) < 0) {
        uVar7 = (uint)(param_2 >> 0x20);
        if (uVar7 == (*(uint *)(puVar6 + 0x52) & 0x7fffffff)) {
          *(uint *)(puVar6 + 0x52) = uVar7;
          *(undefined2 *)((long)puVar6 + 0x54) = 0x100;
          puVar6[0x15] = 0x3f80000000000000;
          *(undefined1 (*) [16])(puVar6 + 0xd) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar6 + 0x22) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar6 + 0x10) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar6 + 0x19) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar6 + 0x1b) = (undefined1  [16])0x0;
          puVar6[8] = 0;
          *(undefined1 *)(puVar6 + 9) = 0;
          puVar6[0xb] = 0;
          puVar6[0xc] = 0;
          *(undefined4 *)(puVar6 + 0xf) = 0xffffffff;
          *(undefined8 *)((long)puVar6 + 0xec) = 0;
          *(undefined4 *)((long)puVar6 + 0xf4) = 1;
          puVar6[0x1f] = 0;
          puVar6[0x20] = 0;
          puVar6[0x21] = 0;
          puVar6[0x25] = 0;
          puVar6[0x27] = 0;
          *(undefined4 *)(puVar6 + 0x26) = 0;
          *(undefined8 *)((long)puVar6 + 0x4c) = 1;
          puVar6[0x28] = 0;
          puVar6[0x14] = 0x3f800000;
          puVar6[0x16] = 0;
          puVar6[0x17] = 0;
          puVar6[0x18] = 0;
          *(undefined2 *)(puVar6 + 0x1d) = 0;
          *(undefined1 *)((long)puVar6 + 0xea) = 0;
          puVar6[1] = 0x3f800000;
          *(undefined4 *)(puVar6 + 0x12) = uVar2;
          *(undefined4 *)((long)puVar6 + 0x94) = uVar2;
          *(undefined4 *)(puVar6 + 0x13) = uVar2;
          *(undefined4 *)((long)puVar6 + 0x9c) = uVar2;
          puVar6[2] = 0x3f80000000000000;
          uVar4 = _LC276;
          uVar3 = __LC140;
          puVar6[5] = 0x3f80000000000000;
          *(undefined1 (*) [16])(puVar6 + 0x29) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar6 + 0x3b) = (undefined1  [16])0x0;
          *(byte *)(puVar6 + 7) = *(byte *)(puVar6 + 7) & 0x80 | 0x22;
          *puVar6 = &PTR__Item_00123408;
          uVar5 = _LC39;
          *(undefined1 (*) [16])(puVar6 + 0x41) = (undefined1  [16])0x0;
          puVar6[0x45] = uVar5;
          puVar6[0x4c] = uVar5;
          *(undefined1 (*) [16])(puVar6 + 0x43) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar6 + 0x48) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar6 + 0x4a) = (undefined1  [16])0x0;
          puVar6[3] = 0;
          puVar6[4] = 0x3f800000;
          puVar6[6] = 0;
          *(undefined4 *)(puVar6 + 0x39) = 0xffffffff;
          *(undefined4 *)(puVar6 + 0x40) = 0;
          *(undefined4 *)(puVar6 + 0x46) = 0xffffffff;
          puVar6[0x4d] = 0;
          puVar6[0x4f] = 0;
          puVar6[0x50] = 0;
          puVar6[0x4e] = puVar6;
          *(undefined1 *)(puVar6 + 0x51) = 0;
          *(undefined1 *)(puVar6 + 0x32) = 1;
          puVar6[0x2b] = 0;
          *(undefined4 *)(puVar6 + 0x2c) = 0;
          *(undefined1 *)(puVar6 + 0x31) = 0;
          puVar6[0x33] = uVar3;
          puVar6[0x34] = uVar4;
          *(undefined4 *)(puVar6 + 0x2d) = uVar2;
          *(undefined4 *)((long)puVar6 + 0x16c) = uVar2;
          *(undefined4 *)(puVar6 + 0x2e) = uVar2;
          *(undefined4 *)((long)puVar6 + 0x174) = uVar2;
          *(undefined4 *)(puVar6 + 0x2f) = uVar2;
          *(undefined4 *)((long)puVar6 + 0x17c) = uVar2;
          *(undefined4 *)(puVar6 + 0x30) = uVar2;
          *(undefined4 *)((long)puVar6 + 0x184) = uVar2;
          *(undefined2 *)((long)puVar6 + 0x164) = 1;
          *(undefined4 *)((long)puVar6 + 0x18c) = 0;
          *(undefined4 *)((long)puVar6 + 0x194) = 0xffffffff;
          puVar6[0x37] = 0;
          puVar6[0x38] = 0;
          puVar6[0x3d] = puVar6;
          puVar6[0x35] = 0x3f800000;
          puVar6[0x36] = 0x3f80000000000000;
          puVar6[0x3e] = RendererCanvasCull::_dependency_changed;
          puVar6[0x3f] = RendererCanvasCull::_dependency_deleted;
          if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_0011cf9b;
        }
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0xfc,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to initialize the wrong RID",0,0);
      }
      else {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0xf8,
                         "Method/function failed. Returning: nullptr",
                         "Initializing already initialized RID",0,0);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
    return;
  }
LAB_0011cf9b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RID_Alloc<RendererCanvasRender::Light, true>::initialize_rid(RID) */

void __thiscall
RID_Alloc<RendererCanvasRender::Light,true>::initialize_rid
          (RID_Alloc<RendererCanvasRender::Light,true> *this,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1c))) {
    pbVar4 = (byte *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0x138 +
                     *(long *)(*(long *)(this + 8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
    if ((int)*(uint *)(pbVar4 + 0x130) < 0) {
      uVar6 = (uint)(param_2 >> 0x20);
      if (uVar6 == (*(uint *)(pbVar4 + 0x130) & 0x7fffffff)) {
        *(uint *)(pbVar4 + 0x130) = uVar6;
        *(undefined1 (*) [16])(pbVar4 + 0xf8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar4 + 0x108) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar4 + 0x118) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar4 + 0x9c) = (undefined1  [16])0x0;
        uVar1 = _LC6;
        *pbVar4 = *pbVar4 & 0xf8 | 5;
        pbVar4[0x48] = 0;
        pbVar4[0x49] = 0;
        pbVar4[0x4a] = 0x80;
        pbVar4[0x4b] = 0x3f;
        pbVar4[0x4c] = 0;
        pbVar4[0x4d] = 0;
        pbVar4[0x4e] = 0x80;
        pbVar4[0x4f] = 0x3f;
        pbVar4[0x78] = 0;
        pbVar4[0x79] = 0;
        pbVar4[0x7a] = 0;
        pbVar4[0x7b] = 0;
        pbVar4[0x7c] = 0;
        pbVar4[0x7d] = 0;
        pbVar4[0x7e] = 0;
        pbVar4[0x7f] = 0;
        pbVar4[0x80] = 0;
        pbVar4[0x81] = 0;
        pbVar4[0x82] = 0;
        pbVar4[0x83] = 0;
        pbVar4[0x84] = 0;
        pbVar4[0x85] = 0;
        pbVar4[0x86] = 0;
        pbVar4[0x87] = 0;
        pbVar4[0x88] = 0;
        pbVar4[0x89] = 0;
        pbVar4[0x8a] = 0;
        pbVar4[0x8b] = 0;
        pbVar4[0x8c] = 0;
        pbVar4[0x8d] = 0;
        pbVar4[0x8e] = 0;
        pbVar4[0x8f] = 0;
        pbVar4[0xdc] = 0;
        pbVar4[0xdd] = 0;
        pbVar4[0xde] = 0x80;
        pbVar4[0xdf] = 0x3f;
        pbVar4[0xe0] = 0;
        pbVar4[0xe1] = 0;
        pbVar4[0xe2] = 0;
        pbVar4[0xe3] = 0;
        pbVar4[0xe4] = 0;
        pbVar4[0xe5] = 0;
        pbVar4[0xe6] = 0;
        pbVar4[0xe7] = 0;
        pbVar4[0xe8] = 0;
        pbVar4[0xe9] = 0;
        pbVar4[0xea] = 0x80;
        pbVar4[0xeb] = 0x3f;
        pbVar4[0xec] = 0;
        pbVar4[0xed] = 0;
        pbVar4[0xee] = 0;
        pbVar4[0xef] = 0;
        pbVar4[0xf0] = 0;
        pbVar4[0xf1] = 0;
        pbVar4[0xf2] = 0;
        pbVar4[0xf3] = 0;
        pbVar4[0x90] = 0;
        pbVar4[0x94] = 0;
        pbVar4[0x95] = 8;
        pbVar4[0x96] = 0;
        pbVar4[0x97] = 0;
        pbVar4[0x98] = 0;
        pbVar4[0x99] = 0;
        pbVar4[0x9a] = 0;
        pbVar4[0x9b] = 0;
        pbVar4[0xac] = 0;
        pbVar4[0xad] = 0;
        pbVar4[0xae] = 0;
        pbVar4[0xaf] = 0;
        pbVar4[0xb0] = 0;
        pbVar4[0xb1] = 0;
        pbVar4[0xb2] = 0;
        pbVar4[0xb3] = 0;
        pbVar4[0xb4] = 0;
        pbVar4[0xb5] = 0;
        pbVar4[0xb6] = 0;
        pbVar4[0xb7] = 0;
        pbVar4[0xb8] = 0;
        pbVar4[0xb9] = 0;
        pbVar4[0xba] = 0;
        pbVar4[0xbb] = 0;
        pbVar4[0xbc] = 0;
        pbVar4[0xbd] = 0;
        pbVar4[0xbe] = 0;
        pbVar4[0xbf] = 0;
        pbVar4[0xc0] = 0;
        pbVar4[0xc1] = 0;
        pbVar4[0xc2] = 0x80;
        pbVar4[0xc3] = 0x3f;
        pbVar4[0xc4] = 0;
        pbVar4[0xc5] = 0;
        pbVar4[0xc6] = 0;
        pbVar4[199] = 0;
        pbVar4[200] = 0;
        pbVar4[0xc9] = 0;
        pbVar4[0xca] = 0;
        pbVar4[0xcb] = 0;
        pbVar4[0xcc] = 0;
        pbVar4[0xcd] = 0;
        pbVar4[0xce] = 0x80;
        pbVar4[0xcf] = 0x3f;
        pbVar4[0xd0] = 0;
        pbVar4[0xd1] = 0;
        pbVar4[0xd2] = 0;
        pbVar4[0xd3] = 0;
        pbVar4[0xd4] = 0;
        pbVar4[0xd5] = 0;
        pbVar4[0xd6] = 0;
        pbVar4[0xd7] = 0;
        pbVar4[0x128] = 0xff;
        pbVar4[0x129] = 0xff;
        pbVar4[0x12a] = 0xff;
        pbVar4[299] = 0xff;
        pbVar4[0x14] = 0;
        pbVar4[0x15] = 0;
        pbVar4[0x16] = 0x80;
        pbVar4[0x17] = 0x3f;
        pbVar4[0x18] = 0;
        pbVar4[0x19] = 0;
        pbVar4[0x1a] = 0;
        pbVar4[0x1b] = 0;
        pbVar4[0x1c] = 0;
        pbVar4[0x1d] = 0;
        pbVar4[0x1e] = 0;
        pbVar4[0x1f] = 0;
        pbVar4[0x20] = 0;
        pbVar4[0x21] = 0;
        pbVar4[0x22] = 0x80;
        pbVar4[0x23] = 0x3f;
        pbVar4[0x24] = 0;
        pbVar4[0x25] = 0;
        pbVar4[0x26] = 0;
        pbVar4[0x27] = 0;
        pbVar4[0x28] = 0;
        pbVar4[0x29] = 0;
        pbVar4[0x2a] = 0;
        pbVar4[0x2b] = 0;
        pbVar4[0x2c] = 0;
        pbVar4[0x2d] = 0;
        pbVar4[0x2e] = 0x80;
        pbVar4[0x2f] = 0x3f;
        pbVar4[0x30] = 0;
        pbVar4[0x31] = 0;
        pbVar4[0x32] = 0;
        pbVar4[0x33] = 0;
        pbVar4[0x34] = 0;
        pbVar4[0x35] = 0;
        pbVar4[0x36] = 0;
        pbVar4[0x37] = 0;
        pbVar4[0x38] = 0;
        pbVar4[0x39] = 0;
        pbVar4[0x3a] = 0x80;
        pbVar4[0x3b] = 0x3f;
        pbVar4[0x3c] = 0;
        pbVar4[0x3d] = 0;
        pbVar4[0x3e] = 0;
        pbVar4[0x3f] = 0;
        pbVar4[0x40] = 0;
        pbVar4[0x41] = 0;
        pbVar4[0x42] = 0;
        pbVar4[0x43] = 0;
        pbVar4[0x44] = 0;
        pbVar4[0x45] = 0;
        pbVar4[0x46] = 0;
        pbVar4[0x47] = 0;
        *(undefined4 *)(pbVar4 + 4) = uVar1;
        *(undefined4 *)(pbVar4 + 8) = uVar1;
        *(undefined4 *)(pbVar4 + 0xc) = uVar1;
        *(undefined4 *)(pbVar4 + 0x10) = uVar1;
        uVar3 = _LC169;
        uVar2 = _UNK_00123748;
        uVar5 = __LC168;
        pbVar4[0x68] = 0;
        pbVar4[0x69] = 0x40;
        pbVar4[0x6a] = 0x1c;
        pbVar4[0x6b] = 0x46;
        pbVar4[0x6c] = 0;
        pbVar4[0x6d] = 0;
        pbVar4[0x6e] = 0;
        pbVar4[0x6f] = 0;
        *(undefined8 *)(pbVar4 + 0x60) = uVar3;
        pbVar4[0x70] = 0;
        pbVar4[0x71] = 0;
        pbVar4[0x72] = 0;
        pbVar4[0x73] = 0;
        *(undefined8 *)(pbVar4 + 0x50) = uVar5;
        *(undefined8 *)(pbVar4 + 0x58) = uVar2;
        return;
      }
      pcVar7 = "Attempting to initialize the wrong RID";
      uVar5 = 0xfc;
    }
    else {
      pcVar7 = "Initializing already initialized RID";
      uVar5 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar5,
                     "Method/function failed. Returning: nullptr",pcVar7,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                   "Parameter \"mem\" is null.",0,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011d2e8) */
/* WARNING: Removing unreachable block (ram,0x0011d418) */
/* WARNING: Removing unreachable block (ram,0x0011d5e0) */
/* WARNING: Removing unreachable block (ram,0x0011d424) */
/* WARNING: Removing unreachable block (ram,0x0011d42e) */
/* WARNING: Removing unreachable block (ram,0x0011d5c0) */
/* WARNING: Removing unreachable block (ram,0x0011d43a) */
/* WARNING: Removing unreachable block (ram,0x0011d444) */
/* WARNING: Removing unreachable block (ram,0x0011d5a0) */
/* WARNING: Removing unreachable block (ram,0x0011d450) */
/* WARNING: Removing unreachable block (ram,0x0011d45a) */
/* WARNING: Removing unreachable block (ram,0x0011d580) */
/* WARNING: Removing unreachable block (ram,0x0011d466) */
/* WARNING: Removing unreachable block (ram,0x0011d470) */
/* WARNING: Removing unreachable block (ram,0x0011d560) */
/* WARNING: Removing unreachable block (ram,0x0011d47c) */
/* WARNING: Removing unreachable block (ram,0x0011d486) */
/* WARNING: Removing unreachable block (ram,0x0011d540) */
/* WARNING: Removing unreachable block (ram,0x0011d492) */
/* WARNING: Removing unreachable block (ram,0x0011d49c) */
/* WARNING: Removing unreachable block (ram,0x0011d520) */
/* WARNING: Removing unreachable block (ram,0x0011d4a4) */
/* WARNING: Removing unreachable block (ram,0x0011d4ba) */
/* WARNING: Removing unreachable block (ram,0x0011d4c6) */
/* String vformat<char const*>(String const&, char const* const) */

String_conflict * vformat<char_const*>(String_conflict *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
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



/* WARNING: Removing unreachable block (ram,0x0011d760) */
/* WARNING: Removing unreachable block (ram,0x0011d890) */
/* WARNING: Removing unreachable block (ram,0x0011da09) */
/* WARNING: Removing unreachable block (ram,0x0011d89c) */
/* WARNING: Removing unreachable block (ram,0x0011d8a6) */
/* WARNING: Removing unreachable block (ram,0x0011d9eb) */
/* WARNING: Removing unreachable block (ram,0x0011d8b2) */
/* WARNING: Removing unreachable block (ram,0x0011d8bc) */
/* WARNING: Removing unreachable block (ram,0x0011d9cd) */
/* WARNING: Removing unreachable block (ram,0x0011d8c8) */
/* WARNING: Removing unreachable block (ram,0x0011d8d2) */
/* WARNING: Removing unreachable block (ram,0x0011d9af) */
/* WARNING: Removing unreachable block (ram,0x0011d8de) */
/* WARNING: Removing unreachable block (ram,0x0011d8e8) */
/* WARNING: Removing unreachable block (ram,0x0011d991) */
/* WARNING: Removing unreachable block (ram,0x0011d8f4) */
/* WARNING: Removing unreachable block (ram,0x0011d8fe) */
/* WARNING: Removing unreachable block (ram,0x0011d973) */
/* WARNING: Removing unreachable block (ram,0x0011d906) */
/* WARNING: Removing unreachable block (ram,0x0011d910) */
/* WARNING: Removing unreachable block (ram,0x0011d958) */
/* WARNING: Removing unreachable block (ram,0x0011d918) */
/* WARNING: Removing unreachable block (ram,0x0011d92e) */
/* WARNING: Removing unreachable block (ram,0x0011d93a) */
/* String vformat<int, char const*>(String const&, int const, char const* const) */

String_conflict * vformat<int,char_const*>(String_conflict *param_1,int param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,(int)param_3);
  Variant::Variant(local_70,in_RCX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

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
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar10 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0011dde0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x10 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_0011dde0;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar7 = _realloc(this,lVar11), (int)uVar7 != 0)) {
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
  if (lVar11 == lVar4) {
LAB_0011dd4c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
    if (param_1 <= lVar4) goto LAB_0011dce4;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011dd4c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _LC276;
  uVar7 = __LC140;
  puVar6 = puVar8 + lVar4 * 2;
  puVar9 = puVar6 + (param_1 - lVar4) * 2;
  do {
    *puVar6 = uVar7;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
  } while (puVar9 != puVar6);
LAB_0011dce4:
  puVar8[-1] = param_1;
  return 0;
}



/* void memdelete<HashMapElement<StringName, InstanceUniforms::Item> >(HashMapElement<StringName,
   InstanceUniforms::Item>*) */

void memdelete<HashMapElement<StringName,InstanceUniforms::Item>>(HashMapElement *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x70) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x60) != 0)) {
    StringName::unref();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[*(int *)(param_1 + 0x38)] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[*(int *)(param_1 + 0x20)] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* RendererCanvasCull::Item::~Item() */

void __thiscall RendererCanvasCull::Item::~Item(Item *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  Item *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__Item_00123408;
  plVar1 = *(long **)(this + 0x268);
  if (plVar1 != (long *)0x0) {
    lVar6 = *(long *)(this + 0x278);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(this + 0x280);
    }
    lVar8 = *(long *)(this + 0x280);
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x10) = lVar6;
    }
    if (this + 0x268 == (Item *)*plVar1) {
      *plVar1 = *(long *)(this + 0x278);
    }
    if (this + 0x268 == (Item *)plVar1[1]) {
      plVar1[1] = lVar8;
    }
  }
  pvVar7 = *(void **)(this + 0x240);
  if (pvVar7 == (void *)0x0) {
LAB_0011e065:
    iVar10 = *(int *)(this + 0x22c);
    if (iVar10 != 0) goto LAB_0011e075;
LAB_0011e2f5:
    pvVar7 = *(void **)(this + 0x208);
    if (pvVar7 != (void *)0x0) {
LAB_0011e0f6:
      Memory::free_static(pvVar7,false);
      Memory::free_static(*(void **)(this + 0x218),false);
      Memory::free_static(*(void **)(this + 0x210),false);
      Memory::free_static(*(void **)(this + 0x220),false);
    }
  }
  else {
    if (*(int *)(this + 0x264) != 0) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x260) * 4);
      if (uVar4 == 0) {
        *(undefined4 *)(this + 0x264) = 0;
        *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x248) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x248) + lVar6) = 0;
            memdelete<HashMapElement<StringName,InstanceUniforms::Item>>
                      (*(HashMapElement **)((long)pvVar7 + lVar6 * 2));
            pvVar7 = *(void **)(this + 0x240);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar4 << 2);
        *(undefined4 *)(this + 0x264) = 0;
        *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0011e065;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x248),false);
    iVar10 = *(int *)(this + 0x22c);
    if (iVar10 == 0) goto LAB_0011e2f5;
LAB_0011e075:
    lVar6 = *(long *)(this + 0x208);
    for (lVar8 = 0; local_48 = this + 0x1e8,
        HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
        ::erase(*(HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
                  **)(lVar6 + lVar8 * 8),(DependencyTracker **)&local_48), (int)lVar8 + 1 < iVar10;
        lVar8 = lVar8 + 1) {
    }
    pvVar7 = *(void **)(this + 0x208);
    if (pvVar7 != (void *)0x0) {
      if (*(int *)(this + 0x22c) != 0) {
        if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x228) * 4) != 0) {
          memset(*(void **)(this + 0x220),0,
                 (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x228) * 4) * 4);
        }
        *(undefined4 *)(this + 0x22c) = 0;
      }
      goto LAB_0011e0f6;
    }
  }
  if (*(long *)(this + 0x1d8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1d8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar6 = *(long *)(this + 0x1d8);
      *(undefined8 *)(this + 0x1d8) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  puVar9 = *(undefined8 **)(this + 0x110);
  *(undefined ***)this = &PTR__Item_001233e8;
  puVar11 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    while( true ) {
      puVar2 = (undefined8 *)puVar9[1];
      if (puVar11 == puVar9) {
        (**(code **)*puVar9)(puVar11);
        Memory::free_static(puVar11,false);
        *(undefined8 *)(this + 0x110) = 0;
      }
      else {
        (**(code **)*puVar9)();
      }
      if (puVar2 == (undefined8 *)0x0) break;
      puVar9 = puVar2;
      puVar11 = *(undefined8 **)(this + 0x110);
    }
  }
  if (*(long *)(this + 0x128) == 0) {
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    puVar3 = *(undefined4 **)(this + 0x128);
  }
  else {
    uVar4 = *(uint *)(*(long *)(this + 0x128) + -8);
    if (*(int *)(this + 0x130) + 1U <= uVar4) {
      uVar4 = *(int *)(this + 0x130) + 1U;
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    puVar3 = *(undefined4 **)(this + 0x128);
    if (uVar4 != 0) {
      puVar5 = puVar3;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar3 + (ulong)uVar4 * 4);
    }
  }
  this[0x38] = (Item)((byte)this[0x38] & 0xfe);
  *(undefined4 *)(this + 0x130) = 0;
  this[0x55] = (Item)0x1;
  this[0xe9] = (Item)0x0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  if (puVar3 != (undefined4 *)0x0) {
    lVar6 = 0;
    do {
      if (*(long *)(puVar3 + -2) <= lVar6) {
        pvVar7 = *(void **)(this + 0x88);
        if (pvVar7 != (void *)0x0) goto LAB_0011e269;
        goto LAB_0011e277;
      }
      Memory::free_static(*(void **)(puVar3 + lVar6 * 4 + 2),false);
      puVar3 = *(undefined4 **)(this + 0x128);
      lVar6 = lVar6 + 1;
    } while (puVar3 != (undefined4 *)0x0);
  }
  pvVar7 = *(void **)(this + 0x88);
  if (pvVar7 != (void *)0x0) {
LAB_0011e269:
    Memory::free_static(pvVar7,false);
    puVar3 = *(undefined4 **)(this + 0x128);
LAB_0011e277:
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar3 + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *(long *)(this + 0x128);
        *(undefined8 *)(this + 0x128) = 0;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(lVar6 + -0x10),false);
          return;
        }
        goto LAB_0011e3c7;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011e3c7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasCull::Item::~Item() */

void __thiscall RendererCanvasCull::Item::~Item(Item *this)

{
  ~Item(this);
  operator_delete(this,0x290);
  return;
}



/* RID_Alloc<RendererCanvasCull::Item, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasCull::Item,true>::~RID_Alloc(RID_Alloc<RendererCanvasCull::Item,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  Item *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00123488;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_0011e51b:
    if ((uint)uVar4 < uVar8) goto LAB_0011e55b;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar5[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
      puVar5 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar8);
    print_error((String_conflict *)&local_48);
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
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        this_00 = (Item *)((uVar6 % (ulong)uVar8) * 0x298 + puVar5[uVar6 / uVar8]);
        if (-1 < *(int *)(this_00 + 0x290)) {
          RendererCanvasCull::Item::~Item(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_0011e51b;
    }
    if (uVar8 != 0) goto LAB_0011e55b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_0011e55b:
  if (puVar5 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar5,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasCull::Item, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasCull::Item,true>::~RID_Alloc(RID_Alloc<RendererCanvasCull::Item,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  Item *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00123488;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_0011e75b:
    if ((uint)uVar4 < uVar8) goto LAB_0011e79b;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar5[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
      puVar5 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar8);
    print_error((String_conflict *)&local_48);
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
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        this_00 = (Item *)((uVar6 % (ulong)uVar8) * 0x298 + puVar5[uVar6 / uVar8]);
        if (-1 < *(int *)(this_00 + 0x290)) {
          RendererCanvasCull::Item::~Item(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_0011e75b;
    }
    if (uVar8 != 0) goto LAB_0011e79b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_0011e79b:
  if (puVar5 != (undefined8 *)0x0) {
    Memory::free_static(puVar5,false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(this,0x58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RendererCanvasCull::Canvas::ChildItem>::_realloc(long) */

undefined8 __thiscall
CowData<RendererCanvasCull::Canvas::ChildItem>::_realloc
          (CowData<RendererCanvasCull::Canvas::ChildItem> *this,long param_1)

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
/* Error CowData<RendererCanvasCull::Canvas::ChildItem>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererCanvasCull::Canvas::ChildItem>::resize<false>
          (CowData<RendererCanvasCull::Canvas::ChildItem> *this,long param_1)

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
LAB_0011eb00:
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
  if (lVar7 == 0) goto LAB_0011eb00;
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
LAB_0011ea6c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0011ea01;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011ea6c;
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
LAB_0011ea01:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0011ec88) */
/* WARNING: Removing unreachable block (ram,0x0011edb8) */
/* WARNING: Removing unreachable block (ram,0x0011ef80) */
/* WARNING: Removing unreachable block (ram,0x0011edc4) */
/* WARNING: Removing unreachable block (ram,0x0011edce) */
/* WARNING: Removing unreachable block (ram,0x0011ef60) */
/* WARNING: Removing unreachable block (ram,0x0011edda) */
/* WARNING: Removing unreachable block (ram,0x0011ede4) */
/* WARNING: Removing unreachable block (ram,0x0011ef40) */
/* WARNING: Removing unreachable block (ram,0x0011edf0) */
/* WARNING: Removing unreachable block (ram,0x0011edfa) */
/* WARNING: Removing unreachable block (ram,0x0011ef20) */
/* WARNING: Removing unreachable block (ram,0x0011ee06) */
/* WARNING: Removing unreachable block (ram,0x0011ee10) */
/* WARNING: Removing unreachable block (ram,0x0011ef00) */
/* WARNING: Removing unreachable block (ram,0x0011ee1c) */
/* WARNING: Removing unreachable block (ram,0x0011ee26) */
/* WARNING: Removing unreachable block (ram,0x0011eee0) */
/* WARNING: Removing unreachable block (ram,0x0011ee32) */
/* WARNING: Removing unreachable block (ram,0x0011ee3c) */
/* WARNING: Removing unreachable block (ram,0x0011eec0) */
/* WARNING: Removing unreachable block (ram,0x0011ee44) */
/* WARNING: Removing unreachable block (ram,0x0011ee5a) */
/* WARNING: Removing unreachable block (ram,0x0011ee66) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

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



/* RID_Alloc<RendererCanvasCull::Canvas, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererCanvasCull::Canvas,true>::allocate_rid
          (RID_Alloc<RendererCanvasCull::Canvas,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar4 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        lVar3 = local_58;
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
        lVar3 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      uVar13 = 0;
      goto LAB_0011f1e8;
    }
    uVar13 = (ulong)uVar7;
    lVar3 = *(long *)(this + 8);
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0xe0,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0xd8);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x38;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0xe0 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0xd8) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_0011f1e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasCull::Item, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererCanvasCull::Item,true>::allocate_rid
          (RID_Alloc<RendererCanvasCull::Item,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar4 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        lVar3 = local_58;
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
        lVar3 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      uVar13 = 0;
      goto LAB_0011f546;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar7;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x298,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x290);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0xa6;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0x298 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x290) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_0011f546:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasRender::Light, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererCanvasRender::Light,true>::allocate_rid
          (RID_Alloc<RendererCanvasRender::Light,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar4 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        lVar3 = local_58;
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
        lVar3 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      uVar13 = 0;
      goto LAB_0011f8a6;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar7;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x138,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x130);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x4e;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0x138 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x130) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_0011f8a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasRender::LightOccluderInstance, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererCanvasRender::LightOccluderInstance,true>::allocate_rid
          (RID_Alloc<RendererCanvasRender::LightOccluderInstance,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar4 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        lVar3 = local_58;
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
        lVar3 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      uVar10 = 0;
      goto LAB_0011fc15;
    }
    uVar10 = (ulong)uVar7;
    lVar3 = *(long *)(this + 8);
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x98,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar10 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar10 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar10 * 8);
      lVar9 = 0;
      puVar11 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar10 * 8) + 0x90);
      do {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 0x26;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar12 = (int)RID_AllocBase::base_id + 1;
  uVar13 = uVar12 & 0x7fffffff;
  if (uVar13 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar10 = CONCAT44(uVar12,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(*(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
            ((ulong)uVar7 % (ulong)uVar2) * 0x98 + 0x90) = uVar13 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_0011fc15:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasCull::LightOccluderPolygon, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true>::allocate_rid
          (RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar4 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        lVar3 = local_58;
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
        lVar3 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      uVar13 = 0;
      goto LAB_0011ff69;
    }
    uVar13 = (ulong)uVar7;
    lVar3 = *(long *)(this + 8);
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x50,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x48);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x14;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0x50 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x48) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_0011ff69:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RendererCanvasCull::Item*>::_realloc(long) */

undefined8 __thiscall
CowData<RendererCanvasCull::Item*>::_realloc(CowData<RendererCanvasCull::Item*> *this,long param_1)

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
/* Error CowData<RendererCanvasCull::Item*>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererCanvasCull::Item*>::resize<false>
          (CowData<RendererCanvasCull::Item*> *this,long param_1)

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
    lVar3 = lVar9 * 8;
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
LAB_001203f0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_001203f0;
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
        goto LAB_00120301;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00120301:
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



/* void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasCull::Canvas, true>
   >(RID_Owner<RendererCanvasCull::Canvas, true>&, char const*) */

void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasCull::Canvas,true>>
               (RID_Owner *param_1,char *param_2)

{
  pthread_mutex_t *__mutex;
  undefined1 (*pauVar1) [16];
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __mutex = (pthread_mutex_t *)(param_2 + 0x30);
  iVar8 = pthread_mutex_lock(__mutex);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  pauVar11 = (undefined1 (*) [16])0x0;
  uVar13 = 0;
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(__mutex);
      return;
    }
  }
  else {
    do {
      uVar3 = *(uint *)((uVar13 % (ulong)*(uint *)(param_2 + 0x18)) * 0xe0 +
                        *(long *)(*(long *)(param_2 + 8) + (uVar13 / *(uint *)(param_2 + 0x18)) * 8)
                       + 0xd8);
      if (uVar3 != 0xffffffff) {
        if (pauVar11 == (undefined1 (*) [16])0x0) {
          pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar11[1] = 0;
          *pauVar11 = (undefined1  [16])0x0;
        }
        puVar9 = (ulong *)operator_new(0x20,DefaultAllocator::alloc);
        uVar4 = *(ulong *)(*pauVar11 + 8);
        puVar9[1] = 0;
        *puVar9 = (ulong)uVar3 << 0x20 | uVar13;
        puVar9[2] = uVar4;
        puVar9[3] = (ulong)pauVar11;
        if (uVar4 != 0) {
          *(ulong **)(uVar4 + 8) = puVar9;
        }
        lVar10 = *(long *)*pauVar11;
        *(ulong **)(*pauVar11 + 8) = puVar9;
        if (lVar10 == 0) {
          *(ulong **)*pauVar11 = puVar9;
        }
        *(int *)pauVar11[1] = *(int *)pauVar11[1] + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x1c));
    pthread_mutex_unlock(__mutex);
    if (pauVar11 != (undefined1 (*) [16])0x0) {
      uVar3 = *(uint *)pauVar11[1];
      if (uVar3 != 0) {
        local_60 = 0;
        if (uVar3 == 1) {
          local_50 = 0x1e;
          local_58 = "1 RID of type \"%s\" was leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<char_const*>((String_conflict *)&local_58,(char *)&local_60);
          uVar12 = 0xa75;
        }
        else {
          local_50 = 0x21;
          local_58 = "%d RIDs of type \"%s\" were leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<int,char_const*>
                    ((String_conflict *)&local_58,(int)(StrRange *)&local_60,(char *)(ulong)uVar3);
          uVar12 = 0xa77;
        }
        _err_print_error("_free_rids","servers/rendering/renderer_canvas_cull.cpp",uVar12,&local_58,
                         0,1);
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar2 = (long *)(local_58 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar10 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar2 = (long *)(local_60 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        for (lVar10 = *(long *)*pauVar11; lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
          free((RendererCanvasCull *)param_1);
        }
      }
      if (pauVar11 != (undefined1 (*) [16])0x0) {
        do {
          while( true ) {
            pvVar5 = *(void **)*pauVar11;
            if (pvVar5 == (void *)0x0) {
              if (*(int *)pauVar11[1] != 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  _err_print_error("~List","./core/templates/list.h",0x316,
                                   "Condition \"_data->size_cache\" is true.",0,0);
                  return;
                }
                goto LAB_001208a8;
              }
              goto LAB_0012061d;
            }
            if (*(undefined1 (**) [16])((long)pvVar5 + 0x18) != pauVar11) break;
            lVar10 = *(long *)((long)pvVar5 + 8);
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            *(long *)*pauVar11 = lVar10;
            if (pvVar5 == *(void **)(*pauVar11 + 8)) {
              *(long *)(*pauVar11 + 8) = lVar6;
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 8) = lVar10;
              lVar10 = *(long *)((long)pvVar5 + 8);
            }
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x10) = lVar6;
            }
            Memory::free_static(pvVar5,false);
            pauVar1 = pauVar11 + 1;
            *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
            if (*(int *)*pauVar1 == 0) goto LAB_0012061d;
          }
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        } while (*(int *)pauVar11[1] != 0);
LAB_0012061d:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pauVar11,false);
          return;
        }
        goto LAB_001208a8;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_001208a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasCull::Item, true>
   >(RID_Owner<RendererCanvasCull::Item, true>&, char const*) */

void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasCull::Item,true>>
               (RID_Owner *param_1,char *param_2)

{
  pthread_mutex_t *__mutex;
  undefined1 (*pauVar1) [16];
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __mutex = (pthread_mutex_t *)(param_2 + 0x30);
  iVar8 = pthread_mutex_lock(__mutex);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  pauVar11 = (undefined1 (*) [16])0x0;
  uVar13 = 0;
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(__mutex);
      return;
    }
  }
  else {
    do {
      uVar3 = *(uint *)((uVar13 % (ulong)*(uint *)(param_2 + 0x18)) * 0x298 +
                        *(long *)(*(long *)(param_2 + 8) + (uVar13 / *(uint *)(param_2 + 0x18)) * 8)
                       + 0x290);
      if (uVar3 != 0xffffffff) {
        if (pauVar11 == (undefined1 (*) [16])0x0) {
          pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar11[1] = 0;
          *pauVar11 = (undefined1  [16])0x0;
        }
        puVar9 = (ulong *)operator_new(0x20,DefaultAllocator::alloc);
        uVar4 = *(ulong *)(*pauVar11 + 8);
        puVar9[1] = 0;
        *puVar9 = (ulong)uVar3 << 0x20 | uVar13;
        puVar9[2] = uVar4;
        puVar9[3] = (ulong)pauVar11;
        if (uVar4 != 0) {
          *(ulong **)(uVar4 + 8) = puVar9;
        }
        lVar10 = *(long *)*pauVar11;
        *(ulong **)(*pauVar11 + 8) = puVar9;
        if (lVar10 == 0) {
          *(ulong **)*pauVar11 = puVar9;
        }
        *(int *)pauVar11[1] = *(int *)pauVar11[1] + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x1c));
    pthread_mutex_unlock(__mutex);
    if (pauVar11 != (undefined1 (*) [16])0x0) {
      uVar3 = *(uint *)pauVar11[1];
      if (uVar3 != 0) {
        local_60 = 0;
        if (uVar3 == 1) {
          local_50 = 0x1e;
          local_58 = "1 RID of type \"%s\" was leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<char_const*>((String_conflict *)&local_58,(char *)&local_60);
          uVar12 = 0xa75;
        }
        else {
          local_50 = 0x21;
          local_58 = "%d RIDs of type \"%s\" were leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<int,char_const*>
                    ((String_conflict *)&local_58,(int)(StrRange *)&local_60,(char *)(ulong)uVar3);
          uVar12 = 0xa77;
        }
        _err_print_error("_free_rids","servers/rendering/renderer_canvas_cull.cpp",uVar12,&local_58,
                         0,1);
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar2 = (long *)(local_58 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar10 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar2 = (long *)(local_60 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        for (lVar10 = *(long *)*pauVar11; lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
          free((RendererCanvasCull *)param_1);
        }
      }
      if (pauVar11 != (undefined1 (*) [16])0x0) {
        do {
          while( true ) {
            pvVar5 = *(void **)*pauVar11;
            if (pvVar5 == (void *)0x0) {
              if (*(int *)pauVar11[1] != 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  _err_print_error("~List","./core/templates/list.h",0x316,
                                   "Condition \"_data->size_cache\" is true.",0,0);
                  return;
                }
                goto LAB_00120ce8;
              }
              goto LAB_00120a55;
            }
            if (*(undefined1 (**) [16])((long)pvVar5 + 0x18) != pauVar11) break;
            lVar10 = *(long *)((long)pvVar5 + 8);
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            *(long *)*pauVar11 = lVar10;
            if (pvVar5 == *(void **)(*pauVar11 + 8)) {
              *(long *)(*pauVar11 + 8) = lVar6;
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 8) = lVar10;
              lVar10 = *(long *)((long)pvVar5 + 8);
            }
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x10) = lVar6;
            }
            Memory::free_static(pvVar5,false);
            pauVar1 = pauVar11 + 1;
            *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
            if (*(int *)*pauVar1 == 0) goto LAB_00120a55;
          }
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        } while (*(int *)pauVar11[1] != 0);
LAB_00120a55:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pauVar11,false);
          return;
        }
        goto LAB_00120ce8;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00120ce8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasRender::Light, true>
   >(RID_Owner<RendererCanvasRender::Light, true>&, char const*) */

void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasRender::Light,true>>
               (RID_Owner *param_1,char *param_2)

{
  pthread_mutex_t *__mutex;
  undefined1 (*pauVar1) [16];
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __mutex = (pthread_mutex_t *)(param_2 + 0x30);
  iVar8 = pthread_mutex_lock(__mutex);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  pauVar11 = (undefined1 (*) [16])0x0;
  uVar13 = 0;
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(__mutex);
      return;
    }
  }
  else {
    do {
      uVar3 = *(uint *)((uVar13 % (ulong)*(uint *)(param_2 + 0x18)) * 0x138 +
                        *(long *)(*(long *)(param_2 + 8) + (uVar13 / *(uint *)(param_2 + 0x18)) * 8)
                       + 0x130);
      if (uVar3 != 0xffffffff) {
        if (pauVar11 == (undefined1 (*) [16])0x0) {
          pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar11[1] = 0;
          *pauVar11 = (undefined1  [16])0x0;
        }
        puVar9 = (ulong *)operator_new(0x20,DefaultAllocator::alloc);
        uVar4 = *(ulong *)(*pauVar11 + 8);
        puVar9[1] = 0;
        *puVar9 = (ulong)uVar3 << 0x20 | uVar13;
        puVar9[2] = uVar4;
        puVar9[3] = (ulong)pauVar11;
        if (uVar4 != 0) {
          *(ulong **)(uVar4 + 8) = puVar9;
        }
        lVar10 = *(long *)*pauVar11;
        *(ulong **)(*pauVar11 + 8) = puVar9;
        if (lVar10 == 0) {
          *(ulong **)*pauVar11 = puVar9;
        }
        *(int *)pauVar11[1] = *(int *)pauVar11[1] + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x1c));
    pthread_mutex_unlock(__mutex);
    if (pauVar11 != (undefined1 (*) [16])0x0) {
      uVar3 = *(uint *)pauVar11[1];
      if (uVar3 != 0) {
        local_60 = 0;
        if (uVar3 == 1) {
          local_50 = 0x1e;
          local_58 = "1 RID of type \"%s\" was leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<char_const*>((String_conflict *)&local_58,(char *)&local_60);
          uVar12 = 0xa75;
        }
        else {
          local_50 = 0x21;
          local_58 = "%d RIDs of type \"%s\" were leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<int,char_const*>
                    ((String_conflict *)&local_58,(int)(StrRange *)&local_60,(char *)(ulong)uVar3);
          uVar12 = 0xa77;
        }
        _err_print_error("_free_rids","servers/rendering/renderer_canvas_cull.cpp",uVar12,&local_58,
                         0,1);
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar2 = (long *)(local_58 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar10 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar2 = (long *)(local_60 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        for (lVar10 = *(long *)*pauVar11; lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
          free((RendererCanvasCull *)param_1);
        }
      }
      if (pauVar11 != (undefined1 (*) [16])0x0) {
        do {
          while( true ) {
            pvVar5 = *(void **)*pauVar11;
            if (pvVar5 == (void *)0x0) {
              if (*(int *)pauVar11[1] != 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  _err_print_error("~List","./core/templates/list.h",0x316,
                                   "Condition \"_data->size_cache\" is true.",0,0);
                  return;
                }
                goto LAB_00121128;
              }
              goto LAB_00120e95;
            }
            if (*(undefined1 (**) [16])((long)pvVar5 + 0x18) != pauVar11) break;
            lVar10 = *(long *)((long)pvVar5 + 8);
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            *(long *)*pauVar11 = lVar10;
            if (pvVar5 == *(void **)(*pauVar11 + 8)) {
              *(long *)(*pauVar11 + 8) = lVar6;
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 8) = lVar10;
              lVar10 = *(long *)((long)pvVar5 + 8);
            }
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x10) = lVar6;
            }
            Memory::free_static(pvVar5,false);
            pauVar1 = pauVar11 + 1;
            *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
            if (*(int *)*pauVar1 == 0) goto LAB_00120e95;
          }
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        } while (*(int *)pauVar11[1] != 0);
LAB_00120e95:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pauVar11,false);
          return;
        }
        goto LAB_00121128;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00121128:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasRender::LightOccluderInstance, true>
   >(RID_Owner<RendererCanvasRender::LightOccluderInstance, true>&, char const*) */

void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasRender::LightOccluderInstance,true>>
               (RID_Owner *param_1,char *param_2)

{
  pthread_mutex_t *__mutex;
  undefined1 (*pauVar1) [16];
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __mutex = (pthread_mutex_t *)(param_2 + 0x30);
  iVar8 = pthread_mutex_lock(__mutex);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  pauVar11 = (undefined1 (*) [16])0x0;
  uVar13 = 0;
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(__mutex);
      return;
    }
  }
  else {
    do {
      uVar3 = *(uint *)(*(long *)(*(long *)(param_2 + 8) + (uVar13 / *(uint *)(param_2 + 0x18)) * 8)
                        + (uVar13 % (ulong)*(uint *)(param_2 + 0x18)) * 0x98 + 0x90);
      if (uVar3 != 0xffffffff) {
        if (pauVar11 == (undefined1 (*) [16])0x0) {
          pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar11[1] = 0;
          *pauVar11 = (undefined1  [16])0x0;
        }
        puVar9 = (ulong *)operator_new(0x20,DefaultAllocator::alloc);
        uVar4 = *(ulong *)(*pauVar11 + 8);
        puVar9[1] = 0;
        *puVar9 = (ulong)uVar3 << 0x20 | uVar13;
        puVar9[2] = uVar4;
        puVar9[3] = (ulong)pauVar11;
        if (uVar4 != 0) {
          *(ulong **)(uVar4 + 8) = puVar9;
        }
        lVar10 = *(long *)*pauVar11;
        *(ulong **)(*pauVar11 + 8) = puVar9;
        if (lVar10 == 0) {
          *(ulong **)*pauVar11 = puVar9;
        }
        *(int *)pauVar11[1] = *(int *)pauVar11[1] + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x1c));
    pthread_mutex_unlock(__mutex);
    if (pauVar11 != (undefined1 (*) [16])0x0) {
      uVar3 = *(uint *)pauVar11[1];
      if (uVar3 != 0) {
        local_60 = 0;
        if (uVar3 == 1) {
          local_50 = 0x1e;
          local_58 = "1 RID of type \"%s\" was leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<char_const*>((String_conflict *)&local_58,(char *)&local_60);
          uVar12 = 0xa75;
        }
        else {
          local_50 = 0x21;
          local_58 = "%d RIDs of type \"%s\" were leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<int,char_const*>
                    ((String_conflict *)&local_58,(int)(StrRange *)&local_60,(char *)(ulong)uVar3);
          uVar12 = 0xa77;
        }
        _err_print_error("_free_rids","servers/rendering/renderer_canvas_cull.cpp",uVar12,&local_58,
                         0,1);
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar2 = (long *)(local_58 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar10 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar2 = (long *)(local_60 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        for (lVar10 = *(long *)*pauVar11; lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
          free((RendererCanvasCull *)param_1);
        }
      }
      if (pauVar11 != (undefined1 (*) [16])0x0) {
        do {
          while( true ) {
            pvVar5 = *(void **)*pauVar11;
            if (pvVar5 == (void *)0x0) {
              if (*(int *)pauVar11[1] != 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  _err_print_error("~List","./core/templates/list.h",0x316,
                                   "Condition \"_data->size_cache\" is true.",0,0);
                  return;
                }
                goto LAB_00121568;
              }
              goto LAB_001212d5;
            }
            if (*(undefined1 (**) [16])((long)pvVar5 + 0x18) != pauVar11) break;
            lVar10 = *(long *)((long)pvVar5 + 8);
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            *(long *)*pauVar11 = lVar10;
            if (pvVar5 == *(void **)(*pauVar11 + 8)) {
              *(long *)(*pauVar11 + 8) = lVar6;
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 8) = lVar10;
              lVar10 = *(long *)((long)pvVar5 + 8);
            }
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x10) = lVar6;
            }
            Memory::free_static(pvVar5,false);
            pauVar1 = pauVar11 + 1;
            *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
            if (*(int *)*pauVar1 == 0) goto LAB_001212d5;
          }
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        } while (*(int *)pauVar11[1] != 0);
LAB_001212d5:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pauVar11,false);
          return;
        }
        goto LAB_00121568;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00121568:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasCull::LightOccluderPolygon, true>
   >(RID_Owner<RendererCanvasCull::LightOccluderPolygon, true>&, char const*) */

void RendererCanvasCull::_free_rids<RID_Owner<RendererCanvasCull::LightOccluderPolygon,true>>
               (RID_Owner *param_1,char *param_2)

{
  pthread_mutex_t *__mutex;
  undefined1 (*pauVar1) [16];
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __mutex = (pthread_mutex_t *)(param_2 + 0x30);
  iVar8 = pthread_mutex_lock(__mutex);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  pauVar11 = (undefined1 (*) [16])0x0;
  uVar13 = 0;
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(__mutex);
      return;
    }
  }
  else {
    do {
      uVar3 = *(uint *)((uVar13 % (ulong)*(uint *)(param_2 + 0x18)) * 0x50 +
                        *(long *)(*(long *)(param_2 + 8) + (uVar13 / *(uint *)(param_2 + 0x18)) * 8)
                       + 0x48);
      if (uVar3 != 0xffffffff) {
        if (pauVar11 == (undefined1 (*) [16])0x0) {
          pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar11[1] = 0;
          *pauVar11 = (undefined1  [16])0x0;
        }
        puVar9 = (ulong *)operator_new(0x20,DefaultAllocator::alloc);
        uVar4 = *(ulong *)(*pauVar11 + 8);
        puVar9[1] = 0;
        *puVar9 = (ulong)uVar3 << 0x20 | uVar13;
        puVar9[2] = uVar4;
        puVar9[3] = (ulong)pauVar11;
        if (uVar4 != 0) {
          *(ulong **)(uVar4 + 8) = puVar9;
        }
        lVar10 = *(long *)*pauVar11;
        *(ulong **)(*pauVar11 + 8) = puVar9;
        if (lVar10 == 0) {
          *(ulong **)*pauVar11 = puVar9;
        }
        *(int *)pauVar11[1] = *(int *)pauVar11[1] + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x1c));
    pthread_mutex_unlock(__mutex);
    if (pauVar11 != (undefined1 (*) [16])0x0) {
      uVar3 = *(uint *)pauVar11[1];
      if (uVar3 != 0) {
        local_60 = 0;
        if (uVar3 == 1) {
          local_50 = 0x1e;
          local_58 = "1 RID of type \"%s\" was leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<char_const*>((String_conflict *)&local_58,(char *)&local_60);
          uVar12 = 0xa75;
        }
        else {
          local_50 = 0x21;
          local_58 = "%d RIDs of type \"%s\" were leaked.";
          String::parse_latin1((StrRange *)&local_60);
          vformat<int,char_const*>
                    ((String_conflict *)&local_58,(int)(StrRange *)&local_60,(char *)(ulong)uVar3);
          uVar12 = 0xa77;
        }
        _err_print_error("_free_rids","servers/rendering/renderer_canvas_cull.cpp",uVar12,&local_58,
                         0,1);
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar2 = (long *)(local_58 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar10 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar2 = (long *)(local_60 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        for (lVar10 = *(long *)*pauVar11; lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
          free((RendererCanvasCull *)param_1);
        }
      }
      if (pauVar11 != (undefined1 (*) [16])0x0) {
        do {
          while( true ) {
            pvVar5 = *(void **)*pauVar11;
            if (pvVar5 == (void *)0x0) {
              if (*(int *)pauVar11[1] != 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  _err_print_error("~List","./core/templates/list.h",0x316,
                                   "Condition \"_data->size_cache\" is true.",0,0);
                  return;
                }
                goto LAB_00121998;
              }
              goto LAB_00121705;
            }
            if (*(undefined1 (**) [16])((long)pvVar5 + 0x18) != pauVar11) break;
            lVar10 = *(long *)((long)pvVar5 + 8);
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            *(long *)*pauVar11 = lVar10;
            if (pvVar5 == *(void **)(*pauVar11 + 8)) {
              *(long *)(*pauVar11 + 8) = lVar6;
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 8) = lVar10;
              lVar10 = *(long *)((long)pvVar5 + 8);
            }
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x10) = lVar6;
            }
            Memory::free_static(pvVar5,false);
            pauVar1 = pauVar11 + 1;
            *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
            if (*(int *)*pauVar1 == 0) goto LAB_00121705;
          }
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        } while (*(int *)pauVar11[1] != 0);
LAB_00121705:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pauVar11,false);
          return;
        }
        goto LAB_00121998;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00121998:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RendererCanvasRender::Item::CommandBlock>::_realloc(long) */

undefined8 __thiscall
CowData<RendererCanvasRender::Item::CommandBlock>::_realloc
          (CowData<RendererCanvasRender::Item::CommandBlock> *this,long param_1)

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
/* Error CowData<RendererCanvasRender::Item::CommandBlock>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererCanvasRender::Item::CommandBlock>::resize<false>
          (CowData<RendererCanvasRender::Item::CommandBlock> *this,long param_1)

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
    lVar3 = lVar8 * 0x10;
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
LAB_00121c90:
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
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00121c90;
  if (param_1 <= lVar8) {
    if ((lVar9 != lVar3) && (uVar6 = _realloc(this,lVar9), (int)uVar6 != 0)) {
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
  if (lVar9 == lVar3) {
LAB_00121bfc:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar7[-1];
    if (param_1 <= lVar3) goto LAB_00121b91;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar9);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00121bfc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar3 = 0;
  }
  puVar5 = puVar7 + lVar3 * 2;
  do {
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  } while (puVar5 != puVar7 + param_1 * 2);
LAB_00121b91:
  puVar7[-1] = param_1;
  return 0;
}



/* RendererCanvasRender::Item::CommandAnimationSlice*
   RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandAnimationSlice>() */

CommandAnimationSlice * __thiscall
RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandAnimationSlice>
          (Item *this)

{
  code *pcVar1;
  long lVar2;
  CommandAnimationSlice *pCVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (*(long *)(this + 0x110) == 0) {
    pCVar3 = (CommandAnimationSlice *)operator_new(0x38,"");
    *(undefined1 (*) [16])(pCVar3 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar3 + 0x28) = (undefined1  [16])0x0;
    *(undefined ***)pCVar3 = &PTR__CommandAnimationSlice_001233c8;
    *(undefined4 *)(pCVar3 + 0x10) = 9;
    *(undefined8 *)(pCVar3 + 8) = 0;
    this[0x55] = (Item)0x1;
    *(CommandAnimationSlice **)(this + 0x110) = pCVar3;
    *(CommandAnimationSlice **)(this + 0x118) = pCVar3;
    return pCVar3;
  }
  uVar6 = *(uint *)(this + 0x130);
  lVar2 = *(long *)(this + 0x128);
  do {
    if (lVar2 == 0) {
      if (uVar6 != 0) {
        uVar5 = (ulong)uVar6;
        lVar2 = 0;
        goto LAB_00121ea9;
      }
LAB_00121e60:
      uVar4 = Memory::alloc_static(0x1000,false);
      Vector<RendererCanvasRender::Item::CommandBlock>::push_back(this + 0x120,0,uVar4);
      uVar5 = (ulong)*(uint *)(this + 0x130);
      if (*(long *)(this + 0x128) == 0) {
        lVar2 = 0;
        goto LAB_00121ea9;
      }
      lVar2 = *(long *)(*(long *)(this + 0x128) + -8);
    }
    else {
      lVar2 = *(long *)(lVar2 + -8);
      uVar5 = (ulong)uVar6;
      if (uVar6 == (uint)lVar2) goto LAB_00121e60;
    }
    if (lVar2 <= (long)uVar5) {
LAB_00121ea9:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar5,lVar2,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    lVar2 = *(long *)(this + 0x128);
    puVar7 = (uint *)(uVar5 * 0x10 + lVar2);
    uVar6 = *puVar7;
    if (0x37 < 0x1000 - uVar6) {
      lVar2 = *(long *)(this + 0x118);
      pCVar3 = (CommandAnimationSlice *)((ulong)uVar6 + *(long *)(puVar7 + 2));
      *(undefined1 (*) [16])(pCVar3 + 0x18) = (undefined1  [16])0x0;
      *(undefined ***)pCVar3 = &PTR__CommandAnimationSlice_001233c8;
      *(undefined4 *)(pCVar3 + 0x10) = 9;
      *(undefined8 *)(pCVar3 + 8) = 0;
      *(undefined1 (*) [16])(pCVar3 + 0x28) = (undefined1  [16])0x0;
      *(CommandAnimationSlice **)(lVar2 + 8) = pCVar3;
      *(CommandAnimationSlice **)(this + 0x118) = pCVar3;
      *puVar7 = uVar6 + 0x38;
      this[0x55] = (Item)0x1;
      return pCVar3;
    }
    uVar6 = *(int *)(this + 0x130) + 1;
    *(uint *)(this + 0x130) = uVar6;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRender::Item::CommandMesh*
   RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandMesh>() */

CommandMesh * __thiscall
RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandMesh>(Item *this)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  CommandMesh *pCVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  
  if (*(long *)(this + 0x110) == 0) {
    pCVar4 = (CommandMesh *)operator_new(0x58,"");
    uVar2 = _LC276;
    uVar5 = __LC140;
    *(code **)pCVar4 = Triangulate::triangulate;
    *(undefined8 *)(pCVar4 + 0x38) = uVar5;
    *(undefined8 *)(pCVar4 + 0x40) = uVar2;
    *(undefined1 (*) [16])(pCVar4 + 0x48) = (undefined1  [16])0x0;
    *(undefined8 *)(pCVar4 + 0x18) = 0;
    *(undefined8 *)(pCVar4 + 0x20) = 0x3f800000;
    *(undefined8 *)(pCVar4 + 0x28) = 0x3f80000000000000;
    *(undefined8 *)(pCVar4 + 0x30) = 0;
    *(undefined4 *)(pCVar4 + 0x10) = 4;
    *(undefined8 *)(pCVar4 + 8) = 0;
    this[0x55] = (Item)0x1;
    *(CommandMesh **)(this + 0x110) = pCVar4;
    *(CommandMesh **)(this + 0x118) = pCVar4;
    return pCVar4;
  }
  lVar7 = *(long *)(this + 0x128);
  uVar3 = *(uint *)(this + 0x130);
  if (lVar7 == 0) goto LAB_00121f71;
LAB_00121f22:
  lVar7 = *(long *)(lVar7 + -8);
  uVar6 = (ulong)uVar3;
  if (uVar3 == (uint)lVar7) goto LAB_001220c0;
  do {
    if (lVar7 <= (long)uVar6) {
LAB_00121f7e:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar6,lVar7,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    lVar7 = *(long *)(this + 0x128);
    puVar8 = (uint *)(uVar6 * 0x10 + lVar7);
    uVar3 = *puVar8;
    if (0x57 < 0x1000 - uVar3) {
      pCVar4 = (CommandMesh *)((ulong)uVar3 + *(long *)(puVar8 + 2));
      *(code **)pCVar4 = Triangulate::triangulate;
      uVar2 = _LC276;
      uVar5 = __LC140;
      *(undefined8 *)(pCVar4 + 0x20) = 0x3f800000;
      *(undefined8 *)(pCVar4 + 0x28) = 0x3f80000000000000;
      lVar7 = *(long *)(this + 0x118);
      *(undefined8 *)(pCVar4 + 0x38) = uVar5;
      *(undefined8 *)(pCVar4 + 0x40) = uVar2;
      *(undefined8 *)(pCVar4 + 0x18) = 0;
      *(undefined8 *)(pCVar4 + 0x30) = 0;
      *(undefined4 *)(pCVar4 + 0x10) = 4;
      *(undefined8 *)(pCVar4 + 8) = 0;
      *(undefined1 (*) [16])(pCVar4 + 0x48) = (undefined1  [16])0x0;
      *(CommandMesh **)(lVar7 + 8) = pCVar4;
      *(CommandMesh **)(this + 0x118) = pCVar4;
      *puVar8 = uVar3 + 0x58;
      this[0x55] = (Item)0x1;
      return pCVar4;
    }
    uVar3 = *(int *)(this + 0x130) + 1;
    *(uint *)(this + 0x130) = uVar3;
    if (lVar7 != 0) goto LAB_00121f22;
LAB_00121f71:
    if (uVar3 != 0) {
      uVar6 = (ulong)uVar3;
      lVar7 = 0;
      goto LAB_00121f7e;
    }
LAB_001220c0:
    uVar5 = Memory::alloc_static(0x1000,false);
    Vector<RendererCanvasRender::Item::CommandBlock>::push_back(this + 0x120,0,uVar5);
    uVar6 = (ulong)*(uint *)(this + 0x130);
    if (*(long *)(this + 0x128) == 0) {
      lVar7 = 0;
      goto LAB_00121f7e;
    }
    lVar7 = *(long *)(*(long *)(this + 0x128) + -8);
  } while( true );
}



/* RendererCanvasRender::Item::CommandTransform*
   RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandTransform>() */

CommandTransform * __thiscall
RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandTransform>(Item *this)

{
  code *pcVar1;
  long lVar2;
  CommandTransform *pCVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (*(long *)(this + 0x110) == 0) {
    pCVar3 = (CommandTransform *)operator_new(0x30,"");
    *(undefined ***)pCVar3 = &PTR__CommandTransform_00123388;
    *(undefined8 *)(pCVar3 + 8) = 0;
    *(undefined8 *)(pCVar3 + 0x10) = 0x3f80000000000007;
    *(undefined8 *)(pCVar3 + 0x18) = 0;
    *(undefined8 *)(pCVar3 + 0x20) = 0x3f800000;
    *(undefined4 *)(pCVar3 + 0x28) = 0;
    this[0x55] = (Item)0x1;
    *(CommandTransform **)(this + 0x110) = pCVar3;
    *(CommandTransform **)(this + 0x118) = pCVar3;
    return pCVar3;
  }
  uVar6 = *(uint *)(this + 0x130);
  lVar2 = *(long *)(this + 0x128);
  do {
    if (lVar2 == 0) {
      if (uVar6 != 0) {
        uVar5 = (ulong)uVar6;
        lVar2 = 0;
        goto LAB_001222b1;
      }
LAB_00122268:
      uVar4 = Memory::alloc_static(0x1000,false);
      Vector<RendererCanvasRender::Item::CommandBlock>::push_back(this + 0x120,0,uVar4);
      uVar5 = (ulong)*(uint *)(this + 0x130);
      if (*(long *)(this + 0x128) == 0) {
        lVar2 = 0;
        goto LAB_001222b1;
      }
      lVar2 = *(long *)(*(long *)(this + 0x128) + -8);
    }
    else {
      lVar2 = *(long *)(lVar2 + -8);
      uVar5 = (ulong)uVar6;
      if (uVar6 == (uint)lVar2) goto LAB_00122268;
    }
    if (lVar2 <= (long)uVar5) {
LAB_001222b1:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar5,lVar2,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    lVar2 = *(long *)(this + 0x128);
    puVar7 = (uint *)(uVar5 * 0x10 + lVar2);
    uVar6 = *puVar7;
    if (0x2f < 0x1000 - uVar6) {
      pCVar3 = (CommandTransform *)((ulong)uVar6 + *(long *)(puVar7 + 2));
      *(undefined ***)pCVar3 = &PTR__CommandTransform_00123388;
      *(undefined8 *)(pCVar3 + 0x10) = 0x3f80000000000007;
      *(undefined8 *)(pCVar3 + 0x20) = 0x3f800000;
      lVar2 = *(long *)(this + 0x118);
      *(undefined8 *)(pCVar3 + 8) = 0;
      *(undefined8 *)(pCVar3 + 0x18) = 0;
      *(undefined4 *)(pCVar3 + 0x28) = 0;
      *(CommandTransform **)(lVar2 + 8) = pCVar3;
      *(CommandTransform **)(this + 0x118) = pCVar3;
      *puVar7 = uVar6 + 0x30;
      this[0x55] = (Item)0x1;
      return pCVar3;
    }
    uVar6 = *(int *)(this + 0x130) + 1;
    *(uint *)(this + 0x130) = uVar6;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRender::Item::CommandNinePatch*
   RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandNinePatch>() */

CommandNinePatch * __thiscall
RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandNinePatch>(Item *this)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  CommandNinePatch *pCVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  
  if (*(long *)(this + 0x110) == 0) {
    pCVar4 = (CommandNinePatch *)operator_new(0x68,"");
    uVar2 = _LC276;
    uVar5 = __LC140;
    *(undefined ***)pCVar4 = &PTR__CommandNinePatch_001232e8;
    *(undefined8 *)(pCVar4 + 0x48) = uVar5;
    *(undefined8 *)(pCVar4 + 0x50) = uVar2;
    *(undefined8 *)(pCVar4 + 0x14) = 0;
    *(undefined8 *)(pCVar4 + 0x1c) = 0;
    *(undefined8 *)(pCVar4 + 0x24) = 0;
    *(undefined8 *)(pCVar4 + 0x2c) = 0;
    *(undefined8 *)(pCVar4 + 0x60) = 0;
    pCVar4[0x44] = (CommandNinePatch)0x1;
    *(undefined4 *)(pCVar4 + 0x10) = 1;
    *(undefined8 *)(pCVar4 + 8) = 0;
    this[0x55] = (Item)0x1;
    *(CommandNinePatch **)(this + 0x110) = pCVar4;
    *(CommandNinePatch **)(this + 0x118) = pCVar4;
    return pCVar4;
  }
  lVar7 = *(long *)(this + 0x128);
  uVar3 = *(uint *)(this + 0x130);
  if (lVar7 == 0) goto LAB_00122381;
LAB_00122332:
  lVar7 = *(long *)(lVar7 + -8);
  uVar6 = (ulong)uVar3;
  if (uVar3 == (uint)lVar7) goto LAB_001224d0;
  do {
    if (lVar7 <= (long)uVar6) {
LAB_0012238e:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar6,lVar7,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    uVar2 = _LC276;
    uVar5 = __LC140;
    lVar7 = *(long *)(this + 0x128);
    puVar8 = (uint *)(uVar6 * 0x10 + lVar7);
    uVar3 = *puVar8;
    if (0x67 < 0x1000 - uVar3) {
      lVar7 = *(long *)(this + 0x118);
      pCVar4 = (CommandNinePatch *)((ulong)uVar3 + *(long *)(puVar8 + 2));
      *(undefined ***)pCVar4 = &PTR__CommandNinePatch_001232e8;
      *(undefined8 *)(pCVar4 + 0x14) = 0;
      *(undefined8 *)(pCVar4 + 0x1c) = 0;
      *(undefined8 *)(pCVar4 + 0x24) = 0;
      *(undefined8 *)(pCVar4 + 0x2c) = 0;
      *(undefined8 *)(pCVar4 + 0x60) = 0;
      pCVar4[0x44] = (CommandNinePatch)0x1;
      *(undefined4 *)(pCVar4 + 0x10) = 1;
      *(undefined8 *)(pCVar4 + 8) = 0;
      *(undefined8 *)(pCVar4 + 0x48) = uVar5;
      *(undefined8 *)(pCVar4 + 0x50) = uVar2;
      *(CommandNinePatch **)(lVar7 + 8) = pCVar4;
      *(CommandNinePatch **)(this + 0x118) = pCVar4;
      *puVar8 = uVar3 + 0x68;
      this[0x55] = (Item)0x1;
      return pCVar4;
    }
    uVar3 = *(int *)(this + 0x130) + 1;
    *(uint *)(this + 0x130) = uVar3;
    if (lVar7 != 0) goto LAB_00122332;
LAB_00122381:
    if (uVar3 != 0) {
      uVar6 = (ulong)uVar3;
      lVar7 = 0;
      goto LAB_0012238e;
    }
LAB_001224d0:
    uVar5 = Memory::alloc_static(0x1000,false);
    Vector<RendererCanvasRender::Item::CommandBlock>::push_back(this + 0x120,0,uVar5);
    uVar6 = (ulong)*(uint *)(this + 0x130);
    if (*(long *)(this + 0x128) == 0) {
      lVar7 = 0;
      goto LAB_0012238e;
    }
    lVar7 = *(long *)(*(long *)(this + 0x128) + -8);
  } while( true );
}



/* RendererCanvasRender::Item::CommandPolygon*
   RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandPolygon>() */

CommandPolygon * __thiscall
RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandPolygon>(Item *this)

{
  code *pcVar1;
  long lVar2;
  CommandPolygon *pCVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (*(long *)(this + 0x110) == 0) {
    pCVar3 = (CommandPolygon *)operator_new(0x38,"");
    *(undefined ***)pCVar3 = &PTR__CommandPolygon_00123308;
    *(undefined8 *)(pCVar3 + 0x20) = 0;
    *(undefined8 *)(pCVar3 + 0x28) = 0;
    *(undefined8 *)(pCVar3 + 0x18) = 0;
    *(undefined8 *)(pCVar3 + 0x30) = 0;
    *(undefined4 *)(pCVar3 + 0x10) = 2;
    *(undefined8 *)(pCVar3 + 8) = 0;
    this[0x55] = (Item)0x1;
    *(CommandPolygon **)(this + 0x110) = pCVar3;
    *(CommandPolygon **)(this + 0x118) = pCVar3;
    return pCVar3;
  }
  uVar6 = *(uint *)(this + 0x130);
  lVar2 = *(long *)(this + 0x128);
  do {
    if (lVar2 == 0) {
      if (uVar6 != 0) {
        uVar5 = (ulong)uVar6;
        lVar2 = 0;
        goto LAB_001226c9;
      }
LAB_00122680:
      uVar4 = Memory::alloc_static(0x1000,false);
      Vector<RendererCanvasRender::Item::CommandBlock>::push_back(this + 0x120,0,uVar4);
      uVar5 = (ulong)*(uint *)(this + 0x130);
      if (*(long *)(this + 0x128) == 0) {
        lVar2 = 0;
        goto LAB_001226c9;
      }
      lVar2 = *(long *)(*(long *)(this + 0x128) + -8);
    }
    else {
      lVar2 = *(long *)(lVar2 + -8);
      uVar5 = (ulong)uVar6;
      if (uVar6 == (uint)lVar2) goto LAB_00122680;
    }
    if (lVar2 <= (long)uVar5) {
LAB_001226c9:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar5,lVar2,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    lVar2 = *(long *)(this + 0x128);
    puVar7 = (uint *)(uVar5 * 0x10 + lVar2);
    uVar6 = *puVar7;
    if (0x37 < 0x1000 - uVar6) {
      lVar2 = *(long *)(this + 0x118);
      pCVar3 = (CommandPolygon *)((ulong)uVar6 + *(long *)(puVar7 + 2));
      *(undefined8 *)(pCVar3 + 0x20) = 0;
      *(undefined ***)pCVar3 = &PTR__CommandPolygon_00123308;
      *(undefined8 *)(pCVar3 + 0x28) = 0;
      *(undefined8 *)(pCVar3 + 0x18) = 0;
      *(undefined8 *)(pCVar3 + 0x30) = 0;
      *(undefined4 *)(pCVar3 + 0x10) = 2;
      *(undefined8 *)(pCVar3 + 8) = 0;
      *(CommandPolygon **)(lVar2 + 8) = pCVar3;
      *(CommandPolygon **)(this + 0x118) = pCVar3;
      *puVar7 = uVar6 + 0x38;
      this[0x55] = (Item)0x1;
      return pCVar3;
    }
    uVar6 = *(int *)(this + 0x130) + 1;
    *(uint *)(this + 0x130) = uVar6;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRender::Item::CommandPrimitive*
   RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandPrimitive>() */

CommandPrimitive * __thiscall
RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandPrimitive>(Item *this)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  CommandPrimitive *pCVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  
  if (*(long *)(this + 0x110) == 0) {
    pCVar4 = (CommandPrimitive *)operator_new(0xa0,"");
    uVar2 = _LC276;
    uVar5 = __LC140;
    *(undefined ***)pCVar4 = &PTR__CommandPrimitive_00123328;
    *(undefined8 *)(pCVar4 + 0x58) = uVar5;
    *(undefined8 *)(pCVar4 + 0x60) = uVar2;
    *(undefined8 *)(pCVar4 + 0x68) = uVar5;
    *(undefined8 *)(pCVar4 + 0x70) = uVar2;
    *(undefined8 *)(pCVar4 + 0x78) = uVar5;
    *(undefined8 *)(pCVar4 + 0x80) = uVar2;
    *(undefined8 *)(pCVar4 + 0x88) = uVar5;
    *(undefined8 *)(pCVar4 + 0x90) = uVar2;
    *(undefined8 *)(pCVar4 + 0x18) = 0;
    *(undefined8 *)(pCVar4 + 0x20) = 0;
    *(undefined8 *)(pCVar4 + 0x28) = 0;
    *(undefined8 *)(pCVar4 + 0x30) = 0;
    *(undefined8 *)(pCVar4 + 0x38) = 0;
    *(undefined8 *)(pCVar4 + 0x40) = 0;
    *(undefined8 *)(pCVar4 + 0x48) = 0;
    *(undefined8 *)(pCVar4 + 0x50) = 0;
    *(undefined8 *)(pCVar4 + 0x98) = 0;
    *(undefined4 *)(pCVar4 + 0x10) = 3;
    *(undefined8 *)(pCVar4 + 8) = 0;
    this[0x55] = (Item)0x1;
    *(CommandPrimitive **)(this + 0x110) = pCVar4;
    *(CommandPrimitive **)(this + 0x118) = pCVar4;
    return pCVar4;
  }
  lVar7 = *(long *)(this + 0x128);
  uVar3 = *(uint *)(this + 0x130);
  if (lVar7 == 0) goto LAB_00122793;
LAB_00122742:
  lVar7 = *(long *)(lVar7 + -8);
  uVar6 = (ulong)uVar3;
  if (uVar3 == (uint)lVar7) goto LAB_00122940;
  do {
    if (lVar7 <= (long)uVar6) {
LAB_001227a0:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar6,lVar7,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    uVar2 = _LC276;
    uVar5 = __LC140;
    lVar7 = *(long *)(this + 0x128);
    puVar8 = (uint *)(uVar6 * 0x10 + lVar7);
    uVar3 = *puVar8;
    if (0x9f < 0x1000 - uVar3) {
      lVar7 = *(long *)(this + 0x118);
      pCVar4 = (CommandPrimitive *)((ulong)uVar3 + *(long *)(puVar8 + 2));
      *(undefined ***)pCVar4 = &PTR__CommandPrimitive_00123328;
      *(undefined8 *)(pCVar4 + 0x18) = 0;
      *(undefined8 *)(pCVar4 + 0x20) = 0;
      *(undefined8 *)(pCVar4 + 0x28) = 0;
      *(undefined8 *)(pCVar4 + 0x30) = 0;
      *(undefined8 *)(pCVar4 + 0x38) = 0;
      *(undefined8 *)(pCVar4 + 0x40) = 0;
      *(undefined8 *)(pCVar4 + 0x48) = 0;
      *(undefined8 *)(pCVar4 + 0x50) = 0;
      *(undefined8 *)(pCVar4 + 0x98) = 0;
      *(undefined4 *)(pCVar4 + 0x10) = 3;
      *(undefined8 *)(pCVar4 + 8) = 0;
      *(undefined8 *)(pCVar4 + 0x58) = uVar5;
      *(undefined8 *)(pCVar4 + 0x60) = uVar2;
      *(undefined8 *)(pCVar4 + 0x68) = uVar5;
      *(undefined8 *)(pCVar4 + 0x70) = uVar2;
      *(undefined8 *)(pCVar4 + 0x78) = uVar5;
      *(undefined8 *)(pCVar4 + 0x80) = uVar2;
      *(undefined8 *)(pCVar4 + 0x88) = uVar5;
      *(undefined8 *)(pCVar4 + 0x90) = uVar2;
      *(CommandPrimitive **)(lVar7 + 8) = pCVar4;
      *(CommandPrimitive **)(this + 0x118) = pCVar4;
      *puVar8 = uVar3 + 0xa0;
      this[0x55] = (Item)0x1;
      return pCVar4;
    }
    uVar3 = *(int *)(this + 0x130) + 1;
    *(uint *)(this + 0x130) = uVar3;
    if (lVar7 != 0) goto LAB_00122742;
LAB_00122793:
    if (uVar3 != 0) {
      uVar6 = (ulong)uVar3;
      lVar7 = 0;
      goto LAB_001227a0;
    }
LAB_00122940:
    uVar5 = Memory::alloc_static(0x1000,false);
    Vector<RendererCanvasRender::Item::CommandBlock>::push_back(this + 0x120,0,uVar5);
    uVar6 = (ulong)*(uint *)(this + 0x130);
    if (*(long *)(this + 0x128) == 0) {
      lVar7 = 0;
      goto LAB_001227a0;
    }
    lVar7 = *(long *)(*(long *)(this + 0x128) + -8);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRender::Item::CommandRect*
   RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandRect>() */

CommandRect * __thiscall
RendererCanvasRender::Item::alloc_command<RendererCanvasRender::Item::CommandRect>(Item *this)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  CommandRect *pCVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  
  if (*(long *)(this + 0x110) == 0) {
    pCVar4 = (CommandRect *)operator_new(0x58,"");
    uVar2 = _LC276;
    uVar5 = __LC140;
    *(undefined8 *)(pCVar4 + 0x14) = 0;
    *(undefined8 *)(pCVar4 + 0x24) = uVar5;
    *(undefined8 *)(pCVar4 + 0x2c) = uVar2;
    *(undefined ***)pCVar4 = &PTR__CommandRect_001232c8;
    *(undefined8 *)(pCVar4 + 0x1c) = 0;
    *(undefined8 *)(pCVar4 + 0x34) = 0;
    *(undefined8 *)(pCVar4 + 0x3c) = 0;
    *(undefined8 *)(pCVar4 + 0x50) = 0;
    *(undefined2 *)(pCVar4 + 0x44) = 0;
    *(undefined8 *)(pCVar4 + 0x48) = uVar2;
    *(undefined4 *)(pCVar4 + 0x10) = 0;
    *(undefined8 *)(pCVar4 + 8) = 0;
    this[0x55] = (Item)0x1;
    *(CommandRect **)(this + 0x110) = pCVar4;
    *(CommandRect **)(this + 0x118) = pCVar4;
    return pCVar4;
  }
  lVar7 = *(long *)(this + 0x128);
  uVar3 = *(uint *)(this + 0x130);
  if (lVar7 == 0) goto LAB_00122a11;
LAB_001229c2:
  lVar7 = *(long *)(lVar7 + -8);
  uVar6 = (ulong)uVar3;
  if (uVar3 == (uint)lVar7) goto LAB_00122b70;
  do {
    if (lVar7 <= (long)uVar6) {
LAB_00122a1e:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar6,lVar7,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    CowData<RendererCanvasRender::Item::CommandBlock>::_copy_on_write
              ((CowData<RendererCanvasRender::Item::CommandBlock> *)(this + 0x128));
    lVar7 = *(long *)(this + 0x128);
    puVar8 = (uint *)(uVar6 * 0x10 + lVar7);
    uVar3 = *puVar8;
    if (0x57 < 0x1000 - uVar3) {
      pCVar4 = (CommandRect *)((ulong)uVar3 + *(long *)(puVar8 + 2));
      *(undefined2 *)(pCVar4 + 0x44) = 0;
      uVar2 = _LC276;
      uVar5 = __LC140;
      *(undefined ***)pCVar4 = &PTR__CommandRect_001232c8;
      *(undefined8 *)(pCVar4 + 0x48) = uVar2;
      lVar7 = *(long *)(this + 0x118);
      *(undefined8 *)(pCVar4 + 0x14) = 0;
      *(undefined8 *)(pCVar4 + 0x1c) = 0;
      *(undefined8 *)(pCVar4 + 0x34) = 0;
      *(undefined8 *)(pCVar4 + 0x3c) = 0;
      *(undefined8 *)(pCVar4 + 0x50) = 0;
      *(undefined4 *)(pCVar4 + 0x10) = 0;
      *(undefined8 *)(pCVar4 + 8) = 0;
      *(undefined8 *)(pCVar4 + 0x24) = uVar5;
      *(undefined8 *)(pCVar4 + 0x2c) = uVar2;
      *(CommandRect **)(lVar7 + 8) = pCVar4;
      *(CommandRect **)(this + 0x118) = pCVar4;
      *puVar8 = uVar3 + 0x58;
      this[0x55] = (Item)0x1;
      return pCVar4;
    }
    uVar3 = *(int *)(this + 0x130) + 1;
    *(uint *)(this + 0x130) = uVar3;
    if (lVar7 != 0) goto LAB_001229c2;
LAB_00122a11:
    if (uVar3 != 0) {
      uVar6 = (ulong)uVar3;
      lVar7 = 0;
      goto LAB_00122a1e;
    }
LAB_00122b70:
    uVar5 = Memory::alloc_static(0x1000,false);
    Vector<RendererCanvasRender::Item::CommandBlock>::push_back(this + 0x120,0,uVar5);
    uVar6 = (ulong)*(uint *)(this + 0x130);
    if (*(long *)(this + 0x128) == 0) {
      lVar7 = 0;
      goto LAB_00122a1e;
    }
    lVar7 = *(long *)(*(long *)(this + 0x128) + -8);
  } while( true );
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererCanvasRender::LightOccluderInstance, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRender::LightOccluderInstance,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasRender::LightOccluderInstance,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasCull::Canvas::~Canvas() */

void __thiscall RendererCanvasCull::Canvas::~Canvas(Canvas *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::~Item() */

void __thiscall RendererCanvasRender::Item::~Item(Item *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::CommandRect::~CommandRect() */

void __thiscall RendererCanvasRender::Item::CommandRect::~CommandRect(CommandRect *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::CommandNinePatch::~CommandNinePatch() */

void __thiscall
RendererCanvasRender::Item::CommandNinePatch::~CommandNinePatch(CommandNinePatch *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::CommandPolygon::~CommandPolygon() */

void __thiscall RendererCanvasRender::Item::CommandPolygon::~CommandPolygon(CommandPolygon *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::CommandPrimitive::~CommandPrimitive() */

void __thiscall
RendererCanvasRender::Item::CommandPrimitive::~CommandPrimitive(CommandPrimitive *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::CommandMultiMesh::~CommandMultiMesh() */

void __thiscall
RendererCanvasRender::Item::CommandMultiMesh::~CommandMultiMesh(CommandMultiMesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::CommandParticles::~CommandParticles() */

void __thiscall
RendererCanvasRender::Item::CommandParticles::~CommandParticles(CommandParticles *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::CommandTransform::~CommandTransform() */

void __thiscall
RendererCanvasRender::Item::CommandTransform::~CommandTransform(CommandTransform *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::CommandClipIgnore::~CommandClipIgnore() */

void __thiscall
RendererCanvasRender::Item::CommandClipIgnore::~CommandClipIgnore(CommandClipIgnore *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasRender::Item::CommandAnimationSlice::~CommandAnimationSlice() */

void __thiscall
RendererCanvasRender::Item::CommandAnimationSlice::~CommandAnimationSlice
          (CommandAnimationSlice *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererCanvasCull::Item, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasCull::Item,true>::~RID_Alloc(RID_Alloc<RendererCanvasCull::Item,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererCanvasCull::Item::~Item() */

void __thiscall RendererCanvasCull::Item::~Item(Item *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererCanvasCull::Canvas, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasCull::Canvas,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasCull::Canvas,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererCanvasCull::LightOccluderPolygon, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasCull::LightOccluderPolygon,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererCanvasRender::Light, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRender::Light,true>::~RID_Alloc
          (RID_Alloc<RendererCanvasRender::Light,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


