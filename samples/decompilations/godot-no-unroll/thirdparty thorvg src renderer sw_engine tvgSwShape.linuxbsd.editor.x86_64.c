
/* shapePrepare(SwShape*, tvg::RenderShape const*, tvg::Matrix const&, SwBBox const&, SwBBox&,
   SwMpool*, unsigned int, bool) */

undefined8
shapePrepare(SwShape *param_1,RenderShape *param_2,Matrix *param_3,SwBBox *param_4,SwBBox *param_5,
            SwMpool *param_6,uint param_7,bool param_8)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = _genOutline(param_1,param_2,param_3,param_6,param_7,param_8);
  if ((cVar3 != '\0') &&
     (cVar3 = mathUpdateOutlineBBox(*(SwOutline **)param_1,param_4,param_5,(bool)param_1[0x48]),
     cVar3 != '\0')) {
    uVar2 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)param_5;
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)(param_5 + 0x18);
    lVar1 = *(long *)param_5;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    if (((lVar1 < *(long *)(param_5 + 0x10)) || (*(long *)(param_5 + 8) < *(long *)(param_5 + 0x18))
        ) && (((lVar1 < *(long *)(param_4 + 0x10) &&
               (*(long *)(param_5 + 8) < *(long *)(param_4 + 0x18))) &&
              (*(long *)param_4 < *(long *)(param_5 + 0x10))))) {
      return CONCAT71((int7)((ulong)*(long *)(param_4 + 8) >> 8),
                      *(long *)(param_4 + 8) < *(long *)(param_5 + 0x18));
    }
  }
  return 0;
}



/* shapePrepared(SwShape const*) */

bool shapePrepared(SwShape *param_1)

{
  return *(long *)(param_1 + 0x18) != 0;
}



/* shapeGenRle(SwShape*, tvg::RenderShape const*, bool) */

SwShape shapeGenRle(SwShape *param_1,RenderShape *param_2,bool param_3)

{
  long lVar1;
  
  if (param_1[0x48] != (SwShape)0x0) {
    return param_1[0x48];
  }
  lVar1 = rleRender(*(SwRle **)(param_1 + 0x18),*(SwOutline **)param_1,(SwBBox *)(param_1 + 0x28),
                    param_3);
  *(long *)(param_1 + 0x18) = lVar1;
  return (SwShape)(lVar1 != 0);
}



/* shapeDelOutline(SwShape*, SwMpool*, unsigned int) */

void shapeDelOutline(SwShape *param_1,SwMpool *param_2,uint param_3)

{
  mpoolRetOutline(param_2,param_3);
  *(undefined8 *)param_1 = 0;
  return;
}



/* shapeReset(SwShape*) */

void shapeReset(SwShape *param_1)

{
  rleReset(*(SwRle **)(param_1 + 0x18));
  rleReset(*(SwRle **)(param_1 + 0x20));
  param_1[0x48] = (SwShape)0x0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  return;
}



/* shapeFree(SwShape*) */

void shapeFree(SwShape *param_1)

