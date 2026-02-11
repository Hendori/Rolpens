
long * get_curr_arg(long *param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  uVar3 = (int)*in_stack_00000008 - 0x30;
  if (uVar3 < 10) {
    iVar5 = (int)in_stack_00000008[1];
    pcVar6 = in_stack_00000008 + 1;
    if (9 < iVar5 - 0x30U) {
      if (in_stack_00000008[1] == '$') {
LAB_001000d6:
        if (0 < (int)uVar3) {
          iVar5 = uVar3 - 1;
          goto LAB_001000dd;
        }
      }
      goto LAB_00100080;
    }
    bVar2 = false;
    do {
      lVar1 = (long)(int)uVar3;
      iVar4 = (int)(lVar1 * 10);
      iVar5 = (int)(char)((char)iVar5 + -0x30);
      uVar3 = iVar4 + iVar5;
      pcVar6 = pcVar6 + 1;
      bVar2 = (bool)(bVar2 | ((long)iVar4 != lVar1 * 10 || SCARRY4(iVar4,iVar5)));
      iVar5 = (int)*pcVar6;
    } while (iVar5 - 0x30U < 10);
    if (*pcVar6 != '$') goto LAB_00100080;
    if (!bVar2) goto LAB_001000d6;
    iVar5 = 0x7ffffffe;
LAB_001000dd:
    in_stack_00000008 = pcVar6 + 1;
    if (param_2 == 0) {
      iStack000000000000001c = iVar5;
    }
  }
  else {
LAB_00100080:
    if (param_2 == 0) {
      iStack000000000000001c = -1;
      goto LAB_001000a1;
    }
    iStack0000000000000014 = iStack0000000000000014 + 1;
    iVar5 = iStack0000000000000014;
    if (iStack0000000000000014 < 0) goto LAB_001000a1;
  }
  iStack0000000000000010 = iVar5;
  if (iStack0000000000000018 < iStack0000000000000010) {
    iStack0000000000000018 = iStack0000000000000010;
  }
LAB_001000a1:
  *param_1 = (long)in_stack_00000008;
  param_1[1] = CONCAT44(iStack0000000000000014,iStack0000000000000010);
  param_1[2] = CONCAT44(iStack000000000000001c,iStack0000000000000018);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong print_esc(long param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar12;
  byte *pbVar13;
  byte bVar14;
  char cVar15;
  char *pcVar16;
  int iVar17;
  
  bVar12 = *(byte *)(param_1 + 1);
  pbVar13 = (byte *)(ulong)bVar12;
  if (bVar12 == 0x78) {
    pbVar13 = (byte *)(param_1 + 2);
    bVar2 = false;
    bVar14 = 0;
    while( true ) {
      bVar12 = *pbVar13;
      if ((0x36 < (byte)(bVar12 - 0x30)) ||
         ((0x7e0000007e03ffU >> ((ulong)(bVar12 - 0x30) & 0x3f) & 1) == 0)) break;
      cVar15 = bVar12 + 0xa9;
      if (5 < (byte)(bVar12 + 0x9f)) {
        cVar15 = bVar12 - 0x37;
        if (5 < (byte)(bVar12 + 0xbf)) {
          cVar15 = bVar12 - 0x30;
        }
      }
      bVar14 = bVar14 * '\x10' + cVar15;
      pbVar13 = pbVar13 + 1;
      if (bVar2) goto LAB_00100155;
      bVar2 = true;
    }
    if (!bVar2) goto LAB_00100260;
  }
  else {
    if (7 < (byte)(bVar12 - 0x30)) {
      if (bVar12 == 0) {
LAB_00100199:
        pcVar3 = _stdout->_IO_write_ptr;
        if (pcVar3 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar3 + 1;
          *pcVar3 = '\\';
        }
        else {
          __overflow(_stdout,0x5c);
        }
        bVar12 = *(byte *)(param_1 + 1);
        if (bVar12 == 0) {
          return 0;
        }
        pbVar13 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar13 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar13 + 1);
          *pbVar13 = bVar12;
        }
        else {
          __overflow(_stdout,(uint)bVar12);
        }
      }
      else {
        while( true ) {
          bVar12 = (byte)pbVar13;
          pcVar3 = strchr("\"\\abcefnrtv",(int)(char)bVar12);
          if (pcVar3 != (char *)0x0) break;
          if ((bVar12 & 0xdf) != 0x55) goto LAB_00100199;
          pbVar8 = (byte *)(param_1 + 2);
          iVar17 = 0;
          iVar1 = (uint)(bVar12 != 0x75) * 4;
          pbVar13 = (byte *)((ulong)(iVar1 + 6) + param_1);
          while( true ) {
            bVar14 = *pbVar8;
            if ((0x36 < (byte)(bVar14 - 0x30)) ||
               ((0x7e0000007e03ffU >> ((ulong)(bVar14 - 0x30) & 0x3f) & 1) == 0)) break;
            iVar9 = (int)(char)bVar14;
            if ((byte)(bVar14 + 0x9f) < 6) {
              iVar10 = iVar9 + -0x57;
            }
            else {
              iVar10 = iVar9 + -0x30;
              if ((byte)(bVar14 + 0xbf) < 6) {
                iVar10 = iVar9 + -0x37;
              }
            }
            pbVar8 = pbVar8 + 1;
            iVar17 = iVar17 * 0x10 + iVar10;
            if (pbVar13 == pbVar8) {
              if (0x7ff < iVar17 - 0xd800U) {
                print_unicode_char(_stdout,iVar17,0);
                return (ulong)(((int)pbVar13 - (int)param_1) - 1);
              }
              uVar4 = dcgettext(0,"invalid universal character name \\%c%0*x",5);
              pcVar3 = (char *)0x0;
              pcVar16 = (char *)0x1;
              error(1,0,uVar4,(int)(char)bVar12,iVar1 + 4,iVar17);
              if (pcVar16 == pcVar3) {
                uVar4 = quote();
                pcVar3 = "%s: expected a numeric value";
              }
              else {
                puVar5 = (uint *)__errno_location();
                if (*puVar5 != 0) {
                  uVar4 = quote(pcVar16);
                  uVar7 = error(0,*puVar5,&_LC4,uVar4);
                  exit_status = 1;
                  return uVar7;
                }
                if (*pcVar3 == '\0') {
                  return (ulong)*puVar5;
                }
                uVar4 = quote(pcVar16);
                pcVar3 = "%s: value not completely converted";
              }
              uVar6 = dcgettext(0,pcVar3,5);
              uVar7 = error(0,0,uVar6,uVar4);
              exit_status = 1;
              return uVar7;
            }
          }
LAB_00100260:
          uVar4 = dcgettext(0,"missing hexadecimal number in escape",5);
          error(1,0,uVar4);
        }
        switch((uint)pbVar13 - 0x61 & 0xff) {
        case 0:
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\a';
          }
          else {
            __overflow(_stdout,7);
          }
          break;
        case 1:
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\b';
          }
          else {
            __overflow(_stdout,8);
          }
          break;
        case 2:
                    /* WARNING: Subroutine does not return */
          exit(0);
        default:
          pbVar8 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar8 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar8 + 1);
            *pbVar8 = bVar12;
          }
          else {
            __overflow(_stdout,(uint)pbVar13 & 0xff);
          }
          break;
        case 4:
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\x1b';
          }
          else {
            __overflow(_stdout,0x1b);
          }
          break;
        case 5:
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\f';
          }
          else {
            __overflow(_stdout,0xc);
          }
          break;
        case 0xd:
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
          break;
        case 0x11:
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\r';
          }
          else {
            __overflow(_stdout,0xd);
          }
          break;
        case 0x13:
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\t';
          }
          else {
            __overflow(_stdout,9);
          }
          break;
        case 0x15:
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\v';
          }
          else {
            __overflow(_stdout,0xb);
          }
        }
      }
      return 1;
    }
    bVar14 = 0;
    pbVar11 = (byte *)(param_1 + 1 + (bVar12 == 0x30 & param_2));
    pbVar8 = pbVar11 + 3;
    do {
      bVar12 = *pbVar11;
      pbVar13 = pbVar11;
      if (7 < (byte)(bVar12 - 0x30)) break;
      pbVar11 = pbVar11 + 1;
      bVar14 = (bVar12 - 0x30) + bVar14 * '\b';
      pbVar13 = pbVar8;
    } while (pbVar8 != pbVar11);
  }
