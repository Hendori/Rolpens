
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
simple_strtod_int(char *param_1,undefined8 *param_2,longdouble *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longdouble lVar6;
  
  bVar5 = *param_1 == '-';
  if (bVar5) {
    param_1 = param_1 + 1;
  }
  *(bool *)param_4 = bVar5;
  *param_2 = param_1;
  iVar3 = (int)*param_1;
  if (iVar3 - 0x30U < 10) {
    lVar6 = (longdouble)0;
    iVar4 = 0;
    uVar2 = 0;
    do {
      param_1 = param_1 + 1;
      cVar1 = (char)iVar3 + -0x30;
      if (((longdouble)0 == lVar6) && (cVar1 == '\0')) {
        if (0x12 < iVar4) {
          uVar2 = 1;
        }
      }
      else {
        iVar4 = iVar4 + 1;
        if (0x12 < iVar4) {
          if (iVar4 == 0x22) {
            return 2;
          }
          uVar2 = 1;
        }
      }
      *param_2 = param_1;
      iVar3 = (int)*param_1;
      lVar6 = (longdouble)(short)cVar1 + lVar6 * (longdouble)__LC1;
    } while (iVar3 - 0x30U < 10);
  }
  else {
    iVar3 = strncmp(param_1,decimal_point,(long)decimal_point_length);
    if (iVar3 != 0) {
      return 3;
    }
    lVar6 = (longdouble)0;
    uVar2 = 0;
  }
  if (bVar5) {
    *param_3 = -lVar6;
  }
  else {
    *param_3 = lVar6;
  }
  return uVar2;
}



long unit_to_umax(char *param_1)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  char *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(param_1);
  local_40 = (char *)0x0;
  if ((sVar2 == 0) || ((int)param_1[sVar2 - 1] - 0x30U < 10)) {
    puVar7 = (undefined1 *)0x1042e9;
    pcVar4 = param_1;
    pcVar8 = (char *)0x0;
  }
  else {
    lVar3 = xmalloc(sVar2 + 2);
    pcVar9 = (char *)((sVar2 - 1) + lVar3);
    local_40 = pcVar9;
    pcVar4 = (char *)__memcpy_chk(lVar3,param_1,sVar2,sVar2 + 2);
    pcVar8 = pcVar4;
    if ((*pcVar9 == 'i') && ((sVar2 != 1 && (9 < (int)pcVar9[-1] - 0x30U)))) {
      *pcVar9 = '\0';
      puVar7 = (undefined1 *)0x1042e9;
    }
    else {
      pcVar9 = pcVar4 + sVar2;
      puVar7 = zero_and_valid_suffixes;
      local_40 = pcVar9 + 1;
      pcVar9[0] = 'B';
      pcVar9[1] = '\0';
    }
  }
  iVar1 = xstrtoumax(pcVar4,&local_40,10,&local_38,puVar7);
  if (((iVar1 == 0) && (*local_40 == '\0')) && (local_38 != 0)) {
    free(pcVar8);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_38;
    }
  }
  else {
    free(pcVar8);
    uVar5 = quote(param_1);
    uVar6 = dcgettext(0,"invalid unit size: %s",5);
    error(1,0,uVar6,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 process_field(byte *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  unkbyte10 Var4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong *puVar11;
  size_t sVar12;
  size_t sVar13;
  ushort **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  long lVar22;
  ulong extraout_RDX;
  ulong uVar23;
  int *piVar24;
  char **ppcVar25;
  byte bVar26;
  ulong uVar27;
  undefined *puVar28;
  char *pcVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  long in_FS_OFFSET;
  bool bVar32;
  ushort in_FPUControlWord;
  longdouble lVar33;
  longdouble lVar34;
  longdouble lVar35;
  longdouble lVar36;
  char *pcStack_108;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  int local_f8;
  undefined4 uStack_f4;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined1 local_e8 [24];
  undefined1 *local_d0;
  longdouble lStack_c8;
  ulong local_b8;
  uint uStack_b0;
  ushort local_ac;
  ushort local_aa;
  char local_9a;
  char local_99;
  byte *local_98;
  byte *local_90;
  char *local_88;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  longdouble local_78;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_66 [4];
  undefined8 local_40;
  
  pcVar29 = suffix;
  bVar26 = dev_debug;
  piVar24 = &local_f8;
  ppcVar25 = (char **)&local_f8;
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar11 = _frp;
  if (_frp == (ulong *)0x0) {
    if (param_2 == 1) {
LAB_0010032e:
      if (suffix != (char *)0x0) {
        uStack_100 = 0x349;
        uStack_fe = 0x10;
        sVar12 = strlen((char *)param_1);
        uStack_100 = 0x354;
        uStack_fe = 0x10;
        sVar13 = strlen(pcVar29);
        if (sVar13 < sVar12) {
          uStack_100 = 0x36a;
          uStack_fe = 0x10;
          iVar6 = strcmp(pcVar29,(char *)(param_1 + (sVar12 - sVar13)));
          if (iVar6 == 0) {
            param_1[sVar12 - sVar13] = 0;
            if (bVar26 != 0) {
              uStack_100 = 0x15b3;
              uStack_fe = 0x10;
              quote(pcVar29);
              uStack_100 = 0x15d0;
              uStack_fe = 0x10;
              __fprintf_chk(_stderr,2,"trimming suffix %s\n");
              bVar26 = dev_debug;
            }
          }
          else if (bVar26 != 0) {
            uStack_100 = 0x133f;
            uStack_fe = 0x10;
            fwrite("no valid suffix found\n",1,0x16,_stderr);
            bVar26 = dev_debug;
          }
        }
      }
      bVar2 = *param_1;
      pbVar30 = param_1;
      if (bVar2 != 0) {
        uStack_100 = 0x392;
        uStack_fe = 0x10;
        ppuVar14 = __ctype_b_loc();
        do {
          if (((*ppuVar14)[bVar2] & 1) == 0) break;
          bVar2 = pbVar30[1];
          pbVar30 = pbVar30 + 1;
        } while (bVar2 != 0);
      }
      if (auto_padding == 0) {
LAB_00100598:
        local_f8 = scale_from;
        local_98 = (byte *)0x0;
        local_88 = SUB108((longdouble)0,0);
        uStack_80 = (undefined2)((unkuint10)(longdouble)0 >> 0x40);
        iVar6 = (-(uint)(scale_from - 3U < 2) & 0x18) + 1000;
        if (bVar26 != 0) {
          uStack_100 = 0x5de;
          uStack_fe = 0x10;
          uVar15 = quote_n(1,decimal_point);
          uStack_100 = 0x5eb;
          uStack_fe = 0x10;
          uVar16 = quote_n(0,pbVar30);
          uStack_100 = 0x611;
          uStack_fe = 0x10;
          __fprintf_chk(_stderr,2,
                        "simple_strtod_human:\n  input string: %s\n  locale decimal-point: %s\n  MAX_UNSCALED_DIGITS: %d\n"
                        ,uVar16,uVar15,0x12);
        }
      }
      else {
        if ((param_1 < pbVar30) || (sVar12 = 0, 1 < (long)param_2)) {
          uStack_100 = 0x7f8;
          uStack_fe = 0x10;
          sVar12 = strlen((char *)param_1);
        }
        padding_width = sVar12;
        if (bVar26 != 0) {
          uStack_100 = 0x591;
          uStack_fe = 0x10;
          __fprintf_chk(_stderr,2,"setting Auto-Padding to %jd characters\n");
          bVar26 = dev_debug;
          goto LAB_00100598;
        }
        local_88 = SUB108((longdouble)0,0);
        uStack_80 = (undefined2)((unkuint10)(longdouble)0 >> 0x40);
        local_f8 = scale_from;
        iVar6 = (-(uint)(scale_from - 3U < 2) & 0x18) + 1000;
      }
      uStack_100 = 0x422;
      uStack_fe = 0x10;
      uVar7 = simple_strtod_int(pbVar30,&local_98,&local_88);
      pbVar18 = local_98;
      uVar9 = uVar7;
      if (uVar7 < 2) {
        sVar12 = (size_t)decimal_point_length;
        uStack_100 = 1099;
        uStack_fe = 0x10;
        iVar8 = strncmp((char *)local_98,decimal_point,sVar12);
        local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
        if (iVar8 == 0) {
          local_78 = (longdouble)0;
          pbVar18 = pbVar18 + sVar12;
          uStack_100 = 0x76d;
          uStack_fe = 0x10;
          local_98 = pbVar18;
          uVar9 = simple_strtod_int(pbVar18,&local_90,&local_78);
          if (1 < uVar9) goto LAB_001012f0;
          if (uVar9 == 1) {
            uVar7 = 1;
          }
          if (local_99 != '\0') goto switchD_00101309_caseD_3;
          local_98 = local_90;
          local_e8._0_8_ = (long)local_90 - (long)pbVar18;
          lVar36 = local_78;
          if ((int)local_90 != (int)pbVar18) {
            iVar8 = (int)((long)local_90 - (long)pbVar18) + -1;
            if (iVar8 == 0) {
              lVar36 = local_78 / (longdouble)__LC1;
            }
            else {
              lVar36 = (longdouble)__LC1;
              do {
                lVar36 = lVar36 * (longdouble)__LC1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
              lVar36 = local_78 / lVar36;
            }
          }
          if (local_9a == '\0') {
            lVar36 = (longdouble)CONCAT28(uStack_80,local_88) + lVar36;
          }
          else {
            lVar36 = (longdouble)CONCAT28(uStack_80,local_88) - lVar36;
          }
          local_88 = SUB108(lVar36,0);
          uStack_80 = (undefined2)((unkuint10)lVar36 >> 0x40);
          pbVar18 = local_90;
        }
        if (dev_debug != 0) {
          uStack_100 = uStack_80;
          uStack_fe = uStack_7e;
          pcStack_108 = local_88;
          __fprintf_chk(_stderr,2,"  parsed numeric value: %Lf\n  input precision = %d\n");
        }
        bVar26 = *pbVar18;
        if (bVar26 == 0) {
          uVar23 = (ulong)dev_debug;
          iVar8 = 0;
          lVar36 = (longdouble)1;
LAB_00100483:
          if ((char)uVar23 == '\0') {
LAB_0010048b:
            lVar36 = (longdouble)CONCAT28(uStack_80,local_88) * lVar36;
            local_f8 = SUB104(lVar36,0);
            uStack_f4 = (undefined4)((unkuint10)lVar36 >> 0x20);
            uStack_f0 = (undefined2)((unkuint10)lVar36 >> 0x40);
            local_88 = SUB108(lVar36,0);
            uStack_80 = uStack_f0;
          }
          else {
            pcStack_108 = SUB108(lVar36,0);
            uStack_100 = (undefined2)((unkuint10)lVar36 >> 0x40);
            local_f8 = SUB104(lVar36,0);
            uStack_f4 = (undefined4)((unkuint10)lVar36 >> 0x20);
            uStack_f0 = uStack_100;
            __fprintf_chk(_stderr,2,"  suffix power=%d^%d = %Lf\n",iVar6,iVar8);
            lVar36 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) *
                     (longdouble)CONCAT28(uStack_80,local_88);
            local_f8 = SUB104(lVar36,0);
            uStack_f4 = (undefined4)((unkuint10)lVar36 >> 0x20);
            uStack_f0 = (undefined2)((unkuint10)lVar36 >> 0x40);
            local_88 = SUB108(lVar36,0);
            uVar23 = CONCAT62(uStack_fe,uStack_100);
            uStack_80 = uStack_f0;
            if (dev_debug != 0) {
              pcStack_108 = local_88;
              uStack_100 = uStack_f0;
              __fprintf_chk(_stderr,2,"  returning value: %Lf (%LG)\n");
              uVar23 = extraout_RDX;
            }
          }
          if (local_98 != (byte *)0x0) goto LAB_001004ae;
        }
        else {
          uStack_100 = 0x625;
          uStack_fe = 0x10;
          ppuVar14 = __ctype_b_loc();
          bVar2 = (byte)(*ppuVar14)[bVar26];
          while ((bVar2 & 1) != 0) {
            pbVar18 = pbVar18 + 1;
            bVar26 = *pbVar18;
            bVar2 = (byte)(*ppuVar14)[bVar26];
          }
          uStack_100 = 0x663;
          uStack_fe = 0x10;
          pcVar29 = strchr(zero_and_valid_suffixes + 1,(int)(char)bVar26);
          if (pcVar29 == (char *)0x0) {
            uVar15 = FUN_001015f8();
            return uVar15;
          }
          if (local_f8 == 0) {
            uVar15 = FUN_001015f8();
            return uVar15;
          }
          iVar8 = 0;
          if ((byte)(bVar26 + 0xbb) < 0x27) {
            iVar8 = (int)(char)CSWTCH_321[(byte)(bVar26 + 0xbb)];
          }
          local_98 = pbVar18 + 1;
          if (local_f8 != 1) {
            if (local_f8 == 4) {
              if (pbVar18[1] != 0x69) {
                uVar15 = FUN_001015f8();
                return uVar15;
              }
              local_98 = pbVar18 + 2;
            }
            lVar36 = (longdouble)iVar6;
            uVar9 = (uint)dev_debug;
LAB_001006cb:
            uVar23 = (ulong)uVar9;
            if (iVar8 == 0) {
              local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
              lVar36 = (longdouble)1;
            }
            else {
              uVar9 = iVar8 - 1;
              if (uVar9 == 0) {
                local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
                iVar8 = 1;
              }
              else {
LAB_001006e2:
                lVar33 = lVar36;
                uVar5 = uVar9 - 1;
                if ((uVar9 & 1) == 0) goto LAB_001006f8;
                while (uVar9 = uVar5, lVar33 = lVar33 * lVar36, uVar9 != 0) {
LAB_001006f8:
                  lVar33 = lVar33 * lVar36;
                  uVar5 = uVar9 - 2;
                }
                local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
                lVar36 = lVar33;
              }
            }
            goto LAB_00100483;
          }
          uVar9 = (uint)dev_debug;
          uVar23 = (ulong)uVar9;
          if (pbVar18[1] != 0x69) {
            lVar36 = (longdouble)iVar6;
            goto LAB_001006cb;
          }
          local_98 = pbVar18 + 2;
          if (dev_debug != 0) {
            iVar6 = 0x400;
            uStack_100 = 0x1a38;
            uStack_fe = 0x10;
            local_f8 = iVar8;
            __fprintf_chk(_stderr,2,"  Auto-scaling, found \'i\', switching to base %d\n");
            uVar9 = (uint)dev_debug;
            lVar36 = (longdouble)__LC6;
            iVar8 = local_f8;
            goto LAB_001006cb;
          }
          if (iVar8 != 0) {
            uVar9 = iVar8 - 1;
            if (uVar9 != 0) {
              lVar36 = (longdouble)__LC6;
              iVar6 = 0x400;
              goto LAB_001006e2;
            }
            lVar36 = (longdouble)__LC6;
            local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
            goto LAB_0010048b;
          }
          uVar23 = 0;
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          local_f8 = (int)local_88;
          uStack_f4 = (undefined4)((ulong)local_88 >> 0x20);
          uStack_f0 = uStack_80;
LAB_001004ae:
          uVar3 = conv_exit_code;
          if (*local_98 != 0) {
            if (inval_style != 3) {
              uStack_100 = 0x4d0;
              uStack_fe = 0x10;
              uVar15 = quote_n(1);
              uStack_100 = 0x4dd;
              uStack_fe = 0x10;
              uVar16 = quote_n(0,pbVar30);
              uStack_100 = 0x4f3;
              uStack_fe = 0x10;
              uVar17 = dcgettext(0,"invalid suffix in input %s: %s",5);
              uStack_100 = 0x507;
              uStack_fe = 0x10;
              error(uVar3,0,uVar17,uVar16,uVar15);
            }
            uVar7 = 5;
            goto LAB_00100510;
          }
        }
        if ((uVar7 == 1) && (debug != '\0')) {
          uStack_100 = 0x81e;
          uStack_fe = 0x10;
          quote(pbVar30,local_98,uVar23);
          uStack_100 = 0x834;
          uStack_fe = 0x10;
          uVar15 = dcgettext(0,"large input value %s: possible precision loss",5);
          uStack_100 = 0x845;
          uStack_fe = 0x10;
          error(0,0,uVar15);
        }
      }
      else {
LAB_001012f0:
        uVar7 = uVar9;
        uVar3 = conv_exit_code;
        switch(uVar7) {
        default:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar15 = FUN_001015f8();
          return uVar15;
        case 2:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          if (inval_style == 3) {
            local_f8 = (int)local_88;
            uStack_f4 = (undefined4)((ulong)local_88 >> 0x20);
            uStack_f0 = uStack_80;
          }
          else {
            uStack_100 = 0x1614;
            uStack_fe = 0x10;
            quote(pbVar30);
            uStack_100 = 0x1626;
            uStack_fe = 0x10;
            uVar15 = dcgettext(0,"value too large to be converted: %s",5);
            uStack_100 = 0x1638;
            uStack_fe = 0x10;
            error(uVar3,0,uVar15);
            local_f8 = (int)local_88;
            uStack_f4 = (undefined4)((ulong)local_88 >> 0x20);
            uStack_f0 = uStack_80;
          }
          break;
        case 3:
switchD_00101309_caseD_3:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar15 = FUN_001015f8();
          return uVar15;
        case 4:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar15 = FUN_001015f8();
          return uVar15;
        case 5:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar15 = FUN_001015f8();
          return uVar15;
        case 6:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar15 = FUN_001015f8();
          return uVar15;
        }
      }
LAB_00100510:
      uVar3 = conv_exit_code;
      if ((from_unit_size != (undefined1 *)0x1) || (to_unit_size != 1)) {
        local_d0 = from_unit_size;
        lVar36 = (longdouble)(long)from_unit_size;
        if ((long)from_unit_size < 0) {
          lVar36 = lVar36 + (longdouble)__LC43;
        }
        lVar33 = (longdouble)to_unit_size;
        if (to_unit_size < 0) {
          lVar33 = lVar33 + (longdouble)__LC43;
        }
        lVar33 = ((longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) * lVar36) / lVar33;
        local_f8 = SUB104(lVar33,0);
        uStack_f4 = (undefined4)((unkuint10)lVar33 >> 0x20);
        uStack_f0 = (undefined2)((unkuint10)lVar33 >> 0x40);
      }
      if (uVar7 < 2) {
        uVar23 = user_precision;
        if (user_precision == 0xffffffffffffffff) {
          uVar23 = local_e8._0_8_;
        }
        local_e8._0_8_ = uVar23;
        Var4 = local_e8._0_10_;
        if (((longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) < __LC44) ||
           (__LC45 < (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)))) {
          if ((uVar23 < 0x13) || (scale_to != 0)) {
LAB_0010089f:
            local_d0 = &local_68;
            local_e8._0_4_ = (undefined4)uVar23;
            uVar3 = local_e8._0_4_;
            local_e8._0_10_ = Var4;
            do {
              iVar6 = scale_to;
              pcVar29 = padding_buffer;
              lVar22 = padding_buffer_size;
              local_68 = 0x25;
              uVar27 = (ulong)round_style;
              if (grouping != 0) {
                local_67 = 0x27;
                uVar15 = 0x18;
                puVar31 = local_66;
                if (zero_padding_width != 0) goto LAB_00100d3d;
LAB_0010090a:
                iVar8 = grouping;
                if (dev_debug != 0) goto LAB_00100d72;
LAB_0010091a:
                if (iVar6 == 0) goto LAB_00100da9;
LAB_00100923:
                if (iVar6 - 3U < 2) {
                  local_b8 = CONCAT44(local_b8._4_4_,0x400);
                  local_e8._0_8_ = _LC16;
                }
                else {
                  local_b8 = CONCAT44(local_b8._4_4_,1000);
                  local_e8._0_8_ = _LC17;
                }
                lVar36 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8));
                if (lVar36 < __LC44) {
                  lVar36 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8));
                  uVar20 = 0;
                  if (dev_debug != 0) goto LAB_00100ff8;
LAB_0010099e:
                  if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
                  uVar19 = (ulong)((int)uVar20 * 3);
LAB_001009b4:
                  if ((long)user_precision <= (long)uVar19) {
                    uVar19 = user_precision;
                  }
                  iVar8 = (int)uVar19;
                  if (iVar8 == 0) {
LAB_001011a2:
                    local_ac = in_FPUControlWord | 0xc00;
                    local_b8 = (ulong)ROUND(lVar36 / __LC51);
                    lVar33 = (longdouble)(long)local_b8 * __LC51;
                    lVar36 = lVar36 - lVar33;
                    local_aa = in_FPUControlWord;
                    switch(uVar27) {
                    case 0:
                      iVar8 = 0;
                      goto LAB_00100a60;
                    case 1:
                      iVar8 = 0;
                      break;
                    case 2:
                      iVar8 = 0;
LAB_00100a40:
                      if ((longdouble)0 <= lVar36) goto LAB_00100a60;
                      break;
                    case 3:
LAB_0010120e:
                      local_b8 = (ulong)ROUND(lVar36);
                      lVar35 = (longdouble)(long)local_b8 + lVar33;
                      goto LAB_00100abb;
                    case 4:
                      iVar8 = 0;
LAB_00100bc8:
                      if (lVar36 < (longdouble)0) {
                        local_b8 = (ulong)ROUND(lVar36 - (longdouble)__LC52);
                        lVar35 = (longdouble)(long)local_b8;
                      }
                      else {
LAB_00100bd4:
                        local_b8 = (ulong)ROUND(lVar36 + (longdouble)__LC52);
                        lVar35 = (longdouble)(long)local_b8;
                      }
                      goto LAB_00100a90;
                    default:
                      uVar15 = FUN_00104126();
                      return uVar15;
                    }
LAB_00100b80:
                    lVar1 = (long)ROUND(-lVar36);
                    local_b8 = -(lVar1 + (ulong)((longdouble)lVar1 < -lVar36));
                    lVar35 = (longdouble)(long)local_b8;
                    goto LAB_00100a90;
                  }
                  iVar10 = iVar8 + -1;
                  if (iVar10 == 0) {
                    lVar34 = (longdouble)__LC1;
LAB_0010106c:
                    local_ac = in_FPUControlWord | 0xc00;
                    local_b8 = (ulong)ROUND((lVar36 * lVar34) / __LC51);
                    lVar33 = (longdouble)(long)local_b8 * __LC51;
                    lVar36 = lVar36 * lVar34 - lVar33;
                    iVar8 = 1;
                    local_aa = in_FPUControlWord;
                    switch(uVar27) {
                    case 0:
                      iVar8 = 1;
                      goto LAB_00100a60;
                    case 1:
                      iVar8 = 1;
                      break;
                    case 2:
                      iVar8 = 1;
                      goto LAB_00100a40;
                    case 3:
                      goto LAB_00100bf5;
                    case 4:
                      iVar8 = 1;
                      goto LAB_00100bc8;
                    default:
                      uVar15 = FUN_00104126();
                      return uVar15;
                    }
                    goto LAB_00100b80;
                  }
                  lVar34 = (longdouble)__LC1;
                  lVar35 = lVar34;
                  do {
                    lVar35 = lVar35 * lVar34;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                  local_ac = in_FPUControlWord | 0xc00;
                  local_b8 = (ulong)ROUND((lVar35 * lVar36) / __LC51);
                  lVar33 = (longdouble)(long)local_b8 * __LC51;
                  lVar36 = lVar35 * lVar36 - lVar33;
                  local_aa = in_FPUControlWord;
                  switch(uVar27) {
                  case 0:
                    goto LAB_00100a60;
                  case 1:
                    goto LAB_00100b80;
                  case 2:
                    goto LAB_00100a40;
                  case 3:
LAB_00100bf5:
                    local_b8 = (ulong)ROUND(lVar36);
                    lVar35 = (longdouble)(long)local_b8 + lVar33;
                    break;
                  case 4:
                    goto LAB_00100bc8;
                  default:
                    uVar15 = FUN_00100aa9();
                    return uVar15;
                  }
LAB_00100a9d:
                  iVar8 = iVar8 + -1;
                  lVar36 = lVar34;
                  if (iVar8 == 0) {
                    lVar35 = lVar35 / lVar34;
                  }
                  else {
                    do {
                      lVar36 = lVar36 * lVar34;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                    lVar35 = lVar35 / lVar36;
                  }
                }
                else {
                  if (lVar36 <= __LC45) {
                    uVar20 = 0;
                    while( true ) {
                      lVar33 = -lVar36;
                      if ((longdouble)0 <= lVar36) {
                        lVar33 = lVar36;
                      }
                      if (lVar33 < (longdouble)(int)local_b8) break;
                      lVar36 = lVar36 / (longdouble)(int)local_b8;
                      uVar20 = (ulong)((int)uVar20 + 1);
                    }
                    if (dev_debug == 0) goto LAB_0010099e;
LAB_00100ff8:
                    pcStack_108 = SUB108(lVar36,0);
                    uStack_100 = (undefined2)((unkuint10)lVar36 >> 0x40);
                    local_b8 = CONCAT44(local_b8._4_4_,(int)uVar20);
                    lStack_c8 = lVar36;
                    __fprintf_chk(local_e8._0_8_,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
                    uVar20 = local_b8 & 0xffffffff;
                    lVar36 = lStack_c8;
                    if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
                    lVar33 = -lVar36;
                    if ((longdouble)0 <= lVar36) {
                      lVar33 = lVar36;
                    }
                    lVar34 = (longdouble)__LC1;
                    if (lVar33 < lVar34) goto LAB_0010106c;
                    goto LAB_001011a2;
                  }
                  if (dev_debug != 0) {
                    lVar36 = (longdouble)__LC18;
                    uVar20 = 0;
                    goto LAB_00100ff8;
                  }
                  if (user_precision != 0xffffffffffffffff) {
                    lVar36 = (longdouble)__LC18;
                    uVar19 = 0;
                    uVar20 = 0;
                    goto LAB_001009b4;
                  }
                  lVar33 = __LC19;
                  local_aa = in_FPUControlWord;
                  switch(uVar27) {
                  case 0:
                    lVar36 = (longdouble)__LC18;
                    uVar20 = 0;
                    iVar8 = 0;
                    local_ac = in_FPUControlWord | 0xc00;
                    break;
                  case 1:
                    lVar36 = (longdouble)__LC18;
                    uVar20 = 0;
                    iVar8 = 0;
                    local_ac = in_FPUControlWord | 0xc00;
                    goto LAB_00100b80;
                  case 2:
                    iVar8 = 0;
                    uVar20 = 0;
                    lVar36 = (longdouble)__LC18;
                    local_ac = in_FPUControlWord | 0xc00;
                    break;
                  case 3:
                    lVar36 = (longdouble)__LC18;
                    uVar20 = 0;
                    local_ac = in_FPUControlWord | 0xc00;
                    goto LAB_0010120e;
                  case 4:
                    lVar36 = (longdouble)__LC18;
                    iVar8 = 0;
                    uVar20 = 0;
                    local_ac = in_FPUControlWord | 0xc00;
                    goto LAB_00100bd4;
                  default:
                    uVar20 = 0;
                    uVar19 = 0;
                    lVar35 = (longdouble)0;
                    goto LAB_00100b05;
                  }
LAB_00100a60:
                  local_b8 = (ulong)ROUND(lVar36);
                  lVar35 = (longdouble)(long)local_b8;
                  if (lVar35 < lVar36) {
                    local_b8 = local_b8 + 1;
                    lVar35 = (longdouble)(long)local_b8;
                  }
LAB_00100a90:
                  lVar35 = lVar35 + lVar33;
                  if (iVar8 != 0) {
                    lVar34 = (longdouble)__LC1;
                    goto LAB_00100a9d;
                  }
                }
LAB_00100abb:
                lVar36 = (longdouble)(double)local_e8._0_8_;
                if (lVar35 < (longdouble)0) {
                  lVar33 = -lVar35;
                  if (lVar36 <= lVar33) goto LAB_001010d4;
LAB_001010fa:
                  if (lVar33 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
                  uVar19 = 0;
                  uVar9 = 0;
                }
                else {
                  if (lVar36 <= lVar35) {
LAB_001010d4:
                    lVar35 = lVar35 / lVar36;
                    uVar20 = (ulong)((int)uVar20 + 1);
                    lVar36 = (longdouble)0;
                    if (!NAN(lVar35) && !NAN(lVar36)) {
                      if (lVar35 == lVar36) goto LAB_00101112;
                      if (lVar35 <= lVar36) {
                        lVar33 = -lVar35;
                        goto LAB_001010fa;
                      }
                    }
                  }
                  else if (lVar35 == (longdouble)0) goto LAB_00101112;
                  if ((longdouble)__LC1 <= lVar35) goto LAB_00101112;
LAB_00100af3:
                  bVar32 = (int)uVar20 != 0;
                  uVar19 = (ulong)bVar32;
                  uVar9 = (uint)bVar32;
                }
                in_FPUControlWord = local_aa;
                if (dev_debug != 0) {
                  pcStack_108 = SUB108(lVar35,0);
                  uStack_100 = (undefined2)((unkuint10)lVar35 >> 0x40);
                  local_b8 = CONCAT44(local_b8._4_4_,(int)uVar20);
                  lStack_c8 = lVar35;
                  uStack_b0 = uVar9;
                  __fprintf_chk(local_e8._0_8_,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n"
                               );
                  uVar20 = local_b8 & 0xffffffff;
                  uVar19 = (ulong)uStack_b0;
                  in_FPUControlWord = local_aa;
                  lVar35 = lStack_c8;
                }
LAB_00100b05:
                puVar28 = &DAT_001025c3;
                *puVar31 = 0x73257325664c2a2e;
                if (user_precision != 0xffffffffffffffff) {
                  uVar19 = user_precision & 0xffffffff;
                }
                *(undefined4 *)((long)puVar31 + 7) = 0x732573;
                pcVar21 = suffix;
                if (suffix == (char *)0x0) {
                  pcVar21 = "";
                }
                uVar9 = (uint)uVar20;
                if (iVar6 != 4) {
                  if (uVar9 == 1) {
                    uVar15 = FUN_00100c18();
                    return uVar15;
                  }
LAB_00100b51:
                  if (10 < uVar9) {
                    uVar15 = FUN_00100c18(user_precision,puVar28);
                    return uVar15;
                  }
                  uVar15 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar20]))();
                  return uVar15;
                }
                if (uVar9 != 0) {
                  puVar28 = &_LC20;
                  goto LAB_00100b51;
                }
                pcStack_108 = pcVar21;
                iVar6 = __snprintf_chk(pcVar29,lVar22,2,0xffffffffffffffff,local_d0,uVar19,
                                       SUB108(lVar35,0),(short)((unkuint10)lVar35 >> 0x40),&_LC15,
                                       0x25c3);
                goto LAB_00100c48;
              }
              uVar15 = 0x19;
              puVar31 = (undefined8 *)&local_67;
              if (zero_padding_width == 0) goto LAB_0010090a;
LAB_00100d3d:
              local_e8._0_4_ = grouping;
              uStack_100 = 0xd58;
              uStack_fe = 0x10;
              iVar8 = __sprintf_chk(puVar31,2,uVar15);
              puVar31 = (undefined8 *)((long)puVar31 + (long)iVar8);
              iVar8 = local_e8._0_4_;
              if (dev_debug == 0) goto LAB_0010091a;
LAB_00100d72:
              local_e8._0_4_ = iVar8;
              uStack_100 = 0xd94;
              uStack_fe = 0x10;
              fwrite("double_to_human:\n",1,0x11,_stderr);
              iVar8 = local_e8._0_4_;
              if (iVar6 != 0) goto LAB_00100923;
LAB_00100da9:
              if (uVar3 == 0) {
                lVar36 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8));
                local_e8._0_8_ = (undefined8)ROUND(lVar36 / __LC51);
                lVar33 = (longdouble)(long)local_e8._0_8_ * __LC51;
                lVar36 = lVar36 - lVar33;
                switch(uVar27) {
                case 0:
                  goto switchD_001012e1_caseD_0;
                case 1:
                  goto switchD_001012e1_caseD_1;
                case 2:
                  goto LAB_00100e38;
                case 3:
                  local_e8._0_8_ = (long)ROUND(lVar36);
                  lVar34 = (longdouble)(long)ROUND(lVar36) + lVar33;
                  break;
                case 4:
                  goto LAB_00100fa0;
                default:
                  lVar34 = (longdouble)0;
                }
                goto LAB_00100eab;
              }
              iVar6 = uVar3 + -1;
              lVar34 = (longdouble)__LC1;
              lVar36 = lVar34;
              if (iVar6 == 0) {
                lVar34 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) * lVar34;
                local_ac = in_FPUControlWord | 0xc00;
                local_e8._0_8_ = (undefined8)ROUND(lVar34 / __LC51);
                lVar33 = (longdouble)(long)local_e8._0_8_ * __LC51;
                lVar36 = lVar34 - lVar33;
                switch(uVar27) {
                case 0:
                  break;
                case 1:
                  goto switchD_001012e1_caseD_1;
                case 2:
                  goto LAB_00100e38;
                case 3:
                  local_e8._0_8_ = (long)ROUND(lVar36);
                  uVar15 = FUN_00100e8f();
                  return uVar15;
                case 4:
                  goto LAB_00100fa0;
                default:
                  uVar15 = FUN_0010186b();
                  return uVar15;
                }
                goto switchD_001012e1_caseD_0;
              }
              do {
                lVar36 = lVar36 * lVar34;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              lVar36 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) * lVar36;
              local_ac = in_FPUControlWord | 0xc00;
              local_e8._0_8_ = (undefined8)ROUND(lVar36 / __LC51);
              lVar33 = (longdouble)(long)local_e8._0_8_ * __LC51;
              lVar36 = lVar36 - lVar33;
              switch(uVar27) {
              case 0:
                goto switchD_001012e1_caseD_0;
              case 1:
switchD_001012e1_caseD_1:
                lVar1 = (long)ROUND(-lVar36);
                local_e8._0_8_ = -(lVar1 + (ulong)((longdouble)lVar1 < -lVar36));
                lVar34 = (longdouble)(long)local_e8._0_8_;
                break;
              case 2:
LAB_00100e38:
                if (lVar36 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
                lVar1 = (long)ROUND(lVar36);
                local_e8._0_8_ = lVar1;
                lVar34 = (longdouble)lVar1;
                if (lVar34 < lVar36) {
                  local_e8._0_8_ = lVar1 + 1;
                  lVar34 = (longdouble)(lVar1 + 1);
                }
                break;
              case 3:
                local_e8._0_8_ = (long)ROUND(lVar36);
                lVar34 = (longdouble)(long)ROUND(lVar36) + lVar33;
                goto code_r0x00100e8f;
              case 4:
LAB_00100fa0:
                if (lVar36 < (longdouble)0) {
                  local_e8._0_8_ = (long)ROUND(lVar36 - (longdouble)__LC52);
                  lVar34 = (longdouble)(long)ROUND(lVar36 - (longdouble)__LC52);
                }
                else {
                  local_e8._0_8_ = (long)ROUND(lVar36 + (longdouble)__LC52);
                  lVar34 = (longdouble)(long)ROUND(lVar36 + (longdouble)__LC52);
                }
                break;
              default:
                uVar15 = FUN_00100e8f();
                return uVar15;
              }
              lVar34 = lVar34 + lVar33;
              if (uVar3 != 0) {
code_r0x00100e8f:
                lVar33 = (longdouble)__LC1;
                iVar6 = uVar3 + -1;
                lVar36 = lVar33;
                if (iVar6 == 0) {
                  lVar34 = lVar34 / lVar33;
                }
                else {
                  do {
                    lVar36 = lVar36 * lVar33;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                  lVar34 = lVar34 / lVar36;
                }
              }
LAB_00100eab:
              local_ac = in_FPUControlWord | 0xc00;
              if (dev_debug != 0) {
                pcVar21 = "  no scaling, returning value: %.*Lf\n";
                if (iVar8 != 0) {
                  pcVar21 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
                }
                pcStack_108 = SUB108(lVar34,0);
                uStack_100 = (undefined2)((unkuint10)lVar34 >> 0x40);
                local_e8._0_10_ = lVar34;
                __fprintf_chk(_stderr,2,pcVar21,uVar23 & 0xffffffff);
                uVar27 = CONCAT62(uStack_fe,uStack_100);
                lVar34 = (longdouble)local_e8._0_10_;
              }
              *(undefined4 *)puVar31 = 0x664c2a2e;
              *(undefined4 *)((long)puVar31 + 3) = 0x732566;
              pcStack_108 = suffix;
              if (suffix == (char *)0x0) {
                pcStack_108 = "";
              }
              iVar6 = __snprintf_chk(pcVar29,lVar22,2,0xffffffffffffffff,local_d0,
                                     uVar23 & 0xffffffff,SUB108(lVar34,0),
                                     (short)((unkuint10)lVar34 >> 0x40));
LAB_00100c48:
              if ((iVar6 < 0) ||
                 (lVar22 = (long)iVar6 - (padding_buffer_size + -1),
                 SBORROW8((long)iVar6,padding_buffer_size + -1))) {
                uStack_100 = 0x1a91;
                uStack_fe = 0x10;
                uVar15 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
                uStack_100 = uStack_f0;
                uStack_fe = uStack_ee;
                pcStack_108 = (char *)CONCAT44(uStack_f4,local_f8);
                ppcVar25 = &pcStack_108;
                error(1,0,uVar15);
                goto LAB_00101726;
              }
              if (lVar22 < 1) goto LAB_001014cb;
              uStack_100 = 0xc90;
              uStack_fe = 0x10;
              padding_buffer =
                   (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar22,0xffffffffffffffff,1);
            } while( true );
          }
          if (inval_style != 3) {
LAB_00101574:
            uStack_100 = 0x1587;
            uStack_fe = 0x10;
            uVar15 = dcgettext(0,
                               "value/precision too large to be printed: \'%Lg/%zu\' (consider using --to)"
                               ,5);
            uStack_100 = uStack_f0;
            pcStack_108 = (char *)CONCAT44(uStack_f4,local_f8);
            error(uVar3,0,uVar15,local_e8._0_8_);
          }
        }
        else {
          lVar36 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8));
          iVar6 = 0;
          while( true ) {
            lVar33 = -lVar36;
            if ((longdouble)0 <= lVar36) {
              lVar33 = lVar36;
            }
            if (lVar33 < (longdouble)__LC1) break;
            lVar36 = lVar36 / (longdouble)__LC1;
            iVar6 = iVar6 + 1;
          }
          if ((scale_to == 0) && (0x12 < (long)iVar6 + uVar23)) {
            if (inval_style != 3) {
              pcVar29 = "value too large to be printed: \'%Lg\' (consider using --to)";
              if (uVar23 != 0) goto LAB_00101574;
LAB_001013d7:
              uStack_100 = 0x13de;
              uStack_fe = 0x10;
              uVar15 = dcgettext(0,pcVar29,5);
              uStack_100 = uStack_f0;
              pcStack_108 = (char *)CONCAT44(uStack_f4,local_f8);
              error(uVar3,0,uVar15);
            }
          }
          else {
            if (iVar6 < 0x21) goto LAB_0010089f;
            if (inval_style != 3) {
              pcVar29 = "value too large to be printed: \'%Lg\' (cannot handle values > 999Q)";
              goto LAB_001013d7;
            }
          }
        }
      }
      uStack_100 = 0x570;
      uStack_fe = 0x10;
      fputs_unlocked((char *)param_1,_stdout);
      uVar15 = 0;
      piVar24 = &local_f8;
      goto LAB_001002fc;
    }
  }
  else {
    for (; *puVar11 != 0xffffffffffffffff; puVar11 = puVar11 + 2) {
      if ((*puVar11 <= param_2) && (param_2 <= puVar11[1])) goto LAB_0010032e;
    }
  }
  uStack_100 = 0x2f7;
  uStack_fe = 0x10;
  fputs_unlocked((char *)param_1,_stdout);
  goto LAB_001002f7;
