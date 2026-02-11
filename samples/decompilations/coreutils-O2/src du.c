
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
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  char *__s1;
  char *pcVar15;
  int *piVar16;
  undefined8 extraout_RDX;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  uint *puVar20;
  uint *puVar21;
  ushort uVar22;
  ulong uVar23;
  undefined **ppuVar24;
  undefined8 in_R9;
  undefined8 in_R10;
  uint *puVar25;
  undefined1 *puVar26;
  byte bVar27;
  char *pcVar28;
  bool bVar29;
  uint *puVar30;
  uint *puVar31;
  long in_FS_OFFSET;
  bool bVar32;
  ulong uVar33;
  ulong uVar34;
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
  
  puVar30 = (uint *)0x1;
  pcVar28 = "0abd:chHklmst:xB:DLPSX:";
  puVar26 = long_options;
  puVar25 = (uint *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = 0;
  puStack_e8 = &_LC38;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar20 = &switchD_00101e05::switchdataD_00103270;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  exclude = new_exclude();
  pcVar6 = getenv("DU_BLOCK_SIZE");
  human_options(pcVar6,&human_output_opts,&output_block_size);
  puVar21 = &local_10c;
  local_138 = local_138 & 0xffffff00;
  local_170 = 0x10;
  local_164 = 8;
  local_160 = (uint *)0x0;
  bVar32 = false;
LAB_00101dc0:
  local_10c = 0xffffffff;
  iVar4 = getopt_long(puVar25,param_2,"0abd:chHklmst:xB:DLPSX:",long_options,puVar21);
  bVar29 = SUB81(puVar30,0);
  local_178 = puVar21;
  if (iVar4 != -1) {
    if (0x86 < iVar4) {
switchD_00101e05_caseD_31:
      puVar30 = (uint *)0x0;
      goto LAB_00101dc0;
    }
    if (iVar4 < 0x30) {
      if (iVar4 == -0x83) {
        uVar7 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar8 = proper_name_lite("Paul Eggert","Paul Eggert");
        uVar9 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar10 = proper_name_lite("Torbjorn Granlund",&_LC51);
        version_etc(_stdout,&_LC3,"GNU coreutils",_Version,uVar10,uVar9,uVar8,uVar7,0,in_R9);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 != -0x82) goto switchD_00101e05_caseD_31;
      usage();
      uVar7 = extraout_RDX_01;
      goto LAB_00102e4a;
    }
    switch(iVar4) {
    default:
      goto switchD_00101e05_caseD_31;
    case 0x42:
      iVar4 = human_options(_optarg,&human_output_opts,&output_block_size);
      if (iVar4 == 0) break;
      xstrtol_fatal(iVar4,local_10c,0x42,long_options,_optarg);
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
      iVar4 = add_exclude_file(add_exclude,exclude,_optarg,0x10000000,10);
      if (iVar4 != 0) {
        uVar7 = quotearg_n_style_colon(0,3,_optarg);
        piVar16 = __errno_location();
        puVar30 = (uint *)0x0;
        error(0,*piVar16,&_LC45,uVar7);
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
      iVar4 = xstrtoimax(_optarg,0,0,&local_108,&_LC5);
      if (iVar4 == 0) {
        max_depth = local_108;
        bVar32 = true;
      }
      else {
        uVar7 = quote(_optarg);
        uVar8 = dcgettext(0,"invalid maximum depth %s",5);
        puVar30 = (uint *)0x0;
        error(0,0,uVar8,uVar7);
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
      iVar4 = xstrtoimax(_optarg,0,0,&opt_threshold,"kKmMGTPEZYRQ0");
      if (iVar4 != 0) {
        xstrtol_fatal(iVar4,local_10c,0x74,long_options,_optarg);
LAB_001030d9:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if ((opt_threshold == (uint *)0x0) && ((char)*_optarg == '-')) {
        uVar7 = dcgettext(0,"invalid --threshold argument \'-0\'",5);
        error(1,0,uVar7);
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
      iVar4 = 0;
      if (_optarg != (uint *)0x0) {
        in_R9 = _argmatch_die;
        lVar11 = __xargmatch_internal
                           ("--time",_optarg,time_args,time_types,4,_argmatch_die,1,in_R10);
        iVar4 = *(int *)(time_types + lVar11 * 4);
      }
      time_type = iVar4;
      pcVar6 = getenv("TZ");
      localtz = tzalloc(pcVar6);
      break;
    case 0x85:
      time_style = (char *)_optarg;
      break;
    case 0x86:
      goto switchD_00101e05_caseD_86;
    }
    goto LAB_00101dc0;
  }
  if (bVar29 == false) {
LAB_00102f3c:
    usage(1);
LAB_00102f46:
    uVar7 = dcgettext(0,"warning: options --apparent-size and -b are ineffective with --inodes",5);
    error(0,0,uVar7);
    uVar7 = extraout_RDX_06;
    pcVar6 = (char *)puVar20;
LAB_001021e3:
    output_block_size = 1;
  }
  else {
    uVar7 = extraout_RDX;
    if (opt_all != '\0') {
      if ((char)local_138 == '\0') goto LAB_001021cd;
      uVar7 = dcgettext(0,"cannot both summarize and show all entries",5);
      error(0,0,uVar7);
      goto LAB_00102f3c;
    }
    if (bVar32) {
      if ((char)local_138 != '\0') {
        if (max_depth != (uint *)0x0) {
LAB_00102417:
          pcVar6 = (char *)max_depth;
          uVar7 = dcgettext(0,"warning: summarizing conflicts with --max-depth=%td",5);
          error(0,0,uVar7,pcVar6);
          usage(1);
          goto LAB_00102445;
        }
        uVar7 = dcgettext(0,"warning: summarizing is the same as using --max-depth=0",5);
        error(0,0,uVar7);
        uVar7 = extraout_RDX_00;
        puVar20 = max_depth;
        if (max_depth != (uint *)0x0) goto LAB_00102417;
LAB_00102b3b:
        max_depth = (uint *)0x0;
      }
    }
    else {
LAB_00102e4a:
      if ((char)local_138 != '\0') goto LAB_00102b3b;
    }
LAB_001021cd:
    pcVar6 = (char *)puVar20;
    if (opt_inodes != '\0') {
      if (apparent_size != '\0') goto LAB_00102f46;
      goto LAB_001021e3;
    }
  }
  if (opt_time != '\0') {
    __s1 = time_style;
    if ((uint *)time_style != (uint *)0x0) goto LAB_0010220c;
    __s1 = getenv("TIME_STYLE");
    uVar7 = extraout_RDX_02;
    if (((uint *)__s1 == (uint *)0x0) ||
       (time_style = __s1, iVar4 = strcmp(__s1,"locale"), uVar7 = extraout_RDX_03, iVar4 == 0)) {
      __s1 = "long-iso";
      time_style = "long-iso";
LAB_00102cf0:
      lVar11 = __xargmatch_internal
                         ("time style",__s1,time_style_args,time_style_types,4,_argmatch_die,1,uVar7
                         );
      iVar4 = *(int *)(time_style_types + lVar11 * 4);
      pcVar6 = time_style_types;
      puVar26 = __s1;
      if (iVar4 == 1) {
        time_format = "%Y-%m-%d %H:%M";
      }
      else if (iVar4 == 2) {
        time_format = "%Y-%m-%d";
      }
      else if (iVar4 == 0) {
        time_format = "%Y-%m-%d %H:%M:%S.%N %z";
      }
    }
    else {
      pcVar6 = "posix-";
      if ((char)*(uint *)__s1 == '+') {
        pcVar15 = strchr(__s1,10);
        if (pcVar15 != (char *)0x0) {
          *pcVar15 = '\0';
          uVar7 = extraout_RDX_05;
          goto LAB_0010220c;
        }
      }
      else {
        while (__s1 = time_style, iVar4 = strncmp(time_style,"posix-",6), uVar7 = extraout_RDX_04,
              iVar4 == 0) {
          time_style = (char *)((long)__s1 + 6);
        }
LAB_0010220c:
        if ((char)*(uint *)__s1 != '+') goto LAB_00102cf0;
      }
      puVar26 = (undefined1 *)((long)__s1 + 1);
      time_format = puVar26;
    }
  }
  lVar11 = (long)_optind;
  if (local_160 == (uint *)0x0) {
    ppuVar24 = &puStack_e8;
    if (_optind < (int)param_1) {
      ppuVar24 = (undefined **)(param_2 + lVar11);
    }
    param_2 = (undefined8 *)argv_iter_init_argv(ppuVar24);
    hash_all = _optind + 1 < (int)param_1 || (uint)local_170 == 2;
LAB_0010228a:
    puVar20 = puVar30;
    if (param_2 == (undefined8 *)0x0) goto LAB_00102c0f;
    di_files = di_set_alloc();
    if (di_files == 0) goto LAB_00102c0f;
    if ((opt_count_all != '\0') || (hash_all == '\0')) {
      local_164 = local_164 | 0x100;
    }
    uVar5 = local_164;
    local_164 = (uint)bVar29;
    local_138 = uVar5 | (uint)local_170;
    puVar20 = (uint *)puVar26;
    puVar31 = local_160;
LAB_001022f0:
    pcVar6 = (char *)argv_iter(param_2,puVar21);
    puVar26 = (undefined1 *)puVar20;
    pcVar28 = (char *)puVar30;
    if ((uint *)pcVar6 != (uint *)0x0) {
      if (puVar31 != (uint *)0x0) {
        do {
          bVar27 = (byte)puVar30;
          puVar25 = puVar21;
          puVar30 = puVar31;
          if (((((char)*puVar31 == '-') && (*(char *)((long)puVar31 + 1) == '\0')) &&
              ((char)*(uint *)pcVar6 == '-')) && (*(char *)((long)pcVar6 + 1) == '\0')) {
LAB_00102445:
            puVar26 = (undefined1 *)quotearg_style(4,pcVar6);
            uVar7 = dcgettext(0,"when reading file names from stdin, no file name of %s allowed",5);
            error(0,0,uVar7,puVar26);
            puVar21 = puVar25;
            puVar31 = puVar30;
            if ((char)*(uint *)pcVar6 == '\0') goto LAB_00102480;
          }
          else {
            if ((char)*(uint *)pcVar6 != '\0') goto LAB_0010250a;
LAB_00102480:
            uVar7 = argv_iter_n_args(param_2);
            puVar26 = (undefined1 *)dcgettext(0,"invalid zero-length file name",5);
            uVar8 = quotearg_n_style_colon(0,3,puVar30);
            error(0,0,"%s:%td: %s",uVar8,uVar7,puVar26);
            puVar21 = puVar25;
            puVar31 = puVar30;
          }
          pcVar6 = (char *)argv_iter(param_2,puVar21);
          if ((uint *)pcVar6 == (uint *)0x0) goto LAB_00102353;
          puVar30 = (uint *)0x0;
        } while( true );
      }
      do {
        bVar27 = (byte)puVar30;
        if ((char)*(uint *)pcVar6 != '\0') {
LAB_0010250a:
          local_131 = bVar27;
          temp_argv_3._0_8_ = pcVar6;
          local_178 = (uint *)xfts_open(temp_argv_3,local_138,0);
          puVar20 = (uint *)(ulong)(byte)local_164;
          local_130 = puVar31;
          local_128 = param_2;
          local_120 = puVar21;
          goto LAB_001025c2;
        }
        puVar30 = (uint *)0x0;
        uVar7 = dcgettext(0,"invalid zero-length file name",5);
        error(0,0,&_LC45,uVar7);
        pcVar6 = (char *)argv_iter(param_2,puVar21);
      } while ((uint *)pcVar6 != (uint *)0x0);
LAB_00102353:
      pcVar28 = (char *)0x0;
    }
    uVar5 = local_10c;
    if (local_10c != 2) goto LAB_00103163;
    do {
      argv_iter_free(param_2);
      di_set_free(di_files);
      if (di_mnt != 0) {
        di_set_free();
      }
      if (((local_160 == (uint *)0x0) ||
          (((*_stdin & 0x20) == 0 && (iVar4 = rpl_fclose(), iVar4 == 0)))) ||
         ((char)pcVar28 == '\0')) {
        if (print_grand_total != '\0') {
          uVar7 = dcgettext(0,"total",5);
          print_size(tot_dui,uVar7);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return ((uint)pcVar28 ^ 1) & 0xff;
        }
        goto LAB_001030d9;
      }
      pcVar6 = (char *)quotearg_style(4,local_160);
      uVar7 = dcgettext(0,"error reading %s",5);
      uVar5 = error(1,0,uVar7,pcVar6);
LAB_00103163:
      if (uVar5 < 2) {
LAB_00103243:
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unexpected error code from argv_iter\"","src/du.c",0x428,"main");
      }
      puVar20 = puVar31;
      if (uVar5 == 3) goto LAB_00102c0f;
      if (uVar5 != 4) goto LAB_00103243;
      pcVar28 = (char *)0x0;
      uVar7 = quotearg_n_style_colon(0,3,local_160);
      uVar8 = dcgettext(0,"%s: read error",5);
      piVar16 = __errno_location();
      error(0,*piVar16,uVar8,uVar7);
    } while( true );
  }
  if ((int)param_1 <= _optind) {
    iVar4 = strcmp((char *)local_160,"-");
    if ((iVar4 == 0) || (lVar11 = freopen_safer(local_160,&_LC67,_stdin), lVar11 != 0)) {
      param_2 = (undefined8 *)argv_iter_init_stream(_stdin);
      pcVar6 = (char *)local_160;
      hash_all = bVar29;
      goto LAB_0010228a;
    }
    param_2 = (undefined8 *)quotearg_style(4,local_160);
    uVar7 = dcgettext(0,"cannot open %s for reading",5);
    piVar16 = __errno_location();
    lVar11 = error(1,*piVar16,uVar7,param_2);
  }
  piVar16 = (int *)quote(param_2[lVar11]);
  uVar7 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar7,piVar16);
  uVar7 = dcgettext(0,"file operands cannot be combined with --files0-from",5);
  __fprintf_chk(_stderr,2,&_LC65,uVar7);
  usage(1);
  goto LAB_00103018;
switchD_00101e05_caseD_86:
  opt_inodes = '\x01';
  goto LAB_00101dc0;
LAB_00102c0f:
  xalloc_die();
  do {
    if (pcVar6 == pcVar28) break;
    iVar4 = di_set_lookup(di_mnt,*(undefined8 *)((long)pcVar28 + 0x70),
                          *(undefined8 *)((long)pcVar28 + 0x78));
    if (0 < iVar4) goto LAB_001025b9;
    pcVar28 = *(char **)((long)pcVar28 + 8);
LAB_00102c39:
  } while ((uint *)pcVar28 != (uint *)0x0);
  pcVar6 = (char *)quotearg_n_style_colon(0,3,local_170);
  uVar7 = dcgettext(0,
                    "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                    ,5);
  error(0,0,uVar7,pcVar6);
  local_158 = (uint *)puVar26;
LAB_001025bf:
  puVar20 = (uint *)(ulong)((uint)puVar20 & (uint)local_158);
LAB_001025c2:
  pcVar28 = (char *)rpl_fts_read(local_178);
  if ((uint *)pcVar28 != (uint *)0x0) {
    local_170 = *(undefined8 *)((long)pcVar28 + 0x38);
    uVar22 = (ushort)*(uint *)((long)pcVar28 + 0x68);
    if (uVar22 == 4) {
      uVar7 = quotearg_style(4,local_170);
      uVar8 = dcgettext(0,"cannot read directory %s",5);
      error(0,*(uint *)((long)pcVar28 + 0x40),uVar8,uVar7);
      local_158 = (uint *)0x0;
LAB_00102600:
      if (time_type == 0) {
        uVar33 = *(ulong *)((long)pcVar28 + 200);
        uVar34 = *(ulong *)((long)pcVar28 + 0xd0);
      }
      else if (time_type == 2) {
        uVar33 = *(ulong *)((long)pcVar28 + 0xb8);
        uVar34 = *(ulong *)((long)pcVar28 + 0xc0);
      }
      else {
        uVar33 = *(ulong *)((long)pcVar28 + 0xd8);
        uVar34 = *(ulong *)((long)pcVar28 + 0xe0);
      }
      if (apparent_size == '\0') {
        puVar21 = (uint *)(*(long *)((long)pcVar28 + 0xb0) << 9);
      }
      else {
        puVar21 = (uint *)0x0;
        if ((*(uint *)((long)pcVar28 + 0x88) & 0xd000) == 0x8000) {
          puVar21 = *(uint **)((long)pcVar28 + 0xa0);
          if ((long)*(uint **)((long)pcVar28 + 0xa0) < 0) {
            puVar21 = (uint *)0x0;
          }
        }
      }
      lVar11 = *(long *)((long)pcVar28 + 0x58);
      local_100 = (uint *)0x1;
      local_108 = puVar21;
      local_f8 = uVar33;
      uStack_f0 = uVar34;
      if (n_alloc_1 == 0) {
        n_alloc_1 = lVar11 + 10;
        dulvl_0 = xcalloc(n_alloc_1,0x40);
      }
      else if (lVar11 != prev_level) {
        if (prev_level < lVar11) {
          if (n_alloc_1 <= lVar11) {
            dulvl_0 = xpalloc(dulvl_0,&n_alloc_1,(lVar11 - n_alloc_1) + 1,0xffffffffffffffff,0x40);
          }
          uVar8 = _UNK_001037c8;
          uVar7 = __LC79;
          if (prev_level + 1 <= lVar11) {
            lVar17 = dulvl_0 + lVar11 * 0x40;
            lVar12 = prev_level * 0x40 + dulvl_0;
            do {
              *(undefined1 (*) [16])(lVar12 + 0x40) = (undefined1  [16])0x0;
              lVar13 = lVar12 + 0x40;
              *(undefined8 *)(lVar12 + 0x50) = uVar7;
              *(undefined8 *)(lVar12 + 0x58) = uVar8;
              *(undefined1 (*) [16])(lVar12 + 0x60) = (undefined1  [16])0x0;
              *(undefined8 *)(lVar12 + 0x70) = uVar7;
              *(undefined8 *)(lVar12 + 0x78) = uVar8;
              lVar12 = lVar13;
            } while (lVar13 != lVar17);
          }
        }
        else {
          if (lVar11 != prev_level + -1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("level == prev_level - 1","src/du.c",0x268,"process_file");
          }
          puVar14 = (ulong *)(prev_level * 0x40 + dulvl_0);
          uVar23 = *puVar14;
          uVar1 = puVar14[2];
          local_108 = (uint *)0xffffffffffffffff;
          if (!CARRY8((ulong)puVar21,uVar23)) {
            local_108 = (uint *)((long)puVar21 + uVar23);
          }
          uVar2 = puVar14[3];
          local_100 = (uint *)(puVar14[1] + 1);
          if ((int)(((uint)((long)uVar2 < (long)uVar34) - (uint)((long)uVar34 < (long)uVar2)) +
                   ((uint)((long)uVar1 < (long)uVar33) - (uint)((long)uVar33 < (long)uVar1)) * 2) <
              0) {
            local_f8 = puVar14[2];
            uStack_f0 = puVar14[3];
          }
          if (opt_separate_dirs == '\0') {
            bVar32 = CARRY8((ulong)local_108,puVar14[4]);
            local_108 = (uint *)((long)local_108 + puVar14[4]);
            if (bVar32) {
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
          lVar17 = lVar11 * 0x40 + dulvl_0;
          uVar18 = uVar23 + *(ulong *)(lVar17 + 0x20);
          lVar12 = *(long *)(lVar17 + 0x38);
          if (CARRY8(uVar23,*(ulong *)(lVar17 + 0x20))) {
            uVar18 = 0xffffffffffffffff;
          }
          uVar23 = *(ulong *)(lVar17 + 0x30);
          lVar13 = puVar14[1] + *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar13;
          *(ulong *)(lVar17 + 0x20) = uVar18;
          if ((int)(((uint)((long)uVar2 < lVar12) - (uint)(lVar12 < (long)uVar2)) +
                   ((uint)((long)uVar1 < (long)uVar23) - (uint)((long)uVar23 < (long)uVar1)) * 2) <
              0) {
            uVar1 = puVar14[3];
            uVar23 = puVar14[2];
            *(ulong *)(lVar17 + 0x30) = puVar14[2];
            *(ulong *)(lVar17 + 0x38) = uVar1;
            lVar12 = *(long *)(lVar17 + 0x38);
          }
          lVar19 = uVar18 + puVar14[4];
          if (CARRY8(uVar18,puVar14[4])) {
            lVar19 = -1;
          }
          *(ulong *)(lVar17 + 0x28) = lVar13 + puVar14[5];
          uVar1 = puVar14[6];
          *(long *)(lVar17 + 0x20) = lVar19;
          if ((int)(((uint)((long)puVar14[7] < lVar12) - (uint)(lVar12 < (long)puVar14[7])) +
                   ((uint)((long)uVar1 < (long)uVar23) - (uint)((long)uVar23 < (long)uVar1)) * 2) <
              0) {
            uVar23 = puVar14[7];
            *(ulong *)(lVar17 + 0x30) = puVar14[6];
            *(ulong *)(lVar17 + 0x38) = uVar23;
          }
        }
      }
      prev_level = lVar11;
      if ((opt_separate_dirs == '\0') || ((uVar22 & 0xfffd) != 4)) {
        puVar14 = (ulong *)(lVar11 * 0x40 + dulvl_0);
        pcVar28 = (char *)((long)puVar21 + *puVar14);
        if (CARRY8((ulong)puVar21,*puVar14)) {
          pcVar28 = (char *)0xffffffffffffffff;
        }
        puVar14[1] = puVar14[1] + 1;
        *puVar14 = (ulong)pcVar28;
        if ((int)(((uint)((long)uVar34 < (long)puVar14[3]) - (uint)((long)puVar14[3] < (long)uVar34)
                  ) + ((uint)((long)uVar33 < (long)puVar14[2]) -
                      (uint)((long)puVar14[2] < (long)uVar33)) * 2) < 0) {
          puVar14[2] = uVar33;
          puVar14[3] = uVar34;
        }
      }
      pcVar6 = (char *)((long)puVar21 + tot_dui._0_8_);
      if (CARRY8((ulong)puVar21,tot_dui._0_8_)) {
        pcVar6 = (char *)0xffffffffffffffff;
      }
      tot_dui._8_8_ = tot_dui._8_8_ + 1;
      if ((int)(((uint)((long)uVar34 < (long)tot_dui._24_8_) -
                (uint)((long)tot_dui._24_8_ < (long)uVar34)) +
               ((uint)((long)uVar33 < (long)tot_dui._16_8_) -
               (uint)((long)tot_dui._16_8_ < (long)uVar33)) * 2) < 0) {
        tot_dui._16_8_ = uVar33;
        tot_dui._24_8_ = uVar34;
      }
      tot_dui._0_8_ = pcVar6;
      if (((((uVar22 & 0xfffd) == 4) || (opt_all != '\0')) && (lVar11 <= (long)max_depth)) ||
         (lVar11 == 0)) {
        puVar21 = local_100;
        if (opt_inodes == '\0') {
          puVar21 = local_108;
        }
        if ((long)opt_threshold < 0) {
          if ((uint *)-(long)opt_threshold < puVar21) goto LAB_001025bf;
        }
        else if (puVar21 < opt_threshold) goto LAB_001025bf;
        print_size(&local_108,local_170);
      }
      goto LAB_001025bf;
    }
    local_158 = (uint *)(ulong)(byte)local_164;
    if (uVar22 == 6) goto LAB_00102600;
    uVar5 = excluded_file_name(exclude,local_170);
    puVar26 = (undefined1 *)(ulong)uVar5;
    if ((char)uVar5 != '\0') {
LAB_001025b0:
      if (uVar22 == 1) {
        rpl_fts_set(local_178,pcVar28,4);
        puVar21 = (uint *)rpl_fts_read(local_178);
        pcVar6 = (char *)local_178;
        if ((uint *)pcVar28 != puVar21) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("e == ent","src/du.c",0x21c,"process_file");
        }
      }
LAB_001025b9:
      local_158 = (uint *)(ulong)(byte)local_164;
      goto LAB_001025bf;
    }
    if (uVar22 == 0xb) {
      rpl_fts_set(local_178,pcVar28,1);
      puVar21 = (uint *)rpl_fts_read(local_178);
      if ((uint *)pcVar28 != puVar21) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("e == ent","src/du.c",0x1fb,"process_file");
      }
      uVar22 = (ushort)*(uint *)((long)pcVar28 + 0x68);
      pcVar6 = (char *)local_178;
    }
    bVar32 = uVar22 == 10 || uVar22 == 0xd;
    local_158 = (uint *)(ulong)bVar32;
    if (bVar32) {
      pcVar6 = (char *)quotearg_style(4,local_170);
      uVar7 = dcgettext(0,"cannot access %s",5);
      error(0,*(uint *)((long)pcVar28 + 0x40),uVar7,pcVar6);
      local_158 = (uint *)puVar26;
      goto LAB_001025bf;
    }
    if ((((local_178[0x12] & 0x40) != 0) && (0 < *(long *)((long)pcVar28 + 0x58))) &&
       (*(long *)(local_178 + 6) != *(long *)((long)pcVar28 + 0x70))) goto LAB_001025b0;
    if ((opt_count_all == '\0') &&
       ((hash_all != '\0' ||
        (((*(uint *)((long)pcVar28 + 0x88) & 0xf000) != 0x4000 &&
         (1 < *(ulong *)((long)pcVar28 + 0x80))))))) {
      iVar4 = di_set_insert(di_files,*(undefined8 *)((long)pcVar28 + 0x70),
                            *(undefined8 *)((long)pcVar28 + 0x78));
      if (iVar4 < 0) goto LAB_00102c0f;
      if (iVar4 == 0) goto LAB_001025b0;
    }
    if (uVar22 != 2) {
      if (uVar22 == 7) {
        uVar7 = quotearg_n_style_colon(0,3,local_170);
        error(0,*(uint *)((long)pcVar28 + 0x40),&_LC45,uVar7);
      }
      else {
        if (uVar22 == 1) goto LAB_001025b9;
        local_158 = (uint *)(ulong)(byte)local_164;
      }
      goto LAB_00102600;
    }
    cVar3 = cycle_warning_required(local_178,pcVar28);
    if (cVar3 == '\0') goto LAB_001025b9;
    pcVar6 = *(char **)pcVar28;
    if (di_mnt == 0) {
      di_mnt = di_set_alloc();
      if (di_mnt == 0) goto LAB_00102c0f;
      lVar11 = read_file_system_list();
      while (lVar11 != 0) {
        if ((((*(byte *)(lVar11 + 0x28) & 3) == 0) &&
            (iVar4 = stat(*(char **)(lVar11 + 8),&local_d8), iVar4 == 0)) &&
           (iVar4 = di_set_insert(di_mnt,local_d8.st_dev,local_d8.st_ino), iVar4 < 0))
        goto LAB_00102c0f;
        lVar11 = *(long *)(lVar11 + 0x30);
        free_mount_entry();
      }
    }
    goto LAB_00102c39;
  }
  piVar16 = __errno_location();
  pcVar28 = (char *)(ulong)local_131;
  uVar5 = (uint)local_131;
  if (*piVar16 != 0) {
    uVar7 = quotearg_n_style_colon(0,3,*(undefined8 *)(local_178 + 8));
    uVar8 = dcgettext(0,"fts_read failed: %s",5);
    puVar20 = (uint *)0x0;
    error(0,*piVar16,uVar8,uVar7);
  }
  prev_level = 0;
  iVar4 = rpl_fts_close(local_178);
  param_2 = local_128;
  puVar25 = local_120;
  puVar21 = local_120;
  puVar30 = local_130;
  puVar31 = local_130;
  if (iVar4 != 0) {
LAB_00103018:
    uVar5 = (uint)pcVar28;
    puVar20 = (uint *)0x0;
    uVar7 = dcgettext(0,"fts_close failed",5);
    error(0,*piVar16,uVar7);
    puVar21 = puVar25;
    puVar31 = puVar30;
  }
  puVar30 = (uint *)(ulong)(uVar5 & (uint)puVar20);
  goto LAB_001022f0;
}


