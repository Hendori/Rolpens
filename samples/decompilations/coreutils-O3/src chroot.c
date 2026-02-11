
int parse_additional_groups(undefined8 param_1,undefined8 *param_2,long *param_3,char param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *__s;
  byte *__name;
  group *pgVar5;
  ushort **ppuVar6;
  byte *pbVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  __s = (char *)xstrdup();
  __name = (byte *)strtok(__s,",");
  pbVar7 = __name;
  if (__name != (byte *)0x0) {
    lVar11 = 0;
    pbVar7 = (byte *)0x0;
    iVar3 = 0;
    do {
      iVar4 = xstrtoumax(__name,0,10,&local_48,&_LC1);
      if ((iVar4 == 0) && (local_48 < 0x100000000)) {
        ppuVar6 = __ctype_b_loc();
        bVar1 = *__name;
        bVar2 = *(byte *)((long)*ppuVar6 + (ulong)bVar1 * 2 + 1);
        while ((bVar2 & 0x20) != 0) {
          bVar1 = __name[1];
          __name = __name + 1;
          bVar2 = *(byte *)((long)*ppuVar6 + (ulong)bVar1 * 2 + 1);
        }
        if ((bVar1 != 0x2b) && (pgVar5 = getgrnam((char *)__name), pgVar5 != (group *)0x0)) {
LAB_001000b6:
          local_48 = (ulong)pgVar5->gr_gid;
        }
        if (local_50 == lVar11) {
          pbVar7 = (byte *)xpalloc(pbVar7,&local_50,1,0xffffffffffffffff,4);
        }
        *(int *)(pbVar7 + lVar11 * 4) = (int)local_48;
        lVar11 = lVar11 + 1;
      }
      else {
        pgVar5 = getgrnam((char *)__name);
        if (pgVar5 != (group *)0x0) goto LAB_001000b6;
        if (param_4 == '\0') goto LAB_0010014b;
        uVar9 = quote();
        uVar10 = dcgettext(0,"invalid group %s",5);
        piVar8 = __errno_location();
        error(0,*piVar8,uVar10,uVar9);
        iVar3 = -1;
      }
      __name = (byte *)strtok((char *)0x0,",");
    } while (__name != (byte *)0x0);
    if ((iVar3 != 0) || (lVar11 != 0)) {
      *param_2 = pbVar7;
      if (iVar3 == 0) {
        *param_3 = lVar11;
      }
      goto LAB_0010010d;
    }
  }
  if (param_4 != '\0') {
    uVar9 = quote(param_1);
    uVar10 = dcgettext(0,"invalid group list %s",5);
    error(0,0,uVar10,uVar9);
  }
LAB_0010014b:
  iVar3 = -1;
  *param_2 = pbVar7;
LAB_0010010d:
  free(__s);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
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
    goto LAB_001002ba;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION] NEWROOT [COMMAND [ARG]...]\n  or:  %s OPTION\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Run COMMAND with root directory set to NEWROOT.\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --groups=G_LIST        specify supplementary groups as g1,g2,..,gN\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --userspec=USER:GROUP  specify user and group (ID or name) to use\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = quotearg_style(4,&_LC13);
  uVar3 = dcgettext(0,"      --skip-chdir           do not change working directory to %s\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nIf no command is given, run \'\"$SHELL\" -i\' (default: \'/bin/sh -i\').\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nExit status:\n  125  if the %s command itself fails\n  126  if COMMAND is found but cannot be invoked\n  127  if COMMAND cannot be found\n  -    the exit status of COMMAND otherwise\n"
                    ,5);
  __printf_chk(2,uVar5,"chroot");
  pcVar4 = "[";
  local_a8 = &_LC4;
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
    iVar2 = strcmp("chroot",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "chroot";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010054d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","chroot");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010054d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","chroot");
    if (pcVar4 == "chroot") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001002ba:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char main(ulong param_1,char **param_2)

