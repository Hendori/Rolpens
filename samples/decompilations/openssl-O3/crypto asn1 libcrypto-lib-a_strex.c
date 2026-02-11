
bool send_bio_chars(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != (BIO *)0x0) {
    iVar1 = BIO_write(param_1,param_2,param_3);
    return iVar1 == param_3;
  }
  return true;
}



bool send_fp_chars(FILE *param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  
  if (param_1 != (FILE *)0x0) {
    sVar1 = fwrite(param_2,1,(long)(int)param_3,param_1);
    return param_3 == sVar1;
  }
  return true;
}



int do_buf_constprop_1(uint *param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5,
                      BIO *param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  byte *str;
  uint uVar10;
  int iVar11;
  long in_FS_OFFSET;
  uint local_9c;
  byte local_69;
  ulong local_68;
  byte local_5e [4];
  byte local_5a;
  byte local_59;
  char local_58 [24];
  long local_40;
  
  uVar10 = param_3 & 7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (uint *)((long)param_1 + (long)(int)param_2);
  if (uVar10 == 2) {
    if ((param_2 & 1) == 0) goto LAB_001000c8;
    ERR_new();
    ERR_set_debug("crypto/asn1/a_strex.c",0xa2,"do_buf");
    ERR_set_error(0xd,0x81,0);
  }
  else {
    if ((uVar10 != 4) || ((param_2 & 3) == 0)) {
LAB_001000c8:
      param_3 = param_3 & 8;
      iVar11 = 0;
      puVar8 = param_1;
      local_9c = param_2;
      if (param_1 != puVar1) {
        do {
          while( true ) {
            uVar5 = 0;
            if (param_1 == puVar8) {
              uVar5 = (param_4 & 1) << 5;
            }
            if (uVar10 == 2) break;
            if (uVar10 < 3) {
              if (uVar10 == 0) {
                iVar2 = UTF8_getc((uchar *)puVar8,local_9c,&local_68);
                if (-1 < iVar2) {
                  local_9c = local_9c - iVar2;
                  puVar9 = (uint *)((long)puVar8 + (long)iVar2);
                  if (puVar1 == puVar9) goto LAB_00100364;
LAB_00100371:
                  if (param_3 != 0) goto LAB_00100280;
                  if (local_68 < 0x100000000) goto LAB_00100387;
                }
                goto LAB_00100350;
              }
              local_68 = (ulong)(byte)*puVar8;
              puVar8 = (uint *)((long)puVar8 + 1);
              puVar9 = puVar1;
              if (puVar1 == puVar8) {
LAB_00100364:
                if ((param_4 & 1) != 0) {
                  uVar5 = 0x40;
                }
                goto LAB_00100371;
              }
              puVar9 = puVar8;
              if (param_3 != 0) goto LAB_00100280;
LAB_00100154:
              local_69 = (byte)local_68;
              puVar9 = puVar8;
              if ((char)local_69 < '\0') {
                if ((param_4 & 4) == 0) {
LAB_001004ac:
                  if ((param_6 != (BIO *)0x0) &&
                     (iVar2 = BIO_write(param_6,&local_69,1), iVar2 != 1)) goto LAB_00100350;
LAB_001004cc:
                  iVar2 = 1;
                }
                else {
LAB_00100780:
                  BIO_snprintf(local_58,0xb,"\\%02X",local_68 & 0xffffffff);
                  if ((param_6 != (BIO *)0x0) && (iVar2 = BIO_write(param_6,local_58,3), iVar2 != 3)
                     ) goto LAB_00100350;
                  iVar2 = 3;
                }
              }
              else {
                uVar5 = (uint)*(ushort *)(char_type + (long)(int)local_68 * 2) &
                        (param_4 & 0xffff | uVar5);
                if ((uVar5 & 0x61) == 0) {
                  if ((uVar5 & 0x406) != 0) goto LAB_00100780;
                  if ((local_68 != 0x5c) || ((param_4 & 0x40f) == 0)) goto LAB_001004ac;
                  if ((param_6 != (BIO *)0x0) && (iVar2 = BIO_write(param_6,&_LC2,2), iVar2 != 2))
                  goto LAB_00100350;
                }
                else {
                  if ((uVar5 & 8) != 0) {
                    if (param_5 != (undefined1 *)0x0) {
                      *param_5 = 1;
                    }
                    goto LAB_001004ac;
                  }
                  if ((param_6 != (BIO *)0x0) &&
                     ((iVar2 = BIO_write(param_6,&_LC1,1), iVar2 != 1 ||
                      (iVar2 = BIO_write(param_6,&local_69,1), iVar2 != 1)))) goto LAB_00100350;
                }
                iVar2 = 2;
              }
            }
            else {
              if (uVar10 != 4) goto LAB_00100350;
              uVar6 = *puVar8;
              puVar9 = puVar8 + 1;
              local_68 = (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                uVar6 << 0x18);
              if (puVar1 == puVar9) goto LAB_00100364;
              if (param_3 != 0) goto LAB_00100280;
LAB_00100387:
              puVar8 = puVar9;
              if (local_68 < 0x10000) {
LAB_00100394:
                if (local_68 < 0x100) goto LAB_00100154;
                BIO_snprintf(local_58,0x13,"\\U%04lX");
                if ((param_6 != (BIO *)0x0) && (iVar2 = BIO_write(param_6,local_58,6), iVar2 != 6))
                goto LAB_00100350;
                iVar2 = 6;
                puVar9 = puVar8;
              }
              else {
                BIO_snprintf(local_58,0x13,"\\W%08lX");
                if ((param_6 != (BIO *)0x0) && (iVar2 = BIO_write(param_6,local_58,10), iVar2 != 10)
                   ) goto LAB_00100350;
                iVar2 = 10;
              }
            }
LAB_00100216:
            iVar11 = iVar11 + iVar2;
LAB_00100219:
            puVar8 = puVar9;
            if (puVar1 == puVar9) goto LAB_00100223;
          }
          puVar9 = (uint *)((long)puVar8 + 2);
          local_68 = (ulong)(ushort)((ushort)*puVar8 << 8 | (ushort)*puVar8 >> 8);
          if (puVar1 == puVar9) goto LAB_00100364;
          puVar8 = puVar9;
          if (param_3 == 0) goto LAB_00100394;
LAB_00100280:
          str = local_5e;
          iVar2 = UTF8_putc(str,6,local_68);
          if (iVar2 < 1) goto LAB_00100219;
          uVar5 = param_4 & 0xffff | uVar5;
          if ((param_4 & 4) == 0) {
            if (param_6 != (BIO *)0x0) {
              pbVar4 = str + iVar2;
              do {
                local_69 = *str;
                if ((char)local_69 < '\0') {
LAB_001004ed:
                  iVar2 = BIO_write(param_6,&local_69,1);
                  if (iVar2 != 1) goto LAB_00100350;
                  iVar2 = 1;
                }
                else {
                  uVar6 = *(ushort *)(char_type + (ulong)local_69 * 2) & uVar5;
                  if ((uVar6 & 0x61) == 0) {
                    if ((uVar6 & 0x406) != 0) {
                      BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_69);
                      iVar2 = BIO_write(param_6,local_58,3);
                      if (iVar2 == 3) {
                        iVar2 = 3;
                        goto LAB_0010050d;
                      }
                      goto LAB_00100350;
                    }
                    if ((local_69 != 0x5c) || ((param_4 & 0x40f) == 0)) goto LAB_001004ed;
                    iVar2 = BIO_write(param_6,&_LC2,2);
                    if (iVar2 != 2) goto LAB_00100350;
                  }
                  else {
                    if ((uVar6 & 8) != 0) {
                      if (param_5 != (undefined1 *)0x0) {
                        *param_5 = 1;
                      }
                      goto LAB_001004ed;
                    }
                    iVar2 = BIO_write(param_6,&_LC1,1);
                    if ((iVar2 != 1) || (iVar2 = BIO_write(param_6,&local_69,1), iVar2 != 1))
                    goto LAB_00100350;
                  }
                  iVar2 = 2;
                }
LAB_0010050d:
                str = str + 1;
                iVar11 = iVar11 + iVar2;
              } while (pbVar4 != str);
              goto LAB_0010051d;
            }
            local_69 = local_5e[0];
            if ((char)local_5e[0] < '\0') {
LAB_00100a4c:
              iVar3 = 1;
            }
            else {
              uVar6 = *(ushort *)(char_type + (ulong)local_5e[0] * 2) & uVar5;
              if ((uVar6 & 0x61) == 0) {
                if ((uVar6 & 0x406) == 0) {
                  if ((local_5e[0] != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0))
                  goto LAB_00100a4c;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5e[0]);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar6 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_00100a4c;
                }
              }
            }
            iVar11 = iVar11 + iVar3;
            if (iVar2 == 1) goto LAB_00100219;
            local_69 = local_5e[1];
            if ((char)local_5e[1] < '\0') {
LAB_00100a63:
              iVar3 = 1;
            }
            else {
              uVar6 = *(ushort *)(char_type + (ulong)local_5e[1] * 2) & uVar5;
              if ((uVar6 & 0x61) == 0) {
                if ((uVar6 & 0x406) == 0) {
                  if ((local_5e[1] != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0))
                  goto LAB_00100a63;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5e[1]);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar6 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_00100a63;
                }
              }
            }
            iVar11 = iVar11 + iVar3;
            if (iVar2 == 2) goto LAB_00100219;
            local_69 = local_5e[2];
            if ((char)local_5e[2] < '\0') {
LAB_00100932:
              iVar3 = 1;
            }
            else {
              uVar6 = *(ushort *)(char_type + (ulong)local_5e[2] * 2) & uVar5;
              if ((uVar6 & 0x61) == 0) {
                if ((uVar6 & 0x406) == 0) {
                  if ((local_5e[2] != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0))
                  goto LAB_00100932;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5e[2]);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar6 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_00100932;
                }
              }
            }
            iVar11 = iVar11 + iVar3;
            if (iVar2 == 3) goto LAB_00100219;
            local_69 = local_5e[3];
            if ((char)local_5e[3] < '\0') {
LAB_00100987:
              iVar3 = 1;
            }
            else {
              uVar6 = *(ushort *)(char_type + (ulong)local_5e[3] * 2) & uVar5;
              if ((uVar6 & 0x61) == 0) {
                if ((uVar6 & 0x406) == 0) {
                  if ((local_5e[3] != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0))
                  goto LAB_00100987;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5e[3]);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar6 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_00100987;
                }
              }
            }
            iVar11 = iVar11 + iVar3;
            if (iVar2 == 4) goto LAB_00100219;
            local_69 = local_5a;
            if ((char)local_5a < '\0') {
LAB_001009dc:
              iVar3 = 1;
            }
            else {
              uVar6 = *(ushort *)(char_type + (ulong)local_5a * 2) & uVar5;
              if ((uVar6 & 0x61) == 0) {
                if ((uVar6 & 0x406) == 0) {
                  if ((local_5a != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0)) goto LAB_001009dc;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5a);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar6 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_001009dc;
                }
              }
            }
            iVar11 = iVar11 + iVar3;
            if (iVar2 == 5) goto LAB_00100219;
            local_69 = local_59;
            if (-1 < (char)local_59) {
              uVar7 = (ushort)uVar5 & *(ushort *)(char_type + (ulong)local_59 * 2);
              if ((uVar7 & 0x61) == 0) {
                if ((uVar7 & 0x406) == 0) {
                  if ((local_59 != 0x5c) || (iVar2 = 2, (param_4 & 0x40f) == 0)) goto LAB_001004cc;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_59);
                  iVar2 = 3;
                }
              }
              else {
                iVar2 = 2;
                if ((uVar7 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_001004cc;
                }
              }
              goto LAB_00100216;
            }
            goto LAB_001004cc;
          }
          pbVar4 = str + iVar2;
          do {
            local_69 = *str;
            if ((char)local_69 < '\0') {
LAB_0010071b:
              BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_69);
              if ((param_6 != (BIO *)0x0) && (iVar2 = BIO_write(param_6,local_58,3), iVar2 != 3))
              goto LAB_00100350;
              iVar2 = 3;
            }
            else {
              uVar6 = *(ushort *)(char_type + (ulong)local_69 * 2) & uVar5;
              if ((uVar6 & 0x61) == 0) {
                if ((uVar6 & 0x406) != 0) goto LAB_0010071b;
                if ((local_69 != 0x5c) || ((param_4 & 0x40f) == 0)) goto LAB_001006d6;
                if ((param_6 == (BIO *)0x0) || (iVar2 = BIO_write(param_6,&_LC2,2), iVar2 == 2))
                goto LAB_00100805;
                goto LAB_00100350;
              }
              if ((uVar6 & 8) == 0) {
                if ((param_6 != (BIO *)0x0) &&
                   ((iVar2 = BIO_write(param_6,&_LC1,1), iVar2 != 1 ||
                    (iVar2 = BIO_write(param_6,&local_69,1), iVar2 != 1)))) goto LAB_00100350;
LAB_00100805:
                iVar2 = 2;
              }
              else {
                if (param_5 != (undefined1 *)0x0) {
                  *param_5 = 1;
                }
LAB_001006d6:
                if ((param_6 != (BIO *)0x0) && (iVar2 = BIO_write(param_6,&local_69,1), iVar2 != 1))
                goto LAB_00100350;
                iVar2 = 1;
              }
            }
            str = str + 1;
            iVar11 = iVar11 + iVar2;
          } while (str != pbVar4);
