
byte xstrtoul(byte *param_1,undefined8 *param_2,undefined4 param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar41;
  ushort **ppuVar42;
  byte *pbVar43;
  int *piVar44;
  ulong uVar45;
  char *pcVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  byte bVar50;
  long in_FS_OFFSET;
  bool bVar51;
  undefined8 local_48;
  long local_40;
  
  bVar50 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = &local_48;
  }
  ppuVar42 = __ctype_b_loc();
  bVar1 = *(byte *)((long)*ppuVar42 + (ulong)bVar50 * 2 + 1);
  pbVar43 = param_1;
  while ((bVar1 & 0x20) != 0) {
    bVar50 = pbVar43[1];
    pbVar43 = pbVar43 + 1;
    bVar1 = *(byte *)((long)*ppuVar42 + (ulong)bVar50 * 2 + 1);
  }
  if (bVar50 == 0x2d) {
    *param_2 = param_1;
LAB_001001a3:
    bVar50 = 4;
    goto LAB_001000c1;
  }
  piVar44 = __errno_location();
  *piVar44 = 0;
  uVar45 = __isoc23_strtoul(param_1,param_2,param_3);
  pbVar43 = (byte *)*param_2;
  if (pbVar43 != param_1) {
    if (*piVar44 == 0) {
      bVar50 = 0;
    }
    else {
      bVar50 = 1;
      if (*piVar44 != 0x22) goto LAB_001001a3;
    }
    if ((param_5 != (char *)0x0) && (bVar1 = *pbVar43, bVar1 != 0)) {
      pcVar46 = strchr(param_5,(int)(char)bVar1);
      uVar49 = uVar45;
      if (pcVar46 != (char *)0x0) goto LAB_0010013a;
switchD_001001d5_caseD_1:
      *param_4 = uVar49;
      bVar50 = bVar50 | 2;
      goto LAB_001000c1;
    }
    goto LAB_001000be;
  }
  if (((param_5 == (char *)0x0) || (bVar1 = *param_1, bVar1 == 0)) ||
     (pcVar46 = strchr(param_5,(int)(char)bVar1), pcVar46 == (char *)0x0)) goto LAB_001001a3;
  bVar50 = 0;
  uVar49 = 1;
