
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
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
  
  uVar5 = _program_name;
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010005a;
  }
  uVar3 = dcgettext(0,"Usage: %s [STRING]...\n  or:  %s OPTION\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Repeatedly output a line with all specified STRING(s), or \'y\'.\n\n",
                             5);
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
    iVar2 = strcmp("yes",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC1;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010021d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010021d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
    if (puVar7 == &_LC1) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined1 *puVar4;
  size_t sVar5;
  void *__src;
  void *pvVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  undefined8 *puVar13;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar2 = proper_name_lite("David MacKenzie","David MacKenzie");
  parse_gnu_standard_options_only(param_1,param_2,&_LC1,"GNU coreutils",_Version,1,0x100000,uVar2,0)
  ;
  puVar9 = param_2 + _optind;
  param_2 = param_2 + param_1;
  puVar13 = param_2;
  if (_optind == param_1) {
    puVar13 = param_2 + 1;
    *param_2 = &_LC26;
  }
  __src = (void *)*puVar9;
  bVar12 = true;
  uVar11 = 0;
  puVar8 = puVar9;
  while( true ) {
    pcVar1 = (char *)*puVar8;
    puVar8 = puVar8 + 1;
    sVar3 = strlen(pcVar1);
    uVar11 = uVar11 + sVar3 + 1;
    if (puVar13 <= puVar8) break;
    if ((char *)*puVar8 != pcVar1 + sVar3 + 1) {
      bVar12 = false;
    }
  }
  if (uVar11 < 0x1001) {
    uVar11 = 0x2000;
  }
  else if (bVar12) goto LAB_00100707;
  bVar12 = false;
  __src = (void *)xmalloc(uVar11);
LAB_00100707:
  sVar3 = 0;
  do {
    pcVar1 = (char *)*puVar9;
    sVar5 = strlen(pcVar1);
    if (!bVar12) {
      memcpy((void *)((long)__src + sVar3),pcVar1,sVar5);
    }
    lVar10 = sVar3 + sVar5;
    puVar9 = puVar9 + 1;
    sVar3 = lVar10 + 1;
    puVar4 = (undefined1 *)(lVar10 + (long)__src);
    *puVar4 = 0x20;
  } while (puVar9 < puVar13);
  *puVar4 = 10;
  lVar10 = uVar11 / sVar3 - 1;
  pvVar6 = __src;
  if (lVar10 != 0) {
    do {
      pvVar6 = memcpy((void *)((long)pvVar6 + sVar3),__src,sVar3);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    sVar3 = sVar3 * (uVar11 / sVar3);
  }
  do {
    sVar5 = full_write(1,__src,sVar3);
  } while (sVar3 == sVar5);
  uVar2 = dcgettext(0,"standard output",5);
  piVar7 = __errno_location();
  error(0,*piVar7,uVar2);
  return 1;
}


