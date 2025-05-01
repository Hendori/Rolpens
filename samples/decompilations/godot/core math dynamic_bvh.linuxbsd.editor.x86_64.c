
/* DynamicBVH::_recurse_delete_node(DynamicBVH::Node*) */

void __thiscall DynamicBVH::_recurse_delete_node(DynamicBVH *this,Node *param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _recurse_delete_node(this,*(Node **)(param_1 + 0x20));
    _recurse_delete_node(this,*(Node **)(param_1 + 0x28));
  }
  if (*(Node **)(this + 0x68) == param_1) {
    *(undefined8 *)(this + 0x68) = 0;
  }
  uVar1 = *(uint *)(this + 0x14);
  *(Node **)(*(long *)(*(long *)(this + 8) +
                      (ulong)(uVar1 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)) * 8) +
            (ulong)(uVar1 & *(uint *)(this + 0x1c)) * 8) = param_1;
  *(uint *)(this + 0x14) = uVar1 + 1;
  return;
}



/* DynamicBVH::_fetch_leaves(DynamicBVH::Node*, LocalVector<DynamicBVH::Node*, unsigned int, false,
   false>&, int) */

void __thiscall
DynamicBVH::_fetch_leaves(DynamicBVH *this,Node *param_1,LocalVector *param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  
  if ((*(long *)(param_1 + 0x28) != 0) && (param_3 != 0)) {
    _fetch_leaves(this,*(Node **)(param_1 + 0x20),param_2,param_3 + -1);
    _fetch_leaves(this,*(Node **)(param_1 + 0x28),param_2,param_3 + -1);
    uVar1 = *(uint *)(this + 0x14);
    *(Node **)(*(long *)(*(long *)(this + 8) +
                        (ulong)(uVar1 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)) * 8) +
              (ulong)(uVar1 & *(uint *)(this + 0x1c)) * 8) = param_1;
    *(uint *)(this + 0x14) = uVar1 + 1;
    return;
  }
  uVar1 = *(uint *)param_2;
  pvVar3 = *(void **)(param_2 + 8);
  if (uVar1 == *(uint *)(param_2 + 4)) {
    uVar4 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar4 = 1;
    }
    *(int *)(param_2 + 4) = (int)uVar4;
    pvVar3 = (void *)Memory::realloc_static(pvVar3,uVar4 * 8,false);
    *(void **)(param_2 + 8) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)param_2;
  }
  *(uint *)param_2 = uVar1 + 1;
  *(Node **)((long)pvVar3 + (ulong)uVar1 * 8) = param_1;
  return;
}



/* DynamicBVH::_split(DynamicBVH::Node**, int, Vector3 const&, Vector3 const&) */

ulong DynamicBVH::_split(Node **param_1,int param_2,Vector3 *param_3,Vector3 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Node *pNVar7;
  Node *pNVar8;
  float fVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  fVar9 = (float)_LC4;
  uVar13 = 0;
  if (param_2 != 0) {
    fVar1 = *(float *)param_3;
    fVar2 = *(float *)param_4;
    fVar3 = *(float *)(param_3 + 4);
    fVar4 = *(float *)(param_3 + 8);
    uVar11 = 0;
    fVar5 = *(float *)(param_4 + 4);
    fVar6 = *(float *)(param_4 + 8);
    uVar12 = 1;
    do {
      pNVar7 = param_1[uVar11];
      if (0.0 < ((*(float *)pNVar7 + *(float *)(pNVar7 + 0xc)) * fVar9 - fVar1) * fVar2 +
                ((*(float *)(pNVar7 + 4) + *(float *)(pNVar7 + 0x10)) * fVar9 - fVar3) * fVar5 +
                ((*(float *)(pNVar7 + 8) + *(float *)(pNVar7 + 0x14)) * fVar9 - fVar4) * fVar6) {
        uVar13 = param_2;
        if (param_2 == (uint)uVar11) break;
        lVar10 = (long)(int)(param_2 - 1U);
        while (pNVar8 = param_1[lVar10],
              0.0 < ((*(float *)pNVar8 + *(float *)(pNVar8 + 0xc)) * fVar9 - fVar1) * fVar2 +
                    ((*(float *)(pNVar8 + 4) + *(float *)(pNVar8 + 0x10)) * fVar9 - fVar3) * fVar5 +
                    ((*(float *)(pNVar8 + 8) + *(float *)(pNVar8 + 0x14)) * fVar9 - fVar4) * fVar6)
        {
          lVar10 = lVar10 + -1;
          if (((long)param_2 + -2) - (ulong)((param_2 - 1U) - (uint)uVar11) == lVar10) {
            return uVar11 & 0xffffffff;
          }
        }
        param_2 = (int)lVar10;
        param_1[uVar11] = param_1[param_2];
        param_1[param_2] = pNVar7;
      }
      uVar11 = uVar11 + 1;
      bVar14 = uVar12 != param_2;
      uVar13 = param_2;
      uVar12 = uVar12 + 1;
    } while (bVar14);
  }
  return (ulong)uVar13;
}



/* DynamicBVH::_bounds(DynamicBVH::Node**, int) */

DynamicBVH * __thiscall DynamicBVH::_bounds(DynamicBVH *this,Node **param_1,int param_2)