LAB_001014cb:
  if (dev_debug != 0) {
    uStack_100 = 0x1786;
    uStack_fe = 0x10;
    uVar15 = quote(padding_buffer);
    uStack_100 = uStack_f0;
    pcStack_108 = (char *)CONCAT44(uStack_f4,local_f8);
    __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar15);
  }
  if (padding_width == 0) {
joined_r0x001019e5:
    if (format_str_prefix != (char *)0x0) {
      uStack_100 = 0x14fe;
      uStack_fe = 0x10;
      fputs_unlocked(format_str_prefix,_stdout);
    }
    uStack_100 = 0x1511;
    uStack_fe = 0x10;
    fputs_unlocked(padding_buffer,_stdout);
    ppcVar25 = (char **)&local_f8;
  }
  else {
    uStack_100 = 0x16a8;
    uStack_fe = 0x10;
    iVar6 = gnu_mbswidth(padding_buffer,3);
    if (iVar6 < 0) goto joined_r0x001019e5;
    if (-1 < (long)padding_width) {
      if ((long)iVar6 < (long)padding_width) {
        uVar23 = padding_width - (long)iVar6;
        uVar27 = uVar23;
        if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
LAB_00101700:
        do {
          pcVar29 = _stdout->_IO_write_ptr;
          if (pcVar29 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar29 + 1;
            *pcVar29 = ' ';
          }
          else {
            uStack_100 = 0x185a;
            uStack_fe = 0x10;
            __overflow(_stdout,0x20);
          }
          uVar23 = uVar23 - 1;
          ppcVar25 = (char **)&local_f8;
        } while (uVar23 != 0);
        goto LAB_00101726;
      }
      goto joined_r0x001019e5;
    }
    if ((long)-iVar6 <= (long)padding_width) goto joined_r0x001019e5;
    uVar23 = padding_width + (long)iVar6;
    if (format_str_prefix != (char *)0x0) {
LAB_001016e0:
      uStack_100 = 0x16ec;
      uStack_fe = 0x10;
      fputs_unlocked(format_str_prefix,_stdout);
    }
    uVar27 = uVar23;
    if (0 < (long)uVar23) goto LAB_00101700;
LAB_00101726:
    *(undefined8 *)((long)ppcVar25 + -8) = 0x101739;
    fputs_unlocked(padding_buffer,_stdout);
    if ((long)uVar27 < 0) {
      do {
        pcVar29 = _stdout->_IO_write_ptr;
        if (pcVar29 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar29 + 1;
          *pcVar29 = ' ';
        }
        else {
          *(undefined8 *)((long)ppcVar25 + -8) = 0x101778;
          __overflow(_stdout,0x20);
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != 0);
    }
  }
  piVar24 = (int *)ppcVar25;
  if (format_str_suffix != (char *)0x0) {
    *(undefined8 *)((long)ppcVar25 + -8) = 0x101534;
    fputs_unlocked(format_str_suffix,_stdout);
  }
LAB_001002f7:
  uVar15 = 1;
LAB_001002fc:
  if (*(long *)((long)piVar24 + 0xb8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)piVar24 + -8) = switchD_00101309::caseD_0;
    __stack_chk_fail();
  }
  return uVar15;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
switchD_001010ba::caseD_0
          (ulong param_1,char param_2,undefined8 param_3,ulong param_4,ulong param_5,
          undefined8 param_6,undefined8 param_7,longdouble param_8,undefined8 param_9,
          undefined8 param_10)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  char *pcVar10;
  ulong unaff_RBX;
  int unaff_EBP;
  undefined *puVar11;
  long unaff_R12;
  int unaff_R13D;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar12;
  longdouble in_ST0;
  longdouble lVar13;
  longdouble lVar14;
  longdouble lVar15;
  longdouble in_ST2;
  undefined *unaff_retaddr;
  int iStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000090;
  undefined *puStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
code_r0x00100a54:
LAB_00100a60:
  _iStack0000000000000040 = (ulong)ROUND(in_ST2);
  lVar13 = (longdouble)(long)_iStack0000000000000040;
  if (lVar13 < in_ST2) {
    _iStack0000000000000040 = _iStack0000000000000040 + 1;
    lVar13 = (longdouble)(long)_iStack0000000000000040;
  }
LAB_00100a90:
  lVar13 = lVar13 + in_ST0;
  if ((int)param_5 == 0) goto LAB_00100abb;
  lVar14 = (longdouble)__LC1;
LAB_00100a9d:
  iVar3 = (int)param_5 + -1;
  lVar15 = lVar14;
  if (iVar3 == 0) {
    lVar13 = lVar13 / lVar14;
  }
  else {
    do {
      lVar15 = lVar15 * lVar14;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar13 = lVar13 / lVar15;
  }
LAB_00100abb:
  lVar14 = (longdouble)param_8._0_8_;
  if (lVar13 < (longdouble)0) {
    lVar15 = -lVar13;
    if (lVar14 <= lVar15) goto LAB_001010d4;
LAB_001010fa:
    if ((longdouble)__LC1 <= lVar15) goto LAB_00101112;
  }
  else {
    if (lVar14 <= lVar13) {
LAB_001010d4:
      lVar13 = lVar13 / lVar14;
      param_4 = (ulong)((int)param_4 + 1);
      lVar14 = (longdouble)0;
      if (!NAN(lVar13) && !NAN(lVar14)) {
        if (lVar13 == lVar14) goto LAB_00101112;
        if (lVar13 <= lVar14) {
          lVar15 = -lVar13;
          goto LAB_001010fa;
        }
      }
    }
    else if (lVar13 == (longdouble)0) goto LAB_00101112;
    if ((longdouble)__LC1 <= lVar13) {
LAB_00101112:
      uVar4 = 0;
      uVar6 = 0;
      goto joined_r0x00100aff;
    }
  }
  bVar12 = (int)param_4 != 0;
  uVar4 = (ulong)bVar12;
  uVar6 = (uint)bVar12;
joined_r0x00100aff:
  if (param_2 != '\0') {
    puStack_10 = SUB108(lVar13,0);
    uStack_8 = (undefined2)((unkuint10)lVar13 >> 0x40);
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,(int)param_4);
    __fprintf_chk(param_8._0_8_,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
    param_4 = _iStack0000000000000040 & 0xffffffff;
    uVar4 = (ulong)uVar6;
    param_1 = user_precision;
  }
LAB_00100b05:
  puVar11 = &DAT_001025c3;
  *unaff_R15 = 0x73257325664c2a2e;
  if (param_1 != 0xffffffffffffffff) {
    uVar4 = param_1 & 0xffffffff;
  }
  *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
  puVar8 = suffix;
  if (suffix == (undefined *)0x0) {
    puVar8 = &_LC15;
  }
  uVar6 = (uint)param_4;
  if (unaff_R13D == 4) {
    if (uVar6 == 0) {
      puStack_10 = puVar8;
      iVar3 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,uVar4,
                             SUB108(lVar13,0),(short)((unkuint10)lVar13 >> 0x40),&_LC15,0x25c3);
      do {
        if ((iVar3 < 0) ||
           (lVar9 = (long)iVar3 - (padding_buffer_size + -1),
           SBORROW8((long)iVar3,padding_buffer_size + -1))) {
          uStack_8 = 0x1a91;
          uStack_6 = 0x10;
          uVar5 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
          uStack_8 = (undefined2)param_7;
          uStack_6 = param_7._2_6_;
          register0x00000020 = (BADSPACEBASE *)&puStack_10;
          puStack_10 = unaff_retaddr;
          error(1,0,uVar5);
          goto LAB_00101726;
        }
        if (lVar9 < 1) {
          if (dev_debug != '\0') {
            uStack_8 = 0x1786;
            uStack_6 = 0x10;
            uVar5 = quote(padding_buffer);
            uStack_8 = (undefined2)param_7;
            puStack_10 = unaff_retaddr;
            __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar5);
          }
          if (padding_width != 0) {
            uStack_8 = 0x16a8;
            uStack_6 = 0x10;
            iVar3 = gnu_mbswidth(padding_buffer,3);
            if (-1 < iVar3) {
              if (padding_width < 0) {
                if (padding_width < -iVar3) {
                  uVar4 = padding_width + iVar3;
                  if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
                  goto LAB_001016ec;
                }
              }
              else if (iVar3 < padding_width) {
                uVar4 = padding_width - iVar3;
                unaff_RBX = uVar4;
                if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
                uStack_8 = 0x16ec;
                uStack_6 = 0x10;
                fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
                unaff_RBX = uVar4;
                if (0 < (long)uVar4) {
LAB_00101700:
                  do {
                    pcVar10 = _stdout->_IO_write_ptr;
                    if (pcVar10 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar10 + 1;
                      *pcVar10 = ' ';
                    }
                    else {
                      uStack_8 = 0x185a;
                      uStack_6 = 0x10;
                      __overflow(_stdout,0x20);
                    }
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
LAB_00101726:
                *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
                fputs_unlocked(padding_buffer,_stdout);
                if ((long)unaff_RBX < 0) {
                  do {
                    pcVar10 = _stdout->_IO_write_ptr;
                    if (pcVar10 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar10 + 1;
                      *pcVar10 = ' ';
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
                      __overflow(_stdout,0x20);
                    }
                    unaff_RBX = unaff_RBX + 1;
                  } while (unaff_RBX != 0);
                }
LAB_00101518:
                if (format_str_suffix != (char *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
                  fputs_unlocked(format_str_suffix,_stdout);
                }
                if (*(long *)((long)register0x00000020 + 0xb8) == *(long *)(in_FS_OFFSET + 0x28)) {
                  return 1;
                }
                    /* WARNING: Subroutine does not return */
                *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
                __stack_chk_fail();
              }
            }
          }
          if (format_str_prefix != (char *)0x0) {
            uStack_8 = 0x14fe;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
          }
          uStack_8 = 0x1511;
          uStack_6 = 0x10;
          fputs_unlocked(padding_buffer,_stdout);
          goto LAB_00101518;
        }
        uStack_8 = 0xc90;
        uStack_6 = 0x10;
        unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar9,0xffffffffffffffff,1);
        unaff_R13D = scale_to;
        iVar3 = grouping;
        unaff_R12 = padding_buffer_size;
        unaff_RBX = (ulong)round_style;
        if (grouping == 0) {
          uVar5 = 0x19;
          unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
        }
        else {
          in_stack_00000090._1_1_ = 0x27;
          uVar5 = 0x18;
          unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
        }
        padding_buffer = unaff_R14;
        uVar2 = uStack_8;
        if (zero_padding_width != 0) {
          param_8 = (longdouble)CONCAT64(param_8._4_6_,grouping);
          uStack_8 = 0xd58;
          uStack_6 = 0x10;
          iVar7 = __sprintf_chk(unaff_R15,2,uVar5);
          unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar7);
          uVar2 = uStack_8;
        }
        in_ST0 = __LC19;
        if (dev_debug != '\0') {
          param_8._4_6_ = (undefined6)((unkuint10)param_8 >> 0x20);
          param_8 = (longdouble)CONCAT64(param_8._4_6_,iVar3);
          uStack_8 = 0xd94;
          uStack_6 = 0x10;
          fwrite("double_to_human:\n",1,0x11,_stderr);
          in_ST0 = __LC19;
          uVar2 = uStack_8;
        }
        param_8._8_2_ = (undefined2)((unkuint10)param_8 >> 0x40);
        __LC19 = in_ST0;
        uStack_8 = uVar2;
        if (unaff_R13D != 0) goto LAB_00100923;
        if (unaff_EBP == 0) {
          lVar9 = (long)ROUND((longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) / __LC51);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar14 = (longdouble)lVar9 * __LC51;
          lVar13 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) - lVar14;
          switch(unaff_RBX) {
          case 0:
            goto switchD_001012e1_caseD_0;
          case 1:
            goto switchD_001012e1_caseD_1;
          case 2:
            goto LAB_00100e38;
          case 3:
            param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar13));
            lVar15 = (longdouble)(long)ROUND(lVar13) + lVar14;
            break;
          case 4:
            goto LAB_00100fa0;
          default:
            lVar15 = (longdouble)0;
          }
          goto LAB_00100eab;
        }
        iVar7 = unaff_EBP + -1;
        lVar15 = (longdouble)__LC1;
        lVar13 = lVar15;
        if (iVar7 == 0) {
          lVar15 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar15;
          lVar9 = (long)ROUND(lVar15 / __LC51);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar14 = (longdouble)lVar9 * __LC51;
          lVar13 = lVar15 - lVar14;
          switch(unaff_RBX) {
          case 0:
            break;
          case 1:
            goto switchD_001012e1_caseD_1;
          case 2:
            goto LAB_00100e38;
          case 3:
            uVar5 = FUN_00100e8f();
            return uVar5;
          case 4:
            goto LAB_00100fa0;
          default:
            uVar5 = FUN_0010186b();
            return uVar5;
          }
          goto switchD_001012e1_caseD_0;
        }
        do {
          lVar13 = lVar13 * lVar15;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar13 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar13;
        lVar9 = (long)ROUND(lVar13 / __LC51);
        param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
        lVar14 = (longdouble)lVar9 * __LC51;
        lVar13 = lVar13 - lVar14;
        switch(unaff_RBX) {
        case 0:
          goto switchD_001012e1_caseD_0;
        case 1:
switchD_001012e1_caseD_1:
          lVar9 = (long)ROUND(-lVar13);
          lVar9 = -(lVar9 + (ulong)((longdouble)lVar9 < -lVar13));
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar15 = (longdouble)lVar9;
          break;
        case 2:
LAB_00100e38:
          if (lVar13 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
          lVar9 = (long)ROUND(lVar13);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar15 = (longdouble)lVar9;
          if (lVar15 < lVar13) {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9 + 1);
            lVar15 = (longdouble)(lVar9 + 1);
          }
          break;
        case 3:
          param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar13));
          lVar15 = (longdouble)(long)ROUND(lVar13) + lVar14;
          goto code_r0x00100e8f;
        case 4:
LAB_00100fa0:
          if (lVar13 < (longdouble)0) {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar13 - (longdouble)__LC52));
            lVar15 = (longdouble)(long)ROUND(lVar13 - (longdouble)__LC52);
          }
          else {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar13 + (longdouble)__LC52));
            lVar15 = (longdouble)(long)ROUND(lVar13 + (longdouble)__LC52);
          }
          break;
        default:
          uVar5 = FUN_00100e8f();
          return uVar5;
        }
        lVar15 = lVar15 + lVar14;
        if (unaff_EBP != 0) {
code_r0x00100e8f:
          lVar14 = (longdouble)__LC1;
          iVar7 = unaff_EBP + -1;
          lVar13 = lVar14;
          if (iVar7 == 0) {
            lVar15 = lVar15 / lVar14;
          }
          else {
            do {
              lVar13 = lVar13 * lVar14;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            lVar15 = lVar15 / lVar13;
          }
        }
LAB_00100eab:
        uStack_8 = (undefined2)((unkuint10)lVar15 >> 0x40);
        uVar1 = uStack_8;
        puStack_10 = SUB108(lVar15,0);
        puVar11 = puStack_10;
        if (dev_debug != '\0') {
          pcVar10 = "  no scaling, returning value: %.*Lf\n";
          if (iVar3 != 0) {
            pcVar10 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
          }
          __fprintf_chk(_stderr,2,pcVar10,unaff_EBP);
          unaff_RBX = CONCAT62(uStack_6,uStack_8);
          param_8 = lVar15;
          uVar2 = uStack_8;
        }
        uStack_8 = uVar2;
        *(undefined4 *)unaff_R15 = 0x664c2a2e;
        *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
        puStack_10 = suffix;
        if (suffix == (undefined *)0x0) {
          puStack_10 = &_LC15;
        }
        iVar3 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,unaff_EBP,puVar11,
                               uVar1);
      } while( true );
    }
    puVar11 = &_LC20;
  }
  else if (uVar6 == 1) {
    uVar5 = FUN_00100c18();
    return uVar5;
  }
  if (uVar6 < 0xb) {
    uVar5 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[param_4]))();
    return uVar5;
  }
  uVar5 = FUN_00100c18(param_1,puVar11);
  return uVar5;
LAB_00100923:
  uStack0000000000000044 = (undefined4)(_iStack0000000000000040 >> 0x20);
  if (unaff_R13D - 3U < 2) {
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,0x400);
    uVar5 = _LC16;
  }
  else {
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,1000);
    uVar5 = _LC17;
  }
  param_8 = (longdouble)CONCAT28(param_8._8_2_,uVar5);
  lVar13 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
  if (lVar13 < __LC44) {
    lVar13 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
    param_4 = 0;
    goto joined_r0x00100ff2;
  }
  if (__LC45 < lVar13) {
    if (dev_debug != '\0') {
      lVar13 = (longdouble)__LC18;
      param_4 = 0;
      goto LAB_00100ff8;
    }
    if (user_precision != 0xffffffffffffffff) {
      lVar13 = (longdouble)__LC18;
      uVar4 = 0;
      param_4 = 0;
      goto LAB_001009b4;
    }
    param_1 = user_precision;
    param_2 = dev_debug;
    switch(unaff_RBX) {
    case 0:
      in_ST2 = (longdouble)__LC18;
      param_4 = 0;
      param_5 = 0;
      goto LAB_00100a60;
    case 1:
      in_ST2 = (longdouble)__LC18;
      param_4 = 0;
      param_5 = 0;
      goto LAB_00100b80;
    case 2:
      param_5 = 0;
      param_4 = 0;
      in_ST2 = (longdouble)__LC18;
      goto LAB_00100a60;
    case 3:
      goto switchD_001014c8_caseD_3;
    case 4:
      in_ST2 = (longdouble)__LC18;
      param_5 = 0;
      param_4 = 0;
      goto LAB_00100bd4;
    default:
      lVar13 = (longdouble)0;
      param_4 = 0;
      uVar4 = 0;
    }
    goto LAB_00100b05;
  }
  param_4 = 0;
  while( true ) {
    lVar14 = -lVar13;
    if ((longdouble)0 <= lVar13) {
      lVar14 = lVar13;
    }
    if (lVar14 < (longdouble)iStack0000000000000040) break;
    lVar13 = lVar13 / (longdouble)iStack0000000000000040;
    param_4 = (ulong)((int)param_4 + 1);
  }
joined_r0x00100ff2:
  if (dev_debug == '\0') {
    if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
    lVar15 = -lVar13;
    if ((longdouble)0 <= lVar13) {
      lVar15 = lVar13;
    }
    lVar14 = (longdouble)__LC1;
    if (lVar15 < lVar14) goto LAB_0010106c;
  }
  else {
LAB_00100ff8:
    puStack_10 = SUB108(lVar13,0);
    uStack_8 = (undefined2)((unkuint10)lVar13 >> 0x40);
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,(int)param_4);
    __fprintf_chk(uVar5,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
    param_4 = _iStack0000000000000040 & 0xffffffff;
    if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
    uVar4 = (ulong)((int)param_4 * 3);
LAB_001009b4:
    if ((long)user_precision <= (long)uVar4) {
      uVar4 = user_precision;
    }
    param_5 = uVar4 & 0xffffffff;
    if ((int)uVar4 != 0) goto code_r0x001009c6;
  }
  _iStack0000000000000040 = (ulong)ROUND(lVar13 / __LC51);
  in_ST0 = (longdouble)(long)_iStack0000000000000040 * __LC51;
  in_ST2 = lVar13 - in_ST0;
  switch(unaff_RBX) {
  case 0:
    param_5 = 0;
    param_1 = user_precision;
    param_2 = dev_debug;
    goto LAB_00100a60;
  case 1:
    param_5 = 0;
    goto LAB_00100b80;
  case 2:
    param_5 = 0;
    goto LAB_00100a40;
  case 3:
    break;
  case 4:
    param_5 = 0;
    goto LAB_00100bc8;
  default:
    uVar5 = FUN_00104126();
    return uVar5;
  }
LAB_0010120e:
  _iStack0000000000000040 = (ulong)ROUND(in_ST2);
  lVar13 = (longdouble)(long)_iStack0000000000000040 + in_ST0;
  param_1 = user_precision;
  param_2 = dev_debug;
  goto LAB_00100abb;
switchD_001014c8_caseD_3:
  in_ST2 = (longdouble)__LC18;
  param_4 = 0;
  goto LAB_0010120e;
