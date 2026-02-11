
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

ulong main(ulong param_1,ushort *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ushort **ppuVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 extraout_RDX;
  ushort *puVar13;
  __blksize_t _Var14;
  ushort *puVar15;
  char *pcVar16;
  char *pcVar17;
  ushort *puVar18;
  char *pcVar19;
  uint uVar20;
  undefined1 *puVar21;
  char cVar22;
  long in_FS_OFFSET;
  ushort *local_108;
  ushort *local_100;
  ushort *local_f8;
  ulong local_f0;
  stat local_d8;
  long local_40;
  
  pcVar17 = (char *)0x0;
  uVar4 = 0;
  puVar21 = longopts;
  puVar15 = (ushort *)(param_1 & 0xffffffff);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  pcVar19 = "cor:s:";
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00100d54:
  puVar11 = longopts;
  iVar3 = getopt_long(param_1 & 0xffffffff,param_2,"cor:s:");
  cVar22 = (char)pcVar17;
  if (iVar3 != -1) {
    if (iVar3 == 0x6f) {
      block_mode = '\x01';
    }
    else {
      if (iVar3 < 0x70) {
        if (iVar3 == -0x82) {
          usage(0);
          goto LAB_00101709;
        }
        if (iVar3 != 99) {
          if (iVar3 == -0x83) {
            uVar7 = proper_name_lite("Padraig Brady",&_LC35);
            version_etc(_stdout,"truncate","GNU coreutils",_Version,uVar7,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          goto LAB_00101088;
        }
        no_create = '\x01';
        goto LAB_00100d54;
      }
      if (iVar3 != 0x72) {
        if (iVar3 != 0x73) goto LAB_00101088;
        ppuVar8 = __ctype_b_loc();
        puVar11 = (undefined1 *)*ppuVar8;
        bVar2 = (byte)*_optarg;
        bVar1 = *(byte *)((long)puVar11 + (ulong)bVar2 * 2 + 1);
        while ((bVar1 & 0x20) != 0) {
          _optarg = (ushort *)((long)_optarg + 1);
          bVar2 = *(byte *)_optarg;
          bVar1 = *(byte *)((long)puVar11 + (ulong)bVar2 * 2 + 1);
        }
        if (bVar2 == 0x3c) {
          uVar4 = 3;
          puVar18 = (ushort *)((long)_optarg + 1);
        }
        else if ((char)bVar2 < '=') {
          if (bVar2 == 0x25) {
            uVar4 = 5;
            puVar18 = (ushort *)((long)_optarg + 1);
          }
          else {
            puVar18 = _optarg;
            if (bVar2 == 0x2f) {
              uVar4 = 4;
              puVar18 = (ushort *)((long)_optarg + 1);
            }
          }
        }
        else {
          puVar18 = _optarg;
          if (bVar2 == 0x3e) {
            uVar4 = 2;
            puVar18 = (ushort *)((long)_optarg + 1);
          }
        }
        do {
          _optarg = puVar18;
          puVar18 = (ushort *)((long)_optarg + 1);
        } while ((*(byte *)((long)puVar11 + (ulong)(byte)*_optarg * 2 + 1) & 0x20) != 0);
        uVar7 = 5;
        if (((byte)*_optarg - 0x2b & 0xfd) == 0) {
          if (uVar4 == 0) {
            uVar4 = 1;
            pcVar17 = (char *)0x1;
            uVar7 = dcgettext(0,"Invalid number",5);
            local_108 = (ushort *)
                        xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,"EgGkKmMPQRtTYZ0",
                                   uVar7,0);
            goto LAB_00100d54;
          }
        }
        else {
          uVar7 = dcgettext(0,"Invalid number",5);
          local_108 = (ushort *)
                      xdectoimax(_optarg,0x8000000000000000,0x7fffffffffffffff,"EgGkKmMPQRtTYZ0",
                                 uVar7,0);
          if ((1 < uVar4 - 4) || (local_108 != (ushort *)0x0)) {
            pcVar17 = (char *)0x1;
            goto LAB_00100d54;
          }
          puVar11 = (undefined1 *)local_108;
          uVar7 = dcgettext(0,"division by zero",5);
          error(1,0,uVar7);
          uVar7 = extraout_RDX;
        }
        pcVar16 = "multiple relative modifiers specified";
        goto LAB_00101259;
      }
      ref_file = _optarg;
    }
    goto LAB_00100d54;
  }
  pcVar19 = (char *)(param_2 + (long)_optind * 4);
  uVar20 = (int)param_1 - _optind;
  puVar15 = (ushort *)(ulong)uVar20;
  if (ref_file != (ushort *)0x0) {
    if ((uVar4 == 0) && (cVar22 != '\0')) {
      puVar15 = (ushort *)quote_n(1,"--reference");
      param_2 = (ushort *)quote_n(0,"--size");
      pcVar16 = "you must specify a relative %s with %s";
LAB_0010106d:
      uVar7 = dcgettext(0,pcVar16,5);
      puVar11 = (undefined1 *)param_2;
      error(0,0,uVar7,param_2,puVar15);
LAB_00101088:
      usage(1);
    }
    else {
      param_2 = ref_file;
      if ((block_mode == '\x01') && (cVar22 == '\0')) {
        puVar15 = (ushort *)quote_n(1,"--size");
        param_2 = (ushort *)quote_n(0,"--io-blocks");
        pcVar16 = "%s was specified but %s was not";
        goto LAB_0010106d;
      }
    }
    if ((int)puVar15 < 1) {
LAB_0010124d:
      uVar7 = 5;
      pcVar16 = "missing file operand";
LAB_00101259:
      uVar7 = dcgettext(0,pcVar16,uVar7);
      error(0,0,uVar7);
      usage(1);
      goto LAB_00101278;
    }
    iVar3 = stat((char *)param_2,&local_d8);
    if (iVar3 != 0) {
      puVar15 = (ushort *)quotearg_style(4,param_2);
      pcVar16 = "cannot stat %s";
      goto LAB_001016bd;
    }
    if ((local_d8.st_mode & 0xd000) == 0x8000) {
      puVar18 = (ushort *)local_d8.st_size;
      if (-1 < local_d8.st_size) {
LAB_001010d1:
        if (cVar22 != '\0') goto LAB_001010de;
        goto LAB_001010da;
      }
    }
    else {
      iVar3 = open((char *)param_2,0);
      if (-1 < iVar3) {
        puVar18 = (ushort *)lseek(iVar3,0,2);
        puVar21 = (undefined1 *)__errno_location();
        iVar6 = *(int *)puVar21;
        close(iVar3);
        if (-1 < (long)puVar18) goto LAB_001010d1;
        *(int *)puVar21 = iVar6;
        local_100 = puVar18;
      }
    }
    puVar15 = (ushort *)quotearg_style(4,ref_file);
    pcVar16 = "cannot get the size of %s";
LAB_001016bd:
    puVar18 = (ushort *)dcgettext(0,pcVar16,5);
    piVar10 = __errno_location();
    puVar11 = (undefined1 *)puVar15;
    error(1,*piVar10,puVar18);
LAB_001016e0:
    uVar20 = (uint)puVar15;
    lVar12 = (long)puVar18 % (long)puVar11;
    puVar11 = (undefined1 *)((long)puVar11 - lVar12);
    if (lVar12 == 0) {
      puVar11 = (undefined1 *)0x0;
    }
LAB_001012b6:
    puVar13 = (ushort *)((long)puVar18 + (long)puVar11);
    if (SCARRY8((long)puVar18,(long)puVar11)) {
      uVar7 = quotearg_style(4,pcVar17);
      pcVar16 = "overflow extending size of file %s";
      goto LAB_001013f1;
    }
LAB_001012bf:
    if ((long)puVar13 < 0) {
      puVar13 = (ushort *)0x0;
    }
    iVar3 = ftruncate(uVar4,(__off_t)puVar13);
    uVar5 = 1;
    if (iVar3 != 0) {
      uVar7 = quotearg_style(4,pcVar17);
      uVar9 = dcgettext(0,"failed to truncate %s at %jd bytes",5);
      piVar10 = __errno_location();
      error(0,*piVar10,uVar9,uVar7,puVar13);
      goto LAB_001011df;
    }
    do {
      puVar15 = (ushort *)(ulong)(uVar20 | uVar5 ^ 1);
      iVar3 = close(uVar4);
      if (iVar3 != 0) {
        uVar7 = quotearg_style(4,pcVar17);
        pcVar17 = "failed to close %s";
        goto LAB_00101212;
      }
      while( true ) {
        pcVar17 = *(char **)((long)pcVar19 + 8);
        pcVar19 = (char *)((long)pcVar19 + 8);
        if (pcVar17 == (char *)0x0) goto LAB_00101410;
LAB_00101152:
        uVar20 = (uint)puVar15;
        uVar4 = open(pcVar17,(int)puVar21,0x1b6);
        if (-1 < (int)uVar4) break;
        if ((no_create == '\0') || (piVar10 = __errno_location(), *piVar10 != 2)) {
          uVar7 = quotearg_style(4,pcVar17);
          pcVar17 = "cannot open %s for writing";
LAB_00101212:
          uVar9 = dcgettext(0,pcVar17,5);
          piVar10 = __errno_location();
          puVar15 = (ushort *)0x1;
          error(0,*piVar10,uVar9,uVar7);
        }
      }
      if (block_mode == '\0') {
        puVar11 = (undefined1 *)local_108;
        if ((char)local_f0 == '\0') {
LAB_00101278:
          puVar18 = local_f8;
          if (local_f8 != (ushort *)0xffffffffffffffff) goto LAB_0010128a;
        }
        else {
          iVar3 = fstat(uVar4,&local_d8);
          if (iVar3 != 0) goto LAB_0010119f;
        }
        uVar20 = (uint)puVar15;
        if ((local_d8.st_mode & 0xd000) == 0x8000) {
          puVar18 = (ushort *)local_d8.st_size;
          if (-1 < local_d8.st_size) goto LAB_0010128a;
          uVar7 = quotearg_style(4,pcVar17);
          pcVar16 = "%s has unusable, apparently negative size";
LAB_001013f1:
          uVar9 = dcgettext(0,pcVar16,5);
          error(0,0,uVar9,uVar7);
        }
        else {
          puVar18 = (ushort *)lseek(uVar4,0,2);
          if (-1 < (long)puVar18) goto LAB_0010128a;
          uVar7 = quotearg_style(4,pcVar17);
          pcVar16 = "cannot get the size of %s";
LAB_001011bb:
          uVar9 = dcgettext(0,pcVar16,5);
          piVar10 = __errno_location();
          error(0,*piVar10,uVar9,uVar7);
        }
      }
      else {
        iVar3 = fstat(uVar4,&local_d8);
        if (iVar3 != 0) {
LAB_0010119f:
          uVar7 = quotearg_style(4,pcVar17);
          pcVar16 = "cannot fstat %s";
          goto LAB_001011bb;
        }
        _Var14 = local_d8.st_blksize;
        if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
          _Var14 = 0x200;
        }
        puVar11 = (undefined1 *)((long)local_108 * _Var14);
        if (SEXT816((long)puVar11) == SEXT816((long)local_108) * SEXT816(_Var14)) goto LAB_00101278;
        uVar7 = quotearg_style(4,pcVar17);
        uVar9 = dcgettext(0,"overflow in %jd * %td byte blocks for file %s",5);
        error(0,0,uVar9,local_108,_Var14,uVar7);
      }
LAB_001011df:
      uVar5 = 0;
    } while( true );
  }
  if (cVar22 == '\0') {
    puVar15 = (ushort *)quote_n(1,"--reference");
    param_2 = (ushort *)quote_n(0,"--size");
    pcVar16 = "you must specify either %s or %s";
    goto LAB_0010106d;
  }
  puVar18 = local_108;
  if ((int)uVar20 < 1) goto LAB_0010124d;
LAB_001010da:
  local_108 = puVar18;
  puVar18 = (ushort *)0xffffffffffffffff;
LAB_001010de:
  pcVar17 = *(char **)pcVar19;
  uVar20 = (-(uint)(no_create == '\0') & 0x40) + 0x801;
  puVar21 = (undefined1 *)(ulong)uVar20;
  if (pcVar17 == (char *)0x0) {
    puVar15 = (ushort *)0x0;
  }
  else {
    if (uVar4 != 0) {
      puVar15 = (ushort *)0x0;
      local_100 = (ushort *)(ulong)uVar4;
      local_f0 = (ulong)puVar18 >> 0x3f;
      local_f8 = puVar18;
      goto LAB_00101152;
    }
    uVar4 = 0;
    do {
      iVar3 = open(pcVar17,uVar20,0x1b6);
      if (iVar3 < 0) {
        if ((no_create == '\0') || (piVar10 = __errno_location(), *piVar10 != 2)) {
          uVar7 = quotearg_style(4,pcVar17);
          pcVar17 = "cannot open %s for writing";
          goto LAB_001014fb;
        }
      }
      else {
        puVar15 = local_108;
        if (block_mode == '\0') {
LAB_001014ac:
          if ((long)puVar15 < 0) {
            puVar15 = (ushort *)0x0;
          }
          iVar6 = ftruncate(iVar3,(__off_t)puVar15);
          uVar5 = 1;
          if (iVar6 != 0) {
            uVar7 = quotearg_style(4,pcVar17);
            uVar9 = dcgettext(0,"failed to truncate %s at %jd bytes",5);
            piVar10 = __errno_location();
            error(0,*piVar10,uVar9,uVar7,puVar15);
            uVar5 = 0;
          }
        }
        else {
          iVar6 = fstat(iVar3,&local_d8);
          if (iVar6 == 0) {
            _Var14 = local_d8.st_blksize;
            if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
              _Var14 = 0x200;
            }
            puVar15 = (ushort *)((long)local_108 * _Var14);
            if (SEXT816((long)puVar15) == SEXT816((long)local_108) * SEXT816(_Var14))
            goto LAB_001014ac;
            uVar7 = quotearg_style(4,pcVar17);
            uVar9 = dcgettext(0,"overflow in %jd * %td byte blocks for file %s",5);
            error(0,0,uVar9,local_108,_Var14,uVar7);
            uVar5 = 0;
          }
          else {
            uVar7 = quotearg_style(4,pcVar17);
            uVar9 = dcgettext(0,"cannot fstat %s",5);
            piVar10 = __errno_location();
            error(0,*piVar10,uVar9,uVar7);
            uVar5 = 0;
          }
        }
        uVar4 = uVar4 | uVar5 ^ 1;
        iVar3 = close(iVar3);
        if (iVar3 != 0) {
          uVar7 = quotearg_style(4,pcVar17);
          pcVar17 = "failed to close %s";
LAB_001014fb:
          uVar9 = dcgettext(0,pcVar17,5);
          piVar10 = __errno_location();
          uVar4 = 1;
          error(0,*piVar10,uVar9,uVar7);
        }
      }
      pcVar17 = *(char **)((long)pcVar19 + 8);
      pcVar19 = (char *)((long)pcVar19 + 8);
    } while (pcVar17 != (char *)0x0);
    puVar15 = (ushort *)(ulong)uVar4;
  }
LAB_00101410:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)puVar15 & 0xff;
  }
LAB_00101709:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010128a:
  uVar20 = (uint)puVar15;
  puVar13 = puVar18;
  if ((int)local_100 == 2) {
    if ((long)puVar18 <= (long)puVar11) {
      puVar13 = (ushort *)puVar11;
    }
    goto LAB_001012bf;
  }
  if ((int)local_100 == 3) {
    if ((long)puVar11 <= (long)puVar18) {
      puVar13 = (ushort *)puVar11;
    }
    goto LAB_001012bf;
  }
  if ((int)local_100 == 4) {
    puVar13 = (ushort *)((long)puVar18 - (long)puVar18 % (long)puVar11);
    goto LAB_001012bf;
  }
  if ((int)local_100 != 5) goto LAB_001012b6;
  goto LAB_001016e0;
}


