
arg_cursor * get_curr_arg(arg_cursor *__return_storage_ptr__,wchar_t pos,arg_cursor ac)

{
  long lVar1;
  bool bVar2;
  wchar_t wVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  uVar4 = (int)*ac.f - 0x30;
  if (uVar4 < 10) {
    iVar6 = (int)ac.f[1];
    pcVar7 = ac.f + 1;
    if (9 < iVar6 - 0x30U) {
      if (ac.f[1] == '$') {
LAB_001000d6:
        if (0 < (int)uVar4) {
          wVar3 = uVar4 + L'\xffffffff';
          goto LAB_001000dd;
        }
      }
      goto LAB_00100080;
    }
    bVar2 = false;
    do {
      lVar1 = (long)(int)uVar4;
      iVar5 = (int)(lVar1 * 10);
      iVar6 = (int)(char)((char)iVar6 + -0x30);
      uVar4 = iVar5 + iVar6;
      pcVar7 = pcVar7 + 1;
      bVar2 = (bool)(bVar2 | ((long)iVar5 != lVar1 * 10 || SCARRY4(iVar5,iVar6)));
      iVar6 = (int)*pcVar7;
    } while (iVar6 - 0x30U < 10);
    if (*pcVar7 != '$') goto LAB_00100080;
    if (!bVar2) goto LAB_001000d6;
    wVar3 = L'\x7ffffffe';
LAB_001000dd:
    ac.f = pcVar7 + 1;
    if (pos == L'\0') {
      ac.direc_arg = wVar3;
    }
  }
  else {
LAB_00100080:
    if (pos == L'\0') {
      ac.direc_arg = L'\xffffffff';
      goto LAB_001000a1;
    }
    ac.curr_s_arg = ac.curr_s_arg + L'\x01';
    wVar3 = ac.curr_s_arg;
    if (ac.curr_s_arg < L'\0') goto LAB_001000a1;
  }
  ac.curr_arg = wVar3;
  if (ac.end_arg < ac.curr_arg) {
    ac.end_arg = ac.curr_arg;
  }
LAB_001000a1:
  __return_storage_ptr__->f = ac.f;
  __return_storage_ptr__->curr_arg = (int)CONCAT44(ac.curr_s_arg,ac.curr_arg);
  __return_storage_ptr__->curr_s_arg = (int)(CONCAT44(ac.curr_s_arg,ac.curr_arg) >> 0x20);
  __return_storage_ptr__->end_arg = (int)CONCAT44(ac.direc_arg,ac.end_arg);
  __return_storage_ptr__->direc_arg = (int)(CONCAT44(ac.direc_arg,ac.end_arg) >> 0x20);
  return __return_storage_ptr__;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

wchar_t print_esc(char *escstart,_Bool octal_0)

{
  int iVar1;
  bool bVar2;
  wchar_t wVar3;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
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
  
  bVar12 = escstart[1];
  pbVar13 = (byte *)(ulong)bVar12;
  if (bVar12 == 0x78) {
    pbVar13 = (byte *)(escstart + 2);
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
        pcVar4 = _stdout->_IO_write_ptr;
        if (pcVar4 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar4 + 1;
          *pcVar4 = '\\';
        }
        else {
          __overflow(_stdout,0x5c);
        }
        bVar12 = escstart[1];
        if (bVar12 == 0) {
          return L'\0';
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
          pcVar4 = strchr("\"\\abcefnrtv",(int)(char)bVar12);
          if (pcVar4 != (char *)0x0) break;
          if ((bVar12 & 0xdf) != 0x55) goto LAB_00100199;
          pbVar8 = (byte *)(escstart + 2);
          iVar17 = 0;
          iVar1 = (uint)(bVar12 != 0x75) * 4;
          pbVar13 = (byte *)(escstart + (iVar1 + 6));
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
                return ((int)pbVar13 - (int)escstart) + L'\xffffffff';
              }
              uVar5 = dcgettext(0,"invalid universal character name \\%c%0*x",5);
              pcVar4 = (char *)0x0;
              pcVar16 = (char *)0x1;
              error(1,0,uVar5,(int)(char)bVar12,iVar1 + 4,iVar17);
              if (pcVar16 == pcVar4) {
                uVar5 = quote();
                pcVar4 = "%s: expected a numeric value";
              }
              else {
                piVar6 = __errno_location();
                if (*piVar6 != 0) {
                  uVar5 = quote(pcVar16);
                  wVar3 = error(0,*piVar6,&_LC4,uVar5);
                  exit_status = L'\x01';
                  return wVar3;
                }
                if (*pcVar4 == '\0') {
                  return L'\0';
                }
                uVar5 = quote(pcVar16);
                pcVar4 = "%s: value not completely converted";
              }
              uVar7 = dcgettext(0,pcVar4,5);
              wVar3 = error(0,0,uVar7,uVar5);
              exit_status = L'\x01';
              return wVar3;
            }
          }
LAB_00100260:
          uVar5 = dcgettext(0,"missing hexadecimal number in escape",5);
          error(1,0,uVar5);
        }
        switch((uint)pbVar13 - 0x61 & 0xff) {
        case 0:
          pcVar4 = _stdout->_IO_write_ptr;
          if (pcVar4 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\a';
          }
          else {
            __overflow(_stdout,7);
          }
          break;
        case 1:
          pcVar4 = _stdout->_IO_write_ptr;
          if (pcVar4 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\b';
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
          pcVar4 = _stdout->_IO_write_ptr;
          if (pcVar4 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\x1b';
          }
          else {
            __overflow(_stdout,0x1b);
          }
          break;
        case 5:
          pcVar4 = _stdout->_IO_write_ptr;
          if (pcVar4 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\f';
          }
          else {
            __overflow(_stdout,0xc);
          }
          break;
        case 0xd:
          pcVar4 = _stdout->_IO_write_ptr;
          if (pcVar4 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
          break;
        case 0x11:
          pcVar4 = _stdout->_IO_write_ptr;
          if (pcVar4 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\r';
          }
          else {
            __overflow(_stdout,0xd);
          }
          break;
        case 0x13:
          pcVar4 = _stdout->_IO_write_ptr;
          if (pcVar4 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\t';
          }
          else {
            __overflow(_stdout,9);
          }
          break;
        case 0x15:
          pcVar4 = _stdout->_IO_write_ptr;
          if (pcVar4 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\v';
          }
          else {
            __overflow(_stdout,0xb);
          }
        }
      }
      return L'\x01';
    }
    bVar14 = 0;
    pbVar11 = (byte *)(escstart + (ulong)(bVar12 == 0x30 && octal_0) + 1);
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
  return ((int)pbVar13 - (int)escstart) + L'\xffffffff';
}



