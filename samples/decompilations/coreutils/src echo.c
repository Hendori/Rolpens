
/* WARNING: Unknown calling convention */

int hextobin(uchar c)

{
  switch(c) {
  case 'A':
  case 'a':
    return 10;
  case 'B':
  case 'b':
    return 0xb;
  case 'C':
  case 'c':
    return 0xc;
  case 'D':
  case 'd':
    return 0xd;
  case 'E':
  case 'e':
    return 0xe;
  case 'F':
  case 'f':
    return 0xf;
  default:
    return c - 0x30;
  }
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
    iVar2 = strcmp("echo",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char **ppcVar1;
  byte bVar2;
  char *pcVar3;
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
  char **ppcVar18;
  bool bVar19;
  bool bVar20;
  
  pcVar8 = getenv("POSIXLY_CORRECT");
  if (pcVar8 == (char *)0x0) {
    bVar20 = true;
LAB_00100cf1:
    set_program_name(*argv);
    setlocale(6,"");
    bindtextdomain("coreutils","/usr/local/share/locale");
    textdomain("coreutils");
    atexit((__func *)&close_stdout);
    if ((argc == 2) && (bVar20)) {
      pcVar3 = argv[1];
      iVar6 = strcmp(pcVar3,"--help");
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      iVar6 = strcmp(pcVar3,"--version");
      if (iVar6 == 0) {
        uVar9 = proper_name_lite("Chet Ramey","Chet Ramey");
        uVar10 = proper_name_lite("Brian Fox","Brian Fox");
        version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar10,uVar9,0,uVar10);
        return 0;
      }
      uVar17 = 1;
    }
    else {
      uVar17 = argc - 1;
      if (!bVar20) goto LAB_00100ea9;
      if ((int)uVar17 < 1) goto LAB_00100e2c;
    }
    ppcVar18 = argv + 1;
    bVar20 = true;
    bVar4 = false;
    do {
      pcVar3 = *ppcVar18;
      if ((*pcVar3 != '-') || (uVar12 = (uint)(byte)pcVar3[1], pcVar3[1] == 0)) {
        if ((pcVar8 != (char *)0x0) || (bVar4)) goto LAB_00100eb7;
        goto LAB_001010c3;
      }
      pbVar14 = (byte *)(pcVar3 + 2);
      uVar7 = uVar12;
      do {
        if ((0x29 < (byte)(uVar7 - 0x45)) ||
           (bVar19 = (0x20100000001U >> ((ulong)(uVar7 - 0x45) & 0x3f) & 1) != 0, !bVar19)) {
          if ((pcVar8 != (char *)0x0) || (bVar4)) goto LAB_00100ec0;
          goto LAB_001010ba;
        }
        bVar2 = *pbVar14;
        uVar7 = (uint)bVar2;
        pbVar14 = pbVar14 + 1;
      } while (bVar2 != 0);
      pbVar14 = (byte *)(pcVar3 + 1);
      do {
        while( true ) {
          pbVar14 = pbVar14 + 1;
          cVar11 = (char)uVar12;
          bVar5 = bVar19;
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
        bVar20 = false;
      } while (*pbVar14 != 0);
LAB_00100e19:
      ppcVar18 = ppcVar18 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  else {
    if (1 < argc) {
      iVar6 = strcmp(argv[1],"-n");
      bVar20 = iVar6 == 0;
      goto LAB_00100cf1;
    }
    set_program_name(*argv);
    setlocale(6,"");
    bindtextdomain("coreutils","/usr/local/share/locale");
    textdomain("coreutils");
    atexit((__func *)&close_stdout);
LAB_00100ea9:
    uVar17 = argc - 1;
    ppcVar18 = argv + 1;
    bVar20 = true;
    if (pcVar8 == (char *)0x0) {
LAB_001010ba:
      if (0 < (int)uVar17) {
LAB_001010c3:
        ppcVar1 = ppcVar18 + uVar17;
        while( true ) {
          pcVar8 = *ppcVar18;
          ppcVar18 = ppcVar18 + 1;
          fputs_unlocked(pcVar8,_stdout);
          if (ppcVar1 == ppcVar18) break;
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
        ppcVar1 = ppcVar18 + uVar17;
        do {
          pbVar14 = (byte *)*ppcVar18;
LAB_00100efd:
          bVar2 = *pbVar14;
          pbVar15 = pbVar14;
          if (bVar2 != 0) {
            do {
              uVar17 = (uint)bVar2;
              pbVar14 = pbVar15 + 1;
              bVar13 = bVar2;
              if (bVar2 == 0x5c) {
                bVar13 = pbVar15[1];
                uVar17 = (uint)bVar13;
                if (bVar13 == 0) {
                  uVar17 = 0x5c;
                  bVar13 = bVar2;
                }
                else {
                  pbVar14 = pbVar15 + 2;
                  switch(bVar13) {
                  case 0x30:
                    uVar17 = (uint)pbVar15[2];
                    if ((byte)(pbVar15[2] - 0x30) < 8) {
                      pbVar14 = pbVar15 + 3;
                      goto switchD_00100f38_caseD_31;
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
switchD_00100f38_caseD_31:
                    uVar12 = uVar17 - 0x30;
                    if ((byte)(*pbVar14 - 0x30) < 8) {
                      uVar12 = (*pbVar14 - 0x30) + uVar12 * 8;
                      if ((byte)(pbVar14[1] - 0x30) < 8) {
                        uVar12 = (pbVar14[1] - 0x30) + uVar12 * 8;
                        pbVar14 = pbVar14 + 2;
                        uVar17 = uVar12 & 0xff;
                        bVar13 = (byte)uVar12;
                      }
                      else {
                        pbVar14 = pbVar14 + 1;
                        uVar17 = uVar12 & 0xff;
                        bVar13 = (byte)uVar12;
                      }
                    }
                    else {
                      uVar17 = uVar12 & 0xff;
                      bVar13 = (byte)uVar12;
                    }
                    break;
                  default:
switchD_00100f38_caseD_38:
                    pcVar8 = _stdout->_IO_write_ptr;
                    if (pcVar8 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar8 + 1;
                      *pcVar8 = '\\';
                    }
                    else {
                      __overflow(_stdout,0x5c);
                    }
                    break;
                  case 0x5c:
                    uVar17 = 0x5c;
                    bVar13 = bVar2;
                    break;
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
                    uVar12 = pbVar15[2] - 0x30;
                    if ((0x36 < (byte)uVar12) ||
                       (uVar16 = 0x7e0000007e03ff,
                       (0x7e0000007e03ffU >> ((ulong)uVar12 & 0x3f) & 1) == 0))
                    goto switchD_00100f38_caseD_38;
                    uVar12 = hextobin(pbVar15[2]);
                    uVar17 = pbVar15[3] - 0x30;
                    if (((byte)uVar17 < 0x37) && ((uVar16 >> ((ulong)uVar17 & 0x3f) & 1) != 0)) {
                      pbVar14 = pbVar15 + 4;
                      iVar6 = hextobin(pbVar15[3]);
                      uVar12 = uVar12 * 0x10 + iVar6;
                      uVar17 = uVar12 & 0xff;
                      bVar13 = (byte)uVar12;
                    }
                    else {
                      pbVar14 = pbVar15 + 3;
                      uVar17 = uVar12 & 0xff;
                      bVar13 = (byte)uVar12;
                    }
                  }
                }
              }
              pbVar15 = (byte *)_stdout->_IO_write_ptr;
              if (pbVar15 < _stdout->_IO_write_end) goto code_r0x00100ef3;
              __overflow(_stdout,uVar17);
              bVar2 = *pbVar14;
              pbVar15 = pbVar14;
              if (bVar2 == 0) break;
            } while( true );
          }
          ppcVar18 = ppcVar18 + 1;
          if (ppcVar18 == ppcVar1) break;
          pcVar8 = _stdout->_IO_write_ptr;
          if (pcVar8 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar8 + 1;
            *pcVar8 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        } while( true );
      }
    }
  }
  if (!bVar20) {
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
code_r0x00100ef3:
  _stdout->_IO_write_ptr = (char *)(pbVar15 + 1);
  *pbVar15 = bVar13;
  goto LAB_00100efd;
}


