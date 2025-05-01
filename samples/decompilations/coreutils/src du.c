
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void print_only_size(uintmax_t n_bytes)

{
  long lVar1;
  FILE *__stream;
  char *__s;
  long in_FS_OFFSET;
  char buf [652];
  
  __stream = _stdout;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n_bytes == 0xffffffffffffffff) {
    __s = (char *)dcgettext(0,"Infinity",5);
  }
  else {
    __s = (char *)human_readable(n_bytes,buf,human_output_opts,1,output_block_size);
  }
  fputs_unlocked(__s,__stream);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void print_size(duinfo *pdui,char *string)

{
  long lVar1;
  FILE *__stream;
  char cVar2;
  char *pcVar3;
  uintmax_t n_bytes;
  long in_FS_OFFSET;
  char buf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  n_bytes = pdui->inodes;
  if (!opt_inodes) {
    n_bytes = pdui->size;
  }
  print_only_size(n_bytes);
  if (opt_time != false) {
    pcVar3 = _stdout->_IO_write_ptr;
    if (pcVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = '\t';
    }
    else {
      __overflow(_stdout,9);
    }
    cVar2 = show_date(time_format,(pdui->tmax).tv_sec,(pdui->tmax).tv_nsec,localtz);
    __stream = _stdout;
    if (cVar2 == '\0') {
      pcVar3 = (char *)imaxtostr((pdui->tmax).tv_sec,buf);
      fputs_unlocked(pcVar3,__stream);
    }
  }
  __printf_chk(2,"\t%s%c",string,-(opt_nul_terminate_output == false) & 10);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    fflush_unlocked(_stdout);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  undefined1 *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
    if (((*pcVar4 == 'd') && (pcVar4[1] == 'u')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  time_style tVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  idx_t iVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  time_type tVar13;
  uint uVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  option *poVar25;
  char *pcVar26;
  int *piVar27;
  undefined8 extraout_RDX;
  long lVar28;
  ulong uVar29;
  long lVar30;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  char *pcVar31;
  ushort uVar32;
  char **ppcVar33;
  undefined8 in_R9;
  undefined8 in_R10;
  option *poVar34;
  char *pcVar35;
  _Bool _Var36;
  option *poVar37;
  option *poVar38;
  long in_FS_OFFSET;
  bool bVar39;
  timespec tVar40;
  option *local_178;
  char *local_170;
  uint local_164;
  option *local_160;
  option *local_158;
  uint local_138;
  byte local_131;
  option *local_130;
  long local_128;
  option *local_120;
  int oi;
  intmax_t tmp;
  ulong local_100;
  timespec tStack_f8;
  char *cwd_only [2];
  stat buf;
  long lVar41;
  
  poVar37 = (option *)0x1;
  pcVar35 = "0abd:chHklmst:xB:DLPSX:";
  poVar34 = long_options;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  cwd_only[1] = (char *)0x0;
  cwd_only[0] = ".";
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  exclude = (exclude *)new_exclude();
  pcVar15 = getenv("DU_BLOCK_SIZE");
  human_options(pcVar15,&human_output_opts,&output_block_size);
  local_178 = (option *)&oi;
  local_138 = local_138 & 0xffffff00;
  local_170 = (char *)0x10;
  local_164 = 8;
  local_160 = (option *)0x0;
  bVar39 = false;
LAB_00101dc0:
  oi = -1;
  iVar12 = getopt_long(argc,argv,"0abd:chHklmst:xB:DLPSX:",long_options,local_178);
  if (iVar12 != -1) {
    if (0x86 < iVar12) {
switchD_00101e05_caseD_31:
      poVar37 = (option *)0x0;
      goto LAB_00101dc0;
    }
    if (iVar12 < 0x30) {
      if (iVar12 == -0x83) {
        uVar16 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar17 = proper_name_lite("Paul Eggert","Paul Eggert");
        uVar18 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar19 = proper_name_lite("Torbjorn Granlund",&_LC51);
        version_etc(_stdout,&_LC3,"GNU coreutils",_Version,uVar19,uVar18,uVar17,uVar16,0,in_R9);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar12 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00101e05_caseD_31;
    }
    switch(iVar12) {
    default:
      goto switchD_00101e05_caseD_31;
    case 0x42:
      iVar12 = human_options(_optarg,&human_output_opts,&output_block_size);
      if (iVar12 == 0) break;
      xstrtol_fatal(iVar12,oi,0x42,long_options,_optarg);
    case 0x30:
      opt_nul_terminate_output = true;
      break;
    case 0x44:
    case 0x48:
      local_170 = (char *)0x11;
      break;
    case 0x4c:
      local_170 = (char *)0x2;
      break;
    case 0x50:
      local_170 = (char *)0x10;
      break;
    case 0x53:
      opt_separate_dirs = true;
      break;
    case 0x58:
      iVar12 = add_exclude_file(add_exclude,exclude,_optarg,0x10000000,10);
      if (iVar12 != 0) {
        uVar16 = quotearg_n_style_colon(0,3,_optarg);
        piVar27 = __errno_location();
        poVar37 = (option *)0x0;
        error(0,*piVar27,&_LC45,uVar16);
      }
      break;
    case 0x61:
      opt_all = true;
      break;
    case 0x62:
      apparent_size = true;
      human_output_opts = 0;
      output_block_size = 1;
      break;
    case 99:
      print_grand_total = true;
      break;
    case 100:
      iVar12 = xstrtoimax(_optarg,0,0,&tmp,&_LC5);
      if (iVar12 == 0) {
        max_depth = tmp;
        bVar39 = true;
      }
      else {
        uVar16 = quote(_optarg);
        uVar17 = dcgettext(0,"invalid maximum depth %s",5);
        poVar37 = (option *)0x0;
        error(0,0,uVar17,uVar16);
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
      opt_count_all = true;
      break;
    case 0x6d:
      goto switchD_00101e05_caseD_6d;
    case 0x73:
      local_138 = CONCAT31(local_138._1_3_,1);
      break;
    case 0x74:
      iVar12 = xstrtoimax(_optarg,0,0,&opt_threshold,"kKmMGTPEZYRQ0");
      if (iVar12 != 0) {
        xstrtol_fatal(iVar12,oi,0x74,long_options,_optarg);
        goto LAB_001030d9;
      }
      if ((opt_threshold == 0) && (*(char *)&_optarg->name == '-')) {
        uVar16 = dcgettext(0,"invalid --threshold argument \'-0\'",5);
        error(1,0,uVar16);
switchD_00101e05_caseD_6d:
        output_block_size = 0x100000;
        human_output_opts = 0;
      }
      break;
    case 0x78:
      local_164 = 0x48;
      break;
    case 0x80:
      apparent_size = true;
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
      opt_time = true;
      tVar13 = time_mtime;
      if (_optarg != (option *)0x0) {
        in_R9 = _argmatch_die;
        lVar20 = __xargmatch_internal
                           ("--time",_optarg,time_args,time_types,4,_argmatch_die,1,in_R10);
        tVar13 = time_types[lVar20];
      }
      time_type = tVar13;
      pcVar15 = getenv("TZ");
      localtz = (timezone_t)tzalloc(pcVar15);
      break;
    case 0x85:
      time_style = (char *)_optarg;
      break;
    case 0x86:
      goto switchD_00101e05_caseD_86;
    }
    goto LAB_00101dc0;
  }
  _Var36 = SUB81(poVar37,0);
  if (_Var36 == false) {
LAB_00102f3c:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  uVar16 = extraout_RDX;
  pcVar15 = (char *)&switchD_00101e05::switchdataD_00103270;
  if (opt_all == false) {
    if (bVar39) {
      if ((char)local_138 != '\0') {
        if (max_depth != 0) {
LAB_00102417:
          iVar9 = max_depth;
          uVar16 = dcgettext(0,"warning: summarizing conflicts with --max-depth=%td",5);
          error(0,0,uVar16,iVar9);
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        uVar16 = dcgettext(0,"warning: summarizing is the same as using --max-depth=0",5);
        error(0,0,uVar16);
        uVar16 = extraout_RDX_00;
        pcVar15 = (char *)max_depth;
        if (max_depth != 0) goto LAB_00102417;
LAB_00102b3b:
        max_depth = 0;
      }
    }
    else if ((char)local_138 != '\0') goto LAB_00102b3b;
  }
  else if ((char)local_138 != '\0') {
    uVar16 = dcgettext(0,"cannot both summarize and show all entries",5);
    error(0,0,uVar16);
    goto LAB_00102f3c;
  }
  if (opt_inodes != false) {
    if (apparent_size != false) {
      uVar16 = dcgettext(0,"warning: options --apparent-size and -b are ineffective with --inodes",5
                        );
      error(0,0,uVar16);
      uVar16 = extraout_RDX_05;
    }
    output_block_size = 1;
  }
  if (opt_time != false) {
    pcVar31 = time_style;
    if (time_style != (char *)0x0) goto LAB_0010220c;
    pcVar31 = getenv("TIME_STYLE");
    uVar16 = extraout_RDX_01;
    if (((option *)pcVar31 == (option *)0x0) ||
       (time_style = pcVar31, iVar12 = strcmp(pcVar31,"locale"), uVar16 = extraout_RDX_02,
       iVar12 == 0)) {
      pcVar31 = "long-iso";
      time_style = "long-iso";
LAB_00102cf0:
      lVar20 = __xargmatch_internal
                         ("time style",pcVar31,time_style_args,time_style_types,4,_argmatch_die,1,
                          uVar16);
      tVar1 = time_style_types[lVar20];
      pcVar15 = (char *)time_style_types;
      poVar34 = (option *)pcVar31;
      if (tVar1 == long_iso_time_style) {
        time_format = "%Y-%m-%d %H:%M";
      }
      else if (tVar1 == iso_time_style) {
        time_format = "%Y-%m-%d";
      }
      else if (tVar1 == full_iso_time_style) {
        time_format = "%Y-%m-%d %H:%M:%S.%N %z";
      }
    }
    else {
      pcVar15 = "posix-";
      if (*(char *)&((option *)pcVar31)->name == '+') {
        pcVar26 = strchr(pcVar31,10);
        if (pcVar26 != (char *)0x0) {
          *pcVar26 = '\0';
          uVar16 = extraout_RDX_04;
          goto LAB_0010220c;
        }
      }
      else {
        while (pcVar31 = time_style, iVar12 = strncmp(time_style,"posix-",6),
              uVar16 = extraout_RDX_03, iVar12 == 0) {
          time_style = pcVar31 + 6;
        }
LAB_0010220c:
        if (*(char *)&((option *)pcVar31)->name != '+') goto LAB_00102cf0;
      }
      poVar34 = (option *)((long)&((option *)pcVar31)->name + 1);
      time_format = (char *)poVar34;
    }
  }
  lVar20 = (long)_optind;
  if (local_160 == (option *)0x0) {
    ppcVar33 = cwd_only;
    if (_optind < argc) {
      ppcVar33 = argv + lVar20;
    }
    lVar20 = argv_iter_init_argv(ppcVar33);
    hash_all = _optind + 1 < argc || (uint)local_170 == 2;
LAB_0010228a:
    if (lVar20 == 0) goto LAB_00102c0f;
    di_files = (di_set *)di_set_alloc();
    if (di_files == (di_set *)0x0) goto LAB_00102c0f;
    if ((opt_count_all != false) || (hash_all == false)) {
      local_164 = local_164 | 0x100;
    }
    uVar14 = local_164;
    local_164 = (uint)_Var36;
    local_138 = uVar14 | (uint)local_170;
    poVar25 = local_178;
    poVar38 = local_160;
LAB_001022f0:
    pcVar15 = (char *)argv_iter(lVar20,poVar25);
    pcVar35 = (char *)poVar37;
    if ((option *)pcVar15 != (option *)0x0) {
      if (poVar38 != (option *)0x0) {
        do {
          if ((((*(char *)&poVar38->name == '-') && (*(char *)((long)&poVar38->name + 1) == '\0'))
              && (*(char *)&((option *)pcVar15)->name == '-')) &&
             (*(char *)((long)&((option *)pcVar15)->name + 1) == '\0')) {
            poVar34 = (option *)quotearg_style(4,pcVar15);
            uVar16 = dcgettext(0,"when reading file names from stdin, no file name of %s allowed",5)
            ;
            error(0,0,uVar16,poVar34);
            if (*(char *)&((option *)pcVar15)->name == '\0') goto LAB_00102480;
          }
          else {
            bVar10 = (byte)poVar37;
            if (*(char *)&((option *)pcVar15)->name != '\0') goto LAB_0010250a;
LAB_00102480:
            uVar16 = argv_iter_n_args(lVar20);
            poVar34 = (option *)dcgettext(0,"invalid zero-length file name",5);
            uVar17 = quotearg_n_style_colon(0,3,poVar38);
            error(0,0,"%s:%td: %s",uVar17,uVar16,poVar34);
          }
          pcVar15 = (char *)argv_iter(lVar20,poVar25);
          if ((option *)pcVar15 == (option *)0x0) goto LAB_00102353;
          poVar37 = (option *)0x0;
        } while( true );
      }
      do {
        bVar10 = (byte)poVar37;
        if (*(char *)&((option *)pcVar15)->name != '\0') {
LAB_0010250a:
          local_131 = bVar10;
          main::temp_argv[0] = pcVar15;
          local_178 = (option *)xfts_open(main::temp_argv,local_138,0);
          poVar37 = (option *)(ulong)(byte)local_164;
          local_130 = poVar38;
          local_128 = lVar20;
          local_120 = poVar25;
          goto LAB_001025c2;
        }
        poVar37 = (option *)0x0;
        uVar16 = dcgettext(0,"invalid zero-length file name",5);
        error(0,0,&_LC45,uVar16);
        pcVar15 = (char *)argv_iter(lVar20,poVar25);
      } while ((option *)pcVar15 != (option *)0x0);
LAB_00102353:
      pcVar35 = (char *)0x0;
    }
    uVar14 = oi;
    if (oi != 2) goto LAB_00103163;
    while( true ) {
      argv_iter_free(lVar20);
      di_set_free(di_files);
      if (di_mnt != (di_set *)0x0) {
        di_set_free();
      }
      if (((local_160 == (option *)0x0) ||
          (((*_stdin & 0x20) == 0 && (iVar12 = rpl_fclose(), iVar12 == 0)))) ||
         ((char)pcVar35 == '\0')) break;
      pcVar15 = (char *)quotearg_style(4,local_160);
      uVar16 = dcgettext(0,"error reading %s",5);
      uVar14 = error(1,0,uVar16,pcVar15);
LAB_00103163:
      if (uVar14 < 2) {
LAB_00103243:
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unexpected error code from argv_iter\"","src/du.c",0x428,"main");
      }
      poVar37 = poVar38;
      if (uVar14 == 3) {
LAB_00102c0f:
        xalloc_die();
        do {
          if (pcVar15 == pcVar35) goto LAB_00102c3e;
          iVar12 = di_set_lookup(di_mnt,((option *)((long)pcVar35 + 0x60))->flag,
                                 *(undefined8 *)&((option *)((long)pcVar35 + 0x60))->val);
          if (0 < iVar12) goto LAB_001025b9;
          pcVar35 = *(char **)&((option *)pcVar35)->has_arg;
          while ((option *)pcVar35 == (option *)0x0) {
LAB_00102c3e:
            pcVar15 = (char *)quotearg_n_style_colon(0,3,local_170);
            uVar16 = dcgettext(0,
                               "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                               ,5);
            error(0,0,uVar16,pcVar15);
            local_158 = poVar34;
LAB_001025bf:
            poVar37 = (option *)(ulong)((uint)poVar37 & (uint)local_158);
LAB_001025c2:
            pcVar35 = (char *)rpl_fts_read(local_178);
            if ((option *)pcVar35 == (option *)0x0) {
              piVar27 = __errno_location();
              poVar34 = poVar37;
              if (*piVar27 != 0) {
                uVar16 = quotearg_n_style_colon(0,3,local_178[1].name);
                uVar17 = dcgettext(0,"fts_read failed: %s",5);
                poVar34 = (option *)0x0;
                error(0,*piVar27,uVar17,uVar16);
              }
              prev_level = 0;
              iVar12 = rpl_fts_close(local_178);
              if (iVar12 != 0) {
                poVar34 = (option *)0x0;
                uVar16 = dcgettext(0,"fts_close failed",5);
                error(0,*piVar27,uVar16);
              }
              poVar37 = (option *)(ulong)((uint)local_131 & (uint)poVar34);
              lVar20 = local_128;
              poVar25 = local_120;
              poVar38 = local_130;
              goto LAB_001022f0;
            }
            local_170 = *(char **)&((option *)((long)pcVar35 + 0x20))->val;
            uVar32 = (ushort)((option *)((long)pcVar35 + 0x60))->has_arg;
            if (uVar32 == 4) {
              uVar16 = quotearg_style(4,local_170);
              uVar17 = dcgettext(0,"cannot read directory %s",5);
              error(0,*(uint *)&((option *)((long)pcVar35 + 0x40))->name,uVar17,uVar16);
              local_158 = (option *)0x0;
LAB_00102600:
              if (time_type == time_mtime) {
                tVar40 = *(timespec *)&((option *)((long)pcVar35 + 0xc0))->has_arg;
              }
              else if (time_type == time_atime) {
                tVar40 = *(timespec *)&((option *)((long)pcVar35 + 0xa0))->val;
              }
              else {
                tVar40 = *(timespec *)&((option *)((long)pcVar35 + 0xc0))->val;
              }
              lVar41 = tVar40.tv_nsec;
              lVar20 = tVar40.tv_sec;
              if (apparent_size == false) {
                pcVar31 = (char *)((long)((option *)((long)pcVar35 + 0xa0))->flag << 9);
              }
              else {
                pcVar31 = (char *)0x0;
                if ((((option *)((long)pcVar35 + 0x80))->has_arg & 0xd000U) == 0x8000) {
                  pcVar31 = ((option *)((long)pcVar35 + 0xa0))->name;
                  if ((long)((option *)((long)pcVar35 + 0xa0))->name < 0) {
                    pcVar31 = (char *)0x0;
                  }
                }
              }
              lVar3 = *(long *)&((option *)((long)pcVar35 + 0x40))->val;
              local_100 = 1;
              tmp = (intmax_t)pcVar31;
              tStack_f8 = tVar40;
              if (n_alloc_1 == 0) {
                n_alloc_1 = lVar3 + 10;
                dulvl_0 = xcalloc(n_alloc_1,0x40);
              }
              else if (lVar3 != prev_level) {
                if (prev_level < lVar3) {
                  if (n_alloc_1 <= lVar3) {
                    dulvl_0 = xpalloc(dulvl_0,&n_alloc_1,(lVar3 - n_alloc_1) + 1,0xffffffffffffffff,
                                      0x40);
                  }
                  uVar17 = _UNK_001037c8;
                  uVar16 = __LC79;
                  if (prev_level + 1 <= lVar3) {
                    lVar28 = dulvl_0 + lVar3 * 0x40;
                    lVar21 = prev_level * 0x40 + dulvl_0;
                    do {
                      *(undefined1 (*) [16])(lVar21 + 0x40) = (undefined1  [16])0x0;
                      lVar22 = lVar21 + 0x40;
                      *(undefined8 *)(lVar21 + 0x50) = uVar16;
                      *(undefined8 *)(lVar21 + 0x58) = uVar17;
                      *(undefined1 (*) [16])(lVar21 + 0x60) = (undefined1  [16])0x0;
                      *(undefined8 *)(lVar21 + 0x70) = uVar16;
                      *(undefined8 *)(lVar21 + 0x78) = uVar17;
                      lVar21 = lVar22;
                    } while (lVar22 != lVar28);
                  }
                }
                else {
                  if (lVar3 != prev_level + -1) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("level == prev_level - 1","src/du.c",0x268,"process_file");
                  }
                  puVar23 = (ulong *)(prev_level * 0x40 + dulvl_0);
                  uVar24 = *puVar23;
                  uVar4 = puVar23[2];
                  tmp = (intmax_t)(char *)0xffffffffffffffff;
                  if (!CARRY8((ulong)pcVar31,uVar24)) {
                    tmp = (intmax_t)(pcVar31 + uVar24);
                  }
                  uVar5 = puVar23[3];
                  local_100 = puVar23[1] + 1;
                  if ((int)(((uint)((long)uVar5 < lVar41) - (uint)(lVar41 < (long)uVar5)) +
                           ((uint)((long)uVar4 < lVar20) - (uint)(lVar20 < (long)uVar4)) * 2) < 0) {
                    tStack_f8 = *(timespec *)(puVar23 + 2);
                  }
                  if (opt_separate_dirs == false) {
                    bVar39 = CARRY8(tmp,puVar23[4]);
                    tmp = tmp + puVar23[4];
                    if (bVar39) {
                      tmp = -1;
                    }
                    local_100 = local_100 + puVar23[5];
                    if ((int)(((uint)((long)puVar23[7] < tStack_f8.tv_nsec) -
                              (uint)(tStack_f8.tv_nsec < (long)puVar23[7])) +
                             ((uint)((long)puVar23[6] < tStack_f8.tv_sec) -
                             (uint)(tStack_f8.tv_sec < (long)puVar23[6])) * 2) < 0) {
                      tStack_f8 = *(timespec *)(puVar23 + 6);
                    }
                  }
                  lVar28 = lVar3 * 0x40 + dulvl_0;
                  uVar29 = uVar24 + *(ulong *)(lVar28 + 0x20);
                  lVar21 = *(long *)(lVar28 + 0x38);
                  if (CARRY8(uVar24,*(ulong *)(lVar28 + 0x20))) {
                    uVar29 = 0xffffffffffffffff;
                  }
                  uVar24 = *(ulong *)(lVar28 + 0x30);
                  lVar22 = puVar23[1] + *(long *)(lVar28 + 0x28);
                  *(long *)(lVar28 + 0x28) = lVar22;
                  *(ulong *)(lVar28 + 0x20) = uVar29;
                  if ((int)(((uint)((long)uVar5 < lVar21) - (uint)(lVar21 < (long)uVar5)) +
                           ((uint)((long)uVar4 < (long)uVar24) - (uint)((long)uVar24 < (long)uVar4))
                           * 2) < 0) {
                    uVar4 = puVar23[3];
                    uVar24 = puVar23[2];
                    *(ulong *)(lVar28 + 0x30) = puVar23[2];
                    *(ulong *)(lVar28 + 0x38) = uVar4;
                    lVar21 = *(long *)(lVar28 + 0x38);
                  }
                  lVar30 = uVar29 + puVar23[4];
                  if (CARRY8(uVar29,puVar23[4])) {
                    lVar30 = -1;
                  }
                  *(ulong *)(lVar28 + 0x28) = lVar22 + puVar23[5];
                  uVar4 = puVar23[6];
                  *(long *)(lVar28 + 0x20) = lVar30;
                  if ((int)(((uint)((long)puVar23[7] < lVar21) - (uint)(lVar21 < (long)puVar23[7]))
                           + ((uint)((long)uVar4 < (long)uVar24) -
                             (uint)((long)uVar24 < (long)uVar4)) * 2) < 0) {
                    uVar24 = puVar23[7];
                    *(ulong *)(lVar28 + 0x30) = puVar23[6];
                    *(ulong *)(lVar28 + 0x38) = uVar24;
                  }
                }
              }
              prev_level = lVar3;
              if ((opt_separate_dirs == false) || ((uVar32 & 0xfffd) != 4)) {
                puVar23 = (ulong *)(lVar3 * 0x40 + dulvl_0);
                pcVar35 = pcVar31 + *puVar23;
                if (CARRY8((ulong)pcVar31,*puVar23)) {
                  pcVar35 = (char *)0xffffffffffffffff;
                }
                puVar23[1] = puVar23[1] + 1;
                *puVar23 = (ulong)pcVar35;
                if ((int)(((uint)(lVar41 < (long)puVar23[3]) - (uint)((long)puVar23[3] < lVar41)) +
                         ((uint)(lVar20 < (long)puVar23[2]) - (uint)((long)puVar23[2] < lVar20)) * 2
                         ) < 0) {
                  *(timespec *)(puVar23 + 2) = tVar40;
                }
              }
              pcVar15 = pcVar31 + tot_dui.size;
              if (CARRY8((ulong)pcVar31,tot_dui.size)) {
                pcVar15 = (char *)0xffffffffffffffff;
              }
              tot_dui.inodes = tot_dui.inodes + 1;
              bVar7 = tot_dui.tmax.tv_sec < lVar20;
              bVar39 = lVar20 < tot_dui.tmax.tv_sec;
              bVar8 = tot_dui.tmax.tv_nsec < lVar41;
              bVar6 = lVar41 < tot_dui.tmax.tv_nsec;
              if ((int)(((uint)bVar6 - (uint)bVar8) + ((uint)bVar39 - (uint)bVar7) * 2) < 0) {
                tot_dui.tmax = tVar40;
              }
              tot_dui.size = (uintmax_t)pcVar15;
              if (((((uVar32 & 0xfffd) == 4) || (opt_all != false)) && (lVar3 <= max_depth)) ||
                 (lVar3 == 0)) {
                uVar24 = local_100;
                if (opt_inodes == false) {
                  uVar24 = tmp;
                }
                if (opt_threshold < 0) {
                  if ((ulong)-opt_threshold < uVar24) goto LAB_001025bf;
                }
                else if (uVar24 < (ulong)opt_threshold) goto LAB_001025bf;
                print_size((duinfo *)&tmp,local_170);
              }
              goto LAB_001025bf;
            }
            local_158 = (option *)(ulong)(byte)local_164;
            if (uVar32 == 6) goto LAB_00102600;
            uVar14 = excluded_file_name(exclude,local_170);
            poVar34 = (option *)(ulong)uVar14;
            if ((char)uVar14 != '\0') {
LAB_001025b0:
              if (uVar32 == 1) {
                rpl_fts_set(local_178,pcVar35,4);
                poVar34 = (option *)rpl_fts_read(local_178);
                pcVar15 = (char *)local_178;
                if ((option *)pcVar35 != poVar34) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("e == ent","src/du.c",0x21c,"process_file");
                }
              }
LAB_001025b9:
              local_158 = (option *)(ulong)(byte)local_164;
              goto LAB_001025bf;
            }
            if (uVar32 == 0xb) {
              rpl_fts_set(local_178,pcVar35,1);
              poVar25 = (option *)rpl_fts_read(local_178);
              if ((option *)pcVar35 != poVar25) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("e == ent","src/du.c",0x1fb,"process_file");
              }
              uVar32 = (ushort)((option *)((long)pcVar35 + 0x60))->has_arg;
              pcVar15 = (char *)local_178;
            }
            bVar39 = uVar32 == 10 || uVar32 == 0xd;
            local_158 = (option *)(ulong)bVar39;
            if (bVar39) {
              pcVar15 = (char *)quotearg_style(4,local_170);
              uVar16 = dcgettext(0,"cannot access %s",5);
              error(0,*(uint *)&((option *)((long)pcVar35 + 0x40))->name,uVar16,pcVar15);
              local_158 = poVar34;
              goto LAB_001025bf;
            }
            if ((((local_178[2].has_arg & 0x40) != 0) &&
                (0 < *(long *)&((option *)((long)pcVar35 + 0x40))->val)) &&
               (*(int **)&local_178->val != ((option *)((long)pcVar35 + 0x60))->flag))
            goto LAB_001025b0;
            if ((opt_count_all == false) &&
               ((hash_all != false ||
                (((((option *)((long)pcVar35 + 0x80))->has_arg & 0xf000U) != 0x4000 &&
                 ((char *)0x1 < ((option *)((long)pcVar35 + 0x80))->name)))))) {
              iVar12 = di_set_insert(di_files,((option *)((long)pcVar35 + 0x60))->flag,
                                     *(undefined8 *)&((option *)((long)pcVar35 + 0x60))->val);
              if (iVar12 < 0) goto LAB_00102c0f;
              if (iVar12 == 0) goto LAB_001025b0;
            }
            if (uVar32 != 2) {
              if (uVar32 == 7) {
                uVar16 = quotearg_n_style_colon(0,3,local_170);
                error(0,*(uint *)&((option *)((long)pcVar35 + 0x40))->name,&_LC45,uVar16);
              }
              else {
                if (uVar32 == 1) goto LAB_001025b9;
                local_158 = (option *)(ulong)(byte)local_164;
              }
              goto LAB_00102600;
            }
            cVar11 = cycle_warning_required(local_178,pcVar35);
            if (cVar11 == '\0') goto LAB_001025b9;
            pcVar15 = ((option *)pcVar35)->name;
            if (di_mnt == (di_set *)0x0) {
              di_mnt = (di_set *)di_set_alloc();
              if (di_mnt == (di_set *)0x0) goto LAB_00102c0f;
              lVar20 = read_file_system_list();
              while (lVar20 != 0) {
                if ((((*(byte *)(lVar20 + 0x28) & 3) == 0) &&
                    (iVar12 = stat(*(char **)(lVar20 + 8),(stat *)&buf), iVar12 == 0)) &&
                   (iVar12 = di_set_insert(di_mnt,buf.st_dev,buf.st_ino), iVar12 < 0))
                goto LAB_00102c0f;
                lVar20 = *(long *)(lVar20 + 0x30);
                free_mount_entry();
              }
            }
          }
        } while( true );
      }
      if (uVar14 != 4) goto LAB_00103243;
      pcVar35 = (char *)0x0;
      uVar16 = quotearg_n_style_colon(0,3,local_160);
      uVar17 = dcgettext(0,"%s: read error",5);
      piVar27 = __errno_location();
      error(0,*piVar27,uVar17,uVar16);
    }
    if (print_grand_total != false) {
      pcVar15 = (char *)dcgettext(0,"total",5);
      print_size(&tot_dui,pcVar15);
    }
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (uint)pcVar35 ^ 1;
    }
LAB_001030d9:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (argc <= _optind) {
    iVar12 = strcmp((char *)local_160,"-");
    if ((iVar12 == 0) || (lVar20 = freopen_safer(local_160,&_LC67,_stdin), lVar20 != 0)) {
      lVar20 = argv_iter_init_stream(_stdin);
      pcVar15 = (char *)local_160;
      hash_all = _Var36;
      goto LAB_0010228a;
    }
    argv = (char **)quotearg_style(4,local_160);
    uVar16 = dcgettext(0,"cannot open %s for reading",5);
    piVar27 = __errno_location();
    lVar20 = error(1,*piVar27,uVar16,argv);
  }
  uVar16 = quote(argv[lVar20]);
  uVar17 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar17,uVar16);
  uVar16 = dcgettext(0,"file operands cannot be combined with --files0-from",5);
  __fprintf_chk(_stderr,2,&_LC65,uVar16);
                    /* WARNING: Subroutine does not return */
  usage(1);
switchD_00101e05_caseD_86:
  opt_inodes = true;
  goto LAB_00101dc0;
}


