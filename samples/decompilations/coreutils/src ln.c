
/* WARNING: Unknown calling convention */

int atomic_link(char *source,int destdir_fd,char *dest_base)

{
  int iVar1;
  int *piVar2;
  
  if (symbolic_link) {
    if (relative) {
      return -1;
    }
    iVar1 = symlinkat(source,destdir_fd,dest_base);
  }
  else {
    if (beware_hard_dir_link) {
      return -1;
    }
    iVar1 = linkat(-100,source,destdir_fd,dest_base,(uint)logical << 10);
  }
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    return *piVar2;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool do_link(char *source,int destdir_fd,char *dest_base,char *dest,int link_errno)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  size_t sVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *__new;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  undefined8 uVar12;
  int iVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  char *__ptr_02;
  char *__ptr_03;
  long in_FS_OFFSET;
  bool bVar17;
  stat source_stats;
  stat dest_stats;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = (logical ^ 1) << 8;
  if (link_errno < 0) {
    link_errno = atomic_link(source,destdir_fd,dest_base);
  }
  pcVar8 = source;
  if (link_errno == 0) {
    if (dest_set == (Hash_table *)0x0) {
      __ptr_03 = (char *)0x0;
      __new = (char *)0x0;
      goto LAB_0010019c;
    }
    if (symbolic_link == false) {
      iVar13 = fstatat(-100,source,(stat *)&source_stats,iVar13);
      if (iVar13 != 0) goto LAB_0010078f;
      __ptr_03 = (char *)0x0;
      __new = (char *)0x0;
      goto LAB_00100345;
    }
    if (verbose == false) {
      __ptr_03 = (char *)0x0;
      __new = (char *)0x0;
      uVar4 = symbolic_link;
      goto LAB_001002aa;
    }
    puVar14 = &_LC0;
    __new = (char *)0x0;
    __ptr_03 = (char *)0x0;
    puVar9 = &_LC0;
LAB_00100246:
    uVar10 = quotearg_n_style(1,4,source);
    bVar17 = symbolic_link == false;
    uVar11 = quotearg_n_style(0,4,dest);
    __printf_chk(2,"%s%s%s %c> %s\n",puVar9,puVar14,uVar11,(-bVar17 & 0x10U) + 0x2d,uVar10);
    uVar4 = 1;
  }
  else {
    bVar17 = true;
    if (symbolic_link == false) {
      iVar13 = fstatat(-100,source,(stat *)&source_stats,iVar13);
      if (iVar13 != 0) {
LAB_0010078f:
        uVar10 = quotearg_style(4,source);
        uVar11 = dcgettext(0,"failed to access %s",5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar11,uVar10);
        uVar4 = 0;
        goto LAB_001002c1;
      }
      bVar17 = false;
      if ((hard_dir_link == false) && ((source_stats.st_mode & 0xf000) == 0x4000)) {
        uVar10 = quotearg_n_style_colon(0,3,source);
        uVar11 = dcgettext(0,"%s: hard link not allowed for directory",5);
        error(0,0,uVar11,uVar10);
        uVar4 = 0;
        goto LAB_001002c1;
      }
    }
    __ptr_03 = (char *)0x0;
    if (relative != false) {
      __ptr = (void *)dir_name(dest);
      __ptr_00 = (void *)canonicalize_filename_mode(__ptr,2);
      __ptr_01 = (void *)canonicalize_filename_mode(source,2);
      if ((__ptr_00 != (void *)0x0) && (__ptr_01 != (void *)0x0)) {
        pcVar8 = (char *)xmalloc(0x1000);
        cVar2 = relpath(__ptr_01,__ptr_00,pcVar8,0x1000);
        if (cVar2 != '\0') {
          free(__ptr);
          free(__ptr_00);
          free(__ptr_01);
          __ptr_03 = pcVar8;
          goto LAB_001000fd;
        }
        free(pcVar8);
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      pcVar8 = (char *)xstrdup(source);
      __ptr_03 = pcVar8;
    }
LAB_001000fd:
    if (((remove_existing_files == false) && (interactive == false)) && (backup_type == no_backups))
    {
LAB_0010014e:
      uVar10 = 0;
      __new = (char *)0x0;
LAB_00100154:
      if (symbolic_link != false) goto LAB_001004a9;
LAB_00100161:
      uVar5 = force_linkat(0xffffff9c,pcVar8,destdir_fd,dest_base,(ulong)logical << 10,uVar10,
                           link_errno);
    }
    else {
      iVar13 = fstatat(destdir_fd,dest_base,(stat *)&dest_stats,0x100);
      if (iVar13 != 0) {
        piVar6 = __errno_location();
        if (*piVar6 != 2) {
          uVar10 = quotearg_style(4,dest);
          uVar11 = dcgettext(0,"failed to access %s",5);
          error(0,*piVar6,uVar11,uVar10);
          goto LAB_0010044e;
        }
        goto LAB_0010014e;
      }
      if ((dest_stats.st_mode & 0xf000) == 0x4000) {
        uVar10 = quotearg_n_style_colon(0,3,dest);
        uVar11 = dcgettext(0,"%s: cannot overwrite directory",5);
        error(0,0,uVar11,uVar10);
LAB_0010044e:
        free(__ptr_03);
        uVar4 = 0;
        goto LAB_001002c1;
      }
      cVar2 = seen_file(dest_set,dest,&dest_stats);
      if (cVar2 != '\0') {
        uVar10 = quotearg_n_style(1,4,pcVar8);
        uVar11 = quotearg_n_style(0,4,dest);
        uVar12 = dcgettext(0,"will not overwrite just-created %s with %s",5);
LAB_00100440:
        error(0,0,uVar12,uVar11,uVar10);
        goto LAB_0010044e;
      }
      bVar3 = remove_existing_files;
      if (backup_type != no_backups) {
        bVar3 = symbolic_link ^ 1;
      }
      if ((((bVar3 != 0) &&
           ((!bVar17 || (iVar13 = stat(pcVar8,(stat *)&source_stats), iVar13 == 0)))) &&
          (source_stats.st_dev == dest_stats.st_dev && source_stats.st_ino == dest_stats.st_ino)) &&
         ((source_stats.st_nlink == 1 ||
          (cVar2 = same_nameat(0xffffff9c,pcVar8,destdir_fd,dest_base), cVar2 != '\0')))) {
        uVar10 = quotearg_n_style(1,4,dest);
        uVar11 = quotearg_n_style(0,4,pcVar8);
        uVar12 = dcgettext(0,"%s and %s are the same file",5);
        goto LAB_00100440;
      }
      if ((link_errno < 0) || (link_errno == 0x11)) {
        if (interactive != false) {
          uVar11 = quotearg_style(4,dest);
          uVar10 = _program_name;
          uVar12 = dcgettext(0,"%s: replace %s? ",5);
          __fprintf_chk(_stderr,2,uVar12,uVar10,uVar11);
          cVar2 = yesno();
          if (cVar2 == '\0') goto LAB_0010044e;
        }
        if (backup_type == no_backups) goto LAB_00100493;
        __new = (char *)find_backup_file_name(destdir_fd,dest_base);
        iVar13 = renameat(destdir_fd,dest_base,destdir_fd,__new);
        uVar10 = 1;
        if (iVar13 != 0) {
          piVar6 = __errno_location();
          iVar13 = *piVar6;
          free(__new);
          if (iVar13 == 2) goto LAB_0010014e;
          uVar10 = quotearg_style(4,dest);
          uVar11 = dcgettext(0,"cannot backup %s",5);
          error(0,iVar13,uVar11,uVar10);
          goto LAB_0010044e;
        }
        goto LAB_00100154;
      }
LAB_00100493:
      __new = (char *)0x0;
      uVar10 = 1;
      if (symbolic_link == false) goto LAB_00100161;
LAB_001004a9:
      uVar5 = force_symlinkat(pcVar8,destdir_fd,dest_base,uVar10,link_errno);
    }
    if ((int)uVar5 < 1) {
LAB_0010019c:
      if (symbolic_link == false) {
LAB_00100345:
        record_file(dest_set,dest,&source_stats);
      }
      uVar4 = 1;
      if (verbose != false) {
        source = pcVar8;
        if (__new == (char *)0x0) {
          puVar14 = &_LC0;
          puVar9 = &_LC0;
        }
        else {
          uVar16 = (long)dest_base - (long)dest;
          pcVar8 = __new;
          __ptr_02 = (char *)0x0;
          if (0 < (long)uVar16) {
            sVar7 = strlen(__new);
            uVar15 = uVar16 + 1 + sVar7;
            pcVar8 = (char *)xmalloc(uVar15);
            __memcpy_chk(pcVar8,dest,uVar16,uVar15);
            if (uVar15 <= uVar16) {
              uVar15 = uVar16;
            }
            __strcpy_chk(pcVar8 + uVar16,__new,uVar15 - uVar16);
            __ptr_02 = pcVar8;
          }
          puVar9 = (undefined *)quotearg_n_style(2,4,pcVar8);
          free(__ptr_02);
          puVar14 = &_LC1;
        }
        goto LAB_00100246;
      }
    }
    else {
      uVar10 = quotearg_n_style(1,4,pcVar8);
      uVar11 = quotearg_n_style(0,4,dest);
      if (symbolic_link == false) {
        if (uVar5 == 0x1f) {
          uVar12 = dcgettext(0,"failed to create hard link to %.0s%s",5);
        }
        else if (((uVar5 == 0x7a) || (uVar5 == 0x11)) || ((uVar5 & 0xfffffffd) == 0x1c)) {
          uVar12 = dcgettext(0,"failed to create hard link %s",5);
        }
        else {
          uVar12 = dcgettext(0,"failed to create hard link %s => %s",5);
        }
      }
      else if ((uVar5 == 0x24) || (*pcVar8 == '\0')) {
        uVar12 = dcgettext(0,"failed to create symbolic link %s -> %s",5);
      }
      else {
        uVar12 = dcgettext(0,"failed to create symbolic link %s",5);
      }
      error(0,uVar5,uVar12,uVar11,uVar10);
      uVar4 = 0;
      if (__new != (char *)0x0) {
        iVar13 = renameat(destdir_fd,__new,destdir_fd,dest_base);
        if (iVar13 == 0) {
          uVar4 = 0;
        }
        else {
          uVar10 = quotearg_style(4,dest);
          uVar11 = dcgettext(0,"cannot un-backup %s",5);
          piVar6 = __errno_location();
          error(0,*piVar6,uVar11,uVar10);
          uVar4 = 0;
        }
      }
    }
  }
LAB_001002aa:
  free(__new);
  free(__ptr_03);
LAB_001002c1:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_Bool)uVar4;
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
  undefined1 *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100a49;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] TARGET LINK_NAME\n  or:  %s [OPTION]... TARGET\n  or:  %s [OPTION]... TARGET... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY TARGET...\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --backup[=CONTROL]      make a backup of each existing destination file\n  -b                          like --backup but does not accept an argument\n  -d, -F, --directory         allow the superuser to attempt to hard link\n                                directories (this will probably fail due to\n                                system restrictions, even for the superuser)\n  -f, --force                 remove existing destination files\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --interactive           prompt whether to remove destinations\n  -L, --logical               dereference TARGETs that are symbolic links\n  -n, --no-dereference        treat LINK_NAME as a normal file if\n                                it is a symbolic link to a directory\n  -P, --physical              make hard links directly to symbolic links\n  -r, --relative              with -s, create links relative to link location\n  -s, --symbolic              make symbolic links instead of hard links\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -S, --suffix=SUFFIX         override the usual backup suffix\n  -t, --target-directory=DIRECTORY  specify the DIRECTORY in which to create\n                                the links\n  -T, --no-target-directory   treat LINK_NAME as a normal file always\n  -v, --verbose               print name of each linked file\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe backup suffix is \'~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nUsing -s ignores -L and -P.  Otherwise, the last option specified controls\nbehavior when a TARGET is a symbolic link, defaulting to %s.\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC32);
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
    if (((*pcVar4 == 'l') && (pcVar4[1] == 'n')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC17;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00100d2c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC17);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100d2c:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC17);
    if (puVar7 == &_LC17) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00100a49:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  _Bool _Var2;
  _Bool _Var3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  undefined *puVar12;
  uint *puVar13;
  char **ppcVar14;
  char **ppcVar15;
  long in_FS_OFFSET;
  bool bVar16;
  int local_104;
  char *local_100;
  char *local_f8;
  int local_f0;
  char *dest_base;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar13 = &switchD_00101f91::switchdataD_001025e0;
  textdomain("coreutils");
  atexit((__func *)&close_stdin);
  hard_dir_link = false;
  verbose = false;
  interactive = false;
  remove_existing_files = false;
  symbolic_link = false;
  bVar16 = false;
  local_100 = (char *)0x0;
  local_f8 = (char *)0x0;
  local_104 = 0;
  pcVar9 = (char *)0x0;
  pcVar11 = local_100;
