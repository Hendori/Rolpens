
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
    iVar2 = strcmp("mknod",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char cVar1;
  int iVar2;
  __mode_t __mask;
  uint __mode;
  undefined8 uVar3;
  void *__ptr;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong __dev;
  long extraout_RDX;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  long in_FS_OFFSET;
  uintmax_t i_major;
  uintmax_t i_minor;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  lVar11 = 0;
LAB_00100ccc:
  do {
    iVar2 = getopt_long(argc,argv,&_LC33,longopts,0);
    if (iVar2 == -1) {
      if (lVar11 == 0) {
        __mode = 0x1b6;
      }
      else {
        __ptr = (void *)mode_compile();
        pcVar10 = "invalid mode";
        if (__ptr == (void *)0x0) goto LAB_00101101;
        __mask = umask(0);
        umask(__mask);
        __mode = mode_adjust(0x1b6,0,__mask,__ptr,0);
        free(__ptr);
        if (0x1ff < __mode) goto LAB_001010f5;
      }
      if (_optind < argc) {
        if ((_optind + 1 < argc) && (*argv[(long)_optind + 1] == 'p')) {
          uVar9 = argc - _optind;
          if (uVar9 != 1) goto LAB_00100f98;
          uVar3 = quote(argv[(long)argc + -1]);
          pcVar10 = "missing operand after %s";
          goto LAB_0010105c;
        }
        if (argc - _optind < 4) {
          uVar3 = quote(argv[(long)argc + -1]);
          uVar6 = dcgettext(0,"missing operand after %s",5);
          error(0,0,uVar6,uVar3);
          if (argc - _optind == 2) {
            pcVar10 = "Special files require major and minor device numbers.";
            goto LAB_00101125;
          }
          break;
        }
        if (4 < (uint)(argc - _optind)) {
          uVar3 = quote(argv[(long)_optind + 4]);
          pcVar10 = "extra operand %s";
          goto LAB_0010105c;
        }
      }
      else {
        uVar9 = argc - _optind;
        if (uVar9 < 2) goto LAB_00101207;
LAB_00100f98:
        if (uVar9 != 2) {
          uVar3 = quote(argv[(long)_optind + 2]);
          uVar6 = dcgettext(0,"extra operand %s",5);
          error(0,0,uVar6,uVar3);
          if (argc - _optind == 4) goto LAB_00101119;
          break;
        }
      }
      lVar4 = (long)_optind + 1;
      lVar8 = lVar4 * 8;
      cVar1 = *argv[lVar4];
      if (cVar1 == 'p') {
        iVar2 = mkfifo(argv[_optind],__mode);
        if (iVar2 != 0) goto LAB_00101004;
        goto LAB_00100f34;
      }
      if (cVar1 < 'q') {
        uVar9 = 0x6000;
        if (cVar1 != 'b') goto LAB_0010103b;
        goto LAB_00100e62;
      }
      if (cVar1 != 'u') goto LAB_00101048;
      uVar9 = 0x2000;
      goto LAB_00100e62;
    }
    if (iVar2 == 0x5a) {
      if (_optarg != 0) {
        uVar3 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar3);
      }
      goto LAB_00100ccc;
    }
    if (iVar2 < 0x5b) {
      if (iVar2 == -0x83) {
        uVar3 = proper_name_lite("David MacKenzie","David MacKenzie");
        version_etc(_stdout,"mknod","GNU coreutils",_Version,uVar3,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      break;
    }
    lVar11 = _optarg;
  } while (iVar2 == 0x6d);
  goto LAB_00100fe5;
LAB_00100f34:
  if ((lVar11 == 0) || (iVar2 = lchmod(argv[_optind],__mode), iVar2 == 0)) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  uVar3 = quotearg_style(4,argv[_optind]);
  uVar6 = dcgettext(0,"cannot set permissions of %s",5);
  piVar7 = __errno_location();
  error(1,*piVar7,uVar6,uVar3);
LAB_00101207:
  uVar3 = dcgettext(0,"missing operand",5);
  error(0,0,uVar3);
  goto LAB_00100fe5;
LAB_00101004:
  while( true ) {
    argv = (char **)quotearg_n_style_colon(0,3,argv[_optind]);
    piVar7 = __errno_location();
    cVar1 = error(1,*piVar7,&_LC43,argv);
    lVar8 = extraout_RDX;
LAB_0010103b:
    uVar9 = 0x2000;
    if (cVar1 != 'c') break;
LAB_00100e62:
    uVar3 = *(undefined8 *)((long)argv + lVar8 + 8);
    uVar6 = *(undefined8 *)((long)argv + lVar8 + 0x10);
    iVar2 = xstrtoumax(uVar3,0,0,&i_major,&_LC3);
    if (iVar2 != 0) goto LAB_0010125f;
    if (0xffffffff < CONCAT44(i_major._4_4_,(uint)i_major)) goto LAB_0010125f;
    iVar2 = xstrtoumax(uVar6,0,0,&i_minor,&_LC3);
    if ((iVar2 != 0) || (0xffffffff < i_minor)) {
      uVar3 = quote(uVar6);
      pcVar10 = "invalid minor device number %s";
      do {
        uVar6 = dcgettext(0,pcVar10,5);
        error(1,0,uVar6,uVar3);
LAB_0010125f:
        uVar3 = quote();
        pcVar10 = "invalid major device number %s";
      } while( true );
    }
    __dev = i_minor & 0xff |
            ((ulong)(uint)i_major & 0xfffff000) << 0x20 | (ulong)(((uint)i_major & 0xfff) << 8) |
            (i_minor & 0xffffff00) << 0xc;
    if (__dev == 0xffffffffffffffff) {
      uVar5 = dcgettext(0,"invalid device %s %s",5);
      error(1,0,uVar5,uVar3,uVar6);
LAB_001010f5:
      pcVar10 = "mode must specify only file permission bits";
LAB_00101101:
      uVar3 = dcgettext(0,pcVar10,5);
      error(1,0,uVar3);
LAB_00101119:
      pcVar10 = "Fifos do not have major and minor device numbers.";
LAB_00101125:
      uVar3 = dcgettext(0,pcVar10,5);
      __fprintf_chk(_stderr,2,&_LC38,uVar3);
      goto LAB_00100fe5;
    }
    iVar2 = mknod(argv[_optind],uVar9 | __mode,__dev);
    if (iVar2 == 0) goto LAB_00100f34;
  }
LAB_00101048:
  uVar3 = quote();
  pcVar10 = "invalid device type %s";
LAB_0010105c:
  uVar6 = dcgettext(0,pcVar10,5);
  error(0,0,uVar6,uVar3);
LAB_00100fe5:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