code_r0x001009c6:
  iVar3 = (int)uVar4 + -1;
  if (iVar3 == 0) {
    lVar14 = (longdouble)__LC1;
LAB_0010106c:
    _iStack0000000000000040 = (ulong)ROUND((lVar13 * lVar14) / __LC51);
    in_ST0 = (longdouble)(long)_iStack0000000000000040 * __LC51;
    in_ST2 = lVar13 * lVar14 - in_ST0;
    param_5 = 1;
    param_1 = user_precision;
    param_2 = dev_debug;
    switch(unaff_RBX) {
    case 0:
      goto code_r0x00100a54;
    case 1:
      goto LAB_00100b80;
    case 2:
      break;
    case 3:
      goto LAB_00100bf5;
    case 4:
      goto LAB_00100bc8;
    default:
      goto switchD_001010ba_default;
    }
  }
  else {
    lVar14 = (longdouble)__LC1;
    lVar15 = lVar14;
    do {
      lVar15 = lVar15 * lVar14;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    _iStack0000000000000040 = (ulong)ROUND((lVar15 * lVar13) / __LC51);
    in_ST0 = (longdouble)(long)_iStack0000000000000040 * __LC51;
    in_ST2 = lVar15 * lVar13 - in_ST0;
    switch(unaff_RBX) {
    case 0:
      param_1 = user_precision;
      param_2 = dev_debug;
      goto LAB_00100a60;
    case 1:
      goto switchD_00100a2f_caseD_1;
    case 2:
      break;
    case 3:
LAB_00100bf5:
      _iStack0000000000000040 = (ulong)ROUND(in_ST2);
      lVar13 = (longdouble)(long)_iStack0000000000000040 + in_ST0;
      param_1 = user_precision;
      param_2 = dev_debug;
      goto LAB_00100a9d;
    case 4:
LAB_00100bc8:
      if (in_ST2 < (longdouble)0) {
        _iStack0000000000000040 = (ulong)ROUND(in_ST2 - (longdouble)__LC52);
        lVar13 = (longdouble)(long)_iStack0000000000000040;
        param_1 = user_precision;
        param_2 = dev_debug;
      }
      else {
LAB_00100bd4:
        _iStack0000000000000040 = (ulong)ROUND(in_ST2 + (longdouble)__LC52);
        lVar13 = (longdouble)(long)_iStack0000000000000040;
        param_1 = user_precision;
        param_2 = dev_debug;
      }
      goto LAB_00100a90;
    default:
      uVar5 = FUN_00100aa9();
      return uVar5;
    }
  }
LAB_00100a40:
  param_1 = user_precision;
  param_2 = dev_debug;
  if ((longdouble)0 <= in_ST2) goto LAB_00100a60;
  goto LAB_00100b80;
switchD_00100a2f_caseD_1:
LAB_00100b80:
  lVar9 = (long)ROUND(-in_ST2);
  _iStack0000000000000040 = -(lVar9 + (ulong)((longdouble)lVar9 < -in_ST2));
  lVar13 = (longdouble)(long)_iStack0000000000000040;
  param_1 = user_precision;
  param_2 = dev_debug;
  goto LAB_00100a90;
switchD_001010ba_default:
  uVar5 = FUN_00104126();
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00100aa9(ulong param_1,char param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,longdouble param_8,undefined8 param_9,
            undefined8 param_10)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  char *pcVar10;
  ulong unaff_RBX;
  int unaff_EBP;
  undefined *puVar11;
  long unaff_R12;
  int unaff_R13D;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar12;
  longdouble lVar13;
  longdouble in_ST0;
  longdouble lVar14;
  longdouble in_ST1;
  longdouble lVar15;
  undefined *unaff_retaddr;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  undefined *puStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
  lVar14 = in_ST0;
LAB_00100ab0:
  do {
    in_ST0 = in_ST0 * lVar14;
    in_EAX = in_EAX + -1;
  } while (in_EAX != 0);
  in_ST1 = in_ST1 / in_ST0;
LAB_00100abb:
  lVar14 = (longdouble)param_8._0_8_;
  if (in_ST1 < (longdouble)0) {
    lVar15 = -in_ST1;
    if (lVar14 <= lVar15) goto LAB_001010d4;
LAB_001010fa:
    if ((longdouble)__LC1 <= lVar15) goto LAB_00101112;
  }
  else {
    if (lVar14 <= in_ST1) {
LAB_001010d4:
      in_ST1 = in_ST1 / lVar14;
      param_4 = (ulong)((int)param_4 + 1);
      lVar14 = (longdouble)0;
      if (!NAN(in_ST1) && !NAN(lVar14)) {
        if (in_ST1 == lVar14) goto LAB_00101112;
        if (in_ST1 <= lVar14) {
          lVar15 = -in_ST1;
          goto LAB_001010fa;
        }
      }
    }
    else if (in_ST1 == (longdouble)0) goto LAB_00101112;
    if ((longdouble)__LC1 <= in_ST1) {
LAB_00101112:
      uVar5 = 0;
      uVar7 = 0;
      goto joined_r0x00100aff;
    }
  }
  bVar12 = (int)param_4 != 0;
  uVar5 = (ulong)bVar12;
  uVar7 = (uint)bVar12;
joined_r0x00100aff:
  if (param_2 != '\0') {
    puStack_10 = SUB108(in_ST1,0);
    uStack_8 = (undefined2)((unkuint10)in_ST1 >> 0x40);
    __fprintf_chk(param_8._0_8_,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
    param_4 = param_4 & 0xffffffff;
    uVar5 = (ulong)uVar7;
    param_1 = user_precision;
  }
LAB_00100b05:
  puVar11 = &DAT_001025c3;
  *unaff_R15 = 0x73257325664c2a2e;
  if (param_1 != 0xffffffffffffffff) {
    uVar5 = param_1 & 0xffffffff;
  }
  *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
  puVar8 = suffix;
  if (suffix == (undefined *)0x0) {
    puVar8 = &_LC15;
  }
  uVar7 = (uint)param_4;
  if (unaff_R13D == 4) {
    if (uVar7 == 0) {
      puStack_10 = puVar8;
      iVar4 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,uVar5,
                             SUB108(in_ST1,0),(short)((unkuint10)in_ST1 >> 0x40),&_LC15,0x25c3);
      do {
        if ((iVar4 < 0) ||
           (lVar9 = (long)iVar4 - (padding_buffer_size + -1),
           SBORROW8((long)iVar4,padding_buffer_size + -1))) {
          uStack_8 = 0x1a91;
          uStack_6 = 0x10;
          uVar6 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
          uStack_8 = (undefined2)param_7;
          uStack_6 = param_7._2_6_;
          register0x00000020 = (BADSPACEBASE *)&puStack_10;
          puStack_10 = unaff_retaddr;
          error(1,0,uVar6);
          goto LAB_00101726;
        }
        if (lVar9 < 1) {
          if (dev_debug != '\0') {
            uStack_8 = 0x1786;
            uStack_6 = 0x10;
            uVar6 = quote(padding_buffer);
            uStack_8 = (undefined2)param_7;
            puStack_10 = unaff_retaddr;
            __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar6);
          }
          if (padding_width != 0) {
            uStack_8 = 0x16a8;
            uStack_6 = 0x10;
            iVar4 = gnu_mbswidth(padding_buffer,3);
            if (-1 < iVar4) {
              if (padding_width < 0) {
                if (padding_width < -iVar4) {
                  uVar5 = padding_width + iVar4;
                  if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
                  goto LAB_001016ec;
                }
              }
              else if (iVar4 < padding_width) {
                uVar5 = padding_width - iVar4;
                unaff_RBX = uVar5;
                if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
                uStack_8 = 0x16ec;
                uStack_6 = 0x10;
                fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
                unaff_RBX = uVar5;
                if (0 < (long)uVar5) {
LAB_00101700:
                  do {
                    pcVar10 = _stdout->_IO_write_ptr;
                    if (pcVar10 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar10 + 1;
                      *pcVar10 = ' ';
                    }
                    else {
                      uStack_8 = 0x185a;
                      uStack_6 = 0x10;
                      __overflow(_stdout,0x20);
                    }
                    uVar5 = uVar5 - 1;
                  } while (uVar5 != 0);
                }
LAB_00101726:
                *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
                fputs_unlocked(padding_buffer,_stdout);
                if ((long)unaff_RBX < 0) {
                  do {
                    pcVar10 = _stdout->_IO_write_ptr;
                    if (pcVar10 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar10 + 1;
                      *pcVar10 = ' ';
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
                      __overflow(_stdout,0x20);
                    }
                    unaff_RBX = unaff_RBX + 1;
                  } while (unaff_RBX != 0);
                }
LAB_00101518:
                if (format_str_suffix != (char *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
                  fputs_unlocked(format_str_suffix,_stdout);
                }
                if (*(long *)((long)register0x00000020 + 0xb8) == *(long *)(in_FS_OFFSET + 0x28)) {
                  return 1;
                }
                    /* WARNING: Subroutine does not return */
                *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
                __stack_chk_fail();
              }
            }
          }
          if (format_str_prefix != (char *)0x0) {
            uStack_8 = 0x14fe;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
          }
          uStack_8 = 0x1511;
          uStack_6 = 0x10;
          fputs_unlocked(padding_buffer,_stdout);
          goto LAB_00101518;
        }
        uStack_8 = 0xc90;
        uStack_6 = 0x10;
        unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar9,0xffffffffffffffff,1);
        unaff_R13D = scale_to;
        iVar4 = grouping;
        unaff_R12 = padding_buffer_size;
        unaff_RBX = (ulong)round_style;
        if (grouping == 0) {
          uVar6 = 0x19;
          unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
        }
        else {
          in_stack_00000090._1_1_ = 0x27;
          uVar6 = 0x18;
          unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
        }
        padding_buffer = unaff_R14;
        uVar2 = uStack_8;
        if (zero_padding_width != 0) {
          param_8 = (longdouble)CONCAT64(param_8._4_6_,grouping);
          uStack_8 = 0xd58;
          uStack_6 = 0x10;
          iVar3 = __sprintf_chk(unaff_R15,2,uVar6);
          unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar3);
          uVar2 = uStack_8;
        }
        lVar14 = __LC19;
        if (dev_debug != '\0') {
          param_8._4_6_ = (undefined6)((unkuint10)param_8 >> 0x20);
          param_8 = (longdouble)CONCAT64(param_8._4_6_,iVar4);
          uStack_8 = 0xd94;
          uStack_6 = 0x10;
          fwrite("double_to_human:\n",1,0x11,_stderr);
          lVar14 = __LC19;
          uVar2 = uStack_8;
        }
        param_8._8_2_ = (undefined2)((unkuint10)param_8 >> 0x40);
        __LC19 = lVar14;
        uStack_8 = uVar2;
        if (unaff_R13D != 0) goto LAB_00100923;
        if (unaff_EBP == 0) {
          lVar9 = (long)ROUND((longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) / __LC51);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar15 = (longdouble)lVar9 * __LC51;
          lVar14 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) - lVar15;
          switch(unaff_RBX) {
          case 0:
            goto switchD_001012e1_caseD_0;
          case 1:
            goto switchD_001012e1_caseD_1;
          case 2:
            goto LAB_00100e38;
          case 3:
            param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar14));
            lVar13 = (longdouble)(long)ROUND(lVar14) + lVar15;
            break;
          case 4:
            goto LAB_00100fa0;
          default:
            lVar13 = (longdouble)0;
          }
          goto LAB_00100eab;
        }
        iVar3 = unaff_EBP + -1;
        lVar13 = (longdouble)__LC1;
        lVar14 = lVar13;
        if (iVar3 == 0) {
          lVar13 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar13;
          lVar9 = (long)ROUND(lVar13 / __LC51);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar15 = (longdouble)lVar9 * __LC51;
          lVar14 = lVar13 - lVar15;
          switch(unaff_RBX) {
          case 0:
            break;
          case 1:
            goto switchD_001012e1_caseD_1;
          case 2:
            goto LAB_00100e38;
          case 3:
            uVar6 = FUN_00100e8f();
            return uVar6;
          case 4:
            goto LAB_00100fa0;
          default:
            uVar6 = FUN_0010186b();
            return uVar6;
          }
          goto switchD_001012e1_caseD_0;
        }
        do {
          lVar14 = lVar14 * lVar13;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        lVar14 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar14;
        lVar9 = (long)ROUND(lVar14 / __LC51);
        param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
        lVar15 = (longdouble)lVar9 * __LC51;
        lVar14 = lVar14 - lVar15;
        switch(unaff_RBX) {
        case 0:
          goto switchD_001012e1_caseD_0;
        case 1:
switchD_001012e1_caseD_1:
          lVar9 = (long)ROUND(-lVar14);
          lVar9 = -(lVar9 + (ulong)((longdouble)lVar9 < -lVar14));
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar13 = (longdouble)lVar9;
          break;
        case 2:
LAB_00100e38:
          if (lVar14 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
          lVar9 = (long)ROUND(lVar14);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar13 = (longdouble)lVar9;
          if (lVar13 < lVar14) {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9 + 1);
            lVar13 = (longdouble)(lVar9 + 1);
          }
          break;
        case 3:
          param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar14));
          lVar13 = (longdouble)(long)ROUND(lVar14) + lVar15;
          goto code_r0x00100e8f;
        case 4:
LAB_00100fa0:
          if (lVar14 < (longdouble)0) {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar14 - (longdouble)__LC52));
            lVar13 = (longdouble)(long)ROUND(lVar14 - (longdouble)__LC52);
          }
          else {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar14 + (longdouble)__LC52));
            lVar13 = (longdouble)(long)ROUND(lVar14 + (longdouble)__LC52);
          }
          break;
        default:
          uVar6 = FUN_00100e8f();
          return uVar6;
        }
        lVar13 = lVar13 + lVar15;
        if (unaff_EBP != 0) {
code_r0x00100e8f:
          lVar15 = (longdouble)__LC1;
          iVar3 = unaff_EBP + -1;
          lVar14 = lVar15;
          if (iVar3 == 0) {
            lVar13 = lVar13 / lVar15;
          }
          else {
            do {
              lVar14 = lVar14 * lVar15;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            lVar13 = lVar13 / lVar14;
          }
        }
LAB_00100eab:
        uStack_8 = (undefined2)((unkuint10)lVar13 >> 0x40);
        uVar1 = uStack_8;
        puStack_10 = SUB108(lVar13,0);
        puVar11 = puStack_10;
        if (dev_debug != '\0') {
          pcVar10 = "  no scaling, returning value: %.*Lf\n";
          if (iVar4 != 0) {
            pcVar10 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
          }
          __fprintf_chk(_stderr,2,pcVar10,unaff_EBP);
          unaff_RBX = CONCAT62(uStack_6,uStack_8);
          param_8 = lVar13;
          uVar2 = uStack_8;
        }
        uStack_8 = uVar2;
        *(undefined4 *)unaff_R15 = 0x664c2a2e;
        *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
        puStack_10 = suffix;
        if (suffix == (undefined *)0x0) {
          puStack_10 = &_LC15;
        }
        iVar4 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,unaff_EBP,puVar11,
                               uVar1);
      } while( true );
    }
    puVar11 = &_LC20;
  }
  else if (uVar7 == 1) {
    uVar6 = FUN_00100c18();
    return uVar6;
  }
  if (uVar7 < 0xb) {
    uVar6 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[param_4]))();
    return uVar6;
  }
  uVar6 = FUN_00100c18(param_1,puVar11);
  return uVar6;
LAB_00100923:
  if (unaff_R13D - 3U < 2) {
    iStack0000000000000040 = 0x400;
    uVar6 = _LC16;
  }
  else {
    iStack0000000000000040 = 1000;
    uVar6 = _LC17;
  }
  param_8 = (longdouble)CONCAT28(param_8._8_2_,uVar6);
  lVar15 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
  if (lVar15 < __LC44) {
    lVar15 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
    param_4 = 0;
    goto joined_r0x00100ff2;
  }
  if (__LC45 < lVar15) {
    if (dev_debug != '\0') {
      lVar15 = (longdouble)__LC18;
      param_4 = 0;
      goto LAB_00100ff8;
    }
    if (user_precision != 0xffffffffffffffff) {
      lVar15 = (longdouble)__LC18;
      uVar5 = 0;
      param_4 = 0;
      goto LAB_001009b4;
    }
    switch(unaff_RBX) {
    case 0:
      goto switchD_001014c8_caseD_0;
    case 1:
      lVar15 = (longdouble)__LC18;
      param_4 = 0;
      iVar4 = 0;
      goto LAB_00100b80;
    case 2:
      iVar4 = 0;
      param_4 = 0;
      lVar15 = (longdouble)__LC18;
      goto LAB_00100a60;
    case 3:
      lVar15 = (longdouble)__LC18;
      param_4 = 0;
      goto LAB_0010120e;
    case 4:
      lVar15 = (longdouble)__LC18;
      iVar4 = 0;
      param_4 = 0;
      goto LAB_00100bd4;
    default:
      in_ST1 = (longdouble)0;
      param_4 = 0;
      uVar5 = 0;
      param_1 = user_precision;
    }
    goto LAB_00100b05;
  }
  param_4 = 0;
  while( true ) {
    lVar14 = -lVar15;
    if ((longdouble)0 <= lVar15) {
      lVar14 = lVar15;
    }
    if (lVar14 < (longdouble)iStack0000000000000040) break;
    lVar15 = lVar15 / (longdouble)iStack0000000000000040;
    param_4 = (ulong)((int)param_4 + 1);
  }
joined_r0x00100ff2:
  if (dev_debug == '\0') {
    if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
    lVar14 = -lVar15;
    if ((longdouble)0 <= lVar15) {
      lVar14 = lVar15;
    }
    in_ST0 = (longdouble)__LC1;
    if (lVar14 < in_ST0) goto LAB_0010106c;
LAB_001011a2:
    lVar14 = (longdouble)(long)ROUND(lVar15 / __LC51) * __LC51;
    lVar15 = lVar15 - lVar14;
    switch(unaff_RBX) {
    case 0:
      iVar4 = 0;
      break;
    case 1:
      iVar4 = 0;
      goto LAB_00100b80;
    case 2:
      iVar4 = 0;
LAB_00100a40:
      if (lVar15 < (longdouble)0) goto LAB_00100b80;
      break;
    case 3:
LAB_0010120e:
      in_ST1 = (longdouble)(long)ROUND(lVar15) + lVar14;
      param_1 = user_precision;
      param_2 = dev_debug;
      goto LAB_00100abb;
    case 4:
      iVar4 = 0;
LAB_00100bc8:
      if ((longdouble)0 <= lVar15) {
LAB_00100bd4:
        lVar13 = (longdouble)(long)ROUND(lVar15 + (longdouble)__LC52);
      }
      else {
        lVar13 = (longdouble)(long)ROUND(lVar15 - (longdouble)__LC52);
      }
      goto LAB_00100a90;
    default:
      uVar6 = FUN_00104126();
      return uVar6;
    }
LAB_00100a60:
    lVar13 = (longdouble)(long)ROUND(lVar15);
    if (lVar13 < lVar15) {
      lVar13 = (longdouble)((long)ROUND(lVar15) + 1);
    }
  }
  else {
LAB_00100ff8:
    puStack_10 = SUB108(lVar15,0);
    uStack_8 = (undefined2)((unkuint10)lVar15 >> 0x40);
    __fprintf_chk(uVar6,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
    if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
    uVar5 = (ulong)((int)param_4 * 3);
LAB_001009b4:
    if ((long)user_precision <= (long)uVar5) {
      uVar5 = user_precision;
    }
    iVar4 = (int)uVar5;
    if (iVar4 == 0) goto LAB_001011a2;
    iVar3 = iVar4 + -1;
    if (iVar3 != 0) {
      in_ST0 = (longdouble)__LC1;
      lVar13 = in_ST0;
      do {
        lVar13 = lVar13 * in_ST0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      lVar14 = (longdouble)(long)ROUND((lVar13 * lVar15) / __LC51) * __LC51;
      lVar15 = lVar13 * lVar15 - lVar14;
      switch(unaff_RBX) {
      case 0:
        goto LAB_00100a60;
      case 1:
        goto LAB_00100b80;
      case 2:
        break;
      case 3:
LAB_00100bf5:
        in_ST1 = (longdouble)(long)ROUND(lVar15) + lVar14;
        goto LAB_00100a9d;
      case 4:
        goto LAB_00100bc8;
      default:
        goto process_field_cold;
      }
      goto LAB_00100a40;
    }
    in_ST0 = (longdouble)__LC1;
LAB_0010106c:
    lVar14 = (longdouble)(long)ROUND((lVar15 * in_ST0) / __LC51) * __LC51;
    lVar15 = lVar15 * in_ST0 - lVar14;
    iVar4 = 1;
    switch(unaff_RBX) {
    case 0:
      iVar4 = 1;
      goto LAB_00100a60;
    case 1:
      iVar4 = 1;
      break;
    case 2:
      iVar4 = 1;
      goto LAB_00100a40;
    case 3:
      goto LAB_00100bf5;
    case 4:
      iVar4 = 1;
      goto LAB_00100bc8;
    default:
      uVar6 = FUN_00104126();
      return uVar6;
    }
LAB_00100b80:
    lVar9 = (long)ROUND(-lVar15);
    lVar13 = (longdouble)(long)-(lVar9 + (ulong)((longdouble)lVar9 < -lVar15));
  }
LAB_00100a90:
  in_ST1 = lVar13 + lVar14;
  param_1 = user_precision;
  param_2 = dev_debug;
  if (iVar4 == 0) goto LAB_00100abb;
  in_ST0 = (longdouble)__LC1;
LAB_00100a9d:
  in_EAX = iVar4 + -1;
  lVar14 = in_ST0;
  param_1 = user_precision;
  param_2 = dev_debug;
  if (in_EAX == 0) {
    in_ST1 = in_ST1 / in_ST0;
    goto LAB_00100abb;
  }
  goto LAB_00100ab0;
switchD_001014c8_caseD_0:
  lVar15 = (longdouble)__LC18;
  param_4 = 0;
  iVar4 = 0;
  goto LAB_00100a60;
process_field_cold:
  uVar6 = FUN_00100aa9();
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00100c18(undefined8 param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
            undefined8 param_5,ulong param_6,undefined8 param_7)

{
  double dVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined *in_RAX;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  ulong unaff_RBX;
  ulong uVar13;
  int unaff_EBP;
  long unaff_R12;
  char *unaff_R14;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  longdouble lVar15;
  longdouble lVar16;
  longdouble in_ST0;
  longdouble lVar17;
  longdouble lVar18;
  undefined *unaff_retaddr;
  undefined8 in_stack_00000028;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  undefined *puStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
code_r0x00100c18:
  puStack_10 = param_3;
  iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,param_6,
                         SUB108(in_ST0,0),(short)((unkuint10)in_ST0 >> 0x40),in_RAX,(short)param_2);
  do {
    if ((iVar6 < 0) ||
       (lVar11 = (long)iVar6 - (padding_buffer_size + -1),
       SBORROW8((long)iVar6,padding_buffer_size + -1))) {
      uStack_8 = 0x1a91;
      uStack_6 = 0x10;
      uVar10 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
      uStack_8 = (undefined2)param_7;
      uStack_6 = param_7._2_6_;
      register0x00000020 = (BADSPACEBASE *)&puStack_10;
      puStack_10 = unaff_retaddr;
      error(1,0,uVar10);
      goto LAB_00101726;
    }
    if (lVar11 < 1) {
      if (dev_debug != '\0') {
        uStack_8 = 0x1786;
        uStack_6 = 0x10;
        uVar10 = quote(padding_buffer);
        uStack_8 = (undefined2)param_7;
        puStack_10 = unaff_retaddr;
        __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar10);
      }
      if (padding_width != 0) {
        uStack_8 = 0x16a8;
        uStack_6 = 0x10;
        iVar6 = gnu_mbswidth(padding_buffer,3);
        if (-1 < iVar6) {
          if (padding_width < 0) {
            if (padding_width < -iVar6) {
              uVar13 = padding_width + iVar6;
              if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
              goto LAB_001016ec;
            }
          }
          else if (iVar6 < padding_width) {
            uVar13 = padding_width - iVar6;
            unaff_RBX = uVar13;
            if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
            uStack_8 = 0x16ec;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
            unaff_RBX = uVar13;
            if (0 < (long)uVar13) {
LAB_00101700:
              do {
                pcVar12 = _stdout->_IO_write_ptr;
                if (pcVar12 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar12 + 1;
                  *pcVar12 = ' ';
                }
                else {
                  uStack_8 = 0x185a;
                  uStack_6 = 0x10;
                  __overflow(_stdout,0x20);
                }
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
LAB_00101726:
            *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
            fputs_unlocked(padding_buffer,_stdout);
            if ((long)unaff_RBX < 0) {
              do {
                pcVar12 = _stdout->_IO_write_ptr;
                if (pcVar12 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar12 + 1;
                  *pcVar12 = ' ';
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
                  __overflow(_stdout,0x20);
                }
                unaff_RBX = unaff_RBX + 1;
              } while (unaff_RBX != 0);
            }
LAB_00101518:
            if (format_str_suffix != (char *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
              fputs_unlocked(format_str_suffix,_stdout);
            }
            if (*(long *)((long)register0x00000020 + 0xb8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
              __stack_chk_fail();
            }
            return 1;
          }
        }
      }
      if (format_str_prefix != (char *)0x0) {
        uStack_8 = 0x14fe;
        uStack_6 = 0x10;
        fputs_unlocked(format_str_prefix,_stdout);
      }
      uStack_8 = 0x1511;
      uStack_6 = 0x10;
      fputs_unlocked(padding_buffer,_stdout);
      goto LAB_00101518;
    }
    uStack_8 = 0xc90;
    uStack_6 = 0x10;
    unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar11,0xffffffffffffffff,1);
    iVar9 = scale_to;
    iVar6 = grouping;
    unaff_R12 = padding_buffer_size;
    unaff_RBX = (ulong)round_style;
    if (grouping == 0) {
      uVar10 = 0x19;
      puVar14 = (undefined8 *)((long)&stack0x00000090 + 1);
    }
    else {
      in_stack_00000090._1_1_ = 0x27;
      uVar10 = 0x18;
      puVar14 = (undefined8 *)((long)&stack0x00000090 + 2);
    }
    padding_buffer = unaff_R14;
    uVar4 = uStack_8;
    if (zero_padding_width != 0) {
      uStack_8 = 0xd58;
      uStack_6 = 0x10;
      iVar5 = __sprintf_chk(puVar14,2,uVar10);
      puVar14 = (undefined8 *)((long)puVar14 + (long)iVar5);
      uVar4 = uStack_8;
    }
    lVar17 = __LC19;
    if (dev_debug != '\0') {
      uStack_8 = 0xd94;
      uStack_6 = 0x10;
      fwrite("double_to_human:\n",1,0x11,_stderr);
      lVar17 = __LC19;
      uVar4 = uStack_8;
    }
    __LC19 = lVar17;
    uStack_8 = uVar4;
    if (iVar9 != 0) break;
    if (unaff_EBP == 0) {
      lVar18 = (longdouble)
               (long)ROUND((longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) / __LC51) *
               __LC51;
      lVar17 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) - lVar18;
      switch(unaff_RBX) {
      case 0:
        goto switchD_001012e1_caseD_0;
      case 1:
        goto switchD_001012e1_caseD_1;
      case 2:
        goto LAB_00100e38;
      case 3:
        lVar15 = (longdouble)(long)ROUND(lVar17) + lVar18;
        break;
      case 4:
        goto LAB_00100fa0;
      default:
        lVar15 = (longdouble)0;
      }
      goto LAB_00100eab;
    }
    iVar9 = unaff_EBP + -1;
    lVar15 = (longdouble)__LC1;
    lVar17 = lVar15;
    if (iVar9 == 0) {
      lVar15 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar15;
      lVar18 = (longdouble)(long)ROUND(lVar15 / __LC51) * __LC51;
      lVar17 = lVar15 - lVar18;
      switch(unaff_RBX) {
      case 0:
        break;
      case 1:
        goto switchD_001012e1_caseD_1;
      case 2:
        goto LAB_00100e38;
      case 3:
        uVar10 = FUN_00100e8f();
        return uVar10;
      case 4:
        goto LAB_00100fa0;
      default:
        uVar10 = FUN_0010186b();
        return uVar10;
      }
      goto switchD_001012e1_caseD_0;
    }
    do {
      lVar17 = lVar17 * lVar15;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    lVar17 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar17;
    lVar18 = (longdouble)(long)ROUND(lVar17 / __LC51) * __LC51;
    lVar17 = lVar17 - lVar18;
    switch(unaff_RBX) {
    case 0:
      goto switchD_001012e1_caseD_0;
    case 1:
switchD_001012e1_caseD_1:
      lVar11 = (long)ROUND(-lVar17);
      lVar15 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -lVar17));
      break;
    case 2:
LAB_00100e38:
      if (lVar17 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
      lVar15 = (longdouble)(long)ROUND(lVar17);
      if (lVar15 < lVar17) {
        lVar15 = (longdouble)((long)ROUND(lVar17) + 1);
      }
      break;
    case 3:
      lVar15 = (longdouble)(long)ROUND(lVar17) + lVar18;
      goto code_r0x00100e8f;
    case 4:
LAB_00100fa0:
      if (lVar17 < (longdouble)0) {
        lVar15 = (longdouble)(long)ROUND(lVar17 - (longdouble)__LC52);
      }
      else {
        lVar15 = (longdouble)(long)ROUND(lVar17 + (longdouble)__LC52);
      }
      break;
    default:
      uVar10 = FUN_00100e8f();
      return uVar10;
    }
    lVar15 = lVar15 + lVar18;
    if (unaff_EBP != 0) {
code_r0x00100e8f:
      lVar18 = (longdouble)__LC1;
      iVar9 = unaff_EBP + -1;
      lVar17 = lVar18;
      if (iVar9 == 0) {
        lVar15 = lVar15 / lVar18;
      }
      else {
        do {
          lVar17 = lVar17 * lVar18;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        lVar15 = lVar15 / lVar17;
      }
    }
LAB_00100eab:
    uStack_8 = (undefined2)((unkuint10)lVar15 >> 0x40);
    uVar3 = uStack_8;
    puStack_10 = SUB108(lVar15,0);
    puVar2 = puStack_10;
    if (dev_debug != '\0') {
      pcVar12 = "  no scaling, returning value: %.*Lf\n";
      if (iVar6 != 0) {
        pcVar12 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
      }
      __fprintf_chk(_stderr,2,pcVar12,unaff_EBP);
      unaff_RBX = CONCAT62(uStack_6,uStack_8);
      uVar4 = uStack_8;
    }
    uStack_8 = uVar4;
    *(undefined4 *)puVar14 = 0x664c2a2e;
    *(undefined4 *)((long)puVar14 + 3) = 0x732566;
    puStack_10 = suffix;
    if (suffix == (undefined *)0x0) {
      puStack_10 = &_LC15;
    }
    iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,
                           puVar2,uVar3);
  } while( true );
  if (iVar9 - 3U < 2) {
    iStack0000000000000040 = 0x400;
    dVar1 = _LC16;
  }
  else {
    iStack0000000000000040 = 1000;
    dVar1 = _LC17;
  }
  lVar18 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
  if (lVar18 < __LC44) {
    lVar18 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
    uVar13 = 0;
    if (dev_debug != '\0') goto LAB_00100ff8;
LAB_0010099e:
    if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
    uVar7 = (ulong)((int)uVar13 * 3);
LAB_001009b4:
    if ((long)user_precision <= (long)uVar7) {
      uVar7 = user_precision;
    }
    iVar6 = (int)uVar7;
    if (iVar6 == 0) {
LAB_001011a2:
      lVar17 = (longdouble)(long)ROUND(lVar18 / __LC51) * __LC51;
      lVar18 = lVar18 - lVar17;
      switch(unaff_RBX) {
      case 0:
        iVar6 = 0;
        goto LAB_00100a60;
      case 1:
        iVar6 = 0;
        break;
      case 2:
        iVar6 = 0;
LAB_00100a40:
        if ((longdouble)0 <= lVar18) goto LAB_00100a60;
        break;
      case 3:
LAB_0010120e:
        in_ST0 = (longdouble)(long)ROUND(lVar18) + lVar17;
        goto LAB_00100abb;
      case 4:
        iVar6 = 0;
LAB_00100bc8:
        if (lVar18 < (longdouble)0) {
          lVar15 = (longdouble)(long)ROUND(lVar18 - (longdouble)__LC52);
        }
        else {
LAB_00100bd4:
          lVar15 = (longdouble)(long)ROUND(lVar18 + (longdouble)__LC52);
        }
        goto LAB_00100a90;
      default:
        uVar10 = FUN_00104126();
        return uVar10;
      }
LAB_00100b80:
      lVar11 = (long)ROUND(-lVar18);
      lVar15 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -lVar18));
      goto LAB_00100a90;
    }
    iVar5 = iVar6 + -1;
    if (iVar5 == 0) {
      lVar15 = (longdouble)__LC1;
LAB_0010106c:
      lVar17 = (longdouble)(long)ROUND((lVar18 * lVar15) / __LC51) * __LC51;
      lVar18 = lVar18 * lVar15 - lVar17;
      iVar6 = 1;
      switch(unaff_RBX) {
      case 0:
        iVar6 = 1;
        goto LAB_00100a60;
      case 1:
        iVar6 = 1;
        break;
      case 2:
        iVar6 = 1;
        goto LAB_00100a40;
      case 3:
        goto LAB_00100bf5;
      case 4:
        iVar6 = 1;
        goto LAB_00100bc8;
      default:
        uVar10 = FUN_00104126();
        return uVar10;
      }
      goto LAB_00100b80;
    }
    lVar15 = (longdouble)__LC1;
    lVar16 = lVar15;
    do {
      lVar16 = lVar16 * lVar15;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar17 = (longdouble)(long)ROUND((lVar16 * lVar18) / __LC51) * __LC51;
    lVar18 = lVar16 * lVar18 - lVar17;
    switch(unaff_RBX) {
    case 0:
      goto LAB_00100a60;
    case 1:
      goto LAB_00100b80;
    case 2:
      goto LAB_00100a40;
    case 3:
LAB_00100bf5:
      in_ST0 = (longdouble)(long)ROUND(lVar18) + lVar17;
      break;
    case 4:
      goto LAB_00100bc8;
    default:
      uVar10 = FUN_00100aa9();
      return uVar10;
    }
LAB_00100a9d:
    iVar6 = iVar6 + -1;
    lVar17 = lVar15;
    if (iVar6 == 0) {
      in_ST0 = in_ST0 / lVar15;
    }
    else {
      do {
        lVar17 = lVar17 * lVar15;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      in_ST0 = in_ST0 / lVar17;
    }
  }
  else {
    if (lVar18 <= __LC45) {
      uVar13 = 0;
      while( true ) {
        lVar17 = -lVar18;
        if ((longdouble)0 <= lVar18) {
          lVar17 = lVar18;
        }
        if (lVar17 < (longdouble)iStack0000000000000040) break;
        lVar18 = lVar18 / (longdouble)iStack0000000000000040;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if (dev_debug == '\0') goto LAB_0010099e;
LAB_00100ff8:
      puStack_10 = SUB108(lVar18,0);
      uStack_8 = (undefined2)((unkuint10)lVar18 >> 0x40);
      __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
      if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
      lVar17 = -lVar18;
      if ((longdouble)0 <= lVar18) {
        lVar17 = lVar18;
      }
      lVar15 = (longdouble)__LC1;
      if (lVar17 < lVar15) goto LAB_0010106c;
      goto LAB_001011a2;
    }
    if (dev_debug != '\0') {
      lVar18 = (longdouble)__LC18;
      uVar13 = 0;
      goto LAB_00100ff8;
    }
    if (user_precision != 0xffffffffffffffff) {
      lVar18 = (longdouble)__LC18;
      uVar7 = 0;
      uVar13 = 0;
      goto LAB_001009b4;
    }
    switch(unaff_RBX) {
    case 0:
      lVar18 = (longdouble)__LC18;
      uVar13 = 0;
      iVar6 = 0;
      break;
    case 1:
      lVar18 = (longdouble)__LC18;
      uVar13 = 0;
      iVar6 = 0;
      goto LAB_00100b80;
    case 2:
      iVar6 = 0;
      uVar13 = 0;
      lVar18 = (longdouble)__LC18;
      break;
    case 3:
      lVar18 = (longdouble)__LC18;
      uVar13 = 0;
      goto LAB_0010120e;
    case 4:
      lVar18 = (longdouble)__LC18;
      iVar6 = 0;
      uVar13 = 0;
      goto LAB_00100bd4;
    default:
      in_ST0 = (longdouble)0;
      uVar13 = 0;
      param_6 = 0;
      goto LAB_00100b05;
    }
LAB_00100a60:
    lVar15 = (longdouble)(long)ROUND(lVar18);
    if (lVar15 < lVar18) {
      lVar15 = (longdouble)((long)ROUND(lVar18) + 1);
    }
LAB_00100a90:
    in_ST0 = lVar15 + lVar17;
    if (iVar6 != 0) {
      lVar15 = (longdouble)__LC1;
      goto LAB_00100a9d;
    }
  }
LAB_00100abb:
  lVar17 = (longdouble)dVar1;
  if (in_ST0 < (longdouble)0) {
    lVar18 = -in_ST0;
    if (lVar17 <= lVar18) goto LAB_001010d4;
LAB_001010fa:
    if (lVar18 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
    param_6 = 0;
  }
  else {
    if (lVar17 <= in_ST0) {
LAB_001010d4:
      in_ST0 = in_ST0 / lVar17;
      uVar13 = (ulong)((int)uVar13 + 1);
      lVar17 = (longdouble)0;
      if (!NAN(in_ST0) && !NAN(lVar17)) {
        if (in_ST0 == lVar17) goto LAB_00101112;
        if (in_ST0 <= lVar17) {
          lVar18 = -in_ST0;
          goto LAB_001010fa;
        }
      }
    }
    else if (in_ST0 == (longdouble)0) goto LAB_00101112;
    if ((longdouble)__LC1 <= in_ST0) goto LAB_00101112;
LAB_00100af3:
    param_6 = (ulong)((int)uVar13 != 0);
  }
  if (dev_debug != '\0') {
    puStack_10 = SUB108(in_ST0,0);
    uStack_8 = (undefined2)((unkuint10)in_ST0 >> 0x40);
    __fprintf_chk(dVar1,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
  }
LAB_00100b05:
  param_2 = &DAT_001025c3;
  *puVar14 = 0x73257325664c2a2e;
  if (user_precision != 0xffffffffffffffff) {
    param_6 = user_precision & 0xffffffff;
  }
  in_RAX = &_LC15;
  *(undefined4 *)((long)puVar14 + 7) = 0x732573;
  param_3 = suffix;
  if (suffix == (undefined *)0x0) {
    param_3 = &_LC15;
  }
  uVar8 = (uint)uVar13;
  if (iVar9 != 4) {
    if (uVar8 == 1) {
      uVar10 = FUN_00100c18();
      return uVar10;
    }
    goto LAB_00100b51;
  }
  if (uVar8 != 0) {
    param_2 = &_LC20;
LAB_00100b51:
    if (10 < uVar8) {
      uVar10 = FUN_00100c18(user_precision,param_2);
      return uVar10;
    }
    uVar10 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar13]))();
    return uVar10;
  }
  goto code_r0x00100c18;
}



void FUN_00100d12(void)

{
  FUN_00100c18();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 switchD_001018bd::caseD_0(undefined8 param_1,char param_2)

{
  double dVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  char *pcVar12;
  ulong unaff_RBX;
  ulong uVar13;
  int unaff_EBP;
  undefined *puVar14;
  int in_R9D;
  long unaff_R12;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar15;
  longdouble lVar16;
  longdouble in_ST0;
  longdouble lVar17;
  longdouble lVar18;
  longdouble lVar19;
  longdouble in_ST1;
  undefined *unaff_retaddr;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  undefined8 in_stack_00000028;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  undefined *puStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
code_r0x00100e4a:
switchD_001012e1_caseD_0:
  lVar17 = (longdouble)(long)ROUND(in_ST1);
  if (lVar17 < in_ST1) {
    lVar17 = (longdouble)((long)ROUND(in_ST1) + 1);
  }
LAB_00100e80:
  lVar17 = lVar17 + in_ST0;
  if (unaff_EBP == 0) goto LAB_00100eab;
  lVar18 = (longdouble)__LC1;
code_r0x00100e8f:
  iVar6 = unaff_EBP + -1;
  lVar19 = lVar18;
  if (iVar6 == 0) {
    lVar17 = lVar17 / lVar18;
  }
  else {
    do {
      lVar19 = lVar19 * lVar18;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar17 = lVar17 / lVar19;
  }
LAB_00100eab:
  uVar3 = uStack_8;
  uStack_8 = (undefined2)((unkuint10)lVar17 >> 0x40);
  uVar2 = uStack_8;
  puStack_10 = SUB108(lVar17,0);
  puVar14 = puStack_10;
  if (param_2 != '\0') {
    pcVar12 = "  no scaling, returning value: %.*Lf\n";
    if (in_R9D != 0) {
      pcVar12 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
    }
    __fprintf_chk(_stderr,2,pcVar12,unaff_EBP);
    unaff_RBX = CONCAT62(uStack_6,uStack_8);
    uVar3 = uStack_8;
  }
  uStack_8 = uVar3;
  *(undefined4 *)unaff_R15 = 0x664c2a2e;
  *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
  puStack_10 = suffix;
  if (suffix == (undefined *)0x0) {
    puStack_10 = &_LC15;
  }
  iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,
                         puVar14,uVar2);
  do {
    if ((iVar6 < 0) ||
       (lVar11 = (long)iVar6 - (padding_buffer_size + -1),
       SBORROW8((long)iVar6,padding_buffer_size + -1))) {
      uStack_8 = 0x1a91;
      uStack_6 = 0x10;
      uVar9 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
      uStack_8 = uStack0000000000000008;
      uStack_6 = uStack000000000000000a;
      register0x00000020 = (BADSPACEBASE *)&puStack_10;
      puStack_10 = unaff_retaddr;
      error(1,0,uVar9);
      goto LAB_00101726;
    }
    if (lVar11 < 1) {
      if (dev_debug != '\0') {
        uStack_8 = 0x1786;
        uStack_6 = 0x10;
        uVar9 = quote(padding_buffer);
        uStack_8 = uStack0000000000000008;
        puStack_10 = unaff_retaddr;
        __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar9);
      }
      if (padding_width != 0) {
        uStack_8 = 0x16a8;
        uStack_6 = 0x10;
        iVar6 = gnu_mbswidth(padding_buffer,3);
        if (-1 < iVar6) {
          if (padding_width < 0) {
            if (padding_width < -iVar6) {
              uVar13 = padding_width + iVar6;
              if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
              goto LAB_001016ec;
            }
          }
          else if (iVar6 < padding_width) {
            uVar13 = padding_width - iVar6;
            unaff_RBX = uVar13;
            if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
            uStack_8 = 0x16ec;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
            unaff_RBX = uVar13;
            if (0 < (long)uVar13) {
LAB_00101700:
              do {
                pcVar12 = _stdout->_IO_write_ptr;
                if (pcVar12 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar12 + 1;
                  *pcVar12 = ' ';
                }
                else {
                  uStack_8 = 0x185a;
                  uStack_6 = 0x10;
                  __overflow(_stdout,0x20);
                }
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
LAB_00101726:
            *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
            fputs_unlocked(padding_buffer,_stdout);
            if ((long)unaff_RBX < 0) {
              do {
                pcVar12 = _stdout->_IO_write_ptr;
                if (pcVar12 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar12 + 1;
                  *pcVar12 = ' ';
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
                  __overflow(_stdout,0x20);
                }
                unaff_RBX = unaff_RBX + 1;
              } while (unaff_RBX != 0);
            }
LAB_00101518:
            if (format_str_suffix != (char *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
              fputs_unlocked(format_str_suffix,_stdout);
            }
            if (*(long *)((long)register0x00000020 + 0xb8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
              __stack_chk_fail();
            }
            return 1;
          }
        }
      }
      if (format_str_prefix != (char *)0x0) {
        uStack_8 = 0x14fe;
        uStack_6 = 0x10;
        fputs_unlocked(format_str_prefix,_stdout);
      }
      uStack_8 = 0x1511;
      uStack_6 = 0x10;
      fputs_unlocked(padding_buffer,_stdout);
      goto LAB_00101518;
    }
    uStack_8 = 0xc90;
    uStack_6 = 0x10;
    unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar11,0xffffffffffffffff,1);
    iVar6 = scale_to;
    in_R9D = grouping;
    unaff_R12 = padding_buffer_size;
    unaff_RBX = (ulong)round_style;
    if (grouping == 0) {
      uVar9 = 0x19;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
    }
    else {
      in_stack_00000090._1_1_ = 0x27;
      uVar9 = 0x18;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
    }
    padding_buffer = unaff_R14;
    if (zero_padding_width != 0) {
      uStack_8 = 0xd58;
      uStack_6 = 0x10;
      iVar5 = __sprintf_chk(unaff_R15,2,uVar9);
      unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar5);
    }
    lVar17 = __LC19;
    if (dev_debug != '\0') {
      uStack_8 = 0xd94;
      uStack_6 = 0x10;
      fwrite("double_to_human:\n",1,0x11,_stderr);
      lVar17 = __LC19;
    }
    __LC19 = lVar17;
    if (iVar6 == 0) break;
    if (iVar6 - 3U < 2) {
      iStack0000000000000040 = 0x400;
      dVar1 = _LC16;
    }
    else {
      iStack0000000000000040 = 1000;
      dVar1 = _LC17;
    }
    lVar18 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr);
    if (lVar18 < __LC44) {
      lVar18 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr);
      uVar13 = 0;
      if (dev_debug != '\0') goto LAB_00100ff8;
LAB_0010099e:
      if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
      uVar7 = (ulong)((int)uVar13 * 3);
LAB_001009b4:
      if ((long)user_precision <= (long)uVar7) {
        uVar7 = user_precision;
      }
      iVar5 = (int)uVar7;
      if (iVar5 == 0) {
LAB_001011a2:
        lVar17 = (longdouble)(long)ROUND(lVar18 / __LC51) * __LC51;
        lVar18 = lVar18 - lVar17;
        switch(unaff_RBX) {
        case 0:
          iVar5 = 0;
          goto LAB_00100a60;
        case 1:
          iVar5 = 0;
          break;
        case 2:
          iVar5 = 0;
LAB_00100a40:
          if ((longdouble)0 <= lVar18) goto LAB_00100a60;
          break;
        case 3:
LAB_0010120e:
          lVar16 = (longdouble)(long)ROUND(lVar18) + lVar17;
          goto LAB_00100abb;
        case 4:
          iVar5 = 0;
LAB_00100bc8:
          if (lVar18 < (longdouble)0) {
            lVar16 = (longdouble)(long)ROUND(lVar18 - (longdouble)__LC52);
          }
          else {
LAB_00100bd4:
            lVar16 = (longdouble)(long)ROUND(lVar18 + (longdouble)__LC52);
          }
          goto LAB_00100a90;
        default:
          uVar9 = FUN_00104126();
          return uVar9;
        }
LAB_00100b80:
        lVar11 = (long)ROUND(-lVar18);
        lVar16 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -lVar18));
        goto LAB_00100a90;
      }
      iVar4 = iVar5 + -1;
      if (iVar4 == 0) {
        lVar19 = (longdouble)__LC1;
LAB_0010106c:
        lVar17 = (longdouble)(long)ROUND((lVar18 * lVar19) / __LC51) * __LC51;
        lVar18 = lVar18 * lVar19 - lVar17;
        iVar5 = 1;
        switch(unaff_RBX) {
        case 0:
          iVar5 = 1;
          goto LAB_00100a60;
        case 1:
          iVar5 = 1;
          break;
        case 2:
          iVar5 = 1;
          goto LAB_00100a40;
        case 3:
          goto LAB_00100bf5;
        case 4:
          iVar5 = 1;
          goto LAB_00100bc8;
        default:
          uVar9 = FUN_00104126();
          return uVar9;
        }
        goto LAB_00100b80;
      }
      lVar19 = (longdouble)__LC1;
      lVar16 = lVar19;
      do {
        lVar16 = lVar16 * lVar19;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar17 = (longdouble)(long)ROUND((lVar16 * lVar18) / __LC51) * __LC51;
      lVar18 = lVar16 * lVar18 - lVar17;
      switch(unaff_RBX) {
      case 0:
        goto LAB_00100a60;
      case 1:
        goto LAB_00100b80;
      case 2:
        goto LAB_00100a40;
      case 3:
LAB_00100bf5:
        lVar16 = (longdouble)(long)ROUND(lVar18) + lVar17;
        break;
      case 4:
        goto LAB_00100bc8;
      default:
        uVar9 = FUN_00100aa9();
        return uVar9;
      }
LAB_00100a9d:
      iVar5 = iVar5 + -1;
      lVar17 = lVar19;
      if (iVar5 == 0) {
        lVar16 = lVar16 / lVar19;
      }
      else {
        do {
          lVar17 = lVar17 * lVar19;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar16 = lVar16 / lVar17;
      }
    }
    else {
      if (lVar18 <= __LC45) {
        uVar13 = 0;
        while( true ) {
          lVar17 = -lVar18;
          if ((longdouble)0 <= lVar18) {
            lVar17 = lVar18;
          }
          if (lVar17 < (longdouble)iStack0000000000000040) break;
          lVar18 = lVar18 / (longdouble)iStack0000000000000040;
          uVar13 = (ulong)((int)uVar13 + 1);
        }
        if (dev_debug == '\0') goto LAB_0010099e;
LAB_00100ff8:
        puStack_10 = SUB108(lVar18,0);
        uStack_8 = (undefined2)((unkuint10)lVar18 >> 0x40);
        __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
        if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
        lVar17 = -lVar18;
        if ((longdouble)0 <= lVar18) {
          lVar17 = lVar18;
        }
        lVar19 = (longdouble)__LC1;
        if (lVar17 < lVar19) goto LAB_0010106c;
        goto LAB_001011a2;
      }
      if (dev_debug != '\0') {
        lVar18 = (longdouble)__LC18;
        uVar13 = 0;
        goto LAB_00100ff8;
      }
      if (user_precision != 0xffffffffffffffff) {
        lVar18 = (longdouble)__LC18;
        uVar7 = 0;
        uVar13 = 0;
        goto LAB_001009b4;
      }
      switch(unaff_RBX) {
      case 0:
        lVar18 = (longdouble)__LC18;
        uVar13 = 0;
        iVar5 = 0;
        break;
      case 1:
        lVar18 = (longdouble)__LC18;
        uVar13 = 0;
        iVar5 = 0;
        goto LAB_00100b80;
      case 2:
        iVar5 = 0;
        uVar13 = 0;
        lVar18 = (longdouble)__LC18;
        break;
      case 3:
        lVar18 = (longdouble)__LC18;
        uVar13 = 0;
        goto LAB_0010120e;
      case 4:
        lVar18 = (longdouble)__LC18;
        iVar5 = 0;
        uVar13 = 0;
        goto LAB_00100bd4;
      default:
        lVar16 = (longdouble)0;
        uVar13 = 0;
        uVar7 = 0;
        goto LAB_00100b05;
      }
LAB_00100a60:
      lVar16 = (longdouble)(long)ROUND(lVar18);
      if (lVar16 < lVar18) {
        lVar16 = (longdouble)((long)ROUND(lVar18) + 1);
      }
LAB_00100a90:
      lVar16 = lVar16 + lVar17;
      if (iVar5 != 0) {
        lVar19 = (longdouble)__LC1;
        goto LAB_00100a9d;
      }
    }
LAB_00100abb:
    lVar17 = (longdouble)dVar1;
    if (lVar16 < (longdouble)0) {
      lVar18 = -lVar16;
      if (lVar17 <= lVar18) goto LAB_001010d4;
LAB_001010fa:
      if (lVar18 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      if (lVar17 <= lVar16) {
LAB_001010d4:
        lVar16 = lVar16 / lVar17;
        uVar13 = (ulong)((int)uVar13 + 1);
        lVar17 = (longdouble)0;
        if (!NAN(lVar16) && !NAN(lVar17)) {
          if (lVar16 == lVar17) goto LAB_00101112;
          if (lVar16 <= lVar17) {
            lVar18 = -lVar16;
            goto LAB_001010fa;
          }
        }
      }
      else if (lVar16 == (longdouble)0) goto LAB_00101112;
      if ((longdouble)__LC1 <= lVar16) goto LAB_00101112;
LAB_00100af3:
      bVar15 = (int)uVar13 != 0;
      uVar7 = (ulong)bVar15;
      uVar8 = (uint)bVar15;
    }
    if (dev_debug != '\0') {
      puStack_10 = SUB108(lVar16,0);
      uStack_8 = (undefined2)((unkuint10)lVar16 >> 0x40);
      __fprintf_chk(dVar1,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
      uVar7 = (ulong)uVar8;
    }
LAB_00100b05:
    puVar14 = &DAT_001025c3;
    *unaff_R15 = 0x73257325664c2a2e;
    if (user_precision != 0xffffffffffffffff) {
      uVar7 = user_precision & 0xffffffff;
    }
    *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
    puVar10 = suffix;
    if (suffix == (undefined *)0x0) {
      puVar10 = &_LC15;
    }
    uVar8 = (uint)uVar13;
    if (iVar6 != 4) {
      if (uVar8 == 1) {
        uVar9 = FUN_00100c18();
        return uVar9;
      }
LAB_00100b51:
      if (10 < uVar8) {
        uVar9 = FUN_00100c18(user_precision,puVar14);
        return uVar9;
      }
      uVar9 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar13]))();
      return uVar9;
    }
    if (uVar8 != 0) {
      puVar14 = &_LC20;
      goto LAB_00100b51;
    }
    puStack_10 = puVar10;
    iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,uVar7,
                           SUB108(lVar16,0),(short)((unkuint10)lVar16 >> 0x40),&_LC15,0x25c3);
  } while( true );
  param_2 = dev_debug;
  if (unaff_EBP == 0) {
    in_ST0 = (longdouble)
             (long)ROUND((longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) / __LC51) *
             __LC51;
    in_ST1 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) - in_ST0;
    switch(unaff_RBX) {
    case 0:
      goto switchD_001012e1_caseD_0;
    case 1:
      goto switchD_001012e1_caseD_1;
    case 2:
      goto LAB_00100e38;
    case 3:
      lVar17 = (longdouble)(long)ROUND(in_ST1) + in_ST0;
      break;
    case 4:
      goto LAB_00100fa0;
    default:
      lVar17 = (longdouble)0;
    }
    goto LAB_00100eab;
  }
  iVar6 = unaff_EBP + -1;
  lVar18 = (longdouble)__LC1;
  lVar17 = lVar18;
  if (iVar6 == 0) {
    lVar18 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) * lVar18;
    in_ST0 = (longdouble)(long)ROUND(lVar18 / __LC51) * __LC51;
    in_ST1 = lVar18 - in_ST0;
    switch(unaff_RBX) {
    case 0:
      goto code_r0x00100e4a;
    case 1:
      goto switchD_001012e1_caseD_1;
    case 2:
      break;
    case 3:
      goto switchD_001018bd_caseD_3;
    case 4:
      goto LAB_00100fa0;
    default:
      uVar9 = FUN_0010186b();
      return uVar9;
    }
  }
  else {
    do {
      lVar17 = lVar17 * lVar18;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar17 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) * lVar17;
    in_ST0 = (longdouble)(long)ROUND(lVar17 / __LC51) * __LC51;
    in_ST1 = lVar17 - in_ST0;
    switch(unaff_RBX) {
    case 0:
      goto switchD_001012e1_caseD_0;
    case 1:
      goto switchD_00100e22_caseD_1;
    case 2:
      break;
    case 3:
      lVar17 = (longdouble)(long)ROUND(in_ST1) + in_ST0;
      goto code_r0x00100e8f;
    case 4:
LAB_00100fa0:
      if (in_ST1 < (longdouble)0) {
        lVar17 = (longdouble)(long)ROUND(in_ST1 - (longdouble)__LC52);
      }
      else {
        lVar17 = (longdouble)(long)ROUND(in_ST1 + (longdouble)__LC52);
      }
      goto LAB_00100e80;
    default:
      uVar9 = FUN_00100e8f();
      return uVar9;
    }
  }
