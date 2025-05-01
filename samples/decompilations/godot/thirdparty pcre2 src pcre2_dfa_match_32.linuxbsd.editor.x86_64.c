
undefined8
do_callout_dfa(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6,
              ulong *param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + param_6 * 4);
  lVar4 = *(long *)(param_5 + 0x98);
  param_6 = param_6 * 4;
  if (iVar1 == 0x76) {
    *param_7 = (ulong)DAT_00109076;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0xa8);
  }
  else {
    *param_7 = (ulong)*(uint *)(param_1 + 0xc + param_6);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0xa8);
  }
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    lVar5 = *(long *)(param_5 + 0x20);
    *(long *)(lVar4 + 0x38) = param_4 - lVar5 >> 2;
    uVar2 = *(uint *)(param_1 + 4 + param_6);
    *(long *)(lVar4 + 0x30) = param_3 - lVar5 >> 2;
    *(ulong *)(lVar4 + 0x40) = (ulong)uVar2;
    *(ulong *)(lVar4 + 0x48) = (ulong)*(uint *)(param_1 + 8 + param_6);
    if (iVar1 == 0x76) {
      uVar3 = *(undefined4 *)(param_1 + 0xc + param_6);
      uVar6 = *(undefined8 *)(param_5 + 0xa0);
      *(undefined8 *)(lVar4 + 0x50) = 0;
      *(undefined8 *)(lVar4 + 0x60) = 0;
      *(undefined4 *)(lVar4 + 4) = uVar3;
      *(undefined8 *)(lVar4 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x001000ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)(lVar4,uVar6);
      return uVar6;
    }
    *(undefined4 *)(lVar4 + 4) = 0;
    uVar2 = *(uint *)(param_1 + 0x10 + param_6);
    *(long *)(lVar4 + 0x60) = param_1 + 0x18 + param_6;
    *(ulong *)(lVar4 + 0x50) = (ulong)uVar2;
    uVar6 = *(undefined8 *)(param_5 + 0xa0);
    *(ulong *)(lVar4 + 0x58) = *param_7 - 7;
                    /* WARNING: Could not recover jumptable at 0x001000a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)(lVar4,uVar6);
    return uVar6;
  }
  return 0;
}



undefined8 more_workspace(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *(uint *)(puVar2 + 1);
    goto LAB_0010010a;
  }
  uVar4 = *(uint *)(param_3 + 10);
  lVar3 = param_3[0xb];
  if (*(uint *)(puVar1 + 1) < 0x1fffffff) {
    uVar5 = (ulong)(*(uint *)(puVar1 + 1) * 2 >> 8);
    if ((ulong)uVar4 < uVar5 + lVar3) {
LAB_0010014c:
      uVar5 = (ulong)(uVar4 - (int)lVar3);
    }
    uVar4 = (int)uVar5 << 8;
    if ((ulong)uVar4 < (ulong)(param_2 + 0x3ec)) {
      return 0xffffffc1;
    }
    lVar3 = (ulong)uVar4 << 2;
  }
  else {
    if ((ulong)uVar4 < lVar3 + 0x3fffffU) goto LAB_0010014c;
    lVar3 = 0xfffffc00;
    uVar4 = 0x3fffff00;
    uVar5 = 0x3fffff;
  }
  puVar2 = (undefined8 *)(*(code *)*param_3)(lVar3,param_3[2]);
  if (puVar2 == (undefined8 *)0x0) {
    return 0xffffffd0;
  }
  param_3[0xb] = param_3[0xb] + uVar5;
  *puVar2 = 0;
  *(uint *)(puVar2 + 1) = uVar4;
  *puVar1 = puVar2;
LAB_0010010a:
  *(uint *)((long)puVar2 + 0xc) = uVar4 - 4;
  *param_1 = puVar2;
  return 0;
}



int internal_dfa_match(long param_1,uint *param_2,uint *param_3,long param_4,long *param_5,
                      uint param_6,uint *param_7,int param_8,uint param_9,long param_10)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  undefined *puVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  uint uVar39;
  uint uVar40;
  uint *puVar41;
  uint *puVar42;
  uint uVar43;
  uint *puVar44;
  int iVar45;
  int iVar46;
  uint uVar47;
  long in_FS_OFFSET;
  bool bVar48;
  bool bVar49;
  uint *local_170;
  uint local_158;
  uint local_150;
  uint *local_140;
  uint *local_120;
  long local_118;
  uint local_f4;
  uint local_c8;
  int local_b0;
  undefined8 local_70;
  long *local_68;
  uint *puStack_60;
  long local_58;
  int local_50;
  long local_40;
  
  uVar33 = *(uint *)(param_1 + 0x70);
  uVar43 = uVar33 & 0x80000;
  local_118 = param_10;
  puVar5 = *(uint **)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(param_1 + 0x68);
  puVar7 = *(uint **)(param_1 + 0x28);
  *(uint *)(param_1 + 0x68) = uVar30 + 1;
  if (*(uint *)(param_1 + 0x60) <= uVar30) {
    iVar17 = -0x2f;
    goto LAB_00100628;
  }
  iVar1 = param_9 + 1;
  if (*(uint *)(param_1 + 100) < param_9) {
    iVar17 = -0x35;
    goto LAB_00100628;
  }
  puVar42 = param_7 + 2;
  iVar13 = ((param_8 + -2) / 6) * 6;
  iVar11 = iVar13 / 6;
  lVar8 = *(long *)(param_1 + 0x40);
  local_170 = puVar42 + (long)iVar11 * 3;
  uVar30 = *param_2;
  local_120 = param_3;
  if (uVar30 - 0x81 < 2) {
    uVar26 = 0;
    puVar22 = param_2;
    do {
      if (uVar26 < puVar22[3]) {
        uVar26 = (ulong)puVar22[3];
      }
      puVar22 = puVar22 + puVar22[1];
    } while (*puVar22 == 0x78);
    if (uVar43 == 0) {
      uVar31 = (long)param_3 - (long)puVar5 >> 2;
      if (uVar26 < uVar31) {
        uVar31 = uVar26;
      }
      local_120 = param_3 + -uVar31;
    }
    else {
      uVar31 = 0;
      if ((uVar26 != 0) && (puVar5 < param_3)) {
        do {
          uVar31 = uVar31 + 1;
          param_3 = param_3 + -1;
          local_120 = param_3;
          if (uVar26 <= uVar31) break;
        } while (puVar5 < param_3);
      }
    }
    if (local_120 < *(uint **)(param_1 + 0x30)) {
      *(uint **)(param_1 + 0x30) = local_120;
    }
    uVar26 = 0;
    puVar22 = local_170;
    do {
      uVar30 = 0;
      iVar17 = 0;
      if (param_2[2] == 0x7d) {
        uVar30 = param_2[3];
        puVar21 = puVar22;
        if (uVar30 <= uVar31) {
          iVar17 = 2;
          goto LAB_00100788;
        }
      }
      else {
LAB_00100788:
        if (iVar11 <= (int)uVar26) goto LAB_00100358;
        puVar22[1] = 0;
        uVar26 = (ulong)((int)uVar26 + 1);
        puVar21 = puVar22 + 3;
        *puVar22 = -(iVar17 + 2 + (int)((long)param_2 - lVar6 >> 2));
        puVar22[2] = (int)uVar31 - uVar30;
      }
      param_2 = param_2 + param_2[1];
      puVar22 = puVar21;
    } while (*param_2 == 0x78);
LAB_00100368:
    uVar31 = (ulong)(int)uVar26;
  }
  else {
    if ((iVar1 != 1) || ((*(byte *)(param_1 + 0x6c) & 0x40) == 0)) {
      uVar26 = 0;
      iVar17 = (uVar30 - 0x8e < 2 || uVar30 - 0x89 < 2) + 2;
      puVar22 = local_170;
      do {
        iVar46 = (int)uVar26;
        uVar26 = (ulong)(iVar46 + 1);
        if (iVar11 <= iVar46) goto LAB_00100358;
        puVar22[1] = 0;
        *puVar22 = iVar17 + (int)((long)param_2 - lVar6 >> 2);
        param_2 = param_2 + param_2[1];
        iVar17 = 2;
        puVar22 = puVar22 + 3;
      } while (*param_2 == 0x78);
      goto LAB_00100368;
    }
    do {
      param_2 = param_2 + param_2[1];
    } while (*param_2 == 0x78);
    uVar31 = (ulong)(int)param_7[1];
    uVar26 = uVar31;
    if (*param_7 == 0) {
      memcpy(local_170,puVar42,uVar31 * 0xc);
    }
  }
  bVar48 = uVar43 != 0;
  uVar33 = uVar33 & 0xa0000;
  bVar49 = uVar33 == 0;
  lVar2 = lVar8 + 0x340;
  lVar19 = lVar8 + 0x100;
  iVar46 = -1;
  local_140 = local_120;
  uVar30 = 0;
  uVar26 = uVar26 & 0xffffffff;
  uVar43 = 0;
LAB_001003e8:
  puVar22 = puVar42;
  if (*(uint **)(param_1 + 0x38) < local_140) {
    *(uint **)(param_1 + 0x38) = local_140;
  }
  param_7[1] = (uint)uVar26;
  *param_7 = uVar30 ^ 1;
  puVar42 = local_170 + uVar31 * 3;
  if (puVar7 <= local_140) {
    local_158 = 0xffffffff;
  }
  else {
    local_158 = *local_140;
  }
  local_150 = (uint)(puVar7 > local_140);
  if (0 < (int)(uint)uVar26) {
    iVar34 = 0;
    uVar26 = uVar26 & 0xffffffff;
    iVar45 = 0;
    local_f4 = 0;
    local_c8 = 0;
    uVar14 = 0;
    puVar21 = puVar22;
LAB_001004d3:
    puVar24 = local_170 + (long)iVar34 * 3;
    uVar30 = *puVar24;
    if (-1 < (int)uVar30) goto LAB_001004ea;
    if ((int)puVar24[2] < 1) {
      uVar30 = -uVar30;
      *puVar24 = uVar30;
      goto LAB_001004ea;
    }
    iVar17 = iVar45 + 1;
    if (iVar45 < iVar11) {
      uVar9 = *(undefined8 *)puVar24;
      puVar44 = puVar21 + 3;
      puVar21[2] = puVar24[2] - 1;
      iVar34 = iVar34 + 1;
      *(undefined8 *)puVar21 = uVar9;
      iVar45 = iVar17;
      if (uVar43 != 0) {
        uVar14 = uVar43;
      }
      goto LAB_001004ce;
    }
    goto LAB_00100358;
  }
  local_f4 = 0;
  local_c8 = 0;
LAB_0010356e:
  iVar17 = iVar46;
  if ((uVar43 == 0) || (param_7[1] == local_c8)) {
LAB_00105595:
    if (iVar46 < 0) goto LAB_00100628;
    uVar33 = *(uint *)(param_1 + 0x6c);
  }
  else {
    uVar33 = *(uint *)(param_1 + 0x6c);
    if ((uVar33 & 0x20) != 0) {
      if ((local_f4 != 0) ||
         ((puVar7 <= local_140 &&
          ((*(uint **)(param_1 + 0x30) < local_140 || (*(int *)(param_1 + 0x7c) != 0)))))) {
LAB_00105960:
        iVar17 = -2;
        goto LAB_00100628;
      }
      goto LAB_00105595;
    }
    if ((uVar33 & 0x10) == 0) goto LAB_00105595;
    if (iVar46 < 0) {
      if ((local_f4 == 0) &&
         ((local_140 < puVar7 ||
          ((local_140 <= *(uint **)(param_1 + 0x30) && (*(int *)(param_1 + 0x7c) == 0))))))
      goto LAB_00100628;
      goto LAB_00105960;
    }
  }
  if ((((uVar33 | *(uint *)(param_1 + 0x70)) & 0x20000000) != 0) &&
     (iVar17 = -1, puVar7 <= local_140)) {
    iVar17 = iVar46;
  }
LAB_00100628:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar17;
LAB_001004ea:
  uVar18 = (uint)uVar26;
  puVar23 = local_170;
  if (0 < iVar34) {
    do {
      if ((*puVar23 == uVar30) && (puVar23[1] == puVar24[1])) {
        iVar34 = iVar34 + 1;
        if (iVar34 < (int)uVar18) goto LAB_001004d3;
        goto LAB_0010051e;
      }
      puVar23 = puVar23 + 3;
    } while (puVar24 != puVar23);
  }
  puVar23 = (uint *)(lVar6 + (long)(int)uVar30 * 4);
  uVar37 = *puVar23;
  uVar31 = (ulong)uVar37;
  uVar39 = uVar43;
  if ((local_150 == 0) && (uVar39 = 1, poptable[uVar31] == '\0')) {
    uVar39 = uVar43;
  }
  iVar17 = (int)local_158 >> 7;
  puVar44 = puVar21;
  uVar43 = uVar39;
  if (coptable[uVar31] == 0) {
    uVar20 = 0xffffffff;
    iVar35 = 0;
    goto LAB_0010065f;
  }
  uVar20 = (ulong)puVar23[(byte)coptable[uVar31]];
  if (uVar37 < 0x55) {
    iVar35 = 1;
  }
  else {
    switch(puVar23[(byte)coptable[uVar31]]) {
    case 0xe:
      goto switchD_001005e4_caseD_e;
    case 0xf:
    case 0x10:
      uVar31 = (ulong)(uVar37 + 300);
      iVar35 = 1;
      break;
    case 0x11:
      uVar31 = (ulong)(uVar37 + 0x154);
      iVar35 = 1;
      break;
    case 0x12:
    case 0x13:
      uVar31 = (ulong)(uVar37 + 0x168);
      iVar35 = 1;
      break;
    case 0x14:
    case 0x15:
      uVar31 = (ulong)(uVar37 + 0x17c);
      iVar35 = 1;
      break;
    case 0x16:
      uVar31 = (ulong)(uVar37 + 0x140);
      iVar35 = 1;
      break;
    default:
      if (0x1dd < uVar37) goto switchD_001005e4_caseD_e;
      iVar35 = 1;
      goto LAB_00100672;
    }
LAB_0010065f:
    if (0x1dd < (uint)uVar31) goto switchD_001005e4_caseD_e;
  }
  uVar37 = (uint)uVar31;
  if (uVar37 < 0xb) {
    if (uVar37 < 4) {
      if (uVar37 == 1) {
        if (puVar5 == local_140) {
          if (iVar11 <= (int)uVar18) goto LAB_00100358;
          iVar34 = iVar34 + 1;
          *puVar42 = uVar30 + 1;
          puVar42[1] = 0;
          puVar42 = puVar42 + 3;
          uVar26 = (ulong)(uVar18 + 1);
        }
        else {
          iVar34 = iVar34 + 1;
        }
      }
      else {
        if (uVar37 != 2) goto switchD_001005e4_caseD_e;
        if (local_140 == puVar5 + param_4) {
          if (iVar11 <= (int)uVar18) goto LAB_00100358;
          iVar34 = iVar34 + 1;
          *puVar42 = uVar30 + 1;
          puVar42[1] = 0;
          puVar42 = puVar42 + 3;
          uVar26 = (ulong)(uVar18 + 1);
        }
        else {
          iVar34 = iVar34 + 1;
        }
      }
      goto LAB_001004ce;
    }
    uVar20 = 1L << ((byte)uVar31 & 0x3f);
    if ((uVar20 & 0x540) != 0) {
      if (local_150 == 1) {
        if ((local_158 < 0x100) &&
           ((*(byte *)(lVar2 + (ulong)local_158) & toptable1[uVar31]) == toptable2[uVar31])) {
          iVar34 = iVar34 + 1;
        }
        else {
          if (iVar11 <= iVar45) goto LAB_00100358;
          iVar34 = iVar34 + 1;
          *puVar21 = uVar30 + 1;
          puVar21[1] = 0;
          puVar44 = puVar21 + 3;
          iVar45 = iVar45 + 1;
        }
      }
      else {
        iVar34 = iVar34 + 1;
      }
      goto LAB_001004ce;
    }
    if ((uVar20 & 0x30) != 0) goto switchD_0010068c_caseD_a9;
    if ((uVar20 & 0x280) == 0) goto switchD_001005e4_caseD_e;
switchD_0010068c_caseD_b:
    if ((local_150 == 0) || (0xff < local_158)) {
      iVar34 = iVar34 + 1;
    }
    else if ((*(byte *)(lVar2 + (ulong)local_158) & toptable1[uVar31]) == toptable2[uVar31]) {
      local_150 = 1;
      iVar34 = iVar34 + 1;
    }
    else {
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar21 = uVar30 + 1;
      puVar21[1] = 0;
      local_150 = 1;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    goto LAB_001004ce;
  }
LAB_00100672:
  iVar12 = (int)uVar31;
  if (0x1d2 < iVar12 - 0xbU) {
switchD_001005e4_caseD_e:
    iVar17 = -0x2a;
    goto LAB_00100628;
  }
  uVar37 = (uint)uVar20;
  iVar25 = (int)uVar37 >> 7;
  switch(iVar12) {
  case 0xb:
    goto switchD_0010068c_caseD_b;
  case 0xc:
    if (local_150 == 1) {
      puVar24 = *(uint **)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x74) == 0) {
        if ((local_140 <= puVar24 + -(ulong)*(uint *)(param_1 + 0x78)) &&
           (*local_140 == *(uint *)(param_1 + 0x80))) {
          if (*(uint *)(param_1 + 0x78) == 1) {
            iVar34 = iVar34 + 1;
            break;
          }
          if (local_140[1] == *(uint *)(param_1 + 0x84)) {
            iVar34 = iVar34 + 1;
            break;
          }
        }
      }
      else if (local_140 < puVar24) {
        iVar17 = _pcre2_is_newline_32
                           (local_140,*(int *)(param_1 + 0x74),puVar24,param_1 + 0x78,bVar48);
        if (iVar17 != 0) {
          iVar34 = iVar34 + 1;
          break;
        }
        puVar24 = *(uint **)(param_1 + 0x28);
      }
      if ((((local_140 + 1 < puVar24) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) ||
          (*(int *)(param_1 + 0x74) != 0)) ||
         ((*(int *)(param_1 + 0x78) != 2 || (*(uint *)(param_1 + 0x80) != local_158)))) {
        if (iVar11 <= iVar45) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        *puVar21 = uVar30 + 1;
        puVar21[1] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        iVar34 = iVar34 + 1;
        local_f4 = 1;
        uVar43 = 1;
      }
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0xd:
    if (local_150 == 1) {
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar21 = uVar30 + 1;
      puVar21[1] = 0;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  default:
    goto switchD_001005e4_caseD_e;
  case 0xf:
  case 0x10:
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    pbVar38 = &_pcre2_dummy_ucd_record_32;
    if (local_158 < 0x110000) {
      pbVar38 = &_pcre2_ucd_records_32 +
                (ulong)*(ushort *)
                        (&_pcre2_ucd_stage2_32 +
                        (long)(int)((uint)*(ushort *)(&_pcre2_ucd_stage1_32 + (long)iVar17 * 2) *
                                    0x80 + (local_158 & 0x7f)) * 2) * 0xc;
    }
    switch(puVar23[1]) {
    case 1:
      bVar15 = (byte)(pbVar38[1] - 8) < 2 || pbVar38[1] == 5;
      break;
    case 2:
      bVar15 = *(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) == puVar23[2];
      break;
    case 3:
      bVar15 = (uint)pbVar38[1] == puVar23[2];
      break;
    case 4:
      bVar15 = (uint)*pbVar38 == puVar23[2];
      break;
    case 5:
      uVar18 = puVar23[2];
      bVar15 = true;
      if (*pbVar38 != uVar18) {
        bVar15 = (1 << ((byte)uVar18 & 0x1f) &
                 *(uint *)(&_pcre2_ucd_script_sets_32 +
                          ((ulong)(*(ushort *)(pbVar38 + 8) & 0x3ff) + (ulong)(uVar18 >> 5)) * 4))
                 != 0;
      }
      break;
    case 6:
      bVar15 = (*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) & 0xfffffffd) == 1;
      break;
    case 7:
    case 8:
      if (local_158 != 0x180e) {
        if (0x180e < local_158) {
          if (local_158 < 0x2060) {
            if (local_158 < 0x2028) {
              if (local_158 - 0x2000 < 0xb) goto switchD_00102e66_caseD_0;
            }
            else {
              bVar15 = true;
              if ((0x80000000000083U >> ((ulong)(local_158 - 0x2028) & 0x3f) & 1) != 0) break;
            }
          }
          else if (local_158 == 0x3000) goto switchD_00102e66_caseD_0;
          goto LAB_00102ea4;
        }
        if (local_158 != 0x85) {
          if (local_158 < 0x86) {
            bVar15 = true;
            if (local_158 < 0xe) {
              if (local_158 < 9) {
LAB_00102ea4:
                bVar15 = *(int *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) == 6;
              }
            }
            else if (local_158 != 0x20) goto LAB_00102ea4;
            break;
          }
          if ((local_158 != 0xa0) && (local_158 != 0x1680)) goto LAB_00102ea4;
        }
      }
    case 0:
switchD_00102e66_caseD_0:
      bVar15 = true;
      break;
    case 9:
      bVar15 = true;
      if ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) & 0xfffffffd) != 1) {
        bVar15 = (pbVar38[1] - 0xc & 0xfb) == 0;
      }
      break;
    case 10:
      bVar15 = false;
      if (local_158 < 0x110000) {
        puVar24 = (uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)puVar23[2] * 4);
        do {
          uVar18 = *puVar24;
          if (local_158 < uVar18) {
            bVar15 = false;
            goto LAB_00102eb9;
          }
          puVar24 = puVar24 + 1;
        } while (uVar18 != local_158);
        goto switchD_00102e66_caseD_0;
      }
      break;
    case 0xb:
      if (((local_158 & 0xffffffdf) == 0x40) || (local_158 == 0x24)) goto switchD_00102e66_caseD_0;
      bVar15 = local_158 - 0xa0 < 0xd760 || 0xdfff < local_158;
      break;
    case 0xc:
      bVar15 = (uint)(*(ushort *)(pbVar38 + 8) >> 0xb) == puVar23[2];
      break;
    case 0xd:
      bVar15 = (1 << ((byte)puVar23[2] & 0x1f) &
               *(uint *)(&_pcre2_ucd_boolprop_sets_32 +
                        ((ulong)(*(ushort *)(pbVar38 + 10) & 0xfff) + (ulong)(puVar23[2] >> 5)) * 4)
               ) != 0;
      break;
    default:
      bVar15 = iVar12 != 0x10;
    }
LAB_00102eb9:
    if ((iVar12 == 0x10) == bVar15) {
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar21 = uVar30 + 3;
      puVar21[1] = 0;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x11:
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_158 == 0xd) {
      iVar17 = iVar45 + 1;
      if (local_140 + 1 < puVar7) {
        if (local_140[1] == 10) {
          if (iVar11 <= iVar45) goto LAB_00100358;
          iVar34 = iVar34 + 1;
          *puVar21 = ~uVar30;
          puVar21[1] = 0;
          puVar21[2] = 1;
          puVar44 = puVar21 + 3;
          iVar45 = iVar17;
        }
        else {
          if (iVar11 <= iVar45) goto LAB_00100358;
          iVar34 = iVar34 + 1;
          *puVar21 = uVar30 + 1;
          puVar21[1] = 0;
          puVar44 = puVar21 + 3;
          iVar45 = iVar17;
        }
      }
      else {
        if (iVar11 <= iVar45) goto LAB_00100358;
        puVar44 = puVar21 + 3;
        *puVar21 = uVar30 + 1;
        iVar34 = iVar34 + 1;
        puVar21[1] = 0;
        iVar45 = iVar17;
        if ((*(byte *)(param_1 + 0x6c) & 0x20) != 0) {
          uVar14 = 1;
        }
      }
      break;
    }
    if (local_158 < 0xe) {
      if (local_158 != 10) {
        uVar18 = local_158 - 0xb;
joined_r0x00104e5e:
        if (1 < uVar18) {
          iVar34 = iVar34 + 1;
          break;
        }
        goto LAB_00104e30;
      }
    }
    else {
      if (local_158 != 0x85) {
        uVar18 = local_158 - 0x2028;
        goto joined_r0x00104e5e;
      }
LAB_00104e30:
      if (*(short *)(param_1 + 0x90) == 2) {
        iVar34 = iVar34 + 1;
        break;
      }
    }
    if (iVar11 <= iVar45) goto LAB_00100358;
    iVar34 = iVar34 + 1;
    *puVar21 = uVar30 + 1;
    puVar21[1] = 0;
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    break;
  case 0x12:
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_158 != 0x180e) {
      if (local_158 < 0x180f) {
        if (local_158 != 0xa0) {
          if (local_158 < 0xa1) {
            if ((local_158 != 9) && (local_158 != 0x20)) {
LAB_00102f0a:
              if (iVar11 <= iVar45) goto LAB_00100358;
              iVar34 = iVar34 + 1;
              *puVar21 = uVar30 + 1;
              puVar21[1] = 0;
              puVar44 = puVar21 + 3;
              iVar45 = iVar45 + 1;
              break;
            }
          }
          else if (local_158 != 0x1680) goto LAB_00102f0a;
        }
      }
      else if (local_158 != 0x205f) {
        if (local_158 < 0x2060) {
          if (local_158 < 0x200b) {
            if (local_158 < 0x2000) goto LAB_00102f0a;
          }
          else if (local_158 != 0x202f) goto LAB_00102f0a;
        }
        else if (local_158 != 0x3000) goto LAB_00102f0a;
      }
    }
    iVar34 = iVar34 + 1;
    break;
  case 0x13:
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_158 != 0x180e) {
      if (local_158 < 0x180f) {
        if (local_158 != 0xa0) {
          if (local_158 < 0xa1) {
            if ((local_158 != 9) && (local_158 != 0x20)) {
LAB_0010305c:
              iVar34 = iVar34 + 1;
              break;
            }
          }
          else if (local_158 != 0x1680) goto LAB_0010305c;
        }
      }
      else if (local_158 != 0x205f) {
        if (local_158 < 0x2060) {
          if (local_158 < 0x200b) {
            if (local_158 < 0x2000) goto LAB_0010305c;
          }
          else if (local_158 != 0x202f) goto LAB_0010305c;
        }
        else if (local_158 != 0x3000) goto LAB_0010305c;
      }
    }
    if (iVar11 <= iVar45) goto LAB_00100358;
    iVar34 = iVar34 + 1;
    *puVar21 = uVar30 + 1;
    puVar21[1] = 0;
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    break;
  case 0x14:
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_158 == 0x85) {
LAB_0010383d:
      iVar34 = iVar34 + 1;
    }
    else {
      if (local_158 < 0x86) {
        if (local_158 - 10 < 4) goto LAB_0010383d;
      }
      else if (local_158 - 0x2028 < 2) goto LAB_0010383d;
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar21 = uVar30 + 1;
      puVar21[1] = 0;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    break;
  case 0x15:
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_158 != 0x85) {
      if (local_158 < 0x86) {
        if (3 < local_158 - 10) {
LAB_0010543c:
          iVar34 = iVar34 + 1;
          break;
        }
      }
      else if (1 < local_158 - 0x2028) goto LAB_0010543c;
    }
    if (iVar11 <= iVar45) goto LAB_00100358;
    iVar34 = iVar34 + 1;
    *puVar21 = uVar30 + 1;
    puVar21[1] = 0;
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    break;
  case 0x16:
    if (local_150 == 1) {
      local_70 = (ulong)local_70._4_4_ << 0x20;
      puVar24 = (uint *)_pcre2_extuni_32(local_158,local_140 + 1,*(undefined8 *)(param_1 + 0x20),
                                         puVar7,bVar48,&local_70);
      if ((puVar7 <= puVar24) && ((*(byte *)(param_1 + 0x6c) & 0x20) != 0)) {
        uVar14 = 1;
      }
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar21 = ~uVar30;
      puVar21[1] = 0;
      puVar21[2] = (uint)local_70;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x17:
    if (local_150 != 0) {
      puVar21 = *(uint **)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x74) == 0) {
        uVar37 = *(uint *)(param_1 + 0x78);
        lVar32 = (ulong)uVar37 * -4;
        if (puVar21 + -(ulong)uVar37 < local_140) {
          iVar34 = iVar34 + 1;
          break;
        }
        if (*local_140 != *(uint *)(param_1 + 0x80)) {
          iVar34 = iVar34 + 1;
          break;
        }
        if (uVar37 == 1) {
          lVar32 = -4;
        }
        else if (local_140[1] != *(uint *)(param_1 + 0x84)) {
          iVar34 = iVar34 + 1;
          break;
        }
      }
      else {
        if (puVar21 <= local_140) {
          iVar34 = iVar34 + 1;
          break;
        }
        iVar17 = _pcre2_is_newline_32
                           (local_140,*(int *)(param_1 + 0x74),puVar21,param_1 + 0x78,bVar48);
        if (iVar17 == 0) {
          iVar34 = iVar34 + 1;
          break;
        }
        lVar32 = (ulong)*(uint *)(param_1 + 0x78) * -4;
      }
      if (local_140 != (uint *)(lVar32 + (long)puVar7)) {
        iVar34 = iVar34 + 1;
        break;
      }
    }
    if ((*(byte *)(param_1 + 0x6c) & 0x20) != 0) goto LAB_00105960;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    iVar34 = iVar34 + 1;
    uVar26 = (ulong)(uVar18 + 1);
    *puVar42 = uVar30 + 1;
    puVar42[1] = 0;
    puVar42 = puVar42 + 3;
    break;
  case 0x18:
    if (local_140 < puVar7) {
      iVar34 = iVar34 + 1;
    }
    else {
      if ((*(byte *)(param_1 + 0x6c) & 0x20) != 0) goto LAB_00105960;
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)(uVar18 + 1);
      *puVar42 = uVar30 + 1;
      puVar42[1] = 0;
      puVar42 = puVar42 + 3;
    }
    break;
  case 0x19:
    if ((*(uint *)(param_1 + 0x6c) & 2) != 0) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_150 == 0) {
      if ((*(uint *)(param_1 + 0x6c) & 0x20) != 0) {
        iVar34 = iVar34 + 1;
        uVar43 = 1;
        break;
      }
LAB_00101c06:
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)(uVar18 + 1);
      *puVar42 = uVar30 + 1;
      puVar42[1] = 0;
      puVar42 = puVar42 + 3;
      break;
    }
    puVar24 = *(uint **)(param_1 + 0x28);
    if ((*(byte *)(param_1 + 0x70) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x74) == 0) {
        if (((local_140 <= puVar24 + -(ulong)*(uint *)(param_1 + 0x78)) &&
            (*local_140 == *(uint *)(param_1 + 0x80))) &&
           ((*(uint *)(param_1 + 0x78) == 1 || (local_140[1] == *(uint *)(param_1 + 0x84))))) {
LAB_00104b2a:
          if (local_140 == puVar7 + -(ulong)*(uint *)(param_1 + 0x78)) goto LAB_00101c06;
          goto LAB_00104b49;
        }
      }
      else if (local_140 < puVar24) {
        iVar17 = _pcre2_is_newline_32
                           (local_140,*(int *)(param_1 + 0x74),puVar24,param_1 + 0x78,bVar48);
        if (iVar17 != 0) goto LAB_00104b2a;
LAB_00104b49:
        puVar24 = *(uint **)(param_1 + 0x28);
      }
    }
    if (local_140 + 1 < puVar24) {
      iVar34 = iVar34 + 1;
    }
    else if ((*(uint *)(param_1 + 0x6c) & 0x30) == 0) {
      iVar34 = iVar34 + 1;
    }
    else if (*(int *)(param_1 + 0x74) == 0) {
      if (*(int *)(param_1 + 0x78) == 2) {
        if (*(uint *)(param_1 + 0x80) == local_158) {
          if ((*(uint *)(param_1 + 0x6c) & 0x20) == 0) {
            iVar34 = iVar34 + 1;
            local_f4 = local_150;
            uVar43 = local_150;
          }
          else {
            if (iVar11 <= iVar45) goto LAB_00100358;
            *puVar21 = ~uVar30;
            iVar34 = iVar34 + 1;
            puVar21[1] = 0;
            puVar21[2] = 1;
            puVar44 = puVar21 + 3;
            iVar45 = iVar45 + 1;
            uVar14 = local_150;
          }
        }
        else {
          iVar34 = iVar34 + 1;
        }
      }
      else {
        iVar34 = iVar34 + 1;
      }
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x1a:
    if ((*(uint *)(param_1 + 0x6c) & 2) != 0) {
      puVar21 = *(uint **)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x74) == 0) {
        if (puVar21 + -(ulong)*(uint *)(param_1 + 0x78) < local_140) {
          iVar34 = iVar34 + 1;
          break;
        }
        if (*local_140 != *(uint *)(param_1 + 0x80)) {
          iVar34 = iVar34 + 1;
          break;
        }
        if ((*(uint *)(param_1 + 0x78) != 1) && (local_140[1] != *(uint *)(param_1 + 0x84))) {
          iVar34 = iVar34 + 1;
          break;
        }
      }
      else {
        if (puVar21 <= local_140) {
          iVar34 = iVar34 + 1;
          break;
        }
        iVar17 = _pcre2_is_newline_32
                           (local_140,*(int *)(param_1 + 0x74),puVar21,param_1 + 0x78,bVar48);
        if (iVar17 == 0) {
          iVar34 = iVar34 + 1;
          break;
        }
      }
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)(uVar18 + 1);
      *puVar42 = uVar30 + 1;
      puVar42[1] = 0;
      puVar42 = puVar42 + 3;
      break;
    }
    if (local_150 == 0) {
      if ((*(uint *)(param_1 + 0x6c) & 0x20) != 0) {
        iVar34 = iVar34 + 1;
        uVar43 = 1;
        break;
      }
LAB_00101cc8:
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)(uVar18 + 1);
      *puVar42 = uVar30 + 1;
      puVar42[1] = 0;
      puVar42 = puVar42 + 3;
    }
    else {
      puVar24 = *(uint **)(param_1 + 0x28);
      if ((*(byte *)(param_1 + 0x70) & 0x10) == 0) {
        if (*(int *)(param_1 + 0x74) == 0) {
          if (((local_140 <= puVar24 + -(ulong)*(uint *)(param_1 + 0x78)) &&
              (*local_140 == *(uint *)(param_1 + 0x80))) &&
             ((*(uint *)(param_1 + 0x78) == 1 || (local_140[1] == *(uint *)(param_1 + 0x84)))))
          goto LAB_00101cc8;
        }
        else if (local_140 < puVar24) {
          iVar17 = _pcre2_is_newline_32
                             (local_140,*(int *)(param_1 + 0x74),puVar24,param_1 + 0x78,bVar48);
          if (iVar17 != 0) goto LAB_00101cc8;
          puVar24 = *(uint **)(param_1 + 0x28);
        }
      }
      if (local_140 + 1 < puVar24) {
        iVar34 = iVar34 + 1;
      }
      else if ((*(uint *)(param_1 + 0x6c) & 0x30) == 0) {
        iVar34 = iVar34 + 1;
      }
      else if (*(int *)(param_1 + 0x74) == 0) {
        if (*(int *)(param_1 + 0x78) == 2) {
          if (*(uint *)(param_1 + 0x80) == local_158) {
            if ((*(uint *)(param_1 + 0x6c) & 0x20) == 0) {
              iVar34 = iVar34 + 1;
              local_f4 = local_150;
              uVar43 = local_150;
            }
            else {
              if (iVar11 <= iVar45) goto LAB_00100358;
              *puVar21 = ~uVar30;
              iVar34 = iVar34 + 1;
              puVar21[1] = 0;
              puVar21[2] = 1;
              puVar44 = puVar21 + 3;
              iVar45 = iVar45 + 1;
              uVar14 = local_150;
            }
          }
          else {
            iVar34 = iVar34 + 1;
          }
        }
        else {
          iVar34 = iVar34 + 1;
        }
      }
      else {
        iVar34 = iVar34 + 1;
      }
    }
    break;
  case 0x1b:
    if (puVar5 == local_140) {
      if ((*(byte *)(param_1 + 0x6c) & 1) == 0) {
        if (iVar11 <= (int)uVar18) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        uVar26 = (ulong)(uVar18 + 1);
        *puVar42 = uVar30 + 1;
        puVar42[1] = 0;
        puVar42 = puVar42 + 3;
      }
      else {
        iVar34 = iVar34 + 1;
      }
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x1c:
    if ((puVar5 != local_140) || ((*(byte *)(param_1 + 0x6c) & 1) != 0)) {
      if ((puVar7 == local_140) && ((*(byte *)(param_1 + 0x72) & 0x20) == 0)) {
        iVar34 = iVar34 + 1;
        break;
      }
      puVar21 = *(uint **)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x74) == 0) {
        uVar31 = (ulong)*(uint *)(param_1 + 0x78);
        if (local_140 < puVar21 + uVar31) {
          iVar34 = iVar34 + 1;
          break;
        }
        if (local_140[-uVar31] != *(uint *)(param_1 + 0x80)) {
          iVar34 = iVar34 + 1;
          break;
        }
        if ((*(uint *)(param_1 + 0x78) != 1) && (local_140[1 - uVar31] != *(uint *)(param_1 + 0x84))
           ) {
          iVar34 = iVar34 + 1;
          break;
        }
      }
      else {
        if (local_140 <= puVar21) {
          iVar34 = iVar34 + 1;
          break;
        }
        iVar17 = _pcre2_was_newline_32
                           (local_140,*(int *)(param_1 + 0x74),puVar21,param_1 + 0x78,bVar48);
        if (iVar17 == 0) {
          iVar34 = iVar34 + 1;
          break;
        }
      }
    }
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    iVar34 = iVar34 + 1;
    uVar26 = (ulong)(uVar18 + 1);
    *puVar42 = uVar30 + 1;
    puVar42[1] = 0;
    puVar42 = puVar42 + 3;
    break;
  case 0x1d:
    if ((local_150 == 0) || (uVar37 != local_158)) {
      iVar34 = iVar34 + 1;
    }
    else {
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar21 = iVar35 + 1 + uVar30;
      puVar21[1] = 0;
      local_150 = 1;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    break;
  case 0x1e:
    if (local_150 == 0) {
      iVar34 = iVar34 + 1;
    }
    else if (uVar33 == 0) {
      if (local_158 < 0x100) {
        if (0xff < uVar37) {
          iVar34 = iVar34 + 1;
          break;
        }
        uVar20 = (ulong)*(byte *)(lVar8 + uVar20);
        uVar18 = (uint)*(byte *)(lVar8 + (ulong)local_158);
      }
      else {
        uVar18 = local_158;
        if (uVar37 < 0x100) {
          iVar34 = iVar34 + 1;
          break;
        }
      }
      if ((uint)uVar20 == uVar18) {
        if (iVar11 <= iVar45) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        *puVar21 = uVar30 + 2;
        puVar21[1] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        iVar34 = iVar34 + 1;
      }
    }
    else if (uVar37 == local_158) {
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar21 = iVar35 + 1 + uVar30;
      puVar21[1] = 0;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      if (local_158 < 0x80) {
        uVar18 = (uint)*(byte *)(lVar19 + (ulong)local_158);
      }
      else {
        puVar29 = &_pcre2_dummy_ucd_record_32;
        if (local_158 < 0x110000) {
          puVar29 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uint)*(ushort *)(&_pcre2_ucd_stage1_32 + (long)iVar17 * 2)
                                        * 0x80 + (local_158 & 0x7f)) * 2) * 0xc;
        }
        uVar18 = local_158 + *(int *)(puVar29 + 4);
      }
      if (uVar37 == uVar18) {
        if (iVar11 <= iVar45) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        *puVar21 = iVar35 + 1 + uVar30;
        puVar21[1] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        iVar34 = iVar34 + 1;
      }
    }
    break;
  case 0x1f:
    if ((local_150 == 0) || (uVar37 == local_158)) {
      iVar34 = iVar34 + 1;
    }
    else {
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar21 = iVar35 + 1 + uVar30;
      puVar21[1] = 0;
      local_150 = 1;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    break;
  case 0x20:
    if (local_150 == 1) {
      if ((uVar37 < 0x80) || (bVar49)) {
        if (uVar37 < 0x100) {
          uVar20 = (ulong)*(byte *)(lVar19 + uVar20);
        }
      }
      else {
        puVar29 = &_pcre2_dummy_ucd_record_32;
        if (uVar37 < 0x110000) {
          puVar29 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uint)*(ushort *)(&_pcre2_ucd_stage1_32 + (long)iVar25 * 2)
                                        * 0x80 + (uVar37 & 0x7f)) * 2) * 0xc;
        }
        uVar20 = (ulong)(*(int *)(puVar29 + 4) + uVar37);
      }
      if ((uVar37 == local_158) || (local_158 == (uint)uVar20)) {
        iVar34 = iVar34 + 1;
      }
      else {
        if (iVar11 <= iVar45) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        *puVar21 = iVar35 + 1 + uVar30;
        puVar21[1] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x21:
  case 0x22:
  case 0x2a:
  case 0x3b:
  case 0x3c:
  case 0x44:
    bVar15 = false;
    goto LAB_00100b0d;
  case 0x23:
  case 0x24:
  case 0x2b:
  case 0x3d:
  case 0x3e:
  case 0x45:
    bVar15 = false;
    goto LAB_00100a3c;
  case 0x25:
  case 0x26:
  case 0x2c:
  case 0x3f:
  case 0x40:
  case 0x46:
    bVar15 = false;
    goto LAB_0010096b;
  case 0x27:
  case 0x28:
  case 0x2d:
  case 0x41:
  case 0x42:
  case 0x47:
    bVar15 = false;
    goto LAB_00100bd8;
  case 0x29:
  case 0x43:
    uVar18 = puVar24[1];
    uVar39 = 0xffffffff;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    goto LAB_0010233d;
  case 0x2e:
  case 0x2f:
  case 0x37:
  case 0x48:
  case 0x49:
  case 0x51:
    uVar31 = (ulong)(iVar12 - 0xd);
    bVar15 = true;
LAB_00100b0d:
    uVar39 = uVar18 + 1;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar24 = puVar42 + 3;
    puVar42[1] = 0;
    *puVar42 = iVar35 + 1 + uVar30;
    if (local_150 == 1) {
      uVar27 = 0xffffffff;
      if (bVar15) {
        if ((uVar37 < 0x80) || (bVar49)) {
          uVar27 = uVar20;
          if (uVar37 < 0x100) {
            uVar27 = (ulong)*(byte *)(lVar19 + uVar20);
          }
        }
        else {
          puVar29 = &_pcre2_dummy_ucd_record_32;
          if (uVar37 < 0x110000) {
            puVar29 = &_pcre2_ucd_records_32 +
                      (ulong)*(ushort *)
                              (&_pcre2_ucd_stage2_32 +
                              (long)(int)((uint)*(ushort *)
                                                 (&_pcre2_ucd_stage1_32 + (long)iVar25 * 2) * 0x80 +
                                         (uVar37 & 0x7f)) * 2) * 0xc;
          }
          uVar27 = (ulong)(*(int *)(puVar29 + 4) + uVar37);
        }
      }
      uVar18 = (uint)uVar31;
      if ((uVar37 == local_158 || local_158 == (uint)uVar27) == uVar18 < 0x3b) {
        if ((uVar18 != 0x2a) && (uVar18 != 0x44)) {
          uVar26 = (ulong)uVar39;
          puVar42 = puVar24;
        }
        if (iVar11 <= iVar45) goto LAB_00100358;
        *puVar21 = uVar30;
        iVar34 = iVar34 + 1;
        puVar21[1] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        iVar34 = iVar34 + 1;
        uVar26 = (ulong)uVar39;
        puVar42 = puVar24;
      }
    }
    else {
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)uVar39;
      puVar42 = puVar24;
    }
    break;
  case 0x30:
  case 0x31:
  case 0x38:
  case 0x4a:
  case 0x4b:
  case 0x52:
    uVar31 = (ulong)(iVar12 - 0xd);
    bVar15 = true;
LAB_00100a3c:
    uVar39 = puVar24[1];
    puVar24 = puVar42;
    if (0 < (int)uVar39) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar24 = puVar42 + 3;
      *puVar42 = iVar35 + 1 + uVar30;
    }
    puVar42 = puVar24;
    if (local_150 == 1) {
      uVar27 = 0xffffffff;
      if (bVar15) {
        if ((uVar37 < 0x80) || (bVar49)) {
          uVar27 = uVar20;
          if (uVar37 < 0x100) {
            uVar27 = (ulong)*(byte *)(lVar19 + uVar20);
          }
        }
        else {
          puVar29 = &_pcre2_dummy_ucd_record_32;
          if (uVar37 < 0x110000) {
            puVar29 = &_pcre2_ucd_records_32 +
                      (ulong)*(ushort *)
                              (&_pcre2_ucd_stage2_32 +
                              (long)(int)((uint)*(ushort *)
                                                 (&_pcre2_ucd_stage1_32 + (long)iVar25 * 2) * 0x80 +
                                         (uVar37 & 0x7f)) * 2) * 0xc;
          }
          uVar27 = (ulong)(*(int *)(puVar29 + 4) + uVar37);
        }
      }
      uVar18 = (uint)uVar31;
      if ((uVar37 == local_158 || local_158 == (uint)uVar27) == uVar18 < 0x3b) {
        if ((0 < (int)uVar39) && ((uVar18 == 0x2b || (uVar18 == 0x45)))) {
          uVar26 = (ulong)((int)uVar26 - 1);
          puVar24 = puVar24 + -3;
        }
        if (iVar11 <= iVar45) goto LAB_00100358;
        *puVar21 = uVar30;
        iVar34 = iVar34 + 1;
        puVar21[1] = uVar39 + 1;
        puVar42 = puVar24;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        iVar34 = iVar34 + 1;
      }
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x32:
  case 0x33:
  case 0x39:
  case 0x4c:
  case 0x4d:
  case 0x53:
    uVar31 = (ulong)(iVar12 - 0xd);
    bVar15 = true;
LAB_0010096b:
    uVar39 = uVar18 + 1;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    uVar30 = iVar35 + 1 + uVar30;
    puVar42[1] = 0;
    puVar24 = puVar42 + 3;
    *puVar42 = uVar30;
    if (local_150 == 1) {
      uVar27 = 0xffffffff;
      if (bVar15) {
        if ((uVar37 < 0x80) || (bVar49)) {
          uVar27 = uVar20;
          if (uVar37 < 0x100) {
            uVar27 = (ulong)*(byte *)(lVar19 + uVar20);
          }
        }
        else {
          puVar29 = &_pcre2_dummy_ucd_record_32;
          if (uVar37 < 0x110000) {
            puVar29 = &_pcre2_ucd_records_32 +
                      (ulong)*(ushort *)
                              (&_pcre2_ucd_stage2_32 +
                              (long)(int)((uint)*(ushort *)
                                                 (&_pcre2_ucd_stage1_32 + (long)iVar25 * 2) * 0x80 +
                                         (uVar37 & 0x7f)) * 2) * 0xc;
          }
          uVar27 = (ulong)(*(int *)(puVar29 + 4) + uVar37);
        }
      }
      uVar18 = (uint)uVar31;
      if ((uVar37 == local_158 || local_158 == (uint)uVar27) == uVar18 < 0x3b) {
        if ((uVar18 != 0x2c) && (uVar18 != 0x46)) {
          uVar26 = (ulong)uVar39;
          puVar42 = puVar24;
        }
        if (iVar11 <= iVar45) goto LAB_00100358;
        *puVar21 = uVar30;
        iVar34 = iVar34 + 1;
        puVar21[1] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        iVar34 = iVar34 + 1;
        uVar26 = (ulong)uVar39;
        puVar42 = puVar24;
      }
    }
    else {
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)uVar39;
      puVar42 = puVar24;
    }
    break;
  case 0x34:
  case 0x35:
  case 0x3a:
  case 0x4e:
  case 0x4f:
  case 0x54:
    uVar31 = (ulong)(iVar12 - 0xd);
    bVar15 = true;
LAB_00100bd8:
    uVar39 = uVar18 + 1;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    uVar36 = iVar35 + 2 + uVar30;
    puVar42[1] = 0;
    puVar41 = puVar42 + 3;
    *puVar42 = uVar36;
    uVar18 = puVar24[1];
    if (local_150 == 1) {
      uVar40 = 0xffffffff;
      if (bVar15) {
        if ((uVar37 < 0x80) || (bVar49)) {
          uVar40 = uVar37;
          if (uVar37 < 0x100) {
            uVar40 = (uint)*(byte *)(lVar19 + uVar20);
          }
        }
        else {
          puVar29 = &_pcre2_dummy_ucd_record_32;
          if (uVar37 < 0x110000) {
            puVar29 = &_pcre2_ucd_records_32 +
                      (ulong)*(ushort *)
                              (&_pcre2_ucd_stage2_32 +
                              (long)(int)((uint)*(ushort *)
                                                 (&_pcre2_ucd_stage1_32 + (long)iVar25 * 2) * 0x80 +
                                         (uVar37 & 0x7f)) * 2) * 0xc;
          }
          uVar40 = *(int *)(puVar29 + 4) + uVar37;
        }
      }
      uVar47 = (uint)uVar31;
      if ((uVar37 == local_158 || local_158 == uVar40) == uVar47 < 0x3b) {
        if ((uVar47 != 0x2d) && (uVar47 != 0x47)) {
          uVar26 = (ulong)uVar39;
          puVar42 = puVar41;
        }
        if ((int)(uVar18 + 1) < (int)puVar23[1]) {
          if (iVar11 <= iVar45) goto LAB_00100358;
          *puVar21 = uVar30;
          iVar34 = iVar34 + 1;
          puVar21[1] = uVar18 + 1;
          puVar44 = puVar21 + 3;
          iVar45 = iVar45 + 1;
        }
        else {
          if (iVar11 <= iVar45) goto LAB_00100358;
          *puVar21 = uVar36;
          iVar34 = iVar34 + 1;
          puVar21[1] = 0;
          puVar44 = puVar21 + 3;
          iVar45 = iVar45 + 1;
        }
      }
      else {
        iVar34 = iVar34 + 1;
        uVar26 = (ulong)uVar39;
        puVar42 = puVar41;
      }
    }
    else {
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)uVar39;
      puVar42 = puVar41;
    }
    break;
  case 0x36:
  case 0x50:
    uVar31 = (ulong)(iVar12 - 0xd);
    uVar18 = puVar24[1];
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if ((uVar37 < 0x80) || (bVar49)) {
      uVar39 = uVar37;
      if (uVar37 < 0x100) {
        uVar39 = (uint)*(byte *)(lVar19 + uVar20);
      }
    }
    else {
      puVar29 = &_pcre2_dummy_ucd_record_32;
      if (uVar37 < 0x110000) {
        puVar29 = &_pcre2_ucd_records_32 +
                  (ulong)*(ushort *)
                          (&_pcre2_ucd_stage2_32 +
                          (long)(int)((uint)*(ushort *)(&_pcre2_ucd_stage1_32 + (long)iVar25 * 2) *
                                      0x80 + (uVar37 & 0x7f)) * 2) * 0xc;
      }
      uVar39 = *(int *)(puVar29 + 4) + uVar37;
    }
LAB_0010233d:
    if ((uVar37 == local_158 || local_158 == uVar39) == (uint)uVar31 < 0x3b) {
      if ((int)(uVar18 + 1) < (int)puVar23[1]) {
        if (iVar11 <= iVar45) goto LAB_00100358;
        *puVar21 = uVar30;
        iVar34 = iVar34 + 1;
        puVar21[1] = uVar18 + 1;
        local_150 = 1;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        if (iVar11 <= iVar45) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        *puVar21 = iVar35 + 2 + uVar30;
        puVar21[1] = 0;
        local_150 = 1;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
    }
    else {
      local_150 = 1;
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x55:
  case 0x56:
  case 0x5e:
    uVar39 = uVar18 + 1;
    uVar31 = (ulong)uVar39;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar42[1] = 0;
    puVar24 = puVar42 + 3;
    *puVar42 = uVar30 + 2;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      puVar42 = puVar24;
      uVar26 = uVar31;
      break;
    }
    if (uVar37 == 0xc) {
      puVar23 = *(uint **)(param_1 + 0x28);
      if ((local_140 + 1 < puVar23) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (local_158 < 0x100) {
          iVar17 = *(int *)(param_1 + 0x74);
          if (iVar17 != 0) goto LAB_001051fe;
LAB_00105176:
          if ((local_140 <= puVar23 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_140 == *(uint *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar34 = iVar34 + 1;
              puVar42 = puVar24;
              uVar26 = uVar31;
              break;
            }
            if (local_140[1] == *(uint *)(param_1 + 0x84)) {
              iVar34 = iVar34 + 1;
              puVar42 = puVar24;
              uVar26 = uVar31;
              break;
            }
          }
        }
      }
      else {
        iVar17 = *(int *)(param_1 + 0x74);
        if (iVar17 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(uint *)(param_1 + 0x80) == local_158)) {
            iVar34 = iVar34 + 1;
            local_f4 = 1;
            puVar42 = puVar24;
            uVar26 = uVar31;
            uVar43 = 1;
            break;
          }
          if (local_158 < 0x100) goto LAB_00105176;
        }
        else if (local_158 < 0x100) {
LAB_001051fe:
          if ((local_140 < puVar23) &&
             (iVar17 = _pcre2_is_newline_32(local_140,iVar17,puVar23,param_1 + 0x78,bVar48),
             iVar17 != 0)) {
            iVar34 = iVar34 + 1;
            uVar26 = (ulong)uVar39;
            puVar42 = puVar24;
            break;
          }
        }
      }
    }
    else {
      if (0xff < local_158) {
        if (uVar37 != 7) {
          if ((uVar37 & 0xfffffffd) == 9) {
            iVar34 = iVar34 + 1;
            puVar42 = puVar24;
            uVar26 = uVar31;
            break;
          }
          goto LAB_00103f85;
        }
        if (0xff < local_158) {
          iVar34 = iVar34 + 1;
          puVar42 = puVar24;
          uVar26 = uVar31;
          break;
        }
      }
      if ((*(byte *)(lVar2 + (ulong)local_158) & toptable1[uVar20]) == toptable2[uVar20]) {
        iVar34 = iVar34 + 1;
        puVar42 = puVar24;
        uVar26 = uVar31;
        break;
      }
    }
LAB_00103f85:
    if (iVar12 != 0x5e) {
      puVar42 = puVar24;
      uVar26 = (ulong)uVar39;
    }
    if (iVar11 <= iVar45) goto LAB_00100358;
    *puVar21 = uVar30;
    iVar34 = iVar34 + 1;
    puVar21[1] = 0;
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    break;
  case 0x57:
  case 0x58:
  case 0x5f:
    uVar39 = puVar24[1];
    puVar24 = puVar42;
    if (0 < (int)uVar39) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar24 = puVar42 + 3;
      *puVar42 = uVar30 + 2;
    }
    puVar42 = puVar24;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (uVar37 == 0xc) {
      puVar23 = *(uint **)(param_1 + 0x28);
      if ((local_140 + 1 < puVar23) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (local_158 < 0x100) {
          iVar17 = *(int *)(param_1 + 0x74);
          if (iVar17 != 0) goto LAB_0010529e;
LAB_00104a86:
          if ((local_140 <= puVar23 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_140 == *(uint *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar34 = iVar34 + 1;
              break;
            }
            if (local_140[1] == *(uint *)(param_1 + 0x84)) {
              iVar34 = iVar34 + 1;
              break;
            }
          }
        }
      }
      else {
        iVar17 = *(int *)(param_1 + 0x74);
        if (iVar17 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(uint *)(param_1 + 0x80) == local_158)) {
            iVar34 = iVar34 + 1;
            local_f4 = 1;
            uVar43 = 1;
            break;
          }
          if (local_158 < 0x100) goto LAB_00104a86;
        }
        else if (local_158 < 0x100) {
LAB_0010529e:
          if ((local_140 < puVar23) &&
             (iVar17 = _pcre2_is_newline_32(local_140,iVar17,puVar23,param_1 + 0x78,bVar48),
             iVar17 != 0)) {
            iVar34 = iVar34 + 1;
            break;
          }
        }
      }
    }
    else {
      if (0xff < local_158) {
        if (uVar37 != 7) {
          if ((uVar37 & 0xfffffffd) == 9) {
            iVar34 = iVar34 + 1;
            break;
          }
          goto LAB_00104116;
        }
        if (0xff < local_158) {
          iVar34 = iVar34 + 1;
          break;
        }
      }
      if ((*(byte *)(lVar2 + (ulong)local_158) & toptable1[uVar20]) == toptable2[uVar20]) {
        iVar34 = iVar34 + 1;
        break;
      }
    }
LAB_00104116:
    if ((0 < (int)uVar39) && (iVar12 == 0x5f)) {
      uVar26 = (ulong)((int)uVar26 - 1);
      puVar24 = puVar24 + -3;
    }
    if (iVar11 <= iVar45) goto LAB_00100358;
    *puVar21 = uVar30;
    iVar34 = iVar34 + 1;
    puVar21[1] = uVar39 + 1;
    puVar42 = puVar24;
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    break;
  case 0x59:
  case 0x5a:
  case 0x60:
    uVar39 = uVar18 + 1;
    uVar31 = (ulong)uVar39;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar24 = puVar42 + 3;
    puVar42[1] = 0;
    *puVar42 = uVar30 + 2;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      puVar42 = puVar24;
      uVar26 = uVar31;
      break;
    }
    if (uVar37 == 0xc) {
      puVar23 = *(uint **)(param_1 + 0x28);
      if ((local_140 + 1 < puVar23) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (local_158 < 0x100) {
          iVar17 = *(int *)(param_1 + 0x74);
          if (iVar17 != 0) goto LAB_001054be;
LAB_001053bf:
          if ((local_140 <= puVar23 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_140 == *(uint *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar34 = iVar34 + 1;
              puVar42 = puVar24;
              uVar26 = uVar31;
              break;
            }
            if (local_140[1] == *(uint *)(param_1 + 0x84)) {
              iVar34 = iVar34 + 1;
              puVar42 = puVar24;
              uVar26 = uVar31;
              break;
            }
          }
        }
      }
      else {
        iVar17 = *(int *)(param_1 + 0x74);
        if (iVar17 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(uint *)(param_1 + 0x80) == local_158)) {
            iVar34 = iVar34 + 1;
            local_f4 = 1;
            puVar42 = puVar24;
            uVar26 = uVar31;
            uVar43 = 1;
            break;
          }
          if (local_158 < 0x100) goto LAB_001053bf;
        }
        else if (local_158 < 0x100) {
LAB_001054be:
          if ((local_140 < puVar23) &&
             (iVar17 = _pcre2_is_newline_32(local_140,iVar17,puVar23,param_1 + 0x78,bVar48),
             iVar17 != 0)) {
            iVar34 = iVar34 + 1;
            puVar42 = puVar24;
            uVar26 = (ulong)uVar39;
            break;
          }
        }
      }
    }
    else {
      if (0xff < local_158) {
        if (uVar37 != 7) {
          if ((uVar37 & 0xfffffffd) == 9) {
            iVar34 = iVar34 + 1;
            puVar42 = puVar24;
            uVar26 = uVar31;
            break;
          }
          goto LAB_00103a2e;
        }
        if (0xff < local_158) {
          iVar34 = iVar34 + 1;
          puVar42 = puVar24;
          uVar26 = uVar31;
          break;
        }
      }
      if ((*(byte *)(lVar2 + (ulong)local_158) & toptable1[uVar20]) == toptable2[uVar20]) {
        iVar34 = iVar34 + 1;
        puVar42 = puVar24;
        uVar26 = uVar31;
        break;
      }
    }
LAB_00103a2e:
    if (iVar12 != 0x60) {
      puVar42 = puVar24;
      uVar26 = (ulong)uVar39;
    }
    if (iVar11 <= iVar45) goto LAB_00100358;
    *puVar21 = uVar30 + 2;
    iVar34 = iVar34 + 1;
    puVar21[1] = 0;
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    break;
  case 0x5b:
  case 0x5c:
  case 0x61:
    uVar39 = uVar18 + 1;
    uVar31 = (ulong)uVar39;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar41 = puVar42 + 3;
    puVar42[1] = 0;
    *puVar42 = uVar30 + 3;
    uVar18 = puVar24[1];
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      puVar42 = puVar41;
      uVar26 = uVar31;
      break;
    }
    if (uVar37 == 0xc) {
      puVar24 = *(uint **)(param_1 + 0x28);
      if ((local_140 + 1 < puVar24) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (local_158 < 0x100) {
          iVar17 = *(int *)(param_1 + 0x74);
          if (iVar17 != 0) goto LAB_00104971;
LAB_001048bb:
          if ((local_140 <= puVar24 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_140 == *(uint *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar34 = iVar34 + 1;
              puVar42 = puVar41;
              uVar26 = uVar31;
              break;
            }
            if (local_140[1] == *(uint *)(param_1 + 0x84)) {
              iVar34 = iVar34 + 1;
              puVar42 = puVar41;
              uVar26 = uVar31;
              break;
            }
          }
        }
      }
      else {
        iVar17 = *(int *)(param_1 + 0x74);
        if (iVar17 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(uint *)(param_1 + 0x80) == local_158)) {
            iVar34 = iVar34 + 1;
            local_f4 = 1;
            puVar42 = puVar41;
            uVar26 = uVar31;
            uVar43 = 1;
            break;
          }
          if (local_158 < 0x100) goto LAB_001048bb;
        }
        else if (local_158 < 0x100) {
LAB_00104971:
          if ((local_140 < puVar24) &&
             (iVar17 = _pcre2_is_newline_32(local_140,iVar17,puVar24,param_1 + 0x78,bVar48),
             iVar17 != 0)) {
            iVar34 = iVar34 + 1;
            puVar42 = puVar41;
            uVar26 = (ulong)uVar39;
            break;
          }
        }
      }
    }
    else {
      if (0xff < local_158) {
        if (uVar37 != 7) {
          if ((uVar37 & 0xfffffffd) == 9) {
            iVar34 = iVar34 + 1;
            puVar42 = puVar41;
            uVar26 = uVar31;
            break;
          }
          goto LAB_00103bf3;
        }
        if (0xff < local_158) {
          iVar34 = iVar34 + 1;
          puVar42 = puVar41;
          uVar26 = uVar31;
          break;
        }
      }
      if ((*(byte *)(lVar2 + (ulong)local_158) & toptable1[uVar20]) == toptable2[uVar20]) {
        iVar34 = iVar34 + 1;
        puVar42 = puVar41;
        uVar26 = uVar31;
        break;
      }
    }
LAB_00103bf3:
    if (iVar12 != 0x61) {
      uVar26 = (ulong)uVar39;
      puVar42 = puVar41;
    }
    if ((int)(uVar18 + 1) < (int)puVar23[1]) {
      if (iVar11 <= iVar45) goto LAB_00100358;
      *puVar21 = uVar30;
      iVar34 = iVar34 + 1;
      puVar21[1] = uVar18 + 1;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      puVar21[1] = 0;
      *puVar21 = uVar30 + 3;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    break;
  case 0x5d:
    uVar18 = puVar24[1];
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (uVar37 == 0xc) {
      puVar24 = *(uint **)(param_1 + 0x28);
      if ((local_140 + 1 < puVar24) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (local_158 < 0x100) {
          iVar17 = *(int *)(param_1 + 0x74);
          if (iVar17 != 0) goto LAB_00105733;
LAB_00105698:
          if ((local_140 <= puVar24 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_140 == *(uint *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar34 = iVar34 + 1;
              break;
            }
            if (local_140[1] == *(uint *)(param_1 + 0x84)) {
              iVar34 = iVar34 + 1;
              break;
            }
          }
        }
      }
      else {
        iVar17 = *(int *)(param_1 + 0x74);
        if (iVar17 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(uint *)(param_1 + 0x80) == local_158)) {
            iVar34 = iVar34 + 1;
            local_f4 = 1;
            uVar43 = 1;
            break;
          }
          if (local_158 < 0x100) goto LAB_00105698;
        }
        else if (local_158 < 0x100) {
LAB_00105733:
          if ((local_140 < puVar24) &&
             (iVar17 = _pcre2_is_newline_32(local_140,iVar17,puVar24,param_1 + 0x78,bVar48),
             iVar17 != 0)) {
            iVar34 = iVar34 + 1;
            break;
          }
        }
      }
    }
    else {
      if (0xff < local_158) {
        if (uVar37 != 7) {
          if ((uVar37 & 0xfffffffd) == 9) {
            iVar34 = iVar34 + 1;
            break;
          }
          goto LAB_001038d8;
        }
        if (0xff < local_158) {
          iVar34 = iVar34 + 1;
          break;
        }
      }
      if ((*(byte *)(lVar2 + (ulong)local_158) & toptable1[uVar20]) == toptable2[uVar20]) {
        iVar34 = iVar34 + 1;
        break;
      }
    }
LAB_001038d8:
    if ((int)(uVar18 + 1) < (int)puVar23[1]) {
      if (iVar11 <= iVar45) goto LAB_00100358;
      *puVar21 = uVar30;
      iVar34 = iVar34 + 1;
      puVar21[1] = uVar18 + 1;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar21 = uVar30 + 3;
      puVar21[1] = 0;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    break;
  case 0x6e:
  case 0x6f:
  case 0x70:
    if (iVar12 == 0x70) {
      puVar41 = puVar23 + puVar23[1];
      if (local_150 != 1) goto LAB_00101202;
      uVar37 = _pcre2_xclass_32(local_158,puVar23 + 2,bVar48);
LAB_00104280:
      uVar39 = (uint)((long)puVar41 - lVar6 >> 2);
      switch(*puVar41) {
      case 0x62:
      case 99:
      case 0x6a:
        goto switchD_001042ae_caseD_62;
      case 100:
      case 0x65:
      case 0x6b:
        uVar36 = puVar24[1];
        if ((int)uVar36 < 1) {
          if (uVar37 != 0) {
LAB_001061e5:
            puVar24 = puVar42;
            uVar37 = uVar18;
            goto LAB_001042f0;
          }
          goto LAB_00105ba8;
        }
        if (iVar11 <= (int)uVar18) goto LAB_00100358;
        puVar42[1] = 0;
        *puVar42 = uVar39 + 1;
        if (uVar37 != 0) {
          puVar24 = puVar42 + 3;
          uVar37 = uVar18 + 1;
          if (*puVar41 == 0x6b) goto LAB_001061e5;
LAB_001042f0:
          if (iVar11 <= iVar45) goto LAB_00100358;
          *puVar21 = uVar30;
          iVar34 = iVar34 + 1;
          puVar44 = puVar21 + 3;
          puVar21[1] = uVar36 + 1;
          uVar26 = (ulong)uVar37;
          puVar42 = puVar24;
          iVar45 = iVar45 + 1;
          goto LAB_001004ce;
        }
        goto LAB_00101fa0;
      case 0x66:
      case 0x67:
      case 0x6c:
        goto switchD_001042ae_caseD_66;
      case 0x68:
      case 0x69:
      case 0x6d:
        goto switchD_001042ae_caseD_68;
      default:
        if (uVar37 == 0) {
          iVar34 = iVar34 + 1;
        }
        else {
          if (iVar11 <= iVar45) goto LAB_00100358;
          *puVar21 = uVar39;
          iVar34 = iVar34 + 1;
          puVar21[1] = 0;
          puVar44 = puVar21 + 3;
          iVar45 = iVar45 + 1;
        }
        goto LAB_001004ce;
      }
    }
    puVar41 = puVar23 + 9;
    if (local_150 == 1) {
      if (local_158 < 0x100) {
        uVar37 = *(byte *)((long)puVar23 + (ulong)((local_158 >> 3) + 4)) >> ((byte)local_158 & 7) &
                 1;
      }
      else {
        uVar37 = (uint)(iVar12 == 0x6f);
      }
      goto LAB_00104280;
    }
LAB_00101202:
    uVar39 = (uint)((long)puVar41 - lVar6 >> 2);
    switch(*puVar41) {
    case 0x62:
    case 99:
    case 0x6a:
      uVar37 = 0;
switchD_001042ae_caseD_62:
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      *puVar42 = uVar39 + 1;
      if (uVar37 == 0) {
        iVar34 = iVar34 + 1;
        uVar26 = (ulong)(uVar18 + 1);
        puVar42 = puVar42 + 3;
      }
      else {
        if (*puVar41 != 0x6a) {
          uVar26 = (ulong)(uVar18 + 1);
          puVar42 = puVar42 + 3;
        }
        if (iVar11 <= iVar45) goto LAB_00100358;
        *puVar21 = uVar30;
        iVar34 = iVar34 + 1;
        puVar21[1] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      break;
    case 100:
    case 0x65:
    case 0x6b:
      if ((int)puVar24[1] < 1) {
LAB_00105ba8:
        iVar34 = iVar34 + 1;
        break;
      }
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      *puVar42 = uVar39 + 1;
LAB_00101fa0:
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)(uVar18 + 1);
      puVar42 = puVar42 + 3;
      break;
    case 0x66:
    case 0x67:
    case 0x6c:
      uVar37 = 0;
switchD_001042ae_caseD_66:
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      *puVar42 = uVar39 + 1;
      if (uVar37 == 0) {
        iVar34 = iVar34 + 1;
        uVar26 = (ulong)(uVar18 + 1);
        puVar42 = puVar42 + 3;
      }
      else {
        if (*puVar41 != 0x6c) {
          uVar26 = (ulong)(uVar18 + 1);
          puVar42 = puVar42 + 3;
        }
        if (iVar11 <= iVar45) goto LAB_00100358;
        *puVar21 = uVar39 + 1;
        iVar34 = iVar34 + 1;
        puVar21[1] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      break;
    case 0x68:
    case 0x69:
    case 0x6d:
      uVar37 = 0;
switchD_001042ae_caseD_68:
      uVar36 = puVar24[1];
      puVar24 = puVar42;
      if ((int)puVar41[1] <= (int)uVar36) {
        if (iVar11 <= (int)uVar18) goto LAB_00100358;
        puVar42[1] = 0;
        uVar26 = (ulong)(uVar18 + 1);
        puVar24 = puVar42 + 3;
        *puVar42 = uVar39 + 3;
      }
      if (uVar37 == 0) {
        iVar34 = iVar34 + 1;
        puVar42 = puVar24;
      }
      else {
        if ((*puVar41 == 0x6d) && ((int)puVar41[1] <= (int)uVar36)) {
          uVar26 = (ulong)((int)uVar26 - 1);
          puVar24 = puVar24 + -3;
        }
        puVar42 = puVar24;
        if ((puVar41[2] == 0) || ((int)(uVar36 + 1) < (int)puVar41[2])) {
          if (iVar11 <= iVar45) goto LAB_00100358;
          *puVar21 = uVar30;
          iVar34 = iVar34 + 1;
          puVar21[1] = uVar36 + 1;
          puVar44 = puVar21 + 3;
          iVar45 = iVar45 + 1;
        }
        else {
          if (iVar11 <= iVar45) goto LAB_00100358;
          iVar34 = iVar34 + 1;
          *puVar21 = uVar39 + 3;
          puVar21[1] = 0;
          puVar44 = puVar21 + 3;
          iVar45 = iVar45 + 1;
        }
      }
      break;
    default:
      local_150 = 0;
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x75:
    iVar35 = 0;
    local_70 = local_118;
    lVar32 = lVar6 + (ulong)puVar23[1] * 4;
    if (*(long *)(param_1 + 0x18) != lVar32) {
      iVar35 = *(int *)(lVar32 + 8);
    }
    uVar18 = *(uint *)(local_118 + 0xc);
    if (uVar18 < 3000) {
      iVar17 = more_workspace(&local_70,2000,param_1);
      if (iVar17 != 0) goto LAB_00100628;
      uVar18 = *(uint *)(local_70 + 0xc);
    }
    local_118 = local_70;
    *(uint *)(local_70 + 0xc) = uVar18 - 3000;
    lVar4 = local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar18) * 4;
    plVar3 = *(long **)(param_1 + 0xb0);
    for (plVar10 = plVar3; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if ((((int)plVar10[3] == iVar35) && ((uint *)plVar10[1] == local_140)) &&
         (plVar10[2] == *(long *)(param_1 + 0x38))) {
        iVar17 = -0x34;
        goto LAB_00100628;
      }
    }
    *(long ***)(param_1 + 0xb0) = &local_68;
    puStack_60 = local_140;
    local_68 = plVar3;
    local_58 = *(long *)(param_1 + 0x38);
    local_50 = iVar35;
    iVar17 = internal_dfa_match(param_1,lVar32,local_140,(long)local_140 - (long)puVar5 >> 2,lVar4,
                                1000,lVar4 + 8000,1000,iVar1,local_70);
    *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 3000;
    *(long **)(param_1 + 0xb0) = local_68;
    if (iVar17 == 0) {
      iVar17 = -0x27;
      goto LAB_00100628;
    }
    if (iVar17 < 1) {
      if (iVar17 != -1) goto LAB_00100628;
    }
    else {
      lVar32 = (long)(iVar17 * 2 + -2);
      puVar24 = puVar42;
      do {
        lVar28 = *(long *)(lVar4 + 8 + lVar32 * 8) - *(long *)(lVar4 + lVar32 * 8);
        if (lVar28 == 0) {
          if (iVar11 <= (int)uVar26) goto LAB_00103b95;
          *puVar24 = uVar30 + 2;
          uVar26 = (ulong)((int)uVar26 + 1);
          puVar42 = puVar24 + 3;
          puVar24[1] = 0;
        }
        else {
          if (iVar11 <= iVar45) goto LAB_00103b95;
          *puVar21 = -uVar30 - 2;
          puVar21[1] = 0;
          puVar21[2] = (int)lVar28 - 1;
          puVar42 = puVar24;
          puVar21 = puVar21 + 3;
          iVar45 = iVar45 + 1;
        }
        lVar32 = lVar32 + -2;
        puVar24 = puVar42;
      } while (-1 < (int)lVar32);
    }
    iVar34 = iVar34 + 1;
    puVar44 = puVar21;
    break;
  case 0x76:
  case 0x77:
    iVar17 = do_callout_dfa(puVar23,param_5,local_120,local_140,param_1,0,&local_70);
    if (iVar17 < 0) goto LAB_00100628;
    puVar21 = puVar42;
    if (iVar17 == 0) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar21 = puVar42 + 3;
      *puVar42 = uVar30 + (uint)local_70;
    }
    iVar34 = iVar34 + 1;
    puVar42 = puVar21;
    break;
  case 0x78:
    do {
      puVar23 = puVar23 + puVar23[1];
    } while (*puVar23 == 0x78);
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    iVar34 = iVar34 + 1;
    puVar42[1] = 0;
    *puVar42 = (uint)((long)puVar23 - lVar6 >> 2);
    puVar42 = puVar42 + 3;
    uVar26 = (ulong)(uVar18 + 1);
    break;
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
    if (param_2 != puVar23) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      *puVar42 = uVar30 + 2;
      if (iVar12 == 0x79) {
        iVar34 = iVar34 + 1;
        puVar42 = puVar42 + 3;
        uVar26 = (ulong)(uVar18 + 1);
      }
      else {
        if (iVar11 <= (int)(uVar18 + 1)) goto LAB_00100358;
        uVar37 = puVar23[1];
        iVar34 = iVar34 + 1;
        puVar42[4] = 0;
        puVar42[3] = uVar30 - uVar37;
        puVar42 = puVar42 + 6;
        uVar26 = (ulong)(uVar18 + 2);
      }
      break;
    }
    if (local_140 <= local_120) {
      if ((*(uint *)(param_1 + 0x6c) & 4) != 0) {
        iVar34 = iVar34 + 1;
        break;
      }
      if (((*(uint *)(param_1 + 0x6c) & 8) != 0) &&
         (local_120 <= puVar5 + *(long *)(param_1 + 0x48))) {
        iVar34 = iVar34 + 1;
        break;
      }
    }
    if (iVar46 < 0) {
      iVar46 = 1;
      if (1 < param_6) goto LAB_00103748;
LAB_00104fe6:
      iVar46 = 0;
    }
    else {
      if (iVar46 != 0) {
        iVar46 = iVar46 + 1;
        if (iVar46 * 2 <= (int)param_6) {
          _pcre2_memmove32(param_5 + 2,param_5,(long)(iVar46 * 2 + -2) << 3);
          goto LAB_00103748;
        }
      }
      if ((int)(param_6 - 2) < 1) {
        if (param_6 != 2) goto LAB_00104fe6;
      }
      else {
        _pcre2_memmove32(param_5 + 2,param_5,(long)(int)(param_6 - 2) * 8);
      }
      iVar46 = 0;
LAB_00103748:
      *param_5 = (long)local_120 - (long)puVar5 >> 2;
      param_5[1] = (long)local_140 - (long)puVar5 >> 2;
    }
    iVar17 = iVar46;
    if ((*(byte *)(param_1 + 0x6c) & 0x80) != 0) goto LAB_00100628;
    iVar34 = iVar34 + 1;
    break;
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
    puVar21 = puVar23 + puVar23[1];
    local_70 = local_118;
    uVar30 = *(uint *)(local_118 + 0xc);
    if (uVar30 < 0x3ec) {
      iVar17 = more_workspace(&local_70,4,param_1);
      if (iVar17 != 0) goto LAB_00100628;
      uVar30 = *(uint *)(local_70 + 0xc);
    }
    local_118 = local_70;
    *(uint *)(local_70 + 0xc) = uVar30 - 0x3ec;
    lVar32 = local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar30) * 4;
    uVar30 = *puVar21;
    while (uVar30 == 0x78) {
      puVar21 = puVar21 + puVar21[1];
      uVar30 = *puVar21;
    }
    iVar17 = internal_dfa_match(param_1,puVar23,local_140,(long)local_140 - (long)puVar5 >> 2,lVar32
                                ,2,lVar32 + 0x10,1000,iVar1,local_70);
    *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 0x3ec;
    if (iVar17 < -1) goto LAB_00100628;
    puVar24 = puVar42;
    if ((iVar17 == -1) != ((iVar12 - 0x7fU & 0xfffffffd) == 0)) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      uVar26 = (ulong)(uVar18 + 1);
      puVar24 = puVar42 + 3;
      puVar42[1] = 0;
      *puVar42 = (uint)((long)puVar21 + (8 - lVar6) >> 2);
    }
    iVar34 = iVar34 + 1;
    puVar42 = puVar24;
    break;
  case 0x85:
    local_70 = local_118;
    uVar30 = *(uint *)(local_118 + 0xc);
    if (uVar30 < 0x3ec) {
      iVar17 = more_workspace(&local_70,4,param_1);
      if (iVar17 != 0) goto LAB_00100628;
      uVar30 = *(uint *)(local_70 + 0xc);
    }
    local_118 = local_70;
    *(uint *)(local_70 + 0xc) = uVar30 - 0x3ec;
    plVar3 = (long *)(local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar30) * 4);
    iVar17 = internal_dfa_match(param_1,puVar23,local_140,(long)local_140 - (long)puVar5 >> 2,plVar3
                                ,2,plVar3 + 2,1000,iVar1,local_70);
    *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 0x3ec;
    if (-1 < iVar17) {
      lVar32 = plVar3[1] - *plVar3;
      do {
        puVar23 = puVar23 + puVar23[1];
      } while (*puVar23 == 0x78);
      uVar30 = 0xffffffff;
      iVar17 = (int)((long)puVar23 - lVar6 >> 2);
      uVar37 = iVar17 + 2;
      if (*puVar23 - 0x7a < 2) {
        uVar30 = iVar17 - puVar23[1];
      }
      if (lVar32 == 0) {
        if ((int)uVar18 < iVar11) {
          *puVar42 = uVar37;
          iVar34 = iVar34 + 1;
          puVar42[1] = 0;
          puVar42 = puVar42 + 3;
          uVar26 = (ulong)(uVar18 + 1);
          break;
        }
      }
      else {
        iVar34 = iVar34 + 1;
        if ((iVar34 < (int)uVar18) || (iVar45 != 0)) {
          if (iVar45 < iVar11) {
            puVar21[1] = 0;
            uVar18 = (int)lVar32 - 1;
            *puVar21 = -uVar37;
            puVar21[2] = uVar18;
            if ((int)uVar30 < 0) {
              puVar44 = puVar21 + 3;
              iVar45 = iVar45 + 1;
            }
            else {
              if (iVar11 <= iVar45 + 1) goto LAB_00103b95;
              puVar21[5] = uVar18;
              puVar21[3] = -uVar30;
              puVar21[4] = 0;
              puVar44 = puVar21 + 6;
              iVar45 = iVar45 + 2;
            }
            break;
          }
        }
        else {
          local_140 = local_140 + lVar32;
          if (5 < iVar13) {
            *puVar21 = uVar37;
            puVar21[1] = 0;
            puVar44 = puVar21 + 3;
            if ((int)uVar30 < 0) {
              local_150 = 0;
              iVar45 = 1;
            }
            else {
              iVar34 = 0;
              local_150 = 0;
              *local_170 = uVar30;
              local_170[1] = 0;
              puVar42 = local_170 + 3;
              uVar26 = 1;
              iVar45 = 1;
            }
            break;
          }
        }
      }
      goto LAB_00103b95;
    }
    if (iVar17 != -1) goto LAB_00100628;
    iVar34 = iVar34 + 1;
    break;
  case 0x87:
  case 0x8c:
    do {
      iVar17 = (int)uVar26;
      uVar26 = (ulong)(iVar17 + 1);
      if (iVar11 <= iVar17) goto LAB_00100358;
      puVar42[1] = 0;
      puVar21 = puVar42 + 3;
      *puVar42 = (int)((long)puVar23 - lVar6 >> 2) + 2;
      puVar23 = puVar23 + puVar23[1];
      puVar42 = puVar21;
    } while (*puVar23 == 0x78);
    iVar34 = iVar34 + 1;
    break;
  case 0x88:
  case 0x8a:
  case 0x8d:
  case 0x8f:
  case 0x99:
    local_70 = local_118;
    uVar30 = *(uint *)(local_118 + 0xc);
    if (uVar30 < 0x3ec) {
      iVar17 = more_workspace(&local_70,4,param_1);
      if (iVar17 != 0) goto LAB_00100628;
      uVar30 = *(uint *)(local_70 + 0xc);
    }
    local_118 = local_70;
    *(uint *)(local_70 + 0xc) = uVar30 - 0x3ec;
    plVar3 = (long *)(local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar30) * 4);
    if (iVar12 == 0x99) {
      puVar23 = puVar23 + 1;
    }
    lVar32 = 0;
    puVar24 = local_140;
    while (iVar17 = internal_dfa_match(param_1,puVar23,puVar24,(long)local_140 - (long)puVar5 >> 2,
                                       plVar3,2,plVar3 + 2,1000,iVar1,local_118), -1 < iVar17) {
      if (plVar3[1] - *plVar3 == 0) goto LAB_00102adc;
      puVar24 = puVar24 + (plVar3[1] - *plVar3);
      lVar32 = lVar32 + 1;
    }
    if (iVar17 != -1) goto LAB_00100628;
LAB_00102adc:
    iVar34 = iVar34 + 1;
    *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 0x3ec;
    if ((lVar32 != 0) || (iVar12 == 0x99)) {
      do {
        puVar23 = puVar23 + puVar23[1];
      } while (*puVar23 == 0x78);
      uVar30 = (int)((long)puVar23 - lVar6 >> 2) + 2;
      if ((iVar45 == 0) && ((int)uVar18 <= iVar34)) {
        if (iVar13 < 6) goto LAB_00100358;
        *puVar21 = uVar30;
        puVar21[1] = 0;
        local_150 = 0;
        puVar44 = puVar21 + 3;
        iVar45 = 1;
        local_140 = puVar24;
      }
      else {
        if (iVar11 <= iVar45) goto LAB_00100358;
        *puVar21 = -uVar30;
        puVar21[1] = 0;
        puVar21[2] = (int)((long)puVar24 - (long)local_140 >> 2) - 1;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
    }
    break;
  case 0x89:
  case 0x8e:
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar42[1] = 0;
    *puVar42 = (int)((long)(int)uVar30 * 4 >> 2) + 3;
    puVar23 = puVar23 + puVar23[1];
    if (*puVar23 == 0x78) {
      uVar30 = uVar18 + 2;
      if (iVar11 <= (int)(uVar18 + 1)) goto LAB_00100358;
      puVar42 = puVar42 + 3;
      while( true ) {
        puVar42[1] = 0;
        *puVar42 = (int)((long)puVar23 - lVar6 >> 2) + 2;
        puVar23 = puVar23 + puVar23[1];
        if (*puVar23 != 0x78) break;
        uVar30 = uVar30 + 1;
        puVar42 = puVar42 + 3;
        if (iVar11 + 1U == uVar30) goto LAB_00100358;
      }
      iVar34 = iVar34 + 1;
      puVar42 = puVar42 + 3;
      uVar26 = (ulong)uVar30;
    }
    else {
      iVar34 = iVar34 + 1;
      puVar42 = puVar42 + 3;
      uVar26 = (ulong)(uVar18 + 1);
    }
    break;
  case 0x8b:
  case 0x90:
    uVar37 = puVar23[1];
    uVar39 = puVar23[2];
    if (uVar39 - 0x76 < 2) {
      iVar17 = do_callout_dfa(puVar23,param_5,local_120,local_140,param_1,2,&local_70);
      if (iVar17 < 0) goto LAB_00100628;
      if (iVar17 != 0) {
        iVar34 = iVar34 + 1;
        break;
      }
      puVar23 = puVar23 + local_70;
      uVar39 = puVar23[2];
    }
    switch(uVar39) {
    case 0x91:
    case 0x92:
    case 0x94:
switchD_0010174d_caseD_91:
      iVar17 = -0x28;
      goto LAB_00100628;
    case 0x93:
      if (puVar23[3] != 0xffff) goto switchD_0010174d_caseD_91;
      if (*(long *)(param_1 + 0xb0) == 0) {
        if (iVar11 <= (int)uVar18) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        uVar26 = (ulong)(uVar18 + 1);
        puVar42[1] = 0;
        *puVar42 = uVar30 + 2 + uVar37;
        puVar42 = puVar42 + 3;
      }
      else {
        if (iVar11 <= (int)uVar18) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        uVar26 = (ulong)(uVar18 + 1);
        *puVar42 = uVar30 + 4;
        puVar42[1] = 0;
        puVar42 = puVar42 + 3;
      }
      break;
    case 0x95:
    case 0xa3:
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)(uVar18 + 1);
      puVar42[1] = 0;
      *puVar42 = uVar30 + 2 + uVar37;
      puVar42 = puVar42 + 3;
      break;
    case 0x96:
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      uVar26 = (ulong)(uVar18 + 1);
      *puVar42 = uVar30 + 3;
      puVar42[1] = 0;
      puVar42 = puVar42 + 3;
      break;
    default:
      puVar21 = puVar23 + 2 + puVar23[3];
      local_70 = local_118;
      uVar36 = *(uint *)(local_118 + 0xc);
      if (uVar36 < 0x3ec) {
        iVar17 = more_workspace(&local_70,4,param_1);
        if (iVar17 != 0) goto LAB_00100628;
        uVar36 = *(uint *)(local_70 + 0xc);
      }
      local_118 = local_70;
      *(uint *)(local_70 + 0xc) = uVar36 - 0x3ec;
      lVar32 = local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar36) * 4;
      uVar36 = *puVar21;
      while (uVar36 == 0x78) {
        puVar21 = puVar21 + puVar21[1];
        uVar36 = *puVar21;
      }
      iVar17 = internal_dfa_match(param_1,puVar23 + 2,local_140,(long)local_140 - (long)puVar5 >> 2,
                                  lVar32,2,lVar32 + 0x10,1000,iVar1,local_70);
      *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 0x3ec;
      if (iVar17 < -1) goto LAB_00100628;
      if ((iVar17 == -1) == ((uVar39 - 0x7f & 0xfffffffd) == 0)) {
        if (iVar11 <= (int)uVar18) goto LAB_00103b95;
        uVar37 = uVar30 + 2 + uVar37;
      }
      else {
        if (iVar11 <= (int)uVar18) {
LAB_00103b95:
          iVar17 = -0x2b;
          goto LAB_00100628;
        }
        uVar37 = (uint)((long)puVar21 + (8 - lVar6) >> 2);
      }
      *puVar42 = uVar37;
      iVar34 = iVar34 + 1;
      puVar42[1] = 0;
      puVar42 = puVar42 + 3;
      uVar26 = (ulong)(uVar18 + 1);
    }
    break;
  case 0x97:
  case 0x98:
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar42[1] = 0;
    *puVar42 = uVar30 + 1;
    puVar23 = puVar23 + (puVar23[2] + 1);
    uVar30 = *puVar23;
    while (uVar30 == 0x78) {
      puVar23 = puVar23 + puVar23[1];
      uVar30 = *puVar23;
    }
    if (iVar11 <= (int)(uVar18 + 1)) goto LAB_00100358;
    puVar42[4] = 0;
    iVar34 = iVar34 + 1;
    puVar42[3] = (int)((long)puVar23 - lVar6 >> 2) + 2;
    puVar42 = puVar42 + 6;
    uVar26 = (ulong)(uVar18 + 2);
    break;
  case 0xa3:
    local_c8 = local_c8 + 1;
    iVar34 = iVar34 + 1;
    break;
  case 0xa7:
    puVar23 = puVar23 + (puVar23[2] + 1);
    uVar30 = *puVar23;
    while (uVar30 == 0x78) {
      puVar23 = puVar23 + puVar23[1];
      uVar30 = *puVar23;
    }
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    iVar34 = iVar34 + 1;
    puVar42[1] = 0;
    *puVar42 = (int)((long)puVar23 - lVar6 >> 2) + 2;
    puVar42 = puVar42 + 3;
    uVar26 = (ulong)(uVar18 + 1);
    break;
  case 0xa9:
  case 0xaa:
switchD_0010068c_caseD_a9:
    iVar35 = (int)uVar31;
    if (puVar5 < local_140) {
      if (local_140 + -1 < *(uint **)(param_1 + 0x30)) {
        *(uint **)(param_1 + 0x30) = local_140 + -1;
      }
      uVar37 = local_140[-1];
      if (iVar35 - 0xa9U < 2) {
        puVar29 = &_pcre2_dummy_ucd_record_32;
        if (uVar37 < 0x110000) {
          puVar29 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar37 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar37 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        if ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar29[1] * 4) & 0xfffffffd) == 1) {
          bVar15 = true;
          if (local_150 == 1) {
            if (*(uint **)(param_1 + 0x38) <= local_140) {
              *(uint **)(param_1 + 0x38) = local_140 + 1;
            }
LAB_00104d55:
            bVar16 = 1;
            goto LAB_00102793;
          }
        }
        else {
          if ((puVar29[1] - 0xc & 0xfb) != 0) {
            if (local_150 == 1) {
              if (*(uint **)(param_1 + 0x38) <= local_140) {
                *(uint **)(param_1 + 0x38) = local_140 + 1;
              }
              goto LAB_00102791;
            }
            goto LAB_00102747;
          }
          bVar15 = true;
          if (local_150 == 1) {
            if (*(uint **)(param_1 + 0x38) <= local_140) {
              *(uint **)(param_1 + 0x38) = local_140 + 1;
            }
            goto LAB_00104d55;
          }
        }
      }
      else if (uVar37 < 0x100) {
        if ((*(byte *)(lVar2 + (ulong)uVar37) & 0x10) == 0) {
          if (local_150 != 1) goto LAB_00102747;
          if (*(uint **)(param_1 + 0x38) <= local_140) {
            *(uint **)(param_1 + 0x38) = local_140 + 1;
          }
LAB_00102772:
          bVar15 = false;
        }
        else {
          bVar15 = true;
          if (local_150 != 1) goto LAB_00101544;
          if (*(uint **)(param_1 + 0x38) <= local_140) {
            *(uint **)(param_1 + 0x38) = local_140 + 1;
          }
          bVar15 = true;
        }
        if (local_158 < 0x100) {
          bVar15 = (bool)(bVar15 ^ *(byte *)(lVar2 + (ulong)local_158) >> 4 & 1);
        }
      }
      else {
        if (local_150 == 1) {
          if (*(uint **)(param_1 + 0x38) <= local_140) {
            *(uint **)(param_1 + 0x38) = local_140 + 1;
          }
          goto LAB_00102772;
        }
LAB_00102747:
        bVar15 = false;
      }
    }
    else {
      if (local_150 != 1) goto LAB_00102747;
      if (*(uint **)(param_1 + 0x38) <= local_140) {
        *(uint **)(param_1 + 0x38) = local_140 + 1;
      }
      if (1 < iVar35 - 0xa9U) goto LAB_00102772;
LAB_00102791:
      bVar16 = 0;
LAB_00102793:
      puVar29 = &_pcre2_dummy_ucd_record_32;
      if (local_158 < 0x110000) {
        puVar29 = &_pcre2_ucd_records_32 +
                  (ulong)*(ushort *)
                          (&_pcre2_ucd_stage2_32 +
                          (long)(int)((uint)*(ushort *)(&_pcre2_ucd_stage1_32 + (long)iVar17 * 2) *
                                      0x80 + (local_158 & 0x7f)) * 2) * 0xc;
      }
      if ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar29[1] * 4) & 0xfffffffd) == 1) {
        bVar15 = (bool)(bVar16 ^ 1);
      }
      else {
        bVar15 = (bool)(bVar16 ^ (puVar29[1] - 0xc & 0xfb) == 0);
      }
    }
LAB_00101544:
    if ((iVar35 == 4 || iVar35 == 0xa9) == bVar15) {
      iVar34 = iVar34 + 1;
    }
    else {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      *puVar42 = uVar30 + 1;
      puVar42[1] = 0;
      puVar42 = puVar42 + 3;
      uVar26 = (ulong)(uVar18 + 1);
    }
    break;
  case 0xab:
  case 0xac:
    iVar17 = 0;
    goto LAB_00100628;
  case 0x181:
  case 0x182:
  case 0x18a:
    local_b0 = 0;
    goto LAB_00101478;
  case 0x183:
  case 0x184:
  case 0x18b:
    uVar39 = puVar24[1];
    puVar24 = puVar42;
    if (0 < (int)uVar39) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar24 = puVar42 + 3;
      *puVar42 = uVar30 + 4;
    }
    puVar42 = puVar24;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    pbVar38 = &_pcre2_dummy_ucd_record_32;
    if (local_158 < 0x110000) {
      pbVar38 = &_pcre2_ucd_records_32 +
                (ulong)*(ushort *)
                        (&_pcre2_ucd_stage2_32 +
                        (long)(int)((uint)*(ushort *)(&_pcre2_ucd_stage1_32 + (long)iVar17 * 2) *
                                    0x80 + (local_158 & 0x7f)) * 2) * 0xc;
    }
    switch(puVar23[2]) {
    case 1:
      bVar15 = (byte)(pbVar38[1] - 8) < 2 || pbVar38[1] == 5;
      break;
    case 2:
      bVar15 = *(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) == puVar23[3];
      break;
    case 3:
      bVar15 = (uint)pbVar38[1] == puVar23[3];
      break;
    case 4:
      bVar15 = (uint)*pbVar38 == puVar23[3];
      break;
    case 5:
      uVar18 = puVar23[3];
      bVar15 = true;
      if (*pbVar38 != uVar18) {
        bVar15 = (1 << ((byte)uVar18 & 0x1f) &
                 *(uint *)(&_pcre2_ucd_script_sets_32 +
                          ((ulong)(*(ushort *)(pbVar38 + 8) & 0x3ff) + (ulong)(uVar18 >> 5)) * 4))
                 != 0;
      }
      break;
    case 6:
      bVar15 = (*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) & 0xfffffffd) == 1;
      break;
    case 7:
    case 8:
      if (local_158 != 0x180e) {
        if (0x180e < local_158) {
          if (local_158 < 0x2060) {
            if (local_158 < 0x2028) {
              if (local_158 - 0x2000 < 0xb) goto switchD_001028b5_caseD_0;
            }
            else {
              bVar15 = true;
              if ((0x80000000000083U >> ((ulong)(local_158 - 0x2028) & 0x3f) & 1) != 0) break;
            }
          }
          else if (local_158 == 0x3000) goto switchD_001028b5_caseD_0;
          goto LAB_001028f3;
        }
        if (local_158 != 0x85) {
          if (local_158 < 0x86) {
            bVar15 = true;
            if (local_158 < 0xe) {
              if (local_158 < 9) {
LAB_001028f3:
                bVar15 = *(int *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) == 6;
              }
            }
            else if (local_158 != 0x20) goto LAB_001028f3;
            break;
          }
          if ((local_158 != 0xa0) && (local_158 != 0x1680)) goto LAB_001028f3;
        }
      }
    case 0:
switchD_001028b5_caseD_0:
      bVar15 = true;
      break;
    case 9:
      bVar15 = true;
      if ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) & 0xfffffffd) != 1) {
        bVar15 = (pbVar38[1] - 0xc & 0xfb) == 0;
      }
      break;
    case 10:
      bVar15 = false;
      if (local_158 < 0x110000) {
        puVar23 = (uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)puVar23[3] * 4);
        do {
          uVar18 = *puVar23;
          if (local_158 < uVar18) {
            bVar15 = false;
            goto LAB_00102908;
          }
          puVar23 = puVar23 + 1;
        } while (uVar18 != local_158);
        goto switchD_001028b5_caseD_0;
      }
      break;
    case 0xb:
      if (((local_158 & 0xffffffdf) == 0x40) || (local_158 == 0x24)) goto switchD_001028b5_caseD_0;
      bVar15 = local_158 - 0xa0 < 0xd760 || 0xdfff < local_158;
      break;
    case 0xc:
      bVar15 = (uint)(*(ushort *)(pbVar38 + 8) >> 0xb) == puVar23[3];
      break;
    case 0xd:
      bVar15 = (1 << ((byte)puVar23[3] & 0x1f) &
               *(uint *)(&_pcre2_ucd_boolprop_sets_32 +
                        ((ulong)(*(ushort *)(pbVar38 + 10) & 0xfff) + (ulong)(puVar23[3] >> 5)) * 4)
               ) != 0;
      break;
    default:
      bVar15 = iVar12 != 0x10;
    }
LAB_00102908:
    if ((uVar37 == 0x10) == bVar15) {
      if ((0 < (int)uVar39) && (iVar12 == 0x18b)) {
        uVar26 = (ulong)((int)uVar26 - 1);
        puVar24 = puVar24 + -3;
      }
      if (iVar11 <= iVar45) goto LAB_00100358;
      *puVar21 = uVar30;
      iVar34 = iVar34 + 1;
      puVar21[1] = uVar39 + 1;
      puVar42 = puVar24;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x185:
  case 0x186:
  case 0x18c:
    local_b0 = 4;
LAB_00101478:
    uVar39 = uVar18 + 1;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar42[1] = 0;
    puVar24 = puVar42 + 3;
    *puVar42 = uVar30 + 4;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      puVar42 = puVar24;
      uVar26 = (ulong)uVar39;
      break;
    }
    pbVar38 = &_pcre2_dummy_ucd_record_32;
    if (local_158 < 0x110000) {
      pbVar38 = &_pcre2_ucd_records_32 +
                (ulong)*(ushort *)
                        (&_pcre2_ucd_stage2_32 +
                        (long)(int)((uint)*(ushort *)(&_pcre2_ucd_stage1_32 + (long)iVar17 * 2) *
                                    0x80 + (local_158 & 0x7f)) * 2) * 0xc;
    }
    switch(puVar23[2]) {
    case 1:
      bVar15 = (byte)(pbVar38[1] - 8) < 2 || pbVar38[1] == 5;
      break;
    case 2:
      bVar15 = *(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) == puVar23[3];
      break;
    case 3:
      bVar15 = (uint)pbVar38[1] == puVar23[3];
      break;
    case 4:
      bVar15 = (uint)*pbVar38 == puVar23[3];
      break;
    case 5:
      uVar18 = puVar23[3];
      bVar15 = true;
      if (*pbVar38 != uVar18) {
        bVar15 = (1 << ((byte)uVar18 & 0x1f) &
                 *(uint *)(&_pcre2_ucd_script_sets_32 +
                          ((ulong)(uVar18 >> 5) + (ulong)(*(ushort *)(pbVar38 + 8) & 0x3ff)) * 4))
                 != 0;
      }
      break;
    case 6:
      bVar15 = (*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) & 0xfffffffd) == 1;
      break;
    case 7:
    case 8:
      if (local_158 != 0x180e) {
        if (0x180e < local_158) {
          if (local_158 < 0x2060) {
            if (local_158 < 0x2028) {
              if (local_158 - 0x2000 < 0xb) goto switchD_0010207a_caseD_0;
            }
            else {
              bVar15 = true;
              if ((0x80000000000083U >> ((ulong)(local_158 - 0x2028) & 0x3f) & 1) != 0) break;
            }
          }
          else if (local_158 == 0x3000) goto switchD_0010207a_caseD_0;
          goto LAB_001021e2;
        }
        if (local_158 != 0x85) {
          if (local_158 < 0x86) {
            bVar15 = true;
            if (local_158 < 0xe) {
              if (local_158 < 9) {
LAB_001021e2:
                bVar15 = *(int *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) == 6;
              }
            }
            else if (local_158 != 0x20) goto LAB_001021e2;
            break;
          }
          if ((local_158 != 0xa0) && (local_158 != 0x1680)) goto LAB_001021e2;
        }
      }
    case 0:
switchD_0010207a_caseD_0:
      bVar15 = true;
      break;
    case 9:
      bVar15 = true;
      if ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) & 0xfffffffd) != 1) {
        bVar15 = (pbVar38[1] - 0xc & 0xfb) == 0;
      }
      break;
    case 10:
      bVar15 = false;
      if (local_158 < 0x110000) {
        puVar23 = (uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)puVar23[3] * 4);
        do {
          uVar18 = *puVar23;
          if (local_158 < uVar18) {
            bVar15 = false;
            goto LAB_00102092;
          }
          puVar23 = puVar23 + 1;
        } while (uVar18 != local_158);
        goto switchD_0010207a_caseD_0;
      }
      break;
    case 0xb:
      if (((local_158 & 0xffffffdf) == 0x40) || (local_158 == 0x24)) goto switchD_0010207a_caseD_0;
      bVar15 = local_158 - 0xa0 < 0xd760 || 0xdfff < local_158;
      break;
    case 0xc:
      bVar15 = (uint)(*(ushort *)(pbVar38 + 8) >> 0xb) == puVar23[3];
      break;
    case 0xd:
      bVar15 = (1 << ((byte)puVar23[3] & 0x1f) &
               *(uint *)(&_pcre2_ucd_boolprop_sets_32 +
                        ((ulong)(*(ushort *)(pbVar38 + 10) & 0xfff) + (ulong)(puVar23[3] >> 5)) * 4)
               ) != 0;
      break;
    default:
      bVar15 = iVar12 != 0x10;
    }
LAB_00102092:
    if ((uVar37 == 0x10) == bVar15) {
      if ((iVar12 - 0x18aU & 0xfffffffd) != 0) {
        uVar26 = (ulong)uVar39;
        puVar42 = puVar24;
      }
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      puVar21[1] = 0;
      *puVar21 = local_b0 + uVar30;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      iVar34 = iVar34 + 1;
      puVar42 = puVar24;
      uVar26 = (ulong)uVar39;
    }
    break;
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18d:
    puVar41 = puVar42;
    if (iVar12 != 0x189) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar41 = puVar42 + 3;
      *puVar42 = uVar30 + 5;
    }
    uVar18 = puVar24[1];
    puVar42 = puVar41;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    pbVar38 = &_pcre2_dummy_ucd_record_32;
    if (local_158 < 0x110000) {
      pbVar38 = &_pcre2_ucd_records_32 +
                (ulong)*(ushort *)
                        (&_pcre2_ucd_stage2_32 +
                        (long)(int)((uint)*(ushort *)(&_pcre2_ucd_stage1_32 + (long)iVar17 * 2) *
                                    0x80 + (local_158 & 0x7f)) * 2) * 0xc;
    }
    switch(puVar23[3]) {
    case 1:
      bVar15 = (byte)(pbVar38[1] - 8) < 2 || pbVar38[1] == 5;
      break;
    case 2:
      bVar15 = *(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) == puVar23[4];
      break;
    case 3:
      bVar15 = (uint)pbVar38[1] == puVar23[4];
      break;
    case 4:
      bVar15 = (uint)*pbVar38 == puVar23[4];
      break;
    case 5:
      uVar39 = puVar23[4];
      bVar15 = true;
      if (*pbVar38 != uVar39) {
        bVar15 = (1 << ((byte)uVar39 & 0x1f) &
                 *(uint *)(&_pcre2_ucd_script_sets_32 +
                          ((ulong)(*(ushort *)(pbVar38 + 8) & 0x3ff) + (ulong)(uVar39 >> 5)) * 4))
                 != 0;
      }
      break;
    case 6:
      bVar15 = (*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) & 0xfffffffd) == 1;
      break;
    case 7:
    case 8:
      if (local_158 != 0x180e) {
        if (0x180e < local_158) {
          if (local_158 < 0x2060) {
            if (local_158 < 0x2028) {
              if (local_158 - 0x2000 < 0xb) goto switchD_00103178_caseD_0;
            }
            else {
              bVar15 = true;
              if ((0x80000000000083U >> ((ulong)(local_158 - 0x2028) & 0x3f) & 1) != 0) break;
            }
          }
          else if (local_158 == 0x3000) goto switchD_00103178_caseD_0;
          goto LAB_001031b6;
        }
        if (local_158 != 0x85) {
          if (local_158 < 0x86) {
            bVar15 = true;
            if (local_158 < 0xe) {
              if (local_158 < 9) {
LAB_001031b6:
                bVar15 = *(int *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) == 6;
              }
            }
            else if (local_158 != 0x20) goto LAB_001031b6;
            break;
          }
          if ((local_158 != 0xa0) && (local_158 != 0x1680)) goto LAB_001031b6;
        }
      }
    case 0:
switchD_00103178_caseD_0:
      bVar15 = true;
      break;
    case 9:
      bVar15 = true;
      if ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar38[1] * 4) & 0xfffffffd) != 1) {
        bVar15 = (pbVar38[1] - 0xc & 0xfb) == 0;
      }
      break;
    case 10:
      bVar15 = false;
      if (local_158 < 0x110000) {
        puVar24 = (uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)puVar23[4] * 4);
        do {
          uVar39 = *puVar24;
          if (local_158 < uVar39) {
            bVar15 = false;
            goto LAB_001031cb;
          }
          puVar24 = puVar24 + 1;
        } while (uVar39 != local_158);
        goto switchD_00103178_caseD_0;
      }
      break;
    case 0xb:
      if (((local_158 & 0xffffffdf) == 0x40) || (local_158 == 0x24)) goto switchD_00103178_caseD_0;
      bVar15 = local_158 - 0xa0 < 0xd760 || 0xdfff < local_158;
      break;
    case 0xc:
      bVar15 = (uint)(*(ushort *)(pbVar38 + 8) >> 0xb) == puVar23[4];
      break;
    case 0xd:
      bVar15 = (1 << ((byte)puVar23[4] & 0x1f) &
               *(uint *)(&_pcre2_ucd_boolprop_sets_32 +
                        ((ulong)(*(ushort *)(pbVar38 + 10) & 0xfff) + (ulong)(puVar23[4] >> 5)) * 4)
               ) != 0;
      break;
    default:
      bVar15 = iVar12 != 0x10;
    }
LAB_001031cb:
    if ((uVar37 == 0x10) == bVar15) {
      if (iVar12 == 0x18d) {
        uVar26 = (ulong)((int)uVar26 - 1);
        puVar41 = puVar41 + -3;
      }
      puVar42 = puVar41;
      if ((int)(uVar18 + 1) < (int)puVar23[1]) {
        if (iVar11 <= iVar45) goto LAB_00100358;
        *puVar21 = uVar30;
        iVar34 = iVar34 + 1;
        puVar21[1] = uVar18 + 1;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        if (iVar11 <= iVar45) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        *puVar21 = uVar30 + 5;
        puVar21[1] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x195:
  case 0x196:
  case 0x19e:
    iVar17 = 0;
    goto LAB_001013b5;
  case 0x197:
  case 0x198:
  case 0x19f:
    uVar37 = puVar24[1];
    if ((int)uVar37 < 1) {
      if (local_150 != 1) {
        iVar34 = iVar34 + 1;
        break;
      }
    }
    else {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      *puVar42 = uVar30 + 2;
      if (local_150 != 1) {
        iVar34 = iVar34 + 1;
        puVar42 = puVar42 + 3;
        uVar26 = (ulong)(uVar18 + 1);
        break;
      }
      if (iVar12 != 0x19f) {
        puVar42 = puVar42 + 3;
        uVar26 = (ulong)(uVar18 + 1);
      }
    }
    local_70 = (ulong)local_70._4_4_ << 0x20;
    _pcre2_extuni_32(local_158,local_140 + 1,*(undefined8 *)(param_1 + 0x20),puVar7,bVar48,&local_70
                    );
    if (iVar11 <= iVar45) goto LAB_00100358;
    puVar21[1] = uVar37 + 1;
    iVar34 = iVar34 + 1;
    *puVar21 = -uVar30;
    local_150 = 1;
    puVar21[2] = (uint)local_70;
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    break;
  case 0x199:
  case 0x19a:
  case 0x1a0:
    iVar17 = 2;
LAB_001013b5:
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar42[1] = 0;
    *puVar42 = uVar30 + 2;
    if (local_150 == 1) {
      if ((iVar12 - 0x19eU & 0xfffffffd) != 0) {
        uVar26 = (ulong)(uVar18 + 1);
        puVar42 = puVar42 + 3;
      }
      local_70 = (ulong)local_70._4_4_ << 0x20;
      _pcre2_extuni_32(local_158,local_140 + 1,*(undefined8 *)(param_1 + 0x20),puVar7,bVar48,
                       &local_70);
      if (iVar11 <= iVar45) goto LAB_00100358;
      iVar34 = iVar34 + 1;
      puVar21[1] = 0;
      *puVar21 = -(uVar30 + iVar17);
      puVar21[2] = (uint)local_70;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      iVar34 = iVar34 + 1;
      puVar42 = puVar42 + 3;
      uVar26 = (ulong)(uVar18 + 1);
    }
    break;
  case 0x19b:
  case 0x19c:
  case 0x19d:
  case 0x1a1:
    if (iVar12 == 0x19d) {
      uVar37 = puVar24[1];
      if (local_150 != 1) {
        iVar34 = iVar34 + 1;
        break;
      }
    }
    else {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar37 = puVar24[1];
      *puVar42 = uVar30 + 3;
      if (local_150 != 1) {
        iVar34 = iVar34 + 1;
        puVar42 = puVar42 + 3;
        uVar26 = (ulong)(uVar18 + 1);
        break;
      }
      if (iVar12 != 0x1a1) {
        puVar42 = puVar42 + 3;
        uVar26 = (ulong)(uVar18 + 1);
      }
    }
    local_70 = (ulong)local_70._4_4_ << 0x20;
    puVar24 = (uint *)_pcre2_extuni_32(local_158,local_140 + 1,*(undefined8 *)(param_1 + 0x20),
                                       puVar7,bVar48,&local_70);
    uVar18 = uVar14;
    if ((puVar7 <= puVar24) && (uVar18 = 1, (*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
      uVar18 = uVar14;
    }
    if ((int)(uVar37 + 1) < (int)puVar23[1]) {
      if (iVar11 <= iVar45) goto LAB_00100358;
      puVar21[1] = uVar37 + 1;
      *puVar21 = -uVar30;
    }
    else {
      if (iVar11 <= iVar45) goto LAB_00100358;
      puVar21[1] = 0;
      *puVar21 = -uVar30 - 3;
    }
    puVar21[2] = (uint)local_70;
    iVar34 = iVar34 + 1;
    local_150 = 1;
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    uVar14 = uVar18;
    break;
  case 0x1a9:
  case 0x1aa:
  case 0x1b2:
    iVar17 = 0;
    goto LAB_001013f4;
  case 0x1ab:
  case 0x1ac:
  case 0x1b3:
    uVar37 = puVar24[1];
    puVar24 = puVar42;
    if (0 < (int)uVar37) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar24 = puVar42 + 3;
      *puVar42 = uVar30 + 2;
    }
    puVar42 = puVar24;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_158 == 0xd) {
      uVar18 = 0;
      if (local_140 + 1 < puVar7) {
        uVar18 = (uint)(local_140[1] == 10);
      }
    }
    else {
      if (local_158 < 0xe) {
        uVar18 = 0;
        if (local_158 == 10) goto LAB_001032e9;
        uVar18 = local_158 - 0xb;
joined_r0x00104eeb:
        if (1 < uVar18) {
          iVar34 = iVar34 + 1;
          break;
        }
      }
      else if (local_158 != 0x85) {
        uVar18 = local_158 - 0x2028;
        goto joined_r0x00104eeb;
      }
      uVar18 = 0;
      if (*(short *)(param_1 + 0x90) == 2) {
        iVar34 = iVar34 + 1;
        break;
      }
    }
LAB_001032e9:
    if ((0 < (int)uVar37) && (iVar12 == 0x1b3)) {
      uVar26 = (ulong)((int)uVar26 - 1);
      puVar24 = puVar24 + -3;
    }
    if (iVar11 <= iVar45) goto LAB_00100358;
    puVar21[1] = uVar37 + 1;
    iVar34 = iVar34 + 1;
    *puVar21 = -uVar30;
    puVar21[2] = uVar18;
    puVar42 = puVar24;
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    break;
  case 0x1ad:
  case 0x1ae:
  case 0x1b4:
    iVar17 = 2;
LAB_001013f4:
    uVar37 = uVar18 + 1;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar42[1] = 0;
    puVar24 = puVar42 + 3;
    *puVar42 = uVar30 + 2;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      puVar42 = puVar24;
      uVar26 = (ulong)uVar37;
      break;
    }
    if (local_158 == 0xd) {
      uVar18 = 0;
      if (local_140 + 1 < puVar7) {
        uVar18 = (uint)(local_140[1] == 10);
      }
    }
    else if (local_158 < 0xe) {
      uVar18 = 0;
      if (local_158 != 10) {
        if (local_158 - 0xb < 2) goto LAB_00103f16;
LAB_00103f69:
        iVar34 = iVar34 + 1;
        puVar42 = puVar24;
        uVar26 = (ulong)uVar37;
        break;
      }
    }
    else {
      if ((local_158 != 0x85) && (1 < local_158 - 0x2028)) goto LAB_00103f69;
LAB_00103f16:
      uVar18 = 0;
      if (*(short *)(param_1 + 0x90) == 2) {
        iVar34 = iVar34 + 1;
        puVar42 = puVar24;
        uVar26 = (ulong)uVar37;
        break;
      }
    }
    if ((iVar12 - 0x1b2U & 0xfffffffd) != 0) {
      uVar26 = (ulong)uVar37;
      puVar42 = puVar24;
    }
    if (iVar11 <= iVar45) goto LAB_00100358;
    puVar21[2] = uVar18;
    iVar34 = iVar34 + 1;
    puVar21[1] = 0;
    *puVar21 = -(iVar17 + uVar30);
    puVar44 = puVar21 + 3;
    iVar45 = iVar45 + 1;
    break;
  case 0x1af:
  case 0x1b0:
  case 0x1b1:
  case 0x1b5:
    puVar41 = puVar42;
    if (iVar12 != 0x1b1) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar41 = puVar42 + 3;
      *puVar42 = uVar30 + 3;
    }
    puVar42 = puVar41;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_158 == 0xd) {
      uVar18 = 0;
      if (local_140 + 1 < puVar7) {
        uVar18 = (uint)(local_140[1] == 10);
      }
    }
    else if (local_158 < 0xe) {
      uVar18 = 0;
      if (local_158 != 10) {
        if (local_158 - 0xb < 2) goto LAB_00104ba7;
LAB_00104bf3:
        iVar34 = iVar34 + 1;
        break;
      }
    }
    else {
      if ((local_158 != 0x85) && (1 < local_158 - 0x2028)) goto LAB_00104bf3;
LAB_00104ba7:
      uVar18 = 0;
      if (*(short *)(param_1 + 0x90) == 2) {
        iVar34 = iVar34 + 1;
        break;
      }
    }
    if (iVar12 == 0x1b5) {
      uVar26 = (ulong)((int)uVar26 - 1);
      puVar41 = puVar41 + -3;
    }
    puVar42 = puVar41;
    if ((int)(puVar24[1] + 1) < (int)puVar23[1]) {
      if (iVar11 <= iVar45) goto LAB_00100358;
      puVar21[1] = puVar24[1] + 1;
      iVar34 = iVar34 + 1;
      *puVar21 = -uVar30;
      puVar21[2] = uVar18;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      if (iVar11 <= iVar45) goto LAB_00100358;
      puVar21[2] = uVar18;
      iVar34 = iVar34 + 1;
      puVar21[1] = 0;
      *puVar21 = -uVar30 - 3;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    break;
  case 0x1bd:
  case 0x1be:
  case 0x1c6:
    iVar17 = 0;
    goto LAB_00101433;
  case 0x1bf:
  case 0x1c0:
  case 0x1c7:
    uVar39 = puVar24[1];
    puVar24 = puVar42;
    if (0 < (int)uVar39) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar24 = puVar42 + 3;
      *puVar42 = uVar30 + 2;
    }
    puVar42 = puVar24;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_158 == 0x180e) {
LAB_00105420:
      bVar15 = true;
    }
    else if (local_158 < 0x180f) {
      if (local_158 == 0xa0) goto LAB_00105420;
      if (local_158 < 0xa1) {
        bVar15 = true;
        if (local_158 != 9) {
          bVar15 = local_158 == 0x20;
        }
      }
      else {
        bVar15 = local_158 == 0x1680;
      }
    }
    else {
      if (local_158 == 0x205f) goto LAB_00105420;
      if (local_158 < 0x2060) {
        if (local_158 < 0x200b) {
          bVar15 = 0x1fff < local_158;
        }
        else {
          bVar15 = local_158 == 0x202f;
        }
      }
      else {
        bVar15 = local_158 == 0x3000;
      }
    }
    if ((uVar37 == 0x13) == bVar15) {
      if ((0 < (int)uVar39) && (iVar12 == 0x1c7)) {
        uVar26 = (ulong)((int)uVar26 - 1);
        puVar24 = puVar24 + -3;
      }
      if (iVar11 <= iVar45) goto LAB_00100358;
      puVar21[1] = uVar39 + 1;
      iVar34 = iVar34 + 1;
      *puVar21 = -uVar30;
      puVar21[2] = 0;
      puVar42 = puVar24;
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x1c1:
  case 0x1c2:
  case 0x1c8:
    iVar17 = 2;
LAB_00101433:
    uVar39 = uVar18 + 1;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar42[1] = 0;
    puVar24 = puVar42 + 3;
    *puVar42 = uVar30 + 2;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      puVar42 = puVar24;
      uVar26 = (ulong)uVar39;
      break;
    }
    if (local_158 == 0x180e) {
LAB_001047c9:
      bVar15 = true;
    }
    else if (local_158 < 0x180f) {
      if (local_158 == 0xa0) goto LAB_001047c9;
      if (local_158 < 0xa1) {
        bVar15 = true;
        if (local_158 != 9) {
          bVar15 = local_158 == 0x20;
        }
      }
      else {
        bVar15 = local_158 == 0x1680;
      }
    }
    else {
      if (local_158 == 0x205f) goto LAB_001047c9;
      if (local_158 < 0x2060) {
        if (local_158 < 0x200b) {
          bVar15 = 0x1fff < local_158;
        }
        else {
          bVar15 = local_158 == 0x202f;
        }
      }
      else {
        bVar15 = local_158 == 0x3000;
      }
    }
    if ((uVar37 == 0x13) == bVar15) {
      if ((iVar12 - 0x1c6U & 0xfffffffd) != 0) {
        uVar26 = (ulong)uVar39;
        puVar42 = puVar24;
      }
      if (iVar11 <= iVar45) goto LAB_00100358;
      puVar21[1] = 0;
      puVar21[2] = 0;
      iVar34 = iVar34 + 1;
      *puVar21 = -(uVar30 + iVar17);
      puVar44 = puVar21 + 3;
      iVar45 = iVar45 + 1;
    }
    else {
      iVar34 = iVar34 + 1;
      puVar42 = puVar24;
      uVar26 = (ulong)uVar39;
    }
    break;
  case 0x1c3:
  case 0x1c4:
  case 0x1c5:
  case 0x1c9:
    puVar41 = puVar42;
    if (iVar12 != 0x1c5) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar41 = puVar42 + 3;
      *puVar42 = uVar30 + 3;
    }
    puVar42 = puVar41;
    if (local_150 != 1) {
      iVar34 = iVar34 + 1;
      break;
    }
    if (local_158 == 0x180e) {
LAB_00104c08:
      bVar15 = true;
    }
    else if (local_158 < 0x180f) {
      if (local_158 == 0xa0) goto LAB_00104c08;
      if (local_158 < 0xa1) {
        bVar15 = true;
        if (local_158 != 9) {
          bVar15 = local_158 == 0x20;
        }
      }
      else {
        bVar15 = local_158 == 0x1680;
      }
    }
    else {
      if (local_158 == 0x205f) goto LAB_00104c08;
      if (local_158 < 0x2060) {
        if (local_158 < 0x200b) {
          bVar15 = 0x1fff < local_158;
        }
        else {
          bVar15 = local_158 == 0x202f;
        }
      }
      else {
        bVar15 = local_158 == 0x3000;
      }
    }
    if ((uVar37 == 0x13) == bVar15) {
      if (iVar12 == 0x1c9) {
        uVar26 = (ulong)((int)uVar26 - 1);
        puVar41 = puVar41 + -3;
      }
      puVar42 = puVar41;
      if ((int)(puVar24[1] + 1) < (int)puVar23[1]) {
        if (iVar11 <= iVar45) goto LAB_00100358;
        puVar21[1] = puVar24[1] + 1;
        iVar34 = iVar34 + 1;
        *puVar21 = -uVar30;
        puVar21[2] = 0;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        if (iVar11 <= iVar45) goto LAB_00100358;
        iVar34 = iVar34 + 1;
        puVar21[1] = 0;
        puVar21[2] = 0;
        *puVar21 = -uVar30 - 3;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x1d1:
  case 0x1d2:
  case 0x1da:
    iVar17 = 0;
    goto LAB_00101375;
  case 0x1d3:
  case 0x1d4:
  case 0x1db:
    uVar39 = puVar24[1];
    puVar24 = puVar42;
    if (0 < (int)uVar39) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar24 = puVar42 + 3;
      *puVar42 = uVar30 + 2;
    }
    puVar42 = puVar24;
    if (local_150 == 1) {
      if (local_158 == 0x85) {
        bVar15 = true;
      }
      else if (local_158 < 0x86) {
        bVar15 = local_158 - 10 < 4;
      }
      else {
        bVar15 = local_158 - 0x2028 < 2;
      }
      if ((uVar37 == 0x15) == bVar15) {
        if ((0 < (int)uVar39) && (iVar12 == 0x1db)) {
          uVar26 = (ulong)((int)uVar26 - 1);
          puVar24 = puVar24 + -3;
        }
        if (iVar11 <= iVar45) goto LAB_00100358;
        puVar21[1] = uVar39 + 1;
        iVar34 = iVar34 + 1;
        *puVar21 = -uVar30;
        puVar21[2] = 0;
        puVar42 = puVar24;
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        iVar34 = iVar34 + 1;
      }
    }
    else {
      iVar34 = iVar34 + 1;
    }
    break;
  case 0x1d5:
  case 0x1d6:
  case 0x1dc:
    iVar17 = 2;
LAB_00101375:
    uVar39 = uVar18 + 1;
    if (iVar11 <= (int)uVar18) goto LAB_00100358;
    puVar42[1] = 0;
    puVar24 = puVar42 + 3;
    *puVar42 = uVar30 + 2;
    if (local_150 == 1) {
      if (local_158 == 0x85) {
        bVar15 = true;
      }
      else if (local_158 < 0x86) {
        bVar15 = local_158 - 10 < 4;
      }
      else {
        bVar15 = local_158 - 0x2028 < 2;
      }
      if ((uVar37 == 0x15) == bVar15) {
        if ((iVar12 - 0x1daU & 0xfffffffd) != 0) {
          uVar26 = (ulong)uVar39;
          puVar42 = puVar24;
        }
        if (iVar11 <= iVar45) goto LAB_00100358;
        puVar21[1] = 0;
        puVar21[2] = 0;
        iVar34 = iVar34 + 1;
        *puVar21 = -(uVar30 + iVar17);
        puVar44 = puVar21 + 3;
        iVar45 = iVar45 + 1;
      }
      else {
        iVar34 = iVar34 + 1;
        puVar42 = puVar24;
        uVar26 = (ulong)uVar39;
      }
    }
    else {
      iVar34 = iVar34 + 1;
      puVar42 = puVar24;
      uVar26 = (ulong)uVar39;
    }
    break;
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1dd:
    puVar41 = puVar42;
    if (iVar12 != 0x1d9) {
      if (iVar11 <= (int)uVar18) goto LAB_00100358;
      puVar42[1] = 0;
      uVar26 = (ulong)(uVar18 + 1);
      puVar41 = puVar42 + 3;
      *puVar42 = uVar30 + 3;
    }
    puVar42 = puVar41;
    if (local_150 == 1) {
      if (local_158 == 0x85) {
        bVar15 = true;
      }
      else if (local_158 < 0x86) {
        bVar15 = local_158 - 10 < 4;
      }
      else {
        bVar15 = local_158 - 0x2028 < 2;
      }
      if ((uVar37 == 0x15) == bVar15) {
        if (iVar12 == 0x1dd) {
          uVar26 = (ulong)((int)uVar26 - 1);
          puVar41 = puVar41 + -3;
        }
        puVar42 = puVar41;
        if ((int)(puVar24[1] + 1) < (int)puVar23[1]) {
          if (iVar11 <= iVar45) goto LAB_00100358;
          puVar21[1] = puVar24[1] + 1;
          iVar34 = iVar34 + 1;
          *puVar21 = -uVar30;
          puVar21[2] = 0;
          puVar44 = puVar21 + 3;
          iVar45 = iVar45 + 1;
        }
        else {
          if (iVar11 <= iVar45) goto LAB_00100358;
          iVar34 = iVar34 + 1;
          puVar21[1] = 0;
          puVar21[2] = 0;
          *puVar21 = -uVar30 - 3;
          puVar44 = puVar21 + 3;
          iVar45 = iVar45 + 1;
        }
      }
      else {
        iVar34 = iVar34 + 1;
      }
    }
    else {
      iVar34 = iVar34 + 1;
    }
  }
LAB_001004ce:
  puVar21 = puVar44;
  if ((int)uVar26 <= iVar34) goto LAB_0010051e;
  goto LAB_001004d3;
LAB_0010051e:
  if (iVar45 < 1) goto LAB_0010356e;
  uVar31 = (ulong)iVar45;
  local_140 = local_140 + (int)local_150;
  uVar30 = *param_7;
  uVar26 = uVar31;
  puVar42 = local_170;
  local_170 = puVar22;
  uVar43 = uVar14;
  goto LAB_001003e8;
LAB_00100358:
  iVar17 = -0x2b;
  goto LAB_00100628;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pcre2_dfa_match_32(undefined8 *param_1,uint *param_2,long param_3,ulong param_4,uint param_5,
                      undefined8 *param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  void *__dest;
  undefined8 uVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uVar21;
  uint *puVar22;
  long lVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  undefined1 uVar29;
  long in_FS_OFFSET;
  undefined1 local_7030 [28672];
  
  puVar10 = &stack0xffffffffffffffd0;
  do {
    puVar24 = puVar10;
    *(undefined8 *)(puVar24 + -0x1000) = *(undefined8 *)(puVar24 + -0x1000);
    puVar10 = puVar24 + -0x1000;
  } while (puVar24 + -0x1000 != local_7030);
  puVar6 = *(undefined8 **)(puVar24 + 0x6038);
  puVar25 = *(uint **)(puVar24 + 0x6040);
  *(long *)(puVar24 + -0x19c8) = param_3;
  *(undefined8 *)(puVar24 + 0x5ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar24 + -0x1818) = 0;
  *(undefined8 *)(puVar24 + -0x1810) = _LC1;
  if (param_3 == 0 && param_2 == (uint *)0x0) {
    param_2 = (uint *)&_LC0;
  }
  if ((param_5 & 0x1fffbf00) != 0) {
LAB_0010691f:
    iVar14 = -0x22;
LAB_00106928:
    if (*(long *)(puVar24 + 0x5ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar14;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar24 + -0x19f0) = 0x107769;
    __stack_chk_fail();
  }
  if ((((param_1 == (undefined8 *)0x0) || (param_2 == (uint *)0x0)) || (puVar25 == (uint *)0x0)) ||
     (param_6 == (undefined8 *)0x0)) {
    iVar14 = -0x33;
    goto LAB_00106928;
  }
  *(undefined4 *)(puVar24 + -0x1958) = 0;
  if (*(long *)(puVar24 + -0x19c8) == -1) {
    *(uint **)(puVar24 + -0x19d8) = puVar25;
    *(ulong *)(puVar24 + -0x19e0) = param_4;
    *(uint **)(puVar24 + -0x19e8) = param_2;
    *(undefined8 *)(puVar24 + -0x19f0) = 0x107436;
    uVar18 = _pcre2_strlen_32(param_2);
    puVar25 = *(uint **)(puVar24 + -0x19d8);
    param_4 = *(ulong *)(puVar24 + -0x19e0);
    *(undefined4 *)(puVar24 + -0x1958) = 1;
    *(undefined8 *)(puVar24 + -0x19c8) = uVar18;
    param_2 = *(uint **)(puVar24 + -0x19e8);
  }
  if (*(ulong *)(puVar24 + 0x6048) < 0x14) {
    iVar14 = -0x2b;
    goto LAB_00106928;
  }
  if (*(ulong *)(puVar24 + -0x19c8) < param_4) {
    iVar14 = -0x21;
    goto LAB_00106928;
  }
  uVar13 = *(uint *)(param_1 + 0xb);
  if (((param_5 & 0x30) != 0) && (((param_5 | uVar13) & 0x20000000) != 0)) goto LAB_0010691f;
  if ((uVar13 & 0x4000000) != 0) {
    iVar14 = -0x42;
    goto LAB_00106928;
  }
  if (*(int *)(param_1 + 10) != 0x50435245) {
    iVar14 = -0x1f;
    goto LAB_00106928;
  }
  uVar26 = *(uint *)(param_1 + 0xc);
  if ((uVar26 & 7) != 4) {
    iVar14 = -0x20;
    goto LAB_00106928;
  }
  uVar11 = uVar26 >> 0xe & 0xc | param_5;
  *(uint *)(puVar24 + -0x19e8) = param_5 & 0x40;
  if (((param_5 & 0x40) != 0) &&
     (((1 < *puVar25 || ((int)puVar25[1] < 1)) ||
      ((int)((*(long *)(puVar24 + 0x6048) - 2U) / 3) < (int)puVar25[1])))) {
    iVar14 = -0x26;
    goto LAB_00106928;
  }
  *(uint *)(puVar24 + -0x19bc) = uVar13 & 0x80000;
  *(uint *)(puVar24 + -0x1978) = (uint)((uVar13 & 0x80000) != 0);
  puVar16 = param_2 + param_4;
  *(ulong *)(puVar24 + -0x1960) = param_4 * 4;
  *(uint **)(puVar24 + -0x19a8) = puVar16 + -1;
  puVar22 = param_2 + *(long *)(puVar24 + -0x19c8);
  *(uint *)(puVar24 + -0x1988) = uVar26 & 0x200;
  if (((param_5 & 0x80000040) == 0) && (-1 < (int)uVar13)) {
    *(uint *)(puVar24 + -0x19d8) = uVar13 >> 8 & 1;
    iVar28 = 0;
  }
  else {
    *(undefined4 *)(puVar24 + -0x19d8) = 0;
    iVar28 = 1;
  }
  *(undefined4 *)(puVar24 + -0x1948) = 2;
  *(undefined1 **)(puVar24 + -0x1840) = puVar24 + -0x1948;
  *(uint **)(puVar24 + -0x1928) = param_2;
  *(long *)(puVar24 + -0x1920) = *(long *)(puVar24 + -0x19c8) * 4 >> 2;
  *(undefined4 *)(puVar24 + -0x18e0) = 0;
  *(undefined8 *)(puVar24 + -0x1940) = 1;
  *(undefined8 *)(puVar24 + -0x1930) = 0;
  if (puVar6 == (undefined8 *)0x0) {
    uVar18 = param_1[2];
    uVar7 = *param_1;
    uVar9 = param_1[1];
    *(uint **)(puVar24 + -0x19e0) = puVar22;
    *(undefined8 *)(puVar24 + -0x1830) = 0;
    *(undefined8 *)(puVar24 + -0x18c8) = uVar18;
    *(uint *)(puVar24 + -0x1878) = _DAT_001090d4;
    *(uint *)(puVar24 + -0x1874) = _DAT_001090d8;
    *(undefined8 *)(puVar24 + -0x18d8) = uVar7;
    *(undefined8 *)(puVar24 + -0x18d0) = uVar9;
    uVar27 = _DAT_001090d4;
    uVar20 = _DAT_001090d8;
    uVar12 = _DAT_001090d0;
  }
  else {
    if (puVar6[9] == -1) {
      *(uint **)(puVar24 + -0x19e0) = puVar22;
    }
    else {
      if ((uVar13 & 0x800000) == 0) {
        iVar14 = -0x38;
        goto LAB_00106928;
      }
      *(uint **)(puVar24 + -0x19e0) = param_2 + puVar6[9];
    }
    uVar27 = *(uint *)((long)puVar6 + 0x54);
    uVar20 = *(uint *)(puVar6 + 0xb);
    uVar7 = *puVar6;
    uVar9 = puVar6[1];
    *(undefined8 *)(puVar24 + -0x1830) = puVar6[5];
    uVar18 = puVar6[6];
    *(uint *)(puVar24 + -0x1878) = uVar27;
    *(undefined8 *)(puVar24 + -0x1838) = uVar18;
    uVar18 = puVar6[2];
    *(uint *)(puVar24 + -0x1874) = uVar20;
    *(undefined8 *)(puVar24 + -0x18c8) = uVar18;
    uVar12 = *(uint *)(puVar6 + 10);
    *(undefined8 *)(puVar24 + -0x18d8) = uVar7;
    *(undefined8 *)(puVar24 + -0x18d0) = uVar9;
  }
  uVar4 = *(uint *)(param_1 + 0xd);
  *(uint *)(puVar24 + -0x1888) = uVar12;
  if (uVar4 < uVar27) {
    *(uint *)(puVar24 + -0x1878) = uVar4;
  }
  if (*(uint *)((long)param_1 + 0x6c) < uVar20) {
    *(uint *)(puVar24 + -0x1874) = *(uint *)((long)param_1 + 0x6c);
  }
  if (*(uint *)((long)param_1 + 100) < uVar12) {
    *(uint *)(puVar24 + -0x1888) = *(uint *)((long)param_1 + 100);
  }
  uVar1 = *(ushort *)((long)param_1 + 0x84);
  uVar2 = *(ushort *)((long)param_1 + 0x86);
  *(uint **)(puVar24 + -0x18b8) = param_2;
  *(uint **)(puVar24 + -0x18b0) = puVar22;
  uVar3 = *(ushort *)((long)param_1 + 0x7c);
  *(ulong *)(puVar24 + -0x1890) = param_4;
  *(uint *)(puVar24 + -0x186c) = uVar11;
  *(uint *)(puVar24 + -0x1868) = uVar13;
  *(undefined4 *)(puVar24 + -0x1870) = 0;
  *(undefined8 *)(puVar24 + -0x1880) = 0;
  *(long *)(puVar24 + -0x18c0) = (long)param_1 + (long)(int)((uint)uVar2 * (uint)uVar1) * 4 + 0x88;
  uVar18 = param_1[3];
  *(undefined4 *)(puVar24 + -0x1864) = 0;
  *(undefined8 *)(puVar24 + -0x1898) = uVar18;
  uVar13 = uVar26 >> 0xd & 1;
  if (uVar3 != 0) {
    uVar13 = 1;
  }
  *(uint *)(puVar24 + -0x185c) = uVar13;
  *(undefined2 *)(puVar24 + -0x1848) = *(undefined2 *)(param_1 + 0xf);
  switch(*(undefined2 *)((long)param_1 + 0x7a)) {
  default:
    iVar14 = -0x2c;
    goto LAB_00106928;
  case 1:
    *(undefined4 *)(puVar24 + -0x1860) = 1;
    *(undefined4 *)(puVar24 + -0x1858) = 0xd;
    break;
  case 2:
    *(undefined4 *)(puVar24 + -0x1860) = 1;
    *(undefined4 *)(puVar24 + -0x1858) = 10;
    break;
  case 3:
    *(undefined4 *)(puVar24 + -0x1860) = 2;
    *(undefined8 *)(puVar24 + -0x1858) = _LC3;
    break;
  case 4:
    *(undefined4 *)(puVar24 + -0x1864) = 1;
    break;
  case 5:
    *(undefined4 *)(puVar24 + -0x1864) = 2;
    break;
  case 6:
    *(undefined4 *)(puVar24 + -0x1860) = 1;
    *(undefined4 *)(puVar24 + -0x1858) = 0;
  }
  if ((*(int *)(puVar24 + -0x19bc) != 0) && ((param_5 & 0x40000000) == 0)) {
    puVar17 = puVar16;
    if ((param_4 != 0) && (puVar17 = puVar16 + -(ulong)uVar3, puVar16 + -(ulong)uVar3 <= param_2)) {
      puVar17 = param_2;
    }
    *(uint **)(puVar24 + -0x1998) = puVar25;
    *(ulong *)(puVar24 + -0x19a0) = param_4;
    lVar15 = (long)puVar17 - (long)param_2 >> 2;
    *(uint *)(puVar24 + -0x19b0) = uVar11;
    *(uint **)(puVar24 + -0x19b8) = param_2;
    *(long *)(puVar24 + -0x19d0) = lVar15;
    *(undefined8 *)(puVar24 + -0x19f0) = 0x106a62;
    iVar14 = _pcre2_valid_utf_32(puVar17,*(long *)(puVar24 + -0x19c8) - lVar15,param_6 + 0xb);
    lVar15 = *(long *)(puVar24 + -0x19d0);
    *(int *)((long)param_6 + 100) = iVar14;
    if (iVar14 != 0) {
      param_6[0xb] = param_6[0xb] + lVar15;
      goto LAB_00106928;
    }
    uVar26 = *(uint *)(param_1 + 0xc);
    param_2 = *(uint **)(puVar24 + -0x19b8);
    uVar11 = *(uint *)(puVar24 + -0x19b0);
    param_4 = *(ulong *)(puVar24 + -0x19a0);
    puVar25 = *(uint **)(puVar24 + -0x1998);
  }
  if ((uVar26 & 0x10) == 0) {
    uVar13 = 0;
    if ((*(int *)(puVar24 + -0x1988) == 0) && (uVar13 = uVar26 & 0x40, uVar13 != 0)) {
      *(undefined4 *)(puVar24 + -0x1984) = 0;
      uVar13 = 0;
      *(undefined8 **)(puVar24 + -0x19b0) = param_1 + 5;
      *(undefined8 *)(puVar24 + -0x1990) = 0;
      *(undefined4 *)(puVar24 + -0x19b8) = 0;
    }
    else {
      *(undefined4 *)(puVar24 + -0x1984) = 0;
      *(undefined8 *)(puVar24 + -0x1990) = 0;
      *(undefined8 *)(puVar24 + -0x19b0) = 0;
      *(undefined4 *)(puVar24 + -0x19b8) = 0;
    }
  }
  else {
    uVar13 = *(uint *)(param_1 + 0xe);
    if ((uVar26 & 0x20) == 0) {
LAB_00107470:
      *(uint *)(puVar24 + -0x1984) = uVar13;
    }
    else {
      if (uVar13 < 0x100) {
        *(uint *)(puVar24 + -0x1984) =
             (uint)*(byte *)(*(long *)(puVar24 + -0x1898) + 0x100 + (ulong)uVar13);
        if ((uVar13 < 0x80) ||
           ((*(int *)(puVar24 + -0x19bc) == 0 && ((*(byte *)((long)param_1 + 0x5a) & 2) == 0))))
        goto LAB_00106ae0;
LAB_0010768f:
        puVar19 = &_pcre2_ucd_records_32 +
                  (ulong)*(ushort *)
                          (&_pcre2_ucd_stage2_32 +
                          (long)(int)((uint)*(ushort *)
                                             (&_pcre2_ucd_stage1_32 + (long)((int)uVar13 >> 7) * 2)
                                      * 0x80 + (uVar13 & 0x7f)) * 2) * 0xc;
      }
      else {
        if ((*(int *)(puVar24 + -0x19bc) == 0) && ((*(byte *)((long)param_1 + 0x5a) & 2) == 0))
        goto LAB_00107470;
        puVar19 = &_pcre2_dummy_ucd_record_32;
        if (uVar13 < 0x110000) goto LAB_0010768f;
      }
      *(uint *)(puVar24 + -0x1984) = *(int *)(puVar19 + 4) + uVar13;
    }
LAB_00106ae0:
    *(undefined8 *)(puVar24 + -0x1990) = 4;
    *(undefined8 *)(puVar24 + -0x19b0) = 0;
    *(undefined4 *)(puVar24 + -0x19b8) = 1;
  }
  *(uint *)(puVar24 + -0x19a0) = uVar26 & 0x80;
  if ((uVar26 & 0x80) == 0) {
    *(undefined4 *)(puVar24 + -0x1974) = 0;
    uVar29 = 0;
  }
  else {
    uVar27 = *(uint *)((long)param_1 + 0x74);
    *(uint *)(puVar24 + -0x19a0) = uVar27;
    if ((uVar26 & 0x100) == 0) {
LAB_00107490:
      uVar29 = 1;
      *(undefined4 *)(puVar24 + -0x1974) = *(undefined4 *)(puVar24 + -0x19a0);
    }
    else {
      if (uVar27 < 0x100) {
        uVar29 = 1;
        *(uint *)(puVar24 + -0x1974) =
             (uint)*(byte *)(*(long *)(puVar24 + -0x1898) + 0x100 + (ulong)uVar27);
        if ((uVar27 < 0x80) ||
           ((*(int *)(puVar24 + -0x19bc) == 0 && ((*(byte *)((long)param_1 + 0x5a) & 2) == 0))))
        goto LAB_00106b50;
LAB_0010763d:
        puVar19 = &_pcre2_ucd_records_32 +
                  (ulong)*(ushort *)
                          (&_pcre2_ucd_stage2_32 +
                          (long)(int)((uint)*(ushort *)
                                             (&_pcre2_ucd_stage1_32 +
                                             (long)((int)*(uint *)(puVar24 + -0x19a0) >> 7) * 2) *
                                      0x80 + (*(uint *)(puVar24 + -0x19a0) & 0x7f)) * 2) * 0xc;
      }
      else {
        if ((*(int *)(puVar24 + -0x19bc) == 0) && ((*(byte *)((long)param_1 + 0x5a) & 2) == 0))
        goto LAB_00107490;
        puVar19 = &_pcre2_dummy_ucd_record_32;
        if (*(uint *)(puVar24 + -0x19a0) < 0x110000) goto LAB_0010763d;
      }
      uVar29 = 1;
      *(int *)(puVar24 + -0x1974) = *(int *)(puVar24 + -0x19a0) + *(int *)(puVar19 + 4);
    }
  }
LAB_00106b50:
  if ((*(byte *)((long)param_6 + 0x61) & 1) != 0) {
    *(uint **)(puVar24 + -0x1968) = puVar25;
    uVar18 = param_6[2];
    *(ulong *)(puVar24 + -0x1970) = param_4;
    uVar7 = param_6[4];
    *(uint **)(puVar24 + -0x1980) = param_2;
    *(uint *)(puVar24 + -0x1998) = uVar11;
    *(uint *)(puVar24 + -0x19d0) = uVar13;
    pcVar8 = (code *)param_6[1];
    *(undefined8 *)(puVar24 + -0x19f0) = 0x106b7f;
    (*pcVar8)(uVar7,uVar18);
    *(byte *)((long)param_6 + 0x61) = *(byte *)((long)param_6 + 0x61) & 0xfe;
    param_4 = *(ulong *)(puVar24 + -0x1970);
    puVar25 = *(uint **)(puVar24 + -0x1968);
    param_2 = *(uint **)(puVar24 + -0x1980);
    uVar11 = *(uint *)(puVar24 + -0x1998);
    uVar13 = *(uint *)(puVar24 + -0x19d0);
  }
  param_6[3] = param_1;
  iVar5 = *(int *)(puVar24 + -0x19d8);
  param_6[4] = 0;
  param_6[5] = 0;
  *(undefined1 *)(param_6 + 0xc) = 1;
  *(uint *)(puVar24 + -0x1998) = uVar13;
  *(uint *)(puVar24 + -0x1954) = uVar11;
  *(uint **)(puVar24 + -0x1950) = param_2;
  *(ulong *)(puVar24 + -0x19d8) = param_4;
  *(uint **)(puVar24 + -0x19d0) = puVar25;
  puVar24[-0x1980] = uVar29;
LAB_00106bf0:
  puVar25 = puVar16;
  if ((*(uint *)(param_1 + 0xb) & 0x10000) != 0 || *(int *)(puVar24 + -0x19e8) != 0)
  goto LAB_00106e50;
  if (iVar5 != 0) {
    if (*(int *)(puVar24 + -0x19bc) == 0) {
      if (puVar16 < puVar22) {
        *(uint **)(puVar24 + -0x1970) = puVar16;
        *(int *)(puVar24 + -0x1968) = iVar28;
        do {
          puVar25 = *(uint **)(puVar24 + -0x18b0);
          if (*(int *)(puVar24 + -0x1864) == 0) {
            if (((puVar16 <= puVar25 + -(ulong)*(uint *)(puVar24 + -0x1860)) &&
                (*puVar16 == *(uint *)(puVar24 + -0x1858))) &&
               ((*(uint *)(puVar24 + -0x1860) == 1 || (puVar16[1] == *(uint *)(puVar24 + -0x1854))))
               ) break;
          }
          else if (puVar16 < puVar25) {
            *(undefined8 *)(puVar24 + -0x19f0) = 0x106f1e;
            iVar14 = _pcre2_is_newline_32
                               (puVar16,*(int *)(puVar24 + -0x1864),puVar25,puVar24 + -0x1860,0);
            if (iVar14 != 0) break;
          }
          puVar16 = puVar16 + 1;
        } while (puVar16 < puVar22);
LAB_00106ca8:
        puVar25 = *(uint **)(puVar24 + -0x1970);
        iVar28 = *(int *)(puVar24 + -0x1968);
        puVar22 = puVar16;
        goto LAB_00106cbb;
      }
    }
    else if (puVar16 < puVar22) {
      *(uint **)(puVar24 + -0x1970) = puVar16;
      *(int *)(puVar24 + -0x1968) = iVar28;
      do {
        puVar25 = *(uint **)(puVar24 + -0x18b0);
        if (*(int *)(puVar24 + -0x1864) == 0) {
          if (((puVar16 <= puVar25 + -(ulong)*(uint *)(puVar24 + -0x1860)) &&
              (*puVar16 == *(uint *)(puVar24 + -0x1858))) &&
             ((*(uint *)(puVar24 + -0x1860) == 1 || (puVar16[1] == *(uint *)(puVar24 + -0x1854)))))
          break;
        }
        else if (puVar16 < puVar25) {
          *(undefined8 *)(puVar24 + -0x19f0) = 0x1070e1;
          iVar14 = _pcre2_is_newline_32
                             (puVar16,*(int *)(puVar24 + -0x1864),puVar25,puVar24 + -0x1860,1);
          if (iVar14 != 0) break;
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 < puVar22);
      goto LAB_00106ca8;
    }
    if (iVar28 == 0) {
      if (*(int *)(puVar24 + -0x19b8) == 0) goto LAB_00107100;
      goto LAB_00106ff0;
    }
    if ((*(long *)(puVar24 + -0x19b0) == 0) && (*(int *)(puVar24 + -0x19b8) == 0))
    goto LAB_00106cde;
    goto LAB_00106d80;
  }
LAB_00106cbb:
  puVar16 = puVar22;
  if (iVar28 == 0) {
    if (*(int *)(puVar24 + -0x19b8) == 0) {
LAB_00107100:
      if (*(int *)(puVar24 + -0x1988) == 0) {
        if (*(long *)(puVar24 + -0x19b0) != 0) {
          for (; puVar25 < puVar16; puVar25 = puVar25 + 1) {
            uVar13 = *puVar25;
            if (0xff < uVar13) {
              uVar13 = 0xff;
            }
            if ((*(byte *)(*(long *)(puVar24 + -0x19b0) + (ulong)(uVar13 >> 3)) >> (uVar13 & 7) & 1)
                != 0) break;
          }
          goto LAB_00106ff0;
        }
      }
      else {
        puVar22 = *(uint **)(puVar24 + -0x18b8);
        if ((uint *)(*(long *)(puVar24 + -0x1960) + (long)puVar22) < puVar25) {
          if (*(int *)(puVar24 + -0x19bc) == 0) {
            if (puVar25 < puVar16) {
              do {
                if (*(int *)(puVar24 + -0x1864) == 0) {
                  uVar21 = (ulong)*(uint *)(puVar24 + -0x1860);
                  if (((puVar22 + uVar21 <= puVar25) &&
                      (puVar25[-uVar21] == *(uint *)(puVar24 + -0x1858))) &&
                     ((*(uint *)(puVar24 + -0x1860) == 1 ||
                      (puVar25[1 - uVar21] == *(uint *)(puVar24 + -0x1854))))) break;
                }
                else if (puVar22 < puVar25) {
                  *(undefined8 *)(puVar24 + -0x19f0) = 0x10722b;
                  iVar14 = _pcre2_was_newline_32
                                     (puVar25,*(int *)(puVar24 + -0x1864),puVar22,puVar24 + -0x1860,
                                      0);
                  if (iVar14 != 0) goto LAB_00107233;
                }
                puVar25 = puVar25 + 1;
                if (puVar16 <= puVar25) break;
                puVar22 = *(uint **)(puVar24 + -0x18b8);
              } while( true );
            }
          }
          else if (puVar25 < puVar16) {
            do {
              if (*(int *)(puVar24 + -0x1864) == 0) {
                uVar21 = (ulong)*(uint *)(puVar24 + -0x1860);
                if (((puVar22 + uVar21 <= puVar25) &&
                    (puVar25[-uVar21] == *(uint *)(puVar24 + -0x1858))) &&
                   ((*(uint *)(puVar24 + -0x1860) == 1 ||
                    (puVar25[1 - uVar21] == *(uint *)(puVar24 + -0x1854))))) break;
              }
              else if (puVar22 < puVar25) {
                *(undefined8 *)(puVar24 + -0x19f0) = 0x1075b6;
                iVar14 = _pcre2_was_newline_32
                                   (puVar25,*(int *)(puVar24 + -0x1864),puVar22,puVar24 + -0x1860,1)
                ;
                if (iVar14 != 0) goto LAB_00107233;
              }
              puVar25 = puVar25 + 1;
              if (puVar16 <= puVar25) break;
              puVar22 = *(uint **)(puVar24 + -0x18b8);
            } while( true );
          }
        }
      }
      goto LAB_00106cde;
    }
    if (*(int *)(puVar24 + -0x1998) == *(int *)(puVar24 + -0x1984)) {
      for (; (puVar25 < puVar16 && (*puVar25 != *(uint *)(puVar24 + -0x1998)));
          puVar25 = puVar25 + 1) {
      }
    }
    else if (puVar25 < puVar16) {
      do {
        if ((*(uint *)(puVar24 + -0x1984) == *puVar25) || (*(uint *)(puVar24 + -0x1998) == *puVar25)
           ) break;
        puVar25 = puVar25 + 1;
      } while (puVar25 < puVar16);
    }
LAB_00106ff0:
    puVar22 = *(uint **)(puVar24 + -0x18b0);
    if ((puVar24[-0x186c] & 0x30) != 0) goto LAB_00106e50;
    if (puVar25 < puVar22) goto LAB_00106cf4;
    goto LAB_00106d80;
  }
  if ((*(long *)(puVar24 + -0x19b0) == 0) && (*(int *)(puVar24 + -0x19b8) == 0)) goto LAB_00106cde;
  if (puVar16 <= puVar25) goto LAB_00106d80;
  uVar13 = *puVar25;
  if ((*(int *)(puVar24 + -0x19b8) == 0) ||
     ((*(uint *)(puVar24 + -0x1998) != uVar13 && (*(uint *)(puVar24 + -0x1984) != uVar13)))) {
    if (*(long *)(puVar24 + -0x19b0) == 0) goto LAB_00106d80;
    if (0xff < uVar13) {
      uVar13 = 0xff;
    }
    if ((*(byte *)(*(long *)(puVar24 + -0x19b0) + (ulong)(uVar13 >> 3)) >> (uVar13 & 7) & 1) == 0)
    goto LAB_00106d80;
  }
LAB_00106cde:
  puVar22 = *(uint **)(puVar24 + -0x18b0);
  if ((puVar24[-0x186c] & 0x30) == 0) {
LAB_00106cf4:
    uVar21 = (long)puVar22 - (long)puVar25;
    if ((long)uVar21 >> 2 < (long)(ulong)*(ushort *)((long)param_1 + 0x7e)) goto LAB_00106d80;
    puVar16 = (uint *)(*(long *)(puVar24 + -0x1990) + (long)puVar25);
    if (((*(uint **)(puVar24 + -0x19a8) < puVar16) && (puVar24[-0x1980] != '\0')) &&
       ((uVar21 < 0x1f3d || ((iVar28 == 0 && (uVar21 < 0x7a11fd)))))) {
      if (*(int *)(puVar24 + -0x19a0) == *(int *)(puVar24 + -0x1974)) {
        do {
          puVar17 = puVar16;
          if (puVar22 <= puVar17) goto LAB_00106d80;
          puVar16 = puVar17 + 1;
        } while (*puVar17 != *(uint *)(puVar24 + -0x19a0));
      }
      else {
        do {
          puVar17 = puVar16;
          if (puVar22 <= puVar17) goto LAB_00106d80;
        } while ((*(uint *)(puVar24 + -0x19a0) != *puVar17) &&
                (puVar16 = puVar17 + 1, *(uint *)(puVar24 + -0x1974) != *puVar17));
      }
      *(uint **)(puVar24 + -0x19a8) = puVar17;
    }
  }
LAB_00106e50:
  if (*(uint **)(puVar24 + -0x19e0) < puVar25) goto LAB_00106d80;
  uVar1 = *(ushort *)((long)param_6 + 0x62);
  *(uint **)(puVar24 + -0x18a8) = puVar25;
  *(uint **)(puVar24 + -0x18a0) = puVar25;
  *(undefined8 *)(puVar24 + -0x1828) = 0;
  *(undefined1 **)(puVar24 + -0x19f0) = puVar24 + -0x1818;
  *(undefined8 *)(puVar24 + -0x19f8) = 0;
  *(ulong *)(puVar24 + -0x1a00) = (ulong)*(uint *)(puVar24 + 0x6048);
  *(undefined8 *)(puVar24 + -0x1a08) = *(undefined8 *)(puVar24 + -0x19d0);
  *(undefined8 *)(puVar24 + -0x1a10) = 0x106eb9;
  iVar14 = internal_dfa_match(puVar24 + -0x18d8,*(undefined8 *)(puVar24 + -0x18c0),puVar25,
                              *(undefined8 *)(puVar24 + -0x19d8),param_6 + 0xd,
                              (uint)uVar1 + (uint)uVar1);
  if ((iVar14 != -1) || (iVar28 != 0)) {
    lVar15 = *(long *)(puVar24 + -0x1950);
    uVar13 = *(uint *)(puVar24 + -0x1954);
    lVar23 = (long)puVar25 - lVar15 >> 2;
    if (iVar14 == -2) {
      if (*(short *)((long)param_6 + 0x62) != 0) {
        param_6[0xd] = lVar23;
        param_6[0xe] = (long)puVar22 - lVar15 >> 2;
      }
      uVar18 = *(undefined8 *)(puVar24 + -0x19c8);
      param_6[0xb] = lVar23;
      *(undefined4 *)((long)param_6 + 100) = 0xfffffffe;
      param_6[8] = uVar18;
      param_6[9] = *(long *)(puVar24 + -0x18a8) - lVar15 >> 2;
      param_6[10] = *(long *)(puVar24 + -0x18a0) - lVar15 >> 2;
    }
    else {
      uVar18 = *(undefined8 *)(puVar24 + -0x19c8);
      param_6[0xb] = lVar23;
      *(int *)((long)param_6 + 100) = iVar14;
      param_6[8] = uVar18;
      param_6[9] = *(long *)(puVar24 + -0x18a8) - lVar15 >> 2;
      param_6[10] = *(long *)(puVar24 + -0x18a0) - lVar15 >> 2;
      if (iVar14 < 0) goto LAB_00106d86;
      if ((uVar13 & 0x4000) != 0) {
        iVar28 = *(int *)(puVar24 + -0x1958);
        lVar23 = *(long *)(puVar24 + -0x19c8);
        *(long *)(puVar24 + -0x19e8) = lVar15;
        uVar18 = param_6[2];
        pcVar8 = (code *)*param_6;
        *(undefined8 *)(puVar24 + -0x19f0) = 0x1073f8;
        __dest = (void *)(*pcVar8)((iVar28 + lVar23) * 4,uVar18);
        param_6[4] = __dest;
        if (__dest != (void *)0x0) {
          *(undefined8 *)(puVar24 + -0x19f0) = 0x107414;
          memcpy(__dest,*(void **)(puVar24 + -0x19e8),(iVar28 + lVar23) * 4);
          *(byte *)((long)param_6 + 0x61) = *(byte *)((long)param_6 + 0x61) | 1;
          goto LAB_00106d86;
        }
        iVar14 = -0x30;
        goto LAB_00106928;
      }
    }
    param_6[4] = lVar15;
    goto LAB_00106d86;
  }
  if (iVar5 != 0) {
    puVar16 = *(uint **)(puVar24 + -0x18b0);
    if (*(int *)(puVar24 + -0x1864) == 0) {
      if (((puVar25 <= puVar16 + -(ulong)*(uint *)(puVar24 + -0x1860)) &&
          (*puVar25 == *(uint *)(puVar24 + -0x1858))) &&
         ((*(uint *)(puVar24 + -0x1860) == 1 || (puVar25[1] == *(uint *)(puVar24 + -0x1854)))))
      goto LAB_00106d80;
    }
    else if (puVar25 < puVar16) {
      *(undefined8 *)(puVar24 + -0x19f0) = 0x10702d;
      iVar14 = _pcre2_is_newline_32(puVar25,*(int *)(puVar24 + -0x1864),puVar16,puVar24 + -0x1860);
      if (iVar14 != 0) goto LAB_00106d80;
    }
  }
  puVar16 = puVar25 + 1;
  if (puVar22 < puVar16) goto LAB_00106d80;
  if ((((*puVar25 == 0xd) && (puVar16 < puVar22)) && (puVar25[1] == 10)) &&
     (((*(byte *)((long)param_1 + 0x61) & 8) == 0 &&
      ((*(int *)(puVar24 + -0x1864) - 1U < 2 || (*(int *)(puVar24 + -0x1860) == 2)))))) {
    puVar16 = puVar25 + 2;
  }
  goto LAB_00106bf0;
LAB_00107233:
  if ((((puVar25[-1] == 0xd) && (*(int *)(puVar24 + -0x1864) - 1U < 2)) && (puVar25 < puVar16)) &&
     (*puVar25 == 10)) {
    puVar25 = puVar25 + 1;
  }
  goto LAB_00106cde;
LAB_00106d80:
  iVar14 = -1;
LAB_00106d86:
  puVar6 = *(undefined8 **)(puVar24 + -0x1818);
  while (puVar6 != (undefined8 *)0x0) {
    *(undefined8 *)(puVar24 + -0x1818) = *puVar6;
    *(undefined8 *)(puVar24 + -0x19f0) = 0x106dba;
    (**(code **)(puVar24 + -0x18d0))(puVar6,*(undefined8 *)(puVar24 + -0x18c8));
    puVar6 = *(undefined8 **)(puVar24 + -0x1818);
  }
  goto LAB_00106928;
}


// This is taking way too long.