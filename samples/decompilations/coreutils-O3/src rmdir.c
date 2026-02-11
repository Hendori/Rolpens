
bool ignorable_failure(ulong param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int __fd;
  DIR *__dirp;
  int *piVar3;
  dirent *pdVar4;
  uint uVar5;
  int iVar6;
  
  if (ignore_fail_on_non_empty != '\0') {
    uVar5 = (uint)param_1;
    bVar2 = uVar5 == 0x11 || uVar5 == 0x27;
    if (bVar2) {
      return bVar2;
    }
    if ((uVar5 < 0x1f) && ((0x40012002UL >> (param_1 & 0x3f) & 1) != 0)) {
      __fd = openat(-100,param_2,0x30900);
      if (__fd < 0) {
        piVar3 = __errno_location();
        iVar6 = *piVar3;
      }
      else {
        __dirp = fdopendir(__fd);
        if (__dirp == (DIR *)0x0) {
          piVar3 = __errno_location();
          iVar6 = *piVar3;
          close(__fd);
        }
        else {
          piVar3 = __errno_location();
          *piVar3 = 0;
          do {
            while( true ) {
              pdVar4 = readdir(__dirp);
              if (pdVar4 == (dirent *)0x0) {
                iVar6 = *piVar3;
                closedir(__dirp);
                if (iVar6 == 0) {
                  return false;
                }
                goto LAB_00100090;
              }
              if (pdVar4->d_name[0] != '.') goto LAB_00100084;
              cVar1 = pdVar4->d_name[1];
              if (cVar1 == '.') break;
              if ((cVar1 != '\0') && (cVar1 != '/')) goto LAB_00100084;
            }
          } while ((pdVar4->d_name[2] == '/') || (pdVar4->d_name[2] == '\0'));
LAB_00100084:
          iVar6 = *piVar3;
          closedir(__dirp);
        }
      }
LAB_00100090:
      return iVar6 == 0;
    }
  }
  return false;
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
    goto LAB_0010016a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... DIRECTORY...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Remove the DIRECTORY(ies), if they are empty.\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --ignore-fail-on-non-empty\n                    ignore each failure to remove a non-empty directory\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -p, --parents     remove DIRECTORY and its ancestors;\n                    e.g., \'rmdir -p a/b\' is similar to \'rmdir a/b a\'\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v, --verbose     output a diagnostic for every directory processed\n"
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
    iVar2 = strcmp("rmdir",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "rmdir";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010039d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","rmdir");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010039d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","rmdir");
    if (pcVar4 == "rmdir") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010016a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  char *__path;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *__ptr;
  char *pcVar6;
  int *piVar7;
  byte bVar8;
  byte bVar9;
  long in_FS_OFFSET;
  bool bVar10;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  remove_empty_parents = 0;
  while (iVar2 = getopt_long(param_1,param_2,&_LC31,longopts,0), iVar2 != -1) {
    if (iVar2 == 0x70) {
      remove_empty_parents = 1;
    }
    else {
      if (iVar2 < 0x71) {
        if (iVar2 == -0x83) {
          uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
          version_etc(_stdout,"rmdir","GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar2 != -0x82) goto LAB_00100d6f;
        usage(0);
        goto LAB_00100d4e;
      }
      if (iVar2 == 0x76) {
        verbose = '\x01';
      }
      else {
        if (iVar2 != 0x80) goto LAB_00100d6f;
        ignore_fail_on_non_empty = 1;
      }
    }
  }
  if (_optind == param_1) {
LAB_00100d4e:
    uVar4 = dcgettext(0,"missing operand",5);
    error(0,0,uVar4);
LAB_00100d6f:
    usage(1);
  }
  else {
    bVar9 = 1;
    for (; _optind < param_1; _optind = _optind + 1) {
      __path = (char *)param_2[_optind];
      if (verbose != '\0') {
        uVar4 = quotearg_style(4,__path);
        uVar5 = dcgettext(0,"removing directory, %s",5);
        prog_fprintf(_stdout,uVar5,uVar4);
      }
      iVar2 = rmdir(__path);
      bVar8 = remove_empty_parents;
      if (iVar2 == 0) {
        if (remove_empty_parents != 0) {
          strip_trailing_slashes(__path);
          do {
            pcVar6 = strrchr(__path,0x2f);
            if (pcVar6 == (char *)0x0) goto LAB_00100c60;
            if (__path < pcVar6) {
              do {
                if (*pcVar6 != '/') break;
                pcVar6 = pcVar6 + -1;
              } while (__path != pcVar6);
            }
            bVar10 = verbose != '\0';
            pcVar6[1] = '\0';
            if (bVar10) {
              uVar4 = quotearg_style(4,__path);
              uVar5 = dcgettext(0,"removing directory, %s",5);
              prog_fprintf(_stdout,uVar5,uVar4);
            }
            iVar3 = rmdir(__path);
            piVar7 = __errno_location();
            iVar2 = *piVar7;
          } while (iVar3 == 0);
          cVar1 = ignorable_failure(iVar2,__path);
          if (cVar1 == '\0') {
            pcVar6 = "failed to remove %s";
            if (iVar2 != 0x14) {
              pcVar6 = "failed to remove directory %s";
            }
            uVar4 = quotearg_style(4,__path);
            bVar8 = 0;
            uVar5 = dcgettext(0,pcVar6,5);
            error(0,iVar2,uVar5,uVar4);
          }
LAB_00100c60:
          bVar9 = bVar9 & bVar8;
        }
      }
      else {
        piVar7 = __errno_location();
        iVar2 = *piVar7;
        cVar1 = ignorable_failure(iVar2,__path);
        if (cVar1 == '\0') {
          if (((iVar2 == 0x14) && (pcVar6 = strrchr(__path,0x2f), pcVar6 != (char *)0x0)) &&
             (pcVar6[1] == '\0')) {
            iVar3 = stat(__path,&local_d8);
            if (iVar3 == 0) {
              if ((local_d8.st_mode & 0xf000) == 0x4000) goto LAB_00100b73;
              goto LAB_00100ba1;
            }
            if (*piVar7 == 0x14) goto LAB_00100ba1;
LAB_00100b73:
            __ptr = (void *)xstrdup(__path);
            strip_trailing_slashes(__path);
            iVar3 = lstat(__path,&local_d8);
            if ((iVar3 != 0) || ((local_d8.st_mode & 0xf000) != 0xa000)) {
              free(__ptr);
              goto LAB_00100ba1;
            }
            uVar4 = quotearg_style(4,__ptr);
            uVar5 = dcgettext(0,"failed to remove %s: Symbolic link not followed",5);
            error(0,0,uVar5,uVar4);
            free(__ptr);
          }
          else {
LAB_00100ba1:
            uVar4 = quotearg_style(4,__path);
            uVar5 = dcgettext(0,"failed to remove %s",5);
            error(0,iVar2,uVar5,uVar4);
          }
          bVar9 = 0;
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return bVar9 ^ 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