/* WARNING: Unknown calling convention */

void verify_numeric(char *s,char *end)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (s == end) {
    uVar3 = quote();
    pcVar4 = "%s: expected a numeric value";
  }
  else {
    piVar1 = __errno_location();
    if (*piVar1 != 0) {
      uVar3 = quote(s);
      error(0,*piVar1,&_LC4,uVar3);
      exit_status = L'\x01';
      return;
    }
    if (*end == '\0') {
      return;
    }
    uVar3 = quote(s);
    pcVar4 = "%s: value not completely converted";
  }
  uVar2 = dcgettext(0,pcVar4,5);
  error(0,0,uVar2,uVar3);
  exit_status = L'\x01';
  return;
}



/* WARNING: Unknown calling convention */

intmax_t vstrtoimax(char *s)

{
  long lVar1;
  char cVar2;
  int *piVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  char *__s;
  long in_FS_OFFSET;
  char *end;
  mbstate_t mbstate;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*s == '\"') || (*s == '\'')) && (uVar4 = (ulong)(byte)s[1], s[1] != 0)) {
    __s = s + 1;
    sVar5 = __ctype_get_mb_cur_max();
    if (sVar5 < 2) {
      cVar2 = s[2];
    }
    else {
      if (s[2] == '\0') goto LAB_001006cb;
      mbstate.__count = 0;
      mbstate.__value = (anon_union_4_2_91654ee9_for___value)0x0;
      sVar5 = strlen(__s);
      lVar6 = rpl_mbrtowc(&end,__s,sVar5,&mbstate);
      if (0 < lVar6) {
        uVar4 = (ulong)(int)end;
        __s = s + lVar6;
      }
      cVar2 = __s[1];
    }
    if ((cVar2 != '\0') && (posixly_correct == false)) {
      uVar7 = dcgettext(0,"warning: %s: character(s) following character constant have been ignored"
                        ,5);
      error(0,0,uVar7,__s + 1);
    }
  }
  else {
    piVar3 = __errno_location();
    *piVar3 = 0;
    uVar4 = __isoc23_strtoimax(s,&end,0);
    verify_numeric(s,(char *)CONCAT44(end._4_4_,(int)end));
  }
LAB_001006cb:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

wchar_t print_formatted(char *format,wchar_t argc,char **argv)

