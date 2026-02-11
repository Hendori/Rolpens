
/* get_edge(graphite2::Segment*, graphite2::Slot const*, graphite2::Position const&, float, float,
   float, bool) [clone .isra.0] */

undefined8
get_edge(Segment *param_1,Slot *param_2,Position *param_3,float param_4,float param_5,float param_6,
        bool param_7)

{
  ushort uVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  char cVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float in_XMM3_Da;
  float fVar10;
  undefined4 in_XMM3_Db;
  float in_XMM4_Da;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  
  cVar5 = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x78);
  uVar1 = *(ushort *)(param_2 + 0x10);
  fVar9 = param_5 + *(float *)(param_2 + 0x44);
  fVar11 = *(float *)(param_2 + 0x40) + param_4;
  pbVar3 = *(byte **)(*(long *)(lVar2 + 0x20) + (ulong)uVar1 * 8);
  if (pbVar3 == (byte *)0x0) {
    fVar12 = _LC0;
    if (cVar5 == '\0') {
      fVar12 = _LC1;
    }
  }
  else {
    fVar12 = _LC1;
    if (cVar5 != '\0') {
      fVar12 = _LC0;
    }
    if (*pbVar3 != 0) {
      fVar10 = in_XMM3_Da * (float)_LC2;
      pfVar7 = (float *)(pbVar3 + 0x14);
      uVar13 = 0;
      do {
        while ((fVar17 = fVar12, fVar10 + param_6 < (pfVar7[1] + fVar9) - in_XMM4_Da ||
               (pfVar7[3] + fVar9 + in_XMM4_Da < param_6 - fVar10))) {
joined_r0x0010020d:
          fVar12 = fVar17;
          uVar16 = uVar13;
          pfVar7 = pfVar7 + 8;
          uVar13 = uVar16;
          if (pfVar7 == (float *)(pbVar3 + (ulong)(*pbVar3 - 1) * 0x20 + 0x34)) goto LAB_00100145;
        }
        uVar16 = 0;
        if (cVar5 != '\0') {
          fVar15 = fVar11 + pfVar7[2] + in_XMM4_Da;
          if (fVar12 < fVar15) {
            fVar14 = (fVar11 - fVar9) + pfVar7[7] + in_XMM4_Da + param_6;
            fVar8 = (fVar11 + fVar9 + pfVar7[6] + in_XMM4_Da) - param_6;
            fVar17 = fVar10 + fVar14;
            fVar18 = fVar10 + fVar8;
            fVar8 = fVar8 - fVar10;
            if (fVar8 <= fVar14 - fVar10) {
              bVar4 = fVar18 < fVar17;
              uVar13 = 0;
              fVar17 = fVar8;
              if (bVar4) goto joined_r0x0010022a;
            }
            else {
              uVar13 = in_XMM3_Db;
              if (fVar17 < fVar18) {
joined_r0x0010022a:
                if (fVar17 < fVar15) {
                  if (fVar17 <= fVar12) {
                    fVar17 = fVar12;
                  }
                  goto joined_r0x0010020d;
                }
              }
            }
            goto LAB_001001c0;
          }
          goto joined_r0x0010020d;
        }
        fVar15 = (fVar11 + *pfVar7) - in_XMM4_Da;
        if (fVar12 <= fVar15) goto joined_r0x0010020d;
        fVar8 = (((fVar11 - fVar9) + pfVar7[5]) - in_XMM4_Da) + param_6;
        fVar17 = ((fVar11 + fVar9 + pfVar7[4]) - in_XMM4_Da) - param_6;
        fVar18 = fVar10 + fVar8;
        fVar14 = fVar10 + fVar17;
        fVar8 = fVar8 - fVar10;
        fVar17 = fVar17 - fVar10;
        if (fVar17 <= fVar8) {
          if ((fVar18 <= fVar14) || (fVar17 = fVar8, fVar8 <= fVar15)) goto LAB_001001c0;
LAB_001001ff:
          if (fVar12 <= fVar17) {
            fVar17 = fVar12;
          }
          uVar13 = 0;
          goto joined_r0x0010020d;
        }
        if ((fVar18 < fVar14) && (fVar15 < fVar17)) goto LAB_001001ff;
LAB_001001c0:
        fVar12 = fVar15;
        pfVar7 = pfVar7 + 8;
        uVar13 = uVar16;
      } while (pfVar7 != (float *)(pbVar3 + (ulong)(*pbVar3 - 1) * 0x20 + 0x34));
      goto LAB_00100145;
    }
  }
  pfVar6 = (float *)graphite2::GlyphCache::glyph((ushort)lVar2);
  fVar10 = in_XMM3_Da * (float)_LC2;
  uVar16 = 0;
  lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + (ulong)uVar1 * 8);
  pfVar7 = (float *)(lVar2 + 4);
  if (lVar2 == 0) {
    pfVar7 = (float *)&graphite2::SlantBox::empty;
  }
  if (((pfVar6[1] + fVar9) - in_XMM4_Da <= param_6 + fVar10) &&
     (param_6 - fVar10 <= pfVar6[3] + fVar9 + in_XMM4_Da)) {
    fVar17 = (fVar11 - fVar9) + param_6;
    fVar9 = (fVar9 + fVar11) - param_6;
    if (cVar5 == '\0') {
      fVar9 = fVar9 + *pfVar7;
      fVar17 = fVar17 + pfVar7[1];
      fVar11 = fVar11 + *pfVar6;
      fVar15 = fVar10 + fVar9;
      fVar8 = fVar10 + fVar17;
      fVar9 = fVar9 - fVar10;
      fVar17 = fVar17 - fVar10;
      fVar12 = fVar11;
      if (fVar17 < fVar9) {
        if ((fVar8 < fVar15) && (fVar12 = fVar9, fVar9 <= fVar11)) {
          fVar12 = fVar11;
        }
      }
      else if ((fVar15 < fVar8) && (fVar12 = fVar17, fVar17 <= fVar11)) {
        fVar12 = fVar11;
      }
      uVar16 = 0;
      fVar12 = fVar12 - in_XMM4_Da;
    }
    else {
      fVar9 = fVar9 + pfVar7[2];
      fVar17 = fVar17 + pfVar7[3];
      fVar11 = pfVar6[2] + fVar11;
      fVar15 = fVar10 + fVar17;
      fVar8 = fVar10 + fVar9;
      fVar9 = fVar9 - fVar10;
      fVar12 = fVar11;
      if (fVar17 - fVar10 < fVar9) {
        if ((fVar15 < fVar8) && (fVar12 = fVar15, fVar11 <= fVar15)) {
          fVar12 = fVar11;
        }
      }
      else if ((fVar8 < fVar15) && (fVar12 = fVar9, fVar11 <= fVar9)) {
        fVar12 = fVar11;
      }
      uVar16 = 0;
      fVar12 = fVar12 + in_XMM4_Da;
    }
  }
LAB_00100145:
  return CONCAT44(uVar16,fVar12);
}



/* graphite2::ShiftCollider::removeBox(graphite2::Rect const&, graphite2::BBox const&,
   graphite2::SlantBox const&, graphite2::Position const&, int) [clone .isra.0] */

void graphite2::ShiftCollider::removeBox
               (Rect *param_1,BBox *param_2,SlantBox *param_3,Position *param_4,int param_5)