{
  float fVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  Node **ppNVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 local_28;
  undefined4 uStack_20;
  float afStack_1c [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar2 = *param_1;
  uVar4 = *(undefined8 *)(pNVar2 + 8);
  uVar3 = *(undefined8 *)(pNVar2 + 0x10);
  *(undefined8 *)this = *(undefined8 *)pNVar2;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar3;
  if (1 < param_2) {
    ppNVar6 = param_1 + 1;
    do {
      local_28 = 0;
      pNVar2 = *ppNVar6;
      lVar5 = 0;
      uStack_20 = 0;
      afStack_1c[0] = 0.0;
      afStack_1c[1] = 0.0;
      afStack_1c[2] = 0.0;
      do {
        fVar1 = *(float *)(pNVar2 + lVar5);
        fVar7 = *(float *)(this + lVar5);
        if (fVar1 <= *(float *)(this + lVar5)) {
          fVar7 = fVar1;
        }
        *(float *)((long)&local_28 + lVar5) = fVar7;
        fVar1 = *(float *)(pNVar2 + lVar5 + 0xc);
        fVar7 = *(float *)(this + lVar5 + 0xc);
        if (*(float *)(this + lVar5 + 0xc) <= fVar1) {
          fVar7 = fVar1;
        }
        *(float *)((long)afStack_1c + lVar5) = fVar7;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
      ppNVar6 = ppNVar6 + 1;
      *(ulong *)(this + 0x10) = CONCAT44(afStack_1c[2],afStack_1c[1]);
      *(undefined8 *)this = local_28;
      *(ulong *)(this + 8) = CONCAT44(afStack_1c[0],uStack_20);
    } while (ppNVar6 != param_1 + (ulong)(param_2 - 2) + 2);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicBVH::_bottom_up(DynamicBVH::Node**, int) */

void __thiscall DynamicBVH::_bottom_up(DynamicBVH *this,Node **param_1,int param_2)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_58;
  float fStack_50;
  float afStack_4c [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < param_2) {
    uVar5 = *(uint *)(this + 0x14);
    lVar19 = (long)param_2;
    do {
      iVar18 = (int)lVar19;
      if (iVar18 < 2) {
        lVar14 = -1;
        iVar15 = -1;
      }
      else {
        uVar16 = 0xffffffff;
        lVar14 = -1;
        uVar11 = 0;
        fVar22 = _LC6;
        do {
          pNVar1 = param_1[uVar11];
          uVar17 = uVar11 + 1;
          fVar24 = fVar22;
          do {
            local_58 = 0;
            pNVar2 = param_1[uVar17];
            lVar6 = 0;
            fStack_50 = 0.0;
            afStack_4c[0] = 0.0;
            afStack_4c[1] = 0.0;
            afStack_4c[2] = 0.0;
            do {
              fVar22 = *(float *)(pNVar1 + lVar6);
              fVar23 = *(float *)(pNVar2 + lVar6);
              if (fVar23 <= fVar22) {
                fVar22 = fVar23;
              }
              *(float *)((long)&local_58 + lVar6) = fVar22;
              fVar22 = *(float *)(pNVar1 + lVar6 + 0xc);
              fVar23 = *(float *)(pNVar2 + lVar6 + 0xc);
              if (fVar22 <= fVar23) {
                fVar22 = fVar23;
              }
              *(float *)((long)afStack_4c + lVar6) = fVar22;
              lVar6 = lVar6 + 4;
            } while (lVar6 != 0xc);
            fVar23 = (afStack_4c[1] - local_58._4_4_) * (afStack_4c[0] - (float)local_58) *
                     (afStack_4c[2] - fStack_50) + (afStack_4c[0] - (float)local_58) +
                     (afStack_4c[1] - local_58._4_4_) + (afStack_4c[2] - fStack_50);
            fVar22 = fVar24;
            if (fVar23 < fVar24) {
              uVar16 = uVar17 & 0xffffffff;
              fVar22 = fVar23;
            }
            iVar15 = (int)uVar16;
            if (fVar23 < fVar24) {
              lVar14 = (long)(int)uVar11;
            }
            uVar17 = uVar17 + 1;
            fVar24 = fVar22;
          } while ((int)uVar17 < iVar18);
          bVar21 = uVar11 != iVar18 - 2;
          uVar11 = uVar11 + 1;
        } while (bVar21);
      }
      lVar6 = 0;
      local_58 = 0;
      pNVar1 = param_1[lVar14];
      fStack_50 = 0.0;
      pNVar2 = param_1[iVar15];
      afStack_4c[2] = 0.0;
      afStack_4c[0] = 0.0;
      afStack_4c[1] = 0.0;
      do {
        fVar22 = *(float *)(pNVar1 + lVar6);
        if (*(float *)(pNVar2 + lVar6) <= *(float *)(pNVar1 + lVar6)) {
          fVar22 = *(float *)(pNVar2 + lVar6);
        }
        *(float *)((long)&local_58 + lVar6) = fVar22;
        fVar22 = *(float *)(pNVar1 + lVar6 + 0xc);
        if (*(float *)(pNVar1 + lVar6 + 0xc) <= *(float *)(pNVar2 + lVar6 + 0xc)) {
          fVar22 = *(float *)(pNVar2 + lVar6 + 0xc);
        }
        *(float *)((long)afStack_4c + lVar6) = fVar22;
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0xc);
      if (uVar5 == 0) {
        uVar5 = *(uint *)(this + 0x10) + 1;
        lVar20 = (ulong)*(uint *)(this + 0x10) * 8;
        *(uint *)(this + 0x10) = uVar5;
        uVar7 = Memory::realloc_static(*(void **)this,(ulong)uVar5 * 8,false);
        *(undefined8 *)this = uVar7;
        uVar7 = Memory::realloc_static
                          (*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
        lVar6 = *(long *)this;
        *(undefined8 *)(this + 8) = uVar7;
        uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
        uVar5 = *(uint *)(this + 0x20);
        *(undefined8 *)(lVar6 + lVar20) = uVar7;
        lVar6 = *(long *)(this + 8);
        uVar7 = Memory::alloc_static((ulong)uVar5 << 3,false);
        uVar5 = *(uint *)(this + 0x20);
        *(undefined8 *)(lVar6 + lVar20) = uVar7;
        if (uVar5 == 0) {
          plVar13 = *(long **)(this + 8);
        }
        else {
          plVar13 = *(long **)(this + 8);
          lVar6 = *(long *)this;
          plVar4 = (long *)*plVar13;
          lVar12 = 0;
          plVar8 = plVar4;
          do {
            plVar9 = plVar8 + 1;
            lVar10 = *(long *)(lVar20 + lVar6) + lVar12;
            lVar12 = lVar12 + 0x30;
            *plVar8 = lVar10;
            plVar8 = plVar9;
          } while (plVar4 + uVar5 != plVar9);
        }
        uVar5 = *(int *)(this + 0x14) + uVar5;
      }
      else {
        plVar13 = *(long **)(this + 8);
      }
      uVar5 = uVar5 - 1;
      *(uint *)(this + 0x14) = uVar5;
      pNVar3 = *(Node **)(plVar13[uVar5 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
                         (ulong)(uVar5 & *(uint *)(this + 0x1c)) * 8);
      *(undefined8 *)(pNVar3 + 0x18) = 0;
      *(ulong *)(pNVar3 + 0x10) = CONCAT44(afStack_4c[2],afStack_4c[1]);
      *(undefined8 *)pNVar3 = local_58;
      *(ulong *)(pNVar3 + 8) = CONCAT44(afStack_4c[0],fStack_50);
      *(Node **)(pNVar3 + 0x20) = pNVar1;
      *(Node **)(pNVar3 + 0x28) = pNVar2;
      *(Node **)(pNVar1 + 0x18) = pNVar3;
      *(Node **)(pNVar2 + 0x18) = pNVar3;
      param_1[lVar14] = pNVar3;
      lVar14 = lVar19 + -1;
      lVar19 = lVar19 + -1;
      param_1[iVar15] = param_1[lVar14];
    } while (1 < (int)lVar19);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DynamicBVH::_top_down(DynamicBVH::Node**, int, int) */

Node * __thiscall DynamicBVH::_top_down(DynamicBVH *this,Node **param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long *plVar10;
  uint uVar11;
  float *pfVar12;
  int *piVar13;
  undefined8 uVar14;
  int iVar15;
  Node **ppNVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  Node *pNVar25;
  long lVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_top_down(DynamicBVH::Node**,int,int)::axis == '\0') &&
     (iVar18 = __cxa_guard_acquire(&_top_down(DynamicBVH::Node**,int,int)::axis), iVar18 != 0)) {
    _axis = ZEXT416(_LC7);
    _DAT_00102740 = 0x3f800000;
    _DAT_00102730 = _axis;
    __cxa_guard_release(&_top_down(DynamicBVH::Node**,int,int)::axis);
  }
  if (param_3 < 2) {
    pNVar25 = (Node *)0x0;
    _err_print_error("_top_down","core/math/dynamic_bvh.cpp",0xd3,
                     "Condition \"p_bu_threshold <= 1\" is true. Returning: nullptr",0,0);
  }
  else if (param_2 < 2) {
    pNVar25 = *param_1;
  }
  else if (param_3 < param_2) {
    _bounds((DynamicBVH *)&local_78,param_1,param_2);
    local_48 = 0;
    local_80 = (fStack_70 + fStack_64) * (float)_LC4;
    fVar27 = (fStack_6c + (float)local_78) * (float)_LC4;
    fVar28 = (fStack_68 + (float)((ulong)local_78 >> 0x20)) * _LC4._4_4_;
    local_88 = CONCAT44(fVar28,fVar27);
    local_58 = (undefined1  [16])0x0;
    ppNVar16 = param_1;
    do {
      pNVar25 = *ppNVar16;
      iVar18 = 0;
      fVar3 = *(float *)(pNVar25 + 8);
      fVar4 = *(float *)(pNVar25 + 4);
      fVar5 = *(float *)(pNVar25 + 0x14);
      fVar6 = *(float *)(pNVar25 + 0x10);
      fVar7 = *(float *)pNVar25;
      fVar8 = *(float *)(pNVar25 + 0xc);
      pfVar12 = (float *)&_top_down(DynamicBVH::Node**,int,int)::axis;
      do {
        fVar9 = *pfVar12;
        pfVar1 = pfVar12 + 1;
        lVar24 = (long)iVar18;
        pfVar2 = pfVar12 + 2;
        iVar18 = iVar18 + 1;
        pfVar12 = pfVar12 + 3;
        *(int *)(local_58 +
                ((ulong)(0.0 < fVar9 * ((fVar7 + fVar8) * (float)_LC4 - fVar27) +
                               *pfVar1 * ((fVar4 + fVar6) * (float)_LC4 - fVar28) +
                               *pfVar2 * ((fVar3 + fVar5) * (float)_LC4 - local_80)) + lVar24 * 2) *
                4) = *(int *)(local_58 +
                             ((ulong)(0.0 < fVar9 * ((fVar7 + fVar8) * (float)_LC4 - fVar27) +
                                            *pfVar1 * ((fVar4 + fVar6) * (float)_LC4 - fVar28) +
                                            *pfVar2 * ((fVar3 + fVar5) * (float)_LC4 - local_80)) +
                             lVar24 * 2) * 4) + 1;
      } while (iVar18 != 3);
      ppNVar16 = ppNVar16 + 1;
    } while (ppNVar16 != param_1 + param_2);
    piVar13 = (int *)local_58;
    iVar19 = 0;
    lVar24 = -1;
    iVar18 = param_2;
    do {
      if (((0 < *piVar13) && (0 < piVar13[1])) &&
         (iVar15 = (int)ABS((float)(*piVar13 - piVar13[1])), iVar15 < iVar18)) {
        lVar24 = (long)iVar19;
        iVar18 = iVar15;
      }
      iVar19 = iVar19 + 1;
      piVar13 = piVar13 + 2;
    } while (iVar19 != 3);
    if ((int)lVar24 < 0) {
      iVar18 = (param_2 >> 1) + 1;
    }
    else {
      iVar18 = _split(param_1,param_2,(Vector3 *)&local_88,
                      (Vector3 *)(&_top_down(DynamicBVH::Node**,int,int)::axis + lVar24 * 3));
      if ((iVar18 == 0) || (param_2 == iVar18)) {
        pNVar25 = (Node *)0x0;
        _err_print_error("_top_down","core/math/dynamic_bvh.cpp",0xee,
                         "Condition \"partition == 0 || partition == p_count\" is true. Returning: nullptr"
                         ,0,0);
        goto LAB_001009b4;
      }
    }
    iVar19 = *(int *)(this + 0x14);
    if (iVar19 == 0) {
      uVar11 = *(uint *)(this + 0x10) + 1;
      lVar26 = (ulong)*(uint *)(this + 0x10) * 8;
      *(uint *)(this + 0x10) = uVar11;
      uVar14 = Memory::realloc_static(*(void **)this,(ulong)uVar11 * 8,false);
      *(undefined8 *)this = uVar14;
      uVar14 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false)
      ;
      lVar24 = *(long *)this;
      *(undefined8 *)(this + 8) = uVar14;
      uVar14 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
      uVar11 = *(uint *)(this + 0x20);
      *(undefined8 *)(lVar24 + lVar26) = uVar14;
      lVar24 = *(long *)(this + 8);
      uVar14 = Memory::alloc_static((ulong)uVar11 << 3,false);
      *(undefined8 *)(lVar24 + lVar26) = uVar14;
      uVar11 = *(uint *)(this + 0x20);
      if (uVar11 == 0) {
        plVar22 = *(long **)(this + 8);
      }
      else {
        plVar22 = *(long **)(this + 8);
        lVar24 = *(long *)this;
        plVar10 = (long *)*plVar22;
        lVar17 = 0;
        plVar20 = plVar10;
        do {
          plVar21 = plVar20 + 1;
          lVar23 = *(long *)(lVar26 + lVar24) + lVar17;
          lVar17 = lVar17 + 0x30;
          *plVar20 = lVar23;
          plVar20 = plVar21;
        } while (plVar10 + uVar11 != plVar21);
      }
      iVar19 = uVar11 + *(int *)(this + 0x14);
    }
    else {
      plVar22 = *(long **)(this + 8);
    }
    uVar11 = iVar19 - 1;
    *(uint *)(this + 0x14) = uVar11;
    pNVar25 = *(Node **)(plVar22[uVar11 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
                        (ulong)(uVar11 & *(uint *)(this + 0x1c)) * 8);
    *(undefined8 *)(pNVar25 + 0x28) = 0;
    *(ulong *)(pNVar25 + 0x10) = CONCAT44(fStack_64,fStack_68);
    *(undefined1 (*) [16])(pNVar25 + 0x18) = (undefined1  [16])0x0;
    *(undefined8 *)pNVar25 = local_78;
    *(ulong *)(pNVar25 + 8) = CONCAT44(fStack_6c,fStack_70);
    uVar14 = _top_down(this,param_1,iVar18,param_3);
    *(undefined8 *)(pNVar25 + 0x20) = uVar14;
    lVar24 = _top_down(this,param_1 + iVar18,param_2 - iVar18,param_3);
    *(long *)(pNVar25 + 0x28) = lVar24;
    *(Node **)(*(long *)(pNVar25 + 0x20) + 0x18) = pNVar25;
    *(Node **)(lVar24 + 0x18) = pNVar25;
  }
  else {
    _bottom_up(this,param_1,param_2);
    pNVar25 = *param_1;
  }
LAB_001009b4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pNVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicBVH::_node_sort(DynamicBVH::Node*, DynamicBVH::Node*&) */

Node * __thiscall DynamicBVH::_node_sort(DynamicBVH *this,Node *param_1,Node **param_2)

{
  long lVar1;
  Node *pNVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar2 = *(Node **)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x28) == 0) {
    _err_print_error("_node_sort","core/math/dynamic_bvh.cpp",0x103,
                     "Condition \"!n->is_internal()\" is true. Returning: nullptr",0,0);
    param_1 = (Node *)0x0;
  }
  else if (param_1 < pNVar2) {
    lVar3 = *(long *)(pNVar2 + 0x18);
    uVar11 = (ulong)(param_1 != *(Node **)(pNVar2 + 0x28));
    uVar12 = (ulong)(param_1 == *(Node **)(pNVar2 + 0x28));
    lVar4 = *(long *)(pNVar2 + uVar11 * 8 + 0x20);
    if (*(Node **)(pNVar2 + uVar12 * 8 + 0x20) == param_1) {
      if (lVar3 == 0) {
        *param_2 = param_1;
      }
      else {
        *(Node **)(lVar3 + 0x20 + (ulong)(*(Node **)(lVar3 + 0x28) == pNVar2) * 8) = param_1;
      }
      lVar5 = *(long *)(param_1 + 0x28);
      uVar7 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 8);
      *(Node **)(lVar4 + 0x18) = param_1;
      *(Node **)(pNVar2 + 0x18) = param_1;
      uVar9 = *(undefined8 *)pNVar2;
      uVar10 = *(undefined8 *)(pNVar2 + 8);
      *(long *)(param_1 + 0x18) = lVar3;
      lVar3 = *(long *)(param_1 + 0x20);
      *(long *)(pNVar2 + 0x28) = lVar5;
      *(long *)(pNVar2 + 0x20) = lVar3;
      *(Node **)(lVar3 + 0x18) = pNVar2;
      *(Node **)(lVar5 + 0x18) = pNVar2;
      uVar6 = *(undefined8 *)(pNVar2 + 0x10);
      *(Node **)(param_1 + uVar12 * 8 + 0x20) = pNVar2;
      *(long *)(param_1 + uVar11 * 8 + 0x20) = lVar4;
      *(undefined8 *)pNVar2 = uVar7;
      *(undefined8 *)(pNVar2 + 8) = uVar8;
      *(undefined8 *)(pNVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      *(undefined8 *)param_1 = uVar9;
      *(undefined8 *)(param_1 + 8) = uVar10;
      param_1 = pNVar2;
    }
    else {
      _err_print_error("_node_sort","core/math/dynamic_bvh.cpp",0x109,
                       "Condition \"n != p->children[i]\" is true. Returning: nullptr",0,0);
      param_1 = (Node *)0x0;
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* DynamicBVH::clear() */

void __thiscall DynamicBVH::clear(DynamicBVH *this)

{
  if (*(Node **)(this + 0x68) != (Node *)0x0) {
    _recurse_delete_node(this,*(Node **)(this + 0x68));
    *(undefined4 *)(this + 0x70) = 0xffffffff;
    *(undefined4 *)(this + 0x78) = 0;
    return;
  }
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined4 *)(this + 0x78) = 0;
  return;
}



/* DynamicBVH::optimize_bottom_up() */

void __thiscall DynamicBVH::optimize_bottom_up(DynamicBVH *this)

{
  code *pcVar1;
  long in_FS_OFFSET;
  ulong local_28;
  Node **local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(Node **)(this + 0x68) == (Node *)0x0) {
LAB_00100da8:
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_28 = 0;
  local_20 = (Node **)0x0;
  _fetch_leaves(this,*(Node **)(this + 0x68),(LocalVector *)&local_28,-1);
  if ((int)local_28 != 0) {
    _bottom_up(this,local_20,(int)local_28);
    if ((int)local_28 != 0) {
      local_28 = local_28 & 0xffffffff00000000;
      *(Node **)(this + 0x68) = *local_20;
      Memory::free_static(local_20,false);
      goto LAB_00100da8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",false,true
            );
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DynamicBVH::optimize_top_down(int) */

void __thiscall DynamicBVH::optimize_top_down(DynamicBVH *this,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_38;
  Node **local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(Node **)(this + 0x68) != (Node *)0x0) {
    local_38 = 0;
    local_30 = (Node **)0x0;
    _fetch_leaves(this,*(Node **)(this + 0x68),(LocalVector *)&local_38,-1);
    if ((int)local_38 == 0) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = _top_down(this,local_30,(int)local_38,param_1);
    *(undefined8 *)(this + 0x68) = uVar2;
    if (local_30 != (Node **)0x0) {
      if ((int)local_38 != 0) {
        local_38 = local_38 & 0xffffffff00000000;
      }
      Memory::free_static(local_30,false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicBVH::optimize_incremental(int) */

void __thiscall DynamicBVH::optimize_incremental(DynamicBVH *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float *pfVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  byte bVar23;
  long lVar24;
  undefined1 (*pauVar25) [16];
  long *plVar26;
  long *plVar27;
  undefined1 (*pauVar28) [16];
  Node *pNVar29;
  long *plVar30;
  long lVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_58;
  undefined4 uStack_50;
  float afStack_4c [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    param_1 = *(int *)(this + 0x74);
  }
  local_74 = param_1;
  if (0 < param_1) {
    do {
      pNVar29 = *(Node **)(this + 0x68);
      if (pNVar29 == (Node *)0x0) break;
      if (*(long *)(pNVar29 + 0x28) == 0) {
LAB_001013ac:
        *(Node **)(this + 0x68) = pNVar29;
        *(undefined8 *)(pNVar29 + 0x18) = 0;
      }
      else {
        bVar23 = 0;
        do {
          lVar17 = _node_sort(this,pNVar29,(Node **)(this + 0x68));
          pNVar29 = *(Node **)(lVar17 + 0x20 + (ulong)(*(uint *)(this + 0x78) >> bVar23 & 1) * 8);
          bVar23 = bVar23 + 1 & 0x1f;
        } while (*(long *)(pNVar29 + 0x28) != 0);
        if (pNVar29 == *(Node **)(this + 0x68)) goto LAB_001013ac;
        lVar17 = *(long *)(pNVar29 + 0x18);
        pauVar25 = *(undefined1 (**) [16])(lVar17 + 0x18);
        lVar20 = *(long *)(lVar17 + 0x20 + (ulong)(*(Node **)(lVar17 + 0x28) != pNVar29) * 8);
        uVar15 = *(uint *)(this + 0x14);
        uVar9 = *(uint *)(this + 0x1c);
        bVar23 = (byte)*(undefined4 *)(this + 0x18);
        uVar32 = uVar15 >> (bVar23 & 0x1f);
        if (pauVar25 == (undefined1 (*) [16])0x0) {
          *(long *)(this + 0x68) = lVar20;
          *(undefined8 *)(lVar20 + 0x18) = 0;
          plVar30 = *(long **)(this + 8);
          *(long *)(plVar30[uVar32] + (ulong)(uVar15 & uVar9) * 8) = lVar17;
          *(uint *)(this + 0x14) = uVar15 + 1;
        }
        else {
          *(long *)(pauVar25[2] + (ulong)(*(long *)(pauVar25[2] + 8) == lVar17) * 8) = lVar20;
          *(undefined1 (**) [16])(lVar20 + 0x18) = pauVar25;
          plVar30 = *(long **)(this + 8);
          *(long *)(plVar30[uVar32] + (ulong)(uVar15 & uVar9) * 8) = lVar17;
          *(uint *)(this + 0x14) = uVar15 + 1;
          do {
            local_58 = 0;
            fVar1 = *(float *)*pauVar25;
            lVar18 = 0;
            fVar2 = *(float *)(*pauVar25 + 4);
            fVar3 = *(float *)(*pauVar25 + 8);
            uStack_50 = 0;
            fVar4 = *(float *)(*pauVar25 + 0xc);
            fVar5 = *(float *)pauVar25[1];
            afStack_4c[2] = 0.0;
            afStack_4c[0] = 0.0;
            afStack_4c[1] = 0.0;
            fVar6 = *(float *)(pauVar25[1] + 4);
            lVar17 = *(long *)pauVar25[2];
            lVar20 = *(long *)(pauVar25[2] + 8);
            do {
              fVar7 = *(float *)(lVar17 + lVar18);
              fVar8 = *(float *)(lVar20 + lVar18);
              if (fVar8 <= fVar7) {
                fVar7 = fVar8;
              }
              *(float *)((long)&local_58 + lVar18) = fVar7;
              fVar8 = *(float *)(lVar17 + 0xc + lVar18);
              fVar7 = *(float *)(lVar20 + 0xc + lVar18);
              if (fVar8 <= fVar7) {
                fVar8 = fVar7;
              }
              *(float *)((long)afStack_4c + lVar18) = fVar8;
              lVar18 = lVar18 + 4;
            } while (lVar18 != 0xc);
            auVar12._8_4_ = uStack_50;
            auVar12._0_8_ = local_58;
            auVar12._12_4_ = afStack_4c[0];
            *pauVar25 = auVar12;
            *(ulong *)pauVar25[1] = CONCAT44(afStack_4c[2],afStack_4c[1]);
            if ((((fVar1 == *(float *)*pauVar25) && (fVar2 == *(float *)(*pauVar25 + 4))) &&
                (fVar3 == *(float *)(*pauVar25 + 8))) &&
               (((fVar4 == *(float *)(*pauVar25 + 0xc) && (fVar5 == *(float *)pauVar25[1])) &&
                (fVar6 == *(float *)(pauVar25[1] + 4))))) {
              lVar17 = *(long *)(this + 0x68);
              goto joined_r0x001010f9;
            }
            pauVar25 = *(undefined1 (**) [16])(pauVar25[1] + 8);
          } while (pauVar25 != (undefined1 (*) [16])0x0);
        }
        lVar17 = *(long *)(this + 0x68);
joined_r0x001010f9:
        if (lVar17 == 0) goto LAB_001013ac;
        pfVar19 = *(float **)(lVar17 + 0x28);
        if (pfVar19 != (float *)0x0) {
          do {
            pfVar10 = *(float **)(lVar17 + 0x20);
            lVar17 = *(long *)(lVar17 + 0x20 +
                              (ulong)(ABS((*(float *)pNVar29 + *(float *)(pNVar29 + 0xc)) -
                                          (*pfVar19 + pfVar19[3])) +
                                      ABS((*(float *)(pNVar29 + 4) + *(float *)(pNVar29 + 0x10)) -
                                          (pfVar19[1] + pfVar19[4])) +
                                      ABS((*(float *)(pNVar29 + 8) + *(float *)(pNVar29 + 0x14)) -
                                          (pfVar19[2] + pfVar19[5])) <=
                                     ABS((*(float *)pNVar29 + *(float *)(pNVar29 + 0xc)) -
                                         (*pfVar10 + pfVar10[3])) +
                                     ABS((*(float *)(pNVar29 + 4) + *(float *)(pNVar29 + 0x10)) -
                                         (pfVar10[1] + pfVar10[4])) +
                                     ABS((*(float *)(pNVar29 + 8) + *(float *)(pNVar29 + 0x14)) -
                                         (pfVar10[2] + pfVar10[5]))) * 8);
            pfVar19 = *(float **)(lVar17 + 0x28);
          } while (pfVar19 != (float *)0x0);
        }
        local_58 = 0;
        pauVar25 = *(undefined1 (**) [16])(lVar17 + 0x18);
        lVar20 = 0;
        uStack_50 = 0;
        afStack_4c[0] = 0.0;
        afStack_4c[1] = 0.0;
        afStack_4c[2] = 0.0;
        do {
          fVar1 = *(float *)(pNVar29 + lVar20);
          if (*(float *)(lVar17 + lVar20) <= *(float *)(pNVar29 + lVar20)) {
            fVar1 = *(float *)(lVar17 + lVar20);
          }
          *(float *)((long)&local_58 + lVar20) = fVar1;
          fVar1 = *(float *)(lVar17 + 0xc + lVar20);
          fVar2 = *(float *)(pNVar29 + lVar20 + 0xc);
          if (*(float *)(pNVar29 + lVar20 + 0xc) <= fVar1) {
            fVar2 = fVar1;
          }
          *(float *)((long)afStack_4c + lVar20) = fVar2;
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0xc);
        iVar16 = *(int *)(this + 0x14);
        if (iVar16 == 0) {
          uVar15 = *(uint *)(this + 0x10) + 1;
          lVar18 = (ulong)*(uint *)(this + 0x10) * 8;
          *(uint *)(this + 0x10) = uVar15;
          uVar22 = Memory::realloc_static(*(void **)this,(ulong)uVar15 * 8,false);
          *(undefined8 *)this = uVar22;
          uVar22 = Memory::realloc_static
                             (*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
          *(undefined8 *)(this + 8) = uVar22;
          lVar20 = *(long *)this;
          uVar22 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
          uVar15 = *(uint *)(this + 0x20);
          *(undefined8 *)(lVar20 + lVar18) = uVar22;
          lVar20 = *(long *)(this + 8);
          uVar22 = Memory::alloc_static((ulong)uVar15 << 3,false);
          *(undefined8 *)(lVar18 + lVar20) = uVar22;
          uVar15 = *(uint *)(this + 0x20);
          if (uVar15 == 0) {
            plVar30 = *(long **)(this + 8);
          }
          else {
            plVar30 = *(long **)(this + 8);
            lVar20 = *(long *)this;
            plVar11 = (long *)*plVar30;
            lVar24 = 0;
            plVar26 = plVar11;
            do {
              plVar27 = plVar26 + 1;
              lVar31 = *(long *)(lVar18 + lVar20) + lVar24;
              lVar24 = lVar24 + 0x30;
              *plVar26 = lVar31;
              plVar26 = plVar27;
            } while (plVar11 + uVar15 != plVar27);
          }
          bVar23 = (byte)*(undefined4 *)(this + 0x18);
          iVar16 = uVar15 + *(int *)(this + 0x14);
        }
        uVar15 = iVar16 - 1;
        auVar13._8_4_ = uStack_50;
        auVar13._0_8_ = local_58;
        auVar13._12_4_ = afStack_4c[0];
        *(uint *)(this + 0x14) = uVar15;
        pauVar33 = *(undefined1 (**) [16])
                    (plVar30[uVar15 >> (bVar23 & 0x1f)] +
                    (ulong)(uVar15 & *(uint *)(this + 0x1c)) * 8);
        *(undefined8 *)pauVar33[2] = 0;
        *(undefined8 *)(pauVar33[2] + 8) = 0;
        *(undefined1 (**) [16])(pauVar33[1] + 8) = pauVar25;
        *(ulong *)pauVar33[1] = CONCAT44(afStack_4c[2],afStack_4c[1]);
        *pauVar33 = auVar13;
        if (pauVar25 == (undefined1 (*) [16])0x0) {
          *(long *)pauVar33[2] = lVar17;
          *(undefined1 (**) [16])(lVar17 + 0x18) = pauVar33;
          *(Node **)(pauVar33[2] + 8) = pNVar29;
          *(undefined1 (**) [16])(pNVar29 + 0x18) = pauVar33;
          *(undefined1 (**) [16])(this + 0x68) = pauVar33;
        }
        else {
          if (*(long *)(lVar17 + 0x18) == 0) {
            _err_print_error("get_index_in_parent","core/math/dynamic_bvh.h",0xc1,
                             "Parameter \"parent\" is null.",0,0);
            uVar21 = 0;
          }
          else {
            uVar21 = (ulong)(*(long *)(*(long *)(lVar17 + 0x18) + 0x28) == lVar17);
          }
          *(undefined1 (**) [16])(pauVar25[2] + uVar21 * 8) = pauVar33;
          *(long *)pauVar33[2] = lVar17;
          *(undefined1 (**) [16])(lVar17 + 0x18) = pauVar33;
          *(Node **)(pauVar33[2] + 8) = pNVar29;
          *(undefined1 (**) [16])(pNVar29 + 0x18) = pauVar33;
          do {
            pauVar28 = pauVar25;
            if (((*(float *)*pauVar28 <= *(float *)*pauVar33) &&
                (*(float *)(*pauVar28 + 4) <= *(float *)(*pauVar33 + 4))) &&
               ((*(float *)(*pauVar28 + 8) <= *(float *)(*pauVar33 + 8) &&
                (((*(float *)(*pauVar33 + 0xc) <= *(float *)(*pauVar28 + 0xc) &&
                  (*(float *)pauVar33[1] <= *(float *)pauVar28[1])) &&
                 (*(float *)(pauVar33[1] + 4) <= *(float *)(pauVar28[1] + 4))))))) break;
            local_58 = 0;
            lVar17 = *(long *)pauVar28[2];
            lVar18 = 0;
            uStack_50 = 0;
            lVar20 = *(long *)(pauVar28[2] + 8);
            afStack_4c[0] = 0.0;
            afStack_4c[1] = 0.0;
            afStack_4c[2] = 0.0;
            do {
              fVar1 = *(float *)(lVar17 + lVar18);
              fVar2 = *(float *)(lVar20 + lVar18);
              if (fVar2 <= fVar1) {
                fVar1 = fVar2;
              }
              *(float *)((long)&local_58 + lVar18) = fVar1;
              fVar2 = *(float *)(lVar17 + 0xc + lVar18);
              fVar1 = *(float *)(lVar20 + 0xc + lVar18);
              if (fVar2 <= fVar1) {
                fVar2 = fVar1;
              }
              *(float *)((long)afStack_4c + lVar18) = fVar2;
              lVar18 = lVar18 + 4;
            } while (lVar18 != 0xc);
            auVar14._8_4_ = uStack_50;
            auVar14._0_8_ = local_58;
            auVar14._12_4_ = afStack_4c[0];
            *(ulong *)pauVar28[1] = CONCAT44(afStack_4c[2],afStack_4c[1]);
            pauVar25 = *(undefined1 (**) [16])(pauVar28[1] + 8);
            *pauVar28 = auVar14;
            pauVar33 = pauVar28;
          } while (pauVar25 != (undefined1 (*) [16])0x0);
        }
      }
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
      local_74 = local_74 + -1;
    } while (local_74 != 0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DynamicBVH::insert(AABB const&, void*) */

float * __thiscall DynamicBVH::insert(DynamicBVH *this,AABB *param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  long *plVar7;
  uint uVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  byte bVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  uint uVar21;
  int iVar22;
  long *plVar23;
  long lVar24;
  float *pfVar25;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 uStack_50;
  float afStack_4c [3];
  long local_40;
  
  fVar1 = *(float *)(param_1 + 8);
  uVar15 = *(undefined8 *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 8);
  iVar22 = *(int *)(this + 0x14);
  if (iVar22 == 0) {
    uVar8 = *(uint *)(this + 0x10) + 1;
    lVar10 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar8;
    uVar13 = Memory::realloc_static(*(void **)this,(ulong)uVar8 * 8,false);
    *(undefined8 *)this = uVar13;
    uVar13 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar24 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar13;
    uVar13 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
    uVar8 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar24 + lVar10) = uVar13;
    lVar24 = *(long *)(this + 8);
    uVar13 = Memory::alloc_static((ulong)uVar8 << 3,false);
    uVar8 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar24 + lVar10) = uVar13;
    if (uVar8 == 0) {
      plVar23 = *(long **)(this + 8);
    }
    else {
      plVar23 = *(long **)(this + 8);
      lVar24 = *(long *)this;
      plVar7 = (long *)*plVar23;
      lVar12 = 0;
      plVar16 = plVar7;
      do {
        plVar14 = plVar16 + 1;
        lVar19 = *(long *)(lVar24 + lVar10) + lVar12;
        lVar12 = lVar12 + 0x30;
        *plVar16 = lVar19;
        plVar16 = plVar14;
      } while (plVar14 != plVar7 + uVar8);
    }
    iVar22 = uVar8 + *(int *)(this + 0x14);
  }
  else {
    plVar23 = *(long **)(this + 8);
  }
  uVar21 = iVar22 - 1;
  uVar8 = *(uint *)(this + 0x1c);
  *(uint *)(this + 0x14) = uVar21;
  bVar17 = (byte)*(undefined4 *)(this + 0x18);
  pfVar6 = *(float **)(plVar23[uVar21 >> (bVar17 & 0x1f)] + (ulong)(uVar21 & uVar8) * 8);
  pfVar6[6] = 0.0;
  pfVar6[7] = 0.0;
  pfVar6[10] = 0.0;
  pfVar6[0xb] = 0.0;
  *(void **)(pfVar6 + 8) = param_2;
  lVar24 = *(long *)(this + 0x68);
  *(ulong *)(pfVar6 + 4) =
       CONCAT44(fVar1 + fVar2,(float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar3 >> 0x20));
  *(undefined8 *)pfVar6 = uVar5;
  *(ulong *)(pfVar6 + 2) = CONCAT44((float)uVar15 + (float)uVar3,uVar4);
  if (lVar24 == 0) {
    *(float **)(this + 0x68) = pfVar6;
    pfVar6[6] = 0.0;
    pfVar6[7] = 0.0;
  }
  else {
    pfVar9 = *(float **)(lVar24 + 0x28);
    if (pfVar9 != (float *)0x0) {
      do {
        pfVar25 = *(float **)(lVar24 + 0x20);
        lVar24 = *(long *)(lVar24 + 0x20 +
                          (ulong)(ABS((*pfVar6 + pfVar6[3]) - (*pfVar9 + pfVar9[3])) +
                                  ABS((pfVar6[1] + pfVar6[4]) - (pfVar9[1] + pfVar9[4])) +
                                  ABS((pfVar6[2] + pfVar6[5]) - (pfVar9[2] + pfVar9[5])) <=
                                 ABS((*pfVar6 + pfVar6[3]) - (*pfVar25 + pfVar25[3])) +
                                 ABS((pfVar6[1] + pfVar6[4]) - (pfVar25[1] + pfVar25[4])) +
                                 ABS((pfVar6[2] + pfVar6[5]) - (pfVar25[2] + pfVar25[5]))) * 8);
        pfVar9 = *(float **)(lVar24 + 0x28);
      } while (pfVar9 != (float *)0x0);
    }
    local_58 = 0;
    pfVar9 = *(float **)(lVar24 + 0x18);
    lVar10 = 0;
    uStack_50 = 0;
    afStack_4c[0] = 0.0;
    afStack_4c[1] = 0.0;
    afStack_4c[2] = 0.0;
    do {
      fVar1 = *(float *)((long)pfVar6 + lVar10);
      if (*(float *)(lVar24 + lVar10) <= *(float *)((long)pfVar6 + lVar10)) {
        fVar1 = *(float *)(lVar24 + lVar10);
      }
      *(float *)((long)&local_58 + lVar10) = fVar1;
      fVar2 = *(float *)((long)pfVar6 + lVar10 + 0xc);
      fVar1 = *(float *)(lVar24 + 0xc + lVar10);
      if (fVar2 <= fVar1) {
        fVar2 = fVar1;
      }
      *(float *)((long)afStack_4c + lVar10) = fVar2;
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0xc);
    if (uVar21 == 0) {
      uVar8 = *(uint *)(this + 0x10) + 1;
      lVar12 = (ulong)*(uint *)(this + 0x10) * 8;
      *(uint *)(this + 0x10) = uVar8;
      uVar15 = Memory::realloc_static(*(void **)this,(ulong)uVar8 * 8,false);
      *(undefined8 *)this = uVar15;
      uVar15 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false)
      ;
      lVar10 = *(long *)this;
      *(undefined8 *)(this + 8) = uVar15;
      uVar15 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
      uVar8 = *(uint *)(this + 0x20);
      *(undefined8 *)(lVar10 + lVar12) = uVar15;
      lVar10 = *(long *)(this + 8);
      uVar15 = Memory::alloc_static((ulong)uVar8 << 3,false);
      uVar21 = *(uint *)(this + 0x20);
      *(undefined8 *)(lVar10 + lVar12) = uVar15;
      if (uVar21 == 0) {
        plVar23 = *(long **)(this + 8);
      }
      else {
        plVar23 = *(long **)(this + 8);
        lVar10 = *(long *)this;
        plVar7 = (long *)*plVar23;
        lVar19 = 0;
        plVar16 = plVar7;
        do {
          plVar14 = plVar16 + 1;
          lVar18 = *(long *)(lVar12 + lVar10) + lVar19;
          lVar19 = lVar19 + 0x30;
          *plVar16 = lVar18;
          plVar16 = plVar14;
        } while (plVar14 != plVar7 + uVar21);
      }
      bVar17 = (byte)*(undefined4 *)(this + 0x18);
      uVar8 = *(uint *)(this + 0x1c);
      uVar21 = uVar21 + *(int *)(this + 0x14);
    }
    else {
      plVar23 = *(long **)(this + 8);
    }
    uVar21 = uVar21 - 1;
    *(uint *)(this + 0x14) = uVar21;
    pfVar25 = *(float **)(plVar23[uVar21 >> (bVar17 & 0x1f)] + (ulong)(uVar21 & uVar8) * 8);
    pfVar25[8] = 0.0;
    pfVar25[9] = 0.0;
    pfVar25[10] = 0.0;
    pfVar25[0xb] = 0.0;
    *(float **)(pfVar25 + 6) = pfVar9;
    *(ulong *)(pfVar25 + 4) = CONCAT44(afStack_4c[2],afStack_4c[1]);
    *(undefined8 *)pfVar25 = local_58;
    *(ulong *)(pfVar25 + 2) = CONCAT44(afStack_4c[0],uStack_50);
    if (pfVar9 == (float *)0x0) {
      *(long *)(pfVar25 + 8) = lVar24;
      *(float **)(lVar24 + 0x18) = pfVar25;
      *(float **)(pfVar25 + 10) = pfVar6;
      *(float **)(pfVar6 + 6) = pfVar25;
      *(float **)(this + 0x68) = pfVar25;
    }
    else {
      if (*(long *)(lVar24 + 0x18) == 0) {
        _err_print_error("get_index_in_parent","core/math/dynamic_bvh.h",0xc1,
                         "Parameter \"parent\" is null.",0,0);
        uVar11 = 0;
      }
      else {
        uVar11 = (ulong)(*(long *)(*(long *)(lVar24 + 0x18) + 0x28) == lVar24);
      }
      *(float **)(pfVar9 + uVar11 * 2 + 8) = pfVar25;
      *(long *)(pfVar25 + 8) = lVar24;
      *(float **)(lVar24 + 0x18) = pfVar25;
      *(float **)(pfVar25 + 10) = pfVar6;
      *(float **)(pfVar6 + 6) = pfVar25;
      do {
        pfVar20 = pfVar9;
        if ((((*pfVar20 <= *pfVar25) && (pfVar20[1] <= pfVar25[1])) && (pfVar20[2] <= pfVar25[2]))
           && (((pfVar25[3] <= pfVar20[3] && (pfVar25[4] <= pfVar20[4])) &&
               (pfVar25[5] <= pfVar20[5])))) break;
        local_58 = 0;
        lVar24 = *(long *)(pfVar20 + 8);
        lVar12 = 0;
        uStack_50 = 0;
        lVar10 = *(long *)(pfVar20 + 10);
        afStack_4c[0] = 0.0;
        afStack_4c[1] = 0.0;
        afStack_4c[2] = 0.0;
        do {
          fVar1 = *(float *)(lVar24 + lVar12);
          fVar2 = *(float *)(lVar10 + lVar12);
          if (fVar2 <= fVar1) {
            fVar1 = fVar2;
          }
          *(float *)((long)&local_58 + lVar12) = fVar1;
          fVar2 = *(float *)(lVar24 + 0xc + lVar12);
          fVar1 = *(float *)(lVar10 + 0xc + lVar12);
          if (fVar2 <= fVar1) {
            fVar2 = fVar1;
          }
          *(float *)((long)afStack_4c + lVar12) = fVar2;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0xc);
        *(ulong *)(pfVar20 + 4) = CONCAT44(afStack_4c[2],afStack_4c[1]);
        *(undefined8 *)pfVar20 = local_58;
        *(ulong *)(pfVar20 + 2) = CONCAT44(afStack_4c[0],uStack_50);
        pfVar9 = *(float **)(pfVar20 + 6);
        pfVar25 = pfVar20;
      } while (*(float **)(pfVar20 + 6) != (float *)0x0);
    }
  }
  *(int *)(this + 0x74) = *(int *)(this + 0x74) + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pfVar6;
}



/* DynamicBVH::update(DynamicBVH::ID const&, AABB const&) */

undefined8 __thiscall DynamicBVH::update(DynamicBVH *this,ID *param_1,AABB *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  uint uVar10;
  Vector3 *pVVar11;
  float *pfVar12;
  long *plVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  byte bVar23;
  float *pfVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  uint uVar29;
  float *pfVar30;
  long lVar31;
  long in_FS_OFFSET;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_58;
  undefined4 uStack_50;
  float afStack_4c [3];
  long local_40;
  
  pVVar11 = *(Vector3 **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pVVar11 == (Vector3 *)0x0) {
    _err_print_error("update","core/math/dynamic_bvh.cpp",0x16a,
                     "Condition \"!p_id.is_valid()\" is true. Returning: false",0,0);
    uVar22 = 0;
    goto LAB_00102107;
  }
  uVar22 = *(undefined8 *)param_2;
  fVar32 = *(float *)(param_2 + 8) + *(float *)(param_2 + 0x14);
  fVar33 = (float)*(undefined8 *)(param_2 + 0xc) + (float)*(undefined8 *)param_2;
  fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20) +
           (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  uVar9 = *(undefined4 *)(param_2 + 8);
  cVar14 = Vector3::is_equal_approx(pVVar11);
  if ((cVar14 != '\0') && (cVar14 = Vector3::is_equal_approx(pVVar11 + 0xc), cVar14 != '\0')) {
    uVar22 = 0;
    goto LAB_00102107;
  }
  if (pVVar11 == *(Vector3 **)(this + 0x68)) {
LAB_001020e0:
    *(ulong *)(pVVar11 + 0x10) = CONCAT44(fVar32,fVar34);
    *(undefined8 *)pVVar11 = uVar22;
    *(ulong *)(pVVar11 + 8) = CONCAT44(fVar33,uVar9);
LAB_001020f5:
    *(Vector3 **)(this + 0x68) = pVVar11;
    *(undefined8 *)(pVVar11 + 0x18) = 0;
  }
  else {
    lVar20 = *(long *)(pVVar11 + 0x18);
    pfVar24 = *(float **)(lVar20 + 0x18);
    lVar31 = *(long *)(lVar20 + 0x20 + (ulong)(*(Vector3 **)(lVar20 + 0x28) != pVVar11) * 8);
    uVar16 = *(uint *)(this + 0x14);
    uVar10 = *(uint *)(this + 0x1c);
    bVar23 = (byte)*(undefined4 *)(this + 0x18);
    uVar29 = uVar16 >> (bVar23 & 0x1f);
    if (pfVar24 == (float *)0x0) {
      *(long *)(this + 0x68) = lVar31;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      plVar27 = *(long **)(this + 8);
      *(long *)(plVar27[uVar29] + (ulong)(uVar16 & uVar10) * 8) = lVar20;
      pfVar24 = *(float **)(this + 0x68);
      *(uint *)(this + 0x14) = uVar16 + 1;
    }
    else {
      *(long *)(pfVar24 + (ulong)(*(long *)(pfVar24 + 10) == lVar20) * 2 + 8) = lVar31;
      *(float **)(lVar31 + 0x18) = pfVar24;
      plVar27 = *(long **)(this + 8);
      *(long *)(plVar27[uVar29] + (ulong)(uVar16 & uVar10) * 8) = lVar20;
      *(uint *)(this + 0x14) = uVar16 + 1;
      do {
        local_58 = 0;
        fVar1 = *pfVar24;
        lVar18 = 0;
        uStack_50 = 0;
        fVar2 = pfVar24[1];
        afStack_4c[0] = 0.0;
        afStack_4c[1] = 0.0;
        fVar3 = pfVar24[2];
        afStack_4c[2] = 0.0;
        fVar4 = pfVar24[3];
        fVar5 = pfVar24[4];
        fVar6 = pfVar24[5];
        lVar20 = *(long *)(pfVar24 + 8);
        lVar31 = *(long *)(pfVar24 + 10);
        do {
          fVar7 = *(float *)(lVar20 + lVar18);
          fVar8 = *(float *)(lVar31 + lVar18);
          if (fVar8 <= fVar7) {
            fVar7 = fVar8;
          }
          *(float *)((long)&local_58 + lVar18) = fVar7;
          fVar8 = *(float *)(lVar20 + 0xc + lVar18);
          fVar7 = *(float *)(lVar31 + 0xc + lVar18);
          if (fVar8 <= fVar7) {
            fVar8 = fVar7;
          }
          *(float *)((long)afStack_4c + lVar18) = fVar8;
          lVar18 = lVar18 + 4;
        } while (lVar18 != 0xc);
        *(undefined8 *)pfVar24 = local_58;
        *(ulong *)(pfVar24 + 2) = CONCAT44(afStack_4c[0],uStack_50);
        *(ulong *)(pfVar24 + 4) = CONCAT44(afStack_4c[2],afStack_4c[1]);
        if ((((fVar1 == *pfVar24) && (fVar2 == pfVar24[1])) && (fVar3 == pfVar24[2])) &&
           (((fVar4 == pfVar24[3] && (fVar5 == pfVar24[4])) && (fVar6 == pfVar24[5])))) {
          pfVar19 = *(float **)(this + 0x68);
          iVar17 = *(int *)(this + 0x70);
          pfVar30 = pfVar19;
          if (iVar17 < 0) goto LAB_00101d7f;
          goto LAB_00101d56;
        }
        pfVar24 = *(float **)(pfVar24 + 6);
      } while (pfVar24 != (float *)0x0);
      pfVar24 = *(float **)(this + 0x68);
    }
    if (pfVar24 == (float *)0x0) goto LAB_001020e0;
    iVar17 = *(int *)(this + 0x70);
    pfVar19 = pfVar24;
    if (-1 < iVar17) {
LAB_00101d56:
      iVar15 = 0;
      pfVar30 = pfVar24;
      if (iVar17 != 0) {
        do {
          pfVar12 = *(float **)(pfVar24 + 6);
          pfVar30 = pfVar24;
          if (pfVar12 == (float *)0x0) break;
          iVar15 = iVar15 + 1;
          pfVar24 = pfVar12;
          pfVar30 = pfVar12;
        } while (iVar15 != iVar17);
      }
LAB_00101d7f:
      *(undefined8 *)pVVar11 = uVar22;
      *(ulong *)(pVVar11 + 8) = CONCAT44(fVar33,uVar9);
      *(ulong *)(pVVar11 + 0x10) = CONCAT44(fVar32,fVar34);
      pfVar24 = pfVar30;
      if (pfVar19 != (float *)0x0) goto LAB_00101d9d;
      goto LAB_001020f5;
    }
    *(ulong *)(pVVar11 + 0x10) = CONCAT44(fVar32,fVar34);
    *(undefined8 *)pVVar11 = uVar22;
    *(ulong *)(pVVar11 + 8) = CONCAT44(fVar33,uVar9);
LAB_00101d9d:
    pfVar19 = *(float **)(pfVar24 + 10);
    if (pfVar19 != (float *)0x0) {
      do {
        pfVar30 = *(float **)(pfVar24 + 8);
        pfVar24 = *(float **)
                   (pfVar24 +
                   (ulong)(ABS((*(float *)pVVar11 + *(float *)(pVVar11 + 0xc)) -
                               (*pfVar19 + pfVar19[3])) +
                           ABS((*(float *)(pVVar11 + 4) + *(float *)(pVVar11 + 0x10)) -
                               (pfVar19[1] + pfVar19[4])) +
                           ABS((*(float *)(pVVar11 + 8) + *(float *)(pVVar11 + 0x14)) -
                               (pfVar19[2] + pfVar19[5])) <=
                          ABS((*(float *)pVVar11 + *(float *)(pVVar11 + 0xc)) -
                              (*pfVar30 + pfVar30[3])) +
                          ABS((*(float *)(pVVar11 + 4) + *(float *)(pVVar11 + 0x10)) -
                              (pfVar30[1] + pfVar30[4])) +
                          ABS((*(float *)(pVVar11 + 8) + *(float *)(pVVar11 + 0x14)) -
                              (pfVar30[2] + pfVar30[5]))) * 2 + 8);
        pfVar19 = *(float **)(pfVar24 + 10);
      } while (pfVar19 != (float *)0x0);
    }
    local_58 = 0;
    pfVar19 = *(float **)(pfVar24 + 6);
    lVar20 = 0;
    uStack_50 = 0;
    afStack_4c[0] = 0.0;
    afStack_4c[1] = 0.0;
    afStack_4c[2] = 0.0;
    do {
      fVar32 = *(float *)(pVVar11 + lVar20);
      if (*(float *)((long)pfVar24 + lVar20) <= *(float *)(pVVar11 + lVar20)) {
        fVar32 = *(float *)((long)pfVar24 + lVar20);
      }
      *(float *)((long)&local_58 + lVar20) = fVar32;
      fVar32 = *(float *)((long)pfVar24 + lVar20 + 0xc);
      fVar33 = *(float *)(pVVar11 + lVar20 + 0xc);
      if (*(float *)(pVVar11 + lVar20 + 0xc) <= fVar32) {
        fVar33 = fVar32;
      }
      *(float *)((long)afStack_4c + lVar20) = fVar33;
      lVar20 = lVar20 + 4;
    } while (lVar20 != 0xc);
    iVar17 = *(int *)(this + 0x14);
    if (iVar17 == 0) {
      uVar16 = *(uint *)(this + 0x10) + 1;
      lVar31 = (ulong)*(uint *)(this + 0x10) * 8;
      *(uint *)(this + 0x10) = uVar16;
      uVar22 = Memory::realloc_static(*(void **)this,(ulong)uVar16 * 8,false);
      *(undefined8 *)this = uVar22;
      uVar22 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false)
      ;
      lVar20 = *(long *)this;
      *(undefined8 *)(this + 8) = uVar22;
      uVar22 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
      uVar16 = *(uint *)(this + 0x20);
      *(undefined8 *)(lVar20 + lVar31) = uVar22;
      lVar20 = *(long *)(this + 8);
      uVar22 = Memory::alloc_static((ulong)uVar16 << 3,false);
      *(undefined8 *)(lVar20 + lVar31) = uVar22;
      uVar16 = *(uint *)(this + 0x20);
      if (uVar16 == 0) {
        plVar27 = *(long **)(this + 8);
      }
      else {
        plVar27 = *(long **)(this + 8);
        lVar20 = *(long *)this;
        plVar13 = (long *)*plVar27;
        lVar18 = 0;
        plVar25 = plVar13;
        do {
          plVar26 = plVar25 + 1;
          lVar28 = *(long *)(lVar31 + lVar20) + lVar18;
          lVar18 = lVar18 + 0x30;
          *plVar25 = lVar28;
          plVar25 = plVar26;
        } while (plVar13 + uVar16 != plVar26);
      }
      bVar23 = (byte)*(undefined4 *)(this + 0x18);
      iVar17 = uVar16 + *(int *)(this + 0x14);
    }
    uVar16 = iVar17 - 1;
    *(uint *)(this + 0x14) = uVar16;
    pfVar30 = *(float **)
               (plVar27[uVar16 >> (bVar23 & 0x1f)] + (ulong)(uVar16 & *(uint *)(this + 0x1c)) * 8);
    pfVar30[8] = 0.0;
    pfVar30[9] = 0.0;
    pfVar30[10] = 0.0;
    pfVar30[0xb] = 0.0;
    *(float **)(pfVar30 + 6) = pfVar19;
    *(ulong *)(pfVar30 + 4) = CONCAT44(afStack_4c[2],afStack_4c[1]);
    *(undefined8 *)pfVar30 = local_58;
    *(ulong *)(pfVar30 + 2) = CONCAT44(afStack_4c[0],uStack_50);
    if (pfVar19 == (float *)0x0) {
      *(float **)(pfVar30 + 8) = pfVar24;
      *(float **)(pfVar24 + 6) = pfVar30;
      *(Vector3 **)(pfVar30 + 10) = pVVar11;
      *(float **)(pVVar11 + 0x18) = pfVar30;
      *(float **)(this + 0x68) = pfVar30;
    }
    else {
      if (*(long *)(pfVar24 + 6) == 0) {
        _err_print_error("get_index_in_parent","core/math/dynamic_bvh.h",0xc1,
                         "Parameter \"parent\" is null.",0,0);
        uVar21 = 0;
      }
      else {
        uVar21 = (ulong)(*(float **)(*(long *)(pfVar24 + 6) + 0x28) == pfVar24);
      }
      *(float **)(pfVar19 + uVar21 * 2 + 8) = pfVar30;
      *(float **)(pfVar30 + 8) = pfVar24;
      *(float **)(pfVar24 + 6) = pfVar30;
      *(Vector3 **)(pfVar30 + 10) = pVVar11;
      *(float **)(pVVar11 + 0x18) = pfVar30;
      do {
        pfVar24 = pfVar19;
        if (((*pfVar24 <= *pfVar30) && (pfVar24[1] <= pfVar30[1])) &&
           ((pfVar24[2] <= pfVar30[2] &&
            (((pfVar30[3] <= pfVar24[3] && (pfVar30[4] <= pfVar24[4])) && (pfVar30[5] <= pfVar24[5])
             ))))) break;
        local_58 = 0;
        lVar20 = *(long *)(pfVar24 + 8);
        lVar18 = 0;
        uStack_50 = 0;
        lVar31 = *(long *)(pfVar24 + 10);
        afStack_4c[0] = 0.0;
        afStack_4c[1] = 0.0;
        afStack_4c[2] = 0.0;
        do {
          fVar32 = *(float *)(lVar20 + lVar18);
          fVar33 = *(float *)(lVar31 + lVar18);
          if (fVar33 <= fVar32) {
            fVar32 = fVar33;
          }
          *(float *)((long)&local_58 + lVar18) = fVar32;
          fVar33 = *(float *)(lVar20 + 0xc + lVar18);
          fVar32 = *(float *)(lVar31 + 0xc + lVar18);
          if (fVar33 <= fVar32) {
            fVar33 = fVar32;
          }
          *(float *)((long)afStack_4c + lVar18) = fVar33;
          lVar18 = lVar18 + 4;
        } while (lVar18 != 0xc);
        *(ulong *)(pfVar24 + 4) = CONCAT44(afStack_4c[2],afStack_4c[1]);
        *(undefined8 *)pfVar24 = local_58;
        *(ulong *)(pfVar24 + 2) = CONCAT44(afStack_4c[0],uStack_50);
        pfVar19 = *(float **)(pfVar24 + 6);
        pfVar30 = pfVar24;
      } while (*(float **)(pfVar24 + 6) != (float *)0x0);
    }
  }
  uVar22 = 1;
LAB_00102107:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
}



/* DynamicBVH::remove(DynamicBVH::ID const&) */

void __thiscall DynamicBVH::remove(DynamicBVH *this,ID *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  float fVar19;
  undefined8 local_38;
  undefined4 uStack_30;
  float afStack_2c [3];
  long local_20;
  
  lVar10 = *(long *)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("remove","core/math/dynamic_bvh.cpp",0x186,
                       "Condition \"!p_id.is_valid()\" is true.",0,0);
      return;
    }
  }
  else {
    uVar17 = *(uint *)(this + 0x14);
    uVar8 = *(undefined4 *)(this + 0x18);
    uVar9 = *(uint *)(this + 0x1c);
    uVar16 = (ulong)(uVar17 >> ((byte)uVar8 & 0x1f));
    uVar18 = (ulong)(uVar17 & uVar9);
    if (lVar10 == *(long *)(this + 0x68)) {
      *(undefined8 *)(this + 0x68) = 0;
      lVar15 = *(long *)(this + 8);
    }
    else {
      lVar11 = *(long *)(lVar10 + 0x18);
      pfVar14 = *(float **)(lVar11 + 0x18);
      lVar12 = *(long *)(lVar11 + 0x20 + (ulong)(*(long *)(lVar11 + 0x28) != lVar10) * 8);
      if (pfVar14 == (float *)0x0) {
        lVar15 = *(long *)(this + 8);
        *(long *)(this + 0x68) = lVar12;
        *(undefined8 *)(lVar12 + 0x18) = 0;
        *(long *)(*(long *)(lVar15 + uVar16 * 8) + uVar18 * 8) = lVar11;
      }
      else {
        *(long *)(pfVar14 + (ulong)(*(long *)(pfVar14 + 10) == lVar11) * 2 + 8) = lVar12;
        lVar15 = *(long *)(this + 8);
        *(float **)(lVar12 + 0x18) = pfVar14;
        *(long *)(*(long *)(lVar15 + uVar16 * 8) + uVar18 * 8) = lVar11;
        do {
          local_38 = 0;
          fVar1 = *pfVar14;
          lVar13 = 0;
          uStack_30 = 0;
          fVar2 = pfVar14[1];
          afStack_2c[0] = 0.0;
          afStack_2c[1] = 0.0;
          fVar3 = pfVar14[2];
          afStack_2c[2] = 0.0;
          fVar4 = pfVar14[3];
          fVar5 = pfVar14[4];
          fVar6 = pfVar14[5];
          lVar11 = *(long *)(pfVar14 + 8);
          lVar12 = *(long *)(pfVar14 + 10);
          do {
            fVar19 = *(float *)(lVar11 + lVar13);
            fVar7 = *(float *)(lVar12 + lVar13);
            if (fVar7 <= fVar19) {
              fVar19 = fVar7;
            }
            *(float *)((long)&local_38 + lVar13) = fVar19;
            fVar19 = *(float *)(lVar11 + 0xc + lVar13);
            fVar7 = *(float *)(lVar12 + 0xc + lVar13);
            if (fVar19 <= fVar7) {
              fVar19 = fVar7;
            }
            *(float *)((long)afStack_2c + lVar13) = fVar19;
            lVar13 = lVar13 + 4;
          } while (lVar13 != 0xc);
          *(undefined8 *)pfVar14 = local_38;
          *(ulong *)(pfVar14 + 2) = CONCAT44(afStack_2c[0],uStack_30);
          *(ulong *)(pfVar14 + 4) = CONCAT44(afStack_2c[2],afStack_2c[1]);
        } while (((((fVar1 != *pfVar14) || (fVar2 != pfVar14[1])) || (fVar3 != pfVar14[2])) ||
                 (((fVar4 != pfVar14[3] || (fVar5 != pfVar14[4])) || (fVar6 != pfVar14[5])))) &&
                (pfVar14 = *(float **)(pfVar14 + 6), pfVar14 != (float *)0x0));
      }
      uVar17 = uVar17 + 1;
    }
    *(long *)(*(long *)(lVar15 + (ulong)(uVar17 >> ((byte)uVar8 & 0x1f)) * 8) +
             (ulong)(uVar9 & uVar17) * 8) = lVar10;
    *(int *)(this + 0x74) = *(int *)(this + 0x74) + -1;
    *(uint *)(this + 0x14) = uVar17 + 1;
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicBVH::_extract_leaves(DynamicBVH::Node*, List<DynamicBVH::ID, DefaultAllocator>*) */

void __thiscall DynamicBVH::_extract_leaves(DynamicBVH *this,Node *param_1,List *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  
  lVar2 = *(long *)(param_1 + 0x28);
  while (lVar2 != 0) {
    _extract_leaves(this,*(Node **)(param_1 + 0x20),param_2);
    param_1 = *(Node **)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x28);
  }
  if (*(long *)param_2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_2 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  plVar3 = (long *)operator_new(0x20,DefaultAllocator::alloc);
  plVar1 = *(long **)param_2;
  plVar3[1] = 0;
  lVar2 = plVar1[1];
  *plVar3 = (long)param_1;
  plVar3[3] = (long)plVar1;
  plVar3[2] = lVar2;
  if (lVar2 != 0) {
    *(long **)(lVar2 + 8) = plVar3;
  }
  plVar1[1] = (long)plVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)plVar3;
  return;
}



/* DynamicBVH::set_index(unsigned int) */

void __thiscall DynamicBVH::set_index(DynamicBVH *this,uint param_1)

{
  if (*(long *)(this + 0x68) == 0) {
    *(uint *)(this + 0x7c) = param_1;
    return;
  }
  _err_print_error("set_index","core/math/dynamic_bvh.cpp",0x199,
                   "Condition \"bvh_root != nullptr\" is true.",0,0);
  return;
}



/* DynamicBVH::get_index() const */

undefined4 __thiscall DynamicBVH::get_index(DynamicBVH *this)

{
  return *(undefined4 *)(this + 0x7c);
}



/* DynamicBVH::get_elements(List<DynamicBVH::ID, DefaultAllocator>*) */

void __thiscall DynamicBVH::get_elements(DynamicBVH *this,List *param_1)

{
  if (*(Node **)(this + 0x68) != (Node *)0x0) {
    _extract_leaves(this,*(Node **)(this + 0x68),param_1);
    return;
  }
  return;
}



/* DynamicBVH::get_leaf_count() const */

undefined4 __thiscall DynamicBVH::get_leaf_count(DynamicBVH *this)

{
  return *(undefined4 *)(this + 0x74);
}



/* DynamicBVH::get_max_depth() const */

int __thiscall DynamicBVH::get_max_depth(DynamicBVH *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  lVar3 = *(long *)(this + 0x68);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0;
  if (lVar3 != 0) {
    local_24 = 0;
    iVar2 = 1;
    if (*(long *)(lVar3 + 0x28) != 0) {
      iVar4 = 1;
      lVar5 = *(long *)(lVar3 + 0x28);
      do {
        iVar4 = iVar4 + 1;
        Node::get_max_depth(*(Node **)(lVar3 + 0x20),iVar4,&local_24);
        plVar1 = (long *)(lVar5 + 0x28);
        lVar3 = lVar5;
        lVar5 = *plVar1;
      } while (*plVar1 != 0);
      iVar2 = local_24;
      if (local_24 <= iVar4) {
        iVar2 = iVar4;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicBVH::~DynamicBVH() */

void __thiscall DynamicBVH::~DynamicBVH(DynamicBVH *this)

{
  if (*(Node **)(this + 0x68) != (Node *)0x0) {
    _recurse_delete_node(this,*(Node **)(this + 0x68));
  }
  *(undefined4 *)((PagedAllocator<DynamicBVH::Node,false,4096u> *)this + 0x70) = 0xffffffff;
  *(undefined4 *)((PagedAllocator<DynamicBVH::Node,false,4096u> *)this + 0x78) = 0;
  PagedAllocator<DynamicBVH::Node,false,4096u>::~PagedAllocator
            ((PagedAllocator<DynamicBVH::Node,false,4096u> *)this);
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* DynamicBVH::Node::get_max_depth(int, int&) */

void __thiscall DynamicBVH::Node::get_max_depth(Node *this,int param_1,int *param_2)

{
  long lVar1;
  Node *pNVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  Node *pNVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  
  pNVar11 = *(Node **)(this + 0x28);
  if (*(Node **)(this + 0x28) == (Node *)0x0) {
    iVar19 = *param_2;
  }
  else {
    do {
      param_1 = param_1 + 1;
      lVar20 = *(long *)(*(long *)(this + 0x20) + 0x28);
      lVar4 = *(long *)(this + 0x20);
      iVar7 = param_1;
      if (lVar20 == 0) {
        iVar19 = *param_2;
        iVar16 = param_1;
      }
      else {
        do {
          iVar16 = iVar7 + 1;
          lVar18 = *(long *)(*(long *)(lVar4 + 0x20) + 0x28);
          if (lVar18 != 0) {
            lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x20);
            iVar7 = iVar7 + 2;
            lVar12 = *(long *)(lVar4 + 0x28);
            iVar17 = iVar7;
            if (lVar12 == 0) goto LAB_00102a42;
            do {
              do {
                iVar17 = iVar17 + 1;
                lVar15 = *(long *)(*(long *)(lVar4 + 0x20) + 0x28);
                lVar4 = *(long *)(lVar4 + 0x20);
                iVar19 = iVar17;
                if (lVar15 == 0) {
                  iVar3 = *param_2;
                }
                else {
                  do {
                    lVar14 = lVar15;
                    iVar19 = iVar19 + 1;
                    lVar15 = *(long *)(*(long *)(lVar4 + 0x20) + 0x28);
                    lVar4 = *(long *)(lVar4 + 0x20);
                    iVar8 = iVar19;
                    if (lVar15 == 0) {
                      iVar3 = *param_2;
                    }
                    else {
                      do {
                        iVar8 = iVar8 + 1;
                        lVar10 = *(long *)(*(long *)(lVar4 + 0x20) + 0x28);
                        lVar4 = *(long *)(lVar4 + 0x20);
                        iVar5 = iVar8;
                        if (lVar10 == 0) {
                          iVar3 = *param_2;
                        }
                        else {
                          do {
                            iVar5 = iVar5 + 1;
                            lVar1 = *(long *)(*(long *)(lVar4 + 0x20) + 0x28);
                            lVar4 = *(long *)(lVar4 + 0x20);
                            iVar13 = iVar5;
                            if (lVar1 == 0) {
                              iVar3 = *param_2;
                            }
                            else {
                              do {
                                lVar6 = lVar1;
                                iVar13 = iVar13 + 1;
                                lVar1 = *(long *)(lVar4 + 0x20);
                                iVar9 = iVar13;
                                for (lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x28); lVar4 != 0;
                                    lVar4 = *(long *)(lVar4 + 0x28)) {
                                  iVar9 = iVar9 + 1;
                                  get_max_depth(*(Node **)(lVar1 + 0x20),iVar9,param_2);
                                  lVar1 = lVar4;
                                }
                                lVar1 = *(long *)(lVar6 + 0x28);
                                iVar3 = *param_2;
                                if (*param_2 <= iVar9) {
                                  iVar3 = iVar9;
                                }
                                *param_2 = iVar3;
                                lVar4 = lVar6;
                              } while (lVar1 != 0);
                            }
                            lVar1 = *(long *)(lVar10 + 0x28);
                            if (iVar3 <= iVar13) {
                              iVar3 = iVar13;
                            }
                            *param_2 = iVar3;
                            lVar4 = lVar10;
                            lVar10 = lVar1;
                          } while (lVar1 != 0);
                        }
                        if (iVar3 <= iVar5) {
                          iVar3 = iVar5;
                        }
                        lVar10 = *(long *)(lVar15 + 0x28);
                        *param_2 = iVar3;
                        lVar4 = lVar15;
                        lVar15 = lVar10;
                      } while (lVar10 != 0);
                    }
                    lVar15 = *(long *)(lVar14 + 0x28);
                    if (iVar3 <= iVar8) {
                      iVar3 = iVar8;
                    }
                    *param_2 = iVar3;
                    lVar4 = lVar14;
                  } while (lVar15 != 0);
                }
                lVar15 = *(long *)(lVar12 + 0x28);
                if (iVar19 < iVar3) {
                  iVar19 = iVar3;
                }
                *param_2 = iVar19;
                lVar4 = lVar12;
                lVar12 = lVar15;
              } while (lVar15 != 0);
              while( true ) {
                lVar15 = *(long *)(lVar18 + 0x28);
                if (iVar19 <= iVar17) {
                  iVar19 = iVar17;
                }
                *param_2 = iVar19;
                if (lVar15 == 0) goto LAB_00102a64;
                iVar7 = iVar7 + 1;
                lVar12 = *(long *)(*(long *)(lVar18 + 0x20) + 0x28);
                lVar4 = *(long *)(lVar18 + 0x20);
                lVar18 = lVar15;
                iVar17 = iVar7;
                if (lVar12 != 0) break;
LAB_00102a42:
                iVar19 = *param_2;
                iVar17 = iVar7;
              }
            } while( true );
          }
          iVar19 = *param_2;
          iVar7 = iVar16;
LAB_00102a64:
          lVar18 = *(long *)(lVar20 + 0x28);
          if (iVar19 <= iVar7) {
            iVar19 = iVar7;
          }
          *param_2 = iVar19;
          lVar4 = lVar20;
          lVar20 = lVar18;
          iVar7 = iVar16;
        } while (lVar18 != 0);
      }
      pNVar2 = *(Node **)(pNVar11 + 0x28);
      if (iVar19 <= iVar16) {
        iVar19 = iVar16;
      }
      *param_2 = iVar19;
      this = pNVar11;
      pNVar11 = pNVar2;
    } while (pNVar2 != (Node *)0x0);
  }
  if (param_1 < iVar19) {
    param_1 = iVar19;
  }
  *param_2 = param_1;
  return;
}



/* PagedAllocator<DynamicBVH::Node, false, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<DynamicBVH::Node,false,4096u>::~PagedAllocator
          (PagedAllocator<DynamicBVH::Node,false,4096u> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x14) < (uint)(*(int *)(this + 0x20) * *(int *)(this + 0x10))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_40 = 0;
      local_30 = 0x13;
      local_38 = "N10DynamicBVH4NodeE";
      String::parse_latin1((StrRange *)&local_40);
      local_38 = "Pages in use exist at exit in PagedAllocator: ";
      local_48 = 0;
      local_30 = 0x2e;
      String::parse_latin1((StrRange *)&local_48);
      String::operator+((String *)&local_38,(String *)&local_48);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_38,0,0);
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
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x10) != 0) {
    lVar4 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)this + lVar4 * 8),false);
      lVar2 = lVar4 * 8;
      lVar4 = lVar4 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar2),false);
    } while ((uint)lVar4 < *(uint *)(this + 0x10));
    Memory::free_static(*(void **)this,false);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 8),false);
      return;
    }
    goto LAB_00102fc3;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102fc3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* PagedAllocator<DynamicBVH::Node, false, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<DynamicBVH::Node,false,4096u>::~PagedAllocator
          (PagedAllocator<DynamicBVH::Node,false,4096u> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


