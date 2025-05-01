
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

simple_strtod_error
simple_strtod_int(char *input_str,char **endptr,longdouble *value,_Bool *negative)

{
  char cVar1;
  simple_strtod_error sVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longdouble lVar6;
  
  bVar5 = *input_str == '-';
  if (bVar5) {
    input_str = input_str + 1;
  }
  *negative = bVar5;
  *endptr = input_str;
  iVar3 = (int)*input_str;
  if (iVar3 - 0x30U < 10) {
    lVar6 = (longdouble)0;
    iVar4 = 0;
    sVar2 = SSE_OK;
    do {
      input_str = input_str + 1;
      cVar1 = (char)iVar3 + -0x30;
      if (((longdouble)0 == lVar6) && (cVar1 == '\0')) {
        if (0x12 < iVar4) {
          sVar2 = SSE_OK_PRECISION_LOSS;
        }
      }
      else {
        iVar4 = iVar4 + 1;
        if (0x12 < iVar4) {
          if (iVar4 == 0x22) {
            return SSE_OVERFLOW;
          }
          sVar2 = SSE_OK_PRECISION_LOSS;
        }
      }
      *endptr = input_str;
      iVar3 = (int)*input_str;
      lVar6 = (longdouble)(short)cVar1 + lVar6 * (longdouble)__LC1;
    } while (iVar3 - 0x30U < 10);
  }
  else {
    iVar3 = strncmp(input_str,decimal_point,(long)decimal_point_length);
    if (iVar3 != 0) {
      return SSE_INVALID_NUMBER;
    }
    lVar6 = (longdouble)0;
    sVar2 = SSE_OK;
  }
  if (bVar5) {
    *value = -lVar6;
  }
  else {
    *value = lVar6;
  }
  return sVar2;
}



/* WARNING: Unknown calling convention */

