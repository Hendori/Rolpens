
byte process_dir(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  int *piVar3;
  
  lVar1 = *param_3;
  if ((param_3[3] != 0) && (lVar1 == 0)) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  bVar2 = make_dir_parents(param_1,param_2,lVar1,param_3,(int)param_3[2],announce_mkdir,
                           *(undefined4 *)((long)param_3 + 0x14),0xffffffffffffffff,
                           0xffffffffffffffff,1);
  if (((bVar2 != 0) && (param_3[3] != 0)) && (*param_3 != 0)) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  return bVar2 ^ 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint make_ancestor(undefined8 param_1,char *param_2,long param_3)

{
  __mode_t __mask;
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_3 + 0x18) != 0) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  if (*(__mode_t *)(param_3 + 8) != *(__mode_t *)(param_3 + 0xc)) {
    umask(*(__mode_t *)(param_3 + 8));
  }
  uVar2 = mkdir(param_2,0x1ff);
  __mask = *(__mode_t *)(param_3 + 0xc);
  if (*(__mode_t *)(param_3 + 8) != __mask) {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    umask(__mask);
    *piVar3 = iVar1;
  }
  if ((uVar2 == 0) && (uVar2 = *(uint *)(param_3 + 8) >> 8 & 1, *(long *)(param_3 + 0x20) != 0)) {
    uVar4 = quotearg_style(4,param_1);
    prog_fprintf(_stdout,*(undefined8 *)(param_3 + 0x20),uVar4);
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void announce_mkdir(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar1 = quotearg_style(4,param_1);
    prog_fprintf(_stdout,*(undefined8 *)(param_2 + 0x20),uVar1);
    return;
  }
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
  local_a8 = &_LC0;
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
    iVar2 = strcmp("mkdir",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void main(int param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  __mode_t _Var3;
  uint uVar4;
  undefined8 uVar5;
  void *__ptr;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  code *local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_58 = (code *)0x0;
  local_48 = 0x1ff;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  lVar1 = 0;
LAB_00100b93:
  do {
    do {
      lVar7 = lVar1;
      iVar2 = getopt_long(param_1,param_2,"pm:vZ",longopts,0);
      if (iVar2 == -1) {
        if (_optind == param_1) {
          uVar5 = dcgettext(0,"missing operand",5);
          error(0,0,uVar5);
LAB_00100d8d:
          usage(1);
LAB_00100d97:
          usage(0);
        }
        else {
          if (lVar7 != 0 || local_58 != (code *)0x0) {
            _Var3 = umask(0);
            local_50 = _Var3 & 0xffffff3f;
            if (lVar7 == 0) {
              local_48 = CONCAT44(local_48._4_4_,0x1ff);
              local_4c = _Var3;
            }
            else {
              __ptr = (void *)mode_compile(lVar7);
              if (__ptr == (void *)0x0) {
                uVar5 = quote(lVar7);
                uVar6 = dcgettext(0,"invalid mode %s",5);
                error(1,0,uVar6,uVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar4 = mode_adjust(0x1ff,1,_Var3,__ptr,(long)&local_48 + 4);
              local_48 = CONCAT44(local_48._4_4_,uVar4);
              local_4c = ~uVar4 & _Var3;
              free(__ptr);
            }
            umask(local_4c);
          }
          savewd_process_files(param_1 - _optind,param_2 + _optind,0x100000,&local_58);
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar1 = _optarg;
    } while (iVar2 == 0x6d);
    lVar1 = lVar7;
    if (iVar2 < 0x6e) {
      if (iVar2 == -0x82) goto LAB_00100d97;
      if (iVar2 != 0x5a) {
        if (iVar2 == -0x83) {
          uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
          version_etc(_stdout,"mkdir","GNU coreutils",_Version,uVar5,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00100d8d;
      }
      if (_optarg != 0) {
        uVar5 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar5);
      }
      goto LAB_00100b93;
    }
    if (iVar2 == 0x70) {
      local_58 = make_ancestor;
    }
    else {
      if (iVar2 != 0x76) goto LAB_00100d8d;
      uVar5 = dcgettext(0,"created directory %s",5);
      local_40._8_8_ = uVar5;
    }
  } while( true );
}


