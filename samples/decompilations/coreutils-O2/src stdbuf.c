
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
    iVar2 = strcmp("stdbuf",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char main(uint param_1,undefined8 *param_2)

{
  char **__argv;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  char **ppcVar11;
  undefined8 *puVar12;
  int iVar13;
  stat *__buf;
  long lVar14;
  long in_FS_OFFSET;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0 [3];
  stat local_d8;
  long local_40;
  
  __buf = (stat *)(ulong)param_1;
  iVar13 = 0x100502;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
LAB_00100e89:
  iVar3 = getopt_long(__buf,param_2,"+i:o:e:",longopts,0);
  pcVar6 = _optarg;
  if (iVar3 == -1) goto LAB_0010100e;
  if (iVar3 != -0x82) {
    if (iVar3 < -0x81) {
      if (iVar3 == -0x83) {
        uVar4 = proper_name_lite("Padraig Brady",&_LC37);
        version_etc(_stdout,"stdbuf","GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else {
      uVar10 = iVar3 - 0x65;
      if ((uVar10 < 0xb) && ((0x411UL >> ((ulong)uVar10 & 0x3f) & 1) != 0)) {
        lVar14 = (long)(int)*(uint *)(CSWTCH_51 + (ulong)uVar10 * 4);
        if (*(uint *)(CSWTCH_51 + (ulong)uVar10 * 4) < 3) {
          *(int *)(&DAT_00100468 + lVar14 * 0x18) = iVar3;
          do {
            cVar1 = *pcVar6;
            if (cVar1 < '\x0e') {
              if (cVar1 < '\t') goto LAB_00100f64;
            }
            else if (cVar1 != ' ') goto LAB_00100f64;
            pcVar6 = pcVar6 + 1;
            _optarg = pcVar6;
          } while( true );
        }
        goto LAB_0010136b;
      }
    }
    goto LAB_00101004;
  }
  usage(0);
LAB_0010131f:
  piVar7 = __errno_location();
  if (iVar13 == 1) {
    iVar13 = 0x4b;
  }
  else {
    iVar13 = *piVar7;
  }
  *piVar7 = iVar13;
  uVar4 = quote(_optarg);
  uVar8 = dcgettext(0,"invalid mode %s",5);
  error(0x7d,*piVar7,uVar8,uVar4);
LAB_00101366:
  xalloc_die();
LAB_0010136b:
                    /* WARNING: Subroutine does not return */
  __assert_fail("0 <= opt_fileno && opt_fileno < (sizeof (stdbuf) / sizeof *(stdbuf))",
                "src/stdbuf.c",0x14d,"main");
LAB_00100f64:
  *(char **)(&DAT_00100470 + lVar14 * 0x18) = pcVar6;
  if ((iVar3 == 0x69) && (*pcVar6 == 'L')) {
    pcVar6 = "line buffering stdin is meaningless";
    goto LAB_00100fef;
  }
  if ((*pcVar6 != 'L') || (pcVar6[1] != '\0')) {
    iVar13 = xstrtoumax(pcVar6,0,10,&local_100);
    if (iVar13 != 0) goto LAB_0010131f;
    piVar7 = __errno_location();
    *piVar7 = 0;
    (&stdbuf)[lVar14 * 3] = local_100;
  }
  goto LAB_00100e89;
LAB_00101004:
  usage(0x7d);
LAB_0010100e:
  puVar12 = &stdbuf;
  __argv = (char **)(param_2 + _optind);
  param_2 = &program_path;
  bVar2 = false;
  if (_optind < (int)__buf) {
    do {
      if ((char *)puVar12[2] != (char *)0x0) {
        iVar13 = *(int *)(puVar12 + 1);
        if (*(char *)puVar12[2] == 'L') {
          if (iVar13 - 0x61U < 0x1a) {
            iVar13 = iVar13 + -0x20;
          }
          iVar13 = __asprintf_chk(&local_110,2,"%s%c=L","_STDBUF_",iVar13);
        }
        else {
          if (iVar13 - 0x61U < 0x1a) {
            iVar13 = iVar13 + -0x20;
          }
          iVar13 = __asprintf_chk(&local_110,2,"%s%c=%zu","_STDBUF_",iVar13,*puVar12);
        }
        if (iVar13 < 0) goto LAB_00101366;
        iVar13 = putenv(local_110);
        if (iVar13 != 0) goto LAB_001013ee;
        bVar2 = true;
      }
      pcVar6 = _program_name;
      puVar12 = puVar12 + 3;
    } while ((char **)puVar12 != &program_path);
    if (bVar2) {
      pcVar5 = strchr(_program_name,0x2f);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)xreadlink("/proc/self/exe");
        if (pcVar5 == (char *)0x0) {
          pcVar5 = getenv("PATH");
          if (pcVar5 != (char *)0x0) {
            pcVar5 = (char *)xstrdup(pcVar5);
            pcVar9 = strtok(pcVar5,":");
            while (pcVar9 != (char *)0x0) {
              pcVar9 = (char *)file_name_concat(pcVar9,pcVar6,0);
              iVar13 = access(pcVar9,1);
              if (iVar13 == 0) {
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
          program_path = (char *)dir_name(pcVar5);
        }
        free(pcVar5);
        if (program_path == (char *)0x0) {
          program_path = (char *)xstrdup("/usr/local/lib/coreutils");
        }
      }
      else {
        program_path = (char *)dir_name(pcVar6);
      }
      pcVar6 = getenv("LD_PRELOAD");
      local_f0[0] = "/usr/local/libexec/coreutils";
      local_f8 = program_path;
      local_f0[1] = (char *)0x0;
      if (*program_path == '\0') {
LAB_0010128b:
        local_100 = (char *)xstrdup("libstdbuf.so");
LAB_00101185:
        if (pcVar6 == (char *)0x0) {
          iVar13 = __asprintf_chk(&local_108,2,"%s=%s","LD_PRELOAD",local_100);
        }
        else {
          iVar13 = __asprintf_chk(&local_108,2,"%s=%s:%s","LD_PRELOAD",pcVar6);
        }
        if (-1 < iVar13) {
          free(local_100);
          iVar13 = putenv(local_108);
          local_110 = local_108;
          if (iVar13 == 0) {
            free(program_path);
            execvp(*__argv,__argv);
            piVar7 = __errno_location();
            iVar13 = *piVar7;
            uVar4 = quote(*__argv);
            uVar8 = dcgettext(0,"failed to run command %s",5);
            error(0,*piVar7,uVar8,uVar4);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return (iVar13 == 2) + '~';
            }
          }
          else {
LAB_001013ee:
            uVar4 = quote(local_110);
            uVar8 = dcgettext(0,"failed to update the environment with %s",5);
            piVar7 = __errno_location();
            error(0x7d,*piVar7,uVar8,uVar4);
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        goto LAB_00101366;
      }
      ppcVar11 = &local_f8;
      __buf = &local_d8;
      pcVar5 = program_path;
      while( true ) {
        iVar13 = __asprintf_chk(&local_100,2,"%s/%s",pcVar5,"libstdbuf.so");
        if (iVar13 < 0) goto LAB_00101366;
        iVar13 = stat(local_100,__buf);
        if (iVar13 == 0) goto LAB_00101185;
        ppcVar11 = ppcVar11 + 1;
        free(local_100);
        pcVar5 = *ppcVar11;
        if (pcVar5 == (char *)0x0) break;
        if (*pcVar5 == '\0') goto LAB_0010128b;
      }
      param_2 = (undefined8 *)quote("libstdbuf.so");
      uVar4 = dcgettext(0,"failed to find %s",5);
      error(0x7d,0,uVar4,param_2);
      goto LAB_001013c7;
    }
    pcVar6 = "you must specify a buffering mode option";
  }
  else {
LAB_001013c7:
    pcVar6 = "missing operand";
  }
LAB_00100fef:
  uVar4 = dcgettext(0,pcVar6,5);
  error(0,0,uVar4);
  goto LAB_00101004;
}


