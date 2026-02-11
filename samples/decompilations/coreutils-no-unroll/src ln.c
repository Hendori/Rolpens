
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 do_link(char *param_1,int param_2,char *param_3,long param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  char *__ptr_02;
  undefined8 uVar16;
  char *__ptr_03;
  long in_FS_OFFSET;
  bool bVar17;
  stat local_168;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = (logical ^ 1) << 8;
  pcVar8 = param_1;
  if (param_5 < 0) {
    if (symbolic_link == 0) {
      if (beware_hard_dir_link != '\0') {
        param_5 = -1;
LAB_001006b8:
        iVar3 = fstatat(-100,param_1,&local_168,iVar3);
        if (iVar3 == 0) {
          if ((hard_dir_link != '\0') || ((local_168.st_mode & 0xf000) != 0x4000)) {
            bVar17 = false;
            goto LAB_00100075;
          }
          uVar16 = quotearg_n_style_colon(0,3,param_1);
          uVar10 = dcgettext(0,"%s: hard link not allowed for directory",5);
          error(0,0,uVar10,uVar16);
        }
        else {
LAB_0010033b:
          uVar16 = quotearg_style(4,param_1);
          uVar10 = dcgettext(0,"failed to access %s",5);
          piVar6 = __errno_location();
          error(0,*piVar6,uVar10,uVar16);
        }
LAB_00100377:
        uVar16 = 0;
        goto LAB_0010023f;
      }
      iVar5 = linkat(-100,param_1,param_2,param_3,(uint)logical << 10);
      if (iVar5 < 0) {
        piVar6 = __errno_location();
        param_5 = *piVar6;
        if (param_5 != 0) goto LAB_001006b8;
      }
      if (dest_set != 0) goto LAB_00100316;
LAB_001007e0:
      __ptr_03 = (char *)0x0;
      __new = (char *)0x0;
LAB_001002b5:
      record_file(dest_set,param_4,&local_168);
    }
    else {
      if (relative != '\0') {
        bVar17 = true;
        param_5 = -1;
        goto LAB_00100600;
      }
      iVar3 = symlinkat(param_1,param_2,param_3);
      if (iVar3 < 0) {
        piVar6 = __errno_location();
        param_5 = *piVar6;
        if (param_5 != 0) goto LAB_00100068;
      }
      __ptr_03 = (char *)0x0;
      if (dest_set != 0) goto LAB_00100288;
      __new = (char *)0x0;
    }
LAB_00100127:
    uVar16 = 1;
    if (verbose != '\0') {
      if (__new == (char *)0x0) {
        puVar13 = &_LC0;
        puVar9 = &_LC0;
      }
      else {
        uVar15 = (long)param_3 - param_4;
        pcVar8 = __new;
        __ptr_02 = (char *)0x0;
        if (0 < (long)uVar15) {
          sVar7 = strlen(__new);
          uVar14 = uVar15 + 1 + sVar7;
          pcVar8 = (char *)xmalloc(uVar14);
          __memcpy_chk(pcVar8,param_4,uVar15,uVar14);
          if (uVar14 <= uVar15) {
            uVar14 = uVar15;
          }
          __strcpy_chk(pcVar8 + uVar15,__new,uVar14 - uVar15);
          __ptr_02 = pcVar8;
        }
        puVar9 = (undefined *)quotearg_n_style(2,4,pcVar8);
        free(__ptr_02);
        puVar13 = &_LC1;
      }
LAB_001001ca:
      uVar10 = quotearg_n_style(1,4,param_1);
      bVar17 = symbolic_link == 0;
      uVar11 = quotearg_n_style(0,4,param_4);
      uVar16 = 1;
      __printf_chk(2,"%s%s%s %c> %s\n",puVar9,puVar13,uVar11,(-bVar17 & 0x10U) + 0x2d,uVar10);
    }
  }
  else {
    if (param_5 == 0) {
      if (dest_set == 0) {
        __ptr_03 = (char *)0x0;
        __new = (char *)0x0;
        goto LAB_0010011f;
      }
      if (symbolic_link == 0) {
LAB_00100316:
        iVar3 = fstatat(-100,param_1,&local_168,iVar3);
        if (iVar3 != 0) goto LAB_0010033b;
        goto LAB_001007e0;
      }
LAB_00100288:
      if (verbose == '\0') {
        uVar16 = 1;
        __ptr_03 = (char *)0x0;
        __new = (char *)0x0;
        goto LAB_0010022f;
      }
      puVar13 = &_LC0;
      __ptr_03 = (char *)0x0;
      __new = (char *)0x0;
      puVar9 = &_LC0;
      goto LAB_001001ca;
    }
    if (symbolic_link == 0) goto LAB_001006b8;
LAB_00100068:
    bVar17 = true;
LAB_00100075:
    __ptr_03 = (char *)0x0;
    if (relative != '\0') {
LAB_00100600:
      __ptr = (void *)dir_name(param_4);
      __ptr_00 = (void *)canonicalize_filename_mode(__ptr,2);
      __ptr_01 = (void *)canonicalize_filename_mode(param_1,2);
      if ((__ptr_00 != (void *)0x0) && (__ptr_01 != (void *)0x0)) {
        pcVar8 = (char *)xmalloc(0x1000);
        cVar1 = relpath(__ptr_01,__ptr_00,pcVar8,0x1000);
        if (cVar1 != '\0') {
          free(__ptr);
          free(__ptr_00);
          free(__ptr_01);
          __ptr_03 = pcVar8;
          goto LAB_00100080;
        }
        free(pcVar8);
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      pcVar8 = (char *)xstrdup(param_1);
      __ptr_03 = pcVar8;
    }
LAB_00100080:
    if (((remove_existing_files == 0) && (interactive == '\0')) && (backup_type == 0)) {
LAB_001000d1:
      uVar16 = 0;
      __new = (char *)0x0;
LAB_001000d7:
      if (symbolic_link != 0) goto LAB_001004c9;
LAB_001000e4:
      uVar4 = force_linkat(0xffffff9c,pcVar8,param_2,param_3,(ulong)logical << 10,uVar16,param_5);
    }
    else {
      iVar3 = fstatat(param_2,param_3,&local_d8,0x100);
      if (iVar3 != 0) {
        piVar6 = __errno_location();
        if (*piVar6 != 2) {
          uVar16 = quotearg_style(4,param_4);
          uVar10 = dcgettext(0,"failed to access %s",5);
          error(0,*piVar6,uVar10,uVar16);
          goto LAB_0010046e;
        }
        goto LAB_001000d1;
      }
      if ((local_d8.st_mode & 0xf000) == 0x4000) {
        uVar16 = quotearg_n_style_colon(0,3,param_4);
        uVar10 = dcgettext(0,"%s: cannot overwrite directory",5);
        error(0,0,uVar10,uVar16);
LAB_0010046e:
        free(__ptr_03);
        goto LAB_00100377;
      }
      cVar1 = seen_file(dest_set,param_4,&local_d8);
      if (cVar1 != '\0') {
        uVar16 = quotearg_n_style(1,4,pcVar8);
        uVar10 = quotearg_n_style(0,4,param_4);
        uVar11 = dcgettext(0,"will not overwrite just-created %s with %s",5);
LAB_00100460:
        error(0,0,uVar11,uVar10,uVar16);
        goto LAB_0010046e;
      }
      bVar2 = remove_existing_files;
      if (backup_type != 0) {
        bVar2 = symbolic_link ^ 1;
      }
      if ((((bVar2 != 0) && ((!bVar17 || (iVar3 = stat(pcVar8,&local_168), iVar3 == 0)))) &&
          (local_168.st_dev == local_d8.st_dev && local_168.st_ino == local_d8.st_ino)) &&
         ((local_168.st_nlink == 1 ||
          (cVar1 = same_nameat(0xffffff9c,pcVar8,param_2,param_3), cVar1 != '\0')))) {
        uVar16 = quotearg_n_style(1,4,param_4);
        uVar10 = quotearg_n_style(0,4,pcVar8);
        uVar11 = dcgettext(0,"%s and %s are the same file",5);
        goto LAB_00100460;
      }
      if ((param_5 < 0) || (param_5 == 0x11)) {
        if (interactive != '\0') {
          uVar10 = quotearg_style(4,param_4);
          uVar16 = _program_name;
          uVar11 = dcgettext(0,"%s: replace %s? ",5);
          __fprintf_chk(_stderr,2,uVar11,uVar16,uVar10);
          cVar1 = yesno();
          if (cVar1 == '\0') goto LAB_0010046e;
        }
        if (backup_type == 0) goto LAB_001004b3;
        __new = (char *)find_backup_file_name(param_2,param_3);
        iVar3 = renameat(param_2,param_3,param_2,__new);
        uVar16 = 1;
        if (iVar3 != 0) {
          piVar6 = __errno_location();
          iVar3 = *piVar6;
          free(__new);
          if (iVar3 == 2) goto LAB_001000d1;
          uVar16 = quotearg_style(4,param_4);
          uVar10 = dcgettext(0,"cannot backup %s",5);
          error(0,iVar3,uVar10,uVar16);
          goto LAB_0010046e;
        }
        goto LAB_001000d7;
      }
LAB_001004b3:
      __new = (char *)0x0;
      uVar16 = 1;
      if (symbolic_link == 0) goto LAB_001000e4;
LAB_001004c9:
      uVar4 = force_symlinkat(pcVar8,param_2,param_3,uVar16,param_5);
    }
    if ((int)uVar4 < 1) {
LAB_0010011f:
      param_1 = pcVar8;
      if (symbolic_link == 0) goto LAB_001002b5;
      goto LAB_00100127;
    }
    uVar10 = quotearg_n_style(1,4,pcVar8);
    uVar11 = quotearg_n_style(0,4,param_4);
    if (symbolic_link == 0) {
      if (uVar4 == 0x1f) {
        uVar12 = dcgettext(0,"failed to create hard link to %.0s%s",5);
      }
      else if (((uVar4 == 0x7a) || (uVar4 == 0x11)) || ((uVar4 & 0xfffffffd) == 0x1c)) {
        uVar12 = dcgettext(0,"failed to create hard link %s",5);
      }
      else {
        uVar12 = dcgettext(0,"failed to create hard link %s => %s",5);
      }
    }
    else if ((uVar4 == 0x24) || (*pcVar8 == '\0')) {
      uVar12 = dcgettext(0,"failed to create symbolic link %s -> %s",5);
    }
    else {
      uVar12 = dcgettext(0,"failed to create symbolic link %s",5);
    }
    uVar16 = 0;
    error(0,uVar4,uVar12,uVar11,uVar10);
    if (__new != (char *)0x0) {
      iVar3 = renameat(param_2,__new,param_2,param_3);
      if (iVar3 != 0) {
        uVar16 = quotearg_style(4,param_4);
        uVar10 = dcgettext(0,"cannot un-backup %s",5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar10,uVar16);
      }
      uVar16 = 0;
    }
  }
LAB_0010022f:
  free(__new);
  free(__ptr_03);
LAB_0010023f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
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
    goto LAB_00100aa9;
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
    if (pcVar4 != (char *)0x0) goto LAB_00100d8c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC17);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100d8c:
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
LAB_00100aa9:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(ulong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__ptr;
  int *piVar8;
  uint *puVar9;
  char *extraout_RDX;
  uint uVar10;
  char *pcVar11;
  char *__from;
  uint uVar12;
  undefined *puVar13;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  bool bVar17;
  uint local_104;
  char *local_f8;
  int local_f0;
  undefined8 local_e0;
  stat local_d8;
  long local_40;
  
  bVar17 = false;
  param_1 = param_1 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar14 = &switchD_00101ff1::switchdataD_00102694;
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
  pcVar16 = (char *)0x0;
LAB_00101fb0:
  puVar13 = (undefined *)0x0;
  iVar5 = getopt_long(param_1 & 0xffffffff,param_2,"bdfinrst:vFLPS:T",long_options);
  if (iVar5 == -1) {
    puVar13 = (undefined *)0xffffffff;
    uVar12 = 0xffffffff;
    uVar10 = (int)param_1 - _optind;
    param_1 = (ulong)uVar10;
    puVar14 = (uint *)(param_2 + _optind);
    if ((int)uVar10 < 1) {
      uVar7 = dcgettext(0,"missing file operand",5);
      error(0,0,uVar7);
    }
    else {
      if ((relative != '\0') && (symbolic_link == '\0')) goto LAB_001025bd;
      if (hard_dir_link == '\0') {
        beware_hard_dir_link = '\0';
      }
      cVar2 = relative;
      if (!bVar1) goto LAB_001022e3;
      pcVar11 = "cannot combine --target-directory and --no-target-directory";
      if (pcVar16 != (char *)0x0) {
LAB_001025a5:
        do {
          uVar7 = dcgettext(0,pcVar11,5);
          error(1,0,uVar7);
LAB_001025bd:
          pcVar11 = "cannot do --relative without --symbolic";
        } while( true );
      }
      if (uVar10 == 2) goto LAB_00102226;
      if (uVar10 == 1) {
LAB_00102670:
        param_1 = quotearg_style(4,*(undefined8 *)puVar14);
        pcVar11 = "missing destination file operand after %s";
      }
      else {
        param_1 = quotearg_style(4,*(undefined8 *)(puVar14 + 4),5);
        pcVar11 = "extra operand %s";
      }
      uVar7 = dcgettext(0,pcVar11,5);
      error(0,0,uVar7,param_1);
    }
switchD_00101ff1_caseD_47:
    usage(1);
LAB_00102440:
    pcVar11 = pcVar16;
    if (pcVar16 == (char *)0x0) goto LAB_0010257a;
LAB_0010244c:
    uVar12 = (uint)puVar13;
    local_f0 = openat_safer(0xffffff9c,pcVar11,
                            (-(uint)(dereference_dest_dir_symlinks == '\0') & 0x20000) + 0x210000);
    piVar8 = __errno_location();
    puVar13 = (undefined *)((ulong)puVar13 & 0xffffffff);
    iVar5 = *piVar8;
    if (local_f0 < 0) {
      if (((int)param_1 == 2) && (pcVar16 == (char *)0x0)) goto LAB_00102226;
      param_1 = quotearg_style(4,pcVar11);
      uVar7 = dcgettext(0,"target %s",5);
      __from = (char *)0x1;
      error(1,iVar5,uVar7,param_1);
      pcVar11 = extraout_RDX;
      goto LAB_00102526;
    }
    param_1 = (ulong)((int)param_1 - (uint)bVar17);
    if ((char)local_104 != '\0') goto LAB_00102238;
    backup_type = 0;
    do {
      iVar5 = (int)param_1;
      uVar12 = (uint)puVar13;
      set_simple_backup_suffix(local_f8);
      if (pcVar11 == (char *)0x0) {
LAB_001024c2:
        bVar4 = do_link(*(undefined8 *)puVar14,0xffffff9c,*(undefined8 *)(puVar14 + 2),
                        *(undefined8 *)(puVar14 + 2),uVar12);
LAB_00102394:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return bVar4 ^ 1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (iVar5 < 2) {
        bVar4 = 1;
        if (iVar5 == 1) {
LAB_0010232d:
          bVar4 = 1;
          puVar9 = puVar14;
          do {
            puVar15 = puVar9 + 2;
            uVar7 = last_component(*(undefined8 *)puVar9);
            __ptr = (void *)file_name_concat(pcVar11,uVar7,&local_e0);
            strip_trailing_slashes(local_e0);
            bVar3 = do_link(*(undefined8 *)puVar9,local_f0,local_e0,__ptr,0xffffffff);
            bVar4 = bVar4 & bVar3;
            free(__ptr);
            puVar9 = puVar15;
          } while (puVar14 + (long)iVar5 * 2 != puVar15);
        }
        goto LAB_00102394;
      }
      if (((remove_existing_files == '\0') || (symbolic_link != '\0')) || (backup_type == 3))
      goto LAB_0010232d;
      puVar13 = &triple_free;
      dest_set = hash_initialize(0x3d,0,&triple_hash,&triple_compare);
      if (dest_set != 0) goto LAB_0010232d;
      cVar2 = xalloc_die();
      local_104 = uVar12;
LAB_001022e3:
      uVar12 = (uint)puVar13;
      bVar17 = pcVar16 == (char *)0x0;
      if (((int)param_1 < 2) && (bVar17)) {
        if ((char)local_104 == '\0') {
          iVar5 = 1;
          pcVar11 = ".";
          backup_type = 0;
          set_simple_backup_suffix(local_f8);
          local_f0 = -100;
          goto LAB_0010232d;
        }
        local_f0 = -100;
        param_1 = 1;
        pcVar11 = ".";
      }
      else {
        if (((int)param_1 != 2) || (!bVar17)) goto LAB_00102440;
        pcVar11 = *(char **)(puVar14 + 2);
        __from = *(char **)puVar14;
        if (symbolic_link == '\0') {
LAB_00102526:
          if (beware_hard_dir_link != '\0') goto LAB_0010257a;
          iVar5 = linkat(-100,__from,-100,pcVar11,(uint)logical << 10);
          if (iVar5 < 0) goto LAB_00102558;
LAB_0010240d:
          uVar12 = 0;
        }
        else {
          if (cVar2 != '\0') goto LAB_0010257a;
          iVar5 = symlinkat(__from,-100,pcVar11);
          if (-1 < iVar5) goto LAB_0010240d;
LAB_00102558:
          puVar9 = (uint *)__errno_location();
          uVar12 = *puVar9;
          puVar13 = (undefined *)(ulong)uVar12;
          if ((((int)uVar12 < 0) || (uVar12 == 0x11)) || ((uVar12 & 0xfffffffd) == 0x14))
          goto LAB_0010257a;
        }
LAB_00102226:
        if ((char)local_104 == '\0') {
          backup_type = 0;
          set_simple_backup_suffix(local_f8);
          goto LAB_001024c2;
        }
        param_1 = 2;
        pcVar11 = (char *)0x0;
      }
LAB_00102238:
      uVar7 = dcgettext(0,"backup type",5);
      backup_type = xget_version(uVar7);
      puVar13 = (undefined *)(ulong)uVar12;
    } while( true );
  }
  if (0x76 < iVar5) goto switchD_00101ff1_caseD_47;
  if (iVar5 < 0x46) {
    if (iVar5 == -0x83) {
      uVar7 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar6 = proper_name_lite("Mike Parker","Mike Parker");
      version_etc(_stdout,&_LC17,"GNU coreutils",_Version,uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar5 != -0x82) goto switchD_00101ff1_caseD_47;
    usage(0);
LAB_00102599:
    pcVar11 = "multiple target directories specified";
    goto LAB_001025a5;
  }
  switch(iVar5) {
  case 0x46:
  case 100:
    hard_dir_link = '\x01';
    goto LAB_00101fb0;
  default:
    goto switchD_00101ff1_caseD_47;
  case 0x4c:
    logical = 1;
    goto LAB_00101fb0;
  case 0x50:
    logical = 0;
    goto LAB_00101fb0;
  case 0x53:
    local_f8 = _optarg;
    local_104 = 1;
    goto LAB_00101fb0;
  case 0x54:
    bVar1 = true;
    goto LAB_00101fb0;
  case 0x62:
    local_104 = 1;
    goto LAB_00101fb0;
  case 0x66:
    remove_existing_files = '\x01';
    interactive = 0;
    goto LAB_00101fb0;
  case 0x69:
    remove_existing_files = '\0';
    interactive = 1;
    goto LAB_00101fb0;
  case 0x6e:
    dereference_dest_dir_symlinks = '\0';
    goto LAB_00101fb0;
  case 0x72:
    relative = '\x01';
    goto LAB_00101fb0;
  case 0x73:
    goto switchD_00101ff1_caseD_73;
  case 0x74:
    if (pcVar16 != (char *)0x0) goto LAB_00102599;
    iVar5 = stat(_optarg,&local_d8);
    pcVar11 = _optarg;
    if (iVar5 != 0) {
      uVar7 = quotearg_style(4,_optarg);
      uVar6 = dcgettext(0,"failed to access %s",5);
      piVar8 = __errno_location();
      error(1,*piVar8,uVar6,uVar7);
      goto LAB_00102670;
    }
    pcVar16 = _optarg;
    if ((local_d8.st_mode & 0xf000) == 0x4000) goto LAB_00101fb0;
    param_1 = quotearg_style(4,_optarg);
    uVar7 = dcgettext(0,"target %s is not a directory",5);
    error(1,0,uVar7,param_1);
    pcVar16 = pcVar11;
switchD_00101ff1_caseD_73:
    symbolic_link = '\x01';
    goto LAB_00101fb0;
  case 0x76:
    break;
  }
  verbose = 1;
  goto LAB_00101fb0;
LAB_0010257a:
  pcVar11 = *(char **)(puVar14 + ((long)(int)param_1 + -1) * 2);
  goto LAB_0010244c;
}


