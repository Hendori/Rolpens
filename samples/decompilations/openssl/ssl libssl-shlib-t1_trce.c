
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
      *param_1 = &_LC7;
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



undefined8
ssl_print_hexbuf(BIO *param_1,int param_2,undefined8 param_3,ulong param_4,long *param_5,
                ulong *param_6)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  ushort *puVar4;
  ulong uVar5;
  byte *pbVar6;
  
  if (param_4 <= *param_6) {
    puVar4 = (ushort *)*param_5;
    uVar5 = (ulong)(byte)*puVar4;
    if (param_4 == 2) {
      uVar5 = (ulong)(ushort)(*puVar4 << 8 | *puVar4 >> 8);
    }
    uVar1 = uVar5 + param_4;
    if (uVar1 <= *param_6) {
      BIO_indent(param_1,param_2,0x50);
      BIO_printf(param_1,"%s (len=%d): ",param_3,uVar5);
      if (uVar5 != 0) {
        pbVar6 = (byte *)(param_4 + (long)puVar4);
        pbVar2 = pbVar6 + uVar5;
        do {
          bVar3 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          BIO_printf(param_1,"%02X",(ulong)bVar3);
        } while (pbVar6 != pbVar2);
      }
      BIO_puts(param_1,"\n");
      *param_5 = *param_5 + uVar1;
      *param_6 = *param_6 - uVar1;
      return 1;
    }
  }
  return 0;
}



undefined8 ssl_print_signature_constprop_0(BIO *param_1,long param_2,long *param_3,ulong *param_4)

{
  ulong uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint *puVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort uVar10;
  
  uVar5 = *param_4;
  if (uVar5 < 2) {
    return 0;
  }
  puVar9 = (ushort *)*param_3;
  uVar10 = *puVar9;
  if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x18) + 0xd8) + 0x50) & 2) != 0) {
    BIO_indent(param_1,6,0x50);
    puVar4 = &ssl_sigalg_tbl;
    do {
      uVar8 = (uint)(ushort)(uVar10 << 8 | uVar10 >> 8);
      if (uVar8 == *puVar4) {
        pcVar6 = *(char **)(puVar4 + 2);
        goto LAB_00100472;
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != &ssl_groups_tbl);
    pcVar6 = "UNKNOWN";
LAB_00100472:
    BIO_printf(param_1,"Signature Algorithm: %s (0x%04x)\n",pcVar6,(ulong)uVar8);
    puVar9 = (ushort *)(*param_3 + 2);
    uVar5 = *param_4;
    *param_3 = (long)puVar9;
    uVar5 = uVar5 - 2;
    *param_4 = uVar5;
    if (uVar5 < 2) {
      return 0;
    }
  }
  uVar10 = *puVar9 << 8 | *puVar9 >> 8;
  uVar7 = (ulong)uVar10;
  uVar1 = uVar7 + 2;
  if (uVar5 < uVar1) {
    return 0;
  }
  BIO_indent(param_1,6,0x50);
  BIO_printf(param_1,"%s (len=%d): ","Signature",(ulong)uVar10);
  puVar3 = (ushort *)((long)puVar9 + uVar7);
  if (uVar7 != 0) {
    do {
      puVar2 = puVar9 + 1;
      puVar9 = (ushort *)((long)puVar9 + 1);
      BIO_printf(param_1,"%02X",(ulong)(byte)*puVar2);
    } while (puVar9 != puVar3);
  }
  BIO_puts(param_1,"\n");
  *param_3 = *param_3 + uVar1;
  *param_4 = *param_4 - uVar1;
  return 1;
}



undefined8
ssl_print_extensions(BIO *param_1,int param_2,int param_3,char param_4,long *param_5,ulong *param_6)

