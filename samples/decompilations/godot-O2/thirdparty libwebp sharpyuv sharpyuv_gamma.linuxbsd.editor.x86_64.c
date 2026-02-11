
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SharpYuvInitGammaTables(void)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (kGammaTablesSOk == 0) {
    lVar1 = 0;
    dVar3 = _LC6;
    dVar4 = _LC7;
    dVar5 = _LC1;
    dVar6 = _LC0;
    do {
      dVar2 = (double)(int)lVar1 * dVar6;
      if (dVar2 <= dVar5) {
        dVar2 = dVar2 / __LC2;
      }
      else {
        dVar2 = pow((dVar2 + __LC4) * __LC5,_LC3);
        dVar3 = _LC6;
        dVar4 = _LC7;
        dVar5 = _LC1;
        dVar6 = _LC0;
      }
      (&kGammaToLinearTabS)[lVar1] = (int)(long)(dVar2 * dVar3 + dVar4);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x401);
    lVar1 = 0;
    _DAT_00102604 = DAT_00102600;
    dVar5 = _LC9;
    dVar6 = _LC8;
    do {
      dVar2 = (double)(int)lVar1 * dVar6;
      if (dVar2 <= dVar5) {
        dVar2 = dVar2 * __LC2;
      }
      else {
        dVar3 = pow(dVar2,_LC10);
        dVar2 = dVar3 * __LC11 - __LC4;
        dVar3 = _LC6;
        dVar4 = _LC7;
        dVar5 = _LC9;
        dVar6 = _LC8;
      }
      (&kLinearToGammaTabS)[lVar1] = (int)(long)(dVar2 * dVar3 + dVar4);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x201);
    kGammaTablesSOk = 1;
    _DAT_001015e4 = DAT_001015e0;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong SharpYuvGammaToLinear(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
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
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  
  fVar5 = _LC19;
  if (param_3 == 0xd) {
    param_1 = param_1 & 0xffff;
    if (0 < 10 - param_2) {
      return (ulong)(uint)(&kGammaToLinearTabS)[(int)(param_1 << ((byte)(10 - param_2) & 0x1f))];
    }
    bVar2 = (byte)(param_2 + -10);
    iVar3 = (int)param_1 >> (bVar2 & 0x1f);
    uVar1 = ((&kGammaToLinearTabS)[iVar3 + 1] - (&kGammaToLinearTabS)[iVar3]) *
            (param_1 - (iVar3 << (bVar2 & 0x1f)));
    if (param_2 + -10 != 0) {
      uVar1 = uVar1 + (1 << ((byte)param_2 - 0xb & 0x1f));
    }
    return (ulong)((uVar1 >> (bVar2 & 0x1f)) + (&kGammaToLinearTabS)[iVar3]);
  }
  auVar17._4_12_ = SUB1612((undefined1  [16])0x0,4);
  fVar4 = (float)(param_1 & 0xffff) / (float)((1 << ((byte)param_2 & 0x1f)) + -1);
  switch(param_3) {
  case 0:
  case 2:
  case 3:
  case 0xd:
    return 0;
  case 1:
  case 6:
  case 0xe:
  case 0xf:
    if (fVar4 < 0.0) {
      return 0;
    }
LAB_0010024b:
    if (_LC16 <= fVar4) {
      if (_LC22 <= fVar4) {
        return 0xffff;
      }
LAB_00100728:
      fVar5 = (fVar4 + _LC24) / __LC25;
LAB_001003f8:
      auVar9._0_8_ = pow((double)fVar5,_LC23);
      auVar9._8_8_ = extraout_XMM0_Qb_01;
      auVar17._4_12_ = auVar9._4_12_;
      fVar4 = (float)auVar9._0_8_;
      fVar5 = _LC19;
      break;
    }
    auVar17._0_4_ = (fVar4 / _LC17) * __LC18 + _LC19;
    goto LAB_00100604;
  case 4:
    dVar6 = 0.0;
    if ((0.0 <= fVar4) && (dVar6 = _LC13, fVar4 <= _LC22)) {
      dVar6 = (double)fVar4;
    }
    auVar7._0_8_ = pow(dVar6,_LC26);
    auVar7._8_8_ = extraout_XMM0_Qb;
    auVar17._4_12_ = auVar7._4_12_;
    fVar4 = (float)auVar7._0_8_;
    fVar5 = _LC19;
    break;
  case 5:
    dVar6 = 0.0;
    if ((0.0 <= fVar4) && (dVar6 = _LC13, fVar4 <= _LC22)) {
      dVar6 = (double)fVar4;
    }
    auVar8._0_8_ = pow(dVar6,_LC27);
    auVar8._8_8_ = extraout_XMM0_Qb_00;
    auVar17._4_12_ = auVar8._4_12_;
    fVar4 = (float)auVar8._0_8_;
    fVar5 = _LC19;
    break;
  case 7:
    if (fVar4 < 0.0) {
      return 0;
    }
    if (_LC28 <= fVar4) {
      if (_LC22 <= fVar4) {
        return 0xffff;
      }
      fVar5 = (fVar4 + __LC30) / __LC31;
      goto LAB_001003f8;
    }
    auVar17._0_4_ = fVar4 * __LC29 * __LC18 + _LC19;
    goto LAB_00100604;
  case 8:
    return (ulong)(param_1 & 0xffff);
  case 9:
    if (fVar4 <= 0.0) {
      return 0x148;
    }
    if (fVar4 < _LC22) {
      dVar6 = (double)((fVar4 - _LC22) + (fVar4 - _LC22));
    }
    else {
LAB_00100503:
      dVar6 = 0.0;
    }
    goto LAB_00100507;
  case 10:
    if (fVar4 <= 0.0) {
      return 0x68;
    }
    if (_LC22 <= fVar4) goto LAB_00100503;
    dVar6 = (double)((fVar4 - _LC22) * __LC33);
LAB_00100507:
    auVar12._0_8_ = pow(_LC32,dVar6);
    auVar12._8_8_ = extraout_XMM0_Qb_04;
    auVar17._4_12_ = auVar12._4_12_;
    fVar4 = (float)auVar12._0_8_;
    fVar5 = _LC19;
    break;
  case 0xb:
    if (_LC34 < fVar4) {
      if (fVar4 < _LC16) {
        fVar4 = fVar4 / _LC17;
        break;
      }
      goto LAB_00100728;
    }
    auVar15._0_8_ = pow((double)((_LC24 - fVar4) / __LC35),_LC23);
    auVar15._8_8_ = extraout_XMM0_Qb_07;
    auVar17._4_12_ = auVar15._4_12_;
    fVar4 = (float)auVar15._0_8_;
    fVar5 = _LC19;
    break;
  case 0xc:
    if (fVar4 < _LC36) {
      return 0;
    }
    if (0.0 <= fVar4) goto LAB_0010024b;
    auVar13._0_8_ = pow((double)((fVar4 - __LC37) / __LC38),_LC23);
    auVar13._8_8_ = extraout_XMM0_Qb_05;
    auVar17._4_12_ = auVar13._4_12_;
    fVar4 = (float)auVar13._0_8_ * _LC36;
    fVar5 = _LC19;
    break;
  case 0x10:
    if (fVar4 <= 0.0) {
      return 0;
    }
    dVar6 = pow((double)fVar4,_LC39);
    fVar5 = (float)dVar6 - __LC40;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar4 = _LC42 - (float)dVar6 * __LC41;
    if (fVar4 <= _LC15) {
      fVar4 = _LC15;
    }
    auVar14._0_8_ = pow((double)(fVar5 / fVar4),_LC43);
    auVar14._8_8_ = extraout_XMM0_Qb_06;
    auVar17._4_12_ = auVar14._4_12_;
    fVar4 = (float)auVar14._0_8_;
    fVar5 = _LC19;
    break;
  case 0x11:
    if (fVar4 <= 0.0) {
      dVar6 = 0.0;
    }
    else {
      dVar6 = (double)fVar4;
    }
    auVar11._0_8_ = pow(dVar6,_LC44);
    auVar11._8_8_ = extraout_XMM0_Qb_03;
    auVar17._4_12_ = auVar11._4_12_;
    fVar4 = (float)auVar11._0_8_ / __LC45;
    fVar5 = _LC19;
    break;
  case 0x12:
    if (fVar4 < 0.0) {
      return 0;
    }
    if (fVar4 <= _LC19) {
      fVar4 = fVar4 * fVar4 * __LC47;
    }
    else {
      fVar4 = expf((fVar4 - _LC48) / __LC49);
      fVar4 = (fVar4 + __LC50) / __LC51;
    }
    auVar10._0_8_ = pow((double)fVar4,_LC46);
    auVar10._8_8_ = extraout_XMM0_Qb_02;
    auVar17._4_12_ = auVar10._4_12_;
    fVar4 = (float)auVar10._0_8_;
    break;
  default:
    return 0;
  }
  fVar4 = fVar4 * __LC18;
  if (0.0 <= fVar4) {
    auVar17._0_4_ = fVar4 + fVar5;
LAB_00100604:
    fVar5 = auVar17._0_4_;
    if ((float)((uint)fVar5 & _LC52) < _LC20) {
      auVar20._0_4_ = ~_LC52 & (uint)fVar5;
      auVar20._4_4_ = 0;
      auVar20._8_4_ = auVar17._8_4_;
      auVar20._12_4_ = auVar17._12_4_;
      auVar18._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar18._0_4_ = (float)(int)fVar5 - (float)(-(uint)(fVar5 < (float)(int)fVar5) & (uint)_LC22);
      auVar17 = auVar18 | auVar20;
    }
  }
  else {
    auVar17._0_4_ = fVar4 - fVar5;
    if ((float)((uint)auVar17._0_4_ & _LC52) < _LC20) {
      auVar19._0_4_ = ~_LC52 & (uint)auVar17._0_4_;
      auVar19._4_4_ = 0;
      auVar19._8_4_ = SUB124(auVar17._4_12_,4);
      auVar19._12_4_ = SUB124(auVar17._4_12_,8);
      auVar16._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar16._0_4_ =
           (float)(int)auVar17._0_4_ +
           (float)(-(uint)((float)(int)auVar17._0_4_ < auVar17._0_4_) & (uint)_LC22);
      auVar17 = auVar16 | auVar19;
    }
  }
  return (long)auVar17._0_4_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint SharpYuvLinearToGamma(uint param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  fVar5 = _LC22;
  bVar2 = (byte)param_2;
  if (param_3 == 0xd) {
    if (param_2 + -0x10 < 0) {
      iVar3 = (int)(&kLinearToGammaTabS)[(uint)((int)param_1 >> 7)] >> (0x10 - bVar2 & 0x1f);
      iVar1 = (int)(&kLinearToGammaTabS)[((int)param_1 >> 7) + 1] >> (0x10 - bVar2 & 0x1f);
    }
    else {
      bVar2 = (byte)(param_2 + -0x10);
      iVar3 = (&kLinearToGammaTabS)[(uint)((int)param_1 >> 7)] << (bVar2 & 0x1f);
      iVar1 = (&kLinearToGammaTabS)[((int)param_1 >> 7) + 1] << (bVar2 & 0x1f);
    }
    return ((iVar1 - iVar3) * (param_1 & 0x7f) + 0x40 >> 7) + iVar3;
  }
  fVar4 = (float)param_1 / __LC18;
  switch(param_3) {
  default:
    goto switchD_001007fc_caseD_0;
  case 1:
  case 6:
  case 0xe:
  case 0xf:
switchD_001007fc_caseD_1:
    if (fVar4 < _LC53) {
LAB_00100b40:
      fVar5 = _LC17 * fVar4;
    }
    else {
      fVar5 = _LC22;
      if (fVar4 < _LC22) {
LAB_00100b06:
        dVar6 = pow((double)fVar4,_LC54);
        fVar5 = (float)dVar6 * __LC25 - _LC24;
      }
    }
    break;
  case 4:
    dVar6 = _LC13;
    if (fVar4 <= _LC22) {
      dVar6 = (double)fVar4;
    }
    dVar6 = pow(dVar6,_LC55);
    fVar5 = (float)dVar6;
    break;
  case 5:
    dVar6 = _LC13;
    if (fVar4 <= _LC22) {
      dVar6 = (double)fVar4;
    }
    dVar6 = pow(dVar6,_LC56);
    fVar5 = (float)dVar6;
    break;
  case 7:
    if (fVar4 < _LC57) {
      fVar5 = _LC58 * fVar4;
    }
    else if (fVar4 < _LC22) {
      dVar6 = pow((double)fVar4,_LC54);
      fVar5 = (float)dVar6 * __LC31 - __LC30;
    }
    break;
  case 8:
    return param_1;
  case 9:
    if (_LC59 <= fVar4) {
      dVar6 = _LC13;
      if (fVar4 < _LC22) {
        dVar6 = (double)fVar4;
      }
      dVar6 = log10(dVar6);
      fVar5 = fVar5 + (float)dVar6 * _LC19;
      break;
    }
    goto switchD_001007fc_caseD_0;
  case 10:
    if (_LC60 <= fVar4) {
      dVar6 = _LC13;
      if (fVar4 < _LC22) {
        dVar6 = (double)fVar4;
      }
      dVar6 = log10(dVar6);
      fVar5 = fVar5 + (float)dVar6 / __LC33;
      break;
    }
switchD_001007fc_caseD_0:
    fVar5 = (float)((1 << (bVar2 & 0x1f)) + -1) * 0.0;
    goto LAB_0010094c;
  case 0xb:
    if (_LC61 < fVar4) {
      if (_LC53 <= fVar4) goto LAB_00100b06;
      goto LAB_00100b40;
    }
    dVar6 = pow((double)(float)((uint)fVar4 ^ __LC62),_LC54);
    fVar5 = _LC24 + (float)dVar6 * __LC35;
    break;
  case 0xc:
    fVar5 = _LC36;
    if (_LC36 <= fVar4) goto switchD_001007fc_caseD_1;
    break;
  case 0x10:
    if (0.0 < fVar4) {
      dVar6 = pow((double)fVar4,_LC63);
      dVar6 = pow((double)((_LC42 * (float)dVar6 + __LC40) / ((float)dVar6 * __LC41 + _LC22)),_LC64)
      ;
      fVar5 = (float)dVar6;
      break;
    }
LAB_00100a25:
    fVar5 = (float)((1 << (bVar2 & 0x1f)) + -1) * 0.0;
    goto LAB_0010094c;
  case 0x11:
    if (fVar4 <= 0.0) {
      dVar6 = 0.0;
    }
    else {
      dVar6 = (double)(fVar4 * __LC45);
    }
    dVar6 = pow(dVar6,_LC65);
    fVar5 = (float)dVar6;
    break;
  case 0x12:
    dVar6 = pow((double)fVar4,_LC66);
    fVar5 = (float)dVar6;
    if (fVar5 < 0.0) goto LAB_00100a25;
    if (fVar5 <= _LC67) {
      fVar5 = SQRT(fVar5 * __LC68);
    }
    else {
      fVar5 = logf(fVar5 * __LC51 - __LC50);
      fVar5 = _LC48 + fVar5 * __LC49;
    }
  }
  fVar5 = (float)((1 << (bVar2 & 0x1f)) + -1) * fVar5;
  if (0.0 <= fVar5) {
LAB_0010094c:
    fVar5 = fVar5 + _LC19;
    if ((float)((uint)fVar5 & _LC52) < _LC20) {
      fVar5 = (float)((uint)((float)(int)fVar5 -
                            (float)(-(uint)(fVar5 < (float)(int)fVar5) & (uint)_LC22)) |
                     ~_LC52 & (uint)fVar5);
    }
  }
  else {
    fVar5 = fVar5 - _LC19;
    if ((float)((uint)fVar5 & _LC52) < _LC20) {
      fVar5 = (float)((uint)((float)(int)fVar5 +
                            (float)(-(uint)((float)(int)fVar5 < fVar5) & (uint)_LC22)) |
                     ~_LC52 & (uint)fVar5);
    }
  }
  return (int)fVar5;
}


