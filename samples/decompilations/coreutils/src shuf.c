
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
    iVar2 = strcmp("shuf",pcVar4);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  uintmax_t uVar3;
  int iVar4;
  uint uVar5;
  option *poVar6;
  undefined8 uVar7;
  __off_t _Var8;
  char *pcVar9;
  void *pvVar10;
  option *__s1;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  char **ppcVar14;
  size_t sVar15;
  char *pcVar16;
  option *poVar17;
  option *poVar18;
  int *piVar19;
  byte *pbVar20;
  byte *pbVar21;
  char *pcVar22;
  uint *puVar23;
  option *poVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  option *local_150;
  byte *local_148;
  byte *local_140;
  option *local_138;
  uintmax_t local_130;
  option *local_128;
  byte local_11b;
  char local_119;
  option *local_118;
  option *local_110;
  uintmax_t u;
  char *lo_end;
  stat stat_buf;
  
  poVar24 = long_opts;
  uVar11 = (ulong)(uint)argc;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar23 = &switchD_00100b93::switchdataD_00101754;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  bVar2 = false;
  local_119 = '\n';
  local_140 = (byte *)0x0;
  local_148 = (byte *)0x0;
  local_138 = (option *)0x7fffffffffffffff;
  local_130 = 0xffffffffffffffff;
  local_150 = (option *)0x0;
  local_11b = 0;
  poVar17 = (option *)0x0;
  poVar6 = local_138;
