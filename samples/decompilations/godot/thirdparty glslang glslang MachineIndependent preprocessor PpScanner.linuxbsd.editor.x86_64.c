
/* glslang::TPpContext::missingEndifCheck() [clone .part.0] [clone .isra.0] */

void __thiscall glslang::TPpContext::missingEndifCheck(TPpContext *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0xd8);
  lVar3 = lVar1 + 0x40;
  if (*(char *)(lVar1 + 0x58) == '\0') {
    lVar3 = *(long *)(lVar1 + 0x30);
    iVar2 = (*(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x3c)) + -1;
    if (*(int *)(lVar1 + 0x20) < iVar2) {
      iVar2 = *(int *)(lVar1 + 0x20);
    }
    if (0 < iVar2) {
      lVar3 = lVar3 + (long)iVar2 * 0x18;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x168))
            (this,lVar3,"missing #endif",&_LC0,&_LC0,*(code **)(*(long *)this + 0x168));
  return;
}



/* glslang::TPpContext::lFloatConst(int, int, glslang::TPpToken*) */

int __thiscall
glslang::TPpContext::lFloatConst(TPpContext *this,int param_1,int param_2,TPpToken *param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  size_t sVar9;
  size_t sVar10;
  size_t *psVar11;
  byte *pbVar12;
  byte bVar13;
  TPpToken *pTVar14;
  ulong uVar15;
  size_t *psVar16;
  TPpToken TVar17;
  TPpToken *pTVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  long in_FS_OFFSET;
  bool bVar22;
  double dVar23;
  uint local_b4;
  double local_b0;
  int local_a8;
  uint local_a0;
  size_t local_90;
  size_t *local_88;
  size_t local_80;
  size_t local_78 [2];
  ulong local_68;
  size_t *local_60;
  size_t local_58;
  size_t local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 1) {
    iVar20 = 0;
  }
  else {
    pTVar18 = param_3 + 0x28;
    iVar20 = 0;
    do {
      if (*pTVar18 != (TPpToken)0x30) break;
      iVar20 = iVar20 + 1;
      pTVar18 = pTVar18 + 1;
    } while (iVar20 != param_1);
  }
  lVar6 = (long)param_1;
  do {
    iVar4 = (int)lVar6;
    if (iVar4 <= iVar20) break;
    lVar2 = lVar6 + 0x27;
    lVar6 = lVar6 + -1;
  } while (param_3[lVar2] == (TPpToken)0x30);
  uVar7 = 0;
  local_a0 = iVar4 - iVar20;
  bVar19 = (int)local_a0 < 0x10;
  if (((int)local_a0 < 0x10) && (iVar20 < iVar4)) {
    pTVar18 = param_3 + (long)iVar20 + 0x28;
    pTVar14 = pTVar18 + local_a0;
    do {
      TVar17 = *pTVar18;
      pTVar18 = pTVar18 + 1;
      uVar7 = (long)((char)TVar17 + -0x30) + uVar7 * 10;
    } while (pTVar18 != pTVar14);
  }
  local_b4 = param_1 - iVar4;
  bVar3 = false;
  if (param_2 == 0x2e) {
    local_a8 = param_1;
    if (param_1 < 0x401) {
      local_a8 = param_1 + 1;
      param_3[(long)param_1 + 0x28] = (TPpToken)0x2e;
    }
    param_2 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
    param_1 = local_a8;
    while (param_2 == 0x30) {
      if (param_1 < 0x401) {
        lVar6 = (long)param_1;
        param_1 = param_1 + 1;
        param_3[lVar6 + 0x28] = (TPpToken)0x30;
      }
      param_2 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
    }
    iVar20 = param_1;
    iVar21 = param_1;
    if (param_2 - 0x30U < 10) {
      do {
        if (iVar20 < 0x401) {
          lVar6 = (long)iVar20;
          iVar20 = iVar20 + 1;
          param_3[lVar6 + 0x28] = SUB41(param_2,0);
        }
        if (param_2 != 0x30) {
          iVar21 = iVar20;
        }
        param_2 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
      } while (param_2 - 0x30U < 10);
      bVar3 = true;
      bVar22 = param_1 < iVar21;
      param_1 = iVar20;
      if (bVar22) {
        local_a0 = (local_a0 - 1) + (iVar21 - iVar4);
        bVar19 = bVar19 && (int)local_a0 < 0x10;
        if ((bVar19) && (iVar4 < iVar21)) {
          pTVar18 = param_3 + (long)iVar4 + 0x28;
          pTVar14 = pTVar18 + (uint)(iVar21 - iVar4);
          do {
            if (*pTVar18 != (TPpToken)0x2e) {
              uVar7 = (long)((char)*pTVar18 + -0x30) + uVar7 * 10;
            }
            pTVar18 = pTVar18 + 1;
          } while (pTVar18 != pTVar14);
        }
        local_b4 = local_a8 - iVar21;
        bVar3 = true;
      }
    }
    else {
      bVar3 = true;
    }
  }
  if ((param_2 & 0xffffffdfU) == 0x45) {
    if (param_1 < 0x401) {
      iVar20 = param_1 + 1;
      param_3[(long)param_1 + 0x28] = SUB41(param_2,0);
      param_2 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
      bVar22 = param_2 == 0x2d;
      if ((param_2 - 0x2bU & 0xfffffffd) == 0) {
        if (iVar20 == 0x401) {
          param_1 = 0x401;
        }
        else {
          param_1 = param_1 + 2;
          param_3[(long)iVar20 + 0x28] = SUB41(param_2,0);
        }
LAB_00100948:
        param_2 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
      }
      else {
        bVar22 = false;
        param_1 = iVar20;
      }
    }
    else {
      param_2 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
      bVar22 = false;
      if ((param_2 - 0x2bU & 0xfffffffd) == 0) {
        bVar22 = param_2 == 0x2d;
        goto LAB_00100948;
      }
    }
    uVar5 = param_2 - 0x30;
    if (uVar5 < 10) {
      iVar20 = 0;
      do {
        if (iVar20 < 500) {
          iVar20 = uVar5 + iVar20 * 10;
        }
        if (param_1 < 0x401) {
          lVar6 = (long)param_1;
          param_1 = param_1 + 1;
          param_3[lVar6 + 0x28] = SUB41(param_2,0);
        }
        param_2 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
        uVar5 = param_2 - 0x30;
      } while (uVar5 < 10);
    }
    else {
      iVar20 = 0;
      (**(code **)(**(long **)(this + 0x100) + 0x168))
                (*(long **)(this + 0x100),param_3,"bad character in float exponent",&_LC0);
    }
    if (!bVar22) {
      local_b4 = local_b4 + iVar20;
      bVar3 = true;
      goto LAB_00100340;
    }
    local_b4 = iVar20 - local_b4;
    bVar3 = bVar22;
LAB_00100203:
    local_b0 = 0.0;
    bVar19 = (bool)(bVar19 & (int)local_b4 < 0x17);
    if ((bVar19) && (local_b0 = _LC3, 0 < (int)local_b4)) {
LAB_00100a14:
      local_b0 = _LC3;
      dVar23 = _LC2;
      do {
        if ((local_b4 & 1) != 0) {
          local_b0 = local_b0 * dVar23;
        }
        dVar23 = dVar23 * dVar23;
        local_b4 = (int)local_b4 >> 1;
      } while (local_b4 != 0);
      bVar19 = true;
      local_b4 = 0;
    }
    uVar5 = param_2 - 0x46;
    if (0x26 < uVar5) goto LAB_00100390;
LAB_0010022f:
    uVar15 = 1L << ((byte)uVar5 & 0x3f);
    TVar17 = SUB41(param_2,0);
    if ((uVar15 & 0x100000001) != 0) {
      if (*(int *)(this + 0x138) == 0) {
        glslang::TParseVersions::profileRequires
                  (*(TSourceLoc **)(this + 0x100),(int)param_3,8,(char *)0x12c,(char *)0x0);
        if (*(int *)(this + 0x138) == 0) {
          iVar20 = 0;
          if (((byte)(*(TSourceLoc **)(this + 0x100))[0xd0] & 1) == 0) {
            glslang::TParseVersions::profileRequires
                      (*(TSourceLoc **)(this + 0x100),(int)param_3,-9,(char *)0x78,(char *)0x0);
            iVar20 = *(int *)(this + 0x138);
          }
          if ((iVar20 == 0) && (!bVar3)) {
            (**(code **)(**(long **)(this + 0x100) + 0x168))
                      (*(long **)(this + 0x100),param_3,
                       "float literal needs a decimal point or exponent",&_LC0);
          }
        }
      }
      if (0x400 < param_1) {
        bVar1 = false;
        bVar3 = false;
        goto LAB_00100462;
      }
      lVar6 = (long)param_1;
      bVar1 = false;
      param_1 = param_1 + 1;
      param_3[lVar6 + 0x28] = TVar17;
      bVar3 = false;
      goto LAB_001003a8;
    }
    if ((uVar15 & 0x400000004) == 0) {
      if ((uVar15 & 0x4000000040) == 0) goto LAB_00100390;
      if (((*(int *)(this + 0x138) == 0) &&
          ((**(code **)(**(long **)(this + 0x100) + 0x88))
                     (*(long **)(this + 0x100),param_3,"double floating-point suffix"),
          *(int *)(this + 0x138) == 0)) && (!bVar3)) {
        (**(code **)(**(long **)(this + 0x100) + 0x168))
                  (*(long **)(this + 0x100),param_3,
                   "float literal needs a decimal point or exponent",&_LC0);
      }
      uVar5 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
      if ((uVar5 & 0xffffffdf) != 0x46) goto LAB_00100798;
      if (param_1 < 0x401) {
        iVar20 = param_1 + 1;
        param_3[(long)param_1 + 0x28] = TVar17;
        if (param_1 != 0x400) {
          bVar1 = false;
          param_1 = param_1 + 2;
          bVar3 = true;
          param_3[(long)iVar20 + 0x28] = SUB41(uVar5,0);
          goto LAB_001003a8;
        }
      }
      bVar1 = false;
      bVar3 = true;
    }
    else {
      if (((*(int *)(this + 0x138) == 0) &&
          ((**(code **)(**(long **)(this + 0x100) + 0x90))
                     (*(long **)(this + 0x100),param_3,"half floating-point suffix",0),
          *(int *)(this + 0x138) == 0)) && (!bVar3)) {
        (**(code **)(**(long **)(this + 0x100) + 0x168))
                  (*(long **)(this + 0x100),param_3,
                   "float literal needs a decimal point or exponent",&_LC0);
      }
      uVar5 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
      if ((uVar5 & 0xffffffdf) != 0x46) {
LAB_00100798:
        (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x20))();
        goto LAB_00100390;
      }
      if (param_1 < 0x401) {
        iVar20 = param_1 + 1;
        param_3[(long)param_1 + 0x28] = TVar17;
        if (param_1 != 0x400) {
          bVar1 = true;
          param_1 = param_1 + 2;
          bVar3 = false;
          param_3[(long)iVar20 + 0x28] = SUB41(uVar5,0);
          goto LAB_001003a8;
        }
      }
      bVar1 = true;
      bVar3 = false;
    }