{
  byte *pbVar1;
  bool bVar2;
  arg_cursor ac;
  arg_cursor ac_00;
  arg_cursor ac_01;
  bool bVar3;
  bool bVar4;
  FILE *pFVar5;
  wchar_t wVar6;
  byte bVar7;
  char cVar8;
  wchar_t wVar9;
  uint uVar10;
  int iVar11;
  size_t sVar12;
  char *pcVar13;
  char *pcVar14;
  intmax_t iVar15;
  ulong uVar16;
  void *__ptr;
  int *piVar17;
  char *pcVar18;
  char *__s;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  undefined **ppuVar24;
  byte *pbVar25;
  int __status;
  wchar_t wVar26;
  ulong uVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined *puStackY_2c0;
  char *pcStackY_2b8;
  char *apcStackY_2b0 [4];
  char *pcStackY_290;
  char *pcStackY_288;
  char *pcStackY_280;
  char *pcStackY_278;
  char *pcStackY_270;
  char *pcStackY_268;
  undefined1 auStackY_260 [16];
  undefined8 uStackY_248;
  byte *pbStackY_240;
  wchar_t local_20c;
  wchar_t local_1e0;
  undefined4 local_1dc;
  undefined4 local_1a0;
  arg_cursor local_198;
  char *end;
  undefined1 local_168 [12];
  wchar_t wStack_15c;
  undefined8 local_158;
  mbstate_t mbstate;
  char ok [256];
  
  bVar31 = 0;
  lVar22 = *(long *)(in_FS_OFFSET + 0x28);
  sVar12 = strlen(format);
  pcVar13 = (char *)xmalloc(sVar12 + 1);
  bVar7 = *format;
  if (bVar7 != 0) {
    local_1a0 = 0;
    uVar30 = 0xffffffff;
    wVar26 = L'\xffffffff';
    uVar27 = 0xffffffff;
    local_1dc = 0;
    local_20c = L'\xffffffff';
LAB_0010086d:
    if (bVar7 != 0x25) {
      if (bVar7 == 0x5c) {
        wVar9 = print_esc(format,false);
        format = (char *)((byte *)format + wVar9);
        pbVar25 = (byte *)format + 1;
      }
      else {
        pbVar25 = (byte *)format + 1;
        pbVar29 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar29 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar29 + 1);
          *pbVar29 = bVar7;
        }
        else {
          __overflow(_stdout,(uint)bVar7);
        }
      }
      goto LAB_00100861;
    }
    bVar7 = ((byte *)format)[1];
    pbVar29 = (byte *)format + 1;
    *pcVar13 = '%';
    if (bVar7 == 0x25) {
      pbVar25 = (byte *)format + 2;
      pcVar14 = _stdout->_IO_write_ptr;
      if (pcVar14 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar14 + 1;
        *pcVar14 = '%';
        format = (char *)pbVar29;
      }
      else {
        __overflow(_stdout,0x25);
        format = (char *)pbVar29;
      }
      goto LAB_00100861;
    }
    local_158._0_4_ = (int)uVar27;
    wStack_15c = local_20c;
    local_168._8_4_ = wVar26;
    uVar19 = stack0xfffffffffffffea0;
    local_158._4_4_ = (int)uVar30;
    auVar32 = stack0xfffffffffffffea0;
    pbStackY_240 = (byte *)0x1008dd;
    local_168._8_4_ = (undefined4)uVar19;
    wStack_15c = SUB84(uVar19,4);
    ac.curr_arg = local_168._8_4_;
    ac.curr_s_arg = wStack_15c;
    ac.f = (char *)pbVar29;
    ac.end_arg = (wchar_t)local_158;
    ac.direc_arg = local_158._4_4_;
    local_168._0_8_ = pbVar29;
    unique0x1000168f = auVar32;
    get_curr_arg((arg_cursor *)local_168,L'\0',ac);
    auVar32 = stack0xfffffffffffffea0;
    uVar19 = local_168._0_8_;
    pFVar5 = _stdout;
    uVar30 = (ulong)(uint)local_158._4_4_;
    bVar7 = *(byte *)local_168._0_8_;
    uVar23 = (uint)bVar7;
    wVar26 = SUB164(stack0xfffffffffffffea0,0);
    local_20c = SUB164(stack0xfffffffffffffea0,4);
    wVar9 = SUB164(stack0xfffffffffffffea0,8);
    uVar27 = (ulong)(uint)wVar9;
    if (bVar7 == 0x62) {
      wVar6 = local_158._4_4_;
      if (((L'\xffffffff' < local_158._4_4_) ||
          (local_20c = local_20c + L'\x01', wVar6 = local_20c, L'\xffffffff' < local_20c)) &&
         (wVar26 = wVar6, uVar27 = (ulong)(uint)wVar9, wVar9 < wVar26)) {
        uVar27 = (ulong)(uint)wVar26;
      }
      pbVar25 = (byte *)(local_168._0_8_ + 1);
      format = (char *)uVar19;
      if (wVar26 < argc) {
        bVar7 = *argv[wVar26];
        pbVar29 = (byte *)argv[wVar26];
        while (bVar7 != 0) {
          if (bVar7 == 0x5c) {
            wVar9 = print_esc((char *)pbVar29,true);
            pbVar29 = pbVar29 + wVar9;
          }
          else {
            pbVar1 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar1 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
              *pbVar1 = bVar7;
            }
            else {
              __overflow(_stdout,(uint)bVar7);
            }
          }
          bVar7 = pbVar29[1];
          pbVar29 = pbVar29 + 1;
        }
      }
      goto LAB_00100861;
    }
    if (bVar7 != 0x71) {
      bVar3 = false;
      pcVar14 = ok;
      for (lVar21 = 0x20; lVar21 != 0; lVar21 = lVar21 + -1) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14[2] = '\0';
        pcVar14[3] = '\0';
        pcVar14[4] = '\0';
        pcVar14[5] = '\0';
        pcVar14[6] = '\0';
        pcVar14[7] = '\0';
        pcVar14 = pcVar14 + (ulong)bVar31 * -0x10 + 8;
      }
      ok[0x58] = '\x01';
      bVar4 = false;
      ok[0x78] = '\x01';
      ok[0x75] = '\x01';
      ok[0x73] = '\x01';
      ok[0x6f] = '\x01';
      ok[0x69] = '\x01';
      ok[0x47] = '\x01';
      builtin_strncpy(ok + 99,"\x01\x01\x01\x01\x01",5);
      ok[0x41] = '\x01';
      ok[0x61] = '\x01';
      ok[0x45] = '\x01';
      ok[0x46] = '\x01';
      bVar2 = false;
      pbVar25 = (byte *)local_168._0_8_;
      pbVar29 = (byte *)(pcVar13 + 1);
