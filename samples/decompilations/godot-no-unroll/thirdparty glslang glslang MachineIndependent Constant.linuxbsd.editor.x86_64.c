
/* glslang::TIntermConstantUnion::fold(glslang::TOperator, glslang::TIntermTyped const*) const */

TIntermTyped * __thiscall
glslang::TIntermConstantUnion::fold(TIntermConstantUnion *this,int param_2,long *param_3)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  undefined8 *puVar10;
  TConstUnion *pTVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  double dVar15;
  TIntermConstantUnion TVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  ulong uVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  double *pdVar31;
  ulong *puVar32;
  undefined8 *puVar33;
  TType *this_00;
  TIntermConstantUnion *pTVar34;
  long *plVar35;
  TIntermTyped *this_01;
  ulong *puVar36;
  undefined4 uVar37;
  ulong *puVar38;
  long lVar39;
  TConstUnion *pTVar40;
  byte bVar41;
  int iVar42;
  TConstUnion *pTVar43;
  ushort *puVar44;
  short *psVar45;
  uint *puVar46;
  int *piVar47;
  char *pcVar48;
  double *pdVar49;
  double *pdVar50;
  code *pcVar51;
  byte *pbVar52;
  ulong *puVar53;
  double *pdVar54;
  bool bVar55;
  int iVar56;
  TConstUnion *pTVar57;
  ulong uVar58;
  undefined1 (*pauVar59) [12];
  long lVar60;
  long in_FS_OFFSET;
  double dVar61;
  undefined1 auVar62 [12];
  ulong *local_1c8;
  undefined **local_d8;
  undefined4 local_d0;
  long local_c8;
  ulong uStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  ulong local_a8;
  ulong uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  ulong uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  uint local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_d0 = local_d0 & 0xf81fffff;
  local_d8 = &PTR__TType_0010e880;
  if (*(code **)(*(long *)this + 0xf0) == TIntermTyped::getType) {
    pTVar34 = this + 0x20;
  }
  else {
    pTVar34 = (TIntermConstantUnion *)(**(code **)(*(long *)this + 0xf0))();
  }
  local_58 = *(uint *)(pTVar34 + 0x80);
  local_c8 = *(long *)(pTVar34 + 0x10);
  uStack_c0 = *(ulong *)(pTVar34 + 0x18);
  local_a8 = *(ulong *)(pTVar34 + 0x30);
  uStack_a0 = *(ulong *)(pTVar34 + 0x38);
  local_88 = *(long *)(pTVar34 + 0x50);
  uStack_80 = *(ulong *)(pTVar34 + 0x58);
  local_68 = *(undefined1 (*) [16])(pTVar34 + 0x70);
  local_b8 = (uint)*(undefined8 *)(pTVar34 + 0x20);
  uStack_b4 = (undefined4)((ulong)*(undefined8 *)(pTVar34 + 0x20) >> 0x20);
  uStack_b0 = (undefined4)*(undefined8 *)(pTVar34 + 0x28);
  uStack_ac = (uint)((ulong)*(undefined8 *)(pTVar34 + 0x28) >> 0x20);
  uVar18 = local_d0 >> 0x10;
  local_98 = (uint)*(undefined8 *)(pTVar34 + 0x40);
  uStack_94 = (undefined4)((ulong)*(undefined8 *)(pTVar34 + 0x40) >> 0x20);
  uStack_90 = (undefined4)*(undefined8 *)(pTVar34 + 0x48);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)(pTVar34 + 0x48) >> 0x20);
  local_78 = *(undefined1 (*) [16])(pTVar34 + 0x60);
  local_50 = *(undefined1 (*) [16])(pTVar34 + 0x88);
  local_d0._0_2_ = (undefined2)(*(uint *)(pTVar34 + 8) & 0x1fffff);
  local_d0 = CONCAT22(*(ushort *)(pTVar34 + 10) & 0x7e0 |
                      (ushort)uVar18 & 0xf800 |
                      (ushort)((*(uint *)(pTVar34 + 8) & 0x1fffff) >> 0x10),(undefined2)local_d0);
  plVar22 = (long *)(**(code **)(*param_3 + 0x88))(param_3);
  puVar32 = *(ulong **)(this + 0xc0);
  puVar24 = (ulong *)plVar22[0x18];
  if (param_2 != 0xb1) {
    if (param_2 != 0x129) {
      if (param_2 == 0xb0) {
        lVar39 = *plVar22;
        if (*(code **)(lVar39 + 0x138) != TIntermTyped::getMatrixCols) {
          uVar18 = (**(code **)(lVar39 + 0x138))(plVar22);
          if (uVar18 == 0) {
            lVar39 = *plVar22;
            goto LAB_001006ab;
          }
          goto LAB_00100a03;
        }
        bVar41 = *(byte *)((long)plVar22 + 0x29) >> 4;
        uVar18 = (uint)bVar41;
        if (bVar41 != 0) goto LAB_00100a03;
LAB_001006ab:
        puVar27 = (ulong *)0x0;
        goto LAB_001006ae;
      }
      if (*(code **)(*(long *)this + 0xf0) == TIntermTyped::getType) {
        pTVar34 = this + 0x20;
      }
      else {
        pTVar34 = (TIntermConstantUnion *)(**(code **)(*(long *)this + 0xf0))(this);
      }
      uVar18 = TType::computeNumComponents((TType *)pTVar34);
      if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
        this_00 = (TType *)(param_3 + 4);
      }
      else {
        this_00 = (TType *)(**(code **)(*param_3 + 0xf0))(param_3);
      }
      uVar19 = TType::computeNumComponents(this_00);
      if ((uVar19 == 1) && (1 < (int)uVar18)) {
        uVar58 = (ulong)(int)uVar18;
        puVar10 = *(undefined8 **)(plVar22[0x18] + 8);
        uVar23 = glslang::GetThreadPoolAllocator();
        puVar24 = (ulong *)glslang::TPoolAllocator::allocate(uVar23);
        uVar23 = glslang::GetThreadPoolAllocator();
        *puVar24 = uVar23;
        puVar24[1] = 0;
        puVar24[2] = 0;
        puVar24[3] = 0;
        puVar25 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar23);
        puVar24[1] = (ulong)puVar25;
        puVar24[3] = (ulong)(puVar25 + uVar58 * 2);
        puVar33 = puVar25;
        do {
          uVar14 = puVar10[1];
          puVar26 = puVar33 + 2;
          *puVar33 = *puVar10;
          puVar33[1] = uVar14;
          puVar33 = puVar26;
        } while (puVar26 != puVar25 + uVar58 * 2);
        puVar24[2] = (ulong)puVar26;
LAB_00100286:
        local_1c8 = (ulong *)(uVar58 * 0x10);
        uVar23 = glslang::GetThreadPoolAllocator();
        puVar27 = (ulong *)glslang::TPoolAllocator::allocate(uVar23);
        uVar23 = glslang::GetThreadPoolAllocator();
        goto LAB_001002b4;
      }
      if ((1 < (int)uVar19) && (uVar18 == 1)) {
        puVar24 = (ulong *)plVar22[0x18];
        puVar10 = *(undefined8 **)(*(long *)(this + 0xc0) + 8);
        uVar23 = glslang::GetThreadPoolAllocator();
        puVar32 = (ulong *)glslang::TPoolAllocator::allocate(uVar23);
        uVar58 = (ulong)(int)uVar19;
        uVar23 = glslang::GetThreadPoolAllocator();
        puVar32[1] = 0;
        *puVar32 = uVar23;
        puVar32[2] = 0;
        puVar32[3] = 0;
        puVar25 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar23);
        puVar32[1] = (ulong)puVar25;
        puVar32[3] = (ulong)(puVar25 + uVar58 * 2);
        puVar33 = puVar25;
        do {
          uVar14 = puVar10[1];
          puVar26 = puVar33 + 2;
          *puVar33 = *puVar10;
          puVar33[1] = uVar14;
          puVar33 = puVar26;
        } while (puVar26 != puVar25 + uVar58 * 2);
        puVar32[2] = (ulong)puVar26;
        if (*(code **)(*plVar22 + 0xf0) == TIntermTyped::getType) {
          plVar35 = plVar22 + 4;
        }
        else {
          plVar35 = (long *)(**(code **)(*plVar22 + 0xf0))(plVar22);
        }
        local_58 = *(uint *)(plVar35 + 0x10);
        local_c8 = plVar35[2];
        uStack_c0 = plVar35[3];
        local_a8 = plVar35[6];
        uStack_a0 = plVar35[7];
        uVar18 = local_d0 >> 0x10;
        local_b8 = (uint)plVar35[4];
        uStack_b4 = (undefined4)((ulong)plVar35[4] >> 0x20);
        uStack_b0 = (undefined4)plVar35[5];
        uStack_ac = (uint)((ulong)plVar35[5] >> 0x20);
        local_88 = plVar35[10];
        uStack_80 = plVar35[0xb];
        local_78 = *(undefined1 (*) [16])(plVar35 + 0xc);
        local_98 = (uint)plVar35[8];
        uStack_94 = (undefined4)((ulong)plVar35[8] >> 0x20);
        uStack_90 = (undefined4)plVar35[9];
        uStack_8c = (undefined4)((ulong)plVar35[9] >> 0x20);
        local_68 = *(undefined1 (*) [16])(plVar35 + 0xe);
        local_50 = *(undefined1 (*) [16])(plVar35 + 0x11);
        local_d0._0_2_ = (undefined2)(*(uint *)(plVar35 + 1) & 0x1fffff);
        local_d0 = CONCAT22(*(ushort *)((long)plVar35 + 10) & 0x7e0 |
                            (ushort)uVar18 & 0xf800 |
                            (ushort)((*(uint *)(plVar35 + 1) & 0x1fffff) >> 0x10),
                            (undefined2)local_d0);
        uVar18 = uVar19;
        goto LAB_00100286;
      }
      if (uVar18 != 0) goto LAB_00100a03;
      switch(param_2) {
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xaf:
      case 0xb2:
      case 0xb3:
      case 0xb4:
      case 0xb5:
        puVar27 = (ulong *)0x0;
        break;
      case 0xa6:
        puVar27 = (ulong *)0x0;
        goto switchD_00100344_caseD_a6;
      case 0xa7:
        puVar27 = (ulong *)0x0;
        goto switchD_00100344_caseD_a7;
      default:
        goto switchD_00100344_caseD_a8;
      case 0xaa:
        puVar27 = (ulong *)0x0;
        goto switchD_00100344_caseD_aa;
      case 0xab:
        puVar27 = (ulong *)0x0;
        goto switchD_00100344_caseD_ab;
      case 0xac:
        puVar27 = (ulong *)0x0;
        goto switchD_00100344_caseD_ac;
      case 0xad:
        puVar27 = (ulong *)0x0;
        goto switchD_00100344_caseD_ad;
      case 0x129:
        goto LAB_0010039b;
      }
      goto LAB_00100c30;
    }
    if (*(code **)(*plVar22 + 0x138) == TIntermTyped::getMatrixCols) {
      uVar18 = (uint)(*(byte *)((long)plVar22 + 0x29) >> 4);
    }
    else {
      uVar18 = (**(code **)(*plVar22 + 0x138))(plVar22);
    }
    if (*(code **)(*(long *)this + 0x140) == TIntermTyped::getMatrixRows) {
      uVar19 = (byte)this[0x2a] & 0xf;
    }
    else {
      uVar19 = (**(code **)(*(long *)this + 0x140))(this);
    }
    uVar18 = uVar18 * uVar19;
    if (uVar18 != 0) goto LAB_00100a03;
LAB_0010039b:
    puVar27 = (ulong *)0x0;
LAB_0010039e:
    iVar42 = 0;
    while( true ) {
      if (*(code **)(*(long *)this + 0x140) == TIntermTyped::getMatrixRows) {
        uVar18 = (byte)this[0x2a] & 0xf;
      }
      else {
        uVar18 = (**(code **)(*(long *)this + 0x140))(this);
      }
      if ((int)uVar18 <= iVar42) break;
      iVar56 = 0;
      while( true ) {
        if (*(code **)(*plVar22 + 0x138) == TIntermTyped::getMatrixCols) {
          uVar18 = (uint)(*(byte *)((long)plVar22 + 0x29) >> 4);
        }
        else {
          uVar18 = (**(code **)(*plVar22 + 0x138))(plVar22);
        }
        if ((int)uVar18 <= iVar56) break;
        iVar21 = 0;
        dVar61 = 0.0;
        pcVar51 = *(code **)(*plVar22 + 0x140);
        while( true ) {
          if (pcVar51 == TIntermTyped::getMatrixRows) {
            uVar18 = *(byte *)((long)plVar22 + 0x2a) & 0xf;
            pcVar51 = *(code **)(*(long *)this + 0x140);
          }
          else {
            uVar18 = (*pcVar51)(plVar22);
            pcVar51 = *(code **)(*(long *)this + 0x140);
          }
          if ((int)uVar18 <= iVar21) break;
          if (pcVar51 == TIntermTyped::getMatrixRows) {
            uVar18 = (byte)this[0x2a] & 0xf;
          }
          else {
            uVar18 = (*pcVar51)(this);
          }
          dVar1 = *(double *)((long)(int)(uVar18 * iVar21 + iVar42) * 0x10 + puVar32[1]);
          if (*(code **)(*plVar22 + 0x140) == TIntermTyped::getMatrixRows) {
            uVar18 = *(byte *)((long)plVar22 + 0x2a) & 0xf;
            pcVar51 = TIntermTyped::getMatrixRows;
          }
          else {
            uVar18 = (**(code **)(*plVar22 + 0x140))(plVar22);
            pcVar51 = *(code **)(*plVar22 + 0x140);
          }
          iVar20 = uVar18 * iVar56 + iVar21;
          iVar21 = iVar21 + 1;
          dVar61 = dVar61 + dVar1 * *(double *)((long)iVar20 * 0x10 + puVar24[1]);
        }
        if (pcVar51 == TIntermTyped::getMatrixRows) {
          uVar18 = (byte)this[0x2a] & 0xf;
        }
        else {
          uVar18 = (*pcVar51)(this);
        }
        iVar21 = uVar18 * iVar56;
        iVar56 = iVar56 + 1;
        pdVar31 = (double *)((long)(iVar21 + iVar42) * 0x10 + puVar27[1]);
        *(undefined4 *)(pdVar31 + 1) = 2;
        *pdVar31 = dVar61;
      }
      iVar42 = iVar42 + 1;
    }
    if (*(code **)(*(long *)this + 0x140) == TIntermTyped::getMatrixRows) {
      uVar18 = (uint)(byte)this[0x2a];
    }
    else {
      uVar18 = (**(code **)(*(long *)this + 0x140))(this);
    }
    if (*(code **)(*plVar22 + 0x138) == TIntermTyped::getMatrixCols) {
      uVar19 = (uint)(*(byte *)((long)plVar22 + 0x29) >> 4);
    }
    else {
      uVar19 = (**(code **)(*plVar22 + 0x138))(plVar22);
      uVar19 = uVar19 & 0xf;
    }
    if (*(code **)(*(long *)this + 0xf0) == TIntermTyped::getType) {
      pTVar34 = this + 0x20;
    }
    else {
      pTVar34 = (TIntermConstantUnion *)(**(code **)(*(long *)this + 0xf0))(this);
    }
    if (*(code **)(*(long *)pTVar34 + 0x38) == TType::getBasicType) {
      TVar16 = pTVar34[8];
    }
    else {
      TVar16 = (TIntermConstantUnion)(**(code **)(*(long *)pTVar34 + 0x38))();
    }
    local_d0 = CONCAT31(local_d0._1_3_,TVar16);
    local_58 = local_58 & 0x9fc00000;
    uStack_c0 = uStack_c0 & 0x8000000400000000 | 2;
    local_b8 = local_b8 & 0xfffffff0;
    uStack_ac = uStack_ac & 0xffc00000 | 0x1fcfff;
    local_98 = local_98 & 0xffffff00;
    local_a8 = local_a8 | 0x7fffffffffffffff;
    uStack_a0 = (ulong)((uint)uStack_a0 & 0xfe000000) | 0x1ffffff;
    uStack_80 = uStack_80 & 0xffffffffffff0000;
    local_d0 = (uVar18 & 0xf) << 0x10 | uVar19 << 0xc | local_d0 & 0xffe000ff;
LAB_00101d3d:
    uStack_8c = 0xffffffff;
    uStack_90 = 0;
    uStack_b0 = 0xffffffff;
    uStack_b4 = 0xffffffff;
    local_78 = ZEXT816(0);
    local_68 = (undefined1  [16])0x0;
    local_88 = 0;
    uStack_94 = 0xfffff800;
    local_c8 = 0;
    local_d0 = local_d0 & 0xf81fffff;
    local_50 = (undefined1  [16])0x0;
    goto LAB_00100c30;
  }
  lVar39 = *(long *)this;
  if (*(code **)(lVar39 + 0x140) != TIntermTyped::getMatrixRows) {
    uVar18 = (**(code **)(lVar39 + 0x140))(this);
    if (uVar18 != 0) goto LAB_00100a03;
    lVar39 = *(long *)this;
LAB_0010054b:
    puVar27 = (ulong *)0x0;
LAB_0010054e:
    local_1c8 = (ulong *)0x0;
    while( true ) {
      if (*(code **)(lVar39 + 0x140) == TIntermTyped::getMatrixRows) {
        uVar18 = (byte)this[0x2a] & 0xf;
        puVar36 = local_1c8;
      }
      else {
        uVar18 = (**(code **)(lVar39 + 0x140))();
        puVar36 = (ulong *)((ulong)local_1c8 & 0xffffffff);
      }
      if ((int)uVar18 <= (int)local_1c8) break;
      dVar61 = 0.0;
      uVar23 = 0;
      while( true ) {
        if (*(code **)(*plVar22 + 0x130) == TIntermTyped::getVectorSize) {
          lVar39 = *(long *)this;
          uVar18 = *(byte *)((long)plVar22 + 0x29) & 0xf;
          pcVar51 = *(code **)(lVar39 + 0x140);
          uVar58 = uVar23;
        }
        else {
          uVar18 = (**(code **)(*plVar22 + 0x130))(plVar22);
          lVar39 = *(long *)this;
          uVar58 = uVar23 & 0xffffffff;
          pcVar51 = *(code **)(lVar39 + 0x140);
        }
        if ((int)uVar18 <= (int)uVar23) break;
        if (pcVar51 == TIntermTyped::getMatrixRows) {
          uVar18 = (byte)this[0x2a] & 0xf;
        }
        else {
          uVar18 = (*pcVar51)(this);
        }
        dVar61 = dVar61 + *(double *)
                           ((long)(int)(uVar18 * (int)uVar58 + (int)puVar36) * 0x10 + puVar32[1]) *
                          *(double *)(uVar23 * 0x10 + puVar24[1]);
        uVar23 = uVar23 + 1;
      }
      pdVar31 = (double *)((long)local_1c8 * 0x10 + puVar27[1]);
      *(undefined4 *)(pdVar31 + 1) = 2;
      *pdVar31 = dVar61;
      local_1c8 = (ulong *)((long)local_1c8 + 1);
    }
    lVar39 = *(long *)this;
    if (*(code **)(lVar39 + 0x140) == TIntermTyped::getMatrixRows) {
      uVar18 = (uint)(byte)this[0x2a];
    }
    else {
      uVar18 = (**(code **)(lVar39 + 0x140))();
      lVar39 = *(long *)this;
    }
    if (*(code **)(lVar39 + 0x100) == TIntermTyped::getBasicType) {
      TVar16 = this[0x28];
    }
    else {
      TVar16 = (TIntermConstantUnion)(**(code **)(lVar39 + 0x100))();
    }
    uStack_c0 = uStack_c0 & 0x8000000400000000 | 2;
    local_d0 = CONCAT31(local_d0._1_3_,TVar16);
    local_a8 = local_a8 | 0x7fffffffffffffff;
    uStack_ac = uStack_ac & 0xffc00000 | 0x1fcfff;
    local_58 = local_58 & 0x9fc00000;
    local_b8 = local_b8 & 0xfffffff0;
    local_98 = local_98 & 0xffffff00;
    uStack_a0 = (ulong)((uint)uStack_a0 & 0xfe000000) | 0x1ffffff;
    uStack_80 = uStack_80 & 0xffffffffffff0000;
    local_d0 = local_d0 & 0xffe000ff | (uVar18 & 0xf) << 8;
    goto LAB_00101d3d;
  }
  uVar18 = (byte)this[0x2a] & 0xf;
  if (((byte)this[0x2a] & 0xf) == 0) goto LAB_0010054b;