{
  float fVar1;
  float in_XMM0_Da;
  float fVar2;
  float in_XMM1_Da;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_5 == 2) {
    fVar4 = *(float *)param_2;
    fVar2 = *(float *)(param_2 + 0xc);
    fVar5 = *(float *)(param_4 + 0xc) + (in_XMM0_Da - in_XMM1_Da);
    if (fVar4 - fVar2 < fVar5) {
      fVar6 = *(float *)(param_2 + 8);
      fVar1 = *(float *)(param_2 + 4);
      fVar3 = (in_XMM0_Da - in_XMM1_Da) + *(float *)(param_4 + 4);
      if (((fVar3 < fVar6 - fVar1) && (0.0 < fVar6 - fVar4)) && (0.0 < fVar2 - fVar1)) {
        fVar8 = (fVar6 + fVar6) - fVar3;
        if ((fVar3 + fVar2 + fVar2 < fVar8) &&
           (fVar8 = fVar2 + fVar2 + fVar5, (fVar6 + fVar6) - fVar5 < fVar8)) {
          fVar8 = fVar2 + fVar6;
        }
        fVar2 = (fVar4 + fVar4) - fVar5;
        if ((fVar2 < fVar5 + fVar1 + fVar1) &&
           (fVar2 = fVar1 + fVar1 + fVar3, fVar2 < (fVar4 + fVar4) - fVar3)) {
          fVar2 = fVar4 + fVar1;
        }
        fVar4 = (*(float *)param_4 + *(float *)(param_4 + 8)) * (float)_LC2;
        graphite2::Zones::remove(fVar2 - fVar4,fVar8 - fVar4);
        return;
      }
    }
  }
  else if (param_5 < 3) {
    if (param_5 == 0) {
      if ((*(float *)(param_2 + 4) <= *(float *)(param_3 + 0xc) + in_XMM1_Da &&
           *(float *)(param_3 + 0xc) + in_XMM1_Da != *(float *)(param_2 + 4)) &&
         (in_XMM1_Da + *(float *)(param_3 + 4) < *(float *)(param_2 + 0xc))) {
        if (0.0 < *(float *)(param_2 + 8) - *(float *)param_2) {
          fVar4 = (*(float *)param_3 + *(float *)(param_3 + 8)) * (float)_LC2;
          graphite2::Zones::remove(*(float *)param_2 - fVar4,*(float *)(param_2 + 8) - fVar4);
          return;
        }
      }
    }
    else {
      if (param_5 != 1) {
        return;
      }
      if ((*(float *)param_2 <= *(float *)(param_3 + 8) + in_XMM0_Da &&
           *(float *)(param_3 + 8) + in_XMM0_Da != *(float *)param_2) &&
         (in_XMM0_Da + *(float *)param_3 < *(float *)(param_2 + 8))) {
        if (0.0 < *(float *)(param_2 + 0xc) - *(float *)(param_2 + 4)) {
          fVar4 = (*(float *)(param_3 + 4) + *(float *)(param_3 + 0xc)) * (float)_LC2;
          graphite2::Zones::remove
                    (*(float *)(param_2 + 4) - fVar4,*(float *)(param_2 + 0xc) - fVar4);
          return;
        }
      }
    }
  }
  else {
    if (param_5 != 3) {
      return;
    }
    fVar4 = *(float *)param_2;
    fVar2 = *(float *)(param_2 + 4);
    fVar5 = *(float *)(param_4 + 8) + in_XMM1_Da + in_XMM0_Da;
    if (fVar4 + fVar2 < fVar5) {
      fVar6 = *(float *)(param_2 + 8);
      fVar1 = *(float *)(param_2 + 0xc);
      fVar3 = in_XMM1_Da + in_XMM0_Da + *(float *)param_4;
      if (((fVar3 < fVar6 + fVar1) && (0.0 < fVar6 - fVar4)) && (0.0 < fVar1 - fVar2)) {
        fVar7 = (float)((uint)fVar2 ^ _LC4) + (float)((uint)fVar2 ^ _LC4);
        fVar8 = (fVar6 + fVar6) - fVar3;
        if ((fVar3 + fVar7 < fVar8) && (fVar8 = fVar7 + fVar5, (fVar6 + fVar6) - fVar5 < fVar8)) {
          fVar8 = fVar6 - fVar2;
        }
        fVar6 = (float)(_LC4 ^ (uint)fVar1) + (float)(_LC4 ^ (uint)fVar1);
        fVar2 = (fVar4 + fVar4) - fVar5;
        if ((fVar2 < fVar5 + fVar6) && (fVar2 = fVar6 + fVar3, fVar2 < (fVar4 + fVar4) - fVar3)) {
          fVar2 = fVar4 - fVar1;
        }
        fVar4 = (*(float *)(param_4 + 4) + *(float *)(param_4 + 0xc)) * (float)_LC2;
        graphite2::Zones::remove(fVar2 - fVar4,fVar8 - fVar4);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* graphite2::ShiftCollider::initSlot(graphite2::Segment*, graphite2::Slot*, graphite2::Rect const&,
   float, float, graphite2::Position const&, graphite2::Position const&, int, graphite2::json*) */

undefined8
graphite2::ShiftCollider::initSlot
          (Segment *param_1,Slot *param_2,Rect *param_3,float param_4,float param_5,
          Position *param_6,Position *param_7,int param_8,json *param_9)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 in_register_0000008c;
  float *pfVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  pfVar13 = (float *)CONCAT44(in_register_0000008c,param_8);
  uVar3 = *(ushort *)(param_3 + 0x10);
  lVar4 = *(long *)(*(long *)(param_2 + 0x88) + 0x78);
  if ((*(long *)(lVar4 + 0x20) == 0) || (*(ushort *)(lVar4 + 0x28) <= uVar3)) {
    return 0;
  }
  pfVar7 = (float *)graphite2::GlyphCache::glyph((ushort)lVar4);
  fVar16 = *pfVar13;
  fVar17 = pfVar13[1];
  lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + (ulong)uVar3 * 8);
  pfVar12 = (float *)(lVar4 + 4);
  if (lVar4 == 0) {
    pfVar12 = (float *)&SlantBox::empty;
  }
  if ((fVar16 == 0.0) && (fVar17 == 0.0)) {
    uVar14 = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)param_6;
    *(undefined8 *)(param_1 + 0xb0) = uVar14;
  }
  else {
    fVar21 = *(float *)(param_6 + 4);
    fVar18 = *(float *)(param_6 + 8);
    fVar1 = *(float *)(param_6 + 0xc);
    *(float *)(param_1 + 0xa8) = *(float *)param_6 - fVar16;
    *(float *)(param_1 + 0xac) = fVar21 - fVar17;
    *(float *)(param_1 + 0xb0) = fVar18 - fVar16;
    *(float *)(param_1 + 0xb4) = fVar1 - fVar17;
  }
  fVar16 = *pfVar13;
  pfVar11 = *(float **)param_1;
  *(float *)(param_1 + 0xd8) = pfVar7[2] - *pfVar7;
  fVar17 = pfVar13[1];
  fVar18 = *(float *)(param_1 + 0xa8) + fVar16;
  fVar21 = *(float *)(param_7 + 4);
  fVar16 = fVar16 + *(float *)(param_1 + 0xb0);
  *(float **)(param_1 + 8) = pfVar11;
  *(ulong *)(param_1 + 0x18) = CONCAT44(param_5,param_4);
  *(ulong *)(param_1 + 0x20) = CONCAT44(fVar16,fVar18);
  if (*(float **)(param_1 + 0x10) == pfVar11) {
    if (SUB168(ZEXT816(1) * ZEXT816(0x18),8) != 0) goto LAB_001045f6;
    pfVar11 = (float *)realloc(pfVar11,SUB168(ZEXT816(1) * ZEXT816(0x18),0));
    *(float **)param_1 = pfVar11;
    if (pfVar11 == (float *)0x0) goto LAB_001045f6;
    pfVar8 = pfVar11 + 6;
    *(float **)(param_1 + 0x10) = pfVar8;
  }
  else {
    pfVar8 = pfVar11 + 6;
  }
  uVar14 = _LC19;
  *(float **)(param_1 + 8) = pfVar8;
  *pfVar11 = fVar18;
  *(undefined8 *)(pfVar11 + 3) = uVar14;
  fVar18 = *(float *)(param_1 + 0xac);
  pfVar11[1] = fVar16;
  fVar16 = *(float *)(param_1 + 0xb4);
  pfVar11[2] = (fVar17 + fVar21) * (fVar17 + fVar21) + 0.0;
  fVar17 = pfVar13[1];
  *(undefined1 *)(pfVar11 + 5) = 0;
  fVar18 = fVar18 + fVar17;
  fVar16 = fVar16 + fVar17;
  fVar17 = pfVar7[3];
  *(undefined1 *)(pfVar11 + 5) = 1;
  pfVar11 = *(float **)(param_1 + 0x28);
  *(float *)(param_1 + 0xdc) = fVar17 - pfVar7[1];
  fVar17 = *pfVar13;
  fVar21 = *(float *)param_7;
  *(float **)(param_1 + 0x30) = pfVar11;
  *(ulong *)(param_1 + 0x40) = CONCAT44(param_5,param_4);
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar16,fVar18);
  if (*(float **)(param_1 + 0x38) == pfVar11) {
    if (SUB168(ZEXT816(1) * ZEXT816(0x18),8) != 0) goto LAB_001045f6;
    pfVar11 = (float *)realloc(pfVar11,SUB168(ZEXT816(1) * ZEXT816(0x18),0));
    *(float **)(param_1 + 0x28) = pfVar11;
    uVar14 = _LC19;
    if (pfVar11 == (float *)0x0) goto LAB_001045f6;
    pfVar7 = pfVar11 + 6;
    *(float **)(param_1 + 0x38) = pfVar7;
  }
  else {
    pfVar7 = pfVar11 + 6;
  }
  *(float **)(param_1 + 0x30) = pfVar7;
  *(undefined8 *)(pfVar11 + 3) = uVar14;
  fVar1 = *(float *)param_7;
  fVar2 = *(float *)(param_7 + 4);
  *pfVar11 = fVar18;
  fVar18 = pfVar13[1];
  pfVar11[2] = (fVar17 + fVar21) * (fVar17 + fVar21) + 0.0;
  fVar17 = *(float *)(param_1 + 0xa8);
  fVar21 = *(float *)(param_1 + 0xac);
  pfVar11[1] = fVar16;
  fVar16 = *pfVar13;
  *(undefined1 *)(pfVar11 + 5) = 0;
  *(undefined1 *)(pfVar11 + 5) = 1;
  puVar10 = *(undefined8 **)(param_1 + 0x50);
  fVar19 = fVar1 - fVar17;
  if (fVar2 - fVar21 <= fVar1 - fVar17) {
    fVar19 = fVar2 - fVar21;
  }
  fVar17 = ((fVar16 - fVar18) + fVar1) - fVar2;
  fVar21 = fVar16 + fVar18 + fVar1 + fVar2;
  fVar16 = *(float *)(param_1 + 0xb0) - fVar1;
  if (*(float *)(param_1 + 0xb4) - fVar2 <= *(float *)(param_1 + 0xb0) - fVar1) {
    fVar16 = *(float *)(param_1 + 0xb4) - fVar2;
  }
  uVar14 = CONCAT44(fVar16 + fVar16 + fVar21,_LC6 * fVar19 + fVar21);
  fVar16 = pfVar12[2];
  fVar21 = *pfVar12;
  *(undefined8 **)(param_1 + 0x58) = puVar10;
  *(float *)(param_1 + 0xe0) = fVar16 - fVar21;
  *(ulong *)(param_1 + 0x68) = CONCAT44(param_5,param_4 / __LC7);
  *(undefined8 *)(param_1 + 0x70) = uVar14;
  fVar16 = (fVar17 * (fVar17 + fVar17) + 0.0) * _LC8;
  if (*(undefined8 **)(param_1 + 0x60) == puVar10) {
    if (SUB168(ZEXT816(1) * ZEXT816(0x18),8) != 0) goto LAB_001045f6;
    puVar10 = (undefined8 *)realloc(puVar10,SUB168(ZEXT816(1) * ZEXT816(0x18),0));
    *(undefined8 **)(param_1 + 0x50) = puVar10;
    if (puVar10 == (undefined8 *)0x0) goto LAB_001045f6;
    puVar9 = puVar10 + 3;
    *(undefined8 **)(param_1 + 0x60) = puVar9;
  }
  else {
    puVar9 = puVar10 + 3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar9;
  uVar6 = _LC2;
  fVar15 = param_4 / __LC7;
  *puVar10 = uVar14;
  *(undefined8 *)((long)puVar10 + 0xc) = uVar6;
  fVar17 = *(float *)param_7;
  fVar21 = *pfVar13;
  fVar18 = *(float *)(param_7 + 4);
  *(float *)(puVar10 + 1) = fVar16 + 0.0;
  fVar16 = *(float *)(param_1 + 0xb4);
  *(undefined1 *)((long)puVar10 + 0x14) = 0;
  fVar1 = *(float *)(param_1 + 0xa8);
  fVar2 = pfVar13[1];
  *(undefined1 *)((long)puVar10 + 0x14) = 1;
  puVar10 = *(undefined8 **)(param_1 + 0x78);
  fVar19 = fVar17 - fVar1;
  if (fVar16 - fVar18 <= fVar17 - fVar1) {
    fVar19 = fVar16 - fVar18;
  }
  fVar16 = *(float *)(param_1 + 0xb0) - fVar17;
  if (fVar18 - *(float *)(param_1 + 0xac) <= *(float *)(param_1 + 0xb0) - fVar17) {
    fVar16 = fVar18 - *(float *)(param_1 + 0xac);
  }
  fVar20 = ((fVar21 - fVar2) + fVar17) - fVar18;
  fVar19 = fVar19 * _LC6 + fVar20;
  fVar20 = fVar16 + fVar16 + fVar20;
  fVar16 = pfVar12[3];
  fVar1 = pfVar12[1];
  *(undefined8 **)(param_1 + 0x80) = puVar10;
  *(float *)(param_1 + 0x90) = fVar15;
  *(float *)(param_1 + 0x94) = param_5;
  *(float *)(param_1 + 0x98) = fVar19;
  *(float *)(param_1 + 0x9c) = fVar20;
  *(float *)(param_1 + 0xe4) = fVar16 - fVar1;
  fVar18 = fVar21 + fVar2 + fVar17 + fVar18;
  fVar16 = ((fVar18 + fVar18) * fVar18 + 0.0) * _LC8;
  if (*(undefined8 **)(param_1 + 0x88) != puVar10) {
    puVar9 = puVar10 + 3;
LAB_00100b2b:
    *(undefined8 **)(param_1 + 0x80) = puVar9;
    *(undefined8 *)((long)puVar10 + 0xc) = 0x3f000000;
    *(undefined1 *)((long)puVar10 + 0x14) = 0;
    *puVar10 = CONCAT44(fVar20,fVar19);
    *(float *)(puVar10 + 1) = fVar16 + 0.0;
    *(undefined1 *)((long)puVar10 + 0x14) = 1;
    *(Rect **)(param_1 + 0xa0) = param_3;
    if (((ulong)param_9 & 1) == 0) {
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_6 + 8) ^ _LC4;
    }
    fVar16 = *(float *)(param_3 + 0x40);
    fVar17 = *(float *)(param_3 + 0x44);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)pfVar13;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)param_7;
    fVar21 = pfVar13[1];
    *(float *)(param_1 + 200) = fVar16 - *pfVar13;
    *(float *)(param_1 + 0xcc) = fVar17 - fVar21;
    *(float *)(param_1 + 0xd0) = param_4;
    *(float *)(param_1 + 0xd4) = param_5;
    if (*(long *)(param_2 + 0x80) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar4 = *(long *)(param_2 + 0x80) + (ulong)*(uint *)(param_3 + 0x20) * 0x44;
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(lVar4 + 0x30);
    *(undefined2 *)(param_1 + 0xec) = *(undefined2 *)(lVar4 + 0x34);
    return 1;
  }
  if (SUB168(ZEXT816(1) * ZEXT816(0x18),8) == 0) {
    puVar10 = (undefined8 *)realloc(puVar10,SUB168(ZEXT816(1) * ZEXT816(0x18),0));
    *(undefined8 **)(param_1 + 0x78) = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      puVar9 = puVar10 + 3;
      *(undefined8 **)(param_1 + 0x88) = puVar9;
      goto LAB_00100b2b;
    }
  }