LAB_00100155:
  pbVar8 = (byte *)_stdout->_IO_write_ptr;
  if (pbVar8 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = (char *)(pbVar8 + 1);
    *pbVar8 = bVar14;
  }
  else {
    __overflow(_stdout,(uint)bVar14);
  }
  return (ulong)(((int)pbVar13 - (int)param_1) - 1);
}



void verify_numeric(char *param_1,char *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_1 == param_2) {
    uVar3 = quote();
    pcVar4 = "%s: expected a numeric value";
  }
  else {
    piVar1 = __errno_location();
    if (*piVar1 != 0) {
      uVar3 = quote(param_1);
      error(0,*piVar1,&_LC4,uVar3);
      exit_status = 1;
      return;
    }
    if (*param_2 == '\0') {
      return;
    }
    uVar3 = quote(param_1);
    pcVar4 = "%s: value not completely converted";
  }
  uVar2 = dcgettext(0,pcVar4,5);
  error(0,0,uVar2,uVar3);
  exit_status = 1;
  return;
}



ulong vstrtoimax(char *param_1)

{
  char cVar1;
  int *piVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
  char *__s;
  long in_FS_OFFSET;
  int local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*param_1 == '\"') || (*param_1 == '\'')) &&
     (uVar3 = (ulong)(byte)param_1[1], param_1[1] != 0)) {
    __s = param_1 + 1;
    sVar4 = __ctype_get_mb_cur_max();
    if (sVar4 < 2) {
      cVar1 = param_1[2];
    }
    else {
      if (param_1[2] == '\0') goto LAB_001006cb;
      local_38 = 0;
      sVar4 = strlen(__s);
      lVar5 = rpl_mbrtowc(&local_40,__s,sVar4,&local_38);
      if (0 < lVar5) {
        uVar3 = (ulong)local_40;
        __s = param_1 + lVar5;
      }
      cVar1 = __s[1];
    }
    if ((cVar1 != '\0') && (posixly_correct == '\0')) {
      uVar6 = dcgettext(0,"warning: %s: character(s) following character constant have been ignored"
                        ,5);
      error(0,0,uVar6,__s + 1);
    }
  }
  else {
    piVar2 = __errno_location();
    *piVar2 = 0;
    uVar3 = __isoc23_strtoimax(param_1,&local_40,0);
    verify_numeric(param_1,CONCAT44(uStack_3c,local_40));
  }
