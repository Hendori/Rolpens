
/* WARNING: Unknown calling convention */

selabel_handle * get_labeling_handle(void)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (get_labeling_handle::initialized) {
    return get_labeling_handle::hnd;
  }
  get_labeling_handle::initialized = true;
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  get_labeling_handle::hnd = (selabel_handle *)0x0;
  uVar2 = dcgettext(0,"warning: security labeling handle failed",5);
  error(0,*piVar1,uVar2);
  return get_labeling_handle::hnd;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

_Bool mkancesdirs_safe_wd(char *from,char *to,cp_options *x,_Bool save_always)

{
  int iVar1;
  long lVar2;
  _Bool _Var3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  long in_FS_OFFSET;
  savewd wd;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (((save_always) || (*from != '/')) || (*to != '/')) {
    wd.state = DT_UNKNOWN;
    lVar5 = mkancesdirs(to,&wd,make_ancestor,x);
    if (lVar5 == -1) {
      uVar6 = quotearg_style(4,to);
      uVar7 = dcgettext(0,"cannot create directory %s",5);
      piVar8 = __errno_location();
      error(0,*piVar8,uVar7,uVar6);
      savewd_restore(&wd,1);
      savewd_finish(&wd);
    }
    else {
      iVar4 = savewd_restore(&wd,0);
      piVar8 = __errno_location();
      iVar1 = *piVar8;
      savewd_finish(&wd);
      if (iVar4 < 1) {
        if (iVar4 < 0) {
          uVar6 = quotearg_style(4,to);
          uVar7 = dcgettext(0,"cannot create directory %s",5);
          error(0,iVar1,uVar7,uVar6);
          _Var3 = false;
          goto LAB_0010013b;
        }
        goto LAB_00100136;
      }
    }
    _Var3 = false;
  }
  else {
    wd.state = DT_UNKNOWN;
    savewd_finish(&wd);
    lVar5 = mkancesdirs(to,&wd,make_ancestor,x);
    if (lVar5 == -1) {
      uVar6 = quotearg_style(4,to);
      uVar7 = dcgettext(0,"cannot create directory %s",5);
      piVar8 = __errno_location();
      error(0,*piVar8,uVar7,uVar6);
      _Var3 = false;
      goto LAB_0010013b;
    }
LAB_00100136:
    _Var3 = true;
  }
LAB_0010013b:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int process_dir(char *dir,savewd *wd,void *options)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = make_dir_parents(dir,wd,make_ancestor,options,dir_mode,announce_mkdir,dir_mode_bits,
                           owner_id,group_id,0);
  if ((bVar1 != 0) && (*(long *)((long)options + 0x28) != 0)) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  return (uint)(bVar1 ^ 1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int make_ancestor(char *dir,char *component,void *options)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)((long)options + 0x28) != 0) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  iVar1 = mkdir(component,0x1ed);
  if ((iVar1 == 0) && (*(char *)((long)options + 0x40) != '\0')) {
    uVar3 = quotearg_style(4,dir);
    uVar4 = dcgettext(0,"creating directory %s",5);
    prog_fprintf(_stdout,uVar4,uVar3);
    return 0;
  }
  return iVar1;
}



/* WARNING: Unknown calling convention */

_Bool install_file_in_file(char *from,char *to,int to_dirfd,char *to_relname,cp_options *x)