{
  ushort *bytes;
  byte bVar1;
  ulong uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  byte *pbVar12;
  ushort *puVar13;
  ulong uVar14;
  ushort uVar15;
  byte *pbVar16;
  ushort *puVar17;
  ulong local_a8;
  ulong local_80;
  
  uVar8 = *param_6;
  puVar11 = (ushort *)*param_5;
  BIO_indent(param_1,param_2,0x50);
  if (uVar8 == 0) {
    BIO_puts(param_1,"No extensions\n");
    return 1;
  }
  if (uVar8 != 1) {
    uVar9 = *puVar11;
    uVar8 = uVar8 - 2;
    uVar9 = uVar9 << 8 | uVar9 >> 8;
    uVar6 = (ulong)uVar9;
    puVar11 = puVar11 + 1;
    if (uVar9 == 0) {
      BIO_puts(param_1,"No extensions\n");
      *param_5 = (long)puVar11;
      *param_6 = uVar8;
      return 1;
    }
    if ((uVar6 <= uVar8) &&
       (BIO_printf(param_1,"extensions, length = %d\n",(ulong)uVar9), 3 < uVar9)) {
      local_a8 = uVar6;
      while( true ) {
        uVar9 = puVar11[1] << 8 | puVar11[1] >> 8;
        uVar15 = *puVar11 << 8 | *puVar11 >> 8;
        uVar14 = (ulong)uVar9;
        uVar2 = (ulong)uVar9;
        if (local_a8 < uVar2 + 4) break;
        bytes = puVar11 + 2;
        BIO_indent(param_1,param_2 + 2,0x50);
        puVar3 = &ssl_exts_tbl;
        do {
          if ((uint)uVar15 == *puVar3) {
            pcVar7 = *(char **)(puVar3 + 2);
            goto LAB_0010060a;
          }
          puVar3 = puVar3 + 4;
        } while (puVar3 != (uint *)&DAT_00109270);
        pcVar7 = "UNKNOWN";
LAB_0010060a:
        BIO_printf(param_1,"extension_type=%s(%d), length=%d\n",pcVar7,(ulong)uVar15,uVar14);
        if (uVar15 < 0x34) {
          switch(uVar15) {
          case 1:
            if (uVar9 == 0) {
              return 0;
            }
            puVar11 = bytes;
            do {
              bVar1 = (byte)*puVar11;
              BIO_indent(param_1,param_2 + 4,0x50);
              pcVar7 = "disabled";
              if ((((bVar1 != 0) && (pcVar7 = "max_fragment_length := 2^9 (512 bytes)", bVar1 != 1))
                  && (pcVar7 = "max_fragment_length := 2^10 (1024 bytes)", bVar1 != 2)) &&
                 ((pcVar7 = "max_fragment_length := 2^11 (2048 bytes)", bVar1 != 3 &&
                  (pcVar7 = "max_fragment_length := 2^12 (4096 bytes)", bVar1 != 4)))) {
                pcVar7 = "UNKNOWN";
              }
              puVar11 = (ushort *)((long)puVar11 + 1);
              BIO_printf(param_1,"%s (%d)\n",pcVar7,(ulong)bVar1);
            } while (puVar11 != (ushort *)((long)bytes + uVar2));
            break;
          default:
switchD_0010064d_caseD_2:
            BIO_dump_indent(param_1,(char *)bytes,(uint)uVar9,param_2 + 4);
            break;
          case 10:
            if (uVar9 < 2) {
              return 0;
            }
            uVar9 = puVar11[2];
            uVar14 = (ulong)(ushort)(uVar9 << 8 | uVar9 >> 8);
            if (uVar2 != uVar14 + 2) {
              return 0;
            }
            if ((uVar9 >> 8 & 1) != 0) {
              return 0;
            }
            if (uVar9 != 0) {
              puVar11 = puVar11 + 3;
              puVar13 = (ushort *)((long)puVar11 + uVar14);
              do {
                uVar9 = *puVar11;
                BIO_indent(param_1,param_2 + 4,0x50);
                puVar3 = &ssl_groups_tbl;
                do {
                  uVar10 = (uint)(ushort)(uVar9 << 8 | uVar9 >> 8);
                  if (uVar10 == *puVar3) {
                    pcVar7 = *(char **)(puVar3 + 2);
                    goto LAB_00100f06;
                  }
                  puVar3 = puVar3 + 4;
                } while (puVar3 != (uint *)&DAT_00109030);
                pcVar7 = "UNKNOWN";
LAB_00100f06:
                puVar11 = puVar11 + 1;
                BIO_printf(param_1,"%s (%d)\n",pcVar7,(ulong)uVar10);
              } while (puVar11 != puVar13);
            }
            break;
          case 0xb:
            if (uVar9 == 0) {
              return 0;
            }
            uVar14 = (ulong)(byte)puVar11[2];
            if (uVar2 != uVar14 + 1) {
              return 0;
            }
            pbVar12 = (byte *)((long)puVar11 + 5);
            if (uVar14 != 0) {
              do {
                bVar1 = *pbVar12;
                BIO_indent(param_1,param_2 + 4,0x50);
                pcVar7 = "uncompressed";
                if (((bVar1 != 0) && (pcVar7 = "ansiX962_compressed_prime", bVar1 != 1)) &&
                   (pcVar7 = "ansiX962_compressed_char2", bVar1 != 2)) {
                  pcVar7 = "UNKNOWN";
                }
                pbVar12 = pbVar12 + 1;
                BIO_printf(param_1,"%s (%d)\n",pcVar7,(ulong)bVar1);
              } while (pbVar12 != (byte *)((long)puVar11 + 5) + uVar14);
            }
            break;
          case 0xd:
            if (uVar9 < 2) {
              return 0;
            }
            uVar9 = puVar11[2];
            uVar14 = (ulong)(ushort)(uVar9 << 8 | uVar9 >> 8);
            if (uVar2 != uVar14 + 2) {
              return 0;
            }
            if ((uVar9 >> 8 & 1) != 0) {
              return 0;
            }
            puVar11 = puVar11 + 3;
            if (uVar9 != 0) {
              puVar13 = (ushort *)((long)puVar11 + uVar14);
              do {
                BIO_indent(param_1,param_2 + 4,0x50);
                puVar3 = &ssl_sigalg_tbl;
                do {
                  if ((uint)(ushort)(*puVar11 << 8 | *puVar11 >> 8) == *puVar3) {
                    pcVar7 = *(char **)(puVar3 + 2);
                    goto LAB_00100d8d;
                  }
                  puVar3 = puVar3 + 4;
                } while (puVar3 != &ssl_groups_tbl);
                pcVar7 = "UNKNOWN";
LAB_00100d8d:
                puVar11 = puVar11 + 1;
                BIO_printf(param_1,"%s (0x%04x)\n",pcVar7);
              } while (puVar11 != puVar13);
            }
            break;
          case 0x10:
            if (uVar9 < 2) {
              return 0;
            }
            uVar14 = (ulong)(ushort)(puVar11[2] << 8 | puVar11[2] >> 8);
            if (uVar2 != uVar14 + 2) {
              return 0;
            }
            puVar11 = puVar11 + 3;
            for (; uVar14 != 0; uVar14 = (uVar14 - 1) - uVar5) {
              uVar9 = *puVar11;
              uVar5 = (ulong)(byte)uVar9;
              if (uVar14 < uVar5 + 1) {
                return 0;
              }
              BIO_indent(param_1,param_2 + 4,0x50);
              BIO_write(param_1,(byte *)((long)puVar11 + 1),(uint)(byte)uVar9);
              BIO_puts(param_1,"\n");
              puVar11 = (ushort *)((byte *)((long)puVar11 + 1) + uVar5);
            }
            break;
          case 0x13:
          case 0x14:
            if (param_3 == 0) {
              if (uVar9 == 0) {
                return 0;
              }
              uVar14 = (ulong)(byte)puVar11[2];
              if (uVar2 != uVar14 + 1) {
                return 0;
              }
              pbVar12 = (byte *)((long)puVar11 + 5);
              if (uVar14 != 0) {
                do {
                  bVar1 = *pbVar12;
                  BIO_indent(param_1,param_2 + 4,0x50);
                  pcVar7 = "x509";
                  uVar10 = (uint)bVar1;
                  if (((bVar1 != 0) && (pcVar7 = "pgp", uVar10 != 1)) &&
                     ((pcVar7 = "rpk", uVar10 != 2 && (pcVar7 = "1609dot2", uVar10 != 3)))) {
                    pcVar7 = "UNKNOWN";
                  }
                  pbVar12 = pbVar12 + 1;
                  BIO_printf(param_1,"%s (%d)\n",pcVar7,(ulong)uVar10);
                } while (pbVar12 != (byte *)((long)puVar11 + 5) + uVar14);
              }
            }
            else {
              if (uVar9 != 1) {
                return 0;
              }
              bVar1 = (byte)puVar11[2];
              uVar14 = (ulong)bVar1;
              BIO_indent(param_1,param_2 + 4,0x50);
              puVar4 = ssl_cert_type_tbl;
              if (bVar1 != 0) {
                if (bVar1 == 1) {
                  puVar4 = (undefined1 *)0x108990;
                }
                else if (bVar1 == 2) {
                  puVar4 = (undefined1 *)0x1089a0;
                }
                else {
                  if (bVar1 != 3) {
                    pcVar7 = "UNKNOWN";
                    goto LAB_00100a03;
                  }
                  puVar4 = (undefined1 *)0x1089b0;
                }
              }
              pcVar7 = *(char **)(puVar4 + 8);
LAB_00100a03:
              BIO_printf(param_1,"%s (%d)\n",pcVar7,uVar14);
            }
            break;
          case 0x1b:
            if (uVar9 == 0) {
              return 0;
            }
            uVar14 = (ulong)(byte)puVar11[2];
            if (uVar2 != uVar14 + 1) {
              return 0;
            }
            if (((byte)puVar11[2] & 1) != 0) {
              return 0;
            }
            if (uVar14 != 0) {
              puVar13 = (ushort *)((long)puVar11 + 5);
              do {
                uVar9 = *puVar13 << 8 | *puVar13 >> 8;
                BIO_indent(param_1,param_2 + 4,0x50);
                pcVar7 = "none";
                uVar10 = (uint)uVar9;
                if ((((uVar9 != 0) && (pcVar7 = "zlib", uVar10 != 1)) &&
                    (pcVar7 = "brotli", uVar10 != 2)) && (pcVar7 = "zstd", uVar10 != 3)) {
                  pcVar7 = "UNKNOWN";
                }
                puVar13 = puVar13 + 1;
                BIO_printf(param_1,"%s (%d)\n",pcVar7,(ulong)uVar10);
              } while (puVar13 != (ushort *)((long)puVar11 + 5 + uVar14));
            }
            break;
          case 0x23:
            if (uVar9 != 0) {
              BIO_indent(param_1,param_2 + 6,0x50);
              BIO_printf(param_1,"%s (len=%d): ","ticket",uVar14);
              puVar13 = (ushort *)((long)puVar11 + uVar2);
              do {
                puVar17 = puVar11 + 2;
                puVar11 = (ushort *)((long)puVar11 + 1);
                BIO_printf(param_1,"%02X",(ulong)(byte)*puVar17);
              } while (puVar11 != puVar13);
LAB_00100c12:
              BIO_puts(param_1,"\n");
            }
            break;
          case 0x2a:
            if (param_4 == '\x04') {
              if (uVar9 != 4) {
                return 0;
              }
              uVar10 = *(uint *)(puVar11 + 2);
              BIO_indent(param_1,param_2 + 4,0x50);
              BIO_printf(param_1,"max_early_data=%u\n",
                         (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8
                                | uVar10 << 0x18));
            }
            break;
          case 0x2b:
            if (param_3 != 0) {
              if (uVar9 != 2) {
                return 0;
              }
              uVar9 = puVar11[2] << 8 | puVar11[2] >> 8;
              uVar14 = (ulong)uVar9;
              BIO_indent(param_1,param_2 + 6,0x50);
              pcVar7 = "SSL 3.0";
              if ((((uVar9 != 0x300) && (pcVar7 = "TLS 1.0", uVar9 != 0x301)) &&
                  (pcVar7 = "TLS 1.1", uVar9 != 0x302)) &&
                 (((pcVar7 = "TLS 1.2", uVar9 != 0x303 && (pcVar7 = "TLS 1.3", uVar9 != 0x304)) &&
                  ((pcVar7 = "DTLS 1.0", uVar9 != 0xfeff &&
                   ((pcVar7 = "DTLS 1.2", uVar9 != 0xfefd && (pcVar7 = "UNKNOWN", uVar9 == 0x100))))
                  )))) {
                pcVar7 = "DTLS 1.0 (bad)";
              }
              goto LAB_00100a03;
            }
            if (uVar9 == 0) {
              return 0;
            }
            uVar14 = (ulong)(byte)puVar11[2];
            if (uVar2 != uVar14 + 1) {
              return 0;
            }
            if (((byte)puVar11[2] & 1) != 0) {
              return 0;
            }
            if (uVar14 != 0) {
              puVar13 = (ushort *)((long)puVar11 + 5);
              do {
                uVar9 = *puVar13 << 8 | *puVar13 >> 8;
                BIO_indent(param_1,param_2 + 4,0x50);
                pcVar7 = "SSL 3.0";
                if ((((((uVar9 != 0x300) && (pcVar7 = "TLS 1.0", uVar9 != 0x301)) &&
                      (pcVar7 = "TLS 1.1", uVar9 != 0x302)) &&
                     ((pcVar7 = "TLS 1.2", uVar9 != 0x303 && (pcVar7 = "TLS 1.3", uVar9 != 0x304))))
                    && (pcVar7 = "DTLS 1.0", uVar9 != 0xfeff)) &&
                   ((pcVar7 = "DTLS 1.2", uVar9 != 0xfefd && (pcVar7 = "UNKNOWN", uVar9 == 0x100))))
                {
                  pcVar7 = "DTLS 1.0 (bad)";
                }
                puVar13 = puVar13 + 1;
                BIO_printf(param_1,"%s (%d)\n",pcVar7,(ulong)uVar9);
              } while (puVar13 != (ushort *)((long)puVar11 + 5 + uVar14));
            }
            break;
          case 0x2d:
            if (uVar9 == 0) {
              return 0;
            }
            uVar14 = (ulong)(byte)puVar11[2];
            if (uVar2 != uVar14 + 1) {
              return 0;
            }
            pbVar12 = (byte *)((long)puVar11 + 5);
            if (uVar14 != 0) {
              pbVar16 = pbVar12 + uVar14;
              do {
                bVar1 = *pbVar12;
                BIO_indent(param_1,param_2 + 4,0x50);
                pcVar7 = "psk_ke";
                if ((bVar1 != 0) && (pcVar7 = "psk_dhe_ke", bVar1 != 1)) {
                  pcVar7 = "UNKNOWN";
                }
                pbVar12 = pbVar12 + 1;
                BIO_printf(param_1,"%s (%d)\n",pcVar7,(ulong)(uint)bVar1);
              } while (pbVar12 != pbVar16);
            }
            break;
          case 0x33:
            if ((param_3 == 0) || (uVar2 != 2)) {
              if (uVar9 < 2) {
                return 0;
              }
              uVar14 = uVar2;
              puVar13 = bytes;
              if (param_3 != 0) {
LAB_00101032:
                if (uVar14 < 4) {
                  return 0;
                }
                do {
                  uVar9 = *puVar13;
                  uVar15 = puVar13[1] << 8 | puVar13[1] >> 8;
                  uVar5 = (ulong)uVar15;
                  if (uVar14 - 4 < uVar5) {
                    return 0;
                  }
                  BIO_indent(param_1,param_2 + 6,0x50);
                  puVar3 = &ssl_groups_tbl;
                  do {
                    uVar10 = (uint)(ushort)(uVar9 << 8 | uVar9 >> 8);
                    if (uVar10 == *puVar3) {
                      pcVar7 = *(char **)(puVar3 + 2);
                      goto LAB_001010c6;
                    }
                    puVar3 = puVar3 + 4;
                  } while (puVar3 != (uint *)&DAT_00109030);
                  pcVar7 = "UNKNOWN";
LAB_001010c6:
                  BIO_printf(param_1,"NamedGroup: %s (%d)\n",pcVar7,(ulong)uVar10);
                  BIO_indent(param_1,param_2 + 6,0x50);
                  BIO_printf(param_1,"%s (len=%d): ","key_exchange: ",(uint)uVar15);
                  puVar11 = puVar13;
                  if (uVar15 != 0) {
                    do {
                      puVar17 = (ushort *)((long)puVar11 + 1);
                      BIO_printf(param_1,"%02X",(ulong)(byte)puVar11[2]);
                      puVar11 = puVar17;
                    } while (puVar17 != (ushort *)((long)puVar13 + uVar5));
                  }
                  BIO_puts(param_1,"\n");
                  puVar13 = (ushort *)((long)puVar13 + uVar5 + 4);
                  uVar14 = (uVar14 - 4) - uVar5;
                  if (uVar14 == 0) goto LAB_00100830;
                  if (uVar14 < 4) {
                    return 0;
                  }
                } while( true );
              }
              uVar14 = (ulong)(ushort)(puVar11[2] << 8 | puVar11[2] >> 8);
              if (uVar2 != uVar14 + 2) {
                return 0;
              }
              puVar13 = puVar11 + 3;
              if (uVar14 != 0) goto LAB_00101032;
            }
            else {
              uVar9 = puVar11[2];
              BIO_indent(param_1,param_2 + 6,0x50);
              puVar3 = &ssl_groups_tbl;
              do {
                uVar10 = (uint)(ushort)(uVar9 << 8 | uVar9 >> 8);
                if (uVar10 == *puVar3) {
                  pcVar7 = *(char **)(puVar3 + 2);
                  goto LAB_00100935;
                }
                puVar3 = puVar3 + 4;
              } while (puVar3 != (uint *)&DAT_00109030);
              pcVar7 = "UNKNOWN";
LAB_00100935:
              BIO_printf(param_1,"NamedGroup: %s (%d)\n",pcVar7,(ulong)uVar10);
            }
          }
        }
        else {
          if (uVar15 != 0xff01) goto switchD_0010064d_caseD_2;
          if (uVar9 == 0) {
            return 0;
          }
          bVar1 = (byte)puVar11[2];
          uVar14 = (ulong)bVar1;
          if (uVar2 != uVar14 + 1) {
            return 0;
          }
          if (uVar14 == 0) {
            BIO_indent(param_1,param_2 + 6,0x50);
            BIO_puts(param_1,"<EMPTY>\n");
          }
          else {
            if (param_3 == 0) {
              BIO_indent(param_1,param_2 + 6,0x50);
              BIO_printf(param_1,"%s (len=%d): ","client_verify_data",uVar14);
            }
            else {
              if ((bVar1 & 1) != 0) {
                return 0;
              }
              bVar1 = bVar1 >> 1;
              uVar14 = (ulong)bVar1;
              BIO_indent(param_1,param_2 + 6,0x50);
              BIO_printf(param_1,"%s (len=%d): ","client_verify_data",uVar14);
              if (uVar14 == 0) {
                BIO_puts(param_1,"\n");
                BIO_indent(param_1,param_2 + 6,0x50);
                BIO_printf(param_1,"%s (len=%d): ","server_verify_data",0);
                goto LAB_00100c12;
              }
            }
            local_80 = (ulong)bVar1;
            pbVar12 = (byte *)((long)puVar11 + 5);
            pbVar16 = pbVar12;
            do {
              bVar1 = *pbVar16;
              pbVar16 = pbVar16 + 1;
              BIO_printf(param_1,"%02X",(ulong)bVar1);
            } while (pbVar16 != pbVar12 + uVar14);
            BIO_puts(param_1,"\n");
            if (param_3 != 0) {
              BIO_indent(param_1,param_2 + 6,0x50);
              BIO_printf(param_1,"%s (len=%d): ","server_verify_data",local_80);
              pbVar16 = (byte *)((long)puVar11 + uVar14 + 5);
              do {
                bVar1 = *pbVar16;
                pbVar16 = pbVar16 + 1;
                BIO_printf(param_1,"%02X",(ulong)bVar1);
              } while (pbVar16 != pbVar12 + uVar14 * 2);
              goto LAB_00100c12;
            }
          }
        }
LAB_00100830:
        puVar11 = (ushort *)((long)bytes + uVar2);
        local_a8 = (local_a8 - 4) - uVar2;
        if (local_a8 == 0) {
          *param_5 = (long)puVar11;
          *param_6 = uVar8 - uVar6;
          return 1;
        }
        if (local_a8 < 4) {
          return 0;
        }
      }
      BIO_printf(param_1,"extensions, extype = %d, extlen = %d\n",(ulong)uVar15,uVar14);
      BIO_dump_indent(param_1,(char *)puVar11,(int)local_a8,param_2 + 2);
    }
  }
  return 0;
}



