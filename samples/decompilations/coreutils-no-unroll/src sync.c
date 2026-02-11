
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
    iVar2 = strcmp("sync",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  byte bVar9;
  char *__file;
  byte bVar10;
  uint local_44;
  undefined8 local_40;
  
  __file = (char *)0x0;
  bVar9 = 0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  iVar3 = 0x10049e;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_0010084e:
  do {
    iVar1 = getopt_long(param_1,param_2,&_LC29,long_options,0);
    if (iVar1 == -1) {
      lVar6 = (long)_optind;
      if (bVar9 == 0) goto LAB_00100938;
      pcVar8 = "cannot specify both --data and --file-system";
      if ((char)__file == '\0') goto LAB_00100938;
      while( true ) {
        uVar4 = dcgettext(0,pcVar8,5);
        lVar6 = error(1,0,uVar4);
LAB_00100938:
        if ((param_1 <= (int)lVar6 & bVar9) == 0) break;
        pcVar8 = "--data needs at least one argument";
      }
      if ((int)lVar6 < param_1) {
        local_44 = 2;
        if ((char)__file == '\0') {
          local_44 = (uint)bVar9;
        }
        bVar9 = 1;
        goto LAB_001009eb;
      }
      sync();
      bVar9 = 1;
LAB_00100a92:
      return bVar9 ^ 1;
    }
    if (iVar1 != 100) {
      if (iVar1 < 0x65) {
        if (iVar1 == -0x83) {
          uVar4 = proper_name_lite("Giuseppe Scrivano","Giuseppe Scrivano");
          uVar5 = proper_name_lite("Jim Meyering","Jim Meyering");
          version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar1 == -0x82) {
          usage(0);
        }
      }
      else if (iVar1 == 0x66) {
        __file = (char *)0x1;
        goto LAB_0010084e;
      }
      usage(1);
LAB_00100ace:
      local_40 = quotearg_style(4,__file);
      pcVar8 = "couldn\'t reset non-blocking mode %s";
      do {
        uVar4 = dcgettext(0,pcVar8,5);
        piVar7 = __errno_location();
        bVar10 = 0;
        error(0,*piVar7,uVar4,local_40);
        do {
          iVar3 = close(iVar3);
          if (iVar3 < 0) {
            uVar4 = quotearg_style(4,__file);
            uVar5 = dcgettext(0,"failed to close %s",5);
            piVar7 = __errno_location();
            error(0,*piVar7,uVar5,uVar4);
            goto LAB_00100b52;
          }
          while( true ) {
            _optind = _optind + 1;
            lVar6 = (long)_optind;
            bVar9 = bVar9 & bVar10;
LAB_001009eb:
            if (param_1 <= (int)lVar6) goto LAB_00100a92;
            __file = (char *)param_2[lVar6];
            iVar3 = open(__file,0x800);
            if (-1 < iVar3) break;
            piVar7 = __errno_location();
            iVar1 = *piVar7;
            iVar3 = open(__file,0x801);
            if (-1 < iVar3) break;
            uVar4 = quotearg_style(4,__file);
            uVar5 = dcgettext(0,"error opening %s",5);
            error(0,iVar1,uVar5,uVar4);
LAB_00100b52:
            bVar10 = 0;
          }
          uVar2 = rpl_fcntl(iVar3,3);
          if (uVar2 == 0xffffffff) goto LAB_00100ace;
          iVar1 = rpl_fcntl(iVar3,4,uVar2 & 0xfffff7ff);
          if (iVar1 < 0) goto LAB_00100ace;
          if (local_44 == 1) {
            iVar1 = fdatasync(iVar3);
          }
          else if (local_44 == 2) {
            iVar1 = syncfs(iVar3);
          }
          else {
            iVar1 = fsync(iVar3);
          }
          bVar10 = 1;
        } while (-1 < iVar1);
        local_40 = quotearg_style(4,__file);
        pcVar8 = "error syncing %s";
      } while( true );
    }
    bVar9 = 1;
  } while( true );
}