{
  long lVar1;
  mode_t mVar2;
  int iVar3;
  __pid_t _Var4;
  int __fd;
  int iVar5;
  uid_t uVar6;
  gid_t gVar7;
  selabel_handle *psVar8;
  int *piVar9;
  size_t __n;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  _Bool _Var14;
  char *pcVar15;
  long in_FS_OFFSET;
  _Bool copy_into_self;
  stat from_sb;
  stat src_sb;
  stat dest_sb;
  
  uVar13 = (ulong)(uint)to_dirfd;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((x->preserve_timestamps == false) || (iVar3 = stat(from,(stat *)&from_sb), iVar3 == 0)) {
    mVar2 = mode;
    if ((((copy_only_if_needed != false) &&
         ((((mode & 0xffff0e00) == 0 && (iVar3 = stat(from,(stat *)&src_sb), iVar3 == 0)) &&
          (iVar3 = fstatat(to_dirfd,to_relname,(stat *)&dest_sb,0x100), iVar3 == 0)))) &&
        ((((src_sb.st_mode & 0xf000) == 0x8000 && ((dest_sb.st_mode & 0xf000) == 0x8000)) &&
         (((src_sb.st_mode | dest_sb.st_mode) & 0xffff0e00) == 0)))) &&
       ((src_sb.st_size == dest_sb.st_size && (mVar2 == (dest_sb.st_mode & 0xfff))))) {
      uVar6 = owner_id;
      if (owner_id == 0xffffffff) {
        piVar9 = __errno_location();
        *piVar9 = 0;
        uVar6 = getuid();
        if ((uVar6 == 0xffffffff) && (*piVar9 != 0)) goto LAB_001003a0;
      }
      if (uVar6 == dest_sb.st_uid) {
        gVar7 = group_id;
        if (group_id == 0xffffffff) {
          piVar9 = __errno_location();
          *piVar9 = 0;
          gVar7 = getgid();
          if ((gVar7 == 0xffffffff) && (*piVar9 != 0)) goto LAB_001003a0;
        }
        if (gVar7 == dest_sb.st_gid) {
          if ((selinux_enabled == 0) || (x->preserve_security_context == false)) {
            iVar3 = open(from,0);
            if (-1 < iVar3) {
              __fd = openat(to_dirfd,to_relname,0);
              if (__fd < 0) {
                close(iVar3);
              }
              else {
                do {
                  sVar10 = full_read(iVar3,a_buff_0,0x1000);
                  if ((long)sVar10 < 1) {
                    close(iVar3);
                    close(__fd);
                    if (sVar10 != 0) goto LAB_001003a0;
                    goto LAB_001003c8;
                  }
                  __n = full_read(__fd,b_buff_1,0x1000);
                } while ((__n == sVar10) && (iVar5 = memcmp(a_buff_0,b_buff_1,__n), iVar5 == 0));
                close(iVar3);
                close(__fd);
              }
            }
          }
          else {
            piVar9 = __errno_location();
            *piVar9 = 0x5f;
          }
        }
      }
    }
LAB_001003a0:
    iVar3 = copy((EVP_PKEY_CTX *)from,(EVP_PKEY_CTX *)to);
    if ((char)iVar3 != '\0') {
LAB_001003c8:
      if (strip_files == false) {
        if (x->preserve_timestamps != false) {
LAB_001003db:
          if ((from_sb.st_mode & 0xf000) != 0x8000) {
LAB_001003eb:
            dest_sb.st_dev = from_sb.st_atim.tv_sec;
            dest_sb.st_ino = from_sb.st_atim.tv_nsec;
            dest_sb.st_nlink = from_sb.st_mtim.tv_sec;
            dest_sb.st_mode = (undefined4)from_sb.st_mtim.tv_nsec;
            dest_sb.st_uid = from_sb.st_mtim.tv_nsec._4_4_;
            iVar3 = utimensat(to_dirfd,to_relname,(timespec *)&dest_sb,0);
            if (iVar3 != 0) {
              uVar12 = quotearg_style(4,to);
              pcVar15 = "cannot set timestamps for %s";
              goto LAB_001004c8;
            }
          }
        }
      }
      else {
        _Var4 = fork();
        if (_Var4 == -1) goto LAB_00100854;
        if (_Var4 == 0) {
          if ((to != (char *)0x0) && (*to == '-')) {
            to = (char *)file_name_concat(&_LC5,to,0);
          }
          pcVar15 = strip_program;
          execlp(strip_program,strip_program,to,0);
          uVar13 = quotearg_style(4,pcVar15);
          pcVar15 = "cannot run %s";
          goto LAB_00100831;
        }
        _Var4 = waitpid(_Var4,(int *)&copy_into_self,0);
        if (_Var4 < 0) {
          pcVar15 = "waiting for strip";
          goto LAB_00100860;
        }
        if ((_copy_into_self & 0xff7f) != 0) {
          uVar12 = dcgettext(0,"strip process terminated abnormally",5);
          error(0,0,uVar12);
          while (iVar3 = unlinkat((int)uVar13,to_relname,0), iVar3 != 0) {
            uVar13 = quotearg_style(4,to);
            pcVar15 = "cannot unlink %s";
LAB_00100831:
            uVar12 = dcgettext(0,pcVar15,5);
            piVar9 = __errno_location();
            error(1,*piVar9,uVar12,uVar13);
LAB_00100854:
            pcVar15 = "fork system call failed";
LAB_00100860:
            uVar12 = dcgettext(0,pcVar15,5);
            piVar9 = __errno_location();
            error(0,*piVar9,uVar12);
          }
          goto LAB_001004f0;
        }
        if (x->preserve_timestamps != false) {
          if (strip_files == false) goto LAB_001003db;
          goto LAB_001003eb;
        }
      }
      if (((owner_id & group_id) == 0xffffffff) ||
         (iVar3 = fchownat(to_dirfd,to_relname,owner_id,group_id,0x100), iVar3 == 0)) {
        iVar3 = fchmodat(to_dirfd,to_relname,mode,0);
        if (iVar3 != 0) {
          uVar12 = quotearg_style(4,to);
          pcVar15 = "cannot change permissions of %s";
          goto LAB_0010077e;
        }
        _Var14 = true;
      }
      else {
        uVar12 = quotearg_style(4,to);
        pcVar15 = "cannot change ownership of %s";
LAB_0010077e:
        uVar11 = dcgettext(0,pcVar15,5);
        piVar9 = __errno_location();
        _Var14 = false;
        error(0,*piVar9,uVar11,uVar12);
      }
      if ((((use_default_selinux_context != false) && (selinux_enabled == 1)) &&
          (iVar3 = lstat(to,(stat *)&dest_sb), iVar3 == 0)) &&
         (psVar8 = get_labeling_handle(), psVar8 != (selabel_handle *)0x0)) {
        piVar9 = __errno_location();
        *piVar9 = 0x5f;
      }
      goto LAB_001004f2;
    }
  }
  else {
    uVar12 = quotearg_style(4,from);
    pcVar15 = "cannot stat %s";
LAB_001004c8:
    uVar11 = dcgettext(0,pcVar15,5);
    piVar9 = __errno_location();
    error(0,*piVar9,uVar11,uVar12);
  }
LAB_001004f0:
  _Var14 = false;
LAB_001004f2:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void announce_mkdir(char *dir,void *options)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)options + 0x40) == '\0') {
    return;
  }
  uVar1 = quotearg_style(4,dir);
  uVar2 = dcgettext(0,"creating directory %s",5);
  prog_fprintf(_stdout,uVar2,uVar1);
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
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001009da;
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
    iVar2 = strcmp("install",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "install";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100d15;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","install");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100d15:
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
LAB_001009da:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  _Bool _Var6;
  int iVar7;
  backup_type bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  void *__ptr;
  passwd *ppVar12;
  group *pgVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  int *piVar17;
  long lVar18;
  char *pcVar19;
  char *pcVar20;
  option *poVar21;
  long in_FS_OFFSET;
  char *local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  char *local_158;
  char *to_relname;
  cp_options x;
  stat sb;
  
  bVar2 = false;
  poVar21 = long_options;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  selinux_enabled = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdin);
  cp_options_default();
  x.stdin_tty = false;
  x.open_dangling_dest_symlink = false;
  x.backup_type = __LC49;
  x.dereference = _UNK_00105194;
  x.interactive = _UNK_00105198;
  x.sparse_mode = _UNK_0010519c;
  x.reflink_mode = REFLINK_AUTO;
  x.install_mode = true;
  x.one_file_system = false;
  x.preserve_ownership = false;
  x.preserve_mode = false;
  x.preserve_timestamps = false;
  x.explicit_no_preserve_mode = false;
  x.symbolic_link = false;
  x.recursive = false;
  x.set_mode = true;
  x.mode = 0x180;
  x.copy_as_regular = true;
  x.unlink_dest_before_opening = true;
  x.unlink_dest_after_failed_open = false;
  x.hard_link = false;
  x.move_mode = false;
  x.update = UPDATE_ALL;
  x.set_security_context = (selabel_handle *)0x0;
  x.preserve_links = false;
  x.data_copy_required = true;
  x.require_preserve = false;
  x.preserve_security_context = false;
  x.require_preserve_context = false;
  x.preserve_xattr = false;
  x.require_preserve_xattr = false;
  x.reduce_diagnostics = false;
  x.verbose = false;
  owner_name = (char *)0x0;
  group_name = (char *)0x0;
  strip_files = false;
  dir_arg = false;
  x.dest_info = (Hash_table *)0x0;
  x.src_info = (Hash_table *)0x0;
  umask(0);
  bVar4 = false;
  local_158 = (char *)0x0;
  bVar3 = false;
  local_180 = (char *)0x0;
  bVar5 = false;
  local_178 = (char *)0x0;
  local_168 = (char *)0x0;
  local_170 = (char *)0x0;
  pcVar19 = local_178;
  pcVar14 = local_158;