LAB_001045f6:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* graphite2::ShiftCollider::addBox_slope(bool, graphite2::Rect const&, graphite2::BBox const&,
   graphite2::SlantBox const&, graphite2::Position const&, float, float, bool, int) */

void graphite2::ShiftCollider::addBox_slope
               (bool param_1,Rect *param_2,BBox *param_3,SlantBox *param_4,Position *param_5,
               float param_6,float param_7,bool param_8,int param_9)

{
  float fVar1;
  undefined7 in_register_00000039;
  long lVar2;
  undefined7 in_register_00000089;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_stack_00000010;
  
  lVar2 = CONCAT71(in_register_00000039,param_1);
  if (in_stack_00000010 == 2) {
    fVar3 = *(float *)CONCAT71(in_register_00000089,param_8) -
            *(float *)(CONCAT71(in_register_00000089,param_8) + 4);
    fVar5 = *(float *)param_3;
    fVar6 = *(float *)(param_3 + 0xc);
    if (fVar5 - fVar6 < fVar3 + *(float *)(param_5 + 0xc)) {
      fVar4 = *(float *)(param_3 + 8);
      fVar1 = *(float *)(param_3 + 4);
      if (fVar3 + *(float *)(param_5 + 4) < fVar4 - fVar1) {
        fVar3 = (*(float *)(param_5 + 0xc) + *(float *)(param_5 + 4)) * (float)_LC2 + fVar3;
        fVar4 = (fVar4 + fVar4) - fVar3;
        fVar5 = (fVar5 + fVar5) - fVar3;
        fVar6 = fVar6 + fVar6 + fVar3;
        fVar3 = fVar1 + fVar1 + fVar3;
        if (fVar6 <= fVar4) {
          fVar4 = fVar6;
        }
        if (fVar5 <= fVar3) {
          fVar5 = fVar3;
        }
        if (fVar5 <= fVar4) {
          graphite2::Zones::insert(lVar2 + 0x50);
        }
      }
    }
  }
  else if (in_stack_00000010 < 3) {
    if (in_stack_00000010 == 0) {
      fVar5 = *(float *)(CONCAT71(in_register_00000089,param_8) + 4);
      if (((*(float *)(param_3 + 4) < fVar5 + *(float *)(param_4 + 0xc)) &&
          (fVar5 + *(float *)(param_4 + 4) < *(float *)(param_3 + 0xc))) &&
         (0.0 < *(float *)(param_3 + 8) - *(float *)param_3)) {
        if ((char)param_2 == '\0') {
          graphite2::Zones::insert(lVar2);
        }
        else {
          graphite2::Zones::insert(lVar2);
        }
      }
    }
    else if (((in_stack_00000010 == 1) &&
             (*(float *)param_3 <
              *(float *)CONCAT71(in_register_00000089,param_8) + *(float *)(param_4 + 8))) &&
            ((*(float *)CONCAT71(in_register_00000089,param_8) + *(float *)param_4 <
              *(float *)(param_3 + 8) && (0.0 < *(float *)(param_3 + 0xc) - *(float *)(param_3 + 4))
             ))) {
      if ((char)param_2 == '\0') {
        graphite2::Zones::insert(lVar2 + 0x28);
      }
      else {
        graphite2::Zones::insert(lVar2 + 0x28);
      }
    }
  }
  else if (in_stack_00000010 == 3) {
    fVar3 = *(float *)CONCAT71(in_register_00000089,param_8) +
            *(float *)(CONCAT71(in_register_00000089,param_8) + 4);
    fVar5 = *(float *)param_3;
    fVar6 = *(float *)(param_3 + 4);
    if (fVar5 + fVar6 < fVar3 + *(float *)(param_5 + 8)) {
      fVar4 = *(float *)(param_3 + 8);
      fVar1 = *(float *)(param_3 + 0xc);
      if (fVar3 + *(float *)param_5 < fVar4 + fVar1) {
        fVar3 = (*(float *)(param_5 + 8) + *(float *)param_5) * (float)_LC2 + fVar3;
        fVar4 = (fVar4 + fVar4) - fVar3;
        fVar7 = fVar3 - (fVar6 + fVar6);
        fVar6 = fVar3 - (fVar1 + fVar1);
        fVar3 = (fVar5 + fVar5) - fVar3;
        if (fVar7 <= fVar4) {
          fVar4 = fVar7;
        }
        if (fVar3 <= fVar6) {
          fVar3 = fVar6;
        }
        if (fVar3 <= fVar4) {
          graphite2::Zones::insert(lVar2 + 0x78);
        }
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010161c) */
/* WARNING: Removing unreachable block (ram,0x00101730) */
/* WARNING: Removing unreachable block (ram,0x00101782) */
/* WARNING: Removing unreachable block (ram,0x001017d0) */
/* WARNING: Removing unreachable block (ram,0x0010162f) */
/* WARNING: Removing unreachable block (ram,0x00101646) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* graphite2::ShiftCollider::resolve(graphite2::Segment*, bool&, graphite2::json*) */

undefined8 graphite2::ShiftCollider::resolve(Segment *param_1,bool *param_2,json *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  iVar2 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = (json)0x1;
  do {
    if (iVar2 == 2) {
      graphite2::Zones::closest(0.0,(float *)param_1);
    }
    else {
      if (iVar2 == 3) {
        graphite2::Zones::closest(0.0,(float *)param_1);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (iVar2 == 1) {
        graphite2::Zones::closest(0.0,(float *)param_1);
      }
      else {
        graphite2::Zones::closest(0.0,(float *)param_1);
      }
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x28;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* graphite2::KernCollider::initSlot(graphite2::Segment*, graphite2::Slot*, graphite2::Rect const&,
   float, graphite2::Position const&, graphite2::Position const&, int, float, float,
   graphite2::json*) */

undefined8
graphite2::KernCollider::initSlot
          (Segment *param_1,Slot *param_2,Rect *param_3,float param_4,Position *param_5,
          Position *param_6,int param_7,float param_8,float param_9,json *param_10)

{
  size_t sVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Rect *pRVar7;
  int iVar8;
  float *pfVar9;
  Rect *pRVar10;
  ulong uVar11;
  void *pvVar12;
  void *pvVar13;
  void *__ptr;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  undefined4 in_register_0000008c;
  long lVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar4 = _LC15;
  lVar17 = *(long *)(*(long *)(param_2 + 0x88) + 0x78);
  pRVar7 = param_3;
  do {
    pRVar10 = pRVar7;
    pRVar7 = *(Rect **)(pRVar10 + 0x28);
  } while (*(Rect **)(pRVar10 + 0x28) != (Rect *)0x0);
  uVar23 = *(undefined4 *)(param_5 + 4);
  uVar5 = *(undefined4 *)(param_5 + 8);
  uVar6 = *(undefined4 *)(param_5 + 0xc);
  __ptr = *(void **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_5;
  *(undefined4 *)(param_1 + 0xc) = uVar23;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  if (fVar4 <= param_4) {
    fVar4 = param_4;
  }
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)CONCAT44(in_register_0000008c,param_7);
  fVar25 = (float)_LC19;
  fVar26 = _LC17;
  pvVar13 = *(void **)(param_1 + 0x40);
  fVar22 = *(float *)(param_1 + 0x30);
  lVar15 = (long)pvVar13 - (long)__ptr;
  if (__LC16 <= fVar22) {
    pvVar13 = (void *)((long)pvVar13 - lVar15);
    *(void **)(param_1 + 0x40) = pvVar13;
    fVar22 = fVar4 / fVar26;
    *(float *)(param_1 + 0x30) = param_9 + fVar4;
    fVar25 = ((param_9 + fVar4) - (param_8 - fVar4)) + __LC18;
    *(float *)(param_1 + 0x2c) = param_8 - fVar4;
    *(float *)(param_1 + 0x50) = fVar22;
    uVar23 = _LC0;
    if (((ulong)param_10 & 1) != 0) {
      uVar23 = _LC1;
    }
    lVar15 = (long)(int)(fVar25 / (fVar22 / fVar26) + (float)_LC19);
    uVar16 = lVar15 + 7 + ((long)pvVar13 - (long)__ptr >> 2);
    uVar11 = uVar16 & 0xfffffffffffffff8;
    pvVar12 = __ptr;
    if ((ulong)(*(long *)(param_1 + 0x48) - (long)__ptr >> 2) < uVar11) {
      sVar1 = uVar11 * 4;
      if (uVar16 >> 0x3e != 0) goto graphite2_KernCollider_initSlot;
      pvVar12 = realloc(__ptr,sVar1);
      *(void **)(param_1 + 0x38) = pvVar12;
      if (pvVar12 == (void *)0x0) goto graphite2_KernCollider_initSlot;
      pvVar13 = (void *)((long)pvVar12 + ((long)pvVar13 - (long)__ptr));
      *(void **)(param_1 + 0x40) = pvVar13;
      *(void **)(param_1 + 0x48) = (void *)(sVar1 + (long)pvVar12);
    }
    __ptr = pvVar12;
    if (pvVar12 != pvVar13) {
      memmove((void *)((long)pvVar12 + lVar15 * 4),pvVar12,(long)pvVar13 - (long)pvVar12);
      pvVar13 = *(void **)(param_1 + 0x40);
      __ptr = *(void **)(param_1 + 0x38);
    }
    pvVar13 = (void *)(lVar15 * 4 + (long)pvVar13);
    lVar21 = 0;
    *(void **)(param_1 + 0x40) = pvVar13;
    if (lVar15 != 0) {
      do {
        *(undefined4 *)((long)pvVar12 + lVar21 * 4) = uVar23;
        lVar21 = lVar21 + 1;
      } while (lVar15 != lVar21);
    }
    *(undefined4 *)(param_1 + 0x58) = uVar23;
LAB_001018cb:
    do {
      lVar15 = *(long *)(param_2 + 0x80);
      if (lVar15 != 0) {
        lVar15 = lVar15 + (ulong)*(uint *)((Slot *)pRVar10 + 0x20) * 0x44;
      }
      if ((*(long *)(lVar17 + 0x20) == 0) ||
         (*(ushort *)(lVar17 + 0x28) <= *(ushort *)((Slot *)pRVar10 + 0x10))) {
        return 0;
      }
      pfVar9 = (float *)graphite2::GlyphCache::glyph((ushort)lVar17);
      fVar22 = (float)_LC19;
      if (((ulong)param_10 & 1) == 0) {
        fVar26 = pfVar9[2];
      }
      else {
        fVar26 = *pfVar9;
      }
      fVar26 = *(float *)(lVar15 + 0x10) + *(float *)((Slot *)pRVar10 + 0x40) + fVar26;
      fVar2 = *(float *)(param_1 + 0x2c);
      fVar25 = *(float *)(param_1 + 0x50);
      fVar24 = (*(float *)(lVar15 + 0x14) - fVar2) + (float)_LC19 +
               *(float *)((Slot *)pRVar10 + 0x44);
      iVar18 = (int)((long)pvVar13 - (long)__ptr >> 2) + -1;
      iVar20 = (int)((fVar24 + pfVar9[3]) / fVar25 + (float)_LC19);
      iVar8 = (int)((pfVar9[1] + fVar24) / fVar25);
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (iVar18 < iVar20) {
        iVar20 = iVar18;
      }
      if (iVar8 <= iVar20) {
        lVar14 = (long)iVar8;
        lVar19 = *(long *)(param_1 + 0x38);
        lVar21 = lVar14 * 4;
        fVar24 = (float)_LC2;
        do {
          fVar25 = ((float)iVar8 + fVar24) * fVar25 + (fVar2 - fVar22);
          if (((ulong)param_10 & 1) == 0) {
            if (*(float *)(lVar19 + lVar21) < fVar26) {
              fVar25 = (float)get_edge(*(Segment **)(param_2 + 0x88),(Slot *)pRVar10,(Position *)0x1
                                       ,*(float *)(lVar15 + 0x10),*(float *)(lVar15 + 0x14),fVar25,
                                       SUB81(lVar14,0));
              fVar24 = (float)_LC2;
              lVar19 = *(long *)(param_1 + 0x38);
              pfVar9 = (float *)(lVar19 + lVar21);
              if ((*pfVar9 <= fVar25 && fVar25 != *pfVar9) &&
                 (*pfVar9 = fVar25,
                 *(float *)(param_1 + 0x58) <= fVar25 && fVar25 != *(float *)(param_1 + 0x58)))
              goto LAB_00101ac1;
            }
          }
          else if (fVar26 < *(float *)(lVar19 + lVar21)) {
            fVar25 = (float)get_edge(*(Segment **)(param_2 + 0x88),(Slot *)pRVar10,(Position *)0x0,
                                     *(float *)(lVar15 + 0x10),*(float *)(lVar15 + 0x14),fVar25,
                                     SUB81(lVar14,0));
            fVar24 = (float)_LC2;
            lVar19 = *(long *)(param_1 + 0x38);
            if ((fVar25 < *(float *)(lVar19 + lVar21)) &&
               (*(float *)(lVar19 + lVar21) = fVar25, fVar25 < *(float *)(param_1 + 0x58))) {
LAB_00101ac1:
              *(float *)(param_1 + 0x58) = fVar25;
            }
          }
          if (iVar20 < iVar8 + 1) break;
          iVar8 = iVar8 + 1;
          lVar21 = lVar21 + 4;
          fVar2 = *(float *)(param_1 + 0x2c);
          fVar25 = *(float *)(param_1 + 0x50);
        } while( true );
      }
      pRVar10 = (Rect *)graphite2::Slot::nextInCluster((Slot *)pRVar10);
    } while (pRVar10 != (Rect *)0x0);
    goto LAB_00101b03;
  }
  fVar26 = *(float *)(param_1 + 0x2c);
  if (fVar22 == param_9) {
    if (param_8 == fVar26) goto LAB_001018cb;
LAB_00101df8:
    iVar18 = (int)(((param_8 - fVar4) - fVar26) / *(float *)(param_1 + 0x50) - (float)_LC19);
    *(float *)(param_1 + 0x2c) = (float)iVar18 * *(float *)(param_1 + 0x50) + fVar26;
    if (iVar18 < 0) {
      uVar23 = _LC0;
      if (((ulong)param_10 & 1) != 0) {
        uVar23 = _LC1;
      }
      lVar17 = (long)-iVar18;
      uVar16 = lVar17 + 7 + (lVar15 >> 2);
      uVar11 = uVar16 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(param_1 + 0x48) - (long)__ptr >> 2) < uVar11) {
        sVar1 = uVar11 * 4;
        if (uVar16 >> 0x3e != 0) goto graphite2_KernCollider_initSlot;
        __ptr = realloc(__ptr,sVar1);
        *(void **)(param_1 + 0x38) = __ptr;
        if (__ptr == (void *)0x0) goto graphite2_KernCollider_initSlot;
        *(void **)(param_1 + 0x48) = (void *)(sVar1 + (long)__ptr);
        pvVar13 = (void *)((long)__ptr + lVar15);
        *(void **)(param_1 + 0x40) = pvVar13;
      }
      pvVar12 = __ptr;
      if (__ptr != pvVar13) {
        memmove((void *)((long)__ptr + lVar17 * 4),__ptr,(long)pvVar13 - (long)__ptr);
        pvVar12 = *(void **)(param_1 + 0x40);
      }
      *(void **)(param_1 + 0x40) = (void *)(lVar17 * 4 + (long)pvVar12);
      lVar15 = 0;
      do {
        *(undefined4 *)((long)__ptr + lVar15 * 4) = uVar23;
        lVar15 = lVar15 + 1;
      } while (lVar17 != lVar15);
      fVar22 = *(float *)(param_1 + 0x30);
    }
    else {
      uVar16 = (ulong)iVar18;
      if (uVar16 < (ulong)(lVar15 >> 2)) {
        if (iVar18 == 0) {
          lVar17 = 0;
          pvVar12 = __ptr;
        }
        else {
          lVar17 = uVar16 * -4;
          pvVar12 = (void *)((long)__ptr + uVar16 * 4);
        }
        if (pvVar12 != pvVar13) {
          memmove(__ptr,pvVar12,(long)pvVar13 - (long)pvVar12);
          pvVar13 = *(void **)(param_1 + 0x40);
          fVar22 = *(float *)(param_1 + 0x30);
        }
        *(long *)(param_1 + 0x40) = (long)pvVar13 + lVar17;
      }
    }
    if (param_9 == fVar22) goto LAB_00101b03;
    fVar26 = *(float *)(param_1 + 0x2c);
    pvVar13 = *(void **)(param_1 + 0x40);
    __ptr = *(void **)(param_1 + 0x38);
  }
  else if (param_8 != fVar26) goto LAB_00101df8;
  lVar17 = (long)pvVar13 - (long)__ptr >> 2;
  iVar18 = (int)(((param_9 + fVar4) - fVar26) / *(float *)(param_1 + 0x50) + fVar25);
  *(float *)(param_1 + 0x30) = (float)iVar18 * *(float *)(param_1 + 0x50) + fVar26;
  iVar20 = (int)lVar17;
  if (iVar20 < iVar18) {
    uVar23 = _LC0;
    if (((ulong)param_10 & 1) != 0) {
      uVar23 = _LC1;
    }
    uVar16 = (long)iVar18 + 7;
    uVar11 = uVar16 & 0xfffffffffffffff8;
    lVar17 = iVar18 - lVar17;
    if ((ulong)(*(long *)(param_1 + 0x48) - (long)__ptr >> 2) < uVar11) {
      sVar1 = uVar11 * 4;
      if (uVar16 >> 0x3e != 0) {
graphite2_KernCollider_initSlot:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar12 = realloc(__ptr,sVar1);
      *(void **)(param_1 + 0x38) = pvVar12;
      if (pvVar12 == (void *)0x0) goto graphite2_KernCollider_initSlot;
      pvVar13 = (void *)((long)pvVar12 + ((long)pvVar13 - (long)__ptr));
      *(void **)(param_1 + 0x48) = (void *)((long)pvVar12 + sVar1);
    }
    *(void **)(param_1 + 0x40) = (void *)((long)pvVar13 + lVar17 * 4);
    if (lVar17 != 0) {
      lVar15 = 0;
      do {
        *(undefined4 *)((long)pvVar13 + lVar15 * 4) = uVar23;
        lVar15 = lVar15 + 1;
      } while (lVar17 != lVar15);
    }
  }
  else if (iVar18 < iVar20) {
    do {
      pvVar13 = (void *)((long)pvVar13 + -4);
    } while (iVar18 < (int)((long)pvVar13 - (long)__ptr >> 2));
    *(void **)(param_1 + 0x40) = pvVar13;
  }
LAB_00101b03:
  *(undefined4 *)(param_1 + 0x54) = 0x7cf0bdc2;
  *(Rect **)param_1 = param_3;
  uVar3 = *(undefined8 *)param_6;
  *(float *)(param_1 + 0x18) = fVar4;
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* graphite2::KernCollider::mergeSlot(graphite2::Segment*, graphite2::Slot*, graphite2::Position
   const&, float, int, graphite2::json*) */

byte graphite2::KernCollider::mergeSlot
               (Segment *param_1,Slot *param_2,Position *param_3,float param_4,int param_5,
               json *param_6)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  undefined4 in_register_0000000c;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte local_3a;
  byte local_39;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x88) + 0x78);
  if ((*(long *)(lVar5 + 0x20) != 0) && (*(ushort *)(param_3 + 0x10) < *(ushort *)(lVar5 + 0x28))) {
    pfVar2 = (float *)CONCAT44(in_register_0000000c,param_5);
    iVar1 = ((uint)param_6 & 1) * 2 + -1;
    pfVar4 = (float *)graphite2::GlyphCache::glyph((ushort)lVar5);
    if (iVar1 == 1) {
      fVar11 = pfVar4[2];
    }
    else {
      fVar11 = *pfVar4;
    }
    fVar12 = (float)iVar1;
    fVar11 = (fVar11 + *pfVar2 + *(float *)(param_3 + 0x40)) * fVar12;
    if ((param_1[0x5c] == (Segment)0x0) ||
       (((*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x54)) - param_4) * fVar12 <= fVar11)) {
      fVar9 = ((float)_LC19 - *(float *)(param_1 + 0x2c)) + *(float *)(param_3 + 0x44) + pfVar2[1];
      iVar6 = (int)((pfVar4[1] + fVar9) / *(float *)(param_1 + 0x50) + (float)_LC19);
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      lVar5 = *(long *)(param_1 + 0x38);
      iVar6 = iVar6 + -1;
      iVar3 = (int)(*(long *)(param_1 + 0x40) - lVar5 >> 2) + -2;
      iVar7 = (int)((fVar9 + pfVar4[3]) / *(float *)(param_1 + 0x50) + (float)_LC19);
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
      if (iVar6 <= iVar7 + 1) {
        local_3a = 1;
        lVar8 = (long)iVar6 * 4;
        local_39 = 0;
        do {
          fVar9 = *(float *)(lVar5 + lVar8) * fVar12;
          if (fVar9 <= __LC21) {
            if ((param_1[0x5c] == (Segment)0x0) ||
               ((fVar9 - *(float *)(param_1 + 0x54)) - param_4 < fVar11)) {
              fVar10 = (float)get_edge(*(Segment **)(param_2 + 0x88),(Slot *)param_3,
                                       (Position *)(ulong)(0 < iVar1),*pfVar2,pfVar2[1],
                                       (*(float *)(param_1 + 0x2c) - (float)_LC19) +
                                       ((float)iVar6 + (float)_LC2) * *(float *)(param_1 + 0x50),
                                       SUB41(param_5,0));
              fVar10 = fVar10 * fVar12 + param_4 + param_4;
              if (_LC22 <= fVar10) {
                fVar9 = fVar9 - fVar10;
                if (fVar9 < *(float *)(param_1 + 0x54)) {
LAB_00102323:
                  *(float *)(param_1 + 0x54) = fVar9;
                }
                else {
                  if (param_1[0x5c] != (Segment)0x0) goto LAB_00102218;
                  if (local_39 == 0) goto LAB_00102323;
                }
                local_3a = 0;
                local_39 = 1;
              }
            }
            else {
LAB_00102218:
              local_3a = 0;
            }
          }
          if (iVar7 + 2 == iVar6 + 1) {
            if (local_3a == 0) {
              if (local_39 != 0) {
                param_1[0x5c] = (Segment)0x1;
              }
            }
            else {
              fVar12 = *(float *)(param_1 + 0x58) -
                       (param_4 + *(float *)(param_1 + 0x18) + fVar11) * fVar12;
              fVar11 = *(float *)(param_1 + 0x54);
              if (*(float *)(param_1 + 0x54) <= fVar12) {
                fVar11 = fVar12;
              }
              *(float *)(param_1 + 0x54) = fVar11;
            }
            return local_39 | local_3a;
          }
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 4;
          lVar5 = *(long *)(param_1 + 0x38);
        } while( true );
      }
    }
  }
  return 0;
}



/* graphite2::KernCollider::resolve(graphite2::Segment*, graphite2::Slot*, int, graphite2::json*) */

float graphite2::KernCollider::resolve(Segment *param_1,Slot *param_2,int param_3,json *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(int)(((uint)param_4 & 1) * -2 + 1) * *(float *)(param_1 + 0x54);
  fVar2 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x1c);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x1c);
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  return fVar2;
}



/* graphite2::KernCollider::shift(graphite2::Position const&, int) */

void __thiscall graphite2::KernCollider::shift(KernCollider *this,Position *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = *(float **)(this + 0x40);
  for (pfVar2 = *(float **)(this + 0x38); pfVar2 != pfVar1; pfVar2 = pfVar2 + 1) {
    *pfVar2 = *pfVar2 + *(float *)param_1;
  }
  *(float *)(this + 0x58) =
       (float)(int)((param_2 & 1U) * -2 + 1) * *(float *)param_1 + *(float *)(this + 0x58);
  return;
}



/* graphite2::SlotCollision::initFromSlot(graphite2::Segment*, graphite2::Slot*) */

void __thiscall
graphite2::SlotCollision::initFromSlot(SlotCollision *this,Segment *param_1,Slot *param_2)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  long lVar6;
  ushort uVar7;
  
  if (*(ushort *)(param_2 + 0x10) < *(ushort *)(*(long *)(*(long *)(param_1 + 0x88) + 0x78) + 0x28))
  {
    lVar6 = graphite2::GlyphCache::glyph((ushort)*(long *)(*(long *)(param_1 + 0x88) + 0x78));
    if (lVar6 != 0) {
      uVar7 = (short)lVar6 + 0x18;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x2c) = uVar1;
      sVar2 = graphite2::sparse::operator[](uVar7);
      sVar3 = graphite2::sparse::operator[](uVar7);
      sVar4 = graphite2::sparse::operator[](uVar7);
      sVar5 = graphite2::sparse::operator[](uVar7);
      *(ulong *)this = CONCAT44((float)(int)sVar4,(float)(int)sVar5);
      *(ulong *)(this + 8) = CONCAT44((float)(int)sVar2,(float)(int)sVar3);
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x28) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x2a) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x30) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x32) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x34) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x36) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x38) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x3a) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x3c) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined2 *)(this + 0x3e) = uVar1;
      uVar1 = graphite2::sparse::operator[](uVar7);
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined2 *)(this + 0x40) = uVar1;
      *(undefined2 *)(this + 0x2e) = 0;
    }
  }
  return;
}



