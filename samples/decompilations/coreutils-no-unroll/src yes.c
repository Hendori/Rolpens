
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
  bool bVar2;
  undefined8 uVar3;
  size_t sVar4;
  size_t sVar5;
  void *pvVar6;
  int *piVar7;
  void *__src;
  undefined1 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar3 = proper_name_lite("David MacKenzie","David MacKenzie");
  parse_gnu_standard_options_only(param_1,param_2,&_LC1,"GNU coreutils",_Version,1,0x100000,uVar3,0)
  ;
  plVar13 = param_2 + _optind;
  plVar12 = param_2 + param_1;
  plVar10 = plVar12;
  if (_optind == param_1) {
    plVar10 = plVar12 + 1;
    *plVar12 = (long)&_LC26;
  }
  __src = (void *)*plVar13;
  uVar9 = 0;
  plVar12 = plVar13;
  bVar2 = true;
  while( true ) {
    pcVar1 = (char *)*plVar12;
    plVar12 = plVar12 + 1;
    sVar4 = strlen(pcVar1);
    uVar9 = uVar9 + sVar4 + 1;
    if (plVar10 <= plVar12) break;
    if ((char *)*plVar12 != pcVar1 + sVar4 + 1) {
      bVar2 = false;
    }
  }
  if (uVar9 < 0x1001) {
    uVar9 = 0x2000;
  }
  else if (bVar2) {
    sVar4 = 0;
    do {
      pcVar1 = (char *)*plVar13;
      plVar13 = plVar13 + 1;
      sVar5 = strlen(pcVar1);
      lVar11 = sVar4 + sVar5;
      sVar4 = lVar11 + 1;
      puVar8 = (undefined1 *)(lVar11 + (long)__src);
      *puVar8 = 0x20;
    } while (plVar13 < plVar10);
    goto LAB_0010072f;
  }
  sVar4 = 0;
  __src = (void *)xmalloc(uVar9);
  do {
    pcVar1 = (char *)*plVar13;
    plVar13 = plVar13 + 1;
    sVar5 = strlen(pcVar1);
    memcpy((void *)((long)__src + sVar4),pcVar1,sVar5);
    lVar11 = sVar5 + sVar4;
    sVar4 = lVar11 + 1;
    puVar8 = (undefined1 *)(lVar11 + (long)__src);
    *puVar8 = 0x20;
  } while (plVar13 < plVar10);
LAB_0010072f:
  *puVar8 = 10;
  lVar11 = uVar9 / sVar4 - 1;
  pvVar6 = __src;
  if (lVar11 != 0) {
    do {
      pvVar6 = memcpy((void *)((long)pvVar6 + sVar4),__src,sVar4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    sVar4 = sVar4 * (uVar9 / sVar4);
  }
  do {
    sVar5 = full_write(1,__src,sVar4);
  } while (sVar4 == sVar5);
  uVar3 = dcgettext(0,"standard output",5);
  piVar7 = __errno_location();
  error(0,*piVar7,uVar3);
  return 1;
}


