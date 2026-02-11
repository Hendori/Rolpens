
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
    iVar2 = strcmp("truncate",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(ulong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ushort **ppuVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  undefined8 extraout_RDX;
  ulong uVar15;
  uint uVar16;
  char *pcVar17;
  __blksize_t _Var18;
  ulong uVar19;
  char *pcVar20;
  undefined1 *__file;
  int iVar21;
  char cVar22;
  long in_FS_OFFSET;
  ulong local_110;
  ulong local_108;
  stat *local_100;
  ulong local_f8;
  ulong local_f0;
  stat local_d8;
  long local_40;
  
  iVar7 = 0;
  iVar21 = 0;
  __file = longopts;
  uVar19 = param_1 & 0xffffffff;
  uVar16 = (uint)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  pcVar20 = "cor:s:";
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00100d54:
  iVar6 = getopt_long(param_1 & 0xffffffff,param_2,"cor:s:",longopts,0);
  cVar22 = (char)iVar7;
  if (iVar6 != -1) {
    if (iVar6 == 0x6f) {
      block_mode = '\x01';
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
        no_create = '\x01';
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
          iVar21 = 3;
          pbVar5 = _optarg + 1;
        }
        else if ((char)bVar1 < '=') {
          if (bVar1 == 0x25) {
            iVar21 = 5;
            pbVar5 = _optarg + 1;
          }
          else {
            pbVar5 = _optarg;
            if (bVar1 == 0x2f) {
              iVar21 = 4;
              pbVar5 = _optarg + 1;
            }
          }
        }
        else {
          pbVar5 = _optarg;
          if (bVar1 == 0x3e) {
            iVar21 = 2;
            pbVar5 = _optarg + 1;
          }
        }
        do {
          _optarg = pbVar5;
          pbVar5 = _optarg + 1;
        } while ((*(byte *)((long)puVar4 + (ulong)*_optarg * 2 + 1) & 0x20) != 0);
        uVar9 = 5;
        if ((*_optarg - 0x2b & 0xfd) == 0) {
          if (iVar21 == 0) {
            iVar21 = 1;
            iVar7 = 1;
            dcgettext(0,"Invalid number",5);
            local_110 = xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,"EgGkKmMPQRtTYZ0");
            goto LAB_00100d54;
          }
        }
        else {
          dcgettext(0,"Invalid number",5);
          local_110 = xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,"EgGkKmMPQRtTYZ0");
          if ((1 < iVar21 - 4U) || (local_110 != 0)) {
            iVar7 = 1;
            goto LAB_00100d54;
          }
          uVar9 = dcgettext(0,"division by zero",5);
          error(1,0,uVar9);
          uVar9 = extraout_RDX;
        }
        pcVar17 = "multiple relative modifiers specified";
        goto LAB_0010125f;
      }
      ref_file = _optarg;
    }
    goto LAB_00100d54;
  }
  pcVar20 = (char *)(param_2 + (long)_optind * 8);
  uVar16 = uVar16 - _optind;
  if (ref_file != (byte *)0x0) {
    if ((iVar21 == 0) && (cVar22 != '\0')) {
      uVar19 = quote_n(1,"--reference");
      param_2 = (byte *)quote_n(0,"--size");
      pcVar17 = "you must specify a relative %s with %s";
LAB_0010106f:
      uVar9 = dcgettext(0,pcVar17,5);
      error(0,0,uVar9,param_2,uVar19);
LAB_0010108a:
      uVar16 = (uint)uVar19;
      usage(1);
    }
    else {
      param_2 = ref_file;
      if ((block_mode == '\x01') && (cVar22 == '\0')) {
        uVar19 = quote_n(1,"--size");
        param_2 = (byte *)quote_n(0,"--io-blocks");
        pcVar17 = "%s was specified but %s was not";
        goto LAB_0010106f;
      }
    }
    if ((int)uVar16 < 1) {
LAB_00101253:
      uVar9 = 5;
      pcVar17 = "missing file operand";
LAB_0010125f:
      uVar9 = dcgettext(0,pcVar17,uVar9);
      error(0,0,uVar9);
      usage(1);
      uVar19 = local_110;
      goto LAB_00101283;
    }
    iVar6 = stat((char *)param_2,&local_d8);
    if (iVar6 != 0) {
      uVar19 = quotearg_style(4,param_2);
      pcVar17 = "cannot stat %s";
      goto LAB_0010153c;
    }
    if ((local_d8.st_mode & 0xd000) == 0x8000) {
      uVar19 = local_d8.st_size;
      if (-1 < local_d8.st_size) {
LAB_001010d3:
        if (cVar22 != '\0') goto LAB_001010e1;
        goto LAB_001010dd;
      }
    }
    else {
      iVar6 = open((char *)param_2,0);
      if (-1 < iVar6) {
        uVar19 = lseek(iVar6,0,2);
        __file = (undefined1 *)__errno_location();
        iVar3 = *(int *)__file;
        close(iVar6);
        if (-1 < (long)uVar19) goto LAB_001010d3;
        *(int *)__file = iVar3;
        local_108 = uVar19;
      }
    }
    uVar19 = quotearg_style(4,ref_file);
    pcVar17 = "cannot get the size of %s";
LAB_0010153c:
    uVar9 = dcgettext(0,pcVar17,5);
    piVar12 = __errno_location();
    error(1,*piVar12,uVar9,uVar19);
LAB_0010155f:
    uVar16 = (uint)uVar19;
    usage(0);
LAB_00101566:
    uVar9 = quotearg_style(4,__file);
    pcVar17 = "overflow extending size of file %s";
LAB_00101435:
    uVar11 = dcgettext(0,pcVar17,5);
    error(0,0,uVar11,uVar9);
LAB_001011e5:
    do {
      uVar8 = 0;
      do {
        uVar16 = uVar16 | uVar8 ^ 1;
        iVar7 = close(iVar7);
        if (iVar7 != 0) {
          uVar9 = quotearg_style(4,__file);
          pcVar17 = "failed to close %s";
          goto LAB_00101218;
        }
        while( true ) {
          __file = *(undefined1 **)((byte *)pcVar20 + 8);
          pcVar20 = (char *)((byte *)pcVar20 + 8);
          if ((int *)__file == (int *)0x0) goto LAB_001013c9;
LAB_00101156:
          iVar7 = open(__file,(int)local_108,0x1b6);
          if (-1 < iVar7) break;
          if ((no_create == '\0') || (piVar12 = __errno_location(), *piVar12 != 2)) {
            uVar9 = quotearg_style(4,__file);
            pcVar17 = "cannot open %s for writing";
LAB_00101218:
            uVar11 = dcgettext(0,pcVar17,5);
            piVar12 = __errno_location();
            uVar16 = 1;
            error(0,*piVar12,uVar11,uVar9);
          }
        }
        if (block_mode != '\0') {
          iVar6 = fstat(iVar7,local_100);
          if (iVar6 == 0) {
            _Var18 = local_d8.st_blksize;
            if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
              _Var18 = 0x200;
            }
            uVar19 = local_110 * _Var18;
            if (SEXT816((long)(local_110 * _Var18)) == SEXT816((long)local_110) * SEXT816(_Var18))
            goto LAB_00101283;
            uVar9 = quotearg_style(4,__file);
            uVar11 = dcgettext(0,"overflow in %jd * %td byte blocks for file %s",5);
            error(0,0,uVar11,local_110,_Var18,uVar9);
          }
          else {
LAB_001011a5:
            uVar9 = quotearg_style(4,__file);
            pcVar17 = "cannot fstat %s";
LAB_001011c1:
            uVar11 = dcgettext(0,pcVar17,5);
            piVar12 = __errno_location();
            error(0,*piVar12,uVar11,uVar9);
          }
          goto LAB_001011e5;
        }
        uVar19 = local_110;
        if ((iVar21 == 0) || ((char)local_f0 == '\0')) {
LAB_00101283:
          uVar15 = uVar19;
          if (iVar21 != 0) {
            uVar13 = local_f8;
            if (local_f8 == 0xffffffffffffffff) goto LAB_001013fb;
            goto LAB_0010129a;
          }
        }
        else {
          iVar6 = fstat(iVar7,local_100);
          if (iVar6 != 0) goto LAB_001011a5;
LAB_001013fb:
          if ((local_d8.st_mode & 0xd000) == 0x8000) {
            uVar13 = local_d8.st_size;
            if (local_d8.st_size < 0) {
              uVar9 = quotearg_style(4,__file);
              pcVar17 = "%s has unusable, apparently negative size";
              goto LAB_00101435;
            }
          }
          else {
            uVar13 = lseek(iVar7,0,2);
            if ((long)uVar13 < 0) {
              uVar9 = quotearg_style(4,__file);
              pcVar17 = "cannot get the size of %s";
              goto LAB_001011c1;
            }
          }
LAB_0010129a:
          uVar15 = uVar19;
          if (iVar21 == 2) {
            if ((long)uVar19 < (long)uVar13) {
              uVar15 = uVar13;
            }
          }
          else if (iVar21 == 3) {
            if ((long)uVar13 < (long)uVar19) {
              uVar15 = uVar13;
            }
          }
          else if (iVar21 == 4) {
            uVar15 = uVar13 - (long)uVar13 % (long)uVar19;
          }
          else {
            if ((iVar21 == 5) &&
               (lVar14 = (long)uVar13 % (long)uVar19, uVar19 = uVar19 - lVar14, lVar14 == 0)) {
              uVar19 = 0;
            }
            uVar15 = uVar13 + uVar19;
            if (SCARRY8(uVar13,uVar19)) goto LAB_00101566;
          }
        }
        if ((long)uVar15 < 0) {
          uVar15 = 0;
        }
        iVar6 = ftruncate(iVar7,uVar15);
        uVar8 = 1;
      } while (iVar6 == 0);
      uVar9 = quotearg_style(4,__file);
      uVar11 = dcgettext(0,"failed to truncate %s at %jd bytes",5);
      piVar12 = __errno_location();
      error(0,*piVar12,uVar11,uVar9,uVar15);
    } while( true );
  }
  if (cVar22 == '\0') {
    uVar19 = quote_n(1,"--reference");
    param_2 = (byte *)quote_n(0,"--size");
    pcVar17 = "you must specify either %s or %s";
    goto LAB_0010106f;
  }
  uVar19 = local_110;
  if ((int)uVar16 < 1) goto LAB_00101253;
LAB_001010dd:
  local_110 = uVar19;
  uVar19 = 0xffffffffffffffff;
LAB_001010e1:
  __file = *(undefined1 **)pcVar20;
  uVar16 = 0;
  if ((int *)__file != (int *)0x0) {
    local_100 = &local_d8;
    local_108 = (ulong)((-(uint)(no_create == '\0') & 0x40) + 0x801);
    local_f0 = uVar19 >> 0x3f;
    local_f8 = uVar19;
    goto LAB_00101156;
  }
LAB_001013c9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


