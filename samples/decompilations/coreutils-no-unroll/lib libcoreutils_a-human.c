
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * human_readable(ulong param_1,char *param_2,uint param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  char cVar9;
  lconv *plVar10;
  ulong uVar11;
  size_t sVar12;
  char *__s;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  uint uVar16;
  char *pcVar17;
  size_t sVar18;
  uint uVar19;
  void *__src;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  byte *pbVar27;
  ulong uVar28;
  uint uVar29;
  char *pcVar30;
  char *pcVar31;
  long in_FS_OFFSET;
  longdouble lVar32;
  longdouble lVar33;
  longdouble lVar34;
  longdouble lVar35;
  char *local_b8;
  undefined1 local_78 [56];
  long local_40;
  
  uVar29 = param_3 & 3;
  uVar16 = param_3 & 0x20;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar24 = (-(uint)(uVar16 == 0) & 0xffffffe8) + 0x400;
  plVar10 = localeconv();
  pcVar17 = plVar10->decimal_point;
  uVar25 = (-(ulong)(uVar16 == 0) & 0xffffffffffffffe8) + 0x400;
  uVar11 = strlen(pcVar17);
  pbVar27 = (byte *)plVar10->grouping;
  pcVar31 = plVar10->thousands_sep;
  if (0xf < uVar11 - 1) {
    uVar11 = 1;
    pcVar17 = ".";
  }
  sVar12 = strlen(pcVar31);
  __s = "";
  if (sVar12 < 0x11) {
    __s = pcVar31;
  }
  local_b8 = param_2 + 0x287;
  uVar19 = (uint)uVar11;
  pcVar31 = local_b8;
  pcVar30 = local_b8;
  if (param_4 < param_5) {
    if ((param_4 != 0) && (uVar28 = param_5 / param_4, param_5 % param_4 == 0)) {
      uVar13 = param_1 / uVar28;
      uVar26 = (param_1 % uVar28) * 10;
      uVar8 = (uVar26 % uVar28) * 2;
      uVar21 = (uint)(uVar26 / uVar28);
      if (uVar8 < uVar28) {
        uVar23 = (uint)(uVar8 != 0);
      }
      else {
        uVar23 = (uVar28 < uVar8) + 2;
      }
      uVar20 = uVar21;
      if ((param_3 & 0x10) != 0) goto LAB_00100415;
LAB_00100a24:
      uVar21 = uVar20;
      iVar1 = -1;
      uVar28 = uVar13;
      goto LAB_00100a2c;
    }
LAB_0010011b:
    lVar32 = (longdouble)(long)param_4;
    if ((long)param_4 < 0) {
      lVar32 = lVar32 + (longdouble)__LC2;
    }
    if ((long)param_5 < 0) {
      lVar32 = lVar32 / ((longdouble)(long)param_5 + (longdouble)__LC2);
      if ((long)param_1 < 0) goto LAB_00100840;
LAB_00100158:
      lVar32 = (longdouble)(long)param_1 * lVar32;
      if ((param_3 & 0x10) != 0) goto LAB_00100165;
LAB_0010077c:
      __sprintf_chk(param_2,2,0xffffffffffffffff,"%.0Lf");
      sVar12 = strlen(param_2);
      iVar1 = -1;
      sVar18 = sVar12;
    }
    else {
      lVar32 = lVar32 / (longdouble)(long)param_5;
      if (-1 < (long)param_1) goto LAB_00100158;
LAB_00100840:
      lVar32 = ((longdouble)(long)param_1 + (longdouble)__LC2) * lVar32;
      if ((param_3 & 0x10) == 0) goto LAB_0010077c;
LAB_00100165:
      lVar33 = (longdouble)(int)uVar24;
      lVar34 = lVar33 * lVar33;
      if (lVar32 < lVar34) {
        iVar1 = 1;
      }
      else {
        lVar35 = lVar33 * lVar34;
        if (lVar32 < lVar35) {
          iVar1 = 2;
          lVar33 = lVar34;
        }
        else {
          lVar34 = lVar33 * lVar35;
          if (lVar32 < lVar34) {
            iVar1 = 3;
            lVar33 = lVar35;
          }
          else {
            lVar35 = lVar33 * lVar34;
            if (lVar32 < lVar35) {
              iVar1 = 4;
              lVar33 = lVar34;
            }
            else {
              lVar34 = lVar33 * lVar35;
              if (lVar32 < lVar34) {
                iVar1 = 5;
                lVar33 = lVar35;
              }
              else {
                lVar35 = lVar33 * lVar34;
                if (lVar32 < lVar35) {
                  iVar1 = 6;
                  lVar33 = lVar34;
                }
                else {
                  lVar34 = lVar33 * lVar35;
                  if (lVar32 < lVar34) {
                    iVar1 = 7;
                    lVar33 = lVar35;
                  }
                  else {
                    lVar35 = lVar33 * lVar34;
                    if (lVar32 < lVar35) {
                      iVar1 = 8;
                      lVar33 = lVar34;
                    }
                    else {
                      lVar33 = lVar33 * lVar35;
                      iVar1 = 10;
                      if (lVar32 < lVar33) {
                        iVar1 = 9;
                        lVar33 = lVar35;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ((uVar29 == 1) || (__LC3 <= lVar32 / lVar33)) {
        __sprintf_chk(param_2,2,0xffffffffffffffff,"%.1Lf");
        sVar12 = strlen(param_2);
      }
      else {
        __sprintf_chk(param_2,2,0xffffffffffffffff,"%.1Lf");
        sVar12 = strlen(param_2);
      }
      if ((uVar11 + 2 + (ulong)(uVar16 == 0) < sVar12) ||
         (((param_3 & 8) != 0 && (param_2[sVar12 - 1] == '0')))) {
        __sprintf_chk(param_2,2,0xffffffffffffffff,"%.0Lf");
        sVar12 = strlen(param_2);
        sVar18 = sVar12;
      }
      else {
        sVar18 = sVar12 - (uVar11 + 1);
      }
    }
    pcVar31 = local_b8 + -sVar12;
    pcVar30 = pcVar31 + sVar18;
    memmove(pcVar31,param_2,sVar12);
  }
  else {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_5;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_4;
    if ((param_4 % param_5 != 0) ||
       (auVar6._8_8_ = 0, auVar6._0_8_ = SUB168(auVar5 / auVar4,0), auVar7._8_8_ = 0,
       auVar7._0_8_ = param_1, uVar13 = SUB168(auVar6 * auVar7,0), SUB168(auVar6 * auVar7,8) != 0))
    goto LAB_0010011b;
    uVar23 = 0;
    uVar21 = 0;
    uVar20 = 0;
    if ((param_3 & 0x10) == 0) goto LAB_00100a24;
LAB_00100415:
    if (uVar13 < uVar25) {
      iVar1 = 0;
      uVar28 = uVar13;
LAB_00100a2c:
      if (uVar29 != 1) goto LAB_00100a3b;
      if (5 < (int)(((ulong)((uint)uVar28 & 1) + (long)(int)uVar23 != 0) + uVar21))
      goto joined_r0x00100be4;
LAB_00100678:
      do {
        pcVar31 = pcVar31 + -1;
        *pcVar31 = (char)uVar28 + (char)(uVar28 / 10) * -10 + '0';
        bVar3 = 9 < uVar28;
        uVar28 = uVar28 / 10;
      } while (bVar3);
    }
    else {
      uVar28 = uVar13 / uVar25;
      uVar20 = uVar21 + (int)(uVar13 % uVar25) * 10;
      uVar21 = uVar20 / uVar24;
      uVar20 = ((int)uVar23 >> 1) + (uVar20 % uVar24) * 2;
      uVar22 = uVar23 + uVar20;
      if (uVar20 < uVar24) {
        uVar23 = (uint)(uVar22 != 0);
      }
      else {
        uVar23 = ~-(uint)(uVar24 < uVar22) + 3;
      }
      bVar3 = uVar20 >= uVar24 || uVar22 != 0;
      if (uVar28 < uVar25) {
        iVar1 = 1;
      }
      else {
        uVar26 = uVar28 / uVar25;
        uVar20 = uVar21 + (int)(uVar28 % uVar25) * 10;
        uVar21 = uVar20 / uVar24;
        uVar20 = ((int)uVar23 >> 1) + (uVar20 % uVar24) * 2;
        uVar22 = uVar23 + uVar20;
        if (uVar20 < uVar24) {
          uVar23 = (uint)(uVar22 != 0);
        }
        else {
          uVar23 = ~-(uint)(uVar24 < uVar22) + 3;
        }
        bVar3 = uVar20 >= uVar24 || uVar22 != 0;
        if (uVar26 < uVar25) {
          iVar1 = 2;
          uVar28 = uVar26;
        }
        else {
          uVar28 = uVar26 / uVar25;
          uVar20 = uVar21 + (int)(uVar26 % uVar25) * 10;
          uVar21 = uVar20 / uVar24;
          uVar20 = ((int)uVar23 >> 1) + (uVar20 % uVar24) * 2;
          uVar22 = uVar23 + uVar20;
          if (uVar20 < uVar24) {
            uVar23 = (uint)(uVar22 != 0);
          }
          else {
            uVar23 = ~-(uint)(uVar24 < uVar22) + 3;
          }
          bVar3 = uVar20 >= uVar24 || uVar22 != 0;
          if (uVar28 < uVar25) {
            iVar1 = 3;
          }
          else {
            uVar26 = uVar28 / uVar25;
            uVar20 = uVar21 + (int)(uVar28 % uVar25) * 10;
            uVar21 = uVar20 / uVar24;
            uVar20 = ((int)uVar23 >> 1) + (uVar20 % uVar24) * 2;
            uVar22 = uVar23 + uVar20;
            if (uVar20 < uVar24) {
              uVar23 = (uint)(uVar22 != 0);
            }
            else {
              uVar23 = ~-(uint)(uVar24 < uVar22) + 3;
            }
            bVar3 = uVar20 >= uVar24 || uVar22 != 0;
            if (uVar26 < uVar25) {
              iVar1 = 4;
              uVar28 = uVar26;
            }
            else {
              uVar28 = uVar26 / uVar25;
              uVar20 = uVar21 + (int)(uVar26 % uVar25) * 10;
              uVar21 = uVar20 / uVar24;
              uVar20 = ((int)uVar23 >> 1) + (uVar20 % uVar24) * 2;
              uVar22 = uVar23 + uVar20;
              if (uVar20 < uVar24) {
                uVar23 = (uint)(uVar22 != 0);
              }
              else {
                uVar23 = ~-(uint)(uVar24 < uVar22) + 3;
              }
              bVar3 = uVar20 >= uVar24 || uVar22 != 0;
              if (uVar28 < uVar25) {
                iVar1 = 5;
              }
              else {
                uVar20 = uVar21 + (int)(uVar28 % uVar25) * 10;
                uVar21 = uVar20 / uVar24;
                uVar22 = ((int)uVar23 >> 1) + (uVar20 % uVar24) * 2;
                uVar20 = uVar23 + uVar22;
                if (uVar22 < uVar24) {
                  uVar23 = (uint)(uVar20 != 0);
                }
                else {
                  uVar23 = ~-(uint)(uVar24 < uVar20) + 3;
                }
                bVar3 = uVar22 >= uVar24 || uVar20 != 0;
                iVar1 = 6;
                uVar28 = uVar28 / uVar25;
              }
            }
          }
        }
      }
      if (9 < uVar28) goto LAB_00100a2c;
      if (uVar29 == 1) {
        if ((int)((uVar21 & 1) + uVar23) < 3) goto LAB_00100dfa;
LAB_00100607:
        cVar9 = (char)uVar21 + '1';
        if (uVar21 != 9) goto LAB_00100616;
        uVar28 = uVar28 + 1;
        if (uVar28 != 10) {
          uVar23 = 0;
LAB_00100e05:
          if ((param_3 & 8) == 0) {
            cVar9 = '0';
            goto LAB_00100616;
          }
          goto LAB_00100658;
        }
        goto LAB_00100678;
      }
      if ((uVar29 == 0) && (bVar3)) goto LAB_00100607;
LAB_00100dfa:
      cVar9 = (char)uVar21 + '0';
      if (uVar21 == 0) goto LAB_00100e05;
LAB_00100616:
      param_2[0x286] = cVar9;
      pcVar31 = param_2 + (0x286 - uVar11);
      uVar26 = uVar11 & 0xffffffff;
      if (uVar19 < 8) {
        if ((uVar11 & 4) == 0) {
          if ((uVar19 != 0) && (*pcVar31 = *pcVar17, (uVar11 & 2) != 0)) {
            *(undefined2 *)(param_2 + uVar26 + (0x284 - uVar11)) =
                 *(undefined2 *)(pcVar17 + (uVar26 - 2));
          }
        }
        else {
          *(undefined4 *)pcVar31 = *(undefined4 *)pcVar17;
          *(undefined4 *)(param_2 + uVar26 + (0x282 - uVar11)) =
               *(undefined4 *)(pcVar17 + (uVar26 - 4));
        }
      }
      else {
        *(undefined8 *)pcVar31 = *(undefined8 *)pcVar17;
        *(undefined8 *)(param_2 + (uVar11 & 0xffffffff) + (0x27e - uVar11)) =
             *(undefined8 *)(pcVar17 + ((uVar11 & 0xffffffff) - 8));
        lVar15 = (long)pcVar31 - ((ulong)(param_2 + (0x28e - uVar11)) & 0xfffffffffffffff8);
        uVar24 = (int)lVar15 + uVar19 & 0xfffffff8;
        if (7 < uVar24) {
          uVar21 = 0;
          do {
            uVar26 = (ulong)uVar21;
            uVar21 = uVar21 + 8;
            *(undefined8 *)(((ulong)(param_2 + (0x28e - uVar11)) & 0xfffffffffffffff8) + uVar26) =
                 *(undefined8 *)(pcVar17 + (uVar26 - lVar15));
          } while (uVar21 < uVar24);
        }
      }
      uVar23 = 0;
LAB_00100658:
      uVar21 = 0;
      pcVar30 = pcVar31;
      if (uVar29 == 1) goto LAB_00100678;
LAB_00100a3b:
      pcVar30 = pcVar31;
      if ((uVar29 != 0) || ((int)(uVar21 + uVar23) < 1)) goto LAB_00100678;
joined_r0x00100be4:
      uVar28 = uVar28 + 1;
      pcVar31 = pcVar30;
      if (((param_3 & 0x10) == 0) || (uVar25 != uVar28)) goto LAB_00100678;
      iVar1 = iVar1 + 1;
      if ((param_3 & 8) == 0) {
        pcVar30[-1] = '0';
        pcVar30 = pcVar30 + ~uVar11;
        uVar28 = uVar11 & 0xffffffff;
        if (uVar19 < 8) {
          if ((uVar11 & 4) == 0) {
            if ((uVar19 != 0) && (*pcVar30 = *pcVar17, (uVar11 & 2) != 0)) {
              *(undefined2 *)(pcVar30 + (uVar28 - 2)) = *(undefined2 *)(pcVar17 + (uVar28 - 2));
            }
          }
          else {
            *(undefined4 *)pcVar30 = *(undefined4 *)pcVar17;
            *(undefined4 *)(pcVar30 + (uVar28 - 4)) = *(undefined4 *)(pcVar17 + (uVar28 - 4));
          }
        }
        else {
          *(undefined8 *)pcVar30 = *(undefined8 *)pcVar17;
          *(undefined8 *)(pcVar30 + ((uVar11 & 0xffffffff) - 8)) =
               *(undefined8 *)(pcVar17 + ((uVar11 & 0xffffffff) - 8));
          lVar15 = (long)pcVar30 - ((ulong)(pcVar30 + 8) & 0xfffffffffffffff8);
          uVar24 = (int)lVar15 + uVar19 & 0xfffffff8;
          if (7 < uVar24) {
            uVar29 = 0;
            do {
              uVar11 = (ulong)uVar29;
              uVar29 = uVar29 + 8;
              *(undefined8 *)(((ulong)(pcVar30 + 8) & 0xfffffffffffffff8) + uVar11) =
                   *(undefined8 *)(pcVar17 + (uVar11 - lVar15));
            } while (uVar29 < uVar24);
          }
        }
      }
      pcVar30[-1] = '1';
      pcVar31 = pcVar30 + -1;
    }
  }
  if ((param_3 & 4) != 0) {
    sVar12 = strlen(__s);
    pvVar14 = (void *)__memcpy_chk(local_78,pcVar31,(long)pcVar30 - (long)pcVar31,0x29);
    uVar28 = 0xffffffffffffffff;
    uVar11 = (long)pcVar30 - (long)pcVar31;
    while( true ) {
      bVar2 = *pbVar27;
      if (bVar2 == 0) {
        if (uVar11 < uVar28) {
          uVar28 = uVar11;
        }
        uVar26 = uVar11 - uVar28;
        __src = (void *)((long)pvVar14 + uVar26);
      }
      else {
        if (bVar2 < 0x7f) {
          uVar28 = (long)(char)bVar2;
          if (uVar11 < (ulong)(long)(char)bVar2) {
            uVar28 = uVar11;
          }
          uVar26 = uVar11 - uVar28;
          __src = (void *)((long)pvVar14 + uVar26);
          uVar11 = uVar28;
        }
        else {
          uVar26 = 0;
          __src = pvVar14;
        }
        pbVar27 = pbVar27 + 1;
        uVar28 = uVar11;
      }
      pcVar31 = pcVar30 + -uVar28;
      memcpy(pcVar31,__src,uVar28);
      if (uVar26 == 0) break;
      pcVar30 = pcVar31 + -sVar12;
      memcpy(pcVar30,__s,sVar12);
      uVar11 = uVar26;
    }
  }
  pcVar17 = local_b8;
  if ((param_3 & 0x80) == 0) goto LAB_0010080a;
  if (iVar1 == -1) {
    if (param_5 < 2) {
      iVar1 = 0;
      goto LAB_001007f4;
    }
    if (uVar25 < param_5) {
      if (uVar25 * uVar25 < param_5) {
        uVar11 = uVar25 * uVar25 * uVar25;
        if (uVar11 < param_5) {
          uVar11 = uVar11 * uVar25;
          if (uVar11 < param_5) {
            uVar11 = uVar11 * uVar25;
            if (uVar11 < param_5) {
              uVar11 = uVar11 * uVar25;
              if (uVar11 < param_5) {
                uVar11 = uVar11 * uVar25;
                if (uVar11 < param_5) {
                  uVar11 = uVar11 * uVar25;
                  if (uVar11 < param_5) {
                    iVar1 = 10;
                    if (param_5 <= uVar11 * uVar25) {
                      iVar1 = 9;
                    }
                  }
                  else {
                    iVar1 = 8;
                  }
                }
                else {
                  iVar1 = 7;
                }
              }
              else {
                iVar1 = 6;
              }
            }
            else {
              iVar1 = 5;
            }
          }
          else {
            iVar1 = 4;
          }
        }
        else {
          iVar1 = 3;
        }
      }
      else {
        iVar1 = 2;
      }
    }
    else {
      iVar1 = 1;
    }
    if ((param_3 & 0x40) != 0) {
      local_b8 = param_2 + 0x288;
      param_2[0x287] = ' ';
    }
LAB_00100b24:
    pcVar17 = local_b8 + 1;
    if ((uVar16 == 0) && (iVar1 == 1)) {
      *local_b8 = 'k';
      goto joined_r0x00100daa;
    }
    *local_b8 = power_letter[iVar1];
    if ((param_3 & 0x100) == 0) goto LAB_0010080a;
    if (uVar16 != 0) {
      local_b8[1] = 'i';
      pcVar17 = local_b8 + 2;
    }
  }
  else {
LAB_001007f4:
    if (iVar1 == 0 && (param_3 & 0x100) == 0) goto LAB_0010080a;
    if ((param_3 & 0x40) != 0) {
      local_b8 = param_2 + 0x288;
      param_2[0x287] = ' ';
    }
    pcVar17 = local_b8;
    if (iVar1 != 0) goto LAB_00100b24;
joined_r0x00100daa:
    if ((param_3 & 0x100) == 0) goto LAB_0010080a;
  }
  *pcVar17 = 'B';
  pcVar17 = pcVar17 + 1;
LAB_0010080a:
  local_b8 = pcVar17;
  *local_b8 = '\0';
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar31;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 human_options(char *param_1,uint *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (char *)0x0) && (param_1 = getenv("BLOCK_SIZE"), param_1 == (char *)0x0)) &&
     (param_1 = getenv("BLOCKSIZE"), param_1 == (char *)0x0)) {
    pcVar4 = getenv("POSIXLY_CORRECT");
    *param_3 = (ulong)(-(uint)(pcVar4 == (char *)0x0) & 0x200) + 0x200;
    uVar3 = 0;
    *param_2 = 0;
  }
  else {
    uVar6 = 0;
    uVar7 = 0xa0;
    if (*param_1 == '\'') {
      param_1 = param_1 + 1;
      uVar7 = 0xa4;
      uVar6 = 4;
    }
    iVar2 = argmatch(param_1,block_size_args,&block_size_opts,4);
    if (iVar2 < 0) {
      uVar3 = xstrtoumax(param_1,&local_48,0,param_3,"eEgGkKmMpPtTyYzZ0");
      if ((int)uVar3 == 0) {
        cVar1 = *param_1;
        while (uVar8 = uVar6, 9 < (byte)(cVar1 - 0x30U)) {
          if (local_48 == param_1) {
            uVar8 = uVar7;
            if (local_48[-1] == 'B') {
              if (local_48[-2] == 'i') {
                uVar8 = uVar6 | 0x1a0;
              }
              else {
                uVar8 = uVar6 | 0x180;
              }
            }
            break;
          }
          pcVar4 = param_1 + 1;
          param_1 = param_1 + 1;
          cVar1 = *pcVar4;
        }
        lVar5 = *param_3;
        *param_2 = uVar8;
      }
      else {
        *param_2 = 0;
        lVar5 = *param_3;
      }
      if (lVar5 == 0) {
        pcVar4 = getenv("POSIXLY_CORRECT");
        *param_3 = (ulong)(-(uint)(pcVar4 == (char *)0x0) & 0x200) + 0x200;
        uVar3 = 4;
      }
    }
    else {
      *param_3 = 1;
      uVar3 = 0;
      *param_2 = uVar6 | *(uint *)((long)&block_size_opts + (long)iVar2 * 4);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