LAB_0010051d:
          puVar8 = puVar9;
        } while (puVar1 != puVar9);
      }
      goto LAB_00100223;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/a_strex.c",0x9c,"do_buf");
    ERR_set_error(0xd,0x85,0);
  }
LAB_00100350:
  iVar11 = -1;
LAB_00100223:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11;
}



int do_print_ex_constprop_1(BIO *param_1,uint param_2,_union_257 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  uchar *puVar6;
  uchar *puVar7;
  long in_FS_OFFSET;
  char local_61;
  uchar *local_60;
  ASN1_TYPE local_58;
  undefined1 local_42 [2];
  long local_40;
  
  iVar2 = (param_3.asn1_string)->type;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_61 = '\0';
  if ((param_2 & 0x40) == 0) {
    iVar3 = 0;
    if ((param_2 & 0x80) == 0) {
joined_r0x00100e9b:
      if ((param_2 & 0x20) == 0) {
        if (0x1d < iVar2 - 1U) {
LAB_00100da0:
          if ((param_2 & 0x100) != 0) goto LAB_00100dad;
          goto LAB_00100cb0;
        }
        bVar1 = tag2nbyte[iVar2];
        if (bVar1 == 0xff) goto LAB_00100da0;
        iVar4 = (int)(char)bVar1;
        if ((param_2 & 0x10) != 0) {
          iVar4 = 1;
          if (bVar1 != 0) {
            iVar4 = (int)(char)(bVar1 | 8);
          }
        }
      }
      else {
LAB_00100cb0:
        iVar4 = (-(uint)((param_2 & 0x10) == 0) & 0xfffffff8) + 9;
      }
      param_2 = param_2 & 0x40f;
      iVar2 = do_buf_constprop_1((param_3.asn1_string)->data,(param_3.asn1_string)->length,iVar4,
                                 param_2,&local_61,0);
      if ((-1 < iVar2) && (iVar2 <= 0x7ffffffd - iVar3)) {
        iVar2 = iVar2 + iVar3;
        if (local_61 == '\0') {
          if ((param_1 == (BIO *)0x0) ||
             (iVar3 = do_buf_constprop_1((param_3.asn1_string)->data,(param_3.asn1_string)->length,
                                         iVar4,param_2,0,param_1), -1 < iVar3)) goto LAB_00100d35;
        }
        else {
          iVar2 = iVar2 + 2;
          if ((param_1 == (BIO *)0x0) ||
             (((iVar3 = BIO_write(param_1,&_LC8,1), iVar3 == 1 &&
               (iVar3 = do_buf_constprop_1((param_3.asn1_string)->data,(param_3.asn1_string)->length
                                           ,iVar4,param_2,0,param_1), -1 < iVar3)) &&
              (iVar3 = BIO_write(param_1,&_LC8,1), iVar3 == 1)))) goto LAB_00100d35;
        }
      }
    }
    else {
LAB_00100dad:
      if (param_1 == (BIO *)0x0) goto LAB_00101036;
LAB_00100db6:
      iVar2 = BIO_write(param_1,&_LC7,1);
      if (iVar2 != 1) goto LAB_00100d30;
      if ((param_2 & 0x200) != 0) goto LAB_00100f70;
      iVar2 = (param_3.asn1_string)->length;
      puVar6 = (param_3.asn1_string)->data;
      puVar7 = puVar6 + iVar2;
      if (puVar6 != puVar7) {
        do {
          ossl_to_hex(local_42,*puVar6);
          iVar4 = BIO_write(param_1,local_42,2);
          if (iVar4 != 2) goto LAB_00100d30;
          puVar6 = puVar6 + 1;
        } while (puVar7 != puVar6);
        goto joined_r0x00100f49;
      }
      iVar2 = 1;
LAB_00100f52:
      if (iVar2 <= 0x7fffffff - iVar3) {
        iVar2 = iVar3 + iVar2;
        goto LAB_00100d35;
      }
    }
  }
  else {
    __s = ASN1_tag2str(iVar2);
    sVar5 = strlen(__s);
    iVar3 = (int)sVar5;
    if (param_1 == (BIO *)0x0) {
      iVar3 = iVar3 + 1;
      if ((param_2 & 0x80) == 0) goto joined_r0x00100e9b;
LAB_00101036:
      if ((param_2 & 0x200) == 0) {
        iVar2 = (param_3.asn1_string)->length;
joined_r0x00100f49:
        if (-1 < iVar2 * 2) {
          iVar2 = iVar2 * 2 + 1;
          goto LAB_00100f52;
        }
      }
      else {
LAB_00100f70:
        local_58.type = (param_3.asn1_string)->type;
        local_58.value = param_3;
        iVar2 = i2d_ASN1_TYPE(&local_58,(uchar **)0x0);
        if (0 < iVar2) {
          puVar6 = (uchar *)CRYPTO_malloc(iVar2,"crypto/asn1/a_strex.c",0x11d);
          if (puVar6 != (uchar *)0x0) {
            local_60 = puVar6;
            i2d_ASN1_TYPE(&local_58,&local_60);
            if (param_1 != (BIO *)0x0) {
              puVar7 = puVar6;
              do {
                ossl_to_hex(local_42,*puVar7);
                iVar4 = BIO_write(param_1,local_42,2);
                if (iVar4 != 2) {
                  CRYPTO_free(puVar6);
                  goto LAB_00100d30;
                }
                puVar7 = puVar7 + 1;
              } while (puVar6 + iVar2 != puVar7);
            }
            CRYPTO_free(puVar6);
            goto joined_r0x00100f49;
          }
        }
      }
    }
    else {
      iVar4 = BIO_write(param_1,__s,iVar3);
      if ((iVar4 == iVar3) && (iVar4 = BIO_write(param_1,&_LC6,1), iVar4 == 1)) {
        iVar3 = iVar3 + 1;
        if ((param_2 & 0x80) == 0) goto joined_r0x00100e9b;
        goto LAB_00100db6;
      }
    }
  }
LAB_00100d30:
  iVar2 = -1;
LAB_00100d35:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int do_buf_constprop_0(uint *param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5,
                      FILE *param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  ushort uVar8;
  uint *puVar9;
  uint *puVar10;
  byte *str;
  uint uVar11;
  int iVar12;
  long in_FS_OFFSET;
  uint local_94;
  byte local_69;
  ulong local_68;
  byte local_5e [4];
  byte local_5a;
  byte local_59;
  char local_58 [24];
  long local_40;
  
  uVar11 = param_3 & 7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (uint *)((long)param_1 + (long)(int)param_2);
  if (uVar11 == 2) {
    if ((param_2 & 1) == 0) goto LAB_001010b5;
    ERR_new();
    ERR_set_debug("crypto/asn1/a_strex.c",0xa2,"do_buf");
    ERR_set_error(0xd,0x81,0);
  }
  else {
    if ((uVar11 != 4) || ((param_2 & 3) == 0)) {
LAB_001010b5:
      param_3 = param_3 & 8;
      iVar12 = 0;
      puVar9 = param_1;
      local_94 = param_2;
      if (param_1 != puVar1) {
        do {
          while( true ) {
            uVar5 = 0;
            if (param_1 == puVar9) {
              uVar5 = (param_4 & 1) << 5;
            }
            if (uVar11 == 2) break;
            if (uVar11 < 3) {
              if (uVar11 == 0) {
                iVar2 = UTF8_getc((uchar *)puVar9,local_94,&local_68);
                if (-1 < iVar2) {
                  local_94 = local_94 - iVar2;
                  puVar10 = (uint *)((long)puVar9 + (long)iVar2);
                  if (puVar1 == puVar10) goto LAB_00101354;
LAB_00101361:
                  if (param_3 != 0) goto LAB_00101270;
                  if (local_68 < 0x100000000) goto LAB_00101377;
                }
                goto LAB_00101340;
              }
              local_68 = (ulong)(byte)*puVar9;
              puVar9 = (uint *)((long)puVar9 + 1);
              puVar10 = puVar1;
              if (puVar1 == puVar9) {
LAB_00101354:
                if ((param_4 & 1) != 0) {
                  uVar5 = 0x40;
                }
                goto LAB_00101361;
              }
              puVar10 = puVar9;
              if (param_3 != 0) goto LAB_00101270;
LAB_0010113c:
              local_69 = (byte)local_68;
              puVar10 = puVar9;
              if ((char)local_69 < '\0') {
                if ((param_4 & 4) == 0) {
LAB_0010149c:
                  if ((param_6 != (FILE *)0x0) &&
                     (sVar4 = fwrite(&local_69,1,1,param_6), sVar4 != 1)) goto LAB_00101340;
LAB_001014c2:
                  iVar2 = 1;
                }
                else {
LAB_001017a0:
                  BIO_snprintf(local_58,0xb,"\\%02X",local_68 & 0xffffffff);
                  if ((param_6 != (FILE *)0x0) && (sVar4 = fwrite(local_58,1,3,param_6), sVar4 != 3)
                     ) goto LAB_00101340;
                  iVar2 = 3;
                }
              }
              else {
                uVar5 = (uint)*(ushort *)(char_type + (long)(int)local_68 * 2) &
                        (param_4 & 0xffff | uVar5);
                if ((uVar5 & 0x61) == 0) {
                  if ((uVar5 & 0x406) != 0) goto LAB_001017a0;
                  if ((local_68 != 0x5c) || ((param_4 & 0x40f) == 0)) goto LAB_0010149c;
                  if ((param_6 != (FILE *)0x0) && (sVar4 = fwrite(&_LC2,1,2,param_6), sVar4 != 2))
                  goto LAB_00101340;
                }
                else {
                  if ((uVar5 & 8) != 0) {
                    if (param_5 != (undefined1 *)0x0) {
                      *param_5 = 1;
                    }
                    goto LAB_0010149c;
                  }
                  if ((param_6 != (FILE *)0x0) &&
                     ((sVar4 = fwrite(&_LC1,1,1,param_6), sVar4 != 1 ||
                      (sVar4 = fwrite(&local_69,1,1,param_6), sVar4 != 1)))) goto LAB_00101340;
                }
                iVar2 = 2;
              }
            }
            else {
              if (uVar11 != 4) goto LAB_00101340;
              uVar7 = *puVar9;
              puVar10 = puVar9 + 1;
              local_68 = (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                                uVar7 << 0x18);
              if (puVar1 == puVar10) goto LAB_00101354;
              if (param_3 != 0) goto LAB_00101270;
LAB_00101377:
              puVar9 = puVar10;
              if (local_68 < 0x10000) {
LAB_00101384:
                if (local_68 < 0x100) goto LAB_0010113c;
                BIO_snprintf(local_58,0x13,"\\U%04lX");
                if ((param_6 != (FILE *)0x0) && (sVar4 = fwrite(local_58,1,6,param_6), sVar4 != 6))
                goto LAB_00101340;
                iVar2 = 6;
                puVar10 = puVar9;
              }
              else {
                BIO_snprintf(local_58,0x13,"\\W%08lX");
                if ((param_6 != (FILE *)0x0) && (sVar4 = fwrite(local_58,1,10,param_6), sVar4 != 10)
                   ) goto LAB_00101340;
                iVar2 = 10;
              }
            }
LAB_00101204:
            iVar12 = iVar12 + iVar2;
LAB_00101207:
            puVar9 = puVar10;
            if (puVar1 == puVar10) goto LAB_00101211;
          }
          puVar10 = (uint *)((long)puVar9 + 2);
          local_68 = (ulong)(ushort)((ushort)*puVar9 << 8 | (ushort)*puVar9 >> 8);
          if (puVar1 == puVar10) goto LAB_00101354;
          puVar9 = puVar10;
          if (param_3 == 0) goto LAB_00101384;
LAB_00101270:
          str = local_5e;
          iVar2 = UTF8_putc(str,6,local_68);
          if (iVar2 < 1) goto LAB_00101207;
          uVar5 = param_4 & 0xffff | uVar5;
          if ((param_4 & 4) == 0) {
            if (param_6 != (FILE *)0x0) {
              pbVar6 = str + iVar2;
              do {
                local_69 = *str;
                if ((char)local_69 < '\0') {
LAB_001014dd:
                  sVar4 = fwrite(&local_69,1,1,param_6);
                  if (sVar4 != 1) goto LAB_00101340;
                  iVar2 = 1;
                }
                else {
                  uVar7 = *(ushort *)(char_type + (ulong)local_69 * 2) & uVar5;
                  if ((uVar7 & 0x61) == 0) {
                    if ((uVar7 & 0x406) != 0) {
                      BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_69);
                      sVar4 = fwrite(local_58,1,3,param_6);
                      if (sVar4 == 3) {
                        iVar2 = 3;
                        goto LAB_00101501;
                      }
                      goto LAB_00101340;
                    }
                    if ((local_69 != 0x5c) || ((param_4 & 0x40f) == 0)) goto LAB_001014dd;
                    sVar4 = fwrite(&_LC2,1,2,param_6);
                    if (sVar4 != 2) goto LAB_00101340;
                  }
                  else {
                    if ((uVar7 & 8) != 0) {
                      if (param_5 != (undefined1 *)0x0) {
                        *param_5 = 1;
                      }
                      goto LAB_001014dd;
                    }
                    sVar4 = fwrite(&_LC1,1,1,param_6);
                    if ((sVar4 != 1) || (sVar4 = fwrite(&local_69,1,1,param_6), sVar4 != 1))
                    goto LAB_00101340;
                  }
                  iVar2 = 2;
                }
LAB_00101501:
                str = str + 1;
                iVar12 = iVar12 + iVar2;
              } while (str != pbVar6);
              goto LAB_00101511;
            }
            local_69 = local_5e[0];
            if ((char)local_5e[0] < '\0') {
LAB_00101a8c:
              iVar3 = 1;
            }
            else {
              uVar7 = *(ushort *)(char_type + (ulong)local_5e[0] * 2) & uVar5;
              if ((uVar7 & 0x61) == 0) {
                if ((uVar7 & 0x406) == 0) {
                  if ((local_5e[0] != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0))
                  goto LAB_00101a8c;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5e[0]);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar7 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_00101a8c;
                }
              }
            }
            iVar12 = iVar12 + iVar3;
            if (iVar2 == 1) goto LAB_00101207;
            local_69 = local_5e[1];
            if ((char)local_5e[1] < '\0') {
LAB_00101aa3:
              iVar3 = 1;
            }
            else {
              uVar7 = *(ushort *)(char_type + (ulong)local_5e[1] * 2) & uVar5;
              if ((uVar7 & 0x61) == 0) {
                if ((uVar7 & 0x406) == 0) {
                  if ((local_5e[1] != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0))
                  goto LAB_00101aa3;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5e[1]);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar7 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_00101aa3;
                }
              }
            }
            iVar12 = iVar12 + iVar3;
            if (iVar2 == 2) goto LAB_00101207;
            local_69 = local_5e[2];
            if ((char)local_5e[2] < '\0') {
LAB_00101972:
              iVar3 = 1;
            }
            else {
              uVar7 = *(ushort *)(char_type + (ulong)local_5e[2] * 2) & uVar5;
              if ((uVar7 & 0x61) == 0) {
                if ((uVar7 & 0x406) == 0) {
                  if ((local_5e[2] != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0))
                  goto LAB_00101972;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5e[2]);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar7 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_00101972;
                }
              }
            }
            iVar12 = iVar12 + iVar3;
            if (iVar2 == 3) goto LAB_00101207;
            local_69 = local_5e[3];
            if ((char)local_5e[3] < '\0') {
LAB_001019c7:
              iVar3 = 1;
            }
            else {
              uVar7 = *(ushort *)(char_type + (ulong)local_5e[3] * 2) & uVar5;
              if ((uVar7 & 0x61) == 0) {
                if ((uVar7 & 0x406) == 0) {
                  if ((local_5e[3] != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0))
                  goto LAB_001019c7;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5e[3]);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar7 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_001019c7;
                }
              }
            }
            iVar12 = iVar12 + iVar3;
            if (iVar2 == 4) goto LAB_00101207;
            local_69 = local_5a;
            if ((char)local_5a < '\0') {
LAB_00101a1c:
              iVar3 = 1;
            }
            else {
              uVar7 = *(ushort *)(char_type + (ulong)local_5a * 2) & uVar5;
              if ((uVar7 & 0x61) == 0) {
                if ((uVar7 & 0x406) == 0) {
                  if ((local_5a != 0x5c) || (iVar3 = 2, (param_4 & 0x40f) == 0)) goto LAB_00101a1c;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_5a);
                  iVar3 = 3;
                }
              }
              else {
                iVar3 = 2;
                if ((uVar7 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_00101a1c;
                }
              }
            }
            iVar12 = iVar12 + iVar3;
            if (iVar2 == 5) goto LAB_00101207;
            local_69 = local_59;
            if (-1 < (char)local_59) {
              uVar8 = (ushort)uVar5 & *(ushort *)(char_type + (ulong)local_59 * 2);
              if ((uVar8 & 0x61) == 0) {
                if ((uVar8 & 0x406) == 0) {
                  if ((local_59 != 0x5c) || (iVar2 = 2, (param_4 & 0x40f) == 0)) goto LAB_001014c2;
                }
                else {
                  BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_59);
                  iVar2 = 3;
                }
              }
              else {
                iVar2 = 2;
                if ((uVar8 & 8) != 0) {
                  if (param_5 != (undefined1 *)0x0) {
                    *param_5 = 1;
                  }
                  goto LAB_001014c2;
                }
              }
              goto LAB_00101204;
            }
            goto LAB_001014c2;
          }
          pbVar6 = str + iVar2;
          do {
            local_69 = *str;
            if ((char)local_69 < '\0') {
LAB_00101731:
              BIO_snprintf(local_58,0xb,"\\%02X",(ulong)local_69);
              if ((param_6 != (FILE *)0x0) && (sVar4 = fwrite(local_58,1,3,param_6), sVar4 != 3))
              goto LAB_00101340;
              iVar2 = 3;
            }
            else {
              uVar7 = *(ushort *)(char_type + (ulong)local_69 * 2) & uVar5;
              if ((uVar7 & 0x61) == 0) {
                if ((uVar7 & 0x406) != 0) goto LAB_00101731;
                if ((local_69 != 0x5c) || ((param_4 & 0x40f) == 0)) goto LAB_001016e6;
                if ((param_6 == (FILE *)0x0) || (sVar4 = fwrite(&_LC2,1,2,param_6), sVar4 == 2))
                goto LAB_00101839;
                goto LAB_00101340;
              }
              if ((uVar7 & 8) == 0) {
                if ((param_6 != (FILE *)0x0) &&
                   ((sVar4 = fwrite(&_LC1,1,1,param_6), sVar4 != 1 ||
                    (sVar4 = fwrite(&local_69,1,1,param_6), sVar4 != 1)))) goto LAB_00101340;
LAB_00101839:
                iVar2 = 2;
              }
              else {
                if (param_5 != (undefined1 *)0x0) {
                  *param_5 = 1;
                }
LAB_001016e6:
                if ((param_6 != (FILE *)0x0) && (sVar4 = fwrite(&local_69,1,1,param_6), sVar4 != 1))
                goto LAB_00101340;
                iVar2 = 1;
              }
            }
            str = str + 1;
            iVar12 = iVar12 + iVar2;
          } while (str != pbVar6);
