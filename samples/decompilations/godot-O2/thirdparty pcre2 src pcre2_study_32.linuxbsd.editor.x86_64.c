
uint * set_table_bit(long param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  param_2 = param_2 + 1;
  if (uVar4 < 0x100) {
    pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(uVar4 >> 3));
    *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar4 & 7));
    if (param_3 == 0) {
      return param_2;
    }
    if (param_4 == 0 && param_5 == 0) {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + (ulong)(uVar4 + 0x100));
      pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(bVar2 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << (bVar2 & 7));
      return param_2;
    }
  }
  else {
    *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
    if ((param_3 == 0) || (param_4 == 0 && param_5 == 0)) {
      return param_2;
    }
    if (0x10ffff < uVar4) {
      puVar3 = &_pcre2_dummy_ucd_record_32;
      goto LAB_001000a7;
    }
  }
  puVar3 = &_pcre2_ucd_records_32 +
           (ulong)*(ushort *)
                   (&_pcre2_ucd_stage2_32 +
                   (long)(int)((uint)*(ushort *)
                                      (&_pcre2_ucd_stage1_32 + (long)((int)uVar4 >> 7) * 2) * 0x80 +
                              (uVar4 & 0x7f)) * 2) * 0xc;
LAB_001000a7:
  uVar4 = uVar4 + *(int *)(puVar3 + 4);
  if (uVar4 < 0x100) {
    pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(uVar4 >> 3));
    *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar4 & 7));
    return param_2;
  }
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
  return param_2;
}



