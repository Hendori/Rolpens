
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
  uVar3 = dcgettext(0,
                    "Usage: %s [-s SIGNAL | -SIGNAL] PID...\n  or:  %s -l [SIGNAL]...\n  or:  %s -t [SIGNAL]...\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Send signals to processes, or list signals.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s, --signal=SIGNAL, -SIGNAL\n                   specify the name or number of the signal to be sent\n  -l, --list       list signal names, or convert signal names to/from numbers\n  -t, --table      print a table of signal information\n"
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
                             "\nSIGNAL may be a signal name like \'HUP\', or a signal number like \'1\',\nor the exit status of a process terminated by a signal.\nPID is an integer; if negative it identifies a process group.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC1);
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
    iVar2 = strcmp("kill",pcVar4);
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
    if (pcVar4 != (char *)0x0) goto LAB_001002b5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC1);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001002b5:
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

undefined8 main(uint param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 extraout_RDX;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  uint *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long in_FS_OFFSET;
  char *local_60;
  char local_58 [24];
  long local_40;
  
  bVar1 = false;
  puVar16 = long_options;
  puVar14 = &switchD_00100b11::switchdataD_00101060;
  pcVar13 = (char *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  uVar11 = 0xffffffff;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  bVar2 = false;
  do {
    iVar4 = (int)uVar11;
    uVar3 = getopt_long(pcVar13,param_2,
                        "0::1::2::3::4::5::6::7::8::9::A::B::C::D::E::F::G::H::I::J::K::M::N::O::P::Q::R::S::T::U::V::W::X::Y::Z::Lln:s:t"
                        ,long_options,0);
    uVar10 = (ulong)uVar3;
    if (uVar3 == 0xffffffff) goto LAB_00100b85;
    if (0x74 < (int)uVar3) break;
    if ((int)uVar3 < 0x30) {
      if (uVar3 == 0xffffff7d) {
        uVar17 = proper_name_lite("Paul Eggert","Paul Eggert");
        version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar17,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (uVar3 != 0xffffff7e) break;
      usage(0);
      goto LAB_00100f7e;
    }
    switch(uVar3) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
switchD_00100b11_caseD_30:
      iVar4 = (int)uVar11;
      if (_optind == 2) {
LAB_00100b1f:
        lVar7 = (long)_optind;
        if (_optarg == (char *)0x0) {
          pcVar12 = *(char **)(param_2 + lVar7 * 8 + -8);
          sVar8 = strlen(pcVar12);
          uVar10 = uVar10 & 0xffffffff;
          _optarg = pcVar12 + sVar8;
        }
        lVar7 = *(long *)(param_2 + lVar7 * 8 + -8);
        if (_optarg != (char *)(lVar7 + 2)) {
          uVar17 = dcgettext(0,"invalid option -- %c",5);
          error(0,0,uVar17,uVar10 & 0xffffffff);
          usage(1);
          goto LAB_00101041;
        }
        _optarg = (char *)(lVar7 + 1);
LAB_00100b4f:
        if (-1 < iVar4) {
          uVar11 = quote(_optarg);
          uVar17 = dcgettext(0,"%s: multiple signals specified",5);
          uVar10 = uVar11;
          error(0,0,uVar17);
          usage(1);
LAB_00100fe8:
          pcVar12 = "multiple -l or -t options specified";
          goto LAB_00100ff4;
        }
        uVar3 = operand2sig();
        uVar11 = (ulong)uVar3;
        if ((int)uVar3 < 0) goto switchD_00100b11_caseD_3a;
        break;
      }
      _optind = _optind + -1;
LAB_00100b85:
      if (-1 < (int)uVar11) {
        pcVar12 = "cannot combine signal with -l or -t";
        if (!bVar1) goto LAB_00100ba9;
LAB_00100ff4:
        uVar17 = dcgettext(0,pcVar12,5);
        error(0,0,uVar17);
        goto switchD_00100b11_caseD_3a;
      }
      if (!bVar1) {
        uVar11 = 0xf;
LAB_00100ba9:
        pcVar12 = "no process ID specified";
        if ((int)param_1 <= _optind) goto LAB_00100ff4;
        pcVar13 = param_2 + (long)_optind * 8;
        uVar17 = 0;
        puVar16 = (undefined1 *)&local_60;
        puVar14 = (uint *)__errno_location();
        param_2 = *(char **)pcVar13;
        goto LAB_00100c10;
      }
      plVar15 = (long *)0x0;
      if (_optind < (int)param_1) {
        plVar15 = (long *)(param_2 + (long)_optind * 8);
      }
      if (!bVar2) {
        uVar17 = 0;
        if (plVar15 == (long *)0x0) {
          iVar4 = 0;
          do {
            iVar6 = sig2str(iVar4,local_58);
            if (iVar6 == 0) {
              puts(local_58);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 0x41);
LAB_00100d39:
          uVar17 = 0;
          goto LAB_00100d3c;
        }
        goto LAB_00100dc9;
      }
      iVar4 = 0;
      iVar6 = 0;
      do {
        iVar5 = sig2str(iVar6,local_58);
        if (iVar5 == 0) {
          sVar8 = strlen(local_58);
          if ((long)iVar4 < (long)sVar8) {
            iVar4 = (int)sVar8;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x41);
      uVar17 = 0;
      if (plVar15 == (long *)0x0) {
        iVar6 = 0;
        do {
          iVar5 = sig2str(iVar6,local_58);
          if (iVar5 == 0) {
            pcVar13 = strsignal(iVar6);
            if (pcVar13 == (char *)0x0) {
              pcVar13 = "?";
            }
            __printf_chk(2,"%*d %-*s %s\n",2,iVar6,iVar4,local_58,pcVar13,extraout_RDX);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x41);
        goto LAB_00100d39;
      }
      for (; *plVar15 != 0; plVar15 = plVar15 + 1) {
        uVar3 = operand2sig();
        uVar11 = (ulong)uVar3;
        if ((int)uVar3 < 0) {
          uVar17 = 1;
        }
        else {
          iVar6 = sig2str(uVar3,local_58);
          if (iVar6 != 0) {
            __snprintf_chk(local_58,0x13,2,0x13,"SIG%d",uVar11);
          }
          uVar10 = uVar11;
          pcVar13 = strsignal(uVar3);
          if (pcVar13 == (char *)0x0) {
            pcVar13 = "?";
          }
          __printf_chk(2,"%*d %-*s %s\n",2,uVar11,iVar4,local_58,pcVar13,uVar10);
        }
      }
      goto LAB_00100d3c;
    default:
      goto switchD_00100b11_caseD_3a;
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      goto LAB_00100b1f;
    case 0x4c:
    case 0x74:
      bVar2 = true;
    case 0x6c:
      if (bVar1) goto LAB_00100fe8;
      bVar1 = true;
      break;
    case 0x6e:
    case 0x73:
      goto LAB_00100b4f;
    }
  } while( true );
switchD_00100b11_caseD_3a:
  usage();
  goto switchD_00100b11_caseD_30;
LAB_00100dc9:
  if (*plVar15 == 0) goto LAB_00100d3c;
  iVar4 = operand2sig();
  if (iVar4 < 0) {
    uVar17 = 1;
  }
  else {
    if ((int)*(char *)*plVar15 - 0x30U < 10) {
      iVar6 = sig2str(iVar4,local_58);
      if (iVar6 == 0) {
        puts(local_58);
        goto LAB_00100dc5;
      }
    }
    __printf_chk(2,&_LC38,iVar4);
  }
LAB_00100dc5:
  plVar15 = plVar15 + 1;
  goto LAB_00100dc9;
LAB_00100c10:
  do {
    *puVar14 = 0;
    lVar7 = __isoc23_strtoimax(param_2,puVar16,10);
    if ((((*puVar14 == 0x22) || (lVar7 != (int)lVar7)) || (param_2 == local_60)) ||
       (*local_60 != '\0')) {
LAB_00100f7e:
      uVar17 = quote(param_2);
      uVar9 = dcgettext(0,"%s: invalid process id",5);
      error(0,0,uVar9,uVar17);
LAB_00100bf8:
      uVar17 = 1;
    }
    else {
      iVar4 = kill((int)lVar7,(int)uVar11);
      if (iVar4 != 0) {
        if (*puVar14 == 0x16) {
          error(0,0x16,&_LC40,uVar11 & 0xffffffff);
        }
        else {
          uVar17 = quote(param_2);
          error(0,*puVar14,&_LC41,uVar17);
        }
        goto LAB_00100bf8;
      }
    }
    param_2 = *(char **)(pcVar13 + 8);
    pcVar13 = pcVar13 + 8;
  } while (param_2 != (char *)0x0);
LAB_00100d3c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
LAB_00101041:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


