
void ssl_print_hex(BIO *param_1,int param_2,undefined8 param_3,byte *param_4,ulong param_5)

{
  byte bVar1;
  byte *pbVar2;
  
  BIO_indent(param_1,param_2,0x50);
  BIO_printf(param_1,"%s (len=%d): ",param_3,param_5 & 0xffffffff);
  if (param_5 != 0) {
    pbVar2 = param_4 + param_5;
    do {
      bVar1 = *param_4;
      param_4 = param_4 + 1;
      BIO_printf(param_1,"%02X",(ulong)bVar1);
    } while (param_4 != pbVar2);
  }
  BIO_puts(param_1,"\n");
  return;
}



undefined8
ssl_print_version_constprop_0
          (BIO *param_1,undefined8 param_2,long *param_3,ulong *param_4,uint *param_5)

{
  NoteGnuProperty_4 *pNVar1;
  ushort uVar2;
  char *pcVar3;
  
  if (*param_4 < 2) {
    return 0;
  }
  uVar2 = *(ushort *)*param_3 << 8 | *(ushort *)*param_3 >> 8;
  if (param_5 != (uint *)0x0) {
    *param_5 = (uint)uVar2;
  }
  BIO_indent(param_1,6,0x50);
  pNVar1 = (NoteGnuProperty_4 *)&ssl_version_tbl;
  do {
    if ((uint)uVar2 == pNVar1->namesz) {
      pcVar3 = *(char **)&pNVar1->type;
      goto LAB_001000e9;
    }
    pNVar1 = pNVar1 + 1;
  } while (pNVar1 != &NoteGnuProperty_4_001099e0);
  pcVar3 = "UNKNOWN";
LAB_001000e9:
  BIO_printf(param_1,"%s=0x%x (%s)\n",param_2,(ulong)uVar2,pcVar3);
  *param_3 = *param_3 + 2;
  *param_4 = *param_4 - 2;
  return 1;
}



uint ssl_get_keyex_isra_0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x1c);
  pcVar2 = "rsa";
  uVar3 = 1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) != 0) {
      *param_1 = &_LC6;
      return 2;
    }
    if ((uVar1 & 4) != 0) {
      *param_1 = "ECDHE";
      return 4;
    }
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 0x100) == 0) {
          if ((uVar1 & 0x80) == 0) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x10) == 0) {
                pcVar2 = "GOST18";
                if ((uVar1 & 0x200) == 0) {
                  pcVar2 = "UNKNOWN";
                }
                uVar3 = -(uint)((uVar1 & 0x200) != 0) & 0x200;
              }
              else {
                pcVar2 = "GOST";
                uVar3 = 0x10;
              }
            }
            else {
              pcVar2 = "SRP";
              uVar3 = 0x20;
            }
          }
          else {
            pcVar2 = "ECDHEPSK";
            uVar3 = 0x80;
          }
        }
        else {
          pcVar2 = "DHEPSK";
          uVar3 = 0x100;
        }
      }
      else {
        pcVar2 = "RSAPSK";
        uVar3 = 0x40;
      }
    }
    else {
      pcVar2 = "PSK";
      uVar3 = 8;
    }
  }
  *param_1 = pcVar2;
  return uVar3;
}



undefined8 ssl_print_random_constprop_0(BIO *param_1,long *param_2,ulong *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (*param_3 < 0x20) {
    return 0;
  }
  puVar2 = (uint *)*param_2;
  uVar1 = *puVar2;
  BIO_indent(param_1,6,0x50);
  BIO_puts(param_1,"Random:\n");
  BIO_indent(param_1,8,0x50);
  puVar3 = puVar2 + 1;
  BIO_printf(param_1,"gmt_unix_time=0x%08X\n",
             (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    ));
  BIO_indent(param_1,8,0x50);
  BIO_printf(param_1,"%s (len=%d): ","random_bytes",0x1c);
  do {
    uVar1 = *puVar3;
    puVar3 = (uint *)((long)puVar3 + 1);
    BIO_printf(param_1,"%02X",(ulong)(byte)uVar1);
  } while (puVar3 != puVar2 + 8);
  BIO_puts(param_1,"\n");
  *param_2 = *param_2 + 0x20;
  *param_3 = *param_3 - 0x20;
  return 1;
}



undefined8 ssl_print_signature_constprop_0(BIO *param_1,long param_2,long *param_3,ulong *param_4)

{
  ulong uVar1;
  ushort uVar2;
  uint *puVar3;
  ulong uVar4;
  ushort *puVar5;
  char *pcVar6;
  uint uVar7;
  
  uVar4 = *param_4;
  if (uVar4 < 2) {
    return 0;
  }
  puVar5 = (ushort *)*param_3;
  uVar2 = *puVar5;
  if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x18) + 0xd8) + 0x50) & 2) != 0) {
    BIO_indent(param_1,6,0x50);
    puVar3 = &ssl_sigalg_tbl;
    do {
      uVar7 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
      if (uVar7 == *puVar3) {
        pcVar6 = *(char **)(puVar3 + 2);
        goto LAB_00100432;
      }
      puVar3 = puVar3 + 4;
    } while (puVar3 != &ssl_mfl_tbl);
    pcVar6 = "UNKNOWN";
LAB_00100432:
    BIO_printf(param_1,"Signature Algorithm: %s (0x%04x)\n",pcVar6,(ulong)uVar7);
    puVar5 = (ushort *)(*param_3 + 2);
    uVar4 = *param_4;
    *param_3 = (long)puVar5;
    uVar4 = uVar4 - 2;
    *param_4 = uVar4;
    if (uVar4 < 2) {
      return 0;
    }
  }
  uVar1 = (ulong)(ushort)(*puVar5 << 8 | *puVar5 >> 8) + 2;
  if (uVar4 < uVar1) {
    return 0;
  }
  ssl_print_hex(param_1,6,"Signature",puVar5 + 1);
  *param_3 = *param_3 + uVar1;
  *param_4 = *param_4 - uVar1;
  return 1;
}



undefined8
ssl_print_extensions
          (BIO *param_1,int param_2,int param_3,char param_4,undefined8 *param_5,ulong *param_6)

