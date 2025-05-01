
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
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION] [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Synchronize cached writes to persistent storage\n\nIf one or more files are specified, sync only them,\nor their containing file systems.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -d, --data             sync only file data, no unneeded metadata\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --file-system      sync the file systems that contain the files\n"
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
    iVar2 = strcmp("sync",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC1;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00100265;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100265:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
    if (puVar7 == &_LC1) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_40;
  
  bVar1 = false;
  bVar11 = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_0010084e:
  do {
    iVar3 = getopt_long(argc,argv,&_LC29,long_options,0);
    if (iVar3 == -1) break;
    if (iVar3 != 100) {
      if (iVar3 < 0x65) {
        if (iVar3 == -0x83) {
          uVar5 = proper_name_lite("Giuseppe Scrivano","Giuseppe Scrivano");
          uVar6 = proper_name_lite("Jim Meyering","Jim Meyering");
          version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
      }
      else if (iVar3 == 0x66) {
        bVar1 = true;
        goto LAB_0010084e;
      }
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    bVar11 = 1;
  } while( true );
  lVar7 = (long)_optind;
  if (bVar11 == 0) goto LAB_00100938;
  pcVar9 = "cannot specify both --data and --file-system";
  if (!bVar1) goto LAB_00100938;
  while( true ) {
    uVar5 = dcgettext(0,pcVar9,5);
    lVar7 = error(1,0,uVar5);
LAB_00100938:
    if ((argc <= (int)lVar7 & bVar11) == 0) break;
    pcVar9 = "--data needs at least one argument";
  }
  if ((int)lVar7 < argc) {
    bVar2 = 2;
    if (!bVar1) {
      bVar2 = bVar11;
    }
    uVar12 = 1;
    while ((int)lVar7 < argc) {
      pcVar9 = argv[lVar7];
      iVar3 = open(pcVar9,0x800);
      if (iVar3 < 0) {
        piVar8 = __errno_location();
        iVar4 = *piVar8;
        iVar3 = open(pcVar9,0x801);
        if (-1 < iVar3) goto LAB_0010096a;
        uVar5 = quotearg_style(4,pcVar9);
        uVar6 = dcgettext(0,"error opening %s",5);
        error(0,iVar4,uVar6,uVar5);
LAB_00100b52:
        uVar13 = 0;
      }
      else {
LAB_0010096a:
        uVar13 = rpl_fcntl(iVar3,3);
        if (uVar13 == 0xffffffff) {
LAB_00100ace:
          local_40 = quotearg_style(4,pcVar9);
          pcVar10 = "couldn\'t reset non-blocking mode %s";
LAB_00100aec:
          uVar5 = dcgettext(0,pcVar10,5);
          piVar8 = __errno_location();
          uVar13 = 0;
          error(0,*piVar8,uVar5,local_40);
        }
        else {
          iVar4 = rpl_fcntl(iVar3,4,uVar13 & 0xfffff7ff);
          if (iVar4 < 0) goto LAB_00100ace;
          if (bVar2 == 1) {
            iVar4 = fdatasync(iVar3);
          }
          else if (bVar2 == 2) {
            iVar4 = syncfs(iVar3);
          }
          else {
            iVar4 = fsync(iVar3);
          }
          uVar13 = 1;
          if (iVar4 < 0) {
            local_40 = quotearg_style(4,pcVar9);
            pcVar10 = "error syncing %s";
            goto LAB_00100aec;
          }
        }
        iVar3 = close(iVar3);
        if (iVar3 < 0) {
          uVar5 = quotearg_style(4,pcVar9);
          uVar6 = dcgettext(0,"failed to close %s",5);
          piVar8 = __errno_location();
          error(0,*piVar8,uVar6,uVar5);
          goto LAB_00100b52;
        }
      }
      _optind = _optind + 1;
      uVar12 = uVar12 & uVar13;
      lVar7 = (long)_optind;
    }
  }
  else {
    sync();
    uVar12 = 1;
  }
  return uVar12 ^ 1;
}


