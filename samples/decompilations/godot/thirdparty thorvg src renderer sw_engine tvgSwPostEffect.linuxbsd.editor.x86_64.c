
/* effectGaussianBlurRegion(tvg::RenderEffectGaussianBlur*) */

undefined8 effectGaussianBlurRegion(RenderEffectGaussianBlur *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x10) * 2;
  iVar2 = -*(int *)(*(long *)(param_1 + 8) + 0x10);
  if (param_1[0x28] != (RenderEffectGaussianBlur)0x2) {
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(param_1 + 0x18) = iVar1;
    if (param_1[0x28] == (RenderEffectGaussianBlur)0x1) {
      return 1;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  return 1;
}



/* effectGaussianBlurUpdate(tvg::RenderEffectGaussianBlur*, tvg::Matrix const&) */

void effectGaussianBlurUpdate(RenderEffectGaussianBlur *param_1,Matrix *param_2)

{
  int iVar1;
  SwGaussianBlur *pSVar2;
  float fVar3;
  
  pSVar2 = *(SwGaussianBlur **)(param_1 + 8);
  if (pSVar2 == (SwGaussianBlur *)0x0) {
    pSVar2 = (SwGaussianBlur *)malloc(0x14);
    *(SwGaussianBlur **)(param_1 + 8) = pSVar2;
  }
  fVar3 = SQRT(*(float *)param_2 * *(float *)param_2 +
               *(float *)(param_2 + 4) * *(float *)(param_2 + 4)) * *(float *)(param_1 + 0x24);
  fVar3 = fVar3 * fVar3;
  if (fVar3 <= _LC7) {
    *(undefined4 *)(pSVar2 + 0x10) = 0;
    param_1[0x21] = (RenderEffectGaussianBlur)0x0;
    return;
  }
  iVar1 = _gaussianInit(pSVar2,fVar3,(uint)(byte)param_1[0x2a]);
  *(int *)(pSVar2 + 0x10) = iVar1;
  param_1[0x21] = (RenderEffectGaussianBlur)(iVar1 != 0);
  return;
}



/* effectGaussianBlur(SwCompositor*, SwSurface*, tvg::RenderEffectGaussianBlur const*) */

undefined1  [16]
effectGaussianBlur(SwCompositor *param_1,SwSurface *param_2,RenderEffectGaussianBlur *param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  SwBBox *pSVar12;
  long lVar13;
  undefined1 auVar14 [16];
  RenderEffectGaussianBlur *pRStack_60;
  
  lVar2 = *(long *)(param_2 + 0x70);
  iVar1 = *(int *)(param_1 + 0x38);
  pSVar12 = *(SwBBox **)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  piVar3 = *(int **)(param_3 + 8);
  puVar10 = *(uint **)(param_1 + 0x28);
  iVar7 = (int)*(undefined8 *)(param_1 + 0x60) - (int)pSVar12;
  puVar9 = *(uint **)(lVar2 + 0x28);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x68) - (int)uVar8;
  if (param_3[0x28] == (RenderEffectGaussianBlur)0x2) {
LAB_00100a60:
    bVar4 = false;
LAB_0010096b:
    lVar13 = 0;
    rasterXYFlip(puVar10,puVar9,iVar1,iVar7,iVar11,(SwBBox *)(param_1 + 0x50),false);
    puVar6 = puVar9;
    if (0 < *piVar3) {
      do {
        puVar9 = puVar10;
        puVar10 = puVar6;
        bVar4 = (bool)(bVar4 ^ 1);
        lVar5 = lVar13 + 1;
        lVar13 = lVar13 + 1;
        _gaussianFilter<0>((uchar *)puVar9,(uchar *)puVar10,iVar1,iVar11,iVar7,
                           *(SwBBox **)(param_1 + 0x50),(int)*(undefined8 *)(param_1 + 0x58),
                           SUB41(piVar3[lVar5],0));
        puVar6 = puVar9;
      } while ((int)lVar13 < *piVar3);
    }
    rasterXYFlip(puVar9,puVar10,iVar1,iVar11,iVar7,(SwBBox *)(param_1 + 0x50),true);
    param_3 = pRStack_60;
  }
  else {
    if (*piVar3 < 1) {
      if (param_3[0x28] == (RenderEffectGaussianBlur)0x1) goto LAB_00100a38;
      goto LAB_00100a60;
    }
    lVar13 = 1;
    bVar4 = false;
    puVar6 = puVar10;
    puVar10 = puVar9;
    while( true ) {
      puVar9 = puVar6;
      pRStack_60 = (RenderEffectGaussianBlur *)0x0;
      bVar4 = (bool)(bVar4 ^ 1);
      _gaussianFilter<0>((uchar *)puVar10,(uchar *)puVar9,iVar1,iVar7,iVar11,pSVar12,(int)uVar8,
                         SUB41(piVar3[lVar13],0));
      if (*piVar3 <= (int)lVar13) break;
      pSVar12 = *(SwBBox **)(param_1 + 0x50);
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      lVar13 = lVar13 + 1;
      puVar6 = puVar10;
      puVar10 = puVar9;
    }
    if (param_3[0x28] != (RenderEffectGaussianBlur)0x1) goto LAB_0010096b;
  }
  if (bVar4) {
    param_3 = *(RenderEffectGaussianBlur **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(RenderEffectGaussianBlur **)(lVar2 + 0x28) = param_3;
  }
LAB_00100a38:
  auVar14._8_8_ = param_3;
  auVar14._0_8_ = 1;
  return auVar14;
}



/* effectDropShadowRegion(tvg::RenderEffectDropShadow*) */

undefined8 effectDropShadowRegion(RenderEffectDropShadow *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x10);
  lVar6 = *(long *)(lVar2 + 0x18);
  lVar2 = *(long *)(lVar2 + 0x20);
  iVar7 = -iVar1;
  iVar3 = (int)lVar6 - iVar1;
  if (iVar3 != iVar7 && SBORROW4(iVar3,iVar7) == iVar3 + iVar1 < 0) {
    iVar3 = iVar7;
  }
  iVar4 = (int)lVar2 - iVar1;
  if (iVar4 == iVar7 || SBORROW4(iVar4,iVar7) != iVar4 + iVar1 < 0) {
    iVar7 = iVar4;
  }
  lVar5 = -lVar6;
  if (0 < lVar6) {
    lVar5 = lVar6;
  }
  lVar6 = -lVar2;
  if (0 < lVar2) {
    lVar6 = lVar2;
  }
  *(ulong *)(param_1 + 0x10) = CONCAT44(iVar7,iVar3);
  *(ulong *)(param_1 + 0x18) = CONCAT44(iVar1 * 2 + (int)lVar6,(int)lVar5 + iVar1 * 2);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* effectDropShadowUpdate(tvg::RenderEffectDropShadow*, tvg::Matrix const&) */

void effectDropShadowUpdate(RenderEffectDropShadow *param_1,Matrix *param_2)

{
  int iVar1;
  long lVar2;
  SwGaussianBlur *pSVar3;
  long lVar4;
  float fVar5;
  float local_20;
  float local_1c;
  
  pSVar3 = *(SwGaussianBlur **)(param_1 + 8);
  if (pSVar3 == (SwGaussianBlur *)0x0) {
    pSVar3 = (SwGaussianBlur *)malloc(0x28);
    *(SwGaussianBlur **)(param_1 + 8) = pSVar3;
  }
  fVar5 = SQRT(*(float *)param_2 * *(float *)param_2 +
               *(float *)(param_2 + 4) * *(float *)(param_2 + 4)) * *(float *)(param_1 + 0x30);
  fVar5 = fVar5 * fVar5;
  if (_LC7 < fVar5) {
    iVar1 = _gaussianInit(pSVar3,fVar5,(uint)(byte)param_1[0x34]);
    *(int *)(pSVar3 + 0x10) = iVar1;
    if ((iVar1 != 0) && (param_1[0x25] != (RenderEffectDropShadow)0x0)) {
      fVar5 = *(float *)(param_1 + 0x2c);
      if (fVar5 <= 0.0) {
        lVar4 = 0;
        lVar2 = 0;
      }
      else {
        sincosf((_LC8 - *(float *)(param_1 + 0x28)) * __LC9,&local_1c,&local_20);
        lVar2 = (long)(local_20 * fVar5);
        lVar4 = (long)((float)((uint)fVar5 ^ __LC10) * local_1c);
      }
      *(long *)(pSVar3 + 0x18) = lVar2;
      *(long *)(pSVar3 + 0x20) = lVar4;
      param_1[0x21] = (RenderEffectDropShadow)0x1;
      return;
    }
  }
  else {
    *(undefined4 *)(pSVar3 + 0x10) = 0;
  }
  param_1[0x21] = (RenderEffectDropShadow)0x0;
  return;
}



/* effectDropShadow(SwCompositor*, SwSurface**, tvg::RenderEffectDropShadow const*, bool) */

undefined8
effectDropShadow(SwCompositor *param_1,SwSurface **param_2,RenderEffectDropShadow *param_3,
                bool param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  SwBBox *pSVar7;
  SwBBox *pSVar8;
  bool bVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  uint local_80;
  RenderEffectDropShadow local_4c;
  
  piVar3 = *(int **)(param_3 + 8);
  lVar16 = *(long *)(param_1 + 0x60);
  lVar4 = *(long *)(param_1 + 0x50);
  lVar5 = *(long *)(piVar3 + 6);
  lVar10 = -lVar5;
  if (0 < lVar5) {
    lVar10 = lVar5;
  }
  if (lVar10 < lVar16 - lVar4) {
    lVar5 = *(long *)(piVar3 + 8);
    lVar12 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x58);
    lVar10 = -lVar5;
    if (0 < lVar5) {
      lVar10 = lVar5;
    }
    if (lVar10 < lVar12) {
      lVar5 = *(long *)(*param_2 + 0x70);
      lVar10 = *(long *)(param_2[1] + 0x70);
      bVar9 = (bool)(**(code **)(*(long *)(param_1 + 8) + 0x40))
                              (param_3[0x22],param_3[0x23],param_3[0x24],0xff);
      puVar17 = *(uint **)(param_1 + 0x28);
      iVar1 = *(int *)(param_1 + 0x38);
      puVar13 = *(uint **)(lVar10 + 0x28);
      if (param_4) {
        local_4c = SUB41((uint)(byte)param_3[0x25] * (uint)(byte)param_1[4] + 0xff >> 8,0);
      }
      else {
        local_4c = param_3[0x25];
      }
      local_80 = (uint)(lVar16 - lVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      uVar11 = (uint)lVar12;
      pSVar7 = *(SwBBox **)(param_1 + 0x50);
      _dropShadowFilter(puVar13,puVar17,iVar1,local_80,uVar11,pSVar7,(int)uVar6,piVar3[1],bVar9);
      iVar2 = *piVar3;
      puVar14 = *(uint **)(lVar5 + 0x28);
      *(uint **)(lVar5 + 0x28) = puVar17;
      if (1 < iVar2) {
        lVar16 = 1;
        puVar17 = puVar13;
        do {
          puVar13 = puVar14;
          puVar14 = puVar17;
          lVar4 = lVar16 + 1;
          lVar16 = lVar16 + 1;
          _dropShadowFilter(puVar13,puVar14,iVar1,local_80,uVar11,pSVar7,(int)uVar6,piVar3[lVar4],
                            bVar9);
          puVar17 = puVar13;
        } while ((int)lVar16 < *piVar3);
      }
      pSVar7 = (SwBBox *)(param_1 + 0x50);
      rasterXYFlip(puVar13,puVar14,iVar1,local_80,uVar11,pSVar7,false);
      if (0 < *piVar3) {
        pSVar8 = *(SwBBox **)(param_1 + 0x50);
        lVar16 = 0;
        uVar6 = *(undefined8 *)(param_1 + 0x58);
        puVar17 = puVar14;
        do {
          puVar14 = puVar13;
          puVar13 = puVar17;
          lVar4 = lVar16 + 1;
          lVar16 = lVar16 + 1;
          _dropShadowFilter(puVar14,puVar13,iVar1,uVar11,local_80,pSVar8,(int)uVar6,piVar3[lVar4],
                            bVar9);
          puVar17 = puVar14;
        } while ((int)lVar16 < *piVar3);
      }
      rasterXYFlip(puVar14,puVar13,iVar1,uVar11,local_80,pSVar7,true);
      *(uint **)(param_1 + 0x28) = puVar13;
      if (param_4) {
        _dropShadowShift((uint *)**(undefined8 **)(param_1 + 8),puVar13,iVar1,pSVar7,
                         *(SwPoint **)(piVar3 + 6),(uchar)*(undefined8 *)(piVar3 + 8),(bool)local_4c
                        );
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x28) = uVar6;
      }
      else {
        rasterClear(param_2[1],*(uint *)(param_1 + 0x50),*(uint *)(param_1 + 0x58),local_80,uVar11,0
                   );
        lVar15 = 0;
        _dropShadowShift(*(uint **)(lVar10 + 0x28),*(uint **)(param_1 + 0x28),iVar1,pSVar7,
                         *(SwPoint **)(piVar3 + 6),(uchar)*(undefined8 *)(piVar3 + 8),(bool)local_4c
                        );
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        lVar16 = *(long *)(param_1 + 0x58);
        lVar4 = *(long *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
        *(undefined8 *)(lVar10 + 0x28) = uVar6;
        puVar17 = (uint *)(*(long *)(lVar5 + 0x28) +
                          ((ulong)*(uint *)(lVar5 + 0x38) * lVar16 + lVar4) * 4);
        puVar13 = (uint *)(*(long *)(param_1 + 0x28) +
                          ((ulong)*(uint *)(param_1 + 0x38) * lVar16 + lVar4) * 4);
        do {
          lVar15 = lVar15 + 1;
          rasterTranslucentPixel32(puVar13,puVar17,local_80,0xff);
          puVar17 = puVar17 + *(uint *)(lVar5 + 0x38);
          puVar13 = puVar13 + *(uint *)(param_1 + 0x38);
        } while (lVar15 != lVar12);
      }
    }
  }
  return 1;
}



/* effectFillUpdate(tvg::RenderEffectFill*) */

void effectFillUpdate(RenderEffectFill *param_1)

{
  param_1[0x21] = (RenderEffectFill)0x1;
  return;
}



/* effectFill(SwCompositor*, tvg::RenderEffectFill const*, bool) */

undefined8 effectFill(SwCompositor *param_1,RenderEffectFill *param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  RenderEffectFill RVar13;
  ulong uVar12;
  long lVar14;
  long lVar15;
  long lVar16;
  
  RVar13 = param_2[0x25];
  if (param_3) {
    RVar13 = SUB41((uint)(byte)param_1[4] * (uint)(byte)RVar13 + 0xff >> 8,0);
  }
  lVar2 = *(long *)(param_1 + 0x60);
  lVar3 = *(long *)(param_1 + 0x68);
  lVar4 = *(long *)(param_1 + 0x50);
  lVar5 = *(long *)(param_1 + 0x58);
  uVar7 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                    (param_2[0x22],param_2[0x23],param_2[0x24],0xff);
  if (param_3) {
    plVar6 = *(long **)(param_1 + 8);
    uVar12 = (ulong)*(uint *)(plVar6 + 6);
    lVar10 = *plVar6 + (uVar12 * *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50)) * 4;
    uVar9 = (ulong)*(uint *)(param_1 + 0x38);
    lVar16 = *(long *)(param_1 + 0x28) +
             (*(long *)(param_1 + 0x58) * uVar9 + *(long *)(param_1 + 0x50)) * 4;
    if (lVar3 != lVar5) {
      lVar15 = 0;
      do {
        lVar14 = 0;
        if (lVar2 != lVar4) {
          do {
            uVar1 = *(uint *)(lVar10 + lVar14 * 4);
            iVar11 = (int)((uint)*(byte *)(lVar16 + 3 + lVar14 * 4) * (uint)(byte)RVar13 + 0xff) >>
                     8;
            iVar8 = iVar11 + 1;
            iVar11 = 0x100 - iVar11;
            *(uint *)(lVar10 + lVar14 * 4) =
                 ((uVar1 & 0xff00ff) * iVar11 >> 8 & 0xff00ff |
                 (uVar1 >> 8 & 0xff00ff) * iVar11 & 0xff00ff00) +
                 (iVar8 * (uVar7 & 0xff00ff) >> 8 & 0xff00ff |
                 iVar8 * (uVar7 >> 8 & 0xff00ff) & 0xff00ff00);
            lVar14 = lVar14 + 1;
          } while (lVar2 - lVar4 != lVar14);
          uVar12 = (ulong)*(uint *)(plVar6 + 6);
          uVar9 = (ulong)*(uint *)(param_1 + 0x38);
        }
        lVar15 = lVar15 + 1;
        lVar10 = lVar10 + uVar9 * 4;
        lVar16 = lVar16 + uVar12 * 4;
      } while (lVar3 - lVar5 != lVar15);
    }
    param_1[0x70] = (SwCompositor)0x1;
  }
  else {
    uVar9 = (ulong)*(uint *)(param_1 + 0x38);
    lVar10 = *(long *)(param_1 + 0x28) +
             (*(long *)(param_1 + 0x58) * uVar9 + *(long *)(param_1 + 0x50)) * 4;
    if (lVar3 != lVar5) {
      lVar16 = 0;
      do {
        lVar15 = 0;
        if (lVar2 != lVar4) {
          do {
            iVar8 = ((int)((uint)*(byte *)(lVar10 + 3 + lVar15 * 4) * (uint)(byte)RVar13 + 0xff) >>
                    8) + 1;
            *(uint *)(lVar10 + lVar15 * 4) =
                 iVar8 * (uVar7 >> 8 & 0xff00ff) & 0xff00ff00 |
                 iVar8 * (uVar7 & 0xff00ff) >> 8 & 0xff00ff;
            lVar15 = lVar15 + 1;
          } while (lVar2 - lVar4 != lVar15);
          uVar9 = (ulong)*(uint *)(param_1 + 0x38);
        }
        lVar16 = lVar16 + 1;
        lVar10 = lVar10 + uVar9 * 4;
      } while (lVar3 - lVar5 != lVar16);
    }
  }
  return 1;
}



