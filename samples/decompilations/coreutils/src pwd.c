
/* WARNING: Unknown calling convention */

char * logical_getcwd(void)

{
  char cVar1;
  long lVar2;
  int iVar3;
  char *__file;
  char *pcVar4;
  long in_FS_OFFSET;
  stat st1;
  stat st2;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  __file = getenv("PWD");
  if ((__file != (char *)0x0) && (pcVar4 = __file, *__file == '/')) {
    while (pcVar4 = strstr(pcVar4,"/."), pcVar4 != (char *)0x0) {
      cVar1 = pcVar4[2];
      if (((cVar1 == '\0') || (cVar1 == '/')) ||
         ((cVar1 == '.' && ((pcVar4[3] == '\0' || (pcVar4[3] == '/')))))) goto LAB_00100080;
      pcVar4 = pcVar4 + 1;
    }
    iVar3 = stat(__file,(stat *)&st1);
    if (((iVar3 == 0) && (iVar3 = stat(".",(stat *)&st2), iVar3 == 0)) &&
       (st1.st_dev == st2.st_dev && st1.st_ino == st2.st_ino)) goto LAB_00100082;
  }
LAB_00100080:
  __file = (char *)0x0;
LAB_00100082:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __file;
}



/* WARNING: Unknown calling convention */

char * nth_parent(size_t n)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar1 = n * 3;
  pcVar2 = (char *)xnmalloc(3,n);
  pcVar8 = pcVar2;
  if (n != 0) {
    uVar6 = uVar1;
    pcVar7 = pcVar2;
    do {
      lVar3 = __memcpy_chk(pcVar7,&_LC3,3,uVar6);
      uVar5 = uVar6;
      if (uVar6 <= uVar1) {
        uVar5 = uVar1;
      }
      uVar4 = (uVar5 - uVar6) + 3;
      if (uVar4 < uVar5) {
        uVar4 = uVar5;
      }
      pcVar7 = (char *)(lVar3 + 3);
      uVar6 = (uVar6 - uVar5) + -3 + uVar4;
      pcVar8 = pcVar2 + uVar1;
    } while (pcVar7 != pcVar2 + uVar1);
  }
  pcVar8[-1] = '\0';
  return pcVar2;
}



/* WARNING: Unknown calling convention */

