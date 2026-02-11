
int hextobin(byte param_1)

{
  switch(param_1) {
  case 0x41:
  case 0x61:
    return 10;
  case 0x42:
  case 0x62:
    return 0xb;
  case 0x43:
  case 99:
    return 0xc;
  case 0x44:
  case 100:
    return 0xd;
  case 0x45:
  case 0x65:
    return 0xe;
  case 0x46:
  case 0x66:
    return 0xf;
  default:
    return param_1 - 0x30;
  }
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
                    /* WARNING: Subroutine does not return */
    __assert_fail("status == 0","src/echo.c",0x29,"usage");
  }
  uVar3 = dcgettext(0,"Usage: %s [SHORT-OPTION]... [STRING]...\n  or:  %s LONG-OPTION\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Echo the STRING(s) to standard output.\n\n  -n             do not output the trailing newline\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -e             enable interpretation of backslash escapes\n  -E             disable interpretation of backslash escapes (default)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nIf -e is in effect, the following sequences are recognized:\n\n",5
                            );
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\0NNN   byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nConsider using the printf(1) command instead,\nas it avoids problems when outputting option-like strings.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC0;
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
    iVar2 = strcmp("echo",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC1;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010037d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010037d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
    if (puVar7 != &_LC1) goto LAB_001003ce;
  }
  puVar7 = &_LC1;
  pcVar4 = " invocation";
