
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
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... NAME TYPE [MAJOR MINOR]\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Create the special file NAME of the given TYPE.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -m, --mode=MODE    set file permission bits to MODE, not a=rw - umask\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -Z                   set the SELinux security context to default type\n      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux\n                         or SMACK security context to CTX\n"
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
                             "\nBoth MAJOR and MINOR must be specified when TYPE is b, c, or u, and they\nmust be omitted when TYPE is p.  If MAJOR or MINOR begins with 0x or 0X,\nit is interpreted as hexadecimal; otherwise, if it begins with 0, as octal;\notherwise, as decimal.  TYPE may be:\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  b      create a block (buffered) special file\n  c, u   create a character (unbuffered) special file\n  p      create a FIFO\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,"mknod");
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
    iVar2 = strcmp("mknod",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "mknod";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001002f5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","mknod");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001002f5:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","mknod");
    if (pcVar4 == "mknod") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  __mode_t _Var3;
  undefined8 uVar4;
  void *__ptr;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong __dev;
  long extraout_RDX;
  long lVar8;
  long extraout_RDX_00;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  long in_FS_OFFSET;
  uint local_50;
  undefined4 uStack_4c;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  _Var3 = 0x100502;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  lVar8 = 0;
LAB_00100ccc:
  do {
    lVar11 = lVar8;
    iVar2 = getopt_long(param_1,param_2,&_LC33,longopts,0);
    if (iVar2 == -1) {
      if (lVar11 == 0) {
        _Var3 = 0x1b6;
      }
      else {
        __ptr = (void *)mode_compile();
        pcVar10 = "invalid mode";
        if (__ptr == (void *)0x0) goto LAB_00101101;
        _Var3 = umask(0);
        umask(_Var3);
        _Var3 = mode_adjust(0x1b6,0,_Var3,__ptr,0);
        free(__ptr);
        if (0x1ff < _Var3) goto LAB_001010f5;
      }
      if (_optind < param_1) {
        if ((param_1 <= _optind + 1) || (*(char *)param_2[(long)_optind + 1] != 'p')) {
          if (3 < param_1 - _optind) {
            if (4 < (uint)(param_1 - _optind)) {
              param_2 = (undefined8 *)quote(param_2[(long)_optind + 4]);
              pcVar10 = "extra operand %s";
              goto LAB_0010105c;
            }
            goto LAB_00100e34;
          }
          param_2 = (undefined8 *)quote(param_2[(long)param_1 + -1]);
          uVar4 = dcgettext(0,"missing operand after %s",5);
          error(0,0,uVar4,param_2);
          if (param_1 - _optind == 2) {
            pcVar10 = "Special files require major and minor device numbers.";
            goto LAB_00101125;
          }
          break;
        }
        uVar9 = param_1 - _optind;
        if (uVar9 == 1) {
          param_2 = (undefined8 *)quote(param_2[(long)param_1 + -1]);
          pcVar10 = "missing operand after %s";
          goto LAB_0010105c;
        }
      }
      else {
        uVar9 = param_1 - _optind;
        if (uVar9 < 2) goto LAB_00101207;
      }
      if (uVar9 == 2) {
LAB_00100e34:
        lVar8 = ((long)_optind + 1) * 8;
        cVar1 = *(char *)param_2[(long)_optind + 1];
        if (cVar1 == 'p') goto LAB_00100fef;
        if (cVar1 < 'q') {
          uVar9 = 0x6000;
          if (cVar1 != 'b') goto LAB_0010103b;
          goto LAB_00100e62;
        }
        if (cVar1 != 'u') goto LAB_00101048;
        uVar9 = 0x2000;
        goto LAB_00100e62;
      }
      param_2 = (undefined8 *)quote(param_2[(long)_optind + 2]);
      uVar4 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar4,param_2);
      if (param_1 - _optind == 4) goto LAB_00101119;
      break;
    }
    if (iVar2 == 0x5a) {
      lVar8 = lVar11;
      if (_optarg != 0) {
        uVar4 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar4);
      }
      goto LAB_00100ccc;
    }
    if (iVar2 < 0x5b) {
      if (iVar2 == -0x83) {
        uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,"mknod","GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
        usage(0);
        goto LAB_001010c4;
      }
      break;
    }
    lVar8 = _optarg;
  } while (iVar2 == 0x6d);
