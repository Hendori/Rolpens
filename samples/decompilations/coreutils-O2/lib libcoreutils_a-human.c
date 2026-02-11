
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * human_readable(ulong param_1,char *param_2,uint param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  lconv *plVar12;
  ulong uVar13;
  size_t sVar14;
  ulong uVar15;
  ulong uVar16;
  void *pvVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  void *__src;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  char *pcVar25;
  ulong uVar26;
  byte *pbVar27;
  char *__s;
  char *pcVar28;
  long in_FS_OFFSET;
  bool bVar29;
  longdouble lVar30;
  longdouble lVar31;
  longdouble lVar32;
  char *local_c0;
  uint local_b8;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar19 = param_3 & 0x20;
  local_b8 = param_3 & 3;
  uVar10 = (-(uint)(uVar19 == 0) & 0xffffffe8) + 0x400;
  plVar12 = localeconv();
  pcVar21 = plVar12->decimal_point;
  uVar13 = strlen(pcVar21);
  pbVar27 = (byte *)plVar12->grouping;
  __s = plVar12->thousands_sep;
  if (0xf < uVar13 - 1) {
    uVar13 = 1;
    pcVar21 = ".";
  }
  sVar14 = strlen(__s);
  if (0x10 < sVar14) {
    __s = "";
  }
  local_c0 = param_2 + 0x287;
  uVar11 = (uint)uVar13;
  pcVar28 = local_c0;
  pcVar25 = local_c0;
  if (param_4 < param_5) {
    if ((param_4 == 0) || (uVar16 = param_5 / param_4, param_5 % param_4 != 0)) goto LAB_001000e9;
    uVar15 = param_1 / uVar16;
    uVar26 = (param_1 % uVar16) * 10;
    uVar8 = uVar26 / uVar16;
    uVar24 = (uVar26 % uVar16) * 2;
    auVar7._8_8_ = uVar24;
    auVar7._0_8_ = uVar15;
    uVar26 = uVar8 & 0xffffffff;
    uVar20 = (uint)uVar8;
    if (uVar24 < uVar16) {
      uVar22 = (uint)(uVar24 != 0);
    }
    else {
      uVar22 = (uVar16 < uVar24) + 2;
    }
    if ((param_3 & 0x10) == 0) goto LAB_001007f2;
LAB_001005eb:
    uVar20 = (uint)uVar26;
    uVar15 = auVar7._0_8_;
    uVar24 = (ulong)uVar10;
    iVar23 = 0;
    uVar16 = uVar15;
    if (uVar24 <= uVar15) {
LAB_00100771:
      uVar15 = uVar16 / uVar24;
      uVar20 = (int)uVar26 + (int)(uVar16 % uVar24) * 10;
      uVar26 = uVar20 / uVar24;
      uVar1 = ((int)uVar22 >> 1) + (uVar20 % uVar10) * 2;
      uVar20 = (uint)uVar26;
      uVar22 = uVar22 + uVar1;
      if (uVar1 < uVar10) {
        uVar22 = (uint)(uVar22 != 0);
      }
      else {
        uVar22 = (uVar10 < uVar22) + 2;
      }
      iVar23 = iVar23 + 1;
      if (uVar24 <= uVar15) goto code_r0x00100767;
      if (uVar15 < 10) {
        if (local_b8 == 1) {
          if ((uVar20 & 1) + uVar22 < 3) goto LAB_00100aee;
LAB_00100a5a:
          cVar9 = (char)uVar26 + '1';
          if (uVar20 == 9) {
            uVar16 = uVar15 + 1;
            bVar29 = uVar15 == 9;
            uVar15 = uVar16;
            if (bVar29) goto LAB_00100648;
            uVar22 = 0;
LAB_00100afb:
            if ((param_3 & 8) != 0) goto LAB_00100aa8;
            cVar9 = '0';
          }
        }
        else {
          if ((local_b8 == 0) && (uVar22 != 0)) goto LAB_00100a5a;
LAB_00100aee:
          cVar9 = (char)uVar26 + '0';
          if (uVar20 == 0) goto LAB_00100afb;
        }
        param_2[0x286] = cVar9;
        pcVar28 = param_2 + (0x286 - uVar13);
        uVar16 = uVar13 & 0xffffffff;
        if (uVar11 < 8) {
          if ((uVar13 & 4) == 0) {
            if ((uVar11 != 0) && (*pcVar28 = *pcVar21, (uVar13 & 2) != 0)) {
              *(undefined2 *)(param_2 + uVar16 + (0x284 - uVar13)) =
                   *(undefined2 *)(pcVar21 + (uVar16 - 2));
            }
          }
          else {
            *(undefined4 *)pcVar28 = *(undefined4 *)pcVar21;
            *(undefined4 *)(param_2 + uVar16 + (0x282 - uVar13)) =
                 *(undefined4 *)(pcVar21 + (uVar16 - 4));
          }
        }
        else {
          *(undefined8 *)pcVar28 = *(undefined8 *)pcVar21;
          *(undefined8 *)(param_2 + (uVar13 & 0xffffffff) + (0x27e - uVar13)) =
               *(undefined8 *)(pcVar21 + ((uVar13 & 0xffffffff) - 8));
          lVar18 = (long)pcVar28 - ((ulong)(param_2 + (0x28e - uVar13)) & 0xfffffffffffffff8);
          uVar20 = (int)lVar18 + uVar11 & 0xfffffff8;
          if (7 < uVar20) {
            uVar22 = 0;
            do {
              uVar16 = (ulong)uVar22;
              uVar22 = uVar22 + 8;
              *(undefined8 *)(((ulong)(param_2 + (0x28e - uVar13)) & 0xfffffffffffffff8) + uVar16) =
                   *(undefined8 *)(pcVar21 + (uVar16 - lVar18));
            } while (uVar22 < uVar20);
          }
        }
        uVar22 = 0;
LAB_00100aa8:
        uVar20 = 0;
        pcVar25 = pcVar28;
        if (local_b8 != 1) goto LAB_0010060f;
        goto LAB_00100648;
      }
    }
LAB_001005ff:
    if (local_b8 == 1) {
      if ((int)((((uint)uVar15 & 1) + uVar22 != 0) + uVar20) < 6) goto LAB_00100648;
LAB_00100620:
      uVar15 = uVar15 + 1;
      pcVar28 = pcVar25;
      if ((((param_3 & 0x10) == 0) || (uVar10 != uVar15)) || (iVar23 == 10)) goto LAB_00100648;
      iVar23 = iVar23 + 1;
      if ((param_3 & 8) == 0) {
        pcVar25[-1] = '0';
        pcVar25 = pcVar25 + ~uVar13;
        uVar16 = uVar13 & 0xffffffff;
        if (uVar11 < 8) {
          if ((uVar13 & 4) == 0) {
            if ((uVar11 != 0) && (*pcVar25 = *pcVar21, (uVar13 & 2) != 0)) {
              *(undefined2 *)(pcVar25 + (uVar16 - 2)) = *(undefined2 *)(pcVar21 + (uVar16 - 2));
            }
          }
          else {
            *(undefined4 *)pcVar25 = *(undefined4 *)pcVar21;
            *(undefined4 *)(pcVar25 + (uVar16 - 4)) = *(undefined4 *)(pcVar21 + (uVar16 - 4));
          }
        }
        else {
          *(undefined8 *)pcVar25 = *(undefined8 *)pcVar21;
          *(undefined8 *)(pcVar25 + ((uVar13 & 0xffffffff) - 8)) =
               *(undefined8 *)(pcVar21 + ((uVar13 & 0xffffffff) - 8));
          lVar18 = (long)pcVar25 - ((ulong)(pcVar25 + 8) & 0xfffffffffffffff8);
          uVar11 = (int)lVar18 + uVar11 & 0xfffffff8;
          if (7 < uVar11) {
            uVar20 = 0;
            do {
              uVar13 = (ulong)uVar20;
              uVar20 = uVar20 + 8;
              *(undefined8 *)(((ulong)(pcVar25 + 8) & 0xfffffffffffffff8) + uVar13) =
                   *(undefined8 *)(pcVar21 + (uVar13 - lVar18));
            } while (uVar20 < uVar11);
          }
        }
      }
      pcVar25[-1] = '1';
      pcVar28 = pcVar25 + -1;
    }
    else {
LAB_0010060f:
      pcVar25 = pcVar28;
      if ((local_b8 == 0) && (0 < (int)(uVar22 + uVar20))) goto LAB_00100620;
LAB_00100648:
      do {
        pcVar28 = pcVar28 + -1;
        *pcVar28 = (char)uVar15 + (char)(uVar15 / 10) * -10 + '0';
        bVar29 = 9 < uVar15;
        uVar15 = uVar15 / 10;
      } while (bVar29);
    }
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_5;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_4;
    if (param_4 % param_5 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = SUB168(auVar4 / auVar3,0);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_1;
      auVar7 = auVar5 * auVar6;
      uVar15 = auVar7._0_8_;
      if (auVar7._8_8_ == 0) {
        uVar22 = 0;
        uVar26 = 0;
        uVar20 = 0;
        if ((param_3 & 0x10) != 0) goto LAB_001005eb;
LAB_001007f2:
        iVar23 = -1;
        goto LAB_001005ff;
      }
    }
LAB_001000e9:
    lVar30 = (longdouble)(long)param_4;
    if ((long)param_4 < 0) {
      lVar30 = lVar30 + (longdouble)__LC3;
    }
    if ((long)param_5 < 0) {
      lVar30 = lVar30 / ((longdouble)(long)param_5 + (longdouble)__LC3);
      if ((long)param_1 < 0) goto LAB_00100360;
LAB_00100126:
      lVar30 = (longdouble)(long)param_1 * lVar30;
      if ((param_3 & 0x10) != 0) goto LAB_00100133;
LAB_00100450:
      __sprintf_chk(param_2,2,0xffffffffffffffff,"%.0Lf");
      uVar16 = strlen(param_2);
      iVar23 = -1;
      sVar14 = uVar16;
    }
    else {
      lVar30 = lVar30 / (longdouble)(long)param_5;
      if (-1 < (long)param_1) goto LAB_00100126;
LAB_00100360:
      lVar30 = ((longdouble)(long)param_1 + (longdouble)__LC3) * lVar30;
      if ((param_3 & 0x10) == 0) goto LAB_00100450;
LAB_00100133:
      iVar23 = 0;
      lVar32 = (longdouble)(int)uVar10;
      do {
        lVar31 = lVar32;
        iVar23 = iVar23 + 1;
        lVar32 = lVar31 * (longdouble)(int)uVar10;
        if (lVar30 < lVar32) break;
      } while (iVar23 != 10);
      if ((local_b8 == 1) || (__LC4 <= lVar30 / lVar31)) {
        __sprintf_chk(param_2,2,0xffffffffffffffff,"%.1Lf");
        uVar16 = strlen(param_2);
      }
      else {
        __sprintf_chk(param_2,2,0xffffffffffffffff,"%.1Lf");
        uVar16 = strlen(param_2);
      }
      if ((uVar13 + 2 + (ulong)(uVar19 == 0) < uVar16) ||
         (((param_3 & 8) != 0 && (param_2[uVar16 - 1] == '0')))) {
        __sprintf_chk(param_2,2,0xffffffffffffffff,"%.0Lf");
        uVar16 = strlen(param_2);
        sVar14 = uVar16;
      }
      else {
        sVar14 = uVar16 - (uVar13 + 1);
      }
    }
    pcVar28 = local_c0 + -uVar16;
    pcVar25 = pcVar28 + sVar14;
    memmove(pcVar28,param_2,uVar16);
  }
  if ((param_3 & 4) != 0) {
    sVar14 = strlen(__s);
    pvVar17 = (void *)__memcpy_chk(local_78,pcVar28,(long)pcVar25 - (long)pcVar28,0x29);
    uVar16 = 0xffffffffffffffff;
    uVar13 = (long)pcVar25 - (long)pcVar28;
    while( true ) {
      bVar2 = *pbVar27;
      if (bVar2 == 0) {
        if (uVar13 < uVar16) {
          uVar16 = uVar13;
        }
        uVar26 = uVar13 - uVar16;
        __src = (void *)((long)pvVar17 + uVar26);
      }
      else {
        if (bVar2 < 0x7f) {
          uVar16 = (long)(char)bVar2;
          if (uVar13 < (ulong)(long)(char)bVar2) {
            uVar16 = uVar13;
          }
          uVar26 = uVar13 - uVar16;
          __src = (void *)((long)pvVar17 + uVar26);
          uVar13 = uVar16;
        }
        else {
          uVar26 = 0;
          __src = pvVar17;
        }
        pbVar27 = pbVar27 + 1;
        uVar16 = uVar13;
      }
      pcVar28 = pcVar25 + -uVar16;
      memcpy(pcVar28,__src,uVar16);
      if (uVar26 == 0) break;
      pcVar25 = pcVar28 + -sVar14;
      memcpy(pcVar25,__s,sVar14);
      uVar13 = uVar26;
    }
  }
  pcVar21 = local_c0;
  if ((param_3 & 0x80) == 0) goto LAB_00100559;
  if (iVar23 == -1) {
    if (param_5 < 2) {
      iVar23 = 0;
      goto LAB_00100545;
    }
    iVar23 = 1;
    uVar13 = 1;
    do {
      uVar13 = uVar13 * uVar10;
      if (param_5 <= uVar13) break;
      iVar23 = iVar23 + 1;
    } while (iVar23 != 10);
    if ((param_3 & 0x40) != 0) {
      local_c0 = param_2 + 0x288;
      param_2[0x287] = ' ';
    }
LAB_0010085a:
    pcVar21 = local_c0 + 1;
    if ((uVar19 == 0) && (iVar23 == 1)) {
      *local_c0 = 'k';
      goto joined_r0x00100ad5;
    }
    *local_c0 = power_letter[iVar23];
    if ((param_3 & 0x100) == 0) goto LAB_00100559;
    if (uVar19 != 0) {
      local_c0[1] = 'i';
      pcVar21 = local_c0 + 2;
    }
  }
  else {
LAB_00100545:
    if ((param_3 & 0x100) == 0 && iVar23 == 0) goto LAB_00100559;
    if ((param_3 & 0x40) != 0) {
      local_c0 = param_2 + 0x288;
      param_2[0x287] = ' ';
    }
    pcVar21 = local_c0;
    if (iVar23 != 0) goto LAB_0010085a;
joined_r0x00100ad5:
    if ((param_3 & 0x100) == 0) goto LAB_00100559;
  }
  *pcVar21 = 'B';
  pcVar21 = pcVar21 + 1;
LAB_00100559:
  local_c0 = pcVar21;
  *local_c0 = '\0';
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00100767:
  uVar16 = uVar15;
  if (iVar23 == 10) goto LAB_001005ff;
  goto LAB_00100771;
}



