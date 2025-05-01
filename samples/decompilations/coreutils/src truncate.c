
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
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,"Usage: %s OPTION... FILE...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Shrink or extend the size of each FILE to the specified size\n\nA FILE argument that does not exist is created.\n\nIf a FILE is larger than the specified size, the extra data is lost.\nIf a FILE is shorter, it is extended and the sparse extended part (hole)\nreads as zero bytes.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -c, --no-create        do not create any files\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -o, --io-blocks        treat SIZE as number of IO blocks instead of bytes\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -r, --reference=RFILE  base size on RFILE\n  -s, --size=SIZE        set or adjust the file size by SIZE bytes\n"
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
                             "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nSIZE may also be prefixed by one of the following modifying characters:\n\'+\' extend by, \'-\' reduce by, \'<\' at most, \'>\' at least,\n\'/\' round down to multiple of, \'%\' round up to multiple of.\n"
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
    iVar2 = strcmp("truncate",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "truncate";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001002f5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","truncate");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001002f5:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","truncate");
    if (pcVar4 == "truncate") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ushort **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  __off_t _Var14;
  long lVar15;
  undefined8 extraout_RDX;
  long lVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  __blksize_t _Var20;
  __off_t _Var21;
  char **ppcVar22;
  int iVar23;
  long in_FS_OFFSET;
  bool bVar24;
  long local_110;
  stat sb;
  
  bVar24 = false;
  iVar23 = 0;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00100d54:
  iVar6 = getopt_long(argc,argv,"cor:s:",longopts,0);
  pcVar19 = ref_file;
  if (iVar6 != -1) {
    if (iVar6 == 0x6f) {
      block_mode = true;
    }
    else {
      if (iVar6 < 0x70) {
        if (iVar6 == -0x82) goto LAB_0010155f;
        if (iVar6 != 99) {
          if (iVar6 == -0x83) {
            uVar9 = proper_name_lite("Padraig Brady",&_LC35);
            version_etc(_stdout,"truncate","GNU coreutils",_Version,uVar9,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          goto LAB_0010108a;
        }
        no_create = true;
        goto LAB_00100d54;
      }
      if (iVar6 != 0x72) {
        if (iVar6 != 0x73) goto LAB_0010108a;
        ppuVar10 = __ctype_b_loc();
        puVar4 = *ppuVar10;
        bVar1 = *_optarg;
        bVar2 = *(byte *)((long)puVar4 + (ulong)bVar1 * 2 + 1);
        while ((bVar2 & 0x20) != 0) {
          _optarg = _optarg + 1;
          bVar1 = *_optarg;
          bVar2 = *(byte *)((long)puVar4 + (ulong)bVar1 * 2 + 1);
        }
        if (bVar1 == 0x3c) {
          iVar23 = 3;
          pbVar5 = _optarg + 1;
        }
        else if ((char)bVar1 < '=') {
          if (bVar1 == 0x25) {
            iVar23 = 5;
            pbVar5 = _optarg + 1;
          }
          else {
            pbVar5 = _optarg;
            if (bVar1 == 0x2f) {
              iVar23 = 4;
              pbVar5 = _optarg + 1;
            }
          }
        }
        else {
          pbVar5 = _optarg;
          if (bVar1 == 0x3e) {
            iVar23 = 2;
            pbVar5 = _optarg + 1;
          }
        }
        do {
          _optarg = pbVar5;
          pbVar5 = _optarg + 1;
        } while ((*(byte *)((long)puVar4 + (ulong)*_optarg * 2 + 1) & 0x20) != 0);
        uVar9 = 5;
        if ((*_optarg - 0x2b & 0xfd) == 0) {
          if (iVar23 == 0) {
            iVar23 = 1;
            bVar24 = true;
            dcgettext(0,"Invalid number",5);
            local_110 = xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,"EgGkKmMPQRtTYZ0");
            goto LAB_00100d54;
          }
        }
        else {
          dcgettext(0,"Invalid number",5);
          local_110 = xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,"EgGkKmMPQRtTYZ0");
          if ((1 < iVar23 - 4U) || (local_110 != 0)) {
            bVar24 = true;
            goto LAB_00100d54;
          }
          uVar9 = dcgettext(0,"division by zero",5);
          error(1,0,uVar9);
          uVar9 = extraout_RDX;
        }
        pcVar19 = "multiple relative modifiers specified";
        goto LAB_0010125f;
      }
      ref_file = (char *)_optarg;
    }
    goto LAB_00100d54;
  }
  ppcVar22 = argv + _optind;
  if (ref_file != (char *)0x0) {
    if ((iVar23 == 0) && (bVar24)) {
      uVar9 = quote_n(1,"--reference");
      uVar11 = quote_n(0,"--size");
      pcVar19 = "you must specify a relative %s with %s";
LAB_0010106f:
      uVar12 = dcgettext(0,pcVar19,5);
      error(0,0,uVar12,uVar11,uVar9);
LAB_0010108a:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if ((block_mode == true) && (!bVar24)) {
      uVar9 = quote_n(1,"--size");
      uVar11 = quote_n(0,"--io-blocks");
      pcVar19 = "%s was specified but %s was not";
      goto LAB_0010106f;
    }
    if (argc - _optind < 1) goto LAB_00101253;
    iVar6 = stat(ref_file,(stat *)&sb);
    if (iVar6 != 0) {
      uVar9 = quotearg_style(4,pcVar19);
      pcVar19 = "cannot stat %s";
      goto LAB_0010153c;
    }
    if ((sb.st_mode & 0xd000) == 0x8000) {
      _Var21 = sb.st_size;
      if (-1 < sb.st_size) {
LAB_001010d3:
        if (bVar24) goto LAB_001010e1;
        goto LAB_001010dd;
      }
    }
    else {
      iVar6 = open(pcVar19,0);
      if (-1 < iVar6) {
        _Var21 = lseek(iVar6,0,2);
        piVar13 = __errno_location();
        iVar7 = *piVar13;
        close(iVar6);
        if (-1 < _Var21) goto LAB_001010d3;
        *piVar13 = iVar7;
      }
    }
    uVar9 = quotearg_style(4,ref_file);
    pcVar19 = "cannot get the size of %s";
LAB_0010153c:
    uVar11 = dcgettext(0,pcVar19,5);
    piVar13 = __errno_location();
    error(1,*piVar13,uVar11,uVar9);
LAB_0010155f:
                    /* WARNING: Subroutine does not return */
    usage(0);
  }
  if (!bVar24) {
    uVar9 = quote_n(1,"--reference");
    uVar11 = quote_n(0,"--size");
    pcVar19 = "you must specify either %s or %s";
    goto LAB_0010106f;
  }
  _Var21 = local_110;
  if (argc - _optind < 1) {
LAB_00101253:
    uVar9 = 5;
    pcVar19 = "missing file operand";
LAB_0010125f:
    uVar9 = dcgettext(0,pcVar19,uVar9);
    error(0,0,uVar9);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
LAB_001010dd:
  local_110 = _Var21;
  _Var21 = -1;
LAB_001010e1:
  bVar24 = no_create == false;
  pcVar19 = *ppcVar22;
  uVar17 = 0;
  if (pcVar19 != (char *)0x0) {
    do {
      iVar6 = open(pcVar19,(-(uint)bVar24 & 0x40) + 0x801,0x1b6);
      if (iVar6 < 0) {
        if ((no_create == false) || (piVar13 = __errno_location(), *piVar13 != 2)) {
          uVar9 = quotearg_style(4,pcVar19);
          pcVar19 = "cannot open %s for writing";
          goto LAB_00101218;
        }
      }
      else {
        if (block_mode == false) {
          lVar16 = local_110;
          if ((iVar23 == 0) || (-1 < _Var21)) {
LAB_00101283:
            lVar15 = lVar16;
            if (iVar23 != 0) {
              _Var14 = _Var21;
              if (_Var21 == -1) goto LAB_001013fb;
              goto LAB_0010129a;
            }
          }
          else {
            iVar7 = fstat(iVar6,(stat *)&sb);
            if (iVar7 != 0) goto LAB_001011a5;
LAB_001013fb:
            if ((sb.st_mode & 0xd000) == 0x8000) {
              _Var14 = sb.st_size;
              if (-1 < sb.st_size) goto LAB_0010129a;
              uVar9 = quotearg_style(4,pcVar19);
              pcVar18 = "%s has unusable, apparently negative size";
LAB_00101435:
              uVar11 = dcgettext(0,pcVar18,5);
              error(0,0,uVar11,uVar9);
              goto LAB_001011e5;
            }
            _Var14 = lseek(iVar6,0,2);
            if (_Var14 < 0) {
              uVar9 = quotearg_style(4,pcVar19);
              pcVar18 = "cannot get the size of %s";
              goto LAB_001011c1;
            }
LAB_0010129a:
            lVar15 = lVar16;
            if (iVar23 == 2) {
              if (lVar16 < _Var14) {
                lVar15 = _Var14;
              }
            }
            else if (iVar23 == 3) {
              if (_Var14 < lVar16) {
                lVar15 = _Var14;
              }
            }
            else if (iVar23 == 4) {
              lVar15 = _Var14 - _Var14 % lVar16;
            }
            else {
              if ((iVar23 == 5) && (lVar15 = _Var14 % lVar16, lVar16 = lVar16 - lVar15, lVar15 == 0)
                 ) {
                lVar16 = 0;
              }
              lVar15 = _Var14 + lVar16;
              if (SCARRY8(_Var14,lVar16)) {
                uVar9 = quotearg_style(4,pcVar19);
                pcVar18 = "overflow extending size of file %s";
                goto LAB_00101435;
              }
            }
          }
          if (lVar15 < 0) {
            lVar15 = 0;
          }
          iVar7 = ftruncate(iVar6,lVar15);
          uVar8 = 1;
          if (iVar7 != 0) {
            uVar9 = quotearg_style(4,pcVar19);
            uVar11 = dcgettext(0,"failed to truncate %s at %jd bytes",5);
            piVar13 = __errno_location();
            error(0,*piVar13,uVar11,uVar9,lVar15);
            goto LAB_001011e5;
          }
        }
        else {
          iVar7 = fstat(iVar6,(stat *)&sb);
          if (iVar7 == 0) {
            _Var20 = sb.st_blksize;
            if (0x1fffffffffffffff < sb.st_blksize - 1U) {
              _Var20 = 0x200;
            }
            lVar16 = local_110 * _Var20;
            if (SEXT816(local_110 * _Var20) == SEXT816(local_110) * SEXT816(_Var20))
            goto LAB_00101283;
            uVar9 = quotearg_style(4,pcVar19);
            uVar11 = dcgettext(0,"overflow in %jd * %td byte blocks for file %s",5);
            error(0,0,uVar11,local_110,_Var20,uVar9);
          }
          else {
LAB_001011a5:
            uVar9 = quotearg_style(4,pcVar19);
            pcVar18 = "cannot fstat %s";
LAB_001011c1:
            uVar11 = dcgettext(0,pcVar18,5);
            piVar13 = __errno_location();
            error(0,*piVar13,uVar11,uVar9);
          }
LAB_001011e5:
          uVar8 = 0;
        }
        uVar17 = uVar17 | uVar8 ^ 1;
        iVar6 = close(iVar6);
        if (iVar6 != 0) {
          uVar9 = quotearg_style(4,pcVar19);
          pcVar19 = "failed to close %s";
LAB_00101218:
          uVar11 = dcgettext(0,pcVar19,5);
          piVar13 = __errno_location();
          uVar17 = 1;
          error(0,*piVar13,uVar11,uVar9);
        }
      }
      pcVar19 = ppcVar22[1];
      ppcVar22 = ppcVar22 + 1;
    } while (pcVar19 != (char *)0x0);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


