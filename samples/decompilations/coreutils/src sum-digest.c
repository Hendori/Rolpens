
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar4 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar4);
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,"Print or check %s (%d-bit) checksums.\n",5);
  __printf_chk(2,uVar4,&_LC8,0x10);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\n  -r              use BSD sum algorithm (the default), use 1K blocks\n  -s, --sysv      use System V sum algorithm, use 512 bytes blocks\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = "[";
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
    iVar2 = strcmp("sum",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar5 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC1;
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) goto LAB_0010026d;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC1);
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
LAB_0010026d:
      iVar2 = strncmp(pcVar5,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar5 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar5,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC1);
    if (puVar7 == &_LC1) {
      pcVar5 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,puVar7,pcVar5);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  uchar *puVar1;
  long lVar2;
  char *__s1;
  FILE *__stream;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  FILE *pFVar8;
  int *piVar9;
  char **ppcVar10;
  char **ppcVar11;
  long in_FS_OFFSET;
  byte local_59;
  uintmax_t length;
  uchar bin_buffer_unaligned [6];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  while (iVar3 = getopt_long(argc,argv,&_LC30,long_options), iVar3 != -1) {
    if (iVar3 == 0x72) {
      sum_algorithm = bsd;
    }
    else {
      if (iVar3 < 0x73) {
        if (iVar3 == -0x83) {
          uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar6 = proper_name_lite("Kayvan Aghaiepour","Kayvan Aghaiepour");
          version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00100a89;
      }
      if (iVar3 != 0x73) goto LAB_00100a97;
      sum_algorithm = sysv;
    }
  }
  ppcVar11 = argv + argc;
  lVar7 = (long)_optind;
  ppcVar10 = ppcVar11;
  if (_optind == argc) {
    ppcVar10 = ppcVar11 + 1;
    *ppcVar11 = "-";
  }
  ppcVar11 = argv + lVar7;
  if (ppcVar11 < ppcVar10) {
    local_59 = 1;
    puVar1 = bin_buffer_unaligned + 2;
    do {
      __s1 = *ppcVar11;
      iVar3 = strcmp(__s1,"-");
      __stream = _stdin;
      if (iVar3 == 0) {
        have_read_stdin = true;
        fadvise(_stdin,2);
        iVar3 = (*sumfns[sum_algorithm])((FILE *)__stream,puVar1,&length);
        if (iVar3 != 0) {
          piVar9 = __errno_location();
          iVar3 = *piVar9;
        }
        clearerr_unlocked(__stream);
        goto LAB_001008fd;
      }
      pFVar8 = (FILE *)fopen_safer(__s1,&_LC32);
      if (pFVar8 == (FILE *)0x0) {
        uVar5 = quotearg_n_style_colon(0,3,__s1);
        piVar9 = __errno_location();
        error(0,*piVar9,&_LC33,uVar5);
LAB_00100a06:
        local_59 = 0;
      }
      else {
        fadvise(pFVar8,2);
        iVar3 = (*sumfns[sum_algorithm])(pFVar8,puVar1,&length);
        if (iVar3 != 0) {
          piVar9 = __errno_location();
          iVar3 = *piVar9;
          iVar4 = rpl_fclose(pFVar8);
          if (iVar4 == 0) goto LAB_001008fd;
          if (iVar3 == 0) goto LAB_001009bb;
LAB_001009e2:
          uVar5 = quotearg_n_style_colon(0,3,__s1);
          error(0,iVar3,&_LC33,uVar5);
          goto LAB_00100a06;
        }
        iVar3 = rpl_fclose(pFVar8);
        if (iVar3 != 0) {
LAB_001009bb:
          piVar9 = __errno_location();
          iVar3 = *piVar9;
LAB_001008fd:
          if (iVar3 != 0) goto LAB_001009e2;
        }
        (*sum_output_fns[sum_algorithm])(__s1,0,puVar1,false,false,'\n',_optind != argc,length);
      }
      ppcVar11 = ppcVar11 + 1;
    } while (ppcVar11 < ppcVar10);
  }
  else {
    local_59 = 1;
  }
  if ((have_read_stdin == false) || (iVar3 = rpl_fclose(_stdin), iVar3 != -1)) {
    if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return (int)(local_59 ^ 1);
  }
  uVar5 = dcgettext(0,"standard input",5);
  piVar9 = __errno_location();
  iVar3 = error(1,*piVar9,uVar5);
LAB_00100a89:
  if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
    usage(0);
  }
LAB_00100a97:
                    /* WARNING: Subroutine does not return */
  usage(1);
}


