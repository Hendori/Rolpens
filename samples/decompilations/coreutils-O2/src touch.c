
undefined8 date_relative(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_3;
  cVar1 = parse_datetime(local_28,param_1,&local_38);
  if (cVar1 == '\0') {
    uVar2 = quote(param_1);
    uVar3 = dcgettext(0,"invalid date format %s",5);
    error(1,0,uVar3,uVar2);
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_28[0];
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
  local_a8 = &_LC1;
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
    iVar2 = strcmp("touch",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,stat *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  tm *ptVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int iVar18;
  char *pcVar19;
  stat *__buf;
  uint *puVar20;
  uint *puVar21;
  undefined1 *__file;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint *local_f0;
  stat local_d8;
  long local_40;
  
  uVar7 = 0;
  __file = longopts;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(param_2->st_dev);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar21 = &switchD_00100ef3::switchdataD_00101780;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  use_ref = '\0';
  change_times = 0;
  no_create = '\0';
  local_f0 = (uint *)0x0;
switchD_00100ef3_caseD_66:
  __buf = param_2;
  iVar6 = getopt_long(param_1,param_2,"acd:fhmr:t:",longopts,0);
  puVar20 = ref_file;
  auVar3._8_8_ = DAT_001004c8;
  auVar3._0_8_ = newtime;
  auVar22._8_8_ = _DAT_001004d8;
  auVar22._0_8_ = _DAT_001004d0;
  if (iVar6 == -1) {
    if (change_times == 0) {
      change_times = 3;
    }
    if ((char)uVar7 != '\0') {
      if ((local_f0 == (uint *)0x0) && (use_ref == '\0')) goto LAB_001010e4;
      pcVar19 = "cannot specify times from more than one source";
      goto LAB_00101518;
    }
    if (use_ref != '\0') {
      __buf = &local_d8;
      puVar21 = ref_file;
      if (no_dereference != 0) goto LAB_00101537;
      iVar6 = stat((char *)ref_file,__buf);
      puVar21 = puVar20;
      goto LAB_00101380;
    }
    if (local_f0 != (uint *)0x0) {
      auVar23 = current_timespec();
      puVar21 = auVar23._0_8_;
      auVar22 = date_relative(local_f0,puVar21);
      DAT_001004c8 = auVar22._8_8_;
      newtime = auVar22._0_8_;
      auVar3 = auVar22;
      if (change_times != 3) goto LAB_001010e4;
      if (auVar23 != auVar22) goto LAB_001010e4;
      puVar21 = (uint *)((ulong)puVar21 ^ 1);
      auVar4._8_8_ = auVar23._8_8_;
      auVar4._0_8_ = puVar21;
      _DAT_001004d0 = newtime;
      _DAT_001004d8 = DAT_001004c8;
      auVar23 = date_relative(local_f0,puVar21,auVar23._8_8_);
      auVar3._8_8_ = DAT_001004c8;
      auVar3._0_8_ = newtime;
      auVar22._8_8_ = _DAT_001004d8;
      auVar22._0_8_ = _DAT_001004d0;
      if (auVar23 != auVar4) goto LAB_001010e4;
    }
    if ((param_1 - _optind < 2) || (iVar6 = posix2_version(), 0x30daf < iVar6)) {
LAB_001014e4:
      auVar3._8_8_ = DAT_001004c8;
      auVar3._0_8_ = newtime;
      auVar22._8_8_ = _DAT_001004d8;
      auVar22._0_8_ = _DAT_001004d0;
      if (change_times == 3) {
        amtime_now = '\x01';
        goto LAB_001010e4;
      }
      auVar3._8_8_ = 0x3fffffff;
      auVar22._8_8_ = 0x3fffffff;
      goto LAB_001010e4;
    }
    puVar21 = (uint *)&newtime;
    cVar5 = posixtime(&newtime,param_2->__unused[(long)_optind + -0xf],9);
    if (cVar5 == '\0') goto LAB_001014e4;
    DAT_001004c8 = 0;
    _DAT_001004d0 = newtime;
    _DAT_001004d8 = 0;
    pcVar19 = getenv("POSIXLY_CORRECT");
    if (pcVar19 != (char *)0x0) goto LAB_001015e7;
    goto LAB_00101675;
  }
  if (iVar6 < 0x81) {
    if (0x60 < iVar6) goto code_r0x00100eec;
    if (iVar6 == -0x83) {
      uVar13 = proper_name_lite("Randy Smith","Randy Smith");
      uVar16 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar10 = proper_name_lite("Jim Kingdon","Jim Kingdon");
      uVar11 = proper_name_lite("Arnold Robbins","Arnold Robbins");
      uVar12 = proper_name_lite("Paul Rubin","Paul Rubin");
      version_etc(_stdout,"touch","GNU coreutils",_Version,uVar12,uVar11,uVar10,uVar16,uVar13,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar6 == -0x82) {
      usage(0);
      goto LAB_00101605;
    }
  }
  goto switchD_00100ef3_caseD_62;
code_r0x00100eec:
  switch(iVar6) {
  case 0x61:
    change_times = change_times | 1;
    goto switchD_00100ef3_caseD_66;
  default:
    break;
  case 99:
    no_create = '\x01';
    goto switchD_00100ef3_caseD_66;
  case 100:
    local_f0 = _optarg;
  case 0x66:
    goto switchD_00100ef3_caseD_66;
  case 0x68:
    no_dereference = 1;
    goto switchD_00100ef3_caseD_66;
  case 0x6d:
    change_times = change_times | 2;
    goto switchD_00100ef3_caseD_66;
  case 0x72:
    ref_file = _optarg;
    use_ref = '\x01';
    goto switchD_00100ef3_caseD_66;
  case 0x74:
    uVar7 = posixtime(&newtime,_optarg,6);
    if ((char)uVar7 == '\0') {
      param_2 = (stat *)quote(_optarg);
      uVar13 = dcgettext(0,"invalid date format %s",5);
      error(1,0,uVar13,param_2);
LAB_00101675:
      ptVar15 = localtime((time_t *)puVar21);
      if (ptVar15 != (tm *)0x0) {
        iVar6 = ptVar15->tm_sec;
        iVar8 = ptVar15->tm_min;
        iVar1 = ptVar15->tm_hour;
        iVar2 = ptVar15->tm_mday;
        iVar18 = ptVar15->tm_mon + 1;
        puVar21 = (uint *)((long)ptVar15->tm_year + 0x76c);
        lVar9 = param_2->__unused[(long)_optind + -0xf];
        local_f0 = (uint *)CONCAT44(local_f0._4_4_,iVar18);
        uVar13 = dcgettext(0,
                           "warning: \'touch %s\' is obsolete; use \'touch -t %04ld%02d%02d%02d%02d.%02d\'"
                           ,5);
        error(0,0,uVar13,lVar9,puVar21,iVar18,iVar2,iVar1,iVar8,iVar6);
      }
LAB_001015e7:
      auVar3._8_8_ = DAT_001004c8;
      auVar3._0_8_ = newtime;
      auVar22._8_8_ = _DAT_001004d8;
      auVar22._0_8_ = _DAT_001004d0;
      _optind = _optind + 1;
      goto LAB_001010e4;
    }
    DAT_001004c8 = 0;
    _DAT_001004d0 = newtime;
    _DAT_001004d8 = 0;
    goto switchD_00100ef3_caseD_66;
  case 0x80:
    lVar9 = __xargmatch_internal("--time",_optarg,time_args,time_masks,4,_argmatch_die,1);
    change_times = change_times | *(uint *)(time_masks + lVar9 * 4);
    goto switchD_00100ef3_caseD_66;
  }
switchD_00100ef3_caseD_62:
  puVar20 = (uint *)0x1;
  _DAT_001004d0 = auVar22;
  usage();
  auVar22 = _DAT_001004d0;
LAB_00101537:
  _DAT_001004d0 = auVar22;
  iVar6 = lstat((char *)puVar20,__buf);
LAB_00101380:
  if (iVar6 != 0) {
    uVar13 = quotearg_style(4,puVar21);
    uVar16 = dcgettext(0,"failed to get attributes of %s",5);
    piVar14 = __errno_location();
    error(1,*piVar14,uVar16,uVar13);
    auVar3._8_8_ = DAT_001004c8;
    auVar3._0_8_ = newtime;
    goto LAB_00101747;
  }
  auVar3._8_8_ = local_d8.st_atim.tv_nsec;
  auVar3._0_8_ = local_d8.st_atim.tv_sec;
  auVar22._8_8_ = local_d8.st_mtim.tv_nsec;
  auVar22._0_8_ = local_d8.st_mtim.tv_sec;
  newtime = local_d8.st_atim.tv_sec;
  DAT_001004c8 = local_d8.st_atim.tv_nsec;
  auVar23._8_8_ = local_d8.st_atim.tv_nsec;
  auVar23._0_8_ = local_d8.st_atim.tv_sec;
  _DAT_001004d0 = local_d8.st_mtim.tv_sec;
  _DAT_001004d8 = local_d8.st_mtim.tv_nsec;
  if (local_f0 != (uint *)0x0) {
    if ((change_times & 1) != 0) {
      auVar23 = date_relative(local_f0,local_d8.st_atim.tv_sec,local_d8.st_atim.tv_nsec);
    }
    DAT_001004c8 = auVar23._8_8_;
    newtime = auVar23._0_8_;
    auVar22._8_8_ = _DAT_001004d8;
    auVar22._0_8_ = _DAT_001004d0;
    auVar3 = auVar23;
    if ((change_times & 2) != 0) {
      auVar22 = date_relative(local_f0,_DAT_001004d0,_DAT_001004d8);
      auVar3._8_8_ = DAT_001004c8;
      auVar3._0_8_ = newtime;
    }
  }
LAB_001010e4:
  if (_optind != param_1) goto code_r0x001010f2;
  pcVar19 = "missing file operand";
LAB_00101518:
  DAT_001004c8 = auVar3._8_8_;
  newtime = auVar3._0_8_;
  _DAT_001004d0 = auVar22;
  uVar13 = dcgettext(0,pcVar19,5);
  __buf = (stat *)0x0;
  error(0,0,uVar13);
  auVar22 = _DAT_001004d0;
  goto switchD_00100ef3_caseD_62;
code_r0x001010f2:
  local_f0._0_1_ = 1;
  _DAT_001004d0 = auVar22;
  do {
    newtime = auVar3._0_8_;
    DAT_001004c8 = auVar3._8_8_;
    if (param_1 <= _optind) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (byte)local_f0 ^ 1;
    }
    __file = (undefined1 *)param_2->__unused[(long)_optind + -0xf];
    if (*__file == '-') {
      uVar7 = (uint)(byte)__file[1];
      iVar6 = 1;
      if (__file[1] != 0) goto LAB_001011c7;
    }
    else {
LAB_001011c7:
      if ((no_create == '\0') && (no_dereference == 0)) {
        iVar6 = fd_reopen(0,__file,0x941,0x1b6);
        auVar3._8_8_ = DAT_001004c8;
        auVar3._0_8_ = newtime;
        uVar7 = 0;
        if (iVar6 < 0) {
          puVar21 = (uint *)__errno_location();
          auVar3._8_8_ = DAT_001004c8;
          auVar3._0_8_ = newtime;
          uVar7 = *puVar21;
        }
      }
      else {
        iVar6 = -1;
        uVar7 = 0;
      }
    }
    DAT_001004c8 = auVar3._8_8_;
    newtime = auVar3._0_8_;
    if (change_times != 3) {
      if (change_times == 2) {
        DAT_001004c8 = 0x3ffffffe;
      }
      else {
        if (change_times != 1) {
LAB_00101747:
          DAT_001004c8 = auVar3._8_8_;
          newtime = auVar3._0_8_;
                    /* WARNING: Subroutine does not return */
          __assert_fail("change_times == 1","src/touch.c",0x91,"touch");
        }
        _DAT_001004d8 = 0x3ffffffe;
      }
    }
    puVar17 = (undefined8 *)0x0;
    if (amtime_now == '\0') {
      puVar17 = &newtime;
    }
    if (iVar6 == 1) {
      iVar6 = fdutimensat(1,0xffffff9c,0,puVar17,(ulong)no_dereference << 8);
      if (iVar6 != 0) {
        piVar14 = __errno_location();
        iVar8 = *piVar14;
        if (iVar8 != 9) goto LAB_00101210;
        if (no_create != '\0') goto LAB_001011a0;
        if ((uVar7 != 0x15) && (uVar7 != 0)) goto LAB_00101220;
LAB_00101266:
        quotearg_style(4,__file);
        uVar13 = dcgettext(0,"setting times of %s",5);
        error(0,iVar8,uVar13);
LAB_0010129b:
        local_f0._0_1_ = 0;
      }
    }
    else {
      iVar8 = fdutimensat(iVar6,0xffffff9c,__file,puVar17,(ulong)no_dereference << 8);
      if (iVar8 == 0) {
        if ((iVar6 != 0) || (iVar6 = close(0), iVar6 == 0)) goto LAB_001011a0;
      }
      else {
        piVar14 = __errno_location();
        iVar8 = *piVar14;
        if ((iVar6 != 0) || (iVar6 = close(0), iVar6 == 0)) {
LAB_00101210:
          if (iVar8 == 0) goto LAB_001011a0;
          if ((uVar7 != 0) && (uVar7 != 0x15)) {
LAB_00101220:
            if ((uVar7 == 0x16) &&
               ((iVar6 = stat(__file,&local_d8), iVar6 == 0 &&
                ((local_d8.st_mode & 0xf000) == 0x4000)))) goto LAB_00101253;
LAB_00101605:
            quotearg_style(4,__file);
            uVar13 = dcgettext(0,"cannot touch %s",5);
            error(0,uVar7,uVar13);
            goto LAB_0010129b;
          }
LAB_00101253:
          if ((iVar8 != 2) || (no_create == '\0')) goto LAB_00101266;
          goto LAB_001011a0;
        }
      }
      quotearg_style(4,__file);
      uVar13 = dcgettext(0,"failed to close %s",5);
      piVar14 = __errno_location();
      error(0,*piVar14,uVar13);
      local_f0._0_1_ = 0;
    }
LAB_001011a0:
    auVar3._8_8_ = DAT_001004c8;
    auVar3._0_8_ = newtime;
    _optind = _optind + 1;
  } while( true );
}


