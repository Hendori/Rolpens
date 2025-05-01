
void sljit_free_compiler(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    (**(code **)(lVar1 + 8))(puVar3,*(undefined8 *)(lVar1 + 0x10));
    puVar3 = puVar2;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    (**(code **)(lVar1 + 8))(puVar3,*(undefined8 *)(lVar1 + 0x10));
    puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0010005a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,*(undefined8 *)(lVar1 + 0x10));
  return;
}



ushort * next_opcode(long param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  if (uVar1 == 0x70) {
    return param_2 + param_2[1];
  }
  if (uVar1 < 0x71) {
    if (uVar1 < 0x55) {
      if (0x1c < uVar1) {
        param_2 = param_2 + (byte)(&_pcre2_OP_lengths_16)[uVar1];
        if (*(int *)(param_1 + 0x1e0) == 0) {
          return param_2;
        }
        if ((param_2[-1] & 0xfc00) == 0xd800) {
          return param_2 + 1;
        }
        return param_2;
      }
      if (uVar1 == 0xe) {
        if (*(int *)(param_1 + 0x1e0) != 0) {
          return (ushort *)0x0;
        }
        return param_2 + 1;
      }
      if ((uVar1 < 0xf) && (0xc < (ushort)(uVar1 - 1))) {
        return (ushort *)0x0;
      }
    }
    else if (uVar1 < 0x62) {
      return param_2 + ((ulong)(byte)(&_pcre2_OP_lengths_16)[uVar1] - 1);
    }
LAB_00100172:
    return param_2 + (byte)(&_pcre2_OP_lengths_16)[uVar1];
  }
  uVar2 = uVar1 - 0x71;
  if (uVar2 < 0x3a) {
    uVar3 = 1L << ((byte)uVar2 & 0x3f);
    if ((uVar3 & 0x37d55ffffffffbf) != 0) goto LAB_00100172;
    if ((uVar3 & 0x2aa0000000000) != 0) {
      return param_2 + (ulong)param_2[1] + 3;
    }
    if (uVar2 == 6) {
      return param_2 + param_2[3];
    }
  }
  return (ushort *)0x0;
}



undefined8 check_opcode_types(undefined8 param_1,short *param_2,short *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 extraout_XMM0_Qa;
  
  if (param_3 <= param_2) {
    return 1;
  }
  puVar2 = &DAT_00133dc0;
  uVar1 = _LC0;
  while( true ) {
    if ((ushort)(*param_2 - 3U) < 0xa3) {
                    /* WARNING: Could not recover jumptable at 0x001001f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(puVar2 + *(int *)(puVar2 + (ulong)(ushort)(*param_2 - 3U) * 4)))(uVar1);
      return uVar1;
    }
    param_2 = (short *)next_opcode(param_1);
    if (param_2 == (short *)0x0) break;
    uVar1 = extraout_XMM0_Qa;
    if (param_3 <= param_2) {
      return 1;
    }
  }
  return 0;
}



int detect_early_fail(long param_1,short *param_2,int *param_3,int param_4,int param_5)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  short sVar6;
  short *psVar7;
  short *psVar8;
  long lVar9;
  short *psVar10;
  int iVar11;
  int local_58;
  
  if ((param_2[(ushort)param_2[1]] == 0x78) && (param_5 < 1)) {
    param_5 = 1;
  }
  iVar11 = 0;
  lVar5 = (ulong)(*param_2 == 0x89) * 2 + 4;
  psVar7 = param_2;
  psVar10 = param_2 + (ushort)param_2[1];
  do {
    sVar2 = *(short *)((long)psVar7 + lVar5);
    psVar7 = (short *)((long)psVar7 + lVar5);
    iVar3 = param_5;
LAB_001004d8:
    switch(sVar2) {
    default:
      goto switchD_001004ed_caseD_0;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      if (iVar3 < 1) {
        iVar3 = 1;
      }
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
    case 0xa9:
    case 0xaa:
      sVar2 = psVar7[1];
      psVar7 = psVar7 + 1;
      goto LAB_001004d8;
    case 0xf:
    case 0x10:
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      sVar2 = psVar7[3];
      psVar7 = psVar7 + 3;
      goto LAB_001004d8;
    case 0x11:
    case 0x16:
      if (iVar3 < 3) {
        iVar3 = 3;
      }
      sVar2 = psVar7[1];
      psVar7 = psVar7 + 1;
      goto LAB_001004d8;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
      psVar8 = psVar7 + 2;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      if (*(int *)(param_1 + 0x1e0) != 0) {
        uVar1 = psVar7[1];
        goto joined_r0x0010059d;
      }
      goto LAB_001005a3;
    case 0x21:
    case 0x23:
    case 0x2a:
    case 0x2b:
    case 0x2e:
    case 0x30:
    case 0x37:
    case 0x38:
    case 0x3b:
    case 0x3d:
    case 0x44:
    case 0x45:
    case 0x48:
    case 0x4a:
    case 0x51:
    case 0x52:
switchD_001004ed_caseD_21:
      psVar8 = psVar7 + 2;
      if ((*(int *)(param_1 + 0x1e0) != 0) && ((psVar7[1] & 0xfc00U) == 0xd800)) {
        psVar8 = psVar7 + 3;
      }
      goto joined_r0x001007a5;
    case 0x22:
    case 0x24:
    case 0x2f:
    case 0x31:
    case 0x3c:
    case 0x3e:
    case 0x49:
    case 0x4b:
      if (iVar3 != 2) goto switchD_001004ed_caseD_21;
      psVar8 = psVar7 + 2;
      if (*(int *)(param_1 + 0x1e0) == 0) {
LAB_00100a40:
        iVar3 = 3;
      }
      else {
        iVar3 = 3;
        if ((psVar7[1] & 0xfc00U) == 0xd800) {
          psVar8 = psVar7 + 3;
        }
      }
      goto LAB_001006e0;
    case 0x25:
    case 0x26:
    case 0x2c:
    case 0x32:
    case 0x33:
    case 0x39:
    case 0x3f:
    case 0x40:
    case 0x46:
    case 0x4c:
    case 0x4d:
    case 0x53:
      goto switchD_001004ed_caseD_25;
    case 0x27:
    case 0x28:
    case 0x2d:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x3a:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x47:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x54:
      psVar7 = psVar7 + 1;
switchD_001004ed_caseD_25:
      psVar8 = psVar7 + 2;
      if (iVar3 < 3) {
        iVar3 = 3;
      }
      if (*(int *)(param_1 + 0x1e0) != 0) {
        uVar1 = psVar7[1];
joined_r0x0010059d:
        if ((uVar1 & 0xfc00) == 0xd800) {
          sVar2 = psVar7[3];
          psVar7 = psVar7 + 3;
          goto LAB_001004d8;
        }
      }
LAB_001005a3:
      sVar2 = psVar7[2];
      psVar7 = psVar8;
      goto LAB_001004d8;
    case 0x29:
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      if ((*(int *)(param_1 + 0x1e0) == 0) || ((psVar7[2] & 0xfc00U) != 0xd800)) {
        sVar2 = psVar7[3];
        psVar7 = psVar7 + 3;
      }
      else {
        sVar2 = psVar7[4];
        psVar7 = psVar7 + 4;
      }
      goto LAB_001004d8;
    case 0x55:
    case 0x57:
    case 0x5e:
    case 0x5f:
      goto switchD_001004ed_caseD_55;
    case 0x56:
    case 0x58:
      if (iVar3 == 2) {
        sVar2 = psVar7[1];
        if ((sVar2 != 0x16) && (iVar3 = 3, psVar8 = psVar7 + 1, sVar2 != 0x11)) goto LAB_001006e0;
        iVar3 = 3;
        psVar7 = psVar7 + 1;
        goto LAB_001004d8;
      }
switchD_001004ed_caseD_55:
      sVar2 = psVar7[1];
      psVar8 = psVar7 + 1;
      if ((sVar2 == 0x11) || (sVar2 == 0x16)) {
        psVar7 = psVar8;
        if (iVar3 < 3) {
          iVar3 = 3;
        }
        goto LAB_001004d8;
      }
joined_r0x001007a5:
      if (iVar3 == 0) {
        lVar5 = *(long *)(param_1 + 0x10);
        iVar3 = *param_3;
        *(short **)(param_1 + 0x70) = psVar7;
        lVar9 = *(long *)(param_1 + 0x18);
        *(int *)(lVar9 + ((long)psVar7 + (2 - lVar5) >> 1) * 4) = iVar3 << 3;
        *param_3 = *param_3 + 8;
LAB_0010054b:
        iVar3 = 4;
        *(undefined4 *)(lVar9 + ((long)param_2 - lVar5 >> 1) * 4) = 1;
        sVar2 = *psVar8;
        psVar7 = psVar8;
        goto LAB_001004d8;
      }
      if (iVar3 < 3) {
        lVar5 = *(long *)(param_1 + 0x10);
        lVar9 = *(long *)(param_1 + 0x18);
        *(int *)(lVar9 + ((long)psVar7 + (2 - lVar5) >> 1) * 4) = *param_3 * 8 + 1;
        if (*(int *)(param_1 + 0x78) == 0) {
          *(int *)(param_1 + 0x78) = *param_3;
        }
        iVar3 = *param_3 + 8;
        *param_3 = iVar3;
        *(int *)(param_1 + 0x7c) = iVar3;
        if (0x100000 < iVar3) {
          return 6;
        }
        goto LAB_0010054b;
      }
LAB_001006e0:
      lVar5 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(param_1 + 0x18);
      *(int *)(lVar9 + ((long)psVar7 + (2 - lVar5) >> 1) * 4) = *param_3 * 8 + 2;
      if (*(int *)(param_1 + 0x78) == 0) {
        *(int *)(param_1 + 0x78) = *param_3;
      }
      iVar4 = *param_3 + 0x10;
      *param_3 = iVar4;
      *(int *)(param_1 + 0x7c) = iVar4;
      if (0x100000 < iVar4) {
        return 6;
      }
      iVar3 = iVar3 + 1;
      *(undefined4 *)(lVar9 + ((long)param_2 - lVar5 >> 1) * 4) = 1;
      sVar2 = *psVar8;
      psVar7 = psVar8;
      if (iVar3 < 6) goto LAB_001004d8;
switchD_001004ed_caseD_0:
      if ((ushort)(sVar2 - 0x78U) < 2) {
LAB_00100758:
        if (iVar11 < iVar3) {
          iVar11 = iVar3;
        }
      }
      else {
LAB_001009fc:
        iVar11 = 6;
      }
      sVar2 = *psVar10;
      lVar5 = 4;
      psVar7 = psVar10;
      psVar10 = psVar10 + (ushort)psVar10[1];
      if (sVar2 != 0x78) {
        return iVar11;
      }
      break;
    case 0x59:
    case 0x5a:
    case 0x60:
      goto LAB_0010068c;
    case 0x5b:
    case 0x5c:
    case 0x61:
      psVar7 = psVar7 + 1;
LAB_0010068c:
      if (iVar3 < 3) {
        iVar3 = 3;
      }
      sVar2 = psVar7[1];
      psVar7 = psVar7 + 1;
      goto LAB_001004d8;
    case 0x5d:
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      sVar2 = psVar7[2];
      psVar7 = psVar7 + 2;
      goto LAB_001004d8;
    case 0x6e:
    case 0x6f:
    case 0x70:
      lVar5 = 0x22;
      if (sVar2 == 0x70) {
        lVar5 = (ulong)(ushort)psVar7[1] * 2;
      }
      psVar8 = (short *)(lVar5 + (long)psVar7);
      sVar2 = *psVar8;
      switch(sVar2) {
      case 99:
      case 0x65:
        if (iVar3 == 2) {
          psVar8 = psVar8 + 1;
          goto LAB_00100a40;
        }
      case 0x62:
      case 100:
      case 0x6a:
      case 0x6b:
        psVar8 = psVar8 + 1;
        goto joined_r0x001007a5;
      case 0x66:
      case 0x67:
      case 0x6c:
        goto switchD_0010067f_caseD_66;
      case 0x68:
      case 0x69:
      case 0x6d:
        if (psVar8[1] == psVar8[2]) {
          sVar2 = psVar8[3];
          psVar7 = psVar8 + 3;
          if (iVar3 < 1) {
            iVar3 = 1;
          }
        }
        else {
          psVar8 = psVar8 + 2;
switchD_0010067f_caseD_66:
          if (iVar3 < 3) {
            iVar3 = 3;
          }
          sVar2 = psVar8[1];
          psVar7 = psVar8 + 1;
        }
        break;
      default:
        psVar7 = psVar8;
        if (iVar3 < 1) {
          iVar3 = 1;
        }
      }
      goto LAB_001004d8;
    case 0x79:
      if (psVar10 <= psVar7) goto LAB_00100758;
      sVar2 = psVar7[2];
      psVar7 = psVar7 + 2;
      goto LAB_001004d8;
    case 0x87:
    case 0x89:
      if (param_4 == 4) goto LAB_001009fc;
      local_58 = 1;
      if (0 < iVar3) {
        local_58 = iVar3;
      }
      psVar8 = psVar7 + (ushort)psVar7[1];
      sVar6 = *psVar8;
      if (2 < iVar3) goto LAB_00100a2d;
      if (sVar6 == 0x78) {
        local_58 = 3;
        do {
          psVar8 = psVar8 + (ushort)psVar8[1];
          sVar6 = *psVar8;
LAB_00100a2d:
        } while (sVar6 == 0x78);
      }
      if ((sVar6 != 0x79) ||
         ((sVar2 == 0x89 &&
          (*(char *)(*(long *)(param_1 + 0x28) + (ulong)(ushort)psVar7[2]) == '\0'))))
      goto LAB_001009fc;
      iVar4 = detect_early_fail(param_1,psVar7,param_3,param_4 + 1);
      iVar3 = local_58;
      if (local_58 <= iVar4) {
        iVar3 = iVar4;
      }
      if (*(int *)(*(long *)(param_1 + 0x18) + ((long)psVar7 - *(long *)(param_1 + 0x10) >> 1) * 4)
          != 0) {
        *(undefined4 *)
         (*(long *)(param_1 + 0x18) + ((long)param_2 - *(long *)(param_1 + 0x10) >> 1) * 4) = 1;
      }
      if (5 < iVar3) goto LAB_001009fc;
      sVar2 = psVar8[2];
      psVar7 = psVar8 + 2;
      goto LAB_001004d8;
    }
  } while( true );
}



uint get_class_iterator_size(short *param_1)

{
  uint uVar1;
  
  switch(*param_1) {
  case 0x62:
  case 100:
    return 2;
  case 99:
  case 0x65:
  case 0x66:
  case 0x67:
    return 1;
  case 0x68:
  case 0x69:
    break;
  default:
    return 0;
  }
  if (param_1[2] == 0) {
    return (*param_1 == 0x68) + 1;
  }
  uVar1 = (uint)(ushort)param_1[2] - (uint)(ushort)param_1[1];
  if (2 < uVar1) {
    uVar1 = 2;
  }
  return uVar1;
}



uint char_get_othercase_bit(long param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  uVar2 = (uint)uVar1;
  uVar3 = (uint)uVar1;
  if (*(int *)(param_1 + 0x1e0) == 0) {
    if (*(int *)(param_1 + 0x1e8) == 0) {
      if (0xff < uVar1) {
        return 0;
      }
      goto LAB_00100b43;
    }
  }
  else if ((uVar1 & 0xfc00) == 0xd800) {
    uVar2 = ((uVar1 & 0x3ff) << 10 | param_2[1] & 0x3ff) + 0x10000;
    goto LAB_00100ba2;
  }
  if (0x7f < uVar3) {
LAB_00100ba2:
    uVar3 = *(int *)(&DAT_0013a01c +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_16 +
                            (long)(int)((uint)*(ushort *)
                                               (&_pcre2_ucd_stage1_16 + (long)((int)uVar2 >> 7) * 2)
                                        * 0x80 + (uVar2 & 0x7f)) * 2) * 0xc) + uVar2 ^ uVar2;
    if ((uVar3 - 1 & uVar3) != 0) {
      return 0;
    }
    if ((0xffff < uVar2) && (*(int *)(param_1 + 0x1e0) != 0)) {
      if (uVar3 < 0x400) {
        uVar2 = uVar3 | 0x200;
        if (0xff < uVar3) {
          uVar2 = uVar3 >> 8 | 0x300;
        }
        return uVar2;
      }
      uVar3 = uVar3 >> 10;
    }
    if (0xff < uVar3) {
      uVar3 = uVar3 >> 8 | 0x100;
    }
    return uVar3;
  }
LAB_00100b43:
  uVar2 = *(byte *)(*(long *)(param_1 + 0x90) + (ulong)uVar1) ^ uVar3;
  if ((uVar3 < 0x80) && (uVar2 == 0x20)) {
    return 0x20;
  }
  if ((uVar2 - 1 & uVar2) != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



ushort * do_extuni_utf(long param_1,ushort *param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  bool bVar8;
  
  bVar8 = true;
  puVar6 = (ushort *)0x0;
  puVar7 = param_2;
  do {
    uVar3 = *puVar7;
    uVar5 = (uint)uVar3;
    if ((uVar3 & 0xfc00) == 0xd800) {
      puVar1 = puVar7 + 1;
      puVar7 = puVar7 + 2;
      uVar5 = ((uVar3 & 0x3ff) << 10 | *puVar1 & 0x3ff) + 0x10000;
    }
    else {
      puVar7 = puVar7 + 1;
    }
    uVar4 = (uint)(byte)(&DAT_0013a01a)
                        [(ulong)*(ushort *)
                                 (&_pcre2_ucd_stage2_16 +
                                 (long)(int)((uint)*(ushort *)
                                                    (&_pcre2_ucd_stage1_16 +
                                                    (long)((int)uVar5 >> 7) * 2) * 0x80 +
                                            (uVar5 & 0x7f)) * 2) * 0xc];
    if (bVar8) {
LAB_00100d0d:
      param_3 = uVar4;
    }
    else {
      if ((1 << ((&DAT_0013a01a)
                 [(ulong)*(ushort *)
                          (&_pcre2_ucd_stage2_16 +
                          (long)(int)((uint)*(ushort *)
                                             (&_pcre2_ucd_stage1_16 + (long)((int)uVar5 >> 7) * 2) *
                                      0x80 + (uVar5 & 0x7f)) * 2) * 0xc] & 0x1f) &
          *(uint *)(&_pcre2_ucp_gbtable_16 + (long)(int)param_3 * 4)) == 0) {
        return puVar6;
      }
      if ((param_3 == 0xb) && (uVar4 == 0xb)) {
        if (*(ushort **)(param_1 + 0x10) < param_2) {
          do {
            puVar1 = param_2 + -1;
            puVar2 = param_2 + -1;
            param_2 = param_2 + -2;
            if ((*puVar1 & 0xfc00) != 0xdc00) {
              param_2 = puVar2;
            }
            uVar3 = *param_2;
            uVar5 = (uint)uVar3;
            if ((uVar3 & 0xfc00) == 0xd800) {
              uVar5 = ((uVar3 & 0x3ff) << 10 | param_2[1] & 0x3ff) + 0x10000;
            }
          } while (((&DAT_0013a01a)
                    [(ulong)*(ushort *)
                             (&_pcre2_ucd_stage2_16 +
                             (long)(int)((uint)*(ushort *)
                                                (&_pcre2_ucd_stage1_16 + (long)((int)uVar5 >> 7) * 2
                                                ) * 0x80 + (uVar5 & 0x7f)) * 2) * 0xc] == '\v') &&
                  (bVar8 = (bool)(bVar8 ^ 1), *(ushort **)(param_1 + 0x10) < param_2));
          if (bVar8) {
            return puVar6;
          }
        }
        param_2 = puVar6;
        param_3 = 0xb;
      }
      else if (((uVar4 != 3) && (param_2 = puVar6, uVar4 != 0xd)) ||
              (param_2 = puVar6, param_3 != 0xe)) goto LAB_00100d0d;
    }
    if (*(ushort **)(param_1 + 0x18) <= puVar7) {
      return puVar7;
    }
    bVar8 = false;
    puVar6 = puVar7;
  } while( true );
}



ushort * do_extuni_utf_invalid(long param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  bool bVar9;
  
  bVar9 = true;
  puVar3 = *(ushort **)(param_1 + 0x10);
  puVar8 = param_2;
  puVar7 = (ushort *)0x0;
LAB_00100e68:
  uVar2 = *param_2;
  uVar6 = (uint)uVar2;
  if ((ushort)(uVar2 + 0x2800) < 0x800) {
    if (0xdbff < uVar2) {
      return puVar7;
    }
    if (*(ushort **)(param_1 + 0x18) <= param_2 + 1) {
      return puVar7;
    }
    puVar1 = param_2 + 1;
    if (0x3ff < (ushort)(*puVar1 + 0x2400)) {
      return puVar7;
    }
    param_2 = param_2 + 2;
    uVar6 = ((uVar6 - 0xd800) * 0x400 | *puVar1 - 0xdc00) + 0x10000;
  }
  else {
    param_2 = param_2 + 1;
  }
  uVar5 = (uint)(byte)(&DAT_0013a01a)
                      [(ulong)*(ushort *)
                               (&_pcre2_ucd_stage2_16 +
                               (long)(int)((uVar6 & 0x7f) +
                                          (uint)*(ushort *)
                                                 (&_pcre2_ucd_stage1_16 +
                                                 (long)((int)uVar6 >> 7) * 2) * 0x80) * 2) * 0xc];
  uVar4 = uVar5;
  if (bVar9) {
LAB_00100ee8:
    puVar7 = puVar8;
    uVar4 = uVar5;
  }
  else {
    if ((1 << ((&DAT_0013a01a)
               [(ulong)*(ushort *)
                        (&_pcre2_ucd_stage2_16 +
                        (long)(int)((uVar6 & 0x7f) +
                                   (uint)*(ushort *)
                                          (&_pcre2_ucd_stage1_16 + (long)((int)uVar6 >> 7) * 2) *
                                   0x80) * 2) * 0xc] & 0x1f) &
        *(uint *)(&_pcre2_ucp_gbtable_16 + (long)(int)in_EAX * 4)) == 0) {
      return puVar7;
    }
    if ((in_EAX == 0xb) && (uVar5 == 0xb)) {
      if (puVar3 < puVar8) {
        do {
          uVar2 = puVar8[-1];
          uVar6 = (uint)uVar2;
          if (uVar2 - 0xd800 < 0x800) {
            if (((uVar2 < 0xdc00) || (puVar8 + -1 <= puVar3)) ||
               (puVar1 = puVar8 + -2, 0x3ff < (ushort)(*puVar1 + 0x2800))) goto LAB_00100f60;
            puVar8 = puVar8 + -2;
            uVar6 = ((*puVar1 - 0xd800) * 0x400 | uVar6 - 0xdc00) + 0x10000;
          }
          else {
            puVar8 = puVar8 + -1;
          }
          if (((&DAT_0013a01a)
               [(ulong)*(ushort *)
                        (&_pcre2_ucd_stage2_16 +
                        (long)(int)((uVar6 & 0x7f) +
                                   (uint)*(ushort *)
                                          (&_pcre2_ucd_stage1_16 + (long)((int)uVar6 >> 7) * 2) *
                                   0x80) * 2) * 0xc] != '\v') ||
             (bVar9 = (bool)(bVar9 ^ 1), puVar8 <= puVar3)) goto LAB_00100f60;
        } while( true );
      }
    }
    else if (((uVar5 == 3) || (uVar5 == 0xd)) && (puVar8 = puVar7, uVar4 = in_EAX, in_EAX != 0xe))
    goto LAB_00100ee8;
  }
  goto LAB_00100eea;
LAB_00100f60:
  if (bVar9) {
    return puVar7;
  }
LAB_00100eea:
  in_EAX = uVar4;
  bVar9 = false;
  puVar8 = puVar7;
  puVar7 = param_2;
  if (*(ushort **)(param_1 + 0x18) <= param_2) {
    return param_2;
  }
  goto LAB_00100e68;
}



ushort * do_extuni_no_utf(long param_1,ushort *param_2)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  bool bVar7;
  
  puVar6 = param_2 + 1;
  uVar4 = (uint)(byte)(&DAT_0013a01a)
                      [(ulong)*(ushort *)
                               (&_pcre2_ucd_stage2_16 +
                               (long)(int)((uint)*(ushort *)
                                                  (&_pcre2_ucd_stage1_16 +
                                                  (((ulong)*param_2 << 0x30) >> 0x37) * 2) * 0x80 +
                                          (*param_2 & 0x7f)) * 2) * 0xc];
  do {
    if ((*(ushort **)(param_1 + 0x18) <= puVar6) ||
       (bVar2 = (&DAT_0013a01a)
                [(ulong)*(ushort *)
                         (&_pcre2_ucd_stage2_16 +
                         (long)(int)((uint)*(ushort *)
                                            (&_pcre2_ucd_stage1_16 +
                                            (((ulong)*puVar6 << 0x30) >> 0x37) * 2) * 0x80 +
                                    (*puVar6 & 0x7f)) * 2) * 0xc],
       (1 << (bVar2 & 0x1f) & *(uint *)(&_pcre2_ucp_gbtable_16 + (long)(int)uVar4 * 4)) == 0)) {
      return puVar6;
    }
    uVar3 = (uint)bVar2;
    if ((uVar4 == 0xb) && (uVar3 == 0xb)) {
      if (*(ushort **)(param_1 + 0x10) < param_2) {
        bVar7 = false;
        puVar5 = param_2;
        do {
          puVar1 = puVar5 + -1;
          puVar5 = puVar5 + -1;
          if ((&DAT_0013a01a)
              [(ulong)*(ushort *)
                       (&_pcre2_ucd_stage2_16 +
                       (long)(int)((uint)*(ushort *)
                                          (&_pcre2_ucd_stage1_16 +
                                          (((ulong)*puVar1 << 0x30) >> 0x37) * 2) * 0x80 +
                                  (*puVar1 & 0x7f)) * 2) * 0xc] != '\v') break;
          bVar7 = (bool)(bVar7 ^ 1);
        } while (*(ushort **)(param_1 + 0x10) < puVar5);
        if (bVar7) {
          return puVar6;
        }
      }
      uVar4 = 0xb;
    }
    else if ((bVar2 != 3 && uVar3 != 0xd) || (bVar7 = uVar4 != 0xe, uVar4 = 0xe, bVar7)) {
      uVar4 = uVar3;
    }
    puVar6 = puVar6 + 1;
    param_2 = param_2 + 1;
  } while( true );
}



undefined8 do_callout_jit(long param_1,undefined4 *param_2,long *param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    iVar1 = param_2[2];
    *param_2 = 2;
    plVar6 = param_3 + 2;
    param_2[0x1a] = 0;
    *(long *)(param_2 + 10) = lVar3 - lVar2 >> 1;
    lVar3 = *param_3;
    *(long *)(param_2 + 8) = lVar2;
    param_2[2] = 1;
    param_2[0x1c] = 0xffffffff;
    param_2[0x1d] = 0xffffffff;
    param_2[0x1e] = 0xffffffff;
    param_2[0x1f] = 0xffffffff;
    *(long *)(param_2 + 0xc) = lVar3 - lVar2 >> 1;
    *(long *)(param_2 + 0xe) = *(long *)(param_2 + 4) - lVar2 >> 1;
    plVar7 = (long *)(param_2 + 0x20);
    *(undefined4 **)(param_2 + 4) = param_2 + 0x1c;
    if (iVar1 != 1) {
      iVar8 = 1;
      do {
        lVar3 = plVar6[1];
        iVar8 = iVar8 + 1;
        lVar4 = *plVar6 - lVar2 >> 1;
        *plVar7 = lVar4;
        plVar7[1] = lVar3 - lVar2 >> 1;
        if (lVar4 != -1) {
          param_2[2] = iVar8;
        }
        plVar7 = plVar7 + 2;
        plVar6 = plVar6 + 2;
      } while (iVar1 != iVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x0010123f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(param_2,*(undefined8 *)(param_1 + 0x40));
    return uVar5;
  }
  return 0;
}



void jit_machine_stack_exec(undefined8 param_1,code *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  undefined1 local_8000 [32768];
  
  puVar1 = (undefined1 *)register0x00000020;
  do {
    puVar2 = puVar1;
    *(undefined8 *)(puVar2 + -0x1000) = *(undefined8 *)(puVar2 + -0x1000);
    puVar1 = puVar2 + -0x1000;
  } while (puVar2 + -0x1000 != local_8000);
  *(undefined8 *)(puVar2 + 0x6ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined1 **)param_1 = puVar2 + -0x1038;
  *(undefined1 **)(puVar2 + -0x1038) = puVar2 + 0x6fe8;
  *(undefined1 **)(puVar2 + -0x1030) = puVar2 + 0x6fe8;
  *(undefined1 **)(puVar2 + -0x1028) = puVar2 + -0x1018;
  *(undefined1 **)(puVar2 + -0x1020) = puVar2 + -0x1018;
  *(undefined8 *)(puVar2 + -0x1040) = 0x1012b0;
  (*param_2)();
  if (*(long *)(puVar2 + 0x6ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar2 + -0x1040) = get_framesize;
  __stack_chk_fail();
}



int get_framesize(long param_1,ushort *param_2,ushort *param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ushort uVar5;
  ushort *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar11;
  bool bVar12;
  ulong uVar10;
  
  *param_5 = 0;
  puVar6 = param_2;
  if (param_3 != (ushort *)0x0) {
    bVar1 = false;
    uVar8 = 0;
    if (param_3 <= param_2) {
      return -2;
    }
    goto LAB_0010130a;
  }
  do {
    param_3 = puVar6 + puVar6[1];
    puVar6 = param_3;
  } while (*param_3 == 0x78);
  if (param_4 == 0) {
    if (*param_2 != 0x8a) {
      bVar1 = false;
      uVar8 = 0;
      if (*param_2 != 0x8f) goto LAB_0010159b;
    }
    bVar1 = true;
    uVar8 = (ulong)((-(uint)(*(int *)(param_1 + 0x68) == 0) & 0xfffffffe) + 5);
  }
  else {
    bVar1 = false;
    uVar8 = 0;
  }
LAB_0010159b:
  param_2 = (ushort *)next_opcode(param_1);
  if (param_3 <= param_2) {
    return -2;
  }
LAB_0010130a:
  iVar11 = (int)uVar8;
  uVar10 = 0;
  iVar3 = param_4;
  do {
    while( true ) {
      iVar7 = (int)uVar8;
      uVar5 = *param_2;
      if (0x8f < uVar5) break;
      if (uVar5 < 0x5d) {
        if (uVar5 == 3) {
          bVar12 = iVar3 == 0;
          iVar3 = 1;
          uVar10 = 1;
          uVar8 = uVar8 & 0xffffffff;
          if (bVar12) {
            uVar8 = (ulong)(iVar7 + 2);
          }
          param_2 = param_2 + 1;
        }
        else {
          if (uVar5 < 3) {
LAB_00101356:
            uVar10 = 1;
          }
          else if (0x20 < uVar5) {
            uVar2 = uVar5 - 0x29;
            if (0x2b < (ushort)uVar2) goto LAB_00101356;
            uVar10 = uVar10 & 0xffffffff;
            if ((0xf807c03e01fU >> ((ulong)uVar2 & 0x3f) & 1) == 0) {
              uVar10 = 1;
            }
          }
LAB_0010135c:
          param_2 = (ushort *)next_opcode(param_1);
        }
      }
      else {
        uVar4 = 1L << ((char)uVar5 + 0xa3U & 0x3f);
        if ((uVar4 & 0x60e001f) != 0) goto LAB_0010135c;
        if ((uVar4 & 0x6300000000000) == 0) {
          if (uVar5 != 0x75) goto LAB_00101356;
          if ((*(int *)(param_1 + 0xac) != 0) && (iVar3 == 0)) {
            uVar8 = (ulong)(iVar7 + 2);
            iVar3 = 1;
          }
          if ((*(int *)(param_1 + 0x60) != 0) && (param_4 == 0)) {
            uVar8 = (ulong)((int)uVar8 + 2);
            param_4 = 1;
          }
          if ((*(int *)(param_1 + 0x68) != 0) && (!bVar1)) {
            bVar1 = true;
            uVar8 = (ulong)((int)uVar8 + 2);
          }
          param_2 = param_2 + 2;
          uVar10 = 1;
        }
        else {
          if ((*(int *)(param_1 + 0x68) != 0) && (!bVar1)) {
            bVar1 = true;
            iVar7 = iVar7 + 2;
          }
          uVar8 = (ulong)(iVar7 + 3);
          param_2 = param_2 + 3;
          uVar10 = 1;
        }
      }
LAB_00101367:
      iVar9 = (int)uVar10;
      iVar7 = (int)uVar8;
      if (param_3 <= param_2) goto LAB_001013c0;
    }
    iVar9 = uVar5 - 0x9a;
    uVar5 = (ushort)iVar9;
    if (0x10 < uVar5) goto LAB_00101356;
    uVar4 = 1L << ((byte)iVar9 & 0x3f);
    if ((uVar4 & 0x145) != 0) {
      uVar8 = uVar8 & 0xffffffff;
      if (param_4 == 0) {
        uVar8 = (ulong)(iVar7 + 2);
      }
      if (*(int *)(param_1 + 100) != 0) {
        *param_5 = 1;
      }
      param_4 = 1;
      uVar10 = 1;
      param_2 = param_2 + (ulong)param_2[1] + 3;
      goto LAB_00101367;
    }
    if ((uVar4 & 0x18000) != 0) goto LAB_0010135c;
    if (uVar5 != 5) goto LAB_00101356;
    if (*(int *)(param_1 + 100) != 0) {
      *param_5 = 1;
    }
    param_2 = param_2 + 1;
    uVar10 = 1;
    iVar9 = 1;
  } while (param_2 < param_3);
LAB_001013c0:
  if (iVar11 == iVar7) {
    iVar3 = iVar9 + -2;
  }
  else {
    iVar3 = iVar7 + 1;
    if (iVar7 < 1) {
      iVar3 = iVar9 + -2;
    }
  }
  return iVar3;
}



undefined8 do_script_run(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _pcre2_script_run_16(param_1,param_2,0);
  if (iVar1 == 0) {
    param_2 = 0;
  }
  return param_2;
}



undefined8 do_script_run_utf(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _pcre2_script_run_16(param_1,param_2,1);
  if (iVar1 == 0) {
    param_2 = 0;
  }
  return param_2;
}



long do_search_mark(long *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  while ((param_1[1] != 0 || (iVar1 = _pcre2_strcmp_16(param_2,param_1[2]), iVar1 != 0))) {
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
      return 0;
    }
  }
  return param_1[3];
}



undefined8 * ensure_buf(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(long *)(param_1 + 0x16);
  lVar3 = *(long *)(lVar2 + 8);
  uVar1 = lVar3 + param_2;
  if (0xff0 < uVar1) {
    puVar4 = (undefined8 *)
             (*(code *)**(undefined8 **)(param_1 + 0x12))
                       (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
    if (puVar4 == (undefined8 *)0x0) {
      *param_1 = 2;
      puVar5 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = *(undefined8 *)(param_1 + 0x16);
      *(undefined8 **)(param_1 + 0x16) = puVar4;
      puVar5 = puVar4 + 2;
      puVar4[1] = param_2;
    }
    return puVar5;
  }
  *(ulong *)(lVar2 + 8) = uVar1;
  return (undefined8 *)(lVar2 + 0x10 + lVar3);
}



undefined8 * ensure_abuf(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(lVar2 + 8);
  uVar1 = lVar3 + param_2;
  if (0xff0 < uVar1) {
    puVar4 = (undefined8 *)
             (*(code *)**(undefined8 **)(param_1 + 0x12))
                       (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
    if (puVar4 == (undefined8 *)0x0) {
      *param_1 = 2;
      puVar5 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x18) = puVar4;
      puVar5 = puVar4 + 2;
      puVar4[1] = param_2;
    }
    return puVar5;
  }
  *(ulong *)(lVar2 + 8) = uVar1;
  return (undefined8 *)(lVar2 + 0x10 + lVar3);
}



undefined8 * sljit_emit_jump(int *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  if (*param_1 == 0) {
    puVar1 = (undefined8 *)ensure_abuf(param_1,0x20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[2] = (ulong)((param_2 & 0xff) << 0xd | param_2 & 0x1000);
      if (*(undefined8 **)(param_1 + 0xc) == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 4) = puVar1;
      }
      else {
        **(undefined8 **)(param_1 + 0xc) = puVar1;
      }
      *(undefined8 **)(param_1 + 0xc) = puVar1;
      *(ulong *)(param_1 + 0x20) =
           *(long *)(param_1 + 0x20) + (ulong)((param_2 & 0xff) < 0x24) * 2 + 0xd;
      puVar2 = (undefined2 *)ensure_buf(param_1,2);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0x100;
        return puVar1;
      }
    }
    *param_1 = 2;
  }
  return (undefined8 *)0x0;
}



undefined8 * sljit_emit_label(int *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  if (*param_1 == 0) {
    puVar1 = *(undefined8 **)(param_1 + 10);
    if ((puVar1 != (undefined8 *)0x0) && (puVar1[2] == *(long *)(param_1 + 0x20))) {
      return puVar1;
    }
    puVar1 = (undefined8 *)ensure_abuf(param_1,0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[2] = *(undefined8 *)(param_1 + 0x20);
      if (*(undefined8 **)(param_1 + 10) == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 2) = puVar1;
      }
      else {
        **(undefined8 **)(param_1 + 10) = puVar1;
      }
      *(undefined8 **)(param_1 + 10) = puVar1;
      puVar2 = (undefined2 *)ensure_buf(param_1,2);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
        return puVar1;
      }
    }
  }
  return (undefined8 *)0x0;
}



ushort * get_iterator_parameters_constprop_0
                   (long param_1,ushort *param_2,ushort *param_3,ushort *param_4,uint *param_5,
                   uint *param_6,long *param_7)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  uVar1 = *param_2;
  puVar6 = param_2 + 1;
  *param_3 = uVar1;
  *param_6 = 0;
  switch(uVar1) {
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
    *param_4 = 0x1d;
    uVar1 = *param_3;
    switch(uVar1) {
    case 0x23:
    case 0x24:
      goto switchD_00101955_caseD_23;
    case 0x27:
    case 0x28:
    case 0x2d:
      puVar6 = param_2 + 2;
      *param_5 = (uint)param_2[1];
      break;
    case 0x29:
      puVar6 = param_2 + 2;
      *param_6 = (uint)param_2[1];
      break;
    case 0x2b:
      goto switchD_00101955_caseD_2b;
    }
    goto switchD_00101996_caseD_25;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
    *param_4 = 0x1e;
    uVar1 = *param_3 - 0xd;
    break;
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
    *param_4 = 0x1f;
    uVar1 = *param_3 - 0x1a;
    break;
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
    *param_4 = 0x20;
    uVar1 = *param_3 - 0x27;
    break;
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
    *param_3 = uVar1 - 0x34;
    *param_4 = 0;
    uVar1 = *param_3;
    switch(uVar1) {
    case 0x23:
    case 0x24:
      goto switchD_00101955_caseD_23;
    case 0x27:
    case 0x28:
    case 0x2d:
      puVar6 = param_2 + 2;
      *param_5 = (uint)param_2[1];
      break;
    case 0x29:
      puVar6 = param_2 + 2;
      *param_6 = (uint)param_2[1];
      break;
    case 0x2b:
      goto switchD_00101955_caseD_2b;
    }
    goto switchD_00101955_caseD_25;
  default:
    *param_4 = uVar1;
    if (uVar1 < 0x70) {
      lVar4 = 0x22;
      uVar2 = 0x11;
    }
    else {
      uVar2 = (ulong)param_2[1];
      lVar4 = uVar2 * 2;
    }
    uVar1 = *(ushort *)((long)param_2 + lVar4);
    puVar7 = (ushort *)((long)param_2 + lVar4 + 2);
    *param_3 = uVar1;
    if ((ushort)(uVar1 - 0x62) < 6) {
      *param_3 = uVar1 - 0x41;
      *param_7 = (long)puVar7;
      if (1 < (ushort)(uVar1 - 100)) {
        return puVar6;
      }
      *param_6 = 1;
      *param_3 = uVar1 - 0x43;
      return puVar6;
    }
    if (2 < (ushort)(uVar1 - 0x6a)) {
      uVar5 = *puVar7;
      *param_5 = (uint)param_2[uVar2 + 2];
      *param_6 = (uint)uVar5;
      if (*param_5 == 0) {
        uVar5 = uVar1 - 0x47;
        if (uVar1 == 0x6d) {
          uVar5 = 0x2a;
        }
      }
      else {
        uVar3 = *param_5 - (uint)uVar5;
        *param_5 = uVar3;
        uVar5 = 0x29;
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            uVar5 = uVar1 - 0x43;
            if (uVar1 == 0x6d) {
              uVar5 = 0x2c;
            }
          }
          else {
            uVar5 = uVar1 - 0x41;
            if (uVar1 == 0x6d) {
              uVar5 = 0x2d;
            }
          }
        }
      }
      *param_3 = uVar5;
      *param_7 = (long)(param_2 + uVar2 + 3);
      return puVar6;
    }
    *param_3 = uVar1 - 0x40;
    *param_7 = (long)puVar7;
    if ((ushort)(uVar1 - 0x40) != 0x2b) {
      return puVar6;
    }
    *param_6 = 1;
    *param_3 = 0x2a;
    return puVar6;
  }
  *param_3 = uVar1;
  switch(uVar1) {
  case 0x23:
  case 0x24:
switchD_00101955_caseD_23:
    *param_6 = 1;
    *param_3 = uVar1 - 2;
  default:
    uVar1 = *param_4;
    break;
  case 0x27:
  case 0x28:
  case 0x2d:
    uVar1 = *param_4;
    puVar6 = param_2 + 2;
    *param_5 = (uint)param_2[1];
    break;
  case 0x29:
    uVar1 = *param_4;
    puVar6 = param_2 + 2;
    *param_6 = (uint)param_2[1];
    break;
  case 0x2b:
switchD_00101955_caseD_2b:
    *param_6 = 1;
    *param_3 = 0x2a;
    uVar1 = *param_4;
  }
  if (uVar1 == 0) {
switchD_00101955_caseD_25:
    *param_4 = *puVar6;
    puVar7 = puVar6 + 1;
    lVar4 = next_opcode(param_1,puVar6);
    *param_7 = lVar4;
    return puVar7;
  }
switchD_00101996_caseD_25:
  *param_7 = (long)(puVar6 + 1);
  if ((*(int *)(param_1 + 0x1e0) != 0) && ((*puVar6 & 0xfc00) == 0xd800)) {
    *param_7 = (long)(puVar6 + 2);
  }
  return puVar6;
}



void set_private_data_ptrs(long param_1,int *param_2,ushort *param_3)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  ushort *puVar13;
  ushort *__s2;
  ushort *extraout_RDX;
  undefined7 uVar15;
  ushort *puVar14;
  ushort *extraout_RDX_00;
  ushort *extraout_RDX_01;
  ushort *puVar16;
  uint uVar17;
  size_t __n;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  
  puVar16 = *(ushort **)(param_1 + 0x10);
  iVar22 = *param_2;
  if ((puVar16 < param_3) && (iVar22 < 0x100001)) {
    puVar20 = (ushort *)0x0;
    iVar21 = 1;
    puVar18 = param_3;
    puVar19 = puVar16;
    do {
      uVar3 = *puVar16;
      if ((iVar21 == 0) || (6 < (ushort)(uVar3 - 0x85))) {
        if (uVar3 < 0x4e) {
          if (0x20 < uVar3) {
            uVar10 = 1L << ((char)uVar3 - 0x21U & 0x3f);
            if ((uVar10 & 0x1d00e807403a) == 0) {
              if ((uVar10 & 0x2801400a005) == 0) {
                if ((uVar10 & 0x3001800c0) == 0) goto switchD_00101d7e_caseD_50;
                goto switchD_00101d7e_caseD_4e;
              }
              bVar23 = puVar20 <= puVar16;
              uVar17 = 0xfffffffe;
              uVar10 = 2;
            }
            else {
              bVar23 = puVar20 <= puVar16;
              uVar17 = 0xfffffffe;
              uVar10 = 1;
            }
            goto LAB_00101dee;
          }
        }
        else {
LAB_00101d5a:
          if ((ushort)(uVar3 - 0x4e) < 0x4c) goto LAB_00101d67;
        }
switchD_00101d7e_caseD_50:
        iVar21 = 1;
        auVar24 = next_opcode(param_1,puVar16);
        goto LAB_00101db2;
      }
      puVar11 = puVar16;
      if ((0x55UL >> ((ulong)(uVar3 - 0x85) & 0x3f) & 1) != 0) {
        do {
          puVar11 = puVar11 + puVar11[1];
          uVar4 = *puVar11;
          param_3 = (ushort *)(ulong)uVar4;
        } while (uVar4 == 0x78);
        if (uVar4 == 0x79) {
          lVar5 = *(long *)(param_1 + 0x18);
          param_3 = (ushort *)((long)puVar16 - (long)puVar19 >> 1);
          if (*(int *)(lVar5 + (long)param_3 * 4) != 0) goto LAB_00101d5a;
          param_3 = (ushort *)((long)puVar11 + (2 - (long)puVar19) >> 1);
          if (*(int *)(lVar5 + (long)param_3 * 4) == 0) {
            puVar1 = puVar11 + 2;
            uVar4 = puVar11[2];
            __n = (long)puVar1 - (long)puVar16;
            puVar11 = puVar1;
            __s2 = puVar1;
            if (uVar4 == uVar3) {
              do {
                do {
                  puVar14 = puVar11 + puVar11[1];
                  puVar11 = puVar14;
                } while (*puVar14 == 0x78);
                puVar11 = puVar14 + 2;
                if ((__n != (long)puVar11 - (long)__s2) ||
                   (iVar7 = memcmp(puVar16,__s2,__n), param_3 = extraout_RDX, iVar7 != 0)) {
                  if (iVar21 != 2) goto LAB_00102137;
                  goto LAB_00101d5a;
                }
                uVar4 = puVar14[2];
                iVar21 = iVar21 + 1;
                __s2 = puVar11;
              } while (uVar4 == uVar3);
              if (iVar21 != 2) {
                if ((ushort)(uVar4 - 0x97) < 2) goto LAB_00102210;
LAB_00102141:
                lVar12 = (long)puVar1 - (long)puVar19 >> 1;
                param_3 = (ushort *)(lVar12 * 4);
                *(int *)(lVar5 + -4 + (long)param_3) = (int)((long)puVar11 - (long)puVar1 >> 1);
                *(undefined4 *)(lVar5 + lVar12 * 4) = 0x29;
                *(int *)(lVar5 + 4 + (long)param_3) = iVar21;
                goto LAB_00102173;
              }
            }
            else if ((ushort)(uVar4 - 0x97) < 2) {
LAB_00102210:
              puVar14 = (ushort *)((long)__n >> 1);
              iVar7 = 0;
              puVar11 = __s2;
              while ((puVar11[1] == 0x87 && (puVar11[3] == uVar3))) {
                puVar13 = puVar11 + 3;
                do {
                  puVar13 = puVar13 + puVar13[1];
                } while (*puVar13 == 0x78);
                if (((long)(puVar13 + 2) - (long)puVar11 >> 1 != (long)puVar14 + 3) ||
                   (iVar9 = memcmp(puVar16,puVar11 + 3,__n), iVar9 != 0)) break;
                iVar7 = iVar7 + 1;
                param_3 = extraout_RDX_00;
                puVar11 = puVar13 + 2;
                if (puVar13[2] != uVar4) {
LAB_00102137:
                  puVar11 = __s2;
                  if (2 < iVar21) goto LAB_00102141;
                  goto LAB_00101d5a;
                }
              }
              param_3 = puVar14;
              if ((puVar11[1] != uVar3) || (iVar7 == 0)) goto LAB_00102137;
              puVar13 = puVar11 + 1;
              do {
                puVar13 = puVar13 + puVar13[1];
              } while (*puVar13 == 0x78);
              puVar13 = puVar13 + 2;
              param_3 = (ushort *)((long)puVar14 + 1);
              if (((ushort *)((long)puVar13 - (long)puVar11 >> 1) != (ushort *)((long)puVar14 + 1))
                 || (iVar9 = memcmp(puVar16,puVar11 + 1,__n), param_3 = extraout_RDX_01, iVar9 != 0)
                 ) goto LAB_00102137;
              iVar9 = 0;
              do {
                if (*puVar13 != 0x79) break;
                iVar9 = iVar9 + 1;
                puVar13 = puVar13 + 2;
              } while (iVar9 < iVar7);
              param_3 = puVar13;
              if (iVar7 != iVar9) goto LAB_00102137;
              lVar12 = (long)__s2 - (long)puVar19 >> 1;
              param_3 = (ushort *)(lVar12 * 4);
              *(int *)(lVar5 + -4 + (long)param_3) = (int)((long)puVar13 - (long)__s2 >> 1);
              *(uint *)(lVar5 + lVar12 * 4) = uVar4 - 0x70;
              *(int *)(lVar5 + 4 + (long)param_3) = iVar7 + 2;
              if (iVar21 != 1) {
                iVar21 = iVar21 + -1;
                __s2 = __s2 + -((ulong)__s2[-1] + 2);
                goto LAB_00102137;
              }
              goto LAB_00102173;
            }
          }
          else {
LAB_00102173:
            puVar11 = puVar16;
            if (puVar20 <= puVar16) {
              do {
                puVar11 = puVar11 + puVar11[1];
              } while (*puVar11 == 0x78);
              puVar20 = puVar11 + 2;
            }
          }
        }
      }
LAB_00101d67:
      uVar15 = (undefined7)((ulong)param_3 >> 8);
      switch(uVar3) {
      case 0x4e:
      case 0x4f:
switchD_00101d7e_caseD_4e:
        bVar23 = puVar20 <= puVar16;
        uVar17 = 0xfffffffd;
        uVar10 = 2;
        goto LAB_00101dee;
      default:
        goto switchD_00101d7e_caseD_50;
      case 0x55:
      case 0x57:
        uVar17 = 1;
        uVar8 = (uint)(puVar16[1] != 0x16) & (uint)CONCAT71(uVar15,puVar16[1] != 0x11);
        uVar10 = (ulong)(uVar8 * 2);
        bVar23 = (bool)(puVar20 <= puVar16 & (byte)uVar8);
        goto LAB_00101f08;
      case 0x56:
      case 0x58:
      case 0x59:
      case 0x5a:
        bVar23 = puVar20 <= puVar16;
        uVar17 = 1;
        uVar10 = 1;
        goto LAB_00101dee;
      case 0x5b:
        uVar17 = 2;
        uVar8 = (uint)(puVar16[2] != 0x16) & (uint)CONCAT71(uVar15,puVar16[2] != 0x11);
        uVar10 = (ulong)(uVar8 * 2);
        bVar23 = (bool)(puVar20 <= puVar16 & (byte)uVar8);
        goto LAB_00101f08;
      case 0x5c:
        bVar23 = puVar20 <= puVar16;
        uVar17 = 2;
        uVar10 = 2;
LAB_00101dee:
        if (bVar23) goto LAB_00101df2;
        goto LAB_00101e0b;
      case 0x6e:
      case 0x6f:
        uVar17 = 0x11;
        uVar8 = get_class_iterator_size(puVar16 + 0x11);
        uVar10 = (ulong)uVar8;
        bVar23 = 0 < (int)uVar8 && puVar20 <= puVar16;
        goto LAB_00101f08;
      case 0x70:
        uVar17 = (uint)puVar16[1];
        uVar8 = get_class_iterator_size(puVar16 + puVar16[1]);
        uVar10 = (ulong)uVar8;
        bVar23 = 0 < (int)uVar8 && puVar20 <= puVar16;
LAB_00101f08:
        if (bVar23 != false) {
LAB_00101df2:
          *(int *)(*(long *)(param_1 + 0x18) + ((long)puVar16 - (long)puVar19 >> 1) * 4) = iVar22;
          iVar22 = iVar22 + (int)uVar10 * 8;
          if (uVar17 != 0) {
LAB_00101e0b:
            if (-1 < (int)uVar17) goto LAB_00101f20;
            iVar21 = 1;
            puVar16 = puVar16 + (int)-uVar17;
            auVar6._8_8_ = puVar16;
            auVar6._0_8_ = puVar16;
            auVar24._8_8_ = uVar10;
            auVar24._0_8_ = puVar16;
            if ((*(int *)(param_1 + 0x1e0) != 0) &&
               (auVar24._8_8_ = puVar16, auVar24._0_8_ = puVar16 + 1,
               (puVar16[-1] & 0xfc00) != 0xd800)) {
              auVar24 = auVar6;
            }
            goto LAB_00101db2;
          }
          goto LAB_00101dac;
        }
        if (uVar17 == 0) goto LAB_00101dac;
LAB_00101f20:
        iVar21 = 1;
        auVar24._8_8_ = uVar10;
        auVar24._0_8_ = puVar16 + (int)uVar17;
        goto LAB_00101db2;
      case 0x79:
        lVar5 = *(long *)(param_1 + 0x18);
        piVar2 = (int *)(lVar5 + ((long)puVar16 + (2 - (long)puVar19) >> 1) * 4);
        if (*piVar2 != 0) {
          *(int *)(lVar5 + ((long)puVar16 - (long)puVar19 >> 1) * 4) = iVar22;
          iVar22 = iVar22 + 8;
          puVar16 = puVar16 + *piVar2;
        }
        auVar24._8_8_ = lVar5;
        auVar24._0_8_ = puVar16 + 2;
        iVar21 = 1;
        goto LAB_00101db2;
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x85:
      case 0x86:
      case 0x88:
      case 0x8c:
      case 0x8d:
      case 0x90:
        *(int *)(*(long *)(param_1 + 0x18) + ((long)puVar16 - (long)puVar19 >> 1) * 4) = iVar22;
        iVar22 = iVar22 + 8;
        uVar10 = 2;
        break;
      case 0x84:
        lVar5 = *(long *)(param_1 + 0x18);
        *(int *)(lVar5 + ((long)puVar16 - (long)puVar19 >> 1) * 4) = iVar22;
        puVar11 = puVar16;
        do {
          if (puVar11[2] == 0x7e) {
            iVar22 = iVar22 + 0x10;
            uVar10 = 2;
            *(undefined4 *)(lVar5 + ((long)puVar16 + (2 - (long)puVar19) >> 1) * 4) = 1;
            goto LAB_00101d9b;
          }
          puVar11 = puVar11 + puVar11[1];
        } while (*puVar11 == 0x78);
        iVar22 = iVar22 + 8;
        uVar10 = 2;
        break;
      case 0x87:
        uVar10 = 2;
        break;
      case 0x8a:
      case 0x8f:
        *(int *)(*(long *)(param_1 + 0x18) + ((long)puVar16 - (long)puVar19 >> 1) * 4) = iVar22;
        iVar22 = iVar22 + 8;
      case 0x89:
      case 0x8e:
        uVar10 = 3;
        break;
      case 0x8b:
        piVar2 = (int *)(*(long *)(param_1 + 0x18) + ((long)puVar16 - (long)puVar19 >> 1) * 4);
        uVar3 = puVar16[1];
        uVar10 = 2;
        *piVar2 = 0;
        if ((ushort)(puVar16[uVar3] - 0x7a) < 2) {
          *piVar2 = iVar22;
          iVar22 = iVar22 + 8;
        }
        break;
      case 0x97:
      case 0x98:
      case 0x99:
        auVar24._8_8_ = param_3;
        auVar24._0_8_ = puVar16 + 1;
        iVar21 = 0;
        goto LAB_00101db2;
      }
LAB_00101d9b:
      puVar11 = puVar16;
      if (puVar20 <= puVar16) {
        do {
          puVar11 = puVar11 + puVar11[1];
        } while (*puVar11 == 0x78);
        puVar20 = puVar11 + 2;
        if (*puVar11 == 0x79) {
          puVar20 = (ushort *)0x0;
        }
      }
      puVar16 = puVar16 + (int)uVar10;
LAB_00101dac:
      auVar24._8_8_ = uVar10;
      auVar24._0_8_ = puVar16;
      iVar21 = 1;
LAB_00101db2:
      param_3 = auVar24._8_8_;
      puVar16 = auVar24._0_8_;
    } while ((iVar22 < 0x100001) && (puVar16 < puVar18));
  }
  *param_2 = iVar22;
  return;
}



void sljit_emit_op_custom_isra_0(int *param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*param_1 == 0) {
    puVar1 = (undefined1 *)ensure_buf(param_1,param_3 + 1);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = (char)param_3;
      *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (ulong)param_3;
      if (param_3 != 0) {
        uVar3 = 0;
        do {
          uVar2 = (int)uVar3 + 1;
          puVar1[uVar3 + 1] = *(undefined1 *)(param_2 + uVar3);
          uVar3 = (ulong)uVar2;
        } while (uVar2 < param_3);
      }
    }
    return;
  }
  return;
}



void fast_forward_char_pair_sse2_compare_constprop_0
               (undefined8 param_1,int param_2,int param_3,int param_4,byte param_5,byte param_6,
               byte param_7)

{
  long in_FS_OFFSET;
  undefined2 local_14;
  undefined1 local_12;
  byte local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0xf66;
  if (param_2 == 2) {
    if (param_3 == 2) {
      local_12 = 0x75;
      local_11 = param_7 << 3 | param_6;
    }
    else {
      if (2 < param_3) {
        if (param_3 != 3) goto LAB_00102510;
        local_12 = 0xeb;
        param_5 = (byte)(param_4 << 3) | param_7;
        goto LAB_001025b5;
      }
      if (param_3 != 0) {
        local_12 = 0x75;
        local_11 = param_5 | (byte)(param_4 << 3) | 0xc0;
        sljit_emit_op_custom_isra_0(param_1,&local_14,4);
        goto LAB_00102510;
      }
      local_12 = 0x6f;
      local_11 = param_7 << 3 | (byte)param_4;
    }
    local_11 = local_11 | 0xc0;
    sljit_emit_op_custom_isra_0(param_1,&local_14,4);
  }
  else {
    if (param_3 == 0) {
      if (param_2 == 1) {
        local_12 = 0xeb;
        local_11 = param_6 | (byte)(param_4 << 3) | 0xc0;
        sljit_emit_op_custom_isra_0(param_1,&local_14,4);
      }
      goto LAB_00102510;
    }
    if (param_3 != 2) goto LAB_00102510;
    local_12 = 0x75;
    param_5 = (byte)(param_4 << 3) | param_5;
LAB_001025b5:
    local_11 = param_5 | 0xc0;
    sljit_emit_op_custom_isra_0(param_1,&local_14,4);
  }
LAB_00102510:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong sljit_stack_resize(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  size_t __len;
  ulong uVar3;
  void *__addr;
  
  if (param_2 < *(ulong *)(param_1 + 0x18)) {
    return 0;
  }
  if (param_2 < *(ulong *)(param_1 + 8)) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (uVar3 < param_2) {
      if (sljit_page_align_0 == 0) {
        lVar2 = sysconf(0x1e);
        if (lVar2 < 0) {
          uVar1 = 0xfffffffffffff000;
          sljit_page_align_0 = 0xfff;
        }
        else {
          sljit_page_align_0 = lVar2 - 1;
          uVar1 = -lVar2;
        }
        uVar3 = *(ulong *)(param_1 + 0x10);
      }
      else {
        uVar1 = ~sljit_page_align_0;
      }
      __addr = (void *)(uVar3 & uVar1);
      if (__addr < (void *)(param_2 & uVar1)) {
        __len = (long)(param_2 & uVar1) - (long)__addr;
        posix_madvise(__addr,__len,4);
        madvise(__addr,__len,8);
      }
    }
    *(ulong *)(param_1 + 0x10) = param_2;
    return param_2;
  }
  return 0;
}



undefined4 emit_load_imm64(undefined4 *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)ensure_buf(param_1,0xb);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 10;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 10;
    bVar1 = reg_map[param_2];
    *(undefined8 *)(puVar2 + 3) = param_3;
    puVar2[1] = (7 < bVar1) + 'H';
    puVar2[2] = reg_lmap[param_2] | 0xb8;
    return 0;
  }
  return *param_1;
}



undefined4 emit_do_imm32(undefined4 *param_1,char param_2,undefined1 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_2 == '\0') {
    puVar2 = (undefined1 *)ensure_buf(param_1,6);
    if (puVar2 == (undefined1 *)0x0) goto LAB_001027f8;
    *puVar2 = 5;
    puVar2 = puVar2 + 1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 5;
  }
  else {
    puVar1 = (undefined1 *)ensure_buf(param_1,7);
    if (puVar1 == (undefined1 *)0x0) {
LAB_001027f8:
      return *param_1;
    }
    *puVar1 = 6;
    puVar2 = puVar1 + 2;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 6;
    puVar1[1] = param_2;
  }
  *puVar2 = param_3;
  *(undefined4 *)(puVar2 + 1) = param_4;
  return 0;
}



ulong * sljit_malloc_exec(ulong param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0x30;
  if (0x2f < param_1) {
    uVar5 = param_1;
  }
  pthread_mutex_lock((pthread_mutex_t *)allocator_lock);
  puVar2 = free_blocks;
  uVar5 = uVar5 + 0x17 & 0xfffffffffffffff8;
  puVar3 = free_blocks;
  while( true ) {
    if (puVar3 == (ulong *)0x0) {
      uVar6 = uVar5 + 0x1000f & 0xffffffffffff0000;
      puVar3 = (ulong *)mmap64((void *)0x0,uVar6,7,0x22,-1,0);
      if (0xfffffffffffffffd < (long)puVar3 - 1U) {
        pthread_mutex_unlock((pthread_mutex_t *)allocator_lock);
        return (ulong *)0x0;
      }
      uVar6 = uVar6 - 0x10;
      total_size = total_size + uVar6;
      puVar3[1] = 0;
      puVar1 = (undefined8 *)((long)puVar3 + uVar6);
      if (uVar5 + 0x40 < uVar6) {
        allocated_size = allocated_size + uVar5;
        uVar6 = uVar6 - uVar5;
        *puVar3 = uVar5;
        free_blocks = (ulong *)((long)puVar3 + uVar5);
        free_blocks[1] = uVar5;
        *free_blocks = 0;
        free_blocks[4] = uVar6;
        free_blocks[2] = (ulong)puVar2;
        free_blocks[3] = 0;
        if (puVar2 != (ulong *)0x0) {
          puVar2[3] = (ulong)free_blocks;
        }
      }
      else {
        allocated_size = allocated_size + uVar6;
        *puVar3 = uVar6;
      }
      pthread_mutex_unlock((pthread_mutex_t *)allocator_lock);
      *puVar1 = 1;
      puVar1[1] = uVar6;
      return puVar3 + 2;
    }
    uVar6 = puVar3[4];
    if (uVar5 <= uVar6) break;
    puVar3 = (ulong *)puVar3[2];
  }
  if (uVar5 + 0x40 < uVar6) {
    uVar4 = uVar6 - uVar5;
    puVar3[4] = uVar4;
    ((ulong *)((long)puVar3 + uVar4))[1] = uVar4;
    *(ulong *)((long)puVar3 + uVar6 + 8) = uVar5;
    uVar6 = uVar5;
    puVar3 = (ulong *)((long)puVar3 + uVar4);
    puVar2 = free_blocks;
  }
  else {
    puVar2 = (ulong *)puVar3[2];
    if (puVar2 != (ulong *)0x0) {
      puVar2[3] = puVar3[3];
    }
    if (puVar3[3] != 0) {
      *(ulong **)(puVar3[3] + 0x10) = puVar2;
      puVar2 = free_blocks;
    }
  }
  free_blocks = puVar2;
  *puVar3 = uVar6;
  allocated_size = allocated_size + uVar6;
  pthread_mutex_unlock((pthread_mutex_t *)allocator_lock);
  return puVar3 + 2;
}



void sljit_free_exec(undefined8 *param_1)

{
  long *__addr;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)allocator_lock);
  lVar4 = param_1[-2];
  __addr = param_1 + -2;
  plVar5 = (long *)((long)__addr - param_1[-1]);
  lVar6 = allocated_size - lVar4;
  allocated_size = lVar6;
  if (*plVar5 == 0) {
    lVar4 = lVar4 + plVar5[4];
    plVar5[4] = lVar4;
    *(long *)((long)plVar5 + lVar4 + 8) = lVar4;
    plVar1 = (long *)((long)plVar5 + lVar4);
    lVar2 = *plVar1;
    __addr = plVar5;
  }
  else {
    param_1[-2] = 0;
    param_1[2] = lVar4;
    *param_1 = free_blocks;
    param_1[1] = 0;
    if (free_blocks != (long *)0x0) {
      free_blocks[3] = (long)__addr;
    }
    plVar1 = (long *)((long)__addr + lVar4);
    lVar2 = *plVar1;
    free_blocks = __addr;
  }
  if (lVar2 == 0) {
    plVar5 = (long *)plVar1[2];
    lVar4 = lVar4 + plVar1[4];
    __addr[4] = lVar4;
    if (plVar5 != (long *)0x0) {
      plVar5[3] = plVar1[3];
    }
    if (plVar1[3] != 0) {
      *(long **)(plVar1[3] + 0x10) = plVar5;
      plVar5 = free_blocks;
    }
    free_blocks = plVar5;
    plVar1 = (long *)((long)__addr + lVar4);
    plVar1[1] = lVar4;
    lVar4 = __addr[1];
    uVar3 = total_size;
  }
  else {
    lVar4 = __addr[1];
    uVar3 = total_size;
  }
  if ((lVar4 == 0) && (*plVar1 == 1)) {
    lVar4 = __addr[4];
    total_size = uVar3 - lVar4;
    if ((ulong)(lVar6 * 3) >> 1 < total_size) {
      plVar5 = (long *)__addr[2];
      if (plVar5 != (long *)0x0) {
        plVar5[3] = __addr[3];
      }
      if (__addr[3] != 0) {
        *(long **)(__addr[3] + 0x10) = plVar5;
        plVar5 = free_blocks;
      }
      free_blocks = plVar5;
      munmap(__addr,lVar4 + 0x10);
      uVar3 = total_size;
    }
  }
  total_size = uVar3;
  pthread_mutex_unlock((pthread_mutex_t *)allocator_lock);
  return;
}



void add_jump(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*param_1 != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(lVar3 + 8);
  uVar1 = lVar4 + 0x10;
  if (uVar1 < 0xff1) {
    *(ulong *)(lVar3 + 8) = uVar1;
    puVar6 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  }
  else {
    puVar5 = (undefined8 *)
             (*(code *)**(undefined8 **)(param_1 + 0x12))
                       (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
    if (puVar5 == (undefined8 *)0x0) {
      *param_1 = 2;
      return;
    }
    *puVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar5;
    puVar6 = puVar5 + 2;
    puVar5[1] = 0x10;
  }
  uVar2 = *param_2;
  *puVar6 = param_3;
  puVar6[1] = uVar2;
  *param_2 = puVar6;
  return;
}



void generate_far_jump_code(long param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x10) >> 0xd;
  if (((*(ulong *)(param_1 + 0x10) & 0x1001) == 0) && (*(ulong *)(param_1 + 0x18) < 0x100000000)) {
    pcVar4 = param_2;
    if (uVar5 < 0x24) {
      cVar1 = -0x10;
      if ((uVar5 ^ 1) < 0x24) {
        cVar1 = CSWTCH_742[uVar5 ^ 1] + -0x10;
      }
      *param_2 = cVar1;
      pcVar4 = param_2 + 2;
      param_2[1] = '\t';
    }
    pcVar2 = pcVar4 + 2;
    pcVar4[0] = 'A';
    pcVar4[1] = -0x47;
    *(char **)(param_1 + 8) = pcVar2;
    if ((*(ulong *)(param_1 + 0x10) & 1) == 0) {
      *(int *)(pcVar4 + 2) = (int)*(undefined8 *)(param_1 + 0x18);
    }
    else {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10;
    }
    lVar3 = 4;
  }
  else {
    pcVar4 = param_2;
    if (uVar5 < 0x24) {
      if ((uVar5 ^ 1) < 0x24) {
        param_2[1] = '\r';
        pcVar4 = param_2 + 2;
        *param_2 = CSWTCH_742[uVar5 ^ 1] + -0x10;
      }
      else {
        *param_2 = -0x10;
        pcVar4 = param_2 + 2;
        param_2[1] = '\r';
      }
    }
    pcVar2 = pcVar4 + 2;
    pcVar4[0] = 'I';
    pcVar4[1] = -0x47;
    *(char **)(param_1 + 8) = pcVar2;
    if ((*(ulong *)(param_1 + 0x10) & 1) == 0) {
      *(undefined8 *)(pcVar4 + 2) = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10;
    }
    lVar3 = 8;
  }
  (pcVar2 + lVar3)[0] = 'A';
  (pcVar2 + lVar3)[1] = -1;
  pcVar2[lVar3 + 2] = (-(uVar5 < 0x25) & 0x10U) - 0x2f;
  return;
}



byte * sljit_generate_code(int *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  byte bVar19;
  
  bVar19 = 0;
  if (*param_1 == 0) {
    plVar16 = *(long **)(param_1 + 0x16);
    plVar7 = (long *)0x0;
    do {
      plVar4 = plVar16;
      plVar16 = (long *)*plVar4;
      *plVar4 = (long)plVar7;
      plVar7 = plVar4;
    } while (plVar16 != (long *)0x0);
    *(long **)(param_1 + 0x16) = plVar4;
    pbVar5 = (byte *)sljit_malloc_exec(*(undefined8 *)(param_1 + 0x20));
    if (pbVar5 != (byte *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 2);
      puVar18 = *(undefined8 **)(param_1 + 4);
      plVar16 = *(long **)(param_1 + 0x16);
      puVar15 = *(undefined8 **)(param_1 + 8);
      puVar12 = *(undefined8 **)(param_1 + 6);
      pbVar10 = pbVar5;
      do {
        pbVar11 = (byte *)(plVar16 + 2);
        pbVar17 = pbVar11 + plVar16[1];
        do {
          while( true ) {
            bVar2 = *pbVar11;
            if (bVar2 == 0) break;
            pbVar13 = pbVar11 + 1;
            uVar3 = (uint)bVar2;
            if (uVar3 < 8) {
              if ((bVar2 & 4) == 0) {
                if ((uVar3 != 0) && (*pbVar10 = *pbVar13, (bVar2 & 2) != 0)) {
                  *(undefined2 *)(pbVar10 + ((ulong)bVar2 - 2)) =
                       *(undefined2 *)(pbVar11 + ((ulong)bVar2 - 1));
                }
              }
              else {
                *(undefined4 *)pbVar10 = *(undefined4 *)pbVar13;
                *(undefined4 *)(pbVar10 + ((ulong)bVar2 - 4)) =
                     *(undefined4 *)(pbVar11 + ((ulong)bVar2 - 3));
              }
            }
            else {
              *(undefined8 *)pbVar10 = *(undefined8 *)(pbVar11 + 1);
              *(undefined8 *)(pbVar10 + ((ulong)bVar2 - 8)) =
                   *(undefined8 *)(pbVar11 + ((ulong)bVar2 - 7));
              lVar8 = (long)pbVar10 - (long)((ulong)(pbVar10 + 8) & 0xfffffffffffffff8);
              pbVar11 = pbVar13 + -lVar8;
              puVar14 = (undefined8 *)((ulong)(pbVar10 + 8) & 0xfffffffffffffff8);
              for (uVar9 = (ulong)((int)lVar8 + uVar3 >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar14 = *(undefined8 *)pbVar11;
                pbVar11 = pbVar11 + ((ulong)bVar19 * -2 + 1) * 8;
                puVar14 = puVar14 + (ulong)bVar19 * -2 + 1;
              }
            }
            pbVar11 = pbVar13 + bVar2;
            pbVar10 = pbVar10 + bVar2;
            if (pbVar17 <= pbVar11) goto LAB_00102e41;
          }
          bVar2 = pbVar11[1];
          if (bVar2 == 1) {
            uVar9 = puVar18[2];
            puVar18[1] = pbVar10;
            if ((uVar9 & 0x1000) == 0) {
              pbVar13 = (byte *)puVar18[3];
              if ((uVar9 & 1) != 0) {
                pbVar13 = pbVar5 + *(long *)(pbVar13 + 0x10);
              }
              if ((0x7fffffff < (long)(pbVar13 + (-2 - (long)pbVar10))) ||
                 ((long)(pbVar13 + (-6 - (long)pbVar10)) < -0x80000000)) goto LAB_00103098;
              uVar9 = uVar9 >> 0xd;
              if (pbVar13 + (0x7e - (long)pbVar10) < (byte *)0x100) {
                if (uVar9 == 0x24) {
                  *pbVar10 = 0xeb;
                  lVar8 = puVar18[1];
                }
                else {
                  if (0x24 < uVar9) goto LAB_00103178;
                  *pbVar10 = CSWTCH_742[uVar9] - 0x10;
                  lVar8 = puVar18[1];
                }
                puVar18[2] = puVar18[2] | 4;
                pbVar10 = pbVar10 + 2;
                puVar18[1] = lVar8 + 1;
              }
              else {
                if (uVar9 == 0x24) {
                  *pbVar10 = 0xe9;
                  pbVar13 = pbVar10 + 1;
                  lVar8 = puVar18[1] + 1;
                }
                else if (uVar9 < 0x25) {
                  *pbVar10 = 0xf;
                  pbVar13 = pbVar10 + 2;
                  pbVar10[1] = CSWTCH_742[uVar9];
                  lVar8 = puVar18[1] + 2;
                }
                else {
LAB_00103178:
                  *pbVar10 = 0xe8;
                  pbVar13 = pbVar10 + 1;
                  lVar8 = puVar18[1] + 1;
                }
                puVar18[2] = puVar18[2] | 8;
                pbVar10 = pbVar13 + 4;
                puVar18[1] = lVar8;
              }
            }
            else {
LAB_00103098:
              pbVar10 = (byte *)generate_far_jump_code(puVar18,pbVar10);
            }
            puVar18 = (undefined8 *)*puVar18;
          }
          else if (bVar2 == 2) {
            puVar15[1] = pbVar10 + -8;
            puVar15 = (undefined8 *)*puVar15;
          }
          else if (bVar2 == 0) {
            puVar6[1] = pbVar10;
            puVar6[2] = (long)pbVar10 - (long)pbVar5;
            puVar6 = (undefined8 *)*puVar6;
          }
          else {
            lVar8 = puVar12[3];
            puVar12[2] = pbVar10;
            if (pbVar5 + *(long *)(puVar12[1] + 0x10) < (byte *)0x80000000) {
              if (lVar8 == 0) {
                pbVar13 = pbVar10 + -10;
                if ((pbVar10[-10] & 7) == 0) {
                  bVar2 = pbVar10[-9];
                  pbVar10 = pbVar10 + -5;
                }
                else {
                  bVar2 = pbVar10[-10] & 0xf7;
                  pbVar10 = pbVar10 + -4;
                }
                *pbVar13 = bVar2;
                puVar12[2] = pbVar10;
              }
              else {
                pbVar10 = pbVar10 + (-10 - lVar8);
                _pcre2_memmove16(pbVar10,pbVar10 + 10,lVar8);
                pbVar13 = pbVar10 + 10;
                if ((pbVar10[1] & 0xf8) != 0xb8) {
                  pbVar13 = pbVar10;
                }
                *pbVar13 = *pbVar13 & 0xfb;
                pbVar13[2] = pbVar13[2] & 199;
                pbVar13[1] = 199;
                puVar12[3] = 0;
                pbVar10 = (byte *)(puVar12[2] + -6);
                puVar12[2] = pbVar10;
              }
            }
            else {
              puVar12[3] = 0x10;
              puVar12[2] = (long)pbVar10 - lVar8;
            }
            puVar12 = (undefined8 *)*puVar12;
          }
          pbVar11 = pbVar11 + 2;
        } while (pbVar11 < pbVar17);
LAB_00102e41:
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
      for (puVar6 = *(undefined8 **)(param_1 + 4); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        while (uVar9 = puVar6[2], (uVar9 & 0xc) == 0) {
          if ((uVar9 & 0x10) == 0) goto LAB_00102e97;
          *(undefined8 *)puVar6[1] = *(undefined8 *)(puVar6[3] + 8);
          puVar6 = (undefined8 *)*puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_00102ec8;
        }
        lVar8 = puVar6[3];
        if ((uVar9 & 1) != 0) {
          lVar8 = *(long *)(lVar8 + 8);
        }
        piVar1 = (int *)puVar6[1];
        if ((uVar9 & 4) == 0) {
          *piVar1 = (int)(lVar8 - (long)piVar1) + -4;
        }
        else {
          *(char *)piVar1 = (char)(lVar8 - (long)piVar1) + -1;
        }
LAB_00102e97:
      }
LAB_00102ec8:
      for (puVar6 = *(undefined8 **)(param_1 + 6); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        while( true ) {
          if ((*(byte *)(puVar6 + 3) & 0x10) != 0) break;
          *(int *)(puVar6[2] + -4) = (int)*(undefined8 *)(puVar6[1] + 8);
          puVar6 = (undefined8 *)*puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_00102f01;
        }
        *(undefined8 *)(puVar6[2] + -8) = *(undefined8 *)(puVar6[1] + 8);
      }
LAB_00102f01:
      *param_1 = 1;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      *(long *)(param_1 + 0x24) = (long)pbVar10 - (long)pbVar5;
      return pbVar5;
    }
    *param_1 = 3;
  }
  return (byte *)0x0;
}



/* WARNING: Removing unreachable block (ram,0x00103270) */
/* WARNING: Removing unreachable block (ram,0x00103301) */
/* WARNING: Removing unreachable block (ram,0x001032c7) */
/* WARNING: Removing unreachable block (ram,0x00103237) */

void get_cpu_features(void)

{
  uint *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  if (*puVar1 < 7) {
    cpu_feature_list = 1;
    if (*puVar1 == 0) goto LAB_00103259;
  }
  else {
    lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
    cpu_feature_list = (-(uint)((*(uint *)(lVar2 + 4) & 8) == 0) & 0xfffffff0) + 0x11;
    if ((*(uint *)(lVar2 + 4) & 0x20) != 0) {
      cpu_feature_list = cpu_feature_list | 0x80;
    }
  }
  lVar2 = cpuid_Version_info(1);
  if ((*(uint *)(lVar2 + 0xc) & 0x80000) != 0) {
    cpu_feature_list = cpu_feature_list | 4;
  }
  if ((*(uint *)(lVar2 + 0xc) & 0x10000000) != 0) {
    cpu_feature_list = cpu_feature_list | 0x40;
  }
  if ((*(uint *)(lVar2 + 8) & 0x8000) != 0) {
    cpu_feature_list = cpu_feature_list | 0x20;
  }
LAB_00103259:
  lVar2 = cpuid(0x80000001);
  if ((*(uint *)(lVar2 + 0xc) & 0x20) != 0) {
    cpu_feature_list = cpu_feature_list | 8;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * sljit_create_compiler_constprop_0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  puVar3 = (undefined8 *)(*(code *)*param_1)(0xa0,param_1[2]);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[0x13] = 0;
    puVar7 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    for (uVar6 = (ulong)(((int)puVar3 -
                         (int)(undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8)) + 0xa0U >> 3
                        ); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
    }
    puVar3[9] = param_1;
    uVar4 = (*(code *)*param_1)(0x1000,param_1[2]);
    uVar1 = param_1[2];
    puVar3[0xb] = uVar4;
    puVar5 = (undefined8 *)(*(code *)*param_1)(0x1000,uVar1);
    puVar7 = (undefined8 *)puVar3[0xb];
    puVar3[0xc] = puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        iVar2 = compiler_initialized;
        *(undefined4 *)(puVar3 + 0xf) = 0xffffffff;
        *(undefined4 *)(puVar3 + 0xd) = 0xffffffff;
        *(undefined4 *)((long)puVar3 + 0x6c) = 0xffffffff;
        *(undefined4 *)(puVar3 + 0xe) = 0xffffffff;
        *(undefined4 *)((long)puVar3 + 0x74) = 0xffffffff;
        if (iVar2 != 0) {
          return puVar3;
        }
        get_cpu_features();
        compiler_initialized = 1;
        _DAT_00133d20 = _LC7;
        sse2_data = 0x80000000;
        DAT_00133d10 = 0x7fffffff;
        DAT_00133d30 = _LC8;
        return puVar3;
      }
      (*(code *)param_1[1])(puVar7,param_1[2]);
      puVar5 = (undefined8 *)puVar3[0xc];
    }
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)param_1[1])(puVar5,param_1[2]);
    }
    (*(code *)param_1[1])(puVar3,param_1[2]);
  }
  return (undefined8 *)0x0;
}



void flush_stubs(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar3 = (long *)param_1[0x26];
  piVar4 = (int *)*param_1;
  do {
    if (plVar3 == (long *)0x0) {
      param_1[0x26] = 0;
      return;
    }
    lVar8 = sljit_emit_label(piVar4);
    lVar5 = *plVar3;
    if ((lVar8 != 0) && (lVar5 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar8;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    }
    uVar9 = sljit_emit_jump(piVar4,0x25);
    if (*piVar4 == 0) {
      lVar5 = *(long *)(piVar4 + 0x18);
      lVar8 = *(long *)(lVar5 + 8);
      uVar1 = lVar8 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar5 + 8) = uVar1;
        puVar7 = (undefined8 *)(lVar5 + 0x10 + lVar8);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar4 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_00103517;
        }
        *puVar6 = *(undefined8 *)(piVar4 + 0x18);
        *(undefined8 **)(piVar4 + 0x18) = puVar6;
        puVar7 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      uVar2 = param_1[0x30];
      *puVar7 = uVar9;
      puVar7[1] = uVar2;
      param_1[0x30] = puVar7;
    }
LAB_00103517:
    lVar5 = plVar3[1];
    lVar8 = sljit_emit_jump(piVar4,0x24);
    if ((lVar5 != 0) && (lVar8 != 0)) {
      *(long *)(lVar8 + 0x18) = lVar5;
      *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
    }
    plVar3 = (long *)plVar3[2];
  } while( true );
}



undefined8 emit_byte(undefined4 *param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(long *)(param_1 + 0x16);
  lVar3 = *(long *)(lVar2 + 8);
  uVar1 = lVar3 + 2;
  if (uVar1 < 0xff1) {
    *(ulong *)(lVar2 + 8) = uVar1;
    puVar5 = (undefined8 *)(lVar2 + 0x10 + lVar3);
  }
  else {
    puVar4 = (undefined8 *)
             (*(code *)**(undefined8 **)(param_1 + 0x12))
                       (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
    if (puVar4 == (undefined8 *)0x0) {
      *param_1 = 2;
      return 2;
    }
    *puVar4 = *(undefined8 *)(param_1 + 0x16);
    *(undefined8 **)(param_1 + 0x16) = puVar4;
    puVar5 = puVar4 + 2;
    puVar4[1] = 2;
  }
  *(undefined1 *)puVar5 = 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  *(undefined1 *)((long)puVar5 + 1) = param_2;
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

char * emit_x86_instruction
                 (long param_1,uint param_2,int param_3,long param_4,uint param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined4 local_40;
  
  uVar14 = (ulong)(param_2 & 0xf);
  uVar1 = uVar14 + 1;
  bVar4 = false;
  uVar13 = uVar14 + 2;
  if ((param_2 & 0x1c00) == 0) {
    uVar13 = uVar1;
  }
  if ((param_5 & 0x80) == 0) {
    if ((param_2 & 0x4000) == 0) {
      bVar5 = reg_map[(int)param_5];
    }
    else {
      bVar5 = freg_map[(int)param_5];
    }
    if (7 < bVar5) {
      bVar4 = true;
LAB_0010392d:
      if ((param_2 & 0x8000) != 0) goto LAB_00103776;
    }
LAB_001038d7:
    if (param_3 == 0x7f) goto LAB_00103780;
LAB_001038e1:
    if ((param_2 & 0x2000) == 0) {
      bVar5 = reg_map[param_3];
    }
    else {
      bVar5 = freg_map[param_3];
    }
    if (bVar5 < 8) goto LAB_001037a2;
LAB_00103902:
    uVar13 = uVar13 + 1;
  }
  else {
    uVar11 = param_5 & 0x7f00;
    if ((param_5 & 0x7f00) == 0) {
      if (param_6 + 0x80000000 >> 0x20 == 0) {
        if ((param_5 & 0x7f) == 0) goto LAB_001038d3;
        uVar8 = (ulong)(int)(param_5 & 0x7f);
        cVar6 = reg_lmap[uVar8];
        if (param_6 == 0) {
          if (reg_lmap[uVar8] == '\x05') goto LAB_00103b0b;
          goto LAB_00103b6e;
        }
        uVar2 = uVar13 + 1;
        uVar13 = uVar13 + 4;
        if (param_6 + 0x80 < 0x100) {
          uVar13 = uVar2;
        }
      }
      else {
        iVar7 = emit_load_imm64(param_1,0x10,param_6);
        if (iVar7 != 0) {
          return (char *)0x0;
        }
        uVar11 = param_5 & 0x7f;
        if ((param_5 & 0x7f) == 0) {
          param_5 = param_5 | 0x10;
          cVar6 = '\x01';
          param_6 = 0;
          uVar8 = 0x10;
        }
        else {
          param_5 = param_5 | 0x1000;
          if (reg_lmap[(int)uVar11] == '\x05') {
            param_6 = 0;
            goto LAB_00103cba;
          }
          uVar11 = 0x1000;
LAB_00103b6e:
          param_6 = 0;
          uVar8 = (ulong)(param_5 & 0x7f);
          cVar6 = reg_lmap[uVar8];
        }
      }
    }
    else {
      if ((param_5 & 0x7f) == 0) {
LAB_001038d3:
        uVar13 = uVar13 + 5;
        goto LAB_001038d7;
      }
      uVar8 = (ulong)(int)(param_5 & 0x7f);
      cVar6 = reg_lmap[uVar8];
      if (param_6 == 0) {
        if (reg_lmap[uVar8] != '\x05') goto LAB_00103b6e;
      }
      else {
        if (cVar6 != '\x05') goto LAB_00103739;
        if ((param_6 & 3) != 0) goto LAB_00103b0b;
      }
LAB_00103cba:
      if (reg_lmap[(int)param_5 >> 8 & 0x7f] == '\x05') {
        uVar8 = (ulong)(param_5 & 0x7f);
        uVar11 = param_5 & 0x7f00;
        cVar6 = reg_lmap[uVar8];
LAB_00103b0b:
        uVar13 = uVar13 + 1;
      }
      else {
        uVar11 = (param_5 & 0x7f) << 8;
        uVar8 = (ulong)((int)param_5 >> 8 & 0x7f);
        param_5 = CONCAT31((int3)(param_5 & 0x7f),(char)(param_5 >> 8)) | 0x80;
        cVar6 = reg_lmap[uVar8];
      }
    }
LAB_00103739:
    bVar4 = 7 < (byte)reg_map[uVar8];
    if (cVar6 == '\x04') {
      if (uVar11 == 0) {
        param_5 = param_5 | 0xe00;
      }
LAB_00103bfa:
      uVar13 = uVar13 + 1;
      if (7 < (byte)reg_map[(int)param_5 >> 8 & 0x7f]) goto LAB_0010392d;
    }
    else if (uVar11 != 0) goto LAB_00103bfa;
    if (((param_2 & 0x8000) == 0) || (!bVar4)) goto LAB_001038d7;
LAB_00103776:
    uVar13 = uVar13 + 1;
    uVar14 = uVar1;
    if (param_3 != 0x7f) goto LAB_001038e1;
LAB_00103780:
    if ((param_2 & 0x10) == 0) {
      if ((param_2 & 0x20) == 0) {
        if ((param_2 & 0x40) == 0) {
          uVar1 = uVar13 + 2;
          uVar13 = uVar13 + 4;
          if ((param_2 & 0x80) != 0) {
            uVar13 = uVar1;
          }
        }
        else {
          uVar13 = uVar13 + 1;
        }
      }
      else if (param_4 != 1) goto LAB_0010379a;
    }
    else if (param_4 + 0x80U < 0x100) {
LAB_0010379a:
      param_2 = param_2 | 0x40;
      uVar13 = uVar13 + 1;
    }
    else {
      uVar13 = uVar13 + 4;
    }
LAB_001037a2:
    if (bVar4 != false) goto LAB_00103902;
  }
  puVar9 = (undefined1 *)ensure_buf(param_1,uVar13 + 1);
  if (puVar9 == (undefined1 *)0x0) {
    return (char *)0x0;
  }
  *puVar9 = (char)uVar13;
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + uVar13;
  if ((param_2 & 0x800) == 0) {
    if ((param_2 & 0x1000) == 0) {
      pcVar12 = puVar9 + 1;
      if ((param_2 & 0x400) != 0) {
        puVar9[1] = 0x66;
        pcVar12 = puVar9 + 2;
      }
    }
    else {
      puVar9[1] = 0xf3;
      pcVar12 = puVar9 + 2;
    }
  }
  else {
    puVar9[1] = 0xf2;
    pcVar12 = puVar9 + 2;
  }
  if (bVar4 != false) {
    *pcVar12 = bVar4;
    pcVar12 = pcVar12 + 1;
  }
  pbVar15 = (byte *)(pcVar12 + uVar14);
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) == 0) {
      if (param_3 == 0x7f) goto LAB_00103971;
    }
    else if (param_3 == 0x7f) {
      *pcVar12 = (-((param_2 & 0x40) == 0) & 0xfeU) + 0x83;
      goto LAB_00103971;
    }
    if ((param_2 & 0x2000) == 0) {
      bVar5 = reg_lmap[param_3] << 3;
    }
    else {
      bVar5 = freg_lmap[param_3] << 3;
    }
  }
  else {
    if (param_3 == 0x7f) {
      cVar6 = -0x2f;
      if (param_4 != 1) {
        cVar6 = -0x3f;
      }
      *pcVar12 = cVar6;
    }
    else {
      *pcVar12 = -0x2d;
    }
LAB_00103971:
    bVar5 = 0;
  }
  if ((param_5 & 0x80) == 0) {
    if ((param_2 & 0x4000) == 0) {
      bVar3 = reg_lmap[(int)param_5];
    }
    else {
      bVar3 = freg_lmap[(int)param_5];
    }
    pbVar10 = pbVar15 + 1;
    *pbVar15 = bVar5 | bVar3 | 0xc0;
  }
  else {
    iVar7 = (int)param_6;
    if ((param_5 & 0x7f) == 0) {
      pbVar15[1] = 0x25;
      pbVar10 = pbVar15 + 6;
      *pbVar15 = bVar5 | 4;
      *(int *)(pbVar15 + 2) = iVar7;
    }
    else {
      bVar3 = reg_lmap[(int)(param_5 & 0x7f)];
      uVar11 = (int)param_5 >> 8;
      if (((param_5 & 0x7f00) == 0) || ((param_5 & 0x7f00) == 0xe00)) {
        if ((param_6 == 0) && (bVar3 != 5)) {
          if ((param_5 & 0x7f00) == 0) {
            pbVar10 = pbVar15 + 1;
            *pbVar15 = bVar3 | bVar5;
          }
          else {
            pbVar10 = pbVar15 + 2;
            *pbVar15 = bVar5 | 4;
            pbVar15[1] = reg_lmap[uVar11 & 0x7f] << 3 | bVar3;
          }
        }
        else if (param_6 + 0x80 < 0x100) {
          if ((param_5 & 0x7f00) == 0) {
            pbVar10 = pbVar15 + 1;
            *pbVar15 = bVar5 | 0x40 | bVar3;
          }
          else {
            *pbVar15 = bVar5 | 0x44;
            pbVar10 = pbVar15 + 2;
            pbVar15[1] = reg_lmap[uVar11 & 0x7f] << 3 | bVar3;
          }
          *pbVar10 = (byte)param_6;
          pbVar10 = pbVar10 + 1;
        }
        else {
          if ((param_5 & 0x7f00) == 0) {
            pbVar10 = pbVar15 + 1;
            *pbVar15 = bVar5 | 0x80 | bVar3;
          }
          else {
            pbVar10 = pbVar15 + 2;
            *pbVar15 = bVar5 | 0x84;
            pbVar15[1] = reg_lmap[uVar11 & 0x7f] << 3 | bVar3;
          }
          *(int *)pbVar10 = iVar7;
          pbVar10 = pbVar10 + 4;
        }
      }
      else if (bVar3 == 5) {
        pbVar15[2] = 0;
        *pbVar15 = bVar5 | 0x44;
        pbVar10 = pbVar15 + 3;
        pbVar15[1] = reg_lmap[uVar11 & 0x7f] << 3 | (byte)(iVar7 << 6) | 5;
      }
      else {
        pbVar10 = pbVar15 + 2;
        *pbVar15 = bVar5 | 4;
        pbVar15[1] = reg_lmap[uVar11 & 0x7f] << 3 | (byte)(iVar7 << 6) | bVar3;
      }
    }
  }
  if (param_3 != 0x7f) {
    return pcVar12;
  }
  if ((param_2 & 0x40) != 0) {
    local_40._0_1_ = (byte)param_4;
    *pbVar10 = (byte)local_40;
    return pcVar12;
  }
  if ((param_2 & 0x80) == 0) {
    if ((param_2 & 0x20) == 0) {
      local_40 = (undefined4)param_4;
      *(undefined4 *)pbVar10 = local_40;
      return pcVar12;
    }
    return pcVar12;
  }
  local_40._0_2_ = (undefined2)param_4;
  *(undefined2 *)pbVar10 = (undefined2)local_40;
  return pcVar12;
}



ulong emit_mov(uint *param_1,int param_2,undefined8 param_3,int param_4,long param_5)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  if (0x7e < param_4) {
    if (param_4 == 0x7f) {
      if (param_2 < 0x7f) {
        if (param_1[0x26] != 0) {
          uVar3 = emit_do_imm32(param_1,~-((byte)reg_map[param_2] < 8) & 0x41,
                                reg_lmap[param_2] | 0xb8);
          return uVar3;
        }
        if (param_5 + 0x80000000U >> 0x20 != 0) {
          uVar3 = emit_load_imm64(param_1,param_2,param_5);
          return uVar3;
        }
      }
      else if ((param_1[0x26] == 0) && (param_5 + 0x80000000U >> 0x20 != 0)) {
        iVar1 = emit_load_imm64(param_1,0xf,param_5);
        if (iVar1 != 0) goto LAB_00103f40;
        goto LAB_00103ef7;
      }
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0x7f,param_5,param_2,param_3);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 199;
        return 0;
      }
      goto LAB_00103f40;
    }
    if (param_2 < 0x7f) {
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_2,0,param_4,param_5);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0x8b;
        return 0;
      }
      goto LAB_00103f40;
    }
    puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_4,param_5);
    if (puVar2 == (undefined1 *)0x0) goto LAB_00103f40;
    *puVar2 = 0x8b;
LAB_00103ef7:
    param_4 = 0xf;
  }
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_4,0,param_2,param_3);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0x89;
    return 0;
  }
LAB_00103f40:
  return (ulong)*param_1;
}



ulong emit_cmov_generic(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                       undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  char cVar4;
  
  puVar2 = (undefined1 *)ensure_buf(param_1,3);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 2;
    cVar4 = -0x10;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 2;
    if ((ulong)(long)(int)(param_2 ^ 1) < 0x24) {
      cVar4 = CSWTCH_742[(int)(param_2 ^ 1)] + -0x10;
    }
    puVar2[1] = cVar4;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = emit_mov(param_1,param_3,0,param_4,param_5);
    if ((int)uVar3 == 0) {
      puVar2[2] = (char)*(undefined8 *)(param_1 + 0x20) - (char)uVar1;
      return uVar3;
    }
  }
  return (ulong)*param_1;
}



undefined4 emit_vex_instruction(undefined4 *param_1,ulong param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  
  bVar5 = 2;
  if ((param_2 & 0x10000) == 0) {
    bVar5 = -((param_2 & 0x20000) != 0) & 3;
  }
  if ((param_2 & 0x100000) == 0) {
    bVar4 = 0;
    bVar2 = 0;
    if (((param_2 & 0x80000) != 0) && (param_1[0x26] == 0)) goto LAB_0010415f;
    if ((param_2 & 0x400) == 0) goto LAB_0010417c;
LAB_001040a3:
    bVar4 = bVar2 | 1;
  }
  else {
LAB_0010415f:
    if (bVar5 == 0) {
      bVar5 = 1;
    }
    bVar4 = 0x80;
    bVar2 = 0x80;
    if ((param_2 & 0x400) != 0) goto LAB_001040a3;
LAB_0010417c:
    if ((param_2 & 0x800) == 0) {
      if ((param_2 & 0x1000) != 0) {
        bVar4 = bVar4 | 2;
      }
    }
    else {
      bVar4 = bVar4 | 3;
    }
  }
  if ((param_2 & 0x200000) != 0) {
    bVar4 = bVar4 | 4;
  }
  if ((param_2 & 0x40000) == 0) {
    cVar1 = reg_map[param_4];
  }
  else {
    cVar1 = freg_map[param_4];
  }
  bVar4 = cVar1 << 3 ^ 0x78U | bVar4;
  if (bVar5 == 0) {
    pbVar3 = (byte *)emit_x86_instruction(param_1,param_2 & 0xffffffffffffe300 | 0x8102,param_3,0);
    if (pbVar3 == (byte *)0x0) {
LAB_001041e8:
      return *param_1;
    }
    bVar2 = pbVar3[-1];
    bVar5 = 1;
    if ((bVar2 & 3) == 0) {
      pbVar3[-1] = 0xc5;
      pbVar3[1] = (byte)param_2;
      *pbVar3 = (bVar2 >> 2) * -0x80 + 0x80 | bVar4;
      return 0;
    }
  }
  else {
    pbVar3 = (byte *)emit_x86_instruction(param_1,param_2 & 0xffffffffffffe300 | 0x103,param_3,0);
    if (pbVar3 == (byte *)0x0) goto LAB_001041e8;
    bVar2 = pbVar3[-1];
  }
  pbVar3[-1] = 0xc4;
  pbVar3[1] = bVar4;
  pbVar3[2] = (byte)param_2;
  *pbVar3 = bVar2 << 5 ^ 0xe0 | bVar5;
  return 0;
}



undefined4
emit_cmp_binary(undefined4 *param_1,int param_2,undefined8 param_3,int param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  if ((param_2 == 1) && (param_4 == 0x7f)) {
    if (0xff < param_5 + 0x80U) {
      if (param_1[0x26] == 0) {
        uVar4 = 0x48;
        if (param_5 + 0x80000000U >> 0x20 != 0) {
          param_4 = 0xf;
LAB_001042da:
          iVar1 = emit_load_imm64(param_1,param_4,param_5);
          param_3 = 0;
joined_r0x0010441d:
          if (iVar1 != 0) goto LAB_0010438a;
          goto LAB_001042f2;
        }
      }
      else {
        uVar4 = 0;
      }
      iVar1 = emit_do_imm32(param_1,uVar4,0x3d,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      goto LAB_0010438a;
    }
LAB_00104250:
    uVar4 = 0;
  }
  else {
    if (param_2 < 0x7f) {
      if (param_4 != 0x7f) {
LAB_00104350:
        puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,param_2,0,param_4,param_5);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 0x3b;
          return 0;
        }
        goto LAB_0010438a;
      }
      if ((param_5 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
        param_4 = (param_2 == 0xf) + 0xf;
        goto LAB_001042da;
      }
      goto LAB_00104250;
    }
    if ((param_4 < 0x7f) && (param_2 != 0x7f)) {
LAB_001042f2:
      puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,param_4,0,param_2,param_3);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0x39;
        return 0;
      }
      goto LAB_0010438a;
    }
    if (param_4 != 0x7f) {
      iVar1 = emit_mov(param_1,0xf,0,param_2,param_3);
      if (iVar1 != 0) goto LAB_0010438a;
      param_2 = 0xf;
      goto LAB_00104350;
    }
    if (param_2 == 0x7f) {
      iVar1 = emit_mov(param_1,0xf,0,0x7f,param_3);
      if (iVar1 != 0) goto LAB_0010438a;
      param_3 = 0;
      param_2 = 0xf;
      uVar4 = param_3;
      if ((param_5 + 0x80000000U >> 0x20 != 0) && (param_4 = 0x10, uVar4 = 0, param_1[0x26] == 0))
      goto LAB_00104404;
    }
    else {
      uVar4 = param_3;
      if ((param_5 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
        param_4 = 0xf;
LAB_00104404:
        iVar1 = emit_load_imm64(param_1,param_4,param_5);
        goto joined_r0x0010441d;
      }
    }
  }
  lVar2 = emit_x86_instruction(param_1,0x11,0x7f,param_5,param_2,uVar4);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) | 0x38;
    return 0;
  }
LAB_0010438a:
  return *param_1;
}



undefined4 emit_test_binary(undefined4 *param_1,int param_2,long param_3,int param_4,long param_5)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  lVar4 = param_3;
  if ((param_2 == 1) && (param_4 == 0x7f)) {
    lVar3 = param_5;
    if (param_5 + 0x80U < 0x100) {
LAB_001044eb:
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0x7f,lVar3,param_2,lVar4);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0xf7;
        return 0;
      }
      goto LAB_00104548;
    }
    lVar4 = param_5;
    if (param_1[0x26] != 0) {
      uVar5 = 0;
LAB_00104537:
      iVar1 = emit_do_imm32(param_1,uVar5,0xa9,lVar4);
      if (iVar1 == 0) {
        return 0;
      }
      goto LAB_00104548;
    }
    uVar5 = 0x48;
    if (param_5 + 0x80000000U >> 0x20 == 0) goto LAB_00104537;
LAB_0010456b:
    iVar1 = emit_load_imm64(param_1,0xf,param_5);
    param_5 = param_3;
    param_4 = param_2;
joined_r0x001046f9:
    if (iVar1 != 0) goto LAB_00104548;
    lVar4 = param_5;
    iVar1 = 0xf;
    iVar6 = param_4;
  }
  else {
    lVar3 = param_3;
    if (param_4 == 1) {
      if (param_2 == 0x7f) {
        lVar4 = param_5;
        param_2 = param_4;
        if (0xff < param_3 + 0x80U) {
          lVar4 = param_3;
          if (param_1[0x26] == 0) {
            uVar5 = 0x48;
            if (param_3 + 0x80000000U >> 0x20 != 0) goto LAB_00104627;
          }
          else {
            uVar5 = 0;
          }
          goto LAB_00104537;
        }
        goto LAB_001044eb;
      }
LAB_001046a5:
      if (param_4 == 0x7f) {
        lVar3 = param_5;
        if ((param_5 + 0x80000000U < 0x100000000) || (param_1[0x26] != 0)) goto LAB_001044eb;
        goto LAB_0010456b;
      }
      lVar4 = param_5;
      iVar1 = param_2;
      iVar6 = param_4;
      if ((param_2 < 0x7f) || (lVar4 = param_3, iVar1 = param_4, iVar6 = param_2, param_4 < 0x7f))
      goto LAB_0010458f;
      iVar1 = emit_mov(param_1,0xf,0,param_2,param_3);
      goto joined_r0x001046f9;
    }
    if (param_2 != 0x7f) goto LAB_001046a5;
    if (param_4 != 0x7f) {
      lVar4 = param_5;
      param_2 = param_4;
      if ((param_3 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) goto LAB_001044eb;
LAB_00104627:
      iVar1 = emit_load_imm64(param_1,0xf,param_3);
      goto joined_r0x001046f9;
    }
    iVar1 = emit_mov(param_1,0xf,0,0x7f,param_3);
    if (iVar1 != 0) goto LAB_00104548;
    if ((param_5 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) {
      param_2 = 0xf;
      lVar3 = param_5;
      lVar4 = 0;
      goto LAB_001044eb;
    }
    iVar1 = emit_load_imm64(param_1,0x10,param_5);
    if (iVar1 != 0) goto LAB_00104548;
    lVar4 = 0;
    iVar1 = 0x10;
    iVar6 = 0xf;
  }
LAB_0010458f:
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,iVar1,0,iVar6,lVar4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0x85;
    return 0;
  }
LAB_00104548:
  return *param_1;
}



ulong emit_mov_int_constprop_0
                (uint *param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  param_1[0x26] = 0;
  if (param_5 == 0x7f) {
    iVar2 = (int)param_6;
    if ((int)param_3 < 0x7f) {
      if ((param_2 == 0) || (-1 < iVar2)) {
        uVar4 = emit_do_imm32(param_1,~-((byte)reg_map[(int)param_3] < 8) & 0x41,
                              reg_lmap[(int)param_3] | 0xb8,param_6);
        return uVar4;
      }
      puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,0x7f,(long)iVar2,param_3,param_4);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 199;
        return 0;
      }
    }
    else {
      param_1[0x26] = 1;
      puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,0x7f,(long)iVar2,param_3,param_4);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 199;
        param_1[0x26] = 0;
        return 0;
      }
    }
    goto LAB_00104880;
  }
  uVar1 = 0xf;
  if ((int)param_3 < 0x7f) {
    uVar1 = param_3;
  }
  if (((param_3 & 0x80) == 0) || (0x7e < (int)param_5)) {
    if (param_2 == 0) {
      param_1[0x26] = 1;
      iVar2 = emit_mov(param_1,uVar1,0,param_5,param_6);
      if (iVar2 != 0) goto LAB_00104880;
      param_1[0x26] = 0;
    }
    else {
      puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,uVar1,0,param_5);
      if (puVar3 == (undefined1 *)0x0) goto LAB_00104880;
      *puVar3 = 99;
    }
    param_5 = uVar1;
    if ((param_3 & 0x80) == 0) {
      return 0;
    }
  }
  param_1[0x26] = 1;
  puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,param_5,0,param_3,param_4);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0x89;
    param_1[0x26] = 0;
    return 0;
  }
LAB_00104880:
  return (ulong)*param_1;
}



undefined4 emit_stack_frame_release_constprop_0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  byte *pbVar7;
  char *pcVar8;
  
  if (0 < (int)param_1[0x1e]) {
    lVar6 = emit_x86_instruction(param_1,0x11,0x7f,(long)(int)param_1[0x1e],0xe,0);
    if (lVar6 == 0) {
LAB_001049c9:
      return *param_1;
    }
  }
  iVar2 = param_1[0x1a];
  if (7 < iVar2) {
    lVar6 = 8;
    do {
      if ((byte)reg_map[lVar6] < 8) {
        puVar3 = (undefined1 *)ensure_buf(param_1,2);
        if (puVar3 == (undefined1 *)0x0) goto LAB_001049c9;
        *puVar3 = 1;
        pcVar8 = puVar3 + 1;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      }
      else {
        puVar3 = (undefined1 *)ensure_buf(param_1,3);
        if (puVar3 == (undefined1 *)0x0) goto LAB_001049c9;
        *puVar3 = 2;
        pcVar8 = puVar3 + 2;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 2;
        puVar3[1] = 0x41;
      }
      pcVar5 = reg_lmap + lVar6;
      lVar6 = lVar6 + 1;
      *pcVar8 = *pcVar5 + 'X';
    } while ((int)lVar6 <= iVar2);
  }
  iVar2 = 0xd - (param_1[1] & 3);
  iVar4 = 0xe - param_1[0x1b];
  if (iVar4 <= iVar2) {
    lVar6 = (long)iVar4;
    pbVar7 = reg_map + lVar6;
    pcVar8 = reg_lmap + lVar6;
    do {
      if (*pbVar7 < 8) {
        puVar3 = (undefined1 *)ensure_buf(param_1,2);
        if (puVar3 == (undefined1 *)0x0) goto LAB_001049c9;
        *puVar3 = 1;
        pcVar5 = puVar3 + 1;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      }
      else {
        puVar3 = (undefined1 *)ensure_buf(param_1,3);
        if (puVar3 == (undefined1 *)0x0) goto LAB_001049c9;
        *puVar3 = 2;
        pcVar5 = puVar3 + 2;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 2;
        puVar3[1] = 0x41;
      }
      cVar1 = *pcVar8;
      pbVar7 = pbVar7 + 1;
      pcVar8 = pcVar8 + 1;
      *pcVar5 = cVar1 + 'X';
    } while (pbVar7 != (byte *)(lVar6 + 0x135211 + (ulong)(uint)(iVar2 - iVar4)));
  }
  return 0;
}



void sljit_emit_op_dst_constprop_0_isra_0(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  if (*param_1 != 0) {
    return;
  }
  if (param_2 < 0x7f) {
    if ((byte)reg_map[param_2] < 8) {
      cVar1 = reg_lmap[param_2];
      puVar2 = (undefined1 *)ensure_buf(param_1,2);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 1;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
        puVar2[1] = cVar1 + 'X';
        return;
      }
    }
    else {
      puVar2 = (undefined1 *)ensure_buf(param_1,3);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 2;
        cVar1 = reg_lmap[param_2];
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 2;
        puVar2[1] = 0x41;
        puVar2[2] = cVar1 + 'X';
      }
    }
  }
  else {
    param_1[0x26] = 1;
    puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0,0,param_2,0);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0x8f;
      return;
    }
  }
  return;
}



void sljit_emit_op_src_constprop_0_isra_0(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (*param_1 != 0) {
    return;
  }
  if ((byte)reg_map[param_2] < 8) {
    puVar2 = (undefined1 *)ensure_buf(param_1,3);
    if (puVar2 == (undefined1 *)0x0) {
      return;
    }
    *puVar2 = 2;
    puVar3 = puVar2 + 2;
    cVar1 = reg_lmap[param_2];
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 2;
    puVar2[1] = cVar1 + 'P';
  }
  else {
    puVar2 = (undefined1 *)ensure_buf(param_1,4);
    if (puVar2 == (undefined1 *)0x0) {
      return;
    }
    *puVar2 = 3;
    puVar3 = puVar2 + 3;
    cVar1 = reg_lmap[param_2];
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 3;
    puVar2[1] = 0x41;
    puVar2[2] = cVar1 + 'P';
  }
  *puVar3 = 0xc3;
  return;
}



int emit_mov_half(int *param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                 undefined8 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  
  param_1[0x26] = 0;
  if (param_5 == 0x7f) {
    if ((int)param_3 < 0x7f) {
      puVar1 = (undefined1 *)emit_x86_instruction(param_1,1,0x7f,param_6,param_3,0);
    }
    else {
      puVar1 = (undefined1 *)emit_x86_instruction(param_1,0x681,0x7f,param_6,param_3,param_4);
    }
    if (puVar1 == (undefined1 *)0x0) goto LAB_00104d25;
    *puVar1 = 199;
  }
  else {
    uVar2 = 0xf;
    if ((int)param_3 < 0x7f) {
      uVar2 = param_3;
    }
    if ((0x7e < (int)param_5) || ((param_3 & 0x80) == 0)) {
      puVar1 = (undefined1 *)emit_x86_instruction(param_1,2,uVar2,0,param_5,param_6);
      if (puVar1 == (undefined1 *)0x0) {
        if (*param_1 != 0) {
          return *param_1;
        }
      }
      else {
        *puVar1 = 0xf;
        puVar1[1] = (-(param_2 == 0) & 0xf8U) + 0xbf;
      }
      param_5 = uVar2;
      if ((param_3 & 0x80) == 0) {
        return 0;
      }
    }
    puVar1 = (undefined1 *)emit_x86_instruction(param_1,0x601,param_5,0,param_3,param_4);
    if (puVar1 == (undefined1 *)0x0) {
LAB_00104d25:
      return *param_1;
    }
    *puVar1 = 0x89;
  }
  return 0;
}



int emit_mov_byte_constprop_0
              (int *param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
              undefined8 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  
  param_1[0x26] = 0;
  if (param_5 == 0x7f) {
    if ((int)param_3 < 0x7f) {
      puVar1 = (undefined1 *)emit_x86_instruction(param_1,1,0x7f,param_6,param_3,0);
      if (puVar1 == (undefined1 *)0x0) {
LAB_00104e50:
        return *param_1;
      }
      *puVar1 = 199;
    }
    else {
      puVar1 = (undefined1 *)emit_x86_instruction(param_1,0x241,0x7f,param_6,param_3,param_4);
      if (puVar1 == (undefined1 *)0x0) goto LAB_00104e50;
      *puVar1 = 0xc6;
    }
  }
  else {
    uVar2 = 0xf;
    if ((int)param_3 < 0x7f) {
      uVar2 = param_3;
    }
    if ((0x7e < (int)param_5) || ((param_3 & 0x80) == 0)) {
      puVar1 = (undefined1 *)emit_x86_instruction(param_1,2,uVar2,0,param_5,param_6);
      if (puVar1 == (undefined1 *)0x0) {
        if (*param_1 != 0) {
          return *param_1;
        }
      }
      else {
        *puVar1 = 0xf;
        puVar1[1] = (-(param_2 == 0) & 0xf8U) + 0xbe;
      }
      param_5 = uVar2;
      if ((param_3 & 0x80) == 0) {
        return 0;
      }
    }
    puVar1 = (undefined1 *)emit_x86_instruction(param_1,0x301,param_5,0,param_3,param_4);
    if (puVar1 == (undefined1 *)0x0) goto LAB_00104e50;
    *puVar1 = 0x88;
  }
  return 0;
}



void sljit_emit_select_isra_0
               (int *param_1,uint param_2,int param_3,int param_4,undefined8 param_5,int param_6)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*param_1 != 0) {
    return;
  }
  param_1[0x26] = 0;
  if (param_3 != param_6) {
    if (param_3 == param_4) {
      param_2 = param_2 ^ 1;
      param_5 = 0;
      param_4 = param_6;
      goto joined_r0x00104ec8;
    }
    iVar2 = emit_mov(param_1,param_3,0,param_6,0);
    if (iVar2 != 0) {
      return;
    }
  }
  if (param_4 == 0x7f) {
    iVar2 = emit_mov(param_1,0xf,0,0x7f,param_5);
    if (iVar2 != 0) {
      return;
    }
    param_5 = 0;
    param_4 = 0xf;
  }
joined_r0x00104ec8:
  if (cpu_feature_list == 0) {
    get_cpu_features();
  }
  if ((cpu_feature_list & 0x20) != 0) {
    cVar1 = CSWTCH_742[(int)param_2];
    puVar3 = (undefined1 *)emit_x86_instruction(param_1,2,param_3,0,param_4,param_5);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0xf;
      puVar3[1] = cVar1 + -0x40;
    }
    return;
  }
  emit_cmov_generic(param_1,param_2,param_3,param_4,param_5);
  return;
}



void sljit_emit_simd_mov_constprop_0_isra_0
               (int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    param_1[0x26] = 1;
    uVar2 = 0x7002;
    if (param_2 >> 0x18 == 4) {
      uVar2 = 0x6402;
    }
    puVar1 = (undefined2 *)emit_x86_instruction(param_1,uVar2,param_3,0,0x82,param_4);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0x6f0f;
    }
    return;
  }
  return;
}



undefined1 (*) [16] sljit_emit_put_label_constprop_0(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  undefined2 *puVar6;
  
  if ((*param_1 == 0) &&
     (pauVar4 = (undefined1 (*) [16])ensure_abuf(param_1,0x20), pauVar4 != (undefined1 (*) [16])0x0)
     ) {
    *pauVar4 = (undefined1  [16])0x0;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(pauVar4[1] + 8) = 0;
    *(undefined8 *)pauVar4[1] = uVar1;
    if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(param_1 + 6) = pauVar4;
    }
    else {
      **(undefined8 **)(param_1 + 0x10) = pauVar4;
    }
    *(undefined1 (**) [16])(param_1 + 0x10) = pauVar4;
    param_1[0x26] = 0;
    iVar3 = emit_load_imm64(param_1,0xf,0);
    if (iVar3 == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      puVar5 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,0x8c,param_2);
      if (puVar5 == (undefined1 *)0x0) {
        if (*param_1 != 0) {
          return (undefined1 (*) [16])0x0;
        }
      }
      else {
        *puVar5 = 0x89;
      }
      *(long *)(pauVar4[1] + 8) = *(long *)(param_1 + 0x20) - lVar2;
      puVar6 = (undefined2 *)ensure_buf(param_1,2);
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0x300;
        return pauVar4;
      }
    }
  }
  return (undefined1 (*) [16])0x0;
}



void sljit_emit_simd_lane_replicate_constprop_0_isra_0
               (int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  
  if (*param_1 != 0) {
    return;
  }
  param_1[0x26] = 1;
  if (((byte)cpu_feature_list & 0x80) == 0) {
    puVar1 = (undefined2 *)emit_x86_instruction(param_1,0x6402,param_2,0);
    if (puVar1 == (undefined2 *)0x0) {
      if (*param_1 != 0) {
        return;
      }
    }
    else {
      *puVar1 = 0x700f;
    }
    puVar2 = (undefined1 *)ensure_buf(param_1,2);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 1;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      puVar2[1] = 0;
    }
    return;
  }
  emit_vex_instruction(param_1,0x16458,param_2,0,param_3,0);
  return;
}



void sljit_emit_simd_op2_constprop_0_isra_0(int *param_1)

{
  undefined2 *puVar1;
  
  if (*param_1 == 0) {
    param_1[0x26] = 1;
    puVar1 = (undefined2 *)emit_x86_instruction(param_1,0x6402,1,0,2,0);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0xdb0f;
    }
    return;
  }
  return;
}



void sljit_emit_icall_constprop_0_isra_0(int *param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  
  if (*param_1 != 0) {
    return;
  }
  param_2 = param_2 >> 4;
  param_1[0x26] = 0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    param_2 = param_2 >> 4;
  } while (param_2 != 0);
  if (2 < iVar2) {
    puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,3,0,0xf,0);
    if (puVar3 == (undefined1 *)0x0) {
      if (*param_1 != 0) {
        return;
      }
    }
    else {
      *puVar3 = 0x89;
    }
  }
  puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,1,0,3,0);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0x89;
  }
  if (*param_1 == 0) {
    puVar4 = (undefined8 *)ensure_abuf(param_1,0x20);
    if (puVar4 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0xc);
      *puVar4 = 0;
      puVar4[2] = 0x4c002;
      if (puVar1 == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 4) = puVar4;
      }
      else {
        *puVar1 = puVar4;
      }
      *(undefined8 **)(param_1 + 0xc) = puVar4;
      puVar4[3] = param_3;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 0xd;
      puVar5 = (undefined2 *)ensure_buf(param_1,2);
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0x100;
        return;
      }
    }
    *param_1 = 2;
  }
  return;
}



undefined4
emit_unary(undefined4 *param_1,byte param_2,int param_3,long param_4,int param_5,long param_6)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = param_6;
  if ((param_3 != param_5) || (lVar3 = param_4, param_4 != param_6)) {
    if (0x7e < param_3) {
      iVar1 = emit_mov(param_1,0xf,0);
      if ((iVar1 == 0) &&
         (puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0,0,0xf,0),
         puVar2 != (undefined1 *)0x0)) {
        puVar2[1] = puVar2[1] | param_2;
        *puVar2 = 0xf7;
        puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_3,param_4);
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0x89;
          return 0;
        }
      }
      goto LAB_001053c8;
    }
    iVar1 = emit_mov(param_1,param_3,0,param_5,param_6,lVar3);
    param_4 = 0;
    if (iVar1 != 0) goto LAB_001053c8;
  }
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0,0,param_3,param_4);
  if (puVar2 != (undefined1 *)0x0) {
    puVar2[1] = puVar2[1] | param_2;
    *puVar2 = 0xf7;
    return 0;
  }
LAB_001053c8:
  return *param_1;
}



/* WARNING: Type propagation algorithm not settling */

short * set_then_offsets(long param_1,short *param_2,undefined1 *param_3)

{
  short *psVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  short *psVar15;
  bool bVar16;
  bool bVar17;
  short sVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ushort uVar21;
  short sVar22;
  undefined1 *puVar23;
  
  psVar6 = param_2;
  do {
    psVar6 = psVar6 + (ushort)psVar6[1];
  } while (*psVar6 == 0x78);
  psVar6 = psVar6 + 2;
  sVar18 = *param_2;
  sVar22 = param_2[(ushort)param_2[1]];
  psVar7 = (short *)next_opcode();
  if ((ushort)(sVar18 - 0x7fU) < 6) {
    param_3 = (undefined1 *)0x0;
LAB_00105463:
    if (sVar22 == 0x78) {
      if (*psVar7 == 0x7d) {
        psVar7 = psVar7 + 2;
      }
      else if (*psVar7 == 0x7e) {
        psVar7 = psVar7 + 3;
      }
      bVar16 = true;
      param_3 = (undefined1 *)
                (((long)psVar7 - *(long *)(param_1 + 0x10) >> 1) + *(long *)(param_1 + 0x30));
      goto joined_r0x0010549c;
    }
  }
  else if ((sVar18 != 0x8b) && (sVar18 != 0x90)) goto LAB_00105463;
  bVar16 = false;
joined_r0x0010549c:
  if (psVar6 <= psVar7) {
    return psVar6;
  }
  sVar18 = *psVar7;
  do {
    uVar21 = sVar18 - 0x7f;
    psVar8 = psVar7;
    if (uVar21 < 0x12) {
      do {
        psVar8 = psVar8 + (ushort)psVar8[1];
      } while (*psVar8 == 0x78);
      psVar8 = psVar8 + 2;
      sVar22 = psVar7[(ushort)psVar7[1]];
      psVar7 = (short *)next_opcode();
      if (uVar21 < 6) {
        puVar13 = (undefined1 *)0x0;
LAB_001055c3:
        if (sVar22 != 0x78) goto LAB_00105544;
        if (*psVar7 == 0x7d) {
          psVar7 = psVar7 + 2;
        }
        else if (*psVar7 == 0x7e) {
          psVar7 = psVar7 + 3;
        }
        bVar17 = true;
        puVar13 = (undefined1 *)
                  (((long)psVar7 - *(long *)(param_1 + 0x10) >> 1) + *(long *)(param_1 + 0x30));
      }
      else {
        puVar13 = param_3;
        if ((sVar18 != 0x8b) && (sVar18 != 0x90)) goto LAB_001055c3;
LAB_00105544:
        bVar17 = false;
      }
      while (psVar7 < psVar8) {
        sVar18 = *psVar7;
        uVar21 = sVar18 - 0x7f;
        psVar15 = psVar7;
        if (uVar21 < 0x12) {
          do {
            psVar15 = psVar15 + (ushort)psVar15[1];
          } while (*psVar15 == 0x78);
          sVar22 = psVar7[(ushort)psVar7[1]];
          psVar9 = (short *)next_opcode();
          if (uVar21 < 6) {
            puVar14 = (undefined1 *)0x0;
LAB_001056d2:
            if (sVar22 != 0x78) goto LAB_00105656;
            if (*psVar9 == 0x7d) {
              psVar9 = psVar9 + 2;
            }
            else if (*psVar9 == 0x7e) {
              psVar9 = psVar9 + 3;
            }
            bVar5 = true;
            puVar14 = (undefined1 *)
                      (((long)psVar9 - *(long *)(param_1 + 0x10) >> 1) + *(long *)(param_1 + 0x30));
          }
          else {
            puVar14 = puVar13;
            if ((sVar18 != 0x8b) && (sVar18 != 0x90)) goto LAB_001056d2;
LAB_00105656:
            bVar5 = false;
          }
          while (psVar7 = psVar15 + 2, psVar9 < psVar15 + 2) {
            sVar18 = *psVar9;
            uVar21 = sVar18 - 0x7f;
            psVar7 = psVar9;
            if (uVar21 < 0x12) {
              do {
                psVar7 = psVar7 + (ushort)psVar7[1];
              } while (*psVar7 == 0x78);
              psVar7 = psVar7 + 2;
              sVar22 = psVar9[(ushort)psVar9[1]];
              psVar10 = (short *)next_opcode(param_1);
              if (uVar21 < 6) {
                puVar20 = (undefined1 *)0x0;
                if (sVar22 != 0x78) goto LAB_00105c34;
LAB_00105b96:
                if (*psVar10 == 0x7d) {
                  psVar10 = psVar10 + 2;
                }
                else if (*psVar10 == 0x7e) {
                  psVar10 = psVar10 + 3;
                }
                bVar4 = true;
                puVar20 = (undefined1 *)
                          (((long)psVar10 - *(long *)(param_1 + 0x10) >> 1) +
                          *(long *)(param_1 + 0x30));
              }
              else {
                puVar20 = puVar14;
                if ((sVar18 == 0x8b) || (sVar18 == 0x90)) {
                  bVar4 = false;
                }
                else {
                  if (sVar22 == 0x78) goto LAB_00105b96;
LAB_00105c34:
                  bVar4 = false;
                }
              }
              psVar9 = psVar7;
              if (psVar10 < psVar7) {
                do {
                  sVar18 = *psVar10;
                  uVar21 = sVar18 - 0x7f;
                  psVar11 = psVar10;
                  if (uVar21 < 0x12) {
                    do {
                      psVar11 = psVar11 + (ushort)psVar11[1];
                    } while (*psVar11 == 0x78);
                    psVar11 = psVar11 + 2;
                    sVar22 = psVar10[(ushort)psVar10[1]];
                    psVar9 = (short *)next_opcode();
                    if (uVar21 < 6) {
                      puVar19 = (undefined1 *)0x0;
LAB_001058c3:
                      if (sVar22 != 0x78) goto LAB_00105838;
                      if (*psVar9 == 0x7d) {
                        psVar9 = psVar9 + 2;
                      }
                      else if (*psVar9 == 0x7e) {
                        psVar9 = psVar9 + 3;
                      }
                      bVar3 = true;
                      puVar19 = (undefined1 *)
                                (((long)psVar9 - *(long *)(param_1 + 0x10) >> 1) +
                                *(long *)(param_1 + 0x30));
                    }
                    else {
                      puVar19 = puVar20;
                      if ((sVar18 != 0x8b) && (sVar18 != 0x90)) goto LAB_001058c3;
LAB_00105838:
                      bVar3 = false;
                    }
                    while (psVar9 < psVar11) {
                      sVar18 = *psVar9;
                      uVar21 = sVar18 - 0x7f;
                      psVar10 = psVar9;
                      if (uVar21 < 0x12) {
                        do {
                          psVar10 = psVar10 + (ushort)psVar10[1];
                        } while (*psVar10 == 0x78);
                        sVar22 = psVar9[(ushort)psVar9[1]];
                        psVar12 = (short *)next_opcode(param_1);
                        if (uVar21 < 6) {
                          puVar23 = (undefined1 *)0x0;
LAB_00105aab:
                          if (sVar22 != 0x78) goto LAB_00105958;
                          if (*psVar12 == 0x7d) {
                            psVar12 = psVar12 + 2;
                          }
                          else if (*psVar12 == 0x7e) {
                            psVar12 = psVar12 + 3;
                          }
                          bVar2 = true;
                          puVar23 = (undefined1 *)
                                    (((long)psVar12 - *(long *)(param_1 + 0x10) >> 1) +
                                    *(long *)(param_1 + 0x30));
                        }
                        else {
                          puVar23 = puVar19;
                          if ((sVar18 != 0x8b) && (sVar18 != 0x90)) goto LAB_00105aab;
LAB_00105958:
                          bVar2 = false;
                        }
                        while (psVar9 = psVar10 + 2, psVar12 < psVar10 + 2) {
                          sVar18 = *psVar12;
                          if ((ushort)(sVar18 - 0x7fU) < 0x12) {
                            psVar12 = (short *)set_then_offsets(param_1,psVar12,puVar23);
                          }
                          else if (sVar18 == 0x78) {
                            if (!bVar2) goto LAB_0010598f;
                            psVar9 = psVar12 + 2;
                            if (*psVar9 == 0x7d) {
                              psVar12 = psVar12 + 4;
                            }
                            else {
                              psVar1 = psVar12 + 2;
                              psVar12 = psVar12 + 5;
                              if (*psVar9 != 0x7e) {
                                psVar12 = psVar1;
                              }
                            }
                            puVar23 = (undefined1 *)
                                      (((long)psVar12 - *(long *)(param_1 + 0x10) >> 1) +
                                      *(long *)(param_1 + 0x30));
                          }
                          else {
                            if (((ushort)(sVar18 - 0x9fU) < 2) && (puVar23 != (undefined1 *)0x0)) {
                              *puVar23 = 1;
                            }
LAB_0010598f:
                            psVar12 = (short *)next_opcode(param_1);
                          }
                        }
                      }
                      else if (sVar18 == 0x78) {
                        if (!bVar3) goto LAB_0010588d;
                        if (psVar9[2] == 0x7d) {
                          psVar10 = psVar9 + 4;
                        }
                        else {
                          psVar10 = psVar9 + 5;
                          if (psVar9[2] != 0x7e) {
                            psVar10 = psVar9 + 2;
                          }
                        }
                        puVar19 = (undefined1 *)
                                  (*(long *)(param_1 + 0x30) +
                                  ((long)psVar10 - *(long *)(param_1 + 0x10) >> 1));
                        psVar9 = psVar10;
                      }
                      else {
                        if (((ushort)(sVar18 - 0x9fU) < 2) && (puVar19 != (undefined1 *)0x0)) {
                          *puVar19 = 1;
                        }
LAB_0010588d:
                        psVar9 = (short *)next_opcode(param_1);
                      }
                    }
                  }
                  else {
                    if (sVar18 == 0x78) {
                      if (bVar4) {
                        if (psVar10[2] == 0x7d) {
                          psVar11 = psVar10 + 4;
                        }
                        else {
                          psVar11 = psVar10 + 5;
                          if (psVar10[2] != 0x7e) {
                            psVar11 = psVar10 + 2;
                          }
                        }
                        puVar20 = (undefined1 *)
                                  (*(long *)(param_1 + 0x30) +
                                  ((long)psVar11 - *(long *)(param_1 + 0x10) >> 1));
                        goto LAB_001057c4;
                      }
                    }
                    else if (((ushort)(sVar18 - 0x9fU) < 2) && (puVar20 != (undefined1 *)0x0)) {
                      *puVar20 = 1;
                    }
                    psVar11 = (short *)next_opcode(param_1);
                  }
LAB_001057c4:
                  psVar10 = psVar11;
                  psVar9 = psVar7;
                } while (psVar11 < psVar7);
              }
            }
            else if (sVar18 == 0x78) {
              if (!bVar5) goto LAB_001056a4;
              if (psVar9[2] == 0x7d) {
                psVar7 = psVar9 + 4;
              }
              else {
                psVar7 = psVar9 + 5;
                if (psVar9[2] != 0x7e) {
                  psVar7 = psVar9 + 2;
                }
              }
              puVar14 = (undefined1 *)
                        (((long)psVar7 - *(long *)(param_1 + 0x10) >> 1) + *(long *)(param_1 + 0x30)
                        );
              psVar9 = psVar7;
            }
            else {
              if (((ushort)(sVar18 - 0x9fU) < 2) && (puVar14 != (undefined1 *)0x0)) {
                *puVar14 = 1;
              }
LAB_001056a4:
              psVar9 = (short *)next_opcode(param_1);
            }
          }
        }
        else if (sVar18 == 0x78) {
          if (!bVar17) goto LAB_00105595;
          if (psVar7[2] == 0x7d) {
            psVar15 = psVar7 + 4;
          }
          else {
            psVar15 = psVar7 + 5;
            if (psVar7[2] != 0x7e) {
              psVar15 = psVar7 + 2;
            }
          }
          puVar13 = (undefined1 *)
                    (((long)psVar15 - *(long *)(param_1 + 0x10) >> 1) + *(long *)(param_1 + 0x30));
          psVar7 = psVar15;
        }
        else {
          if (((ushort)(sVar18 - 0x9fU) < 2) && (puVar13 != (undefined1 *)0x0)) {
            *puVar13 = 1;
          }
LAB_00105595:
          psVar7 = (short *)next_opcode(param_1);
        }
      }
    }
    else {
      if (sVar18 == 0x78) {
        if (bVar16) {
          if (psVar7[2] == 0x7d) {
            psVar8 = psVar7 + 4;
          }
          else {
            psVar8 = psVar7 + 5;
            if (psVar7[2] != 0x7e) {
              psVar8 = psVar7 + 2;
            }
          }
          param_3 = (undefined1 *)
                    (((long)psVar8 - *(long *)(param_1 + 0x10) >> 1) + *(long *)(param_1 + 0x30));
          goto LAB_001054e1;
        }
      }
      else if (((ushort)(sVar18 - 0x9fU) < 2) && (param_3 != (undefined1 *)0x0)) {
        *param_3 = 1;
      }
      psVar8 = (short *)next_opcode(param_1);
    }
LAB_001054e1:
    if (psVar6 <= psVar8) {
      return psVar6;
    }
    sVar18 = *psVar8;
    psVar7 = psVar8;
  } while( true );
}



void sljit_emit_simd_lane_mov_constprop_0_isra_0
               (int *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (*param_1 != 0) {
    return;
  }
  param_1[0x26] = 1;
  if (param_3 == 0x7f) {
    iVar1 = emit_mov(param_1,0xf,0,0x7f,param_4);
    if (iVar1 != 0) {
      return;
    }
    param_4 = 0;
    param_3 = 0xf;
  }
  puVar2 = (undefined2 *)emit_x86_instruction(param_1,0x2402,param_2,0,param_3,param_4);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0x6e0f;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sljit_emit_enter_constprop_0_isra_0(int *param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  
  uVar3 = _UNK_00135298;
  uVar2 = __LC16;
  if (*param_1 != 0) {
    return;
  }
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 0x1a) = uVar2;
  *(undefined8 *)(param_1 + 0x1c) = uVar3;
  puVar4 = (undefined1 *)ensure_buf(param_1,5);
  if (puVar4 == (undefined1 *)0x0) {
    if (*param_1 != 0) {
      return;
    }
  }
  else {
    *puVar4 = 4;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 4;
    *(undefined4 *)(puVar4 + 1) = 0xfa1e0ff3;
  }
  param_1[0x26] = 0;
  lVar6 = 0xd;
  do {
    if ((byte)reg_map[lVar6] < 8) {
      puVar4 = (undefined1 *)ensure_buf(param_1,2);
      if (puVar4 == (undefined1 *)0x0) {
        return;
      }
      *puVar4 = 1;
      pcVar5 = puVar4 + 1;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    }
    else {
      puVar4 = (undefined1 *)ensure_buf(param_1,3);
      if (puVar4 == (undefined1 *)0x0) {
        return;
      }
      *puVar4 = 2;
      pcVar5 = puVar4 + 2;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 2;
      puVar4[1] = 0x41;
    }
    pcVar1 = reg_lmap + lVar6;
    lVar6 = lVar6 + -1;
    *pcVar5 = *pcVar1 + 'P';
  } while (lVar6 != 8);
  puVar4 = (undefined1 *)emit_x86_instruction(param_1,1,3,0,0xd,0);
  if (puVar4 == (undefined1 *)0x0) {
    if (*param_1 != 0) {
      return;
    }
  }
  else {
    *puVar4 = 0x89;
  }
  iVar7 = (param_2 + 0x3fU & 0xfffffff0) - 0x30;
  param_1[0x1e] = iVar7;
  if ((0 < iVar7) && (lVar6 = emit_x86_instruction(param_1,0x11,0x7f,(long)iVar7,0xe,0), lVar6 != 0)
     ) {
    *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x28;
  }
  return;
}



int scan_prefix(long param_1,ushort *param_2,byte *param_3,int param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  undefined2 uVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  ushort uVar11;
  ushort *puVar12;
  long lVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  int iVar19;
  long in_FS_OFFSET;
  bool bVar20;
  ushort local_44 [2];
  long local_40;
  
  iVar6 = *param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar6 == 0) {
LAB_00105f2c:
    iVar19 = 0;
LAB_00105ee3:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar19;
  }
  uVar15 = 1;
  iVar19 = 0;
LAB_00105e94:
  uVar11 = *param_2;
  iVar6 = iVar6 + -1;
  *param_5 = iVar6;
  if (uVar11 < 0xc) {
    if (uVar11 == 0) goto switchD_00105ec2_caseD_e;
    uVar4 = 1L << ((byte)uVar11 & 0x3f);
    if ((uVar4 & 0x3e) != 0) goto switchD_00105ec2_caseD_17;
    if ((uVar4 & 0x540) != 0) goto switchD_00105ec2_caseD_c;
    if ((uVar4 & 0xa80) == 0) goto switchD_00105ec2_caseD_e;
    goto LAB_0010613f;
  }
  switch(uVar11) {
  case 0xc:
  case 0xd:
    goto switchD_00105ec2_caseD_c;
  case 0xf:
  case 0x10:
    if (*(int *)(param_1 + 0x1e0) != 0) break;
LAB_00106205:
    puVar7 = param_2 + 3;
    goto LAB_00106143;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0xa9:
  case 0xaa:
switchD_00105ec2_caseD_17:
    puVar7 = param_2 + 1;
    goto LAB_00105f24;
  case 0x1d:
    iVar6 = 0;
    goto LAB_001065cc;
  case 0x1e:
    iVar6 = 1;
LAB_001065cc:
    puVar12 = param_2 + 1;
LAB_00106319:
    bVar2 = false;
    iVar9 = *(int *)(param_1 + 0x1e0);
    uVar11 = *puVar12;
joined_r0x0010641f:
    uVar4 = (ulong)uVar11;
    if (iVar9 == 0) {
      if (iVar6 == 0) {
LAB_0010674f:
        iVar6 = 1;
        goto LAB_00106755;
      }
      if (*(int *)(param_1 + 0x1e8) == 0) {
        if ((0xff < uVar11) ||
           (bVar18 = *(byte *)(*(long *)(param_1 + 0x90) + uVar4), bVar20 = bVar18 == uVar11,
           uVar11 = (ushort)bVar18, bVar20)) goto LAB_00106755;
LAB_00106368:
        local_44[0] = uVar11;
        bVar20 = true;
      }
      else {
LAB_00106445:
        uVar8 = (uint)uVar11;
        if (0x7f < uVar8) {
          iVar6 = 1;
          goto LAB_00106454;
        }
        iVar6 = 1;
        bVar20 = *(byte *)(*(long *)(param_1 + 0x90) + uVar4) != uVar8;
LAB_0010649b:
        uVar8 = (uint)uVar11;
        if (!bVar20) goto LAB_00106755;
        if (iVar9 == 0) {
          if (*(int *)(param_1 + 0x1e8) == 0) {
            if (0xff < uVar11) goto LAB_00106368;
LAB_0010689f:
            uVar11 = (ushort)*(byte *)(*(long *)(param_1 + 0x90) + uVar4);
            goto LAB_00106368;
          }
          if (uVar11 < 0x80) goto LAB_0010689f;
          local_44[0] = uVar11 + *(short *)(&DAT_0013a01c +
                                           (ulong)*(ushort *)
                                                   (&_pcre2_ucd_stage2_16 +
                                                   (long)(int)((uint)*(ushort *)
                                                                      (&_pcre2_ucd_stage1_16 +
                                                                      (long)((int)uVar8 >> 7) * 2) *
                                                               0x80 + (uVar8 & 0x7f)) * 2) * 0xc);
          goto LAB_00106387;
        }
        if ((uVar11 & 0xfc00) == 0xd800) {
          uVar8 = ((uVar8 & 0x3ff) << 10 | puVar12[1] & 0x3ff) + 0x10000;
LAB_00106856:
          uVar8 = uVar8 + *(int *)(&DAT_0013a01c +
                                  (ulong)*(ushort *)
                                          (&_pcre2_ucd_stage2_16 +
                                          (long)(int)((uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar8 >> 7) * 2) * 0x80 +
                                                     (uVar8 & 0x7f)) * 2) * 0xc);
        }
        else {
          if (0x7f < uVar11) goto LAB_00106856;
          uVar8 = (uint)*(byte *)(*(long *)(param_1 + 0x90) + uVar4);
        }
        iVar9 = _pcre2_ord2utf_16(uVar8);
        if (iVar9 != iVar6) break;
      }
    }
    else {
      if ((uVar11 & 0xfc00) != 0xd800) {
        if (iVar6 != 0) goto LAB_00106445;
        goto LAB_0010674f;
      }
      if (iVar6 != 0) {
        iVar6 = 2;
        uVar8 = ((uVar11 & 0x3ff) << 10 | puVar12[1] & 0x3ff) + 0x10000;
LAB_00106454:
        bVar20 = *(int *)(&DAT_0013a01c +
                         (ulong)*(ushort *)
                                 (&_pcre2_ucd_stage2_16 +
                                 (long)(int)((uVar8 & 0x7f) +
                                            (uint)*(ushort *)
                                                   (&_pcre2_ucd_stage1_16 +
                                                   (long)((int)uVar8 >> 7) * 2) * 0x80) * 2) * 0xc)
                 != 0;
        goto LAB_0010649b;
      }
      iVar6 = 2;
LAB_00106755:
      bVar20 = false;
      local_44[0] = 0;
    }
LAB_00106387:
    do {
      puVar14 = local_44;
      puVar7 = puVar12;
      iVar9 = iVar6;
LAB_00106398:
      bVar18 = *param_3;
      uVar11 = *puVar7;
      iVar19 = iVar19 + 1;
      if (bVar18 == 0xff) {
LAB_001063dc:
        if (param_4 == 1) goto switchD_00105ec2_caseD_e;
        if (iVar9 != 2) goto LAB_0010661b;
LAB_001063fc:
        param_4 = param_4 + -1;
        puVar7 = puVar7 + 1;
        param_3 = param_3 + 0xc;
        puVar14 = puVar14 + 1;
        iVar9 = 1;
        goto LAB_00106398;
      }
      lVar13 = 0;
      uVar8 = (uint)bVar18;
      if (uVar8 != 0) {
        do {
          if (uVar11 == *(ushort *)(param_3 + lVar13 * 2 + 2)) goto LAB_001063d4;
          lVar13 = lVar13 + 1;
        } while ((uint)lVar13 < uVar8);
        if (4 < uVar8) {
LAB_00106710:
          *param_3 = 0xff;
          goto LAB_001063dc;
        }
        *(ushort *)(param_3 + (ulong)bVar18 * 2 + 2) = uVar11;
        *param_3 = bVar18 + 1;
        if (iVar9 == 2) goto LAB_001063d4;
        param_3[1] = param_3[1] + 1;
        if (!bVar20) goto LAB_001063dc;
LAB_00106680:
        bVar18 = *param_3;
        uVar8 = (uint)bVar18;
        uVar11 = *puVar14;
        if (bVar18 == 0xff) goto LAB_001063dc;
        if (bVar18 != 0) goto LAB_0010669c;
        *param_3 = 1;
        *(ushort *)(param_3 + 2) = uVar11;
        if (iVar9 != 2) {
          param_3[1] = 1;
          goto joined_r0x00106701;
        }
LAB_00106720:
        if (param_4 == 1) goto switchD_00105ec2_caseD_e;
        goto LAB_001063fc;
      }
      *param_3 = 1;
      *(ushort *)(param_3 + 2) = uVar11;
      if (iVar9 == 2) {
LAB_001063d4:
        if (bVar20) goto LAB_00106680;
        goto LAB_001063dc;
      }
      param_3[1] = 1;
      if (bVar20) {
        uVar11 = *puVar14;
        bVar18 = 1;
        uVar8 = 1;
LAB_0010669c:
        lVar13 = 0;
        do {
          if (*(ushort *)(param_3 + lVar13 * 2 + 2) == uVar11) goto LAB_001063dc;
          lVar13 = lVar13 + 1;
        } while ((uint)lVar13 < uVar8);
        if (4 < uVar8) goto LAB_00106710;
        *(ushort *)(param_3 + (ulong)uVar8 * 2 + 2) = uVar11;
        *param_3 = bVar18 + 1;
        if (iVar9 == 2) goto LAB_00106720;
        param_3[1] = param_3[1] + 1;
      }
joined_r0x00106701:
      if (param_4 == 1) goto switchD_00105ec2_caseD_e;
LAB_0010661b:
      param_4 = param_4 + -1;
      puVar7 = puVar7 + 1;
      param_3 = param_3 + 0xc;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    if (!bVar2) {
      iVar6 = *param_5;
      uVar15 = 1;
      goto LAB_00105f24;
    }
    break;
  case 0x1f:
  case 0x20:
    param_2 = param_2 + 1;
switchD_00105ec2_caseD_c:
    if (*(int *)(param_1 + 0x1e0) == 0) {
LAB_0010613f:
      puVar7 = param_2 + 1;
LAB_00106143:
      iVar9 = param_4 + 1 + iVar19;
      iVar17 = uVar15 - param_4;
      do {
        *param_3 = 0xff;
        iVar19 = iVar9 - param_4;
        param_4 = param_4 + -1;
        if (param_4 == 0) goto LAB_00105ee3;
        param_3 = param_3 + 0xc;
      } while (0 < iVar17 + param_4);
LAB_00106171:
      uVar15 = 1;
      goto LAB_00105f24;
    }
    break;
  case 0x23:
  case 0x24:
  case 0x2b:
    iVar6 = 0;
    goto LAB_0010640a;
  case 0x25:
  case 0x26:
  case 0x2c:
    iVar6 = 0;
    goto LAB_001062af;
  case 0x29:
    iVar6 = 0;
    goto LAB_001065b6;
  case 0x30:
  case 0x31:
  case 0x38:
    iVar6 = 1;
LAB_0010640a:
    iVar9 = *(int *)(param_1 + 0x1e0);
    puVar12 = param_2 + 1;
    bVar2 = true;
    uVar11 = *puVar12;
    goto joined_r0x0010641f;
  case 0x32:
  case 0x33:
  case 0x39:
    iVar6 = 1;
LAB_001062af:
    puVar12 = param_2 + 1;
    lVar13 = 2;
    if (*(int *)(param_1 + 0x1e0) != 0) {
      lVar13 = (ulong)((param_2[1] & 0xfc00) == 0xd800) * 2 + 2;
    }
    param_4 = scan_prefix(param_1,(byte *)((long)puVar12 + lVar13),param_3,param_4,param_5);
    if (param_4 == 0) break;
    goto LAB_00106319;
  case 0x36:
    iVar6 = 1;
LAB_001065b6:
    uVar15 = (uint)param_2[1];
    puVar12 = param_2 + 2;
    goto LAB_00106319;
  case 0x43:
  case 0x50:
    if (*(int *)(param_1 + 0x1e0) == 0) {
      uVar15 = (uint)param_2[1];
      goto LAB_00106205;
    }
    break;
  case 0x5d:
    uVar15 = (uint)param_2[1];
    goto switchD_00105ec2_caseD_79;
  case 0x6e:
switchD_00105ec2_caseD_6e:
    puVar7 = param_2 + 0x11;
    if ((ushort)(param_2[0x11] - 0x62) < 0xc) {
      uVar4 = 1L << ((byte)(param_2[0x11] - 0x62) & 0x3f);
      if ((uVar4 & 0x533) == 0) {
        if (((uVar4 & 0x8c0) == 0) || (uVar15 = (uint)param_2[0x12], param_2[0x12] != 0))
        goto LAB_00105f7f;
      }
      else {
        param_4 = scan_prefix(param_1,param_2 + 0x12,param_3,param_4,param_5);
        if (param_4 != 0) goto LAB_00105f7f;
      }
      break;
    }
LAB_00105f7f:
    uVar3 = _LC17;
    iVar6 = param_4 + 1 + iVar19;
    iVar9 = uVar15 - param_4;
    do {
      if ((char)*(byte *)((long)param_2 + 0x21) < '\0') {
        *param_3 = 0xff;
      }
      else {
        bVar18 = *param_3;
        if (bVar18 != 0xff) {
          uVar15 = 0;
          puVar12 = param_2 + 1;
          do {
            bVar1 = (byte)*puVar12;
            puVar12 = (ushort *)((long)puVar12 + 1);
            bVar5 = bVar1;
            uVar8 = uVar15;
            if (bVar1 == 0) {
              uVar15 = uVar15 + 8;
            }
            else {
              do {
                while ((bVar5 & 1) == 0) {
LAB_00106040:
                  bVar5 = bVar5 >> 1;
                  uVar8 = uVar8 + 1;
                  if (bVar5 == 0) goto LAB_001060a8;
                }
                uVar16 = (uint)bVar18;
                if (uVar16 == 0xff) {
LAB_00106105:
                  bVar18 = 0xff;
                  goto LAB_00106040;
                }
                lVar13 = 0;
                sVar10 = (short)uVar8;
                if (uVar16 == 0) {
                  *(short *)(param_3 + 2) = sVar10;
                  *(undefined2 *)param_3 = uVar3;
                  bVar18 = bVar5 & 1;
                  goto LAB_00106040;
                }
                do {
                  if (*(short *)(param_3 + lVar13 * 2 + 2) == sVar10) goto LAB_00106040;
                  lVar13 = lVar13 + 1;
                } while ((uint)lVar13 < uVar16);
                if (4 < uVar16) {
                  *param_3 = 0xff;
                  goto LAB_00106105;
                }
                *(short *)(param_3 + (ulong)bVar18 * 2 + 2) = sVar10;
                bVar18 = bVar18 + 1;
                param_3[1] = param_3[1] + 1;
                bVar5 = bVar5 >> 1;
                *param_3 = bVar18;
                uVar8 = uVar8 + 1;
              } while (bVar5 != 0);
LAB_001060a8:
              uVar8 = 0x1f;
              if (bVar1 != 0) {
                for (; bVar1 >> uVar8 == 0; uVar8 = uVar8 - 1) {
                }
              }
              uVar15 = (uVar15 + 0x27) - (uVar8 ^ 0x1f) & 0xfffffff8;
            }
          } while ((bVar18 != 0xff) && (puVar12 < puVar7));
        }
      }
      iVar19 = iVar6 - param_4;
      if (param_4 == 1) goto LAB_00105ee3;
      param_4 = param_4 + -1;
      param_3 = param_3 + 0xc;
    } while (0 < iVar9 + param_4);
    if (0xb < (ushort)(param_2[0x11] - 0x62)) {
LAB_0010659c:
      iVar6 = *param_5;
      uVar15 = 1;
      goto LAB_00105f24;
    }
    uVar4 = 1L << ((byte)(param_2[0x11] - 0x62) & 0x3f);
    if ((uVar4 & 0x103) == 0) {
      if ((uVar4 & 0x8c0) == 0) {
        if ((uVar4 & 0x430) == 0) goto LAB_0010659c;
        iVar6 = *param_5;
        puVar7 = param_2 + 0x12;
        goto LAB_00106171;
      }
      if (param_2[0x12] == param_2[0x13]) {
        iVar6 = *param_5;
        puVar7 = param_2 + 0x14;
        uVar15 = 1;
        goto LAB_00105f24;
      }
    }
    goto LAB_00105ee3;
  case 0x6f:
    if (*(int *)(param_1 + 0x1e0) == 0) goto switchD_00105ec2_caseD_6e;
    break;
  case 0x70:
    if (*(int *)(param_1 + 0x1e0) == 0) {
      puVar7 = param_2 + param_2[1];
      goto LAB_00106143;
    }
    break;
  case 0x78:
    puVar7 = param_2 + param_2[1];
    goto LAB_00105f24;
  case 0x79:
    goto switchD_00105ec2_caseD_79;
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
    do {
      param_2 = param_2 + param_2[1];
    } while (*param_2 == 0x78);
    goto switchD_00105ec2_caseD_79;
  case 0x85:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
    puVar7 = param_2 + param_2[1];
    if (*puVar7 == 0x78) {
      do {
        param_4 = scan_prefix(param_1,puVar7 + 2,param_3,param_4,param_5);
        if (param_4 == 0) goto LAB_00105ee3;
        puVar7 = puVar7 + puVar7[1];
      } while (*puVar7 == 0x78);
      iVar6 = *param_5;
      uVar11 = *param_2;
    }
    if ((ushort)(uVar11 - 0x89) < 2) {
      param_2 = param_2 + 1;
    }
    puVar7 = param_2 + 2;
LAB_00105f24:
    param_2 = puVar7;
    if (iVar6 == 0) goto LAB_00105f2c;
    goto LAB_00105e94;
  }
switchD_00105ec2_caseD_e:
  goto LAB_00105ee3;
switchD_00105ec2_caseD_79:
  puVar7 = param_2 + 2;
  goto LAB_00105f24;
}



undefined4
emit_non_cum_binary(undefined4 *param_1,uint param_2,int param_3,long param_4,int param_5,
                   long param_6,int param_7,long param_8)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar6 = (undefined1)(param_2 >> 8);
  uVar5 = (undefined1)(param_2 >> 0x10);
  if ((param_3 == param_5) && (param_4 == param_6)) {
    if (param_7 == 0x7f) {
      if (param_3 == 1) {
        if (0xff < param_8 + 0x80U) {
          if (param_1[0x26] == 0) {
            if (param_8 + 0x80000000U >> 0x20 != 0) {
              param_7 = 0xf;
              goto LAB_00106b3d;
            }
            uVar4 = 0x48;
          }
          else {
            uVar4 = 0;
          }
          iVar1 = emit_do_imm32(param_1,uVar4,param_2 >> 0x18,param_8);
          if (iVar1 == 0) {
            return 0;
          }
          goto LAB_00106b54;
        }
      }
      else if ((param_8 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
        param_7 = (param_3 == 0xf) + 0xf;
LAB_00106b3d:
        iVar1 = emit_load_imm64(param_1,param_7,param_8);
        goto joined_r0x00106bcb;
      }
LAB_001069cb:
      lVar3 = emit_x86_instruction(param_1,0x11,0x7f,param_8,param_3,param_4);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | (byte)param_2;
        return 0;
      }
      goto LAB_00106b54;
    }
    if (param_3 < 0x7f) {
LAB_00106ac4:
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_3,param_4,param_7,param_8);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = uVar5;
        return 0;
      }
      goto LAB_00106b54;
    }
    if (0x7e < param_7) {
      iVar1 = emit_mov(param_1,0xf,0,param_7,param_8);
      if (iVar1 != 0) goto LAB_00106b54;
      param_8 = 0;
      param_7 = 0xf;
    }
  }
  else {
    if ((0x7e < param_3) || (param_3 == param_7)) {
      iVar1 = emit_mov(param_1,0xf,0,param_5,param_6);
      if (iVar1 == 0) {
        if (param_7 == 0x7f) {
          if ((param_8 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) {
            lVar3 = emit_x86_instruction(param_1,0x11,0x7f,param_8,0xf,0);
            if (lVar3 == 0) goto LAB_00106b54;
            *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | (byte)param_2;
          }
          else {
            iVar1 = emit_load_imm64(param_1,0x10,param_8);
            if ((iVar1 != 0) ||
               (puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0x10,0,0xf,0),
               puVar2 == (undefined1 *)0x0)) goto LAB_00106b54;
            *puVar2 = uVar6;
          }
        }
        else {
          puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_7,param_8);
          if (puVar2 == (undefined1 *)0x0) goto LAB_00106b54;
          *puVar2 = uVar5;
        }
        puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_3,param_4);
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0x89;
          return 0;
        }
      }
      goto LAB_00106b54;
    }
    iVar1 = emit_mov(param_1,param_3,0,param_5,param_6);
    if (iVar1 != 0) goto LAB_00106b54;
    if (param_7 != 0x7f) {
      param_4 = 0;
      goto LAB_00106ac4;
    }
    if ((param_8 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) {
      param_4 = 0;
      goto LAB_001069cb;
    }
    param_7 = (param_3 == 0xf) + 0xf;
    iVar1 = emit_load_imm64(param_1,param_7,param_8);
    param_4 = 0;
joined_r0x00106bcb:
    if (iVar1 != 0) goto LAB_00106b54;
    param_8 = 0;
  }
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_7,param_8,param_3,param_4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = uVar6;
    return 0;
  }
LAB_00106b54:
  return *param_1;
}



undefined4
emit_lea_binary(undefined4 *param_1,uint param_2,long param_3,uint param_4,long param_5,uint param_6
               ,long param_7)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  
  if ((param_2 == param_4) && (param_3 == param_5)) {
    return 4;
  }
  if ((param_2 == param_6) && (param_3 == param_7)) {
    return 4;
  }
  uVar3 = 0xf;
  if ((int)param_2 < 0x7f) {
    uVar3 = param_2;
  }
  if ((int)param_4 < 0x7f) {
    if ((int)param_6 < 0x7f) {
      lVar2 = 0;
      param_6 = param_6 << 8 | param_4 | 0x80;
    }
    else {
      if (param_6 != 0x7f) {
        return 4;
      }
      if ((param_1[0x26] == 0) && (param_7 + 0x80000000U >> 0x20 != 0)) {
        return 4;
      }
      param_6 = param_4 | 0x80;
      lVar2 = (long)(int)param_7;
    }
  }
  else {
    if ((0x7e < (int)param_6) || (param_4 != 0x7f)) {
      return 4;
    }
    if ((param_1[0x26] == 0) && (param_5 + 0x80000000U >> 0x20 != 0)) {
      return 4;
    }
    param_6 = param_6 | 0x80;
    lVar2 = (long)(int)param_5;
  }
  puVar1 = (undefined1 *)emit_x86_instruction(param_1,1,uVar3,0,param_6,lVar2);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0x8d;
    if (uVar3 != 0xf) {
      return 0;
    }
    puVar1 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_2,param_3);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0x89;
      return 0;
    }
  }
  return *param_1;
}



undefined1 * sljit_get_local_base_constprop_0_isra_0(int *param_1,ulong param_2,undefined1 *param_3)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  
  if (*param_1 != 0) {
    return in_RAX;
  }
  param_1[0x26] = 0;
  if ((ulong)(param_3 + 0x80000000) >> 0x20 == 0) {
    if (param_3 != (undefined1 *)0x0) {
      emit_lea_binary(param_1,param_2,0,0xe,0,0x7f);
      return param_3;
    }
    puVar1 = (undefined1 *)emit_x86_instruction(param_1,1,0xe,0,param_2 & 0xffffffff,0);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0x89;
    }
  }
  else {
    puVar1 = (undefined1 *)emit_load_imm64(param_1,0xf);
    if ((int)puVar1 == 0) {
      puVar1 = (undefined1 *)emit_lea_binary(param_1,param_2 & 0xffffffff,0,0xe,0,0xf,0);
      return puVar1;
    }
  }
  return puVar1;
}



void sljit_emit_simd_sign_constprop_0_isra_0(int *param_1)

{
  undefined2 *puVar1;
  
  if (*param_1 != 0) {
    return;
  }
  param_1[0x26] = 1;
  puVar1 = (undefined2 *)emit_x86_instruction(param_1,0x4402,1,0,1,0);
  if (puVar1 == (undefined2 *)0x0) {
    if (*param_1 != 0) {
      return;
    }
  }
  else {
    *puVar1 = 0xd70f;
  }
  param_1[0x26] = 0;
  return;
}



undefined4
emit_cum_binary(undefined4 *param_1,uint param_2,int param_3,long param_4,int param_5,long param_6,
               int param_7,long param_8)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar6 = (undefined1)(param_2 >> 8);
  uVar5 = (undefined1)(param_2 >> 0x10);
  if ((param_3 == param_5) && (param_4 == param_6)) {
    if (param_7 == 0x7f) {
      if (param_3 == 1) {
        param_6 = param_8;
        if (0xff < param_8 + 0x80U) {
          uVar4 = 0;
          if (param_1[0x26] == 0) {
            if (param_8 + 0x80000000U >> 0x20 != 0) {
              param_5 = 0xf;
              goto LAB_00107301;
            }
            uVar4 = 0x48;
          }
LAB_00107275:
          iVar1 = emit_do_imm32(param_1,uVar4,param_2 >> 0x18,param_6);
          if (iVar1 == 0) {
            return 0;
          }
          goto LAB_001071e8;
        }
      }
      else {
        param_6 = param_8;
        if ((param_8 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
          param_5 = (param_3 == 0xf) + 0xf;
LAB_00107301:
          iVar1 = emit_load_imm64(param_1,param_5,param_6);
          goto joined_r0x00107069;
        }
      }
LAB_001070b4:
      lVar3 = emit_x86_instruction(param_1,0x11,0x7f,param_6,param_3,param_4);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | (byte)param_2;
        return 0;
      }
      goto LAB_001071e8;
    }
    if (param_3 < 0x7f) {
LAB_0010720b:
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_3,param_4,param_7,param_8);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = uVar5;
        return 0;
      }
      goto LAB_001071e8;
    }
    param_6 = param_8;
    param_5 = param_7;
    if (0x7e < param_7) {
LAB_00106f75:
      iVar1 = emit_mov(param_1,0xf,0,param_5,param_6);
      if (iVar1 != 0) goto LAB_001071e8;
      param_6 = 0;
      param_5 = 0xf;
    }
  }
  else if ((param_3 == param_7) && (param_4 == param_8)) {
    if (param_5 == 0x7f) {
      if (param_3 == 1) {
        if (0xff < param_6 + 0x80U) {
          if (param_1[0x26] == 0) {
            uVar4 = 0x48;
            if (param_6 + 0x80000000U >> 0x20 != 0) {
              param_5 = 0xf;
              goto LAB_00107301;
            }
          }
          else {
            uVar4 = 0;
          }
          goto LAB_00107275;
        }
      }
      else if ((param_6 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
        param_5 = (param_3 == 0xf) + 0xf;
        goto LAB_00107301;
      }
      goto LAB_001070b4;
    }
    param_8 = param_6;
    param_7 = param_5;
    if (param_3 < 0x7f) goto LAB_0010720b;
    if (0x7e < param_5) goto LAB_00106f75;
  }
  else {
    if (0x7e < param_3) {
      iVar1 = emit_mov(param_1,0xf,0,param_5,param_6);
      if (iVar1 == 0) {
        if (param_7 == 0x7f) {
          if ((param_8 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) {
            lVar3 = emit_x86_instruction(param_1,0x11,0x7f,param_8,0xf,0);
            if (lVar3 == 0) goto LAB_001071e8;
            *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | (byte)param_2;
          }
          else {
            iVar1 = emit_load_imm64(param_1,0x10,param_8);
            if ((iVar1 != 0) ||
               (puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0x10,0,0xf,0),
               puVar2 == (undefined1 *)0x0)) goto LAB_001071e8;
            *puVar2 = uVar6;
          }
        }
        else {
          puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_7,param_8);
          if (puVar2 == (undefined1 *)0x0) goto LAB_001071e8;
          *puVar2 = uVar5;
        }
        puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_3,param_4);
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0x89;
          return 0;
        }
      }
      goto LAB_001071e8;
    }
    iVar1 = emit_mov(param_1,param_3,0,param_5,param_6);
    if (iVar1 != 0) goto LAB_001071e8;
    if (param_7 != 0x7f) {
      param_4 = 0;
      goto LAB_0010720b;
    }
    if ((param_8 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) {
      param_4 = 0;
      param_6 = param_8;
      goto LAB_001070b4;
    }
    param_5 = (param_3 == 0xf) + 0xf;
    iVar1 = emit_load_imm64(param_1,param_5,param_8);
    param_4 = 0;
joined_r0x00107069:
    if (iVar1 != 0) goto LAB_001071e8;
    param_6 = 0;
  }
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_5,param_6,param_3,param_4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = uVar6;
    return 0;
  }
LAB_001071e8:
  return *param_1;
}



int emit_shift(int *param_1,byte param_2,uint param_3,long param_4,uint param_5,long param_6,
              uint param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  
  if ((param_7 == 0x7f) || (param_7 == 4)) {
    lVar4 = param_6;
    if ((param_3 != param_5) || (lVar4 = param_4, param_6 != param_4)) {
      if ((param_3 == 4) && (param_7 == 4)) {
        iVar1 = emit_mov(param_1,0xf,0,param_5,param_6,lVar4);
        goto joined_r0x00107757;
      }
      if (0x7e < (int)param_3) {
        iVar1 = emit_mov(param_1,0xf,0);
        if ((iVar1 != 0) ||
           (lVar4 = emit_x86_instruction(param_1,0x21,param_7,param_8,0xf,0), lVar4 == 0))
        goto LAB_00107730;
        *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_2;
        goto LAB_001076da;
      }
      iVar1 = emit_mov(param_1,param_3,0,param_5,param_6,lVar4);
      param_4 = 0;
      if (iVar1 != 0) goto LAB_00107730;
    }
    lVar4 = emit_x86_instruction(param_1,0x21,param_7,param_8,param_3,param_4);
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_2;
      return 0;
    }
  }
  else {
    if (param_3 == 4) {
      iVar1 = emit_mov(param_1,0xf,0);
      if (iVar1 != 0) goto LAB_00107730;
      iVar1 = emit_mov(param_1,4,0,param_7,param_8);
joined_r0x00107757:
      if ((iVar1 != 0) || (lVar4 = emit_x86_instruction(param_1,0x21,4,0,0xf,0), lVar4 == 0))
      goto LAB_00107730;
      *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_2;
      param_4 = 0;
      param_3 = 4;
    }
    else {
      if ((((int)param_3 < 0x7f && param_3 != 0xf) && (param_7 != param_3)) &&
         (((param_7 & 0x80) == 0 ||
          (((param_7 & 0x7f) != param_3 && (((int)param_7 >> 8 & 0x7fU) != param_3)))))) {
        if ((param_3 == param_5) || (iVar1 = emit_mov(param_1,param_3,0), iVar1 == 0)) {
          iVar1 = param_1[0x26];
          param_1[0x26] = 0;
          puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,4,0,0xf,0);
          if (puVar3 == (undefined1 *)0x0) {
            if (*param_1 != 0) {
              return *param_1;
            }
          }
          else {
            *puVar3 = 0x89;
          }
          param_1[0x26] = iVar1;
          iVar2 = emit_mov(param_1,4,0,param_7,param_8);
          if ((iVar2 == 0) && (lVar4 = emit_x86_instruction(param_1,0x21,4,0,param_3,0), lVar4 != 0)
             ) {
            *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_2;
            param_1[0x26] = 0;
            puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,4,0);
            if (puVar3 == (undefined1 *)0x0) {
              if (*param_1 != 0) {
                return *param_1;
              }
            }
            else {
              *puVar3 = 0x89;
            }
            param_1[0x26] = iVar1;
            return 0;
          }
        }
        goto LAB_00107730;
      }
      iVar1 = emit_mov(param_1,0xf,0);
      if (iVar1 != 0) goto LAB_00107730;
      iVar1 = param_1[0x26];
      param_1[0x26] = 0;
      puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,4,0,0x10,0);
      if (puVar3 == (undefined1 *)0x0) {
        if (*param_1 != 0) {
          return *param_1;
        }
      }
      else {
        *puVar3 = 0x89;
      }
      param_1[0x26] = iVar1;
      iVar2 = emit_mov(param_1,4,0,param_7,param_8);
      if ((iVar2 != 0) || (lVar4 = emit_x86_instruction(param_1,0x21,4,0,0xf,0), lVar4 == 0))
      goto LAB_00107730;
      *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_2;
      param_1[0x26] = 0;
      puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,0x10,0,4,0);
      if (puVar3 == (undefined1 *)0x0) {
        if (*param_1 != 0) {
          return *param_1;
        }
      }
      else {
        *puVar3 = 0x89;
      }
      param_1[0x26] = iVar1;
      if (param_3 == 0xf) {
        return 0;
      }
    }
LAB_001076da:
    puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_3,param_4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0x89;
      return 0;
    }
  }
LAB_00107730:
  return *param_1;
}



undefined1  [16]
emit_shift_with_flags
          (uint *param_1,undefined1 param_2,int param_3,int param_4,undefined8 param_5,
          undefined4 param_6,undefined8 param_7,uint param_8,ulong param_9)

{
  int iVar1;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_8 == 0x7f) {
    if (((ulong)(-(uint)(param_1[0x26] == 0) & 0x20) + 0x1f & param_9) == 0) {
      if (param_3 != 0) {
        auVar4 = emit_cum_binary(param_1,0xd0b0908,param_4,param_5,param_6);
        return auVar4;
      }
      auVar4 = emit_mov(param_1,param_4,param_5,param_6,param_7);
      return auVar4;
    }
  }
  else if (param_3 != 0) {
    if (param_4 < 0x7f) {
      iVar1 = emit_shift(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
      uVar2 = extraout_RDX_00;
      if (iVar1 == 0) {
        auVar4 = emit_cmp_binary(param_1,param_4,param_5,0x7f,0);
        return auVar4;
      }
    }
    else {
      iVar1 = emit_cmp_binary(param_1,param_6,param_7,0x7f,0);
      uVar2 = extraout_RDX;
      if ((iVar1 == 0) &&
         (uVar2 = (ulong)param_8,
         auVar4._0_8_ = emit_shift(param_1,param_2,param_4,param_5,param_6,param_7,(ulong)param_8,
                                   param_9), (int)auVar4._0_8_ == 0)) {
        auVar4._8_8_ = uVar2;
        return auVar4;
      }
    }
    auVar3._4_4_ = 0;
    auVar3._0_4_ = *param_1;
    auVar3._8_8_ = uVar2;
    return auVar3;
  }
  auVar4 = emit_shift(param_1,param_2,param_4,param_5,param_6);
  return auVar4;
}



ulong sljit_emit_op2(uint *param_1,uint param_2,uint param_3,undefined8 param_4,ulong param_5,
                    ulong param_6,uint param_7,ulong param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar1 = *param_1;
  uVar4 = (ulong)param_7;
  uVar2 = uVar1;
  if (uVar1 != 0) goto switchD_001079e3_default;
  param_1[0x26] = param_2 & 0x100;
  if (0xf < (param_2 & 0xffff04ff) - 0x40) goto switchD_001079e3_default;
  uVar8 = (ulong)param_3;
  uVar2 = (uint)param_5;
  uVar7 = param_5 & 0xffffffff;
  switch(param_2 & 0xffff04ff) {
  case 0x40:
    if (((param_2 & 64000) != 0) ||
       (iVar3 = emit_lea_binary(param_1,uVar8,param_4,uVar7,param_6,uVar4,param_8), iVar3 == 4)) {
      param_5 = param_5 & 0xffffffff;
      uVar9 = 0x5030100;
      goto LAB_00107ad4;
    }
    goto LAB_00107ba0;
  case 0x41:
    uVar9 = 0x15131110;
    goto LAB_00107ad4;
  case 0x42:
    if ((uVar2 == 0x7f) && (param_6 == 0)) {
      uVar9 = 0x18;
      param_5 = uVar4;
LAB_00107bf3:
      uVar4 = emit_unary(param_1,uVar9,uVar8,param_4,param_5,param_8);
      return uVar4;
    }
    if ((param_2 & 64000) != 0) {
LAB_00107e68:
      param_5 = param_5 & 0xffffffff;
      uVar9 = 0x2d2b2928;
LAB_00107c24:
      uVar4 = emit_non_cum_binary(param_1,uVar9,uVar8,param_4,param_5,param_6);
      return uVar4;
    }
    if (param_7 == 0x7f) {
      iVar3 = emit_lea_binary(param_1,uVar8,param_4,uVar7,param_6,0x7f,-param_8);
      if (iVar3 == 4) goto LAB_00107e68;
    }
    else {
      if ((0x7e < (int)param_3) || (param_3 != param_7)) goto LAB_00107e68;
      iVar3 = emit_non_cum_binary(param_1,0x2d2b2928,uVar8,0,uVar8,0,uVar7,param_6);
      if (iVar3 == 0) {
        param_8 = 0;
        param_4 = 0;
        uVar9 = 0x18;
        param_5 = uVar8;
        goto LAB_00107bf3;
      }
    }
    goto LAB_00107ba0;
  case 0x43:
    uVar9 = 0x1d1b1918;
    goto LAB_00107c24;
  case 0x44:
    uVar12 = 0xf;
    if ((int)param_3 < 0x7f) {
      uVar12 = uVar8;
    }
    uVar11 = (uint)uVar12;
    if ((uVar2 == uVar11) && (uVar10 = param_8, param_7 != 0x7f)) {
LAB_00107c66:
      puVar5 = (undefined2 *)emit_x86_instruction(param_1,2,uVar12,0,uVar4,uVar10);
      if (puVar5 == (undefined2 *)0x0) {
        uVar2 = *param_1;
        if (uVar2 != 0) break;
      }
      else {
        *puVar5 = 0xaf0f;
      }
LAB_00107c8e:
      uVar2 = uVar1;
      if ((param_3 & 0x80) == 0) break;
      puVar6 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,uVar8,param_4);
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0x89;
        break;
      }
    }
    else if (param_7 == uVar11) {
      uVar4 = uVar7;
      uVar10 = param_6;
      if (uVar2 != 0x7f) goto LAB_00107c66;
LAB_00107d92:
      uVar4 = param_8;
      if (param_7 == 0x7f) {
        uVar4 = 0;
        iVar3 = emit_mov(param_1,uVar12,0,0x7f,param_8);
        param_7 = uVar11;
        if (iVar3 != 0) goto LAB_00107ba0;
      }
      if (param_6 + 0x80 < 0x100) {
        puVar6 = (undefined1 *)emit_x86_instruction(param_1,1,uVar12,0,param_7,uVar4);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x6b;
          param_6 = param_6 & 0xff;
LAB_00107fb0:
          iVar3 = emit_byte(param_1,param_6);
          if (iVar3 == 0) goto LAB_00107c8e;
        }
      }
      else if (param_6 + 0x80000000 >> 0x20 == 0) {
        puVar6 = (undefined1 *)emit_x86_instruction(param_1,1,uVar12,0,param_7,uVar4);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x69;
          puVar6 = (undefined1 *)ensure_buf(param_1,5);
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = 4;
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 4;
            *(int *)(puVar6 + 1) = (int)param_6;
            goto LAB_00107c8e;
          }
        }
      }
      else {
        param_8 = param_6;
        if ((uVar11 == param_7) || (iVar3 = emit_mov(param_1,uVar12,0,param_7,uVar4), iVar3 == 0)) {
LAB_00107df8:
          iVar3 = emit_load_imm64(param_1,0x10,param_8);
          param_8 = 0;
          uVar4 = 0x10;
          goto joined_r0x00107efa;
        }
      }
    }
    else {
      if (uVar2 == 0x7f) goto LAB_00107d92;
      if (param_7 == 0x7f) {
        if (param_8 + 0x80 < 0x100) {
          puVar6 = (undefined1 *)emit_x86_instruction(param_1,1,uVar12,0,uVar7,param_6);
          if (puVar6 == (undefined1 *)0x0) goto LAB_00107ba0;
          *puVar6 = 0x6b;
          param_6 = param_8 & 0xff;
          goto LAB_00107fb0;
        }
        if (param_8 + 0x80000000 >> 0x20 != 0) {
          if ((uVar2 != uVar11) && (iVar3 = emit_mov(param_1,uVar12,0,uVar7,param_6), iVar3 != 0))
          goto LAB_00107ba0;
          goto LAB_00107df8;
        }
        puVar6 = (undefined1 *)emit_x86_instruction(param_1,1,uVar12,0,uVar7,param_6);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x69;
          puVar6 = (undefined1 *)ensure_buf(param_1,5);
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = 4;
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 4;
            *(int *)(puVar6 + 1) = (int)param_8;
            goto LAB_00107c8e;
          }
        }
      }
      else {
        if ((param_7 & 0x80) != 0) {
          if (uVar11 == (param_7 & 0x7f)) {
            uVar12 = 0xf;
          }
          else if (uVar11 == ((int)param_7 >> 8 & 0x7fU)) {
            uVar12 = 0xf;
          }
        }
        iVar3 = emit_mov(param_1,uVar12,0,uVar7,param_6);
joined_r0x00107efa:
        uVar10 = param_8;
        if (iVar3 == 0) goto LAB_00107c66;
      }
    }
LAB_00107ba0:
    uVar2 = *param_1;
    break;
  case 0x45:
    uVar9 = 0x25232120;
    goto LAB_00107ad4;
  case 0x46:
    uVar9 = 0xd0b0908;
    goto LAB_00107ad4;
  case 0x47:
    if (((param_2 & 64000) == 0) &&
       (((param_7 == 0x7f && (uVar12 = param_6, param_8 == 0xffffffffffffffff)) ||
        ((uVar2 == 0x7f && (param_5 = uVar4, uVar12 = param_8, param_6 == 0xffffffffffffffff)))))) {
      param_8 = uVar12;
      uVar9 = 0x10;
      goto LAB_00107bf3;
    }
    uVar9 = 0x35333130;
    param_5 = uVar7;
LAB_00107ad4:
    uVar4 = emit_cum_binary(param_1,uVar9,uVar8,param_4,param_5,param_6);
    return uVar4;
  default:
    uVar2 = emit_shift_with_flags
                      (param_1,0x20,param_2 & 64000,uVar8,param_4,param_5 & 0xffffffff,param_6,uVar4
                       ,param_8);
    break;
  case 0x4a:
  case 0x4b:
    uVar2 = emit_shift_with_flags
                      (param_1,0x28,param_2 & 64000,uVar8,param_4,param_5 & 0xffffffff,param_6,uVar4
                       ,param_8);
    break;
  case 0x4c:
  case 0x4d:
    uVar2 = emit_shift_with_flags
                      (param_1,0x38,param_2 & 64000,uVar8,param_4,param_5 & 0xffffffff,param_6,uVar4
                       ,param_8);
    break;
  case 0x4e:
    uVar2 = emit_shift_with_flags
                      (param_1,0,0,uVar8,param_4,param_5 & 0xffffffff,param_6,uVar4,param_8);
    break;
  case 0x4f:
    uVar2 = emit_shift_with_flags
                      (param_1,8,0,uVar8,param_4,param_5 & 0xffffffff,param_6,uVar4,param_8);
  }
switchD_001079e3_default:
  return (ulong)uVar2;
}



undefined8
sljit_emit_cmp(int *param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5,
              undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong extraout_RDX;
  uint uVar5;
  
  if (*param_1 != 0) {
    return 0;
  }
  uVar4 = (ulong)param_5;
  uVar3 = param_4;
  if ((param_3 == 0x7f) && (param_5 != 0x7f)) {
    param_3 = param_5;
    if (param_2 - 2 < 8) {
      param_2 = *(uint *)(CSWTCH_866 + (ulong)(param_2 - 2) * 4);
      uVar4 = 0x7f;
      uVar3 = param_6;
      param_6 = param_4;
      goto LAB_0010811a;
    }
    uVar4 = 0x7f;
    uVar1 = 0;
  }
  else {
LAB_0010811a:
    param_4 = param_6;
    param_6 = uVar3;
    uVar1 = param_2 & 0x100;
    if ((1 < (int)param_2) && (uVar5 = (param_2 & 0xfe) << 10, (uVar5 & 0x30000) != 0)) {
      iVar2 = sljit_emit_op2(param_1,uVar1 | uVar5 | 0x42,0xf,0,param_3,param_6,uVar4,param_4);
      goto LAB_0010814e;
    }
  }
  param_1[0x26] = uVar1;
  iVar2 = emit_cmp_binary(param_1,param_3,param_6,uVar4,param_4);
  uVar4 = extraout_RDX;
LAB_0010814e:
  if (iVar2 != 0) {
    return 0;
  }
  uVar3 = sljit_emit_jump(param_1,param_2,uVar4);
  return uVar3;
}



void check_newlinechar(undefined8 *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  piVar4 = (int *)*param_1;
  if (param_2 != 1) {
    if (param_2 == 2) {
      if (param_4 == 0) {
        lVar10 = sljit_emit_cmp(piVar4,0,1,0,0x7f,0xd);
        uVar6 = sljit_emit_cmp(piVar4,1,1,0,0x7f,10);
        if (*piVar4 == 0) {
          lVar9 = *(long *)(piVar4 + 0x18);
          lVar5 = *(long *)(lVar9 + 8);
          uVar1 = lVar5 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar9 + 8) = uVar1;
            puVar8 = (undefined8 *)(lVar9 + 0x10 + lVar5);
          }
          else {
            puVar7 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar4 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
            if (puVar7 == (undefined8 *)0x0) {
              *piVar4 = 2;
              goto LAB_001083fa;
            }
            *puVar7 = *(undefined8 *)(piVar4 + 0x18);
            *(undefined8 **)(piVar4 + 0x18) = puVar7;
            puVar8 = puVar7 + 2;
            puVar7[1] = 0x10;
          }
          uVar2 = *param_3;
          *puVar8 = uVar6;
          puVar8[1] = uVar2;
          *param_3 = puVar8;
        }
LAB_001083fa:
        lVar9 = sljit_emit_label(piVar4);
        if (lVar10 == 0) {
          return;
        }
        if (lVar9 == 0) {
          return;
        }
        *(long *)(lVar10 + 0x18) = lVar9;
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
        return;
      }
      uVar6 = sljit_emit_cmp(piVar4,0,1,0,0x7f,0xd);
      if (*piVar4 == 0) {
        lVar10 = *(long *)(piVar4 + 0x18);
        lVar9 = *(long *)(lVar10 + 8);
        uVar1 = lVar9 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar10 + 8) = uVar1;
          puVar8 = (undefined8 *)(lVar10 + 0x10 + lVar9);
        }
        else {
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar4 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar7 == (undefined8 *)0x0) {
            *piVar4 = 2;
            goto LAB_001082a8;
          }
          *puVar7 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar7;
          puVar8 = puVar7 + 2;
          puVar7[1] = 0x10;
        }
        uVar2 = *param_3;
        *puVar8 = uVar6;
        puVar8[1] = uVar2;
        *param_3 = puVar8;
      }
LAB_001082a8:
      lVar10 = 10;
      param_4 = 0;
    }
    else {
      lVar10 = (long)*(int *)(param_1 + 0x1a);
      param_4 = param_4 ^ 1;
    }
    uVar6 = sljit_emit_cmp(piVar4,param_4,1,0,0x7f,lVar10);
    iVar3 = *piVar4;
    goto joined_r0x001084d2;
  }
  uVar6 = sljit_emit_jump(piVar4,0x25);
  if (*piVar4 == 0) {
    lVar10 = *(long *)(piVar4 + 0x18);
    lVar9 = *(long *)(lVar10 + 8);
    uVar1 = lVar9 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar10 + 8) = uVar1;
      puVar8 = (undefined8 *)(lVar10 + 0x10 + lVar9);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar4 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_001084be;
      }
      *puVar7 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar7;
      puVar8 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar2 = param_1[0x34];
    *puVar8 = uVar6;
    puVar8[1] = uVar2;
    param_1[0x34] = puVar8;
  }
LAB_001084be:
  uVar6 = sljit_emit_jump(piVar4,param_4);
  iVar3 = *piVar4;
joined_r0x001084d2:
  if (iVar3 == 0) {
    lVar10 = *(long *)(piVar4 + 0x18);
    lVar9 = *(long *)(lVar10 + 8);
    uVar1 = lVar9 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar10 + 8) = uVar1;
      puVar8 = (undefined8 *)(lVar10 + 0x10 + lVar9);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar4 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar4 = 2;
        return;
      }
      *puVar7 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar7;
      puVar8 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar2 = *param_3;
    *puVar8 = uVar6;
    puVar8[1] = uVar2;
    *param_3 = puVar8;
  }
  return;
}



void jumpto_if_not_utf_char_start_constprop_0(int *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == 0) {
    param_1[0x26] = 0;
    emit_cum_binary(param_1,0x25232120,1,0,1,0,0x7f,0xfc00);
  }
  lVar1 = sljit_emit_cmp(param_1,0,1,0,0x7f,0xdc00);
  if ((lVar1 != 0) && (param_2 != 0)) {
    *(long *)(lVar1 + 0x18) = param_2;
    *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) & 0xfffffffffffffffd | 1;
  }
  return;
}



undefined1 *
sljit_emit_op_flags_constprop_0_isra_0(uint *param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  if (*param_1 != 0) {
    return (undefined1 *)(ulong)*param_1;
  }
  cVar1 = CSWTCH_742[param_4] + '\x10';
  if (param_2 == 0x46) {
    puVar2 = (undefined1 *)ensure_buf(param_1,8);
    if (puVar2 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    *puVar2 = 7;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 7;
    bVar4 = reg_map[param_3];
    *(undefined2 *)(puVar2 + 1) = 0xf40;
    puVar2[3] = cVar1;
    puVar2[5] = (7 < bVar4) + '@';
    bVar4 = reg_lmap[param_3];
    puVar2[4] = 0xc2;
    puVar2[6] = 8;
    puVar2[7] = bVar4 | 0xd0;
    return puVar2;
  }
  uVar6 = param_2 & 0xffff04ff;
  if ((int)uVar6 < 0x40) {
    puVar2 = (undefined1 *)ensure_buf(param_1,9);
    if (puVar2 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    *puVar2 = 8;
    bVar4 = reg_lmap[param_3];
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
    bVar5 = bVar4 | 0xc0;
    if (7 < (byte)reg_map[param_3]) {
      puVar2[3] = cVar1;
      *(undefined2 *)(puVar2 + 1) = 0xf41;
      puVar2[4] = bVar5;
      *(undefined2 *)(puVar2 + 5) = 0xf4d;
      puVar2[7] = 0xb6;
      puVar2[8] = bVar4 * '\b' | bVar4 | 0xc0;
      return puVar2;
    }
    bVar4 = bVar4 * '\b' | bVar4 | 0xc0;
    iVar3 = param_3;
  }
  else {
    puVar2 = (undefined1 *)ensure_buf(param_1,9);
    if (puVar2 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    *puVar2 = 8;
    bVar4 = 0xd2;
    bVar5 = 0xc2;
    iVar3 = 0xf;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
  }
  puVar2[3] = cVar1;
  *(undefined2 *)(puVar2 + 1) = 0xf40;
  puVar2[4] = bVar5;
  *(undefined2 *)(puVar2 + 5) = 0xf48;
  puVar2[7] = 0xb6;
  puVar2[8] = bVar4;
  if (iVar3 == 0xf) {
    if (0x3f < (int)uVar6) {
      puVar2 = (undefined1 *)0xf;
      sljit_emit_op2(param_1,param_2,param_3,0,param_3,0,0xf,0);
      return puVar2;
    }
    param_1[0x26] = (uint)(uVar6 != 0x20);
    puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_3,0);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0x89;
      return puVar2;
    }
  }
  return puVar2;
}



void check_anynewline_isra_0(int *param_1)

{
  long lVar1;
  
  sljit_emit_op_dst_constprop_0_isra_0(param_1,5);
  sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,10);
  if (*param_1 == 0) {
    param_1[0x26] = 0;
    lVar1 = emit_x86_instruction(param_1,0x11,0x7f,3,1,0);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) | 0x38;
    }
  }
  sljit_emit_op_flags_constprop_0_isra_0(param_1,0x20,4,5);
  if (*param_1 == 0) {
    param_1[0x26] = 0;
    lVar1 = emit_x86_instruction(param_1,0x11,0x7f,0x7b,1,0);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) | 0x38;
    }
  }
  sljit_emit_op_flags_constprop_0_isra_0(param_1,0x46,4,0);
  if (*param_1 == 0) {
    param_1[0x26] = 0;
    emit_cum_binary(param_1,0xd0b0908,1,0,1,0,0x7f,1);
    if (*param_1 == 0) {
      param_1[0x26] = 0;
      emit_cmp_binary(param_1,1,0,0x7f,0x201f);
    }
  }
  sljit_emit_op_flags_constprop_0_isra_0(param_1,0x246,4,0);
  sljit_emit_op_src_constprop_0_isra_0(param_1,5);
  return;
}



ulong sljit_emit_op1(uint *param_1,int param_2,int param_3,undefined8 param_4,int param_5,
                    ulong param_6)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 != 0) goto LAB_001089a4;
  param_1[0x26] = 0;
  if ((param_5 < 0x7f) && (param_3 == param_5)) {
    if (param_2 - 0x21U < 6) {
LAB_00108974:
                    /* WARNING: Could not recover jumptable at 0x00108982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&DAT_001348bc + *(int *)(&DAT_001348bc + (ulong)(param_2 - 0x21) * 4)))
                        (&DAT_001348bc,
                         &DAT_001348bc + *(int *)(&DAT_001348bc + (ulong)(param_2 - 0x21) * 4));
      return uVar2;
    }
    goto LAB_001089a4;
  }
  if (param_5 != 0x7f) {
    if (param_2 - 0x21U < 6) goto LAB_00108974;
switchD_001089cb_default:
    iVar1 = emit_mov(param_1,param_3,param_4,param_5,param_6);
    goto joined_r0x00108a3b;
  }
  switch(param_2) {
  case 0x21:
    iVar1 = emit_mov_byte_constprop_0(param_1,0,param_3,param_4,0x7f,param_6 & 0xff);
    goto joined_r0x00108a13;
  case 0x22:
    iVar1 = emit_mov_byte_constprop_0(param_1,1,param_3,param_4,0x7f,(long)(char)param_6);
joined_r0x00108a13:
    if (iVar1 == 0) goto LAB_001089a4;
    goto LAB_001089f0;
  case 0x23:
    iVar1 = emit_mov_half(param_1,0,param_3,param_4,0x7f,param_6 & 0xffff);
    break;
  case 0x24:
    iVar1 = emit_mov_half(param_1,1,param_3,param_4,0x7f,(long)(short)param_6);
    break;
  case 0x25:
    iVar1 = emit_mov_int_constprop_0(param_1,0,param_3,param_4,0x7f,param_6 & 0xffffffff);
    break;
  case 0x26:
    iVar1 = emit_mov_int_constprop_0(param_1,1,param_3,param_4,0x7f,(long)(int)param_6);
    break;
  default:
    goto switchD_001089cb_default;
  }
joined_r0x00108a3b:
  if (iVar1 != 0) {
LAB_001089f0:
    uVar3 = *param_1;
  }
LAB_001089a4:
  return (ulong)uVar3;
}



void match_once_common(undefined8 *param_1,short param_2,int param_3,int param_4,uint param_5,
                      int param_6)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)*param_1;
  if (param_3 < 0) {
    if (param_3 != -1) {
      if ((param_2 != 0x79) || ((param_5 & 1) != 0)) {
        lVar3 = (long)(int)((2 - (uint)(param_6 == 0)) * 8);
        if (*piVar1 == 0) {
          piVar1[0x26] = 0;
          iVar2 = emit_lea_binary(piVar1,0xc,0,0xc,0,0x7f,lVar3);
          if (iVar2 == 4) goto LAB_00108c91;
          goto LAB_00108cc0;
        }
        if (param_6 != 0) goto LAB_00108cd9;
        goto LAB_00108de0;
      }
      if (param_6 == 0) {
        return;
      }
      if (*piVar1 == 0) {
        piVar1[0x26] = 0;
        iVar2 = emit_lea_binary(piVar1,0xc,0,0xc,0,0x7f,8);
        lVar3 = 8;
        if (iVar2 == 4) {
LAB_00108c91:
          emit_cum_binary(piVar1,0x5030100,0xc,0,0xc,0,0x7f,lVar3);
          goto LAB_00108cc0;
        }
      }
LAB_00108ba8:
      sljit_emit_op1(piVar1,0x20,1,0,0x8c,0xfffffffffffffff8);
      goto LAB_00108bfb;
    }
    sljit_emit_op1(piVar1,0x20,0xc,0,0x8e,(long)param_4);
LAB_00108cc0:
    if (param_6 != 0) {
      if ((param_2 == 0x79) && ((param_5 & 1) == 0)) goto LAB_00108ba8;
LAB_00108cd9:
      sljit_emit_op1(piVar1,0x20,1,0,0x8c,0xfffffffffffffff0);
      if (param_2 == 0x7a) {
        sljit_emit_op1(piVar1,0x20,4,0,0x8c,0xfffffffffffffff8);
      }
      else {
        if (param_2 != 0x7b) goto LAB_00108bfb;
        sljit_emit_op1(piVar1,0x20,0x8e,(long)param_4,0x8c,0xfffffffffffffff8);
      }
      if (param_6 == 0) {
        return;
      }
      goto LAB_00108bfb;
    }
LAB_00108de0:
    if (param_2 == 0x7a) {
      uVar6 = 0xfffffffffffffff8;
      uVar5 = 0x8c;
      lVar3 = 0;
      uVar4 = 4;
      goto LAB_00108c0d;
    }
    if (param_2 != 0x7b) {
      return;
    }
    uVar6 = 0xfffffffffffffff8;
    uVar5 = 0x8c;
  }
  else {
    sljit_emit_op2(piVar1,0x42,0xc,0,0x8e,(long)param_4,0x7f,
                   (long)(int)(param_3 + 1 + ((uint)(param_2 != 0x79) | param_5 & 1)) << 3);
    if (param_6 == 0) {
      if (param_2 != 0x7a) {
        return;
      }
      uVar6 = 0;
      uVar5 = 0x8c;
      lVar3 = 0;
      uVar4 = 4;
      goto LAB_00108c0d;
    }
    sljit_emit_op1(piVar1,0x20,1,0,0x8c,0xfffffffffffffff8);
    if (param_2 == 0x7a) {
      sljit_emit_op1(piVar1,0x20,4,0,0x8c,0);
    }
LAB_00108bfb:
    param_4 = *(int *)((long)param_1 + 100);
    uVar6 = 0;
    uVar5 = 1;
  }
  lVar3 = (long)param_4;
  uVar4 = 0x8e;
LAB_00108c0d:
  sljit_emit_op1(piVar1,0x20,uVar4,lVar3,uVar5,uVar6);
  return;
}



int match_capture_common(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = (long)(param_3 >> 1);
  uVar2 = *param_1;
  if (*(int *)(param_1 + 0xd) == 0) {
    cVar1 = *(char *)(param_1[5] + lVar4);
  }
  else {
    sljit_emit_op1(uVar2,0x20,1,0,0x8e);
    sljit_emit_op1(uVar2,0x20,0x8e,(long)*(int *)(param_1 + 0xd),0x7f,lVar4);
    iVar3 = param_2 * 8;
    param_2 = param_2 + 1;
    sljit_emit_op1(uVar2,0x20,0x8c,(long)iVar3,1,0);
    cVar1 = *(char *)(param_1[5] + lVar4);
  }
  if (cVar1 == '\0') {
    param_3 = param_3 * 8;
    sljit_emit_op1(uVar2,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + param_3));
    sljit_emit_op1(uVar2,0x20,4,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + param_3 + 8));
    iVar3 = param_2 * 8;
    param_2 = param_2 + 2;
    sljit_emit_op1(uVar2,0x20,0x8c,(long)iVar3,1,0);
    sljit_emit_op1(uVar2,0x20,1,0,0x8e,(long)param_4);
    sljit_emit_op1(uVar2,0x20,0x8c,(long)(iVar3 + 8),4,0);
    sljit_emit_op1(uVar2,0x20,0x8e,(long)(param_3 + 8 + *(int *)((long)param_1 + 0x44)),2,0);
    sljit_emit_op1(uVar2,0x20,0x8e,(long)(param_3 + *(int *)((long)param_1 + 0x44)),1,0);
  }
  return param_2;
}



void delayed_mem_copy_move
               (undefined8 *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 7);
  uVar4 = *param_1;
  uVar2 = *(uint *)((long)param_1 + (long)iVar1 * 4 + 8);
  uVar3 = *(undefined4 *)((long)param_1 + (long)iVar1 * 4 + 0x20);
  if (uVar2 != 0xffffffff) {
    sljit_emit_op1(uVar4,0x20,uVar2 | 0x80,(long)*(int *)((long)param_1 + (long)iVar1 * 4 + 0x14),
                   uVar3,0);
  }
  sljit_emit_op1(uVar4,0x20,uVar3,0,param_2 | 0x80,param_3);
  *(undefined4 *)((long)param_1 + (long)iVar1 * 4 + 8) = param_4;
  *(undefined4 *)((long)param_1 + (long)iVar1 * 4 + 0x14) = param_5;
  *(int *)(param_1 + 7) = (iVar1 + 1) % 3;
  return;
}



ushort * byte_sequence_compare
                   (undefined8 *param_1,int param_2,ushort *param_3,int *param_4,undefined8 *param_5
                   )

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ushort *puVar17;
  bool bVar18;
  
  piVar2 = (int *)*param_1;
  if (param_2 == 0) {
LAB_001091f0:
    bVar18 = false;
    puVar17 = (ushort *)0x0;
    uVar16 = 0;
LAB_001091fb:
    iVar10 = param_4[1];
joined_r0x001091ff:
    if (iVar10 == -1) goto LAB_00109190;
  }
  else {
    uVar13 = *param_3;
    uVar4 = (uint)uVar13;
    uVar16 = (uint)uVar13;
    if (*(int *)(param_1 + 0x3c) != 0) {
      if ((uVar13 & 0xfc00) != 0xd800) goto LAB_0010910d;
      uVar4 = ((uVar16 & 0x3ff) << 10 | param_3[1] & 0x3ff) + 0x10000;
LAB_00109116:
      if (*(int *)(&DAT_0013a01c +
                  (ulong)*(ushort *)
                          (&_pcre2_ucd_stage2_16 +
                          (long)(int)((uVar4 & 0x7f) +
                                     (uint)*(ushort *)
                                            (&_pcre2_ucd_stage1_16 + (long)((int)uVar4 >> 7) * 2) *
                                     0x80) * 2) * 0xc) == 0) goto LAB_001091f0;
LAB_00109155:
      uVar4 = char_get_othercase_bit(param_1,param_3);
      puVar17 = param_3 + (uVar4 >> 9);
      if ((uVar4 & 0x100) == 0) {
        uVar16 = uVar4 & 0xff;
        bVar18 = uVar16 != 0;
        goto LAB_001091fb;
      }
      uVar16 = (uVar4 & 0xff) << 8;
      bVar18 = (uVar4 & 0xff) != 0;
      iVar10 = param_4[1];
      goto joined_r0x001091ff;
    }
    if (*(int *)(param_1 + 0x3d) != 0) {
LAB_0010910d:
      if (0x7f < uVar16) goto LAB_00109116;
      if (*(byte *)(param_1[0x12] + (ulong)uVar13) == uVar16) goto LAB_001091f0;
      goto LAB_00109155;
    }
    if ((uVar13 < 0x100) && (*(byte *)(param_1[0x12] + (ulong)uVar13) != uVar16)) goto LAB_00109155;
    bVar18 = false;
    puVar17 = (ushort *)0x0;
    uVar16 = 0;
    if (param_4[1] != -1) goto LAB_00109229;
LAB_00109190:
    lVar14 = (long)-*param_4;
    if (*param_4 < 4) {
      sljit_emit_op1(piVar2,0x23,1,0,0x82,lVar14);
    }
    else {
      sljit_emit_op1(piVar2,0x26,1,0,0x82,lVar14);
    }
    param_4[1] = 4;
  }
  param_2 = 1;
  if (*(int *)(param_1 + 0x3c) != 0) {
    param_2 = ((*param_3 & 0xfc00) == 0xd800) + 1;
  }
LAB_00109229:
  iVar11 = *param_4;
  iVar5 = param_4[2];
  iVar10 = iVar11 + -2;
  *param_4 = iVar10;
  if (puVar17 != param_3) goto LAB_0010938d;
LAB_0010923c:
  if (!bVar18) goto LAB_0010938d;
  uVar12 = *param_3 | uVar16;
  uVar4 = uVar16;
  do {
    iVar6 = iVar5 + 1;
    *(short *)((long)param_4 + (long)iVar5 * 2 + 0xc) = (short)uVar12;
    *(short *)((long)param_4 + (long)iVar5 * 2 + 0x10) = (short)uVar4;
    param_4[2] = iVar6;
    if (iVar6 < 2) {
      if (iVar10 == 0) {
        if (param_4[1] != 1) {
          param_4[1] = 1;
          if (iVar6 != 1) goto LAB_00109363;
          iVar10 = 1;
          goto LAB_001093c0;
        }
        param_4[1] = 4;
        if (iVar6 == 1) {
          iVar10 = 4;
          goto LAB_001093c0;
        }
        goto LAB_00109363;
      }
    }
    else {
      if (iVar10 < 4) {
        if (1 < iVar10) {
          sljit_emit_op1(piVar2,0x23,param_4[1],0,0x82,(long)(2 - iVar11));
          iVar6 = param_4[2];
          goto LAB_001092aa;
        }
        if (param_4[1] == 1) {
          param_4[1] = 4;
          iVar10 = 4;
        }
        else {
          param_4[1] = 1;
          iVar10 = 1;
        }
LAB_001092c3:
        if (iVar6 != 2) goto LAB_00109363;
        uVar4 = param_4[4];
        if ((uVar4 != 0) && (*piVar2 == 0)) {
          piVar2[0x26] = 0;
          emit_cum_binary(piVar2,0xd0b0908,iVar10,0,iVar10,0,0x7f,(long)(int)uVar4);
          uVar4 = param_4[4];
          iVar10 = param_4[1];
        }
        uVar15 = (ulong)(int)(uVar4 | param_4[3]);
      }
      else {
        sljit_emit_op1(piVar2,0x26,param_4[1],0,0x82,(long)(2 - iVar11));
        iVar6 = param_4[2];
LAB_001092aa:
        iVar10 = (uint)(param_4[1] == 1) * 3 + 1;
        param_4[1] = iVar10;
        if (iVar6 != 1) goto LAB_001092c3;
LAB_001093c0:
        uVar13 = *(ushort *)(param_4 + 4);
        if ((uVar13 != 0) && (*piVar2 == 0)) {
          piVar2[0x26] = 0;
          emit_cum_binary(piVar2,0xd0b0908,iVar10,0,iVar10,0,0x7f,uVar13);
          uVar13 = *(ushort *)(param_4 + 4);
          iVar10 = param_4[1];
        }
        uVar15 = (ulong)(uVar13 | *(ushort *)(param_4 + 3));
      }
      uVar7 = sljit_emit_cmp(piVar2,1,iVar10,0,0x7f,uVar15);
      if (*piVar2 == 0) {
        lVar14 = *(long *)(piVar2 + 0x18);
        lVar3 = *(long *)(lVar14 + 8);
        uVar15 = lVar3 + 0x10;
        if (uVar15 < 0xff1) {
          *(ulong *)(lVar14 + 8) = uVar15;
          puVar9 = (undefined8 *)(lVar14 + 0x10 + lVar3);
        }
        else {
          puVar8 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar2 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
          if (puVar8 == (undefined8 *)0x0) {
            *piVar2 = 2;
            goto LAB_00109363;
          }
          *puVar8 = *(undefined8 *)(piVar2 + 0x18);
          *(undefined8 **)(piVar2 + 0x18) = puVar8;
          puVar9 = puVar8 + 2;
          puVar8[1] = 0x10;
        }
        uVar1 = *param_5;
        *puVar9 = uVar7;
        puVar9[1] = uVar1;
        *param_5 = puVar9;
      }
LAB_00109363:
      param_4[2] = 0;
    }
    param_3 = param_3 + 1;
    if (param_2 == 1) {
      return param_3;
    }
    iVar11 = *param_4;
    iVar5 = param_4[2];
    param_2 = 1;
    iVar10 = iVar11 + -2;
    *param_4 = iVar10;
    if (puVar17 == param_3) goto LAB_0010923c;
LAB_0010938d:
    uVar12 = (uint)*param_3;
    uVar4 = 0;
  } while( true );
}



void match_script_run_common(undefined8 *param_1,int param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  
  piVar3 = (int *)*param_1;
  sljit_emit_op1(piVar3,0x20,1,0,0x8e,(long)param_2);
  pcVar9 = do_script_run;
  if (*(int *)(param_1 + 0x3c) != 0) {
    pcVar9 = do_script_run_utf;
  }
  sljit_emit_icall_constprop_0_isra_0(piVar3,0x111,pcVar9);
  sljit_emit_op1(piVar3,0x20,2,0,1,0);
  uVar6 = sljit_emit_cmp(piVar3,0,1,0,0x7f,0);
  puVar10 = (undefined8 *)(param_3 + 0x18);
  if (*(long *)(param_3 + 0x10) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_3 + 0x10) + 8);
  }
  if (*piVar3 == 0) {
    lVar4 = *(long *)(piVar3 + 0x18);
    lVar5 = *(long *)(lVar4 + 8);
    uVar1 = lVar5 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar4 + 8) = uVar1;
      puVar8 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar3 = 2;
        return;
      }
      *puVar7 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar7;
      puVar8 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar2 = *puVar10;
    *puVar8 = uVar6;
    puVar8[1] = uVar2;
    *puVar10 = puVar8;
  }
  return;
}



void return_with_partial_match(undefined8 *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  piVar2 = (int *)*param_1;
  if (*(int *)(param_1 + 0x14) == 2) {
    iVar1 = *(int *)(param_1 + 0xb);
  }
  else {
    iVar1 = *(int *)(param_1 + 9);
  }
  sljit_emit_op1(piVar2,0x20,3,0,0x8e,(long)iVar1);
  sljit_emit_op1(piVar2,0x20,1,0,0x7f,0xfffffffffffffffe);
  sljit_emit_op1(piVar2,0x20,0xc,0,0x89,0x10);
  sljit_emit_op1(piVar2,0x20,0x89,0x28,3,0);
  sljit_emit_op1(piVar2,0x20,2,0,0x89,0x20);
  sljit_emit_op2(piVar2,0x42,3,0,3,0,0xc,0);
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_shift_with_flags(piVar2,0x38,0,3,0,3,0,0x7f,1);
  }
  sljit_emit_op1(piVar2,0x20,0x82,0x68,3,0);
  sljit_emit_op2(piVar2,0x42,0xd,0,0xd,0,0xc,0);
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_shift_with_flags(piVar2,0x38,0,0xd,0,0xd,0,0x7f,1);
  }
  sljit_emit_op1(piVar2,0x20,0x82,0x70,0xd,0);
  lVar3 = sljit_emit_jump(piVar2,0x24);
  if ((lVar3 != 0) && (param_2 != 0)) {
    *(long *)(lVar3 + 0x18) = param_2;
    *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) & 0xfffffffffffffffd | 1;
  }
  return;
}



void reset_ovector(undefined8 *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 extraout_RDX;
  int iVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)*param_1;
  sljit_emit_op2(piVar1,0x42,1,0,0x8d,0x10,0x7f,2);
  if (param_2 < 8) {
    iVar5 = 8;
    do {
      iVar4 = *(int *)((long)param_1 + 0x44) + iVar5;
      iVar5 = iVar5 + 8;
      sljit_emit_op1(piVar1,0x20,0x8e,(long)iVar4,1,0);
    } while (param_2 << 3 != iVar5);
  }
  else {
    sljit_get_local_base_constprop_0_isra_0(piVar1,2,(long)*(int *)((long)param_1 + 0x44) + 8);
    sljit_emit_op1(piVar1,0x20,3,0,0x7f,(long)(param_2 + -1));
    lVar2 = sljit_emit_label(piVar1);
    sljit_emit_op1(piVar1,0x20,0x82,0,1,0);
    sljit_emit_op2(piVar1,0x40,2,0,2,0,0x7f,8);
    uVar6 = extraout_RDX;
    if (*piVar1 == 0) {
      piVar1[0x26] = 0;
      uVar6 = 1;
      emit_non_cum_binary(piVar1,0x2d2b2928,3,0,3,0,0x7f);
    }
    lVar3 = sljit_emit_jump(piVar1,1,uVar6);
    if ((lVar3 != 0) && (lVar2 != 0)) {
      *(long *)(lVar3 + 0x18) = lVar2;
      *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  return;
}



void reset_early_fail(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar3 = (long)*(int *)(param_1 + 0xf);
  uVar1 = *param_1;
  uVar5 = *(int *)((long)param_1 + 0x7c) - *(int *)(param_1 + 0xf);
  if (uVar5 == 8) {
    uVar8 = 0x7f;
    uVar4 = 0x8e;
LAB_00109c46:
    sljit_emit_op1(uVar1,0x20,uVar4,lVar3,uVar8,0);
    return;
  }
  sljit_emit_op1(uVar1,0x20,3,0,0x7f,0);
  if (uVar5 < 0x31) {
    iVar6 = *(int *)(param_1 + 0xf);
    if (iVar6 < *(int *)((long)param_1 + 0x7c)) {
      do {
        lVar3 = (long)iVar6;
        iVar6 = iVar6 + 8;
        sljit_emit_op1(uVar1,0x20,0x8e,lVar3,3,0);
      } while (iVar6 < *(int *)((long)param_1 + 0x7c));
      return;
    }
  }
  else {
    sljit_get_local_base_constprop_0_isra_0(uVar1,1,(long)*(int *)(param_1 + 0xf));
    uVar7 = (uVar5 >> 3) % 3;
    sljit_emit_op2(uVar1,0x40,4,0,1,0,0x7f,uVar5 + uVar7 * -8);
    lVar3 = sljit_emit_label(uVar1);
    sljit_emit_op1(uVar1,0x20,0x81,0,3,0);
    sljit_emit_op2(uVar1,0x40,1,0,1,0,0x7f,0x18);
    sljit_emit_op1(uVar1,0x20,0x81,0xfffffffffffffff0,3,0);
    sljit_emit_op1(uVar1,0x20,0x81,0xfffffffffffffff8,3,0);
    lVar2 = sljit_emit_cmp(uVar1,2,1,0,4,0);
    if ((lVar3 != 0) && (lVar2 != 0)) {
      *(long *)(lVar2 + 0x18) = lVar3;
      *(ulong *)(lVar2 + 0x10) = *(ulong *)(lVar2 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if ((7 < uVar7 * 8) && (sljit_emit_op1(uVar1,0x20,0x81,0,3,0), uVar7 == 2)) {
      uVar8 = 3;
      lVar3 = 8;
      uVar4 = 0x81;
      goto LAB_00109c46;
    }
  }
  return;
}



long move_back(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  piVar3 = (int *)*param_1;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar9 = 2;
    lVar8 = 0x7f;
LAB_00109ddc:
    sljit_emit_op2(piVar3,0x42,2,0,2,0,lVar8,uVar9);
    return lVar8;
  }
  sljit_emit_op1(piVar3,0x23,1,0,0x82,0xfffffffffffffffe);
  sljit_emit_op2(piVar3,0x42,2,0,2,0,0x7f,2);
  if ((param_3 != 0) || (*(int *)((long)param_1 + 0x1e4) == 0)) {
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      emit_cum_binary(piVar3,0x25232120,1,0,1,0,0x7f,0xfc00);
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_cmp_binary(piVar3,1,0,0x7f,0xdc00);
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(piVar3,0x20,1,0);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      emit_shift_with_flags(piVar3,0x20,0,1,0,1,0,0x7f,1);
    }
    uVar9 = 0;
    lVar8 = 1;
    goto LAB_00109ddc;
  }
  sljit_emit_op2(piVar3,0x42,1,0,1,0,0x7f,0xd800);
  lVar8 = sljit_emit_cmp(piVar3,3,1,0,0x7f,0x800);
  uVar9 = sljit_emit_jump(piVar3,0x25);
  if (*piVar3 == 0) {
    lVar7 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar7 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar7 + 8) = uVar1;
      puVar6 = (undefined8 *)(lVar7 + 0x10 + lVar4);
    }
    else {
      puVar5 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar5 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_00109ed7;
      }
      *puVar5 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar5;
      puVar6 = puVar5 + 2;
      puVar5[1] = 0x10;
    }
    uVar2 = param_1[0x42];
    *puVar6 = uVar9;
    puVar6[1] = uVar2;
    param_1[0x42] = puVar6;
  }
LAB_00109ed7:
  if ((param_2 != (undefined8 *)0x0) && (uVar9 = sljit_emit_cmp(piVar3,0,1,0,0x7f,0), *piVar3 == 0))
  {
    lVar7 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar7 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar7 + 8) = uVar1;
      puVar6 = (undefined8 *)(lVar7 + 0x10 + lVar4);
    }
    else {
      puVar5 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar5 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_00109f67;
      }
      *puVar5 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar5;
      puVar6 = puVar5 + 2;
      puVar5[1] = 0x10;
    }
    uVar2 = *param_2;
    *puVar6 = uVar9;
    puVar6[1] = uVar2;
    *param_2 = puVar6;
  }
LAB_00109f67:
  lVar7 = sljit_emit_label(piVar3);
  if (lVar8 == 0) {
    return lVar7;
  }
  if (lVar7 == 0) {
    return 0;
  }
  *(long *)(lVar8 + 0x18) = lVar7;
  *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
  return lVar7;
}



void check_partial(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  piVar3 = (int *)*param_1;
  if (*(int *)(param_1 + 0x14) == 1) {
    return;
  }
  if ((param_2 == 0) && (*(int *)((long)param_1 + 0xa4) == 0)) {
    lVar9 = sljit_emit_cmp(piVar3,3,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
LAB_0010a0a8:
    if (*(int *)(param_1 + 0x14) == 2) {
      sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xb),0x7f,0);
      goto LAB_0010a040;
    }
  }
  else {
    lVar9 = 0;
    if (*(int *)(param_1 + 0x14) == 2) {
      lVar9 = sljit_emit_cmp(piVar3,0,0x8e,(long)*(int *)((long)param_1 + 0x54),0x7f,
                             0xffffffffffffffff);
      goto LAB_0010a0a8;
    }
  }
  lVar5 = param_1[0x21];
  if (lVar5 == 0) {
    uVar6 = sljit_emit_jump(piVar3,0x24);
    if (*piVar3 == 0) {
      lVar5 = *(long *)(piVar3 + 0x18);
      lVar4 = *(long *)(lVar5 + 8);
      uVar1 = lVar4 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar5 + 8) = uVar1;
        puVar8 = (undefined8 *)(lVar5 + 0x10 + lVar4);
      }
      else {
        puVar7 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar7 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0010a040;
        }
        *puVar7 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar7;
        puVar8 = puVar7 + 2;
        puVar7[1] = 0x10;
      }
      uVar2 = param_1[0x29];
      *puVar8 = uVar6;
      puVar8[1] = uVar2;
      param_1[0x29] = puVar8;
    }
  }
  else {
    lVar4 = sljit_emit_jump(piVar3,0x24);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x18) = lVar5;
      *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
LAB_0010a040:
  if ((lVar9 != 0) && (lVar5 = sljit_emit_label(piVar3), lVar5 != 0)) {
    *(long *)(lVar9 + 0x18) = lVar5;
    *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
  }
  return;
}



void peek_char(undefined8 *param_1,uint param_2,undefined4 param_3,undefined8 param_4,
              undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  piVar3 = (int *)*param_1;
  sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  if (param_2 < 0xd800) {
    return;
  }
  sljit_emit_op2(piVar3,0x42,4,0,1,0,0x7f,0xd800);
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    lVar5 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x400);
    sljit_emit_op1(piVar3,0x23,1,0,0x82,2);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      emit_shift_with_flags(piVar3,0x20,0,4,0,4,0,0x7f,10);
    }
    sljit_emit_op2(piVar3,0x40,1,0,1,0,0x7f,0x2400);
    sljit_emit_op2(piVar3,0x40,1,0,1,0,4,0);
    goto LAB_0010a357;
  }
  lVar5 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x800);
  sljit_emit_op1(piVar3,0x20,param_3,param_4,2,0);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,2);
  uVar6 = sljit_emit_jump(piVar3,0x25);
  if (*piVar3 == 0) {
    lVar9 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar9 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      puVar8 = (undefined8 *)(lVar9 + 0x10 + lVar4);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010a32a;
      }
      *puVar7 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar7;
      puVar8 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar2 = param_1[0x40];
    *puVar8 = uVar6;
    puVar8[1] = uVar2;
    param_1[0x40] = puVar8;
  }
LAB_0010a32a:
  sljit_emit_op1(piVar3,0x20,2,0,param_3,param_4);
  if (((param_5 != (undefined8 *)0x0) && (*(int *)((long)param_1 + 0x1e4) != 0)) &&
     (uVar6 = sljit_emit_cmp(piVar3,0,1,0,0x7f,0xffffffffffffffff), *piVar3 == 0)) {
    lVar9 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar9 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      puVar8 = (undefined8 *)(lVar9 + 0x10 + lVar4);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010a357;
      }
      *puVar7 = *(undefined8 *)(piVar3 + 0x18);
      puVar8 = puVar7 + 2;
      *(undefined8 **)(piVar3 + 0x18) = puVar7;
      puVar7[1] = 0x10;
    }
    uVar2 = *param_5;
    *puVar8 = uVar6;
    puVar8[1] = uVar2;
    *param_5 = puVar8;
  }
LAB_0010a357:
  lVar9 = sljit_emit_label(piVar3);
  if ((lVar9 != 0) && (lVar5 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar9;
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    return;
  }
  return;
}



void peek_char_back(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  piVar3 = (int *)*param_1;
  sljit_emit_op1(piVar3,0x23,1,0,0x82,0xfffffffffffffffe);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  if (param_2 < 0xd800) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    sljit_emit_op2(piVar3,0x42,4,0,1,0,0x7f,0xdc00);
    lVar5 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x400);
    sljit_emit_op1(piVar3,0x23,1,0,0x82,0xfffffffffffffffc);
    sljit_emit_op2(piVar3,0x40,4,0,4,0,0x7f,0x10000);
    sljit_emit_op2(piVar3,0x42,1,0,1,0,0x7f,0xd800);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      emit_shift_with_flags(piVar3,0x20,0,1,0,1,0,0x7f,10);
    }
    sljit_emit_op2(piVar3,0x40,1,0,1,0,4);
    goto LAB_0010a6d8;
  }
  lVar5 = sljit_emit_cmp(piVar3,2,1,0,0x7f,0xd800);
  uVar6 = sljit_emit_jump(piVar3,0x25);
  if (*piVar3 == 0) {
    lVar9 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar9 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      puVar8 = (undefined8 *)(lVar9 + 0x10 + lVar4);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010a643;
      }
      *puVar7 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar7;
      puVar8 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar2 = param_1[0x43];
    *puVar8 = uVar6;
    puVar8[1] = uVar2;
    param_1[0x43] = puVar8;
  }
LAB_0010a643:
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar6 = sljit_emit_cmp(piVar3,0,1,0,0x7f,0xffffffffffffffff), *piVar3 == 0)) {
    lVar9 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar9 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      puVar8 = (undefined8 *)(lVar9 + 0x10 + lVar4);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010a6d8;
      }
      *puVar7 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar7;
      puVar8 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar2 = *param_3;
    *puVar8 = uVar6;
    puVar8[1] = uVar2;
    *param_3 = puVar8;
  }
LAB_0010a6d8:
  lVar9 = sljit_emit_label(piVar3);
  if ((lVar9 != 0) && (lVar5 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar9;
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    return;
  }
  return;
}



void process_partial_match(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  piVar3 = (int *)*param_1;
  if (*(int *)(param_1 + 0x14) == 2) {
    lVar5 = sljit_emit_cmp(piVar3,3,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
    sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xb),0x7f,0);
    lVar4 = sljit_emit_label(piVar3);
    if ((lVar4 != 0) && (lVar5 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar4;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x14) == 4) {
    lVar5 = param_1[0x21];
    if (lVar5 == 0) {
      uVar6 = sljit_emit_cmp(piVar3,2,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
      if (*piVar3 == 0) {
        lVar5 = *(long *)(piVar3 + 0x18);
        lVar4 = *(long *)(lVar5 + 8);
        uVar1 = lVar4 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar5 + 8) = uVar1;
          puVar8 = (undefined8 *)(lVar5 + 0x10 + lVar4);
        }
        else {
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar7 == (undefined8 *)0x0) {
            *piVar3 = 2;
            return;
          }
          *puVar7 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar7;
          puVar8 = puVar7 + 2;
          puVar7[1] = 0x10;
        }
        uVar2 = param_1[0x29];
        *puVar8 = uVar6;
        puVar8[1] = uVar2;
        param_1[0x29] = puVar8;
      }
    }
    else {
      lVar4 = sljit_emit_cmp(piVar3,2,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x18) = lVar5;
        *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
        return;
      }
    }
  }
  return;
}



void detect_partial_match_to(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = sljit_emit_cmp(*param_1,2,2,0,0xd,0);
  if ((param_2 != 0) && (lVar1 != 0)) {
    *(long *)(lVar1 + 0x18) = param_2;
    *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) & 0xfffffffffffffffd | 1;
  }
  process_partial_match(param_1);
  return;
}



void detect_partial_match(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  piVar3 = (int *)*param_1;
  if (*(int *)(param_1 + 0x14) == 1) {
    uVar8 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
    if (*piVar3 != 0) {
      return;
    }
    lVar4 = *(long *)(piVar3 + 0x18);
    lVar6 = *(long *)(lVar4 + 8);
    uVar1 = lVar6 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar4 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar4 + 0x10 + lVar6);
    }
    else {
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar9 == (undefined8 *)0x0) {
        *piVar3 = 2;
        return;
      }
      *puVar9 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar9;
      puVar7 = puVar9 + 2;
      puVar9[1] = 0x10;
    }
    uVar10 = *param_2;
    *puVar7 = uVar8;
    puVar7[1] = uVar10;
    *param_2 = puVar7;
    return;
  }
  lVar4 = sljit_emit_cmp(piVar3,2,2,0,0xd,0);
  if (*(int *)((long)param_1 + 0xa4) == 0) {
    iVar2 = *(int *)((long)param_1 + 0x54);
    uVar11 = 0;
    uVar10 = 2;
    uVar8 = 3;
LAB_0010ab57:
    uVar8 = sljit_emit_cmp(piVar3,uVar8,0x8e,(long)iVar2,uVar10,uVar11);
    if (*piVar3 == 0) {
      lVar6 = *(long *)(piVar3 + 0x18);
      lVar5 = *(long *)(lVar6 + 8);
      uVar1 = lVar5 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar6 + 8) = uVar1;
        puVar7 = (undefined8 *)(lVar6 + 0x10 + lVar5);
      }
      else {
        puVar9 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar9 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0010abd0;
        }
        *puVar9 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar9;
        puVar7 = puVar9 + 2;
        puVar9[1] = 0x10;
      }
      uVar10 = *param_2;
      *puVar7 = uVar8;
      puVar7[1] = uVar10;
      *param_2 = puVar7;
    }
LAB_0010abd0:
    if (*(int *)(param_1 + 0x14) != 2) goto LAB_0010aad7;
    sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xb),0x7f,0);
    uVar8 = sljit_emit_jump(piVar3,0x24);
    if (*piVar3 != 0) goto LAB_0010ab0d;
    lVar6 = *(long *)(piVar3 + 0x18);
    lVar5 = *(long *)(lVar6 + 8);
    uVar1 = lVar5 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar6 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar6 + 0x10 + lVar5);
LAB_0010ac72:
      uVar10 = *param_2;
      *puVar7 = uVar8;
      puVar7[1] = uVar10;
      *param_2 = puVar7;
      goto LAB_0010ab0d;
    }
    puVar9 = (undefined8 *)
             (*(code *)**(undefined8 **)(piVar3 + 0x12))
                       (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar9;
      puVar7 = puVar9 + 2;
      puVar9[1] = 0x10;
      goto LAB_0010ac72;
    }
LAB_0010ae20:
    *piVar3 = 2;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 2) {
      iVar2 = *(int *)((long)param_1 + 0x54);
      uVar11 = 0xffffffffffffffff;
      uVar10 = 0x7f;
      uVar8 = 0;
      goto LAB_0010ab57;
    }
LAB_0010aad7:
    lVar6 = param_1[0x21];
    if (lVar6 != 0) {
      lVar5 = sljit_emit_jump(piVar3,0x24);
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x18) = lVar6;
        *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
      }
      goto LAB_0010ab0d;
    }
    uVar8 = sljit_emit_jump(piVar3,0x24);
    if (*piVar3 != 0) goto LAB_0010ab0d;
    lVar6 = *(long *)(piVar3 + 0x18);
    lVar5 = *(long *)(lVar6 + 8);
    uVar1 = lVar5 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar6 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar6 + 0x10 + lVar5);
    }
    else {
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar9 == (undefined8 *)0x0) goto LAB_0010ae20;
      *puVar9 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar9;
      puVar7 = puVar9 + 2;
      puVar9[1] = 0x10;
    }
    uVar10 = param_1[0x29];
    *puVar7 = uVar8;
    puVar7[1] = uVar10;
    param_1[0x29] = puVar7;
  }
LAB_0010ab0d:
  lVar6 = sljit_emit_label(piVar3);
  if ((lVar6 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar6;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  return;
}



void compile_dnref_search(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  int iVar13;
  long *plVar14;
  bool bVar15;
  
  piVar4 = (int *)*param_1;
  uVar3 = *(ushort *)(param_2 + 4);
  puVar12 = (ushort *)(param_1[0x1e] + (ulong)*(ushort *)(param_2 + 2) * param_1[0x20] * 2);
  sljit_emit_op1(piVar4,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8));
  if (uVar3 < 2) {
    iVar13 = (uint)*puVar12 * 0x10;
    sljit_get_local_base_constprop_0_isra_0(piVar4,4,iVar13 + *(int *)((long)param_1 + 0x44));
    if ((param_3 == (undefined8 *)0x0) || (*(int *)(param_1 + 0x3b) != 0)) {
      sljit_emit_label(piVar4);
      return;
    }
    plVar14 = (long *)0x0;
  }
  else {
    iVar13 = uVar3 - 2;
    plVar14 = (long *)0x0;
    do {
      uVar3 = *puVar12;
      sljit_get_local_base_constprop_0_isra_0
                (piVar4,4,(uint)uVar3 * 0x10 + *(int *)((long)param_1 + 0x44));
      lVar9 = sljit_emit_cmp(piVar4,1,0x8e,(uint)uVar3 * 0x10 + *(int *)((long)param_1 + 0x44),1,0);
      if (*piVar4 == 0) {
        lVar5 = *(long *)(piVar4 + 0x18);
        lVar6 = *(long *)(lVar5 + 8);
        uVar1 = lVar6 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar5 + 8) = uVar1;
          plVar8 = (long *)(lVar5 + 0x10 + lVar6);
        }
        else {
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar4 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar7 == (undefined8 *)0x0) {
            *piVar4 = 2;
            goto LAB_0010aee9;
          }
          *puVar7 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar7;
          plVar8 = puVar7 + 2;
          puVar7[1] = 0x10;
        }
        *plVar8 = lVar9;
        plVar8[1] = (long)plVar14;
        plVar14 = plVar8;
      }
LAB_0010aee9:
      puVar12 = puVar12 + param_1[0x20];
      bVar15 = iVar13 != 0;
      iVar13 = iVar13 + -1;
    } while (bVar15);
    iVar13 = (uint)*puVar12 * 0x10;
    sljit_get_local_base_constprop_0_isra_0(piVar4,4,iVar13 + *(int *)((long)param_1 + 0x44));
    if ((param_3 == (undefined8 *)0x0) || (*(int *)(param_1 + 0x3b) != 0)) goto LAB_0010af9a;
  }
  uVar10 = sljit_emit_cmp(piVar4,0,0x8e,iVar13 + *(int *)((long)param_1 + 0x44),1,0);
  if (*piVar4 == 0) {
    lVar9 = *(long *)(piVar4 + 0x18);
    lVar5 = *(long *)(lVar9 + 8);
    uVar1 = lVar5 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar5);
    }
    else {
      puVar11 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar4 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar11 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_0010af9a;
      }
      *puVar11 = *(undefined8 *)(piVar4 + 0x18);
      puVar7 = puVar11 + 2;
      *(undefined8 **)(piVar4 + 0x18) = puVar11;
      puVar11[1] = 0x10;
    }
    uVar2 = *param_3;
    *puVar7 = uVar10;
    puVar7[1] = uVar2;
    *param_3 = puVar7;
  }
LAB_0010af9a:
  lVar9 = sljit_emit_label(piVar4);
  for (; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
    lVar5 = *plVar14;
    if ((lVar5 != 0) && (lVar9 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar9;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  return;
}



void copy_ovector(undefined8 *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  undefined8 uVar5;
  
  piVar1 = (int *)*param_1;
  sljit_emit_op1(piVar1,0x20,0xb,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8));
  sljit_emit_op1(piVar1,0x20,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8),2,0);
  sljit_emit_op1(piVar1,0x20,0xd,0,0x8e,(long)*(int *)(param_1 + 9));
  sljit_emit_op1(piVar1,0x20,3,0,0x89,0x20);
  if (*(int *)(param_1 + 0xc) != 0) {
    sljit_emit_op1(piVar1,0x20,1,0,0x8e);
  }
  sljit_emit_op1(piVar1,0x25,2,0,0x89,0x54);
  sljit_emit_op1(piVar1,0x20,0x89,0x28,0xd,0);
  if (*(int *)(param_1 + 0xc) != 0) {
    sljit_emit_op1(piVar1,0x20,0x89,0x30,1,0);
  }
  sljit_emit_op2(piVar1,0x40,3,0,3,0,0x7f,0x60);
  sljit_get_local_base_constprop_0_isra_0(piVar1,0xd,(long)*(int *)((long)param_1 + 0x44));
  sljit_emit_op1(piVar1,0x20,1,0,0x89,0x10);
  lVar2 = sljit_emit_label(piVar1);
  sljit_emit_op1(piVar1,0x20,0xc,0,0x8d,0);
  sljit_emit_op2(piVar1,0x40,0xd,0,0xd,0,0x7f,8);
  sljit_emit_op2(piVar1,0x40,3,0,3,0,0x7f,8);
  sljit_emit_op2(piVar1,0x42,0xc,0,0xc,0,1,0);
  if (*piVar1 == 0) {
    piVar1[0x26] = 0;
    emit_shift_with_flags(piVar1,0x38,0,0xc,0,0xc,0,0x7f,1);
  }
  sljit_emit_op1(piVar1,0x20,0x83,0,0xc,0);
  uVar5 = extraout_RDX;
  if (*piVar1 == 0) {
    piVar1[0x26] = 0;
    uVar5 = 1;
    emit_non_cum_binary(piVar1,0x2d2b2928,2,0,2,0,0x7f);
  }
  lVar3 = sljit_emit_jump(piVar1,1,uVar5);
  if ((lVar3 != 0) && (lVar2 != 0)) {
    *(long *)(lVar3 + 0x18) = lVar2;
    *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) & 0xfffffffffffffffd | 1;
  }
  if (param_2 == 1) {
    uVar4 = 1;
    uVar5 = 0x7f;
  }
  else {
    sljit_get_local_base_constprop_0_isra_0
              (piVar1,1,(long)*(int *)((long)param_1 + 0x44) + (long)(param_2 * 2 + -2) * 8);
    sljit_emit_op1(piVar1,0x20,2,0,0x7f,(long)(param_2 + 1));
    lVar2 = sljit_emit_label(piVar1);
    sljit_emit_op1(piVar1,0x20,3,0,0x81,0);
    sljit_emit_op2(piVar1,0x42,1,0,1,0,0x7f,0x10);
    sljit_emit_op2(piVar1,0x42,2,0,2,0,0x7f,1);
    lVar3 = sljit_emit_cmp(piVar1,0,3,0,0xb,0);
    if ((lVar2 != 0) && (lVar3 != 0)) {
      *(long *)(lVar3 + 0x18) = lVar2;
      *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) & 0xfffffffffffffffd | 1;
    }
    uVar4 = 0;
    uVar5 = 2;
  }
  sljit_emit_op1(piVar1,0x20,1,0,uVar5,uVar4);
  return;
}



void do_caselesscmp(undefined8 *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0) {
    piVar1[0x26] = 1;
    puVar2 = (undefined1 *)emit_x86_instruction(piVar1,1,0,0,0x8e,0);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0x8f;
    }
  }
  sljit_emit_op2(piVar1,0x42,2,0,2,0,4,0);
  sljit_emit_op1(piVar1,0x20,0x8e,8,0xd,0);
  sljit_emit_op1(piVar1,0x20,3,0,0x7f,param_1[0x13]);
  lVar3 = sljit_emit_label(piVar1);
  sljit_emit_op1(piVar1,0x23,0xd,0,0x81,0);
  sljit_emit_op1(piVar1,0x23,5,0,0x82,0);
  sljit_emit_op2(piVar1,0x40,1,0,1,0,0x7f,2);
  lVar4 = sljit_emit_cmp(piVar1,4,0xd,0,0x7f,0xff);
  sljit_emit_op1(piVar1,0x21,0xd,0,0xd83,0);
  lVar5 = sljit_emit_label(piVar1);
  if ((lVar4 != 0) && (lVar5 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar5;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar4 = sljit_emit_cmp(piVar1,4,5,0,0x7f,0xff);
  sljit_emit_op1(piVar1,0x21,5,0,0x583,0);
  lVar5 = sljit_emit_label(piVar1);
  if ((lVar5 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar5;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  sljit_emit_op2(piVar1,0x40,2,0,2,0,0x7f,2);
  auVar6 = sljit_emit_cmp(piVar1,1,0xd,0,5,0);
  uVar7 = auVar6._8_8_;
  lVar4 = auVar6._0_8_;
  if (*piVar1 == 0) {
    piVar1[0x26] = 0;
    uVar7 = 2;
    emit_non_cum_binary(piVar1,0x2d2b2928,4,0,4,0,0x7f);
  }
  lVar5 = sljit_emit_jump(piVar1,1,uVar7);
  if ((lVar3 != 0) && (lVar5 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar3;
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar3 = sljit_emit_label(piVar1);
  if ((lVar3 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar3;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  sljit_emit_op1(piVar1,0x20,1,0,0x8e,0);
  sljit_emit_op1(piVar1,0x20,0xd,0,0x8e,8);
  sljit_emit_op_src_constprop_0_isra_0(piVar1,1);
  return;
}



void do_reset_match(undefined8 *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 extraout_RDX;
  int iVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)*param_1;
  if (param_2 != 2) {
    sljit_emit_op1(piVar1,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8));
    if (param_2 < 8) {
      iVar5 = 0x10;
      do {
        iVar4 = *(int *)((long)param_1 + 0x44) + iVar5;
        iVar5 = iVar5 + 8;
        sljit_emit_op1(piVar1,0x20,0x8e,(long)iVar4,1,0);
      } while (param_2 << 3 != iVar5);
    }
    else {
      sljit_get_local_base_constprop_0_isra_0(piVar1,4,(long)*(int *)((long)param_1 + 0x44) + 0x10);
      sljit_emit_op1(piVar1,0x20,0xc,0,0x7f,(long)(param_2 + -2));
      lVar2 = sljit_emit_label(piVar1);
      sljit_emit_op1(piVar1,0x20,0x84,0,1,0);
      sljit_emit_op2(piVar1,0x40,4,0,4,0,0x7f,8);
      uVar6 = extraout_RDX;
      if (*piVar1 == 0) {
        piVar1[0x26] = 0;
        uVar6 = 1;
        emit_non_cum_binary(piVar1,0x2d2b2928,0xc,0,0xc,0,0x7f);
      }
      lVar3 = sljit_emit_jump(piVar1,1,uVar6);
      if ((lVar2 != 0) && (lVar3 != 0)) {
        *(long *)(lVar3 + 0x18) = lVar2;
        *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
  }
  sljit_emit_op1(piVar1,0x20,0xc,0,0x89,0);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar5 = *(int *)((long)param_1 + 100);
  }
  else {
    sljit_emit_op1(piVar1,0x20,0x8e,(long)*(int *)(param_1 + 0xc),0x7f,0);
    iVar5 = *(int *)((long)param_1 + 100);
  }
  if (iVar5 != 0) {
    sljit_emit_op1(piVar1,0x20,0x8e,(long)iVar5,0x7f,0);
  }
  sljit_emit_op1(piVar1,0x20,1,0,0x8e,(long)*(int *)(param_1 + 9));
  sljit_emit_op1(piVar1,0x20,0xc,0,0x8c,8);
  return;
}



short * compile_callout_matchingpath(undefined8 *param_1,short *param_2,long param_3)

{
  ulong uVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  short sVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  uint local_4c;
  
  piVar3 = (int *)*param_1;
  if (*param_2 == 0x76) {
    local_4c = (uint)DAT_0013a076;
  }
  else {
    local_4c = (uint)(ushort)param_2[3];
  }
  uVar2 = *(ushort *)(param_1[1] + 0x80);
  if (*piVar3 != 0) {
    return (short *)0x0;
  }
  pauVar5 = (undefined1 (*) [16])ensure_abuf(piVar3,0x28);
  if (*piVar3 != 0) {
    return (short *)0x0;
  }
  *pauVar5 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar5[2] = 0;
  uVar14 = (uint)uVar2 * 0x10 + 0x87 & 0x1ffff8;
  pauVar5[1] = (undefined1  [16])0x0;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  *(short **)pauVar5[2] = param_2;
  *(undefined8 *)*pauVar5 = uVar6;
  *(undefined1 (**) [16])(param_3 + 0x10) = pauVar5;
  uVar6 = *param_1;
  sljit_emit_op2(uVar6,0x42,0xc,0,0xc,0,0x7f,uVar14);
  uVar6 = sljit_emit_cmp(uVar6,2,0xc,0,0xb,0);
  piVar4 = (int *)*param_1;
  if ((*piVar4 == 0) &&
     (puVar7 = (undefined8 *)ensure_abuf(piVar4,0x18), puVar7 != (undefined8 *)0x0)) {
    *puVar7 = uVar6;
    uVar8 = sljit_emit_label(piVar4);
    uVar6 = param_1[0x26];
    puVar7[1] = uVar8;
    puVar7[2] = uVar6;
    param_1[0x26] = puVar7;
  }
  sljit_emit_op1(piVar3,0x20,4,0,0x8e,(long)*(int *)(param_1 + 0xd));
  sljit_emit_op1(piVar3,0x20,1,0,9,0);
  sVar12 = 0;
  if (*param_2 == 0x76) {
    sVar12 = param_2[3];
  }
  sljit_emit_op1(piVar3,0x25,0x8c,4,0x7f,sVar12);
  sljit_emit_op1(piVar3,0x25,0x8c,0xc,4,0);
  sljit_emit_op1(piVar3,0x25,0x8c,8,0x7f,(ulong)*(ushort *)(param_1[1] + 0x80) + 1);
  sljit_emit_op1(piVar3,0x20,0x8c,0x10,2,0);
  if (*(int *)(param_1 + 0xc) != 0) {
    sljit_emit_op1(piVar3,0x20,4,0,0x81,0x30);
  }
  sljit_emit_op1(piVar3,0x20,0x8c,0x40,0x7f,param_2[1]);
  sljit_emit_op1(piVar3,0x20,0x8c,0x48,0x7f,param_2[2]);
  if (*param_2 == 0x76) {
    sVar12 = 0;
    iVar15 = 0;
    psVar13 = (short *)0x0;
  }
  else {
    psVar13 = param_2 + 6;
    iVar15 = local_4c - 7;
    sVar12 = param_2[4];
  }
  sljit_emit_op1(piVar3,0x20,0x8c,0x60,0x7f,psVar13);
  sljit_emit_op1(piVar3,0x20,0x8c,0x58,0x7f,iVar15);
  sljit_emit_op1(piVar3,0x20,0x8c,0x50,0x7f,sVar12);
  sljit_emit_op1(piVar3,0x20,0x8c,0x18,(-(*(int *)(param_1 + 0xc) == 0) & 0x7bU) + 4,0);
  sljit_emit_op1(piVar3,0x20,0x8e,0,2,0);
  sljit_emit_op1(piVar3,0x20,2,0,0xc,0);
  sljit_get_local_base_constprop_0_isra_0(piVar3,3,(long)*(int *)((long)param_1 + 0x44));
  sljit_emit_icall_constprop_0_isra_0(piVar3,0x1112,do_callout_jit);
  sljit_emit_op1(piVar3,0x20,2,0,0x8e,0);
  sljit_emit_op2(*param_1,0x40,0xc,0,0xc,0,0x7f,uVar14);
  if (*piVar3 == 0) {
    piVar3[0x26] = 0x100;
    lVar9 = emit_x86_instruction(piVar3,0x11,0x7f,0,1,0);
    if (lVar9 != 0) {
      *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) | 0x38;
    }
  }
  uVar6 = sljit_emit_jump(piVar3,8);
  if (*piVar3 == 0) {
    lVar9 = *(long *)(piVar3 + 0x18);
    lVar11 = *(long *)(lVar9 + 8);
    uVar1 = lVar11 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar11);
    }
    else {
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar3 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar10 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010be7c;
      }
      *puVar10 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar10;
      puVar7 = puVar10 + 2;
      puVar10[1] = 0x10;
    }
    uVar8 = *(undefined8 *)(pauVar5[1] + 8);
    *puVar7 = uVar6;
    puVar7[1] = uVar8;
    *(undefined8 **)(pauVar5[1] + 8) = puVar7;
  }
LAB_0010be7c:
  lVar9 = param_1[0x23];
  if (lVar9 == 0) {
    uVar6 = sljit_emit_jump(piVar3,1);
    if (*piVar3 == 0) {
      lVar9 = *(long *)(piVar3 + 0x18);
      lVar11 = *(long *)(lVar9 + 8);
      uVar1 = lVar11 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar9 + 8) = uVar1;
        puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar11);
      }
      else {
        puVar10 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar10 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0010beb2;
        }
        *puVar10 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar10;
        puVar7 = puVar10 + 2;
        puVar10[1] = 0x10;
      }
      uVar8 = param_1[0x2c];
      *puVar7 = uVar6;
      puVar7[1] = uVar8;
      param_1[0x2c] = puVar7;
    }
  }
  else {
    lVar11 = sljit_emit_jump(piVar3,1);
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x18) = lVar9;
      *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
LAB_0010beb2:
  return param_2 + local_4c;
}



void check_str_end_constprop_0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  piVar3 = (int *)*param_1;
  if (*(int *)(param_1 + 0x14) == 1) {
    uVar5 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
    if (*piVar3 != 0) {
      return;
    }
    lVar4 = *(long *)(piVar3 + 0x18);
    lVar8 = *(long *)(lVar4 + 8);
    uVar1 = lVar8 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar4 + 8) = uVar1;
      puVar9 = (undefined8 *)(lVar4 + 0x10 + lVar8);
    }
    else {
      puVar6 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar6 == (undefined8 *)0x0) {
        *piVar3 = 2;
        return;
      }
      *puVar6 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar6;
      puVar9 = puVar6 + 2;
      puVar6[1] = 0x10;
    }
    uVar2 = *param_2;
    *puVar9 = uVar5;
    puVar9[1] = uVar2;
    *param_2 = puVar9;
    return;
  }
  lVar4 = sljit_emit_cmp(piVar3,2,2,0,0xd,0);
  if (*(int *)(param_1 + 0x14) == 2) {
    uVar5 = sljit_emit_cmp(piVar3,3,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
    if (*piVar3 == 0) {
      lVar8 = *(long *)(piVar3 + 0x18);
      lVar7 = *(long *)(lVar8 + 8);
      uVar1 = lVar7 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar8 + 8) = uVar1;
        puVar9 = (undefined8 *)(lVar8 + 0x10 + lVar7);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0010c1b8;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar9 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      uVar2 = *param_2;
      *puVar9 = uVar5;
      puVar9[1] = uVar2;
      *param_2 = puVar9;
    }
LAB_0010c1b8:
    sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xb),0x7f,0);
    uVar5 = sljit_emit_jump(piVar3,0x24);
    if (*piVar3 != 0) goto LAB_0010c110;
    lVar8 = *(long *)(piVar3 + 0x18);
    lVar7 = *(long *)(lVar8 + 8);
    uVar1 = lVar7 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar8 + 8) = uVar1;
      puVar9 = (undefined8 *)(lVar8 + 0x10 + lVar7);
    }
    else {
      puVar6 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar6 == (undefined8 *)0x0) {
LAB_0010c3e0:
        *piVar3 = 2;
        goto LAB_0010c110;
      }
      *puVar6 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar6;
      puVar9 = puVar6 + 2;
      puVar6[1] = 0x10;
    }
    uVar2 = *param_2;
    *puVar9 = uVar5;
    puVar9[1] = uVar2;
    *param_2 = puVar9;
  }
  else {
    uVar5 = sljit_emit_cmp(piVar3,3,0x8e,(long)*(int *)((long)param_1 + 0x54),2);
    if (*piVar3 == 0) {
      lVar8 = *(long *)(piVar3 + 0x18);
      lVar7 = *(long *)(lVar8 + 8);
      uVar1 = lVar7 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar8 + 8) = uVar1;
        puVar9 = (undefined8 *)(lVar8 + 0x10 + lVar7);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0010c0da;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar9 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      uVar2 = *param_2;
      *puVar9 = uVar5;
      puVar9[1] = uVar2;
      *param_2 = puVar9;
    }
LAB_0010c0da:
    lVar8 = param_1[0x21];
    if (lVar8 != 0) {
      lVar7 = sljit_emit_jump(piVar3,0x24);
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x18) = lVar8;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
      goto LAB_0010c110;
    }
    uVar5 = sljit_emit_jump(piVar3,0x24);
    if (*piVar3 != 0) goto LAB_0010c110;
    lVar8 = *(long *)(piVar3 + 0x18);
    lVar7 = *(long *)(lVar8 + 8);
    uVar1 = lVar7 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar8 + 8) = uVar1;
      puVar9 = (undefined8 *)(lVar8 + 0x10 + lVar7);
    }
    else {
      puVar6 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar6 == (undefined8 *)0x0) goto LAB_0010c3e0;
      *puVar6 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar6;
      puVar9 = puVar6 + 2;
      puVar6[1] = 0x10;
    }
    uVar2 = param_1[0x29];
    *puVar9 = uVar5;
    puVar9[1] = uVar2;
    param_1[0x29] = puVar9;
  }
LAB_0010c110:
  lVar8 = sljit_emit_label(piVar3);
  if ((lVar8 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar8;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  return;
}



void do_casefulcmp_isra_0(int *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  
  if (*param_1 == 0) {
    param_1[0x26] = 1;
    puVar1 = (undefined1 *)emit_x86_instruction(param_1,1,0,0,0x8e,0);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0x8f;
    }
  }
  sljit_emit_op2(param_1,0x42,2,0,2,0,4,0);
  lVar2 = sljit_emit_label(param_1);
  sljit_emit_op1(param_1,0x23,3,0,0x81,0);
  sljit_emit_op1(param_1,0x23,5,0,0x82,0);
  sljit_emit_op2(param_1,0x40,1,0,1,0,0x7f,2);
  sljit_emit_op2(param_1,0x40,2,0,2,0,0x7f,2);
  auVar5 = sljit_emit_cmp(param_1,1,3,0,5,0);
  uVar6 = auVar5._8_8_;
  lVar3 = auVar5._0_8_;
  if (*param_1 == 0) {
    param_1[0x26] = 0;
    uVar6 = 2;
    emit_non_cum_binary(param_1,0x2d2b2928,4,0,4,0,0x7f);
  }
  lVar4 = sljit_emit_jump(param_1,1,uVar6);
  if ((lVar2 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar2;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar2 = sljit_emit_label(param_1);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    *(long *)(lVar3 + 0x18) = lVar2;
    *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) & 0xfffffffffffffffd | 1;
  }
  sljit_emit_op1(param_1,0x20,1,0,0x8e,0);
  sljit_emit_op_src_constprop_0_isra_0(param_1,1);
  return;
}



undefined8 * search_requested_char(undefined8 *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ushort uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  undefined8 *local_78;
  undefined8 *local_60;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  long local_40;
  
  uVar19 = (ulong)param_2;
  piVar1 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sljit_emit_op2(piVar1,0x40,4,0,2,0,0x7f,400000);
  sljit_emit_op1(piVar1,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 0x4c));
  lVar4 = sljit_emit_cmp(piVar1,2,4,0,0xd,0);
  lVar5 = sljit_emit_cmp(piVar1,2,2,0,1,0);
  if (param_4 == 0) {
    sljit_emit_op1(piVar1,0x20,1,0,2,0);
  }
  else {
    sljit_emit_op2(piVar1,0x40,1,0,2,0,0x7f,2);
  }
  uVar16 = (ushort)param_2;
  uVar15 = param_2 & 0xffff;
  uVar21 = param_2 & 0xffff;
  uVar3 = param_2 & 0xffff;
  if (((param_3 != 0) &&
      ((0xff < uVar16 ||
       (uVar21 = (uint)*(byte *)(param_1[0x12] + (uVar19 & 0xffff)), 0x7f < uVar16)))) &&
     ((*(int *)(param_1 + 0x3c) != 0 || (*(int *)(param_1 + 0x3d) != 0)))) {
    uVar21 = *(int *)(&DAT_0013a01c +
                     (ulong)*(ushort *)
                             (&_pcre2_ucd_stage2_16 +
                             (long)(int)((uint)*(ushort *)
                                                (&_pcre2_ucd_stage1_16 +
                                                (ulong)(param_2 >> 7 & 0x1ff) * 2) * 0x80 +
                                        (param_2 & 0x7f)) * 2) * 0xc) + (param_2 & 0xffff);
  }
  if (cpu_feature_list == 0) {
    get_cpu_features();
  }
  if ((cpu_feature_list & 4) == 0) {
    lVar9 = sljit_emit_label(piVar1);
    uVar6 = sljit_emit_cmp(piVar1,3,1,0,0xd,0);
    if (*piVar1 == 0) {
      lVar10 = *(long *)(piVar1 + 0x18);
      uVar13 = *(long *)(lVar10 + 8) + 0x10;
      if (uVar13 < 0xff1) {
        local_78 = (undefined8 *)(lVar10 + 0x10 + *(long *)(lVar10 + 8));
        *(ulong *)(lVar10 + 8) = uVar13;
      }
      else {
        puVar12 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar1 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar1 + 0x12))[2]);
        if (puVar12 == (undefined8 *)0x0) {
          *piVar1 = 2;
          goto LAB_0010d04e;
        }
        *puVar12 = *(undefined8 *)(piVar1 + 0x18);
        *(undefined8 **)(piVar1 + 0x18) = puVar12;
        local_78 = puVar12 + 2;
        puVar12[1] = 0x10;
      }
      local_78[1] = 0;
      *local_78 = uVar6;
    }
    else {
LAB_0010d04e:
      local_78 = (undefined8 *)0x0;
    }
    sljit_emit_op1(piVar1,0x23,4,0,0x81,0);
    uVar13 = uVar19 & 0xffff;
    if (uVar21 == (param_2 & 0xffff)) {
LAB_0010caba:
      lVar11 = 0;
      lVar10 = sljit_emit_cmp(piVar1,0,4,0,0x7f,uVar13);
    }
    else {
      uVar3 = uVar21 ^ uVar15;
      if ((uVar3 - 1 & uVar3) == 0) {
        if (*piVar1 == 0) {
          piVar1[0x26] = 0;
          emit_cum_binary(piVar1,0xd0b0908,4,0,4,0,0x7f,uVar3);
        }
        uVar13 = (ulong)(uVar21 | uVar15);
        goto LAB_0010caba;
      }
      lVar10 = sljit_emit_cmp(piVar1,0,4,0,0x7f,uVar19 & 0xffff);
      lVar11 = sljit_emit_cmp(piVar1,0,4,0,0x7f,uVar21);
    }
    sljit_emit_op2(piVar1,0x40,1,0,1,0);
    lVar7 = sljit_emit_jump(piVar1,0x24);
    if ((lVar9 != 0) && (lVar7 != 0)) {
      *(long *)(lVar7 + 0x18) = lVar9;
      *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar9 = sljit_emit_label(piVar1);
    if ((lVar9 != 0) && (lVar10 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar9;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if ((lVar11 != 0) && (lVar9 = sljit_emit_label(piVar1), lVar9 != 0)) {
      *(long *)(lVar11 + 0x18) = lVar9;
      *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto LAB_0010c955;
  }
  uVar20 = (ushort)uVar21;
  piVar2 = (int *)*param_1;
  if (uVar16 == uVar20) {
    local_4c = 0;
LAB_0010cb00:
    uVar6 = sljit_emit_cmp(piVar2,3,1,0,0xd,0);
    if (*piVar2 != 0) {
      sljit_emit_op1(piVar2,0x20,4,0,1,0);
      sljit_emit_op1(piVar2,0x20,3,0,2,0);
      puVar12 = (undefined8 *)0x0;
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,2,0x7f,(long)(int)(uVar15 * 0x10001));
      if (uVar16 == uVar20) goto LAB_0010d0d0;
LAB_0010cc0c:
      uVar15 = uVar21 & 0xffff;
      goto LAB_0010cc10;
    }
    uVar15 = 0;
LAB_0010cb2e:
    lVar9 = *(long *)(piVar2 + 0x18);
    lVar10 = *(long *)(lVar9 + 8);
    uVar19 = lVar10 + 0x10;
    if (uVar19 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar19;
      puVar12 = (undefined8 *)(lVar9 + 0x10 + lVar10);
LAB_0010cb8d:
      puVar12[1] = 0;
      *puVar12 = uVar6;
    }
    else {
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = *(undefined8 *)(piVar2 + 0x18);
        *(undefined8 **)(piVar2 + 0x18) = puVar8;
        puVar12 = puVar8 + 2;
        puVar8[1] = 0x10;
        goto LAB_0010cb8d;
      }
      *piVar2 = 2;
      puVar12 = (undefined8 *)0x0;
    }
    sljit_emit_op1(piVar2,0x20,4,0,1,0);
    sljit_emit_op1(piVar2,0x20,3,0,2,0);
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,2,0x7f,(long)(int)(uVar3 * 0x10001));
    if (uVar16 != uVar20) {
      if (uVar15 == 0) goto LAB_0010cc0c;
      goto LAB_0010cc10;
    }
LAB_0010d0d0:
    sljit_emit_op1(piVar2,0x20,2,0,4,0);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,2,2);
  }
  else {
    uVar14 = (param_2 ^ uVar21) & 0xffff;
    if ((uVar14 - 1 & uVar14) != 0) {
      local_4c = 2;
      goto LAB_0010cb00;
    }
    uVar15 = (param_2 ^ uVar21) & 0xffff;
    uVar6 = sljit_emit_cmp(piVar2,3,1,0,0xd,0);
    if (*piVar2 == 0) {
      local_4c = 1;
      uVar3 = (uVar21 | param_2) & 0xffff;
      goto LAB_0010cb2e;
    }
    puVar12 = (undefined8 *)0x0;
    sljit_emit_op1(piVar2,0x20,4,0,1,0);
    sljit_emit_op1(piVar2,0x20,3,0,2,0);
    sljit_emit_simd_lane_mov_constprop_0_isra_0
              (piVar2,2,0x7f,
               (long)(int)((uint)(uVar16 | uVar20) * 0x10000 + (uint)(uVar16 | uVar20)));
    local_4c = 1;
LAB_0010cc10:
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,3,0x7f,(long)(int)(uVar15 * 0x10001));
    sljit_emit_op1(piVar2,0x20,2,0,4,0);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,2,2);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,3,3);
  }
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_cum_binary(piVar2,0x25232120,2,0,2,0,0x7f,0xfffffffffffffff0);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_cum_binary(piVar2,0x25232120,4,0,4,0,0x7f,0xf);
    }
  }
  sljit_emit_simd_mov_constprop_0_isra_0(piVar2,0x4004000,1,0);
  iVar17 = 0;
  do {
    iVar18 = iVar17 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,local_4c,iVar17,0,1,2);
    iVar17 = iVar18;
  } while (iVar18 != 4);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar2);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,4,0);
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_shift_with_flags(piVar2,0x28,0,1,0,1,0,4,0);
  }
  lVar9 = sljit_emit_cmp(piVar2,1,1,0,0x7f,0);
  sljit_emit_op2(piVar2,0x42,2,0,2,0,4,0);
  lVar10 = sljit_emit_label(piVar2);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,0x10);
  uVar6 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
  local_60 = puVar12;
  if (*piVar2 == 0) {
    lVar11 = *(long *)(piVar2 + 0x18);
    uVar19 = *(long *)(lVar11 + 8) + 0x10;
    if (uVar19 < 0xff1) {
      local_60 = (undefined8 *)(lVar11 + 0x10 + *(long *)(lVar11 + 8));
      *(ulong *)(lVar11 + 8) = uVar19;
    }
    else {
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar8 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0010ce8c;
      }
      *puVar8 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar8;
      local_60 = puVar8 + 2;
      puVar8[1] = 0x10;
    }
    local_60[1] = puVar12;
    *local_60 = uVar6;
  }
LAB_0010ce8c:
  sljit_emit_simd_mov_constprop_0_isra_0(piVar2,0x4004000,1,0);
  iVar17 = 0;
  do {
    iVar18 = iVar17 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,local_4c,iVar17,0,1,2,3);
    iVar17 = iVar18;
  } while (iVar18 != 4);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar2);
  lVar11 = sljit_emit_cmp(piVar2,0,1,0,0x7f,0);
  if ((lVar11 != 0) && (lVar10 != 0)) {
    *(long *)(lVar11 + 0x18) = lVar10;
    *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar10 = sljit_emit_label(piVar2);
  if ((lVar9 != 0) && (lVar10 != 0)) {
    *(long *)(lVar9 + 0x18) = lVar10;
    *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
  }
  local_46 = 0xc0;
  local_48 = 0xbc0f;
  sljit_emit_op_custom_isra_0(piVar2,&local_48,3);
  sljit_emit_op2(piVar2,0x40,1,0,1,0,2,0);
  uVar6 = sljit_emit_cmp(piVar2,3,1,0,0xd,0);
  if (*piVar2 == 0) {
    lVar9 = *(long *)(piVar2 + 0x18);
    uVar19 = *(long *)(lVar9 + 8) + 0x10;
    if (uVar19 < 0xff1) {
      local_78 = (undefined8 *)(lVar9 + 0x10 + *(long *)(lVar9 + 8));
      *(ulong *)(lVar9 + 8) = uVar19;
    }
    else {
      puVar12 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar2 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar12 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0010d1ed;
      }
      *puVar12 = *(undefined8 *)(piVar2 + 0x18);
      local_78 = puVar12 + 2;
      *(undefined8 **)(piVar2 + 0x18) = puVar12;
      puVar12[1] = 0x10;
    }
    *local_78 = uVar6;
    local_78[1] = local_60;
  }
  else {
LAB_0010d1ed:
    local_78 = local_60;
  }
  sljit_emit_op1(piVar2,0x20,2,0,3,0);
LAB_0010c955:
  sljit_emit_op1(piVar1,0x20,0x8e,(long)*(int *)((long)param_1 + 0x4c),1,0);
  lVar9 = sljit_emit_label(piVar1);
  if ((lVar5 != 0) && (lVar9 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar9;
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar5 = sljit_emit_label(piVar1);
  if ((lVar5 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar5;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long skip_valid_char_isra_0(int *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    lVar2 = 0x7f;
    sljit_emit_op2(param_1,0x40,2,0,2,0,0x7f,2);
  }
  else {
    sljit_emit_op1(param_1,0x23,1,0,0x82,0);
    sljit_emit_op2(param_1,0x40,2,0,2,0,0x7f,2);
    lVar1 = sljit_emit_cmp(param_1,2,1,0,0x7f,0xd800);
    if (*param_1 == 0) {
      param_1[0x26] = 0;
      uVar3 = 0xfc00;
      emit_cum_binary(param_1,0x25232120,1,0,1,0,0x7f);
      if (*param_1 == 0) {
        param_1[0x26] = 0;
        emit_cmp_binary(param_1,1,0,0x7f,0xd800,uVar3);
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(param_1,0x20,1,0);
    if (*param_1 == 0) {
      param_1[0x26] = 0;
      emit_shift_with_flags(param_1,0x20,0,1,0,1,0,0x7f,1);
    }
    sljit_emit_op2(param_1,0x40,2,0,2,0,1,0);
    lVar2 = sljit_emit_label(param_1);
    if ((lVar1 != 0) && (lVar2 != 0)) {
      *(long *)(lVar1 + 0x18) = lVar2;
      *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  return lVar2;
}



void init_frame_isra_0(undefined8 *param_1,short *param_2,short *param_3,int param_4)

{
  ushort *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  short *psVar11;
  
  param_4 = param_4 * 8;
  uVar2 = *param_1;
  psVar11 = param_2;
  if (param_3 == (short *)0x0) {
    do {
      param_3 = psVar11 + (ushort)psVar11[1];
      psVar11 = param_3;
    } while (*param_3 == 0x78);
    if ((*param_2 != 0x8a) && (*param_2 != 0x8f)) {
      param_2 = (short *)next_opcode(param_1,param_2);
    }
  }
  lVar10 = (long)param_4;
  if (param_2 < param_3) {
    bVar5 = false;
    lVar10 = (long)param_4;
    bVar4 = false;
    bVar3 = false;
    do {
      while (*param_2 != 3) {
        uVar7 = *param_2 - 0x75;
        if (uVar7 < 0x2e) {
          uVar6 = 1L << ((byte)uVar7 & 0x3f);
          if ((uVar6 & 0x6300000) == 0) {
            if ((uVar6 & 0x28a000000000) == 0) {
              if ((uVar6 & 1) == 0) goto LAB_0010d618;
              if ((*(int *)((long)param_1 + 0xac) != 0) && (!bVar3)) {
                sljit_emit_op1(uVar2,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 0x44));
                sljit_emit_op1(uVar2,0x20,0x8c,lVar10,0x7f,(long)-*(int *)((long)param_1 + 0x44));
                sljit_emit_op1(uVar2,0x20,0x8c,(long)(param_4 + -8),1,0);
                param_4 = param_4 + -0x10;
                bVar3 = true;
                lVar10 = (long)param_4;
              }
              if ((*(int *)(param_1 + 0xc) != 0) && (!bVar4)) {
                sljit_emit_op1(uVar2,0x20,1,0,0x8e);
                sljit_emit_op1(uVar2,0x20,0x8c,lVar10,0x7f,(long)-*(int *)(param_1 + 0xc));
                sljit_emit_op1(uVar2,0x20,0x8c,(long)(param_4 + -8),1,0);
                param_4 = param_4 + -0x10;
                bVar4 = true;
                lVar10 = (long)param_4;
              }
              if ((*(int *)(param_1 + 0xd) != 0) && (!bVar5)) {
                sljit_emit_op1(uVar2,0x20,1,0,0x8e);
                sljit_emit_op1(uVar2,0x20,0x8c,lVar10,0x7f,(long)-*(int *)(param_1 + 0xd));
                sljit_emit_op1(uVar2,0x20,0x8c,(long)(param_4 + -8),1,0);
                param_4 = param_4 + -0x10;
                bVar5 = true;
                lVar10 = (long)param_4;
              }
              param_2 = param_2 + 2;
            }
            else {
              if (!bVar4) {
                sljit_emit_op1(uVar2,0x20,1,0,0x8e,(long)*(int *)(param_1 + 0xc));
                sljit_emit_op1(uVar2,0x20,0x8c,lVar10,0x7f,(long)-*(int *)(param_1 + 0xc));
                sljit_emit_op1(uVar2,0x20,0x8c,(long)(param_4 + -8),1,0);
                param_4 = param_4 + -0x10;
                lVar10 = (long)param_4;
              }
              bVar4 = true;
              param_2 = param_2 + (ulong)(ushort)param_2[1] + 3;
            }
          }
          else {
            iVar9 = param_4;
            if ((*(int *)(param_1 + 0xd) != 0) && (!bVar5)) {
              iVar9 = param_4 + -0x10;
              sljit_emit_op1(uVar2,0x20,1,0,0x8e);
              sljit_emit_op1(uVar2,0x20,0x8c,lVar10,0x7f,(long)-*(int *)(param_1 + 0xd));
              sljit_emit_op1(uVar2,0x20,0x8c,(long)(param_4 + -8),1,0);
              lVar10 = (long)iVar9;
              bVar5 = true;
            }
            puVar1 = (ushort *)(param_2 + 2);
            param_2 = param_2 + 3;
            iVar8 = (uint)*puVar1 * 0x10;
            sljit_emit_op1(uVar2,0x20,0x8c,lVar10,0x7f,
                           (long)(*(int *)((long)param_1 + 0x44) + iVar8));
            sljit_emit_op1(uVar2,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar8));
            sljit_emit_op1(uVar2,0x20,4,0,0x8e,(long)(iVar8 + 8 + *(int *)((long)param_1 + 0x44)));
            sljit_emit_op1(uVar2,0x20,0x8c,(long)(iVar9 + -8),1,0);
            sljit_emit_op1(uVar2,0x20,0x8c,(long)(iVar9 + -0x10),4,0);
            param_4 = iVar9 + -0x18;
            lVar10 = (long)param_4;
          }
        }
        else {
LAB_0010d618:
          param_2 = (short *)next_opcode(param_1,param_2);
        }
        if (param_3 <= param_2) goto LAB_0010d4e3;
      }
      if (!bVar3) {
        sljit_emit_op1(uVar2,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 0x44));
        sljit_emit_op1(uVar2,0x20,0x8c,lVar10,0x7f,(long)-*(int *)((long)param_1 + 0x44));
        sljit_emit_op1(uVar2,0x20,0x8c,(long)(param_4 + -8),1,0);
        param_4 = param_4 + -0x10;
        lVar10 = (long)param_4;
      }
      param_2 = param_2 + 1;
      bVar3 = true;
    } while (param_2 < param_3);
  }
LAB_0010d4e3:
  sljit_emit_op1(uVar2,0x20,0x8c,lVar10,0x7f,0);
  return;
}



void fast_forward_char_simd(undefined8 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  short sVar15;
  short sVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  long in_FS_OFFSET;
  ulong uVar21;
  undefined2 local_48;
  undefined1 local_46;
  long local_40;
  
  piVar2 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar16 = (short)param_2;
  sVar15 = (short)param_3;
  if (sVar16 == sVar15) {
    uVar20 = 0;
LAB_0010de53:
    uVar4 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
    if (*(int *)(param_1 + 0x14) != 1) {
      sljit_emit_simd_lane_mov_constprop_0_isra_0
                (piVar2,2,0x7f,(long)(int)(param_2 * 0x10000 + (param_2 & 0xffff)));
      if (sVar16 == sVar15) goto LAB_0010deb0;
LAB_0010dea4:
      uVar17 = param_3 & 0xffff;
      goto LAB_0010da30;
    }
    uVar17 = 0;
LAB_0010deee:
    if (*piVar2 == 0) {
      lVar5 = *(long *)(piVar2 + 0x18);
      lVar6 = *(long *)(lVar5 + 8);
      uVar21 = lVar6 + 0x10;
      if (uVar21 < 0xff1) {
        *(ulong *)(lVar5 + 8) = uVar21;
        puVar11 = (ulong *)(lVar5 + 0x10 + lVar6);
      }
      else {
        puVar12 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar2 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
        if (puVar12 == (undefined8 *)0x0) {
          *piVar2 = 2;
          goto LAB_0010df5a;
        }
        *puVar12 = *(undefined8 *)(piVar2 + 0x18);
        *(undefined8 **)(piVar2 + 0x18) = puVar12;
        puVar11 = puVar12 + 2;
        puVar12[1] = 0x10;
      }
      uVar21 = param_1[0x2d];
      *puVar11 = uVar4;
      puVar11[1] = uVar21;
      param_1[0x2d] = puVar11;
    }
LAB_0010df5a:
    sljit_emit_simd_lane_mov_constprop_0_isra_0
              (piVar2,2,0x7f,(long)(int)(param_2 * 0x10000 + (param_2 & 0xffff)));
    if (sVar16 != sVar15) {
      if (uVar17 == 0) goto LAB_0010dea4;
      goto LAB_0010da30;
    }
LAB_0010deb0:
    sljit_emit_op1(piVar2,0x20,4,0,2,0);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,2,2);
  }
  else {
    uVar20 = 2;
    uVar17 = (param_3 ^ param_2) & 0xffff;
    if ((uVar17 - 1 & uVar17) != 0) goto LAB_0010de53;
    uVar4 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar20 = 1;
      param_2 = param_3 | param_2;
      goto LAB_0010deee;
    }
    uVar20 = 1;
    sljit_emit_simd_lane_mov_constprop_0_isra_0
              (piVar2,2,0x7f,
               (long)(int)((param_3 | param_2) * 0x10000 + ((param_3 | param_2) & 0xffff)));
LAB_0010da30:
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,3,0x7f,(long)(int)(uVar17 * 0x10001));
    sljit_emit_op1(piVar2,0x20,4,0,2,0);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,2,2);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,3,3);
  }
  lVar5 = sljit_emit_label(piVar2);
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_cum_binary(piVar2,0x25232120,2,0,2,0,0x7f,0xfffffffffffffff0);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_cum_binary(piVar2,0x25232120,4,0,4,0,0x7f,0xf);
    }
  }
  sljit_emit_simd_mov_constprop_0_isra_0(piVar2,0x4004000,1,0);
  iVar19 = 0;
  do {
    iVar18 = iVar19 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,uVar20,iVar19,0,1,2);
    iVar19 = iVar18;
  } while (iVar18 != 4);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar2);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,4,0);
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_shift_with_flags(piVar2,0x28,0,1,0,1,0,4,0);
  }
  lVar6 = sljit_emit_cmp(piVar2,1,1,0,0x7f,0);
  sljit_emit_op2(piVar2,0x42,2,0,2,0,4,0);
  lVar7 = sljit_emit_label(piVar2);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,0x10);
  lVar8 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
  if ((*(int *)(param_1 + 0x14) == 1) && (*piVar2 == 0)) {
    lVar9 = *(long *)(piVar2 + 0x18);
    lVar3 = *(long *)(lVar9 + 8);
    uVar21 = lVar3 + 0x10;
    if (uVar21 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar21;
      plVar13 = (long *)(lVar9 + 0x10 + lVar3);
    }
    else {
      puVar12 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar2 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar12 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0010dc54;
      }
      *puVar12 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar12;
      plVar13 = puVar12 + 2;
      puVar12[1] = 0x10;
    }
    lVar9 = param_1[0x2d];
    *plVar13 = lVar8;
    plVar13[1] = lVar9;
    param_1[0x2d] = plVar13;
  }
LAB_0010dc54:
  sljit_emit_simd_mov_constprop_0_isra_0(piVar2,0x4004000,1,0);
  iVar19 = 0;
  do {
    iVar18 = iVar19 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,uVar20,iVar19,0,1,2,3);
    iVar19 = iVar18;
  } while (iVar18 != 4);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar2);
  lVar9 = sljit_emit_cmp(piVar2,0,1,0,0x7f,0);
  if ((lVar9 != 0) && (lVar7 != 0)) {
    *(long *)(lVar9 + 0x18) = lVar7;
    *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar7 = sljit_emit_label(piVar2);
  if ((lVar7 != 0) && (lVar6 != 0)) {
    *(long *)(lVar6 + 0x18) = lVar7;
    *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
  }
  local_48 = 0xbc0f;
  local_46 = 0xc0;
  sljit_emit_op_custom_isra_0(piVar2,&local_48,3);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,1,0);
  if (*(int *)(param_1 + 0x14) == 1) {
    uVar20 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
    if (*piVar2 == 0) {
      lVar6 = *(long *)(piVar2 + 0x18);
      lVar7 = *(long *)(lVar6 + 8);
      uVar4 = lVar7 + 0x10;
      if (uVar4 < 0xff1) {
        *(ulong *)(lVar6 + 8) = uVar4;
        puVar12 = (undefined8 *)(lVar6 + 0x10 + lVar7);
      }
      else {
        puVar14 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar2 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
        if (puVar14 == (undefined8 *)0x0) {
          *piVar2 = 2;
          goto LAB_0010de13;
        }
        *puVar14 = *(undefined8 *)(piVar2 + 0x18);
        *(undefined8 **)(piVar2 + 0x18) = puVar14;
        puVar12 = puVar14 + 2;
        puVar14[1] = 0x10;
      }
      uVar1 = param_1[0x2d];
      *puVar12 = uVar20;
      puVar12[1] = uVar1;
      param_1[0x2d] = puVar12;
    }
  }
  else {
    lVar6 = sljit_emit_label(piVar2);
    uVar21 = uVar4;
    if ((lVar6 != 0) && (uVar4 != 0)) {
      uVar21 = *(ulong *)(uVar4 + 0x10);
      *(long *)(uVar4 + 0x18) = lVar6;
      *(ulong *)(uVar4 + 0x10) = uVar21 & 0xfffffffffffffffd | 1;
    }
    lVar6 = sljit_emit_label(piVar2);
    if ((lVar6 != 0) && (lVar8 != 0)) {
      uVar21 = *(ulong *)(lVar8 + 0x10);
      *(long *)(lVar8 + 0x18) = lVar6;
      *(ulong *)(lVar8 + 0x10) = uVar21 & 0xfffffffffffffffd | 1;
    }
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      puVar10 = (undefined1 *)emit_x86_instruction(piVar2,1,2,0,0xd,0,uVar21);
      if (puVar10 != (undefined1 *)0x0) {
        *puVar10 = 0x3b;
      }
    }
    sljit_emit_select_isra_0(piVar2,4,2,0xd,0,2);
  }
LAB_0010de13:
  if ((*(int *)(param_1 + 0x3c) == 0) || (param_4 < 1)) goto LAB_0010de2d;
  sljit_emit_op1(piVar2,0x23,1,0,0x82,(long)(param_4 * -2));
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_cum_binary(piVar2,0x25232120,1,0,1,0,0x7f,0xfc00);
  }
  lVar6 = sljit_emit_cmp(piVar2,1,1,0,0x7f,0xdc00);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,2);
  uVar20 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
  if (*piVar2 == 0) {
    lVar7 = *(long *)(piVar2 + 0x18);
    lVar8 = *(long *)(lVar7 + 8);
    uVar4 = lVar8 + 0x10;
    if (uVar4 < 0xff1) {
      *(ulong *)(lVar7 + 8) = uVar4;
      puVar12 = (undefined8 *)(lVar7 + 0x10 + lVar8);
    }
    else {
      puVar14 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar2 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar14 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0010e1ed;
      }
      *puVar14 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar14;
      puVar12 = puVar14 + 2;
      puVar14[1] = 0x10;
    }
    uVar1 = param_1[0x2d];
    *puVar12 = uVar20;
    puVar12[1] = uVar1;
    param_1[0x2d] = puVar12;
  }
LAB_0010e1ed:
  sljit_emit_op1(piVar2,0x20,4,0,2,0);
  lVar7 = sljit_emit_jump(piVar2,0x24);
  if ((lVar7 != 0) && (lVar5 != 0)) {
    *(long *)(lVar7 + 0x18) = lVar5;
    *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar5 = sljit_emit_label(piVar2);
  if ((lVar5 != 0) && (lVar6 != 0)) {
    *(long *)(lVar6 + 0x18) = lVar5;
    *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
  }
LAB_0010de2d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

long compile_assert_backtrackingpath(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  short *psVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  short sVar16;
  
  psVar3 = *(short **)(param_2 + 0x20);
  piVar4 = (int *)*param_1;
  sVar16 = *psVar3;
  if (sVar16 == 0x97) {
    sljit_emit_op1(piVar4,0x20,2,0,0x8c,0);
    if (-1 < *(int *)(param_2 + 0x30)) {
      if ((psVar3[1] & 0xfffdU) == 0x80) {
        sljit_emit_op1(piVar4,0x20,0x8c,0,0x7f,0);
        lVar13 = *(long *)(param_2 + 0x38);
        lVar12 = sljit_emit_cmp(piVar4,1,2,0,0x7f,0);
        lVar8 = lVar12;
        lVar6 = lVar13;
        goto joined_r0x0010e6c1;
      }
      piVar5 = (int *)*param_1;
      if (*piVar5 == 0) {
        piVar5[0x26] = 0;
        iVar7 = emit_lea_binary(piVar5,0xc,0,0xc,0,0x7f,8);
        if (iVar7 == 4) {
          emit_cum_binary(piVar5,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      sVar14 = 0x97;
      lVar13 = sljit_emit_cmp(piVar4,0,2,0,0x7f,0);
      sVar16 = psVar3[1];
      goto LAB_0010e300;
    }
    lVar13 = sljit_emit_label(piVar4);
    plVar15 = *(long **)(param_2 + 0x18);
    sVar16 = 0x97;
    if (plVar15 != (long *)0x0) goto LAB_0010e77b;
  }
  else {
    if (-1 < *(int *)(param_2 + 0x30)) {
      sVar14 = 0x87;
      lVar13 = 0;
LAB_0010e300:
      if ((sVar16 - 0x7fU & 0xfffd) != 0) {
        lVar8 = sljit_emit_label(piVar4);
        plVar15 = *(long **)(param_2 + 0x18);
        if (plVar15 != (long *)0x0) {
          do {
            lVar12 = *plVar15;
            if ((lVar12 != 0) && (lVar8 != 0)) {
              *(long *)(lVar12 + 0x18) = lVar8;
              *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
            }
            plVar15 = (long *)plVar15[1];
          } while (plVar15 != (long *)0x0);
        }
        goto joined_r0x0010e4cf;
      }
      sljit_emit_op1(piVar4,0x20,0xc,0,0x8e,(long)*(int *)(param_2 + 0x34));
      uVar9 = sljit_emit_jump(piVar4,0x25);
      if (*piVar4 == 0) {
        lVar8 = *(long *)(piVar4 + 0x18);
        lVar12 = *(long *)(lVar8 + 8);
        uVar1 = lVar12 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar8 + 8) = uVar1;
          puVar11 = (undefined8 *)(lVar8 + 0x10 + lVar12);
        }
        else {
          puVar10 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar4 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar10 == (undefined8 *)0x0) {
            *piVar4 = 2;
            goto LAB_0010e40e;
          }
          *puVar10 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar10;
          puVar11 = puVar10 + 2;
          puVar10[1] = 0x10;
        }
        uVar2 = param_1[0x31];
        *puVar11 = uVar9;
        puVar11[1] = uVar2;
        param_1[0x31] = puVar11;
      }
LAB_0010e40e:
      sljit_emit_op1(piVar4,0x20,1,0,0x8c,0xfffffffffffffff0);
      sljit_emit_op2(piVar4,0x40,0xc,0,0xc,0,0x7f,(long)(*(int *)(param_2 + 0x30) + -1) << 3);
      sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)(param_2 + 0x34),1,0);
      lVar8 = sljit_emit_label(piVar4);
      for (plVar15 = *(long **)(param_2 + 0x18); plVar15 != (long *)0x0;
          plVar15 = (long *)plVar15[1]) {
        lVar12 = *plVar15;
        if ((lVar12 != 0) && (lVar8 != 0)) {
          *(long *)(lVar12 + 0x18) = lVar8;
          *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
joined_r0x0010e4cf:
      if (sVar14 != 0x97) {
        return lVar8;
      }
      sljit_emit_op2(piVar4,0x42,0xc,0,0xc,0);
      sljit_emit_op1(piVar4,0x20,0x8c,0,0x7f,0);
      lVar8 = *(long *)(param_2 + 0x38);
      lVar12 = sljit_emit_jump(piVar4,0x24);
      if ((lVar12 != 0) && (lVar8 != 0)) {
        *(long *)(lVar12 + 0x18) = lVar8;
        *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar8 = sljit_emit_label(piVar4);
      if (lVar8 == 0) {
        return 0;
      }
      if (lVar13 == 0) {
        return lVar8;
      }
      *(long *)(lVar13 + 0x18) = lVar8;
      *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      return lVar8;
    }
    sVar16 = 0x87;
    lVar13 = sljit_emit_label(piVar4);
    plVar15 = *(long **)(param_2 + 0x18);
    if (plVar15 == (long *)0x0) {
      return lVar13;
    }
LAB_0010e77b:
    do {
      lVar8 = *plVar15;
      if ((lVar8 != 0) && (lVar13 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar13;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
      plVar15 = (long *)plVar15[1];
    } while (plVar15 != (long *)0x0);
    if (sVar16 != 0x97) {
      return lVar13;
    }
  }
  sljit_emit_op1(piVar4,0x20,0x8c,0,0x7f,0);
  lVar13 = *(long *)(param_2 + 0x38);
  lVar12 = sljit_emit_cmp(piVar4,1,2,0,0x7f,0);
  lVar8 = lVar13;
  lVar6 = lVar12;
joined_r0x0010e6c1:
  if ((lVar6 != 0) && (lVar8 != 0)) {
    *(long *)(lVar12 + 0x18) = lVar13;
    *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
  }
  piVar4 = (int *)*param_1;
  if (*piVar4 == 0) {
    piVar4[0x26] = 0;
    lVar12 = emit_lea_binary(piVar4,0xc,0,0xc,0,0x7f,8);
    if ((int)lVar12 == 4) {
      lVar12 = 0x7f;
      emit_cum_binary(piVar4,0x5030100,0xc,0,0xc,0,0x7f,8);
    }
  }
  return lVar12;
}



void fast_forward_first_char2(undefined8 *param_1,ushort param_2,ushort param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  bool bVar12;
  
  iVar2 = *(int *)((long)param_1 + 0x5c);
  piVar3 = (int *)*param_1;
  if (iVar2 == 0) {
    if (0 < (int)param_4) {
      sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,(long)(int)(param_4 * 2));
    }
  }
  else {
    sljit_emit_op1(piVar3,0x20,1,0,0x8e,(long)iVar2);
    if (0 < (int)param_4) {
      sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,(long)(int)(param_4 * 2));
    }
    sljit_emit_op1(piVar3,0x20,3,0,0xd,0);
    sljit_emit_op2(piVar3,0x40,1,0,1,0,0x7f,(long)(int)(param_4 * 2 + 2));
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      puVar9 = (undefined1 *)emit_x86_instruction(piVar3,1,0xd,0,1,0);
      if (puVar9 != (undefined1 *)0x0) {
        *puVar9 = 0x3b;
      }
    }
    sljit_emit_select_isra_0(piVar3,4,0xd,1,0,0xd);
  }
  if (cpu_feature_list == 0) {
    get_cpu_features();
  }
  if ((cpu_feature_list & 4) != 0) {
    fast_forward_char_simd(param_1,param_2,param_3,param_4);
    if (0 < (int)param_4) {
      sljit_emit_op2(piVar3,0x42,2,0,2,0,0x7f,(long)(int)(param_4 * 2));
    }
    goto joined_r0x0010ec1e;
  }
  lVar5 = sljit_emit_label(piVar3);
  lVar6 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
  if ((*(int *)(param_1 + 0x14) == 1) && (*piVar3 == 0)) {
    lVar7 = *(long *)(piVar3 + 0x18);
    lVar8 = *(long *)(lVar7 + 8);
    uVar1 = lVar8 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar7 + 8) = uVar1;
      plVar11 = (long *)(lVar7 + 0x10 + lVar8);
    }
    else {
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar3 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar10 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010e8d4;
      }
      *puVar10 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar10;
      plVar11 = puVar10 + 2;
      puVar10[1] = 0x10;
    }
    lVar7 = param_1[0x2d];
    *plVar11 = lVar6;
    plVar11[1] = lVar7;
    param_1[0x2d] = plVar11;
  }
LAB_0010e8d4:
  sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,2);
  bVar12 = lVar5 != 0;
  if (param_2 == param_3) {
    lVar7 = sljit_emit_cmp(piVar3,1,1,0,0x7f,param_2);
    if ((lVar7 != 0) && (bVar12)) {
      *(long *)(lVar7 + 0x18) = lVar5;
      *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  else {
    uVar4 = param_3 ^ param_2;
    if ((uVar4 - 1 & uVar4) == 0) {
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_cum_binary(piVar3,0xd0b0908,1,0,1,0,0x7f,uVar4);
      }
      lVar7 = sljit_emit_cmp(piVar3,1,1,0,0x7f,param_3 | param_2);
      if ((lVar7 != 0) && (bVar12)) {
        *(long *)(lVar7 + 0x18) = lVar5;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    else {
      lVar7 = sljit_emit_cmp(piVar3,0,1,0,0x7f,param_2);
      lVar8 = sljit_emit_cmp(piVar3,1,1,0,0x7f,param_3);
      if ((lVar8 != 0) && (bVar12)) {
        *(long *)(lVar8 + 0x18) = lVar5;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar8 = sljit_emit_label(piVar3);
      if ((lVar8 != 0) && (lVar7 != 0)) {
        *(long *)(lVar7 + 0x18) = lVar8;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (0 < (int)param_4)) {
    sljit_emit_op1(piVar3,0x23,1,0,0x82,(long)(int)(~param_4 * 2));
    jumpto_if_not_utf_char_start_constprop_0(piVar3,lVar5);
  }
  sljit_emit_op2(piVar3,0x42,2,0,2,0,0x7f);
  if (((*(int *)(param_1 + 0x14) != 1) && (lVar5 = sljit_emit_label(piVar3), lVar5 != 0)) &&
     (lVar6 != 0)) {
    *(long *)(lVar6 + 0x18) = lVar5;
    *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
  }
joined_r0x0010ec1e:
  if (iVar2 != 0) {
    sljit_emit_op1(piVar3,0x20,0xd,0,3,0);
    return;
  }
  return;
}



void read_char_isra_0(undefined8 *param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  piVar3 = (int *)*param_1;
  sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,2);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  if (param_2 < 0xd800) {
    if ((param_4 & 1) == 0) {
      return;
    }
    if ((*(int *)((long)param_1 + 0x1e4) != 0) && ((param_4 & 4) == 0)) {
LAB_0010f180:
      uVar9 = 0xd800;
      sljit_emit_op2(piVar3,0x42,4,0,1,0,0x7f);
      lVar5 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x800);
      if ((param_4 & 2) == 0) {
        uVar9 = sljit_emit_jump(piVar3,0x25,uVar9);
        if (*piVar3 == 0) {
          lVar6 = *(long *)(piVar3 + 0x18);
          lVar4 = *(long *)(lVar6 + 8);
          uVar1 = lVar4 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar6 + 8) = uVar1;
            puVar8 = (undefined8 *)(lVar6 + 0x10 + lVar4);
          }
          else {
            puVar7 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar7 == (undefined8 *)0x0) goto LAB_0010f40e;
            *puVar7 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar7;
            puVar8 = puVar7 + 2;
            puVar7[1] = 0x10;
          }
          uVar2 = param_1[0x40];
          *puVar8 = uVar9;
          puVar8[1] = uVar2;
          param_1[0x40] = puVar8;
        }
      }
      else {
        uVar9 = sljit_emit_jump(piVar3,0x25,uVar9);
        if (*piVar3 == 0) {
          lVar6 = *(long *)(piVar3 + 0x18);
          lVar4 = *(long *)(lVar6 + 8);
          uVar1 = lVar4 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar6 + 8) = uVar1;
            puVar8 = (undefined8 *)(lVar6 + 0x10 + lVar4);
          }
          else {
            puVar7 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar7 == (undefined8 *)0x0) {
LAB_0010f40e:
              *piVar3 = 2;
              goto LAB_0010f251;
            }
            *puVar7 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar7;
            puVar8 = puVar7 + 2;
            puVar7[1] = 0x10;
          }
          uVar2 = param_1[0x41];
          *puVar8 = uVar9;
          puVar8[1] = uVar2;
          param_1[0x41] = puVar8;
        }
      }
LAB_0010f251:
      if ((param_3 != (undefined8 *)0x0) &&
         (uVar9 = sljit_emit_cmp(piVar3,0,1,0,0x7f,0xffffffffffffffff), *piVar3 == 0)) {
        lVar6 = *(long *)(piVar3 + 0x18);
        lVar4 = *(long *)(lVar6 + 8);
        uVar1 = lVar4 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar6 + 8) = uVar1;
          puVar8 = (undefined8 *)(lVar6 + 0x10 + lVar4);
        }
        else {
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar7 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0010f2e4;
          }
          *puVar7 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar7;
          puVar8 = puVar7 + 2;
          puVar7[1] = 0x10;
        }
        uVar2 = *param_3;
        *puVar8 = uVar9;
        puVar8[1] = uVar2;
        *param_3 = puVar8;
      }
LAB_0010f2e4:
      lVar6 = sljit_emit_label(piVar3);
      if (lVar5 == 0) {
        return;
      }
      if (lVar6 == 0) {
        return;
      }
      *(long *)(lVar5 + 0x18) = lVar6;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
      return;
    }
  }
  else {
    if ((*(int *)((long)param_1 + 0x1e4) != 0) && ((param_4 & 4) == 0)) goto LAB_0010f180;
    if (0xffff < param_2) {
      sljit_emit_op2(piVar3,0x42,4,0,1,0,0x7f,0xd800);
      lVar5 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x400);
      sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_shift_with_flags(piVar3,0x20,0,4,0,4,0,0x7f,10);
      }
      sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,2);
      sljit_emit_op2(piVar3,0x40,1,0,1,0,0x7f,0x2400);
      sljit_emit_op2(piVar3,0x40,1,0,1,0,4,0);
      lVar6 = sljit_emit_label(piVar3);
      goto joined_r0x0010f046;
    }
  }
  sljit_emit_op2(piVar3,0x42,4,0,1,0,0x7f,0xd800);
  if (cpu_feature_list == 0) {
    get_cpu_features();
  }
  if ((cpu_feature_list & 0x20) != 0) {
    if ((param_4 & 1) == 0) {
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_cmp_binary(piVar3,4,0,0x7f,0x400);
      }
    }
    else {
      sljit_emit_op2(piVar3,0x40,5,0,2,0,0x7f,2);
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_cmp_binary(piVar3,4,0,0x7f,0x400);
      }
      sljit_emit_select_isra_0(piVar3,2,2,5,0,2);
    }
    if (param_2 < 0xd800) {
      return;
    }
    sljit_emit_select_isra_0(piVar3,2,1,0x7f,0x10000,1);
    return;
  }
  lVar5 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x400);
  if ((param_4 & 1) != 0) {
    sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f);
  }
  if (0xd7ff < param_2) {
    sljit_emit_op1(piVar3,0x20,1,0,0x7f,0x10000);
  }
  lVar6 = sljit_emit_label(piVar3);
joined_r0x0010f046:
  if ((lVar5 != 0) && (lVar6 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar6;
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
  }
  return;
}



void check_wordboundary(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  long *local_58;
  long *local_50;
  long *local_48;
  long local_40;
  
  piVar4 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  if (*piVar4 == 0) {
    piVar4[0x26] = 1;
    puVar6 = (undefined1 *)emit_x86_instruction(piVar4,1,0,0,0x8e,0);
    if (puVar6 != (undefined1 *)0x0) {
      *puVar6 = 0x8f;
    }
  }
  sljit_emit_op1(piVar4,0x20,1,0,9,0);
  sljit_emit_op1(piVar4,0x20,4,0,0x81,0x10);
  sljit_emit_op1(piVar4,0x20,3,0,0x7f,0);
  lVar7 = sljit_emit_cmp(piVar4,5,2,0,4,0);
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    if (*(int *)(param_1 + 0x14) == 1) {
      peek_char_back(param_1,0x7fffffff,0);
    }
    else {
      move_back(param_1,0,1);
      uVar8 = *param_1;
      if (*(int *)(param_1 + 0x14) == 2) {
        sljit_emit_op2(uVar8,0x40,1,0,0x8e,(long)*(int *)((long)param_1 + 0x54),0x7f,1);
        lVar10 = sljit_emit_cmp(uVar8,5,1,0,2,0);
        sljit_emit_op1(uVar8,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
        lVar13 = sljit_emit_label(uVar8);
        lVar11 = lVar13;
        lVar12 = lVar10;
joined_r0x0010fcae:
        if ((lVar12 != 0) && (lVar11 != 0)) {
          *(long *)(lVar10 + 0x18) = lVar13;
          *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      else if (*(int *)(param_1 + 0x14) == 4) {
        lVar10 = sljit_emit_cmp(uVar8,5,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
        sljit_emit_op1(uVar8,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
        lVar13 = sljit_emit_label(uVar8);
        lVar11 = lVar10;
        lVar12 = lVar13;
        goto joined_r0x0010fcae;
      }
      read_char_isra_0(param_1,0x7fffffff,0,1);
    }
  }
  else {
    peek_char_back(param_1,0x7fffffff,&local_50);
    if (*(int *)(param_1 + 0x14) == 1) goto joined_r0x0010f812;
    sljit_emit_op1(piVar4,0x20,5,0,1,0);
    sljit_emit_op1(piVar4,0x20,4,0,2,0);
    move_back(param_1,0,1);
    uVar8 = *param_1;
    if (*(int *)(param_1 + 0x14) == 2) {
      sljit_emit_op2(uVar8,0x40,1,0,0x8e,(long)*(int *)((long)param_1 + 0x54),0x7f,1);
      lVar10 = sljit_emit_cmp(uVar8,5,1,0,2,0);
      sljit_emit_op1(uVar8,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
      lVar11 = sljit_emit_label(uVar8);
joined_r0x0010fdce:
      if ((lVar10 != 0) && (lVar11 != 0)) {
        *(long *)(lVar10 + 0x18) = lVar11;
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    else if (*(int *)(param_1 + 0x14) == 4) {
      lVar10 = sljit_emit_cmp(uVar8,5,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
      sljit_emit_op1(uVar8,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
      lVar11 = sljit_emit_label(uVar8);
      goto joined_r0x0010fdce;
    }
    sljit_emit_op1(piVar4,0x20,1,0,5,0);
    sljit_emit_op1(piVar4,0x20,2,0,4,0);
  }
joined_r0x0010f812:
  if (param_2 == 0) {
    lVar10 = sljit_emit_cmp(piVar4,4,1,0,0x7f,0xff);
    sljit_emit_op1(piVar4,0x21,1,0,0x81,param_1[0x1d]);
    if (*piVar4 == 0) {
      piVar4[0x26] = 0;
      emit_shift_with_flags(piVar4,0x28,0,1,0,1,0,0x7f,4);
      if (*piVar4 == 0) {
        piVar4[0x26] = 0;
        emit_cum_binary(piVar4,0x25232120,3,0,1,0,0x7f,1);
      }
    }
    lVar11 = sljit_emit_label(piVar4);
    if ((lVar11 != 0) && (lVar10 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar11;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar10 = sljit_emit_label(piVar4);
    if ((lVar10 != 0) && (lVar7 != 0)) {
      *(long *)(lVar7 + 0x18) = lVar10;
      *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
    }
    sljit_emit_op1(piVar4,0x20,4,0,0x7f,0);
    check_str_end_constprop_0(param_1,&local_58);
    peek_char(param_1,0x7fffffff,0x8e,8,&local_48);
    lVar7 = sljit_emit_label(piVar4);
    sljit_emit_op1(piVar4,0x20,4,0,0x7f,0);
    lVar10 = sljit_emit_cmp(piVar4,4,1,0,0x7f,0xff);
    sljit_emit_op1(piVar4,0x21,4,0,0x81,param_1[0x1d]);
    if (*piVar4 == 0) {
      piVar4[0x26] = 0;
      emit_shift_with_flags(piVar4,0x28,0,4,0,4,0,0x7f,4);
      if (*piVar4 == 0) {
        piVar4[0x26] = 0;
        emit_cum_binary(piVar4,0x25232120,4,0,4,0,0x7f,1);
      }
    }
    lVar11 = sljit_emit_label(piVar4);
    if ((lVar11 != 0) && (lVar10 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar11;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto LAB_0010fa70;
  }
  uVar8 = sljit_emit_jump(piVar4,0x25);
  if (*piVar4 == 0) {
    lVar10 = *(long *)(piVar4 + 0x18);
    uVar1 = *(long *)(lVar10 + 8) + 0x10;
    if (uVar1 < 0xff1) {
      puVar9 = (undefined8 *)(lVar10 + 0x10 + *(long *)(lVar10 + 8));
      uVar2 = param_1[0x3f];
      *(ulong *)(lVar10 + 8) = uVar1;
      *puVar9 = uVar8;
      puVar9[1] = uVar2;
      param_1[0x3f] = puVar9;
LAB_0010f60c:
      piVar4[0x26] = 0;
      emit_shift_with_flags(piVar4,0x20,0,4,0,0x7f,1,1,0);
      if (*piVar4 == 0) {
        piVar4[0x26] = 0;
        emit_test_binary(piVar4,4,0,0x7f,0x1f3e0);
      }
    }
    else {
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar4 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar9 == (undefined8 *)0x0) {
        *piVar4 = 2;
      }
      else {
        uVar2 = param_1[0x3f];
        *puVar9 = *(undefined8 *)(piVar4 + 0x18);
        iVar3 = *piVar4;
        *(undefined8 **)(piVar4 + 0x18) = puVar9;
        puVar9[1] = 0x10;
        puVar9[2] = uVar8;
        puVar9[3] = uVar2;
        param_1[0x3f] = puVar9 + 2;
        if (iVar3 == 0) goto LAB_0010f60c;
      }
    }
  }
  sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,3,1);
  lVar10 = sljit_emit_label(piVar4);
  if ((lVar7 != 0) && (lVar10 != 0)) {
    *(long *)(lVar7 + 0x18) = lVar10;
    *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
  }
  sljit_emit_op1(piVar4,0x20,4,0,0x7f,0);
  check_str_end_constprop_0(param_1,&local_58);
  peek_char(param_1,0x7fffffff,0x8e,8,&local_48);
  lVar7 = sljit_emit_label(piVar4);
  uVar8 = sljit_emit_jump(piVar4,0x25);
  if (*piVar4 == 0) {
    lVar10 = *(long *)(piVar4 + 0x18);
    uVar1 = *(long *)(lVar10 + 8) + 0x10;
    if (uVar1 < 0xff1) {
      puVar9 = (undefined8 *)(lVar10 + 0x10 + *(long *)(lVar10 + 8));
      uVar2 = param_1[0x3f];
      *(ulong *)(lVar10 + 8) = uVar1;
      *puVar9 = uVar8;
      puVar9[1] = uVar2;
      param_1[0x3f] = puVar9;
LAB_0010f782:
      piVar4[0x26] = 0;
      emit_shift_with_flags(piVar4,0x20,0,4,0,0x7f,1,1,0);
      if (*piVar4 == 0) {
        piVar4[0x26] = 0;
        emit_test_binary(piVar4,4,0,0x7f,0x1f3e0);
      }
    }
    else {
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar4 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar9 == (undefined8 *)0x0) {
        *piVar4 = 2;
      }
      else {
        uVar2 = param_1[0x3f];
        *puVar9 = *(undefined8 *)(piVar4 + 0x18);
        iVar3 = *piVar4;
        *(undefined8 **)(piVar4 + 0x18) = puVar9;
        puVar9[1] = 0x10;
        puVar9[2] = uVar8;
        puVar9[3] = uVar2;
        param_1[0x3f] = puVar9 + 2;
        if (iVar3 == 0) goto LAB_0010f782;
      }
    }
  }
  sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,1);
LAB_0010fa70:
  lVar10 = sljit_emit_label(piVar4);
  for (plVar5 = local_58; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
    lVar11 = *plVar5;
    if ((lVar11 != 0) && (lVar10 != 0)) {
      *(long *)(lVar11 + 0x18) = lVar10;
      *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  sljit_emit_op1(piVar4,0x20,1,0,0x8e,0);
  uVar8 = extraout_RDX;
  if (*piVar4 == 0) {
    piVar4[0x26] = 0;
    uVar8 = 3;
    emit_cum_binary(piVar4,0x35333130,4,0,4,0,3,0);
  }
  sljit_emit_op_src_constprop_0_isra_0(piVar4,1,uVar8);
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    lVar10 = sljit_emit_label(piVar4);
    for (plVar5 = local_50; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
      lVar11 = *plVar5;
      if ((lVar11 != 0) && (lVar10 != 0)) {
        *(long *)(lVar11 + 0x18) = lVar10;
        *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    peek_char(param_1,0x7fffffff,0x8e,8,0);
    lVar10 = sljit_emit_cmp(piVar4,1,1,0,0x7f,0xffffffffffffffff);
    if ((lVar10 != 0) && (lVar7 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar7;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
    sljit_emit_op1(piVar4,0x20,1,0,0x8e,0);
    sljit_emit_op1(piVar4,0x20,4,0,0x7f,0xffffffffffffffff);
    sljit_emit_op_src_constprop_0_isra_0(piVar4,1);
    lVar7 = sljit_emit_label(piVar4);
    for (plVar5 = local_48; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
      lVar10 = *plVar5;
      if ((lVar10 != 0) && (lVar7 != 0)) {
        *(long *)(lVar10 + 0x18) = lVar7;
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    sljit_emit_op1(piVar4,0x20,1,0,0x8e,0);
    sljit_emit_op1(piVar4,0x20,4,0,3,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      sljit_emit_op_src_constprop_0_isra_0(piVar4,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void fast_forward_char_pair_simd
               (undefined8 *param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6,
               uint param_7)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined8 local_78;
  uint local_70;
  undefined4 local_48;
  undefined1 local_44;
  long local_40;
  
  uVar4 = (param_2 - param_5) * 2;
  piVar2 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    sljit_emit_op1(piVar2,0x20,1,0,0x8e);
    sljit_emit_op1(piVar2,0x20,3,0,0xd,0);
    sljit_emit_op2(piVar2,0x40,1,0,1,0,0x7f,(long)(param_2 * 2 + 2));
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      puVar11 = (undefined1 *)emit_x86_instruction(piVar2,1,1,0,0xd,0);
      if (puVar11 != (undefined1 *)0x0) {
        *puVar11 = 0x3b;
      }
    }
    sljit_emit_select_isra_0(piVar2,2,0xd,1,0,0xd);
  }
  lVar5 = (long)(param_2 * 2);
  uVar18 = 0x7f;
  sljit_emit_op2(piVar2,0x40,2,0,2,0);
  uVar6 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
  if (*piVar2 == 0) {
    lVar8 = *(long *)(piVar2 + 0x18);
    lVar9 = *(long *)(lVar8 + 8);
    uVar1 = lVar9 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar8 + 8) = uVar1;
      puVar12 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2],lVar8,uVar1,uVar18,lVar5);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_00110127;
      }
      *puVar7 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar7;
      puVar12 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar18 = param_1[0x2d];
    *puVar12 = uVar6;
    puVar12[1] = uVar18;
    param_1[0x2d] = puVar12;
  }
LAB_00110127:
  if ((short)param_3 == (short)param_4) {
    sljit_emit_op1(piVar2,0x20,1,0,0x7f,(long)(int)(param_3 * 0x10000 + (param_3 & 0xffff)));
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,3,1,0);
    if ((short)param_6 != (short)param_7) {
      local_78 = 0;
      goto LAB_001101dd;
    }
    uVar13 = 0;
    sljit_emit_op1(piVar2,0x20,1,0,0x7f,(long)(int)(param_6 * 0x10000 + (param_6 & 0xffff)));
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,4,1,0);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,3,3);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,4,4);
    local_78 = 0;
  }
  else {
    uVar14 = (param_4 ^ param_3) & 0xffff;
    if ((uVar14 - 1 & uVar14) == 0) {
      sljit_emit_op1(piVar2,0x20,1,0,0x7f,
                     (long)(int)((param_4 | param_3) * 0x10000 + ((param_4 | param_3) & 0xffff)));
      sljit_emit_op1(piVar2,0x20,4,0,0x7f,(long)(int)(((param_4 ^ param_3) & 0xffff) * 0x10001));
      local_78 = 1;
    }
    else {
      sljit_emit_op1(piVar2,0x20,1,0,0x7f,(long)(int)(param_3 * 0x10000 + (param_3 & 0xffff)));
      sljit_emit_op1(piVar2,0x20,4,0,0x7f,(long)(int)(param_4 * 0x10000 + (param_4 & 0xffff)));
      local_78 = 2;
    }
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,3,1,0);
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,5,4,0);
    if ((short)param_6 == (short)param_7) {
      uVar13 = 0;
      sljit_emit_op1(piVar2,0x20,1,0,0x7f,(long)(int)(param_6 * 0x10000 + (param_6 & 0xffff)));
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,4,1,0);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,3,3);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,5,5);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,4,4);
    }
    else {
LAB_001101dd:
      uVar14 = (param_7 ^ param_6) & 0xffff;
      local_70 = (param_7 ^ param_6) & 0xffff;
      if ((uVar14 - 1 & uVar14) == 0) {
        uVar13 = 1;
        sljit_emit_op1(piVar2,0x20,1,0,0x7f,
                       (long)(int)((param_6 | param_7) * 0x10000 + ((param_6 | param_7) & 0xffff)));
        sljit_emit_op1(piVar2,0x20,4,0,0x7f,(long)(int)(local_70 * 0x10001));
      }
      else {
        uVar13 = 2;
        sljit_emit_op1(piVar2,0x20,1,0,0x7f,(long)(int)(param_6 * 0x10000 + (param_6 & 0xffff)));
        sljit_emit_op1(piVar2,0x20,4,0,0x7f,(long)(int)(param_7 * 0x10000 + (param_7 & 0xffff)));
      }
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,4,1,0);
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,6,4,0);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,3,3);
      if ((short)param_3 != (short)param_4) {
        sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,5,5);
      }
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,4,4);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,6,6);
    }
  }
  lVar5 = sljit_emit_label(piVar2);
  sljit_emit_op2(piVar2,0x42,1,0,2,0,0x7f,(ulong)uVar4);
  sljit_emit_op1(piVar2,0x20,4,0,2,0);
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_cum_binary(piVar2,0x25232120,2,0,2,0,0x7f,0xfffffffffffffff0);
  }
  sljit_emit_simd_mov_constprop_0_isra_0(piVar2,0x4004000,1,0);
  lVar15 = -(ulong)uVar4;
  lVar8 = sljit_emit_cmp(piVar2,3,1,0,2,0);
  sljit_emit_simd_mov_constprop_0_isra_0(piVar2,0x4000,2,lVar15);
  lVar9 = sljit_emit_jump(piVar2,0x24);
  lVar10 = sljit_emit_label(piVar2);
  if ((lVar10 != 0) && (lVar8 != 0)) {
    *(long *)(lVar8 + 0x18) = lVar10;
    *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
  }
  local_48 = 0xc86f0f66;
  sljit_emit_op_custom_isra_0(piVar2,&local_48,4);
  local_48 = CONCAT22(0xf973,(undefined2)local_48);
  local_44 = (undefined1)uVar4;
  sljit_emit_op_custom_isra_0(piVar2,&local_48,5);
  lVar8 = sljit_emit_label(piVar2);
  if ((lVar8 != 0) && (lVar9 != 0)) {
    *(long *)(lVar9 + 0x18) = lVar8;
    *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
  }
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_cum_binary(piVar2,0x25232120,4,0,4,0,0x7f,0xf);
  }
  iVar16 = 0;
  do {
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,uVar13,iVar16,1,3,6,4);
    iVar17 = iVar16 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,local_78,iVar16,0,2,5);
    iVar16 = iVar17;
  } while (iVar17 != 4);
  sljit_emit_simd_op2_constprop_0_isra_0(piVar2);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar2);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,4,0);
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_shift_with_flags(piVar2,0x28,0,1,0,1,0,4,0);
  }
  lVar8 = sljit_emit_cmp(piVar2,1,1,0,0x7f,0);
  sljit_emit_op2(piVar2,0x42,2,0,2,0,4,0);
  lVar9 = sljit_emit_label(piVar2);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,0x10);
  uVar6 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
  if (*piVar2 == 0) {
    lVar10 = *(long *)(piVar2 + 0x18);
    lVar3 = *(long *)(lVar10 + 8);
    uVar1 = lVar3 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar10 + 8) = uVar1;
      puVar12 = (undefined8 *)(lVar10 + 0x10 + lVar3);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_00110641;
      }
      *puVar7 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar7;
      puVar12 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar18 = param_1[0x2d];
    *puVar12 = uVar6;
    puVar12[1] = uVar18;
    param_1[0x2d] = puVar12;
  }
LAB_00110641:
  sljit_emit_simd_mov_constprop_0_isra_0(piVar2,0x4004000,1,0);
  sljit_emit_simd_mov_constprop_0_isra_0(piVar2,0x4000,2,lVar15);
  iVar16 = 0;
  do {
    uVar19 = 0;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,local_78,iVar16,0,2,5,4);
    iVar17 = iVar16 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,uVar13,iVar16,1,3,6,CONCAT44(uVar19,7));
    iVar16 = iVar17;
  } while (iVar17 != 4);
  sljit_emit_simd_op2_constprop_0_isra_0(piVar2);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar2);
  lVar10 = sljit_emit_cmp(piVar2,0,1,0,0x7f,0);
  if ((lVar9 != 0) && (lVar10 != 0)) {
    *(long *)(lVar10 + 0x18) = lVar9;
    *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar9 = sljit_emit_label(piVar2);
  if ((lVar8 != 0) && (lVar9 != 0)) {
    *(long *)(lVar8 + 0x18) = lVar9;
    *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
  }
  local_48 = CONCAT13(local_48._3_1_,0xc0bc0f);
  sljit_emit_op_custom_isra_0(piVar2,&local_48,3);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,1,0);
  uVar6 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
  if (*piVar2 == 0) {
    lVar8 = *(long *)(piVar2 + 0x18);
    lVar9 = *(long *)(lVar8 + 8);
    uVar1 = lVar9 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar8 + 8) = uVar1;
      puVar12 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_00110813;
      }
      *puVar7 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar7;
      puVar12 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar18 = param_1[0x2d];
    *puVar12 = uVar6;
    puVar12[1] = uVar18;
    param_1[0x2d] = puVar12;
  }
LAB_00110813:
  if (*(int *)(param_1 + 0x3c) == 0) goto LAB_00110828;
  sljit_emit_op1(piVar2,0x23,1,0,0x82,(long)(param_2 * -2));
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_cum_binary(piVar2,0x25232120,1,0,1,0,0x7f,0xfc00);
  }
  lVar8 = sljit_emit_cmp(piVar2,1,1,0,0x7f,0xdc00);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,2);
  lVar9 = sljit_emit_cmp(piVar2,2,2,0,0xd,0);
  if ((lVar5 != 0) && (lVar9 != 0)) {
    *(long *)(lVar9 + 0x18) = lVar5;
    *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
  }
  uVar6 = sljit_emit_jump(piVar2,0x24);
  if (*piVar2 == 0) {
    lVar5 = *(long *)(piVar2 + 0x18);
    lVar9 = *(long *)(lVar5 + 8);
    uVar1 = lVar9 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar5 + 8) = uVar1;
      puVar12 = (undefined8 *)(lVar5 + 0x10 + lVar9);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_00110cf3;
      }
      *puVar7 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar7;
      puVar12 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar18 = param_1[0x2d];
    *puVar12 = uVar6;
    puVar12[1] = uVar18;
    param_1[0x2d] = puVar12;
  }
LAB_00110cf3:
  lVar5 = sljit_emit_label(piVar2);
  if ((lVar5 != 0) && (lVar8 != 0)) {
    *(long *)(lVar8 + 0x18) = lVar5;
    *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
  }
LAB_00110828:
  sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f);
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    sljit_emit_op1(piVar2,0x20,0xd,0,3,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_recurse_data_isra_0
               (undefined8 *param_1,ushort *param_2,ushort *param_3,uint param_4,int param_5,
               uint param_6)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  ushort uVar10;
  byte *pbVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  long in_FS_OFFSET;
  bool bVar18;
  uint local_108;
  undefined4 local_100;
  long local_c8 [9];
  undefined8 local_80;
  undefined4 local_78;
  int aiStack_74 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  long local_40;
  
  param_5 = param_5 * 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  memset((void *)param_1[0x11],0,(long)*(int *)(param_1 + 0x10));
  uVar4 = param_4 - 2;
  if (param_4 == 0) {
    local_58 = _LC28;
    local_68 = __LC29;
    uStack_60 = _UNK_001352b8;
    local_80 = 0xffffffffffffffff;
    local_78 = 0xffffffff;
    local_c8[8] = *param_1;
    local_50 = 0;
    bVar3 = true;
    local_100 = 0xc;
  }
  else {
    if (param_4 - 1 < 3) {
      local_80 = 0xffffffffffffffff;
      local_78 = 0xffffffff;
      local_58 = _LC28;
      local_50 = 0;
      local_c8[8] = *param_1;
      local_68 = __LC29;
      uStack_60 = _UNK_001352b8;
      if (1 < uVar4) {
        delayed_mem_copy_move(local_c8 + 8,0xc,(long)param_5,0xe,(long)*(int *)(param_1 + 10));
      }
      bVar3 = false;
      local_100 = 0xc;
      goto LAB_00110e95;
    }
    local_80 = 0xffffffffffffffff;
    local_58 = _LC25;
    local_c8[8] = *param_1;
    local_78 = 0xffffffff;
    local_50 = 0;
    local_68 = __LC26;
    uStack_60 = _UNK_001352a8;
    delayed_mem_copy_move(local_c8 + 8,4,(long)param_5,0xe,(long)*(int *)(param_1 + 10));
    bVar3 = false;
    local_100 = 4;
  }
  delayed_mem_copy_move(local_c8 + 8,0xe,(long)*(int *)(param_1 + 10),local_100,(long)param_5);
LAB_00110e95:
  param_5 = param_5 + 8;
  plVar1 = local_c8 + 8;
  local_108 = param_4 & 0xfffffffd;
  if (param_2 < param_3) {
    do {
      uVar10 = *param_2;
      if (0x8f < uVar10) {
        uVar10 = uVar10 - 0x90;
        if (uVar10 < 0x13) {
          uVar8 = 1L << ((byte)uVar10 & 0x3f);
          if ((uVar8 & 0x51400) != 0) {
            iVar5 = 0;
            if ((param_6 & 1) != 0) {
              pbVar11 = (byte *)(((long)*(int *)(param_1 + 0xc) >> 6) + param_1[0x11]);
              bVar2 = *pbVar11;
              bVar9 = (byte)(1 << ((byte)((long)*(int *)(param_1 + 0xc) >> 3) & 7));
              if ((bVar2 & bVar9) == 0) {
                iVar5 = 1;
                *pbVar11 = bVar2 | bVar9;
                local_c8[2] = (long)*(int *)(param_1 + 0xc);
              }
            }
            uVar14 = *(uint *)((long)param_1 + 100);
            if (uVar14 != 0) {
              lVar13 = (long)(int)uVar14;
              uVar14 = 0;
              pbVar11 = (byte *)((lVar13 >> 6) + param_1[0x11]);
              bVar2 = *pbVar11;
              bVar9 = (byte)(1 << ((byte)(lVar13 >> 3) & 7));
              if ((bVar2 & bVar9) == 0) {
                uVar14 = 1;
                *pbVar11 = bVar2 | bVar9;
                local_c8[0] = (long)*(int *)((long)param_1 + 100);
              }
            }
            puVar6 = param_2 + (ulong)param_2[1] + 3;
            iVar15 = 0;
            goto LAB_00111492;
          }
          if (uVar10 == 0xf) {
            puVar6 = param_2 + 1;
            pbVar11 = (byte *)(((long)*(int *)((long)param_1 + 100) >> 6) + param_1[0x11]);
            bVar2 = *pbVar11;
            bVar9 = (byte)(1 << ((byte)((long)*(int *)((long)param_1 + 100) >> 3) & 7));
            if ((bVar2 & bVar9) != 0) goto LAB_001119f0;
            *pbVar11 = bVar2 | bVar9;
            local_c8[0] = (long)*(int *)((long)param_1 + 100);
            goto joined_r0x0011180d;
          }
          if ((uVar8 & 1) != 0) goto switchD_00110efa_caseD_7f;
        }
switchD_00110efa_caseD_50:
        puVar6 = (ushort *)next_opcode();
        goto LAB_00110f20;
      }
      if (uVar10 < 0x4e) {
        if (uVar10 != 3) {
          if (0x2c < (ushort)(uVar10 - 0x21)) goto switchD_00110efa_caseD_50;
          uVar8 = 1L << ((byte)(uVar10 - 0x21) & 0x3f);
          if ((uVar8 & 0x1d00e807403a) == 0) {
            if ((uVar8 & 0x2801400a005) == 0) {
              if ((uVar8 & 0x3001800c0) != 0) goto switchD_00110efa_caseD_4e;
              goto switchD_00110efa_caseD_50;
            }
            uVar14 = 0;
            local_c8[0] = (long)*(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
            if (local_c8[0] != 0) {
              pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
              bVar2 = *pbVar11;
              bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
              if ((bVar2 & bVar9) == 0) {
                uVar14 = 2;
                *pbVar11 = bVar2 | bVar9;
                local_c8[1] = local_c8[0] + 8;
              }
            }
          }
          else {
            uVar14 = 0;
            local_c8[0] = (long)*(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
            if (local_c8[0] != 0) {
              pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
              bVar2 = *pbVar11;
              bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
              if ((bVar2 & bVar9) == 0) {
                uVar14 = 1;
                *pbVar11 = bVar2 | bVar9;
              }
            }
          }
          iVar15 = *(int *)(param_1 + 0x3c);
          puVar6 = param_2 + 2;
          if (iVar15 == 0) goto LAB_00111848;
          if ((param_2[1] & 0xfc00) != 0xd800) goto LAB_0011148b;
          puVar6 = param_2 + 3;
          iVar5 = 0;
          iVar15 = 0;
          goto LAB_00111492;
        }
        iVar16 = 0;
        if ((param_6 & 1) != 0) {
          pbVar11 = (byte *)(((long)*(int *)((long)param_1 + 0x44) >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)((long)*(int *)((long)param_1 + 0x44) >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            iVar16 = 1;
            *pbVar11 = bVar2 | bVar9;
            local_c8[2] = (long)*(int *)((long)param_1 + 0x44);
          }
        }
        puVar6 = param_2 + 1;
        if (uVar4 < 2) {
          iVar5 = 0;
          iVar12 = 0;
          goto LAB_00111020;
        }
LAB_0011195a:
        iVar12 = 0;
        bVar18 = false;
        if ((param_4 & 0xfffffffd) == 1) goto LAB_00111037;
        bVar18 = param_4 != 1;
        goto LAB_0011103a;
      }
      switch(uVar10) {
      case 0x4e:
      case 0x4f:
switchD_00110efa_caseD_4e:
        uVar14 = 0;
        local_c8[0] = (long)*(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
        if (local_c8[0] != 0) {
          pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            uVar14 = 2;
            *pbVar11 = bVar2 | bVar9;
            local_c8[1] = local_c8[0] + 8;
          }
        }
        iVar15 = *(int *)(param_1 + 0x3c);
        puVar6 = param_2 + 3;
        if (iVar15 == 0) {
LAB_00111848:
          iVar5 = 0;
        }
        else {
          if ((param_2[2] & 0xfc00) == 0xd800) {
            puVar6 = param_2 + 4;
            iVar5 = 0;
            iVar15 = 0;
            break;
          }
LAB_0011148b:
          iVar5 = 0;
          iVar15 = 0;
        }
        break;
      default:
        goto switchD_00110efa_caseD_50;
      case 0x55:
      case 0x57:
        local_c8[0] = (long)*(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
        if (local_c8[0] != 0) {
          pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            puVar6 = param_2 + 1;
            *pbVar11 = bVar2 | bVar9;
            local_c8[1] = local_c8[0] + 8;
LAB_0011140f:
            iVar16 = 0;
            iVar5 = 0;
            iVar12 = 0;
            iVar15 = 0;
            uVar14 = 2;
            if (1 < uVar4) goto LAB_001114a6;
            iVar5 = 0x10;
            goto LAB_00111020;
          }
        }
        goto LAB_00111070;
      case 0x56:
      case 0x58:
      case 0x59:
      case 0x5a:
        local_c8[0] = (long)*(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
        if (local_c8[0] != 0) {
          pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            puVar6 = param_2 + 1;
            *pbVar11 = bVar2 | bVar9;
            goto LAB_001110ea;
          }
        }
LAB_00111070:
        puVar6 = param_2 + 1;
joined_r0x00111399:
        if (uVar4 < 2) {
          iVar16 = 0;
          iVar12 = 0;
          iVar5 = 0;
          goto LAB_00111020;
        }
LAB_00111080:
        if ((param_4 & 0xfffffffd) == 1) {
          iVar12 = 0;
          bVar18 = false;
          iVar16 = 0;
          goto LAB_00111034;
        }
        if ((param_4 == 1) || (param_4 == 4)) {
          iVar16 = 0;
          goto LAB_00111047;
        }
        goto LAB_00110f20;
      case 0x5b:
      case 0x5c:
        local_c8[0] = (long)*(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
        if (local_c8[0] != 0) {
          pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            puVar6 = param_2 + 2;
            *pbVar11 = bVar2 | bVar9;
            local_c8[1] = local_c8[0] + 8;
            goto LAB_0011140f;
          }
        }
        goto LAB_00111390;
      case 0x6e:
      case 0x6f:
      case 0x70:
        lVar13 = 0x22;
        if (uVar10 == 0x70) {
          lVar13 = (ulong)param_2[1] * 2;
        }
        puVar6 = (ushort *)((long)param_2 + lVar13);
        iVar5 = *(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
        if (iVar5 == 0) {
          if (uVar4 < 2) {
            iVar12 = 0;
            goto LAB_00111364;
          }
          goto LAB_00111080;
        }
        lVar13 = (long)iVar5;
        local_c8[0] = lVar13;
        iVar5 = get_class_iterator_size();
        if (iVar5 == 2) {
          pbVar11 = (byte *)((lVar13 >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)(lVar13 >> 3) & 7));
          if ((bVar2 & bVar9) != 0) goto LAB_001110ea;
          iVar16 = 0;
          iVar5 = 0;
          *pbVar11 = bVar2 | bVar9;
          local_c8[1] = lVar13 + 8;
          iVar12 = 0;
          iVar15 = 0;
          uVar14 = 2;
          if (1 < uVar4) {
            uVar14 = 2;
            goto LAB_001114a6;
          }
        }
        else {
LAB_001110ea:
          iVar15 = 0;
joined_r0x00111c20:
          iVar16 = 0;
          uVar14 = 1;
          iVar5 = 0;
          iVar12 = iVar15;
          if (1 < uVar4) goto LAB_001114a6;
        }
        goto LAB_00111100;
      case 0x75:
        iVar16 = 0;
        if ((param_6 & 1) != 0) {
          iVar16 = *(int *)((long)param_1 + 0xac);
          if (iVar16 != 0) {
            iVar16 = 0;
            pbVar11 = (byte *)(((long)*(int *)((long)param_1 + 0x44) >> 6) + param_1[0x11]);
            bVar2 = *pbVar11;
            bVar9 = (byte)(1 << ((byte)((long)*(int *)((long)param_1 + 0x44) >> 3) & 7));
            if ((bVar2 & bVar9) == 0) {
              iVar16 = 1;
              *pbVar11 = bVar2 | bVar9;
              local_c8[2] = (long)*(int *)((long)param_1 + 0x44);
            }
          }
          iVar5 = *(int *)(param_1 + 0xc);
          if (iVar5 != 0) {
            pbVar11 = (byte *)(((long)iVar5 >> 6) + param_1[0x11]);
            bVar2 = *pbVar11;
            bVar9 = (byte)(1 << ((byte)((long)iVar5 >> 3) & 7));
            if ((bVar2 & bVar9) == 0) {
              *pbVar11 = bVar2 | bVar9;
              lVar13 = (long)iVar16;
              iVar16 = iVar16 + 1;
              local_c8[lVar13 + 2] = (long)*(int *)(param_1 + 0xc);
            }
          }
        }
        iVar12 = *(int *)(param_1 + 0xd);
        if (iVar12 != 0) {
          lVar13 = (long)iVar12;
          pbVar11 = (byte *)((lVar13 >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          iVar12 = 0;
          bVar9 = (byte)(1 << ((byte)(lVar13 >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            *pbVar11 = bVar2 | bVar9;
            local_c8[4] = (long)*(int *)(param_1 + 0xd);
            iVar12 = 1;
          }
        }
        puVar6 = param_2 + 2;
        iVar5 = 0;
        if (uVar4 < 2) goto LAB_00111020;
        goto joined_r0x00111525;
      case 0x79:
        lVar13 = param_1[2];
        lVar7 = param_1[3];
        iVar12 = *(int *)(lVar7 + ((long)param_2 - lVar13 >> 1) * 4);
        local_c8[0] = (long)iVar12;
        if (local_c8[0] == 0) {
          puVar6 = param_2 + 2;
          if (1 < uVar4) {
LAB_00111958:
            iVar16 = 0;
            goto LAB_0011195a;
          }
          iVar5 = 0;
          iVar16 = 0;
          goto LAB_00111020;
        }
        pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
        bVar2 = *pbVar11;
        bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
        bVar18 = (bVar2 & bVar9) == 0;
        if (bVar18) {
          *pbVar11 = bVar2 | bVar9;
          lVar7 = param_1[3];
          lVar13 = param_1[2];
        }
        uVar14 = (uint)bVar18;
        iVar5 = 0;
        puVar6 = param_2 + (long)*(int *)(lVar7 + ((long)param_2 + (2 - lVar13) >> 1) * 4) + 2;
        iVar15 = 0;
        break;
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x88:
      case 0x8c:
      case 0x8d:
switchD_00110efa_caseD_7f:
        puVar6 = param_2 + 2;
        local_c8[0] = (long)*(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
        pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
        bVar2 = *pbVar11;
        bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
        if ((bVar2 & bVar9) != 0) {
LAB_001119f0:
          if (1 < uVar4) goto LAB_00111958;
          iVar5 = 0;
          iVar16 = 0;
          iVar12 = 0;
          goto LAB_00111020;
        }
        *pbVar11 = bVar2 | bVar9;
joined_r0x0011180d:
        if (uVar4 < 2) {
          iVar5 = 8;
          iVar16 = 0;
          iVar12 = 0;
          goto LAB_00111020;
        }
        iVar5 = 0;
        iVar15 = 0;
        uVar14 = 1;
        goto LAB_001114a6;
      case 0x89:
      case 0x8e:
        uVar10 = param_2[2];
        iVar12 = 0;
        local_c8[4] = (long)(int)((uint)uVar10 * 0x10 + *(int *)((long)param_1 + 0x44));
        pbVar11 = (byte *)((local_c8[4] >> 6) + param_1[0x11]);
        bVar2 = *pbVar11;
        bVar9 = (byte)(1 << ((byte)(local_c8[4] >> 3) & 7));
        if ((bVar2 & bVar9) == 0) {
          iVar12 = 2;
          *pbVar11 = bVar2 | bVar9;
          local_c8[5] = local_c8[4] + 8;
        }
        iVar5 = *(int *)(param_1 + 0xd);
        if (iVar5 != 0) {
          pbVar11 = (byte *)(((long)iVar5 >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)((long)iVar5 >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            *pbVar11 = bVar2 | bVar9;
            lVar13 = (long)iVar12;
            iVar12 = iVar12 + 1;
            local_c8[lVar13 + 4] = (long)*(int *)(param_1 + 0xd);
          }
        }
        if (*(char *)(param_1[5] + (ulong)uVar10) == '\0') {
          local_c8[0] = (long)(int)(*(int *)(param_1 + 8) + (uint)uVar10 * 8);
          pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            puVar6 = param_2 + 3;
            *pbVar11 = bVar2 | bVar9;
            iVar15 = iVar12;
            goto joined_r0x00111c20;
          }
        }
        puVar6 = param_2 + 3;
        iVar16 = 0;
        if (uVar4 < 2) {
LAB_00111364:
          iVar16 = 0;
          iVar5 = 0;
          goto LAB_00111020;
        }
        goto joined_r0x00111525;
      case 0x8a:
      case 0x8f:
        uVar10 = param_2[2];
        lVar13 = param_1[0x11];
        iVar15 = 0;
        local_c8[4] = (long)(int)((uint)uVar10 * 0x10 + *(int *)((long)param_1 + 0x44));
        pbVar11 = (byte *)((local_c8[4] >> 6) + lVar13);
        bVar2 = *pbVar11;
        bVar9 = (byte)(1 << ((byte)(local_c8[4] >> 3) & 7));
        if ((bVar2 & bVar9) == 0) {
          iVar15 = 2;
          local_c8[5] = local_c8[4] + 8;
          *pbVar11 = bVar2 | bVar9;
          lVar13 = param_1[0x11];
        }
        iVar5 = *(int *)(param_1 + 0xd);
        if (iVar5 != 0) {
          pbVar11 = (byte *)(((long)iVar5 >> 6) + lVar13);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)((long)iVar5 >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            *pbVar11 = bVar2 | bVar9;
            lVar7 = (long)iVar15;
            iVar15 = iVar15 + 1;
            lVar13 = param_1[0x11];
            local_c8[lVar7 + 4] = (long)*(int *)(param_1 + 0xd);
          }
        }
        local_c8[0] = (long)*(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
        pbVar11 = (byte *)((local_c8[0] >> 6) + lVar13);
        bVar2 = *pbVar11;
        bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
        bVar18 = (bVar2 & bVar9) == 0;
        if (bVar18) {
          *pbVar11 = bVar2 | bVar9;
          lVar13 = param_1[0x11];
        }
        uVar14 = (uint)bVar18;
        puVar6 = param_2 + 3;
        lVar7 = (long)(int)(*(int *)(param_1 + 8) + (uint)uVar10 * 8);
        pbVar11 = (byte *)((lVar7 >> 6) + lVar13);
        bVar2 = *pbVar11;
        bVar9 = (byte)(1 << ((byte)(lVar7 >> 3) & 7));
        if ((bVar2 & bVar9) == 0) {
          *pbVar11 = bVar2 | bVar9;
          uVar14 = bVar18 + 1;
          local_c8[(int)(uint)bVar18] = lVar7;
          if (1 < uVar4) {
            iVar5 = 0;
            goto LAB_001114a6;
          }
          iVar5 = uVar14 * 8;
          iVar16 = 0;
          iVar12 = iVar15;
          goto LAB_00111020;
        }
        iVar5 = 0;
        break;
      case 0x8b:
        if ((ushort)(param_2[param_2[1]] - 0x7a) < 2) {
          local_c8[0] = (long)*(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
          pbVar11 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar2 = *pbVar11;
          bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          if ((bVar2 & bVar9) == 0) {
            puVar6 = param_2 + 2;
            *pbVar11 = bVar2 | bVar9;
            goto LAB_001110ea;
          }
        }
LAB_00111390:
        puVar6 = param_2 + 2;
        goto joined_r0x00111399;
      }
LAB_00111492:
      iVar12 = iVar15;
      iVar16 = iVar5;
      if (uVar4 < 2) {
LAB_00111100:
        iVar5 = uVar14 << 3;
LAB_00111020:
        param_5 = param_5 + iVar5;
      }
      else if (uVar14 != 0) {
LAB_001114a6:
        plVar17 = local_c8;
        iVar12 = param_5 + uVar14 * 8;
        iVar16 = param_5;
        do {
          lVar13 = (long)iVar16;
          if (!bVar3) {
            while (delayed_mem_copy_move(plVar1,local_100,lVar13,0xe,*plVar17), param_4 != 4) {
              iVar16 = iVar16 + 8;
              if (iVar16 == iVar12) goto LAB_001114fb;
              plVar17 = plVar17 + 1;
              lVar13 = (long)iVar16;
            }
          }
          lVar7 = *plVar17;
          iVar16 = iVar16 + 8;
          plVar17 = plVar17 + 1;
          delayed_mem_copy_move(plVar1,0xe,lVar7,local_100,lVar13);
        } while (iVar16 != iVar12);
LAB_001114fb:
        param_5 = param_5 + uVar14 * 8;
        iVar16 = iVar5;
        iVar12 = iVar15;
      }
joined_r0x00111525:
      bVar18 = param_4 != 1;
      if (local_108 == 1) {
LAB_00111034:
        iVar12 = iVar12 << 3;
LAB_00111037:
        param_5 = param_5 + iVar12;
      }
      else {
        bVar18 = param_4 != 1;
        if (iVar12 != 0) {
          plVar17 = local_c8 + 4;
          iVar15 = param_5 + iVar12 * 8;
          iVar5 = param_5;
          do {
            lVar13 = *plVar17;
            lVar7 = (long)iVar5;
            if (!bVar3) {
              while (delayed_mem_copy_move(plVar1,local_100,lVar7,0xe,lVar13), param_4 != 4) {
                iVar5 = iVar5 + 8;
                if (iVar5 == iVar15) goto LAB_001115a3;
                plVar17 = plVar17 + 1;
                lVar7 = (long)iVar5;
                lVar13 = *plVar17;
              }
            }
            iVar5 = iVar5 + 8;
            delayed_mem_copy_move(plVar1,0xe,lVar13,local_100,lVar7);
            plVar17 = plVar17 + 1;
          } while (iVar5 != iVar15);
LAB_001115a3:
          param_5 = param_5 + iVar12 * 8;
        }
      }
LAB_0011103a:
      if ((param_4 == 4) || (!bVar18)) {
LAB_00111047:
        param_5 = param_5 + iVar16 * 8;
      }
      else if (iVar16 != 0) {
        iVar15 = param_5 + iVar16 * 8;
        lVar7 = (long)param_5;
        plVar17 = local_c8 + 2;
        lVar13 = local_c8[2];
        iVar5 = param_5;
        if (bVar3) {
          while( true ) {
            iVar5 = iVar5 + 8;
            delayed_mem_copy_move(plVar1,0xe,lVar13,local_100,lVar7);
            if (iVar5 == iVar15) break;
            plVar17 = plVar17 + 1;
            lVar7 = (long)iVar5;
            lVar13 = *plVar17;
          }
        }
        else {
          while( true ) {
            iVar5 = iVar5 + 8;
            delayed_mem_copy_move(local_c8 + 8,local_100,lVar7,0xe,lVar13);
            if (iVar5 == iVar15) break;
            plVar17 = plVar17 + 1;
            lVar7 = (long)iVar5;
            lVar13 = *plVar17;
          }
        }
        param_5 = param_5 + iVar16 * 8;
      }
LAB_00110f20:
      param_2 = puVar6;
    } while (puVar6 < param_3);
  }
  lVar13 = local_c8[8];
  iVar15 = 3;
  iVar5 = local_50;
  do {
    lVar7 = (long)iVar5;
    uVar4 = *(uint *)((long)&local_80 + lVar7 * 4);
    if (uVar4 != 0xffffffff) {
      sljit_emit_op1(lVar13,0x20,uVar4 | 0x80,(long)aiStack_74[lVar7],
                     *(undefined4 *)((long)&local_68 + lVar7 * 4),0);
    }
    iVar5 = (iVar5 + 1) % 3;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



short * compile_reverse_matchingpath(undefined8 *param_1,short *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort uVar3;
  int *piVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 extraout_RDX;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  short *local_50;
  
  piVar4 = (int *)*param_1;
  if (*param_2 == 0x7d) {
    uVar14 = (uint)(ushort)param_2[1];
    local_50 = param_2 + 2;
    puVar13 = (undefined8 *)(param_3 + 0x18);
    pauVar5 = (undefined1 (*) [16])0x0;
    uVar15 = uVar14;
  }
  else {
    if ((*piVar4 != 0) || (pauVar5 = (undefined1 (*) [16])ensure_abuf(piVar4,0x30), *piVar4 != 0)) {
      return (short *)0x0;
    }
    *pauVar5 = (undefined1  [16])0x0;
    pauVar5[1] = (undefined1  [16])0x0;
    pauVar5[2] = (undefined1  [16])0x0;
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    uVar14 = (uint)(ushort)param_2[1];
    uVar3 = param_2[2];
    *(short **)pauVar5[2] = param_2;
    *(undefined8 *)*pauVar5 = uVar8;
    local_50 = param_2 + 3;
    *(undefined1 (**) [16])(param_3 + 0x10) = pauVar5;
    puVar13 = (undefined8 *)(pauVar5[1] + 8);
    uVar15 = (uint)uVar3;
  }
  sljit_emit_op1(piVar4,0x20,4,0,0x89,0x10);
  if (*(int *)(param_1 + 0x3c) == 0) {
    if (uVar14 != 0) {
      sljit_emit_op2(piVar4,0x42,2,0,2,0,0x7f,uVar14 * 2);
      uVar8 = sljit_emit_cmp(piVar4,2,2,0,4,0);
      if (*piVar4 == 0) {
        lVar11 = *(long *)(piVar4 + 0x18);
        lVar12 = *(long *)(lVar11 + 8);
        uVar1 = lVar12 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar11 + 8) = uVar1;
          puVar10 = (undefined8 *)(lVar11 + 0x10 + lVar12);
        }
        else {
          puVar9 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar4 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar9 == (undefined8 *)0x0) {
            *piVar4 = 2;
            goto LAB_001120be;
          }
          *puVar9 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar9;
          puVar10 = puVar9 + 2;
          puVar9[1] = 0x10;
        }
        uVar2 = *puVar13;
        *puVar10 = uVar8;
        puVar10[1] = uVar2;
        *puVar13 = puVar10;
      }
    }
LAB_001120be:
    if (uVar14 < uVar15) {
      sljit_emit_op1(piVar4,0x20,0x8c,0x18,2,0);
      sljit_emit_op2(piVar4,0x42,2,0,2,0,0x7f,(uVar15 - uVar14) * 2);
      if (*piVar4 == 0) {
        piVar4[0x26] = 0;
        puVar7 = (undefined1 *)emit_x86_instruction(piVar4,1,2,0,4,0);
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 0x3b;
        }
      }
      sljit_emit_select_isra_0(piVar4,2,2,4,0,2);
      goto LAB_00112423;
    }
LAB_001120c7:
    uVar8 = *param_1;
    if (*(int *)(param_1 + 0x14) != 2) {
      if (*(int *)(param_1 + 0x14) != 4) {
        return local_50;
      }
      goto LAB_001125e0;
    }
LAB_00112540:
    sljit_emit_op2(uVar8,0x40,1,0,0x8e,(long)*(int *)((long)param_1 + 0x54),0x7f,1);
    lVar11 = sljit_emit_cmp(uVar8,5,1,0,2,0);
    sljit_emit_op1(uVar8,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
    lVar12 = sljit_emit_label(uVar8);
  }
  else {
    if (uVar14 != 0) {
      sljit_emit_op1(piVar4,0x20,3,0,0x7f,uVar14);
      lVar11 = sljit_emit_label(piVar4);
      uVar8 = sljit_emit_cmp(piVar4,5,2,0,4,0);
      if (*piVar4 == 0) {
        lVar12 = *(long *)(piVar4 + 0x18);
        lVar6 = *(long *)(lVar12 + 8);
        uVar1 = lVar6 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar12 + 8) = uVar1;
          puVar10 = (undefined8 *)(lVar12 + 0x10 + lVar6);
        }
        else {
          puVar9 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar4 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar9 == (undefined8 *)0x0) {
            *piVar4 = 2;
            goto LAB_00112303;
          }
          *puVar9 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar9;
          puVar10 = puVar9 + 2;
          puVar9[1] = 0x10;
        }
        uVar2 = *puVar13;
        *puVar10 = uVar8;
        puVar10[1] = uVar2;
        *puVar13 = puVar10;
      }
LAB_00112303:
      move_back(param_1,puVar13,0);
      uVar8 = extraout_RDX;
      if (*piVar4 == 0) {
        piVar4[0x26] = 0;
        uVar8 = 1;
        emit_non_cum_binary(piVar4,0x2d2b2928,3,0,3,0,0x7f);
      }
      lVar12 = sljit_emit_jump(piVar4,1,uVar8);
      if ((lVar11 != 0) && (lVar12 != 0)) {
        *(long *)(lVar12 + 0x18) = lVar11;
        *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    if (uVar15 <= uVar14) goto LAB_001120c7;
    sljit_emit_op1(piVar4,0x20,0x8c,0x18,2,0);
    sljit_emit_op1(piVar4,0x20,3,0,0x7f,uVar15 - uVar14);
    lVar11 = sljit_emit_label(piVar4);
    lVar12 = sljit_emit_cmp(piVar4,5,2,0,4,0);
    move_back(param_1,puVar13,0);
    if (*piVar4 == 0) {
      piVar4[0x26] = 0;
      emit_non_cum_binary(piVar4,0x2d2b2928,3,0,3,0,0x7f,1);
    }
    lVar6 = sljit_emit_jump(piVar4,1);
    if ((lVar11 != 0) && (lVar6 != 0)) {
      *(long *)(lVar6 + 0x18) = lVar11;
      *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar11 = sljit_emit_label(piVar4);
    if ((lVar12 != 0) && (lVar11 != 0)) {
      *(long *)(lVar12 + 0x18) = lVar11;
      *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_00112423:
    sljit_emit_op1(piVar4,0x20,0x8c,0x10,2,0);
    uVar8 = *param_1;
    if (*(int *)(param_1 + 0x14) == 2) goto LAB_00112540;
    if (*(int *)(param_1 + 0x14) != 4) goto LAB_0011245f;
LAB_001125e0:
    lVar11 = sljit_emit_cmp(uVar8,5,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
    sljit_emit_op1(uVar8,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
    lVar12 = sljit_emit_label(uVar8);
  }
  if ((lVar12 != 0) && (lVar11 != 0)) {
    *(long *)(lVar11 + 0x18) = lVar12;
    *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
  }
LAB_0011245f:
  if (uVar14 < uVar15) {
    uVar8 = sljit_emit_label(piVar4);
    *(undefined8 *)(pauVar5[2] + 8) = uVar8;
  }
  return local_50;
}



undefined8 fast_forward_first_n_chars(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  char cVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  char *pcVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  int iVar27;
  ushort uVar28;
  int iVar29;
  uint uVar30;
  long in_FS_OFFSET;
  bool bVar31;
  undefined1 uVar32;
  undefined4 uVar34;
  undefined4 local_dc;
  char local_d8 [2];
  ushort local_d6;
  ushort local_d4 [70];
  char local_48 [8];
  long local_40;
  undefined2 uVar33;
  
  piVar4 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar23 = local_d8;
  pcVar26 = pcVar23;
  do {
    pcVar26[0] = '\0';
    pcVar26[1] = '\0';
    pcVar10 = pcVar26 + 0x30;
    pcVar26[0xc] = '\0';
    pcVar26[0xd] = '\0';
    pcVar26[0x18] = '\0';
    pcVar26[0x19] = '\0';
    pcVar26[0x24] = '\0';
    pcVar26[0x25] = '\0';
    pcVar26 = pcVar10;
  } while (pcVar10 != local_48);
  local_dc = 10000;
  iVar7 = scan_prefix(param_1,param_1[2],pcVar23,0xc,&local_dc);
  if (iVar7 < 1) {
LAB_00112ee9:
    uVar11 = 0;
    goto LAB_00112eeb;
  }
  pcVar26 = pcVar23;
  do {
    while (cVar19 = *pcVar26, cVar19 != '\x01') {
      if (cVar19 == '\x02') {
        if ((ushort)((*(ushort *)(pcVar26 + 2) ^ *(ushort *)(pcVar26 + 4)) - 1 &
                    (*(ushort *)(pcVar26 + 2) ^ *(ushort *)(pcVar26 + 4))) == 0) {
          pcVar26[1] = (pcVar26[1] == '\x02') * '\x02' + '\x04';
        }
        else {
          cVar19 = '\x02';
          if (pcVar26[1] == '\x02') {
            cVar19 = '\x03';
          }
          pcVar26[1] = cVar19;
        }
      }
      else {
        pcVar26[1] = cVar19 != -1;
      }
      pcVar26 = pcVar26 + 0xc;
      if (pcVar23 + (long)iVar7 * 0xc == pcVar26) goto LAB_00112778;
    }
    pcVar10 = pcVar26 + 0xc;
    pcVar26[1] = (pcVar26[1] == '\x01') * '\x02' + '\x05';
    *(undefined2 *)(pcVar26 + 4) = *(undefined2 *)(pcVar26 + 2);
    pcVar26 = pcVar10;
  } while (pcVar23 + (long)iVar7 * 0xc != pcVar10);
LAB_00112778:
  if (cpu_feature_list == 0) {
    get_cpu_features();
    if ((cpu_feature_list & 4) != 0) goto LAB_00112d60;
LAB_0011278e:
    bVar31 = false;
    iVar9 = 0;
    iVar8 = 0;
    iVar25 = -1;
    iVar27 = 3;
LAB_001127c4:
    do {
      iVar29 = iVar25;
      if (bVar31) {
        iVar24 = iVar8 - iVar9;
        if ((iVar27 < iVar24) && (iVar29 = iVar8 + -1, pcVar23[-0xc] != -1)) {
          iVar27 = iVar24;
          if (iVar8 < iVar7) {
            bVar31 = *pcVar23 != -1;
            iVar8 = iVar8 + 1;
            pcVar23 = pcVar23 + 0xc;
            iVar25 = iVar29;
            if (iVar8 == iVar7 + 1) break;
            goto LAB_001127c4;
          }
          bVar31 = false;
        }
        else {
          bVar31 = false;
          iVar29 = iVar25;
          if (iVar8 < iVar7) {
            bVar31 = *pcVar23 != -1;
          }
        }
      }
      else if ((iVar8 < iVar7) && (bVar31 = *pcVar23 != -1, bVar31)) {
        iVar9 = iVar8;
      }
      iVar8 = iVar8 + 1;
      pcVar23 = pcVar23 + 0xc;
      iVar25 = iVar29;
    } while (iVar8 != iVar7 + 1);
    puVar15 = (undefined8 *)0x0;
    if (iVar29 < 0) {
LAB_00112813:
      iVar9 = 0;
      iVar25 = -1;
      pbVar22 = (byte *)(local_d8 + 1);
LAB_00112846:
      do {
        pbVar21 = pbVar22;
        if (iVar9 != iVar29) {
          if (iVar25 == -1) {
            if (1 < *pbVar21) {
              iVar25 = iVar9;
            }
            iVar9 = iVar9 + 1;
            pbVar22 = pbVar21 + 0xc;
            if (iVar7 == iVar9) break;
            goto LAB_00112846;
          }
          if ((byte)local_d8[(long)iVar25 * 0xc + 1] < *pbVar21) {
            iVar25 = iVar9;
          }
        }
        iVar9 = iVar9 + 1;
        pbVar22 = pbVar21 + 0xc;
      } while (iVar7 != iVar9);
      pbVar21 = pbVar21 + 0xc;
      if (iVar29 < 0) {
        if (iVar25 < 0) goto LAB_00112ee9;
        fast_forward_first_char2
                  (param_1,*(undefined2 *)(local_d8 + (long)iVar25 * 0xc + 2),
                   *(undefined2 *)(local_d8 + (long)iVar25 * 0xc + 4),iVar25);
      }
      else {
        pbVar22 = (byte *)(long)(iVar7 * 2);
        if (*(int *)((long)param_1 + 0x5c) == 0) {
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            pbVar21 = pbVar22;
            emit_non_cum_binary(piVar4,0x2d2b2928,0xd,0,0xd,0,0x7f);
          }
          uVar11 = sljit_emit_jump(piVar4,2,pbVar21);
          if (*piVar4 == 0) {
            lVar14 = *(long *)(piVar4 + 0x18);
            lVar16 = *(long *)(lVar14 + 8);
            uVar1 = lVar16 + 0x10;
            if (uVar1 < 0xff1) {
              *(ulong *)(lVar14 + 8) = uVar1;
              puVar12 = (undefined8 *)(lVar14 + 0x10 + lVar16);
            }
            else {
              puVar17 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
              if (puVar17 == (undefined8 *)0x0) {
                *piVar4 = 2;
                goto LAB_001129ce;
              }
              *puVar17 = *(undefined8 *)(piVar4 + 0x18);
              *(undefined8 **)(piVar4 + 0x18) = puVar17;
              puVar12 = puVar17 + 2;
              puVar17[1] = 0x10;
            }
            uVar2 = param_1[0x2d];
            *puVar12 = uVar11;
            puVar12[1] = uVar2;
            param_1[0x2d] = puVar12;
          }
        }
        else {
          sljit_emit_op1(piVar4,0x20,1,0,0x8e);
          sljit_emit_op1(piVar4,0x20,3,0,0xd,0);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_non_cum_binary(piVar4,0x2d2b2928,0xd,0,0xd,0,0x7f,pbVar22);
          }
          uVar11 = sljit_emit_jump(piVar4,2);
          if (*piVar4 == 0) {
            lVar14 = *(long *)(piVar4 + 0x18);
            uVar1 = *(long *)(lVar14 + 8) + 0x10;
            if (uVar1 < 0xff1) {
              puVar12 = (undefined8 *)(lVar14 + 0x10 + *(long *)(lVar14 + 8));
              uVar2 = param_1[0x2d];
              *(ulong *)(lVar14 + 8) = uVar1;
              *puVar12 = uVar11;
              puVar12[1] = uVar2;
              param_1[0x2d] = puVar12;
LAB_0011297d:
              piVar4[0x26] = 0;
              puVar13 = (undefined1 *)emit_x86_instruction(piVar4,1,0xd,0,1,0);
              if (puVar13 != (undefined1 *)0x0) {
                *puVar13 = 0x3b;
              }
            }
            else {
              puVar12 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
              if (puVar12 == (undefined8 *)0x0) {
                *piVar4 = 2;
              }
              else {
                uVar2 = param_1[0x2d];
                *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                iVar7 = *piVar4;
                *(undefined8 **)(piVar4 + 0x18) = puVar12;
                puVar12[1] = 0x10;
                puVar12[2] = uVar11;
                puVar12[3] = uVar2;
                param_1[0x2d] = puVar12 + 2;
                if (iVar7 == 0) goto LAB_0011297d;
              }
            }
          }
          sljit_emit_select_isra_0(piVar4,4,0xd,1,0,0xd);
        }
LAB_001129ce:
        sljit_emit_op1(piVar4,0x20,5,0,0x7f,puVar15);
        lVar14 = sljit_emit_label(piVar4);
        uVar11 = sljit_emit_cmp(piVar4,4,2,0,0xd,0);
        if (*piVar4 == 0) {
          lVar16 = *(long *)(piVar4 + 0x18);
          lVar18 = *(long *)(lVar16 + 8);
          uVar1 = lVar18 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar16 + 8) = uVar1;
            puVar15 = (undefined8 *)(lVar16 + 0x10 + lVar18);
          }
          else {
            puVar12 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
            if (puVar12 == (undefined8 *)0x0) {
              *piVar4 = 2;
              goto LAB_00112a8b;
            }
            *puVar12 = *(undefined8 *)(piVar4 + 0x18);
            *(undefined8 **)(piVar4 + 0x18) = puVar12;
            puVar15 = puVar12 + 2;
            puVar12[1] = 0x10;
          }
          uVar2 = param_1[0x2d];
          *puVar15 = uVar11;
          puVar15[1] = uVar2;
          param_1[0x2d] = puVar15;
        }
LAB_00112a8b:
        sljit_emit_op1(piVar4,0x21,1,0,0x82,(long)(iVar29 * 2));
        sljit_emit_op1(piVar4,0x21,1,0,0x185,0);
        sljit_emit_op2(piVar4,0x40,2,0,2,0,1,0);
        lVar16 = sljit_emit_cmp(piVar4,1,1,0,0x7f,0);
        if ((lVar16 != 0) && (lVar14 != 0)) {
          *(long *)(lVar16 + 0x18) = lVar14;
          *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (iVar25 < 0) {
          if (*(int *)(param_1 + 0x3c) != 0) {
            sljit_emit_op1(piVar4,0x23,1,0,0x82,0);
            sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,2);
            jumpto_if_not_utf_char_start_constprop_0(piVar4,lVar14);
            sljit_emit_op2(piVar4,0x42,2,0,2,0,0x7f,2);
          }
        }
        else {
          sljit_emit_op1(piVar4,0x23,1,0,0x82,(long)(iVar25 * 2));
          sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,2);
          lVar16 = (long)iVar25 * 0xc;
          uVar28 = *(ushort *)(local_d8 + lVar16 + 2);
          if (local_d8[(long)iVar25 * 0xc] == '\x01') {
LAB_001130e3:
            lVar16 = sljit_emit_cmp(piVar4,1,1,0,0x7f,uVar28);
            if (lVar16 == 0) goto LAB_00113310;
            bVar31 = *(int *)(param_1 + 0x3c) != 0;
            if (lVar14 != 0) {
              *(long *)(lVar16 + 0x18) = lVar14;
              *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
            }
joined_r0x001132fc:
            if (bVar31 && iVar25 != 0) goto LAB_00113275;
          }
          else {
            uVar6 = *(ushort *)(local_d8 + lVar16 + 4) ^ uVar28;
            if ((uVar6 - 1 & uVar6) == 0) {
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                emit_cum_binary(piVar4,0xd0b0908,1,0,1,0,0x7f,uVar6);
                uVar28 = *(ushort *)(local_d8 + lVar16 + 2);
              }
              uVar28 = uVar28 | uVar6;
              goto LAB_001130e3;
            }
            lVar18 = sljit_emit_cmp(piVar4,0,1,0,0x7f);
            lVar16 = sljit_emit_cmp(piVar4,1,1,0,0x7f,*(undefined2 *)(local_d8 + lVar16 + 4));
            if ((lVar16 != 0) && (lVar14 != 0)) {
              *(long *)(lVar16 + 0x18) = lVar14;
              *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar16 = sljit_emit_label(piVar4);
            if (lVar18 != 0) {
              bVar31 = *(int *)(param_1 + 0x3c) != 0;
              if (lVar16 != 0) {
                *(long *)(lVar18 + 0x18) = lVar16;
                *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
              }
              goto joined_r0x001132fc;
            }
LAB_00113310:
            if ((*(int *)(param_1 + 0x3c) != 0) && (iVar25 != 0)) {
LAB_00113275:
              sljit_emit_op1(piVar4,0x23,1,0,0x82,0xfffffffffffffffe);
              jumpto_if_not_utf_char_start_constprop_0(piVar4,lVar14);
            }
          }
          sljit_emit_op2(piVar4,0x42,2,0,2,0,0x7f,2);
        }
        if (*(int *)((long)param_1 + 0x5c) == 0) {
          sljit_emit_op2(piVar4,0x40,0xd,0,0xd,0,0x7f,pbVar22);
        }
        else {
          sljit_emit_op1(piVar4,0x20,0xd,0,3,0);
        }
      }
    }
    else {
      piVar5 = (int *)*param_1;
      if (*piVar5 == 0) {
        puVar12 = (undefined8 *)(*(code *)**(undefined8 **)(piVar5 + 0x12))(0x108);
        if (puVar12 != (undefined8 *)0x0) {
          puVar15 = puVar12 + 1;
          uVar32 = (undefined1)(iVar27 * 2);
          uVar33 = CONCAT11(uVar32,uVar32);
          *puVar12 = param_1[4];
          uVar34 = CONCAT22(uVar33,uVar33);
          param_1[4] = puVar12;
          *(undefined4 *)(puVar12 + 1) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xc) = uVar34;
          *(undefined4 *)(puVar12 + 2) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x14) = uVar34;
          *(undefined4 *)(puVar12 + 3) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x1c) = uVar34;
          *(undefined4 *)(puVar12 + 4) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x24) = uVar34;
          *(undefined4 *)(puVar12 + 5) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x2c) = uVar34;
          *(undefined4 *)(puVar12 + 6) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x34) = uVar34;
          *(undefined4 *)(puVar12 + 7) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x3c) = uVar34;
          *(undefined4 *)(puVar12 + 8) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x44) = uVar34;
          *(undefined4 *)(puVar12 + 9) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x4c) = uVar34;
          *(undefined4 *)(puVar12 + 10) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x54) = uVar34;
          *(undefined4 *)(puVar12 + 0xb) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x5c) = uVar34;
          *(undefined4 *)(puVar12 + 0xc) = uVar34;
          *(undefined4 *)((long)puVar12 + 100) = uVar34;
          *(undefined4 *)(puVar12 + 0xd) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x6c) = uVar34;
          *(undefined4 *)(puVar12 + 0xe) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x74) = uVar34;
          *(undefined4 *)(puVar12 + 0xf) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x7c) = uVar34;
          *(undefined4 *)(puVar12 + 0x10) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x84) = uVar34;
          *(undefined4 *)(puVar12 + 0x11) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x8c) = uVar34;
          *(undefined4 *)(puVar12 + 0x12) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x94) = uVar34;
          *(undefined4 *)(puVar12 + 0x13) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x9c) = uVar34;
          *(undefined4 *)(puVar12 + 0x14) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xa4) = uVar34;
          *(undefined4 *)(puVar12 + 0x15) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xac) = uVar34;
          *(undefined4 *)(puVar12 + 0x16) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xb4) = uVar34;
          *(undefined4 *)(puVar12 + 0x17) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xbc) = uVar34;
          *(undefined4 *)(puVar12 + 0x18) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xc4) = uVar34;
          *(undefined4 *)(puVar12 + 0x19) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xcc) = uVar34;
          *(undefined4 *)(puVar12 + 0x1a) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xd4) = uVar34;
          *(undefined4 *)(puVar12 + 0x1b) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xdc) = uVar34;
          *(undefined4 *)(puVar12 + 0x1c) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xe4) = uVar34;
          *(undefined4 *)(puVar12 + 0x1d) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xec) = uVar34;
          *(undefined4 *)(puVar12 + 0x1e) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xf4) = uVar34;
          *(undefined4 *)(puVar12 + 0x1f) = uVar34;
          *(undefined4 *)((long)puVar12 + 0xfc) = uVar34;
          *(undefined4 *)(puVar12 + 0x20) = uVar34;
          *(undefined4 *)((long)puVar12 + 0x104) = uVar34;
          if (0 < iVar27) {
            iVar25 = 0;
            pbVar22 = (byte *)(local_d8 + (long)iVar29 * 0xc + 2);
            do {
              bVar3 = pbVar22[-2];
              pbVar21 = pbVar22;
              do {
                if (iVar25 < (int)(uint)*(byte *)((ulong)*pbVar21 + (long)puVar15)) {
                  *(byte *)((ulong)*pbVar21 + (long)puVar15) = (byte)iVar25;
                }
                pbVar21 = pbVar21 + 2;
              } while (pbVar21 < pbVar22 + (ulong)bVar3 * 2);
              iVar25 = iVar25 + 2;
              pbVar22 = pbVar22 + -0xc;
            } while (iVar25 != iVar27 * 2);
          }
          goto LAB_00112813;
        }
        if (*piVar5 == 0) {
          *piVar5 = 2;
        }
      }
    }
  }
  else {
    if ((cpu_feature_list & 4) == 0) goto LAB_0011278e;
LAB_00112d60:
    iVar25 = iVar7 + -1;
    if (iVar25 == 0) goto LAB_0011278e;
    pcVar26 = pcVar23 + (long)iVar7 * 0xc;
    uVar30 = 0;
    iVar9 = 0;
    iVar27 = 0;
LAB_00112db5:
    do {
      if (2 < (byte)pcVar26[-0xb]) {
        iVar8 = iVar25 + -7;
        if (iVar25 + -7 < 0) {
          iVar8 = 0;
        }
        if (iVar8 < iVar25) {
          lVar14 = (long)iVar8;
          do {
            lVar16 = lVar14 * 0xc;
            if ((2 < (byte)local_d8[lVar16 + 1]) &&
               (uVar20 = (uint)(byte)local_d8[lVar16 + 1] + (uint)(byte)pcVar26[-0xb],
               uVar30 <= uVar20)) {
              if ((*(short *)(pcVar26 + -10) != *(short *)(local_d8 + lVar16 + 2)) &&
                 (((*(short *)(pcVar26 + -10) != *(short *)(local_d8 + lVar16 + 4) &&
                   (*(short *)(pcVar26 + -8) != *(short *)(local_d8 + lVar16 + 2))) &&
                  (*(short *)(pcVar26 + -8) != *(short *)(local_d8 + lVar16 + 4))))) {
                iVar9 = (int)lVar14;
                uVar30 = uVar20;
                iVar27 = iVar25;
              }
            }
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 < iVar25);
          pcVar26 = pcVar26 + -0xc;
          iVar25 = iVar25 + -1;
          if (iVar25 == 0) break;
          goto LAB_00112db5;
        }
      }
      pcVar26 = pcVar26 + -0xc;
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    if (uVar30 == 0) goto LAB_0011278e;
    lVar14 = (long)iVar9 * 0xc;
    fast_forward_char_pair_simd
              (param_1,iVar27,*(undefined2 *)(local_d8 + (long)iVar27 * 0xc + 2),
               *(undefined2 *)(local_d8 + (long)iVar27 * 0xc + 4),(long)iVar9,
               *(undefined2 *)(local_d8 + lVar14 + 2),*(undefined2 *)(local_d8 + lVar14 + 4));
  }
  uVar11 = 1;
LAB_00112eeb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void read_char8_type(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  piVar3 = (int *)*param_1;
  sljit_emit_op1(piVar3,0x23,4,0,0x82,0);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,2);
  sljit_emit_op1(piVar3,0x20,1,0,0x7f,0);
  lVar5 = sljit_emit_cmp(piVar3,4,4,0,0x7f,0xff);
  sljit_emit_op1(piVar3,0x21,1,0,0x84,param_1[0x1d]);
  lVar6 = sljit_emit_label(piVar3);
  if ((lVar5 != 0) && (lVar6 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar6;
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    sljit_emit_op2(piVar3,0x42,4,0,4,0,0x7f,0xd800);
    if (cpu_feature_list == 0) {
      get_cpu_features();
    }
    if ((cpu_feature_list & 0x20) != 0) {
      sljit_emit_op2(piVar3,0x40,5,0,2,0,0x7f,2);
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_cmp_binary(piVar3,4,0,0x7f,0x400);
      }
      sljit_emit_select_isra_0(piVar3,2,2,5,0,2);
      return;
    }
    lVar5 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x400);
    sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,2);
    lVar6 = sljit_emit_label(piVar3);
    goto joined_r0x001137e3;
  }
  sljit_emit_op2(piVar3,0x42,4,0,4,0,0x7f,0xd800);
  lVar5 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x800);
  uVar7 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x400);
  if (*piVar3 == 0) {
    lVar6 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar6 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar6 + 8) = uVar1;
      puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar4);
    }
    else {
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar8 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_00113522;
      }
      *puVar8 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar8;
      puVar9 = puVar8 + 2;
      puVar8[1] = 0x10;
    }
    uVar2 = *param_2;
    *puVar9 = uVar7;
    puVar9[1] = uVar2;
    *param_2 = puVar9;
  }
LAB_00113522:
  uVar7 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
  if (*piVar3 == 0) {
    lVar6 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar6 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar6 + 8) = uVar1;
      puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar4);
    }
    else {
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar8 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_001135a8;
      }
      *puVar8 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar8;
      puVar9 = puVar8 + 2;
      puVar8[1] = 0x10;
    }
    uVar2 = *param_2;
    *puVar9 = uVar7;
    puVar9[1] = uVar2;
    *param_2 = puVar9;
  }
LAB_001135a8:
  sljit_emit_op1(piVar3,0x23,4,0,0x82,0);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,2);
  sljit_emit_op2(piVar3,0x42,4,0,4,0,0x7f,0xdc00);
  uVar7 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x400);
  if (*piVar3 == 0) {
    lVar6 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar6 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar6 + 8) = uVar1;
      puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar4);
    }
    else {
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar8 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_00113697;
      }
      *puVar8 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar8;
      puVar9 = puVar8 + 2;
      puVar8[1] = 0x10;
    }
    uVar2 = *param_2;
    *puVar9 = uVar7;
    puVar9[1] = uVar2;
    *param_2 = puVar9;
  }
LAB_00113697:
  lVar6 = sljit_emit_label(piVar3);
joined_r0x001137e3:
  if ((lVar6 != 0) && (lVar5 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar6;
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    return;
  }
  return;
}



undefined8 mainloop_entry(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long in_FS_OFFSET;
  long *local_48;
  long local_40;
  
  piVar4 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (long *)0x0;
  uVar3 = *(uint *)(param_1[1] + 0x58);
  if ((*(byte *)(param_1[1] + 0x61) & 8) == 0) {
    if ((uVar3 & 0x100) == 0) {
      if (*(int *)((long)param_1 + 0xc4) - 1U < 2) {
        if ((uVar3 & 0x800000) != 0) {
          bVar5 = true;
          goto LAB_00113d2f;
        }
        lVar7 = sljit_emit_jump(piVar4,0x24);
      }
      else {
        bVar5 = 0xff < *(int *)(param_1 + 0x1a);
        if ((uVar3 & 0x800000) == 0) {
          lVar8 = 0;
          lVar6 = 0;
        }
        else {
LAB_00113d2f:
          sljit_emit_op1(piVar4,0x20,1,0,0x89,0x48);
          sljit_emit_op1(piVar4,0x20,4,0,0xd,0);
          lVar6 = sljit_emit_cmp(piVar4,0,1,0,0x7f,0xffffffffffffffff);
          sljit_emit_op1(piVar4,0x20,4,0,0x89,0x10);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_shift_with_flags(piVar4,0x20,0,1,0,1,0,0x7f,1);
          }
          sljit_emit_op2(piVar4,0x40,4,0,4,0,1,0);
          lVar8 = sljit_emit_cmp(piVar4,5,4,0,0xd,0);
          sljit_emit_op1(piVar4,0x20,4,0,0xd,0);
          lVar7 = sljit_emit_label(piVar4);
          if ((lVar7 != 0) && (lVar8 != 0)) {
            *(long *)(lVar8 + 0x18) = lVar7;
            *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(piVar4,0x20,1,0,0x7f,0xffffffffffffffff);
          uVar9 = sljit_emit_cmp(piVar4,2,4,0,2,0);
          if (*piVar4 == 0) {
            lVar7 = *(long *)(piVar4 + 0x18);
            lVar10 = *(long *)(lVar7 + 8);
            uVar1 = lVar10 + 0x10;
            if (uVar1 < 0xff1) {
              *(ulong *)(lVar7 + 8) = uVar1;
              puVar12 = (undefined8 *)(lVar7 + 0x10 + lVar10);
            }
            else {
              puVar11 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
              if (puVar11 == (undefined8 *)0x0) {
                *piVar4 = 2;
                goto LAB_00113f20;
              }
              *puVar11 = *(undefined8 *)(piVar4 + 0x18);
              *(undefined8 **)(piVar4 + 0x18) = puVar11;
              puVar12 = puVar11 + 2;
              puVar11[1] = 0x10;
            }
            uVar2 = param_1[0x2c];
            *puVar12 = uVar9;
            puVar12[1] = uVar2;
            param_1[0x2c] = puVar12;
          }
LAB_00113f20:
          lVar7 = sljit_emit_label(piVar4);
          if ((lVar7 != 0) && (lVar6 != 0)) {
            *(long *)(lVar6 + 0x18) = lVar7;
            *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)((long)param_1 + 0x5c),4,0);
        }
        lVar7 = sljit_emit_jump(piVar4,0x24);
        if (!bVar5) goto LAB_00113a4a;
      }
      lVar10 = sljit_emit_label(piVar4);
      sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,2);
      lVar6 = sljit_emit_cmp(piVar4,3,2,0,0xd,0);
      sljit_emit_op1(piVar4,0x23,1,0,0x82,0);
      if (*piVar4 == 0) {
        uVar3 = *(uint *)(param_1 + 0x1a);
        piVar4[0x26] = 0;
        emit_cmp_binary(piVar4,1,0,0x7f,uVar3 & 0xff);
      }
      sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,1,0);
      if (*piVar4 == 0) {
        piVar4[0x26] = 0;
        emit_shift_with_flags(piVar4,0x20,0,1,0,1,0,0x7f,1);
      }
      sljit_emit_op2(piVar4,0x40,2,0,2,0,1,0);
      lVar8 = sljit_emit_jump(piVar4,0x24);
      uVar9 = sljit_emit_label(piVar4);
      sljit_emit_op1(piVar4,0x23,1,0,0x82,0);
      lVar13 = sljit_emit_cmp(piVar4,0,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
      if ((lVar10 != 0) && (lVar13 != 0)) {
        *(long *)(lVar13 + 0x18) = lVar10;
        *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      }
      bVar5 = true;
      goto LAB_00113a8d;
    }
LAB_0011389e:
    sljit_emit_op1(piVar4,0x20,3,0,2,0);
    if ((*(int *)((long)param_1 + 0xc4) == 0) && (0xff < *(int *)(param_1 + 0x1a))) {
      lVar7 = sljit_emit_label(piVar4);
      sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,2);
      lVar6 = sljit_emit_cmp(piVar4,3,2,0,0xd,0);
      sljit_emit_op1(piVar4,0x23,1,0,0x82,0xfffffffffffffffe);
      sljit_emit_op1(piVar4,0x23,4,0,0x82,0);
      lVar8 = sljit_emit_cmp(piVar4,1,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
      if ((lVar8 != 0) && (lVar7 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar7;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar8 = sljit_emit_cmp(piVar4,1,4,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
      if ((lVar8 != 0) && (lVar7 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar7;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar7 = sljit_emit_label(piVar4);
      if ((lVar6 != 0) && (lVar7 != 0)) {
        *(long *)(lVar6 + 0x18) = lVar7;
        *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
      }
      sljit_emit_op2(piVar4,0x42,0x8e,(long)*(int *)((long)param_1 + 0x5c),2,0,0x7f,2);
    }
    else {
      lVar6 = sljit_emit_cmp(piVar4,3,2,0,0xd,0);
      lVar7 = sljit_emit_label(piVar4);
      sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)((long)param_1 + 0x5c),2,0);
      read_char_isra_0(param_1,*(undefined4 *)(param_1 + 0x19),0,3);
      check_newlinechar(param_1,*(undefined4 *)((long)param_1 + 0xc4),&local_48,1);
      lVar8 = sljit_emit_cmp(piVar4,2,2,0,0xd,0);
      if ((lVar7 != 0) && (lVar8 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar7;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar7 = sljit_emit_label(piVar4);
      if ((lVar7 != 0) && (lVar6 != 0)) {
        *(long *)(lVar6 + 0x18) = lVar7;
        *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
      }
      sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)((long)param_1 + 0x5c),2,0);
      lVar7 = sljit_emit_label(piVar4);
      if (local_48 != (long *)0x0) {
        plVar15 = local_48;
        do {
          lVar8 = *plVar15;
          if ((lVar8 != 0) && (lVar7 != 0)) {
            *(long *)(lVar8 + 0x18) = lVar7;
            *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar15 = (long *)plVar15[1];
        } while (plVar15 != (long *)0x0);
      }
    }
    lVar8 = 0;
    sljit_emit_op1(piVar4,0x20,2,0,3,0);
    lVar7 = sljit_emit_jump(piVar4,0x24);
  }
  else {
    if ((uVar3 & 0x100) != 0) goto LAB_0011389e;
    bVar5 = false;
    if ((uVar3 & 0x800000) != 0) goto LAB_00113d2f;
    lVar8 = 0;
    lVar6 = 0;
    lVar7 = sljit_emit_jump(piVar4,0x24);
  }
LAB_00113a4a:
  uVar9 = sljit_emit_label(piVar4);
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)((long)param_1 + 0x1e4) == 0)) {
    sljit_emit_op1(piVar4,0x23,1,0,0x82,0);
  }
  bVar5 = false;
LAB_00113a8d:
  sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,2);
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,0xd800);
      if (cpu_feature_list == 0) {
        get_cpu_features();
      }
      if ((cpu_feature_list & 0x20) == 0) {
        if (*piVar4 == 0) {
          piVar4[0x26] = 0;
          emit_cmp_binary(piVar4,1,0,0x7f,0x400);
        }
        sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,1,2);
        if (*piVar4 == 0) {
          piVar4[0x26] = 0;
          emit_shift_with_flags(piVar4,0x20,0,1,0,1,0,0x7f,1);
        }
        sljit_emit_op2(piVar4,0x40,2,0,2,0,1,0);
      }
      else {
        sljit_emit_op2(piVar4,0x40,4,0,2,0,0x7f,2);
        if (*piVar4 == 0) {
          piVar4[0x26] = 0;
          emit_cmp_binary(piVar4,1,0,0x7f,0x400);
        }
        sljit_emit_select_isra_0(piVar4,2,2,4,0,2);
      }
    }
  }
  else {
    lVar10 = sljit_emit_label(piVar4);
    lVar13 = sljit_emit_cmp(piVar4,3,2,0,0xd,0);
    sljit_emit_op1(piVar4,0x23,1,0,0x82,0);
    sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,2);
    sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,0xdc00);
    lVar14 = sljit_emit_cmp(piVar4,2,1,0,0x7f,0x400);
    if ((lVar14 != 0) && (lVar10 != 0)) {
      *(long *)(lVar14 + 0x18) = lVar10;
      *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
    }
    sljit_emit_op2(piVar4,0x42,2,0,2,0,0x7f,2);
    lVar10 = sljit_emit_label(piVar4);
    if ((lVar10 != 0) && (lVar13 != 0)) {
      *(long *)(lVar13 + 0x18) = lVar10;
      *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  lVar10 = sljit_emit_label(piVar4);
  if ((lVar7 != 0) && (lVar10 != 0)) {
    *(long *)(lVar7 + 0x18) = lVar10;
    *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
  }
  if (bVar5) {
    lVar7 = sljit_emit_label(piVar4);
    if ((lVar7 != 0) && (lVar6 != 0)) {
      *(long *)(lVar6 + 0x18) = lVar7;
      *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar6 = sljit_emit_label(piVar4);
    if ((lVar6 != 0) && (lVar8 != 0)) {
      *(long *)(lVar8 + 0x18) = lVar6;
      *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
optimize_class_ranges_isra_0
          (int *param_1,byte *param_2,uint param_3,uint param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long in_FS_OFFSET;
  uint local_58 [6];
  long local_40;
  
  uVar10 = 0;
  bVar2 = *param_2;
  uVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)bVar2;
  uVar15 = uVar12 & 1;
  iVar16 = -uVar15;
  while( true ) {
    cVar11 = (char)uVar15;
    if (((uVar10 & 7) == 0) && (bVar2 == (byte)iVar16)) {
      uVar10 = uVar10 + 8;
    }
    else {
      uVar15 = (int)(uint)bVar2 >> ((byte)uVar10 & 7) & 1;
      if ((char)uVar15 != cVar11) {
        if (3 < (int)uVar13) goto LAB_001145c0;
        lVar4 = (long)(int)uVar13;
        uVar13 = uVar13 + 1;
        local_58[lVar4] = uVar10;
        iVar16 = -uVar15;
      }
      uVar10 = uVar10 + 1;
      cVar11 = (char)uVar15;
    }
    if (0xff < (int)uVar10) break;
    bVar2 = param_2[(int)uVar10 >> 3];
  }
  if (cVar11 == '\0') {
    if ((param_3 & 1) == 0) {
LAB_001145f2:
      if (cVar11 == '\0') goto LAB_0011451a;
    }
    if ((int)uVar13 < 4) {
      lVar4 = (long)(int)uVar13;
      uVar13 = uVar13 + 1;
      local_58[lVar4] = 0x100;
      goto LAB_0011451a;
    }
  }
  else {
    if ((param_3 & 1) == 0) goto LAB_001145f2;
LAB_0011451a:
    if (uVar13 < 5) {
      uVar15 = (uVar12 ^ param_4) & 1;
      uVar10 = uVar15 ^ 1;
      if ((uVar13 == 0) && ((char)uVar10 != '\0')) {
        uVar5 = sljit_emit_jump(param_1,0x24);
        if (*param_1 != 0) goto LAB_0011467a;
        lVar4 = *(long *)(param_1 + 0x18);
        lVar6 = *(long *)(lVar4 + 8);
        uVar9 = lVar6 + 0x10;
        if (uVar9 < 0xff1) {
LAB_00114790:
          *(ulong *)(lVar4 + 8) = uVar9;
          puVar8 = (undefined8 *)(lVar4 + 0x10 + lVar6);
        }
        else {
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(param_1 + 0x12))
                             (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
          if (puVar7 == (undefined8 *)0x0) {
LAB_001149d9:
            *param_1 = 2;
            goto LAB_0011467a;
          }
          *puVar7 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 **)(param_1 + 0x18) = puVar7;
          puVar8 = puVar7 + 2;
          puVar7[1] = 0x10;
        }
LAB_0011466e:
        uVar1 = *param_5;
        *puVar8 = uVar5;
        puVar8[1] = uVar1;
        *param_5 = puVar8;
      }
      else {
        cVar11 = (char)uVar15;
        if (uVar13 == 3) {
          lVar4 = (long)(int)local_58[0];
          if (cVar11 != '\0') {
            uVar5 = sljit_emit_cmp(param_1,3,1,0,0x7f,(long)(int)local_58[2]);
            if (*param_1 == 0) {
              lVar6 = *(long *)(param_1 + 0x18);
              lVar3 = *(long *)(lVar6 + 8);
              uVar9 = lVar3 + 0x10;
              if (uVar9 < 0xff1) {
                *(ulong *)(lVar6 + 8) = uVar9;
                puVar7 = (undefined8 *)(lVar6 + 0x10 + lVar3);
              }
              else {
                puVar8 = (undefined8 *)
                         (*(code *)**(undefined8 **)(param_1 + 0x12))
                                   (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
                if (puVar8 == (undefined8 *)0x0) {
                  *param_1 = 2;
                  goto LAB_00114ba7;
                }
                *puVar8 = *(undefined8 *)(param_1 + 0x18);
                *(undefined8 **)(param_1 + 0x18) = puVar8;
                puVar7 = puVar8 + 2;
                puVar8[1] = 0x10;
              }
              uVar1 = *param_5;
              *puVar7 = uVar5;
              puVar7[1] = uVar1;
              *param_5 = puVar7;
            }
LAB_00114ba7:
            if (local_58[0] + 1 == local_58[1]) goto LAB_00114ca3;
            sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
            lVar4 = (long)(int)(local_58[1] - local_58[0]);
            goto LAB_00114962;
          }
          uVar5 = sljit_emit_cmp(param_1,2,1,0,0x7f,lVar4);
          if (*param_1 == 0) {
            lVar4 = *(long *)(param_1 + 0x18);
            lVar6 = *(long *)(lVar4 + 8);
            uVar9 = lVar6 + 0x10;
            if (uVar9 < 0xff1) {
              *(ulong *)(lVar4 + 8) = uVar9;
              puVar7 = (undefined8 *)(lVar4 + 0x10 + lVar6);
            }
            else {
              puVar8 = (undefined8 *)
                       (*(code *)**(undefined8 **)(param_1 + 0x12))
                                 (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
              if (puVar8 == (undefined8 *)0x0) {
                *param_1 = 2;
                goto LAB_00114724;
              }
              *puVar8 = *(undefined8 *)(param_1 + 0x18);
              *(undefined8 **)(param_1 + 0x18) = puVar8;
              puVar7 = puVar8 + 2;
              puVar8[1] = 0x10;
            }
            uVar1 = *param_5;
            *puVar7 = uVar5;
            puVar7[1] = uVar1;
            *param_5 = puVar7;
          }
LAB_00114724:
          lVar4 = (long)(int)local_58[1];
          if (local_58[1] + 1 == local_58[2]) goto LAB_00114ca3;
          iVar16 = local_58[2] - local_58[1];
          sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
          iVar14 = 2;
LAB_00114772:
          uVar5 = sljit_emit_cmp(param_1,iVar14,1,0,0x7f,(long)iVar16);
          iVar16 = *param_1;
joined_r0x001147c8:
          if (iVar16 == 0) {
            lVar4 = *(long *)(param_1 + 0x18);
            lVar6 = *(long *)(lVar4 + 8);
            uVar9 = lVar6 + 0x10;
            if (0xff0 < uVar9) {
              puVar7 = (undefined8 *)
                       (*(code *)**(undefined8 **)(param_1 + 0x12))
                                 (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
              if (puVar7 == (undefined8 *)0x0) goto LAB_001149d9;
              *puVar7 = *(undefined8 *)(param_1 + 0x18);
              *(undefined8 **)(param_1 + 0x18) = puVar7;
              puVar8 = puVar7 + 2;
              puVar7[1] = 0x10;
              goto LAB_0011466e;
            }
            goto LAB_00114790;
          }
        }
        else {
          if (uVar13 == 4) {
            iVar16 = local_58[1] - local_58[0];
            if (((iVar16 == local_58[3] - local_58[2]) &&
                (uVar13 = local_58[2] - local_58[0], local_58[2] == (local_58[0] | uVar13))) &&
               (((uVar13 - 1 | local_58[1]) & uVar13) == 0)) {
              sljit_emit_op2(param_1,0x46,1,0,1,0,0x7f,(long)(int)uVar13);
              if (local_58[3] == local_58[2] + 1) {
                uVar5 = sljit_emit_cmp(param_1,uVar10,1,0,0x7f);
                add_jump(param_1,param_5,uVar5);
              }
              else {
                sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,(long)(int)local_58[2]);
                uVar5 = sljit_emit_cmp(param_1,3 - uVar15,1,0,0x7f,(long)iVar16);
                add_jump(param_1,param_5,uVar5);
              }
              goto LAB_0011467a;
            }
            lVar4 = (long)(int)local_58[0];
            if (cVar11 == '\0') {
              sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f);
              uVar5 = sljit_emit_cmp(param_1,3,1,0,0x7f,(long)(int)(local_58[3] - local_58[0]));
              if (*param_1 == 0) {
                lVar6 = *(long *)(param_1 + 0x18);
                lVar3 = *(long *)(lVar6 + 8);
                uVar9 = lVar3 + 0x10;
                if (uVar9 < 0xff1) {
                  *(ulong *)(lVar6 + 8) = uVar9;
                  puVar7 = (undefined8 *)(lVar6 + 0x10 + lVar3);
                }
                else {
                  puVar8 = (undefined8 *)
                           (*(code *)**(undefined8 **)(param_1 + 0x12))
                                     (0x1000,(*(undefined8 **)(param_1 + 0x12))[2],lVar6,uVar9,lVar4
                                     );
                  if (puVar8 == (undefined8 *)0x0) {
                    *param_1 = 2;
                    goto LAB_00114ab3;
                  }
                  *puVar8 = *(undefined8 *)(param_1 + 0x18);
                  *(undefined8 **)(param_1 + 0x18) = puVar8;
                  puVar7 = puVar8 + 2;
                  puVar8[1] = 0x10;
                }
                uVar1 = *param_5;
                *puVar7 = uVar5;
                puVar7[1] = uVar1;
                *param_5 = puVar7;
              }
LAB_00114ab3:
              lVar4 = (long)iVar16;
              if (local_58[2] == local_58[1] + 1) goto LAB_00114ca3;
              sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
              lVar4 = (long)(int)(local_58[2] - local_58[1]);
            }
            else {
              if (local_58[1] == local_58[0] + 1) {
                uVar5 = sljit_emit_cmp(param_1,0,1,0,0x7f);
                uVar15 = local_58[2];
                if (*param_1 == 0) {
                  lVar4 = *(long *)(param_1 + 0x18);
                  lVar6 = *(long *)(lVar4 + 8);
                  uVar9 = lVar6 + 0x10;
                  if (uVar9 < 0xff1) {
                    *(ulong *)(lVar4 + 8) = uVar9;
                    puVar7 = (undefined8 *)(lVar4 + 0x10 + lVar6);
                  }
                  else {
                    puVar8 = (undefined8 *)
                             (*(code *)**(undefined8 **)(param_1 + 0x12))
                                       (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
                    if (puVar8 == (undefined8 *)0x0) {
                      *param_1 = 2;
                      goto LAB_0011492c;
                    }
                    *puVar8 = *(undefined8 *)(param_1 + 0x18);
                    *(undefined8 **)(param_1 + 0x18) = puVar8;
                    puVar7 = puVar8 + 2;
                    puVar8[1] = 0x10;
                  }
                  uVar1 = *param_5;
                  *puVar7 = uVar5;
                  puVar7[1] = uVar1;
                  *param_5 = puVar7;
                }
              }
              else {
                sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
                uVar5 = sljit_emit_cmp(param_1,2,1,0,0x7f,(long)iVar16);
                if (*param_1 == 0) {
                  lVar4 = *(long *)(param_1 + 0x18);
                  lVar6 = *(long *)(lVar4 + 8);
                  uVar9 = lVar6 + 0x10;
                  if (uVar9 < 0xff1) {
                    *(ulong *)(lVar4 + 8) = uVar9;
                    puVar7 = (undefined8 *)(lVar4 + 0x10 + lVar6);
                  }
                  else {
                    puVar8 = (undefined8 *)
                             (*(code *)**(undefined8 **)(param_1 + 0x12))
                                       (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
                    if (puVar8 == (undefined8 *)0x0) {
                      *param_1 = 2;
                      goto LAB_00114926;
                    }
                    *puVar8 = *(undefined8 *)(param_1 + 0x18);
                    *(undefined8 **)(param_1 + 0x18) = puVar8;
                    puVar7 = puVar8 + 2;
                    puVar8[1] = 0x10;
                  }
                  uVar1 = *param_5;
                  *puVar7 = uVar5;
                  puVar7[1] = uVar1;
                  *param_5 = puVar7;
                }
LAB_00114926:
                uVar15 = local_58[2] - local_58[0];
              }
LAB_0011492c:
              lVar4 = (long)(int)uVar15;
              if (local_58[3] == local_58[2] + 1) {
LAB_00114ca3:
                uVar10 = 0;
                goto LAB_00114b0c;
              }
              sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
              lVar4 = (long)(int)(local_58[3] - local_58[2]);
            }
LAB_00114962:
            uVar5 = sljit_emit_cmp(param_1,2,1,0,0x7f,lVar4);
            iVar16 = *param_1;
          }
          else {
            if (uVar13 == 1) {
              uVar5 = sljit_emit_cmp(param_1,cVar11 + '\x02',1,0,0x7f,(long)(int)local_58[0]);
              iVar16 = *param_1;
              goto joined_r0x001147c8;
            }
            if (uVar13 != 2) goto LAB_0011467a;
            lVar4 = (long)(int)local_58[0];
            if (local_58[0] + 1 != local_58[1]) {
              iVar16 = local_58[1] - local_58[0];
              sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
              iVar14 = 3 - uVar15;
              goto LAB_00114772;
            }
LAB_00114b0c:
            uVar5 = sljit_emit_cmp(param_1,uVar10,1,0,0x7f,lVar4);
            iVar16 = *param_1;
          }
          if (iVar16 == 0) {
            lVar4 = *(long *)(param_1 + 0x18);
            lVar6 = *(long *)(lVar4 + 8);
            uVar9 = lVar6 + 0x10;
            if (uVar9 < 0xff1) {
              *(ulong *)(lVar4 + 8) = uVar9;
              puVar8 = (undefined8 *)(lVar4 + 0x10 + lVar6);
            }
            else {
              puVar7 = (undefined8 *)
                       (*(code *)**(undefined8 **)(param_1 + 0x12))
                                 (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
              if (puVar7 == (undefined8 *)0x0) goto LAB_001149d9;
              *puVar7 = *(undefined8 *)(param_1 + 0x18);
              *(undefined8 **)(param_1 + 0x18) = puVar7;
              puVar8 = puVar7 + 2;
              puVar7[1] = 0x10;
            }
            goto LAB_0011466e;
          }
        }
      }
LAB_0011467a:
      uVar5 = 1;
      goto LAB_001145c2;
    }
  }
LAB_001145c0:
  uVar5 = 0;
LAB_001145c2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
optimize_class_chars_isra_0(int *param_1,long param_2,uint param_3,uint param_4,undefined8 *param_5)

{
  ulong uVar1;
  ushort *puVar2;
  undefined8 uVar3;
  ushort uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  long in_FS_OFFSET;
  ushort local_46 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (cpu_feature_list == 0) {
    get_cpu_features();
  }
  lVar13 = 0;
  iVar11 = 0;
  if ((cpu_feature_list & 0x20) != 0) {
    do {
      uVar12 = (int)lVar13 * 8;
      bVar5 = *(byte *)(param_2 + lVar13);
      if (param_3 != 0) {
        bVar5 = ~*(byte *)(param_2 + lVar13);
      }
joined_r0x00114e68:
      if (bVar5 != 0) {
        if ((bVar5 & 1) != 0) {
          if ((uVar12 & 0x20) == 0) goto LAB_00114e70;
          if (0 < iVar11) goto code_r0x00114e9d;
          if (iVar11 != 0) goto LAB_00114e84;
          goto LAB_00114e79;
        }
        goto LAB_00114e84;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x20);
    if (iVar11 != 0) {
      if (local_46[0] == 0) {
        if (*param_1 == 0) {
          param_1[0x26] = 0;
          lVar13 = emit_x86_instruction(param_1,0x11,0x7f,0,1,0);
          if (lVar13 != 0) {
            *(byte *)(lVar13 + 1) = *(byte *)(lVar13 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(param_1,0x20,4,0);
        lVar13 = 1;
      }
      else {
        sljit_emit_op1(param_1,0x20,4,0,0x7f,0);
        lVar13 = 0;
      }
      iVar14 = 0;
      puVar9 = local_46;
      if ((int)lVar13 < iVar11) {
        do {
          if ((puVar9[lVar13] & 0x100) == 0) {
            if (*param_1 == 0) {
              param_1[0x26] = 0;
              emit_cmp_binary(param_1,1,0,0x7f);
            }
            sljit_emit_select_isra_0(param_1,0,4,1,0,4);
          }
          else {
            iVar14 = iVar14 + 1;
          }
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < iVar11);
        if (iVar14 != 0) {
          if (*param_1 == 0) {
            param_1[0x26] = 0;
            emit_cum_binary(param_1,0xd0b0908,1,0,1,0,0x7f,0x20);
          }
          puVar2 = puVar9 + iVar11;
          do {
            uVar4 = *puVar9;
            if ((uVar4 & 0x100) != 0) {
              if (*param_1 == 0) {
                param_1[0x26] = 0;
                emit_cmp_binary(param_1,1,0,0x7f,(char)uVar4);
              }
              sljit_emit_select_isra_0(param_1,0,4,1,0,4);
            }
            puVar9 = puVar9 + 1;
          } while (puVar2 != puVar9);
        }
      }
      uVar6 = sljit_emit_cmp(param_1,param_4 ^ param_3,4,0,0x7f,0);
      if (*param_1 == 0) {
        lVar13 = *(long *)(param_1 + 0x18);
        lVar10 = *(long *)(lVar13 + 8);
        uVar1 = lVar10 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar13 + 8) = uVar1;
          puVar8 = (undefined8 *)(lVar13 + 0x10 + lVar10);
        }
        else {
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(param_1 + 0x12))
                             (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
          if (puVar7 == (undefined8 *)0x0) {
            *param_1 = 2;
            goto LAB_0011502a;
          }
          *puVar7 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 **)(param_1 + 0x18) = puVar7;
          puVar8 = puVar7 + 2;
          puVar7[1] = 0x10;
        }
        uVar3 = *param_5;
        *puVar8 = uVar6;
        puVar8[1] = uVar3;
        *param_5 = puVar8;
      }
LAB_0011502a:
      uVar6 = 1;
      goto LAB_0011503a;
    }
  }
LAB_00115038:
  uVar6 = 0;
LAB_0011503a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00114e9d:
  iVar14 = 0;
  puVar9 = local_46;
  do {
    if ((uint)*puVar9 == uVar12 - 0x20) {
      local_46[iVar14] = *puVar9 | 0x120;
      if (iVar14 != iVar11) {
        uVar12 = uVar12 + 1;
        bVar5 = bVar5 >> 1;
        goto joined_r0x00114e68;
      }
      break;
    }
    iVar14 = iVar14 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar14 != iVar11);
LAB_00114e70:
  if (2 < iVar11) goto LAB_00115038;
LAB_00114e79:
  lVar10 = (long)iVar11;
  iVar11 = iVar11 + 1;
  local_46[lVar10] = (ushort)uVar12;
LAB_00114e84:
  uVar12 = uVar12 + 1;
  bVar5 = bVar5 >> 1;
  goto joined_r0x00114e68;
}



void fast_forward_start_bits(undefined8 *param_1)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long *local_48;
  long local_40;
  
  lVar8 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)*param_1;
  local_48 = (long *)0x0;
  lVar10 = lVar8 + 0x28;
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    sljit_emit_op1(piVar2,0x20,1,0,0x8e);
    sljit_emit_op1(piVar2,0x20,5,0,0xd,0);
    sljit_emit_op2(piVar2,0x40,1,0,1,0,0x7f,2);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      puVar9 = (undefined1 *)emit_x86_instruction(piVar2,1,0xd,0,1,0);
      if (puVar9 != (undefined1 *)0x0) {
        *puVar9 = 0x3b;
      }
    }
    sljit_emit_select_isra_0(piVar2,4,0xd,1,0,0xd);
  }
  lVar6 = sljit_emit_label(piVar2);
  lVar7 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
  if ((*(int *)(param_1 + 0x14) == 1) && (*piVar2 == 0)) {
    lVar3 = *(long *)(piVar2 + 0x18);
    lVar4 = *(long *)(lVar3 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar3 + 8) = uVar1;
      plVar12 = (long *)(lVar3 + 0x10 + lVar4);
    }
    else {
      puVar11 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar2 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar11 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0011521a;
      }
      *puVar11 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar11;
      plVar12 = puVar11 + 2;
      puVar11[1] = 0x10;
    }
    lVar3 = param_1[0x2d];
    *plVar12 = lVar7;
    plVar12[1] = lVar3;
    param_1[0x2d] = plVar12;
  }
LAB_0011521a:
  sljit_emit_op1(piVar2,0x23,1,0,0x82,0);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,2);
  uVar13 = (uint)(int)*(char *)(lVar8 + 0x47) >> 0x1f;
  iVar5 = optimize_class_ranges_isra_0(*param_1,lVar10,uVar13,0);
  if ((iVar5 == 0) &&
     (iVar5 = optimize_class_chars_isra_0(*param_1,lVar10,uVar13,0,&local_48), iVar5 == 0)) {
    if (*(char *)(lVar8 + 0x47) < '\0') {
      lVar8 = sljit_emit_cmp(piVar2,3,1,0,0x7f,0xff);
    }
    else {
      lVar8 = sljit_emit_cmp(piVar2,3,1,0,0x7f,0xff);
      if ((lVar8 != 0) && (lVar6 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar6;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar8 = 0;
    }
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_cum_binary(piVar2,0x25232120,4,0,1,0,0x7f,7);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_shift_with_flags(piVar2,0x28,0,1,0,1,0,0x7f,3);
      }
    }
    sljit_emit_op1(piVar2,0x21,1,0,0x81,lVar10);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_shift_with_flags(piVar2,0x20,0,3,0,0x7f,1,4,0);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        puVar9 = (undefined1 *)emit_x86_instruction(piVar2,1,1,0,3,0);
        if (puVar9 != (undefined1 *)0x0) {
          *puVar9 = 0x85;
        }
      }
    }
    lVar10 = sljit_emit_jump(piVar2,0);
    if ((lVar10 != 0) && (lVar6 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar6;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if ((lVar8 != 0) && (lVar10 = sljit_emit_label(piVar2), lVar10 != 0)) {
      *(long *)(lVar8 + 0x18) = lVar10;
      *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  else if (local_48 != (long *)0x0) {
    plVar12 = local_48;
    do {
      lVar10 = *plVar12;
      if ((lVar10 != 0) && (lVar6 != 0)) {
        *(long *)(lVar10 + 0x18) = lVar6;
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
      }
      plVar12 = (long *)plVar12[1];
    } while (plVar12 != (long *)0x0);
  }
  sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f,2);
  if (((*(int *)(param_1 + 0x14) == 1) || (lVar10 = sljit_emit_label(piVar2), lVar10 == 0)) ||
     (lVar7 == 0)) {
    iVar5 = *(int *)((long)param_1 + 0x5c);
  }
  else {
    *(long *)(lVar7 + 0x18) = lVar10;
    iVar5 = *(int *)((long)param_1 + 0x5c);
    *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
  }
  if (iVar5 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    sljit_emit_op1(piVar2,0x20,0xd,0,5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void compile_ref_matchingpath
               (undefined8 *param_1,short *param_2,long *param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined8 uVar19;
  long *local_48;
  long local_40;
  
  piVar4 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (long *)0x0;
  if ((ushort)(*param_2 - 0x71U) < 2) {
    iVar17 = (uint)(ushort)param_2[1] * 0x10;
    sljit_emit_op1(piVar4,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar17));
    if (param_4 == 0) {
      iVar3 = *(int *)(param_1 + 0x3c);
      iVar16 = *(int *)((long)param_1 + 0x44);
joined_r0x00116776:
      if ((iVar3 != 0) && (*param_2 == 0x72)) {
LAB_00116848:
        uVar19 = 0x8e;
        lVar13 = (long)(iVar17 + 8 + iVar16);
        goto LAB_00115e5c;
      }
    }
    else {
      iVar16 = *(int *)((long)param_1 + 0x44);
      if (*(int *)(param_1 + 0x3b) != 0) {
        iVar3 = *(int *)(param_1 + 0x3c);
        goto joined_r0x00116776;
      }
      uVar19 = sljit_emit_cmp(piVar4,0,1,0,0x8e,(long)(iVar16 + 8));
      if (*piVar4 == 0) {
        lVar13 = *(long *)(piVar4 + 0x18);
        lVar6 = *(long *)(lVar13 + 8);
        uVar1 = lVar6 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar13 + 8) = uVar1;
          puVar11 = (undefined8 *)(lVar13 + 0x10 + lVar6);
LAB_00115e1d:
          lVar13 = *param_3;
          *puVar11 = uVar19;
          puVar11[1] = lVar13;
          *param_3 = (long)puVar11;
          goto LAB_00115e29;
        }
        puVar8 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar4 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar8;
          puVar11 = puVar8 + 2;
          puVar8[1] = 0x10;
          goto LAB_00115e1d;
        }
        iVar3 = *(int *)(param_1 + 0x3c);
        *piVar4 = 2;
      }
      else {
LAB_00115e29:
        iVar3 = *(int *)(param_1 + 0x3c);
      }
      if ((iVar3 != 0) && (*param_2 == 0x72)) {
        iVar16 = *(int *)((long)param_1 + 0x44);
        goto LAB_00116848;
      }
      iVar16 = *(int *)((long)param_1 + 0x44);
    }
    sljit_emit_op2(piVar4,0x242,4,0,0x8e,(long)(iVar17 + 8 + iVar16),1,0);
    uVar19 = extraout_RDX_00;
  }
  else {
    sljit_emit_op1(piVar4,0x20,1,0,0x84,0);
    if ((*(int *)(param_1 + 0x3c) != 0) && (*param_2 == 0x72)) {
      lVar13 = 8;
      uVar19 = 0x84;
LAB_00115e5c:
      sljit_emit_op1(piVar4,0x20,4,0,uVar19,lVar13);
      if (((param_5 & param_4) != 0) && (uVar19 = sljit_emit_cmp(piVar4,0,1,0,4,0), *piVar4 == 0)) {
        lVar13 = *(long *)(piVar4 + 0x18);
        lVar6 = *(long *)(lVar13 + 8);
        uVar1 = lVar6 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar13 + 8) = uVar1;
          puVar11 = (undefined8 *)(lVar13 + 0x10 + lVar6);
        }
        else {
          puVar8 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar4 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar8 == (undefined8 *)0x0) {
            *piVar4 = 2;
            goto LAB_00115e7a;
          }
          *puVar8 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar8;
          puVar11 = puVar8 + 2;
          puVar8[1] = 0x10;
        }
        lVar13 = *param_3;
        *puVar11 = uVar19;
        puVar11[1] = lVar13;
        *param_3 = (long)puVar11;
      }
LAB_00115e7a:
      sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)((long)param_1 + 0x1ec),10,0);
      sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)((long)param_1 + 0x1ec) + 8,9,0);
      sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)((long)param_1 + 0x1ec) + 0x10,0xb,0);
      sljit_emit_op1(piVar4,0x20,10,0,1,0);
      sljit_emit_op1(piVar4,0x20,9,0,4,0);
      lVar13 = sljit_emit_label(piVar4);
      lVar6 = sljit_emit_cmp(piVar4,3,10,0,9,0);
      lVar9 = sljit_emit_cmp(piVar4,3,2,0,0xd,0);
      sljit_emit_op1(piVar4,0x20,3,0,2,0);
      sljit_emit_op1(piVar4,0x20,2,0,10,0);
      read_char_isra_0(param_1,0x7fffffff,0,5);
      sljit_emit_op1(piVar4,0x20,10,0,2,0);
      sljit_emit_op1(piVar4,0x20,2,0,3,0);
      sljit_emit_op1(piVar4,0x20,0xb,0,1,0);
      read_char_isra_0(param_1,0x7fffffff,&local_48,1);
      lVar10 = sljit_emit_cmp(piVar4,0,1,0,0xb,0);
      bVar18 = lVar13 != 0;
      if ((lVar10 != 0) && (bVar18)) {
        *(long *)(lVar10 + 0x18) = lVar13;
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
      }
      sljit_emit_op1(piVar4,0x20,3,0,1,0);
      uVar19 = sljit_emit_jump(piVar4,0x25);
      if (*piVar4 == 0) {
        lVar10 = *(long *)(piVar4 + 0x18);
        uVar1 = *(long *)(lVar10 + 8) + 0x10;
        if (uVar1 < 0xff1) {
          puVar11 = (undefined8 *)(lVar10 + 0x10 + *(long *)(lVar10 + 8));
          uVar2 = param_1[0x3e];
          *(ulong *)(lVar10 + 8) = uVar1;
          *puVar11 = uVar19;
          puVar11[1] = uVar2;
          param_1[0x3e] = puVar11;
LAB_0011610c:
          piVar4[0x26] = 0;
          emit_shift_with_flags(piVar4,0x20,0,1,0,4,0,0x7f,2);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_shift_with_flags(piVar4,0x20,0,4,0,4,0,0x7f,3);
          }
        }
        else {
          puVar11 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar4 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar11 == (undefined8 *)0x0) {
            *piVar4 = 2;
          }
          else {
            uVar2 = param_1[0x3e];
            *puVar11 = *(undefined8 *)(piVar4 + 0x18);
            iVar17 = *piVar4;
            *(undefined8 **)(piVar4 + 0x18) = puVar11;
            puVar11[1] = 0x10;
            puVar11[2] = uVar19;
            puVar11[3] = uVar2;
            param_1[0x3e] = puVar11 + 2;
            if (iVar17 == 0) goto LAB_0011610c;
          }
        }
      }
      sljit_emit_op2(piVar4,0x40,4,0,4,0,1,0);
      sljit_emit_op2(piVar4,0x40,4,0,4,0,0x7f,&_pcre2_ucd_records_16);
      sljit_emit_op1(piVar4,0x26,1,0,0x84,4);
      sljit_emit_op1(piVar4,0x21,4,0,0x84);
      sljit_emit_op2(piVar4,0x40,1,0,1,0,3,0);
      lVar10 = sljit_emit_cmp(piVar4,0,1,0,0xb);
      if ((lVar10 != 0) && (bVar18)) {
        *(long *)(lVar10 + 0x18) = lVar13;
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar10 = sljit_emit_cmp(piVar4,0,4,0,0x7f);
      plVar12 = local_48;
      if (*piVar4 == 0) {
        lVar15 = *(long *)(piVar4 + 0x18);
        uVar1 = *(long *)(lVar15 + 8) + 0x10;
        if (uVar1 < 0xff1) {
          plVar12 = (long *)(lVar15 + 0x10 + *(long *)(lVar15 + 8));
          *(ulong *)(lVar15 + 8) = uVar1;
          *plVar12 = lVar10;
          plVar12[1] = (long)local_48;
LAB_001162f4:
          piVar4[0x26] = 0;
          local_48 = plVar12;
          emit_shift_with_flags(piVar4,0x20,0,4,0,4,0,0x7f,2);
        }
        else {
          puVar11 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar4 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar11 == (undefined8 *)0x0) {
            *piVar4 = 2;
            plVar12 = local_48;
          }
          else {
            plVar12 = puVar11 + 2;
            *puVar11 = *(undefined8 *)(piVar4 + 0x18);
            iVar17 = *piVar4;
            *(undefined8 **)(piVar4 + 0x18) = puVar11;
            puVar11[1] = 0x10;
            puVar11[2] = lVar10;
            puVar11[3] = local_48;
            local_48 = plVar12;
            if (iVar17 == 0) goto LAB_001162f4;
          }
        }
      }
      sljit_emit_op2(piVar4,0x40,4,0,4,0,0x7f,&_pcre2_ucd_caseless_sets_16);
      lVar10 = sljit_emit_label(piVar4);
      sljit_emit_op1(piVar4,0x25,1,0,0x84);
      sljit_emit_op2(piVar4,0x40,4,0,4,0,0x7f,4);
      if (*piVar4 == 0) {
        piVar4[0x26] = 0;
        puVar14 = (undefined1 *)emit_x86_instruction(piVar4,1,1,0,0xb,0);
        if (puVar14 != (undefined1 *)0x0) {
          *puVar14 = 0x3b;
        }
      }
      lVar15 = sljit_emit_jump(piVar4,0);
      if ((lVar15 != 0) && (bVar18)) {
        *(long *)(lVar15 + 0x18) = lVar13;
        *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar13 = sljit_emit_jump(piVar4,2);
      if ((lVar13 != 0) && (lVar10 != 0)) {
        *(long *)(lVar13 + 0x18) = lVar10;
        *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar13 = sljit_emit_label(piVar4);
      for (plVar5 = plVar12; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
        lVar10 = *plVar5;
        if ((lVar10 != 0) && (lVar13 != 0)) {
          *(long *)(lVar10 + 0x18) = lVar13;
          *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      if (((*(int *)(param_1 + 0x14) == 1) && (lVar13 = sljit_emit_label(piVar4), lVar13 != 0)) &&
         (lVar9 != 0)) {
        *(long *)(lVar9 + 0x18) = lVar13;
        *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
      }
      sljit_emit_op1(piVar4,0x20,10,0,0x8e,(long)*(int *)((long)param_1 + 0x1ec));
      sljit_emit_op1(piVar4,0x20,9,0,0x8e,(long)*(int *)((long)param_1 + 0x1ec) + 8);
      sljit_emit_op1(piVar4,0x20,0xb,0,0x8e,(long)*(int *)((long)param_1 + 0x1ec) + 0x10);
      uVar19 = sljit_emit_jump(piVar4,0x24);
      if (*piVar4 == 0) {
        lVar13 = *(long *)(piVar4 + 0x18);
        lVar10 = *(long *)(lVar13 + 8);
        uVar1 = lVar10 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar13 + 8) = uVar1;
          puVar11 = (undefined8 *)(lVar13 + 0x10 + lVar10);
        }
        else {
          puVar8 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar4 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar8 == (undefined8 *)0x0) {
            *piVar4 = 2;
            goto LAB_0011658b;
          }
          *puVar8 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar8;
          puVar11 = puVar8 + 2;
          puVar8[1] = 0x10;
        }
        lVar13 = *param_3;
        *puVar11 = uVar19;
        puVar11[1] = lVar13;
        *param_3 = (long)puVar11;
      }
LAB_0011658b:
      if (*(int *)(param_1 + 0x14) != 1) {
        lVar13 = sljit_emit_label(piVar4);
        if ((lVar13 != 0) && (lVar9 != 0)) {
          *(long *)(lVar9 + 0x18) = lVar13;
          *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
        }
        sljit_emit_op1(piVar4,0x20,10,0,0x8e,(long)*(int *)((long)param_1 + 0x1ec));
        sljit_emit_op1(piVar4,0x20,9,0,0x8e,(long)*(int *)((long)param_1 + 0x1ec) + 8);
        sljit_emit_op1(piVar4,0x20,0xb,0,0x8e,(long)*(int *)((long)param_1 + 0x1ec) + 0x10);
        check_partial(param_1,0);
        uVar19 = sljit_emit_jump(piVar4,0x24);
        if (*piVar4 == 0) {
          lVar13 = *(long *)(piVar4 + 0x18);
          lVar9 = *(long *)(lVar13 + 8);
          uVar1 = lVar9 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar13 + 8) = uVar1;
            puVar11 = (undefined8 *)(lVar13 + 0x10 + lVar9);
          }
          else {
            puVar8 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar4 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
            if (puVar8 == (undefined8 *)0x0) {
              *piVar4 = 2;
              goto LAB_001166a4;
            }
            *puVar8 = *(undefined8 *)(piVar4 + 0x18);
            *(undefined8 **)(piVar4 + 0x18) = puVar8;
            puVar11 = puVar8 + 2;
            puVar8[1] = 0x10;
          }
          lVar13 = *param_3;
          *puVar11 = uVar19;
          puVar11[1] = lVar13;
          *param_3 = (long)puVar11;
        }
      }
LAB_001166a4:
      lVar13 = sljit_emit_label(piVar4);
      if ((lVar13 != 0) && (lVar6 != 0)) {
        plVar12 = *(long **)(lVar6 + 0x10);
        *(long *)(lVar6 + 0x18) = lVar13;
        *(ulong *)(lVar6 + 0x10) = (ulong)plVar12 & 0xfffffffffffffffd | 1;
      }
      sljit_emit_op1(piVar4,0x20,10,0,0x8e,(long)*(int *)((long)param_1 + 0x1ec),plVar12);
      sljit_emit_op1(piVar4,0x20,9,0,0x8e,(long)*(int *)((long)param_1 + 0x1ec) + 8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        sljit_emit_op1(piVar4,0x20,0xb,0,0x8e,(long)*(int *)((long)param_1 + 0x1ec) + 0x10);
        return;
      }
      goto LAB_00116a3c;
    }
    uVar19 = extraout_RDX;
    if (*piVar4 == 0) {
      piVar4[0x26] = 0;
      uVar19 = 0;
      emit_non_cum_binary(piVar4,0x2d2b2928,4,0,0x84,8,1);
    }
  }
  lVar13 = 0;
  if (param_4 != 0) {
    lVar13 = sljit_emit_jump(piVar4,0,uVar19);
  }
  sljit_emit_op2(piVar4,0x40,2,0,2,0,4,0);
  lVar6 = sljit_emit_cmp(piVar4,4,2,0,0xd,0);
  if ((*(int *)(param_1 + 0x14) == 1) && (*piVar4 == 0)) {
    lVar9 = *(long *)(piVar4 + 0x18);
    lVar10 = *(long *)(lVar9 + 8);
    uVar1 = lVar10 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      plVar12 = (long *)(lVar9 + 0x10 + lVar10);
    }
    else {
      puVar11 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar4 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar11 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_00115809;
      }
      *puVar11 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar11;
      plVar12 = puVar11 + 2;
      puVar11[1] = 0x10;
    }
    lVar9 = *param_3;
    *plVar12 = lVar6;
    plVar12[1] = lVar9;
    *param_3 = (long)plVar12;
  }
LAB_00115809:
  uVar19 = sljit_emit_jump(piVar4,0x25);
  puVar11 = param_1 + 0x38;
  if (*param_2 == 0x71) {
    puVar11 = param_1 + 0x37;
  }
  if (*piVar4 == 0) {
    lVar9 = *(long *)(piVar4 + 0x18);
    lVar10 = *(long *)(lVar9 + 8);
    uVar1 = lVar10 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      puVar8 = (undefined8 *)(lVar9 + 0x10 + lVar10);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar4 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_001158a0;
      }
      *puVar7 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar7;
      puVar8 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar2 = *puVar11;
    *puVar8 = uVar19;
    puVar8[1] = uVar2;
    *puVar11 = puVar8;
  }
LAB_001158a0:
  uVar19 = sljit_emit_cmp(piVar4,1,4,0,0x7f,0);
  if (*piVar4 == 0) {
    lVar9 = *(long *)(piVar4 + 0x18);
    lVar10 = *(long *)(lVar9 + 8);
    uVar1 = lVar10 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      puVar11 = (undefined8 *)(lVar9 + 0x10 + lVar10);
    }
    else {
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar4 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar8 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_0011592a;
      }
      *puVar8 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar8;
      puVar11 = puVar8 + 2;
      puVar8[1] = 0x10;
    }
    lVar9 = *param_3;
    *puVar11 = uVar19;
    puVar11[1] = lVar9;
    *param_3 = (long)puVar11;
  }
LAB_0011592a:
  if (*(int *)(param_1 + 0x14) != 1) {
    lVar9 = sljit_emit_jump(piVar4,0x24);
    lVar10 = sljit_emit_label(piVar4);
    if ((lVar10 != 0) && (lVar6 != 0)) {
      *(long *)(lVar6 + 0x18) = lVar10;
      *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
    }
    sljit_emit_op2(piVar4,0x42,4,0,4,0,2,0);
    sljit_emit_op2(piVar4,0x40,4,0,4,0,0xd,0);
    lVar6 = sljit_emit_cmp(piVar4,0,4,0,0x7f,0);
    sljit_emit_op1(piVar4,0x20,2,0,0xd,0);
    uVar19 = sljit_emit_jump(piVar4,0x25);
    puVar11 = param_1 + 0x38;
    if (*param_2 == 0x71) {
      puVar11 = param_1 + 0x37;
    }
    if (*piVar4 == 0) {
      lVar10 = *(long *)(piVar4 + 0x18);
      lVar15 = *(long *)(lVar10 + 8);
      uVar1 = lVar15 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar1;
        puVar8 = (undefined8 *)(lVar10 + 0x10 + lVar15);
      }
      else {
        puVar7 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar4 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar7 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_00115a81;
        }
        *puVar7 = *(undefined8 *)(piVar4 + 0x18);
        *(undefined8 **)(piVar4 + 0x18) = puVar7;
        puVar8 = puVar7 + 2;
        puVar7[1] = 0x10;
      }
      uVar2 = *puVar11;
      *puVar8 = uVar19;
      puVar8[1] = uVar2;
      *puVar11 = puVar8;
    }
LAB_00115a81:
    uVar19 = sljit_emit_cmp(piVar4,1,4,0,0x7f,0);
    if (*piVar4 == 0) {
      lVar10 = *(long *)(piVar4 + 0x18);
      lVar15 = *(long *)(lVar10 + 8);
      uVar1 = lVar15 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar1;
        puVar11 = (undefined8 *)(lVar10 + 0x10 + lVar15);
      }
      else {
        puVar8 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar4 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar8 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_00115b09;
        }
        *puVar8 = *(undefined8 *)(piVar4 + 0x18);
        *(undefined8 **)(piVar4 + 0x18) = puVar8;
        puVar11 = puVar8 + 2;
        puVar8[1] = 0x10;
      }
      lVar10 = *param_3;
      *puVar11 = uVar19;
      puVar11[1] = lVar10;
      *param_3 = (long)puVar11;
    }
LAB_00115b09:
    lVar10 = sljit_emit_label(piVar4);
    if ((lVar10 != 0) && (lVar6 != 0)) {
      *(long *)(lVar6 + 0x18) = lVar10;
      *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
    }
    check_partial(param_1,0);
    uVar19 = sljit_emit_jump(piVar4,0x24);
    if (*piVar4 == 0) {
      lVar6 = *(long *)(piVar4 + 0x18);
      lVar10 = *(long *)(lVar6 + 8);
      uVar1 = lVar10 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar6 + 8) = uVar1;
        puVar11 = (undefined8 *)(lVar6 + 0x10 + lVar10);
      }
      else {
        puVar8 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar4 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar8 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_00115bb1;
        }
        *puVar8 = *(undefined8 *)(piVar4 + 0x18);
        *(undefined8 **)(piVar4 + 0x18) = puVar8;
        puVar11 = puVar8 + 2;
        puVar8[1] = 0x10;
      }
      lVar6 = *param_3;
      *puVar11 = uVar19;
      puVar11[1] = lVar6;
      *param_3 = (long)puVar11;
    }
LAB_00115bb1:
    lVar6 = sljit_emit_label(piVar4);
    if ((lVar6 != 0) && (lVar9 != 0)) {
      *(long *)(lVar9 + 0x18) = lVar6;
      *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  if (lVar13 != 0) {
    if (param_5 == 0) {
      lVar6 = sljit_emit_label(piVar4);
      if (lVar6 != 0) {
        *(long *)(lVar13 + 0x18) = lVar6;
        *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    else if (*piVar4 == 0) {
      lVar6 = *(long *)(piVar4 + 0x18);
      lVar9 = *(long *)(lVar6 + 8);
      uVar1 = lVar9 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar6 + 8) = uVar1;
        plVar12 = (long *)(lVar6 + 0x10 + lVar9);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar4 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar11 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_00115c53;
        }
        *puVar11 = *(undefined8 *)(piVar4 + 0x18);
        *(undefined8 **)(piVar4 + 0x18) = puVar11;
        plVar12 = puVar11 + 2;
        puVar11[1] = 0x10;
      }
      lVar6 = *param_3;
      *plVar12 = lVar13;
      plVar12[1] = lVar6;
      *param_3 = (long)plVar12;
    }
  }
LAB_00115c53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00116a3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



short * compile_ref_iterator_matchingpath(undefined8 *param_1,short *param_2,long param_3)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  short *psVar16;
  undefined8 uVar17;
  int iVar18;
  long lVar19;
  bool bVar20;
  int *piVar21;
  short *local_60;
  undefined1 *local_48;
  undefined8 local_40;
  
  piVar6 = (int *)*param_1;
  uVar7 = *param_2 - 0x71;
  if ((*piVar6 != 0) || (pauVar9 = (undefined1 (*) [16])ensure_abuf(piVar6,0x30), *piVar6 != 0)) {
    return (short *)0x0;
  }
  iVar5 = 0;
  *pauVar9 = (undefined1  [16])0x0;
  pauVar9[2] = (undefined1  [16])0x0;
  pauVar9[1] = (undefined1  [16])0x0;
  uVar17 = *(undefined8 *)(param_3 + 0x10);
  *(short **)pauVar9[2] = param_2;
  *(undefined8 *)*pauVar9 = uVar17;
  local_60 = param_2 + 1;
  *(undefined1 (**) [16])(param_3 + 0x10) = pauVar9;
  if (uVar7 < 2) {
    iVar5 = (uint)(ushort)param_2[1] * 2;
    local_60 = param_2;
  }
  uVar2 = local_60[2];
  uVar8 = uVar2 & 1;
  uVar4 = 0;
  if (uVar2 < 0x68) {
    if (0x65 < uVar2) {
      if (uVar8 != 0) {
        uVar3 = 0;
        uVar4 = 1;
        local_60 = local_60 + 3;
        goto LAB_00116ed6;
      }
      uVar4 = 1;
      bVar20 = false;
      local_60 = local_60 + 3;
      goto LAB_0011747b;
    }
    if (uVar2 < 100) {
      if (0x61 < uVar2) {
        local_60 = local_60 + 3;
      }
      goto LAB_00116ec5;
    }
    local_60 = local_60 + 3;
    if (uVar8 != 0) {
      uVar17 = *param_1;
      uVar3 = 1;
      if (1 < uVar7) goto LAB_00116ee5;
LAB_00116b61:
      sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f,0x10);
      local_40 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
      piVar21 = (int *)*param_1;
      if ((*piVar21 == 0) &&
         (puVar10 = (undefined8 *)ensure_abuf(piVar21,0x18), puVar10 != (undefined8 *)0x0)) {
LAB_00116bd2:
        *puVar10 = local_40;
        uVar11 = sljit_emit_label(piVar21);
        uVar17 = param_1[0x26];
        puVar10[1] = uVar11;
        puVar10[2] = uVar17;
        param_1[0x26] = puVar10;
        if (1 < uVar7) goto LAB_00116c0e;
      }
      sljit_emit_op1(piVar6,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar5 * 8));
      goto LAB_00116c0e;
    }
    uVar3 = 1;
    bVar20 = false;
    uVar4 = 0;
LAB_0011723b:
    uVar17 = *param_1;
    uVar11 = 8;
    sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f);
    uVar17 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
    piVar21 = (int *)*param_1;
    if ((*piVar21 == 0) &&
       (puVar10 = (undefined8 *)ensure_abuf(piVar21,0x18,uVar11), puVar10 != (undefined8 *)0x0)) {
      *puVar10 = uVar17;
      uVar11 = sljit_emit_label(piVar21);
      uVar17 = param_1[0x26];
      puVar10[1] = uVar11;
      puVar10[2] = uVar17;
      param_1[0x26] = puVar10;
    }
    if (1 < uVar7) {
      sljit_emit_op1(piVar6,0x20,0x8c,0,0x7f,0);
      compile_dnref_search(param_1,param_2,pauVar9[1] + 8);
      sljit_emit_op1(piVar6,0x20,1,0,0x84,0);
      sljit_emit_op1(piVar6,0x20,0x8e,0x18,4,0);
      lVar19 = sljit_emit_cmp(piVar6,0,1,0,0x84,8);
      goto LAB_00117382;
    }
    sljit_emit_op1(piVar6,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar5 * 8));
    sljit_emit_op1(piVar6,0x20,0x8c,0,0x7f,0);
    if ((*(int *)(param_1 + 0x3b) == 0) &&
       (uVar17 = sljit_emit_cmp(piVar6,0,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8)),
       *piVar6 == 0)) {
      lVar19 = *(long *)(piVar6 + 0x18);
      lVar12 = *(long *)(lVar19 + 8);
      uVar1 = lVar12 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar19 + 8) = uVar1;
        puVar10 = (undefined8 *)(lVar19 + 0x10 + lVar12);
      }
      else {
        puVar14 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar6 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
        if (puVar14 == (undefined8 *)0x0) {
          *piVar6 = 2;
          goto LAB_00117828;
        }
        *puVar14 = *(undefined8 *)(piVar6 + 0x18);
        puVar10 = puVar14 + 2;
        *(undefined8 **)(piVar6 + 0x18) = puVar14;
        puVar14[1] = 0x10;
      }
      uVar11 = *(undefined8 *)(pauVar9[1] + 8);
      *puVar10 = uVar17;
      puVar10[1] = uVar11;
      *(undefined8 **)(pauVar9[1] + 8) = puVar10;
    }
LAB_00117828:
    lVar19 = sljit_emit_cmp(piVar6,0,1,0,0x8e,(long)(iVar5 * 8 + 8 + *(int *)((long)param_1 + 0x44))
                           );
    if (bVar20) {
      sljit_emit_op1(piVar6,0x20,0x8e,0x10,0x7f,0);
      lVar12 = sljit_emit_label(piVar6);
      goto LAB_001178e2;
    }
    lVar12 = sljit_emit_label(piVar6);
LAB_001173bd:
    local_48 = pauVar9[1] + 8;
    compile_ref_matchingpath(param_1,param_2,local_48,0,0);
LAB_001173d2:
    if (uVar4 == 0) {
      uVar17 = *param_1;
      uVar11 = 8;
      sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f);
      uVar17 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
      piVar21 = (int *)*param_1;
      if ((*piVar21 == 0) &&
         (puVar10 = (undefined8 *)ensure_abuf(piVar21,0x18,uVar11), puVar10 != (undefined8 *)0x0)) {
        *puVar10 = uVar17;
        uVar11 = sljit_emit_label(piVar21);
        uVar17 = param_1[0x26];
        puVar10[1] = uVar11;
        puVar10[2] = uVar17;
        param_1[0x26] = puVar10;
      }
      sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
      lVar13 = sljit_emit_jump(piVar6,0x24);
      if ((lVar13 != 0) && (lVar12 != 0)) {
        *(long *)(lVar13 + 0x18) = lVar12;
        *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
  }
  else {
    if ((ushort)(uVar2 - 0x68) < 2) {
      uVar3 = local_60[3];
      psVar16 = local_60 + 5;
      uVar4 = local_60[4];
      local_60 = psVar16;
      if (uVar8 != 0) goto LAB_00116ed6;
      bVar20 = 1 < uVar4;
      if (uVar3 != 0) {
        bVar20 = bVar20 || 1 < uVar3;
        goto LAB_0011723b;
      }
    }
    else {
LAB_00116ec5:
      if (uVar8 != 0) {
        uVar3 = 0;
LAB_00116ed6:
        uVar17 = *param_1;
        if (uVar7 < 2) goto LAB_00116b61;
LAB_00116ee5:
        sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f,0x18);
        local_40 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
        piVar21 = (int *)*param_1;
        if ((*piVar21 == 0) &&
           (puVar10 = (undefined8 *)ensure_abuf(piVar21,0x18), puVar10 != (undefined8 *)0x0))
        goto LAB_00116bd2;
LAB_00116c0e:
        sljit_emit_op1(piVar6,0x20,0x8c,0,0x7f,0);
        if (uVar2 != 99) {
          sljit_emit_op1(piVar6,0x20,0x8c,8,0x7f,0);
        }
        if (uVar3 == 0) {
          if (uVar7 < 2) {
            uVar17 = 0x8e;
            lVar19 = (long)(*(int *)((long)param_1 + 0x44) + 8 + iVar5 * 8);
          }
          else {
            compile_dnref_search(param_1,param_2,0);
            sljit_emit_op1(piVar6,0x20,1,0,0x84,0);
            sljit_emit_op1(piVar6,0x20,0x8c,0x10,4,0);
            lVar19 = 8;
            uVar17 = 0x84;
          }
          lVar19 = sljit_emit_cmp(piVar6,0,1,0,uVar17,lVar19);
          sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
          lVar12 = sljit_emit_jump(piVar6,0x24);
          uVar17 = sljit_emit_label(piVar6);
          *(undefined8 *)(pauVar9[2] + 8) = uVar17;
          if (uVar4 == 0) {
            if (1 < uVar7) goto LAB_001170c9;
            compile_ref_matchingpath(param_1,param_2,pauVar9[1] + 8,1,1);
            sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
          }
          else {
            uVar17 = sljit_emit_cmp(piVar6,3,0x8c,8,0x7f,uVar4);
            if (*piVar6 == 0) {
LAB_00117758:
              lVar13 = *(long *)(piVar6 + 0x18);
              lVar15 = *(long *)(lVar13 + 8);
              uVar1 = lVar15 + 0x10;
              if (uVar1 < 0xff1) {
                *(ulong *)(lVar13 + 8) = uVar1;
                puVar10 = (undefined8 *)(lVar13 + 0x10 + lVar15);
              }
              else {
                puVar14 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
                if (puVar14 == (undefined8 *)0x0) {
                  *piVar6 = 2;
                  goto LAB_001177b8;
                }
                *puVar14 = *(undefined8 *)(piVar6 + 0x18);
                *(undefined8 **)(piVar6 + 0x18) = puVar14;
                puVar10 = puVar14 + 2;
                puVar14[1] = 0x10;
              }
              uVar11 = *(undefined8 *)(pauVar9[1] + 8);
              *puVar10 = uVar17;
              puVar10[1] = uVar11;
              *(undefined8 **)(pauVar9[1] + 8) = puVar10;
            }
LAB_001177b8:
            if (1 < uVar7) goto LAB_001170c9;
LAB_001170e9:
            local_48 = pauVar9[1] + 8;
            compile_ref_matchingpath(param_1,param_2,local_48,1,1);
            sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
            if (uVar3 < 2) {
              if (uVar4 != 0) {
                sljit_emit_op2(piVar6,0x40,0x8c,8,0x8c,8,0x7f);
              }
            }
            else {
LAB_0011712c:
              sljit_emit_op1(piVar6,0x20,1,0,0x8c,8);
              sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,1);
              sljit_emit_op1(piVar6,0x20,0x8c,8,1,0);
              lVar13 = *(long *)(pauVar9[2] + 8);
              lVar15 = sljit_emit_cmp(piVar6,2,1,0,0x7f,uVar3);
              if ((lVar13 != 0) && (lVar15 != 0)) {
                *(long *)(lVar15 + 0x18) = lVar13;
                *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
          }
          if ((lVar12 != 0) && (lVar13 = sljit_emit_label(piVar6), lVar13 != 0)) {
            *(long *)(lVar12 + 0x18) = lVar13;
            *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        else {
          if (1 < uVar7) {
            lVar12 = 0;
            compile_dnref_search(param_1,param_2,pauVar9[1] + 8);
            sljit_emit_op1(piVar6,0x20,1,0,0x84,0);
            sljit_emit_op1(piVar6,0x20,0x8c,0x10,4,0);
            lVar19 = sljit_emit_cmp(piVar6,0,1,0,0x84,8);
            uVar17 = sljit_emit_label(piVar6);
            *(undefined8 *)(pauVar9[2] + 8) = uVar17;
            if ((uVar4 != 0) && (uVar17 = sljit_emit_cmp(piVar6,3,0x8c,8,0x7f,uVar4), *piVar6 == 0))
            goto LAB_00117758;
LAB_001170c9:
            sljit_emit_op1(piVar6,0x20,4,0,0x8c,0x10);
            goto LAB_001170e9;
          }
          iVar18 = *(int *)((long)param_1 + 0x44);
          if (*(int *)(param_1 + 0x3b) == 0) {
            uVar17 = sljit_emit_cmp(piVar6,0,1,0,0x8e,(long)(iVar18 + 8));
            if (*piVar6 == 0) {
              lVar19 = *(long *)(piVar6 + 0x18);
              lVar12 = *(long *)(lVar19 + 8);
              uVar1 = lVar12 + 0x10;
              if (uVar1 < 0xff1) {
                *(ulong *)(lVar19 + 8) = uVar1;
                puVar10 = (undefined8 *)(lVar19 + 0x10 + lVar12);
              }
              else {
                puVar14 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
                if (puVar14 == (undefined8 *)0x0) {
                  *piVar6 = 2;
                  iVar18 = *(int *)((long)param_1 + 0x44);
                  goto LAB_00116f7f;
                }
                *puVar14 = *(undefined8 *)(piVar6 + 0x18);
                *(undefined8 **)(piVar6 + 0x18) = puVar14;
                puVar10 = puVar14 + 2;
                puVar14[1] = 0x10;
              }
              uVar11 = *(undefined8 *)(pauVar9[1] + 8);
              *puVar10 = uVar17;
              puVar10[1] = uVar11;
              *(undefined8 **)(pauVar9[1] + 8) = puVar10;
            }
            iVar18 = *(int *)((long)param_1 + 0x44);
          }
LAB_00116f7f:
          lVar19 = sljit_emit_cmp(piVar6,0,1,0,0x8e,(long)(iVar18 + 8 + iVar5 * 8));
          uVar17 = sljit_emit_label(piVar6);
          *(undefined8 *)(pauVar9[2] + 8) = uVar17;
          if (uVar4 != 0) {
            lVar12 = 0;
            uVar17 = sljit_emit_cmp(piVar6,3,0x8c,8,0x7f,uVar4);
            if (*piVar6 == 0) goto LAB_00117758;
            goto LAB_001170e9;
          }
          compile_ref_matchingpath(param_1,param_2,pauVar9[1] + 8,1,1);
          sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
          if (uVar3 != 1) {
            lVar12 = 0;
            goto LAB_0011712c;
          }
        }
        lVar12 = sljit_emit_label(piVar6);
        if ((lVar19 != 0) && (lVar12 != 0)) {
          *(long *)(lVar19 + 0x18) = lVar12;
          *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffd | 1;
        }
        piVar6 = (int *)*param_1;
        iVar5 = *piVar6;
        goto joined_r0x0011741b;
      }
      uVar4 = 0;
      bVar20 = false;
    }
LAB_0011747b:
    uVar17 = *param_1;
    sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f,0x10);
    uVar17 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
    piVar21 = (int *)*param_1;
    if ((*piVar21 == 0) &&
       (puVar10 = (undefined8 *)ensure_abuf(piVar21,0x18), puVar10 != (undefined8 *)0x0)) {
      *puVar10 = uVar17;
      uVar11 = sljit_emit_label(piVar21);
      uVar17 = param_1[0x26];
      puVar10[1] = uVar11;
      puVar10[2] = uVar17;
      param_1[0x26] = puVar10;
    }
    if (uVar7 < 2) {
      sljit_emit_op1(piVar6,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar5 * 8));
      sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
      sljit_emit_op1(piVar6,0x20,0x8c,8,0x7f,0);
      sljit_emit_op2(piVar6,0x40,0xc,0,0xc,0,0x7f,8);
      uVar17 = 0x8e;
      lVar19 = (long)(iVar5 * 8 + 8 + *(int *)((long)param_1 + 0x44));
    }
    else {
      sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
      sljit_emit_op1(piVar6,0x20,0x8c,8,0x7f,0);
      sljit_emit_op2(piVar6,0x40,0xc,0,0xc,0,0x7f,8);
      compile_dnref_search(param_1,param_2,0);
      sljit_emit_op1(piVar6,0x20,1,0,0x84,0);
      sljit_emit_op1(piVar6,0x20,0x8e,0x18,4,0);
      lVar19 = 8;
      uVar17 = 0x84;
    }
    lVar19 = sljit_emit_cmp(piVar6,0,1,0,uVar17,lVar19);
    sljit_emit_op2(piVar6,0x42,0xc,0,0xc,0,0x7f,8);
    uVar3 = 0;
LAB_00117382:
    if (!bVar20) {
      lVar12 = sljit_emit_label(piVar6);
      if (1 < uVar7) {
        sljit_emit_op1(piVar6,0x20,4,0,0x8e,0x18);
      }
      goto LAB_001173bd;
    }
    sljit_emit_op1(piVar6,0x20,0x8e,0x10,0x7f,0);
    lVar12 = sljit_emit_label(piVar6);
    if (1 < uVar7) {
      sljit_emit_op1(piVar6,0x20,4,0,0x8e,0x18);
    }
LAB_001178e2:
    local_48 = pauVar9[1] + 8;
    compile_ref_matchingpath(param_1,param_2,local_48,0,0);
    sljit_emit_op1(piVar6,0x20,1,0,0x8e,0x10);
    sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,1);
    sljit_emit_op1(piVar6,0x20,0x8e,0x10,1,0);
    if (1 < uVar3) {
      lVar13 = sljit_emit_cmp(piVar6,2,1,0,0x7f,uVar3);
      if ((lVar13 != 0) && (lVar12 != 0)) {
        *(long *)(lVar13 + 0x18) = lVar12;
        *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (1 < uVar4) goto LAB_0011796e;
      goto LAB_001173d2;
    }
LAB_0011796e:
    lVar13 = sljit_emit_cmp(piVar6,3,1,0,0x7f,uVar4);
    uVar17 = *param_1;
    sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f,8);
    uVar17 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
    piVar21 = (int *)*param_1;
    if ((*piVar21 == 0) &&
       (puVar10 = (undefined8 *)ensure_abuf(piVar21,0x18), puVar10 != (undefined8 *)0x0)) {
      *puVar10 = uVar17;
      uVar11 = sljit_emit_label(piVar21);
      uVar17 = param_1[0x26];
      puVar10[1] = uVar11;
      puVar10[2] = uVar17;
      param_1[0x26] = puVar10;
    }
    sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
    lVar15 = sljit_emit_jump(piVar6,0x24);
    if ((lVar15 != 0) && (lVar12 != 0)) {
      *(long *)(lVar15 + 0x18) = lVar12;
      *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar12 = sljit_emit_label(piVar6);
    if ((lVar13 != 0) && (lVar12 != 0)) {
      *(long *)(lVar13 + 0x18) = lVar12;
      *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  lVar12 = sljit_emit_label(piVar6);
  if ((lVar12 != 0) && (lVar19 != 0)) {
    *(long *)(lVar19 + 0x18) = lVar12;
    *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffd | 1;
  }
  uVar17 = sljit_emit_label(piVar6);
  piVar6 = (int *)*param_1;
  *(undefined8 *)(pauVar9[2] + 8) = uVar17;
  iVar5 = *piVar6;
joined_r0x0011741b:
  if (iVar5 == 0) {
    piVar6[0x26] = 0;
    emit_non_cum_binary(piVar6,0x2d2b2928,10,0,10,0,0x7f,1);
  }
  uVar17 = sljit_emit_jump(piVar6,0);
  if (*piVar6 == 0) {
    lVar19 = *(long *)(piVar6 + 0x18);
    lVar12 = *(long *)(lVar19 + 8);
    uVar1 = lVar12 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar19 + 8) = uVar1;
      puVar10 = (undefined8 *)(lVar19 + 0x10 + lVar12);
    }
    else {
      puVar14 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar6 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
      if (puVar14 == (undefined8 *)0x0) {
        *piVar6 = 2;
        return local_60;
      }
      *puVar14 = *(undefined8 *)(piVar6 + 0x18);
      *(undefined8 **)(piVar6 + 0x18) = puVar14;
      puVar10 = puVar14 + 2;
      puVar14[1] = 0x10;
    }
    uVar11 = param_1[0x2f];
    *puVar10 = uVar17;
    puVar10[1] = uVar11;
    param_1[0x2f] = puVar10;
  }
  return local_60;
}



void fast_forward_newline(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long in_FS_OFFSET;
  undefined4 uVar12;
  long *local_48;
  long local_40;
  
  piVar2 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (long *)0x0;
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    sljit_emit_op1(piVar2,0x20,3,0,0xd,0);
    sljit_emit_op1(piVar2,0x20,0xd,0,0x8e,(long)*(int *)((long)param_1 + 0x5c));
  }
  if ((*(int *)((long)param_1 + 0xc4) == 0) && (0xff < *(int *)(param_1 + 0x1a))) {
    if (cpu_feature_list == 0) {
      get_cpu_features();
    }
    if (((cpu_feature_list & 4) == 0) || (*(int *)(param_1 + 0x14) != 1)) {
      lVar5 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
      sljit_emit_op1(piVar2,0x20,4,0,0x89,8);
      sljit_emit_op1(piVar2,0x20,1,0,0x89,0x10);
      lVar4 = sljit_emit_cmp(piVar2,5,2,0,4,0);
      sljit_emit_op2(piVar2,0x40,1,0,1,0,0x7f,4);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        puVar6 = (undefined1 *)emit_x86_instruction(piVar2,1,2,0,1,0);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x3b;
        }
      }
      sljit_emit_op_flags_constprop_0_isra_0(piVar2,0x20,4,3);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_shift_with_flags(piVar2,0x20,0,4,0,4,0,0x7f,1);
      }
      sljit_emit_op2(piVar2,0x42,2,0,2,0,4,0);
      lVar7 = sljit_emit_label(piVar2);
      sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,2);
      lVar9 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
      sljit_emit_op1(piVar2,0x23,1,0,0x82,0xfffffffffffffffc);
      sljit_emit_op1(piVar2,0x23,4,0,0x82,0xfffffffffffffffe);
      lVar8 = sljit_emit_cmp(piVar2,1,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
      if ((lVar8 != 0) && (lVar7 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar7;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar8 = sljit_emit_cmp(piVar2,1,4,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
      if ((lVar8 != 0) && (lVar7 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar7;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar7 = sljit_emit_label(piVar2);
      if ((lVar7 != 0) && (lVar9 != 0)) {
        *(long *)(lVar9 + 0x18) = lVar7;
        *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar7 = sljit_emit_label(piVar2);
      if ((lVar7 != 0) && (lVar5 != 0)) {
        *(long *)(lVar5 + 0x18) = lVar7;
        *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    else {
      sljit_emit_op1(piVar2,0x20,4,0,0x89,8);
      sljit_emit_op1(piVar2,0x20,1,0,0x89,0x10);
      lVar4 = sljit_emit_cmp(piVar2,5,2,0,4,0);
      sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f,2);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        puVar6 = (undefined1 *)emit_x86_instruction(piVar2,1,2,0,1,0);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x3b;
        }
      }
      sljit_emit_op_flags_constprop_0_isra_0(piVar2,0x20,1,1);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_shift_with_flags(piVar2,0x20,0,1,0,1,0,0x7f,1);
      }
      uVar12 = 0;
      sljit_emit_op2(piVar2,0x42,2,0,2,0,1,0);
      uVar3 = *(uint *)(param_1 + 0x1a) >> 8;
      uVar11 = *(uint *)(param_1 + 0x1a) & 0xff;
      fast_forward_char_pair_simd
                (param_1,1,uVar11,uVar11,0,uVar3 & 0xff,CONCAT44(uVar12,uVar3) & 0xffffffff000000ff)
      ;
      sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,4);
    }
    lVar5 = sljit_emit_label(piVar2);
    if ((lVar4 != 0) && (lVar5 != 0)) {
      *(long *)(lVar4 + 0x18) = lVar5;
      *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto LAB_00118263;
  }
  sljit_emit_op1(piVar2,0x20,4,0,0x89,8);
  lVar4 = sljit_emit_cmp(piVar2,5,2,0,4,0);
  if (*(int *)((long)param_1 + 0xc4) == 1) {
    move_back(param_1,0,0);
  }
  else {
    sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f,2);
  }
  lVar5 = sljit_emit_label(piVar2);
  param_1[0x25] = lVar5;
  if (cpu_feature_list == 0) {
    get_cpu_features();
  }
  if (((cpu_feature_list & 4) == 0) || ((*(uint *)((long)param_1 + 0xc4) & 0xfffffffd) != 0)) {
    lVar7 = 0;
    read_char_isra_0(param_1,*(undefined4 *)(param_1 + 0x19),0,3);
    lVar9 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
    iVar1 = *(int *)((long)param_1 + 0xc4);
    if (iVar1 - 1U < 2) {
      lVar7 = sljit_emit_cmp(piVar2,0,1,0,0x7f,0xd);
      iVar1 = *(int *)((long)param_1 + 0xc4);
    }
    check_newlinechar(param_1,iVar1,&local_48,0);
    if (local_48 != (long *)0x0) {
      plVar10 = local_48;
      do {
        lVar8 = *plVar10;
        if ((lVar8 != 0) && (lVar5 != 0)) {
          *(long *)(lVar8 + 0x18) = lVar5;
          *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
        }
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != (long *)0x0);
    }
    if (*(int *)((long)param_1 + 0xc4) - 1U < 2) {
LAB_00118443:
      lVar5 = sljit_emit_jump(piVar2,0x24);
      lVar8 = sljit_emit_label(piVar2);
      if ((lVar8 != 0) && (lVar7 != 0)) {
        *(long *)(lVar7 + 0x18) = lVar8;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
      goto LAB_00118020;
    }
LAB_00118214:
    if (lVar9 != 0) {
      lVar5 = sljit_emit_label(piVar2);
      if (lVar5 != 0) {
        *(long *)(lVar9 + 0x18) = lVar5;
        *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
  }
  else {
    if (*(uint *)((long)param_1 + 0xc4) == 2) {
      fast_forward_char_simd(param_1,0xd,10,0);
      lVar9 = 0;
      if (*(int *)(param_1 + 0x14) != 1) {
        lVar9 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
      }
      sljit_emit_op1(piVar2,0x23,1,0,0x82,0);
      sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,2);
      lVar5 = sljit_emit_cmp(piVar2,1,1,0,0x7f,0xd);
      if (1 < *(int *)((long)param_1 + 0xc4) - 1U) goto LAB_00118214;
      if (lVar5 == 0) {
        lVar7 = 0;
        goto LAB_00118443;
      }
LAB_00118020:
      lVar7 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
      sljit_emit_op1(piVar2,0x23,1,0,0x82,0);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        lVar8 = emit_x86_instruction(piVar2,0x11,0x7f,10,1,0);
        if (lVar8 != 0) {
          *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
        }
      }
      sljit_emit_op_flags_constprop_0_isra_0(piVar2,0x20,1,0);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_shift_with_flags(piVar2,0x20,0,1,0,1,0,0x7f,1);
      }
      sljit_emit_op2(piVar2,0x40,2,0,2,0);
      lVar8 = sljit_emit_label(piVar2);
      if ((lVar8 != 0) && (lVar7 != 0)) {
        *(long *)(lVar7 + 0x18) = lVar8;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar7 = sljit_emit_label(piVar2);
      if ((lVar7 != 0) && (lVar5 != 0)) {
        *(long *)(lVar5 + 0x18) = lVar7;
        *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
      }
      goto LAB_00118214;
    }
    fast_forward_char_simd
              (param_1,*(undefined2 *)(param_1 + 0x1a),*(undefined2 *)(param_1 + 0x1a),0);
    sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,2);
    if (*(int *)(param_1 + 0x14) != 1) {
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        puVar6 = (undefined1 *)emit_x86_instruction(piVar2,1,2,0,0xd,0);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x3b;
        }
      }
      sljit_emit_select_isra_0(piVar2,4,2,0xd,0,2);
    }
    if (*(int *)((long)param_1 + 0xc4) - 1U < 2) {
      lVar9 = 0;
      lVar5 = sljit_emit_jump(piVar2,0x24);
      sljit_emit_label(piVar2);
      goto LAB_00118020;
    }
  }
  lVar5 = sljit_emit_label(piVar2);
  if ((lVar5 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar5;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
LAB_00118263:
  if (*(int *)((long)param_1 + 0x5c) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    sljit_emit_op1(piVar2,0x20,0xd,0,3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ushort * compile_char1_matchingpath
                   (undefined8 *param_1,short param_2,ushort *param_3,long *param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 extraout_RDX;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long *plVar20;
  uint uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  undefined8 uVar24;
  ulong local_70;
  long *local_60;
  undefined2 local_58;
  short sStack_56;
  ushort uStack_54;
  ushort uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  long local_40;
  
  piVar3 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 6:
  case 7:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    read_char8_type(param_1,param_4,param_2 == 6);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      puVar9 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,8,1,0);
      if (puVar9 != (undefined1 *)0x0) {
        *puVar9 = 0xf7;
      }
    }
    bVar23 = param_2 != 7;
    goto LAB_00118d10;
  case 8:
  case 9:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    read_char8_type(param_1,param_4,param_2 == 8);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      puVar9 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,1,1,0);
      if (puVar9 != (undefined1 *)0x0) {
        *puVar9 = 0xf7;
      }
    }
    bVar23 = param_2 != 9;
    goto LAB_00118d10;
  case 10:
  case 0xb:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    read_char8_type(param_1,param_4,param_2 == 10);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      puVar9 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,0x10,1,0);
      if (puVar9 != (undefined1 *)0x0) {
        *puVar9 = 0xf7;
      }
    }
    bVar23 = param_2 != 0xb;
    goto LAB_00118d10;
  case 0xc:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    read_char_isra_0(param_1,*(undefined4 *)(param_1 + 0x19),param_4,1);
    if ((*(int *)((long)param_1 + 0xc4) == 0) && (0xff < (int)*(uint *)(param_1 + 0x1a))) {
      lVar12 = sljit_emit_cmp(piVar3,1,1,0,0x7f,*(uint *)(param_1 + 0x1a) >> 8 & 0xff);
      local_60 = (long *)0x0;
      if (*(int *)(param_1 + 0x14) == 4) {
        check_str_end_constprop_0(param_1,&local_60);
        plVar20 = local_60;
        sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
        uVar10 = sljit_emit_cmp(piVar3,0,1,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
        if (*piVar3 == 0) goto LAB_00119e40;
LAB_00119e9e:
        lVar8 = sljit_emit_label(piVar3);
        if (plVar20 == (long *)0x0) goto LAB_00119770;
      }
      else {
        lVar8 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
        if (*piVar3 != 0) {
LAB_0011a4e2:
          sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
          uVar10 = sljit_emit_cmp(piVar3,0,1,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
          if (*piVar3 != 0) {
            sljit_emit_label(piVar3);
            goto LAB_00119770;
          }
          plVar20 = (long *)0x0;
LAB_00119e40:
          lVar8 = *(long *)(piVar3 + 0x18);
          lVar14 = *(long *)(lVar8 + 8);
          uVar18 = lVar14 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar8 + 8) = uVar18;
            puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar14);
          }
          else {
            puVar11 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar11 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_00119e9e;
            }
            *puVar11 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar11;
            puVar15 = puVar11 + 2;
            puVar11[1] = 0x10;
          }
          lVar8 = *param_4;
          *puVar15 = uVar10;
          puVar15[1] = lVar8;
          *param_4 = (long)puVar15;
          goto LAB_00119e9e;
        }
        lVar14 = *(long *)(piVar3 + 0x18);
        lVar13 = *(long *)(lVar14 + 8);
        uVar18 = lVar13 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar14 + 8) = uVar18;
          plVar20 = (long *)(lVar14 + 0x10 + lVar13);
        }
        else {
          puVar15 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar15 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011a4e2;
          }
          plVar20 = puVar15 + 2;
          *puVar15 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar15;
          puVar15[1] = 0x10;
        }
        *plVar20 = lVar8;
        plVar20[1] = 0;
        local_60 = plVar20;
        sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
        uVar10 = sljit_emit_cmp(piVar3,0,1,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
        if (*piVar3 == 0) goto LAB_00119e40;
        lVar8 = sljit_emit_label(piVar3);
      }
      do {
        lVar14 = *plVar20;
        if ((lVar14 != 0) && (lVar8 != 0)) {
          *(long *)(lVar14 + 0x18) = lVar8;
          *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
        }
        plVar20 = (long *)plVar20[1];
      } while (plVar20 != (long *)0x0);
      goto LAB_00119770;
    }
    check_newlinechar(param_1,*(int *)((long)param_1 + 0xc4),param_4,1);
    break;
  case 0xd:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    if ((*(int *)(param_1 + 0x3c) == 0) || (*(int *)((long)param_1 + 0x1e4) == 0)) {
      skip_valid_char_isra_0(*param_1);
    }
    else {
      read_char_isra_0(param_1,0x7fffffff,param_4,1);
    }
    break;
  case 0xe:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,2);
    break;
  case 0xf:
  case 0x10:
    uStack_54 = *param_3;
    local_58 = 4;
    sStack_56 = (param_2 == 0xf) + 3;
    uStack_50 = 0;
    uStack_52 = param_3[1];
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    compile_xclass_matchingpath(param_1,&local_58,param_4);
    param_3 = param_3 + 2;
    goto LAB_00118ba9;
  case 0x11:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    read_char_isra_0(param_1,*(undefined4 *)(param_1 + 0x1b),0,0);
    lVar8 = sljit_emit_cmp(piVar3,1,1,0,0x7f,0xd);
    local_60 = (long *)0x0;
    if (*(int *)(param_1 + 0x14) == 4) {
      check_str_end_constprop_0(param_1,&local_60);
      plVar20 = local_60;
    }
    else {
      lVar14 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
      if (*piVar3 == 0) {
        lVar12 = *(long *)(piVar3 + 0x18);
        lVar13 = *(long *)(lVar12 + 8);
        uVar18 = lVar13 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar12 + 8) = uVar18;
          local_60 = (long *)(lVar12 + 0x10 + lVar13);
        }
        else {
          puVar15 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar15 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011a418;
          }
          local_60 = puVar15 + 2;
          *puVar15 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar15;
          puVar15[1] = 0x10;
        }
        local_60[1] = 0;
        *local_60 = lVar14;
        plVar20 = local_60;
      }
      else {
LAB_0011a418:
        plVar20 = (long *)0x0;
      }
    }
    sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
    lVar14 = sljit_emit_cmp(piVar3,1,1,0,0x7f,10);
    uVar24 = 2;
    uVar10 = 0x7f;
    sljit_emit_op2(piVar3,0x40,2,0,2,0);
    lVar12 = sljit_emit_jump(piVar3,0x24);
    lVar13 = sljit_emit_label(piVar3);
    if ((lVar13 != 0) && (lVar8 != 0)) {
      *(long *)(lVar8 + 0x18) = lVar13;
      *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
    }
    check_newlinechar(param_1,*(undefined4 *)((long)param_1 + 0xd4),param_4,0,uVar10,uVar24);
    lVar8 = sljit_emit_label(piVar3);
    for (; plVar20 != (long *)0x0; plVar20 = (long *)plVar20[1]) {
      lVar13 = *plVar20;
      if ((lVar13 != 0) && (lVar8 != 0)) {
        *(long *)(lVar13 + 0x18) = lVar8;
        *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    lVar8 = sljit_emit_label(piVar3);
    if ((lVar8 != 0) && (lVar14 != 0)) {
      *(long *)(lVar14 + 0x18) = lVar8;
      *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_00119770:
    lVar8 = sljit_emit_label(piVar3);
    if ((lVar12 != 0) && (lVar8 != 0)) {
      *(long *)(lVar12 + 0x18) = lVar8;
      *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
    }
    break;
  case 0x12:
  case 0x13:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    if (param_2 == 0x12) {
      read_char_isra_0(param_1,0x3000,param_4,1);
    }
    else {
      uVar10 = *param_1;
      sljit_emit_op1(uVar10,0x23,1,0,0x82,0);
      sljit_emit_op2(uVar10,0x40,2,0,2,0,0x7f,2);
    }
    uVar10 = sljit_emit_jump(piVar3,0x25);
    if (*piVar3 == 0) {
      lVar8 = *(long *)(piVar3 + 0x18);
      lVar14 = *(long *)(lVar8 + 8);
      uVar18 = lVar14 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar8 + 8) = uVar18;
        puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar14);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar11 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_00118ca3;
        }
        *puVar11 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar11;
        puVar15 = puVar11 + 2;
        puVar11[1] = 0x10;
      }
      uVar24 = param_1[0x35];
      *puVar15 = uVar10;
      puVar15[1] = uVar24;
      param_1[0x35] = puVar15;
    }
LAB_00118ca3:
    bVar23 = param_2 == 0x12;
    goto LAB_00118d10;
  case 0x14:
  case 0x15:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    if (param_2 == 0x14) {
      read_char_isra_0(param_1,0x2029,param_4,1);
      uVar10 = extraout_RDX;
    }
    else {
      uVar24 = *param_1;
      sljit_emit_op1(uVar24,0x23,1,0,0x82,0);
      uVar10 = 2;
      sljit_emit_op2(uVar24,0x40,2,0,2,0,0x7f);
    }
    uVar10 = sljit_emit_jump(piVar3,0x25,uVar10);
    if (*piVar3 == 0) {
      lVar8 = *(long *)(piVar3 + 0x18);
      lVar14 = *(long *)(lVar8 + 8);
      uVar18 = lVar14 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar8 + 8) = uVar18;
        puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar14);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar11 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_00118b3d;
        }
        *puVar11 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar11;
        puVar15 = puVar11 + 2;
        puVar11[1] = 0x10;
      }
      uVar24 = param_1[0x36];
      *puVar15 = uVar10;
      puVar15[1] = uVar24;
      param_1[0x36] = puVar15;
    }
LAB_00118b3d:
    bVar23 = param_2 == 0x14;
LAB_00118d10:
    uVar10 = sljit_emit_jump(piVar3,bVar23);
    if (*piVar3 == 0) {
      lVar8 = *(long *)(piVar3 + 0x18);
      lVar14 = *(long *)(lVar8 + 8);
      uVar18 = lVar14 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar8 + 8) = uVar18;
        puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar14);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar11 == (undefined8 *)0x0) {
          *piVar3 = 2;
          break;
        }
        *puVar11 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar11;
        puVar15 = puVar11 + 2;
        puVar11[1] = 0x10;
      }
      lVar8 = *param_4;
      *puVar15 = uVar10;
      puVar15[1] = lVar8;
      *param_4 = (long)puVar15;
    }
    break;
  case 0x16:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    sljit_emit_op1(piVar3,0x20,1,0,9,0);
    pcVar16 = do_extuni_no_utf;
    if ((*(int *)(param_1 + 0x3c) != 0) &&
       (pcVar16 = do_extuni_utf, *(int *)((long)param_1 + 0x1e4) != 0)) {
      pcVar16 = do_extuni_utf_invalid;
    }
    sljit_emit_icall_constprop_0_isra_0(piVar3,0x111,pcVar16);
    if ((*(int *)((long)param_1 + 0x1e4) != 0) &&
       (uVar10 = sljit_emit_cmp(piVar3,0,1,0,0x7f,0), *piVar3 == 0)) {
      lVar8 = *(long *)(piVar3 + 0x18);
      lVar14 = *(long *)(lVar8 + 8);
      uVar18 = lVar14 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar8 + 8) = uVar18;
        puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar14);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar11 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_00119482;
        }
        *puVar11 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar11;
        puVar15 = puVar11 + 2;
        puVar11[1] = 0x10;
      }
      lVar8 = *param_4;
      *puVar15 = uVar10;
      puVar15[1] = lVar8;
      *param_4 = (long)puVar15;
    }
LAB_00119482:
    sljit_emit_op1(piVar3,0x20,2,0,1,0);
    if (*(int *)(param_1 + 0x14) == 4) {
      lVar8 = sljit_emit_cmp(piVar3,2,1,0,0xd,0);
      check_partial(param_1,1);
      lVar14 = sljit_emit_label(piVar3);
      if ((lVar14 != 0) && (lVar8 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar14;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    break;
  case 0x1d:
  case 0x1e:
    iVar5 = 1;
    if (*(int *)(param_1 + 0x3c) != 0) {
      iVar5 = ((*param_3 & 0xfc00) == 0xd800) + 1;
    }
    if ((param_5 != 0) && (*(int *)(param_1 + 0x14) != 1)) {
      detect_partial_match(param_1,param_4);
    }
    if (param_2 == 0x1d) {
LAB_00119c20:
      iVar4 = iVar5 * 2;
      sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,iVar4,iVar4);
      if (((iVar5 == 2) || ((param_5 != 0 && (*(int *)(param_1 + 0x14) == 1)))) &&
         (uVar10 = sljit_emit_cmp(piVar3,4,2,0,0xd,0), *piVar3 == 0)) {
        lVar8 = *(long *)(piVar3 + 0x18);
        lVar14 = *(long *)(lVar8 + 8);
        uVar18 = lVar14 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar8 + 8) = uVar18;
          puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar14);
        }
        else {
          puVar11 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar11 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_00119c71;
          }
          *puVar11 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar11;
          puVar15 = puVar11 + 2;
          puVar11[1] = 0x10;
        }
        lVar8 = *param_4;
        *puVar15 = uVar10;
        puVar15[1] = lVar8;
        *param_4 = (long)puVar15;
      }
LAB_00119c71:
      local_58 = (undefined2)iVar4;
      sStack_56 = (short)((uint)iVar4 >> 0x10);
      uStack_54 = 0xffff;
      uStack_52 = 0xffff;
      uStack_50 = 0;
      uStack_4e = 0;
      param_3 = (ushort *)byte_sequence_compare(param_1,param_2 == 0x1e,param_3,&local_58,param_4);
      goto LAB_00118ba9;
    }
    uVar2 = *param_3;
    uVar18 = (ulong)uVar2;
    uVar6 = (uint)uVar2;
    iVar4 = *(int *)(param_1 + 0x3c);
    uVar17 = (ulong)(uint)uVar2;
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x3d) != 0) goto LAB_00119956;
      if (((0xff < uVar2) || (lVar8 = param_1[0x12], (uint)*(byte *)(lVar8 + uVar18) == (uint)uVar2)
          ) || (iVar4 = char_get_othercase_bit(param_1,param_3), iVar4 != 0)) goto LAB_00119c20;
      if ((param_5 != 0) && (*(int *)(param_1 + 0x14) == 1)) goto LAB_00118f98;
LAB_00119041:
      bVar1 = *(byte *)(lVar8 + (uVar17 & 0xffffffff));
      uVar22 = (ulong)bVar1;
      uVar6 = (uint)uVar17;
      if ((uint)uVar17 < (uint)bVar1) {
        uVar6 = (uint)bVar1;
      }
      uVar18 = (ulong)uVar6;
      local_70 = uVar17 & 0xffffffff;
    }
    else {
      if ((uVar2 & 0xfc00) == 0xd800) {
        uVar6 = ((uVar2 & 0x3ff) << 10 | param_3[1] & 0x3ff) + 0x10000;
LAB_00119be0:
        if (*(int *)(&DAT_0013a01c +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_16 +
                            (long)(int)((uint)*(ushort *)
                                               (&_pcre2_ucd_stage1_16 + (long)((int)uVar6 >> 7) * 2)
                                        * 0x80 + (uVar6 & 0x7f)) * 2) * 0xc) == 0)
        goto LAB_00119c20;
      }
      else {
LAB_00119956:
        if (0x7f < uVar2) goto LAB_00119be0;
        if (*(byte *)(param_1[0x12] + uVar18) == uVar2) goto LAB_00119c20;
      }
      iVar7 = char_get_othercase_bit(param_1,param_3);
      if (iVar7 != 0) goto LAB_00119c20;
      if (iVar4 == 0) {
        if ((param_5 != 0) && (*(int *)(param_1 + 0x14) == 1)) goto LAB_00118f98;
LAB_0011a0f8:
        if (*(int *)(param_1 + 0x3d) != 0) goto LAB_00119030;
        uVar18 = uVar17 & 0xffffffff;
        uVar22 = uVar17 & 0xffffffff;
        local_70 = uVar18;
        if ((uint)uVar17 < 0x100) goto LAB_0011903a;
      }
      else {
        if (((ushort)uVar18 & 0xfc00) == 0xd800) {
          uVar17 = (ulong)((((uint)uVar17 & 0x3ff) << 10 | param_3[1] & 0x3ff) + 0x10000);
          if ((param_5 != 0) && (*(int *)(param_1 + 0x14) == 1)) {
LAB_00118f98:
            uVar10 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
            if (*piVar3 == 0) {
              lVar8 = *(long *)(piVar3 + 0x18);
              lVar14 = *(long *)(lVar8 + 8);
              uVar18 = lVar14 + 0x10;
              if (uVar18 < 0xff1) {
                *(ulong *)(lVar8 + 8) = uVar18;
                puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar14);
LAB_00119015:
                lVar8 = *param_4;
                *puVar15 = uVar10;
                puVar15[1] = lVar8;
                *param_4 = (long)puVar15;
                goto LAB_00119021;
              }
              puVar11 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = *(undefined8 *)(piVar3 + 0x18);
                *(undefined8 **)(piVar3 + 0x18) = puVar11;
                puVar15 = puVar11 + 2;
                puVar11[1] = 0x10;
                goto LAB_00119015;
              }
              *piVar3 = 2;
              iVar4 = *(int *)(param_1 + 0x3c);
            }
            else {
LAB_00119021:
              iVar4 = *(int *)(param_1 + 0x3c);
            }
            if (iVar4 == 0) goto LAB_0011a0f8;
            goto LAB_00119030;
          }
        }
        else {
          if ((param_5 != 0) && (*(int *)(param_1 + 0x14) == 1)) goto LAB_00118f98;
LAB_00119030:
          if ((uint)uVar17 < 0x80) {
LAB_0011903a:
            lVar8 = param_1[0x12];
            goto LAB_00119041;
          }
        }
        uVar6 = (uint)uVar17;
        uVar19 = *(int *)(&DAT_0013a01c +
                         (ulong)*(ushort *)
                                 (&_pcre2_ucd_stage2_16 +
                                 (long)(int)((uint)*(ushort *)
                                                    (&_pcre2_ucd_stage1_16 +
                                                    (long)((int)uVar6 >> 7) * 2) * 0x80 +
                                            (uVar6 & 0x7f)) * 2) * 0xc) + uVar6;
        uVar22 = (ulong)uVar19;
        if (uVar6 <= uVar19) {
          uVar6 = uVar19;
        }
        uVar18 = (ulong)uVar6;
        local_70 = uVar17 & 0xffffffff;
      }
    }
    read_char_isra_0(param_1,uVar18,0,0);
    if (cpu_feature_list == 0) {
      get_cpu_features();
    }
    if ((cpu_feature_list & 0x20) == 0) {
      lVar8 = sljit_emit_cmp(piVar3,0,1,0,0x7f,local_70);
      uVar10 = sljit_emit_cmp(piVar3,1,1,0,0x7f,uVar22);
      if (*piVar3 == 0) {
        lVar14 = *(long *)(piVar3 + 0x18);
        lVar12 = *(long *)(lVar14 + 8);
        uVar18 = lVar12 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar14 + 8) = uVar18;
          puVar15 = (undefined8 *)(lVar14 + 0x10 + lVar12);
        }
        else {
          puVar11 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar11 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011a078;
          }
          *puVar11 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar11;
          puVar15 = puVar11 + 2;
          puVar11[1] = 0x10;
        }
        lVar14 = *param_4;
        *puVar15 = uVar10;
        puVar15[1] = lVar14;
        *param_4 = (long)puVar15;
      }
LAB_0011a078:
      lVar14 = sljit_emit_label(piVar3);
      if ((lVar14 != 0) && (lVar8 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar14;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    else {
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_cmp_binary(piVar3,1,0,0x7f,uVar22);
      }
      sljit_emit_select_isra_0(piVar3,0,1,0x7f,local_70,1);
      uVar10 = sljit_emit_cmp(piVar3,1,1,0,0x7f,local_70);
      if (*piVar3 == 0) {
        lVar8 = *(long *)(piVar3 + 0x18);
        lVar14 = *(long *)(lVar8 + 8);
        uVar18 = lVar14 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar8 + 8) = uVar18;
          puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar14);
        }
        else {
          puVar11 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar11 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_00119155;
          }
          *puVar11 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar11;
          puVar15 = puVar11 + 2;
          puVar11[1] = 0x10;
        }
        lVar8 = *param_4;
        *puVar15 = uVar10;
        puVar15[1] = lVar8;
        *param_4 = (long)puVar15;
      }
    }
LAB_00119155:
    param_3 = param_3 + iVar5;
    goto LAB_00118ba9;
  case 0x1f:
  case 0x20:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    uVar2 = *param_3;
    uVar18 = (ulong)uVar2;
    iVar5 = *(int *)(param_1 + 0x3c);
    uVar6 = (uint)uVar2;
    if (iVar5 == 0) {
      if (param_2 != 0x1f) {
        if (*(int *)(param_1 + 0x3d) != 0) goto LAB_00118dcd;
        if (uVar2 < 0x100) {
          lVar8 = 2;
          uVar19 = (uint)*(byte *)(param_1[0x12] + uVar18);
          if (*(byte *)(param_1[0x12] + uVar18) == uVar6) goto LAB_00118e21;
          goto LAB_00119872;
        }
      }
LAB_00119d10:
      lVar8 = 2;
      goto LAB_00118e21;
    }
    if ((uVar2 & 0xfc00) == 0xd800) {
      uVar18 = (ulong)(((uVar6 & 0x3ff) << 10 | param_3[1] & 0x3ff) + 0x10000);
      lVar8 = 4;
      if (param_2 != 0x1f) {
LAB_00118ddd:
        if (*(int *)(&DAT_0013a01c +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_16 +
                            (long)(int)((uint)*(ushort *)
                                               (&_pcre2_ucd_stage1_16 +
                                               (long)((int)(uint)uVar18 >> 7) * 2) * 0x80 +
                                       ((uint)uVar18 & 0x7f)) * 2) * 0xc) != 0) {
          if (iVar5 != 0) {
LAB_00119f9e:
            uVar19 = (uint)uVar18;
            uVar19 = *(int *)(&DAT_0013a01c +
                             (ulong)*(ushort *)
                                     (&_pcre2_ucd_stage2_16 +
                                     (long)(int)((uint)*(ushort *)
                                                        (&_pcre2_ucd_stage1_16 +
                                                        (long)((int)uVar19 >> 7) * 2) * 0x80 +
                                                (uVar19 & 0x7f)) * 2) * 0xc) + uVar19;
            goto LAB_00119872;
          }
LAB_0011a1a5:
          if (*(int *)(param_1 + 0x3d) != 0) {
            if ((uint)uVar18 < 0x80) {
              lVar14 = param_1[0x12];
              goto LAB_00119d02;
            }
            goto LAB_00119f9e;
          }
          if ((uint)uVar18 < 0x100) {
            uVar19 = (uint)*(byte *)(param_1[0x12] + uVar18);
            goto LAB_00119872;
          }
          read_char_isra_0(param_1,uVar18,param_4,1);
          uVar6 = 0;
          goto LAB_0011a253;
        }
      }
LAB_00118e21:
      read_char_isra_0(param_1,uVar18,param_4,1);
LAB_00118e37:
      uVar10 = sljit_emit_cmp(piVar3,0,1,0,0x7f,uVar18);
      if (*piVar3 == 0) {
        lVar14 = *(long *)(piVar3 + 0x18);
        lVar12 = *(long *)(lVar14 + 8);
        uVar18 = lVar12 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar14 + 8) = uVar18;
          puVar15 = (undefined8 *)(lVar14 + 0x10 + lVar12);
        }
        else {
          puVar11 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar11 == (undefined8 *)0x0) goto LAB_0011a3db;
          *puVar11 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar11;
          puVar15 = puVar11 + 2;
          puVar11[1] = 0x10;
        }
        lVar14 = *param_4;
        *puVar15 = uVar10;
        puVar15[1] = lVar14;
        *param_4 = (long)puVar15;
      }
    }
    else {
      if (param_2 == 0x1f) goto LAB_00119d10;
LAB_00118dcd:
      if (0x7f < uVar6) {
        lVar8 = 2;
        goto LAB_00118ddd;
      }
      lVar14 = param_1[0x12];
      lVar8 = 2;
      if (*(byte *)(lVar14 + uVar18) == uVar6) goto LAB_00118e21;
      if (iVar5 == 0) goto LAB_0011a1a5;
LAB_00119d02:
      uVar19 = (uint)*(byte *)(lVar14 + uVar18);
LAB_00119872:
      uVar21 = (uint)uVar18;
      uVar17 = uVar18;
      if (uVar21 <= uVar19) {
        uVar17 = (ulong)uVar19;
      }
      uVar22 = (ulong)uVar19;
      read_char_isra_0(param_1,uVar17,param_4,1);
      uVar6 = (uint)uVar22 ^ uVar21;
      if ((uVar6 - 1 & uVar6) != 0) {
        uVar10 = sljit_emit_cmp(piVar3,0,1,0,0x7f,uVar18);
        if (*piVar3 == 0) {
          lVar14 = *(long *)(piVar3 + 0x18);
          lVar12 = *(long *)(lVar14 + 8);
          uVar18 = lVar12 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar14 + 8) = uVar18;
            puVar15 = (undefined8 *)(lVar14 + 0x10 + lVar12);
          }
          else {
            puVar11 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar11 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011993d;
            }
            *puVar11 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar11;
            puVar15 = puVar11 + 2;
            puVar11[1] = 0x10;
          }
          lVar14 = *param_4;
          *puVar15 = uVar10;
          puVar15[1] = lVar14;
          *param_4 = (long)puVar15;
        }
LAB_0011993d:
        uVar18 = uVar22 & 0xffffffff;
        goto LAB_00118e37;
      }
      uVar18 = (ulong)(uVar21 | (uint)uVar22);
LAB_0011a253:
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_cum_binary(piVar3,0xd0b0908,1,0,1,0,0x7f,uVar6);
      }
      uVar10 = sljit_emit_cmp(piVar3,0,1,0,0x7f,uVar18);
      if (*piVar3 == 0) {
        lVar14 = *(long *)(piVar3 + 0x18);
        lVar12 = *(long *)(lVar14 + 8);
        uVar18 = lVar12 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar14 + 8) = uVar18;
          puVar15 = (undefined8 *)(lVar14 + 0x10 + lVar12);
LAB_0011a2f6:
          lVar14 = *param_4;
          *puVar15 = uVar10;
          puVar15[1] = lVar14;
          *param_4 = (long)puVar15;
          goto LAB_00118eb8;
        }
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar11;
          puVar15 = puVar11 + 2;
          puVar11[1] = 0x10;
          goto LAB_0011a2f6;
        }
LAB_0011a3db:
        *piVar3 = 2;
      }
    }
LAB_00118eb8:
    param_3 = (ushort *)((long)param_3 + lVar8);
    goto LAB_00118ba9;
  case 0x6e:
  case 0x6f:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    if (param_2 == 0x6f) {
      read_char_isra_0(param_1,0xff,param_4,1);
    }
    else {
      uVar10 = *param_1;
      sljit_emit_op1(uVar10,0x23,1,0,0x82,0);
      sljit_emit_op2(uVar10,0x40,2,0,2,0,0x7f,2);
    }
    iVar5 = optimize_class_ranges_isra_0(*param_1,param_3,param_2 == 0x6f,0,param_4);
    if ((iVar5 == 0) &&
       (iVar5 = optimize_class_chars_isra_0(*param_1,param_3,param_2 == 0x6f,0,param_4), iVar5 == 0)
       ) {
      lVar8 = sljit_emit_cmp(piVar3,4,1,0,0x7f,0xff);
      if (param_2 == 0x6e) {
        if (*piVar3 == 0) {
          lVar14 = *(long *)(piVar3 + 0x18);
          uVar18 = *(long *)(lVar14 + 8) + 0x10;
          if (uVar18 < 0xff1) {
            plVar20 = (long *)(lVar14 + 0x10 + *(long *)(lVar14 + 8));
            *(ulong *)(lVar14 + 8) = uVar18;
            lVar12 = 0;
            lVar14 = *param_4;
            *plVar20 = lVar8;
            plVar20[1] = lVar14;
            *param_4 = (long)plVar20;
            goto LAB_00119238;
          }
          puVar15 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar15 != (undefined8 *)0x0) {
            lVar12 = 0;
            lVar14 = *param_4;
            *puVar15 = *(undefined8 *)(piVar3 + 0x18);
            iVar5 = *piVar3;
            *(undefined8 **)(piVar3 + 0x18) = puVar15;
            puVar15[1] = 0x10;
            puVar15[2] = lVar8;
            puVar15[3] = lVar14;
            *param_4 = (long)(puVar15 + 2);
            goto LAB_00119234;
          }
          *piVar3 = 2;
        }
        lVar12 = 0;
      }
      else {
        iVar5 = *piVar3;
        lVar12 = lVar8;
LAB_00119234:
        if (iVar5 == 0) {
LAB_00119238:
          piVar3[0x26] = 0;
          emit_cum_binary(piVar3,0x25232120,4,0,1,0,0x7f,7);
          if (*piVar3 == 0) {
            piVar3[0x26] = 0;
            emit_shift_with_flags(piVar3,0x28,0,1,0,1,0,0x7f,3);
          }
        }
      }
      sljit_emit_op1(piVar3,0x21,1,0,0x81,param_3);
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_shift_with_flags(piVar3,0x20,0,4,0,0x7f,1,4,0);
        if (*piVar3 == 0) {
          piVar3[0x26] = 0;
          puVar9 = (undefined1 *)emit_x86_instruction(piVar3,1,1,0,4,0);
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 0x85;
          }
        }
      }
      uVar10 = sljit_emit_jump(piVar3,0);
      if (*piVar3 == 0) {
        lVar8 = *(long *)(piVar3 + 0x18);
        lVar14 = *(long *)(lVar8 + 8);
        uVar18 = lVar14 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar8 + 8) = uVar18;
          puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar14);
        }
        else {
          puVar11 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar11 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011939c;
          }
          *puVar11 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar11;
          puVar15 = puVar11 + 2;
          puVar11[1] = 0x10;
        }
        lVar8 = *param_4;
        *puVar15 = uVar10;
        puVar15[1] = lVar8;
        *param_4 = (long)puVar15;
      }
LAB_0011939c:
      if ((lVar12 != 0) && (lVar8 = sljit_emit_label(piVar3), lVar8 != 0)) {
        *(long *)(lVar12 + 0x18) = lVar8;
        *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    param_3 = param_3 + 0x10;
    goto LAB_00118ba9;
  case 0x70:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    compile_xclass_matchingpath(param_1,param_3 + 1,param_4);
    param_3 = param_3 + ((ulong)*param_3 - 1);
    goto LAB_00118ba9;
  }
LAB_00118ba9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void compile_xclass_matchingpath(undefined8 *param_1,ushort *param_2,long **param_3)

{
  uint *puVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  ushort uVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long **pplVar15;
  ushort *puVar16;
  int iVar17;
  long **pplVar18;
  undefined8 extraout_RDX;
  bool bVar19;
  int iVar20;
  ushort *puVar21;
  ushort *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 uVar27;
  uint uVar28;
  ulong uVar29;
  ushort *puVar30;
  uint *puVar31;
  uint uVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  bool bVar34;
  bool bVar35;
  uint local_64;
  ushort local_60;
  long *local_48;
  long local_40;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  piVar6 = (int *)*param_1;
  local_60 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar30 = param_2 + 1;
  local_48 = (long *)0x0;
  pplVar15 = &local_48;
  if ((local_60 & 1) != 0) {
    pplVar15 = param_3;
  }
  if ((local_60 & 2) == 0) {
    uVar33 = 0x7fffffff;
    uVar9 = *puVar30;
    puVar22 = puVar30;
    puVar21 = puVar30;
    if (uVar9 != 0) goto LAB_0011a612;
LAB_0011abe1:
    compile_char1_matchingpath(param_1,0xd,puVar22,param_3,0);
    if (pplVar15 == param_3) goto LAB_0011ac7e;
  }
  else {
    uVar9 = param_2[0x11];
    uVar33 = 0;
    puVar22 = param_2 + 0x11;
    puVar21 = param_2 + 0x11;
    if (uVar9 == 0) goto LAB_0011abe1;
LAB_0011a612:
    local_64 = 0;
    bVar19 = false;
    bVar34 = false;
    uVar28 = 0;
    local_60 = local_60 & 1;
    iVar20 = 0;
    uVar29 = 0x100;
    do {
      uVar3 = puVar21[1];
      uVar25 = (ulong)uVar3;
      iVar17 = iVar20 + 1;
      if (uVar9 == 1) {
        puVar22 = puVar21 + 2;
        if ((iVar4 != 0) && ((uVar3 & 0xfc00) == 0xd800)) {
          puVar22 = puVar21 + 3;
          uVar25 = (ulong)((uVar3 & 0x3ff) << 10 | puVar21[2] & 0x3ff) + 0x10000;
        }
        if (uVar29 < uVar25) {
          uVar29 = uVar25;
        }
        if (uVar25 < uVar33) {
          uVar33 = uVar25;
        }
        local_64 = local_64 | 1;
        iVar20 = iVar17;
        goto LAB_0011a6a3;
      }
      puVar22 = puVar21 + 3;
      if (uVar9 == 2) {
        uVar9 = puVar21[2];
        uVar26 = (ulong)uVar9;
        if (iVar4 == 0) {
          if (uVar25 < uVar33) {
            uVar33 = uVar25;
          }
        }
        else {
          if ((uVar3 & 0xfc00) == 0xd800) {
            uVar25 = (ulong)((uVar3 & 0x3ff) << 10 | uVar9 & 0x3ff) + 0x10000;
            uVar9 = puVar21[3];
            uVar26 = (ulong)uVar9;
            if (uVar25 < uVar33) {
              uVar33 = uVar25;
            }
            puVar16 = puVar22;
            puVar22 = puVar21 + 4;
          }
          else {
            puVar16 = puVar21 + 2;
            if (uVar25 < uVar33) {
              uVar33 = uVar25;
            }
          }
          if ((uVar9 & 0xfc00) == 0xd800) {
            puVar22 = puVar16 + 2;
            uVar26 = (ulong)((uint)(uVar26 << 10) & 0xffc00 | puVar16[1] & 0x3ff) + 0x10000;
          }
        }
        if (uVar29 < uVar26) {
          uVar29 = uVar26;
        }
        local_64 = local_64 | 1;
        iVar20 = iVar17;
        goto LAB_0011a6a3;
      }
      if (uVar3 == 10) {
        if (uVar9 != 3) goto switchD_0011a678_caseD_b;
        puVar31 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)puVar21[2] * 4);
        uVar32 = *puVar31;
        while (uVar32 != 0xffffffff) {
          uVar25 = (ulong)uVar32;
          if (uVar29 < uVar25) {
            uVar29 = uVar25;
          }
          if (uVar25 < uVar33) {
            uVar33 = uVar25;
          }
          puVar1 = puVar31 + 1;
          puVar31 = puVar31 + 1;
          uVar32 = *puVar1;
        }
LAB_0011a694:
        local_64 = local_64 | 1;
        iVar20 = iVar17;
        goto LAB_0011a6a3;
      }
      switch(uVar25) {
      case 0:
        if (uVar9 == 3) {
          uVar32 = 0x3fffffff;
          goto LAB_0011b00b;
        }
        goto FUN_0011b06b;
      case 1:
        uVar32 = 800;
        goto LAB_0011affb;
      case 2:
        uVar32 = (1 << ((char)*(undefined4 *)
                               (&_pcre2_ucp_typerange_16 + (long)(int)((uint)puVar21[2] * 2 + 1) * 4
                               ) + 1U & 0x1f)) -
                 (1 << ((byte)*(undefined4 *)
                               (&_pcre2_ucp_typerange_16 + (long)(int)((uint)puVar21[2] * 2) * 4) &
                       0x1f));
        goto LAB_0011aff3;
      case 3:
        uVar32 = 1 << ((byte)puVar21[2] & 0x1f);
LAB_0011aff3:
        if (uVar32 != 0) goto LAB_0011affb;
switchD_0011a678_caseD_a:
        iVar20 = iVar17;
FUN_0011b06b:
        uVar33 = 0;
        uVar29 = 0x7fffffff;
        break;
      case 4:
        local_64 = local_64 | 8;
        uVar33 = 0;
        uVar29 = 0x7fffffff;
        iVar20 = iVar17;
        break;
      case 5:
        if (uVar9 == 4) {
          local_64 = local_64 | 0x90;
          uVar33 = 0;
          uVar29 = 0x7fffffff;
          iVar20 = iVar17;
        }
        else {
          local_64 = local_64 | 0x18;
          uVar33 = 0;
          uVar29 = 0x7fffffff;
          iVar20 = iVar20 + 2;
        }
        break;
      case 6:
        uVar32 = 0xe3e0;
        goto LAB_0011affb;
      case 7:
      case 8:
      case 0xe:
      case 0xf:
      case 0x10:
        local_64 = local_64 | 5;
        uVar33 = 0;
        uVar29 = 0x7fffffff;
        iVar20 = iVar17;
        break;
      case 9:
        uVar32 = 0x1f3e0;
LAB_0011affb:
        if (uVar9 == 4) {
          uVar32 = uVar32 ^ 0x3fffffff;
        }
LAB_0011b00b:
        uVar28 = uVar28 | uVar32;
        local_64 = local_64 | 4;
        uVar33 = 0;
        uVar29 = 0x7fffffff;
        break;
      default:
        goto switchD_0011a678_caseD_a;
      case 0xb:
      case 0x11:
switchD_0011a678_caseD_b:
        uVar33 = 0;
        uVar29 = 0x7fffffff;
        goto LAB_0011a694;
      case 0xc:
        local_64 = local_64 | 0x40;
        uVar33 = 0;
        uVar29 = 0x7fffffff;
        iVar20 = iVar17;
        break;
      case 0xd:
        local_64 = local_64 | 0x20;
        uVar33 = 0;
        uVar29 = 0x7fffffff;
        iVar20 = iVar17;
      }
LAB_0011a6a3:
      uVar9 = *puVar22;
      puVar21 = puVar22;
    } while (uVar9 != 0);
    if (uVar28 != 0x3fffffff) {
      if (uVar28 == 0 && iVar20 == 0) goto LAB_0011abe1;
      if (local_60 == 0) {
        pplVar18 = (long **)0x0;
        if ((local_64 & 0x7c) != 0) {
          pplVar18 = param_3;
        }
        read_char_isra_0(param_1,uVar29,pplVar18);
        uVar9 = *param_2 & 2;
        if ((*param_2 & 4) != 0) goto LAB_0011acf2;
LAB_0011a71b:
        if (uVar9 == 0) {
          sljit_emit_op2(piVar6,0x42,4,0,1,0,0x7f,uVar33);
          lVar10 = sljit_emit_cmp(piVar6,4,4,0,0x7f,uVar29 - uVar33);
          pplVar18 = &local_48;
          if ((*param_2 & 1) == 0) {
            pplVar18 = param_3;
          }
          if (*piVar6 == 0) {
            lVar12 = *(long *)(piVar6 + 0x18);
            lVar7 = *(long *)(lVar12 + 8);
            uVar33 = lVar7 + 0x10;
            if (uVar33 < 0xff1) {
              *(ulong *)(lVar12 + 8) = uVar33;
              plVar14 = (long *)(lVar12 + 0x10 + lVar7);
            }
            else {
              puVar13 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
              if (puVar13 == (undefined8 *)0x0) {
                *piVar6 = 2;
                goto joined_r0x0011ad07;
              }
              *puVar13 = *(undefined8 *)(piVar6 + 0x18);
              *(undefined8 **)(piVar6 + 0x18) = puVar13;
              plVar14 = puVar13 + 2;
              puVar13[1] = 0x10;
            }
            plVar2 = *pplVar18;
            *plVar14 = lVar10;
            plVar14[1] = (long)plVar2;
            *pplVar18 = plVar14;
          }
          goto joined_r0x0011ad07;
        }
        lVar10 = sljit_emit_cmp(piVar6,4,1,0,0x7f,0xff);
        uVar32 = (uint)(int)(char)*(byte *)((long)param_2 + 0x21) >> 0x1f;
        iVar17 = optimize_class_ranges_isra_0(*param_1,puVar30,uVar32);
        if ((iVar17 == 0) &&
           (iVar17 = optimize_class_chars_isra_0(*param_1,puVar30,uVar32,1,&local_48), iVar17 == 0))
        {
          if (*piVar6 == 0) {
            piVar6[0x26] = 0;
            emit_cum_binary(piVar6,0x25232120,4,0,1,0,0x7f,7);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_shift_with_flags(piVar6,0x28,0,1,0,1,0,0x7f,3);
            }
          }
          sljit_emit_op1(piVar6,0x21,1,0,0x81,puVar30);
          if (*piVar6 == 0) {
            piVar6[0x26] = 0;
            emit_shift_with_flags(piVar6,0x20,0,4,0,0x7f,1,4,0);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              puVar11 = (undefined1 *)emit_x86_instruction(piVar6,1,1,0,4,0);
              if (puVar11 != (undefined1 *)0x0) {
                *puVar11 = 0x85;
              }
            }
          }
          lVar12 = sljit_emit_jump(piVar6,1);
          if (*piVar6 == 0) {
            lVar7 = *(long *)(piVar6 + 0x18);
            lVar8 = *(long *)(lVar7 + 8);
            uVar33 = lVar8 + 0x10;
            if (uVar33 < 0xff1) {
              *(ulong *)(lVar7 + 8) = uVar33;
              plVar14 = (long *)(lVar7 + 0x10 + lVar8);
            }
            else {
              puVar13 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
              if (puVar13 == (undefined8 *)0x0) {
                *piVar6 = 2;
                goto LAB_0011a978;
              }
              *puVar13 = *(undefined8 *)(piVar6 + 0x18);
              *(undefined8 **)(piVar6 + 0x18) = puVar13;
              plVar14 = puVar13 + 2;
              puVar13[1] = 0x10;
            }
            *plVar14 = lVar12;
            plVar14[1] = (long)local_48;
            local_48 = plVar14;
          }
        }
LAB_0011a978:
        lVar12 = sljit_emit_jump(piVar6,0x24);
        if (*piVar6 == 0) {
          lVar7 = *(long *)(piVar6 + 0x18);
          lVar8 = *(long *)(lVar7 + 8);
          uVar33 = lVar8 + 0x10;
          if (uVar33 < 0xff1) {
            *(ulong *)(lVar7 + 8) = uVar33;
            plVar14 = (long *)(lVar7 + 0x10 + lVar8);
          }
          else {
            puVar13 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
            if (puVar13 == (undefined8 *)0x0) {
              *piVar6 = 2;
              goto LAB_0011aa08;
            }
            *puVar13 = *(undefined8 *)(piVar6 + 0x18);
            *(undefined8 **)(piVar6 + 0x18) = puVar13;
            plVar14 = puVar13 + 2;
            puVar13[1] = 0x10;
          }
          plVar2 = *param_3;
          *plVar14 = lVar12;
          plVar14[1] = (long)plVar2;
          *param_3 = plVar14;
        }
LAB_0011aa08:
        lVar12 = sljit_emit_label(piVar6);
        if ((lVar10 != 0) && (lVar12 != 0)) {
          *(long *)(lVar10 + 0x18) = lVar12;
          *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
        }
LAB_0011aa38:
        puVar30 = param_2 + 0x11;
      }
      else {
        read_char_isra_0(param_1,uVar29,param_3);
        uVar9 = *param_2 & 2;
        if ((*param_2 & 4) == 0) goto LAB_0011a71b;
LAB_0011acf2:
        if (uVar9 != 0) {
          sljit_emit_op1(piVar6,0x20,5,0,1,0);
          iVar17 = optimize_class_ranges_isra_0(*param_1,puVar30,0,1,pplVar15);
          if ((iVar17 == 0) &&
             (iVar17 = optimize_class_chars_isra_0(*param_1,puVar30,0,1,pplVar15), iVar17 == 0)) {
            lVar10 = sljit_emit_cmp(piVar6,4,1,0,0x7f,0xff);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cum_binary(piVar6,0x25232120,4,0,1,0,0x7f,7);
              if (*piVar6 == 0) {
                piVar6[0x26] = 0;
                emit_shift_with_flags(piVar6,0x28,0,1,0,1,0,0x7f,3);
              }
            }
            sljit_emit_op1(piVar6,0x21,1,0,0x81,puVar30);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_shift_with_flags(piVar6,0x20,0,4,0,0x7f,1,4,0);
              if (*piVar6 == 0) {
                piVar6[0x26] = 0;
                puVar11 = (undefined1 *)emit_x86_instruction(piVar6,1,1,0,4,0);
                if (puVar11 != (undefined1 *)0x0) {
                  *puVar11 = 0x85;
                }
              }
            }
            lVar12 = sljit_emit_jump(piVar6,1);
            if (*piVar6 == 0) {
              lVar7 = *(long *)(piVar6 + 0x18);
              lVar8 = *(long *)(lVar7 + 8);
              uVar33 = lVar8 + 0x10;
              if (uVar33 < 0xff1) {
                *(ulong *)(lVar7 + 8) = uVar33;
                plVar14 = (long *)(lVar7 + 0x10 + lVar8);
              }
              else {
                puVar13 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
                if (puVar13 == (undefined8 *)0x0) {
                  *piVar6 = 2;
                  goto LAB_0011b757;
                }
                *puVar13 = *(undefined8 *)(piVar6 + 0x18);
                *(undefined8 **)(piVar6 + 0x18) = puVar13;
                plVar14 = puVar13 + 2;
                puVar13[1] = 0x10;
              }
              plVar2 = *pplVar15;
              *plVar14 = lVar12;
              plVar14[1] = (long)plVar2;
              *pplVar15 = plVar14;
            }
LAB_0011b757:
            lVar12 = sljit_emit_label(piVar6);
            if ((lVar10 != 0) && (lVar12 != 0)) {
              *(long *)(lVar10 + 0x18) = lVar12;
              *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          local_64 = local_64 | 2;
          sljit_emit_op1(piVar6,0x20,1,0,5,0);
          goto LAB_0011aa38;
        }
      }
joined_r0x0011ad07:
      uVar27 = 1;
      if ((local_64 & 0x7c) != 0) {
        if ((local_64 & 3) == 1) {
          sljit_emit_op1(piVar6,0x20,5,0,1,0);
        }
        if (*piVar6 == 0) {
          piVar6[0x26] = 0;
          emit_shift_with_flags(piVar6,0x28,0,4,0,1,0,0x7f,7);
          if (*piVar6 == 0) {
            piVar6[0x26] = 0;
            emit_shift_with_flags(piVar6,0x20,0,4,0,4,0,0x7f,1);
          }
        }
        sljit_emit_op1(piVar6,0x23,4,0,0x84,&_pcre2_ucd_stage1_16);
        iVar17 = *piVar6;
        if (iVar17 == 0) {
          piVar6[0x26] = 0;
          emit_cum_binary(piVar6,0x25232120,1,0,1,0,0x7f,0x7f);
          if (*piVar6 == 0) {
            piVar6[0x26] = 0;
            emit_shift_with_flags(piVar6,0x20,0,4,0,4,0,0x7f,7);
          }
        }
        sljit_emit_op2(piVar6,0x40,1,0,1,0,4,0);
        sljit_emit_op1(piVar6,0x20,4,0,0x7f,&_pcre2_ucd_stage2_16);
        uVar24 = 0x184;
        sljit_emit_op1(piVar6,0x23,4,0,0x184,1);
        if (*piVar6 == 0) {
          piVar6[0x26] = 0;
          uVar23 = 0x20;
          emit_shift_with_flags(piVar6,0x20,0,1,0,4,0,0x7f,3,uVar24);
          if (*piVar6 == 0) {
            piVar6[0x26] = 0;
            emit_shift_with_flags(piVar6,0x20,0,4,0,4,0,0x7f,2,uVar23);
          }
        }
        sljit_emit_op2(piVar6,0x40,4,0,4,0,1,0);
        iVar20 = (iVar20 + 1) - (uint)(uVar28 == 0);
        if ((local_64 & 0x40) != 0) {
          sljit_emit_op1(piVar6,0x23,1,0,0x84,&_pcre2_ucp_gbtable_16);
          puVar22 = puVar30;
          if (*piVar6 == 0) {
            piVar6[0x26] = 0;
            emit_shift_with_flags(piVar6,0x28,0,1,0,1,0,0x7f,0xb,iVar17);
          }
          while (puVar21 = puVar22, uVar9 = *puVar21, uVar9 != 0) {
            uVar3 = puVar21[1];
            if (uVar9 == 1) {
              puVar22 = puVar21 + 2;
              if ((iVar4 != 0) && ((uVar3 & 0xfc00) == 0xd800)) {
LAB_0011d308:
                puVar22 = puVar21 + 3;
              }
            }
            else {
              if (uVar9 != 2) {
                if (uVar3 == 0xc) {
                  iVar20 = iVar20 + -1;
                  bVar35 = iVar20 == 0 && pplVar15 != param_3;
                  if (uVar9 == 4) {
                    bVar35 = iVar20 != 0 || pplVar15 == param_3;
                  }
                  lVar10 = sljit_emit_cmp(piVar6,bVar35,1,0,0x7f,puVar21[2]);
                  pplVar18 = pplVar15;
                  if (iVar20 < 1) {
                    pplVar18 = param_3;
                  }
                  if (*piVar6 == 0) {
                    lVar12 = *(long *)(piVar6 + 0x18);
                    lVar7 = *(long *)(lVar12 + 8);
                    uVar33 = lVar7 + 0x10;
                    if (uVar33 < 0xff1) {
                      *(ulong *)(lVar12 + 8) = uVar33;
                      plVar14 = (long *)(lVar12 + 0x10 + lVar7);
                    }
                    else {
                      puVar13 = (undefined8 *)
                                (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                          (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
                      if (puVar13 == (undefined8 *)0x0) {
                        *piVar6 = 2;
                        goto LAB_0011d308;
                      }
                      *puVar13 = *(undefined8 *)(piVar6 + 0x18);
                      *(undefined8 **)(piVar6 + 0x18) = puVar13;
                      plVar14 = puVar13 + 2;
                      puVar13[1] = 0x10;
                    }
                    plVar2 = *pplVar18;
                    *plVar14 = lVar10;
                    plVar14[1] = (long)plVar2;
                    *pplVar18 = plVar14;
                  }
                }
                goto LAB_0011d308;
              }
              puVar22 = puVar21 + 3;
              if (iVar4 != 0) {
                puVar22 = puVar21 + 2;
                if ((uVar3 & 0xfc00) == 0xd800) {
                  puVar22 = puVar21 + 3;
                }
                if ((*puVar22 & 0xfc00) == 0xd800) {
                  puVar22 = puVar22 + 2;
                }
                else {
                  puVar22 = puVar22 + 1;
                }
              }
            }
          }
        }
        if ((local_64 & 0x20) != 0) {
          sljit_emit_op1(piVar6,0x23,1,0,0x84);
          puVar22 = puVar30;
          if (*piVar6 == 0) {
            uVar24 = 0;
            piVar6[0x26] = 0;
            emit_cum_binary(piVar6,0x25232120,1);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_shift_with_flags(piVar6,0x20,0,1,0,1,0,0x7f,2,uVar24);
            }
          }
          while (puVar21 = puVar22, uVar9 = *puVar21, uVar9 != 0) {
            uVar3 = puVar21[1];
            if (uVar9 == 1) {
              puVar22 = puVar21 + 2;
              if ((iVar4 != 0) && ((uVar3 & 0xfc00) == 0xd800)) {
LAB_0011d25a:
                puVar22 = puVar21 + 3;
              }
            }
            else {
              if (uVar9 != 2) {
                if (uVar3 == 0xd) {
                  iVar20 = iVar20 + -1;
                  bVar35 = iVar20 == 0 && pplVar15 != param_3;
                  if (uVar9 == 4) {
                    bVar35 = iVar20 != 0 || pplVar15 == param_3;
                  }
                  if (*piVar6 == 0) {
                    uVar9 = puVar21[2];
                    piVar6[0x26] = 0x100;
                    emit_test_binary(piVar6,0x81,
                                     &_pcre2_ucd_boolprop_sets_16 + (ulong)(uVar9 >> 5) * 4,0x7f,
                                     1L << ((byte)uVar9 & 0x1f));
                  }
                  lVar10 = sljit_emit_jump(piVar6,bVar35 ^ 1);
                  pplVar18 = pplVar15;
                  if (iVar20 < 1) {
                    pplVar18 = param_3;
                  }
                  if (*piVar6 == 0) {
                    lVar12 = *(long *)(piVar6 + 0x18);
                    lVar7 = *(long *)(lVar12 + 8);
                    uVar33 = lVar7 + 0x10;
                    if (uVar33 < 0xff1) {
                      *(ulong *)(lVar12 + 8) = uVar33;
                      plVar14 = (long *)(lVar12 + 0x10 + lVar7);
                    }
                    else {
                      puVar13 = (undefined8 *)
                                (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                          (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
                      if (puVar13 == (undefined8 *)0x0) {
                        *piVar6 = 2;
                        goto LAB_0011d25a;
                      }
                      *puVar13 = *(undefined8 *)(piVar6 + 0x18);
                      *(undefined8 **)(piVar6 + 0x18) = puVar13;
                      plVar14 = puVar13 + 2;
                      puVar13[1] = 0x10;
                    }
                    plVar2 = *pplVar18;
                    *plVar14 = lVar10;
                    plVar14[1] = (long)plVar2;
                    *pplVar18 = plVar14;
                  }
                }
                goto LAB_0011d25a;
              }
              puVar22 = puVar21 + 3;
              if (iVar4 != 0) {
                puVar22 = puVar21 + 2;
                if ((uVar3 & 0xfc00) == 0xd800) {
                  puVar22 = puVar21 + 3;
                }
                if ((*puVar22 & 0xfc00) == 0xd800) {
                  puVar22 = puVar22 + 2;
                }
                else {
                  puVar22 = puVar22 + 1;
                }
              }
            }
          }
        }
        if ((local_64 & 8) != 0) {
          sljit_emit_op1(piVar6,0x21,1,0,0x84,&_pcre2_ucd_records_16);
          puVar22 = puVar30;
          while (puVar21 = puVar22, uVar9 = *puVar21, uVar9 != 0) {
            uVar3 = puVar21[1];
            if (uVar9 == 1) {
              puVar22 = puVar21 + 2;
              if ((iVar4 != 0) && ((uVar3 & 0xfc00) == 0xd800)) {
LAB_0011d0fa:
                puVar22 = puVar21 + 3;
              }
            }
            else {
              if (uVar9 != 2) {
                if (uVar3 == 4) {
                  bVar35 = iVar20 == 1 && pplVar15 != param_3;
                  if (uVar9 == 4) {
                    bVar35 = iVar20 != 1 || pplVar15 == param_3;
                  }
                }
                else {
                  if ((uVar3 != 5) || (uVar9 == 4)) goto LAB_0011d0fa;
                  bVar35 = iVar20 == 1 && pplVar15 != param_3;
                }
                iVar20 = iVar20 + -1;
                lVar10 = sljit_emit_cmp(piVar6,bVar35,1,0,0x7f,puVar21[2]);
                pplVar18 = pplVar15;
                if (iVar20 < 1) {
                  pplVar18 = param_3;
                }
                if (*piVar6 == 0) {
                  lVar12 = *(long *)(piVar6 + 0x18);
                  lVar7 = *(long *)(lVar12 + 8);
                  uVar33 = lVar7 + 0x10;
                  if (uVar33 < 0xff1) {
                    *(ulong *)(lVar12 + 8) = uVar33;
                    plVar14 = (long *)(lVar12 + 0x10 + lVar7);
                  }
                  else {
                    puVar13 = (undefined8 *)
                              (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                        (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
                    if (puVar13 == (undefined8 *)0x0) {
                      *piVar6 = 2;
                      goto LAB_0011d0fa;
                    }
                    *puVar13 = *(undefined8 *)(piVar6 + 0x18);
                    *(undefined8 **)(piVar6 + 0x18) = puVar13;
                    plVar14 = puVar13 + 2;
                    puVar13[1] = 0x10;
                  }
                  plVar2 = *pplVar18;
                  *plVar14 = lVar10;
                  plVar14[1] = (long)plVar2;
                  *pplVar18 = plVar14;
                }
                goto LAB_0011d0fa;
              }
              puVar22 = puVar21 + 3;
              if (iVar4 != 0) {
                puVar16 = puVar21 + 2;
                if ((uVar3 & 0xfc00) == 0xd800) {
                  puVar16 = puVar21 + 3;
                }
                puVar22 = puVar16 + 2;
                if ((*puVar16 & 0xfc00) != 0xd800) {
                  puVar22 = puVar16 + 1;
                }
              }
            }
          }
        }
        if ((local_64 & 0x10) != 0) {
          sljit_emit_op1(piVar6,0x23,1,0,0x84,&_pcre2_ucp_gbtable_16);
          if (*piVar6 == 0) {
            piVar6[0x26] = 0;
            emit_cum_binary(piVar6,0x25232120,1,0,1,0,0x7f,0x3ff);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_shift_with_flags(piVar6,0x20,0,1,0,1,0,0x7f,2,extraout_RDX);
            }
          }
          puVar22 = puVar30;
          if ((local_64 & 0x80) != 0) {
            if ((local_64 & 4) != 0) {
              if ((local_64 & 1) == 0) {
                sljit_emit_op1(piVar6,0x20,5,0,4,0);
                bVar19 = true;
              }
              else {
                bVar34 = true;
                sljit_emit_op1(piVar6,0x20,0x8e,0,4,0);
              }
            }
            sljit_emit_op1(piVar6,0x21,4,0,0x84,&_pcre2_ucd_records_16);
          }
          while (puVar21 = puVar22, uVar9 = *puVar21, uVar9 != 0) {
            uVar3 = puVar21[1];
            if (uVar9 == 1) {
              puVar22 = puVar21 + 2;
              if ((iVar4 != 0) && ((uVar3 & 0xfc00) == 0xd800)) {
LAB_0011cd26:
                puVar22 = puVar21 + 3;
              }
            }
            else {
              if (uVar9 != 2) {
                if (uVar3 == 5) {
                  iVar20 = iVar20 + -1;
                  lVar10 = 0;
                  if ((uVar9 == 4) &&
                     (lVar10 = sljit_emit_cmp(piVar6,0,4,0,0x7f,puVar21[2]),
                     iVar20 == 0 && pplVar15 != param_3)) {
                    if (*piVar6 == 0) {
                      lVar12 = *(long *)(piVar6 + 0x18);
                      lVar7 = *(long *)(lVar12 + 8);
                      uVar33 = lVar7 + 0x10;
                      if (uVar33 < 0xff1) {
                        *(ulong *)(lVar12 + 8) = uVar33;
                        plVar14 = (long *)(lVar12 + 0x10 + lVar7);
                      }
                      else {
                        puVar13 = (undefined8 *)
                                  (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                            (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
                        if (puVar13 == (undefined8 *)0x0) {
                          *piVar6 = 2;
                          lVar10 = 0;
                          goto LAB_0011cda5;
                        }
                        *puVar13 = *(undefined8 *)(piVar6 + 0x18);
                        *(undefined8 **)(piVar6 + 0x18) = puVar13;
                        plVar14 = puVar13 + 2;
                        puVar13[1] = 0x10;
                      }
                      plVar2 = *param_3;
                      *plVar14 = lVar10;
                      plVar14[1] = (long)plVar2;
                      *param_3 = plVar14;
                    }
                    lVar10 = 0;
                  }
LAB_0011cda5:
                  if (*piVar6 == 0) {
                    uVar9 = puVar21[2];
                    piVar6[0x26] = 0x100;
                    emit_test_binary(piVar6,0x81,
                                     &_pcre2_ucd_script_sets_16 + (ulong)(uVar9 >> 5) * 4,0x7f,
                                     1L << ((byte)uVar9 & 0x1f));
                  }
                  lVar12 = sljit_emit_jump(piVar6);
                  pplVar18 = pplVar15;
                  if (iVar20 < 1) {
                    pplVar18 = param_3;
                  }
                  if (*piVar6 == 0) {
                    lVar7 = *(long *)(piVar6 + 0x18);
                    lVar8 = *(long *)(lVar7 + 8);
                    uVar33 = lVar8 + 0x10;
                    if (uVar33 < 0xff1) {
                      *(ulong *)(lVar7 + 8) = uVar33;
                      plVar14 = (long *)(lVar7 + 0x10 + lVar8);
                    }
                    else {
                      puVar13 = (undefined8 *)(*(code *)**(undefined8 **)(piVar6 + 0x12))(0x1000);
                      if (puVar13 == (undefined8 *)0x0) {
                        *piVar6 = 2;
                        goto LAB_0011ce7e;
                      }
                      *puVar13 = *(undefined8 *)(piVar6 + 0x18);
                      *(undefined8 **)(piVar6 + 0x18) = puVar13;
                      plVar14 = puVar13 + 2;
                      puVar13[1] = 0x10;
                    }
                    plVar2 = *pplVar18;
                    *plVar14 = lVar12;
                    plVar14[1] = (long)plVar2;
                    *pplVar18 = plVar14;
                  }
LAB_0011ce7e:
                  if ((lVar10 != 0) && (lVar12 = sljit_emit_label(piVar6), lVar12 != 0)) {
                    *(long *)(lVar10 + 0x18) = lVar12;
                    *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
                  }
                }
                goto LAB_0011cd26;
              }
              puVar22 = puVar21 + 3;
              if (iVar4 != 0) {
                puVar22 = puVar21 + 2;
                if ((uVar3 & 0xfc00) == 0xd800) {
                  puVar22 = puVar21 + 3;
                }
                if ((*puVar22 & 0xfc00) == 0xd800) {
                  puVar22 = puVar22 + 2;
                }
                else {
                  puVar22 = puVar22 + 1;
                }
              }
            }
          }
          if (bVar34) {
            uVar24 = 0x8e;
          }
          else {
            if (!bVar19) goto LAB_0011af54;
            uVar24 = 5;
          }
          sljit_emit_op1(piVar6,0x20,4,0,uVar24,0);
        }
LAB_0011af54:
        if ((local_64 & 1) == 0) {
          if ((local_64 & 4) == 0) {
LAB_0011af70:
            uVar27 = 1;
            goto LAB_0011aa53;
          }
          uVar27 = 1;
        }
        else {
          sljit_emit_op1(piVar6,0x20,1,0,5,0);
          if ((local_64 & 4) == 0) goto LAB_0011af70;
          uVar27 = 5;
        }
        sljit_emit_op1(piVar6,0x21,4,0,0x84,&DAT_0013a019);
        if (*piVar6 == 0) {
          piVar6[0x26] = 0;
          emit_shift_with_flags(piVar6,0x20,0,uVar27,0,0x7f,1,4,0,0);
          if (uVar28 != 0) {
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_test_binary(piVar6,uVar27,0,0x7f,uVar28);
            }
            bVar34 = iVar20 == 1 && pplVar15 != param_3;
LAB_0011cb20:
            iVar20 = iVar20 + -1;
            lVar10 = sljit_emit_jump(piVar6,bVar34 ^ 1);
            pplVar18 = pplVar15;
            if (iVar20 < 1) {
              pplVar18 = param_3;
            }
            if (*piVar6 == 0) {
              lVar12 = *(long *)(piVar6 + 0x18);
              lVar7 = *(long *)(lVar12 + 8);
              uVar33 = lVar7 + 0x10;
              if (uVar33 < 0xff1) {
                *(ulong *)(lVar12 + 8) = uVar33;
                plVar14 = (long *)(lVar12 + 0x10 + lVar7);
              }
              else {
                puVar13 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
                if (puVar13 == (undefined8 *)0x0) {
                  *piVar6 = 2;
                  goto LAB_0011aa53;
                }
                *puVar13 = *(undefined8 *)(piVar6 + 0x18);
                *(undefined8 **)(piVar6 + 0x18) = puVar13;
                plVar14 = puVar13 + 2;
                puVar13[1] = 0x10;
              }
              plVar2 = *pplVar18;
              *plVar14 = lVar10;
              plVar14[1] = (long)plVar2;
              *pplVar18 = plVar14;
            }
          }
        }
        else if (uVar28 != 0) {
          bVar34 = pplVar15 != param_3 && iVar20 == 1;
          goto LAB_0011cb20;
        }
      }
LAB_0011aa53:
      uVar9 = *puVar30;
      if (uVar9 != 0) {
        local_64 = 0;
        bVar34 = pplVar15 != param_3;
        uVar33 = 0;
        do {
          uVar3 = puVar30[1];
          uVar29 = (ulong)uVar3;
          iVar17 = iVar20 + -1;
          bVar35 = iVar17 == 0;
          bVar19 = bVar35 && bVar34;
          if (uVar9 == 1) {
            puVar22 = puVar30 + 2;
            if ((iVar4 != 0) && ((uVar3 & 0xfc00) == 0xd800)) {
              puVar22 = puVar30 + 3;
              uVar29 = (ulong)((uVar3 & 0x3ff) << 10 | puVar30[2] & 0x3ff) + 0x10000;
            }
            if ((int)local_64 < 3) {
              if ((ushort)(*puVar22 - 1) < 2) {
                if (*piVar6 == 0) {
                  piVar6[0x26] = 0;
                  emit_cmp_binary(piVar6,1,0,0x7f);
                }
                bVar19 = local_64 == 0;
                local_64 = local_64 + 1;
                sljit_emit_op_flags_constprop_0_isra_0
                          (piVar6,(-(uint)bVar19 & 0xffffffda) + 0x46,4,0);
                iVar20 = iVar17;
                goto code_r0x0011b233;
              }
              if ((int)local_64 < 1) {
                lVar10 = sljit_emit_cmp(piVar6,bVar19,1,0,0x7f,uVar29 - uVar33);
                local_64 = 0;
                goto LAB_0011b171;
              }
            }
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x246,4,0);
            lVar10 = sljit_emit_jump(piVar6,!bVar35 || !bVar34);
            local_64 = 0;
            goto LAB_0011b171;
          }
          if (uVar9 == 2) {
            puVar21 = puVar30 + 2;
            if (iVar4 == 0) {
              if (uVar29 != uVar33) goto LAB_0011b3cf;
              uVar25 = (ulong)puVar30[2];
              puVar22 = puVar30 + 3;
            }
            else {
              if ((uVar3 & 0xfc00) == 0xd800) {
                puVar21 = puVar30 + 3;
                uVar29 = (ulong)((uVar3 & 0x3ff) << 10 | puVar30[2] & 0x3ff) + 0x10000;
                if (uVar29 != uVar33) goto LAB_0011b3cf;
                uVar9 = puVar30[3];
                uVar25 = (ulong)uVar9;
                puVar22 = puVar30 + 4;
              }
              else if (uVar29 == uVar33) {
                uVar9 = puVar30[2];
                uVar25 = (ulong)uVar9;
                puVar22 = puVar30 + 3;
              }
              else {
LAB_0011b3cf:
                if (uVar29 < uVar33) {
                  sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,uVar33 - uVar29);
                }
                else {
                  sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,uVar29 - uVar33);
                }
                uVar9 = *puVar21;
                uVar25 = (ulong)uVar9;
                puVar22 = puVar21 + 1;
                uVar33 = uVar29;
                if (iVar4 == 0) goto LAB_0011b460;
              }
              if ((uVar9 & 0xfc00) == 0xd800) {
                puVar22 = puVar21 + 2;
                uVar25 = (ulong)((uint)(uVar25 << 10) & 0xffc00 | puVar21[1] & 0x3ff) + 0x10000;
              }
            }
LAB_0011b460:
            if ((int)local_64 < 3) {
              if ((ushort)(*puVar22 - 1) < 2) {
                if (*piVar6 == 0) {
                  piVar6[0x26] = 0;
                  emit_cmp_binary(piVar6,1,0,0x7f);
                }
                bVar19 = local_64 == 0;
                local_64 = local_64 + 1;
                sljit_emit_op_flags_constprop_0_isra_0
                          (piVar6,(-(uint)bVar19 & 0xffffffda) + 0x46,4,5);
                iVar20 = iVar17;
                goto code_r0x0011b233;
              }
              if ((int)local_64 < 1) {
                lVar10 = sljit_emit_cmp(piVar6,bVar19 ^ 5,1,0,0x7f,uVar25 - uVar33);
                local_64 = 0;
                goto LAB_0011b171;
              }
            }
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x246,4,5);
            lVar10 = sljit_emit_jump(piVar6,!bVar35 || !bVar34);
            local_64 = 0;
            goto LAB_0011b171;
          }
          if (uVar9 == 4) {
            bVar19 = !bVar35 || !bVar34;
          }
          puVar22 = puVar30 + 3;
          switch(uVar29) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 9:
          case 0xc:
          case 0xd:
            goto code_r0x0011b233;
          case 7:
          case 8:
            if (uVar33 != 9) {
              if (uVar33 < 10) {
                sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,9 - uVar33);
              }
              else {
                sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,uVar33 - 9);
              }
            }
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar10 = emit_x86_instruction(piVar6,0x11,0x7f,4,1);
              if (lVar10 != 0) {
                *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,5);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar10 = emit_x86_instruction(piVar6,0x11,0x7f,0x7c,1);
              if (lVar10 != 0) {
                *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,0);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f,0x1805);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,0);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_test_binary(piVar6,uVar27,0,0x7f,0x38000000);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x246,4,1);
            uVar33 = 9;
            lVar10 = sljit_emit_jump(piVar6,bVar19 ^ 1);
            break;
          case 10:
            lVar10 = (ulong)puVar30[2] * 4;
            puVar31 = (uint *)(&_pcre2_ucd_caseless_sets_16 + lVar10);
            uVar28 = *puVar31;
            uVar32 = *(uint *)(&DAT_0013a09c + lVar10) ^ uVar28;
            if ((uVar32 - 1 & uVar32) == 0) {
              if (uVar33 == 0) {
                if (*piVar6 == 0) {
                  piVar6[0x26] = 0;
                  uVar24 = 1;
LAB_0011c0e6:
                  emit_cum_binary(piVar6,0xd0b0908,4,0,uVar24,0,0x7f,uVar32);
                  uVar5 = *(undefined4 *)(&DAT_0013a09c + lVar10);
                  if (*piVar6 == 0) {
                    piVar6[0x26] = 0;
                    emit_cmp_binary(piVar6,4,0,0x7f,uVar5);
                  }
                }
              }
              else {
                sljit_emit_op2(piVar6,0x40,4,0,1,0,0x7f,uVar33);
                uVar32 = *(uint *)(&DAT_0013a09c + lVar10) ^ *puVar31;
                if (*piVar6 == 0) {
                  piVar6[0x26] = 0;
                  uVar24 = 4;
                  goto LAB_0011c0e6;
                }
              }
              sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,0);
              puVar31 = (uint *)(&_pcre2_ucp_typerange_16 + lVar10);
            }
            else {
              uVar32 = *(uint *)(&DAT_0013a09c + lVar10) ^
                       *(uint *)(&_pcre2_ucp_typerange_16 + lVar10);
              if ((uVar32 - 1 & uVar32) != 0) {
                puVar31 = (uint *)(&DAT_0013a09c + lVar10);
                if (*piVar6 == 0) {
                  piVar6[0x26] = 0;
                  emit_cmp_binary(piVar6,1,0,0x7f,uVar28 - uVar33);
                }
                uVar24 = 0x20;
                goto LAB_0011c191;
              }
              if (uVar33 == 0) {
                if (*piVar6 == 0) {
                  piVar6[0x26] = 0;
                  uVar24 = 1;
LAB_0011c6ea:
                  emit_cum_binary(piVar6,0xd0b0908,4,0,uVar24,0,0x7f,uVar32);
                  uVar5 = *(undefined4 *)(&_pcre2_ucp_typerange_16 + lVar10);
                  if (*piVar6 == 0) {
                    piVar6[0x26] = 0;
                    emit_cmp_binary(piVar6,4,0,0x7f,uVar5);
                  }
                }
              }
              else {
                sljit_emit_op2(piVar6,0x40,4,0,1,0,0x7f,uVar33);
                uVar32 = *(uint *)(&DAT_0013a09c + lVar10) ^ *puVar31;
                if (*piVar6 == 0) {
                  piVar6[0x26] = 0;
                  uVar24 = 4;
                  goto LAB_0011c6ea;
                }
              }
              sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,0);
              if (*piVar6 == 0) {
                uVar28 = *puVar31;
                piVar6[0x26] = 0;
                emit_cmp_binary(piVar6,1,0,0x7f,uVar28 - uVar33);
              }
              uVar24 = 0x46;
              if (*(int *)(&DAT_0013a0a4 + lVar10) == -1) {
                uVar24 = 0x246;
              }
              puVar31 = (uint *)(&DAT_0013a0a4 + lVar10);
              sljit_emit_op_flags_constprop_0_isra_0(piVar6,uVar24,4,0);
            }
            while (uVar28 = *puVar31, uVar28 != 0xffffffff) {
              puVar31 = puVar31 + 1;
              if (*piVar6 == 0) {
                piVar6[0x26] = 0;
                emit_cmp_binary(piVar6,1,0,0x7f,uVar28 - uVar33);
              }
              uVar24 = 0x246;
              if (*puVar31 != 0xffffffff) {
                uVar24 = 0x46;
              }
LAB_0011c191:
              sljit_emit_op_flags_constprop_0_isra_0(piVar6,uVar24,4,0);
            }
            lVar10 = sljit_emit_jump(piVar6,bVar19 ^ 1);
            break;
          case 0xb:
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f,0x24 - uVar33);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,0);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f,0x40 - uVar33);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,0);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f,0x60 - uVar33);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,0);
            if (uVar33 != 0xa0) {
              if (uVar33 < 0xa1) {
                sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,0xa0 - uVar33);
              }
              else {
                sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,uVar33 - 0xa0);
              }
            }
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f,0xd75f);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,5);
            sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,0xa0);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f,0xe000);
            }
            uVar24 = 3;
            goto LAB_0011bbc8;
          case 0xe:
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_test_binary(piVar6,uVar27,0,0x7f,0x3800001f);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,1);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_test_binary(piVar6,uVar27,0,0x7f,2);
            }
            lVar10 = sljit_emit_jump(piVar6,0);
            if (uVar33 != 0x2066) {
              if (uVar33 < 0x2067) {
                sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,0x2066 - uVar33);
              }
              else {
                sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,uVar33 - 0x2066);
              }
            }
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar12 = emit_x86_instruction(piVar6,0x11,0x7f,3,1);
              if (lVar12 != 0) {
                *(byte *)(lVar12 + 1) = *(byte *)(lVar12 + 1) | 0x38;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,5);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f,0xffffffffffffe5b6);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,0);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f,0xfffffffffffff7a8);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,0);
            if (uVar33 != 0x2066) {
              if (uVar33 < 0x2066) {
                sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,0x2066 - uVar33);
              }
              else {
                sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f);
              }
            }
            lVar12 = sljit_emit_label(piVar6);
            if ((lVar12 != 0) && (lVar10 != 0)) {
              *(long *)(lVar10 + 0x18) = lVar12;
              *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
            }
            goto LAB_0011bde5;
          case 0xf:
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_test_binary(piVar6,uVar27,0,0x7f,0x1800001f);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,1);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_test_binary(piVar6,uVar27,0,0x7f,2);
            }
            lVar10 = sljit_emit_jump(piVar6,0);
            if (uVar33 != 0x2066) {
              if (uVar33 < 0x2067) {
                sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,0x2066 - uVar33);
              }
              else {
                sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,uVar33 - 0x2066);
              }
            }
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar12 = emit_x86_instruction(piVar6,0x11,0x7f,3,1);
              if (lVar12 != 0) {
                *(byte *)(lVar12 + 1) = *(byte *)(lVar12 + 1) | 0x38;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,5);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cmp_binary(piVar6,1,0,0x7f,0xffffffffffffe5b6);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,0);
            if (uVar33 != 0x2066) {
              if (uVar33 < 0x2066) {
                sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f);
              }
              else {
                sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,uVar33 - 0x2066);
              }
            }
            lVar12 = sljit_emit_label(piVar6);
            if ((lVar12 != 0) && (lVar10 != 0)) {
              *(long *)(lVar10 + 0x18) = lVar12;
              *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
            }
LAB_0011bde5:
            lVar10 = sljit_emit_cmp(piVar6,bVar19,4,0,0x7f);
            break;
          case 0x10:
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_test_binary(piVar6,uVar27,0,0x7f,0x7800000);
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,1);
            if (uVar33 != 0) {
              sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,uVar33);
            }
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar10 = emit_x86_instruction(piVar6,0x11,0x7f,0x7f,1);
              if (lVar10 != 0) {
                *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x45,4,5);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_test_binary(piVar6,uVar27,0,0x7f,0x7f0000);
            }
            uVar24 = 1;
LAB_0011bbc8:
            uVar33 = 0;
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x246,4,uVar24);
            lVar10 = sljit_emit_jump(piVar6,bVar19 ^ 1);
            break;
          case 0x11:
            if (uVar33 != 0x41) {
              if (uVar33 < 0x42) {
                sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,0x41 - uVar33);
              }
              else {
                sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,uVar33 - 0x41);
              }
            }
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              emit_cum_binary(piVar6,0x25232120,4,0,1,0,0x7f,0xffffffffffffffdf);
              if (*piVar6 == 0) {
                piVar6[0x26] = 0;
                lVar10 = emit_x86_instruction(piVar6,0x11,0x7f,5,4,0);
                if (lVar10 != 0) {
                  *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
                }
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x20,4,5);
            sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,0x11);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar10 = emit_x86_instruction(piVar6,0x11,0x7f,9,1,0);
              if (lVar10 != 0) {
                *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,5);
            sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,0xfee0);
            lVar10 = sljit_emit_cmp(piVar6,4,1,0,0x7f,0x36);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar12 = emit_x86_instruction(piVar6,0x11,0x7f,9,1,0);
              if (lVar12 != 0) {
                *(byte *)(lVar12 + 1) = *(byte *)(lVar12 + 1) | 0x38;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,5);
            sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,0x11);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar12 = emit_x86_instruction(piVar6,0x11,0x7f,5,1,0);
              if (lVar12 != 0) {
                *(byte *)(lVar12 + 1) = *(byte *)(lVar12 + 1) | 0x38;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,5);
            sljit_emit_op2(piVar6,0x42,1,0,1,0,0x7f,0x20);
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar12 = emit_x86_instruction(piVar6,0x11,0x7f,5,1);
              if (lVar12 != 0) {
                *(byte *)(lVar12 + 1) = *(byte *)(lVar12 + 1) | 0x38;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar6,0x46,4,5);
            sljit_emit_op2(piVar6,0x40,1,0,1,0,0x7f,0x31);
            lVar12 = sljit_emit_label(piVar6);
            if ((lVar10 != 0) && (lVar12 != 0)) {
              *(long *)(lVar10 + 0x18) = lVar12;
              *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
            }
            if (*piVar6 == 0) {
              piVar6[0x26] = 0;
              lVar10 = emit_x86_instruction(piVar6,0x11,0x7f,0,4);
              if (lVar10 != 0) {
                *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
              }
            }
            uVar33 = 0xff10;
            lVar10 = sljit_emit_jump(piVar6,bVar19 ^ 1);
            break;
          default:
            FUN_0011b233();
            return;
          }
LAB_0011b171:
          if (lVar10 == 0) goto LAB_0011b1e0;
          pplVar18 = pplVar15;
          if (iVar17 < 1) {
            pplVar18 = param_3;
          }
          if (*piVar6 != 0) goto LAB_0011b1e0;
          lVar12 = *(long *)(piVar6 + 0x18);
          lVar7 = *(long *)(lVar12 + 8);
          uVar29 = lVar7 + 0x10;
          if (uVar29 < 0xff1) {
            *(ulong *)(lVar12 + 8) = uVar29;
            plVar14 = (long *)(lVar12 + 0x10 + lVar7);
LAB_0011b1d2:
            plVar2 = *pplVar18;
            *plVar14 = lVar10;
            plVar14[1] = (long)plVar2;
            *pplVar18 = plVar14;
LAB_0011b1e0:
            FUN_0011b233();
            return;
          }
          puVar13 = (undefined8 *)(*(code *)**(undefined8 **)(piVar6 + 0x12))(0x1000);
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = *(undefined8 *)(piVar6 + 0x18);
            *(undefined8 **)(piVar6 + 0x18) = puVar13;
            plVar14 = puVar13 + 2;
            puVar13[1] = 0x10;
            goto LAB_0011b1d2;
          }
          *piVar6 = 2;
          iVar20 = iVar17;
code_r0x0011b233:
          uVar9 = *puVar22;
          puVar30 = puVar22;
        } while (uVar9 != 0);
      }
      plVar14 = local_48;
      if (local_48 != (long *)0x0) {
        lVar10 = sljit_emit_label(piVar6);
        do {
          lVar12 = *plVar14;
          if ((lVar12 != 0) && (lVar10 != 0)) {
            *(long *)(lVar12 + 0x18) = lVar10;
            *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar14 = (long *)plVar14[1];
        } while (plVar14 != (long *)0x0);
      }
      goto LAB_0011ac7e;
    }
    compile_char1_matchingpath(param_1,0xd,puVar22,param_3,0);
    if (pplVar15 != param_3) goto LAB_0011ac7e;
  }
  lVar10 = sljit_emit_jump(piVar6,0x24);
  if (*piVar6 == 0) {
    lVar12 = *(long *)(piVar6 + 0x18);
    lVar7 = *(long *)(lVar12 + 8);
    uVar33 = lVar7 + 0x10;
    if (uVar33 < 0xff1) {
      *(ulong *)(lVar12 + 8) = uVar33;
      plVar14 = (long *)(lVar12 + 0x10 + lVar7);
    }
    else {
      puVar13 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar6 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
      if (puVar13 == (undefined8 *)0x0) {
        *piVar6 = 2;
        goto LAB_0011ac7e;
      }
      *puVar13 = *(undefined8 *)(piVar6 + 0x18);
      *(undefined8 **)(piVar6 + 0x18) = puVar13;
      plVar14 = puVar13 + 2;
      puVar13[1] = 0x10;
    }
    plVar2 = *param_3;
    *plVar14 = lVar10;
    plVar14[1] = (long)plVar2;
    *param_3 = plVar14;
  }
LAB_0011ac7e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void FUN_0011b06b(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  int iVar7;
  uint in_EAX;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  short *psVar16;
  uint uVar17;
  bool bVar18;
  ushort uVar19;
  uint uVar20;
  int unaff_EBP;
  short *psVar21;
  short *in_R8;
  ulong uVar22;
  ulong uVar23;
  int in_R10D;
  ushort *puVar24;
  ulong uVar25;
  ushort *in_R11;
  ushort *puVar26;
  int unaff_R12D;
  ulong uVar27;
  uint *puVar28;
  uint uVar29;
  ushort *puVar30;
  int *unaff_R15;
  long in_FS_OFFSET;
  bool bVar31;
  bool bVar32;
  long *in_stack_00000008;
  ushort *in_stack_00000010;
  long *in_stack_00000018;
  int in_stack_00000020;
  uint uStack0000000000000024;
  short in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000040;
  long in_stack_00000048;
  
  do {
    uVar25 = 0;
    uVar27 = 0x7fffffff;
    psVar21 = in_R8;
LAB_0011a6a3:
    sVar2 = *psVar21;
    if (sVar2 == 0) {
      uStack0000000000000024 = in_EAX;
      if (unaff_R12D == 0x3fffffff) {
        compile_char1_matchingpath(in_stack_00000030,0xd,psVar21,in_stack_00000008,0);
        if (in_stack_00000018 != in_stack_00000008) goto LAB_0011ac7e;
      }
      else {
        if (unaff_R12D != 0 || unaff_EBP != 0) {
          if (in_stack_00000028 == 0) {
            plVar15 = (long *)0x0;
            if ((in_EAX & 0x7c) != 0) {
              plVar15 = in_stack_00000008;
            }
            read_char_isra_0(in_stack_00000030,uVar27,plVar15);
            uVar6 = *in_R11 & 2;
            if ((*in_R11 & 4) == 0) goto LAB_0011a71b;
LAB_0011acf2:
            if (uVar6 == 0) goto joined_r0x0011ad07;
            sljit_emit_op1();
            iVar7 = optimize_class_ranges_isra_0
                              (*in_stack_00000030,in_stack_00000010,0,1,in_stack_00000018);
            if ((iVar7 == 0) &&
               (iVar7 = optimize_class_chars_isra_0
                                  (*in_stack_00000030,in_stack_00000010,0,1,in_stack_00000018),
               iVar7 == 0)) {
              lVar8 = sljit_emit_cmp();
              if (*unaff_R15 == 0) {
                unaff_R15[0x26] = 0;
                emit_cum_binary();
                if (*unaff_R15 == 0) {
                  unaff_R15[0x26] = 0;
                  emit_shift_with_flags();
                }
              }
              sljit_emit_op1();
              if (*unaff_R15 == 0) {
                unaff_R15[0x26] = 0;
                emit_shift_with_flags();
                if (*unaff_R15 == 0) {
                  unaff_R15[0x26] = 0;
                  puVar9 = (undefined1 *)emit_x86_instruction();
                  if (puVar9 != (undefined1 *)0x0) {
                    *puVar9 = 0x85;
                  }
                }
              }
              uVar12 = sljit_emit_jump();
              if (*unaff_R15 == 0) {
                lVar10 = *(long *)(unaff_R15 + 0x18);
                lVar4 = *(long *)(lVar10 + 8);
                uVar27 = lVar4 + 0x10;
                if (uVar27 < 0xff1) {
                  *(ulong *)(lVar10 + 8) = uVar27;
                  puVar11 = (undefined8 *)(lVar10 + 0x10 + lVar4);
                }
                else {
                  puVar13 = (undefined8 *)
                            (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                                      (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
                  if (puVar13 == (undefined8 *)0x0) {
                    *unaff_R15 = 2;
                    goto LAB_0011b757;
                  }
                  *puVar13 = *(undefined8 *)(unaff_R15 + 0x18);
                  *(undefined8 **)(unaff_R15 + 0x18) = puVar13;
                  puVar11 = puVar13 + 2;
                  puVar13[1] = 0x10;
                }
                lVar10 = *in_stack_00000018;
                *puVar11 = uVar12;
                puVar11[1] = lVar10;
                *in_stack_00000018 = (long)puVar11;
              }
LAB_0011b757:
              lVar10 = sljit_emit_label();
              if ((lVar8 != 0) && (lVar10 != 0)) {
                *(long *)(lVar8 + 0x18) = lVar10;
                *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            uStack0000000000000024 = uStack0000000000000024 | 2;
            sljit_emit_op1();
LAB_0011aa38:
            in_stack_00000010 = in_R11 + 0x11;
          }
          else {
            read_char_isra_0(in_stack_00000030,uVar27,in_stack_00000008);
            uVar6 = *in_R11 & 2;
            if ((*in_R11 & 4) != 0) goto LAB_0011acf2;
LAB_0011a71b:
            if (uVar6 != 0) {
              lVar8 = sljit_emit_cmp();
              uVar29 = (uint)(int)(char)*(byte *)((long)in_R11 + 0x21) >> 0x1f;
              iVar7 = optimize_class_ranges_isra_0(*in_stack_00000030,in_stack_00000010,uVar29);
              if ((iVar7 == 0) &&
                 (iVar7 = optimize_class_chars_isra_0
                                    (*in_stack_00000030,in_stack_00000010,uVar29,1,&stack0x00000040)
                 , iVar7 == 0)) {
                if (*unaff_R15 == 0) {
                  unaff_R15[0x26] = 0;
                  emit_cum_binary();
                  if (*unaff_R15 == 0) {
                    unaff_R15[0x26] = 0;
                    emit_shift_with_flags();
                  }
                }
                sljit_emit_op1();
                if (*unaff_R15 == 0) {
                  unaff_R15[0x26] = 0;
                  emit_shift_with_flags();
                  if (*unaff_R15 == 0) {
                    unaff_R15[0x26] = 0;
                    puVar9 = (undefined1 *)emit_x86_instruction();
                    if (puVar9 != (undefined1 *)0x0) {
                      *puVar9 = 0x85;
                    }
                  }
                }
                lVar10 = sljit_emit_jump();
                if (*unaff_R15 == 0) {
                  lVar4 = *(long *)(unaff_R15 + 0x18);
                  lVar5 = *(long *)(lVar4 + 8);
                  uVar27 = lVar5 + 0x10;
                  if (uVar27 < 0xff1) {
                    *(ulong *)(lVar4 + 8) = uVar27;
                    plVar15 = (long *)(lVar4 + 0x10 + lVar5);
                  }
                  else {
                    puVar11 = (undefined8 *)
                              (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                                        (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
                    if (puVar11 == (undefined8 *)0x0) {
                      *unaff_R15 = 2;
                      goto LAB_0011a978;
                    }
                    *puVar11 = *(undefined8 *)(unaff_R15 + 0x18);
                    *(undefined8 **)(unaff_R15 + 0x18) = puVar11;
                    plVar15 = puVar11 + 2;
                    puVar11[1] = 0x10;
                  }
                  *plVar15 = lVar10;
                  plVar15[1] = (long)in_stack_00000040;
                  in_stack_00000040 = plVar15;
                }
              }
LAB_0011a978:
              uVar12 = sljit_emit_jump();
              if (*unaff_R15 == 0) {
                lVar10 = *(long *)(unaff_R15 + 0x18);
                lVar4 = *(long *)(lVar10 + 8);
                uVar27 = lVar4 + 0x10;
                if (uVar27 < 0xff1) {
                  *(ulong *)(lVar10 + 8) = uVar27;
                  puVar11 = (undefined8 *)(lVar10 + 0x10 + lVar4);
                }
                else {
                  puVar13 = (undefined8 *)
                            (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                                      (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
                  if (puVar13 == (undefined8 *)0x0) {
                    *unaff_R15 = 2;
                    goto LAB_0011aa08;
                  }
                  *puVar13 = *(undefined8 *)(unaff_R15 + 0x18);
                  *(undefined8 **)(unaff_R15 + 0x18) = puVar13;
                  puVar11 = puVar13 + 2;
                  puVar13[1] = 0x10;
                }
                lVar10 = *in_stack_00000008;
                *puVar11 = uVar12;
                puVar11[1] = lVar10;
                *in_stack_00000008 = (long)puVar11;
              }
LAB_0011aa08:
              lVar10 = sljit_emit_label();
              if ((lVar8 != 0) && (lVar10 != 0)) {
                *(long *)(lVar8 + 0x18) = lVar10;
                *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
              }
              goto LAB_0011aa38;
            }
            sljit_emit_op2();
            uVar12 = sljit_emit_cmp();
            plVar15 = (long *)&stack0x00000040;
            if ((*in_R11 & 1) == 0) {
              plVar15 = in_stack_00000008;
            }
            if (*unaff_R15 == 0) {
              lVar8 = *(long *)(unaff_R15 + 0x18);
              lVar10 = *(long *)(lVar8 + 8);
              uVar27 = lVar10 + 0x10;
              if (uVar27 < 0xff1) {
                *(ulong *)(lVar8 + 8) = uVar27;
                puVar11 = (undefined8 *)(lVar8 + 0x10 + lVar10);
              }
              else {
                puVar13 = (undefined8 *)
                          (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                                    (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
                if (puVar13 == (undefined8 *)0x0) {
                  *unaff_R15 = 2;
                  goto joined_r0x0011ad07;
                }
                *puVar13 = *(undefined8 *)(unaff_R15 + 0x18);
                *(undefined8 **)(unaff_R15 + 0x18) = puVar13;
                puVar11 = puVar13 + 2;
                puVar13[1] = 0x10;
              }
              lVar8 = *plVar15;
              *puVar11 = uVar12;
              puVar11[1] = lVar8;
              *plVar15 = (long)puVar11;
            }
          }
joined_r0x0011ad07:
          uVar29 = 1;
          if ((uStack0000000000000024 & 0x7c) == 0) goto LAB_0011aa53;
          if ((uStack0000000000000024 & 3) == 1) {
            sljit_emit_op1();
          }
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_shift_with_flags();
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              emit_shift_with_flags();
            }
          }
          sljit_emit_op1();
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_cum_binary();
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              emit_shift_with_flags();
            }
          }
          sljit_emit_op2();
          sljit_emit_op1();
          sljit_emit_op1();
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_shift_with_flags();
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              emit_shift_with_flags();
            }
          }
          sljit_emit_op2();
          unaff_EBP = (unaff_EBP + 1) - (uint)(unaff_R12D == 0);
          if ((uStack0000000000000024 & 0x40) == 0) goto LAB_0011af33;
          sljit_emit_op1();
          puVar24 = in_stack_00000010;
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_shift_with_flags();
          }
          break;
        }
        compile_char1_matchingpath(in_stack_00000030,0xd,psVar21,in_stack_00000008,0);
        if (in_stack_00000018 == in_stack_00000008) goto LAB_0011ac7e;
      }
      uVar12 = sljit_emit_jump();
      if (*unaff_R15 != 0) goto LAB_0011ac7e;
      lVar8 = *(long *)(unaff_R15 + 0x18);
      lVar10 = *(long *)(lVar8 + 8);
      uVar27 = lVar10 + 0x10;
      if (uVar27 < 0xff1) {
        *(ulong *)(lVar8 + 8) = uVar27;
        puVar11 = (undefined8 *)(lVar8 + 0x10 + lVar10);
      }
      else {
        puVar13 = (undefined8 *)
                  (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                            (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
        if (puVar13 == (undefined8 *)0x0) {
          *unaff_R15 = 2;
          goto LAB_0011ac7e;
        }
        *puVar13 = *(undefined8 *)(unaff_R15 + 0x18);
        *(undefined8 **)(unaff_R15 + 0x18) = puVar13;
        puVar11 = puVar13 + 2;
        puVar13[1] = 0x10;
      }
      lVar8 = *in_stack_00000008;
      *puVar11 = uVar12;
      puVar11[1] = lVar8;
      *in_stack_00000008 = (long)puVar11;
      goto LAB_0011ac7e;
    }
    uVar6 = psVar21[1];
    uVar22 = (ulong)uVar6;
    unaff_EBP = unaff_EBP + 1;
    if (sVar2 == 1) {
      psVar16 = psVar21 + 2;
      if ((in_R10D != 0) && ((uVar6 & 0xfc00) == 0xd800)) {
        psVar16 = psVar21 + 3;
        uVar22 = (ulong)((uVar6 & 0x3ff) << 10 | (ushort)psVar21[2] & 0x3ff) + 0x10000;
      }
      if (uVar27 < uVar22) {
        uVar27 = uVar22;
      }
      if (uVar22 < uVar25) {
        uVar25 = uVar22;
      }
      in_EAX = in_EAX | 1;
      psVar21 = psVar16;
      goto LAB_0011a6a3;
    }
    in_R8 = psVar21 + 3;
    if (sVar2 == 2) {
      uVar19 = psVar21[2];
      uVar23 = (ulong)uVar19;
      if (in_R10D == 0) {
        if (uVar22 < uVar25) {
          uVar25 = uVar22;
        }
      }
      else {
        if ((uVar6 & 0xfc00) == 0xd800) {
          uVar22 = (ulong)((uVar6 & 0x3ff) << 10 | uVar19 & 0x3ff) + 0x10000;
          uVar19 = psVar21[3];
          uVar23 = (ulong)uVar19;
          if (uVar22 < uVar25) {
            uVar25 = uVar22;
          }
          psVar16 = in_R8;
          in_R8 = psVar21 + 4;
        }
        else {
          psVar16 = psVar21 + 2;
          if (uVar22 < uVar25) {
            uVar25 = uVar22;
          }
        }
        if ((uVar19 & 0xfc00) == 0xd800) {
          in_R8 = psVar16 + 2;
          uVar23 = (ulong)((uint)(uVar23 << 10) & 0xffc00 | (ushort)psVar16[1] & 0x3ff) + 0x10000;
        }
      }
      if (uVar27 < uVar23) {
        uVar27 = uVar23;
      }
      in_EAX = in_EAX | 1;
      psVar21 = in_R8;
      goto LAB_0011a6a3;
    }
    if (uVar6 == 10) {
      if (sVar2 == 3) {
        puVar28 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)(ushort)psVar21[2] * 4);
        uVar29 = *puVar28;
        while (uVar29 != 0xffffffff) {
          uVar22 = (ulong)uVar29;
          if (uVar27 < uVar22) {
            uVar27 = uVar22;
          }
          if (uVar22 < uVar25) {
            uVar25 = uVar22;
          }
          puVar1 = puVar28 + 1;
          puVar28 = puVar28 + 1;
          uVar29 = *puVar1;
        }
      }
      else {
        uVar25 = 0;
        uVar27 = 0x7fffffff;
      }
      in_EAX = in_EAX | 1;
      psVar21 = in_R8;
      goto LAB_0011a6a3;
    }
    if (uVar6 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x0011a678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(param_1 + uVar22 * 4) + param_1))();
      return;
    }
  } while( true );
LAB_0011d30f:
  puVar26 = puVar24;
  uVar6 = *puVar26;
  if (uVar6 != 0) {
    uVar19 = puVar26[1];
    if (uVar6 == 1) {
      puVar24 = puVar26 + 2;
      if ((in_stack_00000020 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
LAB_0011d308:
        puVar24 = puVar26 + 3;
      }
    }
    else {
      if (uVar6 != 2) {
        if (uVar19 == 0xc) {
          unaff_EBP = unaff_EBP + -1;
          uVar12 = sljit_emit_cmp();
          plVar15 = in_stack_00000018;
          if (unaff_EBP < 1) {
            plVar15 = in_stack_00000008;
          }
          if (*unaff_R15 == 0) {
            lVar8 = *(long *)(unaff_R15 + 0x18);
            lVar10 = *(long *)(lVar8 + 8);
            uVar27 = lVar10 + 0x10;
            if (uVar27 < 0xff1) {
              *(ulong *)(lVar8 + 8) = uVar27;
              puVar11 = (undefined8 *)(lVar8 + 0x10 + lVar10);
            }
            else {
              puVar13 = (undefined8 *)
                        (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                                  (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
              if (puVar13 == (undefined8 *)0x0) {
                *unaff_R15 = 2;
                goto LAB_0011d308;
              }
              *puVar13 = *(undefined8 *)(unaff_R15 + 0x18);
              *(undefined8 **)(unaff_R15 + 0x18) = puVar13;
              puVar11 = puVar13 + 2;
              puVar13[1] = 0x10;
            }
            lVar8 = *plVar15;
            *puVar11 = uVar12;
            puVar11[1] = lVar8;
            *plVar15 = (long)puVar11;
          }
        }
        goto LAB_0011d308;
      }
      puVar24 = puVar26 + 3;
      if (in_stack_00000020 != 0) {
        puVar24 = puVar26 + 2;
        if ((uVar19 & 0xfc00) == 0xd800) {
          puVar24 = puVar26 + 3;
        }
        if ((*puVar24 & 0xfc00) == 0xd800) {
          puVar24 = puVar24 + 2;
        }
        else {
          puVar24 = puVar24 + 1;
        }
      }
    }
    goto LAB_0011d30f;
  }
LAB_0011af33:
  if ((uStack0000000000000024 & 0x20) != 0) {
    sljit_emit_op1();
    puVar24 = in_stack_00000010;
    if (*unaff_R15 == 0) {
      unaff_R15[0x26] = 0;
      emit_cum_binary();
      if (*unaff_R15 == 0) {
        unaff_R15[0x26] = 0;
        emit_shift_with_flags();
      }
    }
    while (puVar26 = puVar24, uVar6 = *puVar26, uVar6 != 0) {
      uVar19 = puVar26[1];
      if (uVar6 == 1) {
        puVar24 = puVar26 + 2;
        if ((in_stack_00000020 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
LAB_0011d25a:
          puVar24 = puVar26 + 3;
        }
      }
      else {
        if (uVar6 != 2) {
          if (uVar19 == 0xd) {
            unaff_EBP = unaff_EBP + -1;
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0x100;
              emit_test_binary();
            }
            uVar12 = sljit_emit_jump();
            plVar15 = in_stack_00000018;
            if (unaff_EBP < 1) {
              plVar15 = in_stack_00000008;
            }
            if (*unaff_R15 == 0) {
              lVar8 = *(long *)(unaff_R15 + 0x18);
              lVar10 = *(long *)(lVar8 + 8);
              uVar27 = lVar10 + 0x10;
              if (uVar27 < 0xff1) {
                *(ulong *)(lVar8 + 8) = uVar27;
                puVar11 = (undefined8 *)(lVar8 + 0x10 + lVar10);
              }
              else {
                puVar13 = (undefined8 *)
                          (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                                    (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
                if (puVar13 == (undefined8 *)0x0) {
                  *unaff_R15 = 2;
                  goto LAB_0011d25a;
                }
                *puVar13 = *(undefined8 *)(unaff_R15 + 0x18);
                *(undefined8 **)(unaff_R15 + 0x18) = puVar13;
                puVar11 = puVar13 + 2;
                puVar13[1] = 0x10;
              }
              lVar8 = *plVar15;
              *puVar11 = uVar12;
              puVar11[1] = lVar8;
              *plVar15 = (long)puVar11;
            }
          }
          goto LAB_0011d25a;
        }
        puVar24 = puVar26 + 3;
        if (in_stack_00000020 != 0) {
          puVar24 = puVar26 + 2;
          if ((uVar19 & 0xfc00) == 0xd800) {
            puVar24 = puVar26 + 3;
          }
          if ((*puVar24 & 0xfc00) == 0xd800) {
            puVar24 = puVar24 + 2;
          }
          else {
            puVar24 = puVar24 + 1;
          }
        }
      }
    }
  }
  if ((uStack0000000000000024 & 8) != 0) {
    sljit_emit_op1();
    puVar24 = in_stack_00000010;
    while (puVar26 = puVar24, uVar6 = *puVar26, uVar6 != 0) {
      uVar19 = puVar26[1];
      if (uVar6 == 1) {
        puVar24 = puVar26 + 2;
        if ((in_stack_00000020 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
LAB_0011d0fa:
          puVar24 = puVar26 + 3;
        }
      }
      else {
        if (uVar6 != 2) {
          if ((uVar19 == 4) || ((uVar19 == 5 && (uVar6 != 4)))) {
            unaff_EBP = unaff_EBP + -1;
            uVar12 = sljit_emit_cmp();
            plVar15 = in_stack_00000018;
            if (unaff_EBP < 1) {
              plVar15 = in_stack_00000008;
            }
            if (*unaff_R15 == 0) {
              lVar8 = *(long *)(unaff_R15 + 0x18);
              lVar10 = *(long *)(lVar8 + 8);
              uVar27 = lVar10 + 0x10;
              if (uVar27 < 0xff1) {
                *(ulong *)(lVar8 + 8) = uVar27;
                puVar11 = (undefined8 *)(lVar8 + 0x10 + lVar10);
              }
              else {
                puVar13 = (undefined8 *)
                          (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                                    (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
                if (puVar13 == (undefined8 *)0x0) {
                  *unaff_R15 = 2;
                  goto LAB_0011d0fa;
                }
                *puVar13 = *(undefined8 *)(unaff_R15 + 0x18);
                *(undefined8 **)(unaff_R15 + 0x18) = puVar13;
                puVar11 = puVar13 + 2;
                puVar13[1] = 0x10;
              }
              lVar8 = *plVar15;
              *puVar11 = uVar12;
              puVar11[1] = lVar8;
              *plVar15 = (long)puVar11;
            }
          }
          goto LAB_0011d0fa;
        }
        puVar24 = puVar26 + 3;
        if (in_stack_00000020 != 0) {
          puVar30 = puVar26 + 2;
          if ((uVar19 & 0xfc00) == 0xd800) {
            puVar30 = puVar26 + 3;
          }
          puVar24 = puVar30 + 2;
          if ((*puVar30 & 0xfc00) != 0xd800) {
            puVar24 = puVar30 + 1;
          }
        }
      }
    }
  }
  if ((uStack0000000000000024 & 0x10) != 0) {
    sljit_emit_op1();
    if (*unaff_R15 == 0) {
      unaff_R15[0x26] = 0;
      emit_cum_binary();
      if (*unaff_R15 == 0) {
        unaff_R15[0x26] = 0;
        emit_shift_with_flags();
      }
    }
    puVar24 = in_stack_00000010;
    if ((uStack0000000000000024 & 0x80) != 0) {
      if ((uStack0000000000000024 & 4) != 0) {
        if ((uStack0000000000000024 & 1) == 0) {
          sljit_emit_op1();
          uStack0000000000000024 = uStack0000000000000024 | 0x100;
        }
        else {
          uVar29 = uStack0000000000000024 | 0x200;
          sljit_emit_op1();
          uStack0000000000000024 = uVar29;
        }
      }
      sljit_emit_op1();
    }
    while (puVar26 = puVar24, uVar6 = *puVar26, uVar6 != 0) {
      uVar19 = puVar26[1];
      if (uVar6 == 1) {
        puVar24 = puVar26 + 2;
        if ((in_stack_00000020 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
LAB_0011cd26:
          puVar24 = puVar26 + 3;
        }
      }
      else {
        if (uVar6 != 2) {
          if (uVar19 == 5) {
            unaff_EBP = unaff_EBP + -1;
            lVar8 = 0;
            if ((uVar6 == 4) &&
               (lVar8 = sljit_emit_cmp(), unaff_EBP == 0 && in_stack_00000018 != in_stack_00000008))
            {
              if (*unaff_R15 == 0) {
                lVar10 = *(long *)(unaff_R15 + 0x18);
                lVar4 = *(long *)(lVar10 + 8);
                uVar27 = lVar4 + 0x10;
                if (uVar27 < 0xff1) {
                  *(ulong *)(lVar10 + 8) = uVar27;
                  plVar15 = (long *)(lVar10 + 0x10 + lVar4);
                }
                else {
                  puVar11 = (undefined8 *)
                            (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                                      (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
                  if (puVar11 == (undefined8 *)0x0) {
                    *unaff_R15 = 2;
                    lVar8 = 0;
                    goto LAB_0011cda5;
                  }
                  *puVar11 = *(undefined8 *)(unaff_R15 + 0x18);
                  *(undefined8 **)(unaff_R15 + 0x18) = puVar11;
                  plVar15 = puVar11 + 2;
                  puVar11[1] = 0x10;
                }
                lVar10 = *in_stack_00000008;
                *plVar15 = lVar8;
                plVar15[1] = lVar10;
                *in_stack_00000008 = (long)plVar15;
              }
              lVar8 = 0;
            }
LAB_0011cda5:
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0x100;
              emit_test_binary();
            }
            uVar12 = sljit_emit_jump();
            plVar15 = in_stack_00000018;
            if (unaff_EBP < 1) {
              plVar15 = in_stack_00000008;
            }
            if (*unaff_R15 == 0) {
              lVar10 = *(long *)(unaff_R15 + 0x18);
              lVar4 = *(long *)(lVar10 + 8);
              uVar27 = lVar4 + 0x10;
              if (uVar27 < 0xff1) {
                *(ulong *)(lVar10 + 8) = uVar27;
                puVar11 = (undefined8 *)(lVar10 + 0x10 + lVar4);
              }
              else {
                puVar13 = (undefined8 *)(*(code *)**(undefined8 **)(unaff_R15 + 0x12))(0x1000);
                if (puVar13 == (undefined8 *)0x0) {
                  *unaff_R15 = 2;
                  goto LAB_0011ce7e;
                }
                *puVar13 = *(undefined8 *)(unaff_R15 + 0x18);
                *(undefined8 **)(unaff_R15 + 0x18) = puVar13;
                puVar11 = puVar13 + 2;
                puVar13[1] = 0x10;
              }
              lVar10 = *plVar15;
              *puVar11 = uVar12;
              puVar11[1] = lVar10;
              *plVar15 = (long)puVar11;
            }
LAB_0011ce7e:
            if ((lVar8 != 0) && (lVar10 = sljit_emit_label(), lVar10 != 0)) {
              *(long *)(lVar8 + 0x18) = lVar10;
              *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          goto LAB_0011cd26;
        }
        puVar24 = puVar26 + 3;
        if (in_stack_00000020 != 0) {
          puVar24 = puVar26 + 2;
          if ((uVar19 & 0xfc00) == 0xd800) {
            puVar24 = puVar26 + 3;
          }
          if ((*puVar24 & 0xfc00) == 0xd800) {
            puVar24 = puVar24 + 2;
          }
          else {
            puVar24 = puVar24 + 1;
          }
        }
      }
    }
    if (((uStack0000000000000024 & 0x200) != 0) || ((uStack0000000000000024 & 0x100) != 0)) {
      sljit_emit_op1();
    }
  }
  uVar29 = uStack0000000000000024 & 4;
  if ((uStack0000000000000024 & 1) == 0) {
    if (uVar29 != 0) {
      uStack0000000000000024 = 1;
LAB_0011ca66:
      sljit_emit_op1(unaff_R15,0x21,4,0,0x84,&DAT_0013a019);
      if (*unaff_R15 == 0) {
        unaff_R15[0x26] = 0;
        emit_shift_with_flags(unaff_R15,0x20,0,uStack0000000000000024,0,0x7f,1,4,0,0);
        uVar29 = uStack0000000000000024;
        if (unaff_R12D == 0) goto LAB_0011aa53;
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary(unaff_R15,uStack0000000000000024,0,0x7f,unaff_R12D);
        }
        bVar31 = unaff_EBP == 1 && in_stack_00000018 != in_stack_00000008;
      }
      else {
        uVar29 = uStack0000000000000024;
        if (unaff_R12D == 0) goto LAB_0011aa53;
        bVar31 = in_stack_00000018 != in_stack_00000008 && unaff_EBP == 1;
      }
      unaff_EBP = unaff_EBP + -1;
      uVar12 = sljit_emit_jump(unaff_R15,bVar31 ^ 1);
      plVar15 = in_stack_00000018;
      if (unaff_EBP < 1) {
        plVar15 = in_stack_00000008;
      }
      uVar29 = uStack0000000000000024;
      if (*unaff_R15 == 0) {
        lVar8 = *(long *)(unaff_R15 + 0x18);
        lVar10 = *(long *)(lVar8 + 8);
        uVar27 = lVar10 + 0x10;
        if (uVar27 < 0xff1) {
          *(ulong *)(lVar8 + 8) = uVar27;
          puVar11 = (undefined8 *)(lVar8 + 0x10 + lVar10);
        }
        else {
          puVar13 = (undefined8 *)
                    (*(code *)**(undefined8 **)(unaff_R15 + 0x12))
                              (0x1000,(*(undefined8 **)(unaff_R15 + 0x12))[2]);
          if (puVar13 == (undefined8 *)0x0) {
            *unaff_R15 = 2;
            uVar29 = uStack0000000000000024;
            goto LAB_0011aa53;
          }
          *puVar13 = *(undefined8 *)(unaff_R15 + 0x18);
          *(undefined8 **)(unaff_R15 + 0x18) = puVar13;
          puVar11 = puVar13 + 2;
          puVar13[1] = 0x10;
        }
        lVar8 = *plVar15;
        *puVar11 = uVar12;
        puVar11[1] = lVar8;
        *plVar15 = (long)puVar11;
        uVar29 = uStack0000000000000024;
      }
      goto LAB_0011aa53;
    }
  }
  else {
    sljit_emit_op1(unaff_R15,0x20,1,0,5,0);
    if (uVar29 != 0) {
      uStack0000000000000024 = 5;
      goto LAB_0011ca66;
    }
  }
  uVar29 = 1;
LAB_0011aa53:
  uVar6 = *in_stack_00000010;
  if (uVar6 != 0) {
    uStack0000000000000024 = 0;
    bVar31 = in_stack_00000018 != in_stack_00000008;
    uVar27 = 0;
    do {
      uVar19 = in_stack_00000010[1];
      uVar25 = (ulong)uVar19;
      iVar7 = unaff_EBP + -1;
      bVar32 = iVar7 == 0;
      bVar18 = bVar32 && bVar31;
      if (uVar6 == 1) {
        puVar24 = in_stack_00000010 + 2;
        if ((in_stack_00000020 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          puVar24 = in_stack_00000010 + 3;
          uVar25 = (ulong)((uVar19 & 0x3ff) << 10 | in_stack_00000010[2] & 0x3ff) + 0x10000;
        }
        if ((int)uStack0000000000000024 < 3) {
          if ((ushort)(*puVar24 - 1) < 2) {
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              emit_cmp_binary(unaff_R15,1,0,0x7f);
            }
            uVar20 = uStack0000000000000024 + 1;
            sljit_emit_op_flags_constprop_0_isra_0
                      (unaff_R15,(-(uint)(uStack0000000000000024 == 0) & 0xffffffda) + 0x46,4,0);
            uStack0000000000000024 = uVar20;
            unaff_EBP = iVar7;
            goto code_r0x0011b233;
          }
          if ((int)uStack0000000000000024 < 1) {
            lVar8 = sljit_emit_cmp(unaff_R15,bVar18,1,0,0x7f,uVar25 - uVar27);
            uStack0000000000000024 = 0;
            goto LAB_0011b171;
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x246,4,0);
        lVar8 = sljit_emit_jump(unaff_R15,!bVar32 || !bVar31);
        uStack0000000000000024 = 0;
        goto LAB_0011b171;
      }
      if (uVar6 == 2) {
        puVar26 = in_stack_00000010 + 2;
        if (in_stack_00000020 == 0) {
          if (uVar25 != uVar27) goto LAB_0011b3cf;
          uVar22 = (ulong)in_stack_00000010[2];
          puVar24 = in_stack_00000010 + 3;
        }
        else {
          if ((uVar19 & 0xfc00) == 0xd800) {
            puVar26 = in_stack_00000010 + 3;
            uVar25 = (ulong)((uVar19 & 0x3ff) << 10 | in_stack_00000010[2] & 0x3ff) + 0x10000;
            if (uVar25 != uVar27) goto LAB_0011b3cf;
            uVar6 = in_stack_00000010[3];
            uVar22 = (ulong)uVar6;
            puVar24 = in_stack_00000010 + 4;
          }
          else if (uVar25 == uVar27) {
            uVar6 = in_stack_00000010[2];
            uVar22 = (ulong)uVar6;
            puVar24 = in_stack_00000010 + 3;
          }
          else {
LAB_0011b3cf:
            if (uVar25 < uVar27) {
              sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,uVar27 - uVar25);
            }
            else {
              sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,uVar25 - uVar27);
            }
            uVar6 = *puVar26;
            uVar22 = (ulong)uVar6;
            puVar24 = puVar26 + 1;
            uVar27 = uVar25;
            if (in_stack_00000020 == 0) goto LAB_0011b460;
          }
          if ((uVar6 & 0xfc00) == 0xd800) {
            puVar24 = puVar26 + 2;
            uVar22 = (ulong)((uint)(uVar22 << 10) & 0xffc00 | puVar26[1] & 0x3ff) + 0x10000;
          }
        }
LAB_0011b460:
        if ((int)uStack0000000000000024 < 3) {
          if ((ushort)(*puVar24 - 1) < 2) {
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              emit_cmp_binary(unaff_R15,1,0,0x7f);
            }
            uVar20 = uStack0000000000000024 + 1;
            sljit_emit_op_flags_constprop_0_isra_0
                      (unaff_R15,(-(uint)(uStack0000000000000024 == 0) & 0xffffffda) + 0x46,4,5);
            uStack0000000000000024 = uVar20;
            unaff_EBP = iVar7;
            goto code_r0x0011b233;
          }
          if ((int)uStack0000000000000024 < 1) {
            lVar8 = sljit_emit_cmp(unaff_R15,bVar18 ^ 5,1,0,0x7f,uVar22 - uVar27);
            uStack0000000000000024 = 0;
            goto LAB_0011b171;
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x246,4,5);
        lVar8 = sljit_emit_jump(unaff_R15,!bVar32 || !bVar31);
        uStack0000000000000024 = 0;
        goto LAB_0011b171;
      }
      if (uVar6 == 4) {
        bVar18 = !bVar32 || !bVar31;
      }
      puVar24 = in_stack_00000010 + 3;
      switch(uVar25) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 9:
      case 0xc:
      case 0xd:
        goto code_r0x0011b233;
      case 7:
      case 8:
        if (uVar27 != 9) {
          if (uVar27 < 10) {
            sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,9 - uVar27);
          }
          else {
            sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,uVar27 - 9);
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar8 = emit_x86_instruction(unaff_R15,0x11,0x7f,4,1);
          if (lVar8 != 0) {
            *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,5);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar8 = emit_x86_instruction(unaff_R15,0x11,0x7f,0x7c,1);
          if (lVar8 != 0) {
            *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,0);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f,0x1805);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,0);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary(unaff_R15,uVar29,0,0x7f,0x38000000);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x246,4,1);
        uVar27 = 9;
        lVar8 = sljit_emit_jump(unaff_R15,bVar18 ^ 1);
        break;
      case 10:
        lVar8 = (ulong)in_stack_00000010[2] * 4;
        puVar28 = (uint *)(&_pcre2_ucd_caseless_sets_16 + lVar8);
        uVar20 = *puVar28;
        uVar17 = *(uint *)(&DAT_0013a09c + lVar8) ^ uVar20;
        if ((uVar17 - 1 & uVar17) == 0) {
          if (uVar27 == 0) {
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              uVar12 = 1;
LAB_0011c0e6:
              emit_cum_binary(unaff_R15,0xd0b0908,4,0,uVar12,0,0x7f,uVar17);
              uVar3 = *(undefined4 *)(&DAT_0013a09c + lVar8);
              if (*unaff_R15 == 0) {
                unaff_R15[0x26] = 0;
                emit_cmp_binary(unaff_R15,4,0,0x7f,uVar3);
              }
            }
          }
          else {
            sljit_emit_op2(unaff_R15,0x40,4,0,1,0,0x7f,uVar27);
            uVar17 = *(uint *)(&DAT_0013a09c + lVar8) ^ *puVar28;
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              uVar12 = 4;
              goto LAB_0011c0e6;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,0);
          puVar28 = (uint *)(&_pcre2_ucp_typerange_16 + lVar8);
        }
        else {
          uVar17 = *(uint *)(&DAT_0013a09c + lVar8) ^ *(uint *)(&_pcre2_ucp_typerange_16 + lVar8);
          if ((uVar17 - 1 & uVar17) != 0) {
            puVar28 = (uint *)(&DAT_0013a09c + lVar8);
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              emit_cmp_binary(unaff_R15,1,0,0x7f,uVar20 - uVar27);
            }
            uVar12 = 0x20;
            goto LAB_0011c191;
          }
          if (uVar27 == 0) {
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              uVar12 = 1;
LAB_0011c6ea:
              emit_cum_binary(unaff_R15,0xd0b0908,4,0,uVar12,0,0x7f,uVar17);
              uVar3 = *(undefined4 *)(&_pcre2_ucp_typerange_16 + lVar8);
              if (*unaff_R15 == 0) {
                unaff_R15[0x26] = 0;
                emit_cmp_binary(unaff_R15,4,0,0x7f,uVar3);
              }
            }
          }
          else {
            sljit_emit_op2(unaff_R15,0x40,4,0,1,0,0x7f,uVar27);
            uVar17 = *(uint *)(&DAT_0013a09c + lVar8) ^ *puVar28;
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              uVar12 = 4;
              goto LAB_0011c6ea;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,0);
          if (*unaff_R15 == 0) {
            uVar20 = *puVar28;
            unaff_R15[0x26] = 0;
            emit_cmp_binary(unaff_R15,1,0,0x7f,uVar20 - uVar27);
          }
          uVar12 = 0x46;
          if (*(int *)(&DAT_0013a0a4 + lVar8) == -1) {
            uVar12 = 0x246;
          }
          puVar28 = (uint *)(&DAT_0013a0a4 + lVar8);
          sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,uVar12,4,0);
        }
        while (uVar20 = *puVar28, uVar20 != 0xffffffff) {
          puVar28 = puVar28 + 1;
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_cmp_binary(unaff_R15,1,0,0x7f,uVar20 - uVar27);
          }
          uVar12 = 0x246;
          if (*puVar28 != 0xffffffff) {
            uVar12 = 0x46;
          }
LAB_0011c191:
          sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,uVar12,4,0);
        }
        lVar8 = sljit_emit_jump(unaff_R15,bVar18 ^ 1);
        break;
      case 0xb:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f,0x24 - uVar27);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,0);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f,0x40 - uVar27);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,0);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f,0x60 - uVar27);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,0);
        if (uVar27 != 0xa0) {
          if (uVar27 < 0xa1) {
            sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,0xa0 - uVar27);
          }
          else {
            sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,uVar27 - 0xa0);
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f,0xd75f);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,5);
        sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,0xa0);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f,0xe000);
        }
        uVar12 = 3;
        goto LAB_0011bbc8;
      case 0xe:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary(unaff_R15,uVar29,0,0x7f,0x3800001f);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,1);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary(unaff_R15,uVar29,0,0x7f,2);
        }
        lVar8 = sljit_emit_jump(unaff_R15,0);
        if (uVar27 != 0x2066) {
          if (uVar27 < 0x2067) {
            sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,0x2066 - uVar27);
          }
          else {
            sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,uVar27 - 0x2066);
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar10 = emit_x86_instruction(unaff_R15,0x11,0x7f,3,1);
          if (lVar10 != 0) {
            *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,5);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f,0xffffffffffffe5b6);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,0);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f,0xfffffffffffff7a8);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,0);
        if (uVar27 != 0x2066) {
          if (uVar27 < 0x2066) {
            sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,0x2066 - uVar27);
          }
          else {
            sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f);
          }
        }
        lVar10 = sljit_emit_label(unaff_R15);
        if ((lVar10 != 0) && (lVar8 != 0)) {
          *(long *)(lVar8 + 0x18) = lVar10;
          *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
        }
        goto LAB_0011bde5;
      case 0xf:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary(unaff_R15,uVar29,0,0x7f,0x1800001f);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,1);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary(unaff_R15,uVar29,0,0x7f,2);
        }
        lVar8 = sljit_emit_jump(unaff_R15,0);
        if (uVar27 != 0x2066) {
          if (uVar27 < 0x2067) {
            sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,0x2066 - uVar27);
          }
          else {
            sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,uVar27 - 0x2066);
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar10 = emit_x86_instruction(unaff_R15,0x11,0x7f,3,1);
          if (lVar10 != 0) {
            *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,5);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary(unaff_R15,1,0,0x7f,0xffffffffffffe5b6);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,0);
        if (uVar27 != 0x2066) {
          if (uVar27 < 0x2066) {
            sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f);
          }
          else {
            sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,uVar27 - 0x2066);
          }
        }
        lVar10 = sljit_emit_label(unaff_R15);
        if ((lVar10 != 0) && (lVar8 != 0)) {
          *(long *)(lVar8 + 0x18) = lVar10;
          *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
        }
LAB_0011bde5:
        lVar8 = sljit_emit_cmp(unaff_R15,bVar18,4,0,0x7f);
        break;
      case 0x10:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary(unaff_R15,uVar29,0,0x7f,0x7800000);
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,1);
        if (uVar27 != 0) {
          sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,uVar27);
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar8 = emit_x86_instruction(unaff_R15,0x11,0x7f,0x7f,1);
          if (lVar8 != 0) {
            *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x45,4,5);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary(unaff_R15,uVar29,0,0x7f,0x7f0000);
        }
        uVar12 = 1;
LAB_0011bbc8:
        uVar27 = 0;
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x246,4,uVar12);
        lVar8 = sljit_emit_jump(unaff_R15,bVar18 ^ 1);
        break;
      case 0x11:
        if (uVar27 != 0x41) {
          if (uVar27 < 0x42) {
            sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,0x41 - uVar27);
          }
          else {
            sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,uVar27 - 0x41);
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cum_binary(unaff_R15,0x25232120,4,0,1,0,0x7f,0xffffffffffffffdf);
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            lVar8 = emit_x86_instruction(unaff_R15,0x11,0x7f,5,4,0);
            if (lVar8 != 0) {
              *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
            }
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x20,4,5);
        sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,0x11);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar8 = emit_x86_instruction(unaff_R15,0x11,0x7f,9,1,0);
          if (lVar8 != 0) {
            *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,5);
        sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,0xfee0);
        lVar8 = sljit_emit_cmp(unaff_R15,4,1,0,0x7f,0x36);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar10 = emit_x86_instruction(unaff_R15,0x11,0x7f,9,1,0);
          if (lVar10 != 0) {
            *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,5);
        sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,0x11);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar10 = emit_x86_instruction(unaff_R15,0x11,0x7f,5,1,0);
          if (lVar10 != 0) {
            *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,5);
        sljit_emit_op2(unaff_R15,0x42,1,0,1,0,0x7f,0x20);
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar10 = emit_x86_instruction(unaff_R15,0x11,0x7f,5,1);
          if (lVar10 != 0) {
            *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R15,0x46,4,5);
        sljit_emit_op2(unaff_R15,0x40,1,0,1,0,0x7f,0x31);
        lVar10 = sljit_emit_label(unaff_R15);
        if ((lVar8 != 0) && (lVar10 != 0)) {
          *(long *)(lVar8 + 0x18) = lVar10;
          *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar8 = emit_x86_instruction(unaff_R15,0x11,0x7f,0,4);
          if (lVar8 != 0) {
            *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
          }
        }
        uVar27 = 0xff10;
        lVar8 = sljit_emit_jump(unaff_R15,bVar18 ^ 1);
        break;
      default:
        FUN_0011b233();
        return;
      }
LAB_0011b171:
      if (lVar8 == 0) goto LAB_0011b1e0;
      plVar15 = in_stack_00000018;
      if (iVar7 < 1) {
        plVar15 = in_stack_00000008;
      }
      if (*unaff_R15 != 0) goto LAB_0011b1e0;
      lVar10 = *(long *)(unaff_R15 + 0x18);
      lVar4 = *(long *)(lVar10 + 8);
      uVar25 = lVar4 + 0x10;
      if (uVar25 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar25;
        plVar14 = (long *)(lVar10 + 0x10 + lVar4);
LAB_0011b1d2:
        lVar10 = *plVar15;
        *plVar14 = lVar8;
        plVar14[1] = lVar10;
        *plVar15 = (long)plVar14;
LAB_0011b1e0:
        FUN_0011b233();
        return;
      }
      puVar11 = (undefined8 *)(*(code *)**(undefined8 **)(unaff_R15 + 0x12))(0x1000);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = *(undefined8 *)(unaff_R15 + 0x18);
        *(undefined8 **)(unaff_R15 + 0x18) = puVar11;
        plVar14 = puVar11 + 2;
        puVar11[1] = 0x10;
        goto LAB_0011b1d2;
      }
      *unaff_R15 = 2;
      unaff_EBP = iVar7;
code_r0x0011b233:
      uVar6 = *puVar24;
      in_stack_00000010 = puVar24;
    } while (uVar6 != 0);
  }
  plVar15 = in_stack_00000040;
  if (in_stack_00000040 != (long *)0x0) {
    lVar8 = sljit_emit_label(unaff_R15);
    do {
      lVar10 = *plVar15;
      if ((lVar10 != 0) && (lVar8 != 0)) {
        *(long *)(lVar10 + 0x18) = lVar8;
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
      }
      plVar15 = (long *)plVar15[1];
    } while (plVar15 != (long *)0x0);
  }
LAB_0011ac7e:
  if (in_stack_00000048 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void switchD_0011aadd::caseD_0(void)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int in_ECX;
  uint uVar8;
  long *plVar9;
  ushort *unaff_RBX;
  int iVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong unaff_R12;
  ushort *puVar13;
  int *piVar14;
  int *unaff_R15;
  long in_FS_OFFSET;
  long *in_stack_00000008;
  long *in_stack_00000018;
  int iStack0000000000000020;
  int iStack0000000000000024;
  long *in_stack_00000040;
  long in_stack_00000048;
  
code_r0x0011b230:
  puVar13 = unaff_RBX;
code_r0x0011b233:
  do {
    uVar3 = *puVar13;
    if (uVar3 == 0) {
      if (in_stack_00000040 != (long *)0x0) {
        lVar6 = sljit_emit_label();
        do {
          lVar7 = *in_stack_00000040;
          if ((lVar7 != 0) && (lVar6 != 0)) {
            *(long *)(lVar7 + 0x18) = lVar6;
            *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
          }
          in_stack_00000040 = (long *)in_stack_00000040[1];
        } while (in_stack_00000040 != (long *)0x0);
      }
      if (in_stack_00000048 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar1 = puVar13[1];
    uVar11 = (ulong)uVar1;
    iVar10 = in_ECX + -1;
    if (uVar3 == 1) {
      unaff_RBX = puVar13 + 2;
      if ((iStack0000000000000020 != 0) && ((uVar1 & 0xfc00) == 0xd800)) {
        unaff_RBX = puVar13 + 3;
      }
      if (iStack0000000000000024 < 3) {
        if ((ushort)(*unaff_RBX - 1) < 2) {
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_cmp_binary();
          }
          iStack0000000000000024 = iStack0000000000000024 + 1;
          sljit_emit_op_flags_constprop_0_isra_0();
          puVar13 = unaff_RBX;
          in_ECX = iVar10;
          goto code_r0x0011b233;
        }
        if (iStack0000000000000024 < 1) {
          lVar6 = sljit_emit_cmp();
          iStack0000000000000024 = 0;
          goto LAB_0011b171;
        }
      }
      if (*unaff_R15 == 0) {
        unaff_R15[0x26] = 0;
        emit_cmp_binary();
      }
      sljit_emit_op_flags_constprop_0_isra_0();
      lVar6 = sljit_emit_jump();
      iStack0000000000000024 = 0;
      goto LAB_0011b171;
    }
    if (uVar3 != 2) {
      unaff_RBX = puVar13 + 3;
      switch(uVar11) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 9:
      case 0xc:
      case 0xd:
        goto code_r0x0011b230;
      case 7:
      case 8:
        if (unaff_R12 != 9) {
          if (unaff_R12 < 10) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        unaff_R12 = 9;
        lVar6 = sljit_emit_jump();
        break;
      case 10:
        lVar6 = (ulong)puVar13[2] * 4;
        uVar8 = *(uint *)(&DAT_0013a09c + lVar6) ^ *(uint *)(&_pcre2_ucd_caseless_sets_16 + lVar6);
        if ((uVar8 - 1 & uVar8) == 0) {
          if (unaff_R12 == 0) {
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
LAB_0011c0e6:
              emit_cum_binary();
              if (*unaff_R15 == 0) {
                unaff_R15[0x26] = 0;
                emit_cmp_binary();
              }
            }
          }
          else {
            sljit_emit_op2();
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              goto LAB_0011c0e6;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0();
          piVar14 = (int *)(&_pcre2_ucp_typerange_16 + lVar6);
        }
        else {
          uVar8 = *(uint *)(&DAT_0013a09c + lVar6) ^ *(uint *)(&_pcre2_ucp_typerange_16 + lVar6);
          if ((uVar8 - 1 & uVar8) != 0) {
            piVar14 = (int *)(&DAT_0013a09c + lVar6);
            if (*unaff_R15 != 0) goto LAB_0011c191;
            unaff_R15[0x26] = 0;
            emit_cmp_binary();
            goto LAB_0011c191;
          }
          if (unaff_R12 == 0) {
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
LAB_0011c6ea:
              emit_cum_binary();
              if (*unaff_R15 == 0) {
                unaff_R15[0x26] = 0;
                emit_cmp_binary();
              }
            }
          }
          else {
            sljit_emit_op2();
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              goto LAB_0011c6ea;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0();
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_cmp_binary();
          }
          piVar14 = (int *)(&DAT_0013a0a4 + lVar6);
          sljit_emit_op_flags_constprop_0_isra_0();
        }
        while (*piVar14 != -1) {
          piVar14 = piVar14 + 1;
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_cmp_binary();
          }
LAB_0011c191:
          sljit_emit_op_flags_constprop_0_isra_0();
        }
        lVar6 = sljit_emit_jump();
        break;
      case 0xb:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (unaff_R12 != 0xa0) {
          if (unaff_R12 < 0xa1) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        goto LAB_0011bbc8;
      case 0xe:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        lVar6 = sljit_emit_jump();
        if (unaff_R12 != 0x2066) {
          if (unaff_R12 < 0x2067) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (unaff_R12 != 0x2066) {
          if (unaff_R12 < 0x2066) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        lVar7 = sljit_emit_label();
        if ((lVar7 != 0) && (lVar6 != 0)) {
          *(long *)(lVar6 + 0x18) = lVar7;
          *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
        }
        goto LAB_0011bde5;
      case 0xf:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        lVar6 = sljit_emit_jump();
        if (unaff_R12 != 0x2066) {
          if (unaff_R12 < 0x2067) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (unaff_R12 != 0x2066) {
          if (unaff_R12 < 0x2066) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        lVar7 = sljit_emit_label();
        if ((lVar7 != 0) && (lVar6 != 0)) {
          *(long *)(lVar6 + 0x18) = lVar7;
          *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
        }
LAB_0011bde5:
        lVar6 = sljit_emit_cmp();
        break;
      case 0x10:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (unaff_R12 != 0) {
          sljit_emit_op2();
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
LAB_0011bbc8:
        unaff_R12 = 0;
        sljit_emit_op_flags_constprop_0_isra_0();
        lVar6 = sljit_emit_jump();
        break;
      case 0x11:
        if (unaff_R12 != 0x41) {
          if (unaff_R12 < 0x42) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cum_binary();
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            lVar6 = emit_x86_instruction();
            if (lVar6 != 0) {
              *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
            }
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        lVar6 = sljit_emit_cmp();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        lVar7 = sljit_emit_label();
        if ((lVar6 != 0) && (lVar7 != 0)) {
          *(long *)(lVar6 + 0x18) = lVar7;
          *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        unaff_R12 = 0xff10;
        lVar6 = sljit_emit_jump();
        break;
      default:
        FUN_0011b233();
        return;
      }
LAB_0011b171:
      if (lVar6 != 0) {
        plVar9 = in_stack_00000018;
        if (iVar10 < 1) {
          plVar9 = in_stack_00000008;
        }
        if (*unaff_R15 == 0) {
          lVar7 = *(long *)(unaff_R15 + 0x18);
          lVar2 = *(long *)(lVar7 + 8);
          uVar11 = lVar2 + 0x10;
          if (uVar11 < 0xff1) {
            *(ulong *)(lVar7 + 8) = uVar11;
            plVar5 = (long *)(lVar7 + 0x10 + lVar2);
          }
          else {
            puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(unaff_R15 + 0x12))(0x1000);
            if (puVar4 == (undefined8 *)0x0) {
              *unaff_R15 = 2;
              puVar13 = unaff_RBX;
              in_ECX = iVar10;
              goto code_r0x0011b233;
            }
            *puVar4 = *(undefined8 *)(unaff_R15 + 0x18);
            *(undefined8 **)(unaff_R15 + 0x18) = puVar4;
            plVar5 = puVar4 + 2;
            puVar4[1] = 0x10;
          }
          lVar7 = *plVar9;
          *plVar5 = lVar6;
          plVar5[1] = lVar7;
          *plVar9 = (long)plVar5;
        }
      }
      FUN_0011b233();
      return;
    }
    puVar12 = puVar13 + 2;
    if (iStack0000000000000020 == 0) {
      if (uVar11 != unaff_R12) goto LAB_0011b3cf;
      unaff_RBX = puVar13 + 3;
    }
    else {
      if ((uVar1 & 0xfc00) == 0xd800) {
        puVar12 = puVar13 + 3;
        uVar11 = (ulong)((uVar1 & 0x3ff) << 10 | puVar13[2] & 0x3ff) + 0x10000;
        if (uVar11 != unaff_R12) goto LAB_0011b3cf;
        uVar3 = puVar13[3];
        unaff_RBX = puVar13 + 4;
      }
      else if (uVar11 == unaff_R12) {
        uVar3 = puVar13[2];
        unaff_RBX = puVar13 + 3;
      }
      else {
LAB_0011b3cf:
        if (uVar11 < unaff_R12) {
          sljit_emit_op2();
        }
        else {
          sljit_emit_op2();
        }
        uVar3 = *puVar12;
        unaff_RBX = puVar12 + 1;
        unaff_R12 = uVar11;
        if (iStack0000000000000020 == 0) goto LAB_0011b460;
      }
      if ((uVar3 & 0xfc00) == 0xd800) {
        unaff_RBX = puVar12 + 2;
      }
    }
LAB_0011b460:
    if (2 < iStack0000000000000024) {
LAB_0011b488:
      if (*unaff_R15 == 0) {
        unaff_R15[0x26] = 0;
        emit_cmp_binary();
      }
      sljit_emit_op_flags_constprop_0_isra_0();
      lVar6 = sljit_emit_jump();
      iStack0000000000000024 = 0;
      goto LAB_0011b171;
    }
    if (1 < (ushort)(*unaff_RBX - 1)) {
      if (iStack0000000000000024 < 1) {
        lVar6 = sljit_emit_cmp();
        iStack0000000000000024 = 0;
        goto LAB_0011b171;
      }
      goto LAB_0011b488;
    }
    if (*unaff_R15 == 0) {
      unaff_R15[0x26] = 0;
      emit_cmp_binary();
    }
    iStack0000000000000024 = iStack0000000000000024 + 1;
    sljit_emit_op_flags_constprop_0_isra_0();
    puVar13 = unaff_RBX;
    in_ECX = iVar10;
  } while( true );
}



void FUN_0011b233(void)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int in_ECX;
  uint uVar8;
  long *plVar9;
  int iVar10;
  ushort *puVar11;
  ulong uVar12;
  ushort *puVar13;
  ulong unaff_R12;
  ushort *unaff_R13;
  int *piVar14;
  int *unaff_R15;
  long in_FS_OFFSET;
  long *in_stack_00000008;
  long *in_stack_00000018;
  int iStack0000000000000020;
  int iStack0000000000000024;
  long *in_stack_00000040;
  long in_stack_00000048;
  
code_r0x0011b233:
  do {
    uVar3 = *unaff_R13;
    if (uVar3 == 0) {
      if (in_stack_00000040 != (long *)0x0) {
        lVar6 = sljit_emit_label();
        do {
          lVar7 = *in_stack_00000040;
          if ((lVar7 != 0) && (lVar6 != 0)) {
            *(long *)(lVar7 + 0x18) = lVar6;
            *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
          }
          in_stack_00000040 = (long *)in_stack_00000040[1];
        } while (in_stack_00000040 != (long *)0x0);
      }
      if (in_stack_00000048 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar1 = unaff_R13[1];
    uVar12 = (ulong)uVar1;
    iVar10 = in_ECX + -1;
    if (uVar3 == 1) {
      puVar11 = unaff_R13 + 2;
      if ((iStack0000000000000020 != 0) && ((uVar1 & 0xfc00) == 0xd800)) {
        puVar11 = unaff_R13 + 3;
      }
      if (iStack0000000000000024 < 3) {
        if ((ushort)(*puVar11 - 1) < 2) {
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_cmp_binary();
          }
          iStack0000000000000024 = iStack0000000000000024 + 1;
          sljit_emit_op_flags_constprop_0_isra_0();
          unaff_R13 = puVar11;
          in_ECX = iVar10;
          goto code_r0x0011b233;
        }
        if (iStack0000000000000024 < 1) {
          lVar6 = sljit_emit_cmp();
          iStack0000000000000024 = 0;
          goto LAB_0011b171;
        }
      }
      if (*unaff_R15 == 0) {
        unaff_R15[0x26] = 0;
        emit_cmp_binary();
      }
      sljit_emit_op_flags_constprop_0_isra_0();
      lVar6 = sljit_emit_jump();
      iStack0000000000000024 = 0;
      goto LAB_0011b171;
    }
    if (uVar3 != 2) {
      puVar11 = unaff_R13 + 3;
      switch(uVar12) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 9:
      case 0xc:
      case 0xd:
        unaff_R13 = puVar11;
        goto code_r0x0011b233;
      case 7:
      case 8:
        if (unaff_R12 != 9) {
          if (unaff_R12 < 10) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        unaff_R12 = 9;
        lVar6 = sljit_emit_jump();
        break;
      case 10:
        lVar6 = (ulong)unaff_R13[2] * 4;
        uVar8 = *(uint *)(&DAT_0013a09c + lVar6) ^ *(uint *)(&_pcre2_ucd_caseless_sets_16 + lVar6);
        if ((uVar8 - 1 & uVar8) == 0) {
          if (unaff_R12 == 0) {
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
LAB_0011c0e6:
              emit_cum_binary();
              if (*unaff_R15 == 0) {
                unaff_R15[0x26] = 0;
                emit_cmp_binary();
              }
            }
          }
          else {
            sljit_emit_op2();
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              goto LAB_0011c0e6;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0();
          piVar14 = (int *)(&_pcre2_ucp_typerange_16 + lVar6);
        }
        else {
          uVar8 = *(uint *)(&DAT_0013a09c + lVar6) ^ *(uint *)(&_pcre2_ucp_typerange_16 + lVar6);
          if ((uVar8 - 1 & uVar8) != 0) {
            piVar14 = (int *)(&DAT_0013a09c + lVar6);
            if (*unaff_R15 != 0) goto LAB_0011c191;
            unaff_R15[0x26] = 0;
            emit_cmp_binary();
            goto LAB_0011c191;
          }
          if (unaff_R12 == 0) {
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
LAB_0011c6ea:
              emit_cum_binary();
              if (*unaff_R15 == 0) {
                unaff_R15[0x26] = 0;
                emit_cmp_binary();
              }
            }
          }
          else {
            sljit_emit_op2();
            if (*unaff_R15 == 0) {
              unaff_R15[0x26] = 0;
              goto LAB_0011c6ea;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0();
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_cmp_binary();
          }
          piVar14 = (int *)(&DAT_0013a0a4 + lVar6);
          sljit_emit_op_flags_constprop_0_isra_0();
        }
        while (*piVar14 != -1) {
          piVar14 = piVar14 + 1;
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            emit_cmp_binary();
          }
LAB_0011c191:
          sljit_emit_op_flags_constprop_0_isra_0();
        }
        lVar6 = sljit_emit_jump();
        break;
      case 0xb:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (unaff_R12 != 0xa0) {
          if (unaff_R12 < 0xa1) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        goto LAB_0011bbc8;
      case 0xe:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        lVar6 = sljit_emit_jump();
        if (unaff_R12 != 0x2066) {
          if (unaff_R12 < 0x2067) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (unaff_R12 != 0x2066) {
          if (unaff_R12 < 0x2066) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        lVar7 = sljit_emit_label();
        if ((lVar7 != 0) && (lVar6 != 0)) {
          *(long *)(lVar6 + 0x18) = lVar7;
          *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
        }
        goto LAB_0011bde5;
      case 0xf:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        lVar6 = sljit_emit_jump();
        if (unaff_R12 != 0x2066) {
          if (unaff_R12 < 0x2067) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cmp_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (unaff_R12 != 0x2066) {
          if (unaff_R12 < 0x2066) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        lVar7 = sljit_emit_label();
        if ((lVar7 != 0) && (lVar6 != 0)) {
          *(long *)(lVar6 + 0x18) = lVar7;
          *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
        }
LAB_0011bde5:
        lVar6 = sljit_emit_cmp();
        break;
      case 0x10:
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (unaff_R12 != 0) {
          sljit_emit_op2();
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_test_binary();
        }
LAB_0011bbc8:
        unaff_R12 = 0;
        sljit_emit_op_flags_constprop_0_isra_0();
        lVar6 = sljit_emit_jump();
        break;
      case 0x11:
        if (unaff_R12 != 0x41) {
          if (unaff_R12 < 0x42) {
            sljit_emit_op2();
          }
          else {
            sljit_emit_op2();
          }
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          emit_cum_binary();
          if (*unaff_R15 == 0) {
            unaff_R15[0x26] = 0;
            lVar6 = emit_x86_instruction();
            if (lVar6 != 0) {
              *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
            }
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        lVar6 = sljit_emit_cmp();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar7 = emit_x86_instruction();
          if (lVar7 != 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 0x38;
          }
        }
        sljit_emit_op_flags_constprop_0_isra_0();
        sljit_emit_op2();
        lVar7 = sljit_emit_label();
        if ((lVar6 != 0) && (lVar7 != 0)) {
          *(long *)(lVar6 + 0x18) = lVar7;
          *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (*unaff_R15 == 0) {
          unaff_R15[0x26] = 0;
          lVar6 = emit_x86_instruction();
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
          }
        }
        unaff_R12 = 0xff10;
        lVar6 = sljit_emit_jump();
        break;
      default:
        FUN_0011b233();
        return;
      }
LAB_0011b171:
      if (lVar6 != 0) {
        plVar9 = in_stack_00000018;
        if (iVar10 < 1) {
          plVar9 = in_stack_00000008;
        }
        if (*unaff_R15 == 0) {
          lVar7 = *(long *)(unaff_R15 + 0x18);
          lVar2 = *(long *)(lVar7 + 8);
          uVar12 = lVar2 + 0x10;
          if (uVar12 < 0xff1) {
            *(ulong *)(lVar7 + 8) = uVar12;
            plVar5 = (long *)(lVar7 + 0x10 + lVar2);
          }
          else {
            puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(unaff_R15 + 0x12))(0x1000);
            if (puVar4 == (undefined8 *)0x0) {
              *unaff_R15 = 2;
              unaff_R13 = puVar11;
              in_ECX = iVar10;
              goto code_r0x0011b233;
            }
            *puVar4 = *(undefined8 *)(unaff_R15 + 0x18);
            *(undefined8 **)(unaff_R15 + 0x18) = puVar4;
            plVar5 = puVar4 + 2;
            puVar4[1] = 0x10;
          }
          lVar7 = *plVar9;
          *plVar5 = lVar6;
          plVar5[1] = lVar7;
          *plVar9 = (long)plVar5;
        }
      }
      FUN_0011b233();
      return;
    }
    puVar13 = unaff_R13 + 2;
    if (iStack0000000000000020 == 0) {
      if (uVar12 != unaff_R12) goto LAB_0011b3cf;
      puVar11 = unaff_R13 + 3;
    }
    else {
      if ((uVar1 & 0xfc00) == 0xd800) {
        puVar13 = unaff_R13 + 3;
        uVar12 = (ulong)((uVar1 & 0x3ff) << 10 | unaff_R13[2] & 0x3ff) + 0x10000;
        if (uVar12 != unaff_R12) goto LAB_0011b3cf;
        uVar3 = unaff_R13[3];
        puVar11 = unaff_R13 + 4;
      }
      else if (uVar12 == unaff_R12) {
        uVar3 = unaff_R13[2];
        puVar11 = unaff_R13 + 3;
      }
      else {
LAB_0011b3cf:
        if (uVar12 < unaff_R12) {
          sljit_emit_op2();
        }
        else {
          sljit_emit_op2();
        }
        uVar3 = *puVar13;
        puVar11 = puVar13 + 1;
        unaff_R12 = uVar12;
        if (iStack0000000000000020 == 0) goto LAB_0011b460;
      }
      if ((uVar3 & 0xfc00) == 0xd800) {
        puVar11 = puVar13 + 2;
      }
    }
LAB_0011b460:
    if (2 < iStack0000000000000024) {
LAB_0011b488:
      if (*unaff_R15 == 0) {
        unaff_R15[0x26] = 0;
        emit_cmp_binary();
      }
      sljit_emit_op_flags_constprop_0_isra_0();
      lVar6 = sljit_emit_jump();
      iStack0000000000000024 = 0;
      goto LAB_0011b171;
    }
    if (1 < (ushort)(*puVar11 - 1)) {
      if (iStack0000000000000024 < 1) {
        lVar6 = sljit_emit_cmp();
        iStack0000000000000024 = 0;
        goto LAB_0011b171;
      }
      goto LAB_0011b488;
    }
    if (*unaff_R15 == 0) {
      unaff_R15[0x26] = 0;
      emit_cmp_binary();
    }
    iStack0000000000000024 = iStack0000000000000024 + 1;
    sljit_emit_op_flags_constprop_0_isra_0();
    unaff_R13 = puVar11;
    in_ECX = iVar10;
  } while( true );
}



void compile_charn_matchingpath
               (undefined8 *param_1,short *param_2,short *param_3,undefined8 *param_4)

{
  short *psVar1;
  ulong uVar2;
  undefined8 uVar3;
  ushort uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  short *psVar13;
  int iVar14;
  long in_FS_OFFSET;
  bool bVar15;
  int local_48;
  undefined8 local_44;
  long local_30;
  
  piVar5 = (int *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  psVar13 = param_2;
  do {
    iVar14 = local_48;
    if (param_3 <= psVar13) {
LAB_0011d805:
      if (iVar14 < 1) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          compile_char1_matchingpath(param_1,*param_2,param_2 + 1,param_4,1);
          return;
        }
        goto LAB_0011d98b;
      }
      break;
    }
    if (*psVar13 != 0x1d) {
      if (*psVar13 == 0x1e) {
        uVar4 = psVar13[1];
        psVar1 = psVar13 + 1;
        uVar9 = (uint)uVar4;
        if (*(int *)(param_1 + 0x3c) == 0) {
          if (*(int *)(param_1 + 0x3d) == 0) {
            if (uVar4 < 0x100) goto LAB_0011d7e2;
          }
          else {
            if (uVar9 < 0x80) {
              bVar15 = *(byte *)(param_1[0x12] + (ulong)uVar4) != uVar9;
            }
            else {
              bVar15 = *(int *)(&DAT_0013a01c +
                               (ulong)*(ushort *)
                                       (&_pcre2_ucd_stage2_16 +
                                       (long)(int)((uVar4 & 0x7f) +
                                                  (uint)*(ushort *)
                                                         (&_pcre2_ucd_stage1_16 +
                                                         (long)((int)uVar9 >> 7) * 2) * 0x80) * 2) *
                               0xc) != 0;
            }
            if ((bVar15) && (iVar8 = char_get_othercase_bit(param_1,psVar1), iVar8 == 0))
            goto LAB_0011d805;
          }
LAB_0011d695:
          psVar13 = psVar13 + 2;
          iVar14 = iVar14 + 2;
          goto LAB_0011d69d;
        }
        if ((uVar4 & 0xfc00) == 0xd800) {
          uVar9 = ((uVar4 & 0x3ff) << 10 | (ushort)psVar13[2] & 0x3ff) + 0x10000;
          if ((*(int *)(&DAT_0013a01c +
                       (ulong)*(ushort *)
                               (&_pcre2_ucd_stage2_16 +
                               (long)(int)((uVar9 & 0x7f) +
                                          (uint)*(ushort *)
                                                 (&_pcre2_ucd_stage1_16 +
                                                 (long)((int)uVar9 >> 7) * 2) * 0x80) * 2) * 0xc) ==
               0) || (iVar8 = char_get_othercase_bit(param_1,psVar1), iVar8 != 0))
          goto LAB_0011d86a;
        }
        else {
          if (uVar9 < 0x80) {
LAB_0011d7e2:
            if (*(byte *)(param_1[0x12] + (ulong)uVar4) == uVar9) goto LAB_0011d695;
          }
          else if (*(int *)(&DAT_0013a01c +
                           (ulong)*(ushort *)
                                   (&_pcre2_ucd_stage2_16 +
                                   (long)(int)((uVar4 & 0x7f) +
                                              (uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_16 +
                                                     (long)((int)uVar9 >> 7) * 2) * 0x80) * 2) * 0xc
                           ) == 0) goto LAB_0011d695;
          iVar8 = char_get_othercase_bit(param_1,psVar1);
          if (iVar8 != 0) goto LAB_0011d695;
        }
      }
      goto LAB_0011d805;
    }
    if ((*(int *)(param_1 + 0x3c) == 0) || ((psVar13[1] & 0xfc00U) != 0xd800)) goto LAB_0011d695;
LAB_0011d86a:
    psVar13 = psVar13 + 3;
    iVar14 = iVar14 + 4;
LAB_0011d69d:
    local_48 = iVar14;
  } while (iVar14 < 0x81);
  sljit_emit_op2(piVar5,0x40,2,0,2,0,0x7f,(long)iVar14);
  uVar10 = sljit_emit_cmp(piVar5,4,2,0,0xd,0);
  if (*piVar5 == 0) {
    lVar6 = *(long *)(piVar5 + 0x18);
    lVar7 = *(long *)(lVar6 + 8);
    uVar2 = lVar7 + 0x10;
    if (uVar2 < 0xff1) {
      *(ulong *)(lVar6 + 8) = uVar2;
      puVar12 = (undefined8 *)(lVar6 + 0x10 + lVar7);
    }
    else {
      puVar11 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar5 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar5 + 0x12))[2]);
      if (puVar11 == (undefined8 *)0x0) {
        *piVar5 = 2;
        goto LAB_0011d762;
      }
      *puVar11 = *(undefined8 *)(piVar5 + 0x18);
      *(undefined8 **)(piVar5 + 0x18) = puVar11;
      puVar12 = puVar11 + 2;
      puVar11[1] = 0x10;
    }
    uVar3 = *param_4;
    *puVar12 = uVar10;
    puVar12[1] = uVar3;
    *param_4 = puVar12;
  }
LAB_0011d762:
  local_44 = _LC31;
  do {
    param_2 = (short *)byte_sequence_compare(param_1,*param_2 == 0x1e,param_2 + 1,&local_48,param_4)
    ;
  } while (0 < local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011d98b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
compile_simple_assertion_matchingpath
          (undefined8 *param_1,short param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  char cVar15;
  bool bVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  piVar3 = (int *)*param_1;
  switch(param_2) {
  case 0:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    goto switchD_0011d9c8_caseD_0;
  case 1:
    uVar14 = 0x10;
    break;
  case 2:
    uVar14 = 8;
    break;
  case 4:
  case 5:
    puVar9 = param_1 + 0x32;
    uVar14 = sljit_emit_jump(piVar3,0x25);
    goto LAB_0011d9e9;
  case 0x17:
    lVar10 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
    if (*(int *)((long)param_1 + 0xc4) == 0) {
      if (*(int *)(param_1 + 0x1a) < 0x100) {
        sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,2);
        sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
        uVar14 = sljit_emit_cmp(piVar3,1,4,0,0xd,0);
        if (*piVar3 == 0) {
          lVar12 = *(long *)(piVar3 + 0x18);
          lVar13 = *(long *)(lVar12 + 8);
          uVar18 = lVar13 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar12 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar13);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011e778;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar12 = *param_4;
          *puVar9 = uVar14;
          puVar9[1] = lVar12;
          *param_4 = (long)puVar9;
        }
LAB_0011e778:
        uVar18 = (ulong)*(int *)(param_1 + 0x1a);
        uVar14 = 1;
      }
      else {
        sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,4);
        sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
        if (*(int *)(param_1 + 0x14) == 1) {
          uVar14 = sljit_emit_cmp(piVar3,1,4,0,0xd,0);
          if (*piVar3 == 0) {
            lVar12 = *(long *)(piVar3 + 0x18);
            lVar13 = *(long *)(lVar12 + 8);
            uVar18 = lVar13 + 0x10;
            if (uVar18 < 0xff1) {
              *(ulong *)(lVar12 + 8) = uVar18;
              puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar13);
            }
            else {
              puVar6 = (undefined8 *)
                       (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                 (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar6 == (undefined8 *)0x0) {
                *piVar3 = 2;
                goto LAB_0011ef58;
              }
              *puVar6 = *(undefined8 *)(piVar3 + 0x18);
              *(undefined8 **)(piVar3 + 0x18) = puVar6;
              puVar9 = puVar6 + 2;
              puVar6[1] = 0x10;
            }
            lVar12 = *param_4;
            *puVar9 = uVar14;
            puVar9[1] = lVar12;
            *param_4 = (long)puVar9;
          }
        }
        else {
          lVar12 = sljit_emit_cmp(piVar3,0,4,0,0xd,0);
          if (*piVar3 == 0) {
            piVar3[0x26] = 0;
            puVar11 = (undefined1 *)emit_x86_instruction(piVar3,1,4,0,0xd,0);
            if (puVar11 != (undefined1 *)0x0) {
              *puVar11 = 0x3b;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar3,0x20,4,2);
          if (*piVar3 == 0) {
            uVar2 = *(uint *)(param_1 + 0x1a);
            piVar3[0x26] = 0;
            emit_cmp_binary(piVar3,1,0,0x7f,uVar2 >> 8 & 0xff);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar3,0x246,4,1);
          uVar14 = sljit_emit_jump(piVar3,1);
          if (*piVar3 == 0) {
            lVar13 = *(long *)(piVar3 + 0x18);
            lVar7 = *(long *)(lVar13 + 8);
            uVar18 = lVar7 + 0x10;
            if (uVar18 < 0xff1) {
              *(ulong *)(lVar13 + 8) = uVar18;
              puVar9 = (undefined8 *)(lVar13 + 0x10 + lVar7);
            }
            else {
              puVar6 = (undefined8 *)
                       (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                 (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar6 == (undefined8 *)0x0) {
                *piVar3 = 2;
                goto LAB_0011eead;
              }
              *puVar6 = *(undefined8 *)(piVar3 + 0x18);
              *(undefined8 **)(piVar3 + 0x18) = puVar6;
              puVar9 = puVar6 + 2;
              puVar6[1] = 0x10;
            }
            lVar13 = *param_4;
            *puVar9 = uVar14;
            puVar9[1] = lVar13;
            *param_4 = (long)puVar9;
          }
LAB_0011eead:
          check_partial(param_1,1);
          uVar14 = sljit_emit_jump(piVar3,0x24);
          if (*piVar3 == 0) {
            lVar13 = *(long *)(piVar3 + 0x18);
            lVar7 = *(long *)(lVar13 + 8);
            uVar18 = lVar7 + 0x10;
            if (uVar18 < 0xff1) {
              *(ulong *)(lVar13 + 8) = uVar18;
              puVar9 = (undefined8 *)(lVar13 + 0x10 + lVar7);
            }
            else {
              puVar6 = (undefined8 *)
                       (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                 (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar6 == (undefined8 *)0x0) {
                *piVar3 = 2;
                goto LAB_0011ef32;
              }
              *puVar6 = *(undefined8 *)(piVar3 + 0x18);
              *(undefined8 **)(piVar3 + 0x18) = puVar6;
              puVar9 = puVar6 + 2;
              puVar6[1] = 0x10;
            }
            lVar13 = *param_4;
            *puVar9 = uVar14;
            puVar9[1] = lVar13;
            *param_4 = (long)puVar9;
          }
LAB_0011ef32:
          lVar13 = sljit_emit_label(piVar3);
          if ((lVar13 != 0) && (lVar12 != 0)) {
            *(long *)(lVar12 + 0x18) = lVar13;
            *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
LAB_0011ef58:
        sljit_emit_op1(piVar3,0x23,4,0,0x82,2);
        uVar14 = sljit_emit_cmp(piVar3,1,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
        if (*piVar3 == 0) {
          lVar12 = *(long *)(piVar3 + 0x18);
          lVar13 = *(long *)(lVar12 + 8);
          uVar18 = lVar13 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar12 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar13);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011f005;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar12 = *param_4;
          *puVar9 = uVar14;
          puVar9[1] = lVar12;
          *param_4 = (long)puVar9;
        }
LAB_0011f005:
        uVar18 = (ulong)*(byte *)(param_1 + 0x1a);
        uVar14 = 4;
      }
      uVar14 = sljit_emit_cmp(piVar3,1,uVar14,0,0x7f,uVar18);
      if (*piVar3 == 0) {
        lVar12 = *(long *)(piVar3 + 0x18);
        lVar13 = *(long *)(lVar12 + 8);
        uVar18 = lVar13 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar12 + 8) = uVar18;
          puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar13);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011df8c;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar9 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar12 = *param_4;
        *puVar9 = uVar14;
        puVar9[1] = lVar12;
        *param_4 = (long)puVar9;
      }
    }
    else {
      sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
      lVar12 = sljit_emit_cmp(piVar3,1,1,0,0x7f,0xd);
      sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,4);
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        puVar11 = (undefined1 *)emit_x86_instruction(piVar3,1,4,0,0xd,0);
        if (puVar11 != (undefined1 *)0x0) {
          *puVar11 = 0x3b;
        }
      }
      lVar13 = sljit_emit_jump(piVar3,4);
      uVar14 = sljit_emit_jump(piVar3,1);
      if (*piVar3 == 0) {
        lVar7 = *(long *)(piVar3 + 0x18);
        lVar8 = *(long *)(lVar7 + 8);
        uVar18 = lVar8 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar7 + 8) = uVar18;
          puVar9 = (undefined8 *)(lVar7 + 0x10 + lVar8);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011dc6d;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar9 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar7 = *param_4;
        *puVar9 = uVar14;
        puVar9[1] = lVar7;
        *param_4 = (long)puVar9;
      }
LAB_0011dc6d:
      sljit_emit_op1(piVar3,0x23,1,0,0x82,2);
      lVar7 = sljit_emit_cmp(piVar3,0,1,0,0x7f,10);
      uVar14 = sljit_emit_jump(piVar3,0x24);
      if (*piVar3 == 0) {
        lVar8 = *(long *)(piVar3 + 0x18);
        lVar4 = *(long *)(lVar8 + 8);
        uVar18 = lVar4 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar8 + 8) = uVar18;
          puVar9 = (undefined8 *)(lVar8 + 0x10 + lVar4);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011dd28;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar9 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar8 = *param_4;
        *puVar9 = uVar14;
        puVar9[1] = lVar8;
        *param_4 = (long)puVar9;
      }
LAB_0011dd28:
      lVar8 = sljit_emit_label(piVar3);
      if ((lVar8 != 0) && (lVar12 != 0)) {
        *(long *)(lVar12 + 0x18) = lVar8;
        *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (*(int *)((long)param_1 + 0xc4) == 2) {
        sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,2);
        uVar14 = sljit_emit_cmp(piVar3,2,4,0,0xd,0);
        if (*piVar3 == 0) {
          lVar12 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar12 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar12 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011f25b;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar12 = *param_4;
          *puVar9 = uVar14;
          puVar9[1] = lVar12;
          *param_4 = (long)puVar9;
        }
LAB_0011f25b:
        uVar14 = sljit_emit_cmp(piVar3,1,1,0,0x7f,10);
        if (*piVar3 == 0) {
          lVar12 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar12 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar12 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011df26;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar12 = *param_4;
          *puVar9 = uVar14;
          puVar9[1] = lVar12;
          *param_4 = (long)puVar9;
        }
      }
      else {
        sljit_emit_op1(piVar3,0x20,3,0,2,0);
        read_char_isra_0(param_1,*(undefined4 *)(param_1 + 0x19),param_4,1);
        uVar14 = sljit_emit_cmp(piVar3,1,2,0,0xd,0);
        if (*piVar3 == 0) {
          lVar12 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar12 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar12 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011de16;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar12 = *param_4;
          *puVar9 = uVar14;
          puVar9[1] = lVar12;
          *param_4 = (long)puVar9;
        }
LAB_0011de16:
        uVar14 = sljit_emit_jump(piVar3,0x25);
        if (*piVar3 == 0) {
          lVar12 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar12 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar12 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011de94;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          uVar17 = param_1[0x34];
          *puVar9 = uVar14;
          puVar9[1] = uVar17;
          param_1[0x34] = puVar9;
        }
LAB_0011de94:
        uVar14 = sljit_emit_jump(piVar3,0);
        if (*piVar3 == 0) {
          lVar12 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar12 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar12 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011df09;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar12 = *param_4;
          *puVar9 = uVar14;
          puVar9[1] = lVar12;
          *param_4 = (long)puVar9;
        }
LAB_0011df09:
        sljit_emit_op1(piVar3,0x20,2,0,3,0);
      }
LAB_0011df26:
      lVar12 = sljit_emit_label(piVar3);
      if ((lVar12 != 0) && (lVar13 != 0)) {
        *(long *)(lVar13 + 0x18) = lVar12;
        *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar12 = sljit_emit_label(piVar3);
      if ((lVar12 != 0) && (lVar7 != 0)) {
        *(long *)(lVar7 + 0x18) = lVar12;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
LAB_0011df8c:
    lVar12 = sljit_emit_label(piVar3);
    if ((lVar12 != 0) && (lVar10 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar12;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_0011e490:
    if (*(int *)(param_1 + 0x14) == 1) {
      return param_3;
    }
    check_partial(param_1,1);
    return param_3;
  case 0x18:
    uVar14 = sljit_emit_cmp(piVar3,2,2,0,0xd,0);
    if (*piVar3 == 0) {
      lVar10 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar10 + 8);
      uVar18 = lVar12 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar18;
        puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar12);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011e490;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar9 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar10 = *param_4;
      *puVar9 = uVar14;
      puVar9[1] = lVar10;
      *param_4 = (long)puVar9;
    }
    goto LAB_0011e490;
  case 0x19:
    if (*piVar3 == 0) {
      piVar3[0x26] = 0x100;
      puVar11 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,2,0x89,0x58);
      if (puVar11 != (undefined1 *)0x0) {
        *puVar11 = 0xf7;
      }
    }
    uVar14 = sljit_emit_jump(piVar3,1);
    if (*piVar3 == 0) {
      lVar10 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar10 + 8);
      uVar18 = lVar12 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar18;
        puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar12);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011e186;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar9 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar10 = *param_4;
      *puVar9 = uVar14;
      puVar9[1] = lVar10;
      *param_4 = (long)puVar9;
    }
LAB_0011e186:
    if (*(int *)(param_1 + 0x1c) == 0) {
      compile_simple_assertion_matchingpath(param_1,0x17,param_3,param_4);
      return param_3;
    }
    uVar14 = sljit_emit_cmp(piVar3,2,2,0,0xd,0);
    if (*piVar3 == 0) {
      lVar10 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar10 + 8);
      uVar18 = lVar12 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar18;
        puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar12);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011e21f;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar9 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar10 = *param_4;
      *puVar9 = uVar14;
      puVar9[1] = lVar10;
      *param_4 = (long)puVar9;
    }
LAB_0011e21f:
    check_partial(param_1,0);
    return param_3;
  case 0x1a:
    lVar10 = sljit_emit_cmp(piVar3,2,2,0,0xd,0);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0x100;
      puVar11 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,2,0x89,0x58);
      if (puVar11 != (undefined1 *)0x0) {
        *puVar11 = 0xf7;
      }
    }
    uVar14 = sljit_emit_jump(piVar3,1);
    if (*piVar3 == 0) {
      lVar12 = *(long *)(piVar3 + 0x18);
      lVar13 = *(long *)(lVar12 + 8);
      uVar18 = lVar13 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar12 + 8) = uVar18;
        puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar13);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011e307;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar9 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar12 = *param_4;
      *puVar9 = uVar14;
      puVar9[1] = lVar12;
      *param_4 = (long)puVar9;
    }
LAB_0011e307:
    check_partial(param_1,0);
    lVar12 = sljit_emit_jump(piVar3,0x24);
    lVar13 = sljit_emit_label(piVar3);
    if ((lVar13 != 0) && (lVar10 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar13;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if ((*(int *)((long)param_1 + 0xc4) == 0) && (0xff < *(int *)(param_1 + 0x1a))) {
      sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,4);
      sljit_emit_op1(piVar3,0x23,1,0,0x82,0);
      if (*(int *)(param_1 + 0x14) == 1) {
        uVar14 = sljit_emit_cmp(piVar3,4,4,0,0xd,0);
        if (*piVar3 == 0) {
          lVar10 = *(long *)(piVar3 + 0x18);
          lVar13 = *(long *)(lVar10 + 8);
          uVar18 = lVar13 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar10 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar13);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011ebe5;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar10 = *param_4;
          *puVar9 = uVar14;
          puVar9[1] = lVar10;
          *param_4 = (long)puVar9;
        }
      }
      else {
        lVar10 = sljit_emit_cmp(piVar3,5,4,0,0xd,0);
        uVar14 = sljit_emit_cmp(piVar3,1,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
        if (*piVar3 == 0) {
          lVar13 = *(long *)(piVar3 + 0x18);
          lVar7 = *(long *)(lVar13 + 8);
          uVar18 = lVar7 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar13 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar13 + 0x10 + lVar7);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011eb3a;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar13 = *param_4;
          *puVar9 = uVar14;
          puVar9[1] = lVar13;
          *param_4 = (long)puVar9;
        }
LAB_0011eb3a:
        check_partial(param_1,1);
        uVar14 = sljit_emit_jump(piVar3,0x24);
        if (*piVar3 == 0) {
          lVar13 = *(long *)(piVar3 + 0x18);
          lVar7 = *(long *)(lVar13 + 8);
          uVar18 = lVar7 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar13 + 8) = uVar18;
            puVar9 = (undefined8 *)(lVar13 + 0x10 + lVar7);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011ebbf;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar9 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar13 = *param_4;
          *puVar9 = uVar14;
          puVar9[1] = lVar13;
          *param_4 = (long)puVar9;
        }
LAB_0011ebbf:
        lVar13 = sljit_emit_label(piVar3);
        if ((lVar10 != 0) && (lVar13 != 0)) {
          *(long *)(lVar10 + 0x18) = lVar13;
          *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
LAB_0011ebe5:
      sljit_emit_op1(piVar3,0x23,4,0,0x82,2);
      uVar14 = sljit_emit_cmp(piVar3,1,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
      if (*piVar3 == 0) {
        lVar10 = *(long *)(piVar3 + 0x18);
        lVar13 = *(long *)(lVar10 + 8);
        uVar18 = lVar13 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar10 + 8) = uVar18;
          puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar13);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011ec92;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar9 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar10 = *param_4;
        *puVar9 = uVar14;
        puVar9[1] = lVar10;
        *param_4 = (long)puVar9;
      }
LAB_0011ec92:
      uVar14 = sljit_emit_cmp(piVar3,1,4,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
      if (*piVar3 == 0) {
        lVar10 = *(long *)(piVar3 + 0x18);
        lVar13 = *(long *)(lVar10 + 8);
        uVar18 = lVar13 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar10 + 8) = uVar18;
          puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar13);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011e38e;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar9 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar10 = *param_4;
        *puVar9 = uVar14;
        puVar9[1] = lVar10;
        *param_4 = (long)puVar9;
      }
    }
    else {
      peek_char(param_1,*(undefined4 *)(param_1 + 0x19),3,0,0);
      check_newlinechar(param_1,*(undefined4 *)((long)param_1 + 0xc4),param_4,0);
    }
LAB_0011e38e:
    lVar10 = sljit_emit_label(piVar3);
    lVar13 = lVar10;
    lVar7 = lVar12;
joined_r0x0011e638:
    if (lVar7 == 0) {
      return param_3;
    }
    if (lVar10 == 0) {
      return param_3;
    }
    *(long *)(lVar12 + 0x18) = lVar13;
    *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
    return param_3;
  case 0x1b:
    sljit_emit_op1(piVar3,0x20,1,0,0x89,0x10);
    uVar14 = sljit_emit_cmp(piVar3,4,2,0,1,0);
    if (*piVar3 == 0) {
      lVar10 = *(long *)(piVar3 + 0x18);
      uVar18 = *(long *)(lVar10 + 8) + 0x10;
      if (uVar18 < 0xff1) {
        puVar9 = (undefined8 *)(lVar10 + 0x10 + *(long *)(lVar10 + 8));
        lVar12 = *param_4;
        *(ulong *)(lVar10 + 8) = uVar18;
        *puVar9 = uVar14;
        puVar9[1] = lVar12;
        *param_4 = (long)puVar9;
LAB_0011e073:
        piVar3[0x26] = 0x100;
        puVar11 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,1,0x89,0x58);
        if (puVar11 != (undefined1 *)0x0) {
          *puVar11 = 0xf7;
        }
      }
      else {
        puVar9 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar9 == (undefined8 *)0x0) {
          *piVar3 = 2;
        }
        else {
          lVar10 = *param_4;
          *puVar9 = *(undefined8 *)(piVar3 + 0x18);
          iVar1 = *piVar3;
          *(undefined8 **)(piVar3 + 0x18) = puVar9;
          puVar9[1] = 0x10;
          puVar9[2] = uVar14;
          puVar9[3] = lVar10;
          *param_4 = (long)(puVar9 + 2);
          if (iVar1 == 0) goto LAB_0011e073;
        }
      }
    }
    bVar16 = true;
    goto LAB_0011e0ae;
  case 0x1c:
    sljit_emit_op1(piVar3,0x20,4,0,0x89,0x10);
    lVar10 = sljit_emit_cmp(piVar3,4,2,0,4,0);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0x100;
      puVar11 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,1,0x89,0x58);
      if (puVar11 != (undefined1 *)0x0) {
        *puVar11 = 0xf7;
      }
    }
    uVar14 = sljit_emit_jump(piVar3,1);
    if (*piVar3 == 0) {
      lVar12 = *(long *)(piVar3 + 0x18);
      lVar13 = *(long *)(lVar12 + 8);
      uVar18 = lVar13 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar12 + 8) = uVar18;
        puVar9 = (undefined8 *)(lVar12 + 0x10 + lVar13);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011e5a7;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar9 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar12 = *param_4;
      *puVar9 = uVar14;
      puVar9[1] = lVar12;
      *param_4 = (long)puVar9;
    }
LAB_0011e5a7:
    lVar12 = sljit_emit_jump(piVar3,0x24);
    lVar13 = sljit_emit_label(piVar3);
    if ((lVar10 != 0) && (lVar13 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar13;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if ((*(int *)((long)param_1 + 0x1dc) == 0) &&
       (uVar14 = sljit_emit_cmp(piVar3,3,2,0,0xd,0), *piVar3 == 0)) {
      lVar10 = *(long *)(piVar3 + 0x18);
      lVar13 = *(long *)(lVar10 + 8);
      uVar18 = lVar13 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar18;
        puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar13);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011e5ed;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        puVar9 = puVar6 + 2;
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar6[1] = 0x10;
      }
      lVar10 = *param_4;
      *puVar9 = uVar14;
      puVar9[1] = lVar10;
      *param_4 = (long)puVar9;
    }
LAB_0011e5ed:
    if ((*(int *)((long)param_1 + 0xc4) == 0) && (0xff < *(int *)(param_1 + 0x1a))) {
      sljit_emit_op2(piVar3,0x42,1,0,2,0,0x7f,4);
      uVar14 = sljit_emit_cmp(piVar3,2,1,0,4,0);
      if (*piVar3 == 0) {
        lVar10 = *(long *)(piVar3 + 0x18);
        lVar13 = *(long *)(lVar10 + 8);
        uVar18 = lVar13 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar10 + 8) = uVar18;
          puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar13);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011e8db;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar9 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar10 = *param_4;
        *puVar9 = uVar14;
        puVar9[1] = lVar10;
        *param_4 = (long)puVar9;
      }
LAB_0011e8db:
      sljit_emit_op1(piVar3,0x23,1,0,0x82,0xfffffffffffffffc);
      sljit_emit_op1(piVar3,0x23,4,0,0x82,0xfffffffffffffffe);
      uVar14 = sljit_emit_cmp(piVar3,1,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
      if (*piVar3 == 0) {
        lVar10 = *(long *)(piVar3 + 0x18);
        lVar13 = *(long *)(lVar10 + 8);
        uVar18 = lVar13 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar10 + 8) = uVar18;
          puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar13);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011e9aa;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar9 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar10 = *param_4;
        *puVar9 = uVar14;
        puVar9[1] = lVar10;
        *param_4 = (long)puVar9;
      }
LAB_0011e9aa:
      uVar14 = sljit_emit_cmp(piVar3,1,4,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
      if (*piVar3 == 0) {
        lVar10 = *(long *)(piVar3 + 0x18);
        lVar13 = *(long *)(lVar10 + 8);
        uVar18 = lVar13 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar10 + 8) = uVar18;
          puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar13);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011e62d;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar9 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar10 = *param_4;
        *puVar9 = uVar14;
        puVar9[1] = lVar10;
        *param_4 = (long)puVar9;
      }
    }
    else {
      peek_char_back(param_1,*(undefined4 *)(param_1 + 0x19),param_4);
      check_newlinechar(param_1,*(undefined4 *)((long)param_1 + 0xc4),param_4,0);
    }
LAB_0011e62d:
    lVar13 = sljit_emit_label(piVar3);
    lVar10 = lVar12;
    lVar7 = lVar13;
    goto joined_r0x0011e638;
  default:
    if (1 < (ushort)(param_2 - 0xa9U)) {
      return param_3;
    }
    puVar9 = param_1 + 0x33;
    uVar14 = sljit_emit_jump(piVar3,0x25);
LAB_0011d9e9:
    if (*piVar3 == 0) {
      lVar10 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar10 + 8);
      uVar18 = lVar12 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar18;
        puVar6 = (undefined8 *)(lVar10 + 0x10 + lVar12);
      }
      else {
        puVar5 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar5 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011da4e;
        }
        *puVar5 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar5;
        puVar6 = puVar5 + 2;
        puVar5[1] = 0x10;
      }
      uVar17 = *puVar9;
      *puVar6 = uVar14;
      puVar6[1] = uVar17;
      *puVar9 = puVar6;
    }
LAB_0011da4e:
    bVar16 = param_2 == 0xa9 || param_2 == 4;
    if (*(int *)((long)param_1 + 0x1e4) != 0) {
      uVar17 = 0x7f;
      uVar14 = 4;
      cVar15 = (-(param_2 != 0xa9 && param_2 != 4) & 8U) + 1;
      goto LAB_0011da8c;
    }
LAB_0011e0ae:
    uVar14 = sljit_emit_jump(piVar3,bVar16);
    if (*piVar3 != 0) {
      return param_3;
    }
    goto LAB_0011daa0;
  }
  sljit_emit_op1(piVar3,0x20,1,0,0x89,uVar14);
  uVar17 = 1;
  uVar14 = 2;
  cVar15 = '\x01';
LAB_0011da8c:
  uVar14 = sljit_emit_cmp(piVar3,cVar15,uVar14,0,uVar17,0);
  if (*piVar3 == 0) {
LAB_0011daa0:
    lVar10 = *(long *)(piVar3 + 0x18);
    lVar12 = *(long *)(lVar10 + 8);
    uVar18 = lVar12 + 0x10;
    if (uVar18 < 0xff1) {
      *(ulong *)(lVar10 + 8) = uVar18;
      puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar12);
    }
    else {
      puVar6 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar6 == (undefined8 *)0x0) {
        *piVar3 = 2;
        return param_3;
      }
      *puVar6 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar6;
      puVar9 = puVar6 + 2;
      puVar6[1] = 0x10;
    }
    lVar10 = *param_4;
    *puVar9 = uVar14;
    puVar9[1] = lVar10;
    *param_4 = (long)puVar9;
  }
switchD_0011d9c8_caseD_0:
  return param_3;
}



short * compile_iterator_matchingpath(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  long *plVar21;
  uint uVar22;
  short *psVar23;
  long in_FS_OFFSET;
  bool bVar24;
  undefined8 uVar25;
  undefined8 local_c0;
  int local_a0;
  undefined4 local_9c;
  ushort local_98;
  long local_80;
  int local_78;
  long local_70;
  short local_64;
  short local_62;
  int local_60;
  uint local_5c;
  short *local_58;
  long *local_50;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = (int *)*param_1;
  local_60 = 0;
  uVar22 = *(uint *)(param_1[3] + ((param_2 + 2) - param_1[2] >> 1) * 4);
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  iVar3 = *(int *)(param_1[3] + (param_2 - param_1[2] >> 1) * 4);
  if (iVar3 == 0) {
    local_9c = 0x8c;
    local_78 = 8;
    if (*piVar4 == 0) goto LAB_0011f6e4;
LAB_0011f8da:
    psVar23 = (short *)0x0;
    goto LAB_0011f8dd;
  }
  local_78 = iVar3 + 8;
  local_9c = 0x8e;
  if (*piVar4 != 0) goto LAB_0011f8da;
LAB_0011f6e4:
  pauVar11 = (undefined1 (*) [16])ensure_abuf(piVar4,0x40);
  if (*piVar4 != 0) goto LAB_0011f8da;
  *pauVar11 = (undefined1  [16])0x0;
  pauVar11[2] = (undefined1  [16])0x0;
  pauVar11[1] = (undefined1  [16])0x0;
  pauVar11[3] = (undefined1  [16])0x0;
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  iVar9 = *(int *)(param_1 + 0xf);
  *(long *)pauVar11[2] = param_2;
  *(undefined8 *)*pauVar11 = uVar12;
  *(undefined1 (**) [16])(param_3 + 0x10) = pauVar11;
  local_a0 = (int)uVar22 >> 3;
  uVar22 = uVar22 & 7;
  if ((iVar9 == 0) && (param_1[0xe] == 0)) {
    local_a0 = 0;
    uVar22 = 0;
  }
  else if ((uVar22 == 1) &&
          (uVar12 = sljit_emit_cmp(piVar4,5,2,0,0x8e,(long)local_a0), *piVar4 == 0)) {
    lVar13 = *(long *)(piVar4 + 0x18);
    lVar14 = *(long *)(lVar13 + 8);
    uVar1 = lVar14 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar13 + 8) = uVar1;
      puVar16 = (undefined8 *)(lVar13 + 0x10 + lVar14);
    }
    else {
      puVar15 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar4 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar15 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_0011f753;
      }
      *puVar15 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar15;
      puVar16 = puVar15 + 2;
      puVar15[1] = 0x10;
    }
    uVar17 = *(undefined8 *)(pauVar11[1] + 8);
    *puVar16 = uVar12;
    puVar16[1] = uVar17;
    *(undefined8 **)(pauVar11[1] + 8) = puVar16;
  }
LAB_0011f753:
  uVar12 = get_iterator_parameters_constprop_0
                     (param_1,param_2,&local_64,&local_62,&local_60,&local_5c,&local_58);
  iVar9 = 3;
  if (local_62 == 0x16) {
    iVar9 = 0x8e;
  }
  uVar10 = 0x10;
  if (local_62 != 0x16) {
    uVar10 = 0;
  }
  if (local_5c < 2) {
    if (local_5c == 1) {
      compile_char1_matchingpath(param_1,local_62,uVar12,pauVar11[1] + 8,1);
    }
  }
  else {
    if (((*(int *)(param_1 + 0x14) == 1) && (local_62 != 0x11 && local_62 != 0x16)) &&
       (*(int *)(param_1 + 0x3c) == 0)) {
      sljit_emit_op2(piVar4,0x40,1,0,2,0,0x7f,local_5c * 2);
      uVar17 = sljit_emit_cmp(piVar4,4,1,0,0xd,0);
      if (*piVar4 == 0) {
        lVar13 = *(long *)(piVar4 + 0x18);
        lVar14 = *(long *)(lVar13 + 8);
        uVar1 = lVar14 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar13 + 8) = uVar1;
          puVar16 = (undefined8 *)(lVar13 + 0x10 + lVar14);
        }
        else {
          puVar15 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar4 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar15 == (undefined8 *)0x0) {
            *piVar4 = 2;
            goto LAB_0012051e;
          }
          *puVar15 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar15;
          puVar16 = puVar15 + 2;
          puVar15[1] = 0x10;
        }
        uVar25 = *(undefined8 *)(pauVar11[1] + 8);
        *puVar16 = uVar17;
        puVar16[1] = uVar25;
        *(undefined8 **)(pauVar11[1] + 8) = puVar16;
      }
LAB_0012051e:
      sljit_emit_op1(piVar4,0x20,iVar9,uVar10,0x7f,local_5c);
      lVar13 = sljit_emit_label(piVar4);
      compile_char1_matchingpath(param_1,local_62,uVar12,pauVar11[1] + 8,0);
    }
    else {
      sljit_emit_op1(piVar4,0x20,iVar9,uVar10,0x7f,local_5c);
      lVar13 = sljit_emit_label(piVar4);
      compile_char1_matchingpath(param_1,local_62,uVar12,pauVar11[1] + 8,1);
    }
    sljit_emit_op2(piVar4,0x242,iVar9,uVar10,iVar9,uVar10,0x7f,1);
    lVar14 = sljit_emit_jump(piVar4,1);
    if ((lVar14 != 0) && (lVar13 != 0)) {
      *(long *)(lVar14 + 0x18) = lVar13;
      *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  if (uVar22 == 2) {
    sljit_emit_op1(piVar4,0x20,1,0,0x8e,(long)local_a0);
    sljit_emit_op1(piVar4,0x20,4,0,0x8e,(long)(local_a0 + 8));
    sljit_emit_op2(piVar4,0x42,1,0,1,0,4,0);
    sljit_emit_op2(piVar4,0x42,4,0,2,0,4,0);
    uVar17 = sljit_emit_cmp(piVar4,5,4,0,1,0);
    if (*piVar4 == 0) {
      lVar13 = *(long *)(piVar4 + 0x18);
      lVar14 = *(long *)(lVar13 + 8);
      uVar1 = lVar14 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar13 + 8) = uVar1;
        puVar16 = (undefined8 *)(lVar13 + 0x10 + lVar14);
      }
      else {
        puVar15 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar4 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar15 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_00120359;
        }
        *puVar15 = *(undefined8 *)(piVar4 + 0x18);
        *(undefined8 **)(piVar4 + 0x18) = puVar15;
        puVar16 = puVar15 + 2;
        puVar15[1] = 0x10;
      }
      uVar25 = *(undefined8 *)(pauVar11[1] + 8);
      *puVar16 = uVar17;
      puVar16[1] = uVar25;
      *(undefined8 **)(pauVar11[1] + 8) = puVar16;
    }
LAB_00120359:
    sljit_emit_op1(piVar4,0x20,0x8e,(long)local_a0,2,0);
    sljit_emit_op1(piVar4,0x20,0x8e,(long)(local_a0 + 8),2,0);
  }
  psVar23 = local_58;
  iVar7 = local_60;
  switch(local_64) {
  case 0x21:
  case 0x27:
    if ((local_62 == 0x11) || (local_62 == 0x16)) {
      uVar17 = *param_1;
      uVar25 = 0x10;
      sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f);
      uVar17 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
      piVar5 = (int *)*param_1;
      if ((*piVar5 == 0) &&
         (puVar16 = (undefined8 *)ensure_abuf(piVar5,0x18,uVar25), puVar16 != (undefined8 *)0x0)) {
        *puVar16 = uVar17;
        uVar25 = sljit_emit_label(piVar5);
        uVar17 = param_1[0x26];
        puVar16[1] = uVar25;
        puVar16[2] = uVar17;
        param_1[0x26] = puVar16;
      }
      sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
      sljit_emit_op1(piVar4,0x20,0x8c,8,0x7f,0);
      if (local_64 == 0x27) {
        sljit_emit_op1(piVar4,0x20,0x8e,0x10,0x7f,local_60);
        lVar13 = sljit_emit_label(piVar4);
        compile_char1_matchingpath(param_1,local_62,uVar12,pauVar11 + 3,1);
        sljit_emit_op1(piVar4,0x20,1,0,0x8e,0x10);
        if (*piVar4 == 0) {
          piVar4[0x26] = 0;
          emit_non_cum_binary(piVar4,0x2d2b2928,1,0,1,0,0x7f,1);
        }
        lVar14 = sljit_emit_jump(piVar4,0);
        sljit_emit_op1(piVar4,0x20,0x8e,0x10,1,0);
      }
      else {
        lVar13 = sljit_emit_label(piVar4);
        lVar14 = 0;
        compile_char1_matchingpath(param_1,local_62,uVar12,pauVar11 + 3,1);
      }
      uVar12 = *param_1;
      sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,8);
      uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
      piVar5 = (int *)*param_1;
      if ((*piVar5 == 0) &&
         (puVar16 = (undefined8 *)ensure_abuf(piVar5,0x18), puVar16 != (undefined8 *)0x0)) {
        *puVar16 = uVar12;
        uVar17 = sljit_emit_label(piVar5);
        uVar12 = param_1[0x26];
        puVar16[1] = uVar17;
        puVar16[2] = uVar12;
        param_1[0x26] = puVar16;
      }
      sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
      lVar18 = sljit_emit_jump(piVar4,0x24);
      if ((lVar13 != 0) && (lVar18 != 0)) {
        *(long *)(lVar18 + 0x18) = lVar13;
        *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if ((lVar14 != 0) && (lVar13 = sljit_emit_label(piVar4), lVar13 != 0)) {
        *(long *)(lVar14 + 0x18) = lVar13;
        *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
      }
      goto LAB_0011f966;
    }
    if (local_62 == 0xd) {
      if (*(int *)((long)param_1 + 0x1e4) != 0) goto LAB_00120d68;
      if (local_64 == 0x21) {
        if (iVar3 == 0) {
          uVar12 = *param_1;
          uVar17 = 0x10;
          sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f);
          uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
          piVar5 = (int *)*param_1;
          if ((*piVar5 == 0) &&
             (puVar16 = (undefined8 *)ensure_abuf(piVar5,0x18,uVar17), puVar16 != (undefined8 *)0x0)
             ) {
            *puVar16 = uVar12;
            uVar17 = sljit_emit_label(piVar5);
            uVar12 = param_1[0x26];
            puVar16[1] = uVar17;
            puVar16[2] = uVar12;
            param_1[0x26] = puVar16;
          }
        }
        sljit_emit_op1(piVar4,0x20,local_9c,(long)iVar3,0xd,0);
        sljit_emit_op1(piVar4,0x20,local_9c,(long)local_78,2,0);
        sljit_emit_op1(piVar4,0x20,2,0,0xd,0);
        process_partial_match(param_1);
        if (local_a0 != 0) {
          sljit_emit_op1(piVar4,0x20,0x8e,(long)local_a0,0xd,0);
        }
      }
      else {
        if (*(int *)(param_1 + 0x3c) != 0) {
          sVar8 = *local_58;
          if (1 < (ushort)(sVar8 - 0x1dU)) goto LAB_0011fa8f;
          goto LAB_00121681;
        }
        if (iVar3 == 0) {
          uVar12 = *param_1;
          sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,0x10);
          uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
          piVar5 = (int *)*param_1;
          if ((*piVar5 == 0) &&
             (puVar16 = (undefined8 *)ensure_abuf(piVar5,0x18), puVar16 != (undefined8 *)0x0)) {
            *puVar16 = uVar12;
            uVar17 = sljit_emit_label(piVar5);
            uVar12 = param_1[0x26];
            puVar16[1] = uVar17;
            puVar16[2] = uVar12;
            param_1[0x26] = puVar16;
          }
        }
        sljit_emit_op1(piVar4,0x20,local_9c,(long)local_78,2,0);
        sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,local_60 * 2);
        if (*(int *)(param_1 + 0x14) == 1) {
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,2,0,0xd,0);
          }
          sljit_emit_select_isra_0(piVar4,4,2,0xd,0,2);
        }
        else {
          lVar13 = sljit_emit_cmp(piVar4,5,2,0,0xd,0);
          process_partial_match(param_1);
          lVar14 = sljit_emit_label(piVar4);
          if ((lVar13 != 0) && (lVar14 != 0)) {
            *(long *)(lVar13 + 0x18) = lVar14;
            *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        sljit_emit_op1(piVar4,0x20,local_9c,(long)iVar3,2,0);
        if (local_a0 != 0) {
          sljit_emit_op1(piVar4,0x20,0x8e,(long)local_a0,2,0);
        }
      }
      uVar12 = sljit_emit_label(piVar4);
      *(undefined8 *)(pauVar11[2] + 8) = uVar12;
      break;
    }
    if ((ushort)(local_62 - 0x1dU) < 2) {
LAB_0011fa8f:
      if (iVar3 == 0) {
        uVar17 = *param_1;
        uVar25 = 0x10;
        sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f);
        uVar17 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
        piVar5 = (int *)*param_1;
        if ((*piVar5 == 0) &&
           (puVar16 = (undefined8 *)ensure_abuf(piVar5,0x18,uVar25), puVar16 != (undefined8 *)0x0))
        {
          *puVar16 = uVar17;
          uVar25 = sljit_emit_label(piVar5);
          uVar17 = param_1[0x26];
          puVar16[1] = uVar25;
          puVar16[2] = uVar17;
          param_1[0x26] = puVar16;
        }
      }
      sljit_emit_op1(piVar4,0x20,local_9c,(long)local_78,2,0);
      lVar13 = (long)iVar3;
      if (*(int *)(param_1 + 0x3c) == 0) {
        if (local_64 != 0x27) goto LAB_00121273;
LAB_0011faf5:
        sljit_emit_op1(piVar4,0x20,iVar9,uVar10,0x7f,local_60);
        detect_partial_match(param_1,&local_50);
        local_c0 = sljit_emit_label(piVar4);
        compile_char1_matchingpath(param_1,local_62,uVar12,&local_48,0);
        if (*(int *)(param_1 + 0x3c) != 0) {
          sljit_emit_op1(piVar4,0x20,local_9c,lVar13,2,0);
        }
        sljit_emit_op2(piVar4,0x242,iVar9,uVar10,iVar9,uVar10,0x7f,1);
        lVar14 = sljit_emit_jump(piVar4,0);
        if (*piVar4 == 0) {
          lVar18 = *(long *)(piVar4 + 0x18);
          lVar19 = *(long *)(lVar18 + 8);
          uVar1 = lVar19 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar18 + 8) = uVar1;
            plVar21 = (long *)(lVar18 + 0x10 + lVar19);
          }
          else {
            puVar16 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
            if (puVar16 == (undefined8 *)0x0) {
              *piVar4 = 2;
              goto LAB_0011fc20;
            }
            *puVar16 = *(undefined8 *)(piVar4 + 0x18);
            *(undefined8 **)(piVar4 + 0x18) = puVar16;
            plVar21 = puVar16 + 2;
            puVar16[1] = 0x10;
          }
          *plVar21 = lVar14;
          plVar21[1] = (long)local_50;
          local_50 = plVar21;
        }
      }
      else {
        if (local_64 != 0x21) {
          sljit_emit_op1(piVar4,0x20,local_9c,lVar13,2,0);
          goto LAB_0011faf5;
        }
        sljit_emit_op1(piVar4,0x20,3,0,2,0);
LAB_00121273:
        detect_partial_match(param_1,&local_50);
        local_c0 = sljit_emit_label(piVar4);
        compile_char1_matchingpath(param_1,local_62,uVar12,&local_48,0);
        if (*(int *)(param_1 + 0x3c) != 0) {
          sljit_emit_op1(piVar4,0x20,3,0,2,0);
        }
      }
LAB_0011fc20:
      detect_partial_match_to(param_1,local_c0);
      sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f);
      lVar14 = sljit_emit_label(piVar4);
      for (plVar21 = local_48; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
        lVar18 = *plVar21;
        if ((lVar18 != 0) && (lVar14 != 0)) {
          *(long *)(lVar18 + 0x18) = lVar14;
          *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      if (*(int *)(param_1 + 0x3c) == 0) {
        sljit_emit_op2(piVar4,0x42,2,0,2,0,0x7f,2);
        lVar14 = sljit_emit_label(piVar4);
        for (plVar21 = local_50; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
          lVar18 = *plVar21;
          if ((lVar18 != 0) && (lVar14 != 0)) {
            *(long *)(lVar18 + 0x18) = lVar14;
            *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        uVar12 = 2;
LAB_00121353:
        sljit_emit_op1(piVar4,0x20,local_9c,lVar13,uVar12,0);
      }
      else {
        lVar14 = sljit_emit_label(piVar4);
        for (plVar21 = local_50; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
          lVar18 = *plVar21;
          if ((lVar18 != 0) && (lVar14 != 0)) {
            *(long *)(lVar18 + 0x18) = lVar14;
            *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        if (local_64 == 0x21) {
          sljit_emit_op1(piVar4,0x20,2,0,3,0);
          uVar12 = 3;
          goto LAB_00121353;
        }
        sljit_emit_op1(piVar4,0x20,2,0,local_9c,lVar13);
      }
      psVar23 = local_58;
      if (local_a0 != 0) {
        sljit_emit_op1(piVar4,0x20,0x8e,(long)local_a0,2,0);
        psVar23 = local_58;
      }
    }
    else {
LAB_00120d68:
      sVar8 = *local_58;
      if (1 < (ushort)(sVar8 - 0x1dU)) goto LAB_0011fa8f;
      if (*(int *)(param_1 + 0x3c) != 0) {
LAB_00121681:
        uVar2 = local_58[1];
        if ((uVar2 & 0xfc00) != 0xd800) {
          if (sVar8 == 0x1e) goto LAB_001216b0;
          goto LAB_00120da0;
        }
        goto LAB_0011fa8f;
      }
      uVar2 = local_58[1];
      if (sVar8 == 0x1e) {
        if (*(int *)(param_1 + 0x3d) == 0) {
          if ((0xff < uVar2) || (*(byte *)(param_1[0x12] + (ulong)uVar2) == uVar2)) {
LAB_00121b16:
            uVar2 = local_58[1];
            goto LAB_00120da0;
          }
        }
        else {
LAB_001216b0:
          uVar22 = (uint)uVar2;
          if (uVar22 < 0x80) {
            bVar24 = *(byte *)(param_1[0x12] + (ulong)uVar22) != uVar22;
          }
          else {
            bVar24 = *(int *)(&DAT_0013a01c +
                             (ulong)*(ushort *)
                                     (&_pcre2_ucd_stage2_16 +
                                     (long)(int)((uVar22 & 0x7f) +
                                                (uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_16 +
                                                       (long)((int)uVar22 >> 7) * 2) * 0x80) * 2) *
                             0xc) != 0;
          }
          if (!bVar24) goto LAB_00121b16;
        }
        uVar22 = char_get_othercase_bit(param_1,local_58 + 1);
        if (uVar22 == 0) goto LAB_0011fa8f;
        uVar2 = psVar23[1];
        if (((uVar22 & 0x100) == 0) || (uVar6 = uVar22 & 0xff, uVar22 = uVar6 << 8, uVar6 != 0)) {
          local_98 = (ushort)uVar22;
          uVar2 = uVar2 | local_98;
        }
      }
      else {
LAB_00120da0:
        uVar22 = 0;
      }
      psVar23 = psVar23 + 2;
      *(undefined4 *)(pauVar11[3] + 8) = 1;
      *(ushort *)(pauVar11[3] + 4) = uVar2;
      *(uint *)pauVar11[3] = uVar22;
      local_58 = psVar23;
      if (local_64 == 0x27) {
        sljit_emit_op1(piVar4,0x20,iVar9,uVar10,0x7f,local_60 + 1);
        local_80 = sljit_emit_jump(piVar4,0x24);
        local_70 = sljit_emit_label(piVar4);
        sljit_emit_op2(piVar4,0x242,iVar9,uVar10,iVar9,uVar10,0x7f);
        uVar17 = sljit_emit_jump(piVar4,0);
        if (*piVar4 == 0) {
          lVar13 = *(long *)(piVar4 + 0x18);
          lVar14 = *(long *)(lVar13 + 8);
          uVar1 = lVar14 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar13 + 8) = uVar1;
            puVar16 = (undefined8 *)(lVar13 + 0x10 + lVar14);
          }
          else {
            puVar15 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
            if (puVar15 == (undefined8 *)0x0) {
              *piVar4 = 2;
              goto LAB_00120df8;
            }
            *puVar15 = *(undefined8 *)(piVar4 + 0x18);
            *(undefined8 **)(piVar4 + 0x18) = puVar15;
            puVar16 = puVar15 + 2;
            puVar15[1] = 0x10;
          }
          uVar25 = *(undefined8 *)(pauVar11[1] + 8);
          *puVar16 = uVar17;
          puVar16[1] = uVar25;
          *(undefined8 **)(pauVar11[1] + 8) = puVar16;
        }
      }
      else {
        local_80 = sljit_emit_jump(piVar4,0x24);
        local_70 = sljit_emit_label(piVar4);
      }
LAB_00120df8:
      compile_char1_matchingpath(param_1,local_62,uVar12,pauVar11[1] + 8,0);
      if (local_a0 != 0) {
        sljit_emit_op1(piVar4,0x20,0x8e,(long)local_a0,2,0);
      }
      lVar13 = sljit_emit_label(piVar4);
      if ((local_80 != 0) && (lVar13 != 0)) {
        *(long *)(local_80 + 0x18) = lVar13;
        *(ulong *)(local_80 + 0x10) = *(ulong *)(local_80 + 0x10) & 0xfffffffffffffffd | 1;
      }
      detect_partial_match(param_1,pauVar11[1] + 8);
      sljit_emit_op1(piVar4,0x23,1,0,0x82,0);
      if ((uVar22 != 0) && (*piVar4 == 0)) {
        piVar4[0x26] = 0;
        emit_cum_binary(piVar4,0xd0b0908,1,0,1,0,0x7f,uVar22);
      }
      lVar13 = sljit_emit_cmp(piVar4,1,1,0,0x7f,uVar2);
      if ((local_70 != 0) && (lVar13 != 0)) {
        *(long *)(lVar13 + 0x18) = local_70;
        *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (iVar3 == 0) {
        uVar17 = *param_1;
        sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f,0x10);
        uVar17 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
        piVar5 = (int *)*param_1;
        if ((*piVar5 == 0) &&
           (puVar16 = (undefined8 *)ensure_abuf(piVar5,0x18), puVar16 != (undefined8 *)0x0)) {
          *puVar16 = uVar17;
          uVar25 = sljit_emit_label(piVar5);
          uVar17 = param_1[0x26];
          puVar16[1] = uVar25;
          puVar16[2] = uVar17;
          param_1[0x26] = puVar16;
        }
      }
      lVar13 = (long)iVar3;
      sljit_emit_op1(piVar4,0x20,local_9c,lVar13,2,0);
      sljit_emit_op1(piVar4,0x20,local_9c,(long)local_78,2,0);
      if (local_64 == 0x27) {
        uVar17 = 1;
        sljit_emit_op2(piVar4,0x242,iVar9,uVar10,iVar9,uVar10,0x7f);
        lVar14 = sljit_emit_jump(piVar4,0);
        if (*piVar4 == 0) {
          lVar18 = *(long *)(piVar4 + 0x18);
          lVar19 = *(long *)(lVar18 + 8);
          uVar1 = lVar19 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar18 + 8) = uVar1;
            plVar21 = (long *)(lVar18 + 0x10 + lVar19);
          }
          else {
            puVar16 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2],lVar18,uVar1,uVar17);
            if (puVar16 == (undefined8 *)0x0) {
              *piVar4 = 2;
              goto LAB_00120f3b;
            }
            *puVar16 = *(undefined8 *)(piVar4 + 0x18);
            *(undefined8 **)(piVar4 + 0x18) = puVar16;
            plVar21 = puVar16 + 2;
            puVar16[1] = 0x10;
          }
          *plVar21 = lVar14;
          plVar21[1] = (long)local_50;
          local_50 = plVar21;
        }
      }
LAB_00120f3b:
      lVar14 = sljit_emit_label(piVar4);
      compile_char1_matchingpath(param_1,local_62,uVar12,&local_50,0);
      if (local_a0 != 0) {
        sljit_emit_op1(piVar4,0x20,0x8e,(long)local_a0,2,0);
      }
      detect_partial_match(param_1,&local_50);
      sljit_emit_op1(piVar4,0x23,1,0,0x82,0);
      if ((uVar22 != 0) && (*piVar4 == 0)) {
        piVar4[0x26] = 0;
        emit_cum_binary(piVar4,0xd0b0908,1,0,1,0,0x7f,uVar22);
      }
      if (local_64 == 0x21) {
        lVar18 = sljit_emit_cmp(piVar4,1,1,0,0x7f,uVar2);
        if ((lVar18 != 0) && (lVar14 != 0)) {
          *(long *)(lVar18 + 0x18) = lVar14;
          *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
        }
        sljit_emit_op1(piVar4,0x20,local_9c,lVar13,2,0);
        lVar18 = sljit_emit_jump(piVar4,0x24);
      }
      else {
        lVar18 = sljit_emit_cmp(piVar4,1,1,0,0x7f);
        sljit_emit_op1(piVar4,0x20,local_9c,lVar13,2,0);
        lVar19 = sljit_emit_label(piVar4);
        if ((lVar18 != 0) && (lVar19 != 0)) {
          *(long *)(lVar18 + 0x18) = lVar19;
          *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
        }
        sljit_emit_op2(piVar4,0x242,iVar9,uVar10,iVar9,uVar10,0x7f,1);
        lVar18 = sljit_emit_jump(piVar4,1);
      }
      if ((lVar18 != 0) && (lVar14 != 0)) {
        *(long *)(lVar18 + 0x18) = lVar14;
        *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar14 = sljit_emit_label(piVar4);
      for (plVar21 = local_50; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
        lVar18 = *plVar21;
        if ((lVar18 != 0) && (lVar14 != 0)) {
          *(long *)(lVar18 + 0x18) = lVar14;
          *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      sljit_emit_op2(piVar4,0x40,2,0,local_9c,lVar13,0x7f,2);
      sljit_emit_op1(piVar4,0x20,local_9c,lVar13,2,0);
    }
    uVar12 = sljit_emit_label(piVar4);
    *(undefined8 *)(pauVar11[2] + 8) = uVar12;
    break;
  case 0x22:
    if (iVar3 == 0) {
      uVar12 = *param_1;
      sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,8);
      uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
      piVar5 = (int *)*param_1;
      if ((*piVar5 == 0) &&
         (puVar16 = (undefined8 *)ensure_abuf(piVar5,0x18), puVar16 != (undefined8 *)0x0)) {
        *puVar16 = uVar12;
        uVar17 = sljit_emit_label(piVar5);
        uVar12 = param_1[0x26];
        puVar16[1] = uVar17;
        puVar16[2] = uVar12;
        param_1[0x26] = puVar16;
      }
    }
    sljit_emit_op1(piVar4,0x20,local_9c,(long)iVar3,2,0);
    uVar12 = sljit_emit_label(piVar4);
    *(undefined8 *)(pauVar11[2] + 8) = uVar12;
    psVar23 = local_58;
joined_r0x00121232:
    if (local_a0 != 0) {
LAB_0011fd93:
      sljit_emit_op1(piVar4,0x20,0x8e,(long)local_a0,2,0);
    }
    break;
  case 0x25:
  case 0x26:
    if (iVar3 == 0) {
      uVar17 = *param_1;
      uVar25 = 8;
      sljit_emit_op2(uVar17,0x42,0xc,0,0xc,0,0x7f);
      uVar17 = sljit_emit_cmp(uVar17,2,0xc,0,0xb,0);
      piVar5 = (int *)*param_1;
      if ((*piVar5 == 0) &&
         (puVar16 = (undefined8 *)ensure_abuf(piVar5,0x18,uVar25), puVar16 != (undefined8 *)0x0)) {
        *puVar16 = uVar17;
        uVar25 = sljit_emit_label(piVar5);
        uVar17 = param_1[0x26];
        puVar16[1] = uVar25;
        puVar16[2] = uVar17;
        param_1[0x26] = puVar16;
      }
    }
    sljit_emit_op1(piVar4,0x20,local_9c,(long)iVar3,2,0);
    if (local_64 == 0x25) {
      compile_char1_matchingpath(param_1,local_62,uVar12,pauVar11 + 3,1);
    }
LAB_0011f966:
    uVar12 = sljit_emit_label(piVar4);
    *(undefined8 *)(pauVar11[2] + 8) = uVar12;
  default:
    psVar23 = local_58;
    break;
  case 0x28:
    if (iVar3 == 0) {
      uVar12 = *param_1;
      sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f);
      uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
      piVar5 = (int *)*param_1;
      if ((*piVar5 == 0) &&
         (puVar16 = (undefined8 *)ensure_abuf(piVar5,0x18), puVar16 != (undefined8 *)0x0)) {
        *puVar16 = uVar12;
        uVar17 = sljit_emit_label(piVar5);
        uVar12 = param_1[0x26];
        puVar16[1] = uVar17;
        puVar16[2] = uVar12;
        param_1[0x26] = puVar16;
      }
    }
    sljit_emit_op1(piVar4,0x20,local_9c,(long)iVar3,2,0);
    sljit_emit_op1(piVar4,0x20,local_9c,(long)local_78,0x7f,local_60 + 1);
    uVar12 = sljit_emit_label(piVar4);
    *(undefined8 *)(pauVar11[2] + 8) = uVar12;
    psVar23 = local_58;
    break;
  case 0x2a:
    if (local_62 == 0xd) {
      if (*(int *)((long)param_1 + 0x1e4) != 0) goto LAB_00120097;
      sljit_emit_op1(piVar4,0x20,2,0,0xd,0);
      process_partial_match(param_1);
      if (local_a0 != 0) {
        sljit_emit_op1(piVar4,0x20,0x8e,(long)local_a0,0xd,0);
      }
    }
    else {
      if (local_62 != 0x16) {
LAB_00120097:
        if (*(int *)(param_1 + 0x3c) == 0) {
          detect_partial_match(param_1,&local_50);
          uVar17 = sljit_emit_label(piVar4);
          compile_char1_matchingpath(param_1,local_62,uVar12,&local_48,0);
          detect_partial_match_to(param_1,uVar17);
          sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,2);
          lVar13 = sljit_emit_label(piVar4);
          for (plVar21 = local_48; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
            lVar14 = *plVar21;
            if ((lVar14 != 0) && (lVar13 != 0)) {
              *(long *)(lVar14 + 0x18) = lVar13;
              *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          sljit_emit_op2(piVar4,0x42,2,0,2,0,0x7f,2);
          lVar13 = sljit_emit_label(piVar4);
          for (plVar21 = local_50; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
            lVar14 = *plVar21;
            if ((lVar14 != 0) && (lVar13 != 0)) {
              *(long *)(lVar14 + 0x18) = lVar13;
              *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          goto joined_r0x00121232;
        }
      }
      sljit_emit_op1(piVar4,0x20,iVar9,uVar10,2,0);
      detect_partial_match(param_1,&local_50);
      uVar17 = sljit_emit_label(piVar4);
      compile_char1_matchingpath(param_1,local_62,uVar12,&local_50,0);
      sljit_emit_op1(piVar4,0x20,iVar9,uVar10,2,0);
      detect_partial_match_to(param_1,uVar17);
      lVar13 = sljit_emit_label(piVar4);
      for (plVar21 = local_50; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
        lVar14 = *plVar21;
        if ((lVar14 != 0) && (lVar13 != 0)) {
          *(long *)(lVar14 + 0x18) = lVar13;
          *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      sljit_emit_op1(piVar4,0x20,2,0,iVar9,uVar10);
      if (local_a0 != 0) {
        if (iVar9 != 3) goto LAB_0011fd93;
        sljit_emit_op1(piVar4,0x20,0x8e,(long)local_a0,3,0);
      }
    }
    break;
  case 0x2c:
    sljit_emit_op1(piVar4,0x20,iVar9,uVar10,2,0);
    compile_char1_matchingpath(param_1,local_62,uVar12,&local_50,1);
    sljit_emit_op1(piVar4,0x20,iVar9,uVar10,2,0);
    lVar13 = sljit_emit_label(piVar4);
    for (plVar21 = local_50; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
      lVar14 = *plVar21;
      if ((lVar14 != 0) && (lVar13 != 0)) {
        *(long *)(lVar14 + 0x18) = lVar13;
        *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    sljit_emit_op1(piVar4,0x20,2,0,iVar9,uVar10);
    psVar23 = local_58;
    break;
  case 0x2d:
    if (*(int *)(param_1 + 0x3c) == 0) {
      if (local_62 == 0xd) {
        sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,local_60 * 2);
        if (*(int *)(param_1 + 0x14) == 1) {
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            puVar20 = (undefined1 *)emit_x86_instruction(piVar4,1,2,0,0xd,0);
            if (puVar20 != (undefined1 *)0x0) {
              *puVar20 = 0x3b;
            }
          }
          sljit_emit_select_isra_0(piVar4,4,2,0xd,0,2);
        }
        else {
          lVar13 = sljit_emit_cmp(piVar4,5,2,0,0xd,0);
          process_partial_match(param_1);
          lVar14 = sljit_emit_label(piVar4);
          if ((lVar14 != 0) && (lVar13 != 0)) {
            *(long *)(lVar13 + 0x18) = lVar14;
            *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
      }
      else {
        sljit_emit_op1(piVar4,0x20,iVar9,uVar10,0x7f,local_60);
        detect_partial_match(param_1,&local_50);
        uVar17 = sljit_emit_label(piVar4);
        compile_char1_matchingpath(param_1,local_62,uVar12,&local_48,0);
        sljit_emit_op2(piVar4,0x242,iVar9,uVar10,iVar9,uVar10,0x7f,1);
        lVar13 = sljit_emit_jump(piVar4,0);
        if (*piVar4 == 0) {
          lVar14 = *(long *)(piVar4 + 0x18);
          lVar18 = *(long *)(lVar14 + 8);
          uVar1 = lVar18 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar14 + 8) = uVar1;
            plVar21 = (long *)(lVar14 + 0x10 + lVar18);
          }
          else {
            puVar16 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
            if (puVar16 == (undefined8 *)0x0) {
              *piVar4 = 2;
              goto LAB_0011fec3;
            }
            *puVar16 = *(undefined8 *)(piVar4 + 0x18);
            *(undefined8 **)(piVar4 + 0x18) = puVar16;
            plVar21 = puVar16 + 2;
            puVar16[1] = 0x10;
          }
          *plVar21 = lVar13;
          plVar21[1] = (long)local_50;
          local_50 = plVar21;
        }
LAB_0011fec3:
        detect_partial_match_to(param_1,uVar17);
        sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,2);
        lVar13 = sljit_emit_label(piVar4);
        for (plVar21 = local_48; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
          lVar14 = *plVar21;
          if ((lVar14 != 0) && (lVar13 != 0)) {
            *(long *)(lVar14 + 0x18) = lVar13;
            *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        sljit_emit_op2(piVar4,0x42,2,0,2,0,0x7f,2);
        lVar13 = sljit_emit_label(piVar4);
        for (plVar21 = local_50; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
          lVar14 = *plVar21;
          if ((lVar14 != 0) && (lVar13 != 0)) {
            *(long *)(lVar14 + 0x18) = lVar13;
            *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
      }
    }
    else {
      sljit_emit_op1(piVar4,0x20,0x8e,0x18,2,0);
      sljit_emit_op1(piVar4,0x20,iVar9,uVar10,0x7f,iVar7);
      detect_partial_match(param_1,&local_50);
      uVar17 = sljit_emit_label(piVar4);
      compile_char1_matchingpath(param_1,local_62,uVar12,&local_50,0);
      sljit_emit_op1(piVar4,0x20,0x8e,0x18,2,0);
      sljit_emit_op2(piVar4,0x242,iVar9,uVar10,iVar9,uVar10,0x7f,1);
      lVar13 = sljit_emit_jump(piVar4,0);
      if (*piVar4 == 0) {
        lVar14 = *(long *)(piVar4 + 0x18);
        lVar18 = *(long *)(lVar14 + 8);
        uVar1 = lVar18 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar14 + 8) = uVar1;
          plVar21 = (long *)(lVar14 + 0x10 + lVar18);
        }
        else {
          puVar16 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar4 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
          if (puVar16 == (undefined8 *)0x0) {
            *piVar4 = 2;
            goto LAB_00120b09;
          }
          *puVar16 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar16;
          plVar21 = puVar16 + 2;
          puVar16[1] = 0x10;
        }
        *plVar21 = lVar13;
        plVar21[1] = (long)local_50;
        local_50 = plVar21;
      }
LAB_00120b09:
      detect_partial_match_to(param_1,uVar17);
      lVar13 = sljit_emit_label(piVar4);
      for (plVar21 = local_50; plVar21 != (long *)0x0; plVar21 = (long *)plVar21[1]) {
        lVar14 = *plVar21;
        if ((lVar14 != 0) && (lVar13 != 0)) {
          *(long *)(lVar14 + 0x18) = lVar13;
          *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      sljit_emit_op1(piVar4,0x20,2,0,0x8e,0x18);
    }
  }
  piVar4 = (int *)*param_1;
  if (*piVar4 == 0) {
    piVar4[0x26] = 0;
    emit_non_cum_binary(piVar4,0x2d2b2928,10,0,10,0,0x7f,1);
  }
  uVar12 = sljit_emit_jump(piVar4,0);
  if (*piVar4 == 0) {
    lVar13 = *(long *)(piVar4 + 0x18);
    lVar14 = *(long *)(lVar13 + 8);
    uVar1 = lVar14 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar13 + 8) = uVar1;
      puVar16 = (undefined8 *)(lVar13 + 0x10 + lVar14);
    }
    else {
      puVar15 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar4 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar15 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_0011f8dd;
      }
      *puVar15 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar15;
      puVar16 = puVar15 + 2;
      puVar15[1] = 0x10;
    }
    uVar17 = param_1[0x2f];
    *puVar16 = uVar12;
    puVar16[1] = uVar17;
    param_1[0x2f] = puVar16;
  }
LAB_0011f8dd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return psVar23;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */

void compile_matchingpath(undefined8 *param_1,ushort *param_2,ushort *param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 (*pauVar21) [16];
  long *plVar22;
  undefined1 (*pauVar23) [16];
  int iVar24;
  short *psVar25;
  int iVar26;
  ushort *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined1 auVar29 [16];
  uint local_b8;
  undefined8 local_a0;
  int local_90;
  int local_8c;
  ushort *local_88;
  int local_80;
  int local_78;
  int local_68;
  int local_44;
  long local_40;
  
  iVar24 = *(int *)((long)param_1 + 0xb4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)*param_1;
  local_a0 = 0;
  if ((iVar24 != 0) &&
     (iVar24 = 0, *(char *)(param_1[6] + ((long)param_2 - param_1[2] >> 1)) != '\0')) {
    local_a0 = param_1[7];
    if ((*piVar2 == 0) && (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar2,0x48), *piVar2 == 0))
    {
      *pauVar13 = (undefined1  [16])0x0;
      pauVar13[1] = (undefined1  [16])0x0;
      pauVar13[2] = (undefined1  [16])0x0;
      pauVar13[3] = (undefined1  [16])0x0;
      *(undefined8 *)pauVar13[4] = 0;
      *(undefined8 *)*pauVar13 = *(undefined8 *)(param_4 + 0x10);
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
      param_1[7] = pauVar13;
      *(undefined2 **)pauVar13[2] = &then_trap_opcode;
      *(long *)pauVar13[3] = (long)param_2 - param_1[2] >> 1;
      iVar10 = get_framesize(param_1,param_2,param_3,0,&local_44);
      iVar24 = *(int *)((long)param_1 + 100);
      *(int *)pauVar13[4] = iVar10;
      iVar9 = 0;
      if (-1 < iVar10) {
        iVar9 = iVar10;
      }
      iVar10 = (iVar9 + 3) * 8;
      sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)iVar24);
      uVar15 = *param_1;
      uVar17 = 0x7f;
      sljit_emit_op2(uVar15,0x42,0xc,0,0xc,0,0x7f,(long)iVar10);
      auVar29 = sljit_emit_cmp(uVar15,2,0xc,0,0xb,0);
      piVar3 = (int *)*param_1;
      if ((*piVar3 == 0) &&
         (puVar16 = (undefined8 *)ensure_abuf(piVar3,0x18,auVar29._8_8_,uVar17),
         puVar16 != (undefined8 *)0x0)) {
        *puVar16 = auVar29._0_8_;
        uVar17 = sljit_emit_label(piVar3);
        uVar15 = param_1[0x26];
        puVar16[1] = uVar17;
        puVar16[2] = uVar15;
        param_1[0x26] = puVar16;
      }
      if (iVar9 + 3 == 3) {
        sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0xc,0);
      }
      else {
        sljit_emit_op2(piVar2,0x40,0x8e,(long)*(int *)((long)param_1 + 100),0xc,0,0x7f,
                       (long)iVar9 << 3);
      }
      sljit_emit_op1(piVar2,0x20,0x8c,(long)(iVar10 + -8),0x7f,*(undefined8 *)pauVar13[3]);
      sljit_emit_op1(piVar2,0x20,0x8c,(long)(iVar10 + -0x10),0x7f,1);
      sljit_emit_op1(piVar2,0x20,0x8c,(long)(iVar10 + -0x18),4,0);
      if (-1 < *(int *)pauVar13[4]) {
        init_frame_isra_0(param_1,param_2,param_3,*(int *)pauVar13[4] + -1);
      }
    }
    iVar24 = 1;
  }
joined_r0x00121dfb:
  do {
    puVar27 = param_2;
    if (param_3 <= puVar27) {
      if (((iVar24 != 0) && (*piVar2 == 0)) &&
         (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar2,0x48), *piVar2 == 0)) {
        *(undefined8 *)pauVar13[4] = 0;
        pauVar13[2] = (undefined1  [16])0x0;
        *pauVar13 = (undefined1  [16])0x0;
        pauVar13[1] = (undefined1  [16])0x0;
        pauVar13[3] = (undefined1  [16])0x0;
        *(undefined8 *)*pauVar13 = *(undefined8 *)(param_4 + 0x10);
        uVar15 = param_1[7];
        *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
        *(undefined2 **)pauVar13[2] = &then_trap_opcode;
        *(undefined8 *)(pauVar13[2] + 8) = uVar15;
        param_1[7] = local_a0;
      }
      goto switchD_00121e2b_caseD_62;
    }
    uVar8 = *puVar27;
    if (0x77 < uVar8) {
      if (uVar8 < 0x91) {
        if (uVar8 < 0x7f) goto switchD_00121e2b_caseD_62;
        uVar12 = 1L << ((char)uVar8 + 0x81U & 0x3f);
        if ((uVar12 & 0x2b5f0) == 0) {
          if ((uVar12 & 0x14a00) != 0) goto switchD_00121eec_caseD_99;
          if ((((uVar12 & 0xf) != 0) && (*piVar2 == 0)) &&
             (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar2,0x40), *piVar2 == 0)) {
            *pauVar13 = (undefined1  [16])0x0;
            pauVar13[1] = (undefined1  [16])0x0;
            pauVar13[2] = (undefined1  [16])0x0;
            pauVar13[3] = (undefined1  [16])0x0;
            uVar15 = *(undefined8 *)(param_4 + 0x10);
            *(ushort **)pauVar13[2] = puVar27;
            *(undefined8 *)*pauVar13 = uVar15;
            *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
            goto LAB_00121f78;
          }
          goto switchD_00121e2b_caseD_62;
        }
      }
      else {
        switch(uVar8) {
        case 0x97:
          if (puVar27[1] < 0x83) {
            if ((*piVar2 == 0) &&
               (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar2,0x40), *piVar2 == 0)) {
              *pauVar13 = (undefined1  [16])0x0;
              pauVar13[1] = (undefined1  [16])0x0;
              pauVar13[2] = (undefined1  [16])0x0;
              pauVar13[3] = (undefined1  [16])0x0;
              uVar15 = *(undefined8 *)(param_4 + 0x10);
              *(ushort **)pauVar13[2] = puVar27;
              *(undefined8 *)*pauVar13 = uVar15;
              *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
LAB_00121f78:
              param_2 = (ushort *)compile_assert_matchingpath(param_1,puVar27);
              goto LAB_00121e58;
            }
            goto switchD_00121e2b_caseD_62;
          }
          break;
        case 0x98:
          if ((*piVar2 != 0) ||
             (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar2,0x30), *piVar2 != 0))
          goto switchD_00121e2b_caseD_62;
          *pauVar13 = (undefined1  [16])0x0;
          pauVar13[1] = (undefined1  [16])0x0;
          pauVar13[2] = (undefined1  [16])0x0;
          uVar15 = *(undefined8 *)(param_4 + 0x10);
          *(ushort **)pauVar13[2] = puVar27;
          puVar27 = puVar27 + 1;
          *(undefined8 *)*pauVar13 = uVar15;
          *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
          do {
            puVar27 = puVar27 + puVar27[1];
          } while (*puVar27 == 0x78);
          uVar15 = *param_1;
          if (*puVar27 == 0x7b) {
            uVar17 = 0x10;
            sljit_emit_op2(uVar15,0x42,0xc,0,0xc,0,0x7f);
            uVar15 = sljit_emit_cmp(uVar15,2,0xc,0,0xb);
            piVar3 = (int *)*param_1;
            if ((*piVar3 == 0) &&
               (puVar16 = (undefined8 *)ensure_abuf(piVar3,0x18,uVar17),
               puVar16 != (undefined8 *)0x0)) {
              *puVar16 = uVar15;
              uVar17 = sljit_emit_label(piVar3);
              uVar15 = param_1[0x26];
              puVar16[1] = uVar17;
              puVar16[2] = uVar15;
              param_1[0x26] = puVar16;
            }
            sljit_emit_op1(piVar2,0x20,0x8c,0,0x7f);
            sljit_emit_op1(piVar2,0x20,0x8c,8,2);
          }
          else {
            sljit_emit_op2(uVar15,0x42,0xc,0,0xc,0,0x7f,8);
            uVar15 = sljit_emit_cmp(uVar15,2,0xc,0,0xb);
            piVar3 = (int *)*param_1;
            if ((*piVar3 == 0) &&
               (puVar16 = (undefined8 *)ensure_abuf(piVar3,0x18), puVar16 != (undefined8 *)0x0)) {
              *puVar16 = uVar15;
              uVar17 = sljit_emit_label(piVar3);
              uVar15 = param_1[0x26];
              puVar16[1] = uVar17;
              puVar16[2] = uVar15;
              param_1[0x26] = puVar16;
            }
            sljit_emit_op1(piVar2,0x20,0x8c,0,2);
          }
          uVar15 = sljit_emit_label(piVar2);
          *(undefined8 *)(pauVar13[2] + 8) = uVar15;
          piVar3 = (int *)*param_1;
          if (*piVar3 == 0) {
            piVar3[0x26] = 0;
            emit_non_cum_binary(piVar3,0x2d2b2928,10,0,10,0,0x7f,1);
          }
          uVar15 = sljit_emit_jump(piVar3,0);
          if (*piVar3 == 0) {
            lVar18 = *(long *)(piVar3 + 0x18);
            lVar19 = *(long *)(lVar18 + 8);
            uVar12 = lVar19 + 0x10;
            if (uVar12 < 0xff1) {
              *(ulong *)(lVar18 + 8) = uVar12;
              puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
            }
            else {
              puVar20 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar20 == (undefined8 *)0x0) {
                *piVar3 = 2;
                goto LAB_00122dc4;
              }
              *puVar20 = *(undefined8 *)(piVar3 + 0x18);
              *(undefined8 **)(piVar3 + 0x18) = puVar20;
              puVar16 = puVar20 + 2;
              puVar20[1] = 0x10;
            }
            uVar17 = param_1[0x2f];
            *puVar16 = uVar15;
            puVar16[1] = uVar17;
            param_1[0x2f] = puVar16;
          }
LAB_00122dc4:
          param_2 = puVar27 + 2;
          goto joined_r0x00121dfb;
        case 0x99:
switchD_00121eec_caseD_99:
          piVar3 = (int *)*param_1;
          if ((*piVar3 != 0) ||
             (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar3,0x38), *piVar3 != 0))
          goto switchD_00121e2b_caseD_62;
          *(undefined8 *)pauVar13[3] = 0;
          *pauVar13 = (undefined1  [16])0x0;
          pauVar13[2] = (undefined1  [16])0x0;
          pauVar13[1] = (undefined1  [16])0x0;
          *(undefined8 *)*pauVar13 = *(undefined8 *)(param_4 + 0x10);
          uVar8 = *puVar27;
          *(ushort **)pauVar13[2] = puVar27;
          *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
          bVar28 = uVar8 == 0x99;
          if (bVar28) {
            uVar8 = puVar27[1];
            puVar27 = puVar27 + 1;
          }
          local_b8 = (uint)bVar28;
          iVar9 = *(int *)(param_1[3] + ((long)puVar27 - param_1[2] >> 1) * 4);
          *(int *)(pauVar13[2] + 8) = iVar9;
          local_78 = 0;
          if (uVar8 == 0x8d) {
LAB_00124020:
            local_88 = puVar27 + 2;
            local_8c = get_framesize(param_1,puVar27,0,0,&local_44);
            *(int *)(pauVar13[2] + 0xc) = local_8c;
            if (local_8c < 0) {
              iVar10 = 0;
              local_90 = 1;
              goto LAB_001238d5;
            }
            local_78 = 0;
            iVar10 = 0;
LAB_0012253b:
            iVar26 = local_44;
            local_68 = ((local_b8 ^ 1) + local_8c + 2) - (uint)(local_44 == 0);
            if (iVar10 == 0) {
              local_90 = local_68 + 1;
            }
            else {
              local_90 = local_68;
              local_68 = local_68 + -1;
            }
            uVar15 = *param_1;
            *(int *)pauVar13[3] = local_90;
            sljit_emit_op2(uVar15,0x42,0xc,0,0xc,0,0x7f,(long)(local_90 << 3));
            uVar15 = sljit_emit_cmp(uVar15,2,0xc,0,0xb,0);
            piVar4 = (int *)*param_1;
            if ((*piVar4 == 0) &&
               (puVar16 = (undefined8 *)ensure_abuf(piVar4,0x18), puVar16 != (undefined8 *)0x0)) {
              *puVar16 = uVar15;
              uVar17 = sljit_emit_label(piVar4);
              uVar15 = param_1[0x26];
              puVar16[1] = uVar17;
              puVar16[2] = uVar15;
              param_1[0x26] = puVar16;
            }
            lVar18 = (long)iVar9;
            sljit_emit_op1(piVar3,0x20,1,0,0x8e,lVar18);
            if (iVar26 == 0) {
              sljit_emit_op2(piVar3,0x40,0x8e,lVar18,0xc,0,0x7f,(long)local_90 * 8);
              if (local_b8 == 0) {
                sljit_emit_op1(piVar3,0x20,0x8c,0,0x7f);
                uVar17 = 8;
                uVar11 = 1;
              }
              else {
                uVar17 = 0;
                uVar11 = 0;
              }
            }
            else {
              sljit_emit_op1(piVar3,0x20,4,0,0x8e);
              sljit_emit_op2(piVar3,0x40,0x8e,lVar18,0xc,0,0x7f,(long)local_90 * 8);
              if (local_b8 == 0) {
                sljit_emit_op1(piVar3,0x20,0x8c,0,0x7f);
                uVar17 = 0x10;
                uVar15 = 8;
                uVar11 = 2;
              }
              else {
                uVar17 = 8;
                uVar15 = 0;
                uVar11 = local_b8;
              }
              sljit_emit_op1(piVar3,0x20,0x8c,uVar15,4);
            }
            if (iVar10 == 0) {
              sljit_emit_op1(piVar3,0x20,0x8c,uVar17,2);
              sljit_emit_op1(piVar3,0x20,0x8c,uVar11 * 8 + 8,1);
              init_frame_isra_0(param_1,puVar27,0);
            }
            else {
              sljit_emit_op1(piVar3,0x20,0x8c,uVar17,1);
              init_frame_isra_0(param_1,puVar27,0,local_68);
LAB_001226e2:
              sljit_emit_op1(piVar3,0x20,0x8e,(long)local_78,2);
            }
          }
          else {
            if (uVar8 < 0x8e) {
              if (uVar8 == 0x88) goto LAB_00124020;
              if (uVar8 == 0x8a) goto LAB_0012386d;
            }
            else if (uVar8 == 0x8f) {
LAB_0012386d:
              uVar11 = (uint)puVar27[2];
              local_88 = puVar27 + 3;
              local_78 = *(int *)(param_1 + 8) + uVar11 * 8;
              iVar10 = uVar11 * 2;
              local_8c = get_framesize(param_1,puVar27,0,0,&local_44);
              *(int *)(pauVar13[2] + 0xc) = local_8c;
              if (local_8c < 0) {
                if (uVar11 == 0) {
                  local_90 = 1;
                }
                else {
                  local_90 = 3 - (uint)(*(int *)(param_1 + 0xd) == 0);
                }
                goto LAB_001238d5;
              }
              goto LAB_0012253b;
            }
            local_8c = get_framesize(param_1,puVar27,0,0,&local_44);
            *(int *)(pauVar13[2] + 0xc) = local_8c;
            if (-1 < local_8c) {
              local_78 = 0;
              iVar10 = 0;
              local_88 = (ushort *)0x0;
              goto LAB_0012253b;
            }
            iVar10 = 0;
            local_88 = (ushort *)0x0;
            local_90 = 1;
LAB_001238d5:
            iVar26 = local_44;
            uVar15 = *param_1;
            local_90 = ((local_90 + 1) - (uint)(local_44 == 0)) + (uint)(local_b8 == 0);
            *(int *)pauVar13[3] = local_90;
            lVar18 = (long)(local_90 * 8);
            sljit_emit_op2(uVar15,0x42,0xc,0,0xc,0,0x7f);
            uVar15 = sljit_emit_cmp(uVar15,2,0xc,0,0xb,0);
            piVar4 = (int *)*param_1;
            if ((*piVar4 == 0) &&
               (puVar16 = (undefined8 *)ensure_abuf(piVar4,0x18,lVar18),
               puVar16 != (undefined8 *)0x0)) {
              *puVar16 = uVar15;
              uVar17 = sljit_emit_label(piVar4);
              uVar15 = param_1[0x26];
              puVar16[1] = uVar17;
              puVar16[2] = uVar15;
              param_1[0x26] = puVar16;
            }
            if (local_8c == -1) {
              sljit_emit_op1(piVar3,0x20,0x8e,(long)iVar9,0xc,0);
            }
            if (iVar10 != 0) {
              sljit_emit_op1(piVar3,0x20,1,0,0x8e,
                             (long)(iVar10 * 8 + *(int *)((long)param_1 + 0x44)));
              sljit_emit_op1(piVar3,0x20,4,0,0x8e,
                             (long)(iVar10 * 8 + 8 + *(int *)((long)param_1 + 0x44)));
              sljit_emit_op1(piVar3,0x20,0x8c,0,1,0);
              if (*(int *)(param_1 + 0xd) != 0) {
                sljit_emit_op1(piVar3,0x20,1,0,0x8e);
              }
              sljit_emit_op1(piVar3,0x20,0x8c,8,4);
              if (iVar26 == 0) {
                if (*(int *)(param_1 + 0xd) != 0) goto LAB_001249df;
                local_80 = 2;
              }
              else {
                sljit_emit_op1(piVar3,0x20,4,0,0x8e);
                if (*(int *)(param_1 + 0xd) == 0) {
                  iVar26 = 0x10;
                  local_80 = 3;
                  goto LAB_00123a0a;
                }
LAB_001249df:
                sljit_emit_op1(piVar3,0x20,0x8c,0x10,1);
                local_80 = 3;
                if (iVar26 != 0) goto LAB_001239f8;
              }
              if (local_b8 == 0) {
LAB_00124739:
                sljit_emit_op1(piVar3,0x20,0x8c,local_80 * 8,0x7f);
                goto LAB_00123a34;
              }
              goto LAB_001226e2;
            }
            if (iVar26 != 0) {
              sljit_emit_op1(piVar3,0x20,4,0,0x8e);
            }
            sljit_emit_op1(piVar3,0x20,0x8c,0,2);
            local_80 = 1;
            if (iVar26 == 0) {
              if (local_b8 == 0) goto LAB_00124739;
              iVar10 = 0;
            }
            else {
LAB_001239f8:
              iVar26 = local_80 * 8;
              local_80 = local_80 + 1;
LAB_00123a0a:
              if (local_b8 == 0) {
                sljit_emit_op1(piVar3,0x20,0x8c,local_80 << 3,0x7f);
              }
              sljit_emit_op1(piVar3,0x20,0x8c,iVar26,4);
LAB_00123a34:
              if (iVar10 != 0) goto LAB_001226e2;
            }
          }
          param_2 = local_88;
          lVar18 = sljit_emit_label(piVar3);
          if (*puVar27 == 0x7c) {
            *(undefined8 *)(pauVar13[1] + 8) = 0;
            if (local_b8 == 0) {
              local_88 = (ushort *)0x0;
              param_2 = puVar27 + 2;
LAB_001229b7:
              if (local_8c < 0) {
                uVar15 = 0x8c;
                local_90 = local_90 * 8 + -8;
              }
              else {
                uVar15 = 0x84;
                local_90 = local_90 * -8;
              }
              uVar15 = sljit_emit_cmp(piVar3,1,uVar15,(long)local_90,0x7f);
              if (*piVar3 == 0) {
                lVar18 = *(long *)(piVar3 + 0x18);
                lVar19 = *(long *)(lVar18 + 8);
                uVar12 = lVar19 + 0x10;
                if (uVar12 < 0xff1) {
                  *(ulong *)(lVar18 + 8) = uVar12;
                  puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
                }
                else {
                  puVar20 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
                  if (puVar20 == (undefined8 *)0x0) {
                    *piVar3 = 2;
                    goto LAB_00122a84;
                  }
                  *puVar20 = *(undefined8 *)(piVar3 + 0x18);
                  *(undefined8 **)(piVar3 + 0x18) = puVar20;
                  puVar16 = puVar20 + 2;
                  puVar20[1] = 0x10;
                }
                uVar17 = *(undefined8 *)(pauVar13[1] + 8);
                *puVar16 = uVar15;
                puVar16[1] = uVar17;
                *(undefined8 **)(pauVar13[1] + 8) = puVar16;
              }
              goto LAB_00122a84;
            }
            sljit_emit_label(piVar3);
            param_2 = puVar27 + 2;
          }
          else {
            iVar26 = (iVar10 + 1) * 8;
            local_88 = (ushort *)0x0;
            do {
              pauVar13[1] = (undefined1  [16])0x0;
              puVar27 = puVar27 + puVar27[1];
              compile_matchingpath(param_1,param_2,puVar27);
              if (*piVar3 != 0) goto switchD_00121e2b_caseD_62;
              if (local_8c < 0) {
                if (local_8c == -1) {
                  sljit_emit_op1(piVar3,0x20,0xc,0,0x8e);
                }
                if (iVar10 == 0) {
                  if (uVar8 == 0x8d) {
                    sljit_emit_op1(piVar3,0x20,1,0,0x8c);
                  }
                  sljit_emit_op1(piVar3,0x20,0x8c,0,2);
                }
                else {
                  sljit_emit_op1(piVar3,0x20,1,0,0x8e);
                  iVar1 = (iVar10 + 1) * 8;
                  sljit_emit_op1(piVar3,0x20,0x8e,(long)(iVar1 + *(int *)((long)param_1 + 0x44)),2);
                  sljit_emit_op1(piVar3,0x20,0x8e,(long)local_78,2);
                  if (*(int *)(param_1 + 0xd) != 0) {
                    sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xd),0x7f);
                  }
                  sljit_emit_op1(piVar3,0x20,0x8e,
                                 (long)(iVar1 + -8 + *(int *)((long)param_1 + 0x44)),1);
                }
                if (local_44 != 0) {
                  sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c);
                }
                if (((uVar8 & 0xfffd) == 0x8d) &&
                   (lVar19 = sljit_emit_cmp(piVar3,0,1,0,2), *piVar3 == 0)) {
                  lVar5 = *(long *)(piVar3 + 0x18);
                  lVar6 = *(long *)(lVar5 + 8);
                  uVar12 = lVar6 + 0x10;
                  if (uVar12 < 0xff1) {
                    *(ulong *)(lVar5 + 8) = uVar12;
                    plVar22 = (long *)(lVar5 + 0x10 + lVar6);
                  }
                  else {
                    puVar16 = (undefined8 *)
                              (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                        (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
                    if (puVar16 == (undefined8 *)0x0) {
                      *piVar3 = 2;
                      goto LAB_00123c30;
                    }
                    *puVar16 = *(undefined8 *)(piVar3 + 0x18);
                    *(undefined8 **)(piVar3 + 0x18) = puVar16;
                    plVar22 = puVar16 + 2;
                    puVar16[1] = 0x10;
                  }
                  *plVar22 = lVar19;
                  plVar22[1] = (long)local_88;
                  local_88 = (ushort *)plVar22;
                }
LAB_00123c30:
                if (local_b8 == 0) {
                  sljit_emit_op1(piVar3,0x20,0x8c,(long)(local_90 * 8 + -8),0x7f);
                }
              }
              else {
                if (iVar10 == 0) {
                  sljit_emit_op1(piVar3,0x20,4,0,0x8e,(long)iVar9);
                  sljit_emit_op2(piVar3,0x42,0xc,0,4,0,0x7f,(long)local_90 << 3);
                  if (uVar8 == 0x8d) {
                    sljit_emit_op1(piVar3,0x20,1,0,0x84);
                  }
                  sljit_emit_op1(piVar3,0x20,0x84,(long)((-2 - local_8c) * 8),2);
                }
                else {
                  sljit_emit_op2(piVar3,0x42,0xc,0,0x8e,(long)iVar9,0x7f,(long)local_90 << 3);
                  sljit_emit_op1(piVar3,0x20,1,0,0x8e);
                  sljit_emit_op1(piVar3,0x20,0x8e,(long)(iVar26 + *(int *)((long)param_1 + 0x44)),2)
                  ;
                  sljit_emit_op1(piVar3,0x20,0x8e,(long)local_78,2);
                  if (*(int *)(param_1 + 0xd) != 0) {
                    sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xd),0x7f);
                  }
                  sljit_emit_op1(piVar3,0x20,0x8e,
                                 (long)(iVar26 + -8 + *(int *)((long)param_1 + 0x44)),1);
                }
                if (local_44 != 0) {
                  sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c);
                }
                if (((uVar8 & 0xfffd) == 0x8d) &&
                   (lVar19 = sljit_emit_cmp(piVar3,0,1,0,2), *piVar3 == 0)) {
                  lVar5 = *(long *)(piVar3 + 0x18);
                  lVar6 = *(long *)(lVar5 + 8);
                  uVar12 = lVar6 + 0x10;
                  if (uVar12 < 0xff1) {
                    *(ulong *)(lVar5 + 8) = uVar12;
                    plVar22 = (long *)(lVar5 + 0x10 + lVar6);
                  }
                  else {
                    puVar16 = (undefined8 *)
                              (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                        (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
                    if (puVar16 == (undefined8 *)0x0) {
                      *piVar3 = 2;
                      goto joined_r0x00123de0;
                    }
                    *puVar16 = *(undefined8 *)(piVar3 + 0x18);
                    *(undefined8 **)(piVar3 + 0x18) = puVar16;
                    plVar22 = puVar16 + 2;
                    puVar16[1] = 0x10;
                  }
                  *plVar22 = lVar19;
                  plVar22[1] = (long)local_88;
                  local_88 = (ushort *)plVar22;
                }
joined_r0x00123de0:
                if (local_b8 == 0) {
                  sljit_emit_op1(piVar3,0x20,0x8c,0,0x7f);
                }
              }
              lVar19 = sljit_emit_jump(piVar3,0x24);
              if ((lVar18 != 0) && (lVar19 != 0)) {
                *(long *)(lVar19 + 0x18) = lVar18;
                *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffd | 1;
              }
              flush_stubs(param_1);
              compile_backtrackingpath(param_1,*(undefined8 *)pauVar13[1]);
              if (*piVar3 != 0) goto switchD_00121e2b_caseD_62;
              lVar19 = sljit_emit_label(piVar3);
              for (plVar22 = *(long **)(pauVar13[1] + 8); plVar22 != (long *)0x0;
                  plVar22 = (long *)plVar22[1]) {
                lVar5 = *plVar22;
                if ((lVar5 != 0) && (lVar19 != 0)) {
                  *(long *)(lVar5 + 0x18) = lVar19;
                  *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              if (local_8c < 0) {
                if (iVar10 != 0) goto LAB_00122961;
                uVar15 = 0x8c;
              }
              else if (iVar10 == 0) {
                sljit_emit_op1(piVar3,0x20,4,0,0x8e,(long)iVar9);
                uVar15 = 0x84;
              }
              else {
                if (*puVar27 == 0x7c) {
                  sljit_emit_op1(piVar3,0x20,4,0,0x8e,(long)iVar9);
                }
LAB_00122961:
                uVar15 = 0x8e;
              }
              sljit_emit_op1(piVar3,0x20,2,0,uVar15);
              param_2 = puVar27 + 2;
            } while (*puVar27 != 0x7c);
            *(undefined8 *)(pauVar13[1] + 8) = 0;
            if (local_b8 == 0) goto LAB_001229b7;
LAB_00122a84:
            lVar18 = sljit_emit_label(piVar3);
            if (local_88 != (ushort *)0x0) {
              do {
                lVar19 = *(long *)local_88;
                if ((lVar19 != 0) && (lVar18 != 0)) {
                  *(long *)(lVar19 + 0x18) = lVar18;
                  *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffd | 1;
                }
                local_88 = *(ushort **)((long)local_88 + 8);
              } while (local_88 != (ushort *)0x0);
            }
          }
          piVar3 = (int *)*param_1;
          if (*piVar3 == 0) {
            piVar3[0x26] = 0;
            emit_non_cum_binary(piVar3,0x2d2b2928,10,0,10,0,0x7f,1);
          }
          uVar15 = sljit_emit_jump(piVar3,0);
          if (*piVar3 == 0) {
            lVar18 = *(long *)(piVar3 + 0x18);
            lVar19 = *(long *)(lVar18 + 8);
            uVar12 = lVar19 + 0x10;
            if (uVar12 < 0xff1) {
              *(ulong *)(lVar18 + 8) = uVar12;
              puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
            }
            else {
              puVar20 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar20 == (undefined8 *)0x0) {
                *piVar3 = 2;
                goto joined_r0x00121dfb;
              }
              *puVar20 = *(undefined8 *)(piVar3 + 0x18);
              *(undefined8 **)(piVar3 + 0x18) = puVar20;
              puVar16 = puVar20 + 2;
              puVar20[1] = 0x10;
            }
            uVar17 = param_1[0x2f];
            *puVar16 = uVar15;
            puVar16[1] = uVar17;
            param_1[0x2f] = puVar16;
          }
          goto joined_r0x00121dfb;
        case 0x9a:
          if ((*piVar2 != 0) ||
             (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar2,0x28), *piVar2 != 0))
          goto switchD_00121e2b_caseD_62;
          *(undefined8 *)pauVar13[2] = 0;
          *pauVar13 = (undefined1  [16])0x0;
          pauVar13[1] = (undefined1  [16])0x0;
          uVar15 = *(undefined8 *)(param_4 + 0x10);
          iVar9 = *(int *)(param_1 + 0xc);
          *(ushort **)pauVar13[2] = puVar27;
          *(undefined8 *)*pauVar13 = uVar15;
          *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
          sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)iVar9);
          uVar15 = *param_1;
          lVar18 = (-(ulong)(*(int *)(param_1 + 0x16) == 0) & 0xffffffffffffffe0) + 0x28;
          sljit_emit_op2(uVar15,0x42,0xc,0,0xc,0,0x7f);
          uVar15 = sljit_emit_cmp(uVar15,2,0xc,0,0xb,0);
          piVar3 = (int *)*param_1;
          if ((*piVar3 == 0) &&
             (puVar16 = (undefined8 *)ensure_abuf(piVar3,0x18,lVar18), puVar16 != (undefined8 *)0x0)
             ) {
            *puVar16 = uVar15;
            uVar17 = sljit_emit_label(piVar3);
            uVar15 = param_1[0x26];
            puVar16[1] = uVar17;
            puVar16[2] = uVar15;
            param_1[0x26] = puVar16;
          }
          sljit_emit_op1(piVar2,0x20,0x8c,(ulong)(*(int *)(param_1 + 0x16) != 0) << 5,4,0);
          sljit_emit_op1(piVar2,0x20,4,0,0x7f);
          sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)(param_1 + 0xc),4);
          sljit_emit_op1(piVar2,0x20,0x89,0x30,4);
          if (*(int *)(param_1 + 0x16) != 0) {
            sljit_emit_op1(piVar2,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 100));
            sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0xc,0);
            sljit_emit_op1(piVar2,0x20,0x8c,8,0x7f,0);
            sljit_emit_op1(piVar2,0x20,0x8c,0x10,0x7f);
            sljit_emit_op1(piVar2,0x20,0x8c,0x18,2);
            sljit_emit_op1(piVar2,0x20,0x8c,0,1);
          }
          param_2 = puVar27 + (ulong)puVar27[1] + 3;
          goto joined_r0x00121dfb;
        case 0x9b:
        case 0x9c:
        case 0x9d:
        case 0x9e:
        case 0x9f:
        case 0xa0:
        case 0xa1:
        case 0xa2:
          piVar3 = (int *)*param_1;
          param_2 = puVar27 + 1;
          if (((ushort)(uVar8 - 0x9c) < 7) && ((0x55UL >> ((ulong)(uVar8 - 0x9c) & 0x3f) & 1) != 0))
          {
            param_2 = puVar27 + (ulong)puVar27[1] + 3;
          }
          if ((*piVar3 != 0) ||
             (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar3,0x28), *piVar3 != 0))
          goto switchD_00121e2b_caseD_62;
          *(undefined8 *)pauVar13[2] = 0;
          *pauVar13 = (undefined1  [16])0x0;
          pauVar13[1] = (undefined1  [16])0x0;
          uVar15 = *(undefined8 *)(param_4 + 0x10);
          *(ushort **)pauVar13[2] = puVar27;
          *(undefined8 *)*pauVar13 = uVar15;
          *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
          if (uVar8 == 0x9d) {
            uVar15 = *param_1;
            sljit_emit_op2(uVar15,0x42,0xc,0,0xc,0,0x7f);
            uVar15 = sljit_emit_cmp(uVar15,2,0xc,0,0xb,0);
            piVar4 = (int *)*param_1;
            if ((*piVar4 == 0) &&
               (puVar16 = (undefined8 *)ensure_abuf(piVar4,0x18), puVar16 != (undefined8 *)0x0)) {
              *puVar16 = uVar15;
              uVar17 = sljit_emit_label(piVar4);
              uVar15 = param_1[0x26];
              puVar16[1] = uVar17;
              puVar16[2] = uVar15;
              param_1[0x26] = puVar16;
            }
            sljit_emit_op1(piVar3,0x20,0x8c,0,2);
          }
          else if (((uVar8 & 0xfffd) == 0xa0) || (uVar8 == 0x9c)) {
            sljit_emit_op1(piVar3,0x20,4,0,0x7f);
            sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xc),4);
            sljit_emit_op1(piVar3,0x20,0x89,0x30,4);
          }
          goto joined_r0x00121dfb;
        case 0xa3:
        case 0xa4:
        case 0xa5:
          piVar3 = (int *)*param_1;
          if ((*piVar3 != 0) ||
             (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar3,0x28), *piVar3 != 0))
          goto switchD_00121e2b_caseD_62;
          *(undefined8 *)pauVar13[2] = 0;
          *pauVar13 = (undefined1  [16])0x0;
          pauVar13[1] = (undefined1  [16])0x0;
          uVar15 = *(undefined8 *)(param_4 + 0x10);
          *(ushort **)pauVar13[2] = puVar27;
          *(undefined8 *)*pauVar13 = uVar15;
          uVar8 = *puVar27;
          *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
          if (uVar8 == 0xa3) goto LAB_0012237a;
          if (uVar8 == 0xa4) {
            if (param_1[0x28] == 0) {
              if ((*(byte *)(param_1[1] + 0x5b) & 0x20) != 0) {
                uVar15 = sljit_emit_cmp(piVar3,1,2,0,0xd);
                if (*piVar3 == 0) {
                  lVar18 = *(long *)(piVar3 + 0x18);
                  lVar19 = *(long *)(lVar18 + 8);
                  uVar12 = lVar19 + 0x10;
                  if (uVar12 < 0xff1) {
                    *(ulong *)(lVar18 + 8) = uVar12;
                    puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
                  }
                  else {
                    puVar20 = (undefined8 *)
                              (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                        (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
                    if (puVar20 == (undefined8 *)0x0) {
                      *piVar3 = 2;
                      uVar8 = *puVar27;
                      goto LAB_0012213a;
                    }
                    *puVar20 = *(undefined8 *)(piVar3 + 0x18);
                    *(undefined8 **)(piVar3 + 0x18) = puVar20;
                    puVar16 = puVar20 + 2;
                    puVar20[1] = 0x10;
                  }
                  uVar17 = param_1[0x3a];
                  *puVar16 = uVar15;
                  puVar16[1] = uVar17;
                  param_1[0x3a] = puVar16;
                }
                uVar8 = *puVar27;
                goto LAB_0012213a;
              }
              lVar18 = param_1[0x24];
              goto LAB_00122159;
            }
            lVar18 = param_1[0x24];
LAB_00123b21:
            if (lVar18 == 0) {
              uVar15 = sljit_emit_jump(piVar3,0x24);
              if (*piVar3 == 0) {
                lVar18 = *(long *)(piVar3 + 0x18);
                lVar19 = *(long *)(lVar18 + 8);
                uVar12 = lVar19 + 0x10;
                if (uVar12 < 0xff1) {
                  *(ulong *)(lVar18 + 8) = uVar12;
                  puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
                }
                else {
                  puVar20 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
                  if (puVar20 == (undefined8 *)0x0) goto LAB_00124bb6;
                  *puVar20 = *(undefined8 *)(piVar3 + 0x18);
                  *(undefined8 **)(piVar3 + 0x18) = puVar20;
                  puVar16 = puVar20 + 2;
                  puVar20[1] = 0x10;
                }
                uVar17 = param_1[0x2e];
                *puVar16 = uVar15;
                puVar16[1] = uVar17;
                param_1[0x2e] = puVar16;
              }
            }
            else {
              lVar19 = sljit_emit_jump(piVar3,0x24);
              if (lVar19 != 0) {
                *(long *)(lVar19 + 0x18) = lVar18;
                *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
          }
          else {
LAB_0012213a:
            lVar18 = param_1[0x24];
            if ((uVar8 == 0xa5) || (param_1[0x28] != 0)) goto LAB_00123b21;
LAB_00122159:
            if (*(int *)(param_1 + 0x15) == 0) goto LAB_00123b21;
            if (lVar18 == 0) {
              uVar15 = sljit_emit_cmp(piVar3,1,2,0,0x8e,(long)*(int *)((long)param_1 + 0x44));
              if (*piVar3 == 0) {
                lVar18 = *(long *)(piVar3 + 0x18);
                lVar19 = *(long *)(lVar18 + 8);
                uVar12 = lVar19 + 0x10;
                if (uVar12 < 0xff1) {
                  *(ulong *)(lVar18 + 8) = uVar12;
                  puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
                }
                else {
                  puVar20 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
                  if (puVar20 == (undefined8 *)0x0) {
                    *piVar3 = 2;
                    goto LAB_001221b2;
                  }
                  *puVar20 = *(undefined8 *)(piVar3 + 0x18);
                  *(undefined8 **)(piVar3 + 0x18) = puVar20;
                  puVar16 = puVar20 + 2;
                  puVar20[1] = 0x10;
                }
                uVar17 = param_1[0x2e];
                *puVar16 = uVar15;
                puVar16[1] = uVar17;
                param_1[0x2e] = puVar16;
              }
            }
            else {
              lVar19 = sljit_emit_cmp(piVar3,1,2,0,0x8e,(long)*(int *)((long)param_1 + 0x44));
              if (lVar19 != 0) {
                *(long *)(lVar19 + 0x18) = lVar18;
                *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
LAB_001221b2:
            sljit_emit_op1(piVar3,0x25,4,0,0x89,0x58);
            if (*piVar3 == 0) {
              piVar3[0x26] = 0;
              puVar14 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,4,4,0);
              if (puVar14 != (undefined1 *)0x0) {
                *puVar14 = 0xf7;
              }
            }
            uVar15 = sljit_emit_jump(piVar3,1);
            if (*piVar3 == 0) {
              lVar18 = *(long *)(piVar3 + 0x18);
              uVar12 = *(long *)(lVar18 + 8) + 0x10;
              if (uVar12 < 0xff1) {
                puVar16 = (undefined8 *)(lVar18 + 0x10 + *(long *)(lVar18 + 8));
                uVar17 = *(undefined8 *)(pauVar13[1] + 8);
                *(ulong *)(lVar18 + 8) = uVar12;
                *puVar16 = uVar15;
                puVar16[1] = uVar17;
                *(undefined8 **)(pauVar13[1] + 8) = puVar16;
LAB_00122299:
                piVar3[0x26] = 0;
                puVar14 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,8,4,0);
                if (puVar14 != (undefined1 *)0x0) {
                  *puVar14 = 0xf7;
                }
              }
              else {
                puVar16 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
                if (puVar16 == (undefined8 *)0x0) {
                  *piVar3 = 2;
                }
                else {
                  uVar17 = *(undefined8 *)(pauVar13[1] + 8);
                  *puVar16 = *(undefined8 *)(piVar3 + 0x18);
                  iVar9 = *piVar3;
                  *(undefined8 **)(piVar3 + 0x18) = puVar16;
                  puVar16[1] = 0x10;
                  puVar16[2] = uVar15;
                  puVar16[3] = uVar17;
                  *(undefined8 **)(pauVar13[1] + 8) = puVar16 + 2;
                  if (iVar9 == 0) goto LAB_00122299;
                }
              }
            }
            lVar18 = param_1[0x24];
            if (lVar18 == 0) {
              uVar15 = sljit_emit_jump(piVar3,0);
              if (*piVar3 == 0) {
                lVar18 = *(long *)(piVar3 + 0x18);
                lVar19 = *(long *)(lVar18 + 8);
                uVar12 = lVar19 + 0x10;
                if (uVar12 < 0xff1) {
                  *(ulong *)(lVar18 + 8) = uVar12;
                  puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
                }
                else {
                  puVar20 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
                  if (puVar20 == (undefined8 *)0x0) {
                    *piVar3 = 2;
                    goto LAB_0012230a;
                  }
                  *puVar20 = *(undefined8 *)(piVar3 + 0x18);
                  *(undefined8 **)(piVar3 + 0x18) = puVar20;
                  puVar16 = puVar20 + 2;
                  puVar20[1] = 0x10;
                }
                uVar17 = param_1[0x2e];
                *puVar16 = uVar15;
                puVar16[1] = uVar17;
                param_1[0x2e] = puVar16;
              }
            }
            else {
              lVar19 = sljit_emit_jump(piVar3,0);
              if (lVar19 != 0) {
                *(long *)(lVar19 + 0x18) = lVar18;
                *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
LAB_0012230a:
            sljit_emit_op1(piVar3,0x20,4,0,0x89,8);
            lVar18 = param_1[0x24];
            if (lVar18 == 0) {
              uVar15 = sljit_emit_cmp(piVar3,1,4,0,2,0);
              if (*piVar3 == 0) {
                lVar18 = *(long *)(piVar3 + 0x18);
                lVar19 = *(long *)(lVar18 + 8);
                uVar12 = lVar19 + 0x10;
                if (uVar12 < 0xff1) {
                  *(ulong *)(lVar18 + 8) = uVar12;
                  puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
                }
                else {
                  puVar20 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
                  if (puVar20 == (undefined8 *)0x0) {
                    *piVar3 = 2;
                    goto LAB_0012237a;
                  }
                  *puVar20 = *(undefined8 *)(piVar3 + 0x18);
                  *(undefined8 **)(piVar3 + 0x18) = puVar20;
                  puVar16 = puVar20 + 2;
                  puVar20[1] = 0x10;
                }
                uVar17 = param_1[0x2e];
                *puVar16 = uVar15;
                puVar16[1] = uVar17;
                param_1[0x2e] = puVar16;
              }
            }
            else {
              lVar19 = sljit_emit_cmp(piVar3,1,4,0,2);
              if (lVar19 != 0) {
                *(long *)(lVar19 + 0x18) = lVar18;
                *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
LAB_0012237a:
            uVar15 = sljit_emit_jump(piVar3,0x24);
            if (*piVar3 == 0) {
              lVar18 = *(long *)(piVar3 + 0x18);
              lVar19 = *(long *)(lVar18 + 8);
              uVar12 = lVar19 + 0x10;
              if (uVar12 < 0xff1) {
                *(ulong *)(lVar18 + 8) = uVar12;
                puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
LAB_001223f1:
                uVar17 = *(undefined8 *)(pauVar13[1] + 8);
                *puVar16 = uVar15;
                puVar16[1] = uVar17;
                *(undefined8 **)(pauVar13[1] + 8) = puVar16;
                goto LAB_00123b5a;
              }
              puVar20 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar20 != (undefined8 *)0x0) {
                *puVar20 = *(undefined8 *)(piVar3 + 0x18);
                *(undefined8 **)(piVar3 + 0x18) = puVar20;
                puVar16 = puVar20 + 2;
                puVar20[1] = 0x10;
                goto LAB_001223f1;
              }
LAB_00124bb6:
              *piVar3 = 2;
            }
          }
LAB_00123b5a:
          param_2 = puVar27 + 1;
          goto joined_r0x00121dfb;
        case 0xa6:
          param_2 = puVar27 + 2;
          if (param_1[0x28] == 0) {
            uVar8 = puVar27[1];
            uVar15 = *param_1;
            iVar9 = (uVar8 + 1 + (uint)uVar8) * 8;
            if (*(char *)(param_1[5] + (ulong)uVar8) == '\0') {
              sljit_emit_op1(uVar15,0x20,1,0,0x8e,
                             (long)(int)(*(int *)(param_1 + 8) + (uint)uVar8 * 8));
              sljit_emit_op1(uVar15,0x20,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar9),2,0);
              sljit_emit_op1(uVar15,0x20,0x8e,(long)(iVar9 + -8 + *(int *)((long)param_1 + 0x44)),1,
                             0);
            }
            else {
              sljit_emit_op1(uVar15,0x20,0x8e,(long)(iVar9 + *(int *)((long)param_1 + 0x44)),2,0);
            }
          }
          goto joined_r0x00121dfb;
        case 0xa7:
          puVar27 = puVar27 + 1;
          do {
            puVar27 = puVar27 + puVar27[1];
          } while (*puVar27 == 0x78);
          param_2 = puVar27 + 2;
          goto joined_r0x00121dfb;
        default:
          goto switchD_00121e2b_caseD_62;
        case 0xa9:
        case 0xaa:
          goto code_r0x00122422;
        }
      }
      param_2 = (ushort *)compile_bracket_matchingpath(param_1,puVar27,param_4);
      goto LAB_00121e58;
    }
    switch(uVar8) {
    case 1:
    case 2:
    case 4:
    case 5:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
code_r0x00122422:
      param_2 = (ushort *)compile_simple_assertion_matchingpath(param_1,uVar8,puVar27 + 1);
      break;
    case 3:
      if ((*piVar2 != 0) || (pauVar13 = (undefined1 (*) [16])ensure_abuf(piVar2,0x28), *piVar2 != 0)
         ) goto switchD_00121e2b_caseD_62;
      *(undefined8 *)pauVar13[2] = 0;
      *pauVar13 = (undefined1  [16])0x0;
      pauVar13[1] = (undefined1  [16])0x0;
      uVar15 = *(undefined8 *)(param_4 + 0x10);
      iVar9 = *(int *)((long)param_1 + 0x44);
      *(ushort **)pauVar13[2] = puVar27;
      *(undefined8 *)*pauVar13 = uVar15;
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar13;
      sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)iVar9);
      uVar15 = *param_1;
      sljit_emit_op2(uVar15,0x42,0xc,0,0xc,0,0x7f,8);
      uVar15 = sljit_emit_cmp(uVar15,2,0xc,0,0xb,0);
      piVar3 = (int *)*param_1;
      if ((*piVar3 == 0) &&
         (puVar16 = (undefined8 *)ensure_abuf(piVar3,0x18), puVar16 != (undefined8 *)0x0)) {
        *puVar16 = uVar15;
        uVar17 = sljit_emit_label(piVar3);
        uVar15 = param_1[0x26];
        puVar16[1] = uVar17;
        puVar16[2] = uVar15;
        param_1[0x26] = puVar16;
      }
      sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)((long)param_1 + 0x44),2);
      sljit_emit_op1(piVar2,0x20,0x8c);
      param_2 = puVar27 + 1;
      goto joined_r0x00121dfb;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1f:
    case 0x20:
      goto switchD_00121e2b_caseD_6;
    case 0x1d:
    case 0x1e:
      if (*(int *)(param_1 + 0x14) == 1) {
        param_2 = (ushort *)compile_charn_matchingpath(param_1,puVar27,param_3);
        break;
      }
      goto code_r0x00121eb0;
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
switchD_00121e2b_caseD_21:
      param_2 = (ushort *)compile_iterator_matchingpath(param_1,puVar27,param_4);
      break;
    default:
      goto switchD_00121e2b_caseD_62;
    case 0x6e:
    case 0x6f:
      if ((ushort)(puVar27[0x11] - 0x62) < 0xc) goto switchD_00121e2b_caseD_21;
switchD_00121e2b_caseD_6:
code_r0x00121eb0:
      param_2 = (ushort *)compile_char1_matchingpath(param_1,uVar8,puVar27 + 1);
      break;
    case 0x70:
      if ((ushort)(puVar27[puVar27[1]] - 0x62) < 0xc) goto switchD_00121e2b_caseD_21;
      param_2 = (ushort *)compile_char1_matchingpath(param_1,0x70,puVar27 + 1);
      break;
    case 0x71:
    case 0x72:
      if ((ushort)(puVar27[2] - 0x62) < 0xc) goto LAB_001234c0;
      lVar18 = param_4 + 0x18;
      if (*(long *)(param_4 + 0x10) != 0) {
        lVar18 = *(long *)(param_4 + 0x10) + 8;
      }
      compile_ref_matchingpath(param_1,puVar27,lVar18,1,0);
      param_2 = puVar27 + 2;
      goto joined_r0x00121dfb;
    case 0x73:
    case 0x74:
      if (0xb < (ushort)(puVar27[3] - 0x62)) {
        lVar18 = *(long *)(param_4 + 0x10) + 8;
        if (*(long *)(param_4 + 0x10) == 0) {
          lVar18 = param_4 + 0x18;
        }
        compile_dnref_search(param_1,puVar27,lVar18);
        lVar18 = *(long *)(param_4 + 0x10) + 8;
        if (*(long *)(param_4 + 0x10) == 0) {
          lVar18 = param_4 + 0x18;
        }
        compile_ref_matchingpath(param_1,puVar27,lVar18,1,0);
        param_2 = puVar27 + 3;
        goto joined_r0x00121dfb;
      }
LAB_001234c0:
      param_2 = (ushort *)compile_ref_iterator_matchingpath(param_1,puVar27,param_4);
      break;
    case 0x75:
      piVar3 = (int *)*param_1;
      pauVar13 = (undefined1 (*) [16])param_1[0x27];
      uVar12 = (ulong)puVar27[1];
      if ((*piVar3 != 0) || (pauVar21 = (undefined1 (*) [16])ensure_abuf(piVar3,0x40), *piVar3 != 0)
         ) goto switchD_00121e2b_caseD_62;
      *pauVar21 = (undefined1  [16])0x0;
      pauVar21[1] = (undefined1  [16])0x0;
      pauVar21[2] = (undefined1  [16])0x0;
      pauVar21[3] = (undefined1  [16])0x0;
      uVar15 = *(undefined8 *)(param_4 + 0x10);
      *(ushort **)pauVar21[2] = puVar27;
      *(undefined8 *)*pauVar21 = uVar15;
      lVar18 = param_1[2];
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar21;
      psVar25 = (short *)(lVar18 + uVar12 * 2);
      iVar9 = get_framesize(param_1,psVar25,0,1,&local_44);
      pauVar7 = pauVar13;
      if (iVar9 == -2) {
        do {
          psVar25 = psVar25 + (ushort)psVar25[1];
        } while (*psVar25 == 0x78);
        uVar15 = next_opcode(param_1);
        compile_matchingpath(param_1,uVar15,psVar25);
        *(undefined4 *)(pauVar21[3] + 8) = 1;
        param_2 = puVar27 + 2;
      }
      else {
        while (pauVar23 = pauVar7, pauVar23 != (undefined1 (*) [16])0x0) {
          if (uVar12 == *(ulong *)(pauVar23[2] + 8)) {
            lVar18 = *(long *)(*pauVar23 + 8);
            *(undefined1 (**) [16])pauVar21[3] = pauVar23;
            if (lVar18 == 0) goto LAB_00124191;
            lVar19 = sljit_emit_jump(piVar3,0x25);
            if (lVar19 != 0) {
              *(long *)(lVar19 + 0x18) = lVar18;
              *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffd | 1;
            }
            goto LAB_001233f6;
          }
          pauVar13 = pauVar23;
          pauVar7 = *(undefined1 (**) [16])*pauVar23;
        }
        if ((*piVar3 != 0) ||
           (pauVar23 = (undefined1 (*) [16])ensure_abuf(piVar3,0x30), *piVar3 != 0))
        goto switchD_00121e2b_caseD_62;
        *(undefined8 *)pauVar23[2] = 0;
        *(ulong *)(pauVar23[2] + 8) = uVar12;
        *pauVar23 = (undefined1  [16])0x0;
        pauVar23[1] = (undefined1  [16])0x0;
        if (pauVar13 == (undefined1 (*) [16])0x0) {
          param_1[0x27] = pauVar23;
        }
        else {
          *(undefined1 (**) [16])*pauVar13 = pauVar23;
        }
        *(undefined1 (**) [16])pauVar21[3] = pauVar23;
LAB_00124191:
        uVar15 = sljit_emit_jump(piVar3,0x25);
        if (*piVar3 == 0) {
          lVar18 = *(long *)(piVar3 + 0x18);
          lVar19 = *(long *)(lVar18 + 8);
          uVar12 = lVar19 + 0x10;
          if (uVar12 < 0xff1) {
            *(ulong *)(lVar18 + 8) = uVar12;
            puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
          }
          else {
            puVar20 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar20 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_001233f6;
            }
            *puVar20 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar20;
            puVar16 = puVar20 + 2;
            puVar20[1] = 0x10;
          }
          uVar17 = *(undefined8 *)(pauVar23[1] + 8);
          *puVar16 = uVar15;
          puVar16[1] = uVar17;
          *(undefined8 **)(pauVar23[1] + 8) = puVar16;
        }
LAB_001233f6:
        uVar15 = sljit_emit_cmp(piVar3,0,1,0,0x7f);
        if (*piVar3 == 0) {
          lVar18 = *(long *)(piVar3 + 0x18);
          lVar19 = *(long *)(lVar18 + 8);
          uVar12 = lVar19 + 0x10;
          if (uVar12 < 0xff1) {
            *(ulong *)(lVar18 + 8) = uVar12;
            puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar19);
          }
          else {
            puVar20 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar20 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_00123490;
            }
            *puVar20 = *(undefined8 *)(piVar3 + 0x18);
            puVar16 = puVar20 + 2;
            *(undefined8 **)(piVar3 + 0x18) = puVar20;
            puVar20[1] = 0x10;
          }
          uVar17 = *(undefined8 *)(pauVar21[1] + 8);
          *puVar16 = uVar15;
          puVar16[1] = uVar17;
          *(undefined8 **)(pauVar21[1] + 8) = puVar16;
        }
LAB_00123490:
        uVar15 = sljit_emit_label(piVar3);
        *(undefined8 *)(pauVar21[2] + 8) = uVar15;
        param_2 = puVar27 + 2;
      }
      goto joined_r0x00121dfb;
    case 0x76:
    case 0x77:
      param_2 = (ushort *)compile_callout_matchingpath(param_1,puVar27,param_4);
    }
LAB_00121e58:
    if (param_2 == (ushort *)0x0) {
switchD_00121e2b_caseD_62:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



void compile_bracket_backtrackingpath(undefined8 *param_1,long param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 *puVar22;
  ushort *puVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  uint uVar27;
  int iVar28;
  ulong extraout_RDX;
  ulong uVar29;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  int *piVar33;
  uint uVar34;
  ushort uVar35;
  ushort *puVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  undefined1 auVar40 [16];
  char cVar41;
  int local_cc;
  ushort *local_c8;
  ushort local_be;
  uint local_bc;
  uint local_b4;
  int local_a8;
  int local_a4;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_78;
  long local_58;
  long local_50;
  long local_40;
  
  piVar31 = (int *)*param_1;
  puVar36 = *(ushort **)(param_2 + 0x20);
  local_be = 0x87;
  uVar35 = *puVar36;
  puVar23 = puVar36 + 1;
  iVar15 = *(int *)(param_2 + 0x48);
  uVar2 = uVar35;
  if ((ushort)(uVar35 - 0x97) < 2) {
    puVar36 = puVar36 + 1;
    uVar2 = *puVar23;
    local_be = uVar35;
  }
  uVar30 = (uint)uVar2;
  puVar23 = puVar36;
  do {
    uVar29 = (ulong)puVar23[1];
    puVar23 = puVar23 + uVar29;
    uVar35 = *puVar23;
  } while (uVar35 == 0x78);
  if (uVar35 == 0x79) {
    lVar25 = param_1[2];
    lVar21 = param_1[3];
    uVar29 = (long)puVar23 - lVar25 >> 1;
    local_a8 = *(int *)(lVar21 + uVar29 * 4);
    if (local_a8 == 0) {
      local_a4 = 0;
      bVar37 = false;
      local_cc = 0;
      bVar6 = false;
    }
    else {
      uVar29 = (long)puVar23 + (4 - lVar25) >> 1;
      local_cc = *(int *)(lVar21 + uVar29 * 4);
      local_a4 = *(int *)(lVar21 + ((long)puVar23 + (6 - lVar25) >> 1) * 4);
      if (local_cc == 0x27) {
        bVar37 = true;
        uVar35 = 0x7a;
        bVar6 = true;
      }
      else {
        bVar37 = local_cc == 0x28;
        bVar6 = bVar37;
        if (bVar37) {
          uVar35 = 0x7b;
        }
      }
    }
  }
  else {
    bVar37 = false;
    local_a4 = 0;
    local_cc = 0;
    local_a8 = 0;
    bVar6 = true;
  }
  local_c8 = puVar36 + puVar36[1];
  uVar2 = *local_c8;
  if ((uVar30 == 0x90) || (uVar30 == 0x8b)) {
    uVar29 = (ulong)(puVar36[2] - 0x7f);
    if ((ushort)(puVar36[2] - 0x7f) < 4) {
      if (uVar30 == 0x8b) {
        uVar29 = (ulong)(uVar2 - 0x7a);
        if (1 < (ushort)(uVar2 - 0x7a)) {
          iVar28 = 0;
          if (uVar2 == 0x78) goto LAB_001253ca;
          local_bc = 1;
          uVar32 = 1;
          local_b4 = 0;
          goto LAB_00124def;
        }
      }
      else {
LAB_00125604:
        if (uVar2 == 0x78) {
          uVar30 = 0x90;
          goto LAB_00125613;
        }
      }
      local_bc = 1;
      uVar32 = 1;
      uVar30 = 0x90;
      iVar28 = 0;
      local_b4 = 0;
    }
    else {
      uVar29 = *(ulong *)(param_2 + 0x40);
      if (uVar30 == 0x8b) {
        if ((ushort)(uVar2 - 0x7a) < 2) {
          iVar28 = 0;
          uVar30 = 0x90;
          uVar32 = (uint)(uVar29 != 0);
          local_b4 = 0;
          local_bc = uVar32;
        }
        else if (uVar29 == 0) {
          local_bc = 0;
          uVar32 = 0;
          iVar28 = 0;
          local_b4 = 0;
        }
        else {
          if (uVar2 == 0x78) goto LAB_00125613;
          local_bc = 1;
          uVar32 = 1;
          iVar28 = 0;
          local_b4 = 0;
        }
      }
      else {
        if (uVar29 != 0) goto LAB_00125604;
        local_bc = 0;
        uVar32 = 0;
        uVar30 = 0x90;
        iVar28 = 0;
        local_b4 = 0;
      }
    }
LAB_00124def:
    if (!bVar37) goto LAB_00124df7;
LAB_0012541a:
    sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
    piVar33 = (int *)*param_1;
    if (*piVar33 == 0) {
      piVar33[0x26] = 0;
      iVar17 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
      if (iVar17 == 4) {
        emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
      }
    }
    if (local_cc != 0x27) {
      sljit_emit_op1(piVar31,0x20,0x8e,(long)local_a8,1,0);
      uVar29 = extraout_RDX_00;
      goto LAB_00124df7;
    }
    sljit_emit_op2(piVar31,0x40,0x8e,(long)local_a8,1,0,0x7f,1);
    uVar29 = extraout_RDX_04;
    if (uVar35 != 0x7a) {
      if (uVar35 == 0x7b) {
        if (local_be != 0x98) {
          sljit_emit_op1(piVar31,0x20,2,0,0x8c,0);
          goto LAB_00126c0b;
        }
        local_98 = sljit_emit_label(piVar31);
        goto LAB_001264a1;
      }
      if (local_be != 0x97) goto LAB_00124e25;
      goto LAB_001265c7;
    }
LAB_00125528:
    if (local_be == 0x97) {
      sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
      piVar33 = (int *)*param_1;
      if (*piVar33 == 0) {
        piVar33[0x26] = 0;
        iVar17 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
        if (iVar17 == 4) {
          emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      uVar18 = 0;
LAB_001255cd:
      auVar40 = sljit_emit_cmp(piVar31,uVar18,1,0,0x7f,0);
      local_88 = 0;
      local_98 = 0;
    }
    else {
LAB_00124e25:
      local_88 = 0;
      local_98 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar29;
      auVar40 = auVar12 << 0x40;
    }
LAB_00124e40:
    local_90 = auVar40._0_8_;
    if (iVar28 != 0) {
LAB_00124e4a:
      if (*(int *)(param_1 + 0xd) == 0) {
        auVar40._8_8_ = param_1[5];
        auVar40._0_8_ = local_90;
        if (*(char *)(param_1[5] + (long)(iVar28 >> 1)) == '\0') {
          sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
          sljit_emit_op1(piVar31,0x20,4,0,0x8c,8);
          piVar33 = (int *)*param_1;
          if (*piVar33 == 0) {
            piVar33[0x26] = 0;
            iVar17 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,0x10);
            if (iVar17 == 4) {
              emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,0x10);
            }
          }
          sljit_emit_op1(piVar31,0x20,0x8e,(long)(iVar28 * 8 + *(int *)((long)param_1 + 0x44)),1,0);
          sljit_emit_op1(piVar31,0x20,0x8e,(long)(iVar28 * 8 + 8 + *(int *)((long)param_1 + 0x44)),4
                         ,0);
          auVar40._8_8_ = extraout_RDX_01;
        }
      }
      else {
        sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
        sljit_emit_op1(piVar31,0x20,4,0,0x8c,8);
        sljit_emit_op1(piVar31,0x20,0x8e,(long)*(int *)(param_1 + 0xd),1,0);
        sljit_emit_op1(piVar31,0x20,1,0,0x8c,0x10);
        piVar33 = (int *)*param_1;
        if (*piVar33 == 0) {
          piVar33[0x26] = 0;
          iVar17 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,0x18);
          if (iVar17 == 4) {
            emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,0x18);
          }
        }
        sljit_emit_op1(piVar31,0x20,0x8e,(long)(iVar28 * 8 + *(int *)((long)param_1 + 0x44)),4,0);
        sljit_emit_op1(piVar31,0x20,0x8e,(long)(iVar28 * 8 + 8 + *(int *)((long)param_1 + 0x44)),1,0
                      );
        auVar40._8_8_ = extraout_RDX_02;
        auVar40._0_8_ = local_90;
      }
    }
    lVar25 = auVar40._8_8_;
    local_90 = auVar40._0_8_;
    if (uVar30 != 0x85) goto LAB_00124e79;
    if (-1 < *(int *)(param_2 + 0x40)) {
      sljit_emit_op1(piVar31,0x20,0xc,0,0x8e,(long)iVar15);
      uVar18 = sljit_emit_jump(piVar31,0x25);
      if (*piVar31 == 0) {
        lVar25 = *(long *)(piVar31 + 0x18);
        lVar21 = *(long *)(lVar25 + 8);
        uVar29 = lVar21 + 0x10;
        if (uVar29 < 0xff1) {
          *(ulong *)(lVar25 + 8) = uVar29;
          puVar19 = (undefined8 *)(lVar25 + 0x10 + lVar21);
        }
        else {
          puVar24 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar31 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar31 + 0x12))[2]);
          if (puVar24 == (undefined8 *)0x0) {
            *piVar31 = 2;
            goto LAB_00126da0;
          }
          *puVar24 = *(undefined8 *)(piVar31 + 0x18);
          *(undefined8 **)(piVar31 + 0x18) = puVar24;
          puVar19 = puVar24 + 2;
          puVar24[1] = 0x10;
        }
        uVar20 = param_1[0x31];
        *puVar19 = uVar18;
        puVar19[1] = uVar20;
        param_1[0x31] = puVar19;
      }
LAB_00126da0:
      lVar25 = (long)(*(int *)(param_2 + 0x40) + -1) << 3;
      sljit_emit_op2(piVar31,0x40,0xc,0,0xc,0,0x7f);
    }
    local_40 = sljit_emit_jump(piVar31,0x24,lVar25);
    local_50 = 0;
  }
  else {
    if ((uVar30 != 0x8e) && (uVar30 != 0x89)) {
      if (uVar2 == 0x78) {
LAB_00125613:
        iVar28 = 0;
        goto LAB_001253ca;
      }
      local_bc = 0;
      uVar32 = 0;
      iVar28 = 0;
LAB_00124dca:
      local_b4 = 0;
      if (uVar30 == 0x85) {
        local_b4 = *(uint *)(param_2 + 0x40) & 1;
        *(int *)(param_2 + 0x40) = (int)*(uint *)(param_2 + 0x40) >> 1;
      }
      goto LAB_00124def;
    }
    uVar3 = puVar36[2];
    uVar29 = (ulong)uVar3;
    iVar28 = (uint)uVar3 + (uint)uVar3;
    if (uVar2 == 0x78) {
LAB_001253ca:
      uVar32 = 1;
      puVar23 = local_c8;
      do {
        uVar29 = (ulong)puVar23[1];
        uVar32 = uVar32 + 1;
        puVar23 = puVar23 + uVar29;
      } while (*puVar23 == 0x78);
      local_bc = 1;
      goto LAB_00124dca;
    }
    local_bc = 0;
    uVar32 = 0;
    local_b4 = 0;
    if (bVar37) goto LAB_0012541a;
LAB_00124df7:
    if (uVar35 == 0x7a) goto LAB_00125528;
    if (uVar35 != 0x7b) {
      if (local_be == 0x97) {
LAB_001265c7:
        sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
        piVar33 = (int *)*param_1;
        if (*piVar33 == 0) {
          piVar33[0x26] = 0;
          iVar17 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
          if (iVar17 == 4) {
            emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
          }
        }
        uVar18 = 1;
        goto LAB_001255cd;
      }
      if (local_cc == 0x29) {
        sljit_emit_op1(piVar31,0x20,0x8e,(long)local_a8,0x7f,1);
        auVar40 = sljit_emit_label(piVar31);
        local_88 = auVar40._0_8_;
        local_98 = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = auVar40._8_8_;
        auVar40 = auVar7 << 0x40;
        goto LAB_00124e40;
      }
      goto LAB_00124e25;
    }
    if (local_be == 0x98) {
      auVar40 = sljit_emit_label(piVar31);
      local_98 = auVar40._0_8_;
      local_88 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar40._8_8_;
      auVar40 = auVar8 << 0x40;
      if (local_cc != 0) goto LAB_001264a1;
      goto LAB_00124e40;
    }
    sljit_emit_op1(piVar31,0x20,2,0,0x8c,0);
    if (local_cc != 0) {
LAB_00126c0b:
      lVar25 = *(long *)(param_2 + 0x30);
      lVar21 = sljit_emit_cmp(piVar31,1,1,0,0x7f,0);
      if ((lVar21 != 0) && (lVar25 != 0)) {
        *(long *)(lVar21 + 0x18) = lVar25;
        *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if ((uVar30 != 0x85) && (piVar33 = (int *)*param_1, *piVar33 == 0)) {
        piVar33[0x26] = 0;
        iVar17 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
        if (iVar17 == 4) {
          emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
          local_98 = sljit_emit_label(piVar31);
          goto LAB_001264a1;
        }
      }
      local_98 = sljit_emit_label(piVar31);
LAB_001264a1:
      local_a0 = (long)local_a8;
      sljit_emit_op2(piVar31,0x40,0x8e,local_a0,0x8e,local_a0,0x7f,1);
      local_88 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = extraout_RDX_03;
      auVar40 = auVar9 << 0x40;
      goto LAB_00124e40;
    }
    if ((0x8b < uVar30) || (uVar30 == 0x85)) {
      lVar25 = (long)iVar15;
      if (uVar30 == 0x85) {
        if (*(int *)(param_2 + 0x40) < 0) {
          local_a0 = *(long *)(param_2 + 0x30);
          uVar18 = 0x8e;
        }
        else {
          sljit_emit_op1(piVar31,0x20,1,0,0x8e);
          local_a0 = *(long *)(param_2 + 0x30);
          uVar18 = 0x81;
          lVar25 = (long)((-2 - *(int *)(param_2 + 0x40)) * 8);
        }
        lVar25 = sljit_emit_cmp(piVar31,1,2,0,uVar18,lVar25);
        if ((local_a0 != 0) && (lVar25 != 0)) {
          *(long *)(lVar25 + 0x18) = local_a0;
          *(ulong *)(lVar25 + 0x10) = *(ulong *)(lVar25 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      else {
        lVar21 = *(long *)(param_2 + 0x30);
        lVar25 = sljit_emit_cmp(piVar31,1,2,0,0x8e,lVar25);
        if ((lVar21 != 0) && (lVar25 != 0)) {
          *(long *)(lVar25 + 0x18) = lVar21;
          *(ulong *)(lVar25 + 0x10) = *(ulong *)(lVar25 + 0x10) & 0xfffffffffffffffd | 1;
        }
        piVar33 = (int *)*param_1;
        if (*piVar33 == 0) {
          piVar33[0x26] = 0;
          iVar17 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f);
          if (iVar17 == 4) {
            emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
            auVar40 = sljit_emit_label(piVar31);
            local_98 = auVar40._0_8_;
            local_88 = 0;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = auVar40._8_8_;
            auVar40 = auVar11 << 0x40;
            goto LAB_00124e40;
          }
        }
      }
      auVar40 = sljit_emit_label(piVar31);
      local_98 = auVar40._0_8_;
      local_88 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar40._8_8_;
      auVar40 = auVar10 << 0x40;
      goto LAB_00124e40;
    }
    lVar25 = *(long *)(param_2 + 0x30);
    lVar21 = sljit_emit_jump(piVar31,0x24);
    if ((lVar21 == 0) || (lVar25 == 0)) {
      local_98 = sljit_emit_label(piVar31);
    }
    else {
      *(long *)(lVar21 + 0x18) = lVar25;
      *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
      local_98 = sljit_emit_label(piVar31);
    }
    local_88 = 0;
    local_90 = 0;
    if (iVar28 != 0) goto LAB_00124e4a;
LAB_00124e79:
    if ((uVar30 == 0x90) || (uVar30 == 0x8b)) {
      if (local_bc != 0) {
        sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
        piVar33 = (int *)*param_1;
        if (*piVar33 == 0) {
          piVar33[0x26] = 0;
          iVar17 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
          if (iVar17 == 4) {
            emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
          }
        }
        uVar32 = 2;
        local_50 = sljit_emit_cmp(piVar31,1,1,0,0x7f,0);
        local_40 = 0;
        goto LAB_00124eb5;
      }
    }
    else if (local_bc != 0) {
      sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
      piVar33 = (int *)*param_1;
      if (*piVar33 == 0) {
        piVar33[0x26] = 0;
        iVar17 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
        if (iVar17 == 4) {
          emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      if ((int)uVar32 < 4) {
        local_50 = sljit_emit_cmp(piVar31,1,1,0,0x7f,0);
        local_40 = 0;
        goto LAB_00124eb5;
      }
      if (*piVar31 == 0) {
        piVar31[0x26] = 1;
        puVar22 = (undefined1 *)emit_x86_instruction(piVar31,1,0,0,1,0);
        if (puVar22 != (undefined1 *)0x0) {
          puVar22[1] = puVar22[1] | 0x20;
          *puVar22 = 0xff;
        }
      }
      uVar18 = sljit_emit_label(piVar31);
      if (*(long *)(param_2 + 0x40) != 0) {
        *(undefined8 *)(*(long *)(param_2 + 0x40) + 8) = uVar18;
      }
      if ((*piVar31 == 0) &&
         (puVar22 = (undefined1 *)ensure_buf(piVar31,5), puVar22 != (undefined1 *)0x0)) {
        *puVar22 = 4;
        *(long *)(piVar31 + 0x20) = *(long *)(piVar31 + 0x20) + 4;
        *(undefined4 *)(puVar22 + 1) = 0xfa1e0ff3;
      }
    }
    local_40 = 0;
    local_50 = 0;
  }
LAB_00124eb5:
  compile_backtrackingpath(param_1,*(undefined8 *)(param_2 + 0x10));
  if (*piVar31 != 0) {
    return;
  }
  uVar29 = extraout_RDX;
  if (*(long *)(param_2 + 0x18) != 0) {
    auVar40 = sljit_emit_label(piVar31);
    uVar29 = auVar40._8_8_;
    plVar26 = *(long **)(param_2 + 0x18);
    if (plVar26 != (long *)0x0) {
      do {
        lVar25 = *plVar26;
        if ((lVar25 != 0) && (auVar40._0_8_ != 0)) {
          *(long *)(lVar25 + 0x18) = auVar40._0_8_;
          uVar29 = *(ulong *)(lVar25 + 0x10) & 0xfffffffffffffffd | 1;
          *(ulong *)(lVar25 + 0x10) = uVar29;
        }
        plVar26 = (long *)plVar26[1];
      } while (plVar26 != (long *)0x0);
    }
  }
  iVar17 = iVar28 >> 1;
  if ((uVar30 == 0x8b) || (uVar30 == 0x90)) {
    lVar25 = *(long *)(param_2 + 0x40);
    if ((ushort)(puVar36[2] - 0x7f) < 4) {
      if ((-1 < *(int *)(lVar25 + 0x30)) && ((puVar36[2] - 0x7f & 0xfffd) == 0)) {
        sljit_emit_op1(piVar31,0x20,0xc,0,0x8e,(long)*(int *)(lVar25 + 0x34));
        uVar18 = sljit_emit_jump(piVar31,0x25);
        if (*piVar31 == 0) {
          lVar21 = *(long *)(piVar31 + 0x18);
          lVar4 = *(long *)(lVar21 + 8);
          uVar29 = lVar4 + 0x10;
          if (uVar29 < 0xff1) {
            *(ulong *)(lVar21 + 8) = uVar29;
            puVar19 = (undefined8 *)(lVar21 + 0x10 + lVar4);
          }
          else {
            puVar24 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar31 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar31 + 0x12))[2]);
            if (puVar24 == (undefined8 *)0x0) {
              *piVar31 = 2;
              goto LAB_00127305;
            }
            *puVar24 = *(undefined8 *)(piVar31 + 0x18);
            *(undefined8 **)(piVar31 + 0x18) = puVar24;
            puVar19 = puVar24 + 2;
            puVar24[1] = 0x10;
          }
          uVar20 = param_1[0x31];
          *puVar19 = uVar18;
          puVar19[1] = uVar20;
          param_1[0x31] = puVar19;
        }
LAB_00127305:
        sljit_emit_op1(piVar31,0x20,1,0,0x8c,0xfffffffffffffff0);
        uVar29 = (long)(*(int *)(lVar25 + 0x30) + -1) << 3;
        sljit_emit_op2(piVar31,0x40,0xc,0,0xc,0,0x7f);
        sljit_emit_op1(piVar31,0x20,0x8e,(long)*(int *)(lVar25 + 0x34),1,0);
      }
      local_58 = sljit_emit_jump(piVar31,0x24,uVar29);
      lVar25 = sljit_emit_label(piVar31);
      plVar26 = *(long **)(*(long *)(param_2 + 0x40) + 0x28);
      if (plVar26 != (long *)0x0) {
        do {
          lVar21 = *plVar26;
          if ((lVar21 != 0) && (lVar25 != 0)) {
            *(long *)(lVar21 + 0x18) = lVar25;
            *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar26 = (long *)plVar26[1];
        } while (plVar26 != (long *)0x0);
      }
LAB_00125aca:
      if (local_bc != 0) {
LAB_00124f5a:
        bVar37 = local_cc == 0x28;
        local_78 = 0;
        bVar38 = local_be != 0x87;
        iVar14 = 1;
        uVar34 = (uint)bVar37;
        uVar27 = bVar37 + 1;
        if (!bVar38 && !bVar6) {
          uVar27 = uVar34;
        }
        uVar2 = *local_c8;
        *(undefined1 (*) [16])(param_2 + 8) = (undefined1  [16])0x0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        if (uVar2 == 0x78) goto LAB_001252ac;
LAB_00124fd9:
        if (uVar30 == 0x85) {
          match_once_common(param_1,uVar35,*(undefined4 *)(param_2 + 0x40),iVar15,1,local_b4);
          goto LAB_00126150;
        }
        if (local_cc == 0x28) goto LAB_00126157;
        uVar13 = uVar34;
        if (bVar38 || bVar6) {
          uVar13 = uVar27;
        }
        uVar5 = uVar13;
        if (iVar28 != 0) goto LAB_00125d70;
LAB_00125018:
        uVar13 = uVar13 + 1;
        do {
          uVar18 = *param_1;
          sljit_emit_op2(uVar18,0x42,0xc,0,0xc,0,0x7f,(long)(int)(uVar13 << 3));
          uVar18 = sljit_emit_cmp(uVar18,2,0xc,0,0xb,0);
          piVar33 = (int *)*param_1;
          if ((*piVar33 == 0) &&
             (puVar19 = (undefined8 *)ensure_abuf(piVar33,0x18), puVar19 != (undefined8 *)0x0)) {
            *puVar19 = uVar18;
            uVar20 = sljit_emit_label(piVar33);
            uVar18 = param_1[0x26];
            puVar19[1] = uVar20;
            puVar19[2] = uVar18;
            param_1[0x26] = puVar19;
          }
          do {
            if (local_cc == 0x28) {
              sljit_emit_op2(piVar31,0x42,0x8c,0,4,0,0x7f,1);
            }
            if (bVar38 || bVar6) {
              if (uVar35 == 0x79) {
                sljit_emit_op1(piVar31,0x20,0x8c,uVar34 * 8,0x7f);
              }
              else {
                sljit_emit_op1(piVar31,0x20,0x8c,bVar37 * '\b',2);
              }
            }
            if (iVar28 == 0) {
              if (uVar30 != 0x85) {
                lVar25 = (long)(int)(uVar5 << 3);
                if (3 < (int)uVar32) goto LAB_00125e37;
LAB_0012514a:
                sljit_emit_op1(piVar31,0x20,0x8c,lVar25,0x7f);
                goto LAB_00125169;
              }
              lVar25 = *(long *)(param_2 + 0x28);
              lVar21 = sljit_emit_jump(piVar31,0x24);
              if ((lVar25 != 0) && (lVar21 != 0)) {
                *(long *)(lVar21 + 0x18) = lVar25;
                *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            else {
              iVar16 = match_capture_common(param_1,uVar5,iVar28,iVar15);
              if (uVar30 != 0x85) {
                lVar25 = (long)(iVar16 << 3);
                if ((int)uVar32 < 4) goto LAB_0012514a;
LAB_00125e37:
                local_78 = sljit_emit_put_label_constprop_0(piVar31,lVar25);
              }
LAB_00125169:
              if (((iVar28 != 0) && (uVar35 == 0x7a)) &&
                 (*(char *)(param_1[5] + (long)iVar17) != '\0')) {
                sljit_emit_op1(piVar31,0x20,0x8e,
                               (long)(*(int *)((long)param_1 + 0x44) + 8 + iVar28 * 8),2);
              }
              lVar25 = *(long *)(param_2 + 0x28);
              lVar21 = sljit_emit_jump(piVar31,0x24);
              if ((lVar25 != 0) && (lVar21 != 0)) {
                *(long *)(lVar21 + 0x18) = lVar25;
                *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
              }
              if (uVar30 != 0x85) {
                if ((int)uVar32 < 4) {
                  lVar25 = sljit_emit_label(piVar31);
                  if ((lVar25 != 0) && (local_50 != 0)) {
                    *(long *)(local_50 + 0x18) = lVar25;
                    *(ulong *)(local_50 + 0x10) =
                         *(ulong *)(local_50 + 0x10) & 0xfffffffffffffffd | 1;
                  }
                  iVar14 = iVar14 + 1;
                  if (iVar14 < (int)uVar32) {
                    local_50 = sljit_emit_cmp(piVar31,1,1,0,0x7f);
                  }
                }
                else {
                  uVar18 = sljit_emit_label(piVar31);
                  if (local_78 != 0) {
                    *(undefined8 *)(local_78 + 8) = uVar18;
                  }
                  if ((*piVar31 == 0) &&
                     (puVar22 = (undefined1 *)ensure_buf(piVar31,5), puVar22 != (undefined1 *)0x0))
                  {
                    *puVar22 = 4;
                    *(long *)(piVar31 + 0x20) = *(long *)(piVar31 + 0x20) + 4;
                    *(undefined4 *)(puVar22 + 1) = 0xfa1e0ff3;
                  }
                }
              }
            }
            compile_backtrackingpath(param_1,*(undefined8 *)(param_2 + 0x10));
            if (*piVar31 != 0) {
              return;
            }
            if (*(long *)(param_2 + 0x18) != 0) {
              lVar25 = sljit_emit_label(piVar31);
              plVar26 = *(long **)(param_2 + 0x18);
              if (plVar26 != (long *)0x0) {
                do {
                  lVar21 = *plVar26;
                  if ((lVar21 != 0) && (lVar25 != 0)) {
                    *(long *)(lVar21 + 0x18) = lVar25;
                    *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
                  }
                  plVar26 = (long *)plVar26[1];
                } while (plVar26 != (long *)0x0);
              }
            }
            if (*local_c8 != 0x78) {
              if (local_58 != 0) {
                if (((puVar36[2] & 0xfffd) == 0x80) &&
                   (lVar25 = *(long *)(param_2 + 0x40), -1 < *(int *)(lVar25 + 0x30))) {
                  sljit_emit_op1(piVar31,0x20,0xc,0,0x8e,(long)*(int *)(lVar25 + 0x34));
                  uVar18 = sljit_emit_jump(piVar31,0x25);
                  if (*piVar31 == 0) {
                    lVar21 = *(long *)(piVar31 + 0x18);
                    lVar4 = *(long *)(lVar21 + 8);
                    uVar29 = lVar4 + 0x10;
                    if (uVar29 < 0xff1) {
                      *(ulong *)(lVar21 + 8) = uVar29;
                      puVar19 = (undefined8 *)(lVar21 + 0x10 + lVar4);
                    }
                    else {
                      puVar24 = (undefined8 *)
                                (*(code *)**(undefined8 **)(piVar31 + 0x12))
                                          (0x1000,(*(undefined8 **)(piVar31 + 0x12))[2]);
                      if (puVar24 == (undefined8 *)0x0) {
                        *piVar31 = 2;
                        goto LAB_00127735;
                      }
                      *puVar24 = *(undefined8 *)(piVar31 + 0x18);
                      *(undefined8 **)(piVar31 + 0x18) = puVar24;
                      puVar19 = puVar24 + 2;
                      puVar24[1] = 0x10;
                    }
                    uVar20 = param_1[0x31];
                    *puVar19 = uVar18;
                    puVar19[1] = uVar20;
                    param_1[0x31] = puVar19;
                  }
LAB_00127735:
                  sljit_emit_op1(piVar31,0x20,1,0,0x8c,0xfffffffffffffff0);
                  sljit_emit_op2(piVar31,0x40,0xc,0,0xc,0,0x7f,
                                 (long)(*(int *)(lVar25 + 0x30) + -1) << 3);
                  sljit_emit_op1(piVar31,0x20,0x8e,(long)*(int *)(lVar25 + 0x34),1,0);
                }
                lVar25 = sljit_emit_label(piVar31);
                if (lVar25 != 0) {
                  *(long *)(local_58 + 0x18) = lVar25;
                  *(ulong *)(local_58 + 0x10) = *(ulong *)(local_58 + 0x10) & 0xfffffffffffffffd | 1
                  ;
                }
              }
              if ((iVar15 == 0) && (piVar33 = (int *)*param_1, *piVar33 == 0)) {
                piVar33[0x26] = 0;
                iVar14 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
                if (iVar14 == 4) {
                  emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
                }
              }
              goto LAB_00125708;
            }
            *(undefined8 *)(param_2 + 0x18) = 0;
            *(undefined1 (*) [16])(param_2 + 8) = (undefined1  [16])0x0;
LAB_001252ac:
            puVar23 = local_c8 + 2;
            puVar1 = local_c8 + local_c8[1];
            if ((uVar30 != 0x81) && (uVar30 != 0x84)) {
              if ((uVar30 != 0x8b) && (uVar30 != 0x90)) {
                if (uVar30 != 0x85) {
                  sljit_emit_op1(piVar31,0x20,2,0);
                  goto LAB_00125333;
                }
                sljit_emit_op1(piVar31,0x20,2,0);
              }
              compile_matchingpath(param_1,puVar23,puVar1,param_2);
              local_c8 = puVar1;
              if (*piVar31 != 0) {
                return;
              }
              goto LAB_00124fd9;
            }
            sljit_emit_op1(piVar31,0x20,2,0);
            if ((ushort)(local_c8[2] - 0x7d) < 2) {
              bVar39 = local_c8[2] == 0x7e;
              puVar23 = (ushort *)compile_reverse_matchingpath(param_1,puVar23,param_2);
            }
            else {
LAB_00125333:
              bVar39 = false;
            }
            compile_matchingpath(param_1,puVar23,puVar1);
            if (*piVar31 != 0) {
              return;
            }
            if (uVar30 == 0x84) {
              if (bVar39) {
                uVar18 = sljit_emit_cmp(piVar31,2,2,0);
                lVar25 = *(long *)(param_2 + 0x10);
                if (*piVar31 == 0) {
                  lVar21 = *(long *)(piVar31 + 0x18);
                  lVar4 = *(long *)(lVar21 + 8);
                  uVar29 = lVar4 + 0x10;
                  if (uVar29 < 0xff1) {
                    *(ulong *)(lVar21 + 8) = uVar29;
                    puVar19 = (undefined8 *)(lVar21 + 0x10 + lVar4);
                  }
                  else {
                    puVar24 = (undefined8 *)
                              (*(code *)**(undefined8 **)(piVar31 + 0x12))
                                        (0x1000,(*(undefined8 **)(piVar31 + 0x12))[2]);
                    if (puVar24 == (undefined8 *)0x0) {
                      *piVar31 = 2;
                      goto LAB_00126bbd;
                    }
                    *puVar24 = *(undefined8 *)(piVar31 + 0x18);
                    *(undefined8 **)(piVar31 + 0x18) = puVar24;
                    puVar19 = puVar24 + 2;
                    puVar24[1] = 0x10;
                  }
                  uVar20 = *(undefined8 *)(lVar25 + 8);
                  *puVar19 = uVar18;
                  puVar19[1] = uVar20;
                  *(undefined8 **)(lVar25 + 8) = puVar19;
                }
              }
LAB_00126bbd:
              local_c8 = puVar1;
              if (*(int *)(param_1[3] + ((long)puVar36 + (2 - param_1[2]) >> 1) * 4) != 0) {
                sljit_emit_op1(piVar31,0x20,0xd);
              }
            }
            else if (uVar30 == 0x86) {
              match_script_run_common(param_1,iVar15,param_2);
              local_c8 = puVar1;
            }
            else {
              local_c8 = puVar1;
              if (uVar30 != 0x83) goto LAB_00124fd9;
              sljit_emit_op1(piVar31,0x20,2);
            }
LAB_00126150:
            if (local_cc == 0x28) {
LAB_00126157:
              sljit_emit_op1(piVar31,0x20,4);
            }
            if (bVar38 || bVar6) {
              uVar13 = uVar27;
              if (iVar28 != 0) goto LAB_00125d70;
joined_r0x0012619b:
              uVar5 = uVar27;
              if (uVar30 != 0x85) goto LAB_00125018;
              break;
            }
            uVar13 = uVar34;
            uVar5 = uVar34;
            if (iVar28 != 0) {
LAB_00125d70:
              uVar13 = (uVar27 + 1) - (uint)(*(int *)(param_1 + 0xd) == 0);
              uVar5 = uVar27;
              if (*(char *)(param_1[5] + (long)iVar17) == '\0') {
                uVar13 = uVar13 + 2;
                goto joined_r0x0012619b;
              }
            }
            if (uVar30 != 0x85) goto LAB_00125018;
          } while (uVar13 == 0);
        } while( true );
      }
      if (iVar28 == 0) goto LAB_00125722;
      goto LAB_00125ae6;
    }
    if (lVar25 != 0) {
      local_58 = sljit_emit_jump(piVar31,0x24);
      lVar25 = sljit_emit_label(piVar31);
      plVar26 = *(long **)(param_2 + 0x40);
      if (plVar26 != (long *)0x0) {
        do {
          lVar21 = *plVar26;
          if ((lVar21 != 0) && (lVar25 != 0)) {
            *(long *)(lVar21 + 0x18) = lVar25;
            *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar26 = (long *)plVar26[1];
        } while (plVar26 != (long *)0x0);
      }
      goto LAB_00125aca;
    }
    local_58 = 0;
    if (local_bc != 0) goto LAB_00124f5a;
    if (iVar28 != 0) goto LAB_00125ae6;
LAB_00125731:
    if ((1L << ((byte)(uVar30 - 0x83) & 0x3f) & 0x220bU) != 0) {
LAB_001268b6:
      sljit_emit_op1(piVar31,0x20,0x8e,(long)iVar15,0x8c,0);
      piVar33 = (int *)*param_1;
      if (*piVar33 == 0) {
        piVar33[0x26] = 0;
        iVar15 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
        if (iVar15 == 4) {
          uVar18 = 8;
LAB_00126921:
          emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,uVar18);
        }
      }
      goto LAB_00125bfa;
    }
    if (uVar30 - 0x83 != 2) goto LAB_00125bfa;
    if (*(int *)(param_2 + 0x40) < 0) {
      if ((uVar35 == 0x7a) || ((puVar36[puVar36[1]] == 0x78 && (uVar35 != 0x7b)))) {
        local_b4 = local_b4 + 1;
        goto LAB_00125781;
      }
      if (local_b4 != 0) goto LAB_00125781;
    }
    else {
      iVar28 = 2;
      if (uVar35 == 0x79) {
        iVar28 = (puVar36[puVar36[1]] == 0x78) + 1;
      }
      local_b4 = local_b4 + *(int *)(param_2 + 0x40) + iVar28;
LAB_00125781:
      piVar33 = (int *)*param_1;
      if (*piVar33 == 0) {
        piVar33[0x26] = 0;
        iVar28 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,(long)(int)(local_b4 << 3));
        if (iVar28 == 4) {
          emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,(long)(int)(local_b4 << 3));
        }
      }
    }
    lVar25 = sljit_emit_label(piVar31);
    if ((lVar25 != 0) && (local_40 != 0)) {
      *(long *)(local_40 + 0x18) = lVar25;
      *(ulong *)(local_40 + 0x10) = *(ulong *)(local_40 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if (-1 < (int)*(uint *)(param_2 + 0x40)) {
      sljit_emit_op1(piVar31,0x20,0x8e,(long)iVar15,0x8c,(long)(int)(~*(uint *)(param_2 + 0x40) * 8)
                    );
      goto LAB_00125bfa;
    }
    if (uVar35 == 0x7b) {
      sljit_emit_op1(piVar31,0x20,1,0,0x8c,8);
      piVar33 = (int *)*param_1;
      if (*piVar33 == 0) {
        piVar33[0x26] = 0;
        iVar28 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,0x10);
        if (iVar28 == 4) {
          emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,0x10);
        }
      }
      sljit_emit_op1(piVar31,0x20,0x8e,(long)iVar15,1,0);
      if (local_cc == 0x29) goto LAB_00126ed4;
      sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
      goto LAB_0012759d;
    }
    if (local_cc == 0x29) goto LAB_00126ed4;
    if (uVar35 != 0x7a) goto LAB_00125855;
LAB_00126a60:
    sljit_emit_op1(piVar31,0x20,2,0,0x8c,0);
    if (local_be != 0x97) {
      piVar33 = (int *)*param_1;
      if (*piVar33 == 0) {
        piVar33[0x26] = 0;
        iVar15 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
        if (iVar15 == 4) {
          emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      lVar25 = *(long *)(param_2 + 0x30);
      lVar21 = sljit_emit_cmp(piVar31,1,2,0,0x7f,0);
      if (lVar25 == 0) {
        return;
      }
      if (lVar21 == 0) {
        return;
      }
      *(long *)(lVar21 + 0x18) = lVar25;
      *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
      return;
    }
    lVar25 = *(long *)(param_2 + 0x30);
    lVar21 = sljit_emit_cmp(piVar31,1,2,0,0x7f,0);
    if ((lVar21 != 0) && (lVar25 != 0)) {
      *(long *)(lVar21 + 0x18) = lVar25;
      *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
    }
    sljit_emit_op1(piVar31,0x20,2,0,0x8c,8);
    lVar25 = *(long *)(param_2 + 0x38);
    lVar21 = sljit_emit_jump(piVar31,0x24);
    if ((lVar25 != 0) && (lVar21 != 0)) {
      *(long *)(lVar21 + 0x18) = lVar25;
      *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar25 = sljit_emit_label(piVar31);
    if ((lVar25 != 0) && (local_90 != 0)) {
      *(long *)(local_90 + 0x18) = lVar25;
      *(ulong *)(local_90 + 0x10) = *(ulong *)(local_90 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  else {
    if (local_bc != 0) {
      local_58 = 0;
      goto LAB_00124f5a;
    }
LAB_00125708:
    if (iVar28 == 0) {
      if (uVar30 == 0x84) {
        if (*(int *)(param_1[3] + ((long)puVar36 + (2 - param_1[2]) >> 1) * 4) == 0)
        goto LAB_001268b6;
        sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
        sljit_emit_op1(piVar31,0x20,4,0,0x8c,8);
        lVar25 = (long)iVar15 + 8;
        sljit_emit_op1(piVar31,0x20,0xd,0,0x8e,lVar25);
        sljit_emit_op1(piVar31,0x20,0x8e,(long)iVar15,1,0);
        sljit_emit_op1(piVar31,0x20,0x8e,lVar25,4,0);
        piVar33 = (int *)*param_1;
        if (*piVar33 == 0) {
          piVar33[0x26] = 0;
          iVar15 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,0x20);
          if (iVar15 != 4) goto LAB_00125bfa;
          uVar18 = 0x20;
          goto LAB_00126921;
        }
      }
      else {
LAB_00125722:
        if (uVar30 - 0x83 < 0xe) goto LAB_00125731;
      }
      goto LAB_00125bfa;
    }
LAB_00125ae6:
    if (*(char *)(param_1[5] + (long)iVar17) == '\0') {
      sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
      piVar33 = (int *)*param_1;
      if (*piVar33 == 0) {
        piVar33[0x26] = 0;
        iVar28 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
        if (iVar28 == 4) {
          emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      sljit_emit_op1(piVar31,0x20,0x8e,(long)iVar15,1,0);
    }
    else {
      sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
      sljit_emit_op1(piVar31,0x20,4,0,0x8c,8);
      piVar33 = (int *)*param_1;
      if (*piVar33 == 0) {
        piVar33[0x26] = 0;
        iVar15 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,0x10);
        if (iVar15 == 4) {
          emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,0x10);
        }
      }
      sljit_emit_op1(piVar31,0x20,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar28 * 8),1,0);
      sljit_emit_op1(piVar31,0x20,0x8e,(long)(iVar28 * 8 + 8 + *(int *)((long)param_1 + 0x44)),4,0);
    }
LAB_00125bfa:
    if (local_cc == 0x29) {
LAB_00126ed4:
      sljit_emit_op2(piVar31,0x40,1,0,0x8e,(long)local_a8,0x7f,1);
      sljit_emit_op1(piVar31,0x20,0x8e,(long)local_a8,1,0);
      lVar25 = sljit_emit_cmp(piVar31,5,1,0,0x7f,(long)local_a4);
      if ((lVar25 != 0) && (local_88 != 0)) {
        *(long *)(lVar25 + 0x18) = local_88;
        *(ulong *)(lVar25 + 0x10) = *(ulong *)(lVar25 + 0x10) & 0xfffffffffffffffd | 1;
      }
      return;
    }
    if (uVar35 == 0x7a) goto LAB_00126a60;
    if (uVar35 != 0x7b) {
LAB_00125855:
      if (local_be != 0x97) {
        return;
      }
      sljit_emit_op1(piVar31,0x20,2,0,0x8c,0);
      lVar25 = *(long *)(param_2 + 0x38);
      lVar21 = sljit_emit_jump(piVar31,0x24);
      if ((lVar25 != 0) && (lVar21 != 0)) {
        *(long *)(lVar21 + 0x18) = lVar25;
        *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar25 = sljit_emit_label(piVar31);
      if (local_90 == 0) {
        return;
      }
      if (lVar25 == 0) {
        return;
      }
      *(long *)(local_90 + 0x18) = lVar25;
      *(ulong *)(local_90 + 0x10) = *(ulong *)(local_90 + 0x10) & 0xfffffffffffffffd | 1;
      return;
    }
    sljit_emit_op1(piVar31,0x20,1,0,0x8c,0);
    if (uVar30 == 0x85) {
LAB_0012759d:
      lVar25 = sljit_emit_cmp(piVar31,1,1,0,0x7f,0);
      if ((lVar25 != 0) && (local_98 != 0)) {
        *(long *)(lVar25 + 0x18) = local_98;
        *(ulong *)(lVar25 + 0x10) = *(ulong *)(lVar25 + 0x10) & 0xfffffffffffffffd | 1;
        if (uVar30 != 0x85) goto LAB_00125cee;
      }
      piVar31 = (int *)*param_1;
      cVar41 = (local_be == 0x98) * '\b' + '\b';
      if (*piVar31 != 0) {
        return;
      }
      piVar31[0x26] = 0;
      iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,cVar41);
      if (iVar15 != 4) {
        return;
      }
      goto LAB_00125d47;
    }
    piVar33 = (int *)*param_1;
    if (*piVar33 == 0) {
      piVar33[0x26] = 0;
      iVar15 = emit_lea_binary(piVar33,0xc,0,0xc,0,0x7f,8);
      if (iVar15 == 4) {
        emit_cum_binary(piVar33,0x5030100,0xc,0,0xc,0,0x7f,8);
      }
    }
    lVar25 = sljit_emit_cmp(piVar31,1,1,0,0x7f,0);
    if ((local_98 != 0) && (lVar25 != 0)) {
      *(long *)(lVar25 + 0x18) = local_98;
      *(ulong *)(lVar25 + 0x10) = *(ulong *)(lVar25 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_00125cee:
    if (local_be != 0x98) {
      return;
    }
  }
  piVar31 = (int *)*param_1;
  if (*piVar31 != 0) {
    return;
  }
  piVar31[0x26] = 0;
  iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
  if (iVar15 != 4) {
    return;
  }
  cVar41 = '\b';
LAB_00125d47:
  emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,cVar41);
  return;
}



void compile_backtrackingpath(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int *piVar15;
  ushort *puVar16;
  int *piVar17;
  undefined8 uVar18;
  long in_FS_OFFSET;
  undefined8 uVar19;
  long local_c0;
  undefined2 local_9c;
  short local_9a;
  undefined4 local_98;
  undefined1 local_94 [4];
  long *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  piVar1 = (int *)*param_1;
  uVar2 = param_1[7];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    do {
      if (param_2[1] != 0) {
        lVar7 = sljit_emit_label(piVar1);
        plVar13 = (long *)param_2[1];
        if (plVar13 != (long *)0x0) {
          do {
            lVar11 = *plVar13;
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            plVar13 = (long *)plVar13[1];
          } while (plVar13 != (long *)0x0);
        }
      }
      puVar16 = (ushort *)param_2[4];
      uVar4 = *puVar16;
      if (uVar4 < 0x90) {
        if (0x7e < uVar4) {
          uVar14 = 1L << ((char)uVar4 + 0x81U & 0x3f);
          if ((uVar14 & 0xb5f0) != 0) goto switchD_0012796d_caseD_90;
          if ((uVar14 & 0x14a00) != 0) {
            piVar15 = (int *)*param_1;
            if (*(int *)((long)param_2 + 0x2c) < 0) goto LAB_001283b0;
            goto LAB_00128610;
          }
          if ((uVar14 & 0xf) != 0) {
            compile_assert_backtrackingpath(param_1,param_2);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00127ff1;
          }
          goto switchD_001278d6_caseD_78;
        }
        if (uVar4 < 0x6e) {
          if (uVar4 == 3) {
            sljit_emit_op1(piVar1,0x20,1,0,0x8c,0);
            piVar15 = (int *)*param_1;
            if (*piVar15 == 0) {
              piVar15[0x26] = 0;
              iVar5 = emit_lea_binary(piVar15,0xc,0,0xc,0,0x7f,8);
              if (iVar5 == 4) {
                emit_cum_binary(piVar15,0x5030100,0xc,0,0xc,0,0x7f,8);
              }
            }
            sljit_emit_op1(piVar1,0x20,0x8e,(long)*(int *)((long)param_1 + 0x44),1,0);
          }
          else if ((ushort)(uVar4 - 0x21) < 0x41) goto switchD_001278d6_caseD_6e;
          goto switchD_001278d6_caseD_78;
        }
        switch(uVar4) {
        case 0x6e:
        case 0x6f:
        case 0x70:
switchD_001278d6_caseD_6e:
          local_98 = 0;
          local_90 = (long *)0x0;
          piVar15 = (int *)*param_1;
          iVar5 = *(int *)(param_1[3] + ((long)puVar16 - param_1[2] >> 1) * 4);
          if (iVar5 == 0) {
            local_c0._0_4_ = 8;
            uVar18 = 0x8c;
          }
          else {
            local_c0._0_4_ = iVar5 + 8;
            uVar18 = 0x8e;
          }
          uVar8 = get_iterator_parameters_constprop_0
                            (param_1,puVar16,&local_9c,&local_9a,&local_98,local_94,local_88);
          switch(local_9c) {
          case 0x21:
          case 0x27:
            if ((local_9a != 0x11) && (local_9a != 0x16)) {
              lVar7 = (long)iVar5;
              if (*(int *)(param_2 + 7) == 0) {
                sljit_emit_op1(piVar15,0x20,2,0,uVar18,lVar7);
                local_c0 = sljit_emit_cmp(piVar15,5,2,0,uVar18);
                move_back(param_1,0,1);
                sljit_emit_op1(piVar15,0x20,uVar18,lVar7,2,0);
                lVar7 = param_2[5];
                lVar11 = sljit_emit_jump(piVar15,0x24);
                if ((lVar7 != 0) && (lVar11 != 0)) {
                  *(long *)(lVar11 + 0x18) = lVar7;
                  *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              else {
                sljit_emit_op1(piVar15,0x20,2,0,uVar18,lVar7);
                sljit_emit_op1(piVar15,0x20,4,0,uVar18,(long)(int)local_c0);
                sljit_emit_op2(piVar15,0x42,2,0,2,0,0x7f,2);
                local_c0 = sljit_emit_cmp(piVar15,5,2,0,4,0);
                lVar11 = sljit_emit_label(piVar15);
                sljit_emit_op1(piVar15,0x23,1,0,0x82,0xfffffffffffffffe);
                sljit_emit_op1(piVar15,0x20,uVar18,lVar7,2,0);
                iVar6 = *(int *)(param_2 + 6);
                if ((iVar6 != 0) && (*piVar15 == 0)) {
                  piVar15[0x26] = 0;
                  emit_cum_binary(piVar15,0xd0b0908,1,0,1,0,0x7f,iVar6);
                }
                lVar7 = param_2[5];
                lVar9 = sljit_emit_cmp(piVar15,0,1,0,0x7f);
                if ((lVar9 != 0) && (lVar7 != 0)) {
                  *(long *)(lVar9 + 0x18) = lVar7;
                  *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
                }
                move_back(param_1,0,1);
                lVar7 = sljit_emit_cmp(piVar15,4,2);
                if ((lVar7 != 0) && (lVar11 != 0)) {
                  *(long *)(lVar7 + 0x18) = lVar11;
                  *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              lVar7 = sljit_emit_label(piVar15);
              if ((lVar7 != 0) && (local_c0 != 0)) {
                *(long *)(local_c0 + 0x18) = lVar7;
                *(ulong *)(local_c0 + 0x10) = *(ulong *)(local_c0 + 0x10) & 0xfffffffffffffffd | 1;
              }
              goto LAB_00128c5d;
            }
            lVar7 = sljit_emit_label(piVar15);
            for (plVar13 = (long *)param_2[6]; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1])
            {
              lVar11 = *plVar13;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op1(piVar15,0x20,2,0,0x8c,0);
            piVar17 = (int *)*param_1;
            if (*piVar17 == 0) {
              piVar17[0x26] = 0;
              iVar5 = emit_lea_binary(piVar17,0xc,0,0xc,0,0x7f,8);
              if (iVar5 == 4) {
                emit_cum_binary(piVar17,0x5030100,0xc,0,0xc,0,0x7f,8);
              }
            }
            lVar7 = param_2[5];
            lVar11 = sljit_emit_cmp(piVar15,1,2);
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            goto switchD_00127bb7_caseD_23;
          case 0x22:
            sljit_emit_op1(piVar15,0x20,2,0,uVar18,(long)iVar5);
            compile_char1_matchingpath(param_1,local_9a,uVar8,&local_90,1);
            sljit_emit_op1(piVar15,0x20,uVar18,(long)iVar5,2,0);
            lVar7 = param_2[5];
            lVar11 = sljit_emit_jump(piVar15,0x24);
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_label(piVar15);
            for (plVar13 = local_90; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
              lVar11 = *plVar13;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            break;
          default:
            goto switchD_00127bb7_caseD_23;
          case 0x25:
            lVar11 = (long)iVar5;
            sljit_emit_op1(piVar15,0x20,2,0,uVar18,lVar11);
            sljit_emit_op1(piVar15,0x20,uVar18,lVar11,0x7f,0);
            lVar7 = param_2[5];
            lVar9 = sljit_emit_cmp(piVar15,1,2,0,0x7f,0);
            if ((lVar7 != 0) && (lVar9 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar7;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_jump(piVar15,0x24);
            lVar9 = sljit_emit_label(piVar15);
            for (plVar13 = (long *)param_2[6]; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1])
            {
              lVar3 = *plVar13;
              if ((lVar3 != 0) && (lVar9 != 0)) {
                *(long *)(lVar3 + 0x18) = lVar9;
                *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op1(piVar15,0x20,2,0,uVar18,lVar11);
            sljit_emit_op1(piVar15,0x20,uVar18,lVar11,0x7f,0);
            lVar11 = param_2[5];
            lVar9 = sljit_emit_jump(piVar15,0x24);
            if ((lVar11 != 0) && (lVar9 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar11;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar11 = sljit_emit_label(piVar15);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar7 + 0x18) = lVar11;
              *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
            }
            break;
          case 0x26:
            sljit_emit_op1(piVar15,0x20,2,0,uVar18,(long)iVar5);
            sljit_emit_op1(piVar15,0x20,uVar18,(long)iVar5,0x7f,0);
            lVar11 = sljit_emit_cmp(piVar15,0,2,0,0x7f);
            compile_char1_matchingpath(param_1,local_9a,uVar8,&local_90);
            lVar7 = param_2[5];
            lVar9 = sljit_emit_jump(piVar15,0x24);
            if ((lVar7 != 0) && (lVar9 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar7;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_label(piVar15);
            for (plVar13 = local_90; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
              lVar9 = *plVar13;
              if ((lVar9 != 0) && (lVar7 != 0)) {
                *(long *)(lVar9 + 0x18) = lVar7;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            lVar7 = sljit_emit_label(piVar15);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            break;
          case 0x28:
            sljit_emit_op1(piVar15,0x20,1,0,uVar18,(long)(int)local_c0);
            sljit_emit_op1(piVar15,0x20,2,0,uVar18,(long)iVar5);
            uVar19 = extraout_RDX_01;
            if (*piVar15 == 0) {
              piVar15[0x26] = 0;
              uVar19 = 1;
              emit_non_cum_binary(piVar15,0x2d2b2928,1,0,1,0,0x7f);
            }
            lVar7 = sljit_emit_jump(piVar15,0,uVar19);
            if (*piVar15 == 0) {
              lVar11 = *(long *)(piVar15 + 0x18);
              lVar9 = *(long *)(lVar11 + 8);
              uVar14 = lVar9 + 0x10;
              if (uVar14 < 0xff1) {
                *(ulong *)(lVar11 + 8) = uVar14;
                plVar13 = (long *)(lVar11 + 0x10 + lVar9);
              }
              else {
                puVar12 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar15 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar15 + 0x12))[2]);
                if (puVar12 == (undefined8 *)0x0) {
                  *piVar15 = 2;
                  goto LAB_00128e21;
                }
                *puVar12 = *(undefined8 *)(piVar15 + 0x18);
                *(undefined8 **)(piVar15 + 0x18) = puVar12;
                plVar13 = puVar12 + 2;
                puVar12[1] = 0x10;
              }
              *plVar13 = lVar7;
              plVar13[1] = (long)local_90;
              local_90 = plVar13;
            }
LAB_00128e21:
            sljit_emit_op1(piVar15,0x20,uVar18,(long)(int)local_c0,1,0);
            compile_char1_matchingpath(param_1,local_9a,uVar8,&local_90,1);
            sljit_emit_op1(piVar15,0x20,uVar18,(long)iVar5,2,0);
            lVar7 = param_2[5];
            lVar11 = sljit_emit_jump(piVar15,0x24);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_label(piVar15);
            for (plVar13 = local_90; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
              lVar11 = *plVar13;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
LAB_00128c5d:
            if ((iVar5 != 0) || (piVar17 = (int *)*param_1, *piVar17 != 0))
            goto switchD_00127bb7_caseD_23;
            piVar17[0x26] = 0;
            iVar5 = emit_lea_binary(piVar17,0xc,0,0xc,0,0x7f,0x10);
            if (iVar5 != 4) goto switchD_00127bb7_caseD_23;
            uVar18 = 0x10;
            goto LAB_00128cb3;
          }
          if ((iVar5 == 0) && (piVar17 = (int *)*param_1, *piVar17 == 0)) {
            piVar17[0x26] = 0;
            iVar5 = emit_lea_binary(piVar17,0xc,0,0xc,0,0x7f,8);
            if (iVar5 == 4) {
              uVar18 = 8;
LAB_00128cb3:
              emit_cum_binary(piVar17,0x5030100,0xc,0,0xc,0,0x7f,uVar18);
            }
          }
switchD_00127bb7_caseD_23:
          lVar7 = sljit_emit_label(piVar15);
          plVar13 = (long *)param_2[3];
          if (plVar13 != (long *)0x0) {
            do {
              lVar11 = *plVar13;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
              plVar13 = (long *)plVar13[1];
            } while (plVar13 != (long *)0x0);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00127ff1;
          }
          break;
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
          uVar18 = *param_1;
          if ((*(byte *)((long)puVar16 +
                        (-(ulong)((ushort)(uVar4 - 0x71) < 2) & 0xfffffffffffffffe) + 6) & 1) != 0)
          {
            sljit_emit_op1(uVar18,0x20,2,0,0x8c,0);
            lVar7 = param_2[5];
            lVar11 = sljit_emit_cmp(uVar18,1,2,0,0x7f);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_label(uVar18);
            for (plVar13 = (long *)param_2[3]; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1])
            {
              lVar11 = *plVar13;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op2(*param_1,0x40,0xc);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00127ff1;
          }
          lVar7 = sljit_emit_label(uVar18);
          for (plVar13 = (long *)param_2[3]; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
            lVar11 = *plVar13;
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          sljit_emit_op1(uVar18,0x20,2,0,0x8c,0);
          sljit_emit_op2(*param_1,0x40,0xc,0,0xc,0,0x7f,8);
          lVar7 = param_2[5];
          lVar11 = sljit_emit_cmp(uVar18,1,2);
          if ((lVar11 != 0) && (lVar7 != 0)) {
            *(long *)(lVar11 + 0x18) = lVar7;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
          }
          break;
        case 0x75:
          piVar15 = (int *)*param_1;
          if (*(int *)(param_2 + 7) == 0) {
            lVar7 = param_2[6];
            lVar11 = *(long *)(lVar7 + 0x10);
            if (lVar11 == 0) {
              uVar18 = sljit_emit_jump(piVar15,0x25);
              if (*piVar15 == 0) {
                lVar11 = *(long *)(piVar15 + 0x18);
                lVar9 = *(long *)(lVar11 + 8);
                uVar14 = lVar9 + 0x10;
                if (uVar14 < 0xff1) {
                  *(ulong *)(lVar11 + 8) = uVar14;
                  puVar12 = (undefined8 *)(lVar11 + 0x10 + lVar9);
                }
                else {
                  puVar10 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar15 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar15 + 0x12))[2]);
                  if (puVar10 == (undefined8 *)0x0) {
                    *piVar15 = 2;
                    goto LAB_00127e39;
                  }
                  *puVar10 = *(undefined8 *)(piVar15 + 0x18);
                  *(undefined8 **)(piVar15 + 0x18) = puVar10;
                  puVar12 = puVar10 + 2;
                  puVar10[1] = 0x10;
                }
                uVar8 = *(undefined8 *)(lVar7 + 0x20);
                *puVar12 = uVar18;
                puVar12[1] = uVar8;
                *(undefined8 **)(lVar7 + 0x20) = puVar12;
              }
            }
            else {
              lVar7 = sljit_emit_jump(piVar15,0x25);
              if (lVar7 != 0) {
                *(long *)(lVar7 + 0x18) = lVar11;
                *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
LAB_00127e39:
            lVar7 = param_2[5];
            lVar11 = sljit_emit_cmp(piVar15,1,1);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          else {
            compile_backtrackingpath(param_1,param_2[2]);
          }
          lVar7 = sljit_emit_label(piVar15);
          plVar13 = (long *)param_2[3];
          if (plVar13 != (long *)0x0) {
            do {
              lVar11 = *plVar13;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
              plVar13 = (long *)plVar13[1];
            } while (plVar13 != (long *)0x0);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00127ff1;
          }
          break;
        case 0x76:
        case 0x77:
          goto switchD_001278d6_caseD_76;
        case 0x7e:
          uVar18 = *param_1;
          sljit_emit_op1(uVar18,0x20,2,0,0x8c,0x10);
          lVar11 = sljit_emit_cmp(uVar18,3,2,0,0x8c);
          skip_valid_char_isra_0(*param_1,*(undefined4 *)(param_1 + 0x3c));
          sljit_emit_op1(uVar18,0x20,0x8c,0x10,2,0);
          lVar7 = param_2[5];
          lVar9 = sljit_emit_jump(uVar18,0x24);
          if ((lVar7 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar7;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          lVar7 = sljit_emit_label(uVar18);
          if ((lVar11 != 0) && (lVar7 != 0)) {
            *(long *)(lVar11 + 0x18) = lVar7;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar13 = (long *)param_2[3];
          if (plVar13 != (long *)0x0) {
            do {
              lVar11 = *plVar13;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
              plVar13 = (long *)plVar13[1];
            } while (plVar13 != (long *)0x0);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00127ff1;
          }
        }
        goto switchD_001278d6_caseD_78;
      }
      switch(uVar4) {
      case 0x90:
switchD_0012796d_caseD_90:
        compile_bracket_backtrackingpath(param_1,param_2);
        param_2 = (undefined8 *)*param_2;
        break;
      default:
        goto switchD_001278d6_caseD_78;
      case 0x97:
        puVar12 = param_2;
        if (puVar16[1] < 0x83) {
          compile_assert_backtrackingpath();
          param_2 = (undefined8 *)*param_2;
        }
        else {
LAB_00127daf:
          compile_bracket_backtrackingpath(param_1,puVar12);
          param_2 = (undefined8 *)*param_2;
        }
        break;
      case 0x98:
        param_2[3] = 0;
        *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
        if (0x82 < puVar16[1]) {
          compile_bracket_matchingpath(param_1,puVar16,param_2);
          puVar12 = (undefined8 *)param_2[2];
          goto LAB_00127daf;
        }
        local_50 = param_2[5];
        local_58 = 0;
        local_68._8_8_ = 0;
        local_68._0_8_ = puVar16;
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        compile_assert_matchingpath(param_1,puVar16,local_88);
        param_2 = (undefined8 *)*param_2;
        break;
      case 0x99:
        piVar15 = (int *)*param_1;
        if (*(int *)((long)param_2 + 0x2c) < 0) {
          uVar4 = puVar16[1];
          puVar16 = puVar16 + 1;
LAB_001283b0:
          if ((uVar4 == 0x8a) || (uVar4 == 0x8f)) {
            uVar4 = puVar16[2];
            sljit_emit_op1(piVar15,0x20,1,0,0x8c,0);
            sljit_emit_op1(piVar15,0x20,4,0,0x8c);
            sljit_emit_op1(piVar15,0x20,0x8e,
                           (long)(int)(*(int *)((long)param_1 + 0x44) + (uint)uVar4 * 0x10),1);
            if (*(int *)(param_1 + 0xd) != 0) {
              sljit_emit_op1(piVar15,0x20,1,0,0x8c,0x10);
            }
            sljit_emit_op1(piVar15,0x20,0x8e,
                           (long)(int)((uint)uVar4 * 0x10 + 8 + *(int *)((long)param_1 + 0x44)),4,0)
            ;
            if (*(int *)(param_1 + 0xd) != 0) {
              sljit_emit_op1(piVar15,0x20,0x8e,(long)*(int *)(param_1 + 0xd),1,0);
            }
          }
          lVar7 = sljit_emit_label(piVar15);
          for (plVar13 = (long *)param_2[3]; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
            lVar11 = *plVar13;
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          piVar15 = (int *)*param_1;
          iVar5 = *(int *)(param_2 + 6);
          if (*piVar15 == 0) {
            piVar15[0x26] = 0;
            iVar5 = emit_lea_binary(piVar15,0xc,0,0xc,0,0x7f,(long)(iVar5 * 8));
            if (iVar5 == 4) {
              emit_cum_binary(piVar15,0x5030100,0xc);
            }
          }
        }
        else {
LAB_00128610:
          sljit_emit_op1(piVar15,0x20,0xc,0,0x8e,(long)*(int *)(param_2 + 5));
          uVar18 = sljit_emit_jump(piVar15,0x25);
          if (*piVar15 == 0) {
            lVar7 = *(long *)(piVar15 + 0x18);
            lVar11 = *(long *)(lVar7 + 8);
            uVar14 = lVar11 + 0x10;
            if (uVar14 < 0xff1) {
              *(ulong *)(lVar7 + 8) = uVar14;
              puVar12 = (undefined8 *)(lVar7 + 0x10 + lVar11);
            }
            else {
              puVar10 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar15 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar15 + 0x12))[2]);
              if (puVar10 == (undefined8 *)0x0) {
                *piVar15 = 2;
                goto LAB_001286b0;
              }
              *puVar10 = *(undefined8 *)(piVar15 + 0x18);
              *(undefined8 **)(piVar15 + 0x18) = puVar10;
              puVar12 = puVar10 + 2;
              puVar10[1] = 0x10;
            }
            uVar8 = param_1[0x31];
            *puVar12 = uVar18;
            puVar12[1] = uVar8;
            param_1[0x31] = puVar12;
          }
LAB_001286b0:
          sljit_emit_op2(piVar15,0x40,0xc,0,0xc,0,0x7f);
          if (param_2[3] != 0) {
            lVar7 = sljit_emit_jump(piVar15,0x24);
            lVar11 = sljit_emit_label(piVar15);
            for (plVar13 = (long *)param_2[3]; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1])
            {
              lVar9 = *plVar13;
              if ((lVar9 != 0) && (lVar11 != 0)) {
                *(long *)(lVar9 + 0x18) = lVar11;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            piVar17 = (int *)*param_1;
            iVar5 = *(int *)(param_2 + 6);
            if (*piVar17 == 0) {
              piVar17[0x26] = 0;
              iVar6 = emit_lea_binary(piVar17,0xc,0,0xc,0,0x7f);
              if (iVar6 == 4) {
                emit_cum_binary(piVar17,0x5030100,0xc,0,0xc,0,0x7f,(long)(iVar5 * 8));
              }
            }
            lVar11 = sljit_emit_label(piVar15);
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar7 + 0x18) = lVar11;
              *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          sljit_emit_op1(piVar15,0x20,0x8e,(long)*(int *)(param_2 + 5),0x8c,
                         (long)(int)(~*(uint *)((long)param_2 + 0x2c) << 3));
        }
        goto switchD_001278d6_caseD_78;
      case 0x9a:
        sljit_emit_op1(piVar1,0x20,1,0,0x8c,(ulong)(*(int *)(param_1 + 0x16) != 0) << 5);
        if ((*(int *)(param_1 + 0x16) == 0) ||
           (sljit_emit_op1(piVar1,0x20,4,0,0x8c,0), *(int *)(param_1 + 0x16) == 0)) {
          uVar18 = 8;
        }
        else {
          uVar18 = 0x28;
        }
        piVar15 = (int *)*param_1;
        if (*piVar15 == 0) {
          piVar15[0x26] = 0;
          iVar5 = emit_lea_binary(piVar15,0xc,0,0xc,0,0x7f,uVar18);
          if (iVar5 == 4) {
            emit_cum_binary(piVar15,0x5030100,0xc,0,0xc,0,0x7f,uVar18);
          }
        }
        sljit_emit_op1(piVar1,0x20,0x8e,(long)*(int *)(param_1 + 0xc),1,0);
        if (*(int *)(param_1 + 0x16) != 0) {
          sljit_emit_op1(piVar1,0x20,0x8e,(long)*(int *)((long)param_1 + 100),4,0);
        }
        goto switchD_001278d6_caseD_78;
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
        piVar15 = (int *)*param_1;
        if ((ushort)(uVar4 - 0x9f) < 2) {
          if (param_1[7] == 0) {
            if (*(int *)((long)param_1 + 0xbc) != 0) goto LAB_0012889d;
            if (*(int *)(param_1 + 0x18) == 0) goto LAB_001287f7;
            uVar18 = sljit_emit_jump(piVar15,0x24);
            if (*piVar15 == 0) {
              lVar7 = *(long *)(piVar15 + 0x18);
              lVar11 = *(long *)(lVar7 + 8);
              uVar14 = lVar11 + 0x10;
              if (uVar14 < 0xff1) {
                *(ulong *)(lVar7 + 8) = uVar14;
                puVar12 = (undefined8 *)(lVar7 + 0x10 + lVar11);
              }
              else {
                puVar10 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar15 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar15 + 0x12))[2]);
                if (puVar10 == (undefined8 *)0x0) goto LAB_001297b5;
                *puVar10 = *(undefined8 *)(piVar15 + 0x18);
                *(undefined8 **)(piVar15 + 0x18) = puVar10;
                puVar12 = puVar10 + 2;
                puVar10[1] = 0x10;
              }
              uVar8 = param_1[0x2b];
              *puVar12 = uVar18;
              puVar12[1] = uVar8;
              param_1[0x2b] = puVar12;
            }
          }
          else {
            sljit_emit_op1(piVar15,0x20,0xc,0,0x8e,(long)*(int *)((long)param_1 + 100));
            sljit_emit_op1(piVar15,0x20,1,0,0x7f,1);
            sljit_emit_op1(piVar15,0x20,4,0,0x7f,*(undefined8 *)(param_1[7] + 0x30));
            lVar7 = sljit_emit_jump(piVar15,0x24);
            lVar11 = sljit_emit_label(piVar15);
            sljit_emit_op1(piVar15,0x20,0xc,0,0x8c,0);
            lVar9 = sljit_emit_label(piVar15);
            if ((lVar9 != 0) && (lVar7 != 0)) {
              *(long *)(lVar7 + 0x18) = lVar9;
              *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_cmp(piVar15,1,0x8c,8,1,0);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar7 + 0x18) = lVar11;
              *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_cmp(piVar15,1,0x8c,0x10,4,0);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar7 + 0x18) = lVar11;
              *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
            }
            uVar18 = sljit_emit_jump(piVar15,0x24);
            lVar7 = param_1[7];
            if (*piVar15 == 0) {
              lVar11 = *(long *)(piVar15 + 0x18);
              lVar9 = *(long *)(lVar11 + 8);
              uVar14 = lVar9 + 0x10;
              if (uVar14 < 0xff1) {
                *(ulong *)(lVar11 + 8) = uVar14;
                puVar12 = (undefined8 *)(lVar11 + 0x10 + lVar9);
              }
              else {
                puVar10 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar15 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar15 + 0x12))[2]);
                if (puVar10 == (undefined8 *)0x0) goto LAB_001297b5;
                *puVar10 = *(undefined8 *)(piVar15 + 0x18);
                *(undefined8 **)(piVar15 + 0x18) = puVar10;
                puVar12 = puVar10 + 2;
                puVar10[1] = 0x10;
              }
              uVar8 = *(undefined8 *)(lVar7 + 0x38);
              *puVar12 = uVar18;
              puVar12[1] = uVar8;
              *(undefined8 **)(lVar7 + 0x38) = puVar12;
            }
          }
        }
        else if (*(int *)((long)param_1 + 0xbc) == 0) {
          if (uVar4 == 0x9e) {
            sljit_emit_op1(piVar15,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 100));
            sljit_emit_op1(piVar15,0x20,2,0,0x7f,param_2[4] + 4);
            sljit_emit_icall_constprop_0_isra_0(piVar15,0x111,do_search_mark);
            sljit_emit_op1(piVar15,0x20,2,0,1,0);
            uVar18 = sljit_emit_cmp(piVar15,1,1,0,0x7f,0);
            iVar5 = *piVar15;
          }
          else {
            if (uVar4 == 0x9d) {
              uVar18 = 0x8c;
            }
            else {
LAB_001287f7:
              uVar18 = 0x7f;
            }
            sljit_emit_op1(piVar15,0x20,2,0,uVar18,0);
            uVar18 = sljit_emit_jump(piVar15,0x24);
            iVar5 = *piVar15;
          }
          if (iVar5 == 0) {
            lVar7 = *(long *)(piVar15 + 0x18);
            lVar11 = *(long *)(lVar7 + 8);
            uVar14 = lVar11 + 0x10;
            if (uVar14 < 0xff1) {
              *(ulong *)(lVar7 + 8) = uVar14;
              puVar12 = (undefined8 *)(lVar7 + 0x10 + lVar11);
            }
            else {
              puVar10 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar15 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar15 + 0x12))[2]);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001297b5;
              *puVar10 = *(undefined8 *)(piVar15 + 0x18);
              *(undefined8 **)(piVar15 + 0x18) = puVar10;
              puVar12 = puVar10 + 2;
              puVar10[1] = 0x10;
            }
            uVar8 = param_1[0x39];
            *puVar12 = uVar18;
            puVar12[1] = uVar8;
            param_1[0x39] = puVar12;
          }
        }
        else {
LAB_0012889d:
          lVar7 = param_1[0x22];
          if (lVar7 != 0) goto LAB_00127be2;
          uVar18 = sljit_emit_jump(piVar15,0x24);
          if (*piVar15 == 0) {
            lVar7 = *(long *)(piVar15 + 0x18);
            lVar11 = *(long *)(lVar7 + 8);
            uVar14 = lVar11 + 0x10;
            if (uVar14 < 0xff1) goto LAB_001292ef;
            puVar12 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar15 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar15 + 0x12))[2]);
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = *(undefined8 *)(piVar15 + 0x18);
              *(undefined8 **)(piVar15 + 0x18) = puVar12;
              puVar10 = puVar12 + 2;
              puVar12[1] = 0x10;
              goto LAB_00128380;
            }
LAB_001297b5:
            *piVar15 = 2;
          }
        }
        goto switchD_001278d6_caseD_78;
      case 0xa1:
      case 0xa2:
        if (*(int *)((long)param_1 + 0xbc) == 0) {
          sljit_emit_op1(piVar1,0x20,1,0,0x7f,0xffffffffffffffff);
        }
        lVar7 = param_1[0x22];
        piVar15 = piVar1;
        if (lVar7 == 0) {
          uVar18 = sljit_emit_jump(piVar1,0x24);
          if (*piVar1 == 0) {
            lVar7 = *(long *)(piVar1 + 0x18);
            lVar11 = *(long *)(lVar7 + 8);
            uVar14 = lVar11 + 0x10;
            if (uVar14 < 0xff1) {
LAB_001292ef:
              *(ulong *)(lVar7 + 8) = uVar14;
              puVar10 = (undefined8 *)(lVar7 + 0x10 + lVar11);
            }
            else {
              puVar12 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar1 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar1 + 0x12))[2]);
              if (puVar12 == (undefined8 *)0x0) {
                *piVar1 = 2;
                goto switchD_001278d6_caseD_78;
              }
              *puVar12 = *(undefined8 *)(piVar1 + 0x18);
              *(undefined8 **)(piVar1 + 0x18) = puVar12;
              puVar10 = puVar12 + 2;
              puVar12[1] = 0x10;
            }
LAB_00128380:
            uVar8 = param_1[0x2a];
            *puVar10 = uVar18;
            puVar10[1] = uVar8;
            param_1[0x2a] = puVar10;
          }
        }
        else {
LAB_00127be2:
          lVar11 = sljit_emit_jump(piVar15,0x24);
          if (lVar11 != 0) {
            param_2 = (undefined8 *)*param_2;
            *(long *)(lVar11 + 0x18) = lVar7;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            break;
          }
        }
switchD_001278d6_caseD_78:
        param_2 = (undefined8 *)*param_2;
        break;
      case 0xa3:
      case 0xa4:
      case 0xa5:
switchD_001278d6_caseD_76:
        lVar7 = sljit_emit_label(piVar1);
        plVar13 = (long *)param_2[3];
        if (plVar13 == (long *)0x0) goto switchD_001278d6_caseD_78;
        do {
          lVar11 = *plVar13;
          if ((lVar11 != 0) && (lVar7 != 0)) {
            *(long *)(lVar11 + 0x18) = lVar7;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar13 = (long *)plVar13[1];
        } while (plVar13 != (long *)0x0);
        param_2 = (undefined8 *)*param_2;
        break;
      case 0xab:
        plVar13 = param_2 + 5;
        piVar15 = (int *)*param_1;
        if (*plVar13 == 0) {
          iVar5 = *(int *)(param_2 + 8);
          if (*(int *)(param_2 + 8) < 0) {
            iVar5 = 0;
          }
          sljit_emit_op1(piVar15,0x20,1,0,0x8c,(long)(iVar5 * 8));
          piVar17 = (int *)*param_1;
          lVar11 = (long)(iVar5 * 8 + 0x18);
          lVar7 = extraout_RDX;
          if (*piVar17 == 0) {
            piVar17[0x26] = 0;
            lVar7 = lVar11;
            iVar5 = emit_lea_binary(piVar17,0xc,0,0xc,0,0x7f);
            if (iVar5 == 4) {
              emit_cum_binary(piVar17,0x5030100,0xc,0,0xc,0,0x7f,lVar11);
              lVar7 = extraout_RDX_00;
            }
          }
          lVar7 = sljit_emit_jump(piVar15,0x24,lVar7);
          lVar11 = sljit_emit_label(piVar15);
          for (plVar13 = (long *)param_2[7]; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
            lVar9 = *plVar13;
            if ((lVar9 != 0) && (lVar11 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar11;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          if (-1 < *(int *)(param_2 + 8)) {
            uVar18 = sljit_emit_jump(piVar15,0x25);
            if (*piVar15 == 0) {
              lVar11 = *(long *)(piVar15 + 0x18);
              lVar9 = *(long *)(lVar11 + 8);
              uVar14 = lVar9 + 0x10;
              if (uVar14 < 0xff1) {
                *(ulong *)(lVar11 + 8) = uVar14;
                puVar12 = (undefined8 *)(lVar11 + 0x10 + lVar9);
              }
              else {
                puVar10 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar15 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar15 + 0x12))[2]);
                if (puVar10 == (undefined8 *)0x0) {
                  *piVar15 = 2;
                  goto LAB_0012984e;
                }
                *puVar10 = *(undefined8 *)(piVar15 + 0x18);
                *(undefined8 **)(piVar15 + 0x18) = puVar10;
                puVar12 = puVar10 + 2;
                puVar10[1] = 0x10;
              }
              uVar8 = param_1[0x31];
              *puVar12 = uVar18;
              puVar12[1] = uVar8;
              param_1[0x31] = puVar12;
            }
LAB_0012984e:
            sljit_emit_op2(piVar15,0x40,0xc,0,0xc,0,0x7f,(long)(*(int *)(param_2 + 8) + -1) << 3);
          }
          sljit_emit_op1(piVar15,0x20,1,0,0x8c,0);
          sljit_emit_op2(*param_1,0x40,0xc,0,0xc,0,0x7f,0x18);
          lVar11 = sljit_emit_label(piVar15);
          if ((lVar7 != 0) && (lVar11 != 0)) {
            *(long *)(lVar7 + 0x18) = lVar11;
            *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(piVar15,0x20,0x8e,(long)*(int *)((long)param_1 + 100),1,0);
          goto switchD_001278d6_caseD_78;
        }
        param_2 = (undefined8 *)*param_2;
        param_1[7] = *plVar13;
      }
joined_r0x00127ff1:
    } while (param_2 != (undefined8 *)0x0);
  }
  param_1[7] = uVar2;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



ushort * compile_assert_matchingpath(undefined8 *param_1,ushort *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long **pplVar25;
  long **pplVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  ushort *puVar30;
  ushort *puVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  long *plVar35;
  ushort uVar36;
  undefined8 extraout_RDX;
  int *piVar37;
  ushort uVar38;
  long in_FS_OFFSET;
  undefined1 auVar39 [16];
  long lVar40;
  uint local_10c;
  byte local_104;
  undefined8 local_f0;
  ushort local_8c;
  long local_88;
  undefined8 local_80;
  int local_74;
  long *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ushort *local_48;
  long local_40;
  
  piVar7 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (long *)0x0;
  pplVar25 = (long **)(param_3 + 0x28);
  if (param_4 == 0) {
    pplVar25 = (long **)(param_3 + 0x18);
  }
  uVar5 = *(undefined4 *)((long)param_1 + 0xbc);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar8 = param_1[7];
  uVar9 = param_1[0x22];
  uVar10 = param_1[0x24];
  uVar11 = param_1[0x2a];
  uVar12 = param_1[0x2b];
  param_1[7] = 0;
  uVar13 = param_1[0x2e];
  local_8c = *param_2;
  if ((ushort)(local_8c - 0x97) < 2) {
    param_2 = param_2 + 1;
  }
  else {
    local_8c = 0x87;
  }
  iVar23 = *(int *)(param_1[3] + ((long)param_2 - param_1[2] >> 1) * 4);
  iVar22 = iVar23;
  uVar20 = get_framesize(param_1,param_2,0,0,&local_74);
  uVar4 = *param_2;
  *(ulong *)(param_3 + 0x30) = CONCAT44(iVar22,uVar20);
  uVar18 = uVar4 - 0x7f & 0xfffd;
  pplVar26 = &local_70;
  if (uVar18 != 0) {
    pplVar26 = pplVar25;
  }
  uVar38 = param_2[1];
  puVar30 = param_2;
  if (local_8c == 0x98) {
    sljit_emit_op1(piVar7,0x20,2,0,0x8c,0);
    piVar37 = (int *)*param_1;
    if (*piVar37 == 0) {
      piVar37[0x26] = 0;
      iVar22 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,8);
      if (iVar22 == 4) {
        emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,8);
      }
    }
    local_88 = sljit_emit_cmp(piVar7,0,2,0,0x7f,0);
    if ((ushort)(uVar4 - 0x81) < 2) goto LAB_0012a152;
    if ((int)uVar20 < 0) {
      if (local_74 != 0) {
        iVar22 = 0;
        local_10c = 1;
        goto LAB_0012a049;
      }
      iVar22 = 0;
      local_10c = 1;
      goto joined_r0x0012b509;
    }
    iVar24 = 8;
    iVar22 = 0;
  }
  else {
    local_88 = 0;
    if ((ushort)(uVar4 - 0x81) < 2) {
LAB_0012a152:
      do {
        if (puVar30[2] == 0x7e) {
          iVar22 = 3;
          goto joined_r0x0012a167;
        }
        puVar30 = puVar30 + puVar30[1];
      } while (*puVar30 == 0x78);
    }
    iVar22 = 0;
joined_r0x0012a167:
    if ((int)uVar20 < 0) {
      puVar30 = param_2 + 2;
      if (local_8c == 0x87) {
        do {
          while( true ) {
            uVar19 = *puVar30;
            if (uVar19 != 0x77) break;
            puVar30 = puVar30 + puVar30[3];
          }
          if (uVar19 < 0x78) {
            if (uVar19 < 0x1d) {
              if (uVar19 < 0x19) {
                uVar36 = uVar19 - 4;
                goto joined_r0x0012a9dd;
              }
            }
            else if (uVar19 != 0x76) goto LAB_0012b16d;
          }
          else {
            if (uVar19 == 0x79) {
              local_10c = iVar22;
              if (local_74 != 0) goto LAB_0012a049;
              if (uVar20 == 0xffffffff) {
                sljit_emit_op1(piVar7,0x20,0x8e,(long)iVar23,0xc,0);
                if (iVar22 != 0) {
                  local_10c = 3;
                  goto LAB_0012a961;
                }
              }
              else if (iVar22 != 0) {
                iVar22 = 3;
                local_10c = 3;
                goto LAB_0012a961;
              }
              local_10c = 0;
              bVar15 = false;
              goto LAB_00129cd4;
            }
            if (0x79 < uVar19) {
              uVar36 = uVar19 - 0xa9;
joined_r0x0012a9dd:
              if (1 < uVar36) goto LAB_0012b16d;
            }
          }
          puVar30 = puVar30 + (byte)(&_pcre2_OP_lengths_16)[uVar19];
        } while( true );
      }
      local_10c = iVar22 + 1;
      if (local_74 == 0) goto joined_r0x0012b18e;
      goto LAB_0012a049;
    }
    iVar24 = iVar22 * 8 + 8;
  }
  iVar17 = local_74;
  lVar27 = (long)iVar23;
  if (local_74 == 0) {
    local_10c = iVar22 + 2;
    sljit_emit_op1(piVar7,0x20,4,0,0xc,0);
    uVar33 = *param_1;
    iVar21 = local_10c + uVar20;
    sljit_emit_op2(uVar33,0x42,0xc,0,0xc,0,0x7f,(long)(iVar21 * 8));
    local_80 = sljit_emit_cmp(uVar33,2,0xc,0,0xb,0);
    piVar37 = (int *)*param_1;
    if (*piVar37 == 0) goto LAB_00129b9b;
    sljit_emit_op1(piVar7,0x20,1,0,0x8e,lVar27);
    sljit_emit_op1(piVar7,0x20,0x8e,lVar27,4,0);
LAB_00129c34:
    sljit_emit_op1(piVar7,0x20,0x8c,0,2,0);
    sljit_emit_op1(piVar7,0x20,0x8c,iVar24,1,0);
  }
  else {
    local_10c = iVar22 + 3;
    sljit_emit_op1(piVar7,0x20,4,0,0xc,0);
    uVar33 = *param_1;
    iVar21 = local_10c + uVar20;
    sljit_emit_op2(uVar33,0x42,0xc,0,0xc,0,0x7f,(long)(iVar21 * 8));
    local_80 = sljit_emit_cmp(uVar33,2,0xc,0,0xb,0);
    piVar37 = (int *)*param_1;
    if (*piVar37 == 0) {
LAB_00129b9b:
      puVar28 = (undefined8 *)ensure_abuf(piVar37,0x18);
      if (puVar28 != (undefined8 *)0x0) {
        *puVar28 = local_80;
        uVar29 = sljit_emit_label(piVar37);
        uVar33 = param_1[0x26];
        puVar28[1] = uVar29;
        puVar28[2] = uVar33;
        param_1[0x26] = puVar28;
      }
      sljit_emit_op1(piVar7,0x20,1,0,0x8e,lVar27);
      sljit_emit_op1(piVar7,0x20,0x8e,lVar27,4,0);
      if (iVar17 == 0) goto LAB_00129c34;
    }
    else {
      sljit_emit_op1(piVar7,0x20,1,0,0x8e,lVar27);
      sljit_emit_op1(piVar7,0x20,0x8e,lVar27,4,0);
    }
    sljit_emit_op1(piVar7,0x20,4,0,0x8e,(long)*(int *)((long)param_1 + 100));
    sljit_emit_op1(piVar7,0x20,0x8c,0,2,0);
    sljit_emit_op1(piVar7,0x20,0x8c,iVar22 * 8 + 0x10,1,0);
    sljit_emit_op1(piVar7,0x20,0x8c,iVar24,4,0);
    sljit_emit_op1(piVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x7f,0);
  }
  init_frame_isra_0(param_1,param_2,0,iVar21 + -1);
LAB_00129c8f:
  bVar15 = true;
  if (iVar22 != 0) {
    sljit_emit_op1(piVar7,0x20,0x8c,8,0xd,0);
    sljit_emit_op1(piVar7,0x20,0xd,0,2,0);
  }
LAB_00129cd4:
  local_48 = (ushort *)0x0;
  local_68 = (undefined1  [16])0x0;
  if ((param_4 != 0) || (bVar16 = false, (uVar4 & 0xfffd) == 0x80)) {
    *(undefined4 *)((long)param_1 + 0xbc) = 1;
    param_1[0x22] = 0;
    param_1[0x2a] = 0;
    bVar16 = true;
  }
  param_1[0x2b] = 0;
  *(uint *)(param_1 + 0x18) = (uint)(uVar18 == 0);
  uVar19 = *param_2;
  puVar30 = param_2 + uVar38;
  do {
    puVar31 = puVar30;
    param_1[0x24] = 0;
    param_1[0x2e] = 0;
    local_58 = (undefined1  [16])0x0;
    if ((uVar19 == 0x78) && (bVar15)) {
      sljit_emit_op1(piVar7,0x20,2,0,0x8c,0);
    }
    uVar38 = param_2[2];
    local_48 = param_2;
    if (1 < (ushort)(uVar38 - 0x7d)) {
      compile_matchingpath(param_1,param_2 + 2,puVar31,local_68);
      if (*piVar7 == 0) goto LAB_00129de5;
LAB_0012a458:
      if (bVar16) {
        *(undefined4 *)((long)param_1 + 0xbc) = uVar5;
        param_1[0x22] = uVar9;
        param_1[0x2a] = uVar11;
      }
      puVar31 = (ushort *)0x0;
      goto LAB_0012a490;
    }
    uVar33 = compile_reverse_matchingpath(param_1,param_2 + 2,local_68);
    compile_matchingpath(param_1,uVar33,puVar31,local_68);
    if (*piVar7 != 0) goto LAB_0012a458;
    if (uVar38 == 0x7e) {
      uVar29 = sljit_emit_cmp(piVar7,2,2,0,0xd,0);
      uVar33 = local_58._0_8_;
      if (*piVar7 == 0) {
        lVar27 = *(long *)(piVar7 + 0x18);
        lVar32 = *(long *)(lVar27 + 8);
        uVar1 = lVar32 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar27 + 8) = uVar1;
          puVar28 = (undefined8 *)(lVar27 + 0x10 + lVar32);
        }
        else {
          puVar34 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar7 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar7 + 0x12))[2]);
          if (puVar34 == (undefined8 *)0x0) {
            *piVar7 = 2;
            goto LAB_00129de5;
          }
          *puVar34 = *(undefined8 *)(piVar7 + 0x18);
          puVar28 = puVar34 + 2;
          *(undefined8 **)(piVar7 + 0x18) = puVar34;
          puVar34[1] = 0x10;
        }
        uVar3 = *(undefined8 *)(uVar33 + 8);
        *puVar28 = uVar29;
        puVar28[1] = uVar3;
        *(undefined8 **)(uVar33 + 8) = puVar28;
      }
    }
LAB_00129de5:
    lVar27 = sljit_emit_label(piVar7);
    plVar35 = (long *)param_1[0x2e];
    param_1[0x24] = lVar27;
    if (plVar35 != (long *)0x0) {
      do {
        lVar32 = *plVar35;
        if ((lVar32 != 0) && (lVar27 != 0)) {
          *(long *)(lVar32 + 0x18) = lVar27;
          *(ulong *)(lVar32 + 0x10) = *(ulong *)(lVar32 + 0x10) & 0xfffffffffffffffd | 1;
        }
        plVar35 = (long *)plVar35[1];
      } while (plVar35 != (long *)0x0);
    }
    uVar38 = uVar4 & 0xfffd;
    if ((int)uVar20 < 0) {
      if (uVar20 == 0xffffffff) {
        sljit_emit_op1(piVar7,0x20,0xc,0,0x8e);
      }
      else if (local_10c != 0) {
        piVar37 = (int *)*param_1;
        if (*piVar37 == 0) {
          piVar37[0x26] = 0;
          iVar24 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,local_10c << 3);
          if (iVar24 == 4) {
            emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,local_10c << 3);
          }
        }
      }
      if (iVar22 != 0) {
        sljit_emit_op1(piVar7,0x20,0xd,0,0x8c);
      }
      if (local_74 != 0) {
        sljit_emit_op1(piVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c);
      }
      if (uVar38 == 0x80) {
        if (param_4 == 0) {
          if (local_8c == 0x97) {
            sljit_emit_op1(piVar7,0x20,2,0,0x8c);
            goto LAB_0012a2d7;
          }
        }
        else {
LAB_00129ec4:
          if (local_10c != 0) {
            sljit_emit_op1(piVar7,0x20,2,0,0x8c);
          }
        }
      }
    }
    else {
      lVar27 = (long)iVar23;
      if ((uVar38 == 0x80) && ((param_4 & 1) == 0)) {
        sljit_emit_op1(piVar7,0x20,0xc,0,0x8e,lVar27);
        if (iVar22 != 0) {
          sljit_emit_op1(piVar7,0x20,0xd,0,0x8c,(long)(int)((-local_10c - uVar20) * 8 + 8));
        }
        if (local_74 != 0) {
          sljit_emit_op1(piVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c,
                         (long)(int)((-2 - uVar20) * 8));
        }
        uVar33 = sljit_emit_jump(piVar7,0x25);
        if (*piVar7 == 0) {
          lVar32 = *(long *)(piVar7 + 0x18);
          lVar40 = *(long *)(lVar32 + 8);
          uVar1 = lVar40 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar32 + 8) = uVar1;
            puVar28 = (undefined8 *)(lVar32 + 0x10 + lVar40);
          }
          else {
            puVar34 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar7 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar7 + 0x12))[2]);
            if (puVar34 == (undefined8 *)0x0) {
              *piVar7 = 2;
              goto LAB_0012a3e6;
            }
            *puVar34 = *(undefined8 *)(piVar7 + 0x18);
            *(undefined8 **)(piVar7 + 0x18) = puVar34;
            puVar28 = puVar34 + 2;
            puVar34[1] = 0x10;
          }
          uVar29 = param_1[0x31];
          *puVar28 = uVar33;
          puVar28[1] = uVar29;
          param_1[0x31] = puVar28;
        }
LAB_0012a3e6:
        sljit_emit_op2(piVar7,0x40,0xc,0,0xc,0,0x7f,(long)(int)(uVar20 - 1) << 3);
      }
      else {
        sljit_emit_op2(piVar7,0x42,0xc,0,0x8e,lVar27,0x7f,(long)(int)(uVar20 + 1) << 3);
        if (iVar22 != 0) {
          sljit_emit_op1(piVar7,0x20,0xd,0,0x8c);
        }
        if (local_74 != 0) {
          sljit_emit_op1(piVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c);
        }
        if (uVar38 != 0x80) goto LAB_00129f08;
        if (param_4 != 0) goto LAB_00129ec4;
      }
      if (local_8c == 0x97) {
        sljit_emit_op1(piVar7,0x20,1,0,0x8c,(long)(int)(~uVar20 << 3));
        sljit_emit_op1(piVar7,0x20,2,0,0x8c);
        sljit_emit_op1(piVar7,0x20,0x8e,lVar27,1);
LAB_0012a2d7:
        sljit_emit_op2(piVar7,0x42,0xc,0,0xc,0,0x7f,8);
        sljit_emit_op1(piVar7,0x20,0x8c,0,0x7f);
      }
      else {
        sljit_emit_op1(piVar7,0x20,0x8e,lVar27,0x8c);
      }
    }
LAB_00129f08:
    lVar27 = sljit_emit_jump(piVar7,0x24);
    if (*piVar7 == 0) {
      lVar32 = *(long *)(piVar7 + 0x18);
      lVar40 = *(long *)(lVar32 + 8);
      uVar1 = lVar40 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar32 + 8) = uVar1;
        plVar35 = (long *)(lVar32 + 0x10 + lVar40);
      }
      else {
        puVar28 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar7 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar7 + 0x12))[2]);
        if (puVar28 == (undefined8 *)0x0) {
          *piVar7 = 2;
          goto LAB_00129f84;
        }
        *puVar28 = *(undefined8 *)(piVar7 + 0x18);
        *(undefined8 **)(piVar7 + 0x18) = puVar28;
        plVar35 = puVar28 + 2;
        puVar28[1] = 0x10;
      }
      plVar2 = *pplVar26;
      *plVar35 = lVar27;
      plVar35[1] = (long)plVar2;
      *pplVar26 = plVar35;
    }
LAB_00129f84:
    compile_backtrackingpath(param_1,local_58._0_8_);
    if (*piVar7 != 0) goto LAB_0012a458;
    lVar27 = sljit_emit_label(piVar7);
    for (plVar35 = (long *)local_58._8_8_; plVar35 != (long *)0x0; plVar35 = (long *)plVar35[1]) {
      lVar32 = *plVar35;
      if ((lVar32 != 0) && (lVar27 != 0)) {
        *(long *)(lVar32 + 0x18) = lVar27;
        *(ulong *)(lVar32 + 0x10) = *(ulong *)(lVar32 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    if (*puVar31 != 0x78) goto LAB_0012abde;
    uVar19 = 0x78;
    puVar30 = puVar31 + puVar31[1];
    param_2 = puVar31;
  } while( true );
LAB_0012b16d:
  local_10c = iVar22 + 1;
  if (local_74 == 0) {
joined_r0x0012b18e:
    local_10c = iVar22 + 1;
joined_r0x0012b509:
    if (uVar20 == 0xffffffff) {
      sljit_emit_op1(piVar7,0x20,0x8e,(long)iVar23,0xc,0);
    }
LAB_0012a961:
    uVar33 = *param_1;
    sljit_emit_op2(uVar33,0x42,0xc,0,0xc,0,0x7f,local_10c << 3);
    auVar39 = sljit_emit_cmp(uVar33,2,0xc,0,0xb,0);
    piVar37 = (int *)*param_1;
    iVar24 = *piVar37;
    if (iVar24 == 0) goto LAB_0012a0ba;
LAB_0012a10e:
    sljit_emit_op1(piVar7,0x20,0x8c,0,2,0);
  }
  else {
LAB_0012a049:
    iVar24 = local_74;
    if (uVar20 == 0xffffffff) {
      sljit_emit_op1(piVar7,0x20,0x8e,(long)iVar23,0xc,0);
    }
    local_10c = local_10c + 1;
    uVar33 = *param_1;
    lVar27 = (long)(int)(local_10c * 8);
    sljit_emit_op2(uVar33,0x42,0xc,0,0xc,0,0x7f);
    uVar33 = sljit_emit_cmp(uVar33,2,0xc,0,0xb,0);
    auVar39._8_8_ = lVar27;
    auVar39._0_8_ = uVar33;
    piVar37 = (int *)*param_1;
    if (*piVar37 == 0) {
LAB_0012a0ba:
      local_f0 = auVar39._0_8_;
      puVar28 = (undefined8 *)ensure_abuf(piVar37,0x18,auVar39._8_8_);
      if (puVar28 != (undefined8 *)0x0) {
        *puVar28 = local_f0;
        uVar29 = sljit_emit_label(piVar37);
        uVar33 = param_1[0x26];
        puVar28[1] = uVar29;
        puVar28[2] = uVar33;
        param_1[0x26] = puVar28;
      }
      if (iVar24 == 0) goto LAB_0012a10e;
    }
    sljit_emit_op1(piVar7,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 100));
    sljit_emit_op1(piVar7,0x20,0x8c,0,2,0);
    sljit_emit_op1(piVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x7f,0);
    sljit_emit_op1(piVar7,0x20,0x8c,iVar22 * 8 + 8,1,0);
  }
  goto LAB_00129c8f;
LAB_0012abde:
  lVar27 = param_1[0x2b];
  if (bVar16) {
    param_1[0x2b] = param_1[0x2a];
    lVar27 = param_1[0x2a];
  }
  if (lVar27 != 0) {
    lVar27 = sljit_emit_jump(piVar7,0x24);
    lVar32 = sljit_emit_label(piVar7);
    for (plVar35 = (long *)param_1[0x2b]; plVar35 != (long *)0x0; plVar35 = (long *)plVar35[1]) {
      lVar40 = *plVar35;
      if ((lVar40 != 0) && (lVar32 != 0)) {
        *(long *)(lVar40 + 0x18) = lVar32;
        *(ulong *)(lVar40 + 0x10) = *(ulong *)(lVar40 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    lVar32 = (long)iVar23;
    if ((int)uVar20 < 0) {
      uVar33 = 0x8e;
      uVar14 = local_10c;
    }
    else {
      sljit_emit_op1(piVar7,0x20,0xc,0,0x8e,lVar32);
      uVar33 = sljit_emit_jump(piVar7,0x25);
      if (*piVar7 == 0) {
        lVar32 = *(long *)(piVar7 + 0x18);
        lVar40 = *(long *)(lVar32 + 8);
        uVar1 = lVar40 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar32 + 8) = uVar1;
          puVar28 = (undefined8 *)(lVar32 + 0x10 + lVar40);
        }
        else {
          puVar34 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar7 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar7 + 0x12))[2]);
          if (puVar34 == (undefined8 *)0x0) {
            *piVar7 = 2;
            goto LAB_0012ad04;
          }
          *puVar34 = *(undefined8 *)(piVar7 + 0x18);
          *(undefined8 **)(piVar7 + 0x18) = puVar34;
          puVar28 = puVar34 + 2;
          puVar34[1] = 0x10;
        }
        uVar29 = param_1[0x31];
        *puVar28 = uVar33;
        puVar28[1] = uVar29;
        param_1[0x31] = puVar28;
      }
LAB_0012ad04:
      lVar32 = 0;
      uVar33 = 0xc;
      uVar14 = local_10c + 1;
    }
    lVar40 = (long)(int)uVar14 << 3;
    uVar29 = 0x7f;
    sljit_emit_op2(piVar7,0x42,0xc,0,uVar33,lVar32);
    lVar32 = sljit_emit_label(piVar7,lVar40,extraout_RDX,uVar29);
    if ((lVar27 != 0) && (lVar32 != 0)) {
      *(long *)(lVar27 + 0x18) = lVar32;
      *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  if (iVar22 != 0) {
    sljit_emit_op1(piVar7,0x20,0xd,0,0x8c,8);
  }
  if (local_74 != 0) {
    sljit_emit_op1(piVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c,iVar22 * 8 + 8);
  }
  if (uVar18 != 0) {
    if ((int)uVar20 < 0) {
      if (local_10c == 0) {
        if (local_8c == 0x87) goto LAB_0012b11a;
      }
      else {
        sljit_emit_op1(piVar7,0x20,2,0,0x8c,0);
        if (local_8c == 0x87) {
          piVar7 = (int *)*param_1;
          if (*piVar7 == 0) {
            piVar7[0x26] = 0;
            iVar23 = emit_lea_binary(piVar7,0xc,0,0xc,0,0x7f,local_10c << 3);
            if (iVar23 == 4) {
              emit_cum_binary(piVar7,0x5030100,0xc,0,0xc,0,0x7f,local_10c << 3);
            }
          }
          goto LAB_0012b11a;
        }
        if (local_10c != 1) {
          piVar37 = (int *)*param_1;
          lVar27 = (long)(int)(local_10c * 8 + -8);
          if (*piVar37 == 0) {
            piVar37[0x26] = 0;
            iVar23 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar27);
            if (iVar23 == 4) {
              emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar27);
            }
          }
        }
      }
      uVar29 = 0x7f;
      lVar27 = 0;
      uVar33 = 0x8c;
    }
    else {
      sljit_emit_op1(piVar7,0x20,2,0,0x8c,0);
      sljit_emit_op1(piVar7,0x20,1,0,0x8c,(long)(int)(local_10c * 8 + -8));
      lVar27 = (long)iVar23;
      piVar37 = (int *)*param_1;
      if (local_8c == 0x87) {
        lVar32 = (long)(int)((uVar20 + local_10c) * 8);
        if (*piVar37 == 0) {
          piVar37[0x26] = 0;
          iVar23 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar32);
          if (iVar23 == 4) {
            emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar32);
            sljit_emit_op1(piVar7,0x20,0x8e,lVar27,1,0);
            goto LAB_0012b11a;
          }
        }
        sljit_emit_op1(piVar7,0x20,0x8e,lVar27,1,0);
        goto LAB_0012b11a;
      }
      lVar32 = (long)(int)((uVar20 + local_10c) * 8 + -8);
      if (*piVar37 == 0) {
        piVar37[0x26] = 0;
        iVar23 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar32);
        if (iVar23 == 4) {
          emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar32);
        }
      }
      sljit_emit_op1(piVar7,0x20,0x8c,0,0x7f,0);
      uVar33 = 0x8e;
      uVar29 = 1;
    }
    sljit_emit_op1(piVar7,0x20,uVar33,lVar27,uVar29,0);
    if (local_8c == 0x97) {
      uVar33 = sljit_emit_label(piVar7);
      *(undefined8 *)(param_3 + 0x38) = uVar33;
    }
    else {
      lVar27 = *(long *)(param_3 + 0x38);
      lVar32 = sljit_emit_jump(piVar7,0x24);
      if ((lVar27 != 0) && (lVar32 != 0)) {
        *(long *)(lVar32 + 0x18) = lVar27;
        *(ulong *)(lVar32 + 0x10) = *(ulong *)(lVar32 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar27 = sljit_emit_label(piVar7);
      if ((local_88 != 0) && (lVar27 != 0)) {
        *(long *)(local_88 + 0x18) = lVar27;
        *(ulong *)(local_88 + 0x10) = *(ulong *)(local_88 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    lVar27 = sljit_emit_label(piVar7);
    for (plVar35 = *(long **)(param_3 + 0x18); plVar35 != (long *)0x0; plVar35 = (long *)plVar35[1])
    {
      lVar32 = *plVar35;
      if ((lVar32 != 0) && (lVar27 != 0)) {
        *(long *)(lVar32 + 0x18) = lVar27;
        *(ulong *)(lVar32 + 0x10) = *(ulong *)(lVar32 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    *(undefined8 *)(param_3 + 0x18) = 0;
    goto LAB_0012b11a;
  }
  local_104 = (byte)param_4;
  if (((local_104 & local_10c != 0) == 0) && (local_8c != 0x97)) {
    if ((int)uVar20 < 0) {
LAB_0012adb2:
      if (local_10c == 0) goto LAB_0012adc0;
      piVar37 = (int *)*param_1;
      if (*piVar37 != 0) goto LAB_0012adc0;
      piVar37[0x26] = 0;
      iVar24 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,local_10c * 8);
      if (iVar24 != 4) goto LAB_0012adc0;
      emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f);
      lVar27 = sljit_emit_jump(piVar7,0x24);
    }
    else {
      sljit_emit_op1(piVar7,0x20,1,0,0x8c,(long)(int)(local_10c * 8 + -8));
LAB_0012b6c9:
      piVar37 = (int *)*param_1;
      lVar27 = (long)(int)((uVar20 + local_10c) * 8);
      if (*piVar37 == 0) {
        piVar37[0x26] = 0;
        iVar24 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar27);
        if (iVar24 == 4) {
          emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar27);
        }
      }
      sljit_emit_op1(piVar7,0x20,0x8e,(long)iVar23,1,0);
LAB_0012adc0:
      lVar27 = sljit_emit_jump(piVar7,0x24);
    }
    if (*piVar7 == 0) {
      lVar32 = *(long *)(piVar7 + 0x18);
      lVar40 = *(long *)(lVar32 + 8);
      uVar1 = lVar40 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar32 + 8) = uVar1;
        plVar35 = (long *)(lVar32 + 0x10 + lVar40);
      }
      else {
        puVar28 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar7 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar7 + 0x12))[2]);
        if (puVar28 == (undefined8 *)0x0) {
          *piVar7 = 2;
          goto LAB_0012ae31;
        }
        *puVar28 = *(undefined8 *)(piVar7 + 0x18);
        *(undefined8 **)(piVar7 + 0x18) = puVar28;
        plVar35 = puVar28 + 2;
        puVar28[1] = 0x10;
      }
      plVar2 = *pplVar25;
      *plVar35 = lVar27;
      plVar35[1] = (long)plVar2;
      *pplVar25 = plVar35;
    }
LAB_0012ae31:
    lVar32 = sljit_emit_label(piVar7);
    if (local_70 != (long *)0x0) {
LAB_0012ae49:
      plVar35 = local_70;
      do {
        lVar40 = *plVar35;
        if ((lVar40 != 0) && (lVar32 != 0)) {
          *(long *)(lVar40 + 0x18) = lVar32;
          *(ulong *)(lVar40 + 0x10) = *(ulong *)(lVar40 + 0x10) & 0xfffffffffffffffd | 1;
        }
        plVar35 = (long *)plVar35[1];
      } while (plVar35 != (long *)0x0);
    }
    if (-1 < (int)uVar20) {
      if (local_8c == 0x87) {
        sljit_emit_op2(piVar7,0x42,0xc,0,0x8e,(long)iVar23,0x7f,(long)(int)(uVar20 + 1) << 3);
        sljit_emit_op1(piVar7,0x20,2,0,0x8c,(long)(int)((1 - local_10c) * 8));
        goto LAB_0012b11a;
      }
      sljit_emit_op2(piVar7,0x42,0xc,0,0x8e,(long)iVar23,0x7f,(long)(int)(uVar20 + 2 + iVar22) << 3)
      ;
      if (iVar22 + 2U != local_10c) goto LAB_0012aee0;
      sljit_emit_op1(piVar7,0x20,2,0,0x8c,0);
      if (local_8c != 0x98) goto LAB_0012b312;
LAB_0012af11:
      sljit_emit_op1(piVar7,0x20,0x8c,0,0x7f,0);
LAB_0012af2e:
      lVar27 = *(long *)(param_3 + 0x38);
      lVar32 = sljit_emit_jump(piVar7,0x24);
      if ((lVar27 != 0) && (lVar32 != 0)) {
        *(long *)(lVar32 + 0x18) = lVar27;
        *(ulong *)(lVar32 + 0x10) = *(ulong *)(lVar32 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar27 = sljit_emit_label(piVar7);
      if ((local_88 != 0) && (lVar27 != 0)) {
        *(long *)(local_88 + 0x18) = lVar27;
        *(ulong *)(local_88 + 0x10) = *(ulong *)(local_88 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (-1 < (int)uVar20) {
        sljit_emit_op1(piVar7,0x20,0xc,0,0x8e,(long)iVar23);
        uVar33 = sljit_emit_jump(piVar7,0x25);
        if (*piVar7 == 0) {
          lVar27 = *(long *)(piVar7 + 0x18);
          lVar32 = *(long *)(lVar27 + 8);
          uVar1 = lVar32 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar27 + 8) = uVar1;
            puVar28 = (undefined8 *)(lVar27 + 0x10 + lVar32);
          }
          else {
            puVar34 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar7 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar7 + 0x12))[2]);
            if (puVar34 == (undefined8 *)0x0) {
              *piVar7 = 2;
              goto LAB_0012bc3f;
            }
            *puVar34 = *(undefined8 *)(piVar7 + 0x18);
            *(undefined8 **)(piVar7 + 0x18) = puVar34;
            puVar28 = puVar34 + 2;
            puVar34[1] = 0x10;
          }
          uVar29 = param_1[0x31];
          *puVar28 = uVar33;
          puVar28[1] = uVar29;
          param_1[0x31] = puVar28;
        }
LAB_0012bc3f:
        sljit_emit_op1(piVar7,0x20,1,0,0x8c,0xfffffffffffffff0);
        sljit_emit_op2(piVar7,0x40,0xc,0,0xc,0,0x7f,(long)(int)(uVar20 - 1) << 3);
        sljit_emit_op1(piVar7,0x20,0x8e,(long)iVar23,1,0);
      }
      lVar27 = sljit_emit_label(piVar7);
      plVar35 = *(long **)(param_3 + 0x18);
      if (plVar35 != (long *)0x0) {
        do {
          lVar32 = *plVar35;
          if ((lVar32 != 0) && (lVar27 != 0)) {
            *(long *)(lVar32 + 0x18) = lVar27;
            *(ulong *)(lVar32 + 0x10) = *(ulong *)(lVar32 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar35 = (long *)plVar35[1];
        } while (plVar35 != (long *)0x0);
      }
      goto LAB_0012b11a;
    }
    if (local_10c != 0) goto LAB_0012bae9;
    if (local_8c != 0x97) goto LAB_0012b84e;
LAB_0012b2ed:
    sljit_emit_op2(piVar7,0x42,0xc,0,0xc,0,0x7f,8);
  }
  else {
    sljit_emit_op1(piVar7,0x20,2,0,0x8c,0);
    if ((int)uVar20 < 0) {
      if (local_8c != 0x97) goto LAB_0012adb2;
      if (1 < local_10c) {
        piVar37 = (int *)*param_1;
        lVar27 = (long)(int)(local_10c * 8 + -8);
        if (*piVar37 == 0) {
          piVar37[0x26] = 0;
          iVar24 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar27);
          if (iVar24 == 4) {
            emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar27);
          }
        }
      }
      sljit_emit_op1(piVar7,0x20,0x8c,0,0x7f,0);
      lVar27 = sljit_emit_jump(piVar7,0x24);
      lVar32 = sljit_emit_label(piVar7);
      if (local_70 != (long *)0x0) goto LAB_0012ae49;
      if (local_10c == 0) goto LAB_0012b2ed;
LAB_0012bae9:
      sljit_emit_op1(piVar7,0x20,2,0,0x8c,(long)(int)(local_10c * -8));
      if (local_8c != 0x97) {
LAB_0012b84e:
        if (local_8c != 0x98) goto LAB_0012b11a;
        sljit_emit_op2(piVar7,0x42,0xc,0,0xc,0,0x7f,8);
        sljit_emit_op1(piVar7,0x20,0x8c,0,0x7f,0);
        goto LAB_0012af2e;
      }
      sljit_emit_op2(piVar7,0x42,0xc,0,0xc,0,0x7f,8);
      if (local_10c == 1) goto LAB_0012b312;
    }
    else {
      sljit_emit_op1(piVar7,0x20,1,0,0x8c,(long)(int)(local_10c * 8 + -8));
      if (local_8c != 0x97) goto LAB_0012b6c9;
      piVar37 = (int *)*param_1;
      lVar27 = (long)(int)(((uVar20 - 1) + local_10c) * 8);
      if (*piVar37 == 0) {
        piVar37[0x26] = 0;
        iVar24 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar27);
        if (iVar24 == 4) {
          emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar27);
        }
      }
      sljit_emit_op1(piVar7,0x20,0x8c,0,0x7f,0);
      sljit_emit_op1(piVar7,0x20,0x8e,(long)iVar23,1,0);
      lVar27 = sljit_emit_jump(piVar7,0x24);
      lVar32 = sljit_emit_label(piVar7);
      if (local_70 != (long *)0x0) goto LAB_0012ae49;
      sljit_emit_op2(piVar7,0x42,0xc,0,0x8e,(long)iVar23,0x7f,(long)(int)(uVar20 + 2 + iVar22) << 3)
      ;
      if (iVar22 + 2U == local_10c) {
        sljit_emit_op1(piVar7,0x20,2,0,0x8c,0);
        goto LAB_0012b312;
      }
LAB_0012aee0:
      sljit_emit_op1(piVar7,0x20,2,0,0x8c,0xfffffffffffffff8);
      if (local_8c != 0x97) goto LAB_0012af11;
    }
    sljit_emit_op1(piVar7,0x20,0x8c,0,2,0);
  }
LAB_0012b312:
  lVar32 = sljit_emit_label(piVar7);
  *(long *)(param_3 + 0x38) = lVar32;
  if ((lVar27 != 0) && (lVar32 != 0)) {
    *(long *)(lVar27 + 0x18) = lVar32;
    *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
  }
LAB_0012b11a:
  if (bVar16) {
    *(undefined4 *)((long)param_1 + 0xbc) = uVar5;
    param_1[0x22] = uVar9;
    param_1[0x2a] = uVar11;
  }
  puVar31 = puVar31 + 2;
LAB_0012a490:
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  param_1[7] = uVar8;
  param_1[0x24] = uVar10;
  param_1[0x2b] = uVar12;
  param_1[0x2e] = uVar13;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar31;
}



ushort * compile_bracket_matchingpath(undefined8 *param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 (*pauVar15) [16];
  ushort *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  short *psVar22;
  ushort uVar23;
  int *piVar24;
  char cVar25;
  ushort *puVar26;
  long in_FS_OFFSET;
  bool bVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  ushort local_ae;
  int local_ac;
  ushort *local_a8;
  int local_a0;
  int local_9c;
  uint local_88;
  int local_84;
  long local_80;
  long local_70;
  undefined8 local_60;
  int local_58;
  int local_44;
  long local_40;
  
  piVar2 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  if ((*piVar2 != 0) || (pauVar10 = (undefined1 (*) [16])ensure_abuf(piVar2,0x50), *piVar2 != 0))
  goto LAB_0012c1e6;
  *pauVar10 = (undefined1  [16])0x0;
  pauVar10[2] = (undefined1  [16])0x0;
  pauVar10[1] = (undefined1  [16])0x0;
  pauVar10[3] = (undefined1  [16])0x0;
  pauVar10[4] = (undefined1  [16])0x0;
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  uVar23 = *param_2;
  *(ushort **)pauVar10[2] = param_2;
  *(undefined8 *)*pauVar10 = uVar12;
  *(undefined1 (**) [16])(param_3 + 0x10) = pauVar10;
  local_ae = uVar23;
  uVar3 = 0x87;
  puVar26 = param_2;
  if ((ushort)(uVar23 - 0x97) < 2) {
    local_ae = param_2[1];
    param_2 = param_2 + 1;
    uVar3 = uVar23;
    puVar26 = param_2;
  }
  do {
    param_2 = param_2 + param_2[1];
    uVar23 = *param_2;
  } while (uVar23 == 0x78);
  if (uVar23 == 0x79) {
    lVar17 = param_1[2];
    lVar20 = param_1[3];
    local_84 = *(int *)(lVar20 + ((long)param_2 - lVar17 >> 1) * 4);
    if (local_84 == 0) {
      local_80._0_4_ = 0;
      local_ac = 0;
      local_58 = 0;
    }
    else {
      local_58 = *(int *)(lVar20 + ((long)param_2 + (2 - lVar17) >> 1) * 4);
      local_80._0_4_ = *(int *)(lVar20 + ((long)param_2 + (6 - lVar17) >> 1) * 4);
      local_ac = *(int *)(lVar20 + ((long)param_2 + (4 - lVar17) >> 1) * 4);
      if (local_ac == 0x27) {
        uVar23 = 0x7a;
      }
      else if (local_ac == 0x28) {
        uVar23 = 0x7b;
      }
    }
  }
  else {
    local_80._0_4_ = 0;
    local_ac = 0;
    local_58 = 0;
    local_84 = 0;
  }
  local_a8 = puVar26 + 2;
  puVar16 = puVar26 + puVar26[1];
  bVar27 = *puVar16 == 0x78;
  if ((local_ae == 0x8b) || (local_ae == 0x90)) {
    bVar27 = 3 < (ushort)(puVar26[2] - 0x93) && puVar26[2] != 0xa3;
    if ((local_ae == 0x8b) && (1 < (ushort)(*puVar16 - 0x7a))) {
      local_a0 = 0;
      local_9c = 0;
      bVar28 = false;
    }
    else {
      local_a0 = 0;
      bVar28 = false;
      local_9c = *(int *)(param_1[3] + ((long)puVar26 - param_1[2] >> 1) * 4);
      *(int *)(pauVar10[4] + 8) = local_9c;
      local_ae = 0x90;
    }
  }
  else {
    bVar28 = local_ae == 0x89 || local_ae == 0x8e;
    if ((ushort)(local_ae - 0x83) < 0xe) {
      uVar11 = 1L << ((byte)(local_ae - 0x83) & 0x3f);
      if ((uVar11 & 0x220f) == 0) {
        if ((uVar11 & 0x840) == 0) goto LAB_0012bf70;
        uVar1 = puVar26[2];
        local_a0 = (uint)uVar1 + (uint)uVar1;
        if (*(char *)(param_1[5] + (ulong)uVar1) == '\0') {
          local_9c = *(int *)(param_1 + 8) + (uint)uVar1 * 8;
        }
        else {
          local_9c = (uint)uVar1 * 0x10 + *(int *)((long)param_1 + 0x44);
        }
        *(int *)(pauVar10[4] + 8) = local_9c;
        local_a8 = puVar26 + 3;
      }
      else {
        local_9c = *(int *)(param_1[3] + ((long)puVar26 - param_1[2] >> 1) * 4);
        *(int *)(pauVar10[4] + 8) = local_9c;
        if (local_ae == 0x85) {
          uVar7 = get_framesize(param_1,puVar26,0,0,&local_44);
          *(undefined4 *)pauVar10[4] = uVar7;
        }
        local_a0 = 0;
      }
    }
    else {
LAB_0012bf70:
      local_a0 = 0;
      local_9c = 0;
    }
  }
  iVar6 = local_a0 >> 1;
  if ((uVar23 == 0x7a) || ((uVar23 == 0x7b && (uVar3 != 0x98)))) {
    if (uVar3 == 0x97) {
      uVar12 = 0x10;
      goto LAB_0012ca85;
    }
    uVar12 = *param_1;
    sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,8);
    uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
    piVar24 = (int *)*param_1;
    if (*piVar24 == 0) goto LAB_0012bfff;
LAB_0012c06b:
    sljit_emit_op1(piVar2,0x20,0x8c,0,0x7f,0);
    iVar5 = 1;
joined_r0x0012ca09:
    if (uVar3 != 0x97) goto LAB_0012c09a;
    sljit_emit_op1(piVar2,0x20,0x8c,iVar5 << 3,2,0);
joined_r0x0012ca36:
    if ((local_ac == 0) ||
       (sljit_emit_op1(piVar2,0x20,0x8e,(long)local_84,0x7f,(long)(int)local_80), local_ac != 0x29))
    {
      local_80 = 0;
    }
    else {
      local_80 = sljit_emit_label(piVar2);
    }
    local_70 = 0;
    if (uVar23 != 0x7b) {
LAB_0012c0cf:
      if (((uVar23 != 0x7a) || (local_80 = sljit_emit_label(piVar2), local_ae < 0x87)) || (!bVar27))
      goto LAB_0012c0d9;
      if ((0x8b < local_ae) || (local_ac != 0)) {
        if (bVar28) goto LAB_0012c840;
        if ((0xd < (ushort)(local_ae - 0x83)) ||
           ((0x220bUL >> ((ulong)(ushort)(local_ae - 0x83) & 0x3f) & 1) == 0)) goto LAB_0012decd;
        goto LAB_0012cc97;
      }
      *(long *)(pauVar10[2] + 8) = local_80;
      if (!bVar28) goto LAB_0012decd;
      goto LAB_0012c840;
    }
LAB_0012d4f0:
    uVar12 = sljit_emit_label(piVar2);
    *(undefined8 *)pauVar10[3] = uVar12;
LAB_0012c0d9:
    iVar5 = local_44;
    if (local_ae != 0x85) goto LAB_0012c0e6;
    if (local_44 == 0) {
      iVar4 = *(int *)pauVar10[4];
      iVar21 = 0;
      if (iVar4 < 0) {
        if (uVar23 == 0x7b) {
          sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)local_9c);
          uVar12 = *param_1;
          uVar14 = 0x7f;
          sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,0x10);
          uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
          auVar29._8_8_ = uVar14;
          auVar29._0_8_ = uVar12;
          piVar24 = (int *)*param_1;
          iVar4 = *piVar24;
          if (iVar4 == 0) goto LAB_0012de24;
          iVar4 = 0;
        }
        else {
          if (iVar4 == -1) {
            sljit_emit_op1(piVar2,0x20,0x8e,(long)local_9c,0xc,0);
          }
          if (uVar23 != 0x7a && !bVar27) goto LAB_0012c4e1;
          iVar4 = 0;
          uVar12 = 8;
LAB_0012ddcd:
          uVar14 = *param_1;
          sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,uVar12);
          auVar29 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
          piVar24 = (int *)*param_1;
          if (*piVar24 == 0) {
LAB_0012de24:
            local_60 = auVar29._0_8_;
            puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18,auVar29._8_8_);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = local_60;
              uVar14 = sljit_emit_label(piVar24);
              uVar12 = param_1[0x26];
              puVar13[1] = uVar14;
              puVar13[2] = uVar12;
              param_1[0x26] = puVar13;
            }
          }
          if (iVar5 != 0) goto LAB_0012e2ca;
          if (uVar23 != 0x7b) goto LAB_0012de85;
        }
        sljit_emit_op1(piVar2,0x20,0x8c,(long)(iVar4 * 8),2,0);
        if (*(int *)pauVar10[4] == -1) {
          uVar12 = 8;
          goto LAB_0012e348;
        }
        goto LAB_0012e36b;
      }
LAB_0012c301:
      uVar12 = *param_1;
      iVar4 = (iVar21 - (uint)(uVar23 == 0x79 && !bVar27)) + 2 + iVar4;
      lVar17 = (long)(iVar4 * 8);
      sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f);
      uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
      piVar24 = (int *)*param_1;
      if ((*piVar24 == 0) &&
         (puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18,lVar17), puVar13 != (undefined8 *)0x0)) {
        *puVar13 = uVar12;
        uVar14 = sljit_emit_label(piVar24);
        uVar12 = param_1[0x26];
        puVar13[1] = uVar14;
        puVar13[2] = uVar12;
        param_1[0x26] = puVar13;
      }
      if (iVar5 != 0) {
        sljit_emit_op1(piVar2,0x20,0x8c,0,4,0);
      }
      lVar17 = (long)local_9c;
      sljit_emit_op1(piVar2,0x20,1,0,0x8e,lVar17);
      sljit_emit_op2(piVar2,0x40,4,0,0xc,0,0x7f,(long)iVar4 << 3);
      cVar25 = (iVar5 != 0) * '\b';
      uVar8 = (uint)(iVar5 != 0);
      if (uVar23 == 0x79 && !bVar27) {
        sljit_emit_op1(piVar2,0x20,0x8e,lVar17,4,0);
        sljit_emit_op1(piVar2,0x20,0x8c,cVar25,1,0);
      }
      else {
        sljit_emit_op1(piVar2,0x20,0x8c,cVar25,2,0);
        sljit_emit_op1(piVar2,0x20,0x8e,lVar17,4,0);
        uVar8 = uVar8 + 1;
        sljit_emit_op1(piVar2,0x20,0x8c,cVar25 + '\b',1,0);
      }
      init_frame_isra_0(param_1,puVar26,0,*(int *)pauVar10[4] + uVar8);
    }
    else {
      sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)*(int *)((long)param_1 + 100));
      iVar4 = *(int *)pauVar10[4];
      iVar21 = 1;
      if (-1 < iVar4) goto LAB_0012c301;
      if (uVar23 == 0x7b) {
        uVar12 = *param_1;
        sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,0x18);
        auVar29 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
        piVar24 = (int *)*param_1;
        if (*piVar24 == 0) {
LAB_0012e7ec:
          iVar4 = 1;
          goto LAB_0012de24;
        }
        sljit_emit_op1(piVar2,0x20,0x8c,0,4,0);
        iVar4 = 1;
      }
      else {
        if (iVar4 != -1) {
          if (uVar23 != 0x7a && !bVar27) {
            uVar12 = *param_1;
            sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,8);
            auVar29 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
            piVar24 = (int *)*param_1;
            if (*piVar24 != 0) {
              sljit_emit_op1(piVar2,0x20,0x8c,0,4,0);
              goto LAB_0012c4e1;
            }
            goto LAB_0012e7ec;
          }
LAB_0012ce29:
          iVar4 = 1;
          uVar12 = 0x10;
          goto LAB_0012ddcd;
        }
        sljit_emit_op1(piVar2,0x20,0x8e,(long)local_9c,0xc,0);
        if (uVar23 == 0x7a || bVar27) goto LAB_0012ce29;
        uVar12 = *param_1;
        uVar14 = 0x7f;
        sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,8);
        uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
        auVar29._8_8_ = uVar14;
        auVar29._0_8_ = uVar12;
        piVar24 = (int *)*param_1;
        if (*piVar24 == 0) goto LAB_0012e7ec;
        iVar4 = 1;
LAB_0012e2ca:
        sljit_emit_op1(piVar2,0x20,0x8c,0,4,0);
        if (uVar23 != 0x7b) {
LAB_0012de85:
          if (uVar23 == 0x7a || bVar27) {
            sljit_emit_op1(piVar2,0x20,0x8c,(long)(iVar4 << 3),2,0);
          }
          goto LAB_0012c4e1;
        }
      }
      sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)local_9c);
      sljit_emit_op1(piVar2,0x20,0x8c,(long)(iVar4 * 8),2,0);
      if (*(int *)pauVar10[4] == -1) {
        uVar12 = 0x10;
LAB_0012e348:
        sljit_emit_op2(piVar2,0x40,0x8e,(long)local_9c,0xc,0,0x7f,uVar12);
      }
LAB_0012e36b:
      sljit_emit_op1(piVar2,0x20,0x8c,(long)(iVar4 * 8 + 8),4,0);
    }
LAB_0012c4e1:
    compile_matchingpath(param_1,local_a8,puVar16,pauVar10);
    if (*piVar2 == 0) {
LAB_0012c4ff:
      match_once_common(param_1,uVar23,*(undefined4 *)pauVar10[4],local_9c,bVar27,local_44);
joined_r0x0012c9c1:
      if (local_ac == 0x28) {
        sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)local_84);
      }
      local_88 = (uint)(local_ac == 0x28);
      bVar28 = local_ae != 0x85;
      if (uVar23 != 0x79 || uVar3 != 0x87) {
        uVar8 = local_88 + 1;
        uVar9 = uVar8;
        if (local_a0 != 0) {
LAB_0012d047:
          uVar8 = (uVar9 + 1) - (uint)(*(int *)(param_1 + 0xd) == 0);
          if (*(char *)(param_1[5] + (long)iVar6) != '\0') goto LAB_0012d087;
          uVar8 = uVar8 + 2;
        }
        if ((bool)(bVar28 & bVar27)) {
LAB_0012d072:
          bVar28 = true;
          uVar8 = uVar8 + 1;
        }
LAB_0012c580:
        uVar12 = *param_1;
        sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,(long)(int)(uVar8 << 3));
        uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
        piVar24 = (int *)*param_1;
        if ((*piVar24 == 0) &&
           (puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18), puVar13 != (undefined8 *)0x0)) {
          *puVar13 = uVar12;
          uVar14 = sljit_emit_label(piVar24);
          uVar12 = param_1[0x26];
          puVar13[1] = uVar14;
          puVar13[2] = uVar12;
          param_1[0x26] = puVar13;
        }
      }
      else {
        uVar8 = local_88;
        uVar9 = local_88;
        if (local_a0 != 0) goto LAB_0012d047;
LAB_0012d087:
        if ((bool)(bVar28 & bVar27)) goto LAB_0012d072;
        if (uVar8 != 0) goto LAB_0012c580;
      }
      if (local_ac == 0x28) {
        sljit_emit_op2(piVar2,0x42,0x8c,0,4,0,0x7f);
      }
      if (uVar23 != 0x79 || uVar3 != 0x87) {
        if (uVar23 == 0x79) {
          sljit_emit_op1(piVar2,0x20,0x8c,local_88 << 3,0x7f,0);
        }
        else {
          sljit_emit_op1(piVar2,0x20,0x8c,local_88 << 3,2,0);
        }
      }
      if (local_a0 == 0) {
        if (*puVar16 != 0x78) {
          if (bVar27) {
LAB_0012d16b:
            if (local_ae == 0x85) {
LAB_0012d680:
              if (uVar23 != 0x7a) goto LAB_0012d1a8;
              if (local_a0 != 0) goto LAB_0012d710;
              if (local_ac != 0) goto LAB_0012c6ff;
              uVar12 = sljit_emit_label(piVar2);
              *(undefined8 *)(pauVar10[2] + 8) = uVar12;
              goto LAB_0012d6ae;
            }
LAB_0012d178:
            sljit_emit_op1(piVar2,0x20,0x8c,(long)(int)(uVar9 * 8),0x7f,0);
            if (uVar23 == 0x7a) goto LAB_0012c6e3;
LAB_0012d1a8:
            uVar12 = sljit_emit_label(piVar2);
            *(undefined8 *)(pauVar10[2] + 8) = uVar12;
            if ((local_a0 != 0) && (*(char *)(param_1[5] + (long)iVar6) != '\0')) goto LAB_0012d1d9;
          }
          else {
LAB_0012d0dc:
            if (uVar23 == 0x7a) {
              if (local_ac != 0) goto LAB_0012c70b;
              if ((ushort)(local_ae - 0x87) < 5) goto LAB_0012dfc0;
              goto LAB_0012ce86;
            }
          }
          goto LAB_0012d0e6;
        }
LAB_0012c681:
        iVar5 = 1;
        do {
          iVar5 = iVar5 + 1;
          puVar16 = puVar16 + puVar16[1];
        } while (*puVar16 == 0x78);
        if (!bVar27) {
          if (local_a0 != 0) goto LAB_0012d370;
          goto LAB_0012d0dc;
        }
        if (local_ae == 0x85) goto LAB_0012d680;
        if (iVar5 < 4) goto LAB_0012d178;
        uVar12 = sljit_emit_put_label_constprop_0(piVar2,(long)(int)(uVar9 * 8));
        *(undefined8 *)pauVar10[4] = uVar12;
        if (uVar23 != 0x7a) goto LAB_0012d1a8;
LAB_0012c6e3:
        if (local_a0 != 0) {
LAB_0012d710:
          if (*(char *)(param_1[5] + (long)iVar6) != '\0') goto LAB_0012d1d9;
          goto LAB_0012d391;
        }
        if (local_ac != 0) goto LAB_0012c6ff;
LAB_0012ce60:
        if ((ushort)(local_ae - 0x87) < 5) {
LAB_0012dfc0:
          lVar17 = sljit_emit_jump(piVar2,0x24);
          if ((lVar17 == 0) || (local_80 == 0)) {
LAB_0012e807:
            uVar12 = sljit_emit_label(piVar2);
          }
          else {
            *(long *)(lVar17 + 0x18) = local_80;
            *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffd | 1;
            uVar12 = sljit_emit_label(piVar2);
          }
LAB_0012d6fe:
          *(undefined8 *)pauVar10[3] = uVar12;
          goto LAB_0012d0fc;
        }
        if (bVar27) {
          uVar12 = sljit_emit_label(piVar2);
          *(undefined8 *)(pauVar10[2] + 8) = uVar12;
        }
LAB_0012ce86:
        if (local_ae == 0x85) {
LAB_0012d6ae:
          lVar17 = sljit_emit_cmp(piVar2,1,4,0,2,0);
          if ((lVar17 == 0) || (local_80 == 0)) goto LAB_0012e807;
          *(long *)(lVar17 + 0x18) = local_80;
          *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffd | 1;
          uVar12 = sljit_emit_label(piVar2);
          goto LAB_0012d6fe;
        }
        lVar17 = sljit_emit_cmp(piVar2,1,0x8e,(long)local_9c,2,0);
        if ((lVar17 != 0) && (local_80 != 0)) {
          *(long *)(lVar17 + 0x18) = local_80;
          *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (uVar3 != 0x97) {
          piVar24 = (int *)*param_1;
          if (*piVar24 == 0) {
            piVar24[0x26] = 0;
            iVar6 = emit_lea_binary(piVar24,0xc,0,0xc,0,0x7f);
            if (iVar6 != 4) goto LAB_0012e915;
            emit_cum_binary(piVar24,0x5030100,0xc,0,0xc,0,0x7f,8);
            uVar12 = sljit_emit_label(piVar2);
          }
          else {
LAB_0012e915:
            uVar12 = sljit_emit_label(piVar2);
          }
          *(undefined8 *)pauVar10[3] = uVar12;
          if (uVar3 != 0x98) goto LAB_0012cf70;
          goto LAB_0012d850;
        }
        uVar12 = sljit_emit_label(piVar2);
        *(undefined8 *)pauVar10[3] = uVar12;
LAB_0012d835:
        uVar12 = sljit_emit_label(piVar2);
        *(undefined8 *)(pauVar10[3] + 8) = uVar12;
LAB_0012cf70:
        piVar2 = (int *)*param_1;
        if (*piVar2 == 0) {
          piVar2[0x26] = 0;
          emit_non_cum_binary(piVar2,0x2d2b2928,10,0,10,0,0x7f,1);
        }
        uVar12 = sljit_emit_jump(piVar2,0);
        if (*piVar2 == 0) {
          lVar17 = *(long *)(piVar2 + 0x18);
          lVar20 = *(long *)(lVar17 + 8);
          uVar11 = lVar20 + 0x10;
          if (uVar11 < 0xff1) {
            *(ulong *)(lVar17 + 8) = uVar11;
            puVar13 = (undefined8 *)(lVar17 + 0x10 + lVar20);
          }
          else {
            puVar18 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
            if (puVar18 == (undefined8 *)0x0) {
              *piVar2 = 2;
              goto LAB_0012d11f;
            }
            *puVar18 = *(undefined8 *)(piVar2 + 0x18);
            *(undefined8 **)(piVar2 + 0x18) = puVar18;
            puVar13 = puVar18 + 2;
            puVar18[1] = 0x10;
          }
          uVar14 = param_1[0x2f];
          *puVar13 = uVar12;
          puVar13[1] = uVar14;
          param_1[0x2f] = puVar13;
        }
LAB_0012d11f:
        if (local_ae == 0x85) {
          iVar6 = *(int *)pauVar10[4];
LAB_0012dd24:
          *(uint *)pauVar10[4] = iVar6 * 2 | (uint)(local_44 != 0);
        }
      }
      else {
        uVar9 = match_capture_common(param_1,uVar9,local_a0,local_9c);
        if (*puVar16 == 0x78) goto LAB_0012c681;
        if (bVar27) goto LAB_0012d16b;
LAB_0012d370:
        if (*(char *)(param_1[5] + (long)iVar6) != '\0') {
LAB_0012d1d9:
          sljit_emit_op1(piVar2,0x20,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8 + local_a0 * 8),
                         2,0);
        }
        if (uVar23 == 0x7a) {
LAB_0012d391:
          if (local_ac == 0) goto LAB_0012ce60;
          if (bVar27) {
LAB_0012c6ff:
            uVar12 = sljit_emit_label(piVar2);
            *(undefined8 *)(pauVar10[2] + 8) = uVar12;
          }
LAB_0012c70b:
          sljit_emit_op2(piVar2,0x242,0x8e,(long)local_84,0x8e,(long)local_84,0x7f,1);
          lVar17 = sljit_emit_jump(piVar2,1);
          if ((lVar17 != 0) && (local_80 != 0)) {
            *(long *)(lVar17 + 0x18) = local_80;
            *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffd | 1;
          }
          if ((local_ae != 0x85) && (piVar24 = (int *)*param_1, *piVar24 == 0)) {
            piVar24[0x26] = 0;
            iVar6 = emit_lea_binary(piVar24,0xc,0,0xc,0,0x7f,8);
            if (iVar6 == 4) {
              emit_cum_binary(piVar24,0x5030100,0xc,0,0xc,0,0x7f,8);
            }
          }
          uVar12 = sljit_emit_label(piVar2);
          *(undefined8 *)pauVar10[3] = uVar12;
        }
LAB_0012d0e6:
        if (local_ac == 0x29) {
          piVar24 = (int *)*param_1;
          if (*piVar24 == 0) {
            piVar24[0x26] = 0;
            emit_non_cum_binary(piVar24,0x2d2b2928,10,0,10,0,0x7f,1);
          }
          uVar12 = sljit_emit_jump(piVar24,0);
          if (*piVar24 == 0) {
            lVar17 = *(long *)(piVar24 + 0x18);
            lVar20 = *(long *)(lVar17 + 8);
            uVar11 = lVar20 + 0x10;
            if (uVar11 < 0xff1) {
              *(ulong *)(lVar17 + 8) = uVar11;
              puVar13 = (undefined8 *)(lVar17 + 0x10 + lVar20);
            }
            else {
              puVar18 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar24 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar24 + 0x12))[2]);
              if (puVar18 == (undefined8 *)0x0) {
                *piVar24 = 2;
                goto LAB_0012d5f3;
              }
              *puVar18 = *(undefined8 *)(piVar24 + 0x18);
              *(undefined8 **)(piVar24 + 0x18) = puVar18;
              puVar13 = puVar18 + 2;
              puVar18[1] = 0x10;
            }
            uVar14 = param_1[0x2f];
            *puVar13 = uVar12;
            puVar13[1] = uVar14;
            param_1[0x2f] = puVar13;
          }
LAB_0012d5f3:
          sljit_emit_op2(piVar2,0x242,0x8e,(long)local_84,0x8e,(long)local_84,0x7f,1);
          lVar17 = sljit_emit_jump(piVar2,1);
          if ((local_80 != 0) && (lVar17 != 0)) {
            *(long *)(lVar17 + 0x18) = local_80;
            *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        else if (local_ac == 0x27) {
          sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)local_84);
          uVar12 = *param_1;
          sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,8);
          uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
          piVar24 = (int *)*param_1;
          if ((*piVar24 == 0) &&
             (puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18), puVar13 != (undefined8 *)0x0)) {
            *puVar13 = uVar12;
            uVar14 = sljit_emit_label(piVar24);
            uVar12 = param_1[0x26];
            puVar13[1] = uVar14;
            puVar13[2] = uVar12;
            param_1[0x26] = puVar13;
          }
          sljit_emit_op1(piVar2,0x20,0x8c,0,4,0);
        }
LAB_0012d0fc:
        if (uVar3 == 0x97) goto LAB_0012d835;
        if (uVar3 != 0x98) {
          if (uVar23 == 0x79) goto LAB_0012d11f;
          goto LAB_0012cf70;
        }
LAB_0012d850:
        lVar17 = *(long *)(param_3 + 0x28);
        lVar20 = sljit_emit_jump(piVar2,0x24);
        if ((lVar17 != 0) && (lVar20 != 0)) {
          *(long *)(lVar20 + 0x18) = lVar17;
          *(ulong *)(lVar20 + 0x10) = *(ulong *)(lVar20 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (local_70 == 0) goto LAB_0012d11f;
        lVar17 = sljit_emit_label(piVar2);
        if (lVar17 != 0) {
          *(long *)(local_70 + 0x18) = lVar17;
          *(ulong *)(local_70 + 0x10) = *(ulong *)(local_70 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (local_ae == 0x85) {
          iVar6 = *(int *)pauVar10[4];
          if (-1 < iVar6) {
            sljit_emit_op1(piVar2,0x20,0xc,0,0x8e,(long)local_9c);
            uVar12 = sljit_emit_jump(piVar2,0x25);
            if (*piVar2 == 0) {
              lVar17 = *(long *)(piVar2 + 0x18);
              lVar20 = *(long *)(lVar17 + 8);
              uVar11 = lVar20 + 0x10;
              if (uVar11 < 0xff1) {
                *(ulong *)(lVar17 + 8) = uVar11;
                puVar13 = (undefined8 *)(lVar17 + 0x10 + lVar20);
              }
              else {
                puVar18 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
                if (puVar18 == (undefined8 *)0x0) {
                  *piVar2 = 2;
                  goto LAB_0012e1c5;
                }
                *puVar18 = *(undefined8 *)(piVar2 + 0x18);
                *(undefined8 **)(piVar2 + 0x18) = puVar18;
                puVar13 = puVar18 + 2;
                puVar18[1] = 0x10;
              }
              uVar14 = param_1[0x31];
              *puVar13 = uVar12;
              puVar13[1] = uVar14;
              param_1[0x31] = puVar13;
            }
LAB_0012e1c5:
            sljit_emit_op2(piVar2,0x40,0xc,0,0xc,0,0x7f,(long)(*(int *)pauVar10[4] + -1) << 3);
            iVar6 = *(int *)pauVar10[4];
          }
          goto LAB_0012dd24;
        }
        if (((uVar23 == 0x7b) && (bVar28)) && (piVar2 = (int *)*param_1, *piVar2 == 0)) {
          piVar2[0x26] = 0;
          iVar6 = emit_lea_binary(piVar2,0xc,0,0xc,0,0x7f,8);
          if (iVar6 == 4) {
            emit_cum_binary(piVar2,0x5030100,0xc,0,0xc,0,0x7f,8);
          }
        }
      }
      puVar16 = puVar16 + (long)local_58 + 2;
      goto LAB_0012c1e8;
    }
  }
  else {
    if (uVar3 == 0x97) {
      uVar12 = 8;
LAB_0012ca85:
      uVar14 = *param_1;
      sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,uVar12);
      uVar12 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
      piVar24 = (int *)*param_1;
      if (*piVar24 == 0) {
LAB_0012bfff:
        puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = uVar12;
          uVar14 = sljit_emit_label(piVar24);
          uVar12 = param_1[0x26];
          puVar13[1] = uVar14;
          puVar13[2] = uVar12;
          param_1[0x26] = puVar13;
        }
      }
      if ((uVar23 == 0x7a) || ((uVar3 != 0x98 && (uVar23 == 0x7b)))) goto LAB_0012c06b;
      iVar5 = 0;
      goto joined_r0x0012ca09;
    }
LAB_0012c09a:
    if (uVar3 != 0x98) goto joined_r0x0012ca36;
    sljit_emit_op1(piVar2,0x20,2,0,0x8c,0);
    if (uVar23 != 0x7b) {
      piVar24 = (int *)*param_1;
      if (*piVar24 == 0) {
        piVar24[0x26] = 0;
        iVar5 = emit_lea_binary(piVar24,0xc,0,0xc,0,0x7f,8);
        if (iVar5 == 4) {
          emit_cum_binary(piVar24,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      local_70 = sljit_emit_cmp(piVar2,0,2,0,0x7f,0);
      if ((local_ac == 0) ||
         (sljit_emit_op1(piVar2,0x20,0x8e,(long)local_84,0x7f,(long)(int)local_80), local_ac != 0x29
         )) {
        local_80 = 0;
      }
      else {
        local_80 = sljit_emit_label(piVar2);
      }
      goto LAB_0012c0cf;
    }
    if ((local_ae == 0x85) || (0x8b < local_ae)) {
      lVar17 = sljit_emit_cmp(piVar2,1,2,0,0x7f,0);
      sljit_emit_op1(piVar2,0x20,2,0,0x8c,8);
      lVar20 = sljit_emit_jump(piVar2,0x24);
      lVar19 = sljit_emit_label(piVar2);
      if ((lVar19 != 0) && (lVar17 != 0)) {
        *(long *)(lVar17 + 0x18) = lVar19;
        *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar17 = (long)local_9c;
      uVar12 = 0x8e;
      if ((local_ae == 0x85) && (-1 < *(int *)pauVar10[4])) {
        sljit_emit_op1(piVar2,0x20,1,0,0x8e,lVar17);
        uVar12 = 0x81;
        lVar17 = (long)((-2 - *(int *)pauVar10[4]) * 8);
      }
      local_70 = sljit_emit_cmp(piVar2,0,2,0,uVar12,lVar17);
      lVar17 = sljit_emit_label(piVar2);
      if ((lVar20 != 0) && (lVar17 != 0)) {
        *(long *)(lVar20 + 0x18) = lVar17;
        *(ulong *)(lVar20 + 0x10) = *(ulong *)(lVar20 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (local_ac != 0) goto LAB_0012e59b;
      local_80 = 0;
      goto LAB_0012d4f0;
    }
    lVar17 = sljit_emit_cmp(piVar2,1,2,0,0x7f,0);
    sljit_emit_op1(piVar2,0x20,2,0,0x8c,8);
    lVar20 = sljit_emit_label(piVar2);
    if ((lVar17 != 0) && (lVar20 != 0)) {
      *(long *)(lVar17 + 0x18) = lVar20;
      *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if (local_ac != 0) {
      local_70 = 0;
LAB_0012e59b:
      sljit_emit_op1(piVar2,0x20,0x8e,(long)local_84,0x7f,(long)(int)local_80);
      local_80 = 0;
      if (local_ac == 0x29) {
        local_80 = sljit_emit_label(piVar2);
      }
      goto LAB_0012d4f0;
    }
    uVar12 = sljit_emit_label(piVar2);
    local_70 = 0;
    *(undefined8 *)pauVar10[3] = uVar12;
    local_80 = 0;
LAB_0012c0e6:
    if (bVar28) {
LAB_0012c840:
      lVar17 = (long)local_9c;
      if (*(char *)(param_1[5] + (long)iVar6) == '\0') {
        sljit_emit_op1(piVar2,0x20,4,0,0x8e,lVar17);
        uVar12 = *param_1;
        uVar14 = 8;
        sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f);
        uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
        piVar24 = (int *)*param_1;
        if ((*piVar24 == 0) &&
           (puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18,uVar14), puVar13 != (undefined8 *)0x0))
        {
          *puVar13 = uVar12;
          uVar14 = sljit_emit_label(piVar24);
          uVar12 = param_1[0x26];
          puVar13[1] = uVar14;
          puVar13[2] = uVar12;
          param_1[0x26] = puVar13;
        }
        sljit_emit_op1(piVar2,0x20,0x8e,lVar17,2,0);
        sljit_emit_op1(piVar2,0x20,0x8c,0,4,0);
      }
      else {
        uVar12 = *param_1;
        sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f);
        uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
        piVar24 = (int *)*param_1;
        if ((*piVar24 == 0) &&
           (puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18), puVar13 != (undefined8 *)0x0)) {
          *puVar13 = uVar12;
          uVar14 = sljit_emit_label(piVar24);
          uVar12 = param_1[0x26];
          puVar13[1] = uVar14;
          puVar13[2] = uVar12;
          param_1[0x26] = puVar13;
        }
        sljit_emit_op1(piVar2,0x20,1,0,0x8e,lVar17);
        sljit_emit_op1(piVar2,0x20,4,0,0x8e,lVar17 + 8);
        sljit_emit_op1(piVar2,0x20,0x8e,lVar17,2,0);
        sljit_emit_op1(piVar2,0x20,0x8c,0,1,0);
        sljit_emit_op1(piVar2,0x20,0x8c,8,4,0);
      }
LAB_0012c961:
      compile_matchingpath(param_1,local_a8,puVar16,pauVar10);
      if (*piVar2 == 0) {
        if (local_ae == 0x84) {
LAB_0012d7e4:
          if (*(int *)(param_1[3] + ((long)puVar26 + (2 - param_1[2]) >> 1) * 4) != 0) {
            sljit_emit_op1(piVar2,0x20,0xd,0,0x8e,(long)local_9c + 8);
          }
        }
        else {
          if (0x84 < local_ae) {
            if (local_ae != 0x85) {
              if (local_ae == 0x86) {
                match_script_run_common(param_1,local_9c,pauVar10);
              }
              goto joined_r0x0012c9c1;
            }
            goto LAB_0012c4ff;
          }
          if (local_ae == 0x83) {
            sljit_emit_op1(piVar2,0x20,2,0,0x8e,(long)local_9c);
          }
        }
        goto joined_r0x0012c9c1;
      }
    }
    else {
      if (local_ae != 0x84) {
        if ((ushort)(local_ae - 0x83) < 0xe) {
          if ((0x220bUL >> ((ulong)(ushort)(local_ae - 0x83) & 0x3f) & 1) != 0) goto LAB_0012cc97;
          if (bVar27) goto LAB_0012decd;
        }
        else {
          if (!bVar27) goto LAB_0012c961;
LAB_0012decd:
          uVar12 = *param_1;
          uVar14 = 8;
          sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f);
          uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
          piVar24 = (int *)*param_1;
          if ((*piVar24 == 0) &&
             (puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18,uVar14), puVar13 != (undefined8 *)0x0
             )) {
            *puVar13 = uVar12;
            uVar14 = sljit_emit_label(piVar24);
            uVar12 = param_1[0x26];
            puVar13[1] = uVar14;
            puVar13[2] = uVar12;
            param_1[0x26] = puVar13;
          }
          sljit_emit_op1(piVar2,0x20,0x8c,0,2,0);
        }
LAB_0012c12b:
        if ((local_ae != 0x8b) && (local_ae != 0x90)) goto LAB_0012c961;
        uVar1 = *local_a8;
        if (uVar1 == 0x91) {
          uVar12 = sljit_emit_cmp(piVar2,0,0x8e,
                                  (long)(int)((uint)local_a8[1] * 0x10 +
                                             *(int *)((long)param_1 + 0x44)),0x8e,
                                  (long)(*(int *)((long)param_1 + 0x44) + 8));
          if (*piVar2 == 0) {
            lVar17 = *(long *)(piVar2 + 0x18);
            lVar20 = *(long *)(lVar17 + 8);
            uVar11 = lVar20 + 0x10;
            if (uVar11 < 0xff1) {
              *(ulong *)(lVar17 + 8) = uVar11;
              puVar13 = (undefined8 *)(lVar17 + 0x10 + lVar20);
            }
            else {
              puVar18 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
              if (puVar18 == (undefined8 *)0x0) {
                *piVar2 = 2;
                goto LAB_0012d7cf;
              }
              *puVar18 = *(undefined8 *)(piVar2 + 0x18);
              *(undefined8 **)(piVar2 + 0x18) = puVar18;
              puVar13 = puVar18 + 2;
              puVar18[1] = 0x10;
            }
            uVar14 = *(undefined8 *)pauVar10[4];
            *puVar13 = uVar12;
            puVar13[1] = uVar14;
            *(undefined8 **)pauVar10[4] = puVar13;
          }
LAB_0012d7cf:
          local_a8 = local_a8 + 2;
        }
        else if (uVar1 == 0x92) {
          uVar1 = local_a8[2];
          puVar26 = (ushort *)(param_1[0x1e] + (ulong)local_a8[1] * param_1[0x20] * 2);
          sljit_emit_op1(piVar2,0x20,3,0,2,0);
          sljit_emit_op1(piVar2,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8));
          sljit_emit_op2(piVar2,0x242,4,0,0x8e,
                         (long)(int)((uint)*puVar26 * 0x10 + *(int *)((long)param_1 + 0x44)),1,0);
          puVar26 = puVar26 + param_1[0x20];
          iVar5 = uVar1 - 2;
          if (1 < uVar1) {
            do {
              sljit_emit_op2(piVar2,0x42,2,0,0x8e,
                             (long)(int)((uint)*puVar26 * 0x10 + *(int *)((long)param_1 + 0x44)),1,0
                            );
              if (*piVar2 == 0) {
                piVar2[0x26] = 0;
                emit_cum_binary(piVar2,0xd0b0908,4,0,4,0,2,0);
              }
              puVar26 = puVar26 + param_1[0x20];
              bVar28 = iVar5 != 0;
              iVar5 = iVar5 + -1;
            } while (bVar28);
          }
          sljit_emit_op1(piVar2,0x20,2,0,3,0);
          uVar12 = sljit_emit_jump(piVar2,0);
          if (*piVar2 == 0) {
            lVar17 = *(long *)(piVar2 + 0x18);
            lVar20 = *(long *)(lVar17 + 8);
            uVar11 = lVar20 + 0x10;
            if (uVar11 < 0xff1) {
              *(ulong *)(lVar17 + 8) = uVar11;
              puVar13 = (undefined8 *)(lVar17 + 0x10 + lVar20);
            }
            else {
              puVar18 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
              if (puVar18 == (undefined8 *)0x0) {
                *piVar2 = 2;
                goto LAB_0012d361;
              }
              *puVar18 = *(undefined8 *)(piVar2 + 0x18);
              *(undefined8 **)(piVar2 + 0x18) = puVar18;
              puVar13 = puVar18 + 2;
              puVar18[1] = 0x10;
            }
            uVar14 = *(undefined8 *)pauVar10[4];
            *puVar13 = uVar12;
            puVar13[1] = uVar14;
            *(undefined8 **)pauVar10[4] = puVar13;
          }
LAB_0012d361:
          local_a8 = local_a8 + 3;
        }
        else if (((ushort)(uVar1 - 0x93) < 4) || (uVar1 == 0xa3)) {
          *(undefined8 *)pauVar10[4] = 0;
          if (uVar1 == 0x96) {
            local_a8 = local_a8 + 1;
          }
          else {
            if ((uVar1 != 0x95) && (uVar1 != 0xa3)) {
              lVar17 = param_1[0x28];
              if (uVar1 == 0x93) {
                if (lVar17 != 0) {
                  uVar1 = local_a8[1];
                  if (uVar1 != 0xffff) {
                    if (*(long *)(lVar17 + 0x28) == 0) {
                      bVar28 = uVar1 == 0;
                    }
                    else {
                      bVar28 = *(ushort *)(param_1[2] + 4 + *(long *)(lVar17 + 0x28) * 2) == uVar1;
                    }
                    if (!bVar28) goto LAB_0012d988;
                  }
                  goto LAB_0012d7cf;
                }
              }
              else if ((lVar17 != 0) && (*(long *)(lVar17 + 0x28) != 0)) {
                uVar8 = (uint)local_a8[2];
                psVar22 = (short *)(param_1[0x1e] + (ulong)local_a8[1] * param_1[0x20] * 2);
                if (local_a8[2] != 0) {
                  do {
                    if (*(short *)(param_1[2] + 4 + *(long *)(lVar17 + 0x28) * 2) == *psVar22)
                    goto LAB_0012d361;
                    psVar22 = psVar22 + param_1[0x20];
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
              }
            }
LAB_0012d988:
            local_a8 = puVar16;
            if (*puVar16 == 0x78) {
              local_a8 = puVar16 + 2;
              puVar16 = puVar16 + puVar16[1];
            }
          }
        }
        else {
          if ((*piVar2 != 0) ||
             (pauVar15 = (undefined1 (*) [16])ensure_abuf(piVar2,0x40), *piVar2 != 0))
          goto LAB_0012c1e6;
          pauVar15[2] = (undefined1  [16])0x0;
          *pauVar15 = (undefined1  [16])0x0;
          *(ushort **)pauVar15[2] = local_a8;
          pauVar15[1] = (undefined1  [16])0x0;
          pauVar15[3] = (undefined1  [16])0x0;
          *(undefined1 (**) [16])pauVar10[4] = pauVar15;
          local_a8 = (ushort *)compile_assert_matchingpath(param_1,local_a8,pauVar15,1);
        }
        compile_matchingpath(param_1,local_a8,puVar16,pauVar10);
        if (*piVar2 != 0) goto LAB_0012c1e6;
        goto joined_r0x0012c9c1;
      }
      if (*(int *)(param_1[3] + ((long)puVar26 + (2 - param_1[2]) >> 1) * 4) == 0) {
LAB_0012cc97:
        sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)local_9c);
        uVar12 = *param_1;
        sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f);
        uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
        piVar24 = (int *)*param_1;
        if ((*piVar24 == 0) &&
           (puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18), puVar13 != (undefined8 *)0x0)) {
          *puVar13 = uVar12;
          uVar14 = sljit_emit_label(piVar24);
          uVar12 = param_1[0x26];
          puVar13[1] = uVar14;
          puVar13[2] = uVar12;
          param_1[0x26] = puVar13;
        }
        sljit_emit_op1(piVar2,0x20,0x8e,(long)local_9c,2,0);
        sljit_emit_op1(piVar2,0x20,0x8c,0,4,0);
        if (*local_a8 == 0x7d) {
          local_a8 = (ushort *)compile_reverse_matchingpath(param_1,local_a8,pauVar10);
        }
        goto LAB_0012c12b;
      }
      lVar17 = (long)local_9c;
      sljit_emit_op1(piVar2,0x20,4,0,0x8e,lVar17);
      uVar12 = *param_1;
      sljit_emit_op2(uVar12,0x42,0xc,0,0xc,0,0x7f,0x20);
      uVar12 = sljit_emit_cmp(uVar12,2,0xc,0,0xb,0);
      piVar24 = (int *)*param_1;
      if ((*piVar24 == 0) &&
         (puVar13 = (undefined8 *)ensure_abuf(piVar24,0x18), puVar13 != (undefined8 *)0x0)) {
        *puVar13 = uVar12;
        uVar14 = sljit_emit_label(piVar24);
        uVar12 = param_1[0x26];
        puVar13[1] = uVar14;
        puVar13[2] = uVar12;
        param_1[0x26] = puVar13;
      }
      sljit_emit_op1(piVar2,0x20,1,0,0x8e,lVar17 + 8);
      sljit_emit_op1(piVar2,0x20,0x8e,lVar17,2,0);
      sljit_emit_op1(piVar2,0x20,0x8e,lVar17 + 8,0xd,0);
      sljit_emit_op1(piVar2,0x20,0x8c,0,4,0);
      sljit_emit_op1(piVar2,0x20,0x8c,8,1,0);
      sljit_emit_op1(piVar2,0x20,0xd,0,2,0);
      uVar1 = *local_a8;
      if ((ushort)(uVar1 - 0x7d) < 2) {
        uVar12 = compile_reverse_matchingpath(param_1,local_a8,pauVar10);
        compile_matchingpath(param_1,uVar12,puVar16,pauVar10);
        if (*piVar2 == 0) {
          if (uVar1 == 0x7e) {
            uVar12 = sljit_emit_cmp(piVar2,2,2,0,0xd,0);
            lVar17 = *(long *)pauVar10[1];
            if (*piVar2 == 0) {
              lVar20 = *(long *)(piVar2 + 0x18);
              lVar19 = *(long *)(lVar20 + 8);
              uVar11 = lVar19 + 0x10;
              if (uVar11 < 0xff1) {
                *(ulong *)(lVar20 + 8) = uVar11;
                puVar13 = (undefined8 *)(lVar20 + 0x10 + lVar19);
              }
              else {
                puVar18 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
                if (puVar18 == (undefined8 *)0x0) {
                  *piVar2 = 2;
                  goto LAB_0012d7e4;
                }
                *puVar18 = *(undefined8 *)(piVar2 + 0x18);
                *(undefined8 **)(piVar2 + 0x18) = puVar18;
                puVar13 = puVar18 + 2;
                puVar18[1] = 0x10;
              }
              uVar14 = *(undefined8 *)(lVar17 + 8);
              *puVar13 = uVar12;
              puVar13[1] = uVar14;
              *(undefined8 **)(lVar17 + 8) = puVar13;
            }
          }
          goto LAB_0012d7e4;
        }
      }
      else {
        compile_matchingpath(param_1,local_a8,puVar16,pauVar10);
        if (*piVar2 == 0) goto LAB_0012d7e4;
      }
    }
  }
LAB_0012c1e6:
  puVar16 = (ushort *)0x0;
LAB_0012c1e8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar16;
}



/* WARNING: Removing unreachable block (ram,0x0012fa28) */
/* WARNING: Removing unreachable block (ram,0x0012eaf1) */
/* WARNING: Removing unreachable block (ram,0x0012f6b1) */
/* WARNING: Removing unreachable block (ram,0x0012ffb6) */
/* WARNING: Removing unreachable block (ram,0x0012ffc7) */
/* WARNING: Removing unreachable block (ram,0x0012ffd1) */
/* WARNING: Removing unreachable block (ram,0x0012ffea) */
/* WARNING: Removing unreachable block (ram,0x0012fff5) */
/* WARNING: Removing unreachable block (ram,0x00130029) */
/* WARNING: Removing unreachable block (ram,0x0013004c) */
/* WARNING: Removing unreachable block (ram,0x001300b8) */
/* WARNING: Removing unreachable block (ram,0x001300f1) */
/* WARNING: Removing unreachable block (ram,0x00130116) */

void compile_recurse(undefined8 *param_1)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  ushort *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ushort *puVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  byte bVar20;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  ushort *puVar21;
  long lVar22;
  undefined *puVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  ushort *puVar28;
  undefined4 uVar29;
  int *piVar30;
  long *plVar31;
  long lVar32;
  long in_FS_OFFSET;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long *local_c8;
  undefined8 local_b8;
  long local_a0;
  long local_90;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ushort *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = (int *)*param_1;
  puVar28 = (ushort *)(param_1[2] + *(long *)(param_1[0x28] + 0x28) * 2);
  puVar1 = puVar28 + (ulong)(*puVar28 != 0x87) + 2;
  puVar21 = puVar28;
  do {
    puVar21 = puVar21 + puVar21[1];
  } while (*puVar21 == 0x78);
  memset((void *)param_1[0x11],0,(long)*(int *)(param_1 + 0x10));
  if (puVar1 < puVar21) {
    iVar9 = 1;
    uVar29 = 0;
    lVar25 = 1;
    puVar23 = &DAT_00134fdc;
    uVar24 = 0x1d00e807403a;
    puVar10 = puVar1;
    do {
      uVar3 = *puVar10;
      if (uVar3 < 0xa6) {
        if (0x4d < uVar3) {
          if ((ushort)(uVar3 - 0x4e) < 0x58) {
                    /* WARNING: Could not recover jumptable at 0x0012ea77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(puVar23 + *(int *)(puVar23 + (ulong)(ushort)(uVar3 - 0x4e) * 4)))();
            return;
          }
          goto LAB_0012f190;
        }
        if (uVar3 == 3) {
          uVar29 = 4;
          puVar17 = puVar10 + 1;
        }
        else {
          if (0x2c < (ushort)(uVar3 - 0x21)) goto LAB_0012f190;
          uVar16 = lVar25 << ((byte)(uVar3 - 0x21) & 0x3f);
          if ((uVar16 & uVar24) == 0) {
            if ((uVar16 & 0x2801400a005) == 0) {
              if ((uVar16 & 0x3001800c0) != 0) {
                iVar27 = *(int *)(param_1[3] + ((long)puVar10 - param_1[2] >> 1) * 4);
                if (iVar27 != 0) {
                  pbVar18 = (byte *)(((long)iVar27 >> 6) + param_1[0x11]);
                  bVar2 = *pbVar18;
                  bVar20 = (byte)(1 << ((byte)((long)iVar27 >> 3) & 7));
                  if ((bVar2 & bVar20) == 0) {
                    iVar9 = iVar9 + 2;
                    *pbVar18 = bVar2 | bVar20;
                  }
                }
                puVar17 = puVar10 + 3;
                if ((*(int *)(param_1 + 0x3c) != 0) &&
                   (puVar17 = puVar10 + 4, (puVar10[2] & 0xfc00) != 0xd800)) {
                  puVar17 = puVar10 + 3;
                }
                goto LAB_0012ead1;
              }
              goto LAB_0012f190;
            }
            iVar27 = *(int *)(param_1[3] + ((long)puVar10 - param_1[2] >> 1) * 4);
            if (iVar27 != 0) {
              pbVar18 = (byte *)(((long)iVar27 >> 6) + param_1[0x11]);
              bVar2 = *pbVar18;
              bVar20 = (byte)(1 << ((byte)((long)iVar27 >> 3) & 7));
              if ((bVar2 & bVar20) == 0) {
                iVar9 = iVar9 + 2;
                *pbVar18 = bVar2 | bVar20;
              }
            }
          }
          else {
            iVar27 = *(int *)(param_1[3] + ((long)puVar10 - param_1[2] >> 1) * 4);
            if (iVar27 != 0) {
              pbVar18 = (byte *)(((long)iVar27 >> 6) + param_1[0x11]);
              bVar2 = *pbVar18;
              bVar20 = (byte)(1 << ((byte)((long)iVar27 >> 3) & 7));
              if ((bVar2 & bVar20) == 0) {
                iVar9 = iVar9 + 1;
                *pbVar18 = bVar2 | bVar20;
              }
            }
          }
          puVar17 = puVar10 + 2;
          if ((*(int *)(param_1 + 0x3c) != 0) &&
             (puVar17 = puVar10 + 3, (puVar10[1] & 0xfc00) != 0xd800)) {
            puVar17 = puVar10 + 2;
          }
        }
      }
      else {
LAB_0012f190:
        puVar17 = (ushort *)next_opcode(param_1);
      }
LAB_0012ead1:
      puVar10 = puVar17;
    } while (puVar17 < puVar21);
  }
  else {
    uVar29 = 0;
    iVar9 = 1;
  }
  param_1[7] = 0;
  puVar10 = puVar28;
  iVar27 = 0;
  do {
    iVar26 = iVar27;
    iVar27 = iVar26 + 1;
    puVar10 = puVar10 + puVar10[1];
  } while (*puVar10 == 0x78);
  lVar25 = param_1[0x28];
  uVar11 = sljit_emit_label(piVar4);
  *(undefined8 *)(lVar25 + 8) = uVar11;
  lVar25 = *(long *)(param_1[0x28] + 8);
  for (plVar31 = *(long **)(param_1[0x28] + 0x18); plVar31 != (long *)0x0;
      plVar31 = (long *)plVar31[1]) {
    lVar22 = *plVar31;
    if ((lVar22 != 0) && (lVar25 != 0)) {
      *(long *)(lVar22 + 0x18) = lVar25;
      *(ulong *)(lVar22 + 0x10) = *(ulong *)(lVar22 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  sljit_emit_op_dst_constprop_0_isra_0(piVar4,4);
  piVar30 = (int *)*param_1;
  uVar11 = extraout_RDX;
  if (*piVar30 == 0) {
    piVar30[0x26] = 0;
    uVar11 = 1;
    emit_non_cum_binary(piVar30,0x2d2b2928,10,0,10,0,0x7f);
  }
  uVar11 = sljit_emit_jump(piVar30,0,uVar11);
  if (*piVar30 == 0) {
    lVar25 = *(long *)(piVar30 + 0x18);
    lVar22 = *(long *)(lVar25 + 8);
    uVar24 = lVar22 + 0x10;
    if (uVar24 < 0xff1) {
      *(ulong *)(lVar25 + 8) = uVar24;
      puVar13 = (undefined8 *)(lVar25 + 0x10 + lVar22);
    }
    else {
      puVar12 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar30 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar30 + 0x12))[2]);
      if (puVar12 == (undefined8 *)0x0) {
        *piVar30 = 2;
        goto LAB_0012ec7a;
      }
      *puVar12 = *(undefined8 *)(piVar30 + 0x18);
      puVar13 = puVar12 + 2;
      *(undefined8 **)(piVar30 + 0x18) = puVar12;
      puVar12[1] = 0x10;
    }
    uVar14 = param_1[0x2f];
    *puVar13 = uVar11;
    puVar13[1] = uVar14;
    param_1[0x2f] = puVar13;
  }
LAB_0012ec7a:
  iVar8 = (iVar27 != 1) + 1;
  lVar22 = (ulong)(iVar27 != 1) << 3;
  uVar11 = *param_1;
  lVar25 = (long)((iVar9 + iVar8) * 8);
  sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,lVar25);
  uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
  piVar30 = (int *)*param_1;
  if ((*piVar30 == 0) &&
     (puVar13 = (undefined8 *)ensure_abuf(piVar30,0x18), puVar13 != (undefined8 *)0x0)) {
    *puVar13 = uVar11;
    uVar14 = sljit_emit_label(piVar30);
    uVar11 = param_1[0x26];
    puVar13[1] = uVar14;
    puVar13[2] = uVar11;
    param_1[0x26] = puVar13;
  }
  sljit_emit_op1(piVar4,0x20,0x8c,lVar22,4,0);
  copy_recurse_data_isra_0(param_1,puVar1,puVar21,0,iVar8,uVar29);
  sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)(param_1 + 10),0xc,0);
  if (iVar27 != 1) {
    sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
  }
  param_1[0x22] = 0;
  local_68 = (undefined1  [16])0x0;
  uVar3 = puVar28[1];
  param_1[0x24] = 0;
  puVar28 = puVar28 + uVar3;
  lVar32 = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  local_c8 = (long *)0x0;
  local_a0 = 0;
  local_90 = 0;
  local_48 = puVar1;
  do {
    local_58 = (undefined1  [16])0x0;
    if (puVar1 != local_48) {
      sljit_emit_op1(piVar4,0x20,2,0,0x8c,0);
    }
    compile_matchingpath(param_1,local_48,puVar28,local_68);
    if (*piVar4 != 0) goto LAB_0012ff3e;
    uVar11 = *param_1;
    if (iVar26 == 0) {
      uVar14 = 8;
      sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f);
      local_b8 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
      piVar30 = (int *)*param_1;
      if (*piVar30 == 0) goto LAB_0012ef14;
      sljit_emit_op1(piVar4,0x20,4,0,0x8e);
    }
    else {
      uVar14 = 0x10;
      sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f);
      local_b8 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
      piVar30 = (int *)*param_1;
      if (*piVar30 == 0) {
LAB_0012ef14:
        puVar13 = (undefined8 *)ensure_abuf(piVar30,0x18,uVar14);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = local_b8;
          uVar14 = sljit_emit_label(piVar30);
          uVar11 = param_1[0x26];
          puVar13[1] = uVar14;
          puVar13[2] = uVar11;
          param_1[0x26] = puVar13;
        }
      }
      sljit_emit_op1(piVar4,0x20,4,0,0x8e);
      if (iVar27 != 1) {
        if (iVar27 < 4) {
          sljit_emit_op1(piVar4,0x20,0x8c,8,0x7f);
        }
        else {
          local_a0 = sljit_emit_put_label_constprop_0(piVar4,8);
        }
      }
    }
    lVar15 = sljit_emit_jump(piVar4,0x24);
    if (*piVar4 == 0) {
      lVar5 = *(long *)(piVar4 + 0x18);
      lVar6 = *(long *)(lVar5 + 8);
      uVar24 = lVar6 + 0x10;
      if (uVar24 < 0xff1) {
        *(ulong *)(lVar5 + 8) = uVar24;
        plVar31 = (long *)(lVar5 + 0x10 + lVar6);
      }
      else {
        puVar13 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar4 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar13 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_0012f016;
        }
        plVar31 = puVar13 + 2;
        *puVar13 = *(undefined8 *)(piVar4 + 0x18);
        *(undefined8 **)(piVar4 + 0x18) = puVar13;
        puVar13[1] = 0x10;
      }
      *plVar31 = lVar15;
      plVar31[1] = (long)local_c8;
      local_c8 = plVar31;
    }
LAB_0012f016:
    if (lVar32 == 0) {
      lVar15 = param_1[0x28];
      uVar11 = sljit_emit_label(piVar4);
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
      lVar15 = *(long *)(param_1[0x28] + 0x10);
      for (plVar31 = *(long **)(param_1[0x28] + 0x20); plVar31 != (long *)0x0;
          plVar31 = (long *)plVar31[1]) {
        lVar5 = *plVar31;
        if ((lVar5 != 0) && (lVar15 != 0)) {
          *(long *)(lVar5 + 0x18) = lVar15;
          *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      sljit_emit_op_dst_constprop_0_isra_0(piVar4,1);
      sljit_emit_op1(piVar4,0x20,4,0,0x8c,0);
      sljit_emit_op1(piVar4,0x20,0x84,lVar22,1,0);
      uVar11 = 0x12f951;
      copy_recurse_data_isra_0(param_1,puVar1,puVar21,4,iVar8);
      auVar33._8_8_ = extraout_RDX_00;
      auVar33._0_8_ = local_90;
      if (iVar27 != 1) {
        sljit_emit_op1(piVar4,0x20,1,0,0x8c);
        piVar30 = (int *)*param_1;
        if (*piVar30 == 0) {
          piVar30[0x26] = 0;
          iVar9 = emit_lea_binary(piVar30,0xc,0,0xc,0,0x7f,0x10);
          if (iVar9 == 4) {
            emit_cum_binary(piVar30,0x5030100,0xc,0,0xc,0,0x7f,0x10);
          }
        }
        if (iVar27 < 4) goto LAB_0012f849;
        if (*piVar4 == 0) {
          piVar4[0x26] = 1;
          puVar19 = (undefined1 *)emit_x86_instruction(piVar4,1,0,0,1);
          if (puVar19 != (undefined1 *)0x0) {
            puVar19[1] = puVar19[1] | 0x20;
            *puVar19 = 0xff;
          }
        }
        auVar33 = sljit_emit_label(piVar4);
        uVar11 = auVar33._8_8_;
        goto joined_r0x0012fa19;
      }
      piVar30 = (int *)*param_1;
      if (*piVar30 == 0) {
        piVar30[0x26] = 0;
        iVar9 = emit_lea_binary(piVar30,0xc,0,0xc,0,0x7f,8);
        auVar33._8_8_ = uVar11;
        if (iVar9 == 4) {
          emit_cum_binary(piVar30,0x5030100,0xc,0,0xc,0,0x7f,8);
          auVar33._8_8_ = extraout_RDX_01;
        }
      }
    }
    else if (iVar27 < 4) {
      auVar33 = sljit_emit_label(piVar4);
      uVar24 = auVar33._8_8_;
      if ((auVar33._0_8_ != 0) && (local_90 != 0)) {
        *(long *)(local_90 + 0x18) = auVar33._0_8_;
        uVar24 = *(ulong *)(local_90 + 0x10) & 0xfffffffffffffffd | 1;
        *(ulong *)(local_90 + 0x10) = uVar24;
      }
      auVar33._8_8_ = uVar24;
      auVar33._0_8_ = local_90;
      if ((int)lVar32 < iVar26) {
LAB_0012f849:
        auVar33 = sljit_emit_cmp(piVar4,1,1,0,0x7f);
      }
    }
    else {
      auVar33 = sljit_emit_label(piVar4);
      uVar11 = auVar33._8_8_;
joined_r0x0012fa19:
      if (local_a0 != 0) {
        uVar11 = auVar33._8_8_;
        *(long *)(local_a0 + 8) = auVar33._0_8_;
      }
      auVar33._8_8_ = uVar11;
      auVar33._0_8_ = local_90;
      if (*piVar4 == 0) {
        auVar34 = ensure_buf(piVar4,5);
        auVar7._8_8_ = auVar34._8_8_;
        auVar7._0_8_ = local_90;
        auVar33._8_8_ = auVar34._8_8_;
        puVar19 = auVar34._0_8_;
        if (puVar19 != (undefined1 *)0x0) {
          *puVar19 = 4;
          *(long *)(piVar4 + 0x20) = *(long *)(piVar4 + 0x20) + 4;
          *(undefined4 *)(puVar19 + 1) = 0xfa1e0ff3;
          auVar33 = auVar7;
        }
      }
    }
    local_90 = auVar33._0_8_;
    compile_backtrackingpath(param_1,local_58._0_8_,auVar33._8_8_);
    if (*piVar4 != 0) goto LAB_0012ff3e;
    lVar15 = sljit_emit_label(piVar4);
    for (plVar31 = (long *)local_58._8_8_; plVar31 != (long *)0x0; plVar31 = (long *)plVar31[1]) {
      lVar5 = *plVar31;
      if ((lVar5 != 0) && (lVar15 != 0)) {
        *(long *)(lVar5 + 0x18) = lVar15;
        *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    lVar32 = lVar32 + 1;
    if (*puVar28 != 0x78) {
      lVar32 = sljit_emit_label(piVar4);
      copy_recurse_data_isra_0(param_1,puVar1,puVar21,1,iVar8,uVar29);
      sljit_emit_op1(piVar4,0x20,4,0,0x8c,lVar22);
      piVar30 = (int *)*param_1;
      if (*piVar30 == 0) {
        piVar30[0x26] = 0;
        iVar9 = emit_lea_binary(piVar30,0xc,0,0xc,0,0x7f,lVar25);
        if (iVar9 == 4) {
          emit_cum_binary(piVar30,0x5030100,0xc,0,0xc,0,0x7f,lVar25);
        }
      }
      sljit_emit_op1(piVar4,0x20,1,0,0x7f,0);
      sljit_emit_op_src_constprop_0_isra_0(piVar4,4);
      if (param_1[0x2a] != 0) {
        lVar25 = sljit_emit_label(piVar4);
        for (plVar31 = (long *)param_1[0x2a]; plVar31 != (long *)0x0; plVar31 = (long *)plVar31[1])
        {
          lVar15 = *plVar31;
          if ((lVar15 != 0) && (lVar25 != 0)) {
            *(long *)(lVar15 + 0x18) = lVar25;
            *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        sljit_emit_op1(piVar4,0x20,0xc,0,0x8e,(long)*(int *)(param_1 + 10));
        copy_recurse_data_isra_0(param_1,puVar1,puVar21,2,iVar8,uVar29);
        lVar25 = sljit_emit_jump(piVar4,0x24);
        if ((lVar32 != 0) && (lVar25 != 0)) {
          *(long *)(lVar25 + 0x18) = lVar32;
          *(ulong *)(lVar25 + 0x10) = *(ulong *)(lVar25 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      if (param_1[0x2e] != 0) {
        lVar25 = sljit_emit_label(piVar4);
        for (plVar31 = (long *)param_1[0x2e]; plVar31 != (long *)0x0; plVar31 = (long *)plVar31[1])
        {
          lVar32 = *plVar31;
          if ((lVar32 != 0) && (lVar25 != 0)) {
            *(long *)(lVar32 + 0x18) = lVar25;
            *(ulong *)(lVar32 + 0x10) = *(ulong *)(lVar32 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        sljit_emit_op1(piVar4,0x20,0xc,0,0x8e,(long)*(int *)(param_1 + 10));
        sljit_emit_op1(piVar4,0x20,4,0,0xc,0);
        uVar11 = *param_1;
        sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,0x10);
        uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
        piVar30 = (int *)*param_1;
        if ((*piVar30 == 0) &&
           (puVar13 = (undefined8 *)ensure_abuf(piVar30,0x18), puVar13 != (undefined8 *)0x0)) {
          *puVar13 = uVar11;
          uVar14 = sljit_emit_label(piVar30);
          uVar11 = param_1[0x26];
          puVar13[1] = uVar14;
          puVar13[2] = uVar11;
          param_1[0x26] = puVar13;
        }
        sljit_emit_op1(piVar4,0x20,0x8c,8,0x7f,0xffffffffffffffff);
      }
      lVar25 = sljit_emit_label(piVar4);
      for (; local_c8 != (long *)0x0; local_c8 = (long *)local_c8[1]) {
        lVar32 = *local_c8;
        if ((lVar32 != 0) && (lVar25 != 0)) {
          *(long *)(lVar32 + 0x18) = lVar25;
          *(ulong *)(lVar32 + 0x10) = *(ulong *)(lVar32 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      sljit_emit_op1(piVar4,0x20,0x8c,0,4,0);
      copy_recurse_data_isra_0(param_1,puVar1,puVar21,4,iVar8,uVar29);
      sljit_emit_op1(piVar4,0x20,4,0,0x84,lVar22);
      sljit_emit_op1(piVar4,0x20,1,0,0x7f,1);
      sljit_emit_op_src_constprop_0_isra_0(piVar4,4);
LAB_0012ff3e:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_48 = puVar28 + 2;
    puVar28 = puVar28 + puVar28[1];
  } while( true );
}



undefined4 jit_compile(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  ushort uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  ulong extraout_RDX_09;
  size_t __n;
  uint uVar19;
  undefined8 uVar20;
  uint **ppuVar21;
  short *psVar22;
  long in_FS_OFFSET;
  char cVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined4 local_2bc;
  long local_2b0;
  int local_29c;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  short *local_278;
  uint *local_268 [3];
  void *local_250;
  undefined8 *local_248;
  void *local_240;
  void *local_238;
  int local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_214;
  uint local_210;
  uint local_20c;
  int local_208;
  uint local_204;
  int local_200;
  long local_1f8;
  undefined8 local_1f0;
  int local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  int local_1bc;
  int local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  int local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  int local_194;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_188;
  long local_180;
  undefined8 *local_178;
  ulong local_170;
  ulong local_168;
  long local_160;
  long local_158;
  long lStack_150;
  long local_148;
  long local_140;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_40;
  
  puVar3 = param_1 + 0x11;
  lVar8 = param_1[3];
  uVar5 = *(ushort *)((long)param_1 + 0x84);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_298 = (undefined1  [16])0x0;
  local_288 = (undefined1  [16])0x0;
  ppuVar21 = local_268;
  for (lVar16 = 0x44; lVar16 != 0; lVar16 = lVar16 + -1) {
    *ppuVar21 = (uint *)0x0;
    ppuVar21 = ppuVar21 + 1;
  }
  local_278 = (short *)((long)puVar3 +
                       (long)(int)((uint)*(ushort *)((long)param_1 + 0x86) * (uint)uVar5) * 2);
  uVar19 = param_2 & 0xfffffeff;
  local_84 = param_2 >> 8 & 1;
  local_1d8 = lVar8 + 0x100;
  local_1c0 = 1;
  if (*(short *)((long)param_1 + 0x7e) != 0) {
    local_1c0 = *(uint *)(param_1 + 0xc) >> 0xd & 1;
  }
  local_1c4 = 1;
  if (*(short *)((long)param_1 + 0x7c) == 0) {
    local_1c4 = *(uint *)(param_1 + 0xc) >> 0xd & 1;
  }
  local_268[1] = (uint *)param_1;
  local_268[2] = (uint *)local_278;
  local_1d0 = lVar8;
  local_1c8 = uVar19;
  local_178 = puVar3;
  switch(*(undefined2 *)((long)param_1 + 0x7a)) {
  default:
    local_2bc = 0xffffffd4;
    goto LAB_001333a2;
  case 1:
    local_198 = 0xd;
    break;
  case 2:
    local_198 = 10;
    break;
  case 3:
    local_198 = 0xd0a;
    break;
  case 4:
    local_198 = 0xd0a;
    local_1a4 = 1;
    break;
  case 5:
    local_198 = 0xd0a;
    local_1a4 = 2;
    break;
  case 6:
    break;
  }
  uVar2 = *(uint *)(param_1 + 0xb);
  local_180 = lVar8 + 0x340;
  local_1a0 = 0x7fffffff;
  local_194 = (*(short *)(param_1 + 0xf) == 2) + 1;
  local_90 = uVar2 >> 9 & 1;
  local_188 = uVar2 >> 4 & 1;
  local_190 = 0x7fffffff;
  local_8c = uVar2 >> 0x15 & 1;
  local_80 = uVar2 >> 0x11 & 1;
  local_88 = (uint)((uVar2 & 0x80000) != 0);
  psVar22 = local_278;
  if ((uVar2 & 0x80000) == 0) {
    local_84 = 0;
  }
  else {
    if (local_1a4 == 1) {
      local_1a0 = 0x2029;
      local_19c = 10;
    }
    else if (local_1a4 == 2) {
      local_1a0 = 0xd;
      local_19c = 10;
    }
    else {
      local_1a0 = local_198 & 0xff;
      local_19c = 10;
      if (local_1a4 == 0) {
        local_19c = local_198 & 0xff;
      }
    }
    local_18c = 10;
    local_190 = 0xd;
    if (local_194 == 1) {
      local_190 = 0x2029;
    }
  }
  do {
    psVar22 = psVar22 + (ushort)psVar22[1];
  } while (*psVar22 == 0x78);
  psVar22 = psVar22 + 2;
  local_224 = 0x28;
  local_170 = (ulong)*(ushort *)((long)param_1 + 0x86);
  local_168 = (ulong)uVar5;
  local_240 = (void *)(*(code *)*param_1)((ulong)*(ushort *)(param_1 + 0x10) + 1,param_1[2]);
  if (local_240 == (void *)0x0) goto LAB_0013339a;
  memset(local_240,1,(ulong)*(ushort *)(param_1 + 0x10) + 1);
  iVar6 = check_opcode_types(local_268,local_268[2],psVar22);
  if (iVar6 == 0) {
LAB_001334a9:
    (*(code *)param_1[1])(local_240,param_1[2]);
  }
  else {
    if (uVar19 == 1) {
      uVar2 = local_224;
      if (((*(byte *)(param_1 + 0xc) & 0x80) != 0) && ((*(uint *)(param_1 + 0xb) & 0x10000) == 0)) {
        uVar2 = local_224 + 8;
        local_21c = local_224;
      }
    }
    else {
      local_214 = local_224;
      uVar2 = local_224 + 8;
      if (uVar19 == 2) {
        uVar2 = local_224 + 0x10;
        local_210 = local_224 + 8;
      }
    }
    local_224 = uVar2;
    uVar2 = local_224;
    if ((*(uint *)(param_1 + 0xb) & 0x800100) != 0) {
      uVar2 = local_224 + 8;
      local_20c = local_224;
    }
    local_224 = uVar2;
    uVar2 = local_224;
    if (local_204 != 0) {
      uVar2 = local_224 + 8;
      local_204 = local_224;
    }
    local_224 = uVar2;
    uVar2 = local_224;
    if (local_1bc != 0) {
      uVar2 = local_224 + 8;
      local_220 = local_224;
    }
    local_224 = uVar2;
    if ((local_224 & 8) != 0) {
      local_224 = local_224 + 8;
    }
    if (local_220 == 0) {
      local_220 = local_224;
    }
    if (local_200 != 0) {
      memset(local_240,0,(ulong)*(ushort *)(param_1 + 0x10) + 1);
    }
    __n = (long)psVar22 - (long)local_268[2] >> 1;
    local_228 = (*(ushort *)(param_1 + 0x10) + 1) * 0x10 + local_224;
    local_250 = (void *)(*(code *)*param_1)((5 - (ulong)(local_1b4 == 0)) * __n);
    if (local_250 == (void *)0x0) goto LAB_001334a9;
    memset(local_250,0,__n * 4);
    local_29c = local_228 + 8 + (uint)*(ushort *)(param_1 + 0x10) * 8;
    if ((-1 < (int)*(uint *)(param_1 + 0xb)) &&
       ((*(uint *)(param_1 + 0xb) & 0x10000) == 0 && local_1b0 == 0)) {
      detect_early_fail(local_268,local_268[2],&local_29c,0,0);
    }
    set_private_data_ptrs(local_268,&local_29c,psVar22);
    if (local_29c < 0x10001) {
      if (local_1b4 != 0) {
        local_238 = (void *)((long)local_250 + __n * 4);
        memset(local_238,0,__n);
        set_then_offsets(local_268,local_268[2],0);
      }
      puVar7 = (uint *)sljit_create_compiler_constprop_0(param_1);
      if (puVar7 == (uint *)0x0) {
        (*(code *)param_1[1])(local_240,param_1[2]);
        (*(code *)param_1[1])(local_250,param_1[2]);
      }
      else {
        local_268[0] = puVar7;
        sljit_emit_enter_constprop_0_isra_0(puVar7,local_29c);
        reset_ovector(local_268,*(ushort *)(param_1 + 0x10) + 2 + (uint)*(ushort *)(param_1 + 0x10))
        ;
        if (local_21c != 0) {
          sljit_emit_op1(puVar7,0x20,0x8e,(long)(int)local_21c,1,0);
        }
        sljit_emit_op1(puVar7,0x20,9,0,0xd,0);
        sljit_emit_op1(puVar7,0x20,1,0,0xd,0);
        sljit_emit_op1(puVar7,0x20,2,0,0x81,8);
        sljit_emit_op1(puVar7,0x20,0xd,0,0x81,0x18);
        sljit_emit_op1(puVar7,0x20,4,0,0x81,0);
        sljit_emit_op1(puVar7,0x25,1,0,0x81,0x50);
        sljit_emit_op1(puVar7,0x20,0xc,0,0x84,8);
        sljit_emit_op1(puVar7,0x20,0xb,0,0x84,0x10);
        sljit_emit_op2(puVar7,0x40,1,0,1,0,0x7f,1);
        sljit_emit_op1(puVar7,0x20,0x8e,0x20,1,0);
        if ((int)local_1f0 < local_1f0._4_4_) {
          reset_early_fail(local_268);
        }
        if (uVar19 == 2) {
          sljit_emit_op1(puVar7,0x20,0x8e,(long)(int)local_210,0x7f,0xffffffffffffffff);
        }
        if (local_208 != 0) {
          sljit_emit_op1(puVar7,0x20,0x8e,(long)local_208,0x7f,0);
        }
        if (local_204 != 0) {
          sljit_emit_op1(puVar7,0x20,0x8e,(long)(int)local_204,0x7f,0);
        }
        if (*(int *)(param_1 + 0xb) < 0) {
          lVar8 = sljit_emit_label(puVar7);
          local_2b0 = 0;
joined_r0x001329cd:
          lVar16 = 0;
          if (uVar19 == 1) goto LAB_001329d3;
        }
        else {
          local_2b0 = mainloop_entry(local_268);
          lVar8 = sljit_emit_label(puVar7);
          if ((*(byte *)((long)param_1 + 0x5a) & 1) != 0) goto joined_r0x001329cd;
          if ((uVar19 != 1) || (iVar6 = fast_forward_first_n_chars(local_268), iVar6 == 0)) {
            uVar2 = *(uint *)(param_1 + 0xc);
            if ((uVar2 & 0x10) == 0) {
              if ((uVar2 & 0x200) == 0) {
                if ((uVar2 & 0x40) != 0) {
                  fast_forward_start_bits(local_268);
                }
              }
              else {
                fast_forward_newline(local_268);
              }
            }
            else {
              uVar2 = *(uint *)((long)local_268[1] + 0x70);
              uVar17 = uVar2 & 0xffff;
              uVar5 = (ushort)uVar2;
              if ((*(byte *)((long)local_268[1] + 0x60) & 0x20) != 0) {
                uVar15 = uVar2;
                if (uVar5 < 0x100) {
                  bVar1 = *(byte *)(local_1d8 + (ulong)(uVar2 & 0xffff));
                  uVar17 = (uint)bVar1;
                  uVar15 = (uint)bVar1;
                  if (uVar5 < 0x80) goto LAB_001330b3;
                }
                uVar17 = uVar15 & 0xffff;
                if (local_88 != 0 || local_80 != 0) {
                  uVar17 = *(ushort *)
                            (&DAT_0013a01c +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_16 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_16 +
                                                       (ulong)(uVar5 >> 7) * 2) * 0x80 +
                                               (uVar2 & 0x7f)) * 2) * 0xc) + uVar2 & 0xffff;
                }
              }
LAB_001330b3:
              fast_forward_first_char2(local_268,uVar2 & 0xffff,uVar17,0);
            }
            goto joined_r0x001329cd;
          }
LAB_001329d3:
          lVar16 = 0;
          if ((*(short *)((long)param_1 + 0x7e) != 0) &&
             ((*(byte *)((long)param_1 + 0x5a) & 1) == 0)) {
            sljit_emit_op1(puVar7,0x20,1,0,0x7f,0xffffffffffffffff);
            sljit_emit_op2(puVar7,0x40,4,0,2,0,0x7f,(uint)*(ushort *)((long)param_1 + 0x7e) * 2);
            lVar16 = sljit_emit_cmp(puVar7,4,4,0,0xd,0);
          }
        }
        plVar13 = (long *)0x0;
        if (local_21c != 0) {
          plVar13 = (long *)search_requested_char
                                      (local_268,*(undefined2 *)((long)param_1 + 0x74),
                                       *(uint *)(param_1 + 0xc) >> 8 & 1,
                                       *(uint *)(param_1 + 0xc) >> 4 & 1);
        }
        sljit_emit_op1(puVar7,0x20,0x8e,(long)(int)local_224,2,0);
        sljit_emit_op1(puVar7,0x20,10,0,0x8e,0x20);
        if (local_200 != 0) {
          sljit_emit_op1(puVar7,0x20,0x8e,(long)local_200,0x7f,0);
        }
        if (local_1f8 != 0) {
          sljit_emit_op1(puVar7,0x20,0x8e,
                         (long)(*(int *)((long)local_250 +
                                        ((local_1f8 + 2) - (long)local_268[2] >> 1) * 4) >> 3),2,0);
        }
        if (local_220 != local_224) {
          sljit_emit_op1(puVar7,0x20,0x8e,(long)(int)local_220,2,0);
        }
        if (uVar19 == 2) {
          lVar10 = sljit_emit_cmp(puVar7,1,0x8e,(long)(int)local_210,0x7f,0xffffffffffffffff);
          sljit_emit_op1(puVar7,0x20,0x8e,(long)(int)local_214,2,0);
          lVar27 = sljit_emit_label(puVar7);
          if ((lVar10 != 0) && (lVar27 != 0)) {
            *(long *)(lVar10 + 0x18) = lVar27;
            *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        else if (uVar19 == 4) {
          sljit_emit_op1(puVar7,0x20,0x8e,(long)(int)local_214,2,0);
        }
        compile_matchingpath(local_268,local_268[2],psVar22,local_298);
        if (*puVar7 == 0) {
          lVar10 = 0;
          if ((*(byte *)((long)param_1 + 0x5b) & 0x20) != 0) {
            lVar10 = sljit_emit_cmp(puVar7,1,2,0,0xd,0);
          }
          uVar28 = 0;
          lVar27 = 0;
          if (local_1c0 != 0) {
            uVar28 = sljit_emit_cmp(puVar7,0,2,0,0x8e,(long)(int)local_224);
            lVar27 = sljit_emit_label(puVar7);
          }
          local_148 = sljit_emit_label(puVar7);
          if (local_f8 != (long *)0x0) {
            do {
              lVar9 = *local_f8;
              if ((lVar9 != 0) && (local_148 != 0)) {
                *(long *)(lVar9 + 0x18) = local_148;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
              local_f8 = (long *)local_f8[1];
            } while (local_f8 != (long *)0x0);
          }
          copy_ovector(local_268,*(ushort *)(param_1 + 0x10) + 1);
          local_158 = sljit_emit_label(puVar7);
          if (local_118 != (long *)0x0) {
            do {
              lVar9 = *local_118;
              if ((lVar9 != 0) && (local_158 != 0)) {
                *(long *)(lVar9 + 0x18) = local_158;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
              local_118 = (long *)local_118[1];
            } while (local_118 != (long *)0x0);
          }
          for (; local_108 != (long *)0x0; local_108 = (long *)local_108[1]) {
            lVar9 = *local_108;
            if ((lVar9 != 0) && (local_158 != 0)) {
              *(long *)(lVar9 + 0x18) = local_158;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          if ((lVar16 != 0) && (local_158 != 0)) {
            *(long *)(lVar16 + 0x18) = local_158;
            *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
          }
          lStack_150 = local_158;
          if (*puVar7 == 0) {
            puVar7[0x26] = 0;
            iVar6 = emit_stack_frame_release_constprop_0(puVar7);
            if (iVar6 == 0) {
              emit_byte(puVar7,0xc3);
            }
          }
          if (local_100 != (long *)0x0) {
            lVar16 = sljit_emit_label(puVar7);
            for (; local_100 != (long *)0x0; local_100 = (long *)local_100[1]) {
              lVar9 = *local_100;
              if ((lVar9 != 0) && (lVar16 != 0)) {
                *(long *)(lVar9 + 0x18) = lVar16;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op1(puVar7,0x20,1,0,0x7f,0xffffffffffffffff);
            lVar16 = lStack_150;
            lVar9 = sljit_emit_jump(puVar7,0x24);
            if ((lVar9 != 0) && (lVar16 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar16;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          if ((((*(byte *)((long)param_1 + 0x5b) & 0x20) != 0) &&
              (lVar16 = sljit_emit_label(puVar7), lVar16 != 0)) && (lVar10 != 0)) {
            *(long *)(lVar10 + 0x18) = lVar16;
            *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
          }
          if (uVar19 != 1) {
            local_160 = sljit_emit_label(puVar7);
            for (; local_120 != (long *)0x0; local_120 = (long *)local_120[1]) {
              lVar16 = *local_120;
              if ((lVar16 != 0) && (local_160 != 0)) {
                *(long *)(lVar16 + 0x18) = local_160;
                *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            return_with_partial_match(local_268,local_158);
          }
          lVar16 = 0;
          if (local_1c0 != 0) {
            lVar16 = sljit_emit_label(puVar7);
          }
          compile_backtrackingpath(local_268,local_288._0_8_);
          if (*puVar7 == 0) {
            lVar10 = sljit_emit_label();
            if (uVar19 == 2) {
              lVar9 = sljit_emit_cmp(puVar7,1,0x8e,(long)(int)local_210,0x7f,0);
              sljit_emit_op1(puVar7,0x20,1,0,0x8e,(long)(int)local_220);
              sljit_emit_op1(puVar7,0x20,0x8e,(long)(int)local_214,0x7f,0xffffffffffffffff);
              sljit_emit_op1(puVar7,0x20,0x8e,(long)(int)local_210,1,0);
              lVar11 = sljit_emit_label(puVar7);
              if ((lVar9 != 0) && (lVar11 != 0)) {
                *(long *)(lVar9 + 0x18) = lVar11;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            if ((-1 < *(int *)(param_1 + 0xb)) && (local_20c != 0)) {
              sljit_emit_op1(puVar7,0x20,1,0,0x8e);
            }
            uVar2 = local_220;
            if (local_1f8 != 0) {
              uVar2 = *(int *)((long)local_250 + ((local_1f8 + 2) - (long)local_268[2] >> 1) * 4) >>
                      3;
            }
            sljit_emit_op1(puVar7,0x20,2,0,0x8e,(long)(int)uVar2);
            if (-1 < (int)*(uint *)(param_1 + 0xb)) {
              if (local_140 == 0) {
                lVar9 = sljit_emit_cmp(puVar7,2,2,0,(-(local_20c == 0) & 0xcU) + 1,0);
                if ((local_2b0 != 0) && (lVar9 != 0)) {
                  *(long *)(lVar9 + 0x18) = local_2b0;
                  *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              else if ((*(uint *)(param_1 + 0xb) & 0x100) == 0) {
                if (local_20c == 0) {
                  lVar9 = sljit_emit_cmp(puVar7,2,2,0,0xd,0);
                  if (lVar9 != 0) {
                    *(long *)(lVar9 + 0x18) = local_140;
                    *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
                  }
                }
                else {
                  sljit_emit_op1(puVar7,0x20,3);
                  sljit_emit_op1(puVar7,0x20,0xd,0,1,0);
                  lVar9 = sljit_emit_cmp(puVar7,2,2,0,1,0);
                  if ((local_140 != 0) && (lVar9 != 0)) {
                    *(long *)(lVar9 + 0x18) = local_140;
                    *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
                  }
                  sljit_emit_op1(puVar7,0x20,0xd,0,3,0);
                }
              }
            }
            if (plVar13 != (long *)0x0) {
              lVar9 = sljit_emit_label(puVar7);
              do {
                lVar11 = *plVar13;
                if ((lVar11 != 0) && (lVar9 != 0)) {
                  *(long *)(lVar11 + 0x18) = lVar9;
                  *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
                }
                plVar13 = (long *)plVar13[1];
              } while (plVar13 != (long *)0x0);
            }
            lVar9 = local_160;
            if (((uVar19 == 2) &&
                (lVar11 = sljit_emit_cmp(puVar7,1,0x8e,(long)(int)local_210,0x7f,0xffffffffffffffff)
                , lVar11 != 0)) && (lVar9 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar9;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            sljit_emit_op1(puVar7,0x20,1,0,0x7f,0xffffffffffffffff);
            lVar9 = local_158;
            lVar11 = sljit_emit_jump(puVar7,0x24);
            if ((lVar11 != 0) && (lVar9 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar9;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            flush_stubs(local_268);
            if (local_1c0 != 0) {
              lVar9 = sljit_emit_label(puVar7);
              uVar18 = uVar28;
              if ((lVar9 != 0) && (uVar28 != 0)) {
                uVar18 = *(ulong *)(uVar28 + 0x10);
                *(long *)(uVar28 + 0x18) = lVar9;
                *(ulong *)(uVar28 + 0x10) = uVar18 & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op1(puVar7,0x20,1,0,9,0,lVar8,lVar27,uVar18);
              sljit_emit_op1(puVar7,0x25,4,0,0x81,0x58);
              if (*puVar7 == 0) {
                puVar7[0x26] = 0;
                puVar12 = (undefined1 *)emit_x86_instruction(puVar7,1,0x7f,4,4,0);
                if (puVar12 != (undefined1 *)0x0) {
                  *puVar12 = 0xf7;
                }
              }
              lVar9 = sljit_emit_jump(puVar7,1);
              if ((lVar9 != 0) && (lVar16 != 0)) {
                *(long *)(lVar9 + 0x18) = lVar16;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
              if (*puVar7 == 0) {
                puVar7[0x26] = 0;
                puVar12 = (undefined1 *)emit_x86_instruction(puVar7,1,0x7f,8,4,0);
                if (puVar12 != (undefined1 *)0x0) {
                  *puVar12 = 0xf7;
                }
              }
              lVar9 = sljit_emit_jump(puVar7,0);
              bVar24 = lVar27 != 0;
              if ((lVar9 != 0) && (bVar24)) {
                *(long *)(lVar9 + 0x18) = lVar27;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op1(puVar7,0x20,4,0,0x81,8);
              lVar9 = sljit_emit_cmp(puVar7,1,4,0,2,0);
              if ((lVar9 != 0) && (bVar24)) {
                *(long *)(lVar9 + 0x18) = lVar27;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar27 = sljit_emit_jump(puVar7,0x24);
              if ((lVar27 != 0) && (lVar16 != 0)) {
                *(long *)(lVar27 + 0x18) = lVar16;
                *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            lVar16 = local_158;
            local_1f8 = 0;
            local_1f0 = 0;
            local_128 = local_130;
            local_1ac = 1;
            if (local_130 != (long *)0x0) {
              iVar6 = local_29c + 7;
              if (-1 < local_29c) {
                iVar6 = local_29c;
              }
              local_1e8 = (iVar6 >> 3) + 7 >> 3;
              local_1e0 = (*(code *)*param_1)((long)local_1e8,param_1[2]);
              if (local_1e0 != 0) {
                do {
                  compile_recurse(local_268);
                  if (*puVar7 != 0) break;
                  flush_stubs(local_268);
                  local_128 = (long *)*local_128;
                } while (local_128 != (long *)0x0);
                (*(code *)param_1[1])(local_1e0,param_1[2]);
              }
              if (local_128 != (long *)0x0) {
                sljit_free_compiler(puVar7);
                (*(code *)param_1[1])(local_240,param_1[2]);
                (*(code *)param_1[1])(local_250,param_1[2]);
                while (local_248 != (undefined8 *)0x0) {
                  puVar3 = (undefined8 *)*local_248;
                  (*(code *)param_1[1])(local_248,param_1[2]);
                  local_248 = puVar3;
                }
                goto LAB_0013339a;
              }
            }
            local_1ac = 0;
            local_158 = lVar16;
            lVar16 = sljit_emit_label(puVar7);
            for (; local_e8 != (long *)0x0; local_e8 = (long *)local_e8[1]) {
              lVar27 = *local_e8;
              if ((lVar27 != 0) && (lVar16 != 0)) {
                *(long *)(lVar27 + 0x18) = lVar16;
                *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            if (*puVar7 == 0) {
              puVar7[0x26] = 1;
              puVar12 = (undefined1 *)emit_x86_instruction(puVar7,1,0,0,0x8e,0);
              if (puVar12 != (undefined1 *)0x0) {
                *puVar12 = 0x8f;
              }
            }
            sljit_emit_op1(puVar7,0x20,0x8e,8,2,0);
            sljit_emit_op1(puVar7,0x20,1,0,9,0);
            uVar28 = 0x2000;
            sljit_emit_op2(puVar7,0x42,2,0,0xb,0,0x7f,0x2000);
            sljit_emit_op1(puVar7,0x20,1,0,0x81,0);
            sljit_emit_op1(puVar7,0x20,0xb,0,4,0);
            sljit_emit_icall_constprop_0_isra_0(puVar7,0x111,sljit_stack_resize);
            lVar16 = sljit_emit_cmp(puVar7,0,1,0,0x7f,0);
            sljit_emit_op1(puVar7,0x20,4,0,0xb,0);
            sljit_emit_op1(puVar7,0x20,0xb,0,1,0);
            sljit_emit_op1(puVar7,0x20,1,0,0x8e,0);
            sljit_emit_op1(puVar7,0x20,2,0,0x8e,8);
            sljit_emit_op_src_constprop_0_isra_0(puVar7,1);
            lVar27 = sljit_emit_label(puVar7);
            if ((lVar27 != 0) && (lVar16 != 0)) {
              *(long *)(lVar16 + 0x18) = lVar27;
              *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
            }
            sljit_emit_op1(puVar7,0x20,1,0,0x7f,0xffffffffffffffd2);
            lVar16 = local_158;
            lVar27 = sljit_emit_jump(puVar7,0x24);
            if ((lVar16 != 0) && (lVar27 != 0)) {
              *(long *)(lVar27 + 0x18) = lVar16;
              *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar16 = sljit_emit_label(puVar7);
            for (; local_f0 != (long *)0x0; local_f0 = (long *)local_f0[1]) {
              lVar27 = *local_f0;
              if ((lVar27 != 0) && (lVar16 != 0)) {
                *(long *)(lVar27 + 0x18) = lVar16;
                *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op1(puVar7,0x20,1,0,0x7f,0xffffffffffffffd1);
            lVar16 = local_158;
            auVar25 = sljit_emit_jump(puVar7,0x24);
            uVar18 = auVar25._8_8_;
            lVar27 = auVar25._0_8_;
            if ((lVar16 != 0) && (lVar27 != 0)) {
              *(long *)(lVar27 + 0x18) = lVar16;
              uVar18 = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
              *(ulong *)(lVar27 + 0x10) = uVar18;
            }
            if (local_e0 != (long *)0x0) {
              lVar16 = sljit_emit_label(puVar7);
              puVar4 = local_268[0];
              for (; local_e0 != (long *)0x0; local_e0 = (long *)local_e0[1]) {
                lVar27 = *local_e0;
                if ((lVar27 != 0) && (lVar16 != 0)) {
                  *(long *)(lVar27 + 0x18) = lVar16;
                  *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              sljit_emit_op_dst_constprop_0_isra_0(local_268[0],5);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                puVar12 = (undefined1 *)emit_x86_instruction(puVar4,1,0xe,0,1,0);
                if (puVar12 != (undefined1 *)0x0) {
                  *puVar12 = 0x89;
                }
              }
              lVar16 = sljit_emit_label(puVar4);
              sljit_emit_op1(puVar4,0x20,4,0,0x8c,0xfffffffffffffff8);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                lVar27 = emit_x86_instruction(puVar4,0x11,0x7f,0,4,0);
                if (lVar27 != 0) {
                  *(byte *)(lVar27 + 1) = *(byte *)(lVar27 + 1) | 0x38;
                }
              }
              lVar27 = sljit_emit_jump(puVar4,9);
              sljit_emit_op2(puVar4,0x40,4,0,4,0,1,0);
              sljit_emit_op1(puVar4,0x20,1,0,0x8c,0xfffffffffffffff0);
              sljit_emit_op1(puVar4,0x20,3,0,0x8c,0xffffffffffffffe8);
              sljit_emit_op2(puVar4,0x42,0xc,0,0xc,0,0x7f,0x18);
              sljit_emit_op1(puVar4,0x20,0x84,0,1,0);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                puVar12 = (undefined1 *)emit_x86_instruction(puVar4,1,0xe,0,1,0);
                if (puVar12 != (undefined1 *)0x0) {
                  *puVar12 = 0x89;
                }
              }
              sljit_emit_op1(puVar4,0x20,0x84,8,3,0);
              lVar9 = sljit_emit_jump(puVar4,0x24);
              cVar23 = lVar16 != 0;
              if ((lVar9 != 0) && ((bool)cVar23)) {
                *(long *)(lVar9 + 0x18) = lVar16;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar9 = sljit_emit_label(puVar4);
              if ((lVar9 != 0) && (lVar27 != 0)) {
                *(long *)(lVar27 + 0x18) = lVar9;
                *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar27 = sljit_emit_jump(puVar4,1);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              lVar9 = sljit_emit_label(puVar4);
              if ((lVar9 != 0) && (lVar27 != 0)) {
                *(long *)(lVar27 + 0x18) = lVar9;
                *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op2(puVar4,0x42,4,0,0x7f,0,4,0);
              sljit_emit_op2(puVar4,0x40,4,0,4,0,1,0);
              sljit_emit_op1(puVar4,0x20,3,0,0x8c,0xfffffffffffffff0);
              uVar18 = 0x7f;
              sljit_emit_op2(puVar4,0x42,0xc,0,0xc,0,0x7f,0x10);
              sljit_emit_op1(puVar4,0x20,0x84,0,3,0);
              lVar27 = sljit_emit_jump(puVar4,0x24);
              if ((lVar27 != 0) && (cVar23 != '\0')) {
                *(long *)(lVar27 + 0x18) = lVar16;
                uVar18 = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                *(ulong *)(lVar27 + 0x10) = uVar18;
              }
            }
            if (local_d8 != (long *)0x0) {
              lVar16 = sljit_emit_label(puVar7);
              for (; local_d8 != (long *)0x0; local_d8 = (long *)local_d8[1]) {
                lVar27 = *local_d8;
                if ((lVar27 != 0) && (lVar16 != 0)) {
                  *(long *)(lVar27 + 0x18) = lVar16;
                  *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              check_wordboundary(local_268,0);
              uVar18 = extraout_RDX;
            }
            if (local_d0 != (long *)0x0) {
              lVar16 = sljit_emit_label(puVar7);
              for (; local_d0 != (long *)0x0; local_d0 = (long *)local_d0[1]) {
                lVar27 = *local_d0;
                if ((lVar27 != 0) && (lVar16 != 0)) {
                  *(long *)(lVar27 + 0x18) = lVar16;
                  *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              check_wordboundary(local_268,1);
              uVar18 = extraout_RDX_00;
            }
            if (local_c8 != (long *)0x0) {
              lVar16 = sljit_emit_label(puVar7);
              for (; local_c8 != (long *)0x0; local_c8 = (long *)local_c8[1]) {
                lVar27 = *local_c8;
                if ((lVar27 != 0) && (lVar16 != 0)) {
                  *(long *)(lVar27 + 0x18) = lVar16;
                  *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              check_anynewline_isra_0(local_268[0]);
              uVar18 = extraout_RDX_01;
            }
            if (local_c0 != (long *)0x0) {
              lVar16 = sljit_emit_label(puVar7);
              puVar4 = local_268[0];
              for (; local_c0 != (long *)0x0; local_c0 = (long *)local_c0[1]) {
                lVar27 = *local_c0;
                if ((lVar27 != 0) && (lVar16 != 0)) {
                  *(long *)(lVar27 + 0x18) = lVar16;
                  *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              sljit_emit_op_dst_constprop_0_isra_0(local_268[0],5);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                lVar16 = emit_x86_instruction(puVar4,0x11,0x7f,9,1,0);
                if (lVar16 != 0) {
                  *(byte *)(lVar16 + 1) = *(byte *)(lVar16 + 1) | 0x38;
                }
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x20,4,0);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                lVar16 = emit_x86_instruction(puVar4,0x11,0x7f,0x20,1,0);
                if (lVar16 != 0) {
                  *(byte *)(lVar16 + 1) = *(byte *)(lVar16 + 1) | 0x38;
                }
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x46,4,0);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_cmp_binary(puVar4,1,0,0x7f,0xa0);
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x46,4,0);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_cmp_binary(puVar4,1,0,0x7f,0x1680);
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x46,4,0);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_cmp_binary(puVar4,1,0,0x7f,0x180e);
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x46,4,0);
              uVar28 = 0x7f;
              sljit_emit_op2(puVar4,0x42,1,0,1,0,0x7f,0x2000);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                lVar16 = emit_x86_instruction(puVar4,0x11,0x7f,10,1,0);
                if (lVar16 != 0) {
                  *(byte *)(lVar16 + 1) = *(byte *)(lVar16 + 1) | 0x38;
                }
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x46,4);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                lVar16 = emit_x86_instruction(puVar4,0x11,0x7f,0x2f,1,0);
                if (lVar16 != 0) {
                  *(byte *)(lVar16 + 1) = *(byte *)(lVar16 + 1) | 0x38;
                }
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x46,4);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                lVar16 = emit_x86_instruction(puVar4,0x11,0x7f,0x5f,1,0);
                if (lVar16 != 0) {
                  *(byte *)(lVar16 + 1) = *(byte *)(lVar16 + 1) | 0x38;
                }
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x46,4);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_cmp_binary(puVar4,1,0,0x7f,0x1000);
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x246,4);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              uVar18 = extraout_RDX_02;
            }
            if (local_b8 != (long *)0x0) {
              lVar16 = sljit_emit_label(puVar7);
              for (; local_b8 != (long *)0x0; local_b8 = (long *)local_b8[1]) {
                lVar27 = *local_b8;
                if ((lVar27 != 0) && (lVar16 != 0)) {
                  *(long *)(lVar27 + 0x18) = lVar16;
                  *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              check_anynewline_isra_0(local_268[0]);
              uVar18 = extraout_RDX_03;
            }
            if (local_b0 != (long *)0x0) {
              lVar16 = sljit_emit_label(puVar7);
              for (; local_b0 != (long *)0x0; local_b0 = (long *)local_b0[1]) {
                lVar27 = *local_b0;
                if ((lVar27 != 0) && (lVar16 != 0)) {
                  *(long *)(lVar27 + 0x18) = lVar16;
                  *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              do_casefulcmp_isra_0(local_268[0]);
              uVar18 = extraout_RDX_04;
            }
            if (local_a8 != (long *)0x0) {
              lVar16 = sljit_emit_label(puVar7);
              for (; local_a8 != (long *)0x0; local_a8 = (long *)local_a8[1]) {
                lVar27 = *local_a8;
                if ((lVar27 != 0) && (lVar16 != 0)) {
                  *(long *)(lVar27 + 0x18) = lVar16;
                  *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              do_caselesscmp(local_268);
              uVar18 = extraout_RDX_05;
            }
            if (local_a0 == (long *)0x0) {
              if (local_98 != (long *)0x0) goto LAB_00132fb9;
            }
            else {
              if (local_98 != (long *)0x0) {
LAB_00132fb9:
                lVar16 = sljit_emit_label(puVar7);
                for (; local_98 != (long *)0x0; local_98 = (long *)local_98[1]) {
                  lVar27 = *local_98;
                  if ((lVar27 != 0) && (lVar16 != 0)) {
                    *(long *)(lVar27 + 0x18) = lVar16;
                    *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                  }
                }
                sljit_emit_op1(puVar7,0x20,2,0,0x8e,(long)(int)local_220);
              }
              lVar16 = sljit_emit_label(puVar7);
              for (; local_a0 != (long *)0x0; local_a0 = (long *)local_a0[1]) {
                lVar27 = *local_a0;
                if ((lVar27 != 0) && (lVar16 != 0)) {
                  *(long *)(lVar27 + 0x18) = lVar16;
                  *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              do_reset_match(local_268,
                             *(ushort *)(param_1 + 0x10) + 2 + (uint)*(ushort *)(param_1 + 0x10));
              lVar16 = sljit_emit_cmp(puVar7,4,2,0,1,0);
              if ((lVar16 != 0) && (lVar8 != 0)) {
                *(long *)(lVar16 + 0x18) = lVar8;
                *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op1(puVar7,0x20,2,0,1,0);
              auVar25 = sljit_emit_jump(puVar7,0x24);
              uVar18 = auVar25._8_8_;
              lVar8 = auVar25._0_8_;
              if ((lVar10 != 0) && (lVar8 != 0)) {
                *(long *)(lVar8 + 0x18) = lVar10;
                uVar18 = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
                *(ulong *)(lVar8 + 0x10) = uVar18;
              }
            }
            if (local_68 != (long *)0x0) {
              lVar8 = sljit_emit_label(puVar7);
              puVar4 = local_268[0];
              for (; local_68 != (long *)0x0; local_68 = (long *)local_68[1]) {
                lVar16 = *local_68;
                if ((lVar16 != 0) && (lVar8 != 0)) {
                  *(long *)(lVar16 + 0x18) = lVar8;
                  *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              sljit_emit_op_dst_constprop_0_isra_0(local_268[0],5);
              lVar8 = sljit_emit_cmp(puVar4,3,1,0,0x7f,0xdc00);
              lVar16 = sljit_emit_cmp(puVar4,3,2,0,0xd,0);
              sljit_emit_op1(puVar4,0x23,1,0,0x82,0);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_shift_with_flags(puVar4,0x20,0,4,0,4,0,0x7f,10);
              }
              sljit_emit_op2(puVar4,0x40,2,0,2,0,0x7f,2);
              sljit_emit_op2(puVar4,0x42,1,0,1,0,0x7f,0xdc00);
              sljit_emit_op2(puVar4,0x40,4,0,4,0,0x7f,0x10000);
              lVar10 = sljit_emit_cmp(puVar4,3,1,0,0x7f,0x400);
              sljit_emit_op2(puVar4,0x40,1,0,1,0,4,0);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              lVar27 = sljit_emit_label(puVar4);
              if ((lVar8 != 0) && (lVar27 != 0)) {
                *(long *)(lVar8 + 0x18) = lVar27;
                *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar8 = sljit_emit_label(puVar4);
              if ((lVar8 != 0) && (lVar16 != 0)) {
                *(long *)(lVar16 + 0x18) = lVar8;
                *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar8 = sljit_emit_label(puVar4);
              if ((lVar8 != 0) && (lVar10 != 0)) {
                *(long *)(lVar10 + 0x18) = lVar8;
                *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op1(puVar4,0x20,1,0,0x7f,0xffffffffffffffff);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              uVar18 = extraout_RDX_06;
            }
            if (local_60 != (long *)0x0) {
              lVar8 = sljit_emit_label(puVar7);
              puVar4 = local_268[0];
              for (; local_60 != (long *)0x0; local_60 = (long *)local_60[1]) {
                lVar16 = *local_60;
                if ((lVar16 != 0) && (lVar8 != 0)) {
                  *(long *)(lVar16 + 0x18) = lVar8;
                  *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              sljit_emit_op_dst_constprop_0_isra_0(local_268[0],5);
              lVar8 = sljit_emit_cmp(puVar4,3,2,0,0xd,0);
              sljit_emit_op1(puVar4,0x23,4,0,0x82,0);
              lVar16 = sljit_emit_cmp(puVar4,3,1,0,0x7f,0xdc00);
              sljit_emit_op2(puVar4,0x42,4,0,4,0,0x7f,0xdc00);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_cmp_binary(puVar4,4,0,0x7f,0x400);
              }
              sljit_emit_op_flags_constprop_0_isra_0(puVar4,0x20,4);
              sljit_emit_op1(puVar4,0x20,1,0,0x7f,0x10000);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_shift_with_flags(puVar4,0x20,0,4,0,4,0,0x7f,1);
              }
              sljit_emit_op2(puVar4,0x40,2,0,2,0,4,0);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              lVar10 = sljit_emit_label(puVar4);
              if ((lVar8 != 0) && (lVar10 != 0)) {
                *(long *)(lVar8 + 0x18) = lVar10;
                *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar8 = sljit_emit_label(puVar4);
              if ((lVar8 != 0) && (lVar16 != 0)) {
                *(long *)(lVar16 + 0x18) = lVar8;
                *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op1(puVar4,0x20,1,0,0x7f,0xffffffffffffffff);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              uVar18 = extraout_RDX_07;
            }
            if (local_58 != (long *)0x0) {
              lVar8 = sljit_emit_label(puVar7);
              puVar4 = local_268[0];
              for (; local_58 != (long *)0x0; local_58 = (long *)local_58[1]) {
                lVar16 = *local_58;
                if ((lVar16 != 0) && (lVar8 != 0)) {
                  *(long *)(lVar16 + 0x18) = lVar8;
                  *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              sljit_emit_op_dst_constprop_0_isra_0(local_268[0],5);
              lVar8 = sljit_emit_cmp(puVar4,2,1,0,0x7f,0x400);
              lVar16 = sljit_emit_cmp(puVar4,3,4,0,2,0);
              sljit_emit_op1(puVar4,0x23,1,0,0x82,0xfffffffffffffffe);
              sljit_emit_op2(puVar4,0x42,1,0,1,0,0x7f,0xd800);
              lVar10 = sljit_emit_cmp(puVar4,3,1,0,0x7f,0x400);
              sljit_emit_op2(puVar4,0x42,2,0,2,0,0x7f,2);
              sljit_emit_op1(puVar4,0x20,1,0,0x7f,1);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              lVar27 = sljit_emit_label(puVar4);
              if ((lVar27 != 0) && (lVar8 != 0)) {
                *(long *)(lVar8 + 0x18) = lVar27;
                *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar8 = sljit_emit_label(puVar4);
              if ((lVar8 != 0) && (lVar16 != 0)) {
                *(long *)(lVar16 + 0x18) = lVar8;
                *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar8 = sljit_emit_label(puVar4);
              if ((lVar8 != 0) && (lVar10 != 0)) {
                *(long *)(lVar10 + 0x18) = lVar8;
                *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
              }
              uVar28 = 2;
              sljit_emit_op2(puVar4,0x40,2,0,2,0,0x7f,2);
              sljit_emit_op1(puVar4,0x20,1,0,0x7f,0);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              uVar18 = extraout_RDX_08;
            }
            if (local_50 != (long *)0x0) {
              lVar8 = sljit_emit_label(puVar7);
              puVar4 = local_268[0];
              for (; local_50 != (long *)0x0; local_50 = (long *)local_50[1]) {
                lVar16 = *local_50;
                if ((lVar16 != 0) && (lVar8 != 0)) {
                  *(long *)(lVar16 + 0x18) = lVar8;
                  *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              sljit_emit_op_dst_constprop_0_isra_0(local_268[0],5);
              lVar8 = sljit_emit_cmp(puVar4,3,1,0,0x7f,0xe000);
              sljit_emit_op2(puVar4,0x40,4,0,4,0,0x7f,2);
              lVar16 = sljit_emit_cmp(puVar4,2,1,0,0x7f,0xdc00);
              lVar10 = sljit_emit_cmp(puVar4,3,4,0,2,0);
              sljit_emit_op1(puVar4,0x23,4,0,0x82,0xfffffffffffffffc);
              sljit_emit_op2(puVar4,0x40,1,0,1,0,0x7f,0x2400);
              sljit_emit_op2(puVar4,0x42,4,0,4,0,0x7f,0xd800);
              uVar18 = sljit_emit_cmp(puVar4,3,4,0,0x7f,0x400);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_shift_with_flags(puVar4,0x20,0,4,0,4,0,0x7f,10);
              }
              sljit_emit_op2(puVar4,0x40,1,0,1,0,4,0);
              lVar27 = sljit_emit_label(puVar4);
              if ((lVar27 != 0) && (lVar8 != 0)) {
                *(long *)(lVar8 + 0x18) = lVar27;
                *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              lVar8 = sljit_emit_label(puVar4);
              if ((lVar8 != 0) && (lVar16 != 0)) {
                *(long *)(lVar16 + 0x18) = lVar8;
                *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar8 = sljit_emit_label(puVar4);
              if ((lVar8 != 0) && (lVar10 != 0)) {
                *(long *)(lVar10 + 0x18) = lVar8;
                *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
              }
              lVar8 = sljit_emit_label(puVar4);
              uVar26 = uVar18;
              if ((lVar8 != 0) && (uVar18 != 0)) {
                uVar26 = *(ulong *)(uVar18 + 0x10);
                *(long *)(uVar18 + 0x18) = lVar8;
                *(ulong *)(uVar18 + 0x10) = uVar26 & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op1(puVar4,0x20,1,0,0x7f,0xffffffffffffffff,uVar26);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
              uVar18 = extraout_RDX_09;
            }
            if (local_78 != (long *)0x0) {
              lVar8 = sljit_emit_label(puVar7);
              puVar4 = local_268[0];
              for (; local_78 != (long *)0x0; local_78 = (long *)local_78[1]) {
                lVar16 = *local_78;
                if ((lVar16 != 0) && (lVar8 != 0)) {
                  *(long *)(lVar16 + 0x18) = lVar8;
                  *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              sljit_emit_op_dst_constprop_0_isra_0(local_268[0],5);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_shift_with_flags(puVar4,0x28,0,4,0,1,0,0x7f,7);
                if (*puVar4 == 0) {
                  puVar4[0x26] = 0;
                  emit_shift_with_flags(puVar4,0x20,0,4,0,4,0,0x7f,1);
                }
              }
              sljit_emit_op1(puVar4,0x23,4,0,0x84,&_pcre2_ucd_stage1_16);
              uVar28 = (ulong)*puVar4;
              if (*puVar4 == 0) {
                uVar20 = 0x25232120;
                puVar4[0x26] = 0;
                emit_cum_binary(puVar4,0x25232120,1,0,1,0,0x7f,0x7f);
                if (*puVar4 == 0) {
                  puVar4[0x26] = 0;
                  emit_shift_with_flags(puVar4,0x20,0,4,0,4,0,0x7f,7,uVar20);
                }
              }
              uVar18 = 0;
              sljit_emit_op2(puVar4,0x40,1,0,1,0,4);
              sljit_emit_op1(puVar4,0x20,4,0,0x7f,&_pcre2_ucd_stage2_16);
              sljit_emit_op1(puVar4,0x23,4,0,0x184,1);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
            }
            if (local_70 != (long *)0x0) {
              lVar8 = sljit_emit_label(puVar7);
              puVar4 = local_268[0];
              for (; local_70 != (long *)0x0; local_70 = (long *)local_70[1]) {
                lVar16 = *local_70;
                if ((lVar16 != 0) && (lVar8 != 0)) {
                  *(long *)(lVar16 + 0x18) = lVar8;
                  *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              sljit_emit_op_dst_constprop_0_isra_0(local_268[0],5);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_shift_with_flags(puVar4,0x28,0,4,0,1,0,0x7f,7);
                if (*puVar4 == 0) {
                  puVar4[0x26] = 0;
                  emit_shift_with_flags(puVar4,0x20,0,4,0,4,0,0x7f,1);
                }
              }
              sljit_emit_op1(puVar4,0x23,4,0,0x84);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_cum_binary(puVar4,0x25232120,1,0,1,0,0x7f,0x7f);
                if (*puVar4 == 0) {
                  puVar4[0x26] = 0;
                  emit_shift_with_flags(puVar4,0x20,0,4,0,4,0,0x7f,7,uVar28);
                }
              }
              sljit_emit_op2(puVar4,0x40,1,0,1,0,4,0);
              sljit_emit_op1(puVar4,0x20,4,0,0x7f,&_pcre2_ucd_stage2_16);
              sljit_emit_op1(puVar4,0x23,4,0,0x184,1);
              uVar20 = 0x20;
              sljit_emit_op1(puVar4,0x20,1,0,0x7f,&DAT_0013a019);
              if (*puVar4 == 0) {
                puVar4[0x26] = 0;
                emit_shift_with_flags(puVar4,0x20,0,4,0,4,0,0x7f,2,uVar20);
              }
              uVar18 = 0;
              sljit_emit_op2(puVar4,0x40,1,0,1,0,4);
              sljit_emit_op1(puVar4,0x21,1,0,0x481,1);
              sljit_emit_op_src_constprop_0_isra_0(puVar4,5);
            }
            (*(code *)param_1[1])(local_240,param_1[2],uVar18);
            (*(code *)param_1[1])(local_250,param_1[2]);
            lVar16 = sljit_generate_code(puVar7);
            lVar8 = *(long *)(puVar7 + 0x24);
            sljit_free_compiler(puVar7);
            if (lVar16 != 0) {
              pauVar14 = (undefined1 (*) [16])param_1[4];
              if (pauVar14 == (undefined1 (*) [16])0x0) {
                pauVar14 = (undefined1 (*) [16])(*(code *)*param_1)(0x50,param_1[2]);
                if (pauVar14 == (undefined1 (*) [16])0x0) {
                  sljit_free_exec(lVar16);
                  while (local_248 != (undefined8 *)0x0) {
                    puVar3 = (undefined8 *)*local_248;
                    (*(code *)param_1[1])(local_248,param_1[2]);
                    local_248 = puVar3;
                  }
                  goto LAB_0013339a;
                }
                pauVar14[4] = (undefined1  [16])0x0;
                *pauVar14 = (undefined1  [16])0x0;
                pauVar14[1] = (undefined1  [16])0x0;
                pauVar14[2] = (undefined1  [16])0x0;
                pauVar14[3] = (undefined1  [16])0x0;
                *(ulong *)(pauVar14[4] + 8) =
                     CONCAT44(*(undefined4 *)(param_1 + 0xd),*(ushort *)(param_1 + 0x10) + 1);
                param_1[4] = pauVar14;
              }
              uVar28 = 0;
              if (uVar19 != 1) {
                uVar28 = (ulong)((uVar19 != 2) + 1);
              }
              plVar13 = (long *)(*pauVar14 + uVar28 * 8);
              *plVar13 = lVar16;
              plVar13[3] = (long)local_248;
              plVar13[6] = lVar8;
              local_2bc = 0;
              goto LAB_001333a2;
            }
            while (local_248 != (undefined8 *)0x0) {
              puVar3 = (undefined8 *)*local_248;
              (*(code *)param_1[1])(local_248,param_1[2]);
              local_248 = puVar3;
            }
          }
          else {
            sljit_free_compiler(puVar7);
            (*(code *)param_1[1])(local_240,param_1[2]);
            (*(code *)param_1[1])(local_250,param_1[2]);
            while (local_248 != (undefined8 *)0x0) {
              puVar3 = (undefined8 *)*local_248;
              (*(code *)param_1[1])(local_248,param_1[2]);
              local_248 = puVar3;
            }
          }
        }
        else {
          sljit_free_compiler(puVar7);
          (*(code *)param_1[1])(local_240,param_1[2]);
          (*(code *)param_1[1])(local_250,param_1[2]);
          while (local_248 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)*local_248;
            (*(code *)param_1[1])(local_248,param_1[2]);
            local_248 = puVar3;
          }
        }
      }
    }
    else {
      (*(code *)param_1[1])(local_250,param_1[2]);
      (*(code *)param_1[1])(local_240,param_1[2]);
    }
  }
LAB_0013339a:
  local_2bc = 0xffffffd0;
LAB_001333a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_2bc;
}



undefined8 pcre2_jit_compile_16(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0xffffffcd;
  }
  if ((param_2 & 0xfffffef8) != 0) {
    return 0xffffffd3;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  if (((param_2 & 0x100) != 0) && ((*(uint *)(param_1 + 0x58) & 0x4000000) == 0)) {
    if (plVar1 != (long *)0x0) {
      return 0xffffffd3;
    }
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x4000000;
  }
  if ((*(byte *)(param_1 + 0x62) & 8) != 0) {
    return 0;
  }
  if (executable_allocator_is_working_1 == -1) {
    lVar3 = sljit_malloc_exec(0x20);
    if (lVar3 == 0) {
      executable_allocator_is_working_1 = 0;
      return 0xffffffd0;
    }
    sljit_free_exec(lVar3);
    executable_allocator_is_working_1 = 1;
  }
  else if (executable_allocator_is_working_1 == 0) {
    return 0xffffffd0;
  }
  if ((*(byte *)(param_1 + 0x5b) & 4) != 0) {
    param_2 = param_2 | 0x100;
  }
  if ((param_2 & 1) == 0) {
LAB_001336c1:
    if ((param_2 & 2) != 0) {
      if (plVar1 != (long *)0x0) goto LAB_0013366a;
LAB_001336cb:
      uVar2 = jit_compile(param_1,param_2 & 0xfffffffa);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    if ((param_2 & 4) == 0) {
      return 0;
    }
    if (plVar1 == (long *)0x0) goto LAB_001336e6;
  }
  else {
    if ((plVar1 == (long *)0x0) || (*plVar1 == 0)) {
      uVar2 = jit_compile(param_1,param_2 & 0xfffffff9);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_001336c1;
    }
    if ((param_2 & 2) != 0) {
LAB_0013366a:
      if (plVar1[1] == 0) goto LAB_001336cb;
    }
    if ((param_2 & 4) == 0) {
      return 0;
    }
  }
  if (plVar1[2] != 0) {
    return 0;
  }
LAB_001336e6:
  uVar2 = jit_compile(param_1,param_2 & 0xfffffffc);
  return uVar2;
}



undefined8
pcre2_jit_match_16(long param_1,long param_2,long param_3,long param_4,uint param_5,long param_6,
                  long param_7)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  uint uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  int local_54;
  uint local_50;
  long local_40;
  
  uVar8 = (ulong)(param_5 >> 4 & 1);
  lVar5 = *(long *)(param_1 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ushort *)(param_6 + 0x62);
  if ((param_5 & 0x20) != 0) {
    uVar8 = 2;
  }
  if ((lVar5 == 0) || (pcVar6 = *(code **)(lVar5 + uVar8 * 8), pcVar6 == (code *)0x0)) {
    uVar4 = 0xffffffd3;
    goto LAB_001338e1;
  }
  local_a0 = param_2 + param_4 * 2;
  local_90 = param_2 + param_3 * 2;
  uVar7 = *(uint *)(param_1 + 0x68);
  local_78 = 0;
  local_98 = param_2;
  local_88 = param_6;
  local_80 = param_2;
  local_50 = param_5;
  if (param_7 == 0) {
    local_70 = 0;
    local_68 = 0;
    local_60 = 0xffffffffffffffff;
    local_58 = uVar7;
    if (10000000 < uVar7) {
      local_58 = 10000000;
    }
    uVar7 = *(uint *)(lVar5 + 0x48);
    if ((uint)uVar1 <= *(uint *)(lVar5 + 0x48)) {
      uVar7 = (uint)uVar1;
    }
    local_54 = uVar7 * 2;
LAB_0013395c:
    uVar4 = jit_machine_stack_exec(&local_a8);
  }
  else {
    local_70 = *(undefined8 *)(param_7 + 0x28);
    local_68 = *(undefined8 *)(param_7 + 0x30);
    local_60 = *(undefined8 *)(param_7 + 0x48);
    local_58 = *(uint *)(param_7 + 0x54);
    if (uVar7 < *(uint *)(param_7 + 0x54)) {
      local_58 = uVar7;
    }
    lVar3 = *(long *)(param_7 + 0x20);
    if (*(code **)(param_7 + 0x18) != (code *)0x0) {
      lVar3 = (**(code **)(param_7 + 0x18))();
      pcVar6 = *(code **)(lVar5 + uVar8 * 8);
    }
    uVar7 = *(uint *)(lVar5 + 0x48);
    if ((uint)uVar1 <= *(uint *)(lVar5 + 0x48)) {
      uVar7 = (uint)uVar1;
    }
    local_54 = uVar7 * 2;
    if (lVar3 == 0) goto LAB_0013395c;
    local_a8 = *(undefined8 *)(lVar3 + 0x18);
    uVar4 = (*pcVar6)(&local_a8);
  }
  iVar2 = (int)uVar4;
  if ((int)uVar7 < iVar2) {
    uVar4 = 0;
    lVar5 = param_2;
  }
  else if ((-1 < iVar2) || (lVar5 = 0, iVar2 == -2)) {
    lVar5 = param_2;
  }
  *(long *)(param_6 + 0x20) = lVar5;
  *(long *)(param_6 + 0x18) = param_1;
  *(long *)(param_6 + 0x40) = param_3;
  *(int *)(param_6 + 100) = (int)uVar4;
  *(long *)(param_6 + 0x58) = local_80 - param_2 >> 1;
  *(undefined8 *)(param_6 + 0x48) = 0;
  *(undefined8 *)(param_6 + 0x50) = 0;
  *(undefined8 *)(param_6 + 0x28) = local_78;
  *(undefined1 *)(param_6 + 0x60) = 2;
LAB_001338e1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pcre2_jit_free_unused_memory_16(void)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *__addr;
  
  pthread_mutex_lock((pthread_mutex_t *)allocator_lock);
  pvVar3 = free_blocks;
  while (__addr = pvVar3, pvVar3 != (void *)0x0) {
    while ((pvVar3 = *(void **)((long)__addr + 0x10), *(long *)((long)__addr + 8) == 0 &&
           (lVar1 = *(long *)((long)__addr + 0x20), *(long *)((long)__addr + lVar1) == 1))) {
      total_size = total_size - lVar1;
      if (pvVar3 != (void *)0x0) {
        *(undefined8 *)((long)pvVar3 + 0x18) = *(undefined8 *)((long)__addr + 0x18);
      }
      pvVar2 = pvVar3;
      if (*(long *)((long)__addr + 0x18) != 0) {
        *(void **)(*(long *)((long)__addr + 0x18) + 0x10) = pvVar3;
        pvVar2 = free_blocks;
      }
      free_blocks = pvVar2;
      munmap(__addr,lVar1 + 0x10);
      __addr = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00133aad;
    }
  }
LAB_00133aad:
  pthread_mutex_unlock((pthread_mutex_t *)allocator_lock);
  return;
}



undefined8 * pcre2_jit_stack_create_16(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_2 - 1 < 0xffffffffffffdfff) && (param_1 != 0)) {
    if (param_2 < param_1) {
      param_1 = param_2;
    }
    uVar6 = param_2 + 0x1fff & 0xffffffffffffe000;
    uVar7 = param_1 + 0x1fff & 0xffffffffffffe000;
    puVar1 = (undefined8 *)_pcre2_memctl_malloc_16(0x20,param_3);
    if (puVar1 != (undefined8 *)0x0) {
      if ((uVar7 - 1 < uVar6) &&
         (plVar2 = (long *)(*(code *)*puVar1)(0x20,puVar1[2]), plVar2 != (long *)0x0)) {
        if (sljit_page_align_0 == 0) {
          lVar5 = sysconf(0x1e);
          if (lVar5 < 0) {
            uVar3 = 0xfffffffffffff000;
            sljit_page_align_0 = 0xfff;
          }
          else {
            sljit_page_align_0 = lVar5 - 1;
            uVar3 = -lVar5;
          }
        }
        else {
          uVar3 = ~sljit_page_align_0;
        }
        uVar3 = uVar6 + sljit_page_align_0 & uVar3;
        pvVar4 = mmap64((void *)0x0,uVar3,3,0x22,-1,0);
        if (pvVar4 != (void *)0xffffffffffffffff) {
          plVar2[3] = (long)pvVar4;
          lVar5 = (long)pvVar4 + uVar3;
          plVar2[2] = lVar5 - uVar7;
          *plVar2 = lVar5;
          plVar2[1] = lVar5;
          puVar1[3] = plVar2;
          return puVar1;
        }
        (*(code *)puVar1[1])(plVar2,puVar1[2]);
      }
      puVar1[3] = 0;
      (*(code *)puVar1[1])(puVar1,puVar1[2]);
    }
  }
  return (undefined8 *)0x0;
}



void pcre2_jit_stack_assign_16(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x20) = param_3;
  }
  return;
}



void pcre2_jit_stack_free_16(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    munmap(*(void **)(lVar1 + 0x18),*(long *)(lVar1 + 8) - (long)*(void **)(lVar1 + 0x18));
    (**(code **)(param_1 + 8))(lVar1,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00133ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(param_1,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



undefined8 get_class_iterator_size_cold(void)

{
  return 0;
}



void compile_xclass_matchingpath_cold(void)

{
  FUN_0011b233();
  return;
}


