
ushort * set_table_bit(long param_1,ushort *param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar3 = *param_2;
  uVar4 = (uint)uVar3;
  puVar5 = param_2 + 1;
  if (uVar3 < 0x100) {
    pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(uVar3 >> 3));
    *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar3 & 7));
    if (param_3 == 0) {
      return puVar5;
    }
    if (param_5 == 0 && param_4 == 0) {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + (ulong)(uVar3 + 0x100));
      pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(bVar2 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << (bVar2 & 7));
      return puVar5;
    }
  }
  else {
    *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
    if (param_4 == 0) {
      if (param_3 == 0) {
        return puVar5;
      }
      if (param_5 == 0) {
        return puVar5;
      }
    }
    else if ((uVar3 & 0xfc00) == 0xd800) {
      puVar5 = param_2 + 2;
      if (param_3 == 0) {
        return puVar5;
      }
      uVar4 = ((uVar3 & 0x3ff) << 10 | param_2[1] & 0x3ff) + 0x10000;
    }
    else if (param_3 == 0) {
      return puVar5;
    }
  }
  uVar4 = uVar4 + *(int *)(&DAT_00102014 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_16 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_16 +
                                                     (long)((int)uVar4 >> 7) * 2) * 0x80 +
                                             (uVar4 & 0x7f)) * 2) * 0xc);
  if (0xff < uVar4) {
    *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
    return puVar5;
  }
  pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(uVar4 >> 3));
  *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar4 & 7));
  return puVar5;
}



