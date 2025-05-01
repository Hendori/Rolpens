
uint * get_chr_property_list(uint *param_1,uint param_2,int param_3,long param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined7 uVar11;
  uint uVar12;
  
  uVar8 = *param_1;
  puVar7 = param_1 + 1;
  uVar3 = uVar8 - 0x21;
  *param_5 = uVar8;
  if (uVar3 < 0x41) {
    uVar11 = (undefined7)((ulong)param_1 >> 8);
    if (uVar8 < 0x55) {
      if (uVar8 < 0x48) {
        if (uVar8 < 0x3b) {
          if (uVar8 < 0x2e) {
            if ((uVar8 - 0x27 < 3) || (uVar3 == 0xc)) {
              uVar2 = 0x21;
              goto LAB_00100130;
            }
            param_5[1] = (uint)(1 < uVar8 - 0x23 && (uVar3 & 0xfffffffd) != 8);
            goto LAB_001002e2;
          }
          uVar3 = uVar8 - 0x2e;
          if ((uVar8 - 0x34 < 3) || (uVar3 == 0xc)) {
            uVar2 = 0x2e;
LAB_00100130:
            uVar12 = uVar2;
            puVar7 = param_1 + 2;
            goto LAB_001000d6;
          }
          param_5[1] = (uint)((uVar3 & 0xfffffffd) != 8) & (uint)CONCAT71(uVar11,1 < uVar8 - 0x30);
          goto LAB_0010014a;
        }
        uVar3 = uVar8 - 0x3b;
        if ((uVar8 - 0x41 < 3) || (uVar3 == 0xc)) {
          uVar2 = 0x3b;
          goto LAB_00100130;
        }
        param_5[1] = (uint)(1 < uVar8 - 0x3d && (uVar3 & 0xfffffffd) != 8);
        goto LAB_0010033d;
      }
      uVar3 = uVar8 - 0x48;
      if ((uVar8 - 0x4e < 3) || (uVar3 == 0xc)) {
        uVar2 = 0x48;
        goto LAB_00100130;
      }
      param_5[1] = (uint)(1 < uVar8 - 0x4a && (uVar3 & 0xfffffffd) != 8);
LAB_00100374:
      uVar3 = 0x1f;
    }
    else {
      uVar3 = uVar8 - 0x55;
      uVar12 = 0x55;
      uVar2 = 0x55;
      if ((uVar8 - 0x5b < 3) || (uVar3 == 0xc)) goto LAB_00100130;
LAB_001000d6:
      param_5[1] = (uint)((uVar3 & 0xfffffffd) != 8) & (uint)CONCAT71(uVar11,1 < uVar3 - 2);
      if (uVar12 == 0x3b) {
LAB_0010033d:
        *param_5 = 0x1f;
LAB_001002ec:
        uVar3 = *puVar7;
        param_5[3] = 0xffffffff;
        param_5[2] = uVar3;
        return puVar7 + 1;
      }
      if (0x3b < uVar12) {
        if (uVar12 != 0x48) {
          uVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          *param_5 = uVar8;
          goto LAB_00100080;
        }
        goto LAB_00100374;
      }
      if (uVar12 == 0x21) {
LAB_001002e2:
        *param_5 = 0x1d;
        goto LAB_001002ec;
      }
LAB_0010014a:
      uVar3 = 0x1d;
    }
  }
  else {
    param_5[1] = 0;
LAB_00100080:
    if (0x20 < uVar8) {
      if (uVar8 - 0x6e < 3) {
        puVar9 = puVar7 + 8;
        if (uVar8 == 0x70) {
          puVar9 = puVar7 + ((ulong)*puVar7 - 1);
        }
        puVar10 = puVar9;
        if (*puVar9 - 0x62 < 0xc) {
          uVar4 = 1L << ((byte)(*puVar9 - 0x62) & 0x3f);
          if ((uVar4 & 0x533) == 0) {
            if ((uVar4 & 0x8c0) == 0) {
              if ((uVar4 & 0x20c) != 0) {
                puVar10 = puVar9 + 1;
              }
            }
            else {
              puVar10 = puVar9 + 3;
              param_5[1] = (uint)(puVar9[1] == 0);
            }
          }
          else {
            param_5[1] = 1;
            puVar10 = puVar9 + 1;
          }
        }
        param_5[2] = (uint)((long)puVar10 - (long)puVar7 >> 2);
        return puVar10;
      }
switchD_001000a0_caseD_6:
      return (uint *)0x0;
    }
    if (uVar8 < 6) {
      return (uint *)0x0;
    }
    switch(uVar8) {
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
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
      return puVar7;
    default:
      goto switchD_001000a0_caseD_6;
    case 0xf:
    case 0x10:
      if (*puVar7 == 10) {
        uVar3 = puVar7[1];
        lVar5 = 0;
        do {
          iVar1 = *(int *)(&_pcre2_ucd_caseless_sets_32 + lVar5 + (ulong)uVar3 * 4);
          *(int *)((long)param_5 + lVar5 + 8) = iVar1;
          lVar5 = lVar5 + 4;
          if (iVar1 == -1) {
            *param_5 = (uVar8 != 0x10) + 0x1d + (uint)(uVar8 != 0x10);
            goto LAB_0010023a;
          }
        } while (lVar5 != 0x18);
        param_5[2] = puVar7[2];
        param_5[3] = puVar7[3];
      }
      else {
        param_5[2] = *puVar7;
        param_5[3] = puVar7[1];
      }
LAB_0010023a:
      return puVar7 + 2;
    case 0x1d:
    case 0x1f:
      goto LAB_001002ec;
    case 0x1e:
    case 0x20:
      uVar3 = (uVar8 != 0x1e) + 0x1d + (uint)(uVar8 != 0x1e);
    }
  }
  *param_5 = uVar3;
  uVar3 = *puVar7;
  param_5[2] = uVar3;
  if (uVar3 < 0x80) {
LAB_00100248:
    uVar8 = (uint)*(byte *)(param_4 + (ulong)uVar3);
    goto LAB_0010024f;
  }
  if ((uVar3 < 0x100) && ((param_2 & 1) == 0)) {
    if (param_3 == 0) goto LAB_00100248;
LAB_0010017e:
    puVar6 = &_pcre2_ucd_records_32 +
             (ulong)*(ushort *)
                     (&_pcre2_ucd_stage2_32 +
                     (long)(int)((uint)*(ushort *)
                                        (&_pcre2_ucd_stage1_32 + (long)((int)uVar3 >> 7) * 2) * 0x80
                                + (uVar3 & 0x7f)) * 2) * 0xc;
  }
  else {
    if (uVar3 < 0x110000) goto LAB_0010017e;
    puVar6 = &_pcre2_dummy_ucd_record_32;
  }
  uVar8 = *(int *)(puVar6 + 4) + uVar3;
LAB_0010024f:
  param_5[3] = uVar8;
  if (uVar3 == uVar8) {
    param_5[3] = 0xffffffff;
  }
  else {
    param_5[4] = 0xffffffff;
  }
  return puVar7 + 1;
}