undefined8 human_options(char *param_1,uint *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (char *)0x0) && (param_1 = getenv("BLOCK_SIZE"), param_1 == (char *)0x0)) &&
     (param_1 = getenv("BLOCKSIZE"), param_1 == (char *)0x0)) {
    pcVar4 = getenv("POSIXLY_CORRECT");
    *param_3 = (ulong)(-(uint)(pcVar4 == (char *)0x0) & 0x200) + 0x200;
    uVar3 = 0;
    *param_2 = 0;
  }
  else {
    uVar6 = 0;
    if (*param_1 == '\'') {
      param_1 = param_1 + 1;
      uVar6 = 4;
    }
    iVar2 = argmatch(param_1,block_size_args,&block_size_opts,4);
    if (iVar2 < 0) {
      uVar3 = xstrtoumax(param_1,&local_38,0,param_3,"eEgGkKmMpPtTyYzZ0");
      if ((int)uVar3 == 0) {
        cVar1 = *param_1;
        while (9 < (byte)(cVar1 - 0x30U)) {
          if (local_38 == param_1) {
            if (local_38[-1] == 'B') {
              uVar6 = uVar6 | 0x180;
              if (local_38[-2] != 'i') break;
            }
            else {
              uVar6 = uVar6 | 0x80;
            }
            uVar6 = uVar6 | 0x20;
            break;
          }
          pcVar4 = param_1 + 1;
          param_1 = param_1 + 1;
          cVar1 = *pcVar4;
        }
        lVar5 = *param_3;
        *param_2 = uVar6;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


