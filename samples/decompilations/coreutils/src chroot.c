
/* WARNING: Unknown calling convention */

int parse_additional_groups(char *groups,gid_t **pgids,idx_t *pn_gids,_Bool show_errors)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *__s;
  gid_t *__name;
  group *pgVar5;
  ushort **ppuVar6;
  gid_t *pgVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long in_FS_OFFSET;
  idx_t n_gids_allocated;
  uintmax_t value;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  n_gids_allocated = 0;
  __s = (char *)xstrdup();
  __name = (gid_t *)strtok(__s,",");
  pgVar7 = __name;
  if (__name != (gid_t *)0x0) {
    lVar11 = 0;
    pgVar7 = (gid_t *)0x0;
    iVar3 = 0;
    do {
      iVar4 = xstrtoumax(__name,0,10,&value,&_LC1);
      if ((iVar4 == 0) && (value < 0x100000000)) {
        ppuVar6 = __ctype_b_loc();
        bVar2 = (byte)*__name;
        bVar1 = *(byte *)((long)*ppuVar6 + (ulong)bVar2 * 2 + 1);
        while ((bVar1 & 0x20) != 0) {
          bVar2 = *(byte *)((long)__name + 1);
          __name = (gid_t *)((long)__name + 1);
          bVar1 = *(byte *)((long)*ppuVar6 + (ulong)bVar2 * 2 + 1);
        }
        if ((bVar2 != 0x2b) && (pgVar5 = getgrnam((char *)__name), pgVar5 != (group *)0x0)) {
LAB_001000b6:
          value = (uintmax_t)pgVar5->gr_gid;
        }
        if (n_gids_allocated == lVar11) {
          pgVar7 = (gid_t *)xpalloc(pgVar7,&n_gids_allocated,1,0xffffffffffffffff,4);
        }
        pgVar7[lVar11] = (gid_t)value;
        lVar11 = lVar11 + 1;
      }
      else {
        pgVar5 = getgrnam((char *)__name);
        if (pgVar5 != (group *)0x0) goto LAB_001000b6;
        if (!show_errors) goto LAB_0010014b;
        uVar9 = quote();
        uVar10 = dcgettext(0,"invalid group %s",5);
        piVar8 = __errno_location();
        error(0,*piVar8,uVar10,uVar9);
        iVar3 = -1;
      }
      __name = (gid_t *)strtok((char *)0x0,",");
    } while (__name != (gid_t *)0x0);
    if ((iVar3 != 0) || (lVar11 != 0)) {
      *pgids = pgVar7;
      if (iVar3 == 0) {
        *pn_gids = lVar11;
      }
      goto LAB_0010010d;
    }
  }
  if (show_errors) {
    uVar9 = quote(groups);
    uVar10 = dcgettext(0,"invalid group list %s",5);
    error(0,0,uVar10,uVar9);
  }
LAB_0010014b:
  iVar3 = -1;
  *pgids = pgVar7;