LAB_00100bb0:
      bVar7 = (byte)uVar23;
      switch(uVar23 - 0x20 & 0xff) {
      case 0:
      case 0xb:
      case 0xd:
        break;
      default:
        goto switchD_00100bc1_caseD_1;
      case 3:
        bVar3 = true;
        bVar4 = true;
        break;
      case 7:
      case 0x29:
        goto switchD_00100bc1_caseD_7;
      case 0x10:
        bVar4 = true;
      }
      pbVar25 = pbVar25 + 1;
      *pbVar29 = bVar7;
      uVar23 = (uint)*pbVar25;
      pbVar29 = pbVar29 + 1;
      goto LAB_00100bb0;
    }
    wVar6 = local_158._4_4_;
    if (((L'\xffffffff' < local_158._4_4_) ||
        (local_20c = local_20c + L'\x01', wVar6 = local_20c, L'\xffffffff' < local_20c)) &&
       (wVar26 = wVar6, uVar27 = (ulong)(uint)wVar9, wVar9 < wVar26)) {
      uVar27 = (ulong)(uint)wVar26;
    }
    wVar9 = (wchar_t)uVar27;
    pbVar25 = (byte *)(local_168._0_8_ + 1);
    format = (char *)uVar19;
    if (argc <= wVar26) goto LAB_00100861;
    pcVar14 = (char *)quotearg_style(3,argv[wVar26]);
    fputs_unlocked(pcVar14,pFVar5);
    bVar7 = *(byte *)(uVar19 + 1);
    format = (char *)pbVar25;
    goto joined_r0x00100867;
  }
  free(pcVar13);
  local_1e0 = L'\0';