LAB_00100a03:
  uVar58 = (ulong)(int)uVar18;
  uVar23 = glslang::GetThreadPoolAllocator();
  puVar27 = (ulong *)glslang::TPoolAllocator::allocate(uVar23);
  uVar23 = glslang::GetThreadPoolAllocator();
  if (uVar58 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  local_1c8 = (ulong *)(uVar58 << 4);
LAB_001002b4:
  *puVar27 = uVar23;
  puVar27[1] = 0;
  puVar27[2] = 0;
  puVar27[3] = 0;
  puVar28 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar23);
  puVar27[1] = (ulong)puVar28;
  puVar27[3] = (long)local_1c8 + (long)puVar28;
  puVar29 = puVar28;
  do {
    *puVar29 = 0;
    puVar30 = puVar29 + 4;
    puVar29[2] = 8;
    puVar29 = puVar30;
  } while (puVar30 != puVar28 + uVar58 * 4);
  puVar27[2] = (ulong)puVar30;
  switch(param_2) {
  case 0x9c:
    pdVar31 = (double *)puVar32[1];
    pdVar49 = (double *)puVar24[1];
    pdVar54 = pdVar31 + (long)(int)uVar18 * 2;
    pdVar50 = (double *)puVar27[1];
    do {
      uVar37 = *(undefined4 *)(pdVar31 + 1);
      dVar61 = 0.0;
      switch(uVar37) {
      case 2:
        dVar61 = *pdVar31 + *pdVar49;
        break;
      case 4:
      case 5:
        dVar61 = (double)(ulong)(byte)(*(char *)pdVar31 + *(char *)pdVar49);
        break;
      case 6:
      case 7:
        dVar61 = (double)(ulong)(ushort)(*(short *)pdVar31 + *(short *)pdVar49);
        break;
      case 8:
        dVar61 = (double)(ulong)(uint)(*(int *)pdVar49 + *(int *)pdVar31);
      default:
        uVar37 = 8;
        break;
      case 9:
        dVar61 = (double)(ulong)(uint)(*(int *)pdVar49 + *(int *)pdVar31);
        break;
      case 10:
      case 0xb:
        dVar61 = (double)((long)*pdVar49 + (long)*pdVar31);
      }
      pdVar31 = pdVar31 + 2;
      pdVar49 = pdVar49 + 2;
      *pdVar50 = dVar61;
      *(undefined4 *)(pdVar50 + 1) = uVar37;
      pdVar50 = pdVar50 + 2;
    } while (pdVar31 != pdVar54);
    break;
  case 0x9d:
    pdVar49 = (double *)puVar32[1];
    pdVar50 = (double *)puVar24[1];
    pdVar31 = pdVar49 + (long)(int)uVar18 * 2;
    pdVar54 = (double *)puVar27[1];
    do {
      uVar37 = *(undefined4 *)(pdVar49 + 1);
      dVar61 = 0.0;
      switch(uVar37) {
      case 2:
        dVar61 = *pdVar49 - *pdVar50;
        break;
      case 4:
      case 5:
        dVar61 = (double)(ulong)(byte)(*(char *)pdVar49 - *(char *)pdVar50);
        break;
      case 6:
      case 7:
        dVar61 = (double)(ulong)(ushort)(*(short *)pdVar49 - *(short *)pdVar50);
        break;
      case 8:
        dVar61 = (double)(ulong)(uint)(*(int *)pdVar49 - *(int *)pdVar50);
      default:
        uVar37 = 8;
        break;
      case 9:
        dVar61 = (double)(ulong)(uint)(*(int *)pdVar49 - *(int *)pdVar50);
        break;
      case 10:
      case 0xb:
        dVar61 = (double)((long)*pdVar49 - (long)*pdVar50);
      }
      pdVar49 = pdVar49 + 2;
      pdVar50 = pdVar50 + 2;
      *pdVar54 = dVar61;
      *(undefined4 *)(pdVar54 + 1) = uVar37;
      pdVar54 = pdVar54 + 2;
    } while (pdVar49 != pdVar31);
    break;
  case 0x9e:
  case 0xaf:
  case 0xb2:
    pdVar31 = (double *)puVar32[1];
    pdVar49 = (double *)puVar24[1];
    pdVar54 = pdVar31 + (long)(int)uVar18 * 2;
    pdVar50 = (double *)puVar27[1];
    do {
      uVar37 = *(undefined4 *)(pdVar31 + 1);
      dVar61 = 0.0;
      switch(uVar37) {
      case 2:
        dVar61 = *pdVar31 * *pdVar49;
        break;
      case 4:
      case 5:
        dVar61 = (double)(ulong)(byte)(*(char *)pdVar31 * *(char *)pdVar49);
        break;
      case 6:
      case 7:
        dVar61 = (double)(ulong)(ushort)(*(short *)pdVar31 * *(short *)pdVar49);
        break;
      case 8:
        dVar61 = (double)(ulong)(uint)(*(int *)pdVar31 * *(int *)pdVar49);
      default:
        uVar37 = 8;
        break;
      case 9:
        dVar61 = (double)(ulong)(uint)(*(int *)pdVar31 * *(int *)pdVar49);
        break;
      case 10:
      case 0xb:
        dVar61 = (double)((long)*pdVar31 * (long)*pdVar49);
      }
      pdVar31 = pdVar31 + 2;
      pdVar49 = pdVar49 + 2;
      *pdVar50 = dVar61;
      *(undefined4 *)(pdVar50 + 1) = uVar37;
      pdVar50 = pdVar50 + 2;
    } while (pdVar54 != pdVar31);
    break;
  case 0x9f:
    lVar39 = 0;
    do {
      if (*(code **)(*(long *)this + 0xf0) == TIntermTyped::getType) {
        pTVar34 = this + 0x20;
      }
      else {
        pTVar34 = (TIntermConstantUnion *)(**(code **)(*(long *)this + 0xf0))(this);
      }
      if (*(code **)(*(long *)pTVar34 + 0x38) == TType::getBasicType) {
        uVar19 = (uint)(byte)pTVar34[8];
      }
      else {
        uVar19 = (**(code **)(*(long *)pTVar34 + 0x38))();
      }
      dVar15 = _LC8;
      dVar1 = _LC7;
      dVar61 = _LC6;
      switch(uVar19) {
      default:
        goto switchD_00100344_caseD_a8;
      case 1:
      case 2:
      case 3:
        dVar2 = *(double *)(puVar24[1] + lVar39);
        pdVar31 = (double *)(puVar27[1] + lVar39);
        if (dVar2 == 0.0) {
          dVar2 = *(double *)(puVar32[1] + lVar39);
          if (dVar2 <= 0.0) {
            if (dVar2 < 0.0) {
              *(undefined4 *)(pdVar31 + 1) = 2;
              *pdVar31 = dVar1;
            }
            else {
              *(undefined4 *)(pdVar31 + 1) = 2;
              *pdVar31 = dVar15;
            }
          }
          else {
            *(undefined4 *)(pdVar31 + 1) = 2;
            *pdVar31 = dVar61;
          }
        }
        else {
          dVar61 = *(double *)(puVar32[1] + lVar39);
          *(undefined4 *)(pdVar31 + 1) = 2;
          *pdVar31 = dVar61 / dVar2;
        }
        break;
      case 4:
        cVar17 = *(char *)(puVar24[1] + lVar39);
        pcVar48 = (char *)(puVar27[1] + lVar39);
        if (cVar17 == '\0') {
          *pcVar48 = '\x7f';
          pcVar48[8] = '\x04';
          pcVar48[9] = '\0';
          pcVar48[10] = '\0';
          pcVar48[0xb] = '\0';
        }
        else if ((cVar17 == -1) && (*(char *)(puVar32[1] + lVar39) == -0x80)) {
          *pcVar48 = -0x80;
          pcVar48[8] = '\x04';
          pcVar48[9] = '\0';
          pcVar48[10] = '\0';
          pcVar48[0xb] = '\0';
        }
        else {
          cVar4 = *(char *)(puVar32[1] + lVar39);
          pcVar48[8] = '\x04';
          pcVar48[9] = '\0';
          pcVar48[10] = '\0';
          pcVar48[0xb] = '\0';
          *pcVar48 = cVar4 / cVar17;
        }
        break;
      case 5:
        bVar41 = *(byte *)(puVar24[1] + lVar39);
        pbVar52 = (byte *)(puVar27[1] + lVar39);
        if (bVar41 == 0) {
          *pbVar52 = 0xff;
          pbVar52[8] = 5;
          pbVar52[9] = 0;
          pbVar52[10] = 0;
          pbVar52[0xb] = 0;
        }
        else {
          bVar3 = *(byte *)(puVar32[1] + lVar39);
          pbVar52[8] = 5;
          pbVar52[9] = 0;
          pbVar52[10] = 0;
          pbVar52[0xb] = 0;
          *pbVar52 = bVar3 / bVar41;
        }
        break;
      case 6:
        sVar7 = *(short *)(puVar24[1] + lVar39);
        psVar45 = (short *)(puVar27[1] + lVar39);
        if (sVar7 == 0) {
          psVar45[4] = 6;
          psVar45[5] = 0;
          *psVar45 = 0x7fff;
        }
        else if ((sVar7 == -1) && (*(short *)(puVar32[1] + lVar39) == -0x8000)) {
          psVar45[4] = 6;
          psVar45[5] = 0;
          *psVar45 = -0x8000;
        }
        else {
          sVar8 = *(short *)(puVar32[1] + lVar39);
          psVar45[4] = 6;
          psVar45[5] = 0;
          *psVar45 = sVar8 / sVar7;
        }
        break;
      case 7:
        uVar5 = *(ushort *)(puVar24[1] + lVar39);
        puVar44 = (ushort *)(puVar27[1] + lVar39);
        if (uVar5 == 0) {
          puVar44[4] = 7;
          puVar44[5] = 0;
          *puVar44 = 0xffff;
        }
        else {
          uVar6 = *(ushort *)(puVar32[1] + lVar39);
          puVar44[4] = 7;
          puVar44[5] = 0;
          *puVar44 = uVar6 / uVar5;
        }
        break;
      case 8:
        iVar42 = *(int *)(puVar24[1] + lVar39);
        piVar47 = (int *)(puVar27[1] + lVar39);
        if (iVar42 == 0) {
          *piVar47 = 0x7fffffff;
          piVar47[2] = 8;
        }
        else if ((iVar42 == -1) && (*(int *)(puVar32[1] + lVar39) == -0x80000000)) {
          *piVar47 = -0x80000000;
          piVar47[2] = 8;
        }
        else {
          iVar56 = *(int *)(puVar32[1] + lVar39);
          piVar47[2] = 8;
          *piVar47 = iVar56 / iVar42;
        }
        break;
      case 9:
        uVar19 = *(uint *)(puVar24[1] + lVar39);
        puVar46 = (uint *)(puVar27[1] + lVar39);
        if (uVar19 == 0) {
          *puVar46 = 0xffffffff;
          puVar46[2] = 9;
        }
        else {
          uVar9 = *(uint *)(puVar32[1] + lVar39);
          puVar46[2] = 9;
          *puVar46 = uVar9 / uVar19;
        }
        break;
      case 10:
        lVar60 = *(long *)(puVar24[1] + lVar39);
        plVar22 = (long *)(puVar27[1] + lVar39);
        if (lVar60 == 0) {
          *(undefined4 *)(plVar22 + 1) = 10;
          *plVar22 = 0x7fffffffffffffff;
        }
        else if ((lVar60 == -1) && (*(long *)(puVar32[1] + lVar39) == -0x8000000000000000)) {
          *plVar22 = -0x8000000000000000;
          *(undefined4 *)(plVar22 + 1) = 10;
        }
        else {
          lVar12 = *(long *)(puVar32[1] + lVar39);
          *(undefined4 *)(plVar22 + 1) = 10;
          *plVar22 = lVar12 / lVar60;
        }
        break;
      case 0xb:
        uVar23 = *(ulong *)(puVar24[1] + lVar39);
        puVar36 = (ulong *)(puVar27[1] + lVar39);
        if (uVar23 == 0) {
          *puVar36 = 0xffffffffffffffff;
          *(undefined4 *)(puVar36 + 1) = 0xb;
        }
        else {
          uVar58 = *(ulong *)(puVar32[1] + lVar39);
          *(undefined4 *)(puVar36 + 1) = 0xb;
          *puVar36 = uVar58 / uVar23;
        }
      }
      lVar39 = lVar39 + 0x10;
    } while ((long)(int)uVar18 << 4 != lVar39);
    break;
  case 0xa0:
    lVar39 = 0;
    do {
      if (*(int *)(puVar24[1] + lVar39) == 0) {
        uVar23 = puVar32[1];
        uVar58 = puVar27[1];
        *(undefined8 *)(uVar58 + lVar39) = *(undefined8 *)(uVar23 + lVar39);
        *(undefined4 *)(uVar58 + 8 + lVar39) = *(undefined4 *)(uVar23 + 8 + lVar39);
      }
      else {
        if (*(code **)(*(long *)this + 0xf0) == TIntermTyped::getType) {
          pTVar34 = this + 0x20;
        }
        else {
          pTVar34 = (TIntermConstantUnion *)(**(code **)(*(long *)this + 0xf0))(this);
        }
        if (*(code **)(*(long *)pTVar34 + 0x38) == TType::getBasicType) {
          uVar19 = (uint)(byte)pTVar34[8];
        }
        else {
          uVar19 = (**(code **)(*(long *)pTVar34 + 0x38))();
        }
        puVar38 = (ulong *)(puVar24[1] + lVar39);
        puVar53 = (ulong *)(puVar32[1] + lVar39);
        puVar36 = (ulong *)(puVar27[1] + lVar39);
        if (uVar19 == 8) {
          if (((uint)*puVar38 == 0xffffffff) && ((uint)*puVar53 == 0x80000000)) {
LAB_0010148b:
            *(undefined4 *)puVar36 = 0;
            *(undefined4 *)(puVar36 + 1) = 8;
            goto LAB_001014a0;
          }
        }
        else if (uVar19 == 10) {
          if ((*puVar38 == 0xffffffffffffffff) && (*puVar53 == 0x8000000000000000)) {
            *puVar36 = 0;
            *(undefined4 *)(puVar36 + 1) = 10;
            goto LAB_001014a0;
          }
        }
        else if (((uVar19 == 6) && ((uint)*puVar38 == 0xffffffff)) && ((uint)*puVar53 == 0xffff8000)
                ) goto LAB_0010148b;
        uVar19 = (uint)puVar53[1];
        uVar23 = 0;
        switch(uVar19) {
        case 4:
          uVar23 = (ulong)(byte)((char)(byte)*puVar53 % (char)(byte)*puVar38);
          break;
        case 5:
          uVar23 = (ulong)(byte)((byte)*puVar53 % (byte)*puVar38);
          break;
        case 6:
          uVar23 = (ulong)(ushort)((short)(ushort)*puVar53 % (short)(ushort)*puVar38);
          break;
        case 7:
          uVar23 = (ulong)(ushort)((ushort)*puVar53 % (ushort)*puVar38);
          break;
        case 8:
          uVar23 = (long)(int)(uint)*puVar53 % (long)(int)(uint)*puVar38 & 0xffffffff;
        default:
          uVar19 = 8;
          break;
        case 9:
          uVar23 = (ulong)(uint)*puVar53 % (ulong)(uint)*puVar38;
          break;
        case 10:
          uVar23 = (long)*puVar53 % (long)*puVar38;
          break;
        case 0xb:
          uVar23 = *puVar53 % *puVar38;
        }
        *puVar36 = uVar23;
        *(uint *)(puVar36 + 1) = uVar19;
      }
LAB_001014a0:
      lVar39 = lVar39 + 0x10;
    } while ((long)(int)uVar18 * 0x10 != lVar39);
    break;
  case 0xa1:
    pTVar11 = (TConstUnion *)puVar32[1];
    pTVar43 = pTVar11;
    pauVar59 = (undefined1 (*) [12])puVar27[1];
    pTVar40 = (TConstUnion *)puVar24[1];
    do {
      pTVar57 = pTVar43 + 0x10;
      auVar62 = TConstUnion::operator>>(pTVar43,pTVar40);
      *pauVar59 = auVar62;
      pTVar43 = pTVar57;
      pauVar59 = (undefined1 (*) [12])(pauVar59[1] + 4);
      pTVar40 = pTVar40 + 0x10;
    } while (pTVar57 != pTVar11 + (long)(int)uVar18 * 0x10);
    break;
  case 0xa2:
    pTVar11 = (TConstUnion *)puVar32[1];
    pTVar43 = pTVar11;
    pauVar59 = (undefined1 (*) [12])puVar27[1];
    pTVar40 = (TConstUnion *)puVar24[1];
    do {
      pTVar57 = pTVar43 + 0x10;
      auVar62 = TConstUnion::operator<<(pTVar43,pTVar40);
      *pauVar59 = auVar62;
      pTVar43 = pTVar57;
      pauVar59 = (undefined1 (*) [12])(pauVar59[1] + 4);
      pTVar40 = pTVar40 + 0x10;
    } while (pTVar11 + (long)(int)uVar18 * 0x10 != pTVar57);
    break;
  case 0xa3:
    puVar32 = (ulong *)puVar32[1];
    puVar24 = (ulong *)puVar24[1];
    puVar38 = puVar32 + (long)(int)uVar18 * 2;
    puVar36 = (ulong *)puVar27[1];
    do {
      uVar18 = (uint)puVar32[1];
      uVar23 = 0;
      switch(uVar18) {
      case 4:
      case 5:
        uVar23 = (ulong)(byte)((byte)*puVar32 & (byte)*puVar24);
        break;
      case 6:
      case 7:
        uVar23 = (ulong)(ushort)((ushort)*puVar32 & (ushort)*puVar24);
        break;
      case 8:
        uVar23 = (ulong)((uint)*puVar32 & (uint)*puVar24);
      default:
        uVar18 = 8;
        break;
      case 9:
        uVar23 = (ulong)((uint)*puVar32 & (uint)*puVar24);
        break;
      case 10:
      case 0xb:
        uVar23 = *puVar32 & *puVar24;
      }
      puVar32 = puVar32 + 2;
      puVar24 = puVar24 + 2;
      *puVar36 = uVar23;
      *(uint *)(puVar36 + 1) = uVar18;
      puVar36 = puVar36 + 2;
    } while (puVar38 != puVar32);
    break;
  case 0xa4:
    puVar32 = (ulong *)puVar32[1];
    puVar24 = (ulong *)puVar24[1];
    puVar38 = puVar32 + (long)(int)uVar18 * 2;
    puVar36 = (ulong *)puVar27[1];
    do {
      uVar18 = (uint)puVar32[1];
      uVar23 = 0;
      switch(uVar18) {
      case 4:
      case 5:
        uVar23 = (ulong)(byte)((byte)*puVar32 | (byte)*puVar24);
        break;
      case 6:
      case 7:
        uVar23 = (ulong)(ushort)((ushort)*puVar32 | (ushort)*puVar24);
        break;
      case 8:
        uVar23 = (ulong)((uint)*puVar32 | (uint)*puVar24);
      default:
        uVar18 = 8;
        break;
      case 9:
        uVar23 = (ulong)((uint)*puVar32 | (uint)*puVar24);
        break;
      case 10:
      case 0xb:
        uVar23 = *puVar32 | *puVar24;
      }
      puVar32 = puVar32 + 2;
      puVar24 = puVar24 + 2;
      *puVar36 = uVar23;
      *(uint *)(puVar36 + 1) = uVar18;
      puVar36 = puVar36 + 2;
    } while (puVar32 != puVar38);
    break;
  case 0xa5:
    puVar32 = (ulong *)puVar32[1];
    puVar24 = (ulong *)puVar24[1];
    puVar38 = puVar32 + (long)(int)uVar18 * 2;
    puVar36 = (ulong *)puVar27[1];
    do {
      uVar18 = (uint)puVar32[1];
      uVar23 = 0;
      switch(uVar18) {
      case 4:
      case 5:
        uVar23 = (ulong)(byte)((byte)*puVar32 ^ (byte)*puVar24);
        break;
      case 6:
      case 7:
        uVar23 = (ulong)(ushort)((ushort)*puVar32 ^ (ushort)*puVar24);
        break;
      case 8:
        uVar23 = (ulong)((uint)*puVar32 ^ (uint)*puVar24);
      default:
        uVar18 = 8;
        break;
      case 9:
        uVar23 = (ulong)((uint)*puVar32 ^ (uint)*puVar24);
        break;
      case 10:
      case 0xb:
        uVar23 = *puVar32 ^ *puVar24;
      }
      puVar32 = puVar32 + 2;
      puVar24 = puVar24 + 2;
      *puVar36 = uVar23;
      *(uint *)(puVar36 + 1) = uVar18;
      puVar36 = puVar36 + 2;
    } while (puVar32 != puVar38);
    break;
  case 0xa6:
switchD_00100344_caseD_a6:
    puVar24 = (ulong *)plVar22[0x18];
    pcVar48 = (char *)puVar27[1];
    if (puVar24 == puVar32) {
LAB_001021b0:
      *pcVar48 = '\x01';
    }
    else {
      bVar55 = puVar32 == (ulong *)0x0 || puVar24 == (ulong *)0x0;
      if (bVar55) {
        *pcVar48 = '\0';
      }
      else {
        pTVar11 = (TConstUnion *)puVar24[2];
        pTVar43 = (TConstUnion *)puVar24[1];
        pTVar40 = (TConstUnion *)puVar32[1];
        if ((long)pTVar11 - (long)pTVar43 == puVar32[2] - (long)pTVar40) {
          if (pTVar43 == pTVar11) goto LAB_001021b0;
          do {
            cVar17 = TConstUnion::operator==(pTVar43,pTVar40);
            if (cVar17 == '\0') break;
            pTVar43 = pTVar43 + 0x10;
            pTVar40 = pTVar40 + 0x10;
          } while (pTVar11 != pTVar43);
          *pcVar48 = cVar17;
        }
        else {
          *pcVar48 = bVar55;
        }
      }
    }
    goto LAB_00100f74;
  case 0xa7:
switchD_00100344_caseD_a7:
    puVar24 = (ulong *)plVar22[0x18];
    pcVar48 = (char *)puVar27[1];
    if (puVar24 == puVar32) {
      bVar55 = false;
    }
    else {
      bVar55 = puVar24 == (ulong *)0x0 || puVar32 == (ulong *)0x0;
      if (puVar24 != (ulong *)0x0 && puVar32 != (ulong *)0x0) {
        pTVar11 = (TConstUnion *)puVar24[2];
        pTVar43 = (TConstUnion *)puVar24[1];
        pTVar40 = (TConstUnion *)puVar32[1];
        if ((long)pTVar11 - (long)pTVar43 == puVar32[2] - (long)pTVar40) {
          for (; pTVar43 != pTVar11; pTVar43 = pTVar43 + 0x10) {
            cVar17 = TConstUnion::operator==(pTVar43,pTVar40);
            if (cVar17 == '\0') goto LAB_00100f6b;
            pTVar40 = pTVar40 + 0x10;
          }
        }
        else {
LAB_00100f6b:
          bVar55 = true;
        }
      }
    }
    *pcVar48 = bVar55;
LAB_00100f74:
    pcVar48[8] = '\f';
    pcVar48[9] = '\0';
    pcVar48[10] = '\0';
    pcVar48[0xb] = '\0';
    uStack_c0 = uStack_c0 & 0x8000000400000000 | 2;
    local_d0 = CONCAT31(local_d0._1_3_,0xc);
    local_58 = local_58 & 0x9fc00000;
    local_b8 = local_b8 & 0xfffffff0;
    uStack_ac = uStack_ac & 0xffc00000 | 0x1fcfff;
    local_98 = local_98 & 0xffffff00;
    local_a8 = local_a8 | 0x7fffffffffffffff;
    local_c8 = 0;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0xffffffff;
    uStack_a0 = (ulong)((uint)uStack_a0 & 0xfe000000) | 0x1ffffff;
    local_78 = (undefined1  [16])0x0;
    uStack_94 = 0xfffff800;
    uStack_90 = 0;
    uStack_80 = uStack_80 & 0xffffffffffff0000;
    uStack_8c = 0xffffffff;
    local_68 = (undefined1  [16])0x0;
    local_d0 = CONCAT22((short)((local_d0 & 0xf80000ff) >> 0x10),
                        CONCAT11(1,(char)(local_d0 & 0xf80000ff)));
    local_50 = (undefined1  [16])0x0;
    local_88 = 0;
    break;
  default:
switchD_00100344_caseD_a8:
    this_01 = (TIntermTyped *)0x0;
    goto LAB_001009c0;
  case 0xaa:
switchD_00100344_caseD_aa:
    pbVar52 = (byte *)puVar27[1];
    bVar41 = TConstUnion::operator<((TConstUnion *)puVar32[1],(TConstUnion *)puVar24[1]);
    local_1c8 = puVar27;
    goto LAB_00100db8;
  case 0xab:
switchD_00100344_caseD_ab:
    pbVar52 = (byte *)puVar27[1];
    bVar41 = TConstUnion::operator>((TConstUnion *)puVar32[1],(TConstUnion *)puVar24[1]);
    local_1c8 = puVar27;
    goto LAB_00100db8;
  case 0xac:
switchD_00100344_caseD_ac:
    pbVar52 = (byte *)puVar27[1];
    bVar41 = TConstUnion::operator>((TConstUnion *)puVar32[1],(TConstUnion *)puVar24[1]);
    local_1c8 = puVar27;
    goto LAB_00100db5;
  case 0xad:
switchD_00100344_caseD_ad:
    pbVar52 = (byte *)puVar27[1];
    bVar41 = TConstUnion::operator<((TConstUnion *)puVar32[1],(TConstUnion *)puVar24[1]);
    local_1c8 = puVar27;
LAB_00100db5:
    bVar41 = bVar41 ^ 1;
LAB_00100db8:
    *pbVar52 = bVar41;
    pbVar52[8] = 0xc;
    pbVar52[9] = 0;
    pbVar52[10] = 0;
    pbVar52[0xb] = 0;
    uStack_c0 = uStack_c0 & 0x8000000400000000 | 2;
    local_d0 = CONCAT31(local_d0._1_3_,0xc);
    local_58 = local_58 & 0x9fc00000;
    local_b8 = local_b8 & 0xfffffff0;
    uStack_ac = uStack_ac & 0xffc00000 | 0x1fcfff;
    local_98 = local_98 & 0xffffff00;
    local_a8 = local_a8 | 0x7fffffffffffffff;
    local_c8 = 0;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0xffffffff;
    uStack_a0 = (ulong)((uint)uStack_a0 & 0xfe000000) | 0x1ffffff;
    uStack_80 = uStack_80 & 0xffffffffffff0000;
    uStack_94 = 0xfffff800;
    uStack_90 = 0;
    uStack_8c = 0xffffffff;
    local_78 = (undefined1  [16])0x0;
    local_d0 = CONCAT22((short)((local_d0 & 0xf80000ff) >> 0x10),
                        CONCAT11(1,(char)(local_d0 & 0xf80000ff)));
    local_68 = (undefined1  [16])0x0;
    local_88 = 0;
    local_50 = (undefined1  [16])0x0;
    puVar27 = local_1c8;
    break;
  case 0xb0:
    lVar39 = *plVar22;
LAB_001006ae:
    local_1c8 = (ulong *)0x0;
    while( true ) {
      if (*(code **)(lVar39 + 0x138) == TIntermTyped::getMatrixCols) {
        uVar18 = (uint)(*(byte *)((long)plVar22 + 0x29) >> 4);
        puVar36 = local_1c8;
      }
      else {
        uVar18 = (**(code **)(lVar39 + 0x138))(plVar22);
        puVar36 = (ulong *)((ulong)local_1c8 & 0xffffffff);
      }
      if ((int)uVar18 <= (int)local_1c8) break;
      lVar60 = 0;
      dVar61 = 0.0;
      while( true ) {
        iVar42 = (int)lVar60;
        if (*(code **)(*(long *)this + 0x130) == TIntermTyped::getVectorSize) {
          lVar39 = *plVar22;
          uVar18 = (byte)this[0x29] & 0xf;
        }
        else {
          uVar18 = (**(code **)(*(long *)this + 0x130))(this);
          lVar39 = *plVar22;
        }
        if ((int)uVar18 <= iVar42) break;
        dVar1 = *(double *)(lVar60 * 0x10 + puVar32[1]);
        if (*(code **)(lVar39 + 0x140) == TIntermTyped::getMatrixRows) {
          uVar18 = *(byte *)((long)plVar22 + 0x2a) & 0xf;
        }
        else {
          uVar18 = (**(code **)(lVar39 + 0x140))(plVar22);
        }
        lVar60 = lVar60 + 1;
        dVar61 = dVar61 + dVar1 * *(double *)
                                   ((long)(int)(uVar18 * (int)puVar36 + iVar42) * 0x10 + puVar24[1])
        ;
      }
      pdVar31 = (double *)((long)local_1c8 * 0x10 + puVar27[1]);
      *(undefined4 *)(pdVar31 + 1) = 2;
      *pdVar31 = dVar61;
      local_1c8 = (ulong *)((long)local_1c8 + 1);
    }
    if (*(code **)(*plVar22 + 0x138) == TIntermTyped::getMatrixCols) {
      uVar18 = (uint)(*(byte *)((long)plVar22 + 0x29) >> 4);
    }
    else {
      uVar18 = (**(code **)(*plVar22 + 0x138))(plVar22);
      uVar18 = uVar18 & 0xf;
    }
    if (*(code **)(*(long *)this + 0x100) == TIntermTyped::getBasicType) {
      TVar16 = this[0x28];
    }
    else {
      TVar16 = (TIntermConstantUnion)(**(code **)(*(long *)this + 0x100))(this);
    }
    local_d0 = CONCAT31(local_d0._1_3_,TVar16);
    uStack_c0 = uStack_c0 & 0x8000000400000000 | 2;
    local_a8 = local_a8 | 0x7fffffffffffffff;
    local_58 = local_58 & 0x9fc00000;
    uStack_ac = uStack_ac & 0xffc00000 | 0x1fcfff;
    local_b8 = local_b8 & 0xfffffff0;
    uStack_a0 = (ulong)((uint)uStack_a0 & 0xfe000000) | 0x1ffffff;
    local_98 = local_98 & 0xffffff00;
    local_d0 = local_d0 & 0xffe000ff | uVar18 << 8;
    uStack_80 = uStack_80 & 0xffffffffffff0000;
    goto LAB_00101d3d;
  case 0xb1:
    lVar39 = *(long *)this;
    goto LAB_0010054e;
  case 0xb3:
    uVar23 = puVar32[1];
    uVar58 = puVar24[1];
    lVar39 = 0;
    uVar13 = puVar27[1];
    do {
      if (*(int *)(uVar23 + 8 + lVar39) == 0xc) {
        bVar41 = *(byte *)(uVar23 + lVar39);
        if (bVar41 == 0) {
          bVar41 = *(byte *)(uVar58 + lVar39);
        }
        uVar19 = (uint)bVar41;
        uVar37 = 0xc;
      }
      else {
        uVar19 = 0;
        uVar37 = 8;
      }
      *(ulong *)(uVar13 + lVar39) = (ulong)uVar19;
      *(undefined4 *)(uVar13 + 8 + lVar39) = uVar37;
      lVar39 = lVar39 + 0x10;
    } while ((long)(int)uVar18 * 0x10 != lVar39);
    break;
  case 0xb4:
    lVar39 = 0;
    do {
      if (*(code **)(*(long *)this + 0xf0) == TIntermTyped::getType) {
        pTVar34 = this + 0x20;
      }
      else {
        pTVar34 = (TIntermConstantUnion *)(**(code **)(*(long *)this + 0xf0))(this);
      }
      if (*(code **)(*(long *)pTVar34 + 0x38) == TType::getBasicType) {
        uVar19 = (uint)(byte)pTVar34[8];
      }
      else {
        uVar19 = (**(code **)(*(long *)pTVar34 + 0x38))();
      }
      if (uVar19 == 0xc) {
        pbVar52 = (byte *)(puVar27[1] + lVar39);
        pdVar49 = (double *)(puVar24[1] + lVar39);
        bVar41 = 1;
        pdVar31 = (double *)(puVar32[1] + lVar39);
        if (*(int *)(pdVar49 + 1) == *(int *)(pdVar31 + 1)) {
          switch(*(int *)(pdVar31 + 1)) {
          default:
            bVar41 = 1;
            break;
          case 2:
            bVar41 = *pdVar49 != *pdVar31;
            break;
          case 4:
          case 5:
            bVar41 = *(char *)pdVar49 != *(char *)pdVar31;
            break;
          case 6:
          case 7:
            bVar41 = *(short *)pdVar49 != *(short *)pdVar31;
            break;
          case 8:
          case 9:
            bVar41 = *(int *)pdVar49 != *(int *)pdVar31;
            break;
          case 10:
          case 0xb:
            bVar41 = *pdVar49 != *pdVar31;
            break;
          case 0xc:
            bVar41 = *(byte *)pdVar49 ^ *(byte *)pdVar31;
          }
        }
        *pbVar52 = bVar41;
        pbVar52[8] = 0xc;
        pbVar52[9] = 0;
        pbVar52[10] = 0;
        pbVar52[0xb] = 0;
      }
      lVar39 = lVar39 + 0x10;
    } while ((long)(int)uVar18 << 4 != lVar39);
    break;
  case 0xb5:
    uVar23 = puVar32[1];
    uVar58 = puVar24[1];
    lVar39 = 0;
    uVar13 = puVar27[1];
    do {
      if (*(int *)(uVar23 + 8 + lVar39) == 0xc) {
        bVar41 = *(byte *)(uVar23 + lVar39);
        if (bVar41 != 0) {
          bVar41 = *(byte *)(uVar58 + lVar39);
        }
        uVar19 = (uint)bVar41;
        uVar37 = 0xc;
      }
      else {
        uVar19 = 0;
        uVar37 = 8;
      }
      *(ulong *)(uVar13 + lVar39) = (ulong)uVar19;
      *(undefined4 *)(uVar13 + 8 + lVar39) = uVar37;
      lVar39 = lVar39 + 0x10;
    } while ((long)(int)uVar18 * 0x10 != lVar39);
    break;
  case 0x129:
    goto LAB_0010039e;
  }
LAB_00100c30:
  uVar23 = glslang::GetThreadPoolAllocator();
  this_01 = (TIntermTyped *)glslang::TPoolAllocator::allocate(uVar23);
  TIntermTyped::TIntermTyped(this_01,(TType *)&local_d8);
  *(code **)this_01 = log2;
  *(undefined ***)(this_01 + 0xb8) = &PTR__TConstUnionArray_0010ea68;
  puVar10 = *(undefined8 **)this;
  *(ulong **)(this_01 + 0xc0) = puVar27;
  pcVar51 = (code *)*puVar10;
  this_01[200] = (TIntermTyped)0x0;
  if (pcVar51 == TIntermNode::getLoc) {
    this = this + 8;
  }
  else {
    this = (TIntermConstantUnion *)(*pcVar51)(this);
  }
  uVar14 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this_01 + 8) = *(undefined8 *)this;
  *(undefined8 *)(this_01 + 0x10) = uVar14;
  *(undefined8 *)(this_01 + 0x18) = *(undefined8 *)(this + 0x10);
LAB_001009c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TIntermConstantUnion::fold(glslang::TOperator, glslang::TType const&) const */