uintmax_t unit_to_umax(char *n_string)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  char *end;
  uintmax_t n;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(n_string);
  end = (char *)0x0;
  if ((sVar2 == 0) || ((int)n_string[sVar2 - 1] - 0x30U < 10)) {
    pcVar7 = "KkMGTPEZYRQ";
    pcVar4 = n_string;
    pcVar8 = (char *)0x0;
  }
  else {
    lVar3 = xmalloc(sVar2 + 2);
    pcVar9 = (char *)((sVar2 - 1) + lVar3);
    end = pcVar9;
    pcVar4 = (char *)__memcpy_chk(lVar3,n_string,sVar2,sVar2 + 2);
    pcVar8 = pcVar4;
    if ((*pcVar9 == 'i') && ((sVar2 != 1 && (9 < (int)pcVar9[-1] - 0x30U)))) {
      *pcVar9 = '\0';
      pcVar7 = "KkMGTPEZYRQ";
    }
    else {
      pcVar9 = pcVar4 + sVar2;
      pcVar7 = "0KkMGTPEZYRQ";
      end = pcVar9 + 1;
      pcVar9[0] = 'B';
      pcVar9[1] = '\0';
    }
  }
  iVar1 = xstrtoumax(pcVar4,&end,10,&n,pcVar7);
  if (((iVar1 == 0) && (*end == '\0')) && (n != 0)) {
    free(pcVar8);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return n;
    }
  }
  else {
    free(pcVar8);
    uVar5 = quote(n_string);
    uVar6 = dcgettext(0,"invalid unit size: %s",5);
    error(1,0,uVar6,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool process_field(char *text,uintmax_t field)

{
  byte bVar1;
  byte bVar2;
  idx_t iVar3;
  undefined4 uVar4;
  unkbyte10 Var5;
  uint uVar6;
  _Bool _Var7;
  undefined1 uVar8;
  int iVar9;
  simple_strtod_error sVar10;
  int iVar11;
  uint uVar12;
  simple_strtod_error sVar13;
  ulong *puVar14;
  size_t sVar15;
  size_t sVar16;
  ushort **ppuVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  char *pcVar24;
  char *pcVar25;
  ulong extraout_RDX;
  ulong uVar26;
  scale_type *psVar27;
  char **ppcVar28;
  char cVar29;
  ulong uVar30;
  undefined *puVar31;
  char *pcVar32;
  scale_type sVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  bool bVar35;
  ushort in_FPUControlWord;
  longdouble lVar36;
  longdouble lVar37;
  longdouble lVar38;
  longdouble lVar39;
  char *pcStack_108;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  scale_type local_f8;
  undefined4 uStack_f4;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined1 local_e8 [24];
  char *local_d0;
  longdouble lStack_c8;
  ulong local_b8;
  uint uStack_b0;
  ushort local_ac;
  ushort local_aa;
  _Bool negative;
  _Bool neg_frac;
  char *ptr;
  char *ptr2;
  longdouble val;
  undefined6 uStack_7e;
  longdouble val_frac;
  char fmt [26];
  
  pcVar32 = suffix;
  cVar29 = dev_debug;
  psVar27 = &local_f8;
  ppcVar28 = (char **)&local_f8;
  puVar14 = _frp;
  if (_frp == (ulong *)0x0) {
    if (field == 1) {
LAB_0010032e:
      if (suffix != (char *)0x0) {
        uStack_100 = 0x349;
        uStack_fe = 0x10;
        sVar15 = strlen(text);
        uStack_100 = 0x354;
        uStack_fe = 0x10;
        sVar16 = strlen(pcVar32);
        if (sVar16 < sVar15) {
          uStack_100 = 0x36a;
          uStack_fe = 0x10;
          iVar9 = strcmp(pcVar32,text + (sVar15 - sVar16));
          if (iVar9 == 0) {
            text[sVar15 - sVar16] = '\0';
            if ((bool)cVar29) {
              uStack_100 = 0x15b3;
              uStack_fe = 0x10;
              quote(pcVar32);
              uStack_100 = 0x15d0;
              uStack_fe = 0x10;
              __fprintf_chk(_stderr,2,"trimming suffix %s\n");
              cVar29 = dev_debug;
            }
          }
          else if ((bool)cVar29) {
            uStack_100 = 0x133f;
            uStack_fe = 0x10;
            fwrite("no valid suffix found\n",1,0x16,_stderr);
            cVar29 = dev_debug;
          }
        }
      }
      bVar1 = *text;
      pcVar32 = text;
      if (bVar1 != 0) {
        uStack_100 = 0x392;
        uStack_fe = 0x10;
        ppuVar17 = __ctype_b_loc();
        do {
          if (((*ppuVar17)[bVar1] & 1) == 0) break;
          bVar1 = pcVar32[1];
          pcVar32 = pcVar32 + 1;
        } while (bVar1 != 0);
      }
      if (auto_padding == 0) {
LAB_00100598:
        local_f8 = scale_from;
        ptr = (char *)0x0;
        val._0_8_ = SUB108((longdouble)0,0);
        val._8_2_ = (undefined2)((unkuint10)(longdouble)0 >> 0x40);
        iVar9 = (-(uint)(scale_from - scale_IEC < 2) & 0x18) + 1000;
        if (cVar29 != '\0') {
          uStack_100 = 0x5de;
          uStack_fe = 0x10;
          uVar18 = quote_n(1,decimal_point);
          uStack_100 = 0x5eb;
          uStack_fe = 0x10;
          uVar19 = quote_n(0,pcVar32);
          uStack_100 = 0x611;
          uStack_fe = 0x10;
          __fprintf_chk(_stderr,2,
                        "simple_strtod_human:\n  input string: %s\n  locale decimal-point: %s\n  MAX_UNSCALED_DIGITS: %d\n"
                        ,uVar19,uVar18,0x12);
        }
      }
      else {
        if ((text < pcVar32) || (sVar15 = 0, 1 < (long)field)) {
          uStack_100 = 0x7f8;
          uStack_fe = 0x10;
          sVar15 = strlen(text);
        }
        padding_width = sVar15;
        if (cVar29 != '\0') {
          uStack_100 = 0x591;
          uStack_fe = 0x10;
          __fprintf_chk(_stderr,2,"setting Auto-Padding to %jd characters\n");
          cVar29 = dev_debug;
          goto LAB_00100598;
        }
        val._0_8_ = SUB108((longdouble)0,0);
        val._8_2_ = (undefined2)((unkuint10)(longdouble)0 >> 0x40);
        local_f8 = scale_from;
        iVar9 = (-(uint)(scale_from - scale_IEC < 2) & 0x18) + 1000;
      }
      uStack_100 = 0x422;
      uStack_fe = 0x10;
      sVar10 = simple_strtod_int(pcVar32,&ptr,&val,&negative);
      pbVar21 = (byte *)ptr;
      sVar13 = sVar10;
      if (sVar10 < SSE_OVERFLOW) {
        sVar15 = (size_t)decimal_point_length;
        uStack_100 = 1099;
        uStack_fe = 0x10;
        iVar11 = strncmp(ptr,decimal_point,sVar15);
        local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
        if (iVar11 == 0) {
          val_frac = (longdouble)0;
          pcVar24 = (char *)pbVar21 + sVar15;
          uStack_100 = 0x76d;
          uStack_fe = 0x10;
          ptr = pcVar24;
          sVar13 = simple_strtod_int(pcVar24,&ptr2,&val_frac,&neg_frac);
          if (SSE_OK_PRECISION_LOSS < sVar13) goto LAB_001012f0;
          if (sVar13 == SSE_OK_PRECISION_LOSS) {
            sVar10 = SSE_OK_PRECISION_LOSS;
          }
          if (neg_frac != false) goto switchD_00101309_caseD_3;
          ptr = ptr2;
          local_e8._0_8_ = (long)ptr2 - (long)pcVar24;
          lVar39 = val_frac;
          if ((int)ptr2 != (int)pcVar24) {
            iVar11 = (int)((long)ptr2 - (long)pcVar24) + -1;
            if (iVar11 == 0) {
              lVar39 = val_frac / (longdouble)__LC1;
            }
            else {
              lVar39 = (longdouble)__LC1;
              do {
                lVar39 = lVar39 * (longdouble)__LC1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
              lVar39 = val_frac / lVar39;
            }
          }
          if (negative == false) {
            lVar39 = (longdouble)CONCAT28(val._8_2_,val._0_8_) + lVar39;
          }
          else {
            lVar39 = (longdouble)CONCAT28(val._8_2_,val._0_8_) - lVar39;
          }
          val._0_8_ = SUB108(lVar39,0);
          val._8_2_ = (undefined2)((unkuint10)lVar39 >> 0x40);
          pbVar21 = (byte *)ptr2;
        }
        if (dev_debug != false) {
          uStack_100 = val._8_2_;
          uStack_fe = uStack_7e;
          pcStack_108 = val._0_8_;
          __fprintf_chk(_stderr,2,"  parsed numeric value: %Lf\n  input precision = %d\n");
        }
        bVar1 = *pbVar21;
        if (bVar1 == 0) {
          uVar26 = (ulong)dev_debug;
          sVar33 = scale_none;
          lVar39 = (longdouble)1;
LAB_00100483:
          if ((char)uVar26 == '\0') {
LAB_0010048b:
            lVar39 = (longdouble)CONCAT28(val._8_2_,val._0_8_) * lVar39;
            local_f8 = SUB104(lVar39,0);
            uStack_f4 = (undefined4)((unkuint10)lVar39 >> 0x20);
            uStack_f0 = (undefined2)((unkuint10)lVar39 >> 0x40);
            val._0_8_ = SUB108(lVar39,0);
            val._8_2_ = uStack_f0;
          }
          else {
            pcStack_108 = SUB108(lVar39,0);
            uStack_100 = (undefined2)((unkuint10)lVar39 >> 0x40);
            local_f8 = SUB104(lVar39,0);
            uStack_f4 = (undefined4)((unkuint10)lVar39 >> 0x20);
            uStack_f0 = uStack_100;
            __fprintf_chk(_stderr,2,"  suffix power=%d^%d = %Lf\n",iVar9,sVar33);
            lVar39 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) *
                     (longdouble)CONCAT28(val._8_2_,val._0_8_);
            local_f8 = SUB104(lVar39,0);
            uStack_f4 = (undefined4)((unkuint10)lVar39 >> 0x20);
            uStack_f0 = (undefined2)((unkuint10)lVar39 >> 0x40);
            val._0_8_ = SUB108(lVar39,0);
            uVar26 = CONCAT62(uStack_fe,uStack_100);
            val._8_2_ = uStack_f0;
            if (dev_debug != false) {
              pcStack_108 = val._0_8_;
              uStack_100 = uStack_f0;
              __fprintf_chk(_stderr,2,"  returning value: %Lf (%LG)\n");
              uVar26 = extraout_RDX;
            }
          }
          if (ptr != (char *)0x0) goto LAB_001004ae;
        }
        else {
          uStack_100 = 0x625;
          uStack_fe = 0x10;
          ppuVar17 = __ctype_b_loc();
          bVar2 = (byte)(*ppuVar17)[bVar1];
          while ((bVar2 & 1) != 0) {
            pbVar21 = pbVar21 + 1;
            bVar1 = *pbVar21;
            bVar2 = (byte)(*ppuVar17)[bVar1];
          }
          uStack_100 = 0x663;
          uStack_fe = 0x10;
          pcVar24 = strchr("KkMGTPEZYRQ",(int)(char)bVar1);
          if (pcVar24 == (char *)0x0) {
            uVar8 = FUN_001015f8();
            return (_Bool)uVar8;
          }
          if (local_f8 == scale_none) {
            uVar8 = FUN_001015f8();
            return (_Bool)uVar8;
          }
          sVar33 = scale_none;
          if ((byte)(bVar1 + 0xbb) < 0x27) {
            sVar33 = (scale_type)(char)CSWTCH_321[(byte)(bVar1 + 0xbb)];
          }
          ptr = (char *)(pbVar21 + 1);
          if (local_f8 != scale_auto) {
            if (local_f8 == scale_IEC_I) {
              if (pbVar21[1] != 0x69) {
                uVar8 = FUN_001015f8();
                return (_Bool)uVar8;
              }
              ptr = (char *)(pbVar21 + 2);
            }
            lVar39 = (longdouble)iVar9;
            uVar12 = (uint)dev_debug;
LAB_001006cb:
            uVar26 = (ulong)uVar12;
            if (sVar33 == scale_none) {
              local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
              lVar39 = (longdouble)1;
            }
            else {
              uVar12 = sVar33 - scale_auto;
              if (uVar12 == 0) {
                local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
                sVar33 = scale_auto;
              }
              else {
LAB_001006e2:
                lVar36 = lVar39;
                uVar6 = uVar12 - 1;
                if ((uVar12 & 1) == 0) goto LAB_001006f8;
                while (uVar12 = uVar6, lVar36 = lVar36 * lVar39, uVar12 != 0) {
LAB_001006f8:
                  lVar36 = lVar36 * lVar39;
                  uVar6 = uVar12 - 2;
                }
                local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
                lVar39 = lVar36;
              }
            }
            goto LAB_00100483;
          }
          uVar12 = (uint)dev_debug;
          uVar26 = (ulong)uVar12;
          if (pbVar21[1] != 0x69) {
            lVar39 = (longdouble)iVar9;
            goto LAB_001006cb;
          }
          ptr = (char *)(pbVar21 + 2);
          if (dev_debug != false) {
            iVar9 = 0x400;
            uStack_100 = 0x1a38;
            uStack_fe = 0x10;
            local_f8 = sVar33;
            __fprintf_chk(_stderr,2,"  Auto-scaling, found \'i\', switching to base %d\n");
            uVar12 = (uint)dev_debug;
            lVar39 = (longdouble)__LC6;
            sVar33 = local_f8;
            goto LAB_001006cb;
          }
          if (sVar33 != scale_none) {
            uVar12 = sVar33 - scale_auto;
            if (uVar12 != 0) {
              lVar39 = (longdouble)__LC6;
              iVar9 = 0x400;
              goto LAB_001006e2;
            }
            lVar39 = (longdouble)__LC6;
            local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
            goto LAB_0010048b;
          }
          uVar26 = 0;
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          local_f8 = (scale_type)val._0_8_;
          uStack_f4 = (undefined4)((ulong)val._0_8_ >> 0x20);
          uStack_f0 = val._8_2_;
LAB_001004ae:
          iVar9 = conv_exit_code;
          if (*ptr != '\0') {
            if (inval_style != inval_ignore) {
              uStack_100 = 0x4d0;
              uStack_fe = 0x10;
              uVar18 = quote_n(1);
              uStack_100 = 0x4dd;
              uStack_fe = 0x10;
              uVar19 = quote_n(0,pcVar32);
              uStack_100 = 0x4f3;
              uStack_fe = 0x10;
              uVar20 = dcgettext(0,"invalid suffix in input %s: %s",5);
              uStack_100 = 0x507;
              uStack_fe = 0x10;
              error(iVar9,0,uVar20,uVar19,uVar18);
            }
            sVar10 = SSE_INVALID_SUFFIX;
            goto LAB_00100510;
          }
        }
        if ((sVar10 == SSE_OK_PRECISION_LOSS) && (debug != false)) {
          uStack_100 = 0x81e;
          uStack_fe = 0x10;
          quote(pcVar32,ptr,uVar26);
          uStack_100 = 0x834;
          uStack_fe = 0x10;
          uVar18 = dcgettext(0,"large input value %s: possible precision loss",5);
          uStack_100 = 0x845;
          uStack_fe = 0x10;
          error(0,0,uVar18);
        }
      }
      else {
LAB_001012f0:
        sVar10 = sVar13;
        iVar9 = conv_exit_code;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(sVar10) {
        default:
                    /* WARNING: This code block may not be properly labeled as switch case */
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar8 = FUN_001015f8();
          return (_Bool)uVar8;
        case SSE_OVERFLOW:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          if (inval_style == inval_ignore) {
            local_f8 = (scale_type)val._0_8_;
            uStack_f4 = (undefined4)((ulong)val._0_8_ >> 0x20);
            uStack_f0 = val._8_2_;
          }
          else {
            uStack_100 = 0x1614;
            uStack_fe = 0x10;
            quote(pcVar32);
            uStack_100 = 0x1626;
            uStack_fe = 0x10;
            uVar18 = dcgettext(0,"value too large to be converted: %s",5);
            uStack_100 = 0x1638;
            uStack_fe = 0x10;
            error(iVar9,0,uVar18);
            local_f8 = (scale_type)val._0_8_;
            uStack_f4 = (undefined4)((ulong)val._0_8_ >> 0x20);
            uStack_f0 = val._8_2_;
          }
          break;
        case SSE_INVALID_NUMBER:
switchD_00101309_caseD_3:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar8 = FUN_001015f8();
          return (_Bool)uVar8;
        case SSE_VALID_BUT_FORBIDDEN_SUFFIX:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar8 = FUN_001015f8();
          return (_Bool)uVar8;
        case SSE_INVALID_SUFFIX:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar8 = FUN_001015f8();
          return (_Bool)uVar8;
        case SSE_MISSING_I_SUFFIX:
          local_e8._0_10_ = (unkuint10)(ushort)local_e8._8_2_ << 0x40;
          uVar8 = FUN_001015f8();
          return (_Bool)uVar8;
        }
      }
LAB_00100510:
      iVar9 = conv_exit_code;
      if ((from_unit_size != 1) || (to_unit_size != 1)) {
        local_d0 = (char *)from_unit_size;
        lVar39 = (longdouble)(long)from_unit_size;
        if ((long)from_unit_size < 0) {
          lVar39 = lVar39 + (longdouble)__LC43;
        }
        lVar36 = (longdouble)(long)to_unit_size;
        if ((long)to_unit_size < 0) {
          lVar36 = lVar36 + (longdouble)__LC43;
        }
        lVar36 = ((longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) * lVar39) / lVar36;
        local_f8 = SUB104(lVar36,0);
        uStack_f4 = (undefined4)((unkuint10)lVar36 >> 0x20);
        uStack_f0 = (undefined2)((unkuint10)lVar36 >> 0x40);
      }
      if (sVar10 < SSE_OVERFLOW) {
        uVar26 = user_precision;
        if (user_precision == -1) {
          uVar26 = local_e8._0_8_;
        }
        local_e8._0_8_ = uVar26;
        Var5 = local_e8._0_10_;
        if (((longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) < __LC44) ||
           (__LC45 < (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)))) {
          if ((uVar26 < 0x13) || (scale_to != scale_none)) {
LAB_0010089f:
            local_d0 = fmt;
            local_e8._0_4_ = (undefined4)uVar26;
            uVar4 = local_e8._0_4_;
            local_e8._0_10_ = Var5;
            do {
              sVar33 = scale_to;
              pcVar32 = padding_buffer;
              iVar3 = padding_buffer_size;
              fmt[0] = '%';
              uVar30 = (ulong)round_style;
              if (grouping != 0) {
                fmt[1] = '\'';
                uVar18 = 0x18;
                pcVar24 = fmt + 2;
                if (zero_padding_width != 0) goto LAB_00100d3d;
LAB_0010090a:
                iVar9 = grouping;
                if (dev_debug != false) goto LAB_00100d72;
LAB_0010091a:
                if (sVar33 == scale_none) goto LAB_00100da9;
LAB_00100923:
                if (sVar33 - scale_IEC < 2) {
                  local_b8 = CONCAT44(local_b8._4_4_,0x400);
                  local_e8._0_8_ = _LC16;
                }
                else {
                  local_b8 = CONCAT44(local_b8._4_4_,1000);
                  local_e8._0_8_ = _LC17;
                }
                lVar39 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8));
                if (lVar39 < __LC44) {
                  lVar39 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8));
                  uVar23 = 0;
                  if (dev_debug != false) goto LAB_00100ff8;
LAB_0010099e:
                  if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
                  lVar22 = (long)((int)uVar23 * 3);
LAB_001009b4:
                  if (user_precision <= lVar22) {
                    lVar22 = user_precision;
                  }
                  iVar9 = (int)lVar22;
                  if (iVar9 == 0) {
LAB_001011a2:
                    local_ac = in_FPUControlWord | 0xc00;
                    local_b8 = (ulong)ROUND(lVar39 / __LC51);
                    lVar36 = (longdouble)(long)local_b8 * __LC51;
                    lVar39 = lVar39 - lVar36;
                    local_aa = in_FPUControlWord;
                    switch(uVar30) {
                    case 0:
                      iVar9 = 0;
                      goto LAB_00100a60;
                    case 1:
                      iVar9 = 0;
                      break;
                    case 2:
                      iVar9 = 0;
LAB_00100a40:
                      if ((longdouble)0 <= lVar39) goto LAB_00100a60;
                      break;
                    case 3:
LAB_0010120e:
                      local_b8 = (ulong)ROUND(lVar39);
                      lVar38 = (longdouble)(long)local_b8 + lVar36;
                      goto LAB_00100abb;
                    case 4:
                      iVar9 = 0;
LAB_00100bc8:
                      if (lVar39 < (longdouble)0) {
                        local_b8 = (ulong)ROUND(lVar39 - (longdouble)__LC52);
                        lVar38 = (longdouble)(long)local_b8;
                      }
                      else {
LAB_00100bd4:
                        local_b8 = (ulong)ROUND(lVar39 + (longdouble)__LC52);
                        lVar38 = (longdouble)(long)local_b8;
                      }
                      goto LAB_00100a90;
                    default:
                      uVar8 = FUN_00104126();
                      return (_Bool)uVar8;
                    }
LAB_00100b80:
                    lVar22 = (long)ROUND(-lVar39);
                    local_b8 = -(lVar22 + (ulong)((longdouble)lVar22 < -lVar39));
                    lVar38 = (longdouble)(long)local_b8;
                    goto LAB_00100a90;
                  }
                  iVar11 = iVar9 + -1;
                  if (iVar11 == 0) {
                    lVar37 = (longdouble)__LC1;
LAB_0010106c:
                    local_ac = in_FPUControlWord | 0xc00;
                    local_b8 = (ulong)ROUND((lVar39 * lVar37) / __LC51);
                    lVar36 = (longdouble)(long)local_b8 * __LC51;
                    lVar39 = lVar39 * lVar37 - lVar36;
                    iVar9 = 1;
                    local_aa = in_FPUControlWord;
                    switch(uVar30) {
                    case 0:
                      iVar9 = 1;
                      goto LAB_00100a60;
                    case 1:
                      iVar9 = 1;
                      break;
                    case 2:
                      iVar9 = 1;
                      goto LAB_00100a40;
                    case 3:
                      goto LAB_00100bf5;
                    case 4:
                      iVar9 = 1;
                      goto LAB_00100bc8;
                    default:
                      uVar8 = FUN_00104126();
                      return (_Bool)uVar8;
                    }
                    goto LAB_00100b80;
                  }
                  lVar37 = (longdouble)__LC1;
                  lVar38 = lVar37;
                  do {
                    lVar38 = lVar38 * lVar37;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  local_ac = in_FPUControlWord | 0xc00;
                  local_b8 = (ulong)ROUND((lVar38 * lVar39) / __LC51);
                  lVar36 = (longdouble)(long)local_b8 * __LC51;
                  lVar39 = lVar38 * lVar39 - lVar36;
                  local_aa = in_FPUControlWord;
                  switch(uVar30) {
                  case 0:
                    goto LAB_00100a60;
                  case 1:
                    goto LAB_00100b80;
                  case 2:
                    goto LAB_00100a40;
                  case 3:
LAB_00100bf5:
                    local_b8 = (ulong)ROUND(lVar39);
                    lVar38 = (longdouble)(long)local_b8 + lVar36;
                    break;
                  case 4:
                    goto LAB_00100bc8;
                  default:
                    uVar8 = FUN_00100aa9();
                    return (_Bool)uVar8;
                  }
LAB_00100a9d:
                  iVar9 = iVar9 + -1;
                  lVar39 = lVar37;
                  if (iVar9 == 0) {
                    lVar38 = lVar38 / lVar37;
                  }
                  else {
                    do {
                      lVar39 = lVar39 * lVar37;
                      iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                    lVar38 = lVar38 / lVar39;
                  }
                }
                else {
                  if (lVar39 <= __LC45) {
                    uVar23 = 0;
                    while( true ) {
                      lVar36 = -lVar39;
                      if ((longdouble)0 <= lVar39) {
                        lVar36 = lVar39;
                      }
                      if (lVar36 < (longdouble)(int)local_b8) break;
                      lVar39 = lVar39 / (longdouble)(int)local_b8;
                      uVar23 = (ulong)((int)uVar23 + 1);
                    }
                    if (dev_debug == false) goto LAB_0010099e;
LAB_00100ff8:
                    pcStack_108 = SUB108(lVar39,0);
                    uStack_100 = (undefined2)((unkuint10)lVar39 >> 0x40);
                    local_b8 = CONCAT44(local_b8._4_4_,(int)uVar23);
                    lStack_c8 = lVar39;
                    __fprintf_chk(local_e8._0_8_,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
                    uVar23 = local_b8 & 0xffffffff;
                    lVar39 = lStack_c8;
                    if (user_precision != -1) goto LAB_001009af;
LAB_00101050:
                    lVar36 = -lVar39;
                    if ((longdouble)0 <= lVar39) {
                      lVar36 = lVar39;
                    }
                    lVar37 = (longdouble)__LC1;
                    if (lVar36 < lVar37) goto LAB_0010106c;
                    goto LAB_001011a2;
                  }
                  if (dev_debug != false) {
                    lVar39 = (longdouble)__LC18;
                    uVar23 = 0;
                    goto LAB_00100ff8;
                  }
                  if (user_precision != -1) {
                    lVar39 = (longdouble)__LC18;
                    lVar22 = 0;
                    uVar23 = 0;
                    goto LAB_001009b4;
                  }
                  lVar36 = __LC19;
                  local_aa = in_FPUControlWord;
                  switch(uVar30) {
                  case 0:
                    lVar39 = (longdouble)__LC18;
                    uVar23 = 0;
                    iVar9 = 0;
                    local_ac = in_FPUControlWord | 0xc00;
                    break;
                  case 1:
                    lVar39 = (longdouble)__LC18;
                    uVar23 = 0;
                    iVar9 = 0;
                    local_ac = in_FPUControlWord | 0xc00;
                    goto LAB_00100b80;
                  case 2:
                    iVar9 = 0;
                    uVar23 = 0;
                    lVar39 = (longdouble)__LC18;
                    local_ac = in_FPUControlWord | 0xc00;
                    break;
                  case 3:
                    lVar39 = (longdouble)__LC18;
                    uVar23 = 0;
                    local_ac = in_FPUControlWord | 0xc00;
                    goto LAB_0010120e;
                  case 4:
                    lVar39 = (longdouble)__LC18;
                    iVar9 = 0;
                    uVar23 = 0;
                    local_ac = in_FPUControlWord | 0xc00;
                    goto LAB_00100bd4;
                  default:
                    uVar23 = 0;
                    uVar34 = 0;
                    lVar38 = (longdouble)0;
                    goto LAB_00100b05;
                  }
LAB_00100a60:
                  local_b8 = (ulong)ROUND(lVar39);
                  lVar38 = (longdouble)(long)local_b8;
                  if (lVar38 < lVar39) {
                    local_b8 = local_b8 + 1;
                    lVar38 = (longdouble)(long)local_b8;
                  }
LAB_00100a90:
                  lVar38 = lVar38 + lVar36;
                  if (iVar9 != 0) {
                    lVar37 = (longdouble)__LC1;
                    goto LAB_00100a9d;
                  }
                }
LAB_00100abb:
                lVar39 = (longdouble)(double)local_e8._0_8_;
                if (lVar38 < (longdouble)0) {
                  lVar36 = -lVar38;
                  if (lVar39 <= lVar36) goto LAB_001010d4;
LAB_001010fa:
                  if (lVar36 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
                  uVar34 = 0;
                  uVar12 = 0;
                }
                else {
                  if (lVar39 <= lVar38) {
LAB_001010d4:
                    lVar38 = lVar38 / lVar39;
                    uVar23 = (ulong)((int)uVar23 + 1);
                    lVar39 = (longdouble)0;
                    if (!NAN(lVar38) && !NAN(lVar39)) {
                      if (lVar38 == lVar39) goto LAB_00101112;
                      if (lVar38 <= lVar39) {
                        lVar36 = -lVar38;
                        goto LAB_001010fa;
                      }
                    }
                  }
                  else if (lVar38 == (longdouble)0) goto LAB_00101112;
                  if ((longdouble)__LC1 <= lVar38) goto LAB_00101112;
LAB_00100af3:
                  bVar35 = (int)uVar23 != 0;
                  uVar34 = (ulong)bVar35;
                  uVar12 = (uint)bVar35;
                }
                in_FPUControlWord = local_aa;
                if (dev_debug != false) {
                  pcStack_108 = SUB108(lVar38,0);
                  uStack_100 = (undefined2)((unkuint10)lVar38 >> 0x40);
                  local_b8 = CONCAT44(local_b8._4_4_,(int)uVar23);
                  lStack_c8 = lVar38;
                  uStack_b0 = uVar12;
                  __fprintf_chk(local_e8._0_8_,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n"
                               );
                  uVar23 = local_b8 & 0xffffffff;
                  uVar34 = (ulong)uStack_b0;
                  in_FPUControlWord = local_aa;
                  lVar38 = lStack_c8;
                }
LAB_00100b05:
                puVar31 = &DAT_001025c3;
                builtin_strncpy(pcVar24,".*Lf%s%s",8);
                if (user_precision != -1) {
                  uVar34 = user_precision & 0xffffffff;
                }
                builtin_strncpy(pcVar24 + 7,"s%s",4);
                pcVar24 = suffix;
                if (suffix == (char *)0x0) {
                  pcVar24 = "";
                }
                uVar12 = (uint)uVar23;
                if (sVar33 != scale_IEC_I) {
                  if (uVar12 == 1) {
                    uVar8 = FUN_00100c18();
                    return (_Bool)uVar8;
                  }
LAB_00100b51:
                  if (10 < uVar12) {
                    uVar8 = FUN_00100c18(user_precision,puVar31);
                    return (_Bool)uVar8;
                  }
                  uVar8 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar23]))();
                  return (_Bool)uVar8;
                }
                if (uVar12 != 0) {
                  puVar31 = &_LC20;
                  goto LAB_00100b51;
                }
                pcStack_108 = pcVar24;
                iVar9 = __snprintf_chk(pcVar32,iVar3,2,0xffffffffffffffff,local_d0,uVar34,
                                       SUB108(lVar38,0),(short)((unkuint10)lVar38 >> 0x40),&_LC15,
                                       0x25c3);
                goto LAB_00100c48;
              }
              uVar18 = 0x19;
              pcVar24 = fmt + 1;
              if (zero_padding_width == 0) goto LAB_0010090a;
LAB_00100d3d:
              local_e8._0_4_ = grouping;
              uStack_100 = 0xd58;
              uStack_fe = 0x10;
              iVar9 = __sprintf_chk(pcVar24,2,uVar18);
              pcVar24 = pcVar24 + iVar9;
              iVar9 = local_e8._0_4_;
              if (dev_debug == false) goto LAB_0010091a;
LAB_00100d72:
              local_e8._0_4_ = iVar9;
              uStack_100 = 0xd94;
              uStack_fe = 0x10;
              fwrite("double_to_human:\n",1,0x11,_stderr);
              iVar9 = local_e8._0_4_;
              if (sVar33 != scale_none) goto LAB_00100923;
LAB_00100da9:
              if (uVar4 == 0) {
                lVar39 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8));
                local_e8._0_8_ = (undefined8)ROUND(lVar39 / __LC51);
                lVar36 = (longdouble)(long)local_e8._0_8_ * __LC51;
                lVar39 = lVar39 - lVar36;
                switch(uVar30) {
                case 0:
                  goto switchD_001012e1_caseD_0;
                case 1:
                  goto switchD_001012e1_caseD_1;
                case 2:
                  goto LAB_00100e38;
                case 3:
                  local_e8._0_8_ = (long)ROUND(lVar39);
                  lVar37 = (longdouble)(long)ROUND(lVar39) + lVar36;
                  break;
                case 4:
                  goto LAB_00100fa0;
                default:
                  lVar37 = (longdouble)0;
                }
                goto LAB_00100eab;
              }
              iVar11 = uVar4 + -1;
              lVar37 = (longdouble)__LC1;
              lVar39 = lVar37;
              if (iVar11 == 0) {
                lVar37 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) * lVar37;
                local_ac = in_FPUControlWord | 0xc00;
                local_e8._0_8_ = (undefined8)ROUND(lVar37 / __LC51);
                lVar36 = (longdouble)(long)local_e8._0_8_ * __LC51;
                lVar39 = lVar37 - lVar36;
                switch(uVar30) {
                case 0:
                  break;
                case 1:
                  goto switchD_001012e1_caseD_1;
                case 2:
                  goto LAB_00100e38;
                case 3:
                  local_e8._0_8_ = (long)ROUND(lVar39);
                  uVar8 = FUN_00100e8f();
                  return (_Bool)uVar8;
                case 4:
                  goto LAB_00100fa0;
                default:
                  uVar8 = FUN_0010186b();
                  return (_Bool)uVar8;
                }
                goto switchD_001012e1_caseD_0;
              }
              do {
                lVar39 = lVar39 * lVar37;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
              lVar39 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8)) * lVar39;
              local_ac = in_FPUControlWord | 0xc00;
              local_e8._0_8_ = (undefined8)ROUND(lVar39 / __LC51);
              lVar36 = (longdouble)(long)local_e8._0_8_ * __LC51;
              lVar39 = lVar39 - lVar36;
              switch(uVar30) {
              case 0:
                goto switchD_001012e1_caseD_0;
              case 1:
switchD_001012e1_caseD_1:
                lVar22 = (long)ROUND(-lVar39);
                local_e8._0_8_ = -(lVar22 + (ulong)((longdouble)lVar22 < -lVar39));
                lVar37 = (longdouble)(long)local_e8._0_8_;
                break;
              case 2:
LAB_00100e38:
                if (lVar39 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
                lVar22 = (long)ROUND(lVar39);
                local_e8._0_8_ = lVar22;
                lVar37 = (longdouble)lVar22;
                if (lVar37 < lVar39) {
                  local_e8._0_8_ = lVar22 + 1;
                  lVar37 = (longdouble)(lVar22 + 1);
                }
                break;
              case 3:
                local_e8._0_8_ = (long)ROUND(lVar39);
                lVar37 = (longdouble)(long)ROUND(lVar39) + lVar36;
                goto code_r0x00100e8f;
              case 4:
LAB_00100fa0:
                if (lVar39 < (longdouble)0) {
                  local_e8._0_8_ = (long)ROUND(lVar39 - (longdouble)__LC52);
                  lVar37 = (longdouble)(long)ROUND(lVar39 - (longdouble)__LC52);
                }
                else {
                  local_e8._0_8_ = (long)ROUND(lVar39 + (longdouble)__LC52);
                  lVar37 = (longdouble)(long)ROUND(lVar39 + (longdouble)__LC52);
                }
                break;
              default:
                uVar8 = FUN_00100e8f();
                return (_Bool)uVar8;
              }
              lVar37 = lVar37 + lVar36;
              if (uVar4 != 0) {
code_r0x00100e8f:
                lVar36 = (longdouble)__LC1;
                iVar11 = uVar4 + -1;
                lVar39 = lVar36;
                if (iVar11 == 0) {
                  lVar37 = lVar37 / lVar36;
                }
                else {
                  do {
                    lVar39 = lVar39 * lVar36;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  lVar37 = lVar37 / lVar39;
                }
              }
LAB_00100eab:
              local_ac = in_FPUControlWord | 0xc00;
              if (dev_debug != false) {
                pcVar25 = "  no scaling, returning value: %.*Lf\n";
                if (iVar9 != 0) {
                  pcVar25 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
                }
                pcStack_108 = SUB108(lVar37,0);
                uStack_100 = (undefined2)((unkuint10)lVar37 >> 0x40);
                local_e8._0_10_ = lVar37;
                __fprintf_chk(_stderr,2,pcVar25,uVar26 & 0xffffffff);
                uVar30 = CONCAT62(uStack_fe,uStack_100);
                lVar37 = (longdouble)local_e8._0_10_;
              }
              builtin_strncpy(pcVar24,".*Lf%s",7);
              pcStack_108 = suffix;
              if (suffix == (char *)0x0) {
                pcStack_108 = "";
              }
              iVar9 = __snprintf_chk(pcVar32,iVar3,2,0xffffffffffffffff,local_d0,uVar26 & 0xffffffff
                                     ,SUB108(lVar37,0),(short)((unkuint10)lVar37 >> 0x40));
LAB_00100c48:
              if ((iVar9 < 0) ||
                 (lVar22 = (long)iVar9 - (padding_buffer_size + -1),
                 SBORROW8((long)iVar9,padding_buffer_size + -1))) {
                uStack_100 = 0x1a91;
                uStack_fe = 0x10;
                uVar18 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
                uStack_100 = uStack_f0;
                uStack_fe = uStack_ee;
                pcStack_108 = (char *)CONCAT44(uStack_f4,local_f8);
                ppcVar28 = &pcStack_108;
                error(1,0,uVar18);
                goto LAB_00101726;
              }
              if (lVar22 < 1) goto LAB_001014cb;
              uStack_100 = 0xc90;
              uStack_fe = 0x10;
              padding_buffer =
                   (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar22,0xffffffffffffffff,1);
            } while( true );
          }
          if (inval_style != inval_ignore) {
LAB_00101574:
            uStack_100 = 0x1587;
            uStack_fe = 0x10;
            uVar18 = dcgettext(0,
                               "value/precision too large to be printed: \'%Lg/%zu\' (consider using --to)"
                               ,5);
            uStack_100 = uStack_f0;
            pcStack_108 = (char *)CONCAT44(uStack_f4,local_f8);
            error(iVar9,0,uVar18,local_e8._0_8_);
          }
        }
        else {
          lVar39 = (longdouble)CONCAT28(uStack_f0,CONCAT44(uStack_f4,local_f8));
          iVar11 = 0;
          while( true ) {
            lVar36 = -lVar39;
            if ((longdouble)0 <= lVar39) {
              lVar36 = lVar39;
            }
            if (lVar36 < (longdouble)__LC1) break;
            lVar39 = lVar39 / (longdouble)__LC1;
            iVar11 = iVar11 + 1;
          }
          if ((scale_to == scale_none) && (0x12 < (long)iVar11 + uVar26)) {
            if (inval_style != inval_ignore) {
              pcVar32 = "value too large to be printed: \'%Lg\' (consider using --to)";
              if (uVar26 != 0) goto LAB_00101574;
LAB_001013d7:
              uStack_100 = 0x13de;
              uStack_fe = 0x10;
              uVar18 = dcgettext(0,pcVar32,5);
              uStack_100 = uStack_f0;
              pcStack_108 = (char *)CONCAT44(uStack_f4,local_f8);
              error(iVar9,0,uVar18);
            }
          }
          else {
            if (iVar11 < 0x21) goto LAB_0010089f;
            if (inval_style != inval_ignore) {
              pcVar32 = "value too large to be printed: \'%Lg\' (cannot handle values > 999Q)";
              goto LAB_001013d7;
            }
          }
        }
      }
      uStack_100 = 0x570;
      uStack_fe = 0x10;
      fputs_unlocked(text,_stdout);
      _Var7 = false;
      psVar27 = &local_f8;
      goto LAB_001002fc;
    }
  }
  else {
    for (; *puVar14 != 0xffffffffffffffff; puVar14 = puVar14 + 2) {
      if ((*puVar14 <= field) && (field <= puVar14[1])) goto LAB_0010032e;
    }
  }
  uStack_100 = 0x2f7;
  uStack_fe = 0x10;
  fputs_unlocked(text,_stdout);
  goto LAB_001002f7;