LAB_001009a5:
  if (lVar22 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100bc1_caseD_7:
  pbVar25 = pbVar25 + 1;
  *pbVar29 = bVar7;
  bVar4 = true;
  uVar23 = (uint)*pbVar25;
  bVar2 = true;
  pbVar29 = pbVar29 + 1;
  goto LAB_00100bb0;
switchD_00100bc1_caseD_1:
  if (bVar3) {
    ok[99] = '\x01';
    ok[100] = '\0';
    ok[0x65] = '\x01';
    ok[0x66] = '\x01';
    ok[0x69] = '\0';
    ok[0x75] = '\0';
  }
  ok[0x75] = !bVar3;
  ok[0x69] = !bVar3;
  if (bVar2) {
    ok[0x61] = '\0';
    ok[0x41] = '\0';
    if (!bVar4) {
      ok[0x6f] = '\0';
    }
    else {
      ok._99_2_ = SUB42(ok._99_4_,1) << 8;
      ok[0x6f] = '\0';
      ok[0x73] = '\0';
    }
    ok[0x65] = '\0';
    ok[99] = (char)ok._99_2_;
    ok[100] = (char)((ushort)ok._99_2_ >> 8);
    ok[0x45] = '\0';
    ok[0x46] = '\x01';
    ok[0x6f] = '\0';
    ok[0x78] = '\0';
    ok[0x58] = '\0';
    ok[0x73] = !bVar4;
  }
  else if (bVar4) {
    ok._99_4_ = ok._99_4_ & 0xffffff00;
    ok[0x73] = '\0';
  }
  if (bVar7 == 0x2a) {
    local_168._0_8_ = pbVar25 + 1;
    *pbVar29 = 0x2a;
    pbVar29 = pbVar29 + 1;
    pbStackY_240 = (byte *)0x100c8d;
    ac_00.curr_arg = local_168._8_4_;
    ac_00.curr_s_arg = wStack_15c;
    ac_00.f = (char *)local_168._0_8_;
    ac_00.end_arg = (wchar_t)local_158;
    ac_00.direc_arg = local_158._4_4_;
    unique0x1000169f = auVar32;
    get_curr_arg(&local_198,L'\x01',ac_00);
    pbVar25 = (byte *)local_198.f;
    local_168._0_8_ = local_198.f;
    local_158._0_4_ = local_198.end_arg;
    local_158._4_4_ = local_198.direc_arg;
    local_168._8_4_ = local_198.curr_arg;
    wStack_15c = local_198.curr_s_arg;
    auVar32 = stack0xfffffffffffffea0;
    wVar26 = (wchar_t)local_198._8_8_;
    local_20c = SUB84(local_198._8_8_,4);
    wVar9 = (wchar_t)local_198._16_8_;
    if (wVar26 < argc) {
      iVar15 = vstrtoimax(argv[wVar26]);
      if (iVar15 + 0x80000000U >> 0x20 != 0) goto LAB_0010168d;
      bVar7 = *pbVar25;
      local_1dc = (undefined4)iVar15;
      bVar3 = true;
    }
    else {
      local_1dc = 0;
      bVar7 = *local_198.f;
      bVar3 = true;
    }
  }
  else {
    uVar10 = (int)(char)bVar7;
    while (uVar10 - 0x30 < 10) {
      pbVar25 = pbVar25 + 1;
      bVar7 = *pbVar25;
      *pbVar29 = (byte)uVar23;
      pbVar29 = pbVar29 + 1;
      uVar23 = (uint)(char)bVar7;
      uVar10 = uVar23;
    }
    bVar3 = false;
  }
  uVar27 = (ulong)(uint)wVar9;
  uVar30 = (ulong)auVar32._12_4_;
  if (bVar7 == 0x2e) {
    bVar7 = pbVar25[1];
    *pbVar29 = 0x2e;
    ok._99_4_ = ok._99_4_ & 0xffffff00;
    if (bVar7 == 0x2a) {
      local_168._0_8_ = pbVar25 + 2;
      pbVar29[1] = 0x2a;
      pbVar29 = pbVar29 + 2;
      local_158 = auVar32._8_8_;
      stack0xfffffffffffffea0 = auVar32._0_8_;
      pbStackY_240 = (byte *)0x100d7a;
      ac_01.curr_arg = local_168._8_4_;
      ac_01.curr_s_arg = wStack_15c;
      ac_01.f = (char *)local_168._0_8_;
      ac_01.end_arg = (wchar_t)local_158;
      ac_01.direc_arg = local_158._4_4_;
      unique0x100016af = auVar32;
      get_curr_arg(&local_198,L'\x02',ac_01);
      pbVar25 = (byte *)local_198.f;
      local_168._0_8_ = local_198.f;
      wStack_15c = SUB84(local_198._8_8_,4);
      local_20c = wStack_15c;
      local_168._8_4_ = (undefined4)local_198._8_8_;
      wVar26 = local_168._8_4_;
      uVar27 = local_198._16_8_ & 0xffffffff;
      local_158._0_4_ = local_198.end_arg;
      local_158._4_4_ = local_198.direc_arg;
      local_168._8_4_ = local_198.curr_arg;
      wStack_15c = local_198.curr_s_arg;
      uVar30 = (ulong)local_198._16_8_ >> 0x20;
      if (wVar26 < argc) {
        iVar15 = vstrtoimax(argv[wVar26]);
        if (iVar15 < 0) {
          local_1a0 = 0xffffffff;
          bVar2 = true;
        }
        else {
          if (0x7fffffff < iVar15) {
            uVar19 = quote(argv[wVar26]);
            pcVar13 = "invalid precision: %s";
            do {
              uVar20 = dcgettext(0,pcVar13,5);
              error(1,0,uVar20,uVar19);
LAB_0010168d:
              uVar19 = quote();
              pcVar13 = "invalid field width: %s";
            } while( true );
          }
          local_1a0 = (undefined4)iVar15;
          bVar2 = true;
        }
      }
      else {
        local_1a0 = 0;
        bVar2 = true;
      }
    }
    else {
      pbVar29 = pbVar29 + 1;
      if ((int)(char)bVar7 - 0x30U < 10) {
        pbVar1 = pbVar25 + 2;
        uVar23 = (uint)bVar7;
        do {
          pbVar25 = pbVar1;
          bVar7 = *pbVar25;
          *pbVar29 = (byte)uVar23;
          pbVar29 = pbVar29 + 1;
          pbVar1 = pbVar25 + 1;
          uVar23 = (int)(char)bVar7;
        } while ((int)(char)bVar7 - 0x30U < 10);
        goto LAB_001011fc;
      }
      bVar2 = false;
      pbVar25 = pbVar25 + 1;
    }
  }
  else {
LAB_001011fc:
    bVar2 = false;
  }
  *pbVar29 = 0;
  do {
    pbVar29 = pbVar25;
    bVar7 = *pbVar29;
    pbVar25 = pbVar29 + 1;
    if (0x2e < (byte)(bVar7 - 0x4c)) break;
  } while ((0x410150000001U >> ((ulong)(bVar7 - 0x4c) & 0x3f) & 1) != 0);
  if (ok[bVar7] == '\0') {
    uVar19 = dcgettext(0,"%.*s: invalid conversion specification",5);
    __status = 1;
    lVar22 = 0x7fffffff;
    if ((long)pbVar25 - (long)format < 0x80000000) {
      lVar22 = (long)pbVar25 - (long)format;
    }
    error(1,0,uVar19,lVar22,format);
    uVar19 = _program_name;
    ppuVar24 = &puStackY_2c0;
    uStackY_248 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    pbStackY_240 = pbVar29;
    if (__status != 0) {
      uVar20 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
      __fprintf_chk(_stderr,2,uVar20,uVar19);
      goto LAB_0010173a;
    }
    uVar20 = dcgettext(0,"Usage: %s FORMAT [ARGUMENT]...\n  or:  %s OPTION\n",5);
    __printf_chk(2,uVar20,uVar19,uVar19);
    pFVar5 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:\n\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar5);
    pFVar5 = _stdout;
    pcVar13 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
    fputs_unlocked(pcVar13,pFVar5);
    pFVar5 = _stdout;
    pcVar13 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
    fputs_unlocked(pcVar13,pFVar5);
    pFVar5 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "\nFORMAT controls the output as in C printf.  Interpreted sequences are:\n\n  \\\"      double quote\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar5);
    pFVar5 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar5);
    pFVar5 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "  \\NNN    byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n  \\uHHHH  Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)\n  \\UHHHHHHHH  Unicode character with hex value HHHHHHHH (8 digits)\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar5);
    pFVar5 = _stdout;
    pcVar13 = (char *)dcgettext(0,
                                "  %%      a single %\n  %b      ARGUMENT as a string with \'\\\' escapes interpreted,\n          except that octal escapes should have a leading 0 like \\0NNN\n  %q      ARGUMENT is printed in a format that can be reused as shell input,\n          escaping non-printable characters with the POSIX $\'\' syntax\n\nand all C format specifications ending with one of diouxXfeEgGcs, with\nARGUMENTs converted to proper type first.  Variable widths are handled.\n"
                                ,5);
    fputs_unlocked(pcVar13,pFVar5);
    uVar19 = dcgettext(0,
                       "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                       ,5);
    __printf_chk(2,uVar19,"printf");
    pcVar13 = "[";
    puStackY_2c0 = &_LC18;
    pcStackY_2b8 = "test invocation";
    apcStackY_2b0[0] = "coreutils";
    apcStackY_2b0[1] = "Multi-call invocation";
    apcStackY_2b0[2] = "sha224sum";
    apcStackY_2b0[3] = "sha2 utilities";
    pcStackY_290 = "sha256sum";
    pcStackY_288 = "sha2 utilities";
    pcStackY_280 = "sha384sum";
    pcStackY_278 = "sha2 utilities";
    pcStackY_270 = "sha512sum";
    pcStackY_268 = "sha2 utilities";
    auStackY_260 = (undefined1  [16])0x0;
    goto LAB_00101955;
  }
  wVar9 = (wchar_t)uVar30;
  if (((L'\xffffffff' < (wchar_t)uVar30) ||
      (local_20c = local_20c + L'\x01', wVar9 = local_20c, L'\xffffffff' < local_20c)) &&
     (wVar26 = wVar9, (wchar_t)uVar27 < wVar26)) {
    uVar27 = (ulong)(uint)wVar26;
  }
  pcVar14 = (char *)0x0;
  if (wVar26 < argc) {
    pcVar14 = argv[wVar26];
  }
  if ((byte)(bVar7 + 0xbf) < 0x38) {
    uVar28 = 1;
    uVar16 = 1L << (bVar7 + 0xbf & 0x3f);
    pcVar18 = "L";
    if ((uVar16 & 0x7100000071) == 0) {
      uVar16 = uVar16 & 0x90410800800000;
      uVar28 = (ulong)(uVar16 != 0);
      pcVar18 = "j";
      if (uVar16 == 0) {
        pcVar18 = pcVar13;
      }
    }
  }
  else {
    uVar28 = 0;
    pcVar18 = pcVar13;
  }
  sVar12 = strlen(pcVar13);
  lVar21 = uVar28 + 2 + sVar12;
  __ptr = (void *)xmalloc(lVar21);
  lVar21 = __mempcpy_chk(__ptr,pcVar13,sVar12,lVar21);
  if ((uint)uVar28 != 0) {
    uVar16 = 0;
    do {
      uVar23 = (int)uVar16 + 1;
      *(char *)(lVar21 + uVar16) = pcVar18[uVar16];
      uVar16 = (ulong)uVar23;
    } while (uVar23 < (uint)uVar28);
  }
  *(byte *)(lVar21 + uVar28) = bVar7;
  ((byte *)(lVar21 + uVar28))[1] = 0;
  switch(bVar7) {
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    if (pcVar14 != (char *)0x0) {
      if (((*pcVar14 == '\"') || (*pcVar14 == '\'')) && (pcVar14[1] != '\0')) {
        pcVar18 = pcVar14 + 1;
        sVar12 = __ctype_get_mb_cur_max();
        if (sVar12 < 2) {
          cVar8 = pcVar14[2];
        }
        else {
          if (pcVar14[2] == '\0') goto LAB_00101347;
          mbstate.__count = 0;
          mbstate.__value = (anon_union_4_2_91654ee9_for___value)0x0;
          sVar12 = strlen(pcVar18);
          lVar21 = rpl_mbrtowc(&end,pcVar18,sVar12,&mbstate);
          if (0 < lVar21) {
            pcVar18 = pcVar14 + lVar21;
          }
          cVar8 = pcVar18[1];
        }
        if ((cVar8 != '\0') && (posixly_correct == false)) {
          uVar19 = dcgettext(0,
                             "warning: %s: character(s) following character constant have been ignored"
                             ,5);
          error(0,0,uVar19,pcVar18 + 1);
        }
      }
      else {
        piVar17 = __errno_location();
        *piVar17 = 0;
        cl_strtold(pcVar14,&end);
        verify_numeric(pcVar14,(char *)CONCAT44(end._4_4_,(int)end));
      }
    }
LAB_00101347:
    if (bVar3) {
      if (bVar2) {
        xprintf(__ptr,local_1dc,local_1a0);
      }
      else {
        xprintf(__ptr,local_1dc);
      }
    }
    else if (bVar2) {
      xprintf(__ptr);
    }
    else {
      xprintf(__ptr);
    }
    break;
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x78:
    pcVar18 = (char *)0x0;
    if (pcVar14 != (char *)0x0) {
      if (((*pcVar14 == '\"') || (*pcVar14 == '\'')) && (pcVar14[1] != 0)) {
        __s = pcVar14 + 1;
        pcVar18 = (char *)(ulong)(byte)pcVar14[1];
        sVar12 = __ctype_get_mb_cur_max();
        if (sVar12 < 2) {
          cVar8 = pcVar14[2];
        }
        else {
          if (pcVar14[2] == '\0') goto LAB_00101106;
          mbstate.__count = 0;
          mbstate.__value = (anon_union_4_2_91654ee9_for___value)0x0;
          sVar12 = strlen(__s);
          lVar21 = rpl_mbrtowc(&end,__s,sVar12,&mbstate);
          if (0 < lVar21) {
            pcVar18 = (char *)(long)(int)end;
            __s = pcVar14 + lVar21;
          }
          cVar8 = __s[1];
        }
        if ((cVar8 != '\0') && (posixly_correct == false)) {
          uVar19 = dcgettext(0,
                             "warning: %s: character(s) following character constant have been ignored"
                             ,5);
          error(0,0,uVar19,__s + 1);
        }
      }
      else {
        piVar17 = __errno_location();
        *piVar17 = 0;
        pcVar18 = (char *)__isoc23_strtoumax(pcVar14,&end,0);
        verify_numeric(pcVar14,(char *)CONCAT44(end._4_4_,(int)end));
      }
    }
LAB_00101106:
    if (!bVar3) {
      if (!bVar2) {
        xprintf(__ptr);
        break;
      }
LAB_00101167:
      xprintf(__ptr,local_1a0,pcVar18);
      break;
    }
    if (!bVar2) {
      xprintf(__ptr,local_1dc,pcVar18);
      break;
    }
    goto LAB_00101008;
  case 99:
    if (bVar3) {
      xprintf(__ptr);
    }
    else {
      xprintf(__ptr);
    }
    break;
  case 100:
  case 0x69:
    pcVar18 = (char *)0x0;
    if (pcVar14 != (char *)0x0) {
      pcVar18 = (char *)vstrtoimax(pcVar14);
    }
    if (!bVar3) {
      if (!bVar2) {
        xprintf(__ptr);
        break;
      }
      goto LAB_00101167;
    }
    goto joined_r0x0010133a;
  case 0x73:
    if (pcVar14 == (char *)0x0) {
      pcVar14 = "";
    }
    pcVar18 = pcVar14;
    if (!bVar3) {
      if (bVar2) {
        xprintf(__ptr,local_1a0,pcVar14);
      }
      else {
        xprintf(__ptr);
      }
      break;
    }
joined_r0x0010133a:
    if (bVar2) {
LAB_00101008:
      xprintf(__ptr,local_1dc,local_1a0,pcVar18);
    }
    else {
      xprintf(__ptr,local_1dc,pcVar18);
    }
  }
  free(__ptr);
  format = (char *)pbVar29;
