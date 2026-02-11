
ulong main_cold(void)

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
      if ((iVar1 == 0) && (uVar3 = local_20, local_20 - 1 < 0x7fffffff)) goto LAB_0010007a;
    }
    uVar3 = 0x50;
  }
LAB_0010007a:
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
      psVar5 = &DAT_00105c28;
      do {
        if (sVar2 == *psVar5) {
          uVar6 = (&DAT_00105c30)[(long)iVar4 * 3];
          goto LAB_00100319;
        }
        iVar4 = iVar4 + 1;
        psVar1 = psVar5 + 4;
        psVar5 = psVar5 + 6;
      } while (*(long *)psVar1 != 0);
      uVar6 = 0;
LAB_00100319:
      sVar2 = cfgetispeed(param_1);
      iVar4 = 0;
      psVar5 = &DAT_00105c28;
      do {
        if (sVar2 == *psVar5) {
          uVar7 = (&DAT_00105c30)[(long)iVar4 * 3];
          goto LAB_00100352;
        }
        iVar4 = iVar4 + 1;
        psVar1 = psVar5 + 4;
        psVar5 = psVar5 + 6;
      } while (*(long *)psVar1 != 0);
      uVar7 = 0;
LAB_00100352:
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
  psVar5 = &DAT_00105c28;
  do {
    if (sVar2 == *psVar5) {
      uVar6 = (&DAT_00105c30)[(long)iVar4 * 3];
      goto LAB_001002b1;
    }
    iVar4 = iVar4 + 1;
    psVar1 = psVar5 + 4;
    psVar5 = psVar5 + 6;
  } while (*(long *)psVar1 != 0);
  uVar6 = 0;
LAB_001002b1:
  if (param_2 == '\0') {
    wrapf(&_LC3,uVar6);
    current_col = 0;
    return;
  }
  wrapf("speed %lu baud;",uVar6);
  return;
}



void integer_arg(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"invalid integer argument",5);
  xnumtoumax(param_1,0,0,param_2,&_LC7,uVar1,0,0);
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
          goto LAB_00100470;
        }
        buf_1._2_2_ = 0x3f5e;
      }
      puVar1 = buf_1 + 4;
      goto LAB_00100470;
    }
    buf_1._0_2_ = 0x3f5e;
  }
  puVar1 = buf_1 + 2;