LAB_00100462:
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_3,"float literal too long",&_LC0);
    param_3[0x428] = (TPpToken)0x0;
    if (bVar19) goto LAB_001003c6;
LAB_001004a0:
    *(undefined8 *)(param_3 + 0x20) = 0;
    psVar11 = local_50;
    uVar7 = glslang::GetThreadPoolAllocator();
    local_68 = uVar7;
    local_60 = psVar11;
    sVar8 = strlen((char *)(param_3 + 0x28));
    if (sVar8 < 0x10) {
      if (sVar8 == 1) {
        local_50[0] = CONCAT71(local_50[0]._1_7_,param_3[0x28]);
      }
      else if (sVar8 != 0) goto LAB_00100af1;
    }
    else {
      psVar11 = (size_t *)glslang::TPoolAllocator::allocate(uVar7);
      local_60 = psVar11;
      local_50[0] = sVar8;
LAB_00100af1:
      memcpy(psVar11,param_3 + 0x28,sVar8);
      psVar11 = local_60;
    }
    *(undefined1 *)((long)psVar11 + sVar8) = 0;
    sVar9 = sVar8 - 1;
    pbVar12 = (byte *)((long)local_60 + sVar9);
    bVar13 = *pbVar12 & 0xdf;
    sVar10 = sVar9;
    local_58 = sVar8;
    if (bVar13 == 0x46) {
      *pbVar12 = 0;
      sVar10 = sVar8 - 2;
      pbVar12 = (byte *)((long)local_60 + sVar10);
      bVar13 = *pbVar12 & 0xdf;
      local_58 = sVar9;
    }
    sVar8 = sVar10;
    if (bVar13 == 0x48) {
      *pbVar12 = 0;
      sVar8 = sVar10 - 1;
      pbVar12 = (byte *)((long)local_60 + sVar8);
      bVar13 = *pbVar12 & 0xdf;
      local_58 = sVar10;
    }
    if (bVar13 == 0x4c) {
      *pbVar12 = 0;
      local_58 = sVar8;
    }
    std::ios::clear(this + 0x2c0);
    psVar11 = local_60;
    local_88 = local_78;
    if (local_60 == (size_t *)0x0) {
      std::__throw_logic_error("basic_string: construction from null is not valid");
      goto LAB_00100bde;
    }
    sVar8 = strlen((char *)local_60);
    local_90 = sVar8;
    if (sVar8 < 0x10) {
      psVar16 = local_78;
      if (sVar8 == 1) {
        local_78[0] = CONCAT71(local_78[0]._1_7_,(char)*psVar11);
      }
      else if (sVar8 != 0) goto LAB_00100abb;
    }
    else {
      local_88 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_88,(ulong)&local_90);
      local_78[0] = local_90;
      psVar16 = local_88;
LAB_00100abb:
      memcpy(psVar16,psVar11,sVar8);
      psVar16 = local_88;
    }
    *(undefined1 *)((long)psVar16 + local_90) = 0;
    local_80 = local_90;
    std::__cxx11::string::_M_replace
              ((ulong)(this + 0x2a0),0,*(char **)(this + 0x2a8),(ulong)local_88);
    std::__cxx11::stringbuf::_M_sync((char *)(this + 600),*(ulong *)(this + 0x2a0),0);
    if (local_88 != local_78) {
      operator_delete(local_88,local_78[0] + 1);
    }
    std::istream::_M_extract<double>((double *)(this + 0x248));
    if (((byte)this[0x2e0] & 5) != 0) {
      if (bVar22) {
        if (300 < (int)(local_a0 + local_b4)) {
          *(undefined8 *)(param_3 + 0x20) = 0;
        }
      }
      else if (300 < (int)(local_a0 + local_b4)) {
        *(undefined8 *)(param_3 + 0x20) = 0x7ff0000000000000;
      }
    }
  }
  else {
LAB_00100340:
    bVar22 = false;
    if (-1 < (int)local_b4) goto LAB_00100203;
    uVar5 = -local_b4;
    bVar22 = (bool)(bVar19 & -0x17 < (int)local_b4);
    local_b4 = uVar5;
    if (bVar22) goto LAB_00100a14;
    uVar5 = param_2 - 0x46;
    bVar22 = true;
    local_b0 = 0.0;
    bVar19 = false;
    if (uVar5 < 0x27) goto LAB_0010022f;
LAB_00100390:
    bVar3 = false;
    (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x20))();
    bVar1 = false;
LAB_001003a8:
    if (0x400 < param_1) goto LAB_00100462;
    param_3[(long)param_1 + 0x28] = (TPpToken)0x0;
    if (!bVar19) goto LAB_001004a0;
LAB_001003c6:
    dVar23 = (double)uVar7;
    if (local_b0 != 0.0) {
      if (!bVar22) {
        *(double *)(param_3 + 0x20) = dVar23 * local_b0;
        goto LAB_00100402;
      }
      dVar23 = dVar23 / local_b0;
    }
    *(double *)(param_3 + 0x20) = dVar23;
  }
LAB_00100402:
  iVar20 = 0x9f;
  if (!bVar3) {
    iVar20 = (-(uint)!bVar1 & 0xfffffffe) + 0xa0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar20;
  }
LAB_00100bde:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* glslang::TPpContext::tStringInput::scan(glslang::TPpToken*) */