LAB_00100b50:
  local_138 = poVar6;
  iVar4 = getopt_long(uVar11,argv,"ei:n:o:rz",long_opts,0);
  pbVar21 = _stdin;
  pbVar20 = _optarg;
  if (iVar4 != -1) {
    if (0x80 < iVar4) goto switchD_00100b93_caseD_66;
    if (iVar4 < 0x65) {
      if (iVar4 == -0x83) {
        uVar7 = proper_name_lite("Paul Eggert","Paul Eggert");
        version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar7,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00100b93_caseD_66;
    }
    poVar6 = local_138;
    switch(iVar4) {
    case 0x65:
      local_11b = 1;
      break;
    default:
      goto switchD_00100b93_caseD_66;
    case 0x69:
      if ((byte)local_150 != 0) {
        pcVar9 = "multiple -i options specified";
LAB_001016c2:
        do {
          uVar7 = dcgettext(0,pcVar9,5);
          error(1,0,uVar7);
LAB_001016da:
          pcVar9 = "multiple output files specified";
        } while( true );
      }
      uVar5 = xstrtoumax(_optarg,&lo_end,10,&u,0);
      uVar3 = u;
      if (uVar5 == 0) {
        local_130 = u;
        if (*lo_end == '-') {
          uVar5 = xstrtoumax(lo_end + 1,0,10,&u);
          if (uVar5 != 0) goto LAB_0010120b;
          local_128 = (option *)((u + 1) - uVar3);
          if (u < uVar3 == (local_128 == (option *)0x0)) {
            local_150 = (option *)0x1;
            poVar17 = (option *)u;
            break;
          }
        }
        poVar6 = (option *)quote(_optarg);
        uVar7 = dcgettext(0,"invalid input range",5);
        uVar13 = 0;
      }
      else {
LAB_0010120b:
        local_150 = (option *)(ulong)uVar5;
        poVar6 = (option *)quote(_optarg);
        uVar7 = dcgettext(0,"invalid input range",5);
        uVar13 = 0;
        if (uVar5 == 1) {
          uVar13 = 0x4b;
        }
      }
      error(1,uVar13,"%s: %s",uVar7,poVar6);
      goto LAB_0010125b;
    case 0x6e:
      iVar4 = xstrtoumax(_optarg,0,10,&lo_end);
      if (iVar4 == 0) {
        poVar6 = (option *)lo_end;
        if (local_138 <= lo_end) {
          poVar6 = local_138;
        }
        break;
      }
      if (iVar4 == 1) break;
      argv = (char **)quote(_optarg);
      uVar7 = dcgettext(0,"invalid line count: %s",5);
      error(1,0,uVar7,argv);
    case 0x72:
      bVar2 = true;
      break;
    case 0x6f:
      if ((local_148 != (byte *)0x0) &&
         (iVar4 = strcmp((char *)local_148,(char *)_optarg), iVar4 != 0)) goto LAB_001016da;
      local_148 = pbVar20;
      break;
    case 0x7a:
      local_119 = '\0';
      break;
    case 0x80:
      if ((local_140 == (byte *)0x0) ||
         (iVar4 = strcmp((char *)local_140,(char *)_optarg), iVar4 == 0)) goto LAB_00100bcb;
      pcVar9 = "multiple random sources specified";
      goto LAB_001016c2;
    }
    goto LAB_00100b50;
  }
  puVar23 = (uint *)(argv + _optind);
  iVar4 = argc - _optind;
  if ((local_11b & (byte)local_150) != 0) {
    uVar7 = dcgettext(0,"cannot combine -e and -i options",5);
    error(0,0,uVar7);
switchD_00100b93_caseD_66:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if ((byte)local_150 == 0) {
    if ((local_11b == 0) && (lVar12 = 8, 1 < iVar4)) goto LAB_001010d6;
  }
  else if (0 < iVar4) {
    lVar12 = 0;
LAB_001010d6:
    uVar7 = quote(*(undefined8 *)((long)&((option *)puVar23)->name + lVar12));
    uVar13 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar13,uVar7);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (local_138 == (option *)0x0) {
    puVar23 = (uint *)0x0;
    local_128 = (option *)0x0;
  }
  else {
    if (local_11b != 0) goto LAB_001013d0;
    if ((byte)local_150 == 0) {
      __s1 = (option *)(ulong)(iVar4 - 1U);
      if (iVar4 - 1U == 0) {
        __s1 = (option *)((option *)puVar23)->name;
        iVar4 = strcmp((char *)__s1,"-");
        if ((iVar4 != 0) &&
           (lVar12 = freopen_safer(__s1,&_LC41,pbVar21), pbVar21 = _stdin, lVar12 == 0)) {
          pbVar20 = (byte *)((option *)puVar23)->name;
          goto LAB_00101667;
        }
      }
      fadvise(pbVar21,2);
      if (((local_138 != (option *)0x7fffffffffffffff) && (!bVar2)) &&
         ((iVar4 = fstat(0,(stat *)&stat_buf), iVar4 != 0 ||
          ((((stat_buf.st_mode & 0xd000) != 0x8000 || (_Var8 = lseek(0,0,1), _Var8 < 0)) ||
           (0x800000 < stat_buf.st_size - _Var8)))))) {
        if (local_138 != (option *)0xffffffffffffffff) goto LAB_00101693;
        local_128 = (option *)0xffffffffffffffff;
        puVar23 = (uint *)0x0;
        bVar26 = true;
        poVar6 = local_128;
        goto LAB_00100fa6;
      }
      pcVar9 = (char *)fread_file(_stdin,0,&lo_end);
      if (pcVar9 == (char *)0x0) goto LAB_001013a4;
      if ((lo_end != (char *)0x0) && (local_119 != (pcVar9 + -1)[(long)lo_end])) {
        pcVar9[(long)lo_end] = local_119;
        lo_end = lo_end + 1;
      }
      pcVar22 = lo_end + (long)pcVar9;
      local_128 = (option *)0x0;
      pcVar16 = pcVar9;
      while (poVar24 = (option *)((long)&local_128->name + 1), pcVar16 < pcVar22) {
        pvVar10 = rawmemchr(pcVar16,(int)local_119);
        local_128 = poVar24;
        pcVar16 = (char *)((long)pvVar10 + 1);
      }
      puVar23 = (uint *)xnmalloc(poVar24,8);
      ((option *)puVar23)->name = pcVar9;
      for (poVar24 = (option *)0x1; poVar24 <= local_128;
          poVar24 = (option *)((long)&poVar24->name + 1)) {
        pvVar10 = rawmemchr(pcVar9,(int)local_119);
        pcVar9 = (char *)((long)pvVar10 + 1);
        (&((option *)puVar23)->name)[(long)poVar24] = pcVar9;
      }
    }
    else {
      puVar23 = (uint *)0x0;
    }
  }
  do {
    bVar26 = (bool)(local_138 < local_128 | bVar2);
    poVar6 = local_128;
    if (bVar26) {
      bVar26 = false;
      poVar6 = local_138;
    }
LAB_00100fa6:
    if (bVar2 || bVar26) {
      __s1 = (option *)randint_all_new(local_140,0xffffffffffffffff);
      if (__s1 == (option *)0x0) goto LAB_00101705;
      if (bVar26) goto LAB_00101133;
      pcVar9 = (char *)0x0;
      bVar26 = false;
      goto LAB_0010129c;
    }
    uVar7 = randperm_bound(poVar6,local_128);
    __s1 = (option *)randint_all_new(local_140,uVar7);
    if (__s1 == (option *)0x0) goto LAB_00101705;
    if ((local_11b != 0 || (char)local_150 != '\0') || local_138 == (option *)0x0) {
      bVar26 = false;
      pcVar9 = (char *)0x0;
      goto LAB_00100ffd;
    }
    pcVar9 = (char *)0x0;
    bVar26 = false;
    while( true ) {
      iVar4 = rpl_fclose(_stdin);
      bVar25 = false;
      if (iVar4 != 0) break;
      do {
        if (bVar2) {
          if (local_148 != (byte *)0x0) {
            local_140 = (byte *)CONCAT71(local_140._1_7_,bVar25);
            lVar12 = freopen_safer(local_148,&_LC48,_stdout);
            pbVar20 = local_148;
            if (lVar12 == 0) goto LAB_00101667;
          }
          if (bVar25 != false) goto LAB_00101092;
          pcVar9 = "no lines to repeat";
          if (local_128 == (option *)0x0) goto LAB_001016c2;
          if ((byte)local_150 != '\0') {
            pcVar9 = (char *)0x0;
            goto LAB_00101381;
          }
          poVar17 = (option *)0x0;
          goto LAB_001015f1;
        }
LAB_00100ffd:
        uVar11 = randperm_new(__s1,poVar6,local_128);
        if ((local_148 == (byte *)0x0) ||
           (lVar12 = freopen_safer(local_148,&_LC48,_stdout), pbVar20 = local_148, lVar12 != 0)) {
          if (bVar26) {
            poVar17 = (option *)0x0;
            goto LAB_00101583;
          }
          poVar24 = (option *)0x0;
          if ((byte)local_150 == '\0') goto LAB_0010128f;
          poVar17 = (option *)0x0;
          pcVar9 = "%lu%c";
          goto LAB_0010108d;
        }
LAB_00101667:
        uVar7 = quotearg_n_style_colon(0,3,pbVar20);
        piVar19 = __errno_location();
        error(1,*piVar19,&_LC42,uVar7);
LAB_00101693:
        __s1 = (option *)randint_all_new(local_140,0xffffffffffffffff);
        if (__s1 == (option *)0x0) goto LAB_00101705;
        puVar23 = (uint *)0x0;
        poVar6 = local_138;
LAB_00101133:
        local_128 = poVar17;
        pbVar20 = _stdin;
        pcVar9 = (char *)0x0;
        u = 0;
        lVar12 = 0;
        local_140 = _stdin;
        for (poVar24 = (option *)0x0; local_118 = (option *)puVar23, local_110 = __s1,
            poVar24 != poVar6; poVar24 = (option *)((long)&poVar24->name + 1)) {
          ppcVar14 = &((option *)pcVar9)->name + (long)poVar24 * 3;
          if ((option *)u == poVar24) {
            pcVar9 = (char *)xpalloc(pcVar9,&u,1,poVar6,0x18);
            ppcVar14 = (char **)memset(&((option *)pcVar9)->name + (long)poVar24 * 3,0,
                                       (u - (long)poVar24) * 0x18);
          }
          lVar12 = readlinebuffer_delim(ppcVar14,pbVar20,local_119);
          if (lVar12 == 0) goto LAB_00101524;
        }
LAB_00101486:
        __s1 = local_110;
        puVar23 = (uint *)local_118;
        if (lVar12 != 0) {
          initbuffer(&lo_end);
          local_118 = local_128;
          local_110 = (option *)puVar23;
          while( true ) {
            poVar17 = (option *)randint_genmax(__s1,poVar24);
            ppcVar14 = &lo_end;
            if (poVar17 < poVar6) {
              ppcVar14 = &((option *)pcVar9)->name + (long)poVar17 * 3;
            }
            lVar12 = readlinebuffer_delim(ppcVar14,local_140,local_119);
            if (lVar12 == 0) break;
            bVar26 = poVar24 == (option *)0x0;
            poVar24 = (option *)((long)&poVar24->name + 1);
            if (bVar26) {
              poVar24 = (option *)0x1;
              goto LAB_0010151a;
            }
          }
          if (poVar24 == (option *)0x0) {
            uVar7 = dcgettext(0,"too many input lines",5);
            error(1,0x4b,uVar7);
            goto LAB_00101745;
          }
LAB_0010151a:
          freebuffer(&lo_end);
        }
LAB_00101524:
        poVar17 = local_128;
        if ((*local_140 & 0x20) != 0) goto LAB_001013a4;
        if (poVar24 <= poVar6) {
          poVar6 = poVar24;
        }
        bVar26 = true;
        local_128 = poVar6;
LAB_0010129c:
        bVar25 = local_138 == (option *)0x0;
      } while ((local_11b != 0 || (byte)local_150 != '\0') || (bVar25));
    }
LAB_001013a4:
    iVar4 = (int)__s1;
    uVar7 = dcgettext(0,"read error",5);
    piVar19 = __errno_location();
    error(1,*piVar19,uVar7);
LAB_001013d0:
    local_128 = (option *)(long)iVar4;
    poVar24 = local_128;
    for (lVar12 = 0; (int)lVar12 < iVar4; lVar12 = lVar12 + 1) {
      sVar15 = strlen((&((option *)puVar23)->name)[lVar12]);
      poVar24 = (option *)((long)&poVar24->name + sVar15);
    }
    pcVar9 = (char *)xmalloc(poVar24);
    for (lVar12 = 0; (int)lVar12 < iVar4; lVar12 = lVar12 + 1) {
      pcVar16 = stpcpy(pcVar9,(&((option *)puVar23)->name)[lVar12]);
      (&((option *)puVar23)->name)[lVar12] = pcVar9;
      *pcVar16 = local_119;
      pcVar9 = pcVar16 + 1;
    }
    (&((option *)puVar23)->name)[(long)local_128] = pcVar9;
  } while( true );
LAB_00100bcb:
  local_140 = pbVar20;
  goto LAB_00100b50;
LAB_001015f1:
  if (poVar6 == poVar17) goto LAB_00101092;
  lVar12 = randint_genmax(__s1,&local_128[-1].field_0x1f);
  pcVar16 = (&((option *)puVar23)->name)[lVar12];
  pcVar9 = (&((option *)puVar23)->name + lVar12)[1] + -(long)pcVar16;
  poVar18 = (option *)fwrite_unlocked(pcVar16,1,(size_t)pcVar9,_stdout);
  poVar24 = (option *)&local_128[-1].field_0x1f;
  if ((option *)pcVar9 != poVar18) goto LAB_00101437;
  poVar17 = (option *)((long)&poVar17->name + 1);
  goto LAB_001015f1;
LAB_00101381:
  if (poVar6 == (option *)pcVar9) goto LAB_00101092;
  lVar12 = randint_genmax(__s1,(option *)((long)poVar17 - local_130));
  iVar4 = __printf_chk(2,"%lu%c",local_130 + lVar12);
  poVar24 = (option *)((long)poVar17 - local_130);
  local_150 = __s1;
  if (iVar4 < 0) goto LAB_00101437;
  pcVar9 = (char *)((long)&((option *)pcVar9)->name + 1);
  goto LAB_00101381;
LAB_00101583:
  if (local_128 == poVar17) goto LAB_00101092;
  lVar12 = *(long *)(uVar11 + (long)poVar17 * 8);
  sVar15 = fwrite_unlocked((&((option *)pcVar9)->flag)[lVar12 * 3],1,
                           *(size_t *)(&((option *)pcVar9)->has_arg + lVar12 * 6),_stdout);
  poVar24 = local_128;
  if (sVar15 != *(size_t *)(&((option *)pcVar9)->has_arg + lVar12 * 6)) goto LAB_00101437;
  poVar17 = (option *)((long)&poVar17->name + 1);
  goto LAB_00101583;
LAB_0010128f:
  if (poVar6 == poVar24) goto LAB_00101092;
LAB_0010125b:
  pcVar16 = (&((option *)puVar23)->name)[*(long *)(uVar11 + (long)poVar24 * 8)];
  pcVar9 = (&((option *)puVar23)->name + *(long *)(uVar11 + (long)poVar24 * 8))[1] + -(long)pcVar16;
  poVar17 = (option *)fwrite_unlocked(pcVar16,1,(size_t)pcVar9,_stdout);
  if ((option *)pcVar9 != poVar17) goto LAB_00101437;
  poVar24 = (option *)((long)&poVar24->name + 1);
  goto LAB_0010128f;
LAB_0010108d:
  if (poVar6 == poVar17) {
LAB_00101092:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar4 = __printf_chk(2,"%lu%c",*(long *)(uVar11 + (long)poVar17 * 8) + local_130);
  poVar24 = (option *)(ulong)(uint)(int)local_119;
  if (iVar4 < 0) {
LAB_00101437:
    puVar23 = (uint *)__errno_location();
    uVar5 = *puVar23;
    poVar6 = (option *)(ulong)uVar5;
    fflush_unlocked(_stdout);
    fpurge(_stdout);
    clearerr_unlocked(_stdout);
    uVar7 = dcgettext(0,"write error",5);
    lVar12 = error(1,uVar5,uVar7);
    goto LAB_00101486;
  }
  poVar17 = (option *)((long)&poVar17->name + 1);
  goto LAB_0010108d;
LAB_00101705:
  local_128 = poVar17;
  pbVar20 = local_140;
  poVar17 = local_128;
  if (local_140 == (byte *)0x0) {
LAB_00101745:
    local_140 = (byte *)0x100499;
    pbVar20 = local_140;
    poVar17 = local_128;
  }
  goto LAB_00101667;
}


