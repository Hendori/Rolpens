
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void maybe_close_stdout(void)

{
  int iVar1;
  
  if (!stdout_closed) {
    close_stdout();
    return;
  }
  iVar1 = close_stream(_stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(1);
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
    goto LAB_0010009a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [TEMPLATE]\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Create a temporary file or directory, safely, and print its name.\nTEMPLATE must contain at least 3 consecutive \'X\'s in last component.\nIf TEMPLATE is not specified, use tmp.XXXXXXXXXX, and --tmpdir is implied.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Files are created u+rw, and directories u+rwx, minus umask restrictions.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  fputc_unlocked(10,_stdout);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -d, --directory     create a directory, not a file\n  -u, --dry-run       do not create anything; merely print a name (unsafe)\n  -q, --quiet         suppress diagnostics about file/dir-creation failure\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --suffix=SUFF   append SUFF to TEMPLATE; SUFF must not contain a slash.\n                        This option is implied if TEMPLATE does not end in X\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -p DIR, --tmpdir[=DIR]  interpret TEMPLATE relative to DIR; if DIR is not\n                        specified, use $TMPDIR if set, else /tmp.  With\n                        this option, TEMPLATE must not be an absolute name;\n                        unlike with -t, TEMPLATE may contain slashes, but\n                        mktemp creates only the final component\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t                  interpret TEMPLATE as a single file name component,\n                        relative to a directory: $TMPDIR, if set; else the\n                        directory specified via -p; else /tmp [deprecated]\n"
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
    iVar2 = strcmp("mktemp",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "mktemp";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100325;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","mktemp");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100325:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","mktemp");
    if (pcVar4 == "mktemp") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010009a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  size_t sVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  int *piVar14;
  char *__s;
  ulong uVar15;
  char *local_50;
  char *local_48;
  char local_3c;
  
  bVar1 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit(maybe_close_stdout);
  local_3c = '\0';
  bVar3 = false;
  bVar2 = false;
  local_50 = (char *)0x0;
  bVar4 = false;
  local_48 = (char *)0x0;
  while (iVar5 = getopt_long(argc,argv,"dp:qtuV",longopts,0), iVar5 != -1) {
    if (0x80 < iVar5) goto switchD_00100e37_caseD_57;
    if (iVar5 < 0x56) {
      if (iVar5 == -0x83) {
switchD_00100e37_caseD_56:
        uVar6 = proper_name_lite("Eric Blake","Eric Blake");
        uVar7 = proper_name_lite("Jim Meyering","Jim Meyering");
        version_etc(_stdout,"mktemp","GNU coreutils",_Version,uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00100e37_caseD_57;
    }
    switch(iVar5) {
    case 0x56:
      goto switchD_00100e37_caseD_56;
    default:
      goto switchD_00100e37_caseD_57;
    case 100:
      bVar3 = true;
      break;
    case 0x70:
      local_48 = _optarg;
      bVar1 = true;
      break;
    case 0x71:
      bVar4 = true;
      break;
    case 0x74:
      bVar2 = true;
      bVar1 = true;
      break;
    case 0x75:
      local_3c = '\x01';
      break;
    case 0x80:
      local_50 = _optarg;
    }
  }
  if (1 < argc - _optind) {
    uVar6 = dcgettext(0,"too many templates",5);
    error(0,0,uVar6);
switchD_00100e37_caseD_57:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (argc == _optind) {
    bVar1 = true;
    pcVar13 = "tmp.XXXXXXXXXX";
    if (local_50 == (char *)0x0) goto LAB_0010126e;
    sVar8 = 0xe;
    bVar1 = true;
    pcVar13 = "tmp.XXXXXXXXXX";
  }
  else {
    pcVar13 = argv[_optind];
    if (local_50 == (char *)0x0) goto LAB_0010126e;
    sVar8 = strlen(pcVar13);
    if ((sVar8 == 0) || (pcVar13[sVar8 - 1] != 'X')) {
      uVar6 = quote(pcVar13);
      pcVar10 = "with --suffix, template %s must end in X";
      goto LAB_00101253;
    }
  }
  sVar9 = strlen(local_50);
  uVar15 = sVar9 + 1 + sVar8;
  pcVar10 = (char *)xcharalloc(uVar15);
  __memcpy_chk(pcVar10,pcVar13,sVar8,uVar15);
  pcVar13 = pcVar10 + sVar8;
  if (uVar15 < sVar8) {
    uVar15 = sVar8;
  }
  __memcpy_chk(pcVar13,local_50,sVar9 + 1,uVar15 - sVar8);
  __s = pcVar10;
LAB_00100f9c:
  if ((sVar9 == 0) || (pcVar11 = (char *)last_component(pcVar13), pcVar13 == pcVar11)) {
    uVar15 = 0;
    lVar12 = (long)pcVar13 - (long)__s;
    if (lVar12 != 0) {
      do {
        lVar12 = lVar12 + -1;
        if (__s[lVar12] != 'X') break;
        uVar15 = uVar15 + 1;
      } while (lVar12 != 0);
      if (2 < uVar15) {
        pcVar10 = __s;
        if (!bVar1) goto LAB_00101037;
        if (bVar2) {
          pcVar10 = getenv("TMPDIR");
          if ((((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) &&
              (pcVar10 = "/tmp", local_48 != (char *)0x0)) && (*local_48 != '\0')) {
            pcVar10 = local_48;
          }
          pcVar11 = (char *)last_component(__s);
          if (__s != pcVar11) {
            uVar6 = quote(__s);
            pcVar10 = "invalid template, %s, contains directory separator";
            goto LAB_00101253;
          }
LAB_0010101c:
          pcVar10 = (char *)file_name_concat(pcVar10,__s,0);
          free(__s);
LAB_00101037:
          pcVar13 = (char *)xstrdup(pcVar10);
          if (bVar3) {
            iVar5 = gen_tempname_len(pcVar13,sVar9 & 0xffffffff,0,local_3c + '\x01',uVar15);
            if (iVar5 == 0) {
              puts(pcVar13);
              if (local_3c != '\0') {
                return 0;
              }
LAB_00101121:
              stdout_closed = true;
              iVar5 = close_stream(_stdout);
              if (iVar5 == 0) {
                return 0;
              }
              piVar14 = __errno_location();
              iVar5 = *piVar14;
              remove(pcVar13);
              if (bVar4) {
                return 1;
              }
              uVar6 = dcgettext(0,"write error",5);
              error(0,iVar5,uVar6);
              return 1;
            }
            if (bVar4) {
              return 1;
            }
            uVar6 = quote(pcVar10);
            pcVar13 = "failed to create directory via template %s";
          }
          else {
            iVar5 = gen_tempname_len(pcVar13,sVar9 & 0xffffffff,0,local_3c * '\x02',uVar15);
            if (-1 < iVar5) {
              if (local_3c != '\0') {
                puts(pcVar13);
                return 0;
              }
              iVar5 = close(iVar5);
              if (iVar5 == 0) {
                puts(pcVar13);
                goto LAB_00101121;
              }
            }
            if (bVar4) {
              return 1;
            }
            uVar6 = quote(pcVar10);
            pcVar13 = "failed to create file via template %s";
          }
          uVar7 = dcgettext(0,pcVar13,5);
          piVar14 = __errno_location();
          error(0,*piVar14,uVar7,uVar6);
          return 1;
        }
        if (((local_48 == (char *)0x0) || (pcVar10 = local_48, *local_48 == '\0')) &&
           ((pcVar10 = getenv("TMPDIR"), pcVar10 == (char *)0x0 || (*pcVar10 == '\0')))) {
          pcVar10 = "/tmp";
        }
        if (*__s != '/') goto LAB_0010101c;
        uVar6 = quote(__s);
        pcVar10 = "invalid template, %s; with --tmpdir, it may not be absolute";
        goto LAB_00101253;
      }
    }
    if (__s == pcVar10) {
      *pcVar13 = '\0';
    }
    uVar6 = quote(__s);
    pcVar10 = "too few X\'s in template %s";
  }
  else {
    uVar6 = quote(pcVar13);
    pcVar10 = "invalid suffix %s, contains directory separator";
  }
LAB_00101253:
  uVar7 = dcgettext(0,pcVar10,5);
  error(1,0,uVar7,uVar6);
LAB_0010126e:
  __s = (char *)xstrdup(pcVar13);
  pcVar10 = strrchr(__s,0x58);
  pcVar13 = pcVar10 + 1;
  if (pcVar10 == (char *)0x0) {
    sVar8 = strlen(__s);
    pcVar13 = __s + sVar8;
  }
  pcVar10 = (char *)0x0;
  sVar9 = strlen(pcVar13);
  goto LAB_00100f9c;
}