{
  bool bVar1;
  char *pcVar2;
  __gid_t *p_Var3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  passwd *ppVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  __gid_t *__groups;
  char *pcVar11;
  __uid_t __uid;
  char cVar12;
  char *__name;
  undefined4 uVar13;
  char *pcVar14;
  char *pcVar15;
  long in_FS_OFFSET;
  passwd *local_78;
  __uid_t local_60;
  __gid_t local_5c;
  __gid_t *local_58;
  size_t local_50;
  __gid_t *local_48;
  long local_40;
  
  __groups = (__gid_t *)(param_1 & 0xffffffff);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0xffffffff;
  local_5c = 0xffffffff;
  local_58 = (__gid_t *)0x0;
  local_50 = 0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  __name = "+";
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
  bVar1 = false;
  pcVar14 = (char *)0x0;
  pcVar11 = (char *)0x0;
  while( true ) {
    pcVar15 = pcVar11;
    iVar4 = getopt_long(param_1 & 0xffffffff,param_2,&_LC36);
    pcVar2 = _optarg;
    if (iVar4 == -1) break;
    pcVar11 = _optarg;
    if (iVar4 != 0x100) {
      if (iVar4 < 0x101) {
        if (iVar4 == -0x83) {
          uVar9 = proper_name_lite("Roland McGrath","Roland McGrath");
          version_etc(_stdout,"chroot","GNU coreutils",_Version,uVar9,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar4 != -0x82) goto LAB_00101309;
        usage(0);
        goto LAB_001012e8;
      }
      pcVar11 = pcVar15;
      if (iVar4 == 0x101) {
        sVar5 = strlen(_optarg);
        pcVar14 = pcVar2;
        if ((sVar5 != 0) && (pcVar2[sVar5 - 1] == ':')) {
          pcVar2[sVar5 - 1] = '\0';
        }
      }
      else {
        if (iVar4 != 0x102) goto LAB_00101309;
        bVar1 = true;
      }
    }
  }
  if (_optind < (int)param_1) {
    __name = param_2[_optind];
    pcVar11 = canonicalize_file_name(__name);
    if (pcVar11 != (char *)0x0) {
      iVar4 = strcmp("/",pcVar11);
      free(pcVar11);
      if (iVar4 == 0) goto LAB_00100f19;
      if (!bVar1) {
        if (iVar4 == 0) goto LAB_00100f19;
        goto LAB_00100ea3;
      }
      goto LAB_0010132a;
    }
  }
  else {
LAB_001012e8:
    uVar9 = dcgettext(0,"missing operand",5);
    error(0,0,uVar9);
LAB_00101309:
    usage(0x7d);
  }
  if (!bVar1) {
LAB_00100ea3:
    if (pcVar14 != (char *)0x0) {
      parse_user_spec(pcVar14,&local_60,&local_5c);
    }
    if (local_60 == 0xffffffff) {
      local_78 = (passwd *)0x0;
      goto LAB_00101161;
    }
    if (pcVar15 == (char *)0x0) {
      local_78 = getpwuid(local_60);
      if (local_78 != (passwd *)0x0) goto LAB_0010128c;
      local_78 = (passwd *)0x0;
      if (local_5c == 0xffffffff) goto LAB_00100f21;
      goto LAB_00100f19;
    }
    __uid = local_60;
    if (local_5c == 0xffffffff) goto LAB_00101279;
    goto LAB_00100edc;
  }
LAB_0010132a:
  uVar9 = quotearg_style(4,&_LC13);
  uVar10 = dcgettext(0,"option --skip-chdir only permitted if NEWROOT is old %s",5);
  error(0,0,uVar10,uVar9);
  usage(0x7d);
LAB_0010136a:
  __groups = (__gid_t *)quotearg_style(4,__name);
  pcVar11 = "cannot change root directory to %s";
  do {
    param_2 = (char **)dcgettext(0,pcVar11,5);
    piVar8 = __errno_location();
    __uid = 0x7d;
    error(0x7d,*piVar8,param_2);
LAB_00101279:
    local_78 = getpwuid(__uid);
    if (local_78 == (passwd *)0x0) {
LAB_00100edc:
      local_78 = (passwd *)0x0;
LAB_00100ee3:
      if (*pcVar15 != '\0') {
        parse_additional_groups(pcVar15,&local_58,&local_50);
      }
    }
    else {
LAB_0010128c:
      if (local_5c == 0xffffffff) {
        local_5c = local_78->pw_gid;
      }
      local_78 = (passwd *)local_78->pw_name;
LAB_00101161:
      if (pcVar15 != (char *)0x0) goto LAB_00100ee3;
      if (local_5c != 0xffffffff) {
        if (local_78 == (passwd *)0x0) {
LAB_00100f19:
          local_78 = (passwd *)0x0;
        }
        else {
          iVar4 = xgetgroups(local_78,local_5c,&local_58);
          if (0 < iVar4) {
            local_50 = (size_t)iVar4;
          }
        }
      }
    }
LAB_00100f21:
    iVar4 = chroot(__name);
    if (iVar4 != 0) goto LAB_0010136a;
    uVar13 = 0;
    if (!bVar1) goto LAB_001011dc;
LAB_00100f3f:
    if (_optind + 1 == (int)__groups) {
      pcVar11 = getenv("SHELL");
      if (pcVar11 == (char *)0x0) {
        pcVar11 = "/bin/sh";
      }
      *param_2 = pcVar11;
      param_2[1] = "-i";
      param_2[2] = (char *)0x0;
    }
    else {
      param_2 = param_2 + (long)_optind + 1;
    }
    if ((pcVar14 != (char *)0x0) &&
       (lVar6 = parse_user_spec_warn(pcVar14,&local_60,&local_5c,0,0,&local_48), lVar6 != 0)) {
      if ((char)local_48 == '\0') {
        uVar13 = 0x7d;
      }
      error(uVar13,0,&_LC43);
    }
    if (local_60 == 0xffffffff) {
LAB_001010ca:
      __groups = local_58;
      local_48 = (__gid_t *)0x0;
      if (pcVar15 != (char *)0x0) goto LAB_00100fcd;
      if ((local_78 == (passwd *)0x0) || (local_5c == 0xffffffff)) {
LAB_00101110:
        if (local_60 != 0xffffffff) goto LAB_00100fdc;
        goto LAB_00100ff8;
      }
      iVar4 = xgetgroups(local_78,local_5c,&local_48);
      if (0 < iVar4) {
        local_50 = (size_t)iVar4;
        __groups = local_48;
        goto LAB_00101110;
      }
      pcVar11 = "failed to get supplemental groups";
      if (local_50 != 0) goto LAB_00101110;
LAB_001011bc:
      do {
        param_2 = (char **)dcgettext(0,pcVar11,5);
        piVar8 = __errno_location();
        error(0x7d,*piVar8,param_2);
LAB_001011dc:
        iVar4 = chdir("/");
        pcVar11 = "cannot chdir to root directory";
      } while (iVar4 != 0);
      goto LAB_00100f3f;
    }
    if ((pcVar15 != (char *)0x0) && (local_5c != 0xffffffff)) {
LAB_00100fcd:
      p_Var3 = local_58;
      local_48 = (__gid_t *)0x0;
      __groups = p_Var3;
      if (((*pcVar15 != '\0') &&
          (iVar4 = parse_additional_groups(pcVar15,&local_48,&local_50), __groups = local_48,
          iVar4 != 0)) && (__groups = p_Var3, local_50 == 0)) {
        cVar12 = '}';
        goto LAB_00101080;
      }
LAB_00100fdc:
      iVar4 = setgroups(local_50,__groups);
      pcVar11 = "failed to set supplemental groups";
      if (iVar4 == 0) {
LAB_00100ff8:
        free(local_48);
        free(local_58);
        if (local_5c != 0xffffffff) {
          iVar4 = setgid(local_5c);
          pcVar11 = "failed to set group-ID";
          if (iVar4 != 0) goto LAB_001011bc;
        }
        if ((local_60 == 0xffffffff) || (iVar4 = setuid(local_60), iVar4 == 0)) {
          execvp(*param_2,param_2);
          piVar8 = __errno_location();
          iVar4 = *piVar8;
          uVar9 = quote(*param_2);
          cVar12 = (iVar4 == 2) + '~';
          uVar10 = dcgettext(0,"failed to run command %s",5);
          error(0,*piVar8,uVar10,uVar9);
LAB_00101080:
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return cVar12;
        }
        pcVar11 = "failed to set user-ID";
      }
      goto LAB_001011bc;
    }
    ppVar7 = getpwuid(local_60);
    if (ppVar7 != (passwd *)0x0) {
      if (local_5c == 0xffffffff) {
        local_5c = ppVar7->pw_gid;
      }
      local_78 = (passwd *)ppVar7->pw_name;
      goto LAB_001010ca;
    }
    if (local_5c != 0xffffffff) goto LAB_001010ca;
    __groups = (__gid_t *)(ulong)local_60;
    pcVar11 = "no group specified for unknown uid: %ju";
  } while( true );
}