void SSL_trace(uint param_1,ulong param_2,int param_3,byte *param_4,X509 *param_5,SSL *param_6,
              BIO *param_7)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  SSL_METHOD *pSVar5;
  X509_CINF **ppXVar6;
  X509_CINF **ppXVar7;
  int iVar8;
  SSL *pSVar9;
  undefined1 *puVar10;
  uint *puVar11;
  char *pcVar12;
  EVP_PKEY *pkey;
  X509_NAME *nm;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  byte *pbVar17;
  X509 *pXVar18;
  uint uVar19;
  X509 **ppXVar20;
  X509 **ppXVar21;
  X509 *pXVar22;
  ushort uVar23;
  byte *pbVar24;
  X509 *pXVar25;
  ushort uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  X509 *pXVar30;
  long in_FS_OFFSET;
  X509 *local_98;
  X509 *local_70;
  X509 *local_68;
  X509 *local_60;
  X509 *local_58;
  X509 *local_50;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == (SSL *)0x0) {
LAB_00101534:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00103a5c;
  }
  uVar27 = param_6->version;
  if (uVar27 != 0) {
    if ((uVar27 & 0x80) == 0) {
      if (uVar27 != 0x80) goto LAB_00101534;
      pSVar9 = (SSL *)0x0;
LAB_001017e3:
      iVar8 = ossl_quic_trace(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (iVar8 != 0) goto LAB_00101534;
    }
    else {
      pSVar9 = (SSL *)ossl_quic_obj_get0_handshake_layer(param_6);
      param_2 = param_2 & 0xffffffff;
      if (param_6->version == 0x80) goto LAB_001017e3;
    }
    param_6 = pSVar9;
    if (param_6 == (SSL *)0x0) goto LAB_00101534;
  }
  if (param_3 != 0x16) {
    if (param_3 < 0x17) {
      if (param_3 == 0x14) {
        if (param_5 == (X509 *)0x1) {
          if (*param_4 == 1) {
            BIO_puts(param_7,"    change_cipher_spec (1)\n");
            goto LAB_00101630;
          }
          BIO_indent(param_7,4,0x50);
          BIO_printf(param_7,"%s (len=%d): ","unknown value",1);
        }
        else {
          BIO_indent(param_7,4,0x50);
          BIO_printf(param_7,"%s (len=%d): ","unknown value",(ulong)param_5 & 0xffffffff);
          if (param_5 == (X509 *)0x0) goto LAB_00101709;
        }
        pbVar24 = param_4 + (long)&param_5->cert_info;
        do {
          bVar1 = *param_4;
          param_4 = param_4 + 1;
          BIO_printf(param_7,"%02X",(ulong)bVar1);
        } while (param_4 != pbVar24);
        BIO_puts(param_7,"\n");
      }
      else if (param_3 == 0x15) {
        if (param_5 == (X509 *)0x2) {
          bVar1 = param_4[1];
          pcVar14 = SSL_alert_desc_string_long((uint)bVar1);
          bVar4 = *param_4;
          pcVar12 = SSL_alert_type_string_long((uint)bVar4 << 8);
          BIO_printf(param_7,"    Level=%s(%d), description=%s(%d)\n",pcVar12,(ulong)(uint)bVar4,
                     pcVar14,(ulong)bVar1);
        }
        else {
          BIO_puts(param_7,"    Illegal Alert Length\n");
        }
      }
      goto LAB_00101630;
    }
    if (param_3 != 0x100) {
      if (param_3 != 0x101) goto LAB_00101630;
      bVar1 = *param_4;
      if (bVar1 == 0x14) {
        puVar10 = ssl_content_tbl;
LAB_00101ada:
        pcVar14 = *(char **)(puVar10 + 8);
      }
      else {
        if (bVar1 == 0x15) {
          puVar10 = (undefined1 *)0x10a990;
          goto LAB_00101ada;
        }
        if (bVar1 == 0x16) {
          puVar10 = (undefined1 *)0x10a9a0;
          goto LAB_00101ada;
        }
        pcVar14 = "UNKNOWN";
        puVar10 = (undefined1 *)0x10a9b0;
        if (bVar1 == 0x17) goto LAB_00101ada;
      }
      BIO_printf(param_7,"  Inner Content Type = %s (%d)",pcVar14);
      goto LAB_00101630;
    }
    if (param_5 < (X509 *)((-(ulong)((*(uint *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8
                                     ) == 0) & 0xfffffffffffffff8) + 0xd)) {
      pbVar24 = param_4 + (long)param_5;
      pcVar14 = "Received";
      if (param_1 != 0) {
        pcVar14 = "Sent";
      }
      BIO_puts(param_7,pcVar14);
      BIO_indent(param_7,0,0x50);
      BIO_printf(param_7,"%s (len=%d): "," too short message",(ulong)param_5 & 0xffffffff);
      if (param_5 != (X509 *)0x0) {
        do {
          bVar1 = *param_4;
          param_4 = param_4 + 1;
          BIO_printf(param_7,"%02X",(ulong)bVar1);
        } while (param_4 != pbVar24);
      }
      goto LAB_00101709;
    }
    pcVar14 = "Received";
    uVar26 = *(ushort *)(param_4 + 1) << 8 | *(ushort *)(param_4 + 1) >> 8;
    if (param_1 != 0) {
      pcVar14 = "Sent";
    }
    BIO_puts(param_7,pcVar14);
    if (uVar26 == 0x300) {
      puVar10 = ssl_version_tbl;
LAB_00101b40:
      pcVar14 = *(char **)(puVar10 + 8);
    }
    else {
      if (uVar26 == 0x301) {
        puVar10 = (undefined1 *)0x10a9d0;
        goto LAB_00101b40;
      }
      if (uVar26 == 0x302) {
        puVar10 = (undefined1 *)0x10a9e0;
        goto LAB_00101b40;
      }
      if (uVar26 == 0x303) {
        puVar10 = (undefined1 *)0x10a9f0;
        goto LAB_00101b40;
      }
      if (uVar26 == 0x304) {
        puVar10 = (undefined1 *)0x10aa00;
        goto LAB_00101b40;
      }
      if (uVar26 == 0xfeff) {
        puVar10 = (undefined1 *)0x10aa10;
        goto LAB_00101b40;
      }
      if (uVar26 == 0xfefd) {
        puVar10 = (undefined1 *)0x10aa20;
        goto LAB_00101b40;
      }
      pcVar14 = "UNKNOWN";
      puVar10 = (undefined1 *)0x10aa30;
      if (uVar26 == 0x100) goto LAB_00101b40;
    }
    BIO_printf(param_7," TLS Record\nHeader:\n  Version = %s (0x%x)\n",pcVar14,(ulong)uVar26);
    if ((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) {
      BIO_printf(param_7,"  epoch=%d, sequence_number=%04x%04x%04x\n",
                 (ulong)(ushort)(*(ushort *)(param_4 + 3) << 8 | *(ushort *)(param_4 + 3) >> 8),
                 (ulong)(ushort)(*(ushort *)(param_4 + 5) << 8 | *(ushort *)(param_4 + 5) >> 8),
                 (ulong)(ushort)(*(ushort *)(param_4 + 7) << 8 | *(ushort *)(param_4 + 7) >> 8),
                 (ulong)(ushort)(*(ushort *)(param_4 + 9) << 8 | *(ushort *)(param_4 + 9) >> 8));
    }
    bVar1 = *param_4;
    if (bVar1 == 0x14) {
      puVar10 = ssl_content_tbl;
LAB_00102fed:
      pcVar14 = *(char **)(puVar10 + 8);
    }
    else {
      if (bVar1 == 0x15) {
        puVar10 = (undefined1 *)0x10a990;
        goto LAB_00102fed;
      }
      if (bVar1 == 0x16) {
        puVar10 = (undefined1 *)0x10a9a0;
        goto LAB_00102fed;
      }
      pcVar14 = "UNKNOWN";
      puVar10 = (undefined1 *)0x10a9b0;
      if (bVar1 == 0x17) goto LAB_00102fed;
    }
    BIO_printf(param_7,"  Content Type = %s (%d)\n  Length = %d",pcVar14,(ulong)bVar1,
               (ulong)CONCAT11((param_4 + -2)[(long)param_5],(param_4 + -1)[(long)param_5]));
    goto LAB_00101630;
  }
  if (*(int *)&param_6->s2 == 0) {
    param_1 = (uint)(param_1 == 0);
  }
  local_68 = param_5;
  pXVar18 = local_60;
  if (param_5 < (X509 *)0x4) goto LAB_001017c5;
  bVar1 = *param_4;
  uVar27 = (uint)param_4[1] << 0x10 | (uint)param_4[2] << 8 | (uint)param_4[3];
  local_68 = param_5;
  BIO_indent(param_7,4,0x50);
  puVar11 = &ssl_handshake_tbl;
  do {
    if ((uint)bVar1 == *puVar11) {
      pcVar14 = *(char **)(puVar11 + 2);
      goto LAB_001019b5;
    }
    puVar11 = puVar11 + 4;
  } while (puVar11 != (uint *)&DAT_0010a970);
  pcVar14 = "UNKNOWN";
LAB_001019b5:
  BIO_printf(param_7,"%s, Length=%d\n",pcVar14,(ulong)uVar27);
  pXVar30 = (X509 *)(param_4 + 4);
  pXVar22 = (X509 *)((long)&param_5[-1].aux + 4);
  if ((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) {
    local_70 = pXVar30;
    local_68 = pXVar22;
    pXVar18 = local_60;
    if (pXVar22 < (X509 *)0x8) goto LAB_001017c5;
    BIO_indent(param_7,4,0x50);
    BIO_printf(param_7,"message_seq=%d, fragment_offset=%d, fragment_length=%d\n",
               (ulong)(ushort)(*(ushort *)(param_4 + 4) << 8 | *(ushort *)(param_4 + 4) >> 8),
               (ulong)((uint)param_4[6] << 0x10 | (uint)param_4[7] << 8 | (uint)param_4[8]),
               (ulong)((uint)param_4[0xb] | (uint)param_4[9] << 0x10 | (uint)param_4[10] << 8));
    pXVar30 = (X509 *)(param_4 + 0xc);
    pXVar22 = (X509 *)&param_5[-1].field_0xbc;
  }
  local_70 = pXVar30;
  local_68 = pXVar22;
  pXVar18 = local_60;
  if (pXVar22 < (X509 *)(long)(int)uVar27) goto LAB_001017c5;
  switch(bVar1) {
  default:
    BIO_indent(param_7,6,0x50);
    BIO_puts(param_7,"Unsupported, hex dump follows:\n");
    BIO_dump_indent(param_7,(char *)pXVar30,(int)pXVar22,8);
    goto LAB_00101630;
  case 1:
    local_48 = pXVar22;
    if ((X509 *)0x1 < pXVar22) {
      uVar26 = *(ushort *)&pXVar30->cert_info;
      BIO_indent(param_7,6,0x50);
      uVar26 = uVar26 << 8 | uVar26 >> 8;
      if (uVar26 == 0x300) {
        puVar10 = ssl_version_tbl;
LAB_00103366:
        pcVar14 = *(char **)(puVar10 + 8);
      }
      else {
        if (uVar26 == 0x301) {
          puVar10 = (undefined1 *)0x10a9d0;
          goto LAB_00103366;
        }
        if (uVar26 == 0x302) {
          puVar10 = (undefined1 *)0x10a9e0;
          goto LAB_00103366;
        }
        if (uVar26 == 0x303) {
          puVar10 = (undefined1 *)0x10a9f0;
          goto LAB_00103366;
        }
        if (uVar26 == 0x304) {
          puVar10 = (undefined1 *)0x10aa00;
          goto LAB_00103366;
        }
        if (uVar26 == 0xfeff) {
          puVar10 = (undefined1 *)0x10aa10;
          goto LAB_00103366;
        }
        if (uVar26 == 0xfefd) {
          puVar10 = (undefined1 *)0x10aa20;
          goto LAB_00103366;
        }
        pcVar14 = "UNKNOWN";
        puVar10 = (undefined1 *)0x10aa30;
        if (uVar26 == 0x100) goto LAB_00103366;
      }
      ppXVar21 = &local_48;
      ppXVar20 = &local_50;
      BIO_printf(param_7,"%s=0x%x (%s)\n","client_version",(ulong)uVar26,pcVar14);
      local_50 = (X509 *)((long)&pXVar30->cert_info + 2);
      local_48 = (X509 *)((long)&pXVar22[-1].aux + 6);
      iVar8 = ssl_print_random_constprop_0(param_7,ppXVar20,ppXVar21);
      pXVar22 = local_48;
      pXVar30 = local_50;
      pXVar18 = local_60;
      if ((iVar8 != 0) && (local_48 != (X509 *)0x0)) {
        uVar28 = (ulong)*(byte *)&local_50->cert_info;
        pXVar25 = (X509 *)(uVar28 + 1);
        if (pXVar25 <= local_48) {
          BIO_indent(param_7,6,0x50);
          BIO_printf(param_7,"%s (len=%d): ","session_id",uVar28);
          if (uVar28 != 0) {
            pXVar18 = pXVar30;
            do {
              ppXVar6 = &pXVar18->cert_info;
              pXVar18 = (X509 *)((long)&pXVar18->cert_info + 1);
              BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)ppXVar6 + 1));
            } while (pXVar18 != (X509 *)((long)&pXVar30->cert_info + uVar28));
          }
          BIO_puts(param_7,"\n");
          local_48 = (X509 *)((long)pXVar22 - (long)pXVar25);
          local_50 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
          if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) ||
              (iVar8 = ssl_print_hexbuf(param_7,6,"cookie",1,ppXVar20,ppXVar21), pXVar18 = local_60,
              iVar8 != 0)) && (pXVar18 = local_60, (X509 *)0x1 < local_48)) {
            pXVar22 = (X509 *)((long)&local_48[-1].aux + 6);
            uVar26 = *(ushort *)&local_50->cert_info;
            local_50 = (X509 *)((long)&local_50->cert_info + 2);
            local_48 = pXVar22;
            BIO_indent(param_7,6,0x50);
            uVar23 = uVar26 >> 8;
            uVar26 = uVar26 << 8 | uVar23;
            pXVar30 = (X509 *)(ulong)uVar26;
            BIO_printf(param_7,"cipher_suites (len=%d)\n",(ulong)uVar26);
            pXVar18 = local_60;
            if ((pXVar30 <= pXVar22) && ((uVar23 & 1) == 0)) {
              for (; pXVar18 = local_50, pXVar30 != (X509 *)0x0;
                  pXVar30 = (X509 *)((long)&pXVar30[-1].aux + 6)) {
                uVar26 = *(ushort *)&local_50->cert_info;
                BIO_indent(param_7,8,0x50);
                puVar11 = &ssl_ciphers_tbl;
                do {
                  if ((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) == *puVar11) {
                    pcVar14 = *(char **)(puVar11 + 2);
                    goto LAB_00102f6f;
                  }
                  puVar11 = puVar11 + 4;
                } while (puVar11 != &ssl_handshake_tbl);
                pcVar14 = "UNKNOWN";
LAB_00102f6f:
                BIO_printf(param_7,"{0x%02X, 0x%02X} %s\n",(ulong)*(byte *)&pXVar18->cert_info,
                           (ulong)*(byte *)((long)&pXVar18->cert_info + 1),pcVar14);
                local_50 = (X509 *)((long)&pXVar18->cert_info + 2);
                local_48 = (X509 *)((long)&local_48[-1].aux + 6);
              }
              pXVar18 = local_60;
              if (local_48 != (X509 *)0x0) {
                local_48 = (X509 *)((long)&local_48[-1].aux + 7);
                pXVar30 = (X509 *)(ulong)*(byte *)&local_50->cert_info;
                local_50 = (X509 *)((long)&local_50->cert_info + 1);
                if (pXVar30 <= local_48) {
                  BIO_indent(param_7,6,0x50);
                  BIO_printf(param_7,"compression_methods (len=%d)\n",pXVar30);
                  for (; pXVar30 != (X509 *)0x0; pXVar30 = (X509 *)((long)&pXVar30[-1].aux + 7)) {
                    BIO_indent(param_7,8,0x50);
                    if (*(byte *)&local_50->cert_info == 0) {
                      puVar10 = ssl_comp_tbl;
LAB_00103f71:
                      pcVar14 = *(char **)(puVar10 + 8);
                    }
                    else {
                      pcVar14 = "UNKNOWN";
                      puVar10 = (undefined1 *)0x109290;
                      if (*(byte *)&local_50->cert_info == 1) goto LAB_00103f71;
                    }
                    ppXVar6 = &local_50->cert_info;
                    BIO_printf(param_7,"%s (0x%02X)\n",pcVar14);
                    local_48 = (X509 *)((long)&local_48[-1].aux + 7);
                    local_50 = (X509 *)((long)ppXVar6 + 1);
                  }
                  uVar13 = 1;
                  uVar15 = 0;
                  goto LAB_00101bd2;
                }
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    local_48 = pXVar22;
    if ((X509 *)0x1 < pXVar22) {
      uVar26 = *(ushort *)&pXVar30->cert_info;
      BIO_indent(param_7,6,0x50);
      uVar26 = uVar26 << 8 | uVar26 >> 8;
      uVar27 = (uint)uVar26;
      if (uVar26 == 0x300) {
        puVar10 = ssl_version_tbl;
LAB_00103150:
        BIO_printf(param_7,"%s=0x%x (%s)\n","server_version",(ulong)uVar27,
                   *(undefined8 *)(puVar10 + 8));
        local_50 = (X509 *)((long)&pXVar30->cert_info + 2);
        local_48 = (X509 *)((long)&pXVar22[-1].aux + 6);
        iVar8 = ssl_print_random_constprop_0(param_7,&local_50,&local_48);
        pXVar18 = local_60;
        if (iVar8 != 0) {
          if (uVar27 != 0x304) goto LAB_00102ae5;
LAB_00102ba6:
          pXVar22 = local_48;
          pXVar30 = local_50;
          ppXVar21 = &local_48;
          ppXVar20 = &local_50;
          pXVar18 = local_60;
          if ((X509 *)0x1 < local_48) {
            uVar26 = *(ushort *)&local_50->cert_info;
            BIO_indent(param_7,6,0x50);
            puVar11 = &ssl_ciphers_tbl;
            do {
              if ((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) == *puVar11) {
                pcVar14 = *(char **)(puVar11 + 2);
                goto LAB_00102bfd;
              }
              puVar11 = puVar11 + 4;
            } while (puVar11 != &ssl_handshake_tbl);
            pcVar14 = "UNKNOWN";
LAB_00102bfd:
            BIO_printf(param_7,"cipher_suite {0x%02X, 0x%02X} %s\n",
                       (ulong)*(byte *)&pXVar30->cert_info,
                       (ulong)*(byte *)((long)&pXVar30->cert_info + 1),pcVar14);
            local_50 = (X509 *)((long)&pXVar30->cert_info + 2);
            local_48 = (X509 *)((long)&pXVar22[-1].aux + 6);
            if (uVar27 != 0x304) {
              pXVar18 = local_60;
              if (local_48 == (X509 *)0x0) break;
              BIO_indent(param_7,6,0x50);
              bVar1 = *(byte *)((long)&pXVar30->cert_info + 2);
              if (bVar1 == 0) {
                puVar10 = ssl_comp_tbl;
LAB_00103faa:
                pcVar14 = *(char **)(puVar10 + 8);
              }
              else {
                pcVar14 = "UNKNOWN";
                puVar10 = (undefined1 *)0x109290;
                if (bVar1 == 1) goto LAB_00103faa;
              }
              BIO_printf(param_7,"compression_method: %s (0x%02X)\n",pcVar14);
              local_48 = (X509 *)((long)&pXVar22[-1].aux + 5);
              local_50 = (X509 *)((long)&pXVar30->cert_info + 3);
            }
            uVar13 = 2;
            goto LAB_00101bcd;
          }
        }
      }
      else {
        if (uVar26 == 0x301) {
          puVar10 = (undefined1 *)0x10a9d0;
          goto LAB_00103150;
        }
        if (uVar26 == 0x302) {
          puVar10 = (undefined1 *)0x10a9e0;
          goto LAB_00103150;
        }
        if (uVar26 == 0x303) {
          puVar10 = (undefined1 *)0x10a9f0;
          goto LAB_00103150;
        }
        if (uVar26 == 0x304) {
          puVar10 = (undefined1 *)0x10aa00;
          goto LAB_00103150;
        }
        if (uVar26 == 0xfeff) {
          puVar10 = (undefined1 *)0x10aa10;
          goto LAB_00103150;
        }
        if (uVar27 == 0xfefd) {
          puVar10 = (undefined1 *)0x10aa20;
          goto LAB_00103150;
        }
        puVar10 = (undefined1 *)0x10aa30;
        if (uVar27 == 0x100) goto LAB_00103150;
        BIO_printf(param_7,"%s=0x%x (%s)\n","server_version",(ulong)uVar27,"UNKNOWN");
        local_50 = (X509 *)((long)&pXVar30->cert_info + 2);
        local_48 = (X509 *)((long)&pXVar22[-1].aux + 6);
        iVar8 = ssl_print_random_constprop_0(param_7,&local_50,&local_48);
        pXVar18 = local_60;
        if (iVar8 == 0) break;
LAB_00102ae5:
        pXVar22 = local_48;
        pXVar30 = local_50;
        pXVar18 = local_60;
        if (local_48 != (X509 *)0x0) {
          bVar1 = *(byte *)&local_50->cert_info;
          pXVar25 = (X509 *)((ulong)bVar1 + 1);
          if (pXVar25 <= local_48) {
            BIO_indent(param_7,6,0x50);
            BIO_printf(param_7,"%s (len=%d): ","session_id");
            uVar28 = 0;
            while (uVar28 < bVar1) {
              uVar28 = uVar28 + 1;
              BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)&pXVar30->cert_info + uVar28));
            }
            BIO_puts(param_7,"\n");
            local_50 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
            local_48 = (X509 *)((long)pXVar22 - (long)pXVar25);
            goto LAB_00102ba6;
          }
        }
      }
    }
    break;
  case 3:
    if ((X509 *)0x1 < pXVar22) {
      uVar26 = *(ushort *)&pXVar30->cert_info;
      BIO_indent(param_7,6,0x50);
      uVar26 = uVar26 << 8 | uVar26 >> 8;
      if (uVar26 == 0x300) {
        puVar10 = ssl_version_tbl;
LAB_001031d2:
        pcVar14 = *(char **)(puVar10 + 8);
      }
      else {
        if (uVar26 == 0x301) {
          puVar10 = (undefined1 *)0x10a9d0;
          goto LAB_001031d2;
        }
        if (uVar26 == 0x302) {
          puVar10 = (undefined1 *)0x10a9e0;
          goto LAB_001031d2;
        }
        if (uVar26 == 0x303) {
          puVar10 = (undefined1 *)0x10a9f0;
          goto LAB_001031d2;
        }
        if (uVar26 == 0x304) {
          puVar10 = (undefined1 *)0x10aa00;
          goto LAB_001031d2;
        }
        if (uVar26 == 0xfeff) {
          puVar10 = (undefined1 *)0x10aa10;
          goto LAB_001031d2;
        }
        if (uVar26 == 0xfefd) {
          puVar10 = (undefined1 *)0x10aa20;
          goto LAB_001031d2;
        }
        pcVar14 = "UNKNOWN";
        puVar10 = (undefined1 *)0x10aa30;
        if (uVar26 == 0x100) goto LAB_001031d2;
      }
      BIO_printf(param_7,"%s=0x%x (%s)\n","server_version",(ulong)uVar26,pcVar14);
      pXVar18 = local_60;
      if ((pXVar22 != (X509 *)0x2) &&
         (uVar28 = (ulong)*(byte *)((long)&pXVar30->cert_info + 2),
         (undefined1 *)(uVar28 + 1) <= (undefined1 *)((long)&pXVar22[-1].aux + 6U))) {
        BIO_indent(param_7,6,0x50);
        BIO_printf(param_7,"%s (len=%d): ","cookie",uVar28);
        if (uVar28 != 0) {
          ppXVar6 = &pXVar30->cert_info;
          do {
            ppXVar7 = &pXVar30->cert_info;
            pXVar30 = (X509 *)((long)&pXVar30->cert_info + 1);
            BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)ppXVar7 + 3));
          } while (pXVar30 != (X509 *)((long)ppXVar6 + uVar28));
        }
        goto LAB_00101709;
      }
    }
    break;
  case 4:
    local_50 = pXVar30;
    if (pXVar22 != (X509 *)0x0) {
      local_48 = pXVar22;
      if ((X509 *)0x3 < pXVar22) {
        uVar27 = *(uint *)&pXVar30->cert_info;
        pXVar25 = (X509 *)((long)&pXVar22[-1].aux + 4);
        local_50 = (X509 *)((long)&pXVar30->cert_info + 4);
        local_48 = pXVar25;
        BIO_indent(param_7,8,0x50);
        BIO_printf(param_7,"ticket_lifetime_hint=%u\n",
                   (ulong)(uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                          uVar27 << 0x18));
        if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
            (iVar8 = *(int *)&param_6->wbio->method, 0x303 < iVar8)) && (iVar8 != 0x10000)) {
          pXVar18 = local_60;
          if ((X509 *)0x3 < pXVar25) {
            uVar27 = *(uint *)((long)&pXVar30->cert_info + 4);
            local_48 = (X509 *)&pXVar22[-1].aux;
            local_50 = (X509 *)&pXVar30->sig_alg;
            BIO_indent(param_7,8,0x50);
            BIO_printf(param_7,"ticket_age_add=%u\n",
                       (ulong)(uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                              uVar27 << 0x18));
            iVar8 = ssl_print_hexbuf(param_7,8,"ticket_nonce",1,&local_50,&local_48);
            pXVar18 = local_60;
            if (iVar8 != 0) goto LAB_00102172;
          }
        }
        else {
LAB_00102172:
          pXVar22 = local_48;
          pXVar30 = local_50;
          pXVar18 = local_60;
          if ((X509 *)0x1 < local_48) {
            uVar26 = *(ushort *)&local_50->cert_info << 8 | *(ushort *)&local_50->cert_info >> 8;
            uVar28 = (ulong)uVar26;
            pXVar25 = (X509 *)(uVar28 + 2);
            if (pXVar25 <= local_48) {
              BIO_indent(param_7,8,0x50);
              BIO_printf(param_7,"%s (len=%d): ","ticket",(ulong)uVar26);
              if (uVar28 != 0) {
                pXVar18 = pXVar30;
                do {
                  ppXVar6 = &pXVar18->cert_info;
                  pXVar18 = (X509 *)((long)&pXVar18->cert_info + 1);
                  BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)ppXVar6 + 2));
                } while (pXVar18 != (X509 *)((long)&pXVar30->cert_info + uVar28));
              }
              pXVar18 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
              pXVar22 = (X509 *)((long)pXVar22 - (long)pXVar25);
              BIO_puts(param_7,"\n");
              local_50 = pXVar18;
              local_48 = pXVar22;
              if (((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) ||
                   (iVar8 = *(int *)&param_6->wbio->method, iVar8 == 0x10000)) || (iVar8 < 0x304))
                 || (iVar8 = ssl_print_extensions(param_7,8,0,4,&local_50,&local_48),
                    pXVar18 = local_60, pXVar22 = local_48, iVar8 != 0)) goto joined_r0x00102743;
            }
          }
        }
      }
      break;
    }
    local_48 = pXVar22;
    BIO_indent(param_7,8,0x50);
    BIO_puts(param_7,"No Ticket\n");
    goto LAB_00101630;
  case 5:
  case 0xe:
    if (pXVar22 != (X509 *)0x0) {
      BIO_indent(param_7,6,0x50);
      BIO_printf(param_7,"%s (len=%d): ","unexpected value",(ulong)pXVar22 & 0xffffffff);
      ppXVar6 = &pXVar30->cert_info;
      do {
        ppXVar7 = &pXVar30->cert_info;
        pXVar30 = (X509 *)((long)&pXVar30->cert_info + 1);
        BIO_printf(param_7,"%02X",(ulong)*(byte *)ppXVar7);
      } while (pXVar30 != (X509 *)((long)&pXVar22->cert_info + (long)ppXVar6));
      goto LAB_00101709;
    }
    goto LAB_00101630;
  case 8:
    ppXVar21 = &local_68;
    ppXVar20 = &local_70;
    uVar13 = 8;