LAB_00100861:
  wVar9 = (wchar_t)uVar27;
  bVar7 = ((byte *)format)[1];
  format = (char *)pbVar25;
joined_r0x00100867:
  if (bVar7 == 0) goto LAB_00100988;
  goto LAB_0010086d;
LAB_00100988:
  free(pcVar13);
  local_1e0 = wVar9 + L'\x01';
  if (argc <= wVar9) {
    local_1e0 = argc;
  }
  goto LAB_001009a5;
  while( true ) {
    pcVar13 = *(char **)((long)ppuVar24 + 0x10);
    ppuVar24 = (undefined **)((long)ppuVar24 + 0x10);
    if (pcVar13 == (char *)0x0) break;
LAB_00101955:
    iVar11 = strcmp("printf",pcVar13);
    if (iVar11 == 0) break;
  }
  pcVar13 = *(char **)((long)ppuVar24 + 8);
  if (pcVar13 == (char *)0x0) {
    uVar19 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar13 = "printf";
    __printf_chk(2,uVar19,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar14 = setlocale(5,(char *)0x0);
    if (pcVar14 == (char *)0x0) {
      uVar19 = dcgettext(0,"Full documentation <%s%s>\n",5);
      pcVar14 = " invocation";
      __printf_chk(2,uVar19,"https://www.gnu.org/software/coreutils/","printf");
      goto LAB_00101a0b;
    }
LAB_001019b5:
    iVar11 = strncmp(pcVar14,"en_",3);
    pFVar5 = _stdout;
    if (iVar11 != 0) {
      pcVar14 = (char *)dcgettext(0,
                                  "Report any translation bugs to <https://translationproject.org/team/>\n"
                                  ,5);
      fputs_unlocked(pcVar14,pFVar5);
    }
  }
  else {
    uVar19 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar19,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar14 = setlocale(5,(char *)0x0);
    if (pcVar14 != (char *)0x0) goto LAB_001019b5;
  }
  uVar19 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar14 = "";
  __printf_chk(2,uVar19,"https://www.gnu.org/software/coreutils/","printf");
  if (pcVar13 == "printf") {
    pcVar14 = " invocation";
  }
LAB_00101a0b:
  uVar19 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar19,pcVar13,pcVar14);