LAB_001006cb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int print_formatted(byte *param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FILE *pFVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  size_t sVar12;
  char *pcVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined8 uVar16;
  int *piVar17;
  undefined8 uVar18;
  char *pcVar19;
  long lVar20;
  uint uVar21;
  undefined **ppuVar22;
  byte *pbVar23;
  ulong uVar24;
  ulong uVar25;
  byte *pbVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  byte bVar28;
  longdouble in_ST0;
  longdouble lVar29;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  uint uVar30;
  uint uVar32;
  uint uVar33;
  undefined1 auVar31 [16];
  undefined *puStack_2c0;
  char *pcStack_2b8;
  char *apcStack_2b0 [4];
  char *pcStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  undefined1 auStack_260 [16];
  undefined8 uStack_248;
  byte *pbStack_240;
  byte *local_238;
  ulong uStack_230;
  byte *local_228;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  uint local_20c;
  char *local_208;
  byte **local_200;
  undefined1 local_1f8 [16];
  long local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  longdouble local_1d8;
  longdouble local_1c8;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  undefined4 local_1a0;
  char local_19a;
  char local_199;
  byte *local_198;
  undefined8 uStack_190;
  ulong local_188;
  int local_170;
  undefined4 uStack_16c;
  byte *local_168;
  undefined1 auStack_160 [16];
  undefined8 local_150;
  char local_148 [65];
  undefined1 local_107;
  undefined2 local_103;
  undefined1 local_101;
  undefined1 local_f0;
  undefined1 local_e7;
  uint local_e5;
  undefined1 local_e1;
  bool local_df;
  undefined1 local_d9;
  bool local_d5;
  bool local_d3;
  undefined1 local_d0;
  long local_40;
  
  bVar28 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_220 = 0x7d5;
  uStack_21e = 0x10;
  local_1e8 = param_3;
  local_1e0 = param_2;
  sVar12 = strlen((char *)param_1);
  uStack_220 = 0x7de;
  uStack_21e = 0x10;
  local_208 = (char *)xmalloc(sVar12 + 1);
  bVar7 = *param_1;
  if (bVar7 != 0) {
    local_200 = &local_168;
    local_1a0 = 0;
    uVar27 = 0xffffffff;
    uVar30 = 0xffffffff;
    uVar24 = 0xffffffff;
    local_1dc = 0;
    local_20c = 0xffffffff;
LAB_0010086d:
    if (bVar7 != 0x25) {
      if (bVar7 == 0x5c) {
        uStack_220 = 0x9e2;
        uStack_21e = 0x10;
        iVar9 = print_esc(param_1,0);
        param_1 = param_1 + iVar9;
        pbVar23 = param_1 + 1;
      }
      else {
        pbVar23 = param_1 + 1;
        pbVar26 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar26 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar26 + 1);
          *pbVar26 = bVar7;
        }
        else {
          uStack_220 = 0xae6;
          uStack_21e = 0x10;
          __overflow(_stdout,(uint)bVar7);
        }
      }
      goto LAB_00100861;
    }
    bVar7 = param_1[1];
    pbVar26 = param_1 + 1;
    *local_208 = '%';
    if (bVar7 == 0x25) {
      pbVar23 = param_1 + 2;
      pcVar13 = _stdout->_IO_write_ptr;
      if (pcVar13 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar13 + 1;
        *pcVar13 = '%';
        param_1 = pbVar26;
      }
      else {
        uStack_220 = 0xfca;
        uStack_21e = 0x10;
        __overflow(_stdout,0x25);
        param_1 = pbVar26;
      }
      goto LAB_00100861;
    }
    auStack_160._8_4_ = (int)uVar24;
    auStack_160._4_4_ = local_20c;
    auStack_160._0_4_ = uVar30;
    uStack_230 = auStack_160._0_8_;
    auStack_160._12_4_ = (int)uVar27;
    local_228 = (byte *)auStack_160._8_8_;
    pbStack_240 = (byte *)0x1008dd;
    local_238 = pbVar26;
    local_168 = pbVar26;
    get_curr_arg(local_200,0);
    pbVar26 = local_168;
    pFVar6 = _stdout;
    uVar27 = (ulong)(uint)auStack_160._12_4_;
    bVar7 = *local_168;
    uVar21 = (uint)bVar7;
    uVar30 = auStack_160._0_4_;
    uVar32 = auStack_160._4_4_;
    uVar33 = auStack_160._8_4_;
    uVar24 = (ulong)uVar33;
    local_20c = uVar32;
    if (bVar7 == 0x62) {
      uVar21 = auStack_160._12_4_;
      if (((-1 < (int)auStack_160._12_4_) ||
          (local_20c = uVar32 + 1, uVar21 = local_20c, -1 < (int)local_20c)) &&
         (uVar30 = uVar21, uVar24 = (ulong)uVar33, (int)uVar33 < (int)uVar30)) {
        uVar24 = (ulong)uVar30;
      }
      pbVar23 = local_168 + 1;
      param_1 = pbVar26;
      if ((int)uVar30 < local_1e0) {
        pbVar14 = *(byte **)(local_1e8 + (long)(int)uVar30 * 8);
        bVar7 = *pbVar14;
        while (bVar7 != 0) {
          if (bVar7 == 0x5c) {
            uStack_220 = 0xaab;
            uStack_21e = 0x10;
            iVar9 = print_esc(pbVar14);
            pbVar14 = pbVar14 + iVar9;
          }
          else {
            pbVar2 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar2 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
              *pbVar2 = bVar7;
            }
            else {
              uStack_220 = 0xf98;
              uStack_21e = 0x10;
              __overflow(_stdout,(uint)bVar7);
            }
          }
          bVar7 = pbVar14[1];
          pbVar14 = pbVar14 + 1;
        }
      }
      goto LAB_00100861;
    }
    if (bVar7 != 0x71) {
      bVar4 = false;
      pcVar13 = local_148;
      for (lVar20 = 0x20; lVar20 != 0; lVar20 = lVar20 + -1) {
        pcVar13[0] = '\0';
        pcVar13[1] = '\0';
        pcVar13[2] = '\0';
        pcVar13[3] = '\0';
        pcVar13[4] = '\0';
        pcVar13[5] = '\0';
        pcVar13[6] = '\0';
        pcVar13[7] = '\0';
        pcVar13 = pcVar13 + ((ulong)bVar28 * -2 + 1) * 8;
      }
      local_f0 = 1;
      bVar5 = false;
      local_d0 = 1;
      local_d3 = true;
      local_d5 = true;
      local_d9 = 1;
      local_df = true;
      local_101 = 1;
      local_e1 = 1;
      local_e5 = 0x1010101;
      local_107 = 1;
      local_e7 = 1;
      local_103 = 0x101;
      bVar3 = false;
      pbVar23 = local_168;
      pbVar26 = (byte *)(local_208 + 1);
LAB_00100bb0:
      bVar7 = (byte)uVar21;
      switch(uVar21 - 0x20 & 0xff) {
      case 0:
      case 0xb:
      case 0xd:
        break;
      default:
        goto switchD_00100bc1_caseD_1;
      case 3:
        bVar4 = true;
        bVar5 = true;
        break;
      case 7:
      case 0x29:
        goto switchD_00100bc1_caseD_7;
      case 0x10:
        bVar5 = true;
      }
      pbVar23 = pbVar23 + 1;
      *pbVar26 = bVar7;
      uVar21 = (uint)*pbVar23;
      pbVar26 = pbVar26 + 1;
      goto LAB_00100bb0;
    }
    uVar21 = auStack_160._12_4_;
    if (((-1 < (int)auStack_160._12_4_) ||
        (local_20c = uVar32 + 1, uVar21 = local_20c, -1 < (int)local_20c)) &&
       (uVar30 = uVar21, uVar24 = (ulong)uVar33, (int)uVar33 < (int)uVar30)) {
      uVar24 = (ulong)uVar30;
    }
    iVar9 = (int)uVar24;
    pbVar23 = local_168 + 1;
    param_1 = pbVar26;
    if (local_1e0 <= (int)uVar30) goto LAB_00100861;
    uStack_220 = 0x96d;
    uStack_21e = 0x10;
    pcVar13 = (char *)quotearg_style(3,*(undefined8 *)(local_1e8 + (long)(int)uVar30 * 8));
    uStack_220 = 0x978;
    uStack_21e = 0x10;
    fputs_unlocked(pcVar13,pFVar6);
    bVar7 = pbVar26[1];
    param_1 = pbVar23;
    goto joined_r0x00100867;
  }
  uStack_220 = 0x143c;
  uStack_21e = 0x10;
  free(local_208);
  local_1e0 = 0;
  iVar11 = local_1e0;