LAB_001003ce:
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  byte bVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  pcVar8 = getenv("POSIXLY_CORRECT");
  if (pcVar8 == (char *)0x0) {
    bVar19 = true;
LAB_00100cf1:
    set_program_name(*param_2);
    setlocale(6,"");
    bindtextdomain("coreutils","/usr/local/share/locale");
    textdomain("coreutils");
    atexit((__func *)&close_stdout);
    if ((param_1 == 2) && (bVar19)) {
      pcVar2 = (char *)param_2[1];
      iVar6 = strcmp(pcVar2,"--help");
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      iVar6 = strcmp(pcVar2,"--version");
      if (iVar6 == 0) {
        uVar9 = proper_name_lite("Chet Ramey","Chet Ramey");
        uVar10 = proper_name_lite("Brian Fox","Brian Fox");
        version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar10,uVar9,0,uVar10);
        return 0;
      }
      uVar17 = 1;
    }
    else {
      uVar17 = param_1 - 1;
      if (!bVar19) goto LAB_00100ea9;
      if ((int)uVar17 < 1) goto LAB_00100e2c;
    }
    param_2 = param_2 + 1;
    bVar19 = true;
    bVar4 = false;
    do {
      pcVar2 = (char *)*param_2;
      if ((*pcVar2 != '-') || (uVar12 = (uint)(byte)pcVar2[1], pcVar2[1] == 0)) {
        if ((pcVar8 != (char *)0x0) || (bVar4)) goto LAB_00100eb7;
        goto LAB_001010d3;
      }
      pbVar14 = (byte *)(pcVar2 + 2);
      uVar7 = uVar12;
      do {
        if ((0x29 < (byte)(uVar7 - 0x45)) ||
           (bVar18 = (0x20100000001U >> ((ulong)(uVar7 - 0x45) & 0x3f) & 1) != 0, !bVar18)) {
          if ((pcVar8 != (char *)0x0) || (bVar4)) goto LAB_00100ec0;
          goto LAB_001010ca;
        }
        bVar13 = *pbVar14;
        uVar7 = (uint)bVar13;
        pbVar14 = pbVar14 + 1;
      } while (bVar13 != 0);
      pbVar14 = (byte *)(pcVar2 + 1);
      do {
        while( true ) {
          pbVar14 = pbVar14 + 1;
          cVar11 = (char)uVar12;
          bVar5 = bVar18;
          if (cVar11 != 'e') break;
LAB_00100df7:
          bVar4 = bVar5;
          uVar12 = (uint)*pbVar14;
          if (*pbVar14 == 0) goto LAB_00100e19;
        }
        if (cVar11 != 'n') {
          bVar5 = bVar4;
          if (cVar11 == 'E') {
            bVar5 = false;
          }
          goto LAB_00100df7;
        }
        uVar12 = (uint)*pbVar14;
        bVar19 = false;
      } while (*pbVar14 != 0);
LAB_00100e19:
      param_2 = param_2 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  else {
    if (1 < param_1) {
      iVar6 = strcmp((char *)param_2[1],"-n");
      bVar19 = iVar6 == 0;
      goto LAB_00100cf1;
    }
    set_program_name(*param_2);
    setlocale(6,"");
    bindtextdomain("coreutils","/usr/local/share/locale");
    textdomain("coreutils");
    atexit((__func *)&close_stdout);
LAB_00100ea9:
    uVar17 = param_1 - 1;
    param_2 = param_2 + 1;
    bVar19 = true;
    if (pcVar8 == (char *)0x0) {
LAB_001010ca:
      if (0 < (int)uVar17) {
LAB_001010d3:
        puVar1 = param_2 + uVar17;
        while( true ) {
          pcVar8 = (char *)*param_2;
          param_2 = param_2 + 1;
          fputs_unlocked(pcVar8,_stdout);
          if (param_2 == puVar1) break;
          pcVar8 = _stdout->_IO_write_ptr;
          if (pcVar8 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar8 + 1;
            *pcVar8 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
      }
    }
    else {
LAB_00100eb7:
      if (0 < (int)uVar17) {
LAB_00100ec0:
        puVar1 = param_2 + uVar17;
LAB_00100ecf:
        bVar13 = *(byte *)*param_2;
        pbVar14 = (byte *)*param_2;
        while (bVar13 != 0) {
          pbVar15 = pbVar14 + 1;
          uVar17 = (uint)bVar13;
          if (bVar13 != 0x5c) {
LAB_00100ee8:
            bVar13 = (byte)uVar17;
            uVar17 = uVar17 & 0xff;
            goto LAB_00100eeb;
          }
          bVar13 = pbVar14[1];
          if (bVar13 == 0) {
switchD_00100f4b_caseD_5c:
            uVar17 = 0x5c;
            bVar13 = 0x5c;
          }
          else {
            pbVar15 = pbVar14 + 2;
            switch(bVar13) {
            case 0x30:
              bVar13 = pbVar14[2];
              if ((byte)(bVar13 - 0x30) < 8) {
                pbVar15 = pbVar14 + 3;
                goto switchD_00100f4b_caseD_31;
              }
              uVar17 = 0;
              bVar13 = 0;
              break;
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
switchD_00100f4b_caseD_31:
              uVar17 = bVar13 - 0x30;
              if (7 < (byte)(*pbVar15 - 0x30)) goto LAB_00100ee8;
              uVar17 = (*pbVar15 - 0x30) + uVar17 * 8;
              bVar13 = (byte)uVar17;
              if ((byte)(pbVar15[1] - 0x30) < 8) {
                uVar17 = (pbVar15[1] - 0x30) + uVar17 * 8;
                bVar13 = (byte)uVar17;
                pbVar15 = pbVar15 + 2;
                uVar17 = uVar17 & 0xff;
              }
              else {
                pbVar15 = pbVar15 + 1;
                uVar17 = uVar17 & 0xff;
              }
              break;
            default:
switchD_00100f4b_caseD_38:
              pcVar8 = _stdout->_IO_write_ptr;
              if (pcVar8 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar8 + 1;
                *pcVar8 = '\\';
              }
              else {
                __overflow(_stdout,0x5c);
              }
              uVar17 = (uint)bVar13;
              break;
            case 0x5c:
              goto switchD_00100f4b_caseD_5c;
            case 0x61:
              uVar17 = 7;
              bVar13 = 7;
              break;
            case 0x62:
              uVar17 = 8;
              bVar13 = 8;
              break;
            case 99:
              return 0;
            case 0x65:
              uVar17 = 0x1b;
              bVar13 = 0x1b;
              break;
            case 0x66:
              uVar17 = 0xc;
              bVar13 = 0xc;
              break;
            case 0x6e:
              uVar17 = 10;
              bVar13 = 10;
              break;
            case 0x72:
              uVar17 = 0xd;
              bVar13 = 0xd;
              break;
            case 0x74:
              uVar17 = 9;
              bVar13 = 9;
              break;
            case 0x76:
              uVar17 = 0xb;
              bVar13 = 0xb;
              break;
            case 0x78:
              uVar17 = pbVar14[2] - 0x30;
              if ((0x36 < (byte)uVar17) ||
                 (uVar16 = 0x7e0000007e03ff, (0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) == 0)
                 ) goto switchD_00100f4b_caseD_38;
              uVar17 = hextobin((int)(char)pbVar14[2]);
              bVar13 = (byte)uVar17;
              if (((byte)((int)(char)pbVar14[3] - 0x30U) < 0x37) &&
                 ((uVar16 >> ((ulong)((int)(char)pbVar14[3] - 0x30U) & 0x3f) & 1) != 0)) {
                pbVar15 = pbVar14 + 4;
                iVar6 = hextobin();
                uVar17 = uVar17 * 0x10 + iVar6;
                goto LAB_00100ee8;
              }
              pbVar15 = pbVar14 + 3;
              uVar17 = uVar17 & 0xff;
            }
          }
LAB_00100eeb:
          pbVar3 = (byte *)_stdout->_IO_write_ptr;
          pbVar14 = pbVar15;
          if (pbVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
            *pbVar3 = bVar13;
            bVar13 = *pbVar15;
          }
          else {
            __overflow(_stdout,uVar17);
            bVar13 = *pbVar15;
          }
        }
        param_2 = param_2 + 1;
        if (param_2 != puVar1) {
          pcVar8 = _stdout->_IO_write_ptr;
          if (pcVar8 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar8 + 1;
            *pcVar8 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
          goto LAB_00100ecf;
        }
      }
    }
  }
  if (!bVar19) {
    return 0;
  }
LAB_00100e2c:
  pcVar8 = _stdout->_IO_write_ptr;
  if (pcVar8 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar8 + 1;
    *pcVar8 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  return 0;
}