TIntermTyped * __thiscall
glslang::TIntermConstantUnion::fold(TIntermConstantUnion *this,uint param_2,TType *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  TIntermTyped *this_00;
  TIntermConstantUnion *pTVar21;
  ushort *puVar22;
  short *psVar23;
  double *pdVar24;
  TIntermTyped *pTVar25;
  ulong *puVar26;
  char *pcVar27;
  byte *pbVar28;
  ulong *puVar29;
  long lVar30;
  double *pdVar31;
  ulong *puVar32;
  ulong uVar33;
  double dVar34;
  double dVar35;
  
  if (*(code **)(*(long *)this + 0xf0) == TIntermTyped::getType) {
    pTVar21 = this + 0x20;
  }
  else {
    pTVar21 = (TIntermConstantUnion *)(**(code **)(*(long *)this + 0xf0))();
  }
  iVar13 = TType::computeNumComponents((TType *)pTVar21);
  if (param_2 < 0x134) {
    if (param_2 < 0x10b) {
      if (param_2 - 0xf1 < 10) {
        lVar30 = 0x20;
        uVar33 = 2;
        uVar20 = 1L << ((byte)(param_2 - 0xf1) & 0x3f);
        if ((uVar20 & 0x20a) == 0) {
          if ((uVar20 & 0x105) != 0) goto switchD_00102393_caseD_111;
          if (iVar13 != 0) goto LAB_001044f6;
          goto LAB_0010279d;
        }
        goto LAB_001023cd;
      }
      if (iVar13 == 0) goto LAB_00102794;
LAB_001044f6:
      bVar11 = true;
    }
    else {
      switch(param_2) {
      case 0x10b:
      case 0x10c:
      case 0x10d:
      case 0x10e:
      case 0x10f:
      case 0x110:
      case 0x115:
        bVar10 = false;
        bVar11 = false;
        if (iVar13 == 0) goto LAB_001026e5;
        break;
      case 0x111:
      case 299:
        goto switchD_00102393_caseD_111;
      default:
        goto switchD_00102393_caseD_112;
      case 0x132:
      case 0x133:
        goto switchD_00102393_caseD_132;
      }
    }
    bVar10 = bVar11;
    uVar33 = (ulong)iVar13;
    uVar20 = glslang::GetThreadPoolAllocator();
    puVar26 = (ulong *)glslang::TPoolAllocator::allocate(uVar20);
    uVar20 = glslang::GetThreadPoolAllocator();
    if (0x7ffffffffffffff < uVar33) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    lVar30 = uVar33 << 4;
LAB_001023ed:
    *puVar26 = uVar20;
    puVar26[1] = 0;
    puVar26[2] = 0;
    puVar26[3] = 0;
    pcVar17 = (char *)glslang::TPoolAllocator::allocate(uVar20);
    puVar26[1] = (ulong)pcVar17;
    puVar26[3] = (ulong)(pcVar17 + lVar30);
    pcVar27 = pcVar17;
    do {
      pcVar27[0] = '\0';
      pcVar27[1] = '\0';
      pcVar27[2] = '\0';
      pcVar27[3] = '\0';
      pcVar18 = pcVar27 + 0x10;
      pcVar27[8] = '\b';
      pcVar27[9] = '\0';
      pcVar27[10] = '\0';
      pcVar27[0xb] = '\0';
      pcVar27 = pcVar18;
    } while (pcVar18 != pcVar17 + uVar33 * 0x10);
    puVar26[2] = (ulong)pcVar18;
    if (param_2 < 0x12e) {
      if (0xf0 < param_2) {
        uVar20 = 1L << ((char)param_2 + 0xfU & 0x3f);
        if ((uVar20 & 0x1c000000fc00030f) != 0) {
switchD_00102393_caseD_132:
          return (TIntermTyped *)0x0;
        }
        if ((uVar20 & 0x1100000000) != 0) {
          if (iVar13 < 1) {
            if (param_2 == 0x111) {
              puVar8 = (undefined8 *)puVar26[1];
              *puVar8 = 0;
              *(undefined4 *)(puVar8 + 1) = 2;
            }
            goto LAB_00102593;
          }
          lVar30 = *(long *)(this + 0xc0);
          dVar34 = 0.0;
          pdVar24 = *(double **)(lVar30 + 8);
          pdVar31 = pdVar24 + (long)iVar13 * 2;
          do {
            dVar35 = *pdVar24;
            pdVar24 = pdVar24 + 2;
            dVar34 = dVar34 + dVar35 * dVar35;
          } while (pdVar31 != pdVar24);
          if (dVar34 < 0.0) {
            dVar34 = sqrt(dVar34);
            if (param_2 != 0x111) {
              lVar30 = *(long *)(this + 0xc0);
              goto LAB_00102503;
            }
          }
          else {
            dVar34 = SQRT(dVar34);
            if (param_2 != 0x111) {
LAB_00102503:
              lVar30 = *(long *)(lVar30 + 8);
              uVar20 = puVar26[1];
              lVar19 = 0;
              do {
                dVar35 = *(double *)(lVar30 + lVar19);
                *(undefined4 *)(uVar20 + 8 + lVar19) = 2;
                *(double *)(uVar20 + lVar19) = dVar35 / dVar34;
                lVar19 = lVar19 + 0x10;
              } while ((long)iVar13 << 4 != lVar19);
              goto joined_r0x001044aa;
            }
          }
          pdVar24 = (double *)puVar26[1];
          *(undefined4 *)(pdVar24 + 1) = 2;
          *pdVar24 = dVar34;
          goto joined_r0x001044aa;
        }
      }
      goto LAB_00102712;
    }
    if (param_2 == 0x1c4) {
      if (iVar13 < 1) {
        *pcVar17 = '\0';
        pcVar17[8] = '\f';
        pcVar17[9] = '\0';
        pcVar17[10] = '\0';
        pcVar17[0xb] = '\0';
        goto LAB_00102593;
      }
      pcVar27 = *(char **)(*(long *)(this + 0xc0) + 8);
      cVar12 = '\0';
      pcVar18 = pcVar27 + (long)iVar13 * 0x10;
      do {
        if (*pcVar27 != '\0') {
          cVar12 = *pcVar27;
        }
        pcVar27 = pcVar27 + 0x10;
      } while (pcVar18 != pcVar27);
      *pcVar17 = cVar12;
      pcVar17[8] = '\f';
      pcVar17[9] = '\0';
      pcVar17[10] = '\0';
      pcVar17[0xb] = '\0';
    }
    else {
      if (param_2 != 0x1c5) goto LAB_00102712;
      if (iVar13 < 1) {
        *pcVar17 = '\x01';
        pcVar17[8] = '\f';
        pcVar17[9] = '\0';
        pcVar17[10] = '\0';
        pcVar17[0xb] = '\0';
        goto LAB_00102593;
      }
      pcVar27 = *(char **)(*(long *)(this + 0xc0) + 8);
      cVar12 = '\x01';
      pcVar18 = pcVar27 + (long)iVar13 * 0x10;
      do {
        if (*pcVar27 == '\0') {
          cVar12 = '\0';
        }
        pcVar27 = pcVar27 + 0x10;
      } while (pcVar18 != pcVar27);
      *pcVar17 = cVar12;
      pcVar17[8] = '\f';
      pcVar17[9] = '\0';
      pcVar17[10] = '\0';
      pcVar17[0xb] = '\0';
    }
joined_r0x001044aa:
    if (!bVar10) goto LAB_00102593;
  }
  else {
    if (param_2 - 0x1c4 < 2) {
switchD_00102393_caseD_111:
      lVar30 = 0x10;
      uVar33 = 1;
LAB_001023cd:
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar26 = (ulong *)glslang::TPoolAllocator::allocate(uVar20);
      uVar20 = glslang::GetThreadPoolAllocator();
      bVar10 = false;
      goto LAB_001023ed;
    }
switchD_00102393_caseD_112:
    if (iVar13 != 0) goto LAB_001044f6;
    puVar26 = (ulong *)0x0;
    if (0x1c4 < param_2) goto LAB_00102593;
LAB_00102794:
    if (0x3c < param_2 - 0xf1) {
      puVar26 = (ulong *)0x0;
      goto LAB_00102593;
    }
LAB_0010279d:
    bVar10 = true;
LAB_001026e5:
    uVar20 = 1L << ((char)param_2 + 0xfU & 0x3f);
    if ((uVar20 & 0x1c000000fc00030f) != 0) {
      return (TIntermTyped *)0x0;
    }
    puVar26 = (ulong *)0x0;
    if ((uVar20 & 0x1100000000) != 0) goto LAB_00102593;
LAB_00102712:
    if ((!bVar10) || (iVar13 < 1)) goto LAB_00102593;
  }
  lVar30 = 0;
  do {
    if (0x23c < param_2 - 8) {
      return (TIntermTyped *)0x0;
    }
    switch((long)&switchD_00102569::switchdataD_0010d93c +
           (long)(int)(&switchD_00102569::switchdataD_0010d93c)[param_2 - 8]) {
    case 0x102670:
      uVar20 = puVar26[1];
      *(undefined8 *)(uVar20 + lVar30) = 0;
      *(undefined4 *)((undefined8 *)(uVar20 + lVar30) + 1) = 2;
      break;
    case 0x1026a9:
      goto switchD_00102393_caseD_132;
    case 0x1026b0:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined8 *)(uVar20 + lVar30) + 1) = 0xb;
      *(undefined8 *)(uVar20 + lVar30) = uVar7;
      break;
    case 0x1027a8:
      if (*(code **)(*(long *)this + 0xf0) == TIntermTyped::getType) {
        pTVar21 = this + 0x20;
      }
      else {
        pTVar21 = (TIntermConstantUnion *)(**(code **)(*(long *)this + 0xf0))(this);
      }
      if (*(code **)(*(long *)pTVar21 + 0x38) == TType::getBasicType) {
        uVar14 = (uint)(byte)pTVar21[8];
      }
      else {
        uVar14 = (**(code **)(*(long *)pTVar21 + 0x38))();
      }
      if (uVar14 != 0xc) {
        return (TIntermTyped *)0x0;
      }
      pbVar28 = (byte *)(puVar26[1] + lVar30);
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      pbVar28[8] = 0xc;
      pbVar28[9] = 0;
      pbVar28[10] = 0;
      pbVar28[0xb] = 0;
      *pbVar28 = bVar1 ^ 1;
      break;
    case 0x102812:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)bVar1;
      break;
    case 0x102841:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = dVar34 != 0.0;
      break;
    case 0x102876:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined8 *)(uVar20 + lVar30) + 1) = 2;
      *(undefined8 *)(uVar20 + lVar30) = uVar7;
      break;
    case 0x10289e:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((undefined4 *)(uVar20 + lVar30))[2] = 9;
      *(undefined4 *)(uVar20 + lVar30) = (int)(long)dVar34;
      break;
    case 0x1028c5:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((int *)(uVar20 + lVar30))[2] = 8;
      *(int *)(uVar20 + lVar30) = (int)dVar34;
      break;
    case 0x1028eb:
      uVar20 = puVar26[1];
      uVar14 = *(uint *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)uVar14;
      break;
    case 0x10291a:
      uVar20 = puVar26[1];
      iVar15 = *(int *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)iVar15;
      break;
    case 0x102946:
      uVar20 = puVar26[1];
      uVar14 = *(uint *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)uVar14;
      break;
    case 0x102975:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 6;
      *(undefined2 *)(uVar20 + lVar30) = (short)(int)dVar34;
      break;
    case 0x10299c:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar7;
      break;
    case 0x1029c1:
      uVar20 = puVar26[1];
      iVar15 = *(int *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)iVar15;
      break;
    case 0x1029ed:
      uVar20 = puVar26[1];
      uVar14 = *(uint *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((ulong *)(uVar20 + lVar30) + 1) = 0xb;
      *(ulong *)(uVar20 + lVar30) = (ulong)uVar14;
      break;
    case 0x102a12:
      uVar20 = puVar26[1];
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 7;
      *(undefined2 *)(uVar20 + lVar30) = (short)uVar6;
      break;
    case 0x102a37:
      uVar20 = puVar26[1];
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar6;
      break;
    case 0x102a5b:
      psVar23 = (short *)(puVar26[1] + lVar30);
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      psVar23[4] = 6;
      psVar23[5] = 0;
      *psVar23 = (short)cVar12;
      break;
    case 0x102a82:
      uVar20 = puVar26[1];
      uVar2 = *(undefined1 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = uVar2;
      break;
    case 0x102aa7:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = dVar34 != 0.0;
      break;
    case 0x102adc:
      uVar20 = puVar26[1];
      lVar19 = *(long *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = lVar19 != 0;
      break;
    case 0x102b03:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((uint *)(uVar20 + lVar30))[2] = 8;
      *(uint *)(uVar20 + lVar30) = (uint)bVar1;
      break;
    case 0x102b28:
      puVar22 = (ushort *)(puVar26[1] + lVar30);
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      puVar22[4] = 7;
      puVar22[5] = 0;
      *puVar22 = (ushort)bVar1;
      break;
    case 0x102b4e:
      puVar22 = (ushort *)(puVar26[1] + lVar30);
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      puVar22[4] = 6;
      puVar22[5] = 0;
      *puVar22 = (ushort)bVar1;
      break;
    case 0x102b74:
      uVar20 = puVar26[1];
      uVar2 = *(undefined1 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = uVar2;
      break;
    case 0x102b99:
      uVar20 = puVar26[1];
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 10;
      *(long *)(uVar20 + lVar30) = (long)cVar12;
      break;
    case 0x102bc0:
      uVar20 = puVar26[1];
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((int *)(uVar20 + lVar30))[2] = 8;
      *(int *)(uVar20 + lVar30) = (int)cVar12;
      break;
    case 0x102be5:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)bVar1;
      break;
    case 0x102c14:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((ulong *)(uVar20 + lVar30) + 1) = 0xb;
      *(ulong *)(uVar20 + lVar30) = (ulong)bVar1;
      break;
    case 0x102c3a:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((ulong *)(uVar20 + lVar30) + 1) = 10;
      *(ulong *)(uVar20 + lVar30) = (ulong)bVar1;
      break;
    case 0x102c60:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((uint *)(uVar20 + lVar30))[2] = 9;
      *(uint *)(uVar20 + lVar30) = (uint)bVar1;
      break;
    case 0x102c85:
      uVar20 = puVar26[1];
      lVar19 = *(long *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = lVar19 != 0;
      break;
    case 0x102cac:
      uVar20 = puVar26[1];
      iVar15 = *(int *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = iVar15 != 0;
      break;
    case 0x102cd3:
      uVar20 = puVar26[1];
      iVar15 = *(int *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = iVar15 != 0;
      break;
    case 0x102cfa:
      uVar20 = puVar26[1];
      sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = sVar4 != 0;
      break;
    case 0x102d21:
      uVar20 = puVar26[1];
      sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = sVar4 != 0;
      break;
    case 0x102d48:
      uVar20 = puVar26[1];
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = cVar12 != '\0';
      break;
    case 0x102d6e:
      uVar20 = puVar26[1];
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = cVar12 != '\0';
      break;
    case 0x102d94:
      uVar20 = 0;
      puVar29 = (ulong *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      uVar14 = (uint)puVar29[1];
      switch(uVar14) {
      case 4:
      case 5:
        uVar20 = (ulong)(byte)~(byte)*puVar29;
        break;
      case 6:
      case 7:
        uVar20 = (ulong)(ushort)~(ushort)*puVar29;
        break;
      case 8:
        uVar20 = (ulong)~(uint)*puVar29;
      default:
        uVar14 = 8;
        break;
      case 9:
        uVar20 = (ulong)~(uint)*puVar29;
        break;
      case 10:
      case 0xb:
        uVar20 = ~*puVar29;
      }
      uVar33 = puVar26[1];
      *(ulong *)(uVar33 + lVar30) = uVar20;
      *(uint *)(uVar33 + 8 + lVar30) = uVar14;
      break;
    case 0x102dc4:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 6;
      *(undefined2 *)(uVar20 + lVar30) = (short)uVar7;
      break;
    case 0x102dea:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar7;
      break;
    case 0x102e0f:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined8 *)(uVar20 + lVar30) + 1) = 0xb;
      *(undefined8 *)(uVar20 + lVar30) = uVar7;
      break;
    case 0x102e35:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((undefined4 *)(uVar20 + lVar30))[2] = 9;
      *(undefined4 *)(uVar20 + lVar30) = (int)uVar7;
      break;
    case 0x102e5a:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 7;
      *(undefined2 *)(uVar20 + lVar30) = (short)uVar7;
      break;
    case 0x102e80:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar7;
      break;
    case 0x102ea5:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((undefined4 *)(uVar20 + lVar30))[2] = 8;
      *(undefined4 *)(uVar20 + lVar30) = (int)uVar7;
      break;
    case 0x102eca:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 6;
      *(undefined2 *)(uVar20 + lVar30) = (short)uVar7;
      break;
    case 0x102ef0:
      uVar20 = puVar26[1];
      uVar14 = *(uint *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((ulong *)(uVar20 + lVar30) + 1) = 10;
      *(ulong *)(uVar20 + lVar30) = (ulong)uVar14;
      break;
    case 0x102f15:
      uVar20 = puVar26[1];
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((undefined4 *)(uVar20 + lVar30))[2] = 8;
      *(undefined4 *)(uVar20 + lVar30) = uVar6;
      break;
    case 0x102f39:
      uVar20 = puVar26[1];
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 6;
      *(undefined2 *)(uVar20 + lVar30) = (short)uVar6;
      break;
    case 0x102f5e:
      uVar20 = puVar26[1];
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar6;
      break;
    case 0x102f82:
      uVar20 = puVar26[1];
      iVar15 = *(int *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 0xb;
      *(long *)(uVar20 + lVar30) = (long)iVar15;
      break;
    case 0x102fa8:
      uVar20 = puVar26[1];
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((undefined4 *)(uVar20 + lVar30))[2] = 9;
      *(undefined4 *)(uVar20 + lVar30) = uVar6;
      break;
    case 0x102fcc:
      puVar22 = (ushort *)(puVar26[1] + lVar30);
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      puVar22[4] = 7;
      puVar22[5] = 0;
      *puVar22 = (ushort)bVar1;
      break;
    case 0x102ff2:
      uVar20 = puVar26[1];
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar6;
      break;
    case 0x103016:
      uVar20 = puVar26[1];
      iVar15 = *(int *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 10;
      *(long *)(uVar20 + lVar30) = (long)iVar15;
      break;
    case 0x10303c:
      uVar20 = puVar26[1];
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 6;
      *(undefined2 *)(uVar20 + lVar30) = (short)uVar6;
      break;
    case 0x103061:
      uVar20 = puVar26[1];
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar6;
      break;
    case 0x103085:
      uVar20 = puVar26[1];
      uVar3 = *(ushort *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)uVar3;
      break;
    case 0x1030b4:
      uVar20 = puVar26[1];
      uVar3 = *(ushort *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)uVar3;
      break;
    case 0x1030e3:
      uVar20 = puVar26[1];
      uVar3 = *(ushort *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)uVar3;
      break;
    case 0x103112:
      uVar20 = puVar26[1];
      sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)(int)sVar4;
      break;
    case 0x103141:
      uVar20 = puVar26[1];
      sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)(int)sVar4;
      break;
    case 0x103170:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined8 *)(uVar20 + lVar30) + 1) = 2;
      *(undefined8 *)(uVar20 + lVar30) = uVar7;
      break;
    case 0x103198:
      puVar29 = (ulong *)(puVar26[1] + lVar30);
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if (_LC19 <= dVar34) {
        *puVar29 = (long)(dVar34 - _LC19);
        *puVar29 = *puVar29 ^ 0x8000000000000000;
      }
      else {
        *puVar29 = (long)dVar34;
      }
      *(undefined4 *)(puVar29 + 1) = 0xb;
      break;
    case 0x1031d6:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = (char)(int)dVar34;
      break;
    case 0x1031fc:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = (char)(int)dVar34;
      break;
    case 0x103222:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 10;
      *(long *)(uVar20 + lVar30) = (long)dVar34;
      break;
    case 0x10324a:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((int *)(uVar20 + lVar30))[2] = 8;
      *(int *)(uVar20 + lVar30) = (int)dVar34;
      break;
    case 0x103270:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 6;
      *(undefined2 *)(uVar20 + lVar30) = (short)(int)dVar34;
      break;
    case 0x103297:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = (char)(int)dVar34;
      break;
    case 0x1032bd:
      uVar20 = puVar26[1];
      uVar33 = *(ulong *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)uVar33;
      break;
    case 0x1032f6:
      uVar20 = puVar26[1];
      uVar33 = *(ulong *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)uVar33;
      break;
    case 0x10332f:
      uVar20 = puVar26[1];
      uVar33 = *(ulong *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)uVar33;
      break;
    case 0x103368:
      uVar20 = puVar26[1];
      lVar19 = *(long *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)lVar19;
      break;
    case 0x103395:
      uVar20 = puVar26[1];
      lVar19 = *(long *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)lVar19;
      break;
    case 0x1033c2:
      uVar20 = puVar26[1];
      lVar19 = *(long *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)lVar19;
      break;
    case 0x1033ef:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((undefined4 *)(uVar20 + lVar30))[2] = 9;
      *(undefined4 *)(uVar20 + lVar30) = (int)uVar7;
      break;
    case 0x103414:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 7;
      *(undefined2 *)(uVar20 + lVar30) = (short)uVar7;
      break;
    case 0x10343a:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar7;
      break;
    case 0x10345f:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined8 *)(uVar20 + lVar30) + 1) = 10;
      *(undefined8 *)(uVar20 + lVar30) = uVar7;
      break;
    case 0x103485:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((undefined4 *)(uVar20 + lVar30))[2] = 8;
      *(undefined4 *)(uVar20 + lVar30) = (int)uVar7;
      break;
    case 0x1034aa:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = (char)(int)dVar34;
      break;
    case 0x1034d0:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 7;
      *(undefined2 *)(uVar20 + lVar30) = (short)(int)dVar34;
      break;
    case 0x1034f7:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = (char)(int)dVar34;
      break;
    case 0x10351d:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 10;
      *(long *)(uVar20 + lVar30) = (long)dVar34;
      break;
    case 0x103545:
      if (*(code **)(*(long *)this + 0xf0) == TIntermTyped::getType) {
        pTVar21 = this + 0x20;
      }
      else {
        pTVar21 = (TIntermConstantUnion *)(**(code **)(*(long *)this + 0xf0))(this);
      }
      if (*(code **)(*(long *)pTVar21 + 0x38) == TType::getBasicType) {
        uVar14 = (uint)(byte)pTVar21[8];
      }
      else {
        uVar14 = (**(code **)(*(long *)pTVar21 + 0x38))();
      }
      switch(uVar14) {
      default:
        goto switchD_00102393_caseD_132;
      case 1:
      case 2:
      case 3:
        uVar20 = puVar26[1];
        uVar33 = *(ulong *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30) ^ _LC12;
        *(undefined4 *)((ulong *)(uVar20 + lVar30) + 1) = 2;
        *(ulong *)(uVar20 + lVar30) = uVar33;
        break;
      case 4:
        pcVar27 = (char *)(puVar26[1] + lVar30);
        cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
        pcVar27[8] = '\x04';
        pcVar27[9] = '\0';
        pcVar27[10] = '\0';
        pcVar27[0xb] = '\0';
        *pcVar27 = -cVar12;
        break;
      case 5:
        pcVar27 = (char *)(puVar26[1] + lVar30);
        cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
        pcVar27[8] = '\x05';
        pcVar27[9] = '\0';
        pcVar27[10] = '\0';
        pcVar27[0xb] = '\0';
        *pcVar27 = -cVar12;
        break;
      case 6:
        psVar23 = (short *)(puVar26[1] + lVar30);
        sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
        psVar23[4] = 6;
        psVar23[5] = 0;
        *psVar23 = -sVar4;
        break;
      case 7:
        psVar23 = (short *)(puVar26[1] + lVar30);
        sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
        psVar23[4] = 7;
        psVar23[5] = 0;
        *psVar23 = -sVar4;
        break;
      case 8:
        uVar20 = puVar26[1];
        iVar15 = *(int *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
        ((int *)(uVar20 + lVar30))[2] = 8;
        if (iVar15 != -0x80000000) {
          iVar15 = -iVar15;
        }
        *(int *)(uVar20 + lVar30) = iVar15;
        break;
      case 9:
        uVar20 = puVar26[1];
        iVar15 = *(int *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
        ((int *)(uVar20 + lVar30))[2] = 9;
        *(int *)(uVar20 + lVar30) = -iVar15;
        break;
      case 10:
        uVar20 = puVar26[1];
        lVar19 = *(long *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
        *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 10;
        *(long *)(uVar20 + lVar30) = -lVar19;
        break;
      case 0xb:
        uVar20 = puVar26[1];
        lVar19 = *(long *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
        *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 0xb;
        *(long *)(uVar20 + lVar30) = -lVar19;
      }
      break;
    case 0x10359a:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined8 *)(uVar20 + lVar30) + 1) = 2;
      *(undefined8 *)(uVar20 + lVar30) = uVar7;
      break;
    case 0x1035c2:
      puVar29 = (ulong *)(puVar26[1] + lVar30);
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if (_LC19 <= dVar34) {
        *puVar29 = (long)(dVar34 - _LC19);
        *puVar29 = *puVar29 ^ 0x8000000000000000;
      }
      else {
        *puVar29 = (long)dVar34;
      }
      *(undefined4 *)(puVar29 + 1) = 0xb;
      break;
    case 0x103600:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((undefined4 *)(uVar20 + lVar30))[2] = 9;
      *(undefined4 *)(uVar20 + lVar30) = (int)(long)dVar34;
      break;
    case 0x103627:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined8 *)(uVar20 + lVar30) + 1) = 2;
      *(undefined8 *)(uVar20 + lVar30) = uVar7;
      break;
    case 0x10364f:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 7;
      *(undefined2 *)(uVar20 + lVar30) = (short)(int)dVar34;
      break;
    case 0x103676:
      uVar20 = puVar26[1];
      dVar34 = (double)(*(ulong *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30) & _LC20);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = __LC18 < dVar34;
      break;
    case 0x1036ad:
      uVar20 = puVar26[1];
      dVar34 = _LC13 * *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34 / _LC14;
      break;
    case 0x1036e5:
      uVar20 = puVar26[1];
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined8 *)(uVar20 + lVar30) + 1) = 2;
      *(undefined8 *)(uVar20 + lVar30) = uVar7;
      break;
    case 0x10370d:
      puVar29 = (ulong *)(puVar26[1] + lVar30);
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if (_LC19 <= dVar34) {
        *puVar29 = (long)(dVar34 - _LC19);
        *puVar29 = *puVar29 ^ 0x8000000000000000;
      }
      else {
        *puVar29 = (long)dVar34;
      }
      *(undefined4 *)(puVar29 + 1) = 0xb;
      break;
    case 0x10374b:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 7;
      *(undefined2 *)(uVar20 + lVar30) = (short)(int)dVar34;
      break;
    case 0x103772:
      uVar20 = puVar26[1];
      sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)(int)sVar4;
      break;
    case 0x1037a1:
      uVar20 = puVar26[1];
      uVar3 = *(ushort *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((ulong *)(uVar20 + lVar30) + 1) = 0xb;
      *(ulong *)(uVar20 + lVar30) = (ulong)uVar3;
      break;
    case 0x1037c7:
      uVar20 = puVar26[1];
      uVar3 = *(ushort *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((uint *)(uVar20 + lVar30))[2] = 9;
      *(uint *)(uVar20 + lVar30) = (uint)uVar3;
      break;
    case 0x1037ec:
      uVar20 = puVar26[1];
      uVar5 = *(undefined2 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar5;
      break;
    case 0x103811:
      uVar20 = puVar26[1];
      uVar3 = *(ushort *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((ulong *)(uVar20 + lVar30) + 1) = 10;
      *(ulong *)(uVar20 + lVar30) = (ulong)uVar3;
      break;
    case 0x103837:
      uVar20 = puVar26[1];
      uVar3 = *(ushort *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((uint *)(uVar20 + lVar30))[2] = 8;
      *(uint *)(uVar20 + lVar30) = (uint)uVar3;
      break;
    case 0x10385c:
      uVar20 = puVar26[1];
      uVar5 = *(undefined2 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 6;
      *(undefined2 *)(uVar20 + lVar30) = uVar5;
      break;
    case 0x103882:
      uVar20 = puVar26[1];
      uVar5 = *(undefined2 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar5;
      break;
    case 0x1038a7:
      uVar20 = puVar26[1];
      sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 0xb;
      *(long *)(uVar20 + lVar30) = (long)sVar4;
      break;
    case 0x1038ce:
      uVar20 = puVar26[1];
      sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((int *)(uVar20 + lVar30))[2] = 9;
      *(int *)(uVar20 + lVar30) = (int)sVar4;
      break;
    case 0x1038f3:
      uVar20 = puVar26[1];
      uVar5 = *(undefined2 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 7;
      *(undefined2 *)(uVar20 + lVar30) = uVar5;
      break;
    case 0x103919:
      uVar20 = puVar26[1];
      uVar5 = *(undefined2 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar5;
      break;
    case 0x10393e:
      uVar20 = puVar26[1];
      sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 10;
      *(long *)(uVar20 + lVar30) = (long)sVar4;
      break;
    case 0x103965:
      uVar20 = puVar26[1];
      sVar4 = *(short *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((int *)(uVar20 + lVar30))[2] = 8;
      *(int *)(uVar20 + lVar30) = (int)sVar4;
      break;
    case 0x10398a:
      uVar20 = puVar26[1];
      uVar5 = *(undefined2 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = (char)uVar5;
      break;
    case 0x1039af:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)bVar1;
      break;
    case 0x1039de:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)bVar1;
      break;
    case 0x103a0d:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)bVar1;
      break;
    case 0x103a3c:
      uVar20 = puVar26[1];
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)(int)cVar12;
      break;
    case 0x103a6b:
      uVar20 = puVar26[1];
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)(int)cVar12;
      break;
    case 0x103a9a:
      uVar20 = puVar26[1];
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = (double)(int)cVar12;
      break;
    case 0x103ac9:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((ulong *)(uVar20 + lVar30) + 1) = 0xb;
      *(ulong *)(uVar20 + lVar30) = (ulong)bVar1;
      break;
    case 0x103aef:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((uint *)(uVar20 + lVar30))[2] = 9;
      *(uint *)(uVar20 + lVar30) = (uint)bVar1;
      break;
    case 0x103b14:
      puVar22 = (ushort *)(puVar26[1] + lVar30);
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      puVar22[4] = 7;
      puVar22[5] = 0;
      *puVar22 = (ushort)bVar1;
      break;
    case 0x103b3a:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((ulong *)(uVar20 + lVar30) + 1) = 10;
      *(ulong *)(uVar20 + lVar30) = (ulong)bVar1;
      break;
    case 0x103b60:
      uVar20 = puVar26[1];
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((uint *)(uVar20 + lVar30))[2] = 8;
      *(uint *)(uVar20 + lVar30) = (uint)bVar1;
      break;
    case 0x103b85:
      puVar22 = (ushort *)(puVar26[1] + lVar30);
      bVar1 = *(byte *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      puVar22[4] = 6;
      puVar22[5] = 0;
      *puVar22 = (ushort)bVar1;
      break;
    case 0x103bab:
      uVar20 = puVar26[1];
      uVar2 = *(undefined1 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 4;
      *(undefined1 *)(uVar20 + lVar30) = uVar2;
      break;
    case 0x103bd0:
      uVar20 = puVar26[1];
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 0xb;
      *(long *)(uVar20 + lVar30) = (long)cVar12;
      break;
    case 0x103bf7:
      uVar20 = puVar26[1];
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      ((int *)(uVar20 + lVar30))[2] = 9;
      *(int *)(uVar20 + lVar30) = (int)cVar12;
      break;
    case 0x103c1c:
      psVar23 = (short *)(puVar26[1] + lVar30);
      cVar12 = *(char *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      psVar23[4] = 7;
      psVar23[5] = 0;
      *psVar23 = (short)cVar12;
      break;
    case 0x103c43:
      uVar20 = puVar26[1];
      uVar2 = *(undefined1 *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = uVar2;
      break;
    case 0x103c68:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if ((double)((ulong)dVar34 & _LC20) < _LC16) {
        dVar34 = (double)((ulong)((double)(long)dVar34 -
                                 (double)(-(ulong)(dVar34 < (double)(long)dVar34) & (ulong)_LC10)) |
                         ~_LC20 & (ulong)dVar34);
      }
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x103ce1:
      pdVar24 = (double *)(puVar26[1] + lVar30);
      pdVar31 = (double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if (*(int *)(pdVar31 + 1) == 2) {
        dVar34 = *pdVar31;
        if (NAN(dVar34)) {
LAB_0010480a:
          dVar35 = _LC10;
        }
        else if (dVar34 == 0.0) {
          dVar35 = 0.0;
        }
        else {
          dVar35 = _LC11;
          if (0.0 < dVar34) goto LAB_0010480a;
        }
        *(int *)(pdVar24 + 1) = 2;
        *pdVar24 = dVar35;
      }
      else {
        uVar14 = *(uint *)pdVar31;
        if (uVar14 != 0) {
          uVar14 = (int)uVar14 >> 0x1f | 1;
        }
        *(uint *)pdVar24 = uVar14;
        *(int *)(pdVar24 + 1) = 8;
      }
      break;
    case 0x103d1b:
      puVar29 = (ulong *)(puVar26[1] + lVar30);
      puVar32 = (ulong *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if ((int)puVar32[1] == 2) {
        uVar20 = *puVar32 & _LC20;
        *(undefined4 *)(puVar29 + 1) = 2;
        *puVar29 = uVar20;
      }
      else if ((int)puVar32[1] == 8) {
        iVar15 = (int)*puVar32;
        *(undefined4 *)(puVar29 + 1) = 8;
        iVar16 = -iVar15;
        if (0 < iVar15) {
          iVar16 = iVar15;
        }
        *(int *)puVar29 = iVar16;
      }
      else {
        *puVar29 = *puVar32;
        *(int *)(puVar29 + 1) = (int)puVar32[1];
      }
      break;
    case 0x103d5a:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if (dVar34 < 0.0) {
        dVar34 = sqrt(dVar34);
      }
      else {
        dVar34 = SQRT(dVar34);
      }
      dVar35 = _LC10;
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar35 / dVar34;
      break;
    case 0x103da0:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if (dVar34 < 0.0) {
        dVar34 = sqrt(dVar34);
      }
      else {
        dVar34 = SQRT(dVar34);
      }
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x103dda:
      uVar20 = puVar26[1];
      dVar34 = log2(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x103e11:
      uVar20 = puVar26[1];
      dVar34 = exp2(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x103e48:
      uVar20 = puVar26[1];
      dVar34 = log(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x103e7f:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if ((double)((ulong)dVar34 & _LC20) < _LC16) {
        dVar34 = (double)((ulong)((double)(long)dVar34 +
                                 (double)(-(ulong)((double)(long)dVar34 < dVar34) & (ulong)_LC10)) |
                         ~_LC20 & (ulong)dVar34);
      }
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x103ef8:
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      dVar35 = dVar34;
      if ((double)((ulong)dVar34 & _LC20) < _LC16) {
        dVar35 = (double)((ulong)((double)(long)dVar34 -
                                 (double)(-(ulong)(dVar34 < (double)(long)dVar34) & (ulong)_LC10)) |
                         ~_LC20 & (ulong)dVar34);
      }
      dVar35 = dVar35 * _LC17;
      dVar9 = dVar35;
      if ((double)((ulong)dVar35 & _LC20) < _LC16) {
        dVar9 = (double)((ulong)((double)(long)dVar35 -
                                (double)(-(ulong)(dVar35 < (double)(long)dVar35) & (ulong)_LC10)) |
                        ~_LC20 & (ulong)dVar35);
      }
      if (dVar35 == dVar9) {
        dVar34 = dVar34 - _LC17;
        if ((double)((ulong)dVar34 & _LC20) < _LC16) {
          dVar34 = (double)((ulong)((double)(long)dVar34 +
                                   (double)(-(ulong)((double)(long)dVar34 < dVar34) & (ulong)_LC10))
                           | ~_LC20 & (ulong)dVar34);
        }
      }
      else {
        dVar34 = dVar34 + _LC17;
        if ((double)((ulong)dVar34 & _LC20) < _LC16) {
          dVar34 = (double)((ulong)((double)(long)dVar34 -
                                   (double)(-(ulong)(dVar34 < (double)(long)dVar34) & (ulong)_LC10))
                           | ~_LC20 & (ulong)dVar34);
        }
      }
      uVar20 = puVar26[1];
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x103ff6:
      uVar20 = puVar26[1];
      dVar34 = _LC17 + *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      if ((double)((ulong)dVar34 & _LC20) < _LC16) {
        dVar34 = (double)((ulong)((double)(long)dVar34 -
                                 (double)(-(ulong)(dVar34 < (double)(long)dVar34) & (ulong)_LC10)) |
                         ~_LC20 & (ulong)dVar34);
      }
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x104077:
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      pdVar24 = (double *)(puVar26[1] + lVar30);
      if (dVar34 <= 0.0) {
        if ((double)((ulong)dVar34 & _LC20) < _LC16) {
          dVar34 = (double)((ulong)((double)(long)dVar34 +
                                   (double)(-(ulong)((double)(long)dVar34 < dVar34) & (ulong)_LC10))
                           | ~_LC20 & (ulong)dVar34);
        }
        *(undefined4 *)(pdVar24 + 1) = 2;
        *pdVar24 = dVar34;
      }
      else {
        if ((double)((ulong)dVar34 & _LC20) < _LC16) {
          dVar34 = (double)((ulong)((double)(long)dVar34 -
                                   (double)(-(ulong)(dVar34 < (double)(long)dVar34) & (ulong)_LC10))
                           | ~_LC20 & (ulong)dVar34);
        }
        *(undefined4 *)(pdVar24 + 1) = 2;
        *pdVar24 = dVar34;
      }
      break;
    case 0x1040cf:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)(uVar20 + lVar30 + 8) = 0xc;
      *(bool *)(uVar20 + lVar30) = NAN(dVar34);
      break;
    case 0x1040fa:
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      uVar20 = puVar26[1];
      dVar35 = dVar34;
      if ((double)((ulong)dVar34 & _LC20) < _LC16) {
        dVar35 = (double)((ulong)((double)(long)dVar34 -
                                 (double)(-(ulong)(dVar34 < (double)(long)dVar34) & (ulong)_LC10)) |
                         ~_LC20 & (ulong)dVar34);
      }
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34 - dVar35;
      break;
    case 0x10417b:
      uVar20 = puVar26[1];
      dVar34 = exp(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x1041b2:
      uVar20 = puVar26[1];
      dVar34 = atan(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x1041e9:
      uVar20 = puVar26[1];
      dVar34 = acos(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x104220:
      uVar20 = puVar26[1];
      dVar34 = asin(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x104257:
      uVar20 = puVar26[1];
      dVar34 = tan(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x10428e:
      uVar20 = puVar26[1];
      dVar34 = cos(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x1042c5:
      uVar20 = puVar26[1];
      dVar34 = sin(*(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30));
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34;
      break;
    case 0x1042fc:
      uVar20 = puVar26[1];
      dVar34 = _LC14 * *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((double *)(uVar20 + lVar30) + 1) = 2;
      *(double *)(uVar20 + lVar30) = dVar34 / _LC13;
      break;
    case 0x104334:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((long *)(uVar20 + lVar30) + 1) = 10;
      *(long *)(uVar20 + lVar30) = (long)dVar34;
      break;
    case 0x10435c:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined2 *)(uVar20 + lVar30) + 4) = 6;
      *(undefined2 *)(uVar20 + lVar30) = (short)(int)dVar34;
      break;
    case 0x104383:
      uVar20 = puVar26[1];
      dVar34 = *(double *)(*(long *)(*(long *)(this + 0xc0) + 8) + lVar30);
      *(undefined4 *)((undefined1 *)(uVar20 + lVar30) + 8) = 5;
      *(undefined1 *)(uVar20 + lVar30) = (char)(int)dVar34;
    }
    lVar30 = lVar30 + 0x10;
  } while ((long)iVar13 * 0x10 != lVar30);
LAB_00102593:
  uVar20 = glslang::GetThreadPoolAllocator();
  this_00 = (TIntermTyped *)glslang::TPoolAllocator::allocate(uVar20);
  TIntermTyped::TIntermTyped(this_00,param_3);
  *(ulong **)(this_00 + 0xc0) = puVar26;
  *(code **)this_00 = log2;
  *(undefined ***)(this_00 + 0xb8) = &PTR__TConstUnionArray_0010ea68;
  this_00[200] = (TIntermTyped)0x0;
  if (*(code **)(*(long *)(this_00 + 0x20) + 0x50) == TType::getQualifier) {
    pTVar25 = this_00 + 0x30;
  }
  else {
    pTVar25 = (TIntermTyped *)TType::getQualifier((TType *)(this_00 + 0x20));
  }
  pTVar25[8] = (TIntermTyped)((byte)pTVar25[8] & 0x80 | 2);
  if ((code *)**(undefined8 **)this == TIntermNode::getLoc) {
    this = this + 8;
  }
  else {
    this = (TIntermConstantUnion *)(*(code *)**(undefined8 **)this)(this);
  }
  uVar7 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this_00 + 8) = *(undefined8 *)this;
  *(undefined8 *)(this_00 + 0x10) = uVar7;
  *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)(this + 0x10);
  return this_00;
}



/* glslang::TIntermediate::areAllChildConst(glslang::TIntermAggregate*) */

undefined8 __thiscall
glslang::TIntermediate::areAllChildConst(TIntermediate *this,TIntermAggregate *param_1)

{
  long *plVar1;
  long lVar2;
  TIntermAggregate *pTVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TIntermAggregate *)0x0) {
    return 1;
  }
  if (*(code **)(*(long *)param_1 + 400) == TIntermAggregate::getSequence) {
    pTVar3 = param_1 + 0xc0;
  }
  else {
    pTVar3 = (TIntermAggregate *)(**(code **)(*(long *)param_1 + 400))(param_1);
  }
  puVar4 = *(undefined8 **)(pTVar3 + 8);
  if (puVar4 != *(undefined8 **)(pTVar3 + 0x10)) {
    do {
      plVar1 = (long *)(**(code **)(*(long *)*puVar4 + 0x18))();
      lVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (lVar2 == 0) {
        return 0;
      }
      puVar4 = puVar4 + 1;
    } while (*(undefined8 **)(pTVar3 + 0x10) != puVar4);
  }
  return 1;
}



/* glslang::TIntermediate::foldConstructor(glslang::TIntermAggregate*) */

TIntermAggregate * __thiscall
glslang::TIntermediate::foldConstructor(TIntermediate *this,TIntermAggregate *param_1)

{
  int *piVar1;
  TType *this_00;
  char cVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  code *pcVar11;
  TSourceLoc *pTVar12;
  TIntermAggregate *pTVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  undefined **local_68;
  ulong *local_60;
  undefined **local_58;
  ulong *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
    pTVar13 = param_1 + 0x20;
  }
  else {
    pTVar13 = (TIntermAggregate *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
  }
  if (*(code **)(*(long *)pTVar13 + 0x38) == TType::getBasicType) {
    uVar3 = (uint)(byte)pTVar13[8];
    if (pTVar13[8] == (TIntermAggregate)0xf) goto LAB_00104bf0;
LAB_00104a58:
    if (uVar3 == 0x10) goto LAB_00104bf0;
    if ((byte)pTVar13[9] < 0x10) {
      uVar15 = (byte)pTVar13[9] & 0xf;
    }
    else {
      uVar15 = (uint)((byte)pTVar13[9] >> 4) * ((byte)pTVar13[10] & 0xf);
    }
LAB_00104a85:
    if ((*(long *)(pTVar13 + 0x60) != 0) &&
       (lVar5 = *(long *)(*(long *)(pTVar13 + 0x60) + 8), lVar5 != 0)) {
LAB_00104a97:
      piVar4 = *(int **)(lVar5 + 8);
      iVar14 = (int)(*(long *)(lVar5 + 0x10) - (long)piVar4 >> 4);
      if (iVar14 < 1) {
        iVar14 = 1;
      }
      else {
        piVar1 = piVar4 + (ulong)(iVar14 - 1) * 4 + 4;
        iVar14 = 1;
        do {
          iVar14 = iVar14 * *piVar4;
          piVar4 = piVar4 + 4;
        } while (piVar4 != piVar1);
      }
      uVar15 = uVar15 * iVar14;
    }
    local_68 = &PTR__TConstUnionArray_0010ea68;
    if (uVar15 == 0) goto LAB_00104ae5;
    uVar6 = glslang::GetThreadPoolAllocator();
    puVar7 = (ulong *)glslang::TPoolAllocator::allocate(uVar6);
    uVar6 = glslang::GetThreadPoolAllocator();
    if ((ulong)(long)(int)uVar15 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    *puVar7 = uVar6;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar8 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar6);
    puVar7[1] = (ulong)puVar8;
    puVar7[3] = (ulong)(puVar8 + (long)(int)uVar15 * 4);
    puVar9 = puVar8;
    do {
      *puVar9 = 0;
      puVar10 = puVar9 + 4;
      puVar9[2] = 8;
      puVar9 = puVar10;
    } while (puVar10 != puVar8 + (long)(int)uVar15 * 4);
    puVar7[2] = (ulong)puVar10;
    local_60 = puVar7;
  }
  else {
    iVar14 = (**(code **)(*(long *)pTVar13 + 0x38))(pTVar13);
    if (iVar14 != 0xf) {
      if (*(code **)(*(long *)pTVar13 + 0x38) == TType::getBasicType) {
        uVar3 = (uint)(byte)pTVar13[8];
      }
      else {
        uVar3 = (**(code **)(*(long *)pTVar13 + 0x38))(pTVar13);
      }
      goto LAB_00104a58;
    }
LAB_00104bf0:
    uVar15 = 0;
    puVar16 = *(undefined8 **)(*(long *)(pTVar13 + 0x68) + 8);
    uVar3 = 0;
    if (puVar16 != *(undefined8 **)(*(long *)(pTVar13 + 0x68) + 0x10)) {
      do {
        this_00 = (TType *)*puVar16;
        puVar16 = puVar16 + 4;
        iVar14 = TType::computeNumComponents(this_00);
        uVar15 = uVar3 + iVar14;
        uVar3 = uVar15;
      } while (*(undefined8 **)(*(long *)(pTVar13 + 0x68) + 0x10) != puVar16);
      goto LAB_00104a85;
    }
    if ((*(long *)(pTVar13 + 0x60) != 0) &&
       (lVar5 = *(long *)(*(long *)(pTVar13 + 0x60) + 8), lVar5 != 0)) goto LAB_00104a97;
LAB_00104ae5:
    local_68 = &PTR__TConstUnionArray_0010ea68;
    local_60 = (ulong *)0x0;
  }
  lVar5 = *(long *)param_1;
  if (*(code **)(lVar5 + 400) == TIntermAggregate::getSequence) {
    pTVar13 = param_1 + 0xc0;
  }
  else {
    pTVar13 = (TIntermAggregate *)(**(code **)(lVar5 + 400))(param_1);
    lVar5 = *(long *)param_1;
  }
  pcVar11 = *(code **)(lVar5 + 0xf0);
  if (*(long *)(pTVar13 + 0x10) - *(long *)(pTVar13 + 8) == 8) {
    if (pcVar11 == TIntermTyped::getType) {
      pTVar13 = param_1 + 0x20;
    }
    else {
      pTVar13 = (TIntermAggregate *)(*pcVar11)(param_1);
    }
    local_58 = &PTR__TConstUnionArray_0010ea68;
    local_50 = local_60;
    cVar2 = glslang::TIntermediate::parseConstTree
                      (this,param_1,&local_58,*(undefined4 *)(param_1 + 0xb8),pTVar13,1);
  }
  else {
    if (pcVar11 == TIntermTyped::getType) {
      pTVar13 = param_1 + 0x20;
    }
    else {
      pTVar13 = (TIntermAggregate *)(*pcVar11)(param_1);
    }
    local_58 = &PTR__TConstUnionArray_0010ea68;
    local_50 = local_60;
    cVar2 = glslang::TIntermediate::parseConstTree
                      (this,param_1,&local_58,*(undefined4 *)(param_1 + 0xb8),pTVar13,0);
  }
  if (cVar2 != '\0') goto LAB_00104bad;
  pcVar11 = (code *)**(undefined8 **)param_1;
  if (pcVar11 == TIntermNode::getLoc) {
    pcVar11 = (code *)(*(undefined8 **)param_1)[0x1e];
    cVar2 = (char)param_1 + '\b';
    if (pcVar11 != TIntermTyped::getType) goto LAB_00104da4;
LAB_00104b95:
    pTVar12 = (TSourceLoc *)(param_1 + 0x20);
  }
  else {
    cVar2 = (*pcVar11)(param_1);
    pcVar11 = *(code **)(*(long *)param_1 + 0xf0);
    if (pcVar11 == TIntermTyped::getType) goto LAB_00104b95;
LAB_00104da4:
    pTVar12 = (TSourceLoc *)(*pcVar11)(param_1);
  }
  param_1 = (TIntermAggregate *)
            glslang::TIntermediate::addConstantUnion
                      ((TConstUnionArray *)this,(TType *)&local_68,pTVar12,(bool)cVar2);
LAB_00104bad:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* glslang::TIntermediate::fold(glslang::TIntermAggregate*) */

TIntermTyped * __thiscall
glslang::TIntermediate::fold(TIntermediate *this,TIntermAggregate *param_1)

{
  double dVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  undefined8 uVar5;
  TConstUnion *pTVar6;
  TConstUnion *this_00;
  undefined1 (*pauVar7) [12];
  ulong *puVar8;
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
  undefined8 *puVar30;
  char cVar31;
  char cVar32;
  byte bVar33;
  undefined1 uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  long *plVar42;
  ulong uVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  ulong uVar47;
  double *pdVar48;
  TIntermAggregate *pTVar49;
  long lVar50;
  long *plVar51;
  code *pcVar52;
  undefined8 *puVar53;
  TIntermTyped *pTVar54;
  TType *pTVar55;
  undefined8 *puVar56;
  ushort uVar57;
  short sVar58;
  double *pdVar59;
  byte *pbVar60;
  ulong *puVar61;
  TIntermAggregate *pTVar62;
  ulong uVar63;
  undefined8 *puVar64;
  int iVar65;
  undefined4 uVar66;
  ushort *puVar67;
  short *psVar68;
  char *pcVar69;
  ulong uVar70;
  long lVar71;
  double *pdVar72;
  undefined8 *puVar73;
  double *pdVar74;
  long lVar75;
  uint uVar76;
  undefined8 *puVar77;
  undefined8 *puVar78;
  long in_FS_OFFSET;
  bool bVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  undefined1 auVar84 [12];
  undefined1 auVar85 [16];
  ulong *local_b8;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (TIntermAggregate *)0x0) {
    pTVar49 = (TIntermAggregate *)0x0;
  }
  else {
    cVar31 = areAllChildConst(this,param_1);
    if (cVar31 == '\0') goto switchD_00105491_caseD_a1;
    cVar32 = glslang::TIntermOperator::isConstructor();
    if (cVar32 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pTVar54 = (TIntermTyped *)foldConstructor(this,param_1);
        return pTVar54;
      }
      goto LAB_00106f34;
    }
    if (*(code **)(*(long *)param_1 + 400) == TIntermAggregate::getSequence) {
      pTVar49 = param_1 + 0xc0;
    }
    else {
      pTVar49 = (TIntermAggregate *)(**(code **)(*(long *)param_1 + 400))(param_1);
    }
    uVar35 = *(uint *)(param_1 + 0xb8);
    if (uVar35 < 0x114) {
      if (uVar35 < 0x112) {
        if (uVar35 == 0xa0) {
LAB_00106c88:
          plVar42 = (long *)(**(code **)(*(long *)**(undefined8 **)(pTVar49 + 8) + 0x28))();
          if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
            pTVar55 = (TType *)(plVar42 + 4);
          }
          else {
            pTVar55 = (TType *)(**(code **)(*plVar42 + 0xf0))(plVar42);
          }
          uVar35 = TType::computeNumComponents(pTVar55);
          goto LAB_0010510b;
        }
        uVar35 = uVar35 - 0xa8;
        if (0x37 < uVar35) goto switchD_00105491_caseD_a1;
        if ((0x3c00040800003fU >> ((ulong)uVar35 & 0x3f) & 1) != 0) goto LAB_00106c88;
        if (uVar35 == 0x37) {
          plVar42 = (long *)(**(code **)(**(long **)(*(long *)(pTVar49 + 8) + 0x10) + 0x18))();
          pcVar52 = *(code **)(*plVar42 + 0xf0);
          if (pcVar52 == TIntermTyped::getType) goto LAB_00104f40;
LAB_0010530c:
          plVar42 = (long *)(*pcVar52)(plVar42);
        }
        else {
          if (uVar35 != 0x36) goto switchD_00105491_caseD_a1;
          plVar42 = (long *)(**(code **)(**(long **)(*(long *)(pTVar49 + 8) + 8) + 0x18))();
          pcVar52 = *(code **)(*plVar42 + 0xf0);
          if (pcVar52 != TIntermTyped::getType) goto LAB_0010530c;
LAB_00104f40:
          plVar42 = plVar42 + 4;
        }
        if (*(code **)(*plVar42 + 0x60) == TType::getVectorSize) {
          uVar76 = *(byte *)((long)plVar42 + 9) & 0xf;
        }
        else {
          uVar76 = (**(code **)(*plVar42 + 0x60))();
        }
        plVar42 = (long *)(**(code **)(*(long *)**(undefined8 **)(pTVar49 + 8) + 0x18))();
        if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
          plVar42 = plVar42 + 4;
        }
        else {
          plVar42 = (long *)(**(code **)(*plVar42 + 0xf0))(plVar42);
        }
        if (*(code **)(*plVar42 + 0x60) == TType::getVectorSize) {
          uVar35 = *(byte *)((long)plVar42 + 9) & 0xf;
          if ((int)(*(byte *)((long)plVar42 + 9) & 0xf) < (int)uVar76) {
            uVar63 = (ulong)(int)uVar76;
            lVar75 = uVar63 << 4;
            uVar35 = uVar76;
            goto LAB_00104fcb;
          }
        }
        else {
          uVar35 = (**(code **)(*plVar42 + 0x60))();
          if ((int)uVar35 <= (int)uVar76) {
            uVar35 = uVar76;
          }
        }
LAB_0010510b:
        local_b8 = (ulong *)0x0;
        if (uVar35 != 0) {
          uVar63 = glslang::GetThreadPoolAllocator();
          local_b8 = (ulong *)glslang::TPoolAllocator::allocate(uVar63);
          uVar63 = (ulong)(int)uVar35;
          uVar43 = glslang::GetThreadPoolAllocator();
          if (uVar63 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("cannot create std::vector larger than max_size()");
          }
          lVar75 = uVar63 << 4;
          goto LAB_00104fea;
        }
      }
      else {
        cVar31 = '\0';
        lVar75 = 0x10;
        uVar63 = 1;
        uVar35 = 1;
LAB_00104fcb:
        uVar43 = glslang::GetThreadPoolAllocator();
        local_b8 = (ulong *)glslang::TPoolAllocator::allocate(uVar43);
        uVar43 = glslang::GetThreadPoolAllocator();
LAB_00104fea:
        *local_b8 = uVar43;
        local_b8[1] = 0;
        local_b8[2] = 0;
        local_b8[3] = 0;
        puVar44 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar43);
        local_b8[1] = (ulong)puVar44;
        local_b8[3] = lVar75 + (long)puVar44;
        puVar45 = puVar44;
        do {
          *puVar45 = 0;
          puVar46 = puVar45 + 4;
          puVar45[2] = 8;
          puVar45 = puVar46;
        } while (puVar44 + uVar63 * 4 != puVar46);
        local_b8[2] = (ulong)(puVar44 + uVar63 * 4);
      }
      uVar63 = glslang::GetThreadPoolAllocator();
      puVar73 = *(undefined8 **)(pTVar49 + 8);
      if (puVar73 == *(undefined8 **)(pTVar49 + 0x10)) {
        puVar56 = (undefined8 *)0x0;
      }
      else {
        puVar64 = (undefined8 *)0x0;
        puVar56 = (undefined8 *)0x0;
        uVar43 = 0;
        puVar78 = (undefined8 *)0x0;
        do {
          lVar75 = (**(code **)(*(long *)puVar73[uVar43] + 0x28))();
          if (puVar78 == puVar64) {
            puVar73 = (undefined8 *)((long)puVar78 - (long)puVar56);
            uVar47 = (long)puVar73 >> 4;
            if (uVar47 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("vector::_M_realloc_insert");
            }
            if (puVar56 == puVar78) {
              if (0xfffffffffffffffe < uVar47) goto LAB_00106c58;
              uVar70 = 0x7ffffffffffffff;
              if (uVar47 + 1 < 0x800000000000000) {
                uVar70 = uVar47 + 1;
              }
              lVar71 = uVar70 << 4;
LAB_00106bfe:
              puVar53 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar63);
              puVar64 = (undefined8 *)(lVar71 + (long)puVar53);
              uVar5 = *(undefined8 *)(lVar75 + 0xc0);
              *(undefined8 *)((long)puVar73 + (long)puVar53) = &PTR__TConstUnionArray_0010ea68;
              ((undefined8 *)((long)puVar73 + (long)puVar53))[1] = uVar5;
              if (puVar56 == puVar78) {
                puVar77 = puVar53 + 2;
                puVar56 = puVar53;
                goto LAB_00105172;
              }
            }
            else {
              uVar70 = uVar47 * 2;
              if (uVar70 < uVar47) {
LAB_00106c58:
                lVar71 = 0x7ffffffffffffff0;
                goto LAB_00106bfe;
              }
              if (uVar70 != 0) {
                if (0x7ffffffffffffff < uVar70) {
                  uVar70 = 0x7ffffffffffffff;
                }
                lVar71 = uVar70 << 4;
                goto LAB_00106bfe;
              }
              uVar5 = *(undefined8 *)(lVar75 + 0xc0);
              puVar53 = (undefined8 *)0x0;
              puVar64 = (undefined8 *)0x0;
              *puVar73 = &PTR__TConstUnionArray_0010ea68;
              puVar73[1] = uVar5;
            }
            puVar73 = puVar56 + 1;
            puVar30 = puVar53;
            do {
              puVar77 = puVar30;
              uVar5 = *puVar73;
              *puVar77 = &PTR__TConstUnionArray_0010ea68;
              puVar73 = puVar73 + 2;
              puVar77[1] = uVar5;
              puVar30 = puVar77 + 2;
            } while (puVar77 + 2 != (undefined8 *)(((long)puVar78 - (long)puVar56) + (long)puVar53))
            ;
            puVar77 = puVar77 + 4;
            puVar56 = puVar53;
          }
          else {
            puVar77 = puVar78 + 2;
            *puVar78 = &PTR__TConstUnionArray_0010ea68;
            puVar78[1] = *(undefined8 *)(lVar75 + 0xc0);
          }
LAB_00105172:
          puVar73 = *(undefined8 **)(pTVar49 + 8);
          uVar43 = (ulong)((int)uVar43 + 1);
          puVar78 = puVar77;
        } while (uVar43 < (ulong)(*(long *)(pTVar49 + 0x10) - (long)puVar73 >> 3));
      }
      if (cVar31 == '\0') {
        plVar42 = (long *)(**(code **)(*(long *)*puVar73 + 0x28))();
        if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
          pTVar55 = (TType *)(plVar42 + 4);
        }
        else {
          pTVar55 = (TType *)(**(code **)(*plVar42 + 0xf0))();
        }
        iVar40 = TType::computeNumComponents(pTVar55);
        uVar63 = _LC12;
        auVar29._8_8_ = local_58._8_8_;
        auVar29._0_8_ = local_58._0_8_;
        auVar28._8_8_ = local_58._8_8_;
        auVar28._0_8_ = local_58._0_8_;
        auVar27._8_8_ = local_58._8_8_;
        auVar27._0_8_ = local_58._0_8_;
        auVar26._8_8_ = local_58._8_8_;
        auVar26._0_8_ = local_58._0_8_;
        auVar25._8_8_ = local_58._8_8_;
        auVar25._0_8_ = local_58._0_8_;
        auVar22._8_8_ = local_58._8_8_;
        auVar22._0_8_ = local_58._0_8_;
        auVar21._8_8_ = local_58._8_8_;
        auVar21._0_8_ = local_58._0_8_;
        auVar20._8_8_ = local_58._8_8_;
        auVar20._0_8_ = local_58._0_8_;
        auVar19._8_8_ = local_58._8_8_;
        auVar19._0_8_ = local_58._0_8_;
        auVar18._8_8_ = local_68._8_8_;
        auVar18._0_8_ = local_68._0_8_;
        auVar17._8_8_ = local_68._8_8_;
        auVar17._0_8_ = local_68._0_8_;
        auVar16._8_8_ = local_68._8_8_;
        auVar16._0_8_ = local_68._0_8_;
        auVar15._8_8_ = local_68._8_8_;
        auVar15._0_8_ = local_68._0_8_;
        auVar14._8_8_ = local_68._8_8_;
        auVar14._0_8_ = local_68._0_8_;
        auVar11._8_8_ = local_68._8_8_;
        auVar11._0_8_ = local_68._0_8_;
        auVar10._8_8_ = local_68._8_8_;
        auVar10._0_8_ = local_68._0_8_;
        auVar9._8_8_ = local_68._8_8_;
        auVar9._0_8_ = local_68._0_8_;
        auVar85._8_8_ = local_68._8_8_;
        auVar85._0_8_ = local_68._0_8_;
        switch(*(undefined4 *)(param_1 + 0xb8)) {
        case 0x112:
          pdVar48 = (double *)local_b8[1];
          if (iVar40 < 1) {
            dVar83 = 0.0;
          }
          else {
            dVar83 = 0.0;
            lVar75 = 0;
            do {
              dVar80 = *(double *)(*(long *)(puVar56[3] + 8) + lVar75) -
                       *(double *)(*(long *)(puVar56[1] + 8) + lVar75);
              lVar75 = lVar75 + 0x10;
              dVar83 = dVar83 + dVar80 * dVar80;
            } while ((long)iVar40 * 0x10 != lVar75);
            if (dVar83 < 0.0) {
              dVar83 = sqrt(dVar83);
            }
            else {
              dVar83 = SQRT(dVar83);
            }
          }
          *(undefined4 *)(pdVar48 + 1) = 2;
          *pdVar48 = dVar83;
          break;
        case 0x113:
          pdVar48 = (double *)local_b8[1];
          lVar75 = *(long *)(puVar56[1] + 0x10);
          lVar71 = *(long *)(puVar56[1] + 8);
          if (lVar75 == lVar71) {
            dVar83 = 0.0;
          }
          else {
            lVar50 = 0;
            dVar83 = 0.0;
            uVar63 = 0;
            do {
              pdVar59 = (double *)(lVar71 + lVar50);
              pdVar72 = (double *)(*(long *)(puVar56[3] + 8) + lVar50);
              uVar63 = uVar63 + 1;
              lVar50 = lVar50 + 0x10;
              dVar83 = dVar83 + *pdVar59 * *pdVar72;
            } while (uVar63 < (ulong)(lVar75 - lVar71 >> 4));
          }
          *(undefined4 *)(pdVar48 + 1) = 2;
          *pdVar48 = dVar83;
          local_68 = auVar11;
          local_58 = auVar22;
          break;
        case 0x114:
          pTVar6 = *(TConstUnion **)(puVar56[3] + 8);
          this_00 = *(TConstUnion **)(puVar56[1] + 8);
          local_58 = TConstUnion::operator*(this_00 + 0x20,pTVar6 + 0x10);
          local_68 = TConstUnion::operator*(this_00 + 0x10,pTVar6 + 0x20);
          auVar84 = TConstUnion::operator-((TConstUnion *)local_68,(TConstUnion *)local_58);
          pauVar7 = (undefined1 (*) [12])local_b8[1];
          *pauVar7 = auVar84;
          auVar85 = TConstUnion::operator*(this_00,pTVar6 + 0x20);
          local_58 = auVar85;
          auVar85 = TConstUnion::operator*(this_00 + 0x20,pTVar6);
          local_68 = auVar85;
          auVar84 = TConstUnion::operator-((TConstUnion *)local_68,(TConstUnion *)local_58);
          *(undefined1 (*) [12])(pauVar7[1] + 4) = auVar84;
          auVar85 = TConstUnion::operator*(this_00 + 0x10,pTVar6);
          local_58 = auVar85;
          auVar85 = TConstUnion::operator*(this_00,pTVar6 + 0x10);
          local_68 = auVar85;
          auVar84 = TConstUnion::operator-((TConstUnion *)local_68,(TConstUnion *)local_58);
          *(undefined1 (*) [12])(pauVar7[2] + 8) = auVar84;
          break;
        default:
          goto switchD_00105491_caseD_a1;
        case 0x116:
          lVar75 = *(long *)(puVar56[3] + 0x10);
          lVar71 = *(long *)(puVar56[3] + 8);
          if (lVar71 == lVar75) {
            dVar83 = 0.0;
          }
          else {
            lVar50 = 0;
            dVar83 = 0.0;
            uVar43 = 0;
            do {
              pdVar48 = (double *)(lVar71 + lVar50);
              pdVar59 = (double *)(*(long *)(puVar56[5] + 8) + lVar50);
              uVar43 = uVar43 + 1;
              lVar50 = lVar50 + 0x10;
              dVar83 = dVar83 + *pdVar48 * *pdVar59;
            } while (uVar43 < (ulong)(lVar75 - lVar71 >> 4));
          }
          local_68 = auVar10;
          local_58 = auVar21;
          if (0 < iVar40) {
            puVar8 = (ulong *)local_b8[1];
            if (dVar83 < 0.0) {
              lVar75 = puVar56[1];
              lVar71 = 0;
              puVar61 = puVar8;
              while( true ) {
                lVar50 = *(long *)(lVar75 + 8);
                *puVar61 = *(ulong *)(lVar50 + lVar71);
                puVar45 = (undefined4 *)(lVar50 + 8 + lVar71);
                lVar71 = lVar71 + 0x10;
                *(undefined4 *)(puVar61 + 1) = *puVar45;
                local_68 = auVar17;
                local_58 = auVar28;
                if (lVar71 == (long)iVar40 * 0x10) break;
                puVar61 = (ulong *)((long)puVar8 + lVar71);
              }
            }
            else {
              lVar75 = puVar56[1];
              lVar71 = 0;
              puVar61 = puVar8;
              while( true ) {
                uVar43 = *(ulong *)(*(long *)(lVar75 + 8) + lVar71);
                lVar71 = lVar71 + 0x10;
                *(undefined4 *)(puVar61 + 1) = 2;
                *puVar61 = uVar43 ^ uVar63;
                local_68 = auVar18;
                local_58 = auVar29;
                if (lVar71 == (long)iVar40 * 0x10) break;
                puVar61 = (ulong *)((long)puVar8 + lVar71);
              }
            }
          }
          break;
        case 0x117:
          lVar75 = *(long *)(puVar56[1] + 0x10);
          lVar71 = *(long *)(puVar56[1] + 8);
          if (lVar71 == lVar75) {
            dVar83 = 0.0;
          }
          else {
            lVar50 = 0;
            dVar83 = 0.0;
            uVar63 = 0;
            do {
              pdVar48 = (double *)(lVar71 + lVar50);
              pdVar59 = (double *)(*(long *)(puVar56[3] + 8) + lVar50);
              uVar63 = uVar63 + 1;
              lVar50 = lVar50 + 0x10;
              dVar83 = dVar83 + *pdVar48 * *pdVar59;
            } while (uVar63 < (ulong)(lVar75 - lVar71 >> 4));
            dVar83 = dVar83 + dVar83;
          }
          local_68 = auVar9;
          local_58 = auVar20;
          if (0 < iVar40) {
            lVar75 = *(long *)(puVar56[3] + 8);
            uVar63 = local_b8[1];
            lVar50 = 0;
            do {
              dVar80 = *(double *)(lVar75 + lVar50);
              dVar82 = *(double *)(lVar71 + lVar50);
              *(undefined4 *)(uVar63 + 8 + lVar50) = 2;
              *(double *)(uVar63 + lVar50) = dVar82 - dVar80 * dVar83;
              lVar50 = lVar50 + 0x10;
              local_68 = auVar16;
              local_58 = auVar27;
            } while (lVar50 != (long)iVar40 * 0x10);
          }
          break;
        case 0x118:
          lVar75 = *(long *)(puVar56[1] + 0x10);
          lVar71 = *(long *)(puVar56[1] + 8);
          if (lVar71 == lVar75) {
            dVar80 = 0.0;
            dVar83 = _LC10;
          }
          else {
            lVar50 = 0;
            dVar80 = 0.0;
            uVar63 = 0;
            do {
              pdVar48 = (double *)(lVar71 + lVar50);
              pdVar59 = (double *)(*(long *)(puVar56[3] + 8) + lVar50);
              uVar63 = uVar63 + 1;
              lVar50 = lVar50 + 0x10;
              dVar80 = dVar80 + *pdVar48 * *pdVar59;
            } while (uVar63 < (ulong)(lVar75 - lVar71 >> 4));
            dVar83 = _LC10 - dVar80 * dVar80;
          }
          dVar82 = **(double **)(puVar56[5] + 8);
          dVar83 = _LC10 - dVar82 * dVar82 * dVar83;
          if (dVar83 < 0.0) {
            if (0 < iVar40) {
              puVar73 = (undefined8 *)local_b8[1];
              puVar56 = puVar73;
              do {
                *puVar56 = 0;
                puVar78 = puVar56 + 2;
                *(undefined4 *)(puVar56 + 1) = 2;
                puVar56 = puVar78;
                local_68 = auVar14;
                local_58 = auVar25;
              } while (puVar73 + (long)iVar40 * 2 != puVar78);
            }
          }
          else {
            local_68 = auVar85;
            local_58 = auVar19;
            if (0 < iVar40) {
              lVar75 = *(long *)(puVar56[3] + 8);
              uVar63 = local_b8[1];
              lVar50 = 0;
              do {
                dVar81 = *(double *)(lVar71 + lVar50);
                dVar1 = *(double *)(lVar75 + lVar50);
                *(undefined4 *)(uVar63 + 8 + lVar50) = 2;
                *(double *)(uVar63 + lVar50) =
                     dVar81 * dVar82 - dVar1 * (dVar80 * dVar82 + SQRT(dVar83));
                lVar50 = lVar50 + 0x10;
                local_68 = auVar15;
                local_58 = auVar26;
              } while (lVar50 != (long)iVar40 * 0x10);
            }
          }
          break;
        case 0x12a:
          plVar42 = (long *)(**(code **)(**(long **)(*(long *)(pTVar49 + 8) + 8) + 0x28))();
          if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
            pTVar55 = (TType *)(plVar42 + 4);
          }
          else {
            pTVar55 = (TType *)(**(code **)(*plVar42 + 0xf0))();
          }
          iVar41 = TType::computeNumComponents(pTVar55);
          auVar24._8_8_ = local_58._8_8_;
          auVar24._0_8_ = local_58._0_8_;
          auVar23._8_8_ = local_58._8_8_;
          auVar23._0_8_ = local_58._0_8_;
          auVar13._8_8_ = local_68._8_8_;
          auVar13._0_8_ = local_68._0_8_;
          auVar12._8_8_ = local_68._8_8_;
          auVar12._0_8_ = local_68._0_8_;
          if (0 < iVar40) {
            lVar75 = 0;
            iVar65 = 0;
LAB_0010664b:
            if (iVar41 < 1) goto LAB_00106de0;
            do {
              pdVar72 = (double *)(local_b8[1] + lVar75);
              pdVar59 = *(double **)(puVar56[3] + 8);
              pdVar74 = (double *)(*(long *)(puVar56[1] + 8) + lVar75);
              pdVar48 = pdVar59 + (long)iVar41 * 2;
              do {
                uVar66 = *(undefined4 *)(pdVar74 + 1);
                dVar83 = 0.0;
                switch(uVar66) {
                case 2:
                  dVar83 = *pdVar74 * *pdVar59;
                  break;
                case 4:
                case 5:
                  dVar83 = (double)(ulong)(byte)(*(char *)pdVar74 * *(char *)pdVar59);
                  break;
                case 6:
                case 7:
                  dVar83 = (double)(ulong)(ushort)(*(short *)pdVar74 * *(short *)pdVar59);
                  break;
                case 8:
                  dVar83 = (double)(ulong)(uint)(*(int *)pdVar74 * *(int *)pdVar59);
                default:
                  uVar66 = 8;
                  break;
                case 9:
                  dVar83 = (double)(ulong)(uint)(*(int *)pdVar74 * *(int *)pdVar59);
                  break;
                case 10:
                case 0xb:
                  dVar83 = (double)((long)*pdVar74 * (long)*pdVar59);
                }
                pdVar59 = pdVar59 + 2;
                *pdVar72 = dVar83;
                *(undefined4 *)(pdVar72 + 1) = uVar66;
                pdVar72 = pdVar72 + (long)iVar40 * 2;
              } while (pdVar59 != pdVar48);
              iVar65 = iVar65 + 1;
              lVar75 = lVar75 + 0x10;
              local_68 = auVar13;
              local_58 = auVar24;
            } while (iVar40 != iVar65);
            break;
          }
        }
      }
      else {
        lVar75 = 0;
        uVar76 = 0;
        if (uVar35 != 0) {
          do {
            plVar42 = (long *)(**(code **)(*(long *)*puVar73 + 0x18))();
            if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
              plVar42 = plVar42 + 4;
            }
            else {
              plVar42 = (long *)(**(code **)(*plVar42 + 0xf0))();
            }
            if (*(code **)(*plVar42 + 0x60) == TType::getVectorSize) {
              uVar36 = *(byte *)((long)plVar42 + 9) & 0xf;
            }
            else {
              uVar36 = (**(code **)(*plVar42 + 0x60))();
            }
            uVar37 = uVar36 - 1;
            if ((int)uVar76 < (int)(uVar36 - 1)) {
              uVar37 = uVar76;
            }
            if ((ulong)(*(long *)(pTVar49 + 0x10) - *(long *)(pTVar49 + 8)) < 9) {
              uVar36 = 0;
              uVar38 = 0;
            }
            else {
              plVar42 = (long *)(**(code **)(**(long **)(*(long *)(pTVar49 + 8) + 8) + 0x18))();
              if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
                plVar51 = plVar42 + 4;
                pcVar52 = *(code **)(plVar42[4] + 0x60);
                if (pcVar52 == TType::getVectorSize) goto LAB_001053fa;
LAB_00106bb5:
                uVar38 = (*pcVar52)();
              }
              else {
                plVar51 = (long *)(**(code **)(*plVar42 + 0xf0))();
                pcVar52 = *(code **)(*plVar51 + 0x60);
                if (pcVar52 != TType::getVectorSize) goto LAB_00106bb5;
LAB_001053fa:
                uVar38 = *(byte *)((long)plVar51 + 9) & 0xf;
              }
              uVar36 = uVar38 - 1;
              if ((int)uVar76 < (int)(uVar38 - 1)) {
                uVar36 = uVar76;
              }
              if ((ulong)(*(long *)(pTVar49 + 0x10) - *(long *)(pTVar49 + 8)) < 0x11) {
                uVar38 = 0;
              }
              else {
                plVar42 = (long *)(**(code **)(**(long **)(*(long *)(pTVar49 + 8) + 0x10) + 0x18))()
                ;
                if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
                  plVar42 = plVar42 + 4;
                }
                else {
                  plVar42 = (long *)(**(code **)(*plVar42 + 0xf0))();
                }
                if (*(code **)(*plVar42 + 0x60) == TType::getVectorSize) {
                  uVar39 = *(byte *)((long)plVar42 + 9) & 0xf;
                }
                else {
                  uVar39 = (**(code **)(*plVar42 + 0x60))();
                }
                uVar38 = uVar39 - 1;
                if ((int)uVar76 < (int)(uVar39 - 1)) {
                  uVar38 = uVar76;
                }
              }
            }
            switch(*(undefined4 *)(param_1 + 0xb8)) {
            case 0xa0:
              dVar83 = *(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
              dVar80 = *(double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
              dVar82 = dVar83 / dVar80;
              if ((double)((ulong)dVar82 & _LC20) < _LC16) {
                dVar82 = (double)((ulong)((double)(long)dVar82 -
                                         (double)(-(ulong)(dVar82 < (double)(long)dVar82) &
                                                 (ulong)_LC10)) | ~_LC20 & (ulong)dVar82);
              }
              uVar63 = local_b8[1];
              *(undefined4 *)((double *)(uVar63 + lVar75) + 1) = 2;
              *(double *)(uVar63 + lVar75) = dVar83 - dVar82 * dVar80;
              break;
            default:
              goto switchD_00105491_caseD_a1;
            case 0xa8:
              uVar63 = local_b8[1];
              uVar34 = TConstUnion::operator==
                                 ((TConstUnion *)
                                  ((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8)),
                                  (TConstUnion *)
                                  ((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8)));
              *(undefined1 *)(uVar63 + lVar75) = uVar34;
              *(undefined4 *)((undefined1 *)(uVar63 + lVar75) + 8) = 0xc;
              break;
            case 0xa9:
              pbVar60 = (byte *)(local_b8[1] + lVar75);
              bVar33 = TConstUnion::operator==
                                 ((TConstUnion *)
                                  ((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8)),
                                  (TConstUnion *)
                                  ((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8)));
              *pbVar60 = bVar33 ^ 1;
              pbVar60[8] = 0xc;
              pbVar60[9] = 0;
              pbVar60[10] = 0;
              pbVar60[0xb] = 0;
              break;
            case 0xaa:
              pdVar48 = (double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
              lVar71 = local_b8[1] + lVar75;
              pdVar59 = (double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
              switch(*(undefined4 *)(pdVar59 + 1)) {
              default:
switchD_0010596c_caseD_0:
                bVar79 = false;
                break;
              case 2:
                bVar79 = *pdVar59 <= *pdVar48 && *pdVar48 != *pdVar59;
                break;
              case 4:
                bVar79 = *(char *)pdVar59 < *(char *)pdVar48;
                break;
              case 5:
                bVar79 = *(byte *)pdVar59 < *(byte *)pdVar48;
                break;
              case 6:
                bVar79 = *(short *)pdVar59 < *(short *)pdVar48;
                break;
              case 7:
                bVar79 = *(ushort *)pdVar59 < *(ushort *)pdVar48;
                break;
              case 8:
                bVar79 = *(int *)pdVar59 < *(int *)pdVar48;
                break;
              case 9:
                bVar79 = *(uint *)pdVar59 < *(uint *)pdVar48;
                break;
              case 10:
                bVar79 = (long)*pdVar59 < (long)*pdVar48;
                break;
              case 0xb:
                bVar79 = (ulong)*pdVar59 < (ulong)*pdVar48;
              }
              goto LAB_00105ba8;
            case 0xab:
              pdVar48 = (double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
              lVar71 = local_b8[1] + lVar75;
              pdVar59 = (double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
              switch(*(undefined4 *)(pdVar59 + 1)) {
              default:
                goto switchD_0010596c_caseD_0;
              case 2:
                bVar79 = *pdVar48 <= *pdVar59 && *pdVar59 != *pdVar48;
                break;
              case 4:
                bVar79 = *(char *)pdVar48 < *(char *)pdVar59;
                break;
              case 5:
                bVar79 = *(byte *)pdVar48 < *(byte *)pdVar59;
                break;
              case 6:
                bVar79 = *(short *)pdVar48 < *(short *)pdVar59;
                break;
              case 7:
                bVar79 = *(ushort *)pdVar48 < *(ushort *)pdVar59;
                break;
              case 8:
                bVar79 = *(int *)pdVar48 < *(int *)pdVar59;
                break;
              case 9:
                bVar79 = *(uint *)pdVar48 < *(uint *)pdVar59;
                break;
              case 10:
                bVar79 = (long)*pdVar48 < (long)*pdVar59;
                break;
              case 0xb:
                bVar79 = (ulong)*pdVar48 < (ulong)*pdVar59;
              }
LAB_00105ba8:
              *(bool *)lVar71 = bVar79;
              *(undefined4 *)(lVar71 + 8) = 0xc;
              break;
            case 0xac:
              pbVar60 = (byte *)(local_b8[1] + lVar75);
              bVar33 = TConstUnion::operator>
                                 ((TConstUnion *)
                                  ((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8)),
                                  (TConstUnion *)
                                  ((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8)));
              *pbVar60 = bVar33 ^ 1;
              pbVar60[8] = 0xc;
              pbVar60[9] = 0;
              pbVar60[10] = 0;
              pbVar60[0xb] = 0;
              break;
            case 0xad:
              pbVar60 = (byte *)(local_b8[1] + lVar75);
              bVar33 = TConstUnion::operator<
                                 ((TConstUnion *)
                                  ((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8)),
                                  (TConstUnion *)
                                  ((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8)));
              *pbVar60 = bVar33 ^ 1;
              pbVar60[8] = 0xc;
              pbVar60[9] = 0;
              pbVar60[10] = 0;
              pbVar60[0xb] = 0;
              break;
            case 0xc3:
              uVar63 = local_b8[1];
              dVar83 = atan2(*(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8)),
                             *(double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8)));
              *(undefined4 *)((double *)(uVar63 + lVar75) + 1) = 2;
              *(double *)(uVar63 + lVar75) = dVar83;
              break;
            case 0xca:
              uVar63 = local_b8[1];
              dVar83 = pow(*(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8)),
                           *(double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8)));
              *(undefined4 *)((double *)(uVar63 + lVar75) + 1) = 2;
              *(double *)(uVar63 + lVar75) = dVar83;
              break;
            case 0xda:
              plVar42 = (long *)(**(code **)(*(long *)**(undefined8 **)(pTVar49 + 8) + 0x18))();
              if (*(code **)(*plVar42 + 0x100) == TIntermTyped::getBasicType) {
                uVar38 = (uint)*(byte *)(plVar42 + 5);
              }
              else {
                uVar38 = (**(code **)(*plVar42 + 0x100))();
              }
              switch(uVar38) {
              case 1:
              case 2:
              case 3:
                uVar63 = local_b8[1];
                dVar83 = *(double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                dVar80 = *(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                if (dVar80 <= dVar83) {
                  dVar83 = dVar80;
                }
                *(undefined4 *)((double *)(uVar63 + lVar75) + 1) = 2;
                *(double *)(uVar63 + lVar75) = dVar83;
                break;
              case 4:
                pcVar69 = (char *)(local_b8[1] + lVar75);
                cVar32 = *(char *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                cVar31 = *(char *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                pcVar69[8] = '\x04';
                pcVar69[9] = '\0';
                pcVar69[10] = '\0';
                pcVar69[0xb] = '\0';
                if (cVar31 < cVar32) {
                  cVar32 = cVar31;
                }
                *pcVar69 = cVar32;
                break;
              case 5:
                pbVar60 = (byte *)(local_b8[1] + lVar75);
                bVar2 = *(byte *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                bVar33 = *(byte *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                pbVar60[8] = 5;
                pbVar60[9] = 0;
                pbVar60[10] = 0;
                pbVar60[0xb] = 0;
                if (bVar33 < bVar2) {
                  bVar2 = bVar33;
                }
                *pbVar60 = bVar2;
                break;
              case 6:
                psVar68 = (short *)(local_b8[1] + lVar75);
                sVar4 = *(short *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                sVar58 = *(short *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                psVar68[4] = 6;
                psVar68[5] = 0;
                if (sVar58 < sVar4) {
                  sVar4 = sVar58;
                }
                *psVar68 = sVar4;
                break;
              case 7:
                puVar67 = (ushort *)(local_b8[1] + lVar75);
                uVar3 = *(ushort *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                uVar57 = *(ushort *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                puVar67[4] = 7;
                puVar67[5] = 0;
                if (uVar57 < uVar3) {
                  uVar3 = uVar57;
                }
                *puVar67 = uVar3;
                break;
              case 8:
                uVar63 = local_b8[1];
                iVar40 = *(int *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                iVar41 = *(int *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                ((int *)(uVar63 + lVar75))[2] = 8;
                if (iVar41 < iVar40) {
                  iVar40 = iVar41;
                }
                *(int *)(uVar63 + lVar75) = iVar40;
                break;
              case 9:
                uVar63 = local_b8[1];
                uVar37 = *(uint *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                uVar36 = *(uint *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                ((uint *)(uVar63 + lVar75))[2] = 9;
                if (uVar36 < uVar37) {
                  uVar37 = uVar36;
                }
                *(uint *)(uVar63 + lVar75) = uVar37;
                break;
              case 10:
                uVar63 = local_b8[1];
                lVar71 = *(long *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                lVar50 = *(long *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                *(undefined4 *)((long *)(uVar63 + lVar75) + 1) = 10;
                if (lVar50 < lVar71) {
                  lVar71 = lVar50;
                }
                *(long *)(uVar63 + lVar75) = lVar71;
                break;
              case 0xb:
                uVar63 = local_b8[1];
                uVar43 = *(ulong *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                uVar47 = *(ulong *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                *(undefined4 *)((ulong *)(uVar63 + lVar75) + 1) = 0xb;
                if (uVar47 < uVar43) {
                  uVar43 = uVar47;
                }
                *(ulong *)(uVar63 + lVar75) = uVar43;
              }
              break;
            case 0xdb:
              plVar42 = (long *)(**(code **)(*(long *)**(undefined8 **)(pTVar49 + 8) + 0x18))();
              if (*(code **)(*plVar42 + 0x100) == TIntermTyped::getBasicType) {
                uVar38 = (uint)*(byte *)(plVar42 + 5);
              }
              else {
                uVar38 = (**(code **)(*plVar42 + 0x100))();
              }
              switch(uVar38) {
              case 1:
              case 2:
              case 3:
                uVar63 = local_b8[1];
                dVar83 = *(double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                dVar80 = *(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                if (dVar83 <= dVar80) {
                  dVar83 = dVar80;
                }
                *(undefined4 *)((double *)(uVar63 + lVar75) + 1) = 2;
                *(double *)(uVar63 + lVar75) = dVar83;
                break;
              case 4:
                pcVar69 = (char *)(local_b8[1] + lVar75);
                cVar32 = *(char *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                cVar31 = *(char *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                pcVar69[8] = '\x04';
                pcVar69[9] = '\0';
                pcVar69[10] = '\0';
                pcVar69[0xb] = '\0';
                if (cVar32 < cVar31) {
                  cVar32 = cVar31;
                }
                *pcVar69 = cVar32;
                break;
              case 5:
                pbVar60 = (byte *)(local_b8[1] + lVar75);
                bVar2 = *(byte *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                bVar33 = *(byte *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                pbVar60[8] = 5;
                pbVar60[9] = 0;
                pbVar60[10] = 0;
                pbVar60[0xb] = 0;
                if (bVar2 < bVar33) {
                  bVar2 = bVar33;
                }
                *pbVar60 = bVar2;
                break;
              case 6:
                psVar68 = (short *)(local_b8[1] + lVar75);
                sVar4 = *(short *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                sVar58 = *(short *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                psVar68[4] = 6;
                psVar68[5] = 0;
                if (sVar4 < sVar58) {
                  sVar4 = sVar58;
                }
                *psVar68 = sVar4;
                break;
              case 7:
                puVar67 = (ushort *)(local_b8[1] + lVar75);
                uVar3 = *(ushort *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                uVar57 = *(ushort *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                puVar67[4] = 7;
                puVar67[5] = 0;
                if (uVar3 < uVar57) {
                  uVar3 = uVar57;
                }
                *puVar67 = uVar3;
                break;
              case 8:
                uVar63 = local_b8[1];
                iVar40 = *(int *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                iVar41 = *(int *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                ((int *)(uVar63 + lVar75))[2] = 8;
                if (iVar40 < iVar41) {
                  iVar40 = iVar41;
                }
                *(int *)(uVar63 + lVar75) = iVar40;
                break;
              case 9:
                uVar63 = local_b8[1];
                uVar37 = *(uint *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                uVar36 = *(uint *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                ((uint *)(uVar63 + lVar75))[2] = 9;
                if (uVar37 < uVar36) {
                  uVar37 = uVar36;
                }
                *(uint *)(uVar63 + lVar75) = uVar37;
                break;
              case 10:
                uVar63 = local_b8[1];
                lVar71 = *(long *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                lVar50 = *(long *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                *(undefined4 *)((long *)(uVar63 + lVar75) + 1) = 10;
                if (lVar71 < lVar50) {
                  lVar71 = lVar50;
                }
                *(long *)(uVar63 + lVar75) = lVar71;
                break;
              case 0xb:
                uVar63 = local_b8[1];
                uVar43 = *(ulong *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                uVar47 = *(ulong *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                *(undefined4 *)((ulong *)(uVar63 + lVar75) + 1) = 0xb;
                if (uVar43 < uVar47) {
                  uVar43 = uVar47;
                }
                *(ulong *)(uVar63 + lVar75) = uVar43;
              }
              break;
            case 0xdc:
              plVar42 = (long *)(**(code **)(*(long *)**(undefined8 **)(pTVar49 + 8) + 0x18))();
              if (*(code **)(*plVar42 + 0x100) == TIntermTyped::getBasicType) {
                uVar39 = (uint)*(byte *)(plVar42 + 5);
              }
              else {
                uVar39 = (**(code **)(*plVar42 + 0x100))();
              }
              switch(uVar39) {
              case 1:
              case 2:
              case 3:
                uVar63 = local_b8[1];
                dVar83 = *(double *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
                dVar80 = *(double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                dVar82 = *(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                if (dVar80 <= dVar82) {
                  dVar80 = dVar82;
                }
                *(undefined4 *)((double *)(uVar63 + lVar75) + 1) = 2;
                if (dVar80 <= dVar83) {
                  dVar83 = dVar80;
                }
                *(double *)(uVar63 + lVar75) = dVar83;
                break;
              case 4:
                pcVar69 = (char *)(local_b8[1] + lVar75);
                cVar31 = *(char *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                cVar32 = *(char *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                if (cVar31 < cVar32) {
                  cVar31 = cVar32;
                }
                cVar32 = *(char *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
                pcVar69[8] = '\x04';
                pcVar69[9] = '\0';
                pcVar69[10] = '\0';
                pcVar69[0xb] = '\0';
                if (cVar32 < cVar31) {
                  cVar31 = cVar32;
                }
                *pcVar69 = cVar31;
                break;
              case 5:
                pbVar60 = (byte *)(local_b8[1] + lVar75);
                bVar33 = *(byte *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                bVar2 = *(byte *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                if (bVar33 < bVar2) {
                  bVar33 = bVar2;
                }
                bVar2 = *(byte *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
                pbVar60[8] = 5;
                pbVar60[9] = 0;
                pbVar60[10] = 0;
                pbVar60[0xb] = 0;
                if (bVar2 < bVar33) {
                  bVar33 = bVar2;
                }
                *pbVar60 = bVar33;
                break;
              case 6:
                psVar68 = (short *)(local_b8[1] + lVar75);
                sVar58 = *(short *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                sVar4 = *(short *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                if (sVar58 < sVar4) {
                  sVar58 = sVar4;
                }
                sVar4 = *(short *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
                psVar68[4] = 6;
                psVar68[5] = 0;
                if (sVar4 < sVar58) {
                  sVar58 = sVar4;
                }
                *psVar68 = sVar58;
                break;
              case 7:
                puVar67 = (ushort *)(local_b8[1] + lVar75);
                uVar57 = *(ushort *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                uVar3 = *(ushort *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                if (uVar57 < uVar3) {
                  uVar57 = uVar3;
                }
                uVar3 = *(ushort *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
                puVar67[4] = 7;
                puVar67[5] = 0;
                if (uVar3 < uVar57) {
                  uVar57 = uVar3;
                }
                *puVar67 = uVar57;
                break;
              case 8:
                uVar63 = local_b8[1];
                iVar40 = *(int *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                iVar41 = *(int *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                if (iVar40 < iVar41) {
                  iVar40 = iVar41;
                }
                iVar41 = *(int *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
                ((int *)(uVar63 + lVar75))[2] = 8;
                if (iVar41 < iVar40) {
                  iVar40 = iVar41;
                }
                *(int *)(uVar63 + lVar75) = iVar40;
                break;
              case 9:
                uVar63 = local_b8[1];
                uVar37 = *(uint *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                uVar36 = *(uint *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                if (uVar37 < uVar36) {
                  uVar37 = uVar36;
                }
                uVar36 = *(uint *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
                ((uint *)(uVar63 + lVar75))[2] = 9;
                if (uVar36 < uVar37) {
                  uVar37 = uVar36;
                }
                *(uint *)(uVar63 + lVar75) = uVar37;
                break;
              case 10:
                uVar63 = local_b8[1];
                lVar71 = *(long *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                lVar50 = *(long *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                if (lVar71 < lVar50) {
                  lVar71 = lVar50;
                }
                lVar50 = *(long *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
                *(undefined4 *)((long *)(uVar63 + lVar75) + 1) = 10;
                if (lVar50 < lVar71) {
                  lVar71 = lVar50;
                }
                *(long *)(uVar63 + lVar75) = lVar71;
                break;
              case 0xb:
                uVar63 = local_b8[1];
                uVar43 = *(ulong *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                uVar47 = *(ulong *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                if (uVar43 < uVar47) {
                  uVar43 = uVar47;
                }
                uVar47 = *(ulong *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
                *(undefined4 *)((ulong *)(uVar63 + lVar75) + 1) = 0xb;
                if (uVar47 < uVar43) {
                  uVar43 = uVar47;
                }
                *(ulong *)(uVar63 + lVar75) = uVar43;
              }
              break;
            case 0xdd:
              plVar42 = (long *)(**(code **)(*(long *)**(undefined8 **)(pTVar49 + 8) + 0x18))();
              if (*(code **)(*plVar42 + 0x170) == TIntermTyped::isFloatingDomain) {
                if (2 < (byte)((char)plVar42[5] - 1U)) goto switchD_00105491_caseD_a1;
              }
              else {
                cVar31 = (**(code **)(*plVar42 + 0x170))();
                if (cVar31 == '\0') goto switchD_00105491_caseD_a1;
              }
              plVar42 = (long *)(**(code **)(**(long **)(*(long *)(pTVar49 + 8) + 0x10) + 0x18))();
              if (*(code **)(*plVar42 + 0x100) == TIntermTyped::getBasicType) {
                uVar39 = (uint)*(byte *)(plVar42 + 5);
              }
              else {
                uVar39 = (**(code **)(*plVar42 + 0x100))();
              }
              pdVar48 = (double *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8));
              pdVar59 = (double *)(local_b8[1] + lVar75);
              if (uVar39 == 0xc) {
                if (*(char *)pdVar48 == '\0') {
                  dVar80 = *(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
                }
                else {
                  dVar80 = *(double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
                }
                goto LAB_00105594;
              }
              dVar83 = *pdVar48;
              dVar81 = _LC10 - dVar83;
              dVar80 = *(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
              dVar82 = *(double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
              *(undefined4 *)(pdVar59 + 1) = 2;
              *pdVar59 = dVar81 * dVar80 + dVar83 * dVar82;
              break;
            case 0xde:
              pdVar59 = (double *)(local_b8[1] + lVar75);
              dVar83 = *(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
              pdVar48 = (double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8));
              dVar80 = 0.0;
              if (dVar83 < *pdVar48 || dVar83 == *pdVar48) {
                dVar80 = _LC10;
              }
LAB_00105594:
              *(undefined4 *)(pdVar59 + 1) = 2;
              *pdVar59 = dVar80;
              break;
            case 0xdf:
              dVar83 = *(double *)((long)(int)uVar37 * 0x10 + *(long *)(puVar56[1] + 8));
              dVar80 = (*(double *)((long)(int)uVar38 * 0x10 + *(long *)(puVar56[5] + 8)) - dVar83)
                       / (*(double *)((long)(int)uVar36 * 0x10 + *(long *)(puVar56[3] + 8)) - dVar83
                         );
              dVar83 = 0.0;
              if ((0.0 <= dVar80) && (dVar83 = _LC10, dVar80 <= _LC10)) {
                dVar83 = (_LC22 - (dVar80 + dVar80)) * dVar80 * dVar80;
              }
              uVar63 = local_b8[1];
              *(undefined4 *)((double *)(uVar63 + lVar75) + 1) = 2;
              *(double *)(uVar63 + lVar75) = dVar83;
            }
            uVar76 = uVar76 + 1;
            lVar75 = lVar75 + 0x10;
            if (uVar76 == uVar35) break;
            puVar73 = *(undefined8 **)(pTVar49 + 8);
          } while( true );
        }
      }
LAB_001064e0:
      uVar63 = glslang::GetThreadPoolAllocator();
      pTVar49 = (TIntermAggregate *)glslang::TPoolAllocator::allocate(uVar63);
      if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
        pTVar62 = param_1 + 0x20;
      }
      else {
        pTVar62 = (TIntermAggregate *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
      }
      TIntermTyped::TIntermTyped((TIntermTyped *)pTVar49,(TType *)pTVar62);
      ((TIntermTyped *)pTVar49)[200] = (TIntermTyped)0x0;
      *(code **)pTVar49 = log2;
      *(undefined ***)((TIntermTyped *)pTVar49 + 0xb8) = &PTR__TConstUnionArray_0010ea68;
      *(ulong **)((TIntermTyped *)pTVar49 + 0xc0) = local_b8;
      if (*(code **)(*(long *)((TIntermTyped *)pTVar49 + 0x20) + 0x50) == TType::getQualifier) {
        pTVar54 = (TIntermTyped *)pTVar49 + 0x30;
      }
      else {
        pTVar54 = (TIntermTyped *)TType::getQualifier((TType *)((TIntermTyped *)pTVar49 + 0x20));
      }
      pTVar54[8] = (TIntermTyped)((byte)pTVar54[8] & 0x80 | 2);
      if ((code *)**(undefined8 **)param_1 == TIntermNode::getLoc) {
        pTVar62 = param_1 + 8;
      }
      else {
        pTVar62 = (TIntermAggregate *)(*(code *)**(undefined8 **)param_1)(param_1);
      }
      uVar5 = *(undefined8 *)(pTVar62 + 8);
      *(undefined8 *)((TIntermTyped *)pTVar49 + 8) = *(undefined8 *)pTVar62;
      *(undefined8 *)((TIntermTyped *)pTVar49 + 0x10) = uVar5;
      *(undefined8 *)((TIntermTyped *)pTVar49 + 0x18) = *(undefined8 *)(pTVar62 + 0x10);
    }
    else {
      if (uVar35 < 0x119) {
        if ((0x115 < uVar35) || (uVar35 == 0x114)) {
          plVar42 = (long *)(**(code **)(*(long *)**(undefined8 **)(pTVar49 + 8) + 0x28))();
          if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
            pTVar55 = (TType *)(plVar42 + 4);
          }
          else {
            pTVar55 = (TType *)(**(code **)(*plVar42 + 0xf0))(plVar42);
          }
          uVar35 = TType::computeNumComponents(pTVar55);
          cVar31 = '\0';
          goto LAB_0010510b;
        }
      }
      else if (uVar35 == 0x12a) {
        plVar42 = (long *)(**(code **)(*(long *)**(undefined8 **)(pTVar49 + 8) + 0x18))();
        if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
          plVar42 = plVar42 + 4;
        }
        else {
          plVar42 = (long *)(**(code **)(*plVar42 + 0xf0))(plVar42);
        }
        if (*(code **)(*plVar42 + 0x60) == TType::getVectorSize) {
          uVar35 = *(byte *)((long)plVar42 + 9) & 0xf;
        }
        else {
          uVar35 = (**(code **)(*plVar42 + 0x60))();
        }
        plVar42 = (long *)(**(code **)(**(long **)(*(long *)(pTVar49 + 8) + 8) + 0x18))();
        if (*(code **)(*plVar42 + 0xf0) == TIntermTyped::getType) {
          plVar42 = plVar42 + 4;
        }
        else {
          plVar42 = (long *)(**(code **)(*plVar42 + 0xf0))(plVar42);
        }
        if (*(code **)(*plVar42 + 0x60) == TType::getVectorSize) {
          uVar76 = *(byte *)((long)plVar42 + 9) & 0xf;
        }
        else {
          uVar76 = (**(code **)(*plVar42 + 0x60))();
        }
        cVar31 = '\0';
        uVar35 = uVar35 * uVar76;
        goto LAB_0010510b;
      }
switchD_00105491_caseD_a1:
      pTVar49 = param_1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (TIntermTyped *)pTVar49;
  }
LAB_00106f34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00106de0:
  iVar65 = iVar65 + 1;
  lVar75 = lVar75 + 0x10;
  local_68 = auVar12;
  local_58 = auVar23;
  if (iVar40 == iVar65) goto LAB_001064e0;
  goto LAB_0010664b;
}



/* glslang::TIntermediate::foldDereference(glslang::TIntermTyped*, int, glslang::TSourceLoc const&)
    */

TIntermTyped * __thiscall
glslang::TIntermediate::foldDereference
          (TIntermediate *this,TIntermTyped *param_1,int param_2,TSourceLoc *param_3)

{
  int *piVar1;
  TType *this_00;
  long *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  TIntermTyped *pTVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  TSourceLoc *local_120;
  undefined **local_e8;
  ulong *local_e0;
  TType local_d8 [8];
  undefined4 local_d0;
  long local_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long local_68;
  long lStack_60;
  undefined4 local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
    pTVar12 = param_1 + 0x20;
  }
  else {
    pTVar12 = (TIntermTyped *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
  }
  TType::TType(local_d8,(TType *)pTVar12,param_2,false);
  bStack_c0 = bStack_c0 & 0x80 | 2;
  if ((local_d0 & 0xff) - 0xf < 2) {
    uVar18 = 0;
    puVar16 = *(undefined8 **)(local_70 + 8);
    if (*(undefined8 **)(local_70 + 0x10) != puVar16) {
      do {
        this_00 = (TType *)*puVar16;
        puVar16 = puVar16 + 4;
        iVar4 = TType::computeNumComponents(this_00);
        uVar18 = uVar18 + iVar4;
      } while (*(undefined8 **)(local_70 + 0x10) != puVar16);
    }
  }
  else if (local_d0._1_1_ < 0x10) {
    uVar18 = local_d0._1_1_ & 0xf;
  }
  else {
    uVar18 = (uint)(local_d0._1_1_ >> 4) * (local_d0 >> 0x10 & 0xf);
  }
  if ((local_78 != 0) && (lVar6 = *(long *)(local_78 + 8), lVar6 != 0)) {
    piVar13 = *(int **)(lVar6 + 8);
    iVar4 = (int)(*(long *)(lVar6 + 0x10) - (long)piVar13 >> 4);
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    else {
      piVar1 = piVar13 + (ulong)(iVar4 - 1) * 4 + 4;
      iVar4 = 1;
      do {
        iVar4 = iVar4 * *piVar13;
        piVar13 = piVar13 + 4;
      } while (piVar1 != piVar13);
    }
    uVar18 = uVar18 * iVar4;
  }
  lVar6 = *(long *)param_1;
  if (*(code **)(lVar6 + 0xf0) == TIntermTyped::getType) {
    if ((((byte)param_1[0x2a] & 0x20) == 0) && (((byte)param_1[0x2a] & 0x40) == 0)) {
LAB_001072c9:
      if (*(code **)(lVar6 + 0x150) == TIntermTyped::isArray) {
        if (*(long *)(param_1 + 0x80) == 0) {
LAB_001072ef:
          if (*(code **)(lVar6 + 0x168) == TIntermTyped::isStruct) {
            if ((byte)((char)param_1[0x28] - 0xfU) < 2) {
LAB_00107318:
              iVar4 = 0;
              if (0 < param_2) {
                iVar4 = 0;
                local_120 = (TSourceLoc *)0x0;
                do {
                  pTVar12 = param_1 + 0x20;
                  if (*(code **)(lVar6 + 0xf0) != TIntermTyped::getType) {
                    pTVar12 = (TIntermTyped *)(**(code **)(lVar6 + 0xf0))(param_1);
                  }
                  plVar2 = *(long **)(*(long *)(*(long *)(pTVar12 + 0x68) + 8) + (long)local_120);
                  if (*(code **)(*plVar2 + 0x38) == TType::getBasicType) {
                    uVar5 = (uint)*(byte *)(plVar2 + 1);
                    if (*(byte *)(plVar2 + 1) == 0xf) goto LAB_00107510;
LAB_00107393:
                    if (uVar5 == 0x10) goto LAB_00107510;
                    if (*(byte *)((long)plVar2 + 9) < 0x10) {
                      uVar14 = *(byte *)((long)plVar2 + 9) & 0xf;
                    }
                    else {
                      uVar14 = (uint)(*(byte *)((long)plVar2 + 9) >> 4) *
                               (*(byte *)((long)plVar2 + 10) & 0xf);
                    }
                  }
                  else {
                    iVar15 = (**(code **)(*plVar2 + 0x38))(plVar2);
                    if (iVar15 != 0xf) {
                      if (*(code **)(*plVar2 + 0x38) == TType::getBasicType) {
                        uVar5 = (uint)*(byte *)(plVar2 + 1);
                      }
                      else {
                        uVar5 = (**(code **)(*plVar2 + 0x38))(plVar2);
                      }
                      goto LAB_00107393;
                    }
LAB_00107510:
                    uVar14 = 0;
                    puVar16 = *(undefined8 **)(plVar2[0xd] + 8);
                    uVar5 = 0;
                    if (puVar16 != *(undefined8 **)(plVar2[0xd] + 0x10)) {
                      do {
                        iVar15 = TType::computeNumComponents((TType *)*puVar16);
                        uVar14 = uVar5 + iVar15;
                        puVar16 = puVar16 + 4;
                        uVar5 = uVar14;
                      } while (*(undefined8 **)(plVar2[0xd] + 0x10) != puVar16);
                    }
                  }
                  if ((plVar2[0xc] != 0) && (lVar6 = *(long *)(plVar2[0xc] + 8), lVar6 != 0)) {
                    piVar13 = *(int **)(lVar6 + 8);
                    iVar15 = (int)(*(long *)(lVar6 + 0x10) - (long)piVar13 >> 4);
                    if (iVar15 < 1) {
                      iVar15 = 1;
                    }
                    else {
                      piVar1 = piVar13 + (ulong)(iVar15 - 1) * 4 + 4;
                      iVar15 = 1;
                      do {
                        iVar15 = iVar15 * *piVar13;
                        piVar13 = piVar13 + 4;
                      } while (piVar13 != piVar1);
                    }
                    uVar14 = uVar14 * iVar15;
                  }
                  local_120 = (TSourceLoc *)((long)local_120 + 0x20);
                  iVar4 = iVar4 + uVar14;
                  lVar6 = *(long *)param_1;
                } while (local_120 != (TSourceLoc *)((long)param_2 << 5));
              }
              goto LAB_00107430;
            }
          }
          else {
            cVar3 = (**(code **)(lVar6 + 0x168))(param_1);
            lVar6 = *(long *)param_1;
            if (cVar3 != '\0') goto LAB_00107318;
          }
        }
      }
      else {
        cVar3 = (**(code **)(lVar6 + 0x150))(param_1);
        lVar6 = *(long *)param_1;
        if (cVar3 == '\0') goto LAB_001072ef;
      }
      iVar4 = param_2 * uVar18;
      goto LAB_00107430;
    }
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    lVar17 = (**(code **)(lVar6 + 0xf0))(param_1);
    lVar6 = *(long *)param_1;
    if (((*(byte *)(lVar17 + 10) & 0x20) == 0) && ((*(byte *)(lVar17 + 10) & 0x40) == 0))
    goto LAB_001072c9;
LAB_00107430:
    if (*(code **)(lVar6 + 0xf0) != TIntermTyped::getType) {
      local_120 = (TSourceLoc *)(**(code **)(lVar6 + 0xf0))(param_1);
      lVar6 = *(long *)param_1;
      goto LAB_001070ae;
    }
  }
  local_120 = (TSourceLoc *)(param_1 + 0x20);
LAB_001070ae:
  uVar19 = (ulong)(int)uVar18;
  lVar6 = (**(code **)(lVar6 + 0x28))(param_1);
  local_e8 = &PTR__TConstUnionArray_0010ea68;
  uVar7 = glslang::GetThreadPoolAllocator();
  puVar8 = (ulong *)glslang::TPoolAllocator::allocate(uVar7);
  uVar7 = glslang::GetThreadPoolAllocator();
  if (uVar19 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  *puVar8 = uVar7;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  if (uVar19 == 0) {
    puVar8[3] = 0;
  }
  else {
    puVar9 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar7);
    puVar8[1] = (ulong)puVar9;
    puVar8[3] = (ulong)(puVar9 + uVar19 * 4);
    puVar10 = puVar9;
    do {
      *puVar10 = 0;
      puVar11 = puVar10 + 4;
      puVar10[2] = 8;
      puVar10 = puVar11;
    } while (puVar11 != puVar9 + uVar19 * 4);
    puVar8[2] = (ulong)puVar11;
    lVar17 = (long)iVar4 * 0x10 + *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    lVar6 = 0;
    do {
      *(undefined8 *)((long)puVar9 + lVar6) = *(undefined8 *)(lVar17 + lVar6);
      *(undefined4 *)((long)puVar9 + lVar6 + 8) = *(undefined4 *)(lVar17 + 8 + lVar6);
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != (ulong)uVar18 << 4);
  }
  local_e0 = puVar8;
  pTVar12 = (TIntermTyped *)
            glslang::TIntermediate::addConstantUnion
                      ((TConstUnionArray *)this,(TType *)&local_e8,local_120,SUB81(param_3,0));
  if (pTVar12 != (TIntermTyped *)0x0) {
    param_1 = pTVar12;
    if (*(code **)(*(long *)pTVar12 + 0xe8) == TIntermTyped::setType) {
      *(long *)(pTVar12 + 0x30) = local_c8;
      *(long *)(pTVar12 + 0x38) = CONCAT71(uStack_bf,bStack_c0);
      *(undefined4 *)(pTVar12 + 0xa0) = local_58;
      *(long *)(pTVar12 + 0x40) = local_b8;
      *(long *)(pTVar12 + 0x48) = lStack_b0;
      *(long *)(pTVar12 + 0x50) = local_a8;
      *(long *)(pTVar12 + 0x58) = lStack_a0;
      *(long *)(pTVar12 + 0x60) = local_98;
      *(long *)(pTVar12 + 0x68) = lStack_90;
      *(uint *)(pTVar12 + 0x28) = *(uint *)(pTVar12 + 0x28) & 0xffe00000 | local_d0 & 0x1fffff;
      *(long *)(pTVar12 + 0x70) = local_88;
      *(long *)(pTVar12 + 0x78) = lStack_80;
      *(long *)(pTVar12 + 0x80) = local_78;
      *(long *)(pTVar12 + 0x90) = local_68;
      *(long *)(pTVar12 + 0x98) = lStack_60;
      *(long *)(pTVar12 + 0x88) = local_70;
      *(long *)(pTVar12 + 0xa8) = local_50;
      *(long *)(pTVar12 + 0xb0) = lStack_48;
      *(ushort *)(pTVar12 + 0x2a) = *(ushort *)(pTVar12 + 0x2a) & 0xf81f | local_d0._2_2_ & 0x7e0;
    }
    else {
      (**(code **)(*(long *)pTVar12 + 0xe8))(pTVar12,local_d8);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* glslang::TIntermediate::foldSwizzle(glslang::TIntermTyped*, glslang::TSwizzleSelectors<int>&,
   glslang::TSourceLoc const&) */

TIntermTyped * __thiscall
glslang::TIntermediate::foldSwizzle
          (TIntermediate *this,TIntermTyped *param_1,TSwizzleSelectors *param_2,TSourceLoc *param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  TIntermTyped TVar4;
  uint uVar5;
  long lVar6;
  TIntermTyped *pTVar7;
  ulong *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  TSourceLoc *pTVar13;
  ulong uVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined **local_e8;
  ulong *local_e0;
  undefined **local_d8;
  uint local_d0;
  undefined8 local_c8;
  ulong uStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint5 uStack_a0;
  undefined3 uStack_9b;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined2 uStack_80;
  uint6 uStack_7e;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  uint local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
  iVar1 = *(int *)param_2;
  local_e8 = &PTR__TConstUnionArray_0010ea68;
  if (iVar1 == 0) {
    local_e0 = (ulong *)0x0;
  }
  else {
    uVar14 = glslang::GetThreadPoolAllocator();
    puVar8 = (ulong *)glslang::TPoolAllocator::allocate(uVar14);
    uVar14 = glslang::GetThreadPoolAllocator();
    if ((ulong)(long)iVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    *puVar8 = uVar14;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar9 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar14);
    puVar8[1] = (ulong)puVar9;
    puVar8[3] = (ulong)(puVar9 + (long)iVar1 * 4);
    puVar10 = puVar9;
    do {
      *puVar10 = 0;
      puVar11 = puVar10 + 4;
      puVar10[2] = 8;
      puVar10 = puVar11;
    } while (puVar11 != puVar9 + (long)iVar1 * 4);
    iVar1 = *(int *)param_2;
    puVar8[2] = (ulong)puVar11;
    local_e0 = puVar8;
    if (0 < iVar1) {
      lVar15 = 0;
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      do {
        puVar12 = (undefined8 *)((long)*(int *)(param_2 + lVar15 + 4) * 0x10 + lVar6);
        *(undefined8 *)(puVar9 + lVar15) = *puVar12;
        puVar9[lVar15 + 2] = *(undefined4 *)(puVar12 + 1);
        lVar15 = lVar15 + 4;
      } while (lVar15 != (long)iVar1 * 4);
    }
  }
  if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
    pTVar13 = (TSourceLoc *)(param_1 + 0x20);
  }
  else {
    pTVar13 = (TSourceLoc *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
  }
  pTVar7 = (TIntermTyped *)
           glslang::TIntermediate::addConstantUnion
                     ((TConstUnionArray *)this,(TType *)&local_e8,pTVar13,SUB81(param_3,0));
  if (pTVar7 != (TIntermTyped *)0x0) {
    uVar5 = *(uint *)param_2;
    pcVar2 = *(code **)(*(long *)pTVar7 + 0xe8);
    if (*(code **)(*(long *)param_1 + 0x100) == TIntermTyped::getBasicType) {
      TVar4 = param_1[0x28];
    }
    else {
      TVar4 = (TIntermTyped)(**(code **)(*(long *)param_1 + 0x100))(param_1);
    }
    uVar3 = local_b8;
    local_d0 = CONCAT31(local_d0._1_3_,TVar4);
    local_d8 = &PTR__TType_0010e880;
    local_b8 = local_b8 & 0xfffffff0;
    uVar5 = (uVar5 & 0xf) << 8;
    uStack_94 = 0xfffff800;
    uStack_90 = 0;
    local_d0 = local_d0 & 0xf80000ff | uVar5;
    local_98 = local_98 & 0xffffff00;
    uStack_80 = 0;
    uStack_ac._1_3_ = (uint3)((uint)uStack_ac >> 8) & 0xffc070 | 0x1f8f;
    local_58 = local_58 & 0x9fc00000;
    local_c8 = 0;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0xffffffff;
    uStack_8c = 0xffffffff;
    uStack_9b = 0;
    uVar14 = (ulong)CONCAT43(0xffff,uStack_ac._1_3_) & 0xffffffff8f | 0xffffff0000000040;
    local_50 = (undefined1  [16])0x0;
    uStack_ac._1_3_ = (uint3)uVar14;
    uStack_ac = CONCAT31(uStack_ac._1_3_,0xff);
    uStack_a8 = (undefined4)(uVar14 >> 0x18);
    uVar14 = (ulong)(CONCAT43((int)uStack_a0,uStack_a4._1_3_) & 0xfe07ff00ffffff) | 0x1ffffff7fffff;
    uStack_a4._1_3_ = (undefined3)uVar14;
    uStack_a4 = CONCAT31(uStack_a4._1_3_,0xff);
    uStack_a0 = (uint5)(uVar14 >> 0x18);
    uStack_c0 = uStack_c0 & 0x8000000400000000 | 2;
    local_78 = (undefined1  [16])0x0;
    local_88 = 0;
    local_68 = (undefined1  [16])0x0;
    param_1 = pTVar7;
    if (pcVar2 == TIntermTyped::setType) {
      pTVar7[0x28] = TVar4;
      *(long *)(pTVar7 + 0x30) = 0;
      *(ulong *)(pTVar7 + 0x38) = uStack_c0;
      *(uint *)(pTVar7 + 0xa0) = local_58;
      *(ulong *)(pTVar7 + 0x40) = CONCAT44(0xffffffff,uVar3) & 0xfffffffffffffff0;
      *(long *)(pTVar7 + 0x48) = CONCAT44(uStack_ac,0xffffffff);
      *(long *)(pTVar7 + 0x50) = CONCAT44(uStack_a4,uStack_a8);
      *(ulong *)(pTVar7 + 0x58) = (ulong)uStack_a0;
      *(long *)(pTVar7 + 0x60) = CONCAT44(0xfffff800,local_98);
      *(long *)(pTVar7 + 0x68) = -0x100000000;
      *(uint *)(pTVar7 + 0x28) = uVar5 | *(uint *)(pTVar7 + 0x28) & 0xffe000ff;
      *(ushort *)(pTVar7 + 0x2a) = *(ushort *)(pTVar7 + 0x2a) & 0xf81f;
      *(long *)(pTVar7 + 0x80) = 0;
      *(long *)(pTVar7 + 0x88) = 0;
      *(undefined1 (*) [16])(pTVar7 + 0x90) = (undefined1  [16])0x0;
      *(long *)(pTVar7 + 0x70) = 0;
      *(ulong *)(pTVar7 + 0x78) = (ulong)uStack_7e << 0x10;
      *(undefined1 (*) [16])(pTVar7 + 0xa8) = (undefined1  [16])0x0;
    }
    else {
      (*pcVar2)(pTVar7,&local_d8);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = (long)param_2 - (long)param_1;
  if (0 < lVar2 >> 7) {
    puVar3 = param_1 + (lVar2 >> 7) * 0x10;
    do {
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (*param_1);
      if (bVar1) {
        return param_1;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[4]);
      if (bVar1) {
        return param_1 + 4;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[8]);
      if (bVar1) {
        return param_1 + 8;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[0xc]);
      if (bVar1) {
        return param_1 + 0xc;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar3);
    lVar2 = (long)param_2 - (long)param_1;
  }
  lVar2 = lVar2 >> 5;
  if (lVar2 != 2) {
    if (lVar2 != 3) {
      if (lVar2 != 1) {
        return param_2;
      }
      goto LAB_00107aa1;
    }
    bVar1 = glslang::TType::
            contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar1) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar1) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_00107aa1:
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar1) {
    return param_2;
  }
  return param_1;
}



/* glslang::TSmallArrayVector::~TSmallArrayVector() */

void __thiscall glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this)

{
  return;
}



/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
  return;
}



/* glslang::TType::hideMember() */

void __thiscall glslang::TType::hideMember(TType *this)

{
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xf000 | 0x100;
  return;
}



/* glslang::TType::hiddenMember() const */

bool __thiscall glslang::TType::hiddenMember(TType *this)

{
  return this[8] == (TType)0x0;
}



/* glslang::TType::getTypeName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getTypeName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x78);
}



/* glslang::TType::getFieldName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getFieldName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x70);
}



/* glslang::TType::getBasicType() const */

TType __thiscall glslang::TType::getBasicType(TType *this)

{
  return this[8];
}



/* glslang::TType::getSampler() const */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getSampler() */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getQualifier() */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getQualifier() const */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getVectorSize() const */

byte __thiscall glslang::TType::getVectorSize(TType *this)

{
  return (byte)this[9] & 0xf;
}



/* glslang::TType::getMatrixCols() const */

byte __thiscall glslang::TType::getMatrixCols(TType *this)

{
  return (byte)this[9] >> 4;
}



/* glslang::TType::getMatrixRows() const */

byte __thiscall glslang::TType::getMatrixRows(TType *this)

{
  return (byte)this[10] & 0xf;
}



/* glslang::TType::getOuterArraySize() const */

undefined4 __thiscall glslang::TType::getOuterArraySize(TType *this)

{
  return **(undefined4 **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
}



/* glslang::TType::getOuterArrayNode() const */

undefined8 __thiscall glslang::TType::getOuterArrayNode(TType *this)

{
  return *(undefined8 *)(*(long *)(*(long *)(*(long *)(this + 0x60) + 8) + 8) + 8);
}



/* glslang::TType::getImplicitArraySize() const */

int __thiscall glslang::TType::getImplicitArraySize(TType *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



/* glslang::TType::getArraySizes() const */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getArraySizes() */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getReferentType() const */

undefined8 __thiscall glslang::TType::getReferentType(TType *this)

{
  return *(undefined8 *)(this + 0x68);
}



/* glslang::TType::getTypeParameters() const */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::getTypeParameters() */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::isVector() const */

byte __thiscall glslang::TType::isVector(TType *this)

{
  if (1 < ((byte)this[9] & 0xf)) {
    return 1;
  }
  return (byte)this[10] >> 4 & 1;
}



/* glslang::TType::isMatrix() const */

bool __thiscall glslang::TType::isMatrix(TType *this)

{
  return 0xf < (byte)this[9];
}



/* glslang::TType::isArray() const */

bool __thiscall glslang::TType::isArray(TType *this)

{
  return *(long *)(this + 0x60) != 0;
}



/* glslang::TType::isArrayVariablyIndexed() const */

undefined1 __thiscall glslang::TType::isArrayVariablyIndexed(TType *this)

{
  return *(undefined1 *)(*(long *)(this + 0x60) + 0x15);
}



/* glslang::TType::setArrayVariablyIndexed() */

void __thiscall glslang::TType::setArrayVariablyIndexed(TType *this)

{
  *(undefined1 *)(*(long *)(this + 0x60) + 0x15) = 1;
  return;
}



/* glslang::TType::updateImplicitArraySize(int) */

void __thiscall glslang::TType::updateImplicitArraySize(TType *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < param_1) {
    iVar1 = param_1;
  }
  *(int *)(*(long *)(this + 0x60) + 0x10) = iVar1;
  return;
}



/* glslang::TType::setImplicitlySized(bool) */

void __thiscall glslang::TType::setImplicitlySized(TType *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0x60) + 0x14) = param_1;
  return;
}



/* glslang::TType::isStruct() const */

undefined4 __thiscall glslang::TType::isStruct(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 0xf >> 8),(byte)((byte)this[8] - 0xf) < 2);
}



/* glslang::TType::isFloatingDomain() const */

undefined4 __thiscall glslang::TType::isFloatingDomain(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 1 >> 8),(byte)((byte)this[8] - 1) < 3);
}



/* glslang::TType::isIntegerDomain() const */

bool __thiscall glslang::TType::isIntegerDomain(TType *this)

{
  TType TVar1;
  
  TVar1 = this[8];
  if ((byte)TVar1 < 0xc) {
    return 3 < (byte)TVar1;
  }
  return TVar1 == (TType)0xd;
}



/* glslang::TType::isOpaque() const */

undefined8 __thiscall glslang::TType::isOpaque(TType *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((byte)this[8] < 0x15) {
    uVar1 = CONCAT71(0x1a60,(0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0);
  }
  return uVar1;
}



/* glslang::TType::isParameterized() const */

bool __thiscall glslang::TType::isParameterized(TType *this)

{
  return *(long *)(this + 0x88) != 0;
}



/* glslang::TConstUnionArray::~TConstUnionArray() */

void __thiscall glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this)

{
  return;
}



/* TIntermNode::getLoc() const */

TIntermNode * __thiscall TIntermNode::getLoc(TIntermNode *this)

{
  return this + 8;
}



/* TIntermNode::setLoc(glslang::TSourceLoc const&) */

void __thiscall TIntermNode::setLoc(TIntermNode *this,TSourceLoc *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* glslang::TIntermTyped::getType() const */

TIntermTyped * __thiscall glslang::TIntermTyped::getType(TIntermTyped *this)

{
  return this + 0x20;
}



/* glslang::TIntermTyped::getBasicType() const */

TIntermTyped __thiscall glslang::TIntermTyped::getBasicType(TIntermTyped *this)

{
  return this[0x28];
}



/* glslang::TIntermTyped::getVectorSize() const */

byte __thiscall glslang::TIntermTyped::getVectorSize(TIntermTyped *this)

{
  return (byte)this[0x29] & 0xf;
}



/* glslang::TIntermTyped::getMatrixCols() const */

byte __thiscall glslang::TIntermTyped::getMatrixCols(TIntermTyped *this)

{
  return (byte)this[0x29] >> 4;
}



/* glslang::TIntermTyped::getMatrixRows() const */

byte __thiscall glslang::TIntermTyped::getMatrixRows(TIntermTyped *this)

{
  return (byte)this[0x2a] & 0xf;
}



/* glslang::TIntermTyped::isArray() const */

bool __thiscall glslang::TIntermTyped::isArray(TIntermTyped *this)

{
  return *(long *)(this + 0x80) != 0;
}



/* glslang::TIntermTyped::isStruct() const */

undefined4 __thiscall glslang::TIntermTyped::isStruct(TIntermTyped *this)

{
  return CONCAT31((int3)((byte)this[0x28] - 0xf >> 8),(byte)((byte)this[0x28] - 0xf) < 2);
}



/* glslang::TIntermTyped::isFloatingDomain() const */

undefined4 __thiscall glslang::TIntermTyped::isFloatingDomain(TIntermTyped *this)

{
  return CONCAT31((int3)((byte)this[0x28] - 1 >> 8),(byte)((byte)this[0x28] - 1) < 3);
}



/* glslang::TIntermAggregate::getSequence() */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::setFieldName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall glslang::TType::setFieldName(TType *this,basic_string *param_1)

{
  char *__s;
  ulong uVar1;
  ulong *puVar2;
  size_t __n;
  ulong *__dest;
  
  __s = *(char **)(param_1 + 8);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  __dest = puVar2 + 3;
  *puVar2 = uVar1;
  puVar2[1] = (ulong)__dest;
  if (__s == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(__s);
  if (__n < 0x10) {
    if (__n == 1) {
      *(char *)(puVar2 + 3) = *__s;
      goto LAB_00107f42;
    }
    if (__n == 0) goto LAB_00107f42;
  }
  else {
    __dest = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
    puVar2[3] = __n;
    puVar2[1] = (ulong)__dest;
  }
  memcpy(__dest,__s,__n);
  __dest = (ulong *)puVar2[1];
LAB_00107f42:
  puVar2[2] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  *(ulong **)(this + 0x70) = puVar2;
  return;
}



/* glslang::TType::isBuiltIn() const */

bool __thiscall glslang::TType::isBuiltIn(TType *this)

{
  long lVar1;
  
  if (*(code **)(*(long *)this + 0x58) == getQualifier) {
    return 0x7f < *(ushort *)(this + 0x18);
  }
  lVar1 = (**(code **)(*(long *)this + 0x58))();
  return 0x7f < *(ushort *)(lVar1 + 8);
}



/* glslang::TType::isAttachmentEXT() const */

bool __thiscall glslang::TType::isAttachmentEXT(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x8;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\b';
}



/* glslang::TType::isImage() const */

undefined4 __thiscall glslang::TType::isImage(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar3 = (**(code **)(*(long *)this + 0x40))();
      uVar2 = 0;
      if ((*(byte *)(lVar3 + 2) & 8) != 0) {
        iVar1 = *(byte *)(lVar3 + 1) - 7;
        uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1 < (byte)iVar1);
      }
      return uVar2;
    }
    if (((byte)this[0x82] & 8) != 0) {
      return CONCAT31((int3)((byte)this[0x81] - 7 >> 8),1 < (byte)((byte)this[0x81] - 7));
    }
  }
  return 0;
}



/* glslang::TType::isSubpass() const */

bool __thiscall glslang::TType::isSubpass(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x7;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\a';
}



/* glslang::TType::isTexture() const */

byte __thiscall glslang::TType::isTexture(TType *this)

{
  byte bVar1;
  long lVar2;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar2 = (**(code **)(*(long *)this + 0x40))();
      if ((*(byte *)(lVar2 + 2) & 0x20) == 0) {
        bVar1 = *(byte *)(lVar2 + 2) >> 3 & 1 ^ 1;
      }
      else {
        bVar1 = 0;
      }
      return bVar1;
    }
    if (((byte)this[0x82] & 0x20) == 0) {
      return (byte)this[0x82] >> 3 & 1 ^ 1;
    }
  }
  return 0;
}



/* glslang::TType::isImplicitlySizedArray() const */

undefined1 __thiscall glslang::TType::isImplicitlySizedArray(TType *this)

{
  undefined1 uVar1;
  char cVar2;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar2 == '\0') {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  return uVar1;
}



/* glslang::TType::isSizedArray() const */

undefined4 __thiscall glslang::TType::isSizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2;
}



/* glslang::TType::isUnsizedArray() const */

undefined4 __thiscall glslang::TType::isUnsizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  return uVar2;
}



/* glslang::TType::isScalar() const */

uint __thiscall glslang::TType::isScalar(TType *this)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  
  if (*(code **)(*(long *)this + 0xd8) == isVector) {
    if (1 < ((byte)this[9] & 0xf)) {
      return 0;
    }
    bVar1 = (byte)this[10] >> 4 & 1;
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0xd8))();
  }
  if (bVar1 == 0) {
    lVar4 = *(long *)this;
    if (*(code **)(lVar4 + 0xe0) == isMatrix) {
      if (0xf < (byte)this[9]) {
        return 0;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe0))(this);
      if (cVar2 != '\0') {
        return 0;
      }
      lVar4 = *(long *)this;
    }
    if (*(code **)(lVar4 + 0x128) == isStruct) {
      if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_00108321:
        if (*(code **)(lVar4 + 0xe8) == isArray) {
          uVar3 = (uint)CONCAT71(0x107c,*(long *)(this + 0x60) != 0);
        }
        else {
          uVar3 = (**(code **)(lVar4 + 0xe8))(this);
        }
        return uVar3 ^ 1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(this);
      if (cVar2 == '\0') {
        lVar4 = *(long *)this;
        goto LAB_00108321;
      }
    }
  }
  return 0;
}



/* glslang::TType::isScalarOrVector() const */

uint __thiscall glslang::TType::isScalarOrVector(TType *this)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (*(code **)(lVar3 + 0xe0) == isMatrix) {
    if (0xf < (byte)this[9]) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0xe0))();
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0x128))(this);
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0xe8) == isArray) {
    uVar2 = (uint)CONCAT71(0x107c,*(long *)(this + 0x60) != 0);
  }
  else {
    uVar2 = (**(code **)(lVar3 + 0xe8))(this);
  }
  return uVar2 ^ 1;
}



/* glslang::TType::isUnusableName() const */

bool __thiscall glslang::TType::isUnusableName(TType *this)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if (1 < (byte)((char)this[8] - 0xfU)) {
      return false;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x128))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return *(long *)(this + 0x68) == 0;
}



/* glslang::TType::getCumulativeArraySize() const */

int __thiscall glslang::TType::getCumulativeArraySize(TType *this)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = *(long *)(*(long *)(this + 0x60) + 8);
  if (lVar2 != 0) {
    piVar3 = *(int **)(lVar2 + 8);
    iVar4 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar3 >> 4);
    if (0 < iVar4) {
      piVar1 = piVar3 + (ulong)(iVar4 - 1) * 4 + 4;
      iVar4 = 1;
      do {
        iVar4 = iVar4 * *piVar3;
        piVar3 = piVar3 + 4;
      } while (piVar3 != piVar1);
      return iVar4;
    }
  }
  return 1;
}



/* glslang::TType::isBindlessTexture() const */

TType __thiscall glslang::TType::isBindlessTexture(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x168);
  if (pcVar1 == isTexture) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 0x20) == 0) && (((byte)pTVar3[2] & 8) == 0)) {
        return this[0x58];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x58];
    }
  }
  return (TType)0x0;
}



/* glslang::TType::isBindlessImage() const */

TType __thiscall glslang::TType::isBindlessImage(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x158);
  if (pcVar1 == isImage) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 8) != 0) && (1 < (byte)((char)pTVar3[1] - 7U))) {
        return this[0x59];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x59];
    }
  }
  return (TType)0x0;
}



/* glslang::TType::isScalarOrVec1() const */

byte __thiscall glslang::TType::isScalarOrVec1(TType *this)

{
  TType TVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  
  pcVar2 = *(code **)(*(long *)this + 0xc0);
  if (pcVar2 == isScalar) {
    pcVar2 = *(code **)(*(long *)this + 0xd8);
    if (pcVar2 == isVector) {
      TVar1 = this[10];
      bVar3 = (byte)TVar1 >> 4 & 1;
      if (1 < ((byte)this[9] & 0xf)) goto LAB_00108633;
    }
    else {
      bVar3 = (*pcVar2)();
    }
    if (bVar3 == 0) {
      lVar5 = *(long *)this;
      if (*(code **)(lVar5 + 0xe0) == isMatrix) {
        if ((byte)this[9] < 0x10) {
LAB_0010865c:
          if (*(code **)(lVar5 + 0x128) == isStruct) {
            if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_0010867b:
              if (*(code **)(lVar5 + 0xe8) == isArray) {
                if (*(long *)(this + 0x60) == 0) {
                  return 1;
                }
              }
              else {
                cVar4 = (**(code **)(lVar5 + 0xe8))(this);
                if (cVar4 == '\0') {
                  return 1;
                }
              }
            }
          }
          else {
            cVar4 = (**(code **)(lVar5 + 0x128))(this);
            if (cVar4 == '\0') {
              lVar5 = *(long *)this;
              goto LAB_0010867b;
            }
          }
        }
      }
      else {
        cVar4 = (**(code **)(lVar5 + 0xe0))(this);
        if (cVar4 == '\0') {
          lVar5 = *(long *)this;
          goto LAB_0010865c;
        }
      }
    }
  }
  else {
    cVar4 = (*pcVar2)();
    if (cVar4 != '\0') {
      return 1;
    }
  }
  TVar1 = this[10];
LAB_00108633:
  return (byte)TVar1 >> 4 & 1;
}



/* glslang::TIntermTyped::setType(glslang::TType const&) */

void __thiscall glslang::TIntermTyped::setType(TIntermTyped *this,TType *param_1)

{
  TType TVar1;
  TIntermTyped TVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  *(TType *)(this + 0x28) = param_1[8];
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0xa0) = uVar3;
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x48) = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x58) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x68) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x78) = uVar4;
  TVar1 = param_1[9];
  this[0x29] = (TIntermTyped)((byte)this[0x29] & 0xf0 | (byte)TVar1 & 0xf);
  this[0x29] = (TIntermTyped)((byte)TVar1 & 0xf | (byte)param_1[9] & 0xf0);
  TVar2 = this[0x2a];
  bVar7 = (byte)param_1[10] & 0xf;
  this[0x2a] = (TIntermTyped)((byte)TVar2 & 0xf0 | bVar7);
  bVar8 = (byte)param_1[10] & 0x10;
  this[0x2a] = (TIntermTyped)((byte)TVar2 & 0xe0 | bVar7 | bVar8);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x90) = uVar5;
  *(undefined8 *)(this + 0x98) = uVar6;
  *(undefined8 *)(this + 0x88) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0xb0) = uVar4;
  TVar1 = param_1[10];
  this[0x2a] = (TIntermTyped)((byte)TVar2 & 0xc0 | bVar7 | bVar8 | (byte)TVar1 & 0x20);
  this[0x2a] = (TIntermTyped)
               ((byte)TVar2 & 0x80 | bVar7 | bVar8 | (byte)TVar1 & 0x20 | (byte)param_1[10] & 0x40);
  *(ushort *)(this + 0x2a) = *(ushort *)(this + 0x2a) & 0xfc7f | *(ushort *)(param_1 + 10) & 0x380;
  this[0x2b] = (TIntermTyped)((byte)this[0x2b] & 0xfb | (byte)param_1[0xb] & 4);
  return;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar2 = (long *)*param_1;
      bVar1 = *(byte *)(plVar2 + 1);
      if (bVar1 < 0xd) {
        return param_1;
      }
      if (bVar1 == 0x12) {
        return param_1;
      }
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0010899d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0010899d;
      }
      plVar2 = (long *)param_1[4];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0010889f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_001089dd:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010889f:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_001089dd;
      }
      plVar2 = (long *)param_1[8];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_001088df;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00108a0d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_001088df:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00108a0d;
      }
      plVar2 = (long *)param_1[0xc];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0010891f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00108a3d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010891f:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00108a3d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_00108ad9;
    }
    plVar6 = (long *)*param_1;
    bVar1 = *(byte *)(plVar6 + 1);
    if (bVar1 < 0xd) {
      return param_1;
    }
    if (bVar1 == 0x12) {
      return param_1;
    }
    if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
      if ((byte)(bVar1 - 0xf) < 2) {
LAB_00108b7b:
        lVar5 = *(long *)(plVar6[0xd] + 0x10);
        lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
        if (lVar5 != lVar4) {
          return param_1;
        }
      }
    }
    else {
      cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
      if (cVar3 != '\0') goto LAB_00108b7b;
    }
    param_1 = param_1 + 4;
  }
  plVar6 = (long *)*param_1;
  bVar1 = *(byte *)(plVar6 + 1);
  if (bVar1 < 0xd) {
    return param_1;
  }
  if (bVar1 == 0x12) {
    return param_1;
  }
  if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
    if ((byte)(bVar1 - 0xf) < 2) {
LAB_00108b3d:
      lVar5 = *(long *)(plVar6[0xd] + 0x10);
      lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
      if (lVar5 != lVar4) {
        return param_1;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
    if (cVar3 != '\0') goto LAB_00108b3d;
  }
  param_1 = param_1 + 4;
LAB_00108ad9:
  plVar6 = (long *)*param_1;
  bVar1 = *(byte *)(plVar6 + 1);
  if (bVar1 < 0xd) {
    return param_1;
  }
  if (bVar1 == 0x12) {
    return param_1;
  }
  if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)(bVar1 - 0xf)) {
      return param_2;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
    if (cVar3 == '\0') {
      return param_2;
    }
  }
  lVar5 = *(long *)(plVar6[0xd] + 0x10);
  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
  if (lVar5 == lVar4) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsNonOpaque() const */

ulong __thiscall glslang::TType::containsNonOpaque(TType *this)

{
  TType TVar1;
  long lVar2;
  char cVar3;
  undefined1 auVar4 [16];
  
  TVar1 = this[8];
  if (((byte)TVar1 < 0xd) || (TVar1 == (TType)0x12)) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)TVar1 - 0xfU) < 2) {
LAB_00108c00:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar4 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return CONCAT71(auVar4._9_7_,lVar2 != auVar4._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))();
    if (cVar3 != '\0') goto LAB_00108c00;
  }
  return 0;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      if (*(byte *)(plVar1 + 1) == param_3) {
        return param_1;
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00108d6d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00108d6d;
      }
      plVar1 = (long *)param_1[4];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00108dbc;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00108d9d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_00108dbc:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00108d9d;
      }
      plVar1 = (long *)param_1[8];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00108df4;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00108dd5:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_00108df4:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00108dd5;
      }
      plVar1 = (long *)param_1[0xc];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00108e2c;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00108e0d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_00108e2c:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00108e0d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_00108ece;
    }
    plVar5 = (long *)*param_1;
    if (*(byte *)(plVar5 + 1) == param_3) {
      return param_1;
    }
    if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
      if ((byte)(*(byte *)(plVar5 + 1) - 0xf) < 2) {
LAB_00108f72:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_00108f72;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  if (*(byte *)(plVar5 + 1) == param_3) {
    return param_1;
  }
  if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
    if ((byte)(*(byte *)(plVar5 + 1) - 0xf) < 2) {
LAB_00108f31:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_00108f31;
  }
  param_1 = param_1 + 4;
LAB_00108ece:
  plVar5 = (long *)*param_1;
  if (param_3 == *(byte *)(plVar5 + 1)) {
    return param_1;
  }
  if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)(*(byte *)(plVar5 + 1) - 0xf)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsBasicType(glslang::TBasicType) const */

ulong __thiscall glslang::TType::containsBasicType(TType *this,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  
  if ((byte)this[8] == param_2) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00108ff6:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar3 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,param_2);
      return CONCAT71(auVar3._9_7_,lVar1 != auVar3._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00108ff6;
  }
  return 0;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010926d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010926d;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_001091e3;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_001091e3;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001091c5:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001091e3:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001091c5;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0010921b;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010921b;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001091fd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0010921b:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001091fd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_00109253;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_00109253;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00109235:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00109253:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00109235;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_0010933e;
    }
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      if (plVar5[0xc] != 0) {
        return param_1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001094dc:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_001094dc;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    if (plVar5[0xc] != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00109483:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_00109483;
  }
  param_1 = param_1 + 4;
LAB_0010933e:
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    if (plVar5[0xc] != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsArray() const */

bool __thiscall glslang::TType::containsArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) != 0) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00109559:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00109559;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (0 < lVar6 >> 7) {
    plVar7 = param_1 + (lVar6 >> 7) * 0x10;
    do {
      plVar5 = (long *)*param_1;
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) {
          return param_1;
        }
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00109805:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_00109805;
      }
      plVar5 = (long *)param_1[4];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_0010978a;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 4;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010976d:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_0010978a:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0010976d;
      }
      plVar5 = (long *)param_1[8];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_001097ba;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 8;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010979d:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_001097ba:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0010979d;
      }
      plVar5 = (long *)param_1[0xc];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_001097ea;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 0xc;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001097cd:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_001097ea:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_001097cd;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar7);
    lVar6 = (long)param_2 - (long)param_1;
  }
  lVar6 = lVar6 >> 5;
  if (lVar6 != 2) {
    if (lVar6 != 3) {
      if (lVar6 != 1) {
        return param_2;
      }
      goto LAB_00109918;
    }
    plVar7 = (long *)*param_1;
    pcVar1 = *(code **)(*plVar7 + 0x148);
    if (pcVar1 == glslang::TType::isBuiltIn) {
      pcVar1 = *(code **)(*plVar7 + 0x58);
      if (pcVar1 == glslang::TType::getQualifier) {
        plVar5 = plVar7 + 2;
      }
      else {
        plVar5 = (long *)(*pcVar1)(plVar7);
      }
      if (0x7f < *(ushort *)(plVar5 + 1)) {
        return param_1;
      }
    }
    else {
      cVar2 = (*pcVar1)(plVar7);
      if (cVar2 != '\0') {
        return param_1;
      }
    }
    if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar7[1] - 0xfU) < 2) {
LAB_00109b16:
        lVar6 = *(long *)(plVar7[0xd] + 0x10);
        lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
        if (lVar6 != lVar4) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
      if (cVar2 != '\0') goto LAB_00109b16;
    }
    param_1 = param_1 + 4;
  }
  plVar7 = (long *)*param_1;
  pcVar1 = *(code **)(*plVar7 + 0x148);
  if (pcVar1 == glslang::TType::isBuiltIn) {
    pcVar1 = *(code **)(*plVar7 + 0x58);
    if (pcVar1 == glslang::TType::getQualifier) {
      plVar5 = plVar7 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)(plVar7);
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return param_1;
    }
  }
  else {
    cVar2 = (*pcVar1)(plVar7);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
  if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar7[1] - 0xfU) < 2) {
LAB_00109a9f:
      lVar6 = *(long *)(plVar7[0xd] + 0x10);
      lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
      if (lVar6 != lVar4) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
    if (cVar2 != '\0') goto LAB_00109a9f;
  }
  param_1 = param_1 + 4;
LAB_00109918:
  plVar7 = (long *)*param_1;
  pcVar1 = *(code **)(*plVar7 + 0x148);
  if (pcVar1 == glslang::TType::isBuiltIn) {
    pcVar1 = *(code **)(*plVar7 + 0x58);
    if (pcVar1 == glslang::TType::getQualifier) {
      plVar5 = plVar7 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)(plVar7);
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return param_1;
    }
  }
  else {
    cVar2 = (*pcVar1)(plVar7);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
  if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar7[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar6 = *(long *)(plVar7[0xd] + 0x10);
  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
  if (lVar6 == lVar4) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsBuiltIn() const */

bool __thiscall glslang::TType::containsBuiltIn(TType *this)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  TType *pTVar5;
  
  pcVar1 = *(code **)(*(long *)this + 0x148);
  if (pcVar1 == isBuiltIn) {
    pcVar1 = *(code **)(*(long *)this + 0x58);
    if (pcVar1 == getQualifier) {
      pTVar5 = this + 0x10;
    }
    else {
      pTVar5 = (TType *)(*pcVar1)();
    }
    if (0x7f < *(ushort *)(pTVar5 + 8)) {
      return true;
    }
  }
  else {
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      return true;
    }
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00109bb9:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar3 != '\0') goto LAB_00109bb9;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00109c58:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_00109c80;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00109c58;
        }
LAB_00109c80:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00109e9d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00109e9d;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00109cc4:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_00109cd3;
          goto LAB_00109ce0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00109cc4;
        }
LAB_00109ce0:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00109ecd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00109cd3:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00109ecd;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00109d24:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_00109d33;
          goto LAB_00109d40;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00109d24;
        }
LAB_00109d40:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00109efd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00109d33:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00109efd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00109d84:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_00109d93;
          goto LAB_00109da0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00109d84;
        }
LAB_00109da0:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00109f2d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00109d93:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00109f2d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 == 2) {
LAB_0010a02e:
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      lVar3 = plVar5[0xc];
      if (lVar3 != 0) {
LAB_0010a04e:
        if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
          return param_1;
        }
        goto LAB_0010a061;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 != '\0') {
        lVar3 = plVar5[0xc];
        goto LAB_0010a04e;
      }