uint find_minlength(long param_1,short *param_2,long param_3,int param_4,long *param_5,int *param_6,
                   uint *param_7)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort *puVar7;
  long lVar8;
  long *plVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  long in_FS_OFFSET;
  uint local_b0;
  int local_ac;
  uint local_94;
  uint local_90;
  uint local_88;
  uint local_60;
  long *local_58;
  ushort *local_50;
  long local_40;
  
  uVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = uVar15;
  if (4 < (ushort)(*param_2 - 0x8cU)) {
    uVar11 = *(uint *)(param_1 + 0x60);
    puVar10 = (ushort *)(param_2 + 3);
    if (1 < (ushort)(*param_2 - 0x89U)) {
      puVar10 = (ushort *)(param_2 + 2);
    }
    uVar1 = param_2[1];
    iVar12 = *param_6;
    *param_6 = iVar12 + 1;
    if (iVar12 < 0x3e9) {
      uVar11 = uVar11 & 0x200000;
      bVar2 = false;
      puVar18 = (ushort *)(param_2 + uVar1);
      local_ac = 0;
      local_60 = 0;
      local_88 = 0xffffffff;
      local_94 = 0;
      local_90 = 0xffffffff;
      local_b0 = 0xffffffff;
LAB_00100228:
      iVar12 = local_ac;
      puVar14 = puVar10;
      if ((int)uVar15 < 0xffff) goto LAB_00100238;
LAB_00100230:
      puVar14 = puVar18;
      uVar15 = 0xffff;
      puVar18 = puVar14;
LAB_00100238:
      uVar1 = *puVar14;
      uVar5 = (ulong)uVar1;
      if (0x99 < uVar1) {
        if (uVar1 < 0xa6) {
          uVar13 = 1L << ((char)uVar1 + 0x66U & 0x3f);
          if ((uVar13 & 0x2aa) != 0) goto switchD_00100262_caseD_76;
          if ((uVar13 & 0x155) == 0) goto LAB_001003b0;
          puVar10 = puVar14 + (int)((uint)(byte)(&_pcre2_OP_lengths_16)[uVar5] + (uint)puVar14[1]);
          goto LAB_00100228;
        }
        if (uVar1 != 0xa7) {
          if ((uVar1 < 0xa8) || ((ushort)(uVar1 - 0xa9) < 2)) goto switchD_00100262_caseD_76;
switchD_00100262_caseD_62:
          uVar3 = 0xfffffffd;
          goto LAB_001002b5;
        }
switchD_00100262_caseD_97:
        puVar14 = puVar14 + (byte)(&_pcre2_OP_lengths_16)[uVar5];
        do {
          puVar14 = puVar14 + puVar14[1];
        } while (*puVar14 == 0x78);
        puVar10 = puVar14 + 2;
        goto LAB_00100228;
      }
      uVar3 = uVar15;
      if (uVar1 < 0x55) {
        switch(uVar5) {
        case 0:
          if ((-1 < (int)local_b0) && (((int)local_b0 <= (int)uVar15 || (bVar2)))) {
            uVar3 = local_b0;
          }
          goto LAB_001002b5;
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
          goto switchD_00100262_caseD_76;
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
          break;
        case 0xe:
          if (param_4 != 0) goto LAB_001003b0;
          break;
        case 0xf:
        case 0x10:
          puVar14 = puVar14 + 2;
          break;
        default:
          uVar13 = 1L << ((char)uVar1 - 0x1dU & 0x3f);
          if ((uVar13 & 0xd79ebcf5e7af30) == 0) {
            if ((uVar13 & 0x206103081840cf) == 0) {
              if ((uVar13 & 0x8004002001000) == 0) goto switchD_00100262_caseD_62;
              uVar15 = uVar15 + puVar14[1];
              puVar10 = puVar14 + 3;
              if ((param_4 != 0) && (puVar10 = puVar14 + 4, (puVar14[2] & 0xfc00) != 0xd800)) {
                puVar10 = puVar14 + 3;
              }
            }
            else {
              uVar15 = uVar15 + 1;
              puVar10 = puVar14 + 2;
              if ((param_4 != 0) && (puVar10 = puVar14 + 3, (puVar14[1] & 0xfc00) != 0xd800)) {
                puVar10 = puVar14 + 2;
              }
            }
          }
          else {
            puVar10 = puVar14 + (byte)(&_pcre2_OP_lengths_16)[uVar5];
            if ((param_4 != 0) && ((puVar10[-1] & 0xfc00) == 0xd800)) {
              puVar10 = puVar10 + 1;
            }
          }
          goto LAB_00100228;
        }
switchD_00100360_caseD_6:
        uVar15 = uVar15 + 1;
        goto LAB_0010036f;
      }
      switch(uVar1) {
      case 0x55:
      case 0x56:
      case 0x59:
      case 0x5a:
      case 0x5e:
      case 0x60:
        uVar1 = puVar14[1];
        goto LAB_0010043f;
      case 0x57:
      case 0x58:
      case 0x5f:
        uVar15 = uVar15 + 1;
        puVar10 = (ushort *)
                  ((long)puVar14 + (ulong)(-(uint)((ushort)(puVar14[1] - 0xf) < 2) & 4) + 4);
        goto LAB_00100228;
      case 0x5b:
      case 0x5c:
      case 0x61:
        uVar1 = puVar14[2];
LAB_0010043f:
        if ((ushort)(uVar1 - 0xf) < 2) {
          puVar14 = puVar14 + 2;
        }
        puVar10 = puVar14 + (byte)(&_pcre2_OP_lengths_16)[uVar5];
        goto LAB_00100228;
      case 0x5d:
        uVar15 = uVar15 + puVar14[1];
        puVar10 = (ushort *)
                  ((long)puVar14 + (ulong)(-(uint)((ushort)(puVar14[2] - 0xf) < 2) & 4) + 6);
        goto LAB_00100228;
      default:
        goto switchD_00100262_caseD_62;
      case 0x6e:
      case 0x6f:
      case 0x70:
        if (uVar1 == 0x70) {
          uVar5 = (ulong)puVar14[1];
        }
        else {
          uVar5 = (ulong)DAT_00102086;
        }
        puVar14 = puVar14 + uVar5;
        if ((ushort)(*puVar14 - 0x62) < 0xc) {
          uVar5 = 1L << ((byte)(*puVar14 - 0x62) & 0x3f);
          if ((uVar5 & 0x533) != 0) goto LAB_0010036f;
          if ((uVar5 & 0x8c0) != 0) {
            uVar15 = uVar15 + puVar14[1];
            puVar10 = puVar14 + 3;
            goto LAB_00100228;
          }
          if ((uVar5 & 0x20c) != 0) goto switchD_00100360_caseD_6;
        }
        uVar15 = uVar15 + 1;
        puVar10 = puVar14;
        goto LAB_00100228;
      case 0x71:
      case 0x72:
        goto switchD_00100262_caseD_71;
      case 0x73:
      case 0x74:
        uVar3 = 0;
        if ((uVar11 != 0) || ((*(byte *)(param_1 + 0x59) & 2) != 0)) goto LAB_0010064a;
        puVar10 = (ushort *)
                  (param_1 + 0x88 +
                  (long)(int)((uint)puVar14[1] * (uint)*(ushort *)(param_1 + 0x84)) * 2);
        if (puVar14[2] != 0) {
          uVar16 = (uint)puVar14[2];
          uVar19 = 0x7fffffff;
          goto LAB_00100937;
        }
        uVar3 = 0x7fffffff;
        goto LAB_0010064a;
      case 0x75:
        puVar10 = (ushort *)(param_3 + (ulong)puVar14[1] * 2);
        uVar1 = puVar10[2];
        puVar6 = puVar10;
        if (local_88 != uVar1) goto LAB_00100810;
        uVar15 = uVar15 + local_60;
        goto LAB_00100761;
      case 0x76:
      case 0x7d:
      case 0x7e:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
        goto switchD_00100262_caseD_76;
      case 0x77:
        puVar10 = puVar14 + puVar14[3];
        goto LAB_00100228;
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
        if ((-1 < (int)local_b0) && ((bVar2 || ((int)local_b0 <= (int)uVar15)))) {
          uVar3 = local_b0;
        }
        if ((uVar1 == 0x78) && (uVar3 != 0)) goto code_r0x00100490;
        goto LAB_001002b5;
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
        goto switchD_00100262_caseD_7f;
      case 0x85:
      case 0x86:
      case 0x88:
      case 0x8c:
      case 0x8d:
        break;
      case 0x87:
        if ((puVar14[2] == 0x75) && (puVar14[4] == 0x79)) {
          local_ac = 2;
          puVar10 = puVar14 + 2;
          goto LAB_00100228;
        }
        break;
      case 0x89:
      case 0x8a:
      case 0x8e:
      case 0x8f:
        uVar1 = puVar14[2];
        if (((local_90 != uVar1) || (uVar11 != 0)) &&
           (uVar3 = find_minlength(param_1,puVar14,param_3,param_4,param_5), local_94 = uVar3,
           local_90 = (uint)uVar1, (int)uVar3 < 0)) goto LAB_001002b5;
        uVar15 = uVar15 + local_94;
        do {
          puVar14 = puVar14 + puVar14[1];
        } while (*puVar14 == 0x78);
        puVar10 = puVar14 + 2;
        goto LAB_00100228;
      case 0x8b:
      case 0x90:
        goto switchD_00100262_caseD_8b;
      case 0x97:
      case 0x98:
      case 0x99:
        goto switchD_00100262_caseD_97;
      }
      goto switchD_00100262_caseD_85;
    }
LAB_001003b0:
    uVar3 = 0xffffffff;
  }