switchD_00104453_caseD_63:
  local_158 = pcVar14;
  local_178 = pcVar19;
  iVar7 = getopt_long(argc,argv,"bcCsDdg:m:o:pt:TvS:Z",long_options,0);
  if (iVar7 == -1) {
    if (dir_arg != false) {
      if (strip_files == false) {
        pcVar19 = "target directory not allowed when installing a directory";
        if (local_180 == (char *)0x0) goto LAB_0010469c;
      }
      else {
        pcVar19 = "the strip option may not be used when installing a directory";
      }
      goto LAB_00104d32;
    }
LAB_0010469c:
    bVar8 = no_backups;
    if (bVar2) {
      uVar11 = dcgettext(0,"backup type",5);
      bVar8 = xget_version(uVar11,local_178);
    }
    x.backup_type = bVar8;
    set_simple_backup_suffix(local_168);
    if (x.preserve_security_context != false) {
      pcVar19 = "cannot set target context and preserve it";
      if (local_158 == (char *)0x0 && x.set_security_context == (selabel_handle *)0x0)
      goto LAB_001046cf;
      goto LAB_00104d32;
    }
    if (local_158 != (char *)0x0) {
      piVar17 = __errno_location();
      *piVar17 = 0x5f;
      uVar11 = quote(local_158);
      uVar16 = dcgettext(0,"failed to set default file creation context to %s",5);
      error(1,*piVar17,uVar16,uVar11);
      goto LAB_00104da2;
    }
LAB_001046cf:
    argc = argc - _optind;
    uVar15 = (ulong)(uint)argc;
    poVar21 = (option *)(argv + _optind);
    if (argc <= (int)((uint)(local_180 == (char *)0x0) & (dir_arg ^ 1))) goto LAB_00104d4a;
    if (bVar3) {
      pcVar19 = "cannot combine --target-directory (-t) and --no-target-directory (-T)";
      if (local_180 != (char *)0x0) goto LAB_00104d32;
      if (2 < argc) {
        uVar11 = quotearg_style(4,poVar21->flag,5);
        uVar16 = dcgettext(0,"extra operand %s",5);
        error(0,0,uVar16,uVar11);
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
LAB_0010472b:
      iVar7 = -100;
      local_180 = (char *)0x0;
    }
    else {
      if (local_180 == (char *)0x0) {
        if (dir_arg == false) {
          local_180 = *(char **)((long)poVar21 + ((long)argc + -1) * 8);
          iVar7 = target_directory_operand(local_180,&sb);
          if (iVar7 != -1) {
            uVar15 = (ulong)(argc - 1);
            goto LAB_00104738;
          }
          if (2 < argc) {
            quotearg_style(4,local_180);
            pcVar19 = "target %s";
            goto LAB_00104938;
          }
        }
        goto LAB_0010472b;
      }
      iVar7 = target_directory_operand(local_180,&sb);
      if ((iVar7 == -1) && ((!bVar5 || (piVar17 = __errno_location(), *piVar17 != 2)))) {
        quotearg_style(4,local_180);
        pcVar19 = "failed to access %s";
LAB_00104938:
        uVar15 = dcgettext(0,pcVar19,5);
        piVar17 = __errno_location();
        error(1,*piVar17,uVar15);
        goto LAB_0010495b;
      }
    }
LAB_00104738:
    if (local_170 != (char *)0x0) {
      __ptr = (void *)mode_compile(local_170);
      if (__ptr == (void *)0x0) {
        uVar15 = quote(local_170);
        pcVar19 = "invalid mode %s";
        goto LAB_00104b86;
      }
      mode = mode_adjust(0,0,0,__ptr,0);
      dir_mode = mode_adjust(0,1,0,__ptr,&dir_mode_bits);
      free(__ptr);
    }
    if ((bVar4) && (strip_files == false)) {
      uVar11 = dcgettext(0,"WARNING: ignoring --strip-program option as -s option was not specified"
                         ,5);
      error(0,0,uVar11);
    }
    if (copy_only_if_needed != false) {
      pcVar19 = "options --compare (-C) and --preserve-timestamps are mutually exclusive";
      if (x.preserve_timestamps == false) {
        if (strip_files == false) {
          if ((mode & 0xffff0e00) != 0) {
            uVar11 = dcgettext(0,
                               "the --compare (-C) option is ignored when you specify a mode with non-permission bits"
                               ,5);
            error(0,0,uVar11);
          }
          goto LAB_001047e4;
        }
        pcVar19 = "options --compare (-C) and --strip are mutually exclusive";
      }
      goto LAB_00104af3;
    }
LAB_001047e4:
    if (owner_name == (char *)0x0) {
      owner_id = 0xffffffff;
      goto LAB_00104810;
    }
    ppVar12 = getpwnam(owner_name);
    if (ppVar12 == (passwd *)0x0) goto LAB_00104ba1;
    pcVar19 = (char *)(ulong)ppVar12->pw_uid;
    goto LAB_00104805;
  }
  if (iVar7 < 0x83) {
    if (0x42 < iVar7) goto code_r0x0010444c;
    if (iVar7 == -0x83) {
      uVar11 = proper_name_lite("David MacKenzie","David MacKenzie");
      version_etc(_stdout,"install","GNU coreutils",_Version,uVar11,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar7 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
  }
  goto switchD_00104453_caseD_45;
code_r0x0010444c:
  pcVar19 = local_178;
  pcVar14 = local_158;
  switch(iVar7) {
  case 0x43:
    copy_only_if_needed = true;
    goto switchD_00104453_caseD_63;
  case 0x44:
    bVar5 = true;
    goto switchD_00104453_caseD_63;
  default:
    goto switchD_00104453_caseD_45;
  case 0x53:
    local_168 = _optarg;
    bVar2 = true;
    goto switchD_00104453_caseD_63;
  case 0x54:
    bVar3 = true;
    goto switchD_00104453_caseD_63;
  case 0x5a:
    if (selinux_enabled != 0) {
      use_default_selinux_context = false;
      pcVar14 = _optarg;
      if (_optarg == (char *)0x0) {
        x.set_security_context = get_labeling_handle();
        pcVar14 = local_158;
      }
      goto switchD_00104453_caseD_63;
    }
    if (_optarg == (char *)0x0) goto switchD_00104453_caseD_63;
    pcVar20 = "warning: ignoring --context; it requires an SELinux-enabled kernel";
    break;
  case 0x62:
    bVar2 = true;
    pcVar19 = _optarg;
    if (_optarg == (char *)0x0) {
      pcVar19 = local_178;
    }
  case 99:
    goto switchD_00104453_caseD_63;
  case 100:
    dir_arg = true;
    goto switchD_00104453_caseD_63;
  case 0x67:
    group_name = _optarg;
    goto switchD_00104453_caseD_63;
  case 0x6d:
    local_170 = _optarg;
    goto switchD_00104453_caseD_63;
  case 0x6f:
    owner_name = _optarg;
    goto switchD_00104453_caseD_63;
  case 0x70:
    x.preserve_timestamps = true;
    goto switchD_00104453_caseD_63;
  case 0x73:
    strip_files = true;
    signal(0x11,(__sighandler_t)0x0);
    goto switchD_00104453_caseD_63;
  case 0x74:
    if (local_180 != (char *)0x0) {
      pcVar19 = "multiple target directories specified";
LAB_00104d32:
      uVar11 = dcgettext(0,pcVar19,5);
      error(1,0,uVar11);
LAB_00104d4a:
      if (argc == 1) {
LAB_00104da2:
        uVar11 = quotearg_style(4,poVar21->name);
        uVar16 = dcgettext(0,"missing destination file operand after %s",5);
        error(0,0,uVar16,uVar11);
      }
      else {
        pcVar19 = "missing file operand";
LAB_00104af3:
        uVar11 = dcgettext(0,pcVar19,5);
        error(0,0,uVar11);
      }
      goto switchD_00104453_caseD_45;
    }
    local_180 = _optarg;
    goto switchD_00104453_caseD_63;
  case 0x76:
    x.verbose = true;
    goto switchD_00104453_caseD_63;
  case 0x80:
    x.verbose = true;
    x.debug = true;
    goto switchD_00104453_caseD_63;
  case 0x81:
    if (selinux_enabled != 0) {
      x.preserve_security_context = true;
      use_default_selinux_context = false;
      goto switchD_00104453_caseD_63;
    }
    pcVar20 = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
    break;
  case 0x82:
    strip_program = (char *)xstrdup(_optarg);
    bVar4 = true;
    goto switchD_00104453_caseD_63;
  }
  uVar11 = dcgettext(0,pcVar20,5);
  error(0,0,uVar11);
  goto switchD_00104453_caseD_63;
switchD_00104453_caseD_45:
                    /* WARNING: Subroutine does not return */
  usage(1);
LAB_00104805:
  owner_id = (uid_t)pcVar19;
  endpwent();
LAB_00104810:
  if (group_name == (char *)0x0) {
    group_id = 0xffffffff;
    goto LAB_0010483c;
  }
  pgVar13 = getgrnam(group_name);
  if (pgVar13 == (group *)0x0) {
    iVar10 = xstrtoumax(group_name,0,0,&to_relname,&_LC16);
    if ((iVar10 == 0) && (pcVar19 = to_relname, to_relname < (char *)0x100000000))
    goto LAB_00104831;
    uVar15 = quotearg_style(4,group_name);
    pcVar19 = "invalid group %s";
LAB_00104b86:
    while( true ) {
      uVar11 = dcgettext(0,pcVar19,5);
      error(1,0,uVar11,uVar15);
LAB_00104ba1:
      iVar10 = xstrtoumax(owner_name,0,0,&to_relname,&_LC16);
      if ((iVar10 == 0) && (pcVar19 = to_relname, to_relname < (char *)0x100000000)) break;
      uVar15 = quotearg_style(4,owner_name);
      pcVar19 = "invalid user %s";
    }
    goto LAB_00104805;
  }
  pcVar19 = (char *)(ulong)pgVar13->gr_gid;
LAB_00104831:
  group_id = (gid_t)pcVar19;
  endgrent();
LAB_0010483c:
  if (dir_arg == false) {
LAB_0010495b:
    hash_init();
    if (local_180 == (char *)0x0) {
      pcVar19 = *(char **)&poVar21->has_arg;
      pcVar14 = poVar21->name;
      if (bVar5) {
        uVar9 = 1;
        _Var6 = mkancesdirs_safe_wd(pcVar14,pcVar19,&x,false);
        if (!_Var6) goto LAB_00104862;
      }
      _Var6 = install_file_in_file(pcVar14,pcVar19,-100,pcVar19,&x);
      uVar9 = (uint)!_Var6;
    }
    else {
      dest_info_init(&x);
      if ((int)uVar15 == 0) {
        uVar9 = 0;
      }
      else {
        lVar18 = 0;
        uVar9 = 0;
        do {
          pcVar19 = (&poVar21->name)[lVar18];
          uVar11 = last_component(pcVar19);
          pcVar14 = (char *)file_name_concat(local_180,uVar11,&to_relname);
          iVar10 = iVar7;
          if (iVar7 == -1) {
            if ((((int)lVar18 == 0) && (bVar5)) &&
               (_Var6 = mkancesdirs_safe_wd(pcVar19,pcVar14,&x,true), _Var6)) {
              iVar10 = open(local_180,0x210000);
              if (-1 < iVar10) goto LAB_00104993;
              uVar11 = quotearg_style(4,pcVar14);
              uVar16 = dcgettext(0,"cannot open %s",5);
              piVar17 = __errno_location();
              error(0,*piVar17,uVar16,uVar11);
            }
            uVar9 = 1;
            free(pcVar14);
          }
          else {
LAB_00104993:
            _Var6 = install_file_in_file(pcVar19,pcVar14,iVar10,to_relname,&x);
            free(pcVar14);
            iVar7 = iVar10;
            if (!_Var6) {
              uVar9 = 1;
            }
          }
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < (int)uVar15);
      }
    }
  }
  else {
    uVar9 = savewd_process_files(uVar15 & 0xffffffff,poVar21,process_dir,&x);
  }
LAB_00104862:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