LAB_0010a061:
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010a0a7:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_0010a0a7;
    }
    param_1 = param_1 + 4;
  }
  else {
    if (lVar4 == 3) {
      plVar5 = (long *)*param_1;
      lVar4 = *plVar5;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar5[0xc];
        if (lVar3 != 0) {
LAB_00109fed:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_0010a000;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
        if (cVar2 != '\0') {
          lVar3 = plVar5[0xc];
          goto LAB_00109fed;
        }
LAB_0010a000:
        lVar4 = *plVar5;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010a115:
          lVar4 = *(long *)(plVar5[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0010a115;
      }
      param_1 = param_1 + 4;
      goto LAB_0010a02e;
    }
    if (lVar4 != 1) {
      return param_2;
    }
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    lVar3 = plVar5[0xc];
    if (lVar3 == 0) goto LAB_00109e39;
LAB_00109e22:
    if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      lVar3 = plVar5[0xc];
      goto LAB_00109e22;
    }
  }
  lVar4 = *plVar5;
LAB_00109e39:
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsSpecializationSize() const */

bool __thiscall glslang::TType::containsSpecializationSize(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_0010a19a:
      if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
        return true;
      }
      goto LAB_0010a1ae;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar3 = *(long *)(this + 0x60);
      goto LAB_0010a19a;
    }