{
  rleFree(*(SwRle **)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(SwFill **)(param_1 + 0x10) != (SwFill *)0x0) {
    fillFree(*(SwFill **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    rleFree(*(SwRle **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    strokeFree(*(SwStroke **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* shapeDelStroke(SwShape*) */

void shapeDelStroke(SwShape *param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    rleFree(*(SwRle **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    strokeFree(*(SwStroke **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  return;
}



/* shapeResetStroke(SwShape*, tvg::RenderShape const*, tvg::Matrix const&) */

void shapeResetStroke(SwShape *param_1,RenderShape *param_2,Matrix *param_3)

{
  SwStroke *pSVar1;
  
  pSVar1 = *(SwStroke **)(param_1 + 8);
  if (pSVar1 == (SwStroke *)0x0) {
    pSVar1 = (SwStroke *)calloc(1,0xc0);
    *(SwStroke **)(param_1 + 8) = pSVar1;
    if (pSVar1 == (SwStroke *)0x0) {
      return;
    }
  }
  strokeReset(pSVar1,param_2,param_3);
  rleReset(*(SwRle **)(param_1 + 0x20));
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* shapeGenStrokeRle(SwShape*, tvg::RenderShape const*, tvg::Matrix const&, SwBBox const&, SwBBox&,
   SwMpool*, unsigned int) */

ulong shapeGenStrokeRle(SwShape *param_1,RenderShape *param_2,Matrix *param_3,SwBBox *param_4,
                       SwBBox *param_5,SwMpool *param_6,uint param_7)

{
  Point *pPVar1;
  int *piVar2;
  undefined4 *puVar3;
  float *pfVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  Point *pPVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  undefined1 auVar13 [16];
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  SwOutline *pSVar17;
  ulong uVar18;
  void *pvVar19;
  SwBBox *pSVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  long extraout_RDX;
  RenderShape *pRVar24;
  Point *pPVar25;
  byte bVar26;
  int *piVar27;
  ulong uVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_144;
  uint local_138;
  float local_100;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  Bezier local_b8 [8];
  Point local_b0 [8];
  Point local_a8 [8];
  Point local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [12];
  uint uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  uVar15 = _LC3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(param_2 + 0x28);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  fVar30 = *(float *)(lVar6 + 0x30);
  fVar33 = *(float *)(lVar6 + 0x34);
  if (((fVar30 == 0.0) && (fVar33 == _LC6)) || (_LC6 <= (float)((uint)(fVar33 - fVar30) & _LC3))) {
    pSVar20 = (SwBBox *)(ulong)*(uint *)(lVar6 + 0x18);
    if (*(uint *)(lVar6 + 0x18) != 0) {
      bVar11 = false;
      goto LAB_0010130e;
    }
    pSVar17 = *(SwOutline **)param_1;
    if (pSVar17 == (SwOutline *)0x0) {
      cVar14 = _genOutline(param_1,param_2,param_3,param_6,param_7,false);
      if (cVar14 != '\0') {
        pSVar17 = *(SwOutline **)param_1;
        goto LAB_00101724;
      }
      goto LAB_00101778;
    }
LAB_00101724:
    cVar14 = strokeParseOutline(*(SwStroke **)(param_1 + 8),pSVar17);
    if (cVar14 == '\0') {
LAB_00101731:
      uVar29 = 0;
    }
    else {
      pSVar17 = (SwOutline *)strokeExportOutline(*(SwStroke **)(param_1 + 8),param_6,param_7);
      cVar14 = mathUpdateOutlineBBox(pSVar17,param_4,param_5,false);
      if (cVar14 == '\0') goto LAB_00101731;
      uVar15 = 0;
LAB_00101895:
      uVar16 = rleRender(*(SwRle **)(param_1 + 0x20),pSVar17,param_5,true);
      *(undefined8 *)(param_1 + 0x20) = uVar16;
      if ((char)uVar15 != '\0') {
        uVar29 = (ulong)uVar15;
        goto LAB_00101958;
      }
      uVar29 = 1;
    }
LAB_00101734:
    mpoolRetStrokeOutline(param_6,param_7);
  }
  else {
    bVar11 = true;
    pSVar20 = param_4;
LAB_0010130e:
    iVar23 = *(int *)(param_2 + 8);
    piVar7 = *(int **)param_2;
    pPVar8 = *(Point **)(param_2 + 0x10);
    uVar29 = CONCAT71((int7)((ulong)pSVar20 >> 8),*(int *)(param_2 + 0x18) == 0 || iVar23 == 0) &
             0xffffffff;
    if (*(int *)(param_2 + 0x18) != 0 && iVar23 != 0) {
      local_68 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      fVar31 = *(float *)(lVar6 + 0x1c);
      uVar22 = *(uint *)(lVar6 + 0x18);
      bVar5 = *(bool *)(lVar6 + 0x38);
      local_58._0_13_ = SUB1613((undefined1  [16])0x0,0);
      local_58[0xd] = 1;
      local_58._12_2_ = SUB142(local_58._0_14_,0xc);
      local_58._0_12_ = *(undefined1 (*) [12])(lVar6 + 0x10);
      local_58._14_2_ = 0;
      piVar27 = piVar7;
      pPVar25 = pPVar8;
      local_144 = fVar31;
      if (bVar11) {
        fVar32 = (float)((uint)fVar31 & _LC3);
        if (_LC6 <= (float)((uint)(fVar33 - fVar30) & _LC3)) {
          if (uVar22 != 0) goto joined_r0x00101af8;
          fVar34 = 0.0;
          fVar33 = _LC6;
        }
        else {
          if (_LC6 < fVar30) {
            fVar30 = fVar30 - _LC6;
            bVar10 = fVar33 <= _LC6;
LAB_00101cc1:
            if (fVar33 <= _LC6) {
              if (fVar33 < 0.0) {
                fVar33 = fVar33 + _LC6;
              }
            }
            else {
              fVar33 = fVar33 - _LC6;
            }
            if (!bVar10) goto LAB_00101cd2;
LAB_00101d20:
            fVar12 = fVar33;
            fVar34 = fVar30;
            if (fVar30 < fVar33) goto joined_r0x00101cd9;
          }
          else {
            if (fVar30 < 0.0) {
              fVar30 = fVar30 + _LC6;
              bVar10 = 0.0 <= fVar33;
              goto LAB_00101cc1;
            }
            fVar34 = fVar30;
            if (fVar30 < 0.0) {
              if (fVar33 <= _LC6) goto LAB_001020f0;
              fVar33 = fVar33 - _LC6;
              goto joined_r0x00101f9e;
            }
            if (fVar33 < 0.0) {
LAB_001020f0:
              if (fVar33 < 0.0) {
                fVar33 = fVar33 + _LC6;
                goto LAB_00101d20;
              }
              goto joined_r0x00101f9e;
            }
            if (_LC6 < fVar33) {
              fVar33 = fVar33 - _LC6;
              goto LAB_00101d20;
            }
LAB_00101cd2:
            fVar12 = fVar33;
            if (fVar30 <= fVar33) {
              fVar12 = fVar30;
              fVar30 = fVar33;
            }
joined_r0x00101cd9:
            fVar34 = fVar12;
            fVar33 = fVar30;
          }
joined_r0x00101f9e:
          if (uVar22 != 0) goto joined_r0x00101fbe;
        }
        pvVar19 = malloc(0x10);
        local_100 = _LC4;
        local_58._0_8_ = pvVar19;
        if (_LC4 < fVar32) {
          uVar18 = 0;
          uVar28 = 0;
          fVar30 = 0.0;
          goto LAB_00101b42;
        }
        uVar16 = mpoolReqDashOutline(param_6,param_7);
        local_78._0_8_ = uVar16;
        if (*piVar7 != 1) goto LAB_00101420;
        local_138 = 0;
        bVar26 = 0;
LAB_00101ee5:
        pRVar24 = (RenderShape *)0x0;
        fVar30 = (float)_outlineLength(param_2,0,0,bVar5);
        _trimPattern((SwDashStroke *)local_78,pRVar24,fVar30,fVar34,fVar33);
        bVar11 = true;
        uVar16 = local_78._0_8_;
LAB_00101c17:
        local_78._0_8_ = uVar16;
        auVar13 = local_58;
        uStack_6c = local_138 % (uint)local_58._8_4_;
        pfVar4 = (float *)(local_58._0_8_ + (long)(int)uStack_6c * 4);
        local_58[0xc] = bVar26;
        local_58._14_2_ = auVar13._14_2_;
        local_58[0xd] = 1;
        local_68._8_8_ = *(undefined8 *)pPVar8;
        local_68._0_8_ = *(undefined8 *)pPVar8;
        local_78._8_4_ = *pfVar4 - local_144;
        piVar27 = piVar7 + 1;
        pPVar25 = pPVar8 + 8;
      }
      else {
        if (uVar22 == 0) goto LAB_00101778;
joined_r0x00101af8:
        fVar34 = 0.0;
        fVar33 = _LC6;
joined_r0x00101fbe:
        if (_LC4 < (float)((uint)fVar31 & _LC3)) {
          local_100 = _LC4;
          uVar28 = (ulong)uVar22;
          fVar30 = 0.0;
          uVar18 = 0;
          do {
            fVar30 = fVar30 + *(float *)(*(long *)*(undefined1 (*) [12])(lVar6 + 0x10) + uVar18 * 4)
            ;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar28);
          if ((uVar22 & 1) == 0) {
            bVar11 = false;
            uVar18 = uVar28;
          }
          else {
            fVar30 = fVar30 + fVar30;
            bVar11 = false;
            uVar18 = uVar28 * 2;
          }
LAB_00101b42:
          do {
            local_144 = local_144 - (local_144 / fVar30) * fVar30;
          } while ((in_FPUStatusWord & 0x400) != 0);
          _LC4 = local_100;
          if (NAN(local_144)) {
            fmodf(fVar31,fVar30);
          }
          else if (local_144 < 0.0) {
            local_144 = local_144 + fVar30;
          }
          if (uVar18 == 0) {
            local_138 = 0;
          }
          else {
            uVar21 = 0;
            do {
              fVar30 = *(float *)(local_58._0_8_ + (uVar21 % uVar28) * 4);
              if (local_144 < fVar30) break;
              uVar21 = uVar21 + 1;
              local_144 = local_144 - fVar30;
            } while (uVar21 != uVar18);
            local_138 = (uint)uVar21;
          }
          uVar16 = mpoolReqDashOutline(param_6,param_7);
          local_78._0_8_ = uVar16;
          if (*piVar7 == 1) {
            bVar26 = (byte)local_138 & 1;
            if (bVar11) goto LAB_00101ee5;
            goto LAB_00101c17;
          }
        }
        else {
          local_100 = _LC4;
          uVar16 = mpoolReqDashOutline(param_6,param_7);
          local_78._0_8_ = uVar16;
          if (*piVar7 == 1) {
            bVar11 = false;
            bVar26 = 0;
            local_138 = 0;
            goto LAB_00101c17;
          }
          bVar11 = false;
LAB_00101420:
          local_138 = 0;
        }
      }
      if (iVar23 != 1) {
        piVar2 = piVar27 + (iVar23 - 1);
        do {
          while (iVar23 = *piVar27, iVar23 == 2) {
            _dashLineTo((SwDashStroke *)local_78,pPVar25,param_3);
            pPVar25 = pPVar25 + 8;
LAB_001014b5:
            piVar27 = piVar27 + 1;
            if (piVar27 == piVar2) goto LAB_00101825;
          }
          if (2 < iVar23) {
            if (iVar23 == 3) {
              local_d8 = local_68._8_8_;
              uStack_d0 = *(undefined8 *)pPVar25;
              local_c8 = *(undefined8 *)(pPVar25 + 8);
              uStack_c0 = *(undefined8 *)(pPVar25 + 0x10);
              fVar30 = (float)tvg::Bezier::length();
              if ((float)(uVar15 & (uint)fVar30) <= local_100) {
                _outlineMoveTo((SwOutline *)local_78._0_8_,(Point *)(local_68 + 8),param_3,false);
              }
              else if (fVar30 <= (float)local_78._8_4_) {
                local_78._8_4_ = (float)local_78._8_4_ - fVar30;
                if (local_58[0xc] == 0) {
                  if (local_58[0xd] != '\0') {
                    _outlineMoveTo((SwOutline *)local_78._0_8_,(Point *)(local_68 + 8),param_3,false
                                  );
                    local_58[0xd] = 0;
                  }
                  _outlineCubicTo((SwOutline *)local_78._0_8_,pPVar25,pPVar25 + 8,pPVar25 + 0x10,
                                  param_3);
                }
              }
              else {
                fVar32 = fVar30 - (float)local_78._8_4_;
                fVar31 = (float)local_78._8_4_;
                bVar26 = local_58[0xc];
                if (__LC5 < fVar32) {
                  do {
                    if (fVar31 <= 0.0) {
                      local_98 = local_d8;
                      uStack_90 = uStack_d0;
                      local_88 = local_c8;
                      uStack_80 = uStack_c0;
                    }
                    else {
                      tvg::Bezier::split(fVar31,(Bezier *)&local_d8,local_b8);
                      fVar30 = fVar32;
                      if (local_58[0xc] == 0) {
                        if (local_58[0xd] == '\0') {
                          if (*(float *)(local_58._0_8_ + (long)(int)uStack_6c * 4) -
                              (float)local_78._8_4_ < local_100) goto LAB_0010169f;
                        }
                        else {
LAB_0010169f:
                          _outlineMoveTo((SwOutline *)local_78._0_8_,(Point *)local_b8,param_3,false
                                        );
                          local_58[0xd] = 0;
                        }
                        _outlineCubicTo((SwOutline *)local_78._0_8_,local_b0,local_a8,local_a0,
                                        param_3);
                      }
                    }
                    auVar13 = local_58;
                    bVar26 = local_58[0xc] ^ 1;
                    uVar22 = (uStack_6c + 1) % (uint)local_58._8_4_;
                    fVar31 = *(float *)(local_58._0_8_ + (long)(int)uVar22 * 4);
                    local_58[0xc] = bVar26;
                    local_58._14_2_ = auVar13._14_2_;
                    local_58[0xd] = 1;
                    fVar32 = fVar30 - fVar31;
                    local_68._8_8_ = local_98;
                    local_78._8_4_ = fVar31;
                    uStack_6c = uVar22;
                    local_d8 = local_98;
                    uStack_d0 = uStack_90;
                    local_c8 = local_88;
                    uStack_c0 = uStack_80;
                  } while (__LC5 < fVar32);
                }
                local_78._8_4_ = fVar31 - fVar30;
                fVar31 = fVar31 - fVar30;
                if (bVar26 == 0) {
                  if (local_58[0xd] != '\0') {
                    _outlineMoveTo((SwOutline *)local_78._0_8_,(Point *)&local_d8,param_3,false);
                    local_58[0xd] = 0;
                  }
                  _outlineCubicTo((SwOutline *)local_78._0_8_,(Point *)&uStack_d0,(Point *)&local_c8
                                  ,(Point *)&uStack_c0,param_3);
                  fVar31 = (float)local_78._8_4_;
                }
                if ((fVar31 < _LC8) && (1 < (long)(fVar30 * __LC7))) {
                  uVar22 = (uStack_6c + 1) % (uint)local_58._8_4_;
                  puVar3 = (undefined4 *)(local_58._0_8_ + (long)(int)uVar22 * 4);
                  local_58[0xc] = local_58[0xc] ^ 1;
                  local_78._8_4_ = *puVar3;
                  uStack_6c = uVar22;
                }
              }
              pPVar1 = pPVar25 + 0x10;
              pPVar25 = pPVar25 + 0x18;
              local_68._8_8_ = *(undefined8 *)pPVar1;
            }
            goto LAB_001014b5;
          }
          if (iVar23 != 0) {
            if (iVar23 == 1) {
              if (bVar11) {
                if (bVar5 == false) {
                  local_68._8_8_ = *(undefined8 *)pPVar25;
                  local_68._0_8_ = *(undefined8 *)pPVar25;
                }
                else {
                  pRVar24 = (RenderShape *)((long)pPVar25 - (long)pPVar8 >> 3);
                  fVar30 = (float)_outlineLength(param_2,(uint)pRVar24,
                                                 (uint)((long)piVar27 - (long)piVar7 >> 2),true);
                  _trimPattern((SwDashStroke *)local_78,pRVar24,fVar30,fVar34,fVar33);
                  iVar23 = (int)((extraout_RDX << 0x20 | (ulong)local_138) %
                                (ulong)(uint)local_58._8_4_);
                  pfVar4 = (float *)(local_58._0_8_ + (long)iVar23 * 4);
                  local_58[0xc] = (byte)local_138 & 1;
                  local_68._8_8_ = *(undefined8 *)pPVar25;
                  local_68._0_8_ = *(undefined8 *)pPVar25;
                  local_78._8_4_ = *pfVar4 - local_144;
                  uStack_6c = iVar23;
                }
              }
              else {
                uVar22 = local_138 % (uint)local_58._8_4_;
                pfVar4 = (float *)(local_58._0_8_ + (long)(int)uVar22 * 4);
                local_58[0xc] = (byte)local_138 & 1;
                local_68._8_8_ = *(undefined8 *)pPVar25;
                local_68._0_8_ = *(undefined8 *)pPVar25;
                local_78._8_4_ = *pfVar4 - local_144;
                uStack_6c = uVar22;
              }
              local_58[0xd] = 1;
              pPVar25 = pPVar25 + 8;
            }
            goto LAB_001014b5;
          }
          piVar27 = piVar27 + 1;
          _dashLineTo((SwDashStroke *)local_78,(Point *)local_68,param_3);
        } while (piVar27 != piVar2);
      }
LAB_00101825:
      _outlineEnd((SwOutline *)local_78._0_8_);
      if (bVar11) {
        free((void *)local_58._0_8_);
      }
      if ((SwOutline *)local_78._0_8_ != (SwOutline *)0x0) {
        cVar14 = strokeParseOutline(*(SwStroke **)(param_1 + 8),(SwOutline *)local_78._0_8_);
        if (cVar14 != '\0') {
          pSVar17 = (SwOutline *)strokeExportOutline(*(SwStroke **)(param_1 + 8),param_6,param_7);
          uVar15 = mathUpdateOutlineBBox(pSVar17,param_4,param_5,false);
          if ((char)uVar15 != '\0') goto LAB_00101895;
        }
LAB_00101958:
        mpoolRetDashOutline(param_6,param_7);
        goto LAB_00101734;
      }
    }
LAB_00101778:
    uVar29 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* shapeGenFillColors(SwShape*, tvg::Fill const*, tvg::Matrix const&, SwSurface*, unsigned char,
   bool) */

void shapeGenFillColors(SwShape *param_1,Fill *param_2,Matrix *param_3,SwSurface *param_4,
                       uchar param_5,bool param_6)

{
  fillGenColorTable(*(SwFill **)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6);
  return;
}



/* shapeGenStrokeFillColors(SwShape*, tvg::Fill const*, tvg::Matrix const&, SwSurface*, unsigned
   char, bool) */

void shapeGenStrokeFillColors
               (SwShape *param_1,Fill *param_2,Matrix *param_3,SwSurface *param_4,uchar param_5,
               bool param_6)

{
  fillGenColorTable(*(SwFill **)(*(long *)(param_1 + 8) + 0x68),param_2,param_3,param_4,param_5,
                    param_6);
  return;
}



/* shapeResetFill(SwShape*) */

void shapeResetFill(SwShape *param_1)

{
  SwFill *pSVar1;
  
  pSVar1 = *(SwFill **)(param_1 + 0x10);
  if (pSVar1 == (SwFill *)0x0) {
    pSVar1 = (SwFill *)calloc(1,0x48);
    *(SwFill **)(param_1 + 0x10) = pSVar1;
    if (pSVar1 == (SwFill *)0x0) {
      return;
    }
  }
  fillReset(pSVar1);
  return;
}



/* shapeResetStrokeFill(SwShape*) */

void shapeResetStrokeFill(SwShape *param_1)

{
  long lVar1;
  SwFill *pSVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  pSVar2 = *(SwFill **)(lVar1 + 0x68);
  if (pSVar2 == (SwFill *)0x0) {
    pSVar2 = (SwFill *)calloc(1,0x48);
    *(SwFill **)(lVar1 + 0x68) = pSVar2;
    if (pSVar2 == (SwFill *)0x0) {
      return;
    }
  }
  fillReset(pSVar2);
  return;
}



/* shapeDelFill(SwShape*) */

void shapeDelFill(SwShape *param_1)

{
  if (*(SwFill **)(param_1 + 0x10) != (SwFill *)0x0) {
    fillFree(*(SwFill **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* shapeDelStrokeFill(SwShape*) */

void shapeDelStrokeFill(SwShape *param_1)

{
  if (*(SwFill **)(*(long *)(param_1 + 8) + 0x68) != (SwFill *)0x0) {
    fillFree(*(SwFill **)(*(long *)(param_1 + 8) + 0x68));
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x68) = 0;
  }
  return;
}


