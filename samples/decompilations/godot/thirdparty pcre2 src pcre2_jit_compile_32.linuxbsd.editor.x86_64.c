
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



uint * next_opcode(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  if (uVar1 == 0x70) {
    return param_2 + param_2[1];
  }
  if (uVar1 < 0x71) {
    if (uVar1 < 0x55) {
      if (uVar1 < 0xf) {
        if (uVar1 == 0xe) {
          if (*(int *)(param_1 + 0x1e0) == 0) {
            return param_2 + 1;
          }
        }
        else if (uVar1 != 0) goto LAB_001000d4;
        return (uint *)0x0;
      }
    }
    else if (uVar1 < 0x62) {
      return param_2 + ((ulong)(byte)(&_pcre2_OP_lengths_32)[uVar1] - 1);
    }
  }
  else {
    uVar2 = uVar1 - 0x71;
    if (0x39 < uVar2) {
      return (uint *)0x0;
    }
    uVar3 = 1L << ((byte)uVar2 & 0x3f);
    if ((uVar3 & 0x37d55ffffffffbf) == 0) {
      if ((uVar3 & 0x2aa0000000000) != 0) {
        return param_2 + (ulong)param_2[1] + 3;
      }
      if (uVar2 != 6) {
        return (uint *)0x0;
      }
      return param_2 + param_2[3];
    }
  }
LAB_001000d4:
  return param_2 + (byte)(&_pcre2_OP_lengths_32)[uVar1];
}



undefined8 check_opcode_types(undefined8 param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 extraout_XMM0_Qa;
  
  if (param_3 <= param_2) {
    return 1;
  }
  puVar2 = &DAT_00130080;
  uVar1 = _LC0;
  while( true ) {
    if (*param_2 - 3U < 0xa3) {
                    /* WARNING: Could not recover jumptable at 0x00100173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(puVar2 + *(int *)(puVar2 + (ulong)(*param_2 - 3U) * 4)))(uVar1);
      return uVar1;
    }
    param_2 = (int *)next_opcode(param_1);
    if (param_2 == (int *)0x0) break;
    uVar1 = extraout_XMM0_Qa;
    if (param_3 <= param_2) {
      return 1;
    }
  }
  return 0;
}



int detect_early_fail(long param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *local_50;
  
  iVar9 = param_5;
  if ((param_2[(uint)param_2[1]] == 0x78) && (iVar9 = 1, 0 < param_5)) {
    iVar9 = param_5;
  }
  iVar11 = 0;
  lVar5 = (ulong)(*param_2 == 0x89) * 4 + 8;
  piVar7 = param_2;
  local_50 = param_2 + (uint)param_2[1];
  do {
    iVar2 = *(int *)((long)piVar7 + lVar5);
    piVar7 = (int *)((long)piVar7 + lVar5);
    iVar10 = iVar9;
LAB_00100450:
    switch(iVar2) {
    default:
      goto switchD_00100466_caseD_0;
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
      if (iVar10 < 1) {
        iVar10 = 1;
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
      iVar2 = piVar7[1];
      piVar7 = piVar7 + 1;
      goto LAB_00100450;
    case 0xf:
    case 0x10:
    case 0x29:
      iVar2 = piVar7[3];
      if (iVar10 < 1) {
        iVar10 = 1;
      }
      piVar7 = piVar7 + 3;
      goto LAB_00100450;
    case 0x11:
    case 0x16:
      iVar2 = piVar7[1];
      if (iVar10 < 3) {
        iVar10 = 3;
      }
      piVar7 = piVar7 + 1;
      goto LAB_00100450;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x5d:
      iVar2 = piVar7[2];
      if (iVar10 < 1) {
        iVar10 = 1;
      }
      piVar7 = piVar7 + 2;
      goto LAB_00100450;
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
switchD_00100466_caseD_21:
      piVar4 = piVar7 + 2;
      goto LAB_00100482;
    case 0x22:
    case 0x24:
    case 0x2f:
    case 0x31:
    case 0x3c:
    case 0x3e:
    case 0x49:
    case 0x4b:
      if (iVar10 != 2) goto switchD_00100466_caseD_21;
      lVar8 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_1 + 0x10);
      piVar4 = piVar7 + 2;
      iVar2 = *param_3;
      iVar10 = 3;
      goto LAB_001005f9;
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
      goto switchD_00100466_caseD_25;
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
      piVar7 = piVar7 + 1;
switchD_00100466_caseD_25:
      iVar2 = piVar7[2];
      if (iVar10 < 3) {
        iVar10 = 3;
      }
      piVar7 = piVar7 + 2;
      goto LAB_00100450;
    case 0x55:
    case 0x57:
    case 0x5e:
    case 0x5f:
      goto switchD_00100466_caseD_55;
    case 0x56:
    case 0x58:
      if (iVar10 == 2) {
        iVar2 = piVar7[1];
        piVar4 = piVar7 + 1;
        if ((iVar2 != 0x11) && (iVar2 != 0x16)) {
          lVar8 = *(long *)(param_1 + 0x18);
          iVar2 = *param_3;
          iVar10 = 3;
          lVar5 = *(long *)(param_1 + 0x10);
          goto LAB_001005f9;
        }
        iVar10 = 3;
        piVar7 = piVar4;
        goto LAB_00100450;
      }
switchD_00100466_caseD_55:
      iVar2 = piVar7[1];
      piVar4 = piVar7 + 1;
      if ((iVar2 == 0x11) || (iVar2 == 0x16)) {
        piVar7 = piVar4;
        if (iVar10 < 3) {
          iVar10 = 3;
        }
        goto LAB_00100450;
      }
LAB_00100482:
      iVar2 = *param_3;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(param_1 + 0x18);
      puVar6 = (uint *)((long)piVar7 + lVar8 + (4 - lVar5));
      if (iVar10 == 0) {
        *(int **)(param_1 + 0x70) = piVar7;
        *puVar6 = iVar2 * 8;
        *param_3 = *param_3 + 8;
LAB_001004b6:
        iVar10 = 4;
        *(undefined4 *)((long)param_2 + (lVar8 - lVar5)) = 1;
        iVar2 = *piVar4;
        piVar7 = piVar4;
        goto LAB_00100450;
      }
      if (iVar10 < 3) {
        *puVar6 = iVar2 * 8 | 1;
        if (*(int *)(param_1 + 0x78) == 0) {
          *(int *)(param_1 + 0x78) = *param_3;
        }
        iVar2 = *param_3 + 8;
        *param_3 = iVar2;
        *(int *)(param_1 + 0x7c) = iVar2;
        if (0x100000 < iVar2) {
          return 6;
        }
        goto LAB_001004b6;
      }
LAB_001005f9:
      *(int *)((long)piVar7 + lVar8 + (4 - lVar5)) = iVar2 * 8 + 2;
      if (*(int *)(param_1 + 0x78) == 0) {
        *(int *)(param_1 + 0x78) = *param_3;
      }
      iVar2 = *param_3 + 0x10;
      *param_3 = iVar2;
      *(int *)(param_1 + 0x7c) = iVar2;
      if (0x100000 < iVar2) {
        return 6;
      }
      iVar10 = iVar10 + 1;
      *(undefined4 *)((long)param_2 + (lVar8 - lVar5)) = 1;
      iVar2 = *piVar4;
      piVar7 = piVar4;
      if (iVar10 < 6) goto LAB_00100450;
switchD_00100466_caseD_0:
      if (iVar2 - 0x78U < 2) {
LAB_00100888:
        if (iVar11 < iVar10) {
          iVar11 = iVar10;
        }
      }
      else {
LAB_00100659:
        iVar11 = 6;
      }
      iVar2 = *local_50;
      lVar5 = 8;
      piVar7 = local_50;
      local_50 = local_50 + (uint)local_50[1];
      if (iVar2 != 0x78) {
        return iVar11;
      }
      break;
    case 0x59:
    case 0x5a:
    case 0x60:
      goto LAB_001005c4;
    case 0x5b:
    case 0x5c:
    case 0x61:
      piVar7 = piVar7 + 1;
LAB_001005c4:
      piVar4 = piVar7 + 1;
      iVar2 = piVar7[1];
      piVar7 = piVar4;
      if (iVar10 < 3) {
        iVar10 = 3;
      }
      goto LAB_00100450;
    case 0x6e:
    case 0x6f:
    case 0x70:
      lVar5 = 0x24;
      if (iVar2 == 0x70) {
        lVar5 = (ulong)(uint)piVar7[1] << 2;
      }
      piVar4 = (int *)(lVar5 + (long)piVar7);
      iVar2 = *piVar4;
      switch(iVar2) {
      case 99:
      case 0x65:
        if (iVar10 == 2) {
          lVar8 = *(long *)(param_1 + 0x18);
          lVar5 = *(long *)(param_1 + 0x10);
          piVar4 = piVar4 + 1;
          iVar2 = *param_3;
          iVar10 = 3;
          goto LAB_001005f9;
        }
      case 0x62:
      case 100:
      case 0x6a:
      case 0x6b:
        piVar4 = piVar4 + 1;
        goto LAB_00100482;
      case 0x66:
      case 0x67:
      case 0x6c:
        goto switchD_001005b9_caseD_66;
      case 0x68:
      case 0x69:
      case 0x6d:
        if (piVar4[1] == piVar4[2]) {
          iVar2 = piVar4[3];
          piVar7 = piVar4 + 3;
          if (iVar10 < 1) {
            iVar10 = 1;
          }
        }
        else {
          piVar4 = piVar4 + 2;
switchD_001005b9_caseD_66:
          if (iVar10 < 3) {
            iVar10 = 3;
          }
          iVar2 = piVar4[1];
          piVar7 = piVar4 + 1;
        }
        break;
      default:
        piVar7 = piVar4;
        if (iVar10 < 1) {
          iVar10 = 1;
        }
      }
      goto LAB_00100450;
    case 0x79:
      if (local_50 <= piVar7) goto LAB_00100888;
      iVar2 = piVar7[2];
      piVar7 = piVar7 + 2;
      goto LAB_00100450;
    case 0x87:
    case 0x89:
      if (param_4 == 4) goto LAB_00100659;
      iVar1 = 1;
      if (0 < iVar10) {
        iVar1 = iVar10;
      }
      piVar4 = piVar7 + (uint)piVar7[1];
      iVar3 = *piVar4;
      if (2 < iVar10) goto LAB_0010081d;
      if (iVar3 == 0x78) {
        iVar1 = 3;
        do {
          piVar4 = piVar4 + (uint)piVar4[1];
          iVar3 = *piVar4;
LAB_0010081d:
        } while (iVar3 == 0x78);
      }
      if ((iVar3 != 0x79) ||
         ((iVar2 == 0x89 && (*(char *)(*(long *)(param_1 + 0x28) + (ulong)(uint)piVar7[2]) == '\0'))
         )) goto LAB_00100659;
      iVar2 = detect_early_fail(param_1,piVar7,param_3,param_4 + 1);
      iVar10 = iVar1;
      if (iVar1 <= iVar2) {
        iVar10 = iVar2;
      }
      if (*(int *)((long)piVar7 + (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10))) != 0) {
        *(undefined4 *)((long)param_2 + (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10))) = 1
        ;
      }
      if (5 < iVar10) {
        iVar2 = *piVar7;
        goto switchD_00100466_caseD_0;
      }
      iVar2 = piVar4[2];
      piVar7 = piVar4 + 2;
      goto LAB_00100450;
    }
  } while( true );
}



uint get_class_iterator_size(int *param_1)

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
  uVar1 = param_1[2] - param_1[1];
  if (2 < uVar1) {
    uVar1 = 2;
  }
  return uVar1;
}



uint * do_extuni_utf_invalid(long param_1,uint *param_2)

{
  uint uVar1;
  uint in_EAX;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  
  bVar5 = true;
  puVar4 = param_2;
  puVar3 = (uint *)0x0;
  do {
    uVar1 = *param_2;
    if ((0x101fff < uVar1 - 0xe000) && (0xd7ff < uVar1)) {
      return puVar3;
    }
    param_2 = param_2 + 1;
    uVar2 = (uint)(byte)(&DAT_0013601a)
                        [(ulong)*(ushort *)
                                 (&_pcre2_ucd_stage2_32 +
                                 (long)(int)((uint)*(ushort *)
                                                    (&_pcre2_ucd_stage1_32 +
                                                    (long)((int)uVar1 >> 7) * 2) * 0x80 +
                                            (uVar1 & 0x7f)) * 2) * 0xc];
    if (bVar5) {
LAB_00100a51:
      puVar3 = puVar4;
      in_EAX = uVar2;
    }
    else {
      if ((1 << ((&DAT_0013601a)
                 [(ulong)*(ushort *)
                          (&_pcre2_ucd_stage2_32 +
                          (long)(int)((uint)*(ushort *)
                                             (&_pcre2_ucd_stage1_32 + (long)((int)uVar1 >> 7) * 2) *
                                      0x80 + (uVar1 & 0x7f)) * 2) * 0xc] & 0x1f) &
          *(uint *)(&_pcre2_ucp_gbtable_32 + (long)(int)in_EAX * 4)) == 0) {
        return puVar3;
      }
      if ((in_EAX == 0xb) && (uVar2 == 0xb)) {
        if (*(uint **)(param_1 + 0x10) < puVar4) {
          do {
            uVar1 = puVar4[-1];
            if (((0x101fff < uVar1 - 0xe000) && (0xd7ff < uVar1)) ||
               (puVar4 = puVar4 + -1,
               (&DAT_0013601a)
               [(ulong)*(ushort *)
                        (&_pcre2_ucd_stage2_32 +
                        (long)(int)((uint)*(ushort *)
                                           (&_pcre2_ucd_stage1_32 + (long)((int)uVar1 >> 7) * 2) *
                                    0x80 + (uVar1 & 0x7f)) * 2) * 0xc] != '\v')) break;
            bVar5 = (bool)(bVar5 ^ 1);
          } while (*(uint **)(param_1 + 0x10) < puVar4);
          if (bVar5) {
            return puVar3;
          }
        }
        in_EAX = 0xb;
      }
      else {
        puVar4 = puVar3;
        if (((uVar2 != 3) && (uVar2 != 0xd)) || (in_EAX != 0xe)) goto LAB_00100a51;
      }
    }
    bVar5 = false;
    puVar4 = puVar3;
    puVar3 = param_2;
    if (*(uint **)(param_1 + 0x18) <= param_2) {
      return param_2;
    }
  } while( true );
}



uint * do_extuni_no_utf(long param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  
  puVar5 = param_2 + 1;
  uVar3 = *param_2;
  if (0x10ffff < uVar3) {
    return puVar5;
  }
  uVar3 = (uint)(byte)(&DAT_0013601a)
                      [(ulong)*(ushort *)
                               (&_pcre2_ucd_stage2_32 +
                               (long)(int)((uint)*(ushort *)
                                                  (&_pcre2_ucd_stage1_32 +
                                                  (long)((int)uVar3 >> 7) * 2) * 0x80 +
                                          (uVar3 & 0x7f)) * 2) * 0xc];
  if (puVar5 < *(uint **)(param_1 + 0x18)) {
    do {
      uVar2 = *puVar5;
      if (0x10ffff < uVar2) {
        return puVar5;
      }
      bVar1 = (&DAT_0013601a)
              [(ulong)*(ushort *)
                       (&_pcre2_ucd_stage2_32 +
                       (long)(int)((uint)*(ushort *)
                                          (&_pcre2_ucd_stage1_32 + (long)((int)uVar2 >> 7) * 2) *
                                   0x80 + (uVar2 & 0x7f)) * 2) * 0xc];
      if ((1 << (bVar1 & 0x1f) & *(uint *)(&_pcre2_ucp_gbtable_32 + (long)(int)uVar3 * 4)) == 0) {
        return puVar5;
      }
      uVar2 = (uint)bVar1;
      if ((uVar3 == 0xb) && (uVar2 == 0xb)) {
        if (*(uint **)(param_1 + 0x10) < param_2) {
          bVar6 = false;
          puVar4 = param_2;
          do {
            uVar3 = puVar4[-1];
            puVar4 = puVar4 + -1;
            if ((0x10ffff < uVar3) ||
               ((&DAT_0013601a)
                [(ulong)*(ushort *)
                         (&_pcre2_ucd_stage2_32 +
                         (long)(int)((uint)*(ushort *)
                                            (&_pcre2_ucd_stage1_32 + (long)((int)uVar3 >> 7) * 2) *
                                     0x80 + (uVar3 & 0x7f)) * 2) * 0xc] != '\v')) break;
            bVar6 = (bool)(bVar6 ^ 1);
          } while (*(uint **)(param_1 + 0x10) < puVar4);
          if (bVar6) {
            return puVar5;
          }
        }
        uVar3 = 0xb;
      }
      else if ((bVar1 != 3 && uVar2 != 0xd) || (bVar6 = uVar3 != 0xe, uVar3 = 0xe, bVar6)) {
        uVar3 = uVar2;
      }
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    } while (puVar5 < *(uint **)(param_1 + 0x18));
  }
  return puVar5;
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
    *(long *)(param_2 + 10) = lVar3 - lVar2 >> 2;
    lVar3 = *param_3;
    *(long *)(param_2 + 8) = lVar2;
    param_2[2] = 1;
    param_2[0x1c] = 0xffffffff;
    param_2[0x1d] = 0xffffffff;
    param_2[0x1e] = 0xffffffff;
    param_2[0x1f] = 0xffffffff;
    *(long *)(param_2 + 0xc) = lVar3 - lVar2 >> 2;
    *(long *)(param_2 + 0xe) = *(long *)(param_2 + 4) - lVar2 >> 2;
    plVar7 = (long *)(param_2 + 0x20);
    *(undefined4 **)(param_2 + 4) = param_2 + 0x1c;
    if (iVar1 != 1) {
      iVar8 = 1;
      do {
        lVar3 = plVar6[1];
        iVar8 = iVar8 + 1;
        lVar4 = *plVar6 - lVar2 >> 2;
        *plVar7 = lVar4;
        plVar7[1] = lVar3 - lVar2 >> 2;
        if (lVar4 != -1) {
          param_2[2] = iVar8;
        }
        plVar7 = plVar7 + 2;
        plVar6 = plVar6 + 2;
      } while (iVar1 != iVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00100d21. Too many branches */
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
  *(undefined8 *)(puVar2 + -0x1040) = 0x100d90;
  (*param_2)();
  if (*(long *)(puVar2 + 0x6ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar2 + -0x1040) = get_framesize;
  __stack_chk_fail();
}



int get_framesize(long param_1,uint *param_2,uint *param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar10;
  bool bVar11;
  ulong uVar9;
  
  *param_5 = 0;
  puVar5 = param_2;
  if (param_3 != (uint *)0x0) {
    bVar2 = false;
    uVar7 = 0;
    if (param_3 <= param_2) {
      return -2;
    }
    goto LAB_00100dea;
  }
  do {
    param_3 = puVar5 + puVar5[1];
    puVar5 = param_3;
  } while (*param_3 == 0x78);
  if (param_4 == 0) {
    if (*param_2 != 0x8a) {
      bVar2 = false;
      uVar7 = 0;
      if (*param_2 != 0x8f) goto LAB_0010107b;
    }
    bVar2 = true;
    uVar7 = (ulong)((-(uint)(*(int *)(param_1 + 0x68) == 0) & 0xfffffffe) + 5);
  }
  else {
    bVar2 = false;
    uVar7 = 0;
  }
LAB_0010107b:
  param_2 = (uint *)next_opcode(param_1);
  if (param_3 <= param_2) {
    return -2;
  }
LAB_00100dea:
  iVar10 = (int)uVar7;
  uVar9 = 0;
  iVar3 = param_4;
  do {
    while( true ) {
      iVar6 = (int)uVar7;
      uVar1 = *param_2;
      if (0x8f < uVar1) break;
      if (uVar1 < 0x5d) {
        if (uVar1 == 3) {
          bVar11 = iVar3 == 0;
          iVar3 = 1;
          uVar9 = 1;
          uVar7 = uVar7 & 0xffffffff;
          if (bVar11) {
            uVar7 = (ulong)(iVar6 + 2);
          }
          param_2 = param_2 + 1;
        }
        else {
          if (uVar1 < 3) {
LAB_00100e34:
            uVar9 = 1;
          }
          else if (0x20 < uVar1) {
            if (0x2b < uVar1 - 0x29) goto LAB_00100e34;
            uVar9 = uVar9 & 0xffffffff;
            if ((0xf807c03e01fU >> ((ulong)(uVar1 - 0x29) & 0x3f) & 1) == 0) {
              uVar9 = 1;
            }
          }
LAB_00100e3a:
          param_2 = (uint *)next_opcode(param_1);
        }
      }
      else {
        uVar4 = 1L << ((char)uVar1 + 0xa3U & 0x3f);
        if ((uVar4 & 0x60e001f) != 0) goto LAB_00100e3a;
        if ((uVar4 & 0x6300000000000) == 0) {
          if (uVar1 != 0x75) goto LAB_00100e34;
          if ((*(int *)(param_1 + 0xac) != 0) && (iVar3 == 0)) {
            uVar7 = (ulong)(iVar6 + 2);
            iVar3 = 1;
          }
          if ((*(int *)(param_1 + 0x60) != 0) && (param_4 == 0)) {
            uVar7 = (ulong)((int)uVar7 + 2);
            param_4 = 1;
          }
          if ((*(int *)(param_1 + 0x68) != 0) && (!bVar2)) {
            bVar2 = true;
            uVar7 = (ulong)((int)uVar7 + 2);
          }
          param_2 = param_2 + 2;
          uVar9 = 1;
        }
        else {
          if ((*(int *)(param_1 + 0x68) != 0) && (!bVar2)) {
            bVar2 = true;
            iVar6 = iVar6 + 2;
          }
          uVar7 = (ulong)(iVar6 + 3);
          param_2 = param_2 + 3;
          uVar9 = 1;
        }
      }
LAB_00100e45:
      iVar8 = (int)uVar9;
      iVar6 = (int)uVar7;
      if (param_3 <= param_2) goto LAB_00100ea0;
    }
    uVar1 = uVar1 - 0x9a;
    if (0x10 < uVar1) goto LAB_00100e34;
    uVar4 = 1L << ((byte)uVar1 & 0x3f);
    if ((uVar4 & 0x145) != 0) {
      uVar7 = uVar7 & 0xffffffff;
      if (param_4 == 0) {
        uVar7 = (ulong)(iVar6 + 2);
      }
      if (*(int *)(param_1 + 100) != 0) {
        *param_5 = 1;
      }
      param_4 = 1;
      uVar9 = 1;
      param_2 = param_2 + (param_2[1] + 3);
      goto LAB_00100e45;
    }
    if ((uVar4 & 0x18000) != 0) goto LAB_00100e3a;
    if (uVar1 != 5) goto LAB_00100e34;
    if (*(int *)(param_1 + 100) != 0) {
      *param_5 = 1;
    }
    param_2 = param_2 + 1;
    uVar9 = 1;
    iVar8 = 1;
  } while (param_2 < param_3);
LAB_00100ea0:
  if (iVar10 == iVar6) {
    iVar3 = iVar8 + -2;
  }
  else {
    iVar3 = iVar6 + 1;
    if (iVar6 < 1) {
      iVar3 = iVar8 + -2;
    }
  }
  return iVar3;
}



undefined8 do_script_run(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _pcre2_script_run_32(param_1,param_2,0);
  if (iVar1 == 0) {
    param_2 = 0;
  }
  return param_2;
}



undefined8 do_script_run_utf(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _pcre2_script_run_32(param_1,param_2,1);
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
  while ((param_1[1] != 0 || (iVar1 = _pcre2_strcmp_32(param_2,param_1[2]), iVar1 != 0))) {
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



uint * get_iterator_parameters_constprop_0
                 (undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                 uint *param_6,long *param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  
  puVar5 = param_2 + 1;
  *param_3 = *param_2;
  *param_6 = 0;
  uVar4 = *param_3;
  switch(uVar4) {
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
    switch(*param_3) {
    case 0x23:
    case 0x24:
      goto switchD_0010141f_caseD_23;
    default:
      goto switchD_00101456_caseD_25;
    case 0x27:
    case 0x28:
    case 0x2d:
      goto switchD_0010141f_caseD_27;
    case 0x29:
      goto switchD_0010141f_caseD_29;
    case 0x2b:
      goto switchD_0010141f_caseD_2b;
    }
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
    uVar4 = *param_3 - 0xd;
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
    uVar4 = *param_3 - 0x1a;
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
    uVar4 = *param_3 - 0x27;
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
    *param_3 = uVar4 - 0x34;
    *param_4 = 0;
    switch(*param_3) {
    case 0x23:
    case 0x24:
      goto switchD_0010141f_caseD_23;
    default:
      goto switchD_0010141f_caseD_25;
    case 0x27:
    case 0x28:
    case 0x2d:
      goto switchD_0010141f_caseD_27;
    case 0x29:
      goto switchD_0010141f_caseD_29;
    case 0x2b:
      goto switchD_0010141f_caseD_2b;
    }
  default:
    *param_4 = uVar4;
    if (uVar4 < 0x70) {
      lVar3 = 0x24;
      lVar7 = 9;
    }
    else {
      lVar7 = (long)(int)param_2[1];
      lVar3 = lVar7 * 4;
    }
    uVar4 = *(uint *)((long)param_2 + lVar3);
    puVar6 = (uint *)((long)param_2 + lVar3 + 4);
    *param_3 = uVar4;
    if (uVar4 - 0x62 < 6) {
      *param_3 = uVar4 - 0x41;
      *param_7 = (long)puVar6;
      if (1 < uVar4 - 100) {
        return puVar5;
      }
      *param_6 = 1;
      *param_3 = *param_3 - 2;
      return puVar5;
    }
    if (2 < uVar4 - 0x6a) {
      *param_5 = param_2[lVar7 + 2];
      uVar4 = *puVar6;
      *param_6 = uVar4;
      if (*param_5 == 0) {
        uVar2 = *param_3 - 0x47;
        if (*param_3 == 0x6d) {
          uVar2 = 0x2a;
        }
      }
      else {
        uVar4 = *param_5 - uVar4;
        uVar2 = 0x29;
        *param_5 = uVar4;
        if (uVar4 != 0) {
          uVar1 = *param_3;
          if (uVar4 == 1) {
            uVar2 = uVar1 - 0x43;
            if (uVar1 == 0x6d) {
              uVar2 = 0x2c;
            }
          }
          else {
            uVar2 = uVar1 - 0x41;
            if (uVar1 == 0x6d) {
              uVar2 = 0x2d;
            }
          }
        }
      }
      *param_3 = uVar2;
      *param_7 = (long)(param_2 + lVar7 + 3);
      return puVar5;
    }
    *param_3 = uVar4 - 0x40;
    *param_7 = (long)puVar6;
    if (uVar4 - 0x40 != 0x2b) {
      return puVar5;
    }
    *param_6 = 1;
    *param_3 = 0x2a;
    return puVar5;
  }
  *param_3 = uVar4;
  switch(uVar4) {
  case 0x23:
  case 0x24:
switchD_0010141f_caseD_23:
    *param_6 = 1;
    *param_3 = *param_3 - 2;
    uVar4 = *param_4;
    goto joined_r0x0010147e;
  case 0x27:
  case 0x28:
  case 0x2d:
switchD_0010141f_caseD_27:
    puVar5 = param_2 + 2;
    *param_5 = param_2[1];
    break;
  case 0x29:
switchD_0010141f_caseD_29:
    puVar5 = param_2 + 2;
    *param_6 = param_2[1];
    break;
  case 0x2b:
switchD_0010141f_caseD_2b:
    *param_6 = 1;
    *param_3 = 0x2a;
  }
  uVar4 = *param_4;
joined_r0x0010147e:
  if (uVar4 == 0) {
switchD_0010141f_caseD_25:
    puVar6 = puVar5 + 1;
    *param_4 = *puVar5;
    lVar3 = next_opcode(param_1,puVar5);
    *param_7 = lVar3;
    return puVar6;
  }
switchD_00101456_caseD_25:
  *param_7 = (long)(puVar5 + 1);
  return puVar5;
}



uint char_get_othercase_bit_isra_0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  
  if ((*(int *)(param_1 + 0x1e0) == 0) && (*(int *)(param_1 + 0x1e8) == 0)) {
    if (0xff < param_2) {
      return 0;
    }
  }
  else if (0x7f < param_2) {
    puVar3 = &_pcre2_dummy_ucd_record_32;
    if (param_2 < 0x110000) {
      puVar3 = &_pcre2_ucd_records_32 +
               (ulong)*(ushort *)
                       (&_pcre2_ucd_stage2_32 +
                       (long)(int)((uint)*(ushort *)
                                          (&_pcre2_ucd_stage1_32 + (long)((int)param_2 >> 7) * 2) *
                                   0x80 + (param_2 & 0x7f)) * 2) * 0xc;
    }
    uVar1 = *(int *)(puVar3 + 4) + param_2 ^ param_2;
    goto LAB_00101690;
  }
  uVar1 = *(byte *)(*(long *)(param_1 + 0x90) + (ulong)param_2) ^ param_2;
  if ((param_2 < 0x80) && (uVar1 == 0x20)) {
    return 0x20;
  }
LAB_00101690:
  if ((uVar1 - 1 & uVar1) != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x1e0) != 0) && (0xffff < param_2)) {
    if (uVar1 < 0x400) {
      uVar2 = uVar1 | 0x200;
      if (0xff < uVar1) {
        uVar2 = uVar1 >> 8 | 0x300;
      }
      return uVar2;
    }
    uVar1 = uVar1 >> 10;
  }
  if (0xff < uVar1) {
    uVar1 = uVar1 >> 8 | 0x100;
  }
  return uVar1;
}



void set_private_data_ptrs(long param_1,int *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  uint *__s1;
  uint *__s2;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  size_t __n;
  int iVar14;
  
  __s1 = *(uint **)(param_1 + 0x10);
  iVar14 = *param_2;
  if ((__s1 < param_3) && (iVar14 < 0x100001)) {
    puVar10 = (uint *)0x0;
    puVar12 = __s1;
    do {
      iVar13 = 1;
      uVar7 = *__s1;
      if (uVar7 - 0x85 < 7) {
        puVar5 = __s1;
        if ((0x55UL >> ((ulong)(uVar7 - 0x85) & 0x3f) & 1) != 0) {
          do {
            puVar5 = puVar5 + puVar5[1];
          } while (*puVar5 == 0x78);
          if ((*puVar5 == 0x79) &&
             (lVar11 = *(long *)(param_1 + 0x18),
             *(int *)((long)__s1 + (lVar11 - (long)puVar12)) == 0)) {
            puVar9 = __s1;
            if (*(int *)((lVar11 - (long)puVar12) + 4 + (long)puVar5) == 0) {
              puVar1 = puVar5 + 2;
              uVar2 = puVar5[2];
              __n = (long)puVar1 - (long)__s1;
              puVar5 = puVar1;
              __s2 = puVar1;
              if (uVar2 == uVar7) {
                do {
                  do {
                    puVar8 = puVar5 + puVar5[1];
                    puVar5 = puVar8;
                  } while (*puVar8 == 0x78);
                  puVar5 = puVar8 + 2;
                  if ((__n != (long)puVar5 - (long)__s2) ||
                     (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) {
                    if (iVar13 == 2) goto joined_r0x001018d7;
                    goto LAB_00101c7e;
                  }
                  uVar2 = puVar8[2];
                  iVar13 = iVar13 + 1;
                  __s2 = puVar5;
                } while (uVar2 == uVar7);
                if (iVar13 != 2) {
                  if (uVar2 - 0x97 < 2) goto LAB_00101cda;
LAB_0010187c:
                  *(int *)((long)puVar1 + ((lVar11 + -4) - (long)puVar12)) =
                       (int)((long)puVar5 - (long)puVar1 >> 2);
                  *(undefined4 *)((long)puVar1 + (lVar11 - (long)puVar12)) = 0x29;
                  *(int *)((long)puVar1 + ((lVar11 + 4) - (long)puVar12)) = iVar13;
LAB_001018a4:
                  uVar7 = *__s1;
                  if (__s1 < puVar10) goto LAB_001018c8;
                  goto LAB_001018b0;
                }
              }
              else if (uVar2 - 0x97 < 2) {
LAB_00101cda:
                iVar3 = 0;
                puVar5 = __s2;
                while ((puVar5[1] == 0x87 && (puVar5[3] == uVar7))) {
                  puVar8 = puVar5 + 3;
                  do {
                    puVar8 = puVar8 + puVar8[1];
                  } while (*puVar8 == 0x78);
                  if (((long)(puVar8 + 2) - (long)puVar5 >> 2 != ((long)__n >> 2) + 3) ||
                     (iVar4 = memcmp(__s1,puVar5 + 3,__n), iVar4 != 0)) break;
                  iVar3 = iVar3 + 1;
                  puVar5 = puVar8 + 2;
                  if (puVar8[2] != uVar2) {
LAB_00101c7e:
                    puVar5 = __s2;
                    if (2 < iVar13) goto LAB_0010187c;
                    uVar7 = *__s1;
                    if (uVar7 < 0x4e) goto LAB_00101988;
                    goto joined_r0x001018d7;
                  }
                }
                if ((puVar5[1] != uVar7) || (iVar3 == 0)) goto LAB_00101c7e;
                puVar8 = puVar5 + 1;
                do {
                  puVar8 = puVar8 + puVar8[1];
                } while (*puVar8 == 0x78);
                puVar8 = puVar8 + 2;
                if (((long)puVar8 - (long)puVar5 >> 2 != ((long)__n >> 2) + 1) ||
                   (iVar4 = memcmp(__s1,puVar5 + 1,__n), iVar4 != 0)) goto LAB_00101c7e;
                iVar4 = 0;
                do {
                  if (*puVar8 != 0x79) break;
                  iVar4 = iVar4 + 1;
                  puVar8 = puVar8 + 2;
                } while (iVar4 < iVar3);
                if (iVar3 != iVar4) goto LAB_00101c7e;
                *(int *)((long)__s2 + ((lVar11 + -4) - (long)puVar12)) =
                     (int)((long)puVar8 - (long)__s2 >> 2);
                *(int *)((long)__s2 + ((lVar11 + 4) - (long)puVar12)) = iVar3 + 2;
                *(uint *)((long)__s2 + (lVar11 - (long)puVar12)) = uVar2 - 0x70;
                if (iVar13 != 1) {
                  iVar13 = iVar13 + -1;
                  __s2 = __s2 + -(ulong)(__s2[-1] + 2);
                  goto LAB_00101c7e;
                }
                goto LAB_001018a4;
              }
            }
            else if (puVar10 <= __s1) {
LAB_001018b0:
              do {
                puVar9 = puVar9 + puVar9[1];
              } while (*puVar9 == 0x78);
              puVar10 = puVar9 + 2;
              goto LAB_001018c8;
            }
          }
        }
joined_r0x001018d7:
        if (uVar7 - 0x4e < 0x4c) {
                    /* WARNING: Could not recover jumptable at 0x001018e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00130790 + *(int *)(&DAT_00130790 + (ulong)(uVar7 - 0x4e) * 4)))();
          return;
        }
LAB_001019f9:
        __s1 = (uint *)next_opcode(param_1,__s1);
      }
      else {
LAB_001018c8:
        if (0x4d < uVar7) goto joined_r0x001018d7;
LAB_00101988:
        if (uVar7 < 0x21) goto LAB_001019f9;
        uVar6 = 1L << ((char)uVar7 - 0x21U & 0x3f);
        if ((uVar6 & 0x1d00e807403a) == 0) {
          if ((uVar6 & 0x2801400a005) == 0) {
            if ((uVar6 & 0x3001800c0) == 0) goto LAB_001019f9;
            lVar11 = -3;
            iVar13 = 2;
          }
          else {
            lVar11 = -2;
            iVar13 = 2;
          }
        }
        else {
          lVar11 = -2;
          iVar13 = 1;
        }
        iVar3 = (int)lVar11;
        if (__s1 < puVar10) {
LAB_0010196b:
          if (iVar3 < 0) {
            __s1 = __s1 + -iVar3;
          }
          else {
            __s1 = __s1 + lVar11;
          }
        }
        else {
          *(int *)((long)__s1 + (*(long *)(param_1 + 0x18) - (long)puVar12)) = iVar14;
          iVar14 = iVar14 + iVar13 * 8;
          if (iVar3 != 0) goto LAB_0010196b;
        }
      }
    } while ((iVar14 < 0x100001) && (__s1 < param_3));
  }
  *param_2 = iVar14;
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
      local_12 = 0x76;
      local_11 = param_7 << 3 | param_6;
    }
    else {
      if (2 < param_3) {
        if (param_3 != 3) goto LAB_00101fe0;
        local_12 = 0xeb;
        param_5 = (byte)(param_4 << 3) | param_7;
        goto LAB_00102085;
      }
      if (param_3 != 0) {
        local_12 = 0x76;
        local_11 = param_5 | (byte)(param_4 << 3) | 0xc0;
        sljit_emit_op_custom_isra_0(param_1,&local_14,4);
        goto LAB_00101fe0;
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
      goto LAB_00101fe0;
    }
    if (param_3 != 2) goto LAB_00101fe0;
    local_12 = 0x76;
    param_5 = (byte)(param_4 << 3) | param_5;
LAB_00102085:
    local_11 = param_5 | 0xc0;
    sljit_emit_op_custom_isra_0(param_1,&local_14,4);
  }
LAB_00101fe0:
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
    if (puVar2 == (undefined1 *)0x0) goto LAB_001022c8;
    *puVar2 = 5;
    puVar2 = puVar2 + 1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 5;
  }
  else {
    puVar1 = (undefined1 *)ensure_buf(param_1,7);
    if (puVar1 == (undefined1 *)0x0) {
LAB_001022c8:
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
        cVar1 = CSWTCH_721[uVar5 ^ 1] + -0x10;
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
        *param_2 = CSWTCH_721[uVar5 ^ 1] + -0x10;
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
            if (pbVar17 <= pbVar11) goto LAB_00102911;
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
                 ((long)(pbVar13 + (-6 - (long)pbVar10)) < -0x80000000)) goto LAB_00102b68;
              uVar9 = uVar9 >> 0xd;
              if (pbVar13 + (0x7e - (long)pbVar10) < (byte *)0x100) {
                if (uVar9 == 0x24) {
                  *pbVar10 = 0xeb;
                  lVar8 = puVar18[1];
                }
                else {
                  if (0x24 < uVar9) goto LAB_00102c48;
                  *pbVar10 = CSWTCH_721[uVar9] - 0x10;
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
                  pbVar10[1] = CSWTCH_721[uVar9];
                  lVar8 = puVar18[1] + 2;
                }
                else {
LAB_00102c48:
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
LAB_00102b68:
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
                _pcre2_memmove32(pbVar10,pbVar10 + 10,lVar8);
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
LAB_00102911:
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
      for (puVar6 = *(undefined8 **)(param_1 + 4); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        while (uVar9 = puVar6[2], (uVar9 & 0xc) == 0) {
          if ((uVar9 & 0x10) == 0) goto LAB_00102967;
          *(undefined8 *)puVar6[1] = *(undefined8 *)(puVar6[3] + 8);
          puVar6 = (undefined8 *)*puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_00102998;
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
LAB_00102967:
      }
LAB_00102998:
      for (puVar6 = *(undefined8 **)(param_1 + 6); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        while( true ) {
          if ((*(byte *)(puVar6 + 3) & 0x10) != 0) break;
          *(int *)(puVar6[2] + -4) = (int)*(undefined8 *)(puVar6[1] + 8);
          puVar6 = (undefined8 *)*puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_001029d1;
        }
        *(undefined8 *)(puVar6[2] + -8) = *(undefined8 *)(puVar6[1] + 8);
      }
LAB_001029d1:
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



/* WARNING: Removing unreachable block (ram,0x00102d40) */
/* WARNING: Removing unreachable block (ram,0x00102dd1) */
/* WARNING: Removing unreachable block (ram,0x00102d97) */
/* WARNING: Removing unreachable block (ram,0x00102d07) */

void get_cpu_features(void)

{
  uint *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  if (*puVar1 < 7) {
    cpu_feature_list = 1;
    if (*puVar1 == 0) goto LAB_00102d29;
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
LAB_00102d29:
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
          goto LAB_00102e97;
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
LAB_00102e97:
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
LAB_001032ad:
      if ((param_2 & 0x8000) != 0) goto LAB_001030f6;
    }
LAB_00103257:
    if (param_3 == 0x7f) goto LAB_00103100;
LAB_00103261:
    if ((param_2 & 0x2000) == 0) {
      bVar5 = reg_map[param_3];
    }
    else {
      bVar5 = freg_map[param_3];
    }
    if (bVar5 < 8) goto LAB_00103122;
LAB_00103282:
    uVar13 = uVar13 + 1;
  }
  else {
    uVar11 = param_5 & 0x7f00;
    if ((param_5 & 0x7f00) == 0) {
      if (param_6 + 0x80000000 >> 0x20 == 0) {
        if ((param_5 & 0x7f) == 0) goto LAB_00103253;
        uVar8 = (ulong)(int)(param_5 & 0x7f);
        cVar6 = reg_lmap[uVar8];
        if (param_6 == 0) {
          if (reg_lmap[uVar8] == '\x05') goto LAB_0010348b;
          goto LAB_001034ee;
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
            goto LAB_0010363a;
          }
          uVar11 = 0x1000;
LAB_001034ee:
          param_6 = 0;
          uVar8 = (ulong)(param_5 & 0x7f);
          cVar6 = reg_lmap[uVar8];
        }
      }
    }
    else {
      if ((param_5 & 0x7f) == 0) {
LAB_00103253:
        uVar13 = uVar13 + 5;
        goto LAB_00103257;
      }
      uVar8 = (ulong)(int)(param_5 & 0x7f);
      cVar6 = reg_lmap[uVar8];
      if (param_6 == 0) {
        if (reg_lmap[uVar8] != '\x05') goto LAB_001034ee;
      }
      else {
        if (cVar6 != '\x05') goto LAB_001030b9;
        if ((param_6 & 3) != 0) goto LAB_0010348b;
      }
LAB_0010363a:
      if (reg_lmap[(int)param_5 >> 8 & 0x7f] == '\x05') {
        uVar8 = (ulong)(param_5 & 0x7f);
        uVar11 = param_5 & 0x7f00;
        cVar6 = reg_lmap[uVar8];
LAB_0010348b:
        uVar13 = uVar13 + 1;
      }
      else {
        uVar11 = (param_5 & 0x7f) << 8;
        uVar8 = (ulong)((int)param_5 >> 8 & 0x7f);
        param_5 = CONCAT31((int3)(param_5 & 0x7f),(char)(param_5 >> 8)) | 0x80;
        cVar6 = reg_lmap[uVar8];
      }
    }
LAB_001030b9:
    bVar4 = 7 < (byte)reg_map[uVar8];
    if (cVar6 == '\x04') {
      if (uVar11 == 0) {
        param_5 = param_5 | 0xe00;
      }
LAB_0010357a:
      uVar13 = uVar13 + 1;
      if (7 < (byte)reg_map[(int)param_5 >> 8 & 0x7f]) goto LAB_001032ad;
    }
    else if (uVar11 != 0) goto LAB_0010357a;
    if (((param_2 & 0x8000) == 0) || (!bVar4)) goto LAB_00103257;
LAB_001030f6:
    uVar13 = uVar13 + 1;
    uVar14 = uVar1;
    if (param_3 != 0x7f) goto LAB_00103261;
LAB_00103100:
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
      else if (param_4 != 1) goto LAB_0010311a;
    }
    else if (param_4 + 0x80U < 0x100) {
LAB_0010311a:
      param_2 = param_2 | 0x40;
      uVar13 = uVar13 + 1;
    }
    else {
      uVar13 = uVar13 + 4;
    }
LAB_00103122:
    if (bVar4 != false) goto LAB_00103282;
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
      if (param_3 == 0x7f) goto LAB_001032f1;
    }
    else if (param_3 == 0x7f) {
      *pcVar12 = (-((param_2 & 0x40) == 0) & 0xfeU) + 0x83;
      goto LAB_001032f1;
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
LAB_001032f1:
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
        if (iVar1 != 0) goto LAB_001038c0;
        goto LAB_00103877;
      }
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0x7f,param_5,param_2,param_3);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 199;
        return 0;
      }
      goto LAB_001038c0;
    }
    if (param_2 < 0x7f) {
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_2,0,param_4,param_5);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0x8b;
        return 0;
      }
      goto LAB_001038c0;
    }
    puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_4,param_5);
    if (puVar2 == (undefined1 *)0x0) goto LAB_001038c0;
    *puVar2 = 0x8b;
LAB_00103877:
    param_4 = 0xf;
  }
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_4,0,param_2,param_3);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0x89;
    return 0;
  }
LAB_001038c0:
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
      cVar4 = CSWTCH_721[(int)(param_2 ^ 1)] + -0x10;
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
    if (((param_2 & 0x80000) != 0) && (param_1[0x26] == 0)) goto LAB_00103adf;
    if ((param_2 & 0x400) == 0) goto LAB_00103afc;
LAB_00103a23:
    bVar4 = bVar2 | 1;
  }
  else {
LAB_00103adf:
    if (bVar5 == 0) {
      bVar5 = 1;
    }
    bVar4 = 0x80;
    bVar2 = 0x80;
    if ((param_2 & 0x400) != 0) goto LAB_00103a23;
LAB_00103afc:
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
LAB_00103b68:
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
    if (pbVar3 == (byte *)0x0) goto LAB_00103b68;
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
LAB_00103c5a:
          iVar1 = emit_load_imm64(param_1,param_4,param_5);
          param_3 = 0;
joined_r0x00103d9d:
          if (iVar1 != 0) goto LAB_00103d0a;
          goto LAB_00103c72;
        }
      }
      else {
        uVar4 = 0;
      }
      iVar1 = emit_do_imm32(param_1,uVar4,0x3d,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      goto LAB_00103d0a;
    }
LAB_00103bd0:
    uVar4 = 0;
  }
  else {
    if (param_2 < 0x7f) {
      if (param_4 != 0x7f) {
LAB_00103cd0:
        puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,param_2,0,param_4,param_5);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 0x3b;
          return 0;
        }
        goto LAB_00103d0a;
      }
      if ((param_5 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
        param_4 = (param_2 == 0xf) + 0xf;
        goto LAB_00103c5a;
      }
      goto LAB_00103bd0;
    }
    if ((param_4 < 0x7f) && (param_2 != 0x7f)) {
LAB_00103c72:
      puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,param_4,0,param_2,param_3);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0x39;
        return 0;
      }
      goto LAB_00103d0a;
    }
    if (param_4 != 0x7f) {
      iVar1 = emit_mov(param_1,0xf,0,param_2,param_3);
      if (iVar1 != 0) goto LAB_00103d0a;
      param_2 = 0xf;
      goto LAB_00103cd0;
    }
    if (param_2 == 0x7f) {
      iVar1 = emit_mov(param_1,0xf,0,0x7f,param_3);
      if (iVar1 != 0) goto LAB_00103d0a;
      param_3 = 0;
      param_2 = 0xf;
      uVar4 = param_3;
      if ((param_5 + 0x80000000U >> 0x20 != 0) && (param_4 = 0x10, uVar4 = 0, param_1[0x26] == 0))
      goto LAB_00103d84;
    }
    else {
      uVar4 = param_3;
      if ((param_5 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
        param_4 = 0xf;
LAB_00103d84:
        iVar1 = emit_load_imm64(param_1,param_4,param_5);
        goto joined_r0x00103d9d;
      }
    }
  }
  lVar2 = emit_x86_instruction(param_1,0x11,0x7f,param_5,param_2,uVar4);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) | 0x38;
    return 0;
  }
LAB_00103d0a:
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
LAB_00103e6b:
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0x7f,lVar3,param_2,lVar4);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0xf7;
        return 0;
      }
      goto LAB_00103ec8;
    }
    lVar4 = param_5;
    if (param_1[0x26] != 0) {
      uVar5 = 0;
LAB_00103eb7:
      iVar1 = emit_do_imm32(param_1,uVar5,0xa9,lVar4);
      if (iVar1 == 0) {
        return 0;
      }
      goto LAB_00103ec8;
    }
    uVar5 = 0x48;
    if (param_5 + 0x80000000U >> 0x20 == 0) goto LAB_00103eb7;
LAB_00103eeb:
    iVar1 = emit_load_imm64(param_1,0xf,param_5);
    param_5 = param_3;
    param_4 = param_2;
joined_r0x00104079:
    if (iVar1 != 0) goto LAB_00103ec8;
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
            if (param_3 + 0x80000000U >> 0x20 != 0) goto LAB_00103fa7;
          }
          else {
            uVar5 = 0;
          }
          goto LAB_00103eb7;
        }
        goto LAB_00103e6b;
      }
LAB_00104025:
      if (param_4 == 0x7f) {
        lVar3 = param_5;
        if ((param_5 + 0x80000000U < 0x100000000) || (param_1[0x26] != 0)) goto LAB_00103e6b;
        goto LAB_00103eeb;
      }
      lVar4 = param_5;
      iVar1 = param_2;
      iVar6 = param_4;
      if ((param_2 < 0x7f) || (lVar4 = param_3, iVar1 = param_4, iVar6 = param_2, param_4 < 0x7f))
      goto LAB_00103f0f;
      iVar1 = emit_mov(param_1,0xf,0,param_2,param_3);
      goto joined_r0x00104079;
    }
    if (param_2 != 0x7f) goto LAB_00104025;
    if (param_4 != 0x7f) {
      lVar4 = param_5;
      param_2 = param_4;
      if ((param_3 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) goto LAB_00103e6b;
LAB_00103fa7:
      iVar1 = emit_load_imm64(param_1,0xf,param_3);
      goto joined_r0x00104079;
    }
    iVar1 = emit_mov(param_1,0xf,0,0x7f,param_3);
    if (iVar1 != 0) goto LAB_00103ec8;
    if ((param_5 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) {
      param_2 = 0xf;
      lVar3 = param_5;
      lVar4 = 0;
      goto LAB_00103e6b;
    }
    iVar1 = emit_load_imm64(param_1,0x10,param_5);
    if (iVar1 != 0) goto LAB_00103ec8;
    lVar4 = 0;
    iVar1 = 0x10;
    iVar6 = 0xf;
  }
LAB_00103f0f:
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,iVar1,0,iVar6,lVar4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0x85;
    return 0;
  }
LAB_00103ec8:
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
    goto LAB_00104200;
  }
  uVar1 = 0xf;
  if ((int)param_3 < 0x7f) {
    uVar1 = param_3;
  }
  if (((param_3 & 0x80) == 0) || (0x7e < (int)param_5)) {
    if (param_2 == 0) {
      param_1[0x26] = 1;
      iVar2 = emit_mov(param_1,uVar1,0,param_5,param_6);
      if (iVar2 != 0) goto LAB_00104200;
      param_1[0x26] = 0;
    }
    else {
      puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,uVar1,0,param_5);
      if (puVar3 == (undefined1 *)0x0) goto LAB_00104200;
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
LAB_00104200:
  return (ulong)*param_1;
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
    if (puVar1 == (undefined1 *)0x0) goto LAB_00104505;
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
LAB_00104505:
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
LAB_00104630:
        return *param_1;
      }
      *puVar1 = 199;
    }
    else {
      puVar1 = (undefined1 *)emit_x86_instruction(param_1,0x241,0x7f,param_6,param_3,param_4);
      if (puVar1 == (undefined1 *)0x0) goto LAB_00104630;
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
    if (puVar1 == (undefined1 *)0x0) goto LAB_00104630;
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
      goto joined_r0x001046a8;
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
joined_r0x001046a8:
  if (cpu_feature_list == 0) {
    get_cpu_features();
  }
  if ((cpu_feature_list & 0x20) != 0) {
    cVar1 = CSWTCH_721[(int)param_2];
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
      goto LAB_00104ba8;
    }
    iVar1 = emit_mov(param_1,param_3,0,param_5,param_6,lVar3);
    param_4 = 0;
    if (iVar1 != 0) goto LAB_00104ba8;
  }
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0,0,param_3,param_4);
  if (puVar2 != (undefined1 *)0x0) {
    puVar2[1] = puVar2[1] | param_2;
    *puVar2 = 0xf7;
    return 0;
  }
LAB_00104ba8:
  return *param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int scan_prefix(long param_1,uint *param_2,byte *param_3,int param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  undefined2 uVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  bool bVar18;
  byte bVar19;
  int iVar20;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *param_5;
  if (iVar4 == 0) {
LAB_00104c48:
    iVar16 = 0;
LAB_00104c50:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar16;
  }
  iVar16 = 0;
  uVar15 = 1;
LAB_00104c00:
  iVar4 = iVar4 + -1;
  *param_5 = iVar4;
  uVar6 = *param_2;
  iVar20 = param_4;
  if (uVar6 < 0xc) {
    if (uVar6 != 0) {
      uVar11 = 1L << ((byte)uVar6 & 0x3f);
      if ((uVar11 & 0x3e) != 0) goto switchD_00104c2a_caseD_17;
      if (((uVar11 & 0x540) != 0) || ((uVar11 & 0xa80) != 0)) goto switchD_00104c2a_caseD_c;
    }
    goto switchD_00104c2a_caseD_e;
  }
  switch(uVar6) {
  case 0xc:
  case 0xd:
    goto switchD_00104c2a_caseD_c;
  default:
    goto switchD_00104c2a_caseD_e;
  case 0xf:
  case 0x10:
    goto switchD_00104c2a_caseD_f;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0xa9:
  case 0xaa:
switchD_00104c2a_caseD_17:
    puVar10 = param_2 + 1;
    break;
  case 0x1d:
switchD_00104c2a_caseD_1d:
    uVar11 = (ulong)param_2[1];
    puVar10 = param_2 + 1;
    bVar18 = false;
    goto LAB_0010501e;
  case 0x1e:
    uVar11 = (ulong)param_2[1];
    puVar10 = param_2 + 1;
    bVar18 = false;
    goto LAB_00104fc0;
  case 0x1f:
  case 0x20:
    param_2 = param_2 + 1;
switchD_00104c2a_caseD_c:
    puVar10 = param_2 + 1;
LAB_00104e92:
    iVar4 = param_4 + 1 + iVar16;
    iVar20 = uVar15 - param_4;
    do {
      *param_3 = 0xff;
      iVar16 = iVar4 - param_4;
      param_4 = param_4 + -1;
      if (param_4 == 0) goto LAB_00104c50;
      param_3 = param_3 + 0x18;
    } while (0 < iVar20 + param_4);
    iVar4 = *param_5;
    uVar15 = 1;
    iVar20 = param_4;
    break;
  case 0x23:
  case 0x24:
  case 0x2b:
    uVar11 = (ulong)param_2[1];
    puVar10 = param_2 + 1;
    bVar18 = true;
    goto LAB_0010501e;
  case 0x25:
  case 0x26:
  case 0x2c:
    param_4 = scan_prefix(param_1,param_2 + 2,param_3,param_4);
    if (param_4 != 0) goto switchD_00104c2a_caseD_1d;
    goto switchD_00104c2a_caseD_e;
  case 0x29:
    uVar15 = param_2[1];
    uVar11 = (ulong)param_2[2];
    puVar10 = param_2 + 2;
    bVar18 = false;
    goto LAB_0010501e;
  case 0x30:
  case 0x31:
  case 0x38:
    uVar11 = (ulong)param_2[1];
    puVar10 = param_2 + 1;
    bVar18 = true;
    goto LAB_00104fc0;
  case 0x32:
  case 0x33:
  case 0x39:
    puVar10 = param_2 + 1;
    param_4 = scan_prefix(param_1,param_2 + 2,param_3,param_4);
    if (param_4 != 0) {
      uVar11 = (ulong)param_2[1];
      bVar18 = false;
      goto LAB_00104fc0;
    }
switchD_00104c2a_caseD_e:
    goto LAB_00104c50;
  case 0x36:
    uVar15 = param_2[1];
    uVar11 = (ulong)param_2[2];
    puVar10 = param_2 + 2;
    bVar18 = false;
LAB_00104fc0:
    iVar4 = *(int *)(param_1 + 0x1e0);
    uVar6 = (uint)uVar11;
    if ((iVar4 == 0) && (*(int *)(param_1 + 0x1e8) == 0)) {
      if ((uVar6 < 0x100) &&
         (bVar19 = *(byte *)(*(long *)(param_1 + 0x90) + uVar11), uVar17 = (ulong)bVar19,
         bVar19 != uVar6)) {
LAB_00105003:
        local_44 = (int)uVar17;
        bVar2 = true;
        goto LAB_0010502c;
      }
    }
    else {
      uVar17 = uVar11;
      if (uVar6 < 0x80) {
        uVar12 = (uint)*(byte *)(*(long *)(param_1 + 0x90) + uVar11);
        if (uVar12 != uVar6) {
          if (iVar4 == 0) {
LAB_0010528c:
            if (*(int *)(param_1 + 0x1e8) == 0) {
              if (uVar6 < 0x100) {
                uVar17 = (ulong)*(byte *)(*(long *)(param_1 + 0x90) + uVar11);
              }
            }
            else {
              if (0x7f < uVar6) {
                puVar5 = &_pcre2_ucd_records_32 +
                         (ulong)*(ushort *)
                                 (&_pcre2_ucd_stage2_32 +
                                 (long)(int)((uint)*(ushort *)
                                                    (&_pcre2_ucd_stage1_32 +
                                                    (long)((int)uVar6 >> 7) * 2) * 0x80 +
                                            (uVar6 & 0x7f)) * 2) * 0xc;
                goto LAB_00105230;
              }
              uVar17 = (ulong)*(byte *)(*(long *)(param_1 + 0x90) + uVar11);
            }
            goto LAB_00105003;
          }
LAB_00105309:
          iVar4 = _pcre2_ord2utf_32(uVar12,&local_44);
          if (iVar4 == 1) {
            uVar11 = (ulong)*puVar10;
            bVar2 = true;
            goto LAB_0010502c;
          }
          goto switchD_00104c2a_caseD_e;
        }
      }
      else if (uVar6 < 0x110000) {
        puVar5 = &_pcre2_ucd_records_32 +
                 (ulong)*(ushort *)
                         (&_pcre2_ucd_stage2_32 +
                         (long)(int)((uint)*(ushort *)
                                            (&_pcre2_ucd_stage1_32 + (long)((int)uVar6 >> 7) * 2) *
                                     0x80 + (uVar6 & 0x7f)) * 2) * 0xc;
        if (*(int *)(&DAT_0013601c +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uint)*(ushort *)
                                               (&_pcre2_ucd_stage1_32 + (long)((int)uVar6 >> 7) * 2)
                                        * 0x80 + (uVar6 & 0x7f)) * 2) * 0xc) != 0) {
          if (iVar4 == 0) goto LAB_0010528c;
          goto LAB_00105304;
        }
      }
      else if (_DAT_00136044 != 0) {
        if (iVar4 == 0) {
          if (*(int *)(param_1 + 0x1e8) == 0) goto LAB_00105003;
          puVar5 = &_pcre2_dummy_ucd_record_32;
LAB_00105230:
          bVar2 = true;
          local_44 = *(int *)(puVar5 + 4) + uVar6;
          goto LAB_0010502c;
        }
        puVar5 = &_pcre2_dummy_ucd_record_32;
LAB_00105304:
        uVar12 = *(int *)(puVar5 + 4) + uVar6;
        goto LAB_00105309;
      }
    }
LAB_0010501e:
    local_44 = 0;
    bVar2 = false;
LAB_0010502c:
    uVar3 = _LC12;
    iVar20 = param_4 - uVar15;
    iVar4 = iVar16 + param_4;
    do {
      param_4 = param_4 + -1;
      bVar19 = *param_3;
      iVar16 = iVar4 - param_4;
      if (bVar19 != 0xff) {
        lVar14 = 0;
        uVar15 = (uint)bVar19;
        iVar7 = (int)uVar11;
        if (uVar15 == 0) {
          *(int *)(param_3 + 4) = iVar7;
          uVar9 = uVar3;
LAB_0010512d:
          *(undefined2 *)param_3 = uVar9;
          if (bVar2) {
            bVar19 = *param_3;
            uVar11 = (ulong)bVar19;
            if (bVar19 != 0xff) {
              if (bVar19 == 0) {
                *(int *)(param_3 + 4) = local_44;
                *(undefined2 *)param_3 = uVar3;
              }
              else {
LAB_0010518e:
                uVar9 = _LC12;
                lVar14 = 0;
                do {
                  if (*(int *)(param_3 + lVar14 * 4 + 4) == local_44) goto LAB_00105098;
                  lVar14 = lVar14 + 1;
                } while ((uint)lVar14 < (uint)uVar11);
                if (4 < (uint)uVar11) goto LAB_001051e0;
                *(int *)(param_3 + uVar11 * 4 + 4) = local_44;
                *(ushort *)param_3 =
                     CONCAT11(param_3[1] + (char)((ushort)uVar9 >> 8),bVar19 + (char)uVar9);
              }
            }
          }
        }
        else {
          do {
            if (*(int *)(param_3 + lVar14 * 4 + 4) == iVar7) {
              if (!bVar2) goto LAB_00105098;
              uVar11 = (ulong)(uint)bVar19;
              goto LAB_0010518e;
            }
            lVar14 = lVar14 + 1;
          } while ((uint)lVar14 < uVar15);
          if (uVar15 < 5) {
            *(int *)(param_3 + (ulong)bVar19 * 4 + 4) = iVar7;
            uVar9 = CONCAT11(param_3[1] + (char)((ushort)uVar3 >> 8),bVar19 + (char)uVar3);
            goto LAB_0010512d;
          }
LAB_001051e0:
          *param_3 = 0xff;
        }
      }
LAB_00105098:
      if (param_4 == 0) goto LAB_00104c50;
      param_3 = param_3 + 0x18;
      if (iVar20 == param_4) goto LAB_00105247;
      uVar11 = (ulong)*puVar10;
    } while( true );
  case 0x43:
  case 0x50:
    uVar15 = param_2[1];
switchD_00104c2a_caseD_f:
    puVar10 = param_2 + 3;
    goto LAB_00104e92;
  case 0x5d:
    uVar15 = param_2[1];
    puVar10 = param_2 + 2;
    break;
  case 0x6e:
  case 0x6f:
    puVar10 = param_2 + 9;
    if (param_2[9] - 0x62 < 0xc) {
      uVar11 = 1L << ((byte)(param_2[9] - 0x62) & 0x3f);
      if ((uVar11 & 0x533) == 0) {
        if (((uVar11 & 0x8c0) == 0) || (uVar15 = param_2[10], 0 < (int)uVar15)) goto LAB_00104cb0;
      }
      else {
        param_4 = scan_prefix(param_1,param_2 + 10,param_3,param_4);
        if (param_4 != 0) goto LAB_00104cb0;
      }
      goto switchD_00104c2a_caseD_e;
    }
LAB_00104cb0:
    uVar3 = _LC12;
    iVar4 = param_4 + 1 + iVar16;
    iVar20 = uVar15 - param_4;
    do {
      if ((char)*(byte *)((long)param_2 + 0x23) < '\0') {
        *param_3 = 0xff;
      }
      else {
        bVar19 = *param_3;
        if (bVar19 != 0xff) {
          uVar15 = 0;
          puVar13 = param_2 + 1;
          do {
            bVar1 = (byte)*puVar13;
            puVar13 = (uint *)((long)puVar13 + 1);
            bVar8 = bVar1;
            uVar6 = uVar15;
            if (bVar1 == 0) {
              uVar15 = uVar15 + 8;
            }
            else {
              do {
                while ((bVar8 & 1) == 0) {
LAB_00104d58:
                  bVar8 = bVar8 >> 1;
                  uVar6 = uVar6 + 1;
                  if (bVar8 == 0) goto LAB_00104dc0;
                }
                uVar12 = (uint)bVar19;
                if (uVar12 == 0xff) {
LAB_00104e15:
                  bVar19 = 0xff;
                  goto LAB_00104d58;
                }
                lVar14 = 0;
                if (uVar12 == 0) {
                  *(uint *)(param_3 + 4) = uVar6;
                  *(undefined2 *)param_3 = uVar3;
                  bVar19 = bVar8 & 1;
                  goto LAB_00104d58;
                }
                do {
                  if (uVar6 == *(uint *)(param_3 + lVar14 * 4 + 4)) goto LAB_00104d58;
                  lVar14 = lVar14 + 1;
                } while ((uint)lVar14 < uVar12);
                if (4 < uVar12) {
                  *param_3 = 0xff;
                  goto LAB_00104e15;
                }
                *(uint *)(param_3 + (ulong)bVar19 * 4 + 4) = uVar6;
                bVar19 = bVar19 + 1;
                param_3[1] = param_3[1] + 1;
                bVar8 = bVar8 >> 1;
                *param_3 = bVar19;
                uVar6 = uVar6 + 1;
              } while (bVar8 != 0);
LAB_00104dc0:
              uVar6 = 0x1f;
              if (bVar1 != 0) {
                for (; bVar1 >> uVar6 == 0; uVar6 = uVar6 - 1) {
                }
              }
              uVar15 = (uVar15 + 0x27) - (uVar6 ^ 0x1f) & 0xfffffff8;
            }
          } while ((puVar13 < puVar10) && (bVar19 != 0xff));
        }
      }
      iVar16 = iVar4 - param_4;
      param_4 = param_4 + -1;
      if (param_4 == 0) goto LAB_00104c50;
      param_3 = param_3 + 0x18;
    } while (0 < iVar20 + param_4);
    iVar20 = param_4;
    if (param_2[9] - 0x62 < 0xc) {
      uVar11 = 1L << ((byte)(param_2[9] - 0x62) & 0x3f);
      if ((uVar11 & 0x103) != 0) goto LAB_00104c50;
      if ((uVar11 & 0x8c0) == 0) {
        if ((uVar11 & 0x430) == 0) goto LAB_00105369;
        iVar4 = *param_5;
        puVar10 = param_2 + 10;
        uVar15 = 1;
      }
      else {
        if (param_2[10] != param_2[0xb]) goto LAB_00104c50;
        iVar4 = *param_5;
        puVar10 = param_2 + 0xc;
        uVar15 = 1;
      }
    }
    else {
LAB_00105369:
      iVar4 = *param_5;
      uVar15 = 1;
    }
    break;
  case 0x70:
    puVar10 = param_2 + param_2[1];
    goto LAB_00104e92;
  case 0x78:
    puVar10 = param_2 + param_2[1];
    break;
  case 0x79:
    goto switchD_00104c2a_caseD_79;
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
    do {
      param_2 = param_2 + param_2[1];
    } while (*param_2 == 0x78);
    goto switchD_00104c2a_caseD_79;
  case 0x85:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
    puVar10 = param_2 + param_2[1];
    if (*puVar10 == 0x78) {
      do {
        param_4 = scan_prefix(param_1,puVar10 + 2,param_3,param_4);
        if (param_4 == 0) goto switchD_00104c2a_caseD_e;
        puVar10 = puVar10 + puVar10[1];
      } while (*puVar10 == 0x78);
      iVar4 = *param_5;
      uVar6 = *param_2;
    }
    if (uVar6 - 0x89 < 2) {
      param_2 = param_2 + 1;
    }
switchD_00104c2a_caseD_79:
    puVar10 = param_2 + 2;
    iVar20 = param_4;
  }
LAB_00104c44:
  param_2 = puVar10;
  param_4 = iVar20;
  if (iVar4 == 0) goto LAB_00104c48;
  goto LAB_00104c00;
LAB_00105247:
  if (bVar18) goto LAB_00104c50;
  iVar4 = *param_5;
  puVar10 = puVar10 + 1;
  uVar15 = 1;
  goto LAB_00104c44;
}



/* WARNING: Type propagation algorithm not settling */

int * set_then_offsets(long param_1,int *param_2,undefined1 *param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int *piVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined1 *puVar23;
  
  piVar6 = param_2;
  do {
    piVar6 = piVar6 + (uint)piVar6[1];
  } while (*piVar6 == 0x78);
  piVar6 = piVar6 + 2;
  iVar18 = *param_2;
  iVar19 = param_2[(uint)param_2[1]];
  piVar7 = (int *)next_opcode();
  if (iVar18 - 0x7fU < 6) {
    param_3 = (undefined1 *)0x0;
LAB_00105503:
    if (iVar19 == 0x78) {
      if (*piVar7 == 0x7d) {
        piVar7 = piVar7 + 2;
      }
      else if (*piVar7 == 0x7e) {
        piVar7 = piVar7 + 3;
      }
      bVar16 = true;
      param_3 = (undefined1 *)
                (((long)piVar7 - *(long *)(param_1 + 0x10) >> 2) + *(long *)(param_1 + 0x30));
      goto joined_r0x00105539;
    }
  }
  else if ((iVar18 != 0x8b) && (iVar18 != 0x90)) goto LAB_00105503;
  bVar16 = false;
joined_r0x00105539:
  if (piVar6 <= piVar7) {
    return piVar6;
  }
  iVar18 = *piVar7;
  do {
    uVar22 = iVar18 - 0x7f;
    piVar8 = piVar7;
    if (uVar22 < 0x12) {
      do {
        piVar8 = piVar8 + (uint)piVar8[1];
      } while (*piVar8 == 0x78);
      piVar8 = piVar8 + 2;
      iVar19 = piVar7[(uint)piVar7[1]];
      piVar7 = (int *)next_opcode();
      if (uVar22 < 6) {
        puVar13 = (undefined1 *)0x0;
LAB_00105653:
        if (iVar19 != 0x78) goto LAB_001055d9;
        if (*piVar7 == 0x7d) {
          piVar7 = piVar7 + 2;
        }
        else if (*piVar7 == 0x7e) {
          piVar7 = piVar7 + 3;
        }
        bVar17 = true;
        puVar13 = (undefined1 *)
                  (((long)piVar7 - *(long *)(param_1 + 0x10) >> 2) + *(long *)(param_1 + 0x30));
      }
      else {
        puVar13 = param_3;
        if ((iVar18 != 0x8b) && (iVar18 != 0x90)) goto LAB_00105653;
LAB_001055d9:
        bVar17 = false;
      }
      while (piVar7 < piVar8) {
        iVar18 = *piVar7;
        uVar22 = iVar18 - 0x7f;
        piVar15 = piVar7;
        if (uVar22 < 0x12) {
          do {
            piVar15 = piVar15 + (uint)piVar15[1];
          } while (*piVar15 == 0x78);
          iVar19 = piVar7[(uint)piVar7[1]];
          piVar9 = (int *)next_opcode();
          if (uVar22 < 6) {
            puVar14 = (undefined1 *)0x0;
LAB_00105752:
            if (iVar19 != 0x78) goto LAB_001056db;
            if (*piVar9 == 0x7d) {
              piVar9 = piVar9 + 2;
            }
            else if (*piVar9 == 0x7e) {
              piVar9 = piVar9 + 3;
            }
            bVar5 = true;
            puVar14 = (undefined1 *)
                      (((long)piVar9 - *(long *)(param_1 + 0x10) >> 2) + *(long *)(param_1 + 0x30));
          }
          else {
            puVar14 = puVar13;
            if ((iVar18 != 0x8b) && (iVar18 != 0x90)) goto LAB_00105752;
LAB_001056db:
            bVar5 = false;
          }
          while (piVar7 = piVar15 + 2, piVar9 < piVar15 + 2) {
            iVar18 = *piVar9;
            uVar22 = iVar18 - 0x7f;
            piVar7 = piVar9;
            if (uVar22 < 0x12) {
              do {
                piVar7 = piVar7 + (uint)piVar7[1];
              } while (*piVar7 == 0x78);
              piVar7 = piVar7 + 2;
              iVar19 = piVar9[(uint)piVar9[1]];
              piVar10 = (int *)next_opcode(param_1);
              if (uVar22 < 6) {
                puVar21 = (undefined1 *)0x0;
                if (iVar19 != 0x78) goto LAB_00105c83;
LAB_00105be5:
                if (*piVar10 == 0x7d) {
                  piVar10 = piVar10 + 2;
                }
                else if (*piVar10 == 0x7e) {
                  piVar10 = piVar10 + 3;
                }
                bVar4 = true;
                puVar21 = (undefined1 *)
                          (((long)piVar10 - *(long *)(param_1 + 0x10) >> 2) +
                          *(long *)(param_1 + 0x30));
              }
              else {
                puVar21 = puVar14;
                if ((iVar18 == 0x8b) || (iVar18 == 0x90)) {
                  bVar4 = false;
                }
                else {
                  if (iVar19 == 0x78) goto LAB_00105be5;
LAB_00105c83:
                  bVar4 = false;
                }
              }
              piVar9 = piVar7;
              if (piVar10 < piVar7) {
                do {
                  iVar18 = *piVar10;
                  uVar22 = iVar18 - 0x7f;
                  piVar11 = piVar10;
                  if (uVar22 < 0x12) {
                    do {
                      piVar11 = piVar11 + (uint)piVar11[1];
                    } while (*piVar11 == 0x78);
                    piVar11 = piVar11 + 2;
                    iVar19 = piVar10[(uint)piVar10[1]];
                    piVar9 = (int *)next_opcode();
                    if (uVar22 < 6) {
                      puVar20 = (undefined1 *)0x0;
LAB_00105933:
                      if (iVar19 != 0x78) goto LAB_001058ad;
                      if (*piVar9 == 0x7d) {
                        piVar9 = piVar9 + 2;
                      }
                      else if (*piVar9 == 0x7e) {
                        piVar9 = piVar9 + 3;
                      }
                      bVar3 = true;
                      puVar20 = (undefined1 *)
                                (((long)piVar9 - *(long *)(param_1 + 0x10) >> 2) +
                                *(long *)(param_1 + 0x30));
                    }
                    else {
                      puVar20 = puVar21;
                      if ((iVar18 != 0x8b) && (iVar18 != 0x90)) goto LAB_00105933;
LAB_001058ad:
                      bVar3 = false;
                    }
                    while (piVar9 < piVar11) {
                      iVar18 = *piVar9;
                      uVar22 = iVar18 - 0x7f;
                      piVar10 = piVar9;
                      if (uVar22 < 0x12) {
                        do {
                          piVar10 = piVar10 + (uint)piVar10[1];
                        } while (*piVar10 == 0x78);
                        iVar19 = piVar9[(uint)piVar9[1]];
                        piVar12 = (int *)next_opcode(param_1);
                        if (uVar22 < 6) {
                          puVar23 = (undefined1 *)0x0;
LAB_00105b03:
                          if (iVar19 != 0x78) goto LAB_001059bd;
                          if (*piVar12 == 0x7d) {
                            piVar12 = piVar12 + 2;
                          }
                          else if (*piVar12 == 0x7e) {
                            piVar12 = piVar12 + 3;
                          }
                          bVar2 = true;
                          puVar23 = (undefined1 *)
                                    (((long)piVar12 - *(long *)(param_1 + 0x10) >> 2) +
                                    *(long *)(param_1 + 0x30));
                        }
                        else {
                          puVar23 = puVar20;
                          if ((iVar18 != 0x8b) && (iVar18 != 0x90)) goto LAB_00105b03;
LAB_001059bd:
                          bVar2 = false;
                        }
                        while (piVar9 = piVar10 + 2, piVar12 < piVar10 + 2) {
                          iVar18 = *piVar12;
                          if (iVar18 - 0x7fU < 0x12) {
                            piVar12 = (int *)set_then_offsets(param_1,piVar12,puVar23);
                          }
                          else if (iVar18 == 0x78) {
                            if (!bVar2) goto LAB_001059f1;
                            piVar9 = piVar12 + 2;
                            if (*piVar9 == 0x7d) {
                              piVar12 = piVar12 + 4;
                            }
                            else {
                              piVar1 = piVar12 + 2;
                              piVar12 = piVar12 + 5;
                              if (*piVar9 != 0x7e) {
                                piVar12 = piVar1;
                              }
                            }
                            puVar23 = (undefined1 *)
                                      (((long)piVar12 - *(long *)(param_1 + 0x10) >> 2) +
                                      *(long *)(param_1 + 0x30));
                          }
                          else {
                            if ((iVar18 - 0x9fU < 2) && (puVar23 != (undefined1 *)0x0)) {
                              *puVar23 = 1;
                            }
LAB_001059f1:
                            piVar12 = (int *)next_opcode(param_1);
                          }
                        }
                      }
                      else if (iVar18 == 0x78) {
                        if (!bVar3) goto LAB_001058fe;
                        if (piVar9[2] == 0x7d) {
                          piVar10 = piVar9 + 4;
                        }
                        else {
                          piVar10 = piVar9 + 5;
                          if (piVar9[2] != 0x7e) {
                            piVar10 = piVar9 + 2;
                          }
                        }
                        puVar20 = (undefined1 *)
                                  (*(long *)(param_1 + 0x30) +
                                  ((long)piVar10 - *(long *)(param_1 + 0x10) >> 2));
                        piVar9 = piVar10;
                      }
                      else {
                        if ((iVar18 - 0x9fU < 2) && (puVar20 != (undefined1 *)0x0)) {
                          *puVar20 = 1;
                        }
LAB_001058fe:
                        piVar9 = (int *)next_opcode(param_1);
                      }
                    }
                  }
                  else {
                    if (iVar18 == 0x78) {
                      if (bVar4) {
                        if (piVar10[2] == 0x7d) {
                          piVar11 = piVar10 + 4;
                        }
                        else {
                          piVar11 = piVar10 + 5;
                          if (piVar10[2] != 0x7e) {
                            piVar11 = piVar10 + 2;
                          }
                        }
                        puVar21 = (undefined1 *)
                                  (*(long *)(param_1 + 0x30) +
                                  ((long)piVar11 - *(long *)(param_1 + 0x10) >> 2));
                        goto LAB_00105836;
                      }
                    }
                    else if ((iVar18 - 0x9fU < 2) && (puVar21 != (undefined1 *)0x0)) {
                      *puVar21 = 1;
                    }
                    piVar11 = (int *)next_opcode(param_1);
                  }
LAB_00105836:
                  piVar10 = piVar11;
                  piVar9 = piVar7;
                } while (piVar11 < piVar7);
              }
            }
            else if (iVar18 == 0x78) {
              if (!bVar5) goto LAB_00105726;
              if (piVar9[2] == 0x7d) {
                piVar7 = piVar9 + 4;
              }
              else {
                piVar7 = piVar9 + 5;
                if (piVar9[2] != 0x7e) {
                  piVar7 = piVar9 + 2;
                }
              }
              puVar14 = (undefined1 *)
                        (((long)piVar7 - *(long *)(param_1 + 0x10) >> 2) + *(long *)(param_1 + 0x30)
                        );
              piVar9 = piVar7;
            }
            else {
              if ((iVar18 - 0x9fU < 2) && (puVar14 != (undefined1 *)0x0)) {
                *puVar14 = 1;
              }
LAB_00105726:
              piVar9 = (int *)next_opcode(param_1);
            }
          }
        }
        else if (iVar18 == 0x78) {
          if (!bVar17) goto LAB_00105627;
          if (piVar7[2] == 0x7d) {
            piVar15 = piVar7 + 4;
          }
          else {
            piVar15 = piVar7 + 5;
            if (piVar7[2] != 0x7e) {
              piVar15 = piVar7 + 2;
            }
          }
          puVar13 = (undefined1 *)
                    (((long)piVar15 - *(long *)(param_1 + 0x10) >> 2) + *(long *)(param_1 + 0x30));
          piVar7 = piVar15;
        }
        else {
          if ((iVar18 - 0x9fU < 2) && (puVar13 != (undefined1 *)0x0)) {
            *puVar13 = 1;
          }
LAB_00105627:
          piVar7 = (int *)next_opcode(param_1);
        }
      }
    }
    else {
      if (iVar18 == 0x78) {
        if (bVar16) {
          if (piVar7[2] == 0x7d) {
            piVar8 = piVar7 + 4;
          }
          else {
            piVar8 = piVar7 + 5;
            if (piVar7[2] != 0x7e) {
              piVar8 = piVar7 + 2;
            }
          }
          param_3 = (undefined1 *)
                    (((long)piVar8 - *(long *)(param_1 + 0x10) >> 2) + *(long *)(param_1 + 0x30));
          goto LAB_0010557a;
        }
      }
      else if ((iVar18 - 0x9fU < 2) && (param_3 != (undefined1 *)0x0)) {
        *param_3 = 1;
      }
      piVar8 = (int *)next_opcode(param_1);
    }
LAB_0010557a:
    if (piVar6 <= piVar8) {
      return piVar6;
    }
    iVar18 = *piVar8;
    piVar7 = piVar8;
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
              goto LAB_00105f9d;
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
          goto LAB_00105fb4;
        }
      }
      else if ((param_8 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
        param_7 = (param_3 == 0xf) + 0xf;
LAB_00105f9d:
        iVar1 = emit_load_imm64(param_1,param_7,param_8);
        goto joined_r0x0010602b;
      }
LAB_00105e2b:
      lVar3 = emit_x86_instruction(param_1,0x11,0x7f,param_8,param_3,param_4);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | (byte)param_2;
        return 0;
      }
      goto LAB_00105fb4;
    }
    if (param_3 < 0x7f) {
LAB_00105f24:
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_3,param_4,param_7,param_8);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = uVar5;
        return 0;
      }
      goto LAB_00105fb4;
    }
    if (0x7e < param_7) {
      iVar1 = emit_mov(param_1,0xf,0,param_7,param_8);
      if (iVar1 != 0) goto LAB_00105fb4;
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
            if (lVar3 == 0) goto LAB_00105fb4;
            *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | (byte)param_2;
          }
          else {
            iVar1 = emit_load_imm64(param_1,0x10,param_8);
            if ((iVar1 != 0) ||
               (puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0x10,0,0xf,0),
               puVar2 == (undefined1 *)0x0)) goto LAB_00105fb4;
            *puVar2 = uVar6;
          }
        }
        else {
          puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_7,param_8);
          if (puVar2 == (undefined1 *)0x0) goto LAB_00105fb4;
          *puVar2 = uVar5;
        }
        puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_3,param_4);
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0x89;
          return 0;
        }
      }
      goto LAB_00105fb4;
    }
    iVar1 = emit_mov(param_1,param_3,0,param_5,param_6);
    if (iVar1 != 0) goto LAB_00105fb4;
    if (param_7 != 0x7f) {
      param_4 = 0;
      goto LAB_00105f24;
    }
    if ((param_8 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) {
      param_4 = 0;
      goto LAB_00105e2b;
    }
    param_7 = (param_3 == 0xf) + 0xf;
    iVar1 = emit_load_imm64(param_1,param_7,param_8);
    param_4 = 0;
joined_r0x0010602b:
    if (iVar1 != 0) goto LAB_00105fb4;
    param_8 = 0;
  }
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_7,param_8,param_3,param_4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = uVar6;
    return 0;
  }
LAB_00105fb4:
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
              goto LAB_00106761;
            }
            uVar4 = 0x48;
          }
LAB_001066d5:
          iVar1 = emit_do_imm32(param_1,uVar4,param_2 >> 0x18,param_6);
          if (iVar1 == 0) {
            return 0;
          }
          goto LAB_00106648;
        }
      }
      else {
        param_6 = param_8;
        if ((param_8 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
          param_5 = (param_3 == 0xf) + 0xf;
LAB_00106761:
          iVar1 = emit_load_imm64(param_1,param_5,param_6);
          goto joined_r0x001064c9;
        }
      }
LAB_00106514:
      lVar3 = emit_x86_instruction(param_1,0x11,0x7f,param_6,param_3,param_4);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | (byte)param_2;
        return 0;
      }
      goto LAB_00106648;
    }
    if (param_3 < 0x7f) {
LAB_0010666b:
      puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_3,param_4,param_7,param_8);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = uVar5;
        return 0;
      }
      goto LAB_00106648;
    }
    param_6 = param_8;
    param_5 = param_7;
    if (0x7e < param_7) {
LAB_001063d5:
      iVar1 = emit_mov(param_1,0xf,0,param_5,param_6);
      if (iVar1 != 0) goto LAB_00106648;
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
              goto LAB_00106761;
            }
          }
          else {
            uVar4 = 0;
          }
          goto LAB_001066d5;
        }
      }
      else if ((param_6 + 0x80000000U >> 0x20 != 0) && (param_1[0x26] == 0)) {
        param_5 = (param_3 == 0xf) + 0xf;
        goto LAB_00106761;
      }
      goto LAB_00106514;
    }
    param_8 = param_6;
    param_7 = param_5;
    if (param_3 < 0x7f) goto LAB_0010666b;
    if (0x7e < param_5) goto LAB_001063d5;
  }
  else {
    if (0x7e < param_3) {
      iVar1 = emit_mov(param_1,0xf,0,param_5,param_6);
      if (iVar1 == 0) {
        if (param_7 == 0x7f) {
          if ((param_8 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) {
            lVar3 = emit_x86_instruction(param_1,0x11,0x7f,param_8,0xf,0);
            if (lVar3 == 0) goto LAB_00106648;
            *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | (byte)param_2;
          }
          else {
            iVar1 = emit_load_imm64(param_1,0x10,param_8);
            if ((iVar1 != 0) ||
               (puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0x10,0,0xf,0),
               puVar2 == (undefined1 *)0x0)) goto LAB_00106648;
            *puVar2 = uVar6;
          }
        }
        else {
          puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_7,param_8);
          if (puVar2 == (undefined1 *)0x0) goto LAB_00106648;
          *puVar2 = uVar5;
        }
        puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_3,param_4);
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0x89;
          return 0;
        }
      }
      goto LAB_00106648;
    }
    iVar1 = emit_mov(param_1,param_3,0,param_5,param_6);
    if (iVar1 != 0) goto LAB_00106648;
    if (param_7 != 0x7f) {
      param_4 = 0;
      goto LAB_0010666b;
    }
    if ((param_8 + 0x80000000U >> 0x20 == 0) || (param_1[0x26] != 0)) {
      param_4 = 0;
      param_6 = param_8;
      goto LAB_00106514;
    }
    param_5 = (param_3 == 0xf) + 0xf;
    iVar1 = emit_load_imm64(param_1,param_5,param_8);
    param_4 = 0;
joined_r0x001064c9:
    if (iVar1 != 0) goto LAB_00106648;
    param_6 = 0;
  }
  puVar2 = (undefined1 *)emit_x86_instruction(param_1,1,param_5,param_6,param_3,param_4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = uVar6;
    return 0;
  }
LAB_00106648:
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
        goto joined_r0x00106bb7;
      }
      if (0x7e < (int)param_3) {
        iVar1 = emit_mov(param_1,0xf,0);
        if ((iVar1 != 0) ||
           (lVar4 = emit_x86_instruction(param_1,0x21,param_7,param_8,0xf,0), lVar4 == 0))
        goto LAB_00106b90;
        *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_2;
        goto LAB_00106b3a;
      }
      iVar1 = emit_mov(param_1,param_3,0,param_5,param_6,lVar4);
      param_4 = 0;
      if (iVar1 != 0) goto LAB_00106b90;
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
      if (iVar1 != 0) goto LAB_00106b90;
      iVar1 = emit_mov(param_1,4,0,param_7,param_8);
joined_r0x00106bb7:
      if ((iVar1 != 0) || (lVar4 = emit_x86_instruction(param_1,0x21,4,0,0xf,0), lVar4 == 0))
      goto LAB_00106b90;
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
        goto LAB_00106b90;
      }
      iVar1 = emit_mov(param_1,0xf,0);
      if (iVar1 != 0) goto LAB_00106b90;
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
      goto LAB_00106b90;
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
LAB_00106b3a:
    puVar3 = (undefined1 *)emit_x86_instruction(param_1,1,0xf,0,param_3,param_4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0x89;
      return 0;
    }
  }
LAB_00106b90:
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
  if (uVar1 != 0) goto switchD_00106e43_default;
  param_1[0x26] = param_2 & 0x100;
  if (0xf < (param_2 & 0xffff04ff) - 0x40) goto switchD_00106e43_default;
  uVar8 = (ulong)param_3;
  uVar2 = (uint)param_5;
  uVar7 = param_5 & 0xffffffff;
  switch(param_2 & 0xffff04ff) {
  case 0x40:
    if (((param_2 & 64000) != 0) ||
       (iVar3 = emit_lea_binary(param_1,uVar8,param_4,uVar7,param_6,uVar4,param_8), iVar3 == 4)) {
      param_5 = param_5 & 0xffffffff;
      uVar9 = 0x5030100;
      goto LAB_00106f34;
    }
    goto LAB_00107000;
  case 0x41:
    uVar9 = 0x15131110;
    goto LAB_00106f34;
  case 0x42:
    if ((uVar2 == 0x7f) && (param_6 == 0)) {
      uVar9 = 0x18;
      param_5 = uVar4;
LAB_00107053:
      uVar4 = emit_unary(param_1,uVar9,uVar8,param_4,param_5,param_8);
      return uVar4;
    }
    if ((param_2 & 64000) != 0) {
LAB_001072c8:
      param_5 = param_5 & 0xffffffff;
      uVar9 = 0x2d2b2928;
LAB_00107084:
      uVar4 = emit_non_cum_binary(param_1,uVar9,uVar8,param_4,param_5,param_6);
      return uVar4;
    }
    if (param_7 == 0x7f) {
      iVar3 = emit_lea_binary(param_1,uVar8,param_4,uVar7,param_6,0x7f,-param_8);
      if (iVar3 == 4) goto LAB_001072c8;
    }
    else {
      if ((0x7e < (int)param_3) || (param_3 != param_7)) goto LAB_001072c8;
      iVar3 = emit_non_cum_binary(param_1,0x2d2b2928,uVar8,0,uVar8,0,uVar7,param_6);
      if (iVar3 == 0) {
        param_8 = 0;
        param_4 = 0;
        uVar9 = 0x18;
        param_5 = uVar8;
        goto LAB_00107053;
      }
    }
    goto LAB_00107000;
  case 0x43:
    uVar9 = 0x1d1b1918;
    goto LAB_00107084;
  case 0x44:
    uVar12 = 0xf;
    if ((int)param_3 < 0x7f) {
      uVar12 = uVar8;
    }
    uVar11 = (uint)uVar12;
    if ((uVar2 == uVar11) && (uVar10 = param_8, param_7 != 0x7f)) {
LAB_001070c6:
      puVar5 = (undefined2 *)emit_x86_instruction(param_1,2,uVar12,0,uVar4,uVar10);
      if (puVar5 == (undefined2 *)0x0) {
        uVar2 = *param_1;
        if (uVar2 != 0) break;
      }
      else {
        *puVar5 = 0xaf0f;
      }
LAB_001070ee:
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
      if (uVar2 != 0x7f) goto LAB_001070c6;
LAB_001071f2:
      uVar4 = param_8;
      if (param_7 == 0x7f) {
        uVar4 = 0;
        iVar3 = emit_mov(param_1,uVar12,0,0x7f,param_8);
        param_7 = uVar11;
        if (iVar3 != 0) goto LAB_00107000;
      }
      if (param_6 + 0x80 < 0x100) {
        puVar6 = (undefined1 *)emit_x86_instruction(param_1,1,uVar12,0,param_7,uVar4);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x6b;
          param_6 = param_6 & 0xff;
LAB_00107410:
          iVar3 = emit_byte(param_1,param_6);
          if (iVar3 == 0) goto LAB_001070ee;
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
            goto LAB_001070ee;
          }
        }
      }
      else {
        param_8 = param_6;
        if ((uVar11 == param_7) || (iVar3 = emit_mov(param_1,uVar12,0,param_7,uVar4), iVar3 == 0)) {
LAB_00107258:
          iVar3 = emit_load_imm64(param_1,0x10,param_8);
          param_8 = 0;
          uVar4 = 0x10;
          goto joined_r0x0010735a;
        }
      }
    }
    else {
      if (uVar2 == 0x7f) goto LAB_001071f2;
      if (param_7 == 0x7f) {
        if (param_8 + 0x80 < 0x100) {
          puVar6 = (undefined1 *)emit_x86_instruction(param_1,1,uVar12,0,uVar7,param_6);
          if (puVar6 == (undefined1 *)0x0) goto LAB_00107000;
          *puVar6 = 0x6b;
          param_6 = param_8 & 0xff;
          goto LAB_00107410;
        }
        if (param_8 + 0x80000000 >> 0x20 != 0) {
          if ((uVar2 != uVar11) && (iVar3 = emit_mov(param_1,uVar12,0,uVar7,param_6), iVar3 != 0))
          goto LAB_00107000;
          goto LAB_00107258;
        }
        puVar6 = (undefined1 *)emit_x86_instruction(param_1,1,uVar12,0,uVar7,param_6);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x69;
          puVar6 = (undefined1 *)ensure_buf(param_1,5);
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = 4;
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 4;
            *(int *)(puVar6 + 1) = (int)param_8;
            goto LAB_001070ee;
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
joined_r0x0010735a:
        uVar10 = param_8;
        if (iVar3 == 0) goto LAB_001070c6;
      }
    }
LAB_00107000:
    uVar2 = *param_1;
    break;
  case 0x45:
    uVar9 = 0x25232120;
    goto LAB_00106f34;
  case 0x46:
    uVar9 = 0xd0b0908;
    goto LAB_00106f34;
  case 0x47:
    if (((param_2 & 64000) == 0) &&
       (((param_7 == 0x7f && (uVar12 = param_6, param_8 == 0xffffffffffffffff)) ||
        ((uVar2 == 0x7f && (param_5 = uVar4, uVar12 = param_8, param_6 == 0xffffffffffffffff)))))) {
      param_8 = uVar12;
      uVar9 = 0x10;
      goto LAB_00107053;
    }
    uVar9 = 0x35333130;
    param_5 = uVar7;
LAB_00106f34:
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
switchD_00106e43_default:
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
      param_2 = *(uint *)(CSWTCH_843 + (ulong)(param_2 - 2) * 4);
      uVar4 = 0x7f;
      uVar3 = param_6;
      param_6 = param_4;
      goto LAB_0010757a;
    }
    uVar4 = 0x7f;
    uVar1 = 0;
  }
  else {
LAB_0010757a:
    param_4 = param_6;
    param_6 = uVar3;
    uVar1 = param_2 & 0x100;
    if ((1 < (int)param_2) && (uVar5 = (param_2 & 0xfe) << 10, (uVar5 & 0x30000) != 0)) {
      iVar2 = sljit_emit_op2(param_1,uVar1 | uVar5 | 0x42,0xf,0,param_3,param_6,uVar4,param_4);
      goto LAB_001075ae;
    }
  }
  param_1[0x26] = uVar1;
  iVar2 = emit_cmp_binary(param_1,param_3,param_6,uVar4,param_4);
  uVar4 = extraout_RDX;
LAB_001075ae:
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
              goto LAB_0010785a;
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
LAB_0010785a:
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
            goto LAB_00107708;
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
LAB_00107708:
      lVar10 = 10;
      param_4 = 0;
    }
    else {
      lVar10 = (long)*(int *)(param_1 + 0x1a);
      param_4 = param_4 ^ 1;
    }
    uVar6 = sljit_emit_cmp(piVar4,param_4,1,0,0x7f,lVar10);
    iVar3 = *piVar4;
    goto joined_r0x00107932;
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
        goto LAB_0010791e;
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
LAB_0010791e:
  uVar6 = sljit_emit_jump(piVar4,param_4);
  iVar3 = *piVar4;
joined_r0x00107932:
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
  cVar1 = CSWTCH_721[param_4] + '\x10';
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
  if (uVar3 != 0) goto LAB_00107d74;
  param_1[0x26] = 0;
  if ((param_5 < 0x7f) && (param_3 == param_5)) {
    if (param_2 - 0x21U < 6) {
LAB_00107d44:
                    /* WARNING: Could not recover jumptable at 0x00107d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&DAT_00130b7c + *(int *)(&DAT_00130b7c + (ulong)(param_2 - 0x21) * 4)))
                        (&DAT_00130b7c,
                         &DAT_00130b7c + *(int *)(&DAT_00130b7c + (ulong)(param_2 - 0x21) * 4));
      return uVar2;
    }
    goto LAB_00107d74;
  }
  if (param_5 != 0x7f) {
    if (param_2 - 0x21U < 6) goto LAB_00107d44;
switchD_00107d9b_default:
    iVar1 = emit_mov(param_1,param_3,param_4,param_5,param_6);
    goto joined_r0x00107e0b;
  }
  switch(param_2) {
  case 0x21:
    iVar1 = emit_mov_byte_constprop_0(param_1,0,param_3,param_4,0x7f,param_6 & 0xff);
    goto joined_r0x00107de3;
  case 0x22:
    iVar1 = emit_mov_byte_constprop_0(param_1,1,param_3,param_4,0x7f,(long)(char)param_6);
joined_r0x00107de3:
    if (iVar1 == 0) goto LAB_00107d74;
    goto LAB_00107dc0;
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
    goto switchD_00107d9b_default;
  }
joined_r0x00107e0b:
  if (iVar1 != 0) {
LAB_00107dc0:
    uVar3 = *param_1;
  }
LAB_00107d74:
  return (ulong)uVar3;
}



void match_once_common(undefined8 *param_1,int param_2,int param_3,int param_4,uint param_5,
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
          if (iVar2 == 4) goto LAB_00108061;
          goto LAB_00108090;
        }
        if (param_6 != 0) goto LAB_001080a8;
        goto LAB_001081b0;
      }
      if (param_6 == 0) {
        return;
      }
      if (*piVar1 == 0) {
        piVar1[0x26] = 0;
        iVar2 = emit_lea_binary(piVar1,0xc,0,0xc,0,0x7f,8);
        lVar3 = 8;
        if (iVar2 == 4) {
LAB_00108061:
          emit_cum_binary(piVar1,0x5030100,0xc,0,0xc,0,0x7f,lVar3);
          goto LAB_00108090;
        }
      }
LAB_00107f77:
      sljit_emit_op1(piVar1,0x20,1,0,0x8c,0xfffffffffffffff8);
      goto LAB_00107fca;
    }
    sljit_emit_op1(piVar1,0x20,0xc,0,0x8e,(long)param_4);
LAB_00108090:
    if (param_6 != 0) {
      if ((param_2 == 0x79) && ((param_5 & 1) == 0)) goto LAB_00107f77;
LAB_001080a8:
      sljit_emit_op1(piVar1,0x20,1,0,0x8c,0xfffffffffffffff0);
      if (param_2 == 0x7a) {
        sljit_emit_op1(piVar1,0x20,4,0,0x8c,0xfffffffffffffff8);
      }
      else {
        if (param_2 != 0x7b) goto LAB_00107fca;
        sljit_emit_op1(piVar1,0x20,0x8e,(long)param_4,0x8c,0xfffffffffffffff8);
      }
      if (param_6 == 0) {
        return;
      }
      goto LAB_00107fca;
    }
LAB_001081b0:
    if (param_2 == 0x7a) {
      uVar6 = 0xfffffffffffffff8;
      uVar5 = 0x8c;
      lVar3 = 0;
      uVar4 = 4;
      goto LAB_00107fdc;
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
      goto LAB_00107fdc;
    }
    sljit_emit_op1(piVar1,0x20,1,0,0x8c,0xfffffffffffffff8);
    if (param_2 == 0x7a) {
      sljit_emit_op1(piVar1,0x20,4,0,0x8c,0);
    }
LAB_00107fca:
    param_4 = *(int *)((long)param_1 + 100);
    uVar6 = 0;
    uVar5 = 1;
  }
  lVar3 = (long)param_4;
  uVar4 = 0x8e;
LAB_00107fdc:
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



uint * byte_sequence_compare
                 (undefined8 *param_1,int param_2,uint *param_3,int *param_4,undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  piVar3 = (int *)*param_1;
  if (param_2 == 0) {
LAB_00108520:
    bVar14 = false;
    uVar13 = 0;
  }
  else {
    uVar13 = *param_3;
    if ((*(int *)(param_1 + 0x3c) == 0) && (*(int *)(param_1 + 0x3d) == 0)) {
      if ((uVar13 < 0x100) && (uVar13 != *(byte *)(param_1[0x12] + (ulong)uVar13)))
      goto LAB_00108705;
      goto LAB_00108520;
    }
    if (uVar13 < 0x80) {
      if (*(byte *)(param_1[0x12] + (ulong)uVar13) == uVar13) goto LAB_00108520;
    }
    else {
      puVar8 = &_pcre2_dummy_ucd_record_32;
      if (uVar13 < 0x110000) {
        puVar8 = &_pcre2_ucd_records_32 +
                 (ulong)*(ushort *)
                         (&_pcre2_ucd_stage2_32 +
                         (long)(int)((uint)*(ushort *)
                                            (&_pcre2_ucd_stage1_32 + (long)((int)uVar13 >> 7) * 2) *
                                     0x80 + (uVar13 & 0x7f)) * 2) * 0xc;
      }
      if (*(int *)(puVar8 + 4) == 0) goto LAB_00108520;
    }
LAB_00108705:
    uVar7 = char_get_othercase_bit_isra_0();
    bVar14 = (uVar7 & 0xfffffe00) == 0;
    if ((uVar7 & 0x100) == 0) {
      uVar13 = uVar7 & 0xff;
      bVar14 = bVar14 && (uVar7 & 0xff) != 0;
    }
    else {
      uVar13 = (uVar7 & 0xff) << 8;
      bVar14 = bVar14 && (uVar7 & 0xff) != 0;
    }
  }
  iVar6 = param_4[1];
  if (iVar6 == -1) {
    sljit_emit_op1(piVar3,0x25,1,0,0x82,(long)-*param_4);
    iVar12 = *param_4;
    param_4[1] = 4;
    *param_4 = iVar12 + -4;
    if (0 < iVar12 + -4) {
      iVar6 = 4;
      goto LAB_00108676;
    }
LAB_0010854b:
    iVar12 = 1;
  }
  else {
    iVar12 = *param_4;
    *param_4 = iVar12 + -4;
    if (0 < iVar12 + -4) {
LAB_00108676:
      sljit_emit_op1(piVar3,0x25,iVar6,0,0x82,(long)(4 - iVar12));
      iVar6 = param_4[1];
    }
    iVar12 = 4;
    if (iVar6 != 1) goto LAB_0010854b;
  }
  param_4[1] = iVar12;
  if (bVar14) {
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      emit_cum_binary(piVar3,0xd0b0908,iVar12,0,iVar12,0,0x7f,uVar13);
      iVar12 = param_4[1];
    }
    uVar13 = uVar13 | *param_3;
  }
  else {
    uVar13 = *param_3;
  }
  uVar9 = sljit_emit_cmp(piVar3,1,iVar12,0,0x7f,uVar13);
  if (*piVar3 == 0) {
    lVar4 = *(long *)(piVar3 + 0x18);
    lVar5 = *(long *)(lVar4 + 8);
    uVar1 = lVar5 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar4 + 8) = uVar1;
      puVar11 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    }
    else {
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar3 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar10 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_00108622;
      }
      *puVar10 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar10;
      puVar11 = puVar10 + 2;
      puVar10[1] = 0x10;
    }
    uVar2 = *param_5;
    *puVar11 = uVar9;
    puVar11[1] = uVar2;
    *param_5 = puVar11;
  }
LAB_00108622:
  return param_3 + 1;
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
    emit_shift_with_flags(piVar2,0x38,0,3,0,3,0,0x7f,2);
  }
  sljit_emit_op1(piVar2,0x20,0x82,0x68,3,0);
  sljit_emit_op2(piVar2,0x42,0xd,0,0xd,0,0xc,0);
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_shift_with_flags(piVar2,0x38,0,0xd,0,0xd,0,0x7f,2);
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
  sljit_emit_op2(piVar1,0x42,1,0,0x8d,0x10,0x7f,4);
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
LAB_00108dc6:
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
      goto LAB_00108dc6;
    }
  }
  return;
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
LAB_00108ee8:
    if (*(int *)(param_1 + 0x14) == 2) {
      sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xb),0x7f,0);
      goto LAB_00108e80;
    }
  }
  else {
    lVar9 = 0;
    if (*(int *)(param_1 + 0x14) == 2) {
      lVar9 = sljit_emit_cmp(piVar3,0,0x8e,(long)*(int *)((long)param_1 + 0x54),0x7f,
                             0xffffffffffffffff);
      goto LAB_00108ee8;
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
          goto LAB_00108e80;
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
LAB_00108e80:
  if ((lVar9 != 0) && (lVar5 = sljit_emit_label(piVar3), lVar5 != 0)) {
    *(long *)(lVar9 + 0x18) = lVar5;
    *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
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
LAB_001092c7:
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
          goto LAB_00109340;
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
LAB_00109340:
    if (*(int *)(param_1 + 0x14) != 2) goto LAB_00109247;
    sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xb),0x7f,0);
    uVar8 = sljit_emit_jump(piVar3,0x24);
    if (*piVar3 != 0) goto LAB_0010927d;
    lVar6 = *(long *)(piVar3 + 0x18);
    lVar5 = *(long *)(lVar6 + 8);
    uVar1 = lVar5 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar6 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar6 + 0x10 + lVar5);
LAB_001093e2:
      uVar10 = *param_2;
      *puVar7 = uVar8;
      puVar7[1] = uVar10;
      *param_2 = puVar7;
      goto LAB_0010927d;
    }
    puVar9 = (undefined8 *)
             (*(code *)**(undefined8 **)(piVar3 + 0x12))
                       (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar9;
      puVar7 = puVar9 + 2;
      puVar9[1] = 0x10;
      goto LAB_001093e2;
    }
LAB_00109590:
    *piVar3 = 2;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 2) {
      iVar2 = *(int *)((long)param_1 + 0x54);
      uVar11 = 0xffffffffffffffff;
      uVar10 = 0x7f;
      uVar8 = 0;
      goto LAB_001092c7;
    }
LAB_00109247:
    lVar6 = param_1[0x21];
    if (lVar6 != 0) {
      lVar5 = sljit_emit_jump(piVar3,0x24);
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x18) = lVar6;
        *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
      }
      goto LAB_0010927d;
    }
    uVar8 = sljit_emit_jump(piVar3,0x24);
    if (*piVar3 != 0) goto LAB_0010927d;
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
      if (puVar9 == (undefined8 *)0x0) goto LAB_00109590;
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
LAB_0010927d:
  lVar6 = sljit_emit_label(piVar3);
  if ((lVar6 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar6;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  return;
}



void read_char8_type(undefined8 *param_1,undefined8 *param_2,uint param_3)

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
  sljit_emit_op1(piVar3,0x25,4,0,0x82,0);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,4);
  if ((*(int *)((long)param_1 + 0x1e4) != 0) && ((param_3 & 1) != 0)) {
    uVar6 = sljit_emit_cmp(piVar3,3,4,0,0x7f,0x110000);
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
          goto LAB_0010961a;
        }
        *puVar7 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar7;
        puVar8 = puVar7 + 2;
        puVar7[1] = 0x10;
      }
      uVar2 = *param_2;
      *puVar8 = uVar6;
      puVar8[1] = uVar2;
      *param_2 = puVar8;
    }
  }
LAB_0010961a:
  sljit_emit_op1(piVar3,0x20,1,0,0x7f,0);
  lVar4 = sljit_emit_cmp(piVar3,4,4,0,0x7f,0xff);
  sljit_emit_op1(piVar3,0x21,1,0,0x84,param_1[0x1d]);
  lVar5 = sljit_emit_label(piVar3);
  if ((lVar5 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar5;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  return;
}



void compile_dnref_search(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  int *piVar14;
  bool bVar15;
  
  piVar4 = (int *)*param_1;
  iVar12 = *(int *)(param_2 + 8);
  piVar14 = (int *)(param_1[0x1e] + (ulong)*(uint *)(param_2 + 4) * param_1[0x20] * 4);
  sljit_emit_op1(piVar4,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8));
  if (iVar12 < 2) {
    iVar12 = *piVar14 * 0x10;
    sljit_get_local_base_constprop_0_isra_0(piVar4,4,iVar12 + *(int *)((long)param_1 + 0x44));
    if ((param_3 == (undefined8 *)0x0) || (*(int *)(param_1 + 0x3b) != 0)) {
      sljit_emit_label(piVar4);
      return;
    }
    plVar13 = (long *)0x0;
  }
  else {
    iVar12 = iVar12 + -2;
    plVar13 = (long *)0x0;
    do {
      iVar3 = *piVar14;
      sljit_get_local_base_constprop_0_isra_0
                (piVar4,4,iVar3 * 0x10 + *(int *)((long)param_1 + 0x44));
      lVar9 = sljit_emit_cmp(piVar4,1,0x8e,iVar3 * 0x10 + *(int *)((long)param_1 + 0x44),1,0);
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
            goto LAB_00109809;
          }
          *puVar7 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar7;
          plVar8 = puVar7 + 2;
          puVar7[1] = 0x10;
        }
        *plVar8 = lVar9;
        plVar8[1] = (long)plVar13;
        plVar13 = plVar8;
      }
LAB_00109809:
      piVar14 = piVar14 + param_1[0x20];
      bVar15 = iVar12 != 0;
      iVar12 = iVar12 + -1;
    } while (bVar15);
    iVar12 = *piVar14 * 0x10;
    sljit_get_local_base_constprop_0_isra_0(piVar4,4,iVar12 + *(int *)((long)param_1 + 0x44));
    if ((param_3 == (undefined8 *)0x0) || (*(int *)(param_1 + 0x3b) != 0)) goto LAB_001098b3;
  }
  uVar10 = sljit_emit_cmp(piVar4,0,0x8e,iVar12 + *(int *)((long)param_1 + 0x44),1,0);
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
        goto LAB_001098b3;
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
LAB_001098b3:
  lVar9 = sljit_emit_label(piVar4);
  for (; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
    lVar5 = *plVar13;
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
    emit_shift_with_flags(piVar1,0x38,0,0xc,0,0xc,0,0x7f,2);
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



void do_getucd(undefined8 *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  piVar1 = (int *)*param_1;
  sljit_emit_op_dst_constprop_0_isra_0(piVar1,5);
  if (*(int *)(param_1 + 0x3c) == 0) {
    lVar2 = sljit_emit_cmp(piVar1,2,1,0,0x7f,0x110000);
    sljit_emit_op1(piVar1,0x20,1,0,0x7f,0x378);
    lVar3 = sljit_emit_label(piVar1);
    if ((lVar2 != 0) && (lVar3 != 0)) {
      *(long *)(lVar2 + 0x18) = lVar3;
      *(ulong *)(lVar2 + 0x10) = *(ulong *)(lVar2 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  if (*piVar1 == 0) {
    piVar1[0x26] = 0;
    emit_shift_with_flags(piVar1,0x28,0,4,0,1,0,0x7f,7);
    if (*piVar1 == 0) {
      piVar1[0x26] = 0;
      emit_shift_with_flags(piVar1,0x20,0,4,0,4,0,0x7f,1);
    }
  }
  sljit_emit_op1(piVar1,0x23,4,0,0x84,&_pcre2_ucd_stage1_32);
  if (*piVar1 == 0) {
    piVar1[0x26] = 0;
    emit_cum_binary(piVar1,0x25232120,1,0,1,0,0x7f,0x7f);
    if (*piVar1 == 0) {
      piVar1[0x26] = 0;
      emit_shift_with_flags(piVar1,0x20,0,4,0,4,0,0x7f,7);
    }
  }
  sljit_emit_op2(piVar1,0x40,1,0,1,0,4,0);
  sljit_emit_op1(piVar1,0x20,4,0,0x7f,&_pcre2_ucd_stage2_32);
  sljit_emit_op1(piVar1,0x23,4,0,0x184,1);
  sljit_emit_op_src_constprop_0_isra_0(piVar1,5);
  return;
}



int * compile_callout_matchingpath(undefined8 *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint local_44;
  
  piVar4 = (int *)*param_1;
  if (*param_2 == 0x76) {
    local_44 = (uint)DAT_00136076;
  }
  else {
    local_44 = param_2[3];
  }
  uVar2 = *(ushort *)(param_1[1] + 0x80);
  if (*piVar4 != 0) {
    return (int *)0x0;
  }
  pauVar5 = (undefined1 (*) [16])ensure_abuf(piVar4,0x28);
  if (*piVar4 != 0) {
    return (int *)0x0;
  }
  *pauVar5 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar5[2] = 0;
  uVar14 = (uint)uVar2 * 0x10 + 0x87 & 0x1ffff8;
  pauVar5[1] = (undefined1  [16])0x0;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  *(int **)pauVar5[2] = param_2;
  *(undefined8 *)*pauVar5 = uVar6;
  *(undefined1 (**) [16])(param_3 + 0x10) = pauVar5;
  uVar6 = *param_1;
  sljit_emit_op2(uVar6,0x42,0xc,0,0xc,0,0x7f,uVar14);
  uVar6 = sljit_emit_cmp(uVar6,2,0xc,0,0xb,0);
  piVar13 = (int *)*param_1;
  if ((*piVar13 == 0) &&
     (puVar7 = (undefined8 *)ensure_abuf(piVar13,0x18), puVar7 != (undefined8 *)0x0)) {
    *puVar7 = uVar6;
    uVar8 = sljit_emit_label(piVar13);
    uVar6 = param_1[0x26];
    puVar7[1] = uVar8;
    puVar7[2] = uVar6;
    param_1[0x26] = puVar7;
  }
  sljit_emit_op1(piVar4,0x20,4,0,0x8e,(long)*(int *)(param_1 + 0xd));
  sljit_emit_op1(piVar4,0x20,1,0,9,0);
  iVar12 = 0;
  if (*param_2 == 0x76) {
    iVar12 = param_2[3];
  }
  sljit_emit_op1(piVar4,0x25,0x8c,4,0x7f,iVar12);
  sljit_emit_op1(piVar4,0x25,0x8c,0xc,4,0);
  sljit_emit_op1(piVar4,0x25,0x8c,8,0x7f,(ulong)*(ushort *)(param_1[1] + 0x80) + 1);
  sljit_emit_op1(piVar4,0x20,0x8c,0x10,2,0);
  if (*(int *)(param_1 + 0xc) != 0) {
    sljit_emit_op1(piVar4,0x20,4,0,0x81,0x30);
  }
  sljit_emit_op1(piVar4,0x20,0x8c,0x40,0x7f,param_2[1]);
  sljit_emit_op1(piVar4,0x20,0x8c,0x48,0x7f,param_2[2]);
  if (*param_2 == 0x76) {
    iVar3 = 0;
    iVar12 = 0;
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = param_2 + 6;
    iVar12 = local_44 - 7;
    iVar3 = param_2[4];
  }
  sljit_emit_op1(piVar4,0x20,0x8c,0x60,0x7f,piVar13);
  sljit_emit_op1(piVar4,0x20,0x8c,0x58,0x7f,iVar12);
  sljit_emit_op1(piVar4,0x20,0x8c,0x50,0x7f,iVar3);
  sljit_emit_op1(piVar4,0x20,0x8c,0x18,(-(*(int *)(param_1 + 0xc) == 0) & 0x7bU) + 4,0);
  sljit_emit_op1(piVar4,0x20,0x8e,0,2,0);
  sljit_emit_op1(piVar4,0x20,2,0,0xc,0);
  sljit_get_local_base_constprop_0_isra_0(piVar4,3,(long)*(int *)((long)param_1 + 0x44));
  sljit_emit_icall_constprop_0_isra_0(piVar4,0x1112,do_callout_jit);
  sljit_emit_op1(piVar4,0x20,2,0,0x8e,0);
  sljit_emit_op2(*param_1,0x40,0xc,0,0xc,0,0x7f,uVar14);
  if (*piVar4 == 0) {
    piVar4[0x26] = 0x100;
    lVar9 = emit_x86_instruction(piVar4,0x11,0x7f,0,1,0);
    if (lVar9 != 0) {
      *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) | 0x38;
    }
  }
  uVar6 = sljit_emit_jump(piVar4,8);
  if (*piVar4 == 0) {
    lVar9 = *(long *)(piVar4 + 0x18);
    lVar11 = *(long *)(lVar9 + 8);
    uVar1 = lVar11 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar11);
    }
    else {
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar4 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar10 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_0010a6c9;
      }
      *puVar10 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar10;
      puVar7 = puVar10 + 2;
      puVar10[1] = 0x10;
    }
    uVar8 = *(undefined8 *)(pauVar5[1] + 8);
    *puVar7 = uVar6;
    puVar7[1] = uVar8;
    *(undefined8 **)(pauVar5[1] + 8) = puVar7;
  }
LAB_0010a6c9:
  lVar9 = param_1[0x23];
  if (lVar9 == 0) {
    uVar6 = sljit_emit_jump(piVar4,1);
    if (*piVar4 == 0) {
      lVar9 = *(long *)(piVar4 + 0x18);
      lVar11 = *(long *)(lVar9 + 8);
      uVar1 = lVar11 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar9 + 8) = uVar1;
        puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar11);
      }
      else {
        puVar10 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar4 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar10 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_0010a6ff;
        }
        *puVar10 = *(undefined8 *)(piVar4 + 0x18);
        *(undefined8 **)(piVar4 + 0x18) = puVar10;
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
    lVar11 = sljit_emit_jump(piVar4,1);
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x18) = lVar9;
      *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
LAB_0010a6ff:
  return param_2 + local_44;
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
          goto LAB_0010aa08;
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
LAB_0010aa08:
    sljit_emit_op1(piVar3,0x20,0x8e,(long)*(int *)(param_1 + 0xb),0x7f,0);
    uVar5 = sljit_emit_jump(piVar3,0x24);
    if (*piVar3 != 0) goto LAB_0010a960;
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
LAB_0010ac30:
        *piVar3 = 2;
        goto LAB_0010a960;
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
          goto LAB_0010a92a;
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
LAB_0010a92a:
    lVar8 = param_1[0x21];
    if (lVar8 != 0) {
      lVar7 = sljit_emit_jump(piVar3,0x24);
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x18) = lVar8;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
      goto LAB_0010a960;
    }
    uVar5 = sljit_emit_jump(piVar3,0x24);
    if (*piVar3 != 0) goto LAB_0010a960;
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
      if (puVar6 == (undefined8 *)0x0) goto LAB_0010ac30;
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
LAB_0010a960:
  lVar8 = sljit_emit_label(piVar3);
  if ((lVar8 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar8;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  return;
}



undefined8 * search_requested_char(undefined8 *param_1,uint param_2,int param_3,int param_4)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  undefined8 *local_60;
  uint local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  long local_40;
  
  piVar2 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sljit_emit_op2(piVar2,0x40,4,0,2,0,0x7f,800000);
  sljit_emit_op1(piVar2,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 0x4c));
  lVar4 = sljit_emit_cmp(piVar2,2,4,0,0xd,0);
  lVar5 = sljit_emit_cmp(piVar2,2,2,0,1,0);
  if (param_4 == 0) {
    sljit_emit_op1(piVar2,0x20,1,0,2,0);
  }
  else {
    sljit_emit_op2(piVar2,0x40,1,0,2,0,0x7f,4);
  }
  uVar17 = param_2;
  if (param_3 != 0) {
    if (param_2 < 0x100) {
      uVar17 = (uint)*(byte *)(param_1[0x12] + (ulong)param_2);
      if ((0x7f < param_2) && ((*(int *)(param_1 + 0x3c) != 0 || (*(int *)(param_1 + 0x3d) != 0))))
      {
LAB_0010b67a:
        puVar9 = &_pcre2_ucd_records_32 +
                 (ulong)*(ushort *)
                         (&_pcre2_ucd_stage2_32 +
                         (long)(int)((uint)*(ushort *)
                                            (&_pcre2_ucd_stage1_32 + (long)((int)param_2 >> 7) * 2)
                                     * 0x80 + (param_2 & 0x7f)) * 2) * 0xc;
LAB_0010b08a:
        uVar17 = *(int *)(puVar9 + 4) + param_2;
      }
    }
    else if ((*(int *)(param_1 + 0x3c) != 0) || (*(int *)(param_1 + 0x3d) != 0)) {
      puVar9 = &_pcre2_dummy_ucd_record_32;
      if (param_2 < 0x110000) goto LAB_0010b67a;
      goto LAB_0010b08a;
    }
  }
  if (cpu_feature_list == 0) {
    get_cpu_features();
  }
  if ((cpu_feature_list & 4) == 0) {
    lVar11 = sljit_emit_label(piVar2);
    uVar6 = sljit_emit_cmp(piVar2,3,1,0,0xd,0);
    if (*piVar2 == 0) {
      lVar12 = *(long *)(piVar2 + 0x18);
      lVar13 = *(long *)(lVar12 + 8);
      uVar1 = lVar13 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar12 + 8) = uVar1;
        local_60 = (undefined8 *)(lVar12 + 0x10 + lVar13);
      }
      else {
        puVar7 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar2 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
        if (puVar7 == (undefined8 *)0x0) {
          *piVar2 = 2;
          goto LAB_0010b6c6;
        }
        local_60 = puVar7 + 2;
        *puVar7 = *(undefined8 *)(piVar2 + 0x18);
        *(undefined8 **)(piVar2 + 0x18) = puVar7;
        puVar7[1] = 0x10;
      }
      local_60[1] = 0;
      *local_60 = uVar6;
    }
    else {
LAB_0010b6c6:
      local_60 = (undefined8 *)0x0;
    }
    sljit_emit_op1(piVar2,0x25,4,0,0x81,0);
    if (uVar17 == param_2) {
LAB_0010b0ea:
      lVar13 = 0;
      lVar12 = sljit_emit_cmp(piVar2,0,4,0,0x7f,uVar17);
    }
    else {
      uVar16 = uVar17 ^ param_2;
      if ((uVar16 - 1 & uVar16) == 0) {
        if (*piVar2 == 0) {
          piVar2[0x26] = 0;
          emit_cum_binary(piVar2,0xd0b0908,4,0,4,0,0x7f,uVar16);
        }
        uVar17 = uVar17 | param_2;
        goto LAB_0010b0ea;
      }
      lVar12 = sljit_emit_cmp(piVar2,0,4,0,0x7f,(ulong)param_2);
      lVar13 = sljit_emit_cmp(piVar2,0,4,0,0x7f,uVar17);
    }
    sljit_emit_op2(piVar2,0x40,1,0,1,0);
    lVar8 = sljit_emit_jump(piVar2,0x24);
    if ((lVar11 != 0) && (lVar8 != 0)) {
      *(long *)(lVar8 + 0x18) = lVar11;
      *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar11 = sljit_emit_label(piVar2);
    if ((lVar11 != 0) && (lVar12 != 0)) {
      *(long *)(lVar12 + 0x18) = lVar11;
      *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if ((lVar13 != 0) && (lVar11 = sljit_emit_label(piVar2), lVar11 != 0)) {
      *(long *)(lVar13 + 0x18) = lVar11;
      *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto LAB_0010afb9;
  }
  piVar3 = (int *)*param_1;
  if (uVar17 == param_2) {
    local_4c = 0;
LAB_0010b118:
    uVar6 = sljit_emit_cmp(piVar3,3,1,0,0xd,0);
    if (*piVar3 == 0) {
      uVar16 = 0;
      local_50 = param_2;
LAB_0010b150:
      lVar11 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar11 + 8);
      uVar1 = lVar12 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar11 + 8) = uVar1;
        puVar7 = (undefined8 *)(lVar11 + 0x10 + lVar12);
LAB_0010b1a9:
        puVar7[1] = 0;
        *puVar7 = uVar6;
      }
      else {
        puVar10 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar10;
          puVar7 = puVar10 + 2;
          puVar10[1] = 0x10;
          goto LAB_0010b1a9;
        }
        *piVar3 = 2;
        puVar7 = (undefined8 *)0x0;
      }
      sljit_emit_op1(piVar3,0x20,4,0,1,0);
      sljit_emit_op1(piVar3,0x20,3,0,2,0);
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,2,0x7f,(long)(int)local_50);
      if (uVar17 != param_2) {
        if (uVar16 != 0) {
          uVar17 = uVar16;
        }
        goto LAB_0010b218;
      }
    }
    else {
      puVar7 = (undefined8 *)0x0;
      sljit_emit_op1(piVar3,0x20,4,0,1,0);
      sljit_emit_op1(piVar3,0x20,3,0,2,0);
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,2,0x7f,(long)(int)param_2);
      if (uVar17 != param_2) goto LAB_0010b218;
    }
    sljit_emit_op1(piVar3,0x20,2,0,4,0);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,2,2);
  }
  else {
    uVar16 = uVar17 ^ param_2;
    if ((uVar16 & uVar16 - 1) != 0) {
      local_4c = 2;
      goto LAB_0010b118;
    }
    uVar6 = sljit_emit_cmp(piVar3,3,1,0,0xd,0);
    if (*piVar3 == 0) {
      local_4c = 1;
      local_50 = uVar17 | param_2;
      goto LAB_0010b150;
    }
    puVar7 = (undefined8 *)0x0;
    sljit_emit_op1(piVar3,0x20,4,0,1,0);
    sljit_emit_op1(piVar3,0x20,3,0,2,0);
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,2,0x7f,(long)(int)(uVar17 | param_2));
    local_4c = 1;
    uVar17 = uVar16;
LAB_0010b218:
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,3,0x7f,(long)(int)uVar17);
    sljit_emit_op1(piVar3,0x20,2,0,4,0);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,2,2);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,3,3);
  }
  if (*piVar3 == 0) {
    piVar3[0x26] = 0;
    emit_cum_binary(piVar3,0x25232120,2,0,2,0,0x7f,0xfffffffffffffff0);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      emit_cum_binary(piVar3,0x25232120,4,0,4,0,0x7f,0xf);
    }
  }
  sljit_emit_simd_mov_constprop_0_isra_0(piVar3,0x4004000,1,0);
  iVar14 = 0;
  do {
    iVar15 = iVar14 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar3,local_4c,iVar14,0,1,2);
    iVar14 = iVar15;
  } while (iVar15 != 4);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar3);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,4,0);
  if (*piVar3 == 0) {
    piVar3[0x26] = 0;
    emit_shift_with_flags(piVar3,0x28,0,1,0,1,0,4,0);
  }
  lVar11 = sljit_emit_cmp(piVar3,1,1,0,0x7f,0);
  sljit_emit_op2(piVar3,0x42,2,0,2,0,4,0);
  lVar12 = sljit_emit_label(piVar3);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,0x10);
  uVar6 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
  local_60 = puVar7;
  if (*piVar3 == 0) {
    lVar13 = *(long *)(piVar3 + 0x18);
    uVar1 = *(long *)(lVar13 + 8) + 0x10;
    if (uVar1 < 0xff1) {
      local_60 = (undefined8 *)(lVar13 + 0x10 + *(long *)(lVar13 + 8));
      *(ulong *)(lVar13 + 8) = uVar1;
    }
    else {
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar3 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar10 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010b495;
      }
      *puVar10 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar10;
      local_60 = puVar10 + 2;
      puVar10[1] = 0x10;
    }
    local_60[1] = puVar7;
    *local_60 = uVar6;
  }
LAB_0010b495:
  sljit_emit_simd_mov_constprop_0_isra_0(piVar3,0x4004000,1,0);
  iVar14 = 0;
  do {
    iVar15 = iVar14 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar3,local_4c,iVar14,0,1,2,3);
    iVar14 = iVar15;
  } while (iVar15 != 4);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar3);
  lVar13 = sljit_emit_cmp(piVar3,0,1,0,0x7f,0);
  if ((lVar12 != 0) && (lVar13 != 0)) {
    *(long *)(lVar13 + 0x18) = lVar12;
    *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar12 = sljit_emit_label(piVar3);
  if ((lVar11 != 0) && (lVar12 != 0)) {
    *(long *)(lVar11 + 0x18) = lVar12;
    *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
  }
  local_46 = 0xc0;
  local_48 = 0xbc0f;
  sljit_emit_op_custom_isra_0(piVar3,&local_48,3);
  sljit_emit_op2(piVar3,0x40,1,0,1,0,2,0);
  uVar6 = sljit_emit_cmp(piVar3,3,1,0,0xd,0);
  if (*piVar3 == 0) {
    lVar11 = *(long *)(piVar3 + 0x18);
    lVar12 = *(long *)(lVar11 + 8);
    uVar1 = lVar12 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar11 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar11 + 0x10 + lVar12);
    }
    else {
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar3 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar10 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010b611;
      }
      *puVar10 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar10;
      puVar7 = puVar10 + 2;
      puVar10[1] = 0x10;
    }
    *puVar7 = uVar6;
    puVar7[1] = local_60;
    local_60 = puVar7;
  }
LAB_0010b611:
  sljit_emit_op1(piVar3,0x20,2,0,3,0);
LAB_0010afb9:
  sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)((long)param_1 + 0x4c),1,0);
  lVar11 = sljit_emit_label(piVar2);
  if ((lVar11 != 0) && (lVar5 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar11;
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar5 = sljit_emit_label(piVar2);
  if ((lVar5 != 0) && (lVar4 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar5;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void fast_forward_char_simd_isra_0(undefined8 *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  long in_FS_OFFSET;
  ulong uVar19;
  undefined2 local_48;
  undefined1 local_46;
  long local_40;
  
  piVar2 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == param_3) {
    uVar15 = 0;
LAB_0010bce3:
    uVar4 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar18 = 0;
      uVar14 = param_2;
LAB_0010bd66:
      if (*piVar2 == 0) {
        lVar5 = *(long *)(piVar2 + 0x18);
        lVar6 = *(long *)(lVar5 + 8);
        uVar19 = lVar6 + 0x10;
        if (uVar19 < 0xff1) {
          *(ulong *)(lVar5 + 8) = uVar19;
          puVar10 = (ulong *)(lVar5 + 0x10 + lVar6);
        }
        else {
          puVar12 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar2 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
          if (puVar12 == (undefined8 *)0x0) {
            *piVar2 = 2;
            goto LAB_0010bdd4;
          }
          *puVar12 = *(undefined8 *)(piVar2 + 0x18);
          *(undefined8 **)(piVar2 + 0x18) = puVar12;
          puVar10 = puVar12 + 2;
          puVar12[1] = 0x10;
        }
        uVar19 = param_1[0x2d];
        *puVar10 = uVar4;
        puVar10[1] = uVar19;
        param_1[0x2d] = puVar10;
      }
LAB_0010bdd4:
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,2,0x7f,(long)(int)uVar14);
      if (param_2 != param_3) {
        if (uVar18 != 0) {
          param_3 = uVar18;
        }
        goto LAB_0010b8fa;
      }
    }
    else {
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,2,0x7f,(long)(int)param_2);
      if (param_2 != param_3) goto LAB_0010b8fa;
    }
    sljit_emit_op1(piVar2,0x20,4,0,2,0);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar2,2,2);
  }
  else {
    uVar15 = 2;
    uVar18 = param_2 ^ param_3;
    if ((uVar18 - 1 & uVar18) != 0) goto LAB_0010bce3;
    uVar4 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar15 = 1;
      uVar14 = param_2 | param_3;
      goto LAB_0010bd66;
    }
    uVar15 = 1;
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,2,0x7f,(long)(int)(param_3 | param_2));
    param_3 = uVar18;
LAB_0010b8fa:
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar2,3,0x7f,(long)(int)param_3);
    sljit_emit_op1(piVar2,0x20,4,0,2,0);
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
  iVar16 = 0;
  do {
    iVar17 = iVar16 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,uVar15,iVar16,0,1,2,3);
    iVar16 = iVar17;
  } while (iVar17 != 4);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar2);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,4,0);
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    emit_shift_with_flags(piVar2,0x28,0,1,0,1,0,4,0);
  }
  lVar5 = sljit_emit_cmp(piVar2,1,1,0,0x7f,0);
  sljit_emit_op2(piVar2,0x42,2,0,2,0,4,0);
  lVar6 = sljit_emit_label(piVar2);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,0x10);
  lVar7 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
  if ((*(int *)(param_1 + 0x14) == 1) && (*piVar2 == 0)) {
    lVar8 = *(long *)(piVar2 + 0x18);
    lVar3 = *(long *)(lVar8 + 8);
    uVar19 = lVar3 + 0x10;
    if (uVar19 < 0xff1) {
      *(ulong *)(lVar8 + 8) = uVar19;
      plVar13 = (long *)(lVar8 + 0x10 + lVar3);
    }
    else {
      puVar12 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar2 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar12 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0010bb08;
      }
      *puVar12 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar12;
      plVar13 = puVar12 + 2;
      puVar12[1] = 0x10;
    }
    lVar8 = param_1[0x2d];
    *plVar13 = lVar7;
    plVar13[1] = lVar8;
    param_1[0x2d] = plVar13;
  }
LAB_0010bb08:
  sljit_emit_simd_mov_constprop_0_isra_0(piVar2,0x4004000,1,0);
  iVar16 = 0;
  do {
    iVar17 = iVar16 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar2,uVar15,iVar16,0,1,2);
    iVar16 = iVar17;
  } while (iVar17 != 4);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar2);
  lVar8 = sljit_emit_cmp(piVar2,0,1,0,0x7f,0);
  if ((lVar8 != 0) && (lVar6 != 0)) {
    *(long *)(lVar8 + 0x18) = lVar6;
    *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar6 = sljit_emit_label(piVar2);
  if ((lVar6 != 0) && (lVar5 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar6;
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
  }
  local_48 = 0xbc0f;
  local_46 = 0xc0;
  sljit_emit_op_custom_isra_0(piVar2,&local_48,3);
  uVar15 = 1;
  sljit_emit_op2(piVar2,0x40,2,0,2,0,1,0);
  if (*(int *)(param_1 + 0x14) == 1) {
    uVar15 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
    if (*piVar2 == 0) {
      lVar5 = *(long *)(piVar2 + 0x18);
      lVar6 = *(long *)(lVar5 + 8);
      uVar4 = lVar6 + 0x10;
      if (uVar4 < 0xff1) {
        *(ulong *)(lVar5 + 8) = uVar4;
        puVar12 = (undefined8 *)(lVar5 + 0x10 + lVar6);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar2 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
        if (puVar11 == (undefined8 *)0x0) {
          *piVar2 = 2;
          goto LAB_0010bcb7;
        }
        *puVar11 = *(undefined8 *)(piVar2 + 0x18);
        *(undefined8 **)(piVar2 + 0x18) = puVar11;
        puVar12 = puVar11 + 2;
        puVar11[1] = 0x10;
      }
      uVar1 = param_1[0x2d];
      *puVar12 = uVar15;
      puVar12[1] = uVar1;
      param_1[0x2d] = puVar12;
    }
  }
  else {
    lVar5 = sljit_emit_label(piVar2,uVar15);
    uVar19 = uVar4;
    if ((lVar5 != 0) && (uVar4 != 0)) {
      uVar19 = *(ulong *)(uVar4 + 0x10);
      *(long *)(uVar4 + 0x18) = lVar5;
      *(ulong *)(uVar4 + 0x10) = uVar19 & 0xfffffffffffffffd | 1;
    }
    lVar5 = sljit_emit_label(piVar2);
    if ((lVar5 != 0) && (lVar7 != 0)) {
      *(long *)(lVar7 + 0x18) = lVar5;
      *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      puVar9 = (undefined1 *)emit_x86_instruction(piVar2,1,2,0,0xd,0,uVar19);
      if (puVar9 != (undefined1 *)0x0) {
        *puVar9 = 0x3b;
      }
    }
    sljit_emit_select_isra_0(piVar2,4,2,0xd,0,2);
  }
LAB_0010bcb7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void peek_char_back_isra_0(undefined8 *param_1,undefined8 *param_2)

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
  sljit_emit_op1(piVar3,0x25,1,0,0x82,0xfffffffffffffffc);
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    return;
  }
  sljit_emit_op2(piVar3,0x42,4,0,1,0,0x7f,0xd800);
  uVar6 = sljit_emit_cmp(piVar3,3,1,0,0x7f,0x110000);
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
        goto LAB_0010c059;
      }
      *puVar7 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar7;
      puVar8 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar2 = *param_2;
    *puVar8 = uVar6;
    puVar8[1] = uVar2;
    *param_2 = puVar8;
  }
LAB_0010c059:
  uVar6 = sljit_emit_cmp(piVar3,2,4,0,0x7f,0x800);
  if (*piVar3 != 0) {
    return;
  }
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
  uVar2 = *param_2;
  *puVar8 = uVar6;
  puVar8[1] = uVar2;
  *param_2 = puVar8;
  return;
}



void init_frame_isra_0(undefined8 *param_1,int *param_2,int *param_3,int param_4)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  
  param_4 = param_4 * 8;
  uVar1 = *param_1;
  piVar9 = param_2;
  if (param_3 == (int *)0x0) {
    do {
      param_3 = piVar9 + (uint)piVar9[1];
      piVar9 = param_3;
    } while (*param_3 == 0x78);
    if ((*param_2 != 0x8a) && (*param_2 != 0x8f)) {
      param_2 = (int *)next_opcode(param_1,param_2);
    }
  }
  lVar10 = (long)param_4;
  if (param_2 < param_3) {
    lVar10 = (long)param_4;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    do {
      while (*param_2 != 3) {
        uVar8 = *param_2 - 0x75;
        if (uVar8 < 0x2e) {
          uVar7 = 1L << ((byte)uVar8 & 0x3f);
          if ((uVar7 & 0x6300000) == 0) {
            if ((uVar7 & 0x28a000000000) == 0) {
              if ((uVar7 & 1) == 0) goto LAB_0010c3a0;
              if ((*(int *)((long)param_1 + 0xac) != 0) && (!bVar2)) {
                sljit_emit_op1(uVar1,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 0x44));
                sljit_emit_op1(uVar1,0x20,0x8c,lVar10,0x7f,(long)-*(int *)((long)param_1 + 0x44));
                sljit_emit_op1(uVar1,0x20,0x8c,(long)(param_4 + -8),1,0);
                param_4 = param_4 + -0x10;
                bVar2 = true;
                lVar10 = (long)param_4;
              }
              if ((*(int *)(param_1 + 0xc) != 0) && (!bVar3)) {
                sljit_emit_op1(uVar1,0x20,1,0,0x8e);
                sljit_emit_op1(uVar1,0x20,0x8c,lVar10,0x7f,(long)-*(int *)(param_1 + 0xc));
                sljit_emit_op1(uVar1,0x20,0x8c,(long)(param_4 + -8),1,0);
                param_4 = param_4 + -0x10;
                bVar3 = true;
                lVar10 = (long)param_4;
              }
              if ((*(int *)(param_1 + 0xd) != 0) && (!bVar4)) {
                sljit_emit_op1(uVar1,0x20,1,0,0x8e);
                sljit_emit_op1(uVar1,0x20,0x8c,lVar10,0x7f,(long)-*(int *)(param_1 + 0xd));
                sljit_emit_op1(uVar1,0x20,0x8c,(long)(param_4 + -8),1,0);
                param_4 = param_4 + -0x10;
                bVar4 = true;
                lVar10 = (long)param_4;
              }
              param_2 = param_2 + 2;
            }
            else {
              if (!bVar3) {
                sljit_emit_op1(uVar1,0x20,1,0,0x8e,(long)*(int *)(param_1 + 0xc));
                sljit_emit_op1(uVar1,0x20,0x8c,lVar10,0x7f,(long)-*(int *)(param_1 + 0xc));
                sljit_emit_op1(uVar1,0x20,0x8c,(long)(param_4 + -8),1,0);
                param_4 = param_4 + -0x10;
                lVar10 = (long)param_4;
              }
              bVar3 = true;
              param_2 = param_2 + (param_2[1] + 3);
            }
          }
          else {
            iVar6 = param_4;
            if ((*(int *)(param_1 + 0xd) != 0) && (!bVar4)) {
              iVar6 = param_4 + -0x10;
              sljit_emit_op1(uVar1,0x20,1,0,0x8e);
              sljit_emit_op1(uVar1,0x20,0x8c,lVar10,0x7f,(long)-*(int *)(param_1 + 0xd));
              sljit_emit_op1(uVar1,0x20,0x8c,(long)(param_4 + -8),1,0);
              lVar10 = (long)iVar6;
              bVar4 = true;
            }
            piVar9 = param_2 + 2;
            param_2 = param_2 + 3;
            iVar5 = *piVar9 * 0x10;
            sljit_emit_op1(uVar1,0x20,0x8c,lVar10,0x7f,
                           (long)(*(int *)((long)param_1 + 0x44) + iVar5));
            sljit_emit_op1(uVar1,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar5));
            sljit_emit_op1(uVar1,0x20,4,0,0x8e,(long)(iVar5 + 8 + *(int *)((long)param_1 + 0x44)));
            sljit_emit_op1(uVar1,0x20,0x8c,(long)(iVar6 + -8),1,0);
            sljit_emit_op1(uVar1,0x20,0x8c,(long)(iVar6 + -0x10),4,0);
            param_4 = iVar6 + -0x18;
            lVar10 = (long)param_4;
          }
        }
        else {
LAB_0010c3a0:
          param_2 = (int *)next_opcode(param_1,param_2);
        }
        if (param_3 <= param_2) goto LAB_0010c24b;
      }
      if (!bVar2) {
        sljit_emit_op1(uVar1,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 0x44));
        sljit_emit_op1(uVar1,0x20,0x8c,lVar10,0x7f,(long)-*(int *)((long)param_1 + 0x44));
        sljit_emit_op1(uVar1,0x20,0x8c,(long)(param_4 + -8),1,0);
        param_4 = param_4 + -0x10;
        lVar10 = (long)param_4;
      }
      param_2 = param_2 + 1;
      bVar2 = true;
    } while (param_2 < param_3);
  }
LAB_0010c24b:
  sljit_emit_op1(uVar1,0x20,0x8c,lVar10,0x7f,0);
  return;
}



/* WARNING: Type propagation algorithm not settling */

long compile_assert_backtrackingpath(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
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
  int iVar14;
  long *plVar15;
  
  piVar3 = *(int **)(param_2 + 0x20);
  piVar4 = (int *)*param_1;
  iVar7 = *piVar3;
  if (iVar7 == 0x97) {
    sljit_emit_op1(piVar4,0x20,2,0,0x8c,0);
    if (-1 < *(int *)(param_2 + 0x30)) {
      if ((piVar3[1] & 0xfffffffdU) == 0x80) {
        sljit_emit_op1(piVar4,0x20,0x8c,0,0x7f,0);
        lVar13 = *(long *)(param_2 + 0x38);
        lVar12 = sljit_emit_cmp(piVar4,1,2,0,0x7f,0);
        lVar8 = lVar12;
        lVar6 = lVar13;
        goto joined_r0x0010cad9;
      }
      piVar5 = (int *)*param_1;
      if (*piVar5 == 0) {
        piVar5[0x26] = 0;
        iVar7 = emit_lea_binary(piVar5,0xc,0,0xc,0,0x7f,8);
        if (iVar7 == 4) {
          emit_cum_binary(piVar5,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      iVar14 = 0x97;
      lVar13 = sljit_emit_cmp(piVar4,0,2,0,0x7f,0);
      iVar7 = piVar3[1];
      goto LAB_0010c720;
    }
    lVar13 = sljit_emit_label(piVar4);
    plVar15 = *(long **)(param_2 + 0x18);
    iVar7 = 0x97;
    if (plVar15 != (long *)0x0) goto LAB_0010cb9b;
  }
  else {
    if (-1 < *(int *)(param_2 + 0x30)) {
      iVar14 = 0x87;
      lVar13 = 0;
LAB_0010c720:
      if ((iVar7 - 0x7fU & 0xfffffffd) != 0) {
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
        goto joined_r0x0010c8f0;
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
            goto LAB_0010c82e;
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
LAB_0010c82e:
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
joined_r0x0010c8f0:
      if (iVar14 != 0x97) {
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
    iVar7 = 0x87;
    lVar13 = sljit_emit_label(piVar4);
    plVar15 = *(long **)(param_2 + 0x18);
    if (plVar15 == (long *)0x0) {
      return lVar13;
    }
LAB_0010cb9b:
    do {
      lVar8 = *plVar15;
      if ((lVar8 != 0) && (lVar13 != 0)) {
        *(long *)(lVar8 + 0x18) = lVar13;
        *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
      }
      plVar15 = (long *)plVar15[1];
    } while (plVar15 != (long *)0x0);
    if (iVar7 != 0x97) {
      return lVar13;
    }
  }
  sljit_emit_op1(piVar4,0x20,0x8c,0,0x7f,0);
  lVar13 = *(long *)(param_2 + 0x38);
  lVar12 = sljit_emit_cmp(piVar4,1,2,0,0x7f,0);
  lVar8 = lVar13;
  lVar6 = lVar12;
joined_r0x0010cad9:
  if ((lVar6 != 0) && (lVar8 != 0)) {
    *(long *)(lVar12 + 0x18) = lVar13;
    *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
  }
  piVar3 = (int *)*param_1;
  if (*piVar3 == 0) {
    piVar3[0x26] = 0;
    lVar12 = emit_lea_binary(piVar3,0xc,0,0xc,0,0x7f,8);
    if ((int)lVar12 == 4) {
      lVar12 = 0x7f;
      emit_cum_binary(piVar3,0x5030100,0xc,0,0xc,0,0x7f,8);
    }
  }
  return lVar12;
}



void fast_forward_first_char2(undefined8 *param_1,uint param_2,uint param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
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
    if (0 < param_4) {
      sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,(long)(param_4 * 4));
    }
  }
  else {
    sljit_emit_op1(piVar3,0x20,1,0,0x8e,(long)iVar2);
    if (0 < param_4) {
      sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,(long)(param_4 * 4));
    }
    sljit_emit_op1(piVar3,0x20,3,0,0xd,0);
    sljit_emit_op2(piVar3,0x40,1,0,1,0,0x7f,(long)(param_4 * 4 + 4));
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
    fast_forward_char_simd_isra_0(param_1,param_2,param_3);
    if (0 < param_4) {
      sljit_emit_op2(piVar3,0x42,2,0,2,0,0x7f,(long)(param_4 << 2));
    }
    goto joined_r0x0010d01d;
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
        goto LAB_0010ccf4;
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
LAB_0010ccf4:
  sljit_emit_op1(piVar3,0x25,1,0,0x82,0);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,4);
  bVar12 = lVar5 != 0;
  if (param_2 == param_3) {
    lVar7 = sljit_emit_cmp(piVar3,1,1,0,0x7f,param_2);
    if ((lVar7 != 0) && (bVar12)) {
      *(long *)(lVar7 + 0x18) = lVar5;
      *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  else {
    uVar4 = param_2 ^ param_3;
    if ((uVar4 - 1 & uVar4) == 0) {
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_cum_binary(piVar3,0xd0b0908,1,0,1,0,0x7f,uVar4);
      }
      lVar7 = sljit_emit_cmp(piVar3,1,1,0,0x7f,param_2 | param_3);
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
      lVar5 = sljit_emit_label(piVar3);
      if ((lVar5 != 0) && (lVar7 != 0)) {
        *(long *)(lVar7 + 0x18) = lVar5;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
  }
  sljit_emit_op2(piVar3,0x42,2,0,2,0,0x7f);
  if (((*(int *)(param_1 + 0x14) != 1) && (lVar5 = sljit_emit_label(piVar3), lVar5 != 0)) &&
     (lVar6 != 0)) {
    *(long *)(lVar6 + 0x18) = lVar5;
    *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
  }
joined_r0x0010d01d:
  if (iVar2 != 0) {
    sljit_emit_op1(piVar3,0x20,0xd,0,3,0);
    return;
  }
  return;
}



void read_char_isra_0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  piVar2 = (int *)*param_1;
  sljit_emit_op1(piVar2,0x25,1,0,0x82,0);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,4);
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    return;
  }
  if (param_2 == (undefined8 *)0x0) {
    sljit_emit_op2(piVar2,0x42,4,0,1,0,0x7f,0xd800);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_cmp_binary(piVar2,1,0,0x7f,0x110000);
    }
    sljit_emit_select_isra_0(piVar2,3,1,0x7f,0xffffffffffffffff,1);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_cmp_binary(piVar2,4,0,0x7f,0x800);
    }
    sljit_emit_select_isra_0(piVar2,2,1,0x7f,0xffffffffffffffff,1);
    return;
  }
  uVar9 = 0xd800;
  uVar8 = 0x7f;
  sljit_emit_op2(piVar2,0x42,4,0,1,0);
  uVar5 = sljit_emit_cmp(piVar2,3,1,0,0x7f,0x110000);
  if (*piVar2 == 0) {
    lVar3 = *(long *)(piVar2 + 0x18);
    lVar4 = *(long *)(lVar3 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar3 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar3 + 0x10 + lVar4);
    }
    else {
      puVar6 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2],lVar3,uVar1,uVar8,uVar9);
      if (puVar6 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0010d2be;
      }
      *puVar6 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar6;
      puVar7 = puVar6 + 2;
      puVar6[1] = 0x10;
    }
    uVar8 = *param_2;
    *puVar7 = uVar5;
    puVar7[1] = uVar8;
    *param_2 = puVar7;
  }
LAB_0010d2be:
  uVar5 = sljit_emit_cmp(piVar2,2,4,0,0x7f,0x800);
  if (*piVar2 == 0) {
    lVar3 = *(long *)(piVar2 + 0x18);
    lVar4 = *(long *)(lVar3 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar3 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar3 + 0x10 + lVar4);
    }
    else {
      puVar6 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar6 == (undefined8 *)0x0) {
        *piVar2 = 2;
        return;
      }
      *puVar6 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar6;
      puVar7 = puVar6 + 2;
      puVar6[1] = 0x10;
    }
    uVar8 = *param_2;
    *puVar7 = uVar5;
    puVar7[1] = uVar8;
    *param_2 = puVar7;
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
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
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
          goto LAB_0010d8ee;
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
LAB_0010d8ee:
          sljit_emit_op1(piVar4,0x20,1,0,0x89,0x48);
          sljit_emit_op1(piVar4,0x20,4,0,0xd,0);
          lVar6 = sljit_emit_cmp(piVar4,0,1,0,0x7f,0xffffffffffffffff);
          sljit_emit_op1(piVar4,0x20,4,0,0x89,0x10);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_shift_with_flags(piVar4,0x20,0,1,0,1,0,0x7f,2);
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
              puVar13 = (undefined8 *)(lVar7 + 0x10 + lVar10);
            }
            else {
              puVar12 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
              if (puVar12 == (undefined8 *)0x0) {
                *piVar4 = 2;
                goto LAB_0010dadd;
              }
              *puVar12 = *(undefined8 *)(piVar4 + 0x18);
              *(undefined8 **)(piVar4 + 0x18) = puVar12;
              puVar13 = puVar12 + 2;
              puVar12[1] = 0x10;
            }
            uVar2 = param_1[0x2c];
            *puVar13 = uVar9;
            puVar13[1] = uVar2;
            param_1[0x2c] = puVar13;
          }
LAB_0010dadd:
          lVar7 = sljit_emit_label(piVar4);
          if ((lVar7 != 0) && (lVar6 != 0)) {
            *(long *)(lVar6 + 0x18) = lVar7;
            *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)((long)param_1 + 0x5c),4,0);
        }
        lVar7 = sljit_emit_jump(piVar4,0x24);
        if (!bVar5) goto LAB_0010d65a;
      }
      lVar10 = sljit_emit_label(piVar4);
      uVar9 = 0x7f;
      sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,4);
      lVar6 = sljit_emit_cmp(piVar4,3,2,0,0xd,0);
      sljit_emit_op1(piVar4,0x25,1,0,0x82,0);
      if (*piVar4 == 0) {
        uVar3 = *(uint *)(param_1 + 0x1a);
        piVar4[0x26] = 0;
        emit_cmp_binary(piVar4,1,0,0x7f,uVar3 & 0xff,uVar9);
      }
      sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,1,0);
      if (*piVar4 == 0) {
        piVar4[0x26] = 0;
        emit_shift_with_flags(piVar4,0x20,0,1,0,1,0,0x7f,2);
      }
      sljit_emit_op2(piVar4,0x40,2,0,2,0,1,0);
      lVar8 = sljit_emit_jump(piVar4,0x24);
      uVar9 = sljit_emit_label(piVar4);
      sljit_emit_op1(piVar4,0x25,1,0,0x82,0);
      lVar11 = sljit_emit_cmp(piVar4,0,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
      if ((lVar10 != 0) && (lVar11 != 0)) {
        *(long *)(lVar11 + 0x18) = lVar10;
        *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
      }
      bVar5 = true;
      goto LAB_0010d667;
    }
LAB_0010d4be:
    sljit_emit_op1(piVar4,0x20,3,0,2,0);
    if ((*(int *)((long)param_1 + 0xc4) == 0) && (0xff < *(int *)(param_1 + 0x1a))) {
      lVar7 = sljit_emit_label(piVar4);
      sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,4);
      lVar6 = sljit_emit_cmp(piVar4,3,2,0,0xd,0);
      sljit_emit_op1(piVar4,0x25,1,0,0x82,0xfffffffffffffffc);
      sljit_emit_op1(piVar4,0x25,4,0,0x82,0);
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
      if ((lVar7 != 0) && (lVar6 != 0)) {
        *(long *)(lVar6 + 0x18) = lVar7;
        *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
      }
      sljit_emit_op2(piVar4,0x42,0x8e,(long)*(int *)((long)param_1 + 0x5c),2,0,0x7f,4);
    }
    else {
      lVar6 = sljit_emit_cmp(piVar4,3,2,0,0xd,0);
      lVar7 = sljit_emit_label(piVar4);
      sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)((long)param_1 + 0x5c),2,0);
      read_char_isra_0(param_1,0);
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
        plVar14 = local_48;
        do {
          lVar8 = *plVar14;
          if ((lVar8 != 0) && (lVar7 != 0)) {
            *(long *)(lVar8 + 0x18) = lVar7;
            *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar14 = (long *)plVar14[1];
        } while (plVar14 != (long *)0x0);
      }
    }
    lVar8 = 0;
    sljit_emit_op1(piVar4,0x20,2,0,3,0);
    lVar7 = sljit_emit_jump(piVar4,0x24);
  }
  else {
    if ((uVar3 & 0x100) != 0) goto LAB_0010d4be;
    bVar5 = false;
    if ((uVar3 & 0x800000) != 0) goto LAB_0010d8ee;
    lVar8 = 0;
    lVar6 = 0;
    lVar7 = sljit_emit_jump(piVar4,0x24);
  }
LAB_0010d65a:
  bVar5 = false;
  uVar9 = sljit_emit_label(piVar4);
LAB_0010d667:
  sljit_emit_op2(piVar4,0x40,2,0,2,0);
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
    if ((lVar8 != 0) && (lVar6 != 0)) {
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



void peek_char_isra_0(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  piVar2 = (int *)*param_1;
  sljit_emit_op1(piVar2,0x25,1,0,0x82,0);
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    return;
  }
  if (param_2 < 0xd800) {
    return;
  }
  if (param_3 == (undefined8 *)0x0) {
    sljit_emit_op2(piVar2,0x42,4,0,1,0,0x7f,0xd800);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_cmp_binary(piVar2,1,0,0x7f,0x110000);
    }
    sljit_emit_select_isra_0(piVar2,3,1,0x7f,0xffffffffffffffff,1);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_cmp_binary(piVar2,4,0,0x7f,0x800);
    }
    sljit_emit_select_isra_0(piVar2,2,1,0x7f,0xffffffffffffffff,1);
    return;
  }
  uVar9 = 0xd800;
  uVar8 = 0x7f;
  sljit_emit_op2(piVar2,0x42,4,0,1,0);
  uVar5 = sljit_emit_cmp(piVar2,3,1,0,0x7f,0x110000);
  if (*piVar2 == 0) {
    lVar3 = *(long *)(piVar2 + 0x18);
    lVar4 = *(long *)(lVar3 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar3 + 8) = uVar1;
      puVar7 = (undefined8 *)(lVar3 + 0x10 + lVar4);
    }
    else {
      puVar6 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2],lVar3,uVar1,uVar8,uVar9);
      if (puVar6 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0010de76;
      }
      *puVar6 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar6;
      puVar7 = puVar6 + 2;
      puVar6[1] = 0x10;
    }
    uVar8 = *param_3;
    *puVar7 = uVar5;
    puVar7[1] = uVar8;
    *param_3 = puVar7;
  }
LAB_0010de76:
  uVar5 = sljit_emit_cmp(piVar2,2,4,0,0x7f,0x800);
  if (*piVar2 != 0) {
    return;
  }
  lVar3 = *(long *)(piVar2 + 0x18);
  lVar4 = *(long *)(lVar3 + 8);
  uVar1 = lVar4 + 0x10;
  if (uVar1 < 0xff1) {
    *(ulong *)(lVar3 + 8) = uVar1;
    puVar7 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  }
  else {
    puVar6 = (undefined8 *)
             (*(code *)**(undefined8 **)(piVar2 + 0x12))
                       (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
    if (puVar6 == (undefined8 *)0x0) {
      *piVar2 = 2;
      return;
    }
    *puVar6 = *(undefined8 *)(piVar2 + 0x18);
    *(undefined8 **)(piVar2 + 0x18) = puVar6;
    puVar7 = puVar6 + 2;
    puVar6[1] = 0x10;
  }
  uVar8 = *param_3;
  *puVar7 = uVar5;
  puVar7[1] = uVar8;
  *param_3 = puVar7;
  return;
}



void check_wordboundary(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  long *local_58;
  long *local_50;
  long *local_48;
  long local_40;
  
  piVar2 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  if (*piVar2 == 0) {
    piVar2[0x26] = 1;
    puVar5 = (undefined1 *)emit_x86_instruction(piVar2,1,0,0,0x8e,0);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0x8f;
    }
  }
  sljit_emit_op1(piVar2,0x20,1,0,9,0);
  sljit_emit_op1(piVar2,0x20,4,0,0x81,0x10);
  sljit_emit_op1(piVar2,0x20,3,0,0x7f,0);
  lVar6 = sljit_emit_cmp(piVar2,5,2,0,4,0);
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    if (*(int *)(param_1 + 0x14) == 1) {
      peek_char_back_isra_0(param_1,0);
    }
    else {
      sljit_emit_op2(*param_1,0x42,2,0,2,0,0x7f,4);
      uVar7 = *param_1;
      if (*(int *)(param_1 + 0x14) == 2) {
        uVar13 = 0x7f;
        sljit_emit_op2(uVar7,0x40,1,0,0x8e,(long)*(int *)((long)param_1 + 0x54),0x7f,1);
        lVar9 = sljit_emit_cmp(uVar7,5,1,0,2,0);
        sljit_emit_op1(uVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
        lVar10 = sljit_emit_label(uVar7);
        auVar4._8_8_ = uVar13;
        auVar4._0_8_ = lVar9;
        auVar12._8_8_ = uVar13;
        auVar12._0_8_ = lVar10;
joined_r0x0010e89e:
        uVar11 = auVar4._8_8_;
        if (auVar4._0_8_ != 0) {
          uVar11 = auVar12._8_8_;
          if (lVar10 != 0) {
            *(long *)(lVar9 + 0x18) = auVar12._0_8_;
            uVar11 = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            *(ulong *)(lVar9 + 0x10) = uVar11;
          }
        }
      }
      else {
        uVar11 = extraout_RDX;
        if (*(int *)(param_1 + 0x14) == 4) {
          lVar9 = sljit_emit_cmp(uVar7,5,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
          sljit_emit_op1(uVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
          auVar12 = sljit_emit_label(uVar7);
          lVar10 = lVar9;
          auVar4 = auVar12;
          goto joined_r0x0010e89e;
        }
      }
      read_char_isra_0(param_1,0,uVar11);
    }
  }
  else {
    peek_char_back_isra_0(param_1,&local_50);
    if (*(int *)(param_1 + 0x14) == 1) goto joined_r0x0010e3fd;
    sljit_emit_op1(piVar2,0x20,5,0,1,0);
    sljit_emit_op1(piVar2,0x20,4,0,2,0);
    sljit_emit_op2(*param_1,0x42,2,0,2,0,0x7f,4);
    uVar7 = *param_1;
    if (*(int *)(param_1 + 0x14) == 2) {
      sljit_emit_op2(uVar7,0x40,1,0,0x8e,(long)*(int *)((long)param_1 + 0x54),0x7f,1);
      lVar9 = sljit_emit_cmp(uVar7,5,1,0,2,0);
      sljit_emit_op1(uVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
      lVar10 = sljit_emit_label(uVar7);
joined_r0x0010e9c0:
      if ((lVar9 != 0) && (lVar10 != 0)) {
        *(long *)(lVar9 + 0x18) = lVar10;
        *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    else if (*(int *)(param_1 + 0x14) == 4) {
      lVar9 = sljit_emit_cmp(uVar7,5,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
      sljit_emit_op1(uVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
      lVar10 = sljit_emit_label(uVar7);
      goto joined_r0x0010e9c0;
    }
    sljit_emit_op1(piVar2,0x20,1,0,5,0);
    sljit_emit_op1(piVar2,0x20,2,0,4,0);
  }
joined_r0x0010e3fd:
  if (param_2 == 0) {
    lVar9 = sljit_emit_cmp(piVar2,4,1,0,0x7f,0xff);
    sljit_emit_op1(piVar2,0x21,1,0,0x81,param_1[0x1d]);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_shift_with_flags(piVar2,0x28,0,1,0,1,0,0x7f,4);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_cum_binary(piVar2,0x25232120,3,0,1,0,0x7f,1);
      }
    }
    lVar10 = sljit_emit_label(piVar2);
    if ((lVar10 != 0) && (lVar9 != 0)) {
      *(long *)(lVar9 + 0x18) = lVar10;
      *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar9 = sljit_emit_label(piVar2);
    if ((lVar9 != 0) && (lVar6 != 0)) {
      *(long *)(lVar6 + 0x18) = lVar9;
      *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
    }
    sljit_emit_op1(piVar2,0x20,4,0,0x7f,0);
    check_str_end_constprop_0(param_1,&local_58);
    peek_char_isra_0(param_1,0x7fffffff,&local_48);
    lVar6 = sljit_emit_label(piVar2);
    sljit_emit_op1(piVar2,0x20,4,0,0x7f,0);
    lVar9 = sljit_emit_cmp(piVar2,4,1,0,0x7f,0xff);
    sljit_emit_op1(piVar2,0x21,4,0,0x81,param_1[0x1d]);
    if (*piVar2 == 0) {
      piVar2[0x26] = 0;
      emit_shift_with_flags(piVar2,0x28,0,4,0,4,0,0x7f,4);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_cum_binary(piVar2,0x25232120,4,0,4,0,0x7f,1);
      }
    }
    lVar10 = sljit_emit_label(piVar2);
    if ((lVar10 != 0) && (lVar9 != 0)) {
      *(long *)(lVar9 + 0x18) = lVar10;
      *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto LAB_0010e650;
  }
  uVar7 = sljit_emit_jump(piVar2,0x25);
  if (*piVar2 == 0) {
    lVar9 = *(long *)(piVar2 + 0x18);
    uVar11 = *(long *)(lVar9 + 8) + 0x10;
    if (uVar11 < 0xff1) {
      puVar8 = (undefined8 *)(lVar9 + 0x10 + *(long *)(lVar9 + 8));
      uVar13 = param_1[0x3f];
      *(ulong *)(lVar9 + 8) = uVar11;
      *puVar8 = uVar7;
      puVar8[1] = uVar13;
      param_1[0x3f] = puVar8;
LAB_0010e207:
      piVar2[0x26] = 0;
      emit_shift_with_flags(piVar2,0x20,0,4,0,0x7f,1,1,0);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_test_binary(piVar2,4,0,0x7f,0x1f3e0);
      }
    }
    else {
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar8 == (undefined8 *)0x0) {
        *piVar2 = 2;
      }
      else {
        uVar13 = param_1[0x3f];
        *puVar8 = *(undefined8 *)(piVar2 + 0x18);
        iVar1 = *piVar2;
        *(undefined8 **)(piVar2 + 0x18) = puVar8;
        puVar8[1] = 0x10;
        puVar8[2] = uVar7;
        puVar8[3] = uVar13;
        param_1[0x3f] = puVar8 + 2;
        if (iVar1 == 0) goto LAB_0010e207;
      }
    }
  }
  sljit_emit_op_flags_constprop_0_isra_0(piVar2,0x20,3,1);
  lVar9 = sljit_emit_label(piVar2);
  if ((lVar9 != 0) && (lVar6 != 0)) {
    *(long *)(lVar6 + 0x18) = lVar9;
    *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
  }
  sljit_emit_op1(piVar2,0x20,4,0,0x7f,0);
  check_str_end_constprop_0(param_1,&local_58);
  peek_char_isra_0(param_1,0x7fffffff,&local_48);
  lVar6 = sljit_emit_label(piVar2);
  uVar7 = sljit_emit_jump(piVar2,0x25);
  if (*piVar2 == 0) {
    lVar9 = *(long *)(piVar2 + 0x18);
    uVar11 = *(long *)(lVar9 + 8) + 0x10;
    if (uVar11 < 0xff1) {
      puVar8 = (undefined8 *)(lVar9 + 0x10 + *(long *)(lVar9 + 8));
      uVar13 = param_1[0x3f];
      *(ulong *)(lVar9 + 8) = uVar11;
      *puVar8 = uVar7;
      puVar8[1] = uVar13;
      param_1[0x3f] = puVar8;
LAB_0010e373:
      piVar2[0x26] = 0;
      emit_shift_with_flags(piVar2,0x20,0,4,0,0x7f,1,1,0);
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_test_binary(piVar2,4,0,0x7f,0x1f3e0);
      }
    }
    else {
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar2 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar8 == (undefined8 *)0x0) {
        *piVar2 = 2;
      }
      else {
        uVar13 = param_1[0x3f];
        *puVar8 = *(undefined8 *)(piVar2 + 0x18);
        iVar1 = *piVar2;
        *(undefined8 **)(piVar2 + 0x18) = puVar8;
        puVar8[1] = 0x10;
        puVar8[2] = uVar7;
        puVar8[3] = uVar13;
        param_1[0x3f] = puVar8 + 2;
        if (iVar1 == 0) goto LAB_0010e373;
      }
    }
  }
  sljit_emit_op_flags_constprop_0_isra_0(piVar2,0x20,4,1);
LAB_0010e650:
  lVar9 = sljit_emit_label(piVar2);
  for (plVar3 = local_58; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    lVar10 = *plVar3;
    if ((lVar10 != 0) && (lVar9 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar9;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  sljit_emit_op1(piVar2,0x20,1,0,0x8e,0);
  uVar7 = extraout_RDX_00;
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    uVar7 = 3;
    emit_cum_binary(piVar2,0x35333130,4,0,4,0,3,0);
  }
  sljit_emit_op_src_constprop_0_isra_0(piVar2,1,uVar7);
  if (*(int *)((long)param_1 + 0x1e4) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    lVar9 = sljit_emit_label(piVar2);
    for (plVar3 = local_50; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      lVar10 = *plVar3;
      if ((lVar10 != 0) && (lVar9 != 0)) {
        *(long *)(lVar10 + 0x18) = lVar9;
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    peek_char_isra_0(param_1,0x7fffffff,0);
    lVar9 = sljit_emit_cmp(piVar2,1,1,0,0x7f,0xffffffffffffffff);
    if ((lVar6 != 0) && (lVar9 != 0)) {
      *(long *)(lVar9 + 0x18) = lVar6;
      *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
    }
    sljit_emit_op1(piVar2,0x20,1,0,0x8e,0);
    sljit_emit_op1(piVar2,0x20,4,0,0x7f,0xffffffffffffffff);
    sljit_emit_op_src_constprop_0_isra_0(piVar2,1);
    lVar6 = sljit_emit_label(piVar2);
    for (plVar3 = local_48; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      lVar9 = *plVar3;
      if ((lVar9 != 0) && (lVar6 != 0)) {
        *(long *)(lVar9 + 0x18) = lVar6;
        *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    sljit_emit_op1(piVar2,0x20,1,0,0x8e,0);
    sljit_emit_op1(piVar2,0x20,4,0,3,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      sljit_emit_op_src_constprop_0_isra_0(piVar2,1);
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
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined4 uVar18;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_48;
  undefined1 local_44;
  long local_40;
  
  piVar3 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (param_2 - param_5) * 4;
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    sljit_emit_op1(piVar3,0x20,1,0,0x8e);
    sljit_emit_op1(piVar3,0x20,3,0,0xd,0);
    sljit_emit_op2(piVar3,0x40,1,0,1,0,0x7f,(long)(param_2 * 4 + 4));
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      puVar13 = (undefined1 *)emit_x86_instruction(piVar3,1,1,0,0xd,0);
      if (puVar13 != (undefined1 *)0x0) {
        *puVar13 = 0x3b;
      }
    }
    sljit_emit_select_isra_0(piVar3,2,0xd,1,0,0xd);
  }
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,(long)(param_2 << 2));
  uVar6 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
  if (*piVar3 == 0) {
    lVar8 = *(long *)(piVar3 + 0x18);
    lVar9 = *(long *)(lVar8 + 8);
    uVar1 = lVar9 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar8 + 8) = uVar1;
      puVar12 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010ed00;
      }
      *puVar7 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar7;
      puVar12 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar11 = param_1[0x2d];
    *puVar12 = uVar6;
    puVar12[1] = uVar11;
    param_1[0x2d] = puVar12;
  }
LAB_0010ed00:
  if (param_3 == param_4) {
    sljit_emit_op1(piVar3,0x20,1,0,0x7f,(long)(int)param_3);
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,3,1,0);
    if (param_6 != param_7) {
      local_68 = 0;
      goto LAB_0010ed99;
    }
    uVar6 = 0;
    sljit_emit_op1(piVar3,0x20,1,0,0x7f,(long)(int)param_6);
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,4,1,0);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,3,3);
    sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,4,4);
    local_68 = 0;
  }
  else {
    uVar14 = param_3 ^ param_4;
    if ((uVar14 - 1 & uVar14) == 0) {
      sljit_emit_op1(piVar3,0x20,1,0,0x7f,(long)(int)(param_3 | param_4));
      sljit_emit_op1(piVar3,0x20,4,0,0x7f,(long)(int)uVar14);
      local_68 = 1;
    }
    else {
      sljit_emit_op1(piVar3,0x20,1,0,0x7f,(long)(int)param_3);
      sljit_emit_op1(piVar3,0x20,4,0,0x7f,(long)(int)param_4);
      local_68 = 2;
    }
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,3,1,0);
    sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,5,4,0);
    if (param_6 == param_7) {
      uVar6 = 0;
      sljit_emit_op1(piVar3,0x20,1,0,0x7f,(long)(int)param_6);
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,4,1,0);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,3,3);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,5,5);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,4,4);
    }
    else {
LAB_0010ed99:
      uVar14 = param_7 ^ param_6;
      if ((uVar14 - 1 & uVar14) == 0) {
        uVar6 = 1;
        sljit_emit_op1(piVar3,0x20,1,0,0x7f,(long)(int)(param_6 | param_7));
        sljit_emit_op1(piVar3,0x20,4,0,0x7f,(long)(int)uVar14);
      }
      else {
        uVar6 = 2;
        sljit_emit_op1(piVar3,0x20,1,0,0x7f,(long)(int)param_6);
        sljit_emit_op1(piVar3,0x20,4,0,0x7f,(long)(int)param_7);
      }
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,4,1,0);
      sljit_emit_simd_lane_mov_constprop_0_isra_0(piVar3,6,4,0);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,3,3);
      if (param_3 != param_4) {
        sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,5,5);
      }
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,4,4);
      sljit_emit_simd_lane_replicate_constprop_0_isra_0(piVar3,6,6);
    }
  }
  sljit_emit_op2(piVar3,0x42,1,0,2,0,0x7f,(ulong)uVar5);
  sljit_emit_op1(piVar3,0x20,4,0,2,0);
  if (*piVar3 == 0) {
    piVar3[0x26] = 0;
    emit_cum_binary(piVar3,0x25232120,2,0,2,0,0x7f,0xfffffffffffffff0);
  }
  sljit_emit_simd_mov_constprop_0_isra_0(piVar3,0x4004000,1,0);
  lVar15 = -(ulong)uVar5;
  lVar8 = sljit_emit_cmp(piVar3,3,1,0,2,0);
  sljit_emit_simd_mov_constprop_0_isra_0(piVar3,0x4000,2,lVar15);
  lVar9 = sljit_emit_jump(piVar3,0x24);
  lVar10 = sljit_emit_label(piVar3);
  if ((lVar10 != 0) && (lVar8 != 0)) {
    *(long *)(lVar8 + 0x18) = lVar10;
    *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
  }
  local_48 = 0xc86f0f66;
  sljit_emit_op_custom_isra_0(piVar3,&local_48,4);
  local_70 = (undefined1)uVar5;
  local_48 = CONCAT22(0xf973,(undefined2)local_48);
  local_44 = local_70;
  sljit_emit_op_custom_isra_0(piVar3,&local_48,5);
  lVar8 = sljit_emit_label(piVar3);
  if ((lVar8 != 0) && (lVar9 != 0)) {
    *(long *)(lVar9 + 0x18) = lVar8;
    *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
  }
  if (*piVar3 == 0) {
    piVar3[0x26] = 0;
    emit_cum_binary(piVar3,0x25232120,4,0,4,0,0x7f,0xf);
  }
  iVar17 = 0;
  do {
    uVar18 = 0;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar3,uVar6,iVar17,1,3,6,4);
    iVar16 = iVar17 + 1;
    uVar11 = CONCAT44(uVar18,7);
    fast_forward_char_pair_sse2_compare_constprop_0(piVar3,local_68,iVar17,0,2,5);
    iVar17 = iVar16;
  } while (iVar16 != 4);
  sljit_emit_simd_op2_constprop_0_isra_0(piVar3,uVar11);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar3);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,4,0);
  if (*piVar3 == 0) {
    piVar3[0x26] = 0;
    emit_shift_with_flags(piVar3,0x28,0,1,0,1,0,4,0);
  }
  lVar8 = sljit_emit_cmp(piVar3,1,1,0,0x7f,0);
  sljit_emit_op2(piVar3,0x42,2,0,2,0,4,0);
  lVar9 = sljit_emit_label(piVar3);
  sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,0x10);
  uVar11 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
  if (*piVar3 == 0) {
    lVar10 = *(long *)(piVar3 + 0x18);
    lVar4 = *(long *)(lVar10 + 8);
    uVar1 = lVar4 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar10 + 8) = uVar1;
      puVar12 = (undefined8 *)(lVar10 + 0x10 + lVar4);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010f1e6;
      }
      *puVar7 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar7;
      puVar12 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar2 = param_1[0x2d];
    *puVar12 = uVar11;
    puVar12[1] = uVar2;
    param_1[0x2d] = puVar12;
  }
LAB_0010f1e6:
  sljit_emit_simd_mov_constprop_0_isra_0(piVar3,0x4004000,1,0);
  sljit_emit_simd_mov_constprop_0_isra_0(piVar3,0x4000,2,lVar15);
  iVar17 = 0;
  do {
    uVar18 = 0;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar3,local_68,iVar17,0,2,5,4);
    iVar16 = iVar17 + 1;
    fast_forward_char_pair_sse2_compare_constprop_0(piVar3,uVar6,iVar17,1,3,6,CONCAT44(uVar18,7));
    iVar17 = iVar16;
  } while (iVar16 != 4);
  sljit_emit_simd_op2_constprop_0_isra_0(piVar3);
  sljit_emit_simd_sign_constprop_0_isra_0(piVar3);
  lVar10 = sljit_emit_cmp(piVar3,0,1,0,0x7f,0);
  if ((lVar9 != 0) && (lVar10 != 0)) {
    *(long *)(lVar10 + 0x18) = lVar9;
    *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
  }
  lVar9 = sljit_emit_label(piVar3);
  if ((lVar8 != 0) && (lVar9 != 0)) {
    *(long *)(lVar8 + 0x18) = lVar9;
    *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
  }
  local_48 = CONCAT13(local_48._3_1_,0xc00000);
  local_48 = CONCAT22(local_48._2_2_,0xbc0f);
  sljit_emit_op_custom_isra_0(piVar3,&local_48,3);
  uVar11 = 0;
  sljit_emit_op2(piVar3,0x40,2,0,2,0,1);
  uVar6 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
  if (*piVar3 == 0) {
    lVar8 = *(long *)(piVar3 + 0x18);
    lVar9 = *(long *)(lVar8 + 8);
    uVar1 = lVar9 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar8 + 8) = uVar1;
      puVar12 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    }
    else {
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar3 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2],lVar8,uVar1,uVar11);
      if (puVar7 == (undefined8 *)0x0) {
        *piVar3 = 2;
        goto LAB_0010f3be;
      }
      *puVar7 = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 **)(piVar3 + 0x18) = puVar7;
      puVar12 = puVar7 + 2;
      puVar7[1] = 0x10;
    }
    uVar11 = param_1[0x2d];
    *puVar12 = uVar6;
    puVar12[1] = uVar11;
    param_1[0x2d] = puVar12;
  }
LAB_0010f3be:
  sljit_emit_op2(piVar3,0x42,2,0,2,0,0x7f);
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    sljit_emit_op1(piVar3,0x20,0xd,0,3,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1  [16] move_back_isra_0(int *param_1,int param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_30;
  
  if ((param_2 != 0) && ((param_4 & 1) == 0)) {
    sljit_emit_op1(param_1,0x25,1,0,0x82,0xfffffffffffffffc);
    if (param_3 == (undefined8 *)0x0) {
      if (*param_1 == 0) {
        param_1[0x26] = 0;
        emit_cmp_binary(param_1,1,0,0x7f,0x110000);
      }
      sljit_emit_op_flags_constprop_0_isra_0(param_1,0x20,1,2);
      if (*param_1 == 0) {
        param_1[0x26] = 0;
        emit_shift_with_flags(param_1,0x20,0,1,0,1,0,0x7f,2);
      }
      uStack_30 = 0;
      uVar8 = 1;
      goto LAB_0010f726;
    }
    uVar8 = sljit_emit_cmp(param_1,3,1,0,0x7f,0x110000);
    if (*param_1 == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      lVar4 = *(long *)(lVar3 + 8);
      uVar1 = lVar4 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar3 + 8) = uVar1;
        puVar7 = (undefined8 *)(lVar3 + 0x10 + lVar4);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(param_1 + 0x12))
                           (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *param_1 = 2;
          goto LAB_0010f722;
        }
        *puVar6 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 **)(param_1 + 0x18) = puVar6;
        puVar7 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      uVar2 = *param_3;
      *puVar7 = uVar8;
      puVar7[1] = uVar2;
      *param_3 = puVar7;
    }
  }
LAB_0010f722:
  uStack_30 = 4;
  uVar8 = 0x7f;
LAB_0010f726:
  sljit_emit_op2(param_1,0x42,2,0,2,0);
  auVar5._8_8_ = uStack_30;
  auVar5._0_8_ = uVar8;
  return auVar5;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_recurse_data_isra_0
               (undefined8 *param_1,uint *param_2,uint *param_3,uint param_4,int param_5,
               uint param_6)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  byte *pbVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined4 local_11c;
  uint local_108;
  long local_c8 [9];
  undefined8 local_80;
  undefined4 local_78;
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
    local_58 = _LC24;
    local_68 = __LC25;
    uStack_60 = _UNK_00131578;
    local_80 = 0xffffffffffffffff;
    bVar3 = true;
    local_c8[8] = *param_1;
    local_78 = 0xffffffff;
    local_50 = 0;
    local_11c = 0xc;
  }
  else {
    if (param_4 - 1 < 3) {
      local_80 = 0xffffffffffffffff;
      local_78 = 0xffffffff;
      local_58 = _LC24;
      local_50 = 0;
      local_c8[8] = *param_1;
      local_68 = __LC25;
      uStack_60 = _UNK_00131578;
      if (1 < uVar4) {
        delayed_mem_copy_move(local_c8 + 8,0xc,(long)param_5,0xe,(long)*(int *)(param_1 + 10));
      }
      bVar3 = false;
      local_11c = 0xc;
      goto LAB_0010f9b5;
    }
    local_58 = _LC21;
    local_c8[8] = *param_1;
    local_80 = 0xffffffffffffffff;
    local_78 = 0xffffffff;
    local_50 = 0;
    local_68 = __LC22;
    uStack_60 = _UNK_00131568;
    delayed_mem_copy_move(local_c8 + 8,4,(long)param_5,0xe,(long)*(int *)(param_1 + 10));
    bVar3 = false;
    local_11c = 4;
  }
  delayed_mem_copy_move(local_c8 + 8,0xe,(long)*(int *)(param_1 + 10),local_11c,(long)param_5);
LAB_0010f9b5:
  param_5 = param_5 + 8;
  local_108 = param_4 & 0xfffffffd;
  if (param_2 < param_3) {
    do {
      uVar10 = *param_2;
      if (0x8f < uVar10) {
        uVar10 = uVar10 - 0x90;
        if (uVar10 < 0x13) {
          uVar8 = 1L << ((byte)uVar10 & 0x3f);
          if ((uVar8 & 0x51400) == 0) {
            if (uVar10 == 0xf) {
              puVar6 = param_2 + 1;
              pbVar12 = (byte *)(((long)*(int *)((long)param_1 + 100) >> 6) + param_1[0x11]);
              bVar1 = *pbVar12;
              bVar9 = (byte)(1 << ((byte)((long)*(int *)((long)param_1 + 100) >> 3) & 7));
              if ((bVar1 & bVar9) == 0) {
                *pbVar12 = bVar1 | bVar9;
                local_c8[0] = (long)*(int *)((long)param_1 + 100);
                goto joined_r0x0011023c;
              }
              goto joined_r0x0010fdc2;
            }
            if ((uVar8 & 1) != 0) goto switchD_0010f9fd_caseD_7f;
            goto switchD_0010f9fd_caseD_50;
          }
          iVar5 = 0;
          if ((param_6 & 1) == 0) {
LAB_001102dd:
            uVar10 = *(uint *)((long)param_1 + 100);
          }
          else {
            pbVar12 = (byte *)(((long)*(int *)(param_1 + 0xc) >> 6) + param_1[0x11]);
            bVar1 = *pbVar12;
            bVar9 = (byte)(1 << ((byte)((long)*(int *)(param_1 + 0xc) >> 3) & 7));
            if ((bVar1 & bVar9) != 0) goto LAB_001102dd;
            iVar5 = 1;
            *pbVar12 = bVar1 | bVar9;
            uVar10 = *(uint *)((long)param_1 + 100);
            local_c8[2] = (long)*(int *)(param_1 + 0xc);
          }
          if (uVar10 != 0) {
            lVar15 = (long)(int)uVar10;
            uVar10 = 0;
            pbVar12 = (byte *)((lVar15 >> 6) + param_1[0x11]);
            bVar1 = *pbVar12;
            bVar9 = (byte)(1 << ((byte)(lVar15 >> 3) & 7));
            if ((bVar1 & bVar9) == 0) {
              uVar10 = 1;
              *pbVar12 = bVar1 | bVar9;
              local_c8[0] = (long)*(int *)((long)param_1 + 100);
            }
          }
          iVar16 = 0;
          puVar6 = param_2 + (param_2[1] + 3);
LAB_001102f6:
          if (uVar4 < 2) {
            iVar17 = uVar10 << 3;
            goto LAB_0010fb18;
          }
          if (uVar10 == 1) goto LAB_0010fbf2;
          goto LAB_0010fb1b;
        }
switchD_0010f9fd_caseD_50:
        puVar6 = (uint *)next_opcode();
        goto LAB_0010fa20;
      }
      if (uVar10 < 0x4e) {
        if (uVar10 != 3) {
          if (uVar10 - 0x21 < 0x2d) {
            uVar8 = 1L << ((byte)(uVar10 - 0x21) & 0x3f);
            if ((uVar8 & 0x1d00e807403a) != 0) {
              puVar6 = param_2 + 2;
              local_c8[0] = (long)*(int *)((long)param_2 + (param_1[3] - param_1[2]));
              goto joined_r0x0011032b;
            }
            if ((uVar8 & 0x2801400a005) != 0) goto switchD_0010f9fd_caseD_5b;
            if ((uVar8 & 0x3001800c0) != 0) goto switchD_0010f9fd_caseD_4e;
          }
          goto switchD_0010f9fd_caseD_50;
        }
        iVar5 = 0;
        if ((param_6 & 1) != 0) {
          pbVar12 = (byte *)(((long)*(int *)((long)param_1 + 0x44) >> 6) + param_1[0x11]);
          bVar1 = *pbVar12;
          bVar9 = (byte)(1 << ((byte)((long)*(int *)((long)param_1 + 0x44) >> 3) & 7));
          if ((bVar1 & bVar9) == 0) {
            iVar5 = 1;
            *pbVar12 = bVar1 | bVar9;
            local_c8[2] = (long)*(int *)((long)param_1 + 0x44);
          }
        }
        puVar6 = param_2 + 1;
        if (uVar4 < 2) {
          iVar17 = 0;
          iVar16 = 0;
          goto LAB_0010fb18;
        }
        goto LAB_0010fdd2;
      }
      switch(uVar10) {
      case 0x4e:
      case 0x4f:
switchD_0010f9fd_caseD_4e:
        puVar6 = param_2 + 3;
        local_c8[0] = (long)*(int *)((long)param_2 + (param_1[3] - param_1[2]));
        goto joined_r0x0010fdbb;
      default:
        goto switchD_0010f9fd_caseD_50;
      case 0x55:
      case 0x57:
        puVar6 = param_2 + 1;
        local_c8[0] = (long)*(int *)((long)param_2 + (param_1[3] - param_1[2]));
        goto joined_r0x0010fdbb;
      case 0x56:
      case 0x58:
      case 0x59:
      case 0x5a:
        puVar6 = param_2 + 1;
        local_c8[0] = (long)*(int *)((long)param_2 + (param_1[3] - param_1[2]));
joined_r0x0011032b:
        if (local_c8[0] != 0) {
          pbVar12 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar1 = *pbVar12;
          bVar11 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          bVar9 = bVar1 & bVar11;
          goto joined_r0x0010faf9;
        }
        break;
      case 0x5b:
      case 0x5c:
switchD_0010f9fd_caseD_5b:
        puVar6 = param_2 + 2;
        local_c8[0] = (long)*(int *)((long)param_2 + (param_1[3] - param_1[2]));
joined_r0x0010fdbb:
        if (local_c8[0] == 0) break;
        pbVar12 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
        bVar1 = *pbVar12;
        bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
        if ((bVar1 & bVar9) != 0) break;
        *pbVar12 = bVar1 | bVar9;
        local_c8[1] = local_c8[0] + 8;
        if (uVar4 < 2) {
LAB_0010fd87:
          iVar17 = 0x10;
          iVar16 = 0;
          iVar5 = 0;
          goto LAB_0010fb18;
        }
        iVar5 = 0;
        iVar16 = 0;
        uVar10 = 2;
LAB_0010fbf2:
        iVar14 = param_5 + uVar10 * 8;
        plVar13 = local_c8;
        iVar17 = param_5;
        do {
          lVar15 = (long)iVar17;
          if (!bVar3) {
            while (delayed_mem_copy_move(local_c8 + 8,local_11c,lVar15,0xe,*plVar13), param_4 != 4)
            {
              iVar17 = iVar17 + 8;
              if (iVar17 == iVar14) goto LAB_0010fc6b;
              plVar13 = plVar13 + 1;
              lVar15 = (long)iVar17;
            }
          }
          lVar7 = *plVar13;
          iVar17 = iVar17 + 8;
          plVar13 = plVar13 + 1;
          delayed_mem_copy_move(local_c8 + 8,0xe,lVar7,local_11c,lVar15);
        } while (iVar17 != iVar14);
LAB_0010fc6b:
        param_5 = param_5 + uVar10 * 8;
        goto LAB_0010fb1b;
      case 0x6e:
      case 0x6f:
      case 0x70:
        lVar15 = 0x24;
        if (uVar10 == 0x70) {
          lVar15 = (long)(int)param_2[1] << 2;
        }
        puVar6 = (uint *)((long)param_2 + lVar15);
        iVar5 = *(int *)((long)param_2 + (param_1[3] - param_1[2]));
        if (iVar5 == 0) {
          iVar14 = 0;
          iVar5 = 0;
          iVar16 = 0;
          if (1 < uVar4) goto LAB_0010fdd2;
          goto LAB_00110017;
        }
        lVar15 = (long)iVar5;
        local_c8[0] = lVar15;
        iVar5 = get_class_iterator_size();
        if (iVar5 != 2) goto joined_r0x0011023c;
        pbVar12 = (byte *)((lVar15 >> 6) + param_1[0x11]);
        bVar1 = *pbVar12;
        bVar9 = (byte)(1 << ((byte)(lVar15 >> 3) & 7));
        if ((bVar1 & bVar9) != 0) goto joined_r0x0011023c;
        *pbVar12 = bVar1 | bVar9;
        local_c8[1] = lVar15 + 8;
        if (1 < uVar4) {
          iVar5 = 0;
          iVar16 = 0;
          uVar10 = 2;
          goto LAB_0010fbf2;
        }
        goto LAB_0010fd87;
      case 0x75:
        iVar5 = 0;
        if ((param_6 & 1) != 0) {
          iVar5 = *(int *)((long)param_1 + 0xac);
          if (iVar5 != 0) {
            iVar5 = 0;
            pbVar12 = (byte *)(((long)*(int *)((long)param_1 + 0x44) >> 6) + param_1[0x11]);
            bVar1 = *pbVar12;
            bVar9 = (byte)(1 << ((byte)((long)*(int *)((long)param_1 + 0x44) >> 3) & 7));
            if ((bVar1 & bVar9) == 0) {
              iVar5 = 1;
              *pbVar12 = bVar1 | bVar9;
              local_c8[2] = (long)*(int *)((long)param_1 + 0x44);
            }
          }
          iVar16 = *(int *)(param_1 + 0xc);
          if (iVar16 != 0) {
            pbVar12 = (byte *)(((long)iVar16 >> 6) + param_1[0x11]);
            bVar1 = *pbVar12;
            bVar9 = (byte)(1 << ((byte)((long)iVar16 >> 3) & 7));
            if ((bVar1 & bVar9) == 0) {
              *pbVar12 = bVar1 | bVar9;
              lVar15 = (long)iVar5;
              iVar5 = iVar5 + 1;
              local_c8[lVar15 + 2] = (long)*(int *)(param_1 + 0xc);
            }
          }
        }
        iVar16 = *(int *)(param_1 + 0xd);
        if (iVar16 != 0) {
          lVar15 = (long)iVar16;
          iVar16 = 0;
          pbVar12 = (byte *)((lVar15 >> 6) + param_1[0x11]);
          bVar1 = *pbVar12;
          bVar9 = (byte)(1 << ((byte)(lVar15 >> 3) & 7));
          if ((bVar1 & bVar9) == 0) {
            iVar16 = 1;
            *pbVar12 = bVar1 | bVar9;
            local_c8[4] = (long)*(int *)(param_1 + 0xd);
          }
        }
        puVar6 = param_2 + 2;
        goto joined_r0x00110011;
      case 0x79:
        lVar15 = param_1[2];
        lVar7 = param_1[3];
        local_c8[0] = (long)*(int *)((long)param_2 + (lVar7 - lVar15));
        if (local_c8[0] != 0) {
          pbVar12 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar1 = *pbVar12;
          bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          bVar18 = (bVar1 & bVar9) == 0;
          if (bVar18) {
            *pbVar12 = bVar1 | bVar9;
            lVar7 = param_1[3];
            lVar15 = param_1[2];
          }
          uVar10 = (uint)bVar18;
          iVar16 = 0;
          iVar5 = 0;
          puVar6 = param_2 + (long)*(int *)((long)param_2 + (lVar7 - lVar15) + 4) + 2;
          goto LAB_001102f6;
        }
        puVar6 = param_2 + 2;
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
switchD_0010f9fd_caseD_7f:
        puVar6 = param_2 + 2;
        local_c8[0] = (long)*(int *)((long)param_2 + (param_1[3] - param_1[2]));
        pbVar12 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
        bVar1 = *pbVar12;
        bVar11 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
        bVar9 = bVar1 & bVar11;
joined_r0x0010faf9:
        if (bVar9 != 0) break;
        *pbVar12 = bVar1 | bVar11;
joined_r0x0011023c:
        if (uVar4 < 2) {
          iVar17 = 8;
          iVar16 = 0;
          iVar5 = 0;
          goto LAB_0010fb18;
        }
        iVar5 = 0;
        iVar16 = 0;
        uVar10 = 1;
        goto LAB_0010fbf2;
      case 0x89:
      case 0x8e:
        uVar10 = param_2[2];
        iVar16 = 0;
        local_c8[4] = (long)(int)(uVar10 * 0x10 + *(int *)((long)param_1 + 0x44));
        pbVar12 = (byte *)((local_c8[4] >> 6) + param_1[0x11]);
        bVar1 = *pbVar12;
        bVar9 = (byte)(1 << ((byte)(local_c8[4] >> 3) & 7));
        if ((bVar1 & bVar9) == 0) {
          iVar16 = 2;
          *pbVar12 = bVar1 | bVar9;
          local_c8[5] = local_c8[4] + 8;
        }
        iVar5 = *(int *)(param_1 + 0xd);
        if (iVar5 != 0) {
          pbVar12 = (byte *)(((long)iVar5 >> 6) + param_1[0x11]);
          bVar1 = *pbVar12;
          bVar9 = (byte)(1 << ((byte)((long)iVar5 >> 3) & 7));
          if ((bVar1 & bVar9) == 0) {
            *pbVar12 = bVar1 | bVar9;
            lVar15 = (long)iVar16;
            iVar16 = iVar16 + 1;
            local_c8[lVar15 + 4] = (long)*(int *)(param_1 + 0xd);
          }
        }
        puVar6 = param_2 + 3;
        if (*(char *)(param_1[5] + (long)(int)uVar10) == '\0') {
          local_c8[0] = (long)(int)(*(int *)(param_1 + 8) + uVar10 * 8);
          pbVar12 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar1 = *pbVar12;
          bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          if ((bVar1 & bVar9) == 0) {
            *pbVar12 = bVar1 | bVar9;
            if (1 < uVar4) {
              iVar5 = 0;
              uVar10 = 1;
              goto LAB_0010fbf2;
            }
            iVar17 = 8;
            iVar5 = 0;
            goto LAB_0010fb18;
          }
        }
        iVar5 = 0;
joined_r0x00110011:
        iVar14 = iVar5;
        if (uVar4 < 2) {
LAB_00110017:
          iVar17 = 0;
          iVar5 = iVar14;
          goto LAB_0010fb18;
        }
        goto LAB_0010fb1b;
      case 0x8a:
      case 0x8f:
        uVar2 = param_2[2];
        lVar15 = param_1[0x11];
        iVar16 = 0;
        local_c8[4] = (long)(int)(uVar2 * 0x10 + *(int *)((long)param_1 + 0x44));
        pbVar12 = (byte *)((local_c8[4] >> 6) + lVar15);
        bVar1 = *pbVar12;
        bVar9 = (byte)(1 << ((byte)(local_c8[4] >> 3) & 7));
        if ((bVar1 & bVar9) == 0) {
          iVar16 = 2;
          local_c8[5] = local_c8[4] + 8;
          *pbVar12 = bVar1 | bVar9;
          lVar15 = param_1[0x11];
        }
        iVar5 = *(int *)(param_1 + 0xd);
        if (iVar5 != 0) {
          pbVar12 = (byte *)(((long)iVar5 >> 6) + lVar15);
          bVar1 = *pbVar12;
          bVar9 = (byte)(1 << ((byte)((long)iVar5 >> 3) & 7));
          if ((bVar1 & bVar9) == 0) {
            *pbVar12 = bVar1 | bVar9;
            lVar15 = (long)iVar16;
            iVar16 = iVar16 + 1;
            local_c8[lVar15 + 4] = (long)*(int *)(param_1 + 0xd);
            lVar15 = param_1[0x11];
          }
        }
        local_c8[0] = (long)*(int *)((long)param_2 + (param_1[3] - param_1[2]));
        pbVar12 = (byte *)((local_c8[0] >> 6) + lVar15);
        bVar1 = *pbVar12;
        bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
        bVar18 = (bVar1 & bVar9) == 0;
        if (bVar18) {
          *pbVar12 = bVar1 | bVar9;
          lVar15 = param_1[0x11];
        }
        uVar10 = (uint)bVar18;
        puVar6 = param_2 + 3;
        lVar7 = (long)(int)(*(int *)(param_1 + 8) + uVar2 * 8);
        pbVar12 = (byte *)(lVar15 + (lVar7 >> 6));
        bVar1 = *pbVar12;
        bVar9 = (byte)(1 << ((byte)(lVar7 >> 3) & 7));
        if ((bVar1 & bVar9) != 0) {
          iVar5 = 0;
          goto LAB_001102f6;
        }
        *pbVar12 = bVar1 | bVar9;
        uVar10 = bVar18 + 1;
        local_c8[(int)(uint)bVar18] = lVar7;
        if (uVar4 < 2) {
          iVar17 = uVar10 * 8;
          iVar5 = 0;
          goto LAB_0010fb18;
        }
        iVar5 = 0;
        goto LAB_0010fbf2;
      case 0x8b:
        puVar6 = param_2 + 2;
        if (param_2[param_2[1]] - 0x7a < 2) {
          local_c8[0] = (long)*(int *)((long)param_2 + (param_1[3] - param_1[2]));
          pbVar12 = (byte *)((local_c8[0] >> 6) + param_1[0x11]);
          bVar1 = *pbVar12;
          bVar9 = (byte)(1 << ((byte)(local_c8[0] >> 3) & 7));
          if ((bVar1 & bVar9) == 0) {
            *pbVar12 = bVar1 | bVar9;
            goto joined_r0x0011023c;
          }
        }
      }
joined_r0x0010fdc2:
      if (uVar4 < 2) {
        iVar17 = 0;
        iVar16 = 0;
        iVar5 = 0;
LAB_0010fb18:
        param_5 = param_5 + iVar17;
LAB_0010fb1b:
        iVar17 = iVar16 * 8;
        if (local_108 == 1) {
LAB_0010fb35:
          param_5 = param_5 + iVar17;
        }
        else if (iVar16 != 0) {
          plVar13 = local_c8 + 4;
          iVar14 = param_5;
          do {
            lVar15 = *plVar13;
            lVar7 = (long)iVar14;
            if (!bVar3) {
              while (delayed_mem_copy_move(local_c8 + 8,local_11c,lVar7,0xe,lVar15), param_4 != 4) {
                iVar14 = iVar14 + 8;
                plVar13 = plVar13 + 1;
                if (iVar17 + param_5 == iVar14) goto LAB_001101bd;
                lVar15 = *plVar13;
                lVar7 = (long)iVar14;
              }
            }
            iVar14 = iVar14 + 8;
            plVar13 = plVar13 + 1;
            delayed_mem_copy_move(local_c8 + 8,0xe,lVar15,local_11c,lVar7);
          } while (iVar17 + param_5 != iVar14);
LAB_001101bd:
          param_5 = param_5 + iVar16 * 8;
        }
      }
      else {
        iVar5 = 0;
LAB_0010fdd2:
        iVar17 = 0;
        if (local_108 == 1) goto LAB_0010fb35;
      }
      if ((param_4 == 4) || (param_4 == 1)) {
        param_5 = param_5 + iVar5 * 8;
      }
      else if (iVar5 != 0) {
        iVar17 = param_5 + iVar5 * 8;
        plVar13 = local_c8 + 2;
        lVar7 = (long)param_5;
        lVar15 = local_c8[2];
        iVar16 = param_5;
        if (bVar3) {
          while( true ) {
            iVar16 = iVar16 + 8;
            delayed_mem_copy_move(local_c8 + 8,0xe,lVar15,local_11c,lVar7);
            if (iVar17 == iVar16) break;
            plVar13 = plVar13 + 1;
            lVar7 = (long)iVar16;
            lVar15 = *plVar13;
          }
        }
        else {
          while( true ) {
            iVar16 = iVar16 + 8;
            delayed_mem_copy_move(local_c8 + 8,local_11c,lVar7,0xe,lVar15);
            if (iVar17 == iVar16) break;
            plVar13 = plVar13 + 1;
            lVar7 = (long)iVar16;
            lVar15 = *plVar13;
          }
        }
        param_5 = param_5 + iVar5 * 8;
      }
LAB_0010fa20:
      param_2 = puVar6;
    } while (puVar6 < param_3);
  }
  lVar15 = local_c8[8];
  iVar16 = 3;
  iVar5 = local_50;
  do {
    lVar7 = (long)iVar5;
    uVar4 = *(uint *)((long)&local_80 + lVar7 * 4);
    if (uVar4 != 0xffffffff) {
      sljit_emit_op1(lVar15,0x20,uVar4 | 0x80,(long)*(int *)((long)&local_80 + (lVar7 + 3) * 4),
                     *(undefined4 *)((long)&local_68 + lVar7 * 4),0);
    }
    iVar5 = (iVar5 + 1) % 3;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int * compile_reverse_matchingpath(undefined8 *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 extraout_RDX;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  int *local_50;
  
  piVar3 = (int *)*param_1;
  if (*param_2 == 0x7d) {
    uVar13 = param_2[1];
    local_50 = param_2 + 2;
    puVar12 = (undefined8 *)(param_3 + 0x18);
    pauVar4 = (undefined1 (*) [16])0x0;
    uVar14 = uVar13;
  }
  else {
    if ((*piVar3 != 0) || (pauVar4 = (undefined1 (*) [16])ensure_abuf(piVar3,0x30), *piVar3 != 0)) {
      return (int *)0x0;
    }
    *pauVar4 = (undefined1  [16])0x0;
    pauVar4[1] = (undefined1  [16])0x0;
    pauVar4[2] = (undefined1  [16])0x0;
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar13 = param_2[1];
    uVar14 = param_2[2];
    *(int **)pauVar4[2] = param_2;
    *(undefined8 *)*pauVar4 = uVar7;
    local_50 = param_2 + 3;
    *(undefined1 (**) [16])(param_3 + 0x10) = pauVar4;
    puVar12 = (undefined8 *)(pauVar4[1] + 8);
  }
  sljit_emit_op1(piVar3,0x20,4,0,0x89,0x10);
  if (*(int *)(param_1 + 0x3c) == 0) {
    if (uVar13 != 0) {
      sljit_emit_op2(piVar3,0x42,2,0,2,0,0x7f,uVar13 * 4);
      uVar7 = sljit_emit_cmp(piVar3,2,2,0,4,0);
      if (*piVar3 == 0) {
        lVar10 = *(long *)(piVar3 + 0x18);
        lVar11 = *(long *)(lVar10 + 8);
        uVar1 = lVar11 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar10 + 8) = uVar1;
          puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar11);
        }
        else {
          puVar8 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar8 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_001109cb;
          }
          *puVar8 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar8;
          puVar9 = puVar8 + 2;
          puVar8[1] = 0x10;
        }
        uVar2 = *puVar12;
        *puVar9 = uVar7;
        puVar9[1] = uVar2;
        *puVar12 = puVar9;
      }
    }
LAB_001109cb:
    if (uVar13 < uVar14) {
      sljit_emit_op1(piVar3,0x20,0x8c,0x18,2,0);
      sljit_emit_op2(piVar3,0x42,2,0,2,0,0x7f,(uVar14 - uVar13) * 4);
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        puVar6 = (undefined1 *)emit_x86_instruction(piVar3,1,2,0,4,0);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x3b;
        }
      }
      sljit_emit_select_isra_0(piVar3,2,2,4,0,2);
      goto LAB_00110d46;
    }
LAB_001109d4:
    uVar7 = *param_1;
    if (*(int *)(param_1 + 0x14) != 2) {
      if (*(int *)(param_1 + 0x14) != 4) {
        return local_50;
      }
      goto LAB_00110f00;
    }
LAB_00110e60:
    sljit_emit_op2(uVar7,0x40,1,0,0x8e,(long)*(int *)((long)param_1 + 0x54),0x7f,1);
    lVar10 = sljit_emit_cmp(uVar7,5,1,0,2,0);
    sljit_emit_op1(uVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
    lVar11 = sljit_emit_label(uVar7);
  }
  else {
    if (uVar13 != 0) {
      sljit_emit_op1(piVar3,0x20,3,0,0x7f,uVar13);
      lVar10 = sljit_emit_label(piVar3);
      uVar7 = sljit_emit_cmp(piVar3,5,2,0,4,0);
      if (*piVar3 == 0) {
        lVar11 = *(long *)(piVar3 + 0x18);
        lVar5 = *(long *)(lVar11 + 8);
        uVar1 = lVar5 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar11 + 8) = uVar1;
          puVar9 = (undefined8 *)(lVar11 + 0x10 + lVar5);
        }
        else {
          puVar8 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar8 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_00110c12;
          }
          *puVar8 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar8;
          puVar9 = puVar8 + 2;
          puVar8[1] = 0x10;
        }
        uVar2 = *puVar12;
        *puVar9 = uVar7;
        puVar9[1] = uVar2;
        *puVar12 = puVar9;
      }
LAB_00110c12:
      move_back_isra_0(*param_1,*(undefined4 *)((long)param_1 + 0x1e4),puVar12,0);
      uVar7 = extraout_RDX;
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        uVar7 = 1;
        emit_non_cum_binary(piVar3,0x2d2b2928,3,0,3,0,0x7f);
      }
      lVar11 = sljit_emit_jump(piVar3,1,uVar7);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        *(long *)(lVar11 + 0x18) = lVar10;
        *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    if (uVar14 <= uVar13) goto LAB_001109d4;
    sljit_emit_op1(piVar3,0x20,0x8c,0x18,2,0);
    sljit_emit_op1(piVar3,0x20,3,0,0x7f,uVar14 - uVar13);
    lVar10 = sljit_emit_label(piVar3);
    lVar11 = sljit_emit_cmp(piVar3,5,2,0,4,0);
    move_back_isra_0(*param_1,*(undefined4 *)((long)param_1 + 0x1e4),puVar12,0);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      emit_non_cum_binary(piVar3,0x2d2b2928,3,0,3,0,0x7f,1);
    }
    lVar5 = sljit_emit_jump(piVar3,1);
    if ((lVar10 != 0) && (lVar5 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar10;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar10 = sljit_emit_label(piVar3);
    if ((lVar11 != 0) && (lVar10 != 0)) {
      *(long *)(lVar11 + 0x18) = lVar10;
      *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_00110d46:
    sljit_emit_op1(piVar3,0x20,0x8c,0x10,2,0);
    uVar7 = *param_1;
    if (*(int *)(param_1 + 0x14) == 2) goto LAB_00110e60;
    if (*(int *)(param_1 + 0x14) != 4) goto LAB_00110d82;
LAB_00110f00:
    lVar10 = sljit_emit_cmp(uVar7,5,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
    sljit_emit_op1(uVar7,0x20,0x8e,(long)*(int *)((long)param_1 + 0x54),2,0);
    lVar11 = sljit_emit_label(uVar7);
  }
  if ((lVar11 != 0) && (lVar10 != 0)) {
    *(long *)(lVar10 + 0x18) = lVar11;
    *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
  }
LAB_00110d82:
  if (uVar13 < uVar14) {
    uVar7 = sljit_emit_label(piVar3);
    *(undefined8 *)(pauVar4[2] + 8) = uVar7;
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
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  char cVar18;
  byte *pbVar19;
  long extraout_RDX;
  byte *pbVar20;
  long lVar21;
  char *pcVar22;
  int iVar23;
  int iVar24;
  char *pcVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  bool bVar30;
  undefined1 uVar31;
  undefined4 uVar33;
  int local_188;
  undefined4 local_16c;
  char local_168 [4];
  uint local_164 [71];
  char local_48 [8];
  long local_40;
  undefined2 uVar32;
  
  piVar4 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar22 = local_168;
  pcVar25 = pcVar22;
  do {
    pcVar25[0] = '\0';
    pcVar25[1] = '\0';
    pcVar9 = pcVar25 + 0x60;
    pcVar25[0x18] = '\0';
    pcVar25[0x19] = '\0';
    pcVar25[0x30] = '\0';
    pcVar25[0x31] = '\0';
    pcVar25[0x48] = '\0';
    pcVar25[0x49] = '\0';
    pcVar25 = pcVar9;
  } while (local_48 != pcVar9);
  local_16c = 10000;
  iVar6 = scan_prefix(param_1,param_1[2],pcVar22,0xc,&local_16c);
  if (iVar6 < 1) {
LAB_00111779:
    uVar10 = 0;
    goto LAB_0011177b;
  }
  pcVar25 = pcVar22;
  do {
    while (cVar18 = *pcVar25, cVar18 == '\x01') {
      pcVar9 = pcVar25 + 0x18;
      pcVar25[1] = (pcVar25[1] == '\x01') * '\x02' + '\x05';
      *(undefined4 *)(pcVar25 + 8) = *(undefined4 *)(pcVar25 + 4);
      pcVar25 = pcVar9;
      if (pcVar9 == pcVar22 + (long)iVar6 * 0x18) goto LAB_0011109e;
    }
    if (cVar18 == '\x02') {
      if (((*(uint *)(pcVar25 + 4) ^ *(uint *)(pcVar25 + 8)) - 1 &
          (*(uint *)(pcVar25 + 4) ^ *(uint *)(pcVar25 + 8))) == 0) {
        pcVar25[1] = (pcVar25[1] == '\x02') * '\x02' + '\x04';
      }
      else {
        cVar18 = '\x02';
        if (pcVar25[1] == '\x02') {
          cVar18 = '\x03';
        }
        pcVar25[1] = cVar18;
      }
    }
    else {
      pcVar25[1] = cVar18 != -1;
    }
    pcVar25 = pcVar25 + 0x18;
  } while (pcVar25 != pcVar22 + (long)iVar6 * 0x18);
LAB_0011109e:
  if (cpu_feature_list == 0) {
    get_cpu_features();
    if ((cpu_feature_list & 4) != 0) goto LAB_00111600;
LAB_001110b4:
    bVar30 = false;
    iVar8 = 0;
    iVar7 = 0;
    iVar24 = -1;
    iVar26 = 3;
    do {
      while (iVar27 = iVar24, !bVar30) {
        if ((iVar7 < iVar6) && (bVar30 = *pcVar22 != -1, bVar30)) {
          iVar8 = iVar7;
        }
LAB_001110e1:
        iVar7 = iVar7 + 1;
        pcVar22 = pcVar22 + 0x18;
        iVar24 = iVar27;
        if (iVar7 == iVar6 + 1) goto LAB_00111130;
      }
      iVar23 = iVar7 - iVar8;
      if ((iVar23 <= iVar26) || (iVar27 = iVar7 + -1, pcVar22[-0x18] == -1)) {
        bVar30 = false;
        iVar27 = iVar24;
        if (iVar7 < iVar6) {
          bVar30 = *pcVar22 != -1;
        }
        goto LAB_001110e1;
      }
      iVar26 = iVar23;
      if (iVar6 <= iVar7) {
        bVar30 = false;
        goto LAB_001110e1;
      }
      bVar30 = *pcVar22 != -1;
      iVar7 = iVar7 + 1;
      pcVar22 = pcVar22 + 0x18;
      iVar24 = iVar27;
    } while (iVar7 != iVar6 + 1);
LAB_00111130:
    puVar14 = (undefined8 *)0x0;
    if (iVar27 < 0) {
LAB_0011113b:
      pbVar19 = (byte *)(local_168 + 1);
      iVar8 = 0;
      iVar24 = -1;
      do {
        while (iVar8 == iVar27) {
LAB_00111163:
          iVar8 = iVar8 + 1;
          pbVar19 = pbVar19 + 0x18;
          if (iVar6 == iVar8) goto LAB_0011118b;
        }
        if (iVar24 != -1) {
          if ((byte)local_168[(long)iVar24 * 0x18 + 1] < *pbVar19) {
            iVar24 = iVar8;
          }
          goto LAB_00111163;
        }
        if (1 < *pbVar19) {
          iVar24 = iVar8;
        }
        iVar8 = iVar8 + 1;
        pbVar19 = pbVar19 + 0x18;
      } while (iVar6 != iVar8);
LAB_0011118b:
      if (iVar27 < 0) {
        if (iVar24 < 0) goto LAB_00111779;
        fast_forward_first_char2
                  (param_1,*(undefined4 *)(local_168 + (long)iVar24 * 0x18 + 4),
                   local_164[(long)iVar24 * 6 + 1],iVar24);
      }
      else {
        lVar21 = (long)(iVar6 << 2);
        if (*(int *)((long)param_1 + 0x5c) == 0) {
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_non_cum_binary(piVar4,0x2d2b2928,0xd,0,0xd,0,0x7f,lVar21);
          }
          uVar10 = sljit_emit_jump(piVar4,2);
          if (*piVar4 == 0) {
            lVar13 = *(long *)(piVar4 + 0x18);
            lVar15 = *(long *)(lVar13 + 8);
            uVar1 = lVar15 + 0x10;
            if (uVar1 < 0xff1) {
              *(ulong *)(lVar13 + 8) = uVar1;
              puVar11 = (undefined8 *)(lVar13 + 0x10 + lVar15);
            }
            else {
              puVar16 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
              if (puVar16 == (undefined8 *)0x0) {
                *piVar4 = 2;
                goto LAB_001112ed;
              }
              *puVar16 = *(undefined8 *)(piVar4 + 0x18);
              *(undefined8 **)(piVar4 + 0x18) = puVar16;
              puVar11 = puVar16 + 2;
              puVar16[1] = 0x10;
            }
            uVar2 = param_1[0x2d];
            *puVar11 = uVar10;
            puVar11[1] = uVar2;
            param_1[0x2d] = puVar11;
          }
        }
        else {
          sljit_emit_op1(piVar4,0x20,1,0,0x8e);
          sljit_emit_op1(piVar4,0x20,3,0,0xd,0);
          lVar13 = extraout_RDX;
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar13 = lVar21;
            emit_non_cum_binary(piVar4,0x2d2b2928,0xd,0,0xd,0,0x7f);
          }
          uVar10 = sljit_emit_jump(piVar4,2,lVar13);
          if (*piVar4 == 0) {
            lVar13 = *(long *)(piVar4 + 0x18);
            uVar1 = *(long *)(lVar13 + 8) + 0x10;
            if (uVar1 < 0xff1) {
              puVar11 = (undefined8 *)(lVar13 + 0x10 + *(long *)(lVar13 + 8));
              *(ulong *)(lVar13 + 8) = uVar1;
              uVar2 = param_1[0x2d];
              *puVar11 = uVar10;
              puVar11[1] = uVar2;
              param_1[0x2d] = puVar11;
LAB_0011129d:
              piVar4[0x26] = 0;
              puVar12 = (undefined1 *)emit_x86_instruction(piVar4,1,0xd,0,1,0);
              if (puVar12 != (undefined1 *)0x0) {
                *puVar12 = 0x3b;
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
                uVar2 = param_1[0x2d];
                *puVar11 = *(undefined8 *)(piVar4 + 0x18);
                iVar6 = *piVar4;
                *(undefined8 **)(piVar4 + 0x18) = puVar11;
                puVar11[1] = 0x10;
                puVar11[2] = uVar10;
                puVar11[3] = uVar2;
                param_1[0x2d] = puVar11 + 2;
                if (iVar6 == 0) goto LAB_0011129d;
              }
            }
          }
          sljit_emit_select_isra_0(piVar4,4,0xd,1,0,0xd);
        }
LAB_001112ed:
        sljit_emit_op1(piVar4,0x20,5,0,0x7f,puVar14);
        lVar13 = sljit_emit_label(piVar4);
        uVar10 = sljit_emit_cmp(piVar4,4,2,0,0xd,0);
        if (*piVar4 == 0) {
          lVar15 = *(long *)(piVar4 + 0x18);
          lVar17 = *(long *)(lVar15 + 8);
          uVar1 = lVar17 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar15 + 8) = uVar1;
            puVar14 = (undefined8 *)(lVar15 + 0x10 + lVar17);
          }
          else {
            puVar11 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
            if (puVar11 == (undefined8 *)0x0) {
              *piVar4 = 2;
              goto LAB_001113a4;
            }
            *puVar11 = *(undefined8 *)(piVar4 + 0x18);
            *(undefined8 **)(piVar4 + 0x18) = puVar11;
            puVar14 = puVar11 + 2;
            puVar11[1] = 0x10;
          }
          uVar2 = param_1[0x2d];
          *puVar14 = uVar10;
          puVar14[1] = uVar2;
          param_1[0x2d] = puVar14;
        }
LAB_001113a4:
        sljit_emit_op1(piVar4,0x21,1,0,0x82,(long)(iVar27 * 4));
        sljit_emit_op1(piVar4,0x21,1,0,0x185,0);
        sljit_emit_op2(piVar4,0x40,2,0,2,0,1,0);
        lVar15 = sljit_emit_cmp(piVar4,1,1,0,0x7f,0);
        bVar30 = lVar13 != 0;
        if ((lVar15 != 0) && (bVar30)) {
          *(long *)(lVar15 + 0x18) = lVar13;
          *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (-1 < iVar24) {
          lVar15 = (long)iVar24;
          sljit_emit_op1(piVar4,0x25,1,0,0x82,(long)(iVar24 * 4));
          sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,4);
          uVar28 = *(uint *)(local_168 + lVar15 * 0x18 + 4);
          if (local_168[lVar15 * 0x18] == '\x01') {
LAB_00111987:
            lVar15 = sljit_emit_cmp(piVar4,1,1,0,0x7f,uVar28);
            if ((lVar15 != 0) && (bVar30)) {
              *(long *)(lVar15 + 0x18) = lVar13;
              *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          else {
            uVar29 = local_164[lVar15 * 6 + 1] ^ uVar28;
            if ((uVar29 - 1 & uVar29) == 0) {
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                emit_cum_binary(piVar4,0xd0b0908,1,0,1,0,0x7f,uVar29);
                uVar28 = *(uint *)(local_168 + lVar15 * 0x18 + 4);
              }
              uVar28 = uVar28 | uVar29;
              goto LAB_00111987;
            }
            lVar17 = sljit_emit_cmp(piVar4,0,1,0,0x7f);
            lVar15 = sljit_emit_cmp(piVar4,1,1,0,0x7f,local_164[lVar15 * 6 + 1]);
            if ((lVar15 != 0) && (bVar30)) {
              *(long *)(lVar15 + 0x18) = lVar13;
              *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar13 = sljit_emit_label(piVar4);
            if ((lVar13 != 0) && (lVar17 != 0)) {
              *(long *)(lVar17 + 0x18) = lVar13;
              *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          sljit_emit_op2(piVar4,0x42,2,0,2,0,0x7f,4);
        }
        if (*(int *)((long)param_1 + 0x5c) == 0) {
          sljit_emit_op2(piVar4,0x40,0xd,0,0xd,0,0x7f,lVar21);
        }
        else {
          sljit_emit_op1(piVar4,0x20,0xd,0,3,0);
        }
      }
    }
    else {
      piVar5 = (int *)*param_1;
      if (*piVar5 == 0) {
        puVar11 = (undefined8 *)(*(code *)**(undefined8 **)(piVar5 + 0x12))(0x108);
        if (puVar11 != (undefined8 *)0x0) {
          puVar14 = puVar11 + 1;
          uVar31 = (undefined1)(iVar26 * 4);
          uVar32 = CONCAT11(uVar31,uVar31);
          *puVar11 = param_1[4];
          uVar33 = CONCAT22(uVar32,uVar32);
          param_1[4] = puVar11;
          *(undefined4 *)(puVar11 + 1) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xc) = uVar33;
          *(undefined4 *)(puVar11 + 2) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x14) = uVar33;
          *(undefined4 *)(puVar11 + 3) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x1c) = uVar33;
          *(undefined4 *)(puVar11 + 4) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x24) = uVar33;
          *(undefined4 *)(puVar11 + 5) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x2c) = uVar33;
          *(undefined4 *)(puVar11 + 6) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x34) = uVar33;
          *(undefined4 *)(puVar11 + 7) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x3c) = uVar33;
          *(undefined4 *)(puVar11 + 8) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x44) = uVar33;
          *(undefined4 *)(puVar11 + 9) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x4c) = uVar33;
          *(undefined4 *)(puVar11 + 10) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x54) = uVar33;
          *(undefined4 *)(puVar11 + 0xb) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x5c) = uVar33;
          *(undefined4 *)(puVar11 + 0xc) = uVar33;
          *(undefined4 *)((long)puVar11 + 100) = uVar33;
          *(undefined4 *)(puVar11 + 0xd) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x6c) = uVar33;
          *(undefined4 *)(puVar11 + 0xe) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x74) = uVar33;
          *(undefined4 *)(puVar11 + 0xf) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x7c) = uVar33;
          *(undefined4 *)(puVar11 + 0x10) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x84) = uVar33;
          *(undefined4 *)(puVar11 + 0x11) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x8c) = uVar33;
          *(undefined4 *)(puVar11 + 0x12) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x94) = uVar33;
          *(undefined4 *)(puVar11 + 0x13) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x9c) = uVar33;
          *(undefined4 *)(puVar11 + 0x14) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xa4) = uVar33;
          *(undefined4 *)(puVar11 + 0x15) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xac) = uVar33;
          *(undefined4 *)(puVar11 + 0x16) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xb4) = uVar33;
          *(undefined4 *)(puVar11 + 0x17) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xbc) = uVar33;
          *(undefined4 *)(puVar11 + 0x18) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xc4) = uVar33;
          *(undefined4 *)(puVar11 + 0x19) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xcc) = uVar33;
          *(undefined4 *)(puVar11 + 0x1a) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xd4) = uVar33;
          *(undefined4 *)(puVar11 + 0x1b) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xdc) = uVar33;
          *(undefined4 *)(puVar11 + 0x1c) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xe4) = uVar33;
          *(undefined4 *)(puVar11 + 0x1d) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xec) = uVar33;
          *(undefined4 *)(puVar11 + 0x1e) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xf4) = uVar33;
          *(undefined4 *)(puVar11 + 0x1f) = uVar33;
          *(undefined4 *)((long)puVar11 + 0xfc) = uVar33;
          *(undefined4 *)(puVar11 + 0x20) = uVar33;
          *(undefined4 *)((long)puVar11 + 0x104) = uVar33;
          if (0 < iVar26) {
            iVar24 = 0;
            pbVar19 = (byte *)(local_168 + (long)iVar27 * 0x18 + 4);
            do {
              bVar3 = pbVar19[-4];
              pbVar20 = pbVar19;
              do {
                if (iVar24 < (int)(uint)*(byte *)((ulong)*pbVar20 + (long)puVar14)) {
                  *(byte *)((ulong)*pbVar20 + (long)puVar14) = (byte)iVar24;
                }
                pbVar20 = pbVar20 + 4;
              } while (pbVar20 < pbVar19 + (ulong)bVar3 * 4);
              iVar24 = iVar24 + 4;
              pbVar19 = pbVar19 + -0x18;
            } while (iVar24 != iVar26 * 4);
          }
          goto LAB_0011113b;
        }
        if (*piVar5 == 0) {
          *piVar5 = 2;
        }
      }
    }
  }
  else {
    if ((cpu_feature_list & 4) == 0) goto LAB_001110b4;
LAB_00111600:
    iVar24 = iVar6 + -1;
    if (iVar24 == 0) goto LAB_001110b4;
    uVar28 = 0;
    pcVar25 = pcVar22 + (long)iVar6 * 0x18;
    iVar8 = 0;
    local_188 = 0;
    do {
      while ((byte)pcVar25[-0x17] < 3) {
LAB_00111648:
        pcVar25 = pcVar25 + -0x18;
        iVar24 = iVar24 + -1;
        if (iVar24 == 0) goto LAB_001116ea;
      }
      iVar26 = iVar24 + -3;
      if (iVar24 + -3 < 0) {
        iVar26 = 0;
      }
      if (iVar24 <= iVar26) goto LAB_00111648;
      lVar21 = (long)iVar26;
      do {
        if ((2 < (byte)local_168[lVar21 * 0x18 + 1]) &&
           (uVar29 = (uint)(byte)local_168[lVar21 * 0x18 + 1] + (uint)(byte)pcVar25[-0x17],
           uVar28 <= uVar29)) {
          if ((*(uint *)(pcVar25 + -0x14) != *(uint *)(local_168 + lVar21 * 0x18 + 4)) &&
             (((*(uint *)(pcVar25 + -0x14) != local_164[lVar21 * 6 + 1] &&
               (*(uint *)(pcVar25 + -0x10) != *(uint *)(local_168 + lVar21 * 0x18 + 4))) &&
              (*(uint *)(pcVar25 + -0x10) != local_164[lVar21 * 6 + 1])))) {
            iVar8 = (int)lVar21;
            uVar28 = uVar29;
            local_188 = iVar24;
          }
        }
        lVar21 = lVar21 + 1;
      } while ((int)lVar21 < iVar24);
      pcVar25 = pcVar25 + -0x18;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
LAB_001116ea:
    if (uVar28 == 0) goto LAB_001110b4;
    lVar21 = (long)iVar8;
    fast_forward_char_pair_simd
              (param_1,local_188,*(undefined4 *)(local_168 + (long)local_188 * 0x18 + 4),
               local_164[(long)local_188 * 6 + 1],lVar21,
               *(undefined4 *)(local_168 + lVar21 * 0x18 + 4),local_164[lVar21 * 6 + 1]);
  }
  uVar10 = 1;
LAB_0011177b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
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
        if (3 < (int)uVar13) goto LAB_00111c70;
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
LAB_00111ca2:
      if (cVar11 == '\0') goto LAB_00111bca;
    }
    if ((int)uVar13 < 4) {
      lVar4 = (long)(int)uVar13;
      uVar13 = uVar13 + 1;
      local_58[lVar4] = 0x100;
      goto LAB_00111bca;
    }
  }
  else {
    if ((param_3 & 1) == 0) goto LAB_00111ca2;
LAB_00111bca:
    if (uVar13 < 5) {
      uVar15 = (uVar12 ^ param_4) & 1;
      uVar10 = uVar15 ^ 1;
      if ((uVar13 == 0) && ((char)uVar10 != '\0')) {
        uVar5 = sljit_emit_jump(param_1,0x24);
        if (*param_1 != 0) goto LAB_00111d2a;
        lVar4 = *(long *)(param_1 + 0x18);
        lVar6 = *(long *)(lVar4 + 8);
        uVar9 = lVar6 + 0x10;
        if (uVar9 < 0xff1) {
LAB_00111e40:
          *(ulong *)(lVar4 + 8) = uVar9;
          puVar8 = (undefined8 *)(lVar4 + 0x10 + lVar6);
        }
        else {
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(param_1 + 0x12))
                             (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
          if (puVar7 == (undefined8 *)0x0) {
LAB_00112089:
            *param_1 = 2;
            goto LAB_00111d2a;
          }
          *puVar7 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 **)(param_1 + 0x18) = puVar7;
          puVar8 = puVar7 + 2;
          puVar7[1] = 0x10;
        }
LAB_00111d1e:
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
                  goto LAB_00112257;
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
LAB_00112257:
            if (local_58[0] + 1 == local_58[1]) goto LAB_00112353;
            sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
            lVar4 = (long)(int)(local_58[1] - local_58[0]);
            goto LAB_00112012;
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
                goto LAB_00111dd4;
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
LAB_00111dd4:
          lVar4 = (long)(int)local_58[1];
          if (local_58[1] + 1 == local_58[2]) goto LAB_00112353;
          iVar16 = local_58[2] - local_58[1];
          sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
          iVar14 = 2;
LAB_00111e22:
          uVar5 = sljit_emit_cmp(param_1,iVar14,1,0,0x7f,(long)iVar16);
          iVar16 = *param_1;
joined_r0x00111e78:
          if (iVar16 == 0) {
            lVar4 = *(long *)(param_1 + 0x18);
            lVar6 = *(long *)(lVar4 + 8);
            uVar9 = lVar6 + 0x10;
            if (0xff0 < uVar9) {
              puVar7 = (undefined8 *)
                       (*(code *)**(undefined8 **)(param_1 + 0x12))
                                 (0x1000,(*(undefined8 **)(param_1 + 0x12))[2]);
              if (puVar7 == (undefined8 *)0x0) goto LAB_00112089;
              *puVar7 = *(undefined8 *)(param_1 + 0x18);
              *(undefined8 **)(param_1 + 0x18) = puVar7;
              puVar8 = puVar7 + 2;
              puVar7[1] = 0x10;
              goto LAB_00111d1e;
            }
            goto LAB_00111e40;
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
              goto LAB_00111d2a;
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
                    goto LAB_00112163;
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
LAB_00112163:
              lVar4 = (long)iVar16;
              if (local_58[2] == local_58[1] + 1) goto LAB_00112353;
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
                      goto LAB_00111fdc;
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
                      goto LAB_00111fd6;
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
LAB_00111fd6:
                uVar15 = local_58[2] - local_58[0];
              }
LAB_00111fdc:
              lVar4 = (long)(int)uVar15;
              if (local_58[3] == local_58[2] + 1) {
LAB_00112353:
                uVar10 = 0;
                goto LAB_001121bc;
              }
              sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
              lVar4 = (long)(int)(local_58[3] - local_58[2]);
            }
LAB_00112012:
            uVar5 = sljit_emit_cmp(param_1,2,1,0,0x7f,lVar4);
            iVar16 = *param_1;
          }
          else {
            if (uVar13 == 1) {
              uVar5 = sljit_emit_cmp(param_1,cVar11 + '\x02',1,0,0x7f,(long)(int)local_58[0]);
              iVar16 = *param_1;
              goto joined_r0x00111e78;
            }
            if (uVar13 != 2) goto LAB_00111d2a;
            lVar4 = (long)(int)local_58[0];
            if (local_58[0] + 1 != local_58[1]) {
              iVar16 = local_58[1] - local_58[0];
              sljit_emit_op2(param_1,0x42,1,0,1,0,0x7f,lVar4);
              iVar14 = 3 - uVar15;
              goto LAB_00111e22;
            }
LAB_001121bc:
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
              if (puVar7 == (undefined8 *)0x0) goto LAB_00112089;
              *puVar7 = *(undefined8 *)(param_1 + 0x18);
              *(undefined8 **)(param_1 + 0x18) = puVar7;
              puVar8 = puVar7 + 2;
              puVar7[1] = 0x10;
            }
            goto LAB_00111d1e;
          }
        }
      }
LAB_00111d2a:
      uVar5 = 1;
      goto LAB_00111c72;
    }
  }
LAB_00111c70:
  uVar5 = 0;
LAB_00111c72:
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
joined_r0x00112518:
      if (bVar5 != 0) {
        if ((bVar5 & 1) != 0) {
          if ((uVar12 & 0x20) == 0) goto LAB_00112520;
          if (0 < iVar11) goto code_r0x0011254d;
          if (iVar11 != 0) goto LAB_00112534;
          goto LAB_00112529;
        }
        goto LAB_00112534;
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
            goto LAB_001126da;
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
LAB_001126da:
      uVar6 = 1;
      goto LAB_001126ea;
    }
  }
LAB_001126e8:
  uVar6 = 0;
LAB_001126ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0011254d:
  iVar14 = 0;
  puVar9 = local_46;
  do {
    if ((uint)*puVar9 == uVar12 - 0x20) {
      local_46[iVar14] = *puVar9 | 0x120;
      if (iVar14 != iVar11) {
        uVar12 = uVar12 + 1;
        bVar5 = bVar5 >> 1;
        goto joined_r0x00112518;
      }
      break;
    }
    iVar14 = iVar14 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar14 != iVar11);
LAB_00112520:
  if (2 < iVar11) goto LAB_001126e8;
LAB_00112529:
  lVar10 = (long)iVar11;
  iVar11 = iVar11 + 1;
  local_46[lVar10] = (ushort)uVar12;
LAB_00112534:
  uVar12 = uVar12 + 1;
  bVar5 = bVar5 >> 1;
  goto joined_r0x00112518;
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
    sljit_emit_op2(piVar2,0x40,1,0,1,0,0x7f,4);
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
        goto LAB_001128ca;
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
LAB_001128ca:
  sljit_emit_op1(piVar2,0x25,1,0,0x82,0);
  sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,4);
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
  sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f,4);
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
               (undefined8 *param_1,int *param_2,long *param_3,uint param_4,uint param_5)

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
  if (*param_2 - 0x71U < 2) {
    iVar17 = param_2[1] * 0x10;
    sljit_emit_op1(piVar4,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar17));
    if (param_4 == 0) {
      iVar3 = *(int *)(param_1 + 0x3c);
      iVar16 = *(int *)((long)param_1 + 0x44);
joined_r0x00113dfe:
      if ((iVar3 != 0) && (*param_2 == 0x72)) {
LAB_00113ec8:
        uVar19 = 0x8e;
        lVar13 = (long)(iVar17 + 8 + iVar16);
        goto LAB_001134fc;
      }
    }
    else {
      iVar16 = *(int *)((long)param_1 + 0x44);
      if (*(int *)(param_1 + 0x3b) != 0) {
        iVar3 = *(int *)(param_1 + 0x3c);
        goto joined_r0x00113dfe;
      }
      uVar19 = sljit_emit_cmp(piVar4,0,1,0,0x8e,(long)(iVar16 + 8));
      if (*piVar4 == 0) {
        lVar13 = *(long *)(piVar4 + 0x18);
        lVar6 = *(long *)(lVar13 + 8);
        uVar1 = lVar6 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar13 + 8) = uVar1;
          puVar11 = (undefined8 *)(lVar13 + 0x10 + lVar6);
LAB_001134bd:
          lVar13 = *param_3;
          *puVar11 = uVar19;
          puVar11[1] = lVar13;
          *param_3 = (long)puVar11;
          goto LAB_001134c9;
        }
        puVar8 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar4 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = *(undefined8 *)(piVar4 + 0x18);
          *(undefined8 **)(piVar4 + 0x18) = puVar8;
          puVar11 = puVar8 + 2;
          puVar8[1] = 0x10;
          goto LAB_001134bd;
        }
        iVar16 = *(int *)(param_1 + 0x3c);
        *piVar4 = 2;
      }
      else {
LAB_001134c9:
        iVar16 = *(int *)(param_1 + 0x3c);
      }
      if ((iVar16 != 0) && (*param_2 == 0x72)) {
        iVar16 = *(int *)((long)param_1 + 0x44);
        goto LAB_00113ec8;
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
LAB_001134fc:
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
            goto LAB_0011351a;
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
LAB_0011351a:
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
      read_char_isra_0(param_1,0);
      sljit_emit_op1(piVar4,0x20,10,0,2,0);
      sljit_emit_op1(piVar4,0x20,2,0,3,0);
      sljit_emit_op1(piVar4,0x20,0xb,0,1,0);
      read_char_isra_0(param_1,&local_48);
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
LAB_00113798:
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
            if (iVar17 == 0) goto LAB_00113798;
          }
        }
      }
      sljit_emit_op2(piVar4,0x40,4,0,4,0,1,0);
      sljit_emit_op2(piVar4,0x40,4,0,4,0,0x7f,&_pcre2_ucd_records_32);
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
LAB_00113980:
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
            if (iVar17 == 0) goto LAB_00113980;
          }
        }
      }
      sljit_emit_op2(piVar4,0x40,4,0,4,0,0x7f,&_pcre2_ucd_caseless_sets_32);
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
            goto LAB_00113c17;
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
LAB_00113c17:
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
              goto LAB_00113d30;
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
LAB_00113d30:
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
      goto LAB_001140bc;
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
        goto LAB_00112eb1;
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
LAB_00112eb1:
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
        goto LAB_00112f47;
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
LAB_00112f47:
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
        goto LAB_00112fd1;
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
LAB_00112fd1:
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
          goto LAB_00113127;
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
LAB_00113127:
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
          goto LAB_001131af;
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
LAB_001131af:
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
          goto LAB_00113257;
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
LAB_00113257:
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
          goto LAB_001132f9;
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
LAB_001132f9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001140bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int * compile_ref_iterator_matchingpath(undefined8 *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  bool bVar17;
  int *piVar18;
  int *local_60;
  int local_58;
  int local_50;
  undefined1 *local_48;
  undefined8 local_40;
  
  piVar4 = (int *)*param_1;
  uVar5 = *param_2 - 0x71;
  if ((*piVar4 != 0) || (pauVar7 = (undefined1 (*) [16])ensure_abuf(piVar4,0x30), *piVar4 != 0)) {
    return (int *)0x0;
  }
  iVar3 = 0;
  *pauVar7 = (undefined1  [16])0x0;
  pauVar7[2] = (undefined1  [16])0x0;
  pauVar7[1] = (undefined1  [16])0x0;
  uVar14 = *(undefined8 *)(param_3 + 0x10);
  *(int **)pauVar7[2] = param_2;
  *(undefined8 *)*pauVar7 = uVar14;
  local_60 = param_2 + 1;
  *(undefined1 (**) [16])(param_3 + 0x10) = pauVar7;
  if (uVar5 < 2) {
    iVar3 = param_2[1] * 2;
    local_60 = param_2;
  }
  uVar2 = local_60[2];
  uVar6 = uVar2 & 1;
  local_58 = 0;
  if (uVar2 < 0x68) {
    if (0x65 < uVar2) {
      if (uVar6 != 0) {
        local_50 = 0;
        local_58 = 1;
        local_60 = local_60 + 3;
        goto LAB_0011454c;
      }
      local_58 = 1;
      bVar17 = false;
      local_60 = local_60 + 3;
      goto LAB_00114b8b;
    }
    if (uVar2 < 100) {
      if (0x61 < uVar2) {
        local_60 = local_60 + 3;
      }
      goto LAB_0011453c;
    }
    local_60 = local_60 + 3;
    if (uVar6 != 0) {
      uVar14 = *param_1;
      local_50 = 1;
      if (1 < uVar5) goto LAB_00114559;
LAB_001141d5:
      sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,0x10);
      local_40 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
      piVar18 = (int *)*param_1;
      if ((*piVar18 == 0) &&
         (puVar8 = (undefined8 *)ensure_abuf(piVar18,0x18), puVar8 != (undefined8 *)0x0)) {
LAB_00114245:
        *puVar8 = local_40;
        uVar9 = sljit_emit_label(piVar18);
        uVar14 = param_1[0x26];
        puVar8[1] = uVar9;
        puVar8[2] = uVar14;
        param_1[0x26] = puVar8;
        if (1 < uVar5) goto LAB_00114281;
      }
      sljit_emit_op1(piVar4,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar3 * 8));
      goto LAB_00114281;
    }
    local_50 = 1;
    bVar17 = false;
    local_58 = 0;
LAB_001148eb:
    uVar14 = *param_1;
    uVar9 = 8;
    sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f);
    uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
    piVar18 = (int *)*param_1;
    if ((*piVar18 == 0) &&
       (puVar8 = (undefined8 *)ensure_abuf(piVar18,0x18,uVar9), puVar8 != (undefined8 *)0x0)) {
      *puVar8 = uVar14;
      uVar9 = sljit_emit_label(piVar18);
      uVar14 = param_1[0x26];
      puVar8[1] = uVar9;
      puVar8[2] = uVar14;
      param_1[0x26] = puVar8;
    }
    iVar15 = local_58;
    if (1 < uVar5) {
      sljit_emit_op1(piVar4,0x20,0x8c,0,0x7f,0);
      compile_dnref_search(param_1,param_2,pauVar7[1] + 8);
      sljit_emit_op1(piVar4,0x20,1,0,0x84,0);
      sljit_emit_op1(piVar4,0x20,0x8e,0x18,4,0);
      lVar16 = sljit_emit_cmp(piVar4,0,1,0,0x84,8);
      goto LAB_00114a30;
    }
    sljit_emit_op1(piVar4,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar3 * 8));
    sljit_emit_op1(piVar4,0x20,0x8c,0,0x7f,0);
    if ((*(int *)(param_1 + 0x3b) == 0) &&
       (uVar14 = sljit_emit_cmp(piVar4,0,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8)),
       *piVar4 == 0)) {
      lVar16 = *(long *)(piVar4 + 0x18);
      lVar10 = *(long *)(lVar16 + 8);
      uVar1 = lVar10 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar16 + 8) = uVar1;
        puVar8 = (undefined8 *)(lVar16 + 0x10 + lVar10);
      }
      else {
        puVar12 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar4 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar12 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_00114e89;
        }
        *puVar12 = *(undefined8 *)(piVar4 + 0x18);
        puVar8 = puVar12 + 2;
        *(undefined8 **)(piVar4 + 0x18) = puVar12;
        puVar12[1] = 0x10;
      }
      uVar9 = *(undefined8 *)(pauVar7[1] + 8);
      *puVar8 = uVar14;
      puVar8[1] = uVar9;
      *(undefined8 **)(pauVar7[1] + 8) = puVar8;
    }
LAB_00114e89:
    lVar16 = sljit_emit_cmp(piVar4,0,1,0,0x8e,(long)(iVar3 * 8 + 8 + *(int *)((long)param_1 + 0x44))
                           );
    if (bVar17) {
      sljit_emit_op1(piVar4,0x20,0x8e,0x10,0x7f,0);
      lVar10 = sljit_emit_label(piVar4);
      goto LAB_00114fa1;
    }
    lVar10 = sljit_emit_label(piVar4);
LAB_00114a6a:
    local_48 = pauVar7[1] + 8;
    compile_ref_matchingpath(param_1,param_2,local_48,0,0);
    iVar15 = local_58;
LAB_00114a7f:
    if (iVar15 == 0) {
      uVar14 = *param_1;
      uVar9 = 8;
      sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f);
      uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
      piVar18 = (int *)*param_1;
      if ((*piVar18 == 0) &&
         (puVar8 = (undefined8 *)ensure_abuf(piVar18,0x18,uVar9), puVar8 != (undefined8 *)0x0)) {
        *puVar8 = uVar14;
        uVar9 = sljit_emit_label(piVar18);
        uVar14 = param_1[0x26];
        puVar8[1] = uVar9;
        puVar8[2] = uVar14;
        param_1[0x26] = puVar8;
      }
      sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
      lVar11 = sljit_emit_jump(piVar4,0x24);
      if ((lVar11 != 0) && (lVar10 != 0)) {
        *(long *)(lVar11 + 0x18) = lVar10;
        *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
  }
  else {
    if (uVar2 - 0x68 < 2) {
      local_50 = local_60[3];
      piVar18 = local_60 + 5;
      local_58 = local_60[4];
      local_60 = piVar18;
      if (uVar6 != 0) goto LAB_0011454c;
      bVar17 = 1 < local_58;
      if (local_50 != 0) {
        bVar17 = bVar17 || 1 < local_50;
        goto LAB_001148eb;
      }
    }
    else {
LAB_0011453c:
      if (uVar6 != 0) {
        local_50 = 0;
LAB_0011454c:
        uVar14 = *param_1;
        if (uVar5 < 2) goto LAB_001141d5;
LAB_00114559:
        sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,0x18);
        local_40 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
        piVar18 = (int *)*param_1;
        if ((*piVar18 == 0) &&
           (puVar8 = (undefined8 *)ensure_abuf(piVar18,0x18), puVar8 != (undefined8 *)0x0))
        goto LAB_00114245;
LAB_00114281:
        sljit_emit_op1(piVar4,0x20,0x8c,0,0x7f,0);
        if (uVar2 != 99) {
          sljit_emit_op1(piVar4,0x20,0x8c,8,0x7f,0);
        }
        if (local_50 == 0) {
          if (uVar5 < 2) {
            uVar14 = 0x8e;
            lVar16 = (long)(*(int *)((long)param_1 + 0x44) + 8 + iVar3 * 8);
          }
          else {
            compile_dnref_search(param_1,param_2,0);
            sljit_emit_op1(piVar4,0x20,1,0,0x84,0);
            sljit_emit_op1(piVar4,0x20,0x8c,0x10,4,0);
            lVar16 = 8;
            uVar14 = 0x84;
          }
          lVar16 = sljit_emit_cmp(piVar4,0,1,0,uVar14,lVar16);
          sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
          lVar10 = sljit_emit_jump(piVar4,0x24);
          uVar14 = sljit_emit_label(piVar4);
          *(undefined8 *)(pauVar7[2] + 8) = uVar14;
          if (local_58 < 1) {
            if (1 < uVar5) goto LAB_001147e9;
            compile_ref_matchingpath(param_1,param_2,pauVar7[1] + 8,1,1);
            sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
          }
          else {
            uVar14 = sljit_emit_cmp(piVar4,3,0x8c,8,0x7f,(long)local_58);
            if (*piVar4 == 0) {
LAB_00114b10:
              lVar11 = *(long *)(piVar4 + 0x18);
              lVar13 = *(long *)(lVar11 + 8);
              uVar1 = lVar13 + 0x10;
              if (uVar1 < 0xff1) {
                *(ulong *)(lVar11 + 8) = uVar1;
                puVar8 = (undefined8 *)(lVar11 + 0x10 + lVar13);
              }
              else {
                puVar12 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
                if (puVar12 == (undefined8 *)0x0) {
                  *piVar4 = 2;
                  goto LAB_00114b6f;
                }
                *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                *(undefined8 **)(piVar4 + 0x18) = puVar12;
                puVar8 = puVar12 + 2;
                puVar12[1] = 0x10;
              }
              uVar9 = *(undefined8 *)(pauVar7[1] + 8);
              *puVar8 = uVar14;
              puVar8[1] = uVar9;
              *(undefined8 **)(pauVar7[1] + 8) = puVar8;
            }
LAB_00114b6f:
            if (1 < uVar5) goto LAB_001147e9;
LAB_00114809:
            local_48 = pauVar7[1] + 8;
            compile_ref_matchingpath(param_1,param_2,local_48,1,1);
            sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
            if (local_50 < 2) {
              if (0 < local_58) {
                sljit_emit_op2(piVar4,0x40,0x8c,8,0x8c,8,0x7f);
              }
            }
            else {
LAB_00114678:
              sljit_emit_op1(piVar4,0x20,1,0,0x8c,8);
              sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,1);
              sljit_emit_op1(piVar4,0x20,0x8c,8,1,0);
              lVar11 = *(long *)(pauVar7[2] + 8);
              lVar13 = sljit_emit_cmp(piVar4,2,1,0,0x7f,(long)local_50);
              if ((lVar11 != 0) && (lVar13 != 0)) {
                *(long *)(lVar13 + 0x18) = lVar11;
                *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
          }
          if ((lVar10 != 0) && (lVar11 = sljit_emit_label(piVar4), lVar11 != 0)) {
            *(long *)(lVar10 + 0x18) = lVar11;
            *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        else {
          if (1 < uVar5) {
            lVar10 = 0;
            compile_dnref_search(param_1,param_2,pauVar7[1] + 8);
            sljit_emit_op1(piVar4,0x20,1,0,0x84,0);
            sljit_emit_op1(piVar4,0x20,0x8c,0x10,4,0);
            lVar16 = sljit_emit_cmp(piVar4,0,1,0,0x84,8);
            uVar14 = sljit_emit_label(piVar4);
            *(undefined8 *)(pauVar7[2] + 8) = uVar14;
            if ((0 < local_58) &&
               (uVar14 = sljit_emit_cmp(piVar4,3,0x8c,8,0x7f,(long)local_58), *piVar4 == 0))
            goto LAB_00114b10;
LAB_001147e9:
            sljit_emit_op1(piVar4,0x20,4,0,0x8c,0x10);
            goto LAB_00114809;
          }
          iVar15 = *(int *)((long)param_1 + 0x44);
          if (*(int *)(param_1 + 0x3b) == 0) {
            uVar14 = sljit_emit_cmp(piVar4,0,1,0,0x8e,(long)(iVar15 + 8));
            if (*piVar4 == 0) {
              lVar16 = *(long *)(piVar4 + 0x18);
              lVar10 = *(long *)(lVar16 + 8);
              uVar1 = lVar10 + 0x10;
              if (uVar1 < 0xff1) {
                *(ulong *)(lVar16 + 8) = uVar1;
                puVar8 = (undefined8 *)(lVar16 + 0x10 + lVar10);
              }
              else {
                puVar12 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
                if (puVar12 == (undefined8 *)0x0) {
                  *piVar4 = 2;
                  iVar15 = *(int *)((long)param_1 + 0x44);
                  goto LAB_001145ee;
                }
                *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                *(undefined8 **)(piVar4 + 0x18) = puVar12;
                puVar8 = puVar12 + 2;
                puVar12[1] = 0x10;
              }
              uVar9 = *(undefined8 *)(pauVar7[1] + 8);
              *puVar8 = uVar14;
              puVar8[1] = uVar9;
              *(undefined8 **)(pauVar7[1] + 8) = puVar8;
            }
            iVar15 = *(int *)((long)param_1 + 0x44);
          }
LAB_001145ee:
          lVar16 = sljit_emit_cmp(piVar4,0,1,0,0x8e,(long)(iVar15 + 8 + iVar3 * 8));
          uVar14 = sljit_emit_label(piVar4);
          *(undefined8 *)(pauVar7[2] + 8) = uVar14;
          if (0 < local_58) {
            lVar10 = 0;
            uVar14 = sljit_emit_cmp(piVar4,3,0x8c,8,0x7f,(long)local_58);
            if (*piVar4 == 0) goto LAB_00114b10;
            goto LAB_00114809;
          }
          compile_ref_matchingpath(param_1,param_2,pauVar7[1] + 8,1,1);
          sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
          if (1 < local_50) {
            lVar10 = 0;
            goto LAB_00114678;
          }
        }
        lVar10 = sljit_emit_label(piVar4);
        if ((lVar16 != 0) && (lVar10 != 0)) {
          *(long *)(lVar16 + 0x18) = lVar10;
          *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
        }
        piVar4 = (int *)*param_1;
        iVar3 = *piVar4;
        goto joined_r0x00114ac7;
      }
      local_58 = 0;
      bVar17 = false;
    }
LAB_00114b8b:
    uVar14 = *param_1;
    sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,0x10);
    uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
    piVar18 = (int *)*param_1;
    if ((*piVar18 == 0) &&
       (puVar8 = (undefined8 *)ensure_abuf(piVar18,0x18), puVar8 != (undefined8 *)0x0)) {
      *puVar8 = uVar14;
      uVar9 = sljit_emit_label(piVar18);
      uVar14 = param_1[0x26];
      puVar8[1] = uVar9;
      puVar8[2] = uVar14;
      param_1[0x26] = puVar8;
    }
    if (uVar5 < 2) {
      sljit_emit_op1(piVar4,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar3 * 8));
      sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
      sljit_emit_op1(piVar4,0x20,0x8c,8,0x7f,0);
      sljit_emit_op2(piVar4,0x40,0xc,0,0xc,0,0x7f,8);
      uVar14 = 0x8e;
      lVar16 = (long)(iVar3 * 8 + 8 + *(int *)((long)param_1 + 0x44));
    }
    else {
      sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
      sljit_emit_op1(piVar4,0x20,0x8c,8,0x7f,0);
      sljit_emit_op2(piVar4,0x40,0xc,0,0xc,0,0x7f,8);
      compile_dnref_search(param_1,param_2,0);
      sljit_emit_op1(piVar4,0x20,1,0,0x84,0);
      sljit_emit_op1(piVar4,0x20,0x8e,0x18,4,0);
      lVar16 = 8;
      uVar14 = 0x84;
    }
    lVar16 = sljit_emit_cmp(piVar4,0,1,0,uVar14,lVar16);
    sljit_emit_op2(piVar4,0x42,0xc,0,0xc,0,0x7f,8);
    local_50 = 0;
    iVar15 = local_58;
LAB_00114a30:
    local_58 = local_50;
    if (!bVar17) {
      lVar10 = sljit_emit_label(piVar4);
      local_58 = iVar15;
      if (1 < uVar5) {
        sljit_emit_op1(piVar4,0x20,4,0,0x8e,0x18);
      }
      goto LAB_00114a6a;
    }
    sljit_emit_op1(piVar4,0x20,0x8e,0x10,0x7f,0);
    lVar10 = sljit_emit_label(piVar4);
    local_50 = local_58;
    if (1 < uVar5) {
      sljit_emit_op1(piVar4,0x20,4,0,0x8e,0x18);
    }
LAB_00114fa1:
    local_58 = local_50;
    local_48 = pauVar7[1] + 8;
    compile_ref_matchingpath(param_1,param_2,local_48,0,0);
    sljit_emit_op1(piVar4,0x20,1,0,0x8e,0x10);
    sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,1);
    sljit_emit_op1(piVar4,0x20,0x8e,0x10,1,0);
    if (1 < local_58) {
      lVar11 = sljit_emit_cmp(piVar4,2,1,0,0x7f,(long)local_58);
      if ((lVar11 != 0) && (lVar10 != 0)) {
        *(long *)(lVar11 + 0x18) = lVar10;
        *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (1 < iVar15) goto LAB_0011502d;
      goto LAB_00114a7f;
    }
LAB_0011502d:
    lVar11 = sljit_emit_cmp(piVar4,3,1,0,0x7f,(long)iVar15);
    uVar14 = *param_1;
    sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,8);
    uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
    piVar18 = (int *)*param_1;
    if ((*piVar18 == 0) &&
       (puVar8 = (undefined8 *)ensure_abuf(piVar18,0x18), puVar8 != (undefined8 *)0x0)) {
      *puVar8 = uVar14;
      uVar9 = sljit_emit_label(piVar18);
      uVar14 = param_1[0x26];
      puVar8[1] = uVar9;
      puVar8[2] = uVar14;
      param_1[0x26] = puVar8;
    }
    sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
    lVar13 = sljit_emit_jump(piVar4,0x24);
    if ((lVar13 != 0) && (lVar10 != 0)) {
      *(long *)(lVar13 + 0x18) = lVar10;
      *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
    }
    lVar10 = sljit_emit_label(piVar4);
    if ((lVar11 != 0) && (lVar10 != 0)) {
      *(long *)(lVar11 + 0x18) = lVar10;
      *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  lVar10 = sljit_emit_label(piVar4);
  if ((lVar10 != 0) && (lVar16 != 0)) {
    *(long *)(lVar16 + 0x18) = lVar10;
    *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
  }
  uVar14 = sljit_emit_label(piVar4);
  piVar4 = (int *)*param_1;
  *(undefined8 *)(pauVar7[2] + 8) = uVar14;
  iVar3 = *piVar4;
joined_r0x00114ac7:
  if (iVar3 == 0) {
    piVar4[0x26] = 0;
    emit_non_cum_binary(piVar4,0x2d2b2928,10,0,10,0,0x7f,1);
  }
  uVar14 = sljit_emit_jump(piVar4,0);
  if (*piVar4 == 0) {
    lVar16 = *(long *)(piVar4 + 0x18);
    lVar10 = *(long *)(lVar16 + 8);
    uVar1 = lVar10 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar16 + 8) = uVar1;
      puVar8 = (undefined8 *)(lVar16 + 0x10 + lVar10);
    }
    else {
      puVar12 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar4 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar12 == (undefined8 *)0x0) {
        *piVar4 = 2;
        return local_60;
      }
      *puVar12 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar12;
      puVar8 = puVar12 + 2;
      puVar12[1] = 0x10;
    }
    uVar9 = param_1[0x2f];
    *puVar8 = uVar14;
    puVar8[1] = uVar9;
    param_1[0x2f] = puVar8;
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
      sljit_emit_op2(piVar2,0x40,1,0,1,0,0x7f,8);
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
        emit_shift_with_flags(piVar2,0x20,0,4,0,4,0,0x7f,2);
      }
      sljit_emit_op2(piVar2,0x42,2,0,2,0,4,0);
      lVar7 = sljit_emit_label(piVar2);
      sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,4);
      lVar9 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
      sljit_emit_op1(piVar2,0x25,1,0,0x82,0xfffffffffffffff8);
      sljit_emit_op1(piVar2,0x25,4,0,0x82,0xfffffffffffffffc);
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
      sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f,4);
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
        emit_shift_with_flags(piVar2,0x20,0,1,0,1,0,0x7f,2);
      }
      uVar12 = 0;
      sljit_emit_op2(piVar2,0x42,2,0,2,0,1,0);
      uVar3 = *(uint *)(param_1 + 0x1a) >> 8;
      uVar11 = *(uint *)(param_1 + 0x1a) & 0xff;
      fast_forward_char_pair_simd
                (param_1,1,uVar11,uVar11,0,uVar3 & 0xff,CONCAT44(uVar12,uVar3) & 0xffffffff000000ff)
      ;
      sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,8);
    }
    lVar5 = sljit_emit_label(piVar2);
    if ((lVar5 != 0) && (lVar4 != 0)) {
      *(long *)(lVar4 + 0x18) = lVar5;
      *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto LAB_001158cb;
  }
  sljit_emit_op1(piVar2,0x20,4,0,0x89,8);
  lVar4 = sljit_emit_cmp(piVar2,5,2,0,4,0);
  if (*(int *)((long)param_1 + 0xc4) == 1) {
    move_back_isra_0(*param_1,*(undefined4 *)((long)param_1 + 0x1e4),0,0);
  }
  else {
    sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f,4);
  }
  lVar5 = sljit_emit_label(piVar2);
  param_1[0x25] = lVar5;
  if (cpu_feature_list == 0) {
    get_cpu_features();
  }
  if (((cpu_feature_list & 4) == 0) || ((*(uint *)((long)param_1 + 0xc4) & 0xfffffffd) != 0)) {
    lVar7 = 0;
    read_char_isra_0(param_1,0);
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
LAB_00115aa1:
      lVar5 = sljit_emit_jump(piVar2,0x24);
      lVar8 = sljit_emit_label(piVar2);
      if ((lVar7 != 0) && (lVar8 != 0)) {
        *(long *)(lVar7 + 0x18) = lVar8;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
      goto LAB_00115690;
    }
LAB_0011587c:
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
      lVar9 = 0;
      fast_forward_char_simd_isra_0(param_1,0xd,10);
      if (*(int *)(param_1 + 0x14) != 1) {
        lVar9 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
      }
      sljit_emit_op1(piVar2,0x25,1,0,0x82,0);
      sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,4);
      lVar5 = sljit_emit_cmp(piVar2,1,1,0,0x7f,0xd);
      if (1 < *(int *)((long)param_1 + 0xc4) - 1U) goto LAB_0011587c;
      if (lVar5 == 0) {
        lVar7 = 0;
        goto LAB_00115aa1;
      }
LAB_00115690:
      lVar7 = sljit_emit_cmp(piVar2,3,2,0,0xd,0);
      sljit_emit_op1(piVar2,0x25,1,0,0x82,0);
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
        emit_shift_with_flags(piVar2,0x20,0,1,0,1,0,0x7f,2);
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
      goto LAB_0011587c;
    }
    fast_forward_char_simd_isra_0
              (param_1,*(undefined4 *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1a));
    sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,4);
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
      goto LAB_00115690;
    }
  }
  lVar5 = sljit_emit_label(piVar2);
  if ((lVar4 != 0) && (lVar5 != 0)) {
    *(long *)(lVar4 + 0x18) = lVar5;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffd | 1;
  }
LAB_001158cb:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * compile_char1_matchingpath
                 (undefined8 *param_1,int param_2,uint *param_3,long *param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  long *local_60;
  undefined4 local_58;
  int iStack_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
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
      puVar8 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,8,1,0);
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = 0xf7;
      }
    }
    bVar20 = param_2 != 7;
    goto LAB_001162e0;
  case 8:
  case 9:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    read_char8_type(param_1,param_4,param_2 == 8);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      puVar8 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,1,1,0);
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = 0xf7;
      }
    }
    bVar20 = param_2 != 9;
    goto LAB_001162e0;
  case 10:
  case 0xb:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    read_char8_type(param_1,param_4,param_2 == 10);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0;
      puVar8 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,0x10,1,0);
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = 0xf7;
      }
    }
    bVar20 = param_2 != 0xb;
    goto LAB_001162e0;
  case 0xc:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    read_char_isra_0(param_1,param_4);
    if ((*(int *)((long)param_1 + 0xc4) == 0) && (0xff < (int)*(uint *)(param_1 + 0x1a))) {
      lVar7 = sljit_emit_cmp(piVar3,1,1,0,0x7f,*(uint *)(param_1 + 0x1a) >> 8 & 0xff);
      local_60 = (long *)0x0;
      if (*(int *)(param_1 + 0x14) == 4) {
        check_str_end_constprop_0(param_1,&local_60);
        plVar18 = local_60;
        sljit_emit_op1(piVar3,0x25,1,0,0x82,0);
        uVar9 = sljit_emit_cmp(piVar3,0,1,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
        if (*piVar3 == 0) goto LAB_001171d8;
LAB_00117234:
        lVar14 = sljit_emit_label(piVar3);
        if (plVar18 == (long *)0x0) goto LAB_00116ba0;
      }
      else {
        lVar14 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
        if (*piVar3 != 0) {
LAB_00117889:
          sljit_emit_op1(piVar3,0x25,1,0,0x82,0);
          uVar9 = sljit_emit_cmp(piVar3,0,1,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
          if (*piVar3 != 0) {
            sljit_emit_label(piVar3);
            goto LAB_00116ba0;
          }
          plVar18 = (long *)0x0;
LAB_001171d8:
          lVar14 = *(long *)(piVar3 + 0x18);
          lVar11 = *(long *)(lVar14 + 8);
          uVar1 = lVar11 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar14 + 8) = uVar1;
            puVar15 = (undefined8 *)(lVar14 + 0x10 + lVar11);
          }
          else {
            puVar10 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar10 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_00117234;
            }
            *puVar10 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar10;
            puVar15 = puVar10 + 2;
            puVar10[1] = 0x10;
          }
          lVar14 = *param_4;
          *puVar15 = uVar9;
          puVar15[1] = lVar14;
          *param_4 = (long)puVar15;
          goto LAB_00117234;
        }
        lVar11 = *(long *)(piVar3 + 0x18);
        lVar12 = *(long *)(lVar11 + 8);
        uVar1 = lVar12 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar11 + 8) = uVar1;
          plVar18 = (long *)(lVar11 + 0x10 + lVar12);
        }
        else {
          puVar15 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar15 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_00117889;
          }
          plVar18 = puVar15 + 2;
          *puVar15 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar15;
          puVar15[1] = 0x10;
        }
        *plVar18 = lVar14;
        plVar18[1] = 0;
        local_60 = plVar18;
        sljit_emit_op1(piVar3,0x25,1,0,0x82,0);
        uVar9 = sljit_emit_cmp(piVar3,0,1,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
        if (*piVar3 == 0) goto LAB_001171d8;
        lVar14 = sljit_emit_label(piVar3);
      }
      do {
        lVar11 = *plVar18;
        if ((lVar11 != 0) && (lVar14 != 0)) {
          *(long *)(lVar11 + 0x18) = lVar14;
          *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
        }
        plVar18 = (long *)plVar18[1];
      } while (plVar18 != (long *)0x0);
      goto LAB_00116ba0;
    }
    check_newlinechar(param_1,*(int *)((long)param_1 + 0xc4),param_4,1);
    break;
  case 0xd:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    if ((*(int *)(param_1 + 0x3c) == 0) || (*(int *)((long)param_1 + 0x1e4) == 0)) {
      sljit_emit_op2(*param_1,0x40,2,0,2,0,0x7f,4);
    }
    else {
      read_char_isra_0(param_1,param_4);
    }
    break;
  case 0xe:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,4);
    break;
  case 0xf:
  case 0x10:
    local_50 = *param_3;
    local_58 = 4;
    local_48 = 0;
    iStack_54 = (param_2 == 0xf) + 3;
    local_4c = param_3[1];
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    compile_xclass_matchingpath(param_1,&local_58,param_4);
    param_3 = param_3 + 2;
    goto LAB_001161ae;
  case 0x11:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    read_char_isra_0(param_1,0);
    lVar14 = sljit_emit_cmp(piVar3,1,1,0,0x7f,0xd);
    local_60 = (long *)0x0;
    if (*(int *)(param_1 + 0x14) == 4) {
      check_str_end_constprop_0(param_1,&local_60);
      plVar18 = local_60;
    }
    else {
      lVar7 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
      if (*piVar3 == 0) {
        lVar11 = *(long *)(piVar3 + 0x18);
        lVar12 = *(long *)(lVar11 + 8);
        uVar1 = lVar12 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar11 + 8) = uVar1;
          local_60 = (long *)(lVar11 + 0x10 + lVar12);
        }
        else {
          puVar15 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar15 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_00117756;
          }
          local_60 = puVar15 + 2;
          *puVar15 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar15;
          puVar15[1] = 0x10;
        }
        local_60[1] = 0;
        *local_60 = lVar7;
        plVar18 = local_60;
      }
      else {
LAB_00117756:
        plVar18 = (long *)0x0;
      }
    }
    sljit_emit_op1(piVar3,0x25,1,0,0x82,0);
    lVar11 = sljit_emit_cmp(piVar3,1,1,0,0x7f,10);
    sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,4);
    lVar7 = sljit_emit_jump(piVar3,0x24);
    lVar12 = sljit_emit_label(piVar3);
    if ((lVar14 != 0) && (lVar12 != 0)) {
      *(long *)(lVar14 + 0x18) = lVar12;
      *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
    }
    check_newlinechar(param_1,*(undefined4 *)((long)param_1 + 0xd4),param_4,0);
    lVar14 = sljit_emit_label(piVar3);
    for (; plVar18 != (long *)0x0; plVar18 = (long *)plVar18[1]) {
      lVar12 = *plVar18;
      if ((lVar12 != 0) && (lVar14 != 0)) {
        *(long *)(lVar12 + 0x18) = lVar14;
        *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    lVar14 = sljit_emit_label(piVar3);
    if ((lVar14 != 0) && (lVar11 != 0)) {
      *(long *)(lVar11 + 0x18) = lVar14;
      *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_00116ba0:
    lVar14 = sljit_emit_label(piVar3);
    if ((lVar14 != 0) && (lVar7 != 0)) {
LAB_00116bba:
      *(long *)(lVar7 + 0x18) = lVar14;
      *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
    }
    break;
  case 0x12:
  case 0x13:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    if (param_2 == 0x12) {
      read_char_isra_0(param_1,param_4);
    }
    else {
      read_char_isra_0(param_1,0);
    }
    uVar9 = sljit_emit_jump(piVar3,0x25);
    if (*piVar3 == 0) {
      lVar7 = *(long *)(piVar3 + 0x18);
      lVar14 = *(long *)(lVar7 + 8);
      uVar1 = lVar14 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar7 + 8) = uVar1;
        puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
      }
      else {
        puVar10 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar10 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_00116273;
        }
        *puVar10 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar10;
        puVar15 = puVar10 + 2;
        puVar10[1] = 0x10;
      }
      uVar2 = param_1[0x35];
      *puVar15 = uVar9;
      puVar15[1] = uVar2;
      param_1[0x35] = puVar15;
    }
LAB_00116273:
    bVar20 = param_2 == 0x12;
    goto LAB_001162e0;
  case 0x14:
  case 0x15:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    if (param_2 == 0x14) {
      read_char_isra_0(param_1,param_4);
    }
    else {
      read_char_isra_0(param_1,0);
    }
    uVar9 = sljit_emit_jump(piVar3,0x25);
    if (*piVar3 == 0) {
      lVar7 = *(long *)(piVar3 + 0x18);
      lVar14 = *(long *)(lVar7 + 8);
      uVar1 = lVar14 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar7 + 8) = uVar1;
        puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
      }
      else {
        puVar10 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar10 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011614b;
        }
        *puVar10 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar10;
        puVar15 = puVar10 + 2;
        puVar10[1] = 0x10;
      }
      uVar2 = param_1[0x36];
      *puVar15 = uVar9;
      puVar15[1] = uVar2;
      param_1[0x36] = puVar15;
    }
LAB_0011614b:
    bVar20 = param_2 == 0x14;
LAB_001162e0:
    uVar9 = sljit_emit_jump(piVar3,bVar20);
    if (*piVar3 == 0) {
      lVar7 = *(long *)(piVar3 + 0x18);
      lVar14 = *(long *)(lVar7 + 8);
      uVar1 = lVar14 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar7 + 8) = uVar1;
        puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
      }
      else {
        puVar10 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar10 == (undefined8 *)0x0) {
          *piVar3 = 2;
          break;
        }
        *puVar10 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar10;
        puVar15 = puVar10 + 2;
        puVar10[1] = 0x10;
      }
      lVar7 = *param_4;
      *puVar15 = uVar9;
      puVar15[1] = lVar7;
      *param_4 = (long)puVar15;
    }
    break;
  case 0x16:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    sljit_emit_op1(piVar3,0x20,1,0,9,0);
    pcVar16 = do_extuni_no_utf;
    if (*(int *)((long)param_1 + 0x1e4) != 0) {
      pcVar16 = do_extuni_utf_invalid;
    }
    sljit_emit_icall_constprop_0_isra_0(piVar3,0x111,pcVar16);
    if ((*(int *)((long)param_1 + 0x1e4) != 0) &&
       (uVar9 = sljit_emit_cmp(piVar3,0,1,0,0x7f,0), *piVar3 == 0)) {
      lVar7 = *(long *)(piVar3 + 0x18);
      lVar14 = *(long *)(lVar7 + 8);
      uVar1 = lVar14 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar7 + 8) = uVar1;
        puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
      }
      else {
        puVar10 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar10 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_001168bf;
        }
        *puVar10 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar10;
        puVar15 = puVar10 + 2;
        puVar10[1] = 0x10;
      }
      lVar7 = *param_4;
      *puVar15 = uVar9;
      puVar15[1] = lVar7;
      *param_4 = (long)puVar15;
    }
LAB_001168bf:
    sljit_emit_op1(piVar3,0x20,2,0,1,0);
    if (*(int *)(param_1 + 0x14) == 4) {
      lVar7 = sljit_emit_cmp(piVar3,2,1,0,0xd,0);
      check_partial(param_1,1);
      lVar14 = sljit_emit_label(piVar3);
      if ((lVar7 == 0) || (lVar14 == 0)) break;
      goto LAB_00116bba;
    }
    break;
  case 0x1d:
  case 0x1e:
    if (param_5 == 0) {
      if (param_2 != 0x1d) {
LAB_001164aa:
        iVar5 = *(int *)(param_1 + 0x3c);
        uVar19 = *param_3;
        if ((iVar5 == 0) && (*(int *)(param_1 + 0x3d) == 0)) {
          if (uVar19 < 0x100) goto LAB_001164d9;
LAB_00116fe0:
          sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,4);
          if (param_5 != 0) goto LAB_00116d70;
          goto LAB_00116d7d;
        }
        if (uVar19 < 0x80) {
LAB_001164d9:
          if (uVar19 == *(byte *)(param_1[0x12] + (ulong)uVar19)) goto LAB_00116fe0;
        }
        else {
          puVar13 = &_pcre2_dummy_ucd_record_32;
          if (uVar19 < 0x110000) {
            puVar13 = &_pcre2_ucd_records_32 +
                      (ulong)*(ushort *)
                              (&_pcre2_ucd_stage2_32 +
                              (long)(int)((uint)*(ushort *)
                                                 (&_pcre2_ucd_stage1_32 +
                                                 (long)((int)uVar19 >> 7) * 2) * 0x80 +
                                         (uVar19 & 0x7f)) * 2) * 0xc;
          }
          if (*(int *)(puVar13 + 4) == 0) goto LAB_00116fe0;
        }
        iVar4 = char_get_othercase_bit_isra_0(param_1,uVar19);
        if (iVar4 != 0) goto LAB_00116fe0;
        if ((param_5 != 0) && (*(int *)(param_1 + 0x14) == 1)) {
          uVar9 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
          if (*piVar3 == 0) {
            lVar7 = *(long *)(piVar3 + 0x18);
            lVar14 = *(long *)(lVar7 + 8);
            uVar1 = lVar14 + 0x10;
            if (uVar1 < 0xff1) {
              *(ulong *)(lVar7 + 8) = uVar1;
              puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
            }
            else {
              puVar10 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar10 == (undefined8 *)0x0) {
                *piVar3 = 2;
                iVar5 = *(int *)(param_1 + 0x3c);
                goto LAB_00116516;
              }
              *puVar10 = *(undefined8 *)(piVar3 + 0x18);
              *(undefined8 **)(piVar3 + 0x18) = puVar10;
              puVar15 = puVar10 + 2;
              puVar10[1] = 0x10;
            }
            lVar7 = *param_4;
            *puVar15 = uVar9;
            puVar15[1] = lVar7;
            *param_4 = (long)puVar15;
          }
          iVar5 = *(int *)(param_1 + 0x3c);
        }
LAB_00116516:
        if ((iVar5 == 0) && (*(int *)(param_1 + 0x3d) == 0)) {
          uVar17 = uVar19;
          if (uVar19 < 0x100) {
LAB_0011653e:
            uVar17 = (uint)*(byte *)(param_1[0x12] + (ulong)uVar19);
          }
        }
        else {
          if (uVar19 < 0x80) goto LAB_0011653e;
          puVar13 = &_pcre2_dummy_ucd_record_32;
          if (uVar19 < 0x110000) {
            puVar13 = &_pcre2_ucd_records_32 +
                      (ulong)*(ushort *)
                              (&_pcre2_ucd_stage2_32 +
                              (long)(int)((uint)*(ushort *)
                                                 (&_pcre2_ucd_stage1_32 +
                                                 (long)((int)uVar19 >> 7) * 2) * 0x80 +
                                         (uVar19 & 0x7f)) * 2) * 0xc;
          }
          uVar17 = uVar19 + *(int *)(puVar13 + 4);
        }
        read_char_isra_0(param_1,0);
        if (cpu_feature_list == 0) {
          get_cpu_features();
        }
        if ((cpu_feature_list & 0x20) != 0) {
          if (*piVar3 == 0) {
            piVar3[0x26] = 0;
            emit_cmp_binary(piVar3,1,0,0x7f,uVar17);
          }
          sljit_emit_select_isra_0(piVar3,0,1,0x7f,uVar19,1);
          uVar9 = 1;
          goto LAB_00116ca5;
        }
        lVar7 = sljit_emit_cmp(piVar3,0,1,0,0x7f,uVar19);
        uVar9 = sljit_emit_cmp(piVar3,1,1,0,0x7f,uVar17);
        if (*piVar3 == 0) {
          lVar14 = *(long *)(piVar3 + 0x18);
          lVar11 = *(long *)(lVar14 + 8);
          uVar1 = lVar11 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar14 + 8) = uVar1;
            puVar15 = (undefined8 *)(lVar14 + 0x10 + lVar11);
          }
          else {
            puVar10 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar10 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011745c;
            }
            *puVar10 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar10;
            puVar15 = puVar10 + 2;
            puVar10[1] = 0x10;
          }
          lVar14 = *param_4;
          *puVar15 = uVar9;
          puVar15[1] = lVar14;
          *param_4 = (long)puVar15;
        }
LAB_0011745c:
        lVar14 = sljit_emit_label(piVar3);
        if ((lVar14 != 0) && (lVar7 != 0)) {
          *(long *)(lVar7 + 0x18) = lVar14;
          *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
        }
        goto LAB_00116d15;
      }
      sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,4);
    }
    else {
      if (*(int *)(param_1 + 0x14) != 1) {
        detect_partial_match(param_1,param_4);
      }
      if (param_2 != 0x1d) goto LAB_001164aa;
      sljit_emit_op2(piVar3,0x40,2,0,2,0,0x7f,4);
LAB_00116d70:
      if ((*(int *)(param_1 + 0x14) == 1) &&
         (uVar9 = sljit_emit_cmp(piVar3,4,2,0,0xd,0), *piVar3 == 0)) {
        lVar7 = *(long *)(piVar3 + 0x18);
        lVar14 = *(long *)(lVar7 + 8);
        uVar1 = lVar14 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar7 + 8) = uVar1;
          puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
        }
        else {
          puVar10 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar10 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_00116d7d;
          }
          *puVar10 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar10;
          puVar15 = puVar10 + 2;
          puVar10[1] = 0x10;
        }
        lVar7 = *param_4;
        *puVar15 = uVar9;
        puVar15[1] = lVar7;
        *param_4 = (long)puVar15;
      }
    }
LAB_00116d7d:
    local_58 = (undefined4)_LC26;
    iStack_54 = (int)((ulong)_LC26 >> 0x20);
    local_50 = 0;
    param_3 = (uint *)byte_sequence_compare(param_1,param_2 == 0x1e,param_3,&local_58,param_4);
    goto LAB_001161ae;
  case 0x1f:
  case 0x20:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    uVar19 = *param_3;
    iVar5 = _DAT_00136044;
    if (*(int *)(param_1 + 0x3c) == 0) {
      if (param_2 == 0x1f) goto LAB_00116c88;
      if (*(int *)(param_1 + 0x3d) == 0) {
        if ((0xff < uVar19) ||
           (uVar17 = (uint)*(byte *)(param_1[0x12] + (ulong)uVar19),
           uVar19 == *(byte *)(param_1[0x12] + (ulong)uVar19))) goto LAB_00116c88;
LAB_001172c5:
        read_char_isra_0(param_1,param_4);
        uVar6 = uVar19 ^ uVar17;
        if ((uVar6 - 1 & uVar6) == 0) {
          uVar19 = uVar19 | uVar17;
          goto LAB_001163da;
        }
        uVar9 = sljit_emit_cmp(piVar3,0,1,0,0x7f,uVar19);
        if (*piVar3 == 0) {
          lVar7 = *(long *)(piVar3 + 0x18);
          lVar14 = *(long *)(lVar7 + 8);
          uVar1 = lVar14 + 0x10;
          if (uVar1 < 0xff1) {
            *(ulong *)(lVar7 + 8) = uVar1;
            puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
          }
          else {
            puVar10 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar10 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011737d;
            }
            *puVar10 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar10;
            puVar15 = puVar10 + 2;
            puVar10[1] = 0x10;
          }
          lVar7 = *param_4;
          *puVar15 = uVar9;
          puVar15[1] = lVar7;
          *param_4 = (long)puVar15;
        }
LAB_0011737d:
        uVar9 = 0;
        uVar19 = uVar17;
        goto LAB_00116ca5;
      }
      if (uVar19 < 0x80) {
        lVar7 = param_1[0x12];
        uVar17 = (uint)*(byte *)(lVar7 + (ulong)uVar19);
        if (uVar19 == uVar17) goto LAB_00116c88;
        if (*(int *)(param_1 + 0x3d) == 0) {
LAB_00117502:
          uVar17 = (uint)*(byte *)(lVar7 + (ulong)uVar19);
        }
        goto LAB_001172c5;
      }
      if (uVar19 < 0x110000) goto LAB_0011748f;
      if (_DAT_00136044 == 0) goto LAB_00116c88;
      if (*(int *)(param_1 + 0x3d) != 0) goto LAB_00117643;
LAB_001163cd:
      read_char_isra_0(param_1,param_4);
      uVar6 = 0;
LAB_001163da:
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        emit_cum_binary(piVar3,0xd0b0908,1,0,1,0,0x7f,uVar6);
      }
      uVar9 = sljit_emit_cmp(piVar3,0,1,0,0x7f,uVar19);
      if (*piVar3 != 0) goto LAB_00116d15;
      lVar7 = *(long *)(piVar3 + 0x18);
      lVar14 = *(long *)(lVar7 + 8);
      uVar1 = lVar14 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar7 + 8) = uVar1;
        puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
LAB_0011647d:
        lVar7 = *param_4;
        *puVar15 = uVar9;
        puVar15[1] = lVar7;
        *param_4 = (long)puVar15;
        goto LAB_00116d15;
      }
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar3 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar10;
        puVar15 = puVar10 + 2;
        puVar10[1] = 0x10;
        goto LAB_0011647d;
      }
LAB_00117659:
      *piVar3 = 2;
    }
    else {
      if (param_2 != 0x1f) {
        if (0x7f < uVar19) {
          if (uVar19 < 0x110000) {
LAB_0011748f:
            if (*(int *)(&DAT_0013601c +
                        (ulong)*(ushort *)
                                (&_pcre2_ucd_stage2_32 +
                                (long)(int)((uint)*(ushort *)
                                                   (&_pcre2_ucd_stage1_32 +
                                                   (long)((int)uVar19 >> 7) * 2) * 0x80 +
                                           (uVar19 & 0x7f)) * 2) * 0xc) == 0) goto LAB_00116c88;
            iVar5 = *(int *)(&DAT_0013601c +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar19 >> 7) * 2) * 0x80 +
                                               (uVar19 & 0x7f)) * 2) * 0xc);
            if (*(int *)(param_1 + 0x3c) == 0) {
              if (*(int *)(param_1 + 0x3d) == 0) {
                if (uVar19 < 0x100) {
                  lVar7 = param_1[0x12];
                  goto LAB_00117502;
                }
                goto LAB_001163cd;
              }
              iVar5 = *(int *)(&DAT_0013601c +
                              (ulong)*(ushort *)
                                      (&_pcre2_ucd_stage2_32 +
                                      (long)(int)((uint)*(ushort *)
                                                         (&_pcre2_ucd_stage1_32 +
                                                         (long)((int)uVar19 >> 7) * 2) * 0x80 +
                                                 (uVar19 & 0x7f)) * 2) * 0xc);
            }
          }
          else if (_DAT_00136044 == 0) goto LAB_00116c88;
LAB_00117643:
          uVar17 = iVar5 + uVar19;
          goto LAB_001172c5;
        }
        uVar17 = (uint)*(byte *)(param_1[0x12] + (ulong)uVar19);
        if (uVar19 != uVar17) goto LAB_001172c5;
      }
LAB_00116c88:
      read_char_isra_0(param_1,param_4);
      uVar9 = 0;
LAB_00116ca5:
      uVar9 = sljit_emit_cmp(piVar3,uVar9,1,0,0x7f,uVar19);
      if (*piVar3 == 0) {
        lVar7 = *(long *)(piVar3 + 0x18);
        lVar14 = *(long *)(lVar7 + 8);
        uVar1 = lVar14 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar7 + 8) = uVar1;
          puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
        }
        else {
          puVar10 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar10 == (undefined8 *)0x0) goto LAB_00117659;
          *puVar10 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar10;
          puVar15 = puVar10 + 2;
          puVar10[1] = 0x10;
        }
        lVar7 = *param_4;
        *puVar15 = uVar9;
        puVar15[1] = lVar7;
        *param_4 = (long)puVar15;
      }
    }
LAB_00116d15:
    param_3 = param_3 + 1;
    goto LAB_001161ae;
  case 0x6e:
  case 0x6f:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    if (param_2 == 0x6f) {
      read_char_isra_0(param_1,param_4);
    }
    else {
      read_char_isra_0(param_1,0);
    }
    iVar5 = optimize_class_ranges_isra_0(*param_1,param_3,param_2 == 0x6f,0,param_4);
    if ((iVar5 == 0) &&
       (iVar5 = optimize_class_chars_isra_0(*param_1,param_3,param_2 == 0x6f,0,param_4), iVar5 == 0)
       ) {
      lVar7 = sljit_emit_cmp(piVar3,4,1,0,0x7f,0xff);
      if (param_2 == 0x6e) {
        if (*piVar3 == 0) {
          lVar14 = *(long *)(piVar3 + 0x18);
          uVar1 = *(long *)(lVar14 + 8) + 0x10;
          if (uVar1 < 0xff1) {
            plVar18 = (long *)(lVar14 + 0x10 + *(long *)(lVar14 + 8));
            *(ulong *)(lVar14 + 8) = uVar1;
            lVar11 = 0;
            lVar14 = *param_4;
            *plVar18 = lVar7;
            plVar18[1] = lVar14;
            *param_4 = (long)plVar18;
            goto LAB_0011667a;
          }
          puVar15 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar15 != (undefined8 *)0x0) {
            lVar11 = 0;
            lVar14 = *param_4;
            *puVar15 = *(undefined8 *)(piVar3 + 0x18);
            iVar5 = *piVar3;
            *(undefined8 **)(piVar3 + 0x18) = puVar15;
            puVar15[1] = 0x10;
            puVar15[2] = lVar7;
            puVar15[3] = lVar14;
            *param_4 = (long)(puVar15 + 2);
            goto LAB_00116676;
          }
          *piVar3 = 2;
        }
        lVar11 = 0;
      }
      else {
        iVar5 = *piVar3;
        lVar11 = lVar7;
LAB_00116676:
        if (iVar5 == 0) {
LAB_0011667a:
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
          puVar8 = (undefined1 *)emit_x86_instruction(piVar3,1,1,0,4,0);
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = 0x85;
          }
        }
      }
      uVar9 = sljit_emit_jump(piVar3,0);
      if (*piVar3 == 0) {
        lVar7 = *(long *)(piVar3 + 0x18);
        lVar14 = *(long *)(lVar7 + 8);
        uVar1 = lVar14 + 0x10;
        if (uVar1 < 0xff1) {
          *(ulong *)(lVar7 + 8) = uVar1;
          puVar15 = (undefined8 *)(lVar7 + 0x10 + lVar14);
        }
        else {
          puVar10 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar3 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar10 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_001167e1;
          }
          *puVar10 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar10;
          puVar15 = puVar10 + 2;
          puVar10[1] = 0x10;
        }
        lVar7 = *param_4;
        *puVar15 = uVar9;
        puVar15[1] = lVar7;
        *param_4 = (long)puVar15;
      }
LAB_001167e1:
      if ((lVar11 != 0) && (lVar7 = sljit_emit_label(piVar3), lVar7 != 0)) {
        *(long *)(lVar11 + 0x18) = lVar7;
        *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    param_3 = param_3 + 8;
    goto LAB_001161ae;
  case 0x70:
    if (param_5 != 0) {
      detect_partial_match(param_1,param_4);
    }
    compile_xclass_matchingpath(param_1,param_3 + 1,param_4);
    param_3 = param_3 + ((ulong)*param_3 - 1);
    goto LAB_001161ae;
  }
LAB_001161ae:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



void compile_xclass_matchingpath(undefined8 *param_1,uint *param_2,long **param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long **pplVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  ulong uVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  bool bVar30;
  bool bVar31;
  long **pplVar32;
  long *local_48;
  long local_40;
  
  piVar4 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (long *)0x0;
  uVar22 = *param_2 & 1;
  pplVar14 = &local_48;
  if (uVar22 != 0) {
    pplVar14 = param_3;
  }
  puVar21 = param_2 + 1;
  if ((*param_2 & 2) == 0) {
    uVar29 = 0x7fffffff;
    uVar15 = *puVar21;
    puVar17 = puVar21;
    puVar16 = puVar21;
    if (uVar15 != 0) goto LAB_001179b6;
LAB_00117e37:
    compile_char1_matchingpath(param_1,0xd,puVar17,param_3,0);
    if (pplVar14 == param_3) goto LAB_00117ed2;
  }
  else {
    uVar15 = param_2[9];
    uVar29 = 0;
    puVar17 = param_2 + 9;
    puVar16 = param_2 + 9;
    if (uVar15 == 0) goto LAB_00117e37;
LAB_001179b6:
    uVar27 = 0;
    uVar19 = 0;
    iVar20 = 0;
    uVar26 = 0x100;
    do {
      uVar8 = (ulong)puVar16[1];
      iVar23 = iVar20 + 1;
      if (uVar15 == 1) {
        puVar17 = puVar16 + 2;
        if (uVar26 < uVar8) {
          uVar26 = uVar8;
        }
        if (uVar8 < uVar29) {
          uVar29 = uVar8;
        }
        uVar19 = uVar19 | 1;
        iVar20 = iVar23;
        goto LAB_00117a33;
      }
      puVar17 = puVar16 + 3;
      if (uVar15 == 2) {
        if (uVar8 < uVar29) {
          uVar29 = uVar8;
        }
        if (uVar26 < puVar16[2]) {
          uVar26 = (ulong)puVar16[2];
        }
        uVar19 = uVar19 | 1;
        iVar20 = iVar23;
        goto LAB_00117a33;
      }
      if (puVar16[1] == 10) {
        if (uVar15 != 3) goto switchD_00117a04_caseD_b;
        puVar16 = (uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)puVar16[2] * 4);
        uVar15 = *puVar16;
        while (uVar15 != 0xffffffff) {
          uVar8 = (ulong)uVar15;
          if (uVar26 < uVar8) {
            uVar26 = uVar8;
          }
          if (uVar8 < uVar29) {
            uVar29 = uVar8;
          }
          puVar1 = puVar16 + 1;
          puVar16 = puVar16 + 1;
          uVar15 = *puVar1;
        }
LAB_00117a23:
        uVar19 = uVar19 | 1;
        iVar20 = iVar23;
        goto LAB_00117a33;
      }
      switch(uVar8) {
      case 0:
        if (uVar15 == 3) {
          uVar7 = 0x3fffffff;
          goto LAB_00118259;
        }
        goto FUN_001182ba;
      case 1:
        uVar7 = 800;
        goto LAB_0011824a;
      case 2:
        uVar7 = (1 << ((char)*(undefined4 *)
                              (&_pcre2_ucp_typerange_32 + (long)(int)(puVar16[2] * 2 + 1) * 4) + 1U
                      & 0x1f)) -
                (1 << ((byte)*(undefined4 *)
                              (&_pcre2_ucp_typerange_32 + (long)(int)(puVar16[2] * 2) * 4) & 0x1f));
        goto LAB_00118242;
      case 3:
        uVar7 = 1 << ((byte)puVar16[2] & 0x1f);
LAB_00118242:
        if (uVar7 != 0) goto LAB_0011824a;
switchD_00117a04_caseD_a:
        iVar20 = iVar23;
FUN_001182ba:
        uVar29 = 0;
        uVar26 = 0x7fffffff;
        break;
      case 4:
        uVar19 = uVar19 | 8;
        uVar29 = 0;
        uVar26 = 0x7fffffff;
        iVar20 = iVar23;
        break;
      case 5:
        if (uVar15 == 4) {
          uVar19 = uVar19 | 0x90;
          uVar29 = 0;
          uVar26 = 0x7fffffff;
          iVar20 = iVar23;
        }
        else {
          uVar19 = uVar19 | 0x18;
          uVar29 = 0;
          uVar26 = 0x7fffffff;
          iVar20 = iVar20 + 2;
        }
        break;
      case 6:
        uVar7 = 0xe3e0;
        goto LAB_0011824a;
      case 7:
      case 8:
      case 0xe:
      case 0xf:
      case 0x10:
        uVar19 = uVar19 | 5;
        uVar29 = 0;
        uVar26 = 0x7fffffff;
        iVar20 = iVar23;
        break;
      case 9:
        uVar7 = 0x1f3e0;
LAB_0011824a:
        if (uVar15 == 4) {
          uVar7 = uVar7 ^ 0x3fffffff;
        }
LAB_00118259:
        uVar27 = uVar27 | uVar7;
        uVar19 = uVar19 | 4;
        uVar29 = 0;
        uVar26 = 0x7fffffff;
        break;
      default:
        goto switchD_00117a04_caseD_a;
      case 0xb:
      case 0x11:
switchD_00117a04_caseD_b:
        uVar29 = 0;
        uVar26 = 0x7fffffff;
        goto LAB_00117a23;
      case 0xc:
        uVar19 = uVar19 | 0x40;
        uVar29 = 0;
        uVar26 = 0x7fffffff;
        iVar20 = iVar23;
        break;
      case 0xd:
        uVar19 = uVar19 | 0x20;
        uVar29 = 0;
        uVar26 = 0x7fffffff;
        iVar20 = iVar23;
      }
LAB_00117a33:
      bVar18 = false;
      bVar30 = false;
      uVar15 = *puVar17;
      puVar16 = puVar17;
    } while (uVar15 != 0);
    if (uVar27 != 0x3fffffff) {
      if (uVar27 == 0 && iVar20 == 0) goto LAB_00117e37;
      if (uVar22 == 0) {
        pplVar32 = (long **)0x0;
        if ((uVar19 & 0x7c) != 0) {
          pplVar32 = param_3;
        }
        read_char_isra_0(param_1,pplVar32);
        uVar22 = *param_2 & 2;
        if ((*param_2 & 4) != 0) goto LAB_00117f33;
LAB_00117a89:
        if (uVar22 == 0) {
          sljit_emit_op2(piVar4,0x42,4,0,1,0,0x7f,uVar29);
          lVar9 = sljit_emit_cmp(piVar4,4,4,0,0x7f,uVar26 - uVar29);
          pplVar32 = &local_48;
          if ((*param_2 & 1) == 0) {
            pplVar32 = param_3;
          }
          if (*piVar4 == 0) {
            lVar11 = *(long *)(piVar4 + 0x18);
            lVar5 = *(long *)(lVar11 + 8);
            uVar29 = lVar5 + 0x10;
            if (uVar29 < 0xff1) {
              *(ulong *)(lVar11 + 8) = uVar29;
              plVar13 = (long *)(lVar11 + 0x10 + lVar5);
            }
            else {
              puVar12 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
              if (puVar12 == (undefined8 *)0x0) {
                *piVar4 = 2;
                goto joined_r0x00117f44;
              }
              *puVar12 = *(undefined8 *)(piVar4 + 0x18);
              *(undefined8 **)(piVar4 + 0x18) = puVar12;
              plVar13 = puVar12 + 2;
              puVar12[1] = 0x10;
            }
            plVar2 = *pplVar32;
            *plVar13 = lVar9;
            plVar13[1] = (long)plVar2;
            *pplVar32 = plVar13;
          }
          goto joined_r0x00117f44;
        }
        lVar9 = sljit_emit_cmp(piVar4,4,1,0,0x7f,0xff);
        bVar3 = *(byte *)((long)param_2 + 0x23);
        iVar23 = optimize_class_ranges_isra_0(*param_1,puVar21);
        if ((iVar23 == 0) &&
           (iVar23 = optimize_class_chars_isra_0
                               (*param_1,puVar21,(uint)(int)(char)bVar3 >> 0x1f,1,&local_48),
           iVar23 == 0)) {
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cum_binary(piVar4,0x25232120,4,0,1,0,0x7f,7);
            if (*piVar4 == 0) {
              piVar4[0x26] = 0;
              emit_shift_with_flags(piVar4,0x28,0,1,0,1,0,0x7f,3);
            }
          }
          sljit_emit_op1(piVar4,0x21,1,0,0x81,puVar21);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_shift_with_flags(piVar4,0x20,0,4,0,0x7f,1,4,0);
            if (*piVar4 == 0) {
              piVar4[0x26] = 0;
              puVar10 = (undefined1 *)emit_x86_instruction(piVar4,1,1,0,4,0);
              if (puVar10 != (undefined1 *)0x0) {
                *puVar10 = 0x85;
              }
            }
          }
          lVar11 = sljit_emit_jump(piVar4,1);
          if (*piVar4 == 0) {
            lVar5 = *(long *)(piVar4 + 0x18);
            lVar6 = *(long *)(lVar5 + 8);
            uVar29 = lVar6 + 0x10;
            if (uVar29 < 0xff1) {
              *(ulong *)(lVar5 + 8) = uVar29;
              plVar13 = (long *)(lVar5 + 0x10 + lVar6);
            }
            else {
              puVar12 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
              if (puVar12 == (undefined8 *)0x0) {
                *piVar4 = 2;
                goto LAB_00117c90;
              }
              *puVar12 = *(undefined8 *)(piVar4 + 0x18);
              *(undefined8 **)(piVar4 + 0x18) = puVar12;
              plVar13 = puVar12 + 2;
              puVar12[1] = 0x10;
            }
            *plVar13 = lVar11;
            plVar13[1] = (long)local_48;
            local_48 = plVar13;
          }
        }
LAB_00117c90:
        lVar11 = sljit_emit_jump(piVar4,0x24);
        if (*piVar4 == 0) {
          lVar5 = *(long *)(piVar4 + 0x18);
          lVar6 = *(long *)(lVar5 + 8);
          uVar29 = lVar6 + 0x10;
          if (uVar29 < 0xff1) {
            *(ulong *)(lVar5 + 8) = uVar29;
            plVar13 = (long *)(lVar5 + 0x10 + lVar6);
          }
          else {
            puVar12 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
            if (puVar12 == (undefined8 *)0x0) {
              *piVar4 = 2;
              goto LAB_00117d0c;
            }
            *puVar12 = *(undefined8 *)(piVar4 + 0x18);
            *(undefined8 **)(piVar4 + 0x18) = puVar12;
            plVar13 = puVar12 + 2;
            puVar12[1] = 0x10;
          }
          plVar2 = *param_3;
          *plVar13 = lVar11;
          plVar13[1] = (long)plVar2;
          *param_3 = plVar13;
        }
LAB_00117d0c:
        lVar11 = sljit_emit_label(piVar4);
        if ((lVar9 != 0) && (lVar11 != 0)) {
          *(long *)(lVar9 + 0x18) = lVar11;
          *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
        }
LAB_00117d32:
        puVar21 = param_2 + 9;
      }
      else {
        read_char_isra_0(param_1,param_3);
        uVar22 = *param_2 & 2;
        if ((*param_2 & 4) == 0) goto LAB_00117a89;
LAB_00117f33:
        if (uVar22 != 0) {
          sljit_emit_op1(piVar4,0x20,5,0,1,0);
          iVar23 = optimize_class_ranges_isra_0(*param_1,puVar21,0,1,pplVar14);
          if ((iVar23 == 0) &&
             (iVar23 = optimize_class_chars_isra_0(*param_1,puVar21,0,1,pplVar14), iVar23 == 0)) {
            lVar9 = sljit_emit_cmp(piVar4,4,1,0,0x7f,0xff);
            if (*piVar4 == 0) {
              piVar4[0x26] = 0;
              emit_cum_binary(piVar4,0x25232120,4,0,1,0,0x7f,7);
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                emit_shift_with_flags(piVar4,0x28,0,1,0,1,0,0x7f,3);
              }
            }
            sljit_emit_op1(piVar4,0x21,1,0,0x81,puVar21);
            if (*piVar4 == 0) {
              piVar4[0x26] = 0;
              emit_shift_with_flags(piVar4,0x20,0,4,0,0x7f,1,4,0);
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                puVar10 = (undefined1 *)emit_x86_instruction(piVar4,1,1,0,4,0);
                if (puVar10 != (undefined1 *)0x0) {
                  *puVar10 = 0x85;
                }
              }
            }
            lVar11 = sljit_emit_jump(piVar4,1);
            if (*piVar4 == 0) {
              lVar5 = *(long *)(piVar4 + 0x18);
              lVar6 = *(long *)(lVar5 + 8);
              uVar29 = lVar6 + 0x10;
              if (uVar29 < 0xff1) {
                *(ulong *)(lVar5 + 8) = uVar29;
                plVar13 = (long *)(lVar5 + 0x10 + lVar6);
              }
              else {
                puVar12 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
                if (puVar12 == (undefined8 *)0x0) {
                  *piVar4 = 2;
                  goto LAB_00118883;
                }
                *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                *(undefined8 **)(piVar4 + 0x18) = puVar12;
                plVar13 = puVar12 + 2;
                puVar12[1] = 0x10;
              }
              plVar2 = *pplVar14;
              *plVar13 = lVar11;
              plVar13[1] = (long)plVar2;
              *pplVar14 = plVar13;
            }
LAB_00118883:
            lVar11 = sljit_emit_label(piVar4);
            if ((lVar9 != 0) && (lVar11 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar11;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          uVar19 = uVar19 | 2;
          sljit_emit_op1(piVar4,0x20,1,0,5,0);
          goto LAB_00117d32;
        }
      }
joined_r0x00117f44:
      uVar25 = 1;
      if ((uVar19 & 0x7c) != 0) {
        if ((uVar19 & 3) == 1) {
          sljit_emit_op1(piVar4,0x20,5,0,1,0);
        }
        uVar29 = (ulong)*(uint *)(param_1 + 0x3c);
        if (*(uint *)(param_1 + 0x3c) == 0) {
          lVar9 = sljit_emit_cmp(piVar4,2,1,0,0x7f,0x110000);
          sljit_emit_op1(piVar4,0x20,1,0,0x7f,0x378);
          lVar11 = sljit_emit_label(piVar4);
          if ((lVar11 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar11;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        if (*piVar4 == 0) {
          piVar4[0x26] = 0;
          emit_shift_with_flags(piVar4,0x28,0,4,0,1,0,0x7f,7);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_shift_with_flags(piVar4,0x20,0,4,0,4,0,0x7f,1);
          }
        }
        sljit_emit_op1(piVar4,0x23,4,0,0x84,&_pcre2_ucd_stage1_32);
        if (*piVar4 == 0) {
          piVar4[0x26] = 0;
          emit_cum_binary(piVar4,0x25232120,1,0,1,0,0x7f,0x7f);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_shift_with_flags(piVar4,0x20,0,4,0,4,0,0x7f,7);
          }
        }
        sljit_emit_op2(piVar4,0x40,1,0,1,0,4,0);
        sljit_emit_op1(piVar4,0x20,4,0,0x7f,&_pcre2_ucd_stage2_32);
        sljit_emit_op1(piVar4,0x23,4,0,0x184,1);
        if (*piVar4 == 0) {
          piVar4[0x26] = 0;
          emit_shift_with_flags(piVar4,0x20,0,1,0,4,0,0x7f,3,0);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_shift_with_flags(piVar4,0x20,0,4,0,4,0,0x7f,2,0);
          }
        }
        pplVar32 = (long **)0x0;
        sljit_emit_op2(piVar4,0x40,4,0,4,0,1,0);
        iVar20 = (iVar20 + 1) - (uint)(uVar27 == 0);
        if ((uVar19 & 0x40) != 0) {
          sljit_emit_op1(piVar4,0x23,1,0,0x84,&_pcre2_ucp_gbtable_32);
          puVar17 = puVar21;
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_shift_with_flags(piVar4,0x28,0,1,0,1,0,0x7f,0xb,uVar29);
          }
LAB_0011a345:
          puVar16 = puVar17;
          uVar22 = *puVar16;
          if (uVar22 != 0) {
            puVar17 = puVar16 + 2;
            if (((uVar22 != 1) && (puVar17 = puVar16 + 3, uVar22 != 2)) && (puVar16[1] == 0xc)) {
              iVar20 = iVar20 + -1;
              bVar31 = iVar20 == 0 && pplVar14 != param_3;
              if (uVar22 == 4) {
                bVar31 = iVar20 != 0 || pplVar14 == param_3;
              }
              lVar9 = sljit_emit_cmp(piVar4,bVar31,1,0,0x7f,(long)(int)puVar16[2]);
              pplVar32 = pplVar14;
              if (iVar20 < 1) {
                pplVar32 = param_3;
              }
              if (*piVar4 == 0) {
                lVar11 = *(long *)(piVar4 + 0x18);
                lVar5 = *(long *)(lVar11 + 8);
                uVar29 = lVar5 + 0x10;
                if (uVar29 < 0xff1) {
                  *(ulong *)(lVar11 + 8) = uVar29;
                  plVar13 = (long *)(lVar11 + 0x10 + lVar5);
                }
                else {
                  puVar12 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
                  if (puVar12 == (undefined8 *)0x0) {
                    *piVar4 = 2;
                    goto LAB_0011a345;
                  }
                  *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                  *(undefined8 **)(piVar4 + 0x18) = puVar12;
                  plVar13 = puVar12 + 2;
                  puVar12[1] = 0x10;
                }
                plVar2 = *pplVar32;
                *plVar13 = lVar9;
                plVar13[1] = (long)plVar2;
                *pplVar32 = plVar13;
              }
            }
            goto LAB_0011a345;
          }
        }
        if ((uVar19 & 0x20) != 0) {
          sljit_emit_op1(piVar4,0x23,1,0,0x84,&DAT_00136022);
          puVar17 = puVar21;
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            uVar24 = 0x25232120;
            emit_cum_binary(piVar4,0x25232120,1,0,1,0,0x7f,0xfff);
            if (*piVar4 == 0) {
              piVar4[0x26] = 0;
              emit_shift_with_flags(piVar4,0x20,0,1,0,1,0,0x7f,2,uVar24);
            }
          }
LAB_00119feb:
          puVar16 = puVar17;
          uVar22 = *puVar16;
          if (uVar22 != 0) {
            puVar17 = puVar16 + 2;
            if (((uVar22 != 1) && (puVar17 = puVar16 + 3, uVar22 != 2)) && (puVar16[1] == 0xd)) {
              iVar20 = iVar20 + -1;
              bVar31 = iVar20 == 0 && pplVar14 != param_3;
              if (uVar22 == 4) {
                bVar31 = iVar20 != 0 || pplVar14 == param_3;
              }
              if (*piVar4 == 0) {
                uVar22 = puVar16[2];
                piVar4[0x26] = 0x100;
                emit_test_binary(piVar4,0x81,(uVar22 >> 5) * 4 + 0x1360b8,0x7f,
                                 1L << ((byte)uVar22 & 0x1f));
              }
              lVar9 = sljit_emit_jump(piVar4,bVar31 ^ 1);
              pplVar32 = pplVar14;
              if (iVar20 < 1) {
                pplVar32 = param_3;
              }
              if (*piVar4 == 0) {
                lVar11 = *(long *)(piVar4 + 0x18);
                lVar5 = *(long *)(lVar11 + 8);
                uVar29 = lVar5 + 0x10;
                if (uVar29 < 0xff1) {
                  *(ulong *)(lVar11 + 8) = uVar29;
                  plVar13 = (long *)(lVar11 + 0x10 + lVar5);
                }
                else {
                  puVar12 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
                  if (puVar12 == (undefined8 *)0x0) {
                    *piVar4 = 2;
                    goto LAB_00119feb;
                  }
                  *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                  *(undefined8 **)(piVar4 + 0x18) = puVar12;
                  plVar13 = puVar12 + 2;
                  puVar12[1] = 0x10;
                }
                plVar2 = *pplVar32;
                *plVar13 = lVar9;
                plVar13[1] = (long)plVar2;
                *pplVar32 = plVar13;
              }
            }
            goto LAB_00119feb;
          }
        }
        if ((uVar19 & 8) != 0) {
          sljit_emit_op1(piVar4,0x21,1,0,0x84,&_pcre2_ucd_records_32);
          puVar17 = puVar21;
LAB_0011a288:
          puVar16 = puVar17;
          uVar22 = *puVar16;
          if (uVar22 != 0) {
            puVar17 = puVar16 + 2;
            if ((uVar22 != 1) && (puVar17 = puVar16 + 3, uVar22 != 2)) {
              if (puVar16[1] == 4) {
                bVar31 = iVar20 == 1 && pplVar14 != param_3;
                if (uVar22 == 4) {
                  bVar31 = iVar20 != 1 || pplVar14 == param_3;
                }
              }
              else {
                if ((puVar16[1] != 5) || (uVar22 == 4)) goto LAB_0011a288;
                bVar31 = iVar20 == 1 && pplVar14 != param_3;
              }
              iVar20 = iVar20 + -1;
              lVar9 = sljit_emit_cmp(piVar4,bVar31,1,0,0x7f,(long)(int)puVar16[2]);
              pplVar32 = pplVar14;
              if (iVar20 < 1) {
                pplVar32 = param_3;
              }
              if (*piVar4 == 0) {
                lVar11 = *(long *)(piVar4 + 0x18);
                lVar5 = *(long *)(lVar11 + 8);
                uVar29 = lVar5 + 0x10;
                if (uVar29 < 0xff1) {
                  *(ulong *)(lVar11 + 8) = uVar29;
                  plVar13 = (long *)(lVar11 + 0x10 + lVar5);
                }
                else {
                  puVar12 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
                  if (puVar12 == (undefined8 *)0x0) {
                    *piVar4 = 2;
                    goto LAB_0011a288;
                  }
                  *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                  *(undefined8 **)(piVar4 + 0x18) = puVar12;
                  plVar13 = puVar12 + 2;
                  puVar12[1] = 0x10;
                }
                plVar2 = *pplVar32;
                *plVar13 = lVar9;
                plVar13[1] = (long)plVar2;
                *pplVar32 = plVar13;
              }
            }
            goto LAB_0011a288;
          }
        }
        if ((uVar19 & 0x10) != 0) {
          sljit_emit_op1(piVar4,0x23,1,0,0x84,&_pcre2_ucp_gbtable_32);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cum_binary(piVar4,0x25232120,1,0,1,0,0x7f,0x3ff);
            if (*piVar4 == 0) {
              piVar4[0x26] = 0;
              emit_shift_with_flags(piVar4,0x20,0,1,0,1,0,0x7f,2,0);
            }
          }
          puVar17 = puVar21;
          if ((uVar19 & 0x80) != 0) {
            if ((uVar19 & 4) != 0) {
              if ((uVar19 & 1) == 0) {
                bVar18 = true;
                sljit_emit_op1(piVar4,0x20,5,0,4,0);
              }
              else {
                bVar30 = true;
                sljit_emit_op1(piVar4,0x20,0x8e,0,4,0);
              }
            }
            sljit_emit_op1(piVar4,0x21,4,0,0x84,&_pcre2_ucd_records_32);
          }
          while (puVar16 = puVar17, uVar22 = *puVar16, uVar22 != 0) {
            puVar17 = puVar16 + 2;
            if (((uVar22 != 1) && (puVar17 = puVar16 + 3, uVar22 != 2)) && (puVar16[1] == 5)) {
              iVar20 = iVar20 + -1;
              lVar9 = 0;
              if ((uVar22 == 4) &&
                 (lVar9 = sljit_emit_cmp(piVar4,0,4,0,0x7f,(long)(int)puVar16[2]),
                 iVar20 == 0 && pplVar14 != param_3)) {
                if (*piVar4 == 0) {
                  lVar11 = *(long *)(piVar4 + 0x18);
                  lVar5 = *(long *)(lVar11 + 8);
                  uVar29 = lVar5 + 0x10;
                  if (uVar29 < 0xff1) {
                    *(ulong *)(lVar11 + 8) = uVar29;
                    plVar13 = (long *)(lVar11 + 0x10 + lVar5);
                  }
                  else {
                    puVar12 = (undefined8 *)
                              (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                        (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
                    if (puVar12 == (undefined8 *)0x0) {
                      *piVar4 = 2;
                      goto LAB_0011a4ba;
                    }
                    *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                    *(undefined8 **)(piVar4 + 0x18) = puVar12;
                    plVar13 = puVar12 + 2;
                    puVar12[1] = 0x10;
                  }
                  plVar2 = *param_3;
                  *plVar13 = lVar9;
                  plVar13[1] = (long)plVar2;
                  *param_3 = plVar13;
                }
LAB_0011a4ba:
                lVar9 = 0;
              }
              if (*piVar4 == 0) {
                uVar22 = puVar16[2];
                piVar4[0x26] = 0x100;
                emit_test_binary(piVar4,0x81,(uVar22 >> 5) * 4 + 0x1360b0,0x7f,
                                 1L << ((byte)uVar22 & 0x1f));
              }
              lVar11 = sljit_emit_jump(piVar4);
              pplVar32 = pplVar14;
              if (iVar20 < 1) {
                pplVar32 = param_3;
              }
              if (*piVar4 == 0) {
                lVar5 = *(long *)(piVar4 + 0x18);
                lVar6 = *(long *)(lVar5 + 8);
                uVar29 = lVar6 + 0x10;
                if (uVar29 < 0xff1) {
                  *(ulong *)(lVar5 + 8) = uVar29;
                  plVar13 = (long *)(lVar5 + 0x10 + lVar6);
                }
                else {
                  puVar12 = (undefined8 *)(*(code *)**(undefined8 **)(piVar4 + 0x12))(0x1000);
                  if (puVar12 == (undefined8 *)0x0) {
                    *piVar4 = 2;
                    goto LAB_00119d41;
                  }
                  *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                  *(undefined8 **)(piVar4 + 0x18) = puVar12;
                  plVar13 = puVar12 + 2;
                  puVar12[1] = 0x10;
                }
                plVar2 = *pplVar32;
                *plVar13 = lVar11;
                plVar13[1] = (long)plVar2;
                *pplVar32 = plVar13;
              }
LAB_00119d41:
              if ((lVar9 != 0) && (lVar11 = sljit_emit_label(piVar4), lVar11 != 0)) {
                *(long *)(lVar9 + 0x18) = lVar11;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
          }
          if (bVar30) {
            uVar24 = 0x8e;
          }
          else {
            if (!bVar18) goto LAB_001181a5;
            uVar24 = 5;
          }
          sljit_emit_op1(piVar4,0x20,4,0,uVar24,0);
        }
LAB_001181a5:
        if ((uVar19 & 1) == 0) {
          if ((uVar19 & 4) == 0) {
LAB_001181be:
            uVar25 = 1;
            goto LAB_00117d4a;
          }
          uVar25 = 1;
        }
        else {
          sljit_emit_op1(piVar4,0x20,1,0,5,0);
          if ((uVar19 & 4) == 0) goto LAB_001181be;
          uVar25 = 5;
        }
        sljit_emit_op1(piVar4,0x21,4,0,0x84,&DAT_00136019);
        if (*piVar4 == 0) {
          piVar4[0x26] = 0;
          emit_shift_with_flags(piVar4,0x20,0,uVar25,0,0x7f,1,4,0,pplVar32);
          if (uVar27 != 0) {
            if (*piVar4 == 0) {
              piVar4[0x26] = 0;
              emit_test_binary(piVar4,uVar25,0,0x7f,uVar27);
            }
LAB_00119e63:
            iVar20 = iVar20 + -1;
            lVar9 = sljit_emit_jump(piVar4,iVar20 != 0 || pplVar14 == param_3);
            pplVar32 = pplVar14;
            if (iVar20 < 1) {
              pplVar32 = param_3;
            }
            if (*piVar4 == 0) {
              lVar11 = *(long *)(piVar4 + 0x18);
              lVar5 = *(long *)(lVar11 + 8);
              uVar29 = lVar5 + 0x10;
              if (uVar29 < 0xff1) {
                *(ulong *)(lVar11 + 8) = uVar29;
                plVar13 = (long *)(lVar11 + 0x10 + lVar5);
              }
              else {
                puVar12 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
                if (puVar12 == (undefined8 *)0x0) {
                  *piVar4 = 2;
                  goto LAB_00117d4a;
                }
                *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                *(undefined8 **)(piVar4 + 0x18) = puVar12;
                plVar13 = puVar12 + 2;
                puVar12[1] = 0x10;
              }
              plVar2 = *pplVar32;
              *plVar13 = lVar9;
              plVar13[1] = (long)plVar2;
              *pplVar32 = plVar13;
            }
          }
        }
        else if (uVar27 != 0) goto LAB_00119e63;
      }
LAB_00117d4a:
      uVar22 = *puVar21;
      if (uVar22 != 0) {
        iVar23 = 0;
        bVar30 = pplVar14 != param_3;
        uVar29 = 0;
LAB_00117d7e:
        uVar26 = (ulong)puVar21[1];
        iVar28 = iVar20 + -1;
        bVar31 = iVar28 == 0;
        bVar18 = bVar31 && bVar30;
        if (uVar22 == 1) {
          puVar17 = puVar21 + 2;
          if (iVar23 < 3) {
            if (puVar21[2] - 1 < 2) {
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                emit_cmp_binary(piVar4,1,0,0x7f);
              }
              bVar18 = iVar23 == 0;
              iVar23 = iVar23 + 1;
              sljit_emit_op_flags_constprop_0_isra_0(piVar4,(-(uint)bVar18 & 0xffffffda) + 0x46,4,0)
              ;
              iVar20 = iVar28;
              goto code_r0x00118423;
            }
            if (iVar23 < 1) {
              lVar9 = sljit_emit_cmp(piVar4,bVar18,1,0,0x7f,uVar26 - uVar29);
              goto LAB_00118356;
            }
          }
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x246,4,0);
          lVar9 = sljit_emit_jump(piVar4,!bVar31 || !bVar30);
          goto LAB_00118356;
        }
        if (uVar22 == 2) {
          if (uVar26 != uVar29) {
            if (uVar26 < uVar29) {
              sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,uVar29 - uVar26);
            }
            else {
              sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,uVar26 - uVar29);
            }
          }
          puVar17 = puVar21 + 3;
          if (iVar23 < 3) {
            if (puVar21[3] - 1 < 2) {
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                emit_cmp_binary(piVar4,1,0,0x7f);
              }
              bVar18 = iVar23 == 0;
              iVar23 = iVar23 + 1;
              sljit_emit_op_flags_constprop_0_isra_0(piVar4,(-(uint)bVar18 & 0xffffffda) + 0x46,4);
              uVar29 = uVar26;
              iVar20 = iVar28;
              goto code_r0x00118423;
            }
            if (iVar23 < 1) {
              lVar9 = sljit_emit_cmp(piVar4,bVar18 ^ 5,1,0,0x7f,puVar21[2] - uVar26);
              goto LAB_00118356;
            }
          }
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x246,4,5);
          lVar9 = sljit_emit_jump(piVar4,!bVar31 || !bVar30);
          goto LAB_00118356;
        }
        if (uVar22 == 4) {
          bVar18 = !bVar31 || !bVar30;
        }
        puVar17 = puVar21 + 3;
        switch(uVar26) {
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
code_r0x00118423:
          uVar22 = *puVar17;
          puVar21 = puVar17;
          if (uVar22 == 0) goto LAB_0011842e;
          goto LAB_00117d7e;
        case 7:
        case 8:
          if (uVar29 != 9) {
            if (uVar29 < 10) {
              sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,9 - uVar29);
            }
            else {
              sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,uVar29 - 9);
            }
          }
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar9 = emit_x86_instruction(piVar4,0x11,0x7f,4,1,0);
            if (lVar9 != 0) {
              *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,5);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar9 = emit_x86_instruction(piVar4,0x11,0x7f,0x7c,1,0);
            if (lVar9 != 0) {
              *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,0);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f,0x1805);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,0);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_test_binary(piVar4,uVar25,0,0x7f,0x38000000);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x246,4,1);
          lVar9 = sljit_emit_jump(piVar4,bVar18 ^ 1);
          goto LAB_00118356;
        case 10:
          lVar9 = (ulong)puVar21[2] * 4;
          puVar21 = (uint *)(&_pcre2_ucd_caseless_sets_32 + lVar9);
          uVar22 = *puVar21;
          uVar15 = *(uint *)(&DAT_001360a4 + lVar9) ^ uVar22;
          if ((uVar15 - 1 & uVar15) == 0) {
            if (uVar29 == 0) {
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                uVar24 = 1;
LAB_001191ec:
                emit_cum_binary(piVar4,0xd0b0908,4,0,uVar24,0,0x7f,uVar15);
                uVar25 = *(undefined4 *)(&DAT_001360a4 + lVar9);
                if (*piVar4 == 0) {
                  piVar4[0x26] = 0;
                  emit_cmp_binary(piVar4,4,0,0x7f,uVar25);
                }
              }
            }
            else {
              sljit_emit_op2(piVar4,0x40,4,0,1,0,0x7f,uVar29);
              uVar15 = *(uint *)(&DAT_001360a4 + lVar9) ^ *puVar21;
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                uVar24 = 4;
                goto LAB_001191ec;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,0);
            puVar21 = (uint *)(&_pcre2_ucp_typerange_32 + lVar9);
          }
          else {
            uVar15 = *(uint *)(&DAT_001360a4 + lVar9) ^ *(uint *)(&_pcre2_ucp_typerange_32 + lVar9);
            if ((uVar15 - 1 & uVar15) != 0) {
              puVar21 = (uint *)(&DAT_001360a4 + lVar9);
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                emit_cmp_binary(piVar4,1,0,0x7f,uVar22 - uVar29);
              }
              uVar24 = 0x20;
              goto LAB_00119299;
            }
            if (uVar29 == 0) {
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                uVar24 = 1;
LAB_001197e7:
                uVar26 = (ulong)uVar15;
                emit_cum_binary(piVar4,0xd0b0908,4,0,uVar24,0,0x7f);
                uVar25 = *(undefined4 *)(&_pcre2_ucp_typerange_32 + lVar9);
                if (*piVar4 == 0) {
                  piVar4[0x26] = 0;
                  emit_cmp_binary(piVar4,4,0,0x7f,uVar25,uVar26);
                }
              }
            }
            else {
              sljit_emit_op2(piVar4,0x40,4,0,1,0,0x7f,uVar29);
              uVar15 = *(uint *)(&DAT_001360a4 + lVar9) ^ *puVar21;
              if (*piVar4 == 0) {
                piVar4[0x26] = 0;
                uVar24 = 4;
                goto LAB_001197e7;
              }
            }
            sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,0);
            if (*piVar4 == 0) {
              uVar22 = *puVar21;
              piVar4[0x26] = 0;
              emit_cmp_binary(piVar4,1,0,0x7f,uVar22 - uVar29);
            }
            uVar24 = 0x46;
            if (*(int *)(&DAT_001360ac + lVar9) == -1) {
              uVar24 = 0x246;
            }
            puVar21 = (uint *)(&DAT_001360ac + lVar9);
            sljit_emit_op_flags_constprop_0_isra_0(piVar4,uVar24,4,0);
          }
          while (uVar22 = *puVar21, uVar22 != 0xffffffff) {
            puVar21 = puVar21 + 1;
            if (*piVar4 == 0) {
              piVar4[0x26] = 0;
              emit_cmp_binary(piVar4,1,0,0x7f,uVar22 - uVar29);
            }
            uVar24 = 0x246;
            if (*puVar21 != 0xffffffff) {
              uVar24 = 0x46;
            }
LAB_00119299:
            sljit_emit_op_flags_constprop_0_isra_0(piVar4,uVar24,4,0);
          }
          lVar9 = sljit_emit_jump(piVar4,bVar18 ^ 1);
LAB_00118356:
          if (lVar9 != 0) {
            if (iVar28 < 1) {
              pplVar14 = param_3;
            }
            if (*piVar4 == 0) {
              lVar11 = *(long *)(piVar4 + 0x18);
              lVar5 = *(long *)(lVar11 + 8);
              uVar29 = lVar5 + 0x10;
              if (uVar29 < 0xff1) {
                *(ulong *)(lVar11 + 8) = uVar29;
                plVar13 = (long *)(lVar11 + 0x10 + lVar5);
              }
              else {
                puVar12 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar4 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
                if (puVar12 == (undefined8 *)0x0) {
                  *piVar4 = 2;
                  goto LAB_001183d0;
                }
                *puVar12 = *(undefined8 *)(piVar4 + 0x18);
                *(undefined8 **)(piVar4 + 0x18) = puVar12;
                plVar13 = puVar12 + 2;
                puVar12[1] = 0x10;
              }
              plVar2 = *pplVar14;
              *plVar13 = lVar9;
              plVar13[1] = (long)plVar2;
              *pplVar14 = plVar13;
            }
          }
LAB_001183d0:
          FUN_00118423();
          return;
        case 0xb:
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f,0x24 - uVar29);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,0);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f,0x40 - uVar29);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,0);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f,0x60 - uVar29);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,0);
          if (uVar29 != 0xa0) {
            if (uVar29 < 0xa1) {
              sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,0xa0 - uVar29);
            }
            else {
              sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,uVar29 - 0xa0);
            }
          }
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f,0xd75f);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,5);
          sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,0xa0);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f,0xe000);
          }
          uVar24 = 3;
          break;
        case 0xe:
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_test_binary(piVar4,uVar25,0,0x7f,0x3800001f);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,1);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_test_binary(piVar4,uVar25,0,0x7f,2);
          }
          lVar9 = sljit_emit_jump(piVar4,0);
          if (uVar29 != 0x2066) {
            if (uVar29 < 0x2067) {
              sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,0x2066 - uVar29);
            }
            else {
              sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,uVar29 - 0x2066);
            }
          }
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar11 = emit_x86_instruction(piVar4,0x11,0x7f,3,1,0);
            if (lVar11 != 0) {
              *(byte *)(lVar11 + 1) = *(byte *)(lVar11 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,5);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f,0xffffffffffffe5b6);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,0);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f,0xfffffffffffff7a8);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,0);
          if (uVar29 != 0x2066) {
            if (uVar29 < 0x2066) {
              sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,0x2066 - uVar29);
            }
            else {
              sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f);
            }
          }
          lVar11 = sljit_emit_label(piVar4);
          if ((lVar11 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar11;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          goto LAB_00118d13;
        case 0xf:
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_test_binary(piVar4,uVar25,0,0x7f,0x1800001f);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,1);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_test_binary(piVar4,uVar25,0,0x7f,2);
          }
          lVar9 = sljit_emit_jump(piVar4,0);
          if (uVar29 != 0x2066) {
            if (uVar29 < 0x2067) {
              sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,0x2066 - uVar29);
            }
            else {
              sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,uVar29 - 0x2066);
            }
          }
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar11 = emit_x86_instruction(piVar4,0x11,0x7f,3,1,0);
            if (lVar11 != 0) {
              *(byte *)(lVar11 + 1) = *(byte *)(lVar11 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,5);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cmp_binary(piVar4,1,0,0x7f,0xffffffffffffe5b6);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,0);
          if (uVar29 != 0x2066) {
            if (uVar29 < 0x2066) {
              sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f);
            }
            else {
              sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,uVar29 - 0x2066);
            }
          }
          lVar11 = sljit_emit_label(piVar4);
          if ((lVar11 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar11;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
LAB_00118d13:
          lVar9 = sljit_emit_cmp(piVar4,bVar18,4,0,0x7f,0);
          goto LAB_00118356;
        case 0x10:
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_test_binary(piVar4,uVar25,0,0x7f,0x7800000);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,1);
          if (uVar29 != 0) {
            sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,uVar29);
          }
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar9 = emit_x86_instruction(piVar4,0x11,0x7f,0x7f,1,0);
            if (lVar9 != 0) {
              *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x45,4,5);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_test_binary(piVar4,uVar25,0,0x7f,0x7f0000);
          }
          uVar24 = 1;
          break;
        case 0x11:
          if (uVar29 != 0x41) {
            if (uVar29 < 0x42) {
              sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,0x41 - uVar29);
            }
            else {
              sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,uVar29 - 0x41);
            }
          }
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            emit_cum_binary(piVar4,0x25232120,4,0,1,0,0x7f,0xffffffffffffffdf);
            if (*piVar4 == 0) {
              piVar4[0x26] = 0;
              lVar9 = emit_x86_instruction(piVar4,0x11,0x7f,5,4,0);
              if (lVar9 != 0) {
                *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) | 0x38;
              }
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x20,4,5);
          sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,0x11);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar9 = emit_x86_instruction(piVar4,0x11,0x7f,9,1,0);
            if (lVar9 != 0) {
              *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,5);
          sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,0xfee0);
          lVar9 = sljit_emit_cmp(piVar4,4,1,0,0x7f,0x36);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar11 = emit_x86_instruction(piVar4,0x11,0x7f,9,1,0);
            if (lVar11 != 0) {
              *(byte *)(lVar11 + 1) = *(byte *)(lVar11 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,5);
          sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,0x11);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar11 = emit_x86_instruction(piVar4,0x11,0x7f,5,1,0);
            if (lVar11 != 0) {
              *(byte *)(lVar11 + 1) = *(byte *)(lVar11 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,5);
          sljit_emit_op2(piVar4,0x42,1,0,1,0,0x7f,0x20);
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar11 = emit_x86_instruction(piVar4,0x11,0x7f,5,1,0);
            if (lVar11 != 0) {
              *(byte *)(lVar11 + 1) = *(byte *)(lVar11 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x46,4,5);
          sljit_emit_op2(piVar4,0x40,1,0,1,0,0x7f,0x31);
          lVar11 = sljit_emit_label(piVar4);
          if ((lVar9 != 0) && (lVar11 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar11;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          if (*piVar4 == 0) {
            piVar4[0x26] = 0;
            lVar9 = emit_x86_instruction(piVar4,0x11,0x7f,0,4,0);
            if (lVar9 != 0) {
              *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) | 0x38;
            }
          }
          lVar9 = sljit_emit_jump(piVar4,bVar18 ^ 1);
          goto LAB_00118356;
        default:
          FUN_00118423();
          return;
        }
        sljit_emit_op_flags_constprop_0_isra_0(piVar4,0x246,4,uVar24);
        lVar9 = sljit_emit_jump(piVar4,bVar18 ^ 1);
        goto LAB_00118356;
      }
LAB_0011842e:
      plVar13 = local_48;
      if (local_48 != (long *)0x0) {
        lVar9 = sljit_emit_label(piVar4);
        do {
          lVar11 = *plVar13;
          if ((lVar11 != 0) && (lVar9 != 0)) {
            *(long *)(lVar11 + 0x18) = lVar9;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar13 = (long *)plVar13[1];
        } while (plVar13 != (long *)0x0);
      }
      goto LAB_00117ed2;
    }
    compile_char1_matchingpath(param_1,0xd,puVar17,param_3,0);
    if (pplVar14 != param_3) goto LAB_00117ed2;
  }
  lVar9 = sljit_emit_jump(piVar4,0x24);
  if (*piVar4 == 0) {
    lVar11 = *(long *)(piVar4 + 0x18);
    lVar5 = *(long *)(lVar11 + 8);
    uVar29 = lVar5 + 0x10;
    if (uVar29 < 0xff1) {
      *(ulong *)(lVar11 + 8) = uVar29;
      plVar13 = (long *)(lVar11 + 0x10 + lVar5);
    }
    else {
      puVar12 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar4 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar12 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_00117ed2;
      }
      *puVar12 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar12;
      plVar13 = puVar12 + 2;
      puVar12[1] = 0x10;
    }
    plVar2 = *param_3;
    *plVar13 = lVar9;
    plVar13[1] = (long)plVar2;
    *param_3 = plVar13;
  }
LAB_00117ed2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void FUN_001182ba(long param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  bool bVar16;
  uint unaff_EBX;
  int unaff_EBP;
  uint *puVar17;
  int *in_R9;
  undefined4 uVar18;
  ulong uVar19;
  int unaff_R12D;
  int *unaff_R13;
  uint *unaff_R14;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
  long *unaff_retaddr;
  uint *in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000030;
  long in_stack_00000038;
  long *plVar23;
  ulong uVar24;
  
  do {
    uVar24 = 0;
    uVar19 = 0x7fffffff;
    piVar15 = in_R9;
LAB_00117a33:
    iVar4 = *piVar15;
    if (iVar4 == 0) {
      if (unaff_R12D == 0x3fffffff) {
        compile_char1_matchingpath(in_stack_00000010,0xd,piVar15,unaff_retaddr,0);
        if (in_stack_00000018 != unaff_retaddr) goto LAB_00117ed2;
      }
      else {
        if (unaff_R12D != 0 || unaff_EBP != 0) {
          if (param_2 == 0) {
            plVar23 = (long *)0x0;
            if ((unaff_EBX & 0x7c) != 0) {
              plVar23 = unaff_retaddr;
            }
            read_char_isra_0(in_stack_00000010,plVar23);
            uVar13 = *unaff_R14 & 2;
            if ((*unaff_R14 & 4) == 0) goto LAB_00117a89;
LAB_00117f33:
            if (uVar13 == 0) goto joined_r0x00117f44;
            sljit_emit_op1();
            iVar4 = optimize_class_ranges_isra_0
                              (*in_stack_00000010,in_stack_00000008,0,1,in_stack_00000018);
            if ((iVar4 == 0) &&
               (iVar4 = optimize_class_chars_isra_0
                                  (*in_stack_00000010,in_stack_00000008,0,1,in_stack_00000018),
               iVar4 == 0)) {
              lVar6 = sljit_emit_cmp();
              if (*unaff_R13 == 0) {
                unaff_R13[0x26] = 0;
                emit_cum_binary();
                if (*unaff_R13 == 0) {
                  unaff_R13[0x26] = 0;
                  emit_shift_with_flags();
                }
              }
              sljit_emit_op1();
              if (*unaff_R13 == 0) {
                unaff_R13[0x26] = 0;
                emit_shift_with_flags();
                if (*unaff_R13 == 0) {
                  unaff_R13[0x26] = 0;
                  puVar7 = (undefined1 *)emit_x86_instruction();
                  if (puVar7 != (undefined1 *)0x0) {
                    *puVar7 = 0x85;
                  }
                }
              }
              uVar10 = sljit_emit_jump();
              if (*unaff_R13 == 0) {
                lVar8 = *(long *)(unaff_R13 + 0x18);
                lVar2 = *(long *)(lVar8 + 8);
                uVar19 = lVar2 + 0x10;
                if (uVar19 < 0xff1) {
                  *(ulong *)(lVar8 + 8) = uVar19;
                  puVar9 = (undefined8 *)(lVar8 + 0x10 + lVar2);
                }
                else {
                  puVar11 = (undefined8 *)
                            (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                                      (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
                  if (puVar11 == (undefined8 *)0x0) {
                    *unaff_R13 = 2;
                    goto LAB_00118883;
                  }
                  *puVar11 = *(undefined8 *)(unaff_R13 + 0x18);
                  *(undefined8 **)(unaff_R13 + 0x18) = puVar11;
                  puVar9 = puVar11 + 2;
                  puVar11[1] = 0x10;
                }
                lVar8 = *in_stack_00000018;
                *puVar9 = uVar10;
                puVar9[1] = lVar8;
                *in_stack_00000018 = (long)puVar9;
              }
LAB_00118883:
              lVar8 = sljit_emit_label();
              if ((lVar6 != 0) && (lVar8 != 0)) {
                *(long *)(lVar6 + 0x18) = lVar8;
                *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            unaff_EBX = unaff_EBX | 2;
            sljit_emit_op1();
LAB_00117d32:
            in_stack_00000008 = unaff_R14 + 9;
          }
          else {
            read_char_isra_0(in_stack_00000010,unaff_retaddr);
            uVar13 = *unaff_R14 & 2;
            if ((*unaff_R14 & 4) != 0) goto LAB_00117f33;
LAB_00117a89:
            if (uVar13 != 0) {
              lVar6 = sljit_emit_cmp();
              bVar1 = *(byte *)((long)unaff_R14 + 0x23);
              iVar4 = optimize_class_ranges_isra_0(*in_stack_00000010,in_stack_00000008);
              if ((iVar4 == 0) &&
                 (iVar4 = optimize_class_chars_isra_0
                                    (*in_stack_00000010,in_stack_00000008,
                                     (uint)(int)(char)bVar1 >> 0x1f,1,&stack0x00000030), iVar4 == 0)
                 ) {
                if (*unaff_R13 == 0) {
                  unaff_R13[0x26] = 0;
                  emit_cum_binary();
                  if (*unaff_R13 == 0) {
                    unaff_R13[0x26] = 0;
                    emit_shift_with_flags();
                  }
                }
                sljit_emit_op1();
                if (*unaff_R13 == 0) {
                  unaff_R13[0x26] = 0;
                  emit_shift_with_flags();
                  if (*unaff_R13 == 0) {
                    unaff_R13[0x26] = 0;
                    puVar7 = (undefined1 *)emit_x86_instruction();
                    if (puVar7 != (undefined1 *)0x0) {
                      *puVar7 = 0x85;
                    }
                  }
                }
                lVar8 = sljit_emit_jump();
                if (*unaff_R13 == 0) {
                  lVar2 = *(long *)(unaff_R13 + 0x18);
                  lVar3 = *(long *)(lVar2 + 8);
                  uVar19 = lVar3 + 0x10;
                  if (uVar19 < 0xff1) {
                    *(ulong *)(lVar2 + 8) = uVar19;
                    plVar23 = (long *)(lVar2 + 0x10 + lVar3);
                  }
                  else {
                    puVar9 = (undefined8 *)
                             (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                                       (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
                    if (puVar9 == (undefined8 *)0x0) {
                      *unaff_R13 = 2;
                      goto LAB_00117c90;
                    }
                    *puVar9 = *(undefined8 *)(unaff_R13 + 0x18);
                    *(undefined8 **)(unaff_R13 + 0x18) = puVar9;
                    plVar23 = puVar9 + 2;
                    puVar9[1] = 0x10;
                  }
                  *plVar23 = lVar8;
                  plVar23[1] = (long)in_stack_00000030;
                  in_stack_00000030 = plVar23;
                }
              }
LAB_00117c90:
              uVar10 = sljit_emit_jump();
              if (*unaff_R13 == 0) {
                lVar8 = *(long *)(unaff_R13 + 0x18);
                lVar2 = *(long *)(lVar8 + 8);
                uVar19 = lVar2 + 0x10;
                if (uVar19 < 0xff1) {
                  *(ulong *)(lVar8 + 8) = uVar19;
                  puVar9 = (undefined8 *)(lVar8 + 0x10 + lVar2);
                }
                else {
                  puVar11 = (undefined8 *)
                            (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                                      (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
                  if (puVar11 == (undefined8 *)0x0) {
                    *unaff_R13 = 2;
                    goto LAB_00117d0c;
                  }
                  *puVar11 = *(undefined8 *)(unaff_R13 + 0x18);
                  *(undefined8 **)(unaff_R13 + 0x18) = puVar11;
                  puVar9 = puVar11 + 2;
                  puVar11[1] = 0x10;
                }
                lVar8 = *unaff_retaddr;
                *puVar9 = uVar10;
                puVar9[1] = lVar8;
                *unaff_retaddr = (long)puVar9;
              }
LAB_00117d0c:
              lVar8 = sljit_emit_label();
              if ((lVar6 != 0) && (lVar8 != 0)) {
                *(long *)(lVar6 + 0x18) = lVar8;
                *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
              }
              goto LAB_00117d32;
            }
            sljit_emit_op2();
            uVar10 = sljit_emit_cmp();
            plVar23 = (long *)&stack0x00000030;
            if ((*unaff_R14 & 1) == 0) {
              plVar23 = unaff_retaddr;
            }
            if (*unaff_R13 == 0) {
              lVar6 = *(long *)(unaff_R13 + 0x18);
              lVar8 = *(long *)(lVar6 + 8);
              uVar19 = lVar8 + 0x10;
              if (uVar19 < 0xff1) {
                *(ulong *)(lVar6 + 8) = uVar19;
                puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
              }
              else {
                puVar11 = (undefined8 *)
                          (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                                    (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
                if (puVar11 == (undefined8 *)0x0) {
                  *unaff_R13 = 2;
                  goto joined_r0x00117f44;
                }
                *puVar11 = *(undefined8 *)(unaff_R13 + 0x18);
                *(undefined8 **)(unaff_R13 + 0x18) = puVar11;
                puVar9 = puVar11 + 2;
                puVar11[1] = 0x10;
              }
              lVar6 = *plVar23;
              *puVar9 = uVar10;
              puVar9[1] = lVar6;
              *plVar23 = (long)puVar9;
            }
          }
joined_r0x00117f44:
          uVar18 = 1;
          if ((unaff_EBX & 0x7c) == 0) goto LAB_00117d4a;
          if ((unaff_EBX & 3) == 1) {
            sljit_emit_op1();
          }
          if (*(int *)(in_stack_00000010 + 0x3c) == 0) {
            lVar6 = sljit_emit_cmp();
            sljit_emit_op1();
            lVar8 = sljit_emit_label();
            if ((lVar8 != 0) && (lVar6 != 0)) {
              *(long *)(lVar6 + 0x18) = lVar8;
              *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          if (*unaff_R13 == 0) {
            unaff_R13[0x26] = 0;
            emit_shift_with_flags();
            if (*unaff_R13 == 0) {
              unaff_R13[0x26] = 0;
              emit_shift_with_flags();
            }
          }
          sljit_emit_op1();
          if (*unaff_R13 == 0) {
            unaff_R13[0x26] = 0;
            emit_cum_binary();
            if (*unaff_R13 == 0) {
              unaff_R13[0x26] = 0;
              emit_shift_with_flags();
            }
          }
          sljit_emit_op2();
          sljit_emit_op1();
          sljit_emit_op1();
          if (*unaff_R13 == 0) {
            unaff_R13[0x26] = 0;
            emit_shift_with_flags();
            if (*unaff_R13 == 0) {
              unaff_R13[0x26] = 0;
              emit_shift_with_flags();
            }
          }
          plVar23 = (long *)0x0;
          sljit_emit_op2();
          unaff_EBP = (unaff_EBP + 1) - (uint)(unaff_R12D == 0);
          if ((unaff_EBX & 0x40) == 0) goto LAB_0011818a;
          sljit_emit_op1();
          puVar17 = in_stack_00000008;
          if (*unaff_R13 == 0) {
            unaff_R13[0x26] = 0;
            emit_shift_with_flags();
          }
          break;
        }
        compile_char1_matchingpath(in_stack_00000010,0xd,piVar15,unaff_retaddr,0);
        if (in_stack_00000018 == unaff_retaddr) goto LAB_00117ed2;
      }
      uVar10 = sljit_emit_jump();
      if (*unaff_R13 != 0) goto LAB_00117ed2;
      lVar6 = *(long *)(unaff_R13 + 0x18);
      lVar8 = *(long *)(lVar6 + 8);
      uVar19 = lVar8 + 0x10;
      if (uVar19 < 0xff1) {
        *(ulong *)(lVar6 + 8) = uVar19;
        puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                            (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
        if (puVar11 == (undefined8 *)0x0) {
          *unaff_R13 = 2;
          goto LAB_00117ed2;
        }
        *puVar11 = *(undefined8 *)(unaff_R13 + 0x18);
        *(undefined8 **)(unaff_R13 + 0x18) = puVar11;
        puVar9 = puVar11 + 2;
        puVar11[1] = 0x10;
      }
      lVar6 = *unaff_retaddr;
      *puVar9 = uVar10;
      puVar9[1] = lVar6;
      *unaff_retaddr = (long)puVar9;
      goto LAB_00117ed2;
    }
    uVar13 = piVar15[1];
    uVar5 = (ulong)uVar13;
    unaff_EBP = unaff_EBP + 1;
    if (iVar4 == 1) {
      if (uVar19 < uVar5) {
        uVar19 = uVar5;
      }
      if (uVar5 < uVar24) {
        uVar24 = uVar5;
      }
      unaff_EBX = unaff_EBX | 1;
      piVar15 = piVar15 + 2;
      goto LAB_00117a33;
    }
    in_R9 = piVar15 + 3;
    if (iVar4 == 2) {
      if (uVar5 < uVar24) {
        uVar24 = uVar5;
      }
      if (uVar19 < (uint)piVar15[2]) {
        uVar19 = (ulong)(uint)piVar15[2];
      }
      unaff_EBX = unaff_EBX | 1;
      piVar15 = in_R9;
      goto LAB_00117a33;
    }
    if (uVar13 == 10) {
      if (iVar4 == 3) {
        puVar17 = (uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)(uint)piVar15[2] * 4);
        uVar13 = *puVar17;
        while (uVar13 != 0xffffffff) {
          uVar5 = (ulong)uVar13;
          if (uVar19 < uVar5) {
            uVar19 = uVar5;
          }
          if (uVar5 < uVar24) {
            uVar24 = uVar5;
          }
          puVar12 = puVar17 + 1;
          puVar17 = puVar17 + 1;
          uVar13 = *puVar12;
        }
      }
      else {
        uVar24 = 0;
        uVar19 = 0x7fffffff;
      }
      unaff_EBX = unaff_EBX | 1;
      piVar15 = in_R9;
      goto LAB_00117a33;
    }
    if (uVar13 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x00117a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(param_1 + uVar5 * 4) + param_1))();
      return;
    }
  } while( true );
LAB_0011a345:
  puVar12 = puVar17;
  uVar13 = *puVar12;
  if (uVar13 != 0) {
    puVar17 = puVar12 + 2;
    if (((uVar13 != 1) && (puVar17 = puVar12 + 3, uVar13 != 2)) && (puVar12[1] == 0xc)) {
      unaff_EBP = unaff_EBP + -1;
      uVar10 = sljit_emit_cmp();
      plVar23 = in_stack_00000018;
      if (unaff_EBP < 1) {
        plVar23 = unaff_retaddr;
      }
      if (*unaff_R13 == 0) {
        lVar6 = *(long *)(unaff_R13 + 0x18);
        lVar8 = *(long *)(lVar6 + 8);
        uVar19 = lVar8 + 0x10;
        if (uVar19 < 0xff1) {
          *(ulong *)(lVar6 + 8) = uVar19;
          puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
        }
        else {
          puVar11 = (undefined8 *)
                    (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                              (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
          if (puVar11 == (undefined8 *)0x0) {
            *unaff_R13 = 2;
            goto LAB_0011a345;
          }
          *puVar11 = *(undefined8 *)(unaff_R13 + 0x18);
          *(undefined8 **)(unaff_R13 + 0x18) = puVar11;
          puVar9 = puVar11 + 2;
          puVar11[1] = 0x10;
        }
        lVar6 = *plVar23;
        *puVar9 = uVar10;
        puVar9[1] = lVar6;
        *plVar23 = (long)puVar9;
      }
    }
    goto LAB_0011a345;
  }
LAB_0011818a:
  if ((unaff_EBX & 0x20) != 0) {
    sljit_emit_op1();
    puVar17 = in_stack_00000008;
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cum_binary();
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_shift_with_flags();
      }
    }
LAB_00119feb:
    puVar12 = puVar17;
    uVar13 = *puVar12;
    if (uVar13 != 0) {
      puVar17 = puVar12 + 2;
      if (((uVar13 != 1) && (puVar17 = puVar12 + 3, uVar13 != 2)) && (puVar12[1] == 0xd)) {
        unaff_EBP = unaff_EBP + -1;
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0x100;
          emit_test_binary();
        }
        uVar10 = sljit_emit_jump();
        plVar23 = in_stack_00000018;
        if (unaff_EBP < 1) {
          plVar23 = unaff_retaddr;
        }
        if (*unaff_R13 == 0) {
          lVar6 = *(long *)(unaff_R13 + 0x18);
          lVar8 = *(long *)(lVar6 + 8);
          uVar19 = lVar8 + 0x10;
          if (uVar19 < 0xff1) {
            *(ulong *)(lVar6 + 8) = uVar19;
            puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
          }
          else {
            puVar11 = (undefined8 *)
                      (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                                (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
            if (puVar11 == (undefined8 *)0x0) {
              *unaff_R13 = 2;
              goto LAB_00119feb;
            }
            *puVar11 = *(undefined8 *)(unaff_R13 + 0x18);
            *(undefined8 **)(unaff_R13 + 0x18) = puVar11;
            puVar9 = puVar11 + 2;
            puVar11[1] = 0x10;
          }
          lVar6 = *plVar23;
          *puVar9 = uVar10;
          puVar9[1] = lVar6;
          *plVar23 = (long)puVar9;
        }
      }
      goto LAB_00119feb;
    }
  }
  if ((unaff_EBX & 8) != 0) {
    sljit_emit_op1();
    puVar17 = in_stack_00000008;
LAB_0011a288:
    puVar12 = puVar17;
    uVar13 = *puVar12;
    if (uVar13 != 0) {
      puVar17 = puVar12 + 2;
      if (((uVar13 != 1) && (puVar17 = puVar12 + 3, uVar13 != 2)) &&
         ((puVar12[1] == 4 || ((puVar12[1] == 5 && (uVar13 != 4)))))) {
        unaff_EBP = unaff_EBP + -1;
        uVar10 = sljit_emit_cmp();
        plVar23 = in_stack_00000018;
        if (unaff_EBP < 1) {
          plVar23 = unaff_retaddr;
        }
        if (*unaff_R13 == 0) {
          lVar6 = *(long *)(unaff_R13 + 0x18);
          lVar8 = *(long *)(lVar6 + 8);
          uVar19 = lVar8 + 0x10;
          if (uVar19 < 0xff1) {
            *(ulong *)(lVar6 + 8) = uVar19;
            puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
          }
          else {
            puVar11 = (undefined8 *)
                      (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                                (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
            if (puVar11 == (undefined8 *)0x0) {
              *unaff_R13 = 2;
              goto LAB_0011a288;
            }
            *puVar11 = *(undefined8 *)(unaff_R13 + 0x18);
            *(undefined8 **)(unaff_R13 + 0x18) = puVar11;
            puVar9 = puVar11 + 2;
            puVar11[1] = 0x10;
          }
          lVar6 = *plVar23;
          *puVar9 = uVar10;
          puVar9[1] = lVar6;
          *plVar23 = (long)puVar9;
        }
      }
      goto LAB_0011a288;
    }
  }
  if ((unaff_EBX & 0x10) != 0) {
    sljit_emit_op1(unaff_R13,0x23,1,0,0x84,&_pcre2_ucp_gbtable_32);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cum_binary(unaff_R13,0x25232120,1,0,1,0,0x7f,0x3ff);
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_shift_with_flags(unaff_R13,0x20,0,1,0,1,0,0x7f,2,0);
      }
    }
    puVar17 = in_stack_00000008;
    if ((unaff_EBX & 0x80) != 0) {
      if ((unaff_EBX & 4) != 0) {
        if ((unaff_EBX & 1) == 0) {
          unaff_EBX = unaff_EBX | 0x100;
          sljit_emit_op1(unaff_R13,0x20,5,0,4,0);
        }
        else {
          unaff_EBX = unaff_EBX | 0x200;
          sljit_emit_op1(unaff_R13,0x20,0x8e,0,4,0);
        }
      }
      sljit_emit_op1(unaff_R13,0x21,4,0,0x84,&_pcre2_ucd_records_32);
    }
    while (puVar12 = puVar17, uVar13 = *puVar12, uVar13 != 0) {
      puVar17 = puVar12 + 2;
      if (((uVar13 != 1) && (puVar17 = puVar12 + 3, uVar13 != 2)) && (puVar12[1] == 5)) {
        unaff_EBP = unaff_EBP + -1;
        lVar6 = 0;
        if ((uVar13 == 4) &&
           (lVar6 = sljit_emit_cmp(unaff_R13,0,4,0,0x7f,(long)(int)puVar12[2]),
           unaff_EBP == 0 && in_stack_00000018 != unaff_retaddr)) {
          if (*unaff_R13 == 0) {
            lVar8 = *(long *)(unaff_R13 + 0x18);
            lVar2 = *(long *)(lVar8 + 8);
            uVar19 = lVar2 + 0x10;
            if (uVar19 < 0xff1) {
              *(ulong *)(lVar8 + 8) = uVar19;
              plVar23 = (long *)(lVar8 + 0x10 + lVar2);
            }
            else {
              puVar9 = (undefined8 *)
                       (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                                 (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
              if (puVar9 == (undefined8 *)0x0) {
                *unaff_R13 = 2;
                goto LAB_0011a4ba;
              }
              *puVar9 = *(undefined8 *)(unaff_R13 + 0x18);
              *(undefined8 **)(unaff_R13 + 0x18) = puVar9;
              plVar23 = puVar9 + 2;
              puVar9[1] = 0x10;
            }
            lVar8 = *unaff_retaddr;
            *plVar23 = lVar6;
            plVar23[1] = lVar8;
            *unaff_retaddr = (long)plVar23;
          }
LAB_0011a4ba:
          lVar6 = 0;
        }
        if (*unaff_R13 == 0) {
          uVar13 = puVar12[2];
          unaff_R13[0x26] = 0x100;
          emit_test_binary(unaff_R13,0x81,(uVar13 >> 5) * 4 + 0x1360b0,0x7f,
                           1L << ((byte)uVar13 & 0x1f));
        }
        uVar10 = sljit_emit_jump(unaff_R13);
        plVar23 = in_stack_00000018;
        if (unaff_EBP < 1) {
          plVar23 = unaff_retaddr;
        }
        if (*unaff_R13 == 0) {
          lVar8 = *(long *)(unaff_R13 + 0x18);
          lVar2 = *(long *)(lVar8 + 8);
          uVar19 = lVar2 + 0x10;
          if (uVar19 < 0xff1) {
            *(ulong *)(lVar8 + 8) = uVar19;
            puVar9 = (undefined8 *)(lVar8 + 0x10 + lVar2);
          }
          else {
            puVar11 = (undefined8 *)(*(code *)**(undefined8 **)(unaff_R13 + 0x12))(0x1000);
            if (puVar11 == (undefined8 *)0x0) {
              *unaff_R13 = 2;
              goto LAB_00119d41;
            }
            *puVar11 = *(undefined8 *)(unaff_R13 + 0x18);
            *(undefined8 **)(unaff_R13 + 0x18) = puVar11;
            puVar9 = puVar11 + 2;
            puVar11[1] = 0x10;
          }
          lVar8 = *plVar23;
          *puVar9 = uVar10;
          puVar9[1] = lVar8;
          *plVar23 = (long)puVar9;
        }
LAB_00119d41:
        if ((lVar6 != 0) && (lVar8 = sljit_emit_label(unaff_R13), lVar8 != 0)) {
          *(long *)(lVar6 + 0x18) = lVar8;
          *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
    }
    if ((unaff_EBX & 0x200) == 0) {
      if ((unaff_EBX & 0x100) == 0) goto LAB_001181a5;
      uVar10 = 5;
    }
    else {
      uVar10 = 0x8e;
    }
    sljit_emit_op1(unaff_R13,0x20,4,0,uVar10,0);
  }
LAB_001181a5:
  if ((unaff_EBX & 1) == 0) {
    if ((unaff_EBX & 4) == 0) goto LAB_001181be;
    uVar18 = 1;
LAB_00119dba:
    sljit_emit_op1(unaff_R13,0x21,4,0,0x84,&DAT_00136019);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_shift_with_flags(unaff_R13,0x20,0,uVar18,0,0x7f,1,4,0,plVar23);
      if (unaff_R12D != 0) {
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          emit_test_binary(unaff_R13,uVar18,0,0x7f,unaff_R12D);
        }
LAB_00119e63:
        unaff_EBP = unaff_EBP + -1;
        uVar10 = sljit_emit_jump(unaff_R13,unaff_EBP != 0 || in_stack_00000018 == unaff_retaddr);
        plVar23 = in_stack_00000018;
        if (unaff_EBP < 1) {
          plVar23 = unaff_retaddr;
        }
        if (*unaff_R13 == 0) {
          lVar6 = *(long *)(unaff_R13 + 0x18);
          lVar8 = *(long *)(lVar6 + 8);
          uVar19 = lVar8 + 0x10;
          if (uVar19 < 0xff1) {
            *(ulong *)(lVar6 + 8) = uVar19;
            puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
          }
          else {
            puVar11 = (undefined8 *)
                      (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                                (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
            if (puVar11 == (undefined8 *)0x0) {
              *unaff_R13 = 2;
              goto LAB_00117d4a;
            }
            *puVar11 = *(undefined8 *)(unaff_R13 + 0x18);
            *(undefined8 **)(unaff_R13 + 0x18) = puVar11;
            puVar9 = puVar11 + 2;
            puVar11[1] = 0x10;
          }
          lVar6 = *plVar23;
          *puVar9 = uVar10;
          puVar9[1] = lVar6;
          *plVar23 = (long)puVar9;
        }
      }
    }
    else if (unaff_R12D != 0) goto LAB_00119e63;
  }
  else {
    sljit_emit_op1(unaff_R13,0x20,1,0,5,0);
    if ((unaff_EBX & 4) != 0) {
      uVar18 = 5;
      goto LAB_00119dba;
    }
LAB_001181be:
    uVar18 = 1;
  }
LAB_00117d4a:
  uVar13 = *in_stack_00000008;
  if (uVar13 == 0) {
LAB_0011842e:
    plVar23 = in_stack_00000030;
    if (in_stack_00000030 != (long *)0x0) {
      lVar6 = sljit_emit_label(unaff_R13);
      do {
        lVar8 = *plVar23;
        if ((lVar8 != 0) && (lVar6 != 0)) {
          *(long *)(lVar8 + 0x18) = lVar6;
          *(ulong *)(lVar8 + 0x10) = *(ulong *)(lVar8 + 0x10) & 0xfffffffffffffffd | 1;
        }
        plVar23 = (long *)plVar23[1];
      } while (plVar23 != (long *)0x0);
    }
LAB_00117ed2:
    if (in_stack_00000038 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar4 = 0;
  bVar21 = in_stack_00000018 != unaff_retaddr;
  uVar19 = 0;
LAB_00117d7e:
  uVar24 = (ulong)in_stack_00000008[1];
  iVar20 = unaff_EBP + -1;
  bVar22 = iVar20 == 0;
  bVar16 = bVar22 && bVar21;
  if (uVar13 == 1) {
    puVar17 = in_stack_00000008 + 2;
    if (iVar4 < 3) {
      if (in_stack_00000008[2] - 1 < 2) {
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          emit_cmp_binary(unaff_R13,1,0,0x7f);
        }
        bVar16 = iVar4 == 0;
        iVar4 = iVar4 + 1;
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,(-(uint)bVar16 & 0xffffffda) + 0x46,4,0);
        unaff_EBP = iVar20;
        goto code_r0x00118423;
      }
      if (iVar4 < 1) {
        lVar6 = sljit_emit_cmp(unaff_R13,bVar16,1,0,0x7f,uVar24 - uVar19);
        goto LAB_00118356;
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x246,4,0);
    lVar6 = sljit_emit_jump(unaff_R13,!bVar22 || !bVar21);
    goto LAB_00118356;
  }
  if (uVar13 == 2) {
    if (uVar24 != uVar19) {
      if (uVar24 < uVar19) {
        sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,uVar19 - uVar24);
      }
      else {
        sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,uVar24 - uVar19);
      }
    }
    puVar17 = in_stack_00000008 + 3;
    if (iVar4 < 3) {
      if (in_stack_00000008[3] - 1 < 2) {
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          emit_cmp_binary(unaff_R13,1,0,0x7f);
        }
        bVar16 = iVar4 == 0;
        iVar4 = iVar4 + 1;
        sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,(-(uint)bVar16 & 0xffffffda) + 0x46,4);
        uVar19 = uVar24;
        unaff_EBP = iVar20;
        goto code_r0x00118423;
      }
      if (iVar4 < 1) {
        lVar6 = sljit_emit_cmp(unaff_R13,bVar16 ^ 5,1,0,0x7f,in_stack_00000008[2] - uVar24);
        goto LAB_00118356;
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x246,4,5);
    lVar6 = sljit_emit_jump(unaff_R13,!bVar22 || !bVar21);
    goto LAB_00118356;
  }
  if (uVar13 == 4) {
    bVar16 = !bVar22 || !bVar21;
  }
  puVar17 = in_stack_00000008 + 3;
  switch(uVar24) {
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
code_r0x00118423:
    uVar13 = *puVar17;
    in_stack_00000008 = puVar17;
    if (uVar13 == 0) goto LAB_0011842e;
    goto LAB_00117d7e;
  case 7:
  case 8:
    if (uVar19 != 9) {
      if (uVar19 < 10) {
        sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,9 - uVar19);
      }
      else {
        sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,uVar19 - 9);
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction(unaff_R13,0x11,0x7f,4,1,0);
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,5);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction(unaff_R13,0x11,0x7f,0x7c,1,0);
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,0);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f,0x1805);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,0);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary(unaff_R13,uVar18,0,0x7f,0x38000000);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x246,4,1);
    lVar6 = sljit_emit_jump(unaff_R13,bVar16 ^ 1);
    goto LAB_00118356;
  case 10:
    lVar6 = (ulong)in_stack_00000008[2] * 4;
    puVar17 = (uint *)(&_pcre2_ucd_caseless_sets_32 + lVar6);
    uVar13 = *puVar17;
    uVar14 = *(uint *)(&DAT_001360a4 + lVar6) ^ uVar13;
    if ((uVar14 - 1 & uVar14) == 0) {
      if (uVar19 == 0) {
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          uVar10 = 1;
LAB_001191ec:
          emit_cum_binary(unaff_R13,0xd0b0908,4,0,uVar10,0,0x7f,uVar14);
          uVar18 = *(undefined4 *)(&DAT_001360a4 + lVar6);
          if (*unaff_R13 == 0) {
            unaff_R13[0x26] = 0;
            emit_cmp_binary(unaff_R13,4,0,0x7f,uVar18);
          }
        }
      }
      else {
        sljit_emit_op2(unaff_R13,0x40,4,0,1,0,0x7f,uVar19);
        uVar14 = *(uint *)(&DAT_001360a4 + lVar6) ^ *puVar17;
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          uVar10 = 4;
          goto LAB_001191ec;
        }
      }
      sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,0);
      puVar17 = (uint *)(&_pcre2_ucp_typerange_32 + lVar6);
    }
    else {
      uVar14 = *(uint *)(&DAT_001360a4 + lVar6) ^ *(uint *)(&_pcre2_ucp_typerange_32 + lVar6);
      if ((uVar14 - 1 & uVar14) != 0) {
        puVar17 = (uint *)(&DAT_001360a4 + lVar6);
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          emit_cmp_binary(unaff_R13,1,0,0x7f,uVar13 - uVar19);
        }
        uVar10 = 0x20;
        goto LAB_00119299;
      }
      if (uVar19 == 0) {
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          uVar10 = 1;
LAB_001197e7:
          uVar24 = (ulong)uVar14;
          emit_cum_binary(unaff_R13,0xd0b0908,4,0,uVar10,0,0x7f);
          uVar18 = *(undefined4 *)(&_pcre2_ucp_typerange_32 + lVar6);
          if (*unaff_R13 == 0) {
            unaff_R13[0x26] = 0;
            emit_cmp_binary(unaff_R13,4,0,0x7f,uVar18,uVar24);
          }
        }
      }
      else {
        sljit_emit_op2(unaff_R13,0x40,4,0,1,0,0x7f,uVar19);
        uVar14 = *(uint *)(&DAT_001360a4 + lVar6) ^ *puVar17;
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          uVar10 = 4;
          goto LAB_001197e7;
        }
      }
      sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,0);
      if (*unaff_R13 == 0) {
        uVar13 = *puVar17;
        unaff_R13[0x26] = 0;
        emit_cmp_binary(unaff_R13,1,0,0x7f,uVar13 - uVar19);
      }
      uVar10 = 0x46;
      if (*(int *)(&DAT_001360ac + lVar6) == -1) {
        uVar10 = 0x246;
      }
      puVar17 = (uint *)(&DAT_001360ac + lVar6);
      sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,uVar10,4,0);
    }
    while (uVar13 = *puVar17, uVar13 != 0xffffffff) {
      puVar17 = puVar17 + 1;
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_cmp_binary(unaff_R13,1,0,0x7f,uVar13 - uVar19);
      }
      uVar10 = 0x246;
      if (*puVar17 != 0xffffffff) {
        uVar10 = 0x46;
      }
LAB_00119299:
      sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,uVar10,4,0);
    }
    lVar6 = sljit_emit_jump(unaff_R13,bVar16 ^ 1);
LAB_00118356:
    if (lVar6 != 0) {
      if (iVar20 < 1) {
        in_stack_00000018 = unaff_retaddr;
      }
      if (*unaff_R13 == 0) {
        lVar8 = *(long *)(unaff_R13 + 0x18);
        lVar2 = *(long *)(lVar8 + 8);
        uVar19 = lVar2 + 0x10;
        if (uVar19 < 0xff1) {
          *(ulong *)(lVar8 + 8) = uVar19;
          plVar23 = (long *)(lVar8 + 0x10 + lVar2);
        }
        else {
          puVar9 = (undefined8 *)
                   (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                             (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
          if (puVar9 == (undefined8 *)0x0) {
            *unaff_R13 = 2;
            goto LAB_001183d0;
          }
          *puVar9 = *(undefined8 *)(unaff_R13 + 0x18);
          *(undefined8 **)(unaff_R13 + 0x18) = puVar9;
          plVar23 = puVar9 + 2;
          puVar9[1] = 0x10;
        }
        lVar8 = *in_stack_00000018;
        *plVar23 = lVar6;
        plVar23[1] = lVar8;
        *in_stack_00000018 = (long)plVar23;
      }
    }
LAB_001183d0:
    FUN_00118423();
    return;
  case 0xb:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f,0x24 - uVar19);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,0);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f,0x40 - uVar19);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,0);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f,0x60 - uVar19);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,0);
    if (uVar19 != 0xa0) {
      if (uVar19 < 0xa1) {
        sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,0xa0 - uVar19);
      }
      else {
        sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,uVar19 - 0xa0);
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f,0xd75f);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,5);
    sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,0xa0);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f,0xe000);
    }
    uVar10 = 3;
    break;
  case 0xe:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary(unaff_R13,uVar18,0,0x7f,0x3800001f);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,1);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary(unaff_R13,uVar18,0,0x7f,2);
    }
    lVar6 = sljit_emit_jump(unaff_R13,0);
    if (uVar19 != 0x2066) {
      if (uVar19 < 0x2067) {
        sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,0x2066 - uVar19);
      }
      else {
        sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,uVar19 - 0x2066);
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar8 = emit_x86_instruction(unaff_R13,0x11,0x7f,3,1,0);
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,5);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f,0xffffffffffffe5b6);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,0);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f,0xfffffffffffff7a8);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,0);
    if (uVar19 != 0x2066) {
      if (uVar19 < 0x2066) {
        sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,0x2066 - uVar19);
      }
      else {
        sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f);
      }
    }
    lVar8 = sljit_emit_label(unaff_R13);
    if ((lVar8 != 0) && (lVar6 != 0)) {
      *(long *)(lVar6 + 0x18) = lVar8;
      *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto LAB_00118d13;
  case 0xf:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary(unaff_R13,uVar18,0,0x7f,0x1800001f);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,1);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary(unaff_R13,uVar18,0,0x7f,2);
    }
    lVar6 = sljit_emit_jump(unaff_R13,0);
    if (uVar19 != 0x2066) {
      if (uVar19 < 0x2067) {
        sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,0x2066 - uVar19);
      }
      else {
        sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,uVar19 - 0x2066);
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar8 = emit_x86_instruction(unaff_R13,0x11,0x7f,3,1,0);
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,5);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary(unaff_R13,1,0,0x7f,0xffffffffffffe5b6);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,0);
    if (uVar19 != 0x2066) {
      if (uVar19 < 0x2066) {
        sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f);
      }
      else {
        sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,uVar19 - 0x2066);
      }
    }
    lVar8 = sljit_emit_label(unaff_R13);
    if ((lVar8 != 0) && (lVar6 != 0)) {
      *(long *)(lVar6 + 0x18) = lVar8;
      *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_00118d13:
    lVar6 = sljit_emit_cmp(unaff_R13,bVar16,4,0,0x7f,0);
    goto LAB_00118356;
  case 0x10:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary(unaff_R13,uVar18,0,0x7f,0x7800000);
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,1);
    if (uVar19 != 0) {
      sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,uVar19);
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction(unaff_R13,0x11,0x7f,0x7f,1,0);
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x45,4,5);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary(unaff_R13,uVar18,0,0x7f,0x7f0000);
    }
    uVar10 = 1;
    break;
  case 0x11:
    if (uVar19 != 0x41) {
      if (uVar19 < 0x42) {
        sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,0x41 - uVar19);
      }
      else {
        sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,uVar19 - 0x41);
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cum_binary(unaff_R13,0x25232120,4,0,1,0,0x7f,0xffffffffffffffdf);
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        lVar6 = emit_x86_instruction(unaff_R13,0x11,0x7f,5,4,0);
        if (lVar6 != 0) {
          *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
        }
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x20,4,5);
    sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,0x11);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction(unaff_R13,0x11,0x7f,9,1,0);
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,5);
    sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,0xfee0);
    lVar6 = sljit_emit_cmp(unaff_R13,4,1,0,0x7f,0x36);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar8 = emit_x86_instruction(unaff_R13,0x11,0x7f,9,1,0);
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,5);
    sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,0x11);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar8 = emit_x86_instruction(unaff_R13,0x11,0x7f,5,1,0);
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,5);
    sljit_emit_op2(unaff_R13,0x42,1,0,1,0,0x7f,0x20);
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar8 = emit_x86_instruction(unaff_R13,0x11,0x7f,5,1,0);
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x46,4,5);
    sljit_emit_op2(unaff_R13,0x40,1,0,1,0,0x7f,0x31);
    lVar8 = sljit_emit_label(unaff_R13);
    if ((lVar6 != 0) && (lVar8 != 0)) {
      *(long *)(lVar6 + 0x18) = lVar8;
      *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction(unaff_R13,0x11,0x7f,0,4,0);
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    lVar6 = sljit_emit_jump(unaff_R13,bVar16 ^ 1);
    goto LAB_00118356;
  default:
    FUN_00118423();
    return;
  }
  sljit_emit_op_flags_constprop_0_isra_0(unaff_R13,0x246,4,uVar10);
  lVar6 = sljit_emit_jump(unaff_R13,bVar16 ^ 1);
  goto LAB_00118356;
}



void switchD_00117dcf::caseD_0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int *unaff_RBX;
  int *piVar8;
  ulong uVar9;
  ulong unaff_R12;
  int *unaff_R13;
  int iVar10;
  long in_FS_OFFSET;
  long *unaff_retaddr;
  int in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000030;
  long in_stack_00000038;
  
code_r0x00118420:
  piVar8 = unaff_RBX;
code_r0x00118423:
  do {
    iVar1 = *piVar8;
    if (iVar1 == 0) {
      if (in_stack_00000030 != (long *)0x0) {
        lVar5 = sljit_emit_label();
        do {
          lVar6 = *in_stack_00000030;
          if ((lVar6 != 0) && (lVar5 != 0)) {
            *(long *)(lVar6 + 0x18) = lVar5;
            *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
          }
          in_stack_00000030 = (long *)in_stack_00000030[1];
        } while (in_stack_00000030 != (long *)0x0);
      }
      if (in_stack_00000038 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar9 = (ulong)(uint)piVar8[1];
    iVar10 = param_3 + -1;
    if (iVar1 == 1) {
      if (in_stack_00000010 < 3) {
        if (piVar8[2] - 1U < 2) {
          if (*unaff_R13 == 0) {
            unaff_R13[0x26] = 0;
            emit_cmp_binary();
          }
          in_stack_00000010 = in_stack_00000010 + 1;
          sljit_emit_op_flags_constprop_0_isra_0();
          piVar8 = piVar8 + 2;
          param_3 = iVar10;
          goto code_r0x00118423;
        }
        if (in_stack_00000010 < 1) {
          lVar5 = sljit_emit_cmp();
          goto LAB_00118356;
        }
      }
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_cmp_binary();
      }
      sljit_emit_op_flags_constprop_0_isra_0();
      lVar5 = sljit_emit_jump();
      goto LAB_00118356;
    }
    if (iVar1 != 2) break;
    if (uVar9 != unaff_R12) {
      if (uVar9 < unaff_R12) {
        sljit_emit_op2();
      }
      else {
        sljit_emit_op2();
      }
    }
    if (2 < in_stack_00000010) {
LAB_00118609:
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_cmp_binary();
      }
      sljit_emit_op_flags_constprop_0_isra_0();
      lVar5 = sljit_emit_jump();
      goto LAB_00118356;
    }
    if (1 < piVar8[3] - 1U) {
      if (0 < in_stack_00000010) goto LAB_00118609;
      lVar5 = sljit_emit_cmp();
      goto LAB_00118356;
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    in_stack_00000010 = in_stack_00000010 + 1;
    sljit_emit_op_flags_constprop_0_isra_0();
    piVar8 = piVar8 + 3;
    unaff_R12 = uVar9;
    param_3 = iVar10;
  } while( true );
  unaff_RBX = piVar8 + 3;
  switch(uVar9) {
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
    goto code_r0x00118420;
  case 7:
  case 8:
    goto switchD_00117dcf_caseD_7;
  case 10:
    lVar5 = (ulong)(uint)piVar8[2] * 4;
    uVar7 = *(uint *)(&DAT_001360a4 + lVar5) ^ *(uint *)(&_pcre2_ucd_caseless_sets_32 + lVar5);
    if ((uVar7 - 1 & uVar7) == 0) {
      if (unaff_R12 == 0) {
        if (*unaff_R13 != 0) goto LAB_0011922f;
        unaff_R13[0x26] = 0;
      }
      else {
        sljit_emit_op2();
        if (*unaff_R13 != 0) goto LAB_0011922f;
        unaff_R13[0x26] = 0;
      }
      emit_cum_binary();
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_cmp_binary();
      }
LAB_0011922f:
      sljit_emit_op_flags_constprop_0_isra_0();
      piVar8 = (int *)(&_pcre2_ucp_typerange_32 + lVar5);
      goto LAB_001192a1;
    }
    uVar7 = *(uint *)(&DAT_001360a4 + lVar5) ^ *(uint *)(&_pcre2_ucp_typerange_32 + lVar5);
    if ((uVar7 - 1 & uVar7) != 0) {
      piVar8 = (int *)(&DAT_001360a4 + lVar5);
      if (*unaff_R13 != 0) goto LAB_00119299;
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
      goto LAB_00119299;
    }
    if (unaff_R12 == 0) {
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
LAB_001197e7:
        emit_cum_binary();
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          emit_cmp_binary();
        }
      }
    }
    else {
      sljit_emit_op2();
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        goto LAB_001197e7;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    piVar8 = (int *)(&DAT_001360ac + lVar5);
    sljit_emit_op_flags_constprop_0_isra_0();
LAB_001192a1:
    while (*piVar8 != -1) {
      piVar8 = piVar8 + 1;
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_cmp_binary();
      }
LAB_00119299:
      sljit_emit_op_flags_constprop_0_isra_0();
    }
    lVar5 = sljit_emit_jump();
    goto LAB_00118356;
  case 0xb:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
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
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    break;
  case 0xe:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    lVar5 = sljit_emit_jump();
    if (unaff_R12 != 0x2066) {
      if (unaff_R12 < 0x2067) {
        sljit_emit_op2();
      }
      else {
        sljit_emit_op2();
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
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
    lVar6 = sljit_emit_label();
    if ((lVar6 != 0) && (lVar5 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar6;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto LAB_00118d13;
  case 0xf:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    lVar5 = sljit_emit_jump();
    if (unaff_R12 != 0x2066) {
      if (unaff_R12 < 0x2067) {
        sljit_emit_op2();
      }
      else {
        sljit_emit_op2();
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
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
    lVar6 = sljit_emit_label();
    if ((lVar6 != 0) && (lVar5 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar6;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_00118d13:
    lVar5 = sljit_emit_cmp();
    goto LAB_00118356;
  case 0x10:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (unaff_R12 != 0) {
      sljit_emit_op2();
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar5 = emit_x86_instruction();
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
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
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cum_binary();
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        lVar5 = emit_x86_instruction();
        if (lVar5 != 0) {
          *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
        }
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar5 = emit_x86_instruction();
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    lVar5 = sljit_emit_cmp();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    lVar6 = sljit_emit_label();
    if ((lVar5 != 0) && (lVar6 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar6;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar5 = emit_x86_instruction();
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
      }
    }
    lVar5 = sljit_emit_jump();
    goto LAB_00118356;
  default:
    FUN_00118423();
    return;
  }
  sljit_emit_op_flags_constprop_0_isra_0();
  lVar5 = sljit_emit_jump();
  goto LAB_00118356;
switchD_00117dcf_caseD_7:
  if (unaff_R12 != 9) {
    if (unaff_R12 < 10) {
      sljit_emit_op2();
    }
    else {
      sljit_emit_op2();
    }
  }
  if (*unaff_R13 == 0) {
    unaff_R13[0x26] = 0;
    lVar5 = emit_x86_instruction();
    if (lVar5 != 0) {
      *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
    }
  }
  sljit_emit_op_flags_constprop_0_isra_0();
  if (*unaff_R13 == 0) {
    unaff_R13[0x26] = 0;
    lVar5 = emit_x86_instruction();
    if (lVar5 != 0) {
      *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
    }
  }
  sljit_emit_op_flags_constprop_0_isra_0();
  if (*unaff_R13 == 0) {
    unaff_R13[0x26] = 0;
    emit_cmp_binary();
  }
  sljit_emit_op_flags_constprop_0_isra_0();
  if (*unaff_R13 == 0) {
    unaff_R13[0x26] = 0;
    emit_test_binary();
  }
  sljit_emit_op_flags_constprop_0_isra_0();
  lVar5 = sljit_emit_jump();
LAB_00118356:
  if (lVar5 != 0) {
    if (iVar10 < 1) {
      in_stack_00000018 = unaff_retaddr;
    }
    if (*unaff_R13 == 0) {
      lVar6 = *(long *)(unaff_R13 + 0x18);
      lVar2 = *(long *)(lVar6 + 8);
      uVar9 = lVar2 + 0x10;
      if (uVar9 < 0xff1) {
        *(ulong *)(lVar6 + 8) = uVar9;
        plVar4 = (long *)(lVar6 + 0x10 + lVar2);
      }
      else {
        puVar3 = (undefined8 *)
                 (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                           (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
        if (puVar3 == (undefined8 *)0x0) {
          *unaff_R13 = 2;
          goto LAB_001183d0;
        }
        *puVar3 = *(undefined8 *)(unaff_R13 + 0x18);
        *(undefined8 **)(unaff_R13 + 0x18) = puVar3;
        plVar4 = puVar3 + 2;
        puVar3[1] = 0x10;
      }
      lVar6 = *in_stack_00000018;
      *plVar4 = lVar5;
      plVar4[1] = lVar6;
      *in_stack_00000018 = (long)plVar4;
    }
  }
LAB_001183d0:
  FUN_00118423();
  return;
}



void FUN_00118423(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  int *in_R10;
  ulong uVar9;
  ulong unaff_R12;
  int *unaff_R13;
  int iVar10;
  long in_FS_OFFSET;
  long *unaff_retaddr;
  int in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000030;
  long in_stack_00000038;
  
code_r0x00118423:
  iVar1 = *in_R10;
  if (iVar1 == 0) {
    if (in_stack_00000030 != (long *)0x0) {
      lVar5 = sljit_emit_label();
      do {
        lVar6 = *in_stack_00000030;
        if ((lVar6 != 0) && (lVar5 != 0)) {
          *(long *)(lVar6 + 0x18) = lVar5;
          *(ulong *)(lVar6 + 0x10) = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffd | 1;
        }
        in_stack_00000030 = (long *)in_stack_00000030[1];
      } while (in_stack_00000030 != (long *)0x0);
    }
    if (in_stack_00000038 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar9 = (ulong)(uint)in_R10[1];
  iVar10 = param_3 + -1;
  if (iVar1 == 1) {
    if (in_stack_00000010 < 3) {
      if (in_R10[2] - 1U < 2) goto LAB_0011966d;
      if (0 < in_stack_00000010) goto LAB_001182ff;
      lVar5 = sljit_emit_cmp();
    }
    else {
LAB_001182ff:
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_cmp_binary();
      }
      sljit_emit_op_flags_constprop_0_isra_0();
      lVar5 = sljit_emit_jump();
    }
    goto LAB_00118356;
  }
  if (iVar1 == 2) {
    if (uVar9 != unaff_R12) {
      if (uVar9 < unaff_R12) {
        sljit_emit_op2();
      }
      else {
        sljit_emit_op2();
      }
    }
    if (in_stack_00000010 < 3) {
      if (in_R10[3] - 1U < 2) {
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          emit_cmp_binary();
        }
        in_stack_00000010 = in_stack_00000010 + 1;
        sljit_emit_op_flags_constprop_0_isra_0();
        in_R10 = in_R10 + 3;
        unaff_R12 = uVar9;
        param_3 = iVar10;
        goto code_r0x00118423;
      }
      if (in_stack_00000010 < 1) {
        lVar5 = sljit_emit_cmp();
        goto LAB_00118356;
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    lVar5 = sljit_emit_jump();
    goto LAB_00118356;
  }
  switch(uVar9) {
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
    in_R10 = in_R10 + 3;
    goto code_r0x00118423;
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
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar5 = emit_x86_instruction();
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar5 = emit_x86_instruction();
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    lVar5 = sljit_emit_jump();
    goto LAB_00118356;
  case 10:
    lVar5 = (ulong)(uint)in_R10[2] * 4;
    uVar7 = *(uint *)(&DAT_001360a4 + lVar5) ^ *(uint *)(&_pcre2_ucd_caseless_sets_32 + lVar5);
    if ((uVar7 - 1 & uVar7) == 0) {
      if (unaff_R12 == 0) {
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
LAB_001191ec:
          emit_cum_binary();
          if (*unaff_R13 == 0) {
            unaff_R13[0x26] = 0;
            emit_cmp_binary();
          }
        }
      }
      else {
        sljit_emit_op2();
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          goto LAB_001191ec;
        }
      }
      sljit_emit_op_flags_constprop_0_isra_0();
      piVar8 = (int *)(&_pcre2_ucp_typerange_32 + lVar5);
    }
    else {
      uVar7 = *(uint *)(&DAT_001360a4 + lVar5) ^ *(uint *)(&_pcre2_ucp_typerange_32 + lVar5);
      if ((uVar7 - 1 & uVar7) != 0) {
        piVar8 = (int *)(&DAT_001360a4 + lVar5);
        if (*unaff_R13 != 0) goto LAB_00119299;
        unaff_R13[0x26] = 0;
        emit_cmp_binary();
        goto LAB_00119299;
      }
      if (unaff_R12 == 0) {
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
LAB_001197e7:
          emit_cum_binary();
          if (*unaff_R13 == 0) {
            unaff_R13[0x26] = 0;
            emit_cmp_binary();
          }
        }
      }
      else {
        sljit_emit_op2();
        if (*unaff_R13 == 0) {
          unaff_R13[0x26] = 0;
          goto LAB_001197e7;
        }
      }
      sljit_emit_op_flags_constprop_0_isra_0();
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_cmp_binary();
      }
      piVar8 = (int *)(&DAT_001360ac + lVar5);
      sljit_emit_op_flags_constprop_0_isra_0();
    }
    while (*piVar8 != -1) {
      piVar8 = piVar8 + 1;
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        emit_cmp_binary();
      }
LAB_00119299:
      sljit_emit_op_flags_constprop_0_isra_0();
    }
    lVar5 = sljit_emit_jump();
LAB_00118356:
    if (lVar5 != 0) {
      if (iVar10 < 1) {
        in_stack_00000018 = unaff_retaddr;
      }
      if (*unaff_R13 == 0) {
        lVar6 = *(long *)(unaff_R13 + 0x18);
        lVar2 = *(long *)(lVar6 + 8);
        uVar9 = lVar2 + 0x10;
        if (uVar9 < 0xff1) {
          *(ulong *)(lVar6 + 8) = uVar9;
          plVar4 = (long *)(lVar6 + 0x10 + lVar2);
        }
        else {
          puVar3 = (undefined8 *)
                   (*(code *)**(undefined8 **)(unaff_R13 + 0x12))
                             (0x1000,(*(undefined8 **)(unaff_R13 + 0x12))[2]);
          if (puVar3 == (undefined8 *)0x0) {
            *unaff_R13 = 2;
            goto LAB_001183d0;
          }
          *puVar3 = *(undefined8 *)(unaff_R13 + 0x18);
          *(undefined8 **)(unaff_R13 + 0x18) = puVar3;
          plVar4 = puVar3 + 2;
          puVar3[1] = 0x10;
        }
        lVar6 = *in_stack_00000018;
        *plVar4 = lVar5;
        plVar4[1] = lVar6;
        *in_stack_00000018 = (long)plVar4;
      }
    }
LAB_001183d0:
    FUN_00118423();
    return;
  case 0xb:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
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
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    break;
  case 0xe:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    lVar5 = sljit_emit_jump();
    if (unaff_R12 != 0x2066) {
      if (unaff_R12 < 0x2067) {
        sljit_emit_op2();
      }
      else {
        sljit_emit_op2();
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cmp_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
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
    lVar6 = sljit_emit_label();
    if ((lVar6 != 0) && (lVar5 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar6;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto LAB_00118d13;
  case 0xf:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    lVar5 = sljit_emit_jump();
    if (unaff_R12 != 0x2066) {
      if (unaff_R12 < 0x2067) {
        sljit_emit_op2();
      }
      else {
        sljit_emit_op2();
      }
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
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
    lVar6 = sljit_emit_label();
    if ((lVar6 != 0) && (lVar5 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar6;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_00118d13:
    lVar5 = sljit_emit_cmp();
    goto LAB_00118356;
  case 0x10:
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (unaff_R12 != 0) {
      sljit_emit_op2();
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar5 = emit_x86_instruction();
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_test_binary();
    }
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
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      emit_cum_binary();
      if (*unaff_R13 == 0) {
        unaff_R13[0x26] = 0;
        lVar5 = emit_x86_instruction();
        if (lVar5 != 0) {
          *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
        }
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar5 = emit_x86_instruction();
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    lVar5 = sljit_emit_cmp();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar6 = emit_x86_instruction();
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x38;
      }
    }
    sljit_emit_op_flags_constprop_0_isra_0();
    sljit_emit_op2();
    lVar6 = sljit_emit_label();
    if ((lVar5 != 0) && (lVar6 != 0)) {
      *(long *)(lVar5 + 0x18) = lVar6;
      *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if (*unaff_R13 == 0) {
      unaff_R13[0x26] = 0;
      lVar5 = emit_x86_instruction();
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 0x38;
      }
    }
    lVar5 = sljit_emit_jump();
    goto LAB_00118356;
  default:
    FUN_00118423();
    return;
  }
  sljit_emit_op_flags_constprop_0_isra_0();
  lVar5 = sljit_emit_jump();
  goto LAB_00118356;
LAB_0011966d:
  if (*unaff_R13 == 0) {
    unaff_R13[0x26] = 0;
    emit_cmp_binary();
  }
  in_stack_00000010 = in_stack_00000010 + 1;
  sljit_emit_op_flags_constprop_0_isra_0();
  in_R10 = in_R10 + 2;
  param_3 = iVar10;
  goto code_r0x00118423;
}



void compile_charn_matchingpath(undefined8 *param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  int *piVar12;
  int iVar13;
  long in_FS_OFFSET;
  bool bVar14;
  int local_48;
  undefined8 local_44;
  long local_30;
  
  piVar4 = (int *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  piVar12 = param_2;
  do {
    iVar13 = local_48;
    if (param_3 <= piVar12) {
LAB_0011a74c:
      if (iVar13 == 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          compile_char1_matchingpath(param_1,*param_2,param_2 + 1,param_4,1);
          return;
        }
        goto LAB_0011a7cb;
      }
      break;
    }
    if (*piVar12 == 0x1d) goto LAB_0011a5a9;
    if (*piVar12 != 0x1e) goto LAB_0011a74c;
    uVar3 = piVar12[1];
    if ((*(int *)(param_1 + 0x3c) == 0) && (*(int *)(param_1 + 0x3d) == 0)) {
      if ((uVar3 < 0x100) && (*(byte *)(param_1[0x12] + (ulong)uVar3) != uVar3)) {
LAB_0011a73c:
        iVar7 = char_get_othercase_bit_isra_0(param_1);
        if (iVar7 == 0) goto LAB_0011a74c;
      }
    }
    else {
      if (uVar3 < 0x80) {
        bVar14 = *(byte *)(param_1[0x12] + (ulong)uVar3) != uVar3;
      }
      else {
        puVar11 = &_pcre2_dummy_ucd_record_32;
        if (uVar3 < 0x110000) {
          puVar11 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uint)*(ushort *)
                                               (&_pcre2_ucd_stage1_32 + (long)((int)uVar3 >> 7) * 2)
                                        * 0x80 + (uVar3 & 0x7f)) * 2) * 0xc;
        }
        bVar14 = *(int *)(puVar11 + 4) != 0;
      }
      if (bVar14) goto LAB_0011a73c;
    }
LAB_0011a5a9:
    iVar13 = iVar13 + 4;
    piVar12 = piVar12 + 2;
    local_48 = iVar13;
  } while (iVar13 != 0x84);
  sljit_emit_op2(piVar4,0x40,2,0,2,0,0x7f,(long)iVar13);
  uVar8 = sljit_emit_cmp(piVar4,4,2,0,0xd,0);
  if (*piVar4 == 0) {
    lVar5 = *(long *)(piVar4 + 0x18);
    lVar6 = *(long *)(lVar5 + 8);
    uVar1 = lVar6 + 0x10;
    if (uVar1 < 0xff1) {
      *(ulong *)(lVar5 + 8) = uVar1;
      puVar10 = (undefined8 *)(lVar5 + 0x10 + lVar6);
    }
    else {
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)(piVar4 + 0x12))
                         (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
      if (puVar9 == (undefined8 *)0x0) {
        *piVar4 = 2;
        goto LAB_0011a672;
      }
      *puVar9 = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 **)(piVar4 + 0x18) = puVar9;
      puVar10 = puVar9 + 2;
      puVar9[1] = 0x10;
    }
    uVar2 = *param_4;
    *puVar10 = uVar8;
    puVar10[1] = uVar2;
    *param_4 = puVar10;
  }
LAB_0011a672:
  local_44 = _LC28;
  do {
    param_2 = (int *)byte_sequence_compare(param_1,*param_2 == 0x1e,param_2 + 1,&local_48,param_4);
  } while (0 < local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011a7cb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
compile_simple_assertion_matchingpath
          (undefined8 *param_1,uint param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  bool bVar15;
  char cVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  piVar3 = (int *)*param_1;
  if (0x1c < param_2) {
    if (1 < param_2 - 0xa9) {
      return param_3;
    }
    puVar5 = param_1 + 0x33;
    uVar13 = sljit_emit_jump(piVar3,0x25);
LAB_0011b3d8:
    if (*piVar3 == 0) {
      lVar9 = *(long *)(piVar3 + 0x18);
      lVar11 = *(long *)(lVar9 + 8);
      uVar18 = lVar11 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar9 + 8) = uVar18;
        puVar6 = (undefined8 *)(lVar9 + 0x10 + lVar11);
      }
      else {
        puVar14 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar3 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar14 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011b43d;
        }
        *puVar14 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar14;
        puVar6 = puVar14 + 2;
        puVar14[1] = 0x10;
      }
      uVar17 = *puVar5;
      *puVar6 = uVar13;
      puVar6[1] = uVar17;
      *puVar5 = puVar6;
    }
LAB_0011b43d:
    bVar15 = param_2 == 4 || param_2 == 0xa9;
    if (*(int *)((long)param_1 + 0x1e4) != 0) {
      uVar17 = 0x7f;
      uVar13 = 4;
      cVar16 = (-(param_2 != 4 && param_2 != 0xa9) & 8U) + 1;
      goto LAB_0011b0c5;
    }
LAB_0011a90e:
    uVar13 = sljit_emit_jump(piVar3,bVar15);
    if (*piVar3 != 0) {
      return param_3;
    }
    goto LAB_0011a922;
  }
  switch(param_2) {
  case 1:
    uVar13 = 0x10;
    break;
  case 2:
    uVar13 = 8;
    break;
  default:
    goto switchD_0011a817_caseD_3;
  case 4:
  case 5:
    puVar5 = param_1 + 0x32;
    uVar13 = sljit_emit_jump(piVar3,0x25);
    goto LAB_0011b3d8;
  case 0x17:
    lVar9 = sljit_emit_cmp(piVar3,3,2,0,0xd,0);
    if (*(int *)((long)param_1 + 0xc4) == 0) {
      if (*(int *)(param_1 + 0x1a) < 0x100) {
        sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,4);
        sljit_emit_op1(piVar3,0x25,1,0,0x82,0);
        uVar13 = sljit_emit_cmp(piVar3,1,4,0,0xd,0);
        if (*piVar3 == 0) {
          lVar11 = *(long *)(piVar3 + 0x18);
          lVar12 = *(long *)(lVar11 + 8);
          uVar18 = lVar12 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar11 + 8) = uVar18;
            puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar12);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011b561;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar5 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar11 = *param_4;
          *puVar5 = uVar13;
          puVar5[1] = lVar11;
          *param_4 = (long)puVar5;
        }
LAB_0011b561:
        uVar18 = (ulong)*(int *)(param_1 + 0x1a);
        uVar13 = 1;
      }
      else {
        sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,8);
        sljit_emit_op1(piVar3,0x25,1,0,0x82,0);
        if (*(int *)(param_1 + 0x14) == 1) {
          uVar13 = sljit_emit_cmp(piVar3,1,4,0,0xd,0);
          if (*piVar3 == 0) {
            lVar11 = *(long *)(piVar3 + 0x18);
            lVar12 = *(long *)(lVar11 + 8);
            uVar18 = lVar12 + 0x10;
            if (uVar18 < 0xff1) {
              *(ulong *)(lVar11 + 8) = uVar18;
              puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar12);
            }
            else {
              puVar6 = (undefined8 *)
                       (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                 (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar6 == (undefined8 *)0x0) {
                *piVar3 = 2;
                goto LAB_0011bc35;
              }
              *puVar6 = *(undefined8 *)(piVar3 + 0x18);
              *(undefined8 **)(piVar3 + 0x18) = puVar6;
              puVar5 = puVar6 + 2;
              puVar6[1] = 0x10;
            }
            lVar11 = *param_4;
            *puVar5 = uVar13;
            puVar5[1] = lVar11;
            *param_4 = (long)puVar5;
          }
        }
        else {
          lVar11 = sljit_emit_cmp(piVar3,0,4,0,0xd,0);
          if (*piVar3 == 0) {
            piVar3[0x26] = 0;
            puVar10 = (undefined1 *)emit_x86_instruction(piVar3,1,4,0,0xd,0);
            if (puVar10 != (undefined1 *)0x0) {
              *puVar10 = 0x3b;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar3,0x20,4,2);
          if (*piVar3 == 0) {
            uVar2 = *(uint *)(param_1 + 0x1a);
            piVar3[0x26] = 0;
            emit_cmp_binary(piVar3,1,0,0x7f,uVar2 >> 8 & 0xff);
          }
          sljit_emit_op_flags_constprop_0_isra_0(piVar3,0x246,4,1);
          uVar13 = sljit_emit_jump(piVar3,1);
          if (*piVar3 == 0) {
            lVar12 = *(long *)(piVar3 + 0x18);
            lVar7 = *(long *)(lVar12 + 8);
            uVar18 = lVar7 + 0x10;
            if (uVar18 < 0xff1) {
              *(ulong *)(lVar12 + 8) = uVar18;
              puVar5 = (undefined8 *)(lVar12 + 0x10 + lVar7);
            }
            else {
              puVar6 = (undefined8 *)
                       (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                 (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar6 == (undefined8 *)0x0) {
                *piVar3 = 2;
                goto LAB_0011bb8a;
              }
              *puVar6 = *(undefined8 *)(piVar3 + 0x18);
              *(undefined8 **)(piVar3 + 0x18) = puVar6;
              puVar5 = puVar6 + 2;
              puVar6[1] = 0x10;
            }
            lVar12 = *param_4;
            *puVar5 = uVar13;
            puVar5[1] = lVar12;
            *param_4 = (long)puVar5;
          }
LAB_0011bb8a:
          check_partial(param_1,1);
          uVar13 = sljit_emit_jump(piVar3,0x24);
          if (*piVar3 == 0) {
            lVar12 = *(long *)(piVar3 + 0x18);
            lVar7 = *(long *)(lVar12 + 8);
            uVar18 = lVar7 + 0x10;
            if (uVar18 < 0xff1) {
              *(ulong *)(lVar12 + 8) = uVar18;
              puVar5 = (undefined8 *)(lVar12 + 0x10 + lVar7);
            }
            else {
              puVar6 = (undefined8 *)
                       (*(code *)**(undefined8 **)(piVar3 + 0x12))
                                 (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
              if (puVar6 == (undefined8 *)0x0) {
                *piVar3 = 2;
                goto LAB_0011bc0f;
              }
              *puVar6 = *(undefined8 *)(piVar3 + 0x18);
              *(undefined8 **)(piVar3 + 0x18) = puVar6;
              puVar5 = puVar6 + 2;
              puVar6[1] = 0x10;
            }
            lVar12 = *param_4;
            *puVar5 = uVar13;
            puVar5[1] = lVar12;
            *param_4 = (long)puVar5;
          }
LAB_0011bc0f:
          lVar12 = sljit_emit_label(piVar3);
          if ((lVar12 != 0) && (lVar11 != 0)) {
            *(long *)(lVar11 + 0x18) = lVar12;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
LAB_0011bc35:
        sljit_emit_op1(piVar3,0x25,4,0,0x82,4);
        uVar13 = sljit_emit_cmp(piVar3,1,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
        if (*piVar3 == 0) {
          lVar11 = *(long *)(piVar3 + 0x18);
          lVar12 = *(long *)(lVar11 + 8);
          uVar18 = lVar12 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar11 + 8) = uVar18;
            puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar12);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011bce2;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar5 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar11 = *param_4;
          *puVar5 = uVar13;
          puVar5[1] = lVar11;
          *param_4 = (long)puVar5;
        }
LAB_0011bce2:
        uVar18 = (ulong)*(byte *)(param_1 + 0x1a);
        uVar13 = 4;
      }
      uVar13 = sljit_emit_cmp(piVar3,1,uVar13,0,0x7f,uVar18);
      if (*piVar3 == 0) {
        lVar11 = *(long *)(piVar3 + 0x18);
        lVar12 = *(long *)(lVar11 + 8);
        uVar18 = lVar12 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar11 + 8) = uVar18;
          puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar12);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011ae02;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar5 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar11 = *param_4;
        *puVar5 = uVar13;
        puVar5[1] = lVar11;
        *param_4 = (long)puVar5;
      }
    }
    else {
      sljit_emit_op1(piVar3,0x25,1,0,0x82,0);
      lVar11 = sljit_emit_cmp(piVar3,1,1,0,0x7f,0xd);
      sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,8);
      if (*piVar3 == 0) {
        piVar3[0x26] = 0;
        puVar10 = (undefined1 *)emit_x86_instruction(piVar3,1,4,0,0xd,0);
        if (puVar10 != (undefined1 *)0x0) {
          *puVar10 = 0x3b;
        }
      }
      lVar12 = sljit_emit_jump(piVar3,4);
      uVar13 = sljit_emit_jump(piVar3,1);
      if (*piVar3 == 0) {
        lVar7 = *(long *)(piVar3 + 0x18);
        lVar8 = *(long *)(lVar7 + 8);
        uVar18 = lVar8 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar7 + 8) = uVar18;
          puVar5 = (undefined8 *)(lVar7 + 0x10 + lVar8);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011aaef;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar5 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar7 = *param_4;
        *puVar5 = uVar13;
        puVar5[1] = lVar7;
        *param_4 = (long)puVar5;
      }
LAB_0011aaef:
      sljit_emit_op1(piVar3,0x25,1,0,0x82,4);
      lVar7 = sljit_emit_cmp(piVar3,0,1,0,0x7f,10);
      uVar13 = sljit_emit_jump(piVar3,0x24);
      if (*piVar3 == 0) {
        lVar8 = *(long *)(piVar3 + 0x18);
        lVar4 = *(long *)(lVar8 + 8);
        uVar18 = lVar4 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar8 + 8) = uVar18;
          puVar5 = (undefined8 *)(lVar8 + 0x10 + lVar4);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011aba9;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar5 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar8 = *param_4;
        *puVar5 = uVar13;
        puVar5[1] = lVar8;
        *param_4 = (long)puVar5;
      }
LAB_0011aba9:
      lVar8 = sljit_emit_label(piVar3);
      if ((lVar8 != 0) && (lVar11 != 0)) {
        *(long *)(lVar11 + 0x18) = lVar8;
        *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (*(int *)((long)param_1 + 0xc4) == 2) {
        sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,4);
        uVar13 = sljit_emit_cmp(piVar3,2,4,0,0xd,0);
        if (*piVar3 == 0) {
          lVar11 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar11 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar11 + 8) = uVar18;
            puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011bf2b;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar5 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar11 = *param_4;
          *puVar5 = uVar13;
          puVar5[1] = lVar11;
          *param_4 = (long)puVar5;
        }
LAB_0011bf2b:
        uVar13 = sljit_emit_cmp(piVar3,1,1,0,0x7f,10);
        if (*piVar3 == 0) {
          lVar11 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar11 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar11 + 8) = uVar18;
            puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011ad9c;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar5 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar11 = *param_4;
          *puVar5 = uVar13;
          puVar5[1] = lVar11;
          *param_4 = (long)puVar5;
        }
      }
      else {
        sljit_emit_op1(piVar3,0x20,3,0,2,0);
        read_char_isra_0(param_1,param_4);
        uVar13 = sljit_emit_cmp(piVar3,1,2,0,0xd,0);
        if (*piVar3 == 0) {
          lVar11 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar11 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar11 + 8) = uVar18;
            puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011ac8c;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar5 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar11 = *param_4;
          *puVar5 = uVar13;
          puVar5[1] = lVar11;
          *param_4 = (long)puVar5;
        }
LAB_0011ac8c:
        uVar13 = sljit_emit_jump(piVar3,0x25);
        if (*piVar3 == 0) {
          lVar11 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar11 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar11 + 8) = uVar18;
            puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011ad0a;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar5 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          uVar17 = param_1[0x34];
          *puVar5 = uVar13;
          puVar5[1] = uVar17;
          param_1[0x34] = puVar5;
        }
LAB_0011ad0a:
        uVar13 = sljit_emit_jump(piVar3,0);
        if (*piVar3 == 0) {
          lVar11 = *(long *)(piVar3 + 0x18);
          lVar8 = *(long *)(lVar11 + 8);
          uVar18 = lVar8 + 0x10;
          if (uVar18 < 0xff1) {
            *(ulong *)(lVar11 + 8) = uVar18;
            puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar8);
          }
          else {
            puVar6 = (undefined8 *)
                     (*(code *)**(undefined8 **)(piVar3 + 0x12))
                               (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
            if (puVar6 == (undefined8 *)0x0) {
              *piVar3 = 2;
              goto LAB_0011ad7f;
            }
            *puVar6 = *(undefined8 *)(piVar3 + 0x18);
            *(undefined8 **)(piVar3 + 0x18) = puVar6;
            puVar5 = puVar6 + 2;
            puVar6[1] = 0x10;
          }
          lVar11 = *param_4;
          *puVar5 = uVar13;
          puVar5[1] = lVar11;
          *param_4 = (long)puVar5;
        }
LAB_0011ad7f:
        sljit_emit_op1(piVar3,0x20,2,0,3,0);
      }
LAB_0011ad9c:
      lVar11 = sljit_emit_label(piVar3);
      if ((lVar11 != 0) && (lVar12 != 0)) {
        *(long *)(lVar12 + 0x18) = lVar11;
        *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar11 = sljit_emit_label(piVar3);
      if ((lVar11 != 0) && (lVar7 != 0)) {
        *(long *)(lVar7 + 0x18) = lVar11;
        *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
LAB_0011ae02:
    lVar11 = sljit_emit_label(piVar3);
    if ((lVar11 != 0) && (lVar9 != 0)) {
      *(long *)(lVar9 + 0x18) = lVar11;
      *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_0011aec1:
    if (*(int *)(param_1 + 0x14) == 1) {
      return param_3;
    }
    check_partial(param_1,1);
    return param_3;
  case 0x18:
    uVar13 = sljit_emit_cmp(piVar3,2,2,0,0xd,0);
    if (*piVar3 == 0) {
      lVar9 = *(long *)(piVar3 + 0x18);
      lVar11 = *(long *)(lVar9 + 8);
      uVar18 = lVar11 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar9 + 8) = uVar18;
        puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar11);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011aec1;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar5 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar9 = *param_4;
      *puVar5 = uVar13;
      puVar5[1] = lVar9;
      *param_4 = (long)puVar5;
    }
    goto LAB_0011aec1;
  case 0x19:
    if (*piVar3 == 0) {
      piVar3[0x26] = 0x100;
      puVar10 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,2,0x89,0x58);
      if (puVar10 != (undefined1 *)0x0) {
        *puVar10 = 0xf7;
      }
    }
    uVar13 = sljit_emit_jump(piVar3,1);
    if (*piVar3 == 0) {
      lVar9 = *(long *)(piVar3 + 0x18);
      lVar11 = *(long *)(lVar9 + 8);
      uVar18 = lVar11 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar9 + 8) = uVar18;
        puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar11);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011b1a7;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar5 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar9 = *param_4;
      *puVar5 = uVar13;
      puVar5[1] = lVar9;
      *param_4 = (long)puVar5;
    }
LAB_0011b1a7:
    if (*(int *)(param_1 + 0x1c) == 0) {
      compile_simple_assertion_matchingpath(param_1,0x17,param_3,param_4);
      return param_3;
    }
    uVar13 = sljit_emit_cmp(piVar3,2,2,0,0xd,0);
    if (*piVar3 == 0) {
      lVar9 = *(long *)(piVar3 + 0x18);
      lVar11 = *(long *)(lVar9 + 8);
      uVar18 = lVar11 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar9 + 8) = uVar18;
        puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar11);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011b240;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar5 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar9 = *param_4;
      *puVar5 = uVar13;
      puVar5[1] = lVar9;
      *param_4 = (long)puVar5;
    }
LAB_0011b240:
    check_partial(param_1,0);
    return param_3;
  case 0x1a:
    lVar9 = sljit_emit_cmp(piVar3,2,2,0,0xd,0);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0x100;
      puVar10 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,2,0x89,0x58);
      if (puVar10 != (undefined1 *)0x0) {
        *puVar10 = 0xf7;
      }
    }
    uVar13 = sljit_emit_jump(piVar3,1);
    if (*piVar3 == 0) {
      lVar11 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar11 + 8);
      uVar18 = lVar12 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar11 + 8) = uVar18;
        puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar12);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011b326;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar5 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar11 = *param_4;
      *puVar5 = uVar13;
      puVar5[1] = lVar11;
      *param_4 = (long)puVar5;
    }
LAB_0011b326:
    check_partial(param_1,0);
    lVar11 = sljit_emit_jump(piVar3,0x24);
    lVar12 = sljit_emit_label(piVar3);
    if ((lVar9 != 0) && (lVar12 != 0)) {
      *(long *)(lVar9 + 0x18) = lVar12;
      *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if ((*(int *)((long)param_1 + 0xc4) != 0) || (*(int *)(param_1 + 0x1a) < 0x100)) {
      peek_char_isra_0(param_1,*(undefined4 *)(param_1 + 0x19),0);
      goto LAB_0011b044;
    }
    sljit_emit_op2(piVar3,0x40,4,0,2,0,0x7f,8);
    sljit_emit_op1(piVar3,0x25,1,0,0x82,0);
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar13 = sljit_emit_cmp(piVar3,4,4,0,0xd,0);
      if (*piVar3 == 0) {
        lVar9 = *(long *)(piVar3 + 0x18);
        lVar12 = *(long *)(lVar9 + 8);
        uVar18 = lVar12 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar9 + 8) = uVar18;
          puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar12);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011b7e5;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar5 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar9 = *param_4;
        *puVar5 = uVar13;
        puVar5[1] = lVar9;
        *param_4 = (long)puVar5;
      }
    }
    else {
      lVar9 = sljit_emit_cmp(piVar3,5,4,0,0xd,0);
      uVar13 = sljit_emit_cmp(piVar3,1,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
      if (*piVar3 == 0) {
        lVar12 = *(long *)(piVar3 + 0x18);
        lVar7 = *(long *)(lVar12 + 8);
        uVar18 = lVar7 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar12 + 8) = uVar18;
          puVar5 = (undefined8 *)(lVar12 + 0x10 + lVar7);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011b73a;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar5 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar12 = *param_4;
        *puVar5 = uVar13;
        puVar5[1] = lVar12;
        *param_4 = (long)puVar5;
      }
LAB_0011b73a:
      check_partial(param_1,1);
      uVar13 = sljit_emit_jump(piVar3,0x24);
      if (*piVar3 == 0) {
        lVar12 = *(long *)(piVar3 + 0x18);
        lVar7 = *(long *)(lVar12 + 8);
        uVar18 = lVar7 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar12 + 8) = uVar18;
          puVar5 = (undefined8 *)(lVar12 + 0x10 + lVar7);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011b7bf;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar5 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar12 = *param_4;
        *puVar5 = uVar13;
        puVar5[1] = lVar12;
        *param_4 = (long)puVar5;
      }
LAB_0011b7bf:
      lVar12 = sljit_emit_label(piVar3);
      if ((lVar12 != 0) && (lVar9 != 0)) {
        *(long *)(lVar9 + 0x18) = lVar12;
        *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
LAB_0011b7e5:
    uVar13 = 4;
LAB_0011b7eb:
    sljit_emit_op1(piVar3,0x25,4,0,0x82,uVar13);
    uVar13 = sljit_emit_cmp(piVar3,1,1,0,0x7f,*(undefined1 *)((long)param_1 + 0xd1));
    if (*piVar3 == 0) {
      lVar9 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar9 + 8);
      uVar18 = lVar12 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar9 + 8) = uVar18;
        puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar12);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011b892;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar5 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar9 = *param_4;
      *puVar5 = uVar13;
      puVar5[1] = lVar9;
      *param_4 = (long)puVar5;
    }
LAB_0011b892:
    uVar13 = sljit_emit_cmp(piVar3,1,4,0,0x7f,*(undefined1 *)(param_1 + 0x1a));
    if (*piVar3 == 0) {
      lVar9 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar9 + 8);
      uVar18 = lVar12 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar9 + 8) = uVar18;
        puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar12);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011b057;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar5 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar9 = *param_4;
      *puVar5 = uVar13;
      puVar5[1] = lVar9;
      *param_4 = (long)puVar5;
    }
    goto LAB_0011b057;
  case 0x1b:
    sljit_emit_op1(piVar3,0x20,1,0,0x89,0x10);
    uVar13 = sljit_emit_cmp(piVar3,4,2,0,1,0);
    if (*piVar3 == 0) {
      lVar9 = *(long *)(piVar3 + 0x18);
      uVar18 = *(long *)(lVar9 + 8) + 0x10;
      if (uVar18 < 0xff1) {
        puVar5 = (undefined8 *)(lVar9 + 0x10 + *(long *)(lVar9 + 8));
        lVar11 = *param_4;
        *(ulong *)(lVar9 + 8) = uVar18;
        *puVar5 = uVar13;
        puVar5[1] = lVar11;
        *param_4 = (long)puVar5;
LAB_0011a8d3:
        piVar3[0x26] = 0x100;
        puVar10 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,1,0x89,0x58);
        if (puVar10 != (undefined1 *)0x0) {
          *puVar10 = 0xf7;
        }
      }
      else {
        puVar5 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar5 == (undefined8 *)0x0) {
          *piVar3 = 2;
        }
        else {
          lVar9 = *param_4;
          *puVar5 = *(undefined8 *)(piVar3 + 0x18);
          iVar1 = *piVar3;
          *(undefined8 **)(piVar3 + 0x18) = puVar5;
          puVar5[1] = 0x10;
          puVar5[2] = uVar13;
          puVar5[3] = lVar9;
          *param_4 = (long)(puVar5 + 2);
          if (iVar1 == 0) goto LAB_0011a8d3;
        }
      }
    }
    bVar15 = true;
    goto LAB_0011a90e;
  case 0x1c:
    sljit_emit_op1(piVar3,0x20,4,0,0x89,0x10);
    lVar9 = sljit_emit_cmp(piVar3,4,2,0,4,0);
    if (*piVar3 == 0) {
      piVar3[0x26] = 0x100;
      puVar10 = (undefined1 *)emit_x86_instruction(piVar3,1,0x7f,1,0x89,0x58);
      if (puVar10 != (undefined1 *)0x0) {
        *puVar10 = 0xf7;
      }
    }
    uVar13 = sljit_emit_jump(piVar3,1);
    if (*piVar3 == 0) {
      lVar11 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar11 + 8);
      uVar18 = lVar12 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar11 + 8) = uVar18;
        puVar5 = (undefined8 *)(lVar11 + 0x10 + lVar12);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011afd7;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar5 = puVar6 + 2;
        puVar6[1] = 0x10;
      }
      lVar11 = *param_4;
      *puVar5 = uVar13;
      puVar5[1] = lVar11;
      *param_4 = (long)puVar5;
    }
LAB_0011afd7:
    lVar11 = sljit_emit_jump(piVar3,0x24);
    lVar12 = sljit_emit_label(piVar3);
    if ((lVar12 != 0) && (lVar9 != 0)) {
      *(long *)(lVar9 + 0x18) = lVar12;
      *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if ((*(int *)((long)param_1 + 0x1dc) == 0) &&
       (uVar13 = sljit_emit_cmp(piVar3,3,2,0,0xd,0), *piVar3 == 0)) {
      lVar9 = *(long *)(piVar3 + 0x18);
      lVar12 = *(long *)(lVar9 + 8);
      uVar18 = lVar12 + 0x10;
      if (uVar18 < 0xff1) {
        *(ulong *)(lVar9 + 8) = uVar18;
        puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar12);
      }
      else {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(piVar3 + 0x12))
                           (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
        if (puVar6 == (undefined8 *)0x0) {
          *piVar3 = 2;
          goto LAB_0011b01d;
        }
        *puVar6 = *(undefined8 *)(piVar3 + 0x18);
        puVar5 = puVar6 + 2;
        *(undefined8 **)(piVar3 + 0x18) = puVar6;
        puVar6[1] = 0x10;
      }
      lVar9 = *param_4;
      *puVar5 = uVar13;
      puVar5[1] = lVar9;
      *param_4 = (long)puVar5;
    }
LAB_0011b01d:
    if ((*(int *)((long)param_1 + 0xc4) == 0) && (0xff < *(int *)(param_1 + 0x1a))) {
      sljit_emit_op2(piVar3,0x42,1,0,2,0,0x7f,8);
      uVar13 = sljit_emit_cmp(piVar3,2,1,0,4,0);
      if (*piVar3 == 0) {
        lVar9 = *(long *)(piVar3 + 0x18);
        lVar12 = *(long *)(lVar9 + 8);
        uVar18 = lVar12 + 0x10;
        if (uVar18 < 0xff1) {
          *(ulong *)(lVar9 + 8) = uVar18;
          puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar12);
        }
        else {
          puVar6 = (undefined8 *)
                   (*(code *)**(undefined8 **)(piVar3 + 0x12))
                             (0x1000,(*(undefined8 **)(piVar3 + 0x12))[2]);
          if (puVar6 == (undefined8 *)0x0) {
            *piVar3 = 2;
            goto LAB_0011b9db;
          }
          *puVar6 = *(undefined8 *)(piVar3 + 0x18);
          *(undefined8 **)(piVar3 + 0x18) = puVar6;
          puVar5 = puVar6 + 2;
          puVar6[1] = 0x10;
        }
        lVar9 = *param_4;
        *puVar5 = uVar13;
        puVar5[1] = lVar9;
        *param_4 = (long)puVar5;
      }
LAB_0011b9db:
      sljit_emit_op1(piVar3,0x25,1,0,0x82,0xfffffffffffffff8);
      uVar13 = 0xfffffffffffffffc;
      goto LAB_0011b7eb;
    }
    peek_char_back_isra_0(param_1,param_4);
LAB_0011b044:
    check_newlinechar(param_1,*(undefined4 *)((long)param_1 + 0xc4),param_4,0);
LAB_0011b057:
    lVar9 = sljit_emit_label(piVar3);
    if ((lVar9 != 0) && (lVar11 != 0)) {
      *(long *)(lVar11 + 0x18) = lVar9;
      *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
    }
    goto switchD_0011a817_caseD_3;
  }
  sljit_emit_op1(piVar3,0x20,1,0,0x89,uVar13);
  uVar17 = 1;
  uVar13 = 2;
  cVar16 = '\x01';
LAB_0011b0c5:
  uVar13 = sljit_emit_cmp(piVar3,cVar16,uVar13,0,uVar17,0);
  if (*piVar3 == 0) {
LAB_0011a922:
    lVar9 = *(long *)(piVar3 + 0x18);
    lVar11 = *(long *)(lVar9 + 8);
    uVar18 = lVar11 + 0x10;
    if (uVar18 < 0xff1) {
      *(ulong *)(lVar9 + 8) = uVar18;
      puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar11);
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
      puVar5 = puVar6 + 2;
      puVar6[1] = 0x10;
    }
    lVar9 = *param_4;
    *puVar5 = uVar13;
    puVar5[1] = lVar9;
    *param_4 = (long)puVar5;
  }
switchD_0011a817_caseD_3:
  return param_3;
}



int * compile_iterator_matchingpath(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined *puVar18;
  uint *puVar19;
  uint *extraout_RDX;
  uint *extraout_RDX_00;
  uint *extraout_RDX_01;
  uint *extraout_RDX_02;
  uint *extraout_RDX_03;
  int iVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  long in_FS_OFFSET;
  undefined1 auVar25 [16];
  undefined8 uVar26;
  int local_a8;
  undefined4 local_a4;
  int *local_a0;
  ulong local_88;
  long local_78;
  long local_70;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int *local_58;
  long *local_50;
  long *local_48;
  long local_40;
  
  piVar2 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  uVar24 = *(uint *)((param_1[3] - param_1[2]) + 4 + param_2);
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  iVar20 = *(int *)(param_1[3] + (param_2 - param_1[2]));
  if (iVar20 == 0) {
    local_a4 = 0x8c;
    iVar5 = 8;
    if (*piVar2 == 0) goto LAB_0011c37a;
LAB_0011c56a:
    local_a0 = (int *)0x0;
    goto LAB_0011c573;
  }
  iVar5 = iVar20 + 8;
  local_a4 = 0x8e;
  if (*piVar2 != 0) goto LAB_0011c56a;
LAB_0011c37a:
  pauVar8 = (undefined1 (*) [16])ensure_abuf(piVar2,0x40);
  lVar23 = (long)*piVar2;
  if (*piVar2 != 0) goto LAB_0011c56a;
  *pauVar8 = (undefined1  [16])0x0;
  pauVar8[1] = (undefined1  [16])0x0;
  pauVar8[2] = (undefined1  [16])0x0;
  pauVar8[3] = (undefined1  [16])0x0;
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  iVar22 = *(int *)(param_1 + 0xf);
  *(long *)pauVar8[2] = param_2;
  *(undefined8 *)*pauVar8 = uVar9;
  *(undefined1 (**) [16])(param_3 + 0x10) = pauVar8;
  local_a8 = (int)uVar24 >> 3;
  uVar24 = uVar24 & 7;
  if ((iVar22 == 0) && (param_1[0xe] == 0)) {
    local_a8 = 0;
    uVar24 = 0;
  }
  else if ((uVar24 == 1) && (uVar9 = sljit_emit_cmp(piVar2,5,2,0,0x8e,(long)local_a8), *piVar2 == 0)
          ) {
    lVar10 = *(long *)(piVar2 + 0x18);
    lVar21 = *(long *)(lVar10 + 8);
    uVar14 = lVar21 + 0x10;
    if (uVar14 < 0xff1) {
      *(ulong *)(lVar10 + 8) = uVar14;
      puVar12 = (undefined8 *)(lVar10 + 0x10 + lVar21);
    }
    else {
      puVar11 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar2 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar11 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0011c3e5;
      }
      *puVar11 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar11;
      puVar12 = puVar11 + 2;
      puVar11[1] = 0x10;
    }
    uVar13 = *(undefined8 *)(pauVar8[1] + 8);
    *puVar12 = uVar9;
    puVar12[1] = uVar13;
    *(undefined8 **)(pauVar8[1] + 8) = puVar12;
  }
LAB_0011c3e5:
  uVar9 = get_iterator_parameters_constprop_0
                    (param_1,param_2,&local_68,&local_64,&local_60,&local_5c,&local_58);
  uVar6 = 3;
  if (local_64 == 0x16) {
    uVar6 = 0x8e;
    lVar23 = 0x10;
  }
  iVar22 = (int)lVar23;
  if (local_5c < 2) {
    if (local_5c == 1) {
      compile_char1_matchingpath(param_1,local_64,uVar9,pauVar8[1] + 8,1);
    }
  }
  else if (((*(int *)(param_1 + 0x14) == 1) && (local_64 != 0x11 && local_64 != 0x16)) &&
          (*(int *)(param_1 + 0x3c) == 0)) {
    uVar14 = (ulong)(local_5c * 4);
    uVar26 = 0x7f;
    sljit_emit_op2(piVar2,0x40,1,0,2,0);
    uVar13 = sljit_emit_cmp(piVar2,4,1,0,0xd,0);
    if (*piVar2 == 0) {
      lVar10 = *(long *)(piVar2 + 0x18);
      lVar21 = *(long *)(lVar10 + 8);
      uVar1 = lVar21 + 0x10;
      if (uVar1 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar1;
        puVar12 = (undefined8 *)(lVar10 + 0x10 + lVar21);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar2 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2],lVar10,uVar1,uVar26,uVar14)
        ;
        if (puVar11 == (undefined8 *)0x0) {
          *piVar2 = 2;
          goto LAB_0011d076;
        }
        *puVar11 = *(undefined8 *)(piVar2 + 0x18);
        *(undefined8 **)(piVar2 + 0x18) = puVar11;
        puVar12 = puVar11 + 2;
        puVar11[1] = 0x10;
      }
      uVar26 = *(undefined8 *)(pauVar8[1] + 8);
      *puVar12 = uVar13;
      puVar12[1] = uVar26;
      *(undefined8 **)(pauVar8[1] + 8) = puVar12;
    }
LAB_0011d076:
    lVar10 = (long)iVar22;
    sljit_emit_op1(piVar2,0x20,uVar6,lVar10,0x7f,local_5c);
    lVar21 = sljit_emit_label(piVar2);
    compile_char1_matchingpath(param_1,local_64,uVar9,pauVar8[1] + 8,0);
    sljit_emit_op2(piVar2,0x242,uVar6,lVar10,uVar6,lVar10,0x7f,1);
    auVar25 = sljit_emit_jump(piVar2,1);
    lVar10 = auVar25._0_8_;
    if ((lVar10 != 0) && (lVar21 != 0)) {
      *(long *)(lVar10 + 0x18) = lVar21;
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  else {
    lVar21 = (long)iVar22;
    sljit_emit_op1(piVar2,0x20,uVar6,lVar21,0x7f,local_5c);
    lVar10 = sljit_emit_label(piVar2);
    compile_char1_matchingpath(param_1,local_64,uVar9,pauVar8[1] + 8,1);
    sljit_emit_op2(piVar2,0x242,uVar6,lVar21,uVar6,lVar21,0x7f,1);
    lVar21 = sljit_emit_jump(piVar2,1);
    if ((lVar21 != 0) && (lVar10 != 0)) {
      *(long *)(lVar21 + 0x18) = lVar10;
      *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  if (uVar24 == 2) {
    sljit_emit_op1(piVar2,0x20,1,0,0x8e,(long)local_a8);
    sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)(local_a8 + 8));
    sljit_emit_op2(piVar2,0x42,1,0,1,0,4,0);
    sljit_emit_op2(piVar2,0x42,4,0,2,0,4,0);
    uVar13 = sljit_emit_cmp(piVar2,5,4,0,1,0);
    if (*piVar2 == 0) {
      lVar10 = *(long *)(piVar2 + 0x18);
      lVar21 = *(long *)(lVar10 + 8);
      uVar14 = lVar21 + 0x10;
      if (uVar14 < 0xff1) {
        *(ulong *)(lVar10 + 8) = uVar14;
        puVar12 = (undefined8 *)(lVar10 + 0x10 + lVar21);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar2 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
        if (puVar11 == (undefined8 *)0x0) {
          *piVar2 = 2;
          goto LAB_0011ce9e;
        }
        *puVar11 = *(undefined8 *)(piVar2 + 0x18);
        *(undefined8 **)(piVar2 + 0x18) = puVar11;
        puVar12 = puVar11 + 2;
        puVar11[1] = 0x10;
      }
      uVar26 = *(undefined8 *)(pauVar8[1] + 8);
      *puVar12 = uVar13;
      puVar12[1] = uVar26;
      *(undefined8 **)(pauVar8[1] + 8) = puVar12;
    }
LAB_0011ce9e:
    sljit_emit_op1(piVar2,0x20,0x8e,(long)local_a8,2,0);
    sljit_emit_op1(piVar2,0x20,0x8e,(long)(local_a8 + 8),2,0);
  }
  local_a0 = local_58;
  puVar19 = &switchD_0011c546::switchdataD_00130f64;
  switch(local_68) {
  case 0x21:
  case 0x27:
    if ((local_64 == 0x11) || (local_64 == 0x16)) {
      uVar13 = *param_1;
      sljit_emit_op2(uVar13,0x42,0xc,0,0xc,0,0x7f,0x10);
      uVar13 = sljit_emit_cmp(uVar13,2,0xc,0,0xb,0);
      piVar3 = (int *)*param_1;
      if ((*piVar3 == 0) &&
         (puVar12 = (undefined8 *)ensure_abuf(piVar3,0x18), puVar12 != (undefined8 *)0x0)) {
        *puVar12 = uVar13;
        uVar26 = sljit_emit_label(piVar3);
        uVar13 = param_1[0x26];
        puVar12[1] = uVar26;
        puVar12[2] = uVar13;
        param_1[0x26] = puVar12;
      }
      sljit_emit_op1(piVar2,0x20,0x8c,0,2,0);
      sljit_emit_op1(piVar2,0x20,0x8c,8,0x7f,0);
      if (local_68 == 0x27) {
        sljit_emit_op1(piVar2,0x20,0x8e,0x10,0x7f,local_60);
        lVar23 = sljit_emit_label(piVar2);
        compile_char1_matchingpath(param_1,local_64,uVar9,pauVar8 + 3,1);
        sljit_emit_op1(piVar2,0x20,1,0,0x8e,0x10);
        if (*piVar2 == 0) {
          piVar2[0x26] = 0;
          emit_non_cum_binary(piVar2,0x2d2b2928,1,0,1,0,0x7f,1);
        }
        lVar10 = sljit_emit_jump(piVar2,0);
        sljit_emit_op1(piVar2,0x20,0x8e,0x10,1,0);
      }
      else {
        lVar10 = 0;
        lVar23 = sljit_emit_label(piVar2);
        compile_char1_matchingpath(param_1,local_64,uVar9,pauVar8 + 3,1);
      }
      uVar9 = *param_1;
      uVar13 = 8;
      sljit_emit_op2(uVar9,0x42,0xc,0,0xc,0,0x7f);
      uVar9 = sljit_emit_cmp(uVar9,2,0xc,0,0xb,0);
      piVar3 = (int *)*param_1;
      if ((*piVar3 == 0) &&
         (puVar12 = (undefined8 *)ensure_abuf(piVar3,0x18,uVar13), puVar12 != (undefined8 *)0x0)) {
        *puVar12 = uVar9;
        uVar13 = sljit_emit_label(piVar3);
        uVar9 = param_1[0x26];
        puVar12[1] = uVar13;
        puVar12[2] = uVar9;
        param_1[0x26] = puVar12;
      }
      sljit_emit_op1(piVar2,0x20,0x8c,0,2,0);
      lVar21 = sljit_emit_jump(piVar2,0x24);
      if ((lVar23 != 0) && (lVar21 != 0)) {
        *(long *)(lVar21 + 0x18) = lVar23;
        *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if ((lVar10 != 0) && (lVar23 = sljit_emit_label(piVar2), lVar23 != 0)) {
        *(long *)(lVar10 + 0x18) = lVar23;
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    else {
      if (local_64 == 0xd) {
        if (*(int *)((long)param_1 + 0x1e4) != 0) goto LAB_0011d2a0;
        if (local_68 == 0x21) {
          if (iVar20 == 0) {
            uVar9 = *param_1;
            sljit_emit_op2(uVar9,0x42,0xc,0,0xc,0,0x7f,0x10);
            uVar9 = sljit_emit_cmp(uVar9,2,0xc,0,0xb,0);
            piVar3 = (int *)*param_1;
            if ((*piVar3 == 0) &&
               (puVar12 = (undefined8 *)ensure_abuf(piVar3,0x18), puVar12 != (undefined8 *)0x0)) {
              *puVar12 = uVar9;
              uVar13 = sljit_emit_label(piVar3);
              uVar9 = param_1[0x26];
              puVar12[1] = uVar13;
              puVar12[2] = uVar9;
              param_1[0x26] = puVar12;
            }
          }
          sljit_emit_op1(piVar2,0x20,local_a4,(long)iVar20,0xd,0);
          sljit_emit_op1(piVar2,0x20,local_a4,(long)iVar5,2,0);
          sljit_emit_op1(piVar2,0x20,2,0,0xd,0);
          process_partial_match(param_1);
          if (local_a8 != 0) {
            sljit_emit_op1(piVar2,0x20,0x8e,(long)local_a8,0xd,0);
          }
          goto LAB_0011c5fd;
        }
        if (*(int *)(param_1 + 0x3c) != 0) goto LAB_0011d2a0;
        if (iVar20 == 0) {
          uVar9 = *param_1;
          uVar13 = 0x7f;
          sljit_emit_op2(uVar9,0x42,0xc,0,0xc,0,0x7f,0x10);
          auVar25 = sljit_emit_cmp(uVar9,2,0xc,0,0xb,0);
          piVar3 = (int *)*param_1;
          if ((*piVar3 == 0) &&
             (puVar12 = (undefined8 *)ensure_abuf(piVar3,0x18,auVar25._8_8_,uVar13),
             puVar12 != (undefined8 *)0x0)) {
            *puVar12 = auVar25._0_8_;
            uVar13 = sljit_emit_label(piVar3);
            uVar9 = param_1[0x26];
            puVar12[1] = uVar13;
            puVar12[2] = uVar9;
            param_1[0x26] = puVar12;
          }
        }
        sljit_emit_op1(piVar2,0x20,local_a4,(long)iVar5,2,0);
        sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,local_60 * 4);
        if (*(int *)(param_1 + 0x14) == 1) {
          if (*piVar2 == 0) {
            piVar2[0x26] = 0;
            emit_cmp_binary(piVar2,2,0,0xd,0);
          }
          sljit_emit_select_isra_0(piVar2,4,2,0xd,0,2);
        }
        else {
          lVar23 = sljit_emit_cmp(piVar2,5,2,0,0xd,0);
          process_partial_match(param_1);
          lVar10 = sljit_emit_label(piVar2);
          if ((lVar10 != 0) && (lVar23 != 0)) {
            *(long *)(lVar23 + 0x18) = lVar10;
            *(ulong *)(lVar23 + 0x10) = *(ulong *)(lVar23 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
      }
      else {
        if (1 < local_64 - 0x1dU) {
LAB_0011d2a0:
          if (*local_58 - 0x1dU < 2) {
            uVar24 = local_58[1];
            local_88 = (ulong)uVar24;
            if (*local_58 == 0x1e) {
              if ((*(int *)(param_1 + 0x3c) == 0) && (*(int *)(param_1 + 0x3d) == 0)) {
                if (uVar24 < 0x100) {
LAB_0011e317:
                  if (*(byte *)(param_1[0x12] + (ulong)uVar24) != uVar24) goto LAB_0011e2c0;
                }
LAB_0011e0fa:
                local_88 = (ulong)uVar24;
                uVar7 = 0;
              }
              else {
                if (uVar24 < 0x80) goto LAB_0011e317;
                puVar18 = &_pcre2_dummy_ucd_record_32;
                if (uVar24 < 0x110000) {
                  puVar18 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar24 >> 7) * 2) * 0x80 +
                                               (uVar24 & 0x7f)) * 2) * 0xc;
                }
                if (*(int *)(puVar18 + 4) == 0) goto LAB_0011e0fa;
LAB_0011e2c0:
                uVar7 = char_get_othercase_bit_isra_0(param_1,uVar24);
                uVar24 = (uint)local_88;
                if (uVar7 == 0) goto LAB_0011c71b;
                if ((uVar7 & 0x100) != 0) {
                  local_88 = local_88 & 0xffffffff;
                  uVar4 = uVar7 & 0xff;
                  uVar7 = uVar4 << 8;
                  if (uVar4 == 0) goto LAB_0011d2d6;
                }
                uVar24 = uVar24 | uVar7;
                local_88 = (ulong)uVar24;
              }
            }
            else {
              uVar7 = 0;
            }
LAB_0011d2d6:
            local_a0 = local_a0 + 2;
            *(uint *)(pauVar8[3] + 4) = uVar24;
            *(undefined4 *)(pauVar8[3] + 8) = 1;
            local_58 = local_a0;
            *(uint *)pauVar8[3] = uVar7;
            if (local_68 == 0x27) {
              lVar23 = (long)iVar22;
              sljit_emit_op1(piVar2,0x20,uVar6,lVar23,0x7f,local_60 + 1);
              local_78 = sljit_emit_jump(piVar2,0x24);
              local_70 = sljit_emit_label(piVar2);
              sljit_emit_op2(piVar2,0x242,uVar6,lVar23,uVar6,lVar23,0x7f);
              uVar13 = sljit_emit_jump(piVar2,0);
              if (*piVar2 == 0) {
                lVar23 = *(long *)(piVar2 + 0x18);
                lVar10 = *(long *)(lVar23 + 8);
                uVar14 = lVar10 + 0x10;
                if (uVar14 < 0xff1) {
                  *(ulong *)(lVar23 + 8) = uVar14;
                  puVar12 = (undefined8 *)(lVar23 + 0x10 + lVar10);
                }
                else {
                  puVar11 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
                  if (puVar11 == (undefined8 *)0x0) {
                    *piVar2 = 2;
                    goto LAB_0011d320;
                  }
                  *puVar11 = *(undefined8 *)(piVar2 + 0x18);
                  *(undefined8 **)(piVar2 + 0x18) = puVar11;
                  puVar12 = puVar11 + 2;
                  puVar11[1] = 0x10;
                }
                uVar26 = *(undefined8 *)(pauVar8[1] + 8);
                *puVar12 = uVar13;
                puVar12[1] = uVar26;
                *(undefined8 **)(pauVar8[1] + 8) = puVar12;
              }
            }
            else {
              local_78 = sljit_emit_jump(piVar2,0x24);
              local_70 = sljit_emit_label(piVar2);
            }
LAB_0011d320:
            compile_char1_matchingpath(param_1,local_64,uVar9,pauVar8[1] + 8,0);
            if (local_a8 != 0) {
              sljit_emit_op1(piVar2,0x20,0x8e,(long)local_a8,2,0);
            }
            lVar23 = sljit_emit_label(piVar2);
            if ((lVar23 != 0) && (local_78 != 0)) {
              *(long *)(local_78 + 0x18) = lVar23;
              *(ulong *)(local_78 + 0x10) = *(ulong *)(local_78 + 0x10) & 0xfffffffffffffffd | 1;
            }
            detect_partial_match(param_1,pauVar8[1] + 8);
            sljit_emit_op1(piVar2,0x25,1,0,0x82,0);
            if ((uVar7 != 0) && (*piVar2 == 0)) {
              piVar2[0x26] = 0;
              emit_cum_binary(piVar2,0xd0b0908,1,0,1,0,0x7f,uVar7);
            }
            lVar23 = sljit_emit_cmp(piVar2,1,1,0,0x7f,local_88);
            if ((local_70 != 0) && (lVar23 != 0)) {
              *(long *)(lVar23 + 0x18) = local_70;
              *(ulong *)(lVar23 + 0x10) = *(ulong *)(lVar23 + 0x10) & 0xfffffffffffffffd | 1;
            }
            if (iVar20 == 0) {
              uVar13 = *param_1;
              sljit_emit_op2(uVar13,0x42,0xc,0,0xc,0,0x7f,0x10);
              uVar13 = sljit_emit_cmp(uVar13,2,0xc,0,0xb,0);
              piVar3 = (int *)*param_1;
              if ((*piVar3 == 0) &&
                 (puVar12 = (undefined8 *)ensure_abuf(piVar3,0x18), puVar12 != (undefined8 *)0x0)) {
                *puVar12 = uVar13;
                uVar26 = sljit_emit_label(piVar3);
                uVar13 = param_1[0x26];
                puVar12[1] = uVar26;
                puVar12[2] = uVar13;
                param_1[0x26] = puVar12;
              }
            }
            lVar23 = (long)iVar20;
            sljit_emit_op1(piVar2,0x20,local_a4,lVar23,2,0);
            sljit_emit_op1(piVar2,0x20,local_a4,(long)iVar5,2,0);
            if (local_68 == 0x27) {
              uVar13 = 1;
              sljit_emit_op2(piVar2,0x242,uVar6,(long)iVar22,uVar6,(long)iVar22,0x7f);
              lVar10 = sljit_emit_jump(piVar2,0);
              if (*piVar2 == 0) {
                lVar21 = *(long *)(piVar2 + 0x18);
                lVar15 = *(long *)(lVar21 + 8);
                uVar14 = lVar15 + 0x10;
                if (uVar14 < 0xff1) {
                  *(ulong *)(lVar21 + 8) = uVar14;
                  plVar17 = (long *)(lVar21 + 0x10 + lVar15);
                }
                else {
                  puVar12 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2],lVar21,uVar14,
                                       uVar13);
                  if (puVar12 == (undefined8 *)0x0) {
                    *piVar2 = 2;
                    goto LAB_0011d453;
                  }
                  *puVar12 = *(undefined8 *)(piVar2 + 0x18);
                  *(undefined8 **)(piVar2 + 0x18) = puVar12;
                  plVar17 = puVar12 + 2;
                  puVar12[1] = 0x10;
                }
                *plVar17 = lVar10;
                plVar17[1] = (long)local_50;
                local_50 = plVar17;
              }
            }
LAB_0011d453:
            lVar10 = sljit_emit_label(piVar2);
            compile_char1_matchingpath(param_1,local_64,uVar9,&local_50,0);
            if (local_a8 != 0) {
              sljit_emit_op1(piVar2,0x20,0x8e,(long)local_a8,2,0);
            }
            detect_partial_match(param_1,&local_50);
            sljit_emit_op1(piVar2,0x25,1,0,0x82,0);
            if ((uVar7 != 0) && (*piVar2 == 0)) {
              piVar2[0x26] = 0;
              emit_cum_binary(piVar2,0xd0b0908,1,0,1,0,0x7f,uVar7);
            }
            if (local_68 == 0x21) {
              lVar21 = sljit_emit_cmp(piVar2,1,1,0,0x7f,local_88);
              if ((lVar21 != 0) && (lVar10 != 0)) {
                *(long *)(lVar21 + 0x18) = lVar10;
                *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op1(piVar2,0x20,local_a4,lVar23,2,0);
              lVar21 = sljit_emit_jump(piVar2,0x24);
            }
            else {
              lVar21 = sljit_emit_cmp(piVar2,1,1,0,0x7f);
              sljit_emit_op1(piVar2,0x20,local_a4,lVar23,2,0);
              lVar15 = sljit_emit_label(piVar2);
              if ((lVar15 != 0) && (lVar21 != 0)) {
                *(long *)(lVar21 + 0x18) = lVar15;
                *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op2(piVar2,0x242,uVar6,(long)iVar22,uVar6,(long)iVar22,0x7f,1);
              lVar21 = sljit_emit_jump(piVar2,1);
            }
            if ((lVar21 != 0) && (lVar10 != 0)) {
              *(long *)(lVar21 + 0x18) = lVar10;
              *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar10 = sljit_emit_label(piVar2);
            for (plVar17 = local_50; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
              lVar21 = *plVar17;
              if ((lVar21 != 0) && (lVar10 != 0)) {
                *(long *)(lVar21 + 0x18) = lVar10;
                *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op2(piVar2,0x40,2,0,local_a4,lVar23,0x7f,4);
            sljit_emit_op1(piVar2,0x20,local_a4,lVar23,2,0);
            goto LAB_0011c5fd;
          }
        }
LAB_0011c71b:
        if (iVar20 == 0) {
          uVar13 = *param_1;
          uVar26 = 0x10;
          sljit_emit_op2(uVar13,0x42,0xc,0,0xc,0,0x7f);
          uVar13 = sljit_emit_cmp(uVar13,2,0xc,0,0xb,0);
          piVar3 = (int *)*param_1;
          if ((*piVar3 == 0) &&
             (puVar12 = (undefined8 *)ensure_abuf(piVar3,0x18,uVar26), puVar12 != (undefined8 *)0x0)
             ) {
            *puVar12 = uVar13;
            uVar26 = sljit_emit_label(piVar3);
            uVar13 = param_1[0x26];
            puVar12[1] = uVar26;
            puVar12[2] = uVar13;
            param_1[0x26] = puVar12;
          }
        }
        sljit_emit_op1(piVar2,0x20,local_a4,(long)iVar5,2,0);
        if (local_68 == 0x27) {
          sljit_emit_op1(piVar2,0x20,uVar6,lVar23,0x7f,local_60);
          detect_partial_match(param_1,&local_50);
          uVar13 = sljit_emit_label(piVar2);
          compile_char1_matchingpath(param_1,local_64,uVar9,&local_48,0);
          sljit_emit_op2(piVar2,0x242,uVar6,lVar23,uVar6,lVar23,0x7f,1);
          lVar23 = sljit_emit_jump(piVar2,0);
          if (*piVar2 == 0) {
            lVar10 = *(long *)(piVar2 + 0x18);
            lVar21 = *(long *)(lVar10 + 8);
            uVar14 = lVar21 + 0x10;
            if (uVar14 < 0xff1) {
              *(ulong *)(lVar10 + 8) = uVar14;
              plVar17 = (long *)(lVar10 + 0x10 + lVar21);
            }
            else {
              puVar12 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
              if (puVar12 == (undefined8 *)0x0) {
                *piVar2 = 2;
                goto LAB_0011c783;
              }
              *puVar12 = *(undefined8 *)(piVar2 + 0x18);
              *(undefined8 **)(piVar2 + 0x18) = puVar12;
              plVar17 = puVar12 + 2;
              puVar12[1] = 0x10;
            }
            *plVar17 = lVar23;
            plVar17[1] = (long)local_50;
            local_50 = plVar17;
          }
        }
        else {
          detect_partial_match(param_1,&local_50);
          uVar13 = sljit_emit_label(piVar2);
          compile_char1_matchingpath(param_1,local_64,uVar9,&local_48,0);
        }
LAB_0011c783:
        detect_partial_match_to(param_1,uVar13);
        sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,4);
        lVar23 = sljit_emit_label(piVar2);
        for (plVar17 = local_48; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
          lVar10 = *plVar17;
          if ((lVar10 != 0) && (lVar23 != 0)) {
            *(long *)(lVar10 + 0x18) = lVar23;
            *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f,4);
        lVar23 = sljit_emit_label(piVar2);
        for (plVar17 = local_50; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
          lVar10 = *plVar17;
          if ((lVar10 != 0) && (lVar23 != 0)) {
            *(long *)(lVar10 + 0x18) = lVar23;
            *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
      }
      sljit_emit_op1(piVar2,0x20,local_a4,(long)iVar20,2,0);
      if (local_a8 != 0) {
        iVar20 = 0;
        uVar9 = 2;
        local_a4 = 0x8e;
        goto LAB_0011cd67;
      }
    }
    goto LAB_0011c5fd;
  case 0x22:
    if (iVar20 == 0) {
      uVar9 = *param_1;
      sljit_emit_op2(uVar9,0x42,0xc,0,0xc,0,0x7f,8);
      uVar9 = sljit_emit_cmp(uVar9,2,0xc,0,0xb,0);
      piVar3 = (int *)*param_1;
      if ((*piVar3 == 0) &&
         (puVar12 = (undefined8 *)ensure_abuf(piVar3,0x18), puVar12 != (undefined8 *)0x0)) {
        *puVar12 = uVar9;
        uVar13 = sljit_emit_label(piVar3);
        uVar9 = param_1[0x26];
        puVar12[1] = uVar13;
        puVar12[2] = uVar9;
        param_1[0x26] = puVar12;
      }
    }
    sljit_emit_op1(piVar2,0x20,local_a4,(long)iVar20,2,0);
    auVar25 = sljit_emit_label(piVar2);
    puVar19 = auVar25._8_8_;
    *(long *)(pauVar8[2] + 8) = auVar25._0_8_;
joined_r0x0011cc48:
    if (local_a8 != 0) {
      sljit_emit_op1(piVar2,0x20,0x8e,(long)local_a8,2,0);
      puVar19 = extraout_RDX;
    }
    break;
  case 0x25:
  case 0x26:
    if (iVar20 == 0) {
      uVar13 = *param_1;
      uVar26 = 8;
      sljit_emit_op2(uVar13,0x42,0xc,0,0xc,0,0x7f);
      uVar13 = sljit_emit_cmp(uVar13,2,0xc,0,0xb,0);
      piVar3 = (int *)*param_1;
      if ((*piVar3 == 0) &&
         (puVar12 = (undefined8 *)ensure_abuf(piVar3,0x18,uVar26), puVar12 != (undefined8 *)0x0)) {
        *puVar12 = uVar13;
        uVar26 = sljit_emit_label(piVar3);
        uVar13 = param_1[0x26];
        puVar12[1] = uVar26;
        puVar12[2] = uVar13;
        param_1[0x26] = puVar12;
      }
    }
    sljit_emit_op1(piVar2,0x20,local_a4,(long)iVar20,2,0);
    if (local_68 == 0x25) {
      compile_char1_matchingpath(param_1,local_64,uVar9,pauVar8 + 3,1);
    }
    goto LAB_0011c5fd;
  case 0x28:
    if (iVar20 == 0) {
      uVar9 = *param_1;
      sljit_emit_op2(uVar9,0x42,0xc,0,0xc,0,0x7f);
      uVar9 = sljit_emit_cmp(uVar9,2,0xc,0,0xb,0);
      piVar3 = (int *)*param_1;
      if ((*piVar3 == 0) &&
         (puVar12 = (undefined8 *)ensure_abuf(piVar3,0x18), puVar12 != (undefined8 *)0x0)) {
        *puVar12 = uVar9;
        uVar13 = sljit_emit_label(piVar3);
        uVar9 = param_1[0x26];
        puVar12[1] = uVar13;
        puVar12[2] = uVar9;
        param_1[0x26] = puVar12;
      }
    }
    sljit_emit_op1(piVar2,0x20,local_a4,(long)iVar20,2,0);
    uVar9 = 0x7f;
    iVar20 = local_60 + 1;
    local_a8 = iVar5;
LAB_0011cd67:
    sljit_emit_op1(piVar2,0x20,local_a4,(long)local_a8,uVar9,iVar20);
LAB_0011c5fd:
    auVar25 = sljit_emit_label(piVar2);
    puVar19 = auVar25._8_8_;
    *(long *)(pauVar8[2] + 8) = auVar25._0_8_;
    break;
  case 0x2a:
    if ((local_64 != 0xd) || (*(int *)((long)param_1 + 0x1e4) != 0)) {
      detect_partial_match(param_1,&local_50);
      uVar13 = sljit_emit_label(piVar2);
      compile_char1_matchingpath(param_1,local_64,uVar9,&local_48,0);
      detect_partial_match_to(param_1,uVar13);
      sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,4);
      lVar23 = sljit_emit_label(piVar2);
      for (plVar17 = local_48; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
        lVar10 = *plVar17;
        if ((lVar10 != 0) && (lVar23 != 0)) {
          *(long *)(lVar10 + 0x18) = lVar23;
          *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f,4);
      auVar25 = sljit_emit_label(piVar2);
      puVar19 = auVar25._8_8_;
      for (plVar17 = local_50; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
        lVar23 = *plVar17;
        if ((lVar23 != 0) && (auVar25._0_8_ != 0)) {
          *(long *)(lVar23 + 0x18) = auVar25._0_8_;
          puVar19 = (uint *)(*(ulong *)(lVar23 + 0x10) & 0xfffffffffffffffd | 1);
          *(uint **)(lVar23 + 0x10) = puVar19;
        }
      }
      goto joined_r0x0011cc48;
    }
    sljit_emit_op1(piVar2,0x20,2,0,0xd,0);
    process_partial_match(param_1);
    puVar19 = extraout_RDX_01;
    if (local_a8 != 0) {
      sljit_emit_op1(piVar2,0x20,0x8e,(long)local_a8,0xd,0);
      puVar19 = extraout_RDX_02;
    }
    break;
  case 0x2c:
    sljit_emit_op1(piVar2,0x20,uVar6,lVar23,2,0);
    compile_char1_matchingpath(param_1,local_64,uVar9,&local_50,1);
    sljit_emit_op1(piVar2,0x20,uVar6,lVar23,2,0);
    lVar10 = sljit_emit_label(piVar2);
    for (plVar17 = local_50; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
      lVar21 = *plVar17;
      if ((lVar21 != 0) && (lVar10 != 0)) {
        *(long *)(lVar21 + 0x18) = lVar10;
        *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    sljit_emit_op1(piVar2,0x20,2,0,uVar6,lVar23);
    puVar19 = extraout_RDX_00;
    break;
  case 0x2d:
    if (local_64 == 0xd) {
      sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,local_60 * 4);
      if (*(int *)(param_1 + 0x14) == 1) {
        if (*piVar2 == 0) {
          piVar2[0x26] = 0;
          puVar16 = (undefined1 *)emit_x86_instruction(piVar2,1,2,0,0xd,0);
          if (puVar16 != (undefined1 *)0x0) {
            *puVar16 = 0x3b;
          }
        }
        sljit_emit_select_isra_0(piVar2,4,2,0xd,0,2);
        puVar19 = extraout_RDX_03;
      }
      else {
        lVar23 = sljit_emit_cmp(piVar2,5,2,0,0xd,0);
        process_partial_match(param_1);
        auVar25 = sljit_emit_label(piVar2);
        puVar19 = auVar25._8_8_;
        if ((auVar25._0_8_ != 0) && (lVar23 != 0)) {
          *(long *)(lVar23 + 0x18) = auVar25._0_8_;
          puVar19 = (uint *)(*(ulong *)(lVar23 + 0x10) & 0xfffffffffffffffd | 1);
          *(uint **)(lVar23 + 0x10) = puVar19;
        }
      }
    }
    else {
      sljit_emit_op1(piVar2,0x20,uVar6,lVar23,0x7f);
      detect_partial_match(param_1,&local_50);
      uVar13 = sljit_emit_label(piVar2);
      compile_char1_matchingpath(param_1,local_64,uVar9,&local_48,0);
      sljit_emit_op2(piVar2,0x242,uVar6,lVar23,uVar6,lVar23,0x7f,1);
      lVar23 = sljit_emit_jump(piVar2,0);
      if (*piVar2 == 0) {
        lVar10 = *(long *)(piVar2 + 0x18);
        lVar21 = *(long *)(lVar10 + 8);
        uVar14 = lVar21 + 0x10;
        if (uVar14 < 0xff1) {
          *(ulong *)(lVar10 + 8) = uVar14;
          plVar17 = (long *)(lVar10 + 0x10 + lVar21);
        }
        else {
          puVar12 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar2 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
          if (puVar12 == (undefined8 *)0x0) {
            *piVar2 = 2;
            goto LAB_0011ca19;
          }
          *puVar12 = *(undefined8 *)(piVar2 + 0x18);
          *(undefined8 **)(piVar2 + 0x18) = puVar12;
          plVar17 = puVar12 + 2;
          puVar12[1] = 0x10;
        }
        *plVar17 = lVar23;
        plVar17[1] = (long)local_50;
        local_50 = plVar17;
      }
LAB_0011ca19:
      detect_partial_match_to(param_1,uVar13);
      sljit_emit_op2(piVar2,0x40,2,0,2,0,0x7f,4);
      lVar23 = sljit_emit_label(piVar2);
      for (plVar17 = local_48; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
        lVar10 = *plVar17;
        if ((lVar10 != 0) && (lVar23 != 0)) {
          *(long *)(lVar10 + 0x18) = lVar23;
          *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      sljit_emit_op2(piVar2,0x42,2,0,2,0,0x7f,4);
      auVar25 = sljit_emit_label(piVar2);
      puVar19 = auVar25._8_8_;
      for (plVar17 = local_50; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
        lVar23 = *plVar17;
        if ((lVar23 != 0) && (auVar25._0_8_ != 0)) {
          *(long *)(lVar23 + 0x18) = auVar25._0_8_;
          puVar19 = (uint *)(*(ulong *)(lVar23 + 0x10) & 0xfffffffffffffffd | 1);
          *(uint **)(lVar23 + 0x10) = puVar19;
        }
      }
    }
  }
  piVar2 = (int *)*param_1;
  if (*piVar2 == 0) {
    piVar2[0x26] = 0;
    puVar19 = (uint *)0x7f;
    emit_non_cum_binary(piVar2,0x2d2b2928,10,0,10,0,0x7f,1);
  }
  uVar9 = sljit_emit_jump(piVar2,0,puVar19);
  if (*piVar2 == 0) {
    lVar23 = *(long *)(piVar2 + 0x18);
    lVar10 = *(long *)(lVar23 + 8);
    uVar14 = lVar10 + 0x10;
    if (uVar14 < 0xff1) {
      *(ulong *)(lVar23 + 8) = uVar14;
      puVar12 = (undefined8 *)(lVar23 + 0x10 + lVar10);
    }
    else {
      puVar11 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar2 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
      if (puVar11 == (undefined8 *)0x0) {
        *piVar2 = 2;
        goto LAB_0011c573;
      }
      *puVar11 = *(undefined8 *)(piVar2 + 0x18);
      *(undefined8 **)(piVar2 + 0x18) = puVar11;
      puVar12 = puVar11 + 2;
      puVar11[1] = 0x10;
    }
    uVar13 = param_1[0x2f];
    *puVar12 = uVar9;
    puVar12[1] = uVar13;
    param_1[0x2f] = puVar12;
  }
LAB_0011c573:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */

void compile_matchingpath(undefined8 *param_1,uint *param_2,uint *param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined1 (*pauVar20) [16];
  long *plVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  int *piVar24;
  int iVar25;
  uint *puVar26;
  long in_FS_OFFSET;
  bool bVar27;
  undefined1 auVar28 [16];
  uint local_b8;
  undefined8 local_a0;
  int local_90;
  int local_8c;
  uint *local_88;
  uint local_80;
  int local_78;
  int local_68;
  int local_44;
  long local_40;
  
  iVar23 = *(int *)((long)param_1 + 0xb4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)*param_1;
  local_a0 = 0;
  if ((iVar23 != 0) &&
     (iVar23 = 0, *(char *)(param_1[6] + ((long)param_2 - param_1[2] >> 2)) != '\0')) {
    local_a0 = param_1[7];
    if ((*piVar1 == 0) && (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar1,0x48), *piVar1 == 0))
    {
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12[1] = (undefined1  [16])0x0;
      pauVar12[2] = (undefined1  [16])0x0;
      pauVar12[3] = (undefined1  [16])0x0;
      *(undefined8 *)pauVar12[4] = 0;
      *(undefined8 *)*pauVar12 = *(undefined8 *)(param_4 + 0x10);
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
      param_1[7] = pauVar12;
      *(undefined4 **)pauVar12[2] = &then_trap_opcode;
      *(long *)pauVar12[3] = (long)param_2 - param_1[2] >> 2;
      iVar9 = get_framesize(param_1,param_2,param_3,0,&local_44);
      iVar23 = *(int *)((long)param_1 + 100);
      *(int *)pauVar12[4] = iVar9;
      iVar8 = 0;
      if (-1 < iVar9) {
        iVar8 = iVar9;
      }
      iVar9 = (iVar8 + 3) * 8;
      sljit_emit_op1(piVar1,0x20,4,0,0x8e,(long)iVar23);
      uVar14 = *param_1;
      uVar16 = 0x7f;
      sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,(long)iVar9);
      auVar28 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
      piVar2 = (int *)*param_1;
      if ((*piVar2 == 0) &&
         (puVar15 = (undefined8 *)ensure_abuf(piVar2,0x18,auVar28._8_8_,uVar16),
         puVar15 != (undefined8 *)0x0)) {
        *puVar15 = auVar28._0_8_;
        uVar16 = sljit_emit_label(piVar2);
        uVar14 = param_1[0x26];
        puVar15[1] = uVar16;
        puVar15[2] = uVar14;
        param_1[0x26] = puVar15;
      }
      if (iVar8 + 3 == 3) {
        sljit_emit_op1(piVar1,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0xc,0);
      }
      else {
        sljit_emit_op2(piVar1,0x40,0x8e,(long)*(int *)((long)param_1 + 100),0xc,0,0x7f,
                       (long)iVar8 << 3);
      }
      sljit_emit_op1(piVar1,0x20,0x8c,(long)(iVar9 + -8),0x7f,*(undefined8 *)pauVar12[3]);
      sljit_emit_op1(piVar1,0x20,0x8c,(long)(iVar9 + -0x10),0x7f,1);
      sljit_emit_op1(piVar1,0x20,0x8c,(long)(iVar9 + -0x18),4,0);
      if (-1 < *(int *)pauVar12[4]) {
        init_frame_isra_0(param_1,param_2,param_3,*(int *)pauVar12[4] + -1);
      }
    }
    iVar23 = 1;
  }
joined_r0x0011e58b:
  puVar26 = param_2;
  if (param_3 <= puVar26) {
    if (((iVar23 != 0) && (*piVar1 == 0)) &&
       (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar1,0x48), *piVar1 == 0)) {
      *(undefined8 *)pauVar12[4] = 0;
      pauVar12[2] = (undefined1  [16])0x0;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12[1] = (undefined1  [16])0x0;
      pauVar12[3] = (undefined1  [16])0x0;
      *(undefined8 *)*pauVar12 = *(undefined8 *)(param_4 + 0x10);
      uVar14 = param_1[7];
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
      *(undefined4 **)pauVar12[2] = &then_trap_opcode;
      *(undefined8 *)(pauVar12[2] + 8) = uVar14;
      param_1[7] = local_a0;
    }
    goto switchD_0011e5ba_caseD_62;
  }
  uVar7 = *puVar26;
  if (uVar7 < 0x78) {
    switch(uVar7) {
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
code_r0x0011ebbd:
      param_2 = (uint *)compile_simple_assertion_matchingpath(param_1,uVar7,puVar26 + 1);
      break;
    case 3:
      if ((*piVar1 != 0) || (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar1,0x28), *piVar1 != 0)
         ) goto switchD_0011e5ba_caseD_62;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12[1] = (undefined1  [16])0x0;
      *(undefined8 *)pauVar12[2] = 0;
      uVar14 = *(undefined8 *)(param_4 + 0x10);
      *(uint **)pauVar12[2] = puVar26;
      iVar8 = *(int *)((long)param_1 + 0x44);
      *(undefined8 *)*pauVar12 = uVar14;
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
      sljit_emit_op1(piVar1,0x20,4,0,0x8e,(long)iVar8);
      uVar14 = *param_1;
      sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,8);
      uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
      piVar2 = (int *)*param_1;
      if ((*piVar2 == 0) &&
         (puVar15 = (undefined8 *)ensure_abuf(piVar2,0x18), puVar15 != (undefined8 *)0x0)) {
        *puVar15 = uVar14;
        uVar16 = sljit_emit_label(piVar2);
        uVar14 = param_1[0x26];
        puVar15[1] = uVar16;
        puVar15[2] = uVar14;
        param_1[0x26] = puVar15;
      }
      sljit_emit_op1(piVar1,0x20,0x8e,(long)*(int *)((long)param_1 + 0x44),2,0);
      sljit_emit_op1(piVar1,0x20,0x8c,0,4,0);
      param_2 = puVar26 + 1;
      goto joined_r0x0011e58b;
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
      goto switchD_0011e5ba_caseD_6;
    case 0x1d:
    case 0x1e:
      if (*(int *)(param_1 + 0x14) == 1) {
        param_2 = (uint *)compile_charn_matchingpath(param_1,puVar26,param_3);
        break;
      }
      goto code_r0x0011e640;
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
switchD_0011e5ba_caseD_21:
      param_2 = (uint *)compile_iterator_matchingpath(param_1,puVar26,param_4);
      break;
    default:
      goto switchD_0011e5ba_caseD_62;
    case 0x6e:
    case 0x6f:
      if (puVar26[9] - 0x62 < 0xc) goto switchD_0011e5ba_caseD_21;
switchD_0011e5ba_caseD_6:
code_r0x0011e640:
      param_2 = (uint *)compile_char1_matchingpath(param_1,uVar7,puVar26 + 1);
      break;
    case 0x70:
      if (puVar26[puVar26[1]] - 0x62 < 0xc) goto switchD_0011e5ba_caseD_21;
      param_2 = (uint *)compile_char1_matchingpath(param_1,0x70,puVar26 + 1);
      break;
    case 0x71:
    case 0x72:
      if (puVar26[2] - 0x62 < 0xc) goto LAB_0011fc40;
      lVar17 = param_4 + 0x18;
      if (*(long *)(param_4 + 0x10) != 0) {
        lVar17 = *(long *)(param_4 + 0x10) + 8;
      }
      compile_ref_matchingpath(param_1,puVar26,lVar17,1,0);
      param_2 = puVar26 + 2;
      goto joined_r0x0011e58b;
    case 0x73:
    case 0x74:
      if (0xb < puVar26[3] - 0x62) {
        lVar17 = *(long *)(param_4 + 0x10) + 8;
        if (*(long *)(param_4 + 0x10) == 0) {
          lVar17 = param_4 + 0x18;
        }
        compile_dnref_search(param_1,puVar26,lVar17);
        lVar17 = *(long *)(param_4 + 0x10) + 8;
        if (*(long *)(param_4 + 0x10) == 0) {
          lVar17 = param_4 + 0x18;
        }
        compile_ref_matchingpath(param_1,puVar26,lVar17,1,0);
        param_2 = puVar26 + 3;
        goto joined_r0x0011e58b;
      }
LAB_0011fc40:
      param_2 = (uint *)compile_ref_iterator_matchingpath(param_1,puVar26,param_4);
      break;
    case 0x75:
      piVar2 = (int *)*param_1;
      pauVar12 = (undefined1 (*) [16])param_1[0x27];
      uVar11 = (ulong)puVar26[1];
      if ((*piVar2 != 0) || (pauVar20 = (undefined1 (*) [16])ensure_abuf(piVar2,0x40), *piVar2 != 0)
         ) goto switchD_0011e5ba_caseD_62;
      *pauVar20 = (undefined1  [16])0x0;
      pauVar20[1] = (undefined1  [16])0x0;
      pauVar20[2] = (undefined1  [16])0x0;
      pauVar20[3] = (undefined1  [16])0x0;
      uVar14 = *(undefined8 *)(param_4 + 0x10);
      *(uint **)pauVar20[2] = puVar26;
      *(undefined8 *)*pauVar20 = uVar14;
      lVar17 = param_1[2];
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar20;
      piVar24 = (int *)(lVar17 + uVar11 * 4);
      iVar8 = get_framesize(param_1,piVar24,0,1,&local_44);
      pauVar6 = pauVar12;
      if (iVar8 == -2) {
        do {
          piVar24 = piVar24 + (uint)piVar24[1];
        } while (*piVar24 == 0x78);
        uVar14 = next_opcode(param_1);
        compile_matchingpath(param_1,uVar14,piVar24);
        *(undefined4 *)(pauVar20[3] + 8) = 1;
        param_2 = puVar26 + 2;
      }
      else {
        while (pauVar22 = pauVar6, pauVar22 != (undefined1 (*) [16])0x0) {
          if (uVar11 == *(ulong *)(pauVar22[2] + 8)) {
            lVar17 = *(long *)(*pauVar22 + 8);
            *(undefined1 (**) [16])pauVar20[3] = pauVar22;
            if (lVar17 == 0) goto LAB_00120921;
            lVar18 = sljit_emit_jump(piVar2,0x25);
            if (lVar18 != 0) {
              *(long *)(lVar18 + 0x18) = lVar17;
              *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
            }
            goto LAB_0011fb76;
          }
          pauVar12 = pauVar22;
          pauVar6 = *(undefined1 (**) [16])*pauVar22;
        }
        if ((*piVar2 != 0) ||
           (pauVar22 = (undefined1 (*) [16])ensure_abuf(piVar2,0x30), *piVar2 != 0))
        goto switchD_0011e5ba_caseD_62;
        *(undefined8 *)pauVar22[2] = 0;
        *(ulong *)(pauVar22[2] + 8) = uVar11;
        *pauVar22 = (undefined1  [16])0x0;
        pauVar22[1] = (undefined1  [16])0x0;
        if (pauVar12 == (undefined1 (*) [16])0x0) {
          param_1[0x27] = pauVar22;
        }
        else {
          *(undefined1 (**) [16])*pauVar12 = pauVar22;
        }
        *(undefined1 (**) [16])pauVar20[3] = pauVar22;
LAB_00120921:
        uVar14 = sljit_emit_jump(piVar2,0x25);
        if (*piVar2 == 0) {
          lVar17 = *(long *)(piVar2 + 0x18);
          lVar18 = *(long *)(lVar17 + 8);
          uVar11 = lVar18 + 0x10;
          if (uVar11 < 0xff1) {
            *(ulong *)(lVar17 + 8) = uVar11;
            puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
          }
          else {
            puVar19 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
            if (puVar19 == (undefined8 *)0x0) {
              *piVar2 = 2;
              goto LAB_0011fb76;
            }
            *puVar19 = *(undefined8 *)(piVar2 + 0x18);
            *(undefined8 **)(piVar2 + 0x18) = puVar19;
            puVar15 = puVar19 + 2;
            puVar19[1] = 0x10;
          }
          uVar16 = *(undefined8 *)(pauVar22[1] + 8);
          *puVar15 = uVar14;
          puVar15[1] = uVar16;
          *(undefined8 **)(pauVar22[1] + 8) = puVar15;
        }
LAB_0011fb76:
        uVar14 = sljit_emit_cmp(piVar2,0,1,0,0x7f,0);
        if (*piVar2 == 0) {
          lVar17 = *(long *)(piVar2 + 0x18);
          lVar18 = *(long *)(lVar17 + 8);
          uVar11 = lVar18 + 0x10;
          if (uVar11 < 0xff1) {
            *(ulong *)(lVar17 + 8) = uVar11;
            puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
          }
          else {
            puVar19 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
            if (puVar19 == (undefined8 *)0x0) {
              *piVar2 = 2;
              goto LAB_0011fc10;
            }
            *puVar19 = *(undefined8 *)(piVar2 + 0x18);
            puVar15 = puVar19 + 2;
            *(undefined8 **)(piVar2 + 0x18) = puVar19;
            puVar19[1] = 0x10;
          }
          uVar16 = *(undefined8 *)(pauVar20[1] + 8);
          *puVar15 = uVar14;
          puVar15[1] = uVar16;
          *(undefined8 **)(pauVar20[1] + 8) = puVar15;
        }
LAB_0011fc10:
        uVar14 = sljit_emit_label(piVar2);
        *(undefined8 *)(pauVar20[2] + 8) = uVar14;
        param_2 = puVar26 + 2;
      }
      goto joined_r0x0011e58b;
    case 0x76:
    case 0x77:
      param_2 = (uint *)compile_callout_matchingpath(param_1,puVar26,param_4);
    }
LAB_0011e5e8:
    if (param_2 == (uint *)0x0) {
switchD_0011e5ba_caseD_62:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    goto joined_r0x0011e58b;
  }
  if (uVar7 < 0x91) {
    if (uVar7 < 0x7f) goto switchD_0011e5ba_caseD_62;
    uVar11 = 1L << ((char)uVar7 + 0x81U & 0x3f);
    if ((uVar11 & 0x2b5f0) == 0) {
      if ((uVar11 & 0x14a00) != 0) goto switchD_0011e67b_caseD_99;
      if ((((uVar11 & 0xf) != 0) && (*piVar1 == 0)) &&
         (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar1,0x40), *piVar1 == 0)) {
        *pauVar12 = (undefined1  [16])0x0;
        pauVar12[1] = (undefined1  [16])0x0;
        pauVar12[2] = (undefined1  [16])0x0;
        pauVar12[3] = (undefined1  [16])0x0;
        uVar14 = *(undefined8 *)(param_4 + 0x10);
        *(uint **)pauVar12[2] = puVar26;
        *(undefined8 *)*pauVar12 = uVar14;
        *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
        goto LAB_0011e709;
      }
      goto switchD_0011e5ba_caseD_62;
    }
  }
  else {
    switch(uVar7) {
    case 0x97:
      if (puVar26[1] < 0x83) {
        if ((*piVar1 == 0) &&
           (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar1,0x40), *piVar1 == 0)) {
          *pauVar12 = (undefined1  [16])0x0;
          pauVar12[1] = (undefined1  [16])0x0;
          pauVar12[2] = (undefined1  [16])0x0;
          pauVar12[3] = (undefined1  [16])0x0;
          uVar14 = *(undefined8 *)(param_4 + 0x10);
          *(uint **)pauVar12[2] = puVar26;
          *(undefined8 *)*pauVar12 = uVar14;
          *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
LAB_0011e709:
          param_2 = (uint *)compile_assert_matchingpath(param_1,puVar26);
          goto LAB_0011e5e8;
        }
        goto switchD_0011e5ba_caseD_62;
      }
      break;
    case 0x98:
      if ((*piVar1 != 0) || (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar1,0x30), *piVar1 != 0)
         ) goto switchD_0011e5ba_caseD_62;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12[1] = (undefined1  [16])0x0;
      pauVar12[2] = (undefined1  [16])0x0;
      uVar14 = *(undefined8 *)(param_4 + 0x10);
      *(uint **)pauVar12[2] = puVar26;
      puVar26 = puVar26 + 1;
      *(undefined8 *)*pauVar12 = uVar14;
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
      do {
        puVar26 = puVar26 + puVar26[1];
      } while (*puVar26 == 0x78);
      uVar14 = *param_1;
      if (*puVar26 == 0x7b) {
        uVar16 = 0x10;
        sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f);
        uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
        piVar2 = (int *)*param_1;
        if ((*piVar2 == 0) &&
           (puVar15 = (undefined8 *)ensure_abuf(piVar2,0x18,uVar16), puVar15 != (undefined8 *)0x0))
        {
          *puVar15 = uVar14;
          uVar16 = sljit_emit_label(piVar2);
          uVar14 = param_1[0x26];
          puVar15[1] = uVar16;
          puVar15[2] = uVar14;
          param_1[0x26] = puVar15;
        }
        sljit_emit_op1(piVar1,0x20,0x8c,0,0x7f,0);
        sljit_emit_op1(piVar1,0x20,0x8c,8,2,0);
      }
      else {
        sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,8);
        uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
        piVar2 = (int *)*param_1;
        if ((*piVar2 == 0) &&
           (puVar15 = (undefined8 *)ensure_abuf(piVar2,0x18), puVar15 != (undefined8 *)0x0)) {
          *puVar15 = uVar14;
          uVar16 = sljit_emit_label(piVar2);
          uVar14 = param_1[0x26];
          puVar15[1] = uVar16;
          puVar15[2] = uVar14;
          param_1[0x26] = puVar15;
        }
        sljit_emit_op1(piVar1,0x20,0x8c,0,2,0);
      }
      uVar14 = sljit_emit_label(piVar1);
      *(undefined8 *)(pauVar12[2] + 8) = uVar14;
      piVar2 = (int *)*param_1;
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_non_cum_binary(piVar2,0x2d2b2928,10,0,10,0,0x7f,1);
      }
      uVar14 = sljit_emit_jump(piVar2,0);
      if (*piVar2 == 0) {
        lVar17 = *(long *)(piVar2 + 0x18);
        lVar18 = *(long *)(lVar17 + 8);
        uVar11 = lVar18 + 0x10;
        if (uVar11 < 0xff1) {
          *(ulong *)(lVar17 + 8) = uVar11;
          puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
        }
        else {
          puVar19 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar2 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
          if (puVar19 == (undefined8 *)0x0) {
            *piVar2 = 2;
            goto LAB_0011f550;
          }
          *puVar19 = *(undefined8 *)(piVar2 + 0x18);
          *(undefined8 **)(piVar2 + 0x18) = puVar19;
          puVar15 = puVar19 + 2;
          puVar19[1] = 0x10;
        }
        uVar16 = param_1[0x2f];
        *puVar15 = uVar14;
        puVar15[1] = uVar16;
        param_1[0x2f] = puVar15;
      }
LAB_0011f550:
      param_2 = puVar26 + 2;
      goto joined_r0x0011e58b;
    case 0x99:
switchD_0011e67b_caseD_99:
      piVar2 = (int *)*param_1;
      if ((*piVar2 != 0) || (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar2,0x38), *piVar2 != 0)
         ) goto switchD_0011e5ba_caseD_62;
      *(undefined8 *)pauVar12[3] = 0;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12[2] = (undefined1  [16])0x0;
      pauVar12[1] = (undefined1  [16])0x0;
      *(undefined8 *)*pauVar12 = *(undefined8 *)(param_4 + 0x10);
      uVar7 = *puVar26;
      *(uint **)pauVar12[2] = puVar26;
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
      bVar27 = uVar7 == 0x99;
      if (bVar27) {
        uVar7 = puVar26[1];
        puVar26 = puVar26 + 1;
      }
      local_b8 = (uint)bVar27;
      iVar8 = *(int *)((long)puVar26 + (param_1[3] - param_1[2]));
      *(int *)(pauVar12[2] + 8) = iVar8;
      local_78 = 0;
      if (uVar7 == 0x8d) {
LAB_001207b0:
        local_88 = puVar26 + 2;
        local_8c = get_framesize(param_1,puVar26,0,0,&local_44);
        *(int *)(pauVar12[2] + 0xc) = local_8c;
        if (-1 < local_8c) {
          local_78 = 0;
          iVar9 = 0;
          goto LAB_0011ecc9;
        }
        iVar9 = 0;
        local_90 = 1;
LAB_00120065:
        iVar10 = local_44;
        uVar14 = *param_1;
        local_90 = ((local_90 + 1) - (uint)(local_44 == 0)) + (uint)(local_b8 == 0);
        *(int *)pauVar12[3] = local_90;
        lVar17 = (long)(local_90 * 8);
        sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f);
        uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
        piVar24 = (int *)*param_1;
        if ((*piVar24 == 0) &&
           (puVar15 = (undefined8 *)ensure_abuf(piVar24,0x18,lVar17), puVar15 != (undefined8 *)0x0))
        {
          *puVar15 = uVar14;
          uVar16 = sljit_emit_label(piVar24);
          uVar14 = param_1[0x26];
          puVar15[1] = uVar16;
          puVar15[2] = uVar14;
          param_1[0x26] = puVar15;
        }
        if (local_8c == -1) {
          sljit_emit_op1(piVar2,0x20,0x8e,(long)iVar8,0xc,0);
        }
        if (iVar9 == 0) {
          if (iVar10 != 0) {
            sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)*(int *)((long)param_1 + 100));
          }
          sljit_emit_op1(piVar2,0x20,0x8c,0,2,0);
          local_80 = 1;
          if (iVar10 == 0) {
            if (local_b8 != 0) {
              iVar9 = 0;
              local_80 = local_b8;
              goto LAB_0011ee90;
            }
LAB_00120ec6:
            sljit_emit_op1(piVar2,0x20,0x8c,local_80 * 8,0x7f,1);
          }
          else {
LAB_00120188:
            iVar25 = local_80 * 8;
            iVar10 = local_80 + 1;
LAB_0012019a:
            if (local_b8 == 0) {
              sljit_emit_op1(piVar2,0x20,0x8c,iVar10 << 3,0x7f,1);
            }
            sljit_emit_op1(piVar2,0x20,0x8c,iVar25,4,0);
          }
          if (iVar9 == 0) goto LAB_0011ee90;
        }
        else {
          sljit_emit_op1(piVar2,0x20,1,0,0x8e,(long)(iVar9 * 8 + *(int *)((long)param_1 + 0x44)));
          sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)(iVar9 * 8 + 8 + *(int *)((long)param_1 + 0x44))
                        );
          sljit_emit_op1(piVar2,0x20,0x8c,0,1,0);
          if (*(int *)(param_1 + 0xd) != 0) {
            sljit_emit_op1(piVar2,0x20,1,0,0x8e);
          }
          sljit_emit_op1(piVar2,0x20,0x8c,8,4,0);
          if (iVar10 == 0) {
            if (*(int *)(param_1 + 0xd) != 0) goto LAB_0012116c;
            local_80 = 2;
          }
          else {
            sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)*(int *)((long)param_1 + 100));
            if (*(int *)(param_1 + 0xd) == 0) {
              local_80 = 2;
              iVar25 = 0x10;
              iVar10 = 3;
              goto LAB_0012019a;
            }
LAB_0012116c:
            sljit_emit_op1(piVar2,0x20,0x8c,0x10,1,0);
            local_80 = 3;
            if (iVar10 != 0) goto LAB_00120188;
          }
          if (local_b8 == 0) goto LAB_00120ec6;
        }
LAB_0011ee70:
        sljit_emit_op1(piVar2,0x20,0x8e,(long)local_78,2,0);
      }
      else {
        if (uVar7 < 0x8e) {
          if (uVar7 == 0x88) goto LAB_001207b0;
          if (uVar7 == 0x8a) goto LAB_0011fffe;
        }
        else if (uVar7 == 0x8f) {
LAB_0011fffe:
          local_88 = puVar26 + 3;
          local_78 = *(int *)(param_1 + 8) + puVar26[2] * 8;
          iVar9 = puVar26[2] * 2;
          local_8c = get_framesize(param_1,puVar26,0,0,&local_44);
          *(int *)(pauVar12[2] + 0xc) = local_8c;
          if (-1 < local_8c) goto LAB_0011ecc9;
          if (iVar9 == 0) {
            local_90 = 1;
          }
          else {
            local_90 = 3 - (uint)(*(int *)(param_1 + 0xd) == 0);
          }
          goto LAB_00120065;
        }
        local_8c = get_framesize(param_1,puVar26,0,0,&local_44);
        *(int *)(pauVar12[2] + 0xc) = local_8c;
        if (local_8c < 0) {
          iVar9 = 0;
          local_88 = (uint *)0x0;
          local_90 = 1;
          goto LAB_00120065;
        }
        local_78 = 0;
        iVar9 = 0;
        local_88 = (uint *)0x0;
LAB_0011ecc9:
        iVar10 = local_44;
        local_68 = ((local_b8 ^ 1) + local_8c + 2) - (uint)(local_44 == 0);
        if (iVar9 == 0) {
          local_90 = local_68 + 1;
        }
        else {
          local_90 = local_68;
          local_68 = local_68 + -1;
        }
        uVar14 = *param_1;
        *(int *)pauVar12[3] = local_90;
        sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f,(long)(local_90 << 3));
        uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
        piVar24 = (int *)*param_1;
        if ((*piVar24 == 0) &&
           (puVar15 = (undefined8 *)ensure_abuf(piVar24,0x18), puVar15 != (undefined8 *)0x0)) {
          *puVar15 = uVar14;
          uVar16 = sljit_emit_label(piVar24);
          uVar14 = param_1[0x26];
          puVar15[1] = uVar16;
          puVar15[2] = uVar14;
          param_1[0x26] = puVar15;
        }
        lVar17 = (long)iVar8;
        sljit_emit_op1(piVar2,0x20,1,0,0x8e,lVar17);
        if (iVar10 == 0) {
          sljit_emit_op2(piVar2,0x40,0x8e,lVar17,0xc,0,0x7f,(long)local_90 * 8);
          if (local_b8 == 0) {
            sljit_emit_op1(piVar2,0x20,0x8c,0,0x7f,1);
            local_80 = 0;
            uVar16 = 8;
            uVar5 = 1;
          }
          else {
            local_80 = 0xffffffff;
            uVar16 = 0;
            uVar5 = 0;
          }
        }
        else {
          sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)*(int *)((long)param_1 + 100));
          sljit_emit_op2(piVar2,0x40,0x8e,lVar17,0xc,0,0x7f,(long)local_90 * 8);
          if (local_b8 == 0) {
            sljit_emit_op1(piVar2,0x20,0x8c,0,0x7f,1);
            uVar16 = 0x10;
            uVar14 = 8;
            uVar5 = 2;
          }
          else {
            uVar16 = 8;
            uVar14 = 0;
            uVar5 = local_b8;
          }
          local_80 = (uint)(local_b8 == 0);
          sljit_emit_op1(piVar2,0x20,0x8c,uVar14,4,0);
        }
        if (iVar9 != 0) {
          sljit_emit_op1(piVar2,0x20,0x8c,uVar16,1,0);
          init_frame_isra_0(param_1,puVar26,0,local_68);
          goto LAB_0011ee70;
        }
        sljit_emit_op1(piVar2,0x20,0x8c,uVar16,2,0);
        sljit_emit_op1(piVar2,0x20,0x8c,uVar5 * 8 + 8,1,0);
        init_frame_isra_0(param_1,puVar26,0);
      }
LAB_0011ee90:
      param_2 = local_88;
      lVar17 = sljit_emit_label(piVar2);
      if (*puVar26 == 0x7c) {
        *(undefined8 *)(pauVar12[1] + 8) = 0;
        if (local_b8 == 0) {
          local_88 = (uint *)0x0;
          param_2 = puVar26 + 2;
LAB_0011f13d:
          if (local_8c < 0) {
            uVar14 = 0x8c;
            local_90 = local_90 * 8 + -8;
          }
          else {
            uVar14 = 0x84;
            local_90 = local_90 * -8;
          }
          uVar14 = sljit_emit_cmp(piVar2,1,uVar14,(long)local_90,0x7f,0);
          if (*piVar2 == 0) {
            lVar17 = *(long *)(piVar2 + 0x18);
            lVar18 = *(long *)(lVar17 + 8);
            uVar11 = lVar18 + 0x10;
            if (uVar11 < 0xff1) {
              *(ulong *)(lVar17 + 8) = uVar11;
              puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
            }
            else {
              puVar19 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
              if (puVar19 == (undefined8 *)0x0) {
                *piVar2 = 2;
                goto LAB_0011f20a;
              }
              *puVar19 = *(undefined8 *)(piVar2 + 0x18);
              *(undefined8 **)(piVar2 + 0x18) = puVar19;
              puVar15 = puVar19 + 2;
              puVar19[1] = 0x10;
            }
            uVar16 = *(undefined8 *)(pauVar12[1] + 8);
            *puVar15 = uVar14;
            puVar15[1] = uVar16;
            *(undefined8 **)(pauVar12[1] + 8) = puVar15;
          }
          goto LAB_0011f20a;
        }
        sljit_emit_label(piVar2);
        param_2 = puVar26 + 2;
      }
      else {
        iVar10 = (iVar9 + 1) * 8;
        local_88 = (uint *)0x0;
        do {
          pauVar12[1] = (undefined1  [16])0x0;
          puVar26 = puVar26 + puVar26[1];
          compile_matchingpath(param_1,param_2,puVar26);
          if (*piVar2 != 0) goto switchD_0011e5ba_caseD_62;
          if (local_8c < 0) {
            if (local_8c == -1) {
              sljit_emit_op1(piVar2,0x20,0xc,0,0x8e,(long)iVar8);
            }
            if (iVar9 == 0) {
              if (uVar7 == 0x8d) {
                sljit_emit_op1(piVar2,0x20,1,0,0x8c,0);
              }
              sljit_emit_op1(piVar2,0x20,0x8c,0,2,0);
            }
            else {
              sljit_emit_op1(piVar2,0x20,1,0,0x8e,(long)local_78);
              iVar25 = (iVar9 + 1) * 8;
              sljit_emit_op1(piVar2,0x20,0x8e,(long)(iVar25 + *(int *)((long)param_1 + 0x44)),2,0);
              sljit_emit_op1(piVar2,0x20,0x8e,(long)local_78,2,0);
              if (*(int *)(param_1 + 0xd) != 0) {
                sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)(param_1 + 0xd),0x7f,
                               (long)(iVar9 >> 1));
              }
              sljit_emit_op1(piVar2,0x20,0x8e,(long)(iVar25 + -8 + *(int *)((long)param_1 + 0x44)),1
                             ,0);
            }
            if (local_44 != 0) {
              sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c,
                             (long)(int)(local_80 * 8));
            }
            if (((uVar7 & 0xfffffffd) == 0x8d) &&
               (lVar18 = sljit_emit_cmp(piVar2,0,1,0,2), *piVar2 == 0)) {
              lVar3 = *(long *)(piVar2 + 0x18);
              lVar4 = *(long *)(lVar3 + 8);
              uVar11 = lVar4 + 0x10;
              if (uVar11 < 0xff1) {
                *(ulong *)(lVar3 + 8) = uVar11;
                plVar21 = (long *)(lVar3 + 0x10 + lVar4);
              }
              else {
                puVar15 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
                if (puVar15 == (undefined8 *)0x0) {
                  *piVar2 = 2;
                  goto LAB_001203c1;
                }
                *puVar15 = *(undefined8 *)(piVar2 + 0x18);
                *(undefined8 **)(piVar2 + 0x18) = puVar15;
                plVar21 = puVar15 + 2;
                puVar15[1] = 0x10;
              }
              *plVar21 = lVar18;
              plVar21[1] = (long)local_88;
              local_88 = (uint *)plVar21;
            }
LAB_001203c1:
            if (local_b8 == 0) {
              sljit_emit_op1(piVar2,0x20,0x8c,(long)(local_90 * 8 + -8),0x7f,0);
            }
          }
          else {
            if (iVar9 == 0) {
              sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)iVar8);
              sljit_emit_op2(piVar2,0x42,0xc,0,4,0,0x7f,(long)local_90 << 3);
              if (uVar7 == 0x8d) {
                sljit_emit_op1(piVar2,0x20,1,0,0x84,(long)((-2 - local_8c) * 8));
              }
              sljit_emit_op1(piVar2,0x20,0x84,(long)((-2 - local_8c) * 8),2,0);
            }
            else {
              sljit_emit_op2(piVar2,0x42,0xc,0,0x8e,(long)iVar8,0x7f,(long)local_90 << 3);
              sljit_emit_op1(piVar2,0x20,1,0,0x8e,(long)local_78);
              sljit_emit_op1(piVar2,0x20,0x8e,(long)(iVar10 + *(int *)((long)param_1 + 0x44)),2,0);
              sljit_emit_op1(piVar2,0x20,0x8e,(long)local_78,2,0);
              if (*(int *)(param_1 + 0xd) != 0) {
                sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)(param_1 + 0xd),0x7f,
                               (long)(iVar9 >> 1));
              }
              sljit_emit_op1(piVar2,0x20,0x8e,(long)(iVar10 + -8 + *(int *)((long)param_1 + 0x44)),1
                             ,0);
            }
            if (local_44 != 0) {
              sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c,
                             (long)(int)(local_80 * 8));
            }
            if (((uVar7 & 0xfffffffd) == 0x8d) &&
               (lVar18 = sljit_emit_cmp(piVar2,0,1,0,2), *piVar2 == 0)) {
              lVar3 = *(long *)(piVar2 + 0x18);
              lVar4 = *(long *)(lVar3 + 8);
              uVar11 = lVar4 + 0x10;
              if (uVar11 < 0xff1) {
                *(ulong *)(lVar3 + 8) = uVar11;
                plVar21 = (long *)(lVar3 + 0x10 + lVar4);
              }
              else {
                puVar15 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
                if (puVar15 == (undefined8 *)0x0) {
                  *piVar2 = 2;
                  goto joined_r0x00120571;
                }
                *puVar15 = *(undefined8 *)(piVar2 + 0x18);
                *(undefined8 **)(piVar2 + 0x18) = puVar15;
                plVar21 = puVar15 + 2;
                puVar15[1] = 0x10;
              }
              *plVar21 = lVar18;
              plVar21[1] = (long)local_88;
              local_88 = (uint *)plVar21;
            }
joined_r0x00120571:
            if (local_b8 == 0) {
              sljit_emit_op1(piVar2,0x20,0x8c,0,0x7f,0);
            }
          }
          lVar18 = sljit_emit_jump(piVar2,0x24);
          if ((lVar17 != 0) && (lVar18 != 0)) {
            *(long *)(lVar18 + 0x18) = lVar17;
            *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
          }
          flush_stubs(param_1);
          compile_backtrackingpath(param_1,*(undefined8 *)pauVar12[1]);
          if (*piVar2 != 0) goto switchD_0011e5ba_caseD_62;
          lVar18 = sljit_emit_label(piVar2);
          for (plVar21 = *(long **)(pauVar12[1] + 8); plVar21 != (long *)0x0;
              plVar21 = (long *)plVar21[1]) {
            lVar3 = *plVar21;
            if ((lVar3 != 0) && (lVar18 != 0)) {
              *(long *)(lVar3 + 0x18) = lVar18;
              *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          if (local_8c < 0) {
            if (iVar9 != 0) goto LAB_0011f0e8;
            lVar18 = 0;
            uVar14 = 0x8c;
          }
          else if (iVar9 == 0) {
            sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)iVar8);
            uVar14 = 0x84;
            lVar18 = (long)((-2 - local_8c) * 8);
          }
          else {
            if (*puVar26 == 0x7c) {
              sljit_emit_op1(piVar2,0x20,4,0,0x8e,(long)iVar8);
            }
LAB_0011f0e8:
            lVar18 = (long)local_78;
            uVar14 = 0x8e;
          }
          sljit_emit_op1(piVar2,0x20,2,0,uVar14,lVar18);
          param_2 = puVar26 + 2;
        } while (*puVar26 != 0x7c);
        *(undefined8 *)(pauVar12[1] + 8) = 0;
        if (local_b8 == 0) goto LAB_0011f13d;
LAB_0011f20a:
        lVar17 = sljit_emit_label(piVar2);
        if (local_88 != (uint *)0x0) {
          do {
            lVar18 = *(long *)local_88;
            if ((lVar18 != 0) && (lVar17 != 0)) {
              *(long *)(lVar18 + 0x18) = lVar17;
              *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
            }
            local_88 = *(uint **)((long)local_88 + 8);
          } while (local_88 != (uint *)0x0);
        }
      }
      piVar2 = (int *)*param_1;
      if (*piVar2 == 0) {
        piVar2[0x26] = 0;
        emit_non_cum_binary(piVar2,0x2d2b2928,10,0,10,0,0x7f,1);
      }
      uVar14 = sljit_emit_jump(piVar2,0);
      if (*piVar2 == 0) {
        lVar17 = *(long *)(piVar2 + 0x18);
        lVar18 = *(long *)(lVar17 + 8);
        uVar11 = lVar18 + 0x10;
        if (uVar11 < 0xff1) {
          *(ulong *)(lVar17 + 8) = uVar11;
          puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
        }
        else {
          puVar19 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar2 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
          if (puVar19 == (undefined8 *)0x0) {
            *piVar2 = 2;
            goto joined_r0x0011e58b;
          }
          *puVar19 = *(undefined8 *)(piVar2 + 0x18);
          *(undefined8 **)(piVar2 + 0x18) = puVar19;
          puVar15 = puVar19 + 2;
          puVar19[1] = 0x10;
        }
        uVar16 = param_1[0x2f];
        *puVar15 = uVar14;
        puVar15[1] = uVar16;
        param_1[0x2f] = puVar15;
      }
      goto joined_r0x0011e58b;
    case 0x9a:
      if ((*piVar1 != 0) || (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar1,0x28), *piVar1 != 0)
         ) goto switchD_0011e5ba_caseD_62;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12[1] = (undefined1  [16])0x0;
      *(undefined8 *)pauVar12[2] = 0;
      uVar14 = *(undefined8 *)(param_4 + 0x10);
      *(uint **)pauVar12[2] = puVar26;
      iVar8 = *(int *)(param_1 + 0xc);
      *(undefined8 *)*pauVar12 = uVar14;
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
      sljit_emit_op1(piVar1,0x20,4,0,0x8e,(long)iVar8);
      uVar14 = *param_1;
      lVar17 = (-(ulong)(*(int *)(param_1 + 0x16) == 0) & 0xffffffffffffffe0) + 0x28;
      sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f);
      uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
      piVar2 = (int *)*param_1;
      if ((*piVar2 == 0) &&
         (puVar15 = (undefined8 *)ensure_abuf(piVar2,0x18,lVar17), puVar15 != (undefined8 *)0x0)) {
        *puVar15 = uVar14;
        uVar16 = sljit_emit_label(piVar2);
        uVar14 = param_1[0x26];
        puVar15[1] = uVar16;
        puVar15[2] = uVar14;
        param_1[0x26] = puVar15;
      }
      sljit_emit_op1(piVar1,0x20,0x8c,(ulong)(*(int *)(param_1 + 0x16) != 0) << 5,4,0);
      sljit_emit_op1(piVar1,0x20,4,0,0x7f,puVar26 + 2);
      sljit_emit_op1(piVar1,0x20,0x8e,(long)*(int *)(param_1 + 0xc),4,0);
      sljit_emit_op1(piVar1,0x20,0x89,0x30,4,0);
      if (*(int *)(param_1 + 0x16) != 0) {
        sljit_emit_op1(piVar1,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 100));
        sljit_emit_op1(piVar1,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0xc,0);
        sljit_emit_op1(piVar1,0x20,0x8c,8,0x7f,0);
        sljit_emit_op1(piVar1,0x20,0x8c,0x10,0x7f,puVar26 + 2);
        sljit_emit_op1(piVar1,0x20,0x8c,0x18,2,0);
        sljit_emit_op1(piVar1,0x20,0x8c,0,1,0);
      }
      param_2 = puVar26 + (puVar26[1] + 3);
      goto joined_r0x0011e58b;
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa2:
      piVar2 = (int *)*param_1;
      param_2 = puVar26 + 1;
      if ((uVar7 - 0x9c < 7) && ((0x55UL >> ((ulong)(uVar7 - 0x9c) & 0x3f) & 1) != 0)) {
        param_2 = param_2 + (puVar26[1] + 2);
      }
      if ((*piVar2 != 0) || (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar2,0x28), *piVar2 != 0)
         ) goto switchD_0011e5ba_caseD_62;
      *(undefined8 *)pauVar12[2] = 0;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12[1] = (undefined1  [16])0x0;
      uVar14 = *(undefined8 *)(param_4 + 0x10);
      *(uint **)pauVar12[2] = puVar26;
      *(undefined8 *)*pauVar12 = uVar14;
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
      if (uVar7 == 0x9d) {
        uVar14 = *param_1;
        sljit_emit_op2(uVar14,0x42,0xc,0,0xc,0,0x7f);
        uVar14 = sljit_emit_cmp(uVar14,2,0xc,0,0xb,0);
        piVar24 = (int *)*param_1;
        if ((*piVar24 == 0) &&
           (puVar15 = (undefined8 *)ensure_abuf(piVar24,0x18), puVar15 != (undefined8 *)0x0)) {
          *puVar15 = uVar14;
          uVar16 = sljit_emit_label(piVar24);
          uVar14 = param_1[0x26];
          puVar15[1] = uVar16;
          puVar15[2] = uVar14;
          param_1[0x26] = puVar15;
        }
        sljit_emit_op1(piVar2,0x20,0x8c,0,2,0);
      }
      else if (((uVar7 & 0xfffffffd) == 0xa0) || (uVar7 == 0x9c)) {
        sljit_emit_op1(piVar2,0x20,4,0,0x7f,puVar26 + 2);
        sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)(param_1 + 0xc),4,0);
        sljit_emit_op1(piVar2,0x20,0x89,0x30,4,0);
      }
      goto joined_r0x0011e58b;
    case 0xa3:
    case 0xa4:
    case 0xa5:
      piVar2 = (int *)*param_1;
      if ((*piVar2 != 0) || (pauVar12 = (undefined1 (*) [16])ensure_abuf(piVar2,0x28), *piVar2 != 0)
         ) goto switchD_0011e5ba_caseD_62;
      *(undefined8 *)pauVar12[2] = 0;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12[1] = (undefined1  [16])0x0;
      uVar14 = *(undefined8 *)(param_4 + 0x10);
      *(uint **)pauVar12[2] = puVar26;
      *(undefined8 *)*pauVar12 = uVar14;
      uVar7 = *puVar26;
      *(undefined1 (**) [16])(param_4 + 0x10) = pauVar12;
      if (uVar7 == 0xa3) goto LAB_0011eb14;
      if (uVar7 == 0xa4) {
        if (param_1[0x28] == 0) {
          if ((*(byte *)(param_1[1] + 0x5b) & 0x20) != 0) {
            uVar14 = sljit_emit_cmp(piVar2,1,2,0,0xd,0);
            if (*piVar2 == 0) {
              lVar17 = *(long *)(piVar2 + 0x18);
              lVar18 = *(long *)(lVar17 + 8);
              uVar11 = lVar18 + 0x10;
              if (uVar11 < 0xff1) {
                *(ulong *)(lVar17 + 8) = uVar11;
                puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
              }
              else {
                puVar19 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
                if (puVar19 == (undefined8 *)0x0) {
                  *piVar2 = 2;
                  uVar7 = *puVar26;
                  goto LAB_0011e8d3;
                }
                *puVar19 = *(undefined8 *)(piVar2 + 0x18);
                *(undefined8 **)(piVar2 + 0x18) = puVar19;
                puVar15 = puVar19 + 2;
                puVar19[1] = 0x10;
              }
              uVar16 = param_1[0x3a];
              *puVar15 = uVar14;
              puVar15[1] = uVar16;
              param_1[0x3a] = puVar15;
            }
            uVar7 = *puVar26;
            goto LAB_0011e8d3;
          }
          lVar17 = param_1[0x24];
          goto LAB_0011e8f3;
        }
        lVar17 = param_1[0x24];
LAB_001202b1:
        if (lVar17 == 0) {
          uVar14 = sljit_emit_jump(piVar2,0x24);
          if (*piVar2 == 0) {
            lVar17 = *(long *)(piVar2 + 0x18);
            lVar18 = *(long *)(lVar17 + 8);
            uVar11 = lVar18 + 0x10;
            if (uVar11 < 0xff1) {
              *(ulong *)(lVar17 + 8) = uVar11;
              puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
            }
            else {
              puVar19 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
              if (puVar19 == (undefined8 *)0x0) goto LAB_00121342;
              *puVar19 = *(undefined8 *)(piVar2 + 0x18);
              *(undefined8 **)(piVar2 + 0x18) = puVar19;
              puVar15 = puVar19 + 2;
              puVar19[1] = 0x10;
            }
            uVar16 = param_1[0x2e];
            *puVar15 = uVar14;
            puVar15[1] = uVar16;
            param_1[0x2e] = puVar15;
          }
        }
        else {
          lVar18 = sljit_emit_jump(piVar2,0x24);
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x18) = lVar17;
            *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
      }
      else {
LAB_0011e8d3:
        lVar17 = param_1[0x24];
        if ((uVar7 == 0xa5) || (param_1[0x28] != 0)) goto LAB_001202b1;
LAB_0011e8f3:
        if (*(int *)(param_1 + 0x15) == 0) goto LAB_001202b1;
        if (lVar17 == 0) {
          uVar14 = sljit_emit_cmp(piVar2,1,2,0,0x8e,(long)*(int *)((long)param_1 + 0x44));
          if (*piVar2 == 0) {
            lVar17 = *(long *)(piVar2 + 0x18);
            lVar18 = *(long *)(lVar17 + 8);
            uVar11 = lVar18 + 0x10;
            if (uVar11 < 0xff1) {
              *(ulong *)(lVar17 + 8) = uVar11;
              puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
            }
            else {
              puVar19 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
              if (puVar19 == (undefined8 *)0x0) {
                *piVar2 = 2;
                goto LAB_0011e94c;
              }
              *puVar19 = *(undefined8 *)(piVar2 + 0x18);
              *(undefined8 **)(piVar2 + 0x18) = puVar19;
              puVar15 = puVar19 + 2;
              puVar19[1] = 0x10;
            }
            uVar16 = param_1[0x2e];
            *puVar15 = uVar14;
            puVar15[1] = uVar16;
            param_1[0x2e] = puVar15;
          }
        }
        else {
          lVar18 = sljit_emit_cmp(piVar2,1,2,0,0x8e,(long)*(int *)((long)param_1 + 0x44));
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x18) = lVar17;
            *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
LAB_0011e94c:
        sljit_emit_op1(piVar2,0x25,4,0,0x89,0x58);
        if (*piVar2 == 0) {
          piVar2[0x26] = 0;
          puVar13 = (undefined1 *)emit_x86_instruction(piVar2,1,0x7f,4,4,0);
          if (puVar13 != (undefined1 *)0x0) {
            *puVar13 = 0xf7;
          }
        }
        uVar14 = sljit_emit_jump(piVar2,1);
        if (*piVar2 == 0) {
          lVar17 = *(long *)(piVar2 + 0x18);
          uVar11 = *(long *)(lVar17 + 8) + 0x10;
          if (uVar11 < 0xff1) {
            puVar15 = (undefined8 *)(lVar17 + 0x10 + *(long *)(lVar17 + 8));
            uVar16 = *(undefined8 *)(pauVar12[1] + 8);
            *(ulong *)(lVar17 + 8) = uVar11;
            *puVar15 = uVar14;
            puVar15[1] = uVar16;
            *(undefined8 **)(pauVar12[1] + 8) = puVar15;
LAB_0011ea33:
            piVar2[0x26] = 0;
            puVar13 = (undefined1 *)emit_x86_instruction(piVar2,1,0x7f,8,4,0);
            if (puVar13 != (undefined1 *)0x0) {
              *puVar13 = 0xf7;
            }
          }
          else {
            puVar15 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
            if (puVar15 == (undefined8 *)0x0) {
              *piVar2 = 2;
            }
            else {
              uVar16 = *(undefined8 *)(pauVar12[1] + 8);
              *puVar15 = *(undefined8 *)(piVar2 + 0x18);
              iVar8 = *piVar2;
              *(undefined8 **)(piVar2 + 0x18) = puVar15;
              puVar15[1] = 0x10;
              puVar15[2] = uVar14;
              puVar15[3] = uVar16;
              *(undefined8 **)(pauVar12[1] + 8) = puVar15 + 2;
              if (iVar8 == 0) goto LAB_0011ea33;
            }
          }
        }
        lVar17 = param_1[0x24];
        if (lVar17 == 0) {
          uVar14 = sljit_emit_jump(piVar2,0);
          if (*piVar2 == 0) {
            lVar17 = *(long *)(piVar2 + 0x18);
            lVar18 = *(long *)(lVar17 + 8);
            uVar11 = lVar18 + 0x10;
            if (uVar11 < 0xff1) {
              *(ulong *)(lVar17 + 8) = uVar11;
              puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
            }
            else {
              puVar19 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
              if (puVar19 == (undefined8 *)0x0) {
                *piVar2 = 2;
                goto LAB_0011eaa4;
              }
              *puVar19 = *(undefined8 *)(piVar2 + 0x18);
              *(undefined8 **)(piVar2 + 0x18) = puVar19;
              puVar15 = puVar19 + 2;
              puVar19[1] = 0x10;
            }
            uVar16 = param_1[0x2e];
            *puVar15 = uVar14;
            puVar15[1] = uVar16;
            param_1[0x2e] = puVar15;
          }
        }
        else {
          lVar18 = sljit_emit_jump(piVar2,0);
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x18) = lVar17;
            *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
LAB_0011eaa4:
        sljit_emit_op1(piVar2,0x20,4,0,0x89,8);
        lVar17 = param_1[0x24];
        if (lVar17 == 0) {
          uVar14 = sljit_emit_cmp(piVar2,1,4,0,2,0);
          if (*piVar2 == 0) {
            lVar17 = *(long *)(piVar2 + 0x18);
            lVar18 = *(long *)(lVar17 + 8);
            uVar11 = lVar18 + 0x10;
            if (uVar11 < 0xff1) {
              *(ulong *)(lVar17 + 8) = uVar11;
              puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
            }
            else {
              puVar19 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
              if (puVar19 == (undefined8 *)0x0) {
                *piVar2 = 2;
                goto LAB_0011eb14;
              }
              *puVar19 = *(undefined8 *)(piVar2 + 0x18);
              *(undefined8 **)(piVar2 + 0x18) = puVar19;
              puVar15 = puVar19 + 2;
              puVar19[1] = 0x10;
            }
            uVar16 = param_1[0x2e];
            *puVar15 = uVar14;
            puVar15[1] = uVar16;
            param_1[0x2e] = puVar15;
          }
        }
        else {
          lVar18 = sljit_emit_cmp(piVar2,1,4,0,2,0);
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x18) = lVar17;
            *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
LAB_0011eb14:
        uVar14 = sljit_emit_jump(piVar2,0x24);
        if (*piVar2 == 0) {
          lVar17 = *(long *)(piVar2 + 0x18);
          lVar18 = *(long *)(lVar17 + 8);
          uVar11 = lVar18 + 0x10;
          if (uVar11 < 0xff1) {
            *(ulong *)(lVar17 + 8) = uVar11;
            puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar18);
LAB_0011eb8b:
            uVar16 = *(undefined8 *)(pauVar12[1] + 8);
            *puVar15 = uVar14;
            puVar15[1] = uVar16;
            *(undefined8 **)(pauVar12[1] + 8) = puVar15;
            goto LAB_001202ea;
          }
          puVar19 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar2 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
          if (puVar19 != (undefined8 *)0x0) {
            *puVar19 = *(undefined8 *)(piVar2 + 0x18);
            *(undefined8 **)(piVar2 + 0x18) = puVar19;
            puVar15 = puVar19 + 2;
            puVar19[1] = 0x10;
            goto LAB_0011eb8b;
          }
LAB_00121342:
          *piVar2 = 2;
        }
      }
LAB_001202ea:
      param_2 = puVar26 + 1;
      goto joined_r0x0011e58b;
    case 0xa6:
      param_2 = puVar26 + 2;
      if (param_1[0x28] == 0) {
        uVar7 = puVar26[1];
        uVar14 = *param_1;
        iVar8 = (uVar7 * 2 + 1) * 8;
        if (*(char *)(param_1[5] + (long)(int)uVar7) == '\0') {
          sljit_emit_op1(uVar14,0x20,1,0,0x8e,(long)(int)(*(int *)(param_1 + 8) + uVar7 * 8));
          sljit_emit_op1(uVar14,0x20,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar8),2,0);
          sljit_emit_op1(uVar14,0x20,0x8e,(long)(iVar8 + -8 + *(int *)((long)param_1 + 0x44)),1,0);
        }
        else {
          sljit_emit_op1(uVar14,0x20,0x8e,(long)(iVar8 + *(int *)((long)param_1 + 0x44)),2,0);
        }
      }
      goto joined_r0x0011e58b;
    case 0xa7:
      puVar26 = puVar26 + 1;
      do {
        puVar26 = puVar26 + puVar26[1];
      } while (*puVar26 == 0x78);
      param_2 = puVar26 + 2;
      goto joined_r0x0011e58b;
    default:
      goto switchD_0011e5ba_caseD_62;
    case 0xa9:
    case 0xaa:
      goto code_r0x0011ebbd;
    }
  }
  param_2 = (uint *)compile_bracket_matchingpath(param_1,puVar26,param_4);
  goto LAB_0011e5e8;
}



ulong compile_bracket_backtrackingpath(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 *puVar22;
  ulong uVar23;
  uint *puVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  long *plVar27;
  uint uVar28;
  int iVar29;
  undefined8 *extraout_RDX;
  undefined8 *extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 *extraout_RDX_03;
  undefined8 *extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 *extraout_RDX_06;
  ulong extraout_RDX_07;
  undefined8 *extraout_RDX_08;
  undefined8 *extraout_RDX_09;
  undefined8 extraout_RDX_10;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  uint *puVar33;
  uint uVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  undefined1 auVar38 [16];
  char cVar39;
  int local_cc;
  uint *local_c8;
  uint local_c0;
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
  
  puVar17 = *(uint **)(param_2 + 0x20);
  iVar16 = *(int *)(param_2 + 0x48);
  local_c0 = 0x87;
  puVar2 = (uint *)*param_1;
  uVar1 = *puVar17;
  puVar24 = puVar17 + 1;
  puVar33 = puVar17;
  if (uVar1 - 0x97 < 2) {
    puVar17 = puVar17 + 1;
    local_c0 = uVar1;
    uVar1 = *puVar24;
    puVar33 = puVar17;
  }
  do {
    uVar23 = (ulong)puVar17[1];
    puVar17 = puVar17 + uVar23;
    uVar34 = *puVar17;
  } while (uVar34 == 0x78);
  if (uVar34 == 0x79) {
    uVar23 = param_1[3];
    local_a8 = *(int *)((long)puVar17 + (uVar23 - param_1[2]));
    if (local_a8 == 0) {
      local_a4 = 0;
      bVar35 = false;
      local_cc = 0;
      bVar5 = false;
    }
    else {
      lVar18 = uVar23 - param_1[2];
      local_cc = *(int *)(lVar18 + 8 + (long)puVar17);
      local_a4 = *(int *)(lVar18 + 0xc + (long)puVar17);
      if (local_cc == 0x27) {
        bVar35 = true;
        uVar34 = 0x7a;
        bVar5 = true;
      }
      else {
        bVar35 = local_cc == 0x28;
        bVar5 = bVar35;
        if (bVar35) {
          uVar34 = 0x7b;
        }
      }
    }
  }
  else {
    bVar35 = false;
    local_a4 = 0;
    local_cc = 0;
    local_a8 = 0;
    bVar5 = true;
  }
  local_c8 = puVar33 + puVar33[1];
  uVar30 = *local_c8;
  if ((uVar1 == 0x90) || (uVar1 == 0x8b)) {
    uVar23 = (ulong)(puVar33[2] - 0x7f);
    if (puVar33[2] - 0x7f < 4) {
      if (uVar1 == 0x8b) {
        uVar23 = (ulong)(uVar30 - 0x7a);
        if (1 < uVar30 - 0x7a) {
          iVar29 = 0;
          if (uVar30 == 0x78) goto LAB_00121b1f;
          local_bc = 1;
          uVar30 = 1;
          local_b4 = 0;
          goto LAB_0012156f;
        }
      }
      else {
LAB_00121d3c:
        if (uVar30 == 0x78) {
          uVar1 = 0x90;
          goto LAB_00121d4d;
        }
      }
      local_bc = 1;
      uVar30 = 1;
      iVar29 = 0;
      uVar1 = 0x90;
      local_b4 = 0;
    }
    else {
      uVar23 = *(ulong *)(param_2 + 0x40);
      if (uVar1 == 0x8b) {
        if (uVar30 - 0x7a < 2) {
          iVar29 = 0;
          uVar30 = (uint)(uVar23 != 0);
          uVar1 = 0x90;
          local_b4 = 0;
          local_bc = uVar30;
        }
        else if (uVar23 == 0) {
          local_bc = 0;
          uVar30 = 0;
          iVar29 = 0;
          local_b4 = 0;
        }
        else {
          if (uVar30 == 0x78) goto LAB_00121d4d;
          local_bc = 1;
          uVar30 = 1;
          iVar29 = 0;
          local_b4 = 0;
        }
      }
      else {
        if (uVar23 != 0) goto LAB_00121d3c;
        local_bc = 0;
        uVar30 = 0;
        iVar29 = 0;
        uVar1 = 0x90;
        local_b4 = 0;
      }
    }
LAB_0012156f:
    if (!bVar35) goto LAB_00121578;
LAB_00121b6b:
    sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
    piVar31 = (int *)*param_1;
    if (*piVar31 == 0) {
      piVar31[0x26] = 0;
      iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
      if (iVar15 == 4) {
        emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
      }
    }
    if (local_cc != 0x27) {
      sljit_emit_op1(puVar2,0x20,0x8e,(long)local_a8,1,0);
      uVar23 = extraout_RDX_01;
      goto LAB_00121578;
    }
    sljit_emit_op2(puVar2,0x40,0x8e,(long)local_a8,1,0,0x7f,1);
    uVar23 = extraout_RDX_07;
    if (uVar34 != 0x7a) {
      if (uVar34 == 0x7b) {
        if (local_c0 != 0x98) {
          sljit_emit_op1(puVar2,0x20,2,0,0x8c,0);
          goto LAB_001232ae;
        }
        local_98 = sljit_emit_label(puVar2);
        goto LAB_00122b65;
      }
      if (local_c0 != 0x97) goto LAB_001215a5;
      goto LAB_00122c83;
    }
LAB_00121c60:
    if (local_c0 == 0x97) {
      sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
      piVar31 = (int *)*param_1;
      if (*piVar31 == 0) {
        piVar31[0x26] = 0;
        iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
        if (iVar15 == 4) {
          emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      uVar25 = 0;
LAB_00121d04:
      auVar38 = sljit_emit_cmp(puVar2,uVar25,1,0,0x7f,0);
      local_88 = 0;
      local_98 = 0;
    }
    else {
LAB_001215a5:
      local_88 = 0;
      local_98 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar23;
      auVar38 = auVar11 << 0x40;
    }
LAB_001215c0:
    local_90 = auVar38._0_8_;
    if (iVar29 != 0) {
LAB_001215c8:
      if (*(int *)(param_1 + 0xd) == 0) {
        auVar38._8_8_ = param_1[5];
        auVar38._0_8_ = local_90;
        if (*(char *)(param_1[5] + (long)(iVar29 >> 1)) == '\0') {
          sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
          sljit_emit_op1(puVar2,0x20,4,0,0x8c,8);
          piVar31 = (int *)*param_1;
          if (*piVar31 == 0) {
            piVar31[0x26] = 0;
            iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,0x10);
            if (iVar15 == 4) {
              emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,0x10);
            }
          }
          sljit_emit_op1(puVar2,0x20,0x8e,(long)(iVar29 * 8 + *(int *)((long)param_1 + 0x44)),1,0);
          sljit_emit_op1(puVar2,0x20,0x8e,(long)(iVar29 * 8 + 8 + *(int *)((long)param_1 + 0x44)),4,
                         0);
          auVar38._8_8_ = extraout_RDX_02;
        }
      }
      else {
        sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
        sljit_emit_op1(puVar2,0x20,4,0,0x8c,8);
        sljit_emit_op1(puVar2,0x20,0x8e,(long)*(int *)(param_1 + 0xd),1,0);
        sljit_emit_op1(puVar2,0x20,1,0,0x8c,0x10);
        piVar31 = (int *)*param_1;
        if (*piVar31 == 0) {
          piVar31[0x26] = 0;
          iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,0x18);
          if (iVar15 == 4) {
            emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,0x18);
          }
        }
        sljit_emit_op1(puVar2,0x20,0x8e,(long)(iVar29 * 8 + *(int *)((long)param_1 + 0x44)),4,0);
        sljit_emit_op1(puVar2,0x20,0x8e,(long)(iVar29 * 8 + 8 + *(int *)((long)param_1 + 0x44)),1,0)
        ;
        auVar38._8_8_ = extraout_RDX_05;
        auVar38._0_8_ = local_90;
      }
    }
    uVar25 = auVar38._8_8_;
    local_90 = auVar38._0_8_;
    if (uVar1 != 0x85) goto LAB_001215fa;
    if (-1 < *(int *)(param_2 + 0x40)) {
      sljit_emit_op1(puVar2,0x20,0xc,0,0x8e,(long)iVar16);
      uVar25 = sljit_emit_jump(puVar2,0x25);
      if (*puVar2 == 0) {
        lVar18 = *(long *)(puVar2 + 0x18);
        lVar21 = *(long *)(lVar18 + 8);
        uVar23 = lVar21 + 0x10;
        if (uVar23 < 0xff1) {
          *(ulong *)(lVar18 + 8) = uVar23;
          puVar19 = (undefined8 *)(lVar18 + 0x10 + lVar21);
        }
        else {
          puVar26 = (undefined8 *)
                    (*(code *)**(undefined8 **)(puVar2 + 0x12))
                              (0x1000,(*(undefined8 **)(puVar2 + 0x12))[2]);
          if (puVar26 == (undefined8 *)0x0) {
            *puVar2 = 2;
            goto LAB_00123431;
          }
          *puVar26 = *(undefined8 *)(puVar2 + 0x18);
          *(undefined8 **)(puVar2 + 0x18) = puVar26;
          puVar19 = puVar26 + 2;
          puVar26[1] = 0x10;
        }
        uVar20 = param_1[0x31];
        *puVar19 = uVar25;
        puVar19[1] = uVar20;
        param_1[0x31] = puVar19;
      }
LAB_00123431:
      sljit_emit_op2(puVar2,0x40,0xc,0,0xc,0,0x7f,(long)(*(int *)(param_2 + 0x40) + -1) << 3);
      uVar25 = extraout_RDX_10;
    }
    local_40 = sljit_emit_jump(puVar2,0x24,uVar25);
    local_50 = 0;
  }
  else {
    if ((uVar1 != 0x8e) && (uVar1 != 0x89)) {
      if (uVar30 == 0x78) {
LAB_00121d4d:
        iVar29 = 0;
        goto LAB_00121b1f;
      }
      local_bc = 0;
      uVar30 = 0;
      iVar29 = 0;
LAB_0012154c:
      local_b4 = 0;
      if (uVar1 == 0x85) {
        local_b4 = *(uint *)(param_2 + 0x40) & 1;
        *(int *)(param_2 + 0x40) = (int)*(uint *)(param_2 + 0x40) >> 1;
      }
      goto LAB_0012156f;
    }
    iVar29 = puVar33[2] * 2;
    if (uVar30 == 0x78) {
LAB_00121b1f:
      uVar30 = 1;
      puVar24 = local_c8;
      do {
        uVar23 = (ulong)puVar24[1];
        uVar30 = uVar30 + 1;
        puVar24 = puVar24 + uVar23;
      } while (*puVar24 == 0x78);
      local_bc = 1;
      goto LAB_0012154c;
    }
    local_bc = 0;
    uVar30 = 0;
    local_b4 = 0;
    if (bVar35) goto LAB_00121b6b;
LAB_00121578:
    if (uVar34 == 0x7a) goto LAB_00121c60;
    if (uVar34 != 0x7b) {
      if (local_c0 == 0x97) {
LAB_00122c83:
        sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
        piVar31 = (int *)*param_1;
        if (*piVar31 == 0) {
          piVar31[0x26] = 0;
          iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
          if (iVar15 == 4) {
            emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
          }
        }
        uVar25 = 1;
        goto LAB_00121d04;
      }
      if (local_cc == 0x29) {
        sljit_emit_op1(puVar2,0x20,0x8e,(long)local_a8,0x7f,1);
        auVar38 = sljit_emit_label(puVar2);
        local_88 = auVar38._0_8_;
        local_98 = 0;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = auVar38._8_8_;
        auVar38 = auVar6 << 0x40;
        goto LAB_001215c0;
      }
      goto LAB_001215a5;
    }
    if (local_c0 == 0x98) {
      auVar38 = sljit_emit_label(puVar2);
      local_98 = auVar38._0_8_;
      local_88 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar38._8_8_;
      auVar38 = auVar7 << 0x40;
      if (local_cc != 0) goto LAB_00122b65;
      goto LAB_001215c0;
    }
    sljit_emit_op1(puVar2,0x20,2,0,0x8c,0);
    if (local_cc != 0) {
LAB_001232ae:
      lVar18 = *(long *)(param_2 + 0x30);
      lVar21 = sljit_emit_cmp(puVar2,1,1,0,0x7f,0);
      if ((lVar21 != 0) && (lVar18 != 0)) {
        *(long *)(lVar21 + 0x18) = lVar18;
        *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if ((uVar1 != 0x85) && (piVar31 = (int *)*param_1, *piVar31 == 0)) {
        piVar31[0x26] = 0;
        iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
        if (iVar15 == 4) {
          emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
          local_98 = sljit_emit_label(puVar2);
          goto LAB_00122b65;
        }
      }
      local_98 = sljit_emit_label(puVar2);
LAB_00122b65:
      local_a0 = (long)local_a8;
      uVar23 = 1;
      sljit_emit_op2(puVar2,0x40,0x8e,local_a0,0x8e,local_a0,0x7f);
      local_88 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar23;
      auVar38 = auVar8 << 0x40;
      goto LAB_001215c0;
    }
    if ((0x8b < (int)uVar1) || (uVar1 == 0x85)) {
      lVar18 = (long)iVar16;
      if (uVar1 == 0x85) {
        if (*(int *)(param_2 + 0x40) < 0) {
          local_a0 = *(long *)(param_2 + 0x30);
          uVar25 = 0x8e;
        }
        else {
          sljit_emit_op1(puVar2,0x20,1,0,0x8e);
          local_a0 = *(long *)(param_2 + 0x30);
          uVar25 = 0x81;
          lVar18 = (long)((-2 - *(int *)(param_2 + 0x40)) * 8);
        }
        lVar18 = sljit_emit_cmp(puVar2,1,2,0,uVar25,lVar18);
        if ((local_a0 != 0) && (lVar18 != 0)) {
          *(long *)(lVar18 + 0x18) = local_a0;
          *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      else {
        lVar21 = *(long *)(param_2 + 0x30);
        lVar18 = sljit_emit_cmp(puVar2,1,2,0,0x8e,lVar18);
        if ((lVar21 != 0) && (lVar18 != 0)) {
          *(long *)(lVar18 + 0x18) = lVar21;
          *(ulong *)(lVar18 + 0x10) = *(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffd | 1;
        }
        piVar31 = (int *)*param_1;
        if (*piVar31 == 0) {
          piVar31[0x26] = 0;
          iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
          if (iVar15 == 4) {
            emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
            auVar38 = sljit_emit_label(puVar2);
            local_98 = auVar38._0_8_;
            local_88 = 0;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = auVar38._8_8_;
            auVar38 = auVar10 << 0x40;
            goto LAB_001215c0;
          }
        }
      }
      auVar38 = sljit_emit_label(puVar2);
      local_98 = auVar38._0_8_;
      local_88 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar38._8_8_;
      auVar38 = auVar9 << 0x40;
      goto LAB_001215c0;
    }
    lVar18 = *(long *)(param_2 + 0x30);
    lVar21 = sljit_emit_jump(puVar2,0x24);
    if ((lVar21 == 0) || (lVar18 == 0)) {
      local_98 = sljit_emit_label(puVar2);
    }
    else {
      *(long *)(lVar21 + 0x18) = lVar18;
      *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
      local_98 = sljit_emit_label(puVar2);
    }
    local_88 = 0;
    local_90 = 0;
    if (iVar29 != 0) goto LAB_001215c8;
LAB_001215fa:
    if ((uVar1 == 0x90) || (uVar1 == 0x8b)) {
      if (local_bc != 0) {
        sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
        piVar31 = (int *)*param_1;
        if (*piVar31 == 0) {
          piVar31[0x26] = 0;
          iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
          if (iVar15 == 4) {
            emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
          }
        }
        uVar30 = 2;
        local_50 = sljit_emit_cmp(puVar2,1,1,0,0x7f,0);
        local_40 = 0;
        goto LAB_0012163a;
      }
    }
    else if (local_bc != 0) {
      sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
      piVar31 = (int *)*param_1;
      if (*piVar31 == 0) {
        piVar31[0x26] = 0;
        iVar15 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
        if (iVar15 == 4) {
          emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      if ((int)uVar30 < 4) {
        local_50 = sljit_emit_cmp(puVar2,1,1,0,0x7f,0);
        local_40 = 0;
        goto LAB_0012163a;
      }
      if (*puVar2 == 0) {
        puVar2[0x26] = 1;
        puVar22 = (undefined1 *)emit_x86_instruction(puVar2,1,0,0,1,0);
        if (puVar22 != (undefined1 *)0x0) {
          puVar22[1] = puVar22[1] | 0x20;
          *puVar22 = 0xff;
        }
      }
      uVar25 = sljit_emit_label(puVar2);
      if (*(long *)(param_2 + 0x40) != 0) {
        *(undefined8 *)(*(long *)(param_2 + 0x40) + 8) = uVar25;
      }
      if ((*puVar2 == 0) &&
         (puVar22 = (undefined1 *)ensure_buf(puVar2,5), puVar22 != (undefined1 *)0x0)) {
        *puVar22 = 4;
        *(long *)(puVar2 + 0x20) = *(long *)(puVar2 + 0x20) + 4;
        *(undefined4 *)(puVar22 + 1) = 0xfa1e0ff3;
      }
    }
    local_40 = 0;
    local_50 = 0;
  }
LAB_0012163a:
  compile_backtrackingpath(param_1,*(undefined8 *)(param_2 + 0x10));
  if (*puVar2 != 0) {
    return (ulong)*puVar2;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar18 = sljit_emit_label(puVar2);
    plVar27 = *(long **)(param_2 + 0x18);
    if (plVar27 != (long *)0x0) {
      do {
        lVar21 = *plVar27;
        if ((lVar21 != 0) && (lVar18 != 0)) {
          *(long *)(lVar21 + 0x18) = lVar18;
          *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
        }
        plVar27 = (long *)plVar27[1];
      } while (plVar27 != (long *)0x0);
    }
  }
  iVar15 = iVar29 >> 1;
  if ((uVar1 == 0x8b) || (uVar1 == 0x90)) {
    lVar18 = *(long *)(param_2 + 0x40);
    if (puVar33[2] - 0x7f < 4) {
      if ((-1 < *(int *)(lVar18 + 0x30)) && ((puVar33[2] - 0x7f & 0xfffffffd) == 0)) {
        sljit_emit_op1(puVar2,0x20,0xc,0,0x8e,(long)*(int *)(lVar18 + 0x34));
        uVar25 = sljit_emit_jump(puVar2,0x25);
        if (*puVar2 == 0) {
          lVar21 = *(long *)(puVar2 + 0x18);
          lVar3 = *(long *)(lVar21 + 8);
          uVar23 = lVar3 + 0x10;
          if (uVar23 < 0xff1) {
            *(ulong *)(lVar21 + 8) = uVar23;
            puVar19 = (undefined8 *)(lVar21 + 0x10 + lVar3);
          }
          else {
            puVar26 = (undefined8 *)
                      (*(code *)**(undefined8 **)(puVar2 + 0x12))
                                (0x1000,(*(undefined8 **)(puVar2 + 0x12))[2]);
            if (puVar26 == (undefined8 *)0x0) {
              *puVar2 = 2;
              goto LAB_00123956;
            }
            *puVar26 = *(undefined8 *)(puVar2 + 0x18);
            *(undefined8 **)(puVar2 + 0x18) = puVar26;
            puVar19 = puVar26 + 2;
            puVar26[1] = 0x10;
          }
          uVar20 = param_1[0x31];
          *puVar19 = uVar25;
          puVar19[1] = uVar20;
          param_1[0x31] = puVar19;
        }
LAB_00123956:
        sljit_emit_op1(puVar2,0x20,1,0,0x8c,0xfffffffffffffff0);
        sljit_emit_op2(puVar2,0x40,0xc,0,0xc,0,0x7f,(long)(*(int *)(lVar18 + 0x30) + -1) << 3);
        sljit_emit_op1(puVar2,0x20,0x8e,(long)*(int *)(lVar18 + 0x34),1,0);
      }
      local_58 = sljit_emit_jump(puVar2,0x24);
      lVar18 = sljit_emit_label(puVar2);
      plVar27 = *(long **)(*(long *)(param_2 + 0x40) + 0x28);
      if (plVar27 != (long *)0x0) {
        do {
          lVar21 = *plVar27;
          if ((lVar21 != 0) && (lVar18 != 0)) {
            *(long *)(lVar21 + 0x18) = lVar18;
            *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar27 = (long *)plVar27[1];
        } while (plVar27 != (long *)0x0);
      }
LAB_001221ea:
      if (local_bc != 0) {
LAB_001216cc:
        bVar35 = local_cc == 0x28;
        local_78 = 0;
        bVar36 = local_c0 != 0x87;
        iVar13 = 1;
        uVar32 = (uint)bVar35;
        uVar28 = bVar35 + 1;
        if (!bVar36 && !bVar5) {
          uVar28 = uVar32;
        }
        uVar12 = *local_c8;
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined1 (*) [16])(param_2 + 8) = (undefined1  [16])0x0;
        if (uVar12 == 0x78) goto LAB_00121a10;
LAB_00121747:
        if (uVar1 == 0x85) {
          match_once_common(param_1,uVar34,*(undefined4 *)(param_2 + 0x40),iVar16,1,local_b4);
          puVar19 = extraout_RDX_03;
          goto LAB_0012283d;
        }
        if (local_cc == 0x28) goto LAB_00122844;
        uVar12 = uVar32;
        if (bVar36 || bVar5) {
          uVar12 = uVar28;
        }
        uVar4 = uVar12;
        if (iVar29 != 0) goto LAB_00122480;
LAB_00121788:
        uVar12 = uVar12 + 1;
        do {
          uVar25 = *param_1;
          sljit_emit_op2(uVar25,0x42,0xc,0,0xc,0,0x7f,(long)(int)(uVar12 << 3));
          auVar38 = sljit_emit_cmp(uVar25,2,0xc,0,0xb);
          puVar19 = auVar38._8_8_;
          piVar31 = (int *)*param_1;
          if ((*piVar31 == 0) &&
             (puVar19 = (undefined8 *)ensure_abuf(piVar31,0x18), puVar19 != (undefined8 *)0x0)) {
            *puVar19 = auVar38._0_8_;
            uVar20 = sljit_emit_label(piVar31);
            uVar25 = param_1[0x26];
            puVar19[1] = uVar20;
            puVar19[2] = uVar25;
            param_1[0x26] = puVar19;
          }
          do {
            if (local_cc == 0x28) {
              puVar19 = (undefined8 *)0x1;
              sljit_emit_op2(puVar2,0x42,0x8c,0,4,0,0x7f);
            }
            if (bVar36 || bVar5) {
              if (uVar34 == 0x79) {
                sljit_emit_op1(puVar2,0x20,0x8c,uVar32 * 8,0x7f);
                puVar19 = extraout_RDX_06;
              }
              else {
                sljit_emit_op1(puVar2,0x20,0x8c,bVar35 * '\b',2);
                puVar19 = extraout_RDX;
              }
            }
            if (iVar29 == 0) {
              if (uVar1 != 0x85) {
                lVar18 = (long)(int)(uVar4 << 3);
                if (3 < (int)uVar30) goto LAB_00122549;
LAB_001218b9:
                sljit_emit_op1(puVar2,0x20,0x8c,lVar18,0x7f);
                goto LAB_001218d6;
              }
              lVar18 = *(long *)(param_2 + 0x28);
              lVar21 = sljit_emit_jump(puVar2,0x24,puVar19);
              if ((lVar18 != 0) && (lVar21 != 0)) {
                *(long *)(lVar21 + 0x18) = lVar18;
                *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            else {
              iVar14 = match_capture_common(param_1,uVar4,iVar29,iVar16);
              if (uVar1 != 0x85) {
                lVar18 = (long)(iVar14 << 3);
                if ((int)uVar30 < 4) goto LAB_001218b9;
LAB_00122549:
                local_78 = sljit_emit_put_label_constprop_0(puVar2,lVar18);
              }
LAB_001218d6:
              if (((iVar29 != 0) && (uVar34 == 0x7a)) &&
                 (*(char *)(param_1[5] + (long)iVar15) != '\0')) {
                sljit_emit_op1(puVar2,0x20,0x8e,
                               (long)(*(int *)((long)param_1 + 0x44) + 8 + iVar29 * 8),2);
              }
              lVar18 = *(long *)(param_2 + 0x28);
              lVar21 = sljit_emit_jump(puVar2,0x24);
              if ((lVar18 != 0) && (lVar21 != 0)) {
                *(long *)(lVar21 + 0x18) = lVar18;
                *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
              }
              if (uVar1 != 0x85) {
                if ((int)uVar30 < 4) {
                  lVar18 = sljit_emit_label(puVar2);
                  if ((lVar18 != 0) && (local_50 != 0)) {
                    *(long *)(local_50 + 0x18) = lVar18;
                    *(ulong *)(local_50 + 0x10) =
                         *(ulong *)(local_50 + 0x10) & 0xfffffffffffffffd | 1;
                  }
                  iVar13 = iVar13 + 1;
                  if (iVar13 < (int)uVar30) {
                    local_50 = sljit_emit_cmp(puVar2,1,1,0,0x7f);
                  }
                }
                else {
                  uVar25 = sljit_emit_label(puVar2);
                  if (local_78 != 0) {
                    *(undefined8 *)(local_78 + 8) = uVar25;
                  }
                  if ((*puVar2 == 0) &&
                     (puVar22 = (undefined1 *)ensure_buf(puVar2,5), puVar22 != (undefined1 *)0x0)) {
                    *puVar22 = 4;
                    *(long *)(puVar2 + 0x20) = *(long *)(puVar2 + 0x20) + 4;
                    *(undefined4 *)(puVar22 + 1) = 0xfa1e0ff3;
                  }
                }
              }
            }
            compile_backtrackingpath(param_1,*(undefined8 *)(param_2 + 0x10));
            if (*puVar2 != 0) {
              return (ulong)*puVar2;
            }
            if (*(long *)(param_2 + 0x18) != 0) {
              lVar18 = sljit_emit_label(puVar2);
              plVar27 = *(long **)(param_2 + 0x18);
              if (plVar27 != (long *)0x0) {
                do {
                  lVar21 = *plVar27;
                  if ((lVar21 != 0) && (lVar18 != 0)) {
                    *(long *)(lVar21 + 0x18) = lVar18;
                    *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
                  }
                  plVar27 = (long *)plVar27[1];
                } while (plVar27 != (long *)0x0);
              }
            }
            if (*local_c8 != 0x78) {
              if (local_58 != 0) {
                if (((puVar33[2] & 0xfffffffd) == 0x80) &&
                   (lVar18 = *(long *)(param_2 + 0x40), -1 < *(int *)(lVar18 + 0x30))) {
                  sljit_emit_op1(puVar2,0x20,0xc,0,0x8e,(long)*(int *)(lVar18 + 0x34));
                  uVar25 = sljit_emit_jump(puVar2,0x25);
                  if (*puVar2 == 0) {
                    lVar21 = *(long *)(puVar2 + 0x18);
                    lVar3 = *(long *)(lVar21 + 8);
                    uVar23 = lVar3 + 0x10;
                    if (uVar23 < 0xff1) {
                      *(ulong *)(lVar21 + 8) = uVar23;
                      puVar19 = (undefined8 *)(lVar21 + 0x10 + lVar3);
                    }
                    else {
                      puVar26 = (undefined8 *)
                                (*(code *)**(undefined8 **)(puVar2 + 0x12))
                                          (0x1000,(*(undefined8 **)(puVar2 + 0x12))[2]);
                      if (puVar26 == (undefined8 *)0x0) {
                        *puVar2 = 2;
                        goto LAB_00123d50;
                      }
                      *puVar26 = *(undefined8 *)(puVar2 + 0x18);
                      *(undefined8 **)(puVar2 + 0x18) = puVar26;
                      puVar19 = puVar26 + 2;
                      puVar26[1] = 0x10;
                    }
                    uVar20 = param_1[0x31];
                    *puVar19 = uVar25;
                    puVar19[1] = uVar20;
                    param_1[0x31] = puVar19;
                  }
LAB_00123d50:
                  sljit_emit_op1(puVar2,0x20,1,0,0x8c,0xfffffffffffffff0);
                  sljit_emit_op2(puVar2,0x40,0xc,0,0xc,0,0x7f,
                                 (long)(*(int *)(lVar18 + 0x30) + -1) << 3);
                  sljit_emit_op1(puVar2,0x20,0x8e,(long)*(int *)(lVar18 + 0x34),1,0);
                }
                lVar18 = sljit_emit_label(puVar2);
                if (lVar18 != 0) {
                  *(long *)(local_58 + 0x18) = lVar18;
                  *(ulong *)(local_58 + 0x10) = *(ulong *)(local_58 + 0x10) & 0xfffffffffffffffd | 1
                  ;
                }
              }
              if ((iVar16 == 0) && (piVar31 = (int *)*param_1, *piVar31 == 0)) {
                piVar31[0x26] = 0;
                iVar13 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
                if (iVar13 == 4) {
                  emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
                }
              }
              goto LAB_00121e40;
            }
            *(undefined8 *)(param_2 + 0x18) = 0;
            *(undefined1 (*) [16])(param_2 + 8) = (undefined1  [16])0x0;
LAB_00121a10:
            puVar24 = local_c8 + 2;
            puVar17 = local_c8 + local_c8[1];
            if ((uVar1 != 0x81) && (uVar1 != 0x84)) {
              if ((uVar1 != 0x8b) && (uVar1 != 0x90)) {
                if (uVar1 != 0x85) {
                  sljit_emit_op1(puVar2,0x20,2,0);
                  goto LAB_00121a97;
                }
                sljit_emit_op1(puVar2,0x20,2,0);
              }
              uVar23 = compile_matchingpath(param_1,puVar24,puVar17,param_2);
              local_c8 = puVar17;
              if (*puVar2 != 0) {
                return uVar23;
              }
              goto LAB_00121747;
            }
            sljit_emit_op1(puVar2,0x20,2,0);
            if (local_c8[2] - 0x7d < 2) {
              bVar37 = local_c8[2] == 0x7e;
              puVar24 = (uint *)compile_reverse_matchingpath(param_1,puVar24,param_2);
            }
            else {
LAB_00121a97:
              bVar37 = false;
            }
            compile_matchingpath(param_1,puVar24,puVar17);
            if (*puVar2 != 0) {
              return (ulong)*puVar2;
            }
            if (uVar1 == 0x84) {
              if (bVar37) {
                uVar25 = sljit_emit_cmp(puVar2,2,2,0);
                lVar18 = *(long *)(param_2 + 0x10);
                if (*puVar2 == 0) {
                  lVar21 = *(long *)(puVar2 + 0x18);
                  lVar3 = *(long *)(lVar21 + 8);
                  uVar23 = lVar3 + 0x10;
                  if (uVar23 < 0xff1) {
                    *(ulong *)(lVar21 + 8) = uVar23;
                    puVar19 = (undefined8 *)(lVar21 + 0x10 + lVar3);
                  }
                  else {
                    puVar26 = (undefined8 *)
                              (*(code *)**(undefined8 **)(puVar2 + 0x12))
                                        (0x1000,(*(undefined8 **)(puVar2 + 0x12))[2]);
                    if (puVar26 == (undefined8 *)0x0) {
                      *puVar2 = 2;
                      goto LAB_00123263;
                    }
                    *puVar26 = *(undefined8 *)(puVar2 + 0x18);
                    *(undefined8 **)(puVar2 + 0x18) = puVar26;
                    puVar19 = puVar26 + 2;
                    puVar26[1] = 0x10;
                  }
                  uVar20 = *(undefined8 *)(lVar18 + 8);
                  *puVar19 = uVar25;
                  puVar19[1] = uVar20;
                  *(undefined8 **)(lVar18 + 8) = puVar19;
                }
              }
LAB_00123263:
              puVar19 = (undefined8 *)param_1[3];
              local_c8 = puVar17;
              if (*(int *)((long)puVar19 + (long)puVar33 + (4 - param_1[2])) != 0) {
                sljit_emit_op1(puVar2,0x20,0xd);
                puVar19 = extraout_RDX_09;
              }
            }
            else if (uVar1 == 0x86) {
              match_script_run_common(param_1,iVar16,param_2);
              puVar19 = extraout_RDX_08;
              local_c8 = puVar17;
            }
            else {
              local_c8 = puVar17;
              if (uVar1 != 0x83) goto LAB_00121747;
              sljit_emit_op1(puVar2,0x20,2);
              puVar19 = extraout_RDX_00;
            }
LAB_0012283d:
            if (local_cc == 0x28) {
LAB_00122844:
              sljit_emit_op1(puVar2,0x20,4);
              puVar19 = extraout_RDX_04;
            }
            if (bVar36 || bVar5) {
              uVar12 = uVar28;
              if (iVar29 != 0) goto LAB_00122480;
joined_r0x00122880:
              uVar4 = uVar28;
              if (uVar1 != 0x85) goto LAB_00121788;
              break;
            }
            uVar12 = uVar32;
            uVar4 = uVar32;
            if (iVar29 != 0) {
LAB_00122480:
              puVar19 = (undefined8 *)param_1[5];
              uVar12 = (uVar28 + 1) - (uint)(*(int *)(param_1 + 0xd) == 0);
              uVar4 = uVar28;
              if (*(char *)((long)puVar19 + (long)iVar15) == '\0') {
                uVar12 = uVar12 + 2;
                goto joined_r0x00122880;
              }
            }
            if (uVar1 != 0x85) goto LAB_00121788;
          } while (uVar12 == 0);
        } while( true );
      }
      if (iVar29 == 0) goto LAB_00121e5c;
      goto LAB_00122202;
    }
    if (lVar18 != 0) {
      local_58 = sljit_emit_jump(puVar2,0x24);
      lVar18 = sljit_emit_label(puVar2);
      plVar27 = *(long **)(param_2 + 0x40);
      if (plVar27 != (long *)0x0) {
        do {
          lVar21 = *plVar27;
          if ((lVar21 != 0) && (lVar18 != 0)) {
            *(long *)(lVar21 + 0x18) = lVar18;
            *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar27 = (long *)plVar27[1];
        } while (plVar27 != (long *)0x0);
      }
      goto LAB_001221ea;
    }
    local_58 = 0;
    if (local_bc != 0) goto LAB_001216cc;
    if (iVar29 != 0) goto LAB_00122202;
LAB_00121e6f:
    uVar23 = 1L << ((byte)(uVar1 - 0x83) & 0x3f);
    if ((uVar23 & 0x220b) != 0) {
LAB_00122f64:
      uVar23 = sljit_emit_op1(puVar2,0x20,0x8e,(long)iVar16,0x8c,0);
      piVar31 = (int *)*param_1;
      if (*piVar31 == 0) {
        piVar31[0x26] = 0;
        uVar23 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
        if ((int)uVar23 == 4) {
          uVar23 = 8;
LAB_00122fcc:
          emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f);
        }
      }
      goto LAB_0012230e;
    }
    if (uVar1 - 0x83 != 2) goto LAB_0012230e;
    if (*(int *)(param_2 + 0x40) < 0) {
      if ((uVar34 == 0x7a) || ((puVar33[puVar33[1]] == 0x78 && (uVar34 != 0x7b)))) {
        local_b4 = local_b4 + 1;
        goto LAB_00121ebb;
      }
      if (local_b4 != 0) goto LAB_00121ebb;
    }
    else {
      iVar29 = 2;
      if (uVar34 == 0x79) {
        iVar29 = (puVar33[puVar33[1]] == 0x78) + 1;
      }
      local_b4 = local_b4 + *(int *)(param_2 + 0x40) + iVar29;
LAB_00121ebb:
      piVar31 = (int *)*param_1;
      if (*piVar31 == 0) {
        piVar31[0x26] = 0;
        iVar29 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,(long)(int)(local_b4 << 3));
        if (iVar29 == 4) {
          emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,(long)(int)(local_b4 << 3));
        }
      }
    }
    lVar18 = sljit_emit_label(puVar2);
    if ((lVar18 != 0) && (local_40 != 0)) {
      *(long *)(local_40 + 0x18) = lVar18;
      *(ulong *)(local_40 + 0x10) = *(ulong *)(local_40 + 0x10) & 0xfffffffffffffffd | 1;
    }
    uVar30 = *(uint *)(param_2 + 0x40);
    uVar23 = (ulong)uVar30;
    if (-1 < (int)uVar30) {
      uVar23 = sljit_emit_op1(puVar2,0x20,0x8e,(long)iVar16,0x8c,(long)(int)(~uVar30 * 8));
      goto LAB_0012230e;
    }
    if (uVar34 == 0x7b) {
      sljit_emit_op1(puVar2,0x20,1,0,0x8c,8);
      piVar31 = (int *)*param_1;
      if (*piVar31 == 0) {
        piVar31[0x26] = 0;
        iVar29 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,0x10);
        if (iVar29 == 4) {
          emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,0x10);
        }
      }
      sljit_emit_op1(puVar2,0x20,0x8e,(long)iVar16,1,0);
      if (local_cc == 0x29) goto LAB_00123562;
      sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
      goto LAB_00123bcf;
    }
    if (local_cc == 0x29) goto LAB_00123562;
    if (uVar34 != 0x7a) goto LAB_00121f8b;
LAB_00123117:
    sljit_emit_op1(puVar2,0x20,2,0,0x8c,0);
    if (local_c0 != 0x97) {
      piVar31 = (int *)*param_1;
      if (*piVar31 == 0) {
        piVar31[0x26] = 0;
        iVar16 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
        if (iVar16 == 4) {
          emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      lVar18 = *(long *)(param_2 + 0x30);
      uVar23 = sljit_emit_cmp(puVar2,1,2,0,0x7f,0);
      if (lVar18 == 0) {
        return uVar23;
      }
      if (uVar23 == 0) {
        return 0;
      }
      *(long *)(uVar23 + 0x18) = lVar18;
      *(ulong *)(uVar23 + 0x10) = *(ulong *)(uVar23 + 0x10) & 0xfffffffffffffffd | 1;
      return uVar23;
    }
    lVar18 = *(long *)(param_2 + 0x30);
    lVar21 = sljit_emit_cmp(puVar2,1,2,0,0x7f,0);
    if ((lVar21 != 0) && (lVar18 != 0)) {
      *(long *)(lVar21 + 0x18) = lVar18;
      *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
    }
    sljit_emit_op1(puVar2,0x20,2,0,0x8c,8);
    lVar18 = *(long *)(param_2 + 0x38);
    lVar21 = sljit_emit_jump(puVar2,0x24);
    if ((lVar18 != 0) && (lVar21 != 0)) {
      *(long *)(lVar21 + 0x18) = lVar18;
      *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
    }
    uVar23 = sljit_emit_label(puVar2);
    if ((uVar23 != 0) && (local_90 != 0)) {
      *(ulong *)(local_90 + 0x18) = uVar23;
      uVar23 = *(ulong *)(local_90 + 0x10) & 0xfffffffffffffffd | 1;
      *(ulong *)(local_90 + 0x10) = uVar23;
    }
  }
  else {
    if (local_bc != 0) {
      local_58 = 0;
      goto LAB_001216cc;
    }
LAB_00121e40:
    if (iVar29 == 0) {
      if (uVar1 == 0x84) {
        if (*(int *)((long)puVar33 + param_1[3] + (4 - param_1[2])) == 0) goto LAB_00122f64;
        sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
        sljit_emit_op1(puVar2,0x20,4,0,0x8c,8);
        lVar18 = (long)iVar16 + 8;
        sljit_emit_op1(puVar2,0x20,0xd,0,0x8e,lVar18);
        sljit_emit_op1(puVar2,0x20,0x8e,(long)iVar16,1,0);
        uVar23 = sljit_emit_op1(puVar2,0x20,0x8e,lVar18,4,0);
        piVar31 = (int *)*param_1;
        if (*piVar31 == 0) {
          piVar31[0x26] = 0;
          uVar23 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,0x20);
          if ((int)uVar23 != 4) goto LAB_0012230e;
          uVar23 = 0x20;
          goto LAB_00122fcc;
        }
      }
      else {
LAB_00121e5c:
        uVar23 = (ulong)uVar1;
        if (uVar1 - 0x83 < 0xe) goto LAB_00121e6f;
      }
      goto LAB_0012230e;
    }
LAB_00122202:
    if (*(char *)(param_1[5] + (long)iVar15) == '\0') {
      sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
      piVar31 = (int *)*param_1;
      if (*piVar31 == 0) {
        piVar31[0x26] = 0;
        iVar29 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
        if (iVar29 == 4) {
          emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      uVar23 = sljit_emit_op1(puVar2,0x20,0x8e,(long)iVar16,1,0);
    }
    else {
      sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
      sljit_emit_op1(puVar2,0x20,4,0,0x8c,8);
      piVar31 = (int *)*param_1;
      if (*piVar31 == 0) {
        piVar31[0x26] = 0;
        iVar16 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,0x10);
        if (iVar16 == 4) {
          emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,0x10);
        }
      }
      sljit_emit_op1(puVar2,0x20,0x8e,(long)(*(int *)((long)param_1 + 0x44) + iVar29 * 8),1,0);
      uVar23 = sljit_emit_op1(puVar2,0x20,0x8e,
                              (long)(iVar29 * 8 + 8 + *(int *)((long)param_1 + 0x44)),4,0);
    }
LAB_0012230e:
    if (local_cc == 0x29) {
LAB_00123562:
      sljit_emit_op2(puVar2,0x40,1,0,0x8e,(long)local_a8,0x7f,1);
      sljit_emit_op1(puVar2,0x20,0x8e,(long)local_a8,1,0);
      uVar23 = sljit_emit_cmp(puVar2,5,1,0,0x7f,(long)local_a4);
      if ((uVar23 != 0) && (local_88 != 0)) {
        *(long *)(uVar23 + 0x18) = local_88;
        *(ulong *)(uVar23 + 0x10) = *(ulong *)(uVar23 + 0x10) & 0xfffffffffffffffd | 1;
      }
      return uVar23;
    }
    if (uVar34 == 0x7a) goto LAB_00123117;
    if (uVar34 != 0x7b) {
LAB_00121f8b:
      if (local_c0 != 0x97) {
        return uVar23;
      }
      sljit_emit_op1(puVar2,0x20,2,0,0x8c,0);
      lVar18 = *(long *)(param_2 + 0x38);
      lVar21 = sljit_emit_jump(puVar2,0x24);
      if ((lVar18 != 0) && (lVar21 != 0)) {
        *(long *)(lVar21 + 0x18) = lVar18;
        *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
      }
      uVar23 = sljit_emit_label(puVar2);
      if (local_90 == 0) {
        return uVar23;
      }
      if (uVar23 == 0) {
        return 0;
      }
      *(ulong *)(local_90 + 0x18) = uVar23;
      uVar23 = *(ulong *)(local_90 + 0x10) & 0xfffffffffffffffd | 1;
      *(ulong *)(local_90 + 0x10) = uVar23;
      return uVar23;
    }
    sljit_emit_op1(puVar2,0x20,1,0,0x8c,0);
    if (uVar1 == 0x85) {
LAB_00123bcf:
      uVar23 = sljit_emit_cmp(puVar2,1,1,0,0x7f,0);
      if ((uVar23 != 0) && (local_98 != 0)) {
        *(long *)(uVar23 + 0x18) = local_98;
        *(ulong *)(uVar23 + 0x10) = *(ulong *)(uVar23 + 0x10) & 0xfffffffffffffffd | 1;
        if (uVar1 != 0x85) goto LAB_001223fd;
      }
      piVar31 = (int *)*param_1;
      cVar39 = (local_c0 == 0x98) * '\b' + '\b';
      if (*piVar31 != 0) {
        return uVar23;
      }
      piVar31[0x26] = 0;
      uVar23 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,cVar39);
      if ((int)uVar23 != 4) {
        return uVar23;
      }
      goto LAB_00122457;
    }
    piVar31 = (int *)*param_1;
    if (*piVar31 == 0) {
      piVar31[0x26] = 0;
      iVar16 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
      if (iVar16 == 4) {
        emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,8);
      }
    }
    uVar23 = sljit_emit_cmp(puVar2,1,1,0,0x7f,0);
    if ((local_98 != 0) && (uVar23 != 0)) {
      *(long *)(uVar23 + 0x18) = local_98;
      *(ulong *)(uVar23 + 0x10) = *(ulong *)(uVar23 + 0x10) & 0xfffffffffffffffd | 1;
    }
LAB_001223fd:
    if (local_c0 != 0x98) {
      return uVar23;
    }
  }
  piVar31 = (int *)*param_1;
  if (*piVar31 != 0) {
    return uVar23;
  }
  piVar31[0x26] = 0;
  uVar23 = emit_lea_binary(piVar31,0xc,0,0xc,0,0x7f,8);
  if ((int)uVar23 != 4) {
    return uVar23;
  }
  cVar39 = '\b';
LAB_00122457:
  uVar23 = emit_cum_binary(piVar31,0x5030100,0xc,0,0xc,0,0x7f,cVar39);
  return uVar23;
}



/* WARNING: Type propagation algorithm not settling */

void compile_backtrackingpath(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long extraout_RDX;
  long extraout_RDX_00;
  int *piVar16;
  uint *puVar17;
  int *piVar18;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  long *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  piVar2 = (int *)*param_1;
  uVar3 = param_1[7];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    do {
      if (param_2[1] != 0) {
        lVar7 = sljit_emit_label(piVar2);
        plVar14 = (long *)param_2[1];
        if (plVar14 != (long *)0x0) {
          do {
            lVar11 = *plVar14;
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            plVar14 = (long *)plVar14[1];
          } while (plVar14 != (long *)0x0);
        }
      }
      puVar17 = (uint *)param_2[4];
      uVar5 = *puVar17;
      if (uVar5 < 0x90) {
        if (0x7e < uVar5) {
          uVar15 = 1L << ((char)uVar5 + 0x81U & 0x3f);
          if ((uVar15 & 0xb5f0) != 0) goto switchD_00123f71_caseD_90;
          if ((uVar15 & 0x14a00) != 0) {
            piVar16 = (int *)*param_1;
            if (-1 < *(int *)((long)param_2 + 0x2c)) goto LAB_00124c30;
            goto LAB_001249c8;
          }
          if ((uVar15 & 0xf) != 0) {
            compile_assert_backtrackingpath(param_1,param_2);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00124611;
          }
          goto switchD_00123ee0_caseD_78;
        }
        if (uVar5 < 0x6e) {
          if (uVar5 == 3) {
            sljit_emit_op1(piVar2,0x20,1,0,0x8c,0);
            piVar16 = (int *)*param_1;
            if (*piVar16 == 0) {
              piVar16[0x26] = 0;
              iVar4 = emit_lea_binary(piVar16,0xc,0,0xc,0,0x7f,8);
              if (iVar4 == 4) {
                emit_cum_binary(piVar16,0x5030100,0xc,0,0xc,0,0x7f,8);
              }
            }
            sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)((long)param_1 + 0x44),1,0);
          }
          else if (uVar5 - 0x21 < 0x41) goto switchD_00123ee0_caseD_6e;
          goto switchD_00123ee0_caseD_78;
        }
        switch(uVar5) {
        case 0x6e:
        case 0x6f:
        case 0x70:
switchD_00123ee0_caseD_6e:
          local_98 = 0;
          local_90 = (long *)0x0;
          piVar16 = (int *)*param_1;
          iVar4 = *(int *)((long)puVar17 + (param_1[3] - param_1[2]));
          if (iVar4 == 0) {
            local_c8 = 0x8c;
            iVar6 = 8;
          }
          else {
            local_c8 = 0x8e;
            iVar6 = iVar4 + 8;
          }
          uVar8 = get_iterator_parameters_constprop_0(param_1,puVar17,&local_a0);
          switch(local_a0) {
          case 0x21:
          case 0x27:
            if ((local_9c != 0x11) && (local_9c != 0x16)) {
              lVar7 = (long)iVar4;
              if (*(int *)(param_2 + 7) == 0) {
                sljit_emit_op1(piVar16,0x20,2,0,local_c8,lVar7);
                lVar11 = sljit_emit_cmp(piVar16,5,2,0,local_c8);
                sljit_emit_op2(*param_1,0x42,2,0,2,0,0x7f,4);
                sljit_emit_op1(piVar16,0x20,local_c8,lVar7);
                lVar7 = param_2[5];
                lVar9 = sljit_emit_jump(piVar16,0x24);
                if ((lVar7 != 0) && (lVar9 != 0)) {
                  *(long *)(lVar9 + 0x18) = lVar7;
                  *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              else {
                sljit_emit_op1(piVar16,0x20,2,0,local_c8,lVar7);
                sljit_emit_op1(piVar16,0x20,4,0,local_c8,(long)iVar6);
                sljit_emit_op2(piVar16,0x42,2,0,2,0,0x7f,4);
                lVar11 = sljit_emit_cmp(piVar16,5,2,0,4,0);
                lVar9 = sljit_emit_label(piVar16);
                sljit_emit_op1(piVar16,0x25,1,0,0x82,0xfffffffffffffffc);
                sljit_emit_op1(piVar16,0x20,local_c8,lVar7,2,0);
                iVar6 = *(int *)(param_2 + 6);
                if ((iVar6 != 0) && (*piVar16 == 0)) {
                  piVar16[0x26] = 0;
                  emit_cum_binary(piVar16,0xd0b0908,1,0,1,0,0x7f,iVar6);
                }
                lVar7 = param_2[5];
                lVar12 = sljit_emit_cmp(piVar16,0,1,0,0x7f);
                if ((lVar12 != 0) && (lVar7 != 0)) {
                  *(long *)(lVar12 + 0x18) = lVar7;
                  *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
                }
                sljit_emit_op2(*param_1,0x42,2,0,2,0,0x7f,4);
                lVar7 = sljit_emit_cmp(piVar16,4,2);
                if ((lVar7 != 0) && (lVar9 != 0)) {
                  *(long *)(lVar7 + 0x18) = lVar9;
                  *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
                }
              }
              lVar7 = sljit_emit_label(piVar16);
              if ((lVar7 != 0) && (lVar11 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
              goto LAB_00125285;
            }
            lVar7 = sljit_emit_label(piVar16);
            for (plVar14 = (long *)param_2[6]; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1])
            {
              lVar11 = *plVar14;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op1(piVar16,0x20,2,0,0x8c);
            piVar18 = (int *)*param_1;
            if (*piVar18 == 0) {
              piVar18[0x26] = 0;
              iVar4 = emit_lea_binary(piVar18,0xc,0,0xc,0,0x7f,8);
              if (iVar4 == 4) {
                emit_cum_binary(piVar18,0x5030100,0xc,0,0xc,0,0x7f,8);
              }
            }
            lVar7 = param_2[5];
            lVar11 = sljit_emit_cmp(piVar16,1,2);
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            break;
          case 0x22:
            sljit_emit_op1(piVar16,0x20,2,0,local_c8);
            compile_char1_matchingpath(param_1,local_9c,uVar8,&local_90,1);
            sljit_emit_op1(piVar16,0x20,local_c8,(long)iVar4);
            lVar7 = param_2[5];
            lVar11 = sljit_emit_jump(piVar16,0x24);
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_label(piVar16);
            for (plVar14 = local_90; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
              lVar11 = *plVar14;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            goto LAB_00125648;
          case 0x25:
            lVar9 = (long)iVar4;
            sljit_emit_op1(piVar16,0x20,2,0,local_c8,lVar9);
            sljit_emit_op1(piVar16,0x20,local_c8,lVar9,0x7f,0);
            lVar7 = param_2[5];
            lVar11 = sljit_emit_cmp(piVar16,1,2,0,0x7f,0);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar11 = sljit_emit_jump(piVar16,0x24);
            lVar7 = sljit_emit_label(piVar16);
            for (plVar14 = (long *)param_2[6]; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1])
            {
              lVar12 = *plVar14;
              if ((lVar12 != 0) && (lVar7 != 0)) {
                *(long *)(lVar12 + 0x18) = lVar7;
                *(ulong *)(lVar12 + 0x10) = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op1(piVar16,0x20,2,0,local_c8);
            sljit_emit_op1(piVar16,0x20,local_c8,lVar9);
            lVar7 = param_2[5];
            lVar9 = sljit_emit_jump(piVar16,0x24);
            if ((lVar7 != 0) && (lVar9 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar7;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_label(piVar16);
            lVar9 = lVar7;
            lVar12 = lVar11;
            goto joined_r0x0012562d;
          case 0x26:
            sljit_emit_op1(piVar16,0x20,2,0,local_c8);
            sljit_emit_op1(piVar16,0x20,local_c8,(long)iVar4,0x7f);
            lVar11 = sljit_emit_cmp(piVar16,0,2,0,0x7f);
            compile_char1_matchingpath(param_1,local_9c,uVar8,&local_90);
            lVar7 = param_2[5];
            lVar9 = sljit_emit_jump(piVar16,0x24);
            if ((lVar7 != 0) && (lVar9 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar7;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_label(piVar16);
            for (plVar14 = local_90; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
              lVar9 = *plVar14;
              if ((lVar9 != 0) && (lVar7 != 0)) {
                *(long *)(lVar9 + 0x18) = lVar7;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            lVar9 = sljit_emit_label(piVar16);
            lVar7 = lVar11;
            lVar12 = lVar9;
joined_r0x0012562d:
            if ((lVar12 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar9;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
LAB_00125648:
            if ((iVar4 == 0) && (piVar18 = (int *)*param_1, *piVar18 == 0)) {
              piVar18[0x26] = 0;
              iVar4 = emit_lea_binary(piVar18,0xc,0,0xc,0);
              if (iVar4 == 4) {
LAB_001252da:
                emit_cum_binary(piVar18,0x5030100,0xc);
              }
            }
            break;
          case 0x28:
            sljit_emit_op1(piVar16,0x20,1,0,local_c8,(long)iVar6);
            sljit_emit_op1(piVar16,0x20,2,0,local_c8);
            if (*piVar16 == 0) {
              piVar16[0x26] = 0;
              emit_non_cum_binary(piVar16,0x2d2b2928,1,0,1,0,0x7f,1);
            }
            lVar7 = sljit_emit_jump(piVar16,0);
            if (*piVar16 == 0) {
              lVar11 = *(long *)(piVar16 + 0x18);
              lVar9 = *(long *)(lVar11 + 8);
              uVar15 = lVar9 + 0x10;
              if (uVar15 < 0xff1) {
                *(ulong *)(lVar11 + 8) = uVar15;
                plVar14 = (long *)(lVar11 + 0x10 + lVar9);
              }
              else {
                puVar13 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar16 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar16 + 0x12))[2]);
                if (puVar13 == (undefined8 *)0x0) {
                  *piVar16 = 2;
                  goto LAB_00125451;
                }
                *puVar13 = *(undefined8 *)(piVar16 + 0x18);
                *(undefined8 **)(piVar16 + 0x18) = puVar13;
                plVar14 = puVar13 + 2;
                puVar13[1] = 0x10;
              }
              *plVar14 = lVar7;
              plVar14[1] = (long)local_90;
              local_90 = plVar14;
            }
LAB_00125451:
            sljit_emit_op1(piVar16,0x20,local_c8,(long)iVar6,1);
            compile_char1_matchingpath(param_1,local_9c,uVar8,&local_90,1);
            sljit_emit_op1(piVar16,0x20,local_c8,(long)iVar4);
            lVar7 = param_2[5];
            lVar11 = sljit_emit_jump(piVar16,0x24);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_label(piVar16);
            for (plVar14 = local_90; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
              lVar11 = *plVar14;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
LAB_00125285:
            if ((iVar4 != 0) || (piVar18 = (int *)*param_1, *piVar18 != 0)) break;
            piVar18[0x26] = 0;
            iVar4 = emit_lea_binary(piVar18,0xc,0,0xc,0,0x7f,0x10);
            if (iVar4 != 4) break;
            goto LAB_001252da;
          }
          lVar7 = sljit_emit_label(piVar16);
          plVar14 = (long *)param_2[3];
          if (plVar14 != (long *)0x0) {
            do {
              lVar11 = *plVar14;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
              plVar14 = (long *)plVar14[1];
            } while (plVar14 != (long *)0x0);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00124611;
          }
          break;
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
          uVar8 = *param_1;
          if ((*(byte *)((long)puVar17 + (-(ulong)(uVar5 - 0x71 < 2) & 0xfffffffffffffffc) + 0xc) &
              1) != 0) {
            sljit_emit_op1(uVar8,0x20,2,0,0x8c,0);
            lVar7 = param_2[5];
            lVar11 = sljit_emit_cmp(uVar8,1,2,0,0x7f,0);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_label(uVar8);
            for (plVar14 = (long *)param_2[3]; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1])
            {
              lVar11 = *plVar14;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op2(*param_1,0x40,0xc,0,0xc,0,0x7f,
                           (-(ulong)(uVar5 - 0x71 < 2) & 0xfffffffffffffff8) + 0x18);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00124611;
          }
          lVar7 = sljit_emit_label(uVar8);
          for (plVar14 = (long *)param_2[3]; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
            lVar11 = *plVar14;
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          sljit_emit_op1(uVar8,0x20,2,0,0x8c,0);
          sljit_emit_op2(*param_1,0x40,0xc,0,0xc,0,0x7f,8);
          lVar7 = param_2[5];
          lVar11 = sljit_emit_cmp(uVar8,1,2);
          if ((lVar11 != 0) && (lVar7 != 0)) {
            *(long *)(lVar11 + 0x18) = lVar7;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
          }
          break;
        case 0x75:
          piVar16 = (int *)*param_1;
          if (*(int *)(param_2 + 7) == 0) {
            lVar7 = param_2[6];
            lVar11 = *(long *)(lVar7 + 0x10);
            if (lVar11 == 0) {
              uVar8 = sljit_emit_jump(piVar16,0x25);
              if (*piVar16 == 0) {
                lVar11 = *(long *)(piVar16 + 0x18);
                lVar9 = *(long *)(lVar11 + 8);
                uVar15 = lVar9 + 0x10;
                if (uVar15 < 0xff1) {
                  *(ulong *)(lVar11 + 8) = uVar15;
                  puVar13 = (undefined8 *)(lVar11 + 0x10 + lVar9);
                }
                else {
                  puVar10 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar16 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar16 + 0x12))[2]);
                  if (puVar10 == (undefined8 *)0x0) {
                    *piVar16 = 2;
                    goto LAB_00124448;
                  }
                  *puVar10 = *(undefined8 *)(piVar16 + 0x18);
                  *(undefined8 **)(piVar16 + 0x18) = puVar10;
                  puVar13 = puVar10 + 2;
                  puVar10[1] = 0x10;
                }
                uVar1 = *(undefined8 *)(lVar7 + 0x20);
                *puVar13 = uVar8;
                puVar13[1] = uVar1;
                *(undefined8 **)(lVar7 + 0x20) = puVar13;
              }
            }
            else {
              lVar7 = sljit_emit_jump(piVar16,0x25);
              if (lVar7 != 0) {
                *(long *)(lVar7 + 0x18) = lVar11;
                *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
LAB_00124448:
            lVar7 = param_2[5];
            lVar11 = sljit_emit_cmp(piVar16,1,1);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          else {
            compile_backtrackingpath(param_1,param_2[2]);
          }
          lVar7 = sljit_emit_label(piVar16);
          plVar14 = (long *)param_2[3];
          if (plVar14 != (long *)0x0) {
            do {
              lVar11 = *plVar14;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
              plVar14 = (long *)plVar14[1];
            } while (plVar14 != (long *)0x0);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00124611;
          }
          break;
        case 0x76:
        case 0x77:
          goto switchD_00123ee0_caseD_76;
        case 0x7e:
          uVar8 = *param_1;
          sljit_emit_op1(uVar8,0x20,2,0,0x8c,0x10);
          lVar11 = sljit_emit_cmp(uVar8,3,2,0,0x8c);
          sljit_emit_op2(*param_1,0x40,2,0,2,0,0x7f,4);
          sljit_emit_op1(uVar8,0x20,0x8c,0x10,2,0);
          lVar7 = param_2[5];
          lVar9 = sljit_emit_jump(uVar8,0x24);
          if ((lVar7 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar7;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          lVar7 = sljit_emit_label(uVar8);
          if ((lVar11 != 0) && (lVar7 != 0)) {
            *(long *)(lVar11 + 0x18) = lVar7;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar14 = (long *)param_2[3];
          if (plVar14 != (long *)0x0) {
            do {
              lVar11 = *plVar14;
              if ((lVar11 != 0) && (lVar7 != 0)) {
                *(long *)(lVar11 + 0x18) = lVar7;
                *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
              }
              plVar14 = (long *)plVar14[1];
            } while (plVar14 != (long *)0x0);
            param_2 = (undefined8 *)*param_2;
            goto joined_r0x00124611;
          }
        }
        goto switchD_00123ee0_caseD_78;
      }
      switch(uVar5) {
      case 0x90:
switchD_00123f71_caseD_90:
        compile_bracket_backtrackingpath(param_1,param_2);
        param_2 = (undefined8 *)*param_2;
        break;
      default:
        goto switchD_00123ee0_caseD_78;
      case 0x97:
        puVar13 = param_2;
        if (puVar17[1] < 0x83) {
          compile_assert_backtrackingpath();
          param_2 = (undefined8 *)*param_2;
        }
        else {
LAB_001243c0:
          compile_bracket_backtrackingpath(param_1,puVar13);
          param_2 = (undefined8 *)*param_2;
        }
        break;
      case 0x98:
        param_2[3] = 0;
        *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
        if (0x82 < puVar17[1]) {
          compile_bracket_matchingpath(param_1,puVar17,param_2);
          puVar13 = (undefined8 *)param_2[2];
          goto LAB_001243c0;
        }
        local_50 = param_2[5];
        local_58 = 0;
        local_68._8_8_ = 0;
        local_68._0_8_ = puVar17;
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        compile_assert_matchingpath(param_1,puVar17,local_88);
        param_2 = (undefined8 *)*param_2;
        break;
      case 0x99:
        piVar16 = (int *)*param_1;
        if (*(int *)((long)param_2 + 0x2c) < 0) {
          uVar5 = puVar17[1];
          puVar17 = puVar17 + 1;
LAB_001249c8:
          if ((uVar5 == 0x8a) || (uVar5 == 0x8f)) {
            uVar5 = puVar17[2];
            sljit_emit_op1(piVar16,0x20,1,0,0x8c,0);
            sljit_emit_op1(piVar16,0x20,4,0,0x8c);
            sljit_emit_op1(piVar16,0x20,0x8e,
                           (long)(int)(*(int *)((long)param_1 + 0x44) + uVar5 * 0x10),1);
            if (*(int *)(param_1 + 0xd) != 0) {
              sljit_emit_op1(piVar16,0x20,1,0,0x8c,0x10);
            }
            sljit_emit_op1(piVar16,0x20,0x8e,
                           (long)(int)(uVar5 * 0x10 + 8 + *(int *)((long)param_1 + 0x44)),4,0);
            if (*(int *)(param_1 + 0xd) != 0) {
              sljit_emit_op1(piVar16,0x20,0x8e,(long)*(int *)(param_1 + 0xd),1,0);
            }
          }
          lVar7 = sljit_emit_label(piVar16);
          for (plVar14 = (long *)param_2[3]; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
            lVar11 = *plVar14;
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar11 + 0x18) = lVar7;
              *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          iVar4 = *(int *)(param_2 + 6);
          piVar16 = (int *)*param_1;
          if (*piVar16 == 0) {
            piVar16[0x26] = 0;
            iVar6 = emit_lea_binary(piVar16,0xc,0,0xc,0,0x7f,(long)(iVar4 * 8));
            if (iVar6 == 4) {
              emit_cum_binary(piVar16,0x5030100,0xc,0,0xc,0,0x7f,(long)(iVar4 * 8));
            }
          }
        }
        else {
LAB_00124c30:
          sljit_emit_op1(piVar16,0x20,0xc,0,0x8e,(long)*(int *)(param_2 + 5));
          uVar8 = sljit_emit_jump(piVar16,0x25);
          if (*piVar16 == 0) {
            lVar7 = *(long *)(piVar16 + 0x18);
            lVar11 = *(long *)(lVar7 + 8);
            uVar15 = lVar11 + 0x10;
            if (uVar15 < 0xff1) {
              *(ulong *)(lVar7 + 8) = uVar15;
              puVar13 = (undefined8 *)(lVar7 + 0x10 + lVar11);
            }
            else {
              puVar10 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar16 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar16 + 0x12))[2]);
              if (puVar10 == (undefined8 *)0x0) {
                *piVar16 = 2;
                goto LAB_00124cd0;
              }
              *puVar10 = *(undefined8 *)(piVar16 + 0x18);
              *(undefined8 **)(piVar16 + 0x18) = puVar10;
              puVar13 = puVar10 + 2;
              puVar10[1] = 0x10;
            }
            uVar1 = param_1[0x31];
            *puVar13 = uVar8;
            puVar13[1] = uVar1;
            param_1[0x31] = puVar13;
          }
LAB_00124cd0:
          sljit_emit_op2(piVar16,0x40,0xc,0,0xc,0,0x7f,
                         (long)(*(int *)((long)param_2 + 0x2c) + -1) << 3);
          if (param_2[3] != 0) {
            lVar7 = sljit_emit_jump(piVar16,0x24);
            lVar11 = sljit_emit_label(piVar16);
            for (plVar14 = (long *)param_2[3]; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1])
            {
              lVar9 = *plVar14;
              if ((lVar9 != 0) && (lVar11 != 0)) {
                *(long *)(lVar9 + 0x18) = lVar11;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            piVar18 = (int *)*param_1;
            iVar4 = *(int *)(param_2 + 6);
            if (*piVar18 == 0) {
              piVar18[0x26] = 0;
              iVar6 = emit_lea_binary(piVar18,0xc,0,0xc,0,0x7f,(long)(iVar4 * 8));
              if (iVar6 == 4) {
                emit_cum_binary(piVar18,0x5030100,0xc,0,0xc,0,0x7f,(long)(iVar4 * 8));
              }
            }
            lVar11 = sljit_emit_label(piVar16);
            if ((lVar11 != 0) && (lVar7 != 0)) {
              *(long *)(lVar7 + 0x18) = lVar11;
              *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          sljit_emit_op1(piVar16,0x20,0x8e,(long)*(int *)(param_2 + 5),0x8c,
                         (long)(int)(~*(uint *)((long)param_2 + 0x2c) << 3));
        }
        goto switchD_00123ee0_caseD_78;
      case 0x9a:
        sljit_emit_op1(piVar2,0x20,1,0,0x8c,(ulong)(*(int *)(param_1 + 0x16) != 0) << 5);
        if ((*(int *)(param_1 + 0x16) == 0) ||
           (sljit_emit_op1(piVar2,0x20,4,0,0x8c,0), *(int *)(param_1 + 0x16) == 0)) {
          uVar8 = 8;
        }
        else {
          uVar8 = 0x28;
        }
        piVar16 = (int *)*param_1;
        if (*piVar16 == 0) {
          piVar16[0x26] = 0;
          iVar4 = emit_lea_binary(piVar16,0xc,0,0xc,0,0x7f,uVar8);
          if (iVar4 == 4) {
            emit_cum_binary(piVar16,0x5030100,0xc,0,0xc,0,0x7f,uVar8);
          }
        }
        sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)(param_1 + 0xc),1,0);
        if (*(int *)(param_1 + 0x16) != 0) {
          sljit_emit_op1(piVar2,0x20,0x8e,(long)*(int *)((long)param_1 + 100),4,0);
        }
        goto switchD_00123ee0_caseD_78;
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
        piVar16 = (int *)*param_1;
        if (uVar5 - 0x9f < 2) {
          if (param_1[7] == 0) {
            if (*(int *)((long)param_1 + 0xbc) != 0) goto LAB_00124eb6;
            if (*(int *)(param_1 + 0x18) == 0) goto LAB_00124e10;
            uVar8 = sljit_emit_jump(piVar16,0x24);
            if (*piVar16 == 0) {
              lVar7 = *(long *)(piVar16 + 0x18);
              lVar11 = *(long *)(lVar7 + 8);
              uVar15 = lVar11 + 0x10;
              if (uVar15 < 0xff1) {
                *(ulong *)(lVar7 + 8) = uVar15;
                puVar13 = (undefined8 *)(lVar7 + 0x10 + lVar11);
              }
              else {
                puVar10 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar16 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar16 + 0x12))[2]);
                if (puVar10 == (undefined8 *)0x0) goto LAB_00125dc9;
                *puVar10 = *(undefined8 *)(piVar16 + 0x18);
                *(undefined8 **)(piVar16 + 0x18) = puVar10;
                puVar13 = puVar10 + 2;
                puVar10[1] = 0x10;
              }
              uVar1 = param_1[0x2b];
              *puVar13 = uVar8;
              puVar13[1] = uVar1;
              param_1[0x2b] = puVar13;
            }
          }
          else {
            sljit_emit_op1(piVar16,0x20,0xc,0,0x8e,(long)*(int *)((long)param_1 + 100));
            sljit_emit_op1(piVar16,0x20,1,0,0x7f,1);
            sljit_emit_op1(piVar16,0x20,4,0,0x7f,*(undefined8 *)(param_1[7] + 0x30));
            lVar7 = sljit_emit_jump(piVar16,0x24);
            lVar11 = sljit_emit_label(piVar16);
            sljit_emit_op1(piVar16,0x20,0xc,0,0x8c,0);
            lVar9 = sljit_emit_label(piVar16);
            if ((lVar9 != 0) && (lVar7 != 0)) {
              *(long *)(lVar7 + 0x18) = lVar9;
              *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_cmp(piVar16,1,0x8c,8,1,0);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar7 + 0x18) = lVar11;
              *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
            }
            lVar7 = sljit_emit_cmp(piVar16,1,0x8c,0x10,4,0);
            if ((lVar7 != 0) && (lVar11 != 0)) {
              *(long *)(lVar7 + 0x18) = lVar11;
              *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
            }
            uVar8 = sljit_emit_jump(piVar16,0x24);
            lVar7 = param_1[7];
            if (*piVar16 == 0) {
              lVar11 = *(long *)(piVar16 + 0x18);
              lVar9 = *(long *)(lVar11 + 8);
              uVar15 = lVar9 + 0x10;
              if (uVar15 < 0xff1) {
                *(ulong *)(lVar11 + 8) = uVar15;
                puVar13 = (undefined8 *)(lVar11 + 0x10 + lVar9);
              }
              else {
                puVar10 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar16 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar16 + 0x12))[2]);
                if (puVar10 == (undefined8 *)0x0) goto LAB_00125dc9;
                *puVar10 = *(undefined8 *)(piVar16 + 0x18);
                *(undefined8 **)(piVar16 + 0x18) = puVar10;
                puVar13 = puVar10 + 2;
                puVar10[1] = 0x10;
              }
              uVar1 = *(undefined8 *)(lVar7 + 0x38);
              *puVar13 = uVar8;
              puVar13[1] = uVar1;
              *(undefined8 **)(lVar7 + 0x38) = puVar13;
            }
          }
        }
        else if (*(int *)((long)param_1 + 0xbc) == 0) {
          if (uVar5 == 0x9e) {
            sljit_emit_op1(piVar16,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 100));
            sljit_emit_op1(piVar16,0x20,2,0,0x7f,param_2[4] + 8);
            sljit_emit_icall_constprop_0_isra_0(piVar16,0x111,do_search_mark);
            sljit_emit_op1(piVar16,0x20,2,0,1,0);
            uVar8 = sljit_emit_cmp(piVar16,1,1,0,0x7f,0);
            iVar4 = *piVar16;
          }
          else {
            if (uVar5 == 0x9d) {
              uVar8 = 0x8c;
            }
            else {
LAB_00124e10:
              uVar8 = 0x7f;
            }
            sljit_emit_op1(piVar16,0x20,2,0,uVar8,0);
            uVar8 = sljit_emit_jump(piVar16,0x24);
            iVar4 = *piVar16;
          }
          if (iVar4 == 0) {
            lVar7 = *(long *)(piVar16 + 0x18);
            lVar11 = *(long *)(lVar7 + 8);
            uVar15 = lVar11 + 0x10;
            if (uVar15 < 0xff1) {
              *(ulong *)(lVar7 + 8) = uVar15;
              puVar13 = (undefined8 *)(lVar7 + 0x10 + lVar11);
            }
            else {
              puVar10 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar16 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar16 + 0x12))[2]);
              if (puVar10 == (undefined8 *)0x0) goto LAB_00125dc9;
              *puVar10 = *(undefined8 *)(piVar16 + 0x18);
              *(undefined8 **)(piVar16 + 0x18) = puVar10;
              puVar13 = puVar10 + 2;
              puVar10[1] = 0x10;
            }
            uVar1 = param_1[0x39];
            *puVar13 = uVar8;
            puVar13[1] = uVar1;
            param_1[0x39] = puVar13;
          }
        }
        else {
LAB_00124eb6:
          lVar7 = param_1[0x22];
          if (lVar7 != 0) goto LAB_001241e7;
          uVar8 = sljit_emit_jump(piVar16,0x24);
          if (*piVar16 == 0) {
            lVar7 = *(long *)(piVar16 + 0x18);
            lVar11 = *(long *)(lVar7 + 8);
            uVar15 = lVar11 + 0x10;
            if (uVar15 < 0xff1) goto LAB_001258e7;
            puVar13 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar16 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar16 + 0x12))[2]);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = *(undefined8 *)(piVar16 + 0x18);
              *(undefined8 **)(piVar16 + 0x18) = puVar13;
              puVar10 = puVar13 + 2;
              puVar13[1] = 0x10;
              goto LAB_0012499a;
            }
LAB_00125dc9:
            *piVar16 = 2;
          }
        }
        goto switchD_00123ee0_caseD_78;
      case 0xa1:
      case 0xa2:
        if (*(int *)((long)param_1 + 0xbc) == 0) {
          sljit_emit_op1(piVar2,0x20,1,0,0x7f,0xffffffffffffffff);
        }
        lVar7 = param_1[0x22];
        piVar16 = piVar2;
        if (lVar7 == 0) {
          uVar8 = sljit_emit_jump(piVar2,0x24);
          if (*piVar2 == 0) {
            lVar7 = *(long *)(piVar2 + 0x18);
            lVar11 = *(long *)(lVar7 + 8);
            uVar15 = lVar11 + 0x10;
            if (uVar15 < 0xff1) {
LAB_001258e7:
              *(ulong *)(lVar7 + 8) = uVar15;
              puVar10 = (undefined8 *)(lVar7 + 0x10 + lVar11);
            }
            else {
              puVar13 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar2 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar2 + 0x12))[2]);
              if (puVar13 == (undefined8 *)0x0) {
                *piVar2 = 2;
                goto switchD_00123ee0_caseD_78;
              }
              *puVar13 = *(undefined8 *)(piVar2 + 0x18);
              *(undefined8 **)(piVar2 + 0x18) = puVar13;
              puVar10 = puVar13 + 2;
              puVar13[1] = 0x10;
            }
LAB_0012499a:
            uVar1 = param_1[0x2a];
            *puVar10 = uVar8;
            puVar10[1] = uVar1;
            param_1[0x2a] = puVar10;
          }
        }
        else {
LAB_001241e7:
          lVar11 = sljit_emit_jump(piVar16,0x24);
          if (lVar11 != 0) {
            param_2 = (undefined8 *)*param_2;
            *(long *)(lVar11 + 0x18) = lVar7;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
            break;
          }
        }
switchD_00123ee0_caseD_78:
        param_2 = (undefined8 *)*param_2;
        break;
      case 0xa3:
      case 0xa4:
      case 0xa5:
switchD_00123ee0_caseD_76:
        lVar7 = sljit_emit_label(piVar2);
        plVar14 = (long *)param_2[3];
        if (plVar14 == (long *)0x0) goto switchD_00123ee0_caseD_78;
        do {
          lVar11 = *plVar14;
          if ((lVar11 != 0) && (lVar7 != 0)) {
            *(long *)(lVar11 + 0x18) = lVar7;
            *(ulong *)(lVar11 + 0x10) = *(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar14 = (long *)plVar14[1];
        } while (plVar14 != (long *)0x0);
        param_2 = (undefined8 *)*param_2;
        break;
      case 0xab:
        plVar14 = param_2 + 5;
        piVar16 = (int *)*param_1;
        if (*plVar14 == 0) {
          iVar4 = *(int *)(param_2 + 8);
          if (*(int *)(param_2 + 8) < 0) {
            iVar4 = 0;
          }
          sljit_emit_op1(piVar16,0x20,1,0,0x8c,(long)(iVar4 * 8));
          piVar18 = (int *)*param_1;
          lVar11 = (long)(iVar4 * 8 + 0x18);
          lVar7 = extraout_RDX;
          if (*piVar18 == 0) {
            piVar18[0x26] = 0;
            lVar7 = lVar11;
            iVar4 = emit_lea_binary(piVar18,0xc,0,0xc,0,0x7f);
            if (iVar4 == 4) {
              emit_cum_binary(piVar18,0x5030100,0xc,0,0xc,0,0x7f,lVar11);
              lVar7 = extraout_RDX_00;
            }
          }
          lVar7 = sljit_emit_jump(piVar16,0x24,lVar7);
          lVar11 = sljit_emit_label(piVar16);
          for (plVar14 = (long *)param_2[7]; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
            lVar9 = *plVar14;
            if ((lVar9 != 0) && (lVar11 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar11;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          if (-1 < *(int *)(param_2 + 8)) {
            uVar8 = sljit_emit_jump(piVar16,0x25);
            if (*piVar16 == 0) {
              lVar11 = *(long *)(piVar16 + 0x18);
              lVar9 = *(long *)(lVar11 + 8);
              uVar15 = lVar9 + 0x10;
              if (uVar15 < 0xff1) {
                *(ulong *)(lVar11 + 8) = uVar15;
                puVar13 = (undefined8 *)(lVar11 + 0x10 + lVar9);
              }
              else {
                puVar10 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar16 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar16 + 0x12))[2]);
                if (puVar10 == (undefined8 *)0x0) {
                  *piVar16 = 2;
                  goto LAB_00125e62;
                }
                *puVar10 = *(undefined8 *)(piVar16 + 0x18);
                *(undefined8 **)(piVar16 + 0x18) = puVar10;
                puVar13 = puVar10 + 2;
                puVar10[1] = 0x10;
              }
              uVar1 = param_1[0x31];
              *puVar13 = uVar8;
              puVar13[1] = uVar1;
              param_1[0x31] = puVar13;
            }
LAB_00125e62:
            sljit_emit_op2(piVar16,0x40,0xc,0,0xc,0,0x7f,(long)(*(int *)(param_2 + 8) + -1) << 3);
          }
          sljit_emit_op1(piVar16,0x20,1,0,0x8c,0);
          sljit_emit_op2(*param_1,0x40,0xc,0,0xc,0,0x7f,0x18);
          lVar11 = sljit_emit_label(piVar16);
          if ((lVar7 != 0) && (lVar11 != 0)) {
            *(long *)(lVar7 + 0x18) = lVar11;
            *(ulong *)(lVar7 + 0x10) = *(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(piVar16,0x20,0x8e,(long)*(int *)((long)param_1 + 100),1,0);
          goto switchD_00123ee0_caseD_78;
        }
        param_2 = (undefined8 *)*param_2;
        param_1[7] = *plVar14;
      }
joined_r0x00124611:
    } while (param_2 != (undefined8 *)0x0);
  }
  param_1[7] = uVar3;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint * compile_assert_matchingpath(undefined8 *param_1,uint *param_2,long param_3,uint param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long **pplVar24;
  long **pplVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint *puVar29;
  uint *puVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  long *plVar34;
  uint uVar35;
  ulong uVar36;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  int *piVar37;
  uint uVar38;
  long in_FS_OFFSET;
  undefined1 auVar39 [16];
  uint local_110;
  uint local_108;
  byte local_104;
  undefined8 local_f0;
  long local_88;
  undefined8 local_80;
  int local_74;
  long *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint *local_48;
  long local_40;
  
  piVar6 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (long *)0x0;
  pplVar24 = (long **)(param_3 + 0x28);
  if (param_4 == 0) {
    pplVar24 = (long **)(param_3 + 0x18);
  }
  uVar3 = *(undefined4 *)((long)param_1 + 0xbc);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = param_1[7];
  uVar8 = param_1[0x22];
  uVar9 = param_1[0x24];
  uVar10 = param_1[0x2a];
  uVar11 = param_1[0x2b];
  param_1[7] = 0;
  uVar12 = param_1[0x2e];
  local_108 = *param_2;
  if (local_108 - 0x97 < 2) {
    param_2 = param_2 + 1;
  }
  else {
    local_108 = 0x87;
  }
  iVar22 = *(int *)((long)param_2 + (param_1[3] - param_1[2]));
  iVar21 = iVar22;
  uVar17 = get_framesize(param_1,param_2,0,0,&local_74);
  *(ulong *)(param_3 + 0x30) = CONCAT44(iVar21,uVar17);
  uVar5 = *param_2;
  uVar18 = uVar5 - 0x7f & 0xfffffffd;
  pplVar25 = &local_70;
  if (uVar18 != 0) {
    pplVar25 = pplVar24;
  }
  uVar38 = param_2[1];
  puVar29 = param_2;
  if (local_108 == 0x98) {
    sljit_emit_op1(piVar6,0x20,2,0,0x8c,0);
    piVar37 = (int *)*param_1;
    if (*piVar37 == 0) {
      piVar37[0x26] = 0;
      iVar21 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,8);
      if (iVar21 == 4) {
        emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,8);
      }
    }
    local_88 = sljit_emit_cmp(piVar6,0,2,0,0x7f,0);
    if (uVar5 - 0x81 < 2) goto LAB_00126748;
    if ((int)uVar17 < 0) {
      if (local_74 != 0) {
        iVar21 = 0;
        local_110 = 1;
        goto LAB_0012663f;
      }
      iVar21 = 0;
      local_110 = 1;
      goto joined_r0x00127ae6;
    }
    iVar23 = 8;
    iVar21 = 0;
  }
  else {
    local_88 = 0;
    if (uVar5 - 0x81 < 2) {
LAB_00126748:
      do {
        if (puVar29[2] == 0x7e) {
          iVar21 = 3;
          goto joined_r0x0012675e;
        }
        puVar29 = puVar29 + puVar29[1];
      } while (*puVar29 == 0x78);
    }
    iVar21 = 0;
joined_r0x0012675e:
    if ((int)uVar17 < 0) {
      puVar29 = param_2 + 2;
      if (local_108 == 0x87) {
        do {
          while( true ) {
            uVar20 = *puVar29;
            if (uVar20 != 0x77) break;
            puVar29 = puVar29 + puVar29[3];
          }
          if (uVar20 < 0x78) {
            if (uVar20 < 0x1d) {
              if (uVar20 < 0x19) {
                uVar35 = uVar20 - 4;
                goto joined_r0x00126fd3;
              }
            }
            else if (uVar20 != 0x76) goto LAB_00127750;
          }
          else {
            if (uVar20 == 0x79) {
              local_110 = iVar21;
              if (local_74 != 0) goto LAB_0012663f;
              if (uVar17 == 0xffffffff) {
                sljit_emit_op1(piVar6,0x20,0x8e,(long)iVar22,0xc,0);
                if (iVar21 != 0) {
                  local_110 = 3;
                  goto LAB_00126f5a;
                }
              }
              else if (iVar21 != 0) {
                iVar21 = 3;
                local_110 = 3;
                goto LAB_00126f5a;
              }
              local_110 = 0;
              bVar14 = false;
              goto LAB_001262de;
            }
            if (0x79 < uVar20) {
              uVar35 = uVar20 - 0xa9;
joined_r0x00126fd3:
              if (1 < uVar35) goto LAB_00127750;
            }
          }
          puVar29 = puVar29 + (byte)(&_pcre2_OP_lengths_32)[uVar20];
        } while( true );
      }
      local_110 = iVar21 + 1;
      if (local_74 == 0) goto joined_r0x00127771;
      goto LAB_0012663f;
    }
    iVar23 = iVar21 * 8 + 8;
  }
  iVar16 = local_74;
  lVar26 = (long)iVar22;
  if (local_74 == 0) {
    local_110 = iVar21 + 2;
    sljit_emit_op1(piVar6,0x20,4,0,0xc,0);
    uVar32 = *param_1;
    iVar19 = local_110 + uVar17;
    sljit_emit_op2(uVar32,0x42,0xc,0,0xc,0,0x7f,(long)(iVar19 * 8));
    local_80 = sljit_emit_cmp(uVar32,2,0xc,0,0xb,0);
    piVar37 = (int *)*param_1;
    if (*piVar37 == 0) goto LAB_001261a5;
    sljit_emit_op1(piVar6,0x20,1,0,0x8e,lVar26);
    sljit_emit_op1(piVar6,0x20,0x8e,lVar26,4,0);
LAB_0012623e:
    sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
    sljit_emit_op1(piVar6,0x20,0x8c,iVar23,1,0);
  }
  else {
    local_110 = iVar21 + 3;
    sljit_emit_op1(piVar6,0x20,4,0,0xc,0);
    uVar32 = *param_1;
    iVar19 = local_110 + uVar17;
    sljit_emit_op2(uVar32,0x42,0xc,0,0xc,0,0x7f,(long)(iVar19 * 8));
    local_80 = sljit_emit_cmp(uVar32,2,0xc,0,0xb,0);
    piVar37 = (int *)*param_1;
    if (*piVar37 == 0) {
LAB_001261a5:
      puVar27 = (undefined8 *)ensure_abuf(piVar37,0x18);
      if (puVar27 != (undefined8 *)0x0) {
        *puVar27 = local_80;
        uVar28 = sljit_emit_label(piVar37);
        uVar32 = param_1[0x26];
        puVar27[1] = uVar28;
        puVar27[2] = uVar32;
        param_1[0x26] = puVar27;
      }
      sljit_emit_op1(piVar6,0x20,1,0,0x8e,lVar26);
      sljit_emit_op1(piVar6,0x20,0x8e,lVar26,4,0);
      if (iVar16 == 0) goto LAB_0012623e;
    }
    else {
      sljit_emit_op1(piVar6,0x20,1,0,0x8e,lVar26);
      sljit_emit_op1(piVar6,0x20,0x8e,lVar26,4,0);
    }
    sljit_emit_op1(piVar6,0x20,4,0,0x8e,(long)*(int *)((long)param_1 + 100));
    sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
    sljit_emit_op1(piVar6,0x20,0x8c,iVar21 * 8 + 0x10,1,0);
    sljit_emit_op1(piVar6,0x20,0x8c,iVar23,4,0);
    sljit_emit_op1(piVar6,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x7f,0);
  }
  init_frame_isra_0(param_1,param_2,0,iVar19 + -1);
LAB_00126299:
  bVar14 = true;
  if (iVar21 != 0) {
    sljit_emit_op1(piVar6,0x20,0x8c,8,0xd,0);
    sljit_emit_op1(piVar6,0x20,0xd,0,2,0);
  }
LAB_001262de:
  local_48 = (uint *)0x0;
  local_68 = (undefined1  [16])0x0;
  if ((param_4 != 0) || (bVar15 = false, (uVar5 & 0xfffffffd) == 0x80)) {
    *(undefined4 *)((long)param_1 + 0xbc) = 1;
    param_1[0x22] = 0;
    param_1[0x2a] = 0;
    bVar15 = true;
  }
  param_1[0x2b] = 0;
  *(uint *)(param_1 + 0x18) = (uint)(uVar18 == 0);
  uVar20 = *param_2;
  puVar29 = param_2 + uVar38;
  do {
    puVar30 = puVar29;
    param_1[0x24] = 0;
    param_1[0x2e] = 0;
    local_58 = (undefined1  [16])0x0;
    if ((uVar20 == 0x78) && (bVar14)) {
      sljit_emit_op1(piVar6,0x20,2,0,0x8c,0);
    }
    uVar38 = param_2[2];
    local_48 = param_2;
    if (1 < uVar38 - 0x7d) {
      compile_matchingpath(param_1,param_2 + 2,puVar30,local_68);
      if (*piVar6 == 0) goto LAB_001263eb;
LAB_00126a50:
      if (bVar15) {
        *(undefined4 *)((long)param_1 + 0xbc) = uVar3;
        param_1[0x22] = uVar8;
        param_1[0x2a] = uVar10;
      }
      puVar30 = (uint *)0x0;
      goto LAB_00126a86;
    }
    uVar32 = compile_reverse_matchingpath(param_1,param_2 + 2,local_68);
    compile_matchingpath(param_1,uVar32,puVar30,local_68);
    if (*piVar6 != 0) goto LAB_00126a50;
    if (uVar38 == 0x7e) {
      uVar28 = sljit_emit_cmp(piVar6,2,2,0,0xd);
      uVar32 = local_58._0_8_;
      if (*piVar6 == 0) {
        lVar26 = *(long *)(piVar6 + 0x18);
        lVar31 = *(long *)(lVar26 + 8);
        uVar36 = lVar31 + 0x10;
        if (uVar36 < 0xff1) {
          *(ulong *)(lVar26 + 8) = uVar36;
          puVar27 = (undefined8 *)(lVar26 + 0x10 + lVar31);
        }
        else {
          puVar33 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar6 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
          if (puVar33 == (undefined8 *)0x0) {
            *piVar6 = 2;
            goto LAB_001263eb;
          }
          *puVar33 = *(undefined8 *)(piVar6 + 0x18);
          puVar27 = puVar33 + 2;
          *(undefined8 **)(piVar6 + 0x18) = puVar33;
          puVar33[1] = 0x10;
        }
        uVar2 = *(undefined8 *)(uVar32 + 8);
        *puVar27 = uVar28;
        puVar27[1] = uVar2;
        *(undefined8 **)(uVar32 + 8) = puVar27;
      }
    }
LAB_001263eb:
    auVar39 = sljit_emit_label(piVar6);
    uVar36 = auVar39._8_8_;
    lVar26 = auVar39._0_8_;
    plVar34 = (long *)param_1[0x2e];
    param_1[0x24] = lVar26;
    if (plVar34 != (long *)0x0) {
      do {
        lVar31 = *plVar34;
        if ((lVar31 != 0) && (lVar26 != 0)) {
          *(long *)(lVar31 + 0x18) = lVar26;
          uVar36 = *(ulong *)(lVar31 + 0x10) & 0xfffffffffffffffd | 1;
          *(ulong *)(lVar31 + 0x10) = uVar36;
        }
        plVar34 = (long *)plVar34[1];
      } while (plVar34 != (long *)0x0);
    }
    uVar38 = uVar5 & 0xfffffffd;
    if ((int)uVar17 < 0) {
      if (uVar17 == 0xffffffff) {
        sljit_emit_op1(piVar6,0x20,0xc,0,0x8e,(long)iVar22);
        uVar36 = extraout_RDX_07;
      }
      else if (local_110 != 0) {
        piVar37 = (int *)*param_1;
        if (*piVar37 == 0) {
          piVar37[0x26] = 0;
          iVar23 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,local_110 << 3);
          uVar36 = extraout_RDX_05;
          if (iVar23 == 4) {
            emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,local_110 << 3);
            uVar36 = extraout_RDX_06;
          }
        }
      }
      if (iVar21 != 0) {
        sljit_emit_op1(piVar6,0x20,0xd,0,0x8c,(long)(int)((1 - local_110) * 8));
        uVar36 = extraout_RDX_04;
      }
      if (local_74 != 0) {
        sljit_emit_op1(piVar6,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c,0xfffffffffffffff8)
        ;
        uVar36 = extraout_RDX_03;
      }
      if (uVar38 == 0x80) {
        if (param_4 == 0) {
          if (local_108 == 0x97) {
            sljit_emit_op1(piVar6,0x20,2,0,0x8c,(long)(int)(local_110 * -8));
            goto LAB_001268c2;
          }
        }
        else {
LAB_001264bd:
          if (local_110 != 0) {
            sljit_emit_op1(piVar6,0x20,2,0,0x8c,
                           (long)(int)(((uint)(local_74 == 0) - iVar21) * 8 + -0x10));
            uVar36 = extraout_RDX;
          }
        }
      }
    }
    else {
      lVar26 = (long)iVar22;
      if ((uVar38 == 0x80) && ((param_4 & 1) == 0)) {
        sljit_emit_op1(piVar6,0x20,0xc,0,0x8e,lVar26);
        if (iVar21 != 0) {
          sljit_emit_op1(piVar6,0x20,0xd,0,0x8c,(long)(int)((-local_110 - uVar17) * 8 + 8));
        }
        if (local_74 != 0) {
          sljit_emit_op1(piVar6,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c,
                         (long)(int)((-2 - uVar17) * 8));
        }
        uVar32 = sljit_emit_jump(piVar6,0x25);
        if (*piVar6 == 0) {
          lVar31 = *(long *)(piVar6 + 0x18);
          lVar13 = *(long *)(lVar31 + 8);
          uVar36 = lVar13 + 0x10;
          if (uVar36 < 0xff1) {
            *(ulong *)(lVar31 + 8) = uVar36;
            puVar27 = (undefined8 *)(lVar31 + 0x10 + lVar13);
          }
          else {
            puVar33 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
            if (puVar33 == (undefined8 *)0x0) {
              *piVar6 = 2;
              goto LAB_001269dc;
            }
            *puVar33 = *(undefined8 *)(piVar6 + 0x18);
            *(undefined8 **)(piVar6 + 0x18) = puVar33;
            puVar27 = puVar33 + 2;
            puVar33[1] = 0x10;
          }
          uVar28 = param_1[0x31];
          *puVar27 = uVar32;
          puVar27[1] = uVar28;
          param_1[0x31] = puVar27;
        }
LAB_001269dc:
        sljit_emit_op2(piVar6,0x40,0xc,0,0xc,0,0x7f,(long)(int)(uVar17 - 1) << 3);
      }
      else {
        uVar36 = (long)(int)(uVar17 + 1) << 3;
        sljit_emit_op2(piVar6,0x42,0xc,0,0x8e,lVar26,0x7f);
        if (iVar21 != 0) {
          sljit_emit_op1(piVar6,0x20,0xd,0,0x8c,(long)(int)((2 - local_110) * 8));
          uVar36 = extraout_RDX_02;
        }
        if (local_74 != 0) {
          sljit_emit_op1(piVar6,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c,
                         0xfffffffffffffff8);
          uVar36 = extraout_RDX_01;
        }
        if (uVar38 != 0x80) goto LAB_00126500;
        if (param_4 != 0) goto LAB_001264bd;
      }
      if (local_108 == 0x97) {
        sljit_emit_op1(piVar6,0x20,1,0,0x8c,(long)(int)(~uVar17 << 3));
        sljit_emit_op1(piVar6,0x20,2,0,0x8c,(long)(int)((-local_110 - uVar17) * 8));
        sljit_emit_op1(piVar6,0x20,0x8e,lVar26,1,0);
LAB_001268c2:
        uVar36 = 8;
        sljit_emit_op2(piVar6,0x42,0xc,0,0xc,0,0x7f);
        sljit_emit_op1(piVar6,0x20,0x8c,0,0x7f,0);
      }
      else {
        sljit_emit_op1(piVar6,0x20,0x8e,lVar26,0x8c,(long)(int)(~uVar17 << 3));
        uVar36 = extraout_RDX_00;
      }
    }
LAB_00126500:
    lVar26 = sljit_emit_jump(piVar6,0x24,uVar36);
    if (*piVar6 == 0) {
      lVar31 = *(long *)(piVar6 + 0x18);
      lVar13 = *(long *)(lVar31 + 8);
      uVar36 = lVar13 + 0x10;
      if (uVar36 < 0xff1) {
        *(ulong *)(lVar31 + 8) = uVar36;
        plVar34 = (long *)(lVar31 + 0x10 + lVar13);
      }
      else {
        puVar27 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar6 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
        if (puVar27 == (undefined8 *)0x0) {
          *piVar6 = 2;
          goto LAB_0012657c;
        }
        *puVar27 = *(undefined8 *)(piVar6 + 0x18);
        *(undefined8 **)(piVar6 + 0x18) = puVar27;
        plVar34 = puVar27 + 2;
        puVar27[1] = 0x10;
      }
      plVar1 = *pplVar25;
      *plVar34 = lVar26;
      plVar34[1] = (long)plVar1;
      *pplVar25 = plVar34;
    }
LAB_0012657c:
    compile_backtrackingpath(param_1,local_58._0_8_);
    if (*piVar6 != 0) goto LAB_00126a50;
    lVar26 = sljit_emit_label(piVar6);
    for (plVar34 = (long *)local_58._8_8_; plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
      lVar31 = *plVar34;
      if ((lVar31 != 0) && (lVar26 != 0)) {
        *(long *)(lVar31 + 0x18) = lVar26;
        *(ulong *)(lVar31 + 0x10) = *(ulong *)(lVar31 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    if (*puVar30 != 0x78) goto LAB_001271ce;
    uVar20 = 0x78;
    puVar29 = puVar30 + puVar30[1];
    param_2 = puVar30;
  } while( true );
LAB_00127750:
  local_110 = iVar21 + 1;
  if (local_74 == 0) {
joined_r0x00127771:
    local_110 = iVar21 + 1;
joined_r0x00127ae6:
    if (uVar17 == 0xffffffff) {
      sljit_emit_op1(piVar6,0x20,0x8e,(long)iVar22,0xc,0);
    }
LAB_00126f5a:
    uVar32 = *param_1;
    sljit_emit_op2(uVar32,0x42,0xc,0,0xc,0,0x7f,local_110 << 3);
    auVar39 = sljit_emit_cmp(uVar32,2,0xc,0,0xb,0);
    piVar37 = (int *)*param_1;
    iVar23 = *piVar37;
    if (iVar23 == 0) goto LAB_001266b0;
LAB_00126704:
    sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
  }
  else {
LAB_0012663f:
    iVar23 = local_74;
    if (uVar17 == 0xffffffff) {
      sljit_emit_op1(piVar6,0x20,0x8e,(long)iVar22,0xc,0);
    }
    local_110 = local_110 + 1;
    uVar32 = *param_1;
    lVar26 = (long)(int)(local_110 * 8);
    sljit_emit_op2(uVar32,0x42,0xc,0,0xc,0,0x7f);
    uVar32 = sljit_emit_cmp(uVar32,2,0xc,0,0xb,0);
    auVar39._8_8_ = lVar26;
    auVar39._0_8_ = uVar32;
    piVar37 = (int *)*param_1;
    if (*piVar37 == 0) {
LAB_001266b0:
      local_f0 = auVar39._0_8_;
      puVar27 = (undefined8 *)ensure_abuf(piVar37,0x18,auVar39._8_8_);
      if (puVar27 != (undefined8 *)0x0) {
        *puVar27 = local_f0;
        uVar28 = sljit_emit_label(piVar37);
        uVar32 = param_1[0x26];
        puVar27[1] = uVar28;
        puVar27[2] = uVar32;
        param_1[0x26] = puVar27;
      }
      if (iVar23 == 0) goto LAB_00126704;
    }
    sljit_emit_op1(piVar6,0x20,1,0,0x8e,(long)*(int *)((long)param_1 + 100));
    sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
    sljit_emit_op1(piVar6,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x7f,0);
    sljit_emit_op1(piVar6,0x20,0x8c,iVar21 * 8 + 8,1,0);
  }
  goto LAB_00126299;
LAB_001271ce:
  lVar26 = param_1[0x2b];
  if (bVar15) {
    param_1[0x2b] = param_1[0x2a];
    lVar26 = param_1[0x2a];
  }
  if (lVar26 != 0) {
    lVar26 = sljit_emit_jump(piVar6,0x24);
    lVar31 = sljit_emit_label(piVar6);
    for (plVar34 = (long *)param_1[0x2b]; plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
      lVar13 = *plVar34;
      if ((lVar13 != 0) && (lVar31 != 0)) {
        *(long *)(lVar13 + 0x18) = lVar31;
        *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    lVar31 = (long)iVar22;
    if ((int)uVar17 < 0) {
      uVar32 = 0x8e;
      uVar5 = local_110;
    }
    else {
      sljit_emit_op1(piVar6,0x20,0xc,0,0x8e,lVar31);
      uVar32 = sljit_emit_jump(piVar6,0x25);
      if (*piVar6 == 0) {
        lVar31 = *(long *)(piVar6 + 0x18);
        lVar13 = *(long *)(lVar31 + 8);
        uVar36 = lVar13 + 0x10;
        if (uVar36 < 0xff1) {
          *(ulong *)(lVar31 + 8) = uVar36;
          puVar27 = (undefined8 *)(lVar31 + 0x10 + lVar13);
        }
        else {
          puVar33 = (undefined8 *)
                    (*(code *)**(undefined8 **)(piVar6 + 0x12))
                              (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
          if (puVar33 == (undefined8 *)0x0) {
            *piVar6 = 2;
            goto LAB_001272f6;
          }
          *puVar33 = *(undefined8 *)(piVar6 + 0x18);
          *(undefined8 **)(piVar6 + 0x18) = puVar33;
          puVar27 = puVar33 + 2;
          puVar33[1] = 0x10;
        }
        uVar28 = param_1[0x31];
        *puVar27 = uVar32;
        puVar27[1] = uVar28;
        param_1[0x31] = puVar27;
      }
LAB_001272f6:
      lVar31 = 0;
      uVar32 = 0xc;
      uVar5 = local_110 + 1;
    }
    uVar28 = 0x7f;
    sljit_emit_op2(piVar6,0x42,0xc,0,uVar32,lVar31,0x7f,(long)(int)uVar5 << 3);
    lVar31 = sljit_emit_label(piVar6,uVar28);
    if ((lVar26 != 0) && (lVar31 != 0)) {
      *(long *)(lVar26 + 0x18) = lVar31;
      *(ulong *)(lVar26 + 0x10) = *(ulong *)(lVar26 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  if (iVar21 != 0) {
    sljit_emit_op1(piVar6,0x20,0xd,0,0x8c,8);
  }
  if (local_74 != 0) {
    sljit_emit_op1(piVar6,0x20,0x8e,(long)*(int *)((long)param_1 + 100),0x8c,iVar21 * 8 + 8);
  }
  if (uVar18 != 0) {
    if ((int)uVar17 < 0) {
      if (local_110 == 0) {
        if (local_108 == 0x87) goto LAB_001276fe;
      }
      else {
        sljit_emit_op1(piVar6,0x20,2,0,0x8c,0);
        if (local_108 == 0x87) {
          piVar6 = (int *)*param_1;
          if (*piVar6 == 0) {
            piVar6[0x26] = 0;
            iVar22 = emit_lea_binary(piVar6,0xc,0,0xc,0,0x7f,local_110 << 3);
            if (iVar22 == 4) {
              emit_cum_binary(piVar6,0x5030100,0xc,0,0xc,0,0x7f,local_110 << 3);
            }
          }
          goto LAB_001276fe;
        }
        if (local_110 != 1) {
          piVar37 = (int *)*param_1;
          lVar26 = (long)(int)(local_110 * 8 + -8);
          if (*piVar37 == 0) {
            piVar37[0x26] = 0;
            iVar22 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar26);
            if (iVar22 == 4) {
              emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar26);
            }
          }
        }
      }
      uVar28 = 0x7f;
      lVar26 = 0;
      uVar32 = 0x8c;
    }
    else {
      sljit_emit_op1(piVar6,0x20,2,0,0x8c,0);
      sljit_emit_op1(piVar6,0x20,1,0,0x8c,(long)(int)(local_110 * 8 + -8));
      lVar26 = (long)iVar22;
      piVar37 = (int *)*param_1;
      if (local_108 == 0x87) {
        lVar31 = (long)(int)((uVar17 + local_110) * 8);
        if (*piVar37 == 0) {
          piVar37[0x26] = 0;
          iVar22 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar31);
          if (iVar22 == 4) {
            emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar31);
            sljit_emit_op1(piVar6,0x20,0x8e,lVar26,1,0);
            goto LAB_001276fe;
          }
        }
        sljit_emit_op1(piVar6,0x20,0x8e,lVar26,1,0);
        goto LAB_001276fe;
      }
      lVar31 = (long)(int)((uVar17 + local_110) * 8 + -8);
      if (*piVar37 == 0) {
        piVar37[0x26] = 0;
        iVar22 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar31);
        if (iVar22 == 4) {
          emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar31);
        }
      }
      sljit_emit_op1(piVar6,0x20,0x8c,0,0x7f,0);
      uVar32 = 0x8e;
      uVar28 = 1;
    }
    sljit_emit_op1(piVar6,0x20,uVar32,lVar26,uVar28,0);
    if (local_108 == 0x97) {
      uVar32 = sljit_emit_label(piVar6);
      *(undefined8 *)(param_3 + 0x38) = uVar32;
    }
    else {
      lVar26 = *(long *)(param_3 + 0x38);
      lVar31 = sljit_emit_jump(piVar6,0x24);
      if ((lVar26 != 0) && (lVar31 != 0)) {
        *(long *)(lVar31 + 0x18) = lVar26;
        *(ulong *)(lVar31 + 0x10) = *(ulong *)(lVar31 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar26 = sljit_emit_label(piVar6);
      if ((local_88 != 0) && (lVar26 != 0)) {
        *(long *)(local_88 + 0x18) = lVar26;
        *(ulong *)(local_88 + 0x10) = *(ulong *)(local_88 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    lVar26 = sljit_emit_label(piVar6);
    for (plVar34 = *(long **)(param_3 + 0x18); plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1])
    {
      lVar31 = *plVar34;
      if ((lVar31 != 0) && (lVar26 != 0)) {
        *(long *)(lVar31 + 0x18) = lVar26;
        *(ulong *)(lVar31 + 0x10) = *(ulong *)(lVar31 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    *(undefined8 *)(param_3 + 0x18) = 0;
    goto LAB_001276fe;
  }
  local_104 = (byte)param_4;
  if (((local_104 & local_110 != 0) == 0) && (local_108 != 0x97)) {
    if ((int)uVar17 < 0) {
LAB_001273a2:
      if (local_110 == 0) goto LAB_001273b0;
      piVar37 = (int *)*param_1;
      if (*piVar37 != 0) goto LAB_001273b0;
      piVar37[0x26] = 0;
      iVar23 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,local_110 * 8);
      if (iVar23 != 4) goto LAB_001273b0;
      emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f);
      lVar26 = sljit_emit_jump(piVar6,0x24);
    }
    else {
      sljit_emit_op1(piVar6,0x20,1,0,0x8c,(long)(int)(local_110 * 8 + -8));
LAB_00127ca1:
      piVar37 = (int *)*param_1;
      lVar26 = (long)(int)((uVar17 + local_110) * 8);
      if (*piVar37 == 0) {
        piVar37[0x26] = 0;
        iVar23 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar26);
        if (iVar23 == 4) {
          emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar26);
        }
      }
      sljit_emit_op1(piVar6,0x20,0x8e,(long)iVar22,1,0);
LAB_001273b0:
      lVar26 = sljit_emit_jump(piVar6,0x24);
    }
    if (*piVar6 == 0) {
      lVar31 = *(long *)(piVar6 + 0x18);
      lVar13 = *(long *)(lVar31 + 8);
      uVar36 = lVar13 + 0x10;
      if (uVar36 < 0xff1) {
        *(ulong *)(lVar31 + 8) = uVar36;
        plVar34 = (long *)(lVar31 + 0x10 + lVar13);
      }
      else {
        puVar27 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar6 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
        if (puVar27 == (undefined8 *)0x0) {
          *piVar6 = 2;
          goto LAB_00127421;
        }
        *puVar27 = *(undefined8 *)(piVar6 + 0x18);
        *(undefined8 **)(piVar6 + 0x18) = puVar27;
        plVar34 = puVar27 + 2;
        puVar27[1] = 0x10;
      }
      plVar1 = *pplVar24;
      *plVar34 = lVar26;
      plVar34[1] = (long)plVar1;
      *pplVar24 = plVar34;
    }
LAB_00127421:
    lVar31 = sljit_emit_label(piVar6);
    if (local_70 != (long *)0x0) {
LAB_00127439:
      plVar34 = local_70;
      do {
        lVar13 = *plVar34;
        if ((lVar13 != 0) && (lVar31 != 0)) {
          *(long *)(lVar13 + 0x18) = lVar31;
          *(ulong *)(lVar13 + 0x10) = *(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffd | 1;
        }
        plVar34 = (long *)plVar34[1];
      } while (plVar34 != (long *)0x0);
    }
    if (-1 < (int)uVar17) {
      if (local_108 == 0x87) {
        sljit_emit_op2(piVar6,0x42,0xc,0,0x8e,(long)iVar22,0x7f,(long)(int)(uVar17 + 1) << 3);
        sljit_emit_op1(piVar6,0x20,2,0,0x8c,(long)(int)((1 - local_110) * 8));
        goto LAB_001276fe;
      }
      sljit_emit_op2(piVar6,0x42,0xc,0,0x8e,(long)iVar22,0x7f,(long)(int)(uVar17 + 2 + iVar21) << 3)
      ;
      if (iVar21 + 2U != local_110) goto LAB_001274ce;
      sljit_emit_op1(piVar6,0x20,2,0,0x8c,0);
      if (local_108 != 0x98) goto LAB_001278f2;
LAB_001274fd:
      sljit_emit_op1(piVar6,0x20,0x8c,0,0x7f,0);
LAB_0012751a:
      lVar26 = *(long *)(param_3 + 0x38);
      lVar31 = sljit_emit_jump(piVar6,0x24);
      if ((lVar26 != 0) && (lVar31 != 0)) {
        *(long *)(lVar31 + 0x18) = lVar26;
        *(ulong *)(lVar31 + 0x10) = *(ulong *)(lVar31 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar26 = sljit_emit_label(piVar6);
      if ((local_88 != 0) && (lVar26 != 0)) {
        *(long *)(local_88 + 0x18) = lVar26;
        *(ulong *)(local_88 + 0x10) = *(ulong *)(local_88 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (-1 < (int)uVar17) {
        sljit_emit_op1(piVar6,0x20,0xc,0,0x8e,(long)iVar22);
        uVar32 = sljit_emit_jump(piVar6,0x25);
        if (*piVar6 == 0) {
          lVar26 = *(long *)(piVar6 + 0x18);
          lVar31 = *(long *)(lVar26 + 8);
          uVar36 = lVar31 + 0x10;
          if (uVar36 < 0xff1) {
            *(ulong *)(lVar26 + 8) = uVar36;
            puVar27 = (undefined8 *)(lVar26 + 0x10 + lVar31);
          }
          else {
            puVar33 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar6 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar6 + 0x12))[2]);
            if (puVar33 == (undefined8 *)0x0) {
              *piVar6 = 2;
              goto LAB_0012820b;
            }
            *puVar33 = *(undefined8 *)(piVar6 + 0x18);
            *(undefined8 **)(piVar6 + 0x18) = puVar33;
            puVar27 = puVar33 + 2;
            puVar33[1] = 0x10;
          }
          uVar28 = param_1[0x31];
          *puVar27 = uVar32;
          puVar27[1] = uVar28;
          param_1[0x31] = puVar27;
        }
LAB_0012820b:
        sljit_emit_op1(piVar6,0x20,1,0,0x8c,0xfffffffffffffff0);
        sljit_emit_op2(piVar6,0x40,0xc,0,0xc,0,0x7f,(long)(int)(uVar17 - 1) << 3);
        sljit_emit_op1(piVar6,0x20,0x8e,(long)iVar22,1,0);
      }
      lVar26 = sljit_emit_label(piVar6);
      plVar34 = *(long **)(param_3 + 0x18);
      if (plVar34 != (long *)0x0) {
        do {
          lVar31 = *plVar34;
          if ((lVar31 != 0) && (lVar26 != 0)) {
            *(long *)(lVar31 + 0x18) = lVar26;
            *(ulong *)(lVar31 + 0x10) = *(ulong *)(lVar31 + 0x10) & 0xfffffffffffffffd | 1;
          }
          plVar34 = (long *)plVar34[1];
        } while (plVar34 != (long *)0x0);
      }
      goto LAB_001276fe;
    }
    if (local_110 != 0) goto LAB_001280b9;
    if (local_108 != 0x97) goto LAB_00127e1c;
LAB_001278cd:
    sljit_emit_op2(piVar6,0x42,0xc,0,0xc,0,0x7f,8);
  }
  else {
    sljit_emit_op1(piVar6,0x20,2,0,0x8c,0);
    if ((int)uVar17 < 0) {
      if (local_108 != 0x97) goto LAB_001273a2;
      if (1 < local_110) {
        piVar37 = (int *)*param_1;
        lVar26 = (long)(int)(local_110 * 8 + -8);
        if (*piVar37 == 0) {
          piVar37[0x26] = 0;
          iVar23 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar26);
          if (iVar23 == 4) {
            emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar26);
          }
        }
      }
      sljit_emit_op1(piVar6,0x20,0x8c,0,0x7f,0);
      lVar26 = sljit_emit_jump(piVar6,0x24);
      lVar31 = sljit_emit_label(piVar6);
      if (local_70 != (long *)0x0) goto LAB_00127439;
      if (local_110 == 0) goto LAB_001278cd;
LAB_001280b9:
      sljit_emit_op1(piVar6,0x20,2,0,0x8c,(long)(int)(local_110 * -8));
      if (local_108 != 0x97) {
LAB_00127e1c:
        if (local_108 != 0x98) goto LAB_001276fe;
        sljit_emit_op2(piVar6,0x42,0xc,0,0xc,0,0x7f,8);
        sljit_emit_op1(piVar6,0x20,0x8c,0,0x7f,0);
        goto LAB_0012751a;
      }
      sljit_emit_op2(piVar6,0x42,0xc,0,0xc,0,0x7f,8);
      if (local_110 == 1) goto LAB_001278f2;
    }
    else {
      sljit_emit_op1(piVar6,0x20,1,0,0x8c,(long)(int)(local_110 * 8 + -8));
      if (local_108 != 0x97) goto LAB_00127ca1;
      piVar37 = (int *)*param_1;
      lVar26 = (long)(int)(((uVar17 - 1) + local_110) * 8);
      if (*piVar37 == 0) {
        piVar37[0x26] = 0;
        iVar23 = emit_lea_binary(piVar37,0xc,0,0xc,0,0x7f,lVar26);
        if (iVar23 == 4) {
          emit_cum_binary(piVar37,0x5030100,0xc,0,0xc,0,0x7f,lVar26);
        }
      }
      sljit_emit_op1(piVar6,0x20,0x8c,0,0x7f,0);
      sljit_emit_op1(piVar6,0x20,0x8e,(long)iVar22,1,0);
      lVar26 = sljit_emit_jump(piVar6,0x24);
      lVar31 = sljit_emit_label(piVar6);
      if (local_70 != (long *)0x0) goto LAB_00127439;
      sljit_emit_op2(piVar6,0x42,0xc,0,0x8e,(long)iVar22,0x7f,(long)(int)(uVar17 + 2 + iVar21) << 3)
      ;
      if (iVar21 + 2U == local_110) {
        sljit_emit_op1(piVar6,0x20,2,0,0x8c,0);
        goto LAB_001278f2;
      }
LAB_001274ce:
      sljit_emit_op1(piVar6,0x20,2,0,0x8c,0xfffffffffffffff8);
      if (local_108 != 0x97) goto LAB_001274fd;
    }
    sljit_emit_op1(piVar6,0x20,0x8c,0,2,0);
  }
LAB_001278f2:
  lVar31 = sljit_emit_label(piVar6);
  *(long *)(param_3 + 0x38) = lVar31;
  if ((lVar26 != 0) && (lVar31 != 0)) {
    *(long *)(lVar26 + 0x18) = lVar31;
    *(ulong *)(lVar26 + 0x10) = *(ulong *)(lVar26 + 0x10) & 0xfffffffffffffffd | 1;
  }
LAB_001276fe:
  if (bVar15) {
    *(undefined4 *)((long)param_1 + 0xbc) = uVar3;
    param_1[0x22] = uVar8;
    param_1[0x2a] = uVar10;
  }
  puVar30 = puVar30 + 2;
LAB_00126a86:
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  param_1[7] = uVar7;
  param_1[0x24] = uVar9;
  param_1[0x2b] = uVar11;
  param_1[0x2e] = uVar12;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar30;
}



uint * compile_bracket_matchingpath(undefined8 *param_1,uint *param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  uint *puVar15;
  long lVar16;
  undefined8 *puVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  undefined8 *extraout_RDX;
  undefined8 *extraout_RDX_00;
  undefined8 *extraout_RDX_01;
  undefined8 *extraout_RDX_02;
  undefined8 *extraout_RDX_03;
  undefined8 *extraout_RDX_04;
  undefined8 *extraout_RDX_05;
  undefined8 *extraout_RDX_06;
  undefined8 *extraout_RDX_07;
  undefined8 *extraout_RDX_08;
  undefined8 *extraout_RDX_09;
  uint uVar22;
  bool bVar23;
  char cVar24;
  uint *puVar25;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  uint local_b0;
  int local_ac;
  uint *local_a8;
  int local_a0;
  int local_9c;
  uint local_88;
  int local_84;
  long local_78;
  long local_68;
  undefined8 local_60;
  int local_58;
  int local_44;
  long local_40;
  
  piVar1 = (int *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  if ((*piVar1 != 0) || (pauVar9 = (undefined1 (*) [16])ensure_abuf(piVar1,0x50), *piVar1 != 0))
  goto LAB_001287ab;
  *pauVar9 = (undefined1  [16])0x0;
  pauVar9[2] = (undefined1  [16])0x0;
  pauVar9[1] = (undefined1  [16])0x0;
  pauVar9[3] = (undefined1  [16])0x0;
  pauVar9[4] = (undefined1  [16])0x0;
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  uVar22 = *param_2;
  *(uint **)pauVar9[2] = param_2;
  *(undefined8 *)*pauVar9 = uVar11;
  *(undefined1 (**) [16])(param_3 + 0x10) = pauVar9;
  local_b0 = uVar22;
  uVar2 = 0x87;
  puVar25 = param_2;
  if (uVar22 - 0x97 < 2) {
    local_b0 = param_2[1];
    param_2 = param_2 + 1;
    uVar2 = uVar22;
    puVar25 = param_2;
  }
  do {
    param_2 = param_2 + param_2[1];
    uVar22 = *param_2;
  } while (uVar22 == 0x78);
  if (uVar22 == 0x79) {
    lVar16 = param_1[2];
    lVar20 = param_1[3];
    local_84 = *(int *)((long)param_2 + (lVar20 - lVar16));
    if (local_84 == 0) {
      iVar4 = 0;
      local_ac = 0;
      local_58 = 0;
    }
    else {
      local_58 = *(int *)((lVar20 - lVar16) + 4 + (long)param_2);
      local_ac = *(int *)((lVar20 - lVar16) + 8 + (long)param_2);
      iVar4 = *(int *)((lVar20 - lVar16) + 0xc + (long)param_2);
      if (local_ac == 0x27) {
        uVar22 = 0x7a;
      }
      else if (local_ac == 0x28) {
        uVar22 = 0x7b;
      }
    }
  }
  else {
    iVar4 = 0;
    local_ac = 0;
    local_58 = 0;
    local_84 = 0;
  }
  local_a8 = puVar25 + 2;
  puVar15 = puVar25 + puVar25[1];
  bVar26 = *puVar15 == 0x78;
  if ((local_b0 == 0x8b) || (local_b0 == 0x90)) {
    bVar26 = 3 < puVar25[2] - 0x93 && puVar25[2] != 0xa3;
    if ((local_b0 == 0x8b) && (1 < *puVar15 - 0x7a)) {
      local_a0 = 0;
      local_9c = 0;
      bVar27 = false;
    }
    else {
      local_a0 = 0;
      local_b0 = 0x90;
      local_9c = *(int *)((long)puVar25 + (param_1[3] - param_1[2]));
      bVar27 = false;
      *(int *)(pauVar9[4] + 8) = local_9c;
    }
  }
  else {
    bVar27 = local_b0 == 0x89 || local_b0 == 0x8e;
    if (local_b0 - 0x83 < 0xe) {
      uVar10 = 1L << ((byte)(local_b0 - 0x83) & 0x3f);
      if ((uVar10 & 0x220f) == 0) {
        if ((uVar10 & 0x840) == 0) goto LAB_00128538;
        uVar6 = puVar25[2];
        local_a0 = uVar6 * 2;
        if (*(char *)(param_1[5] + (long)(int)uVar6) == '\0') {
          local_9c = *(int *)(param_1 + 8) + uVar6 * 8;
        }
        else {
          local_9c = uVar6 * 0x10 + *(int *)((long)param_1 + 0x44);
        }
        *(int *)(pauVar9[4] + 8) = local_9c;
        local_a8 = puVar25 + 3;
      }
      else {
        local_9c = *(int *)((long)puVar25 + (param_1[3] - param_1[2]));
        *(int *)(pauVar9[4] + 8) = local_9c;
        if (local_b0 == 0x85) {
          uVar5 = get_framesize(param_1,puVar25,0,0,&local_44);
          *(undefined4 *)pauVar9[4] = uVar5;
        }
        local_a0 = 0;
      }
    }
    else {
LAB_00128538:
      local_a0 = 0;
      local_9c = 0;
    }
  }
  iVar3 = local_a0 >> 1;
  if ((uVar22 == 0x7a) || ((uVar22 == 0x7b && (uVar2 != 0x98)))) {
    if (uVar2 == 0x97) {
      uVar11 = 0x10;
      goto LAB_0012902d;
    }
    uVar11 = *param_1;
    sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,8);
    uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
    piVar18 = (int *)*param_1;
    if (*piVar18 == 0) goto LAB_001285c7;
LAB_0012862f:
    sljit_emit_op1(piVar1,0x20,0x8c,0,0x7f,0);
    iVar8 = 1;
joined_r0x00128fb2:
    if (uVar2 != 0x97) goto LAB_0012865f;
    sljit_emit_op1(piVar1,0x20,0x8c,iVar8 << 3,2,0);
joined_r0x00128fdf:
    if ((local_ac == 0) ||
       (sljit_emit_op1(piVar1,0x20,0x8e,(long)local_84,0x7f,(long)iVar4), local_ac != 0x29)) {
      local_78 = 0;
    }
    else {
      local_78 = sljit_emit_label(piVar1);
    }
    local_68 = 0;
    if (uVar22 != 0x7b) {
LAB_00128694:
      if (((uVar22 != 0x7a) || (local_78 = sljit_emit_label(piVar1), local_b0 < 0x87)) || (!bVar26))
      goto LAB_0012869d;
      if ((0x8b < local_b0) || (local_ac != 0)) {
        if (bVar27) goto LAB_00128df0;
        if ((0xd < local_b0 - 0x83) || ((0x220bUL >> ((ulong)(local_b0 - 0x83) & 0x3f) & 1) == 0))
        goto LAB_0012a396;
        goto LAB_0012922b;
      }
      *(long *)(pauVar9[2] + 8) = local_78;
      if (!bVar27) goto LAB_0012a396;
      goto LAB_00128df0;
    }
LAB_00129a80:
    uVar11 = sljit_emit_label(piVar1);
    *(undefined8 *)pauVar9[3] = uVar11;
LAB_0012869d:
    iVar4 = local_44;
    if (local_b0 != 0x85) goto LAB_001286ab;
    if (local_44 == 0) {
      iVar8 = *(int *)pauVar9[4];
      iVar21 = 0;
      if (iVar8 < 0) {
        if (uVar22 == 0x7b) {
          sljit_emit_op1(piVar1,0x20,4,0,0x8e,(long)local_9c);
          uVar11 = *param_1;
          uVar13 = 0x7f;
          sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,0x10);
          uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
          auVar28._8_8_ = uVar13;
          auVar28._0_8_ = uVar11;
          piVar18 = (int *)*param_1;
          iVar8 = *piVar18;
          if (iVar8 == 0) goto LAB_0012a2f2;
          iVar8 = 0;
        }
        else {
          if (iVar8 == -1) {
            sljit_emit_op1(piVar1,0x20,0x8e,(long)local_9c,0xc,0);
          }
          if (uVar22 != 0x7a && !bVar26) goto LAB_00128a8d;
          iVar8 = 0;
          uVar11 = 8;
LAB_0012a29b:
          uVar13 = *param_1;
          sljit_emit_op2(uVar13,0x42,0xc,0,0xc,0,0x7f,uVar11);
          auVar28 = sljit_emit_cmp(uVar13,2,0xc,0,0xb,0);
          piVar18 = (int *)*param_1;
          if (*piVar18 == 0) {
LAB_0012a2f2:
            local_60 = auVar28._0_8_;
            puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18,auVar28._8_8_);
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = local_60;
              uVar13 = sljit_emit_label(piVar18);
              uVar11 = param_1[0x26];
              puVar12[1] = uVar13;
              puVar12[2] = uVar11;
              param_1[0x26] = puVar12;
            }
          }
          if (iVar4 != 0) goto LAB_0012a7da;
          if (uVar22 != 0x7b) goto LAB_0012a34f;
        }
        sljit_emit_op1(piVar1,0x20,0x8c,(long)(iVar8 * 8),2,0);
        if (*(int *)pauVar9[4] == -1) {
          uVar11 = 8;
          goto LAB_0012a857;
        }
        goto LAB_0012a87a;
      }
LAB_001288b1:
      uVar11 = *param_1;
      iVar8 = (iVar21 - (uint)(uVar22 == 0x79 && !bVar26)) + 2 + iVar8;
      lVar16 = (long)(iVar8 * 8);
      sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f);
      uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
      piVar18 = (int *)*param_1;
      if ((*piVar18 == 0) &&
         (puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18,lVar16), puVar12 != (undefined8 *)0x0)) {
        *puVar12 = uVar11;
        uVar13 = sljit_emit_label(piVar18);
        uVar11 = param_1[0x26];
        puVar12[1] = uVar13;
        puVar12[2] = uVar11;
        param_1[0x26] = puVar12;
      }
      if (iVar4 != 0) {
        sljit_emit_op1(piVar1,0x20,0x8c,0,4,0);
      }
      lVar16 = (long)local_9c;
      sljit_emit_op1(piVar1,0x20,1,0,0x8e,lVar16);
      sljit_emit_op2(piVar1,0x40,4,0,0xc,0,0x7f,(long)iVar8 << 3);
      cVar24 = (iVar4 != 0) * '\b';
      uVar6 = (uint)(iVar4 != 0);
      if (uVar22 == 0x79 && !bVar26) {
        sljit_emit_op1(piVar1,0x20,0x8e,lVar16,4,0);
        sljit_emit_op1(piVar1,0x20,0x8c,cVar24,1,0);
      }
      else {
        sljit_emit_op1(piVar1,0x20,0x8c,cVar24,2,0);
        sljit_emit_op1(piVar1,0x20,0x8e,lVar16,4,0);
        uVar6 = uVar6 + 1;
        sljit_emit_op1(piVar1,0x20,0x8c,cVar24 + '\b',1,0);
      }
      init_frame_isra_0(param_1,puVar25,0,*(int *)pauVar9[4] + uVar6);
    }
    else {
      sljit_emit_op1(piVar1,0x20,4,0,0x8e,(long)*(int *)((long)param_1 + 100));
      iVar8 = *(int *)pauVar9[4];
      iVar21 = 1;
      if (-1 < iVar8) goto LAB_001288b1;
      if (uVar22 == 0x7b) {
        uVar11 = *param_1;
        sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,0x18);
        auVar28 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
        piVar18 = (int *)*param_1;
        if (*piVar18 == 0) {
LAB_0012ad50:
          iVar8 = 1;
          goto LAB_0012a2f2;
        }
        sljit_emit_op1(piVar1,0x20,0x8c,0,4,0);
        iVar8 = 1;
      }
      else {
        if (iVar8 != -1) {
          if (uVar22 != 0x7a && !bVar26) {
            uVar11 = *param_1;
            sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,8);
            auVar28 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
            piVar18 = (int *)*param_1;
            if (*piVar18 != 0) {
              sljit_emit_op1(piVar1,0x20,0x8c,0,4,0);
              goto LAB_00128a8d;
            }
            goto LAB_0012ad50;
          }
LAB_001293b6:
          iVar8 = 1;
          uVar11 = 0x10;
          goto LAB_0012a29b;
        }
        sljit_emit_op1(piVar1,0x20,0x8e,(long)local_9c,0xc,0);
        if (uVar22 == 0x7a || bVar26) goto LAB_001293b6;
        uVar11 = *param_1;
        uVar13 = 0x7f;
        sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,8);
        uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
        auVar28._8_8_ = uVar13;
        auVar28._0_8_ = uVar11;
        piVar18 = (int *)*param_1;
        if (*piVar18 == 0) goto LAB_0012ad50;
        iVar8 = 1;
LAB_0012a7da:
        sljit_emit_op1(piVar1,0x20,0x8c,0,4,0);
        if (uVar22 != 0x7b) {
LAB_0012a34f:
          if (uVar22 == 0x7a || bVar26) {
            sljit_emit_op1(piVar1,0x20,0x8c,(long)(iVar8 << 3),2,0);
          }
          goto LAB_00128a8d;
        }
      }
      sljit_emit_op1(piVar1,0x20,4,0,0x8e,(long)local_9c);
      sljit_emit_op1(piVar1,0x20,0x8c,(long)(iVar8 * 8),2,0);
      if (*(int *)pauVar9[4] == -1) {
        uVar11 = 0x10;
LAB_0012a857:
        sljit_emit_op2(piVar1,0x40,0x8e,(long)local_9c,0xc,0,0x7f,uVar11);
      }
LAB_0012a87a:
      sljit_emit_op1(piVar1,0x20,0x8c,(long)(iVar8 * 8 + 8),4,0);
    }
LAB_00128a8d:
    compile_matchingpath(param_1,local_a8,puVar15,pauVar9);
    if (*piVar1 == 0) {
LAB_00128aac:
      match_once_common(param_1,uVar22,*(undefined4 *)pauVar9[4],local_9c,bVar26,local_44);
      puVar12 = extraout_RDX_00;
joined_r0x00128f6f:
      if (local_ac == 0x28) {
        sljit_emit_op1(piVar1,0x20,4,0,0x8e,(long)local_84);
        puVar12 = extraout_RDX_04;
      }
      local_88 = (uint)(local_ac == 0x28);
      bVar27 = local_b0 != 0x85;
      bVar23 = (bool)(bVar27 & bVar26);
      if (uVar22 != 0x79 || uVar2 != 0x87) {
        uVar6 = local_88 + 1;
        uVar7 = uVar6;
        if (local_a0 != 0) {
LAB_001295cf:
          uVar6 = (uVar7 + 1) - (uint)(*(int *)(param_1 + 0xd) == 0);
          puVar12 = (undefined8 *)(long)iVar3;
          if (*(char *)(param_1[5] + (long)puVar12) != '\0') goto LAB_00129617;
          uVar6 = uVar6 + 2;
        }
        if (bVar23) {
LAB_001295fa:
          bVar27 = true;
          uVar6 = uVar6 + 1;
        }
LAB_00128b38:
        uVar11 = *param_1;
        sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,(long)(int)(uVar6 << 3));
        auVar28 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
        puVar12 = auVar28._8_8_;
        piVar18 = (int *)*param_1;
        if ((*piVar18 == 0) &&
           (puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18), puVar12 != (undefined8 *)0x0)) {
          *puVar12 = auVar28._0_8_;
          uVar13 = sljit_emit_label(piVar18);
          uVar11 = param_1[0x26];
          puVar12[1] = uVar13;
          puVar12[2] = uVar11;
          param_1[0x26] = puVar12;
        }
      }
      else {
        uVar6 = local_88;
        uVar7 = local_88;
        if (local_a0 != 0) goto LAB_001295cf;
LAB_00129617:
        if (bVar23) goto LAB_001295fa;
        if (uVar6 != 0) goto LAB_00128b38;
      }
      if (local_ac == 0x28) {
        puVar12 = (undefined8 *)0x1;
        sljit_emit_op2(piVar1,0x42,0x8c,0,4,0,0x7f);
      }
      if (uVar22 != 0x79 || uVar2 != 0x87) {
        if (uVar22 == 0x79) {
          sljit_emit_op1(piVar1,0x20,0x8c,local_88 << 3,0x7f,0);
          puVar12 = extraout_RDX_08;
        }
        else {
          sljit_emit_op1(piVar1,0x20,0x8c,local_88 << 3,2,0);
          puVar12 = extraout_RDX_01;
        }
      }
      if (local_a0 == 0) {
        if (*puVar15 != 0x78) {
          if (bVar26) {
LAB_001296fb:
            if (local_b0 == 0x85) {
LAB_00129c10:
              if (uVar22 != 0x7a) goto LAB_00129738;
              if (local_a0 != 0) goto LAB_00129c48;
              if (local_ac != 0) goto LAB_00128cac;
              goto LAB_00129c31;
            }
LAB_00129709:
            sljit_emit_op1(piVar1,0x20,0x8c,(long)(int)(uVar7 * 8),0x7f,0);
            puVar12 = extraout_RDX_05;
            if (uVar22 == 0x7a) goto LAB_00128c90;
LAB_00129738:
            uVar11 = sljit_emit_label(piVar1);
            *(undefined8 *)(pauVar9[2] + 8) = uVar11;
            if ((local_a0 != 0) && (*(char *)(param_1[5] + (long)iVar3) != '\0')) goto LAB_00129768;
          }
          else {
LAB_0012966c:
            if (uVar22 == 0x7a) {
              if (local_ac != 0) goto LAB_00128cb8;
              if (4 < local_b0 - 0x87) goto LAB_0012940d;
              goto LAB_0012a485;
            }
          }
          goto LAB_00129675;
        }
LAB_00128c35:
        iVar4 = 1;
        do {
          puVar12 = (undefined8 *)(ulong)puVar15[1];
          iVar4 = iVar4 + 1;
          puVar15 = puVar15 + (long)puVar12;
        } while (*puVar15 == 0x78);
        if (!bVar26) {
          if (local_a0 != 0) goto LAB_00129900;
          goto LAB_0012966c;
        }
        if (!bVar23) goto LAB_00129c10;
        if (iVar4 < 4) goto LAB_00129709;
        auVar28 = sljit_emit_put_label_constprop_0(piVar1,(long)(int)(uVar7 * 8));
        puVar12 = auVar28._8_8_;
        *(long *)pauVar9[4] = auVar28._0_8_;
        if (uVar22 != 0x7a) goto LAB_00129738;
LAB_00128c90:
        if (local_a0 != 0) {
LAB_00129c48:
          puVar12 = (undefined8 *)param_1[5];
          if (*(char *)((long)puVar12 + (long)iVar3) != '\0') goto LAB_00129768;
          goto LAB_0012991f;
        }
        if (local_ac != 0) goto LAB_00128cac;
LAB_001293f0:
        if (local_b0 - 0x87 < 5) {
LAB_0012a485:
          lVar16 = sljit_emit_jump(piVar1,0x24,puVar12);
          if ((lVar16 == 0) || (local_78 == 0)) {
LAB_0012ad6b:
            uVar11 = sljit_emit_label(piVar1);
          }
          else {
            *(long *)(lVar16 + 0x18) = local_78;
            *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
            uVar11 = sljit_emit_label(piVar1);
          }
LAB_0012a4c5:
          *(undefined8 *)pauVar9[3] = uVar11;
          goto LAB_0012968b;
        }
        if (bVar26) {
LAB_00129c31:
          uVar11 = sljit_emit_label(piVar1);
          *(undefined8 *)(pauVar9[2] + 8) = uVar11;
        }
LAB_0012940d:
        if (local_b0 == 0x85) {
          lVar16 = sljit_emit_cmp(piVar1,1,4,0,2,0);
          if ((lVar16 == 0) || (local_78 == 0)) goto LAB_0012ad6b;
          *(long *)(lVar16 + 0x18) = local_78;
          *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
          uVar11 = sljit_emit_label(piVar1);
          goto LAB_0012a4c5;
        }
        lVar16 = sljit_emit_cmp(piVar1,1,0x8e,(long)local_9c,2,0);
        if ((lVar16 != 0) && (local_78 != 0)) {
          *(long *)(lVar16 + 0x18) = local_78;
          *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (uVar2 != 0x97) {
          piVar18 = (int *)*param_1;
          if (*piVar18 == 0) {
            piVar18[0x26] = 0;
            iVar4 = emit_lea_binary(piVar18,0xc,0,0xc,0,0x7f);
            if (iVar4 != 4) goto LAB_0012ae84;
            emit_cum_binary(piVar18,0x5030100,0xc,0,0xc,0,0x7f,8);
            uVar11 = sljit_emit_label(piVar1);
          }
          else {
LAB_0012ae84:
            uVar11 = sljit_emit_label(piVar1);
          }
          *(undefined8 *)pauVar9[3] = uVar11;
          if (uVar2 != 0x98) goto LAB_001294f8;
          goto LAB_00129d80;
        }
        uVar11 = sljit_emit_label(piVar1);
        *(undefined8 *)pauVar9[3] = uVar11;
LAB_00129d69:
        uVar11 = sljit_emit_label(piVar1);
        *(undefined8 *)(pauVar9[3] + 8) = uVar11;
LAB_001294f8:
        piVar1 = (int *)*param_1;
        if (*piVar1 == 0) {
          piVar1[0x26] = 0;
          emit_non_cum_binary(piVar1,0x2d2b2928,10,0,10,0,0x7f,1);
        }
        uVar11 = sljit_emit_jump(piVar1,0);
        if (*piVar1 == 0) {
          lVar16 = *(long *)(piVar1 + 0x18);
          lVar20 = *(long *)(lVar16 + 8);
          uVar10 = lVar20 + 0x10;
          if (uVar10 < 0xff1) {
            *(ulong *)(lVar16 + 8) = uVar10;
            puVar12 = (undefined8 *)(lVar16 + 0x10 + lVar20);
          }
          else {
            puVar17 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar1 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar1 + 0x12))[2]);
            if (puVar17 == (undefined8 *)0x0) {
              *piVar1 = 2;
              goto LAB_001296ae;
            }
            *puVar17 = *(undefined8 *)(piVar1 + 0x18);
            *(undefined8 **)(piVar1 + 0x18) = puVar17;
            puVar12 = puVar17 + 2;
            puVar17[1] = 0x10;
          }
          uVar13 = param_1[0x2f];
          *puVar12 = uVar11;
          puVar12[1] = uVar13;
          param_1[0x2f] = puVar12;
        }
LAB_001296ae:
        if (local_b0 == 0x85) {
          iVar4 = *(int *)pauVar9[4];
LAB_0012a1f4:
          *(uint *)pauVar9[4] = iVar4 * 2 | (uint)(local_44 != 0);
        }
      }
      else {
        uVar7 = match_capture_common(param_1,uVar7,local_a0,local_9c);
        if (*puVar15 == 0x78) goto LAB_00128c35;
        if (bVar26) goto LAB_001296fb;
LAB_00129900:
        puVar12 = (undefined8 *)param_1[5];
        if (*(char *)((long)puVar12 + (long)iVar3) != '\0') {
LAB_00129768:
          sljit_emit_op1(piVar1,0x20,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8 + local_a0 * 8),
                         2,0);
          puVar12 = extraout_RDX_06;
        }
        if (uVar22 == 0x7a) {
LAB_0012991f:
          if (local_ac == 0) goto LAB_001293f0;
          if (bVar26) {
LAB_00128cac:
            uVar11 = sljit_emit_label(piVar1);
            *(undefined8 *)(pauVar9[2] + 8) = uVar11;
          }
LAB_00128cb8:
          sljit_emit_op2(piVar1,0x242,0x8e,(long)local_84,0x8e,(long)local_84,0x7f,1);
          lVar16 = sljit_emit_jump(piVar1,1);
          if ((lVar16 != 0) && (local_78 != 0)) {
            *(long *)(lVar16 + 0x18) = local_78;
            *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
          }
          if ((local_b0 != 0x85) && (piVar18 = (int *)*param_1, *piVar18 == 0)) {
            piVar18[0x26] = 0;
            iVar4 = emit_lea_binary(piVar18,0xc,0,0xc,0,0x7f,8);
            if (iVar4 == 4) {
              emit_cum_binary(piVar18,0x5030100,0xc,0,0xc,0,0x7f,8);
            }
          }
          uVar11 = sljit_emit_label(piVar1);
          *(undefined8 *)pauVar9[3] = uVar11;
        }
LAB_00129675:
        if (local_ac == 0x29) {
          piVar18 = (int *)*param_1;
          if (*piVar18 == 0) {
            piVar18[0x26] = 0;
            emit_non_cum_binary(piVar18,0x2d2b2928,10,0,10,0,0x7f,1);
          }
          uVar11 = sljit_emit_jump(piVar18,0);
          if (*piVar18 == 0) {
            lVar16 = *(long *)(piVar18 + 0x18);
            lVar20 = *(long *)(lVar16 + 8);
            uVar10 = lVar20 + 0x10;
            if (uVar10 < 0xff1) {
              *(ulong *)(lVar16 + 8) = uVar10;
              puVar12 = (undefined8 *)(lVar16 + 0x10 + lVar20);
            }
            else {
              puVar17 = (undefined8 *)
                        (*(code *)**(undefined8 **)(piVar18 + 0x12))
                                  (0x1000,(*(undefined8 **)(piVar18 + 0x12))[2]);
              if (puVar17 == (undefined8 *)0x0) {
                *piVar18 = 2;
                goto LAB_00129b8d;
              }
              *puVar17 = *(undefined8 *)(piVar18 + 0x18);
              *(undefined8 **)(piVar18 + 0x18) = puVar17;
              puVar12 = puVar17 + 2;
              puVar17[1] = 0x10;
            }
            uVar13 = param_1[0x2f];
            *puVar12 = uVar11;
            puVar12[1] = uVar13;
            param_1[0x2f] = puVar12;
          }
LAB_00129b8d:
          sljit_emit_op2(piVar1,0x242,0x8e,(long)local_84,0x8e,(long)local_84,0x7f,1);
          lVar16 = sljit_emit_jump(piVar1,1);
          if ((lVar16 != 0) && (local_78 != 0)) {
            *(long *)(lVar16 + 0x18) = local_78;
            *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        else if (local_ac == 0x27) {
          sljit_emit_op1(piVar1,0x20,4,0,0x8e,(long)local_84);
          uVar11 = *param_1;
          sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,8);
          uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
          piVar18 = (int *)*param_1;
          if ((*piVar18 == 0) &&
             (puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18), puVar12 != (undefined8 *)0x0)) {
            *puVar12 = uVar11;
            uVar13 = sljit_emit_label(piVar18);
            uVar11 = param_1[0x26];
            puVar12[1] = uVar13;
            puVar12[2] = uVar11;
            param_1[0x26] = puVar12;
          }
          sljit_emit_op1(piVar1,0x20,0x8c,0,4,0);
        }
LAB_0012968b:
        if (uVar2 == 0x97) goto LAB_00129d69;
        if (uVar2 != 0x98) {
          if (uVar22 == 0x79) goto LAB_001296ae;
          goto LAB_001294f8;
        }
LAB_00129d80:
        lVar16 = *(long *)(param_3 + 0x28);
        lVar20 = sljit_emit_jump(piVar1,0x24);
        if ((lVar20 != 0) && (lVar16 != 0)) {
          *(long *)(lVar20 + 0x18) = lVar16;
          *(ulong *)(lVar20 + 0x10) = *(ulong *)(lVar20 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (local_68 == 0) goto LAB_001296ae;
        lVar16 = sljit_emit_label(piVar1);
        if (lVar16 != 0) {
          *(long *)(local_68 + 0x18) = lVar16;
          *(ulong *)(local_68 + 0x10) = *(ulong *)(local_68 + 0x10) & 0xfffffffffffffffd | 1;
        }
        if (local_b0 == 0x85) {
          iVar4 = *(int *)pauVar9[4];
          if (-1 < iVar4) {
            sljit_emit_op1(piVar1,0x20,0xc,0,0x8e,(long)local_9c);
            uVar11 = sljit_emit_jump(piVar1,0x25);
            if (*piVar1 == 0) {
              lVar16 = *(long *)(piVar1 + 0x18);
              lVar20 = *(long *)(lVar16 + 8);
              uVar10 = lVar20 + 0x10;
              if (uVar10 < 0xff1) {
                *(ulong *)(lVar16 + 8) = uVar10;
                puVar12 = (undefined8 *)(lVar16 + 0x10 + lVar20);
              }
              else {
                puVar17 = (undefined8 *)
                          (*(code *)**(undefined8 **)(piVar1 + 0x12))
                                    (0x1000,(*(undefined8 **)(piVar1 + 0x12))[2]);
                if (puVar17 == (undefined8 *)0x0) {
                  *piVar1 = 2;
                  goto LAB_0012a6d6;
                }
                *puVar17 = *(undefined8 *)(piVar1 + 0x18);
                *(undefined8 **)(piVar1 + 0x18) = puVar17;
                puVar12 = puVar17 + 2;
                puVar17[1] = 0x10;
              }
              uVar13 = param_1[0x31];
              *puVar12 = uVar11;
              puVar12[1] = uVar13;
              param_1[0x31] = puVar12;
            }
LAB_0012a6d6:
            sljit_emit_op2(piVar1,0x40,0xc,0,0xc,0,0x7f,(long)(*(int *)pauVar9[4] + -1) << 3);
            iVar4 = *(int *)pauVar9[4];
          }
          goto LAB_0012a1f4;
        }
        if (((uVar22 == 0x7b) && (bVar27)) && (piVar1 = (int *)*param_1, *piVar1 == 0)) {
          piVar1[0x26] = 0;
          iVar4 = emit_lea_binary(piVar1,0xc,0,0xc,0,0x7f,8);
          if (iVar4 == 4) {
            emit_cum_binary(piVar1,0x5030100,0xc,0,0xc,0,0x7f,8);
          }
        }
      }
      puVar15 = puVar15 + (long)local_58 + 2;
      goto LAB_001287ad;
    }
  }
  else {
    if (uVar2 == 0x97) {
      uVar11 = 8;
LAB_0012902d:
      uVar13 = *param_1;
      sljit_emit_op2(uVar13,0x42,0xc,0,0xc,0,0x7f,uVar11);
      uVar11 = sljit_emit_cmp(uVar13,2,0xc,0,0xb,0);
      piVar18 = (int *)*param_1;
      if (*piVar18 == 0) {
LAB_001285c7:
        puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = uVar11;
          uVar13 = sljit_emit_label(piVar18);
          uVar11 = param_1[0x26];
          puVar12[1] = uVar13;
          puVar12[2] = uVar11;
          param_1[0x26] = puVar12;
        }
      }
      if ((uVar22 == 0x7a) || ((uVar2 != 0x98 && (uVar22 == 0x7b)))) goto LAB_0012862f;
      iVar8 = 0;
      goto joined_r0x00128fb2;
    }
LAB_0012865f:
    if (uVar2 != 0x98) goto joined_r0x00128fdf;
    sljit_emit_op1(piVar1,0x20,2,0,0x8c,0);
    if (uVar22 != 0x7b) {
      piVar18 = (int *)*param_1;
      if (*piVar18 == 0) {
        piVar18[0x26] = 0;
        iVar8 = emit_lea_binary(piVar18,0xc,0,0xc,0,0x7f,8);
        if (iVar8 == 4) {
          emit_cum_binary(piVar18,0x5030100,0xc,0,0xc,0,0x7f,8);
        }
      }
      local_68 = sljit_emit_cmp(piVar1,0,2,0,0x7f,0);
      if ((local_ac == 0) ||
         (sljit_emit_op1(piVar1,0x20,0x8e,(long)local_84,0x7f,(long)iVar4), local_ac != 0x29)) {
        local_78 = 0;
      }
      else {
        local_78 = sljit_emit_label(piVar1);
      }
      goto LAB_00128694;
    }
    if ((local_b0 == 0x85) || (0x8b < local_b0)) {
      lVar16 = sljit_emit_cmp(piVar1,1,2,0,0x7f,0);
      sljit_emit_op1(piVar1,0x20,2,0,0x8c,8);
      lVar20 = sljit_emit_jump(piVar1,0x24);
      lVar19 = sljit_emit_label(piVar1);
      if ((lVar16 != 0) && (lVar19 != 0)) {
        *(long *)(lVar16 + 0x18) = lVar19;
        *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lVar16 = (long)local_9c;
      uVar11 = 0x8e;
      if ((local_b0 == 0x85) && (-1 < *(int *)pauVar9[4])) {
        sljit_emit_op1(piVar1,0x20,1,0,0x8e,lVar16);
        uVar11 = 0x81;
        lVar16 = (long)((-2 - *(int *)pauVar9[4]) * 8);
      }
      local_68 = sljit_emit_cmp(piVar1,0,2,0,uVar11,lVar16);
      lVar16 = sljit_emit_label(piVar1);
      if ((lVar20 != 0) && (lVar16 != 0)) {
        *(long *)(lVar20 + 0x18) = lVar16;
        *(ulong *)(lVar20 + 0x10) = *(ulong *)(lVar20 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (local_ac != 0) goto LAB_0012a8bf;
      local_78 = 0;
      goto LAB_00129a80;
    }
    lVar16 = sljit_emit_cmp(piVar1,1,2,0,0x7f,0);
    sljit_emit_op1(piVar1,0x20,2,0,0x8c,8);
    lVar20 = sljit_emit_label(piVar1);
    if ((lVar16 != 0) && (lVar20 != 0)) {
      *(long *)(lVar16 + 0x18) = lVar20;
      *(ulong *)(lVar16 + 0x10) = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffd | 1;
    }
    if (local_ac != 0) {
      local_68 = 0;
LAB_0012a8bf:
      sljit_emit_op1(piVar1,0x20,0x8e,(long)local_84,0x7f,(long)iVar4);
      local_78 = 0;
      if (local_ac == 0x29) {
        local_78 = sljit_emit_label(piVar1);
      }
      goto LAB_00129a80;
    }
    uVar11 = sljit_emit_label(piVar1);
    local_68 = 0;
    *(undefined8 *)pauVar9[3] = uVar11;
    local_78 = 0;
LAB_001286ab:
    if (bVar27) {
LAB_00128df0:
      lVar16 = (long)local_9c;
      if (*(char *)(param_1[5] + (long)iVar3) == '\0') {
        sljit_emit_op1(piVar1,0x20,4,0,0x8e,lVar16);
        uVar11 = *param_1;
        uVar13 = 8;
        sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f);
        uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
        piVar18 = (int *)*param_1;
        if ((*piVar18 == 0) &&
           (puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18,uVar13), puVar12 != (undefined8 *)0x0))
        {
          *puVar12 = uVar11;
          uVar13 = sljit_emit_label(piVar18);
          uVar11 = param_1[0x26];
          puVar12[1] = uVar13;
          puVar12[2] = uVar11;
          param_1[0x26] = puVar12;
        }
        sljit_emit_op1(piVar1,0x20,0x8e,lVar16,2,0);
        sljit_emit_op1(piVar1,0x20,0x8c,0,4,0);
      }
      else {
        uVar11 = *param_1;
        sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f);
        uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
        piVar18 = (int *)*param_1;
        if ((*piVar18 == 0) &&
           (puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18), puVar12 != (undefined8 *)0x0)) {
          *puVar12 = uVar11;
          uVar13 = sljit_emit_label(piVar18);
          uVar11 = param_1[0x26];
          puVar12[1] = uVar13;
          puVar12[2] = uVar11;
          param_1[0x26] = puVar12;
        }
        sljit_emit_op1(piVar1,0x20,1,0,0x8e,lVar16);
        sljit_emit_op1(piVar1,0x20,4,0,0x8e,lVar16 + 8);
        sljit_emit_op1(piVar1,0x20,0x8e,lVar16,2,0);
        sljit_emit_op1(piVar1,0x20,0x8c,0,1,0);
        sljit_emit_op1(piVar1,0x20,0x8c,8,4,0);
      }
LAB_00128f0d:
      compile_matchingpath(param_1,local_a8,puVar15,pauVar9);
      if (*piVar1 == 0) {
        if (local_b0 == 0x84) {
LAB_00129d1d:
          puVar12 = (undefined8 *)param_1[3];
          if (*(int *)((long)puVar12 + (long)puVar25 + (4 - param_1[2])) != 0) {
            sljit_emit_op1(piVar1,0x20,0xd,0,0x8e,(long)local_9c + 8);
            puVar12 = extraout_RDX_09;
          }
        }
        else {
          puVar12 = extraout_RDX_02;
          if (0x84 < local_b0) {
            if (local_b0 != 0x85) {
              if (local_b0 == 0x86) {
                match_script_run_common(param_1,local_9c,pauVar9);
                puVar12 = extraout_RDX_07;
              }
              goto joined_r0x00128f6f;
            }
            goto LAB_00128aac;
          }
          if (local_b0 == 0x83) {
            sljit_emit_op1(piVar1,0x20,2,0,0x8e,(long)local_9c);
            puVar12 = extraout_RDX_03;
          }
        }
        goto joined_r0x00128f6f;
      }
    }
    else {
      if (local_b0 == 0x84) {
        if (*(int *)((long)puVar25 + param_1[3] + (4 - param_1[2])) == 0) {
LAB_0012922b:
          sljit_emit_op1(piVar1,0x20,4,0,0x8e,(long)local_9c);
          uVar11 = *param_1;
          sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f);
          uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
          piVar18 = (int *)*param_1;
          if ((*piVar18 == 0) &&
             (puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18), puVar12 != (undefined8 *)0x0)) {
            *puVar12 = uVar11;
            uVar13 = sljit_emit_label(piVar18);
            uVar11 = param_1[0x26];
            puVar12[1] = uVar13;
            puVar12[2] = uVar11;
            param_1[0x26] = puVar12;
          }
          sljit_emit_op1(piVar1,0x20,0x8e,(long)local_9c,2,0);
          sljit_emit_op1(piVar1,0x20,0x8c,0,4,0);
          if (*local_a8 == 0x7d) {
            local_a8 = (uint *)compile_reverse_matchingpath(param_1,local_a8,pauVar9);
          }
          goto LAB_001286f0;
        }
        lVar16 = (long)local_9c;
        sljit_emit_op1(piVar1,0x20,4,0,0x8e,lVar16);
        uVar11 = *param_1;
        sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f,0x20);
        uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
        piVar18 = (int *)*param_1;
        if ((*piVar18 == 0) &&
           (puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18), puVar12 != (undefined8 *)0x0)) {
          *puVar12 = uVar11;
          uVar13 = sljit_emit_label(piVar18);
          uVar11 = param_1[0x26];
          puVar12[1] = uVar13;
          puVar12[2] = uVar11;
          param_1[0x26] = puVar12;
        }
        sljit_emit_op1(piVar1,0x20,1,0,0x8e,lVar16 + 8);
        sljit_emit_op1(piVar1,0x20,0x8e,lVar16,2,0);
        sljit_emit_op1(piVar1,0x20,0x8e,lVar16 + 8,0xd,0);
        sljit_emit_op1(piVar1,0x20,0x8c,0,4,0);
        sljit_emit_op1(piVar1,0x20,0x8c,8,1,0);
        sljit_emit_op1(piVar1,0x20,0xd,0,2,0);
        uVar6 = *local_a8;
        if (uVar6 - 0x7d < 2) {
          uVar11 = compile_reverse_matchingpath(param_1,local_a8,pauVar9);
          compile_matchingpath(param_1,uVar11,puVar15,pauVar9);
          if (*piVar1 == 0) {
            if (uVar6 == 0x7e) {
              uVar11 = sljit_emit_cmp(piVar1,2,2,0,0xd,0);
              lVar16 = *(long *)pauVar9[1];
              if (*piVar1 == 0) {
                lVar20 = *(long *)(piVar1 + 0x18);
                lVar19 = *(long *)(lVar20 + 8);
                uVar10 = lVar19 + 0x10;
                if (uVar10 < 0xff1) {
                  *(ulong *)(lVar20 + 8) = uVar10;
                  puVar12 = (undefined8 *)(lVar20 + 0x10 + lVar19);
                }
                else {
                  puVar17 = (undefined8 *)
                            (*(code *)**(undefined8 **)(piVar1 + 0x12))
                                      (0x1000,(*(undefined8 **)(piVar1 + 0x12))[2]);
                  if (puVar17 == (undefined8 *)0x0) {
                    *piVar1 = 2;
                    goto LAB_00129d1d;
                  }
                  *puVar17 = *(undefined8 *)(piVar1 + 0x18);
                  *(undefined8 **)(piVar1 + 0x18) = puVar17;
                  puVar12 = puVar17 + 2;
                  puVar17[1] = 0x10;
                }
                uVar13 = *(undefined8 *)(lVar16 + 8);
                *puVar12 = uVar11;
                puVar12[1] = uVar13;
                *(undefined8 **)(lVar16 + 8) = puVar12;
              }
            }
            goto LAB_00129d1d;
          }
        }
        else {
          compile_matchingpath(param_1,local_a8,puVar15,pauVar9);
          if (*piVar1 == 0) goto LAB_00129d1d;
        }
        goto LAB_001287ab;
      }
      if (local_b0 - 0x83 < 0xe) {
        if ((0x220bUL >> ((ulong)(local_b0 - 0x83) & 0x3f) & 1) != 0) goto LAB_0012922b;
        if (bVar26) goto LAB_0012a396;
      }
      else {
        if (!bVar26) goto LAB_00128f0d;
LAB_0012a396:
        uVar11 = *param_1;
        uVar13 = 8;
        sljit_emit_op2(uVar11,0x42,0xc,0,0xc,0,0x7f);
        uVar11 = sljit_emit_cmp(uVar11,2,0xc,0,0xb,0);
        piVar18 = (int *)*param_1;
        if ((*piVar18 == 0) &&
           (puVar12 = (undefined8 *)ensure_abuf(piVar18,0x18,uVar13), puVar12 != (undefined8 *)0x0))
        {
          *puVar12 = uVar11;
          uVar13 = sljit_emit_label(piVar18);
          uVar11 = param_1[0x26];
          puVar12[1] = uVar13;
          puVar12[2] = uVar11;
          param_1[0x26] = puVar12;
        }
        sljit_emit_op1(piVar1,0x20,0x8c,0,2,0);
      }
LAB_001286f0:
      if ((local_b0 != 0x8b) && (local_b0 != 0x90)) goto LAB_00128f0d;
      uVar6 = *local_a8;
      if (uVar6 == 0x91) {
        uVar11 = sljit_emit_cmp(piVar1,0,0x8e,local_a8[1] * 0x10 + *(int *)((long)param_1 + 0x44),
                                0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8));
        if (*piVar1 == 0) {
          lVar16 = *(long *)(piVar1 + 0x18);
          lVar20 = *(long *)(lVar16 + 8);
          uVar10 = lVar20 + 0x10;
          if (uVar10 < 0xff1) {
            *(ulong *)(lVar16 + 8) = uVar10;
            puVar12 = (undefined8 *)(lVar16 + 0x10 + lVar20);
          }
          else {
            puVar17 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar1 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar1 + 0x12))[2]);
            if (puVar17 == (undefined8 *)0x0) {
              *piVar1 = 2;
              goto LAB_00129d07;
            }
            *puVar17 = *(undefined8 *)(piVar1 + 0x18);
            *(undefined8 **)(piVar1 + 0x18) = puVar17;
            puVar12 = puVar17 + 2;
            puVar17[1] = 0x10;
          }
          uVar13 = *(undefined8 *)pauVar9[4];
          *puVar12 = uVar11;
          puVar12[1] = uVar13;
          *(undefined8 **)pauVar9[4] = puVar12;
        }
        goto LAB_00129d07;
      }
      if (uVar6 == 0x92) {
        uVar6 = local_a8[2];
        piVar18 = (int *)(param_1[0x1e] + (ulong)local_a8[1] * param_1[0x20] * 4);
        sljit_emit_op1(piVar1,0x20,3,0,2,0);
        sljit_emit_op1(piVar1,0x20,1,0,0x8e,(long)(*(int *)((long)param_1 + 0x44) + 8));
        sljit_emit_op2(piVar1,0x242,4,0,0x8e,*piVar18 * 0x10 + *(int *)((long)param_1 + 0x44),1,0);
        piVar18 = piVar18 + param_1[0x20];
        iVar4 = uVar6 - 2;
        if (1 < (int)uVar6) {
          do {
            sljit_emit_op2(piVar1,0x42,2,0,0x8e,*piVar18 * 0x10 + *(int *)((long)param_1 + 0x44),1,0
                          );
            if (*piVar1 == 0) {
              piVar1[0x26] = 0;
              emit_cum_binary(piVar1,0xd0b0908,4,0,4,0,2,0);
            }
            piVar18 = piVar18 + param_1[0x20];
            bVar27 = iVar4 != 0;
            iVar4 = iVar4 + -1;
          } while (bVar27);
        }
        sljit_emit_op1(piVar1,0x20,2,0,3,0);
        uVar11 = sljit_emit_jump(piVar1,0);
        if (*piVar1 == 0) {
          lVar16 = *(long *)(piVar1 + 0x18);
          lVar20 = *(long *)(lVar16 + 8);
          uVar10 = lVar20 + 0x10;
          if (uVar10 < 0xff1) {
            *(ulong *)(lVar16 + 8) = uVar10;
            puVar12 = (undefined8 *)(lVar16 + 0x10 + lVar20);
          }
          else {
            puVar17 = (undefined8 *)
                      (*(code *)**(undefined8 **)(piVar1 + 0x12))
                                (0x1000,(*(undefined8 **)(piVar1 + 0x12))[2]);
            if (puVar17 == (undefined8 *)0x0) {
              *piVar1 = 2;
              goto LAB_001298f0;
            }
            *puVar17 = *(undefined8 *)(piVar1 + 0x18);
            *(undefined8 **)(piVar1 + 0x18) = puVar17;
            puVar12 = puVar17 + 2;
            puVar17[1] = 0x10;
          }
          uVar13 = *(undefined8 *)pauVar9[4];
          *puVar12 = uVar11;
          puVar12[1] = uVar13;
          *(undefined8 **)pauVar9[4] = puVar12;
        }
LAB_001298f0:
        local_a8 = local_a8 + 3;
      }
      else if ((uVar6 - 0x93 < 4) || (uVar6 == 0xa3)) {
        *(undefined8 *)pauVar9[4] = 0;
        uVar6 = *local_a8;
        if (uVar6 == 0x96) {
          local_a8 = local_a8 + 1;
        }
        else {
          if ((uVar6 == 0x95) || (uVar6 == 0xa3)) {
LAB_00129e88:
            uVar6 = *puVar15;
          }
          else {
            lVar16 = param_1[0x28];
            if (uVar6 != 0x93) {
              if ((lVar16 != 0) && (*(long *)(lVar16 + 0x28) != 0)) {
                uVar6 = local_a8[2];
                piVar18 = (int *)(param_1[0x1e] + (ulong)local_a8[1] * param_1[0x20] * 4);
                if ((int)uVar6 < 1) {
                  if (uVar6 != 0) goto LAB_001298f0;
                }
                else {
                  do {
                    if (*(int *)(param_1[2] + 8 + *(long *)(lVar16 + 0x28) * 4) == *piVar18)
                    goto LAB_001298f0;
                    piVar18 = piVar18 + param_1[0x20];
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
              }
              goto LAB_00129e88;
            }
            if (lVar16 == 0) goto LAB_00129e88;
            uVar6 = local_a8[1];
            if (uVar6 == 0xffff) {
LAB_00129d07:
              local_a8 = local_a8 + 2;
              goto LAB_00128790;
            }
            if (*(long *)(lVar16 + 0x28) == 0) {
              bVar27 = uVar6 == 0;
            }
            else {
              bVar27 = *(uint *)(param_1[2] + 8 + *(long *)(lVar16 + 0x28) * 4) == uVar6;
            }
            if (bVar27) goto LAB_00129d07;
            uVar6 = *puVar15;
          }
          local_a8 = puVar15;
          if (uVar6 == 0x78) {
            local_a8 = puVar15 + 2;
            puVar15 = puVar15 + puVar15[1];
          }
        }
      }
      else {
        if ((*piVar1 != 0) ||
           (pauVar14 = (undefined1 (*) [16])ensure_abuf(piVar1,0x40), *piVar1 != 0))
        goto LAB_001287ab;
        pauVar14[2] = (undefined1  [16])0x0;
        *pauVar14 = (undefined1  [16])0x0;
        *(uint **)pauVar14[2] = local_a8;
        pauVar14[1] = (undefined1  [16])0x0;
        pauVar14[3] = (undefined1  [16])0x0;
        *(undefined1 (**) [16])pauVar9[4] = pauVar14;
        local_a8 = (uint *)compile_assert_matchingpath(param_1,local_a8,pauVar14,1);
      }
LAB_00128790:
      compile_matchingpath(param_1,local_a8,puVar15,pauVar9);
      puVar12 = extraout_RDX;
      if (*piVar1 == 0) goto joined_r0x00128f6f;
    }
  }
LAB_001287ab:
  puVar15 = (uint *)0x0;
LAB_001287ad:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar15;
}



/* WARNING: Removing unreachable block (ram,0x0012be88) */
/* WARNING: Removing unreachable block (ram,0x0012b05c) */
/* WARNING: Removing unreachable block (ram,0x0012bb49) */
/* WARNING: Removing unreachable block (ram,0x0012c416) */
/* WARNING: Removing unreachable block (ram,0x0012c427) */
/* WARNING: Removing unreachable block (ram,0x0012c431) */
/* WARNING: Removing unreachable block (ram,0x0012c44a) */
/* WARNING: Removing unreachable block (ram,0x0012c455) */
/* WARNING: Removing unreachable block (ram,0x0012c489) */
/* WARNING: Removing unreachable block (ram,0x0012c4ac) */
/* WARNING: Removing unreachable block (ram,0x0012c518) */
/* WARNING: Removing unreachable block (ram,0x0012c551) */
/* WARNING: Removing unreachable block (ram,0x0012c576) */

void compile_recurse(undefined8 *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  uint *puVar17;
  undefined1 *puVar18;
  byte bVar19;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  uint *puVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  undefined4 uVar28;
  int *piVar29;
  long *plVar30;
  long lVar31;
  long in_FS_OFFSET;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long *local_c8;
  undefined8 local_b8;
  long local_a0;
  long local_90;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = (int *)*param_1;
  puVar27 = (uint *)(param_1[2] + *(long *)(param_1[0x28] + 0x28) * 4);
  puVar1 = puVar27 + (ulong)(*puVar27 != 0x87) + 2;
  puVar20 = puVar27;
  do {
    puVar20 = puVar20 + puVar20[1];
  } while (*puVar20 == 0x78);
  memset((void *)param_1[0x11],0,(long)*(int *)(param_1 + 0x10));
  if (puVar1 < puVar20) {
    iVar9 = 1;
    uVar28 = 0;
    lVar24 = 1;
    puVar22 = &DAT_0013129c;
    uVar23 = 0x1d00e807403a;
    puVar17 = puVar1;
    do {
      uVar3 = *puVar17;
      if (uVar3 < 0xa6) {
        if (0x4d < uVar3) {
          if (uVar3 - 0x4e < 0x58) {
                    /* WARNING: Could not recover jumptable at 0x0012afe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(puVar22 + *(int *)(puVar22 + (ulong)(uVar3 - 0x4e) * 4)))();
            return;
          }
          goto LAB_0012b700;
        }
        if (uVar3 == 3) {
          uVar28 = 4;
          puVar17 = puVar17 + 1;
        }
        else {
          if (0x2c < uVar3 - 0x21) goto LAB_0012b700;
          uVar15 = lVar24 << ((byte)(uVar3 - 0x21) & 0x3f);
          if ((uVar15 & uVar23) == 0) {
            if ((uVar15 & 0x2801400a005) == 0) {
              if ((uVar15 & 0x3001800c0) != 0) {
                iVar26 = *(int *)((long)puVar17 + (param_1[3] - param_1[2]));
                if (iVar26 != 0) {
                  pbVar16 = (byte *)(((long)iVar26 >> 6) + param_1[0x11]);
                  bVar2 = *pbVar16;
                  bVar19 = (byte)(1 << ((byte)((long)iVar26 >> 3) & 7));
                  if ((bVar2 & bVar19) == 0) {
                    iVar9 = iVar9 + 2;
                    *pbVar16 = bVar2 | bVar19;
                  }
                }
                puVar17 = puVar17 + 3;
                goto LAB_0012b03c;
              }
              goto LAB_0012b700;
            }
            iVar26 = *(int *)((long)puVar17 + (param_1[3] - param_1[2]));
            if (iVar26 != 0) {
              pbVar16 = (byte *)(((long)iVar26 >> 6) + param_1[0x11]);
              bVar2 = *pbVar16;
              bVar19 = (byte)(1 << ((byte)((long)iVar26 >> 3) & 7));
              if ((bVar2 & bVar19) == 0) {
                iVar9 = iVar9 + 2;
                *pbVar16 = bVar2 | bVar19;
              }
            }
          }
          else {
            iVar26 = *(int *)((long)puVar17 + (param_1[3] - param_1[2]));
            if (iVar26 != 0) {
              pbVar16 = (byte *)(((long)iVar26 >> 6) + param_1[0x11]);
              bVar2 = *pbVar16;
              bVar19 = (byte)(1 << ((byte)((long)iVar26 >> 3) & 7));
              if ((bVar2 & bVar19) == 0) {
                iVar9 = iVar9 + 1;
                *pbVar16 = bVar2 | bVar19;
              }
            }
          }
          puVar17 = puVar17 + 2;
        }
      }
      else {
LAB_0012b700:
        puVar17 = (uint *)next_opcode(param_1);
      }
LAB_0012b03c:
    } while (puVar17 < puVar20);
  }
  else {
    uVar28 = 0;
    iVar9 = 1;
  }
  param_1[7] = 0;
  puVar17 = puVar27;
  iVar26 = 0;
  do {
    iVar25 = iVar26;
    iVar26 = iVar25 + 1;
    puVar17 = puVar17 + puVar17[1];
  } while (*puVar17 == 0x78);
  lVar24 = param_1[0x28];
  uVar10 = sljit_emit_label(piVar4);
  *(undefined8 *)(lVar24 + 8) = uVar10;
  lVar24 = *(long *)(param_1[0x28] + 8);
  for (plVar30 = *(long **)(param_1[0x28] + 0x18); plVar30 != (long *)0x0;
      plVar30 = (long *)plVar30[1]) {
    lVar21 = *plVar30;
    if ((lVar21 != 0) && (lVar24 != 0)) {
      *(long *)(lVar21 + 0x18) = lVar24;
      *(ulong *)(lVar21 + 0x10) = *(ulong *)(lVar21 + 0x10) & 0xfffffffffffffffd | 1;
    }
  }
  sljit_emit_op_dst_constprop_0_isra_0(piVar4,4);
  piVar29 = (int *)*param_1;
  uVar10 = extraout_RDX;
  if (*piVar29 == 0) {
    piVar29[0x26] = 0;
    uVar10 = 1;
    emit_non_cum_binary(piVar29,0x2d2b2928,10,0,10,0,0x7f);
  }
  uVar10 = sljit_emit_jump(piVar29,0,uVar10);
  if (*piVar29 == 0) {
    lVar24 = *(long *)(piVar29 + 0x18);
    lVar21 = *(long *)(lVar24 + 8);
    uVar23 = lVar21 + 0x10;
    if (uVar23 < 0xff1) {
      *(ulong *)(lVar24 + 8) = uVar23;
      puVar12 = (undefined8 *)(lVar24 + 0x10 + lVar21);
    }
    else {
      puVar11 = (undefined8 *)
                (*(code *)**(undefined8 **)(piVar29 + 0x12))
                          (0x1000,(*(undefined8 **)(piVar29 + 0x12))[2]);
      if (puVar11 == (undefined8 *)0x0) {
        *piVar29 = 2;
        goto LAB_0012b1ea;
      }
      *puVar11 = *(undefined8 *)(piVar29 + 0x18);
      puVar12 = puVar11 + 2;
      *(undefined8 **)(piVar29 + 0x18) = puVar11;
      puVar11[1] = 0x10;
    }
    uVar13 = param_1[0x2f];
    *puVar12 = uVar10;
    puVar12[1] = uVar13;
    param_1[0x2f] = puVar12;
  }
LAB_0012b1ea:
  iVar8 = (iVar26 != 1) + 1;
  lVar21 = (ulong)(iVar26 != 1) << 3;
  uVar10 = *param_1;
  lVar24 = (long)((iVar9 + iVar8) * 8);
  sljit_emit_op2(uVar10,0x42,0xc,0,0xc,0,0x7f,lVar24);
  uVar10 = sljit_emit_cmp(uVar10,2,0xc,0,0xb,0);
  piVar29 = (int *)*param_1;
  if ((*piVar29 == 0) &&
     (puVar12 = (undefined8 *)ensure_abuf(piVar29,0x18), puVar12 != (undefined8 *)0x0)) {
    *puVar12 = uVar10;
    uVar13 = sljit_emit_label(piVar29);
    uVar10 = param_1[0x26];
    puVar12[1] = uVar13;
    puVar12[2] = uVar10;
    param_1[0x26] = puVar12;
  }
  sljit_emit_op1(piVar4,0x20,0x8c,lVar21,4,0);
  copy_recurse_data_isra_0(param_1,puVar1,puVar20,0,iVar8,uVar28);
  sljit_emit_op1(piVar4,0x20,0x8e,(long)*(int *)(param_1 + 10),0xc,0);
  if (iVar26 != 1) {
    sljit_emit_op1(piVar4,0x20,0x8c,0,2,0);
  }
  param_1[0x22] = 0;
  local_68 = (undefined1  [16])0x0;
  uVar3 = puVar27[1];
  param_1[0x24] = 0;
  puVar27 = puVar27 + uVar3;
  lVar31 = 0;
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
    compile_matchingpath(param_1,local_48,puVar27,local_68);
    if (*piVar4 != 0) goto LAB_0012c39e;
    uVar10 = *param_1;
    if (iVar25 == 0) {
      uVar13 = 8;
      sljit_emit_op2(uVar10,0x42,0xc,0,0xc,0,0x7f);
      local_b8 = sljit_emit_cmp(uVar10,2,0xc,0,0xb,0);
      piVar29 = (int *)*param_1;
      if (*piVar29 == 0) goto LAB_0012b483;
      sljit_emit_op1(piVar4,0x20,4,0,0x8e);
    }
    else {
      uVar13 = 0x10;
      sljit_emit_op2(uVar10,0x42,0xc,0,0xc,0,0x7f);
      local_b8 = sljit_emit_cmp(uVar10,2,0xc,0,0xb,0);
      piVar29 = (int *)*param_1;
      if (*piVar29 == 0) {
LAB_0012b483:
        puVar12 = (undefined8 *)ensure_abuf(piVar29,0x18,uVar13);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = local_b8;
          uVar13 = sljit_emit_label(piVar29);
          uVar10 = param_1[0x26];
          puVar12[1] = uVar13;
          puVar12[2] = uVar10;
          param_1[0x26] = puVar12;
        }
      }
      sljit_emit_op1(piVar4,0x20,4,0,0x8e);
      if (iVar26 != 1) {
        if (iVar26 < 4) {
          sljit_emit_op1(piVar4,0x20,0x8c,8,0x7f);
        }
        else {
          local_a0 = sljit_emit_put_label_constprop_0(piVar4,8);
        }
      }
    }
    lVar14 = sljit_emit_jump(piVar4,0x24);
    if (*piVar4 == 0) {
      lVar5 = *(long *)(piVar4 + 0x18);
      lVar6 = *(long *)(lVar5 + 8);
      uVar23 = lVar6 + 0x10;
      if (uVar23 < 0xff1) {
        *(ulong *)(lVar5 + 8) = uVar23;
        plVar30 = (long *)(lVar5 + 0x10 + lVar6);
      }
      else {
        puVar12 = (undefined8 *)
                  (*(code *)**(undefined8 **)(piVar4 + 0x12))
                            (0x1000,(*(undefined8 **)(piVar4 + 0x12))[2]);
        if (puVar12 == (undefined8 *)0x0) {
          *piVar4 = 2;
          goto LAB_0012b585;
        }
        plVar30 = puVar12 + 2;
        *puVar12 = *(undefined8 *)(piVar4 + 0x18);
        *(undefined8 **)(piVar4 + 0x18) = puVar12;
        puVar12[1] = 0x10;
      }
      *plVar30 = lVar14;
      plVar30[1] = (long)local_c8;
      local_c8 = plVar30;
    }
LAB_0012b585:
    if (lVar31 == 0) {
      lVar14 = param_1[0x28];
      uVar10 = sljit_emit_label(piVar4);
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
      lVar14 = *(long *)(param_1[0x28] + 0x10);
      for (plVar30 = *(long **)(param_1[0x28] + 0x20); plVar30 != (long *)0x0;
          plVar30 = (long *)plVar30[1]) {
        lVar5 = *plVar30;
        if ((lVar5 != 0) && (lVar14 != 0)) {
          *(long *)(lVar5 + 0x18) = lVar14;
          *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      sljit_emit_op_dst_constprop_0_isra_0(piVar4,1);
      sljit_emit_op1(piVar4,0x20,4,0,0x8c,0);
      sljit_emit_op1(piVar4,0x20,0x84,lVar21,1,0);
      uVar10 = 0x12bdb1;
      copy_recurse_data_isra_0(param_1,puVar1,puVar20,4,iVar8);
      auVar32._8_8_ = extraout_RDX_00;
      auVar32._0_8_ = local_90;
      if (iVar26 != 1) {
        sljit_emit_op1(piVar4,0x20,1,0,0x8c);
        piVar29 = (int *)*param_1;
        if (*piVar29 == 0) {
          piVar29[0x26] = 0;
          iVar9 = emit_lea_binary(piVar29,0xc,0,0xc,0,0x7f,0x10);
          if (iVar9 == 4) {
            emit_cum_binary(piVar29,0x5030100,0xc,0,0xc,0,0x7f,0x10);
          }
        }
        if (iVar26 < 4) goto LAB_0012bca9;
        if (*piVar4 == 0) {
          piVar4[0x26] = 1;
          puVar18 = (undefined1 *)emit_x86_instruction(piVar4,1,0,0,1);
          if (puVar18 != (undefined1 *)0x0) {
            puVar18[1] = puVar18[1] | 0x20;
            *puVar18 = 0xff;
          }
        }
        auVar32 = sljit_emit_label(piVar4);
        uVar10 = auVar32._8_8_;
        goto joined_r0x0012be79;
      }
      piVar29 = (int *)*param_1;
      if (*piVar29 == 0) {
        piVar29[0x26] = 0;
        iVar9 = emit_lea_binary(piVar29,0xc,0,0xc,0,0x7f,8);
        auVar32._8_8_ = uVar10;
        if (iVar9 == 4) {
          emit_cum_binary(piVar29,0x5030100,0xc,0,0xc,0,0x7f,8);
          auVar32._8_8_ = extraout_RDX_01;
        }
      }
    }
    else if (iVar26 < 4) {
      auVar32 = sljit_emit_label(piVar4);
      uVar23 = auVar32._8_8_;
      if ((auVar32._0_8_ != 0) && (local_90 != 0)) {
        *(long *)(local_90 + 0x18) = auVar32._0_8_;
        uVar23 = *(ulong *)(local_90 + 0x10) & 0xfffffffffffffffd | 1;
        *(ulong *)(local_90 + 0x10) = uVar23;
      }
      auVar32._8_8_ = uVar23;
      auVar32._0_8_ = local_90;
      if ((int)lVar31 < iVar25) {
LAB_0012bca9:
        auVar32 = sljit_emit_cmp(piVar4,1,1,0,0x7f);
      }
    }
    else {
      auVar32 = sljit_emit_label(piVar4);
      uVar10 = auVar32._8_8_;
joined_r0x0012be79:
      if (local_a0 != 0) {
        uVar10 = auVar32._8_8_;
        *(long *)(local_a0 + 8) = auVar32._0_8_;
      }
      auVar32._8_8_ = uVar10;
      auVar32._0_8_ = local_90;
      if (*piVar4 == 0) {
        auVar33 = ensure_buf(piVar4,5);
        auVar7._8_8_ = auVar33._8_8_;
        auVar7._0_8_ = local_90;
        auVar32._8_8_ = auVar33._8_8_;
        puVar18 = auVar33._0_8_;
        if (puVar18 != (undefined1 *)0x0) {
          *puVar18 = 4;
          *(long *)(piVar4 + 0x20) = *(long *)(piVar4 + 0x20) + 4;
          *(undefined4 *)(puVar18 + 1) = 0xfa1e0ff3;
          auVar32 = auVar7;
        }
      }
    }
    local_90 = auVar32._0_8_;
    compile_backtrackingpath(param_1,local_58._0_8_,auVar32._8_8_);
    if (*piVar4 != 0) goto LAB_0012c39e;
    lVar14 = sljit_emit_label(piVar4);
    for (plVar30 = (long *)local_58._8_8_; plVar30 != (long *)0x0; plVar30 = (long *)plVar30[1]) {
      lVar5 = *plVar30;
      if ((lVar5 != 0) && (lVar14 != 0)) {
        *(long *)(lVar5 + 0x18) = lVar14;
        *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffd | 1;
      }
    }
    lVar31 = lVar31 + 1;
    if (*puVar27 != 0x78) {
      lVar31 = sljit_emit_label(piVar4);
      copy_recurse_data_isra_0(param_1,puVar1,puVar20,1,iVar8,uVar28);
      sljit_emit_op1(piVar4,0x20,4,0,0x8c,lVar21);
      piVar29 = (int *)*param_1;
      if (*piVar29 == 0) {
        piVar29[0x26] = 0;
        iVar9 = emit_lea_binary(piVar29,0xc,0,0xc,0,0x7f,lVar24);
        if (iVar9 == 4) {
          emit_cum_binary(piVar29,0x5030100,0xc,0,0xc,0,0x7f,lVar24);
        }
      }
      sljit_emit_op1(piVar4,0x20,1,0,0x7f,0);
      sljit_emit_op_src_constprop_0_isra_0(piVar4,4);
      if (param_1[0x2a] != 0) {
        lVar24 = sljit_emit_label(piVar4);
        for (plVar30 = (long *)param_1[0x2a]; plVar30 != (long *)0x0; plVar30 = (long *)plVar30[1])
        {
          lVar14 = *plVar30;
          if ((lVar14 != 0) && (lVar24 != 0)) {
            *(long *)(lVar14 + 0x18) = lVar24;
            *(ulong *)(lVar14 + 0x10) = *(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        sljit_emit_op1(piVar4,0x20,0xc,0,0x8e,(long)*(int *)(param_1 + 10));
        copy_recurse_data_isra_0(param_1,puVar1,puVar20,2,iVar8,uVar28);
        lVar24 = sljit_emit_jump(piVar4,0x24);
        if ((lVar31 != 0) && (lVar24 != 0)) {
          *(long *)(lVar24 + 0x18) = lVar31;
          *(ulong *)(lVar24 + 0x10) = *(ulong *)(lVar24 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      if (param_1[0x2e] != 0) {
        lVar24 = sljit_emit_label(piVar4);
        for (plVar30 = (long *)param_1[0x2e]; plVar30 != (long *)0x0; plVar30 = (long *)plVar30[1])
        {
          lVar31 = *plVar30;
          if ((lVar31 != 0) && (lVar24 != 0)) {
            *(long *)(lVar31 + 0x18) = lVar24;
            *(ulong *)(lVar31 + 0x10) = *(ulong *)(lVar31 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        sljit_emit_op1(piVar4,0x20,0xc,0,0x8e,(long)*(int *)(param_1 + 10));
        sljit_emit_op1(piVar4,0x20,4,0,0xc,0);
        uVar10 = *param_1;
        sljit_emit_op2(uVar10,0x42,0xc,0,0xc,0,0x7f,0x10);
        uVar10 = sljit_emit_cmp(uVar10,2,0xc,0,0xb,0);
        piVar29 = (int *)*param_1;
        if ((*piVar29 == 0) &&
           (puVar12 = (undefined8 *)ensure_abuf(piVar29,0x18), puVar12 != (undefined8 *)0x0)) {
          *puVar12 = uVar10;
          uVar13 = sljit_emit_label(piVar29);
          uVar10 = param_1[0x26];
          puVar12[1] = uVar13;
          puVar12[2] = uVar10;
          param_1[0x26] = puVar12;
        }
        sljit_emit_op1(piVar4,0x20,0x8c,8,0x7f,0xffffffffffffffff);
      }
      lVar24 = sljit_emit_label(piVar4);
      for (; local_c8 != (long *)0x0; local_c8 = (long *)local_c8[1]) {
        lVar31 = *local_c8;
        if ((lVar31 != 0) && (lVar24 != 0)) {
          *(long *)(lVar31 + 0x18) = lVar24;
          *(ulong *)(lVar31 + 0x10) = *(ulong *)(lVar31 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      sljit_emit_op1(piVar4,0x20,0x8c,0,4,0);
      copy_recurse_data_isra_0(param_1,puVar1,puVar20,4,iVar8,uVar28);
      sljit_emit_op1(piVar4,0x20,4,0,0x84,lVar21);
      sljit_emit_op1(piVar4,0x20,1,0,0x7f,1);
      sljit_emit_op_src_constprop_0_isra_0(piVar4,4);
LAB_0012c39e:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_48 = puVar27 + 2;
    puVar27 = puVar27 + puVar27[1];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 jit_compile(undefined8 *param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 (*pauVar12) [16];
  undefined *puVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
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
  char *pcVar19;
  size_t __n;
  uint uVar20;
  uint **ppuVar21;
  undefined8 *puVar22;
  int *piVar23;
  char *pcVar24;
  uint uVar25;
  long lVar26;
  byte *pbVar27;
  undefined4 uVar28;
  long in_FS_OFFSET;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  long local_298;
  long local_290;
  int local_27c;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  int *local_258;
  uint *local_248 [3];
  void *local_230;
  undefined8 *local_228;
  void *local_220;
  void *local_218;
  int local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  int local_1e8;
  uint local_1e4;
  int local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  int local_19c;
  int local_194;
  int local_190;
  undefined4 local_18c;
  int local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168;
  long local_160;
  undefined8 *local_158;
  ulong local_150;
  ulong local_148;
  long local_140;
  long local_138;
  long lStack_130;
  long local_128;
  long local_120;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
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
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  long *local_58;
  long *local_50;
  long local_40;
  
  bVar29 = 0;
  puVar22 = param_1 + 0x11;
  lVar26 = param_1[3];
  uVar2 = *(ushort *)((long)param_1 + 0x84);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_278 = (undefined1  [16])0x0;
  local_268 = (undefined1  [16])0x0;
  ppuVar21 = local_248;
  for (lVar15 = 0x40; lVar15 != 0; lVar15 = lVar15 + -1) {
    *ppuVar21 = (uint *)0x0;
    ppuVar21 = ppuVar21 + 1;
  }
  local_258 = (int *)((long)puVar22 +
                     (long)(int)((uint)*(ushort *)((long)param_1 + 0x86) * (uint)uVar2) * 4);
  uVar20 = param_2 & 0xfffffeff;
  local_64 = param_2 >> 8 & 1;
  local_1b8 = lVar26 + 0x100;
  local_1a0 = 1;
  if (*(short *)((long)param_1 + 0x7e) != 0) {
    local_1a0 = *(uint *)(param_1 + 0xc) >> 0xd & 1;
  }
  local_1a4 = 1;
  if (*(short *)((long)param_1 + 0x7c) == 0) {
    local_1a4 = *(uint *)(param_1 + 0xc) >> 0xd & 1;
  }
  local_248[1] = (uint *)param_1;
  local_248[2] = (uint *)local_258;
  local_1b0 = lVar26;
  local_1a8 = uVar20;
  local_158 = puVar22;
  switch(*(undefined2 *)((long)param_1 + 0x7a)) {
  default:
    uVar28 = 0xffffffd4;
    goto LAB_0012e9bd;
  case 1:
    local_178 = 0xd;
    break;
  case 2:
    local_178 = 10;
    break;
  case 3:
    local_178 = 0xd0a;
    break;
  case 4:
    local_178 = 0xd0a;
    local_184 = 1;
    break;
  case 5:
    local_178 = 0xd0a;
    local_184 = 2;
    break;
  case 6:
    break;
  }
  uVar25 = *(uint *)(param_1 + 0xb);
  local_160 = lVar26 + 0x340;
  local_180 = 0x7fffffff;
  local_174 = (*(short *)(param_1 + 0xf) == 2) + 1;
  local_70 = uVar25 >> 9 & 1;
  local_168 = uVar25 >> 4 & 1;
  local_170 = 0x7fffffff;
  local_6c = uVar25 >> 0x15 & 1;
  local_60 = uVar25 >> 0x11 & 1;
  local_68 = (uint)((uVar25 & 0x80000) != 0);
  if ((uVar25 & 0x80000) == 0) {
    local_64 = 0;
    piVar23 = local_258;
    goto LAB_0012cba0;
  }
  if (local_184 == 1) {
    local_180 = 0x2029;
    local_17c = 10;
  }
  else if (local_184 == 2) {
    local_180 = 0xd;
    local_17c = 10;
  }
  else {
    local_180 = local_178 & 0xff;
    local_17c = 10;
    if (local_184 == 0) {
      local_17c = local_178 & 0xff;
    }
  }
  local_16c = 10;
  local_170 = 0xd;
  if (local_174 == 1) {
    local_170 = 0x2029;
  }
  piVar23 = local_258 + (uint)local_258[1];
  iVar4 = *piVar23;
  while (iVar4 == 0x78) {
LAB_0012cba0:
    piVar23 = piVar23 + (uint)piVar23[1];
    iVar4 = *piVar23;
  }
  piVar23 = piVar23 + 2;
  local_204 = 0x28;
  local_150 = (ulong)*(ushort *)((long)param_1 + 0x86);
  local_148 = (ulong)uVar2;
  local_220 = (void *)(*(code *)*param_1)((ulong)*(ushort *)(param_1 + 0x10) + 1,param_1[2]);
  if (local_220 == (void *)0x0) goto LAB_0012f598;
  memset(local_220,1,(ulong)*(ushort *)(param_1 + 0x10) + 1);
  iVar4 = check_opcode_types(local_248,local_248[2],piVar23);
  if (iVar4 == 0) {
LAB_0012f7d1:
    (*(code *)param_1[1])(local_220,param_1[2]);
  }
  else {
    if (uVar20 == 1) {
      uVar25 = local_204;
      if (((*(byte *)(param_1 + 0xc) & 0x80) != 0) && ((*(uint *)(param_1 + 0xb) & 0x10000) == 0)) {
        uVar25 = local_204 + 8;
        local_1fc = local_204;
      }
    }
    else {
      local_1f4 = local_204;
      uVar25 = local_204 + 8;
      if (uVar20 == 2) {
        uVar25 = local_204 + 0x10;
        local_1f0 = local_204 + 8;
      }
    }
    local_204 = uVar25;
    uVar25 = local_204;
    if ((*(uint *)(param_1 + 0xb) & 0x800100) != 0) {
      uVar25 = local_204 + 8;
      local_1ec = local_204;
    }
    local_204 = uVar25;
    uVar25 = local_204;
    if (local_1e4 != 0) {
      uVar25 = local_204 + 8;
      local_1e4 = local_204;
    }
    local_204 = uVar25;
    uVar25 = local_204;
    if (local_19c != 0) {
      uVar25 = local_204 + 8;
      local_200 = local_204;
    }
    local_204 = uVar25;
    if ((local_204 & 8) != 0) {
      local_204 = local_204 + 8;
    }
    if (local_200 == 0) {
      local_200 = local_204;
    }
    if (local_1e0 != 0) {
      memset(local_220,0,(ulong)*(ushort *)(param_1 + 0x10) + 1);
    }
    __n = (long)piVar23 - (long)local_248[2];
    local_208 = (*(ushort *)(param_1 + 0x10) + 1) * 0x10 + local_204;
    local_230 = (void *)(*(code *)*param_1)((5 - (ulong)(local_194 == 0)) * ((long)__n >> 2));
    if (local_230 == (void *)0x0) goto LAB_0012f7d1;
    memset(local_230,0,__n);
    local_27c = local_208 + 8 + (uint)*(ushort *)(param_1 + 0x10) * 8;
    if ((-1 < (int)*(uint *)(param_1 + 0xb)) &&
       ((*(uint *)(param_1 + 0xb) & 0x10000) == 0 && local_190 == 0)) {
      detect_early_fail(local_248,local_248[2],&local_27c,0,0);
    }
    set_private_data_ptrs(local_248,&local_27c,piVar23);
    if (0x10000 < local_27c) {
      (*(code *)param_1[1])(local_230,param_1[2]);
      (*(code *)param_1[1])(local_220,param_1[2]);
      goto LAB_0012f598;
    }
    if (local_194 != 0) {
      local_218 = (void *)(__n + (long)local_230);
      memset(local_218,0,(long)__n >> 2);
      set_then_offsets(local_248,local_248[2],0);
    }
    puVar5 = (uint *)(*(code *)*param_1)(0xa0,param_1[2]);
    if (puVar5 == (uint *)0x0) {
LAB_0012f575:
      (*(code *)param_1[1])(local_220,param_1[2]);
      (*(code *)param_1[1])(local_230,param_1[2]);
    }
    else {
      puVar5[0] = 0;
      puVar5[1] = 0;
      puVar5[0x26] = 0;
      puVar5[0x27] = 0;
      puVar22 = (undefined8 *)((ulong)(puVar5 + 2) & 0xfffffffffffffff8);
      for (uVar16 = (ulong)(((int)puVar5 -
                            (int)(undefined8 *)((ulong)(puVar5 + 2) & 0xfffffffffffffff8)) + 0xa0U
                           >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar22 = 0;
        puVar22 = puVar22 + (ulong)bVar29 * -2 + 1;
      }
      *(undefined8 **)(puVar5 + 0x12) = param_1;
      uVar6 = (*(code *)*param_1)(0x1000,param_1[2]);
      uVar31 = param_1[2];
      *(undefined8 *)(puVar5 + 0x16) = uVar6;
      puVar7 = (undefined8 *)(*(code *)*param_1)(0x1000,uVar31);
      puVar22 = *(undefined8 **)(puVar5 + 0x16);
      *(undefined8 **)(puVar5 + 0x18) = puVar7;
      if (puVar22 == (undefined8 *)0x0) {
LAB_0012f55c:
        if (puVar7 != (undefined8 *)0x0) {
          (*(code *)param_1[1])(puVar7,param_1[2]);
        }
        (*(code *)param_1[1])(puVar5,param_1[2]);
        goto LAB_0012f575;
      }
      if (puVar7 == (undefined8 *)0x0) {
        (*(code *)param_1[1])(puVar22,param_1[2]);
        puVar7 = *(undefined8 **)(puVar5 + 0x18);
        goto LAB_0012f55c;
      }
      *puVar22 = 0;
      puVar22[1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      iVar4 = compiler_initialized;
      puVar5[0x1e] = 0xffffffff;
      puVar5[0x1a] = 0xffffffff;
      puVar5[0x1b] = 0xffffffff;
      puVar5[0x1c] = 0xffffffff;
      puVar5[0x1d] = 0xffffffff;
      if (iVar4 == 0) {
        get_cpu_features();
        _DAT_0012ffe0 = _LC29;
        compiler_initialized = 1;
        DAT_0012fff0 = _LC30;
        sse2_data = 0x80000000;
        DAT_0012ffd0 = 0x7fffffff;
      }
      iVar4 = local_27c;
      uVar6 = _UNK_00131588;
      uVar31 = __LC31;
      local_248[0] = puVar5;
      if (*puVar5 == 0) {
        puVar5[1] = 0;
        *(undefined8 *)(puVar5 + 0x1a) = uVar31;
        *(undefined8 *)(puVar5 + 0x1c) = uVar6;
        puVar8 = (undefined1 *)ensure_buf(puVar5,5);
        if (puVar8 == (undefined1 *)0x0) {
          if (*puVar5 != 0) goto LAB_0012cbc0;
        }
        else {
          *puVar8 = 4;
          *(long *)(puVar5 + 0x20) = *(long *)(puVar5 + 0x20) + 4;
          *(undefined4 *)(puVar8 + 1) = 0xfa1e0ff3;
        }
        puVar5[0x26] = 0;
        lVar26 = 0xd;
        do {
          if ((byte)reg_map[lVar26] < 8) {
            puVar8 = (undefined1 *)ensure_buf(puVar5,2);
            if (puVar8 == (undefined1 *)0x0) goto LAB_0012cbc0;
            *puVar8 = 1;
            pcVar24 = puVar8 + 1;
            *(long *)(puVar5 + 0x20) = *(long *)(puVar5 + 0x20) + 1;
          }
          else {
            puVar8 = (undefined1 *)ensure_buf(puVar5,3);
            if (puVar8 == (undefined1 *)0x0) goto LAB_0012cbc0;
            *puVar8 = 2;
            pcVar24 = puVar8 + 2;
            *(long *)(puVar5 + 0x20) = *(long *)(puVar5 + 0x20) + 2;
            puVar8[1] = 0x41;
          }
          pcVar19 = reg_lmap + lVar26;
          lVar26 = lVar26 + -1;
          *pcVar24 = *pcVar19 + 'P';
        } while (lVar26 != 8);
        puVar8 = (undefined1 *)emit_x86_instruction(puVar5,1,3,0,0xd,0);
        if (puVar8 == (undefined1 *)0x0) {
          if (*puVar5 != 0) goto LAB_0012cbc0;
        }
        else {
          *puVar8 = 0x89;
        }
        uVar25 = (iVar4 + 0x3fU & 0xfffffff0) - 0x30;
        puVar5[0x1e] = uVar25;
        if ((0 < (int)uVar25) &&
           (lVar26 = emit_x86_instruction(puVar5,0x11,0x7f,(long)(int)uVar25,0xe,0), lVar26 != 0)) {
          *(byte *)(lVar26 + 1) = *(byte *)(lVar26 + 1) | 0x28;
        }
      }
LAB_0012cbc0:
      reset_ovector(local_248,*(ushort *)(param_1 + 0x10) + 2 + (uint)*(ushort *)(param_1 + 0x10));
      if (local_1fc != 0) {
        sljit_emit_op1(puVar5,0x20,0x8e,(long)(int)local_1fc,1,0);
      }
      sljit_emit_op1(puVar5,0x20,9,0,0xd,0);
      sljit_emit_op1(puVar5,0x20,1,0,0xd,0);
      sljit_emit_op1(puVar5,0x20,2,0,0x81,8);
      sljit_emit_op1(puVar5,0x20,0xd,0,0x81,0x18);
      sljit_emit_op1(puVar5,0x20,4,0,0x81,0);
      sljit_emit_op1(puVar5,0x25,1,0,0x81,0x50);
      sljit_emit_op1(puVar5,0x20,0xc,0,0x84,8);
      sljit_emit_op1(puVar5,0x20,0xb,0,0x84,0x10);
      sljit_emit_op2(puVar5,0x40,1,0,1,0,0x7f,1);
      sljit_emit_op1(puVar5,0x20,0x8e,0x20,1,0);
      if ((int)local_1d0 < local_1d0._4_4_) {
        reset_early_fail(local_248);
      }
      if (uVar20 == 2) {
        sljit_emit_op1(puVar5,0x20,0x8e,(long)(int)local_1f0,0x7f,0xffffffffffffffff);
      }
      if (local_1e8 != 0) {
        sljit_emit_op1(puVar5,0x20,0x8e,(long)local_1e8,0x7f,0);
      }
      if (local_1e4 != 0) {
        sljit_emit_op1(puVar5,0x20,0x8e,(long)(int)local_1e4,0x7f,0);
      }
      if (*(int *)(param_1 + 0xb) < 0) {
        local_298 = sljit_emit_label(puVar5);
        local_290 = 0;
joined_r0x0012ea3e:
        lVar26 = 0;
        if (uVar20 == 1) goto LAB_0012ea44;
      }
      else {
        local_290 = mainloop_entry(local_248);
        local_298 = sljit_emit_label(puVar5);
        if ((*(byte *)((long)param_1 + 0x5a) & 1) != 0) goto joined_r0x0012ea3e;
        if ((uVar20 != 1) || (iVar4 = fast_forward_first_n_chars(local_248), iVar4 == 0)) {
          uVar25 = *(uint *)(param_1 + 0xc);
          if ((uVar25 & 0x10) == 0) {
            if ((uVar25 & 0x200) == 0) {
              if ((uVar25 & 0x40) != 0) {
                fast_forward_start_bits(local_248);
              }
            }
            else {
              fast_forward_newline(local_248);
            }
          }
          else {
            uVar25 = *(uint *)((long)local_248[1] + 0x70);
            uVar17 = uVar25;
            if ((*(byte *)((long)local_248[1] + 0x60) & 0x20) != 0) {
              if (uVar25 < 0x100) {
                uVar17 = (uint)*(byte *)(local_1b8 + (ulong)uVar25);
                if ((0x7f < uVar25) && (local_68 != 0 || local_60 != 0)) {
LAB_0012f101:
                  puVar13 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar25 >> 7) * 2) * 0x80 +
                                               (uVar25 & 0x7f)) * 2) * 0xc;
LAB_0012f139:
                  uVar17 = *(int *)(puVar13 + 4) + uVar25;
                }
              }
              else if (local_68 != 0 || local_60 != 0) {
                puVar13 = &_pcre2_dummy_ucd_record_32;
                if (uVar25 < 0x110000) goto LAB_0012f101;
                goto LAB_0012f139;
              }
            }
            fast_forward_first_char2(local_248,uVar25,uVar17,0);
          }
          goto joined_r0x0012ea3e;
        }
LAB_0012ea44:
        lVar26 = 0;
        if ((*(short *)((long)param_1 + 0x7e) != 0) && ((*(byte *)((long)param_1 + 0x5a) & 1) == 0))
        {
          sljit_emit_op1(puVar5,0x20,1,0,0x7f,0xffffffffffffffff);
          sljit_emit_op2(puVar5,0x40,4,0,2,0,0x7f,(uint)*(ushort *)((long)param_1 + 0x7e) << 2);
          lVar26 = sljit_emit_cmp(puVar5,4,4,0,0xd,0);
        }
      }
      plVar11 = (long *)0x0;
      if (local_1fc != 0) {
        plVar11 = (long *)search_requested_char
                                    (local_248,*(undefined4 *)((long)param_1 + 0x74),
                                     *(uint *)(param_1 + 0xc) >> 8 & 1,
                                     *(uint *)(param_1 + 0xc) >> 4 & 1);
      }
      sljit_emit_op1(puVar5,0x20,0x8e,(long)(int)local_204,2,0);
      sljit_emit_op1(puVar5,0x20,10,0,0x8e,0x20);
      if (local_1e0 != 0) {
        sljit_emit_op1(puVar5,0x20,0x8e,(long)local_1e0,0x7f,0);
      }
      if (local_1d8 != 0) {
        sljit_emit_op1(puVar5,0x20,0x8e,
                       (long)(*(int *)((long)local_230 + ((local_1d8 + 4) - (long)local_248[2])) >>
                             3),2,0);
      }
      if (local_200 != local_204) {
        sljit_emit_op1(puVar5,0x20,0x8e,(long)(int)local_200,2,0);
      }
      if (uVar20 == 2) {
        lVar15 = sljit_emit_cmp(puVar5,1,0x8e,(long)(int)local_1f0,0x7f,0xffffffffffffffff);
        sljit_emit_op1(puVar5,0x20,0x8e,(long)(int)local_1f4,2,0);
        lVar9 = sljit_emit_label(puVar5);
        if ((lVar15 != 0) && (lVar9 != 0)) {
          *(long *)(lVar15 + 0x18) = lVar9;
          *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      else if (uVar20 == 4) {
        sljit_emit_op1(puVar5,0x20,0x8e,(long)(int)local_1f4,2,0);
      }
      compile_matchingpath(local_248,local_248[2],piVar23,local_278);
      if (*puVar5 != 0) {
        sljit_free_compiler(puVar5);
        (*(code *)param_1[1])(local_220,param_1[2]);
        (*(code *)param_1[1])(local_230,param_1[2]);
        while (local_228 != (undefined8 *)0x0) {
          puVar22 = (undefined8 *)*local_228;
          (*(code *)param_1[1])(local_228,param_1[2]);
          local_228 = puVar22;
        }
        goto LAB_0012f598;
      }
      local_2b0 = 0;
      if ((*(byte *)((long)param_1 + 0x5b) & 0x20) != 0) {
        local_2b0 = sljit_emit_cmp(puVar5,1,2,0,0xd,0);
      }
      local_2a8 = 0;
      local_2b8 = 0;
      if (local_1a0 != 0) {
        local_2a8 = sljit_emit_cmp(puVar5,0,2,0,0x8e,(long)(int)local_204);
        local_2b8 = sljit_emit_label(puVar5);
      }
      local_128 = sljit_emit_label(puVar5);
      if (local_d8 != (long *)0x0) {
        do {
          lVar15 = *local_d8;
          if ((lVar15 != 0) && (local_128 != 0)) {
            *(long *)(lVar15 + 0x18) = local_128;
            *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
          }
          local_d8 = (long *)local_d8[1];
        } while (local_d8 != (long *)0x0);
      }
      copy_ovector(local_248,*(ushort *)(param_1 + 0x10) + 1);
      local_138 = sljit_emit_label(puVar5);
      if (local_f8 != (long *)0x0) {
        do {
          lVar15 = *local_f8;
          if ((lVar15 != 0) && (local_138 != 0)) {
            *(long *)(lVar15 + 0x18) = local_138;
            *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
          }
          local_f8 = (long *)local_f8[1];
        } while (local_f8 != (long *)0x0);
      }
      for (; local_e8 != (long *)0x0; local_e8 = (long *)local_e8[1]) {
        lVar15 = *local_e8;
        if ((lVar15 != 0) && (local_138 != 0)) {
          *(long *)(lVar15 + 0x18) = local_138;
          *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      if ((lVar26 != 0) && (local_138 != 0)) {
        *(long *)(lVar26 + 0x18) = local_138;
        *(ulong *)(lVar26 + 0x10) = *(ulong *)(lVar26 + 0x10) & 0xfffffffffffffffd | 1;
      }
      lStack_130 = local_138;
      if (*puVar5 == 0) {
        puVar5[0x26] = 0;
        if (((int)puVar5[0x1e] < 1) ||
           (lVar26 = emit_x86_instruction(puVar5,0x11,0x7f,(long)(int)puVar5[0x1e],0xe,0),
           lVar26 != 0)) {
          uVar25 = puVar5[0x1a];
          if (7 < (int)uVar25) {
            lVar26 = 8;
            do {
              if ((byte)reg_map[lVar26] < 8) {
                puVar8 = (undefined1 *)ensure_buf(puVar5,2);
                if (puVar8 == (undefined1 *)0x0) goto LAB_0012d0e8;
                *puVar8 = 1;
                pcVar24 = puVar8 + 1;
                *(long *)(puVar5 + 0x20) = *(long *)(puVar5 + 0x20) + 1;
              }
              else {
                puVar8 = (undefined1 *)ensure_buf(puVar5,3);
                if (puVar8 == (undefined1 *)0x0) goto LAB_0012d0e8;
                *puVar8 = 2;
                pcVar24 = puVar8 + 2;
                *(long *)(puVar5 + 0x20) = *(long *)(puVar5 + 0x20) + 2;
                puVar8[1] = 0x41;
              }
              pcVar19 = reg_lmap + lVar26;
              lVar26 = lVar26 + 1;
              *pcVar24 = *pcVar19 + 'X';
            } while ((int)lVar26 <= (int)uVar25);
          }
          iVar14 = 0xe - puVar5[0x1b];
          iVar4 = 0xd - (puVar5[1] & 3);
          if (iVar14 <= iVar4) {
            lVar26 = (long)iVar14;
            pcVar24 = reg_lmap + lVar26;
            pbVar27 = reg_map + lVar26;
            do {
              if (*pbVar27 < 8) {
                puVar8 = (undefined1 *)ensure_buf(puVar5,2);
                if (puVar8 == (undefined1 *)0x0) goto LAB_0012d0e8;
                *puVar8 = 1;
                pcVar19 = puVar8 + 1;
                *(long *)(puVar5 + 0x20) = *(long *)(puVar5 + 0x20) + 1;
              }
              else {
                puVar8 = (undefined1 *)ensure_buf(puVar5,3);
                if (puVar8 == (undefined1 *)0x0) goto LAB_0012d0e8;
                *puVar8 = 2;
                pcVar19 = puVar8 + 2;
                *(long *)(puVar5 + 0x20) = *(long *)(puVar5 + 0x20) + 2;
                puVar8[1] = 0x41;
              }
              cVar1 = *pcVar24;
              pbVar27 = pbVar27 + 1;
              pcVar24 = pcVar24 + 1;
              *pcVar19 = cVar1 + 'X';
            } while ((byte *)(lVar26 + 0x1314d1 + (ulong)(uint)(iVar4 - iVar14)) != pbVar27);
          }
        }
        else {
LAB_0012d0e8:
          if (*puVar5 != 0) goto LAB_0012d0fb;
        }
        emit_byte(puVar5,0xc3);
      }
LAB_0012d0fb:
      if (local_e0 != (long *)0x0) {
        lVar26 = sljit_emit_label(puVar5);
        for (; local_e0 != (long *)0x0; local_e0 = (long *)local_e0[1]) {
          lVar15 = *local_e0;
          if ((lVar15 != 0) && (lVar26 != 0)) {
            *(long *)(lVar15 + 0x18) = lVar26;
            *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        sljit_emit_op1(puVar5,0x20,1,0,0x7f,0xffffffffffffffff);
        lVar26 = lStack_130;
        lVar15 = sljit_emit_jump(puVar5,0x24);
        if ((lVar15 != 0) && (lVar26 != 0)) {
          *(long *)(lVar15 + 0x18) = lVar26;
          *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
        }
      }
      if ((((*(byte *)((long)param_1 + 0x5b) & 0x20) != 0) &&
          (lVar26 = sljit_emit_label(puVar5), local_2b0 != 0)) && (lVar26 != 0)) {
        *(long *)(local_2b0 + 0x18) = lVar26;
        *(ulong *)(local_2b0 + 0x10) = *(ulong *)(local_2b0 + 0x10) & 0xfffffffffffffffd | 1;
      }
      if (uVar20 != 1) {
        local_140 = sljit_emit_label(puVar5);
        for (; local_100 != (long *)0x0; local_100 = (long *)local_100[1]) {
          lVar26 = *local_100;
          if ((lVar26 != 0) && (local_140 != 0)) {
            *(long *)(lVar26 + 0x18) = local_140;
            *(ulong *)(lVar26 + 0x10) = *(ulong *)(lVar26 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        return_with_partial_match(local_248,local_138);
      }
      lVar26 = 0;
      if (local_1a0 != 0) {
        lVar26 = sljit_emit_label(puVar5);
      }
      compile_backtrackingpath(local_248,local_268._0_8_);
      if (*puVar5 == 0) {
        lVar15 = sljit_emit_label();
        if (uVar20 == 2) {
          lVar9 = sljit_emit_cmp(puVar5,1,0x8e,(long)(int)local_1f0,0x7f,0);
          sljit_emit_op1(puVar5,0x20,1,0,0x8e,(long)(int)local_200);
          sljit_emit_op1(puVar5,0x20,0x8e,(long)(int)local_1f4,0x7f,0xffffffffffffffff);
          sljit_emit_op1(puVar5,0x20,0x8e,(long)(int)local_1f0,1,0);
          lVar10 = sljit_emit_label(puVar5);
          if ((lVar9 != 0) && (lVar10 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar10;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        if ((-1 < *(int *)(param_1 + 0xb)) && (local_1ec != 0)) {
          sljit_emit_op1(puVar5,0x20,1,0,0x8e);
        }
        uVar25 = local_200;
        if (local_1d8 != 0) {
          uVar25 = *(int *)((long)local_230 + ((local_1d8 + 4) - (long)local_248[2])) >> 3;
        }
        sljit_emit_op1(puVar5,0x20,2,0,0x8e,(long)(int)uVar25);
        if (-1 < (int)*(uint *)(param_1 + 0xb)) {
          if (local_120 == 0) {
            lVar9 = sljit_emit_cmp(puVar5,2,2,0,(-(local_1ec == 0) & 0xcU) + 1,0);
            if ((local_290 != 0) && (lVar9 != 0)) {
              *(long *)(lVar9 + 0x18) = local_290;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          else if ((*(uint *)(param_1 + 0xb) & 0x100) == 0) {
            if (local_1ec == 0) {
              lVar9 = sljit_emit_cmp(puVar5,2,2,0,0xd,0);
              if (lVar9 != 0) {
                *(long *)(lVar9 + 0x18) = local_120;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            else {
              sljit_emit_op1(puVar5,0x20,3);
              sljit_emit_op1(puVar5,0x20,0xd,0,1,0);
              lVar9 = sljit_emit_cmp(puVar5,2,2,0,1,0);
              if ((lVar9 != 0) && (local_120 != 0)) {
                *(long *)(lVar9 + 0x18) = local_120;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
              sljit_emit_op1(puVar5,0x20,0xd,0,3,0);
            }
          }
        }
        if (plVar11 != (long *)0x0) {
          lVar9 = sljit_emit_label(puVar5);
          do {
            lVar10 = *plVar11;
            if ((lVar10 != 0) && (lVar9 != 0)) {
              *(long *)(lVar10 + 0x18) = lVar9;
              *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
            }
            plVar11 = (long *)plVar11[1];
          } while (plVar11 != (long *)0x0);
        }
        lVar9 = local_140;
        if (((uVar20 == 2) &&
            (lVar10 = sljit_emit_cmp(puVar5,1,0x8e,(long)(int)local_1f0,0x7f,0xffffffffffffffff),
            lVar10 != 0)) && (lVar9 != 0)) {
          *(long *)(lVar10 + 0x18) = lVar9;
          *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
        }
        sljit_emit_op1(puVar5,0x20,1,0,0x7f,0xffffffffffffffff);
        lVar9 = local_138;
        lVar10 = sljit_emit_jump(puVar5,0x24);
        if ((lVar10 != 0) && (lVar9 != 0)) {
          *(long *)(lVar10 + 0x18) = lVar9;
          *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
        }
        flush_stubs(local_248);
        if (local_1a0 != 0) {
          lVar9 = sljit_emit_label(puVar5);
          if ((lVar9 != 0) && (local_2a8 != 0)) {
            *(long *)(local_2a8 + 0x18) = lVar9;
            *(ulong *)(local_2a8 + 0x10) = *(ulong *)(local_2a8 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(puVar5,0x20,1,0,9,0);
          sljit_emit_op1(puVar5,0x25,4,0,0x81,0x58);
          if (*puVar5 == 0) {
            puVar5[0x26] = 0;
            puVar8 = (undefined1 *)emit_x86_instruction(puVar5,1,0x7f,4,4,0);
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = 0xf7;
            }
          }
          lVar9 = sljit_emit_jump(puVar5,1);
          if ((lVar9 != 0) && (lVar26 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar26;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          if (*puVar5 == 0) {
            puVar5[0x26] = 0;
            puVar8 = (undefined1 *)emit_x86_instruction(puVar5,1,0x7f,8,4,0);
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = 0xf7;
            }
          }
          lVar9 = sljit_emit_jump(puVar5,0);
          if ((lVar9 != 0) && (local_2b8 != 0)) {
            *(long *)(lVar9 + 0x18) = local_2b8;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(puVar5,0x20,4,0,0x81,8);
          lVar9 = sljit_emit_cmp(puVar5,1,4,0,2,0);
          if ((lVar9 != 0) && (local_2b8 != 0)) {
            *(long *)(lVar9 + 0x18) = local_2b8;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          lVar9 = sljit_emit_jump(puVar5,0x24);
          if ((lVar9 != 0) && (lVar26 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar26;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        lVar26 = local_138;
        local_1d8 = 0;
        local_1d0 = 0;
        local_108 = local_110;
        local_18c = 1;
        if (local_110 != (long *)0x0) {
          iVar4 = local_27c + 7;
          if (-1 < local_27c) {
            iVar4 = local_27c;
          }
          local_1c8 = (iVar4 >> 3) + 7 >> 3;
          local_1c0 = (*(code *)*param_1)((long)local_1c8,param_1[2]);
          if (local_1c0 != 0) {
            do {
              compile_recurse(local_248);
              if (*puVar5 != 0) break;
              flush_stubs(local_248);
              local_108 = (long *)*local_108;
            } while (local_108 != (long *)0x0);
            (*(code *)param_1[1])(local_1c0,param_1[2]);
          }
          if (local_108 != (long *)0x0) {
            sljit_free_compiler(puVar5);
            (*(code *)param_1[1])(local_220,param_1[2]);
            (*(code *)param_1[1])(local_230,param_1[2]);
            while (local_228 != (undefined8 *)0x0) {
              puVar22 = (undefined8 *)*local_228;
              (*(code *)param_1[1])(local_228,param_1[2]);
              local_228 = puVar22;
            }
            goto LAB_0012f598;
          }
        }
        local_18c = 0;
        local_138 = lVar26;
        lVar26 = sljit_emit_label(puVar5);
        for (; local_c8 != (long *)0x0; local_c8 = (long *)local_c8[1]) {
          lVar9 = *local_c8;
          if ((lVar9 != 0) && (lVar26 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar26;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        if (*puVar5 == 0) {
          puVar5[0x26] = 1;
          puVar8 = (undefined1 *)emit_x86_instruction(puVar5,1,0,0,0x8e,0);
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = 0x8f;
          }
        }
        sljit_emit_op1(puVar5,0x20,0x8e,8,2,0);
        sljit_emit_op1(puVar5,0x20,1,0,9,0);
        uVar16 = 0x2000;
        sljit_emit_op2(puVar5,0x42,2,0,0xb,0,0x7f,0x2000);
        sljit_emit_op1(puVar5,0x20,1,0,0x81,0);
        sljit_emit_op1(puVar5,0x20,0xb,0,4,0);
        sljit_emit_icall_constprop_0_isra_0(puVar5,0x111,sljit_stack_resize);
        lVar26 = sljit_emit_cmp(puVar5,0,1,0,0x7f,0);
        sljit_emit_op1(puVar5,0x20,4,0,0xb,0);
        sljit_emit_op1(puVar5,0x20,0xb,0,1,0);
        sljit_emit_op1(puVar5,0x20,1,0,0x8e,0);
        sljit_emit_op1(puVar5,0x20,2,0,0x8e,8);
        sljit_emit_op_src_constprop_0_isra_0(puVar5,1);
        lVar9 = sljit_emit_label(puVar5);
        if ((lVar9 != 0) && (lVar26 != 0)) {
          *(long *)(lVar26 + 0x18) = lVar9;
          *(ulong *)(lVar26 + 0x10) = *(ulong *)(lVar26 + 0x10) & 0xfffffffffffffffd | 1;
        }
        sljit_emit_op1(puVar5,0x20,1,0,0x7f,0xffffffffffffffd2);
        lVar26 = local_138;
        lVar9 = sljit_emit_jump(puVar5,0x24);
        if ((lVar9 != 0) && (lVar26 != 0)) {
          *(long *)(lVar9 + 0x18) = lVar26;
          *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
        }
        lVar26 = sljit_emit_label(puVar5);
        for (; local_d0 != (long *)0x0; local_d0 = (long *)local_d0[1]) {
          lVar9 = *local_d0;
          if ((lVar9 != 0) && (lVar26 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar26;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
        }
        sljit_emit_op1(puVar5,0x20,1,0,0x7f,0xffffffffffffffd1);
        lVar26 = local_138;
        auVar30 = sljit_emit_jump(puVar5,0x24);
        uVar18 = auVar30._8_8_;
        lVar9 = auVar30._0_8_;
        if ((lVar26 != 0) && (lVar9 != 0)) {
          *(long *)(lVar9 + 0x18) = lVar26;
          uVar18 = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          *(ulong *)(lVar9 + 0x10) = uVar18;
        }
        if (local_c0 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          puVar3 = local_248[0];
          for (; local_c0 != (long *)0x0; local_c0 = (long *)local_c0[1]) {
            lVar9 = *local_c0;
            if ((lVar9 != 0) && (lVar26 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar26;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          sljit_emit_op_dst_constprop_0_isra_0(local_248[0],5);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            puVar8 = (undefined1 *)emit_x86_instruction(puVar3,1,0xe,0,1,0);
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = 0x89;
            }
          }
          lVar26 = sljit_emit_label(puVar3);
          sljit_emit_op1(puVar3,0x20,4,0,0x8c,0xfffffffffffffff8);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            lVar9 = emit_x86_instruction(puVar3,0x11,0x7f,0,4,0);
            if (lVar9 != 0) {
              *(byte *)(lVar9 + 1) = *(byte *)(lVar9 + 1) | 0x38;
            }
          }
          lVar9 = sljit_emit_jump(puVar3,9);
          sljit_emit_op2(puVar3,0x40,4,0,4,0,1,0);
          sljit_emit_op1(puVar3,0x20,1,0,0x8c,0xfffffffffffffff0);
          sljit_emit_op1(puVar3,0x20,3,0,0x8c,0xffffffffffffffe8);
          sljit_emit_op2(puVar3,0x42,0xc,0,0xc,0,0x7f,0x18);
          sljit_emit_op1(puVar3,0x20,0x84,0,1,0);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            puVar8 = (undefined1 *)emit_x86_instruction(puVar3,1,0xe,0,1,0);
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = 0x89;
            }
          }
          sljit_emit_op1(puVar3,0x20,0x84,8,3,0);
          lVar10 = sljit_emit_jump(puVar3,0x24);
          if ((lVar10 != 0) && (lVar26 != 0)) {
            *(long *)(lVar10 + 0x18) = lVar26;
            *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
          }
          lVar10 = sljit_emit_label(puVar3);
          if ((lVar10 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar10;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          lVar9 = sljit_emit_jump(puVar3,1);
          sljit_emit_op_src_constprop_0_isra_0(puVar3,5);
          lVar10 = sljit_emit_label(puVar3);
          if ((lVar10 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar10;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op2(puVar3,0x42,4,0,0x7f,0,4,0);
          sljit_emit_op2(puVar3,0x40,4,0,4,0,1,0);
          sljit_emit_op1(puVar3,0x20,3,0,0x8c,0xfffffffffffffff0);
          uVar18 = 0x7f;
          sljit_emit_op2(puVar3,0x42,0xc,0,0xc,0,0x7f,0x10);
          sljit_emit_op1(puVar3,0x20,0x84,0,3,0);
          lVar9 = sljit_emit_jump(puVar3,0x24);
          if ((lVar9 != 0) && (lVar26 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar26;
            uVar18 = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            *(ulong *)(lVar9 + 0x10) = uVar18;
          }
        }
        if (local_b8 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          for (; local_b8 != (long *)0x0; local_b8 = (long *)local_b8[1]) {
            lVar9 = *local_b8;
            if ((lVar9 != 0) && (lVar26 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar26;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          check_wordboundary(local_248,0);
          uVar18 = extraout_RDX;
        }
        if (local_b0 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          for (; local_b0 != (long *)0x0; local_b0 = (long *)local_b0[1]) {
            lVar9 = *local_b0;
            if ((lVar9 != 0) && (lVar26 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar26;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          check_wordboundary(local_248,1);
          uVar18 = extraout_RDX_00;
        }
        if (local_a8 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          for (; local_a8 != (long *)0x0; local_a8 = (long *)local_a8[1]) {
            lVar9 = *local_a8;
            if ((lVar9 != 0) && (lVar26 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar26;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          check_anynewline_isra_0(local_248[0]);
          uVar18 = extraout_RDX_01;
        }
        if (local_a0 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          puVar3 = local_248[0];
          for (; local_a0 != (long *)0x0; local_a0 = (long *)local_a0[1]) {
            lVar9 = *local_a0;
            if ((lVar9 != 0) && (lVar26 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar26;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          sljit_emit_op_dst_constprop_0_isra_0(local_248[0],5);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            lVar26 = emit_x86_instruction(puVar3,0x11,0x7f,9,1,0);
            if (lVar26 != 0) {
              *(byte *)(lVar26 + 1) = *(byte *)(lVar26 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(puVar3,0x20,4,0);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            lVar26 = emit_x86_instruction(puVar3,0x11,0x7f,0x20,1,0);
            if (lVar26 != 0) {
              *(byte *)(lVar26 + 1) = *(byte *)(lVar26 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(puVar3,0x46,4,0);
          uVar16 = (ulong)*puVar3;
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            emit_cmp_binary(puVar3,1,0,0x7f,0xa0);
          }
          sljit_emit_op_flags_constprop_0_isra_0(puVar3,0x46,4,0);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            emit_cmp_binary(puVar3,1,0,0x7f,0x1680);
          }
          sljit_emit_op_flags_constprop_0_isra_0(puVar3,0x46,4,0);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            emit_cmp_binary(puVar3,1,0,0x7f,0x180e);
          }
          sljit_emit_op_flags_constprop_0_isra_0(puVar3,0x46,4,0);
          sljit_emit_op2(puVar3,0x42,1,0,1,0,0x7f,0x2000);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            lVar26 = emit_x86_instruction(puVar3,0x11,0x7f,10,1,0);
            if (lVar26 != 0) {
              *(byte *)(lVar26 + 1) = *(byte *)(lVar26 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(puVar3,0x46,4);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            lVar26 = emit_x86_instruction(puVar3,0x11,0x7f,0x2f,1,0);
            if (lVar26 != 0) {
              *(byte *)(lVar26 + 1) = *(byte *)(lVar26 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(puVar3,0x46,4);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            lVar26 = emit_x86_instruction(puVar3,0x11,0x7f,0x5f,1,0);
            if (lVar26 != 0) {
              *(byte *)(lVar26 + 1) = *(byte *)(lVar26 + 1) | 0x38;
            }
          }
          sljit_emit_op_flags_constprop_0_isra_0(puVar3,0x46,4);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            emit_cmp_binary(puVar3,1,0,0x7f,0x1000);
          }
          sljit_emit_op_flags_constprop_0_isra_0(puVar3,0x246,4);
          sljit_emit_op_src_constprop_0_isra_0(puVar3,5);
          uVar18 = extraout_RDX_02;
        }
        if (local_98 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          for (; local_98 != (long *)0x0; local_98 = (long *)local_98[1]) {
            lVar9 = *local_98;
            if ((lVar9 != 0) && (lVar26 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar26;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          check_anynewline_isra_0(local_248[0]);
          uVar18 = extraout_RDX_03;
        }
        if (local_90 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          puVar3 = local_248[0];
          for (; local_90 != (long *)0x0; local_90 = (long *)local_90[1]) {
            lVar9 = *local_90;
            if ((lVar9 != 0) && (lVar26 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar26;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          if (*local_248[0] == 0) {
            local_248[0][0x26] = 1;
            puVar8 = (undefined1 *)emit_x86_instruction(local_248[0],1,0,0,0x8e,0);
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = 0x8f;
            }
          }
          sljit_emit_op2(puVar3,0x42,2,0,2,0,4,0);
          lVar26 = sljit_emit_label(puVar3);
          sljit_emit_op1(puVar3,0x25,3,0,0x81,0);
          sljit_emit_op1(puVar3,0x25,5,0,0x82,0);
          sljit_emit_op2(puVar3,0x40,1,0,1,0,0x7f,4);
          sljit_emit_op2(puVar3,0x40,2,0,2,0,0x7f,4);
          lVar9 = sljit_emit_cmp(puVar3,1,3,0,5,0);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            uVar16 = 4;
            emit_non_cum_binary(puVar3,0x2d2b2928,4,0,4,0,0x7f,4);
          }
          lVar10 = sljit_emit_jump(puVar3,1);
          if ((lVar26 != 0) && (lVar10 != 0)) {
            *(long *)(lVar10 + 0x18) = lVar26;
            *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
          }
          lVar26 = sljit_emit_label(puVar3);
          if ((lVar26 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar26;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(puVar3,0x20,1,0,0x8e,0);
          sljit_emit_op_src_constprop_0_isra_0(puVar3,1);
          uVar18 = extraout_RDX_04;
        }
        if (local_88 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          puVar3 = local_248[0];
          for (; local_88 != (long *)0x0; local_88 = (long *)local_88[1]) {
            lVar9 = *local_88;
            if ((lVar9 != 0) && (lVar26 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar26;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          if (*local_248[0] == 0) {
            local_248[0][0x26] = 1;
            puVar8 = (undefined1 *)emit_x86_instruction(local_248[0],1,0,0,0x8e,0);
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = 0x8f;
            }
          }
          sljit_emit_op2(puVar3,0x42,2,0,2,0,4,0);
          sljit_emit_op1(puVar3,0x20,0x8e,8,0xd,0);
          sljit_emit_op1(puVar3,0x20,3,0,0x7f,local_1b0);
          lVar26 = sljit_emit_label(puVar3);
          sljit_emit_op1(puVar3,0x25,0xd,0,0x81,0);
          sljit_emit_op1(puVar3,0x25,5,0,0x82,0);
          sljit_emit_op2(puVar3,0x40,1,0,1,0,0x7f,4);
          lVar9 = sljit_emit_cmp(puVar3,4,0xd,0,0x7f,0xff);
          sljit_emit_op1(puVar3,0x21,0xd,0,0xd83,0);
          lVar10 = sljit_emit_label(puVar3);
          if ((lVar10 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar10;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          lVar9 = sljit_emit_cmp(puVar3,4,5,0,0x7f,0xff);
          sljit_emit_op1(puVar3,0x21,5,0,0x583,0);
          lVar10 = sljit_emit_label(puVar3);
          if ((lVar10 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar10;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op2(puVar3,0x40,2,0,2,0,0x7f,4);
          auVar30 = sljit_emit_cmp(puVar3,1,0xd,0,5,0);
          uVar31 = auVar30._8_8_;
          lVar9 = auVar30._0_8_;
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            uVar31 = 4;
            emit_non_cum_binary(puVar3,0x2d2b2928,4,0,4,0,0x7f);
          }
          lVar10 = sljit_emit_jump(puVar3,1,uVar31);
          if ((lVar26 != 0) && (lVar10 != 0)) {
            *(long *)(lVar10 + 0x18) = lVar26;
            *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffd | 1;
          }
          lVar26 = sljit_emit_label(puVar3);
          if ((lVar26 != 0) && (lVar9 != 0)) {
            *(long *)(lVar9 + 0x18) = lVar26;
            *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(puVar3,0x20,1,0,0x8e,0);
          sljit_emit_op1(puVar3,0x20,0xd,0,0x8e,8);
          sljit_emit_op_src_constprop_0_isra_0(puVar3,1);
          uVar18 = extraout_RDX_05;
        }
        if (local_80 == (long *)0x0) {
          if (local_78 != (long *)0x0) goto LAB_0012f4e1;
        }
        else {
          if (local_78 != (long *)0x0) {
LAB_0012f4e1:
            lVar26 = sljit_emit_label(puVar5);
            for (; local_78 != (long *)0x0; local_78 = (long *)local_78[1]) {
              lVar9 = *local_78;
              if ((lVar9 != 0) && (lVar26 != 0)) {
                *(long *)(lVar9 + 0x18) = lVar26;
                *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
              }
            }
            sljit_emit_op1(puVar5,0x20,2,0,0x8e,(long)(int)local_200);
          }
          lVar26 = sljit_emit_label(puVar5);
          for (; local_80 != (long *)0x0; local_80 = (long *)local_80[1]) {
            lVar9 = *local_80;
            if ((lVar9 != 0) && (lVar26 != 0)) {
              *(long *)(lVar9 + 0x18) = lVar26;
              *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          do_reset_match(local_248,
                         *(ushort *)(param_1 + 0x10) + 2 + (uint)*(ushort *)(param_1 + 0x10));
          lVar26 = sljit_emit_cmp(puVar5,4,2,0,1,0);
          if ((lVar26 != 0) && (local_298 != 0)) {
            *(long *)(lVar26 + 0x18) = local_298;
            *(ulong *)(lVar26 + 0x10) = *(ulong *)(lVar26 + 0x10) & 0xfffffffffffffffd | 1;
          }
          sljit_emit_op1(puVar5,0x20,2,0,1,0);
          auVar30 = sljit_emit_jump(puVar5,0x24);
          uVar18 = auVar30._8_8_;
          lVar26 = auVar30._0_8_;
          if ((lVar15 != 0) && (lVar26 != 0)) {
            *(long *)(lVar26 + 0x18) = lVar15;
            uVar18 = *(ulong *)(lVar26 + 0x10) & 0xfffffffffffffffd | 1;
            *(ulong *)(lVar26 + 0x10) = uVar18;
          }
        }
        if (local_58 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          for (; local_58 != (long *)0x0; local_58 = (long *)local_58[1]) {
            lVar15 = *local_58;
            if ((lVar15 != 0) && (lVar26 != 0)) {
              *(long *)(lVar15 + 0x18) = lVar26;
              *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          do_getucd(local_248);
          uVar18 = extraout_RDX_06;
        }
        if (local_50 != (long *)0x0) {
          lVar26 = sljit_emit_label(puVar5);
          puVar3 = local_248[0];
          for (; local_50 != (long *)0x0; local_50 = (long *)local_50[1]) {
            lVar15 = *local_50;
            if ((lVar15 != 0) && (lVar26 != 0)) {
              *(long *)(lVar15 + 0x18) = lVar26;
              *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          sljit_emit_op_dst_constprop_0_isra_0(local_248[0],5);
          if (local_68 == 0) {
            lVar26 = sljit_emit_cmp(puVar3,2,1,0,0x7f,0x110000);
            sljit_emit_op1(puVar3,0x20,1,0,0x7f,0x378);
            lVar15 = sljit_emit_label(puVar3);
            if ((lVar15 != 0) && (lVar26 != 0)) {
              *(long *)(lVar26 + 0x18) = lVar15;
              *(ulong *)(lVar26 + 0x10) = *(ulong *)(lVar26 + 0x10) & 0xfffffffffffffffd | 1;
            }
          }
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            emit_shift_with_flags(puVar3,0x28,0,4,0,1,0,0x7f,7);
            if (*puVar3 == 0) {
              puVar3[0x26] = 0;
              emit_shift_with_flags(puVar3,0x20,0,4,0,4,0,0x7f,1);
            }
          }
          sljit_emit_op1(puVar3,0x23,4,0,0x84);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            emit_cum_binary(puVar3,0x25232120,1,0,1,0,0x7f,0x7f);
            if (*puVar3 == 0) {
              puVar3[0x26] = 0;
              emit_shift_with_flags(puVar3,0x20,0,4,0,4,0,0x7f,7,uVar16);
            }
          }
          sljit_emit_op2(puVar3,0x40,1,0,1,0,4,0);
          sljit_emit_op1(puVar3,0x20,4,0,0x7f,&_pcre2_ucd_stage2_32);
          sljit_emit_op1(puVar3,0x23,4,0,0x184,1);
          uVar31 = 0x20;
          sljit_emit_op1(puVar3,0x20,1,0,0x7f,&DAT_00136019);
          if (*puVar3 == 0) {
            puVar3[0x26] = 0;
            emit_shift_with_flags(puVar3,0x20,0,4,0,4,0,0x7f,2,uVar31);
          }
          uVar18 = 0;
          sljit_emit_op2(puVar3,0x40,1,0,1,0,4);
          sljit_emit_op1(puVar3,0x21,1,0,0x481,1);
          sljit_emit_op_src_constprop_0_isra_0(puVar3,5);
        }
        (*(code *)param_1[1])(local_220,param_1[2],uVar18);
        (*(code *)param_1[1])(local_230,param_1[2]);
        lVar15 = sljit_generate_code(puVar5);
        lVar26 = *(long *)(puVar5 + 0x24);
        sljit_free_compiler(puVar5);
        if (lVar15 != 0) {
          pauVar12 = (undefined1 (*) [16])param_1[4];
          if (pauVar12 == (undefined1 (*) [16])0x0) {
            pauVar12 = (undefined1 (*) [16])(*(code *)*param_1)(0x50,param_1[2]);
            if (pauVar12 == (undefined1 (*) [16])0x0) {
              sljit_free_exec(lVar15);
              while (local_228 != (undefined8 *)0x0) {
                puVar22 = (undefined8 *)*local_228;
                (*(code *)param_1[1])(local_228,param_1[2]);
                local_228 = puVar22;
              }
              goto LAB_0012f598;
            }
            pauVar12[4] = (undefined1  [16])0x0;
            *pauVar12 = (undefined1  [16])0x0;
            pauVar12[1] = (undefined1  [16])0x0;
            pauVar12[2] = (undefined1  [16])0x0;
            pauVar12[3] = (undefined1  [16])0x0;
            *(ulong *)(pauVar12[4] + 8) =
                 CONCAT44(*(undefined4 *)(param_1 + 0xd),*(ushort *)(param_1 + 0x10) + 1);
            param_1[4] = pauVar12;
          }
          uVar16 = 0;
          if (uVar20 != 1) {
            uVar16 = (ulong)((uVar20 != 2) + 1);
          }
          plVar11 = (long *)(*pauVar12 + uVar16 * 8);
          *plVar11 = lVar15;
          plVar11[3] = (long)local_228;
          plVar11[6] = lVar26;
          uVar28 = 0;
          goto LAB_0012e9bd;
        }
        while (local_228 != (undefined8 *)0x0) {
          puVar22 = (undefined8 *)*local_228;
          (*(code *)param_1[1])(local_228,param_1[2]);
          local_228 = puVar22;
        }
      }
      else {
        sljit_free_compiler(puVar5);
        (*(code *)param_1[1])(local_220,param_1[2]);
        (*(code *)param_1[1])(local_230,param_1[2]);
        while (local_228 != (undefined8 *)0x0) {
          puVar22 = (undefined8 *)*local_228;
          (*(code *)param_1[1])(local_228,param_1[2]);
          local_228 = puVar22;
        }
      }
    }
  }
LAB_0012f598:
  uVar28 = 0xffffffd0;
LAB_0012e9bd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar28;
}



undefined8 pcre2_jit_compile_32(long param_1,uint param_2)

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
LAB_0012f981:
    if ((param_2 & 2) != 0) {
      if (plVar1 != (long *)0x0) goto LAB_0012f92a;
LAB_0012f98b:
      uVar2 = jit_compile(param_1,param_2 & 0xfffffffa);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    if ((param_2 & 4) == 0) {
      return 0;
    }
    if (plVar1 == (long *)0x0) goto LAB_0012f9a6;
  }
  else {
    if ((plVar1 == (long *)0x0) || (*plVar1 == 0)) {
      uVar2 = jit_compile(param_1,param_2 & 0xfffffff9);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0012f981;
    }
    if ((param_2 & 2) != 0) {
LAB_0012f92a:
      if (plVar1[1] == 0) goto LAB_0012f98b;
    }
    if ((param_2 & 4) == 0) {
      return 0;
    }
  }
  if (plVar1[2] != 0) {
    return 0;
  }
LAB_0012f9a6:
  uVar2 = jit_compile(param_1,param_2 & 0xfffffffc);
  return uVar2;
}



undefined8
pcre2_jit_match_32(long param_1,long param_2,long param_3,long param_4,uint param_5,long param_6,
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
    goto LAB_0012fba2;
  }
  local_a0 = param_2 + param_4 * 4;
  local_90 = param_2 + param_3 * 4;
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
LAB_0012fc1c:
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
    if (lVar3 == 0) goto LAB_0012fc1c;
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
  *(long *)(param_6 + 0x58) = local_80 - param_2 >> 2;
  *(undefined8 *)(param_6 + 0x48) = 0;
  *(undefined8 *)(param_6 + 0x50) = 0;
  *(undefined8 *)(param_6 + 0x28) = local_78;
  *(undefined1 *)(param_6 + 0x60) = 2;
LAB_0012fba2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pcre2_jit_free_unused_memory_32(void)

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
      if (pvVar3 == (void *)0x0) goto LAB_0012fd6d;
    }
  }
LAB_0012fd6d:
  pthread_mutex_unlock((pthread_mutex_t *)allocator_lock);
  return;
}



undefined8 * pcre2_jit_stack_create_32(ulong param_1,ulong param_2,undefined8 param_3)

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
    puVar1 = (undefined8 *)_pcre2_memctl_malloc_32(0x20,param_3);
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



void pcre2_jit_stack_assign_32(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x20) = param_3;
  }
  return;
}



void pcre2_jit_stack_free_32(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    munmap(*(void **)(lVar1 + 0x18),*(long *)(lVar1 + 8) - (long)*(void **)(lVar1 + 0x18));
    (**(code **)(param_1 + 8))(lVar1,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0012ff61. Too many branches */
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



void compile_xclass_matchingpath_cold(undefined8 param_1,undefined8 param_2)

{
  undefined4 unaff_R15D;
  
  FUN_00118423(param_1,param_2,unaff_R15D);
  return;
}