LAB_0010a1ae:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0010a1c1:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_0010a1c1;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a49d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a49d;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_0010a2c0;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a2c0;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a4cd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0010a2c0:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a4cd;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_0010a328;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a328;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a4fd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0010a328:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a4fd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_0010a390;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a390;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a52d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0010a390:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a52d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_0010a40d;
    }
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
      if ((*(byte *)(plVar5 + 1) < 0x15) &&
         ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
        return param_1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010a698:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_0010a698;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
    if ((*(byte *)(plVar5 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010a63f:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_0010a63f;
  }
  param_1 = param_1 + 4;
LAB_0010a40d:
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
    if ((*(byte *)(plVar5 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsOpaque() const */

bool __thiscall glslang::TType::containsOpaque(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x140) == isOpaque) {
    if (((byte)this[8] < 0x15) && ((0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0)) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x140))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0010a739:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_0010a739;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_0010a7db;
          }
          goto LAB_0010a809;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0010a7db:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_0010a809;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_0010a809:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010aa85:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010aa85;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_0010a858;
          }
          goto LAB_0010a881;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0010a858:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_0010a868;
          goto LAB_0010a881;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a868;
LAB_0010a881:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010aabd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0010a868:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010aabd;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_0010a8d0;
          }
          goto LAB_0010a8f9;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0010a8d0:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_0010a8de;
          goto LAB_0010a8f9;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a8de;
LAB_0010a8f9:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010aaed:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0010a8de:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010aaed;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_0010a948;
          }
          goto LAB_0010a969;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0010a948:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_0010a956;
          goto LAB_0010a969;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a956;
LAB_0010a969:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010ab1d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0010a956:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010ab1d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 == 2) {
LAB_0010ac37:
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
      if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
        if (cVar2 != '\0') {
          lVar3 = plVar5[0xc];
          goto LAB_0010ac6f;
        }
        goto LAB_0010ac81;
      }
      lVar3 = plVar5[0xc];
      if (lVar3 != 0) {
LAB_0010ac6f:
        if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
          return param_1;
        }
        goto LAB_0010ac81;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
