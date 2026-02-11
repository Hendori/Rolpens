
char * logical_getcwd(void)

{
  char cVar1;
  int iVar2;
  char *__file;
  char *pcVar3;
  long in_FS_OFFSET;
  stat local_148;
  stat local_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __file = getenv("PWD");
  if ((__file != (char *)0x0) && (pcVar3 = __file, *__file == '/')) {
    while (pcVar3 = strstr(pcVar3,"/."), pcVar3 != (char *)0x0) {
      cVar1 = pcVar3[2];
      if (((cVar1 == '\0') || (cVar1 == '/')) ||
         ((cVar1 == '.' && ((pcVar3[3] == '\0' || (pcVar3[3] == '/')))))) goto LAB_00100080;
      pcVar3 = pcVar3 + 1;
    }
    iVar2 = stat(__file,&local_148);
    if (((iVar2 == 0) && (iVar2 = stat(".",&local_b8), iVar2 == 0)) &&
       (local_148.st_dev == local_b8.st_dev && local_148.st_ino == local_b8.st_ino))
    goto LAB_00100082;
  }
LAB_00100080:
  __file = (char *)0x0;
LAB_00100082:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __file;
}



void file_name_prepend(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  
  lVar1 = param_1[2];
  uVar4 = lVar1 - *param_1;
  if (uVar4 < param_3 + 1) {
    lVar1 = param_1[1];
    lVar2 = xpalloc(0,param_1 + 1,(param_3 + 1) - uVar4,0xffffffffffffffff,1);
    pvVar3 = memcpy((void *)((lVar2 - uVar4) + param_1[1]),(void *)param_1[2],lVar1 - uVar4);
    param_1[2] = (long)pvVar3;
    free((void *)*param_1);
    *param_1 = lVar2;
    lVar1 = param_1[2];
  }
  param_1[2] = (long)(lVar1 + ~param_3);
  *(undefined1 *)(lVar1 + ~param_3) = 0x2f;
  memcpy((void *)(param_1[2] + 1),param_2,param_3);
  return;
}



void robust_getcwd(long param_1)