/* graphite2::SlotCollision::SlotCollision(graphite2::Segment*, graphite2::Slot*) */

void __thiscall
graphite2::SlotCollision::SlotCollision(SlotCollision *this,Segment *param_1,Slot *param_2)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  initFromSlot(this,param_1,param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* graphite2::ShiftCollider::mergeSlot(graphite2::Segment*, graphite2::Slot*,
   graphite2::SlotCollision const*, graphite2::Position const&, bool, bool, bool&, bool,
   graphite2::json*) */

ushort __thiscall
graphite2::ShiftCollider::mergeSlot
          (ShiftCollider *this,Segment *param_1,Slot *param_2,SlotCollision *param_3,
          Position *param_4,bool param_5,bool param_6,bool *param_7,bool param_8,json *param_9)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  long lVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  float *pfVar11;
  SlantBox *pSVar12;
  Position *pPVar13;
  Segment *pSVar14;
  float *pfVar15;
  byte *pbVar16;
  char cVar17;
  int iVar18;
  long lVar19;
  bool bVar20;
  long in_FS_OFFSET;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float local_268;
  uint local_264;
  ShiftCollider *local_240;
  BBox *local_200;
  undefined8 *local_1f8;
  undefined8 local_1e8;
  bool local_191;
  undefined8 local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  uint uStack_154;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  long local_40;
  undefined8 uVar27;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_191 = false;
  lVar7 = *(long *)(*(long *)(param_1 + 0x88) + 0x78);
  uVar10 = 0;
  if ((*(long *)(lVar7 + 0x20) == 0) ||
     (uVar6 = *(ushort *)(param_2 + 0x10), *(ushort *)(lVar7 + 0x28) <= uVar6)) goto LAB_00102722;
  fVar22 = (*(float *)(param_2 + 0x40) - *(float *)(this + 200)) + *(float *)param_4;
  fVar23 = (*(float *)(param_2 + 0x44) - *(float *)(this + 0xcc)) + *(float *)(param_4 + 4);
  pfVar11 = (float *)graphite2::GlyphCache::glyph((ushort)lVar7);
  if (*(short *)(this + 0xea) == 0) {
    cVar17 = '\0';
    if (*(short *)(this + 0xe8) == *(short *)(param_3 + 0x30)) {
      if (param_6) {
        cVar17 = param_6;
        cVar8 = param_6;
        if (*(short *)(this + 0xe8) != 0) goto LAB_00102bdf;
      }
      else {
        cVar17 = '\x01';
      }
    }
LAB_001027c8:
    fVar25 = *(float *)(this + 0xd0);
    if (((pfVar11[2] + fVar22 + fVar25 < *(float *)(this + 0xa8)) ||
        (*(float *)(this + 0xb0) < (fVar22 + *pfVar11) - fVar25)) &&
       ((fVar23 + pfVar11[3] + fVar25 < *(float *)(this + 0xac) ||
        (*(float *)(this + 0xb4) < (fVar23 + pfVar11[1]) - fVar25)))) {
LAB_00102e3d:
      uVar10 = *(ushort *)(param_3 + 0x2e);
      if ((uVar10 == 0) || (*(long *)(lVar7 + 0x20) == 0)) {
        uVar10 = 1;
      }
      else {
        bVar21 = *(ushort *)(lVar7 + 0x28) <= uVar10;
        uVar10 = CONCAT11((char)(uVar10 >> 8),bVar21 || param_8);
        if (!bVar21 && !param_8) {
          pSVar14 = (Segment *)graphite2::Segment::newSlot();
          uVar10 = 1;
          if (pSVar14 == (Segment *)0x0) goto LAB_00102722;
          graphite2::Slot::setGlyph
                    (pSVar14,(ushort)param_1,(GlyphFace *)(ulong)*(ushort *)(param_3 + 0x2e));
          local_68 = 0;
          *(ulong *)(pSVar14 + 0x40) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(pSVar14 + 0x48) >> 0x20),
                        (float)*(undefined8 *)(param_3 + 0x20) +
                        (float)*(undefined8 *)(param_2 + 0x40) +
                        (float)*(undefined8 *)(pSVar14 + 0x48));
          _local_88 = (undefined1  [16])0x0;
          local_78 = (undefined1  [16])0x0;
          SlotCollision::initFromSlot((SlotCollision *)local_88,param_1,(Slot *)pSVar14);
          bVar9 = mergeSlot(this,param_1,(Slot *)pSVar14,(SlotCollision *)local_88,param_4,param_5,
                            param_6,&local_191,true,param_9);
          graphite2::Segment::freeSlot((Slot *)param_1);
          uVar10 = (ushort)bVar9;
        }
      }
      *param_7 = (bool)(*param_7 | local_191);
LAB_00102722:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar10;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_264 = 0;
  }
  else {
    cVar17 = '\0';
    if (((!param_6) || (cVar17 = '\0', *(short *)(this + 0xe8) == 0)) ||
       (cVar8 = '\0', *(short *)(this + 0xea) != *(short *)(param_3 + 0x30))) goto LAB_001027c8;
LAB_00102bdf:
    cVar17 = cVar8;
    local_264 = (uint)*(ushort *)(this + 0xec);
    if (local_264 == 0) goto LAB_001027c8;
  }
  lVar2 = (ulong)uVar6 * 8;
  lVar19 = *(long *)(*(long *)(lVar7 + 0x20) + (ulong)uVar6 * 8);
  fVar25 = (float)*(undefined8 *)(this + 0xb8) + (float)*(undefined8 *)(this + 0xc0);
  fVar28 = (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) +
           (float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20);
  uVar27 = CONCAT44(fVar28,fVar25);
  pfVar15 = (float *)(lVar19 + 4);
  if (lVar19 == 0) {
    pfVar15 = (float *)&SlantBox::empty;
  }
  uVar10 = *(ushort *)(*(long *)(this + 0xa0) + 0x10);
  fVar38 = fVar25 - fVar28;
  fVar35 = fVar28 + fVar25;
  pSVar12 = (SlantBox *)graphite2::GlyphCache::glyph((ushort)lVar7);
  lVar19 = *(long *)(*(long *)(lVar7 + 0x20) + (ulong)uVar10 * 8);
  pPVar13 = (Position *)&SlantBox::empty;
  if (lVar19 != 0) {
    pPVar13 = (Position *)(lVar19 + 4);
  }
  uVar10 = *(ushort *)(param_3 + 0x38);
  fVar31 = (float)*(ushort *)(param_3 + 0x3c);
  fVar32 = (float)*(ushort *)(param_3 + 0x40);
  if (param_5) {
    local_264 = (-(uint)(cVar17 == '\0') & 0xffffffc4) + 0x3f ^ local_264;
    local_264 = ((int)local_264 >> 1 & local_264 & 0x15) * 3 ^ local_264;
  }
  iVar18 = 0;
  fVar33 = fVar22 + fVar23;
  fVar39 = fVar22 - fVar23;
  local_240 = this;