LAB_0010ac81:
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010acc9:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_0010acc9;
    }
    param_1 = param_1 + 4;
  }
  else {
    if (lVar4 == 3) {
      plVar5 = (long *)*param_1;
      lVar4 = *plVar5;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
          if (cVar2 != '\0') {
            lVar3 = plVar5[0xc];
            goto LAB_0010abf5;
          }
          goto LAB_0010ac07;
        }
        lVar3 = plVar5[0xc];
        if (lVar3 != 0) {
LAB_0010abf5:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_0010ac07;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_0010ac07:
        lVar4 = *plVar5;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010ad5a:
          lVar4 = *(long *)(plVar5[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0010ad5a;
      }
      param_1 = param_1 + 4;
      goto LAB_0010ac37;
    }
    if (lVar4 != 1) {
      return param_2;
    }
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      lVar3 = plVar5[0xc];
      if (lVar3 == 0) goto LAB_0010aa1f;
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 == '\0') goto LAB_0010aa1b;
      lVar3 = plVar5[0xc];
    }
    if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
LAB_0010aa1b:
  lVar4 = *plVar5;
LAB_0010aa1f:
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsUnsizedArray() const */

bool __thiscall glslang::TType::containsUnsizedArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xf8) == isUnsizedArray) {
    if (*(code **)(lVar2 + 0xe8) != isArray) {
      cVar1 = (**(code **)(lVar2 + 0xe8))();
      if (cVar1 != '\0') {
        lVar3 = *(long *)(this + 0x60);
        goto LAB_0010ae0a;
      }
      goto LAB_0010ae26;
    }
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_0010ae0a:
      if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
        return true;
      }
      goto LAB_0010ae26;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xf8))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_0010ae26:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0010ae39:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_0010ae39;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0 < lVar7 >> 7) {
    plVar1 = param_1;
LAB_0010aea0:
    do {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar6;
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_0010aef0:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010af0d:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
              return plVar6;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010af0d;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') {
            return plVar6;
          }
          lVar5 = *plVar1;
          goto LAB_0010aef0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
          return plVar6;
        }
      }
      plVar1 = (long *)plVar6[4];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_0010af70:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010af8d:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