LAB_00100e38:
  if (in_ST1 < (longdouble)0) goto switchD_001012e1_caseD_1;
  goto switchD_001012e1_caseD_0;
switchD_00100e22_caseD_1:
switchD_001012e1_caseD_1:
  lVar11 = (long)ROUND(-in_ST1);
  lVar17 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -in_ST1));
  goto LAB_00100e80;
switchD_001018bd_caseD_3:
  uVar9 = FUN_00100e8f();
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00100e8f(undefined8 param_1,char param_2)

{
  double dVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  char *pcVar12;
  ulong unaff_RBX;
  ulong uVar13;
  int unaff_EBP;
  undefined *puVar14;
  int in_R9D;
  long unaff_R12;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar15;
  longdouble lVar16;
  longdouble lVar17;
  longdouble in_ST0;
  longdouble lVar18;
  longdouble in_ST1;
  longdouble lVar19;
  undefined *unaff_retaddr;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  undefined8 in_stack_00000028;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  undefined *local_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
code_r0x00100e8f:
  lVar18 = in_ST0;
  if (in_EAX == 0) {
    in_ST1 = in_ST1 / in_ST0;
  }
  else {
    do {
      lVar18 = lVar18 * in_ST0;
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
    in_ST1 = in_ST1 / lVar18;
  }
LAB_00100eab:
  uVar3 = uStack_8;
  uStack_8 = (undefined2)((unkuint10)in_ST1 >> 0x40);
  uVar2 = uStack_8;
  local_10 = SUB108(in_ST1,0);
  puVar14 = local_10;
  if (param_2 != '\0') {
    pcVar12 = "  no scaling, returning value: %.*Lf\n";
    if (in_R9D != 0) {
      pcVar12 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
    }
    __fprintf_chk(_stderr,2,pcVar12,unaff_EBP);
    unaff_RBX = CONCAT62(uStack_6,uStack_8);
    uVar3 = uStack_8;
  }
  uStack_8 = uVar3;
  *(undefined4 *)unaff_R15 = 0x664c2a2e;
  *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
  local_10 = suffix;
  if (suffix == (undefined *)0x0) {
    local_10 = &_LC15;
  }
  iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,
                         puVar14,uVar2);
  do {
    if ((iVar6 < 0) ||
       (lVar11 = (long)iVar6 - (padding_buffer_size + -1),
       SBORROW8((long)iVar6,padding_buffer_size + -1))) {
      uStack_8 = 0x1a91;
      uStack_6 = 0x10;
      uVar9 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
      uStack_8 = uStack0000000000000008;
      uStack_6 = uStack000000000000000a;
      register0x00000020 = (BADSPACEBASE *)&local_10;
      local_10 = unaff_retaddr;
      error(1,0,uVar9);
      goto LAB_00101726;
    }
    if (lVar11 < 1) {
      if (dev_debug != '\0') {
        uStack_8 = 0x1786;
        uStack_6 = 0x10;
        uVar9 = quote(padding_buffer);
        uStack_8 = uStack0000000000000008;
        local_10 = unaff_retaddr;
        __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar9);
      }
      if (padding_width != 0) {
        uStack_8 = 0x16a8;
        uStack_6 = 0x10;
        iVar6 = gnu_mbswidth(padding_buffer,3);
        if (-1 < iVar6) {
          if (padding_width < 0) {
            if (padding_width < -iVar6) {
              uVar13 = padding_width + iVar6;
              if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
              goto LAB_001016ec;
            }
          }
          else if (iVar6 < padding_width) {
            uVar13 = padding_width - iVar6;
            unaff_RBX = uVar13;
            if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
            uStack_8 = 0x16ec;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
            unaff_RBX = uVar13;
            if (0 < (long)uVar13) {
LAB_00101700:
              do {
                pcVar12 = _stdout->_IO_write_ptr;
                if (pcVar12 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar12 + 1;
                  *pcVar12 = ' ';
                }
                else {
                  uStack_8 = 0x185a;
                  uStack_6 = 0x10;
                  __overflow(_stdout,0x20);
                }
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
LAB_00101726:
            *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
            fputs_unlocked(padding_buffer,_stdout);
            if ((long)unaff_RBX < 0) {
              do {
                pcVar12 = _stdout->_IO_write_ptr;
                if (pcVar12 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar12 + 1;
                  *pcVar12 = ' ';
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
                  __overflow(_stdout,0x20);
                }
                unaff_RBX = unaff_RBX + 1;
              } while (unaff_RBX != 0);
            }
LAB_00101518:
            if (format_str_suffix != (char *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
              fputs_unlocked(format_str_suffix,_stdout);
            }
            if (*(long *)((long)register0x00000020 + 0xb8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
              __stack_chk_fail();
            }
            return 1;
          }
        }
      }
      if (format_str_prefix != (char *)0x0) {
        uStack_8 = 0x14fe;
        uStack_6 = 0x10;
        fputs_unlocked(format_str_prefix,_stdout);
      }
      uStack_8 = 0x1511;
      uStack_6 = 0x10;
      fputs_unlocked(padding_buffer,_stdout);
      goto LAB_00101518;
    }
    uStack_8 = 0xc90;
    uStack_6 = 0x10;
    unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar11,0xffffffffffffffff,1);
    iVar6 = scale_to;
    in_R9D = grouping;
    unaff_R12 = padding_buffer_size;
    unaff_RBX = (ulong)round_style;
    if (grouping == 0) {
      uVar9 = 0x19;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
    }
    else {
      in_stack_00000090._1_1_ = 0x27;
      uVar9 = 0x18;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
    }
    padding_buffer = unaff_R14;
    if (zero_padding_width != 0) {
      uStack_8 = 0xd58;
      uStack_6 = 0x10;
      iVar5 = __sprintf_chk(unaff_R15,2,uVar9);
      unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar5);
    }
    lVar18 = __LC19;
    if (dev_debug != '\0') {
      uStack_8 = 0xd94;
      uStack_6 = 0x10;
      fwrite("double_to_human:\n",1,0x11,_stderr);
      lVar18 = __LC19;
    }
    __LC19 = lVar18;
    if (iVar6 == 0) break;
    if (iVar6 - 3U < 2) {
      iStack0000000000000040 = 0x400;
      dVar1 = _LC16;
    }
    else {
      iStack0000000000000040 = 1000;
      dVar1 = _LC17;
    }
    lVar19 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr);
    if (lVar19 < __LC44) {
      lVar19 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr);
      uVar13 = 0;
      if (dev_debug != '\0') goto LAB_00100ff8;
LAB_0010099e:
      if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
      uVar7 = (ulong)((int)uVar13 * 3);
LAB_001009b4:
      if ((long)user_precision <= (long)uVar7) {
        uVar7 = user_precision;
      }
      iVar5 = (int)uVar7;
      if (iVar5 == 0) {
LAB_001011a2:
        lVar18 = (longdouble)(long)ROUND(lVar19 / __LC51) * __LC51;
        lVar19 = lVar19 - lVar18;
        switch(unaff_RBX) {
        case 0:
          iVar5 = 0;
          goto LAB_00100a60;
        case 1:
          iVar5 = 0;
          break;
        case 2:
          iVar5 = 0;
LAB_00100a40:
          if ((longdouble)0 <= lVar19) goto LAB_00100a60;
          break;
        case 3:
LAB_0010120e:
          lVar17 = (longdouble)(long)ROUND(lVar19) + lVar18;
          goto LAB_00100abb;
        case 4:
          iVar5 = 0;
LAB_00100bc8:
          if (lVar19 < (longdouble)0) {
            lVar17 = (longdouble)(long)ROUND(lVar19 - (longdouble)__LC52);
          }
          else {
LAB_00100bd4:
            lVar17 = (longdouble)(long)ROUND(lVar19 + (longdouble)__LC52);
          }
          goto LAB_00100a90;
        default:
          uVar9 = FUN_00104126();
          return uVar9;
        }
LAB_00100b80:
        lVar11 = (long)ROUND(-lVar19);
        lVar17 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -lVar19));
        goto LAB_00100a90;
      }
      iVar4 = iVar5 + -1;
      if (iVar4 == 0) {
        lVar16 = (longdouble)__LC1;
LAB_0010106c:
        lVar18 = (longdouble)(long)ROUND((lVar19 * lVar16) / __LC51) * __LC51;
        lVar19 = lVar19 * lVar16 - lVar18;
        iVar5 = 1;
        switch(unaff_RBX) {
        case 0:
          iVar5 = 1;
          goto LAB_00100a60;
        case 1:
          iVar5 = 1;
          break;
        case 2:
          iVar5 = 1;
          goto LAB_00100a40;
        case 3:
          goto LAB_00100bf5;
        case 4:
          iVar5 = 1;
          goto LAB_00100bc8;
        default:
          uVar9 = FUN_00104126();
          return uVar9;
        }
        goto LAB_00100b80;
      }
      lVar16 = (longdouble)__LC1;
      lVar17 = lVar16;
      do {
        lVar17 = lVar17 * lVar16;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar18 = (longdouble)(long)ROUND((lVar17 * lVar19) / __LC51) * __LC51;
      lVar19 = lVar17 * lVar19 - lVar18;
      switch(unaff_RBX) {
      case 0:
        goto LAB_00100a60;
      case 1:
        goto LAB_00100b80;
      case 2:
        goto LAB_00100a40;
      case 3:
LAB_00100bf5:
        lVar17 = (longdouble)(long)ROUND(lVar19) + lVar18;
        break;
      case 4:
        goto LAB_00100bc8;
      default:
        uVar9 = FUN_00100aa9();
        return uVar9;
      }
LAB_00100a9d:
      iVar5 = iVar5 + -1;
      lVar18 = lVar16;
      if (iVar5 == 0) {
        lVar17 = lVar17 / lVar16;
      }
      else {
        do {
          lVar18 = lVar18 * lVar16;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar17 = lVar17 / lVar18;
      }
    }
    else {
      if (lVar19 <= __LC45) {
        uVar13 = 0;
        while( true ) {
          lVar18 = -lVar19;
          if ((longdouble)0 <= lVar19) {
            lVar18 = lVar19;
          }
          if (lVar18 < (longdouble)iStack0000000000000040) break;
          lVar19 = lVar19 / (longdouble)iStack0000000000000040;
          uVar13 = (ulong)((int)uVar13 + 1);
        }
        if (dev_debug == '\0') goto LAB_0010099e;
LAB_00100ff8:
        local_10 = SUB108(lVar19,0);
        uStack_8 = (undefined2)((unkuint10)lVar19 >> 0x40);
        __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
        if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
        lVar18 = -lVar19;
        if ((longdouble)0 <= lVar19) {
          lVar18 = lVar19;
        }
        lVar16 = (longdouble)__LC1;
        if (lVar18 < lVar16) goto LAB_0010106c;
        goto LAB_001011a2;
      }
      if (dev_debug != '\0') {
        lVar19 = (longdouble)__LC18;
        uVar13 = 0;
        goto LAB_00100ff8;
      }
      if (user_precision != 0xffffffffffffffff) {
        lVar19 = (longdouble)__LC18;
        uVar7 = 0;
        uVar13 = 0;
        goto LAB_001009b4;
      }
      switch(unaff_RBX) {
      case 0:
        lVar19 = (longdouble)__LC18;
        uVar13 = 0;
        iVar5 = 0;
        break;
      case 1:
        lVar19 = (longdouble)__LC18;
        uVar13 = 0;
        iVar5 = 0;
        goto LAB_00100b80;
      case 2:
        iVar5 = 0;
        uVar13 = 0;
        lVar19 = (longdouble)__LC18;
        break;
      case 3:
        lVar19 = (longdouble)__LC18;
        uVar13 = 0;
        goto LAB_0010120e;
      case 4:
        lVar19 = (longdouble)__LC18;
        iVar5 = 0;
        uVar13 = 0;
        goto LAB_00100bd4;
      default:
        lVar17 = (longdouble)0;
        uVar13 = 0;
        uVar7 = 0;
        goto LAB_00100b05;
      }
LAB_00100a60:
      lVar17 = (longdouble)(long)ROUND(lVar19);
      if (lVar17 < lVar19) {
        lVar17 = (longdouble)((long)ROUND(lVar19) + 1);
      }
LAB_00100a90:
      lVar17 = lVar17 + lVar18;
      if (iVar5 != 0) {
        lVar16 = (longdouble)__LC1;
        goto LAB_00100a9d;
      }
    }
LAB_00100abb:
    lVar18 = (longdouble)dVar1;
    if (lVar17 < (longdouble)0) {
      lVar19 = -lVar17;
      if (lVar18 <= lVar19) goto LAB_001010d4;
LAB_001010fa:
      if (lVar19 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      if (lVar18 <= lVar17) {
LAB_001010d4:
        lVar17 = lVar17 / lVar18;
        uVar13 = (ulong)((int)uVar13 + 1);
        lVar18 = (longdouble)0;
        if (!NAN(lVar17) && !NAN(lVar18)) {
          if (lVar17 == lVar18) goto LAB_00101112;
          if (lVar17 <= lVar18) {
            lVar19 = -lVar17;
            goto LAB_001010fa;
          }
        }
      }
      else if (lVar17 == (longdouble)0) goto LAB_00101112;
      if ((longdouble)__LC1 <= lVar17) goto LAB_00101112;
LAB_00100af3:
      bVar15 = (int)uVar13 != 0;
      uVar7 = (ulong)bVar15;
      uVar8 = (uint)bVar15;
    }
    if (dev_debug != '\0') {
      local_10 = SUB108(lVar17,0);
      uStack_8 = (undefined2)((unkuint10)lVar17 >> 0x40);
      __fprintf_chk(dVar1,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
      uVar7 = (ulong)uVar8;
    }
LAB_00100b05:
    puVar14 = &DAT_001025c3;
    *unaff_R15 = 0x73257325664c2a2e;
    if (user_precision != 0xffffffffffffffff) {
      uVar7 = user_precision & 0xffffffff;
    }
    *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
    puVar10 = suffix;
    if (suffix == (undefined *)0x0) {
      puVar10 = &_LC15;
    }
    uVar8 = (uint)uVar13;
    if (iVar6 != 4) {
      if (uVar8 == 1) {
        uVar9 = FUN_00100c18();
        return uVar9;
      }
LAB_00100b51:
      if (10 < uVar8) {
        uVar9 = FUN_00100c18(user_precision,puVar14);
        return uVar9;
      }
      uVar9 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar13]))();
      return uVar9;
    }
    if (uVar8 != 0) {
      puVar14 = &_LC20;
      goto LAB_00100b51;
    }
    local_10 = puVar10;
    iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,uVar7,
                           SUB108(lVar17,0),(short)((unkuint10)lVar17 >> 0x40),&_LC15,0x25c3);
  } while( true );
  param_2 = dev_debug;
  if (unaff_EBP == 0) {
    lVar19 = (longdouble)
             (long)ROUND((longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) / __LC51) *
             __LC51;
    lVar18 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) - lVar19;
    switch(unaff_RBX) {
    case 0:
      goto switchD_001012e1_caseD_0;
    case 1:
      goto switchD_001012e1_caseD_1;
    case 2:
      goto LAB_00100e38;
    case 3:
      in_ST1 = (longdouble)(long)ROUND(lVar18) + lVar19;
      goto LAB_00100eab;
    case 4:
      goto LAB_00100fa0;
    default:
      in_ST1 = (longdouble)0;
      goto LAB_00100eab;
    }
  }
  in_EAX = unaff_EBP + -1;
  in_ST0 = (longdouble)__LC1;
  lVar18 = in_ST0;
  iVar6 = in_EAX;
  if (in_EAX == 0) {
    lVar18 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) * in_ST0;
    lVar19 = (longdouble)(long)ROUND(lVar18 / __LC51) * __LC51;
    lVar18 = lVar18 - lVar19;
    switch(unaff_RBX) {
    case 0:
      break;
    case 1:
      goto switchD_001012e1_caseD_1;
    case 2:
      goto LAB_00100e38;
    case 3:
      uVar9 = FUN_00100e8f();
      return uVar9;
    case 4:
      goto LAB_00100fa0;
    default:
      uVar9 = FUN_0010186b();
      return uVar9;
    }
  }
  else {
    do {
      lVar18 = lVar18 * in_ST0;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar18 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) * lVar18;
    lVar19 = (longdouble)(long)ROUND(lVar18 / __LC51) * __LC51;
    lVar18 = lVar18 - lVar19;
    switch(unaff_RBX) {
    case 0:
      break;
    case 1:
switchD_001012e1_caseD_1:
      lVar11 = (long)ROUND(-lVar18);
      lVar16 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -lVar18));
      goto LAB_00100e80;
    case 2:
LAB_00100e38:
      if (lVar18 < (longdouble)0) goto switchD_001012e1_caseD_1;
      break;
    case 3:
      in_ST1 = (longdouble)(long)ROUND(lVar18) + lVar19;
      goto code_r0x00100e8f;
    case 4:
LAB_00100fa0:
      if (lVar18 < (longdouble)0) {
        lVar16 = (longdouble)(long)ROUND(lVar18 - (longdouble)__LC52);
      }
      else {
        lVar16 = (longdouble)(long)ROUND(lVar18 + (longdouble)__LC52);
      }
      goto LAB_00100e80;
    default:
      goto switchD_00100e22_default;
    }
  }
switchD_001012e1_caseD_0:
  lVar16 = (longdouble)(long)ROUND(lVar18);
  if (lVar16 < lVar18) {
    lVar16 = (longdouble)((long)ROUND(lVar18) + 1);
  }
LAB_00100e80:
  in_ST1 = lVar16 + lVar19;
  if (unaff_EBP != 0) goto code_r0x00100e86;
  goto LAB_00100eab;
code_r0x00100e86:
  in_ST0 = (longdouble)__LC1;
  in_EAX = unaff_EBP + -1;
  goto code_r0x00100e8f;
switchD_00100e22_default:
  uVar9 = FUN_00100e8f();
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00101408(void)