LAB_00101f50:
  local_100 = pcVar11;
  uVar6 = getopt_long(argc,argv,"bdfinrst:vFLPS:T",long_options,0);
  iVar5 = (int)uVar6;
  if (iVar5 != -1) {
    if (0x76 < iVar5) goto switchD_00101f91_caseD_47;
    if (iVar5 < 0x46) {
      if (iVar5 == -0x83) {
        uVar7 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar8 = proper_name_lite("Mike Parker","Mike Parker");
        version_etc(_stdout,&_LC17,"GNU coreutils",_Version,uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
LAB_001024eb:
      if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00101f91_caseD_47;
    }
    pcVar11 = local_100;
    switch(iVar5) {
    case 0x46:
    case 100:
      hard_dir_link = true;
      goto LAB_00101f50;
    default:
      goto switchD_00101f91_caseD_47;
    case 0x4c:
      logical = true;
      goto LAB_00101f50;
    case 0x50:
      logical = false;
      goto LAB_00101f50;
    case 0x53:
      local_f8 = _optarg;
      local_104 = 1;
      goto LAB_00101f50;
    case 0x54:
      bVar16 = true;
      goto LAB_00101f50;
    case 0x62:
      local_104 = 1;
      pcVar11 = _optarg;
      if (_optarg == (char *)0x0) {
        pcVar11 = local_100;
      }
      goto LAB_00101f50;
    case 0x66:
      remove_existing_files = true;
      interactive = false;
      goto LAB_00101f50;
    case 0x69:
      remove_existing_files = false;
      interactive = true;
      goto LAB_00101f50;
    case 0x6e:
      dereference_dest_dir_symlinks = false;
      goto LAB_00101f50;
    case 0x72:
      relative = true;
      goto LAB_00101f50;
    case 0x73:
      goto switchD_00101f91_caseD_73;
    case 0x74:
      if (pcVar9 != (char *)0x0) {
        pcVar11 = "multiple target directories specified";
        goto LAB_0010250e;
      }
      iVar5 = stat(_optarg,(stat *)&st);
      pcVar9 = _optarg;
      if (iVar5 != 0) {
        uVar7 = quotearg_style(4,_optarg);
        uVar8 = dcgettext(0,"failed to access %s",5);
        piVar10 = __errno_location();
        error(1,*piVar10,uVar8,uVar7);
        goto LAB_001025bb;
      }
      if ((st.st_mode & 0xf000) == 0x4000) goto LAB_00101f50;
      argv = (char **)quotearg_style(4,_optarg);
      uVar7 = dcgettext(0,"target %s is not a directory",5);
      error(1,0,uVar7,argv);
switchD_00101f91_caseD_73:
      symbolic_link = true;
      goto LAB_00101f50;
    case 0x76:
      goto switchD_00101f91_caseD_76;
    }
  }
  puVar12 = (undefined *)(uVar6 & 0xffffffff);
  argc = argc - _optind;
  puVar13 = (uint *)(argv + _optind);
  if (argc < 1) {
    uVar7 = dcgettext(0,"missing file operand",5);
    error(0,0,uVar7);
    goto switchD_00101f91_caseD_47;
  }
  if ((relative == false) || (symbolic_link != false)) {
    if (hard_dir_link == false) {
      beware_hard_dir_link = false;
    }
    if (!bVar16) goto LAB_00102280;
    pcVar11 = "cannot combine --target-directory and --no-target-directory";
    if (pcVar9 != (char *)0x0) goto LAB_0010250e;
    if (argc == 2) {
LAB_001021c3:
      if ((char)local_104 == '\0') {
        local_104 = (int)puVar12;
        backup_type = no_backups;
        set_simple_backup_suffix(local_f8);
LAB_00102487:
        _Var3 = do_link(*(char **)puVar13,-100,*(char **)((long)puVar13 + 8),
                        *(char **)((long)puVar13 + 8),local_104);
LAB_00102334:
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(_Var3 ^ 1);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      argc = 2;
      pcVar11 = (char *)0x0;
LAB_001021d5:
      uVar7 = dcgettext(0,"backup type",5);
      backup_type = xget_version(uVar7,local_100);
      puVar12 = (undefined *)((ulong)puVar12 & 0xffffffff);
      do {
        local_104 = (int)puVar12;
        set_simple_backup_suffix(local_f8);
        if (pcVar11 == (char *)0x0) goto LAB_00102487;
        if (argc < 2) {
          _Var3 = true;
          if (argc == 1) {
LAB_001022ca:
            _Var3 = true;
            ppcVar14 = (char **)puVar13;
            do {
              ppcVar15 = ppcVar14 + 1;
              uVar7 = last_component(*ppcVar14);
              pcVar9 = (char *)file_name_concat(pcVar11,uVar7,&dest_base);
              strip_trailing_slashes(dest_base);
              _Var2 = do_link(*ppcVar14,local_f0,dest_base,pcVar9,-1);
              _Var3 = (_Bool)(_Var3 & _Var2);
              free(pcVar9);
              ppcVar14 = ppcVar15;
            } while ((char **)((long)puVar13 + (long)argc * 8) != ppcVar15);
          }
          goto LAB_00102334;
        }
        if (((remove_existing_files == false) || (symbolic_link != false)) ||
           (backup_type == numbered_backups)) goto LAB_001022ca;
        puVar12 = &triple_free;
        dest_set = (Hash_table *)hash_initialize(0x3d,0,&triple_hash,&triple_compare);
        if (dest_set != (Hash_table *)0x0) goto LAB_001022ca;
        xalloc_die();
LAB_00102280:
        uVar4 = (uint)puVar12;
        bVar16 = pcVar9 == (char *)0x0;
        if ((argc < 2) && (bVar16)) {
          if ((char)local_104 == '\0') {
            argc = 1;
            pcVar11 = ".";
            backup_type = no_backups;
            set_simple_backup_suffix(local_f8);
            local_f0 = -100;
            goto LAB_001022ca;
          }
          local_f0 = -100;
          argc = 1;
          pcVar11 = ".";
          goto LAB_001021d5;
        }
        if ((argc == 2) && (bVar16)) {
          uVar4 = atomic_link(*(char **)puVar13,-100,*(char **)((long)puVar13 + 8));
          puVar12 = (undefined *)(ulong)uVar4;
          if (((-1 < (int)uVar4) && (uVar4 != 0x11)) && ((uVar4 & 0xfffffffd) != 0x14))
          goto LAB_001021c3;
LAB_001023b0:
          pcVar11 = *(char **)((long)puVar13 + ((long)argc + -1) * 8);
        }
        else {
          pcVar11 = pcVar9;
          if (pcVar9 == (char *)0x0) goto LAB_001023b0;
        }
        local_f0 = openat_safer(0xffffff9c,pcVar11,
                                (-(uint)(dereference_dest_dir_symlinks == false) & 0x20000) +
                                0x210000);
        piVar10 = __errno_location();
        puVar12 = (undefined *)(ulong)uVar4;
        iVar5 = *piVar10;
        if (local_f0 < 0) {
          if ((argc == 2) && (pcVar9 == (char *)0x0)) goto LAB_001021c3;
          uVar7 = quotearg_style(4,pcVar11);
          uVar8 = dcgettext(0,"target %s",5);
          iVar5 = error(1,iVar5,uVar8,uVar7);
          goto LAB_001024eb;
        }
        argc = argc - (uint)bVar16;
        if ((char)local_104 != '\0') goto LAB_001021d5;
        backup_type = no_backups;
      } while( true );
    }
  }
  else {
    pcVar11 = "cannot do --relative without --symbolic";
LAB_0010250e:
    uVar7 = dcgettext(0,pcVar11,5);
    error(1,0,uVar7);
  }
  if (argc == 1) {
LAB_001025bb:
    uVar7 = quotearg_style(4,*(char **)puVar13);
    pcVar9 = "missing destination file operand after %s";
  }
  else {
    uVar7 = quotearg_style(4,*(char **)((long)puVar13 + 0x10));
    pcVar9 = "extra operand %s";
  }
  uVar8 = dcgettext(0,pcVar9,5);
  error(0,0,uVar8,uVar7);
switchD_00101f91_caseD_47:
                    /* WARNING: Subroutine does not return */
  usage(1);
switchD_00101f91_caseD_76:
  verbose = true;
  goto LAB_00101f50;
}