ulong __thiscall glslang::TPpContext::tStringInput::scan(tStringInput *this,TPpToken *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  TPpContext *this_00;
  TPpToken TVar13;
  int iVar14;
  long lVar15;
  bool bVar16;
  int iVar17;
  ulong uVar18;
  
  bVar2 = false;
  param_1[0x28] = (TPpToken)0x0;
  lVar9 = *(long *)this;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  uVar5 = (**(code **)(lVar9 + 0x18))();
  uVar8 = (ulong)uVar5;
LAB_00100c3d:
  do {
    iVar6 = (int)uVar8;
    bVar16 = iVar6 == 0x20 || iVar6 == 9;
    if (iVar6 != 0x20 && iVar6 != 9) {
LAB_00100c55:
      lVar9 = *(long *)(*(long *)(*(long *)(this + 0x10) + 0x100) + 0xd8);
      puVar10 = (undefined8 *)(lVar9 + 0x40);
      if (*(char *)(lVar9 + 0x58) == '\0') {
        puVar10 = *(undefined8 **)(lVar9 + 0x30);
        iVar6 = (*(int *)(lVar9 + 8) - *(int *)(lVar9 + 0x3c)) + -1;
        if (*(int *)(lVar9 + 0x20) < iVar6) {
          iVar6 = *(int *)(lVar9 + 0x20);
        }
        if (0 < iVar6) {
          puVar10 = puVar10 + (long)iVar6 * 3;
        }
      }
      uVar3 = puVar10[1];
      *(undefined8 *)param_1 = *puVar10;
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(undefined8 *)(param_1 + 0x10) = puVar10[2];
      iVar6 = (int)param_1;
      switch((int)uVar8) {
      case 0x21:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x3d) {
          return 0x91;
        }
        goto LAB_00100e10;
      case 0x22:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if ((iVar6 == 10) || (iVar6 == 0x22)) {
          lVar9 = 0;
          goto LAB_001015e0;
        }
        lVar15 = 1;
        if (iVar6 != -1) goto LAB_00100f85;
        param_1[0x28] = (TPpToken)0x0;
        goto LAB_00101793;
      default:
        if ((int)uVar8 < 0x81) {
          return uVar8;
        }
        return 0x80;
      case 0x25:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x3d) {
          return 0x85;
        }
        goto LAB_00100e10;
      case 0x26:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x26) {
          return 0x8d;
        }
        if (iVar6 == 0x3d) {
          return 0x8a;
        }
        goto LAB_00100e10;
      case 0x27:
        param_1[0x28] = (TPpToken)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        return uVar8;
      case 0x2a:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x3d) {
          return 0x83;
        }
        goto LAB_00100e10;
      case 0x2b:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x2b) {
          return 0x95;
        }
        if (iVar6 == 0x3d) {
          return 0x81;
        }
        goto LAB_00100e10;
      case 0x2d:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x2d) {
          return 0x94;
        }
        if (iVar6 == 0x3d) {
          return 0x82;
        }
        goto LAB_00100e10;
      case 0x2e:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        lVar9 = *(long *)this;
        if (9 < iVar6 - 0x30U) goto LAB_00100e16;
        (**(code **)(lVar9 + 0x20))(this);
        this_00 = *(TPpContext **)(this + 0x10);
        uVar5 = 0x2e;
        iVar17 = 0;
        goto LAB_00101054;
      case 0x2f:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 != 0x2f) {
          if (iVar6 == 0x2a) {
            do {
              while (iVar6 = (**(code **)(*(long *)this + 0x18))(this), iVar6 == 0x2a) {
                do {
                  iVar6 = (**(code **)(*(long *)this + 0x18))(this);
                  if (iVar6 == -1) goto LAB_0010109b;
                  if (iVar6 == 0x2f) goto LAB_00100d38;
                } while (iVar6 == 0x2a);
              }
            } while (iVar6 != -1);
LAB_0010109b:
            (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
                      (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,"End of input in comment",
                       "comment",&_LC0);
            return 0xffffffff;
          }
          if (iVar6 == 0x3d) {
            return 0x84;
          }
LAB_00100e10:
          lVar9 = *(long *)this;
LAB_00100e16:
          (**(code **)(lVar9 + 0x20))(this);
          return uVar8;
        }
        *(undefined1 *)(*(long *)(this + 0x10) + 0x1b0) = 1;
        break;
      case 0x30:
        param_1[0x28] = (TPpToken)0x30;
        uVar5 = (**(code **)(*(long *)this + 0x18))(this);
        if ((uVar5 & 0xffffffdf) != 0x58) {
          bVar4 = false;
          uVar8 = 0;
          iVar17 = 1;
          while (uVar5 - 0x30 < 8) {
            if (iVar17 < 0x400) {
              lVar9 = (long)iVar17;
              iVar17 = iVar17 + 1;
              param_1[lVar9 + 0x28] = SUB41(uVar5,0);
            }
            else {
              if (!bVar2) {
                (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
                          (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,
                           "numeric literal too long",&_LC0);
              }
              bVar2 = true;
            }
            if (uVar8 < 0x2000000000000000) {
              uVar8 = uVar8 << 3 | (long)(int)(uVar5 - 0x30);
            }
            else {
              bVar4 = true;
            }
            uVar5 = (**(code **)(*(long *)this + 0x18))(this);
          }
          if (uVar5 - 0x38 < 2) {
            do {
              if (iVar17 < 0x400) {
                lVar9 = (long)iVar17;
                iVar17 = iVar17 + 1;
                param_1[lVar9 + 0x28] = SUB41(uVar5,0);
              }
              else {
                if (!bVar2) {
                  (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
                            (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,
                             "numeric literal too long",&_LC0);
                }
                bVar2 = true;
              }
              uVar5 = (**(code **)(*(long *)this + 0x18))(this);
            } while (uVar5 - 0x30 < 10);
            this_00 = *(TPpContext **)(this + 0x10);
            if ((uVar5 - 0x2e < 0x3b) &&
               ((0x580000005800001U >> ((ulong)(uVar5 - 0x2e) & 0x3f) & 1) != 0)) goto LAB_00101054;
            (**(code **)(**(long **)(this_00 + 0x100) + 0x168))
                      (*(long **)(this_00 + 0x100),param_1,"octal literal digit too large",&_LC0);
          }
          else if ((uVar5 - 0x2e < 0x3b) &&
                  ((0x580000005800001U >> ((ulong)(uVar5 - 0x2e) & 0x3f) & 1) != 0)) {
            this_00 = *(TPpContext **)(this + 0x10);
LAB_00101054:
            uVar8 = lFloatConst(this_00,iVar17,uVar5,param_1);
            return uVar8;
          }
          bVar2 = uVar8 >> 0x20 != 0;
          if (uVar5 - 0x4c < 0x2a) {
            uVar7 = 1L << ((byte)(uVar5 - 0x4c) & 0x3f);
            TVar13 = SUB41(uVar5,0);
            if ((uVar7 & 0x8000000080) != 0) {
              bVar2 = (bool)(bVar2 | bVar4);
              if (iVar17 < 0x400) {
                param_1[(long)iVar17 + 0x28] = TVar13;
                param_1[(long)(iVar17 + 1) + 0x28] = (TPpToken)0x0;
              }
              else {
                param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
              }
              iVar17 = 0;
              if (!bVar2) {
                iVar17 = 0;
                goto LAB_001019f6;
              }
              goto LAB_001019ae;
            }
            if ((uVar7 & 0x100000001) != 0) {
              if (iVar17 < 0x400) {
                param_1[(long)iVar17 + 0x28] = TVar13;
                param_1[(long)(iVar17 + 1) + 0x28] = (TPpToken)0x0;
              }
              else {
                param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
              }
              if (!bVar4) {
                iVar17 = 0;
                goto LAB_00101df2;
              }
              bVar2 = false;
              iVar17 = 0;
              bVar16 = true;
              goto LAB_001019ae;
            }
            if ((uVar7 & 0x20000000200) == 0) goto LAB_00101ee6;
            if (iVar17 < 0x400) {
              iVar11 = iVar17 + 1;
              param_1[(long)iVar17 + 0x28] = TVar13;
              uVar5 = (**(code **)(*(long *)this + 0x18))(this);
              if ((uVar5 & 0xffffffdf) != 0x4c) goto LAB_00102206;
              if (iVar11 == 0x400) {
                iVar17 = 0x400;
                goto LAB_00102185;
              }
              param_1[(long)iVar11 + 0x28] = SUB41(uVar5,0);
              bVar16 = true;
              iVar17 = iVar17 + 2;
LAB_0010195f:
              uVar5 = (**(code **)(*(long *)this + 0x18))(this);
              if ((uVar5 & 0xffffffdf) != 0x53) goto LAB_001021ca;
              bVar2 = true;
              if (iVar17 < 0x400) {
                lVar9 = (long)iVar17;
                bVar2 = true;
                iVar17 = iVar17 + 1;
                param_1[lVar9 + 0x28] = SUB41(uVar5,0);
              }
            }
            else {
              uVar5 = (**(code **)(*(long *)this + 0x18))(this);
              iVar11 = iVar17;
              if ((uVar5 & 0xffffffdf) != 0x4c) {
LAB_00102206:
                bVar16 = false;
                (**(code **)(*(long *)this + 0x20))(this);
                bVar4 = (bool)(bVar4 | bVar2);
                iVar17 = iVar11;
                goto LAB_0010195f;
              }
LAB_00102185:
              uVar5 = (**(code **)(*(long *)this + 0x18))(this);
              if ((uVar5 & 0xffffffdf) == 0x53) {
                param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
                iVar17 = 1;
                if (!bVar4) goto LAB_00101df2;
                iVar17 = 1;
                bVar2 = bVar4;
                bVar16 = bVar4;
                goto LAB_001019ae;
              }
              bVar16 = true;
LAB_001021ca:
              bVar2 = false;
              (**(code **)(*(long *)this + 0x20))(this);
            }
            param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
            iVar17 = 1;
            if (bVar4) goto LAB_001019ae;
          }
          else {
LAB_00101ee6:
            (**(code **)(*(long *)this + 0x20))(this);
            param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
            if ((!bVar4) && (!bVar2)) {
              iVar17 = 0;
              goto LAB_00101dbf;
            }
            bVar2 = false;
            iVar17 = 0;
LAB_001019ae:
            (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
                      (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,"octal literal too big",
                       &_LC0);
          }
          if (bVar16) {
LAB_00101df2:
            if (*(int *)(*(long *)(this + 0x10) + 0x138) == 0) {
              glslang::TParseVersions::requireProfile
                        (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,(char *)0xfffffff7);
              glslang::TParseVersions::profileRequires
                        (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,-9,0,(char **)0x3,
                         scan(glslang::TPpToken*)::Int64_Extensions);
            }
            *(ulong *)(param_1 + 0x20) = uVar8;
            return (ulong)(iVar17 + 0x9a);
          }
          if (bVar2) {
LAB_001019f6:
            if (*(int *)(*(long *)(this + 0x10) + 0x138) == 0) {
              glslang::TParseVersions::requireProfile
                        (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,(char *)0xfffffff7);
              glslang::TParseVersions::profileRequires
                        (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,-9,0,(char **)0x3,
                         scan(glslang::TPpToken*)::Int16_Extensions);
            }
            *(int *)(param_1 + 0x20) = (int)uVar8;
            return (ulong)(iVar17 + 0x9c);
          }
LAB_00101dbf:
          *(int *)(param_1 + 0x20) = (int)uVar8;
          return (ulong)(iVar17 + 0x98);
        }
        param_1[0x29] = SUB41(uVar5,0);
        iVar17 = (**(code **)(*(long *)this + 0x18))(this);
        uVar5 = iVar17 - 0x30;
        if ((uVar5 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
          uVar8 = (ulong)uVar5;
          uVar7 = 0;
          uVar18 = 2;
          do {
            iVar11 = (int)uVar18;
            if ((iVar11 < 0x400) && (-1 < (long)uVar7)) {
              param_1[uVar18 + 0x28] = SUB41(iVar17,0);
              uVar5 = (uint)uVar8;
              if (9 < (uint)uVar8) {
                uVar5 = iVar17 - 0x37;
                if (5 < iVar17 - 0x41U) {
                  uVar5 = iVar17 - 0x57;
                }
              }
              uVar18 = (ulong)(iVar11 + 1);
              uVar7 = uVar7 << 4 | (long)(int)uVar5;
            }
            else {
              if (!bVar2) {
                plVar1 = *(long **)(*(long *)(this + 0x10) + 0x100);
                if (iVar11 < 0x400) {
                  (**(code **)(*plVar1 + 0x168))(plVar1,param_1,"hexadecimal literal too big");
                }
                else {
                  (**(code **)(*plVar1 + 0x168))
                            (plVar1,param_1,"hexadecimal literal too long",&_LC0);
                }
              }
              uVar7 = 0xffffffffffffffff;
              bVar2 = true;
            }
            iVar17 = (**(code **)(*(long *)this + 0x18))(this);
            uVar8 = (ulong)(iVar17 - 0x30U);
          } while ((iVar17 - 0x30U < 0x37) && ((0x7e0000007e03ffU >> (uVar8 & 0x3f) & 1) != 0));
          TVar13 = SUB41(iVar17,0);
          uVar12 = (undefined4)uVar7;
          if (0x29 < iVar17 - 0x4cU) {
LAB_00101d4c:
            bVar16 = (bool)(uVar7 >> 0x20 != 0 & (bVar2 ^ 1U));
LAB_00101d60:
            uVar8 = 0x98;
            (**(code **)(*(long *)this + 0x20))(this);
            param_1[(long)(int)uVar18 + 0x28] = (TPpToken)0x0;
LAB_00101d83:
            if (bVar16) {
              (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
                        (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,
                         "hexadecimal literal too big",&_LC0);
            }
LAB_00101db3:
            *(undefined4 *)(param_1 + 0x20) = uVar12;
            return uVar8;
          }
          uVar8 = 1L << ((byte)(iVar17 - 0x4cU) & 0x3f);
          iVar17 = (int)uVar18;
          if ((uVar8 & 0x8000000080) != 0) {
            if (iVar17 < 0x400) {
LAB_001020ed:
              param_1[(long)(int)uVar18 + 0x28] = TVar13;
              param_1[(long)((int)uVar18 + 1) + 0x28] = (TPpToken)0x0;
            }
            else {
              param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
            }
            uVar8 = 0x9c;
LAB_00102081:
            if (*(int *)(*(long *)(this + 0x10) + 0x138) == 0) {
              glslang::TParseVersions::requireProfile
                        (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,(char *)0xfffffff7);
              glslang::TParseVersions::profileRequires
                        (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,-9,0,(char **)0x3,
                         scan(glslang::TPpToken*)::Int16_Extensions);
            }
            goto LAB_00101db3;
          }
          if ((uVar8 & 0x100000001) == 0) {
            if ((uVar8 & 0x20000000200) == 0) goto LAB_00101d4c;
            if (iVar17 < 0x400) {
              lVar9 = (long)iVar17;
              uVar18 = (ulong)(iVar17 + 1);
LAB_00102114:
              param_1[lVar9 + 0x28] = TVar13;
            }
            uVar5 = (**(code **)(*(long *)this + 0x18))(this);
            iVar17 = (int)uVar18;
            if ((uVar5 & 0xffffffdf) != 0x4c) {
              (**(code **)(*(long *)this + 0x20))(this);
              uVar5 = (**(code **)(*(long *)this + 0x18))(this);
              uVar12 = (undefined4)uVar7;
              if ((uVar5 & 0xffffffdf) == 0x53) {
                if (iVar17 < 0x400) {
                  uVar8 = 0x9d;
                  param_1[(long)iVar17 + 0x28] = SUB41(uVar5,0);
                  param_1[(long)(iVar17 + 1) + 0x28] = (TPpToken)0x0;
                }
                else {
                  uVar8 = 0x9d;
                  param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
                }
                goto LAB_00102081;
              }
              (**(code **)(*(long *)this + 0x20))(this);
              param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
              bVar16 = (bool)(uVar7 >> 0x20 != 0 & (bVar2 ^ 1U));
              uVar8 = 0x99;
              goto LAB_00101d83;
            }
            if (iVar17 < 0x400) {
              iVar11 = iVar17 + 1;
              param_1[(long)iVar17 + 0x28] = SUB41(uVar5,0);
              uVar5 = (**(code **)(*(long *)this + 0x18))(this);
              if ((uVar5 & 0xffffffdf) != 0x53) {
LAB_00102302:
                (**(code **)(*(long *)this + 0x20))(this);
                param_1[(long)iVar11 + 0x28] = (TPpToken)0x0;
                uVar8 = 0x9b;
                goto LAB_00101afb;
              }
              if (iVar11 != 0x400) {
                param_1[(long)iVar11 + 0x28] = SUB41(uVar5,0);
                uVar8 = 0x9b;
                param_1[(long)(iVar17 + 2) + 0x28] = (TPpToken)0x0;
                goto LAB_00101afb;
              }
              iVar17 = 0x400;
            }
            else {
              uVar5 = (**(code **)(*(long *)this + 0x18))(this);
              iVar11 = iVar17;
              if ((uVar5 & 0xffffffdf) != 0x53) goto LAB_00102302;
            }
            uVar8 = 0x9b;
            param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
LAB_00101afb:
            if (*(int *)(*(long *)(this + 0x10) + 0x138) == 0) {
              glslang::TParseVersions::requireProfile
                        (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,(char *)0xfffffff7);
              glslang::TParseVersions::profileRequires
                        (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,-9,0,(char **)0x3,
                         scan(glslang::TPpToken*)::Int64_Extensions);
            }
            *(ulong *)(param_1 + 0x20) = uVar7;
            return uVar8;
          }
          if (iVar17 < 0x400) {
LAB_00101bae:
            param_1[(long)(int)uVar18 + 0x28] = TVar13;
            param_1[(long)((int)uVar18 + 1) + 0x28] = (TPpToken)0x0;
          }
          else {
            param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
          }
          uVar8 = 0x9a;
          goto LAB_00101afb;
        }
        (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
                  (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,
                   "bad digit in hexadecimal literal",&_LC0);
        TVar13 = SUB41(iVar17,0);
        if (0x29 < iVar17 - 0x4cU) {
          uVar12 = 0;
          uVar18 = 2;
          goto LAB_00101d60;
        }
        uVar8 = 1L << ((byte)(iVar17 - 0x4cU) & 0x3f);
        if ((uVar8 & 0x20000000200) != 0) {
          uVar18 = 3;
          uVar7 = 0;
          lVar9 = 2;
          goto LAB_00102114;
        }
        if ((uVar8 & 0x8000000080) != 0) {
          uVar12 = 0;
          uVar18 = 2;
          goto LAB_001020ed;
        }
        uVar7 = 0;
        uVar12 = 0;
        uVar18 = 2;
        if ((uVar8 & 0x100000001) == 0) goto LAB_00101d60;
        goto LAB_00101bae;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        iVar17 = 0;
        do {
          if (iVar17 < 0x400) {
            lVar9 = (long)iVar17;
            iVar17 = iVar17 + 1;
            param_1[lVar9 + 0x28] = SUB81(uVar8,0);
          }
          else {
            if (!bVar2) {
              (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
                        (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,
                         "numeric literal too long",&_LC0);
            }
            bVar2 = true;
          }
          uVar7 = (**(code **)(*(long *)this + 0x18))(this);
          uVar8 = uVar7 & 0xffffffff;
          uVar5 = (uint)uVar7;
        } while (uVar5 - 0x30 < 10);
        if ((uVar5 - 0x2e < 0x3b) &&
           ((0x580000005800001U >> ((ulong)(uVar5 - 0x2e) & 0x3f) & 1) != 0)) {
          this_00 = *(TPpContext **)(this + 0x10);
          goto LAB_00101054;
        }
        if (uVar5 - 0x4c < 0x2a) {
          uVar7 = 1L << ((byte)(uVar5 - 0x4c) & 0x3f);
          TVar13 = SUB81(uVar8,0);
          if ((uVar7 & 0x8000000080) != 0) {
            if (iVar17 < 0x400) {
              param_1[(long)iVar17 + 0x28] = TVar13;
              iVar11 = 0;
              iVar14 = 0;
              uVar8 = 0;
              bVar2 = true;
              param_1[(long)(iVar17 + 1) + 0x28] = (TPpToken)0x0;
              if (iVar17 < 1) goto LAB_00101570;
            }
            else {
              param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
              iVar11 = 0;
              bVar2 = true;
            }
            goto LAB_001014b1;
          }
          if ((uVar7 & 0x100000001) != 0) {
            if (iVar17 < 0x400) {
              param_1[(long)iVar17 + 0x28] = TVar13;
              uVar8 = 0;
              iVar14 = 0;
              param_1[(long)(iVar17 + 1) + 0x28] = (TPpToken)0x0;
              if (iVar17 < 1) goto LAB_00101bec;
            }
            else {
              param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
            }
            bVar2 = false;
            iVar11 = 0;
            bVar16 = true;
            goto LAB_001014b1;
          }
          if ((uVar7 & 0x20000000200) == 0) goto LAB_00101c10;
          if (iVar17 < 0x400) {
            iVar14 = iVar17 + 1;
            param_1[(long)iVar17 + 0x28] = TVar13;
            uVar5 = (**(code **)(*(long *)this + 0x18))(this);
            if ((uVar5 & 0xffffffdf) == 0x4c) {
              if (iVar14 == 0x400) goto LAB_00101e4f;
              bVar16 = true;
              param_1[(long)iVar14 + 0x28] = SUB41(uVar5,0);
              iVar14 = iVar17 + 2;
            }
            else {
LAB_00101e2a:
              bVar16 = false;
              (**(code **)(*(long *)this + 0x20))(this);
            }
            uVar5 = (**(code **)(*(long *)this + 0x18))(this);
            if ((uVar5 & 0xffffffdf) != 0x53) goto LAB_00101e16;
            bVar2 = true;
            if (iVar14 < 0x400) {
              lVar9 = (long)iVar14;
              bVar2 = true;
              iVar14 = iVar14 + 1;
              param_1[lVar9 + 0x28] = SUB41(uVar5,0);
            }
          }
          else {
            uVar5 = (**(code **)(*(long *)this + 0x18))(this);
            iVar14 = iVar17;
            if ((uVar5 & 0xffffffdf) != 0x4c) goto LAB_00101e2a;
LAB_00101e4f:
            bVar16 = true;
            uVar5 = (**(code **)(*(long *)this + 0x18))(this);
            if ((uVar5 & 0xffffffdf) == 0x53) {
              iVar11 = 1;
              bVar2 = true;
              bVar16 = true;
              param_1[(long)iVar14 + 0x28] = (TPpToken)0x0;
              goto LAB_001014b1;
            }
LAB_00101e16:
            (**(code **)(*(long *)this + 0x20))(this);
            bVar2 = false;
          }
          iVar11 = 1;
          param_1[(long)iVar14 + 0x28] = (TPpToken)0x0;
          uVar8 = 0;
          iVar14 = iVar11;
          if (0 < iVar17) goto LAB_001014b1;
        }
        else {
LAB_00101c10:
          iVar11 = 0;
          iVar14 = 0;
          uVar8 = 0;
          (**(code **)(*(long *)this + 0x20))(this);
          bVar2 = false;
          param_1[(long)iVar17 + 0x28] = (TPpToken)0x0;
          if (iVar17 < 1) goto LAB_00101c3e;
LAB_001014b1:
          lVar9 = 0;
          uVar8 = 0;
          do {
            uVar5 = (int)(char)param_1[lVar9 + 0x28] - 0x30;
            iVar14 = iVar11;
            if (bVar16) {
              if (0x1999999999999999 < uVar8) goto LAB_00101516;
              if (uVar8 == 0x1999999999999999) {
joined_r0x00101634:
                if (5 < uVar5) goto LAB_00101516;
              }
            }
            else if (bVar2) {
              if ((0x1999 < uVar8) || ((uVar8 == 0x1999 && (5 < (ushort)uVar5)))) {
LAB_00101516:
                uVar8 = 0xffffffffffffffff;
                (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
                          (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,
                           "numeric literal too big",&_LC0);
                break;
              }
            }
            else {
              if (0x19999999 < uVar8) goto LAB_00101516;
              if (uVar8 == 0x19999999) goto joined_r0x00101634;
            }
            lVar9 = lVar9 + 1;
            uVar8 = (long)(int)uVar5 + uVar8 * 10;
          } while ((int)lVar9 < iVar17);
        }
        if (bVar16) {
LAB_00101bec:
          if (*(int *)(*(long *)(this + 0x10) + 0x138) == 0) {
            glslang::TParseVersions::requireProfile
                      (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,(char *)0xfffffff7);
            glslang::TParseVersions::profileRequires
                      (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,-9,0,(char **)0x3,
                       scan(glslang::TPpToken*)::Int64_Extensions);
          }
          *(ulong *)(param_1 + 0x20) = uVar8;
          return (ulong)(iVar14 + 0x9a);
        }
        if (bVar2) {
LAB_00101570:
          if (*(int *)(*(long *)(this + 0x10) + 0x138) == 0) {
            glslang::TParseVersions::requireProfile
                      (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,(char *)0xfffffff7);
            glslang::TParseVersions::profileRequires
                      (*(TSourceLoc **)(*(long *)(this + 0x10) + 0x100),iVar6,-9,0,(char **)0x3,
                       scan(glslang::TPpToken*)::Int16_Extensions);
          }
          *(int *)(param_1 + 0x20) = (int)uVar8;
          return (ulong)(iVar14 + 0x9c);
        }
LAB_00101c3e:
        *(int *)(param_1 + 0x20) = (int)uVar8;
        return (ulong)(iVar14 + 0x98);
      case 0x3a:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x3a) {
          return 0x96;
        }
        goto LAB_00100e10;
      case 0x3c:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x3c) {
          iVar6 = (**(code **)(*(long *)this + 0x18))(this);
          if (iVar6 == 0x3d) {
            return 0x89;
          }
          (**(code **)(*(long *)this + 0x20))(this);
          return 0x87;
        }
        if (iVar6 == 0x3d) {
          return 0x93;
        }
        goto LAB_00100e10;
      case 0x3d:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x3d) {
          return 0x90;
        }
        goto LAB_00100e10;
      case 0x3e:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x3e) {
          iVar6 = (**(code **)(*(long *)this + 0x18))(this);
          if (iVar6 == 0x3d) {
            return 0x88;
          }
          (**(code **)(*(long *)this + 0x20))(this);
          return 0x86;
        }
        if (iVar6 == 0x3d) {
          return 0x92;
        }
        goto LAB_00100e10;
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
        lVar9 = 0;
        do {
          iVar6 = (int)lVar9;
          if (iVar6 < 0x400) {
            param_1[lVar9 + 0x28] = SUB81(uVar8,0);
            iVar6 = iVar6 + 1;
            uVar5 = (**(code **)(*(long *)this + 0x18))(this);
            uVar8 = (ulong)uVar5;
            if (uVar5 != 0x5f) goto LAB_00100ceb;
          }
          else {
            if (!bVar2) {
              (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
                        (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,"name too long",&_LC0);
            }
            do {
              bVar2 = true;
              uVar5 = (**(code **)(*(long *)this + 0x18))(this);
              uVar8 = (ulong)uVar5;
            } while (uVar5 == 0x5f);
LAB_00100ceb:
            iVar17 = (int)uVar8;
            if (iVar17 < 0x60) {
              if (iVar17 < 0x3a) {
                if (0x2f < iVar17) goto LAB_001011ee;
                if (iVar6 != 0) goto LAB_00100d16;
                goto LAB_00100c3d;
              }
              uVar5 = iVar17 - 0x41;
            }
            else {
              uVar5 = iVar17 - 0x61;
            }
            if (0x19 < uVar5) goto LAB_00100d0d;
          }
LAB_001011ee:
          lVar9 = (long)iVar6;
        } while( true );
      case 0x5e:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x5e) {
          return 0x8f;
        }
        if (iVar6 == 0x3d) {
          return 0x8c;
        }
        goto LAB_00100e10;
      case 0x7c:
        iVar6 = (**(code **)(*(long *)this + 0x18))(this);
        if (iVar6 == 0x7c) {
          return 0x8e;
        }
        if (iVar6 == 0x3d) {
          return 0x8b;
        }
        goto LAB_00100e10;
      }
      goto LAB_0010234d;
    }
LAB_00100d38:
    lVar9 = *(long *)this;
    param_1[0x18] = (TPpToken)0x1;
    uVar5 = (**(code **)(lVar9 + 0x18))(this);
    uVar8 = (ulong)uVar5;
  } while( true );
LAB_00100d0d:
  if (iVar6 != 0) {
LAB_00100d16:
    param_1[(long)iVar6 + 0x28] = (TPpToken)0x0;
    (**(code **)(*(long *)this + 0x20))(this);
    return 0xa2;
  }
  goto LAB_00100c55;
LAB_00100f85:
  if (iVar6 != 0x5c) goto LAB_00100f48;
  if (*(char *)(*(long *)(this + 0x10) + 0x3c8) != '\0') goto switchD_00101669_caseD_5c;
  iVar6 = (**(code **)(*(long *)this + 0x18))(this);
  switch(iVar6) {
  case 0x22:
    iVar6 = 0x22;
    break;
  default:
    (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
              (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,"Invalid escape sequence","string"
               ,&_LC0);
  case 0x5c:
switchD_00101669_caseD_5c:
    iVar6 = 0x5c;
    break;
  case 0x27:
    iVar6 = 0x27;
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    iVar6 = iVar6 + -0x30;
    iVar17 = 2;
    while( true ) {
      iVar11 = (**(code **)(*(long *)this + 0x18))(this);
      if (7 < iVar11 - 0x30U) break;
      iVar6 = (iVar11 - 0x30U) + iVar6 * 8;
      if (iVar17 == 1) goto LAB_00100f48;
      iVar17 = 1;
    }
    (**(code **)(*(long *)this + 0x20))(this);
    break;
  case 0x3f:
    iVar6 = 0x3f;
    break;
  case 0x61:
    iVar6 = 7;
    break;
  case 0x62:
    iVar6 = 8;
    break;
  case 0x66:
    iVar6 = 0xc;
    break;
  case 0x6e:
    iVar6 = 10;
    break;
  case 0x72:
    iVar6 = 0xd;
    break;
  case 0x74:
    iVar6 = 9;
    break;
  case 0x76:
    iVar6 = 0xb;
    break;
  case 0x78:
    iVar17 = 0;
    iVar6 = 0;
    do {
      iVar11 = (**(code **)(*(long *)this + 0x18))(this);
      uVar5 = iVar11 - 0x30;
      if (9 < uVar5) {
        if (iVar11 - 0x41U < 6) {
          uVar5 = iVar11 - 0x37;
        }
        else {
          if (5 < iVar11 - 0x61U) goto LAB_00101d07;
          uVar5 = iVar11 - 0x57;
        }
      }
      iVar17 = iVar17 + 1;
      iVar6 = iVar6 * 0x10 + uVar5;
    } while( true );
  }
  goto LAB_00100f48;
LAB_00101d07:
  (**(code **)(*(long *)this + 0x20))(this);
  if (iVar17 == 0) {
    (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
              (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,
               "Expected hex value in escape sequence","string",&_LC0);
  }
LAB_00100f48:
  param_1[lVar15 + 0x27] = SUB41(iVar6,0);
  lVar9 = (long)(int)lVar15;
  iVar6 = (**(code **)(*(long *)this + 0x18))(this);
  if ((iVar6 == 0x22) || (iVar6 == 10)) goto LAB_001015e0;
  if (iVar6 == -1) goto LAB_0010178d;
  lVar15 = lVar15 + 1;
  if (lVar15 == 0x401) goto LAB_00101787;
  goto LAB_00100f85;
LAB_001015e0:
  param_1[lVar9 + 0x28] = (TPpToken)0x0;
  if (iVar6 == 0x22) {
    return 0xa1;
  }
  goto LAB_00101793;
  while (uVar5 != 0xffffffff) {
LAB_0010234d:
    uVar5 = (**(code **)(*(long *)this + 0x18))(this);
    if (uVar5 == 10) break;
  }
  lVar9 = *(long *)(this + 0x10);
  param_1[0x18] = (TPpToken)0x1;
  *(undefined1 *)(lVar9 + 0x1b0) = 0;
  return (ulong)uVar5;
LAB_00101787:
  lVar9 = 0x400;
LAB_0010178d:
  param_1[lVar9 + 0x28] = (TPpToken)0x0;
LAB_00101793:
  (**(code **)(*(long *)this + 0x20))(this);
  (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x100) + 0x168))
            (*(long **)(*(long *)(this + 0x10) + 0x100),param_1,"End of line in string","string",
             &_LC0);
  return 0xa1;
}



/* glslang::TPpContext::characterLiteral(glslang::TPpToken*) */

undefined8 __thiscall glslang::TPpContext::characterLiteral(TPpContext *this,TPpToken *param_1)

{
  param_1[0x28] = (TPpToken)0x0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 0x27;
}



/* glslang::TPpContext::missingEndifCheck() */

void __thiscall glslang::TPpContext::missingEndifCheck(TPpContext *this)

{
  if (0 < *(int *)(this + 0x138)) {
    missingEndifCheck(*(TPpContext **)(this + 0x100));
    return;
  }
  return;
}



/* glslang::TPpContext::tokenPaste(int, glslang::TPpToken&) [clone .part.0] */

int __thiscall glslang::TPpContext::tokenPaste(TPpContext *this,int param_1,TPpToken *param_2)

{
  TPpToken *__s;
  long *plVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  ulong uVar6;
  size_t *psVar7;
  long lVar8;
  uint uVar9;
  long in_FS_OFFSET;
  ulong local_4a8;
  size_t *local_4a0;
  size_t local_498;
  size_t local_490 [3];
  undefined8 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined2 local_460;
  undefined8 local_458;
  char local_450 [1040];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = *(long *)(this + 400);
  if (lVar8 != *(long *)(this + 0x188)) {
    while (cVar2 = (**(code **)(**(long **)(lVar8 + -8) + 0x28))(), cVar2 != '\0') {
      local_468 = 0;
      local_458 = 0;
      local_478 = 0;
      local_470 = 0;
      local_450[0] = '\0';
      local_460 = 0;
      scanToken(this,(TPpToken *)&local_478);
      if ((*(long *)(this + 400) == *(long *)(this + 0x188)) ||
         (cVar2 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x38))(), cVar2 != '\0')) {
        (**(code **)(**(long **)(this + 0x100) + 0x168))
                  (*(long **)(this + 0x100),param_2,"unexpected location; end of replacement list",
                   &_LC36,&_LC0);
        break;
      }
      do {
        iVar3 = scanToken(this,(TPpToken *)&local_478);
        if (iVar3 == -3) {
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),param_2,"unexpected location; end of argument",&_LC36,
                     &_LC0);
          goto LAB_001025d0;
        }
        if (0x5e < param_1) {
          uVar9 = param_1 - 0x7c;
          if (uVar9 < 0x27) {
            if ((1L << ((byte)uVar9 & 0x3f) & 0xe0c05U) != 0) goto LAB_00102650;
            if (uVar9 == 0x26) {
              sVar4 = strlen((char *)(param_2 + 0x28));
              sVar5 = strlen(local_450);
              if (0x400 < sVar5 + sVar4) goto LAB_00102860;
              snprintf((char *)(param_2 + 0x28 + sVar4),0x401 - sVar4,"%s",local_450);
              iVar3 = param_1;
              if (param_1 != 0xa2) goto LAB_001026f0;
              goto LAB_00102596;
            }
          }
LAB_00102768:
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),param_2,"not supported for these tokens",&_LC36,&_LC0)
          ;
          goto LAB_001025d0;
        }
        if ((param_1 < 0x21) || ((0x2000000038005631U >> ((ulong)(param_1 - 0x21) & 0x3f) & 1) == 0)
           ) goto LAB_00102768;