LAB_00100470:
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
  uStack_40 = 0x100535;
  iVar1 = ioctl(0,0x5413,&local_38);
  if (iVar1 != 0) {
    uStack_40 = 0x10053e;
    piVar3 = __errno_location();
    if (*piVar3 != 0x16) {
      uStack_40 = 0x1005a0;
      uVar4 = quotearg_n_style_colon(0,3,param_3);
      uStack_40 = 0x1005b9;
      error(1,*piVar3,&_LC10,uVar4);
      goto LAB_001005b9;
    }
    local_38 = 0;
  }
  if (-1 < (int)param_1) {
    local_38 = CONCAT62(local_38._2_6_,(short)param_1);
  }
  if (-1 < param_2) {
    local_38._0_4_ = CONCAT22((short)param_2,(undefined2)local_38);
  }
  uStack_40 = 0x100570;
  iVar1 = ioctl(0,0x5414,&local_38);
  if (iVar1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_001005b9:
                    /* WARNING: Subroutine does not return */
    uStack_40 = 0x1005be;
    __stack_chk_fail();
  }
  uStack_40 = 0x1005cd;
  uVar4 = quotearg_n_style_colon(0,3,param_3);
  uStack_40 = 0x1005d5;
  puVar5 = (uint *)__errno_location();
  cVar9 = '\x01';
  uVar10 = (ulong)*puVar5;
  uStack_40 = 0x1005ed;
  error(1,uVar10,&_LC10,uVar4);
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
      error(1,*piVar3,&_LC10,uVar4);
      goto LAB_001006b2;
    }
    if (cVar9 == '\0') {
      uVar4 = quotearg_n_style_colon(0,3,uVar10);
      uVar6 = dcgettext(0,"%s: no size information for this device",5);
      __s1 = (char *)0x0;
      uVar10 = 1;
      error(1,0,uVar6,uVar4);
      pcVar8 = "0";
      iVar1 = 0;
      ppuVar7 = &PTR_DAT_00105c38;
      do {
        iVar2 = strcmp(__s1,pcVar8);
        if (iVar2 == 0) {
          __speed = (&DAT_00105c28)[(long)iVar1 * 6];
          if (__speed != 0xffffffff) {
            if ((uVar10 & 0xfffffffd) == 0) {
              last_ibaud = __speed;
              iVar1 = cfsetispeed(__termios_p,__speed);
              if (iVar1 == 0) {
                if ((int)uVar10 != 2) {
                  return;
                }
                goto LAB_0010075c;
              }
              uVar4 = quotearg_style(4,__s1);
              pcVar8 = "unsupported ispeed %s";
            }
            else {
LAB_0010075c:
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
LAB_001006b2:
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
      error(1,*piVar3,&_LC10,uVar4);
      goto LAB_001006b2;
    }
    if (param_1 == '\0') {
      uVar4 = quotearg_n_style_colon(0,3,param_2);
      uVar5 = dcgettext(0,"%s: no size information for this device",5);
      __s1 = (char *)0x0;
      uVar8 = 1;
      error(1,0,uVar5,uVar4);
      pcVar7 = "0";
      iVar1 = 0;
      ppuVar6 = &PTR_DAT_00105c38;
      do {
        iVar2 = strcmp(__s1,pcVar7);
        if (iVar2 == 0) {
          __speed = (&DAT_00105c28)[(long)iVar1 * 6];
          if (__speed != 0xffffffff) {
            if ((uVar8 & 0xfffffffd) == 0) {
              last_ibaud = __speed;
              iVar1 = cfsetispeed(__termios_p,__speed);
              if (iVar1 == 0) {
                if ((int)uVar8 != 2) {
                  return;
                }
                goto LAB_0010075c;
              }
              uVar4 = quotearg_style(4,__s1);
              pcVar7 = "unsupported ispeed %s";
            }
            else {
LAB_0010075c:
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
LAB_001006b2:
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
  ppuVar5 = &PTR_DAT_00105c38;
  do {
    iVar1 = strcmp(param_2,pcVar6);
    if (iVar1 == 0) {
      __speed = (&DAT_00105c28)[(long)iVar2 * 6];
      if (__speed != 0xffffffff) {
        if ((param_1 & 0xfffffffd) == 0) {
          last_ibaud = __speed;
          iVar2 = cfsetispeed(param_3,__speed);
          if (iVar2 == 0) {
            if (param_1 != 2) {
              return;
            }
            goto LAB_0010075c;
          }
          uVar4 = quotearg_style(4,param_2);
          pcVar6 = "unsupported ispeed %s";
        }
        else {
LAB_0010075c:
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
    goto LAB_0010087a;
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
    if (pcVar4 != (char *)0x0) goto LAB_0010161d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC20);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010161d:
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
LAB_0010087a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



void apply_settings(char param_1,undefined8 param_2,long param_3,int param_4,termios *param_5,
                   undefined1 *param_6)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  speed_t sVar4;
  byte *__s1;
  speed_t sVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  speed_t sVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  char cVar17;
  char cVar18;
  char *pcVar19;
  undefined **ppuVar20;
  char *pcVar21;
  undefined **ppuVar22;
  long in_FS_OFFSET;
  bool bVar23;
  ulong extraout_XMM0_Qa;
  ulong uVar24;
  int local_94;
  undefined1 *local_88;
  char local_6c;
  char *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar17 = param_1;
  if (param_4 < 2) goto LAB_00101981;
  iVar15 = 1;
  local_94 = param_4;
  local_88 = param_6;
LAB_001017cb:
  lVar16 = (long)iVar15 * 8;
  pcVar21 = *(char **)(param_3 + (long)iVar15 * 8);
  uVar11 = tcsetattr_options;
  if (pcVar21 == (char *)0x0) goto LAB_001017be;
  bVar23 = *pcVar21 != '-';
  if (!bVar23) {
    pcVar21 = pcVar21 + 1;
  }
  iVar7 = strcmp(pcVar21,"drain");
  uVar11 = (uint)bVar23;
  if (iVar7 == 0) goto LAB_001017be;
  ppuVar20 = &PTR_s_parodd_00106260;
  iVar7 = 0;
  pcVar19 = "parenb";
  do {
    iVar8 = strcmp(pcVar21,pcVar19);
    if (iVar8 == 0) {
      if (((&DAT_0010624c)[(long)iVar7 * 0x20] & 0x10) != 0) goto LAB_00101871;
      if ((bVar23) || (((&DAT_0010624c)[(long)iVar7 * 0x20] & 4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00101b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00105030 +
                  *(int *)(&DAT_00105030 + (ulong)(uint)(&DAT_00106248)[(long)iVar7 * 8] * 4)))();
        return;
      }
      *local_88 = 1;
      goto LAB_00101e86;
    }
    pcVar19 = *ppuVar20;
    ppuVar20 = ppuVar20 + 4;
    iVar7 = iVar7 + 1;
  } while (pcVar19 != (char *)0x0);
  if (!bVar23) {
LAB_00101e86:
    uVar13 = quote(pcVar21 + -1);
    pcVar21 = "invalid argument %s";
    goto LAB_00101e9e;
  }
  ppuVar20 = &PTR_DAT_00106078;
  iVar7 = 0;
  pcVar19 = "intr";
  do {
    iVar8 = strcmp(pcVar21,pcVar19);
    if (iVar8 == 0) {
      if ((local_94 + -1 != iVar15) &&
         (__s1 = *(byte **)(param_3 + 8 + lVar16), __s1 != (byte *)0x0)) {
        iVar15 = iVar15 + 1;
        iVar8 = strcmp(pcVar19,"min");
        if ((iVar8 != 0) && (iVar8 = strcmp(pcVar19,"time"), iVar8 != 0)) {
          bVar2 = *__s1;
          bVar6 = bVar2;
          if ((bVar2 == 0) || (bVar3 = __s1[1], bVar3 == 0)) goto LAB_00101a5d;
          iVar8 = strcmp((char *)__s1,"^-");
          bVar6 = 0;
          if ((iVar8 == 0) || (iVar8 = strcmp((char *)__s1,"undef"), iVar8 == 0)) goto LAB_00101a5d;
          if (bVar2 == 0x5e) {
            if (bVar3 == 0x3f) {
              bVar6 = 0x7f;
            }
            else {
              bVar6 = bVar3 & 0x9f;
            }
            goto LAB_00101a5d;
          }
        }
        uVar13 = dcgettext(0,"invalid integer argument",5);
        bVar6 = xnumtoumax(__s1,0,0,0xff,&_LC7,uVar13,0,0);
LAB_00101a5d:
        param_5->c_cc[(&DAT_00106070)[(long)iVar7 * 3]] = bVar6;
        *local_88 = 1;
        uVar11 = tcsetattr_options;
        goto LAB_001017be;
      }
      goto LAB_001021e1;
    }
    pcVar19 = *ppuVar20;
    ppuVar20 = ppuVar20 + 3;
    iVar7 = iVar7 + 1;
  } while (pcVar19 != (char *)0x0);
LAB_00101871:
  iVar7 = strcmp(pcVar21,"ispeed");
  if (iVar7 == 0) {
    if ((local_94 + -1 != iVar15) &&
       (pcVar19 = *(char **)(param_3 + 8 + lVar16), pcVar19 != (char *)0x0)) {
      ppuVar20 = &PTR_DAT_00105c38;
      pcVar21 = "0";
      ppuVar22 = &PTR_DAT_00105c38;
      iVar7 = 0;
      do {
        iVar8 = strcmp(pcVar19,pcVar21);
        if (iVar8 == 0) {
          iVar8 = 0;
          if ((&DAT_00105c28)[(long)iVar7 * 6] != -1) {
            pcVar21 = "0";
            goto LAB_00101924;
          }
          break;
        }
        pcVar21 = *ppuVar22;
        ppuVar22 = ppuVar22 + 3;
        iVar7 = iVar7 + 1;
      } while (pcVar21 != (char *)0x0);
      uVar13 = quote(pcVar19);
      pcVar21 = "invalid ispeed %s";
      goto LAB_00101e9e;
    }
LAB_001021e1:
    uVar13 = quote(pcVar21);
    pcVar21 = "missing argument to %s";
LAB_00101e9e:
    uVar14 = dcgettext(0,pcVar21,5);
    error(0,0,uVar14,uVar13);
    usage(1);
LAB_00101ec0:
    sVar5 = last_ibaud;
    sVar4 = last_obaud;
    if (((last_ibaud == 0xffffffff) || (last_obaud == 0xffffffff)) ||
       ((sVar10 = cfgetispeed(param_5), sVar5 == sVar10 &&
        (sVar10 = cfgetospeed(param_5), sVar4 == sVar10)))) goto LAB_0010198a;
    iVar15 = 0;
    ppuVar20 = &speeds;
    while (*ppuVar20 != (undefined *)0x0) {
      if (sVar4 == *(speed_t *)(ppuVar20 + 1)) {
        iVar15 = (int)(&DAT_00105c30)[(long)iVar15 * 3];
        goto LAB_00101f27;
      }
      iVar15 = iVar15 + 1;
      ppuVar20 = ppuVar20 + 3;
    }
    iVar15 = 0;
LAB_00101f27:
    iVar7 = 0;
    ppuVar20 = &speeds;
    while (*ppuVar20 != (undefined *)0x0) {
      if (sVar5 == *(speed_t *)(ppuVar20 + 1)) {
        uVar13 = (&DAT_00105c30)[(long)iVar7 * 3];
        goto LAB_00102628;
      }
      iVar7 = iVar7 + 1;
      ppuVar20 = ppuVar20 + 3;
    }
    uVar13 = 0;
LAB_00102628:
    uVar14 = dcgettext(0,"asymmetric input (%lu), output (%lu) speeds not supported",5);
    uVar11 = error(1,0,uVar14,uVar13);
    uVar24 = extraout_XMM0_Qa | _LC160;
    param_5->c_lflag = uVar11 | 4;
    param_5->c_iflag = (int)uVar24;
    param_5->c_oflag = (int)(uVar24 >> 0x20);
LAB_00101cea:
    *local_88 = 1;
    uVar11 = tcsetattr_options;
LAB_001017be:
    tcsetattr_options = uVar11;
    iVar15 = iVar15 + 1;
    local_6c = cVar17;
    if (local_94 <= iVar15) goto LAB_00101981;
    goto LAB_001017cb;
  }
  iVar7 = strcmp(pcVar21,"ospeed");
  if (iVar7 == 0) {
    if ((local_94 + -1 != iVar15) &&
       (pcVar19 = *(char **)(param_3 + 8 + lVar16), pcVar19 != (char *)0x0)) {
      ppuVar20 = &PTR_DAT_00105c38;
      pcVar21 = "0";
      iVar7 = 0;
      do {
        iVar8 = strcmp(pcVar19,pcVar21);
        if (iVar8 == 0) {
          if ((&DAT_00105c28)[(long)iVar7 * 6] != -1) {
            set_speed(1,pcVar19,param_5);
            goto LAB_0010195d;
          }
          break;
        }
        pcVar21 = *ppuVar20;
        ppuVar20 = ppuVar20 + 3;
        iVar7 = iVar7 + 1;
      } while (pcVar21 != (char *)0x0);
      uVar13 = quote(pcVar19);
      pcVar21 = "invalid ospeed %s";
      goto LAB_00101e9e;
    }
    goto LAB_001021e1;
  }
  iVar7 = strcmp(pcVar21,"rows");
  if (iVar7 != 0) {
    iVar7 = strcmp(pcVar21,"cols");
    if ((iVar7 == 0) || (iVar7 = strcmp(pcVar21,"columns"), iVar7 == 0)) {
      if ((local_94 + -1 != iVar15) && (lVar16 = *(long *)(param_3 + 8 + lVar16), lVar16 != 0)) {
        if (param_1 == '\0') {
          uVar9 = integer_arg(lVar16,0x7fffffff);
          set_window_size(0xffffffff,uVar9,param_2);
        }
        goto LAB_0010196c;
      }
    }
    else {
      iVar7 = strcmp(pcVar21,"size");
      if (iVar7 == 0) {
        uVar11 = tcsetattr_options;
        if (param_1 != '\0') goto LAB_001017be;
        max_col = main_cold();
        current_col = 0;
        display_window_size(0,param_2);
        uVar11 = tcsetattr_options;
        goto LAB_001017be;
      }
      iVar7 = strcmp(pcVar21,"line");
      if (iVar7 != 0) {
        iVar7 = strcmp(pcVar21,"speed");
        if (iVar7 == 0) {
          uVar11 = tcsetattr_options;
          if (param_1 != '\0') goto LAB_001017be;
          max_col = main_cold();
          display_speed(param_5,0);
          uVar11 = tcsetattr_options;
          goto LAB_001017be;
        }
        iVar7 = 0;
        ppuVar20 = &speeds;
        while (pcVar19 = *ppuVar20, pcVar19 != (char *)0x0) {
          ppuVar20 = ppuVar20 + 3;
          iVar8 = strcmp(pcVar21,pcVar19);
          if (iVar8 == 0) {
            if ((&DAT_00105c28)[(long)iVar7 * 6] != -1) {
              set_speed(2,pcVar21,param_5);
              uVar11 = tcsetattr_options;
              if (param_1 == '\0') goto LAB_00101cea;
              goto LAB_001017be;
            }
            break;
          }
          iVar7 = iVar7 + 1;
        }
        piVar12 = __errno_location();
        lVar16 = 0;
        pcVar19 = pcVar21;
        do {
          *piVar12 = 0;
          uVar24 = __isoc23_strtoul(pcVar19,&local_60,0x10);
          if (((*piVar12 != 0) || (local_60 == pcVar19 || 0xffffffff < uVar24)) ||
             (*local_60 != ':')) goto LAB_001020fe;
          *(int *)((long)&local_58 + lVar16 * 4) = (int)uVar24;
          lVar16 = lVar16 + 1;
          pcVar19 = local_60 + 1;
        } while (lVar16 != 4);
        lVar16 = 0;
        param_5->c_iflag = (undefined4)local_58;
        param_5->c_oflag = local_58._4_4_;
        param_5->c_cflag = (undefined4)uStack_50;
        param_5->c_lflag = uStack_50._4_4_;
        while( true ) {
          cVar18 = ':';
          if (lVar16 == 0x1f) {
            cVar18 = '\0';
          }
          *piVar12 = 0;
          uVar24 = __isoc23_strtoul(pcVar19,&local_60,0x10);
          if (((*piVar12 != 0) || (*local_60 != cVar18 || 0xff < uVar24)) || (local_60 == pcVar19))
          break;
          pcVar19 = local_60 + 1;
          param_5->c_cc[lVar16] = (cc_t)uVar24;
          lVar16 = lVar16 + 1;
          if (lVar16 == 0x20) goto LAB_00101cea;
        }
LAB_001020fe:
        uVar13 = quote(pcVar21);
        pcVar21 = "invalid argument %s";
        goto LAB_00101e9e;
      }
      if (local_94 + -1 != iVar15) {
        plVar1 = (long *)(param_3 + 8 + lVar16);
        lVar16 = *plVar1;
        if (lVar16 != 0) {
          iVar15 = iVar15 + 1;
          uVar24 = integer_arg(lVar16,0xffffffffffffffff);
          param_5->c_line = (cc_t)uVar24;
          if ((uVar24 & 0xffffffffffffff00) == 0) goto LAB_00101cea;
          uVar13 = quote(*plVar1);
          uVar14 = dcgettext(0,"invalid line discipline %s",5);
          error(0,0x4b,uVar14,uVar13);
          goto LAB_00101cea;
        }
      }
    }
    goto LAB_001021e1;
  }
  if ((local_94 + -1 == iVar15) || (lVar16 = *(long *)(param_3 + 8 + lVar16), lVar16 == 0))
  goto LAB_001021e1;
  if (param_1 == '\0') {
    uVar9 = integer_arg(lVar16,0x7fffffff);
    set_window_size(uVar9,0xffffffff,param_2);
  }
  goto LAB_0010196c;
LAB_00101924:
  iVar7 = strcmp(pcVar19,pcVar21);
  if (iVar7 == 0) goto code_r0x00101930;
  pcVar21 = *ppuVar20;
  ppuVar20 = ppuVar20 + 3;
  iVar8 = iVar8 + 1;
  if (pcVar21 == (char *)0x0) goto LAB_00102222;
  goto LAB_00101924;
code_r0x00101930:
  sVar4 = (&DAT_00105c28)[(long)iVar8 * 6];
  if (sVar4 == 0xffffffff) {
LAB_00102222:
                    /* WARNING: Subroutine does not return */
    __assert_fail("baud != (speed_t) -1","src/stty.c",0x6bc,"set_speed");
  }
  last_ibaud = sVar4;
  iVar7 = cfsetispeed(param_5,sVar4);
  if (iVar7 != 0) {
    uVar13 = quotearg_style(4,pcVar19);
    uVar14 = dcgettext(0,"unsupported ispeed %s",5);
    error(1,0,uVar14,uVar13);
LAB_001025b4:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0010195d:
  if (param_1 == '\0') {
    *local_88 = 1;
  }
LAB_0010196c:
  iVar15 = iVar15 + 2;
  local_6c = cVar17;
  if (local_94 <= iVar15) goto LAB_00101981;
  goto LAB_001017cb;
LAB_00101981:
  bVar23 = cVar17 == '\0';
  cVar17 = local_6c;
  if (bVar23) {
LAB_0010198a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_001025b4;
  }
  goto LAB_00101ec0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong main(int param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  speed_t sVar7;
  speed_t sVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  uint *puVar13;
  undefined *puVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 *puVar17;
  char *pcVar18;
  _IO_FILE *p_Var19;
  uint uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long in_FS_OFFSET;
  ulong uStack_78;
  ushort uStack_6e;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  ulong local_58;
  uint local_50;
  byte local_4b;
  byte local_4a;
  byte local_49;
  char local_41;
  long local_40;
  
  lVar22 = 1;
  pcVar9 = (char *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_60 = (undefined *)0x1050c0;
  set_program_name(*param_2);
  puStack_60 = (undefined *)0x1050d1;
  setlocale(6,"");
  puStack_60 = (undefined *)0x1050e0;
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar17 = (undefined4 *)0x0;
  puStack_60 = (undefined *)0x1050ea;
  textdomain("coreutils");
  puStack_60 = (undefined *)0x1050f6;
  atexit((__func *)&close_stdout);
  local_58 = 0;
  _opterr = 0;
  local_4b = 1;
  local_49 = 0;
  local_4a = 0;
  local_50 = 0;
  while( true ) {
    uVar20 = 0x105f80;
    puStack_60 = (undefined *)0x105140;
    iVar6 = getopt_long(param_1 - (int)pcVar9,param_2 + (long)puVar17,"-agF:");
    if (iVar6 == -1) break;
    iVar21 = (int)lVar22;
    if (iVar6 == 0x61) {
      local_4a = 1;
      local_50 = 1;
LAB_001051cb:
      if (iVar21 < _optind) {
        lVar23 = lVar22 + (long)puVar17;
        lVar22 = (long)_optind;
        puStack_60 = (undefined *)0x1051fb;
        memset(param_2 + lVar23,0,(ulong)(uint)((_optind + -1) - iVar21) * 8 + 8);
      }
    }
    else {
      if (0x61 < iVar6) {
        if (iVar6 == 0x67) {
          local_49 = 1;
          local_50 = 2;
        }
        else {
          if (iVar6 != 0x80) goto LAB_00105220;
          dev_debug = '\x01';
        }
        goto LAB_001051cb;
      }
      if (iVar6 == -0x82) {
        p_Var19 = (_IO_FILE *)0x0;
        puStack_60 = (undefined *)0x105a9b;
        usage();
        goto LAB_00105a9b;
      }
      if (iVar6 == 0x46) {
        if (local_58 == 0) {
          local_58 = _optarg;
          goto LAB_001051cb;
        }
        pcVar18 = "only one device may be specified";
        goto LAB_00105b4a;
      }
      if (iVar6 == -0x83) {
        puStack_60 = (undefined *)0x105182;
        uVar10 = proper_name_lite("David MacKenzie","David MacKenzie");
        puStack_60 = (undefined *)0x1051ab;
        version_etc(_stdout,&_LC20,"GNU coreutils",_Version,uVar10,0);
                    /* WARNING: Subroutine does not return */
        puStack_60 = &UNK_001051b2;
        exit(0);
      }
LAB_00105220:
      uVar20 = (int)pcVar9 + iVar21;
      pcVar9 = (char *)(ulong)uVar20;
      puVar17 = (undefined4 *)(long)(int)uVar20;
      pcVar18 = (char *)param_2[(long)puVar17];
      puStack_60 = (undefined *)0x105239;
      iVar6 = strcmp(pcVar18,"-drain");
      if (iVar6 != 0) {
        puStack_60 = (undefined *)0x10524c;
        iVar6 = strcmp(pcVar18,"drain");
        if (iVar6 != 0) {
          local_4b = 0;
        }
      }
      _optind = 0;
      lVar22 = 1;
    }
  }
  if ((local_4a & local_49) != 0) {
    pcVar18 = "the options for verbose and stty-readable output styles are\nmutually exclusive";
LAB_00105b4a:
    puStack_60 = (undefined *)0x105b51;
    uVar10 = dcgettext(0,pcVar18,5);
    p_Var19 = (_IO_FILE *)0x1;
    puStack_60 = (undefined *)0x105b62;
    error(1,0,uVar10);
LAB_00105b62:
    puStack_60 = (undefined *)0x105b6c;
    __overflow(p_Var19,10);
    goto LAB_00105397;
  }
  if (local_4b == 0) {
    local_4b = local_4a | local_49;
    pcVar18 = "when specifying an output style, modes may not be set";
    if (local_4b != 0) goto LAB_00105b4a;
    if (local_58 != 0) {
      puStack_60 = (undefined *)0x1052f7;
      apply_settings(1,local_58,param_2,param_1);
      goto LAB_001052f7;
    }
LAB_001053c7:
    puStack_60 = (undefined *)0x1053da;
    local_58 = dcgettext(0,"standard input",5);
    if (local_4b == 0) {
      while( true ) {
        pcVar9 = &local_41;
        puStack_60 = (undefined *)0x1056b1;
        apply_settings(1,local_58,param_2,param_1,check_mode_4,pcVar9);
        puVar17 = &mode_3;
        puStack_60 = (undefined *)0x1056c2;
        iVar6 = tcgetattr(0,(termios *)&mode_3);
        if (iVar6 != 0) break;
LAB_0010536c:
        pcVar9 = &local_41;
        puVar17 = &mode_3;
        local_41 = '\0';
        puStack_60 = (undefined *)0x10538c;
        apply_settings(0,local_58,param_2,param_1,&mode_3,pcVar9);
        if (local_41 == '\0') goto LAB_00105397;
        puStack_60 = (undefined *)0x105614;
        iVar6 = tcsetattr(0,tcsetattr_options,(termios *)&mode_3);
        if (iVar6 != 0) break;
        puStack_60 = (undefined *)0x10562d;
        iVar6 = tcgetattr(0,(termios *)&new_mode_2);
        if (iVar6 != 0) break;
        if ((((mode_3 == _new_mode_2) && (DAT_001026e4 == DAT_001026a4)) &&
            (DAT_001026e8 == DAT_001026a8)) &&
           ((DAT_001026ec == DAT_001026ac && (DAT_001026f0 == DAT_001026b0)))) {
          puStack_60 = (undefined *)0x10577d;
          iVar6 = memcmp(&DAT_001026f1,&DAT_001026b1,0x20);
          if (iVar6 == 0) {
            puStack_60 = (undefined *)0x10578d;
            sVar7 = cfgetispeed((termios *)&mode_3);
            puStack_60 = (undefined *)0x105798;
            sVar8 = cfgetispeed((termios *)&new_mode_2);
            if (sVar7 == sVar8) {
              puStack_60 = (undefined *)0x1057a9;
              sVar7 = cfgetospeed((termios *)&mode_3);
              puStack_60 = (undefined *)0x1057b4;
              sVar8 = cfgetospeed((termios *)&new_mode_2);
              if (sVar7 == sVar8) goto LAB_00105397;
            }
          }
        }
        if (dev_debug != '\0') {
          uVar11 = 0;
          puStack_60 = (undefined *)0x105bb8;
          uVar10 = dcgettext(0,"indx: mode: actual mode",5);
          param_1 = 0x102ab8;
          puStack_60 = (undefined *)0x105bd4;
          error(0,0,uVar10);
          puStack_60 = (undefined *)extraout_RDX;
          do {
            puStack_68 = &_LC1;
            uVar16 = uVar11 & 0xffffffff;
            if ((&new_mode_2)[uVar11] != *(char *)((long)&mode_3 + uVar11)) {
              puStack_68 = &_LC182;
            }
            uVar11 = uVar11 + 1;
            uStack_70 = 0x105c07;
            error(0,0,"0x%02x, 0x%02x: 0x%02x%s",uVar16);
            puStack_60 = (undefined *)extraout_RDX_00;
          } while (uVar11 != 0x3c);
        }
        puStack_60 = (undefined *)0x105664;
        param_2 = (undefined8 *)quotearg_n_style_colon(0,3,local_58);
        puStack_60 = (undefined *)0x10567a;
        uVar10 = dcgettext(0,"%s: unable to perform all requested operations",5);
        puStack_60 = (undefined *)0x10568e;
        error(1,0,uVar10,param_2);
      }
LAB_001056ca:
      puStack_60 = (undefined *)0x1056da;
      ppuVar12 = (undefined **)quotearg_n_style_colon(0,3,local_58);
      puStack_60 = (undefined *)0x1056e2;
      puVar13 = (uint *)__errno_location();
      uVar11 = (ulong)*puVar13;
      puStack_60 = (undefined *)0x1056fa;
      error(1,uVar11,&_LC10,ppuVar12);
      if (((ulong)pcVar9 & 2) == 0) goto LAB_001055e0;
      puStack_60 = (undefined *)0x105715;
      wrapf(&_LC10);
      uVar11 = 0;
      goto LAB_001055e0;
    }
    puVar17 = &mode_3;
    puStack_60 = (undefined *)0x1053fa;
    iVar6 = tcgetattr(0,(termios *)&mode_3);
    if (iVar6 != 0) goto LAB_001056ca;
LAB_00105402:
    puVar17 = &mode_3;
    puStack_60 = (undefined *)0x105407;
    max_col = main_cold();
    current_col = 0;
    if (local_50 == 1) {
      puStack_60 = (undefined *)0x105883;
      display_speed(&mode_3,1);
      puStack_60 = (undefined *)0x105891;
      display_window_size(1,local_58);
      puStack_60 = (undefined *)0x1058a6;
      wrapf("line = %d;",DAT_001026f0);
      pcVar9 = _stdout->_IO_write_ptr;
      p_Var19 = _stdout;
      if (_stdout->_IO_write_end <= pcVar9) goto LAB_00105b20;
      _stdout->_IO_write_ptr = pcVar9 + 1;
      *pcVar9 = '\n';
      goto LAB_001058c6;
    }
    if (local_50 == 2) {
      lVar22 = 0;
      puStack_60 = (undefined *)0x105833;
      __printf_chk(2,"%lx:%lx:%lx:%lx",mode_3,DAT_001026e4,DAT_001026e8,DAT_001026ec);
      do {
        puVar1 = &DAT_001026f1 + lVar22;
        lVar22 = lVar22 + 1;
        puStack_60 = (undefined *)0x10584b;
        __printf_chk(2,&_LC199,*puVar1);
      } while (lVar22 != 0x20);
      pcVar9 = _stdout->_IO_write_ptr;
      p_Var19 = _stdout;
      if (pcVar9 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar9 + 1;
        *pcVar9 = '\n';
        goto LAB_00105397;
      }
      goto LAB_00105b62;
    }
    if (local_50 != 0) goto LAB_00105397;
    puStack_60 = (undefined *)0x105442;
    display_speed(&mode_3,1);
    puStack_60 = (undefined *)0x105457;
    wrapf("line = %d;",DAT_001026f0);
    pcVar9 = _stdout->_IO_write_ptr;
    if (pcVar9 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar9 + 1;
      *pcVar9 = '\n';
    }
    else {
      puStack_60 = (undefined *)0x105b98;
      __overflow(_stdout,10);
    }
    ppuVar12 = &control_info;
    bVar5 = true;
    current_col = 0;
    while( true ) {
      pcVar9 = *ppuVar12;
      puStack_60 = (undefined *)0x1054f5;
      iVar6 = strcmp(pcVar9,"min");
      if (iVar6 == 0) break;
      cVar2 = (&DAT_001026f1)[(long)ppuVar12[2]];
      if (cVar2 != *(char *)(ppuVar12 + 1)) {
        puStack_60 = (undefined *)0x1054b5;
        iVar6 = strcmp(pcVar9,"flush");
        if (iVar6 != 0) {
          pcVar18 = "<undef>";
          if (cVar2 != '\0') {
            puStack_60 = (undefined *)0x1054cc;
            pcVar18 = (char *)visible_part_0(cVar2);
          }
          bVar5 = false;
          puStack_60 = (undefined *)0x1054e3;
          wrapf("%s = %s;",pcVar9,pcVar18);
        }
      }
      ppuVar12 = ppuVar12 + 3;
    }
    if ((DAT_001026ec & 2) == 0) {
      puStack_60 = (undefined *)0x105aca;
      wrapf("min = %lu; time = %lu;\n",DAT_001026f7,DAT_001026f6);
    }
    else if (!bVar5) {
      pcVar9 = _stdout->_IO_write_ptr;
      if (pcVar9 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar9 + 1;
        *pcVar9 = '\n';
      }
      else {
        puStack_60 = (undefined *)0x105ad9;
        __overflow(_stdout,10);
      }
    }
    uVar11 = 1;
    current_col = 0;
    puVar17 = (undefined4 *)&DAT_00105044;
    for (ppuVar12 = &mode_info; *ppuVar12 != (undefined *)0x0; ppuVar12 = ppuVar12 + 4) {
      if ((*(byte *)((long)ppuVar12 + 0xc) & 8) == 0) {
        uVar20 = *(uint *)(ppuVar12 + 1);
        uVar16 = (ulong)uVar20;
        if (uVar20 != local_50) {
          if ((char)uVar11 == '\0') {
            pcVar9 = _stdout->_IO_write_ptr;
            p_Var19 = _stdout;
            if (pcVar9 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar9 + 1;
              *pcVar9 = '\n';
            }
            else {
LAB_00105a9b:
              local_58 = CONCAT44(local_58._4_4_,uVar20);
              puStack_60 = (undefined *)0x105aa8;
              __overflow(p_Var19,10);
              uVar16 = local_58 & 0xffffffff;
            }
            current_col = 0;
          }
          local_50 = (uint)uVar16;
        }
                    /* WARNING: Could not recover jumptable at 0x001055b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*(code *)((long)(int)puVar17[uVar16] + (long)puVar17))();
        return uVar11;
      }
LAB_001055e0:
    }
    if ((char)uVar11 == '\0') goto LAB_001057c7;
  }
  else {
    if (local_58 == 0) goto LAB_001053c7;
LAB_001052f7:
    puStack_60 = (undefined *)0x105309;
    iVar6 = fd_reopen(0,local_58,0x800,0);
    if (iVar6 < 0) goto LAB_001056ca;
    puStack_60 = (undefined *)0x10531f;
    uVar20 = rpl_fcntl(0,3);
    if (uVar20 != 0xffffffff) {
      puStack_60 = (undefined *)0x10533b;
      iVar6 = rpl_fcntl(0,4,uVar20 & 0xfffff7ff);
      if (iVar6 < 0) goto LAB_00105ade;
      puVar17 = &mode_3;
      puStack_60 = (undefined *)0x105354;
      iVar6 = tcgetattr(0,(termios *)&mode_3);
      if (iVar6 != 0) goto LAB_001056ca;
      if (local_4b == 0) goto LAB_0010536c;
      goto LAB_00105402;
    }
LAB_00105ade:
    puStack_60 = (undefined *)0x105aee;
    puVar17 = (undefined4 *)quotearg_n_style_colon(0,3,local_58);
    puStack_60 = (undefined *)0x105b04;
    uVar10 = dcgettext(0,"%s: couldn\'t reset non-blocking mode",5);
    puStack_60 = (undefined *)0x105b0c;
    piVar15 = __errno_location();
    p_Var19 = (_IO_FILE *)0x1;
    puStack_60 = (undefined *)0x105b20;
    error(1,*piVar15,uVar10,puVar17);
LAB_00105b20:
    puStack_60 = (undefined *)0x105b2a;
    __overflow(p_Var19,10);
LAB_001058c6:
    ppuVar12 = &control_info;
    current_col = 0;
    while( true ) {
      pcVar9 = *ppuVar12;
      puStack_60 = (undefined *)0x10593b;
      iVar6 = strcmp(pcVar9,"min");
      if (iVar6 == 0) break;
      puStack_60 = (undefined *)0x1058f9;
      iVar6 = strcmp(pcVar9,"flush");
      if (iVar6 != 0) {
        pcVar18 = "<undef>";
        if (ppuVar12[2][(long)puVar17 + 0x11] != '\0') {
          puStack_60 = (undefined *)0x105915;
          pcVar18 = (char *)visible_part_0(ppuVar12[2][(long)puVar17 + 0x11]);
        }
        puStack_60 = (undefined *)0x105929;
        wrapf("%s = %s;",pcVar9,pcVar18);
      }
      ppuVar12 = ppuVar12 + 3;
    }
    puStack_60 = (undefined *)0x105959;
    wrapf("min = %lu; time = %lu;",DAT_001026f7,DAT_001026f6);
    if (current_col != 0) {
      pcVar9 = _stdout->_IO_write_ptr;
      if (pcVar9 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar9 + 1;
        *pcVar9 = '\n';
      }
      else {
        puStack_60 = (undefined *)0x105b39;
        __overflow(_stdout,10);
      }
    }
    iVar6 = 0;
    current_col = 0;
    for (ppuVar12 = &mode_info; puVar4 = *ppuVar12, puVar4 != (undefined *)0x0;
        ppuVar12 = ppuVar12 + 4) {
      bVar3 = *(byte *)((long)ppuVar12 + 0xc);
      if ((bVar3 & 8) == 0) {
        iVar21 = *(int *)(ppuVar12 + 1);
        if (iVar21 != iVar6) {
          pcVar9 = _stdout->_IO_write_ptr;
          if (pcVar9 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar9 + 1;
            *pcVar9 = '\n';
          }
          else {
            puStack_60 = (undefined *)0x105a8f;
            __overflow(_stdout,10);
          }
          current_col = 0;
        }
        switch(iVar21) {
        case 0:
          puVar13 = (uint *)&DAT_001026e8;
          break;
        case 1:
          puVar13 = (uint *)&mode_3;
          break;
        case 2:
          puVar13 = (uint *)&DAT_001026e4;
          break;
        case 3:
          puVar13 = &DAT_001026ec;
          break;
        case 4:
          puVar13 = (uint *)0x0;
          break;
        default:
          puStack_68 = *(undefined **)(in_FS_OFFSET + 0x28);
          iVar6 = ioctl(1,0x5413,&stack0xffffffffffffff90);
          if (iVar6 == 0) {
            uVar11 = (ulong)uStack_6e;
            if (uStack_6e != 0) goto LAB_0010007a;
          }
          pcVar9 = getenv("COLUMNS");
          if (((pcVar9 == (char *)0x0) || (iVar6 = xstrtol(pcVar9,0,0,&uStack_78,&_LC1), iVar6 != 0)
              ) || (uVar11 = uStack_78, 0x7ffffffe < uStack_78 - 1)) {
            uVar11 = 0x50;
          }
LAB_0010007a:
          if (puStack_68 != (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar11;
        }
        puVar14 = ppuVar12[3];
        if (ppuVar12[3] == (undefined *)0x0) {
          puVar14 = ppuVar12[2];
        }
        iVar6 = iVar21;
        if ((undefined *)(ulong)((uint)puVar14 & *puVar13) == ppuVar12[2]) {
          puStack_60 = (undefined *)0x105a6b;
          wrapf(&_LC10,puVar4);
        }
        else if ((bVar3 & 4) != 0) {
          puStack_60 = (undefined *)0x105a3d;
          wrapf(&_LC196,puVar4);
        }
      }
    }
LAB_001057c7:
    pcVar9 = _stdout->_IO_write_ptr;
    if (pcVar9 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar9 + 1;
      *pcVar9 = '\n';
    }
    else {
      puStack_60 = (undefined *)0x105b89;
      __overflow(_stdout,10);
    }
  }
  current_col = 0;
LAB_00105397:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    puStack_60 = (undefined *)0x105ba2;
    __stack_chk_fail();
  }
  return 0;
}


