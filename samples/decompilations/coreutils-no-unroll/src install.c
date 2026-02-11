
undefined8 mkancesdirs_safe_wd(char *param_1,char *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long in_FS_OFFSET;
  undefined4 local_38 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_4 == '\0') && (*param_1 == '/')) && (*param_2 == '/')) {
    local_38[0] = 0;
    savewd_finish(local_38);
    lVar3 = mkancesdirs(param_2,local_38,make_ancestor,param_3);
    if (lVar3 == -1) {
      uVar4 = quotearg_style(4,param_2);
      uVar5 = dcgettext(0,"cannot create directory %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar5,uVar4);
      uVar4 = 0;
      goto LAB_001000db;
    }
LAB_001000d6:
    uVar4 = 1;
  }
  else {
    local_38[0] = 0;
    lVar3 = mkancesdirs(param_2,local_38,make_ancestor,param_3);
    if (lVar3 == -1) {
      uVar4 = quotearg_style(4,param_2);
      uVar5 = dcgettext(0,"cannot create directory %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar5,uVar4);
      savewd_restore(local_38,1);
      savewd_finish(local_38);
    }
    else {
      iVar2 = savewd_restore(local_38,0);
      piVar6 = __errno_location();
      iVar1 = *piVar6;
      savewd_finish(local_38);
      if (iVar2 < 1) {
        if (iVar2 < 0) {
          uVar4 = quotearg_style(4,param_2);
          uVar5 = dcgettext(0,"cannot create directory %s",5);
          error(0,iVar1,uVar5,uVar4);
          uVar4 = 0;
          goto LAB_001000db;
        }
        goto LAB_001000d6;
      }
    }
    uVar4 = 0;
  }
LAB_001000db:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



byte process_dir(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = make_dir_parents(param_1,param_2,make_ancestor,param_3,dir_mode,announce_mkdir,
                           dir_mode_bits,owner_id,group_id,0);
  if ((bVar1 != 0) && (*(long *)(param_3 + 0x28) != 0)) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  return bVar1 ^ 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int make_ancestor(undefined8 param_1,char *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_3 + 0x28) != 0) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  iVar1 = mkdir(param_2,0x1ed);
  if ((iVar1 == 0) && (*(char *)(param_3 + 0x40) != '\0')) {
    uVar3 = quotearg_style(4,param_1);
    uVar4 = dcgettext(0,"creating directory %s",5);
    prog_fprintf(_stdout,uVar4,uVar3);
    return 0;
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void announce_mkdir(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x40) == '\0') {
    return;
  }
  uVar1 = quotearg_style(4,param_1);
  uVar2 = dcgettext(0,"creating directory %s",5);
  prog_fprintf(_stdout,uVar2,uVar1);
  return;
}



undefined8
install_file_in_file
          (EVP_PKEY_CTX *param_1,EVP_PKEY_CTX *param_2,uint param_3,char *param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  __pid_t _Var3;
  int __fd;
  int iVar4;
  uint uVar5;
  int *piVar6;
  size_t __n;
  size_t sVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  uint local_1fc;
  stat local_1f8;
  stat local_168;
  stat local_d8;
  long local_40;
  
  uVar9 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(char *)(param_5 + 0x21) != '\0') && (iVar2 = stat((char *)param_1,&local_1f8), iVar2 != 0))
  {
    uVar10 = quotearg_style(4,param_1);
    pcVar12 = "cannot stat %s";
LAB_001004c9:
    uVar11 = dcgettext(0,pcVar12,5);
    piVar6 = __errno_location();
    error(0,*piVar6,uVar11,uVar10);
LAB_001004f0:
    uVar11 = 0;
LAB_001004f2:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar11;
  }
  uVar5 = mode;
  if (((((copy_only_if_needed != '\0') && ((mode & 0xffff0e00) == 0)) &&
       (iVar2 = stat((char *)param_1,&local_168), iVar2 == 0)) &&
      (((iVar2 = fstatat(param_3,param_4,&local_d8,0x100), iVar2 == 0 &&
        ((local_168.st_mode & 0xf000) == 0x8000)) &&
       (((local_d8.st_mode & 0xf000) == 0x8000 &&
        ((((local_168.st_mode | local_d8.st_mode) & 0xffff0e00) == 0 &&
         (local_168.st_size == local_d8.st_size)))))))) && (uVar5 == (local_d8.st_mode & 0xfff))) {
    uVar5 = owner_id;
    if (owner_id == 0xffffffff) {
      piVar6 = __errno_location();
      *piVar6 = 0;
      uVar5 = getuid();
      if ((uVar5 == 0xffffffff) && (*piVar6 != 0)) goto LAB_00100390;
    }
    if (uVar5 == local_d8.st_uid) {
      uVar5 = group_id;
      if (group_id == 0xffffffff) {
        piVar6 = __errno_location();
        *piVar6 = 0;
        uVar5 = getgid();
        if ((uVar5 == 0xffffffff) && (*piVar6 != 0)) goto LAB_00100390;
      }
      if (uVar5 == local_d8.st_gid) {
        if ((selinux_enabled != 0) && (*(char *)(param_5 + 0x33) != '\0')) goto LAB_00100844;
        iVar2 = open((char *)param_1,0);
        if (-1 < iVar2) {
          __fd = openat(param_3,param_4,0);
          if (__fd < 0) {
            close(iVar2);
          }
          else {
            do {
              sVar7 = full_read(iVar2,a_buff_0,0x1000);
              if ((long)sVar7 < 1) {
                close(iVar2);
                close(__fd);
                if (sVar7 == 0) goto LAB_001003b8;
                goto LAB_00100390;
              }
              __n = full_read(__fd,b_buff_1,0x1000);
            } while ((__n == sVar7) && (iVar4 = memcmp(a_buff_0,b_buff_1,__n), iVar4 == 0));
            close(iVar2);
            close(__fd);
          }
        }
      }
    }
  }