LAB_00101bcd:
    uVar15 = 1;
LAB_00101bd2:
    iVar8 = ssl_print_extensions(param_7,6,uVar15,uVar13,ppXVar20,ppXVar21);
    goto joined_r0x00102767;
  case 0xb:
    local_60 = pXVar30;
    if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
        (iVar8 = *(int *)&param_6->wbio->method, iVar8 != 0x10000)) && (0x303 < iVar8)) {
      pXVar18 = pXVar30;
      if (pXVar22 != (X509 *)0x0) {
        uVar28 = (ulong)*(byte *)&pXVar30->cert_info;
        pXVar25 = (X509 *)(uVar28 + 1);
        if (pXVar25 <= pXVar22) {
          uVar29 = 0;
          BIO_indent(param_7,6,0x50);
          BIO_printf(param_7,"%s (len=%d): ","context",uVar28);
          while (uVar29 < uVar28) {
            uVar29 = uVar29 + 1;
            BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)&pXVar30->cert_info + uVar29));
          }
          BIO_puts(param_7,"\n");
          local_60 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
          pXVar22 = (X509 *)((long)pXVar22 - (long)pXVar25);
          goto LAB_00101e62;
        }
      }
    }
    else {
LAB_00101e62:
      pXVar18 = local_60;
      if ((X509 *)0x2 < pXVar22) {
        uVar27 = (uint)*(byte *)&local_60->cert_info << 0x10 |
                 (uint)*(byte *)((long)&local_60->cert_info + 1) << 8 |
                 (uint)*(byte *)((long)&local_60->cert_info + 2);
        pXVar30 = (X509 *)(long)(int)uVar27;
        local_58 = pXVar30;
        if ((X509 *)((long)&pXVar30->cert_info + 3) == pXVar22) {
          pXVar22 = (X509 *)((long)&local_60->cert_info + 3);
          if (param_1 == 0) {
            cVar2 = (char)param_6[4].read_ahead;
          }
          else {
            cVar2 = *(char *)((long)&param_6[4].read_ahead + 2);
          }
          if (cVar2 != '\x02') {
            local_60 = pXVar22;
            BIO_indent(param_7,6,0x50);
            BIO_printf(param_7,"certificate_list, length=%d\n",(ulong)uVar27);
            if (uVar27 != 0) {
              do {
                pXVar18 = local_60;
                pSVar5 = param_6->method;
                if (pXVar30 < (X509 *)0x3) goto LAB_001017c5;
                uVar27 = (uint)*(byte *)&local_60->cert_info << 0x10 |
                         (uint)*(byte *)((long)&local_60->cert_info + 1) << 8 |
                         (uint)*(byte *)((long)&local_60->cert_info + 2);
                lVar16 = (long)(int)uVar27;
                if (pXVar30 < (X509 *)(lVar16 + 3U)) goto LAB_001017c5;
                local_48 = (X509 *)((long)&local_60->cert_info + 3);
                BIO_indent(param_7,8,0x50);
                BIO_printf(param_7,"ASN.1Cert, length=%d",uVar27);
                local_50 = (X509 *)X509_new_ex(*(undefined8 *)pSVar5,pSVar5[4].ssl_version);
                if (local_50 == (X509 *)0x0) {
LAB_00102058:
                  BIO_puts(param_7,"<UNPARSEABLE CERTIFICATE>\n");
                }
                else {
                  pXVar22 = d2i_X509(&local_50,(uchar **)&local_48,lVar16);
                  if (pXVar22 == (X509 *)0x0) {
                    X509_free(local_50);
                    local_50 = (X509 *)0x0;
                    goto LAB_00102058;
                  }
                  if (local_50 == (X509 *)0x0) goto LAB_00102058;
                  BIO_puts(param_7,"\n------details-----\n");
                  X509_print_ex(param_7,local_50,0x82031f,0);
                  PEM_write_bio_X509(param_7,local_50);
                  BIO_puts(param_7,"------------------\n");
                  X509_free(local_50);
                }
                pXVar18 = (X509 *)((long)&pXVar18->cert_info +
                                  (long)&((X509 *)(lVar16 + 3U))->cert_info);
                if (pXVar18 != local_48) {
                  BIO_puts(param_7,"<TRAILING GARBAGE AFTER CERTIFICATE>\n");
                }
                local_58 = (X509 *)((long)pXVar30 + (-3 - lVar16));
                local_60 = pXVar18;
                if (((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
                     (iVar8 = *(int *)&param_6->wbio->method, 0x303 < iVar8)) && (iVar8 != 0x10000))
                   && (iVar8 = ssl_print_extensions(param_7,8,param_1,0xb,&local_60,&local_58),
                      pXVar18 = local_60, iVar8 == 0)) goto LAB_001017c5;
                pXVar30 = local_58;
              } while (local_58 != (X509 *)0x0);
            }
            goto LAB_00101630;
          }
          pXVar18 = pXVar22;
          local_48 = pXVar22;
          if (2 < uVar27) {
            uVar27 = (uint)*(byte *)((long)&local_60->cert_info + 3) << 0x10 |
                     (uint)*(byte *)((long)&local_60->cert_info + 4) << 8 |
                     (uint)*(byte *)((long)&local_60->cert_info + 5);
            lVar16 = (long)(int)uVar27;
            if ((X509 *)(lVar16 + 3U) <= pXVar30) {
              local_48 = (X509 *)((long)&local_60->cert_info + 6);
              local_60 = pXVar22;
              BIO_indent(param_7,6,0x50);
              BIO_printf(param_7,"raw_public_key, length=%d\n",uVar27);
              pkey = (EVP_PKEY *)
                     d2i_PUBKEY_ex(0,&local_48,lVar16,*(undefined8 *)param_6->method,
                                   param_6->method[4].ssl_version);
              pXVar18 = local_60;
              if (pkey != (EVP_PKEY *)0x0) {
                EVP_PKEY_print_public(param_7,pkey,8,(ASN1_PCTX *)0x0);
                pXVar18 = (X509 *)((long)&((X509 *)(lVar16 + 3U))->cert_info +
                                  (long)&pXVar22->cert_info);
                EVP_PKEY_free(pkey);
                local_58 = (X509 *)((long)pXVar30 + (-3 - lVar16));
                local_60 = pXVar18;
                if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) ||
                    (iVar8 = *(int *)&param_6->wbio->method, iVar8 < 0x304)) ||
                   ((iVar8 == 0x10000 ||
                    (iVar8 = ssl_print_extensions(param_7,8,param_1,0xb,&local_60,&local_58),
                    pXVar18 = local_60, iVar8 != 0)))) goto LAB_00101630;
              }
            }
          }
        }
      }
    }
    break;
  case 0xc:
    local_58 = pXVar30;
    local_50 = pXVar22;
    uVar27 = ssl_get_keyex_isra_0(&local_48,param_6[1].init_buf);
    BIO_indent(param_7,6,0x50);
    BIO_printf(param_7,"KeyExchangeAlgorithm=%s\n",local_48);
    local_98._0_4_ = uVar27 & 0x1c8;
    pXVar18 = local_60;
    if ((uVar27 & 0x1c8) == 0) {
      if (uVar27 == 4) {
LAB_001032dc:
        pXVar30 = local_50;
        pXVar18 = local_60;
        if (local_50 != (X509 *)0x0) {
          BIO_indent(param_7,8,0x50);
          bVar1 = *(byte *)&local_58->cert_info;
          if (bVar1 == 1) {
            BIO_puts(param_7,"explicit_prime\n");
          }
          else {
            if (bVar1 != 2) {
              if (bVar1 == 3) {
                pXVar18 = local_60;
                if ((X509 *)0x2 < pXVar30) {
                  uVar26 = *(ushort *)((long)&local_58->cert_info + 1);
                  puVar11 = &ssl_groups_tbl;
                  do {
                    if ((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) == *puVar11) {
                      pcVar14 = *(char **)(puVar11 + 2);
                      goto LAB_001040d8;
                    }
                    puVar11 = puVar11 + 4;
                  } while (puVar11 != (uint *)&DAT_00109030);
                  pcVar14 = "UNKNOWN";
LAB_001040d8:
                  ppXVar6 = &local_58->cert_info;
                  BIO_printf(param_7,"named_curve: %s (%d)\n",pcVar14);
                  uVar13 = 1;
                  pcVar14 = "point";
                  local_58 = (X509 *)((long)ppXVar6 + 3);
                  local_50 = (X509 *)((long)&pXVar30[-1].aux + 5);
LAB_001036fa:
                  iVar8 = ssl_print_hexbuf(param_7,8,pcVar14,uVar13,&local_58,&local_50);
                  pXVar18 = local_60;
                  if (iVar8 != 0) {
                    pXVar22 = local_50;
                    if ((uint)local_98 != 0) goto joined_r0x00102743;
                    goto LAB_00101e10;
                  }
                }
              }
              else {
                BIO_printf(param_7,"UNKNOWN CURVE PARAMETER TYPE %d\n",(ulong)bVar1);
                pXVar18 = local_60;
              }
              break;
            }
            BIO_puts(param_7,"explicit_char2\n");
          }
          pXVar18 = local_60;
          if ((uint)local_98 == 0) goto LAB_00101e10;
        }
      }
      else if ((int)uVar27 < 5) {
        if (uVar27 == 1) {
          if ((X509 *)0x1 < pXVar22) {
            uVar26 = *(ushort *)&pXVar30->cert_info << 8 | *(ushort *)&pXVar30->cert_info >> 8;
            uVar28 = (ulong)uVar26;
            pXVar25 = (X509 *)(uVar28 + 2);
            if (pXVar25 <= pXVar22) {
              BIO_indent(param_7,8,0x50);
              BIO_printf(param_7,"%s (len=%d): ","rsa_modulus",(ulong)uVar26);
              if (uVar28 != 0) {
                pXVar18 = pXVar30;
                do {
                  ppXVar6 = &pXVar18->cert_info;
                  pXVar18 = (X509 *)((long)&pXVar18->cert_info + 1);
                  BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)ppXVar6 + 2));
                } while (pXVar18 != (X509 *)((long)&pXVar30->cert_info + uVar28));
              }
              BIO_puts(param_7,"\n");
              pXVar30 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
              pXVar22 = (X509 *)((long)pXVar22 - (long)pXVar25);
              pXVar18 = local_60;
              local_58 = pXVar30;
              local_50 = pXVar22;
              if ((X509 *)0x1 < pXVar22) {
                uVar26 = *(ushort *)&pXVar30->cert_info << 8 | *(ushort *)&pXVar30->cert_info >> 8;
                pXVar25 = (X509 *)((ulong)uVar26 + 2);
                if (pXVar25 <= pXVar22) {
                  BIO_indent(param_7,8,0x50);
                  BIO_printf(param_7,"%s (len=%d): ","rsa_exponent",(ulong)uVar26);
                  for (uVar28 = 0; uVar28 < uVar26; uVar28 = uVar28 + 1) {
                    BIO_printf(param_7,"%02X",
                               (ulong)*(byte *)((long)&pXVar30->cert_info + uVar28 + 2));
                  }
                  BIO_puts(param_7,"\n");
                  local_58 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
                  local_50 = (X509 *)((long)pXVar22 - (long)pXVar25);
                  goto LAB_00101e10;
                }
              }
            }
          }
        }
        else {
          if (uVar27 != 2) goto LAB_00101e10;
LAB_0010356d:
          pXVar22 = local_50;
          pXVar30 = local_58;
          pXVar18 = local_60;
          if ((X509 *)0x1 < local_50) {
            uVar26 = *(ushort *)&local_58->cert_info << 8 | *(ushort *)&local_58->cert_info >> 8;
            uVar28 = (ulong)uVar26;
            pXVar25 = (X509 *)(uVar28 + 2);
            if (pXVar25 <= local_50) {
              BIO_indent(param_7,8,0x50);
              BIO_printf(param_7,"%s (len=%d): ",&_LC82,(ulong)uVar26);
              if (uVar28 != 0) {
                pXVar18 = pXVar30;
                do {
                  ppXVar6 = &pXVar18->cert_info;
                  pXVar18 = (X509 *)((long)&pXVar18->cert_info + 1);
                  BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)ppXVar6 + 2));
                } while (pXVar18 != (X509 *)((long)&pXVar30->cert_info + uVar28));
              }
              BIO_puts(param_7,"\n");
              pXVar30 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
              pXVar22 = (X509 *)((long)pXVar22 - (long)pXVar25);
              pXVar18 = local_60;
              local_58 = pXVar30;
              local_50 = pXVar22;
              if ((X509 *)0x1 < pXVar22) {
                uVar26 = *(ushort *)&pXVar30->cert_info << 8 | *(ushort *)&pXVar30->cert_info >> 8;
                pXVar25 = (X509 *)((ulong)uVar26 + 2);
                if (pXVar25 <= pXVar22) {
                  BIO_indent(param_7,8,0x50);
                  BIO_printf(param_7,"%s (len=%d): ",&_LC83,(ulong)uVar26);
                  for (uVar28 = 0; uVar28 < uVar26; uVar28 = uVar28 + 1) {
                    BIO_printf(param_7,"%02X",
                               (ulong)*(byte *)((long)&pXVar30->cert_info + uVar28 + 2));
                  }
                  BIO_puts(param_7,"\n");
                  uVar13 = 2;
                  pcVar14 = "dh_Ys";
                  local_58 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
                  local_50 = (X509 *)((long)pXVar22 - (long)pXVar25);
                  goto LAB_001036fa;
                }
              }
            }
          }
        }
      }
      else {
        if (uVar27 == 0x80) goto LAB_001032dc;
        if (uVar27 == 0x100) goto LAB_0010356d;
LAB_00101e10:
        ssl_print_signature_constprop_0(param_7,param_6,&local_58,&local_50);
        pXVar22 = local_50;
joined_r0x00102743:
        pXVar18 = local_60;
        if (pXVar22 == (X509 *)0x0) goto LAB_00101630;
      }
    }
    else if ((X509 *)0x1 < pXVar22) {
      uVar26 = *(ushort *)&pXVar30->cert_info << 8 | *(ushort *)&pXVar30->cert_info >> 8;
      uVar28 = (ulong)uVar26;
      pXVar25 = (X509 *)(uVar28 + 2);
      if (pXVar25 <= pXVar22) {
        BIO_indent(param_7,8,0x50);
        BIO_printf(param_7,"%s (len=%d): ","psk_identity_hint",(ulong)uVar26);
        if (uVar28 != 0) {
          pXVar18 = pXVar30;
          do {
            ppXVar6 = &pXVar18->cert_info;
            pXVar18 = (X509 *)((long)&pXVar18->cert_info + 1);
            BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)ppXVar6 + 2));
          } while (pXVar18 != (X509 *)((long)&pXVar30->cert_info + uVar28));
        }
        BIO_puts(param_7,"\n");
        local_58 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
        local_50 = (X509 *)((long)pXVar22 - (long)pXVar25);
        if (uVar27 == 0x100) goto LAB_0010356d;
        pXVar22 = local_50;
        if ((0x100 < (int)uVar27) || (uVar27 != 0x80)) goto joined_r0x00102743;
        goto LAB_001032dc;
      }
    }
    break;
  case 0xd:
    if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
        (iVar8 = *(int *)&param_6->wbio->method, 0x303 < iVar8)) && (iVar8 != 0x10000)) {
      local_58 = pXVar30;
      local_50 = pXVar22;
      if (pXVar22 != (X509 *)0x0) {
        uVar28 = (ulong)*(byte *)&pXVar30->cert_info;
        pXVar25 = (X509 *)(uVar28 + 1);
        if (pXVar25 <= pXVar22) {
          uVar29 = 0;
          BIO_indent(param_7,6,0x50);
          BIO_printf(param_7,"%s (len=%d): ","request_context",uVar28);
          while (uVar29 < uVar28) {
            uVar29 = uVar29 + 1;
            BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)&pXVar30->cert_info + uVar29));
          }
          BIO_puts(param_7,"\n");
          ppXVar20 = &local_58;
          uVar13 = 0xd;
          local_58 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
          local_50 = (X509 *)((long)pXVar22 - (long)pXVar25);
          ppXVar21 = &local_50;
          goto LAB_00101bcd;
        }
      }
    }
    else {
      local_58 = pXVar30;
      local_50 = pXVar22;
      if ((pXVar22 != (X509 *)0x0) &&
         (uVar28 = (ulong)*(byte *)&pXVar30->cert_info, (X509 *)(uVar28 + 1) <= pXVar22)) {
        pbVar24 = (byte *)((long)&pXVar30->cert_info + 1);
        BIO_indent(param_7,6,0x50);
        BIO_printf(param_7,"certificate_types (len=%d)\n",uVar28);
        pbVar17 = pbVar24;
        if (uVar28 != 0) {
          do {
            bVar1 = *pbVar17;
            BIO_indent(param_7,8,0x50);
            if (bVar1 == 1) {
              puVar10 = ssl_ctype_tbl;
LAB_001030f3:
              pcVar14 = *(char **)(puVar10 + 8);
            }
            else {
              if (bVar1 == 2) {
                puVar10 = (undefined1 *)0x108a30;
                goto LAB_001030f3;
              }
              if (bVar1 == 3) {
                puVar10 = (undefined1 *)0x108a40;
                goto LAB_001030f3;
              }
              if (bVar1 == 4) {
                puVar10 = (undefined1 *)0x108a50;
                goto LAB_001030f3;
              }
              if (bVar1 == 5) {
                puVar10 = (undefined1 *)0x108a60;
                goto LAB_001030f3;
              }
              if (bVar1 == 6) {
                puVar10 = (undefined1 *)0x108a70;
                goto LAB_001030f3;
              }
              if (bVar1 == 0x14) {
                puVar10 = (undefined1 *)0x108a80;
                goto LAB_001030f3;
              }
              if (bVar1 == 0x40) {
                puVar10 = (undefined1 *)0x108a90;
                goto LAB_001030f3;
              }
              if (bVar1 == 0x41) {
                puVar10 = (undefined1 *)0x108aa0;
                goto LAB_001030f3;
              }
              if (bVar1 == 0x42) {
                puVar10 = (undefined1 *)0x108ab0;
                goto LAB_001030f3;
              }
              if (bVar1 == 0x43) {
                puVar10 = (undefined1 *)0x108ac0;
                goto LAB_001030f3;
              }
              pcVar14 = "UNKNOWN";
              puVar10 = (undefined1 *)0x108ad0;
              if (bVar1 == 0x44) goto LAB_001030f3;
            }
            BIO_printf(param_7,"%s (%d)\n",pcVar14,(ulong)bVar1);
            pbVar17 = pbVar17 + 1;
          } while (pbVar17 != pbVar24 + uVar28);
        }
        local_58 = (X509 *)(pbVar24 + uVar28);
        local_50 = (X509 *)((long)pXVar22 + (-1 - uVar28));
        if ((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 2) == 0) {
LAB_00103c7a:
          pXVar25 = local_50;
          pXVar30 = local_58;
          pXVar18 = local_60;
          if ((X509 *)0x1 < local_50) {
            uVar26 = *(ushort *)&local_58->cert_info;
            BIO_indent(param_7,6,0x50);
            uVar26 = uVar26 << 8 | uVar26 >> 8;
            uVar28 = (ulong)uVar26;
            pXVar18 = local_60;
            if ((X509 *)(uVar28 + 2) <= pXVar25) {
              local_58 = (X509 *)((long)&pXVar30->cert_info + 2);
              pXVar25 = (X509 *)((long)pXVar25 + (-2 - uVar28));
              local_50 = pXVar25;
              BIO_printf(param_7,"certificate_authorities (len=%d)\n",(ulong)uVar26);
              for (; pXVar30 = local_58, pXVar18 = local_60, uVar28 != 0;
                  uVar28 = (uVar28 - uVar29) - 2) {
                if (uVar28 == 1) goto LAB_001017c5;
                uVar26 = *(ushort *)&local_58->cert_info << 8 | *(ushort *)&local_58->cert_info >> 8
                ;
                uVar29 = (ulong)uVar26;
                if (uVar28 < uVar29 + 2) goto LAB_001017c5;
                pXVar18 = (X509 *)((long)&local_58->cert_info + 2);
                local_58 = pXVar18;
                BIO_indent(param_7,8,0x50);
                BIO_printf(param_7,"DistinguishedName (len=%d): ",(ulong)uVar26);
                local_48 = pXVar18;
                nm = d2i_X509_NAME((X509_NAME **)0x0,(uchar **)&local_48,uVar29);
                if (nm == (X509_NAME *)0x0) {
                  BIO_puts(param_7,"<UNPARSEABLE DN>\n");
                }
                else {
                  X509_NAME_print_ex(param_7,nm,0,0x82031f);
                  BIO_puts(param_7,"\n");
                  X509_NAME_free(nm);
                }
                local_58 = (X509 *)((long)&pXVar18->cert_info + uVar29);
              }
              pXVar22 = local_50;
              if ((((*(byte *)(*(long *)&param_6->wbio[1].ex_data.dummy + 0x50) & 8) != 0) ||
                  (iVar8 = *(int *)&param_6->wbio->method, iVar8 < 0x304)) || (iVar8 == 0x10000))
              goto joined_r0x00102743;
              if ((X509 *)0x1 < pXVar25) {
                uVar26 = *(ushort *)&local_58->cert_info << 8 | *(ushort *)&local_58->cert_info >> 8
                ;
                pXVar22 = (X509 *)((ulong)uVar26 + 2);
                if (pXVar22 <= pXVar25) {
                  BIO_indent(param_7,6,0x50);
                  BIO_printf(param_7,"%s (len=%d): ","request_extensions",(ulong)uVar26);
                  for (uVar28 = 0; uVar28 < uVar26; uVar28 = uVar28 + 1) {
                    BIO_printf(param_7,"%02X",
                               (ulong)*(byte *)((long)&pXVar30->cert_info + uVar28 + 2));
                  }
                  BIO_puts(param_7,"\n");
                  local_50 = (X509 *)((long)pXVar25 - (long)pXVar22);
                  pXVar22 = local_50;
                  goto joined_r0x00102743;
                }
              }
            }
          }
        }
        else {
          pXVar18 = local_60;
          if ((X509 *)0x1 < local_50) {
            uVar26 = *(ushort *)&local_58->cert_info >> 8;
            uVar23 = *(ushort *)&local_58->cert_info << 8 | uVar26;
            uVar28 = (ulong)uVar23;
            if (((X509 *)(uVar28 + 2) <= local_50) && ((uVar26 & 1) == 0)) {
              local_58 = (X509 *)((long)&local_58->cert_info + 2);
              local_50 = (X509 *)((long)local_50 + (-2 - uVar28));
              BIO_indent(param_7,6,0x50);
              BIO_printf(param_7,"signature_algorithms (len=%d)\n",(ulong)uVar23);
              for (; uVar28 != 0; uVar28 = uVar28 - 2) {
                BIO_indent(param_7,8,0x50);
                puVar11 = &ssl_sigalg_tbl;
                do {
                  if ((uint)(ushort)(*(ushort *)&local_58->cert_info << 8 |
                                    *(ushort *)&local_58->cert_info >> 8) == *puVar11) {
                    pcVar14 = *(char **)(puVar11 + 2);
                    goto LAB_001029ba;
                  }
                  puVar11 = puVar11 + 4;
                } while (puVar11 != &ssl_groups_tbl);
                pcVar14 = "UNKNOWN";
LAB_001029ba:
                ppXVar6 = &local_58->cert_info;
                BIO_printf(param_7,"%s (0x%04x)\n",pcVar14);
                local_58 = (X509 *)((long)ppXVar6 + 2);
              }
              goto LAB_00103c7a;
            }
          }
        }
      }
    }
    break;
  case 0xf:
    iVar8 = ssl_print_signature_constprop_0(param_7,param_6,&local_70,&local_68);