uint find_minlength(long param_1,int *param_2,long param_3,int param_4,long *param_5,int *param_6,
                   uint *param_7)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  long in_FS_OFFSET;
  uint local_a8;
  int local_a4;
  uint local_8c;
  uint local_88;
  uint local_80;
  uint local_60;
  long *local_58;
  uint *local_50;
  long local_40;
  
  uVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = uVar15;
  if (4 < *param_2 - 0x8cU) {
    uVar11 = *(uint *)(param_1 + 0x60);
    puVar14 = (uint *)(param_2 + 3);
    if (1 < *param_2 - 0x89U) {
      puVar14 = (uint *)(param_2 + 2);
    }
    uVar3 = param_2[1];
    iVar12 = *param_6;
    *param_6 = iVar12 + 1;
    if (iVar12 < 0x3e9) {
      uVar11 = uVar11 & 0x200000;
      bVar2 = false;
      puVar18 = (uint *)(param_2 + uVar3);
      local_a4 = 0;
      local_60 = 0;
      local_80 = 0xffffffff;
      local_8c = 0;
      local_88 = 0xffffffff;
      local_a8 = 0xffffffff;
LAB_001001f0:
      iVar12 = local_a4;
      if ((int)uVar15 < 0xffff) goto LAB_00100200;
LAB_001001f8:
      puVar14 = puVar18;
      uVar15 = 0xffff;
      puVar18 = puVar14;
LAB_00100200:
      uVar16 = *puVar14;
      uVar5 = (ulong)uVar16;
      if (0x99 < uVar16) {
        if (uVar16 < 0xa6) {
          uVar13 = 1L << ((char)uVar16 + 0x66U & 0x3f);
          if ((uVar13 & 0x2aa) != 0) goto switchD_00100225_caseD_76;
          if ((uVar13 & 0x155) == 0) goto LAB_00100361;
          puVar14 = puVar14 + ((uint)(byte)(&_pcre2_OP_lengths_32)[uVar5] + puVar14[1]);
          goto LAB_001001f0;
        }
        if (uVar16 == 0xa7) goto switchD_00100225_caseD_97;
        if ((uVar16 < 0xa8) || (uVar16 - 0xa9 < 2)) goto switchD_00100225_caseD_76;
switchD_00100225_caseD_62:
        uVar3 = 0xfffffffd;
        goto LAB_00100275;
      }
      uVar3 = uVar15;
      if (uVar16 < 0x55) {
        switch(uVar5) {
        case 0:
          if ((-1 < (int)local_a8) && (((int)local_a8 <= (int)uVar15 || (bVar2)))) {
            uVar3 = local_a8;
          }
          goto LAB_00100275;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
          goto switchD_00100225_caseD_76;
        case 0xe:
          if (param_4 != 0) goto LAB_00100361;
          uVar15 = uVar15 + 1;
          puVar14 = puVar14 + 1;
          break;
        case 0xf:
        case 0x10:
          puVar14 = puVar14 + 2;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
          uVar15 = uVar15 + 1;
          puVar14 = puVar14 + 1;
          break;
        default:
          uVar13 = 1L << ((char)uVar16 - 0x1dU & 0x3f);
          if ((uVar13 & 0xd79ebcf5e7af30) != 0) goto switchD_00100225_caseD_76;
          if ((uVar13 & 0x206103081840cf) == 0) {
            if ((uVar13 & 0x8004002001000) != 0) goto LAB_001003b4;
            goto switchD_00100225_caseD_62;
          }
          uVar15 = uVar15 + 1;
          puVar14 = puVar14 + 2;
        }
        goto LAB_001001f0;
      }
      switch(uVar16) {
      case 0x55:
      case 0x56:
      case 0x59:
      case 0x5a:
      case 0x5e:
      case 0x60:
        uVar3 = puVar14[1];
        goto LAB_001003c6;
      case 0x57:
      case 0x58:
      case 0x5f:
        uVar15 = uVar15 + 1;
        puVar14 = (uint *)((long)puVar14 + (ulong)(-(uint)(puVar14[1] - 0xf < 2) & 8) + 8);
        goto LAB_001001f0;
      case 0x5b:
      case 0x5c:
      case 0x61:
        uVar3 = puVar14[2];
LAB_001003c6:
        if (uVar3 - 0xf < 2) {
          puVar14 = puVar14 + 2;
        }
        puVar14 = puVar14 + (byte)(&_pcre2_OP_lengths_32)[uVar5];
        goto LAB_001001f0;
      case 0x5d:
        uVar15 = uVar15 + puVar14[1];
        puVar14 = (uint *)((long)puVar14 + (ulong)(-(uint)(puVar14[2] - 0xf < 2) & 8) + 0xc);
        goto LAB_001001f0;
      default:
        goto switchD_00100225_caseD_62;
      case 0x6e:
      case 0x6f:
      case 0x70:
        if (uVar16 == 0x70) {
          uVar3 = puVar14[1];
        }
        else {
          uVar3 = (uint)DAT_0010208e;
        }
        puVar14 = puVar14 + uVar3;
        if (*puVar14 - 0x62 < 0xc) {
          uVar5 = 1L << ((byte)(*puVar14 - 0x62) & 0x3f);
          if ((uVar5 & 0x533) != 0) goto LAB_00100512;
          if ((uVar5 & 0x8c0) != 0) {
LAB_001003b4:
            uVar15 = uVar15 + puVar14[1];
            puVar14 = puVar14 + 3;
            goto LAB_001001f0;
          }
          if ((uVar5 & 0x20c) != 0) {
            uVar15 = uVar15 + 1;
            goto LAB_00100512;
          }
        }
        uVar15 = uVar15 + 1;
        goto LAB_001001f0;
      case 0x71:
      case 0x72:
        goto switchD_00100225_caseD_71;
      case 0x73:
      case 0x74:
        uVar3 = 0;
        if ((uVar11 != 0) || ((*(byte *)(param_1 + 0x59) & 2) != 0)) goto LAB_0010056b;
        uVar16 = puVar14[2];
        puVar10 = (uint *)(param_1 + 0x88 +
                          (ulong)((uint)*(ushort *)(param_1 + 0x84) * puVar14[1]) * 4);
        uVar3 = 0x7fffffff;
        if ((int)uVar16 < 1) goto LAB_0010056b;
        uVar17 = 0x7fffffff;
        goto LAB_00100829;
      case 0x75:
        puVar10 = (uint *)(param_3 + (ulong)puVar14[1] * 4);
        uVar16 = puVar10[2];
        puVar6 = puVar10;
        if (local_80 != uVar16) goto LAB_00100708;
        uVar15 = uVar15 + local_60;
        goto LAB_0010068a;
      case 0x76:
      case 0x7d:
      case 0x7e:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
        goto switchD_00100225_caseD_76;
      case 0x77:
        puVar14 = puVar14 + puVar14[3];
        goto LAB_001001f0;
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
        if ((-1 < (int)local_a8) && ((bVar2 || ((int)local_a8 <= (int)uVar15)))) {
          uVar3 = local_a8;
        }
        if ((uVar16 == 0x78) && (uVar3 != 0)) goto code_r0x00100415;
        goto LAB_00100275;
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
        goto switchD_00100225_caseD_7f;
      case 0x85:
      case 0x86:
      case 0x88:
      case 0x8c:
      case 0x8d:
        break;
      case 0x87:
        if ((puVar14[2] == 0x75) && (puVar14[4] == 0x79)) {
          local_a4 = 2;
          puVar14 = puVar14 + 2;
          goto LAB_001001f0;
        }
        break;
      case 0x89:
      case 0x8a:
      case 0x8e:
      case 0x8f:
        uVar16 = puVar14[2];
        if (((local_88 != uVar16) || (uVar11 != 0)) &&
           (uVar3 = find_minlength(param_1,puVar14,param_3,param_4,param_5,param_6,param_7),
           local_8c = uVar3, local_88 = uVar16, (int)uVar3 < 0)) goto LAB_00100275;
        uVar15 = uVar15 + local_8c;
        do {
          puVar14 = puVar14 + puVar14[1];
        } while (*puVar14 == 0x78);
        puVar14 = puVar14 + 2;
        goto LAB_001001f0;
      case 0x8b:
      case 0x90:
        if (puVar14[puVar14[1]] != 0x78) {
          puVar14 = puVar14 + puVar14[1] + 2;
          goto LAB_001001f0;
        }
        break;
      case 0x97:
      case 0x98:
      case 0x99:
        goto switchD_00100225_caseD_97;
      }
      uVar3 = find_minlength(param_1,puVar14,param_3,param_4,param_5,param_6,param_7);
      if ((int)uVar3 < 0) goto LAB_00100275;
      uVar15 = uVar15 + uVar3;
      do {
        puVar14 = puVar14 + puVar14[1];
      } while (*puVar14 == 0x78);
      puVar14 = puVar14 + 2;
      goto LAB_001001f0;
    }
LAB_00100361:
    uVar3 = 0xffffffff;
  }