LAB_0010299a:
  fVar43 = *pfVar11;
  fVar49 = *(float *)(pSVar12 + 8);
  fVar24 = pfVar11[1];
  fVar26 = *(float *)(pSVar12 + 0xc);
  fVar34 = *pfVar15;
  fVar30 = *(float *)(pPVar13 + 8);
  fVar4 = pfVar11[3];
  fVar5 = *(float *)(pSVar12 + 4);
  fVar36 = *(float *)(pPVar13 + 4);
  fVar40 = *(float *)(pPVar13 + 0xc);
  fVar42 = pfVar15[1];
  local_268 = pfVar15[3];
  if (iVar18 == 2) {
    fVar41 = (fVar24 - fVar26) + fVar23;
    fVar29 = (fVar34 - fVar30) + fVar33;
    fVar44 = (fVar43 - fVar49) + fVar22;
    fVar34 = fVar41 + fVar41 + fVar38;
    if (fVar29 <= fVar34) {
      fVar29 = fVar34;
    }
    fVar34 = (fVar44 + fVar44) - fVar38;
    if (fVar29 <= fVar34) {
      fVar29 = fVar34;
    }
    fVar34 = (pfVar11[2] - *(float *)pSVar12) + fVar22;
    fVar41 = (fVar4 - fVar5) + fVar23;
    fVar34 = (fVar34 + fVar34) - fVar38;
    fVar44 = fVar41 + fVar41 + fVar38;
    fVar41 = (pfVar15[2] - *(float *)pPVar13) + fVar33;
    if (fVar44 <= fVar41) {
      fVar41 = fVar44;
    }
    fVar44 = fVar40 + fVar38;
    fVar37 = fVar36 + fVar38;
    if (fVar34 <= fVar41) {
      fVar41 = fVar34;
    }
    fVar34 = fVar42 + fVar39;
    local_268 = local_268 + fVar39;
    fVar36 = ((*(float *)(this + 0xb0) + *(float *)(this + 0xb4)) - *(float *)pPVar13) + fVar30 +
             *(float *)(this + 0xc0) + *(float *)(this + 0xc4);
    fVar42 = *(float *)(this + 0xa8) + *(float *)(this + 0xac) +
             *(float *)(this + 0xc0) + *(float *)(this + 0xc4);
    fVar30 = *(float *)(this + 0xd0) / __LC7;
  }
  else if (iVar18 == 3) {
    fVar44 = (fVar43 - fVar49) + fVar22;
    fVar29 = (fVar42 - fVar40) + fVar39;
    fVar41 = (local_268 - fVar36) + fVar39;
    fVar44 = (fVar44 + fVar44) - fVar35;
    fVar42 = ((fVar4 - fVar5) + fVar23) * _LC6 + fVar35;
    if (fVar29 <= fVar44) {
      fVar29 = fVar44;
    }
    if (fVar29 <= fVar42) {
      fVar29 = fVar42;
    }
    fVar42 = (pfVar11[2] - *(float *)pSVar12) + fVar22;
    fVar44 = fVar30 + fVar35;
    fVar42 = (fVar42 + fVar42) - fVar35;
    fVar30 = (fVar23 + (fVar24 - fVar26)) * _LC6 + fVar35;
    if (fVar42 <= fVar41) {
      fVar41 = fVar42;
    }
    if (fVar30 <= fVar41) {
      fVar41 = fVar30;
    }
    fVar30 = *(float *)(this + 0xd0) / __LC7;
    fVar37 = *(float *)pPVar13 + fVar35;
    fVar34 = fVar34 + fVar33;
    local_268 = fVar33 + pfVar15[2];
    fVar42 = (*(float *)(this + 0xa8) - *(float *)(this + 0xb4)) +
             (*(float *)(this + 0xc0) - *(float *)(this + 0xc4));
    fVar36 = ((*(float *)(this + 0xb0) - *(float *)(this + 0xac)) - fVar36) + fVar40 +
             (*(float *)(this + 0xc0) - *(float *)(this + 0xc4));
  }
  else if (iVar18 == 1) {
    fVar41 = ((fVar36 - local_268) + fVar25) - fVar39;
    fVar36 = ((fVar40 - fVar42) + fVar25) - fVar39;
    fVar29 = (fVar24 - fVar26) + fVar23;
    fVar34 = ((fVar34 - fVar30) - fVar25) + fVar33;
    if (fVar29 <= fVar41) {
      fVar29 = fVar41;
    }
    if (fVar29 <= fVar34) {
      fVar29 = fVar34;
    }
    fVar34 = ((pfVar15[2] - *(float *)pPVar13) - fVar25) + fVar33;
    fVar41 = (fVar4 - fVar5) + fVar23;
    if (fVar36 <= fVar41) {
      fVar41 = fVar36;
    }
    if (fVar34 <= fVar41) {
      fVar41 = fVar34;
    }
    fVar37 = *(float *)pSVar12 + fVar25;
    fVar44 = fVar25 + fVar49;
    local_268 = fVar22 + pfVar11[2];
    fVar34 = fVar22 + fVar43;
    fVar42 = *(float *)(this + 0xac) + *(float *)(this + 0xc4);
    fVar36 = (*(float *)(this + 0xb4) - fVar5) + fVar26 + *(float *)(this + 0xc4);
    fVar30 = *(float *)(this + 0xd0);
  }
  else {
    fVar44 = fVar28 + fVar26;
    fVar40 = (fVar42 - fVar40) + fVar28 + fVar39;
    fVar36 = (local_268 - fVar36) + fVar28 + fVar39;
    fVar29 = (fVar43 - fVar49) + fVar22;
    fVar34 = ((fVar34 - fVar30) - fVar28) + fVar33;
    if (fVar29 <= fVar40) {
      fVar29 = fVar40;
    }
    if (fVar29 <= fVar34) {
      fVar29 = fVar34;
    }
    fVar34 = ((pfVar15[2] - *(float *)pPVar13) - fVar28) + fVar33;
    fVar41 = (pfVar11[2] - *(float *)pSVar12) + fVar22;
    if (fVar36 <= fVar41) {
      fVar41 = fVar36;
    }
    if (fVar34 <= fVar41) {
      fVar41 = fVar34;
    }
    local_268 = fVar23 + fVar4;
    fVar34 = fVar23 + fVar24;
    fVar37 = fVar28 + fVar5;
    fVar42 = *(float *)(this + 0xa8) + *(float *)(this + 0xc0);
    fVar36 = (*(float *)(this + 0xb0) - *(float *)pSVar12) + fVar49 + *(float *)(this + 0xc0);
    fVar30 = *(float *)(this + 0xd0);
  }
  if (local_264 == 0) goto switchD_00102ba0_caseD_3;
  fVar40 = *(float *)pSVar12;
  fVar47 = *(float *)(this + 0xa8) + *(float *)(this + 0xc0) + fVar40;
  fVar48 = *(float *)(this + 0xb4) + *(float *)(this + 0xc4) + fVar26;
  fVar45 = *(float *)(this + 0xc0) + *(float *)(this + 0xb0) + fVar49;
  fVar46 = *(float *)(this + 0xc4) + *(float *)(this + 0xac) + fVar5;
  bVar21 = SUB81(this,0);
  local_190 = uVar27;
  switch(local_264) {
  case 1:
    fVar24 = (fVar4 + fVar24) * (float)_LC2 + fVar23;
    fVar49 = ((fVar43 - (float)(int)*(short *)(param_3 + 0x3a)) + fVar22) -
             (fVar49 - fVar40) * (float)_LC2;
    uStack_80 = CONCAT44(fVar24,fVar45);
    local_1e8 = CONCAT44(fVar24,fVar49);
    local_88 = (undefined1  [8])
               CONCAT44(fVar46,(fVar43 + pfVar11[2]) * (float)_LC2 +
                               (float)(int)*(short *)(param_3 + 0x36) + fVar22);
    bVar20 = SUB81(&local_190,0);
    addBox_slope(bVar21,(Rect *)0x1,(BBox *)local_88,pSVar12,pPVar13,0.0,(float)uVar10,bVar20,0);
    uStack_80 = CONCAT44(fVar48,fVar45);
    local_88 = (undefined1  [8])local_1e8;
    removeBox((Rect *)this,(BBox *)local_88,pSVar12,pPVar13,iVar18);
    uStack_80 = CONCAT44(fVar48,fVar49);
    local_88 = (undefined1  [8])CONCAT44(fVar24 - (float)*(ushort *)(param_3 + 0x3e),fVar47);
    addBox_slope(bVar21,(Rect *)0x1,(BBox *)local_88,pSVar12,pPVar13,fVar31,0.0,bVar20,0);
    local_88._4_4_ = fVar24;
    local_88._0_4_ = fVar47;
    uStack_80._4_4_ = (float)*(ushort *)(param_3 + 0x3e) + fVar24;
    uStack_80._0_4_ = fVar22 + pfVar11[2];
    addBox_slope(bVar21,(Rect *)0x0,(BBox *)local_88,pSVar12,pPVar13,0.0,fVar32,bVar20,1);
    local_88._4_4_ = fVar24 - (float)*(ushort *)(param_3 + 0x3e);
    uStack_80._0_4_ = fVar22 + pfVar11[2];
    uStack_80._4_4_ = fVar24;
    goto LAB_00103793;
  case 2:
    fVar24 = (fVar4 + fVar24) * (float)_LC2 + fVar23;
    fVar49 = (float)(int)*(short *)(param_3 + 0x3a) + pfVar11[2] + fVar22 +
             (fVar49 - fVar40) * (float)_LC2;
    local_1e8 = CONCAT44(fVar46,fVar47);
    local_88._4_4_ = fVar24;
    local_88._0_4_ = fVar47;
    uStack_80._0_4_ =
         (float)(int)*(short *)(param_3 + 0x36) + (pfVar11[2] + fVar43) * (float)_LC2 + fVar22;
    uStack_80._4_4_ = fVar48;
    bVar20 = SUB81(&local_190,0);
    addBox_slope(bVar21,(Rect *)0x1,(BBox *)local_88,pSVar12,pPVar13,0.0,(float)uVar10,bVar20,1);
    uStack_80 = CONCAT44(fVar24,fVar49);
    local_88 = (undefined1  [8])local_1e8;
    removeBox((Rect *)this,(BBox *)local_88,pSVar12,pPVar13,iVar18);
    local_88 = (undefined1  [8])CONCAT44(fVar46,fVar49);
    uStack_80 = CONCAT44(fVar24 - (float)*(ushort *)(param_3 + 0x3e),fVar45);
    addBox_slope(bVar21,(Rect *)0x1,(BBox *)local_88,pSVar12,pPVar13,fVar31,0.0,bVar20,1);
    local_88 = (undefined1  [8])CONCAT44(fVar24,fVar22 + *pfVar11);
    uStack_80 = CONCAT44((float)*(ushort *)(param_3 + 0x3e) + fVar24,fVar45);
    addBox_slope(bVar21,(Rect *)0x0,(BBox *)local_88,pSVar12,pPVar13,0.0,fVar32,bVar20,1);
    uStack_80._4_4_ = fVar24;
    uStack_80._0_4_ = fVar45;
    local_88._4_4_ = fVar24 - (float)*(ushort *)(param_3 + 0x3e);
    local_88._0_4_ = fVar22 + *pfVar11;
LAB_00103793:
    local_1f8 = &local_190;
    local_200 = (BBox *)local_88;
    addBox_slope(bVar21,(Rect *)0x0,local_200,pSVar12,pPVar13,fVar31,fVar32,SUB81(local_1f8,0),0);
    break;
  case 4:
    local_88._4_4_ = fVar4 + fVar23;
    local_88._0_4_ = (fVar43 - fVar49) + fVar22;
    uStack_80._4_4_ = fVar48;
    uStack_80._0_4_ = (pfVar11[2] - fVar40) + fVar22;
    goto LAB_00102c6e;
  case 8:
    local_88._4_4_ = fVar46;
    local_88._0_4_ = (fVar43 - fVar49) + fVar22;
    uStack_80._4_4_ = fVar24 + fVar23;
    uStack_80._0_4_ = (pfVar11[2] - fVar40) + fVar22;
    goto LAB_00102c6e;
  case 0x10:
    local_88._4_4_ = (fVar24 - fVar26) + fVar23;
    local_88._0_4_ = fVar47;
    uStack_80._0_4_ = (fVar43 - fVar49) + fVar22;
    uStack_80._4_4_ = (fVar4 - fVar5) + fVar23;
LAB_00102c6e:
    removeBox((Rect *)this,(BBox *)local_88,pSVar12,pPVar13,iVar18);
    break;
  case 0x20:
    uStack_80._4_4_ = (fVar4 - fVar5) + fVar23;
    uStack_80._0_4_ = fVar45;
    local_88._4_4_ = (fVar24 - fVar26) + fVar23;
    local_88._0_4_ = (pfVar11[2] - fVar40) + fVar22;
    removeBox((Rect *)this,(BBox *)local_88,pSVar12,pPVar13,iVar18);
  }