LAB_00100fe5:
  do {
    usage(1);
    lVar8 = extraout_RDX;
LAB_00100fef:
    iVar2 = mkfifo(*(char **)((long)param_2 + lVar8 + -8),_Var3);
    while( true ) {
      if (iVar2 == 0) goto LAB_00100f34;
      param_2 = (undefined8 *)quotearg_n_style_colon(0,3,param_2[_optind]);
      piVar5 = __errno_location();
      cVar1 = error(1,*piVar5,&_LC43,param_2);
      lVar8 = extraout_RDX_00;
LAB_0010103b:
      uVar9 = 0x2000;
      if (cVar1 != 'c') goto LAB_00101048;
LAB_00100e62:
      uVar4 = *(undefined8 *)((long)param_2 + lVar8 + 8);
      uVar7 = *(undefined8 *)((long)param_2 + lVar8 + 0x10);
      iVar2 = xstrtoumax(uVar4,0,0,&local_50,&_LC3);
      if (iVar2 != 0) goto LAB_0010125f;
      if (0xffffffff < CONCAT44(uStack_4c,local_50)) goto LAB_0010125f;
      iVar2 = xstrtoumax(uVar7,0,0,&local_48,&_LC3);
      if ((iVar2 != 0) || (0xffffffff < local_48)) {
        uVar4 = quote(uVar7);
        pcVar10 = "invalid minor device number %s";
        do {
          uVar7 = dcgettext(0,pcVar10,5);
          error(1,0,uVar7,uVar4);
LAB_0010125f:
          uVar4 = quote();
          pcVar10 = "invalid major device number %s";
        } while( true );
      }
      __dev = local_48 & 0xff |
              ((ulong)local_50 & 0xfffff000) << 0x20 | (ulong)((local_50 & 0xfff) << 8) |
              (local_48 & 0xffffff00) << 0xc;
      if (__dev == 0xffffffffffffffff) break;
      iVar2 = mknod((char *)param_2[_optind],uVar9 | _Var3,__dev);
    }
    uVar6 = dcgettext(0,"invalid device %s %s",5);
    error(1,0,uVar6,uVar4,uVar7);
LAB_001010f5:
    pcVar10 = "mode must specify only file permission bits";
LAB_00101101:
    uVar4 = dcgettext(0,pcVar10,5);
    error(1,0,uVar4);
LAB_00101119:
    pcVar10 = "Fifos do not have major and minor device numbers.";
LAB_00101125:
    uVar4 = dcgettext(0,pcVar10,5);
    __fprintf_chk(_stderr,2,&_LC38,uVar4);
  } while( true );
LAB_00100f34:
  if ((lVar11 == 0) || (iVar2 = lchmod((char *)param_2[_optind],_Var3), iVar2 == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
LAB_001010c4:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar4 = quotearg_style(4,param_2[_optind]);
  param_2 = (undefined8 *)dcgettext(0,"cannot set permissions of %s",5);
  piVar5 = __errno_location();
  error(1,*piVar5,param_2,uVar4);
LAB_00101207:
  uVar4 = dcgettext(0,"missing operand",5);
  error(0,0,uVar4);
  goto LAB_00100fe5;
LAB_00101048:
  param_2 = (undefined8 *)quote();
  pcVar10 = "invalid device type %s";
LAB_0010105c:
  uVar4 = dcgettext(0,pcVar10,5);
  error(0,0,uVar4,param_2);
  goto LAB_00100fe5;
}