uint compare_opcodes(uint *param_1,undefined4 param_2,undefined4 param_3,long param_4,uint *param_5,
                    uint *param_6,int *param_7)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_7;
  uVar7 = 0;
  *param_7 = iVar5 + -1;
  if (iVar5 + -1 < 1) {
switchD_0010051d_caseD_83:
    uVar7 = 0;
  }
  else {
LAB_00100495:
    do {
      while( true ) {
        for (; uVar6 = *param_1, uVar6 == 0x76; param_1 = param_1 + DAT_0010209e) {
        }
        if (uVar6 != 0x77) break;
        param_1 = param_1 + param_1[3];
      }
      while (uVar6 == 0x78) {
        param_1 = param_1 + param_1[1];
        uVar6 = *param_1;
        if (uVar6 != 0x78) break;
        param_1 = param_1 + param_1[1];
        uVar6 = *param_1;
      }
      if (uVar6 == 0) {
        uVar7 = (uint)(param_5[1] != 0);
        goto LAB_00100723;
      }
      if (uVar6 - 0x79 < 0x20) {
        uVar8 = 1L << ((byte)(uVar6 - 0x79) & 0x3f);
        if ((uVar8 & 0x15000) != 0) {
          uVar7 = 1;
          puVar11 = param_1 + param_1[1];
          param_1 = param_1 + (byte)(&_pcre2_OP_lengths_32)[uVar6];
          if (*puVar11 == 0x78) {
            do {
              iVar5 = compare_opcodes(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
              if (iVar5 == 0) goto switchD_0010051d_caseD_83;
              param_1 = puVar11 + 2;
              puVar11 = puVar11 + puVar11[1];
            } while (*puVar11 == 0x78);
            uVar7 = 1;
          }
          goto LAB_00100495;
        }
        if ((uVar8 & 0xc0000000) != 0) {
          puVar11 = param_1 + 1;
          if (((param_1[1] & 0xfffffffd) != 0x85) && (param_1[1] != 0x89))
          goto switchD_0010051d_caseD_83;
          do {
            puVar11 = puVar11 + puVar11[1];
          } while (*puVar11 == 0x78);
          iVar5 = compare_opcodes(puVar11 + 2,param_2,param_3,param_4,param_5,param_6,param_7);
          if (iVar5 == 0) goto switchD_0010051d_caseD_83;
          param_1 = param_1 + (byte)(&_pcre2_OP_lengths_32)[uVar6];
          goto LAB_00100495;
        }
        if ((uVar8 & 9) != 0) {
          if (param_5[1] == 0) goto switchD_0010051d_caseD_83;
          switch(param_1[-(ulong)param_1[1]]) {
          case 0x7f:
          case 0x80:
          case 0x85:
            uVar7 = uVar7 ^ 1;
            goto LAB_00100723;
          case 0x81:
          case 0x82:
            uVar7 = (uVar7 ^ 1) & (uint)((param_1 + -(ulong)param_1[1])[2] != 0x7e);
            goto LAB_00100723;
          case 0x83:
          case 0x84:
            goto switchD_0010051d_caseD_83;
          case 0x86:
            if (1 < *param_5 - 0x1d) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 0x89:
          case 0x8a:
          case 0x8e:
          case 0x8f:
            if (*(int *)(param_4 + 300) != 0) goto switchD_0010051d_caseD_83;
          }
          param_1 = param_1 + (byte)(&_pcre2_OP_lengths_32)[uVar6];
          goto LAB_00100495;
        }
      }
      param_1 = (uint *)get_chr_property_list
                                  (param_1,param_2,param_3,*(undefined8 *)(param_4 + 0x10));
      if (param_1 == (uint *)0x0) goto switchD_0010051d_caseD_83;
      uVar6 = *param_5;
      if (uVar6 == 0x1d) {
        puVar11 = param_5 + 2;
        uVar6 = local_68;
        puVar9 = &local_68;
LAB_00100820:
        do {
          uVar3 = *puVar11;
          uVar8 = (ulong)uVar3;
          switch(uVar6) {
          case 6:
            if (0xff < uVar3) goto switchD_0010051d_caseD_83;
            if ((*(byte *)(*(long *)(param_4 + 0x20) + uVar8) & 8) == 0) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 7:
            if ((uVar3 < 0x100) && ((*(byte *)(*(long *)(param_4 + 0x20) + uVar8) & 8) != 0)) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 8:
            if (0xff < uVar3) goto switchD_0010051d_caseD_83;
            if ((*(byte *)(*(long *)(param_4 + 0x20) + uVar8) & 1) == 0) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 9:
            if ((uVar3 < 0x100) && ((*(byte *)(*(long *)(param_4 + 0x20) + uVar8) & 1) != 0)) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 10:
            if (0xff < uVar3) goto switchD_0010051d_caseD_83;
            if ((*(byte *)(*(long *)(param_4 + 0x20) + uVar8) & 0x10) == 0) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 0xb:
            if ((uVar3 < 0xff) && ((*(byte *)(*(long *)(param_4 + 0x20) + uVar8) & 0x10) != 0)) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          default:
            goto switchD_0010051d_caseD_83;
          case 0xf:
          case 0x10:
            bVar15 = uVar6 == 0xf;
            uVar4 = puVar9[3];
            pbVar13 = &_pcre2_dummy_ucd_record_32;
            if (uVar3 < 0x110000) {
              pbVar13 = &_pcre2_ucd_records_32 +
                        (ulong)*(ushort *)
                                (&_pcre2_ucd_stage2_32 +
                                (long)(int)((uint)*(ushort *)
                                                   (&_pcre2_ucd_stage1_32 +
                                                   (long)((int)uVar3 >> 7) * 2) * 0x80 +
                                           (uVar3 & 0x7f)) * 2) * 0xc;
            }
            switch(puVar9[2]) {
            default:
              goto switchD_0010051d_caseD_83;
            case 1:
              bVar15 = ((byte)(pbVar13[1] - 8) < 2 || pbVar13[1] == 5) == bVar15;
              goto LAB_00100a89;
            case 2:
              bVar14 = *(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar13[1] * 4) == uVar4;
              break;
            case 3:
              bVar14 = pbVar13[1] == uVar4;
              break;
            case 4:
              bVar14 = *pbVar13 == uVar4;
              break;
            case 5:
              bVar14 = true;
              if (uVar4 != *pbVar13) {
                bVar14 = (1 << ((byte)uVar4 & 0x1f) &
                         *(uint *)(&_pcre2_ucd_script_sets_32 +
                                  ((ulong)(uVar4 >> 5) + (ulong)(*(ushort *)(pbVar13 + 8) & 0x3ff))
                                  * 4)) != 0;
              }
              if (bVar15 == bVar14) goto switchD_00100835_caseD_18;
              uVar7 = 0;
              goto LAB_00100723;
            case 6:
              bVar14 = (*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar13[1] * 4) & 0xfffffffd) == 1
              ;
              break;
            case 7:
            case 8:
              if (uVar3 != 0x180e) {
                if (uVar3 < 0x180f) {
                  if (uVar3 != 0x85) {
                    if (uVar3 < 0x86) {
                      if (uVar3 < 0xe) {
                        if (uVar3 < 9) goto LAB_00100a6b;
                      }
                      else if (uVar3 != 0x20) goto LAB_00100a6b;
                    }
                    else if ((uVar3 != 0xa0) && (uVar3 != 0x1680)) goto LAB_00100a6b;
                  }
                }
                else if (uVar3 < 0x2060) {
                  if (uVar3 < 0x2028) {
                    if (10 < uVar3 - 0x2000) {
LAB_00100a6b:
                      bVar14 = *(int *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar13[1] * 4) == 6;
                      break;
                    }
                  }
                  else if ((0x80000000000083U >> ((ulong)(uVar3 - 0x2028) & 0x3f) & 1) == 0)
                  goto LAB_00100a6b;
                }
                else if (uVar3 != 0x3000) goto LAB_00100a6b;
              }
              goto LAB_0010126d;
            case 9:
              bVar15 = ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar13[1] * 4) & 0xfffffffd) ==
                        1 || uVar3 == 0x5f) == bVar15;
              goto LAB_00100a89;
            case 10:
              puVar12 = (uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)pbVar13[3] * 4);
              do {
                uVar4 = *puVar12;
                if (uVar3 < uVar4) {
                  bVar15 = uVar6 != 0xf;
                  goto LAB_00100a89;
                }
                puVar12 = puVar12 + 1;
              } while (uVar3 != uVar4);
LAB_0010126d:
              if (uVar6 == 0xf) goto switchD_00100835_caseD_18;
              uVar7 = 0;
              goto LAB_00100723;
            }
            bVar15 = bVar14 == bVar15;
LAB_00100a89:
            if (!bVar15) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 0x11:
          case 0x15:
          case 0x17:
          case 0x19:
            if (uVar3 == 0x85) goto switchD_0010051d_caseD_83;
            if (uVar3 < 0x86) {
              if (uVar3 - 10 < 4) goto switchD_0010051d_caseD_83;
            }
            else if (uVar3 - 0x2028 < 2) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 0x12:
            if (uVar3 != 0x180e) {
              if (uVar3 < 0x180f) {
                if (uVar3 != 0xa0) {
                  if (uVar3 < 0xa1) {
                    if ((uVar3 != 9) && (uVar3 != 0x20)) {
                      uVar7 = 0;
                      goto LAB_00100723;
                    }
                  }
                  else if (uVar3 != 0x1680) {
                    uVar7 = 0;
                    goto LAB_00100723;
                  }
                }
              }
              else if (uVar3 != 0x205f) {
                if (uVar3 < 0x2060) {
                  if (uVar3 < 0x200b) {
                    if (uVar3 < 0x2000) {
                      uVar7 = 0;
                      goto LAB_00100723;
                    }
                  }
                  else if (uVar3 != 0x202f) {
                    uVar7 = 0;
                    goto LAB_00100723;
                  }
                }
                else if (uVar3 != 0x3000) {
                  uVar7 = 0;
                  goto LAB_00100723;
                }
              }
            }
            break;
          case 0x13:
            if (uVar3 == 0x180e) goto switchD_0010051d_caseD_83;
            if (uVar3 < 0x180f) {
              if (uVar3 == 0xa0) goto switchD_0010051d_caseD_83;
              if (uVar3 < 0xa1) {
                if (uVar3 == 9) goto switchD_0010051d_caseD_83;
                if (uVar3 == 0x20) {
                  uVar7 = 0;
                  goto LAB_00100723;
                }
              }
              else if (uVar3 == 0x1680) {
                uVar7 = 0;
                goto LAB_00100723;
              }
            }
            else {
              if (uVar3 == 0x205f) goto switchD_0010051d_caseD_83;
              if (uVar3 < 0x2060) {
                if (uVar3 < 0x200b) {
                  if (0x1fff < uVar3) {
                    uVar7 = 0;
                    goto LAB_00100723;
                  }
                }
                else if (uVar3 == 0x202f) {
                  uVar7 = 0;
                  goto LAB_00100723;
                }
              }
              else if (uVar3 == 0x3000) {
                uVar7 = 0;
                goto LAB_00100723;
              }
            }
            break;
          case 0x14:
            if (uVar3 != 0x85) {
              if (uVar3 < 0x86) {
                if (3 < uVar3 - 10) {
                  uVar7 = 0;
                  goto LAB_00100723;
                }
              }
              else if (1 < uVar3 - 0x2028) {
                uVar7 = 0;
                goto LAB_00100723;
              }
            }
            break;
          case 0x18:
            break;
          case 0x1d:
            puVar12 = puVar9 + 2;
            do {
              if (*puVar12 == uVar3) {
                uVar7 = 0;
                goto LAB_00100723;
              }
              puVar12 = puVar12 + 1;
            } while (*puVar12 != 0xffffffff);
            break;
          case 0x1f:
            puVar12 = puVar9 + 2;
            while (*puVar12 != uVar3) {
              puVar12 = puVar12 + 1;
              if (*puVar12 == 0xffffffff) goto switchD_0010051d_caseD_83;
            }
            if (uVar3 == 0xffffffff) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 0x6e:
            if (uVar3 < 0x100) goto LAB_00100b8c;
            break;
          case 0x6f:
            if (0xff < uVar3) {
              uVar7 = 0;
              goto LAB_00100723;
            }
LAB_00100b8c:
            puVar12 = param_1;
            if (puVar9 != &local_68) {
              puVar12 = param_6;
            }
            if ((*(byte *)((long)puVar12 + (ulong)(uVar3 >> 3) + (ulong)puVar9[2] * -4) >>
                 (uVar3 & 7) & 1) != 0) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            break;
          case 0x70:
            puVar12 = param_1;
            if (puVar9 != &local_68) {
              puVar12 = param_6;
            }
            iVar5 = _pcre2_xclass_32(uVar8,puVar12 + (1 - (ulong)puVar9[2]));
            if (iVar5 != 0) {
              uVar7 = 0;
              goto LAB_00100723;
            }
          }
