
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_close_stdout(void)

{
  int iVar1;
  
  if (stdout_closed == '\0') {
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
    iVar2 = strcmp("mktemp",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  int *piVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  size_t sVar13;
  ulong uVar14;
  uint *puVar15;
  char *pcVar16;
  char *local_50;
  char *local_48;
  char local_3c;
  
  bVar1 = false;
  pcVar16 = "dp:qtuV";
  pcVar8 = (char *)(ulong)param_1;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar15 = &switchD_00100e37::switchdataD_00101364;
  textdomain("coreutils");
  atexit(maybe_close_stdout);
  local_3c = '\0';
  bVar3 = false;
  bVar2 = false;
  local_50 = (char *)0x0;
  bVar4 = false;
  local_48 = (char *)0x0;
  while (iVar5 = getopt_long(param_1,param_2,"dp:qtuV",longopts,0), iVar5 != -1) {
    if (0x80 < iVar5) goto switchD_00100e37_caseD_57;
    if (iVar5 < 0x56) {
      if (iVar5 == -0x83) {
switchD_00100e37_caseD_56:
        uVar10 = proper_name_lite("Eric Blake","Eric Blake");
        uVar6 = proper_name_lite("Jim Meyering","Jim Meyering");
        version_etc(_stdout,"mktemp","GNU coreutils",_Version,uVar6,uVar10,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar5 == -0x82) {
        usage(0);
        pcVar8 = longopts;
        goto LAB_001011fa;
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
  param_1 = param_1 - _optind;
  pcVar8 = (char *)(ulong)param_1;
  if ((int)param_1 < 2) {
    if (param_1 == 0) {
      bVar1 = true;
      pcVar8 = "tmp.XXXXXXXXXX";
      if (local_50 == (char *)0x0) goto LAB_0010126e;
      sVar13 = 0xe;
      bVar1 = true;
      pcVar8 = "tmp.XXXXXXXXXX";
    }
    else {
      pcVar8 = (char *)param_2[_optind];
      if (local_50 == (char *)0x0) goto LAB_0010126e;
      sVar13 = strlen(pcVar8);
      if ((sVar13 == 0) || (pcVar8[sVar13 - 1] != 'X')) {
        uVar10 = quote(pcVar8);
        pcVar16 = "with --suffix, template %s must end in X";
        goto LAB_00101253;
      }
    }
    param_2 = (undefined8 *)strlen(local_50);
    uVar14 = (long)param_2 + sVar13 + 1;
    pcVar11 = (char *)xcharalloc(uVar14);
    __memcpy_chk(pcVar11,pcVar8,sVar13,uVar14);
    pcVar8 = pcVar11 + sVar13;
    if (uVar14 < sVar13) {
      uVar14 = sVar13;
    }
    __memcpy_chk(pcVar8,local_50,(long)param_2 + 1,uVar14 - sVar13);
    pcVar16 = pcVar11;
LAB_00100f9c:
    if ((param_2 != (undefined8 *)0x0) &&
       (pcVar12 = (char *)last_component(pcVar8), pcVar8 != pcVar12)) {
      uVar10 = quote();
      pcVar16 = "invalid suffix %s, contains directory separator";
      goto LAB_00101253;
    }
    puVar15 = (uint *)0x0;
    lVar7 = (long)pcVar8 - (long)pcVar16;
    if (lVar7 != 0) {
      do {
        lVar7 = lVar7 + -1;
        if (pcVar16[lVar7] != 'X') break;
        puVar15 = (uint *)((long)puVar15 + 1);
      } while (lVar7 != 0);
      if ((uint *)0x2 < puVar15) {
        pcVar11 = pcVar16;
        if (!bVar1) goto LAB_00101037;
        if (bVar2) {
LAB_001011fa:
          pcVar11 = getenv("TMPDIR");
          if ((((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) &&
              (pcVar11 = "/tmp", local_48 != (char *)0x0)) && (*local_48 != '\0')) {
            pcVar11 = local_48;
          }
          pcVar12 = (char *)last_component(pcVar16);
          if (pcVar16 == pcVar12) goto LAB_0010101c;
          uVar10 = quote(pcVar16);
          pcVar16 = "invalid template, %s, contains directory separator";
          goto LAB_00101253;
        }
        if (((local_48 == (char *)0x0) || (pcVar11 = local_48, *local_48 == '\0')) &&
           ((pcVar11 = getenv("TMPDIR"), pcVar11 == (char *)0x0 || (*pcVar11 == '\0')))) {
          pcVar11 = "/tmp";
        }
        if (*pcVar16 == '/') {
          uVar10 = quote();
          pcVar16 = "invalid template, %s; with --tmpdir, it may not be absolute";
          goto LAB_00101253;
        }
LAB_0010101c:
        pcVar11 = (char *)file_name_concat(pcVar11,pcVar16,0);
        free(pcVar16);
LAB_00101037:
        pcVar8 = (char *)xstrdup(pcVar11);
        if (!bVar3) {
          iVar5 = gen_tempname_len(pcVar8,(ulong)param_2 & 0xffffffff,0,local_3c * '\x02',puVar15);
          if (-1 < iVar5) {
            if (local_3c != '\0') {
              puts(pcVar8);
              return 0;
            }
            iVar5 = close(iVar5);
            if (iVar5 == 0) {
              puts(pcVar8);
              goto LAB_00101121;
            }
          }
          if (bVar4) {
            return 1;
          }
          uVar10 = quote(pcVar11);
          pcVar16 = "failed to create file via template %s";
LAB_0010119a:
          uVar6 = dcgettext(0,pcVar16,5);
          piVar9 = __errno_location();
          error(0,*piVar9,uVar6,uVar10);
          return 1;
        }
        iVar5 = gen_tempname_len(pcVar8,(ulong)param_2 & 0xffffffff,0,local_3c + '\x01',puVar15);
        if (iVar5 != 0) {
          if (bVar4) {
            return 1;
          }
          uVar10 = quote(pcVar11);
          pcVar16 = "failed to create directory via template %s";
          goto LAB_0010119a;
        }
        goto LAB_00101112;
      }
    }
    if (pcVar16 == pcVar11) {
      *pcVar8 = '\0';
    }
    uVar10 = quote();
    pcVar16 = "too few X\'s in template %s";
LAB_00101253:
    uVar6 = dcgettext(0,pcVar16,5);
    error(1,0,uVar6,uVar10);
LAB_0010126e:
    pcVar16 = (char *)xstrdup(pcVar8);
    pcVar11 = strrchr(pcVar16,0x58);
    pcVar8 = pcVar11 + 1;
    if (pcVar11 == (char *)0x0) {
      sVar13 = strlen(pcVar16);
      pcVar8 = pcVar16 + sVar13;
    }
    pcVar11 = (char *)0x0;
    param_2 = (undefined8 *)strlen(pcVar8);
    goto LAB_00100f9c;
  }
  uVar10 = dcgettext(0,"too many templates",5);
  error(0,0,uVar10);
switchD_00100e37_caseD_57:
  usage(1);
LAB_00101112:
  puts(pcVar8);
  if (local_3c != '\0') {
    return 0;
  }
LAB_00101121:
  stdout_closed = 1;
  iVar5 = close_stream(_stdout);
  if (iVar5 != 0) {
    piVar9 = __errno_location();
    iVar5 = *piVar9;
    remove(pcVar8);
    if (!bVar4) {
      uVar10 = dcgettext(0,"write error",5);
      error(0,iVar5,uVar10);
    }
    return 1;
  }
  return 0;
}