LAB_00102650:
        __s = param_2 + 0x28;
        snprintf((char *)__s,0x401,"%s",
                 *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)param_1 * 8) + 8));
        snprintf(local_450,0x401,"%s",
                 *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)iVar3 * 8) + 8));
        sVar4 = strlen((char *)__s);
        sVar5 = strlen(local_450);
        if (0x400 < sVar5 + sVar4) {
LAB_00102860:
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),param_2,"combined tokens are too long",&_LC36,&_LC0);
          goto LAB_001025d0;
        }
        snprintf((char *)(__s + sVar4),0x401 - sVar4,"%s",local_450);
LAB_001026f0:
        uVar6 = glslang::GetThreadPoolAllocator();
        local_4a8 = uVar6;
        local_4a0 = local_490;
        sVar4 = strlen((char *)(param_2 + 0x28));
        if (sVar4 < 0x10) {
          psVar7 = local_490;
          if (sVar4 == 1) {
            local_490[0] = CONCAT71(local_490[0]._1_7_,param_2[0x28]);
          }
          else if (sVar4 != 0) goto LAB_00102801;
        }
        else {
          local_4a0 = (size_t *)glslang::TPoolAllocator::allocate(uVar6);
          psVar7 = local_4a0;
          local_490[0] = sVar4;
LAB_00102801:
          memcpy(psVar7,param_2 + 0x28,sVar4);
          psVar7 = local_4a0;
        }
        *(undefined1 *)((long)psVar7 + sVar4) = 0;
        local_498 = sVar4;
        lVar8 = std::
                _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                ::find((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                        *)(this + 0x40),(basic_string *)&local_4a8);
        if ((lVar8 == 0) || (iVar3 = *(int *)(lVar8 + 0x30), *(int *)(lVar8 + 0x30) < 1)) {
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),param_2,"combined token is invalid",&_LC36,&_LC0);
          iVar3 = param_1;
        }