{
  ushort *bytes;
  byte bVar1;
  uint *puVar2;
  NoteGnuProperty_4 *pNVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort uVar13;
  ulong uVar14;
  ulong uVar15;
  ushort uVar16;
  ulong local_98;
  
  uVar7 = *param_6;
  puVar11 = (ushort *)*param_5;
  BIO_indent(param_1,param_2,0x50);
  if (uVar7 == 0) {
    BIO_puts(param_1,"No extensions\n");
    return 1;
  }
  if (uVar7 != 1) {
    uVar13 = *puVar11;
    uVar7 = uVar7 - 2;
    puVar11 = puVar11 + 1;
    uVar13 = uVar13 << 8 | uVar13 >> 8;
    uVar14 = (ulong)uVar13;
    if (uVar13 == 0) {
      BIO_puts(param_1,"No extensions\n");
      *param_5 = puVar11;
      *param_6 = uVar7;
      return 1;
    }
    if ((uVar14 <= uVar7) &&
       (BIO_printf(param_1,"extensions, length = %d\n",(ulong)uVar13), 3 < uVar13)) {
      local_98 = uVar14;
LAB_00100558:
      uVar13 = puVar11[1] << 8 | puVar11[1] >> 8;
      uVar16 = *puVar11 << 8 | *puVar11 >> 8;
      uVar8 = (ulong)uVar13;
      uVar6 = (uint)uVar13;
      if (local_98 < uVar8 + 4) {
        BIO_printf(param_1,"extensions, extype = %d, extlen = %d\n",(ulong)uVar16,(ulong)uVar6);
        BIO_dump_indent(param_1,(char *)puVar11,(int)local_98,param_2 + 2);
        return 0;
      }
      bytes = puVar11 + 2;
      BIO_indent(param_1,param_2 + 2,0x50);
      puVar2 = &ssl_exts_tbl;
      do {
        if ((uint)uVar16 == *puVar2) {
          pcVar5 = *(char **)(puVar2 + 2);
          goto LAB_001005c2;
        }
        puVar2 = puVar2 + 4;
      } while (puVar2 != (uint *)&DAT_00108210);
      pcVar5 = "UNKNOWN";
LAB_001005c2:
      BIO_printf(param_1,"extension_type=%s(%d), length=%d\n",pcVar5,(ulong)uVar16,uVar6);
      if (0x33 < uVar16) {
        if (uVar16 != 0xff01) goto switchD_00100607_caseD_2;
        if (uVar6 == 0) {
          return 0;
        }
        bVar1 = (byte)puVar11[2];
        if (uVar8 != (ulong)bVar1 + 1) {
          return 0;
        }
        if ((ulong)bVar1 == 0) {
          BIO_indent(param_1,param_2 + 6,0x50);
          BIO_puts(param_1,"<EMPTY>\n");
        }
        else {
          pbVar10 = (byte *)((long)puVar11 + 5);
          if (param_3 == 0) {
            ssl_print_hex(param_1,param_2 + 6,"client_verify_data",pbVar10);
          }
          else {
            if ((bVar1 & 1) != 0) {
              return 0;
            }
            ssl_print_hex(param_1,param_2 + 6,"client_verify_data",pbVar10);
            ssl_print_hex(param_1,param_2 + 6,"server_verify_data",pbVar10 + (bVar1 >> 1),
                          (ulong)(bVar1 >> 1));
          }
        }
        goto LAB_00100700;
      }
      switch(uVar16) {
      case 1:
        if (uVar6 == 0) {
          return 0;
        }
        puVar11 = bytes;
        do {
          uVar13 = *puVar11;
          BIO_indent(param_1,param_2 + 4,0x50);
          puVar2 = &ssl_mfl_tbl;
          do {
            if ((uint)(byte)uVar13 == *puVar2) {
              pcVar5 = *(char **)(puVar2 + 2);
              goto LAB_00100d16;
            }
            puVar2 = puVar2 + 4;
          } while (puVar2 != (uint *)&DAT_00107c50);
          pcVar5 = "UNKNOWN";
LAB_00100d16:
          puVar11 = (ushort *)((long)puVar11 + 1);
          BIO_printf(param_1,"%s (%d)\n",pcVar5,(ulong)(uint)(byte)uVar13);
        } while (puVar11 != (ushort *)((long)bytes + uVar8));
        break;
      default:
switchD_00100607_caseD_2:
        BIO_dump_indent(param_1,(char *)bytes,uVar6,param_2 + 4);
        break;
      case 10:
        if (uVar6 < 2) {
          return 0;
        }
        uVar13 = puVar11[2];
        uVar15 = (ulong)(ushort)(uVar13 << 8 | uVar13 >> 8);
        if (uVar8 != uVar15 + 2) {
          return 0;
        }
        if ((uVar13 >> 8 & 1) != 0) {
          return 0;
        }
        if (uVar13 != 0) {
          puVar11 = puVar11 + 3;
          puVar12 = (ushort *)((long)puVar11 + uVar15);
          do {
            uVar13 = *puVar11;
            BIO_indent(param_1,param_2 + 4,0x50);
            puVar2 = &ssl_groups_tbl;
            do {
              uVar6 = (uint)(ushort)(uVar13 << 8 | uVar13 >> 8);
              if (uVar6 == *puVar2) {
                pcVar5 = *(char **)(puVar2 + 2);
                goto LAB_00100c76;
              }
              puVar2 = puVar2 + 4;
            } while (puVar2 != (uint *)&DAT_00107fd0);
            pcVar5 = "UNKNOWN";
LAB_00100c76:
            puVar11 = puVar11 + 1;
            BIO_printf(param_1,"%s (%d)\n",pcVar5,(ulong)uVar6);
          } while (puVar11 != puVar12);
        }
        break;
      case 0xb:
        if (uVar6 == 0) {
          return 0;
        }
        uVar15 = (ulong)(byte)puVar11[2];
        if (uVar8 != uVar15 + 1) {
          return 0;
        }
        pbVar10 = (byte *)((long)puVar11 + 5);
        if (uVar15 != 0) {
          pbVar4 = pbVar10 + uVar15;
          do {
            bVar1 = *pbVar10;
            BIO_indent(param_1,param_2 + 4,0x50);
            puVar2 = &ssl_point_tbl;
            do {
              if ((uint)bVar1 == *puVar2) {
                pcVar5 = *(char **)(puVar2 + 2);
                goto LAB_00100ba6;
              }
              puVar2 = puVar2 + 4;
            } while (puVar2 != (uint *)&DAT_00107c90);
            pcVar5 = "UNKNOWN";
LAB_00100ba6:
            pbVar10 = pbVar10 + 1;
            BIO_printf(param_1,"%s (%d)\n",pcVar5,(ulong)(uint)bVar1);
          } while (pbVar10 != pbVar4);
        }
        break;
      case 0xd:
        if (uVar6 < 2) {
          return 0;
        }
        uVar13 = puVar11[2];
        uVar15 = (ulong)(ushort)(uVar13 << 8 | uVar13 >> 8);
        if (uVar8 != uVar15 + 2) {
          return 0;
        }
        if ((uVar13 >> 8 & 1) != 0) {
          return 0;
        }
        puVar11 = puVar11 + 3;
        if (uVar13 != 0) {
          puVar12 = (ushort *)((long)puVar11 + uVar15);
          do {
            BIO_indent(param_1,param_2 + 4,0x50);
            puVar2 = &ssl_sigalg_tbl;
            do {
              if ((uint)(ushort)(*puVar11 << 8 | *puVar11 >> 8) == *puVar2) {
                pcVar5 = *(char **)(puVar2 + 2);
                goto LAB_00100aed;
              }
              puVar2 = puVar2 + 4;
            } while (puVar2 != &ssl_mfl_tbl);
            pcVar5 = "UNKNOWN";
LAB_00100aed:
            puVar11 = puVar11 + 1;
            BIO_printf(param_1,"%s (0x%04x)\n",pcVar5);
          } while (puVar11 != puVar12);
        }
        break;
      case 0x10:
        if (uVar6 < 2) {
          return 0;
        }
        uVar15 = (ulong)(ushort)(puVar11[2] << 8 | puVar11[2] >> 8);
        if (uVar8 != uVar15 + 2) {
          return 0;
        }
        puVar11 = puVar11 + 3;
        for (; uVar15 != 0; uVar15 = (uVar15 - 1) - uVar9) {
          uVar13 = *puVar11;
          uVar9 = (ulong)(uint)(byte)uVar13;
          if (uVar15 < uVar9 + 1) {
            return 0;
          }
          BIO_indent(param_1,param_2 + 4,0x50);
          BIO_write(param_1,(byte *)((long)puVar11 + 1),(uint)(byte)uVar13);
          BIO_puts(param_1,"\n");
          puVar11 = (ushort *)((byte *)((long)puVar11 + 1) + uVar9);
        }
        break;
      case 0x13:
      case 0x14:
        if (param_3 == 0) {
          if (uVar6 == 0) {
            return 0;
          }
          uVar15 = (ulong)(byte)puVar11[2];
          if (uVar8 != uVar15 + 1) {
            return 0;
          }
          pbVar10 = (byte *)((long)puVar11 + 5);
          if (uVar15 != 0) {
            pbVar4 = pbVar10 + uVar15;
            do {
              bVar1 = *pbVar10;
              BIO_indent(param_1,param_2 + 4,0x50);
              puVar2 = &ssl_cert_type_tbl;
              do {
                if ((uint)bVar1 == *puVar2) {
                  pcVar5 = *(char **)(puVar2 + 2);
                  goto LAB_00100ff5;
                }
                puVar2 = puVar2 + 4;
              } while (puVar2 != &ssl_comp_cert_tbl);
              pcVar5 = "UNKNOWN";
LAB_00100ff5:
              BIO_printf(param_1,"%s (%d)\n",pcVar5,(ulong)(uint)bVar1);
              pbVar10 = pbVar10 + 1;
            } while (pbVar10 != pbVar4);
          }
          break;
        }
        if (uVar6 != 1) {
          return 0;
        }
        uVar13 = puVar11[2];
        uVar15 = (ulong)(byte)uVar13;
        BIO_indent(param_1,param_2 + 4,0x50);
        pNVar3 = (NoteGnuProperty_4 *)&ssl_cert_type_tbl;
        do {
          if (pNVar3->namesz == (uint)(byte)uVar13) goto LAB_0010077d;
          pNVar3 = pNVar3 + 1;
        } while (pNVar3 != (NoteGnuProperty_4 *)&ssl_comp_cert_tbl);
LAB_001011cf:
        pcVar5 = "UNKNOWN";
        goto LAB_00100781;
      case 0x1b:
        if (uVar6 == 0) {
          return 0;
        }
        uVar15 = (ulong)(byte)puVar11[2];
        if (uVar8 != uVar15 + 1) {
          return 0;
        }
        if (((byte)puVar11[2] & 1) != 0) {
          return 0;
        }
        if (uVar15 != 0) {
          puVar11 = (ushort *)((long)puVar11 + 5);
          puVar12 = (ushort *)(uVar15 + (long)puVar11);
          do {
            uVar13 = *puVar11;
            BIO_indent(param_1,param_2 + 4,0x50);
            puVar2 = &ssl_comp_cert_tbl;
            do {
              uVar6 = (uint)(ushort)(uVar13 << 8 | uVar13 >> 8);
              if (uVar6 == *puVar2) {
                pcVar5 = *(char **)(puVar2 + 2);
                goto LAB_00100de6;
              }
              puVar2 = puVar2 + 4;
            } while (puVar2 != (uint *)ssl_key_update_tbl);
            pcVar5 = "UNKNOWN";
LAB_00100de6:
            puVar11 = puVar11 + 1;
            BIO_printf(param_1,"%s (%d)\n",pcVar5,(ulong)uVar6);
          } while (puVar11 != puVar12);
        }
        break;
      case 0x23:
        if (uVar6 != 0) {
          ssl_print_hex(param_1,param_2 + 6,"ticket",bytes,uVar8);
        }
        break;
      case 0x2a:
        if (param_4 == '\x04') {
          if (uVar6 != 4) {
            return 0;
          }
          uVar6 = *(uint *)(puVar11 + 2);
          BIO_indent(param_1,param_2 + 4,0x50);
          BIO_printf(param_1,"max_early_data=%u\n",
                     (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                            uVar6 << 0x18));
        }
        break;
      case 0x2b:
        if (param_3 != 0) {
          if (uVar6 != 2) {
            return 0;
          }
          uVar13 = puVar11[2] << 8 | puVar11[2] >> 8;
          BIO_indent(param_1,param_2 + 6,0x50);
          pNVar3 = (NoteGnuProperty_4 *)&ssl_version_tbl;
          uVar15 = (ulong)uVar13;
          do {
            if ((uint)uVar13 == pNVar3->namesz) goto LAB_0010077d;
            pNVar3 = pNVar3 + 1;
          } while (pNVar3 != &NoteGnuProperty_4_001099e0);
          goto LAB_001011cf;
        }
        if (uVar6 == 0) {
          return 0;
        }
        uVar15 = (ulong)(byte)puVar11[2];
        if (uVar8 != uVar15 + 1) {
          return 0;
        }
        if (((byte)puVar11[2] & 1) != 0) {
          return 0;
        }
        if (uVar15 != 0) {
          puVar11 = (ushort *)((long)puVar11 + 5);
          puVar12 = (ushort *)(uVar15 + (long)puVar11);
          do {
            uVar13 = *puVar11;
            BIO_indent(param_1,param_2 + 4,0x50);
            pNVar3 = (NoteGnuProperty_4 *)&ssl_version_tbl;
            do {
              uVar6 = (uint)(ushort)(uVar13 << 8 | uVar13 >> 8);
              if (uVar6 == pNVar3->namesz) {
                pcVar5 = *(char **)&pNVar3->type;
                goto LAB_001010b5;
              }
              pNVar3 = pNVar3 + 1;
            } while (pNVar3 != &NoteGnuProperty_4_001099e0);
            pcVar5 = "UNKNOWN";
LAB_001010b5:
            BIO_printf(param_1,"%s (%d)\n",pcVar5,(ulong)uVar6);
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar12);
        }
        break;
      case 0x2d:
        if (uVar6 == 0) {
          return 0;
        }
        uVar15 = (ulong)(byte)puVar11[2];
        if (uVar8 != uVar15 + 1) {
          return 0;
        }
        pbVar10 = (byte *)((long)puVar11 + 5);
        if (uVar15 != 0) {
          pbVar4 = pbVar10 + uVar15;
          do {
            bVar1 = *pbVar10;
            BIO_indent(param_1,param_2 + 4,0x50);
            pcVar5 = "psk_ke";
            if ((bVar1 != 0) && (pcVar5 = "psk_dhe_ke", bVar1 != 1)) {
              pcVar5 = "UNKNOWN";
            }
            pbVar10 = pbVar10 + 1;
            BIO_printf(param_1,"%s (%d)\n",pcVar5,(ulong)(uint)bVar1);
          } while (pbVar10 != pbVar4);
        }
        break;
      case 0x33:
        if ((param_3 == 0) || (uVar8 != 2)) {
          if (uVar6 < 2) {
            return 0;
          }
          puVar12 = bytes;
          uVar15 = uVar8;
          if (param_3 != 0) {
LAB_00100e85:
            if (uVar15 < 4) {
              return 0;
            }
            do {
              uVar13 = *puVar12;
              puVar11 = puVar12 + 2;
              uVar9 = (ulong)(ushort)(puVar12[1] << 8 | puVar12[1] >> 8);
              if (uVar15 - 4 < uVar9) {
                return 0;
              }
              BIO_indent(param_1,param_2 + 6,0x50);
              puVar2 = &ssl_groups_tbl;
              do {
                if ((uint)(ushort)(uVar13 << 8 | uVar13 >> 8) == *puVar2) {
                  pcVar5 = *(char **)(puVar2 + 2);
                  goto LAB_00100f1d;
                }
                puVar2 = puVar2 + 4;
              } while (puVar2 != (uint *)&DAT_00107fd0);
              pcVar5 = "UNKNOWN";
LAB_00100f1d:
              BIO_printf(param_1,"NamedGroup: %s (%d)\n",pcVar5);
              puVar12 = (ushort *)((long)puVar11 + uVar9);
              ssl_print_hex(param_1,param_2 + 6,"key_exchange: ",puVar11,uVar9);
              uVar15 = (uVar15 - 4) - uVar9;
              if (uVar15 == 0) goto LAB_00100700;
              if (uVar15 < 4) {
                return 0;
              }
            } while( true );
          }
          uVar15 = (ulong)(ushort)(puVar11[2] << 8 | puVar11[2] >> 8);
          if (uVar8 != uVar15 + 2) {
            return 0;
          }
          puVar12 = puVar11 + 3;
          if (uVar15 != 0) goto LAB_00100e85;
        }
        else {
          uVar13 = puVar11[2];
          BIO_indent(param_1,param_2 + 6,0x50);
          puVar2 = &ssl_groups_tbl;
          do {
            uVar6 = (uint)(ushort)(uVar13 << 8 | uVar13 >> 8);
            if (uVar6 == *puVar2) {
              pcVar5 = *(char **)(puVar2 + 2);
              goto LAB_00100806;
            }
            puVar2 = puVar2 + 4;
          } while (puVar2 != (uint *)&DAT_00107fd0);
          pcVar5 = "UNKNOWN";
LAB_00100806:
          BIO_printf(param_1,"NamedGroup: %s (%d)\n",pcVar5,(ulong)uVar6);
        }
      }
      goto LAB_00100700;
    }
  }
  return 0;
LAB_0010077d:
  pcVar5 = *(char **)&pNVar3->type;
LAB_00100781:
  BIO_printf(param_1,"%s (%d)\n",pcVar5,uVar15);
LAB_00100700:
  puVar11 = (ushort *)((long)bytes + uVar8);
  local_98 = (local_98 - 4) - uVar8;
  if (local_98 == 0) {
    *param_5 = puVar11;
    *param_6 = uVar7 - uVar14;
    return 1;
  }
  if (local_98 < 4) {
    return 0;
  }
  goto LAB_00100558;
}



