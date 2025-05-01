
/* msdfgen::cmpDoublePtr(void const*, void const*) */

int msdfgen::cmpDoublePtr(void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return (uint)(0.0 < **param_1 - **param_2) - (uint)(**param_1 - **param_2 < 0.0);
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::edgeColoringSimple(msdfgen::Shape&, double, unsigned long long) */

void __thiscall
msdfgen::edgeColoringSimple(msdfgen *this,Shape *param_1,double param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  EdgeHolder *pEVar10;
  EdgeHolder *pEVar11;
  EdgeHolder *this_00;
  EdgeHolder *pEVar12;
  ulong *puVar13;
  vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *pvVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  long in_FS_OFFSET;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double in_XMM1_Qa;
  double dVar28;
  ulong local_d8;
  ulong local_b0;
  undefined1 local_a8 [16];
  int *local_98;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar24 = sin(param_2);
  pvVar14 = *(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)this;
  local_98 = (int *)0x0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  local_a8 = (undefined1  [16])0x0;
  local_d8 = (ulong)param_1 / 3;
  uVar18 = *(uint *)(initColor(unsigned_long_long&)::colors +
                    (long)(int)((int)param_1 -
                               ((SUB164(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,8) & 0xfffffffe) +
                               (int)local_d8)) * 4);
  if (pvVar14 != *(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)(this + 8)) {
    piVar21 = (int *)0x0;
    piVar22 = (int *)0x0;
LAB_001000db:
    do {
      if (*(long *)pvVar14 != *(long *)(pvVar14 + 8)) {
        if ((int *)local_a8._8_8_ != piVar22) {
          local_a8._8_8_ = piVar22;
        }
        plVar4 = (long *)msdfgen::EdgeHolder::operator->
                                   ((EdgeHolder *)(*(long *)(pvVar14 + 8) + -8));
        dVar25 = (double)(**(code **)(*plVar4 + 0x30))(_LC2,plVar4);
        local_b0 = local_b0 & 0xffffffff00000000;
        piVar23 = piVar22;
        if (*(EdgeHolder **)pvVar14 == *(EdgeHolder **)(pvVar14 + 8)) {
          uVar18 = uVar18 << ((byte)local_d8 & 1) + 1;
          uVar18 = (uVar18 | (int)uVar18 >> 3) & 7;
        }
        else {
          iVar17 = 0;
          pEVar11 = *(EdgeHolder **)pvVar14;
          do {
            dVar28 = in_XMM1_Qa;
            plVar4 = (long *)msdfgen::EdgeHolder::operator->(pEVar11);
            dVar26 = (double)(**(code **)(*plVar4 + 0x30))(0,plVar4);
            dVar27 = SQRT(dVar26 * dVar26 + dVar28 * dVar28);
            if (dVar27 == 0.0) {
              dVar27 = SQRT(in_XMM1_Qa * in_XMM1_Qa + dVar25 * dVar25);
              dVar28 = _LC2;
              if (dVar27 != 0.0) {
                dVar26 = 0.0;
LAB_001002dc:
                in_XMM1_Qa = in_XMM1_Qa / dVar27;
                dVar25 = dVar25 / dVar27;
                dVar27 = dVar28 * in_XMM1_Qa;
                goto LAB_00100184;
              }
              dVar25 = 0.0;
              dVar26 = 0.0;
              in_XMM1_Qa = _LC2;
LAB_00100284:
              in_XMM1_Qa = in_XMM1_Qa * dVar26;
              if (dVar24 < (double)((ulong)(dVar25 * dVar28 - in_XMM1_Qa) & __LC3)) {
                if (piVar21 == piVar23) goto LAB_001002ad;
LAB_001001a7:
                *piVar23 = iVar17;
                piVar23 = piVar23 + 1;
                local_a8._8_8_ = piVar23;
              }
            }
            else {
              dVar26 = dVar26 / dVar27;
              dVar28 = dVar28 / dVar27;
              dVar27 = SQRT(dVar25 * dVar25 + in_XMM1_Qa * in_XMM1_Qa);
              if (dVar27 != 0.0) goto LAB_001002dc;
              dVar25 = 0.0;
              in_XMM1_Qa = _LC2;
              dVar27 = dVar28;
LAB_00100184:
              if (0.0 < dVar26 * dVar25 + dVar27) goto LAB_00100284;
              if (piVar21 != piVar23) goto LAB_001001a7;
LAB_001002ad:
              std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
                        ((vector<int,std::allocator<int>> *)local_a8,piVar21,&local_b0);
              piVar21 = local_98;
              piVar23 = (int *)local_a8._8_8_;
            }
            iVar17 = iVar17 + 1;
            pEVar10 = pEVar11 + 8;
            plVar4 = (long *)msdfgen::EdgeHolder::operator->(pEVar11);
            dVar25 = (double)(**(code **)(*plVar4 + 0x30))(_LC2,plVar4);
            local_b0 = CONCAT44(local_b0._4_4_,iVar17);
            pEVar11 = pEVar10;
          } while (*(EdgeHolder **)(pvVar14 + 8) != pEVar10);
          piVar22 = (int *)local_a8._0_8_;
          uVar5 = local_d8 >> 1;
          uVar18 = uVar18 << ((byte)local_d8 & 1) + 1;
          uVar16 = (int)uVar18 >> 3 | uVar18;
          uVar18 = uVar16 & 7;
          if (piVar23 != (int *)local_a8._0_8_) {
            pEVar11 = *(EdgeHolder **)pvVar14;
            iVar17 = *(int *)local_a8._0_8_;
            lVar15 = (long)piVar23 - local_a8._0_8_;
            iVar7 = (int)((long)pEVar10 - (long)pEVar11 >> 3);
            if (lVar15 == 4) {
              local_84 = uVar18;
              local_80 = 7;
              uVar18 = uVar18 << ((byte)uVar5 & 1) + 1;
              local_d8 = local_d8 >> 2;
              uVar18 = (int)uVar18 >> 3 | uVar18;
              uVar19 = uVar18 & 7;
              local_7c = uVar19;
              if ((ulong)((long)pEVar10 - (long)pEVar11) < 0x11) {
                if (pEVar10 != pEVar11) {
                  uVar16 = uVar16 & 7;
                  local_78 = (undefined1  [16])0x0;
                  local_68 = (undefined1  [16])0x0;
                  local_58 = (undefined1  [16])0x0;
                  local_48 = 0;
                  plVar4 = (long *)msdfgen::EdgeHolder::operator->(pEVar11);
                  lVar15 = (long)(iVar17 * 3 + 2);
                  (**(code **)(*plVar4 + 0x78))
                            (plVar4,local_78 + (long)(iVar17 * 3) * 8,(long)&local_80 + lVar15 * 8,
                             local_78 + lVar15 * 8);
                  pEVar10 = *(EdgeHolder **)(pvVar14 + 8);
                  pEVar11 = *(EdgeHolder **)pvVar14;
                  if ((ulong)((long)pEVar10 - (long)pEVar11) < 9) {
                    *(uint *)(local_78._0_8_ + 8) = uVar16;
                    *(undefined4 *)(local_78._8_8_ + 8) = 7;
                    *(uint *)(local_68._0_8_ + 8) = uVar19;
                  }
                  else {
                    plVar4 = (long *)msdfgen::EdgeHolder::operator->(pEVar11 + 8);
                    (**(code **)(*plVar4 + 0x78))
                              (plVar4,local_78 + (long)((1 - iVar17) * 3) * 8,
                               local_78 + (long)(iVar17 * -3 + 4) * 8,
                               local_78 + (long)(iVar17 * -3 + 5) * 8);
                    pEVar11 = *(EdgeHolder **)pvVar14;
                    pEVar10 = *(EdgeHolder **)(pvVar14 + 8);
                    *(uint *)(local_78._8_8_ + 8) = uVar16;
                    *(uint *)(local_78._0_8_ + 8) = uVar16;
                    *(undefined4 *)(local_68._8_8_ + 8) = 7;
                    *(undefined4 *)(local_68._0_8_ + 8) = 7;
                    *(uint *)(local_58._8_8_ + 8) = uVar19;
                    *(uint *)(local_58._0_8_ + 8) = uVar19;
                  }
                  uVar5 = local_78._0_8_;
                  this_00 = pEVar11;
                  if (pEVar11 != pEVar10) {
                    do {
                      pEVar12 = this_00 + 8;
                      msdfgen::EdgeHolder::~EdgeHolder(this_00);
                      this_00 = pEVar12;
                    } while (pEVar10 != pEVar12);
                    *(EdgeHolder **)(pvVar14 + 8) = pEVar11;
                    uVar5 = local_78._0_8_;
                    pEVar10 = pEVar11;
                    if (local_78._0_8_ == 0) goto LAB_00100392;
                  }
                  puVar13 = (ulong *)(local_78 + 8);
                  while( true ) {
                    local_b0 = uVar5;
                    if (pEVar10 == *(EdgeHolder **)(pvVar14 + 0x10)) {
                      std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
                      _M_realloc_insert<msdfgen::EdgeHolder>
                                (pvVar14,pEVar10,(EdgeHolder *)&local_b0);
                    }
                    else {
                      msdfgen::EdgeHolder::EdgeHolder(pEVar10,(EdgeHolder *)&local_b0);
                      *(long *)(pvVar14 + 8) = *(long *)(pvVar14 + 8) + 8;
                    }
                    msdfgen::EdgeHolder::~EdgeHolder((EdgeHolder *)&local_b0);
                    uVar5 = *puVar13;
                    if (uVar5 == 0) break;
                    pEVar10 = *(EdgeHolder **)(pvVar14 + 8);
                    puVar13 = puVar13 + 1;
                  }
                }
              }
              else if (0 < iVar7) {
                iVar9 = 0;
                while( true ) {
                  uVar16 = (&local_84)
                           [(int)(((((double)iVar9 * __LC4) / (double)(iVar7 + -1) + __LC5) - __LC6)
                                 + __LC7) + -2];
                  iVar3 = iVar17 + iVar9;
                  iVar9 = iVar9 + 1;
                  lVar15 = msdfgen::EdgeHolder::operator->(pEVar11 + (long)(iVar3 % iVar7) * 8);
                  *(uint *)(lVar15 + 8) = uVar16;
                  uVar19 = uVar18 & 7;
                  if (iVar7 == iVar9) break;
                  pEVar11 = *(EdgeHolder **)pvVar14;
                }
              }
            }
            else {
              local_d8 = uVar5;
              if (iVar7 < 1) goto LAB_001000c8;
              iVar3 = iVar17 + iVar7;
              iVar9 = 0;
              uVar19 = uVar18;
              while( true ) {
                iVar8 = iVar17 % iVar7;
                iVar2 = iVar9 + 1;
                iVar20 = (int)(lVar15 >> 2);
                if ((iVar2 < iVar20) && (*(int *)((undefined8)piVar22 + iVar2) == iVar8)) {
                  uVar16 = 0;
                  if (iVar20 + -1 == iVar2) {
                    uVar16 = uVar18;
                  }
                  iVar9 = iVar2;
                  if ((0x16UL >> (uVar16 & uVar19) & 1) == 0) {
                    uVar19 = uVar19 << ((byte)local_d8 & 1) + 1;
                    uVar19 = (uVar19 | (int)uVar19 >> 3) & 7;
                    local_d8 = local_d8 >> 1;
                  }
                  else {
                    uVar19 = uVar16 & uVar19 ^ 7;
                  }
                }
                iVar17 = iVar17 + 1;
                lVar6 = msdfgen::EdgeHolder::operator->(pEVar11 + (long)iVar8 * 8);
                *(uint *)(lVar6 + 8) = uVar19;
                if (iVar17 == iVar3) break;
                pEVar11 = *(EdgeHolder **)pvVar14;
              }
            }
LAB_00100392:
            uVar18 = uVar19;
            pvVar14 = pvVar14 + 0x18;
            if (*(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)(this + 8) ==
                pvVar14) break;
            goto LAB_001000db;
          }
        }
        piVar22 = piVar23;
        local_d8 = local_d8 >> 1;
        pEVar11 = *(EdgeHolder **)pvVar14;
        if (pEVar11 != *(EdgeHolder **)(pvVar14 + 8)) {
          do {
            pEVar10 = pEVar11 + 8;
            lVar15 = msdfgen::EdgeHolder::operator->(pEVar11);
            *(uint *)(lVar15 + 8) = uVar18;
            pEVar11 = pEVar10;
          } while (*(EdgeHolder **)(pvVar14 + 8) != pEVar10);
        }
      }
LAB_001000c8:
      pvVar14 = pvVar14 + 0x18;
    } while (*(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)(this + 8) !=
             pvVar14);
    if (piVar22 != (int *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        operator_delete(piVar22,(long)piVar21 - (long)piVar22);
        return;
      }
      goto LAB_00100845;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100845:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::edgeColoringInkTrap(msdfgen::Shape&, double, unsigned long long) */

void __thiscall
msdfgen::edgeColoringInkTrap(msdfgen *this,Shape *param_1,double param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  EdgeSegment *pEVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  int iVar10;
  int iVar11;
  EdgeHolder *pEVar12;
  int iVar13;
  uint uVar14;
  EdgeHolder *this_00;
  EdgeHolder *pEVar15;
  vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *pvVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  double *pdVar20;
  uint uVar21;
  ulong *puVar22;
  int iVar23;
  int iVar24;
  EdgeHolder *pEVar25;
  long in_FS_OFFSET;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double in_XMM1_Qa;
  double dVar30;
  double dVar31;
  double dVar32;
  double local_f8;
  ulong *local_f0;
  ulong local_d8;
  undefined1 local_c8 [16];
  ulong *local_b8;
  uint local_a8;
  undefined4 uStack_a4;
  double dStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar26 = sin(param_2);
  pvVar16 = *(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)this;
  local_b8 = (ulong *)0x0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  local_f0 = (ulong *)0x0;
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (ulong)param_1 / 3;
  uVar18 = *(uint *)(initColor(unsigned_long_long&)::colors +
                    (long)(int)((int)param_1 -
                               ((int)local_d8 +
                               (SUB164(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,8) & 0xfffffffe))) * 4);
  if (pvVar16 != *(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)(this + 8)) {
    puVar9 = (ulong *)0x0;
    do {
      while( true ) {
        puVar22 = puVar9;
        if (*(long *)pvVar16 == *(long *)(pvVar16 + 8)) goto LAB_001008f0;
        if (puVar9 != (ulong *)local_c8._8_8_) {
          local_c8._8_8_ = puVar9;
        }
        plVar5 = (long *)msdfgen::EdgeHolder::operator->
                                   ((EdgeHolder *)(*(long *)(pvVar16 + 8) + -8));
        dVar27 = (double)(**(code **)(*plVar5 + 0x30))(_LC2,plVar5);
        bVar2 = (byte)local_d8;
        if (*(EdgeHolder **)(pvVar16 + 8) != *(EdgeHolder **)pvVar16) break;
LAB_001010b1:
        pEVar12 = *(EdgeHolder **)pvVar16;
        local_d8 = local_d8 >> 1;
        uVar18 = uVar18 << (bVar2 & 1) + 1;
        uVar18 = ((int)uVar18 >> 3 | uVar18) & 7;
        if (pEVar12 != *(EdgeHolder **)(pvVar16 + 8)) {
          do {
            pEVar25 = pEVar12 + 8;
            lVar8 = msdfgen::EdgeHolder::operator->(pEVar12);
            *(uint *)(lVar8 + 8) = uVar18;
            pEVar12 = pEVar25;
          } while (*(EdgeHolder **)(pvVar16 + 8) != pEVar25);
        }
LAB_001008f0:
        pvVar16 = pvVar16 + 0x18;
        puVar9 = puVar22;
        if (*(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)(this + 8) ==
            pvVar16) goto LAB_00100fc3;
      }
      local_f8 = 0.0;
      uVar21 = 0;
      pEVar12 = *(EdgeHolder **)pvVar16;
      do {
        dVar32 = in_XMM1_Qa;
        plVar5 = (long *)msdfgen::EdgeHolder::operator->(pEVar12);
        dVar28 = (double)(**(code **)(*plVar5 + 0x30))(0,plVar5);
        dVar29 = SQRT(dVar28 * dVar28 + dVar32 * dVar32);
        dVar30 = _LC2;
        if (dVar29 == 0.0) {
          dVar31 = SQRT(dVar27 * dVar27 + in_XMM1_Qa * in_XMM1_Qa);
          dVar29 = _LC2;
          if (dVar31 != 0.0) {
            dVar28 = 0.0;
LAB_00100dec:
            dVar30 = in_XMM1_Qa / dVar31;
            dVar27 = dVar27 / dVar31;
            dVar32 = dVar29 * dVar30;
            goto LAB_00100a11;
          }
          dVar27 = 0.0;
          dVar28 = 0.0;
LAB_00100db4:
          dVar30 = dVar30 * dVar28;
          if (dVar26 < (double)((ulong)(dVar27 * dVar29 - dVar30) & __LC3)) goto LAB_00100a2b;
        }
        else {
          dVar32 = dVar32 / dVar29;
          dVar28 = dVar28 / dVar29;
          dVar31 = SQRT(dVar27 * dVar27 + in_XMM1_Qa * in_XMM1_Qa);
          dVar29 = dVar32;
          if (dVar31 != 0.0) goto LAB_00100dec;
          dVar27 = 0.0;
LAB_00100a11:
          if (0.0 < dVar28 * dVar27 + dVar32) goto LAB_00100db4;
LAB_00100a2b:
          uStack_a4 = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          dStack_a0 = local_f8;
          local_a8 = uVar21;
          if (local_f0 == puVar9) {
            std::
            vector<msdfgen::EdgeColoringInkTrapCorner,std::allocator<msdfgen::EdgeColoringInkTrapCorner>>
            ::_M_realloc_insert<msdfgen::EdgeColoringInkTrapCorner_const&>
                      ((vector<msdfgen::EdgeColoringInkTrapCorner,std::allocator<msdfgen::EdgeColoringInkTrapCorner>>
                        *)local_c8,local_f0,&local_a8);
            local_f0 = local_b8;
            puVar9 = (ulong *)local_c8._8_8_;
          }
          else {
            *puVar9 = (ulong)uVar21;
            puVar9[1] = (ulong)local_f8;
            puVar9[2] = 0;
            local_c8._8_8_ = puVar9 + 3;
            puVar9 = puVar9 + 3;
          }
          local_f8 = 0.0;
        }
        iVar13 = 1;
        pEVar6 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar12);
        dVar27 = (double)(**(code **)(*(long *)pEVar6 + 0x28))(0,pEVar6);
        dVar32 = 0.0;
        do {
          dVar28 = (double)iVar13;
          iVar13 = iVar13 + 1;
          in_XMM1_Qa = dVar30;
          dVar28 = (double)(**(code **)(*(long *)pEVar6 + 0x28))(dVar28 * __LC10,pEVar6);
          dVar32 = dVar32 + SQRT((dVar28 - dVar27) * (dVar28 - dVar27) +
                                 (in_XMM1_Qa - dVar30) * (in_XMM1_Qa - dVar30));
          dVar30 = in_XMM1_Qa;
          dVar27 = dVar28;
        } while (iVar13 != 5);
        local_f8 = dVar32 + local_f8;
        uVar21 = uVar21 + 1;
        pEVar25 = pEVar12 + 8;
        plVar5 = (long *)msdfgen::EdgeHolder::operator->(pEVar12);
        dVar27 = (double)(**(code **)(*plVar5 + 0x30))(_LC2,plVar5);
        pEVar12 = pEVar25;
      } while (*(EdgeHolder **)(pvVar16 + 8) != pEVar25);
      puVar22 = (ulong *)local_c8._0_8_;
      if (puVar9 == (ulong *)local_c8._0_8_) goto LAB_001010b1;
      pEVar12 = *(EdgeHolder **)pvVar16;
      iVar13 = *(int *)local_c8._0_8_;
      iVar19 = (int)((long)pEVar25 - (long)pEVar12 >> 3);
      if ((long)puVar9 - local_c8._0_8_ == 0x18) {
        local_80 = 7;
        uVar18 = uVar18 << (bVar2 & 1) + 1;
        uVar7 = local_d8 >> 2;
        uVar21 = (int)uVar18 >> 3 | uVar18;
        local_84 = uVar21 & 7;
        uVar3 = local_84 << ((byte)(local_d8 >> 1) & 1) + 1;
        uVar3 = (int)uVar3 >> 3 | uVar3;
        uVar18 = uVar3 & 7;
        local_7c = uVar18;
        local_d8 = uVar7;
        if ((ulong)((long)pEVar25 - (long)pEVar12) < 0x11) {
          if (pEVar25 != pEVar12) {
            uVar18 = uVar3 & 7;
            uVar21 = uVar21 & 7;
            local_78 = (undefined1  [16])0x0;
            local_68 = (undefined1  [16])0x0;
            local_58 = (undefined1  [16])0x0;
            local_48 = 0;
            plVar5 = (long *)msdfgen::EdgeHolder::operator->(pEVar12);
            lVar8 = (long)(iVar13 * 3 + 2);
            (**(code **)(*plVar5 + 0x78))
                      (plVar5,local_78 + (long)(iVar13 * 3) * 8,(long)&local_80 + lVar8 * 8,
                       local_78 + lVar8 * 8);
            pEVar25 = *(EdgeHolder **)(pvVar16 + 8);
            pEVar12 = *(EdgeHolder **)pvVar16;
            if ((ulong)((long)pEVar25 - (long)pEVar12) < 9) {
              *(uint *)(local_78._0_8_ + 8) = uVar21;
              *(undefined4 *)(local_78._8_8_ + 8) = 7;
              *(uint *)(local_68._0_8_ + 8) = uVar18;
            }
            else {
              plVar5 = (long *)msdfgen::EdgeHolder::operator->(pEVar12 + 8);
              (**(code **)(*plVar5 + 0x78))
                        (plVar5,local_78 + (long)((1 - iVar13) * 3) * 8,
                         local_78 + (long)(iVar13 * -3 + 4) * 8,
                         local_78 + (long)(iVar13 * -3 + 5) * 8);
              *(uint *)(local_78._8_8_ + 8) = uVar21;
              pEVar25 = *(EdgeHolder **)(pvVar16 + 8);
              *(uint *)(local_78._0_8_ + 8) = uVar21;
              *(undefined4 *)(local_68._8_8_ + 8) = 7;
              *(undefined4 *)(local_68._0_8_ + 8) = 7;
              *(uint *)(local_58._8_8_ + 8) = uVar18;
              *(uint *)(local_58._0_8_ + 8) = uVar18;
              pEVar12 = *(EdgeHolder **)pvVar16;
            }
            lVar8 = local_78._0_8_;
            this_00 = pEVar12;
            if (pEVar12 != pEVar25) {
              do {
                pEVar15 = this_00 + 8;
                msdfgen::EdgeHolder::~EdgeHolder(this_00);
                this_00 = pEVar15;
              } while (pEVar25 != pEVar15);
              *(EdgeHolder **)(pvVar16 + 8) = pEVar12;
              lVar8 = local_78._0_8_;
              pEVar25 = pEVar12;
              if (local_78._0_8_ == 0) goto LAB_001008f0;
            }
            plVar5 = (long *)(local_78 + 8);
            while( true ) {
              local_a8 = (uint)lVar8;
              uStack_a4 = (undefined4)((ulong)lVar8 >> 0x20);
              if (pEVar25 == *(EdgeHolder **)(pvVar16 + 0x10)) {
                std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
                _M_realloc_insert<msdfgen::EdgeHolder>(pvVar16,pEVar25,(EdgeHolder *)&local_a8);
              }
              else {
                msdfgen::EdgeHolder::EdgeHolder(pEVar25,(EdgeHolder *)&local_a8);
                *(long *)(pvVar16 + 8) = *(long *)(pvVar16 + 8) + 8;
              }
              msdfgen::EdgeHolder::~EdgeHolder((EdgeHolder *)&local_a8);
              lVar8 = *plVar5;
              if (lVar8 == 0) break;
              pEVar25 = *(EdgeHolder **)(pvVar16 + 8);
              plVar5 = plVar5 + 1;
            }
          }
        }
        else if (0 < iVar19) {
          iVar24 = 0;
          while( true ) {
            uVar21 = (&local_84)
                     [(int)(((((double)iVar24 * __LC4) / (double)(iVar19 + -1) + __LC5) - __LC6) +
                           __LC7) + -2];
            iVar10 = iVar13 + iVar24;
            iVar24 = iVar24 + 1;
            lVar8 = msdfgen::EdgeHolder::operator->(pEVar12 + (long)(iVar10 % iVar19) * 8);
            *(uint *)(lVar8 + 8) = uVar21;
            if (iVar19 == iVar24) break;
            pEVar12 = *(EdgeHolder **)pvVar16;
          }
        }
        goto LAB_001008f0;
      }
      uVar7 = ((long)puVar9 - local_c8._0_8_ >> 3) * -0x5555555555555555;
      iVar24 = (int)uVar7;
      if (iVar24 < 4) {
        if (0 < iVar24) {
          uVar7 = uVar7 & 0xffffffff;
          goto LAB_00100e5b;
        }
      }
      else {
        pdVar20 = (double *)(local_c8._0_8_ + 8);
        uVar7 = uVar7 & 0xffffffff;
        *(double *)(local_c8._0_8_ + 8) = local_f8 + *(double *)(local_c8._0_8_ + 8);
        iVar10 = 0;
        do {
          iVar23 = iVar10 + 1;
          in_XMM1_Qa = *pdVar20;
          if ((*(double *)(local_c8._0_8_ + ((long)(iVar23 % iVar24) * 3 + 1) * 8) < in_XMM1_Qa) &&
             (in_XMM1_Qa = *(double *)(local_c8._0_8_ + ((long)((iVar10 + 2) % iVar24) * 3 + 1) * 8)
             , *(double *)(local_c8._0_8_ + ((long)(iVar23 % iVar24) * 3 + 1) * 8) < in_XMM1_Qa)) {
            *(undefined1 *)(pdVar20 + 1) = 1;
            uVar7 = (ulong)((int)uVar7 - 1);
          }
          pdVar20 = pdVar20 + 3;
          iVar10 = iVar23;
        } while (iVar23 != iVar24);
LAB_00100e5b:
        puVar9 = (ulong *)(local_c8._0_8_ + 0x10);
        uVar21 = 0;
        do {
          while ((char)*puVar9 == '\0') {
            uVar14 = (int)uVar7 - 1;
            uVar7 = (ulong)uVar14;
            uVar3 = 0;
            if (uVar14 == 0) {
              uVar3 = uVar21;
            }
            uVar3 = uVar3 & uVar18;
            if ((uVar3 - 1 < 2) || (uVar3 == 4)) {
              uVar18 = uVar3 ^ 7;
            }
            else {
              uVar18 = uVar18 << ((byte)local_d8 & 1) + 1;
              uVar18 = (uVar18 | (int)uVar18 >> 3) & 7;
              local_d8 = local_d8 >> 1;
            }
            *(uint *)((long)puVar9 + 4) = uVar18;
            if (uVar21 == 0) {
              uVar21 = uVar18;
            }
            puVar9 = puVar9 + 3;
            if ((ulong *)(local_c8._0_8_ + ((ulong)(iVar24 - 1) * 3 + 5) * 8) == puVar9)
            goto LAB_00100ee2;
          }
          puVar9 = puVar9 + 3;
        } while ((ulong *)(local_c8._0_8_ + ((ulong)(iVar24 - 1) * 3 + 5) * 8) != puVar9);
LAB_00100ee2:
        iVar10 = 0;
        puVar17 = (uint *)(local_c8._0_8_ + 0x14);
        do {
          while (iVar10 = iVar10 + 1, (char)puVar17[-1] == '\0') {
            uVar18 = *puVar17;
            puVar17 = puVar17 + 6;
            if (iVar24 == iVar10) goto LAB_00100f2a;
          }
          *puVar17 = *(uint *)(local_c8._0_8_ + (long)(iVar10 % iVar24) * 0x18 + 0x14) & uVar18 ^ 7;
          puVar17 = puVar17 + 6;
        } while (iVar24 != iVar10);
      }
LAB_00100f2a:
      uVar18 = *(uint *)(local_c8._0_8_ + 0x14);
      if (iVar19 < 1) goto LAB_001008f0;
      iVar23 = iVar13 + iVar19;
      iVar10 = 0;
      while( true ) {
        iVar11 = iVar13 % iVar19;
        iVar4 = iVar10 + 1;
        if ((iVar4 < iVar24) && ((int)*(ulong *)((undefined8)puVar22 + (long)iVar4 * 3) == iVar11))
        {
          uVar18 = *(uint *)((long)((undefined8)puVar22 + (long)iVar4 * 3) + 0x14);
          iVar10 = iVar4;
        }
        iVar13 = iVar13 + 1;
        lVar8 = msdfgen::EdgeHolder::operator->(pEVar12 + (long)iVar11 * 8);
        *(uint *)(lVar8 + 8) = uVar18;
        if (iVar23 == iVar13) break;
        pEVar12 = *(EdgeHolder **)pvVar16;
      }
      pvVar16 = pvVar16 + 0x18;
      puVar9 = puVar22;
    } while (*(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)(this + 8) !=
             pvVar16);
LAB_00100fc3:
    if (puVar22 != (ulong *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        operator_delete(puVar22,(long)local_f0 - (long)puVar22);
        return;
      }
      goto LAB_00101269;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101269:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::uncolorSameNeighbors(std::queue<int, std::deque<int, std::allocator<int> > >&, int*, int
   const* const*, int, int) */

void msdfgen::uncolorSameNeighbors
               (queue *param_1,int *param_2,int **param_3,int param_4,int param_5)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar5 = (long)param_4;
  local_44 = param_4 + 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_44 < param_5) {
    lVar3 = (long)param_4;
    lVar4 = (long)local_44;
    do {
      if ((param_3[lVar3][lVar4] != 0) && (param_2[lVar4] == param_2[lVar3])) {
        lVar1 = *(long *)(param_1 + 0x40);
        piVar2 = *(int **)(param_1 + 0x30);
        param_2[lVar4] = -1;
        if (piVar2 == (int *)(lVar1 + -4)) {
          std::deque<int,std::allocator<int>>::_M_push_back_aux<int_const&>
                    ((deque<int,std::allocator<int>> *)param_1,&local_44);
        }
        else {
          *piVar2 = (int)lVar4;
          *(int **)(param_1 + 0x30) = piVar2 + 1;
        }
      }
      local_44 = (int)lVar4 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar3 + 2 + (ulong)(uint)((param_5 + -2) - param_4));
  }
  local_44 = 0;
  if (0 < param_4) {
    lVar3 = 0;
    do {
      if ((param_3[lVar5][lVar3] != 0) && (param_2[lVar3] == param_2[lVar5])) {
        lVar4 = *(long *)(param_1 + 0x40);
        piVar2 = *(int **)(param_1 + 0x30);
        param_2[lVar3] = -1;
        if (piVar2 == (int *)(lVar4 + -4)) {
          std::deque<int,std::allocator<int>>::_M_push_back_aux<int_const&>
                    ((deque<int,std::allocator<int>> *)param_1,&local_44);
        }
        else {
          *piVar2 = (int)lVar3;
          *(int **)(param_1 + 0x30) = piVar2 + 1;
        }
      }
      local_44 = (int)lVar3 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar5 != lVar3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::edgeColoringByDistance(msdfgen::Shape&, double, unsigned long long) */

void msdfgen::edgeColoringByDistance(Shape *param_1,double param_2,ulonglong param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  double *pdVar5;
  void *pvVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  double *pdVar17;
  int *piVar18;
  int **ppiVar19;
  undefined4 *__src;
  void *pvVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  int *piVar25;
  void *pvVar26;
  long *plVar27;
  EdgeHolder *this;
  EdgeHolder *pEVar28;
  vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *pvVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  EdgeHolder *pEVar35;
  long lVar36;
  EdgeHolder *pEVar37;
  double *pdVar38;
  int iVar39;
  int *piVar40;
  ulong *puVar41;
  undefined8 *puVar42;
  undefined1 auVar43 [8];
  ulong *puVar44;
  long in_FS_OFFSET;
  bool bVar45;
  double dVar46;
  double dVar47;
  ulong uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int *local_228;
  double *local_220;
  size_t local_210;
  int local_158;
  void *local_148;
  ulong *puStack_140;
  ulong *local_138;
  undefined1 local_128 [16];
  int *local_118;
  undefined1 local_108 [16];
  int *local_f8;
  undefined1 local_e8 [8];
  double *pdStack_e0;
  double *local_d8;
  void *local_c8;
  long local_c0;
  int *local_b8;
  int *piStack_b0;
  int *local_a8;
  undefined8 *puStack_a0;
  int *local_98;
  int *piStack_90;
  int *local_88;
  undefined8 *puStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_148 = (void *)0x0;
  puStack_140 = (ulong *)0x0;
  local_128 = (undefined1  [16])0x0;
  local_138 = (ulong *)0x0;
  local_118 = (int *)0x0;
  dVar46 = sin(param_2);
  pvVar29 = *(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)param_1;
  local_f8 = (int *)0x0;
  local_108 = (undefined1  [16])0x0;
  if (pvVar29 == *(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)(param_1 + 8))
  {
    local_c8 = (void *)((ulong)local_c8 & 0xffffffff00000000);
    pvVar26 = (void *)0x0;
    piVar18 = (int *)0x0;
    local_158 = 0;
LAB_00102c0a:
    std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
              ((vector<int,std::allocator<int>> *)local_128,piVar18,&local_c8);
    piVar18 = (int *)local_128._8_8_;
  }
  else {
    piVar18 = (int *)0x0;
    pvVar26 = (void *)0x0;
    puVar44 = (ulong *)0x0;
    local_228 = (int *)0x0;
    do {
      local_158 = (int)((long)puVar44 - (long)pvVar26 >> 3);
      if (*(long *)pvVar29 != *(long *)(pvVar29 + 8)) {
        piVar25 = (int *)local_108._0_8_;
        if (local_108._0_8_ != local_108._8_8_) {
          local_108._8_8_ = local_108._0_8_;
        }
        plVar12 = (long *)msdfgen::EdgeHolder::operator->
                                    ((EdgeHolder *)(*(long *)(pvVar29 + 8) + -8));
        auVar55 = (**(code **)(*plVar12 + 0x30))(_LC2,plVar12);
        auVar56._12_4_ = 0;
        auVar56._0_12_ = stack0xffffffffffffff1c;
        _local_e8 = auVar56 << 0x20;
        piVar40 = piVar25;
        if (*(EdgeHolder **)pvVar29 != *(EdgeHolder **)(pvVar29 + 8)) {
          iVar39 = 0;
          pEVar37 = *(EdgeHolder **)pvVar29;
          do {
            dVar52 = auVar55._8_8_;
            dVar49 = auVar55._0_8_;
            plVar12 = (long *)msdfgen::EdgeHolder::operator->(pEVar37);
            auVar56 = (**(code **)(*plVar12 + 0x30))(0,plVar12);
            dVar53 = auVar56._8_8_;
            dVar54 = auVar56._0_8_;
            dVar47 = SQRT(dVar54 * dVar54 + dVar53 * dVar53);
            dVar51 = _LC2;
            if (dVar47 == 0.0) {
              dVar54 = 0.0;
              dVar50 = SQRT(dVar49 * dVar49 + dVar52 * dVar52);
              dVar47 = _LC2;
              if (dVar50 != 0.0) {
LAB_00101717:
                dVar49 = dVar49 / dVar50;
                dVar53 = dVar47 * (dVar52 / dVar50);
                dVar51 = dVar52 / dVar50;
                goto LAB_001015b9;
              }
              dVar49 = 0.0;
LAB_001016bc:
              if (dVar46 < (double)((ulong)(dVar49 * dVar47 - dVar51 * dVar54) & __LC3)) {
                if (local_f8 == piVar25) goto LAB_001016ea;
LAB_001015e1:
                *piVar25 = iVar39;
                piVar25 = piVar25 + 1;
                local_108._8_8_ = piVar25;
              }
            }
            else {
              dVar54 = dVar54 / dVar47;
              dVar53 = dVar53 / dVar47;
              dVar50 = SQRT(dVar49 * dVar49 + dVar52 * dVar52);
              dVar47 = dVar53;
              if (dVar50 != 0.0) goto LAB_00101717;
              dVar49 = 0.0;
LAB_001015b9:
              if (0.0 < dVar49 * dVar54 + dVar53) goto LAB_001016bc;
              if (local_f8 != piVar25) goto LAB_001015e1;
LAB_001016ea:
              std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
                        ((vector<int,std::allocator<int>> *)local_108,piVar25,local_e8);
              piVar25 = (int *)local_108._8_8_;
            }
            iVar39 = iVar39 + 1;
            pEVar35 = pEVar37 + 8;
            plVar12 = (long *)msdfgen::EdgeHolder::operator->(pEVar37);
            auVar55 = (**(code **)(*plVar12 + 0x30))(_LC2,plVar12);
            local_e8._0_4_ = iVar39;
            pEVar37 = pEVar35;
          } while (*(EdgeHolder **)(pvVar29 + 8) != pEVar35);
          piVar40 = (int *)local_108._0_8_;
        }
        local_c8 = (void *)CONCAT44(local_c8._4_4_,local_158);
        if (piVar18 == local_228) {
          std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                    ((vector<int,std::allocator<int>> *)local_128,piVar18,&local_c8);
          local_228 = local_118;
          piVar18 = (int *)local_128._8_8_;
          if (piVar40 == piVar25) goto LAB_0010231b;
LAB_0010176d:
          pEVar37 = *(EdgeHolder **)pvVar29;
          iVar39 = *piVar40;
          uVar30 = (long)*(EdgeHolder **)(pvVar29 + 8) - (long)pEVar37;
          iVar23 = (int)((long)uVar30 >> 3);
          if ((long)piVar25 - (long)piVar40 == 4) {
            if (uVar30 < 0x11) {
              if (pEVar37 != *(EdgeHolder **)(pvVar29 + 8)) {
                local_78 = (undefined1  [16])0x0;
                local_68 = (undefined1  [16])0x0;
                local_58 = (undefined1  [16])0x0;
                local_48 = 0;
                plVar12 = (long *)msdfgen::EdgeHolder::operator->(pEVar37);
                lVar13 = (long)(iVar39 * 3 + 2) * 8;
                (**(code **)(*plVar12 + 0x78))
                          (plVar12,local_78 + (long)(iVar39 * 3) * 8,local_78 + lVar13 + -8,
                           local_78 + lVar13);
                puVar41 = local_138;
                if ((ulong)(*(long *)(pvVar29 + 8) - *(long *)pvVar29) < 9) {
                  if (puVar44 == local_138) {
                    std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
                    _M_realloc_insert<msdfgen::EdgeSegment*const&>
                              ((vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>
                                *)&local_148,local_138,local_78);
                    pvVar26 = local_148;
                  }
                  else {
                    puStack_140 = puVar44 + 1;
                    *puVar44 = local_78._0_8_;
                  }
                  puVar41 = local_138;
                  puVar44 = puStack_140;
                  *(undefined4 *)(local_78._8_8_ + 8) = 7;
                  iVar39 = (int)((long)puStack_140 - (long)pvVar26 >> 3);
                  local_c8 = (void *)CONCAT44(local_c8._4_4_,iVar39);
                  if (piVar18 == local_228) {
                    std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                              ((vector<int,std::allocator<int>> *)local_128,piVar18,&local_c8);
                  }
                  else {
                    *piVar18 = iVar39;
                    local_128._8_8_ = piVar18 + 1;
                  }
                  if (puVar41 == puVar44) {
                    std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
                    _M_realloc_insert<msdfgen::EdgeSegment*const&>
                              ((vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>
                                *)&local_148,puVar41,local_68);
                    pvVar26 = local_148;
                  }
                  else {
                    puStack_140 = puVar44 + 1;
                    *puVar44 = local_68._0_8_;
                  }
                }
                else {
                  plVar12 = (long *)msdfgen::EdgeHolder::operator->
                                              ((EdgeHolder *)(*(long *)pvVar29 + 8));
                  (**(code **)(*plVar12 + 0x78))
                            (plVar12,local_78 + (long)((1 - iVar39) * 3) * 8,
                             local_78 + (long)(iVar39 * -3 + 4) * 8,
                             local_78 + (long)(iVar39 * -3 + 5) * 8);
                  if (puVar44 == puVar41) {
                    std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
                    _M_realloc_insert<msdfgen::EdgeSegment*const&>
                              ((vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>
                                *)&local_148,puVar41,local_78);
                    puVar41 = local_138;
                  }
                  else {
                    puStack_140 = puVar44 + 1;
                    *puVar44 = local_78._0_8_;
                  }
                  if (puStack_140 == puVar41) {
                    std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
                    _M_realloc_insert<msdfgen::EdgeSegment*const&>
                              ((vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>
                                *)&local_148,puVar41,local_78 + 8);
                    puVar41 = local_138;
                  }
                  else {
                    *puStack_140 = local_78._8_8_;
                    puStack_140 = puStack_140 + 1;
                  }
                  puVar44 = puStack_140;
                  *(undefined4 *)(local_68._8_8_ + 8) = 7;
                  *(undefined4 *)(local_68._0_8_ + 8) = 7;
                  iVar39 = (int)((long)puStack_140 - (long)local_148 >> 3);
                  local_c8 = (void *)CONCAT44(local_c8._4_4_,iVar39);
                  if (piVar18 == local_228) {
                    std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                              ((vector<int,std::allocator<int>> *)local_128,piVar18,&local_c8);
                  }
                  else {
                    *piVar18 = iVar39;
                    local_128._8_8_ = piVar18 + 1;
                  }
                  if (puVar44 == puVar41) {
                    std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
                    _M_realloc_insert<msdfgen::EdgeSegment*const&>
                              ((vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>
                                *)&local_148,puVar41,local_58);
                    puVar41 = local_138;
                  }
                  else {
                    puStack_140 = puVar44 + 1;
                    *puVar44 = local_58._0_8_;
                  }
                  if (puStack_140 == puVar41) {
                    std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
                    _M_realloc_insert<msdfgen::EdgeSegment*const&>
                              ((vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>
                                *)&local_148,puStack_140,local_58 + 8);
                    pvVar26 = local_148;
                  }
                  else {
                    *puStack_140 = local_58._8_8_;
                    pvVar26 = local_148;
                    puStack_140 = puStack_140 + 1;
                  }
                }
                puVar44 = puStack_140;
                pEVar37 = *(EdgeHolder **)pvVar29;
                pEVar35 = *(EdgeHolder **)(pvVar29 + 8);
                this = pEVar37;
                if (pEVar37 != pEVar35) {
                  do {
                    pEVar28 = this + 8;
                    msdfgen::EdgeHolder::~EdgeHolder(this);
                    this = pEVar28;
                  } while (pEVar35 != pEVar28);
                  *(EdgeHolder **)(pvVar29 + 8) = pEVar37;
                }
                puVar41 = (ulong *)(local_78 + 8);
                pvVar20 = (void *)local_78._0_8_;
                local_228 = local_118;
                pvVar6 = local_c8;
                while (local_c8 = pvVar20, local_118 = local_228, local_c8 != (void *)0x0) {
                  pEVar37 = *(EdgeHolder **)(pvVar29 + 8);
                  if (pEVar37 == *(EdgeHolder **)(pvVar29 + 0x10)) {
                    std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
                    _M_realloc_insert<msdfgen::EdgeHolder>(pvVar29,pEVar37,(EdgeHolder *)&local_c8);
                  }
                  else {
                    msdfgen::EdgeHolder::EdgeHolder(pEVar37,(EdgeHolder *)&local_c8);
                    *(long *)(pvVar29 + 8) = *(long *)(pvVar29 + 8) + 8;
                  }
                  msdfgen::EdgeHolder::~EdgeHolder((EdgeHolder *)&local_c8);
                  pvVar20 = (void *)*puVar41;
                  puVar41 = puVar41 + 1;
                  local_228 = local_118;
                  pvVar6 = local_c8;
                }
                local_158 = (int)((long)puVar44 - (long)pvVar26 >> 3);
                piVar18 = (int *)local_128._8_8_;
                local_c8 = pvVar6;
              }
            }
            else if (0 < iVar23) {
              iVar32 = 0;
              do {
                if (iVar23 >> 1 == iVar32) {
                  iVar8 = (int)((long)puVar44 - (long)local_148 >> 3);
                  local_c8 = (void *)CONCAT44(local_c8._4_4_,iVar8);
                  if (local_228 == piVar18) {
                    std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                              ((vector<int,std::allocator<int>> *)local_128,local_228,&local_c8);
                    local_228 = local_118;
                    piVar18 = (int *)local_128._8_8_;
                  }
                  else {
                    *piVar18 = iVar8;
                    local_128._8_8_ = piVar18 + 1;
                    piVar18 = piVar18 + 1;
                  }
                }
                pEVar37 = (EdgeHolder *)(*(long *)pvVar29 + (long)((iVar39 + iVar32) % iVar23) * 8);
                if ((int)(((((double)iVar32 * __LC4) / (double)(iVar23 + -1) + __LC5) - __LC6) +
                         __LC7) == 3) {
                  lVar13 = msdfgen::EdgeHolder::operator->(pEVar37);
                  *(undefined4 *)(lVar13 + 8) = 7;
                }
                else {
                  local_c8 = (void *)msdfgen::EdgeHolder::operator*(pEVar37);
                  if (local_138 == puVar44) {
                    std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
                    _M_realloc_insert<msdfgen::EdgeSegment*>
                              ((vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>
                                *)&local_148,puVar44,&local_c8);
                    puVar44 = puStack_140;
                  }
                  else {
                    *puVar44 = (ulong)local_c8;
                    puStack_140 = puVar44 + 1;
                    puVar44 = puStack_140;
                  }
                }
                iVar32 = iVar32 + 1;
              } while (iVar23 != iVar32);
              goto LAB_00101f23;
            }
          }
          else if (0 < iVar23) {
            iVar8 = iVar39 + iVar23;
            iVar32 = 0;
            do {
              while( true ) {
                iVar34 = iVar32 + 1;
                if ((iVar34 < (int)((long)piVar25 - (long)piVar40 >> 2)) &&
                   (piVar40[iVar34] == iVar39 % iVar23)) {
                  iVar9 = (int)((long)puVar44 - (long)local_148 >> 3);
                  local_c8 = (void *)CONCAT44(local_c8._4_4_,iVar9);
                  iVar32 = iVar34;
                  if (piVar18 == local_228) {
                    std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                              ((vector<int,std::allocator<int>> *)local_128,piVar18,&local_c8);
                    local_228 = local_118;
                    piVar18 = (int *)local_128._8_8_;
                  }
                  else {
                    *piVar18 = iVar9;
                    local_128._8_8_ = piVar18 + 1;
                    piVar18 = piVar18 + 1;
                  }
                }
                local_c8 = (void *)msdfgen::EdgeHolder::operator*
                                             ((EdgeHolder *)
                                              (*(long *)pvVar29 + (long)(iVar39 % iVar23) * 8));
                if (local_138 != puVar44) break;
                iVar39 = iVar39 + 1;
                std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
                _M_realloc_insert<msdfgen::EdgeSegment*>
                          ((vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>> *)
                           &local_148,puVar44,&local_c8);
                puVar44 = puStack_140;
                if (iVar39 == iVar8) goto LAB_00101f23;
              }
              *puVar44 = (ulong)local_c8;
              puVar44 = puVar44 + 1;
              iVar39 = iVar39 + 1;
              puStack_140 = puVar44;
            } while (iVar39 != iVar8);
            goto LAB_00101f23;
          }
        }
        else {
          *piVar18 = local_158;
          piVar18 = piVar18 + 1;
          local_128._8_8_ = piVar18;
          if (piVar40 != piVar25) goto LAB_0010176d;
LAB_0010231b:
          pEVar37 = *(EdgeHolder **)pvVar29;
          if (pEVar37 == *(EdgeHolder **)(pvVar29 + 8)) goto LAB_001014c9;
          do {
            local_c8 = (void *)msdfgen::EdgeHolder::operator*(pEVar37);
            if (local_138 == puVar44) {
              std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
              _M_realloc_insert<msdfgen::EdgeSegment*>
                        ((vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>> *)
                         &local_148,puVar44,&local_c8);
            }
            else {
              *puVar44 = (ulong)local_c8;
              puStack_140 = puVar44 + 1;
            }
            pEVar37 = pEVar37 + 8;
            puVar44 = puStack_140;
          } while (*(EdgeHolder **)(pvVar29 + 8) != pEVar37);
LAB_00101f23:
          local_158 = (int)((long)puVar44 - (long)local_148 >> 3);
          pvVar26 = local_148;
        }
      }
LAB_001014c9:
      pvVar29 = pvVar29 + 0x18;
    } while (*(vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> **)(param_1 + 8) !=
             pvVar29);
    local_c8 = (void *)CONCAT44(local_c8._4_4_,local_158);
    if (local_228 == piVar18) goto LAB_00102c0a;
    *piVar18 = local_158;
    local_128._8_8_ = piVar18 + 1;
    piVar18 = piVar18 + 1;
  }
  uVar7 = local_128._0_8_;
  iVar23 = (int)((long)piVar18 - local_128._0_8_ >> 2);
  iVar39 = iVar23 + -1;
  if (iVar39 == 0) {
LAB_00101fdc:
    if ((void *)local_108._0_8_ != (void *)0x0) {
      operator_delete((void *)local_108._0_8_,(long)local_f8 - local_108._0_8_);
    }
    if ((void *)uVar7 != (void *)0x0) {
      operator_delete((void *)uVar7,(long)local_118 - uVar7);
    }
    if (pvVar26 == (void *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      operator_delete(pvVar26,(long)local_138 - (long)pvVar26);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar13 = (long)(iVar39 * iVar39);
  uVar30 = lVar13 * 8;
  puVar14 = (undefined8 *)operator_new(uVar30);
  *puVar14 = 0;
  if ((lVar13 != 1) && (puVar14 + 1 != puVar14 + lVar13)) {
    memset(puVar14 + 1,0,uVar30 - 8);
  }
  uVar15 = (ulong)iVar39;
  if (uVar15 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  uVar1 = uVar15 * 8;
  plVar12 = (long *)operator_new(uVar1);
  *plVar12 = 0;
  if ((uVar15 != 1) && (plVar12 + 1 != plVar12 + uVar15)) {
    memset(plVar12 + 1,0,uVar1 - 8);
  }
  lVar16 = 0;
  puVar24 = puVar14;
  do {
    plVar12[lVar16] = (long)puVar24;
    lVar16 = lVar16 + 1;
    puVar24 = puVar24 + uVar15;
  } while ((int)lVar16 < iVar39);
  *(undefined8 *)*plVar12 = _LC14;
  if (iVar39 == 1) {
    auVar43 = (undefined1  [8])0x0;
    pdVar38 = (double *)0x0;
    local_d8 = (double *)0x0;
    local_210 = 0;
    local_220._0_4_ = 0;
    _local_e8 = (undefined1  [16])0x0;
LAB_001022a3:
    piVar18 = (int *)operator_new(lVar13 * 4);
    *piVar18 = 0;
    if (lVar13 == 1) {
      local_228 = (int *)0x4;
      goto LAB_001023c3;
    }
  }
  else {
    lVar33 = 0;
    lVar31 = 1;
    plVar27 = plVar12;
    lVar16 = lVar31;
    do {
      do {
        iVar32 = *(int *)(uVar7 + lVar16 * 4);
        iVar8 = *(int *)(uVar7 + lVar16 * 4 + -4);
        iVar34 = *(int *)(uVar7 + lVar31 * 4 + 4);
        iVar9 = *(int *)(uVar7 + lVar31 * 4);
        local_228 = (int *)_LC12;
        if (iVar8 < iVar32) {
          puVar24 = (undefined8 *)((long)pvVar26 + (long)iVar8 * 8);
          do {
            if ((double)local_228 != 0.0) {
              lVar36 = (long)(iVar9 + 1);
              if (iVar9 < iVar34) {
                do {
                  plVar2 = *(long **)((long)pvVar26 + lVar36 * 8 + -8);
                  plVar3 = (long *)*puVar24;
                  auVar56 = (**(code **)(*plVar2 + 0x28))(0,plVar2);
                  auVar55 = (**(code **)(*plVar3 + 0x28))(0,plVar3);
                  if ((auVar55._0_8_ == auVar56._0_8_) && (auVar55._8_8_ == auVar56._8_8_)) {
LAB_00102060:
                    piVar18 = local_228;
                    if (0.0 < (double)local_228) {
                      local_228 = (int *)0x0;
                      break;
                    }
                  }
                  else {
                    auVar56 = (**(code **)(*plVar2 + 0x28))(_LC2,plVar2);
                    auVar55 = (**(code **)(*plVar3 + 0x28))(0,plVar3);
                    if ((auVar55._0_8_ == auVar56._0_8_) && (auVar55._8_8_ == auVar56._8_8_))
                    goto LAB_00102060;
                    auVar56 = (**(code **)(*plVar2 + 0x28))(0,plVar2);
                    auVar55 = (**(code **)(*plVar3 + 0x28))(_LC2,plVar3);
                    if ((auVar55._0_8_ == auVar56._0_8_) && (auVar55._8_8_ == auVar56._8_8_))
                    goto LAB_00102060;
                    auVar56 = (**(code **)(*plVar2 + 0x28))(_LC2,plVar2);
                    auVar55 = (**(code **)(*plVar3 + 0x28))(_LC2,plVar3);
                    if ((auVar55._0_8_ == auVar56._0_8_) && (auVar55._8_8_ == auVar56._8_8_))
                    goto LAB_00102060;
                    auVar56 = (**(code **)(*plVar3 + 0x28))(0,plVar3);
                    auVar55 = (**(code **)(*plVar2 + 0x28))(0,plVar2);
                    dVar46 = auVar55._8_8_ - auVar56._8_8_;
                    iVar21 = 0;
                    dVar51 = auVar55._0_8_ - auVar56._0_8_;
                    dVar46 = SQRT(dVar51 * dVar51 + dVar46 * dVar46);
                    do {
                      local_c8 = (void *)((double)iVar21 * __LC15);
                      pcVar4 = *(code **)(*plVar3 + 0x40);
                      (**(code **)(*plVar2 + 0x28))(plVar2);
                      uVar48 = (*pcVar4)(plVar3,&local_c8);
                      dVar51 = (double)(uVar48 & __LC3);
                      if (dVar46 <= (double)(uVar48 & __LC3)) {
                        dVar51 = dVar46;
                      }
                      iVar21 = iVar21 + 1;
                      dVar46 = dVar51;
                    } while (iVar21 != 0x11);
                    iVar21 = 0;
                    do {
                      dVar46 = (double)iVar21;
                      iVar21 = iVar21 + 1;
                      local_c8 = (void *)(dVar46 * __LC15);
                      pcVar4 = *(code **)(*plVar2 + 0x40);
                      (**(code **)(*plVar3 + 0x28))(plVar3);
                      uVar48 = (*pcVar4)(plVar2,&local_c8);
                      piVar18 = (int *)(uVar48 & __LC3);
                      if (dVar51 <= (double)(uVar48 & __LC3)) {
                        piVar18 = (int *)dVar51;
                      }
                      dVar51 = (double)piVar18;
                    } while (iVar21 != 0x11);
                    if ((double)local_228 <= (double)piVar18) {
                      piVar18 = local_228;
                    }
                  }
                  local_228 = piVar18;
                  iVar21 = (int)lVar36;
                  lVar36 = lVar36 + 1;
                } while (iVar21 < iVar34 && (double)local_228 != 0.0);
              }
            }
            puVar24 = puVar24 + 1;
          } while (puVar24 !=
                   (undefined8 *)((long)pvVar26 + ((ulong)(uint)(iVar32 - iVar8) + (long)iVar8) * 8)
                  );
        }
        *(int **)(*plVar27 + lVar31 * 8) = local_228;
        plVar2 = plVar12 + lVar31;
        lVar31 = lVar31 + 1;
        *(int **)(*plVar2 + lVar33) = local_228;
      } while ((int)lVar31 < iVar39);
      lVar31 = lVar16 + 1;
      lVar33 = lVar33 + 8;
      plVar27 = (long *)((long)plVar12 + lVar33);
      *(undefined8 *)(*(long *)((long)plVar12 + lVar33) + lVar33) = _LC14;
      lVar16 = lVar31;
    } while (lVar31 != (ulong)(iVar23 - 3U) + 2);
    lVar16 = (long)((iVar23 + -2) * iVar39 >> 1);
    pdStack_e0 = (double *)operator_new(lVar16 * 8);
    local_e8 = (undefined1  [8])pdStack_e0;
    pdVar17 = pdStack_e0;
    plVar27 = plVar12;
    uVar48 = 0;
    local_d8 = pdStack_e0 + lVar16;
    do {
      lVar16 = (uVar48 + 1) * 8;
      iVar32 = (int)uVar48;
      while( true ) {
        local_c8 = (void *)(*plVar27 + lVar16);
        if (local_d8 == pdVar17) {
          std::vector<double_const*,std::allocator<double_const*>>::_M_realloc_insert<double_const*>
                    ((vector<double_const*,std::allocator<double_const*>> *)local_e8,local_d8,
                     &local_c8);
          pdVar38 = local_d8;
        }
        else {
          *pdVar17 = (double)local_c8;
          pdStack_e0 = pdVar17 + 1;
          pdVar38 = local_d8;
        }
        pdVar17 = pdStack_e0;
        local_d8 = pdVar38;
        if (iVar39 <= iVar32 + 2) break;
        lVar16 = lVar16 + 8;
        iVar32 = iVar32 + 1;
      }
      plVar27 = plVar27 + 1;
      bVar45 = uVar48 != iVar23 - 3U;
      uVar48 = uVar48 + 1;
    } while (bVar45);
    auVar43 = local_e8;
    local_210 = (long)pdStack_e0 - (long)local_e8 >> 3;
    local_220._0_4_ = (int)local_210;
    if (local_e8 != (undefined1  [8])pdStack_e0) {
      qsort((void *)local_e8,local_210,8,cmpDoublePtr);
      goto LAB_001022a3;
    }
    piVar18 = (int *)operator_new(lVar13 * 4);
    *piVar18 = 0;
  }
  local_228 = (int *)(lVar13 * 4);
  if (piVar18 + 1 != piVar18 + lVar13) {
    memset(piVar18 + 1,0,(long)local_228 - 4);
  }
LAB_001023c3:
  ppiVar19 = (int **)operator_new(uVar1);
  *ppiVar19 = (int *)0x0;
  if ((uVar15 != 1) && (ppiVar19 + 1 != ppiVar19 + uVar15)) {
    memset(ppiVar19 + 1,0,uVar1 - 8);
  }
  lVar13 = 0;
  piVar25 = piVar18;
  do {
    ppiVar19[lVar13] = piVar25;
    lVar13 = lVar13 + 1;
    piVar25 = piVar25 + uVar15;
  } while ((int)lVar13 < iVar39);
  if ((int)local_220 < 1) {
    iVar23 = 0;
  }
  else {
    iVar23 = 0;
    pdVar17 = (double *)auVar43;
    do {
      pdVar5 = (double *)*pdVar17;
      if (*pdVar5 != 0.0) break;
      iVar23 = iVar23 + 1;
      pdVar17 = pdVar17 + 1;
      uVar48 = (long)pdVar5 - (long)puVar14 >> 3;
      uVar48 = (ulong)(uint)((int)uVar48 >> 0x1f) << 0x20 | uVar48 & 0xffffffff;
      iVar32 = (int)((long)uVar48 / (long)iVar39);
      iVar8 = (int)((long)uVar48 % (long)iVar39);
      ppiVar19[iVar32][iVar8] = 1;
      ppiVar19[iVar8][iVar32] = 1;
    } while (iVar23 != (int)local_220);
  }
  __src = (undefined4 *)operator_new(uVar1);
  *__src = 0;
  if (__src + 1 != __src + uVar15 * 2) {
    memset(__src + 1,0,uVar1 - 4);
  }
  iVar32 = 0;
  lVar13 = 0;
switchD_00102593_caseD_7:
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_3;
  uVar48 = param_3 / 3;
  uVar10 = (((int)param_3 -
            ((SUB164(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar55,8) & 0xfffffffe) + (int)uVar48)) + iVar32
           ) % 3;
  lVar16 = lVar13;
  do {
    *(uint *)((long)__src + lVar16) = uVar10;
    iVar32 = iVar32 + 1;
    lVar13 = lVar16 + 4;
    if (iVar39 <= iVar32) {
      if ((int)local_220 <= iVar23) goto LAB_0010294b;
      piVar25 = __src + uVar15;
      local_220 = (double *)((long)auVar43 + (long)iVar23 * 8);
      break;
    }
    uVar22 = 7;
    lVar31 = 0;
    do {
      if (*(int *)(*(long *)((long)ppiVar19 + lVar13 * 2) + lVar31) != 0) {
        uVar22 = uVar22 & ~(1 << ((byte)*(undefined4 *)((long)__src + lVar31) & 0x1f));
      }
      bVar45 = lVar16 != lVar31;
      lVar31 = lVar31 + 4;
    } while (bVar45);
    uVar10 = (uint)uVar48;
    param_3 = uVar48;
    lVar16 = lVar13;
    switch(uVar22) {
    default:
      uVar10 = 0;
      break;
    case 2:
      uVar10 = 1;
      break;
    case 3:
      uVar48 = uVar48 >> 1;
      uVar10 = uVar10 & 1;
      break;
    case 4:
      uVar10 = 2;
      break;
    case 5:
      uVar48 = uVar48 >> 1;
      uVar10 = (~uVar10 & 1) * 2;
      break;
    case 6:
      uVar48 = uVar48 >> 1;
      uVar10 = (uVar10 & 1) + 1;
      break;
    case 7:
      goto switchD_00102593_caseD_7;
    }
  } while( true );
  do {
    uVar48 = (long)*local_220 - (long)puVar14 >> 3;
    uVar48 = (ulong)(uint)((int)uVar48 >> 0x1f) << 0x20 | uVar48 & 0xffffffff;
    iVar32 = (int)((long)uVar48 / (long)iVar39);
    iVar8 = (int)((long)uVar48 % (long)iVar39);
    ppiVar19[iVar32][iVar8] = 1;
    piVar40 = ppiVar19[iVar8];
    piVar40[iVar32] = 1;
    if (__src[iVar32] == __src[iVar8]) {
      lVar13 = 0;
      uVar10 = 0;
      do {
        if (piVar40[lVar13] != 0) {
          uVar10 = uVar10 | 1 << ((byte)__src[lVar13] & 0x1f);
        }
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < iVar39);
      if ((~uVar10 & 7) == 0) {
        memcpy(piVar25,__src,uVar15 * 4);
        local_c0 = 8;
        pvVar20 = operator_new(0x40);
        local_c8 = pvVar20;
        local_b8 = (int *)operator_new(0x200);
        puStack_a0 = (undefined8 *)((long)pvVar20 + 0x18);
        *puStack_a0 = local_b8;
        local_a8 = local_b8 + 0x80;
        piVar25[iVar8] =
             *(int *)(tryAddEdge(int*,int_const**,int,int,int,int*)::FIRST_POSSIBLE_COLOR +
                     (ulong)(~(1 << ((byte)piVar25[iVar32] & 0x1f)) & 7) * 4);
        piStack_b0 = local_b8;
        local_98 = local_b8;
        piStack_90 = local_b8;
        local_88 = local_a8;
        puStack_80 = puStack_a0;
        uncolorSameNeighbors((queue *)&local_c8,piVar25,ppiVar19,iVar8,iVar39);
        if (local_b8 == local_98) {
LAB_00102dbd:
          memcpy(__src,piVar25,uVar15 * 4);
        }
        else {
          iVar34 = 0;
          do {
            iVar9 = *local_b8;
            if (local_b8 == local_a8 + -1) {
              operator_delete(piStack_b0,0x200);
              local_b8 = (int *)puStack_a0[1];
              local_a8 = local_b8 + 0x80;
              piStack_b0 = local_b8;
              puStack_a0 = puStack_a0 + 1;
            }
            else {
              local_b8 = local_b8 + 1;
            }
            lVar13 = 0;
            uVar10 = 0;
            piVar40 = ppiVar19[iVar9];
            do {
              if (piVar40[lVar13] != 0) {
                uVar10 = uVar10 | 1 << ((byte)piVar25[lVar13] & 0x1f);
              }
              lVar13 = lVar13 + 1;
            } while ((int)lVar13 < iVar39);
            if ((~uVar10 & 7) == 0) {
              iVar21 = iVar34;
              do {
                iVar34 = iVar21 + 1;
                iVar11 = iVar21 % 3;
                piVar25[iVar9] = iVar11;
                if (piVar40[iVar32] == 0) break;
                iVar21 = iVar34;
              } while (iVar11 == piVar25[iVar32]);
              uncolorSameNeighbors((queue *)&local_c8,piVar25,ppiVar19,iVar9,iVar39);
            }
            else {
              piVar25[iVar9] =
                   *(int *)(tryAddEdge(int*,int_const**,int,int,int,int*)::FIRST_POSSIBLE_COLOR +
                           (long)(int)(~uVar10 & 7) * 4);
            }
            if (local_98 == local_b8) goto LAB_00102dbd;
          } while (iVar34 < 0x10);
          if (local_98 == local_b8) goto LAB_00102dbd;
          ppiVar19[iVar32][iVar8] = 0;
          ppiVar19[iVar8][iVar32] = 0;
        }
        pvVar20 = local_c8;
        if (local_c8 != (void *)0x0) {
          puVar24 = puStack_80 + 1;
          for (puVar42 = puStack_a0; puVar42 < puVar24; puVar42 = puVar42 + 1) {
            operator_delete((void *)*puVar42,0x200);
          }
          operator_delete(pvVar20,local_c0 << 3);
        }
      }
      else {
        __src[iVar8] = *(int *)(tryAddEdge(int*,int_const**,int,int,int,int*)::FIRST_POSSIBLE_COLOR
                               + (long)(int)(~uVar10 & 7) * 4);
      }
    }
    local_220 = local_220 + 1;
  } while (local_220 !=
           (double *)
           ((long)auVar43 + ((ulong)(uint)(((int)local_210 + -1) - iVar23) + (long)iVar23 + 1) * 8))
  ;
LAB_0010294b:
  lVar13 = 0;
  iVar39 = -1;
  local_78._8_4_ = 5;
  local_78._0_8_ = _LC16;
  if (0 < local_158) {
    do {
      iVar23 = iVar39 + 1;
      lVar16 = (long)iVar23 * 4;
      if (*(int *)(uVar7 + (long)iVar23 * 4) != (int)lVar13) {
        lVar16 = lVar16 + -4;
        iVar23 = iVar39;
      }
      iVar39 = iVar23;
      lVar31 = lVar13 * 8;
      lVar13 = lVar13 + 1;
      *(undefined4 *)(*(long *)((long)pvVar26 + lVar31) + 8) =
           *(undefined4 *)(local_78 + (long)*(int *)((long)__src + lVar16) * 4);
    } while (lVar13 != local_158);
  }
  operator_delete(__src,uVar1);
  operator_delete(ppiVar19,uVar1);
  operator_delete(piVar18,(ulong)local_228);
  if (auVar43 != (undefined1  [8])0x0) {
    operator_delete((void *)auVar43,(long)pdVar38 - (long)auVar43);
  }
  operator_delete(plVar12,uVar1);
  operator_delete(puVar14,uVar30);
  goto LAB_00101fdc;
}



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
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00103020;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010302a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00103020:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010302a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010302a;
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
    if (__src == (void *)0x0) goto LAB_00102ffb;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00102ffb:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<msdfgen::EdgeColoringInkTrapCorner,
   std::allocator<msdfgen::EdgeColoringInkTrapCorner>
   >::_M_realloc_insert<msdfgen::EdgeColoringInkTrapCorner
   const&>(__gnu_cxx::__normal_iterator<msdfgen::EdgeColoringInkTrapCorner*,
   std::vector<msdfgen::EdgeColoringInkTrapCorner,
   std::allocator<msdfgen::EdgeColoringInkTrapCorner> > >, msdfgen::EdgeColoringInkTrapCorner
   const&) */

void __thiscall
std::vector<msdfgen::EdgeColoringInkTrapCorner,std::allocator<msdfgen::EdgeColoringInkTrapCorner>>::
_M_realloc_insert<msdfgen::EdgeColoringInkTrapCorner_const&>
          (vector<msdfgen::EdgeColoringInkTrapCorner,std::allocator<msdfgen::EdgeColoringInkTrapCorner>>
           *this,void *param_2,undefined8 *param_3)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    uVar6 = uVar5 + 1;
    if (0xfffffffffffffffe < uVar5) goto LAB_001031c0;
    if (0x555555555555555 < uVar6) {
      uVar6 = 0x555555555555555;
    }
    uVar6 = uVar6 * 0x18;
LAB_001031ca:
    __dest_00 = operator_new(uVar6);
    lVar4 = uVar6 + (long)__dest_00;
  }
  else {
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5) {
LAB_001031c0:
      uVar6 = 0x7ffffffffffffff8;
      goto LAB_001031ca;
    }
    if (uVar6 != 0) {
      if (0x555555555555555 < uVar6) {
        uVar6 = 0x555555555555555;
      }
      uVar6 = uVar6 * 0x18;
      goto LAB_001031ca;
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
    if (__src == (void *)0x0) goto LAB_001031a6;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_001031a6:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<msdfgen::EdgeSegment*, std::allocator<msdfgen::EdgeSegment*>
   >::_M_realloc_insert<msdfgen::EdgeSegment*
   const&>(__gnu_cxx::__normal_iterator<msdfgen::EdgeSegment**, std::vector<msdfgen::EdgeSegment*,
   std::allocator<msdfgen::EdgeSegment*> > >, msdfgen::EdgeSegment* const&) */

void __thiscall
std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
_M_realloc_insert<msdfgen::EdgeSegment*const&>
          (vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>> *this,void *param_2,
          undefined8 *param_3)

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
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00103350;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010335a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00103350:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010335a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010335a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010332c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010332c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<msdfgen::EdgeHolder, std::allocator<msdfgen::EdgeHolder>
   >::_M_realloc_insert<msdfgen::EdgeHolder>(__gnu_cxx::__normal_iterator<msdfgen::EdgeHolder*,
   std::vector<msdfgen::EdgeHolder, std::allocator<msdfgen::EdgeHolder> > >, msdfgen::EdgeHolder&&)
    */

void __thiscall
std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
_M_realloc_insert<msdfgen::EdgeHolder>
          (vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *this,EdgeHolder *param_2
          ,EdgeHolder *param_3)

{
  EdgeHolder *pEVar1;
  EdgeHolder *pEVar2;
  ulong uVar3;
  ulong uVar4;
  EdgeHolder *pEVar5;
  EdgeHolder *pEVar6;
  EdgeHolder *pEVar7;
  EdgeHolder *pEVar8;
  EdgeHolder *local_60;
  EdgeHolder *local_50;
  
  pEVar1 = *(EdgeHolder **)(this + 8);
  pEVar2 = *(EdgeHolder **)this;
  uVar3 = (long)pEVar1 - (long)pEVar2 >> 3;
  if (uVar3 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pEVar2 == pEVar1) {
    uVar4 = uVar3 + 1;
    if (0xfffffffffffffffe < uVar3) goto LAB_00103560;
    if (0xfffffffffffffff < uVar4) {
      uVar4 = 0xfffffffffffffff;
    }
    uVar4 = uVar4 * 8;
LAB_0010356a:
    local_60 = (EdgeHolder *)operator_new(uVar4);
    local_50 = local_60 + uVar4;
    msdfgen::EdgeHolder::EdgeHolder(local_60 + (long)(param_2 + -(long)pEVar2),param_3);
    pEVar6 = local_60;
    pEVar5 = pEVar2;
    if (param_2 != pEVar2) goto LAB_001034b8;
    pEVar6 = local_60 + 8;
    if (pEVar2 != pEVar1) goto LAB_001034e0;
LAB_00103511:
    if (pEVar2 == (EdgeHolder *)0x0) goto LAB_00103532;
  }
  else {
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar3) {
LAB_00103560:
      uVar4 = 0x7ffffffffffffff8;
      goto LAB_0010356a;
    }
    if (uVar4 != 0) {
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
      goto LAB_0010356a;
    }
    msdfgen::EdgeHolder::EdgeHolder(param_2 + -(long)pEVar2,param_3);
    local_50 = (EdgeHolder *)0x0;
    local_60 = (EdgeHolder *)0x0;
    pEVar6 = local_60;
    pEVar5 = pEVar2;
    if (param_2 == pEVar2) {
      pEVar6 = (EdgeHolder *)0x8;
      goto LAB_001034e0;
    }
LAB_001034b8:
    do {
      pEVar7 = pEVar6;
      pEVar8 = pEVar5 + 8;
      msdfgen::EdgeHolder::EdgeHolder(pEVar7,pEVar5);
      pEVar6 = pEVar7 + 8;
      pEVar5 = pEVar8;
    } while (pEVar8 != param_2);
    pEVar6 = pEVar7 + 0x10;
    pEVar5 = pEVar2;
    if (pEVar8 == pEVar1) {
LAB_00103500:
      do {
        pEVar7 = pEVar5 + 8;
        msdfgen::EdgeHolder::~EdgeHolder(pEVar5);
        pEVar5 = pEVar7;
      } while (pEVar7 != pEVar1);
      goto LAB_00103511;
    }
LAB_001034e0:
    do {
      pEVar7 = param_2 + 8;
      pEVar5 = pEVar6 + 8;
      msdfgen::EdgeHolder::EdgeHolder(pEVar6,param_2);
      pEVar6 = pEVar5;
      param_2 = pEVar7;
    } while (pEVar7 != pEVar1);
    pEVar5 = pEVar2;
    if (pEVar2 != pEVar1) goto LAB_00103500;
  }
  operator_delete(pEVar2,*(long *)(this + 0x10) - (long)pEVar2);
LAB_00103532:
  *(EdgeHolder **)this = local_60;
  *(EdgeHolder **)(this + 8) = pEVar6;
  *(EdgeHolder **)(this + 0x10) = local_50;
  return;
}



/* void std::deque<int, std::allocator<int> >::_M_push_back_aux<int const&>(int const&) */

void __thiscall
std::deque<int,std::allocator<int>>::_M_push_back_aux<int_const&>
          (deque<int,std::allocator<int>> *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *__src;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *__dest;
  void *unaff_R15;
  undefined1 uVar9;
  
  plVar6 = *(long **)(this + 0x48);
  __src = *(long **)(this + 0x28);
  lVar8 = (long)plVar6 - (long)__src;
  if ((*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 2) +
      ((lVar8 >> 3) + -1 + (ulong)(plVar6 == (long *)0x0)) * 0x80 +
      (*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 2) == 0x1fffffffffffffff) {
LAB_001038ac:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  uVar5 = *(ulong *)(this + 8);
  if (1 < uVar5 - ((long)plVar6 - *(long *)this >> 3)) goto LAB_001036da;
  __dest = (long *)((lVar8 >> 3) + 2);
  if ((ulong)((long)__dest * 2) < uVar5) {
    __dest = (long *)(*(long *)this + (uVar5 - (long)__dest >> 1) * 8);
    sVar4 = (long)plVar6 + (8 - (long)__src);
    if (__dest < __src) {
      if ((long)sVar4 < 9) {
        if (sVar4 == 8) {
          lVar3 = *__src;
          *__dest = lVar3;
          goto LAB_001037bf;
        }
        goto LAB_001037bc;
      }
      memmove(__dest,__src,sVar4);
      lVar3 = *__dest;
    }
    else if ((long)sVar4 < 9) {
      if (sVar4 != 8) goto LAB_001037bc;
      *(long *)((long)__dest + lVar8) = *__src;
      lVar3 = *__dest;
    }
    else {
      memmove((void *)((long)__dest + ((lVar8 + 8) - sVar4)),__src,sVar4);
      lVar3 = *__dest;
    }
  }
  else {
    if (uVar5 == 0) {
      uVar5 = 0x18;
      uVar7 = 3;
LAB_0010376b:
      unaff_R15 = operator_new(uVar5);
      __src = *(long **)(this + 0x28);
      __dest = (long *)((long)unaff_R15 + (uVar7 - (long)__dest >> 1) * 8);
      sVar4 = (*(long *)(this + 0x48) + 8) - (long)__src;
      uVar9 = sVar4 == 8;
      if ((long)sVar4 < 9) goto LAB_00103870;
      memmove(__dest,__src,sVar4);
    }
    else {
      uVar7 = (uVar5 + 1) * 2;
      if (uVar7 >> 0x3c == 0) {
        uVar5 = (uVar5 + 1) * 0x10;
        goto LAB_0010376b;
      }
      uVar9 = uVar7 == 0x1fffffffffffffff;
      if (uVar7 < 0x2000000000000000) {
        std::__throw_bad_alloc();
        goto LAB_001038ac;
      }
      std::__throw_bad_array_new_length();
LAB_00103870:
      if ((bool)uVar9) {
        *__dest = *__src;
      }
    }
    operator_delete(*(void **)this,*(long *)(this + 8) * 8);
    *(void **)this = unaff_R15;
    *(ulong *)(this + 8) = uVar7;
LAB_001037bc:
    lVar3 = *__dest;
  }
LAB_001037bf:
  *(long *)(this + 0x18) = lVar3;
  plVar6 = (long *)((long)__dest + lVar8);
  *(long *)(this + 0x20) = lVar3 + 0x200;
  lVar8 = *plVar6;
  *(long **)(this + 0x28) = __dest;
  *(long **)(this + 0x48) = plVar6;
  *(long *)(this + 0x38) = lVar8;
  *(long *)(this + 0x40) = lVar8 + 0x200;
LAB_001036da:
  pvVar2 = operator_new(0x200);
  iVar1 = *param_1;
  plVar6[1] = (long)pvVar2;
  **(int **)(this + 0x30) = iVar1;
  lVar8 = *(long *)(*(long *)(this + 0x48) + 8);
  *(long *)(this + 0x30) = lVar8;
  *(long *)(this + 0x38) = lVar8;
  *(long *)(this + 0x40) = lVar8 + 0x200;
  *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
  return;
}



/* void std::vector<int, std::allocator<int>
   >::_M_realloc_insert<int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int&&) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
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
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00103980;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010398a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00103980:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010398a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010398a;
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
    if (__src == (void *)0x0) goto LAB_0010395b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010395b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<msdfgen::EdgeSegment*, std::allocator<msdfgen::EdgeSegment*>
   >::_M_realloc_insert<msdfgen::EdgeSegment*>(__gnu_cxx::__normal_iterator<msdfgen::EdgeSegment**,
   std::vector<msdfgen::EdgeSegment*, std::allocator<msdfgen::EdgeSegment*> > >,
   msdfgen::EdgeSegment*&&) */

void __thiscall
std::vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>>::
_M_realloc_insert<msdfgen::EdgeSegment*>
          (vector<msdfgen::EdgeSegment*,std::allocator<msdfgen::EdgeSegment*>> *this,void *param_2,
          undefined8 *param_3)

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
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00103b10;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_00103b1a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00103b10:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_00103b1a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00103b1a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00103aec;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00103aec:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<double const*, std::allocator<double const*> >::_M_realloc_insert<double
   const*>(__gnu_cxx::__normal_iterator<double const**, std::vector<double const*,
   std::allocator<double const*> > >, double const*&&) */

void __thiscall
std::vector<double_const*,std::allocator<double_const*>>::_M_realloc_insert<double_const*>
          (vector<double_const*,std::allocator<double_const*>> *this,void *param_2,
          undefined8 *param_3)

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
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00103ca0;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_00103caa:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00103ca0:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_00103caa;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00103caa;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00103c7c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00103c7c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}


