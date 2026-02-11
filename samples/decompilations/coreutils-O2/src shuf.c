
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
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [FILE]\n  or:  %s -e [OPTION]... [ARG]...\n  or:  %s -i LO-HI [OPTION]...\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Write a random permutation of the input lines to standard output.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -e, --echo                treat each ARG as an input line\n  -i, --input-range=LO-HI   treat each number LO through HI as an input line\n  -n, --head-count=COUNT    output at most COUNT lines\n  -o, --output=FILE         write result to FILE instead of standard output\n      --random-source=FILE  get random bytes from FILE\n  -r, --repeat              output lines can be repeated\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated     line delimiter is NUL, not newline\n",5)
  ;
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
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
    iVar2 = strcmp("shuf",pcVar4);
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
    if (pcVar4 != (char *)0x0) goto LAB_001002b5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001002b5:
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
    if (puVar7 == &_LC1) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(uint param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  __off_t _Var3;
  void *pvVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  size_t sVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  byte *pbVar15;
  undefined8 uVar16;
  uint **ppuVar17;
  uint *puVar18;
  char *pcVar19;
  byte bVar20;
  char cVar21;
  undefined1 *puVar22;
  long in_FS_OFFSET;
  bool bVar23;
  uint *local_150;
  byte *local_148;
  byte *local_140;
  uint *local_138;
  uint *local_130;
  uint *local_128;
  byte local_11b;
  byte local_11a;
  byte local_119;
  uint *local_118;
  uint *local_110;
  uint *local_100;
  uint *local_f8 [4];
  stat local_d8;
  long local_40;
  
  puVar22 = long_opts;
  puVar14 = (uint *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar18 = &switchD_00100b93::switchdataD_00101754;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_11a = 0;
  local_119 = 10;
  local_140 = (byte *)0x0;
  local_148 = (byte *)0x0;
  local_138 = (uint *)0x7fffffffffffffff;
  local_130 = (uint *)0xffffffffffffffff;
  local_150 = (uint *)0x0;
  local_11b = 0;
  puVar7 = (uint *)0x0;
  puVar5 = local_138;
LAB_00100b50:
  local_138 = puVar5;
  uVar2 = 0x1017e0;
  iVar1 = getopt_long(param_1,param_2,"ei:n:o:rz",long_opts,0);
  pbVar9 = _stdin;
  pbVar8 = _optarg;
  if (iVar1 != -1) {
    if (0x80 < iVar1) goto switchD_00100b93_caseD_66;
    if (iVar1 < 0x65) {
      if (iVar1 == -0x83) {
        uVar6 = proper_name_lite("Paul Eggert","Paul Eggert");
        version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar6,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar1 != -0x82) goto switchD_00100b93_caseD_66;
      usage(0);
      pbVar9 = param_2;
      goto LAB_00101641;
    }
    puVar5 = local_138;
    switch(iVar1) {
    case 0x65:
      local_11b = 1;
      break;
    default:
      goto switchD_00100b93_caseD_66;
    case 0x69:
      if ((byte)local_150 != 0) {
        pcVar19 = "multiple -i options specified";
LAB_001016c2:
        do {
          uVar6 = dcgettext(0,pcVar19,5);
          error(1,0,uVar6);
LAB_001016da:
          pcVar19 = "multiple output files specified";
        } while( true );
      }
      uVar2 = xstrtoumax(_optarg,local_f8,10,&local_100,0);
      puVar7 = local_100;
      if (uVar2 != 0) goto LAB_0010120b;
      local_130 = local_100;
      if ((byte)*local_f8[0] == 0x2d) {
        uVar2 = xstrtoumax((byte *)((long)local_f8[0] + 1),0,10,&local_100);
        if (uVar2 != 0) goto LAB_0010120b;
        local_128 = (uint *)((long)local_100 + (1 - (long)puVar7));
        if (local_100 < puVar7 == (local_128 == (uint *)0x0)) {
          local_150 = (uint *)0x1;
          puVar7 = local_100;
          break;
        }
      }
      puVar5 = (uint *)quote(_optarg);
      uVar6 = dcgettext(0,"invalid input range",5);
      uVar16 = 0;
      goto LAB_00101242;
    case 0x6e:
      iVar1 = xstrtoumax(_optarg,0,10,local_f8);
      if (iVar1 == 0) {
        puVar5 = local_f8[0];
        if (local_138 <= local_f8[0]) {
          puVar5 = local_138;
        }
        break;
      }
      if (iVar1 == 1) break;
      param_2 = (byte *)quote(_optarg);
      uVar6 = dcgettext(0,"invalid line count: %s",5);
      error(1,0,uVar6,param_2);
    case 0x72:
      local_11a = 1;
      break;
    case 0x6f:
      if ((local_148 != (byte *)0x0) &&
         (iVar1 = strcmp((char *)local_148,(char *)_optarg), iVar1 != 0)) goto LAB_001016da;
      local_148 = pbVar8;
      break;
    case 0x7a:
      local_119 = 0;
      break;
    case 0x80:
      if ((local_140 == (byte *)0x0) ||
         (iVar1 = strcmp((char *)local_140,(char *)_optarg), iVar1 == 0)) goto LAB_00100bcb;
      pcVar19 = "multiple random sources specified";
      goto LAB_001016c2;
    }
    goto LAB_00100b50;
  }
  puVar18 = (uint *)(param_2 + (long)_optind * 8);
  param_1 = param_1 - _optind;
  puVar14 = (uint *)(ulong)param_1;
  if ((local_11b & (byte)local_150) != 0) {
    uVar6 = dcgettext(0,"cannot combine -e and -i options",5);
    error(0,0,uVar6);
switchD_00100b93_caseD_66:
    usage(1);
LAB_0010120b:
    local_150 = (uint *)(ulong)uVar2;
    puVar5 = (uint *)quote(_optarg);
    uVar6 = dcgettext(0,"invalid input range",5);
    uVar16 = 0;
    if (uVar2 == 1) {
      uVar16 = 0x4b;
    }
LAB_00101242:
    error(1,uVar16,"%s: %s",uVar6,puVar5);
    goto LAB_0010125b;
  }
  if ((byte)local_150 == 0) {
    if ((local_11b == 0) && (lVar10 = 8, 1 < (int)param_1)) goto LAB_001010d6;
  }
  else if (0 < (int)param_1) {
    lVar10 = 0;
LAB_001010d6:
    puVar5 = (uint *)quote(*(undefined8 *)((long)puVar18 + lVar10));
    uVar6 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar6,puVar5);
    usage(1);
    goto LAB_00101110;
  }
  if (local_138 == (uint *)0x0) {
    puVar18 = (uint *)0x0;
    local_128 = (uint *)0x0;
  }
  else {
    if (local_11b != 0) goto LAB_001013d0;
    if ((byte)local_150 == 0) {
      puVar14 = (uint *)(ulong)(param_1 - 1);
      if (param_1 - 1 == 0) {
        puVar14 = *(uint **)puVar18;
        iVar1 = strcmp((char *)puVar14,"-");
        if (iVar1 != 0) {
LAB_00101641:
          lVar10 = freopen_safer(puVar14,&_LC41,pbVar9);
          pbVar9 = _stdin;
          if (lVar10 == 0) {
            pbVar8 = *(byte **)puVar18;
            goto LAB_00101667;
          }
        }
      }
      fadvise(pbVar9,2);
      if (((local_138 != (uint *)0x7fffffffffffffff) && (local_11a == 0)) &&
         ((iVar1 = fstat(0,&local_d8), iVar1 != 0 ||
          ((((local_d8.st_mode & 0xd000) != 0x8000 || (_Var3 = lseek(0,0,1), _Var3 < 0)) ||
           (0x800000 < local_d8.st_size - _Var3)))))) {
        if (local_138 != (uint *)0xffffffffffffffff) goto LAB_00101693;
        local_128 = (uint *)0xffffffffffffffff;
        puVar18 = (uint *)0x0;
        puVar22 = (undefined1 *)0x1;
        puVar5 = local_128;
        goto LAB_00100fa6;
      }
      pbVar8 = (byte *)fread_file(_stdin,0,local_f8);
      if (pbVar8 == (byte *)0x0) goto LAB_001013a4;
      if ((local_f8[0] != (uint *)0x0) && (local_119 != (pbVar8 + -1)[(long)local_f8[0]])) {
        pbVar8[(long)local_f8[0]] = local_119;
        local_f8[0] = (uint *)((long)local_f8[0] + 1);
      }
      pbVar15 = (byte *)((long)local_f8[0] + (long)pbVar8);
      local_128 = (uint *)0x0;
      pbVar9 = pbVar8;
      while (pbVar9 < pbVar15) {
        pvVar4 = rawmemchr(pbVar9,(int)(char)local_119);
        local_128 = (uint *)((long)local_128 + 1);
        pbVar9 = (byte *)((long)pvVar4 + 1);
      }
      puVar18 = (uint *)xnmalloc((uint *)((long)local_128 + 1),8);
      *(byte **)puVar18 = pbVar8;
      for (puVar14 = (uint *)0x1; puVar14 <= local_128; puVar14 = (uint *)((long)puVar14 + 1)) {
        pvVar4 = rawmemchr(pbVar8,(int)(char)local_119);
        pbVar8 = (byte *)((long)pvVar4 + 1);
        *(byte **)(puVar18 + (long)puVar14 * 2) = pbVar8;
      }
    }
    else {
      puVar18 = (uint *)0x0;
    }
  }
  while( true ) {
    bVar20 = local_138 < local_128 | local_11a;
    puVar22 = (undefined1 *)(ulong)bVar20;
    puVar5 = local_128;
    if (bVar20 != 0) {
      puVar22 = (undefined1 *)0x0;
      puVar5 = local_138;
    }
LAB_00100fa6:
    if (local_11a != 0 || (char)puVar22 != '\0') break;
    uVar6 = randperm_bound(puVar5,local_128);
    puVar14 = (uint *)randint_all_new(local_140,uVar6);
    if (puVar14 == (uint *)0x0) goto LAB_00101705;
    bVar20 = local_11b | (byte)local_150 | local_138 == (uint *)0x0;
    puVar22 = (undefined1 *)(ulong)bVar20;
    if (bVar20 != 0) {
      cVar21 = '\0';
      pcVar19 = (char *)0x0;
      goto LAB_00100ffd;
    }
    pcVar19 = (char *)0x0;
    while( true ) {
      cVar21 = (char)puVar22;
      iVar1 = rpl_fclose(_stdin);
      bVar23 = false;
      if (iVar1 != 0) break;
      do {
        if (local_11a != 0) {
          if (local_148 != (byte *)0x0) {
            local_140 = (byte *)CONCAT71(local_140._1_7_,bVar23);
            lVar10 = freopen_safer(local_148,&_LC48,_stdout);
            pbVar8 = local_148;
            if (lVar10 == 0) goto LAB_00101667;
          }
          if (bVar23 != false) goto LAB_00101092;
          pcVar19 = "no lines to repeat";
          if (local_128 == (uint *)0x0) goto LAB_001016c2;
          if ((byte)local_150 != '\0') {
            pcVar19 = (char *)0x0;
            goto LAB_00101381;
          }
          puVar7 = (uint *)0x0;
          goto LAB_001015f1;
        }
LAB_00100ffd:
        puVar14 = (uint *)randperm_new(puVar14,puVar5,local_128);
        if ((local_148 == (byte *)0x0) ||
           (lVar10 = freopen_safer(local_148,&_LC48,_stdout), pbVar8 = local_148, lVar10 != 0)) {
          if (cVar21 != '\0') {
            puVar18 = (uint *)0x0;
            goto LAB_00101583;
          }
          puVar22 = (undefined1 *)0x0;
          if ((byte)local_150 == '\0') goto LAB_0010128f;
          puVar18 = (uint *)0x0;
          pcVar19 = "%lu%c";
          goto LAB_0010108d;
        }
LAB_00101667:
        uVar6 = quotearg_n_style_colon(0,3,pbVar8);
        piVar13 = __errno_location();
        error(1,*piVar13,&_LC42,uVar6);
LAB_00101693:
        puVar14 = (uint *)randint_all_new(local_140,0xffffffffffffffff);
        if (puVar14 == (uint *)0x0) goto LAB_00101705;
        puVar18 = (uint *)0x0;
        puVar5 = local_138;
LAB_00101133:
        local_128 = puVar7;
        pbVar8 = _stdin;
        pcVar19 = (char *)0x0;
        local_100 = (uint *)0x0;
        lVar10 = 0;
        local_140 = _stdin;
        for (puVar22 = (undefined1 *)0x0; local_118 = puVar18, local_110 = puVar14,
            (uint *)puVar22 != puVar5; puVar22 = (undefined1 *)((long)puVar22 + 1)) {
          puVar7 = (uint *)((long)pcVar19 + (long)puVar22 * 6 * 4);
          if (local_100 == (uint *)puVar22) {
            pcVar19 = (char *)xpalloc(pcVar19,&local_100,1,puVar5,0x18);
            puVar7 = (uint *)memset((uint *)((long)pcVar19 + (long)puVar22 * 6 * 4),0,
                                    ((long)local_100 - (long)puVar22) * 0x18);
          }
          lVar10 = readlinebuffer_delim(puVar7,pbVar8,local_119);
          if (lVar10 == 0) goto LAB_00101524;
        }
LAB_00101486:
        puVar14 = local_110;
        puVar18 = local_118;
        if (lVar10 != 0) {
          initbuffer(local_f8);
          local_118 = local_128;
          local_110 = puVar18;
          while( true ) {
            puVar7 = (uint *)randint_genmax(puVar14,puVar22);
            ppuVar17 = local_f8;
            if (puVar7 < puVar5) {
              ppuVar17 = (uint **)((long)pcVar19 + (long)puVar7 * 6 * 4);
            }
            lVar10 = readlinebuffer_delim(ppuVar17,local_140,local_119);
            if (lVar10 == 0) break;
            bVar23 = (uint *)puVar22 == (uint *)0x0;
            puVar22 = (undefined1 *)((long)puVar22 + 1);
            if (bVar23) {
              puVar22 = (undefined1 *)0x1;
              goto LAB_0010151a;
            }
          }
          if ((uint *)puVar22 == (uint *)0x0) {
            uVar6 = dcgettext(0,"too many input lines",5);
            error(1,0x4b,uVar6);
            goto LAB_00101745;
          }
LAB_0010151a:
          freebuffer(local_f8);
        }
LAB_00101524:
        puVar7 = local_128;
        if ((*local_140 & 0x20) != 0) goto LAB_001013a4;
        if (puVar22 <= puVar5) {
          puVar5 = (uint *)puVar22;
        }
        puVar22 = (undefined1 *)0x1;
        local_128 = puVar5;
LAB_0010129c:
        cVar21 = (char)puVar22;
        bVar23 = local_138 == (uint *)0x0;
      } while ((local_11b != 0 || (byte)local_150 != '\0') || (bVar23));
    }
LAB_001013a4:
    param_1 = (uint)puVar14;
    uVar6 = dcgettext(0,"read error",5);
    piVar13 = __errno_location();
    error(1,*piVar13,uVar6);
LAB_001013d0:
    local_128 = (uint *)(long)(int)param_1;
    puVar14 = local_128;
    for (lVar10 = 0; (int)lVar10 < (int)param_1; lVar10 = lVar10 + 1) {
      sVar11 = strlen(*(char **)(puVar18 + lVar10 * 2));
      puVar14 = (uint *)((long)puVar14 + sVar11);
    }
    pbVar8 = (byte *)xmalloc(puVar14);
    for (lVar10 = 0; (int)lVar10 < (int)param_1; lVar10 = lVar10 + 1) {
      pbVar9 = (byte *)stpcpy((char *)pbVar8,*(char **)(puVar18 + lVar10 * 2));
      *(byte **)(puVar18 + lVar10 * 2) = pbVar8;
      *pbVar9 = local_119;
      pbVar8 = pbVar9 + 1;
    }
    *(byte **)(puVar18 + (long)local_128 * 2) = pbVar8;
  }
LAB_00101110:
  puVar14 = (uint *)randint_all_new(local_140,0xffffffffffffffff);
  if (puVar14 == (uint *)0x0) goto LAB_00101705;
  if ((char)puVar22 != '\0') goto LAB_00101133;
  pcVar19 = (char *)0x0;
  goto LAB_0010129c;
LAB_00100bcb:
  local_140 = pbVar8;
  goto LAB_00100b50;
LAB_001015f1:
  if (puVar5 == puVar7) goto LAB_00101092;
  lVar10 = randint_genmax(puVar14,(uint *)((long)local_128 + -1));
  pvVar4 = *(void **)(puVar18 + lVar10 * 2);
  pcVar19 = (char *)(*(long *)(puVar18 + lVar10 * 2 + 2) - (long)pvVar4);
  puVar12 = (uint *)fwrite_unlocked(pvVar4,1,(size_t)pcVar19,_stdout);
  puVar22 = (undefined1 *)((long)local_128 + -1);
  if ((uint *)pcVar19 != puVar12) goto LAB_00101437;
  puVar7 = (uint *)((long)puVar7 + 1);
  goto LAB_001015f1;
LAB_00101381:
  if (puVar5 == (uint *)pcVar19) goto LAB_00101092;
  lVar10 = randint_genmax(puVar14,(uint *)((long)puVar7 - (long)local_130));
  iVar1 = __printf_chk(2,"%lu%c",(byte *)((long)local_130 + lVar10));
  puVar22 = (undefined1 *)((long)puVar7 - (long)local_130);
  local_150 = puVar14;
  if (iVar1 < 0) goto LAB_00101437;
  pcVar19 = (char *)((long)pcVar19 + 1);
  goto LAB_00101381;
LAB_00101583:
  if (local_128 == puVar18) goto LAB_00101092;
  lVar10 = *(long *)(puVar14 + (long)puVar18 * 2);
  sVar11 = fwrite_unlocked(*(void **)((long)pcVar19 + (lVar10 * 6 + 4) * 4),1,
                           *(size_t *)((long)pcVar19 + (lVar10 * 6 + 2) * 4),_stdout);
  puVar22 = (undefined1 *)local_128;
  if (sVar11 != *(size_t *)((long)pcVar19 + (lVar10 * 6 + 2) * 4)) goto LAB_00101437;
  puVar18 = (uint *)((long)puVar18 + 1);
  goto LAB_00101583;
LAB_0010128f:
  if (puVar5 == (uint *)puVar22) goto LAB_00101092;
LAB_0010125b:
  pvVar4 = *(void **)(puVar18 + *(long *)(puVar14 + (long)puVar22 * 2) * 2);
  pcVar19 = (char *)(*(long *)(puVar18 + *(long *)(puVar14 + (long)puVar22 * 2) * 2 + 2) -
                    (long)pvVar4);
  puVar7 = (uint *)fwrite_unlocked(pvVar4,1,(size_t)pcVar19,_stdout);
  if ((uint *)pcVar19 != puVar7) goto LAB_00101437;
  puVar22 = (undefined1 *)((long)puVar22 + 1);
  goto LAB_0010128f;
LAB_0010108d:
  if (puVar5 == puVar18) {
LAB_00101092:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar1 = __printf_chk(2,"%lu%c",(byte *)((long)local_130 + *(long *)(puVar14 + (long)puVar18 * 2)))
  ;
  puVar22 = (undefined1 *)(ulong)(uint)(int)(char)local_119;
  if (iVar1 < 0) {
LAB_00101437:
    puVar18 = (uint *)__errno_location();
    uVar2 = *puVar18;
    puVar5 = (uint *)(ulong)uVar2;
    fflush_unlocked(_stdout);
    fpurge(_stdout);
    clearerr_unlocked(_stdout);
    uVar6 = dcgettext(0,"write error",5);
    lVar10 = error(1,uVar2,uVar6);
    goto LAB_00101486;
  }
  puVar18 = (uint *)((long)puVar18 + 1);
  goto LAB_0010108d;
LAB_00101705:
  local_128 = puVar7;
  pbVar8 = local_140;
  puVar7 = local_128;
  if (local_140 == (byte *)0x0) {
LAB_00101745:
    local_140 = (byte *)0x100499;
    pbVar8 = local_140;
    puVar7 = local_128;
  }
  goto LAB_00101667;
}


