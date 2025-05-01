
timespec date_relative(char *flex_date,timespec now)

{
  long lVar1;
  timespec tVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  __time_t local_38;
  __syscall_slong_t local_30;
  timespec result;
  
  local_30 = now.tv_nsec;
  local_38 = now.tv_sec;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = parse_datetime(&result,flex_date,&local_38);
  if (cVar3 == '\0') {
    uVar4 = quote(flex_date);
    uVar5 = dcgettext(0,"invalid date format %s",5);
    error(1,0,uVar5,uVar4);
  }
  else {
    tVar2.tv_nsec = result.tv_nsec;
    tVar2.tv_sec = result.tv_sec;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return tVar2;
    }
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
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001000ea;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Update the access and modification times of each FILE to the current time.\n\nA FILE argument that does not exist is created empty, unless -c or -h\nis supplied.\n\nA FILE argument string of - is handled specially and causes touch to\nchange the times of the file associated with standard output.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a                     change only the access time\n  -c, --no-create        do not create any files\n  -d, --date=STRING      parse STRING and use it instead of current time\n  -f                     (ignored)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -h, --no-dereference   affect each symbolic link instead of any referenced\n                         file (useful only on systems that can change the\n                         timestamps of a symlink)\n  -m                     change only the modification time\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -r, --reference=FILE   use this file\'s times instead of current time\n  -t [[CC]YY]MMDDhhmm[.ss]  use specified time instead of current time,\n                         with a date-time format that differs from -d\'s\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --time=WORD        specify which time to change:\n                           access time (-a): \'access\', \'atime\', \'use\';\n                           modification time (-m): \'modify\', \'mtime\'\n"
                             ,5);
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
    iVar2 = strcmp("touch",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "touch";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010035d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","touch");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010035d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","touch");
    if (pcVar4 == "touch") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001000ea:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  uint *puVar17;
  tm *ptVar18;
  timespec *ptVar19;
  char *pcVar20;
  uint uVar21;
  long in_FS_OFFSET;
  timespec tVar22;
  timespec tVar23;
  char *local_f0;
  stat ref_stats;
  
  cVar7 = '\0';
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  use_ref = false;
  change_times = 0;
  no_create = false;
  local_f0 = (char *)0x0;