joined_r0x00102767:
    pXVar18 = local_60;
    if (iVar8 == 0) break;
    goto LAB_00101630;
  case 0x10:
    uVar27 = ssl_get_keyex_isra_0(&local_48,param_6[1].init_buf);
    BIO_indent(param_7,6,0x50);
    BIO_printf(param_7,"KeyExchangeAlgorithm=%s\n",local_48);
    if ((uVar27 & 0x1c8) == 0) {
      if (uVar27 == 0x40) {
LAB_001039a2:
        iVar8 = SSL_version(param_6);
        if ((iVar8 >> 8 == 3) && (iVar8 = SSL_version(param_6), iVar8 == 0x300)) {
          BIO_indent(param_7,8,0x50);
          BIO_printf(param_7,"%s (len=%d): ","EncryptedPreMasterSecret",(ulong)pXVar22 & 0xffffffff)
          ;
          ppXVar6 = &pXVar30->cert_info;
          for (; pXVar30 != (X509 *)((long)&pXVar22->cert_info + (long)ppXVar6);
              pXVar30 = (X509 *)((long)&pXVar30->cert_info + 1)) {
            BIO_printf(param_7,"%02X",(ulong)*(byte *)&pXVar30->cert_info);
          }
          BIO_puts(param_7,"\n");
          goto joined_r0x00102743;
        }
        pXVar18 = local_60;
        if ((X509 *)0x1 < pXVar22) {
          uVar26 = *(ushort *)&pXVar30->cert_info << 8 | *(ushort *)&pXVar30->cert_info >> 8;
          local_98 = (X509 *)((ulong)uVar26 + 2);
          if (local_98 <= pXVar22) {
            BIO_indent(param_7,8,0x50);
            BIO_printf(param_7,"%s (len=%d): ","EncryptedPreMasterSecret",(ulong)uVar26);
            for (uVar28 = 0; uVar28 < uVar26; uVar28 = uVar28 + 1) {
              BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)&pXVar30->cert_info + uVar28 + 2));
            }
LAB_00102720:
            BIO_puts(param_7,"\n");
            pXVar22 = (X509 *)((long)pXVar22 - (long)local_98);
            goto joined_r0x00102743;
          }
        }
      }
      else {
        if ((int)uVar27 < 0x41) {
          if (uVar27 != 4) {
LAB_00102673:
            if ((int)uVar27 < 5) {
              if (uVar27 == 1) goto LAB_001039a2;
              if (uVar27 == 2) goto LAB_00102691;
            }
            else if (uVar27 == 0x10) {
              BIO_indent(param_7,8,0x50);
              BIO_printf(param_7,"%s (len=%d): ","GostKeyTransportBlob",(ulong)pXVar22 & 0xffffffff)
              ;
              if (pXVar22 != (X509 *)0x0) {
                ppXVar6 = &pXVar30->cert_info;
                do {
                  ppXVar7 = &pXVar30->cert_info;
                  pXVar30 = (X509 *)((long)&pXVar30->cert_info + 1);
                  BIO_printf(param_7,"%02X",(ulong)*(byte *)ppXVar7);
                } while (pXVar30 != (X509 *)((long)&pXVar22->cert_info + (long)ppXVar6));
              }
              goto LAB_00101709;
            }
            goto joined_r0x00102743;
          }
        }
        else {
LAB_00103461:
          if (uVar27 == 0x100) {
LAB_00102691:
            pXVar18 = local_60;
            if ((X509 *)0x1 < pXVar22) {
              uVar26 = *(ushort *)&pXVar30->cert_info << 8 | *(ushort *)&pXVar30->cert_info >> 8;
              local_98 = (X509 *)((ulong)uVar26 + 2);
              if (local_98 <= pXVar22) {
                BIO_indent(param_7,8,0x50);
                BIO_printf(param_7,"%s (len=%d): ","dh_Yc",(ulong)uVar26);
                for (uVar28 = 0; uVar28 < uVar26; uVar28 = uVar28 + 1) {
                  BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)&pXVar30->cert_info + uVar28 + 2)
                            );
                }
                goto LAB_00102720;
              }
            }
            break;
          }
          if (uVar27 == 0x200) {
            BIO_indent(param_7,8,0x50);
            BIO_printf(param_7,"%s (len=%d): ","GOST-wrapped PreMasterSecret",
                       (ulong)pXVar22 & 0xffffffff);
            if (pXVar22 != (X509 *)0x0) {
              ppXVar6 = &pXVar30->cert_info;
              do {
                ppXVar7 = &pXVar30->cert_info;
                pXVar30 = (X509 *)((long)&pXVar30->cert_info + 1);
                BIO_printf(param_7,"%02X",(ulong)*(byte *)ppXVar7);
              } while (pXVar30 != (X509 *)((long)&pXVar22->cert_info + (long)ppXVar6));
            }
            goto LAB_00101709;
          }
          if (uVar27 != 0x80) goto joined_r0x00102743;
        }
        pXVar18 = local_60;
        if (pXVar22 != (X509 *)0x0) {
          uVar28 = (ulong)*(byte *)&pXVar30->cert_info;
          if ((X509 *)(uVar28 + 1) <= pXVar22) {
            uVar29 = 0;
            BIO_indent(param_7,8,0x50);
            BIO_printf(param_7,"%s (len=%d): ","ecdh_Yc",uVar28);
            while (uVar29 < uVar28) {
              uVar29 = uVar29 + 1;
              BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)&pXVar30->cert_info + uVar29));
            }
            BIO_puts(param_7,"\n");
            pXVar22 = (X509 *)((long)pXVar22 - (long)(uVar28 + 1));
            goto joined_r0x00102743;
          }
        }
      }
    }
    else {
      pXVar18 = local_60;
      if ((X509 *)0x1 < pXVar22) {
        uVar26 = *(ushort *)&pXVar30->cert_info << 8 | *(ushort *)&pXVar30->cert_info >> 8;
        uVar28 = (ulong)uVar26;
        pXVar25 = (X509 *)(uVar28 + 2);
        if (pXVar25 <= pXVar22) {
          BIO_indent(param_7,8,0x50);
          BIO_printf(param_7,"%s (len=%d): ","psk_identity",(ulong)uVar26);
          if (uVar28 != 0) {
            pXVar18 = pXVar30;
            do {
              ppXVar6 = &pXVar18->cert_info;
              pXVar18 = (X509 *)((long)&pXVar18->cert_info + 1);
              BIO_printf(param_7,"%02X",(ulong)*(byte *)((long)ppXVar6 + 2));
            } while (pXVar18 != (X509 *)((long)&pXVar30->cert_info + uVar28));
          }
          BIO_puts(param_7,"\n");
          pXVar30 = (X509 *)((long)&pXVar25->cert_info + (long)&pXVar30->cert_info);
          pXVar22 = (X509 *)((long)pXVar22 - (long)pXVar25);
          if (uVar27 != 0x40) {
            if ((int)uVar27 < 0x41) goto LAB_00102673;
            goto LAB_00103461;
          }
          goto LAB_001039a2;
        }
      }
    }
    break;
  case 0x14:
    BIO_indent(param_7,6,0x50);
    BIO_printf(param_7,"%s (len=%d): ","verify_data",(ulong)pXVar22 & 0xffffffff);
    if (pXVar22 != (X509 *)0x0) {
      ppXVar6 = &pXVar30->cert_info;
      do {
        ppXVar7 = &pXVar30->cert_info;
        pXVar30 = (X509 *)((long)&pXVar30->cert_info + 1);
        BIO_printf(param_7,"%02X",(ulong)*(byte *)ppXVar7);
      } while (pXVar30 != (X509 *)((long)&pXVar22->cert_info + (long)ppXVar6));
    }