LAB_001002b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100262_caseD_8b:
  if (puVar14[puVar14[1]] != 0x78) {
    puVar10 = puVar14 + puVar14[1] + 2;
    goto LAB_00100228;
  }
switchD_00100262_caseD_85:
  uVar3 = find_minlength(param_1,puVar14,param_3,param_4,param_5,param_6,param_7);
  if ((int)uVar3 < 0) goto LAB_001002b5;
  uVar15 = uVar15 + uVar3;
  do {
    puVar14 = puVar14 + puVar14[1];
  } while (*puVar14 == 0x78);
  puVar10 = puVar14 + 2;
  goto LAB_00100228;
switchD_00100262_caseD_7f:
  do {
    puVar14 = puVar14 + puVar14[1];
    uVar5 = (ulong)*puVar14;
  } while (*puVar14 == 0x78);
switchD_00100262_caseD_76:
  puVar10 = puVar14 + (byte)(&_pcre2_OP_lengths_16)[uVar5];
  goto LAB_00100228;
code_r0x00100490:
  uVar15 = 0;
  bVar2 = false;
  puVar18 = puVar14 + puVar14[1];
  puVar14 = puVar14 + 2;
  local_b0 = uVar3;
  goto LAB_00100238;
LAB_00100810:
  do {
    puVar6 = puVar6 + puVar6[1];
  } while (*puVar6 == 0x78);
  if ((puVar10 < puVar14) && (puVar14 < puVar6)) {
LAB_00100830:
    bVar2 = true;
  }
  else {
    plVar9 = param_5;
    if (param_5 != (long *)0x0) {
      do {
        if ((ushort *)plVar9[1] == puVar10) goto LAB_00100830;
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
    local_58 = param_5;
    local_50 = puVar10;
    uVar3 = find_minlength(param_1,puVar10,param_3,param_4,&local_58,param_6,param_7);
    if ((int)uVar3 < 0) goto LAB_001002b5;
    uVar15 = uVar15 + uVar3;
    local_88 = (uint)uVar1;
    local_60 = uVar3;
  }
LAB_00100761:
  local_ac = 0;
  puVar10 = puVar14 + (iVar12 + 2);
  goto LAB_00100228;
  while( true ) {
    puVar10 = puVar10 + *(ushort *)(param_1 + 0x84);
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) break;
LAB_00100937:
    uVar1 = *puVar10;
    uVar17 = (uint)uVar1;
    if (((int)*param_7 < (int)uVar17) || (uVar3 = param_7[uVar1], (int)uVar3 < 0)) {
      puVar7 = (ushort *)_pcre2_find_bracket_16(param_3,param_4,uVar17);
      puVar6 = puVar7;
      if (puVar7 == (ushort *)0x0) goto LAB_00100cfc;
      do {
        puVar6 = puVar6 + puVar6[1];
      } while (*puVar6 == 0x78);
      if ((puVar7 < puVar14) && (puVar14 < puVar6)) {
LAB_001009a5:
        bVar2 = true;
        uVar3 = 0;
      }
      else {
        plVar9 = param_5;
        if (param_5 != (long *)0x0) {
          do {
            if ((ushort *)plVar9[1] == puVar7) goto LAB_001009a5;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        local_58 = param_5;
        local_50 = puVar7;
        uVar3 = find_minlength(param_1,puVar7,param_3,param_4,&local_58,param_6,param_7);
        if ((int)uVar3 < 0) goto LAB_001002b5;
      }
      param_7[uVar1] = uVar3;
      iVar4 = *param_7 + 1;
      if (iVar4 < (int)uVar17) {
        memset(param_7 + iVar4,0xff,(ulong)((-2 - *param_7) + (uint)uVar1) * 4 + 4);
      }
      *param_7 = uVar17;
    }
    if ((int)uVar3 < (int)uVar19) {
      uVar19 = uVar3;
    }
    uVar3 = uVar19;
    if (uVar19 == 0) break;
  }
LAB_0010064a:
  puVar14 = puVar14 + 3;
  goto LAB_0010064e;
switchD_00100262_caseD_71:
  uVar1 = puVar14[1];
  uVar19 = (uint)uVar1;
  if (((int)*param_7 < (int)uVar19) || (uVar3 = param_7[uVar1], (int)uVar3 < 0)) {
    uVar3 = 0;
    if ((*(byte *)(param_1 + 0x59) & 2) == 0) {
      puVar6 = (ushort *)_pcre2_find_bracket_16(param_3,param_4,uVar19);
      puVar10 = puVar6;
      if (puVar6 == (ushort *)0x0) {
LAB_00100cfc:
        uVar3 = 0xfffffffe;
        goto LAB_001002b5;
      }
      do {
        puVar10 = puVar10 + puVar10[1];
      } while (*puVar10 == 0x78);
      if ((uVar11 == 0) || (lVar8 = _pcre2_find_bracket_16(puVar10,param_4,uVar19), lVar8 == 0)) {
        if ((puVar6 < puVar14) && (puVar14 < puVar10)) {
LAB_001008a4:
          bVar2 = true;
          uVar3 = 0;
        }
        else {
          plVar9 = param_5;
          if (param_5 != (long *)0x0) {
            do {
              if ((ushort *)plVar9[1] == puVar6) goto LAB_001008a4;
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
          local_58 = param_5;
          local_50 = puVar6;
          uVar3 = find_minlength(param_1,puVar6,param_3,param_4,&local_58,param_6,param_7);
          if ((int)uVar3 < 0) goto LAB_001002b5;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    param_7[uVar1] = uVar3;
    iVar4 = *param_7 + 1;
    uVar19 = (uint)uVar1;
    if (iVar4 < (int)uVar19) {
      memset(param_7 + iVar4,0xff,(ulong)((uVar19 - *param_7) - 2) * 4 + 4);
    }
    *param_7 = uVar19;
  }
  puVar14 = puVar14 + 2;
LAB_0010064e:
  puVar10 = puVar14;
  if ((ushort)(*puVar14 - 0x62) < 0xc) {
    uVar5 = 1L << ((byte)(*puVar14 - 0x62) & 0x3f);
    if ((uVar5 & 0x533) != 0) {
LAB_0010036f:
      puVar10 = puVar14 + 1;
      goto LAB_00100228;
    }
    if ((uVar5 & 0x8c0) != 0) {
      puVar10 = puVar14 + 3;
      if (uVar3 == 0) goto LAB_00100228;
      if ((int)(uint)puVar14[1] <= (int)(0x7fffffff / (long)(int)uVar3)) goto code_r0x00100a63;
      goto LAB_00100230;
    }
    if ((uVar5 & 0x20c) != 0) {
      puVar10 = puVar14 + 1;
    }
  }
  if (uVar3 != 0) goto LAB_0010068c;
  goto LAB_00100228;
code_r0x00100a63:
  uVar3 = uVar3 * puVar14[1];
LAB_0010068c:
  iVar12 = 0xffff - uVar15;
  uVar15 = uVar15 + uVar3;
  if (iVar12 < (int)uVar3) {
    uVar15 = 0xffff;
  }
  goto LAB_00100228;
}



int set_start_bits(long param_1,short *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  byte *pbVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ushort *puVar9;
  long lVar10;
  byte bVar11;
  ushort *puVar12;
  int iVar13;
  
  iVar13 = *param_5;
  *param_5 = iVar13 + 1;
  if (1000 < iVar13 + 1) {
    return 4;
  }
  sVar2 = *param_2;
  iVar13 = 1;
  do {
    if (((ushort)(sVar2 - 0x8eU) < 2) ||
       (puVar9 = (ushort *)(param_2 + 2), (ushort)(sVar2 - 0x89U) < 2)) {
      puVar9 = (ushort *)(param_2 + 3);
    }
LAB_00100d81:
    uVar3 = *puVar9;
    puVar12 = puVar9;
joined_r0x00100d86:
    if (0xaa < uVar3) {
LAB_00100d9b:
      return 3;
    }
    switch((long)&switchD_00100d92::switchdataD_00101940 +
           (long)(int)(&switchD_00100d92::switchdataD_00101940)[*puVar12]) {
    case 0x100d98:
      goto LAB_00100d9b;
    case 0x100db0:
      do {
        puVar12 = puVar12 + puVar12[1];
      } while (*puVar12 == 0x78);
    case 0x100dbe:
      goto switchD_00100d92_caseD_100dbe;
    case 0x100dd0:
      goto LAB_00100d9b;
    case 0x100de0:
      goto switchD_00100d92_caseD_100de0;
    case 0x100e18:
switchD_00100d92_caseD_100e18:
      iVar6 = set_start_bits(param_1,puVar12,param_3,param_4,param_5);
      if (iVar6 != 1) {
        if (iVar6 != 2) {
          return iVar6;
        }
        do {
          puVar12 = puVar12 + puVar12[1];
        } while (*puVar12 == 0x78);
        puVar12 = puVar12 + 2;
        goto LAB_00100dc2;
      }
      break;
    case 0x100e60:
      puVar12 = puVar12 + 1;
switchD_00100d92_caseD_100e64:
      switch(puVar12[1]) {
      case 6:
        lVar7 = *(long *)(param_1 + 0x18);
        lVar10 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
          *pbVar1 = *pbVar1 | ~*(byte *)(lVar7 + 0x240 + lVar10);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x20);
        break;
      case 7:
        lVar7 = *(long *)(param_1 + 0x18);
        lVar10 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
          *pbVar1 = *pbVar1 | *(byte *)(lVar7 + 0x240 + lVar10);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x20);
        break;
      case 8:
        lVar7 = *(long *)(param_1 + 0x18);
        lVar10 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
          *pbVar1 = *pbVar1 | ~*(byte *)(lVar7 + 0x200 + lVar10);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x20);
        break;
      case 9:
        lVar7 = *(long *)(param_1 + 0x18);
        lVar10 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
          *pbVar1 = *pbVar1 | *(byte *)(lVar7 + 0x200 + lVar10);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x20);
        break;
      case 10:
        lVar7 = *(long *)(param_1 + 0x18);
        lVar10 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
          *pbVar1 = *pbVar1 | ~*(byte *)(lVar7 + 0x2a0 + lVar10);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x20);
        break;
      case 0xb:
        lVar7 = *(long *)(param_1 + 0x18);
        lVar10 = 0;
        do {
          pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
          *pbVar1 = *pbVar1 | *(byte *)(lVar7 + 0x2a0 + lVar10);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x20);
        break;
      default:
LAB_00100d9b:
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
        *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
      }
      goto switchD_00100d92_caseD_100dbe;
    case 0x100e64:
      goto switchD_00100d92_caseD_100e64;
    case 0x100e89:
      puVar12 = puVar12 + 1;
    case 0x100e8d:
      goto switchD_00100d92_caseD_100e8d;
    case 0x100ed0:
      puVar12 = puVar12 + 1;
    case 0x100ed4:
      goto switchD_00100d92_caseD_100ed4;
    case 0x100eed:
      *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
switchD_00100d92_caseD_100ef3:
      puVar9 = puVar12 + 1;
      puVar12 = puVar12 + 0x11;
LAB_00100efb:
      lVar7 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar7);
        *pbVar1 = *pbVar1 | *(byte *)((long)puVar9 + lVar7);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x20);
LAB_00100f13:
      if (0xb < (ushort)(*puVar12 - 0x62)) break;
      uVar8 = 1L << ((byte)(*puVar12 - 0x62) & 0x3f);
      if ((uVar8 & 0x533) == 0) {
        if (((uVar8 & 0x8c0) == 0) || (puVar12[1] != 0)) break;
        puVar9 = puVar12 + 3;
      }
      else {
switchD_00100d92_caseD_100de0:
        puVar9 = puVar12 + 1;
      }
      goto LAB_00100d81;
    case 0x100ef3:
      goto switchD_00100d92_caseD_100ef3;
    case 0x100f68:
      puVar12 = puVar12 + 1;
      goto LAB_00100f6c;
    case 0x100f90:
      puVar12 = puVar12 + 1;
      goto LAB_00100f94;
    case 0x100fb8:
      return 2;
    case 0x100fc8:
      puVar12 = puVar12 + 2;
LAB_00100f6c:
      puVar9 = (ushort *)set_table_bit(param_1,puVar12,0,param_3,param_4);
      goto LAB_00100d81;
    case 0x100fd0:
      puVar12 = puVar12 + 1;
      iVar6 = set_start_bits(param_1,puVar12,param_3,param_4,param_5);
      if (iVar6 == 3) {
        return 3;
      }
      if (iVar6 == 4) {
        return 4;
      }
      if (iVar6 == 0) {
        return 0;
      }
      do {
        puVar12 = puVar12 + puVar12[1];
      } while (*puVar12 == 0x78);
switchD_00100d92_caseD_100dbe:
      puVar12 = puVar12 + 2;
LAB_00100dc2:
      uVar3 = *puVar12;
      goto joined_r0x00100d86;
    case 0x101020:
      puVar12 = puVar12 + 2;
LAB_00100f94:
      puVar9 = (ushort *)set_table_bit(param_1,puVar12,1,param_3,param_4);
      goto LAB_00100d81;
    case 0x101029:
      goto switchD_00100d92_caseD_101029;
    case 0x101093:
      *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x3c;
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 0x20;
      *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
      break;
    case 0x1010aa:
      lVar7 = *(long *)(param_1 + 0x18);
      lVar10 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
        *pbVar1 = *pbVar1 | ~*(byte *)(lVar7 + 0x200 + lVar10);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x20);
      break;
    case 0x1010d6:
      lVar7 = *(long *)(param_1 + 0x18);
      lVar10 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
        *pbVar1 = *pbVar1 | *(byte *)(lVar7 + 0x200 + lVar10);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x20);
      break;
    case 0x1010fc:
      *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 2;
      *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
      *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
      break;
    case 0x101119:
      puVar9 = puVar12 + DAT_00102033;
      goto LAB_00100d81;
    case 0x101129:
      puVar9 = puVar12 + puVar12[3];
      goto LAB_00100d81;
    case 0x101136:
      puVar12 = puVar12 + 1;
      do {
        puVar12 = puVar12 + puVar12[1];
      } while (*puVar12 == 0x78);
      puVar12 = puVar12 + 2;
      goto LAB_00100dc2;
    case 0x101157:
      if (puVar12[1] != 10) {
        return 0;
      }
      uVar4 = *(uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)puVar12[2] * 4);
      puVar5 = (uint *)(&DAT_0010203c + (ulong)puVar12[2] * 4);
      while (uVar4 != 0xffffffff) {
        if (uVar4 < 0x100) {
          pbVar1 = (byte *)(param_1 + 0x28 + (ulong)(uVar4 >> 3));
          *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar4 & 7));
        }
        else {
          *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 0x80;
        }
        uVar4 = *puVar5;
        puVar5 = puVar5 + 1;
      }
      break;
    case 0x1011c0:
      lVar7 = *(long *)(param_1 + 0x18);
      lVar10 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
        *pbVar1 = *pbVar1 | ~*(byte *)(lVar7 + 0x2a0 + lVar10);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x20);
      break;
    case 0x1011ee:
      lVar7 = *(long *)(param_1 + 0x18);
      lVar10 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
        *pbVar1 = *pbVar1 | *(byte *)(lVar7 + 0x2a0 + lVar10);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x20);
      break;
    case 0x101214:
      lVar7 = *(long *)(param_1 + 0x18);
      lVar10 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
        *pbVar1 = *pbVar1 | ~*(byte *)(lVar7 + 0x240 + lVar10);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x20);
      break;
    case 0x10123e:
      lVar7 = *(long *)(param_1 + 0x18);
      lVar10 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x28 + lVar10);
        *pbVar1 = *pbVar1 | *(byte *)(lVar7 + 0x240 + lVar10);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x20);
      break;
    case 0x101264:
      uVar3 = puVar12[2];
      if ((uVar3 & 4) != 0) {
        return 0;
      }
      if ((uVar3 & 3) == 1) {
        return 0;
      }
      bVar11 = *(byte *)(param_1 + 0x47) | 0x80;
      if ((uVar3 & 2) != 0) {
        *(byte *)(param_1 + 0x47) = bVar11;
        puVar9 = puVar12 + 3;
        puVar12 = puVar12 + puVar12[1];
        goto LAB_00100efb;
      }
      *(byte *)(param_1 + 0x47) = bVar11;
      puVar12 = puVar12 + puVar12[1];
      goto LAB_00100f13;
    case 0x1012a2:
      puVar9 = puVar12 + DAT_0010208e;
      goto LAB_00100d81;
    case 0x10133d:
      iVar13 = 2;
    }