void SSL_trace(uint param_1,ulong param_2,int param_3,byte *param_4,X509 *param_5,SSL *param_6,
              BIO *param_7)

{
  X509_CERT_AUX **ppXVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  SSL_METHOD *pSVar6;
  X509_CINF **ppXVar7;
  int iVar8;
  SSL *pSVar9;
  uint *puVar10;
  NoteGnuProperty_4 *pNVar11;
  char *pcVar12;
  undefined1 *puVar13;
  EVP_PKEY *pkey;
  X509_NAME *nm;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  X509 *pXVar19;
  X509 *pXVar20;
  X509 **ppXVar21;
  X509 **ppXVar22;
  uint uVar23;
  long lVar24;
  ushort uVar25;
  ushort uVar26;
  X509 *pXVar27;
  ulong len;
  uint uVar28;
  X509 *pXVar29;
  X509_ALGOR **bytes;
  ulong uVar30;
  X509 *pXVar31;
  long in_FS_OFFSET;
  X509 *local_90;
  X509 *local_70;
  X509 *local_68;
  X509 *local_60;
  X509 *local_58;
  X509 *local_50;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == (SSL *)0x0) {
LAB_00101250:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00102a65;
  }
  uVar23 = param_6->version;
  if (uVar23 != 0) {
    if ((uVar23 & 0x80) == 0) {
      if (uVar23 != 0x80) goto LAB_00101250;
      pSVar9 = (SSL *)0x0;
LAB_00101453:
      iVar8 = ossl_quic_trace(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (iVar8 != 0) goto LAB_00101250;
    }
    else {
      pSVar9 = (SSL *)ossl_quic_obj_get0_handshake_layer(param_6);
      param_2 = param_2 & 0xffffffff;
      if (param_6->version == 0x80) goto LAB_00101453;
    }
    param_6 = pSVar9;
    if (param_6 == (SSL *)0x0) goto LAB_00101250;
  }
  if (param_3 != 0x16) {
    if (param_3 < 0x17) {
      if (param_3 == 0x14) {
        if ((param_5 == (X509 *)0x1) && (*param_4 == 1)) {
          BIO_puts(param_7,"    change_cipher_spec (1)\n");
        }
        else {
          ssl_print_hex(param_7,4,"unknown value",param_4,param_5);
        }
      }
      else if (param_3 == 0x15) {
        if (param_5 == (X509 *)0x2) {
          bVar4 = param_4[1];
          pcVar15 = SSL_alert_desc_string_long((uint)bVar4);
          bVar5 = *param_4;
          pcVar12 = SSL_alert_type_string_long((uint)bVar5 << 8);
          BIO_printf(param_7,"    Level=%s(%d), description=%s(%d)\n",pcVar12,(ulong)bVar5,pcVar15,
                     (ulong)bVar4);
        }
        else {
          BIO_puts(param_7,"    Illegal Alert Length\n");
        }
      }
    }
    else if (param_3 == 0x100) {
      if (param_5 < (X509 *)((-(ulong)((*(uint *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) &
                                       8) == 0) & 0xfffffffffffffff8) + 0xd)) {
        pcVar15 = "Received";
        if (param_1 != 0) {
          pcVar15 = "Sent";
        }
        BIO_puts(param_7,pcVar15);
        ssl_print_hex(param_7,0," too short message",param_4,param_5);
      }
      else {
        uVar26 = *(ushort *)(param_4 + 1);
        pcVar15 = "Received";
        if (param_1 != 0) {
          pcVar15 = "Sent";
        }
        BIO_puts(param_7,pcVar15);
        pNVar11 = (NoteGnuProperty_4 *)&ssl_version_tbl;
        do {
          uVar23 = (uint)(ushort)(uVar26 << 8 | uVar26 >> 8);
          if (uVar23 == pNVar11->namesz) {
            pcVar15 = *(char **)&pNVar11->type;
            goto LAB_001014e6;
          }
          pNVar11 = pNVar11 + 1;
        } while (pNVar11 != &NoteGnuProperty_4_001099e0);
        pcVar15 = "UNKNOWN";
LAB_001014e6:
        BIO_printf(param_7," TLS Record\nHeader:\n  Version = %s (0x%x)\n",pcVar15,(ulong)uVar23);
        if ((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) {
          BIO_printf(param_7,"  epoch=%d, sequence_number=%04x%04x%04x\n",
                     (ulong)(ushort)(*(ushort *)(param_4 + 3) << 8 | *(ushort *)(param_4 + 3) >> 8),
                     (ulong)(ushort)(*(ushort *)(param_4 + 5) << 8 | *(ushort *)(param_4 + 5) >> 8),
                     (ulong)(ushort)(*(ushort *)(param_4 + 7) << 8 | *(ushort *)(param_4 + 7) >> 8),
                     (ulong)(ushort)(*(ushort *)(param_4 + 9) << 8 | *(ushort *)(param_4 + 9) >> 8))
          ;
        }
        puVar10 = &ssl_content_tbl;
        do {
          if ((uint)*param_4 == *puVar10) {
            pcVar15 = *(char **)(puVar10 + 2);
            goto LAB_00101555;
          }
          puVar10 = puVar10 + 4;
        } while (puVar10 != &ssl_version_tbl);
        pcVar15 = "UNKNOWN";
LAB_00101555:
        BIO_printf(param_7,"  Content Type = %s (%d)\n  Length = %d",pcVar15,(ulong)*param_4,
                   (ulong)CONCAT11((param_4 + -2)[(long)param_5],(param_4 + -1)[(long)param_5]));
      }
    }
    else if (param_3 == 0x101) {
      puVar10 = &ssl_content_tbl;
      do {
        if ((uint)*param_4 == *puVar10) {
          pcVar15 = *(char **)(puVar10 + 2);
          goto LAB_001012f5;
        }
        puVar10 = puVar10 + 4;
      } while (puVar10 != &ssl_version_tbl);
      pcVar15 = "UNKNOWN";
LAB_001012f5:
      BIO_printf(param_7,"  Inner Content Type = %s (%d)",pcVar15);
    }
    goto LAB_00101340;
  }
  if (*(int *)&param_6->s2 == 0) {
    param_1 = (uint)(param_1 == 0);
  }
  local_68 = param_5;
  pXVar29 = local_60;
  if (param_5 < (X509 *)0x4) goto LAB_00101436;
  bVar4 = *param_4;
  uVar23 = (uint)param_4[1] << 0x10 | (uint)param_4[2] << 8 | (uint)param_4[3];
  BIO_indent(param_7,4,0x50);
  puVar10 = &ssl_handshake_tbl;
  do {
    if ((uint)bVar4 == *puVar10) {
      pcVar15 = *(char **)(puVar10 + 2);
      goto LAB_001015d5;
    }
    puVar10 = puVar10 + 4;
  } while (puVar10 != (uint *)&DAT_00109910);
  pcVar15 = "UNKNOWN";
LAB_001015d5:
  BIO_printf(param_7,"%s, Length=%d\n",pcVar15,(ulong)uVar23);
  local_70 = (X509 *)(param_4 + 4);
  local_90 = (X509 *)((long)&param_5[-1].aux + 4);
  if ((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) {
    local_68 = local_90;
    pXVar29 = local_60;
    if (local_90 < (X509 *)0x8) goto LAB_00101436;
    BIO_indent(param_7,4,0x50);
    BIO_printf(param_7,"message_seq=%d, fragment_offset=%d, fragment_length=%d\n",
               (ulong)(ushort)(*(ushort *)(param_4 + 4) << 8 | *(ushort *)(param_4 + 4) >> 8),
               (ulong)((uint)param_4[6] << 0x10 | (uint)param_4[7] << 8 | (uint)param_4[8]),
               (ulong)((uint)param_4[0xb] | (uint)param_4[9] << 0x10 | (uint)param_4[10] << 8));
    local_90 = (X509 *)&param_5[-1].field_0xbc;
    local_70 = (X509 *)(param_4 + 0xc);
  }
  pXVar20 = local_70;
  local_68 = local_90;
  pXVar29 = local_60;
  if (local_90 < (X509 *)(long)(int)uVar23) goto LAB_00101436;
  switch(bVar4) {
  default:
    BIO_indent(param_7,6,0x50);
    BIO_puts(param_7,"Unsupported, hex dump follows:\n");
    BIO_dump_indent(param_7,(char *)local_70,(int)local_90,8);
    break;
  case 1:
    ppXVar22 = &local_48;
    ppXVar21 = &local_50;
    local_50 = local_70;
    local_48 = local_90;
    iVar8 = ssl_print_version_constprop_0(param_7,"client_version",ppXVar21,ppXVar22,0);
    pXVar29 = local_60;
    if ((((iVar8 != 0) &&
         (iVar8 = ssl_print_random_constprop_0(param_7,ppXVar21,ppXVar22), pXVar29 = local_60,
         iVar8 != 0)) && (local_48 != (X509 *)0x0)) &&
       (pXVar20 = (X509 *)((ulong)*(byte *)&local_50->cert_info + 1), pXVar20 <= local_48)) {
      pXVar19 = (X509 *)((long)&pXVar20->cert_info + (long)&local_50->cert_info);
      pXVar20 = (X509 *)((long)local_48 - (long)pXVar20);
      ssl_print_hex(param_7,6,"session_id",(byte *)((long)&local_50->cert_info + 1));
      local_50 = pXVar19;
      local_48 = pXVar20;
      if ((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) {
        pXVar29 = local_60;
        if ((pXVar20 == (X509 *)0x0) ||
           (pXVar27 = (X509 *)((ulong)*(byte *)&pXVar19->cert_info + 1), pXVar20 < pXVar27))
        goto LAB_00101436;
        ssl_print_hex(param_7,6,"cookie",(byte *)((long)&pXVar19->cert_info + 1));
        local_50 = (X509 *)((long)&pXVar27->cert_info + (long)&pXVar19->cert_info);
        local_48 = (X509 *)((long)pXVar20 - (long)pXVar27);
      }
      pXVar29 = local_60;
      if ((X509 *)0x1 < local_48) {
        pXVar19 = (X509 *)((long)&local_48[-1].aux + 6);
        uVar26 = *(ushort *)&local_50->cert_info;
        local_50 = (X509 *)((long)&local_50->cert_info + 2);
        local_48 = pXVar19;
        BIO_indent(param_7,6,0x50);
        uVar25 = uVar26 >> 8;
        uVar26 = uVar26 << 8 | uVar25;
        pXVar20 = (X509 *)(ulong)uVar26;
        BIO_printf(param_7,"cipher_suites (len=%d)\n",(ulong)uVar26);
        pXVar29 = local_60;
        if ((pXVar20 <= pXVar19) && ((uVar25 & 1) == 0)) {
          for (; pXVar29 = local_50, pXVar20 != (X509 *)0x0;
              pXVar20 = (X509 *)((long)&pXVar20[-1].aux + 6)) {
            uVar26 = *(ushort *)&local_50->cert_info;
            BIO_indent(param_7,8,0x50);
            puVar10 = &ssl_ciphers_tbl;
            do {
              if ((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) == *puVar10) {
                pcVar15 = *(char **)(puVar10 + 2);
                goto LAB_0010209f;
              }
              puVar10 = puVar10 + 4;
            } while (puVar10 != &ssl_handshake_tbl);
            pcVar15 = "UNKNOWN";
LAB_0010209f:
            BIO_printf(param_7,"{0x%02X, 0x%02X} %s\n",(ulong)*(byte *)&pXVar29->cert_info,
                       (ulong)*(byte *)((long)&pXVar29->cert_info + 1),pcVar15);
            local_50 = (X509 *)((long)&pXVar29->cert_info + 2);
            local_48 = (X509 *)((long)&local_48[-1].aux + 6);
          }
          pXVar29 = local_60;
          if (local_48 != (X509 *)0x0) {
            local_48 = (X509 *)((long)&local_48[-1].aux + 7);
            pXVar20 = (X509 *)(ulong)*(byte *)&local_50->cert_info;
            local_50 = (X509 *)((long)&local_50->cert_info + 1);
            if (pXVar20 <= local_48) {
              BIO_indent(param_7,6,0x50);
              BIO_printf(param_7,"compression_methods (len=%d)\n",pXVar20);
              for (; pXVar20 != (X509 *)0x0; pXVar20 = (X509 *)((long)&pXVar20[-1].aux + 7)) {
                BIO_indent(param_7,8,0x50);
                if (*(byte *)&local_50->cert_info == 0) {
                  puVar13 = ssl_comp_tbl;
LAB_00103087:
                  pcVar15 = *(char **)(puVar13 + 8);
                }
                else {
                  pcVar15 = "UNKNOWN";
                  puVar13 = (undefined1 *)0x108230;
                  if (*(byte *)&local_50->cert_info == 1) goto LAB_00103087;
                }
                ppXVar7 = &local_50->cert_info;
                BIO_printf(param_7,"%s (0x%02X)\n",pcVar15);
                local_48 = (X509 *)((long)&local_48[-1].aux + 7);
                local_50 = (X509 *)((long)ppXVar7 + 1);
              }
              uVar14 = 1;
              uVar16 = 0;
              goto LAB_00101753;
            }
          }
        }
      }
    }
    goto LAB_00101436;
  case 2:
    ppXVar22 = &local_48;
    ppXVar21 = &local_50;
    local_50 = local_70;
    local_48 = local_90;
    iVar8 = ssl_print_version_constprop_0(param_7,"server_version",ppXVar21,ppXVar22,&local_58);
    pXVar29 = local_60;
    if ((iVar8 != 0) &&
       (iVar8 = ssl_print_random_constprop_0(param_7,ppXVar21,ppXVar22), pXVar19 = local_48,
       pXVar20 = local_50, pXVar29 = local_60, iVar8 != 0)) {
      iVar8 = (int)local_58;
      if ((int)local_58 != 0x304) {
        if ((local_48 == (X509 *)0x0) ||
           (pXVar27 = (X509 *)((ulong)*(byte *)&local_50->cert_info + 1), local_48 < pXVar27))
        goto LAB_00101436;
        ssl_print_hex(param_7,6,"session_id",(byte *)((long)&local_50->cert_info + 1));
        local_50 = (X509 *)((long)&pXVar27->cert_info + (long)&pXVar20->cert_info);
        local_48 = (X509 *)((long)pXVar19 - (long)pXVar27);
      }
      pXVar19 = local_48;
      pXVar20 = local_50;
      pXVar29 = local_60;
      if ((X509 *)0x1 < local_48) {
        uVar26 = *(ushort *)&local_50->cert_info;
        BIO_indent(param_7,6,0x50);
        puVar10 = &ssl_ciphers_tbl;
        do {
          if ((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) == *puVar10) {
            pcVar15 = *(char **)(puVar10 + 2);
            goto LAB_00101e62;
          }
          puVar10 = puVar10 + 4;
        } while (puVar10 != &ssl_handshake_tbl);
        pcVar15 = "UNKNOWN";
LAB_00101e62:
        BIO_printf(param_7,"cipher_suite {0x%02X, 0x%02X} %s\n",(ulong)*(byte *)&pXVar20->cert_info,
                   (ulong)*(byte *)((long)&pXVar20->cert_info + 1),pcVar15);
        local_50 = (X509 *)((long)&pXVar20->cert_info + 2);
        local_48 = (X509 *)((long)&pXVar19[-1].aux + 6);
        if (iVar8 != 0x304) {
          pXVar29 = local_60;
          if (local_48 == (X509 *)0x0) goto LAB_00101436;
          BIO_indent(param_7,6,0x50);
          bVar4 = *(byte *)((long)&pXVar20->cert_info + 2);
          if (bVar4 == 0) {
            puVar13 = ssl_comp_tbl;
LAB_00102ee6:
            pcVar15 = *(char **)(puVar13 + 8);
          }
          else {
            pcVar15 = "UNKNOWN";
            puVar13 = (undefined1 *)0x108230;
            if (bVar4 == 1) goto LAB_00102ee6;
          }
          BIO_printf(param_7,"compression_method: %s (0x%02X)\n",pcVar15);
          local_48 = (X509 *)((long)&pXVar19[-1].aux + 5);
          local_50 = (X509 *)((long)&pXVar20->cert_info + 3);
        }
        uVar14 = 2;
        goto LAB_0010174e;
      }
    }
    goto LAB_00101436;
  case 3:
    local_50 = local_70;
    local_48 = local_90;
    iVar8 = ssl_print_version_constprop_0(param_7,"server_version",&local_50,&local_48,0);
    pXVar29 = local_60;
    if (((iVar8 == 0) || (local_48 == (X509 *)0x0)) ||
       (local_48 < (X509 *)((ulong)*(byte *)&local_50->cert_info + 1))) goto LAB_00101436;
    ssl_print_hex(param_7,6,"cookie",(byte *)((long)&local_50->cert_info + 1));
    break;
  case 4:
    local_50 = local_70;
    if (local_90 != (X509 *)0x0) {
      local_48 = local_90;
      if ((X509 *)0x3 < local_90) {
        uVar23 = *(uint *)&local_70->cert_info;
        pXVar19 = (X509 *)((long)&local_90[-1].aux + 4);
        local_50 = (X509 *)((long)&local_70->cert_info + 4);
        local_48 = pXVar19;
        BIO_indent(param_7,8,0x50);
        BIO_printf(param_7,"ticket_lifetime_hint=%u\n",
                   (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                          uVar23 << 0x18));
        if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
            (iVar8 = *(int *)&param_6->wbio->method, iVar8 != 0x10000)) && (0x303 < iVar8)) {
          pXVar29 = local_60;
          if ((X509 *)0x3 < pXVar19) {
            uVar23 = *(uint *)((long)&pXVar20->cert_info + 4);
            ppXVar1 = &local_90[-1].aux;
            local_50 = (X509 *)&pXVar20->sig_alg;
            local_48 = (X509 *)ppXVar1;
            BIO_indent(param_7,8,0x50);
            BIO_printf(param_7,"ticket_age_add=%u\n",
                       (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                              uVar23 << 0x18));
            pXVar29 = local_60;
            if ((ppXVar1 != (X509_CERT_AUX **)0x0) &&
               (puVar13 = (undefined1 *)((ulong)*(byte *)&pXVar20->sig_alg + 1), puVar13 <= ppXVar1)
               ) {
              ssl_print_hex(param_7,8,"ticket_nonce",(undefined1 *)((long)&pXVar20->sig_alg + 1));
              local_50 = (X509 *)(puVar13 + (long)&pXVar20->sig_alg);
              local_48 = (X509 *)((long)ppXVar1 - (long)puVar13);
              goto LAB_00101c45;
            }
          }
        }
        else {
LAB_00101c45:
          pXVar29 = local_60;
          if (((X509 *)0x1 < local_48) &&
             (pXVar20 = (X509 *)((ulong)(ushort)(*(ushort *)&local_50->cert_info << 8 |
                                                *(ushort *)&local_50->cert_info >> 8) + 2),
             pXVar20 <= local_48)) {
            pXVar29 = (X509 *)((long)&pXVar20->cert_info + (long)&local_50->cert_info);
            pXVar20 = (X509 *)((long)local_48 - (long)pXVar20);
            ssl_print_hex(param_7,8,"ticket",(byte *)((long)&local_50->cert_info + 2));
            local_50 = pXVar29;
            local_48 = pXVar20;
            if (((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) ||
               (((iVar8 = *(int *)&param_6->wbio->method, iVar8 == 0x10000 || (iVar8 < 0x304)) ||
                (iVar8 = ssl_print_extensions(param_7,8,0,4,&local_50,&local_48), pXVar29 = local_60
                , pXVar20 = local_48, iVar8 != 0)))) goto joined_r0x001018c4;
          }
        }
      }
      goto LAB_00101436;
    }
    local_48 = local_90;
    BIO_indent(param_7,8,0x50);
    BIO_puts(param_7,"No Ticket\n");
    break;
  case 5:
  case 0xe:
    if (local_90 != (X509 *)0x0) {
      ssl_print_hex(param_7,6,"unexpected value",local_70,local_90);
    }
    break;
  case 8:
    ppXVar22 = &local_68;
    ppXVar21 = &local_70;
    uVar14 = 8;
LAB_0010174e:
    uVar16 = 1;
LAB_00101753:
    iVar8 = ssl_print_extensions(param_7,6,uVar16,uVar14,ppXVar21,ppXVar22);
    goto joined_r0x00102271;
  case 0xb:
    local_60 = local_70;
    if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
        (iVar8 = *(int *)&param_6->wbio->method, iVar8 != 0x10000)) && (0x303 < iVar8)) {
      pXVar29 = local_60;
      if ((local_90 == (X509 *)0x0) ||
         (pXVar19 = (X509 *)((ulong)*(byte *)&local_70->cert_info + 1), local_90 < pXVar19))
      goto LAB_00101436;
      ssl_print_hex(param_7,6,"context",(byte *)((long)&local_70->cert_info + 1));
      local_60 = (X509 *)((long)&pXVar19->cert_info + (long)&pXVar20->cert_info);
      local_90 = (X509 *)((long)local_90 - (long)pXVar19);
    }
    pXVar29 = local_60;
    if ((X509 *)0x2 < local_90) {
      uVar23 = (uint)*(byte *)&local_60->cert_info << 0x10 |
               (uint)*(byte *)((long)&local_60->cert_info + 1) << 8 |
               (uint)*(byte *)((long)&local_60->cert_info + 2);
      pXVar20 = (X509 *)(long)(int)uVar23;
      local_58 = pXVar20;
      if ((X509 *)((long)&pXVar20->cert_info + 3) == local_90) {
        pXVar19 = (X509 *)((long)&local_60->cert_info + 3);
        if (param_1 == 0) {
          cVar2 = (char)param_6[4].read_ahead;
        }
        else {
          cVar2 = *(char *)((long)&param_6[4].read_ahead + 2);
        }
        if (cVar2 != '\x02') {
          local_60 = pXVar19;
          BIO_indent(param_7,6,0x50);
          BIO_printf(param_7,"certificate_list, length=%d\n",(ulong)uVar23);
          if (uVar23 != 0) {
            do {
              pXVar29 = local_60;
              pSVar6 = param_6->method;
              if (pXVar20 < (X509 *)0x3) goto LAB_00101436;
              uVar23 = (uint)*(byte *)&local_60->cert_info << 0x10 |
                       (uint)*(byte *)((long)&local_60->cert_info + 1) << 8 |
                       (uint)*(byte *)((long)&local_60->cert_info + 2);
              lVar24 = (long)(int)uVar23;
              if (pXVar20 < (X509 *)(lVar24 + 3U)) goto LAB_00101436;
              local_48 = (X509 *)((long)&local_60->cert_info + 3);
              BIO_indent(param_7,8,0x50);
              BIO_printf(param_7,"ASN.1Cert, length=%d",uVar23);
              local_50 = (X509 *)X509_new_ex(*(undefined8 *)pSVar6,pSVar6[4].ssl_version);
              if (local_50 == (X509 *)0x0) {
LAB_00101afa:
                BIO_puts(param_7,"<UNPARSEABLE CERTIFICATE>\n");
              }
              else {
                pXVar19 = d2i_X509(&local_50,(uchar **)&local_48,lVar24);
                if (pXVar19 == (X509 *)0x0) {
                  X509_free(local_50);
                  local_50 = (X509 *)0x0;
                  goto LAB_00101afa;
                }
                if (local_50 == (X509 *)0x0) goto LAB_00101afa;
                BIO_puts(param_7,"\n------details-----\n");
                X509_print_ex(param_7,local_50,0x82031f,0);
                PEM_write_bio_X509(param_7,local_50);
                BIO_puts(param_7,"------------------\n");
                X509_free(local_50);
              }
              pXVar29 = (X509 *)((long)&pXVar29->cert_info +
                                (long)&((X509 *)(lVar24 + 3U))->cert_info);
              if (pXVar29 != local_48) {
                BIO_puts(param_7,"<TRAILING GARBAGE AFTER CERTIFICATE>\n");
              }
              local_58 = (X509 *)((long)pXVar20 + (-3 - lVar24));
              local_60 = pXVar29;
              if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
                  (iVar8 = *(int *)&param_6->wbio->method, 0x303 < iVar8)) &&
                 ((iVar8 != 0x10000 &&
                  (iVar8 = ssl_print_extensions(param_7,8,param_1,0xb,&local_60,&local_58),
                  pXVar29 = local_60, iVar8 == 0)))) goto LAB_00101436;
              pXVar20 = local_58;
            } while (local_58 != (X509 *)0x0);
          }
          break;
        }
        pXVar29 = pXVar19;
        local_48 = pXVar19;
        if (2 < uVar23) {
          uVar23 = (uint)*(byte *)((long)&local_60->cert_info + 3) << 0x10 |
                   (uint)*(byte *)((long)&local_60->cert_info + 4) << 8 |
                   (uint)*(byte *)((long)&local_60->cert_info + 5);
          lVar24 = (long)(int)uVar23;
          if ((X509 *)(lVar24 + 3U) <= pXVar20) {
            local_48 = (X509 *)((long)&local_60->cert_info + 6);
            local_60 = pXVar19;
            BIO_indent(param_7,6,0x50);
            BIO_printf(param_7,"raw_public_key, length=%d\n",uVar23);
            pkey = (EVP_PKEY *)
                   d2i_PUBKEY_ex(0,&local_48,lVar24,*(undefined8 *)param_6->method,
                                 param_6->method[4].ssl_version);
            pXVar29 = local_60;
            if (pkey != (EVP_PKEY *)0x0) {
              EVP_PKEY_print_public(param_7,pkey,8,(ASN1_PCTX *)0x0);
              pXVar29 = (X509 *)((long)&((X509 *)(lVar24 + 3U))->cert_info +
                                (long)&pXVar19->cert_info);
              EVP_PKEY_free(pkey);
              local_58 = (X509 *)((long)pXVar20 + (-3 - lVar24));
              local_60 = pXVar29;
              if (((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) ||
                   (iVar8 = *(int *)&param_6->wbio->method, iVar8 < 0x304)) || (iVar8 == 0x10000))
                 || (iVar8 = ssl_print_extensions(param_7,8,param_1,0xb,&local_60,&local_58),
                    pXVar29 = local_60, iVar8 != 0)) break;
            }
          }
        }
      }
    }
    goto LAB_00101436;
  case 0xc:
    local_58 = local_70;
    local_50 = local_90;
    uVar23 = ssl_get_keyex_isra_0(&local_48,param_6[1].init_buf);
    BIO_indent(param_7,6,0x50);
    BIO_printf(param_7,"KeyExchangeAlgorithm=%s\n",local_48);
    uVar28 = uVar23 & 0x1c8;
    pXVar29 = local_60;
    if (uVar28 != 0) {
      if ((local_90 < (X509 *)0x2) ||
         (pXVar19 = (X509 *)((ulong)(ushort)(*(ushort *)&pXVar20->cert_info << 8 |
                                            *(ushort *)&pXVar20->cert_info >> 8) + 2),
         local_90 < pXVar19)) goto LAB_00101436;
      pXVar29 = (X509 *)((long)&pXVar19->cert_info + (long)&pXVar20->cert_info);
      ssl_print_hex(param_7,8,"psk_identity_hint",(byte *)((long)&pXVar20->cert_info + 2));
      local_50 = (X509 *)((long)local_90 - (long)pXVar19);
      local_58 = pXVar29;
      if (uVar23 == 0x100) goto LAB_0010294b;
      pXVar20 = local_50;
      if (((int)uVar23 < 0x101) && (uVar23 == 0x80)) goto LAB_00102811;
      goto joined_r0x001018c4;
    }
    if (uVar23 == 4) {
LAB_00102811:
      pXVar20 = local_50;
      pXVar29 = local_60;
      if (local_50 != (X509 *)0x0) {
        BIO_indent(param_7,8,0x50);
        pXVar19 = local_58;
        bVar4 = *(byte *)&local_58->cert_info;
        if (bVar4 == 1) {
          BIO_puts(param_7,"explicit_prime\n");
        }
        else {
          if (bVar4 != 2) {
            if (bVar4 == 3) {
              pXVar29 = local_60;
              if ((X509 *)0x2 < pXVar20) {
                uVar26 = *(ushort *)((long)&local_58->cert_info + 1);
                puVar10 = &ssl_groups_tbl;
                do {
                  if ((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) == *puVar10) {
                    pcVar15 = *(char **)(puVar10 + 2);
                    goto LAB_00102898;
                  }
                  puVar10 = puVar10 + 4;
                } while (puVar10 != (uint *)&DAT_00107fd0);
                pcVar15 = "UNKNOWN";
LAB_00102898:
                pXVar27 = (X509 *)((long)&local_58->cert_info + 3);
                BIO_printf(param_7,"named_curve: %s (%d)\n",pcVar15);
                local_50 = (X509 *)((long)&pXVar20[-1].aux + 5);
                pXVar29 = local_60;
                local_58 = pXVar27;
                if ((local_50 != (X509 *)0x0) &&
                   (pXVar31 = (X509 *)((ulong)*(byte *)((long)&pXVar19->cert_info + 3) + 1),
                   pXVar31 <= local_50)) {
                  pXVar20 = (X509 *)((long)local_50 - (long)pXVar31);
                  ssl_print_hex(param_7,8,"point",(byte *)((long)&pXVar19->cert_info + 4));
                  local_58 = (X509 *)((long)&pXVar31->cert_info + (long)&pXVar27->cert_info);
                  goto LAB_00102a3d;
                }
              }
            }
            else {
              BIO_printf(param_7,"UNKNOWN CURVE PARAMETER TYPE %d\n",(ulong)bVar4);
              pXVar29 = local_60;
            }
            goto LAB_00101436;
          }
          BIO_puts(param_7,"explicit_char2\n");
        }
        pXVar29 = local_60;
        if (uVar28 == 0) goto LAB_001018a9;
      }
    }
    else if ((int)uVar23 < 5) {
      if (uVar23 == 1) {
        if (((X509 *)0x1 < local_90) &&
           (pXVar19 = (X509 *)((ulong)(ushort)(*(ushort *)&pXVar20->cert_info << 8 |
                                              *(ushort *)&pXVar20->cert_info >> 8) + 2),
           pXVar19 <= local_90)) {
          pXVar27 = (X509 *)((long)&pXVar19->cert_info + (long)&pXVar20->cert_info);
          ssl_print_hex(param_7,8,"rsa_modulus",(byte *)((long)&pXVar20->cert_info + 2));
          local_90 = (X509 *)((long)local_90 - (long)pXVar19);
          pXVar29 = local_60;
          local_58 = pXVar27;
          local_50 = local_90;
          if (((X509 *)0x1 < local_90) &&
             (pXVar20 = (X509 *)((ulong)(ushort)(*(ushort *)&pXVar27->cert_info << 8 |
                                                *(ushort *)&pXVar27->cert_info >> 8) + 2),
             pXVar20 <= local_90)) {
            ssl_print_hex(param_7,8,"rsa_exponent",(byte *)((long)&pXVar27->cert_info + 2));
            local_58 = (X509 *)((long)&pXVar20->cert_info + (long)&pXVar27->cert_info);
            local_50 = (X509 *)((long)local_90 - (long)pXVar20);
            goto LAB_001018a9;
          }
        }
      }
      else {
        if (uVar23 != 2) goto LAB_001018a9;
LAB_0010294b:
        pXVar29 = local_60;
        if (((X509 *)0x1 < local_50) &&
           (pXVar19 = (X509 *)((ulong)(ushort)(*(ushort *)&local_58->cert_info << 8 |
                                              *(ushort *)&local_58->cert_info >> 8) + 2),
           pXVar19 <= local_50)) {
          pXVar20 = (X509 *)((long)local_50 - (long)pXVar19);
          pXVar19 = (X509 *)((long)&pXVar19->cert_info + (long)&local_58->cert_info);
          ssl_print_hex(param_7,8,&_LC58,(byte *)((long)&local_58->cert_info + 2));
          pXVar29 = local_60;
          local_58 = pXVar19;
          local_50 = pXVar20;
          if (((X509 *)0x1 < pXVar20) &&
             (pXVar27 = (X509 *)((ulong)(ushort)(*(ushort *)&pXVar19->cert_info << 8 |
                                                *(ushort *)&pXVar19->cert_info >> 8) + 2),
             pXVar27 <= pXVar20)) {
            pXVar31 = (X509 *)((long)&pXVar27->cert_info + (long)&pXVar19->cert_info);
            pXVar20 = (X509 *)((long)pXVar20 - (long)pXVar27);
            ssl_print_hex(param_7,8,&_LC59,(byte *)((long)&pXVar19->cert_info + 2));
            pXVar29 = local_60;
            local_58 = pXVar31;
            local_50 = pXVar20;
            if (((X509 *)0x1 < pXVar20) &&
               (pXVar19 = (X509 *)((ulong)(ushort)(*(ushort *)&pXVar31->cert_info << 8 |
                                                  *(ushort *)&pXVar31->cert_info >> 8) + 2),
               pXVar19 <= pXVar20)) {
              pXVar20 = (X509 *)((long)pXVar20 - (long)pXVar19);
              ssl_print_hex(param_7,8,"dh_Ys",(byte *)((long)&pXVar31->cert_info + 2));
              local_58 = (X509 *)((long)&pXVar19->cert_info + (long)&pXVar31->cert_info);
LAB_00102a3d:
              local_50 = pXVar20;
              if (uVar28 != 0) goto joined_r0x001018c4;
              goto LAB_001018a9;
            }
          }
        }
      }
    }
    else {
      if (uVar23 == 0x80) goto LAB_00102811;
      if (uVar23 == 0x100) goto LAB_0010294b;
LAB_001018a9:
      ssl_print_signature_constprop_0(param_7,param_6,&local_58,&local_50);
      pXVar20 = local_50;
joined_r0x001018c4:
      pXVar29 = local_60;
      if (pXVar20 == (X509 *)0x0) break;
    }
    goto LAB_00101436;
  case 0xd:
    local_58 = local_70;
    if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
        (iVar8 = *(int *)&param_6->wbio->method, 0x303 < iVar8)) && (iVar8 != 0x10000)) {
      local_50 = local_90;
      if ((local_90 != (X509 *)0x0) &&
         (pXVar20 = (X509 *)((ulong)*(byte *)&local_70->cert_info + 1), local_50 = local_90,
         pXVar20 <= local_90)) {
        ppXVar7 = &local_70->cert_info;
        local_50 = local_90;
        ssl_print_hex(param_7,6,"request_context",(byte *)((long)&local_70->cert_info + 1));
        ppXVar22 = &local_50;
        ppXVar21 = &local_58;
        uVar14 = 0xd;
        local_50 = (X509 *)((long)local_90 - (long)pXVar20);
        local_58 = (X509 *)((long)&pXVar20->cert_info + (long)ppXVar7);
        goto LAB_0010174e;
      }
    }
    else {
      local_50 = local_90;
      if ((local_90 != (X509 *)0x0) &&
         (uVar30 = (ulong)*(byte *)&local_70->cert_info, local_50 = local_90,
         (X509 *)(uVar30 + 1) <= local_90)) {
        pbVar17 = (byte *)((long)&local_70->cert_info + 1);
        local_50 = local_90;
        BIO_indent(param_7,6,0x50);
        BIO_printf(param_7,"certificate_types (len=%d)\n",uVar30);
        pbVar18 = pbVar17;
        if (uVar30 != 0) {
          do {
            bVar4 = *pbVar18;
            BIO_indent(param_7,8,0x50);
            puVar10 = &ssl_ctype_tbl;
            do {
              if ((uint)bVar4 == *puVar10) {
                pcVar15 = *(char **)(puVar10 + 2);
                goto LAB_00102366;
              }
              puVar10 = puVar10 + 4;
            } while (puVar10 != &ssl_sigalg_tbl);
            pcVar15 = "UNKNOWN";
LAB_00102366:
            BIO_printf(param_7,"%s (%d)\n",pcVar15,(ulong)(uint)bVar4);
            pbVar18 = pbVar18 + 1;
          } while (pbVar18 != pbVar17 + uVar30);
        }
        local_58 = (X509 *)(pbVar17 + uVar30);
        local_50 = (X509 *)((long)local_90 + (-1 - uVar30));
        if ((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 2) == 0) {
LAB_00102ce7:
          pXVar19 = local_50;
          pXVar20 = local_58;
          pXVar29 = local_60;
          if ((X509 *)0x1 < local_50) {
            uVar26 = *(ushort *)&local_58->cert_info;
            BIO_indent(param_7,6,0x50);
            uVar26 = uVar26 << 8 | uVar26 >> 8;
            uVar30 = (ulong)uVar26;
            pXVar29 = local_60;
            if ((X509 *)(uVar30 + 2) <= pXVar19) {
              local_58 = (X509 *)((long)&pXVar20->cert_info + 2);
              pXVar19 = (X509 *)((long)pXVar19 + (-2 - uVar30));
              local_50 = pXVar19;
              BIO_printf(param_7,"certificate_authorities (len=%d)\n",(ulong)uVar26);
              for (; pXVar29 = local_60, uVar30 != 0; uVar30 = (uVar30 - len) - 2) {
                if (uVar30 == 1) goto LAB_00101436;
                uVar26 = *(ushort *)&local_58->cert_info << 8 | *(ushort *)&local_58->cert_info >> 8
                ;
                len = (ulong)uVar26;
                if (uVar30 < len + 2) goto LAB_00101436;
                pXVar29 = (X509 *)((long)&local_58->cert_info + 2);
                local_58 = pXVar29;
                BIO_indent(param_7,8,0x50);
                BIO_printf(param_7,"DistinguishedName (len=%d): ",(ulong)uVar26);
                local_48 = pXVar29;
                nm = d2i_X509_NAME((X509_NAME **)0x0,(uchar **)&local_48,len);
                if (nm == (X509_NAME *)0x0) {
                  BIO_puts(param_7,"<UNPARSEABLE DN>\n");
                }
                else {
                  X509_NAME_print_ex(param_7,nm,0,0x82031f);
                  BIO_puts(param_7,"\n");
                  X509_NAME_free(nm);
                }
                local_58 = (X509 *)((long)&pXVar29->cert_info + len);
              }
              pXVar20 = local_50;
              if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
                  (iVar8 = *(int *)&param_6->wbio->method, iVar8 != 0x10000)) && (0x303 < iVar8)) {
                if ((pXVar19 < (X509 *)0x2) ||
                   (pXVar20 = (X509 *)((ulong)(ushort)(*(ushort *)&local_58->cert_info << 8 |
                                                      *(ushort *)&local_58->cert_info >> 8) + 2),
                   pXVar19 < pXVar20)) goto LAB_00101436;
                pXVar20 = (X509 *)((long)pXVar19 - (long)pXVar20);
                ssl_print_hex(param_7,6,"request_extensions",
                              (byte *)((long)&local_58->cert_info + 2));
                local_50 = pXVar20;
              }
              goto joined_r0x001018c4;
            }
          }
        }
        else {
          pXVar29 = local_60;
          if ((X509 *)0x1 < local_50) {
            uVar26 = *(ushort *)&local_58->cert_info >> 8;
            uVar25 = *(ushort *)&local_58->cert_info << 8 | uVar26;
            uVar30 = (ulong)uVar25;
            if (((X509 *)(uVar30 + 2) <= local_50) && ((uVar26 & 1) == 0)) {
              local_58 = (X509 *)((long)&local_58->cert_info + 2);
              local_50 = (X509 *)((long)local_50 + (-2 - uVar30));
              BIO_indent(param_7,6,0x50);
              BIO_printf(param_7,"signature_algorithms (len=%d)\n",(ulong)uVar25);
              for (; uVar30 != 0; uVar30 = uVar30 - 2) {
                BIO_indent(param_7,8,0x50);
                puVar10 = &ssl_sigalg_tbl;
                do {
                  if ((uint)(ushort)(*(ushort *)&local_58->cert_info << 8 |
                                    *(ushort *)&local_58->cert_info >> 8) == *puVar10) {
                    pcVar15 = *(char **)(puVar10 + 2);
                    goto LAB_00102491;
                  }
                  puVar10 = puVar10 + 4;
                } while (puVar10 != &ssl_mfl_tbl);
                pcVar15 = "UNKNOWN";
LAB_00102491:
                ppXVar7 = &local_58->cert_info;
                BIO_printf(param_7,"%s (0x%04x)\n",pcVar15);
                local_58 = (X509 *)((long)ppXVar7 + 2);
              }
              goto LAB_00102ce7;
            }
          }
        }
      }
    }
    goto LAB_00101436;
  case 0xf:
    iVar8 = ssl_print_signature_constprop_0(param_7,param_6,&local_70,&local_68);