switchD_00100ef3_caseD_66:
  iVar8 = getopt_long(argc,argv,"acd:fhmr:t:",longopts,0);
  pcVar20 = ref_file;
  if (iVar8 == -1) {
    if (change_times == 0) {
      change_times = 3;
    }
    if (cVar7 != '\0') {
      if ((local_f0 == (char *)0x0) && (use_ref == false)) goto LAB_001010e4;
      pcVar20 = "cannot specify times from more than one source";
      goto LAB_00101518;
    }
    if (use_ref == false) {
      if (local_f0 != (char *)0x0) {
        tVar22 = (timespec)current_timespec();
        newtime[0] = date_relative(local_f0,tVar22);
        newtime[1] = newtime[0];
        if (((change_times != 3) || (newtime[0] != tVar22)) ||
           (tVar22.tv_sec = tVar22.tv_sec ^ 1, tVar23 = date_relative(local_f0,tVar22),
           tVar23 != tVar22)) goto LAB_001010e4;
      }
      if ((argc - _optind < 2) || (iVar8 = posix2_version(), 0x30daf < iVar8)) {
LAB_001014e4:
        if (change_times == 3) {
          amtime_now = true;
        }
        else {
          newtime[0].tv_nsec = 0x3fffffff;
          newtime[1].tv_nsec = 0x3fffffff;
        }
        goto LAB_001010e4;
      }
      ptVar19 = newtime;
      cVar7 = posixtime(newtime,argv[_optind],9);
      if (cVar7 == '\0') goto LAB_001014e4;
      newtime[0].tv_nsec = 0;
      newtime[1] = newtime[0];
      pcVar20 = getenv("POSIXLY_CORRECT");
      if (pcVar20 == (char *)0x0) goto LAB_00101675;
      goto LAB_001015e7;
    }
    if (no_dereference == false) {
      iVar8 = stat(ref_file,(stat *)&ref_stats);
    }
    else {
      iVar8 = lstat(ref_file,(stat *)&ref_stats);
    }
    if (iVar8 == 0) {
      newtime[0] = ref_stats.st_atim;
      newtime[1] = ref_stats.st_mtim;
      if (local_f0 != (char *)0x0) {
        if ((change_times & 1U) != 0) {
          newtime[0] = date_relative(local_f0,ref_stats.st_atim);
        }
        if ((change_times & 2U) != 0) {
          newtime[1] = date_relative(local_f0,newtime[1]);
        }
      }
      goto LAB_001010e4;
    }
    uVar11 = quotearg_style(4,pcVar20);
    uVar12 = dcgettext(0,"failed to get attributes of %s",5);
    piVar16 = __errno_location();
    error(1,*piVar16,uVar12,uVar11);
    goto LAB_00101747;
  }
  if (iVar8 < 0x81) {
    if (0x60 < iVar8) goto code_r0x00100eec;
    if (iVar8 == -0x83) {
      uVar11 = proper_name_lite("Randy Smith","Randy Smith");
      uVar12 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar13 = proper_name_lite("Jim Kingdon","Jim Kingdon");
      uVar14 = proper_name_lite("Arnold Robbins","Arnold Robbins");
      uVar15 = proper_name_lite("Paul Rubin","Paul Rubin");
      version_etc(_stdout,"touch","GNU coreutils",_Version,uVar15,uVar14,uVar13,uVar12,uVar11,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar8 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
  }
  goto switchD_00100ef3_caseD_62;
code_r0x00100eec:
  switch(iVar8) {
  case 0x61:
    change_times = change_times | 1;
    break;
  default:
switchD_00100ef3_caseD_62:
                    /* WARNING: Subroutine does not return */
    usage(1);
  case 99:
    no_create = true;
    break;
  case 100:
    local_f0 = _optarg;
    break;
  case 0x66:
    break;
  case 0x68:
    no_dereference = true;
    break;
  case 0x6d:
    change_times = change_times | 2;
    break;
  case 0x72:
    ref_file = _optarg;
    use_ref = true;
    break;
  case 0x74:
    cVar7 = posixtime(newtime,_optarg,6);
    if (cVar7 == '\0') {
      argv = (char **)quote(_optarg);
      uVar11 = dcgettext(0,"invalid date format %s",5);
      error(1,0,uVar11,argv);
      ptVar19 = (timespec *)&switchD_00100ef3::switchdataD_00101780;
LAB_00101675:
      ptVar18 = localtime(&ptVar19->tv_sec);
      if (ptVar18 != (tm *)0x0) {
        iVar8 = ptVar18->tm_sec;
        iVar9 = ptVar18->tm_min;
        iVar1 = ptVar18->tm_hour;
        iVar2 = ptVar18->tm_mday;
        iVar3 = ptVar18->tm_mon;
        iVar4 = ptVar18->tm_year;
        pcVar20 = argv[_optind];
        uVar11 = dcgettext(0,
                           "warning: \'touch %s\' is obsolete; use \'touch -t %04ld%02d%02d%02d%02d.%02d\'"
                           ,5);
        error(0,0,uVar11,pcVar20,(long)iVar4 + 0x76c,iVar3 + 1,iVar2,iVar1,iVar9,iVar8);
      }
LAB_001015e7:
      _optind = _optind + 1;
LAB_001010e4:
      if (_optind != argc) {
        local_f0._0_1_ = 1;
        bVar6 = 1;
        if (_optind < argc) goto LAB_001011b7;
        goto LAB_0010131b;
      }
      pcVar20 = "missing file operand";
LAB_00101518:
      uVar11 = dcgettext(0,pcVar20,5);
      error(0,0,uVar11);
      goto switchD_00100ef3_caseD_62;
    }
    newtime[0].tv_nsec = 0;
    newtime[1] = newtime[0];
    break;
  case 0x80:
    lVar10 = __xargmatch_internal("--time",_optarg,time_args,time_masks,4,_argmatch_die,1);
    change_times = change_times | time_masks[lVar10];
  }
  goto switchD_00100ef3_caseD_66;
LAB_001011b7:
  local_f0._0_1_ = bVar6;
  pcVar20 = argv[_optind];
  if (*pcVar20 == '-') {
    uVar21 = (uint)(byte)pcVar20[1];
    iVar8 = 1;
    if (pcVar20[1] != 0) goto LAB_001011c7;
  }
  else {
LAB_001011c7:
    if ((no_create == false) && (no_dereference == false)) {
      iVar8 = fd_reopen(0,pcVar20,0x941,0x1b6);
      uVar21 = 0;
      if (iVar8 < 0) {
        puVar17 = (uint *)__errno_location();
        uVar21 = *puVar17;
      }
    }
    else {
      iVar8 = -1;
      uVar21 = 0;
    }
  }
  if (change_times != 3) {
    if (change_times == 2) {
      newtime[0].tv_nsec = 0x3ffffffe;
    }
    else {
      if (change_times != 1) {
LAB_00101747:
                    /* WARNING: Subroutine does not return */
        __assert_fail("change_times == 1","src/touch.c",0x91,"touch");
      }
      newtime[1].tv_nsec = 0x3ffffffe;
    }
  }
  ptVar19 = (timespec *)0x0;
  if (amtime_now == false) {
    ptVar19 = newtime;
  }
  if (iVar8 == 1) {
    iVar8 = fdutimensat(1,0xffffff9c,0,ptVar19,(ulong)no_dereference << 8);
    if (iVar8 != 0) {
      piVar16 = __errno_location();
      iVar9 = *piVar16;
      if (iVar9 != 9) goto LAB_00101210;
      if (no_create != false) goto LAB_001011a0;
      if ((uVar21 != 0x15) && (uVar21 != 0)) goto LAB_00101220;
LAB_00101266:
      quotearg_style(4,pcVar20);
      uVar11 = dcgettext(0,"setting times of %s",5);
      error(0,iVar9,uVar11);
LAB_0010129b:
      local_f0._0_1_ = 0;
    }
  }
  else {
    iVar9 = fdutimensat(iVar8,0xffffff9c,pcVar20,ptVar19,(ulong)no_dereference << 8);
    if (iVar9 == 0) {
      if ((iVar8 != 0) || (iVar8 = close(0), iVar8 == 0)) goto LAB_001011a0;
    }
    else {
      piVar16 = __errno_location();
      iVar9 = *piVar16;
      if ((iVar8 != 0) || (iVar8 = close(0), iVar8 == 0)) {
LAB_00101210:
        if (iVar9 == 0) goto LAB_001011a0;
        if ((uVar21 != 0) && (uVar21 != 0x15)) {
LAB_00101220:
          if ((uVar21 == 0x16) &&
             ((iVar8 = stat(pcVar20,(stat *)&ref_stats), iVar8 == 0 &&
              ((ref_stats.st_mode & 0xf000) == 0x4000)))) goto LAB_00101253;
          quotearg_style(4,pcVar20);
          uVar11 = dcgettext(0,"cannot touch %s",5);
          error(0,uVar21,uVar11);
          goto LAB_0010129b;
        }
LAB_00101253:
        if ((iVar9 != 2) || (no_create == false)) goto LAB_00101266;
        goto LAB_001011a0;
      }
    }
    quotearg_style(4,pcVar20);
    uVar11 = dcgettext(0,"failed to close %s",5);
    piVar16 = __errno_location();
    error(0,*piVar16,uVar11);
    local_f0._0_1_ = 0;
  }
LAB_001011a0:
  _optind = _optind + 1;
  bVar6 = (byte)local_f0;
  if (argc <= _optind) {
LAB_0010131b:
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (int)((byte)local_f0 ^ 1);
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_001011b7;
}


