
/* hdr_rgb_unpack(unsigned char const*, vint4&, vint4&) */

void hdr_rgb_unpack(uchar *param_1,vint4 *param_2,vint4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar27 = (uint)param_1[2];
  bVar4 = param_1[3];
  bVar5 = param_1[1];
  uVar16 = (uint)param_1[5];
  bVar1 = param_1[4];
  uVar2 = ((int)uVar27 >> 7) * 2 | ((int)(uint)bVar4 >> 7) << 2 | (int)(uint)bVar5 >> 7;
  uVar21 = ((int)uVar16 >> 7) * 2 | (int)(uint)bVar1 >> 7;
  if (uVar21 == 3) {
    iVar3 = (bVar1 & 0x7f) << 9;
    iVar18 = (param_1[5] & 0x7f) << 9;
    uVar29 = CONCAT44((uint)param_1[2] << 8,(uint)*param_1 << 8);
    uVar30 = CONCAT44((uint)bVar4 << 8,(uint)bVar5 << 8);
    goto LAB_00100305;
  }
  uVar7 = (bVar5 & 0x40) << 2 | (uint)*param_1;
  uVar11 = (int)(uint)bVar4 >> 6 & 1;
  uVar22 = (int)uVar16 >> 5 & 1;
  uVar10 = (uint)bVar1;
  uVar6 = (int)uVar16 >> 6 & 1;
  uVar25 = (int)uVar27 >> 6 & 1;
  uVar23 = 1 << (sbyte)uVar2;
  uVar27 = uVar27 & 0x3f;
  uVar19 = bVar4 & 0x3f;
  uVar17 = bVar5 & 0x3f;
  uVar13 = uVar10 & 0x7f;
  uVar16 = uVar16 & 0x7f;
  uVar12 = (int)uVar10 >> 6 & 1;
  uVar10 = (int)uVar10 >> 5 & 1;
  if ((uVar23 & 0xa4) == 0) {
    if (uVar2 == 3) {
      uVar7 = uVar7 | uVar12 << 9;
      uVar17 = uVar17 | uVar6 << 6;
LAB_00100366:
      if ((uVar23 & 0x5b) != 0) {
        uVar27 = uVar27 | uVar25 << 6;
        uVar19 = uVar19 | uVar11 << 6;
        if ((uVar23 & 0x12) != 0) {
          uVar27 = uVar27 | uVar12 << 7;
          uVar19 = uVar19 | uVar6 << 7;
        }
      }
      goto LAB_0010039e;
    }
    if (((uVar23 & 0x50) != 0) && (uVar7 = uVar22 << 10 | uVar10 << 9 | uVar7, (uVar23 & 0xc0) != 0)
       ) goto LAB_00100157;
LAB_001001a8:
    if (uVar2 == 2) goto LAB_001001b1;
    if ((uVar23 & 0xe8) != 0) {
LAB_00100166:
      uVar17 = uVar17 | uVar6 << 6;
    }
    if (uVar2 != 5) goto LAB_00100366;
    uVar17 = uVar17 | uVar12 << 7;
    uVar13 = uVar13 | uVar10 << 5;
    uVar16 = uVar16 | uVar22 << 5;
  }
  else {
    uVar7 = uVar7 | uVar25 << 9;
    if (uVar2 == 3) {
      uVar7 = uVar7 | uVar12 << 9;
      uVar17 = uVar17 | uVar6 << 6;
      uVar27 = uVar27 | uVar25 << 6;
      uVar19 = uVar19 | uVar11 << 6;
LAB_0010039e:
      if ((uVar23 & 0xaf) == 0) goto LAB_001001e1;
    }
    else {
      if ((uVar23 & 0x50) == 0) {
        if ((uVar23 & 0xa0) == 0) goto LAB_001001a8;
LAB_00100146:
        uVar7 = uVar7 | uVar11 << 10;
      }
      else {
        uVar7 = uVar7 | uVar10 << 9 | uVar22 << 10;
        if ((uVar23 & 0xa0) != 0) goto LAB_00100146;
      }
      if ((uVar23 & 0xc0) == 0) goto LAB_001001a8;
LAB_00100157:
      uVar7 = uVar7 | uVar12 << 0xb;
      if (uVar2 != 2) goto LAB_00100166;
LAB_001001b1:
      uVar17 = uVar17 | uVar11 << 6;
    }
    uVar13 = uVar13 | uVar10 << 5;
    uVar16 = uVar16 | uVar22 << 5;
    if ((uVar23 & 5) != 0) {
      uVar13 = uVar13 | uVar12 << 6;
      uVar16 = uVar16 | uVar6 << 6;
    }
  }
LAB_001001e1:
  bVar4 = 0x20 - (char)*(undefined4 *)
                        (hdr_rgb_unpack(unsigned_char_const*,vint4&,vint4&)::dbits_tab +
                        (long)(int)uVar2 * 4);
  bVar5 = (byte)((int)uVar2 >> 1) ^ 3;
  iVar8 = uVar7 << bVar5;
  iVar18 = uVar17 << bVar5;
  iVar26 = iVar8 - (uVar27 << bVar5);
  iVar28 = iVar8 - (uVar19 << bVar5);
  iVar20 = iVar8 - iVar18;
  if (iVar20 < 0) {
    iVar20 = 0;
  }
  if (0xfff < iVar20) {
    iVar20 = 0xfff;
  }
  iVar24 = (iVar26 - iVar18) - (((int)(uVar13 << (bVar4 & 0x1f)) >> (bVar4 & 0x1f)) << bVar5);
  if (iVar24 < 0) {
    iVar24 = 0;
  }
  if (0xfff < iVar24) {
    iVar24 = 0xfff;
  }
  iVar3 = (iVar28 - iVar18) - (((int)(uVar16 << (bVar4 & 0x1f)) >> (bVar4 & 0x1f)) << bVar5);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (0xfff < iVar3) {
    iVar3 = 0xfff;
  }
  if (0xfff < iVar8) {
    iVar8 = 0xfff;
  }
  iVar14 = 0 << bVar5;
  if (-1 < iVar26) {
    iVar14 = iVar26;
  }
  if (0xfff < iVar14) {
    iVar14 = 0xfff;
  }
  iVar18 = 0;
  if (-1 < iVar28) {
    iVar18 = iVar28;
  }
  if (0xfff < iVar18) {
    iVar18 = 0xfff;
  }
  iVar26 = iVar24;
  iVar28 = iVar20;
  iVar9 = iVar14;
  iVar15 = iVar8;
  if ((uVar21 != 1) &&
     (iVar26 = iVar20, iVar28 = iVar24, iVar9 = iVar8, iVar15 = iVar14, uVar21 == 2)) {
    iVar26 = iVar3;
    iVar3 = iVar20;
    iVar9 = iVar18;
    iVar18 = iVar8;
  }
  iVar3 = iVar3 << 4;
  iVar18 = iVar18 << 4;
  uVar29 = CONCAT44(iVar28 << 4,iVar26 << 4);
  uVar30 = CONCAT44(iVar15 << 4,iVar9 << 4);
LAB_00100305:
  *(undefined8 *)param_2 = uVar29;
  *(ulong *)(param_2 + 8) = CONCAT44(0x7800,iVar3);
  *(undefined8 *)param_3 = uVar30;
  *(ulong *)(param_3 + 8) = CONCAT44(0x7800,iVar18);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rgba_delta_unpack(vint4, vint4, vint4&, vint4&) */

void rgba_delta_unpack(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_XMM0_Dc;
  uint uVar7;
  uint in_XMM0_Dd;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint in_XMM1_Dc;
  uint uVar14;
  uint uVar15;
  uint in_XMM1_Dd;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  uVar4 = _UNK_001013fc;
  uVar3 = _UNK_001013f8;
  uVar2 = _UNK_001013f4;
  uVar1 = __LC6;
  uVar17 = (uint)((ulong)param_2 >> 0x20);
  uVar9 = (uint)param_2 >> 1;
  uVar12 = uVar17 >> 1;
  uVar5 = (uint)param_1 >> 1 | __LC0 & (uint)param_2;
  uVar6 = (uint)((ulong)param_1 >> 0x21) | _UNK_001013a4 & uVar17;
  uVar7 = in_XMM0_Dc >> 1 | _UNK_001013a8 & in_XMM1_Dc;
  uVar8 = in_XMM0_Dd >> 1 | _UNK_001013ac & in_XMM1_Dd;
  uVar11 = __LC1 & uVar9;
  uVar10 = _UNK_001013b4 & uVar12;
  uVar13 = _UNK_001013b8 & in_XMM1_Dc >> 1;
  uVar16 = _UNK_001013bc & in_XMM1_Dd >> 1;
  uVar9 = -(uint)((uVar9 & __LC2) == 0) ^ 0xffffffff;
  uVar17 = -(uint)((uVar12 & _UNK_001013c4) == 0) ^ 0xffffffff;
  uVar12 = -(uint)((in_XMM1_Dc >> 1 & _UNK_001013c8) == 0) ^ 0xffffffff;
  uVar18 = -(uint)((in_XMM1_Dd >> 1 & _UNK_001013cc) == 0) ^ 0xffffffff;
  uVar11 = uVar9 & uVar11 + __LC3 | ~uVar9 & uVar11;
  uVar15 = uVar17 & uVar10 + _UNK_001013d4 | ~uVar17 & uVar10;
  uVar19 = uVar12 & uVar13 + _UNK_001013d8 | ~uVar12 & uVar13;
  uVar10 = uVar11 + uVar5;
  uVar13 = uVar15 + uVar6;
  uVar14 = uVar19 + uVar7;
  uVar16 = (uVar18 & uVar16 + _UNK_001013dc | ~uVar18 & uVar16) + uVar8;
  uVar9 = uVar10;
  uVar17 = uVar13;
  uVar12 = uVar14;
  uVar18 = uVar16;
  if ((int)(uVar11 + uVar15 + uVar19) < 0) {
    uVar9 = (int)(uVar7 + uVar5) >> 1 & __LC4 | ~__LC4 & uVar5;
    uVar17 = (int)(uVar7 + uVar6) >> 1 & _UNK_001013e4 | ~_UNK_001013e4 & uVar6;
    uVar12 = (int)(uVar7 * 2) >> 1 & _UNK_001013e8 | ~_UNK_001013e8 & uVar7;
    uVar18 = (int)(uVar7 + uVar8) >> 1 & _UNK_001013ec | ~_UNK_001013ec & uVar8;
    uVar5 = (int)(uVar14 + uVar10) >> 1 & __LC4 | ~__LC4 & uVar10;
    uVar6 = (int)(uVar14 + uVar13) >> 1 & _UNK_001013e4 | ~_UNK_001013e4 & uVar13;
    uVar7 = (int)(uVar14 * 2) >> 1 & _UNK_001013e8 | ~_UNK_001013e8 & uVar14;
    uVar8 = (int)(uVar14 + uVar16) >> 1 & _UNK_001013ec | ~_UNK_001013ec & uVar16;
  }
  uVar5 = uVar5 & -(uint)(0 < (int)uVar5);
  uVar6 = uVar6 & -(uint)(0 < (int)uVar6);
  uVar7 = uVar7 & -(uint)(0 < (int)uVar7);
  uVar8 = uVar8 & -(uint)(0 < (int)uVar8);
  uVar9 = uVar9 & -(uint)(0 < (int)uVar9);
  uVar17 = uVar17 & -(uint)(0 < (int)uVar17);
  uVar12 = uVar12 & -(uint)(0 < (int)uVar12);
  uVar18 = uVar18 & -(uint)(0 < (int)uVar18);
  uVar11 = -(uint)((int)uVar9 < (int)__LC6);
  uVar10 = -(uint)((int)uVar17 < (int)_UNK_001013f4);
  uVar15 = -(uint)((int)uVar12 < (int)_UNK_001013f8);
  uVar13 = -(uint)((int)uVar18 < (int)_UNK_001013fc);
  uVar19 = -(uint)((int)uVar5 < (int)__LC6);
  uVar14 = -(uint)((int)uVar6 < (int)_UNK_001013f4);
  uVar16 = -(uint)((int)uVar7 < (int)_UNK_001013f8);
  uVar20 = -(uint)((int)uVar8 < (int)_UNK_001013fc);
  uVar21 = ~uVar14 & _UNK_001013f4;
  uVar22 = ~uVar16 & _UNK_001013f8;
  uVar23 = ~uVar20 & _UNK_001013fc;
  *param_3 = uVar5 & uVar19 | ~uVar19 & __LC6;
  param_3[1] = uVar6 & uVar14 | uVar21;
  param_3[2] = uVar7 & uVar16 | uVar22;
  param_3[3] = uVar8 & uVar20 | uVar23;
  *param_4 = uVar9 & uVar11 | ~uVar11 & uVar1;
  param_4[1] = uVar17 & uVar10 | ~uVar10 & uVar2;
  param_4[2] = uVar12 & uVar15 | ~uVar15 & uVar3;
  param_4[3] = uVar18 & uVar13 | ~uVar13 & uVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rgba_unpack(vint4, vint4, vint4&, vint4&) */

void rgba_unpack(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  uint uVar4;
  uint uVar5;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  uVar3 = (uint)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  if ((int)(uVar4 + uVar5 + in_XMM1_Dc) < (int)(uVar2 + uVar3 + in_XMM0_Dc)) {
    iVar1 = in_XMM0_Dc * 2;
    iVar6 = in_XMM0_Dc + uVar2;
    iVar7 = in_XMM0_Dc + uVar3;
    iVar8 = in_XMM0_Dc + in_XMM0_Dd;
    uVar9 = ~__LC4 & uVar2;
    uVar10 = ~_UNK_001013e4 & uVar3;
    uVar11 = ~_UNK_001013e8 & in_XMM0_Dc;
    uVar12 = ~_UNK_001013ec & in_XMM0_Dd;
    uVar2 = (int)(in_XMM1_Dc + uVar4) >> 1 & __LC4 | ~__LC4 & uVar4;
    uVar3 = (int)(in_XMM1_Dc + uVar5) >> 1 & _UNK_001013e4 | ~_UNK_001013e4 & uVar5;
    in_XMM0_Dc = (int)(in_XMM1_Dc * 2) >> 1 & _UNK_001013e8 | ~_UNK_001013e8 & in_XMM1_Dc;
    in_XMM0_Dd = (int)(in_XMM1_Dc + in_XMM1_Dd) >> 1 & _UNK_001013ec | ~_UNK_001013ec & in_XMM1_Dd;
    uVar4 = iVar6 >> 1 & __LC4 | uVar9;
    uVar5 = iVar7 >> 1 & _UNK_001013e4 | uVar10;
    in_XMM1_Dc = iVar1 >> 1 & _UNK_001013e8 | uVar11;
    in_XMM1_Dd = iVar8 >> 1 & _UNK_001013ec | uVar12;
  }
  *param_3 = uVar2;
  param_3[1] = uVar3;
  param_3[2] = in_XMM0_Dc;
  param_3[3] = in_XMM0_Dd;
  *param_4 = uVar4;
  param_4[1] = uVar5;
  param_4[2] = in_XMM1_Dc;
  param_4[3] = in_XMM1_Dd;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unpack_color_endpoints(astcenc_profile, int, unsigned char const*, bool&, bool&, vint4&, vint4&)
    */

void unpack_color_endpoints
               (int param_1,undefined4 param_2,byte *param_3,byte *param_4,byte *param_5,
               vint4 *param_6,vint4 *param_7)

{
  byte bVar1;
  byte bVar2;
  sbyte sVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  vint4 *pvVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined8 local_78;
  ulong uStack_70;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined1 auVar34 [12];
  
  *param_4 = 0;
  *param_5 = 0;
  switch(param_2) {
  case 0:
    bVar11 = *param_3;
    bVar1 = param_3[1];
    *(ulong *)param_6 = (ulong)CONCAT14(bVar11,(uint)bVar11);
    *(ulong *)(param_6 + 8) = CONCAT44(0xff,(uint)bVar11);
    *(ulong *)param_7 = (ulong)CONCAT14(bVar1,(uint)bVar1);
    *(ulong *)(param_7 + 8) = CONCAT44(0xff,(uint)bVar1);
    break;
  case 1:
    uVar18 = (int)(uint)*param_3 >> 2 | param_3[1] & 0xc0;
    uVar8 = (param_3[1] & 0x3f) + uVar18;
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    *(ulong *)param_6 = CONCAT44(uVar18,uVar18);
    *(ulong *)(param_6 + 8) = CONCAT44(0xff,uVar18);
    *(ulong *)param_7 = CONCAT44(uVar8,uVar8);
    *(ulong *)(param_7 + 8) = CONCAT44(0xff,uVar8);
    break;
  case 2:
    *param_4 = 1;
    bVar11 = *param_3;
    bVar1 = param_3[1];
    if (bVar1 < bVar11) {
      iVar16 = (uint)bVar1 * 0x10 + 8;
      uVar18 = (uint)bVar11 * 0x10 - 8;
    }
    else {
      iVar16 = (uint)bVar11 << 4;
      uVar18 = (uint)bVar1 << 4;
    }
    iVar16 = iVar16 << 4;
    *(ulong *)param_6 = CONCAT44(iVar16,iVar16);
    *(ulong *)(param_6 + 8) = CONCAT44(0x7800,iVar16);
    goto LAB_00100b1f;
  case 3:
    *param_4 = 1;
    bVar11 = *param_3;
    bVar1 = param_3[1];
    if ((char)bVar11 < '\0') {
      uVar8 = (bVar1 & 0xe0) << 4 | (bVar11 & 0x7f) << 2;
      uVar18 = (bVar1 & 0x1f) << 2;
    }
    else {
      uVar18 = (uint)bVar1 * 2 & 0x1e;
      uVar8 = (bVar1 & 0xf0) << 4 | (uint)bVar11 * 2;
    }
    uVar18 = uVar8 + uVar18;
    iVar16 = uVar8 << 4;
    if (0xfff < uVar18) {
      uVar18 = 0xfff;
    }
    *(ulong *)param_6 = CONCAT44(iVar16,iVar16);
    *(ulong *)(param_6 + 8) = CONCAT44(0x7800,iVar16);
LAB_00100b1f:
    iVar16 = uVar18 << 4;
    *(ulong *)param_7 = CONCAT44(iVar16,iVar16);
    *(ulong *)(param_7 + 8) = CONCAT44(0x7800,iVar16);
    goto LAB_001006c1;
  case 4:
    uVar8 = CONCAT31(0,*param_3);
    bVar11 = param_3[1];
    auVar33[4] = *param_3;
    auVar33._0_4_ = uVar8;
    auVar33._5_3_ = 0;
    uVar18 = CONCAT31(0,bVar11);
    auVar33[0xc] = param_3[2];
    auVar33._8_4_ = uVar8;
    bVar1 = param_3[3];
    auVar33._13_3_ = 0;
    *(undefined1 (*) [16])param_6 = auVar33;
    auVar31[4] = bVar11;
    auVar31._0_4_ = uVar18;
    auVar31._5_3_ = 0;
    auVar31[0xc] = bVar1;
    auVar31._8_4_ = uVar18;
    auVar31._13_3_ = 0;
    *(undefined1 (*) [16])param_7 = auVar31;
    break;
  case 5:
    bVar11 = param_3[1];
    bVar1 = param_3[3];
    uVar8 = bVar11 & 0x7f;
    if ((bVar11 & 0x40) != 0) {
      uVar8 = bVar11 | 0xffffff80;
    }
    uVar18 = bVar1 & 0x7f;
    if ((bVar1 & 0x40) != 0) {
      uVar18 = bVar1 | 0xffffff80;
    }
    iVar7 = (int)((uint)bVar11 + (uint)bVar11 & 0x100 | (uint)*param_3) >> 1;
    iVar14 = (int)((uint)bVar1 * 2 & 0x100 | (uint)param_3[2]) >> 1;
    iVar16 = ((int)uVar8 >> 1) + iVar7;
    if (iVar16 < 0) {
      iVar16 = 0;
    }
    *(ulong *)param_6 = CONCAT44(iVar7,iVar7);
    *(ulong *)(param_6 + 8) = CONCAT44(iVar14,iVar7);
    if (0xff < iVar16) {
      iVar16 = 0xff;
    }
    iVar14 = iVar14 + ((int)uVar18 >> 1);
    if (iVar14 < 0) {
      iVar14 = 0;
    }
    if (0xff < iVar14) {
      iVar14 = 0xff;
    }
    *(ulong *)param_7 = CONCAT44(iVar16,iVar16);
    *(ulong *)(param_7 + 8) = CONCAT44(iVar14,iVar16);
    break;
  case 6:
    bVar11 = param_3[2];
    uVar32 = (ulong)CONCAT14(param_3[1],(uint)*param_3);
    bVar1 = param_3[3];
    uStack_70 = (ulong)bVar11;
    local_78._4_4_ = (uint)param_3[1];
    *(ulong *)param_7 = uVar32;
    *(ulong *)(param_7 + 8) = uStack_70 | 0xff00000000;
    local_78 = CONCAT44((int)(local_78._4_4_ * bVar1) >> 8,
                        (int)((uVar32 & 0xffffffff) * (ulong)(uint)bVar1) >> 8);
    uStack_70 = (ulong)(uint)((int)((uint)bVar11 * (uint)bVar1) >> 8);
    *(undefined8 *)param_6 = local_78;
    *(ulong *)(param_6 + 8) = uStack_70 | 0xff00000000;
    break;
  case 7:
    *param_4 = 1;
    uVar21 = (uint)param_3[1];
    uVar20 = (uint)param_3[2];
    bVar11 = param_3[3];
    uVar8 = ((int)uVar21 >> 7) << 2 | ((int)uVar20 >> 7) << 3;
    local_44 = (int)(uint)*param_3 >> 6;
    uVar18 = local_44 | uVar8;
    if (uVar8 == 0xc) {
      if (uVar18 == 0xf) {
        iVar16 = 0x20;
        uVar8 = 0x20;
        uVar19 = 5;
        local_3c = 0x20;
        local_40 = 0x20;
        local_44 = 0;
      }
      else {
        iVar16 = 0x10;
        uVar8 = 0;
        local_3c = 0x10;
        uVar19 = 4;
        local_40 = 0x10;
      }
    }
    else {
      uVar8 = 1 << (sbyte)local_44;
      local_40 = uVar8 & 0x3a;
      local_3c = uVar8 & 0x3d;
      iVar16 = 0;
      uVar19 = local_44;
      local_44 = (int)uVar18 >> 2;
    }
    uVar18 = *param_3 & 0x3f;
    uVar9 = param_3[1] & 0x1f;
    uVar17 = bVar11 & 0x1f;
    uVar24 = (int)uVar21 >> 5 & 1;
    uVar28 = param_3[2] & 0x1f;
    uVar27 = (int)uVar21 >> 6 & 1;
    uVar21 = (int)uVar20 >> 5 & 1;
    uVar25 = (int)uVar20 >> 6 & 1;
    uVar22 = (int)(uint)bVar11 >> 6 & 1;
    uVar20 = (uint)bVar11;
    uVar23 = (int)uVar20 >> 5 & 1;
    if (iVar16 != 0) {
      uVar9 = uVar9 | uVar27 << 6;
      uVar28 = uVar28 | uVar25 << 6;
    }
    if (local_40 != 0) {
      uVar9 = uVar9 | uVar24 << 5;
      uVar28 = uVar28 | uVar21 << 5;
    }
    if (local_3c != 0) {
      uVar17 = uVar17 | uVar23 << 5;
      if ((uVar8 & 0x2d) != 0) {
        uVar17 = uVar22 << 6 | uVar17;
      }
    }
    if (uVar19 == 2) {
      uVar17 = uVar17 | uVar20 & 0xffffff80;
      uVar18 = uVar25 << 7 | uVar21 << 6 | uVar18;
LAB_00101252:
      uVar18 = uVar24 << 8 | uVar18;
      if ((uVar8 & 10) != 0) {
        uVar18 = uVar27 << 8 | uVar18;
      }
      uVar18 = uVar27 << 9 | uVar18;
LAB_00100e06:
      if (uVar19 == 1) {
        iVar16 = uVar9 * 2;
        iVar7 = uVar28 * 2;
        iVar14 = uVar17 * 2;
        iVar12 = (uVar18 | uVar23 << 9 | uVar22 << 10) * 2;
        goto LAB_00100e2a;
      }
      bVar11 = (byte)*(undefined4 *)
                      (hdr_rgbo_unpack(unsigned_char_const*,vint4&,vint4&)::shamts +
                      (long)(int)uVar19 * 4);
      iVar7 = uVar28 << (bVar11 & 0x1f);
      iVar16 = uVar9 << (bVar11 & 0x1f);
      iVar14 = uVar17 << (bVar11 & 0x1f);
      if (uVar19 == 0) {
        iVar12 = (uVar21 << 10 | uVar18) * 2;
        goto LAB_00100e2a;
      }
      iVar12 = uVar18 << (bVar11 & 0x1f);
      if (uVar19 != 5) goto LAB_00100e2a;
    }
    else {
      uVar18 = ((int)uVar20 >> 7) << 6 | uVar18;
      if (uVar19 != 4) {
        if ((uVar8 & 0xf) != 0) {
          uVar18 = uVar18 | uVar25 << 7;
          if ((uVar8 & 5) != 0) goto LAB_00101252;
          if ((uVar8 & 10) != 0) {
            uVar18 = uVar18 | uVar27 << 8;
          }
        }
        goto LAB_00100e06;
      }
      iVar7 = uVar28 << 4;
      iVar16 = uVar9 << 4;
      iVar14 = uVar17 << 4;
      iVar12 = (uVar18 | uVar22 << 7) << 4;
LAB_00100e2a:
      iVar16 = iVar12 - iVar16;
      iVar7 = iVar12 - iVar7;
    }
    iVar10 = iVar12;
    if ((local_44 != 1) && (iVar10 = iVar16, iVar16 = iVar12, local_44 == 2)) {
      iVar16 = iVar7;
      iVar7 = iVar12;
    }
    iVar12 = iVar16 - iVar14;
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    iVar13 = iVar10 - iVar14;
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    iVar14 = iVar7 - iVar14;
    if (iVar14 < 0) {
      iVar14 = 0;
    }
    iVar15 = 0;
    if (iVar16 < 0) {
      iVar16 = iVar15;
    }
    *(ulong *)param_6 = CONCAT44(iVar13 << 4,iVar12 << 4);
    *(ulong *)(param_6 + 8) = CONCAT44(0x7800,iVar14 << 4);
    if (iVar10 < 0) {
      iVar10 = iVar15;
    }
    if (iVar7 < 0) {
      iVar7 = iVar15;
    }
    *(ulong *)param_7 = CONCAT44(iVar10 << 4,iVar16 << 4);
    *(ulong *)(param_7 + 8) = CONCAT44(0x7800,iVar7 << 4);
    goto LAB_001006c1;
  case 8:
    rgba_unpack((ulong)CONCAT14(param_3[2],(uint)*param_3),
                (ulong)CONCAT14(param_3[3],(uint)param_3[1]),param_3[5],param_3[4],param_6,param_7);
    *(undefined4 *)(param_6 + 0xc) = 0xff;
    *(undefined4 *)(param_7 + 0xc) = 0xff;
    break;
  case 9:
    pvVar26 = param_6;
    rgba_delta_unpack((ulong)CONCAT14(param_3[2],(uint)*param_3),
                      (ulong)CONCAT14(param_3[3],(uint)param_3[1]),param_3[5],param_3[4],param_3[3],
                      param_3[2],param_6,param_7);
    *(undefined4 *)(pvVar26 + 0xc) = 0xff;
    *(undefined4 *)(param_7 + 0xc) = 0xff;
    break;
  case 10:
    bVar11 = param_3[4];
    bVar1 = param_3[2];
    bVar2 = param_3[5];
    uVar32 = (ulong)CONCAT14(param_3[1],(uint)*param_3);
    uVar8 = (uint)param_3[3];
    local_78._4_4_ = (uint)param_3[1];
    *(ulong *)param_7 = uVar32;
    *(ulong *)(param_7 + 8) = (ulong)CONCAT14(bVar2,(uint)bVar1);
    *(ulong *)param_6 =
         CONCAT44((int)(local_78._4_4_ * uVar8) >> 8,
                  (int)((uVar32 & 0xffffffff) * (ulong)uVar8) >> 8);
    *(ulong *)(param_6 + 8) = (ulong)CONCAT14(bVar11,(int)(bVar1 * uVar8) >> 8);
    break;
  case 0xb:
    *param_4 = 1;
    hdr_rgb_unpack(param_3,param_6,param_7);
LAB_001006c1:
    uStack_70 = SUB168(*(undefined1 (*) [16])param_6,8);
    if (param_1 != 3) {
      *(undefined8 *)param_6 = *(undefined8 *)param_6;
      *(ulong *)(param_6 + 8) = uStack_70 & 0xffffffff | 0xff00000000;
      *(undefined4 *)(param_7 + 0xc) = 0xff;
      *param_5 = 0;
      break;
    }
    *(undefined8 *)param_6 = *(undefined8 *)param_6;
    *(ulong *)(param_6 + 8) = uStack_70 & 0xffffffff | 0x780000000000;
    *(undefined4 *)(param_7 + 0xc) = 0x7800;
    iVar16 = -1;
    *param_5 = 1;
    uVar8 = (uint)*param_4;
    goto LAB_00100837;
  case 0xc:
    rgba_unpack(param_6,param_7);
    break;
  case 0xd:
    rgba_delta_unpack(param_6,param_7);
    break;
  case 0xe:
    *param_4 = 1;
    hdr_rgb_unpack(param_3,param_6,param_7);
    bVar11 = param_3[7];
    *(uint *)(param_6 + 0xc) = (uint)param_3[6];
    *(uint *)(param_7 + 0xc) = (uint)bVar11;
    if (param_1 == 1) goto LAB_001008db;
    uVar8 = 1;
    if (param_1 == 0) goto LAB_00100723;
    goto LAB_00100830;
  case 0xf:
    *param_4 = 1;
    *param_5 = 1;
    hdr_rgb_unpack(param_3,param_6,param_7);
    uVar8 = param_3[6] & 0x7f;
    uVar20 = param_3[7] & 0x7f;
    uVar18 = param_3[7] >> 6 & 2 | (int)(uint)param_3[6] >> 7;
    if (uVar18 == 3) {
      iVar7 = uVar8 << 5;
      iVar16 = uVar20 << 5;
    }
    else {
      sVar3 = (sbyte)uVar18;
      iVar7 = (uVar8 | uVar20 << sVar3 + 1 & 0x780) << (4U - sVar3 & 0x1f);
      iVar16 = ((0x3f >> sVar3 & uVar20 ^ 0x20 >> sVar3) - (0x20 >> sVar3) << (4U - sVar3 & 0x1f)) +
               iVar7;
      if (0xfff < iVar16) {
        iVar16 = 0xfff;
      }
      if (iVar16 < 0) {
        iVar16 = 0;
      }
    }
    *(int *)(param_6 + 0xc) = iVar7 << 4;
    *(int *)(param_7 + 0xc) = iVar16 << 4;
  }
  bVar11 = *param_4;
  uVar8 = (uint)bVar11;
  if (param_1 == 1) {
    if ((bVar11 != 0) || (*param_5 != 0)) {
LAB_001008db:
      uVar6 = _UNK_00101408;
      uVar5 = __LC7;
      *(undefined8 *)param_6 = __LC7;
      *(undefined8 *)(param_6 + 8) = uVar6;
      *(undefined8 *)param_7 = uVar5;
      *(undefined8 *)(param_7 + 8) = uVar6;
      *param_4 = 0;
      *param_5 = 0;
    }
    auVar30._4_4_ = _UNK_00101414;
    auVar30._0_4_ = __LC9;
    auVar30._8_4_ = _UNK_00101418;
    auVar30._12_4_ = _UNK_0010141c;
    auVar37._4_4_ = _UNK_00101414;
    auVar37._0_4_ = __LC9;
    auVar37._8_4_ = _UNK_00101418;
    auVar37._12_4_ = _UNK_0010141c;
    auVar36._0_8_ = (ulong)__LC9 * (ulong)*(uint *)param_6;
    auVar36._8_8_ = (auVar30._8_8_ & 0xffffffff) * (ulong)*(uint *)(param_6 + 8);
    auVar34 = auVar36._0_12_;
  }
  else {
    if (param_1 == 0) {
      if ((bVar11 != 0) || (*param_5 != 0)) {
LAB_00100723:
        uVar6 = _UNK_00101408;
        uVar5 = __LC7;
        *(undefined8 *)param_6 = __LC7;
        *(undefined8 *)(param_6 + 8) = uVar6;
        *(undefined8 *)param_7 = uVar5;
        *(undefined8 *)(param_7 + 8) = uVar6;
        *param_4 = 0;
        *param_5 = 0;
      }
      uVar24 = _UNK_0010143c;
      uVar23 = _UNK_00101438;
      uVar22 = _UNK_00101434;
      uVar9 = __LC11;
      uVar17 = _UNK_0010142c;
      uVar19 = _UNK_00101428;
      uVar21 = _UNK_00101424;
      uVar20 = __LC10;
      iVar7 = _UNK_0010141c;
      uVar18 = _UNK_00101418;
      iVar16 = _UNK_00101414;
      uVar8 = __LC9;
      auVar31 = *(undefined1 (*) [16])param_6;
      uVar25 = auVar31._4_4_ << 8 & _UNK_00101424;
      uVar27 = auVar31._8_4_ << 8 & _UNK_00101428;
      uVar28 = auVar31._12_4_ << 8 & _UNK_0010142c;
      uVar38 = ~_UNK_00101424 & auVar31._4_4_ * _UNK_00101414 | _UNK_00101434;
      uVar39 = ~_UNK_00101428 & (uint)((auVar31._8_8_ & 0xffffffff) * (ulong)_UNK_00101418) |
               _UNK_00101438;
      uVar40 = ~_UNK_0010142c & auVar31._12_4_ * _UNK_0010141c | _UNK_0010143c;
      *(uint *)param_6 = auVar31._0_4_ << 8 & __LC10 | ~__LC10 & auVar31._0_4_ * __LC9 | __LC11;
      *(uint *)(param_6 + 4) = uVar25 | uVar38;
      *(uint *)(param_6 + 8) = uVar27 | uVar39;
      *(uint *)(param_6 + 0xc) = uVar28 | uVar40;
      uVar8 = *(int *)param_7 << 8 & uVar20 | ~uVar20 & uVar8 * *(int *)param_7 | uVar9;
      uVar20 = *(int *)(param_7 + 4) << 8 & uVar21 |
               ~uVar21 & *(int *)(param_7 + 4) * iVar16 | uVar22;
      uVar18 = *(int *)(param_7 + 8) << 8 & uVar19 |
               ~uVar19 & uVar18 * *(int *)(param_7 + 8) | uVar23;
      uVar21 = *(int *)(param_7 + 0xc) << 8 & uVar17 |
               ~uVar17 & *(int *)(param_7 + 0xc) * iVar7 | uVar24;
      goto LAB_001008b9;
    }
LAB_00100830:
    iVar16 = -(uint)*param_5;
LAB_00100837:
    iVar7 = -uVar8;
    auVar29._4_4_ = iVar7;
    auVar29._0_4_ = iVar7;
    auVar29._12_4_ = iVar16;
    auVar29._8_4_ = iVar7;
    auVar4._4_4_ = _UNK_00101414;
    auVar4._0_4_ = __LC9;
    auVar4._8_4_ = _UNK_00101418;
    auVar4._12_4_ = _UNK_0010141c;
    auVar30 = auVar29 & __LC12 | ~auVar29 & auVar4;
    auVar35._0_8_ = (ulong)auVar30._0_4_ * (ulong)*(uint *)param_6;
    auVar35._8_8_ = (auVar30._8_8_ & 0xffffffff) * (ulong)*(uint *)(param_6 + 8);
    auVar34 = auVar35._0_12_;
    auVar37 = auVar30;
  }
  *(ulong *)param_6 = CONCAT44(*(int *)(param_6 + 4) * auVar37._4_4_,auVar34._0_4_);
  *(int *)(param_6 + 0x10) = auVar34._8_4_;
  *(int *)(param_6 + 0x14) = *(int *)(param_6 + 0xc) * auVar37._12_4_;
  uVar8 = auVar30._0_4_ * *(int *)param_7;
  uVar18 = (uint)((auVar30._8_8_ & 0xffffffff) * (ulong)*(uint *)(param_7 + 8));
  uVar20 = *(int *)(param_7 + 4) * auVar37._4_4_;
  uVar21 = *(int *)(param_7 + 0xc) * auVar37._12_4_;
LAB_001008b9:
  *(uint *)param_7 = uVar8;
  *(uint *)(param_7 + 4) = uVar20;
  *(uint *)(param_7 + 8) = uVar18;
  *(uint *)(param_7 + 0xc) = uVar21;
  return;
}