joined_r0x00102271:
    pXVar29 = local_60;
    if (iVar8 == 0) goto LAB_00101436;
    break;
  case 0x10:
    uVar23 = ssl_get_keyex_isra_0(&local_48,param_6[1].init_buf);
    BIO_indent(param_7,6,0x50);
    BIO_printf(param_7,"KeyExchangeAlgorithm=%s\n",local_48);
    if ((uVar23 & 0x1c8) == 0) {
      if (uVar23 == 0x40) goto LAB_00102bc2;
      if ((int)uVar23 < 0x41) {
        if (uVar23 != 4) {
LAB_00102529:
          if ((int)uVar23 < 5) {
            if (uVar23 == 1) goto LAB_00102bc2;
            if (uVar23 == 2) goto LAB_00102543;
          }
          else if (uVar23 == 0x10) {
            ssl_print_hex(param_7,8,"GostKeyTransportBlob",pXVar20,local_90);
            break;
          }
          goto LAB_0010258d;
        }
LAB_00102762:
        pXVar29 = local_60;
        if ((local_90 == (X509 *)0x0) ||
           (pXVar19 = (X509 *)((ulong)*(byte *)&pXVar20->cert_info + 1), local_90 < pXVar19))
        goto LAB_00101436;
        pbVar18 = (byte *)((long)&pXVar20->cert_info + 1);
        pcVar15 = "ecdh_Yc";
LAB_00102578:
        ssl_print_hex(param_7,8,pcVar15,pbVar18);
        local_90 = (X509 *)((long)local_90 - (long)pXVar19);
      }
      else {
LAB_0010273b:
        if (uVar23 == 0x100) {
LAB_00102543:
          pXVar29 = local_60;
          if ((X509 *)0x1 < local_90) {
            pbVar18 = (byte *)((long)&pXVar20->cert_info + 2);
            pcVar15 = "dh_Yc";
            pXVar19 = (X509 *)((ulong)(ushort)(*(ushort *)&pXVar20->cert_info << 8 |
                                              *(ushort *)&pXVar20->cert_info >> 8) + 2);
            if (pXVar19 <= local_90) goto LAB_00102578;
          }
          goto LAB_00101436;
        }
        if (uVar23 == 0x200) {
          ssl_print_hex(param_7,8,"GOST-wrapped PreMasterSecret",pXVar20,local_90);
          break;
        }
        if (uVar23 == 0x80) goto LAB_00102762;
      }
    }
    else {
      pXVar29 = local_60;
      if ((local_90 < (X509 *)0x2) ||
         (pXVar19 = (X509 *)((ulong)(ushort)(*(ushort *)&pXVar20->cert_info << 8 |
                                            *(ushort *)&pXVar20->cert_info >> 8) + 2),
         local_90 < pXVar19)) goto LAB_00101436;
      ppXVar7 = &pXVar20->cert_info;
      pXVar20 = (X509 *)((long)&pXVar19->cert_info + (long)&pXVar20->cert_info);
      ssl_print_hex(param_7,8,"psk_identity",(byte *)((long)ppXVar7 + 2));
      local_90 = (X509 *)((long)local_90 - (long)pXVar19);
      if (uVar23 != 0x40) {
        if ((int)uVar23 < 0x41) goto LAB_00102529;
        goto LAB_0010273b;
      }
LAB_00102bc2:
      iVar8 = SSL_version(param_6);
      if ((iVar8 >> 8 != 3) || (iVar8 = SSL_version(param_6), iVar8 != 0x300)) {
        pXVar29 = local_60;
        if ((X509 *)0x1 < local_90) {
          pbVar18 = (byte *)((long)&pXVar20->cert_info + 2);
          pcVar15 = "EncryptedPreMasterSecret";
          pXVar19 = (X509 *)((ulong)(ushort)(*(ushort *)&pXVar20->cert_info << 8 |
                                            *(ushort *)&pXVar20->cert_info >> 8) + 2);
          if (pXVar19 <= local_90) goto LAB_00102578;
        }
        goto LAB_00101436;
      }
      ssl_print_hex(param_7,8,"EncryptedPreMasterSecret",pXVar20,local_90);
    }