LAB_001009a5:
  local_1e0 = iVar11;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1e0;
  }
  uStack_220 = 0x165b;
  uStack_21e = 0x10;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100bc1_caseD_7:
  pbVar23 = pbVar23 + 1;
  *pbVar26 = bVar7;
  bVar5 = true;
  uVar21 = (uint)*pbVar23;
  bVar3 = true;
  pbVar26 = pbVar26 + 1;
  goto LAB_00100bb0;
switchD_00100bc1_caseD_1:
  if (bVar4) {
    local_e5 = 0x1010001;
    local_df = false;
    local_d3 = false;
  }
  local_d3 = !bVar4;
  local_df = !bVar4;
  if (bVar3) {
    local_e7 = 0;
    local_107 = 0;
    if (!bVar5) {
      local_d9 = 0;
    }
    else {
      local_e5._0_2_ = (short)(local_e5 >> 8) << 8;
      local_d9 = 0;
      local_d5 = false;
    }
    local_e5 = CONCAT13(local_e5._3_1_,(uint3)(ushort)local_e5);
    local_103 = 0x100;
    local_d9 = 0;
    local_d0 = 0;
    local_f0 = 0;
    local_d5 = !bVar5;
  }
  else if (bVar5) {
    local_e5 = local_e5 & 0xffffff00;
    local_d5 = false;
  }
  if (bVar7 == 0x2a) {
    local_238 = pbVar23 + 1;
    *pbVar26 = 0x2a;
    pbVar26 = pbVar26 + 1;
    local_228 = (byte *)auStack_160._8_8_;
    uStack_230 = auStack_160._0_8_;
    pbStack_240 = (byte *)0x100c8d;
    local_168 = local_238;
    get_curr_arg(&local_198,1);
    pbVar23 = local_198;
    local_168 = local_198;
    auStack_160._8_8_ = local_188;
    auStack_160._0_8_ = uStack_190;
    local_20c = (uint)uStack_190;
    if ((int)local_20c < local_1e0) {
      local_1f8 = auStack_160;
      uStack_220 = 0x12a3;
      uStack_21e = 0x10;
      lVar20 = vstrtoimax(*(undefined8 *)(local_1e8 + (long)(int)local_20c * 8));
      if (lVar20 + 0x80000000U >> 0x20 != 0) goto LAB_0010168d;
      bVar7 = *pbVar23;
      local_1dc = (int)lVar20;
      local_19a = '\x01';
      uVar32 = local_1f8._4_4_;
      uVar33 = local_1f8._8_4_;
      auVar31 = local_1f8;
      uVar30 = local_20c;
    }
    else {
      local_1dc = 0;
      bVar7 = *local_198;
      uVar32 = (uint)((ulong)uStack_190 >> 0x20);
      uVar33 = (uint)local_188;
      local_19a = '\x01';
      auVar31 = auStack_160;
      uVar30 = local_20c;
    }
  }
  else {
    uVar10 = (int)(char)bVar7;
    while (uVar10 - 0x30 < 10) {
      pbVar23 = pbVar23 + 1;
      bVar7 = *pbVar23;
      *pbVar26 = (byte)uVar21;
      pbVar26 = pbVar26 + 1;
      uVar21 = (uint)(char)bVar7;
      uVar10 = uVar21;
    }
    local_19a = '\0';
    auVar31 = auStack_160;
  }
  uVar24 = (ulong)uVar33;
  local_20c = uVar32;
  uVar27 = (ulong)auVar31._12_4_;
  if (bVar7 == 0x2e) {
    bVar7 = pbVar23[1];
    *pbVar26 = 0x2e;
    local_e5 = local_e5 & 0xffffff00;
    if (bVar7 == 0x2a) {
      local_238 = pbVar23 + 2;
      pbVar26[1] = 0x2a;
      pbVar26 = pbVar26 + 2;
      auStack_160._8_8_ = auVar31._8_8_;
      auStack_160._0_8_ = auVar31._0_8_;
      local_228 = (byte *)auStack_160._8_8_;
      uStack_230 = auStack_160._0_8_;
      pbStack_240 = (byte *)0x100d7a;
      local_168 = local_238;
      auStack_160 = auVar31;
      get_curr_arg(&local_198,2);
      pbVar23 = local_198;
      local_168 = local_198;
      auStack_160._4_4_ = (undefined4)((ulong)uStack_190 >> 0x20);
      local_20c = auStack_160._4_4_;
      auStack_160._0_4_ = (undefined4)uStack_190;
      uVar30 = auStack_160._0_4_;
      uVar24 = local_188 & 0xffffffff;
      auStack_160._8_8_ = local_188;
      auStack_160._0_8_ = uStack_190;
      uVar27 = local_188 >> 0x20;
      if ((int)uVar30 < local_1e0) {
        local_1f8._0_4_ = uVar30;
        puVar1 = (undefined8 *)(local_1e8 + (long)(int)uVar30 * 8);
        uStack_220 = 0xde2;
        uStack_21e = 0x10;
        lVar20 = vstrtoimax(*puVar1);
        uVar30 = local_1f8._0_4_;
        if (lVar20 < 0) {
          local_1a0 = 0xffffffff;
          local_199 = '\x01';
        }
        else {
          if (0x7fffffff < lVar20) {
            uStack_220 = 0x1663;
            uStack_21e = 0x10;
            uVar16 = quote(*puVar1);
            pcVar13 = "invalid precision: %s";
            do {
              uStack_220 = 0x1679;
              uStack_21e = 0x10;
              uVar18 = dcgettext(0,pcVar13,5);
              uStack_220 = 0x168d;
              uStack_21e = 0x10;
              error(1,0,uVar18,uVar16);
LAB_0010168d:
              uStack_220 = 0x1696;
              uStack_21e = 0x10;
              uVar16 = quote();
              pcVar13 = "invalid field width: %s";
            } while( true );
          }
          local_1a0 = (int)lVar20;
          local_199 = '\x01';
        }
      }
      else {
        local_1a0 = 0;
        local_199 = '\x01';
      }
    }
    else {
      pbVar26 = pbVar26 + 1;
      if ((int)(char)bVar7 - 0x30U < 10) {
        pbVar14 = pbVar23 + 2;
        uVar21 = (uint)bVar7;
        do {
          pbVar23 = pbVar14;
          bVar7 = *pbVar23;
          *pbVar26 = (byte)uVar21;
          pbVar26 = pbVar26 + 1;
          pbVar14 = pbVar23 + 1;
          uVar21 = (int)(char)bVar7;
        } while ((int)(char)bVar7 - 0x30U < 10);
        goto LAB_001011fc;
      }
      local_199 = '\0';
      pbVar23 = pbVar23 + 1;
    }
  }
  else {
LAB_001011fc:
    local_199 = '\0';
  }
  *pbVar26 = 0;
  do {
    pbVar14 = pbVar23;
    bVar7 = *pbVar14;
    pbVar23 = pbVar14 + 1;
    if (0x2e < (byte)(bVar7 - 0x4c)) break;
  } while ((0x410150000001U >> ((ulong)(bVar7 - 0x4c) & 0x3f) & 1) != 0);
  if (local_148[bVar7] == '\0') {
    uStack_220 = 0x16ba;
    uStack_21e = 0x10;
    uVar16 = dcgettext(0,"%.*s: invalid conversion specification",5);
    iVar9 = 1;
    lVar20 = 0x7fffffff;
    if ((long)pbVar23 - (long)param_1 < 0x80000000) {
      lVar20 = (long)pbVar23 - (long)param_1;
    }
    uStack_220 = 0x16e0;
    uStack_21e = 0x10;
    error(1,0,uVar16,lVar20,param_1);
    uVar16 = _program_name;
    uStack_220 = SUB82(pbVar26,0);
    uStack_21e = (undefined6)((ulong)pbVar26 >> 0x10);
    ppuVar22 = &puStack_2c0;
    uStack_248 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    uStack_230 = uVar24;
    pbStack_240 = pbVar14;
    local_238 = pbVar23;
    local_228 = param_1;
    if (iVar9 != 0) {
      uVar18 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
      __fprintf_chk(_stderr,2,uVar18,uVar16);
      goto LAB_0010173a;
    }
    uVar18 = dcgettext(0,"Usage: %s FORMAT [ARGUMENT]...\n  or:  %s OPTION\n",5);
    __printf_chk(2,uVar18,uVar16,uVar16);
    pFVar6 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:\n\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar6);
    pFVar6 = _stdout;
    pcVar13 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
    fputs_unlocked(pcVar13,pFVar6);
    pFVar6 = _stdout;
    pcVar13 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
    fputs_unlocked(pcVar13,pFVar6);
    pFVar6 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "\nFORMAT controls the output as in C printf.  Interpreted sequences are:\n\n  \\\"      double quote\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar6);
    pFVar6 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar6);
    pFVar6 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "  \\NNN    byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n  \\uHHHH  Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)\n  \\UHHHHHHHH  Unicode character with hex value HHHHHHHH (8 digits)\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar6);
    pFVar6 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "  %%      a single %\n  %b      ARGUMENT as a string with \'\\\' escapes interpreted,\n          except that octal escapes should have a leading 0 like \\0NNN\n  %q      ARGUMENT is printed in a format that can be reused as shell input,\n          escaping non-printable characters with the POSIX $\'\' syntax\n\nand all C format specifications ending with one of diouxXfeEgGcs, with\nARGUMENTs converted to proper type first.  Variable widths are handled.\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar6);
    uVar16 = dcgettext(0,
                       "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                       ,5);
    __printf_chk(2,uVar16,"printf");
    pcVar13 = "[";
    puStack_2c0 = &_LC18;
    pcStack_2b8 = "test invocation";
    apcStack_2b0[0] = "coreutils";
    apcStack_2b0[1] = "Multi-call invocation";
    apcStack_2b0[2] = "sha224sum";
    apcStack_2b0[3] = "sha2 utilities";
    pcStack_290 = "sha256sum";
    pcStack_288 = "sha2 utilities";
    pcStack_280 = "sha384sum";
    pcStack_278 = "sha2 utilities";
    pcStack_270 = "sha512sum";
    pcStack_268 = "sha2 utilities";
    auStack_260 = (undefined1  [16])0x0;
    goto LAB_00101955;
  }
  uVar21 = (uint)uVar27;
  if (((-1 < (int)(uint)uVar27) ||
      (local_20c = local_20c + 1, uVar21 = local_20c, -1 < (int)local_20c)) &&
     (uVar30 = uVar21, (int)uVar24 < (int)uVar30)) {
    uVar24 = (ulong)uVar30;
  }
  local_1b0 = (char *)0x0;
  if ((int)uVar30 < local_1e0) {
    local_1b0 = *(char **)(local_1e8 + (long)(int)uVar30 * 8);
  }
  if ((byte)(bVar7 + 0xbf) < 0x38) {
    uVar25 = 1;
    uVar15 = 1L << (bVar7 + 0xbf & 0x3f);
    local_1a8 = "L";
    if ((uVar15 & 0x7100000071) == 0) {
      uVar15 = uVar15 & 0x90410800800000;
      uVar25 = (ulong)(uVar15 != 0);
      local_1a8 = "j";
      if (uVar15 == 0) {
        local_1a8 = local_208;
      }
    }
  }
  else {
    uVar25 = 0;
    local_1a8 = local_208;
  }
  local_1c8 = (longdouble)CONCAT91(local_1c8._1_9_,bVar7);
  uStack_220 = 0xee7;
  uStack_21e = 0x10;
  local_1b8 = (char *)strlen(local_208);
  local_1d8 = (longdouble)CONCAT28(local_1d8._8_2_,local_1b8 + uVar25 + 2);
  uStack_220 = 0xefe;
  uStack_21e = 0x10;
  uVar16 = xmalloc(local_1b8 + uVar25 + 2);
  local_1f8._0_8_ = uVar16;
  uStack_220 = 0xf1a;
  uStack_21e = 0x10;
  lVar20 = __mempcpy_chk(uVar16,local_208,local_1b8,local_1d8._0_8_);
  if ((uint)uVar25 != 0) {
    uVar15 = 0;
    do {
      uVar21 = (int)uVar15 + 1;
      *(char *)(lVar20 + uVar15) = local_1a8[uVar15];
      uVar15 = (ulong)uVar21;
    } while (uVar21 < (uint)uVar25);
  }
  *(undefined1 *)(lVar20 + uVar25) = local_1c8._0_1_;
  ((undefined1 *)(lVar20 + uVar25))[1] = 0;
  switch(local_1c8._0_1_) {
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    if (local_1b0 == (char *)0x0) {
      lVar29 = (longdouble)0;
    }
    else if (((*local_1b0 == '\"') || (*local_1b0 == '\'')) && (local_1b0[1] != 0)) {
      local_1d8 = (longdouble)(byte)local_1b0[1];
      pcVar13 = local_1b0 + 1;
      local_1b8 = local_1b0;
      uStack_220 = 0x1467;
      uStack_21e = 0x10;
      sVar12 = __ctype_get_mb_cur_max();
      lVar29 = local_1d8;
      if (sVar12 < 2) {
        cVar8 = local_1b8[2];
      }
      else {
        if (local_1b8[2] == '\0') goto LAB_00101347;
        local_1c8 = local_1d8;
        local_1d8 = (longdouble)CONCAT28(local_1d8._8_2_,&local_150);
        local_150 = 0;
        uStack_220 = 0x14af;
        uStack_21e = 0x10;
        sVar12 = strlen(pcVar13);
        uStack_220 = 0x14c7;
        uStack_21e = 0x10;
        lVar20 = rpl_mbrtowc(&local_170,pcVar13,sVar12,local_1d8._0_8_);
        lVar29 = local_1c8;
        if (0 < lVar20) {
          lVar29 = (longdouble)local_170;
          pcVar13 = local_1b8 + lVar20;
        }
        cVar8 = pcVar13[1];
      }
      if ((cVar8 != '\0') && (posixly_correct == '\0')) {
        uStack_220 = 0x1515;
        uStack_21e = 0x10;
        local_1d8 = lVar29;
        uVar16 = dcgettext(0,
                           "warning: %s: character(s) following character constant have been ignored"
                           ,5);
        uStack_220 = 0x152a;
        uStack_21e = 0x10;
        error(0,0,uVar16,pcVar13 + 1);
        lVar29 = local_1d8;
      }
    }
    else {
      local_1d8 = (longdouble)CONCAT28(local_1d8._8_2_,local_1b0);
      uStack_220 = 0x105e;
      uStack_21e = 0x10;
      piVar17 = __errno_location();
      *piVar17 = 0;
      local_1b8 = local_1d8._0_8_;
      uStack_220 = 0x107e;
      uStack_21e = 0x10;
      cl_strtold(local_1d8._0_8_,&local_170);
      uStack_220 = 0x1094;
      uStack_21e = 0x10;
      local_1d8 = in_ST0;
      verify_numeric(local_1b8);
      lVar29 = local_1d8;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
    }
LAB_00101347:
    uStack_220 = (undefined2)((unkuint10)lVar29 >> 0x40);
    local_228 = SUB108(lVar29,0);
    in_ST7 = in_ST6;
    if (local_19a == '\0') {
      if (local_199 == '\0') {
        uStack_230 = 0x101368;
        xprintf(local_1f8._0_8_);
      }
      else {
        uStack_230 = 0x1013ea;
        xprintf(local_1f8._0_8_);
      }
    }
    else if (local_199 == '\0') {
      uStack_230 = 0x10138f;
      xprintf(local_1f8._0_8_,local_1dc);
    }
    else {
      uStack_230 = 0x1013c9;
      xprintf(local_1f8._0_8_,local_1dc,local_1a0);
    }
    break;
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x78:
    pcVar13 = (char *)0x0;
    if (local_1b0 != (char *)0x0) {
      if (((*local_1b0 == '\"') || (*local_1b0 == '\'')) && (local_1b0[1] != 0)) {
        pcVar19 = local_1b0 + 1;
        local_1b8 = local_1b0;
        local_1d8 = (longdouble)CONCAT28(local_1d8._8_2_,(ulong)(byte)local_1b0[1]);
        uStack_220 = 0x1552;
        uStack_21e = 0x10;
        sVar12 = __ctype_get_mb_cur_max();
        pcVar13 = local_1d8._0_8_;
        if (sVar12 < 2) {
          cVar8 = local_1b8[2];
        }
        else {
          if (local_1b8[2] == '\0') goto LAB_00101106;
          local_1c8 = (longdouble)CONCAT28(local_1c8._8_2_,local_1d8._0_8_);
          local_1d8 = (longdouble)CONCAT28(local_1d8._8_2_,&local_150);
          local_150 = 0;
          uStack_220 = 0x159c;
          uStack_21e = 0x10;
          sVar12 = strlen(pcVar19);
          uStack_220 = 0x15b4;
          uStack_21e = 0x10;
          lVar20 = rpl_mbrtowc(&local_170,pcVar19,sVar12,local_1d8._0_8_);
          pcVar13 = local_1c8._0_8_;
          if (0 < lVar20) {
            pcVar13 = (char *)(long)local_170;
            pcVar19 = local_1b8 + lVar20;
          }
          cVar8 = pcVar19[1];
        }
        if ((cVar8 != '\0') && (posixly_correct == '\0')) {
          local_1d8 = (longdouble)CONCAT28(local_1d8._8_2_,pcVar13);
          uStack_220 = 0x1603;
          uStack_21e = 0x10;
          uVar16 = dcgettext(0,
                             "warning: %s: character(s) following character constant have been ignored"
                             ,5);
          uStack_220 = 0x1618;
          uStack_21e = 0x10;
          error(0,0,uVar16,pcVar19 + 1);
          pcVar13 = local_1d8._0_8_;
        }
      }
      else {
        local_1d8._0_8_ = local_1b0;
        uStack_220 = 0x10c8;
        uStack_21e = 0x10;
        piVar17 = __errno_location();
        *piVar17 = 0;
        local_1b8 = local_1d8._0_8_;
        uStack_220 = 0x10ea;
        uStack_21e = 0x10;
        uVar16 = __isoc23_strtoumax(local_1d8._0_8_,&local_170,0);
        local_1d8 = (longdouble)CONCAT28(local_1d8._8_2_,uVar16);
        uStack_220 = 0x1101;
        uStack_21e = 0x10;
        verify_numeric(local_1b8,CONCAT44(uStack_16c,local_170));
        pcVar13 = local_1d8._0_8_;
      }
    }
LAB_00101106:
    if (local_19a == '\0') {
      if (local_199 == '\0') {
        uStack_220 = 0x1127;
        uStack_21e = 0x10;
        xprintf(local_1f8._0_8_);
        break;
      }
LAB_00101167:
      uStack_220 = 0x1177;
      uStack_21e = 0x10;
      xprintf(local_1f8._0_8_,local_1a0,pcVar13);
      break;
    }
    if (local_199 == '\0') {
      uStack_220 = 0x1405;
      uStack_21e = 0x10;
      xprintf(local_1f8._0_8_,local_1dc,pcVar13);
      break;
    }
    goto LAB_00101008;
  case 99:
    if (local_19a == '\0') {
      uStack_220 = 0x11a0;
      uStack_21e = 0x10;
      xprintf(local_1f8._0_8_);
    }
    else {
      uStack_220 = 0x1310;
      uStack_21e = 0x10;
      xprintf(local_1f8._0_8_);
    }
    break;
  case 100:
  case 0x69:
    pcVar13 = (char *)0x0;
    if (local_1b0 != (char *)0x0) {
      uStack_220 = 0x113b;
      uStack_21e = 0x10;
      pcVar13 = (char *)vstrtoimax(local_1b0);
    }
    if (local_19a == '\0') {
      if (local_199 == '\0') {
        uStack_220 = 0x115f;
        uStack_21e = 0x10;
        xprintf(local_1f8._0_8_);
        break;
      }
      goto LAB_00101167;
    }
    goto joined_r0x0010133a;
  case 0x73:
    pcVar13 = local_1b0;
    if (local_1b0 == (char *)0x0) {
      pcVar13 = "";
    }
    if (local_19a == '\0') {
      if (local_199 == '\0') {
        uStack_220 = 0x11d8;
        uStack_21e = 0x10;
        xprintf(local_1f8._0_8_);
      }
      else {
        uStack_220 = 0x142d;
        uStack_21e = 0x10;
        xprintf(local_1f8._0_8_,local_1a0,pcVar13);
      }
      break;
    }
joined_r0x0010133a:
    if (local_199 == '\0') {
      uStack_220 = 0x1330;
      uStack_21e = 0x10;
      xprintf(local_1f8._0_8_,local_1dc,pcVar13);
    }
    else {
LAB_00101008:
      uStack_220 = 0x101c;
      uStack_21e = 0x10;
      xprintf(local_1f8._0_8_,local_1dc,local_1a0,pcVar13);
    }
  }
  uStack_220 = 0x102d;
  uStack_21e = 0x10;
  free((void *)local_1f8._0_8_);
  param_1 = pbVar14;
