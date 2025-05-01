
/* WARNING: Unknown calling convention */

_Bool ignorable_failure(int error_number,char *dir)

{
  bool bVar1;
  int __fd;
  DIR *__dirp;
  int *piVar2;
  dirent *pdVar3;
  int iVar4;
  
  if (ignore_fail_on_non_empty) {
    bVar1 = error_number == 0x11 || error_number == 0x27;
    if (bVar1) {
      return bVar1;
    }
    if (((uint)error_number < 0x1f) &&
       ((0x40012002UL >> ((ulong)(uint)error_number & 0x3f) & 1) != 0)) {
      __fd = openat(-100,dir,0x30900);
      if (__fd < 0) {
        piVar2 = __errno_location();
        iVar4 = *piVar2;
      }
      else {
        __dirp = fdopendir(__fd);
        if (__dirp == (DIR *)0x0) {
          piVar2 = __errno_location();
          iVar4 = *piVar2;
          close(__fd);
        }
        else {
          piVar2 = __errno_location();
          *piVar2 = 0;
          do {
            pdVar3 = readdir(__dirp);
            if (pdVar3 == (dirent *)0x0) {
              iVar4 = *piVar2;
              closedir(__dirp);
              if (iVar4 == 0) {
                return false;
              }
              goto LAB_00100084;
            }
          } while ((pdVar3->d_name[0] == '.') &&
                  ((pdVar3->d_name[(ulong)(pdVar3->d_name[1] == '.') + 1] == '\0' ||
                   (pdVar3->d_name[(ulong)(pdVar3->d_name[1] == '.') + 1] == '/'))));
          iVar4 = *piVar2;
          closedir(__dirp);
        }
      }
LAB_00100084:
      return iVar4 == 0;
    }
  }
  return false;
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
    goto LAB_0010013a;
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
    iVar2 = strcmp("rmdir",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "rmdir";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010036d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","rmdir");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010036d:
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
LAB_0010013a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  char *__path;
  _Bool _Var2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *__ptr;
  char *pcVar7;
  int *piVar8;
  byte bVar9;
  byte bVar10;
  long in_FS_OFFSET;
  bool bVar11;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  remove_empty_parents = false;
  while (iVar3 = getopt_long(argc,argv,&_LC31,longopts,0), iVar3 != -1) {
    if (iVar3 == 0x70) {
      remove_empty_parents = true;
    }
    else {
      if (iVar3 < 0x71) {
        if (iVar3 == -0x83) {
          uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
          version_etc(_stdout,"rmdir","GNU coreutils",_Version,uVar5,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00100d3f;
      }
      if (iVar3 == 0x76) {
        verbose = true;
      }
      else {
        if (iVar3 != 0x80) goto LAB_00100d3f;
        ignore_fail_on_non_empty = true;
      }
    }
  }
  if (_optind == argc) {
    uVar5 = dcgettext(0,"missing operand",5);
    error(0,0,uVar5);
LAB_00100d3f:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  bVar10 = 1;
  do {
    if (argc <= _optind) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (uint)(bVar10 ^ 1);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __path = argv[_optind];
    if (verbose != false) {
      uVar5 = quotearg_style(4,__path);
      uVar6 = dcgettext(0,"removing directory, %s",5);
      prog_fprintf(_stdout,uVar6,uVar5);
    }
    iVar3 = rmdir(__path);
    bVar9 = remove_empty_parents;
    if (iVar3 == 0) {
      if (remove_empty_parents != false) {
        strip_trailing_slashes(__path);
        do {
          pcVar7 = strrchr(__path,0x2f);
          if (pcVar7 == (char *)0x0) goto LAB_00100c30;
          if (__path < pcVar7) {
            do {
              if (*pcVar7 != '/') break;
              pcVar7 = pcVar7 + -1;
            } while (__path != pcVar7);
          }
          bVar11 = verbose != false;
          pcVar7[1] = '\0';
          if (bVar11) {
            uVar5 = quotearg_style(4,__path);
            uVar6 = dcgettext(0,"removing directory, %s",5);
            prog_fprintf(_stdout,uVar6,uVar5);
          }
          iVar4 = rmdir(__path);
          piVar8 = __errno_location();
          iVar3 = *piVar8;
        } while (iVar4 == 0);
        _Var2 = ignorable_failure(iVar3,__path);
        if (!_Var2) {
          pcVar7 = "failed to remove %s";
          if (iVar3 != 0x14) {
            pcVar7 = "failed to remove directory %s";
          }
          uVar5 = quotearg_style(4,__path);
          bVar9 = 0;
          uVar6 = dcgettext(0,pcVar7,5);
          error(0,iVar3,uVar6,uVar5);
        }
LAB_00100c30:
        bVar10 = bVar10 & bVar9;
      }
    }
    else {
      piVar8 = __errno_location();
      iVar3 = *piVar8;
      _Var2 = ignorable_failure(iVar3,__path);
      if (!_Var2) {
        if (((iVar3 == 0x14) && (pcVar7 = strrchr(__path,0x2f), pcVar7 != (char *)0x0)) &&
           (pcVar7[1] == '\0')) {
          iVar4 = stat(__path,(stat *)&st);
          if (iVar4 == 0) {
            if ((st.st_mode & 0xf000) == 0x4000) goto LAB_00100b43;
            goto LAB_00100b71;
          }
          if (*piVar8 == 0x14) goto LAB_00100b71;
LAB_00100b43:
          __ptr = (void *)xstrdup(__path);
          strip_trailing_slashes(__path);
          iVar4 = lstat(__path,(stat *)&st);
          if ((iVar4 != 0) || ((st.st_mode & 0xf000) != 0xa000)) {
            free(__ptr);
            goto LAB_00100b71;
          }
          uVar5 = quotearg_style(4,__ptr);
          uVar6 = dcgettext(0,"failed to remove %s: Symbolic link not followed",5);
          error(0,0,uVar6,uVar5);
          free(__ptr);
        }
        else {
LAB_00100b71:
          uVar5 = quotearg_style(4,__path);
          uVar6 = dcgettext(0,"failed to remove %s",5);
          error(0,iVar3,uVar6,uVar5);
        }
        bVar10 = 0;
      }
    }
    _optind = _optind + 1;
  } while( true );
}


