
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("kill",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint __sig;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  char **ppcVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  char *endp;
  char signame [19];
  
  bVar2 = false;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  iVar11 = -1;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  bVar3 = false;
LAB_00100ad0:
  iVar4 = getopt_long(argc,argv,
                      "0::1::2::3::4::5::6::7::8::9::A::B::C::D::E::F::G::H::I::J::K::M::N::O::P::Q::R::S::T::U::V::W::X::Y::Z::Lln:s:t"
                      ,long_options,0);
  if (iVar4 != -1) {
    if (0x74 < iVar4) goto switchD_00100b11_caseD_3a;
    if (iVar4 < 0x30) {
      if (iVar4 == -0x83) {
        uVar8 = proper_name_lite("Paul Eggert","Paul Eggert");
        version_etc(_stdout,&_LC1,"GNU coreutils",_Version,uVar8,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00100b11_caseD_3a;
    }
    switch(iVar4) {
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
      if (_optind != 2) {
        _optind = _optind + -1;
        goto LAB_00100b85;
      }
      break;
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
      break;
    case 0x4c:
    case 0x74:
      bVar3 = true;
    case 0x6c:
      if (!bVar2) {
        bVar2 = true;
        goto LAB_00100ad0;
      }
      pcVar12 = "multiple -l or -t options specified";
      goto LAB_00100ff4;
    case 0x6e:
    case 0x73:
      goto LAB_00100b4f;
    }
    lVar7 = (long)_optind;
    if (_optarg == (char *)0x0) {
      pcVar12 = argv[lVar7 + -1];
      sVar9 = strlen(pcVar12);
      _optarg = pcVar12 + sVar9;
    }
    pcVar12 = argv[lVar7 + -1];
    if (_optarg != pcVar12 + 2) {
      uVar8 = dcgettext(0,"invalid option -- %c",5);
      error(0,0,uVar8,iVar4);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    _optarg = pcVar12 + 1;
LAB_00100b4f:
    if (-1 < iVar11) {
      uVar8 = quote(_optarg);
      uVar10 = dcgettext(0,"%s: multiple signals specified",5);
      error(0,0,uVar10,uVar8);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    iVar11 = operand2sig();
    if (iVar11 < 0) {
switchD_00100b11_caseD_3a:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    goto LAB_00100ad0;
  }
LAB_00100b85:
  if (-1 < iVar11) {
    pcVar12 = "cannot combine signal with -l or -t";
    if (!bVar2) goto LAB_00100ba9;
    goto LAB_00100ff4;
  }
  if (bVar2) {
    ppcVar14 = (char **)0x0;
    if (_optind < argc) {
      ppcVar14 = argv + _optind;
    }
    if (bVar3) {
      iVar11 = 0;
      iVar4 = 0;
      do {
        iVar5 = sig2str(iVar4,signame);
        if (iVar5 == 0) {
          sVar9 = strlen(signame);
          if ((long)iVar11 < (long)sVar9) {
            iVar11 = (int)sVar9;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x41);
      iVar4 = 0;
      if (ppcVar14 != (char **)0x0) {
        for (; *ppcVar14 != (char *)0x0; ppcVar14 = ppcVar14 + 1) {
          __sig = operand2sig();
          uVar15 = (ulong)__sig;
          if ((int)__sig < 0) {
            iVar4 = 1;
          }
          else {
            iVar5 = sig2str(__sig,signame);
            if (iVar5 != 0) {
              __snprintf_chk(signame,0x13,2,0x13,"SIG%d",uVar15);
            }
            uVar13 = uVar15;
            pcVar12 = strsignal(__sig);
            if (pcVar12 == (char *)0x0) {
              pcVar12 = "?";
            }
            __printf_chk(2,"%*d %-*s %s\n",2,uVar15,iVar11,signame,pcVar12,uVar13);
          }
        }
        goto LAB_00100d3c;
      }
      iVar4 = 0;
      do {
        iVar5 = sig2str(iVar4,signame);
        if (iVar5 == 0) {
          pcVar12 = strsignal(iVar4);
          if (pcVar12 == (char *)0x0) {
            pcVar12 = "?";
          }
          __printf_chk(2,"%*d %-*s %s\n",2,iVar4,iVar11,signame,pcVar12,extraout_RDX);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x41);
    }
    else {
      iVar4 = 0;
      if (ppcVar14 != (char **)0x0) goto LAB_00100dc9;
      iVar11 = 0;
      do {
        iVar4 = sig2str(iVar11,signame);
        if (iVar4 == 0) {
          puts(signame);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x41);
    }
    iVar4 = 0;
    goto LAB_00100d3c;
  }
  iVar11 = 0xf;
LAB_00100ba9:
  pcVar12 = "no process ID specified";
  if (_optind < argc) {
    ppcVar14 = argv + _optind;
    iVar4 = 0;
    piVar6 = __errno_location();
    pcVar12 = *ppcVar14;
    goto LAB_00100c10;
  }
LAB_00100ff4:
  uVar8 = dcgettext(0,pcVar12,5);
  error(0,0,uVar8);
  goto switchD_00100b11_caseD_3a;
LAB_00100dc9:
  if (*ppcVar14 == (char *)0x0) goto LAB_00100d3c;
  iVar11 = operand2sig();
  if (iVar11 < 0) {
    iVar4 = 1;
  }
  else {
    if ((int)**ppcVar14 - 0x30U < 10) {
      iVar5 = sig2str(iVar11,signame);
      if (iVar5 == 0) {
        puts(signame);
        goto LAB_00100dc5;
      }
    }
    __printf_chk(2,&_LC38,iVar11);
  }
LAB_00100dc5:
  ppcVar14 = ppcVar14 + 1;
  goto LAB_00100dc9;
LAB_00100c10:
  *piVar6 = 0;
  lVar7 = __isoc23_strtoimax(pcVar12,&endp,10);
  if ((((*piVar6 == 0x22) || (lVar7 != (int)lVar7)) || (pcVar12 == endp)) || (*endp != '\0')) {
    uVar8 = quote(pcVar12);
    uVar10 = dcgettext(0,"%s: invalid process id",5);
    error(0,0,uVar10,uVar8);
LAB_00100bf8:
    iVar4 = 1;
  }
  else {
    iVar5 = kill((int)lVar7,iVar11);
    if (iVar5 != 0) {
      if (*piVar6 == 0x16) {
        error(0,0x16,&_LC40,iVar11);
      }
      else {
        uVar8 = quote(pcVar12);
        error(0,*piVar6,&_LC41,uVar8);
      }
      goto LAB_00100bf8;
    }
  }
  pcVar12 = ppcVar14[1];
  ppcVar14 = ppcVar14 + 1;
  if (pcVar12 == (char *)0x0) {
LAB_00100d3c:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar4;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00100c10;
}


