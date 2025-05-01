
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
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,"Usage: %s OPTION... COMMAND\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Run COMMAND, with modified buffering operations for its standard streams.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --input=MODE   adjust standard input stream buffering\n  -o, --output=MODE  adjust standard output stream buffering\n  -e, --error=MODE   adjust standard error stream buffering\n"
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
                             "\nIf MODE is \'L\' the corresponding stream will be line buffered.\nThis option is invalid with standard input.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nIf MODE is \'0\' the corresponding stream will be unbuffered.\n",5
                            );
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nOtherwise MODE is a number which may be followed by one of the following:\nKB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G,T,P,E,Z,Y,R,Q.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\nIn this case the corresponding stream will be fully buffered with the buffer\nsize set to MODE bytes.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nNOTE: If COMMAND adjusts the buffering of its standard streams (\'tee\' does\nfor example) then that will override corresponding changes by \'stdbuf\'.\nAlso some filters (like \'dd\' and \'cat\' etc.) don\'t use streams for I/O,\nand are thus unaffected by \'stdbuf\' settings.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nExit status:\n  125  if the %s command itself fails\n  126  if COMMAND is found but cannot be invoked\n  127  if COMMAND cannot be found\n  -    the exit status of COMMAND otherwise\n"
                    ,5);
  __printf_chk(2,uVar5,"stdbuf");
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
    iVar2 = strcmp("stdbuf",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "stdbuf";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010031d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","stdbuf");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010031d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","stdbuf");
    if (pcVar4 == "stdbuf") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char **__argv;
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  char **ppcVar11;
  anon_struct_24_3_b431b71b *paVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  char *var;
  char *LD_PRELOAD;
  uintmax_t tmp_size;
  char *search_path [3];
  stat sb;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