LAB_0010258d:
    pXVar29 = local_60;
    if (local_90 != (X509 *)0x0) goto LAB_00101436;
    break;
  case 0x14:
    ssl_print_hex(param_7,6,"verify_data",local_70,local_90);
    break;
  case 0x18:
    if (local_90 != (X509 *)0x1) {
      ssl_print_hex(param_7,6,"unexpected value",local_70,local_90);
      pXVar29 = local_60;
      goto LAB_00101436;
    }
    bVar4 = *(byte *)&local_70->cert_info;
    BIO_indent(param_7,6,0x50);
    puVar13 = ssl_key_update_tbl;
    if (bVar4 == 0) {
LAB_00102a5c:
      pcVar15 = *(char **)(puVar13 + 8);
    }
    else {
      if (bVar4 == 1) {
        puVar13 = (undefined1 *)0x107910;
        goto LAB_00102a5c;
      }
      pcVar15 = "UNKNOWN";
    }
    BIO_printf(param_7,"%s (%d)\n",pcVar15,(ulong)(uint)bVar4);
    break;
  case 0x19:
    if ((X509 *)0x7 < local_90) {
      uVar26 = *(ushort *)&local_70->cert_info;
      bVar4 = *(byte *)((long)&local_70->cert_info + 2);
      bVar5 = *(byte *)((long)&local_70->cert_info + 3);
      bVar3 = *(byte *)((long)&local_70->cert_info + 4);
      uVar23 = (uint)*(byte *)((long)&local_70->cert_info + 5) << 0x10 |
               (uint)*(byte *)((long)&local_70->cert_info + 6) << 8 |
               (uint)*(byte *)((long)&local_70->cert_info + 7);
      if ((X509 *)(long)(int)(uVar23 + 8) == local_90) {
        bytes = &local_70->sig_alg;
        BIO_indent(param_7,6,0x50);
        puVar10 = &ssl_comp_cert_tbl;
        do {
          if ((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) == *puVar10) {
            pcVar15 = *(char **)(puVar10 + 2);
            goto LAB_00102161;
          }
          puVar10 = puVar10 + 4;
        } while (puVar10 != (uint *)ssl_key_update_tbl);
        pcVar15 = "UNKNOWN";
LAB_00102161:
        uVar28 = (uint)bVar3 | (uint)bVar4 << 0x10 | (uint)bVar5 << 8;
        BIO_printf(param_7,"Compression type=%s (0x%04x)\n",pcVar15);
        BIO_indent(param_7,6,0x50);
        BIO_printf(param_7,"Uncompressed length=%d\n",(ulong)uVar28);
        BIO_indent(param_7,6,0x50);
        if (uVar23 == 0) {
          BIO_printf(param_7,"Compressed length=%d, Ratio=unknown\n",0);
        }
        else {
          BIO_printf(param_7,"Compressed length=%d, Ratio=%f:1\n",
                     (double)((float)uVar28 / (float)uVar23),(ulong)uVar23);
        }
        BIO_dump_indent(param_7,(char *)bytes,uVar23,6);
        break;
      }
    }
LAB_00101436:
    local_60 = pXVar29;
    BIO_printf(param_7,"Message length parse error!\n");
  }
LAB_00101340:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    BIO_puts(param_7,"\n");
    return;
  }
LAB_00102a65:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


