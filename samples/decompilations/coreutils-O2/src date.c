
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 show_date_helper(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((byte)parse_datetime_flags & 1) != 0) {
    uVar3 = quote();
    uVar4 = dcgettext(0,"output format: %s",5);
    error(0,0,uVar4,uVar3);
  }
  if (param_1 == "%a, %d %b %Y %H:%M:%S %z") {
    setlocale(2,"C");
    uVar2 = show_date("%a, %d %b %Y %H:%M:%S %z",param_2,param_3,param_4);
    setlocale(2,"");
  }
  else {
    uVar2 = show_date(param_1,param_2,param_3,param_4);
  }
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
    return uVar2;
  }
  __overflow(_stdout,10);
  return uVar2;
}



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
    goto LAB_0010015a;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [+FORMAT]\n  or:  %s [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Display date and time in the given FORMAT.\nWith -s, or with [MMDDhhmm[[CC]YY][.ss]], set the date and time.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -d, --date=STRING          display time described by STRING, not \'now\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --debug                annotate the parsed date,\n                              and warn about questionable usage to stderr\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --file=DATEFILE        like --date; once for each line of DATEFILE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -I[FMT], --iso-8601[=FMT]  output date/time in ISO 8601 format.\n                               FMT=\'date\' for date only (the default),\n                               \'hours\', \'minutes\', \'seconds\', or \'ns\'\n                               for date and time to the indicated precision.\n                               Example: 2006-08-14T02:34:56-06:00\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  --resolution               output the available resolution of timestamps\n                               Example: 0.000000001\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -R, --rfc-email            output date and time in RFC 5322 format.\n                               Example: Mon, 14 Aug 2006 02:34:56 -0600\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --rfc-3339=FMT         output date/time in RFC 3339 format.\n                               FMT=\'date\', \'seconds\', or \'ns\'\n                               for date and time to the indicated precision.\n                               Example: 2006-08-14 02:34:56-06:00\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -r, --reference=FILE       display the last modification time of FILE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s, --set=STRING           set time described by STRING\n  -u, --utc, --universal     print or set Coordinated Universal Time (UTC)\n"
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
                             "\nAll options that specify the date to display are mutually exclusive.\nI.e.: --date, --file, --reference, --resolution.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFORMAT controls the output.  Interpreted sequences are:\n\n  %%   a literal %\n  %a   locale\'s abbreviated weekday name (e.g., Sun)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %A   locale\'s full weekday name (e.g., Sunday)\n  %b   locale\'s abbreviated month name (e.g., Jan)\n  %B   locale\'s full month name (e.g., January)\n  %c   locale\'s date and time (e.g., Thu Mar  3 23:05:25 2005)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %C   century; like %Y, except omit last two digits (e.g., 20)\n  %d   day of month (e.g., 01)\n  %D   date (ambiguous); same as %m/%d/%y\n  %e   day of month, space padded; same as %_d\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %F   full date; like %+4Y-%m-%d\n  %g   last two digits of year of ISO week number (ambiguous; 00-99); see %G\n  %G   year of ISO week number; normally useful only with %V\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %h   same as %b\n  %H   hour (00..23)\n  %I   hour (01..12)\n  %j   day of year (001..366)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %k   hour, space padded ( 0..23); same as %_H\n  %l   hour, space padded ( 1..12); same as %_I\n  %m   month (01..12)\n  %M   minute (00..59)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %n   a newline\n  %N   nanoseconds (000000000..999999999)\n  %p   locale\'s equivalent of either AM or PM; blank if not known\n  %P   like %p, but lower case\n  %q   quarter of year (1..4)\n  %r   locale\'s 12-hour clock time (e.g., 11:11:04 PM)\n  %R   24-hour hour and minute; same as %H:%M\n  %s   seconds since the Epoch (1970-01-01 00:00 UTC)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %S   second (00..60)\n  %t   a tab\n  %T   time; same as %H:%M:%S\n  %u   day of week (1..7); 1 is Monday\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %U   week number of year, with Sunday as first day of week (00..53)\n  %V   ISO week number, with Monday as first day of week (01..53)\n  %w   day of week (0..6); 0 is Sunday\n  %W   week number of year, with Monday as first day of week (00..53)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %x   locale\'s date (can be ambiguous; e.g., 12/31/99)\n  %X   locale\'s time representation (e.g., 23:13:48)\n  %y   last two digits of year (ambiguous; 00..99)\n  %Y   year\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %z   +hhmm numeric time zone (e.g., -0400)\n  %:z  +hh:mm numeric time zone (e.g., -04:00)\n  %::z  +hh:mm:ss numeric time zone (e.g., -04:00:00)\n  %:::z  numeric time zone with : to necessary precision (e.g., -04, +05:30)\n  %Z   alphabetic time zone abbreviation (e.g., EDT)\n\nBy default, date pads numeric fields with zeroes.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "The following optional flags may follow \'%\':\n\n  -  (hyphen) do not pad the field\n  _  (underscore) pad with spaces\n  0  (zero) pad with zeros\n  +  pad with zeros, and put \'+\' before future years with >4 digits\n  ^  use upper case if possible\n  #  use opposite case if possible\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nAfter any flags comes an optional field width, as a decimal number;\nthen an optional modifier, which is either\nE to use the locale\'s alternate representations if available, or\nO to use the locale\'s alternate numeric symbols if available.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nExamples:\nConvert seconds since the Epoch (1970-01-01 UTC) to a date\n  $ date --date=\'@2147483647\'\n\nShow the time on the west coast of the US (use tzselect(1) to find TZ)\n  $ TZ=\'America/Los_Angeles\' date\n\nShow the local time for 9AM next Friday on the west coast of the US\n  $ date --date=\'TZ=\"America/Los_Angeles\" 09:00 next Fri\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC3;
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
    iVar2 = strcmp("date",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC4;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_001006bd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC4);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001006bd:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC4);
    if (puVar7 == &_LC4) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_0010015a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(uint param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  FILE *__stream;
  long lVar5;
  char **ppcVar6;
  uint *puVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  char *pcVar15;
  FILE *pFVar16;
  byte bVar17;
  undefined1 *puVar18;
  undefined1 *__n;
  long in_FS_OFFSET;
  char **local_130;
  char *local_128;
  long *local_120;
  char **local_118;
  char **local_110;
  char **local_108;
  byte local_fa;
  byte local_f9;
  char *local_f8;
  size_t local_f0;
  long local_e8;
  long lStack_e0;
  stat local_d8;
  long local_40;
  
  __n = long_options;
  puVar18 = short_options;
  __stream = (FILE *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar13 = &switchD_001020dd::switchdataD_00102960;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_120 = (long *)((ulong)local_120 & 0xffffffffffffff00);
  local_108 = (char **)0x0;
  local_110 = (char **)0x0;
  local_f9 = 0;
  local_fa = 0;
  local_118 = (char **)0x0;
  local_130 = (char **)0x0;
  local_128 = (char *)((ulong)local_128 & 0xffffffffffffff00);
  pcVar15 = (char *)(uint *)0x0;
LAB_00102098:
  do {
    puVar7 = (uint *)pcVar15;
    puVar14 = param_2;
    pFVar16 = __stream;
    iVar2 = getopt_long(__stream,param_2,short_options,long_options,0);
    if (iVar2 == -1) {
      uVar12 = ((((uint)(local_130 != (char **)0x0) - (uint)(local_110 == (char **)0x0)) + 2) -
               (uint)(local_108 == (char **)0x0)) + (uint)local_f9;
      __n = (undefined1 *)(ulong)uVar12;
      if (1 < (int)uVar12) {
        pcVar15 = "the options to specify dates for printing are mutually exclusive";
LAB_00102633:
        uVar8 = dcgettext(0,pcVar15,5);
        error(0,0,uVar8);
        goto switchD_001020dd_caseD_4a;
      }
      pcVar15 = "the options to print and set the time may not be used together";
      puVar13 = (uint *)(ulong)(uVar12 & 1);
      bVar17 = local_fa & (byte)uVar12;
      puVar18 = (undefined1 *)(ulong)bVar17;
      if (bVar17 != 0) goto LAB_00102633;
      if ((char)local_128 == '\0') {
LAB_00102562:
        if (((char)local_120 != '\0') && ((parse_datetime_flags & 1) != 0)) {
          uVar8 = dcgettext(0,"only using last of multiple -s options",5);
          error(0,0,uVar8);
        }
      }
      else if ((parse_datetime_flags & 1) != 0) {
        uVar8 = dcgettext(0,"only using last of multiple -d options",5);
        error(0,0,uVar8);
        goto LAB_00102562;
      }
      lVar11 = (long)_optind;
      if (_optind < (int)param_1) {
        if (_optind + 1 < (int)param_1) goto LAB_00102933;
        if (**(char **)(param_2 + lVar11 * 2) == '+') {
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)(*(char **)(param_2 + lVar11 * 2) + 1);
            _optind = _optind + 1;
            goto LAB_00102365;
          }
          goto LAB_001027e3;
        }
        if (((char)(uVar12 & 1) != '\0') || (local_fa != 0)) {
          quote();
          pcVar15 = 
          "the argument %s lacks a leading \'+\';\nwhen using an option to specify date(s), any non-option\nargument must be a format string beginning with \'+\'"
          ;
          goto LAB_001028c4;
        }
      }
      if (puVar7 == (uint *)0x0) {
        pcVar15 = "%s.%N";
        if (local_f9 == 0) goto LAB_00102777;
        goto LAB_001026c7;
      }
LAB_00102365:
      cVar1 = (char)*puVar7;
      puVar13 = puVar7;
      if (cVar1 == '\0') goto LAB_001023b4;
      goto LAB_00102370;
    }
    if (0x82 < iVar2) goto switchD_001020dd_caseD_4a;
    if (iVar2 < 0x49) {
      if (iVar2 == -0x83) {
        uVar8 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,&_LC4,"GNU coreutils",_Version,uVar8,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 != -0x82) goto switchD_001020dd_caseD_4a;
      usage(0);
      do {
        puVar7 = (uint *)xstrdup(puVar14);
        do {
          lVar5 = gettime_res();
          cVar1 = '\t';
          lVar11 = 1;
          while (SBORROW8(lVar5,lVar11 * 10) == lVar5 + lVar11 * -10 < 0) {
            cVar1 = cVar1 + -1;
            lVar11 = lVar11 * 10;
          }
          *(char *)((long)puVar7 + (long)((long)puVar13 + (1 - (long)puVar14))) = cVar1 + '0';
          puVar13 = (uint *)((long)puVar13 + 2);
LAB_00102380:
          do {
            cVar1 = *(char *)((long)puVar13 + 1);
            puVar13 = (uint *)((long)puVar13 + 1);
            if (cVar1 == '\0') {
              if (puVar7 == (uint *)0x0) {
                puVar7 = puVar14;
              }
LAB_001023b4:
              local_128 = getenv("TZ");
              puVar13 = (uint *)tzalloc(local_128);
              if (local_110 != (char **)0x0) {
                iVar2 = strcmp((char *)local_110,"-");
                if (iVar2 == 0) goto LAB_00102652;
                __stream = (FILE *)rpl_fopen(local_110,&_LC68);
                local_108 = local_110;
                if (__stream != (FILE *)0x0) goto LAB_0010240f;
                goto LAB_0010280c;
              }
              uVar4 = (ulong)__n & 1;
              __n = (undefined1 *)((ulong)__n & 0xffffffffffffff01);
              if ((uVar4 == 0) && (local_fa == 0)) {
                if ((int)param_1 <= _optind) {
                  gettime(&local_e8);
                  goto LAB_00102602;
                }
                local_118 = *(char ***)(param_2 + (long)_optind * 2);
                cVar1 = posixtime(&local_e8,local_118,7);
                lStack_e0 = 0;
                if (cVar1 == '\0') {
LAB_00102743:
                  param_2 = (uint *)quote(local_118);
                  uVar8 = dcgettext(0,"invalid date %s",5);
                  error(1,0,uVar8);
LAB_00102777:
                  pcVar15 = (char *)rpl_nl_langinfo(0x2006c);
                  if ((char)*(uint *)pcVar15 == '\0') {
                    pcVar15 = "%a %b %e %H:%M:%S %Z %Y";
                  }
LAB_001026c7:
                  cVar1 = (char)*(uint *)pcVar15;
                  puVar13 = (uint *)pcVar15;
LAB_00102370:
                  puVar7 = (uint *)0x0;
                  puVar14 = puVar13;
                  goto LAB_0010238c;
                }
LAB_001025f2:
                iVar2 = settime(&local_e8);
                if (iVar2 == 0) goto LAB_00102602;
                uVar8 = dcgettext(0,"cannot set date",5);
                piVar9 = __errno_location();
                error(0,*piVar9,uVar8);
              }
              else {
                if (local_108 == (char **)0x0) {
                  if (local_f9 == 0) {
                    ppcVar6 = local_130;
                    if (local_118 != (char **)0x0) {
                      ppcVar6 = local_118;
                    }
                    cVar1 = parse_datetime2(&local_e8,ppcVar6,0,parse_datetime_flags,puVar13,
                                            local_128);
                    local_118 = ppcVar6;
                    if (cVar1 == '\0') goto LAB_00102743;
                  }
                  else {
                    lStack_e0 = gettime_res();
                    local_e8 = lStack_e0 / 1000000000;
                    lStack_e0 = lStack_e0 % 1000000000;
                  }
                }
                else {
                  iVar2 = stat((char *)local_108,&local_d8);
                  if (iVar2 != 0) goto LAB_0010280c;
                  local_e8 = local_d8.st_mtim.tv_sec;
                  lStack_e0 = local_d8.st_mtim.tv_nsec;
                }
                if (local_fa != 0) goto LAB_001025f2;
LAB_00102602:
                puVar18 = (undefined1 *)0x1;
              }
              uVar12 = show_date_helper(puVar7,local_e8,lStack_e0,puVar13);
              uVar12 = (uint)puVar18 & uVar12;
              goto LAB_001024c1;
            }
LAB_0010238c:
          } while (cVar1 != '%');
          if ((*(char *)((long)puVar13 + 1) != '-') || (*(char *)((long)puVar13 + 2) != 'N')) {
            puVar13 = (uint *)((long)puVar13 + (ulong)(*(char *)((long)puVar13 + 1) == '%'));
            goto LAB_00102380;
          }
        } while (puVar7 != (uint *)0x0);
      } while( true );
    }
    pcVar15 = (char *)puVar7;
    switch(iVar2) {
    case 0x49:
      uVar4 = 0;
      if (_optarg != (char **)0x0) {
        lVar11 = __xargmatch_internal
                           ("--iso-8601",_optarg,time_spec_string,time_spec,4,_argmatch_die,1,
                            pFVar16);
        uVar4 = (ulong)*(uint *)(time_spec + lVar11 * 4);
      }
      pcVar15 = iso_8601_format_0 + uVar4 * 0x20;
      break;
    default:
      goto switchD_001020dd_caseD_4a;
    case 0x52:
      pcVar15 = "%a, %d %b %Y %H:%M:%S %z";
      break;
    case 100:
      cVar1 = (char)local_128;
      if (local_130 != (char **)0x0) {
        cVar1 = '\x01';
      }
      local_130 = _optarg;
      local_128 = (char *)CONCAT71(local_128._1_7_,cVar1);
      goto LAB_00102098;
    case 0x66:
      local_110 = _optarg;
      goto LAB_00102098;
    case 0x72:
      local_108 = _optarg;
      goto LAB_00102098;
    case 0x73:
      goto switchD_001020dd_caseD_73;
    case 0x75:
      iVar2 = putenv("TZ=UTC0");
      if (iVar2 != 0) {
        xalloc_die();
switchD_001020dd_caseD_73:
        local_fa = 1;
        cVar1 = (char)local_120;
        if (local_118 != (char **)0x0) {
          cVar1 = '\x01';
        }
        local_118 = _optarg;
        local_120 = (long *)CONCAT71(local_120._1_7_,cVar1);
      }
      goto LAB_00102098;
    case 0x80:
      parse_datetime_flags = parse_datetime_flags | 1;
      goto LAB_00102098;
    case 0x81:
      local_f9 = 1;
      goto LAB_00102098;
    case 0x82:
      lVar11 = __xargmatch_internal("--rfc-3339",_optarg,0x102df0,0x102b98,4,_argmatch_die,1);
      pcVar15 = rfc_3339_format_1 + (ulong)*(uint *)(time_spec + lVar11 * 4 + 8) * 0x20;
    }
    if (puVar7 != (uint *)0x0) {
LAB_001027e3:
      uVar8 = dcgettext(0,"multiple output formats specified",5);
      error(1,0,uVar8);
      local_108 = local_110;
LAB_0010280c:
      uVar8 = quotearg_n_style_colon(0,3,local_108);
      piVar9 = __errno_location();
      error(1,*piVar9,&_LC69,uVar8);
      do {
        if (local_f8[(long)(puVar18 + -1)] == '\n') {
          local_f8[(long)(puVar18 + -1)] = '\0';
        }
        uVar8 = quote(local_f8);
        uVar10 = dcgettext(0,"invalid date %s",5);
        uVar12 = 0;
        error(0,0,uVar10,uVar8);
LAB_0010247e:
        while (puVar18 = (undefined1 *)__getdelim(local_130,(size_t *)__n,10,__stream),
              (long)puVar18 < 0) {
          if ((__stream->_flags & 0x20) == 0) {
            iVar2 = rpl_fclose();
            local_108 = local_110;
            if (iVar2 != -1) {
              free(local_f8);
LAB_001024c1:
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                return (uVar12 ^ 1) & 0xff;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            goto LAB_0010280c;
          }
          puVar13 = (uint *)quotearg_n_style_colon(0,3,local_110);
          param_2 = (uint *)dcgettext(0,"%s: read error",5);
          piVar9 = __errno_location();
          lVar11 = error(1,*piVar9,param_2,puVar13);
LAB_00102933:
          quote(*(undefined8 *)(param_2 + lVar11 * 2 + 2));
          pcVar15 = "extra operand %s";
LAB_001028c4:
          uVar8 = dcgettext(0,pcVar15,5);
          error(0,0,uVar8);
switchD_001020dd_caseD_4a:
          usage(1);
LAB_00102652:
          local_110 = (char **)dcgettext(0,"standard input",5);
          __stream = _stdin;
LAB_0010240f:
          local_130 = &local_f8;
          uVar12 = 1;
          local_120 = &local_e8;
          __n = (undefined1 *)&local_f0;
          local_f8 = (char *)0x0;
          local_f0 = 0;
        }
        cVar1 = parse_datetime2(local_120,local_f8,0,parse_datetime_flags,puVar13,local_128);
      } while (cVar1 == '\0');
      uVar3 = show_date_helper(puVar7,local_e8,lStack_e0,puVar13);
      uVar12 = uVar12 & uVar3;
      goto LAB_0010247e;
    }
  } while( true );
}


