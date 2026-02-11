
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

undefined8 main(int param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  char *pcVar16;
  undefined *puVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint extraout_EDX;
  
  pcVar7 = getenv("POSIXLY_CORRECT");
  if (pcVar7 == (char *)0x0) {
    puVar17 = (undefined *)0x1;
LAB_00100cf1:
    pcVar16 = "coreutils";
    set_program_name(*param_2);
    setlocale(6,"");
    bindtextdomain("coreutils","/usr/local/share/locale");
    textdomain("coreutils");
    atexit((__func *)&close_stdout);
    if ((param_1 == 2) && ((int)puVar17 != 0)) {
      pcVar3 = (char *)param_2[1];
      iVar5 = strcmp(pcVar3,"--help");
      if (iVar5 == 0) {
        usage(0);
        bVar12 = (byte)extraout_EDX;
        pbVar13 = (byte *)(param_4 + 1);
        uVar15 = extraout_EDX & 0xff;
        goto LAB_00100ede;
      }
      iVar5 = strcmp(pcVar3,"--version");
      if (iVar5 == 0) {
        uVar8 = proper_name_lite("Chet Ramey","Chet Ramey");
        uVar9 = proper_name_lite("Brian Fox","Brian Fox");
        version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar9,uVar8,0,uVar9);
        return 0;
      }
      uVar15 = 1;
    }
    else {
      uVar15 = param_1 - 1;
      if ((int)puVar17 == 0) goto LAB_00100ea9;
      if ((int)uVar15 < 1) goto LAB_00100e2c;
    }
    param_2 = param_2 + 1;
    bVar19 = pcVar7 != (char *)0x0;
    pcVar7 = (char *)0x1;
    bVar20 = false;
    do {
      cVar10 = (char)pcVar7;
      pcVar16 = (char *)*param_2;
      if ((*pcVar16 != '-') || (uVar11 = (uint)(byte)pcVar16[1], pcVar16[1] == 0)) {
        if ((bVar19) || (bVar20)) goto LAB_00100eb7;
        goto LAB_001010c3;
      }
      pbVar13 = (byte *)(pcVar16 + 2);
      uVar6 = uVar11;
      do {
        if ((0x29 < (byte)(uVar6 - 0x45)) ||
           (bVar18 = (0x20100000001U >> ((ulong)(uVar6 - 0x45) & 0x3f) & 1) != 0, !bVar18)) {
          if ((bVar19) || (bVar20)) goto LAB_00100ec0;
          goto LAB_001010ba;
        }
        bVar12 = *pbVar13;
        uVar6 = (uint)bVar12;
        pbVar13 = pbVar13 + 1;
      } while (bVar12 != 0);
      pbVar13 = (byte *)(pcVar16 + 1);
      do {
        while( true ) {
          pbVar13 = pbVar13 + 1;
          cVar10 = (char)uVar11;
          bVar4 = bVar18;
          if (cVar10 != 'e') break;
LAB_00100df7:
          bVar20 = bVar4;
          uVar11 = (uint)*pbVar13;
          if (*pbVar13 == 0) goto LAB_00100e19;
        }
        if (cVar10 != 'n') {
          bVar4 = bVar20;
          if (cVar10 == 'E') {
            bVar4 = false;
          }
          goto LAB_00100df7;
        }
        uVar11 = (uint)*pbVar13;
        pcVar7 = (char *)0x0;
      } while (*pbVar13 != 0);
LAB_00100e19:
      cVar10 = (char)pcVar7;
      param_2 = param_2 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  else {
    if (1 < param_1) {
      iVar5 = strcmp((char *)param_2[1],"-n");
      puVar17 = (undefined *)(ulong)(iVar5 == 0);
      goto LAB_00100cf1;
    }
    set_program_name(*param_2);
    setlocale(6,"");
    bindtextdomain("coreutils","/usr/local/share/locale");
    textdomain("coreutils");
    atexit((__func *)&close_stdout);
LAB_00100ea9:
    uVar15 = param_1 - 1;
    param_2 = param_2 + 1;
    bVar20 = pcVar7 == (char *)0x0;
    pcVar7 = (char *)0x1;
    cVar10 = '\x01';
    if (bVar20) {
LAB_001010ba:
      if (0 < (int)uVar15) {
LAB_001010c3:
        plVar1 = param_2 + uVar15;
        while( true ) {
          pcVar7 = (char *)*param_2;
          param_2 = param_2 + 1;
          fputs_unlocked(pcVar7,_stdout);
          if (plVar1 == param_2) break;
          pcVar7 = _stdout->_IO_write_ptr;
          if (pcVar7 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar7 + 1;
            *pcVar7 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
      }
    }
    else {
LAB_00100eb7:
      cVar10 = (char)pcVar7;
      if (0 < (int)uVar15) {
LAB_00100ec0:
        puVar17 = &DAT_00100540;
        pcVar16 = (char *)(param_2 + uVar15);
LAB_00100ecf:
        pbVar13 = (byte *)*param_2;
        while (bVar12 = *pbVar13, pbVar14 = pbVar13, bVar12 != 0) {
          while( true ) {
            pbVar13 = pbVar14 + 1;
            if (bVar12 == 0x5c) {
              bVar2 = pbVar14[1];
              if (bVar2 == 0) {
                uVar15 = 0x5c;
              }
              else {
                pbVar13 = pbVar14 + 2;
                if ((byte)(bVar2 - 0x30) < 0x49) {
                    /* WARNING: Could not recover jumptable at 0x00100f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar8 = (*(code *)(puVar17 + *(int *)(puVar17 + (ulong)(byte)(bVar2 - 0x30) * 4)))
                                    ();
                  return uVar8;
                }
                pcVar3 = _stdout->_IO_write_ptr;
                if (pcVar3 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar3 + 1;
                  *pcVar3 = '\\';
                }
                else {
                  __overflow(_stdout,0x5c);
                }
                uVar15 = (uint)bVar2;
                bVar12 = bVar2;
              }
            }
            else {
              uVar15 = (uint)bVar12;
            }
LAB_00100ede:
            pbVar14 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar14 < _stdout->_IO_write_end) break;
            __overflow(_stdout,uVar15);
            bVar12 = *pbVar13;
            pbVar14 = pbVar13;
            if (bVar12 == 0) goto LAB_00101068;
          }
          _stdout->_IO_write_ptr = (char *)(pbVar14 + 1);
          *pbVar14 = bVar12;
        }
LAB_00101068:
        cVar10 = (char)pcVar7;
        param_2 = param_2 + 1;
        if (param_2 != (long *)pcVar16) {
          pcVar3 = _stdout->_IO_write_ptr;
          if (pcVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
          goto LAB_00100ecf;
        }
      }
    }
  }
  if (cVar10 == '\0') {
    return 0;
  }
LAB_00100e2c:
  pcVar7 = _stdout->_IO_write_ptr;
  if (pcVar7 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar7 + 1;
    *pcVar7 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  return 0;
}