switchD_00102ba0_caseD_3:
  if (((fVar42 - fVar30 <= fVar41) && (fVar29 <= fVar36 + fVar30)) &&
     ((fVar37 - fVar30 <= local_268 && (fVar34 <= fVar44 + fVar30)))) {
    pbVar16 = *(byte **)(*(long *)(lVar7 + 0x20) + lVar2);
    if ((pbVar16 != (byte *)0x0) && (bVar9 = *pbVar16, bVar9 != 0)) {
      lVar19 = 0;
      bVar21 = false;
      do {
        pfVar1 = (float *)(pbVar16 + lVar19 + 0x14);
        pfVar3 = (float *)(pbVar16 + lVar19 + 0x24);
        if (iVar18 == 2) {
          fVar26 = (pfVar1[1] - *(float *)(pSVar12 + 0xc)) + fVar23;
          fVar24 = (*pfVar1 - *(float *)(pSVar12 + 8)) + fVar22;
          fVar43 = (*pfVar3 - *(float *)(pPVar13 + 8)) + fVar33;
          fVar49 = (pfVar3[2] - *(float *)pPVar13) + fVar33;
          fVar26 = fVar26 + fVar26 + fVar38;
          fVar24 = (fVar24 + fVar24) - fVar38;
          if (fVar43 <= fVar26) {
            fVar43 = fVar26;
          }
          if (fVar43 <= fVar24) {
            fVar43 = fVar24;
          }
          fVar26 = (pfVar1[3] - *(float *)(pSVar12 + 4)) + fVar23;
          fVar24 = (pfVar1[2] - *(float *)pSVar12) + fVar22;
          fVar26 = fVar26 + fVar26 + fVar38;
          if (fVar26 <= fVar49) {
            fVar49 = fVar26;
          }
          fVar24 = (fVar24 + fVar24) - fVar38;
          if (fVar24 <= fVar49) {
            fVar49 = fVar24;
          }
          fVar26 = pfVar3[1] + fVar39;
          fVar24 = pfVar3[3] + fVar39;
        }
        else if (iVar18 == 3) {
          fVar24 = (*pfVar1 - *(float *)(pSVar12 + 8)) + fVar22;
          fVar43 = (pfVar3[1] - *(float *)(pPVar13 + 0xc)) + fVar39;
          fVar49 = (pfVar3[3] - *(float *)(pPVar13 + 4)) + fVar39;
          fVar26 = (fVar24 + fVar24) - fVar35;
          fVar24 = ((pfVar1[3] - *(float *)(pSVar12 + 4)) + fVar23) * _LC6 + fVar35;
          if (fVar43 <= fVar26) {
            fVar43 = fVar26;
          }
          if (fVar43 <= fVar24) {
            fVar43 = fVar24;
          }
          fVar24 = (pfVar1[2] - *(float *)pSVar12) + fVar22;
          fVar24 = (fVar24 + fVar24) - fVar35;
          if (fVar24 <= fVar49) {
            fVar49 = fVar24;
          }
          fVar24 = ((pfVar1[1] - *(float *)(pSVar12 + 0xc)) + fVar23) * _LC6 + fVar35;
          if (fVar24 <= fVar49) {
            fVar49 = fVar24;
          }
          fVar26 = *pfVar3 + fVar33;
          fVar24 = pfVar3[2] + fVar33;
        }
        else {
          fVar24 = (*pfVar3 - *(float *)(pPVar13 + 8)) + fVar33;
          if (iVar18 == 1) {
            fVar24 = fVar24 - fVar25;
            fVar43 = (pfVar1[1] - *(float *)(pSVar12 + 0xc)) + fVar23;
            fVar49 = (pfVar1[3] - *(float *)(pSVar12 + 4)) + fVar23;
            fVar26 = ((*(float *)(pPVar13 + 4) - pfVar3[3]) - fVar39) + fVar25;
            if (fVar43 <= fVar26) {
              fVar43 = fVar26;
            }
            if (fVar43 <= fVar24) {
              fVar43 = fVar24;
            }
            fVar24 = ((*(float *)(pPVar13 + 0xc) - pfVar3[1]) - fVar39) + fVar25;
            if (fVar24 <= fVar49) {
              fVar49 = fVar24;
            }
            fVar24 = ((pfVar3[2] - *(float *)pPVar13) + fVar33) - fVar25;
            if (fVar24 <= fVar49) {
              fVar49 = fVar24;
            }
            fVar26 = *pfVar1 + fVar22;
            fVar24 = pfVar1[2] + fVar22;
          }
          else {
            fVar24 = fVar24 - fVar28;
            fVar43 = (*pfVar1 - *(float *)(pSVar12 + 8)) + fVar22;
            fVar49 = (pfVar1[2] - *(float *)pSVar12) + fVar22;
            fVar26 = (pfVar3[1] - *(float *)(pPVar13 + 0xc)) + fVar39 + fVar28;
            if (fVar43 <= fVar26) {
              fVar43 = fVar26;
            }
            if (fVar43 <= fVar24) {
              fVar43 = fVar24;
            }
            fVar24 = (pfVar3[3] - *(float *)(pPVar13 + 4)) + fVar39 + fVar28;
            if (fVar24 <= fVar49) {
              fVar49 = fVar24;
            }
            fVar24 = ((pfVar3[2] - *(float *)pPVar13) + fVar33) - fVar28;
            if (fVar24 <= fVar49) {
              fVar49 = fVar24;
            }
            fVar26 = pfVar1[1] + fVar23;
            fVar24 = pfVar1[3] + fVar23;
          }
        }
        if ((((fVar42 - fVar30 <= fVar49) && (fVar43 <= fVar36 + fVar30)) &&
            (fVar37 - fVar30 <= fVar24)) && (fVar26 <= fVar44 + fVar30)) {
          if (fVar44 < fVar26) {
            fVar24 = (fVar30 - fVar26) + fVar44;
            fVar24 = fVar24 * fVar24 * *(float *)(this + 0xd4);
            if (iVar18 < 2) {
              fStack_180 = fVar24 + 0.0;
              uStack_174 = uStack_174 & 0xffffff00;
              uStack_17c = 0;
              uStack_178 = 0;
              local_188 = fVar43 - fVar30;
              fStack_184 = fVar30 + fVar49;
              goto LAB_00103e36;
            }
            fStack_160 = fVar24 + 0.0;
            uStack_154 = uStack_154 & 0xffffff00;
            uStack_15c = 0;
            uStack_158 = 0;
            local_168 = fVar43 - fVar30;
            fStack_164 = fVar30 + fVar49;
            graphite2::Zones::insert(local_240);
          }
          else if (fVar37 <= fVar24) {
            graphite2::Zones::exclude_with_margins(fVar43,fVar49,(int)local_240);
          }
          else {
            fVar24 = (fVar30 - fVar37) + fVar24;
            fVar24 = fVar24 * fVar24 * *(float *)(this + 0xd4);
            if (iVar18 < 2) {
              fStack_140 = fVar24 + 0.0;
              uStack_134 = uStack_134 & 0xffffff00;
              uStack_13c = 0;
              uStack_138 = 0;
              local_148 = fVar43 - fVar30;
              fStack_144 = fVar30 + fVar49;
            }
            else {
              fStack_120 = fVar24 + 0.0;
              uStack_114 = uStack_114 & 0xffffff00;
              uStack_11c = 0;
              uStack_118 = 0;
              local_128 = fVar43 - fVar30;
              fStack_124 = fVar30 + fVar49;
            }
LAB_00103e36:
            graphite2::Zones::insert(local_240);
          }
          bVar21 = true;
        }
        lVar19 = lVar19 + 0x20;
        if (lVar19 == (ulong)bVar9 << 5) goto LAB_00104130;
        pbVar16 = *(byte **)(*(long *)(lVar7 + 0x20) + lVar2);
      } while( true );
    }
    local_191 = true;
    if (fVar44 < fVar34) {
      fVar44 = (fVar30 - fVar34) + fVar44;
      fVar43 = fVar44 * fVar44 * *(float *)(this + 0xd4);
      if (iVar18 < 2) {
        fStack_100 = fVar43 + 0.0;
        uStack_f4 = uStack_f4 & 0xffffff00;
        uStack_fc = 0;
        uStack_f8 = 0;
        local_108 = fVar29 - fVar30;
        fStack_104 = fVar41 + fVar30;
LAB_00104296:
        iVar18 = iVar18 + 1;
        graphite2::Zones::insert(local_240);
        local_240 = local_240 + 0x28;
        goto LAB_0010299a;
      }
      fStack_e0 = fVar43 + 0.0;
      uStack_d4 = uStack_d4 & 0xffffff00;
      uStack_dc = 0;
      uStack_d8 = 0;
      local_e8 = fVar29 - fVar30;
      fStack_e4 = fVar41 + fVar30;
    }
    else {
      if (fVar37 <= local_268) {
        graphite2::Zones::exclude_with_margins(fVar29,fVar41,(int)local_240);
        goto LAB_00102e18;
      }
      local_268 = (fVar30 - fVar37) + local_268;
      fVar43 = local_268 * local_268 * *(float *)(this + 0xd4);
      if (iVar18 < 2) {
        fStack_c0 = fVar43 + 0.0;
        uStack_b4 = uStack_b4 & 0xffffff00;
        uStack_bc = 0;
        uStack_b8 = 0;
        local_c8 = fVar29 - fVar30;
        fStack_c4 = fVar41 + fVar30;
        goto LAB_00104296;
      }
      fStack_a0 = fVar43 + 0.0;
      uStack_94 = uStack_94 & 0xffffff00;
      uStack_9c = 0;
      uStack_98 = 0;
      local_a8 = fVar29 - fVar30;
      fStack_a4 = fVar41 + fVar30;
    }
    graphite2::Zones::insert(local_240);
  }