{
  char cVar1;
  __dev_t _Var2;
  __dev_t _Var3;
  int iVar4;
  int iVar5;
  __ino_t *p_Var6;
  __ino_t _Var7;
  size_t sVar8;
  DIR *__dirp;
  uint *puVar9;
  dirent *pdVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  long in_FS_OFFSET;
  bool bVar22;
  long local_228;
  long local_220;
  undefined1 local_208 [16];
  stat local_1f8;
  stat local_168;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var6 = (__ino_t *)get_root_dev_ino(local_208);
  if (p_Var6 == (__ino_t *)0x0) {
    uVar13 = quotearg_style(4,&_LC3);
    pcVar21 = "failed to get attributes of %s";
  }
  else {
    iVar4 = stat(".",&local_1f8);
    if (iVar4 < 0) {
      uVar13 = quotearg_style(4,&_LC2);
LAB_00100788:
      pcVar21 = "failed to stat %s";
    }
    else {
      local_228 = 1;
      if (p_Var6[1] == local_1f8.st_dev && local_1f8.st_ino == *p_Var6) {
LAB_00100590:
        if (**(char **)(param_1 + 0x10) == '\0') {
          file_name_prepend(param_1,&_LC12,0);
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
LAB_00100351:
      local_220 = local_228;
      __dirp = opendir("..");
      if (__dirp != (DIR *)0x0) {
        iVar4 = dirfd(__dirp);
        if (iVar4 < 0) {
          iVar4 = chdir("..");
          if (iVar4 < 0) goto LAB_001007ba;
          iVar4 = stat(".",&local_168);
          if (-1 < iVar4) goto LAB_001003b1;
LAB_0010050f:
          uVar20 = local_228 * 3;
          lVar15 = xnmalloc(3);
          uVar11 = uVar20;
          for (lVar16 = lVar15; lVar16 != lVar15 + uVar20; lVar16 = lVar16 + 3) {
            lVar16 = __memcpy_chk(lVar16,&_LC7,3,uVar11);
            uVar19 = uVar11;
            if (uVar11 <= uVar20) {
              uVar19 = uVar20;
            }
            uVar18 = (uVar19 - uVar11) + 3;
            if (uVar18 < uVar19) {
              uVar18 = uVar19;
            }
            uVar11 = (uVar11 - uVar19) + -3 + uVar18;
          }
          *(undefined1 *)(lVar16 + -1) = 0;
          uVar13 = quote(lVar15);
          goto LAB_00100788;
        }
        iVar5 = fchdir(iVar4);
        if (iVar5 < 0) goto LAB_001007ba;
        iVar4 = fstat(iVar4,&local_168);
        if (iVar4 < 0) goto LAB_0010050f;
LAB_001003b1:
        _Var3 = local_168.st_dev;
        _Var2 = local_1f8.st_dev;
        bVar22 = local_168.st_dev != local_1f8.st_dev;
        puVar9 = (uint *)__errno_location();
LAB_001003d8:
        *puVar9 = 0;
LAB_001003df:
        pdVar10 = readdir(__dirp);
        if (pdVar10 != (dirent *)0x0) {
          do {
            if (pdVar10->d_name[0] != '.') {
LAB_00100258:
              _Var7 = pdVar10->d_ino;
              if (_Var7 == 0) {
LAB_00100498:
                iVar4 = lstat(pdVar10->d_name,&local_d8);
                if (((iVar4 < 0) || (local_d8.st_ino != local_1f8.st_ino)) ||
                   ((_Var3 != _Var2 && (local_d8.st_dev != local_1f8.st_dev)))) goto LAB_001003d8;
              }
              else {
LAB_00100268:
                if (bVar22) goto LAB_00100498;
                if (_Var7 != local_1f8.st_ino) goto LAB_001003d8;
              }
              sVar8 = strlen(pdVar10->d_name);
              file_name_prepend(param_1,pdVar10->d_name,sVar8);
              iVar4 = closedir(__dirp);
              if (iVar4 != 0) goto LAB_00100653;
              local_1f8.st_dev = local_168.st_dev;
              local_1f8.st_ino = local_168.st_ino;
              local_1f8.st_nlink = local_168.st_nlink;
              local_1f8.st_mode = local_168.st_mode;
              local_1f8.st_uid = local_168.st_uid;
              local_1f8.st_gid = local_168.st_gid;
              local_1f8.__pad0 = local_168.__pad0;
              local_1f8.st_rdev = local_168.st_rdev;
              local_1f8.st_size = local_168.st_size;
              local_1f8.st_blksize = local_168.st_blksize;
              local_1f8.st_blocks = local_168.st_blocks;
              local_1f8.st_atim.tv_sec = local_168.st_atim.tv_sec;
              local_1f8.st_atim.tv_nsec = local_168.st_atim.tv_nsec;
              local_1f8.st_mtim.tv_sec = local_168.st_mtim.tv_sec;
              local_1f8.st_mtim.tv_nsec = local_168.st_mtim.tv_nsec;
              local_1f8.st_ctim.tv_sec = local_168.st_ctim.tv_sec;
              local_1f8.st_ctim.tv_nsec = local_168.st_ctim.tv_nsec;
              local_1f8.__unused[0] = local_168.__unused[0];
              local_1f8.__unused[1] = local_168.__unused[1];
              local_1f8.__unused[2] = local_168.__unused[2];
              local_228 = local_228 + 1;
              if (local_168.st_dev == p_Var6[1] && local_168.st_ino == *p_Var6) goto LAB_00100590;
              goto LAB_00100351;
            }
            cVar1 = pdVar10->d_name[1];
            if (cVar1 == '.') {
              if ((pdVar10->d_name[2] != '/') && (pdVar10->d_name[2] != '\0')) {
                _Var7 = pdVar10->d_ino;
                if (_Var7 != 0) goto LAB_00100268;
                goto LAB_00100498;
              }
              goto LAB_001003df;
            }
            if (cVar1 == '\0') goto LAB_001003df;
            if (cVar1 != '/') goto LAB_00100258;
            pdVar10 = readdir(__dirp);
            if (pdVar10 == (dirent *)0x0) break;
          } while( true );
        }
        uVar11 = (ulong)*puVar9;
        if (*puVar9 != 0) goto LAB_0010064a;
        iVar4 = closedir(__dirp);
        if (iVar4 == 0) {
          puVar9 = &_LC7;
          uVar19 = local_228 * 3;
          uVar11 = xnmalloc(3);
          uVar20 = uVar19;
          uVar18 = uVar11;
          while (uVar18 != uVar11 + uVar19) {
            lVar16 = __memcpy_chk(uVar18,&_LC7,3,uVar20);
            uVar18 = uVar19;
            if (uVar19 <= uVar20) {
              uVar18 = uVar20;
            }
            uVar12 = (uVar18 - uVar20) + 3;
            if (uVar12 < uVar18) {
              uVar12 = uVar18;
            }
            uVar20 = (uVar20 - uVar18) + -3 + uVar12;
            uVar18 = lVar16 + 3;
          }
          *(undefined1 *)(uVar18 - 1) = 0;
          uVar13 = quote(uVar11);
          uVar14 = dcgettext(0,"couldn\'t find directory entry in %s with matching i-node",5);
          __dirp = (DIR *)0x1;
          error(1,0,uVar14,uVar13);
LAB_0010064a:
          closedir(__dirp);
          *puVar9 = (uint)uVar11;
        }
LAB_00100653:
        uVar20 = local_228 * 3;
        lVar15 = xnmalloc(3);
        uVar11 = uVar20;
        for (lVar16 = lVar15; lVar16 != lVar15 + uVar20; lVar16 = lVar16 + 3) {
          lVar16 = __memcpy_chk(lVar16,&_LC7,3,uVar11);
          uVar19 = uVar11;
          if (uVar11 <= uVar20) {
            uVar19 = uVar20;
          }
          uVar18 = (uVar19 - uVar11) + 3;
          if (uVar18 < uVar19) {
            uVar18 = uVar19;
          }
          uVar11 = (uVar11 - uVar19) + -3 + uVar18;
        }
        *(undefined1 *)(lVar16 + -1) = 0;
        uVar13 = quote(lVar15);
        uVar14 = dcgettext(0,"reading directory %s",5);
        error(1,*puVar9,uVar14,uVar13);
      }
      uVar20 = local_228 * 3;
      lVar15 = xnmalloc(3);
      uVar11 = uVar20;
      for (lVar16 = lVar15; lVar16 != lVar15 + uVar20; lVar16 = lVar16 + 3) {
        lVar16 = __memcpy_chk(lVar16,&_LC7,3,uVar11);
        uVar19 = uVar20;
        if (uVar20 <= uVar11) {
          uVar19 = uVar11;
        }
        uVar18 = (uVar19 - uVar11) + 3;
        if (uVar18 < uVar19) {
          uVar18 = uVar19;
        }
        uVar11 = (uVar11 - uVar19) + -3 + uVar18;
      }
      *(undefined1 *)(lVar16 + -1) = 0;
      uVar13 = quote(lVar15);
      pcVar21 = "cannot open directory %s";
    }
  }
  do {
    uVar14 = dcgettext(0,pcVar21,5);
    piVar17 = __errno_location();
    error(1,*piVar17,uVar14,uVar13);
LAB_001007ba:
    uVar20 = local_220 * 3;
    lVar15 = xnmalloc(3);
    lVar16 = lVar15 + uVar20;
    uVar11 = uVar20;
    for (; lVar15 != lVar16; lVar15 = lVar15 + 3) {
      lVar15 = __memcpy_chk(lVar15,&_LC7,3,uVar11);
      uVar19 = uVar20;
      if (uVar20 <= uVar11) {
        uVar19 = uVar11;
      }
      uVar18 = (uVar19 - uVar11) + 3;
      if (uVar18 < uVar19) {
        uVar18 = uVar19;
      }
      uVar11 = (uVar11 - uVar19) + -3 + uVar18;
    }
    *(undefined1 *)(lVar15 + -1) = 0;
    uVar13 = quote();
    pcVar21 = "failed to chdir to %s";
  } while( true );
}



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
    goto LAB_001008ca;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Print the full filename of the current working directory.\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -L, --logical   use PWD from environment, even if it contains symlinks\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -P, --physical  resolve all symlinks\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nIf no option is specified, -P is assumed.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC14);
  pcVar4 = "[";
  local_a8 = &_LC13;
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
    iVar2 = strcmp("pwd",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC14;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00100b1d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC14);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100b1d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC14);
    if (puVar7 == &_LC14) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001008ca:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *__ptr;
  long lVar4;
  bool bVar5;
  
  pcVar2 = getenv("POSIXLY_CORRECT");
  bVar5 = pcVar2 != (char *)0x0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_001011b5:
  do {
    iVar1 = getopt_long(param_1,param_2,&_LC42,longopts,0);
    if (iVar1 == -1) {
      if (_optind < param_1) {
        uVar3 = dcgettext(0,"ignoring non-option arguments",5);
        error(0,0,uVar3);
      }
      if ((bVar5) && (pcVar2 = (char *)logical_getcwd(), pcVar2 != (char *)0x0)) {
        puts(pcVar2);
        return 0;
      }
      pcVar2 = (char *)xgetcwd();
      if (pcVar2 == (char *)0x0) {
LAB_001012a0:
        __ptr = (long *)xmalloc(0x18);
        __ptr[1] = 0x2000;
        lVar4 = xmalloc(0x2000);
        *__ptr = lVar4;
        __ptr[2] = lVar4 + 0x1fff;
        *(undefined1 *)(lVar4 + 0x1fff) = 0;
        robust_getcwd(__ptr);
        puts((char *)__ptr[2]);
        free((void *)*__ptr);
        free(__ptr);
      }
      else {
        puts(pcVar2);
        free(pcVar2);
      }
      return 0;
    }
    if (iVar1 == 0x4c) {
      bVar5 = true;
      goto LAB_001011b5;
    }
    if (iVar1 < 0x4d) {
      if (iVar1 == -0x83) {
        uVar3 = proper_name_lite("Jim Meyering","Jim Meyering");
        version_etc(_stdout,&_LC14,"GNU coreutils",_Version,uVar3,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar1 == -0x82) {
        usage(0);
      }
LAB_00101296:
      usage(1);
      goto LAB_001012a0;
    }
    if (iVar1 != 0x50) goto LAB_00101296;
    bVar5 = false;
  } while( true );
}