void file_name_prepend(file_name *p,char *s,size_t s_len)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  
  pcVar2 = p->start;
  uVar4 = (long)pcVar2 - (long)p->buf;
  if (uVar4 < s_len + 1) {
    lVar1 = p->n_alloc;
    pcVar2 = (char *)xpalloc(0,&p->n_alloc,(s_len + 1) - uVar4,0xffffffffffffffff,1);
    pcVar3 = (char *)memcpy(pcVar2 + (p->n_alloc - uVar4),p->start,lVar1 - uVar4);
    p->start = pcVar3;
    free(p->buf);
    p->buf = pcVar2;
    pcVar2 = p->start;
  }
  p->start = pcVar2 + ~s_len;
  pcVar2[~s_len] = '/';
  memcpy(p->start + 1,s,s_len);
  return;
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
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("pwd",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  __dev_t _Var2;
  __dev_t _Var3;
  option *n;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  file_name *pfVar8;
  __ino_t *p_Var9;
  DIR *__dirp;
  uint *puVar10;
  dirent *pdVar11;
  size_t s_len;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  char *pcVar16;
  stat *psVar17;
  stat *psVar18;
  option *n_00;
  long in_FS_OFFSET;
  bool bVar19;
  byte bVar20;
  stat *local_248;
  file_name *local_240;
  option *local_230;
  stat *local_218;
  stat *local_210;
  dev_ino dev_ino_buf;
  stat dot_sb;
  stat parent_sb;
  stat ent_sb;
  
  bVar20 = 0;
  n_00 = longopts;
  pcVar16 = "";
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar6 = getenv("POSIXLY_CORRECT");
  bVar19 = pcVar6 != (char *)0x0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00100bb6:
  do {
    iVar4 = getopt_long(argc,argv,&_LC34,longopts,0);
    if (iVar4 == -1) {
      if (_optind < argc) {
        uVar7 = dcgettext(0,"ignoring non-option arguments",5);
        error(0,0,uVar7);
      }
      if ((bVar19) && (pcVar6 = logical_getcwd(), pcVar6 != (char *)0x0)) {
        puts(pcVar6);
      }
      else {
        pcVar6 = (char *)xgetcwd();
        if (pcVar6 == (char *)0x0) {
          pfVar8 = (file_name *)xmalloc(0x18);
          pfVar8->n_alloc = 0x2000;
          pcVar6 = (char *)xmalloc(0x2000);
          pfVar8->buf = pcVar6;
          pfVar8->start = pcVar6 + 0x1fff;
          pcVar6[0x1fff] = '\0';
          p_Var9 = (__ino_t *)get_root_dev_ino(&dev_ino_buf);
          if (p_Var9 == (__ino_t *)0x0) {
            __dirp = (DIR *)quotearg_style(4,&_LC37);
            pcVar16 = "failed to get attributes of %s";
            goto LAB_00100f8c;
          }
          local_218 = &dot_sb;
          n_00 = (option *)0x1;
          iVar4 = stat(".",(stat *)local_218);
          if (iVar4 < 0) {
            __dirp = (DIR *)quotearg_style(4,&_LC2);
            n = n_00;
            goto LAB_00100fe7;
          }
          local_248 = &parent_sb;
          local_210 = &ent_sb;
          local_240 = pfVar8;
          while (dot_sb.st_dev != p_Var9[1] || dot_sb.st_ino != *p_Var9) {
            local_230 = (option *)((long)&n_00->name + 1);
            __dirp = opendir("..");
            if (__dirp == (DIR *)0x0) {
              pcVar16 = nth_parent((size_t)n_00);
              __dirp = (DIR *)quote(pcVar16);
              pcVar16 = "cannot open directory %s";
              goto LAB_00100f8c;
            }
            iVar4 = dirfd(__dirp);
            if (iVar4 < 0) goto LAB_00100faf;
            iVar5 = fchdir(iVar4);
            if (iVar5 < 0) goto LAB_00100f6d;
            iVar4 = fstat(iVar4,(stat *)local_248);
            n = n_00;
            _Var2 = dot_sb.st_dev;
            _Var3 = parent_sb.st_dev;
            while (n_00 = local_230, dot_sb.st_dev = _Var2, parent_sb.st_dev = _Var3, iVar4 < 0) {
              pcVar16 = nth_parent((size_t)n);
              __dirp = (DIR *)quote(pcVar16);
              local_230 = n_00;
LAB_00100fe7:
              n_00 = n;
              pcVar16 = "failed to stat %s";
LAB_00100f8c:
              while( true ) {
                pcVar16 = (char *)dcgettext(0,pcVar16,5);
                piVar14 = __errno_location();
                error(1,*piVar14,pcVar16,__dirp);
LAB_00100faf:
                iVar4 = chdir("..");
                if (-1 < iVar4) break;
LAB_00100f6d:
                nth_parent((size_t)n_00);
                __dirp = (DIR *)quote();
                pcVar16 = "failed to chdir to %s";
              }
              iVar4 = stat(".",(stat *)local_248);
              n = n_00;
              _Var2 = dot_sb.st_dev;
              _Var3 = parent_sb.st_dev;
            }
            puVar10 = (uint *)__errno_location();
            do {
              while( true ) {
                *puVar10 = 0;
                do {
                  pdVar11 = readdir(__dirp);
                  if (pdVar11 == (dirent *)0x0) {
                    uVar13 = (ulong)*puVar10;
                    if (*puVar10 != 0) goto LAB_00100f63;
                    iVar4 = closedir(__dirp);
                    if (iVar4 == 0) goto LAB_00100f29;
                    goto LAB_00100eee;
                  }
                  pcVar6 = pdVar11->d_name;
                } while ((pdVar11->d_name[0] == '.') &&
                        ((pdVar11->d_name[(ulong)(pdVar11->d_name[1] == '.') + 1] == '\0' ||
                         (pdVar11->d_name[(ulong)(pdVar11->d_name[1] == '.') + 1] == '/'))));
                if ((pdVar11->d_ino != 0) && (_Var3 == _Var2)) break;
                iVar4 = lstat(pcVar6,(stat *)local_210);
                if (((-1 < iVar4) && (ent_sb.st_ino == dot_sb.st_ino)) &&
                   ((_Var3 == _Var2 || (ent_sb.st_dev == dot_sb.st_dev)))) goto LAB_00100e9d;
              }
            } while (pdVar11->d_ino != dot_sb.st_ino);
LAB_00100e9d:
            s_len = strlen(pcVar6);
            file_name_prepend(local_240,pcVar6,s_len);
            iVar4 = closedir(__dirp);
            if (iVar4 != 0) {
LAB_00100eee:
              do {
                pcVar16 = nth_parent((size_t)n);
                uVar7 = quote(pcVar16);
                uVar12 = dcgettext(0,"reading directory %s",5);
                error(1,*puVar10,uVar12,uVar7);
LAB_00100f29:
                pcVar16 = nth_parent((size_t)n);
                uVar13 = quote(pcVar16);
                uVar7 = dcgettext(0,"couldn\'t find directory entry in %s with matching i-node",5);
                __dirp = (DIR *)0x1;
                error(1,0,uVar7,uVar13);
LAB_00100f63:
                closedir(__dirp);
                *puVar10 = (uint)uVar13;
              } while( true );
            }
            psVar17 = local_248;
            psVar18 = local_218;
            for (lVar15 = 0x24; lVar15 != 0; lVar15 = lVar15 + -1) {
              *(int *)&psVar18->st_dev = (int)psVar17->st_dev;
              psVar17 = (stat *)((long)psVar17 + (ulong)bVar20 * -8 + 4);
              psVar18 = (stat *)((long)psVar18 + (ulong)bVar20 * -8 + 4);
            }
          }
          pcVar6 = local_240->start;
          if (*pcVar6 == '\0') {
            file_name_prepend(local_240,pcVar16,0);
            pcVar6 = local_240->start;
          }
          puts(pcVar6);
          free(local_240->buf);
          free(local_240);
        }
        else {
          puts(pcVar6);
          free(pcVar6);
        }
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
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
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
      }
      else if (iVar4 == 0x50) {
        bVar19 = false;
        goto LAB_00100bb6;
      }
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    bVar19 = true;
  } while( true );
}