LAB_00100275:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100225_caseD_97:
  puVar14 = puVar14 + (byte)(&_pcre2_OP_lengths_32)[uVar5];
  do {
    puVar14 = puVar14 + puVar14[1];
  } while (*puVar14 == 0x78);
  puVar14 = puVar14 + 2;
  goto LAB_001001f0;
switchD_00100225_caseD_7f:
  do {
    puVar14 = puVar14 + puVar14[1];
    uVar5 = (ulong)*puVar14;
  } while (*puVar14 == 0x78);
switchD_00100225_caseD_76:
  puVar14 = puVar14 + (byte)(&_pcre2_OP_lengths_32)[uVar5];
  goto LAB_001001f0;
code_r0x00100415:
  uVar15 = 0;
  bVar2 = false;
  puVar18 = puVar14 + puVar14[1];
  puVar14 = puVar14 + 2;
  local_a8 = uVar3;
  goto LAB_00100200;
LAB_00100708:
  do {
    puVar6 = puVar6 + puVar6[1];
  } while (*puVar6 == 0x78);
  if ((puVar10 < puVar14) && (puVar14 < puVar6)) {
LAB_00100726:
    bVar2 = true;
  }
  else {
    plVar9 = param_5;
    if (param_5 != (long *)0x0) {
      do {
        if ((uint *)plVar9[1] == puVar10) goto LAB_00100726;
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
    local_58 = param_5;
    local_50 = puVar10;
    uVar3 = find_minlength(param_1,puVar10,param_3,param_4,&local_58);
    if ((int)uVar3 < 0) goto LAB_00100275;
    uVar15 = uVar15 + uVar3;
    local_80 = uVar16;
    local_60 = uVar3;
  }
LAB_0010068a:
  local_a4 = 0;
  puVar14 = puVar14 + (iVar12 + 2);
  goto LAB_001001f0;
  while( true ) {
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
    uVar3 = uVar17;
    if ((uVar17 == 0) || (puVar10 = puVar10 + *(ushort *)(param_1 + 0x84), uVar16 == 0)) break;
LAB_00100829:
    uVar16 = uVar16 - 1;
    uVar1 = *puVar10;
    if (((int)*param_7 < (int)uVar1) || (uVar3 = param_7[(int)uVar1], (int)uVar3 < 0)) {
      puVar7 = (uint *)_pcre2_find_bracket_32(param_3,param_4,uVar1);
      puVar6 = puVar7;
      if (puVar7 == (uint *)0x0) goto LAB_00100ba3;
      do {
        puVar6 = puVar6 + puVar6[1];
      } while (*puVar6 == 0x78);
      if ((puVar7 < puVar14) && (puVar14 < puVar6)) {
LAB_0010088b:
        bVar2 = true;
        uVar3 = 0;
      }
      else {
        plVar9 = param_5;
        if (param_5 != (long *)0x0) {
          do {
            if ((uint *)plVar9[1] == puVar7) goto LAB_0010088b;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        local_58 = param_5;
        local_50 = puVar7;
        uVar3 = find_minlength(param_1,puVar7,param_3,param_4,&local_58,param_6,param_7);
        if ((int)uVar3 < 0) goto LAB_00100275;
      }
      param_7[(int)uVar1] = uVar3;
      iVar4 = *param_7 + 1;
      if (iVar4 < (int)uVar1) {
        memset(param_7 + iVar4,0xff,(ulong)((-2 - *param_7) + uVar1) * 4 + 4);
      }
      *param_7 = uVar1;
    }
  }
LAB_0010056b:
  puVar10 = puVar14 + 3;
  goto LAB_0010056f;
switchD_00100225_caseD_71:
  uVar16 = puVar14[1];
  if (((int)*param_7 < (int)uVar16) || (uVar3 = param_7[(int)uVar16], (int)uVar3 < 0)) {
    uVar3 = 0;
    if ((*(byte *)(param_1 + 0x59) & 2) == 0) {
      puVar6 = (uint *)_pcre2_find_bracket_32(param_3,param_4,uVar16);
      puVar10 = puVar6;
      if (puVar6 == (uint *)0x0) {
LAB_00100ba3:
        uVar3 = 0xfffffffe;
        goto LAB_00100275;
      }
      do {
        puVar10 = puVar10 + puVar10[1];
      } while (*puVar10 == 0x78);
      if ((uVar11 == 0) || (lVar8 = _pcre2_find_bracket_32(puVar10,param_4,uVar16), lVar8 == 0)) {
        if ((puVar6 < puVar14) && (puVar14 < puVar10)) {
LAB_0010079c:
          bVar2 = true;
          uVar3 = 0;
        }
        else {
          plVar9 = param_5;
          if (param_5 != (long *)0x0) {
            do {
              if ((uint *)plVar9[1] == puVar6) goto LAB_0010079c;
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
          local_58 = param_5;
          local_50 = puVar6;
          uVar3 = find_minlength(param_1,puVar6,param_3,param_4,&local_58,param_6,param_7);
          if ((int)uVar3 < 0) goto LAB_00100275;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    param_7[(int)uVar16] = uVar3;
    iVar4 = *param_7 + 1;
    if (iVar4 < (int)uVar16) {
      memset(param_7 + iVar4,0xff,(ulong)((uVar16 - *param_7) - 2) * 4 + 4);
    }
    *param_7 = uVar16;
  }
  puVar10 = puVar14 + 2;
LAB_0010056f:
  puVar14 = puVar10;
  if (*puVar10 - 0x62 < 0xc) {
    uVar5 = 1L << ((byte)(*puVar10 - 0x62) & 0x3f);
    if ((uVar5 & 0x533) != 0) {
LAB_00100512:
      puVar14 = puVar14 + 1;
      goto LAB_001001f0;
    }
    if ((uVar5 & 0x8c0) != 0) {
      puVar14 = puVar10 + 3;
      if (uVar3 == 0) goto LAB_001001f0;
      if ((int)puVar10[1] <= (int)(0x7fffffff / (long)(int)uVar3)) goto code_r0x0010093a;
      goto LAB_001001f8;
    }
    if ((uVar5 & 0x20c) != 0) {
      puVar14 = puVar10 + 1;
    }
  }
  if (uVar3 != 0) goto LAB_001005a7;
  goto LAB_001001f0;
code_r0x0010093a:
  uVar3 = uVar3 * puVar10[1];
LAB_001005a7:
  iVar12 = 0xffff - uVar15;
  uVar15 = uVar15 + uVar3;
  if (iVar12 < (int)uVar3) {
    uVar15 = 0xffff;
  }
  goto LAB_001001f0;
}



int set_start_bits(long param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  byte bVar8;
  uint *puVar9;
  int iVar10;
  
  iVar3 = *param_5;
  *param_5 = iVar3 + 1;
  if (1000 < iVar3 + 1) {
    return 4;
  }
  iVar3 = *param_2;
  iVar10 = 1;
  do {
    if ((iVar3 - 0x89U < 2) || (puVar6 = (uint *)(param_2 + 2), iVar3 - 0x8eU < 2)) {
      puVar6 = (uint *)(param_2 + 3);
    }
LAB_00100c2f:
    uVar2 = *puVar6;
    puVar9 = puVar6;
joined_r0x00100c36:
    if (0xaa < uVar2) {
LAB_00100c4b:
      return 3;
    }
    switch((long)&switchD_00100c42::switchdataD_00101800 +
           (long)(int)(&switchD_00100c42::switchdataD_00101800)[*puVar9]) {
    case 0x100c48:
      goto LAB_00100c4b;
    case 0x100c60:
      do {
        puVar9 = puVar9 + puVar9[1];
      } while (*puVar9 == 0x78);
    case 0x100c6e:
      goto switchD_00100c42_caseD_100c6e;
    case 0x100c80:
      goto LAB_00100c4b;
    case 0x100c90:
      goto switchD_00100c42_caseD_100c90;
    case 0x100cc0:
switchD_00100c42_caseD_100cc0:
      iVar3 = set_start_bits(param_1,puVar9,param_3,param_4,param_5);
      if (iVar3 != 1) {
        if (iVar3 != 2) {
          return iVar3;
        }
        do {
          puVar9 = puVar9 + puVar9[1];
        } while (*puVar9 == 0x78);
        puVar9 = puVar9 + 2;
        goto LAB_00100c72;
      }
      break;
    case 0x100d00:
      puVar9 = puVar9 + 1;
switchD_00100c42_caseD_100d04:
      switch(puVar9[1]) {
      case 6:
        lVar4 = *(long *)(param_1 + 0x18);
        lVar7 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
          *pbVar1 = *pbVar1 | ~*(byte *)(lVar4 + 0x240 + lVar7);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x20);
        break;
      case 7:
        lVar4 = *(long *)(param_1 + 0x18);
        lVar7 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
          *pbVar1 = *pbVar1 | *(byte *)(lVar4 + 0x240 + lVar7);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x20);
        break;
      case 8:
        lVar4 = *(long *)(param_1 + 0x18);
        lVar7 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
          *pbVar1 = *pbVar1 | ~*(byte *)(lVar4 + 0x200 + lVar7);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x20);
        break;
      case 9:
        lVar4 = *(long *)(param_1 + 0x18);
        lVar7 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
          *pbVar1 = *pbVar1 | *(byte *)(lVar4 + 0x200 + lVar7);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x20);
        break;
      case 10:
        lVar4 = *(long *)(param_1 + 0x18);
        lVar7 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
          *pbVar1 = *pbVar1 | ~*(byte *)(lVar4 + 0x2a0 + lVar7);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x20);
        break;
      case 0xb:
        lVar4 = *(long *)(param_1 + 0x18);
        lVar7 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
          *pbVar1 = *pbVar1 | *(byte *)(lVar4 + 0x2a0 + lVar7);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x20);
        break;
      default:
LAB_00100c4b:
        return 0;
      case 0x11:
      case 0x15:
        *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x3c;
        *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 0x20;
        *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
        break;
      case 0x13:
        *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 2;
        *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
        *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
LAB_001011bc:
        *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
        puVar9 = puVar9 + 2;
        goto LAB_00100c72;
      }
      goto switchD_00100c42_caseD_100c6e;
    case 0x100d04:
      goto switchD_00100c42_caseD_100d04;
    case 0x100d24:
      puVar9 = puVar9 + 1;
    case 0x100d28:
      goto switchD_00100c42_caseD_100d28;
    case 0x100d68:
      puVar9 = puVar9 + 1;
    case 0x100d6c:
      goto switchD_00100c42_caseD_100d6c;
    case 0x100d81:
      *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
switchD_00100c42_caseD_100d85:
      puVar6 = puVar9 + 1;
      puVar9 = puVar9 + 9;
LAB_00100d8d:
      lVar4 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar4);
        *pbVar1 = *pbVar1 | *(byte *)((long)puVar6 + lVar4);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x20);
LAB_00100da2:
      if (0xb < *puVar9 - 0x62) break;
      uVar5 = 1L << ((byte)(*puVar9 - 0x62) & 0x3f);
      if ((uVar5 & 0x533) == 0) {
        if (((uVar5 & 0x8c0) == 0) || (puVar9[1] != 0)) break;
        puVar6 = puVar9 + 3;
      }
      else {
switchD_00100c42_caseD_100c90:
        puVar6 = puVar9 + 1;
      }
      goto LAB_00100c2f;
    case 0x100d85:
      goto switchD_00100c42_caseD_100d85;
    case 0x100df0:
      uVar2 = puVar9[1];
      if (uVar2 < 0x100) {
        pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(uVar2 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar2 & 7));
        goto switchD_00100c42_caseD_100c6e;
      }
      goto LAB_001011bc;
    case 0x100e20:
      puVar9 = puVar9 + 1;
      goto LAB_00100e24;
    case 0x100e60:
      return 2;
    case 0x100e70:
      puVar9 = puVar9 + 1;
      iVar3 = set_start_bits(param_1,puVar9,param_3,param_4,param_5);
      if (iVar3 == 3) {
        return 3;
      }
      if (iVar3 == 4) {
        return 4;
      }
      if (iVar3 == 0) {
        return 0;
      }
      do {
        puVar9 = puVar9 + puVar9[1];
      } while (*puVar9 == 0x78);
switchD_00100c42_caseD_100c6e:
      puVar9 = puVar9 + 2;
LAB_00100c72:
      uVar2 = *puVar9;
      goto joined_r0x00100c36;
    case 0x100ec0:
      puVar9 = puVar9 + 2;
LAB_00100e24:
      puVar6 = (uint *)set_table_bit(param_1,puVar9,1,param_3,param_4);
      goto LAB_00100c2f;
    case 0x100ed0:
      uVar2 = puVar9[2];
      puVar6 = puVar9 + 3;
      if (uVar2 < 0x100) {
        pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(uVar2 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar2 & 7));
      }
      else {
        *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
      }
      goto LAB_00100c2f;
    case 0x100eef:
      *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x3c;
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 0x20;
      *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
      break;
    case 0x100f00:
      goto switchD_00100c42_caseD_100f00;
    case 0x100f61:
      puVar6 = puVar9 + DAT_0010203b;
      goto LAB_00100c2f;
    case 0x100f72:
      lVar4 = *(long *)(param_1 + 0x18);
      lVar7 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
        *pbVar1 = *pbVar1 | ~*(byte *)(lVar4 + 0x200 + lVar7);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x20);
      break;
    case 0x100f9d:
      lVar4 = *(long *)(param_1 + 0x18);
      lVar7 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
        *pbVar1 = *pbVar1 | *(byte *)(lVar4 + 0x200 + lVar7);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x20);
      break;
    case 0x100fc3:
      lVar4 = *(long *)(param_1 + 0x18);
      lVar7 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
        *pbVar1 = *pbVar1 | ~*(byte *)(lVar4 + 0x2a0 + lVar7);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x20);
      break;
    case 0x100fed:
      puVar9 = puVar9 + 1;
      do {
        puVar9 = puVar9 + puVar9[1];
      } while (*puVar9 == 0x78);
      puVar9 = puVar9 + 2;
      goto LAB_00100c72;
    case 0x10100f:
      if (puVar9[1] != 10) {
        return 0;
      }
      uVar2 = *(uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)puVar9[2] * 4);
      puVar6 = (uint *)(&DAT_00102044 + (ulong)puVar9[2] * 4);
      while (uVar2 != 0xffffffff) {
        if (uVar2 < 0x100) {
          pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(uVar2 >> 3));
          *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar2 & 7));
        }
        else {
          *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
        }
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
      }
      break;
    case 0x10106e:
      *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 2;
      *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
      *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
      break;
    case 0x101083:
      lVar4 = *(long *)(param_1 + 0x18);
      lVar7 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
        *pbVar1 = *pbVar1 | *(byte *)(lVar4 + 0x2a0 + lVar7);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x20);
      break;
    case 0x1010ab:
      lVar4 = *(long *)(param_1 + 0x18);
      lVar7 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
        *pbVar1 = *pbVar1 | ~*(byte *)(lVar4 + 0x240 + lVar7);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x20);
      break;
    case 0x1010d5:
      lVar4 = *(long *)(param_1 + 0x18);
      lVar7 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
        *pbVar1 = *pbVar1 | *(byte *)(lVar4 + 0x240 + lVar7);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x20);
      break;
    case 0x1010fb:
      uVar2 = puVar9[2];
      if ((uVar2 & 4) != 0) {
        return 0;
      }
      if ((uVar2 & 3) == 1) {
        return 0;
      }
      bVar8 = *(byte *)(param_1 + 0x47) | 0x80;
      if ((uVar2 & 2) != 0) {
        *(byte *)(param_1 + 0x47) = bVar8;
        puVar6 = puVar9 + 3;
        puVar9 = puVar9 + puVar9[1];
        goto LAB_00100d8d;
      }
      *(byte *)(param_1 + 0x47) = bVar8;
      puVar9 = puVar9 + puVar9[1];
      goto LAB_00100da2;
    case 0x101133:
      puVar6 = puVar9 + DAT_00102096;
      goto LAB_00100c2f;
    case 0x101144:
      puVar6 = puVar9 + puVar9[3];
      goto LAB_00100c2f;
    case 0x101215:
      iVar10 = 2;
    }
