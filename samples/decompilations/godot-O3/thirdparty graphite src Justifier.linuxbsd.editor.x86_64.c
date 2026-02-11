
/* JustifyTotal::accumulate(graphite2::Slot*, graphite2::Segment*, int) */

void __thiscall
JustifyTotal::accumulate(JustifyTotal *this,Slot *param_1,Segment *param_2,int param_3)

{
  int iVar1;
  uchar uVar2;
  uchar uVar3;
  
  uVar2 = (uchar)param_3;
  *(int *)this = *(int *)this + 1;
  uVar3 = (uchar)param_2;
  iVar1 = graphite2::Slot::getJustify((Segment *)param_1,uVar3,uVar2);
  *(int *)(this + 4) = *(int *)(this + 4) + iVar1;
  iVar1 = graphite2::Slot::getJustify((Segment *)param_1,uVar3,uVar2);
  *(int *)(this + 8) = *(int *)(this + 8) + iVar1;
  iVar1 = graphite2::Slot::getJustify((Segment *)param_1,uVar3,uVar2);
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + iVar1;
  iVar1 = graphite2::Slot::getJustify((Segment *)param_1,uVar3,uVar2);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + iVar1;
  return;
}



/* graphite2::Segment::addLineEnd(graphite2::Slot*) */