LAB_00101511:
          puVar9 = puVar10;
        } while (puVar1 != puVar10);
      }
      goto LAB_00101211;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/a_strex.c",0x9c,"do_buf");
    ERR_set_error(0xd,0x85,0);
  }
LAB_00101340:
  iVar12 = -1;
LAB_00101211:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar12;
}



int do_print_ex_constprop_0(FILE *param_1,uint param_2,_union_257 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *__s;
  size_t sVar5;
  uchar *puVar6;
  int iVar7;
  uchar *puVar8;
  long in_FS_OFFSET;
  char local_61;
  uchar *local_60;
  ASN1_TYPE local_58;
  undefined1 local_42 [2];
  long local_40;
  
  iVar2 = (param_3.asn1_string)->type;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_61 = '\0';
  if ((param_2 & 0x40) == 0) {
    iVar3 = 0;
    if ((param_2 & 0x80) == 0) {
LAB_00101ce6:
      if ((param_2 & 0x20) == 0) {
        if (0x1d < iVar2 - 1U) {
LAB_00101df0:
          if ((param_2 & 0x100) != 0) goto LAB_00101dfd;
          goto LAB_00101cf0;
        }
        bVar1 = tag2nbyte[iVar2];
        if (bVar1 == 0xff) goto LAB_00101df0;
        iVar7 = (int)(char)bVar1;
        if ((param_2 & 0x10) != 0) {
          iVar7 = 1;
          if (bVar1 != 0) {
            iVar7 = (int)(char)(bVar1 | 8);
          }
        }
      }
      else {
LAB_00101cf0:
        iVar7 = (-(uint)((param_2 & 0x10) == 0) & 0xfffffff8) + 9;
      }
      param_2 = param_2 & 0x40f;
      iVar2 = do_buf_constprop_0((param_3.asn1_string)->data,(param_3.asn1_string)->length,iVar7,
                                 param_2,&local_61,0);
      if ((-1 < iVar2) && (iVar2 <= 0x7ffffffd - iVar3)) {
        iVar2 = iVar2 + iVar3;
        if (local_61 == '\0') {
          if ((param_1 == (FILE *)0x0) ||
             (iVar3 = do_buf_constprop_0((param_3.asn1_string)->data,(param_3.asn1_string)->length,
                                         iVar7,param_2,0,param_1), -1 < iVar3)) goto LAB_00101d7d;
        }
        else {
          iVar2 = iVar2 + 2;
          if ((param_1 == (FILE *)0x0) ||
             (((sVar4 = fwrite(&_LC8,1,1,param_1), sVar4 == 1 &&
               (iVar3 = do_buf_constprop_0((param_3.asn1_string)->data,(param_3.asn1_string)->length
                                           ,iVar7,param_2,0,param_1), -1 < iVar3)) &&
              (sVar4 = fwrite(&_LC8,1,1,param_1), sVar4 == 1)))) goto LAB_00101d7d;
        }
      }
    }
    else {
LAB_00101dfd:
      if (param_1 == (FILE *)0x0) goto LAB_0010209e;
LAB_00101e06:
      sVar4 = fwrite(&_LC7,1,1,param_1);
      if (sVar4 != 1) goto LAB_00101d78;
      if ((param_2 & 0x200) != 0) goto LAB_00101f88;
      iVar2 = (param_3.asn1_string)->length;
      puVar6 = (param_3.asn1_string)->data;
      puVar8 = puVar6 + iVar2;
      if (puVar8 != puVar6) {
        do {
          ossl_to_hex(local_42,*puVar6);
          sVar4 = fwrite(local_42,1,2,param_1);
          if (sVar4 != 2) goto LAB_00101d78;
          puVar6 = puVar6 + 1;
        } while (puVar8 != puVar6);
        goto joined_r0x00102065;
      }
      iVar2 = 1;
LAB_0010206e:
      if (iVar2 <= 0x7fffffff - iVar3) {
        iVar2 = iVar2 + iVar3;
        goto LAB_00101d7d;
      }
    }
  }
  else {
    __s = ASN1_tag2str(iVar2);
    sVar4 = strlen(__s);
    iVar3 = (int)sVar4;
    if (param_1 == (FILE *)0x0) {
      iVar3 = iVar3 + 1;
      if ((param_2 & 0x80) == 0) goto LAB_00101ce6;
LAB_0010209e:
      if ((param_2 & 0x200) == 0) {
        iVar2 = (param_3.asn1_string)->length;
joined_r0x00102065:
        if (-1 < iVar2 * 2) {
          iVar2 = iVar2 * 2 + 1;
          goto LAB_0010206e;
        }
      }
      else {
LAB_00101f88:
        local_58.type = (param_3.asn1_string)->type;
        local_58.value = param_3;
        iVar2 = i2d_ASN1_TYPE(&local_58,(uchar **)0x0);
        if (0 < iVar2) {
          puVar6 = (uchar *)CRYPTO_malloc(iVar2,"crypto/asn1/a_strex.c",0x11d);
          if (puVar6 != (uchar *)0x0) {
            local_60 = puVar6;
            i2d_ASN1_TYPE(&local_58,&local_60);
            if (param_1 != (FILE *)0x0) {
              puVar8 = puVar6;
              do {
                ossl_to_hex(local_42,*puVar8);
                sVar4 = fwrite(local_42,1,2,param_1);
                if (sVar4 != 2) {
                  CRYPTO_free(puVar6);
                  goto LAB_00101d78;
                }
                puVar8 = puVar8 + 1;
              } while (puVar6 + iVar2 != puVar8);
            }
            CRYPTO_free(puVar6);
            goto joined_r0x00102065;
          }
        }
      }
    }
    else {
      sVar5 = fwrite(__s,1,(long)iVar3,param_1);
      if ((sVar5 == (sVar4 & 0xffffffff)) && (sVar4 = fwrite(&_LC6,1,1,param_1), sVar4 == 1)) {
        iVar3 = iVar3 + 1;
        if ((param_2 & 0x80) == 0) goto LAB_00101ce6;
        goto LAB_00101e06;
      }
    }
  }
LAB_00101d78:
  iVar2 = -1;
LAB_00101d7d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int X509_NAME_print_ex(BIO *out,X509_NAME *nm,int indent,ulong flags)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *data;
  ASN1_OBJECT *o;
  ASN1_STRING *pAVar7;
  X509_NAME_ENTRY *ne;
  size_t sVar8;
  char *buf;
  int iVar9;
  ulong uVar10;
  int loc;
  int iVar11;
  long in_FS_OFFSET;
  bool bVar12;
  int local_110;
  int local_d0;
  int local_cc;
  int local_c4;
  int local_bc;
  undefined *local_b0;
  undefined *local_a0;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (flags == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar11 = X509_NAME_print(out,nm,indent);
      return iVar11;
    }
    goto LAB_001026f2;
  }
  iVar11 = 0;
  if (-1 < indent) {
    iVar11 = indent;
  }
  if ((0 < indent) && (out != (BIO *)0x0)) {
    iVar9 = 0;
    do {
      iVar1 = BIO_write(out,&_LC17,1);
      if (iVar1 != 1) goto LAB_00102148;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar11);
  }
  uVar2 = (uint)flags & 0xf0000;
  if (uVar2 == 0x30000) {
    local_cc = 3;
    local_b0 = &_LC9;
    local_bc = 2;
    local_a0 = &_LC14;
    local_c4 = 0;
LAB_001021e9:
    iVar9 = (-(uint)((flags & 0x800000) == 0) & 0xfffffffe) + 3;
    data = &_LC15;
    if ((flags & 0x800000) == 0) {
      data = &_LC16;
    }
    uVar2 = (uint)flags & 0x600000;
    iVar1 = X509_NAME_entry_count(nm);
    if (0 < iVar1) {
      local_110 = -1;
      loc = iVar1 + -1;
      do {
        if ((flags & 0x100000) == 0) {
          ne = X509_NAME_get_entry(nm,(iVar1 + -1) - loc);
        }
        else {
          ne = X509_NAME_get_entry(nm,loc);
        }
        if (local_110 != -1) {
          iVar3 = X509_NAME_ENTRY_set(ne);
          if (iVar3 == local_110) {
            if ((out != (BIO *)0x0) && (iVar3 = BIO_write(out,local_b0,local_cc), local_cc != iVar3)
               ) goto LAB_00102148;
            iVar11 = iVar11 + local_cc;
          }
          else if (out == (BIO *)0x0) {
            iVar11 = iVar11 + local_bc + local_c4;
          }
          else {
            iVar3 = BIO_write(out,local_a0,local_bc);
            if (local_bc != iVar3) goto LAB_00102148;
            iVar3 = 0;
            if (local_c4 != 0) {
              do {
                iVar4 = BIO_write(out,&_LC17,1);
                if (iVar4 != 1) goto LAB_00102148;
                iVar3 = iVar3 + 1;
              } while (local_c4 != iVar3);
            }
            iVar11 = iVar11 + local_bc + local_c4;
          }
        }
        local_110 = X509_NAME_ENTRY_set(ne);
        o = X509_NAME_ENTRY_get_object(ne);
        pAVar7 = X509_NAME_ENTRY_get_data(ne);
        iVar3 = OBJ_obj2nid(o);
        uVar10 = flags;
        if (uVar2 == 0x600000) {
LAB_001023a5:
          if (iVar3 == 0) {
            uVar10 = (uint)(flags >> 0x11) & 0x80 | flags;
          }
        }
        else {
          if ((uVar2 == 0x400000) || (iVar3 == 0)) {
            buf = local_98;
            OBJ_obj2txt(buf,0x50,o,1);
            local_d0 = 0;
LAB_00102550:
            sVar8 = strlen(buf);
            iVar4 = (int)sVar8;
            if (out == (BIO *)0x0) {
              if (iVar4 < local_d0) {
                iVar5 = iVar9 + iVar4;
                if ((flags & 0x2000000) != 0) {
                  iVar11 = (local_d0 - iVar4) + iVar11;
                }
              }
              else {
                iVar5 = iVar9 + iVar4;
              }
            }
            else {
              iVar5 = BIO_write(out,buf,iVar4);
              if (iVar5 != iVar4) goto LAB_00102148;
              if ((iVar4 < local_d0) && ((flags & 0x2000000) != 0)) {
                iVar5 = 0;
                do {
                  iVar6 = BIO_write(out,&_LC17,1);
                  if (iVar6 != 1) goto LAB_00102148;
                  iVar5 = iVar5 + 1;
                } while (iVar5 != local_d0 - iVar4);
                iVar11 = iVar11 + iVar5;
              }
LAB_00102381:
              iVar5 = BIO_write(out,data,iVar9);
              if (iVar9 != iVar5) goto LAB_00102148;
              iVar5 = iVar4 + iVar9;
            }
            iVar11 = iVar11 + iVar5;
            goto LAB_001023a5;
          }
          if ((flags & 0x600000) == 0) {
            buf = OBJ_nid2sn(iVar3);
            local_d0 = 10;
            goto LAB_00102550;
          }
          if (uVar2 == 0x200000) {
            buf = OBJ_nid2ln(iVar3);
            local_d0 = 0x19;
            goto LAB_00102550;
          }
          if (out != (BIO *)0x0) {
            iVar4 = BIO_write(out,&_LC18,0);
            if (iVar4 == 0) goto LAB_00102381;
            goto LAB_00102148;
          }
          iVar11 = iVar11 + iVar9;
        }
        iVar3 = do_print_ex_constprop_1(out,uVar10,pAVar7);
        if (iVar3 < 0) goto LAB_00102148;
        iVar11 = iVar11 + iVar3;
        bVar12 = loc != 0;
        loc = loc + -1;
      } while (bVar12);
    }
  }
  else {
    if (uVar2 < 0x30001) {
      if (uVar2 == 0x10000) {
        local_cc = 1;
        local_b0 = &_LC11;
        local_bc = 1;
        local_a0 = &_LC12;
        local_c4 = 0;
      }
      else {
        if (uVar2 != 0x20000) goto LAB_00102148;
        local_cc = 3;
        local_b0 = &_LC9;
        local_bc = 2;
        local_a0 = &_LC13;
        local_c4 = 0;
      }
      goto LAB_001021e9;
    }
    if (uVar2 == 0x40000) {
      local_b0 = &_LC9;
      local_cc = 3;
      local_bc = 1;
      local_a0 = &_LC10;
      local_c4 = iVar11;
      goto LAB_001021e9;
    }
LAB_00102148:
    iVar11 = -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
LAB_001026f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_NAME_print_ex_fp(FILE *fp,X509_NAME *nm,int indent,ulong flags)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BIO *bp;
  size_t sVar7;
  undefined *__ptr;
  X509_NAME_ENTRY *ne;
  size_t sVar8;
  ASN1_OBJECT *o;
  ASN1_STRING *pAVar9;
  size_t sVar10;
  char *buf;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int loc;
  long in_FS_OFFSET;
  bool bVar14;
  int local_ec;
  int local_e4;
  int local_cc;
  undefined *local_c8;
  size_t local_c0;
  undefined *local_b0;
  size_t local_a8;
  int local_a0;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (flags == 0) {
    bp = BIO_new_fp(fp,0);
    if (bp != (BIO *)0x0) {
      iVar1 = X509_NAME_print(bp,nm,indent);
      BIO_free(bp);
      goto LAB_00102764;
    }
LAB_001027d0:
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    if (-1 < indent) {
      iVar1 = indent;
    }
    if ((0 < indent) && (fp != (FILE *)0x0)) {
      iVar11 = 0;
      do {
        sVar7 = fwrite(&_LC17,1,1,fp);
        if (sVar7 != 1) goto LAB_001027d0;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar1);
    }
    uVar2 = (uint)flags & 0xf0000;
    if (uVar2 == 0x30000) {
      local_cc = 3;
      local_c8 = &_LC9;
      local_a8 = 2;
      local_c0 = 3;
      local_a0 = 2;
      local_b0 = &_LC14;
      local_e4 = 0;
    }
    else if (uVar2 < 0x30001) {
      if (uVar2 == 0x10000) {
        local_cc = 1;
        local_c8 = &_LC11;
        local_a8 = 1;
        local_c0 = 1;
        local_a0 = 1;
        local_b0 = &_LC12;
        local_e4 = 0;
      }
      else {
        if (uVar2 != 0x20000) goto LAB_001027d0;
        local_cc = 3;
        local_c8 = &_LC9;
        local_a8 = 2;
        local_c0 = 3;
        local_a0 = 2;
        local_b0 = &_LC13;
        local_e4 = 0;
      }
    }
    else {
      if (uVar2 != 0x40000) goto LAB_001027d0;
      local_c8 = &_LC9;
      local_a8 = 1;
      local_c0 = 3;
      local_cc = 3;
      local_a0 = 1;
      local_b0 = &_LC10;
      local_e4 = iVar1;
    }
    sVar7 = (-(ulong)((flags & 0x800000) == 0) & 0xfffffffffffffffe) + 3;
    iVar11 = (-(uint)((flags & 0x800000) == 0) & 0xfffffffe) + 3;
    __ptr = &_LC15;
    if ((flags & 0x800000) == 0) {
      __ptr = &_LC16;
    }
    uVar2 = (uint)flags & 0x600000;
    iVar3 = X509_NAME_entry_count(nm);
    if (0 < iVar3) {
      iVar3 = iVar3 + -1;
      iVar5 = -1;
      loc = iVar3;
      if ((flags & 0x100000) == 0) goto LAB_00102a9b;
LAB_00102940:
      ne = X509_NAME_get_entry(nm,loc);
      do {
        if (iVar5 != -1) {
          iVar4 = X509_NAME_ENTRY_set(ne);
          if (iVar4 == iVar5) {
            if ((fp != (FILE *)0x0) && (sVar8 = fwrite(local_c8,1,local_c0,fp), sVar8 != local_c0))
            goto LAB_001027d0;
            iVar1 = iVar1 + local_cc;
          }
          else if (fp == (FILE *)0x0) {
            iVar1 = iVar1 + local_a0 + local_e4;
          }
          else {
            sVar8 = fwrite(local_b0,1,local_a8,fp);
            if (sVar8 != local_a8) goto LAB_001027d0;
            iVar5 = 0;
            if (local_e4 != 0) {
              do {
                sVar8 = fwrite(&_LC17,1,1,fp);
                if (sVar8 != 1) goto LAB_001027d0;
                iVar5 = iVar5 + 1;
              } while (iVar5 != local_e4);
            }
            iVar1 = iVar1 + local_a0 + local_e4;
          }
        }
        iVar5 = X509_NAME_ENTRY_set(ne);
        o = X509_NAME_ENTRY_get_object(ne);
        pAVar9 = X509_NAME_ENTRY_get_data(ne);
        iVar4 = OBJ_obj2nid(o);
        uVar12 = flags;
        if (uVar2 == 0x600000) {
LAB_00102a61:
          if (iVar4 == 0) {
            uVar12 = (uint)(flags >> 0x11) & 0x80 | flags;
          }
        }
        else {
          if ((uVar2 == 0x400000) || (iVar4 == 0)) {
            buf = local_98;
            iVar13 = 0;
            OBJ_obj2txt(buf,0x50,o,1);
LAB_00102bb3:
            sVar8 = strlen(buf);
            local_ec = (int)sVar8;
            if (fp == (FILE *)0x0) {
              iVar6 = iVar11 + local_ec;
              if ((local_ec < iVar13) && ((flags & 0x2000000) != 0)) {
                iVar1 = (iVar13 - local_ec) + iVar1;
              }
            }
            else {
              sVar10 = fwrite(buf,1,(long)local_ec,fp);
              if (sVar10 != (sVar8 & 0xffffffff)) goto LAB_001027d0;
              if ((local_ec < iVar13) && ((flags & 0x2000000) != 0)) {
                iVar6 = 0;
                do {
                  sVar8 = fwrite(&_LC17,1,1,fp);
                  if (sVar8 != 1) goto LAB_001027d0;
                  iVar6 = iVar6 + 1;
                } while (iVar13 - local_ec != iVar6);
                iVar1 = iVar1 + (iVar13 - local_ec);
              }
LAB_00102a32:
              sVar8 = fwrite(__ptr,1,sVar7,fp);
              if (sVar8 != sVar7) goto LAB_001027d0;
              iVar6 = local_ec + iVar11;
            }
            iVar1 = iVar1 + iVar6;
            goto LAB_00102a61;
          }
          if ((flags & 0x600000) == 0) {
            iVar13 = 10;
            buf = OBJ_nid2sn(iVar4);
            goto LAB_00102bb3;
          }
          if (uVar2 == 0x200000) {
            iVar13 = 0x19;
            buf = OBJ_nid2ln(iVar4);
            goto LAB_00102bb3;
          }
          if (fp != (FILE *)0x0) {
            sVar8 = fwrite(&_LC18,1,0,fp);
            if (sVar8 == 0) {
              local_ec = 0;
              goto LAB_00102a32;
            }
            goto LAB_001027d0;
          }
          iVar1 = iVar1 + iVar11;
        }
        iVar4 = do_print_ex_constprop_0(fp,uVar12,pAVar9);
        if (iVar4 < 0) goto LAB_001027d0;
        iVar1 = iVar1 + iVar4;
        bVar14 = loc == 0;
        loc = loc + -1;
        if (bVar14) break;
        if ((flags & 0x100000) != 0) goto LAB_00102940;
LAB_00102a9b:
        ne = X509_NAME_get_entry(nm,iVar3 - loc);
      } while( true );
    }
  }
LAB_00102764:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int ASN1_STRING_print_ex(BIO *out,ASN1_STRING *str,ulong flags)

{
  int iVar1;
  
  iVar1 = do_print_ex_constprop_1(out,flags,str);
  return iVar1;
}



int ASN1_STRING_print_ex_fp(FILE *fp,ASN1_STRING *str,ulong flags)

{
  int iVar1;
  
  iVar1 = do_print_ex_constprop_0(fp,flags,str);
  return iVar1;
}



int ASN1_STRING_to_UTF8(uchar **out,ASN1_STRING *in)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  ASN1_STRING *local_30;
  ASN1_STRING local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &local_28;
  if ((in == (ASN1_STRING *)0x0) || (0x1e < (uint)in->type)) {
    iVar2 = -1;
  }
  else {
    cVar1 = tag2nbyte[in->type];
    iVar2 = (int)cVar1;
    if (cVar1 != -1) {
      local_28.data = (uchar *)0x0;
      local_28.length = 0;
      local_28.flags = 0;
      iVar2 = ASN1_mbstring_copy(&local_30,in->data,in->length,
                                 CONCAT22(cVar1 >> 7,(short)cVar1) | 0x1000,0x2000);
      if (-1 < iVar2) {
        *out = local_28.data;
        iVar2 = local_28.length;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