LAB_00100e89:
  iVar4 = getopt_long(argc,argv,"+i:o:e:",longopts,0);
  pcVar13 = _optarg;
  if (iVar4 != -1) {
    if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    if (iVar4 < -0x81) {
      if (iVar4 == -0x83) {
        uVar5 = proper_name_lite("Padraig Brady",&_LC37);
        version_etc(_stdout,"stdbuf","GNU coreutils",_Version,uVar5,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else {
      uVar10 = iVar4 - 0x65;
      if ((uVar10 < 0xb) && ((0x411UL >> ((ulong)uVar10 & 0x3f) & 1) != 0)) {
        uVar10 = *(uint *)(CSWTCH_51 + (ulong)uVar10 * 4);
        if (uVar10 < 3) {
          stdbuf[(int)uVar10].optc = iVar4;
          do {
            cVar1 = *pcVar13;
            if (cVar1 < '\x0e') {
              if (cVar1 < '\t') goto LAB_00100f64;
            }
            else if (cVar1 != ' ') goto LAB_00100f64;
            pcVar13 = pcVar13 + 1;
            _optarg = pcVar13;
          } while( true );
        }
        goto LAB_0010136b;
      }
    }
    goto LAB_00101004;
  }
  paVar12 = stdbuf;
  __argv = argv + _optind;
  bVar3 = false;
  if (_optind < argc) {
    do {
      if (paVar12->optarg != (char *)0x0) {
        iVar4 = paVar12->optc;
        if (*paVar12->optarg == 'L') {
          if (iVar4 - 0x61U < 0x1a) {
            iVar4 = iVar4 + -0x20;
          }
          iVar4 = __asprintf_chk(&var,2,"%s%c=L","_STDBUF_",iVar4);
        }
        else {
          if (iVar4 - 0x61U < 0x1a) {
            iVar4 = iVar4 + -0x20;
          }
          iVar4 = __asprintf_chk(&var,2,"%s%c=%zu","_STDBUF_",iVar4,(char *)paVar12->size);
        }
        if (iVar4 < 0) goto LAB_00101366;
        iVar4 = putenv(var);
        if (iVar4 != 0) goto LAB_001013ee;
        bVar3 = true;
      }
      pcVar13 = _program_name;
      paVar12 = paVar12 + 1;
    } while (paVar12 != (anon_struct_24_3_b431b71b *)&program_path);
    if (bVar3) {
      pcVar7 = strchr(_program_name,0x2f);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)xreadlink("/proc/self/exe");
        if (pcVar7 == (char *)0x0) {
          pcVar7 = getenv("PATH");
          if (pcVar7 != (char *)0x0) {
            pcVar7 = (char *)xstrdup(pcVar7);
            pcVar9 = strtok(pcVar7,":");
            while (pcVar9 != (char *)0x0) {
              pcVar9 = (char *)file_name_concat(pcVar9,pcVar13,0);
              iVar4 = access(pcVar9,1);
              if (iVar4 == 0) {
                program_path = (char *)dir_name();
                free(pcVar9);
                break;
              }
              free(pcVar9);
              pcVar9 = strtok((char *)0x0,":");
            }
          }
        }
        else {
          program_path = (char *)dir_name(pcVar7);
        }
        free(pcVar7);
        if (program_path == (char *)0x0) {
          program_path = (char *)xstrdup("/usr/local/lib/coreutils");
        }
      }
      else {
        program_path = (char *)dir_name(pcVar13);
      }
      pcVar13 = getenv("LD_PRELOAD");
      search_path[1] = "/usr/local/libexec/coreutils";
      search_path[0] = program_path;
      search_path[2] = (char *)0x0;
      if (*program_path != '\0') {
        ppcVar11 = search_path;
        pcVar7 = program_path;
        do {
          iVar4 = __asprintf_chk(&tmp_size,2,"%s/%s",pcVar7,"libstdbuf.so");
          if (iVar4 < 0) goto LAB_00101366;
          iVar4 = stat((char *)tmp_size,(stat *)&sb);
          if (iVar4 == 0) goto LAB_00101185;
          ppcVar11 = ppcVar11 + 1;
          free((void *)tmp_size);
          pcVar7 = *ppcVar11;
          if (pcVar7 == (char *)0x0) {
            uVar5 = quote("libstdbuf.so");
            uVar8 = dcgettext(0,"failed to find %s",5);
            error(0x7d,0,uVar8,uVar5);
            goto LAB_001013c7;
          }
        } while (*pcVar7 != '\0');
      }
      tmp_size = xstrdup("libstdbuf.so");
LAB_00101185:
      if (pcVar13 == (char *)0x0) {
        iVar4 = __asprintf_chk(&LD_PRELOAD,2,"%s=%s","LD_PRELOAD",tmp_size);
      }
      else {
        iVar4 = __asprintf_chk(&LD_PRELOAD,2,"%s=%s:%s","LD_PRELOAD",pcVar13);
      }
      if (-1 < iVar4) {
        free((void *)tmp_size);
        iVar4 = putenv(LD_PRELOAD);
        var = LD_PRELOAD;
        if (iVar4 == 0) {
          free(program_path);
          execvp(*__argv,__argv);
          piVar6 = __errno_location();
          iVar4 = *piVar6;
          uVar5 = quote(*__argv);
          uVar8 = dcgettext(0,"failed to run command %s",5);
          error(0,*piVar6,uVar8,uVar5);
          if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
            return (iVar4 == 2) + 0x7e;
          }
        }
        else {
LAB_001013ee:
          uVar5 = quote(var);
          uVar8 = dcgettext(0,"failed to update the environment with %s",5);
          piVar6 = __errno_location();
          error(0x7d,*piVar6,uVar8,uVar5);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_00101366:
      xalloc_die();
LAB_0010136b:
                    /* WARNING: Subroutine does not return */
      __assert_fail("0 <= opt_fileno && opt_fileno < (sizeof (stdbuf) / sizeof *(stdbuf))",
                    "src/stdbuf.c",0x14d,"main");
    }
    pcVar13 = "you must specify a buffering mode option";
  }
  else {
LAB_001013c7:
    pcVar13 = "missing operand";
  }
LAB_00100fef:
  uVar5 = dcgettext(0,pcVar13,5);
  error(0,0,uVar5);
LAB_00101004:
                    /* WARNING: Subroutine does not return */
  usage(0x7d);
LAB_00100f64:
  stdbuf[(int)uVar10].optarg = pcVar13;
  if ((iVar4 == 0x69) && (*pcVar13 == 'L')) {
    pcVar13 = "line buffering stdin is meaningless";
    goto LAB_00100fef;
  }
  if ((*pcVar13 != 'L') || (pcVar13[1] != '\0')) {
    iVar4 = xstrtoumax(pcVar13,0,10,&tmp_size);
    if (iVar4 != 0) {
      piVar6 = __errno_location();
      if (iVar4 == 1) {
        iVar4 = 0x4b;
      }
      else {
        iVar4 = *piVar6;
      }
      *piVar6 = iVar4;
      uVar5 = quote(_optarg);
      uVar8 = dcgettext(0,"invalid mode %s",5);
      error(0x7d,*piVar6,uVar8,uVar5);
      goto LAB_00101366;
    }
    piVar6 = __errno_location();
    *piVar6 = 0;
    stdbuf[(int)uVar10].size = tmp_size;
  }
  goto LAB_00100e89;
}


