
undefined8 main_cold(int param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &DAT_00105b68;
  do {
    if (*piVar2 == param_1) {
      return *(undefined8 *)(&DAT_00105b70 + (long)iVar3 * 0x18);
    }
    iVar3 = iVar3 + 1;
    plVar1 = (long *)(piVar2 + 4);
    piVar2 = piVar2 + 6;
  } while (*plVar1 != 0);
  return 0;
}



ulong screen_columns(void)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_20;
  undefined1 local_18 [2];
  ushort local_16;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ioctl(1,0x5413,local_18);
  if ((iVar1 != 0) || (uVar3 = (ulong)local_16, local_16 == 0)) {
    pcVar2 = getenv("COLUMNS");
    if (pcVar2 != (char *)0x0) {
      iVar1 = xstrtol(pcVar2,0,0,&local_20,&_LC1);
      if ((iVar1 == 0) && (uVar3 = local_20, local_20 - 1 < 0x7fffffff)) goto LAB_001000ca;
    }
    uVar3 = 0x50;
  }
LAB_001000ca:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wrapf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14)

{
  char *pcVar1;
  char in_AL;
  int iVar2;
  long in_FS_OFFSET;
  char *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
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
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_d8 = 8;
  local_c8 = local_b8;
  local_d4 = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  iVar2 = __vasprintf_chk(&local_e0,2,param_9,&local_d8);
  if (iVar2 < 0) {
    xalloc_die();
  }
  else {
    if (0 < current_col) {
      pcVar1 = _stdout->_IO_write_ptr;
      if (iVar2 < max_col - current_col) {
        if (pcVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = ' ';
        }
        else {
          __overflow(_stdout,0x20);
        }
        current_col = current_col + 1;
      }
      else {
        if (pcVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = '\n';
        }
        else {
          __overflow(_stdout,10);
        }
        current_col = 0;
      }
    }
    fputs_unlocked(local_e0,_stdout);
    free(local_e0);
    current_col = current_col + iVar2;
    if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void integer_arg(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"invalid integer argument",5);
  xnumtoumax(param_1,0,0,param_2,&_LC3,uVar1,0,0);
  return;
}



undefined1 * visible_part_0(byte param_1)

{
  undefined1 *puVar1;
  
  if (param_1 < 0x20) {
    buf_1[1] = param_1 + 0x40;
    buf_1[0] = 0x5e;
  }
  else {
    if (param_1 < 0x7f) {
      buf_1[1] = 0;
      buf_1[0] = param_1;
      return buf_1;
    }
    if (param_1 != 0x7f) {
      buf_1._0_2_ = 0x2d4d;
      if (param_1 < 0xa0) {
        buf_1[3] = param_1 - 0x40;
        buf_1[2] = 0x5e;
      }
      else {
        if (param_1 != 0xff) {
          puVar1 = buf_1 + 3;
          buf_1[2] = param_1 + 0x80;
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



void set_window_size(uint param_1,int param_2,undefined8 param_3)

{
  speed_t __speed;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  termios *__termios_p;
  undefined **ppuVar7;
  char *__s1;
  char *pcVar8;
  char cVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = 0x1003e5;
  iVar1 = ioctl(0,0x5413,&local_38);
  if (iVar1 != 0) {
    uStack_40 = 0x1003ee;
    piVar3 = __errno_location();
    if (*piVar3 != 0x16) {
      uStack_40 = 0x100450;
      uVar4 = quotearg_n_style_colon(0,3,param_3);
      uStack_40 = 0x100469;
      error(1,*piVar3,&_LC6,uVar4);
      goto LAB_00100469;
    }
    local_38 = 0;
  }
  if (-1 < (int)param_1) {
    local_38 = CONCAT62(local_38._2_6_,(short)param_1);
  }
  if (-1 < param_2) {
    local_38._0_4_ = CONCAT22((short)param_2,(undefined2)local_38);
  }
  uStack_40 = 0x100420;
  iVar1 = ioctl(0,0x5414,&local_38);
  if (iVar1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00100469:
                    /* WARNING: Subroutine does not return */
    uStack_40 = 0x10046e;
    __stack_chk_fail();
  }
  uStack_40 = 0x10047d;
  uVar4 = quotearg_n_style_colon(0,3,param_3);
  uStack_40 = 0x100485;
  puVar5 = (uint *)__errno_location();
  cVar9 = '\x01';
  uVar10 = (ulong)*puVar5;
  uStack_40 = 0x10049d;
  error(1,uVar10,&_LC6,uVar4);
  lStack_58 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_50 = uVar4;
  uStack_48 = (ulong)param_1;
  uStack_40 = param_3;
  iVar1 = ioctl(0,0x5413,&uStack_60);
  if (iVar1 == 0) {
    if (cVar9 == '\0') {
      wrapf("%d %d\n",uStack_60,uStack_5e);
      current_col = 0;
    }
    else {
      wrapf("rows %d; columns %d;",uStack_60,uStack_5e);
    }
  }
  else {
    piVar3 = __errno_location();
    if (*piVar3 != 0x16) {
      uVar4 = quotearg_n_style_colon(0,3,uVar10);
      error(1,*piVar3,&_LC6,uVar4);
      goto LAB_00100562;
    }
    if (cVar9 == '\0') {
      uVar4 = quotearg_n_style_colon(0,3,uVar10);
      uVar6 = dcgettext(0,"%s: no size information for this device",5);
      __s1 = (char *)0x0;
      uVar10 = 1;
      error(1,0,uVar6,uVar4);
      pcVar8 = "0";
      iVar1 = 0;
      ppuVar7 = &PTR_DAT_00105b78;
      do {
        iVar2 = strcmp(__s1,pcVar8);
        if (iVar2 == 0) {
          __speed = (&DAT_00105b68)[(long)iVar1 * 6];
          if (__speed != 0xffffffff) {
            if ((uVar10 & 0xfffffffd) == 0) {
              last_ibaud = __speed;
              iVar1 = cfsetispeed(__termios_p,__speed);
              if (iVar1 == 0) {
                if ((int)uVar10 != 2) {
                  return;
                }
                goto LAB_0010060c;
              }
              uVar4 = quotearg_style(4,__s1);
              pcVar8 = "unsupported ispeed %s";
            }
            else {
LAB_0010060c:
              last_obaud = __speed;
              iVar1 = cfsetospeed(__termios_p,__speed);
              if (iVar1 == 0) {
                return;
              }
              uVar4 = quotearg_style(4,__s1);
              pcVar8 = "unsupported ospeed %s";
            }
            uVar6 = dcgettext(0,pcVar8,5);
            error(1,0,uVar6,uVar4);
          }
          break;
        }
        pcVar8 = *ppuVar7;
        ppuVar7 = ppuVar7 + 3;
        iVar1 = iVar1 + 1;
      } while (pcVar8 != (char *)0x0);
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



void display_window_size(char param_1,undefined8 param_2)

{
  speed_t __speed;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  termios *__termios_p;
  undefined **ppuVar6;
  char *__s1;
  char *pcVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined2 local_28;
  undefined2 local_26;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ioctl(0,0x5413,&local_28);
  if (iVar1 == 0) {
    if (param_1 == '\0') {
      wrapf("%d %d\n",local_28,local_26);
      current_col = 0;
    }
    else {
      wrapf("rows %d; columns %d;",local_28,local_26);
    }
  }
  else {
    piVar3 = __errno_location();
    if (*piVar3 != 0x16) {
      uVar4 = quotearg_n_style_colon(0,3,param_2);
      error(1,*piVar3,&_LC6,uVar4);
      goto LAB_00100562;
    }
    if (param_1 == '\0') {
      uVar4 = quotearg_n_style_colon(0,3,param_2);
      uVar5 = dcgettext(0,"%s: no size information for this device",5);
      __s1 = (char *)0x0;
      uVar8 = 1;
      error(1,0,uVar5,uVar4);
      pcVar7 = "0";
      iVar1 = 0;
      ppuVar6 = &PTR_DAT_00105b78;
      do {
        iVar2 = strcmp(__s1,pcVar7);
        if (iVar2 == 0) {
          __speed = (&DAT_00105b68)[(long)iVar1 * 6];
          if (__speed != 0xffffffff) {
            if ((uVar8 & 0xfffffffd) == 0) {
              last_ibaud = __speed;
              iVar1 = cfsetispeed(__termios_p,__speed);
              if (iVar1 == 0) {
                if ((int)uVar8 != 2) {
                  return;
                }
                goto LAB_0010060c;
              }
              uVar4 = quotearg_style(4,__s1);
              pcVar7 = "unsupported ispeed %s";
            }
            else {
LAB_0010060c:
              last_obaud = __speed;
              iVar1 = cfsetospeed(__termios_p,__speed);
              if (iVar1 == 0) {
                return;
              }
              uVar4 = quotearg_style(4,__s1);
              pcVar7 = "unsupported ospeed %s";
            }
            uVar5 = dcgettext(0,pcVar7,5);
            error(1,0,uVar5,uVar4);
          }
          break;
        }
        pcVar7 = *ppuVar6;
        ppuVar6 = ppuVar6 + 3;
        iVar1 = iVar1 + 1;
      } while (pcVar7 != (char *)0x0);
                    /* WARNING: Subroutine does not return */
      __assert_fail("baud != (speed_t) -1","src/stty.c",0x6bc,"set_speed");
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100562:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void set_speed(uint param_1,char *param_2,termios *param_3)

{
  speed_t __speed;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  char *pcVar6;
  
  pcVar6 = "0";
  iVar2 = 0;
  ppuVar5 = &PTR_DAT_00105b78;
  do {
    iVar1 = strcmp(param_2,pcVar6);
    if (iVar1 == 0) {
      __speed = (&DAT_00105b68)[(long)iVar2 * 6];
      if (__speed != 0xffffffff) {
        if ((param_1 & 0xfffffffd) == 0) {
          last_ibaud = __speed;
          iVar2 = cfsetispeed(param_3,__speed);
          if (iVar2 == 0) {
            if (param_1 != 2) {
              return;
            }
            goto LAB_0010060c;
          }
          uVar4 = quotearg_style(4,param_2);
          pcVar6 = "unsupported ispeed %s";
        }
        else {
LAB_0010060c:
          last_obaud = __speed;
          iVar2 = cfsetospeed(param_3,__speed);
          if (iVar2 == 0) {
            return;
          }
          uVar4 = quotearg_style(4,param_2);
          pcVar6 = "unsupported ospeed %s";
        }
        uVar3 = dcgettext(0,pcVar6,5);
        error(1,0,uVar3,uVar4);
      }
      break;
    }
    pcVar6 = *ppuVar5;
    ppuVar5 = ppuVar5 + 3;
    iVar2 = iVar2 + 1;
  } while (pcVar6 != (char *)0x0);
                    /* WARNING: Subroutine does not return */
  __assert_fail("baud != (speed_t) -1","src/stty.c",0x6bc,"set_speed");
}



void display_speed(termios *param_1,char param_2)

{
  speed_t *psVar1;
  speed_t sVar2;
  speed_t sVar3;
  int iVar4;
  speed_t *psVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  sVar2 = cfgetispeed(param_1);
  if (sVar2 != 0) {
    sVar2 = cfgetispeed(param_1);
    sVar3 = cfgetospeed(param_1);
    if (sVar2 != sVar3) {
      sVar2 = cfgetospeed(param_1);
      iVar4 = 0;
      psVar5 = &DAT_00105b68;
      do {
        if (sVar2 == *psVar5) {
          uVar6 = *(undefined8 *)(&DAT_00105b70 + (long)iVar4 * 0x18);
          goto LAB_001007a9;
        }
        iVar4 = iVar4 + 1;
        psVar1 = psVar5 + 4;
        psVar5 = psVar5 + 6;
      } while (*(long *)psVar1 != 0);
      uVar6 = 0;
LAB_001007a9:
      sVar2 = cfgetispeed(param_1);
      iVar4 = 0;
      psVar5 = &DAT_00105b68;
      do {
        if (sVar2 == *psVar5) {
          uVar7 = *(undefined8 *)(&DAT_00105b70 + (long)iVar4 * 0x18);
          goto LAB_001007e2;
        }
        iVar4 = iVar4 + 1;
        psVar1 = psVar5 + 4;
        psVar5 = psVar5 + 6;
      } while (*(long *)psVar1 != 0);
      uVar7 = 0;
LAB_001007e2:
      if (param_2 == '\0') {
        wrapf("%lu %lu\n",uVar7,uVar6);
        current_col = 0;
        return;
      }
      wrapf("ispeed %lu baud; ospeed %lu baud;",uVar7,uVar6);
      return;
    }
  }
  sVar2 = cfgetospeed(param_1);
  iVar4 = 0;
  psVar5 = &DAT_00105b68;
  do {
    if (sVar2 == *psVar5) {
      uVar6 = *(undefined8 *)(&DAT_00105b70 + (long)iVar4 * 0x18);
      goto LAB_00100741;
    }
    iVar4 = iVar4 + 1;
    psVar1 = psVar5 + 4;
    psVar5 = psVar5 + 6;
  } while (*(long *)psVar1 != 0);
  uVar6 = 0;
LAB_00100741:
  if (param_2 == '\0') {
    wrapf(&_LC16,uVar6);
    current_col = 0;
    return;
  }
  wrapf("speed %lu baud;",uVar6);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
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
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
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
  local_a8 = &_LC19;
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
    iVar2 = strcmp("stty",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



void apply_settings(char param_1,undefined8 param_2,long param_3,int param_4,termios *param_5,
                   undefined1 *param_6)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  byte *__s1;
  speed_t sVar4;
  speed_t sVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  speed_t sVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  char cVar17;
  char *pcVar18;
  undefined **ppuVar19;
  char *pcVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int local_94;
  undefined1 *local_80;
  char local_6c;
  char *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar17 = param_1;
  if (param_4 < 2) goto LAB_00101983;
  iVar15 = 1;
  local_94 = param_4;
  local_80 = param_6;
  local_6c = param_1;
  do {
    while( true ) {
      lVar16 = (long)iVar15 * 8;
      pcVar20 = *(char **)(param_3 + (long)iVar15 * 8);
      if (pcVar20 == (char *)0x0) goto LAB_00101817;
      bVar21 = *pcVar20 == '-';
      if (bVar21) {
        pcVar20 = pcVar20 + 1;
      }
      iVar7 = strcmp(pcVar20,"drain");
      if (iVar7 == 0) {
        tcsetattr_options = bVar21 ^ 1;
        goto LAB_00101817;
      }
      ppuVar19 = &PTR_s_parodd_001061a0;
      iVar7 = 0;
      pcVar18 = "parenb";
      do {
        iVar8 = strcmp(pcVar20,pcVar18);
        if (iVar8 == 0) {
          if (((&DAT_0010618c)[(long)iVar7 * 0x20] & 0x10) != 0) goto LAB_001018c1;
          if ((!bVar21) || (((&DAT_0010618c)[(long)iVar7 * 0x20] & 4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00101b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00104f70 +
                      *(int *)(&DAT_00104f70 + (ulong)(uint)(&DAT_00106188)[(long)iVar7 * 8] * 4)))
                      ();
            return;
          }
          *local_80 = 1;
          goto LAB_00101ea8;
        }
        pcVar18 = *ppuVar19;
        ppuVar19 = ppuVar19 + 4;
        iVar7 = iVar7 + 1;
      } while (pcVar18 != (char *)0x0);
      if (!bVar21) break;
LAB_00101ea8:
      uVar13 = quote(pcVar20 + -1);
      pcVar20 = "invalid argument %s";
LAB_00101ec0:
      uVar12 = dcgettext(0,pcVar20,5);
      error(0,0,uVar12,uVar13);
      usage(1);
      while( true ) {
        sVar5 = last_ibaud;
        sVar4 = last_obaud;
        if (((last_ibaud == 0xffffffff) || (last_obaud == 0xffffffff)) ||
           ((sVar10 = cfgetispeed(param_5), sVar5 == sVar10 &&
            (sVar10 = cfgetospeed(param_5), sVar4 == sVar10)))) goto LAB_0010198b;
        iVar15 = main_cold(sVar4,"asymmetric input (%lu), output (%lu) speeds not supported");
        main_cold(sVar5);
        uVar13 = dcgettext(0);
        error(1,0,uVar13);
LAB_00101f5e:
        if (param_1 == '\0') {
          max_col = screen_columns();
          current_col = 0;
          display_window_size(0,param_2);
        }
LAB_00101817:
        iVar15 = iVar15 + 1;
        cVar17 = local_6c;
        if (iVar15 < local_94) break;
LAB_00101983:
        if (cVar17 == '\0') {
LAB_0010198b:
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    ppuVar19 = &PTR_DAT_00105fb8;
    iVar7 = 0;
    pcVar18 = "intr";
    do {
      iVar8 = strcmp(pcVar20,pcVar18);
      if (iVar8 == 0) {
        if ((iVar15 != local_94 + -1) &&
           (__s1 = *(byte **)(param_3 + 8 + lVar16), __s1 != (byte *)0x0)) {
          iVar15 = iVar15 + 1;
          iVar8 = strcmp(pcVar18,"min");
          if ((iVar8 != 0) && (iVar8 = strcmp(pcVar18,"time"), iVar8 != 0)) {
            bVar2 = *__s1;
            bVar6 = bVar2;
            if ((bVar2 == 0) || (bVar3 = __s1[1], bVar3 == 0)) goto LAB_00101a5c;
            iVar8 = strcmp((char *)__s1,"^-");
            bVar6 = 0;
            if ((iVar8 == 0) || (iVar8 = strcmp((char *)__s1,"undef"), iVar8 == 0))
            goto LAB_00101a5c;
            if (bVar2 == 0x5e) {
              if (bVar3 == 0x3f) {
                bVar6 = 0x7f;
              }
              else {
                bVar6 = bVar3 & 0x9f;
              }
              goto LAB_00101a5c;
            }
          }
          uVar13 = dcgettext(0,"invalid integer argument",5);
          bVar6 = xnumtoumax(__s1,0,0,0xff,&_LC3,uVar13,0,0);
LAB_00101a5c:
          param_5->c_cc[(&DAT_00105fb0)[(long)iVar7 * 3]] = bVar6;
          *local_80 = 1;
          goto LAB_00101817;
        }
        goto LAB_001021b0;
      }
      pcVar18 = *ppuVar19;
      ppuVar19 = ppuVar19 + 3;
      iVar7 = iVar7 + 1;
    } while (pcVar18 != (char *)0x0);
LAB_001018c1:
    iVar7 = strcmp(pcVar20,"ispeed");
    if (iVar7 == 0) {
      if ((iVar15 == local_94 + -1) ||
         (pcVar18 = *(char **)(param_3 + 8 + lVar16), pcVar18 == (char *)0x0)) goto LAB_001021b0;
      ppuVar19 = &PTR_DAT_00105b78;
      pcVar20 = "0";
      iVar7 = 0;
      do {
        iVar8 = strcmp(pcVar18,pcVar20);
        if (iVar8 == 0) {
          if ((&DAT_00105b68)[(long)iVar7 * 6] != -1) {
            set_speed(0,pcVar18,param_5);
            if (param_1 != '\0') goto LAB_0010196f;
            goto LAB_00101967;
          }
          break;
        }
        pcVar20 = *ppuVar19;
        ppuVar19 = ppuVar19 + 3;
        iVar7 = iVar7 + 1;
      } while (pcVar20 != (char *)0x0);
      uVar13 = quote(pcVar18);
      pcVar20 = "invalid ispeed %s";
      goto LAB_00101ec0;
    }
    iVar7 = strcmp(pcVar20,"ospeed");
    if (iVar7 == 0) {
      if ((iVar15 != local_94 + -1) &&
         (pcVar18 = *(char **)(param_3 + 8 + lVar16), pcVar18 != (char *)0x0)) {
        ppuVar19 = &PTR_DAT_00105b78;
        pcVar20 = "0";
        iVar7 = 0;
        do {
          iVar8 = strcmp(pcVar18,pcVar20);
          if (iVar8 == 0) {
            if ((&DAT_00105b68)[(long)iVar7 * 6] != -1) {
              set_speed(1,pcVar18,param_5);
              if (param_1 == '\0') {
LAB_00101967:
                *local_80 = 1;
              }
              goto LAB_0010196f;
            }
            break;
          }
          pcVar20 = *ppuVar19;
          ppuVar19 = ppuVar19 + 3;
          iVar7 = iVar7 + 1;
        } while (pcVar20 != (char *)0x0);
        uVar13 = quote(pcVar18);
        pcVar20 = "invalid ospeed %s";
        goto LAB_00101ec0;
      }
LAB_001021b0:
      uVar13 = quote(pcVar20);
      pcVar20 = "missing argument to %s";
      goto LAB_00101ec0;
    }
    iVar7 = strcmp(pcVar20,"rows");
    if (iVar7 != 0) {
      iVar7 = strcmp(pcVar20,"cols");
      if ((iVar7 == 0) || (iVar7 = strcmp(pcVar20,"columns"), iVar7 == 0)) {
        if ((iVar15 != local_94 + -1) && (lVar16 = *(long *)(param_3 + 8 + lVar16), lVar16 != 0)) {
          if (param_1 == '\0') {
            uVar9 = integer_arg(lVar16,0x7fffffff);
            set_window_size(0xffffffff,uVar9,param_2);
          }
          goto LAB_0010196f;
        }
      }
      else {
        iVar7 = strcmp(pcVar20,"size");
        if (iVar7 == 0) goto LAB_00101f5e;
        iVar7 = strcmp(pcVar20,"line");
        if (iVar7 != 0) {
          iVar7 = strcmp(pcVar20,"speed");
          if (iVar7 == 0) {
            if (param_1 != '\0') goto LAB_00101817;
            max_col = screen_columns();
            display_speed(param_5,0);
            goto LAB_00101817;
          }
          iVar7 = 0;
          ppuVar19 = &speeds;
          while (pcVar18 = *ppuVar19, pcVar18 != (char *)0x0) {
            ppuVar19 = ppuVar19 + 3;
            iVar8 = strcmp(pcVar20,pcVar18);
            if (iVar8 == 0) {
              if ((&DAT_00105b68)[(long)iVar7 * 6] != -1) {
                set_speed(2,pcVar20,param_5);
                if (param_1 != '\0') goto LAB_00101817;
                goto LAB_00101ba8;
              }
              break;
            }
            iVar7 = iVar7 + 1;
          }
          piVar14 = __errno_location();
          lVar16 = 0;
          pcVar18 = pcVar20;
          do {
            *piVar14 = 0;
            uVar11 = __isoc23_strtoul(pcVar18,&local_60,0x10);
            if (((*piVar14 != 0) || (pcVar18 == local_60 || 0xffffffff < uVar11)) ||
               (*local_60 != ':')) goto LAB_00102111;
            *(int *)((long)&local_58 + lVar16 * 4) = (int)uVar11;
            lVar16 = lVar16 + 1;
            pcVar18 = local_60 + 1;
          } while (lVar16 != 4);
          lVar16 = 0;
          param_5->c_iflag = (undefined4)local_58;
          param_5->c_oflag = local_58._4_4_;
          param_5->c_cflag = (undefined4)uStack_50;
          param_5->c_lflag = uStack_50._4_4_;
          while( true ) {
            cVar17 = ':';
            if (lVar16 == 0x1f) {
              cVar17 = '\0';
            }
            *piVar14 = 0;
            uVar11 = __isoc23_strtoul(pcVar18,&local_60,0x10);
            if (((*piVar14 != 0) || (*local_60 != cVar17 || 0xff < uVar11)) || (local_60 == pcVar18)
               ) break;
            pcVar18 = local_60 + 1;
            param_5->c_cc[lVar16] = (cc_t)uVar11;
            lVar16 = lVar16 + 1;
            if (lVar16 == 0x20) goto LAB_00101ba8;
          }
LAB_00102111:
          uVar13 = quote(pcVar20);
          pcVar20 = "invalid argument %s";
          goto LAB_00101ec0;
        }
        if (iVar15 != local_94 + -1) {
          plVar1 = (long *)(param_3 + 8 + lVar16);
          lVar16 = *plVar1;
          if (lVar16 != 0) {
            iVar15 = iVar15 + 1;
            uVar11 = integer_arg(lVar16,0xffffffffffffffff);
            param_5->c_line = (cc_t)uVar11;
            if ((uVar11 & 0xffffffffffffff00) != 0) {
              uVar13 = quote(*plVar1);
              uVar12 = dcgettext(0,"invalid line discipline %s",5);
              error(0,0x4b,uVar12,uVar13);
            }
LAB_00101ba8:
            *local_80 = 1;
            goto LAB_00101817;
          }
        }
      }
      goto LAB_001021b0;
    }
    if ((iVar15 == local_94 + -1) || (lVar16 = *(long *)(param_3 + 8 + lVar16), lVar16 == 0))
    goto LAB_001021b0;
    if (param_1 == '\0') {
      uVar9 = integer_arg(lVar16,0x7fffffff);
      set_window_size(uVar9,0xffffffff,param_2);
    }
LAB_0010196f:
    iVar15 = iVar15 + 2;
    cVar17 = local_6c;
    if (local_94 <= iVar15) goto LAB_00101983;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  speed_t sVar8;
  speed_t sVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  uint *puVar12;
  undefined *puVar13;
  int *piVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 *puVar17;
  char *pcVar18;
  char *pcVar19;
  _IO_FILE *p_Var20;
  uint uVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  long local_58;
  uint local_50;
  char local_41;
  long local_40;
  
  lVar23 = 1;
  pcVar19 = (char *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar17 = (undefined4 *)0x0;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_58 = 0;
  _opterr = 0;
  bVar5 = true;
  bVar4 = 0;
  bVar6 = 0;
  local_50 = 0;
  while( true ) {
    uVar21 = 0x105ec0;
    iVar7 = getopt_long(param_1 - (int)pcVar19,param_2 + (long)puVar17,"-agF:");
    if (iVar7 == -1) break;
    iVar22 = (int)lVar23;
    if (iVar7 == 0x61) {
      bVar6 = 1;
      local_50 = 1;
LAB_0010510b:
      if (iVar22 < _optind) {
        lVar24 = lVar23 + (long)puVar17;
        lVar23 = (long)_optind;
        memset(param_2 + lVar24,0,(ulong)(uint)((_optind + -1) - iVar22) * 8 + 8);
      }
    }
    else {
      if (0x61 < iVar7) {
        if (iVar7 == 0x67) {
          bVar4 = 1;
          local_50 = 2;
        }
        else {
          if (iVar7 != 0x80) goto LAB_00105160;
          dev_debug = '\x01';
        }
        goto LAB_0010510b;
      }
      if (iVar7 == -0x82) {
        p_Var20 = (_IO_FILE *)0x0;
        usage();
        goto LAB_001059db;
      }
      if (iVar7 == 0x46) {
        if (local_58 == 0) {
          local_58 = _optarg;
          goto LAB_0010510b;
        }
        pcVar18 = "only one device may be specified";
        goto LAB_00105a8a;
      }
      if (iVar7 == -0x83) {
        uVar10 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,&_LC20,"GNU coreutils",_Version,uVar10,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
LAB_00105160:
      uVar21 = (int)pcVar19 + iVar22;
      pcVar19 = (char *)(ulong)uVar21;
      puVar17 = (undefined4 *)(long)(int)uVar21;
      pcVar18 = (char *)param_2[(long)puVar17];
      iVar7 = strcmp(pcVar18,"-drain");
      if (iVar7 != 0) {
        iVar7 = strcmp(pcVar18,"drain");
        if (iVar7 != 0) {
          bVar5 = false;
        }
      }
      _optind = 0;
      lVar23 = 1;
    }
  }
  if ((bool)(bVar6 & bVar4)) {
    pcVar18 = "the options for verbose and stty-readable output styles are\nmutually exclusive";
LAB_00105a8a:
    uVar10 = dcgettext(0,pcVar18,5);
    p_Var20 = (_IO_FILE *)0x1;
    error(1,0,uVar10);
LAB_00105aa2:
    __overflow(p_Var20,10);
    goto LAB_001052d7;
  }
  if (bVar5) {
    if (local_58 == 0) goto LAB_00105307;
LAB_00105237:
    iVar7 = fd_reopen(0,local_58,0x800,0);
    if (iVar7 < 0) goto LAB_0010560a;
    uVar21 = rpl_fcntl(0,3);
    if ((uVar21 != 0xffffffff) && (iVar7 = rpl_fcntl(0,4,uVar21 & 0xfffff7ff), -1 < iVar7)) {
      puVar17 = &mode_3;
      iVar7 = tcgetattr(0,(termios *)&mode_3);
      if (iVar7 != 0) goto LAB_0010560a;
      if (!bVar5) goto LAB_001052ac;
      goto LAB_00105342;
    }
    puVar17 = (undefined4 *)quotearg_n_style_colon(0,3,local_58);
    uVar10 = dcgettext(0,"%s: couldn\'t reset non-blocking mode",5);
    piVar14 = __errno_location();
    p_Var20 = (_IO_FILE *)0x1;
    error(1,*piVar14,uVar10,puVar17);
LAB_00105a60:
    __overflow(p_Var20,10);
LAB_00105806:
    ppuVar11 = &control_info;
    current_col = 0;
    while( true ) {
      pcVar19 = *ppuVar11;
      iVar7 = strcmp(pcVar19,"min");
      if (iVar7 == 0) break;
      iVar7 = strcmp(pcVar19,"flush");
      if (iVar7 != 0) {
        pcVar18 = "<undef>";
        if (ppuVar11[2][(long)puVar17 + 0x11] != '\0') {
          pcVar18 = (char *)visible_part_0(ppuVar11[2][(long)puVar17 + 0x11]);
        }
        wrapf("%s = %s;",pcVar19,pcVar18);
      }
      ppuVar11 = ppuVar11 + 3;
    }
    pcVar19 = "min = %lu; time = %lu;";
    wrapf("min = %lu; time = %lu;",DAT_00102637,DAT_00102636);
    p_Var20 = _stdout;
    if (current_col != 0) {
      pcVar19 = _stdout->_IO_write_ptr;
      if (pcVar19 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar19 + 1;
        *pcVar19 = '\n';
        pcVar19 = (char *)p_Var20;
      }
      else {
        pcVar19 = (char *)_stdout;
        __overflow(_stdout,10);
      }
    }
    iVar7 = 0;
    current_col = 0;
    for (ppuVar11 = &mode_info; puVar15 = *ppuVar11, puVar15 != (undefined *)0x0;
        ppuVar11 = ppuVar11 + 4) {
      bVar4 = *(byte *)((long)ppuVar11 + 0xc);
      if ((bVar4 & 8) == 0) {
        iVar22 = *(int *)(ppuVar11 + 1);
        if (iVar22 != iVar7) {
          pcVar19 = _stdout->_IO_write_ptr;
          if (pcVar19 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar19 + 1;
            *pcVar19 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
          pcVar19 = (char *)0x0;
          current_col = 0;
        }
        switch(iVar22) {
        case 0:
          puVar12 = (uint *)&DAT_00102628;
          break;
        case 1:
          puVar12 = (uint *)&mode_3;
          break;
        case 2:
          puVar12 = (uint *)&DAT_00102624;
          break;
        case 3:
          puVar12 = &DAT_0010262c;
          break;
        case 4:
          puVar12 = (uint *)0x0;
          break;
        default:
          iVar7 = 0;
          piVar14 = &DAT_00105b68;
          do {
            if (*piVar14 == (int)pcVar19) {
              return *(undefined8 *)(&DAT_00105b70 + (long)iVar7 * 0x18);
            }
            iVar7 = iVar7 + 1;
            plVar1 = (long *)(piVar14 + 4);
            piVar14 = piVar14 + 6;
          } while (*plVar1 != 0);
          return 0;
        }
        puVar13 = ppuVar11[3];
        if (ppuVar11[3] == (undefined *)0x0) {
          puVar13 = ppuVar11[2];
        }
        iVar7 = iVar22;
        if ((undefined *)(ulong)((uint)puVar13 & *puVar12) == ppuVar11[2]) {
          pcVar19 = &_LC6;
          wrapf(&_LC6,puVar15);
        }
        else if ((bVar4 & 4) != 0) {
          pcVar19 = &_LC196;
          wrapf(&_LC196,puVar15);
        }
      }
    }
LAB_00105707:
    pcVar19 = _stdout->_IO_write_ptr;
    if (pcVar19 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar19 + 1;
      *pcVar19 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
  }
  else {
    pcVar18 = "when specifying an output style, modes may not be set";
    if ((bool)(bVar6 | bVar4)) goto LAB_00105a8a;
    bVar5 = false;
    if (local_58 != 0) {
      apply_settings(1,local_58,param_2,param_1);
      bVar5 = false;
      goto LAB_00105237;
    }
LAB_00105307:
    local_58 = dcgettext(0,"standard input",5);
    if (!bVar5) {
      while( true ) {
        pcVar19 = &local_41;
        apply_settings(1,local_58,param_2,param_1,check_mode_4,pcVar19);
        puVar17 = &mode_3;
        iVar7 = tcgetattr(0,(termios *)&mode_3);
        if (iVar7 != 0) break;
LAB_001052ac:
        pcVar19 = &local_41;
        puVar17 = &mode_3;
        local_41 = '\0';
        apply_settings(0,local_58,param_2,param_1,&mode_3,pcVar19);
        if (local_41 == '\0') goto LAB_001052d7;
        iVar7 = tcsetattr(0,tcsetattr_options,(termios *)&mode_3);
        if ((iVar7 != 0) || (iVar7 = tcgetattr(0,(termios *)&new_mode_2), iVar7 != 0)) break;
        if ((mode_3 == _new_mode_2) &&
           ((((DAT_00102624 == DAT_001025e4 && (DAT_00102628 == DAT_001025e8)) &&
             (DAT_0010262c == DAT_001025ec)) &&
            ((DAT_00102630 == DAT_001025f0 &&
             (iVar7 = memcmp(&DAT_00102631,&DAT_001025f1,0x20), iVar7 == 0)))))) {
          sVar8 = cfgetispeed((termios *)&mode_3);
          sVar9 = cfgetispeed((termios *)&new_mode_2);
          if (sVar8 == sVar9) {
            sVar8 = cfgetospeed((termios *)&mode_3);
            sVar9 = cfgetospeed((termios *)&new_mode_2);
            if (sVar8 == sVar9) goto LAB_001052d7;
          }
        }
        if (dev_debug != '\0') {
          uVar25 = 0;
          uVar10 = dcgettext(0,"indx: mode: actual mode",5);
          param_1 = 0x1029f8;
          error(0,0,uVar10);
          uVar10 = extraout_RDX;
          do {
            pcVar19 = &new_mode_2 + uVar25;
            pcVar18 = (char *)((long)&mode_3 + uVar25);
            puVar15 = &_LC1;
            uVar16 = uVar25 & 0xffffffff;
            if (*pcVar19 != *pcVar18) {
              puVar15 = &_LC182;
            }
            uVar25 = uVar25 + 1;
            error(0,0,"0x%02x, 0x%02x: 0x%02x%s",uVar16,*pcVar18,*pcVar19,puVar15,uVar10);
            uVar10 = extraout_RDX_00;
          } while (uVar25 != 0x3c);
        }
        param_2 = (undefined8 *)quotearg_n_style_colon(0,3,local_58);
        uVar10 = dcgettext(0,"%s: unable to perform all requested operations",5);
        error(1,0,uVar10,param_2);
      }
LAB_0010560a:
      ppuVar11 = (undefined **)quotearg_n_style_colon(0,3,local_58);
      puVar12 = (uint *)__errno_location();
      uVar25 = (ulong)*puVar12;
      error(1,uVar25,&_LC6,ppuVar11);
      if (((ulong)pcVar19 & 2) == 0) goto LAB_00105520;
      wrapf(&_LC6);
      uVar25 = 0;
      goto LAB_00105520;
    }
    puVar17 = &mode_3;
    iVar7 = tcgetattr(0,(termios *)&mode_3);
    if (iVar7 != 0) goto LAB_0010560a;
LAB_00105342:
    puVar17 = &mode_3;
    max_col = screen_columns();
    current_col = 0;
    if (local_50 == 1) {
      display_speed(&mode_3,1);
      display_window_size(1,local_58);
      wrapf("line = %d;",DAT_00102630);
      pcVar19 = _stdout->_IO_write_ptr;
      p_Var20 = _stdout;
      if (_stdout->_IO_write_end <= pcVar19) goto LAB_00105a60;
      _stdout->_IO_write_ptr = pcVar19 + 1;
      *pcVar19 = '\n';
      goto LAB_00105806;
    }
    if (local_50 == 2) {
      lVar23 = 0;
      __printf_chk(2,"%lx:%lx:%lx:%lx",mode_3,DAT_00102624,DAT_00102628,DAT_0010262c);
      do {
        puVar2 = &DAT_00102631 + lVar23;
        lVar23 = lVar23 + 1;
        __printf_chk(2,&_LC199,*puVar2);
      } while (lVar23 != 0x20);
      pcVar19 = _stdout->_IO_write_ptr;
      p_Var20 = _stdout;
      if (pcVar19 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar19 + 1;
        *pcVar19 = '\n';
        goto LAB_001052d7;
      }
      goto LAB_00105aa2;
    }
    if (local_50 != 0) goto LAB_001052d7;
    display_speed(&mode_3,1);
    wrapf("line = %d;",DAT_00102630);
    pcVar19 = _stdout->_IO_write_ptr;
    if (pcVar19 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar19 + 1;
      *pcVar19 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
    ppuVar11 = &control_info;
    bVar5 = true;
    current_col = 0;
    while( true ) {
      pcVar19 = *ppuVar11;
      iVar7 = strcmp(pcVar19,"min");
      if (iVar7 == 0) break;
      cVar3 = (&DAT_00102631)[(long)ppuVar11[2]];
      if ((cVar3 != *(char *)(ppuVar11 + 1)) && (iVar7 = strcmp(pcVar19,"flush"), iVar7 != 0)) {
        pcVar18 = "<undef>";
        if (cVar3 != '\0') {
          pcVar18 = (char *)visible_part_0(cVar3);
        }
        bVar5 = false;
        wrapf("%s = %s;",pcVar19,pcVar18);
      }
      ppuVar11 = ppuVar11 + 3;
    }
    if ((DAT_0010262c & 2) == 0) {
      wrapf("min = %lu; time = %lu;\n",DAT_00102637,DAT_00102636);
    }
    else if (!bVar5) {
      pcVar19 = _stdout->_IO_write_ptr;
      if (pcVar19 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar19 + 1;
        *pcVar19 = '\n';
      }
      else {
        __overflow(_stdout,10);
      }
    }
    uVar25 = 1;
    current_col = 0;
    puVar17 = (undefined4 *)&DAT_00104f84;
    for (ppuVar11 = &mode_info; *ppuVar11 != (undefined *)0x0; ppuVar11 = ppuVar11 + 4) {
      if ((*(byte *)((long)ppuVar11 + 0xc) & 8) == 0) {
        uVar21 = *(uint *)(ppuVar11 + 1);
        uVar16 = (ulong)uVar21;
        if ((uVar21 != local_50) && ((char)uVar25 == '\0')) {
          pcVar19 = _stdout->_IO_write_ptr;
          p_Var20 = _stdout;
          if (pcVar19 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar19 + 1;
            *pcVar19 = '\n';
          }
          else {
LAB_001059db:
            __overflow(p_Var20,10);
            uVar16 = (ulong)uVar21;
          }
          current_col = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x001054f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*(code *)((long)(int)puVar17[uVar16] + (long)puVar17))();
        return uVar10;
      }
LAB_00105520:
    }
    if ((char)uVar25 == '\0') goto LAB_00105707;
  }
  current_col = 0;
LAB_001052d7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


