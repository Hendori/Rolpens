
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



long nth_parent(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = param_1 * 3;
  lVar2 = xnmalloc(3,param_1);
  lVar7 = lVar2;
  if (param_1 != 0) {
    uVar6 = uVar1;
    lVar3 = lVar2;
    do {
      lVar3 = __memcpy_chk(lVar3,&_LC3,3,uVar6);
      uVar5 = uVar6;
      if (uVar6 <= uVar1) {
        uVar5 = uVar1;
      }
      uVar4 = (uVar5 - uVar6) + 3;
      if (uVar4 < uVar5) {
        uVar4 = uVar5;
      }
      lVar3 = lVar3 + 3;
      uVar6 = (uVar6 - uVar5) + -3 + uVar4;
      lVar7 = lVar2 + uVar1;
    } while (lVar3 != lVar2 + uVar1);
  }
  *(undefined1 *)(lVar7 + -1) = 0;
  return lVar2;
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
    goto LAB_001002aa;
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
  __printf_chk(2,uVar5,&_LC5);
  pcVar4 = "[";
  local_a8 = &_LC4;
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
    puVar7 = &_LC5;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_001004fd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001004fd:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
    if (puVar7 == &_LC5) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001002aa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  __ino_t _Var1;
  __ino_t _Var2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  __ino_t *p_Var10;
  DIR *__dirp;
  uint *puVar11;
  dirent *pdVar12;
  size_t sVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  undefined *puVar17;
  stat *psVar18;
  stat *psVar19;
  undefined1 *puVar20;
  long in_FS_OFFSET;
  bool bVar21;
  byte bVar22;
  stat *local_248;
  long *local_240;
  undefined1 *local_230;
  stat *local_218;
  stat *local_210;
  undefined1 local_208 [16];
  stat local_1f8;
  stat local_168;
  stat local_d8;
  long local_40;
  
  bVar22 = 0;
  puVar20 = longopts;
  puVar17 = &_LC7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar6 = getenv("POSIXLY_CORRECT");
  bVar21 = pcVar6 != (char *)0x0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00100bb6:
  do {
    iVar4 = getopt_long(param_1,param_2,&_LC34,longopts,0);
    if (iVar4 == -1) {
      if (_optind < param_1) {
LAB_00100cbd:
        uVar7 = dcgettext(0,"ignoring non-option arguments",5);
        error(0,0,uVar7);
      }
      if ((bVar21) && (pcVar6 = (char *)logical_getcwd(), pcVar6 != (char *)0x0)) {
        puts(pcVar6);
      }
      else {
        pcVar6 = (char *)xgetcwd();
        if (pcVar6 == (char *)0x0) {
          plVar8 = (long *)xmalloc(0x18);
          plVar8[1] = 0x2000;
          lVar9 = xmalloc(0x2000);
          *plVar8 = lVar9;
          plVar8[2] = lVar9 + 0x1fff;
          *(undefined1 *)(lVar9 + 0x1fff) = 0;
          p_Var10 = (__ino_t *)get_root_dev_ino(local_208);
          if (p_Var10 == (__ino_t *)0x0) {
            __dirp = (DIR *)quotearg_style(4,&_LC37);
            pcVar6 = "failed to get attributes of %s";
            goto LAB_00100f8c;
          }
          local_218 = &local_1f8;
          puVar20 = (undefined1 *)0x1;
          iVar4 = stat(".",local_218);
          if (iVar4 < 0) {
            __dirp = (DIR *)quotearg_style(4,&_LC2);
            puVar3 = puVar20;
            goto LAB_00100fe7;
          }
          local_248 = &local_168;
          local_210 = &local_d8;
          local_240 = plVar8;
          while (local_1f8.st_dev != p_Var10[1] || local_1f8.st_ino != *p_Var10) {
            local_230 = puVar20 + 1;
            __dirp = opendir("..");
            if (__dirp == (DIR *)0x0) {
              uVar7 = nth_parent(puVar20);
              __dirp = (DIR *)quote(uVar7);
              pcVar6 = "cannot open directory %s";
              goto LAB_00100f8c;
            }
            iVar4 = dirfd(__dirp);
            if (iVar4 < 0) goto LAB_00100faf;
            iVar5 = fchdir(iVar4);
            if (iVar5 < 0) goto LAB_00100f6d;
            iVar4 = fstat(iVar4,local_248);
            puVar3 = puVar20;
            _Var1 = local_1f8.st_dev;
            _Var2 = local_168.st_dev;
            while (puVar20 = local_230, local_1f8.st_dev = _Var1, local_168.st_dev = _Var2,
                  iVar4 < 0) {
              uVar7 = nth_parent(puVar3);
              __dirp = (DIR *)quote(uVar7);
              local_230 = puVar20;
LAB_00100fe7:
              puVar20 = puVar3;
              pcVar6 = "failed to stat %s";
LAB_00100f8c:
              while( true ) {
                puVar17 = (undefined *)dcgettext(0,pcVar6,5);
                piVar16 = __errno_location();
                error(1,*piVar16,puVar17,__dirp);
LAB_00100faf:
                iVar4 = chdir("..");
                if (-1 < iVar4) break;
LAB_00100f6d:
                nth_parent(puVar20);
                __dirp = (DIR *)quote();
                pcVar6 = "failed to chdir to %s";
              }
              iVar4 = stat(".",local_248);
              puVar3 = puVar20;
              _Var1 = local_1f8.st_dev;
              _Var2 = local_168.st_dev;
            }
            puVar11 = (uint *)__errno_location();
            do {
              while( true ) {
                *puVar11 = 0;
                do {
                  pdVar12 = readdir(__dirp);
                  if (pdVar12 == (dirent *)0x0) {
                    uVar15 = (ulong)*puVar11;
                    if (*puVar11 != 0) goto LAB_00100f63;
                    iVar4 = closedir(__dirp);
                    if (iVar4 == 0) goto LAB_00100f29;
                    goto LAB_00100eee;
                  }
                  pcVar6 = pdVar12->d_name;
                } while ((pdVar12->d_name[0] == '.') &&
                        ((pdVar12->d_name[(ulong)(pdVar12->d_name[1] == '.') + 1] == '\0' ||
                         (pdVar12->d_name[(ulong)(pdVar12->d_name[1] == '.') + 1] == '/'))));
                if ((pdVar12->d_ino != 0) && (_Var2 == _Var1)) break;
                iVar4 = lstat(pcVar6,local_210);
                if (((-1 < iVar4) && (local_d8.st_ino == local_1f8.st_ino)) &&
                   ((_Var2 == _Var1 || (local_d8.st_dev == local_1f8.st_dev)))) goto LAB_00100e9d;
              }
            } while (pdVar12->d_ino != local_1f8.st_ino);
LAB_00100e9d:
            sVar13 = strlen(pcVar6);
            file_name_prepend(local_240,pcVar6,sVar13);
            iVar4 = closedir(__dirp);
            if (iVar4 != 0) {
LAB_00100eee:
              do {
                uVar7 = nth_parent(puVar3);
                uVar7 = quote(uVar7);
                uVar14 = dcgettext(0,"reading directory %s",5);
                error(1,*puVar11,uVar14,uVar7);
LAB_00100f29:
                uVar7 = nth_parent(puVar3);
                uVar15 = quote(uVar7);
                uVar7 = dcgettext(0,"couldn\'t find directory entry in %s with matching i-node",5);
                __dirp = (DIR *)0x1;
                error(1,0,uVar7,uVar15);
LAB_00100f63:
                closedir(__dirp);
                *puVar11 = (uint)uVar15;
              } while( true );
            }
            psVar18 = local_248;
            psVar19 = local_218;
            for (lVar9 = 0x24; lVar9 != 0; lVar9 = lVar9 + -1) {
              *(int *)&psVar19->st_dev = (int)psVar18->st_dev;
              psVar18 = (stat *)((long)psVar18 + (ulong)bVar22 * -8 + 4);
              psVar19 = (stat *)((long)psVar19 + (ulong)bVar22 * -8 + 4);
            }
          }
          pcVar6 = (char *)local_240[2];
          if (*pcVar6 == '\0') {
            file_name_prepend(local_240,puVar17,0);
            pcVar6 = (char *)local_240[2];
          }
          puts(pcVar6);
          free((void *)*local_240);
          free(local_240);
        }
        else {
          puts(pcVar6);
          free(pcVar6);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (iVar4 != 0x4c) {
      if (iVar4 < 0x4d) {
        if (iVar4 == -0x83) {
          uVar7 = proper_name_lite("Jim Meyering","Jim Meyering");
          version_etc(_stdout,&_LC5,"GNU coreutils",_Version,uVar7,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar4 == -0x82) {
          usage(0);
        }
      }
      else if (iVar4 == 0x50) {
        bVar21 = false;
        goto LAB_00100bb6;
      }
      usage(1);
      goto LAB_00100cbd;
    }
    bVar21 = true;
  } while( true );
}