LAB_00100861:
  iVar9 = (int)uVar24;
  bVar7 = param_1[1];
  param_1 = pbVar23;
joined_r0x00100867:
  if (bVar7 == 0) goto LAB_00100988;
  goto LAB_0010086d;
LAB_00100988:
  uStack_220 = 0x992;
  uStack_21e = 0x10;
  free(local_208);
  iVar11 = iVar9 + 1;
  if (local_1e0 <= iVar9) {
    iVar11 = local_1e0;
  }
  goto LAB_001009a5;
  while( true ) {
    pcVar13 = *(char **)((long)ppuVar22 + 0x10);
    ppuVar22 = (undefined **)((long)ppuVar22 + 0x10);
    if (pcVar13 == (char *)0x0) break;
LAB_00101955:
    iVar11 = strcmp("printf",pcVar13);
    if (iVar11 == 0) break;
  }
  pcVar13 = *(char **)((long)ppuVar22 + 8);
  if (pcVar13 == (char *)0x0) {
    uVar16 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar13 = "printf";
    __printf_chk(2,uVar16,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar19 = setlocale(5,(char *)0x0);
    if (pcVar19 == (char *)0x0) {
      uVar16 = dcgettext(0,"Full documentation <%s%s>\n",5);
      pcVar19 = " invocation";
      __printf_chk(2,uVar16,"https://www.gnu.org/software/coreutils/","printf");
      goto LAB_00101a0b;
    }
LAB_001019b5:
    iVar11 = strncmp(pcVar19,"en_",3);
    pFVar6 = _stdout;
    if (iVar11 != 0) {
      pcVar19 = (char *)dcgettext(0,
                                  "Report any translation bugs to <https://translationproject.org/team/>\n"
                                  ,5);
      fputs_unlocked(pcVar19,pFVar6);
    }
  }
  else {
    uVar16 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar16,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar19 = setlocale(5,(char *)0x0);
    if (pcVar19 != (char *)0x0) goto LAB_001019b5;
  }
  uVar16 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar19 = "";
  __printf_chk(2,uVar16,"https://www.gnu.org/software/coreutils/","printf");
  if (pcVar13 == "printf") {
    pcVar19 = " invocation";
  }
LAB_00101a0b:
  uVar16 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar16,pcVar13,pcVar19);