LAB_0010013a:
  uVar41 = bVar1 - 0x45;
  if ((((byte)uVar41 < 0x30) && ((0x81440030b945U >> ((ulong)uVar41 & 0x3f) & 1) != 0)) &&
     (pcVar46 = strchr(param_5,0x30), pcVar46 != (char *)0x0)) {
    bVar2 = pbVar43[1];
    if (bVar2 == 0x44) {
      lVar48 = 2;
      uVar47 = 1000;
    }
    else if (bVar2 == 0x69) {
      uVar47 = 0x400;
      lVar48 = (ulong)(pbVar43[2] == 0x42) * 2 + 1;
    }
    else {
      uVar47 = 0x400;
      lVar48 = (ulong)(bVar2 == 0x42) + 1;
      if (bVar2 == 0x42) {
        uVar47 = 1000;
      }
    }
  }
  else {
    lVar48 = 1;
    uVar47 = 0x400;
  }
  uVar45 = uVar49;
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    uVar45 = uVar49 << 10;
    if (uVar49 >> 0x36 != 0) {
      bVar50 = 1;
      uVar45 = 0xffffffffffffffff;
    }
    break;
  default:
    goto switchD_001001d5_caseD_1;
  case 3:
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar49;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar47;
    uVar45 = SUB168(auVar10 * auVar29,0);
    if (SUB168(auVar10 * auVar29,8) != 0) goto LAB_00100448;
    bVar51 = false;
    goto LAB_001002f7;
  case 5:
  case 0x25:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar49;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar47;
    uVar45 = SUB168(auVar4 * auVar23,0);
    if (SUB168(auVar4 * auVar23,8) == 0) {
      bVar51 = false;
    }
    else {
      uVar45 = 0xffffffffffffffff;
      bVar51 = true;
    }
    goto LAB_00100260;
  case 9:
  case 0x29:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar47;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar49;
    uVar45 = SUB168(auVar3 * auVar22,0);
    if (SUB168(auVar3 * auVar22,8) != 0) {
      bVar50 = 1;
      uVar45 = 0xffffffffffffffff;
    }
    break;
  case 0xb:
  case 0x2b:
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar49;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar47;
    uVar45 = SUB168(auVar7 * auVar26,0);
    if (SUB168(auVar7 * auVar26,8) == 0) {
      bVar51 = false;
    }
    else {
      uVar45 = 0xffffffffffffffff;
      bVar51 = true;
    }
    goto LAB_0010026f;
  case 0xe:
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar47;
    uVar45 = SUB168(auVar13 * auVar32,0);
    if (SUB168(auVar13 * auVar32,8) != 0) goto LAB_00100439;
    bVar51 = false;
    goto LAB_00100306;
  case 0xf:
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar49;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar47;
    uVar45 = SUB168(auVar18 * auVar37,0);
    bVar51 = SUB168(auVar18 * auVar37,8) != 0;
    if (bVar51) {
      uVar45 = 0xffffffffffffffff;
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar45;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar47;
    uVar45 = SUB168(auVar19 * auVar38,0);
    if (SUB168(auVar19 * auVar38,8) != 0) {
LAB_00100466:
      bVar51 = true;
      uVar45 = 0xffffffffffffffff;
    }
    goto LAB_0010035f;
  case 0x10:
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar49;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar47;
    uVar45 = SUB168(auVar14 * auVar33,0);
    if (SUB168(auVar14 * auVar33,8) != 0) goto LAB_00100466;
    bVar51 = false;
LAB_0010035f:
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar45;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar47;
    uVar45 = SUB168(auVar15 * auVar34,0);
    if (SUB168(auVar15 * auVar34,8) != 0) {
LAB_00100457:
      bVar51 = true;
      uVar45 = 0xffffffffffffffff;
    }
LAB_0010036e:
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar45;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar47;
    uVar45 = SUB168(auVar16 * auVar35,0);
    if (SUB168(auVar16 * auVar35,8) != 0) {
LAB_00100407:
      bVar51 = true;
      uVar45 = 0xffffffffffffffff;
    }
LAB_0010037d:
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar45;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar47;
    uVar45 = SUB168(auVar17 * auVar36,0);
    if (SUB168(auVar17 * auVar36,8) != 0) {
LAB_00100448:
      bVar51 = true;
      uVar45 = 0xffffffffffffffff;
    }
LAB_001002f7:
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar45;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar47;
    uVar45 = SUB168(auVar11 * auVar30,0);
    if (SUB168(auVar11 * auVar30,8) != 0) {
LAB_00100439:
      bVar51 = true;
      uVar45 = 0xffffffffffffffff;
    }
LAB_00100306:
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar45;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar47;
    uVar45 = SUB168(auVar12 * auVar31,0);
    if (SUB168(auVar12 * auVar31,8) != 0) {
LAB_00100484:
      bVar51 = true;
      uVar45 = 0xffffffffffffffff;
    }
LAB_001002b0:
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar45;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar47;
    uVar45 = SUB168(auVar9 * auVar28,0);
    if (SUB168(auVar9 * auVar28,8) != 0) {
      bVar51 = true;
      uVar45 = 0xffffffffffffffff;
    }
LAB_00100260:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar45;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar47;
    uVar45 = SUB168(auVar5 * auVar24,0);
    if (SUB168(auVar5 * auVar24,8) != 0) {
      bVar51 = true;
      uVar45 = 0xffffffffffffffff;
    }
LAB_0010026f:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar47;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar45;
    uVar45 = SUB168(auVar6 * auVar25,0);
    if (SUB168(auVar6 * auVar25,8) != 0) {
      bVar51 = true;
      uVar45 = 0xffffffffffffffff;
    }
    bVar50 = bVar50 | bVar51;
    break;
  case 0x12:
  case 0x32:
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar49;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar47;
    uVar45 = SUB168(auVar8 * auVar27,0);
    if (SUB168(auVar8 * auVar27,8) != 0) goto LAB_00100484;
    bVar51 = false;
    goto LAB_001002b0;
  case 0x17:
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar49;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar47;
    uVar45 = SUB168(auVar20 * auVar39,0);
    if (SUB168(auVar20 * auVar39,8) != 0) goto LAB_00100457;
    bVar51 = false;
    goto LAB_0010036e;
  case 0x18:
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar49;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar47;
    uVar45 = SUB168(auVar21 * auVar40,0);
    if (SUB168(auVar21 * auVar40,8) != 0) goto LAB_00100407;
    bVar51 = false;
    goto LAB_0010037d;
  case 0x20:
    uVar45 = uVar49 << 9;
    if (uVar49 >> 0x37 != 0) {
      bVar50 = 1;
      uVar45 = 0xffffffffffffffff;
    }
    break;
  case 0x21:
    break;
  case 0x35:
    uVar45 = uVar49 * 2;
    if ((long)uVar49 < 0) {
      bVar50 = 1;
      uVar45 = 0xffffffffffffffff;
    }
  }
  *param_2 = pbVar43 + lVar48;
  if (pbVar43[lVar48] != 0) {
    bVar50 = bVar50 | 2;
  }
LAB_001000be:
  *param_4 = uVar45;
LAB_001000c1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar50;
}