switchD_00100835_caseD_18:
          puVar11 = puVar11 + 1;
          if (*puVar11 == 0xffffffff) goto LAB_001006ff;
          uVar6 = *puVar9;
        } while( true );
      }
      if (local_68 == 0x1d) {
        puVar11 = &local_60;
        puVar9 = param_5;
        goto LAB_00100820;
      }
      if (uVar6 != 0x6e) {
        if (local_68 == 0x6e) {
          puVar9 = param_1 + -(ulong)local_60;
          puVar11 = param_5;
          goto LAB_001007a9;
        }
        if (1 < uVar6 - 0xf) {
          if (((uVar6 - 6 < 0x11) && (local_68 - 6 < 0x15)) &&
             (autoposstab[(ulong)(local_68 - 6) + (ulong)(uVar6 - 6) * 0x15] != '\0'))
          goto LAB_001006ff;
          goto switchD_0010051d_caseD_83;
        }
        if (local_68 == 0x18) goto LAB_001006ff;
        if (1 < local_68 - 0xf) goto switchD_0010051d_caseD_83;
        bVar2 = propposstab[(ulong)local_60 + (ulong)param_5[2] * 0xe];
        switch(bVar2) {
        default:
          goto switchD_0010051d_caseD_83;
        case 1:
          bVar15 = uVar6 == 0x10 && local_68 == 0x10;
          break;
        case 2:
          bVar15 = (param_5[3] == local_5c) != (uVar6 == local_68);
          break;
        case 3:
          if (uVar6 != local_68) goto LAB_001006ff;
          uVar7 = 0;
          goto LAB_00100723;
        case 4:
          if (local_68 == 0x10) {
            uVar4 = param_5[3];
            uVar3 = local_5c;
            goto LAB_00100fbf;
          }
          goto switchD_0010051d_caseD_83;
        case 5:
          if (uVar6 != 0x10) goto switchD_0010051d_caseD_83;
          uVar3 = param_5[3];
          uVar4 = local_5c;
LAB_00100fbf:
          if ((bool)catposstab[(ulong)uVar3 + (ulong)uVar4 * 0x1e] == (uVar6 == local_68))
          goto LAB_001006ff;
          uVar7 = 0;
          goto LAB_00100723;
        case 6:
        case 7:
        case 8:
          lVar1 = (long)(int)(bVar2 - 6) * 4;
          if (local_68 == 0x10) {
            bVar15 = false;
            if ((local_5c != (byte)posspropstab[lVar1]) &&
               (local_5c != (byte)posspropstab[lVar1 + 1])) {
              bVar2 = posspropstab[lVar1 + 2];
LAB_00100d83:
              bVar15 = bVar2 != local_5c || uVar6 != 0x10;
            }
            goto LAB_00100d91;
          }
          goto switchD_0010051d_caseD_83;
        case 9:
        case 10:
        case 0xb:
          lVar1 = (long)(int)(bVar2 - 9) * 4;
          if (uVar6 == 0x10) {
            uVar6 = param_5[3];
            bVar15 = false;
            if ((uVar6 != (byte)posspropstab[lVar1]) && (uVar6 != (byte)posspropstab[lVar1 + 1])) {
              bVar15 = (byte)posspropstab[lVar1 + 2] == uVar6;
LAB_00100ddd:
              bVar15 = !bVar15 || local_68 != 0x10;
            }
            goto LAB_00100deb;
          }
          goto switchD_0010051d_caseD_83;
        case 0xc:
        case 0xd:
        case 0xe:
          lVar1 = (long)(int)(bVar2 - 0xc) * 4;
          if (local_68 != 0x10) goto switchD_0010051d_caseD_83;
          bVar15 = false;
          if ((catposstab[(ulong)local_5c + (ulong)(byte)posspropstab[lVar1] * 0x1e] != '\0') &&
             (bVar15 = false,
             catposstab[(ulong)local_5c + (ulong)(byte)posspropstab[lVar1 + 1] * 0x1e] != '\0')) {
            bVar2 = posspropstab[lVar1 + 3];
            goto LAB_00100d83;
          }
LAB_00100d91:
          if (bVar15 == (uVar6 == 0x10)) goto LAB_001006ff;
          uVar7 = 0;
          goto LAB_00100723;
        case 0xf:
        case 0x10:
        case 0x11:
          lVar1 = (long)(int)(bVar2 - 0xf) * 4;
          if (uVar6 != 0x10) goto switchD_0010051d_caseD_83;
          uVar6 = param_5[3];
          bVar15 = false;
          if ((catposstab[(ulong)uVar6 + (ulong)(byte)posspropstab[lVar1] * 0x1e] != '\0') &&
             (catposstab[(ulong)uVar6 + (ulong)(byte)posspropstab[lVar1 + 1] * 0x1e] != '\0')) {
            bVar15 = (byte)posspropstab[lVar1 + 3] == uVar6;
            goto LAB_00100ddd;
          }
LAB_00100deb:
          if (bVar15 == (local_68 == 0x10)) goto LAB_001006ff;
          uVar7 = 0;
          goto LAB_00100723;
        }
        if (bVar15) goto LAB_001006ff;
        uVar7 = 0;
        goto LAB_00100723;
      }
      puVar9 = param_6 + -(ulong)param_5[2];
      puVar11 = &local_68;
      uVar6 = local_68;