LAB_0010af56:
              return plVar6 + 4;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010af8d;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010af56;
          lVar5 = *plVar1;
          goto LAB_0010af70;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_0010af56;
      }
      plVar1 = (long *)plVar6[8];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_0010aff0:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010b00d:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
LAB_0010afd6:
              return plVar6 + 8;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010b00d;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010afd6;
          lVar5 = *plVar1;
          goto LAB_0010aff0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_0010afd6;
      }
      plVar1 = (long *)plVar6[0xc];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_0010b070:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if (1 < (byte)((char)plVar1[1] - 0xfU)) goto LAB_0010b0aa;
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 == '\0') {
            plVar1 = plVar6 + 0x10;
            if (plVar6 + 0x10 == param_1 + (lVar7 >> 7) * 0x10) break;
            goto LAB_0010aea0;
          }
        }
        lVar5 = *(long *)(plVar1[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
        if (lVar5 != lVar3) {
LAB_0010b056:
          return plVar6 + 0xc;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010b056;
          lVar5 = *plVar1;
          goto LAB_0010b070;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_0010b056;
      }
LAB_0010b0aa:
      plVar1 = plVar6 + 0x10;
    } while (plVar6 + 0x10 != param_1 + (lVar7 >> 7) * 0x10);
    param_1 = plVar6 + 0x10;
    lVar7 = (long)param_2 - (long)param_1;
  }
  lVar7 = lVar7 >> 5;
  if (lVar7 != 2) {
    if (lVar7 != 3) {
      if (lVar7 != 1) {
        return param_2;
      }
      goto LAB_0010b0e2;
    }
    plVar1 = (long *)*param_1;
    pcVar4 = *(code **)(*plVar1 + 0x128);
    if (param_3 == plVar1) {
LAB_0010b222:
      if (pcVar4 == glslang::TType::isStruct) {
        cVar2 = (char)plVar1[1];
        goto LAB_0010b1f9;
      }
      cVar2 = (*pcVar4)(plVar1);
      if (cVar2 != '\0') goto LAB_0010b2fb;
    }
    else {
      if (pcVar4 != glslang::TType::isStruct) {
        cVar2 = (*pcVar4)(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        pcVar4 = *(code **)(*plVar1 + 0x128);
        goto LAB_0010b222;
      }
      cVar2 = (char)plVar1[1];
      if ((byte)(cVar2 - 0xfU) < 2) {
        return param_1;
      }
LAB_0010b1f9:
      if ((byte)(cVar2 - 0xfU) < 2) {
LAB_0010b2fb:
        lVar7 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
        if (lVar7 != lVar5) {
          return param_1;
        }
      }
    }
    param_1 = param_1 + 4;
  }
  plVar1 = (long *)*param_1;
  lVar7 = *plVar1;
  if (plVar1 == param_3) {
LAB_0010b244:
    if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010b265:
        lVar7 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
        if (lVar7 != lVar5) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
      if (cVar2 != '\0') goto LAB_0010b265;
    }
  }
  else {
    if (*(code **)(lVar7 + 0x128) != glslang::TType::isStruct) {
      cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar7 = *plVar1;
      goto LAB_0010b244;
    }
    if ((byte)((char)plVar1[1] - 0xfU) < 2) {
      return param_1;
    }
  }
  param_1 = param_1 + 4;
LAB_0010b0e2:
  plVar1 = (long *)*param_1;
  lVar7 = *plVar1;
  if (plVar1 != param_3) {
    if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
      if (1 < (byte)((char)plVar1[1] - 0xfU)) {
        return param_2;
      }
      return param_1;
    }
    cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar7 = *plVar1;
  }
  if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar1[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar7 = *(long *)(plVar1[0xd] + 0x10);
  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
  if (lVar7 == lVar5) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsStructure() const */

bool __thiscall glslang::TType::containsStructure(TType *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0010b386:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,this);
      return lVar1 != lVar3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_0010b386;
  }
  return false;
}



/* glslang::TType::TType(glslang::TType const&, int, bool) */

void __thiscall glslang::TType::TType(TType *this,TType *param_1,int param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TType TVar4;
  TType TVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  byte bVar27;
  ulong uVar28;
  
  lVar26 = *(long *)param_1;
  *(undefined ***)this = &PTR__TType_0010e880;
  if (*(code **)(lVar26 + 0xe8) == isArray) {
    lVar23 = *(long *)(param_1 + 0x60);
    if (lVar23 != 0) {
LAB_0010b52d:
      uVar9 = *(undefined4 *)(param_1 + 0x80);
      uVar7 = *(uint *)(param_1 + 8);
      *(long *)(this + 0x60) = lVar23;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar17 = *(undefined8 *)(param_1 + 0x20);
      uVar18 = *(undefined8 *)(param_1 + 0x28);
      *(undefined4 *)(this + 0x80) = uVar9;
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(this + 0x10) = uVar1;
      *(undefined8 *)(this + 0x18) = uVar13;
      uVar13 = *(undefined8 *)(param_1 + 0x50);
      uVar14 = *(undefined8 *)(param_1 + 0x58);
      uVar15 = *(undefined8 *)(param_1 + 0x70);
      uVar16 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(this + 0x20) = uVar17;
      *(undefined8 *)(this + 0x28) = uVar18;
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(this + 0x30) = uVar2;
      *(undefined8 *)(this + 0x38) = uVar3;
      *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffe00000 | uVar7 & 0x1fffff;
      *(undefined8 *)(this + 0x68) = uVar1;
      uVar6 = *(ushort *)(param_1 + 10);
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(this + 0x40) = uVar11;
      *(undefined8 *)(this + 0x48) = uVar12;
      *(undefined8 *)(this + 0x50) = uVar13;
      *(undefined8 *)(this + 0x58) = uVar14;
      *(undefined8 *)(this + 0x70) = uVar15;
      *(undefined8 *)(this + 0x78) = uVar16;
      *(ushort *)(this + 10) = *(ushort *)(this + 10) & 0xf81f | uVar6 & 0x7e0;
      pcVar10 = *(code **)(lVar26 + 0x98);
      *(undefined8 *)(this + 0x88) = uVar1;
      *(undefined8 *)(this + 0x90) = uVar2;
      if (pcVar10 != getArraySizes) {
        lVar23 = (*pcVar10)(param_1);
      }
      lVar26 = *(long *)(lVar23 + 8);
      if ((lVar26 != 0) && ((int)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8) >> 4) == 1)) {
        *(undefined8 *)(this + 0x60) = 0;
        return;
      }
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar21 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar20);
      *puVar21 = &PTR__TSmallArrayVector_0010e860;
      puVar21[1] = 0;
      *(undefined4 *)(puVar21 + 2) = 0;
      *(undefined2 *)((long)puVar21 + 0x14) = 1;
      *(undefined8 **)(this + 0x60) = puVar21;
      lVar26 = *(long *)(param_1 + 0x60);
      lVar23 = *(long *)(lVar26 + 8);
      if (lVar23 == 0) {
        return;
      }
      if ((int)(*(long *)(lVar23 + 0x10) - *(long *)(lVar23 + 8) >> 4) < 2) {
        return;
      }
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar22 = (ulong *)glslang::TPoolAllocator::allocate(uVar20);
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      *puVar22 = uVar20;
      puVar21[1] = puVar22;
      lVar26 = *(long *)(lVar26 + 8);
      lVar23 = *(long *)(lVar26 + 8);
      lVar26 = *(long *)(lVar26 + 0x10);
      if (lVar26 == lVar23 + 0x10) {
        return;
      }
      uVar28 = lVar26 - (lVar23 + 0x10);
      if (uVar28 < 0x7ffffffffffffff1) {
        if (uVar28 == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = glslang::TPoolAllocator::allocate(uVar20);
        }
        lVar25 = 0;
        lVar26 = (lVar26 + -0x10) - lVar23;
        do {
          puVar21 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          uVar1 = puVar21[1];
          *(undefined8 *)(uVar20 + lVar25) = *puVar21;
          ((undefined8 *)(uVar20 + lVar25))[1] = uVar1;
          lVar25 = lVar25 + 0x10;
        } while (lVar26 != lVar25);
        puVar22[1] = uVar20;
        puVar22[2] = lVar26 + uVar20;
        puVar22[3] = uVar20 + uVar28;
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_range_insert");
    }
  }
  else {
    cVar19 = (**(code **)(lVar26 + 0xe8))(param_1);
    if (cVar19 != '\0') {
      lVar26 = *(long *)param_1;
      lVar23 = *(long *)(param_1 + 0x60);
      goto LAB_0010b52d;
    }
  }
  lVar26 = *(long *)(param_1 + 0x68);
  if ((byte)((char)param_1[8] - 0xfU) < 2) {
    lVar26 = *(long *)((long)param_2 * 0x20 + *(long *)(lVar26 + 8));
    uVar7 = *(uint *)(lVar26 + 8);
    uVar1 = *(undefined8 *)(lVar26 + 0x10);
    uVar2 = *(undefined8 *)(lVar26 + 0x18);
    uVar3 = *(undefined8 *)(lVar26 + 0x20);
    uVar11 = *(undefined8 *)(lVar26 + 0x28);
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(lVar26 + 0x80);
    uVar12 = *(undefined8 *)(lVar26 + 0x30);
    uVar13 = *(undefined8 *)(lVar26 + 0x38);
    uVar14 = *(undefined8 *)(lVar26 + 0x70);
    uVar15 = *(undefined8 *)(lVar26 + 0x78);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined8 *)(this + 0x18) = uVar2;
    uVar16 = *(undefined8 *)(lVar26 + 0x40);
    uVar17 = *(undefined8 *)(lVar26 + 0x48);
    *(undefined8 *)(this + 0x20) = uVar3;
    *(undefined8 *)(this + 0x28) = uVar11;
    uVar3 = *(undefined8 *)(lVar26 + 0x50);
    uVar11 = *(undefined8 *)(lVar26 + 0x58);
    uVar1 = *(undefined8 *)(lVar26 + 0x68);
    *(undefined8 *)(this + 0x30) = uVar12;
    *(undefined8 *)(this + 0x38) = uVar13;
    *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffe00000 | uVar7 & 0x1fffff;
    uVar2 = *(undefined8 *)(lVar26 + 0x60);
    *(undefined8 *)(this + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(lVar26 + 0x88);
    uVar12 = *(undefined8 *)(lVar26 + 0x90);
    *(undefined8 *)(this + 0x60) = uVar2;
    uVar6 = *(ushort *)(lVar26 + 10);
    *(undefined8 *)(this + 0x40) = uVar16;
    *(undefined8 *)(this + 0x48) = uVar17;
    *(undefined8 *)(this + 0x50) = uVar3;
    *(undefined8 *)(this + 0x58) = uVar11;
    *(undefined8 *)(this + 0x70) = uVar14;
    *(undefined8 *)(this + 0x78) = uVar15;
    *(undefined8 *)(this + 0x88) = uVar1;
    *(undefined8 *)(this + 0x90) = uVar12;
    *(ushort *)(this + 10) = uVar6 & 0x7e0 | *(ushort *)(this + 10) & 0xf81f;
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  TVar4 = param_1[9];
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined8 *)(this + 0x18) = uVar11;
  uVar24 = uVar7 & 0x7ffffff;
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x20) = uVar12;
  *(undefined8 *)(this + 0x28) = uVar13;
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x30) = uVar14;
  *(undefined8 *)(this + 0x38) = uVar15;
  TVar5 = param_1[10];
  *(undefined8 *)(this + 0x40) = uVar11;
  *(undefined8 *)(this + 0x48) = uVar16;
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x50) = uVar12;
  *(undefined8 *)(this + 0x58) = uVar13;
  uVar8 = *(uint *)(this + 8);
  *(undefined8 *)(this + 0x60) = uVar2;
  *(long *)(this + 0x68) = lVar26;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0x78) = uVar3;
  *(undefined8 *)(this + 0x88) = uVar11;
  *(undefined8 *)(this + 0x90) = uVar14;
  *(uint *)(this + 8) = uVar8 & 0xf8000000 | uVar24;
  if ((byte)(uVar24 >> 8) < 0x10) {
    if ((1 < ((byte)TVar4 & 0xf)) || (((byte)TVar5 >> 4 & 1) != 0)) {
      *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffeff0ff | 0x100;
      return;
    }
    if ((((byte)TVar5 >> 5 & 1) != 0) || (((byte)TVar5 >> 6 & 1) != 0)) {
      *(ushort *)(this + 10) = *(ushort *)(this + 10) & 0xf81f;
      *(undefined8 *)(this + 0x88) = 0;
    }
  }
  else {
    bVar27 = (byte)TVar5 & 0xf;
    if (param_3) {
      bVar27 = (byte)TVar4 >> 4;
    }
    *(uint *)(this + 8) = uVar8 & 0xf8000000 | uVar7 & 0x7f000ff | (uint)bVar27 << 8;
    if (bVar27 == 1) {
      this[10] = (TType)((byte)this[10] | 0x10);
    }
  }
  return;
}



/* glslang::TType::computeNumComponents() const */