{
  long lVar1;
  double dVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  undefined *puVar15;
  long lVar16;
  char *pcVar17;
  uint unaff_EBX;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  char *pcVar21;
  char *unaff_R12;
  undefined8 *puVar22;
  long in_FS_OFFSET;
  bool bVar23;
  longdouble lVar24;
  longdouble lVar25;
  longdouble lVar26;
  longdouble lVar27;
  longdouble in_ST0;
  undefined *puVar28;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  int iStack0000000000000010;
  int iStack0000000000000040;
  char *in_stack_00000060;
  longdouble in_stack_00000070;
  undefined1 uStack0000000000000090;
  undefined1 uStack0000000000000091;
  undefined *local_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
  local_10 = SUB108(in_ST0,0);
  uStack_8 = (undefined2)((unkuint10)in_ST0 >> 0x40);
  __fprintf_chk(_stderr,2,"  suffix power=%d^%d = %Lf\n");
  in_stack_00000070 = in_ST0 * in_stack_00000070;
  puVar28 = SUB108(in_stack_00000070,0);
  uStack0000000000000008 = (undefined2)((unkuint10)in_stack_00000070 >> 0x40);
  if (dev_debug != '\0') {
    local_10 = puVar28;
    uStack_8 = uStack0000000000000008;
    __fprintf_chk(_stderr,2,"  returning value: %Lf (%LG)\n");
  }
  uVar3 = conv_exit_code;
  if ((in_stack_00000060 == (char *)0x0) || (*in_stack_00000060 == '\0')) {
    if ((unaff_EBX == 1) && (debug != '\0')) {
      uStack_8 = 0x81e;
      uStack_6 = 0x10;
      quote();
      uStack_8 = 0x834;
      uStack_6 = 0x10;
      uVar8 = dcgettext(0,"large input value %s: possible precision loss",5);
      uStack_8 = 0x845;
      uStack_6 = 0x10;
      error(0,0,uVar8);
    }
  }
  else {
    if (inval_style != 3) {
      uStack_8 = 0x4d0;
      uStack_6 = 0x10;
      uVar8 = quote_n(1);
      uStack_8 = 0x4dd;
      uStack_6 = 0x10;
      uVar9 = quote_n(0);
      uStack_8 = 0x4f3;
      uStack_6 = 0x10;
      uVar10 = dcgettext(0,"invalid suffix in input %s: %s",5);
      uStack_8 = 0x507;
      uStack_6 = 0x10;
      error(uVar3,0,uVar10,uVar9,uVar8);
    }
    unaff_EBX = 5;
  }
  uVar3 = conv_exit_code;
  if ((from_unit_size != 1) || (to_unit_size != 1)) {
    lVar24 = (longdouble)from_unit_size;
    if (from_unit_size < 0) {
      lVar24 = lVar24 + (longdouble)__LC43;
    }
    lVar25 = (longdouble)to_unit_size;
    if (to_unit_size < 0) {
      lVar25 = lVar25 + (longdouble)__LC43;
    }
    lVar25 = (in_stack_00000070 * lVar24) / lVar25;
    puVar28 = SUB108(lVar25,0);
    uStack0000000000000008 = (undefined2)((unkuint10)lVar25 >> 0x40);
  }
  if (unaff_EBX < 2) {
    uVar18 = user_precision;
    if (user_precision == 0xffffffffffffffff) {
      uVar18 = _iStack0000000000000010;
    }
    if (((longdouble)CONCAT28(uStack0000000000000008,puVar28) < __LC44) ||
       (__LC45 < (longdouble)CONCAT28(uStack0000000000000008,puVar28))) {
      if ((uVar18 < 0x13) || (scale_to != 0)) {
LAB_0010089f:
        iStack0000000000000010 = (int)uVar18;
        do {
          iVar14 = scale_to;
          iVar7 = grouping;
          pcVar21 = padding_buffer;
          lVar16 = padding_buffer_size;
          uStack0000000000000090 = 0x25;
          uVar19 = (ulong)round_style;
          if (grouping != 0) {
            uStack0000000000000091 = 0x27;
            uVar8 = 0x18;
            puVar22 = (undefined8 *)((long)&stack0x00000090 + 2);
            if (zero_padding_width != 0) goto LAB_00100d3d;
LAB_0010090a:
            if (dev_debug != '\0') goto LAB_00100d72;
LAB_0010091a:
            if (iVar14 == 0) goto LAB_00100da9;
LAB_00100923:
            if (iVar14 - 3U < 2) {
              iStack0000000000000040 = 0x400;
              dVar2 = _LC16;
            }
            else {
              iStack0000000000000040 = 1000;
              dVar2 = _LC17;
            }
            lVar24 = (longdouble)CONCAT28(uStack0000000000000008,puVar28);
            if (lVar24 < __LC44) {
              lVar24 = (longdouble)CONCAT28(uStack0000000000000008,puVar28);
              uVar13 = 0;
              if (dev_debug != '\0') goto LAB_00100ff8;
LAB_0010099e:
              if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
              uVar11 = (ulong)((int)uVar13 * 3);
LAB_001009b4:
              if ((long)user_precision <= (long)uVar11) {
                uVar11 = user_precision;
              }
              iVar7 = (int)uVar11;
              if (iVar7 == 0) {
LAB_001011a2:
                lVar25 = (longdouble)(long)ROUND(lVar24 / __LC51) * __LC51;
                lVar24 = lVar24 - lVar25;
                switch(uVar19) {
                case 0:
                  iVar7 = 0;
                  goto LAB_00100a60;
                case 1:
                  iVar7 = 0;
                  break;
                case 2:
                  iVar7 = 0;
LAB_00100a40:
                  if ((longdouble)0 <= lVar24) goto LAB_00100a60;
                  break;
                case 3:
LAB_0010120e:
                  lVar27 = (longdouble)(long)ROUND(lVar24) + lVar25;
                  goto LAB_00100abb;
                case 4:
                  iVar7 = 0;
LAB_00100bc8:
                  if (lVar24 < (longdouble)0) {
                    lVar27 = (longdouble)(long)ROUND(lVar24 - (longdouble)__LC52);
                  }
                  else {
LAB_00100bd4:
                    lVar27 = (longdouble)(long)ROUND(lVar24 + (longdouble)__LC52);
                  }
                  goto LAB_00100a90;
                default:
                  uVar8 = FUN_00104126();
                  return uVar8;
                }
LAB_00100b80:
                lVar1 = (long)ROUND(-lVar24);
                lVar27 = (longdouble)(long)-(lVar1 + (ulong)((longdouble)lVar1 < -lVar24));
                goto LAB_00100a90;
              }
              iVar6 = iVar7 + -1;
              if (iVar6 == 0) {
                lVar26 = (longdouble)__LC1;
LAB_0010106c:
                lVar25 = (longdouble)(long)ROUND((lVar24 * lVar26) / __LC51) * __LC51;
                lVar24 = lVar24 * lVar26 - lVar25;
                iVar7 = 1;
                switch(uVar19) {
                case 0:
                  iVar7 = 1;
                  goto LAB_00100a60;
                case 1:
                  iVar7 = 1;
                  break;
                case 2:
                  iVar7 = 1;
                  goto LAB_00100a40;
                case 3:
                  goto LAB_00100bf5;
                case 4:
                  iVar7 = 1;
                  goto LAB_00100bc8;
                default:
                  uVar8 = FUN_00104126();
                  return uVar8;
                }
                goto LAB_00100b80;
              }
              lVar26 = (longdouble)__LC1;
              lVar27 = lVar26;
              do {
                lVar27 = lVar27 * lVar26;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              lVar25 = (longdouble)(long)ROUND((lVar27 * lVar24) / __LC51) * __LC51;
              lVar24 = lVar27 * lVar24 - lVar25;
              switch(uVar19) {
              case 0:
                goto LAB_00100a60;
              case 1:
                goto LAB_00100b80;
              case 2:
                goto LAB_00100a40;
              case 3:
LAB_00100bf5:
                lVar27 = (longdouble)(long)ROUND(lVar24) + lVar25;
                break;
              case 4:
                goto LAB_00100bc8;
              default:
                uVar8 = FUN_00100aa9();
                return uVar8;
              }
LAB_00100a9d:
              iVar7 = iVar7 + -1;
              lVar24 = lVar26;
              if (iVar7 == 0) {
                lVar27 = lVar27 / lVar26;
              }
              else {
                do {
                  lVar24 = lVar24 * lVar26;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                lVar27 = lVar27 / lVar24;
              }
            }
            else {
              if (lVar24 <= __LC45) {
                uVar13 = 0;
                while( true ) {
                  lVar25 = -lVar24;
                  if ((longdouble)0 <= lVar24) {
                    lVar25 = lVar24;
                  }
                  if (lVar25 < (longdouble)iStack0000000000000040) break;
                  lVar24 = lVar24 / (longdouble)iStack0000000000000040;
                  uVar13 = (ulong)((int)uVar13 + 1);
                }
                if (dev_debug == '\0') goto LAB_0010099e;
LAB_00100ff8:
                local_10 = SUB108(lVar24,0);
                uStack_8 = (undefined2)((unkuint10)lVar24 >> 0x40);
                __fprintf_chk(dVar2,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
                if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
                lVar25 = -lVar24;
                if ((longdouble)0 <= lVar24) {
                  lVar25 = lVar24;
                }
                lVar26 = (longdouble)__LC1;
                if (lVar25 < lVar26) goto LAB_0010106c;
                goto LAB_001011a2;
              }
              if (dev_debug != '\0') {
                lVar24 = (longdouble)__LC18;
                uVar13 = 0;
                goto LAB_00100ff8;
              }
              if (user_precision != 0xffffffffffffffff) {
                lVar24 = (longdouble)__LC18;
                uVar11 = 0;
                uVar13 = 0;
                goto LAB_001009b4;
              }
              lVar25 = __LC19;
              switch(uVar19) {
              case 0:
                lVar24 = (longdouble)__LC18;
                uVar13 = 0;
                iVar7 = 0;
                break;
              case 1:
                lVar24 = (longdouble)__LC18;
                uVar13 = 0;
                iVar7 = 0;
                goto LAB_00100b80;
              case 2:
                iVar7 = 0;
                uVar13 = 0;
                lVar24 = (longdouble)__LC18;
                break;
              case 3:
                lVar24 = (longdouble)__LC18;
                uVar13 = 0;
                goto LAB_0010120e;
              case 4:
                lVar24 = (longdouble)__LC18;
                iVar7 = 0;
                uVar13 = 0;
                goto LAB_00100bd4;
              default:
                lVar27 = (longdouble)0;
                uVar13 = 0;
                uVar11 = 0;
                goto LAB_00100b05;
              }
LAB_00100a60:
              lVar27 = (longdouble)(long)ROUND(lVar24);
              if (lVar27 < lVar24) {
                lVar27 = (longdouble)((long)ROUND(lVar24) + 1);
              }
LAB_00100a90:
              lVar27 = lVar27 + lVar25;
              if (iVar7 != 0) {
                lVar26 = (longdouble)__LC1;
                goto LAB_00100a9d;
              }
            }
LAB_00100abb:
            lVar24 = (longdouble)dVar2;
            if (lVar27 < (longdouble)0) {
              lVar25 = -lVar27;
              if (lVar24 <= lVar25) goto LAB_001010d4;
LAB_001010fa:
              if (lVar25 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
              uVar11 = 0;
              uVar12 = 0;
            }
            else {
              if (lVar24 <= lVar27) {
LAB_001010d4:
                lVar27 = lVar27 / lVar24;
                uVar13 = (ulong)((int)uVar13 + 1);
                lVar24 = (longdouble)0;
                if (!NAN(lVar27) && !NAN(lVar24)) {
                  if (lVar27 == lVar24) goto LAB_00101112;
                  if (lVar27 <= lVar24) {
                    lVar25 = -lVar27;
                    goto LAB_001010fa;
                  }
                }
              }
              else if (lVar27 == (longdouble)0) goto LAB_00101112;
              if ((longdouble)__LC1 <= lVar27) goto LAB_00101112;
LAB_00100af3:
              bVar23 = (int)uVar13 != 0;
              uVar11 = (ulong)bVar23;
              uVar12 = (uint)bVar23;
            }
            if (dev_debug != '\0') {
              local_10 = SUB108(lVar27,0);
              uStack_8 = (undefined2)((unkuint10)lVar27 >> 0x40);
              __fprintf_chk(dVar2,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
              uVar11 = (ulong)uVar12;
            }
LAB_00100b05:
            puVar20 = &DAT_001025c3;
            *puVar22 = 0x73257325664c2a2e;
            if (user_precision != 0xffffffffffffffff) {
              uVar11 = user_precision & 0xffffffff;
            }
            *(undefined4 *)((long)puVar22 + 7) = 0x732573;
            puVar15 = suffix;
            if (suffix == (undefined *)0x0) {
              puVar15 = &_LC15;
            }
            uVar12 = (uint)uVar13;
            if (iVar14 != 4) {
              if (uVar12 == 1) {
                uVar8 = FUN_00100c18();
                return uVar8;
              }
LAB_00100b51:
              if (10 < uVar12) {
                uVar8 = FUN_00100c18(user_precision,puVar20);
                return uVar8;
              }
              uVar8 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar13]))();
              return uVar8;
            }
            if (uVar12 != 0) {
              puVar20 = &_LC20;
              goto LAB_00100b51;
            }
            local_10 = puVar15;
            iVar7 = __snprintf_chk(pcVar21,lVar16,2,0xffffffffffffffff,&stack0x00000090,uVar11,
                                   SUB108(lVar27,0),(short)((unkuint10)lVar27 >> 0x40),&_LC15,0x25c3
                                  );
            goto LAB_00100c48;
          }
          uVar8 = 0x19;
          puVar22 = (undefined8 *)((long)&stack0x00000090 + 1);
          if (zero_padding_width == 0) goto LAB_0010090a;
LAB_00100d3d:
          uStack_8 = 0xd58;
          uStack_6 = 0x10;
          iVar6 = __sprintf_chk(puVar22,2,uVar8);
          puVar22 = (undefined8 *)((long)puVar22 + (long)iVar6);
          if (dev_debug == '\0') goto LAB_0010091a;
LAB_00100d72:
          uStack_8 = 0xd94;
          uStack_6 = 0x10;
          fwrite("double_to_human:\n",1,0x11,_stderr);
          if (iVar14 != 0) goto LAB_00100923;
LAB_00100da9:
          uVar5 = uStack_8;
          if (iStack0000000000000010 == 0) {
            lVar25 = (longdouble)
                     (long)ROUND((longdouble)CONCAT28(uStack0000000000000008,puVar28) / __LC51) *
                     __LC51;
            lVar24 = (longdouble)CONCAT28(uStack0000000000000008,puVar28) - lVar25;
            switch(uVar19) {
            case 0:
              goto switchD_001012e1_caseD_0;
            case 1:
              goto switchD_001012e1_caseD_1;
            case 2:
              goto LAB_00100e38;
            case 3:
              lVar26 = (longdouble)(long)ROUND(lVar24) + lVar25;
              break;
            case 4:
              goto LAB_00100fa0;
            default:
              lVar26 = (longdouble)0;
            }
            goto LAB_00100eab;
          }
          iVar14 = iStack0000000000000010 + -1;
          lVar26 = (longdouble)__LC1;
          lVar24 = lVar26;
          if (iVar14 == 0) {
            lVar26 = (longdouble)CONCAT28(uStack0000000000000008,puVar28) * lVar26;
            lVar25 = (longdouble)(long)ROUND(lVar26 / __LC51) * __LC51;
            lVar24 = lVar26 - lVar25;
            switch(uVar19) {
            case 0:
              break;
            case 1:
              goto switchD_001012e1_caseD_1;
            case 2:
              goto LAB_00100e38;
            case 3:
              uVar8 = FUN_00100e8f();
              return uVar8;
            case 4:
              goto LAB_00100fa0;
            default:
              uVar8 = FUN_0010186b();
              return uVar8;
            }
            goto switchD_001012e1_caseD_0;
          }
          do {
            lVar24 = lVar24 * lVar26;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          lVar24 = (longdouble)CONCAT28(uStack0000000000000008,puVar28) * lVar24;
          lVar25 = (longdouble)(long)ROUND(lVar24 / __LC51) * __LC51;
          lVar24 = lVar24 - lVar25;
          switch(uVar19) {
          case 0:
            goto switchD_001012e1_caseD_0;
          case 1:
switchD_001012e1_caseD_1:
            lVar1 = (long)ROUND(-lVar24);
            lVar26 = (longdouble)(long)-(lVar1 + (ulong)((longdouble)lVar1 < -lVar24));
            break;
          case 2:
LAB_00100e38:
            if (lVar24 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
            lVar26 = (longdouble)(long)ROUND(lVar24);
            if (lVar26 < lVar24) {
              lVar26 = (longdouble)((long)ROUND(lVar24) + 1);
            }
            break;
          case 3:
            lVar26 = (longdouble)(long)ROUND(lVar24) + lVar25;
            goto code_r0x00100e8f;
          case 4:
LAB_00100fa0:
            if (lVar24 < (longdouble)0) {
              lVar26 = (longdouble)(long)ROUND(lVar24 - (longdouble)__LC52);
            }
            else {
              lVar26 = (longdouble)(long)ROUND(lVar24 + (longdouble)__LC52);
            }
            break;
          default:
            uVar8 = FUN_00100e8f();
            return uVar8;
          }
          lVar26 = lVar26 + lVar25;
          if (iStack0000000000000010 != 0) {
code_r0x00100e8f:
            lVar25 = (longdouble)__LC1;
            iVar14 = iStack0000000000000010 + -1;
            lVar24 = lVar25;
            if (iVar14 == 0) {
              lVar26 = lVar26 / lVar25;
            }
            else {
              do {
                lVar24 = lVar24 * lVar25;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
              lVar26 = lVar26 / lVar24;
            }
          }
LAB_00100eab:
          uStack_8 = (undefined2)((unkuint10)lVar26 >> 0x40);
          uVar4 = uStack_8;
          local_10 = SUB108(lVar26,0);
          puVar20 = local_10;
          if (dev_debug != '\0') {
            pcVar17 = "  no scaling, returning value: %.*Lf\n";
            if (iVar7 != 0) {
              pcVar17 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
            }
            __fprintf_chk(_stderr,2,pcVar17,uVar18 & 0xffffffff);
            uVar19 = CONCAT62(uStack_6,uStack_8);
            uVar5 = uStack_8;
          }
          uStack_8 = uVar5;
          *(undefined4 *)puVar22 = 0x664c2a2e;
          *(undefined4 *)((long)puVar22 + 3) = 0x732566;
          local_10 = suffix;
          if (suffix == (undefined *)0x0) {
            local_10 = &_LC15;
          }
          iVar7 = __snprintf_chk(pcVar21,lVar16,2,0xffffffffffffffff,&stack0x00000090,
                                 uVar18 & 0xffffffff,puVar20,uVar4);
LAB_00100c48:
          if ((iVar7 < 0) ||
             (lVar16 = (long)iVar7 - (padding_buffer_size + -1),
             SBORROW8((long)iVar7,padding_buffer_size + -1))) {
            uStack_8 = 0x1a91;
            uStack_6 = 0x10;
            uVar8 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
            uStack_8 = uStack0000000000000008;
            uStack_6 = uStack000000000000000a;
            register0x00000020 = (BADSPACEBASE *)&local_10;
            local_10 = puVar28;
            error(1,0,uVar8);
            goto LAB_00101726;
          }
          if (lVar16 < 1) goto LAB_001014cb;
          uStack_8 = 0xc90;
          uStack_6 = 0x10;
          padding_buffer =
               (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar16,0xffffffffffffffff,1);
        } while( true );
      }
      if (inval_style != 3) {
LAB_00101574:
        uStack_8 = 0x1587;
        uStack_6 = 0x10;
        uVar8 = dcgettext(0,
                          "value/precision too large to be printed: \'%Lg/%zu\' (consider using --to)"
                          ,5);
        uStack_8 = uStack0000000000000008;
        local_10 = puVar28;
        error(uVar3,0,uVar8,uVar18);
      }
    }
    else {
      lVar24 = (longdouble)CONCAT28(uStack0000000000000008,puVar28);
      iVar7 = 0;
      while( true ) {
        lVar25 = -lVar24;
        if ((longdouble)0 <= lVar24) {
          lVar25 = lVar24;
        }
        if (lVar25 < (longdouble)__LC1) break;
        lVar24 = lVar24 / (longdouble)__LC1;
        iVar7 = iVar7 + 1;
      }
      if ((scale_to == 0) && (0x12 < (long)iVar7 + uVar18)) {
        if (inval_style != 3) {
          pcVar21 = "value too large to be printed: \'%Lg\' (consider using --to)";
          if (uVar18 != 0) goto LAB_00101574;
LAB_001013d7:
          uStack_8 = 0x13de;
          uStack_6 = 0x10;
          uVar8 = dcgettext(0,pcVar21,5);
          uStack_8 = uStack0000000000000008;
          local_10 = puVar28;
          error(uVar3,0,uVar8);
        }
      }
      else {
        if (iVar7 < 0x21) goto LAB_0010089f;
        if (inval_style != 3) {
          pcVar21 = "value too large to be printed: \'%Lg\' (cannot handle values > 999Q)";
          goto LAB_001013d7;
        }
      }
    }
  }
  uStack_8 = 0x570;
  uStack_6 = 0x10;
  fputs_unlocked(unaff_R12,_stdout);
  uVar8 = 0;
  goto LAB_001002fc;
LAB_001014cb:
  if (dev_debug != '\0') {
    uStack_8 = 0x1786;
    uStack_6 = 0x10;
    uVar8 = quote(padding_buffer);
    uStack_8 = uStack0000000000000008;
    local_10 = puVar28;
    __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar8);
  }
  if (padding_width == 0) {
joined_r0x001019e5:
    if (format_str_prefix != (char *)0x0) {
      uStack_8 = 0x14fe;
      uStack_6 = 0x10;
      fputs_unlocked(format_str_prefix,_stdout);
    }
    uStack_8 = 0x1511;
    uStack_6 = 0x10;
    fputs_unlocked(padding_buffer,_stdout);
  }
  else {
    uStack_8 = 0x16a8;
    uStack_6 = 0x10;
    iVar7 = gnu_mbswidth(padding_buffer,3);
    if (iVar7 < 0) goto joined_r0x001019e5;
    if (-1 < padding_width) {
      if (iVar7 < padding_width) {
        uVar18 = padding_width - iVar7;
        uVar19 = uVar18;
        if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
LAB_00101700:
        do {
          pcVar21 = _stdout->_IO_write_ptr;
          if (pcVar21 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar21 + 1;
            *pcVar21 = ' ';
          }
          else {
            uStack_8 = 0x185a;
            uStack_6 = 0x10;
            __overflow(_stdout,0x20);
          }
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        goto LAB_00101726;
      }
      goto joined_r0x001019e5;
    }
    if (-iVar7 <= padding_width) goto joined_r0x001019e5;
    uVar18 = padding_width + iVar7;
    if (format_str_prefix != (char *)0x0) {
LAB_001016e0:
      uStack_8 = 0x16ec;
      uStack_6 = 0x10;
      fputs_unlocked(format_str_prefix,_stdout);
    }
    uVar19 = uVar18;
    if (0 < (long)uVar18) goto LAB_00101700;
LAB_00101726:
    *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
    fputs_unlocked(padding_buffer,_stdout);
    if ((long)uVar19 < 0) {
      do {
        pcVar21 = _stdout->_IO_write_ptr;
        if (pcVar21 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar21 + 1;
          *pcVar21 = ' ';
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
          __overflow(_stdout,0x20);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0);
    }
  }
  if (format_str_suffix != (char *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
    fputs_unlocked(format_str_suffix,_stdout);
  }
  uVar8 = 1;
LAB_001002fc:
  if (*(long *)((long)register0x00000020 + 0xb8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
    __stack_chk_fail();
  }
  return uVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001015f8(void)

{
  long lVar1;
  double dVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  undefined *puVar13;
  long lVar14;
  char *pcVar15;
  uint unaff_EBX;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  char *pcVar19;
  char *unaff_R12;
  undefined8 *puVar20;
  long in_FS_OFFSET;
  bool bVar21;
  longdouble lVar22;
  longdouble lVar23;
  longdouble lVar24;
  longdouble lVar25;
  undefined *puVar26;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  int iStack0000000000000010;
  int iStack0000000000000040;
  longdouble in_stack_00000070;
  undefined1 uStack0000000000000090;
  undefined1 uStack0000000000000091;
  undefined *puStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
  uVar3 = conv_exit_code;
  uStack0000000000000008 = (undefined2)((unkuint10)in_stack_00000070 >> 0x40);
  puVar26 = SUB108(in_stack_00000070,0);
  if (inval_style != 3) {
    uStack_8 = 0x1614;
    uStack_6 = 0x10;
    quote();
    uStack_8 = 0x1626;
    uStack_6 = 0x10;
    uVar9 = dcgettext(0);
    uStack_8 = 0x1638;
    uStack_6 = 0x10;
    error(uVar3,0,uVar9);
  }
  uVar3 = conv_exit_code;
  if ((from_unit_size != 1) || (to_unit_size != 1)) {
    lVar22 = (longdouble)from_unit_size;
    if (from_unit_size < 0) {
      lVar22 = lVar22 + (longdouble)__LC43;
    }
    lVar23 = (longdouble)to_unit_size;
    if (to_unit_size < 0) {
      lVar23 = lVar23 + (longdouble)__LC43;
    }
    lVar23 = (in_stack_00000070 * lVar22) / lVar23;
    puVar26 = SUB108(lVar23,0);
    uStack0000000000000008 = (undefined2)((unkuint10)lVar23 >> 0x40);
  }
  if (unaff_EBX < 2) {
    uVar16 = user_precision;
    if (user_precision == 0xffffffffffffffff) {
      uVar16 = _iStack0000000000000010;
    }
    if (((longdouble)CONCAT28(uStack0000000000000008,puVar26) < __LC44) ||
       (__LC45 < (longdouble)CONCAT28(uStack0000000000000008,puVar26))) {
      if ((uVar16 < 0x13) || (scale_to != 0)) {
LAB_0010089f:
        iStack0000000000000010 = (int)uVar16;
        do {
          iVar12 = scale_to;
          iVar7 = grouping;
          pcVar19 = padding_buffer;
          lVar14 = padding_buffer_size;
          uStack0000000000000090 = 0x25;
          uVar17 = (ulong)round_style;
          if (grouping != 0) {
            uStack0000000000000091 = 0x27;
            uVar9 = 0x18;
            puVar20 = (undefined8 *)((long)&stack0x00000090 + 2);
            if (zero_padding_width != 0) goto LAB_00100d3d;
LAB_0010090a:
            if (dev_debug != '\0') goto LAB_00100d72;
LAB_0010091a:
            if (iVar12 == 0) goto LAB_00100da9;
LAB_00100923:
            if (iVar12 - 3U < 2) {
              iStack0000000000000040 = 0x400;
              dVar2 = _LC16;
            }
            else {
              iStack0000000000000040 = 1000;
              dVar2 = _LC17;
            }
            lVar22 = (longdouble)CONCAT28(uStack0000000000000008,puVar26);
            if (lVar22 < __LC44) {
              lVar22 = (longdouble)CONCAT28(uStack0000000000000008,puVar26);
              uVar11 = 0;
              if (dev_debug != '\0') goto LAB_00100ff8;
LAB_0010099e:
              if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
              uVar8 = (ulong)((int)uVar11 * 3);
LAB_001009b4:
              if ((long)user_precision <= (long)uVar8) {
                uVar8 = user_precision;
              }
              iVar7 = (int)uVar8;
              if (iVar7 == 0) {
LAB_001011a2:
                lVar23 = (longdouble)(long)ROUND(lVar22 / __LC51) * __LC51;
                lVar22 = lVar22 - lVar23;
                switch(uVar17) {
                case 0:
                  iVar7 = 0;
                  goto LAB_00100a60;
                case 1:
                  iVar7 = 0;
                  break;
                case 2:
                  iVar7 = 0;
LAB_00100a40:
                  if ((longdouble)0 <= lVar22) goto LAB_00100a60;
                  break;
                case 3:
LAB_0010120e:
                  lVar25 = (longdouble)(long)ROUND(lVar22) + lVar23;
                  goto LAB_00100abb;
                case 4:
                  iVar7 = 0;
LAB_00100bc8:
                  if (lVar22 < (longdouble)0) {
                    lVar25 = (longdouble)(long)ROUND(lVar22 - (longdouble)__LC52);
                  }
                  else {
LAB_00100bd4:
                    lVar25 = (longdouble)(long)ROUND(lVar22 + (longdouble)__LC52);
                  }
                  goto LAB_00100a90;
                default:
                  uVar9 = FUN_00104126();
                  return uVar9;
                }
LAB_00100b80:
                lVar1 = (long)ROUND(-lVar22);
                lVar25 = (longdouble)(long)-(lVar1 + (ulong)((longdouble)lVar1 < -lVar22));
                goto LAB_00100a90;
              }
              iVar6 = iVar7 + -1;
              if (iVar6 == 0) {
                lVar24 = (longdouble)__LC1;
LAB_0010106c:
                lVar23 = (longdouble)(long)ROUND((lVar22 * lVar24) / __LC51) * __LC51;
                lVar22 = lVar22 * lVar24 - lVar23;
                iVar7 = 1;
                switch(uVar17) {
                case 0:
                  iVar7 = 1;
                  goto LAB_00100a60;
                case 1:
                  iVar7 = 1;
                  break;
                case 2:
                  iVar7 = 1;
                  goto LAB_00100a40;
                case 3:
                  goto LAB_00100bf5;
                case 4:
                  iVar7 = 1;
                  goto LAB_00100bc8;
                default:
                  uVar9 = FUN_00104126();
                  return uVar9;
                }
                goto LAB_00100b80;
              }
              lVar24 = (longdouble)__LC1;
              lVar25 = lVar24;
              do {
                lVar25 = lVar25 * lVar24;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              lVar23 = (longdouble)(long)ROUND((lVar25 * lVar22) / __LC51) * __LC51;
              lVar22 = lVar25 * lVar22 - lVar23;
              switch(uVar17) {
              case 0:
                goto LAB_00100a60;
              case 1:
                goto LAB_00100b80;
              case 2:
                goto LAB_00100a40;
              case 3:
LAB_00100bf5:
                lVar25 = (longdouble)(long)ROUND(lVar22) + lVar23;
                break;
              case 4:
                goto LAB_00100bc8;
              default:
                uVar9 = FUN_00100aa9();
                return uVar9;
              }
LAB_00100a9d:
              iVar7 = iVar7 + -1;
              lVar22 = lVar24;
              if (iVar7 == 0) {
                lVar25 = lVar25 / lVar24;
              }
              else {
                do {
                  lVar22 = lVar22 * lVar24;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                lVar25 = lVar25 / lVar22;
              }
            }
            else {
              if (lVar22 <= __LC45) {
                uVar11 = 0;
                while( true ) {
                  lVar23 = -lVar22;
                  if ((longdouble)0 <= lVar22) {
                    lVar23 = lVar22;
                  }
                  if (lVar23 < (longdouble)iStack0000000000000040) break;
                  lVar22 = lVar22 / (longdouble)iStack0000000000000040;
                  uVar11 = (ulong)((int)uVar11 + 1);
                }
                if (dev_debug == '\0') goto LAB_0010099e;
LAB_00100ff8:
                puStack_10 = SUB108(lVar22,0);
                uStack_8 = (undefined2)((unkuint10)lVar22 >> 0x40);
                __fprintf_chk(dVar2,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
                if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
                lVar23 = -lVar22;
                if ((longdouble)0 <= lVar22) {
                  lVar23 = lVar22;
                }
                lVar24 = (longdouble)__LC1;
                if (lVar23 < lVar24) goto LAB_0010106c;
                goto LAB_001011a2;
              }
              if (dev_debug != '\0') {
                lVar22 = (longdouble)__LC18;
                uVar11 = 0;
                goto LAB_00100ff8;
              }
              if (user_precision != 0xffffffffffffffff) {
                lVar22 = (longdouble)__LC18;
                uVar8 = 0;
                uVar11 = 0;
                goto LAB_001009b4;
              }
              lVar23 = __LC19;
              switch(uVar17) {
              case 0:
                lVar22 = (longdouble)__LC18;
                uVar11 = 0;
                iVar7 = 0;
                break;
              case 1:
                lVar22 = (longdouble)__LC18;
                uVar11 = 0;
                iVar7 = 0;
                goto LAB_00100b80;
              case 2:
                iVar7 = 0;
                uVar11 = 0;
                lVar22 = (longdouble)__LC18;
                break;
              case 3:
                lVar22 = (longdouble)__LC18;
                uVar11 = 0;
                goto LAB_0010120e;
              case 4:
                lVar22 = (longdouble)__LC18;
                iVar7 = 0;
                uVar11 = 0;
                goto LAB_00100bd4;
              default:
                lVar25 = (longdouble)0;
                uVar11 = 0;
                uVar8 = 0;
                goto LAB_00100b05;
              }
LAB_00100a60:
              lVar25 = (longdouble)(long)ROUND(lVar22);
              if (lVar25 < lVar22) {
                lVar25 = (longdouble)((long)ROUND(lVar22) + 1);
              }
LAB_00100a90:
              lVar25 = lVar25 + lVar23;
              if (iVar7 != 0) {
                lVar24 = (longdouble)__LC1;
                goto LAB_00100a9d;
              }
            }
LAB_00100abb:
            lVar22 = (longdouble)dVar2;
            if (lVar25 < (longdouble)0) {
              lVar23 = -lVar25;
              if (lVar22 <= lVar23) goto LAB_001010d4;
LAB_001010fa:
              if (lVar23 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
              uVar8 = 0;
              uVar10 = 0;
            }
            else {
              if (lVar22 <= lVar25) {
LAB_001010d4:
                lVar25 = lVar25 / lVar22;
                uVar11 = (ulong)((int)uVar11 + 1);
                lVar22 = (longdouble)0;
                if (!NAN(lVar25) && !NAN(lVar22)) {
                  if (lVar25 == lVar22) goto LAB_00101112;
                  if (lVar25 <= lVar22) {
                    lVar23 = -lVar25;
                    goto LAB_001010fa;
                  }
                }
              }
              else if (lVar25 == (longdouble)0) goto LAB_00101112;
              if ((longdouble)__LC1 <= lVar25) goto LAB_00101112;
LAB_00100af3:
              bVar21 = (int)uVar11 != 0;
              uVar8 = (ulong)bVar21;
              uVar10 = (uint)bVar21;
            }
            if (dev_debug != '\0') {
              puStack_10 = SUB108(lVar25,0);
              uStack_8 = (undefined2)((unkuint10)lVar25 >> 0x40);
              __fprintf_chk(dVar2,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
              uVar8 = (ulong)uVar10;
            }
LAB_00100b05:
            puVar18 = &DAT_001025c3;
            *puVar20 = 0x73257325664c2a2e;
            if (user_precision != 0xffffffffffffffff) {
              uVar8 = user_precision & 0xffffffff;
            }
            *(undefined4 *)((long)puVar20 + 7) = 0x732573;
            puVar13 = suffix;
            if (suffix == (undefined *)0x0) {
              puVar13 = &_LC15;
            }
            uVar10 = (uint)uVar11;
            if (iVar12 != 4) {
              if (uVar10 == 1) {
                uVar9 = FUN_00100c18();
                return uVar9;
              }
LAB_00100b51:
              if (10 < uVar10) {
                uVar9 = FUN_00100c18(user_precision,puVar18);
                return uVar9;
              }
              uVar9 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar11]))();
              return uVar9;
            }
            if (uVar10 != 0) {
              puVar18 = &_LC20;
              goto LAB_00100b51;
            }
            puStack_10 = puVar13;
            iVar7 = __snprintf_chk(pcVar19,lVar14,2,0xffffffffffffffff,&stack0x00000090,uVar8,
                                   SUB108(lVar25,0),(short)((unkuint10)lVar25 >> 0x40),&_LC15,0x25c3
                                  );
            goto LAB_00100c48;
          }
          uVar9 = 0x19;
          puVar20 = (undefined8 *)((long)&stack0x00000090 + 1);
          if (zero_padding_width == 0) goto LAB_0010090a;
LAB_00100d3d:
          uStack_8 = 0xd58;
          uStack_6 = 0x10;
          iVar6 = __sprintf_chk(puVar20,2,uVar9);
          puVar20 = (undefined8 *)((long)puVar20 + (long)iVar6);
          if (dev_debug == '\0') goto LAB_0010091a;
LAB_00100d72:
          uStack_8 = 0xd94;
          uStack_6 = 0x10;
          fwrite("double_to_human:\n",1,0x11,_stderr);
          if (iVar12 != 0) goto LAB_00100923;
LAB_00100da9:
          uVar5 = uStack_8;
          if (iStack0000000000000010 == 0) {
            lVar23 = (longdouble)
                     (long)ROUND((longdouble)CONCAT28(uStack0000000000000008,puVar26) / __LC51) *
                     __LC51;
            lVar22 = (longdouble)CONCAT28(uStack0000000000000008,puVar26) - lVar23;
            switch(uVar17) {
            case 0:
              goto switchD_001012e1_caseD_0;
            case 1:
              goto switchD_001012e1_caseD_1;
            case 2:
              goto LAB_00100e38;
            case 3:
              lVar24 = (longdouble)(long)ROUND(lVar22) + lVar23;
              break;
            case 4:
              goto LAB_00100fa0;
            default:
              lVar24 = (longdouble)0;
            }
            goto LAB_00100eab;
          }
          iVar12 = iStack0000000000000010 + -1;
          lVar24 = (longdouble)__LC1;
          lVar22 = lVar24;
          if (iVar12 == 0) {
            lVar24 = (longdouble)CONCAT28(uStack0000000000000008,puVar26) * lVar24;
            lVar23 = (longdouble)(long)ROUND(lVar24 / __LC51) * __LC51;
            lVar22 = lVar24 - lVar23;
            switch(uVar17) {
            case 0:
              break;
            case 1:
              goto switchD_001012e1_caseD_1;
            case 2:
              goto LAB_00100e38;
            case 3:
              uVar9 = FUN_00100e8f();
              return uVar9;
            case 4:
              goto LAB_00100fa0;
            default:
              uVar9 = FUN_0010186b();
              return uVar9;
            }
            goto switchD_001012e1_caseD_0;
          }
          do {
            lVar22 = lVar22 * lVar24;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          lVar22 = (longdouble)CONCAT28(uStack0000000000000008,puVar26) * lVar22;
          lVar23 = (longdouble)(long)ROUND(lVar22 / __LC51) * __LC51;
          lVar22 = lVar22 - lVar23;
          switch(uVar17) {
          case 0:
            goto switchD_001012e1_caseD_0;
          case 1:
switchD_001012e1_caseD_1:
            lVar1 = (long)ROUND(-lVar22);
            lVar24 = (longdouble)(long)-(lVar1 + (ulong)((longdouble)lVar1 < -lVar22));
            break;
          case 2:
LAB_00100e38:
            if (lVar22 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
            lVar24 = (longdouble)(long)ROUND(lVar22);
            if (lVar24 < lVar22) {
              lVar24 = (longdouble)((long)ROUND(lVar22) + 1);
            }
            break;
          case 3:
            lVar24 = (longdouble)(long)ROUND(lVar22) + lVar23;
            goto code_r0x00100e8f;
          case 4:
LAB_00100fa0:
            if (lVar22 < (longdouble)0) {
              lVar24 = (longdouble)(long)ROUND(lVar22 - (longdouble)__LC52);
            }
            else {
              lVar24 = (longdouble)(long)ROUND(lVar22 + (longdouble)__LC52);
            }
            break;
          default:
            uVar9 = FUN_00100e8f();
            return uVar9;
          }
          lVar24 = lVar24 + lVar23;
          if (iStack0000000000000010 != 0) {
code_r0x00100e8f:
            lVar23 = (longdouble)__LC1;
            iVar12 = iStack0000000000000010 + -1;
            lVar22 = lVar23;
            if (iVar12 == 0) {
              lVar24 = lVar24 / lVar23;
            }
            else {
              do {
                lVar22 = lVar22 * lVar23;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
              lVar24 = lVar24 / lVar22;
            }
          }
LAB_00100eab:
          uStack_8 = (undefined2)((unkuint10)lVar24 >> 0x40);
          uVar4 = uStack_8;
          puStack_10 = SUB108(lVar24,0);
          puVar18 = puStack_10;
          if (dev_debug != '\0') {
            pcVar15 = "  no scaling, returning value: %.*Lf\n";
            if (iVar7 != 0) {
              pcVar15 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
            }
            __fprintf_chk(_stderr,2,pcVar15,uVar16 & 0xffffffff);
            uVar17 = CONCAT62(uStack_6,uStack_8);
            uVar5 = uStack_8;
          }
          uStack_8 = uVar5;
          *(undefined4 *)puVar20 = 0x664c2a2e;
          *(undefined4 *)((long)puVar20 + 3) = 0x732566;
          puStack_10 = suffix;
          if (suffix == (undefined *)0x0) {
            puStack_10 = &_LC15;
          }
          iVar7 = __snprintf_chk(pcVar19,lVar14,2,0xffffffffffffffff,&stack0x00000090,
                                 uVar16 & 0xffffffff,puVar18,uVar4);
LAB_00100c48:
          if ((iVar7 < 0) ||
             (lVar14 = (long)iVar7 - (padding_buffer_size + -1),
             SBORROW8((long)iVar7,padding_buffer_size + -1))) {
            uStack_8 = 0x1a91;
            uStack_6 = 0x10;
            uVar9 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
            uStack_8 = uStack0000000000000008;
            uStack_6 = uStack000000000000000a;
            register0x00000020 = (BADSPACEBASE *)&puStack_10;
            puStack_10 = puVar26;
            error(1,0,uVar9);
            goto LAB_00101726;
          }
          if (lVar14 < 1) goto LAB_001014cb;
          uStack_8 = 0xc90;
          uStack_6 = 0x10;
          padding_buffer =
               (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar14,0xffffffffffffffff,1);
        } while( true );
      }
      if (inval_style != 3) {
LAB_00101574:
        uStack_8 = 0x1587;
        uStack_6 = 0x10;
        uVar9 = dcgettext(0,
                          "value/precision too large to be printed: \'%Lg/%zu\' (consider using --to)"
                          ,5);
        uStack_8 = uStack0000000000000008;
        puStack_10 = puVar26;
        error(uVar3,0,uVar9,uVar16);
      }
    }
    else {
      lVar22 = (longdouble)CONCAT28(uStack0000000000000008,puVar26);
      iVar7 = 0;
      while( true ) {
        lVar23 = -lVar22;
        if ((longdouble)0 <= lVar22) {
          lVar23 = lVar22;
        }
        if (lVar23 < (longdouble)__LC1) break;
        lVar22 = lVar22 / (longdouble)__LC1;
        iVar7 = iVar7 + 1;
      }
      if ((scale_to == 0) && (0x12 < (long)iVar7 + uVar16)) {
        if (inval_style != 3) {
          pcVar19 = "value too large to be printed: \'%Lg\' (consider using --to)";
          if (uVar16 != 0) goto LAB_00101574;
LAB_001013d7:
          uStack_8 = 0x13de;
          uStack_6 = 0x10;
          uVar9 = dcgettext(0,pcVar19,5);
          uStack_8 = uStack0000000000000008;
          puStack_10 = puVar26;
          error(uVar3,0,uVar9);
        }
      }
      else {
        if (iVar7 < 0x21) goto LAB_0010089f;
        if (inval_style != 3) {
          pcVar19 = "value too large to be printed: \'%Lg\' (cannot handle values > 999Q)";
          goto LAB_001013d7;
        }
      }
    }
  }
  uStack_8 = 0x570;
  uStack_6 = 0x10;
  fputs_unlocked(unaff_R12,_stdout);
  uVar9 = 0;
  goto LAB_001002fc;
LAB_001014cb:
  if (dev_debug != '\0') {
    uStack_8 = 0x1786;
    uStack_6 = 0x10;
    uVar9 = quote(padding_buffer);
    uStack_8 = uStack0000000000000008;
    puStack_10 = puVar26;
    __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar9);
  }
  if (padding_width == 0) {
joined_r0x001019e5:
    if (format_str_prefix != (char *)0x0) {
      uStack_8 = 0x14fe;
      uStack_6 = 0x10;
      fputs_unlocked(format_str_prefix,_stdout);
    }
    uStack_8 = 0x1511;
    uStack_6 = 0x10;
    fputs_unlocked(padding_buffer,_stdout);
  }
  else {
    uStack_8 = 0x16a8;
    uStack_6 = 0x10;
    iVar7 = gnu_mbswidth(padding_buffer,3);
    if (iVar7 < 0) goto joined_r0x001019e5;
    if (-1 < padding_width) {
      if (iVar7 < padding_width) {
        uVar16 = padding_width - iVar7;
        uVar17 = uVar16;
        if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
LAB_00101700:
        do {
          pcVar19 = _stdout->_IO_write_ptr;
          if (pcVar19 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar19 + 1;
            *pcVar19 = ' ';
          }
          else {
            uStack_8 = 0x185a;
            uStack_6 = 0x10;
            __overflow(_stdout,0x20);
          }
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        goto LAB_00101726;
      }
      goto joined_r0x001019e5;
    }
    if (-iVar7 <= padding_width) goto joined_r0x001019e5;
    uVar16 = padding_width + iVar7;
    if (format_str_prefix != (char *)0x0) {
LAB_001016e0:
      uStack_8 = 0x16ec;
      uStack_6 = 0x10;
      fputs_unlocked(format_str_prefix,_stdout);
    }
    uVar17 = uVar16;
    if (0 < (long)uVar16) goto LAB_00101700;
LAB_00101726:
    *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
    fputs_unlocked(padding_buffer,_stdout);
    if ((long)uVar17 < 0) {
      do {
        pcVar19 = _stdout->_IO_write_ptr;
        if (pcVar19 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar19 + 1;
          *pcVar19 = ' ';
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
          __overflow(_stdout,0x20);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0);
    }
  }
  if (format_str_suffix != (char *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
    fputs_unlocked(format_str_suffix,_stdout);
  }
  uVar9 = 1;
LAB_001002fc:
  if (*(long *)((long)register0x00000020 + 0xb8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
    __stack_chk_fail();
  }
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 switchD_001014c8::caseD_0(ulong param_1,char param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  ulong unaff_RBX;
  int unaff_EBP;
  undefined *puVar12;
  ulong uVar13;
  long unaff_R12;
  int unaff_R13D;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar14;
  ushort in_FPUControlWord;
  longdouble lVar15;
  longdouble lVar16;
  longdouble lVar17;
  longdouble lVar18;
  undefined *unaff_retaddr;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  double dStack0000000000000010;
  undefined2 uStack0000000000000018;
  undefined8 in_stack_00000028;
  int iStack0000000000000040;
  undefined4 uStack0000000000000044;
  ushort uStack000000000000004c;
  ushort uStack000000000000004e;
  undefined8 in_stack_00000090;
  undefined *puStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
code_r0x00101800:
  lVar17 = (longdouble)__LC18;
  uVar11 = 0;
  uVar13 = 0;
  uStack000000000000004c = in_FPUControlWord | 0xc00;
  lVar18 = __LC19;
  uStack000000000000004e = in_FPUControlWord;
LAB_00100a60:
  _iStack0000000000000040 = (ulong)ROUND(lVar17);
  lVar15 = (longdouble)(long)_iStack0000000000000040;
  if (lVar15 < lVar17) {
    _iStack0000000000000040 = _iStack0000000000000040 + 1;
    lVar15 = (longdouble)(long)_iStack0000000000000040;
  }
LAB_00100a90:
  lVar15 = lVar15 + lVar18;
  if ((int)uVar13 == 0) goto LAB_00100abb;
  lVar16 = (longdouble)__LC1;
LAB_00100a9d:
  iVar3 = (int)uVar13 + -1;
  lVar17 = lVar16;
  if (iVar3 == 0) {
    lVar15 = lVar15 / lVar16;
  }
  else {
    do {
      lVar17 = lVar17 * lVar16;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar15 = lVar15 / lVar17;
  }
LAB_00100abb:
  lVar17 = (longdouble)dStack0000000000000010;
  if (lVar15 < (longdouble)0) {
    lVar18 = -lVar15;
    if (lVar17 <= lVar18) goto LAB_001010d4;
LAB_001010fa:
    if ((longdouble)__LC1 <= lVar18) goto LAB_00101112;
  }
  else {
    if (lVar17 <= lVar15) {
LAB_001010d4:
      lVar15 = lVar15 / lVar17;
      uVar11 = (ulong)((int)uVar11 + 1);
      lVar17 = (longdouble)0;
      if (!NAN(lVar15) && !NAN(lVar17)) {
        if (lVar15 == lVar17) goto LAB_00101112;
        if (lVar15 <= lVar17) {
          lVar18 = -lVar15;
          goto LAB_001010fa;
        }
      }
    }
    else if (lVar15 == (longdouble)0) goto LAB_00101112;
    if ((longdouble)__LC1 <= lVar15) {
LAB_00101112:
      uVar13 = 0;
      uVar6 = 0;
      goto joined_r0x00100aff;
    }
  }
  bVar14 = (int)uVar11 != 0;
  uVar13 = (ulong)bVar14;
  uVar6 = (uint)bVar14;
joined_r0x00100aff:
  in_FPUControlWord = uStack000000000000004e;
  if (param_2 != '\0') {
    puStack_10 = SUB108(lVar15,0);
    uStack_8 = (undefined2)((unkuint10)lVar15 >> 0x40);
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,(int)uVar11);
    __fprintf_chk(dStack0000000000000010,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
    uVar11 = _iStack0000000000000040 & 0xffffffff;
    uVar13 = (ulong)uVar6;
    param_1 = user_precision;
    in_FPUControlWord = uStack000000000000004e;
  }
LAB_00100b05:
  puVar12 = &DAT_001025c3;
  *unaff_R15 = 0x73257325664c2a2e;
  if (param_1 != 0xffffffffffffffff) {
    uVar13 = param_1 & 0xffffffff;
  }
  *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
  puVar8 = suffix;
  if (suffix == (undefined *)0x0) {
    puVar8 = &_LC15;
  }
  uVar6 = (uint)uVar11;
  if (unaff_R13D == 4) {
    if (uVar6 == 0) {
      puStack_10 = puVar8;
      iVar3 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,uVar13,
                             SUB108(lVar15,0),(short)((unkuint10)lVar15 >> 0x40),&_LC15,0x25c3);
      do {
        if ((iVar3 < 0) ||
           (lVar9 = (long)iVar3 - (padding_buffer_size + -1),
           SBORROW8((long)iVar3,padding_buffer_size + -1))) {
          uStack_8 = 0x1a91;
          uStack_6 = 0x10;
          uVar5 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
          uStack_8 = uStack0000000000000008;
          uStack_6 = uStack000000000000000a;
          register0x00000020 = (BADSPACEBASE *)&puStack_10;
          puStack_10 = unaff_retaddr;
          error(1,0,uVar5);
          goto LAB_00101726;
        }
        if (lVar9 < 1) {
          if (dev_debug != '\0') {
            uStack_8 = 0x1786;
            uStack_6 = 0x10;
            uVar5 = quote(padding_buffer);
            uStack_8 = uStack0000000000000008;
            puStack_10 = unaff_retaddr;
            __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar5);
          }
          if (padding_width != 0) {
            uStack_8 = 0x16a8;
            uStack_6 = 0x10;
            iVar3 = gnu_mbswidth(padding_buffer,3);
            if (-1 < iVar3) {
              if (padding_width < 0) {
                if (padding_width < -iVar3) {
                  uVar11 = padding_width + iVar3;
                  if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
                  goto LAB_001016ec;
                }
              }
              else if (iVar3 < padding_width) {
                uVar11 = padding_width - iVar3;
                unaff_RBX = uVar11;
                if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
                uStack_8 = 0x16ec;
                uStack_6 = 0x10;
                fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
                unaff_RBX = uVar11;
                if (0 < (long)uVar11) {
LAB_00101700:
                  do {
                    pcVar10 = _stdout->_IO_write_ptr;
                    if (pcVar10 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar10 + 1;
                      *pcVar10 = ' ';
                    }
                    else {
                      uStack_8 = 0x185a;
                      uStack_6 = 0x10;
                      __overflow(_stdout,0x20);
                    }
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
LAB_00101726:
                *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
                fputs_unlocked(padding_buffer,_stdout);
                if ((long)unaff_RBX < 0) {
                  do {
                    pcVar10 = _stdout->_IO_write_ptr;
                    if (pcVar10 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar10 + 1;
                      *pcVar10 = ' ';
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
                      __overflow(_stdout,0x20);
                    }
                    unaff_RBX = unaff_RBX + 1;
                  } while (unaff_RBX != 0);
                }
LAB_00101518:
                if (format_str_suffix != (char *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
                  fputs_unlocked(format_str_suffix,_stdout);
                }
                if (*(long *)((long)register0x00000020 + 0xb8) == *(long *)(in_FS_OFFSET + 0x28)) {
                  return 1;
                }
                    /* WARNING: Subroutine does not return */
                *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
                __stack_chk_fail();
              }
            }
          }
          if (format_str_prefix != (char *)0x0) {
            uStack_8 = 0x14fe;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
          }
          uStack_8 = 0x1511;
          uStack_6 = 0x10;
          fputs_unlocked(padding_buffer,_stdout);
          goto LAB_00101518;
        }
        uStack_8 = 0xc90;
        uStack_6 = 0x10;
        unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar9,0xffffffffffffffff,1);
        unaff_R13D = scale_to;
        iVar3 = grouping;
        unaff_R12 = padding_buffer_size;
        unaff_RBX = (ulong)round_style;
        if (grouping == 0) {
          uVar5 = 0x19;
          unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
        }
        else {
          in_stack_00000090._1_1_ = 0x27;
          uVar5 = 0x18;
          unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
        }
        padding_buffer = unaff_R14;
        uVar2 = uStack_8;
        if (zero_padding_width != 0) {
          _dStack0000000000000010 = (longdouble)CONCAT64(stack0x00000014,grouping);
          uStack_8 = 0xd58;
          uStack_6 = 0x10;
          iVar7 = __sprintf_chk(unaff_R15,2,uVar5);
          unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar7);
          uVar2 = uStack_8;
        }
        param_1 = user_precision;
        lVar18 = __LC19;
        if (dev_debug != '\0') {
          stack0x00000014 = (undefined6)((unkuint10)_dStack0000000000000010 >> 0x20);
          _dStack0000000000000010 = (longdouble)CONCAT64(stack0x00000014,iVar3);
          uStack_8 = 0xd94;
          uStack_6 = 0x10;
          fwrite("double_to_human:\n",1,0x11,_stderr);
          param_1 = user_precision;
          lVar18 = __LC19;
          uVar2 = uStack_8;
        }
        uStack0000000000000018 = (undefined2)((unkuint10)_dStack0000000000000010 >> 0x40);
        user_precision = param_1;
        __LC19 = lVar18;
        uStack_8 = uVar2;
        if (unaff_R13D != 0) goto LAB_00100923;
        if (unaff_EBP == 0) {
          lVar9 = (long)ROUND((longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) / __LC51);
          _dStack0000000000000010 = (longdouble)CONCAT28(uStack0000000000000018,lVar9);
          lVar18 = (longdouble)lVar9 * __LC51;
          lVar17 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) - lVar18;
          switch(unaff_RBX) {
          case 0:
            goto switchD_001012e1_caseD_0;
          case 1:
            goto switchD_001012e1_caseD_1;
          case 2:
            goto LAB_00100e38;
          case 3:
            _dStack0000000000000010 =
                 (longdouble)CONCAT28(uStack0000000000000018,(long)ROUND(lVar17));
            lVar15 = (longdouble)(long)ROUND(lVar17) + lVar18;
            break;
          case 4:
            goto LAB_00100fa0;
          default:
            lVar15 = (longdouble)0;
          }
          goto LAB_00100eab;
        }
        iVar7 = unaff_EBP + -1;
        lVar15 = (longdouble)__LC1;
        lVar17 = lVar15;
        if (iVar7 == 0) {
          lVar15 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) * lVar15;
          uStack000000000000004c = in_FPUControlWord | 0xc00;
          lVar9 = (long)ROUND(lVar15 / __LC51);
          _dStack0000000000000010 = (longdouble)CONCAT28(uStack0000000000000018,lVar9);
          lVar18 = (longdouble)lVar9 * __LC51;
          lVar17 = lVar15 - lVar18;
          switch(unaff_RBX) {
          case 0:
            break;
          case 1:
            goto switchD_001012e1_caseD_1;
          case 2:
            goto LAB_00100e38;
          case 3:
            uVar5 = FUN_00100e8f();
            return uVar5;
          case 4:
            goto LAB_00100fa0;
          default:
            uVar5 = FUN_0010186b();
            return uVar5;
          }
          goto switchD_001012e1_caseD_0;
        }
        do {
          lVar17 = lVar17 * lVar15;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar17 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) * lVar17;
        uStack000000000000004c = in_FPUControlWord | 0xc00;
        lVar9 = (long)ROUND(lVar17 / __LC51);
        _dStack0000000000000010 = (longdouble)CONCAT28(uStack0000000000000018,lVar9);
        lVar18 = (longdouble)lVar9 * __LC51;
        lVar17 = lVar17 - lVar18;
        switch(unaff_RBX) {
        case 0:
          goto switchD_001012e1_caseD_0;
        case 1:
switchD_001012e1_caseD_1:
          lVar9 = (long)ROUND(-lVar17);
          lVar9 = -(lVar9 + (ulong)((longdouble)lVar9 < -lVar17));
          _dStack0000000000000010 = (longdouble)CONCAT28(uStack0000000000000018,lVar9);
          lVar15 = (longdouble)lVar9;
          break;
        case 2:
LAB_00100e38:
          if (lVar17 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
          lVar9 = (long)ROUND(lVar17);
          _dStack0000000000000010 = (longdouble)CONCAT28(uStack0000000000000018,lVar9);
          lVar15 = (longdouble)lVar9;
          if (lVar15 < lVar17) {
            _dStack0000000000000010 = (longdouble)CONCAT28(uStack0000000000000018,lVar9 + 1);
            lVar15 = (longdouble)(lVar9 + 1);
          }
          break;
        case 3:
          _dStack0000000000000010 = (longdouble)CONCAT28(uStack0000000000000018,(long)ROUND(lVar17))
          ;
          lVar15 = (longdouble)(long)ROUND(lVar17) + lVar18;
          goto code_r0x00100e8f;
        case 4:
LAB_00100fa0:
          if (lVar17 < (longdouble)0) {
            _dStack0000000000000010 =
                 (longdouble)
                 CONCAT28(uStack0000000000000018,(long)ROUND(lVar17 - (longdouble)__LC52));
            lVar15 = (longdouble)(long)ROUND(lVar17 - (longdouble)__LC52);
          }
          else {
            _dStack0000000000000010 =
                 (longdouble)
                 CONCAT28(uStack0000000000000018,(long)ROUND(lVar17 + (longdouble)__LC52));
            lVar15 = (longdouble)(long)ROUND(lVar17 + (longdouble)__LC52);
          }
          break;
        default:
          uVar5 = FUN_00100e8f();
          return uVar5;
        }
        lVar15 = lVar15 + lVar18;
        if (unaff_EBP != 0) {
code_r0x00100e8f:
          lVar18 = (longdouble)__LC1;
          iVar7 = unaff_EBP + -1;
          lVar17 = lVar18;
          if (iVar7 == 0) {
            lVar15 = lVar15 / lVar18;
          }
          else {
            do {
              lVar17 = lVar17 * lVar18;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            lVar15 = lVar15 / lVar17;
          }
        }
LAB_00100eab:
        uStack000000000000004c = in_FPUControlWord | 0xc00;
        uStack_8 = (undefined2)((unkuint10)lVar15 >> 0x40);
        uVar1 = uStack_8;
        puStack_10 = SUB108(lVar15,0);
        puVar12 = puStack_10;
        if (dev_debug != '\0') {
          pcVar10 = "  no scaling, returning value: %.*Lf\n";
          if (iVar3 != 0) {
            pcVar10 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
          }
          __fprintf_chk(_stderr,2,pcVar10,unaff_EBP);
          unaff_RBX = CONCAT62(uStack_6,uStack_8);
          _dStack0000000000000010 = lVar15;
          uVar2 = uStack_8;
        }
        uStack_8 = uVar2;
        *(undefined4 *)unaff_R15 = 0x664c2a2e;
        *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
        puStack_10 = suffix;
        if (suffix == (undefined *)0x0) {
          puStack_10 = &_LC15;
        }
        iVar3 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,
                               puVar12,uVar1);
      } while( true );
    }
    puVar12 = &_LC20;
  }
  else if (uVar6 == 1) {
    uVar5 = FUN_00100c18();
    return uVar5;
  }
  if (uVar6 < 0xb) {
    uVar5 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar11]))();
    return uVar5;
  }
  uVar5 = FUN_00100c18(param_1,puVar12);
  return uVar5;
LAB_00100923:
  uStack0000000000000044 = (undefined4)(_iStack0000000000000040 >> 0x20);
  if (unaff_R13D - 3U < 2) {
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,0x400);
    uVar5 = _LC16;
  }
  else {
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,1000);
    uVar5 = _LC17;
  }
  _dStack0000000000000010 = (longdouble)CONCAT28(uStack0000000000000018,uVar5);
  lVar17 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr);
  if (lVar17 < __LC44) {
    lVar17 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr);
    uVar11 = 0;
    goto joined_r0x00100ff2;
  }
  if (__LC45 < lVar17) {
    if (dev_debug != '\0') {
      lVar17 = (longdouble)__LC18;
      uVar11 = 0;
      goto LAB_00100ff8;
    }
    if (param_1 != 0xffffffffffffffff) {
      lVar17 = (longdouble)__LC18;
      uVar4 = 0;
      uVar11 = 0;
      goto LAB_001009b4;
    }
    param_2 = dev_debug;
    uStack000000000000004e = in_FPUControlWord;
    switch(unaff_RBX) {
    case 0:
      goto code_r0x00101800;
    case 1:
      lVar17 = (longdouble)__LC18;
      uVar11 = 0;
      uVar13 = 0;
      uStack000000000000004c = in_FPUControlWord | 0xc00;
      goto LAB_00100b80;
    case 2:
      uVar13 = 0;
      uVar11 = 0;
      lVar17 = (longdouble)__LC18;
      uStack000000000000004c = in_FPUControlWord | 0xc00;
      goto LAB_00100a60;
    case 3:
      goto switchD_001014c8_caseD_3;
    case 4:
      lVar17 = (longdouble)__LC18;
      uVar13 = 0;
      uVar11 = 0;
      uStack000000000000004c = in_FPUControlWord | 0xc00;
      goto LAB_00100bd4;
    default:
      lVar15 = (longdouble)0;
      uVar11 = 0;
      uVar13 = 0;
    }
    goto LAB_00100b05;
  }
  uVar11 = 0;
  while( true ) {
    lVar18 = -lVar17;
    if ((longdouble)0 <= lVar17) {
      lVar18 = lVar17;
    }
    if (lVar18 < (longdouble)iStack0000000000000040) break;
    lVar17 = lVar17 / (longdouble)iStack0000000000000040;
    uVar11 = (ulong)((int)uVar11 + 1);
  }
joined_r0x00100ff2:
  if (dev_debug == '\0') {
    if (param_1 != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
    lVar18 = -lVar17;
    if ((longdouble)0 <= lVar17) {
      lVar18 = lVar17;
    }
    lVar16 = (longdouble)__LC1;
    if (lVar18 < lVar16) goto LAB_0010106c;
  }
  else {
LAB_00100ff8:
    puStack_10 = SUB108(lVar17,0);
    uStack_8 = (undefined2)((unkuint10)lVar17 >> 0x40);
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,(int)uVar11);
    __fprintf_chk(uVar5,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
    uVar11 = _iStack0000000000000040 & 0xffffffff;
    if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
    uVar4 = (ulong)((int)uVar11 * 3);
LAB_001009b4:
    if ((long)user_precision <= (long)uVar4) {
      uVar4 = user_precision;
    }
    uVar13 = uVar4 & 0xffffffff;
    if ((int)uVar4 != 0) goto code_r0x001009c6;
  }
  uStack000000000000004c = in_FPUControlWord | 0xc00;
  _iStack0000000000000040 = (ulong)ROUND(lVar17 / __LC51);
  lVar18 = (longdouble)(long)_iStack0000000000000040 * __LC51;
  lVar17 = lVar17 - lVar18;
  uStack000000000000004e = in_FPUControlWord;
  switch(unaff_RBX) {
  case 0:
    uVar13 = 0;
    param_1 = user_precision;
    param_2 = dev_debug;
    goto LAB_00100a60;
  case 1:
    uVar13 = 0;
    goto LAB_00100b80;
  case 2:
    uVar13 = 0;
    goto LAB_00100a40;
  case 3:
    break;
  case 4:
    uVar13 = 0;
    goto LAB_00100bc8;
  default:
    uVar5 = FUN_00104126();
    return uVar5;
  }
LAB_0010120e:
  _iStack0000000000000040 = (ulong)ROUND(lVar17);
  lVar15 = (longdouble)(long)_iStack0000000000000040 + lVar18;
  param_1 = user_precision;
  param_2 = dev_debug;
  goto LAB_00100abb;
switchD_001014c8_caseD_3:
  lVar17 = (longdouble)__LC18;
  uVar11 = 0;
  uStack000000000000004c = in_FPUControlWord | 0xc00;
  goto LAB_0010120e;
code_r0x001009c6:
  iVar3 = (int)uVar4 + -1;
  if (iVar3 == 0) {
    lVar16 = (longdouble)__LC1;
LAB_0010106c:
    uStack000000000000004c = in_FPUControlWord | 0xc00;
    _iStack0000000000000040 = (ulong)ROUND((lVar17 * lVar16) / __LC51);
    lVar18 = (longdouble)(long)_iStack0000000000000040 * __LC51;
    lVar17 = lVar17 * lVar16 - lVar18;
    uVar13 = 1;
    uStack000000000000004e = in_FPUControlWord;
    switch(unaff_RBX) {
    case 0:
      param_1 = user_precision;
      param_2 = dev_debug;
      goto LAB_00100a60;
    case 1:
      goto LAB_00100b80;
    case 2:
      break;
    case 3:
      goto LAB_00100bf5;
    case 4:
      goto LAB_00100bc8;
    default:
      uVar5 = FUN_00104126();
      return uVar5;
    }
  }
  else {
    lVar16 = (longdouble)__LC1;
    lVar15 = lVar16;
    do {
      lVar15 = lVar15 * lVar16;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uStack000000000000004c = in_FPUControlWord | 0xc00;
    _iStack0000000000000040 = (ulong)ROUND((lVar15 * lVar17) / __LC51);
    lVar18 = (longdouble)(long)_iStack0000000000000040 * __LC51;
    lVar17 = lVar15 * lVar17 - lVar18;
    uStack000000000000004e = in_FPUControlWord;
    switch(unaff_RBX) {
    case 0:
      param_1 = user_precision;
      param_2 = dev_debug;
      goto LAB_00100a60;
    case 1:
      goto switchD_00100a2f_caseD_1;
    case 2:
      break;
    case 3:
LAB_00100bf5:
      _iStack0000000000000040 = (ulong)ROUND(lVar17);
      lVar15 = (longdouble)(long)_iStack0000000000000040 + lVar18;
      param_1 = user_precision;
      param_2 = dev_debug;
      goto LAB_00100a9d;
    case 4:
LAB_00100bc8:
      if (lVar17 < (longdouble)0) {
        _iStack0000000000000040 = (ulong)ROUND(lVar17 - (longdouble)__LC52);
        lVar15 = (longdouble)(long)_iStack0000000000000040;
        param_1 = user_precision;
        param_2 = dev_debug;
      }
      else {
LAB_00100bd4:
        _iStack0000000000000040 = (ulong)ROUND(lVar17 + (longdouble)__LC52);
        lVar15 = (longdouble)(long)_iStack0000000000000040;
        param_1 = user_precision;
        param_2 = dev_debug;
      }
      goto LAB_00100a90;
    default:
      uVar5 = FUN_00100aa9();
      return uVar5;
    }
  }
LAB_00100a40:
  param_1 = user_precision;
  param_2 = dev_debug;
  if ((longdouble)0 <= lVar17) goto LAB_00100a60;
  goto LAB_00100b80;
switchD_00100a2f_caseD_1:
LAB_00100b80:
  lVar9 = (long)ROUND(-lVar17);
  _iStack0000000000000040 = -(lVar9 + (ulong)((longdouble)lVar9 < -lVar17));
  lVar15 = (longdouble)(long)_iStack0000000000000040;
  param_1 = user_precision;
  param_2 = dev_debug;
  goto LAB_00100a90;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0010186b(undefined8 param_1,char param_2)

{
  double dVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  ulong unaff_RBX;
  int unaff_EBP;
  undefined *puVar14;
  int in_R9D;
  long unaff_R12;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar15;
  longdouble lVar16;
  longdouble lVar17;
  longdouble in_ST0;
  longdouble lVar18;
  longdouble in_ST1;
  longdouble lVar19;
  undefined *unaff_retaddr;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  undefined8 in_stack_00000028;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  undefined *puStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
code_r0x0010186b:
  in_ST1 = in_ST1 / in_ST0;
LAB_00100eab:
  uVar3 = uStack_8;
  uStack_8 = (undefined2)((unkuint10)in_ST1 >> 0x40);
  uVar2 = uStack_8;
  puStack_10 = SUB108(in_ST1,0);
  puVar14 = puStack_10;
  if (param_2 != '\0') {
    pcVar12 = "  no scaling, returning value: %.*Lf\n";
    if (in_R9D != 0) {
      pcVar12 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
    }
    __fprintf_chk(_stderr,2,pcVar12,unaff_EBP);
    unaff_RBX = CONCAT62(uStack_6,uStack_8);
    uVar3 = uStack_8;
  }
  uStack_8 = uVar3;
  *(undefined4 *)unaff_R15 = 0x664c2a2e;
  *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
  puStack_10 = suffix;
  if (suffix == (undefined *)0x0) {
    puStack_10 = &_LC15;
  }
  iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,
                         puVar14,uVar2);
  do {
    if ((iVar6 < 0) ||
       (lVar11 = (long)iVar6 - (padding_buffer_size + -1),
       SBORROW8((long)iVar6,padding_buffer_size + -1))) {
      uStack_8 = 0x1a91;
      uStack_6 = 0x10;
      uVar9 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
      uStack_8 = uStack0000000000000008;
      uStack_6 = uStack000000000000000a;
      register0x00000020 = (BADSPACEBASE *)&puStack_10;
      puStack_10 = unaff_retaddr;
      error(1,0,uVar9);
      goto LAB_00101726;
    }
    if (lVar11 < 1) {
      if (dev_debug != '\0') {
        uStack_8 = 0x1786;
        uStack_6 = 0x10;
        uVar9 = quote(padding_buffer);
        uStack_8 = uStack0000000000000008;
        puStack_10 = unaff_retaddr;
        __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar9);
      }
      if (padding_width != 0) {
        uStack_8 = 0x16a8;
        uStack_6 = 0x10;
        iVar6 = gnu_mbswidth(padding_buffer,3);
        if (-1 < iVar6) {
          if (padding_width < 0) {
            if (padding_width < -iVar6) {
              uVar13 = padding_width + iVar6;
              if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
              goto LAB_001016ec;
            }
          }
          else if (iVar6 < padding_width) {
            uVar13 = padding_width - iVar6;
            unaff_RBX = uVar13;
            if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
            uStack_8 = 0x16ec;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
            unaff_RBX = uVar13;
            if (0 < (long)uVar13) {
LAB_00101700:
              do {
                pcVar12 = _stdout->_IO_write_ptr;
                if (pcVar12 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar12 + 1;
                  *pcVar12 = ' ';
                }
                else {
                  uStack_8 = 0x185a;
                  uStack_6 = 0x10;
                  __overflow(_stdout,0x20);
                }
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
LAB_00101726:
            *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
            fputs_unlocked(padding_buffer,_stdout);
            if ((long)unaff_RBX < 0) {
              do {
                pcVar12 = _stdout->_IO_write_ptr;
                if (pcVar12 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar12 + 1;
                  *pcVar12 = ' ';
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
                  __overflow(_stdout,0x20);
                }
                unaff_RBX = unaff_RBX + 1;
              } while (unaff_RBX != 0);
            }
LAB_00101518:
            if (format_str_suffix != (char *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
              fputs_unlocked(format_str_suffix,_stdout);
            }
            if (*(long *)((long)register0x00000020 + 0xb8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
              __stack_chk_fail();
            }
            return 1;
          }
        }
      }
      if (format_str_prefix != (char *)0x0) {
        uStack_8 = 0x14fe;
        uStack_6 = 0x10;
        fputs_unlocked(format_str_prefix,_stdout);
      }
      uStack_8 = 0x1511;
      uStack_6 = 0x10;
      fputs_unlocked(padding_buffer,_stdout);
      goto LAB_00101518;
    }
    uStack_8 = 0xc90;
    uStack_6 = 0x10;
    unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar11,0xffffffffffffffff,1);
    iVar6 = scale_to;
    in_R9D = grouping;
    unaff_R12 = padding_buffer_size;
    unaff_RBX = (ulong)round_style;
    if (grouping == 0) {
      uVar9 = 0x19;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
    }
    else {
      in_stack_00000090._1_1_ = 0x27;
      uVar9 = 0x18;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
    }
    padding_buffer = unaff_R14;
    if (zero_padding_width != 0) {
      uStack_8 = 0xd58;
      uStack_6 = 0x10;
      iVar5 = __sprintf_chk(unaff_R15,2,uVar9);
      unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar5);
    }
    lVar18 = __LC19;
    if (dev_debug != '\0') {
      uStack_8 = 0xd94;
      uStack_6 = 0x10;
      fwrite("double_to_human:\n",1,0x11,_stderr);
      lVar18 = __LC19;
    }
    __LC19 = lVar18;
    if (iVar6 == 0) break;
    if (iVar6 - 3U < 2) {
      iStack0000000000000040 = 0x400;
      dVar1 = _LC16;
    }
    else {
      iStack0000000000000040 = 1000;
      dVar1 = _LC17;
    }
    lVar19 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr);
    if (lVar19 < __LC44) {
      lVar19 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr);
      uVar13 = 0;
      if (dev_debug != '\0') goto LAB_00100ff8;
LAB_0010099e:
      if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
      uVar7 = (ulong)((int)uVar13 * 3);
LAB_001009b4:
      if ((long)user_precision <= (long)uVar7) {
        uVar7 = user_precision;
      }
      iVar5 = (int)uVar7;
      if (iVar5 == 0) {
LAB_001011a2:
        lVar18 = (longdouble)(long)ROUND(lVar19 / __LC51) * __LC51;
        lVar19 = lVar19 - lVar18;
        switch(unaff_RBX) {
        case 0:
          iVar5 = 0;
          goto LAB_00100a60;
        case 1:
          iVar5 = 0;
          break;
        case 2:
          iVar5 = 0;
LAB_00100a40:
          if ((longdouble)0 <= lVar19) goto LAB_00100a60;
          break;
        case 3:
LAB_0010120e:
          lVar17 = (longdouble)(long)ROUND(lVar19) + lVar18;
          goto LAB_00100abb;
        case 4:
          iVar5 = 0;
LAB_00100bc8:
          if (lVar19 < (longdouble)0) {
            lVar17 = (longdouble)(long)ROUND(lVar19 - (longdouble)__LC52);
          }
          else {
LAB_00100bd4:
            lVar17 = (longdouble)(long)ROUND(lVar19 + (longdouble)__LC52);
          }
          goto LAB_00100a90;
        default:
          uVar9 = FUN_00104126();
          return uVar9;
        }
LAB_00100b80:
        lVar11 = (long)ROUND(-lVar19);
        lVar17 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -lVar19));
        goto LAB_00100a90;
      }
      iVar4 = iVar5 + -1;
      if (iVar4 == 0) {
        lVar16 = (longdouble)__LC1;
LAB_0010106c:
        lVar18 = (longdouble)(long)ROUND((lVar19 * lVar16) / __LC51) * __LC51;
        lVar19 = lVar19 * lVar16 - lVar18;
        iVar5 = 1;
        switch(unaff_RBX) {
        case 0:
          iVar5 = 1;
          goto LAB_00100a60;
        case 1:
          iVar5 = 1;
          break;
        case 2:
          iVar5 = 1;
          goto LAB_00100a40;
        case 3:
          goto LAB_00100bf5;
        case 4:
          iVar5 = 1;
          goto LAB_00100bc8;
        default:
          uVar9 = FUN_00104126();
          return uVar9;
        }
        goto LAB_00100b80;
      }
      lVar16 = (longdouble)__LC1;
      lVar17 = lVar16;
      do {
        lVar17 = lVar17 * lVar16;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar18 = (longdouble)(long)ROUND((lVar17 * lVar19) / __LC51) * __LC51;
      lVar19 = lVar17 * lVar19 - lVar18;
      switch(unaff_RBX) {
      case 0:
        goto LAB_00100a60;
      case 1:
        goto LAB_00100b80;
      case 2:
        goto LAB_00100a40;
      case 3:
LAB_00100bf5:
        lVar17 = (longdouble)(long)ROUND(lVar19) + lVar18;
        break;
      case 4:
        goto LAB_00100bc8;
      default:
        uVar9 = FUN_00100aa9();
        return uVar9;
      }
LAB_00100a9d:
      iVar5 = iVar5 + -1;
      lVar18 = lVar16;
      if (iVar5 == 0) {
        lVar17 = lVar17 / lVar16;
      }
      else {
        do {
          lVar18 = lVar18 * lVar16;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar17 = lVar17 / lVar18;
      }
    }
    else {
      if (lVar19 <= __LC45) {
        uVar13 = 0;
        while( true ) {
          lVar18 = -lVar19;
          if ((longdouble)0 <= lVar19) {
            lVar18 = lVar19;
          }
          if (lVar18 < (longdouble)iStack0000000000000040) break;
          lVar19 = lVar19 / (longdouble)iStack0000000000000040;
          uVar13 = (ulong)((int)uVar13 + 1);
        }
        if (dev_debug == '\0') goto LAB_0010099e;
LAB_00100ff8:
        puStack_10 = SUB108(lVar19,0);
        uStack_8 = (undefined2)((unkuint10)lVar19 >> 0x40);
        __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
        if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
        lVar18 = -lVar19;
        if ((longdouble)0 <= lVar19) {
          lVar18 = lVar19;
        }
        lVar16 = (longdouble)__LC1;
        if (lVar18 < lVar16) goto LAB_0010106c;
        goto LAB_001011a2;
      }
      if (dev_debug != '\0') {
        lVar19 = (longdouble)__LC18;
        uVar13 = 0;
        goto LAB_00100ff8;
      }
      if (user_precision != 0xffffffffffffffff) {
        lVar19 = (longdouble)__LC18;
        uVar7 = 0;
        uVar13 = 0;
        goto LAB_001009b4;
      }
      switch(unaff_RBX) {
      case 0:
        lVar19 = (longdouble)__LC18;
        uVar13 = 0;
        iVar5 = 0;
        break;
      case 1:
        lVar19 = (longdouble)__LC18;
        uVar13 = 0;
        iVar5 = 0;
        goto LAB_00100b80;
      case 2:
        iVar5 = 0;
        uVar13 = 0;
        lVar19 = (longdouble)__LC18;
        break;
      case 3:
        lVar19 = (longdouble)__LC18;
        uVar13 = 0;
        goto LAB_0010120e;
      case 4:
        lVar19 = (longdouble)__LC18;
        iVar5 = 0;
        uVar13 = 0;
        goto LAB_00100bd4;
      default:
        lVar17 = (longdouble)0;
        uVar13 = 0;
        uVar7 = 0;
        goto LAB_00100b05;
      }
LAB_00100a60:
      lVar17 = (longdouble)(long)ROUND(lVar19);
      if (lVar17 < lVar19) {
        lVar17 = (longdouble)((long)ROUND(lVar19) + 1);
      }
LAB_00100a90:
      lVar17 = lVar17 + lVar18;
      if (iVar5 != 0) {
        lVar16 = (longdouble)__LC1;
        goto LAB_00100a9d;
      }
    }
LAB_00100abb:
    lVar18 = (longdouble)dVar1;
    if (lVar17 < (longdouble)0) {
      lVar19 = -lVar17;
      if (lVar18 <= lVar19) goto LAB_001010d4;
LAB_001010fa:
      if (lVar19 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      if (lVar18 <= lVar17) {
LAB_001010d4:
        lVar17 = lVar17 / lVar18;
        uVar13 = (ulong)((int)uVar13 + 1);
        lVar18 = (longdouble)0;
        if (!NAN(lVar17) && !NAN(lVar18)) {
          if (lVar17 == lVar18) goto LAB_00101112;
          if (lVar17 <= lVar18) {
            lVar19 = -lVar17;
            goto LAB_001010fa;
          }
        }
      }
      else if (lVar17 == (longdouble)0) goto LAB_00101112;
      if ((longdouble)__LC1 <= lVar17) goto LAB_00101112;
LAB_00100af3:
      bVar15 = (int)uVar13 != 0;
      uVar7 = (ulong)bVar15;
      uVar8 = (uint)bVar15;
    }
    if (dev_debug != '\0') {
      puStack_10 = SUB108(lVar17,0);
      uStack_8 = (undefined2)((unkuint10)lVar17 >> 0x40);
      __fprintf_chk(dVar1,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
      uVar7 = (ulong)uVar8;
    }
LAB_00100b05:
    puVar14 = &DAT_001025c3;
    *unaff_R15 = 0x73257325664c2a2e;
    if (user_precision != 0xffffffffffffffff) {
      uVar7 = user_precision & 0xffffffff;
    }
    *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
    puVar10 = suffix;
    if (suffix == (undefined *)0x0) {
      puVar10 = &_LC15;
    }
    uVar8 = (uint)uVar13;
    if (iVar6 != 4) {
      if (uVar8 == 1) {
        uVar9 = FUN_00100c18();
        return uVar9;
      }
LAB_00100b51:
      if (10 < uVar8) {
        uVar9 = FUN_00100c18(user_precision,puVar14);
        return uVar9;
      }
      uVar9 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar13]))();
      return uVar9;
    }
    if (uVar8 != 0) {
      puVar14 = &_LC20;
      goto LAB_00100b51;
    }
    puStack_10 = puVar10;
    iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,uVar7,
                           SUB108(lVar17,0),(short)((unkuint10)lVar17 >> 0x40),&_LC15,0x25c3);
  } while( true );
  param_2 = dev_debug;
  if (unaff_EBP == 0) {
    lVar19 = (longdouble)
             (long)ROUND((longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) / __LC51) *
             __LC51;
    lVar18 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) - lVar19;
    switch(unaff_RBX) {
    case 0:
      goto switchD_001012e1_caseD_0;
    case 1:
      goto switchD_001012e1_caseD_1;
    case 2:
      goto LAB_00100e38;
    case 3:
      in_ST1 = (longdouble)(long)ROUND(lVar18) + lVar19;
      goto LAB_00100eab;
    case 4:
      goto LAB_00100fa0;
    default:
      in_ST1 = (longdouble)0;
      goto LAB_00100eab;
    }
  }
  iVar6 = unaff_EBP + -1;
  lVar16 = (longdouble)__LC1;
  lVar18 = lVar16;
  if (iVar6 == 0) {
    lVar16 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) * lVar16;
    lVar19 = (longdouble)(long)ROUND(lVar16 / __LC51) * __LC51;
    lVar18 = lVar16 - lVar19;
    switch(unaff_RBX) {
    case 0:
      break;
    case 1:
      goto switchD_001012e1_caseD_1;
    case 2:
      goto LAB_00100e38;
    case 3:
      uVar9 = FUN_00100e8f();
      return uVar9;
    case 4:
      goto LAB_00100fa0;
    default:
      uVar9 = FUN_0010186b();
      return uVar9;
    }
    goto switchD_001012e1_caseD_0;
  }
  do {
    lVar18 = lVar18 * lVar16;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  lVar18 = (longdouble)CONCAT28(uStack0000000000000008,unaff_retaddr) * lVar18;
  lVar19 = (longdouble)(long)ROUND(lVar18 / __LC51) * __LC51;
  lVar18 = lVar18 - lVar19;
  switch(unaff_RBX) {
  case 0:
    goto switchD_001012e1_caseD_0;
  case 1:
switchD_001012e1_caseD_1:
    lVar11 = (long)ROUND(-lVar18);
    lVar16 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -lVar18));
    break;
  case 2:
LAB_00100e38:
    if (lVar18 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
    lVar16 = (longdouble)(long)ROUND(lVar18);
    if (lVar16 < lVar18) {
      lVar16 = (longdouble)((long)ROUND(lVar18) + 1);
    }
    break;
  case 3:
    in_ST1 = (longdouble)(long)ROUND(lVar18) + lVar19;
    goto code_r0x00100e8f;
  case 4:
LAB_00100fa0:
    if (lVar18 < (longdouble)0) {
      lVar16 = (longdouble)(long)ROUND(lVar18 - (longdouble)__LC52);
    }
    else {
      lVar16 = (longdouble)(long)ROUND(lVar18 + (longdouble)__LC52);
    }
    break;
  default:
    goto switchD_00100e22_default;
  }
  in_ST1 = lVar16 + lVar19;
  if (unaff_EBP == 0) goto LAB_00100eab;
code_r0x00100e8f:
  in_ST0 = (longdouble)__LC1;
  iVar6 = unaff_EBP + -1;
  lVar18 = in_ST0;
  if (iVar6 != 0) {
    do {
      lVar18 = lVar18 * in_ST0;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    in_ST1 = in_ST1 / lVar18;
    goto LAB_00100eab;
  }
  goto code_r0x0010186b;
switchD_00100e22_default:
  uVar9 = FUN_00100e8f();
  return uVar9;
}



void switchD_00101309::caseD_0(void)

{
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = 0;
  FUN_001015f8();
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 process_line(char *param_1,char param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  wint_t wVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  wint_t local_4c [3];
  long local_40;
  
  lVar10 = 0;
  uVar8 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = delimiter;
LAB_00101b18:
  cVar2 = *param_1;
  lVar10 = lVar10 + 1;
  pcVar7 = param_1;
  if (uVar6 == 0x80) {
    if (cVar2 != '\0') {
      do {
        if (cVar2 < '\0') {
          pcVar5 = pcVar7 + (2 - (ulong)(pcVar7[1] == '\0'));
          local_4c[1] = 0;
          lVar12 = mbrtoc32(local_4c,pcVar7,
                            pcVar5 + (*pcVar5 != '\0') +
                            ((ulong)(pcVar5[*pcVar5 != '\0'] != '\0') - (long)pcVar7),local_4c + 1);
          wVar9 = local_4c[0];
          if (-1 < lVar12) goto LAB_00101be7;
          wVar9 = 0;
          bVar11 = 1;
LAB_00101bec:
          iVar4 = iswblank(wVar9);
          if (iVar4 == 0) goto LAB_00101c80;
        }
        else {
          lVar12 = 1;
          wVar9 = (int)cVar2;
LAB_00101be7:
          bVar11 = (byte)lVar12;
          if (wVar9 != 10) goto LAB_00101bec;
        }
        cVar2 = pcVar7[bVar11];
        pcVar7 = pcVar7 + bVar11;
        if (cVar2 == '\0') break;
      } while( true );
    }
  }
  else {
    uVar3 = (uint)cVar2;
    if (uVar3 == uVar6) goto LAB_00101b6c;
    if (cVar2 != '\0') {
      while (uVar3 != uVar6) {
        if (pcVar7[1] == '\0') goto LAB_00101c10;
        uVar3 = (uint)pcVar7[1];
        pcVar7 = pcVar7 + 1;
      }
      goto LAB_00101b69;
    }
  }
  goto LAB_00101c10;
LAB_00101c80:
  cVar2 = *pcVar7;
  if (cVar2 == '\0') {
LAB_00101c10:
    cVar2 = process_field(param_1,lVar10);
    bVar11 = line_delim;
    if (cVar2 == '\0') {
      uVar8 = 0;
    }
    if (param_2 != '\0') {
      pbVar1 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar1 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
        *pbVar1 = bVar11;
      }
      else {
        __overflow(_stdout,(uint)line_delim);
      }
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar8;
  }
  if (cVar2 < '\0') goto LAB_00101cc1;
LAB_00101c8d:
  uVar13 = 1;
  wVar9 = (int)cVar2;
  while (wVar9 != 10) {
    while( true ) {
      iVar4 = iswblank(wVar9);
      if (iVar4 != 0) goto LAB_00101b69;
      pcVar7 = pcVar7 + (uVar13 & 0xff);
      cVar2 = *pcVar7;
      if (cVar2 == '\0') goto LAB_00101c10;
      if (-1 < cVar2) goto LAB_00101c8d;
LAB_00101cc1:
      pcVar5 = pcVar7 + (2 - (ulong)(pcVar7[1] == '\0'));
      local_4c[1] = 0;
      uVar13 = mbrtoc32(local_4c,pcVar7,
                        pcVar5 + (*pcVar5 != '\0') +
                        ((ulong)(pcVar5[*pcVar5 != '\0'] != '\0') - (long)pcVar7),local_4c + 1);
      wVar9 = local_4c[0];
      if (-1 < (long)uVar13) break;
      wVar9 = 0;
      uVar13 = 1;
    }
  }
LAB_00101b69:
  cVar2 = *pcVar7;
LAB_00101b6c:
  if (cVar2 == '\0') goto LAB_00101c10;
  *pcVar7 = '\0';
  cVar2 = process_field(param_1,lVar10);
  uVar6 = delimiter;
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  pcVar5 = _stdout->_IO_write_ptr;
  uVar3 = 0x20;
  if (delimiter != 0x80) {
    uVar3 = delimiter;
  }
  if (pcVar5 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar5 + 1;
    *pcVar5 = (char)uVar3;
  }
  else {
    __overflow(_stdout,uVar3 & 0xff);
    uVar6 = delimiter;
  }
  param_1 = pcVar7 + 1;
  goto LAB_00101b18;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long in_FS_OFFSET;
  undefined *local_a8;
  char *pcStack_a0;
  char *local_98 [4];
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [16];
  undefined8 local_30;
  
  uVar5 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00101dfa;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [NUMBER]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Reformat NUMBER(s), or the numbers from standard input if none are specified.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --debug          print warnings about invalid input\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -d, --delimiter=X    use X instead of whitespace for field delimiter\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --field=FIELDS   replace the numbers in these input fields (default=1);\n                         see FIELDS below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --format=FORMAT  use printf style floating-point FORMAT;\n                         see FORMAT below for details\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --from=UNIT      auto-scale input numbers to UNITs; default is \'none\';\n                         see UNIT below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --from-unit=N    specify the input unit size (instead of the default 1)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --grouping       use locale-defined grouping of digits, e.g. 1,000,000\n                         (which means it has no effect in the C/POSIX locale)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --header[=N]     print (without converting) the first N header lines;\n                         N defaults to 1 if not specified\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --invalid=MODE   failure mode for invalid numbers: MODE can be:\n                         abort (default), fail, warn, ignore\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --padding=N      pad the output to N characters; positive N will\n                         right-align; negative N will left-align;\n                         padding is ignored if the output is wider than N;\n                         the default is to automatically pad if a whitespace\n                         is found\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --round=METHOD   use METHOD for rounding when scaling; METHOD can be:\n                         up, down, from-zero (default), towards-zero, nearest\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --suffix=SUFFIX  add SUFFIX to output numbers, and accept optional\n                         SUFFIX in input numbers\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --to=UNIT        auto-scale output numbers to UNITs; see UNIT below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --to-unit=N      the output unit size (instead of the default 1)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nUNIT options:\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  none       no auto-scaling is done; suffixes will trigger an error\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  auto       accept optional single/two letter suffix:\n               1K = 1000, 1k = 1000,\n               1Ki = 1024,\n               1M = 1000000,\n               1Mi = 1048576,\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  si         accept optional single letter suffix:\n               1k = 1000, 1K = 1000,\n               1M = 1000000,\n               ...\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  iec        accept optional single letter suffix:\n               1K = 1024, 1k = 1024,\n               1M = 1048576,\n               ...\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  iec-i      accept optional two-letter suffix:\n               1Ki = 1024, 1ki = 1024,\n               1Mi = 1048576,\n               ...\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFIELDS supports cut(1) style field ranges:\n  N    N\'th field, counted from 1\n  N-   from N\'th field, to end of line\n  N-M  from N\'th to M\'th field (inclusive)\n  -M   from first to M\'th field (inclusive)\n  -    all fields\nMultiple fields/ranges can be separated with commas\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFORMAT must be suitable for printing one floating-point argument \'%f\'.\nOptional quote (%\'f) will enable --grouping (if supported by current locale).\nOptional width value (%10f) will pad output. Optional zero (%010f) width\nwill zero pad the number. Optional negative values (%-10f) will left align.\nOptional precision (%.1f) will override the input determined precision.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = _program_name;
  uVar3 = dcgettext(0,
                    "\nExit status is 0 if all input numbers were successfully converted.\nBy default, %s will stop at the first conversion error with exit status 2.\nWith --invalid=\'fail\' a warning is printed for each conversion error\nand the exit status is 2.  With --invalid=\'warn\' each conversion error is\ndiagnosed, but the exit status is 0.  With --invalid=\'ignore\' conversion\nerrors are not diagnosed and the exit status is 0.\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5);
  uVar5 = _program_name;
  uVar3 = dcgettext(0,
                    "\nExamples:\n  $ %s --to=si 1000\n            -> \"1.0k\"\n  $ %s --to=iec 2048\n           -> \"2.0K\"\n  $ %s --to=iec-i 4096\n           -> \"4.0Ki\"\n  $ echo 1K | %s --from=si\n           -> \"1000\"\n  $ echo 1K | %s --from=iec\n           -> \"1024\"\n  $ df -B1 | %s --header --field 2-4 --to=si\n  $ ls -l  | %s --header --field 5 --to=iec\n  $ ls -lh | %s --header --field 5 --from=iec --padding=10\n  $ ls -lh | %s --header --field 5 --from=iec --format %%10f\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5,uVar5,uVar5,uVar5,uVar5,uVar5,uVar5,uVar3);
  pcVar4 = "[";
  local_a8 = &_LC58;
  pcStack_a0 = "test invocation";
  local_98[0] = "coreutils";
  local_98[1] = "Multi-call invocation";
  local_98[2] = "sha224sum";
  local_98[3] = "sha2 utilities";
  local_78 = "sha256sum";
  pcStack_70 = "sha2 utilities";
  local_68 = "sha384sum";
  pcStack_60 = "sha2 utilities";
  local_58 = "sha512sum";
  pcStack_50 = "sha2 utilities";
  local_48 = (undefined1  [16])0x0;
  do {
    iVar2 = strcmp("numfmt",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "numfmt";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001023a5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","numfmt");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001023a5:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","numfmt");
    if (pcVar4 == "numfmt") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_00101dfa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



void process_field_cold(void)

{
  FUN_00100aa9();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00104126(ulong param_1,char param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,longdouble param_8,undefined8 param_9,
            undefined8 param_10)

{
  double dVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined *puVar9;
  long lVar10;
  char *pcVar11;
  ulong unaff_RBX;
  int unaff_EBP;
  undefined *puVar12;
  long unaff_R12;
  int unaff_R13D;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  longdouble lVar13;
  longdouble lVar14;
  longdouble lVar15;
  longdouble lVar16;
  undefined *unaff_retaddr;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  undefined *puStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
  lVar14 = (longdouble)0;
  uVar6 = 0;
LAB_00100afc:
  uVar8 = (uint)uVar6;
joined_r0x00100aff:
  if (param_2 != '\0') {
    puStack_10 = SUB108(lVar14,0);
    uStack_8 = (undefined2)((unkuint10)lVar14 >> 0x40);
    __fprintf_chk(param_8._0_8_,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
    param_4 = param_4 & 0xffffffff;
    uVar6 = (ulong)uVar8;
    param_1 = user_precision;
  }
LAB_00100b05:
  puVar12 = &DAT_001025c3;
  *unaff_R15 = 0x73257325664c2a2e;
  if (param_1 != 0xffffffffffffffff) {
    uVar6 = param_1 & 0xffffffff;
  }
  *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
  puVar9 = suffix;
  if (suffix == (undefined *)0x0) {
    puVar9 = &_LC15;
  }
  uVar8 = (uint)param_4;
  if (unaff_R13D == 4) {
    if (uVar8 == 0) {
      puStack_10 = puVar9;
      iVar5 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,uVar6,
                             SUB108(lVar14,0),(short)((unkuint10)lVar14 >> 0x40),&_LC15,0x25c3);
      do {
        if ((iVar5 < 0) ||
           (lVar10 = (long)iVar5 - (padding_buffer_size + -1),
           SBORROW8((long)iVar5,padding_buffer_size + -1))) {
          uStack_8 = 0x1a91;
          uStack_6 = 0x10;
          uVar7 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
          uStack_8 = (undefined2)param_7;
          uStack_6 = param_7._2_6_;
          register0x00000020 = (BADSPACEBASE *)&puStack_10;
          puStack_10 = unaff_retaddr;
          error(1,0,uVar7);
          goto LAB_00101726;
        }
        if (lVar10 < 1) {
          if (dev_debug != '\0') {
            uStack_8 = 0x1786;
            uStack_6 = 0x10;
            uVar7 = quote(padding_buffer);
            uStack_8 = (undefined2)param_7;
            puStack_10 = unaff_retaddr;
            __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar7);
          }
          if (padding_width != 0) {
            uStack_8 = 0x16a8;
            uStack_6 = 0x10;
            iVar5 = gnu_mbswidth(padding_buffer,3);
            if (-1 < iVar5) {
              if (padding_width < 0) {
                if (padding_width < -iVar5) {
                  uVar6 = padding_width + iVar5;
                  if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
                  goto LAB_001016ec;
                }
              }
              else if (iVar5 < padding_width) {
                uVar6 = padding_width - iVar5;
                unaff_RBX = uVar6;
                if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
                uStack_8 = 0x16ec;
                uStack_6 = 0x10;
                fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
                unaff_RBX = uVar6;
                if (0 < (long)uVar6) {
LAB_00101700:
                  do {
                    pcVar11 = _stdout->_IO_write_ptr;
                    if (pcVar11 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar11 + 1;
                      *pcVar11 = ' ';
                    }
                    else {
                      uStack_8 = 0x185a;
                      uStack_6 = 0x10;
                      __overflow(_stdout,0x20);
                    }
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
LAB_00101726:
                *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
                fputs_unlocked(padding_buffer,_stdout);
                if ((long)unaff_RBX < 0) {
                  do {
                    pcVar11 = _stdout->_IO_write_ptr;
                    if (pcVar11 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar11 + 1;
                      *pcVar11 = ' ';
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
                      __overflow(_stdout,0x20);
                    }
                    unaff_RBX = unaff_RBX + 1;
                  } while (unaff_RBX != 0);
                }
LAB_00101518:
                if (format_str_suffix != (char *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x101534;
                  fputs_unlocked(format_str_suffix,_stdout);
                }
                if (*(long *)((long)register0x00000020 + 0xb8) == *(long *)(in_FS_OFFSET + 0x28)) {
                  return 1;
                }
                    /* WARNING: Subroutine does not return */
                *(code **)((long)register0x00000020 + -8) = switchD_00101309::caseD_0;
                __stack_chk_fail();
              }
            }
          }
          if (format_str_prefix != (char *)0x0) {
            uStack_8 = 0x14fe;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
          }
          uStack_8 = 0x1511;
          uStack_6 = 0x10;
          fputs_unlocked(padding_buffer,_stdout);
          goto LAB_00101518;
        }
        uStack_8 = 0xc90;
        uStack_6 = 0x10;
        unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar10,0xffffffffffffffff,1)
        ;
        unaff_R13D = scale_to;
        iVar5 = grouping;
        unaff_R12 = padding_buffer_size;
        unaff_RBX = (ulong)round_style;
        if (grouping == 0) {
          uVar7 = 0x19;
          unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
        }
        else {
          in_stack_00000090._1_1_ = 0x27;
          uVar7 = 0x18;
          unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
        }
        padding_buffer = unaff_R14;
        uVar3 = uStack_8;
        if (zero_padding_width != 0) {
          param_8 = (longdouble)CONCAT64(param_8._4_6_,grouping);
          uStack_8 = 0xd58;
          uStack_6 = 0x10;
          iVar4 = __sprintf_chk(unaff_R15,2,uVar7);
          unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar4);
          uVar3 = uStack_8;
        }
        lVar15 = __LC19;
        if (dev_debug != '\0') {
          param_8._4_6_ = (undefined6)((unkuint10)param_8 >> 0x20);
          param_8 = (longdouble)CONCAT64(param_8._4_6_,iVar5);
          uStack_8 = 0xd94;
          uStack_6 = 0x10;
          fwrite("double_to_human:\n",1,0x11,_stderr);
          lVar15 = __LC19;
          uVar3 = uStack_8;
        }
        param_8._8_2_ = (undefined2)((unkuint10)param_8 >> 0x40);
        __LC19 = lVar15;
        uStack_8 = uVar3;
        if (unaff_R13D != 0) goto LAB_00100923;
        if (unaff_EBP == 0) {
          lVar10 = (long)ROUND((longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) / __LC51);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar10);
          lVar15 = (longdouble)lVar10 * __LC51;
          lVar14 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) - lVar15;
          switch(unaff_RBX) {
          case 0:
            goto switchD_001012e1_caseD_0;
          case 1:
            goto switchD_001012e1_caseD_1;
          case 2:
            goto LAB_00100e38;
          case 3:
            param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar14));
            lVar16 = (longdouble)(long)ROUND(lVar14) + lVar15;
            break;
          case 4:
            goto LAB_00100fa0;
          default:
            lVar16 = (longdouble)0;
          }
          goto LAB_00100eab;
        }
        iVar4 = unaff_EBP + -1;
        lVar16 = (longdouble)__LC1;
        lVar14 = lVar16;
        if (iVar4 == 0) {
          lVar16 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar16;
          lVar10 = (long)ROUND(lVar16 / __LC51);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar10);
          lVar15 = (longdouble)lVar10 * __LC51;
          lVar14 = lVar16 - lVar15;
          switch(unaff_RBX) {
          case 0:
            break;
          case 1:
            goto switchD_001012e1_caseD_1;
          case 2:
            goto LAB_00100e38;
          case 3:
            uVar7 = FUN_00100e8f();
            return uVar7;
          case 4:
            goto LAB_00100fa0;
          default:
            uVar7 = FUN_0010186b();
            return uVar7;
          }
          goto switchD_001012e1_caseD_0;
        }
        do {
          lVar14 = lVar14 * lVar16;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar14 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar14;
        lVar10 = (long)ROUND(lVar14 / __LC51);
        param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar10);
        lVar15 = (longdouble)lVar10 * __LC51;
        lVar14 = lVar14 - lVar15;
        switch(unaff_RBX) {
        case 0:
          goto switchD_001012e1_caseD_0;
        case 1:
switchD_001012e1_caseD_1:
          lVar10 = (long)ROUND(-lVar14);
          lVar10 = -(lVar10 + (ulong)((longdouble)lVar10 < -lVar14));
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar10);
          lVar16 = (longdouble)lVar10;
          break;
        case 2:
LAB_00100e38:
          if (lVar14 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
          lVar10 = (long)ROUND(lVar14);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar10);
          lVar16 = (longdouble)lVar10;
          if (lVar16 < lVar14) {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar10 + 1);
            lVar16 = (longdouble)(lVar10 + 1);
          }
          break;
        case 3:
          param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar14));
          lVar16 = (longdouble)(long)ROUND(lVar14) + lVar15;
          goto code_r0x00100e8f;
        case 4:
LAB_00100fa0:
          if (lVar14 < (longdouble)0) {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar14 - (longdouble)__LC52));
            lVar16 = (longdouble)(long)ROUND(lVar14 - (longdouble)__LC52);
          }
          else {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,(long)ROUND(lVar14 + (longdouble)__LC52));
            lVar16 = (longdouble)(long)ROUND(lVar14 + (longdouble)__LC52);
          }
          break;
        default:
          uVar7 = FUN_00100e8f();
          return uVar7;
        }
        lVar16 = lVar16 + lVar15;
        if (unaff_EBP != 0) {
code_r0x00100e8f:
          lVar15 = (longdouble)__LC1;
          iVar4 = unaff_EBP + -1;
          lVar14 = lVar15;
          if (iVar4 == 0) {
            lVar16 = lVar16 / lVar15;
          }
          else {
            do {
              lVar14 = lVar14 * lVar15;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            lVar16 = lVar16 / lVar14;
          }
        }
LAB_00100eab:
        uStack_8 = (undefined2)((unkuint10)lVar16 >> 0x40);
        uVar2 = uStack_8;
        puStack_10 = SUB108(lVar16,0);
        puVar12 = puStack_10;
        if (dev_debug != '\0') {
          pcVar11 = "  no scaling, returning value: %.*Lf\n";
          if (iVar5 != 0) {
            pcVar11 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
          }
          __fprintf_chk(_stderr,2,pcVar11,unaff_EBP);
          unaff_RBX = CONCAT62(uStack_6,uStack_8);
          param_8 = lVar16;
          uVar3 = uStack_8;
        }
        uStack_8 = uVar3;
        *(undefined4 *)unaff_R15 = 0x664c2a2e;
        *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
        puStack_10 = suffix;
        if (suffix == (undefined *)0x0) {
          puStack_10 = &_LC15;
        }
        iVar5 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,unaff_EBP,puVar12,
                               uVar2);
      } while( true );
    }
    puVar12 = &_LC20;
  }
  else if (uVar8 == 1) {
    uVar7 = FUN_00100c18();
    return uVar7;
  }
  if (uVar8 < 0xb) {
    uVar7 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[param_4]))();
    return uVar7;
  }
  uVar7 = FUN_00100c18(param_1,puVar12);
  return uVar7;
LAB_00100923:
  if (unaff_R13D - 3U < 2) {
    iStack0000000000000040 = 0x400;
    dVar1 = _LC16;
  }
  else {
    iStack0000000000000040 = 1000;
    dVar1 = _LC17;
  }
  param_8 = (longdouble)CONCAT28(param_8._8_2_,dVar1);
  lVar16 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
  if (lVar16 < __LC44) {
    lVar16 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
    param_4 = 0;
    goto joined_r0x00100998;
  }
  if (__LC45 < lVar16) {
    if (dev_debug != '\0') {
      lVar16 = (longdouble)__LC18;
      param_4 = 0;
      goto LAB_00100ff8;
    }
    if (user_precision != 0xffffffffffffffff) {
      lVar16 = (longdouble)__LC18;
      uVar6 = 0;
      param_4 = 0;
      goto LAB_001009b4;
    }
    switch(unaff_RBX) {
    case 0:
      goto switchD_001014c8_caseD_0;
    case 1:
      lVar16 = (longdouble)__LC18;
      param_4 = 0;
      iVar5 = 0;
      goto LAB_00100b80;
    case 2:
      iVar5 = 0;
      param_4 = 0;
      lVar16 = (longdouble)__LC18;
      goto LAB_00100a60;
    case 3:
      lVar16 = (longdouble)__LC18;
      param_4 = 0;
      goto LAB_0010120e;
    case 4:
      lVar16 = (longdouble)__LC18;
      iVar5 = 0;
      param_4 = 0;
      goto LAB_00100bd4;
    default:
      lVar14 = (longdouble)0;
      param_4 = 0;
      uVar6 = 0;
      param_1 = user_precision;
    }
    goto LAB_00100b05;
  }
  param_4 = 0;
  while( true ) {
    lVar14 = -lVar16;
    if ((longdouble)0 <= lVar16) {
      lVar14 = lVar16;
    }
    if (lVar14 < (longdouble)iStack0000000000000040) break;
    lVar16 = lVar16 / (longdouble)iStack0000000000000040;
    param_4 = (ulong)((int)param_4 + 1);
  }
joined_r0x00100998:
  if (dev_debug != '\0') {
LAB_00100ff8:
    puStack_10 = SUB108(lVar16,0);
    uStack_8 = (undefined2)((unkuint10)lVar16 >> 0x40);
    __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
    if (user_precision == 0xffffffffffffffff) goto LAB_00101050;
LAB_001009af:
    uVar6 = (ulong)((int)param_4 * 3);
LAB_001009b4:
    if ((long)user_precision <= (long)uVar6) {
      uVar6 = user_precision;
    }
    iVar5 = (int)uVar6;
    if (iVar5 == 0) goto LAB_001011a2;
    iVar4 = iVar5 + -1;
    if (iVar4 == 0) {
      lVar13 = (longdouble)__LC1;
LAB_0010106c:
      lVar15 = (longdouble)(long)ROUND((lVar16 * lVar13) / __LC51) * __LC51;
      lVar16 = lVar16 * lVar13 - lVar15;
      iVar5 = 1;
      switch(unaff_RBX) {
      case 0:
        iVar5 = 1;
        goto LAB_00100a60;
      case 1:
        iVar5 = 1;
        break;
      case 2:
        iVar5 = 1;
        goto LAB_00100a40;
      case 3:
        goto LAB_00100bf5;
      case 4:
        iVar5 = 1;
        goto LAB_00100bc8;
      default:
        uVar7 = FUN_00104126();
        return uVar7;
      }
      goto LAB_00100b80;
    }
    lVar13 = (longdouble)__LC1;
    lVar14 = lVar13;
    do {
      lVar14 = lVar14 * lVar13;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar15 = (longdouble)(long)ROUND((lVar14 * lVar16) / __LC51) * __LC51;
    lVar16 = lVar14 * lVar16 - lVar15;
    switch(unaff_RBX) {
    case 0:
      goto LAB_00100a60;
    case 1:
      goto LAB_00100b80;
    case 2:
      goto LAB_00100a40;
    case 3:
LAB_00100bf5:
      lVar14 = (longdouble)(long)ROUND(lVar16) + lVar15;
      break;
    case 4:
      goto LAB_00100bc8;
    default:
      uVar7 = FUN_00100aa9();
      return uVar7;
    }
    goto LAB_00100a9d;
  }
  if (user_precision != 0xffffffffffffffff) goto LAB_001009af;
LAB_00101050:
  lVar14 = -lVar16;
  if ((longdouble)0 <= lVar16) {
    lVar14 = lVar16;
  }
  lVar13 = (longdouble)__LC1;
  if (lVar14 < lVar13) goto LAB_0010106c;
LAB_001011a2:
  lVar15 = (longdouble)(long)ROUND(lVar16 / __LC51) * __LC51;
  lVar16 = lVar16 - lVar15;
  switch(unaff_RBX) {
  case 0:
    iVar5 = 0;
    goto LAB_00100a60;
  case 1:
    iVar5 = 0;
LAB_00100b80:
    lVar10 = (long)ROUND(-lVar16);
    lVar14 = (longdouble)(long)-(lVar10 + (ulong)((longdouble)lVar10 < -lVar16));
    break;
  case 2:
    iVar5 = 0;
LAB_00100a40:
    if (lVar16 < (longdouble)0) goto LAB_00100b80;
LAB_00100a60:
    lVar14 = (longdouble)(long)ROUND(lVar16);
    if (lVar14 < lVar16) {
      lVar14 = (longdouble)((long)ROUND(lVar16) + 1);
    }
    break;
  case 3:
LAB_0010120e:
    lVar14 = (longdouble)(long)ROUND(lVar16) + lVar15;
    goto LAB_00100abb;
  case 4:
    iVar5 = 0;
LAB_00100bc8:
    if ((longdouble)0 <= lVar16) {
LAB_00100bd4:
      lVar14 = (longdouble)(long)ROUND(lVar16 + (longdouble)__LC52);
    }
    else {
      lVar14 = (longdouble)(long)ROUND(lVar16 - (longdouble)__LC52);
    }
    break;
  default:
    goto switchD_001011e8_default;
  }
  lVar14 = lVar14 + lVar15;
  if (iVar5 != 0) {
    lVar13 = (longdouble)__LC1;
LAB_00100a9d:
    iVar5 = iVar5 + -1;
    lVar15 = lVar13;
    if (iVar5 == 0) {
      lVar14 = lVar14 / lVar13;
    }
    else {
      do {
        lVar15 = lVar15 * lVar13;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar14 = lVar14 / lVar15;
    }
  }
LAB_00100abb:
  lVar15 = (longdouble)dVar1;
  param_1 = user_precision;
  param_2 = dev_debug;
  if (lVar14 < (longdouble)0) {
    lVar16 = -lVar14;
    if (lVar15 <= lVar16) goto LAB_001010d4;
LAB_001010fa:
    if (lVar16 < (longdouble)__LC1) goto LAB_00100af3;
  }
  else {
    if (lVar15 <= lVar14) {
LAB_001010d4:
      lVar14 = lVar14 / lVar15;
      param_4 = (ulong)((int)param_4 + 1);
      lVar15 = (longdouble)0;
      if (!NAN(lVar14) && !NAN(lVar15)) {
        if (lVar14 == lVar15) goto LAB_00101112;
        if (lVar14 <= lVar15) {
          lVar16 = -lVar14;
          goto LAB_001010fa;
        }
      }
    }
    else if (lVar14 == (longdouble)0) goto LAB_00101112;
    if (lVar14 < (longdouble)__LC1) goto LAB_00100af3;
  }
LAB_00101112:
  uVar6 = 0;
  uVar8 = 0;
  goto joined_r0x00100aff;
switchD_001014c8_caseD_0:
  lVar16 = (longdouble)__LC18;
  param_4 = 0;
  iVar5 = 0;
  goto LAB_00100a60;
LAB_00100af3:
  uVar6 = (ulong)((int)param_4 != 0);
  goto LAB_00100afc;
switchD_001011e8_default:
  uVar7 = FUN_00104126();
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char main(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  __ssize_t _Var7;
  int *piVar8;
  undefined8 uVar9;
  ushort **ppuVar10;
  long lVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  char *pcVar15;
  undefined *puVar16;
  char **ppcVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined1 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar21;
  undefined1 *puVar22;
  char *local_60;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  local_60 = setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  decimal_point = (char *)rpl_nl_langinfo(0x10000);
  if ((decimal_point == (char *)0x0) || (*decimal_point == '\0')) {
    decimal_point = ".";
  }
  puVar19 = longopts;
  ppcVar17 = (char **)&_LC111;
  puVar14 = &switchD_00104465::switchdataD_00104214;
  sVar4 = strlen(decimal_point);
  decimal_point_length = (undefined4)sVar4;
  atexit((__func *)&close_stdout);
  iVar2 = delimiter;
LAB_00104420:
  while( true ) {
    delimiter = iVar2;
    puVar22 = (undefined1 *)0x104434;
    iVar1 = getopt_long(param_1,param_2,&_LC111,longopts);
    if (iVar1 == -1) break;
    if (0x8d < iVar1) {
switchD_00104465_caseD_65:
      usage();
      goto LAB_00104d5c;
    }
    if (iVar1 < 100) {
      if (iVar1 == -0x83) {
        uVar9 = proper_name_lite("Assaf Gordon","Assaf Gordon");
        version_etc(_stdout,"numfmt","GNU coreutils",_Version,uVar9,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar1 != -0x82) goto switchD_00104465_caseD_65;
      usage(0);
      goto LAB_00104e6b;
    }
    iVar2 = delimiter;
    switch(iVar1) {
    case 100:
      cVar12 = (char)*_optarg;
      iVar2 = (int)cVar12;
      if ((cVar12 != '\0') && (*(char *)((long)_optarg + 1) != '\0')) {
        do {
          pcVar15 = "the delimiter must be a single character";
LAB_00104f61:
          uVar9 = dcgettext(0,pcVar15,5);
          error(1,0,uVar9);
        } while( true );
      }
      break;
    default:
      goto switchD_00104465_caseD_65;
    case 0x7a:
      line_delim = 0;
      break;
    case 0x80:
      unaff_R15 = scale_from_types;
      lVar20 = __xargmatch_internal
                         ("--from",_optarg,scale_from_args,scale_from_types,4,_argmatch_die,1);
      scale_from = *(int *)(scale_from_types + lVar20 * 4);
      iVar2 = delimiter;
      break;
    case 0x81:
      from_unit_size = unit_to_umax(_optarg);
      iVar2 = delimiter;
      break;
    case 0x82:
      unaff_R15 = scale_to_types;
      lVar20 = __xargmatch_internal(&_LC113,_optarg,scale_to_args,scale_to_types,4,_argmatch_die,1);
      scale_to = *(int *)(scale_to_types + lVar20 * 4);
      iVar2 = delimiter;
      break;
    case 0x83:
      to_unit_size = unit_to_umax(_optarg);
      iVar2 = delimiter;
      break;
    case 0x84:
      unaff_R15 = puVar22;
      lVar20 = __xargmatch_internal("--round",_optarg,round_args,round_types,4,_argmatch_die,1);
      round_style = *(undefined4 *)(round_types + lVar20 * 4);
      iVar2 = delimiter;
      break;
    case 0x85:
      suffix = _optarg;
      break;
    case 0x86:
      grouping = 1;
      break;
    case 0x87:
      uVar13 = xstrtoimax(_optarg,0,10,&padding_width);
      if ((1 < uVar13) || (iVar2 = delimiter, padding_width == (undefined1 *)0x0)) {
        uVar9 = quote(_optarg);
        pcVar15 = "invalid padding value %s";
        goto LAB_00104e82;
      }
      break;
    case 0x88:
      if (_n_frp != 0) {
        pcVar15 = "multiple field specifications";
        goto LAB_00104f61;
      }
      set_fields(_optarg,1);
      iVar2 = delimiter;
      break;
    case 0x8a:
      dev_debug = '\x01';
    case 0x89:
      debug = '\x01';
      break;
    case 0x8b:
      if (_optarg != (uint *)0x0) goto code_r0x00104508;
      header = 1;
      break;
    case 0x8c:
      format_str = _optarg;
      break;
    case 0x8d:
      unaff_R15 = inval_types;
      lVar20 = __xargmatch_internal("--invalid",_optarg,inval_args,inval_types,4,_argmatch_die,1);
      inval_style = *(int *)(inval_types + lVar20 * 4);
      iVar2 = delimiter;
    }
  }
  if ((format_str != (uint *)0x0) &&
     (pcVar15 = "--grouping cannot be combined with --format", grouping != 0)) goto LAB_00104f61;
  if ((debug != '\0') && (local_60 == (char *)0x0)) {
    uVar9 = dcgettext(0,"failed to set locale",5);
    error(0,0,uVar9);
  }
  if ((debug == '\0') || (scale_from != 0 || scale_to != 0)) {
LAB_00104860:
    if (format_str == (uint *)0x0) goto LAB_00104960;
  }
  else if (grouping == 0) {
    if (padding_width == (undefined1 *)0x0) {
      if (format_str == (uint *)0x0) {
        uVar9 = dcgettext(0,"no conversion option specified",5);
        error(0,0,uVar9);
        goto LAB_00104860;
      }
    }
    else if (format_str == (uint *)0x0) goto LAB_00104a39;
  }
  else if (format_str == (uint *)0x0) goto LAB_00104a59;
  puVar14 = format_str;
  unaff_R15 = (undefined1 *)0x1;
  lVar20 = 0;
  local_48 = (char *)0x0;
LAB_00104894:
  if (*(char *)((long)format_str + lVar20) == '%') {
    lVar11 = lVar20 + 1;
    if (*(char *)((long)format_str + lVar20 + 1) != '%') goto LAB_00104a9f;
    lVar11 = 2;
  }
  else {
    if (*(char *)((long)format_str + lVar20) == '\0') goto LAB_00104e6b;
    lVar11 = 1;
  }
  lVar20 = lVar20 + lVar11;
  unaff_R15 = unaff_R15 + 1;
  goto LAB_00104894;
LAB_00104e6b:
  uVar9 = quote(puVar14);
  pcVar15 = "format %s has no %% directive";
  goto LAB_00104e82;
code_r0x00104508:
  iVar2 = xstrtoumax(_optarg,0,10,&header);
  if ((iVar2 != 0) || (iVar2 = delimiter, header == 0)) goto LAB_00104534;
  goto LAB_00104420;
LAB_00104534:
  uVar9 = quote(_optarg);
  pcVar15 = "invalid header value %s";
LAB_00104e82:
  do {
    uVar5 = dcgettext(0,pcVar15,5);
    error(1,0,uVar5,uVar9);
LAB_00104e9d:
    uVar9 = quote();
    pcVar15 = "invalid precision in format %s";
  } while( true );
LAB_00104a9f:
  local_60 = (char *)0x0;
  pcVar15 = (char *)((long)format_str + lVar11);
  do {
    while( true ) {
      while( true ) {
        sVar4 = strspn(pcVar15," ");
        lVar11 = lVar11 + sVar4;
        pcVar15 = (char *)((long)puVar14 + lVar11);
        if (*pcVar15 != '\'') break;
        grouping = 1;
        lVar11 = lVar11 + 1;
        pcVar15 = (char *)((long)puVar14 + lVar11);
      }
      if (*pcVar15 != '0') break;
      lVar11 = lVar11 + 1;
      local_60 = (char *)0x1;
      pcVar15 = (char *)((long)puVar14 + lVar11);
    }
  } while (sVar4 != 0);
  ppcVar17 = &local_48;
  puVar19 = (undefined1 *)__isoc23_strtoimax(pcVar15,ppcVar17,10);
  puVar22 = padding_width;
  if (puVar19 != (undefined1 *)0x0) {
    if ((debug == '\0') || (padding_width == (undefined1 *)0x0)) {
LAB_00104d7d:
      puVar22 = puVar19;
      if (((long)puVar19 < 0) || ((char)local_60 == '\0')) goto LAB_00104b36;
    }
    else if (((char)local_60 == '\0') || ((long)puVar19 < 1)) {
LAB_00104d5c:
      uVar9 = dcgettext(0,"--format padding overriding --padding",5);
      error(0,0,uVar9);
      goto LAB_00104d7d;
    }
    if (0x7fffffff < (long)puVar19) {
      puVar19 = (undefined1 *)0x7fffffff;
    }
    zero_padding_width = SUB84(puVar19,0);
    puVar22 = padding_width;
  }
LAB_00104b36:
  padding_width = puVar22;
  lVar20 = (long)local_48 - (long)puVar14;
  if (*local_48 == '\0') {
    uVar9 = quote(puVar14);
    pcVar15 = "format %s ends in %%";
    goto LAB_00104e82;
  }
  if (*local_48 == '.') {
    piVar8 = __errno_location();
    pcVar15 = (char *)((long)puVar14 + lVar20 + 1);
    *piVar8 = 0;
    user_precision = __isoc23_strtol(pcVar15,ppcVar17,10);
    if (*piVar8 == 0x22) goto LAB_00104e9d;
    if (user_precision < 0) goto LAB_00104e9d;
    ppuVar10 = __ctype_b_loc();
    cVar12 = *pcVar15;
    if (((*ppuVar10)[cVar12] & 1) != 0) goto LAB_00104e9d;
    if (cVar12 == '+') goto LAB_00104e9d;
    lVar20 = (long)local_48 - (long)puVar14;
  }
  if (*(char *)((long)puVar14 + lVar20) != 'f') {
    uVar9 = quote(puVar14);
    pcVar15 = "invalid format %s, directive must be %%[0][\'][-][N][.][N]f";
    goto LAB_00104e82;
  }
  lVar20 = lVar20 + 1;
  pcVar15 = (char *)((long)puVar14 + lVar20);
  cVar12 = *pcVar15;
  if (cVar12 == '\0') {
    if (unaff_R15 != (undefined1 *)0x1) {
LAB_00104d0f:
      format_str_prefix = (undefined *)ximemdup0(puVar14);
      if (*pcVar15 != '\0') goto LAB_001048bd;
    }
    if (dev_debug != '\0') {
      puVar16 = format_str_suffix;
      if (format_str_suffix == (undefined *)0x0) {
        puVar16 = &_LC15;
      }
LAB_001048dc:
      uVar9 = quote_n(2,puVar16);
      puVar16 = format_str_prefix;
      if (format_str_prefix == (undefined *)0x0) {
        puVar16 = &_LC15;
      }
      puVar18 = &_LC108;
      uVar5 = quote_n(1,puVar16);
      puVar19 = padding_width;
      if (grouping != 0) {
        puVar18 = &_LC107;
      }
      uVar6 = quote_n(0,puVar14);
      __fprintf_chk(_stderr,2,
                    "format String:\n  input: %s\n  grouping: %s\n  padding width: %jd\n  prefix: %s\n  suffix: %s\n"
                    ,uVar6,puVar18,puVar19,uVar5,uVar9);
    }
  }
  else {
    do {
      lVar11 = 1;
      if (cVar12 == '%') {
        if (*(char *)((long)puVar14 + lVar20 + 1) != '%') {
          uVar9 = quote(puVar14);
          pcVar15 = "format %s has too many %% directives";
          goto LAB_00104e82;
        }
        lVar11 = 2;
      }
      lVar20 = lVar20 + lVar11;
      cVar12 = *(char *)((long)puVar14 + lVar20);
    } while (cVar12 != '\0');
    if (unaff_R15 != (undefined1 *)0x1) goto LAB_00104d0f;
LAB_001048bd:
    puVar16 = (undefined *)xstrdup(pcVar15);
    format_str_suffix = puVar16;
    if (dev_debug != '\0') goto LAB_001048dc;
  }
LAB_00104960:
  if (grouping != 0) {
    pcVar15 = "grouping cannot be combined with --to";
    if (scale_to != 0) goto LAB_00104f61;
LAB_00104a59:
    if ((debug != '\0') && (pcVar15 = (char *)rpl_nl_langinfo(0x10001), *pcVar15 == '\0')) {
      uVar9 = dcgettext(0,"grouping has no effect in this locale",5);
      error(0,0,uVar9);
    }
  }
  if (padding_width == (undefined1 *)0x0) {
    auto_padding = (uint)(delimiter == 0x80);
  }
  else {
LAB_00104a39:
    auto_padding = 0;
  }
  if (inval_style != 0) {
    conv_exit_code = 0;
  }
  if (_optind < param_1) {
    if ((debug == '\0') || (header == 0)) {
LAB_001049cb:
      uVar13 = 1;
      do {
        uVar3 = process_line(param_2[_optind],1);
        uVar13 = uVar13 & uVar3;
        _optind = _optind + 1;
      } while (_optind < param_1);
LAB_001049f6:
      if (debug == '\0') goto LAB_00104ce9;
      if (uVar13 != 0) goto LAB_00104a0b;
      uVar9 = dcgettext(0,"failed to convert some of the input numbers",5);
      error(0,0,uVar9);
      goto LAB_00104cf1;
    }
    uVar9 = dcgettext(0,"--header ignored with command-line input",5);
    error(0,0,uVar9);
    if (_optind < param_1) goto LAB_001049cb;
  }
  else {
    local_50 = (char *)0x0;
    local_48 = (char *)0x0;
    while ((bVar21 = header != 0, header = header + -1, bVar21 &&
           (_Var7 = getdelim(&local_50,(size_t *)&local_48,(uint)line_delim,_stdin), 0 < _Var7))) {
      fputs_unlocked(local_50,_stdout);
    }
    uVar13 = 1;
    while (_Var7 = getdelim(&local_50,(size_t *)&local_48,(uint)line_delim,_stdin), 0 < _Var7) {
      bVar21 = (int)local_50[_Var7 + -1] == (uint)line_delim;
      if (bVar21) {
        local_50[_Var7 + -1] = '\0';
      }
      uVar3 = process_line(local_50,bVar21);
      uVar13 = uVar13 & uVar3;
    }
    if ((_stdin->_flags & 0x20) == 0) goto LAB_001049f6;
    uVar9 = dcgettext(0,"error reading input",5);
    piVar8 = __errno_location();
    error(1,*piVar8,uVar9);
LAB_00104ce9:
    if (uVar13 == 0) {
LAB_00104cf1:
      cVar12 = (1 < inval_style - 2U) * '\x02';
      goto LAB_00104a0d;
    }
  }
LAB_00104a0b:
  cVar12 = '\0';
LAB_00104a0d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// This is taking way too long.