LAB_001014cb:
  if (dev_debug != false) {
    uStack_100 = 0x1786;
    uStack_fe = 0x10;
    uVar18 = quote(padding_buffer);
    uStack_100 = uStack_f0;
    pcStack_108 = (char *)CONCAT44(uStack_f4,local_f8);
    __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar18);
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
    ppcVar28 = (char **)&local_f8;
  }
  else {
    uStack_100 = 0x16a8;
    uStack_fe = 0x10;
    iVar9 = gnu_mbswidth(padding_buffer,3);
    if (iVar9 < 0) goto joined_r0x001019e5;
    if (-1 < padding_width) {
      if (iVar9 < padding_width) {
        uVar26 = padding_width - iVar9;
        uVar30 = uVar26;
        if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
LAB_00101700:
        do {
          pcVar32 = _stdout->_IO_write_ptr;
          if (pcVar32 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar32 + 1;
            *pcVar32 = ' ';
          }
          else {
            uStack_100 = 0x185a;
            uStack_fe = 0x10;
            __overflow(_stdout,0x20);
          }
          uVar26 = uVar26 - 1;
          ppcVar28 = (char **)&local_f8;
        } while (uVar26 != 0);
        goto LAB_00101726;
      }
      goto joined_r0x001019e5;
    }
    if (-iVar9 <= padding_width) goto joined_r0x001019e5;
    uVar26 = padding_width + iVar9;
    if (format_str_prefix != (char *)0x0) {
LAB_001016e0:
      uStack_100 = 0x16ec;
      uStack_fe = 0x10;
      fputs_unlocked(format_str_prefix,_stdout);
    }
    uVar30 = uVar26;
    if (0 < (long)uVar26) goto LAB_00101700;
LAB_00101726:
    *(undefined8 *)((long)ppcVar28 + -8) = 0x101739;
    fputs_unlocked(padding_buffer,_stdout);
    if ((long)uVar30 < 0) {
      do {
        pcVar32 = _stdout->_IO_write_ptr;
        if (pcVar32 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar32 + 1;
          *pcVar32 = ' ';
        }
        else {
          *(undefined8 *)((long)ppcVar28 + -8) = 0x101778;
          __overflow(_stdout,0x20);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != 0);
    }
  }
  psVar27 = (scale_type *)ppcVar28;
  if (format_str_suffix != (char *)0x0) {
    *(undefined8 *)((long)ppcVar28 + -8) = 0x101534;
    fputs_unlocked(format_str_suffix,_stdout);
  }
LAB_001002f7:
  _Var7 = true;
LAB_001002fc:
  if (*(long *)((long)psVar27 + 0xb8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)psVar27 + -8) = switchD_00101309::caseD_0;
    __stack_chk_fail();
  }
  return _Var7;
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
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  ulong unaff_RBX;
  int unaff_EBP;
  undefined *puVar11;
  idx_t unaff_R12;
  scale_type unaff_R13D;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar12;
  longdouble in_ST0;
  longdouble lVar13;
  longdouble lVar14;
  longdouble lVar15;
  longdouble in_ST2;
  char *unaff_retaddr;
  int iStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000090;
  char *pcStack_10;
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
    pcStack_10 = SUB108(lVar13,0);
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
  pcVar8 = suffix;
  if (suffix == (char *)0x0) {
    pcVar8 = "";
  }
  uVar6 = (uint)param_4;
  if (unaff_R13D == scale_IEC_I) {
    if (uVar6 == 0) {
      pcStack_10 = pcVar8;
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
          register0x00000020 = (BADSPACEBASE *)&pcStack_10;
          pcStack_10 = unaff_retaddr;
          error(1,0,uVar5);
          goto LAB_00101726;
        }
        if (lVar9 < 1) {
          if (dev_debug != false) {
            uStack_8 = 0x1786;
            uStack_6 = 0x10;
            uVar5 = quote(padding_buffer);
            uStack_8 = (undefined2)param_7;
            pcStack_10 = unaff_retaddr;
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
                    pcVar8 = _stdout->_IO_write_ptr;
                    if (pcVar8 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar8 + 1;
                      *pcVar8 = ' ';
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
                    pcVar8 = _stdout->_IO_write_ptr;
                    if (pcVar8 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar8 + 1;
                      *pcVar8 = ' ';
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
        if (dev_debug != false) {
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
        if (unaff_R13D != scale_none) goto LAB_00100923;
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
        pcStack_10 = SUB108(lVar15,0);
        pcVar8 = pcStack_10;
        if (dev_debug != false) {
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
        pcStack_10 = suffix;
        if (suffix == (char *)0x0) {
          pcStack_10 = "";
        }
        iVar3 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,unaff_EBP,pcVar8,
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
  if (unaff_R13D - scale_IEC < 2) {
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
    if (dev_debug != false) {
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
  if (dev_debug == false) {
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
    pcStack_10 = SUB108(lVar13,0);
    uStack_8 = (undefined2)((unkuint10)lVar13 >> 0x40);
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,(int)param_4);
    __fprintf_chk(uVar5,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
    param_4 = _iStack0000000000000040 & 0xffffffff;
    if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
    uVar4 = (ulong)((int)param_4 * 3);
LAB_001009b4:
    if (user_precision <= (long)uVar4) {
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
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  ulong unaff_RBX;
  ulong uVar10;
  int unaff_EBP;
  undefined *puVar11;
  idx_t unaff_R12;
  scale_type unaff_R13D;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar12;
  longdouble lVar13;
  longdouble in_ST0;
  longdouble lVar14;
  longdouble in_ST1;
  longdouble lVar15;
  char *unaff_retaddr;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  char *pcStack_10;
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
      uVar10 = 0;
      uVar6 = 0;
      goto joined_r0x00100aff;
    }
  }
  bVar12 = (int)param_4 != 0;
  uVar10 = (ulong)bVar12;
  uVar6 = (uint)bVar12;
joined_r0x00100aff:
  if (param_2 != '\0') {
    pcStack_10 = SUB108(in_ST1,0);
    uStack_8 = (undefined2)((unkuint10)in_ST1 >> 0x40);
    __fprintf_chk(param_8._0_8_,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
    param_4 = param_4 & 0xffffffff;
    uVar10 = (ulong)uVar6;
    param_1 = user_precision;
  }
LAB_00100b05:
  puVar11 = &DAT_001025c3;
  *unaff_R15 = 0x73257325664c2a2e;
  if (param_1 != 0xffffffffffffffff) {
    uVar10 = param_1 & 0xffffffff;
  }
  *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
  pcVar7 = suffix;
  if (suffix == (char *)0x0) {
    pcVar7 = "";
  }
  uVar6 = (uint)param_4;
  if (unaff_R13D == scale_IEC_I) {
    if (uVar6 == 0) {
      pcStack_10 = pcVar7;
      iVar4 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,uVar10,
                             SUB108(in_ST1,0),(short)((unkuint10)in_ST1 >> 0x40),&_LC15,0x25c3);
      do {
        if ((iVar4 < 0) ||
           (lVar8 = (long)iVar4 - (padding_buffer_size + -1),
           SBORROW8((long)iVar4,padding_buffer_size + -1))) {
          uStack_8 = 0x1a91;
          uStack_6 = 0x10;
          uVar5 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
          uStack_8 = (undefined2)param_7;
          uStack_6 = param_7._2_6_;
          register0x00000020 = (BADSPACEBASE *)&pcStack_10;
          pcStack_10 = unaff_retaddr;
          error(1,0,uVar5);
          goto LAB_00101726;
        }
        if (lVar8 < 1) {
          if (dev_debug != false) {
            uStack_8 = 0x1786;
            uStack_6 = 0x10;
            uVar5 = quote(padding_buffer);
            uStack_8 = (undefined2)param_7;
            pcStack_10 = unaff_retaddr;
            __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar5);
          }
          if (padding_width != 0) {
            uStack_8 = 0x16a8;
            uStack_6 = 0x10;
            iVar4 = gnu_mbswidth(padding_buffer,3);
            if (-1 < iVar4) {
              if (padding_width < 0) {
                if (padding_width < -iVar4) {
                  uVar10 = padding_width + iVar4;
                  if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
                  goto LAB_001016ec;
                }
              }
              else if (iVar4 < padding_width) {
                uVar10 = padding_width - iVar4;
                unaff_RBX = uVar10;
                if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
                uStack_8 = 0x16ec;
                uStack_6 = 0x10;
                fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
                unaff_RBX = uVar10;
                if (0 < (long)uVar10) {
LAB_00101700:
                  do {
                    pcVar7 = _stdout->_IO_write_ptr;
                    if (pcVar7 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar7 + 1;
                      *pcVar7 = ' ';
                    }
                    else {
                      uStack_8 = 0x185a;
                      uStack_6 = 0x10;
                      __overflow(_stdout,0x20);
                    }
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
LAB_00101726:
                *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
                fputs_unlocked(padding_buffer,_stdout);
                if ((long)unaff_RBX < 0) {
                  do {
                    pcVar7 = _stdout->_IO_write_ptr;
                    if (pcVar7 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar7 + 1;
                      *pcVar7 = ' ';
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
        unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar8,0xffffffffffffffff,1);
        unaff_R13D = scale_to;
        iVar4 = grouping;
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
          iVar3 = __sprintf_chk(unaff_R15,2,uVar5);
          unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar3);
          uVar2 = uStack_8;
        }
        lVar14 = __LC19;
        if (dev_debug != false) {
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
        if (unaff_R13D != scale_none) goto LAB_00100923;
        if (unaff_EBP == 0) {
          lVar8 = (long)ROUND((longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) / __LC51);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar8);
          lVar15 = (longdouble)lVar8 * __LC51;
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
          lVar8 = (long)ROUND(lVar13 / __LC51);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar8);
          lVar15 = (longdouble)lVar8 * __LC51;
          lVar14 = lVar13 - lVar15;
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
          lVar14 = lVar14 * lVar13;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        lVar14 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar14;
        lVar8 = (long)ROUND(lVar14 / __LC51);
        param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar8);
        lVar15 = (longdouble)lVar8 * __LC51;
        lVar14 = lVar14 - lVar15;
        switch(unaff_RBX) {
        case 0:
          goto switchD_001012e1_caseD_0;
        case 1:
switchD_001012e1_caseD_1:
          lVar8 = (long)ROUND(-lVar14);
          lVar8 = -(lVar8 + (ulong)((longdouble)lVar8 < -lVar14));
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar8);
          lVar13 = (longdouble)lVar8;
          break;
        case 2:
LAB_00100e38:
          if (lVar14 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
          lVar8 = (long)ROUND(lVar14);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar8);
          lVar13 = (longdouble)lVar8;
          if (lVar13 < lVar14) {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar8 + 1);
            lVar13 = (longdouble)(lVar8 + 1);
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
          uVar5 = FUN_00100e8f();
          return uVar5;
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
        pcStack_10 = SUB108(lVar13,0);
        pcVar7 = pcStack_10;
        if (dev_debug != false) {
          pcVar9 = "  no scaling, returning value: %.*Lf\n";
          if (iVar4 != 0) {
            pcVar9 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
          }
          __fprintf_chk(_stderr,2,pcVar9,unaff_EBP);
          unaff_RBX = CONCAT62(uStack_6,uStack_8);
          param_8 = lVar13;
          uVar2 = uStack_8;
        }
        uStack_8 = uVar2;
        *(undefined4 *)unaff_R15 = 0x664c2a2e;
        *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
        pcStack_10 = suffix;
        if (suffix == (char *)0x0) {
          pcStack_10 = "";
        }
        iVar4 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,unaff_EBP,pcVar7,
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
  if (unaff_R13D - scale_IEC < 2) {
    iStack0000000000000040 = 0x400;
    uVar5 = _LC16;
  }
  else {
    iStack0000000000000040 = 1000;
    uVar5 = _LC17;
  }
  param_8 = (longdouble)CONCAT28(param_8._8_2_,uVar5);
  lVar15 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
  if (lVar15 < __LC44) {
    lVar15 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
    param_4 = 0;
    goto joined_r0x00100ff2;
  }
  if (__LC45 < lVar15) {
    if (dev_debug != false) {
      lVar15 = (longdouble)__LC18;
      param_4 = 0;
      goto LAB_00100ff8;
    }
    if (user_precision != 0xffffffffffffffff) {
      lVar15 = (longdouble)__LC18;
      lVar8 = 0;
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
      uVar10 = 0;
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
  if (dev_debug == false) {
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
      uVar5 = FUN_00104126();
      return uVar5;
    }
LAB_00100a60:
    lVar13 = (longdouble)(long)ROUND(lVar15);
    if (lVar13 < lVar15) {
      lVar13 = (longdouble)((long)ROUND(lVar15) + 1);
    }
  }
  else {
LAB_00100ff8:
    pcStack_10 = SUB108(lVar15,0);
    uStack_8 = (undefined2)((unkuint10)lVar15 >> 0x40);
    __fprintf_chk(uVar5,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
    if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
    lVar8 = (long)((int)param_4 * 3);
LAB_001009b4:
    if (user_precision <= lVar8) {
      lVar8 = user_precision;
    }
    iVar4 = (int)lVar8;
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
      uVar5 = FUN_00104126();
      return uVar5;
    }
LAB_00100b80:
    lVar8 = (long)ROUND(-lVar15);
    lVar13 = (longdouble)(long)-(lVar8 + (ulong)((longdouble)lVar8 < -lVar15));
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
  uVar5 = FUN_00100aa9();
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00100c18(undefined8 param_1,undefined *param_2,char *param_3,undefined8 param_4,
            undefined8 param_5,ulong param_6,undefined8 param_7)

{
  char *pcVar1;
  double dVar2;
  scale_type sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined *in_RAX;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  ulong unaff_RBX;
  ulong uVar12;
  int unaff_EBP;
  idx_t unaff_R12;
  char *unaff_R14;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  longdouble lVar14;
  longdouble lVar15;
  longdouble in_ST0;
  longdouble lVar16;
  longdouble lVar17;
  char *unaff_retaddr;
  undefined8 in_stack_00000028;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  char *pcStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
code_r0x00100c18:
  pcStack_10 = param_3;
  iVar7 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,param_6,
                         SUB108(in_ST0,0),(short)((unkuint10)in_ST0 >> 0x40),in_RAX,(short)param_2);
  do {
    if ((iVar7 < 0) ||
       (lVar10 = (long)iVar7 - (padding_buffer_size + -1),
       SBORROW8((long)iVar7,padding_buffer_size + -1))) {
      uStack_8 = 0x1a91;
      uStack_6 = 0x10;
      uVar9 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
      uStack_8 = (undefined2)param_7;
      uStack_6 = param_7._2_6_;
      register0x00000020 = (BADSPACEBASE *)&pcStack_10;
      pcStack_10 = unaff_retaddr;
      error(1,0,uVar9);
      goto LAB_00101726;
    }
    if (lVar10 < 1) {
      if (dev_debug != false) {
        uStack_8 = 0x1786;
        uStack_6 = 0x10;
        uVar9 = quote(padding_buffer);
        uStack_8 = (undefined2)param_7;
        pcStack_10 = unaff_retaddr;
        __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar9);
      }
      if (padding_width != 0) {
        uStack_8 = 0x16a8;
        uStack_6 = 0x10;
        iVar7 = gnu_mbswidth(padding_buffer,3);
        if (-1 < iVar7) {
          if (padding_width < 0) {
            if (padding_width < -iVar7) {
              uVar12 = padding_width + iVar7;
              if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
              goto LAB_001016ec;
            }
          }
          else if (iVar7 < padding_width) {
            uVar12 = padding_width - iVar7;
            unaff_RBX = uVar12;
            if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
            uStack_8 = 0x16ec;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
            unaff_RBX = uVar12;
            if (0 < (long)uVar12) {
LAB_00101700:
              do {
                pcVar1 = _stdout->_IO_write_ptr;
                if (pcVar1 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar1 + 1;
                  *pcVar1 = ' ';
                }
                else {
                  uStack_8 = 0x185a;
                  uStack_6 = 0x10;
                  __overflow(_stdout,0x20);
                }
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
LAB_00101726:
            *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
            fputs_unlocked(padding_buffer,_stdout);
            if ((long)unaff_RBX < 0) {
              do {
                pcVar1 = _stdout->_IO_write_ptr;
                if (pcVar1 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar1 + 1;
                  *pcVar1 = ' ';
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
    unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar10,0xffffffffffffffff,1);
    sVar3 = scale_to;
    iVar7 = grouping;
    unaff_R12 = padding_buffer_size;
    unaff_RBX = (ulong)round_style;
    if (grouping == 0) {
      uVar9 = 0x19;
      puVar13 = (undefined8 *)((long)&stack0x00000090 + 1);
    }
    else {
      in_stack_00000090._1_1_ = 0x27;
      uVar9 = 0x18;
      puVar13 = (undefined8 *)((long)&stack0x00000090 + 2);
    }
    padding_buffer = unaff_R14;
    uVar5 = uStack_8;
    if (zero_padding_width != 0) {
      uStack_8 = 0xd58;
      uStack_6 = 0x10;
      iVar6 = __sprintf_chk(puVar13,2,uVar9);
      puVar13 = (undefined8 *)((long)puVar13 + (long)iVar6);
      uVar5 = uStack_8;
    }
    lVar16 = __LC19;
    if (dev_debug != false) {
      uStack_8 = 0xd94;
      uStack_6 = 0x10;
      fwrite("double_to_human:\n",1,0x11,_stderr);
      lVar16 = __LC19;
      uVar5 = uStack_8;
    }
    __LC19 = lVar16;
    uStack_8 = uVar5;
    if (sVar3 != scale_none) break;
    if (unaff_EBP == 0) {
      lVar17 = (longdouble)
               (long)ROUND((longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) / __LC51) *
               __LC51;
      lVar16 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) - lVar17;
      switch(unaff_RBX) {
      case 0:
        goto switchD_001012e1_caseD_0;
      case 1:
        goto switchD_001012e1_caseD_1;
      case 2:
        goto LAB_00100e38;
      case 3:
        lVar14 = (longdouble)(long)ROUND(lVar16) + lVar17;
        break;
      case 4:
        goto LAB_00100fa0;
      default:
        lVar14 = (longdouble)0;
      }
      goto LAB_00100eab;
    }
    iVar6 = unaff_EBP + -1;
    lVar14 = (longdouble)__LC1;
    lVar16 = lVar14;
    if (iVar6 == 0) {
      lVar14 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar14;
      lVar17 = (longdouble)(long)ROUND(lVar14 / __LC51) * __LC51;
      lVar16 = lVar14 - lVar17;
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
      lVar16 = lVar16 * lVar14;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar16 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr) * lVar16;
    lVar17 = (longdouble)(long)ROUND(lVar16 / __LC51) * __LC51;
    lVar16 = lVar16 - lVar17;
    switch(unaff_RBX) {
    case 0:
      goto switchD_001012e1_caseD_0;
    case 1:
switchD_001012e1_caseD_1:
      lVar10 = (long)ROUND(-lVar16);
      lVar14 = (longdouble)(long)-(lVar10 + (ulong)((longdouble)lVar10 < -lVar16));
      break;
    case 2:
LAB_00100e38:
      if (lVar16 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
      lVar14 = (longdouble)(long)ROUND(lVar16);
      if (lVar14 < lVar16) {
        lVar14 = (longdouble)((long)ROUND(lVar16) + 1);
      }
      break;
    case 3:
      lVar14 = (longdouble)(long)ROUND(lVar16) + lVar17;
      goto code_r0x00100e8f;
    case 4:
LAB_00100fa0:
      if (lVar16 < (longdouble)0) {
        lVar14 = (longdouble)(long)ROUND(lVar16 - (longdouble)__LC52);
      }
      else {
        lVar14 = (longdouble)(long)ROUND(lVar16 + (longdouble)__LC52);
      }
      break;
    default:
      uVar9 = FUN_00100e8f();
      return uVar9;
    }
    lVar14 = lVar14 + lVar17;
    if (unaff_EBP != 0) {
code_r0x00100e8f:
      lVar17 = (longdouble)__LC1;
      iVar6 = unaff_EBP + -1;
      lVar16 = lVar17;
      if (iVar6 == 0) {
        lVar14 = lVar14 / lVar17;
      }
      else {
        do {
          lVar16 = lVar16 * lVar17;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar14 = lVar14 / lVar16;
      }
    }
LAB_00100eab:
    uStack_8 = (undefined2)((unkuint10)lVar14 >> 0x40);
    uVar4 = uStack_8;
    pcStack_10 = SUB108(lVar14,0);
    pcVar1 = pcStack_10;
    if (dev_debug != false) {
      pcVar11 = "  no scaling, returning value: %.*Lf\n";
      if (iVar7 != 0) {
        pcVar11 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
      }
      __fprintf_chk(_stderr,2,pcVar11,unaff_EBP);
      unaff_RBX = CONCAT62(uStack_6,uStack_8);
      uVar5 = uStack_8;
    }
    uStack_8 = uVar5;
    *(undefined4 *)puVar13 = 0x664c2a2e;
    *(undefined4 *)((long)puVar13 + 3) = 0x732566;
    pcStack_10 = suffix;
    if (suffix == (char *)0x0) {
      pcStack_10 = "";
    }
    iVar7 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,
                           pcVar1,uVar4);
  } while( true );
  if (sVar3 - scale_IEC < 2) {
    iStack0000000000000040 = 0x400;
    dVar2 = _LC16;
  }
  else {
    iStack0000000000000040 = 1000;
    dVar2 = _LC17;
  }
  lVar17 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
  if (lVar17 < __LC44) {
    lVar17 = (longdouble)CONCAT28((undefined2)param_7,unaff_retaddr);
    uVar12 = 0;
    if (dev_debug != false) goto LAB_00100ff8;
LAB_0010099e:
    if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
    lVar10 = (long)((int)uVar12 * 3);
LAB_001009b4:
    if (user_precision <= lVar10) {
      lVar10 = user_precision;
    }
    iVar7 = (int)lVar10;
    if (iVar7 == 0) {
LAB_001011a2:
      lVar16 = (longdouble)(long)ROUND(lVar17 / __LC51) * __LC51;
      lVar17 = lVar17 - lVar16;
      switch(unaff_RBX) {
      case 0:
        iVar7 = 0;
        goto LAB_00100a60;
      case 1:
        iVar7 = 0;
        break;
      case 2:
        iVar7 = 0;
LAB_00100a40:
        if ((longdouble)0 <= lVar17) goto LAB_00100a60;
        break;
      case 3:
LAB_0010120e:
        in_ST0 = (longdouble)(long)ROUND(lVar17) + lVar16;
        goto LAB_00100abb;
      case 4:
        iVar7 = 0;
LAB_00100bc8:
        if (lVar17 < (longdouble)0) {
          lVar14 = (longdouble)(long)ROUND(lVar17 - (longdouble)__LC52);
        }
        else {
LAB_00100bd4:
          lVar14 = (longdouble)(long)ROUND(lVar17 + (longdouble)__LC52);
        }
        goto LAB_00100a90;
      default:
        uVar9 = FUN_00104126();
        return uVar9;
      }
LAB_00100b80:
      lVar10 = (long)ROUND(-lVar17);
      lVar14 = (longdouble)(long)-(lVar10 + (ulong)((longdouble)lVar10 < -lVar17));
      goto LAB_00100a90;
    }
    iVar6 = iVar7 + -1;
    if (iVar6 == 0) {
      lVar14 = (longdouble)__LC1;
LAB_0010106c:
      lVar16 = (longdouble)(long)ROUND((lVar17 * lVar14) / __LC51) * __LC51;
      lVar17 = lVar17 * lVar14 - lVar16;
      iVar7 = 1;
      switch(unaff_RBX) {
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
    lVar14 = (longdouble)__LC1;
    lVar15 = lVar14;
    do {
      lVar15 = lVar15 * lVar14;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar16 = (longdouble)(long)ROUND((lVar15 * lVar17) / __LC51) * __LC51;
    lVar17 = lVar15 * lVar17 - lVar16;
    switch(unaff_RBX) {
    case 0:
      goto LAB_00100a60;
    case 1:
      goto LAB_00100b80;
    case 2:
      goto LAB_00100a40;
    case 3:
LAB_00100bf5:
      in_ST0 = (longdouble)(long)ROUND(lVar17) + lVar16;
      break;
    case 4:
      goto LAB_00100bc8;
    default:
      uVar9 = FUN_00100aa9();
      return uVar9;
    }
LAB_00100a9d:
    iVar7 = iVar7 + -1;
    lVar16 = lVar14;
    if (iVar7 == 0) {
      in_ST0 = in_ST0 / lVar14;
    }
    else {
      do {
        lVar16 = lVar16 * lVar14;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      in_ST0 = in_ST0 / lVar16;
    }
  }
  else {
    if (lVar17 <= __LC45) {
      uVar12 = 0;
      while( true ) {
        lVar16 = -lVar17;
        if ((longdouble)0 <= lVar17) {
          lVar16 = lVar17;
        }
        if (lVar16 < (longdouble)iStack0000000000000040) break;
        lVar17 = lVar17 / (longdouble)iStack0000000000000040;
        uVar12 = (ulong)((int)uVar12 + 1);
      }
      if (dev_debug == false) goto LAB_0010099e;
LAB_00100ff8:
      pcStack_10 = SUB108(lVar17,0);
      uStack_8 = (undefined2)((unkuint10)lVar17 >> 0x40);
      __fprintf_chk(dVar2,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
      if (user_precision != -1) goto LAB_001009af;
LAB_00101050:
      lVar16 = -lVar17;
      if ((longdouble)0 <= lVar17) {
        lVar16 = lVar17;
      }
      lVar14 = (longdouble)__LC1;
      if (lVar16 < lVar14) goto LAB_0010106c;
      goto LAB_001011a2;
    }
    if (dev_debug != false) {
      lVar17 = (longdouble)__LC18;
      uVar12 = 0;
      goto LAB_00100ff8;
    }
    if (user_precision != -1) {
      lVar17 = (longdouble)__LC18;
      lVar10 = 0;
      uVar12 = 0;
      goto LAB_001009b4;
    }
    switch(unaff_RBX) {
    case 0:
      lVar17 = (longdouble)__LC18;
      uVar12 = 0;
      iVar7 = 0;
      break;
    case 1:
      lVar17 = (longdouble)__LC18;
      uVar12 = 0;
      iVar7 = 0;
      goto LAB_00100b80;
    case 2:
      iVar7 = 0;
      uVar12 = 0;
      lVar17 = (longdouble)__LC18;
      break;
    case 3:
      lVar17 = (longdouble)__LC18;
      uVar12 = 0;
      goto LAB_0010120e;
    case 4:
      lVar17 = (longdouble)__LC18;
      iVar7 = 0;
      uVar12 = 0;
      goto LAB_00100bd4;
    default:
      in_ST0 = (longdouble)0;
      uVar12 = 0;
      param_6 = 0;
      goto LAB_00100b05;
    }
LAB_00100a60:
    lVar14 = (longdouble)(long)ROUND(lVar17);
    if (lVar14 < lVar17) {
      lVar14 = (longdouble)((long)ROUND(lVar17) + 1);
    }
LAB_00100a90:
    in_ST0 = lVar14 + lVar16;
    if (iVar7 != 0) {
      lVar14 = (longdouble)__LC1;
      goto LAB_00100a9d;
    }
  }
LAB_00100abb:
  lVar16 = (longdouble)dVar2;
  if (in_ST0 < (longdouble)0) {
    lVar17 = -in_ST0;
    if (lVar16 <= lVar17) goto LAB_001010d4;
LAB_001010fa:
    if (lVar17 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
    param_6 = 0;
  }
  else {
    if (lVar16 <= in_ST0) {
LAB_001010d4:
      in_ST0 = in_ST0 / lVar16;
      uVar12 = (ulong)((int)uVar12 + 1);
      lVar16 = (longdouble)0;
      if (!NAN(in_ST0) && !NAN(lVar16)) {
        if (in_ST0 == lVar16) goto LAB_00101112;
        if (in_ST0 <= lVar16) {
          lVar17 = -in_ST0;
          goto LAB_001010fa;
        }
      }
    }
    else if (in_ST0 == (longdouble)0) goto LAB_00101112;
    if ((longdouble)__LC1 <= in_ST0) goto LAB_00101112;
LAB_00100af3:
    param_6 = (ulong)((int)uVar12 != 0);
  }
  if (dev_debug != false) {
    pcStack_10 = SUB108(in_ST0,0);
    uStack_8 = (undefined2)((unkuint10)in_ST0 >> 0x40);
    __fprintf_chk(dVar2,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
  }
LAB_00100b05:
  param_2 = &DAT_001025c3;
  *puVar13 = 0x73257325664c2a2e;
  if (user_precision != -1) {
    param_6 = user_precision & 0xffffffff;
  }
  in_RAX = &_LC15;
  *(undefined4 *)((long)puVar13 + 7) = 0x732573;
  param_3 = suffix;
  if (suffix == (char *)0x0) {
    param_3 = "";
  }
  uVar8 = (uint)uVar12;
  if (sVar3 != scale_IEC_I) {
    if (uVar8 == 1) {
      uVar9 = FUN_00100c18();
      return uVar9;
    }
    goto LAB_00100b51;
  }
  if (uVar8 != 0) {
    param_2 = &_LC20;
LAB_00100b51:
    if (10 < uVar8) {
      uVar9 = FUN_00100c18(user_precision,param_2);
      return uVar9;
    }
    uVar9 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar12]))();
    return uVar9;
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
  scale_type sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  ulong unaff_RBX;
  ulong uVar12;
  int unaff_EBP;
  undefined *puVar13;
  int in_R9D;
  ulong uVar14;
  idx_t unaff_R12;
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
  char *unaff_retaddr;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  undefined8 in_stack_00000028;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  char *pcStack_10;
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
  uVar4 = uStack_8;
  uStack_8 = (undefined2)((unkuint10)lVar17 >> 0x40);
  uVar3 = uStack_8;
  pcStack_10 = SUB108(lVar17,0);
  pcVar9 = pcStack_10;
  if (param_2 != '\0') {
    pcVar11 = "  no scaling, returning value: %.*Lf\n";
    if (in_R9D != 0) {
      pcVar11 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
    }
    __fprintf_chk(_stderr,2,pcVar11,unaff_EBP);
    unaff_RBX = CONCAT62(uStack_6,uStack_8);
    uVar4 = uStack_8;
  }
  uStack_8 = uVar4;
  *(undefined4 *)unaff_R15 = 0x664c2a2e;
  *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
  pcStack_10 = suffix;
  if (suffix == (char *)0x0) {
    pcStack_10 = "";
  }
  iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,pcVar9
                         ,uVar3);
  do {
    if ((iVar6 < 0) ||
       (lVar10 = (long)iVar6 - (padding_buffer_size + -1),
       SBORROW8((long)iVar6,padding_buffer_size + -1))) {
      uStack_8 = 0x1a91;
      uStack_6 = 0x10;
      uVar8 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
      uStack_8 = uStack0000000000000008;
      uStack_6 = uStack000000000000000a;
      register0x00000020 = (BADSPACEBASE *)&pcStack_10;
      pcStack_10 = unaff_retaddr;
      error(1,0,uVar8);
      goto LAB_00101726;
    }
    if (lVar10 < 1) {
      if (dev_debug != false) {
        uStack_8 = 0x1786;
        uStack_6 = 0x10;
        uVar8 = quote(padding_buffer);
        uStack_8 = uStack0000000000000008;
        pcStack_10 = unaff_retaddr;
        __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar8);
      }
      if (padding_width != 0) {
        uStack_8 = 0x16a8;
        uStack_6 = 0x10;
        iVar6 = gnu_mbswidth(padding_buffer,3);
        if (-1 < iVar6) {
          if (padding_width < 0) {
            if (padding_width < -iVar6) {
              uVar12 = padding_width + iVar6;
              if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
              goto LAB_001016ec;
            }
          }
          else if (iVar6 < padding_width) {
            uVar12 = padding_width - iVar6;
            unaff_RBX = uVar12;
            if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
            uStack_8 = 0x16ec;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
            unaff_RBX = uVar12;
            if (0 < (long)uVar12) {
LAB_00101700:
              do {
                pcVar9 = _stdout->_IO_write_ptr;
                if (pcVar9 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar9 + 1;
                  *pcVar9 = ' ';
                }
                else {
                  uStack_8 = 0x185a;
                  uStack_6 = 0x10;
                  __overflow(_stdout,0x20);
                }
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
LAB_00101726:
            *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
            fputs_unlocked(padding_buffer,_stdout);
            if ((long)unaff_RBX < 0) {
              do {
                pcVar9 = _stdout->_IO_write_ptr;
                if (pcVar9 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar9 + 1;
                  *pcVar9 = ' ';
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
    unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar10,0xffffffffffffffff,1);
    sVar2 = scale_to;
    in_R9D = grouping;
    unaff_R12 = padding_buffer_size;
    unaff_RBX = (ulong)round_style;
    if (grouping == 0) {
      uVar8 = 0x19;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
    }
    else {
      in_stack_00000090._1_1_ = 0x27;
      uVar8 = 0x18;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
    }
    padding_buffer = unaff_R14;
    if (zero_padding_width != 0) {
      uStack_8 = 0xd58;
      uStack_6 = 0x10;
      iVar6 = __sprintf_chk(unaff_R15,2,uVar8);
      unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar6);
    }
    lVar17 = __LC19;
    if (dev_debug != false) {
      uStack_8 = 0xd94;
      uStack_6 = 0x10;
      fwrite("double_to_human:\n",1,0x11,_stderr);
      lVar17 = __LC19;
    }
    __LC19 = lVar17;
    if (sVar2 == scale_none) break;
    if (sVar2 - scale_IEC < 2) {
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
      uVar12 = 0;
      if (dev_debug != false) goto LAB_00100ff8;
LAB_0010099e:
      if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
      lVar10 = (long)((int)uVar12 * 3);
LAB_001009b4:
      if (user_precision <= lVar10) {
        lVar10 = user_precision;
      }
      iVar6 = (int)lVar10;
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
          lVar16 = (longdouble)(long)ROUND(lVar18) + lVar17;
          goto LAB_00100abb;
        case 4:
          iVar6 = 0;
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
          uVar8 = FUN_00104126();
          return uVar8;
        }
LAB_00100b80:
        lVar10 = (long)ROUND(-lVar18);
        lVar16 = (longdouble)(long)-(lVar10 + (ulong)((longdouble)lVar10 < -lVar18));
        goto LAB_00100a90;
      }
      iVar5 = iVar6 + -1;
      if (iVar5 == 0) {
        lVar19 = (longdouble)__LC1;
LAB_0010106c:
        lVar17 = (longdouble)(long)ROUND((lVar18 * lVar19) / __LC51) * __LC51;
        lVar18 = lVar18 * lVar19 - lVar17;
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
          uVar8 = FUN_00104126();
          return uVar8;
        }
        goto LAB_00100b80;
      }
      lVar19 = (longdouble)__LC1;
      lVar16 = lVar19;
      do {
        lVar16 = lVar16 * lVar19;
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
        lVar16 = (longdouble)(long)ROUND(lVar18) + lVar17;
        break;
      case 4:
        goto LAB_00100bc8;
      default:
        uVar8 = FUN_00100aa9();
        return uVar8;
      }
LAB_00100a9d:
      iVar6 = iVar6 + -1;
      lVar17 = lVar19;
      if (iVar6 == 0) {
        lVar16 = lVar16 / lVar19;
      }
      else {
        do {
          lVar17 = lVar17 * lVar19;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar16 = lVar16 / lVar17;
      }
    }
    else {
      if (lVar18 <= __LC45) {
        uVar12 = 0;
        while( true ) {
          lVar17 = -lVar18;
          if ((longdouble)0 <= lVar18) {
            lVar17 = lVar18;
          }
          if (lVar17 < (longdouble)iStack0000000000000040) break;
          lVar18 = lVar18 / (longdouble)iStack0000000000000040;
          uVar12 = (ulong)((int)uVar12 + 1);
        }
        if (dev_debug == false) goto LAB_0010099e;
LAB_00100ff8:
        pcStack_10 = SUB108(lVar18,0);
        uStack_8 = (undefined2)((unkuint10)lVar18 >> 0x40);
        __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
        if (user_precision != -1) goto LAB_001009af;
LAB_00101050:
        lVar17 = -lVar18;
        if ((longdouble)0 <= lVar18) {
          lVar17 = lVar18;
        }
        lVar19 = (longdouble)__LC1;
        if (lVar17 < lVar19) goto LAB_0010106c;
        goto LAB_001011a2;
      }
      if (dev_debug != false) {
        lVar18 = (longdouble)__LC18;
        uVar12 = 0;
        goto LAB_00100ff8;
      }
      if (user_precision != -1) {
        lVar18 = (longdouble)__LC18;
        lVar10 = 0;
        uVar12 = 0;
        goto LAB_001009b4;
      }
      switch(unaff_RBX) {
      case 0:
        lVar18 = (longdouble)__LC18;
        uVar12 = 0;
        iVar6 = 0;
        break;
      case 1:
        lVar18 = (longdouble)__LC18;
        uVar12 = 0;
        iVar6 = 0;
        goto LAB_00100b80;
      case 2:
        iVar6 = 0;
        uVar12 = 0;
        lVar18 = (longdouble)__LC18;
        break;
      case 3:
        lVar18 = (longdouble)__LC18;
        uVar12 = 0;
        goto LAB_0010120e;
      case 4:
        lVar18 = (longdouble)__LC18;
        iVar6 = 0;
        uVar12 = 0;
        goto LAB_00100bd4;
      default:
        lVar16 = (longdouble)0;
        uVar12 = 0;
        uVar14 = 0;
        goto LAB_00100b05;
      }
LAB_00100a60:
      lVar16 = (longdouble)(long)ROUND(lVar18);
      if (lVar16 < lVar18) {
        lVar16 = (longdouble)((long)ROUND(lVar18) + 1);
      }
LAB_00100a90:
      lVar16 = lVar16 + lVar17;
      if (iVar6 != 0) {
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
      uVar14 = 0;
      uVar7 = 0;
    }
    else {
      if (lVar17 <= lVar16) {
LAB_001010d4:
        lVar16 = lVar16 / lVar17;
        uVar12 = (ulong)((int)uVar12 + 1);
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
      bVar15 = (int)uVar12 != 0;
      uVar14 = (ulong)bVar15;
      uVar7 = (uint)bVar15;
    }
    if (dev_debug != false) {
      pcStack_10 = SUB108(lVar16,0);
      uStack_8 = (undefined2)((unkuint10)lVar16 >> 0x40);
      __fprintf_chk(dVar1,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
      uVar14 = (ulong)uVar7;
    }
LAB_00100b05:
    puVar13 = &DAT_001025c3;
    *unaff_R15 = 0x73257325664c2a2e;
    if (user_precision != -1) {
      uVar14 = user_precision & 0xffffffff;
    }
    *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
    pcVar9 = suffix;
    if (suffix == (char *)0x0) {
      pcVar9 = "";
    }
    uVar7 = (uint)uVar12;
    if (sVar2 != scale_IEC_I) {
      if (uVar7 == 1) {
        uVar8 = FUN_00100c18();
        return uVar8;
      }
LAB_00100b51:
      if (10 < uVar7) {
        uVar8 = FUN_00100c18(user_precision,puVar13);
        return uVar8;
      }
      uVar8 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar12]))();
      return uVar8;
    }
    if (uVar7 != 0) {
      puVar13 = &_LC20;
      goto LAB_00100b51;
    }
    pcStack_10 = pcVar9;
    iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,uVar14,
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
      uVar8 = FUN_0010186b();
      return uVar8;
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
      uVar8 = FUN_00100e8f();
      return uVar8;
    }
  }
LAB_00100e38:
  if (in_ST1 < (longdouble)0) goto switchD_001012e1_caseD_1;
  goto switchD_001012e1_caseD_0;
switchD_00100e22_caseD_1:
switchD_001012e1_caseD_1:
  lVar10 = (long)ROUND(-in_ST1);
  lVar17 = (longdouble)(long)-(lVar10 + (ulong)((longdouble)lVar10 < -in_ST1));
  goto LAB_00100e80;
switchD_001018bd_caseD_3:
  uVar8 = FUN_00100e8f();
  return uVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00100e8f(undefined8 param_1,char param_2)

{
  double dVar1;
  scale_type sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  ulong unaff_RBX;
  ulong uVar12;
  int unaff_EBP;
  undefined *puVar13;
  int in_R9D;
  ulong uVar14;
  idx_t unaff_R12;
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
  char *unaff_retaddr;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  undefined8 in_stack_00000028;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  char *local_10;
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
  uVar4 = uStack_8;
  uStack_8 = (undefined2)((unkuint10)in_ST1 >> 0x40);
  uVar3 = uStack_8;
  local_10 = SUB108(in_ST1,0);
  pcVar9 = local_10;
  if (param_2 != '\0') {
    pcVar11 = "  no scaling, returning value: %.*Lf\n";
    if (in_R9D != 0) {
      pcVar11 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
    }
    __fprintf_chk(_stderr,2,pcVar11,unaff_EBP);
    unaff_RBX = CONCAT62(uStack_6,uStack_8);
    uVar4 = uStack_8;
  }
  uStack_8 = uVar4;
  *(undefined4 *)unaff_R15 = 0x664c2a2e;
  *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
  local_10 = suffix;
  if (suffix == (char *)0x0) {
    local_10 = "";
  }
  iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,pcVar9
                         ,uVar3);
  do {
    if ((iVar6 < 0) ||
       (lVar10 = (long)iVar6 - (padding_buffer_size + -1),
       SBORROW8((long)iVar6,padding_buffer_size + -1))) {
      uStack_8 = 0x1a91;
      uStack_6 = 0x10;
      uVar8 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
      uStack_8 = uStack0000000000000008;
      uStack_6 = uStack000000000000000a;
      register0x00000020 = (BADSPACEBASE *)&local_10;
      local_10 = unaff_retaddr;
      error(1,0,uVar8);
      goto LAB_00101726;
    }
    if (lVar10 < 1) {
      if (dev_debug != false) {
        uStack_8 = 0x1786;
        uStack_6 = 0x10;
        uVar8 = quote(padding_buffer);
        uStack_8 = uStack0000000000000008;
        local_10 = unaff_retaddr;
        __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar8);
      }
      if (padding_width != 0) {
        uStack_8 = 0x16a8;
        uStack_6 = 0x10;
        iVar6 = gnu_mbswidth(padding_buffer,3);
        if (-1 < iVar6) {
          if (padding_width < 0) {
            if (padding_width < -iVar6) {
              uVar12 = padding_width + iVar6;
              if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
              goto LAB_001016ec;
            }
          }
          else if (iVar6 < padding_width) {
            uVar12 = padding_width - iVar6;
            unaff_RBX = uVar12;
            if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
            uStack_8 = 0x16ec;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
            unaff_RBX = uVar12;
            if (0 < (long)uVar12) {
LAB_00101700:
              do {
                pcVar9 = _stdout->_IO_write_ptr;
                if (pcVar9 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar9 + 1;
                  *pcVar9 = ' ';
                }
                else {
                  uStack_8 = 0x185a;
                  uStack_6 = 0x10;
                  __overflow(_stdout,0x20);
                }
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
LAB_00101726:
            *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
            fputs_unlocked(padding_buffer,_stdout);
            if ((long)unaff_RBX < 0) {
              do {
                pcVar9 = _stdout->_IO_write_ptr;
                if (pcVar9 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar9 + 1;
                  *pcVar9 = ' ';
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
    unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar10,0xffffffffffffffff,1);
    sVar2 = scale_to;
    in_R9D = grouping;
    unaff_R12 = padding_buffer_size;
    unaff_RBX = (ulong)round_style;
    if (grouping == 0) {
      uVar8 = 0x19;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
    }
    else {
      in_stack_00000090._1_1_ = 0x27;
      uVar8 = 0x18;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
    }
    padding_buffer = unaff_R14;
    if (zero_padding_width != 0) {
      uStack_8 = 0xd58;
      uStack_6 = 0x10;
      iVar6 = __sprintf_chk(unaff_R15,2,uVar8);
      unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar6);
    }
    lVar18 = __LC19;
    if (dev_debug != false) {
      uStack_8 = 0xd94;
      uStack_6 = 0x10;
      fwrite("double_to_human:\n",1,0x11,_stderr);
      lVar18 = __LC19;
    }
    __LC19 = lVar18;
    if (sVar2 == scale_none) break;
    if (sVar2 - scale_IEC < 2) {
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
      uVar12 = 0;
      if (dev_debug != false) goto LAB_00100ff8;
LAB_0010099e:
      if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
      lVar10 = (long)((int)uVar12 * 3);
LAB_001009b4:
      if (user_precision <= lVar10) {
        lVar10 = user_precision;
      }
      iVar6 = (int)lVar10;
      if (iVar6 == 0) {
LAB_001011a2:
        lVar18 = (longdouble)(long)ROUND(lVar19 / __LC51) * __LC51;
        lVar19 = lVar19 - lVar18;
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
          if ((longdouble)0 <= lVar19) goto LAB_00100a60;
          break;
        case 3:
LAB_0010120e:
          lVar17 = (longdouble)(long)ROUND(lVar19) + lVar18;
          goto LAB_00100abb;
        case 4:
          iVar6 = 0;
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
          uVar8 = FUN_00104126();
          return uVar8;
        }
LAB_00100b80:
        lVar10 = (long)ROUND(-lVar19);
        lVar17 = (longdouble)(long)-(lVar10 + (ulong)((longdouble)lVar10 < -lVar19));
        goto LAB_00100a90;
      }
      iVar5 = iVar6 + -1;
      if (iVar5 == 0) {
        lVar16 = (longdouble)__LC1;
LAB_0010106c:
        lVar18 = (longdouble)(long)ROUND((lVar19 * lVar16) / __LC51) * __LC51;
        lVar19 = lVar19 * lVar16 - lVar18;
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
          uVar8 = FUN_00104126();
          return uVar8;
        }
        goto LAB_00100b80;
      }
      lVar16 = (longdouble)__LC1;
      lVar17 = lVar16;
      do {
        lVar17 = lVar17 * lVar16;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
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
        uVar8 = FUN_00100aa9();
        return uVar8;
      }
LAB_00100a9d:
      iVar6 = iVar6 + -1;
      lVar18 = lVar16;
      if (iVar6 == 0) {
        lVar17 = lVar17 / lVar16;
      }
      else {
        do {
          lVar18 = lVar18 * lVar16;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar17 = lVar17 / lVar18;
      }
    }
    else {
      if (lVar19 <= __LC45) {
        uVar12 = 0;
        while( true ) {
          lVar18 = -lVar19;
          if ((longdouble)0 <= lVar19) {
            lVar18 = lVar19;
          }
          if (lVar18 < (longdouble)iStack0000000000000040) break;
          lVar19 = lVar19 / (longdouble)iStack0000000000000040;
          uVar12 = (ulong)((int)uVar12 + 1);
        }
        if (dev_debug == false) goto LAB_0010099e;
LAB_00100ff8:
        local_10 = SUB108(lVar19,0);
        uStack_8 = (undefined2)((unkuint10)lVar19 >> 0x40);
        __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
        if (user_precision != -1) goto LAB_001009af;
LAB_00101050:
        lVar18 = -lVar19;
        if ((longdouble)0 <= lVar19) {
          lVar18 = lVar19;
        }
        lVar16 = (longdouble)__LC1;
        if (lVar18 < lVar16) goto LAB_0010106c;
        goto LAB_001011a2;
      }
      if (dev_debug != false) {
        lVar19 = (longdouble)__LC18;
        uVar12 = 0;
        goto LAB_00100ff8;
      }
      if (user_precision != -1) {
        lVar19 = (longdouble)__LC18;
        lVar10 = 0;
        uVar12 = 0;
        goto LAB_001009b4;
      }
      switch(unaff_RBX) {
      case 0:
        lVar19 = (longdouble)__LC18;
        uVar12 = 0;
        iVar6 = 0;
        break;
      case 1:
        lVar19 = (longdouble)__LC18;
        uVar12 = 0;
        iVar6 = 0;
        goto LAB_00100b80;
      case 2:
        iVar6 = 0;
        uVar12 = 0;
        lVar19 = (longdouble)__LC18;
        break;
      case 3:
        lVar19 = (longdouble)__LC18;
        uVar12 = 0;
        goto LAB_0010120e;
      case 4:
        lVar19 = (longdouble)__LC18;
        iVar6 = 0;
        uVar12 = 0;
        goto LAB_00100bd4;
      default:
        lVar17 = (longdouble)0;
        uVar12 = 0;
        uVar14 = 0;
        goto LAB_00100b05;
      }
LAB_00100a60:
      lVar17 = (longdouble)(long)ROUND(lVar19);
      if (lVar17 < lVar19) {
        lVar17 = (longdouble)((long)ROUND(lVar19) + 1);
      }
LAB_00100a90:
      lVar17 = lVar17 + lVar18;
      if (iVar6 != 0) {
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
      uVar14 = 0;
      uVar7 = 0;
    }
    else {
      if (lVar18 <= lVar17) {
LAB_001010d4:
        lVar17 = lVar17 / lVar18;
        uVar12 = (ulong)((int)uVar12 + 1);
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
      bVar15 = (int)uVar12 != 0;
      uVar14 = (ulong)bVar15;
      uVar7 = (uint)bVar15;
    }
    if (dev_debug != false) {
      local_10 = SUB108(lVar17,0);
      uStack_8 = (undefined2)((unkuint10)lVar17 >> 0x40);
      __fprintf_chk(dVar1,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
      uVar14 = (ulong)uVar7;
    }
LAB_00100b05:
    puVar13 = &DAT_001025c3;
    *unaff_R15 = 0x73257325664c2a2e;
    if (user_precision != -1) {
      uVar14 = user_precision & 0xffffffff;
    }
    *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
    pcVar9 = suffix;
    if (suffix == (char *)0x0) {
      pcVar9 = "";
    }
    uVar7 = (uint)uVar12;
    if (sVar2 != scale_IEC_I) {
      if (uVar7 == 1) {
        uVar8 = FUN_00100c18();
        return uVar8;
      }
LAB_00100b51:
      if (10 < uVar7) {
        uVar8 = FUN_00100c18(user_precision,puVar13);
        return uVar8;
      }
      uVar8 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar12]))();
      return uVar8;
    }
    if (uVar7 != 0) {
      puVar13 = &_LC20;
      goto LAB_00100b51;
    }
    local_10 = pcVar9;
    iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,uVar14,
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
      uVar8 = FUN_00100e8f();
      return uVar8;
    case 4:
      goto LAB_00100fa0;
    default:
      uVar8 = FUN_0010186b();
      return uVar8;
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
      lVar10 = (long)ROUND(-lVar18);
      lVar16 = (longdouble)(long)-(lVar10 + (ulong)((longdouble)lVar10 < -lVar18));
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
  uVar8 = FUN_00100e8f();
  return uVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00101408(void)

{
  double dVar1;
  idx_t iVar2;
  scale_type sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  uint unaff_EBX;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  char *pcVar19;
  ulong uVar20;
  char *unaff_R12;
  undefined8 *puVar21;
  long in_FS_OFFSET;
  bool bVar22;
  longdouble lVar23;
  longdouble lVar24;
  longdouble lVar25;
  longdouble lVar26;
  longdouble in_ST0;
  char *pcVar27;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  int iStack0000000000000010;
  int iStack0000000000000040;
  char *in_stack_00000060;
  longdouble in_stack_00000070;
  undefined1 uStack0000000000000090;
  undefined1 uStack0000000000000091;
  char *local_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
  local_10 = SUB108(in_ST0,0);
  uStack_8 = (undefined2)((unkuint10)in_ST0 >> 0x40);
  __fprintf_chk(_stderr,2,"  suffix power=%d^%d = %Lf\n");
  in_stack_00000070 = in_ST0 * in_stack_00000070;
  pcVar27 = SUB108(in_stack_00000070,0);
  uStack0000000000000008 = (undefined2)((unkuint10)in_stack_00000070 >> 0x40);
  if (dev_debug != false) {
    local_10 = pcVar27;
    uStack_8 = uStack0000000000000008;
    __fprintf_chk(_stderr,2,"  returning value: %Lf (%LG)\n");
  }
  iVar7 = conv_exit_code;
  if ((in_stack_00000060 == (char *)0x0) || (*in_stack_00000060 == '\0')) {
    if ((unaff_EBX == 1) && (debug != false)) {
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
    if (inval_style != inval_ignore) {
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
      error(iVar7,0,uVar10,uVar9,uVar8);
    }
    unaff_EBX = 5;
  }
  iVar7 = conv_exit_code;
  if ((from_unit_size != 1) || (to_unit_size != 1)) {
    lVar23 = (longdouble)(long)from_unit_size;
    if ((long)from_unit_size < 0) {
      lVar23 = lVar23 + (longdouble)__LC43;
    }
    lVar24 = (longdouble)(long)to_unit_size;
    if ((long)to_unit_size < 0) {
      lVar24 = lVar24 + (longdouble)__LC43;
    }
    lVar24 = (in_stack_00000070 * lVar23) / lVar24;
    pcVar27 = SUB108(lVar24,0);
    uStack0000000000000008 = (undefined2)((unkuint10)lVar24 >> 0x40);
  }
  if (unaff_EBX < 2) {
    uVar16 = user_precision;
    if (user_precision == -1) {
      uVar16 = _iStack0000000000000010;
    }
    if (((longdouble)CONCAT28(uStack0000000000000008,pcVar27) < __LC44) ||
       (__LC45 < (longdouble)CONCAT28(uStack0000000000000008,pcVar27))) {
      if ((uVar16 < 0x13) || (scale_to != scale_none)) {
LAB_0010089f:
        iStack0000000000000010 = (int)uVar16;
        do {
          sVar3 = scale_to;
          iVar7 = grouping;
          pcVar19 = padding_buffer;
          iVar2 = padding_buffer_size;
          uStack0000000000000090 = 0x25;
          uVar17 = (ulong)round_style;
          if (grouping != 0) {
            uStack0000000000000091 = 0x27;
            uVar8 = 0x18;
            puVar21 = (undefined8 *)((long)&stack0x00000090 + 2);
            if (zero_padding_width != 0) goto LAB_00100d3d;
LAB_0010090a:
            if (dev_debug != false) goto LAB_00100d72;
LAB_0010091a:
            if (sVar3 == scale_none) goto LAB_00100da9;
LAB_00100923:
            if (sVar3 - scale_IEC < 2) {
              iStack0000000000000040 = 0x400;
              dVar1 = _LC16;
            }
            else {
              iStack0000000000000040 = 1000;
              dVar1 = _LC17;
            }
            lVar23 = (longdouble)CONCAT28(uStack0000000000000008,pcVar27);
            if (lVar23 < __LC44) {
              lVar23 = (longdouble)CONCAT28(uStack0000000000000008,pcVar27);
              uVar13 = 0;
              if (dev_debug != false) goto LAB_00100ff8;
LAB_0010099e:
              if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
              lVar11 = (long)((int)uVar13 * 3);
LAB_001009b4:
              if (user_precision <= lVar11) {
                lVar11 = user_precision;
              }
              iVar7 = (int)lVar11;
              if (iVar7 == 0) {
LAB_001011a2:
                lVar24 = (longdouble)(long)ROUND(lVar23 / __LC51) * __LC51;
                lVar23 = lVar23 - lVar24;
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
                  if ((longdouble)0 <= lVar23) goto LAB_00100a60;
                  break;
                case 3:
LAB_0010120e:
                  lVar26 = (longdouble)(long)ROUND(lVar23) + lVar24;
                  goto LAB_00100abb;
                case 4:
                  iVar7 = 0;
LAB_00100bc8:
                  if (lVar23 < (longdouble)0) {
                    lVar26 = (longdouble)(long)ROUND(lVar23 - (longdouble)__LC52);
                  }
                  else {
LAB_00100bd4:
                    lVar26 = (longdouble)(long)ROUND(lVar23 + (longdouble)__LC52);
                  }
                  goto LAB_00100a90;
                default:
                  uVar8 = FUN_00104126();
                  return uVar8;
                }
LAB_00100b80:
                lVar11 = (long)ROUND(-lVar23);
                lVar26 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -lVar23));
                goto LAB_00100a90;
              }
              iVar6 = iVar7 + -1;
              if (iVar6 == 0) {
                lVar25 = (longdouble)__LC1;
LAB_0010106c:
                lVar24 = (longdouble)(long)ROUND((lVar23 * lVar25) / __LC51) * __LC51;
                lVar23 = lVar23 * lVar25 - lVar24;
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
                  uVar8 = FUN_00104126();
                  return uVar8;
                }
                goto LAB_00100b80;
              }
              lVar25 = (longdouble)__LC1;
              lVar26 = lVar25;
              do {
                lVar26 = lVar26 * lVar25;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              lVar24 = (longdouble)(long)ROUND((lVar26 * lVar23) / __LC51) * __LC51;
              lVar23 = lVar26 * lVar23 - lVar24;
              switch(uVar17) {
              case 0:
                goto LAB_00100a60;
              case 1:
                goto LAB_00100b80;
              case 2:
                goto LAB_00100a40;
              case 3:
LAB_00100bf5:
                lVar26 = (longdouble)(long)ROUND(lVar23) + lVar24;
                break;
              case 4:
                goto LAB_00100bc8;
              default:
                uVar8 = FUN_00100aa9();
                return uVar8;
              }
LAB_00100a9d:
              iVar7 = iVar7 + -1;
              lVar23 = lVar25;
              if (iVar7 == 0) {
                lVar26 = lVar26 / lVar25;
              }
              else {
                do {
                  lVar23 = lVar23 * lVar25;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                lVar26 = lVar26 / lVar23;
              }
            }
            else {
              if (lVar23 <= __LC45) {
                uVar13 = 0;
                while( true ) {
                  lVar24 = -lVar23;
                  if ((longdouble)0 <= lVar23) {
                    lVar24 = lVar23;
                  }
                  if (lVar24 < (longdouble)iStack0000000000000040) break;
                  lVar23 = lVar23 / (longdouble)iStack0000000000000040;
                  uVar13 = (ulong)((int)uVar13 + 1);
                }
                if (dev_debug == false) goto LAB_0010099e;
LAB_00100ff8:
                local_10 = SUB108(lVar23,0);
                uStack_8 = (undefined2)((unkuint10)lVar23 >> 0x40);
                __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
                if (user_precision != -1) goto LAB_001009af;
LAB_00101050:
                lVar24 = -lVar23;
                if ((longdouble)0 <= lVar23) {
                  lVar24 = lVar23;
                }
                lVar25 = (longdouble)__LC1;
                if (lVar24 < lVar25) goto LAB_0010106c;
                goto LAB_001011a2;
              }
              if (dev_debug != false) {
                lVar23 = (longdouble)__LC18;
                uVar13 = 0;
                goto LAB_00100ff8;
              }
              if (user_precision != -1) {
                lVar23 = (longdouble)__LC18;
                lVar11 = 0;
                uVar13 = 0;
                goto LAB_001009b4;
              }
              lVar24 = __LC19;
              switch(uVar17) {
              case 0:
                lVar23 = (longdouble)__LC18;
                uVar13 = 0;
                iVar7 = 0;
                break;
              case 1:
                lVar23 = (longdouble)__LC18;
                uVar13 = 0;
                iVar7 = 0;
                goto LAB_00100b80;
              case 2:
                iVar7 = 0;
                uVar13 = 0;
                lVar23 = (longdouble)__LC18;
                break;
              case 3:
                lVar23 = (longdouble)__LC18;
                uVar13 = 0;
                goto LAB_0010120e;
              case 4:
                lVar23 = (longdouble)__LC18;
                iVar7 = 0;
                uVar13 = 0;
                goto LAB_00100bd4;
              default:
                lVar26 = (longdouble)0;
                uVar13 = 0;
                uVar20 = 0;
                goto LAB_00100b05;
              }
LAB_00100a60:
              lVar26 = (longdouble)(long)ROUND(lVar23);
              if (lVar26 < lVar23) {
                lVar26 = (longdouble)((long)ROUND(lVar23) + 1);
              }
LAB_00100a90:
              lVar26 = lVar26 + lVar24;
              if (iVar7 != 0) {
                lVar25 = (longdouble)__LC1;
                goto LAB_00100a9d;
              }
            }
LAB_00100abb:
            lVar23 = (longdouble)dVar1;
            if (lVar26 < (longdouble)0) {
              lVar24 = -lVar26;
              if (lVar23 <= lVar24) goto LAB_001010d4;
LAB_001010fa:
              if (lVar24 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
              uVar20 = 0;
              uVar12 = 0;
            }
            else {
              if (lVar23 <= lVar26) {
LAB_001010d4:
                lVar26 = lVar26 / lVar23;
                uVar13 = (ulong)((int)uVar13 + 1);
                lVar23 = (longdouble)0;
                if (!NAN(lVar26) && !NAN(lVar23)) {
                  if (lVar26 == lVar23) goto LAB_00101112;
                  if (lVar26 <= lVar23) {
                    lVar24 = -lVar26;
                    goto LAB_001010fa;
                  }
                }
              }
              else if (lVar26 == (longdouble)0) goto LAB_00101112;
              if ((longdouble)__LC1 <= lVar26) goto LAB_00101112;
LAB_00100af3:
              bVar22 = (int)uVar13 != 0;
              uVar20 = (ulong)bVar22;
              uVar12 = (uint)bVar22;
            }
            if (dev_debug != false) {
              local_10 = SUB108(lVar26,0);
              uStack_8 = (undefined2)((unkuint10)lVar26 >> 0x40);
              __fprintf_chk(dVar1,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
              uVar20 = (ulong)uVar12;
            }
LAB_00100b05:
            puVar18 = &DAT_001025c3;
            *puVar21 = 0x73257325664c2a2e;
            if (user_precision != -1) {
              uVar20 = user_precision & 0xffffffff;
            }
            *(undefined4 *)((long)puVar21 + 7) = 0x732573;
            pcVar14 = suffix;
            if (suffix == (char *)0x0) {
              pcVar14 = "";
            }
            uVar12 = (uint)uVar13;
            if (sVar3 != scale_IEC_I) {
              if (uVar12 == 1) {
                uVar8 = FUN_00100c18();
                return uVar8;
              }
LAB_00100b51:
              if (10 < uVar12) {
                uVar8 = FUN_00100c18(user_precision,puVar18);
                return uVar8;
              }
              uVar8 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar13]))();
              return uVar8;
            }
            if (uVar12 != 0) {
              puVar18 = &_LC20;
              goto LAB_00100b51;
            }
            local_10 = pcVar14;
            iVar7 = __snprintf_chk(pcVar19,iVar2,2,0xffffffffffffffff,&stack0x00000090,uVar20,
                                   SUB108(lVar26,0),(short)((unkuint10)lVar26 >> 0x40),&_LC15,0x25c3
                                  );
            goto LAB_00100c48;
          }
          uVar8 = 0x19;
          puVar21 = (undefined8 *)((long)&stack0x00000090 + 1);
          if (zero_padding_width == 0) goto LAB_0010090a;
LAB_00100d3d:
          uStack_8 = 0xd58;
          uStack_6 = 0x10;
          iVar6 = __sprintf_chk(puVar21,2,uVar8);
          puVar21 = (undefined8 *)((long)puVar21 + (long)iVar6);
          if (dev_debug == false) goto LAB_0010091a;
LAB_00100d72:
          uStack_8 = 0xd94;
          uStack_6 = 0x10;
          fwrite("double_to_human:\n",1,0x11,_stderr);
          if (sVar3 != scale_none) goto LAB_00100923;
LAB_00100da9:
          uVar5 = uStack_8;
          if (iStack0000000000000010 == 0) {
            lVar24 = (longdouble)
                     (long)ROUND((longdouble)CONCAT28(uStack0000000000000008,pcVar27) / __LC51) *
                     __LC51;
            lVar23 = (longdouble)CONCAT28(uStack0000000000000008,pcVar27) - lVar24;
            switch(uVar17) {
            case 0:
              goto switchD_001012e1_caseD_0;
            case 1:
              goto switchD_001012e1_caseD_1;
            case 2:
              goto LAB_00100e38;
            case 3:
              lVar25 = (longdouble)(long)ROUND(lVar23) + lVar24;
              break;
            case 4:
              goto LAB_00100fa0;
            default:
              lVar25 = (longdouble)0;
            }
            goto LAB_00100eab;
          }
          iVar6 = iStack0000000000000010 + -1;
          lVar25 = (longdouble)__LC1;
          lVar23 = lVar25;
          if (iVar6 == 0) {
            lVar25 = (longdouble)CONCAT28(uStack0000000000000008,pcVar27) * lVar25;
            lVar24 = (longdouble)(long)ROUND(lVar25 / __LC51) * __LC51;
            lVar23 = lVar25 - lVar24;
            switch(uVar17) {
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
            lVar23 = lVar23 * lVar25;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          lVar23 = (longdouble)CONCAT28(uStack0000000000000008,pcVar27) * lVar23;
          lVar24 = (longdouble)(long)ROUND(lVar23 / __LC51) * __LC51;
          lVar23 = lVar23 - lVar24;
          switch(uVar17) {
          case 0:
            goto switchD_001012e1_caseD_0;
          case 1:
switchD_001012e1_caseD_1:
            lVar11 = (long)ROUND(-lVar23);
            lVar25 = (longdouble)(long)-(lVar11 + (ulong)((longdouble)lVar11 < -lVar23));
            break;
          case 2:
LAB_00100e38:
            if (lVar23 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
            lVar25 = (longdouble)(long)ROUND(lVar23);
            if (lVar25 < lVar23) {
              lVar25 = (longdouble)((long)ROUND(lVar23) + 1);
            }
            break;
          case 3:
            lVar25 = (longdouble)(long)ROUND(lVar23) + lVar24;
            goto code_r0x00100e8f;
          case 4:
LAB_00100fa0:
            if (lVar23 < (longdouble)0) {
              lVar25 = (longdouble)(long)ROUND(lVar23 - (longdouble)__LC52);
            }
            else {
              lVar25 = (longdouble)(long)ROUND(lVar23 + (longdouble)__LC52);
            }
            break;
          default:
            uVar8 = FUN_00100e8f();
            return uVar8;
          }
          lVar25 = lVar25 + lVar24;
          if (iStack0000000000000010 != 0) {
code_r0x00100e8f:
            lVar24 = (longdouble)__LC1;
            iVar6 = iStack0000000000000010 + -1;
            lVar23 = lVar24;
            if (iVar6 == 0) {
              lVar25 = lVar25 / lVar24;
            }
            else {
              do {
                lVar23 = lVar23 * lVar24;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              lVar25 = lVar25 / lVar23;
            }
          }
LAB_00100eab:
          uStack_8 = (undefined2)((unkuint10)lVar25 >> 0x40);
          uVar4 = uStack_8;
          local_10 = SUB108(lVar25,0);
          pcVar14 = local_10;
          if (dev_debug != false) {
            pcVar15 = "  no scaling, returning value: %.*Lf\n";
            if (iVar7 != 0) {
              pcVar15 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
            }
            __fprintf_chk(_stderr,2,pcVar15,uVar16 & 0xffffffff);
            uVar17 = CONCAT62(uStack_6,uStack_8);
            uVar5 = uStack_8;
          }
          uStack_8 = uVar5;
          *(undefined4 *)puVar21 = 0x664c2a2e;
          *(undefined4 *)((long)puVar21 + 3) = 0x732566;
          local_10 = suffix;
          if (suffix == (char *)0x0) {
            local_10 = "";
          }
          iVar7 = __snprintf_chk(pcVar19,iVar2,2,0xffffffffffffffff,&stack0x00000090,
                                 uVar16 & 0xffffffff,pcVar14,uVar4);
LAB_00100c48:
          if ((iVar7 < 0) ||
             (lVar11 = (long)iVar7 - (padding_buffer_size + -1),
             SBORROW8((long)iVar7,padding_buffer_size + -1))) {
            uStack_8 = 0x1a91;
            uStack_6 = 0x10;
            uVar8 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
            uStack_8 = uStack0000000000000008;
            uStack_6 = uStack000000000000000a;
            register0x00000020 = (BADSPACEBASE *)&local_10;
            local_10 = pcVar27;
            error(1,0,uVar8);
            goto LAB_00101726;
          }
          if (lVar11 < 1) goto LAB_001014cb;
          uStack_8 = 0xc90;
          uStack_6 = 0x10;
          padding_buffer =
               (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar11,0xffffffffffffffff,1);
        } while( true );
      }
      if (inval_style != inval_ignore) {
LAB_00101574:
        uStack_8 = 0x1587;
        uStack_6 = 0x10;
        uVar8 = dcgettext(0,
                          "value/precision too large to be printed: \'%Lg/%zu\' (consider using --to)"
                          ,5);
        uStack_8 = uStack0000000000000008;
        local_10 = pcVar27;
        error(iVar7,0,uVar8,uVar16);
      }
    }
    else {
      lVar23 = (longdouble)CONCAT28(uStack0000000000000008,pcVar27);
      iVar6 = 0;
      while( true ) {
        lVar24 = -lVar23;
        if ((longdouble)0 <= lVar23) {
          lVar24 = lVar23;
        }
        if (lVar24 < (longdouble)__LC1) break;
        lVar23 = lVar23 / (longdouble)__LC1;
        iVar6 = iVar6 + 1;
      }
      if ((scale_to == scale_none) && (0x12 < (long)iVar6 + uVar16)) {
        if (inval_style != inval_ignore) {
          pcVar19 = "value too large to be printed: \'%Lg\' (consider using --to)";
          if (uVar16 != 0) goto LAB_00101574;
LAB_001013d7:
          uStack_8 = 0x13de;
          uStack_6 = 0x10;
          uVar8 = dcgettext(0,pcVar19,5);
          uStack_8 = uStack0000000000000008;
          local_10 = pcVar27;
          error(iVar7,0,uVar8);
        }
      }
      else {
        if (iVar6 < 0x21) goto LAB_0010089f;
        if (inval_style != inval_ignore) {
          pcVar19 = "value too large to be printed: \'%Lg\' (cannot handle values > 999Q)";
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
  if (dev_debug != false) {
    uStack_8 = 0x1786;
    uStack_6 = 0x10;
    uVar8 = quote(padding_buffer);
    uStack_8 = uStack0000000000000008;
    local_10 = pcVar27;
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
        uVar16 = padding_width - iVar7;
        uVar17 = uVar16;
        if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
LAB_00101700:
        do {
          pcVar27 = _stdout->_IO_write_ptr;
          if (pcVar27 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar27 + 1;
            *pcVar27 = ' ';
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
        pcVar27 = _stdout->_IO_write_ptr;
        if (pcVar27 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar27 + 1;
          *pcVar27 = ' ';
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
  double dVar1;
  idx_t iVar2;
  scale_type sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  uint unaff_EBX;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  char *pcVar17;
  ulong uVar18;
  char *unaff_R12;
  undefined8 *puVar19;
  long in_FS_OFFSET;
  bool bVar20;
  longdouble lVar21;
  longdouble lVar22;
  longdouble lVar23;
  longdouble lVar24;
  char *pcVar25;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  int iStack0000000000000010;
  int iStack0000000000000040;
  longdouble in_stack_00000070;
  undefined1 uStack0000000000000090;
  undefined1 uStack0000000000000091;
  char *pcStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
  iVar7 = conv_exit_code;
  uStack0000000000000008 = (undefined2)((unkuint10)in_stack_00000070 >> 0x40);
  pcVar25 = SUB108(in_stack_00000070,0);
  if (inval_style != inval_ignore) {
    uStack_8 = 0x1614;
    uStack_6 = 0x10;
    quote();
    uStack_8 = 0x1626;
    uStack_6 = 0x10;
    uVar9 = dcgettext(0);
    uStack_8 = 0x1638;
    uStack_6 = 0x10;
    error(iVar7,0,uVar9);
  }
  iVar7 = conv_exit_code;
  if ((from_unit_size != 1) || (to_unit_size != 1)) {
    lVar21 = (longdouble)(long)from_unit_size;
    if ((long)from_unit_size < 0) {
      lVar21 = lVar21 + (longdouble)__LC43;
    }
    lVar22 = (longdouble)(long)to_unit_size;
    if ((long)to_unit_size < 0) {
      lVar22 = lVar22 + (longdouble)__LC43;
    }
    lVar22 = (in_stack_00000070 * lVar21) / lVar22;
    pcVar25 = SUB108(lVar22,0);
    uStack0000000000000008 = (undefined2)((unkuint10)lVar22 >> 0x40);
  }
  if (unaff_EBX < 2) {
    uVar14 = user_precision;
    if (user_precision == -1) {
      uVar14 = _iStack0000000000000010;
    }
    if (((longdouble)CONCAT28(uStack0000000000000008,pcVar25) < __LC44) ||
       (__LC45 < (longdouble)CONCAT28(uStack0000000000000008,pcVar25))) {
      if ((uVar14 < 0x13) || (scale_to != scale_none)) {
LAB_0010089f:
        iStack0000000000000010 = (int)uVar14;
        do {
          sVar3 = scale_to;
          iVar7 = grouping;
          pcVar17 = padding_buffer;
          iVar2 = padding_buffer_size;
          uStack0000000000000090 = 0x25;
          uVar15 = (ulong)round_style;
          if (grouping != 0) {
            uStack0000000000000091 = 0x27;
            uVar9 = 0x18;
            puVar19 = (undefined8 *)((long)&stack0x00000090 + 2);
            if (zero_padding_width != 0) goto LAB_00100d3d;
LAB_0010090a:
            if (dev_debug != false) goto LAB_00100d72;
LAB_0010091a:
            if (sVar3 == scale_none) goto LAB_00100da9;
LAB_00100923:
            if (sVar3 - scale_IEC < 2) {
              iStack0000000000000040 = 0x400;
              dVar1 = _LC16;
            }
            else {
              iStack0000000000000040 = 1000;
              dVar1 = _LC17;
            }
            lVar21 = (longdouble)CONCAT28(uStack0000000000000008,pcVar25);
            if (lVar21 < __LC44) {
              lVar21 = (longdouble)CONCAT28(uStack0000000000000008,pcVar25);
              uVar11 = 0;
              if (dev_debug != false) goto LAB_00100ff8;
LAB_0010099e:
              if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
              lVar8 = (long)((int)uVar11 * 3);
LAB_001009b4:
              if (user_precision <= lVar8) {
                lVar8 = user_precision;
              }
              iVar7 = (int)lVar8;
              if (iVar7 == 0) {
LAB_001011a2:
                lVar22 = (longdouble)(long)ROUND(lVar21 / __LC51) * __LC51;
                lVar21 = lVar21 - lVar22;
                switch(uVar15) {
                case 0:
                  iVar7 = 0;
                  goto LAB_00100a60;
                case 1:
                  iVar7 = 0;
                  break;
                case 2:
                  iVar7 = 0;
LAB_00100a40:
                  if ((longdouble)0 <= lVar21) goto LAB_00100a60;
                  break;
                case 3:
LAB_0010120e:
                  lVar24 = (longdouble)(long)ROUND(lVar21) + lVar22;
                  goto LAB_00100abb;
                case 4:
                  iVar7 = 0;
LAB_00100bc8:
                  if (lVar21 < (longdouble)0) {
                    lVar24 = (longdouble)(long)ROUND(lVar21 - (longdouble)__LC52);
                  }
                  else {
LAB_00100bd4:
                    lVar24 = (longdouble)(long)ROUND(lVar21 + (longdouble)__LC52);
                  }
                  goto LAB_00100a90;
                default:
                  uVar9 = FUN_00104126();
                  return uVar9;
                }
LAB_00100b80:
                lVar8 = (long)ROUND(-lVar21);
                lVar24 = (longdouble)(long)-(lVar8 + (ulong)((longdouble)lVar8 < -lVar21));
                goto LAB_00100a90;
              }
              iVar6 = iVar7 + -1;
              if (iVar6 == 0) {
                lVar23 = (longdouble)__LC1;
LAB_0010106c:
                lVar22 = (longdouble)(long)ROUND((lVar21 * lVar23) / __LC51) * __LC51;
                lVar21 = lVar21 * lVar23 - lVar22;
                iVar7 = 1;
                switch(uVar15) {
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
              lVar23 = (longdouble)__LC1;
              lVar24 = lVar23;
              do {
                lVar24 = lVar24 * lVar23;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              lVar22 = (longdouble)(long)ROUND((lVar24 * lVar21) / __LC51) * __LC51;
              lVar21 = lVar24 * lVar21 - lVar22;
              switch(uVar15) {
              case 0:
                goto LAB_00100a60;
              case 1:
                goto LAB_00100b80;
              case 2:
                goto LAB_00100a40;
              case 3:
LAB_00100bf5:
                lVar24 = (longdouble)(long)ROUND(lVar21) + lVar22;
                break;
              case 4:
                goto LAB_00100bc8;
              default:
                uVar9 = FUN_00100aa9();
                return uVar9;
              }
LAB_00100a9d:
              iVar7 = iVar7 + -1;
              lVar21 = lVar23;
              if (iVar7 == 0) {
                lVar24 = lVar24 / lVar23;
              }
              else {
                do {
                  lVar21 = lVar21 * lVar23;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                lVar24 = lVar24 / lVar21;
              }
            }
            else {
              if (lVar21 <= __LC45) {
                uVar11 = 0;
                while( true ) {
                  lVar22 = -lVar21;
                  if ((longdouble)0 <= lVar21) {
                    lVar22 = lVar21;
                  }
                  if (lVar22 < (longdouble)iStack0000000000000040) break;
                  lVar21 = lVar21 / (longdouble)iStack0000000000000040;
                  uVar11 = (ulong)((int)uVar11 + 1);
                }
                if (dev_debug == false) goto LAB_0010099e;
LAB_00100ff8:
                pcStack_10 = SUB108(lVar21,0);
                uStack_8 = (undefined2)((unkuint10)lVar21 >> 0x40);
                __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
                if (user_precision != -1) goto LAB_001009af;
LAB_00101050:
                lVar22 = -lVar21;
                if ((longdouble)0 <= lVar21) {
                  lVar22 = lVar21;
                }
                lVar23 = (longdouble)__LC1;
                if (lVar22 < lVar23) goto LAB_0010106c;
                goto LAB_001011a2;
              }
              if (dev_debug != false) {
                lVar21 = (longdouble)__LC18;
                uVar11 = 0;
                goto LAB_00100ff8;
              }
              if (user_precision != -1) {
                lVar21 = (longdouble)__LC18;
                lVar8 = 0;
                uVar11 = 0;
                goto LAB_001009b4;
              }
              lVar22 = __LC19;
              switch(uVar15) {
              case 0:
                lVar21 = (longdouble)__LC18;
                uVar11 = 0;
                iVar7 = 0;
                break;
              case 1:
                lVar21 = (longdouble)__LC18;
                uVar11 = 0;
                iVar7 = 0;
                goto LAB_00100b80;
              case 2:
                iVar7 = 0;
                uVar11 = 0;
                lVar21 = (longdouble)__LC18;
                break;
              case 3:
                lVar21 = (longdouble)__LC18;
                uVar11 = 0;
                goto LAB_0010120e;
              case 4:
                lVar21 = (longdouble)__LC18;
                iVar7 = 0;
                uVar11 = 0;
                goto LAB_00100bd4;
              default:
                lVar24 = (longdouble)0;
                uVar11 = 0;
                uVar18 = 0;
                goto LAB_00100b05;
              }
LAB_00100a60:
              lVar24 = (longdouble)(long)ROUND(lVar21);
              if (lVar24 < lVar21) {
                lVar24 = (longdouble)((long)ROUND(lVar21) + 1);
              }
LAB_00100a90:
              lVar24 = lVar24 + lVar22;
              if (iVar7 != 0) {
                lVar23 = (longdouble)__LC1;
                goto LAB_00100a9d;
              }
            }
LAB_00100abb:
            lVar21 = (longdouble)dVar1;
            if (lVar24 < (longdouble)0) {
              lVar22 = -lVar24;
              if (lVar21 <= lVar22) goto LAB_001010d4;
LAB_001010fa:
              if (lVar22 < (longdouble)__LC1) goto LAB_00100af3;
LAB_00101112:
              uVar18 = 0;
              uVar10 = 0;
            }
            else {
              if (lVar21 <= lVar24) {
LAB_001010d4:
                lVar24 = lVar24 / lVar21;
                uVar11 = (ulong)((int)uVar11 + 1);
                lVar21 = (longdouble)0;
                if (!NAN(lVar24) && !NAN(lVar21)) {
                  if (lVar24 == lVar21) goto LAB_00101112;
                  if (lVar24 <= lVar21) {
                    lVar22 = -lVar24;
                    goto LAB_001010fa;
                  }
                }
              }
              else if (lVar24 == (longdouble)0) goto LAB_00101112;
              if ((longdouble)__LC1 <= lVar24) goto LAB_00101112;
LAB_00100af3:
              bVar20 = (int)uVar11 != 0;
              uVar18 = (ulong)bVar20;
              uVar10 = (uint)bVar20;
            }
            if (dev_debug != false) {
              pcStack_10 = SUB108(lVar24,0);
              uStack_8 = (undefined2)((unkuint10)lVar24 >> 0x40);
              __fprintf_chk(dVar1,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
              uVar18 = (ulong)uVar10;
            }
LAB_00100b05:
            puVar16 = &DAT_001025c3;
            *puVar19 = 0x73257325664c2a2e;
            if (user_precision != -1) {
              uVar18 = user_precision & 0xffffffff;
            }
            *(undefined4 *)((long)puVar19 + 7) = 0x732573;
            pcVar12 = suffix;
            if (suffix == (char *)0x0) {
              pcVar12 = "";
            }
            uVar10 = (uint)uVar11;
            if (sVar3 != scale_IEC_I) {
              if (uVar10 == 1) {
                uVar9 = FUN_00100c18();
                return uVar9;
              }
LAB_00100b51:
              if (10 < uVar10) {
                uVar9 = FUN_00100c18(user_precision,puVar16);
                return uVar9;
              }
              uVar9 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar11]))();
              return uVar9;
            }
            if (uVar10 != 0) {
              puVar16 = &_LC20;
              goto LAB_00100b51;
            }
            pcStack_10 = pcVar12;
            iVar7 = __snprintf_chk(pcVar17,iVar2,2,0xffffffffffffffff,&stack0x00000090,uVar18,
                                   SUB108(lVar24,0),(short)((unkuint10)lVar24 >> 0x40),&_LC15,0x25c3
                                  );
            goto LAB_00100c48;
          }
          uVar9 = 0x19;
          puVar19 = (undefined8 *)((long)&stack0x00000090 + 1);
          if (zero_padding_width == 0) goto LAB_0010090a;
LAB_00100d3d:
          uStack_8 = 0xd58;
          uStack_6 = 0x10;
          iVar6 = __sprintf_chk(puVar19,2,uVar9);
          puVar19 = (undefined8 *)((long)puVar19 + (long)iVar6);
          if (dev_debug == false) goto LAB_0010091a;
LAB_00100d72:
          uStack_8 = 0xd94;
          uStack_6 = 0x10;
          fwrite("double_to_human:\n",1,0x11,_stderr);
          if (sVar3 != scale_none) goto LAB_00100923;
LAB_00100da9:
          uVar5 = uStack_8;
          if (iStack0000000000000010 == 0) {
            lVar22 = (longdouble)
                     (long)ROUND((longdouble)CONCAT28(uStack0000000000000008,pcVar25) / __LC51) *
                     __LC51;
            lVar21 = (longdouble)CONCAT28(uStack0000000000000008,pcVar25) - lVar22;
            switch(uVar15) {
            case 0:
              goto switchD_001012e1_caseD_0;
            case 1:
              goto switchD_001012e1_caseD_1;
            case 2:
              goto LAB_00100e38;
            case 3:
              lVar23 = (longdouble)(long)ROUND(lVar21) + lVar22;
              break;
            case 4:
              goto LAB_00100fa0;
            default:
              lVar23 = (longdouble)0;
            }
            goto LAB_00100eab;
          }
          iVar6 = iStack0000000000000010 + -1;
          lVar23 = (longdouble)__LC1;
          lVar21 = lVar23;
          if (iVar6 == 0) {
            lVar23 = (longdouble)CONCAT28(uStack0000000000000008,pcVar25) * lVar23;
            lVar22 = (longdouble)(long)ROUND(lVar23 / __LC51) * __LC51;
            lVar21 = lVar23 - lVar22;
            switch(uVar15) {
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
            lVar21 = lVar21 * lVar23;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          lVar21 = (longdouble)CONCAT28(uStack0000000000000008,pcVar25) * lVar21;
          lVar22 = (longdouble)(long)ROUND(lVar21 / __LC51) * __LC51;
          lVar21 = lVar21 - lVar22;
          switch(uVar15) {
          case 0:
            goto switchD_001012e1_caseD_0;
          case 1:
switchD_001012e1_caseD_1:
            lVar8 = (long)ROUND(-lVar21);
            lVar23 = (longdouble)(long)-(lVar8 + (ulong)((longdouble)lVar8 < -lVar21));
            break;
          case 2:
LAB_00100e38:
            if (lVar21 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
            lVar23 = (longdouble)(long)ROUND(lVar21);
            if (lVar23 < lVar21) {
              lVar23 = (longdouble)((long)ROUND(lVar21) + 1);
            }
            break;
          case 3:
            lVar23 = (longdouble)(long)ROUND(lVar21) + lVar22;
            goto code_r0x00100e8f;
          case 4:
LAB_00100fa0:
            if (lVar21 < (longdouble)0) {
              lVar23 = (longdouble)(long)ROUND(lVar21 - (longdouble)__LC52);
            }
            else {
              lVar23 = (longdouble)(long)ROUND(lVar21 + (longdouble)__LC52);
            }
            break;
          default:
            uVar9 = FUN_00100e8f();
            return uVar9;
          }
          lVar23 = lVar23 + lVar22;
          if (iStack0000000000000010 != 0) {
code_r0x00100e8f:
            lVar22 = (longdouble)__LC1;
            iVar6 = iStack0000000000000010 + -1;
            lVar21 = lVar22;
            if (iVar6 == 0) {
              lVar23 = lVar23 / lVar22;
            }
            else {
              do {
                lVar21 = lVar21 * lVar22;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              lVar23 = lVar23 / lVar21;
            }
          }
LAB_00100eab:
          uStack_8 = (undefined2)((unkuint10)lVar23 >> 0x40);
          uVar4 = uStack_8;
          pcStack_10 = SUB108(lVar23,0);
          pcVar12 = pcStack_10;
          if (dev_debug != false) {
            pcVar13 = "  no scaling, returning value: %.*Lf\n";
            if (iVar7 != 0) {
              pcVar13 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
            }
            __fprintf_chk(_stderr,2,pcVar13,uVar14 & 0xffffffff);
            uVar15 = CONCAT62(uStack_6,uStack_8);
            uVar5 = uStack_8;
          }
          uStack_8 = uVar5;
          *(undefined4 *)puVar19 = 0x664c2a2e;
          *(undefined4 *)((long)puVar19 + 3) = 0x732566;
          pcStack_10 = suffix;
          if (suffix == (char *)0x0) {
            pcStack_10 = "";
          }
          iVar7 = __snprintf_chk(pcVar17,iVar2,2,0xffffffffffffffff,&stack0x00000090,
                                 uVar14 & 0xffffffff,pcVar12,uVar4);
LAB_00100c48:
          if ((iVar7 < 0) ||
             (lVar8 = (long)iVar7 - (padding_buffer_size + -1),
             SBORROW8((long)iVar7,padding_buffer_size + -1))) {
            uStack_8 = 0x1a91;
            uStack_6 = 0x10;
            uVar9 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
            uStack_8 = uStack0000000000000008;
            uStack_6 = uStack000000000000000a;
            register0x00000020 = (BADSPACEBASE *)&pcStack_10;
            pcStack_10 = pcVar25;
            error(1,0,uVar9);
            goto LAB_00101726;
          }
          if (lVar8 < 1) goto LAB_001014cb;
          uStack_8 = 0xc90;
          uStack_6 = 0x10;
          padding_buffer =
               (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar8,0xffffffffffffffff,1);
        } while( true );
      }
      if (inval_style != inval_ignore) {
LAB_00101574:
        uStack_8 = 0x1587;
        uStack_6 = 0x10;
        uVar9 = dcgettext(0,
                          "value/precision too large to be printed: \'%Lg/%zu\' (consider using --to)"
                          ,5);
        uStack_8 = uStack0000000000000008;
        pcStack_10 = pcVar25;
        error(iVar7,0,uVar9,uVar14);
      }
    }
    else {
      lVar21 = (longdouble)CONCAT28(uStack0000000000000008,pcVar25);
      iVar6 = 0;
      while( true ) {
        lVar22 = -lVar21;
        if ((longdouble)0 <= lVar21) {
          lVar22 = lVar21;
        }
        if (lVar22 < (longdouble)__LC1) break;
        lVar21 = lVar21 / (longdouble)__LC1;
        iVar6 = iVar6 + 1;
      }
      if ((scale_to == scale_none) && (0x12 < (long)iVar6 + uVar14)) {
        if (inval_style != inval_ignore) {
          pcVar17 = "value too large to be printed: \'%Lg\' (consider using --to)";
          if (uVar14 != 0) goto LAB_00101574;
LAB_001013d7:
          uStack_8 = 0x13de;
          uStack_6 = 0x10;
          uVar9 = dcgettext(0,pcVar17,5);
          uStack_8 = uStack0000000000000008;
          pcStack_10 = pcVar25;
          error(iVar7,0,uVar9);
        }
      }
      else {
        if (iVar6 < 0x21) goto LAB_0010089f;
        if (inval_style != inval_ignore) {
          pcVar17 = "value too large to be printed: \'%Lg\' (cannot handle values > 999Q)";
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
  if (dev_debug != false) {
    uStack_8 = 0x1786;
    uStack_6 = 0x10;
    uVar9 = quote(padding_buffer);
    uStack_8 = uStack0000000000000008;
    pcStack_10 = pcVar25;
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
        uVar14 = padding_width - iVar7;
        uVar15 = uVar14;
        if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
LAB_00101700:
        do {
          pcVar25 = _stdout->_IO_write_ptr;
          if (pcVar25 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar25 + 1;
            *pcVar25 = ' ';
          }
          else {
            uStack_8 = 0x185a;
            uStack_6 = 0x10;
            __overflow(_stdout,0x20);
          }
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        goto LAB_00101726;
      }
      goto joined_r0x001019e5;
    }
    if (-iVar7 <= padding_width) goto joined_r0x001019e5;
    uVar14 = padding_width + iVar7;
    if (format_str_prefix != (char *)0x0) {
LAB_001016e0:
      uStack_8 = 0x16ec;
      uStack_6 = 0x10;
      fputs_unlocked(format_str_prefix,_stdout);
    }
    uVar15 = uVar14;
    if (0 < (long)uVar14) goto LAB_00101700;
LAB_00101726:
    *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
    fputs_unlocked(padding_buffer,_stdout);
    if ((long)uVar15 < 0) {
      do {
        pcVar25 = _stdout->_IO_write_ptr;
        if (pcVar25 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar25 + 1;
          *pcVar25 = ' ';
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x101778;
          __overflow(_stdout,0x20);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0);
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
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  ulong unaff_RBX;
  int unaff_EBP;
  undefined *puVar12;
  ulong uVar13;
  idx_t unaff_R12;
  scale_type unaff_R13D;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar14;
  ushort in_FPUControlWord;
  longdouble lVar15;
  longdouble lVar16;
  longdouble lVar17;
  longdouble lVar18;
  char *unaff_retaddr;
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
  char *pcStack_10;
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
    pcStack_10 = SUB108(lVar15,0);
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
  pcVar8 = suffix;
  if (suffix == (char *)0x0) {
    pcVar8 = "";
  }
  uVar6 = (uint)uVar11;
  if (unaff_R13D == scale_IEC_I) {
    if (uVar6 == 0) {
      pcStack_10 = pcVar8;
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
          register0x00000020 = (BADSPACEBASE *)&pcStack_10;
          pcStack_10 = unaff_retaddr;
          error(1,0,uVar5);
          goto LAB_00101726;
        }
        if (lVar9 < 1) {
          if (dev_debug != false) {
            uStack_8 = 0x1786;
            uStack_6 = 0x10;
            uVar5 = quote(padding_buffer);
            uStack_8 = uStack0000000000000008;
            pcStack_10 = unaff_retaddr;
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
                    pcVar8 = _stdout->_IO_write_ptr;
                    if (pcVar8 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar8 + 1;
                      *pcVar8 = ' ';
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
                    pcVar8 = _stdout->_IO_write_ptr;
                    if (pcVar8 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar8 + 1;
                      *pcVar8 = ' ';
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
        if (dev_debug != false) {
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
        if (unaff_R13D != scale_none) goto LAB_00100923;
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
        pcStack_10 = SUB108(lVar15,0);
        pcVar8 = pcStack_10;
        if (dev_debug != false) {
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
        pcStack_10 = suffix;
        if (suffix == (char *)0x0) {
          pcStack_10 = "";
        }
        iVar3 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,
                               pcVar8,uVar1);
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
  if (unaff_R13D - scale_IEC < 2) {
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
    if (dev_debug != false) {
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
  if (dev_debug == false) {
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
    pcStack_10 = SUB108(lVar17,0);
    uStack_8 = (undefined2)((unkuint10)lVar17 >> 0x40);
    _iStack0000000000000040 = CONCAT44(uStack0000000000000044,(int)uVar11);
    __fprintf_chk(uVar5,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
    uVar11 = _iStack0000000000000040 & 0xffffffff;
    if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
    uVar4 = (ulong)((int)uVar11 * 3);
LAB_001009b4:
    if (user_precision <= (long)uVar4) {
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
  scale_type sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  ulong unaff_RBX;
  int unaff_EBP;
  undefined *puVar13;
  int in_R9D;
  ulong uVar14;
  idx_t unaff_R12;
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
  char *unaff_retaddr;
  undefined2 uStack0000000000000008;
  undefined6 uStack000000000000000a;
  undefined8 in_stack_00000028;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  char *pcStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
code_r0x0010186b:
  in_ST1 = in_ST1 / in_ST0;
LAB_00100eab:
  uVar4 = uStack_8;
  uStack_8 = (undefined2)((unkuint10)in_ST1 >> 0x40);
  uVar3 = uStack_8;
  pcStack_10 = SUB108(in_ST1,0);
  pcVar9 = pcStack_10;
  if (param_2 != '\0') {
    pcVar11 = "  no scaling, returning value: %.*Lf\n";
    if (in_R9D != 0) {
      pcVar11 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
    }
    __fprintf_chk(_stderr,2,pcVar11,unaff_EBP);
    unaff_RBX = CONCAT62(uStack_6,uStack_8);
    uVar4 = uStack_8;
  }
  uStack_8 = uVar4;
  *(undefined4 *)unaff_R15 = 0x664c2a2e;
  *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
  pcStack_10 = suffix;
  if (suffix == (char *)0x0) {
    pcStack_10 = "";
  }
  iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,unaff_EBP,pcVar9
                         ,uVar3);
  do {
    if ((iVar6 < 0) ||
       (lVar10 = (long)iVar6 - (padding_buffer_size + -1),
       SBORROW8((long)iVar6,padding_buffer_size + -1))) {
      uStack_8 = 0x1a91;
      uStack_6 = 0x10;
      uVar8 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
      uStack_8 = uStack0000000000000008;
      uStack_6 = uStack000000000000000a;
      register0x00000020 = (BADSPACEBASE *)&pcStack_10;
      pcStack_10 = unaff_retaddr;
      error(1,0,uVar8);
      goto LAB_00101726;
    }
    if (lVar10 < 1) {
      if (dev_debug != false) {
        uStack_8 = 0x1786;
        uStack_6 = 0x10;
        uVar8 = quote(padding_buffer);
        uStack_8 = uStack0000000000000008;
        pcStack_10 = unaff_retaddr;
        __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar8);
      }
      if (padding_width != 0) {
        uStack_8 = 0x16a8;
        uStack_6 = 0x10;
        iVar6 = gnu_mbswidth(padding_buffer,3);
        if (-1 < iVar6) {
          if (padding_width < 0) {
            if (padding_width < -iVar6) {
              uVar12 = padding_width + iVar6;
              if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
              goto LAB_001016ec;
            }
          }
          else if (iVar6 < padding_width) {
            uVar12 = padding_width - iVar6;
            unaff_RBX = uVar12;
            if (format_str_prefix == (char *)0x0) goto LAB_00101700;
LAB_001016e0:
            uStack_8 = 0x16ec;
            uStack_6 = 0x10;
            fputs_unlocked(format_str_prefix,_stdout);
LAB_001016ec:
            unaff_RBX = uVar12;
            if (0 < (long)uVar12) {
LAB_00101700:
              do {
                pcVar9 = _stdout->_IO_write_ptr;
                if (pcVar9 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar9 + 1;
                  *pcVar9 = ' ';
                }
                else {
                  uStack_8 = 0x185a;
                  uStack_6 = 0x10;
                  __overflow(_stdout,0x20);
                }
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
LAB_00101726:
            *(undefined8 *)((long)register0x00000020 + -8) = 0x101739;
            fputs_unlocked(padding_buffer,_stdout);
            if ((long)unaff_RBX < 0) {
              do {
                pcVar9 = _stdout->_IO_write_ptr;
                if (pcVar9 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar9 + 1;
                  *pcVar9 = ' ';
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
    unaff_R14 = (char *)xpalloc(padding_buffer,&padding_buffer_size,lVar10,0xffffffffffffffff,1);
    sVar2 = scale_to;
    in_R9D = grouping;
    unaff_R12 = padding_buffer_size;
    unaff_RBX = (ulong)round_style;
    if (grouping == 0) {
      uVar8 = 0x19;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 1);
    }
    else {
      in_stack_00000090._1_1_ = 0x27;
      uVar8 = 0x18;
      unaff_R15 = (undefined8 *)((long)&stack0x00000090 + 2);
    }
    padding_buffer = unaff_R14;
    if (zero_padding_width != 0) {
      uStack_8 = 0xd58;
      uStack_6 = 0x10;
      iVar6 = __sprintf_chk(unaff_R15,2,uVar8);
      unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar6);
    }
    lVar18 = __LC19;
    if (dev_debug != false) {
      uStack_8 = 0xd94;
      uStack_6 = 0x10;
      fwrite("double_to_human:\n",1,0x11,_stderr);
      lVar18 = __LC19;
    }
    __LC19 = lVar18;
    if (sVar2 == scale_none) break;
    if (sVar2 - scale_IEC < 2) {
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
      uVar12 = 0;
      if (dev_debug != false) goto LAB_00100ff8;
LAB_0010099e:
      if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
      lVar10 = (long)((int)uVar12 * 3);
LAB_001009b4:
      if (user_precision <= lVar10) {
        lVar10 = user_precision;
      }
      iVar6 = (int)lVar10;
      if (iVar6 == 0) {
LAB_001011a2:
        lVar18 = (longdouble)(long)ROUND(lVar19 / __LC51) * __LC51;
        lVar19 = lVar19 - lVar18;
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
          if ((longdouble)0 <= lVar19) goto LAB_00100a60;
          break;
        case 3:
LAB_0010120e:
          lVar17 = (longdouble)(long)ROUND(lVar19) + lVar18;
          goto LAB_00100abb;
        case 4:
          iVar6 = 0;
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
          uVar8 = FUN_00104126();
          return uVar8;
        }
LAB_00100b80:
        lVar10 = (long)ROUND(-lVar19);
        lVar17 = (longdouble)(long)-(lVar10 + (ulong)((longdouble)lVar10 < -lVar19));
        goto LAB_00100a90;
      }
      iVar5 = iVar6 + -1;
      if (iVar5 == 0) {
        lVar16 = (longdouble)__LC1;
LAB_0010106c:
        lVar18 = (longdouble)(long)ROUND((lVar19 * lVar16) / __LC51) * __LC51;
        lVar19 = lVar19 * lVar16 - lVar18;
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
          uVar8 = FUN_00104126();
          return uVar8;
        }
        goto LAB_00100b80;
      }
      lVar16 = (longdouble)__LC1;
      lVar17 = lVar16;
      do {
        lVar17 = lVar17 * lVar16;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
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
        uVar8 = FUN_00100aa9();
        return uVar8;
      }
LAB_00100a9d:
      iVar6 = iVar6 + -1;
      lVar18 = lVar16;
      if (iVar6 == 0) {
        lVar17 = lVar17 / lVar16;
      }
      else {
        do {
          lVar18 = lVar18 * lVar16;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar17 = lVar17 / lVar18;
      }
    }
    else {
      if (lVar19 <= __LC45) {
        uVar12 = 0;
        while( true ) {
          lVar18 = -lVar19;
          if ((longdouble)0 <= lVar19) {
            lVar18 = lVar19;
          }
          if (lVar18 < (longdouble)iStack0000000000000040) break;
          lVar19 = lVar19 / (longdouble)iStack0000000000000040;
          uVar12 = (ulong)((int)uVar12 + 1);
        }
        if (dev_debug == false) goto LAB_0010099e;
LAB_00100ff8:
        pcStack_10 = SUB108(lVar19,0);
        uStack_8 = (undefined2)((unkuint10)lVar19 >> 0x40);
        __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
        if (user_precision != -1) goto LAB_001009af;
LAB_00101050:
        lVar18 = -lVar19;
        if ((longdouble)0 <= lVar19) {
          lVar18 = lVar19;
        }
        lVar16 = (longdouble)__LC1;
        if (lVar18 < lVar16) goto LAB_0010106c;
        goto LAB_001011a2;
      }
      if (dev_debug != false) {
        lVar19 = (longdouble)__LC18;
        uVar12 = 0;
        goto LAB_00100ff8;
      }
      if (user_precision != -1) {
        lVar19 = (longdouble)__LC18;
        lVar10 = 0;
        uVar12 = 0;
        goto LAB_001009b4;
      }
      switch(unaff_RBX) {
      case 0:
        lVar19 = (longdouble)__LC18;
        uVar12 = 0;
        iVar6 = 0;
        break;
      case 1:
        lVar19 = (longdouble)__LC18;
        uVar12 = 0;
        iVar6 = 0;
        goto LAB_00100b80;
      case 2:
        iVar6 = 0;
        uVar12 = 0;
        lVar19 = (longdouble)__LC18;
        break;
      case 3:
        lVar19 = (longdouble)__LC18;
        uVar12 = 0;
        goto LAB_0010120e;
      case 4:
        lVar19 = (longdouble)__LC18;
        iVar6 = 0;
        uVar12 = 0;
        goto LAB_00100bd4;
      default:
        lVar17 = (longdouble)0;
        uVar12 = 0;
        uVar14 = 0;
        goto LAB_00100b05;
      }
LAB_00100a60:
      lVar17 = (longdouble)(long)ROUND(lVar19);
      if (lVar17 < lVar19) {
        lVar17 = (longdouble)((long)ROUND(lVar19) + 1);
      }
LAB_00100a90:
      lVar17 = lVar17 + lVar18;
      if (iVar6 != 0) {
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
      uVar14 = 0;
      uVar7 = 0;
    }
    else {
      if (lVar18 <= lVar17) {
LAB_001010d4:
        lVar17 = lVar17 / lVar18;
        uVar12 = (ulong)((int)uVar12 + 1);
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
      bVar15 = (int)uVar12 != 0;
      uVar14 = (ulong)bVar15;
      uVar7 = (uint)bVar15;
    }
    if (dev_debug != false) {
      pcStack_10 = SUB108(lVar17,0);
      uStack_8 = (undefined2)((unkuint10)lVar17 >> 0x40);
      __fprintf_chk(dVar1,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
      uVar14 = (ulong)uVar7;
    }
LAB_00100b05:
    puVar13 = &DAT_001025c3;
    *unaff_R15 = 0x73257325664c2a2e;
    if (user_precision != -1) {
      uVar14 = user_precision & 0xffffffff;
    }
    *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
    pcVar9 = suffix;
    if (suffix == (char *)0x0) {
      pcVar9 = "";
    }
    uVar7 = (uint)uVar12;
    if (sVar2 != scale_IEC_I) {
      if (uVar7 == 1) {
        uVar8 = FUN_00100c18();
        return uVar8;
      }
LAB_00100b51:
      if (10 < uVar7) {
        uVar8 = FUN_00100c18(user_precision,puVar13);
        return uVar8;
      }
      uVar8 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[uVar12]))();
      return uVar8;
    }
    if (uVar7 != 0) {
      puVar13 = &_LC20;
      goto LAB_00100b51;
    }
    pcStack_10 = pcVar9;
    iVar6 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,in_stack_00000028,uVar14,
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
    lVar10 = (long)ROUND(-lVar18);
    lVar16 = (longdouble)(long)-(lVar10 + (ulong)((longdouble)lVar10 < -lVar18));
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
  uVar8 = FUN_00100e8f();
  return uVar8;
}



void switchD_00101309::caseD_0(void)

{
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = 0;
  FUN_001015f8();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int process_line(char *line,_Bool newline)

{
  long lVar1;
  uchar *puVar2;
  uchar uVar3;
  _Bool _Var4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  wint_t wVar12;
  uintmax_t field;
  byte bVar13;
  long lVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  field = 0;
  iVar9 = 1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = delimiter;
LAB_00101b18:
  cVar11 = *line;
  field = field + 1;
  pcVar8 = line;
  if (iVar6 == 0x80) {
    if (cVar11 != '\0') {
      do {
        if (cVar11 < '\0') {
          pcVar7 = pcVar8 + (2 - (ulong)(pcVar8[1] == '\0'));
          mbs.__count = 0;
          lVar14 = mbrtoc32(&ch,pcVar8,
                            pcVar7 + (*pcVar7 != '\0') +
                            ((ulong)(pcVar7[*pcVar7 != '\0'] != '\0') - (long)pcVar8),&mbs);
          wVar12 = ch;
          if (-1 < lVar14) goto LAB_00101be7;
          wVar12 = 0;
          bVar13 = 1;
LAB_00101bec:
          iVar6 = iswblank(wVar12);
          if (iVar6 == 0) goto LAB_00101c80;
        }
        else {
          lVar14 = 1;
          wVar12 = (int)cVar11;
LAB_00101be7:
          bVar13 = (byte)lVar14;
          if (wVar12 != 10) goto LAB_00101bec;
        }
        cVar11 = pcVar8[bVar13];
        pcVar8 = pcVar8 + bVar13;
        if (cVar11 == '\0') break;
      } while( true );
    }
  }
  else {
    iVar5 = (int)cVar11;
    if (iVar5 == iVar6) goto LAB_00101b6c;
    if (cVar11 != '\0') {
      while (iVar5 != iVar6) {
        if (pcVar8[1] == '\0') goto LAB_00101c10;
        iVar5 = (int)pcVar8[1];
        pcVar8 = pcVar8 + 1;
      }
      goto LAB_00101b69;
    }
  }
  goto LAB_00101c10;
LAB_00101c80:
  cVar11 = *pcVar8;
  if (cVar11 == '\0') {
LAB_00101c10:
    _Var4 = process_field(line,field);
    uVar3 = line_delim;
    if (!_Var4) {
      iVar9 = 0;
    }
    if (newline) {
      puVar2 = (uchar *)_stdout->_IO_write_ptr;
      if (puVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(puVar2 + 1);
        *puVar2 = uVar3;
      }
      else {
        __overflow(_stdout,(uint)line_delim);
      }
    }
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar9;
  }
  if (cVar11 < '\0') goto LAB_00101cc1;
LAB_00101c8d:
  uVar15 = 1;
  wVar12 = (int)cVar11;
  while (wVar12 != 10) {
    while( true ) {
      iVar6 = iswblank(wVar12);
      if (iVar6 != 0) goto LAB_00101b69;
      pcVar8 = pcVar8 + (uVar15 & 0xff);
      cVar11 = *pcVar8;
      if (cVar11 == '\0') goto LAB_00101c10;
      if (-1 < cVar11) goto LAB_00101c8d;
LAB_00101cc1:
      pcVar7 = pcVar8 + (2 - (ulong)(pcVar8[1] == '\0'));
      mbs.__count = 0;
      uVar15 = mbrtoc32(&ch,pcVar8,
                        pcVar7 + (*pcVar7 != '\0') +
                        ((ulong)(pcVar7[*pcVar7 != '\0'] != '\0') - (long)pcVar8),&mbs);
      wVar12 = ch;
      if (-1 < (long)uVar15) break;
      wVar12 = 0;
      uVar15 = 1;
    }
  }
LAB_00101b69:
  cVar11 = *pcVar8;
LAB_00101b6c:
  if (cVar11 == '\0') goto LAB_00101c10;
  *pcVar8 = '\0';
  _Var4 = process_field(line,field);
  iVar6 = delimiter;
  if (!_Var4) {
    iVar9 = 0;
  }
  pcVar7 = _stdout->_IO_write_ptr;
  uVar10 = 0x20;
  if (delimiter != 0x80) {
    uVar10 = delimiter;
  }
  if (pcVar7 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar7 + 1;
    *pcVar7 = (char)uVar10;
  }
  else {
    __overflow(_stdout,uVar10 & 0xff);
    iVar6 = delimiter;
  }
  line = pcVar8 + 1;
  goto LAB_00101b18;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
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
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].program = "sha256sum";
  infomap[3].node = "sha2 utilities";
  infomap[4].program = "sha384sum";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  do {
    iVar2 = strcmp("numfmt",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
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
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  ulong unaff_RBX;
  int unaff_EBP;
  undefined *puVar12;
  idx_t unaff_R12;
  scale_type unaff_R13D;
  char *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  longdouble lVar13;
  longdouble lVar14;
  longdouble lVar15;
  longdouble lVar16;
  char *unaff_retaddr;
  int iStack0000000000000040;
  undefined8 in_stack_00000090;
  char *pcStack_10;
  undefined2 uStack_8;
  undefined6 uStack_6;
  
  lVar14 = (longdouble)0;
  uVar11 = 0;
LAB_00100afc:
  uVar7 = (uint)uVar11;
joined_r0x00100aff:
  if (param_2 != '\0') {
    pcStack_10 = SUB108(lVar14,0);
    uStack_8 = (undefined2)((unkuint10)lVar14 >> 0x40);
    __fprintf_chk(param_8._0_8_,_stderr,2,"  after rounding, value=%Lf * %0.f ^ %d\n");
    param_4 = param_4 & 0xffffffff;
    uVar11 = (ulong)uVar7;
    param_1 = user_precision;
  }
LAB_00100b05:
  puVar12 = &DAT_001025c3;
  *unaff_R15 = 0x73257325664c2a2e;
  if (param_1 != 0xffffffffffffffff) {
    uVar11 = param_1 & 0xffffffff;
  }
  *(undefined4 *)((long)unaff_R15 + 7) = 0x732573;
  pcVar8 = suffix;
  if (suffix == (char *)0x0) {
    pcVar8 = "";
  }
  uVar7 = (uint)param_4;
  if (unaff_R13D == scale_IEC_I) {
    if (uVar7 == 0) {
      pcStack_10 = pcVar8;
      iVar5 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,uVar11,
                             SUB108(lVar14,0),(short)((unkuint10)lVar14 >> 0x40),&_LC15,0x25c3);
      do {
        if ((iVar5 < 0) ||
           (lVar9 = (long)iVar5 - (padding_buffer_size + -1),
           SBORROW8((long)iVar5,padding_buffer_size + -1))) {
          uStack_8 = 0x1a91;
          uStack_6 = 0x10;
          uVar6 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
          uStack_8 = (undefined2)param_7;
          uStack_6 = param_7._2_6_;
          register0x00000020 = (BADSPACEBASE *)&pcStack_10;
          pcStack_10 = unaff_retaddr;
          error(1,0,uVar6);
          goto LAB_00101726;
        }
        if (lVar9 < 1) {
          if (dev_debug != false) {
            uStack_8 = 0x1786;
            uStack_6 = 0x10;
            uVar6 = quote(padding_buffer);
            uStack_8 = (undefined2)param_7;
            pcStack_10 = unaff_retaddr;
            __fprintf_chk(_stderr,2,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar6);
          }
          if (padding_width != 0) {
            uStack_8 = 0x16a8;
            uStack_6 = 0x10;
            iVar5 = gnu_mbswidth(padding_buffer,3);
            if (-1 < iVar5) {
              if (padding_width < 0) {
                if (padding_width < -iVar5) {
                  uVar11 = padding_width + iVar5;
                  if (format_str_prefix != (char *)0x0) goto LAB_001016e0;
                  goto LAB_001016ec;
                }
              }
              else if (iVar5 < padding_width) {
                uVar11 = padding_width - iVar5;
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
                    pcVar8 = _stdout->_IO_write_ptr;
                    if (pcVar8 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar8 + 1;
                      *pcVar8 = ' ';
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
                    pcVar8 = _stdout->_IO_write_ptr;
                    if (pcVar8 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar8 + 1;
                      *pcVar8 = ' ';
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
        iVar5 = grouping;
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
        uVar3 = uStack_8;
        if (zero_padding_width != 0) {
          param_8 = (longdouble)CONCAT64(param_8._4_6_,grouping);
          uStack_8 = 0xd58;
          uStack_6 = 0x10;
          iVar4 = __sprintf_chk(unaff_R15,2,uVar6);
          unaff_R15 = (undefined8 *)((long)unaff_R15 + (long)iVar4);
          uVar3 = uStack_8;
        }
        lVar15 = __LC19;
        if (dev_debug != false) {
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
        if (unaff_R13D != scale_none) goto LAB_00100923;
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
          lVar9 = (long)ROUND(lVar16 / __LC51);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar15 = (longdouble)lVar9 * __LC51;
          lVar14 = lVar16 - lVar15;
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
          lVar14 = lVar14 * lVar16;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
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
          lVar16 = (longdouble)lVar9;
          break;
        case 2:
LAB_00100e38:
          if (lVar14 < (longdouble)0) goto switchD_001012e1_caseD_1;
switchD_001012e1_caseD_0:
          lVar9 = (long)ROUND(lVar14);
          param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9);
          lVar16 = (longdouble)lVar9;
          if (lVar16 < lVar14) {
            param_8 = (longdouble)CONCAT28(param_8._8_2_,lVar9 + 1);
            lVar16 = (longdouble)(lVar9 + 1);
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
          uVar6 = FUN_00100e8f();
          return uVar6;
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
        pcStack_10 = SUB108(lVar16,0);
        pcVar8 = pcStack_10;
        if (dev_debug != false) {
          pcVar10 = "  no scaling, returning value: %.*Lf\n";
          if (iVar5 != 0) {
            pcVar10 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
          }
          __fprintf_chk(_stderr,2,pcVar10,unaff_EBP);
          unaff_RBX = CONCAT62(uStack_6,uStack_8);
          param_8 = lVar16;
          uVar3 = uStack_8;
        }
        uStack_8 = uVar3;
        *(undefined4 *)unaff_R15 = 0x664c2a2e;
        *(undefined4 *)((long)unaff_R15 + 3) = 0x732566;
        pcStack_10 = suffix;
        if (suffix == (char *)0x0) {
          pcStack_10 = "";
        }
        iVar5 = __snprintf_chk(unaff_R14,unaff_R12,2,0xffffffffffffffff,param_10,unaff_EBP,pcVar8,
                               uVar2);
      } while( true );
    }
    puVar12 = &_LC20;
  }
  else if (uVar7 == 1) {
    uVar6 = FUN_00100c18();
    return uVar6;
  }
  if (uVar7 < 0xb) {
    uVar6 = (*(code *)((long)&DAT_00104154 + (long)(int)(&DAT_00104154)[param_4]))();
    return uVar6;
  }
  uVar6 = FUN_00100c18(param_1,puVar12);
  return uVar6;
LAB_00100923:
  if (unaff_R13D - scale_IEC < 2) {
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
    if (dev_debug != false) {
      lVar16 = (longdouble)__LC18;
      param_4 = 0;
      goto LAB_00100ff8;
    }
    if (user_precision != 0xffffffffffffffff) {
      lVar16 = (longdouble)__LC18;
      lVar9 = 0;
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
      uVar11 = 0;
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
  if (dev_debug != false) {
LAB_00100ff8:
    pcStack_10 = SUB108(lVar16,0);
    uStack_8 = (undefined2)((unkuint10)lVar16 >> 0x40);
    __fprintf_chk(dVar1,_stderr,2,"  scaled value to %Lf * %0.f ^ %d\n");
    if (user_precision == -1) goto LAB_00101050;
LAB_001009af:
    lVar9 = (long)((int)param_4 * 3);
LAB_001009b4:
    if (user_precision <= lVar9) {
      lVar9 = user_precision;
    }
    iVar5 = (int)lVar9;
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
        uVar6 = FUN_00104126();
        return uVar6;
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
      uVar6 = FUN_00100aa9();
      return uVar6;
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
    lVar9 = (long)ROUND(-lVar16);
    lVar14 = (longdouble)(long)-(lVar9 + (ulong)((longdouble)lVar9 < -lVar16));
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
  uVar11 = 0;
  uVar7 = 0;
  goto joined_r0x00100aff;
switchD_001014c8_caseD_0:
  lVar16 = (longdouble)__LC18;
  param_4 = 0;
  iVar5 = 0;
  goto LAB_00100a60;
LAB_00100af3:
  uVar11 = (ulong)((int)param_4 != 0);
  goto LAB_00100afc;
switchD_001011e8_default:
  uVar6 = FUN_00104126();
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  intmax_t iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  __ssize_t _Var11;
  int *piVar12;
  ushort **ppuVar13;
  char cVar14;
  long lVar15;
  uint uVar16;
  char *pcVar17;
  undefined *puVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  char *line;
  size_t line_allocated;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  pcVar5 = setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  decimal_point = (char *)rpl_nl_langinfo(0x10000);
  if ((decimal_point == (char *)0x0) || (*decimal_point == '\0')) {
    decimal_point = ".";
  }
  sVar6 = strlen(decimal_point);
  decimal_point_length = (int)sVar6;
  atexit((__func *)&close_stdout);
  iVar3 = delimiter;
LAB_00104420:
  while (delimiter = iVar3, iVar2 = getopt_long(argc,argv,&_LC111,longopts), iVar2 != -1) {
    if (0x8d < iVar2) {
switchD_00104465_caseD_65:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar2 < 100) {
      if (iVar2 == -0x83) {
        uVar7 = proper_name_lite("Assaf Gordon","Assaf Gordon");
        version_etc(_stdout,"numfmt","GNU coreutils",_Version,uVar7,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00104465_caseD_65;
    }
    iVar3 = delimiter;
    switch(iVar2) {
    case 100:
      cVar14 = *_optarg;
      iVar3 = (int)cVar14;
      if ((cVar14 != '\0') && (_optarg[1] != '\0')) goto LAB_00104f79;
      break;
    default:
      goto switchD_00104465_caseD_65;
    case 0x7a:
      line_delim = '\0';
      break;
    case 0x80:
      lVar8 = __xargmatch_internal
                        ("--from",_optarg,scale_from_args,scale_from_types,4,_argmatch_die,1);
      scale_from = scale_from_types[lVar8];
      iVar3 = delimiter;
      break;
    case 0x81:
      from_unit_size = unit_to_umax(_optarg);
      iVar3 = delimiter;
      break;
    case 0x82:
      lVar8 = __xargmatch_internal(&_LC113,_optarg,scale_to_args,scale_to_types,4,_argmatch_die,1);
      scale_to = scale_to_types[lVar8];
      iVar3 = delimiter;
      break;
    case 0x83:
      to_unit_size = unit_to_umax(_optarg);
      iVar3 = delimiter;
      break;
    case 0x84:
      lVar8 = __xargmatch_internal("--round",_optarg,round_args,round_types,4,_argmatch_die,1);
      round_style = round_types[lVar8];
      iVar3 = delimiter;
      break;
    case 0x85:
      suffix = _optarg;
      break;
    case 0x86:
      grouping = 1;
      break;
    case 0x87:
      uVar16 = xstrtoimax(_optarg,0,10,&padding_width);
      if ((1 < uVar16) || (iVar3 = delimiter, padding_width == 0)) {
        uVar7 = quote(_optarg);
        pcVar5 = "invalid padding value %s";
        goto LAB_00104e82;
      }
      break;
    case 0x88:
      if (_n_frp != 0) {
        pcVar17 = "multiple field specifications";
        goto LAB_00104f61;
      }
      set_fields(_optarg,1);
      iVar3 = delimiter;
      break;
    case 0x8a:
      dev_debug = true;
    case 0x89:
      debug = true;
      break;
    case 0x8b:
      if (_optarg != (char *)0x0) goto code_r0x00104508;
      header = 1;
      break;
    case 0x8c:
      format_str = _optarg;
      break;
    case 0x8d:
      lVar8 = __xargmatch_internal("--invalid",_optarg,inval_args,inval_types,4,_argmatch_die,1);
      inval_style = inval_types[lVar8];
      iVar3 = delimiter;
    }
  }
  if ((format_str != (char *)0x0) &&
     (pcVar17 = "--grouping cannot be combined with --format", grouping != 0)) goto LAB_00104f61;
  if ((debug != false) && (pcVar5 == (char *)0x0)) {
    uVar7 = dcgettext(0,"failed to set locale",5);
    error(0,0,uVar7);
  }
  if ((debug == false) || (scale_from != scale_none || scale_to != scale_none)) {
LAB_00104860:
    if (format_str == (char *)0x0) goto LAB_00104960;
  }
  else if (grouping == 0) {
    if (padding_width == 0) {
      if (format_str == (char *)0x0) {
        uVar7 = dcgettext(0,"no conversion option specified",5);
        error(0,0,uVar7);
        goto LAB_00104860;
      }
    }
    else if (format_str == (char *)0x0) goto LAB_00104a39;
  }
  else if (format_str == (char *)0x0) goto LAB_00104a59;
  pcVar5 = format_str;
  lVar19 = 1;
  lVar8 = 0;
  line_allocated = 0;
  goto LAB_00104894;
code_r0x00104508:
  iVar3 = xstrtoumax(_optarg,0,10,&header);
  if ((iVar3 != 0) || (iVar3 = delimiter, header == 0)) goto LAB_00104534;
  goto LAB_00104420;
LAB_00104534:
  uVar7 = quote(_optarg);
  pcVar5 = "invalid header value %s";
  goto LAB_00104e82;
LAB_00104894:
  if (format_str[lVar8] == '%') {
    lVar15 = lVar8 + 1;
    if (format_str[lVar8 + 1] != '%') goto LAB_00104a9f;
    lVar15 = 2;
  }
  else {
    if (format_str[lVar8] == '\0') {
      uVar7 = quote(format_str);
      pcVar5 = "format %s has no %% directive";
      goto LAB_00104e82;
    }
    lVar15 = 1;
  }
  lVar8 = lVar8 + lVar15;
  lVar19 = lVar19 + 1;
  goto LAB_00104894;
LAB_00104a9f:
  bVar20 = false;
  pcVar17 = format_str + lVar15;
  do {
    while( true ) {
      while( true ) {
        sVar6 = strspn(pcVar17," ");
        lVar15 = lVar15 + sVar6;
        pcVar17 = pcVar5 + lVar15;
        if (*pcVar17 != '\'') break;
        grouping = 1;
        lVar15 = lVar15 + 1;
        pcVar17 = pcVar5 + lVar15;
      }
      if (*pcVar17 != '0') break;
      lVar15 = lVar15 + 1;
      bVar20 = true;
      pcVar17 = pcVar5 + lVar15;
    }
  } while (sVar6 != 0);
  lVar8 = __isoc23_strtoimax(pcVar17,&line_allocated,10);
  iVar1 = padding_width;
  if (lVar8 != 0) {
    if ((debug == false) || (padding_width == 0)) {
LAB_00104d7d:
      iVar1 = lVar8;
      if ((lVar8 < 0) || (!bVar20)) goto LAB_00104b36;
    }
    else if ((!bVar20) || (lVar8 < 1)) {
      uVar7 = dcgettext(0,"--format padding overriding --padding",5);
      error(0,0,uVar7);
      goto LAB_00104d7d;
    }
    if (0x7fffffff < lVar8) {
      lVar8 = 0x7fffffff;
    }
    zero_padding_width = (int)lVar8;
    iVar1 = padding_width;
  }
LAB_00104b36:
  padding_width = iVar1;
  lVar8 = line_allocated - (long)pcVar5;
  if (*(char *)line_allocated == '\0') {
    uVar7 = quote(pcVar5);
    pcVar5 = "format %s ends in %%";
LAB_00104e82:
    do {
      uVar9 = dcgettext(0,pcVar5,5);
      error(1,0,uVar9,uVar7);
LAB_00104e9d:
      uVar7 = quote();
      pcVar5 = "invalid precision in format %s";
    } while( true );
  }
  if (*(char *)line_allocated == '.') {
    piVar12 = __errno_location();
    *piVar12 = 0;
    user_precision = __isoc23_strtol(pcVar5 + lVar8 + 1,&line_allocated,10);
    if (*piVar12 == 0x22) goto LAB_00104e9d;
    if (user_precision < 0) goto LAB_00104e9d;
    ppuVar13 = __ctype_b_loc();
    cVar14 = pcVar5[lVar8 + 1];
    if (((*ppuVar13)[cVar14] & 1) != 0) goto LAB_00104e9d;
    if (cVar14 == '+') goto LAB_00104e9d;
    lVar8 = line_allocated - (long)pcVar5;
  }
  if (pcVar5[lVar8] != 'f') {
    uVar7 = quote(pcVar5);
    pcVar5 = "invalid format %s, directive must be %%[0][\'][-][N][.][N]f";
    goto LAB_00104e82;
  }
  lVar8 = lVar8 + 1;
  pcVar17 = pcVar5 + lVar8;
  cVar14 = *pcVar17;
  if (cVar14 == '\0') {
    if (lVar19 != 1) {
LAB_00104d0f:
      format_str_prefix = (char *)ximemdup0(pcVar5);
      if (*pcVar17 != '\0') goto LAB_001048bd;
    }
    if (dev_debug != false) {
      pcVar17 = format_str_suffix;
      if (format_str_suffix == (char *)0x0) {
        pcVar17 = "";
      }
LAB_001048dc:
      uVar7 = quote_n(2,pcVar17);
      pcVar17 = format_str_prefix;
      if (format_str_prefix == (char *)0x0) {
        pcVar17 = "";
      }
      puVar18 = &_LC108;
      uVar9 = quote_n(1,pcVar17);
      iVar1 = padding_width;
      if (grouping != 0) {
        puVar18 = &_LC107;
      }
      uVar10 = quote_n(0,pcVar5);
      __fprintf_chk(_stderr,2,
                    "format String:\n  input: %s\n  grouping: %s\n  padding width: %jd\n  prefix: %s\n  suffix: %s\n"
                    ,uVar10,puVar18,iVar1,uVar9,uVar7);
    }
  }
  else {
    do {
      lVar15 = 1;
      if (cVar14 == '%') {
        if (pcVar5[lVar8 + 1] != '%') {
          uVar7 = quote(pcVar5);
          pcVar5 = "format %s has too many %% directives";
          goto LAB_00104e82;
        }
        lVar15 = 2;
      }
      lVar8 = lVar8 + lVar15;
      cVar14 = pcVar5[lVar8];
    } while (cVar14 != '\0');
    if (lVar19 != 1) goto LAB_00104d0f;
LAB_001048bd:
    pcVar17 = (char *)xstrdup(pcVar17);
    format_str_suffix = pcVar17;
    if (dev_debug != false) goto LAB_001048dc;
  }
LAB_00104960:
  if (grouping != 0) {
    pcVar17 = "grouping cannot be combined with --to";
    if (scale_to != scale_none) {
LAB_00104f61:
      do {
        uVar7 = dcgettext(0,pcVar17,5);
        error(1,0,uVar7);
LAB_00104f79:
        pcVar17 = "the delimiter must be a single character";
      } while( true );
    }
LAB_00104a59:
    if ((debug != false) && (pcVar5 = (char *)rpl_nl_langinfo(0x10001), *pcVar5 == '\0')) {
      uVar7 = dcgettext(0,"grouping has no effect in this locale",5);
      error(0,0,uVar7);
    }
  }
  if (padding_width == 0) {
    auto_padding = (int)(delimiter == 0x80);
  }
  else {
LAB_00104a39:
    auto_padding = 0;
  }
  if (inval_style != inval_abort) {
    conv_exit_code = 0;
  }
  if (_optind < argc) {
    if ((debug == false) || (header == 0)) {
LAB_001049cb:
      uVar16 = 1;
      do {
        uVar4 = process_line(argv[_optind],true);
        uVar16 = uVar16 & uVar4;
        _optind = _optind + 1;
      } while (_optind < argc);
LAB_001049f6:
      if (debug == false) goto LAB_00104ce9;
      if (uVar16 != 0) goto LAB_00104a0b;
      uVar7 = dcgettext(0,"failed to convert some of the input numbers",5);
      error(0,0,uVar7);
      goto LAB_00104cf1;
    }
    uVar7 = dcgettext(0,"--header ignored with command-line input",5);
    error(0,0,uVar7);
    if (_optind < argc) goto LAB_001049cb;
  }
  else {
    line = (char *)0x0;
    line_allocated = 0;
    while ((bVar20 = header != 0, header = header - 1, bVar20 &&
           (_Var11 = getdelim(&line,&line_allocated,(uint)line_delim,_stdin), 0 < _Var11))) {
      fputs_unlocked(line,_stdout);
    }
    uVar16 = 1;
    while (_Var11 = getdelim(&line,&line_allocated,(uint)line_delim,_stdin), 0 < _Var11) {
      bVar20 = (int)line[_Var11 + -1] == (uint)line_delim;
      if (bVar20) {
        line[_Var11 + -1] = '\0';
      }
      uVar4 = process_line(line,bVar20);
      uVar16 = uVar16 & uVar4;
    }
    if ((_stdin->_flags & 0x20) == 0) goto LAB_001049f6;
    uVar7 = dcgettext(0,"error reading input",5);
    piVar12 = __errno_location();
    error(1,*piVar12,uVar7);
LAB_00104ce9:
    if (uVar16 == 0) {
LAB_00104cf1:
      iVar3 = (uint)(1 < inval_style - inval_warn) * 2;
      goto LAB_00104a0d;
    }
  }
LAB_00104a0b:
  iVar3 = 0;
LAB_00104a0d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


