
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_only_size(long param_1)

{
  FILE *__stream;
  char *__s;
  long in_FS_OFFSET;
  undefined1 auStack_2a8 [664];
  long local_10;
  
  __stream = _stdout;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == -1) {
    __s = (char *)dcgettext(0,"Infinity",5);
  }
  else {
    __s = (char *)human_readable(param_1,auStack_2a8,human_output_opts,1,output_block_size);
  }
  fputs_unlocked(__s,__stream);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_size(undefined8 *param_1,undefined8 param_2)

{
  FILE *__stream;
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_1[1];
  if (opt_inodes == '\0') {
    uVar3 = *param_1;
  }
  print_only_size(uVar3);
  if (opt_time != '\0') {
    pcVar2 = _stdout->_IO_write_ptr;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '\t';
    }
    else {
      __overflow(_stdout,9);
    }
    cVar1 = show_date(time_format,param_1[2],param_1[3],localtz);
    __stream = _stdout;
    if (cVar1 == '\0') {
      pcVar2 = (char *)imaxtostr(param_1[2],auStack_38);
      fputs_unlocked(pcVar2,__stream);
    }
  }
  __printf_chk(2,"\t%s%c",param_2,-(opt_nul_terminate_output == '\0') & 10);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    fflush_unlocked(_stdout);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_a8;
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
    goto LAB_001001e9;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Summarize device usage of the set of FILEs, recursively for directories.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -0, --null            end each output line with NUL, not newline\n  -a, --all             write counts for all files, not just directories\n      --apparent-size   print apparent sizes rather than device usage; although\n                          the apparent size is usually smaller, it may be\n                          larger due to holes in (\'sparse\') files, internal\n                          fragmentation, indirect blocks, and the like\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -B, --block-size=SIZE  scale sizes by SIZE before printing them; e.g.,\n                           \'-BM\' prints sizes in units of 1,048,576 bytes;\n                           see SIZE format below\n  -b, --bytes           equivalent to \'--apparent-size --block-size=1\'\n  -c, --total           produce a grand total\n  -D, --dereference-args  dereference only symlinks that are listed on the\n                          command line\n  -d, --max-depth=N     print the total for a directory (or file, with --all)\n                          only if it is N or fewer levels below the command\n                          line argument;  --max-depth=0 is the same as\n                          --summarize\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --files0-from=F   summarize device usage of the\n                          NUL-terminated file names specified in file F;\n                          if F is -, then read names from standard input\n  -H                    equivalent to --dereference-args (-D)\n  -h, --human-readable  print sizes in human readable format (e.g., 1K 234M 2G)\n      --inodes          list inode usage information instead of block usage\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -k                    like --block-size=1K\n  -L, --dereference     dereference all symbolic links\n  -l, --count-links     count sizes many times if hard linked\n  -m                    like --block-size=1M\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -P, --no-dereference  don\'t follow any symbolic links (this is the default)\n  -S, --separate-dirs   for directories do not include size of subdirectories\n      --si              like -h, but use powers of 1000 not 1024\n  -s, --summarize       display only a total for each argument\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t, --threshold=SIZE  exclude entries smaller than SIZE if positive,\n                          or entries greater than SIZE if negative\n      --time            show time of the last modification of any file in the\n                          directory, or any of its subdirectories\n      --time=WORD       show time as WORD instead of modification time:\n                          atime, access, use, ctime or status\n      --time-style=STYLE  show times using STYLE, which can be:\n                            full-iso, long-iso, iso, or +FORMAT;\n                            FORMAT is interpreted like in \'date\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -X, --exclude-from=FILE  exclude files that match any pattern in FILE\n      --exclude=PATTERN    exclude files that match PATTERN\n  -x, --one-file-system    skip directories on different file systems\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nDisplay values are in units of the first available SIZE from --block-size,\nand the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC21);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC2;
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
    if (((*pcVar4 == 'd') && (pcVar4[1] == 'u')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC3;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010052c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC3);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010052c:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC3);
    if (puVar7 == &_LC3) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001001e9:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(uint param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  char *__s1;
  char *pcVar15;
  int *piVar16;
  long lVar17;
  undefined8 extraout_RDX;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  uint *puVar21;
  uint *puVar22;
  ushort uVar23;
  long lVar24;
  ulong uVar25;
  undefined **ppuVar26;
  undefined8 in_R9;
  undefined8 in_R10;
  long lVar27;
  uint *puVar28;
  undefined1 *puVar29;
  byte bVar30;
  char *pcVar31;
  bool bVar32;
  uint *puVar33;
  uint *puVar34;
  long in_FS_OFFSET;
  bool bVar35;
  ulong uVar36;
  ulong uVar37;
  uint *local_178;
  undefined8 local_170;
  uint local_164;
  uint *local_160;
  uint *local_158;
  uint local_138;
  byte local_131;
  uint *local_130;
  undefined8 *local_128;
  uint *local_120;
  uint local_10c;
  uint *local_108;
  uint *local_100;
  ulong local_f8;
  ulong uStack_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  stat local_d8;
  long local_40;
  
  puVar33 = (uint *)0x1;
  pcVar31 = "0abd:chHklmst:xB:DLPSX:";
  puVar29 = long_options;
  puVar28 = (uint *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = 0;
  puStack_e8 = &_LC38;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar21 = &switchD_00101e05::switchdataD_00103280;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  exclude = new_exclude();
  pcVar7 = getenv("DU_BLOCK_SIZE");
  human_options(pcVar7,&human_output_opts,&output_block_size);
  puVar22 = &local_10c;
  local_138 = local_138 & 0xffffff00;
  local_170 = 0x10;
  local_164 = 8;
  local_160 = (uint *)0x0;
  bVar35 = false;
LAB_00101dc0:
  local_10c = 0xffffffff;
  iVar5 = getopt_long(puVar28,param_2,"0abd:chHklmst:xB:DLPSX:",long_options,puVar22);
  bVar32 = SUB81(puVar33,0);
  local_178 = puVar22;
  if (iVar5 != -1) {
    if (0x86 < iVar5) {
switchD_00101e05_caseD_31:
      puVar33 = (uint *)0x0;
      goto LAB_00101dc0;
    }
    if (iVar5 < 0x30) {
      if (iVar5 == -0x83) {
        uVar8 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar9 = proper_name_lite("Paul Eggert","Paul Eggert");
        uVar10 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar11 = proper_name_lite("Torbjorn Granlund",&_LC51);
        version_etc(_stdout,&_LC3,"GNU coreutils",_Version,uVar11,uVar10,uVar9,uVar8,0,in_R9);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar5 != -0x82) goto switchD_00101e05_caseD_31;
      usage();
      uVar8 = extraout_RDX_01;
      goto LAB_00102e5a;
    }
    switch(iVar5) {
    default:
      goto switchD_00101e05_caseD_31;
    case 0x42:
      iVar5 = human_options(_optarg,&human_output_opts,&output_block_size);
      if (iVar5 == 0) break;
      xstrtol_fatal(iVar5,local_10c,0x42,long_options,_optarg);
    case 0x30:
      opt_nul_terminate_output = 1;
      break;
    case 0x44:
    case 0x48:
      local_170 = 0x11;
      break;
    case 0x4c:
      local_170 = 2;
      break;
    case 0x50:
      local_170 = 0x10;
      break;
    case 0x53:
      opt_separate_dirs = '\x01';
      break;
    case 0x58:
      iVar5 = add_exclude_file(add_exclude,exclude,_optarg,0x10000000,10);
      if (iVar5 != 0) {
        uVar8 = quotearg_n_style_colon(0,3,_optarg);
        piVar16 = __errno_location();
        puVar33 = (uint *)0x0;
        error(0,*piVar16,&_LC45,uVar8);
      }
      break;
    case 0x61:
      opt_all = '\x01';
      break;
    case 0x62:
      apparent_size = '\x01';
      human_output_opts = 0;
      output_block_size = 1;
      break;
    case 99:
      print_grand_total = '\x01';
      break;
    case 100:
      iVar5 = xstrtoimax(_optarg,0,0,&local_108,&_LC5);
      if (iVar5 == 0) {
        max_depth = local_108;
        bVar35 = true;
      }
      else {
        uVar8 = quote(_optarg);
        uVar9 = dcgettext(0,"invalid maximum depth %s",5);
        puVar33 = (uint *)0x0;
        error(0,0,uVar9,uVar8);
      }
      break;
    case 0x68:
      human_output_opts = 0xb0;
      output_block_size = 1;
      break;
    case 0x6b:
      output_block_size = 0x400;
      human_output_opts = 0;
      break;
    case 0x6c:
      opt_count_all = '\x01';
      break;
    case 0x6d:
      goto switchD_00101e05_caseD_6d;
    case 0x73:
      local_138 = CONCAT31(local_138._1_3_,1);
      break;
    case 0x74:
      iVar5 = xstrtoimax(_optarg,0,0,&opt_threshold,"kKmMGTPEZYRQ0");
      if (iVar5 != 0) {
        xstrtol_fatal(iVar5,local_10c,0x74,long_options,_optarg);
LAB_001030e9:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if ((opt_threshold == (uint *)0x0) && ((char)*_optarg == '-')) {
        uVar8 = dcgettext(0,"invalid --threshold argument \'-0\'",5);
        error(1,0,uVar8);
switchD_00101e05_caseD_6d:
        output_block_size = 0x100000;
        human_output_opts = 0;
      }
      break;
    case 0x78:
      local_164 = 0x48;
      break;
    case 0x80:
      apparent_size = '\x01';
      break;
    case 0x81:
      add_exclude(exclude,_optarg,0x10000000);
      break;
    case 0x82:
      local_160 = _optarg;
      break;
    case 0x83:
      human_output_opts = 0x90;
      output_block_size = 1;
      break;
    case 0x84:
      opt_time = '\x01';
      iVar5 = 0;
      if (_optarg != (uint *)0x0) {
        in_R9 = _argmatch_die;
        lVar12 = __xargmatch_internal
                           ("--time",_optarg,time_args,time_types,4,_argmatch_die,1,in_R10);
        iVar5 = *(int *)(time_types + lVar12 * 4);
      }
      time_type = iVar5;
      pcVar7 = getenv("TZ");
      localtz = tzalloc(pcVar7);
      break;
    case 0x85:
      time_style = (char *)_optarg;
      break;
    case 0x86:
      goto switchD_00101e05_caseD_86;
    }
    goto LAB_00101dc0;
  }
  if (bVar32 == false) {
LAB_00102f4c:
    usage(1);
LAB_00102f56:
    uVar8 = dcgettext(0,"warning: options --apparent-size and -b are ineffective with --inodes",5);
    error(0,0,uVar8);
    uVar8 = extraout_RDX_06;
    pcVar7 = (char *)puVar21;
LAB_001021e3:
    output_block_size = 1;
  }
  else {
    uVar8 = extraout_RDX;
    if (opt_all != '\0') {
      if ((char)local_138 == '\0') goto LAB_001021cd;
      uVar8 = dcgettext(0,"cannot both summarize and show all entries",5);
      error(0,0,uVar8);
      goto LAB_00102f4c;
    }
    if (bVar35) {
      if ((char)local_138 != '\0') {
        if (max_depth != (uint *)0x0) {
LAB_00102417:
          pcVar7 = (char *)max_depth;
          uVar8 = dcgettext(0,"warning: summarizing conflicts with --max-depth=%td",5);
          error(0,0,uVar8,pcVar7);
          usage(1);
          goto LAB_00102445;
        }
        uVar8 = dcgettext(0,"warning: summarizing is the same as using --max-depth=0",5);
        error(0,0,uVar8);
        uVar8 = extraout_RDX_00;
        puVar21 = max_depth;
        if (max_depth != (uint *)0x0) goto LAB_00102417;
LAB_00102b4b:
        max_depth = (uint *)0x0;
      }
    }
    else {
LAB_00102e5a:
      if ((char)local_138 != '\0') goto LAB_00102b4b;
    }
LAB_001021cd:
    pcVar7 = (char *)puVar21;
    if (opt_inodes != '\0') {
      if (apparent_size != '\0') goto LAB_00102f56;
      goto LAB_001021e3;
    }
  }
  if (opt_time != '\0') {
    __s1 = time_style;
    if ((uint *)time_style != (uint *)0x0) goto LAB_0010220c;
    __s1 = getenv("TIME_STYLE");
    uVar8 = extraout_RDX_02;
    if (((uint *)__s1 == (uint *)0x0) ||
       (time_style = __s1, iVar5 = strcmp(__s1,"locale"), uVar8 = extraout_RDX_03, iVar5 == 0)) {
      __s1 = "long-iso";
      time_style = "long-iso";
LAB_00102d00:
      lVar12 = __xargmatch_internal
                         ("time style",__s1,time_style_args,time_style_types,4,_argmatch_die,1,uVar8
                         );
      iVar5 = *(int *)(time_style_types + lVar12 * 4);
      pcVar7 = time_style_types;
      puVar29 = __s1;
      if (iVar5 == 1) {
        time_format = "%Y-%m-%d %H:%M";
      }
      else if (iVar5 == 2) {
        time_format = "%Y-%m-%d";
      }
      else if (iVar5 == 0) {
        time_format = "%Y-%m-%d %H:%M:%S.%N %z";
      }
    }
    else {
      pcVar7 = "posix-";
      if ((char)*(uint *)__s1 == '+') {
        pcVar15 = strchr(__s1,10);
        if (pcVar15 != (char *)0x0) {
          *pcVar15 = '\0';
          uVar8 = extraout_RDX_05;
          goto LAB_0010220c;
        }
      }
      else {
        while (__s1 = time_style, iVar5 = strncmp(time_style,"posix-",6), uVar8 = extraout_RDX_04,
              iVar5 == 0) {
          time_style = (char *)((long)__s1 + 6);
        }
LAB_0010220c:
        if ((char)*(uint *)__s1 != '+') goto LAB_00102d00;
      }
      puVar29 = (undefined1 *)((long)__s1 + 1);
      time_format = puVar29;
    }
  }
  lVar12 = (long)_optind;
  if (local_160 == (uint *)0x0) {
    ppuVar26 = &puStack_e8;
    if (_optind < (int)param_1) {
      ppuVar26 = (undefined **)(param_2 + lVar12);
    }
    param_2 = (undefined8 *)argv_iter_init_argv(ppuVar26);
    hash_all = _optind + 1 < (int)param_1 || (uint)local_170 == 2;
LAB_0010228a:
    puVar21 = puVar33;
    if (param_2 == (undefined8 *)0x0) goto LAB_00102c1f;
    di_files = di_set_alloc();
    if (di_files == 0) goto LAB_00102c1f;
    if ((opt_count_all != '\0') || (hash_all == '\0')) {
      local_164 = local_164 | 0x100;
    }
    uVar6 = local_164;
    local_164 = (uint)bVar32;
    local_138 = uVar6 | (uint)local_170;
    puVar21 = (uint *)puVar29;
    puVar34 = local_160;
LAB_001022f0:
    pcVar7 = (char *)argv_iter(param_2,puVar22);
    puVar29 = (undefined1 *)puVar21;
    pcVar31 = (char *)puVar33;
    if ((uint *)pcVar7 != (uint *)0x0) {
      if (puVar34 != (uint *)0x0) {
        do {
          bVar30 = (byte)puVar33;
          puVar28 = puVar22;
          puVar33 = puVar34;
          if (((((char)*puVar34 == '-') && (*(char *)((long)puVar34 + 1) == '\0')) &&
              ((char)*(uint *)pcVar7 == '-')) && (*(char *)((long)pcVar7 + 1) == '\0')) {
LAB_00102445:
            puVar29 = (undefined1 *)quotearg_style(4,pcVar7);
            uVar8 = dcgettext(0,"when reading file names from stdin, no file name of %s allowed",5);
            error(0,0,uVar8,puVar29);
            puVar22 = puVar28;
            puVar34 = puVar33;
            if ((char)*(uint *)pcVar7 == '\0') goto LAB_00102480;
          }
          else {
            if ((char)*(uint *)pcVar7 != '\0') goto LAB_0010250a;
LAB_00102480:
            uVar8 = argv_iter_n_args(param_2);
            puVar29 = (undefined1 *)dcgettext(0,"invalid zero-length file name",5);
            uVar9 = quotearg_n_style_colon(0,3,puVar33);
            error(0,0,"%s:%td: %s",uVar9,uVar8,puVar29);
            puVar22 = puVar28;
            puVar34 = puVar33;
          }
          pcVar7 = (char *)argv_iter(param_2,puVar22);
          if ((uint *)pcVar7 == (uint *)0x0) goto LAB_00102353;
          puVar33 = (uint *)0x0;
        } while( true );
      }
      do {
        bVar30 = (byte)puVar33;
        if ((char)*(uint *)pcVar7 != '\0') {
LAB_0010250a:
          local_131 = bVar30;
          temp_argv_3._0_8_ = pcVar7;
          local_178 = (uint *)xfts_open(temp_argv_3,local_138,0);
          puVar21 = (uint *)(ulong)(byte)local_164;
          local_130 = puVar34;
          local_128 = param_2;
          local_120 = puVar22;
          goto LAB_001025c2;
        }
        puVar33 = (uint *)0x0;
        uVar8 = dcgettext(0,"invalid zero-length file name",5);
        error(0,0,&_LC45,uVar8);
        pcVar7 = (char *)argv_iter(param_2,puVar22);
      } while ((uint *)pcVar7 != (uint *)0x0);
LAB_00102353:
      pcVar31 = (char *)0x0;
    }
    uVar6 = local_10c;
    if (local_10c != 2) goto LAB_00103173;
    do {
      argv_iter_free(param_2);
      di_set_free(di_files);
      if (di_mnt != 0) {
        di_set_free();
      }
      if (((local_160 == (uint *)0x0) ||
          (((*_stdin & 0x20) == 0 && (iVar5 = rpl_fclose(), iVar5 == 0)))) ||
         ((char)pcVar31 == '\0')) {
        if (print_grand_total != '\0') {
          uVar8 = dcgettext(0,"total",5);
          print_size(tot_dui,uVar8);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return ((uint)pcVar31 ^ 1) & 0xff;
        }
        goto LAB_001030e9;
      }
      pcVar7 = (char *)quotearg_style(4,local_160);
      uVar8 = dcgettext(0,"error reading %s",5);
      uVar6 = error(1,0,uVar8,pcVar7);
LAB_00103173:
      if (uVar6 < 2) {
LAB_00103253:
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unexpected error code from argv_iter\"","src/du.c",0x428,"main");
      }
      puVar21 = puVar34;
      if (uVar6 == 3) goto LAB_00102c1f;
      if (uVar6 != 4) goto LAB_00103253;
      pcVar31 = (char *)0x0;
      uVar8 = quotearg_n_style_colon(0,3,local_160);
      uVar9 = dcgettext(0,"%s: read error",5);
      piVar16 = __errno_location();
      error(0,*piVar16,uVar9,uVar8);
    } while( true );
  }
  if ((int)param_1 <= _optind) {
    iVar5 = strcmp((char *)local_160,"-");
    if ((iVar5 == 0) || (lVar12 = freopen_safer(local_160,&_LC67,_stdin), lVar12 != 0)) {
      param_2 = (undefined8 *)argv_iter_init_stream(_stdin);
      pcVar7 = (char *)local_160;
      hash_all = bVar32;
      goto LAB_0010228a;
    }
    param_2 = (undefined8 *)quotearg_style(4,local_160);
    uVar8 = dcgettext(0,"cannot open %s for reading",5);
    piVar16 = __errno_location();
    lVar12 = error(1,*piVar16,uVar8,param_2);
  }
  piVar16 = (int *)quote(param_2[lVar12]);
  uVar8 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar8,piVar16);
  uVar8 = dcgettext(0,"file operands cannot be combined with --files0-from",5);
  __fprintf_chk(_stderr,2,&_LC65,uVar8);
  usage(1);
  goto LAB_00103028;
switchD_00101e05_caseD_86:
  opt_inodes = '\x01';
  goto LAB_00101dc0;
LAB_00102c1f:
  xalloc_die();
  do {
    if (pcVar7 == pcVar31) break;
    iVar5 = di_set_lookup(di_mnt,*(undefined8 *)((long)pcVar31 + 0x70),
                          *(undefined8 *)((long)pcVar31 + 0x78));
    if (0 < iVar5) goto LAB_001025b9;
    pcVar31 = *(char **)((long)pcVar31 + 8);
LAB_00102c49:
  } while ((uint *)pcVar31 != (uint *)0x0);
  pcVar7 = (char *)quotearg_n_style_colon(0,3,local_170);
  uVar8 = dcgettext(0,
                    "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                    ,5);
  error(0,0,uVar8,pcVar7);
  local_158 = (uint *)puVar29;
LAB_001025bf:
  puVar21 = (uint *)(ulong)((uint)puVar21 & (uint)local_158);
LAB_001025c2:
  pcVar31 = (char *)rpl_fts_read(local_178);
  if ((uint *)pcVar31 != (uint *)0x0) {
    local_170 = *(undefined8 *)((long)pcVar31 + 0x38);
    uVar23 = (ushort)*(uint *)((long)pcVar31 + 0x68);
    if (uVar23 == 4) {
      uVar8 = quotearg_style(4,local_170);
      uVar9 = dcgettext(0,"cannot read directory %s",5);
      error(0,*(uint *)((long)pcVar31 + 0x40),uVar9,uVar8);
      local_158 = (uint *)0x0;
LAB_00102600:
      if (time_type == 0) {
        uVar36 = *(ulong *)((long)pcVar31 + 200);
        uVar37 = *(ulong *)((long)pcVar31 + 0xd0);
      }
      else if (time_type == 2) {
        uVar36 = *(ulong *)((long)pcVar31 + 0xb8);
        uVar37 = *(ulong *)((long)pcVar31 + 0xc0);
      }
      else {
        uVar36 = *(ulong *)((long)pcVar31 + 0xd8);
        uVar37 = *(ulong *)((long)pcVar31 + 0xe0);
      }
      if (apparent_size == '\0') {
        puVar22 = (uint *)(*(long *)((long)pcVar31 + 0xb0) << 9);
      }
      else {
        puVar22 = (uint *)0x0;
        if ((*(uint *)((long)pcVar31 + 0x88) & 0xd000) == 0x8000) {
          puVar22 = *(uint **)((long)pcVar31 + 0xa0);
          if ((long)*(uint **)((long)pcVar31 + 0xa0) < 0) {
            puVar22 = (uint *)0x0;
          }
        }
      }
      lVar12 = *(long *)((long)pcVar31 + 0x58);
      local_100 = (uint *)0x1;
      local_108 = puVar22;
      local_f8 = uVar36;
      uStack_f0 = uVar37;
      if (n_alloc_1 == 0) {
        n_alloc_1 = lVar12 + 10;
        dulvl_0 = xcalloc(n_alloc_1,0x40);
      }
      else if (lVar12 != prev_level) {
        if (prev_level < lVar12) {
          if (n_alloc_1 <= lVar12) {
            dulvl_0 = xpalloc(dulvl_0,&n_alloc_1,(lVar12 - n_alloc_1) + 1,0xffffffffffffffff,0x40);
          }
          uVar9 = _UNK_001037e8;
          uVar8 = __LC79;
          if (prev_level + 1 <= lVar12) {
            lVar18 = (prev_level + 1) * 0x40;
            lVar27 = dulvl_0 + lVar18;
            lVar24 = dulvl_0 + 0x10;
            lVar17 = dulvl_0 + 0x20;
            lVar20 = dulvl_0 + 0x30;
            lVar13 = 0;
            do {
              *(undefined1 (*) [16])(lVar27 + lVar13) = (undefined1  [16])0x0;
              puVar1 = (undefined8 *)(lVar24 + lVar18 + lVar13);
              *puVar1 = uVar8;
              puVar1[1] = uVar9;
              *(undefined1 (*) [16])(lVar17 + lVar18 + lVar13) = (undefined1  [16])0x0;
              puVar1 = (undefined8 *)(lVar20 + lVar18 + lVar13);
              *puVar1 = uVar8;
              puVar1[1] = uVar9;
              lVar13 = lVar13 + 0x40;
            } while (lVar13 != (lVar12 - prev_level) * 0x40);
          }
        }
        else {
          if (lVar12 != prev_level + -1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("level == prev_level - 1","src/du.c",0x268,"process_file");
          }
          puVar14 = (ulong *)(prev_level * 0x40 + dulvl_0);
          uVar25 = *puVar14;
          uVar2 = puVar14[2];
          local_108 = (uint *)0xffffffffffffffff;
          if (!CARRY8((ulong)puVar22,uVar25)) {
            local_108 = (uint *)((long)puVar22 + uVar25);
          }
          uVar3 = puVar14[3];
          local_100 = (uint *)(puVar14[1] + 1);
          if ((int)(((uint)((long)uVar3 < (long)uVar37) - (uint)((long)uVar37 < (long)uVar3)) +
                   ((uint)((long)uVar2 < (long)uVar36) - (uint)((long)uVar36 < (long)uVar2)) * 2) <
              0) {
            local_f8 = puVar14[2];
            uStack_f0 = puVar14[3];
          }
          if (opt_separate_dirs == '\0') {
            bVar35 = CARRY8((ulong)local_108,puVar14[4]);
            local_108 = (uint *)((long)local_108 + puVar14[4]);
            if (bVar35) {
              local_108 = (uint *)0xffffffffffffffff;
            }
            local_100 = (uint *)((long)local_100 + puVar14[5]);
            if ((int)(((uint)((long)puVar14[7] < (long)uStack_f0) -
                      (uint)((long)uStack_f0 < (long)puVar14[7])) +
                     ((uint)((long)puVar14[6] < (long)local_f8) -
                     (uint)((long)local_f8 < (long)puVar14[6])) * 2) < 0) {
              local_f8 = puVar14[6];
              uStack_f0 = puVar14[7];
            }
          }
          lVar24 = lVar12 * 0x40 + dulvl_0;
          uVar19 = uVar25 + *(ulong *)(lVar24 + 0x20);
          lVar27 = *(long *)(lVar24 + 0x38);
          if (CARRY8(uVar25,*(ulong *)(lVar24 + 0x20))) {
            uVar19 = 0xffffffffffffffff;
          }
          uVar25 = *(ulong *)(lVar24 + 0x30);
          lVar17 = puVar14[1] + *(long *)(lVar24 + 0x28);
          *(long *)(lVar24 + 0x28) = lVar17;
          *(ulong *)(lVar24 + 0x20) = uVar19;
          if ((int)(((uint)((long)uVar3 < lVar27) - (uint)(lVar27 < (long)uVar3)) +
                   ((uint)((long)uVar2 < (long)uVar25) - (uint)((long)uVar25 < (long)uVar2)) * 2) <
              0) {
            uVar2 = puVar14[3];
            uVar25 = puVar14[2];
            *(ulong *)(lVar24 + 0x30) = puVar14[2];
            *(ulong *)(lVar24 + 0x38) = uVar2;
            lVar27 = *(long *)(lVar24 + 0x38);
          }
          lVar20 = uVar19 + puVar14[4];
          if (CARRY8(uVar19,puVar14[4])) {
            lVar20 = -1;
          }
          *(ulong *)(lVar24 + 0x28) = lVar17 + puVar14[5];
          uVar2 = puVar14[6];
          *(long *)(lVar24 + 0x20) = lVar20;
          if ((int)(((uint)((long)puVar14[7] < lVar27) - (uint)(lVar27 < (long)puVar14[7])) +
                   ((uint)((long)uVar2 < (long)uVar25) - (uint)((long)uVar25 < (long)uVar2)) * 2) <
              0) {
            uVar25 = puVar14[7];
            *(ulong *)(lVar24 + 0x30) = puVar14[6];
            *(ulong *)(lVar24 + 0x38) = uVar25;
          }
        }
      }
      prev_level = lVar12;
      if ((opt_separate_dirs == '\0') || ((uVar23 & 0xfffd) != 4)) {
        puVar14 = (ulong *)(lVar12 * 0x40 + dulvl_0);
        pcVar31 = (char *)((long)puVar22 + *puVar14);
        if (CARRY8((ulong)puVar22,*puVar14)) {
          pcVar31 = (char *)0xffffffffffffffff;
        }
        puVar14[1] = puVar14[1] + 1;
        *puVar14 = (ulong)pcVar31;
        if ((int)(((uint)((long)uVar37 < (long)puVar14[3]) - (uint)((long)puVar14[3] < (long)uVar37)
                  ) + ((uint)((long)uVar36 < (long)puVar14[2]) -
                      (uint)((long)puVar14[2] < (long)uVar36)) * 2) < 0) {
          puVar14[2] = uVar36;
          puVar14[3] = uVar37;
        }
      }
      pcVar7 = (char *)((long)puVar22 + tot_dui._0_8_);
      if (CARRY8((ulong)puVar22,tot_dui._0_8_)) {
        pcVar7 = (char *)0xffffffffffffffff;
      }
      tot_dui._8_8_ = tot_dui._8_8_ + 1;
      if ((int)(((uint)((long)uVar37 < (long)tot_dui._24_8_) -
                (uint)((long)tot_dui._24_8_ < (long)uVar37)) +
               ((uint)((long)uVar36 < (long)tot_dui._16_8_) -
               (uint)((long)tot_dui._16_8_ < (long)uVar36)) * 2) < 0) {
        tot_dui._16_8_ = uVar36;
        tot_dui._24_8_ = uVar37;
      }
      tot_dui._0_8_ = pcVar7;
      if (((((uVar23 & 0xfffd) == 4) || (opt_all != '\0')) && (lVar12 <= (long)max_depth)) ||
         (lVar12 == 0)) {
        puVar22 = local_100;
        if (opt_inodes == '\0') {
          puVar22 = local_108;
        }
        if ((long)opt_threshold < 0) {
          if ((uint *)-(long)opt_threshold < puVar22) goto LAB_001025bf;
        }
        else if (puVar22 < opt_threshold) goto LAB_001025bf;
        print_size(&local_108,local_170);
      }
      goto LAB_001025bf;
    }
    local_158 = (uint *)(ulong)(byte)local_164;
    if (uVar23 == 6) goto LAB_00102600;
    uVar6 = excluded_file_name(exclude,local_170);
    puVar29 = (undefined1 *)(ulong)uVar6;
    if ((char)uVar6 != '\0') {
LAB_001025b0:
      if (uVar23 == 1) {
        rpl_fts_set(local_178,pcVar31,4);
        puVar22 = (uint *)rpl_fts_read(local_178);
        pcVar7 = (char *)local_178;
        if ((uint *)pcVar31 != puVar22) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("e == ent","src/du.c",0x21c,"process_file");
        }
      }
LAB_001025b9:
      local_158 = (uint *)(ulong)(byte)local_164;
      goto LAB_001025bf;
    }
    if (uVar23 == 0xb) {
      rpl_fts_set(local_178,pcVar31,1);
      puVar22 = (uint *)rpl_fts_read(local_178);
      if ((uint *)pcVar31 != puVar22) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("e == ent","src/du.c",0x1fb,"process_file");
      }
      uVar23 = (ushort)*(uint *)((long)pcVar31 + 0x68);
      pcVar7 = (char *)local_178;
    }
    bVar35 = uVar23 == 10 || uVar23 == 0xd;
    local_158 = (uint *)(ulong)bVar35;
    if (bVar35) {
      pcVar7 = (char *)quotearg_style(4,local_170);
      uVar8 = dcgettext(0,"cannot access %s",5);
      error(0,*(uint *)((long)pcVar31 + 0x40),uVar8,pcVar7);
      local_158 = (uint *)puVar29;
      goto LAB_001025bf;
    }
    if ((((local_178[0x12] & 0x40) != 0) && (0 < *(long *)((long)pcVar31 + 0x58))) &&
       (*(long *)(local_178 + 6) != *(long *)((long)pcVar31 + 0x70))) goto LAB_001025b0;
    if ((opt_count_all == '\0') &&
       ((hash_all != '\0' ||
        (((*(uint *)((long)pcVar31 + 0x88) & 0xf000) != 0x4000 &&
         (1 < *(ulong *)((long)pcVar31 + 0x80))))))) {
      iVar5 = di_set_insert(di_files,*(undefined8 *)((long)pcVar31 + 0x70),
                            *(undefined8 *)((long)pcVar31 + 0x78));
      if (iVar5 < 0) goto LAB_00102c1f;
      if (iVar5 == 0) goto LAB_001025b0;
    }
    if (uVar23 != 2) {
      if (uVar23 == 7) {
        uVar8 = quotearg_n_style_colon(0,3,local_170);
        error(0,*(uint *)((long)pcVar31 + 0x40),&_LC45,uVar8);
      }
      else {
        if (uVar23 == 1) goto LAB_001025b9;
        local_158 = (uint *)(ulong)(byte)local_164;
      }
      goto LAB_00102600;
    }
    cVar4 = cycle_warning_required(local_178,pcVar31);
    if (cVar4 == '\0') goto LAB_001025b9;
    pcVar7 = *(char **)pcVar31;
    if (di_mnt == 0) {
      di_mnt = di_set_alloc();
      if (di_mnt == 0) goto LAB_00102c1f;
      lVar12 = read_file_system_list();
      while (lVar12 != 0) {
        if ((((*(byte *)(lVar12 + 0x28) & 3) == 0) &&
            (iVar5 = stat(*(char **)(lVar12 + 8),&local_d8), iVar5 == 0)) &&
           (iVar5 = di_set_insert(di_mnt,local_d8.st_dev,local_d8.st_ino), iVar5 < 0))
        goto LAB_00102c1f;
        lVar12 = *(long *)(lVar12 + 0x30);
        free_mount_entry();
      }
    }
    goto LAB_00102c49;
  }
  piVar16 = __errno_location();
  pcVar31 = (char *)(ulong)local_131;
  uVar6 = (uint)local_131;
  if (*piVar16 != 0) {
    uVar8 = quotearg_n_style_colon(0,3,*(undefined8 *)(local_178 + 8));
    uVar9 = dcgettext(0,"fts_read failed: %s",5);
    puVar21 = (uint *)0x0;
    error(0,*piVar16,uVar9,uVar8);
  }
  prev_level = 0;
  iVar5 = rpl_fts_close(local_178);
  param_2 = local_128;
  puVar28 = local_120;
  puVar22 = local_120;
  puVar33 = local_130;
  puVar34 = local_130;
  if (iVar5 != 0) {
LAB_00103028:
    uVar6 = (uint)pcVar31;
    puVar21 = (uint *)0x0;
    uVar8 = dcgettext(0,"fts_close failed",5);
    error(0,*piVar16,uVar8);
    puVar22 = puVar28;
    puVar34 = puVar33;
  }
  puVar33 = (uint *)(ulong)(uVar6 & (uint)puVar21);
  goto LAB_001022f0;
}


