
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Bool show_date_helper(char *format,timespec when,timezone_t tz)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((byte)parse_datetime_flags & 1) != 0) {
    uVar3 = quote();
    uVar4 = dcgettext(0,"output format: %s",5);
    error(0,0,uVar4,uVar3);
  }
  if (format == "%a, %d %b %Y %H:%M:%S %z") {
    setlocale(2,"C");
    uVar2 = show_date("%a, %d %b %Y %H:%M:%S %z",when.tv_sec,when.tv_nsec,tz);
    setlocale(2,"");
  }
  else {
    uVar2 = show_date(format,when.tv_sec,when.tv_nsec,tz);
  }
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
    return (_Bool)uVar2;
  }
  __overflow(_stdout,10);
  return (_Bool)uVar2;
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
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("date",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  timespec when_00;
  timespec when_01;
  char cVar2;
  _Bool _Var3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  FILE *__stream;
  long lVar9;
  char **ppcVar10;
  char *pcVar11;
  int *piVar12;
  undefined8 uVar13;
  uint *tz;
  char *pcVar14;
  FILE *pFVar15;
  byte bVar16;
  char *pcVar17;
  uint uVar18;
  option *__n;
  long in_FS_OFFSET;
  char **local_130;
  char *local_128;
  timespec *local_120;
  char **local_118;
  char **local_110;
  char **local_108;
  byte local_fa;
  byte local_f9;
  char *line;
  size_t buflen;
  timespec when;
  stat refstats;
  
  __n = long_options;
  pcVar17 = "d:f:I::r:Rs:u";
  __stream = (FILE *)(ulong)(uint)argc;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  tz = &switchD_001020dd::switchdataD_00102960;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_120 = (timespec *)((ulong)local_120 & 0xffffffffffffff00);
  local_108 = (char **)0x0;
  local_110 = (char **)0x0;
  local_f9 = 0;
  local_fa = 0;
  local_118 = (char **)0x0;
  local_130 = (char **)0x0;
  local_128 = (char *)((ulong)local_128 & 0xffffffffffffff00);
  pcVar14 = (char *)0x0;
LAB_00102098:
  do {
    pcVar11 = pcVar14;
    pFVar15 = __stream;
    iVar4 = getopt_long(__stream,argv,"d:f:I::r:Rs:u",long_options,0);
    if (iVar4 == -1) {
      uVar18 = ((((uint)(local_130 != (char **)0x0) - (uint)(local_110 == (char **)0x0)) + 2) -
               (uint)(local_108 == (char **)0x0)) + (uint)local_f9;
      __n = (option *)(ulong)uVar18;
      if ((int)uVar18 < 2) {
        pcVar14 = "the options to print and set the time may not be used together";
        tz = (uint *)(ulong)(uVar18 & 1);
        bVar16 = local_fa & (byte)uVar18;
        pcVar17 = (char *)(ulong)bVar16;
        if (bVar16 == 0) {
          if ((char)local_128 == '\0') {
LAB_00102562:
            if (((char)local_120 != '\0') && ((parse_datetime_flags & 1) != 0)) {
              uVar6 = dcgettext(0,"only using last of multiple -s options",5);
              error(0,0,uVar6);
            }
          }
          else if ((parse_datetime_flags & 1) != 0) {
            uVar6 = dcgettext(0,"only using last of multiple -d options",5);
            error(0,0,uVar6);
            goto LAB_00102562;
          }
          lVar7 = (long)_optind;
          if (_optind < argc) {
            if (_optind + 1 < argc) goto LAB_00102933;
            if (*argv[lVar7] != '+') {
              if (((char)(uVar18 & 1) == '\0') && (local_fa == 0)) goto LAB_0010235c;
              uVar6 = quote();
              pcVar14 = 
              "the argument %s lacks a leading \'+\';\nwhen using an option to specify date(s), any non-option\nargument must be a format string beginning with \'+\'"
              ;
              goto LAB_001028c4;
            }
            if (pcVar11 != (char *)0x0) break;
            pcVar11 = argv[lVar7] + 1;
            _optind = _optind + 1;
          }
          else {
LAB_0010235c:
            if (pcVar11 == (char *)0x0) {
              pcVar11 = "%s.%N";
              if (local_f9 == 0) goto LAB_00102777;
              goto LAB_001026c7;
            }
          }
          cVar2 = *pcVar11;
          pcVar14 = pcVar11;
          if (cVar2 == '\0') goto LAB_001023b4;
          goto LAB_00102370;
        }
      }
      else {
        pcVar14 = "the options to specify dates for printing are mutually exclusive";
      }
      uVar6 = dcgettext(0,pcVar14,5);
      error(0,0,uVar6);
      goto switchD_001020dd_caseD_4a;
    }
    if (0x82 < iVar4) goto switchD_001020dd_caseD_4a;
    if (iVar4 < 0x49) {
      if (iVar4 == -0x83) {
        uVar6 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,&_LC4,"GNU coreutils",_Version,uVar6,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001020dd_caseD_4a;
    }
    pcVar14 = pcVar11;
    switch(iVar4) {
    case 0x49:
      uVar5 = 0;
      if (_optarg != (char **)0x0) {
        lVar7 = __xargmatch_internal
                          ("--iso-8601",_optarg,time_spec_string,time_spec,4,_argmatch_die,1,pFVar15
                          );
        uVar5 = (ulong)time_spec[lVar7];
      }
      pcVar14 = main::lexical_block_20::lexical_block_20_2::iso_8601_format[uVar5];
      break;
    default:
      goto switchD_001020dd_caseD_4a;
    case 0x52:
      pcVar14 = "%a, %d %b %Y %H:%M:%S %z";
      break;
    case 100:
      cVar2 = (char)local_128;
      if (local_130 != (char **)0x0) {
        cVar2 = '\x01';
      }
      local_130 = _optarg;
      local_128 = (char *)CONCAT71(local_128._1_7_,cVar2);
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
      iVar4 = putenv("TZ=UTC0");
      if (iVar4 != 0) {
        xalloc_die();
switchD_001020dd_caseD_73:
        local_fa = 1;
        cVar2 = (char)local_120;
        if (local_118 != (char **)0x0) {
          cVar2 = '\x01';
        }
        local_118 = _optarg;
        local_120 = (timespec *)CONCAT71(local_120._1_7_,cVar2);
      }
      goto LAB_00102098;
    case 0x80:
      parse_datetime_flags = parse_datetime_flags | 1;
      goto LAB_00102098;
    case 0x81:
      local_f9 = 1;
      goto LAB_00102098;
    case 0x82:
      lVar7 = __xargmatch_internal("--rfc-3339",_optarg,0x102df0,0x102b98,4,_argmatch_die,1);
      pcVar14 = main::lexical_block_20::lexical_block_20_1::rfc_3339_format[time_spec[lVar7 + 2]];
    }
  } while (pcVar11 == (char *)0x0);
  uVar6 = dcgettext(0,"multiple output formats specified",5);
  error(1,0,uVar6);
  local_108 = local_110;
LAB_0010280c:
  uVar6 = quotearg_n_style_colon(0,3,local_108);
  piVar12 = __errno_location();
  error(1,*piVar12,&_LC69,uVar6);
  do {
    if (line[(long)(pcVar17 + -1)] == '\n') {
      line[(long)(pcVar17 + -1)] = '\0';
    }
    uVar6 = quote(line);
    uVar13 = dcgettext(0,"invalid date %s",5);
    uVar18 = 0;
    error(0,0,uVar13,uVar6);
LAB_0010247e:
    while( true ) {
      pcVar17 = (char *)__getdelim(local_130,(size_t *)__n,10,__stream);
      if ((long)pcVar17 < 0) {
        if ((__stream->_flags & 0x20) != 0) {
          uVar6 = quotearg_n_style_colon(0,3,local_110);
          argv = (char **)dcgettext(0,"%s: read error",5);
          piVar12 = __errno_location();
          lVar7 = error(1,*piVar12,argv,uVar6);
          goto LAB_00102933;
        }
        iVar4 = rpl_fclose();
        local_108 = local_110;
        if (iVar4 == -1) goto LAB_0010280c;
        free(line);
        goto LAB_001024c1;
      }
      cVar2 = parse_datetime2(local_120,line,0,parse_datetime_flags,tz,local_128);
      if (cVar2 == '\0') break;
      when_00.tv_nsec = when.tv_nsec;
      when_00.tv_sec = when.tv_sec;
      _Var3 = show_date_helper(pcVar11,when_00,(timezone_t)tz);
      uVar18 = uVar18 & _Var3;
    }
  } while( true );
LAB_00102370:
  pcVar14 = (char *)0x0;
  pcVar8 = pcVar11;
  do {
    if (cVar2 == '%') {
      if ((pcVar8[1] == '-') && (pcVar8[2] == 'N')) {
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)xstrdup(pcVar11);
        }
        lVar9 = gettime_res();
        cVar2 = '\t';
        lVar7 = 1;
        while (SBORROW8(lVar9,lVar7 * 10) == lVar9 + lVar7 * -10 < 0) {
          cVar2 = cVar2 + -1;
          lVar7 = lVar7 * 10;
        }
        pcVar14[(long)(pcVar8 + (1 - (long)pcVar11))] = cVar2 + '0';
        pcVar8 = pcVar8 + 2;
      }
      else {
        pcVar8 = pcVar8 + (pcVar8[1] == '%');
      }
    }
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  if (pcVar14 == (char *)0x0) {
    pcVar14 = pcVar11;
  }
LAB_001023b4:
  local_128 = getenv("TZ");
  tz = (uint *)tzalloc(local_128);
  pcVar11 = pcVar14;
  if (local_110 != (char **)0x0) {
    iVar4 = strcmp((char *)local_110,"-");
    if (iVar4 == 0) {
      local_110 = (char **)dcgettext(0,"standard input",5);
      __stream = _stdin;
    }
    else {
      __stream = (FILE *)rpl_fopen(local_110,&_LC68);
      local_108 = local_110;
      if (__stream == (FILE *)0x0) goto LAB_0010280c;
    }
    local_130 = &line;
    uVar18 = 1;
    local_120 = &when;
    __n = (option *)&buflen;
    line = (char *)0x0;
    buflen = 0;
    goto LAB_0010247e;
  }
  uVar5 = (ulong)__n & 1;
  __n = (option *)((ulong)__n & 0xffffffffffffff01);
  if ((uVar5 != 0) || (local_fa != 0)) {
    if (local_108 == (char **)0x0) {
      if (local_f9 == 0) {
        ppcVar10 = local_130;
        if (local_118 != (char **)0x0) {
          ppcVar10 = local_118;
        }
        cVar2 = parse_datetime2(&when,ppcVar10,0,parse_datetime_flags,tz,local_128);
        local_118 = ppcVar10;
        if (cVar2 == '\0') goto LAB_00102743;
      }
      else {
        lVar7 = gettime_res();
        when.tv_sec = lVar7 / 1000000000;
        when.tv_nsec = lVar7 % 1000000000;
      }
    }
    else {
      iVar4 = stat((char *)local_108,(stat *)&refstats);
      if (iVar4 != 0) goto LAB_0010280c;
      when.tv_sec = refstats.st_mtim.tv_sec;
      when.tv_nsec = refstats.st_mtim.tv_nsec;
    }
    if (local_fa == 0) goto LAB_00102602;
LAB_001025f2:
    iVar4 = settime(&when);
    if (iVar4 == 0) {
LAB_00102602:
      pcVar17 = (char *)0x1;
    }
    else {
      uVar6 = dcgettext(0,"cannot set date",5);
      piVar12 = __errno_location();
      error(0,*piVar12,uVar6);
    }
    when_01.tv_nsec = when.tv_nsec;
    when_01.tv_sec = when.tv_sec;
    _Var3 = show_date_helper(pcVar14,when_01,(timezone_t)tz);
    uVar18 = (uint)pcVar17 & (uint)_Var3;
LAB_001024c1:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar18 ^ 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (argc <= _optind) {
    gettime(&when);
    goto LAB_00102602;
  }
  local_118 = (char **)argv[_optind];
  cVar2 = posixtime(&when,local_118,7);
  when.tv_nsec = 0;
  if (cVar2 != '\0') goto LAB_001025f2;
LAB_00102743:
  argv = (char **)quote(local_118);
  uVar6 = dcgettext(0,"invalid date %s",5);
  error(1,0,uVar6);
LAB_00102777:
  pcVar11 = (char *)rpl_nl_langinfo(0x2006c);
  if (*pcVar11 == '\0') {
    pcVar11 = "%a %b %e %H:%M:%S %Z %Y";
  }
LAB_001026c7:
  cVar2 = *pcVar11;
  goto LAB_00102370;
LAB_00102933:
  uVar6 = quote(argv[lVar7 + 1]);
  pcVar14 = "extra operand %s";
LAB_001028c4:
  uVar13 = dcgettext(0,pcVar14,5);
  error(0,0,uVar13,uVar6);
switchD_001020dd_caseD_4a:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


