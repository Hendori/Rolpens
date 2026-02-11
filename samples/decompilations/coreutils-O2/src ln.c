
int atomic_link(char *param_1,int param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (symbolic_link == '\0') {
    if (beware_hard_dir_link != '\0') {
      return -1;
    }
    iVar1 = linkat(-100,param_1,param_2,param_3,(uint)logical << 10);
  }
  else {
    if (relative != '\0') {
      return -1;
    }
    iVar1 = symlinkat(param_1,param_2,param_3);
  }
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    return *piVar2;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte do_link(char *param_1,int param_2,char *param_3,long param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  size_t sVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *__new;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  undefined8 uVar10;
  int iVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  char *__ptr_02;
  char *__ptr_03;
  long in_FS_OFFSET;
  bool bVar15;
  stat local_168;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar11 = (logical ^ 1) << 8;
  if (param_5 < 0) {
    param_5 = atomic_link();
  }
  pcVar6 = param_1;
  if (param_5 == 0) {
    if (dest_set == 0) {
      __ptr_03 = (char *)0x0;
      __new = (char *)0x0;
      goto LAB_0010019c;
    }
    if (symbolic_link == 0) {
      iVar11 = fstatat(-100,param_1,&local_168,iVar11);
      if (iVar11 != 0) goto LAB_0010078f;
      __ptr_03 = (char *)0x0;
      __new = (char *)0x0;
      goto LAB_00100345;
    }
    if (verbose == '\0') {
      __ptr_03 = (char *)0x0;
      __new = (char *)0x0;
      bVar2 = symbolic_link;
      goto LAB_001002aa;
    }
    puVar12 = &_LC0;
    __new = (char *)0x0;
    __ptr_03 = (char *)0x0;
    puVar7 = &_LC0;
LAB_00100246:
    uVar8 = quotearg_n_style(1,4,param_1);
    bVar15 = symbolic_link == 0;
    uVar9 = quotearg_n_style(0,4,param_4);
    __printf_chk(2,"%s%s%s %c> %s\n",puVar7,puVar12,uVar9,(-bVar15 & 0x10U) + 0x2d,uVar8);
    bVar2 = 1;
  }
  else {
    bVar15 = true;
    if (symbolic_link == 0) {
      iVar11 = fstatat(-100,param_1,&local_168,iVar11);
      if (iVar11 != 0) {
LAB_0010078f:
        uVar8 = quotearg_style(4,param_1);
        uVar9 = dcgettext(0,"failed to access %s",5);
        piVar4 = __errno_location();
        error(0,*piVar4,uVar9,uVar8);
        bVar2 = 0;
        goto LAB_001002c1;
      }
      bVar15 = false;
      if ((hard_dir_link == '\0') && ((local_168.st_mode & 0xf000) == 0x4000)) {
        uVar8 = quotearg_n_style_colon(0,3,param_1);
        uVar9 = dcgettext(0,"%s: hard link not allowed for directory",5);
        error(0,0,uVar9,uVar8);
        bVar2 = 0;
        goto LAB_001002c1;
      }
    }
    __ptr_03 = (char *)0x0;
    if (relative != '\0') {
      __ptr = (void *)dir_name(param_4);
      __ptr_00 = (void *)canonicalize_filename_mode(__ptr,2);
      __ptr_01 = (void *)canonicalize_filename_mode(param_1,2);
      if ((__ptr_00 != (void *)0x0) && (__ptr_01 != (void *)0x0)) {
        pcVar6 = (char *)xmalloc(0x1000);
        cVar1 = relpath(__ptr_01,__ptr_00,pcVar6,0x1000);
        if (cVar1 != '\0') {
          free(__ptr);
          free(__ptr_00);
          free(__ptr_01);
          __ptr_03 = pcVar6;
          goto LAB_001000fd;
        }
        free(pcVar6);
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      pcVar6 = (char *)xstrdup(param_1);
      __ptr_03 = pcVar6;
    }
LAB_001000fd:
    if (((remove_existing_files == 0) && (interactive == '\0')) && (backup_type == 0)) {
LAB_0010014e:
      uVar8 = 0;
      __new = (char *)0x0;
LAB_00100154:
      if (symbolic_link != 0) goto LAB_001004a9;
LAB_00100161:
      uVar3 = force_linkat(0xffffff9c,pcVar6,param_2,param_3,(ulong)logical << 10,uVar8,param_5);
    }
    else {
      iVar11 = fstatat(param_2,param_3,&local_d8,0x100);
      if (iVar11 != 0) {
        piVar4 = __errno_location();
        if (*piVar4 != 2) {
          uVar8 = quotearg_style(4,param_4);
          uVar9 = dcgettext(0,"failed to access %s",5);
          error(0,*piVar4,uVar9,uVar8);
          goto LAB_0010044e;
        }
        goto LAB_0010014e;
      }
      if ((local_d8.st_mode & 0xf000) == 0x4000) {
        uVar8 = quotearg_n_style_colon(0,3,param_4);
        uVar9 = dcgettext(0,"%s: cannot overwrite directory",5);
        error(0,0,uVar9,uVar8);
LAB_0010044e:
        free(__ptr_03);
        bVar2 = 0;
        goto LAB_001002c1;
      }
      cVar1 = seen_file(dest_set,param_4,&local_d8);
      if (cVar1 != '\0') {
        uVar8 = quotearg_n_style(1,4,pcVar6);
        uVar9 = quotearg_n_style(0,4,param_4);
        uVar10 = dcgettext(0,"will not overwrite just-created %s with %s",5);
LAB_00100440:
        error(0,0,uVar10,uVar9,uVar8);
        goto LAB_0010044e;
      }
      bVar2 = remove_existing_files;
      if (backup_type != 0) {
        bVar2 = symbolic_link ^ 1;
      }
      if ((((bVar2 != 0) && ((!bVar15 || (iVar11 = stat(pcVar6,&local_168), iVar11 == 0)))) &&
          (local_168.st_dev == local_d8.st_dev && local_168.st_ino == local_d8.st_ino)) &&
         ((local_168.st_nlink == 1 ||
          (cVar1 = same_nameat(0xffffff9c,pcVar6,param_2,param_3), cVar1 != '\0')))) {
        uVar8 = quotearg_n_style(1,4,param_4);
        uVar9 = quotearg_n_style(0,4,pcVar6);
        uVar10 = dcgettext(0,"%s and %s are the same file",5);
        goto LAB_00100440;
      }
      if ((param_5 < 0) || (param_5 == 0x11)) {
        if (interactive != '\0') {
          uVar9 = quotearg_style(4,param_4);
          uVar8 = _program_name;
          uVar10 = dcgettext(0,"%s: replace %s? ",5);
          __fprintf_chk(_stderr,2,uVar10,uVar8,uVar9);
          cVar1 = yesno();
          if (cVar1 == '\0') goto LAB_0010044e;
        }
        if (backup_type == 0) goto LAB_00100493;
        __new = (char *)find_backup_file_name(param_2,param_3);
        iVar11 = renameat(param_2,param_3,param_2,__new);
        uVar8 = 1;
        if (iVar11 != 0) {
          piVar4 = __errno_location();
          iVar11 = *piVar4;
          free(__new);
          if (iVar11 == 2) goto LAB_0010014e;
          uVar8 = quotearg_style(4,param_4);
          uVar9 = dcgettext(0,"cannot backup %s",5);
          error(0,iVar11,uVar9,uVar8);
          goto LAB_0010044e;
        }
        goto LAB_00100154;
      }
LAB_00100493:
      __new = (char *)0x0;
      uVar8 = 1;
      if (symbolic_link == 0) goto LAB_00100161;
LAB_001004a9:
      uVar3 = force_symlinkat(pcVar6,param_2,param_3,uVar8,param_5);
    }
    if ((int)uVar3 < 1) {
LAB_0010019c:
      if (symbolic_link == 0) {
LAB_00100345:
        record_file(dest_set,param_4,&local_168);
      }
      bVar2 = 1;
      if (verbose != '\0') {
        param_1 = pcVar6;
        if (__new == (char *)0x0) {
          puVar12 = &_LC0;
          puVar7 = &_LC0;
        }
        else {
          uVar14 = (long)param_3 - param_4;
          pcVar6 = __new;
          __ptr_02 = (char *)0x0;
          if (0 < (long)uVar14) {
            sVar5 = strlen(__new);
            uVar13 = uVar14 + 1 + sVar5;
            pcVar6 = (char *)xmalloc(uVar13);
            __memcpy_chk(pcVar6,param_4,uVar14,uVar13);
            if (uVar13 <= uVar14) {
              uVar13 = uVar14;
            }
            __strcpy_chk(pcVar6 + uVar14,__new,uVar13 - uVar14);
            __ptr_02 = pcVar6;
          }
          puVar7 = (undefined *)quotearg_n_style(2,4,pcVar6);
          free(__ptr_02);
          puVar12 = &_LC1;
        }
        goto LAB_00100246;
      }
    }
    else {
      uVar8 = quotearg_n_style(1,4,pcVar6);
      uVar9 = quotearg_n_style(0,4,param_4);
      if (symbolic_link == 0) {
        if (uVar3 == 0x1f) {
          uVar10 = dcgettext(0,"failed to create hard link to %.0s%s",5);
        }
        else if (((uVar3 == 0x7a) || (uVar3 == 0x11)) || ((uVar3 & 0xfffffffd) == 0x1c)) {
          uVar10 = dcgettext(0,"failed to create hard link %s",5);
        }
        else {
          uVar10 = dcgettext(0,"failed to create hard link %s => %s",5);
        }
      }
      else if ((uVar3 == 0x24) || (*pcVar6 == '\0')) {
        uVar10 = dcgettext(0,"failed to create symbolic link %s -> %s",5);
      }
      else {
        uVar10 = dcgettext(0,"failed to create symbolic link %s",5);
      }
      error(0,uVar3,uVar10,uVar9,uVar8);
      bVar2 = 0;
      if (__new != (char *)0x0) {
        iVar11 = renameat(param_2,__new,param_2,param_3);
        if (iVar11 == 0) {
          bVar2 = 0;
        }
        else {
          uVar8 = quotearg_style(4,param_4);
          uVar9 = dcgettext(0,"cannot un-backup %s",5);
          piVar4 = __errno_location();
          error(0,*piVar4,uVar9,uVar8);
          bVar2 = 0;
        }
      }
    }
  }
LAB_001002aa:
  free(__new);
  free(__ptr_03);
LAB_001002c1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_a8;
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
  local_a8 = &_LC16;
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
    if (((*pcVar4 == 'l') && (pcVar4[1] == 'n')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(ulong param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *__ptr;
  int *piVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  uint local_104;
  char *local_f8;
  int local_f0;
  undefined8 local_e0;
  stat local_d8;
  long local_40;
  
  bVar18 = false;
  uVar12 = param_1 & 0xffffffff;
  uVar11 = (uint)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar14 = &switchD_00101f91::switchdataD_001025e0;
  textdomain("coreutils");
  atexit((__func *)&close_stdin);
  hard_dir_link = '\0';
  verbose = 0;
  interactive = 0;
  remove_existing_files = '\0';
  symbolic_link = '\0';
  bVar1 = false;
  local_f8 = (char *)0x0;
  local_104 = 0;
  pcVar17 = (char *)0x0;
LAB_00101f50:
  puVar13 = (undefined *)0x0;
  uVar6 = getopt_long(param_1 & 0xffffffff,param_2,"bdfinrst:vFLPS:T",long_options);
  iVar5 = (int)uVar6;
  if (iVar5 != -1) {
    if (0x76 < iVar5) goto switchD_00101f91_caseD_47;
    if (iVar5 < 0x46) {
      if (iVar5 != -0x83) goto LAB_001024eb;
      uVar7 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar9 = proper_name_lite("Mike Parker","Mike Parker");
      version_etc(_stdout,&_LC17,"GNU coreutils",_Version,uVar9,uVar7,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    switch(iVar5) {
    case 0x46:
    case 100:
      hard_dir_link = '\x01';
      goto LAB_00101f50;
    default:
      goto switchD_00101f91_caseD_47;
    case 0x4c:
      logical = 1;
      goto LAB_00101f50;
    case 0x50:
      logical = 0;
      goto LAB_00101f50;
    case 0x53:
      local_f8 = _optarg;
      local_104 = 1;
      goto LAB_00101f50;
    case 0x54:
      bVar1 = true;
      goto LAB_00101f50;
    case 0x62:
      local_104 = 1;
      goto LAB_00101f50;
    case 0x66:
      remove_existing_files = '\x01';
      interactive = 0;
      goto LAB_00101f50;
    case 0x69:
      remove_existing_files = '\0';
      interactive = 1;
      goto LAB_00101f50;
    case 0x6e:
      dereference_dest_dir_symlinks = '\0';
      goto LAB_00101f50;
    case 0x72:
      relative = '\x01';
      goto LAB_00101f50;
    case 0x73:
      goto switchD_00101f91_caseD_73;
    case 0x74:
      if (pcVar17 != (char *)0x0) {
        pcVar10 = "multiple target directories specified";
        goto LAB_0010250e;
      }
      iVar5 = stat(_optarg,&local_d8);
      pcVar10 = _optarg;
      if (iVar5 != 0) {
        uVar12 = quotearg_style(4,_optarg);
        uVar7 = dcgettext(0,"failed to access %s",5);
        piVar8 = __errno_location();
        error(1,*piVar8,uVar7,uVar12);
        goto LAB_001025bb;
      }
      pcVar17 = _optarg;
      if ((local_d8.st_mode & 0xf000) == 0x4000) goto LAB_00101f50;
      param_2 = (undefined8 *)quotearg_style(4,_optarg);
      uVar7 = dcgettext(0,"target %s is not a directory",5);
      error(1,0,uVar7,param_2);
      pcVar17 = pcVar10;
switchD_00101f91_caseD_73:
      symbolic_link = '\x01';
      goto LAB_00101f50;
    case 0x76:
      goto switchD_00101f91_caseD_76;
    }
  }
  puVar13 = (undefined *)(uVar6 & 0xffffffff);
  uVar11 = uVar11 - _optind;
  uVar12 = (ulong)uVar11;
  puVar14 = (uint *)(param_2 + _optind);
  if ((int)uVar11 < 1) {
    uVar7 = dcgettext(0,"missing file operand",5);
    error(0,0,uVar7);
    goto switchD_00101f91_caseD_47;
  }
  if ((relative == '\0') || (symbolic_link != '\0')) {
    if (hard_dir_link == '\0') {
      beware_hard_dir_link = 0;
    }
    if (!bVar1) goto LAB_00102280;
    pcVar10 = "cannot combine --target-directory and --no-target-directory";
    if (pcVar17 != (char *)0x0) goto LAB_0010250e;
    uVar4 = 0xffffffff;
    if (uVar11 == 2) goto LAB_001021c3;
  }
  else {
    pcVar10 = "cannot do --relative without --symbolic";
LAB_0010250e:
    uVar7 = dcgettext(0,pcVar10,5);
    error(1,0,uVar7);
  }
  uVar12 = (ulong)(uVar11 - 1);
  if (uVar11 - 1 == 0) {
LAB_001025bb:
    uVar7 = quotearg_style(4,*(undefined8 *)puVar14);
    pcVar10 = "missing destination file operand after %s";
  }
  else {
    uVar7 = quotearg_style(4,*(undefined8 *)(puVar14 + 4));
    pcVar10 = "extra operand %s";
  }
  uVar9 = dcgettext(0,pcVar10,5);
  error(0,0,uVar9,uVar7);
switchD_00101f91_caseD_47:
  do {
    usage(1);
LAB_00102441:
    uVar4 = (uint)puVar13;
    pcVar10 = pcVar17;
    if (pcVar17 != (char *)0x0) goto LAB_001023b8;
LAB_001023b0:
    uVar4 = (uint)puVar13;
    pcVar10 = *(char **)(puVar14 + ((long)(int)uVar12 + -1) * 2);
LAB_001023b8:
    local_f0 = openat_safer(0xffffff9c,pcVar10,
                            (-(uint)(dereference_dest_dir_symlinks == '\0') & 0x20000) + 0x210000);
    piVar8 = __errno_location();
    puVar13 = (undefined *)(ulong)uVar4;
    iVar5 = *piVar8;
    if (-1 < local_f0) {
      uVar12 = (ulong)((int)uVar12 - (uint)bVar18);
      if ((char)local_104 != '\0') goto LAB_001021d5;
      backup_type = 0;
      goto LAB_001021ff;
    }
    if (((int)uVar12 == 2) && (pcVar17 == (char *)0x0)) {
LAB_001021c3:
      if ((char)local_104 != '\0') {
        uVar12 = 2;
        pcVar10 = (char *)0x0;
LAB_001021d5:
        do {
          uVar7 = dcgettext(0,"backup type",5);
          backup_type = xget_version(uVar7);
LAB_001021ff:
          iVar5 = (int)uVar12;
          set_simple_backup_suffix(local_f8);
          if (pcVar10 == (char *)0x0) goto LAB_00102487;
          if (iVar5 < 2) {
            bVar3 = 1;
            if (iVar5 == 1) {
LAB_001022ca:
              bVar3 = 1;
              puVar15 = puVar14;
              do {
                puVar16 = puVar15 + 2;
                uVar7 = last_component(*(undefined8 *)puVar15);
                __ptr = (void *)file_name_concat(pcVar10,uVar7,&local_e0);
                strip_trailing_slashes(local_e0);
                bVar2 = do_link(*(undefined8 *)puVar15,local_f0,local_e0,__ptr,0xffffffff);
                bVar3 = bVar3 & bVar2;
                free(__ptr);
                puVar15 = puVar16;
              } while (puVar14 + (long)iVar5 * 2 != puVar16);
            }
            goto LAB_00102334;
          }
          if (((remove_existing_files == '\0') || (symbolic_link != '\0')) || (backup_type == 3))
          goto LAB_001022ca;
          puVar13 = &triple_free;
          dest_set = hash_initialize(0x3d,0,&triple_hash,&triple_compare);
          if (dest_set != 0) goto LAB_001022ca;
          xalloc_die();
          local_104 = uVar4;
LAB_00102280:
          uVar4 = (uint)puVar13;
          bVar18 = pcVar17 == (char *)0x0;
          if ((1 < (int)uVar12) || (!bVar18)) goto LAB_00102373;
          if ((char)local_104 == '\0') {
            iVar5 = 1;
            pcVar10 = ".";
            backup_type = 0;
            set_simple_backup_suffix(local_f8);
            local_f0 = -100;
            goto LAB_001022ca;
          }
          local_f0 = -100;
          uVar12 = 1;
          pcVar10 = ".";
        } while( true );
      }
      backup_type = 0;
      set_simple_backup_suffix(local_f8);
LAB_00102487:
      bVar3 = do_link(*(undefined8 *)puVar14,0xffffff9c,*(undefined8 *)(puVar14 + 2),
                      *(undefined8 *)(puVar14 + 2),uVar4);
LAB_00102334:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar3 ^ 1;
      }
      goto LAB_001024fd;
    }
    uVar7 = quotearg_style(4,pcVar10);
    uVar9 = dcgettext(0,"target %s",5);
    iVar5 = error(1,iVar5,uVar9,uVar7);
LAB_001024eb:
    if (iVar5 == -0x82) {
      usage(0);
LAB_001024fd:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
switchD_00101f91_caseD_76:
  verbose = 1;
  goto LAB_00101f50;
LAB_00102373:
  if (((int)uVar12 != 2) || (!bVar18)) goto LAB_00102441;
  uVar4 = atomic_link(*(undefined8 *)puVar14,0xffffff9c,*(undefined8 *)(puVar14 + 2));
  puVar13 = (undefined *)(ulong)uVar4;
  if ((((int)uVar4 < 0) || (uVar4 == 0x11)) || ((uVar4 & 0xfffffffd) == 0x14)) goto LAB_001023b0;
  goto LAB_001021c3;
}