LAB_00102596:
        param_1 = iVar3;
        if (*(long *)(this + 400) == *(long *)(this + 0x188)) goto LAB_001025d0;
        plVar1 = *(long **)(*(long *)(this + 400) + -8);
        cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
      } while (cVar2 != '\0');
      lVar8 = *(long *)(this + 400);
      if (*(long *)(this + 0x188) == lVar8) break;
    }
  }
LAB_001025d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* glslang::TPpContext::tokenPaste(int, glslang::TPpToken&) */

void __thiscall glslang::TPpContext::tokenPaste(TPpContext *this,int param_1,TPpToken *param_2)

{
  if (param_1 != 0x97) {
    tokenPaste(this,param_1,param_2);
    return;
  }
  (**(code **)(**(long **)(this + 0x100) + 0x168))
            (*(long **)(this + 0x100),param_2,"unexpected location",&_LC36,&_LC0);
  scanToken(this,param_2);
  return;
}



/* glslang::TPpContext::tokenize(glslang::TPpToken&) */

int __thiscall glslang::TPpContext::tokenize(TPpContext *this,TPpToken *param_1)

{
  char cVar1;
  TPpToken TVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  char *local_48;
  char *pcStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
LAB_00102956:
  do {
    while( true ) {
      iVar3 = scanToken(this,param_1);
      iVar3 = tokenPaste(this,iVar3,param_1);
      if (iVar3 == -1) goto LAB_00102a08;
      if (iVar3 != 0x23) break;
      if (*(int *)(this + 0xf8) != 10) {
        (**(code **)(**(long **)(this + 0x100) + 0x168))
                  (*(long **)(this + 0x100),param_1,
                   "preprocessor directive cannot be preceded by another token",0x103e9d,&_LC0);
        goto LAB_00102a1e;
      }
      iVar3 = glslang::TPpContext::readCPPline((TPpToken *)this);
      if (iVar3 == -1) {
LAB_00102a08:
        if (0 < *(int *)(this + 0x138)) {
          missingEndifCheck(*(TPpContext **)(this + 0x100));
        }
LAB_00102a1e:
        iVar3 = -1;
LAB_00102a3f:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return iVar3;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    *(int *)(this + 0xf8) = iVar3;
  } while (iVar3 == 10);
  if (iVar3 == 0xa2) {
    iVar4 = glslang::TPpContext::MacroExpand((TPpToken *)this,SUB81(param_1,0),false);
    if (iVar4 == 1) goto LAB_00102a1e;
    if (iVar4 - 2U < 2) goto LAB_00102956;
LAB_00102a33:
    TVar2 = param_1[0x28];
  }
  else {
    if (iVar3 != 0xa1) {
      if (iVar3 < 0xa2) {
        if (iVar3 == 0x27) {
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),param_1,"character literals not supported",&_LC48,
                     &_LC0);
          goto LAB_00102956;
        }
        if (iVar3 - 0x98U < 9) goto LAB_00102a33;
      }
      snprintf((char *)(param_1 + 0x28),0x401,"%s",
               *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)iVar3 * 8) + 8));
      goto LAB_00102a3f;
    }
    if (*(int *)(this + 0x138) != 0) goto LAB_00102a3f;
    local_48 = "GL_EXT_debug_printf";
    pcStack_40 = "GL_EXT_spirv_intrinsics";
    (**(code **)(**(long **)(this + 0x100) + 0x28))
              (*(long **)(this + 0x100),param_1,2,&local_48,"string literal");
    cVar1 = (**(code **)(**(long **)(this + 0x100) + 0x40))
                      (*(long **)(this + 0x100),"GL_EXT_debug_printf");
    if (cVar1 != '\0') goto LAB_00102a3f;
    TVar2 = (TPpToken)
            (**(code **)(**(long **)(this + 0x100) + 0x40))
                      (*(long **)(this + 0x100),"GL_EXT_spirv_intrinsics");
  }
  if (TVar2 != (TPpToken)0x0) goto LAB_00102a3f;
  goto LAB_00102956;
}