LAB_0010173a:
                    /* WARNING: Subroutine does not return */
  exit(iVar9);
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
    goto LAB_0010173a;
  }
  uVar3 = dcgettext(0,"Usage: %s FORMAT [ARGUMENT]...\n  or:  %s OPTION\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFORMAT controls the output as in C printf.  Interpreted sequences are:\n\n  \\\"      double quote\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\NNN    byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n  \\uHHHH  Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)\n  \\UHHHHHHHH  Unicode character with hex value HHHHHHHH (8 digits)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %%      a single %\n  %b      ARGUMENT as a string with \'\\\' escapes interpreted,\n          except that octal escapes should have a leading 0 like \\0NNN\n  %q      ARGUMENT is printed in a format that can be reused as shell input,\n          escaping non-printable characters with the POSIX $\'\' syntax\n\nand all C format specifications ending with one of diouxXfeEgGcs, with\nARGUMENTs converted to proper type first.  Variable widths are handled.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,"printf");
  pcVar4 = "[";
  local_a8 = &_LC18;
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
    iVar2 = strcmp("printf",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "printf";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001019b5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","printf");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001019b5:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","printf");
    if (pcVar4 == "printf") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010173a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 main(int param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  exit_status = 0;
  pcVar2 = getenv("POSIXLY_CORRECT");
  posixly_correct = pcVar2 != (char *)0x0;
  if (param_1 == 2) {
    pcVar2 = (char *)param_2[1];
    iVar1 = strcmp(pcVar2,"--help");
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    iVar1 = strcmp(pcVar2,"--version");
    if (iVar1 == 0) {
      uVar3 = proper_name_lite("David MacKenzie","David MacKenzie");
      version_etc(_stdout,"printf","GNU coreutils",_Version,uVar3,0);
      return 0;
    }
    iVar1 = strcmp(pcVar2,"--");
    if (iVar1 == 0) goto LAB_00102772;
  }
  else {
    if (param_1 < 2) {
LAB_00102772:
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    iVar1 = strcmp((char *)param_2[1],"--");
    if (iVar1 == 0) {
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    }
  }
  uVar3 = param_2[1];
  param_1 = param_1 + -2;
  param_2 = param_2 + 2;
  do {
    iVar1 = print_formatted(uVar3,param_1,param_2);
    param_1 = param_1 - iVar1;
    param_2 = param_2 + iVar1;
    if (iVar1 < 1) {
      if (param_1 < 1) {
        return exit_status;
      }
      uVar3 = quote(*param_2);
      uVar4 = dcgettext(0,"warning: ignoring excess arguments, starting with %s",5);
      error(0,0,uVar4,uVar3);
      return exit_status;
    }
  } while (0 < param_1);
  return exit_status;
}


