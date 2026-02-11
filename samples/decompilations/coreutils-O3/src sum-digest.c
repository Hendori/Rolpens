
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined *puVar7;
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
  
  uVar4 = _program_name;
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
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
    iVar2 = strcmp("sum",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar5 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,char *param_2)

{
  char *pcVar1;
  FILE *__stream;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char *unaff_R14;
  char *unaff_R15;
  long in_FS_OFFSET;
  undefined8 *local_68;
  int local_60;
  byte local_59;
  undefined8 local_50;
  undefined1 local_44 [4];
  long local_40;
  
  puVar9 = long_options;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  setvbuf(_stdout,(char *)0x0,1,0);
  while( true ) {
    while( true ) {
      iVar2 = getopt_long(param_1,param_2,&_LC30,long_options,0);
      if (iVar2 == -1) {
        pcVar1 = param_2 + (long)param_1 * 8;
        lVar6 = (long)_optind;
        pcVar8 = pcVar1;
        if (_optind == param_1) {
          pcVar8 = pcVar1 + 8;
          *(undefined **)pcVar1 = &_LC31;
        }
        unaff_R15 = param_2 + lVar6 * 8;
        if (pcVar8 <= unaff_R15) {
          local_59 = 1;
          goto LAB_00100a15;
        }
        local_68 = &local_50;
        local_59 = 1;
        puVar9 = local_44;
        local_60 = param_1;
        goto LAB_0010094b;
      }
      if (iVar2 != 0x72) break;
      sum_algorithm = 0;
    }
    if (iVar2 < 0x73) {
      if (iVar2 != -0x83) goto LAB_00100a89;
      uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar5 = proper_name_lite("Kayvan Aghaiepour","Kayvan Aghaiepour");
      version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    pcVar8 = unaff_R14;
    if (iVar2 != 0x73) break;
    sum_algorithm = 1;
  }
LAB_00100a97:
  usage(1);
LAB_00100aa1:
  param_2 = (char *)quotearg_n_style_colon(0,3,param_2);
  piVar7 = __errno_location();
  error(0,*piVar7,&_LC33,param_2);
  do {
    local_59 = 0;
LAB_0010093e:
    unaff_R15 = unaff_R15 + 8;
    unaff_R14 = pcVar8;
    if (pcVar8 <= unaff_R15) break;
LAB_0010094b:
    param_2 = *(char **)unaff_R15;
    iVar2 = strcmp(param_2,"-");
    __stream = _stdin;
    if (iVar2 == 0) {
      have_read_stdin = '\x01';
      fadvise(_stdin,2);
      iVar2 = (**(code **)(sumfns + (ulong)sum_algorithm * 8))(__stream,puVar9,local_68);
      if (iVar2 != 0) {
        piVar7 = __errno_location();
        iVar2 = *piVar7;
      }
      clearerr_unlocked(__stream);
LAB_001008fd:
      if (iVar2 != 0) goto LAB_001009e2;
LAB_00100905:
      (**(code **)(sum_output_fns + (ulong)sum_algorithm * 8))
                (param_2,0,puVar9,0,0,10,_optind != local_60,local_50);
      goto LAB_0010093e;
    }
    lVar6 = fopen_safer(param_2,&_LC32);
    if (lVar6 == 0) goto LAB_00100aa1;
    fadvise(lVar6,2);
    iVar2 = (**(code **)(sumfns + (ulong)sum_algorithm * 8))(lVar6,puVar9,local_68);
    if (iVar2 == 0) {
      iVar2 = rpl_fclose(lVar6);
      if (iVar2 != 0) goto LAB_001009bb;
      goto LAB_00100905;
    }
    piVar7 = __errno_location();
    iVar2 = *piVar7;
    iVar3 = rpl_fclose(lVar6);
    if (iVar3 == 0) goto LAB_001008fd;
    if (iVar2 == 0) {
LAB_001009bb:
      piVar7 = __errno_location();
      iVar2 = *piVar7;
      goto LAB_001008fd;
    }
LAB_001009e2:
    uVar4 = quotearg_n_style_colon(0,3,param_2);
    error(0,iVar2,&_LC33,uVar4);
  } while( true );
LAB_00100a15:
  if ((have_read_stdin == '\0') || (iVar2 = rpl_fclose(_stdin), iVar2 != -1)) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return local_59 ^ 1;
  }
  uVar4 = dcgettext(0,"standard input",5);
  piVar7 = __errno_location();
  iVar2 = error(1,*piVar7,uVar4);
LAB_00100a89:
  pcVar8 = unaff_R14;
  if (iVar2 == -0x82) {
    usage(0);
  }
  goto LAB_00100a97;
}


