
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
  uVar3 = dcgettext(0,
                    "Usage: %s NUMBER[SUFFIX]...\n  or:  %s OPTION\nPause for NUMBER seconds, where NUMBER is an integer or floating-point.\nSUFFIX may be \'s\',\'m\',\'h\', or \'d\', for seconds, minutes, hours, days.\nWith multiple arguments, pause for the sum of their values.\n\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5);
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
    iVar2 = strcmp("sleep",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "sleep";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001001f5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","sleep");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001001f5:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","sleep");
    if (pcVar4 == "sleep") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  double extraout_XMM0_Qa;
  double dVar11;
  undefined8 extraout_XMM0_Qb;
  double dVar12;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar7 = proper_name_lite("Paul Eggert","Paul Eggert");
  uVar8 = proper_name_lite("Jim Meyering","Jim Meyering");
  parse_gnu_standard_options_only
            (param_1,param_2,"sleep","GNU coreutils",_Version,1,0x100000,uVar8,uVar7,0);
  iVar6 = _optind;
  if (param_1 == 1) {
LAB_00100971:
    uVar7 = dcgettext(0,"missing operand",5);
    error(0,0,uVar7);
    usage(1);
  }
  else {
    if (_optind < param_1) {
      piVar9 = __errno_location();
      dVar12 = 0.0;
      bVar3 = true;
      puVar10 = param_2 + iVar6;
      do {
        *piVar9 = 0;
        uVar7 = cl_strtod(*puVar10,&local_38);
        if (*piVar9 == 0x22) {
          uVar5 = (undefined4)CONCAT71((int7)((ulong)uVar7 >> 8),!NAN(extraout_XMM0_Qa));
          if (extraout_XMM0_Qa != 0.0) {
            uVar5 = 0;
          }
          if ((char)uVar5 == '\0') goto LAB_0010086c;
          auVar2._8_8_ = extraout_XMM0_Qb;
          auVar2._0_8_ = extraout_XMM0_Qa;
          uVar4 = movmskpd(uVar5,auVar2);
          dVar11 = _LC25;
          if (((uVar4 & 1) == 0) && (dVar11 = _LC24, local_38 != (char *)*puVar10))
          goto LAB_001007c5;
LAB_001008d0:
          uVar7 = quote();
          uVar8 = dcgettext(0,"invalid time interval %s",5);
          bVar3 = false;
          error(0,0,uVar8,uVar7);
        }
        else {
LAB_0010086c:
          dVar11 = _LC30 * extraout_XMM0_Qa + extraout_XMM0_Qa;
          if (((char *)*puVar10 == local_38) || (dVar11 < 0.0)) goto LAB_001008d0;
LAB_001007c5:
          cVar1 = *local_38;
          if (cVar1 != '\0') {
            if (local_38[1] != '\0') goto LAB_001008d0;
            if (cVar1 == 'h') {
              dVar11 = dVar11 * __LC32;
            }
            else if (cVar1 < 'i') {
              if (cVar1 != 'd') goto LAB_001008d0;
              dVar11 = dVar11 * __LC33;
            }
            else if (cVar1 == 'm') {
              dVar11 = dVar11 * __LC31;
            }
            else if (cVar1 != 's') goto LAB_001008d0;
          }
          dVar11 = dVar11 + _LC30 * dVar11;
        }
        puVar10 = puVar10 + 1;
        dVar12 = _LC30 * (dVar11 + dVar12) + dVar11 + dVar12;
      } while (param_2 + (ulong)(uint)(param_1 - iVar6) + (long)iVar6 != puVar10);
      if (!bVar3) {
        usage(1);
        goto LAB_00100971;
      }
    }
    else {
      dVar12 = 0.0;
    }
    iVar6 = xnanosleep(dVar12);
    if (iVar6 != 0) {
      uVar7 = dcgettext(0,"cannot read realtime clock",5);
      piVar9 = __errno_location();
      error(1,*piVar9,uVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