LAB_00100d48:
    param_2 = param_2 + (uint)param_2[1];
    iVar3 = *param_2;
    if (iVar3 != 0x78) {
      return iVar10;
    }
  } while( true );
switchD_00100c42_caseD_100f00:
  puVar6 = puVar9 + puVar9[1];
  uVar2 = *puVar6;
  while (uVar2 == 0x78) {
    puVar6 = puVar6 + puVar6[1];
    uVar2 = *puVar6;
  }
  do {
    puVar6 = puVar6 + 2;
LAB_00100f20:
    uVar2 = *puVar6;
    while( true ) {
      if (uVar2 == 0x77) goto LAB_00100f58;
      if (0x77 < uVar2) break;
      if (uVar2 < 6) {
        if (3 < uVar2) goto LAB_00101191;
        goto switchD_00100c42_caseD_100cc0;
      }
      if (uVar2 != 0x76) {
        if ((0x38 < uVar2) ||
           (((0x1430a18602a0fc0U >> ((ulong)uVar2 & 0x3f) & 1) == 0 &&
            ((uVar2 != 0x10 || (puVar6[1] != 10)))))) goto switchD_00100c42_caseD_100cc0;
        goto LAB_00100c2f;
      }
      puVar6 = puVar6 + DAT_00102096;
      uVar2 = *puVar6;
    }
    if (0x84 < uVar2) {
      if (1 < uVar2 - 0xa9) goto switchD_00100c42_caseD_100cc0;
LAB_00101191:
      puVar6 = puVar6 + 1;
      goto LAB_00100f20;
    }
    if (uVar2 < 0x7f) goto switchD_00100c42_caseD_100cc0;
    do {
      puVar6 = puVar6 + puVar6[1];
    } while (*puVar6 == 0x78);
  } while( true );
LAB_00100f58:
  puVar6 = puVar6 + puVar6[3];
  goto LAB_00100f20;
switchD_00100c42_caseD_100d28:
  set_table_bit(param_1,puVar9 + 1,1,param_3,param_4);
  goto LAB_00100d48;
switchD_00100c42_caseD_100d6c:
  uVar2 = puVar9[1];
  if (uVar2 < 0x100) {
    pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(uVar2 >> 3));
    *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar2 & 7));
  }
  else {
    *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
  }
  goto LAB_00100d48;
}