LAB_0010173a:
                    /* WARNING: Subroutine does not return */
  exit(__status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(wchar_t status)

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
  if (status != L'\0') {
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
    iVar2 = strcmp("printf",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

wchar_t main(wchar_t argc,char **argv)

{
  int iVar1;
  wchar_t wVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  wchar_t argc_00;
  char **argv_00;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  exit_status = L'\0';
  pcVar3 = getenv("POSIXLY_CORRECT");
  posixly_correct = pcVar3 != (char *)0x0;
  if (argc == L'\x02') {
    pcVar3 = argv[1];
    iVar1 = strcmp(pcVar3,"--help");
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      usage(L'\0');
    }
    iVar1 = strcmp(pcVar3,"--version");
    if (iVar1 == 0) {
      uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
      version_etc(_stdout,"printf","GNU coreutils",_Version,uVar4,0);
      return L'\0';
    }
    iVar1 = strcmp(pcVar3,"--");
    if (iVar1 == 0) goto LAB_00102772;
  }
  else {
    if (argc < L'\x02') {
LAB_00102772:
      uVar4 = dcgettext(0,"missing operand",5);
      error(0,0,uVar4);
                    /* WARNING: Subroutine does not return */
      usage(L'\x01');
    }
    iVar1 = strcmp(argv[1],"--");
    if (iVar1 == 0) {
      argc = argc + L'\xffffffff';
      argv = argv + 1;
    }
  }
  pcVar3 = argv[1];
  argc_00 = argc + L'\xfffffffe';
  argv_00 = argv + 2;
  do {
    wVar2 = print_formatted(pcVar3,argc_00,argv_00);
    argc_00 = argc_00 - wVar2;
    argv_00 = argv_00 + wVar2;
    if (wVar2 < L'\x01') {
      if (argc_00 < L'\x01') {
        return exit_status;
      }
      uVar4 = quote(*argv_00);
      uVar5 = dcgettext(0,"warning: ignoring excess arguments, starting with %s",5);
      error(0,0,uVar5,uVar4);
      return exit_status;
    }
  } while (L'\0' < argc_00);
  return exit_status;
}


