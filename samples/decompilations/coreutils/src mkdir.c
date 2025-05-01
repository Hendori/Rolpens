
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int process_dir(char *dir,savewd *wd,void *options)

{
  long lVar1;
  byte bVar2;
  int *piVar3;
  
                    /* WARNING: Load size is inaccurate */
  lVar1 = *options;
  if ((*(long *)((long)options + 0x18) != 0) && (lVar1 == 0)) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  bVar2 = make_dir_parents(dir,wd,lVar1,options,*(undefined4 *)((long)options + 0x10),announce_mkdir
                           ,*(undefined4 *)((long)options + 0x14),0xffffffffffffffff,
                           0xffffffffffffffff,1);
                    /* WARNING: Load size is inaccurate */
  if (((bVar2 != 0) && (*(long *)((long)options + 0x18) != 0)) && (*options != 0)) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  return (uint)(bVar2 ^ 1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int make_ancestor(char *dir,char *component,void *options)

{
  __mode_t __mask;
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (*(long *)((long)options + 0x18) != 0) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  if (*(__mode_t *)((long)options + 8) != *(__mode_t *)((long)options + 0xc)) {
    umask(*(__mode_t *)((long)options + 8));
  }
  uVar2 = mkdir(component,0x1ff);
  __mask = *(__mode_t *)((long)options + 0xc);
  if (*(__mode_t *)((long)options + 8) != __mask) {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    umask(__mask);
    *piVar3 = iVar1;
  }
  if ((uVar2 == 0) &&
     (uVar2 = *(uint *)((long)options + 8) >> 8 & 1, *(long *)((long)options + 0x20) != 0)) {
    uVar4 = quotearg_style(4,dir);
    prog_fprintf(_stdout,*(undefined8 *)((long)options + 0x20),uVar4);
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void announce_mkdir(char *dir,void *options)

{
  undefined8 uVar1;
  
  if (*(long *)((long)options + 0x20) != 0) {
    uVar1 = quotearg_style(4,dir);
    prog_fprintf(_stdout,*(undefined8 *)((long)options + 0x20),uVar1);
    return;
  }
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
    goto LAB_001001ea;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... DIRECTORY...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Create the DIRECTORY(ies), if they do not already exist.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -m, --mode=MODE   set file mode (as in chmod), not a=rwx - umask\n  -p, --parents     no error if existing, make parent directories as needed,\n                    with their file modes unaffected by any -m option\n  -v, --verbose     print a message for each created directory\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -Z                   set SELinux security context of each created directory\n                         to the default type\n      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux\n                         or SMACK security context to CTX\n"
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
    iVar2 = strcmp("mkdir",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "mkdir";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010041d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","mkdir");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010041d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","mkdir");
    if (pcVar4 == "mkdir") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001001ea:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  long lVar2;
  int iVar3;
  __mode_t _Var4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  void *__ptr;
  undefined8 uVar8;
  long lVar9;
  long in_FS_OFFSET;
  mkdir_options options;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  options.set_security_context = (selabel_handle *)0x0;
  options.created_directory_format = (char *)0x0;
  options.make_ancestor_function = (_func_int_char_ptr_char_ptr_void_ptr *)0x0;
  options.mode = 0x1ff;
  options.mode_bits = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  lVar2 = 0;
LAB_00100b93:
  do {
    do {
      lVar9 = lVar2;
      iVar3 = getopt_long(argc,argv,"pm:vZ",longopts,0);
      if (iVar3 == -1) {
        if (_optind != argc) {
          if (lVar9 != 0 ||
              options.make_ancestor_function != (_func_int_char_ptr_char_ptr_void_ptr *)0x0) {
            _Var4 = umask(0);
            options.umask_ancestor = _Var4 & 0xffffff3f;
            if (lVar9 == 0) {
              options.mode = 0x1ff;
              options.umask_self = _Var4;
            }
            else {
              __ptr = (void *)mode_compile(lVar9);
              if (__ptr == (void *)0x0) {
                uVar6 = quote(lVar9);
                uVar8 = dcgettext(0,"invalid mode %s",5);
                error(1,0,uVar8,uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar5 = mode_adjust(0x1ff,1,_Var4,__ptr,&options.mode_bits);
              options.mode = uVar5;
              options.umask_self = ~uVar5 & _Var4;
              free(__ptr);
            }
            umask(options.umask_self);
          }
          iVar3 = savewd_process_files(argc - _optind,argv + _optind,0x100000,&options);
          if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return iVar3;
        }
        uVar6 = dcgettext(0,"missing operand",5);
        error(0,0,uVar6);
LAB_00100d8d:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      lVar2 = _optarg;
    } while (iVar3 == 0x6d);
    lVar2 = lVar9;
    if (iVar3 < 0x6e) {
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      if (iVar3 != 0x5a) {
        if (iVar3 == -0x83) {
          uVar6 = proper_name_lite("David MacKenzie","David MacKenzie");
          version_etc(_stdout,"mkdir","GNU coreutils",_Version,uVar6,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00100d8d;
      }
      if (_optarg != 0) {
        uVar6 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar6);
      }
      goto LAB_00100b93;
    }
    if (iVar3 == 0x70) {
      options.make_ancestor_function = make_ancestor;
    }
    else {
      if (iVar3 != 0x76) goto LAB_00100d8d;
      pcVar7 = (char *)dcgettext(0,"created directory %s",5);
      options.created_directory_format = pcVar7;
    }
  } while( true );
}