LAB_00100390:
  do {
    param_3 = (uint)uVar9;
    iVar2 = copy(param_1,param_2);
    if ((char)iVar2 == '\0') goto LAB_001004f0;
LAB_001003b8:
    if (strip_files == '\0') {
      if (*(char *)(param_5 + 0x21) != '\0') {
LAB_001003cb:
        if ((local_1f8.st_mode & 0xf000) != 0x8000) {
LAB_001003db:
          local_d8.st_dev = local_1f8.st_atim.tv_sec;
          local_d8.st_ino = local_1f8.st_atim.tv_nsec;
          local_d8.st_nlink = local_1f8.st_mtim.tv_sec;
          local_d8.st_mode = (undefined4)local_1f8.st_mtim.tv_nsec;
          local_d8.st_uid = local_1f8.st_mtim.tv_nsec._4_4_;
          iVar2 = utimensat(param_3,param_4,(timespec *)&local_d8,0);
          if (iVar2 != 0) {
            uVar10 = quotearg_style(4,param_2);
            pcVar12 = "cannot set timestamps for %s";
            goto LAB_001004c9;
          }
        }
      }
LAB_00100413:
      if (((owner_id & group_id) == 0xffffffff) ||
         (iVar2 = fchownat(param_3,param_4,owner_id,group_id,0x100), iVar2 == 0)) {
        iVar2 = fchmodat(param_3,param_4,mode,0);
        if (iVar2 != 0) {
          uVar10 = quotearg_style(4,param_2);
          pcVar12 = "cannot change permissions of %s";
          goto LAB_0010077e;
        }
        uVar11 = 1;
      }
      else {
        uVar10 = quotearg_style(4,param_2);
        pcVar12 = "cannot change ownership of %s";
LAB_0010077e:
        uVar8 = dcgettext(0,pcVar12,5);
        piVar6 = __errno_location();
        uVar11 = 0;
        error(0,*piVar6,uVar8,uVar10);
      }
      if (((use_default_selinux_context != '\0') && (selinux_enabled == 1)) &&
         (iVar2 = lstat((char *)param_2,&local_d8), iVar2 == 0)) {
        if (initialized_3 == '\0') {
          initialized_3 = '\x01';
          piVar6 = __errno_location();
          *piVar6 = 0x5f;
          hnd_2 = 0;
          uVar10 = dcgettext(0,"warning: security labeling handle failed",5);
          error(0,*piVar6,uVar10);
        }
        if (hnd_2 != 0) {
          piVar6 = __errno_location();
          *piVar6 = 0x5f;
        }
      }
      goto LAB_001004f2;
    }
    _Var3 = fork();
    if (_Var3 == -1) {
      pcVar12 = "fork system call failed";
LAB_00100860:
      uVar10 = dcgettext(0,pcVar12,5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar10);
LAB_001007f1:
      iVar2 = unlinkat(param_3,param_4,0);
      if (iVar2 == 0) goto LAB_001004f0;
      uVar9 = quotearg_style(4,param_2);
      pcVar12 = "cannot unlink %s";
    }
    else {
      if (_Var3 != 0) {
        _Var3 = waitpid(_Var3,(int *)&local_1fc,0);
        if (_Var3 < 0) {
          pcVar12 = "waiting for strip";
          goto LAB_00100860;
        }
        if ((local_1fc & 0xff7f) == 0) {
          if (*(char *)(param_5 + 0x21) != '\0') {
            if (strip_files == '\0') goto LAB_001003cb;
            goto LAB_001003db;
          }
          goto LAB_00100413;
        }
        uVar10 = dcgettext(0,"strip process terminated abnormally",5);
        error(0,0,uVar10);
        goto LAB_001007f1;
      }
      if ((param_2 != (EVP_PKEY_CTX *)0x0) && (*param_2 == (EVP_PKEY_CTX)0x2d)) {
        param_2 = (EVP_PKEY_CTX *)file_name_concat(&_LC4,param_2,0);
      }
      puVar1 = strip_program;
      execlp(strip_program,strip_program,param_2,0);
      uVar9 = quotearg_style(4,puVar1);
      pcVar12 = "cannot run %s";
    }
    param_5 = dcgettext(0,pcVar12,5);
    piVar6 = __errno_location();
    error(1,*piVar6,param_5,uVar9);
LAB_00100844:
    piVar6 = __errno_location();
    *piVar6 = 0x5f;
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
    goto LAB_001009ca;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n  or:  %s [OPTION]... -d DIRECTORY...\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThis install program copies files (often just compiled) into destination\nlocations you choose.  If you want to download and install a ready-to-use\npackage on a GNU/Linux system, you should instead be using a package manager\nlike yum(1) or apt-get(1).\n\nIn the first three forms, copy SOURCE to DEST or multiple SOURCE(s) to\nthe existing DIRECTORY, while setting permission modes and owner/group.\nIn the 4th form, create all components of the given DIRECTORY(ies).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --backup[=CONTROL]  make a backup of each existing destination file\n  -b                  like --backup but does not accept an argument\n  -c                  (ignored)\n  -C, --compare       compare content of source and destination files, and\n                        if no change to content, ownership, and permissions,\n                        do not modify the destination at all\n  -d, --directory     treat all arguments as directory names; create all\n                        components of the specified directories\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -D                  create all leading components of DEST except the last,\n                        or all components of --target-directory,\n                        then copy SOURCE to DEST\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --debug         explain how a file is copied.  Implies -v\n",5
                            );
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -g, --group=GROUP   set group ownership, instead of process\' current group\n  -m, --mode=MODE     set permission mode (as in chmod), instead of rwxr-xr-x\n  -o, --owner=OWNER   set ownership (super-user only)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -p, --preserve-timestamps   apply access/modification times of SOURCE files\n                        to corresponding destination files\n  -s, --strip         strip symbol tables\n      --strip-program=PROGRAM  program used to strip binaries\n  -S, --suffix=SUFFIX  override the usual backup suffix\n  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory  treat DEST as a normal file\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v, --verbose       print the name of each created file or directory\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --preserve-context  preserve SELinux security context\n  -Z                      set SELinux security context of destination\n                            file and each created directory to default type\n      --context[=CTX]     like -Z, or if CTX is specified then set the\n                            SELinux or SMACK security context to CTX\n"
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
    iVar2 = strcmp("install",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "install";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100d05;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","install");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100d05:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","install");
    if (pcVar4 == "install") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001009ca:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(ulong param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  passwd *ppVar13;
  ulong uVar14;
  group *pgVar15;
  undefined8 uVar16;
  void *__ptr;
  undefined8 uVar17;
  int *piVar18;
  uint uVar19;
  char *pcVar20;
  uint *puVar21;
  undefined **ppuVar22;
  long in_FS_OFFSET;
  ulong *local_188;
  ulong *local_180;
  ulong *local_178;
  ulong *local_170;
  ulong *local_160;
  ulong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_11d;
  undefined4 local_11a;
  undefined1 local_116;
  long local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined1 local_f6;
  undefined2 local_f5;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [152];
  long local_40;
  
  uVar11 = 0;
  ppuVar22 = &long_options;
  iVar12 = 0x10301c;
  __ptr = (void *)(param_1 & 0xffffffff);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  selinux_enabled = 0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar21 = &switchD_00104433::switchdataD_00104e48;
  textdomain("coreutils");
  atexit((__func *)&close_stdin);
  cp_options_default(&local_138);
  local_100 = 0x100;
  local_138 = __LC49;
  uStack_130 = _UNK_001051d8;
  local_ec = 1;
  local_11d = 1;
  local_11a = 0;
  local_116 = 0;
  local_fe = 0;
  local_128 = 0x10100000180;
  local_120 = 0;
  local_f5 = 0;
  local_fc = 0;
  local_110 = 0;
  local_108 = 0x100;
  local_f8 = 0;
  owner_name = (ulong *)0x0;
  group_name = (ulong *)0x0;
  strip_files = '\0';
  dir_arg = 0;
  local_e8 = (undefined1  [16])0x0;
  umask(0);
  bVar4 = false;
  local_160 = (ulong *)0x0;
  bVar3 = false;
  local_188 = (ulong *)0x0;
  bVar5 = false;
  local_180 = (ulong *)0x0;
  local_170 = (ulong *)0x0;
  local_178 = (ulong *)0x0;
  puVar6 = local_180;
  puVar7 = local_160;
switchD_00104433_caseD_63:
  local_160 = puVar7;
  local_180 = puVar6;
  iVar9 = getopt_long((ulong)__ptr & 0xffffffff,param_2,"bcCsDdg:m:o:pt:TvS:Z",ppuVar22,0);
  puVar6 = local_180;
  puVar7 = local_160;
  if (iVar9 == -1) {
    if (dir_arg != 0) {
      if (strip_files == '\0') {
        pcVar20 = "target directory not allowed when installing a directory";
        if (local_188 == (ulong *)0x0) goto LAB_00104690;
      }
      else {
        pcVar20 = "the strip option may not be used when installing a directory";
      }
      goto LAB_00104d1e;
    }
LAB_00104690:
    uVar10 = 0;
    if ((char)uVar11 != '\0') {
      uVar16 = dcgettext(0,"backup type",5);
      uVar10 = xget_version(uVar16,local_180);
    }
    local_138 = CONCAT44(local_138._4_4_,uVar10);
    set_simple_backup_suffix(local_170);
    if (local_108._3_1_ != '\0') {
      pcVar20 = "cannot set target context and preserve it";
      if (local_160 == (ulong *)0x0 && local_110 == 0) goto LAB_001046c3;
      goto LAB_00104d1e;
    }
    if (local_160 != (ulong *)0x0) {
      piVar18 = __errno_location();
      *piVar18 = 0x5f;
      param_2 = (undefined8 *)quote(local_160);
      uVar16 = dcgettext(0,"failed to set default file creation context to %s",5);
      error(1,*piVar18,uVar16,param_2);
      goto LAB_00104d8e;
    }
LAB_001046c3:
    uVar19 = (int)__ptr - _optind;
    __ptr = (void *)(ulong)uVar19;
    ppuVar22 = (undefined **)(param_2 + _optind);
    if ((int)uVar19 <= (int)((uint)(local_188 == (ulong *)0x0) & (dir_arg ^ 1))) goto LAB_00104d36;
    if (bVar3) {
      pcVar20 = "cannot combine --target-directory (-t) and --no-target-directory (-T)";
      if (local_188 != (ulong *)0x0) goto LAB_00104d1e;
      if ((int)uVar19 < 3) goto LAB_0010471d;
      __ptr = (void *)quotearg_style(4,ppuVar22[2],5);
      uVar16 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar16,__ptr);
      usage(1);
      goto LAB_00104e24;
    }
    if (local_188 == (ulong *)0x0) {
      if (dir_arg == 0) {
        local_188 = (ulong *)ppuVar22[(long)(int)uVar19 + -1];
        iVar12 = target_directory_operand(local_188,local_d8);
        if (iVar12 == -1) goto LAB_00104c02;
        __ptr = (void *)(ulong)(uVar19 - 1);
      }
      else {
LAB_0010471d:
        iVar12 = -100;
        local_188 = (ulong *)0x0;
      }
    }
    else {
      iVar12 = target_directory_operand(local_188,local_d8);
      if ((iVar12 == -1) && ((!bVar5 || (piVar18 = __errno_location(), *piVar18 != 2)))) {
        uVar16 = quotearg_style(4,local_188);
        pcVar20 = "failed to access %s";
        goto LAB_00104927;
      }
    }
    if (local_178 != (ulong *)0x0) {
      param_2 = (undefined8 *)mode_compile(local_178);
      if (param_2 == (undefined8 *)0x0) {
        __ptr = (void *)quote(local_178);
        pcVar20 = "invalid mode %s";
        goto LAB_00104b80;
      }
      mode = mode_adjust(0,0,0,param_2,0);
      dir_mode = mode_adjust(0,1,0,param_2,&dir_mode_bits);
      free(param_2);
    }
    if ((bVar4) && (strip_files == '\0')) {
      uVar16 = dcgettext(0,"WARNING: ignoring --strip-program option as -s option was not specified"
                         ,5);
      error(0,0,uVar16);
    }
    if (copy_only_if_needed != '\0') {
      pcVar20 = "options --compare (-C) and --preserve-timestamps are mutually exclusive";
      if (local_11a._3_1_ == '\0') {
        if (strip_files == '\0') {
          if ((mode & 0xffff0e00) != 0) {
            uVar16 = dcgettext(0,
                               "the --compare (-C) option is ignored when you specify a mode with non-permission bits"
                               ,5);
            error(0,0,uVar16);
          }
          goto LAB_001047d5;
        }
        pcVar20 = "options --compare (-C) and --strip are mutually exclusive";
      }
      goto LAB_00104aee;
    }
LAB_001047d5:
    if (owner_name == (ulong *)0x0) {
      owner_id = 0xffffffff;
      goto LAB_00104801;
    }
    ppVar13 = getpwnam((char *)owner_name);
    if (ppVar13 == (passwd *)0x0) goto LAB_00104b9b;
    uVar14 = (ulong)ppVar13->pw_uid;
    goto LAB_001047f6;
  }
  if (iVar9 < 0x83) {
    if (0x42 < iVar9) goto code_r0x0010442c;
    if (iVar9 == -0x83) {
      uVar16 = proper_name_lite("David MacKenzie","David MacKenzie");
      version_etc(_stdout,"install","GNU coreutils",_Version,uVar16,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar9 == -0x82) {
      usage(0);
LAB_00104c02:
      if ((int)__ptr < 3) goto LAB_0010471d;
      uVar16 = quotearg_style(4,local_188);
      pcVar20 = "target %s";
LAB_00104927:
      __ptr = (void *)dcgettext(0,pcVar20,5);
      piVar18 = __errno_location();
      error(1,*piVar18,__ptr,uVar16);
      goto LAB_0010494a;
    }
  }
  goto switchD_00104433_caseD_45;
code_r0x0010442c:
  switch(iVar9) {
  case 0x43:
    copy_only_if_needed = '\x01';
    goto switchD_00104433_caseD_63;
  case 0x44:
    bVar5 = true;
    goto switchD_00104433_caseD_63;
  default:
    goto switchD_00104433_caseD_45;
  case 0x53:
    local_170 = _optarg;
    uVar11 = 1;
    goto switchD_00104433_caseD_63;
  case 0x54:
    bVar3 = true;
    goto switchD_00104433_caseD_63;
  case 0x5a:
    if (selinux_enabled != 0) {
      use_default_selinux_context = 0;
      puVar7 = _optarg;
      if (_optarg == (ulong *)0x0) {
        if (initialized_3 == '\0') {
          initialized_3 = '\x01';
          piVar18 = __errno_location();
          *piVar18 = 0x5f;
          hnd_2 = 0;
          uVar16 = dcgettext(0,"warning: security labeling handle failed",5);
          error(0,*piVar18,uVar16);
        }
        local_110 = hnd_2;
        puVar7 = local_160;
      }
      goto switchD_00104433_caseD_63;
    }
    if (_optarg == (ulong *)0x0) goto switchD_00104433_caseD_63;
    pcVar20 = "warning: ignoring --context; it requires an SELinux-enabled kernel";
    break;
  case 0x62:
    uVar11 = 1;
    puVar6 = _optarg;
    if (_optarg == (ulong *)0x0) {
      puVar6 = local_180;
    }
  case 99:
    goto switchD_00104433_caseD_63;
  case 100:
    dir_arg = 1;
    goto switchD_00104433_caseD_63;
  case 0x67:
    group_name = _optarg;
    goto switchD_00104433_caseD_63;
  case 0x6d:
    local_178 = _optarg;
    goto switchD_00104433_caseD_63;
  case 0x6f:
    owner_name = _optarg;
    goto switchD_00104433_caseD_63;
  case 0x70:
    local_11a = CONCAT13(1,(undefined3)local_11a);
    goto switchD_00104433_caseD_63;
  case 0x73:
    strip_files = '\x01';
    signal(0x11,(__sighandler_t)0x0);
    goto switchD_00104433_caseD_63;
  case 0x74:
    if (local_188 != (ulong *)0x0) {
      pcVar20 = "multiple target directories specified";
LAB_00104d1e:
      uVar19 = (uint)__ptr;
      uVar16 = dcgettext(0,pcVar20,5);
      error(1,0,uVar16);
LAB_00104d36:
      __ptr = (void *)(ulong)(uVar19 - 1);
      if (uVar19 - 1 == 0) {
LAB_00104d8e:
        __ptr = (void *)quotearg_style(4,*ppuVar22);
        uVar16 = dcgettext(0,"missing destination file operand after %s",5);
        error(0,0,uVar16,__ptr);
      }
      else {
        pcVar20 = "missing file operand";
LAB_00104aee:
        uVar16 = dcgettext(0,pcVar20,5);
        error(0,0,uVar16);
      }
      goto switchD_00104433_caseD_45;
    }
    local_188 = _optarg;
    goto switchD_00104433_caseD_63;
  case 0x76:
    local_f8 = 1;
    goto switchD_00104433_caseD_63;
  case 0x80:
    local_f8 = 1;
    local_f6 = 1;
    goto switchD_00104433_caseD_63;
  case 0x81:
    if (selinux_enabled != 0) {
      local_108._0_4_ = CONCAT13(1,(undefined3)local_108);
      use_default_selinux_context = 0;
      goto switchD_00104433_caseD_63;
    }
LAB_00104e24:
    pcVar20 = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
    break;
  case 0x82:
    strip_program = (undefined *)xstrdup(_optarg);
    bVar4 = true;
    goto switchD_00104433_caseD_63;
  }
  uVar16 = dcgettext(0,pcVar20,5);
  error(0,0,uVar16);
  goto switchD_00104433_caseD_63;
switchD_00104433_caseD_45:
  usage(1);
  iVar9 = iVar12;
LAB_00104b0d:
  iVar12 = open((char *)local_188,0x210000);
  if (iVar12 < 0) {
    uVar16 = quotearg_style(4,__ptr);
    uVar17 = dcgettext(0,"cannot open %s",5);
    piVar18 = __errno_location();
    error(0,*piVar18,uVar17,uVar16);
    goto LAB_00104a0c;
  }
  do {
    cVar8 = install_file_in_file(puVar21,__ptr,iVar12,local_140,&local_138);
    free(__ptr);
    if (cVar8 == '\0') {
      uVar11 = 1;
    }
    while( true ) {
      param_2 = (undefined8 *)((long)param_2 + 1);
      if ((int)local_180 <= (int)param_2) goto LAB_00104853;
LAB_001049be:
      puVar21 = (uint *)ppuVar22[(long)param_2];
      uVar16 = last_component(puVar21);
      __ptr = (void *)file_name_concat(local_188,uVar16,local_178);
      if (iVar12 != -1) break;
      iVar9 = iVar12;
      if ((((int)param_2 == 0) && (bVar5)) &&
         (cVar8 = mkancesdirs_safe_wd(puVar21,__ptr,&local_138,1), cVar8 != '\0'))
      goto LAB_00104b0d;
LAB_00104a0c:
      uVar11 = 1;
      free(__ptr);
      iVar12 = iVar9;
    }
  } while( true );
LAB_001047f6:
  owner_id = (undefined4)uVar14;
  endpwent();
LAB_00104801:
  if (group_name == (ulong *)0x0) {
    group_id = 0xffffffff;
    goto LAB_0010482d;
  }
  pgVar15 = getgrnam((char *)group_name);
  if (pgVar15 == (group *)0x0) {
    iVar9 = xstrtoumax(group_name,0,0,&local_140,&_LC16);
    if ((iVar9 == 0) && (uVar14 = local_140, local_140 < 0x100000000)) goto LAB_00104822;
    __ptr = (void *)quotearg_style(4,group_name);
    pcVar20 = "invalid group %s";
LAB_00104b80:
    while( true ) {
      uVar16 = dcgettext(0,pcVar20,5);
      error(1,0,uVar16,__ptr);
LAB_00104b9b:
      iVar9 = xstrtoumax(owner_name,0,0,&local_140,&_LC16);
      if ((iVar9 == 0) && (uVar14 = local_140, local_140 < 0x100000000)) break;
      __ptr = (void *)quotearg_style(4,owner_name);
      pcVar20 = "invalid user %s";
    }
    goto LAB_001047f6;
  }
  uVar14 = (ulong)pgVar15->gr_gid;
LAB_00104822:
  group_id = (undefined4)uVar14;
  endgrent();
LAB_0010482d:
  if (dir_arg == 0) {
LAB_0010494a:
    hash_init();
    if (local_188 == (ulong *)0x0) {
      puVar1 = ppuVar22[1];
      puVar2 = *ppuVar22;
      if (bVar5) {
        uVar11 = 1;
        cVar8 = mkancesdirs_safe_wd(puVar2,puVar1,&local_138,0);
        if (cVar8 == '\0') goto LAB_00104853;
      }
      uVar11 = install_file_in_file(puVar2,puVar1,0xffffff9c,puVar1,&local_138);
      uVar11 = (uVar11 ^ 1) & 0xff;
    }
    else {
      dest_info_init(&local_138);
      if ((int)__ptr != 0) {
        local_178 = &local_140;
        local_180 = (ulong *)((ulong)__ptr & 0xffffffff);
        param_2 = (undefined8 *)0x0;
        uVar11 = 0;
        goto LAB_001049be;
      }
      uVar11 = 0;
    }
  }
  else {
    uVar11 = savewd_process_files((ulong)__ptr & 0xffffffff,ppuVar22,process_dir,&local_138);
  }
LAB_00104853:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


