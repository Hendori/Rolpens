
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_stuff(long param_1)

{
  __uid_t _Var1;
  FILE *__stream;
  byte bVar2;
  int iVar3;
  passwd *ppVar4;
  group *pgVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  char cVar9;
  long lVar10;
  __gid_t _Var11;
  long in_FS_OFFSET;
  void *local_38;
  long local_30;
  
  _Var1 = ruid;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (just_user == '\0') {
    if (just_group == '\0') {
      if (just_group_list == '\0') {
        uVar8 = dcgettext(0,"uid=%ju",5);
        __printf_chk(2,uVar8,_Var1);
        ppVar4 = getpwuid(ruid);
        if (ppVar4 != (passwd *)0x0) {
          __printf_chk(2,&_LC4,ppVar4->pw_name);
        }
        _Var11 = rgid;
        uVar8 = dcgettext(0," gid=%ju",5);
        __printf_chk(2,uVar8,_Var11);
        pgVar5 = getgrgid(rgid);
        if (pgVar5 != (group *)0x0) {
          __printf_chk(2,&_LC4,pgVar5->gr_name);
        }
        _Var1 = euid;
        if (euid == ruid) {
          if (egid != rgid) goto LAB_001002b3;
LAB_001002fe:
          if (param_1 != 0) {
            if (ppVar4 != (passwd *)0x0) goto LAB_00100317;
LAB_00100505:
            _Var11 = 0xffffffff;
            goto LAB_0010031d;
          }
LAB_001003e0:
          iVar3 = xgetgroups(0,egid,&local_38);
          if (iVar3 < 0) {
            uVar8 = dcgettext(0,"failed to get groups for the current process",5);
            piVar7 = __errno_location();
            error(0,*piVar7,uVar8);
            goto LAB_00100420;
          }
        }
        else {
          uVar8 = dcgettext(0," euid=%ju",5);
          __printf_chk(2,uVar8,_Var1);
          ppVar4 = getpwuid(euid);
          if (ppVar4 == (passwd *)0x0) {
            if (rgid != egid) {
LAB_001002b3:
              _Var11 = egid;
              uVar8 = dcgettext(0," egid=%ju",5);
              __printf_chk(2,uVar8,_Var11);
              pgVar5 = getgrgid(egid);
              if (pgVar5 != (group *)0x0) {
                __printf_chk(2,&_LC4,pgVar5->gr_name);
              }
              goto LAB_001002fe;
            }
            if (param_1 != 0) goto LAB_00100505;
            goto LAB_001003e0;
          }
          __printf_chk(2,&_LC4,ppVar4->pw_name);
          if (rgid != egid) goto LAB_001002b3;
          if (param_1 == 0) goto LAB_001003e0;
LAB_00100317:
          _Var11 = ppVar4->pw_gid;
LAB_0010031d:
          iVar3 = xgetgroups(param_1,_Var11,&local_38);
          if (iVar3 < 0) {
            quote(param_1);
            uVar8 = dcgettext(0,"failed to get groups for user %s",5);
            piVar7 = __errno_location();
            error(0,*piVar7,uVar8);
LAB_00100420:
            ok = 0;
            goto LAB_0010006d;
          }
        }
        __stream = _stdout;
        if (iVar3 != 0) {
          pcVar6 = (char *)dcgettext(0," groups=",5);
          lVar10 = 0;
          fputs_unlocked(pcVar6,__stream);
          do {
            if (lVar10 != 0) {
              pcVar6 = _stdout->_IO_write_ptr;
              if (pcVar6 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar6 + 1;
                *pcVar6 = ',';
              }
              else {
                __overflow(_stdout,0x2c);
              }
            }
            __printf_chk(2,&_LC2,*(undefined4 *)((long)local_38 + lVar10 * 4));
            pgVar5 = getgrgid(*(__gid_t *)((long)local_38 + lVar10 * 4));
            if (pgVar5 != (group *)0x0) {
              __printf_chk(2,&_LC4,pgVar5->gr_name);
            }
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < iVar3);
        }
        free(local_38);
      }
      else {
        bVar2 = print_group_list(param_1,ruid,rgid,egid,use_name,(opt_zero ^ 1) << 5);
        ok = ok & bVar2;
      }
    }
    else {
      _Var11 = egid;
      if (use_real != '\0') {
        _Var11 = rgid;
      }
      bVar2 = print_group(_Var11);
      ok = ok & bVar2;
    }
  }
  else {
    if (use_real == '\0') {
      _Var1 = euid;
    }
    if (use_name != '\0') {
      ppVar4 = getpwuid(_Var1);
      if (ppVar4 != (passwd *)0x0) {
        __printf_chk(2,&_LC0,ppVar4->pw_name);
        goto LAB_0010006d;
      }
      uVar8 = dcgettext(0,"cannot find name for user ID %ju",5);
      error(0,0,uVar8);
      ok = 0;
    }
    __printf_chk(2,&_LC2,_Var1);
  }
LAB_0010006d:
  pcVar6 = _stdout->_IO_write_ptr;
  if (opt_zero == 0) {
    cVar9 = '\n';
    iVar3 = 10;
LAB_001000a3:
    if (_stdout->_IO_write_end <= pcVar6) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010035c:
        __overflow(_stdout,iVar3);
        return;
      }
      goto LAB_0010057c;
    }
    _stdout->_IO_write_ptr = pcVar6 + 1;
    *pcVar6 = cVar9;
  }
  else {
    if ((just_group_list == '\0') || (multiple_users == '\0')) {
      cVar9 = '\0';
      iVar3 = 0;
      goto LAB_001000a3;
    }
    if (pcVar6 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar6 + 1;
      *pcVar6 = '\0';
    }
    else {
      __overflow(_stdout,0);
    }
    pcVar6 = _stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= pcVar6) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar3 = 0;
        goto LAB_0010035c;
      }
      goto LAB_0010057c;
    }
    _stdout->_IO_write_ptr = pcVar6 + 1;
    *pcVar6 = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010057c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_a8;
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
    goto LAB_00100619;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [USER]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print user and group information for each specified USER,\nor (when USER omitted) for the current process.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a             ignore, for compatibility with other versions\n  -Z, --context  print only the security context of the process\n  -g, --group    print only the effective group ID\n  -G, --groups   print all group IDs\n  -n, --name     print a name instead of a number, for -u,-g,-G\n  -r, --real     print the real ID instead of the effective ID, with -u,-g,-G\n  -u, --user     print only the effective user ID\n  -z, --zero     delimit entries with NUL characters, not whitespace;\n                   not permitted in default format\n"
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
                             "\nWithout any OPTION, print some useful set of identified information.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC11;
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
    if (((*pcVar4 == 'i') && (pcVar4[1] == 'd')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC12;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010082c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC12);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010082c:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC12);
    if (puVar7 == &_LC12) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00100619:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(uint param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  passwd *ppVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  uVar14 = 0x101634;
  uVar9 = 0x101720;
  uVar10 = (ulong)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
switchD_001011bd_caseD_61:
  iVar2 = getopt_long(param_1,param_2,"agnruzGZ",longopts);
  bVar13 = just_group_list;
  bVar12 = just_group;
  bVar1 = just_user;
  if (iVar2 == -1) {
    uVar9 = (uint)just_group;
    uVar14 = (uint)just_group_list;
    uVar6 = (ulong)_optind;
    uVar10 = (ulong)(int)(param_1 - _optind);
    if (1 < just_user + uVar9 + uVar14) {
      pcVar11 = "cannot print \"only\" of more than one choice";
      goto LAB_0010143b;
    }
    if ((just_user == 0 && just_group == 0) && (just_group_list == 0)) goto LAB_00101453;
    if (uVar10 != 0) goto LAB_001012d5;
    param_2 = __errno_location();
    if (bVar1 == 0) goto LAB_0010149f;
    if (use_real != '\0') goto LAB_00101547;
    *param_2 = 0;
    euid = geteuid();
    if (euid == 0xffffffff) goto LAB_00101535;
    goto LAB_001013de;
  }
  if (0x7a < iVar2) goto switchD_001011bd_caseD_48;
  if (iVar2 < 0x47) {
    if (iVar2 == -0x83) {
      uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar7 = proper_name_lite("Arnold Robbins","Arnold Robbins");
      version_etc(_stdout,&_LC12,"GNU coreutils",_Version,uVar7,uVar5,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar2 == -0x82) {
      usage();
      goto LAB_0010158a;
    }
    goto switchD_001011bd_caseD_48;
  }
  switch(iVar2) {
  case 0x47:
    just_group_list = 1;
    goto switchD_001011bd_caseD_61;
  default:
    break;
  case 0x5a:
    goto switchD_001011bd_caseD_5a;
  case 0x61:
    goto switchD_001011bd_caseD_61;
  case 0x67:
    just_group = 1;
    goto switchD_001011bd_caseD_61;
  case 0x6e:
    use_name = '\x01';
    goto switchD_001011bd_caseD_61;
  case 0x72:
    use_real = '\x01';
    goto switchD_001011bd_caseD_61;
  case 0x75:
    just_user = 1;
    goto switchD_001011bd_caseD_61;
  case 0x7a:
    opt_zero = '\x01';
    goto switchD_001011bd_caseD_61;
  }
switchD_001011bd_caseD_48:
  usage(1);
switchD_001011bd_caseD_5a:
  pcVar11 = "--context (-Z) works only on an SELinux-enabled kernel";
LAB_0010143b:
  do {
    while( true ) {
      uVar5 = dcgettext(0,pcVar11,5);
      uVar6 = error(1,0,uVar5);
LAB_00101453:
      bVar13 = (byte)uVar14;
      bVar12 = (byte)uVar9;
      if ((use_real == '\0') && (use_name == '\0')) break;
      pcVar11 = "printing only names or real IDs requires -u, -g, or -G";
    }
    pcVar11 = "option --zero not permitted in default format";
  } while (opt_zero != '\0');
  if (uVar10 != 0) {
LAB_001012d5:
    iVar2 = (int)uVar6;
    multiple_users = 1 < uVar10;
    while (uVar6 < uVar10 + (long)iVar2) {
      pcVar11 = *(char **)(param_2 + uVar6 * 2);
      local_38 = (char *)0x0;
      if ((*pcVar11 == '\0') || (lVar3 = parse_user_spec(pcVar11,&euid,0,&local_38,0), lVar3 != 0))
      {
LAB_001015bc:
        uVar5 = quote(pcVar11);
        uVar7 = dcgettext(0,"%s: no such user",5);
        piVar8 = __errno_location();
        error(0,*piVar8,uVar7,uVar5);
        ok = 0;
      }
      else {
        if (local_38 == (char *)0x0) {
          ppVar4 = getpwuid(euid);
        }
        else {
          ppVar4 = getpwnam(local_38);
        }
        if (ppVar4 == (passwd *)0x0) goto LAB_001015bc;
        if (local_38 == (char *)0x0) {
          local_38 = (char *)xstrdup(ppVar4->pw_name);
        }
        euid = ppVar4->pw_uid;
        egid = ppVar4->pw_gid;
        rgid = egid;
        ruid = euid;
        print_stuff(local_38);
      }
      free(local_38);
      _optind = _optind + 1;
      uVar6 = (ulong)_optind;
    }
    goto LAB_001013e5;
  }
  getenv("POSIXLY_CORRECT");
  param_2 = __errno_location();
LAB_0010149f:
  if (bVar12 == 0) {
    if (bVar13 == 0) {
LAB_0010158a:
      *param_2 = 0;
      euid = geteuid();
      if ((euid == 0xffffffff) && (*param_2 != 0)) goto LAB_001015ab;
    }
    *param_2 = 0;
    ruid = getuid();
    if ((ruid == 0xffffffff) && (*param_2 != 0)) goto LAB_0010156a;
  }
  *param_2 = 0;
  egid = getegid();
  if ((egid == 0xffffffff) && (pcVar11 = "cannot get effective GID", *param_2 != 0)) {
LAB_0010151d:
    while( true ) {
      while( true ) {
        uVar5 = dcgettext(0,pcVar11,5);
        error(1,*param_2,uVar5);
LAB_00101535:
        if (*param_2 == 0) break;
LAB_001015ab:
        pcVar11 = "cannot get effective UID";
      }
      if (use_real == '\0') break;
LAB_00101547:
      *param_2 = 0;
      ruid = getuid();
      if ((ruid != 0xffffffff) || (*param_2 == 0)) break;
LAB_0010156a:
      pcVar11 = "cannot get real UID";
    }
  }
  else {
    *param_2 = 0;
    rgid = getgid();
    if ((rgid == 0xffffffff) && (*param_2 != 0)) {
      pcVar11 = "cannot get real GID";
      goto LAB_0010151d;
    }
  }
LAB_001013de:
  print_stuff(0);
LAB_001013e5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ok ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