uint __thiscall glslang::TType::computeNumComponents(TType *this)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  TType *this_00;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  uint uVar25;
  long *plVar26;
  long *plVar27;
  
  if (*(code **)(*(long *)this + 0x38) == getBasicType) {
    uVar10 = (uint)(byte)this[8];
    if (this[8] != (TType)0xf) {
LAB_0010b89b:
      if (uVar10 != 0x10) {
        if ((byte)this[9] < 0x10) {
          uVar10 = (byte)this[9] & 0xf;
        }
        else {
          uVar10 = (uint)((byte)this[9] >> 4) * ((byte)this[10] & 0xf);
        }
        goto LAB_0010b8c8;
      }
    }
  }
  else {
    iVar14 = (**(code **)(*(long *)this + 0x38))();
    if (iVar14 != 0xf) {
      if (*(code **)(*(long *)this + 0x38) == getBasicType) {
        uVar10 = (uint)(byte)this[8];
      }
      else {
        uVar10 = (**(code **)(*(long *)this + 0x38))(this);
      }
      goto LAB_0010b89b;
    }
  }
  uVar10 = 0;
  plVar26 = *(long **)(*(long *)(this + 0x68) + 8);
  if (plVar26 != *(long **)(*(long *)(this + 0x68) + 0x10)) {
    do {
      plVar3 = (long *)*plVar26;
      if (*(code **)(*plVar3 + 0x38) == getBasicType) {
        uVar11 = (uint)*(byte *)(plVar3 + 1);
        if (*(byte *)(plVar3 + 1) == 0xf) goto LAB_0010b9ad;
LAB_0010b965:
        if (uVar11 == 0x10) goto LAB_0010b9ad;
        if (*(byte *)((long)plVar3 + 9) < 0x10) {
          uVar11 = *(byte *)((long)plVar3 + 9) & 0xf;
          goto LAB_0010ba9c;
        }
        uVar11 = (uint)(*(byte *)((long)plVar3 + 9) >> 4) * (*(byte *)((long)plVar3 + 10) & 0xf);
        lVar2 = plVar3[0xc];
      }
      else {
        iVar14 = (**(code **)(*plVar3 + 0x38))(plVar3);
        if (iVar14 != 0xf) {
          if (*(code **)(*plVar3 + 0x38) == getBasicType) {
            uVar11 = (uint)*(byte *)(plVar3 + 1);
          }
          else {
            uVar11 = (**(code **)(*plVar3 + 0x38))(plVar3);
          }
          goto LAB_0010b965;
        }
LAB_0010b9ad:
        uVar13 = 0;
        uVar11 = 0;
        plVar16 = *(long **)(plVar3[0xd] + 8);
        if (plVar16 != *(long **)(plVar3[0xd] + 0x10)) {
          do {
            plVar4 = (long *)*plVar16;
            if (*(code **)(*plVar4 + 0x38) == getBasicType) {
              uVar11 = (uint)*(byte *)(plVar4 + 1);
              if (*(byte *)(plVar4 + 1) == 0xf) goto LAB_0010baf4;
LAB_0010b9fe:
              if (uVar11 == 0x10) goto LAB_0010baf4;
              if (*(byte *)((long)plVar4 + 9) < 0x10) {
                uVar11 = *(byte *)((long)plVar4 + 9) & 0xf;
              }
              else {
                uVar11 = (uint)(*(byte *)((long)plVar4 + 9) >> 4) *
                         (*(byte *)((long)plVar4 + 10) & 0xf);
              }
            }
            else {
              iVar14 = (**(code **)(*plVar4 + 0x38))(plVar4);
              if (iVar14 != 0xf) {
                if (*(code **)(*plVar4 + 0x38) == getBasicType) {
                  uVar11 = (uint)*(byte *)(plVar4 + 1);
                }
                else {
                  uVar11 = (**(code **)(*plVar4 + 0x38))(plVar4);
                }
                goto LAB_0010b9fe;
              }
LAB_0010baf4:
              uVar25 = 0;
              uVar11 = 0;
              plVar23 = *(long **)(plVar4[0xd] + 8);
              if (plVar23 != *(long **)(plVar4[0xd] + 0x10)) {
                do {
                  plVar5 = (long *)*plVar23;
                  if (*(code **)(*plVar5 + 0x38) == getBasicType) {
                    uVar11 = (uint)*(byte *)(plVar5 + 1);
                    if (*(byte *)(plVar5 + 1) == 0xf) goto LAB_0010bbf8;
LAB_0010bb4d:
                    if (uVar11 == 0x10) goto LAB_0010bbf8;
                    if (*(byte *)((long)plVar5 + 9) < 0x10) {
                      uVar11 = *(byte *)((long)plVar5 + 9) & 0xf;
                    }
                    else {
                      uVar11 = (uint)(*(byte *)((long)plVar5 + 9) >> 4) *
                               (*(byte *)((long)plVar5 + 10) & 0xf);
                    }
                  }
                  else {
                    iVar14 = (**(code **)(*plVar5 + 0x38))(plVar5);
                    if (iVar14 != 0xf) {
                      if (*(code **)(*plVar5 + 0x38) == getBasicType) {
                        uVar11 = (uint)*(byte *)(plVar5 + 1);
                      }
                      else {
                        uVar11 = (**(code **)(*plVar5 + 0x38))(plVar5);
                      }
                      goto LAB_0010bb4d;
                    }
LAB_0010bbf8:
                    uVar20 = 0;
                    uVar11 = 0;
                    plVar17 = *(long **)(plVar5[0xd] + 8);
                    if (plVar17 != *(long **)(plVar5[0xd] + 0x10)) {
                      do {
                        plVar6 = (long *)*plVar17;
                        if (*(code **)(*plVar6 + 0x38) == getBasicType) {
                          uVar11 = (uint)*(byte *)(plVar6 + 1);
                          if (*(byte *)(plVar6 + 1) == 0xf) goto LAB_0010bcf0;
LAB_0010bc48:
                          if (uVar11 == 0x10) goto LAB_0010bcf0;
                          if (*(byte *)((long)plVar6 + 9) < 0x10) {
                            uVar11 = *(byte *)((long)plVar6 + 9) & 0xf;
                          }
                          else {
                            uVar11 = (uint)(*(byte *)((long)plVar6 + 9) >> 4) *
                                     (*(byte *)((long)plVar6 + 10) & 0xf);
                          }
                        }
                        else {
                          iVar14 = (**(code **)(*plVar6 + 0x38))(plVar6);
                          if (iVar14 != 0xf) {
                            if (*(code **)(*plVar6 + 0x38) == getBasicType) {
                              uVar11 = (uint)*(byte *)(plVar6 + 1);
                            }
                            else {
                              uVar11 = (**(code **)(*plVar6 + 0x38))(plVar6);
                            }
                            goto LAB_0010bc48;
                          }
LAB_0010bcf0:
                          uVar11 = 0;
                          plVar27 = *(long **)(plVar6[0xd] + 8);
                          if (plVar27 != *(long **)(plVar6[0xd] + 0x10)) {
                            do {
                              plVar7 = (long *)*plVar27;
                              if (*(code **)(*plVar7 + 0x38) == getBasicType) {
                                uVar21 = (uint)*(byte *)(plVar7 + 1);
                                if (*(byte *)(plVar7 + 1) == 0xf) goto LAB_0010bdf8;
LAB_0010bd43:
                                if (uVar21 == 0x10) goto LAB_0010bdf8;
                                if (*(byte *)((long)plVar7 + 9) < 0x10) {
                                  uVar21 = *(byte *)((long)plVar7 + 9) & 0xf;
                                }
                                else {
                                  uVar21 = (uint)(*(byte *)((long)plVar7 + 9) >> 4) *
                                           (*(byte *)((long)plVar7 + 10) & 0xf);
                                }
                              }
                              else {
                                iVar14 = (**(code **)(*plVar7 + 0x38))(plVar7);
                                if (iVar14 != 0xf) {
                                  if (*(code **)(*plVar7 + 0x38) == getBasicType) {
                                    uVar21 = (uint)*(byte *)(plVar7 + 1);
                                  }
                                  else {
                                    uVar21 = (**(code **)(*plVar7 + 0x38))(plVar7);
                                  }
                                  goto LAB_0010bd43;
                                }
LAB_0010bdf8:
                                uVar21 = 0;
                                plVar22 = *(long **)(plVar7[0xd] + 8);
                                if (*(long **)(plVar7[0xd] + 0x10) != plVar22) {
                                  do {
                                    plVar8 = (long *)*plVar22;
                                    if (*(code **)(*plVar8 + 0x38) == getBasicType) {
                                      uVar19 = (uint)*(byte *)(plVar8 + 1);
                                      if (*(byte *)(plVar8 + 1) == 0xf) goto LAB_0010bf00;
LAB_0010be50:
                                      if (uVar19 == 0x10) goto LAB_0010bf00;
                                      if (*(byte *)((long)plVar8 + 9) < 0x10) {
                                        uVar19 = *(byte *)((long)plVar8 + 9) & 0xf;
                                      }
                                      else {
                                        uVar19 = (uint)(*(byte *)((long)plVar8 + 9) >> 4) *
                                                 (*(byte *)((long)plVar8 + 10) & 0xf);
                                      }
                                    }
                                    else {
                                      iVar14 = (**(code **)(*plVar8 + 0x38))(plVar8);
                                      if (iVar14 != 0xf) {
                                        if (*(code **)(*plVar8 + 0x38) == getBasicType) {
                                          uVar19 = (uint)*(byte *)(plVar8 + 1);
                                        }
                                        else {
                                          uVar19 = (**(code **)(*plVar8 + 0x38))(plVar8);
                                        }
                                        goto LAB_0010be50;
                                      }
LAB_0010bf00:
                                      uVar19 = 0;
                                      plVar24 = *(long **)(plVar8[0xd] + 8);
                                      if (*(long **)(plVar8[0xd] + 0x10) != plVar24) {
                                        uVar19 = 0;
                                        do {
                                          plVar9 = (long *)*plVar24;
                                          if (*(code **)(*plVar9 + 0x38) == getBasicType) {
                                            uVar15 = (uint)*(byte *)(plVar9 + 1);
                                            if (*(byte *)(plVar9 + 1) == 0xf) goto LAB_0010c008;
LAB_0010bf58:
                                            if (uVar15 == 0x10) goto LAB_0010c008;
                                            if (*(byte *)((long)plVar9 + 9) < 0x10) {
                                              uVar15 = *(byte *)((long)plVar9 + 9) & 0xf;
                                            }
                                            else {
                                              uVar15 = (uint)(*(byte *)((long)plVar9 + 9) >> 4) *
                                                       (*(byte *)((long)plVar9 + 10) & 0xf);
                                            }
                                          }
                                          else {
                                            iVar14 = (**(code **)(*plVar9 + 0x38))(plVar9);
                                            if (iVar14 != 0xf) {
                                              if (*(code **)(*plVar9 + 0x38) == getBasicType) {
                                                uVar15 = (uint)*(byte *)(plVar9 + 1);
                                              }
                                              else {
                                                uVar15 = (**(code **)(*plVar9 + 0x38))(plVar9);
                                              }
                                              goto LAB_0010bf58;
                                            }
LAB_0010c008:
                                            uVar15 = 0;
                                            puVar18 = *(undefined8 **)(plVar9[0xd] + 8);
                                            if (puVar18 != *(undefined8 **)(plVar9[0xd] + 0x10)) {
                                              do {
                                                this_00 = (TType *)*puVar18;
                                                puVar18 = puVar18 + 4;
                                                iVar14 = computeNumComponents(this_00);
                                                uVar15 = uVar15 + iVar14;
                                              } while (*(undefined8 **)(plVar9[0xd] + 0x10) !=
                                                       puVar18);
                                            }
                                          }
                                          if ((plVar9[0xc] != 0) &&
                                             (lVar2 = *(long *)(plVar9[0xc] + 8), lVar2 != 0)) {
                                            piVar12 = *(int **)(lVar2 + 8);
                                            iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12
                                                          >> 4);
                                            if (iVar14 < 1) {
                                              iVar14 = 1;
                                            }
                                            else {
                                              piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                                              iVar14 = 1;
                                              do {
                                                iVar14 = iVar14 * *piVar12;
                                                piVar12 = piVar12 + 4;
                                              } while (piVar12 != piVar1);
                                            }
                                            uVar15 = uVar15 * iVar14;
                                          }
                                          uVar19 = uVar19 + uVar15;
                                          plVar24 = plVar24 + 4;
                                        } while (*(long **)(plVar8[0xd] + 0x10) != plVar24);
                                      }
                                    }
                                    if ((plVar8[0xc] != 0) &&
                                       (lVar2 = *(long *)(plVar8[0xc] + 8), lVar2 != 0)) {
                                      piVar12 = *(int **)(lVar2 + 8);
                                      iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
                                      if (iVar14 < 1) {
                                        iVar14 = 1;
                                      }
                                      else {
                                        piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                                        iVar14 = 1;
                                        do {
                                          iVar14 = iVar14 * *piVar12;
                                          piVar12 = piVar12 + 4;
                                        } while (piVar12 != piVar1);
                                      }
                                      uVar19 = uVar19 * iVar14;
                                    }
                                    uVar21 = uVar21 + uVar19;
                                    plVar22 = plVar22 + 4;
                                  } while (*(long **)(plVar7[0xd] + 0x10) != plVar22);
                                }
                              }
                              if ((plVar7[0xc] != 0) &&
                                 (lVar2 = *(long *)(plVar7[0xc] + 8), lVar2 != 0)) {
                                piVar12 = *(int **)(lVar2 + 8);
                                iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
                                if (iVar14 < 1) {
                                  iVar14 = 1;
                                }
                                else {
                                  piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                                  iVar14 = 1;
                                  do {
                                    iVar14 = iVar14 * *piVar12;
                                    piVar12 = piVar12 + 4;
                                  } while (piVar12 != piVar1);
                                }
                                uVar21 = uVar21 * iVar14;
                              }
                              uVar11 = uVar11 + uVar21;
                              plVar27 = plVar27 + 4;
                            } while (*(long **)(plVar6[0xd] + 0x10) != plVar27);
                          }
                        }
                        if ((plVar6[0xc] != 0) && (lVar2 = *(long *)(plVar6[0xc] + 8), lVar2 != 0))
                        {
                          piVar12 = *(int **)(lVar2 + 8);
                          iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
                          if (iVar14 < 1) {
                            iVar14 = 1;
                          }
                          else {
                            piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                            iVar14 = 1;
                            do {
                              iVar14 = iVar14 * *piVar12;
                              piVar12 = piVar12 + 4;
                            } while (piVar12 != piVar1);
                          }
                          uVar11 = uVar11 * iVar14;
                        }
                        uVar11 = uVar20 + uVar11;
                        plVar17 = plVar17 + 4;
                        uVar20 = uVar11;
                      } while (*(long **)(plVar5[0xd] + 0x10) != plVar17);
                    }
                  }
                  if ((plVar5[0xc] != 0) && (lVar2 = *(long *)(plVar5[0xc] + 8), lVar2 != 0)) {
                    piVar12 = *(int **)(lVar2 + 8);
                    iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
                    if (iVar14 < 1) {
                      iVar14 = 1;
                    }
                    else {
                      piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                      iVar14 = 1;
                      do {
                        iVar14 = iVar14 * *piVar12;
                        piVar12 = piVar12 + 4;
                      } while (piVar12 != piVar1);
                    }
                    uVar11 = uVar11 * iVar14;
                  }
                  uVar11 = uVar25 + uVar11;
                  plVar23 = plVar23 + 4;
                  uVar25 = uVar11;
                } while (*(long **)(plVar4[0xd] + 0x10) != plVar23);
              }
            }
            if ((plVar4[0xc] != 0) && (lVar2 = *(long *)(plVar4[0xc] + 8), lVar2 != 0)) {
              piVar12 = *(int **)(lVar2 + 8);
              iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
              if (iVar14 < 1) {
                iVar14 = 1;
              }
              else {
                piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                iVar14 = 1;
                do {
                  iVar14 = iVar14 * *piVar12;
                  piVar12 = piVar12 + 4;
                } while (piVar12 != piVar1);
              }
              uVar11 = uVar11 * iVar14;
            }
            uVar11 = uVar13 + uVar11;
            plVar16 = plVar16 + 4;
            uVar13 = uVar11;
          } while (*(long **)(plVar3[0xd] + 0x10) != plVar16);
        }
LAB_0010ba9c:
        lVar2 = plVar3[0xc];
      }
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 8), lVar2 != 0)) {
        piVar12 = *(int **)(lVar2 + 8);
        iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        else {
          piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
          iVar14 = 1;
          do {
            iVar14 = iVar14 * *piVar12;
            piVar12 = piVar12 + 4;
          } while (piVar12 != piVar1);
        }
        uVar11 = uVar11 * iVar14;
      }
      uVar10 = uVar10 + uVar11;
      plVar26 = plVar26 + 4;
    } while (*(long **)(*(long *)(this + 0x68) + 0x10) != plVar26);
  }
LAB_0010b8c8:
  if ((*(long *)(this + 0x60) != 0) && (lVar2 = *(long *)(*(long *)(this + 0x60) + 8), lVar2 != 0))
  {
    piVar12 = *(int **)(lVar2 + 8);
    iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    else {
      piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
      iVar14 = 1;
      do {
        iVar14 = iVar14 * *piVar12;
        piVar12 = piVar12 + 4;
      } while (piVar12 != piVar1);
    }
    uVar10 = uVar10 * iVar14;
  }
  return uVar10;
}



/* glslang::TConstUnion::TEMPNAMEPLACEHOLDERVALUE(glslang::TConstUnion const&) const */

undefined8 __thiscall glslang::TConstUnion::operator==(TConstUnion *this,TConstUnion *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) == *(int *)(this + 8)) {
    switch(*(int *)(this + 8)) {
    default:
      uVar1 = 0;
      break;
    case 2:
      uVar1 = CONCAT71(0x10c3,!NAN(*(double *)param_1) && !NAN(*(double *)this));
      if (*(double *)param_1 != *(double *)this) {
        uVar1 = 0;
      }
      break;
    case 4:
    case 5:
    case 0xc:
      uVar1 = CONCAT71(0x10c3,*param_1 == *this);
      break;
    case 6:
    case 7:
      uVar1 = CONCAT71(0x10c3,*(short *)param_1 == *(short *)this);
      break;
    case 8:
    case 9:
      uVar1 = CONCAT71(0x10c3,*(int *)param_1 == *(int *)this);
      break;
    case 10:
    case 0xb:
      uVar1 = CONCAT71(0x10c3,*(long *)param_1 == *(long *)this);
    }
  }
  return uVar1;
}



/* glslang::TConstUnion::TEMPNAMEPLACEHOLDERVALUE(glslang::TConstUnion const&) const */

ulong __thiscall glslang::TConstUnion::operator>(TConstUnion *this,TConstUnion *param_1)

{
  if (*(uint *)(this + 8) < 0xc) {
    switch(*(uint *)(this + 8)) {
    case 2:
      return CONCAT71((int7)((ulong)((long)&switchD_0010c3ff::switchdataD_0010c494 +
                                    (long)(int)(&switchD_0010c3ff::switchdataD_0010c494)
                                               [*(uint *)(this + 8)]) >> 8),
                      *(double *)param_1 <= *(double *)this && *(double *)this != *(double *)param_1
                     );
    case 4:
      return (ulong)((char)*param_1 < (char)*this);
    case 5:
      return (ulong)((byte)*param_1 < (byte)*this);
    case 6:
      return (ulong)CONCAT11((char)((ushort)*(short *)param_1 >> 8),
                             *(short *)param_1 < *(short *)this);
    case 7:
      return (ulong)CONCAT11((char)(*(ushort *)this >> 8),*(ushort *)param_1 < *(ushort *)this);
    case 8:
      return (ulong)CONCAT31((int3)((uint)*(int *)param_1 >> 8),*(int *)param_1 < *(int *)this);
    case 9:
      return (ulong)CONCAT31((int3)(*(uint *)this >> 8),*(uint *)param_1 < *(uint *)this);
    case 10:
      return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)param_1 < *(long *)this);
    case 0xb:
      return CONCAT71((int7)(*(ulong *)this >> 8),*(ulong *)param_1 < *(ulong *)this);
    }
  }
  return 0;
}



/* glslang::TConstUnion::TEMPNAMEPLACEHOLDERVALUE(glslang::TConstUnion const&) const */

ulong __thiscall glslang::TConstUnion::operator<(TConstUnion *this,TConstUnion *param_1)

{
  if (*(uint *)(this + 8) < 0xc) {
    switch(*(uint *)(this + 8)) {
    case 2:
      return CONCAT71((int7)((ulong)((long)&switchD_0010c4ef::switchdataD_0010c584 +
                                    (long)(int)(&switchD_0010c4ef::switchdataD_0010c584)
                                               [*(uint *)(this + 8)]) >> 8),
                      *(double *)this <= *(double *)param_1 && *(double *)param_1 != *(double *)this
                     );
    case 4:
      return (ulong)((char)*this < (char)*param_1);
    case 5:
      return (ulong)((byte)*this < (byte)*param_1);
    case 6:
      return (ulong)CONCAT11((char)((ushort)*(short *)param_1 >> 8),
                             *(short *)this < *(short *)param_1);
    case 7:
      return (ulong)CONCAT11((char)(*(ushort *)param_1 >> 8),*(ushort *)this < *(ushort *)param_1);
    case 8:
      return (ulong)CONCAT31((int3)((uint)*(int *)param_1 >> 8),*(int *)this < *(int *)param_1);
    case 9:
      return (ulong)CONCAT31((int3)(*(uint *)param_1 >> 8),*(uint *)this < *(uint *)param_1);
    case 10:
      return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this < *(long *)param_1);
    case 0xb:
      return CONCAT71((int7)(*(ulong *)param_1 >> 8),*(ulong *)this < *(ulong *)param_1);
    }
  }
  return 0;
}



/* glslang::TConstUnion::TEMPNAMEPLACEHOLDERVALUE(glslang::TConstUnion const&) const */

undefined1  [16] __thiscall glslang::TConstUnion::operator-(TConstUnion *this,TConstUnion *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = 0;
  switch(uVar1) {
  case 2:
    auVar8._8_4_ = uVar1;
    auVar8._0_8_ = *(double *)this - *(double *)param_1;
    auVar8._12_4_ = 0;
    return auVar8;
  case 4:
  case 5:
    auVar4[0] = (char)*this - (char)*param_1;
    auVar4._1_7_ = 0;
    auVar4._8_4_ = uVar1;
    auVar4._12_4_ = 0;
    return auVar4;
  case 6:
  case 7:
    auVar3._0_2_ = *(short *)this - *(short *)param_1;
    auVar3._2_6_ = 0;
    auVar3._8_4_ = uVar1;
    auVar3._12_4_ = 0;
    return auVar3;
  case 8:
    uVar2 = (ulong)(uint)(*(int *)this - *(int *)param_1);
    break;
  case 9:
    auVar6._0_4_ = *(int *)this - *(int *)param_1;
    auVar6._4_4_ = 0;
    auVar6._8_4_ = uVar1;
    auVar6._12_4_ = 0;
    return auVar6;
  case 10:
  case 0xb:
    auVar5._0_8_ = *(long *)this - *(long *)param_1;
    auVar5._8_4_ = uVar1;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  auVar7._8_8_ = 8;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* glslang::TConstUnion::TEMPNAMEPLACEHOLDERVALUE(glslang::TConstUnion const&) const */

undefined1  [16] __thiscall glslang::TConstUnion::operator*(TConstUnion *this,TConstUnion *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = 0;
  switch(uVar1) {
  case 2:
    auVar8._8_4_ = uVar1;
    auVar8._0_8_ = *(double *)this * *(double *)param_1;
    auVar8._12_4_ = 0;
    return auVar8;
  case 4:
  case 5:
    auVar4[0] = (char)*this * (char)*param_1;
    auVar4._1_7_ = 0;
    auVar4._8_4_ = uVar1;
    auVar4._12_4_ = 0;
    return auVar4;
  case 6:
  case 7:
    auVar3._0_2_ = *(short *)this * *(short *)param_1;
    auVar3._2_6_ = 0;
    auVar3._8_4_ = uVar1;
    auVar3._12_4_ = 0;
    return auVar3;
  case 8:
    uVar2 = (ulong)(uint)(*(int *)this * *(int *)param_1);
    break;
  case 9:
    auVar6._4_4_ = 0;
    auVar6._0_4_ = *(int *)this * *(int *)param_1;
    auVar6._8_4_ = uVar1;
    auVar6._12_4_ = 0;
    return auVar6;
  case 10:
  case 0xb:
    auVar5._8_4_ = uVar1;
    auVar5._0_8_ = *(long *)this * *(long *)param_1;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  auVar7._8_8_ = 8;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* glslang::TConstUnion::TEMPNAMEPLACEHOLDERVALUE(glslang::TConstUnion const&) const */

undefined1  [16] __thiscall glslang::TConstUnion::operator>>(TConstUnion *this,TConstUnion *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = (ulong)*(uint *)(this + 8);
  uVar3 = 0;
  uVar2 = 0;
  switch(*(uint *)(this + 8)) {
  case 4:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(byte)((int)(char)*this >> ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(byte)((int)(char)*this >> ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(byte)((int)(char)*this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(byte)((int)(char)*this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(byte)((int)(char)*this >> ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(byte)((int)(char)*this >> ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010c766_default;
    }
    break;
  case 5:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(byte)((int)(uint)(byte)*this >> ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(byte)((int)(uint)(byte)*this >> ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(byte)((int)(uint)(byte)*this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(byte)((int)(uint)(byte)*this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(byte)((int)(uint)(byte)*this >> ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(byte)((int)(uint)(byte)*this >> ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010c766_default;
    }
    break;
  case 6:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(ushort)((int)*(short *)this >> ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(ushort)((int)*(short *)this >> ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(ushort)((int)*(short *)this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(ushort)((int)*(short *)this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(ushort)((int)*(short *)this >> ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(ushort)((int)*(short *)this >> ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010c766_default;
    }
    break;
  case 7:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(ushort)((int)(uint)*(ushort *)this >> ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(ushort)((int)(uint)*(ushort *)this >> ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(ushort)((int)(uint)*(ushort *)this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(ushort)((int)(uint)*(ushort *)this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(ushort)((int)(uint)*(ushort *)this >> ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(ushort)((int)(uint)*(ushort *)this >> ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010c766_default;
    }
    break;
  case 8:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(uint)(*(int *)this >> ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(uint)(*(int *)this >> ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(uint)(*(int *)this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(uint)(*(int *)this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(uint)(*(int *)this >> ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(uint)(*(int *)this >> ((byte)*(undefined8 *)param_1 & 0x1f));
    }
  default:
switchD_0010c766_default:
    uVar1 = 8;
    break;
  case 9:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(*(uint *)this >> ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(*(uint *)this >> ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(*(uint *)this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(*(uint *)this >> ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(*(uint *)this >> ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(*(uint *)this >> ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010c766_default;
    }
    break;
  case 10:
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = *(long *)this >> ((byte)*param_1 & 0x3f);
      break;
    case 5:
      uVar3 = *(long *)this >> ((byte)*param_1 & 0x3f);
      break;
    case 6:
      uVar3 = *(long *)this >> ((byte)*(undefined2 *)param_1 & 0x3f);
      break;
    case 7:
      uVar3 = *(long *)this >> ((byte)*(undefined2 *)param_1 & 0x3f);
      break;
    case 8:
    case 9:
      uVar3 = *(long *)this >> ((byte)*(undefined4 *)param_1 & 0x3f);
      break;
    case 10:
    case 0xb:
      uVar3 = *(long *)this >> ((byte)*(undefined8 *)param_1 & 0x3f);
      break;
    default:
      goto switchD_0010c766_default;
    }
    break;
  case 0xb:
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = *(ulong *)this >> ((byte)*param_1 & 0x3f);
      break;
    case 5:
      uVar3 = *(ulong *)this >> ((byte)*param_1 & 0x3f);
      break;
    case 6:
      uVar3 = *(ulong *)this >> ((byte)*(undefined2 *)param_1 & 0x3f);
      break;
    case 7:
      uVar3 = *(ulong *)this >> ((byte)*(undefined2 *)param_1 & 0x3f);
      break;
    case 8:
    case 9:
      uVar3 = *(ulong *)this >> ((byte)*(undefined4 *)param_1 & 0x3f);
      break;
    case 10:
    case 0xb:
      uVar3 = *(ulong *)this >> ((byte)*(undefined8 *)param_1 & 0x3f);
      break;
    default:
      goto switchD_0010c766_default;
    }
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* glslang::TConstUnion::TEMPNAMEPLACEHOLDERVALUE(glslang::TConstUnion const&) const */

undefined1  [16] __thiscall glslang::TConstUnion::operator<<(TConstUnion *this,TConstUnion *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = (ulong)*(uint *)(this + 8);
  uVar3 = 0;
  uVar2 = 0;
  switch(*(uint *)(this + 8)) {
  case 4:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(byte)((int)(char)*this << ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(byte)((int)(char)*this << ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(byte)((int)(char)*this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(byte)((int)(char)*this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(byte)((int)(char)*this << ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(byte)((int)(char)*this << ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010ccb6_default;
    }
    goto LAB_0010cdc8;
  case 5:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(byte)((char)*this << ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(byte)((char)*this << ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(byte)((char)*this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(byte)((char)*this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(byte)((char)*this << ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(byte)((char)*this << ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010ccb6_default;
    }
    goto LAB_0010cdc8;
  case 6:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(ushort)((int)*(short *)this << ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(ushort)((int)*(short *)this << ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(ushort)((int)*(short *)this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(ushort)((int)*(short *)this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(ushort)((int)*(short *)this << ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(ushort)((int)*(short *)this << ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010ccb6_default;
    }
    goto LAB_0010cdc8;
  case 7:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(ushort)(*(short *)this << ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(ushort)(*(short *)this << ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(ushort)(*(short *)this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(ushort)(*(short *)this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(ushort)(*(short *)this << ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(ushort)(*(short *)this << ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010ccb6_default;
    }
    goto LAB_0010cdc8;
  case 8:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*(undefined8 *)param_1 & 0x1f));
    }
    break;
  case 9:
    uVar3 = uVar2;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*param_1 & 0x1f));
      break;
    case 5:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*param_1 & 0x1f));
      break;
    case 6:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 7:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*(undefined2 *)param_1 & 0x1f));
      break;
    case 8:
    case 9:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*(undefined4 *)param_1 & 0x1f));
      break;
    case 10:
    case 0xb:
      uVar3 = (ulong)(uint)(*(int *)this << ((byte)*(undefined8 *)param_1 & 0x1f));
      break;
    default:
      goto switchD_0010ccb6_default;
    }
    goto LAB_0010cdc8;
  case 10:
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
switchD_0010ccfd_caseD_4:
      uVar3 = *(long *)this << ((byte)*param_1 & 0x3f);
      goto LAB_0010cdc8;
    case 5:
switchD_0010ccfd_caseD_5:
      uVar3 = *(long *)this << ((byte)*param_1 & 0x3f);
      goto LAB_0010cdc8;
    case 6:
switchD_0010ccfd_caseD_6:
      uVar3 = *(long *)this << ((byte)*(undefined2 *)param_1 & 0x3f);
      goto LAB_0010cdc8;
    case 7:
switchD_0010ccfd_caseD_7:
      uVar3 = *(long *)this << ((byte)*(undefined2 *)param_1 & 0x3f);
      goto LAB_0010cdc8;
    case 8:
    case 9:
switchD_0010ccfd_caseD_8:
      uVar3 = *(long *)this << ((byte)*(undefined4 *)param_1 & 0x3f);
      goto LAB_0010cdc8;
    case 10:
    case 0xb:
switchD_0010ccfd_caseD_a:
      uVar3 = *(long *)this << ((byte)*(undefined8 *)param_1 & 0x3f);
      goto LAB_0010cdc8;
    }
    break;
  case 0xb:
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      goto switchD_0010ccfd_caseD_4;
    case 5:
      goto switchD_0010ccfd_caseD_5;
    case 6:
      goto switchD_0010ccfd_caseD_6;
    case 7:
      goto switchD_0010ccfd_caseD_7;
    case 8:
    case 9:
      goto switchD_0010ccfd_caseD_8;
    case 10:
    case 0xb:
      goto switchD_0010ccfd_caseD_a;
    }
  }
switchD_0010ccb6_default:
  uVar1 = 8;
LAB_0010cdc8:
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* glslang::TIntermTyped::TIntermTyped(glslang::TType const&) */

void __thiscall glslang::TIntermTyped::TIntermTyped(TIntermTyped *this,TType *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  uVar1 = (ushort)((uint)*(undefined4 *)(this + 0x28) >> 0x10);
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(code **)this = __stack_chk_fail;
  *(uint *)(this + 0x28) = CONCAT22(uVar1,0x100) & 0xf800ffff;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) & 0x9fc00000;
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  this[0x38] = (TIntermTyped)((byte)this[0x38] & 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  *(undefined ***)(this + 0x20) = &PTR__TType_0010e880;
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar7;
  *(undefined4 *)(this + 0xa0) = uVar2;
  uVar3 = *(uint *)(param_1 + 8);
  *(undefined8 *)(this + 0x40) = uVar8;
  *(undefined8 *)(this + 0x48) = uVar9;
  *(undefined8 *)(this + 0x50) = uVar10;
  *(undefined8 *)(this + 0x58) = uVar11;
  *(undefined8 *)(this + 0x60) = uVar12;
  *(undefined8 *)(this + 0x68) = uVar13;
  *(uint *)(this + 0x28) = (uint)(uVar1 & 0xf800) << 0x10 | uVar3 & 0x1fffff;
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x70) = uVar14;
  *(undefined8 *)(this + 0x78) = uVar15;
  *(undefined8 *)(this + 0x80) = uVar4;
  *(undefined8 *)(this + 0x90) = uVar5;
  *(undefined8 *)(this + 0x98) = uVar6;
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(ushort *)(param_1 + 10);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0xb0) = uVar4;
  *(ushort *)(this + 0x2a) = *(ushort *)(this + 0x2a) & 0xf81f | uVar1 & 0x7e0;
  return;
}



/* bool glslang::TType::contains<glslang::TType::containsSampler() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsSampler() const::{lambda(glslang::TType const*)#1}) const */

bool glslang::TType::
     contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if ((char)param_1[1] == '\x0e') {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))();
      }
      if (((*plVar4 & 0x200000) == 0) && ((*plVar4 & 0x80000) == 0)) {
        return true;
      }
      goto LAB_0010e5f0;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_0010e640;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_0010e5f0:
    lVar2 = *param_1;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if ((char)param_1[1] != '\x0e') goto LAB_0010e55f;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))(param_1);
      }
      if (((*plVar4 & 0x80000) != 0) && (1 < (byte)(*(char *)((long)plVar4 + 1) - 7U))) {
        return true;
      }
    }
    else {
LAB_0010e640:
      cVar1 = (*pcVar5)(param_1);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *param_1;
  }
LAB_0010e55f:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_0010e591:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_0010e591;
  }
  return false;
}



/* glslang::TType::containsSampler() const */

bool __thiscall glslang::TType::containsSampler(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  TType *pTVar4;
  code *pcVar5;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if (this[8] == (TType)0xe) {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))();
      }
      if ((((byte)pTVar4[2] & 0x20) == 0) && (((byte)pTVar4[2] & 8) == 0)) {
        return true;
      }
      goto LAB_0010e740;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_0010e790;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_0010e740:
    lVar2 = *(long *)this;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if (this[8] != (TType)0xe) goto LAB_0010e6af;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))(this);
      }
      if ((((byte)pTVar4[2] & 8) != 0) && (1 < (byte)((char)pTVar4[1] - 7U))) {
        return true;
      }
    }
    else {
LAB_0010e790:
      cVar1 = (*pcVar5)(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *(long *)this;
  }
LAB_0010e6af:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0010e6e1:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_0010e6e1;
  }
  return false;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermTyped::TIntermTyped(glslang::TType const&) */

void __thiscall glslang::TIntermTyped::TIntermTyped(TIntermTyped *this,TType *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::TType(glslang::TType const&, int, bool) */

void __thiscall glslang::TType::TType(TType *this,TType *param_1,int param_2,bool param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TConstUnionArray::~TConstUnionArray() */

void __thiscall glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TSmallArrayVector::~TSmallArrayVector() */

void __thiscall glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