LAB_0010010d:
  free(__s);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



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
    iVar2 = strcmp("chroot",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char *pcVar1;
  bool bVar2;
  gid_t *pgVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  char *pcVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  passwd *ppVar11;
  __gid_t *__groups;
  uid_t __uid;
  undefined4 uVar12;
  char *pcVar13;
  char *groups;
  long in_FS_OFFSET;
  passwd *local_78;
  uid_t uid;
  gid_t gid;
  gid_t *out_gids;
  idx_t n_gids;
  gid_t *in_gids;
  long local_40;
  
  __groups = (__gid_t *)(ulong)(uint)argc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uid = 0xffffffff;
  gid = 0xffffffff;
  out_gids = (gid_t *)0x0;
  n_gids = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 0x7d;
  atexit((__func *)&close_stdout);
  bVar2 = false;
  pcVar13 = (char *)0x0;
  pcVar1 = (char *)0x0;
  while (groups = pcVar1, iVar4 = getopt_long(__groups,argv,&_LC36), pcVar7 = _optarg, iVar4 != -1)
  {
    pcVar1 = _optarg;
    if (iVar4 != 0x100) {
      if (iVar4 < 0x101) {
        if (iVar4 == -0x83) {
          uVar5 = proper_name_lite("Roland McGrath","Roland McGrath");
          version_etc(_stdout,"chroot","GNU coreutils",_Version,uVar5,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00101309;
      }
      pcVar1 = groups;
      if (iVar4 == 0x101) {
        sVar6 = strlen(_optarg);
        pcVar13 = pcVar7;
        if ((sVar6 != 0) && (pcVar7[sVar6 - 1] == ':')) {
          pcVar7[sVar6 - 1] = '\0';
        }
      }
      else {
        if (iVar4 != 0x102) goto LAB_00101309;
        bVar2 = true;
      }
    }
  }
  if (argc <= _optind) {
    uVar5 = dcgettext(0,"missing operand",5);
    error(0,0,uVar5);
LAB_00101309:
                    /* WARNING: Subroutine does not return */
    usage(0x7d);
  }
  pcVar1 = argv[_optind];
  pcVar7 = canonicalize_file_name(pcVar1);
  if (pcVar7 == (char *)0x0) {
    if (bVar2) goto LAB_0010132a;
  }
  else {
    iVar4 = strcmp("/",pcVar7);
    free(pcVar7);
    if (iVar4 == 0) goto LAB_00100f19;
    if (bVar2) {
LAB_0010132a:
      uVar5 = quotearg_style(4,&_LC13);
      uVar10 = dcgettext(0,"option --skip-chdir only permitted if NEWROOT is old %s",5);
      error(0,0,uVar10,uVar5);
                    /* WARNING: Subroutine does not return */
      usage(0x7d);
    }
    if (iVar4 == 0) goto LAB_00100f19;
  }
  if (pcVar13 != (char *)0x0) {
    parse_user_spec(pcVar13,&uid,&gid);
  }
  if (uid == 0xffffffff) {
    local_78 = (passwd *)0x0;
    goto LAB_00101161;
  }
  if (groups == (char *)0x0) {
    local_78 = getpwuid(uid);
    if (local_78 != (passwd *)0x0) goto LAB_0010128c;
    local_78 = (passwd *)0x0;
    if (gid == 0xffffffff) goto LAB_00100f21;
    goto LAB_00100f19;
  }
  __uid = uid;
  if (gid == 0xffffffff) goto LAB_00101279;
LAB_00100edc:
  local_78 = (passwd *)0x0;
  do {
    if (*groups != '\0') {
      parse_additional_groups(groups,&out_gids,&n_gids,false);
    }
LAB_00100f21:
    iVar4 = chroot(pcVar1);
    if (iVar4 == 0) {
      uVar12 = 0;
      if (!bVar2) goto LAB_001011dc;
LAB_00100f3f:
      if (_optind + 1 == (int)__groups) {
        pcVar7 = getenv("SHELL");
        if (pcVar7 == (char *)0x0) {
          pcVar7 = "/bin/sh";
        }
        *argv = pcVar7;
        argv[1] = "-i";
        argv[2] = (char *)0x0;
      }
      else {
        argv = argv + (long)_optind + 1;
      }
      if ((pcVar13 != (char *)0x0) &&
         (lVar8 = parse_user_spec_warn(pcVar13,&uid,&gid,0,0,&in_gids), lVar8 != 0)) {
        if ((char)in_gids == '\0') {
          uVar12 = 0x7d;
        }
        error(uVar12,0,&_LC43);
      }
      if (uid != 0xffffffff) {
        if ((groups != (char *)0x0) && (gid != 0xffffffff)) {
LAB_00100fcd:
          pgVar3 = out_gids;
          in_gids = (gid_t *)0x0;
          __groups = pgVar3;
          if (((*groups != '\0') &&
              (iVar4 = parse_additional_groups(groups,&in_gids,&n_gids,n_gids == 0),
              __groups = in_gids, iVar4 != 0)) && (__groups = pgVar3, n_gids == 0)) {
            iVar4 = 0x7d;
            goto LAB_00101080;
          }
LAB_00100fdc:
          iVar4 = setgroups(n_gids,__groups);
          pcVar7 = "failed to set supplemental groups";
          if (iVar4 == 0) {
LAB_00100ff8:
            free(in_gids);
            free(out_gids);
            if (gid != 0xffffffff) {
              iVar4 = setgid(gid);
              pcVar7 = "failed to set group-ID";
              if (iVar4 != 0) goto LAB_001011bc;
            }
            if ((uid == 0xffffffff) || (iVar4 = setuid(uid), iVar4 == 0)) {
              execvp(*argv,argv);
              piVar9 = __errno_location();
              iVar4 = *piVar9;
              uVar5 = quote(*argv);
              iVar4 = (iVar4 == 2) + 0x7e;
              uVar10 = dcgettext(0,"failed to run command %s",5);
              error(0,*piVar9,uVar10,uVar5);
LAB_00101080:
              if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return iVar4;
            }
            pcVar7 = "failed to set user-ID";
          }
          goto LAB_001011bc;
        }
        ppVar11 = getpwuid(uid);
        if (ppVar11 == (passwd *)0x0) {
          if (gid != 0xffffffff) goto LAB_001010ca;
          __groups = (__gid_t *)(ulong)uid;
          pcVar7 = "no group specified for unknown uid: %ju";
          goto LAB_00101256;
        }
        if (gid == 0xffffffff) {
          gid = ppVar11->pw_gid;
        }
        local_78 = (passwd *)ppVar11->pw_name;
      }
LAB_001010ca:
      __groups = out_gids;
      in_gids = (gid_t *)0x0;
      if (groups != (char *)0x0) goto LAB_00100fcd;
      if ((local_78 == (passwd *)0x0) || (gid == 0xffffffff)) {
LAB_00101110:
        if (uid != 0xffffffff) goto LAB_00100fdc;
        goto LAB_00100ff8;
      }
      iVar4 = xgetgroups(local_78,gid,&in_gids);
      if (0 < iVar4) {
        n_gids = (idx_t)iVar4;
        __groups = in_gids;
        goto LAB_00101110;
      }
      pcVar7 = "failed to get supplemental groups";
      if (n_gids != 0) goto LAB_00101110;
LAB_001011bc:
      do {
        argv = (char **)dcgettext(0,pcVar7,5);
        piVar9 = __errno_location();
        error(0x7d,*piVar9,argv);
LAB_001011dc:
        iVar4 = chdir("/");
        pcVar7 = "cannot chdir to root directory";
      } while (iVar4 != 0);
      goto LAB_00100f3f;
    }
    __groups = (__gid_t *)quotearg_style(4,pcVar1);
    pcVar7 = "cannot change root directory to %s";
LAB_00101256:
    argv = (char **)dcgettext(0,pcVar7,5);
    piVar9 = __errno_location();
    __uid = 0x7d;
    error(0x7d,*piVar9,argv);
LAB_00101279:
    local_78 = getpwuid(__uid);
    if (local_78 == (passwd *)0x0) goto LAB_00100edc;
LAB_0010128c:
    if (gid == 0xffffffff) {
      gid = local_78->pw_gid;
    }
    local_78 = (passwd *)local_78->pw_name;
LAB_00101161:
  } while (groups != (char *)0x0);
  if (gid != 0xffffffff) {
    if (local_78 == (passwd *)0x0) {
LAB_00100f19:
      local_78 = (passwd *)0x0;
    }
    else {
      iVar4 = xgetgroups(local_78,gid,&out_gids);
      if (0 < iVar4) {
        n_gids = (idx_t)iVar4;
      }
    }
  }
  goto LAB_00100f21;
}