Segment * __thiscall graphite2::Segment::addLineEnd(Segment *this,Slot *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Segment *pSVar5;
  
  pSVar5 = (Segment *)graphite2::Segment::newSlot();
  if (pSVar5 != (Segment *)0x0) {
    uVar2 = *(ushort *)(*(long *)(this + 0x90) + 0x40);
    if (uVar2 < *(ushort *)(*(long *)(*(long *)(this + 0x88) + 0x78) + 0x28)) {
      graphite2::GlyphCache::glyph((ushort)*(long *)(*(long *)(this + 0x88) + 0x78));
    }
    graphite2::Slot::setGlyph(pSVar5,(ushort)this,(GlyphFace *)(ulong)uVar2);
    if (param_1 == (Slot *)0x0) {
      puVar4 = *(undefined8 **)(this + 0xa0);
      uVar3 = *(undefined4 *)((long)puVar4 + 0x1c);
      *(undefined8 **)(pSVar5 + 8) = puVar4;
      *puVar4 = pSVar5;
      *(ulong *)(pSVar5 + 0x18) = CONCAT44(uVar3,uVar3);
      return pSVar5;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(Slot **)pSVar5 = param_1;
    *(undefined8 *)(pSVar5 + 8) = uVar1;
    *(Segment **)(param_1 + 8) = pSVar5;
    *(undefined4 *)(pSVar5 + 0x18) = uVar3;
    if (*(long *)(pSVar5 + 8) == 0) {
      *(undefined4 *)(pSVar5 + 0x1c) = uVar3;
      return pSVar5;
    }
    *(undefined4 *)(pSVar5 + 0x1c) = *(undefined4 *)(*(long *)(pSVar5 + 8) + 0x1c);
  }
  return pSVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* graphite2::Segment::justify(graphite2::Slot*, graphite2::Font const*, float,
   graphite2::justFlags, graphite2::Slot*, graphite2::Slot*) */

void __thiscall
graphite2::Segment::justify
          (float param_3,Segment *this,Slot *param_1,Slot *param_2,uint param_5,Slot *param_6,
          Slot *param_7)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  long lVar12;
  JustifyTotal *pJVar13;
  Slot *pSVar14;
  uchar uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  Segment *pSVar19;
  uint uVar20;
  uchar uVar21;
  Segment *pSVar22;
  int iVar23;
  Slot *pSVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  Slot *local_80;
  JustifyTotal *local_60;
  Slot *local_50;
  JustifyTotal *local_48;
  
  local_80 = *(Slot **)(this + 0xa0);
  fVar29 = _LC0;
  if (param_2 != (Slot *)0x0) {
    fVar29 = *(float *)(param_2 + 0x38);
  }
  lVar12 = *(long *)(this + 0x90);
  if ((param_3 < 0.0) && (*(char *)(lVar12 + 0x2e) == '\0')) {
    return;
  }
  pSVar14 = param_6;
  if ((((byte)this[0xc4] & 1) != *(byte *)(lVar12 + 0x2f)) &&
     (*(char *)(lVar12 + 0x2d) != *(char *)(lVar12 + 0x28))) {
    graphite2::Segment::reverseSlots();
    pSVar14 = param_7;
    param_7 = param_6;
  }
  if (pSVar14 == (Slot *)0x0) {
    pSVar14 = param_1;
  }
  do {
    pSVar24 = pSVar14;
    pSVar14 = *(Slot **)(pSVar24 + 0x28);
  } while (*(Slot **)(pSVar24 + 0x28) != (Slot *)0x0);
  if (param_7 == (Slot *)0x0) {
    param_7 = *(Slot **)(this + 0xa0);
  }
  do {
    pSVar14 = param_7;
    param_7 = *(Slot **)(pSVar14 + 0x28);
  } while (*(Slot **)(pSVar14 + 0x28) != (Slot *)0x0);
  fVar27 = *(float *)(pSVar24 + 0x40);
  param_3 = param_3 / fVar29;
  if (((param_5 & 2) == 0) && (pSVar24 != pSVar14)) {
    do {
      pfVar11 = (float *)graphite2::GlyphCache::glyph
                                   ((ushort)*(undefined8 *)(*(long *)(this + 0x88) + 0x78));
      bVar7 = (pfVar11[1] != 0.0 || *pfVar11 != 0.0) || pfVar11[2] != 0.0;
      if (bVar7) goto LAB_001002b2;
      bVar6 = !NAN(pfVar11[3]);
      if (pfVar11[3] != 0.0) {
        bVar6 = bVar7;
      }
      if ((bVar6) || (pSVar14 = *(Slot **)(pSVar14 + 8), pSVar14 == pSVar24)) goto LAB_001002b2;
    } while (pSVar14 != (Slot *)0x0);
  }
  else {
LAB_001002b2:
    local_80 = *(Slot **)(pSVar14 + 0x38);
  }
  pSVar22 = *(Segment **)(pSVar24 + 0x38);
  bVar1 = *(byte *)(*(long *)(this + 0x90) + 0x29);
  uVar18 = (ulong)bVar1;
  uVar20 = (uint)bVar1;
  uVar21 = (uchar)this;
  if (bVar1 == 0) {
    if ((param_1 != (Slot *)0x0) && (pSVar19 = (Segment *)param_1, local_80 != param_1)) {
      do {
        if (*(ulong *)(this + 0xb8) <= (ulong)*(uint *)(pSVar19 + 0x18)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        iVar17 = *(int *)((ulong)*(uint *)(pSVar19 + 0x18) * 0x20 + *(long *)(this + 0x78));
        if ((uint)(iVar17 - 9U < 5) + (uint)(iVar17 == 0x20) + (uint)(iVar17 == 0x85) +
            (uint)(iVar17 == 0xa0) + (uint)(iVar17 == 0x1680) + (uint)(iVar17 == 0x180e) +
            (uint)(iVar17 - 0x2000U < 0xb) + (uint)(iVar17 == 0x2028) + (uint)(iVar17 == 0x2029) +
            (uint)(iVar17 == 0x202f) + (uint)(iVar17 == 0x205f) + (uint)(iVar17 == 0x3000) != 0) {
          uVar18 = (ulong)((int)uVar18 + 1);
          graphite2::Slot::setJustify(pSVar19,uVar21,'\0',3);
          graphite2::Slot::setJustify(pSVar19,uVar21,'\0',2);
          graphite2::Slot::setJustify(pSVar19,uVar21,'\0',0);
        }
        pSVar19 = *(Segment **)(pSVar19 + 0x38);
      } while ((pSVar19 != (Segment *)0x0) && (local_80 != (Slot *)pSVar19));
      pSVar19 = (Segment *)param_1;
      if ((int)uVar18 == 0) {
        do {
          graphite2::Slot::setJustify(pSVar19,uVar21,'\0',3);
          graphite2::Slot::setJustify(pSVar19,uVar21,'\0',2);
          graphite2::Slot::setJustify(pSVar19,uVar21,'\0',0);
          pSVar19 = *(Segment **)(pSVar19 + 0x38);
          if (pSVar19 == (Segment *)0x0) break;
        } while (local_80 != (Slot *)pSVar19);
      }
    }
    local_48 = (JustifyTotal *)malloc(0xa0);
    if (local_48 == (JustifyTotal *)0x0) {
      justify();
      return;
    }
    uVar20 = 1;
    *(undefined4 *)(local_48 + 0x10) = 0;
    *(undefined1 (*) [16])local_48 = (undefined1  [16])0x0;
  }
  else {
    local_48 = (JustifyTotal *)malloc((uVar18 + 7 & 0xfffffffffffffff8) * 0x14);
    pJVar13 = local_48;
    if (local_48 == (JustifyTotal *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    do {
      *(undefined4 *)(pJVar13 + 0x10) = 0;
      *(undefined1 (*) [16])pJVar13 = (undefined1  [16])0x0;
      uVar18 = uVar18 - 1;
      pJVar13 = pJVar13 + 0x14;
    } while (uVar18 != 0);
  }
  fVar30 = 0.0;
  pSVar24 = (Slot *)pSVar22;
  if (pSVar22 != (Segment *)0x0 && local_80 != (Slot *)pSVar22) {
    do {
      fVar25 = (*(float *)(pSVar24 + 0x40) / fVar29 + *(float *)(pSVar24 + 0x50)) - fVar27 / fVar29;
      uVar16 = 0;
      pJVar13 = local_48;
      if (fVar25 <= fVar30) {
        fVar25 = fVar30;
      }
      do {
        fVar30 = fVar25;
        JustifyTotal::accumulate(pJVar13,pSVar24,this,uVar16);
        uVar16 = uVar16 + 1;
        pJVar13 = pJVar13 + 0x14;
        fVar25 = fVar30;
      } while (uVar20 != uVar16);
      *(undefined4 *)(pSVar24 + 0x68) = 0;
      pSVar24 = *(Slot **)(pSVar24 + 0x38);
    } while ((pSVar24 != (Slot *)0x0) && (local_80 != pSVar24));
  }
  if (0.0 <= param_3) {
    iVar17 = uVar20 - 1;
    local_60 = local_48 + (long)(int)uVar20 * 0x14 + -4;
    do {
      for (; *(int *)local_60 != 0; local_60 = local_60 + -0x14) {
        fVar27 = param_3 - fVar30;
        fVar29 = fVar27 / (float)*(int *)local_60;
        if (pSVar22 != (Segment *)0x0 && local_80 != (Slot *)pSVar22) {
          while( true ) {
            iVar23 = 0;
            fVar25 = 0.0;
            pSVar19 = pSVar22;
            do {
              uVar15 = (uchar)iVar17;
              iVar9 = graphite2::Slot::getJustify(pSVar19,uVar21,uVar15);
              fVar31 = fVar25 + (float)iVar9 * fVar29;
              iVar10 = graphite2::Slot::getJustify(pSVar19,uVar21,uVar15);
              if (iVar10 == 0) {
                iVar10 = 1;
              }
              if (0.0 < fVar31) {
                uVar8 = graphite2::Slot::getJustify(pSVar19,uVar21,uVar15);
                fVar26 = (float)uVar8;
                if (iVar17 == 0) {
                  fVar26 = fVar26 - *(float *)(pSVar19 + 0x68);
                }
                if (fVar31 <= fVar26) {
                  iVar23 = iVar23 + iVar9;
                  fVar26 = fVar31;
                }
              }
              else {
                uVar8 = graphite2::Slot::getJustify(pSVar19,uVar21,uVar15);
                fVar28 = (float)uVar8;
                if (iVar17 == 0) {
                  fVar28 = fVar28 + *(float *)(pSVar19 + 0x68);
                }
                fVar26 = (float)((uint)fVar28 ^ __LC3);
                if ((float)((uint)fVar31 ^ __LC3) <= fVar28) {
                  iVar23 = iVar23 + iVar9;
                  fVar26 = fVar31;
                }
              }
              iVar10 = (int)(fVar26 / (float)iVar10) * iVar10;
              if (iVar10 != 0) {
                fVar31 = (float)iVar10;
                if (iVar17 == 0) {
                  *(float *)(pSVar19 + 0x68) = *(float *)(pSVar19 + 0x68) + fVar31;
                }
                else {
                  graphite2::Slot::setJustify(pSVar19,uVar21,uVar15,4);
                }
                fVar25 = ((float)iVar9 * fVar29 - fVar31) + fVar25;
              }
              pSVar19 = *(Segment **)(pSVar19 + 0x38);
            } while ((pSVar19 != (Segment *)0x0) && (local_80 != (Slot *)pSVar19));
            fVar30 = fVar30 + (fVar27 - fVar25);
            if (iVar17 != 0) break;
            if (((int)(float)((uint)fVar25 & __LC4) < 1) || (iVar23 == 0)) goto LAB_00100545;
            fVar27 = param_3 - fVar30;
            fVar29 = fVar27 / (float)iVar23;
          }
        }
        else {
          if (iVar17 == 0) goto LAB_00100545;
          fVar30 = fVar30 + fVar27;
        }
        iVar17 = iVar17 + -1;
      }
      iVar17 = iVar17 + -1;
      local_60 = local_60 + -0x14;
    } while (iVar17 != -1);
  }
LAB_00100545:
  uVar4 = *(undefined8 *)(this + 0x98);
  uVar5 = *(undefined8 *)(this + 0xa0);
  pSVar22 = *(Segment **)(this + 0x90);
  if (((byte)pSVar22[0x2e] & 1) == 0) {
    *(Slot **)(this + 0xa0) = pSVar14;
    *(Slot **)(this + 0x98) = param_1;
    local_50 = param_1;
  }
  else {
    local_50 = (Slot *)addLineEnd(this,param_1);
    *(Slot **)(this + 0x98) = local_50;
    pSVar14 = (Slot *)addLineEnd(this,local_80);
    *(Slot **)(this + 0xa0) = pSVar14;
    if ((*(long *)(this + 0x98) == 0) || (pSVar14 == (Slot *)0x0)) goto LAB_00100695;
    pSVar22 = *(Segment **)(this + 0x90);
  }
  if ((pSVar22[0x2b] != pSVar22[0x2c]) && ((0.0 <= param_3 || (((byte)pSVar22[0x2e] & 1) != 0)))) {
    graphite2::Silf::runGraphite(pSVar22,uVar21,(uchar)pSVar22[0x2c],(uint)(byte)pSVar22[0x2b]);
  }
  graphite2::Segment::positionSlots
            ((Font *)this,param_2,local_50,SUB81(pSVar14,0),this[0xc4] != (Segment)0x0);
  lVar12 = *(long *)(this + 0x90);
  if ((*(byte *)(lVar12 + 0x2e) & 1) != 0) {
    plVar2 = *(long **)(this + 0x98);
    if (plVar2 != (long *)0x0) {
      lVar12 = *plVar2;
      plVar2 = (long *)plVar2[1];
      if (lVar12 == 0) {
        *plVar2 = 0;
      }
      else {
        *(long **)(lVar12 + 8) = plVar2;
        if (plVar2 != (long *)0x0) {
          *plVar2 = lVar12;
        }
      }
      graphite2::Segment::freeSlot((Slot *)this);
    }
    plVar2 = *(long **)(this + 0xa0);
    if (plVar2 == (long *)0x0) {
      lVar12 = *(long *)(this + 0x90);
    }
    else {
      lVar12 = *plVar2;
      plVar2 = (long *)plVar2[1];
      if (lVar12 == 0) {
        *plVar2 = 0;
      }
      else {
        *(long **)(lVar12 + 8) = plVar2;
        if (plVar2 != (long *)0x0) {
          *plVar2 = lVar12;
        }
      }
      graphite2::Segment::freeSlot((Slot *)this);
      lVar12 = *(long *)(this + 0x90);
    }
  }
  *(undefined8 *)(this + 0x98) = uVar4;
  *(undefined8 *)(this + 0xa0) = uVar5;
  if ((((byte)this[0xc4] & 1) != *(byte *)(lVar12 + 0x2f)) &&
     (*(char *)(lVar12 + 0x28) != *(char *)(lVar12 + 0x2d))) {
    graphite2::Segment::reverseSlots();
  }
LAB_00100695:
  free(local_48);
  return;
}



/* graphite2::Segment::delLineEnd(graphite2::Slot*) */

void __thiscall graphite2::Segment::delLineEnd(Segment *this,Slot *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)param_1;
  plVar2 = *(long **)(param_1 + 8);
  if (lVar1 != 0) {
    *(long **)(lVar1 + 8) = plVar2;
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar1;
    }
    graphite2::Segment::freeSlot((Slot *)this);
    return;
  }
  *plVar2 = 0;
  graphite2::Segment::freeSlot((Slot *)this);
  return;
}



/* graphite2::Segment::justify(graphite2::Slot*, graphite2::Font const*, float,
   graphite2::justFlags, graphite2::Slot*, graphite2::Slot*) [clone .cold] */

void graphite2::Segment::justify(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