LAB_00102e18:
  iVar18 = iVar18 + 1;
  local_240 = local_240 + 0x28;
  if (iVar18 == 4) goto LAB_00102e3d;
  goto LAB_0010299a;
LAB_00104130:
  if (bVar21) {
    local_191 = true;
  }
  goto LAB_00102e18;
}



/* graphite2::SlotCollision::getKern(int) const */

void graphite2::SlotCollision::getKern(int param_1)

{
  return;
}



/* graphite2::SlotCollision::ignore() const */

bool __thiscall graphite2::SlotCollision::ignore(SlotCollision *this)

{
  return ((byte)this[0x2c] & 0x82) != 0;
}



/* graphite2::ShiftCollider::initSlot(graphite2::Segment*, graphite2::Slot*, graphite2::Rect const&,
   float, float, graphite2::Position const&, graphite2::Position const&, int, graphite2::json*)
   [clone .cold] */

void graphite2::ShiftCollider::initSlot
               (Segment *param_1,Slot *param_2,Rect *param_3,float param_4,float param_5,
               Position *param_6,Position *param_7,int param_8,json *param_9)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* graphite2::KernCollider::initSlot(graphite2::Segment*, graphite2::Slot*, graphite2::Rect const&,
   float, graphite2::Position const&, graphite2::Position const&, int, float, float,
   graphite2::json*) [clone .cold] */

void graphite2::KernCollider::initSlot
               (Segment *param_1,Slot *param_2,Rect *param_3,float param_4,Position *param_5,
               Position *param_6,int param_7,float param_8,float param_9,json *param_10)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