/* effectTintUpdate(tvg::RenderEffectTint*) */

void effectTintUpdate(RenderEffectTint *param_1)

{
  param_1[0x21] = (RenderEffectTint)0x1;
  return;
}



/* effectTint(SwCompositor*, tvg::RenderEffectTint const*, bool) */

undefined8 effectTint(SwCompositor *param_1,RenderEffectTint *param_2,bool param_3)

{
  SwCompositor SVar1;
  RenderEffectTint RVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  uint local_78;
  uint local_70;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_1 + 0x60);
  lVar4 = *(long *)(param_1 + 0x50);
  lVar5 = *(long *)(param_1 + 0x68);
  lVar6 = *(long *)(param_1 + 0x58);
  uVar9 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                    (param_2[0x22],param_2[0x23],param_2[0x24],0xff);
  uVar10 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                     (param_2[0x25],param_2[0x26],param_2[0x27],0xff);
  plVar14 = *(long **)(param_1 + 8);
  SVar1 = param_1[4];
  pcVar7 = (code *)plVar14[0xb];
  if (param_3) {
    lVar16 = *plVar14 +
             ((ulong)*(uint *)(plVar14 + 6) * *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50))
             * 4;
    uVar13 = (ulong)*(uint *)(param_1 + 0x38);
    lVar15 = *(long *)(param_1 + 0x28) +
             (*(long *)(param_1 + 0x58) * uVar13 + *(long *)(param_1 + 0x50)) * 4;
    if (lVar5 != lVar6) {
      lVar19 = 0;
      local_70 = uVar10 & 0xff00ff;
      do {
        lVar18 = 0;
        if (lVar3 != lVar4) {
          do {
            uVar11 = rasterUnpremultiply(*(uint *)(lVar15 + lVar18 * 4));
            RVar2 = param_2[0x28];
            local_44 = uVar11;
            bVar8 = (*pcVar7)(&local_44);
            iVar17 = (int)((local_44 >> 0x18) * (uint)(byte)SVar1 + 0xff) >> 8;
            uVar12 = *(uint *)(lVar16 + lVar18 * 4);
            *(uint *)(lVar16 + lVar18 * 4) =
                 (((((((uint)bVar8 * ((uVar9 >> 8 & 0xff00ff) - (uVar10 >> 8 & 0xff00ff)) +
                       (uVar10 & 0xff00ff00) & 0xff00ff00) >> 8) - (uVar11 >> 8 & 0xff00ff)) *
                    (uint)(byte)RVar2 + (uVar11 & 0xff00ff00) & 0xff00ff00) >> 8) -
                 (uVar12 >> 8 & 0xff00ff)) * iVar17 + (uVar12 & 0xff00ff00) & 0xff00ff00 |
                 ((((((((uint)bVar8 * ((uVar9 & 0xff00ff) - (uVar10 & 0xff00ff)) >> 8) + local_70 &
                      0xff00ff) - (uVar11 & 0xff00ff)) * (uint)(byte)RVar2 >> 8) +
                    (uVar11 & 0xff00ff) & 0xff00ff) - (uVar12 & 0xff00ff)) * iVar17 >> 8) +
                 (uVar12 & 0xff00ff) & 0xff00ff;
            lVar18 = lVar18 + 1;
          } while (lVar3 - lVar4 != lVar18);
          plVar14 = *(long **)(param_1 + 8);
          uVar13 = (ulong)*(uint *)(param_1 + 0x38);
        }
        lVar16 = lVar16 + uVar13 * 4;
        lVar19 = lVar19 + 1;
        lVar15 = lVar15 + (ulong)*(uint *)(plVar14 + 6) * 4;
      } while (lVar5 - lVar6 != lVar19);
    }
    param_1[0x70] = (SwCompositor)0x1;
  }
  else {
    uVar13 = (ulong)*(uint *)(param_1 + 0x38);
    lVar15 = *(long *)(param_1 + 0x28) +
             (*(long *)(param_1 + 0x58) * uVar13 + *(long *)(param_1 + 0x50)) * 4;
    if (lVar5 != lVar6) {
      lVar16 = 0;
      local_78 = uVar10 & 0xff00ff;
      do {
        lVar19 = 0;
        if (lVar3 != lVar4) {
          do {
            uVar12 = rasterUnpremultiply(*(uint *)(lVar15 + lVar19 * 4));
            RVar2 = param_2[0x28];
            local_44 = uVar12;
            bVar8 = (*pcVar7)(&local_44);
            iVar17 = (local_44 >> 0x18) + 1;
            *(uint *)(lVar15 + lVar19 * 4) =
                 ((((((uint)bVar8 * ((uVar9 >> 8 & 0xff00ff) - (uVar10 >> 8 & 0xff00ff)) +
                      (uVar10 & 0xff00ff00) & 0xff00ff00) >> 8) - (uVar12 >> 8 & 0xff00ff)) *
                   (uint)(byte)RVar2 + (uVar12 & 0xff00ff00) & 0xff00ff00) >> 8) * iVar17 &
                 0xff00ff00 |
                 ((((((uint)bVar8 * ((uVar9 & 0xff00ff) - (uVar10 & 0xff00ff)) >> 8) + local_78 &
                    0xff00ff) - (uVar12 & 0xff00ff)) * (uint)(byte)RVar2 >> 8) + (uVar12 & 0xff00ff)
                 & 0xff00ff) * iVar17 >> 8 & 0xff00ff;
            lVar19 = lVar19 + 1;
          } while (lVar3 - lVar4 != lVar19);
          uVar13 = (ulong)*(uint *)(param_1 + 0x38);
        }
        lVar15 = lVar15 + uVar13 * 4;
        lVar16 = lVar16 + 1;
      } while (lVar5 - lVar6 != lVar16);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* effectTritoneUpdate(tvg::RenderEffectTritone*) */

void effectTritoneUpdate(RenderEffectTritone *param_1)

{
  param_1[0x21] = (RenderEffectTritone)0x1;
  return;
}



/* effectTritone(SwCompositor*, tvg::RenderEffectTritone const*, bool) */

undefined8 effectTritone(SwCompositor *param_1,RenderEffectTritone *param_2,bool param_3)

{
  SwCompositor SVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x60);
  lVar3 = *(long *)(param_1 + 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_1 + 0x68);
  lVar5 = *(long *)(param_1 + 0x58);
  uVar8 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                    (param_2[0x22],param_2[0x23],param_2[0x24],0xff);
  uVar9 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                    (param_2[0x25],param_2[0x26],param_2[0x27],0xff);
  uVar10 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                     (param_2[0x28],param_2[0x29],param_2[0x2a],0xff);
  plVar16 = *(long **)(param_1 + 8);
  SVar1 = param_1[4];
  pcVar6 = (code *)plVar16[0xb];
  if (param_3) {
    lVar17 = *plVar16 +
             ((ulong)*(uint *)(plVar16 + 6) * *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50))
             * 4;
    uVar14 = (ulong)*(uint *)(param_1 + 0x38);
    lVar18 = 0;
    lVar15 = *(long *)(param_1 + 0x28) +
             (*(long *)(param_1 + 0x58) * uVar14 + *(long *)(param_1 + 0x50)) * 4;
    if (lVar4 != lVar5) {
      do {
        lVar21 = 0;
        if (lVar2 != lVar3) {
          do {
            uVar11 = rasterUnpremultiply(*(uint *)(lVar15 + lVar21 * 4));
            uVar13 = *(uint *)(lVar17 + lVar21 * 4);
            local_44 = uVar11;
            bVar7 = (*pcVar6)(&local_44);
            uVar20 = uVar13 & 0xff00ff00;
            uVar12 = _trintone(uVar8,uVar9,uVar10,(uint)bVar7);
            iVar19 = (int)((uVar11 >> 0x18) * (uint)(byte)SVar1 + 0xff) >> 8;
            *(uint *)(lVar17 + lVar21 * 4) =
                 uVar20 + ((uVar12 >> 8 & 0xff00ff) - (uVar13 >> 8 & 0xff00ff)) * iVar19 &
                 0xff00ff00 |
                 (((uVar12 & 0xff00ff) - (uVar13 & 0xff00ff)) * iVar19 >> 8) + (uVar13 & 0xff00ff) &
                 0xff00ff;
            lVar21 = lVar21 + 1;
          } while (lVar2 - lVar3 != lVar21);
          plVar16 = *(long **)(param_1 + 8);
          uVar14 = (ulong)*(uint *)(param_1 + 0x38);
        }
        lVar17 = lVar17 + uVar14 * 4;
        lVar18 = lVar18 + 1;
        lVar15 = lVar15 + (ulong)*(uint *)(plVar16 + 6) * 4;
      } while (lVar4 - lVar5 != lVar18);
    }
    param_1[0x70] = (SwCompositor)0x1;
  }
  else {
    uVar14 = (ulong)*(uint *)(param_1 + 0x38);
    lVar17 = *(long *)(param_1 + 0x28) +
             (*(long *)(param_1 + 0x58) * uVar14 + *(long *)(param_1 + 0x50)) * 4;
    lVar15 = 0;
    if (lVar4 != lVar5) {
      do {
        lVar18 = 0;
        if (lVar2 != lVar3) {
          do {
            uVar13 = rasterUnpremultiply(*(uint *)(lVar17 + lVar18 * 4));
            local_44 = uVar13;
            bVar7 = (*pcVar6)(&local_44);
            uVar11 = _trintone(uVar8,uVar9,uVar10,(uint)bVar7);
            iVar19 = (uVar13 >> 0x18) + 1;
            *(uint *)(lVar17 + lVar18 * 4) =
                 (uVar11 & 0xff00ff) * iVar19 >> 8 & 0xff00ff |
                 (uVar11 >> 8 & 0xff00ff) * iVar19 & 0xff00ff00;
            lVar18 = lVar18 + 1;
          } while (lVar2 - lVar3 != lVar18);
          uVar14 = (ulong)*(uint *)(param_1 + 0x38);
        }
        lVar17 = lVar17 + uVar14 * 4;
        lVar15 = lVar15 + 1;
      } while (lVar4 - lVar5 != lVar15);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