/* glslang::TPpContext::tInput::peekPasting() */

undefined8 glslang::TPpContext::tInput::peekPasting(void)

{
  return 0;
}



/* glslang::TPpContext::tInput::peekContinuedPasting(int) */

undefined8 glslang::TPpContext::tInput::peekContinuedPasting(int param_1)

{
  return 0;
}



/* glslang::TPpContext::tInput::endOfReplacementList() */

undefined8 glslang::TPpContext::tInput::endOfReplacementList(void)

{
  return 0;
}



/* glslang::TPpContext::tInput::isMacroInput() */

undefined8 glslang::TPpContext::tInput::isMacroInput(void)

{
  return 0;
}



/* glslang::TPpContext::tInput::notifyActivated() */

void glslang::TPpContext::tInput::notifyActivated(void)

{
  return;
}



/* glslang::TPpContext::tInput::notifyDeleted() */

void glslang::TPpContext::tInput::notifyDeleted(void)

{
  return;
}



/* glslang::TPpContext::tStringInput::isStringInput() */

undefined8 glslang::TPpContext::tStringInput::isStringInput(void)

{
  return 1;
}



/* glslang::TPpContext::tStringInput::~tStringInput() */

void __thiscall glslang::TPpContext::tStringInput::~tStringInput(tStringInput *this)

{
  return;
}



/* glslang::TPpContext::tStringInput::~tStringInput() */

void __thiscall glslang::TPpContext::tStringInput::~tStringInput(tStringInput *this)

{
  operator_delete(this,0x20);
  return;
}



/* glslang::TInputScanner::get() */

