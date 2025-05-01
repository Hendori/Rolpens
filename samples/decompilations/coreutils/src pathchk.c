
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
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... NAME...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Diagnose invalid or non-portable file names.\n\n  -p                  check for most POSIX systems\n  -P                  check for empty names and leading \"-\"\n      --portability   check for all POSIX systems (equivalent to -p -P)\n"
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
    iVar2 = strcmp("pathchk",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "pathchk";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010021d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","pathchk");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010021d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","pathchk");
    if (pcVar4 == "pathchk") {
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
  long lVar1;
  char *__s;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  size_t sVar9;
  size_t sVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  char cVar19;
  long in_FS_OFFSET;
  byte local_d9;
  mbstate_t mbstate;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  bVar2 = false;
  bVar3 = false;
  while (iVar5 = getopt_long(argc,argv,&_LC30,longopts,0), iVar5 != -1) {
    if (iVar5 == 0x50) {
      bVar2 = true;
    }
    else {
      if (iVar5 < 0x51) {
        if (iVar5 == -0x83) {
          uVar6 = proper_name_lite("Jim Meyering","Jim Meyering");
          uVar7 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar8 = proper_name_lite("Paul Eggert","Paul Eggert");
          version_etc(_stdout,"pathchk","GNU coreutils",_Version,uVar8,uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00100e2e;
      }
      if (iVar5 != 0x70) {
        if (iVar5 != 0x80) goto LAB_00100e2e;
        bVar2 = true;
      }
      bVar3 = true;
    }
  }
  if (_optind == argc) {
    uVar6 = dcgettext(0,"missing operand",5);
    error(0,0,uVar6);
LAB_00100e2e:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  local_d9 = 1;
  do {
    if (argc <= _optind) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (int)(local_d9 ^ 1);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __s = argv[_optind];
    sVar9 = strlen(__s);
    pcVar15 = __s;
    if (bVar2) {
      while (pcVar15 = strchr(pcVar15,0x2d), pcVar15 != (char *)0x0) {
        if ((__s == pcVar15) || (pcVar15[-1] == '/')) {
          uVar6 = quotearg_style(4,__s);
          uVar7 = dcgettext(0,"leading \'-\' in a component of file name %s",5);
          error(0,0,uVar7,uVar6);
          bVar4 = 0;
          goto LAB_00100b54;
        }
        pcVar15 = pcVar15 + 1;
      }
      if (sVar9 != 0) {
        if (bVar3) goto LAB_001009dc;
        goto LAB_00100bea;
      }
LAB_00100e8b:
      uVar6 = dcgettext(0,"empty file name",5);
      error(0,0,uVar6);
      bVar4 = 0;
    }
    else if (bVar3) {
      if (sVar9 == 0) goto LAB_00100e8b;
LAB_001009dc:
      sVar10 = strspn(__s,"/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-");
      pcVar15 = __s + sVar10;
      if (*pcVar15 != '\0') {
        mbszero(&mbstate);
        uVar14 = rpl_mbrlen(pcVar15,sVar9 - sVar10,&mbstate);
        uVar6 = quotearg_n_style(0,4,__s);
        if (0x10 < uVar14) {
          uVar14 = 1;
        }
        uVar7 = quotearg_n_style_mem(1,8,pcVar15,uVar14);
        uVar8 = dcgettext(0,"non-portable character %s in file name %s",5);
        error(0,0,uVar8,uVar7,uVar6);
        bVar4 = 0;
        goto LAB_00100b54;
      }
      if (0xff < sVar9) {
        lVar17 = 0x100;
        goto LAB_00100cb4;
      }
      lVar17 = 0xe;
LAB_00100a0f:
      pcVar15 = __s;
      lVar18 = 0xe;
      do {
        while (pcVar16 = pcVar15, cVar19 = *pcVar16, cVar19 == '/') {
          pcVar15 = pcVar16 + 1;
        }
        if (cVar19 == '\0') goto LAB_00100b4f;
        lVar12 = lVar17;
        if (lVar17 == 0) {
          pcVar15 = ".";
          if (__s != pcVar16) {
            pcVar15 = __s;
          }
          piVar11 = __errno_location();
          *piVar11 = 0;
          *pcVar16 = '\0';
          lVar12 = pathconf(pcVar15,3);
          *pcVar16 = cVar19;
          if (lVar12 < 0) {
            if (*piVar11 == 0) {
              lVar12 = 0x7fffffffffffffff;
            }
            else {
              lVar17 = lVar18;
              lVar12 = lVar18;
              if (*piVar11 != 2) {
                *pcVar16 = '\0';
                uVar6 = quotearg_n_style_colon(0,3,pcVar15);
                error(0,*piVar11,&_LC36,uVar6);
                *pcVar16 = cVar19;
                bVar4 = 0;
                goto LAB_00100b54;
              }
            }
          }
        }
        cVar19 = pcVar16[1];
        if ((cVar19 == '/') || (cVar19 == '\0')) {
          pcVar15 = pcVar16 + 1;
          lVar13 = 1;
        }
        else {
          lVar13 = 1;
          do {
            lVar13 = lVar13 + 1;
            cVar19 = pcVar16[lVar13];
            if (cVar19 == '/') break;
          } while (cVar19 != '\0');
          pcVar15 = pcVar16 + lVar13;
        }
        lVar18 = lVar12;
      } while (lVar13 <= lVar12);
      *pcVar15 = '\0';
      uVar6 = quote(pcVar16);
      uVar7 = dcgettext(0,"limit %td exceeded by length %td of file name component %s",5);
      error(0,0,uVar7,lVar12,lVar13,uVar6);
      *pcVar15 = cVar19;
      bVar4 = 0;
    }
    else {
LAB_00100bea:
      iVar5 = lstat(__s,(stat *)&mbstate);
      if (iVar5 == 0) {
LAB_00100b4f:
        bVar4 = 1;
      }
      else {
        piVar11 = __errno_location();
        if ((*piVar11 == 2) && (sVar9 != 0)) {
          pcVar15 = __s;
          if (sVar9 < 0x100) {
LAB_00100c64:
            if (*pcVar15 == '/') {
LAB_00100c60:
              pcVar15 = pcVar15 + 1;
              goto LAB_00100c64;
            }
            if (*pcVar15 == '\0') goto LAB_00100b4f;
            if ((pcVar15[1] == '\0') || (pcVar15[1] == '/')) goto LAB_00100c60;
            uVar14 = 1;
            do {
              uVar14 = uVar14 + 1;
              if (pcVar15[uVar14] == '/') break;
            } while (pcVar15[uVar14] != '\0');
            if (uVar14 < 0xf) {
              pcVar15 = pcVar15 + uVar14;
              goto LAB_00100c64;
            }
            lVar17 = 0;
            goto LAB_00100a0f;
          }
          pcVar16 = "/";
          if (*__s != '/') {
            pcVar16 = ".";
          }
          *piVar11 = 0;
          lVar17 = pathconf(pcVar16,4);
          if (lVar17 < 0) {
            if (*piVar11 != 0) {
              uVar6 = dcgettext(0,"%s: unable to determine maximum file name length",5);
              error(0,*piVar11,uVar6,pcVar16);
              bVar4 = 0;
              goto LAB_00100b54;
            }
          }
          else if ((long)sVar9 < lVar17) goto LAB_00100c64;
LAB_00100cb4:
          uVar6 = quotearg_style(4,__s);
          uVar7 = dcgettext(0,"limit %td exceeded by length %td of file name %s",5);
          error(0,0,uVar7,lVar17 + -1,sVar9,uVar6);
          bVar4 = 0;
        }
        else {
          uVar6 = quotearg_n_style_colon(0,3,__s);
          error(0,*piVar11,&_LC36,uVar6);
          bVar4 = 0;
        }
      }
    }
LAB_00100b54:
    local_d9 = local_d9 & bVar4;
    _optind = _optind + 1;
  } while( true );
}