LAB_001007a9:
      puVar12 = puVar9;
      if (uVar6 < 0xc) {
        if (uVar6 < 6) goto switchD_0010051d_caseD_83;
        puVar11 = puVar9;
        switch(uVar6) {
        case 7:
          puVar11 = (uint *)(*(long *)(param_4 + 0x18) + 0x40);
          break;
        case 8:
          pbVar13 = *(byte **)(param_4 + 0x18);
          goto LAB_001009f1;
        case 9:
          puVar11 = *(uint **)(param_4 + 0x18);
          break;
        case 10:
          pbVar13 = (byte *)(*(long *)(param_4 + 0x18) + 0xa0);
          goto LAB_001009f1;
        case 0xb:
          puVar11 = (uint *)(*(long *)(param_4 + 0x18) + 0xa0);
          break;
        default:
          pbVar13 = (byte *)(*(long *)(param_4 + 0x18) + 0x40);
LAB_001009f1:
          do {
            bVar2 = *pbVar13;
            puVar12 = (uint *)((long)puVar11 + 1);
            pbVar13 = pbVar13 + 1;
            if ((byte)(~bVar2 & (byte)*puVar11) != 0) {
              uVar7 = 0;
              goto LAB_00100723;
            }
            puVar11 = puVar12;
          } while (puVar12 < puVar9 + 8);
          goto LAB_001006ff;
        }
      }
      else {
        if (0x6f < uVar6) {
          if (uVar6 != 0x70) goto switchD_0010051d_caseD_83;
          puVar10 = param_1;
          if (puVar11 != &local_68) {
            puVar10 = param_6;
          }
          uVar6 = puVar10[1 - (ulong)puVar11[2]];
          if ((uVar6 & 4) != 0) goto switchD_0010051d_caseD_83;
          if ((uVar6 & 2) != 0) {
            puVar11 = puVar10 + (1 - (ulong)puVar11[2]) + 1;
            goto LAB_001009b9;
          }
          if (local_64 == 0) {
            uVar7 = ~uVar6 & 1;
            goto LAB_00100723;
          }
          goto LAB_00100495;
        }
        if (uVar6 < 0x6e) goto switchD_0010051d_caseD_83;
        puVar10 = param_1;
        if (puVar11 != &local_68) {
          puVar10 = param_6;
        }
        puVar11 = puVar10 + -(ulong)puVar11[2];
      }
LAB_001009b9:
      do {
        puVar10 = (uint *)((long)puVar12 + 1);
        if ((byte)((byte)*puVar12 & (byte)*puVar11) != 0) {
          uVar7 = 0;
          goto LAB_00100723;
        }
        puVar12 = puVar10;
        puVar11 = (uint *)((long)puVar11 + 1);
      } while (puVar10 < puVar9 + 8);
LAB_001006ff:
    } while (local_64 != 0);
    uVar7 = 1;
  }
LAB_00100723:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