uint __thiscall glslang::TInputScanner::get(TInputScanner *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  iVar2 = *(int *)(this + 8);
  iVar7 = *(int *)(this + 0x20);
  if (iVar7 < iVar2) {
    lVar10 = (long)iVar7;
    uVar11 = *(ulong *)(this + 0x28);
    lVar4 = *(long *)(this + 0x18);
    lVar6 = lVar10 * 8;
    uVar8 = uVar11;
    do {
      if (uVar8 < *(ulong *)(lVar4 + lVar6)) {
        lVar5 = *(long *)(this + 0x30);
        bVar1 = *(byte *)(*(long *)(*(long *)(this + 0x10) + lVar6) + uVar8);
        lVar6 = lVar5 + lVar10 * 0x18;
        *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
        *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
        uVar9 = (uint)bVar1;
        if (uVar9 == 10) {
          *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
          *(undefined4 *)(this + 0x50) = 0;
          *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
          *(undefined4 *)(lVar6 + 0x10) = 0;
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(this + 0x28) = uVar11;
        if (uVar11 < *(ulong *)(lVar4 + lVar10 * 8)) {
          return uVar9;
        }
        iVar7 = iVar7 + 1;
        *(int *)(this + 0x20) = iVar7;
        if (iVar7 < iVar2) {
          iVar3 = *(int *)(lVar6 + 8);
          lVar6 = lVar5 + 0x18 + lVar10 * 0x18;
          *(undefined8 *)(lVar6 + 0xc) = 1;
          *(int *)(lVar6 + 8) = iVar3 + 1;
        }
        lVar6 = (long)iVar7;
        goto LAB_00102f71;
      }
      lVar6 = lVar6 + 8;
      uVar8 = 0;
    } while (lVar6 != ((ulong)(uint)(iVar2 - iVar7) + lVar10) * 8);
  }
  else {
    this[0x59] = (TInputScanner)0x1;
  }
  return 0xffffffff;
LAB_00102f71:
  if ((iVar2 <= iVar7) || (*(long *)(lVar4 + lVar6 * 8) != 0)) {
LAB_00102f8c:
    *(undefined8 *)(this + 0x28) = 0;
    return uVar9;
  }
  iVar7 = (int)lVar6 + 1;
  *(int *)(this + 0x20) = iVar7;
  if (iVar2 <= (int)lVar6 + 1) goto LAB_00102f8c;
  lVar6 = (long)iVar7;
  lVar10 = lVar5 + lVar6 * 0x18;
  iVar3 = *(int *)(lVar5 + -0x10 + lVar6 * 0x18);
  *(undefined8 *)(lVar10 + 0xc) = 1;
  *(int *)(lVar10 + 8) = iVar3 + 1;
  goto LAB_00102f71;
}



/* glslang::TPpContext::tStringInput::getch() */

int __thiscall glslang::TPpContext::tStringInput::getch(tStringInput *this)

{
  TInputScanner *pTVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  TInputScanner *pTVar9;
  long lVar10;
  int iVar11;
  
  pTVar1 = *(TInputScanner **)(this + 0x18);
  iVar4 = TInputScanner::get(pTVar1);
  do {
    if (iVar4 != 0x5c) {
      if (iVar4 == 0xd) {
        pTVar1 = *(TInputScanner **)(this + 0x18);
        iVar4 = *(int *)(pTVar1 + 0x20);
        if (iVar4 < *(int *)(pTVar1 + 8)) {
          uVar8 = *(ulong *)(pTVar1 + 0x28);
          lVar6 = (long)iVar4 * 8;
          do {
            if (uVar8 < *(ulong *)(*(long *)(pTVar1 + 0x18) + lVar6)) {
              if (*(char *)(*(long *)(*(long *)(pTVar1 + 0x10) + lVar6) + uVar8) != '\n') {
                return 10;
              }
              TInputScanner::get(pTVar1);
              return 10;
            }
            lVar6 = lVar6 + 8;
            uVar8 = 0;
          } while (((ulong)(uint)(*(int *)(pTVar1 + 8) - iVar4) + (long)iVar4) * 8 != lVar6);
        }
        else {
          pTVar1[0x59] = (TInputScanner)0x1;
        }
      }
      else if (iVar4 != 10) {
        return iVar4;
      }
      return 10;
    }
    iVar4 = *(int *)(pTVar1 + 0x20);
    iVar11 = *(int *)(pTVar1 + 8);
    if (iVar11 <= iVar4) {
      pTVar1[0x59] = (TInputScanner)0x1;
      return 0x5c;
    }
    uVar8 = *(ulong *)(pTVar1 + 0x28);
    lVar6 = (long)iVar4 * 8;
    lVar10 = ((ulong)(uint)(iVar11 - iVar4) + (long)iVar4) * 8;
    lVar5 = lVar6;
    uVar7 = uVar8;
    do {
      if (uVar7 < *(ulong *)(*(long *)(pTVar1 + 0x18) + lVar5)) {
        if (*(char *)(*(long *)(*(long *)(pTVar1 + 0x10) + lVar5) + uVar7) == '\r')
        goto LAB_00103063;
        break;
      }
      lVar5 = lVar5 + 8;
      uVar7 = 0;
    } while (lVar5 != lVar10);
    while (*(ulong *)(*(long *)(pTVar1 + 0x18) + lVar6) <= uVar8) {
      lVar6 = lVar6 + 8;
      uVar8 = 0;
      if (lVar10 == lVar6) {
        return 0x5c;
      }
    }
    if (*(char *)(*(long *)(*(long *)(pTVar1 + 0x10) + lVar6) + uVar8) != '\n') {
      return 0x5c;
    }
LAB_00103063:
    pTVar9 = pTVar1 + 0x40;
    plVar2 = *(long **)(*(long *)(this + 0x10) + 0x100);
    if (pTVar1[0x58] == (TInputScanner)0x0) {
      pTVar9 = *(TInputScanner **)(pTVar1 + 0x30);
      iVar11 = (iVar11 - *(int *)(pTVar1 + 0x3c)) + -1;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
      if (0 < iVar11) {
        pTVar9 = pTVar9 + (long)iVar11 * 0x18;
      }
    }
    cVar3 = (**(code **)(*plVar2 + 0x1b0))
                      (plVar2,pTVar9,*(undefined1 *)(*(long *)(this + 0x10) + 0x1b0));
    if ((cVar3 == '\0') && (*(char *)(*(long *)(this + 0x10) + 0x1b0) != '\0')) {
      return 0x5c;
    }
    pTVar1 = *(TInputScanner **)(this + 0x18);
    iVar11 = TInputScanner::get(pTVar1);
    iVar4 = TInputScanner::get(pTVar1);
    if ((iVar11 == 0xd) && (iVar4 == 10)) {
      iVar4 = TInputScanner::get(pTVar1);
    }
  } while( true );
}



/* glslang::TInputScanner::unget() */

void __thiscall glslang::TInputScanner::unget(TInputScanner *this)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  if (this[0x59] == (TInputScanner)0x0) {
    iVar2 = *(int *)(this + 0x20);
    if (*(long *)(this + 0x28) == 0) {
      lVar3 = (long)(iVar2 + -1);
      do {
        lVar7 = *(long *)(*(long *)(this + 0x18) + lVar3 * 8);
        iVar2 = (int)lVar3;
        if (iVar2 < 1) {
          *(int *)(this + 0x20) = iVar2;
          if (lVar7 != 0) goto LAB_00103343;
          *(undefined8 *)(this + 0x28) = 0;
          goto LAB_0010326d;
        }
        lVar3 = lVar3 + -1;
      } while (lVar7 == 0);
      *(int *)(this + 0x20) = iVar2;
LAB_00103343:
      *(long *)(this + 0x28) = lVar7 + -1;
      iVar2 = *(int *)(this + 0x20);
    }
    else {
      lVar3 = *(long *)(this + 0x28) + -1;
      *(long *)(this + 0x28) = lVar3;
      lVar7 = *(long *)(this + 0x30) + (long)iVar2 * 0x18;
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
      if (*(int *)(lVar7 + 0x10) < 0) {
        if (lVar3 != 0) {
          lVar4 = lVar3;
          do {
            if (*(char *)(*(long *)(*(long *)(this + 0x10) + (long)iVar2 * 8) + lVar4) == '\n')
            goto LAB_0010332d;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        lVar4 = 0;
LAB_0010332d:
        iVar5 = (int)lVar3 - (int)lVar4;
        *(int *)(this + 0x50) = iVar5;
        *(int *)(lVar7 + 0x10) = iVar5;
      }
    }
LAB_0010326d:
    if (*(int *)(this + 8) <= iVar2) {
      this[0x59] = (TInputScanner)0x1;
      return;
    }
    lVar7 = (long)iVar2;
    uVar6 = *(ulong *)(this + 0x28);
    lVar3 = lVar7 * 8;
    do {
      if (uVar6 < *(ulong *)(*(long *)(this + 0x18) + lVar3)) {
        if (*(char *)(*(long *)(*(long *)(this + 0x10) + lVar3) + uVar6) != '\n') {
          return;
        }
        piVar1 = (int *)(*(long *)(this + 0x30) + 0xc + lVar7 * 0x18);
        *piVar1 = *piVar1 + -1;
        *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
        return;
      }
      lVar3 = lVar3 + 8;
      uVar6 = 0;
    } while (((ulong)(uint)(*(int *)(this + 8) - iVar2) + lVar7) * 8 != lVar3);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001034b5) */
/* glslang::TPpContext::tStringInput::ungetch() */

void __thiscall glslang::TPpContext::tStringInput::ungetch(tStringInput *this)

{
  char cVar1;
  int iVar2;
  TInputScanner *this_00;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  this_00 = *(TInputScanner **)(this + 0x18);
  TInputScanner::unget(this_00);
  iVar2 = *(int *)(this_00 + 0x20);
  iVar6 = *(int *)(this_00 + 8);
  if (iVar2 < iVar6) {
    lVar3 = *(long *)(this_00 + 0x18);
    do {
      lVar5 = (long)iVar2;
      uVar7 = *(ulong *)(this_00 + 0x28);
      while (*(ulong *)(lVar3 + lVar5 * 8) <= uVar7) {
        lVar5 = lVar5 + 1;
        uVar7 = 0;
        if (iVar6 <= (int)lVar5) {
          return;
        }
      }
      lVar4 = *(long *)(this_00 + 0x10);
      cVar1 = *(char *)(*(long *)(lVar4 + lVar5 * 8) + uVar7);
      if (cVar1 != '\r') {
        if (cVar1 != '\n') {
          return;
        }
        TInputScanner::unget(this_00);
        iVar6 = *(int *)(this_00 + 0x20);
        if (iVar6 < *(int *)(this_00 + 8)) {
          uVar7 = *(ulong *)(this_00 + 0x28);
          lVar5 = (long)iVar6 * 8;
          do {
            if (uVar7 < *(ulong *)(lVar3 + lVar5)) {
              if (*(char *)(*(long *)(lVar4 + lVar5) + uVar7) == '\r') goto LAB_00103440;
              break;
            }
            lVar5 = lVar5 + 8;
            uVar7 = 0;
          } while (((ulong)(uint)(*(int *)(this_00 + 8) - iVar6) + (long)iVar6) * 8 != lVar5);
        }
        else {
          this_00[0x59] = (TInputScanner)0x1;
        }
        TInputScanner::get(this_00);
      }
LAB_00103440:
      TInputScanner::unget(this_00);
      iVar6 = *(int *)(this_00 + 0x20);
      if (*(int *)(this_00 + 8) <= iVar6) {
        this_00[0x59] = (TInputScanner)0x1;
LAB_001034d1:
        TInputScanner::get(this_00);
        return;
      }
      uVar7 = *(ulong *)(this_00 + 0x28);
      lVar5 = (long)iVar6 * 8;
      while (*(ulong *)(lVar3 + lVar5) <= uVar7) {
        lVar5 = lVar5 + 8;
        uVar7 = 0;
        if (((ulong)(uint)(*(int *)(this_00 + 8) - iVar6) + (long)iVar6) * 8 == lVar5)
        goto LAB_001034d1;
      }
      if (*(char *)(*(long *)(lVar4 + lVar5) + uVar7) != '\\') goto LAB_001034d1;
      TInputScanner::unget(this_00);
      iVar2 = *(int *)(this_00 + 0x20);
      iVar6 = *(int *)(this_00 + 8);
    } while (iVar2 < iVar6);
  }
  this_00[0x59] = (TInputScanner)0x1;
  return;
}



/* std::_Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::__detail::_Select1st,
   std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::hash<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true> >::find(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) const */

long * __thiscall
std::
_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
::find(_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
       *this,basic_string *param_1)

{
  char cVar1;
  size_t sVar2;
  void *__s1;
  char *__s1_00;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  
  if (*(long *)(this + 0x20) == 0) {
    plVar10 = *(long **)(this + 0x18);
    if (plVar10 != (long *)0x0) {
      sVar2 = *(size_t *)(param_1 + 0x10);
      do {
        while (sVar2 == plVar10[3]) {
          if (sVar2 == 0) {
            return plVar10;
          }
          __s1 = *(void **)(param_1 + 8);
          do {
            iVar5 = memcmp(__s1,(void *)plVar10[2],sVar2);
            if (iVar5 == 0) {
              return plVar10;
            }
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) {
              return (long *)0x0;
            }
          } while (sVar2 == plVar10[3]);
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return (long *)0x0;
          }
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  else {
    sVar2 = *(size_t *)(param_1 + 0x10);
    __s1_00 = *(char **)(param_1 + 8);
    uVar11 = 0x811c9dc5;
    if (sVar2 != 0) {
      uVar6 = 0x811c9dc5;
      pcVar8 = __s1_00;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      } while (pcVar8 != __s1_00 + sVar2);
      uVar11 = (ulong)uVar6;
    }
    uVar3 = *(ulong *)(this + 0x10);
    uVar9 = uVar11 % uVar3;
    plVar10 = *(long **)(*(long *)(this + 8) + uVar9 * 8);
    if (plVar10 != (long *)0x0) {
      uVar7 = ((long *)*plVar10)[7];
      plVar12 = (long *)*plVar10;
      do {
        if (((uVar11 == uVar7) && (sVar2 == plVar12[3])) &&
           ((sVar2 == 0 || (iVar5 = memcmp(__s1_00,(void *)plVar12[2],sVar2), iVar5 == 0)))) {
          return (long *)*plVar10;
        }
        plVar4 = (long *)*plVar12;
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar4[7];
        plVar10 = plVar12;
        plVar12 = plVar4;
      } while (uVar9 == uVar7 % uVar3);
    }
    plVar10 = (long *)0x0;
  }
  return plVar10;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<int, std::allocator<int> >::_M_realloc_insert<int
   const&>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&)
    */

void __thiscall
std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
          (vector<int,std::allocator<int>> *this,void *param_2,undefined4 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00103c30;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_00103c3a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00103c30:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_00103c3a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_00103c3a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00103c0b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00103c0b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<glslang::TSourceLoc, std::allocator<glslang::TSourceLoc>
   >::_M_realloc_insert<glslang::TSourceLoc
   const&>(__gnu_cxx::__normal_iterator<glslang::TSourceLoc*, std::vector<glslang::TSourceLoc,
   std::allocator<glslang::TSourceLoc> > >, glslang::TSourceLoc const&) */

void __thiscall
std::vector<glslang::TSourceLoc,std::allocator<glslang::TSourceLoc>>::
_M_realloc_insert<glslang::TSourceLoc_const&>
          (vector<glslang::TSourceLoc,std::allocator<glslang::TSourceLoc>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  void *__dest_00;
  ulong uVar6;
  size_t __n;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  lVar4 = (long)pvVar1 - (long)__src >> 3;
  uVar5 = lVar4 * -0x5555555555555555;
  if (uVar5 == 0x555555555555555) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    uVar6 = uVar5 + 1;
    if (0xfffffffffffffffe < uVar5) goto LAB_00103dd0;
    if (0x555555555555555 < uVar6) {
      uVar6 = 0x555555555555555;
    }
    uVar6 = uVar6 * 0x18;
LAB_00103dda:
    __dest_00 = operator_new(uVar6);
    lVar4 = uVar6 + (long)__dest_00;
  }
  else {
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5) {
LAB_00103dd0:
      uVar6 = 0x7ffffffffffffff8;
      goto LAB_00103dda;
    }
    if (uVar6 != 0) {
      if (0x555555555555555 < uVar6) {
        uVar6 = 0x555555555555555;
      }
      uVar6 = uVar6 * 0x18;
      goto LAB_00103dda;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  __dest = (void *)((long)__dest_00 + __n + 0x18);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n + 0x10) = param_3[2];
  *(undefined8 *)((long)__dest_00 + __n) = uVar2;
  ((undefined8 *)((long)__dest_00 + __n))[1] = uVar3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00103db6;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00103db6:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* glslang::TPpContext::scanToken(glslang::TPpToken*) */

int __thiscall glslang::TPpContext::scanToken(TPpContext *this,TPpToken *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char cVar11;
  long in_FS_OFFSET;
  bool bVar12;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = -1;
  lVar6 = *(long *)(this + 400);
  if (lVar6 == *(long *)(this + 0x188)) {
    iVar5 = -1;
  }
  else {
    do {
      iVar5 = (**(code **)(**(long **)(lVar6 + -8) + 0x10))(*(long **)(lVar6 + -8),param_1);
      lVar6 = *(long *)(this + 400);
      local_44 = iVar5;
      if (iVar5 != -1) {
        if (lVar6 != *(long *)(this + 0x188)) {
          cVar4 = (**(code **)(**(long **)(lVar6 + -8) + 0x48))();
          if (cVar4 != '\0') {
            piVar10 = *(int **)(this + 0x110);
            if (iVar5 == 10) {
              piVar7 = *(int **)(this + 0x108);
              if (1 < (int)((long)piVar10 - (long)piVar7 >> 2)) {
                cVar11 = '\0';
                iVar9 = 0;
                do {
                  lVar6 = (long)iVar9;
                  iVar1 = iVar9 + 1;
                  iVar8 = iVar1;
                  if (((piVar7[lVar6] == 0x23) && (iVar8 = iVar9 + 2, piVar7[lVar6 + 1] != 0x23)) &&
                     (bVar12 = cVar11 != '\0', iVar8 = iVar1, cVar11 = cVar4, bVar12)) {
                    (**(code **)(**(long **)(this + 0x100) + 0x168))
                              (*(long **)(this + 0x100),*(long *)(this + 0x120) + lVar6 * 0x18,
                               "(#) can be preceded in its line only by spaces or horizontal tabs",
                               0x103e9d,&_LC0);
                    piVar10 = *(int **)(this + 0x110);
                    piVar7 = *(int **)(this + 0x108);
                  }
                  iVar9 = iVar8;
                } while (iVar8 < (int)((long)piVar10 - (long)piVar7 >> 2) + -1);
              }
              if (piVar10 != piVar7) {
                *(int **)(this + 0x110) = piVar7;
              }
              if (*(long *)(this + 0x120) != *(long *)(this + 0x128)) {
                *(long *)(this + 0x128) = *(long *)(this + 0x120);
              }
            }
            else {
              if (*(int **)(this + 0x118) == piVar10) {
                std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
                          ((vector<int,std::allocator<int>> *)(this + 0x108),piVar10,&local_44);
              }
              else {
                *piVar10 = iVar5;
                *(int **)(this + 0x110) = piVar10 + 1;
              }
              puVar2 = *(undefined8 **)(this + 0x128);
              if (puVar2 == *(undefined8 **)(this + 0x130)) {
                std::vector<glslang::TSourceLoc,std::allocator<glslang::TSourceLoc>>::
                _M_realloc_insert<glslang::TSourceLoc_const&>
                          ((vector<glslang::TSourceLoc,std::allocator<glslang::TSourceLoc>> *)
                           (this + 0x120),puVar2,param_1);
              }
              else {
                uVar3 = *(undefined8 *)(param_1 + 8);
                *puVar2 = *(undefined8 *)param_1;
                puVar2[1] = uVar3;
                puVar2[2] = *(undefined8 *)(param_1 + 0x10);
                *(undefined8 **)(this + 0x128) = puVar2 + 3;
              }
            }
          }
        }
        break;
      }
      if (*(long *)(this + 0x188) == lVar6) break;
      (**(code **)(**(long **)(lVar6 + -8) + 0x58))();
      lVar6 = *(long *)(this + 400);
      if (*(long **)(lVar6 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + -8) + 8))();
        lVar6 = *(long *)(this + 400);
      }
      lVar6 = lVar6 + -8;
      *(long *)(this + 400) = lVar6;
    } while (*(long *)(this + 0x188) != lVar6);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TPpContext::tStringInput::~tStringInput() */

void __thiscall glslang::TPpContext::tStringInput::~tStringInput(tStringInput *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