LAB_00100eb0:
    param_2 = param_2 + (ushort)param_2[1];
    sVar2 = *param_2;
    if (sVar2 != 0x78) {
      return iVar13;
    }
  } while( true );
switchD_00100d92_caseD_101029:
  puVar9 = puVar12 + puVar12[1];
  uVar3 = *puVar9;
  while (uVar3 == 0x78) {
    puVar9 = puVar9 + puVar9[1];
    uVar3 = *puVar9;
  }
  do {
    puVar9 = puVar9 + 2;
LAB_00101052:
    uVar3 = *puVar9;
    while( true ) {
      if (uVar3 == 0x77) goto LAB_00101089;
      if (0x77 < uVar3) break;
      if (uVar3 < 6) {
        if (3 < uVar3) goto LAB_001012f2;
        goto switchD_00100d92_caseD_100e18;
      }
      if (uVar3 != 0x76) {
        if ((0x38 < uVar3) ||
           (((0x1430a18602a0fc0U >> ((ulong)uVar3 & 0x3f) & 1) == 0 &&
            ((uVar3 != 0x10 || (puVar9[1] != 10)))))) goto switchD_00100d92_caseD_100e18;
        goto LAB_00100d81;
      }
      puVar9 = puVar9 + DAT_0010208e;
      uVar3 = *puVar9;
    }
    if (0x84 < uVar3) {
      if (1 < (ushort)(uVar3 - 0xa9)) goto switchD_00100d92_caseD_100e18;
LAB_001012f2:
      puVar9 = puVar9 + 1;
      goto LAB_00101052;
    }
    if (uVar3 < 0x7f) goto switchD_00100d92_caseD_100e18;
    do {
      puVar9 = puVar9 + puVar9[1];
    } while (*puVar9 == 0x78);
  } while( true );
LAB_00101089:
  puVar9 = puVar9 + puVar9[3];
  goto LAB_00101052;
switchD_00100d92_caseD_100e8d:
  set_table_bit(param_1,puVar12 + 1,1,param_3,param_4);
  goto LAB_00100eb0;
switchD_00100d92_caseD_100ed4:
  set_table_bit(param_1,puVar12 + 1,0,param_3,param_4);
  goto LAB_00100eb0;
}


