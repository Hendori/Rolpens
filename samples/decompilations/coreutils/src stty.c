
/* WARNING: Unknown calling convention */

ulong baud_to_value(speed_t speed)

{
  long *plVar1;
  speed_t *psVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar2 = &speeds[0].speed;
  do {
    if (*psVar2 == speed) {
      return speeds[iVar3].value;
    }
    iVar3 = iVar3 + 1;
    plVar1 = (long *)(psVar2 + 4);
    psVar2 = psVar2 + 6;
  } while (*plVar1 != 0);
  return 0;
}



/* WARNING: Unknown calling convention */

int screen_columns(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long n_columns;
  winsize win;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ioctl(1,0x5413,&win);
  if ((iVar2 != 0) || (uVar4 = (ulong)win.ws_col, win.ws_col == 0)) {
    pcVar3 = getenv("COLUMNS");
    if (pcVar3 != (char *)0x0) {
      iVar2 = xstrtol(pcVar3,0,0,&n_columns,&_LC1);
      if ((iVar2 == 0) && (uVar4 = n_columns, n_columns - 1U < 0x7fffffff)) goto LAB_001000ca;
    }
    uVar4 = 0x50;
  }
LAB_001000ca:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void wrapf(char *message,...)

{
  long lVar1;
  char *pcVar2;
  char in_AL;
  int iVar3;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  char *buf;
  va_list args;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  args[0].overflow_arg_area = &stack0x00000008;
  args[0].gp_offset = 8;
  args[0].reg_save_area = local_b8;
  args[0].fp_offset = 0x30;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  iVar3 = __vasprintf_chk(&buf,2,message,args);
  if (iVar3 < 0) {
    xalloc_die();
  }
  else {
    if (0 < current_col) {
      pcVar2 = _stdout->_IO_write_ptr;
      if (iVar3 < max_col - current_col) {
        if (pcVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
        current_col = current_col + 1;
      }
      else {
        if (pcVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __overflow(_stdout,10);
        }
        current_col = 0;
      }
    }
    fputs_unlocked(buf,_stdout);
    free(buf);
    current_col = current_col + iVar3;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

uintmax_t integer_arg(char *s,uintmax_t maxval)

{
  undefined8 uVar1;
  uintmax_t uVar2;
  
  uVar1 = dcgettext(0,"invalid integer argument",5);
  uVar2 = xnumtoumax(s,0,0,maxval,&_LC3,uVar1,0,0);
  return uVar2;
}



/* WARNING: Unknown calling convention */

char * visible(cc_t ch)

{
  undefined1 *puVar1;
  
  if (ch < 0x20) {
    buf_1[1] = ch + '@';
    buf_1[0] = 0x5e;
  }
  else {
    if (ch < 0x7f) {
      buf_1[1] = 0;
      buf_1[0] = ch;
      return buf_1;
    }
    if (ch != '\x7f') {
      buf_1._0_2_ = 0x2d4d;
      if (ch < 0xa0) {
        buf_1[3] = ch + 0xc0;
        buf_1[2] = 0x5e;
      }
      else {
        if (ch != 0xff) {
          puVar1 = buf_1 + 3;
          buf_1[2] = ch + 0x80;
          goto LAB_00100320;
        }
        buf_1._2_2_ = 0x3f5e;
      }
      puVar1 = buf_1 + 4;
      goto LAB_00100320;
    }
    buf_1._0_2_ = 0x3f5e;
  }
  puVar1 = buf_1 + 2;
LAB_00100320:
  *puVar1 = 0;
  return buf_1;
}



/* WARNING: Unknown calling convention */

void set_window_size(int rows,int cols,char *device_name)

{
  speed_t __speed;
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  termios *__termios_p;
  speed_map *psVar8;
  char *__s1;
  char *pcVar9;
  char cVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  ushort uStack_60;
  ushort uStack_5e;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  char *pcStack_40;
  winsize win;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack_40 = (char *)0x1003e5;
  iVar2 = ioctl(0,0x5413,&win);
  if (iVar2 != 0) {
    pcStack_40 = (char *)0x1003ee;
    piVar4 = __errno_location();
    if (*piVar4 != 0x16) {
      pcStack_40 = (char *)0x100450;
      uVar5 = quotearg_n_style_colon(0,3,device_name);
      pcStack_40 = (char *)0x100469;
      error(1,*piVar4,&_LC6,uVar5);
      goto LAB_00100469;
    }
    win.ws_row = 0;
    win.ws_col = 0;
    win.ws_xpixel = 0;
    win.ws_ypixel = 0;
  }
  if (-1 < rows) {
    win.ws_row = (ushort)rows;
  }
  if (-1 < cols) {
    win.ws_col = (ushort)cols;
  }
  pcStack_40 = (char *)0x100420;
  iVar2 = ioctl(0,0x5414,&win);
  if (iVar2 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00100469:
                    /* WARNING: Subroutine does not return */
    pcStack_40 = (char *)0x10046e;
    __stack_chk_fail();
  }
  pcStack_40 = (char *)0x10047d;
  uVar5 = quotearg_n_style_colon(0,3,device_name);
  pcStack_40 = (char *)0x100485;
  puVar6 = (uint *)__errno_location();
  cVar10 = '\x01';
  uVar11 = (ulong)*puVar6;
  pcStack_40 = "\x0f\x1f";
  error(1,uVar11,&_LC6,uVar5);
  lStack_58 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_50 = uVar5;
  uStack_48 = (ulong)(uint)rows;
  pcStack_40 = device_name;
  iVar2 = ioctl(0,0x5413,&uStack_60);
  if (iVar2 == 0) {
    if (cVar10 == '\0') {
      wrapf("%d %d\n",(ulong)uStack_60,(ulong)uStack_5e);
      current_col = 0;
    }
    else {
      wrapf("rows %d; columns %d;",(ulong)uStack_60,(ulong)uStack_5e);
    }
  }
  else {
    piVar4 = __errno_location();
    if (*piVar4 != 0x16) {
      uVar5 = quotearg_n_style_colon(0,3,uVar11);
      error(1,*piVar4,&_LC6,uVar5);
      goto LAB_00100562;
    }
    if (cVar10 == '\0') {
      uVar5 = quotearg_n_style_colon(0,3,uVar11);
      uVar7 = dcgettext(0,"%s: no size information for this device",5);
      __s1 = (char *)0x0;
      uVar11 = 1;
      error(1,0,uVar7,uVar5);
      pcVar9 = "0";
      iVar2 = 0;
      psVar8 = speeds;
      do {
        psVar8 = psVar8 + 1;
        iVar3 = strcmp(__s1,pcVar9);
        if (iVar3 == 0) {
          __speed = speeds[iVar2].speed;
          if (__speed != 0xffffffff) {
            if ((uVar11 & 0xfffffffd) == 0) {
              last_ibaud = __speed;
              iVar2 = cfsetispeed(__termios_p,__speed);
              if (iVar2 == 0) {
                if ((int)uVar11 != 2) {
                  return;
                }
                goto LAB_0010060c;
              }
              uVar5 = quotearg_style(4,__s1);
              pcVar9 = "unsupported ispeed %s";
            }
            else {
LAB_0010060c:
              last_obaud = __speed;
              iVar2 = cfsetospeed(__termios_p,__speed);
              if (iVar2 == 0) {
                return;
              }
              uVar5 = quotearg_style(4,__s1);
              pcVar9 = "unsupported ospeed %s";
            }
            uVar7 = dcgettext(0,pcVar9,5);
            error(1,0,uVar7,uVar5);
          }
          break;
        }
        pcVar9 = psVar8->string;
        iVar2 = iVar2 + 1;
      } while (pcVar9 != (char *)0x0);
                    /* WARNING: Subroutine does not return */
      __assert_fail("baud != (speed_t) -1","src/stty.c",0x6bc,"set_speed");
    }
  }
  if (lStack_58 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100562:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void display_window_size(_Bool fancy,char *device_name)

{
  speed_t __speed;
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  termios *__termios_p;
  speed_map *psVar7;
  char *__s1;
  char *pcVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  winsize win;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ioctl(0,0x5413,&win);
  if (iVar2 == 0) {
    if (fancy) {
      wrapf("rows %d; columns %d;",(ulong)win.ws_row,(ulong)win.ws_col);
    }
    else {
      wrapf("%d %d\n",(ulong)win.ws_row,(ulong)win.ws_col);
      current_col = 0;
    }
  }
  else {
    piVar4 = __errno_location();
    if (*piVar4 != 0x16) {
      uVar5 = quotearg_n_style_colon(0,3,device_name);
      error(1,*piVar4,&_LC6,uVar5);
      goto LAB_00100562;
    }
    if (!fancy) {
      uVar5 = quotearg_n_style_colon(0,3,device_name);
      uVar6 = dcgettext(0,"%s: no size information for this device",5);
      __s1 = (char *)0x0;
      uVar9 = 1;
      error(1,0,uVar6,uVar5);
      pcVar8 = "0";
      iVar2 = 0;
      psVar7 = speeds;
      do {
        psVar7 = psVar7 + 1;
        iVar3 = strcmp(__s1,pcVar8);
        if (iVar3 == 0) {
          __speed = speeds[iVar2].speed;
          if (__speed != 0xffffffff) {
            if ((uVar9 & 0xfffffffd) == 0) {
              last_ibaud = __speed;
              iVar2 = cfsetispeed(__termios_p,__speed);
              if (iVar2 == 0) {
                if ((int)uVar9 != 2) {
                  return;
                }
                goto LAB_0010060c;
              }
              uVar5 = quotearg_style(4,__s1);
              pcVar8 = "unsupported ispeed %s";
            }
            else {
LAB_0010060c:
              last_obaud = __speed;
              iVar2 = cfsetospeed(__termios_p,__speed);
              if (iVar2 == 0) {
                return;
              }
              uVar5 = quotearg_style(4,__s1);
              pcVar8 = "unsupported ospeed %s";
            }
            uVar6 = dcgettext(0,pcVar8,5);
            error(1,0,uVar6,uVar5);
          }
          break;
        }
        pcVar8 = psVar7->string;
        iVar2 = iVar2 + 1;
      } while (pcVar8 != (char *)0x0);
                    /* WARNING: Subroutine does not return */
      __assert_fail("baud != (speed_t) -1","src/stty.c",0x6bc,"set_speed");
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100562:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void set_speed(speed_setting type,char *arg,termios *mode)

{
  speed_t __speed;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  speed_map *psVar5;
  char *pcVar6;
  
  pcVar6 = "0";
  iVar2 = 0;
  psVar5 = speeds;
  do {
    psVar5 = psVar5 + 1;
    iVar1 = strcmp(arg,pcVar6);
    if (iVar1 == 0) {
      __speed = speeds[iVar2].speed;
      if (__speed != 0xffffffff) {
        if ((type & ~both_speeds) == input_speed) {
          last_ibaud = __speed;
          iVar2 = cfsetispeed((termios *)mode,__speed);
          if (iVar2 == 0) {
            if (type != both_speeds) {
              return;
            }
            goto LAB_0010060c;
          }
          uVar4 = quotearg_style(4,arg);
          pcVar6 = "unsupported ispeed %s";
        }
        else {
LAB_0010060c:
          last_obaud = __speed;
          iVar2 = cfsetospeed((termios *)mode,__speed);
          if (iVar2 == 0) {
            return;
          }
          uVar4 = quotearg_style(4,arg);
          pcVar6 = "unsupported ospeed %s";
        }
        uVar3 = dcgettext(0,pcVar6,5);
        error(1,0,uVar3,uVar4);
      }
      break;
    }
    pcVar6 = psVar5->string;
    iVar2 = iVar2 + 1;
  } while (pcVar6 != (char *)0x0);
                    /* WARNING: Subroutine does not return */
  __assert_fail("baud != (speed_t) -1","src/stty.c",0x6bc,"set_speed");
}



/* WARNING: Unknown calling convention */

void display_speed(termios *mode,_Bool fancy)

{
  long *plVar1;
  speed_t sVar2;
  speed_t sVar3;
  int iVar4;
  speed_t *psVar5;
  ulong uVar6;
  ulong uVar7;
  
  sVar2 = cfgetispeed((termios *)mode);
  if (sVar2 != 0) {
    sVar2 = cfgetispeed((termios *)mode);
    sVar3 = cfgetospeed((termios *)mode);
    if (sVar2 != sVar3) {
      sVar2 = cfgetospeed((termios *)mode);
      iVar4 = 0;
      psVar5 = &speeds[0].speed;
      do {
        if (sVar2 == *psVar5) {
          uVar6 = speeds[iVar4].value;
          goto LAB_001007a9;
        }
        iVar4 = iVar4 + 1;
        plVar1 = (long *)(psVar5 + 4);
        psVar5 = psVar5 + 6;
      } while (*plVar1 != 0);
      uVar6 = 0;
LAB_001007a9:
      sVar2 = cfgetispeed((termios *)mode);
      iVar4 = 0;
      psVar5 = &speeds[0].speed;
      do {
        if (sVar2 == *psVar5) {
          uVar7 = speeds[iVar4].value;
          goto LAB_001007e2;
        }
        iVar4 = iVar4 + 1;
        plVar1 = (long *)(psVar5 + 4);
        psVar5 = psVar5 + 6;
      } while (*plVar1 != 0);
      uVar7 = 0;
LAB_001007e2:
      if (!fancy) {
        wrapf("%lu %lu\n",uVar7,uVar6);
        current_col = 0;
        return;
      }
      wrapf("ispeed %lu baud; ospeed %lu baud;",uVar7,uVar6);
      return;
    }
  }
  sVar2 = cfgetospeed((termios *)mode);
  iVar4 = 0;
  psVar5 = &speeds[0].speed;
  do {
    if (sVar2 == *psVar5) {
      uVar6 = speeds[iVar4].value;
      goto LAB_00100741;
    }
    iVar4 = iVar4 + 1;
    plVar1 = (long *)(psVar5 + 4);
    psVar5 = psVar5 + 6;
  } while (*plVar1 != 0);
  uVar6 = 0;
LAB_00100741:
  if (!fancy) {
    wrapf("%lu\n",uVar6);
    current_col = 0;
    return;
  }
  wrapf("speed %lu baud;",uVar6);
  return;
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
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001008ca;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [-F DEVICE | --file=DEVICE] [SETTING]...\n  or:  %s [-F DEVICE | --file=DEVICE] [-a|--all]\n  or:  %s [-F DEVICE | --file=DEVICE] [-g|--save]\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Print or change terminal characteristics.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --all          print all current settings in human-readable form\n  -g, --save         print all current settings in a stty-readable form\n  -F, --file=DEVICE  open and use the specified DEVICE instead of stdin\n"
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
                             "\nOptional - before SETTING indicates negation.  An * marks non-POSIX\nsettings.  The underlying system defines which settings are available.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nSpecial characters:\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * discard CHAR  CHAR will toggle discarding of output\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   eof CHAR      CHAR will send an end of file (terminate the input)\n   eol CHAR      CHAR will end the line\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * eol2 CHAR     alternate CHAR for ending the line\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   erase CHAR    CHAR will erase the last character typed\n   intr CHAR     CHAR will send an interrupt signal\n   kill CHAR     CHAR will erase the current line\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * lnext CHAR    CHAR will enter the next character quoted\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"   quit CHAR     CHAR will send a quit signal\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * rprnt CHAR    CHAR will redraw the current line\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   start CHAR    CHAR will restart the output after stopping it\n   stop CHAR     CHAR will stop the output\n   susp CHAR     CHAR will send a terminal stop signal\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * swtch CHAR    CHAR will switch to a different shell layer\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * werase CHAR   CHAR will erase the last word typed\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nSpecial settings:\n   N             set the input and output speeds to N bauds\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   cols N        tell the kernel that the terminal has N columns\n * columns N     same as cols N\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  if (tcsetattr_options == 1) {
    uVar5 = dcgettext(0,&_LC43,5);
  }
  else {
    uVar5 = dcgettext(0,&_LC44,5);
  }
  uVar3 = dcgettext(0,
                    " * [-]drain      wait for transmission before applying settings (%s by default)\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"   ispeed N      set the input speed to N\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * line N        use line discipline N\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   min N         with -icanon, set N characters minimum for a completed read\n   ospeed N      set the output speed to N\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   rows N        tell the kernel that the terminal has N rows\n   size          print the number of rows and columns according to the kernel\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   speed         print the terminal speed\n   time N        with -icanon, set read timeout of N tenths of a second\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nControl settings:\n   [-]clocal     disable modem control signals\n   [-]cread      allow input to be received\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]crtscts    enable RTS/CTS handshaking\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"   csN           set character size to N bits, N in [5..8]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]cstopb     use two stop bits per character (one with \'-\')\n   [-]hup        send a hangup signal when the last process closes the tty\n   [-]hupcl      same as [-]hup\n   [-]parenb     generate parity bit in output and expect parity bit in input\n   [-]parodd     set odd parity (or even parity with \'-\')\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]cmspar     use \"stick\" (mark/space) parity\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nInput settings:\n   [-]brkint     breaks cause an interrupt signal\n   [-]icrnl      translate carriage return to newline\n   [-]ignbrk     ignore break characters\n   [-]igncr      ignore carriage return\n   [-]ignpar     ignore characters with parity errors\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]imaxbel    beep and do not flush a full input buffer on a character\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]inlcr      translate newline to carriage return\n   [-]inpck      enable input parity checking\n   [-]istrip     clear high (8th) bit of input characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]iutf8      assume input characters are UTF-8 encoded\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]iuclc      translate uppercase characters to lowercase\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]ixany      let any character restart output, not only start character\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]ixoff      enable sending of start/stop characters\n   [-]ixon       enable XON/XOFF flow control\n   [-]parmrk     mark parity errors (with a 255-0-character sequence)\n   [-]tandem     same as [-]ixoff\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nOutput settings:\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * bsN           backspace delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * crN           carriage return delay style, N in [0..3]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * ffN           form feed delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * nlN           newline delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]ocrnl      translate carriage return to newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]ofdel      use delete characters for fill instead of NUL characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]ofill      use fill (padding) characters instead of timing for delays\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]olcuc      translate lowercase characters to uppercase\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]onlcr      translate newline to carriage return-newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]onlret     newline performs a carriage return\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]onocr      do not print carriage returns in the first column\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"   [-]opost      postprocess output\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * tabN          horizontal tab delay style, N in [0..3]\n * tabs          same as tab0\n * -tabs         same as tab3\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * vtN           vertical tab delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nLocal settings:\n   [-]crterase   echo erase characters as backspace-space-backspace\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * crtkill       kill all line by obeying the echoprt and echoe settings\n * -crtkill      kill all line by obeying the echoctl and echok settings\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]ctlecho    echo control characters in hat notation (\'^c\')\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"   [-]echo       echo input characters\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]echoctl    same as [-]ctlecho\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]echoe      same as [-]crterase\n   [-]echok      echo a newline after a kill character\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]echoke     same as [-]crtkill\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]echonl     echo newline even if not echoing other characters\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]echoprt    echo erased characters backward, between \'\\\' and \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]extproc    enable \"LINEMODE\"; useful with high latency links\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]flusho     discard output\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "   [-]icanon     enable special characters: %s\n   [-]iexten     enable non-POSIX special characters\n"
                    ,5);
  __printf_chk(2,uVar5,"erase, kill, werase, rprnt");
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]isig       enable interrupt, quit, and suspend special characters\n   [-]noflsh     disable flushing after interrupt and quit special characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]prterase   same as [-]echoprt\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]tostop     stop background jobs that try to write to the terminal\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]xcase      with icanon, escape with \'\\\' for uppercase characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nCombination settings:\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]LCASE      same as [-]lcase\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"   cbreak        same as -icanon\n   -cbreak       same as icanon\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   cooked        same as brkint ignpar istrip icrnl ixon opost isig\n                 icanon, eof and eol characters to their default values\n   -cooked       same as raw\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,"   crt           same as %s\n",5);
  __printf_chk(2,uVar5,"echoe echoctl echoke");
  uVar5 = dcgettext(0,"   dec           same as %s intr ^c erase 0177\n                 kill ^u\n",5
                   );
  __printf_chk(2,uVar5,"echoe echoctl echoke -ixany");
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]decctlq    same as [-]ixany\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   ek            erase and kill characters to their default values\n   evenp         same as parenb -parodd cs7\n   -evenp        same as -parenb cs8\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0," * [-]lcase      same as xcase iuclc olcuc\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   litout        same as -parenb -istrip -opost cs8\n   -litout       same as parenb istrip opost cs7\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,"   nl            same as %s\n   -nl           same as %s\n",5);
  __printf_chk(2,uVar5,"-icrnl -onlcr","icrnl -inlcr -igncr onlcr -ocrnl -onlret");
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   oddp          same as parenb parodd cs7\n   -oddp         same as -parenb cs8\n   [-]parity     same as [-]evenp\n   pass8         same as -parenb -istrip cs8\n   -pass8        same as parenb istrip cs7\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "   raw           same as -ignbrk -brkint -ignpar -parmrk -inpck -istrip\n                 -inlcr -igncr -icrnl -ixon -ixoff -icanon -opost\n                 -isig%s min 1 time 0\n   -raw          same as cooked\n"
                    ,5);
  __printf_chk(2,uVar5," -iuclc -ixany -imaxbel -xcase");
  uVar5 = dcgettext(0,
                    "   sane          same as cread -ignbrk brkint -inlcr -igncr icrnl\n                 icanon iexten echo echoe echok -echonl -noflsh\n                 %s\n                 %s\n                 %s,\n                 all special characters to their default values\n"
                    ,5);
  __printf_chk(2,uVar5,"-ixoff -iutf8 -iuclc -ixany imaxbel -xcase -olcuc -ocrnl",
               "opost -ofill onlcr -onocr -onlret nl0 cr0 tab0 bs0 vt0 ff0",
               "isig -tostop -ofdel -echoprt echoctl echoke -extproc -flusho");
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nHandle the tty line connected to standard input.  Without arguments,\nprints baud rate, line discipline, and deviations from stty sane.  In\nsettings, CHAR is taken literally, or coded as in ^c, 0x37, 0177 or\n127; special values ^- or undef used to disable special characters.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
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
    iVar2 = strcmp("stty",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC20;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010166d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC20);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010166d:
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC20);
    if (puVar7 == &_LC20) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001008ca:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Unknown calling convention */

void apply_settings(_Bool checking,char *device_name,char **settings,int n_settings,termios *mode,
                   _Bool *require_set_attr)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *__s1;
  char **ppcVar4;
  speed_t speed;
  speed_t speed_00;
  byte bVar5;
  int iVar6;
  int iVar7;
  speed_t sVar8;
  uintmax_t uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  char cVar14;
  int iVar15;
  control_info *pcVar16;
  speed_map *psVar17;
  long lVar18;
  char cVar19;
  char *pcVar20;
  mode_info *pmVar21;
  char *pcVar22;
  long in_FS_OFFSET;
  bool bVar23;
  int local_94;
  _Bool *local_80;
  char local_6c;
  char *p;
  tcflag_t flag [4];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  cVar14 = checking;
  if (n_settings < 2) goto LAB_00101983;
  iVar15 = 1;
  local_94 = n_settings;
  local_80 = require_set_attr;
LAB_00101824:
  pcVar22 = settings[iVar15];
  if (pcVar22 == (char *)0x0) goto LAB_00101817;
  bVar23 = *pcVar22 == '-';
  if (bVar23) {
    pcVar22 = pcVar22 + 1;
  }
  iVar6 = strcmp(pcVar22,"drain");
  if (iVar6 == 0) {
    tcsetattr_options = bVar23 ^ 1;
    goto LAB_00101817;
  }
  pmVar21 = mode_info;
  iVar6 = 0;
  pcVar20 = "parenb";
  do {
    pmVar21 = pmVar21 + 1;
    iVar7 = strcmp(pcVar22,pcVar20);
    if (iVar7 == 0) {
      if ((mode_info[iVar6].flags & 0x10U) != 0) goto LAB_001018c1;
      if ((!bVar23) || ((mode_info[iVar6].flags & 4U) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00101b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00104f70 + *(int *)(&DAT_00104f70 + (ulong)mode_info[iVar6].type * 4)))();
        return;
      }
      *local_80 = true;
      goto LAB_00101ea8;
    }
    pcVar20 = pmVar21->name;
    iVar6 = iVar6 + 1;
  } while (pcVar20 != (char *)0x0);
  if (bVar23) {
LAB_00101ea8:
    uVar12 = quote(pcVar22 + -1);
    pcVar22 = "invalid argument %s";
    goto LAB_00101ec0;
  }
  pcVar16 = control_info;
  iVar6 = 0;
  pcVar20 = "intr";
  do {
    pcVar16 = pcVar16 + 1;
    iVar7 = strcmp(pcVar22,pcVar20);
    if (iVar7 == 0) {
      if ((iVar15 != local_94 + -1) &&
         (__s1 = (byte *)settings[(long)iVar15 + 1], __s1 != (byte *)0x0)) {
        iVar15 = iVar15 + 1;
        iVar7 = strcmp(pcVar20,"min");
        if ((iVar7 != 0) && (iVar7 = strcmp(pcVar20,"time"), iVar7 != 0)) {
          bVar1 = *__s1;
          bVar5 = bVar1;
          if ((bVar1 == 0) || (bVar2 = __s1[1], bVar2 == 0)) goto LAB_00101a5c;
          iVar7 = strcmp((char *)__s1,"^-");
          bVar5 = 0;
          if ((iVar7 == 0) || (iVar7 = strcmp((char *)__s1,"undef"), iVar7 == 0)) goto LAB_00101a5c;
          if (bVar1 == 0x5e) {
            if (bVar2 == 0x3f) {
              bVar5 = 0x7f;
            }
            else {
              bVar5 = bVar2 & 0x9f;
            }
            goto LAB_00101a5c;
          }
        }
        uVar12 = dcgettext(0,"invalid integer argument",5);
        bVar5 = xnumtoumax(__s1,0,0,0xff,&_LC3,uVar12,0,0);
LAB_00101a5c:
        mode->c_cc[control_info[iVar6].offset] = bVar5;
        *local_80 = true;
        goto LAB_00101817;
      }
      goto LAB_001021b0;
    }
    pcVar20 = pcVar16->name;
    iVar6 = iVar6 + 1;
  } while (pcVar20 != (char *)0x0);
LAB_001018c1:
  iVar6 = strcmp(pcVar22,"ispeed");
  if (iVar6 == 0) {
    if ((iVar15 == local_94 + -1) || (pcVar20 = settings[(long)iVar15 + 1], pcVar20 == (char *)0x0))
    goto LAB_001021b0;
    psVar17 = speeds;
    pcVar22 = "0";
    iVar6 = 0;
    while (psVar17 = psVar17 + 1, iVar7 = strcmp(pcVar20,pcVar22), iVar7 != 0) {
      pcVar22 = psVar17->string;
      iVar6 = iVar6 + 1;
      if (pcVar22 == (char *)0x0) goto LAB_0010233f;
    }
    if (speeds[iVar6].speed == 0xffffffff) {
LAB_0010233f:
      uVar12 = quote(pcVar20);
      pcVar22 = "invalid ispeed %s";
      goto LAB_00101ec0;
    }
    set_speed(input_speed,pcVar20,mode);
joined_r0x00101b30:
    if (!checking) {
      *local_80 = true;
    }
  }
  else {
    iVar6 = strcmp(pcVar22,"ospeed");
    if (iVar6 == 0) {
      if ((iVar15 != local_94 + -1) &&
         (pcVar20 = settings[(long)iVar15 + 1], pcVar20 != (char *)0x0)) {
        psVar17 = speeds;
        pcVar22 = "0";
        iVar6 = 0;
        while (psVar17 = psVar17 + 1, iVar7 = strcmp(pcVar20,pcVar22), iVar7 != 0) {
          pcVar22 = psVar17->string;
          iVar6 = iVar6 + 1;
          if (pcVar22 == (char *)0x0) goto LAB_0010235b;
        }
        if (speeds[iVar6].speed != 0xffffffff) {
          set_speed(output_speed,pcVar20,mode);
          goto joined_r0x00101b30;
        }
LAB_0010235b:
        uVar12 = quote(pcVar20);
        pcVar22 = "invalid ospeed %s";
        goto LAB_00101ec0;
      }
      goto LAB_001021b0;
    }
    iVar6 = strcmp(pcVar22,"rows");
    if (iVar6 == 0) {
      if ((iVar15 == local_94 + -1) || (settings[(long)iVar15 + 1] == (char *)0x0))
      goto LAB_001021b0;
      if (!checking) {
        uVar9 = integer_arg(settings[(long)iVar15 + 1],0x7fffffff);
        set_window_size((int)uVar9,-1,device_name);
      }
    }
    else {
      iVar6 = strcmp(pcVar22,"cols");
      if ((iVar6 != 0) && (iVar6 = strcmp(pcVar22,"columns"), iVar6 != 0)) {
        iVar6 = strcmp(pcVar22,"size");
        if (iVar6 == 0) goto LAB_00101f5e;
        iVar6 = strcmp(pcVar22,"line");
        if (iVar6 != 0) {
          iVar6 = strcmp(pcVar22,"speed");
          if (iVar6 == 0) {
            if (checking) goto LAB_00101817;
            max_col = screen_columns();
            display_speed(mode,false);
            goto LAB_00101817;
          }
          iVar6 = 0;
          psVar17 = speeds;
          goto LAB_00102013;
        }
        if (iVar15 != local_94 + -1) {
          lVar18 = (long)iVar15;
          pcVar20 = settings[lVar18 + 1];
          if (pcVar20 != (char *)0x0) {
            iVar15 = iVar15 + 1;
            uVar9 = integer_arg(pcVar20,0xffffffffffffffff);
            mode->c_line = (cc_t)uVar9;
            if ((uVar9 & 0xffffffffffffff00) != 0) {
              uVar12 = quote(settings[lVar18 + 1]);
              uVar10 = dcgettext(0,"invalid line discipline %s",5);
              error(0,0x4b,uVar10,uVar12);
            }
            goto LAB_00101ba8;
          }
        }
LAB_001021b0:
        uVar12 = quote(pcVar22);
        pcVar22 = "missing argument to %s";
        goto LAB_00101ec0;
      }
      if ((iVar15 == local_94 + -1) || (settings[(long)iVar15 + 1] == (char *)0x0))
      goto LAB_001021b0;
      if (!checking) {
        uVar9 = integer_arg(settings[(long)iVar15 + 1],0x7fffffff);
        set_window_size(-1,(int)uVar9,device_name);
      }
    }
  }
  iVar15 = iVar15 + 2;
  local_6c = cVar14;
  if (local_94 <= iVar15) {
LAB_00101983:
    do {
      speed_00 = last_ibaud;
      speed = last_obaud;
      if ((((cVar14 == '\0') || (last_ibaud == 0xffffffff)) || (last_obaud == 0xffffffff)) ||
         ((sVar8 = cfgetispeed((termios *)mode), speed_00 == sVar8 &&
          (sVar8 = cfgetospeed((termios *)mode), speed == sVar8)))) {
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar11 = baud_to_value(speed);
      iVar15 = (int)uVar11;
      baud_to_value(speed_00);
      uVar12 = dcgettext(0);
      error(1,0,uVar12);
      cVar14 = local_6c;
LAB_00101f5e:
      if (!checking) {
        max_col = screen_columns();
        current_col = 0;
        display_window_size(false,device_name);
      }
LAB_00101817:
      iVar15 = iVar15 + 1;
      local_6c = cVar14;
    } while (local_94 <= iVar15);
  }
  goto LAB_00101824;
LAB_00102013:
  ppcVar4 = &psVar17->string;
  if (*ppcVar4 == (char *)0x0) goto LAB_0010201c;
  psVar17 = psVar17 + 1;
  iVar7 = strcmp(pcVar22,*ppcVar4);
  if (iVar7 == 0) {
    if (speeds[iVar6].speed != 0xffffffff) {
      set_speed(both_speeds,pcVar22,mode);
      if (checking) goto LAB_00101817;
      goto LAB_00101ba8;
    }
    goto LAB_0010201c;
  }
  iVar6 = iVar6 + 1;
  goto LAB_00102013;
LAB_0010201c:
  piVar13 = __errno_location();
  lVar18 = 0;
  pcVar20 = pcVar22;
  do {
    *piVar13 = 0;
    uVar11 = __isoc23_strtoul(pcVar20,&p,0x10);
    if (((*piVar13 != 0) || (pcVar20 == p || 0xffffffff < uVar11)) || (*p != ':'))
    goto LAB_00102111;
    flag[lVar18] = (tcflag_t)uVar11;
    lVar18 = lVar18 + 1;
    pcVar20 = p + 1;
  } while (lVar18 != 4);
  lVar18 = 0;
  mode->c_iflag = flag[0];
  mode->c_oflag = flag[1];
  mode->c_cflag = flag[2];
  mode->c_lflag = flag[3];
  while( true ) {
    cVar19 = ':';
    if (lVar18 == 0x1f) {
      cVar19 = '\0';
    }
    *piVar13 = 0;
    uVar11 = __isoc23_strtoul(pcVar20,&p,0x10);
    if (((*piVar13 != 0) || (*p != cVar19 || 0xff < uVar11)) || (p == pcVar20)) break;
    pcVar20 = p + 1;
    mode->c_cc[lVar18] = (cc_t)uVar11;
    lVar18 = lVar18 + 1;
    if (lVar18 == 0x20) {
LAB_00101ba8:
      *local_80 = true;
      goto LAB_00101817;
    }
  }
LAB_00102111:
  uVar12 = quote(pcVar22);
  pcVar22 = "invalid argument %s";
LAB_00101ec0:
  uVar10 = dcgettext(0,pcVar22,5);
  error(0,0,uVar10,uVar12);
                    /* WARNING: Subroutine does not return */
  usage(1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long *plVar1;
  cc_t *pcVar2;
  cc_t ch;
  byte bVar3;
  mode_type mVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  speed_t sVar9;
  speed_t sVar10;
  mode_type mVar11;
  speed_t *psVar12;
  undefined8 uVar13;
  mode_info *pmVar14;
  uint *puVar15;
  int *piVar16;
  undefined *puVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  termios *ptVar20;
  char *pcVar21;
  _IO_FILE *p_Var22;
  uint uVar23;
  _Bool *require_set_attr_00;
  int iVar24;
  long lVar25;
  control_info *pcVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  char *local_58;
  mode_type local_50;
  _Bool require_set_attr;
  long local_40;
  
  lVar25 = 1;
  require_set_attr_00 = (_Bool *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  ptVar20 = (termios *)0x0;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_58 = (char *)0x0;
  _opterr = 0;
  bVar5 = true;
  bVar3 = 0;
  bVar6 = 0;
  local_50 = control;
  while( true ) {
    iVar8 = getopt_long(argc - (int)require_set_attr_00,argv + (long)ptVar20,"-agF:",longopts);
    if (iVar8 == -1) break;
    iVar24 = (int)lVar25;
    if (iVar8 == 0x61) {
      bVar6 = 1;
      local_50 = input;
LAB_0010510b:
      if (iVar24 < _optind) {
        lVar7 = lVar25 + -0x11;
        lVar25 = (long)_optind;
        memset(argv + (long)(ptVar20->c_cc + lVar7),0,(ulong)(uint)((_optind + -1) - iVar24) * 8 + 8
              );
      }
    }
    else {
      if (0x61 < iVar8) {
        if (iVar8 == 0x67) {
          bVar3 = 1;
          local_50 = output;
        }
        else {
          if (iVar8 != 0x80) goto LAB_00105160;
          dev_debug = true;
        }
        goto LAB_0010510b;
      }
      if (iVar8 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      if (iVar8 == 0x46) {
        if (local_58 == (char *)0x0) {
          local_58 = _optarg;
          goto LAB_0010510b;
        }
        pcVar21 = "only one device may be specified";
        goto LAB_00105a8a;
      }
      if (iVar8 == -0x83) {
        uVar13 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,&_LC20,"GNU coreutils",_Version,uVar13,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
LAB_00105160:
      uVar23 = (int)require_set_attr_00 + iVar24;
      require_set_attr_00 = (_Bool *)(ulong)uVar23;
      ptVar20 = (termios *)(long)(int)uVar23;
      pcVar21 = argv[(long)ptVar20];
      iVar8 = strcmp(pcVar21,"-drain");
      if (iVar8 != 0) {
        iVar8 = strcmp(pcVar21,"drain");
        if (iVar8 != 0) {
          bVar5 = false;
        }
      }
      _optind = 0;
      lVar25 = 1;
    }
  }
  if ((bool)(bVar6 & bVar3)) {
    pcVar21 = "the options for verbose and stty-readable output styles are\nmutually exclusive";
LAB_00105a8a:
    uVar13 = dcgettext(0,pcVar21,5);
    p_Var22 = (_IO_FILE *)0x1;
    error(1,0,uVar13);
LAB_00105aa2:
    __overflow(p_Var22,10);
    goto LAB_001052d7;
  }
  if (bVar5) {
    if (local_58 == (char *)0x0) goto LAB_00105307;
LAB_00105237:
    iVar8 = fd_reopen(0,local_58,0x800,0);
    if (iVar8 < 0) goto LAB_0010560a;
    uVar23 = rpl_fcntl(0,3);
    if ((uVar23 != 0xffffffff) && (iVar8 = rpl_fcntl(0,4,uVar23 & 0xfffff7ff), -1 < iVar8)) {
      ptVar20 = &main::mode;
      iVar8 = tcgetattr(0,(termios *)&main::mode);
      if (iVar8 != 0) goto LAB_0010560a;
      if (!bVar5) goto LAB_001052ac;
      goto LAB_00105342;
    }
    ptVar20 = (termios *)quotearg_n_style_colon(0,3,local_58);
    uVar13 = dcgettext(0,"%s: couldn\'t reset non-blocking mode",5);
    piVar16 = __errno_location();
    p_Var22 = (_IO_FILE *)0x1;
    error(1,*piVar16,uVar13,ptVar20);
LAB_00105a60:
    __overflow(p_Var22,10);
LAB_00105806:
    pcVar26 = control_info;
    current_col = 0;
    while( true ) {
      pcVar21 = pcVar26->name;
      iVar8 = strcmp(pcVar21,"min");
      if (iVar8 == 0) break;
      iVar8 = strcmp(pcVar21,"flush");
      if (iVar8 != 0) {
        pcVar19 = "<undef>";
        if (ptVar20->c_cc[pcVar26->offset] != '\0') {
          pcVar19 = visible(ptVar20->c_cc[pcVar26->offset]);
        }
        wrapf("%s = %s;",pcVar21,pcVar19);
      }
      pcVar26 = pcVar26 + 1;
    }
    pcVar21 = "min = %lu; time = %lu;";
    wrapf("min = %lu; time = %lu;",(ulong)main::mode.c_cc[6],(ulong)main::mode.c_cc[5]);
    p_Var22 = _stdout;
    if (current_col != 0) {
      pcVar21 = _stdout->_IO_write_ptr;
      if (pcVar21 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar21 + 1;
        *pcVar21 = '\n';
        pcVar21 = (char *)p_Var22;
      }
      else {
        pcVar21 = (char *)_stdout;
        __overflow(_stdout,10);
      }
    }
    mVar11 = control;
    current_col = 0;
    for (pmVar14 = mode_info; pcVar19 = pmVar14->name, pcVar19 != (char *)0x0; pmVar14 = pmVar14 + 1
        ) {
      bVar3 = pmVar14->flags;
      if ((bVar3 & 8) == 0) {
        mVar4 = pmVar14->type;
        if (mVar4 != mVar11) {
          pcVar21 = _stdout->_IO_write_ptr;
          if (pcVar21 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar21 + 1;
            *pcVar21 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
          pcVar21 = (char *)0x0;
          current_col = 0;
        }
        switch(mVar4) {
        case control:
          ptVar20 = (termios *)&main::mode.c_cflag;
          break;
        case input:
          ptVar20 = &main::mode;
          break;
        case output:
          ptVar20 = (termios *)&main::mode.c_oflag;
          break;
        case local:
          ptVar20 = (termios *)&main::mode.c_lflag;
          break;
        case combination:
          ptVar20 = (termios *)0x0;
          break;
        default:
          iVar8 = 0;
          psVar12 = &speeds[0].speed;
          do {
            if (*psVar12 == (speed_t)pcVar21) {
              return (int)speeds[iVar8].value;
            }
            iVar8 = iVar8 + 1;
            plVar1 = (long *)(psVar12 + 4);
            psVar12 = psVar12 + 6;
          } while (*plVar1 != 0);
          return 0;
        }
        uVar27 = pmVar14->mask;
        if (pmVar14->mask == 0) {
          uVar27 = pmVar14->bits;
        }
        mVar11 = mVar4;
        if ((ulong)((uint)uVar27 & ptVar20->c_iflag) == pmVar14->bits) {
          pcVar21 = &_LC6;
          wrapf("%s",pcVar19);
        }
        else if ((bVar3 & 4) != 0) {
          pcVar21 = &_LC196;
          wrapf("-%s",pcVar19);
        }
      }
    }
LAB_00105707:
    pcVar21 = _stdout->_IO_write_ptr;
    if (pcVar21 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar21 + 1;
      *pcVar21 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
  }
  else {
    pcVar21 = "when specifying an output style, modes may not be set";
    if ((bool)(bVar6 | bVar3)) goto LAB_00105a8a;
    bVar5 = false;
    if (local_58 != (char *)0x0) {
      apply_settings(true,local_58,argv,argc,&main::lexical_block_13::check_mode,&require_set_attr);
      bVar5 = false;
      goto LAB_00105237;
    }
LAB_00105307:
    local_58 = (char *)dcgettext(0,"standard input",5);
    if (!bVar5) {
      while( true ) {
        require_set_attr_00 = &require_set_attr;
        apply_settings(true,local_58,argv,argc,&main::lexical_block_13::check_mode,
                       require_set_attr_00);
        ptVar20 = &main::mode;
        iVar8 = tcgetattr(0,(termios *)&main::mode);
        if (iVar8 != 0) break;
LAB_001052ac:
        require_set_attr_00 = &require_set_attr;
        ptVar20 = &main::mode;
        require_set_attr = false;
        apply_settings(false,local_58,argv,argc,&main::mode,require_set_attr_00);
        if (require_set_attr == false) goto LAB_001052d7;
        iVar8 = tcsetattr(0,tcsetattr_options,(termios *)&main::mode);
        if ((iVar8 != 0) ||
           (iVar8 = tcgetattr(0,(termios *)&main::lexical_block_15::new_mode), iVar8 != 0)) break;
        if ((main::mode.c_iflag == main::lexical_block_15::new_mode.c_iflag) &&
           ((((main::mode.c_oflag == main::lexical_block_15::new_mode.c_oflag &&
              (main::mode.c_cflag == main::lexical_block_15::new_mode.c_cflag)) &&
             (main::mode.c_lflag == main::lexical_block_15::new_mode.c_lflag)) &&
            ((main::mode.c_line == main::lexical_block_15::new_mode.c_line &&
             (iVar8 = memcmp(main::mode.c_cc,main::lexical_block_15::new_mode.c_cc,0x20), iVar8 == 0
             )))))) {
          sVar9 = cfgetispeed((termios *)&main::mode);
          sVar10 = cfgetispeed((termios *)&main::lexical_block_15::new_mode);
          if (sVar9 == sVar10) {
            sVar9 = cfgetospeed((termios *)&main::mode);
            sVar10 = cfgetospeed((termios *)&main::lexical_block_15::new_mode);
            if (sVar9 == sVar10) goto LAB_001052d7;
          }
        }
        if (dev_debug != false) {
          uVar27 = 0;
          uVar13 = dcgettext(0,"indx: mode: actual mode",5);
          argc = 0x1029f8;
          error(0,0,uVar13);
          uVar13 = extraout_RDX;
          do {
            lVar25 = uVar27 - 0x11;
            lVar7 = uVar27 - 0x11;
            puVar17 = &_LC1;
            uVar18 = uVar27 & 0xffffffff;
            if (main::lexical_block_15::new_mode.c_cc[lVar25] != main::mode.c_cc[lVar7]) {
              puVar17 = &_LC182;
            }
            uVar27 = uVar27 + 1;
            error(0,0,"0x%02x, 0x%02x: 0x%02x%s",uVar18,main::mode.c_cc[lVar7],
                  main::lexical_block_15::new_mode.c_cc[lVar25],puVar17,uVar13);
            uVar13 = extraout_RDX_00;
          } while (uVar27 != 0x3c);
        }
        argv = (char **)quotearg_n_style_colon(0,3,local_58);
        uVar13 = dcgettext(0,"%s: unable to perform all requested operations",5);
        error(1,0,uVar13,argv);
      }
LAB_0010560a:
      pmVar14 = (mode_info *)quotearg_n_style_colon(0,3,local_58);
      puVar15 = (uint *)__errno_location();
      uVar27 = (ulong)*puVar15;
      error(1,uVar27,&_LC6,pmVar14);
      if (((ulong)require_set_attr_00 & 2) == 0) goto LAB_00105520;
      wrapf("%s");
      uVar27 = 0;
      goto LAB_00105520;
    }
    ptVar20 = &main::mode;
    iVar8 = tcgetattr(0,(termios *)&main::mode);
    if (iVar8 != 0) goto LAB_0010560a;
LAB_00105342:
    ptVar20 = &main::mode;
    max_col = screen_columns();
    current_col = 0;
    if (local_50 == input) {
      display_speed(&main::mode,true);
      display_window_size(true,local_58);
      wrapf("line = %d;",(ulong)main::mode.c_line);
      pcVar21 = _stdout->_IO_write_ptr;
      p_Var22 = _stdout;
      if (_stdout->_IO_write_end <= pcVar21) goto LAB_00105a60;
      _stdout->_IO_write_ptr = pcVar21 + 1;
      *pcVar21 = '\n';
      goto LAB_00105806;
    }
    if (local_50 == output) {
      lVar25 = 0;
      __printf_chk(2,"%lx:%lx:%lx:%lx",main::mode.c_iflag,main::mode.c_oflag,main::mode.c_cflag,
                   main::mode.c_lflag);
      do {
        pcVar2 = main::mode.c_cc + lVar25;
        lVar25 = lVar25 + 1;
        __printf_chk(2,&_LC199,*pcVar2);
      } while (lVar25 != 0x20);
      pcVar21 = _stdout->_IO_write_ptr;
      p_Var22 = _stdout;
      if (pcVar21 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar21 + 1;
        *pcVar21 = '\n';
        goto LAB_001052d7;
      }
      goto LAB_00105aa2;
    }
    if (local_50 != control) goto LAB_001052d7;
    display_speed(&main::mode,true);
    wrapf("line = %d;",(ulong)main::mode.c_line);
    pcVar21 = _stdout->_IO_write_ptr;
    if (pcVar21 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar21 + 1;
      *pcVar21 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
    pcVar26 = control_info;
    bVar5 = true;
    current_col = 0;
    while( true ) {
      pcVar21 = pcVar26->name;
      iVar8 = strcmp(pcVar21,"min");
      if (iVar8 == 0) break;
      ch = main::mode.c_cc[pcVar26->offset];
      if ((ch != pcVar26->saneval) && (iVar8 = strcmp(pcVar21,"flush"), iVar8 != 0)) {
        pcVar19 = "<undef>";
        if (ch != '\0') {
          pcVar19 = visible(ch);
        }
        bVar5 = false;
        wrapf("%s = %s;",pcVar21,pcVar19);
      }
      pcVar26 = pcVar26 + 1;
    }
    if ((main::mode.c_lflag & 2) == 0) {
      wrapf("min = %lu; time = %lu;\n",(ulong)main::mode.c_cc[6],(ulong)main::mode.c_cc[5]);
    }
    else if (!bVar5) {
      pcVar21 = _stdout->_IO_write_ptr;
      if (pcVar21 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar21 + 1;
        *pcVar21 = '\n';
      }
      else {
        __overflow(_stdout,10);
      }
    }
    uVar27 = 1;
    current_col = 0;
    ptVar20 = (termios *)&DAT_00104f84;
    for (pmVar14 = mode_info; pmVar14->name != (char *)0x0; pmVar14 = pmVar14 + 1) {
      if ((pmVar14->flags & 8U) == 0) {
        mVar11 = pmVar14->type;
        if ((mVar11 != local_50) && ((char)uVar27 == '\0')) {
          pcVar21 = _stdout->_IO_write_ptr;
          if (pcVar21 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar21 + 1;
            *pcVar21 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
          current_col = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x001054f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar8 = (*(code *)(ptVar20->c_cc +
                          (long)*(int *)(ptVar20->c_cc + (ulong)mVar11 * 4 + -0x11) + -0x11))();
        return iVar8;
      }
LAB_00105520:
    }
    if ((char)uVar27 == '\0') goto LAB_00105707;
  }
  current_col = 0;
LAB_001052d7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