LAB_00101709:
    BIO_puts(param_7,"\n");
    goto LAB_00101630;
  case 0x18:
    if (pXVar22 != (X509 *)0x1) {
      BIO_indent(param_7,6,0x50);
      BIO_printf(param_7,"%s (len=%d): ","unexpected value",(ulong)pXVar22 & 0xffffffff);
      ppXVar6 = &pXVar30->cert_info;
      if (pXVar22 != (X509 *)0x0) {
        do {
          ppXVar7 = &pXVar30->cert_info;
          pXVar30 = (X509 *)((long)&pXVar30->cert_info + 1);
          BIO_printf(param_7,"%02X",(ulong)*(byte *)ppXVar7);
        } while (pXVar30 != (X509 *)((long)&pXVar22->cert_info + (long)ppXVar6));
      }
      BIO_puts(param_7,"\n");
      pXVar18 = local_60;
      break;
    }
    bVar1 = *(byte *)&pXVar30->cert_info;
    BIO_indent(param_7,6,0x50);
    puVar10 = ssl_key_update_tbl;
    if (bVar1 == 0) {
LAB_00103725:
      pcVar14 = *(char **)(puVar10 + 8);
    }
    else {
      if (bVar1 == 1) {
        puVar10 = (undefined1 *)0x108a10;
        goto LAB_00103725;
      }
      pcVar14 = "UNKNOWN";
    }
    BIO_printf(param_7,"%s (%d)\n",pcVar14,(ulong)(uint)bVar1);
    goto LAB_00101630;
  case 0x19:
    if ((X509 *)0x7 < pXVar22) {
      bVar1 = *(byte *)((long)&pXVar30->cert_info + 2);
      bVar4 = *(byte *)((long)&pXVar30->cert_info + 3);
      bVar3 = *(byte *)((long)&pXVar30->cert_info + 4);
      uVar27 = (uint)*(byte *)((long)&pXVar30->cert_info + 5) << 0x10 |
               (uint)*(byte *)((long)&pXVar30->cert_info + 6) << 8 |
               (uint)*(byte *)((long)&pXVar30->cert_info + 7);
      if ((X509 *)(long)(int)(uVar27 + 8) == pXVar22) {
        uVar26 = *(ushort *)&pXVar30->cert_info << 8 | *(ushort *)&pXVar30->cert_info >> 8;
        BIO_indent(param_7,6,0x50);
        if (uVar26 == 0) {
          puVar10 = ssl_comp_cert_tbl;
LAB_00103dd8:
          pcVar14 = *(char **)(puVar10 + 8);
        }
        else {
          if (uVar26 == 1) {
            puVar10 = (undefined1 *)0x1089d0;
            goto LAB_00103dd8;
          }
          if (uVar26 == 2) {
            puVar10 = (undefined1 *)0x1089e0;
            goto LAB_00103dd8;
          }
          pcVar14 = "UNKNOWN";
          puVar10 = (undefined1 *)0x1089f0;
          if (uVar26 == 3) goto LAB_00103dd8;
        }
        BIO_printf(param_7,"Compression type=%s (0x%04x)\n",pcVar14);
        uVar19 = (uint)bVar1 << 0x10 | (uint)bVar4 << 8 | (uint)bVar3;
        BIO_indent(param_7,6,0x50);
        BIO_printf(param_7,"Uncompressed length=%d\n",(ulong)uVar19);
        BIO_indent(param_7,6,0x50);
        if (uVar27 == 0) {
          BIO_printf(param_7,"Compressed length=%d, Ratio=unknown\n",0);
        }
        else {
          BIO_printf(param_7,"Compressed length=%d, Ratio=%f:1\n",
                     (double)((float)uVar19 / (float)uVar27),(ulong)uVar27);
        }
        BIO_dump_indent(param_7,(char *)&pXVar30->sig_alg,uVar27,6);
        goto LAB_00101630;
      }
    }
  }
LAB_001017c5:
  local_60 = pXVar18;
  BIO_printf(param_7,"Message length parse error!\n");
LAB_00101630:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    BIO_puts(param_7,"\n");
    return;
  }
LAB_00103a5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


