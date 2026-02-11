
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
                    "Usage: %s [OPTION]... CONTEXT FILE...\n  or:  %s [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t TYPE] FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -u, --user=USER        set user USER in the target security context\n  -r, --role=ROLE        set role ROLE in the target security context\n  -t, --type=TYPE        set type TYPE in the target security context\n  -l, --range=RANGE      set range RANGE in the target security context\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-preserve-root  do not treat \'/\' specially (the default)\n      --preserve-root    fail to operate recursively on \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --reference=RFILE  use RFILE\'s security context rather than specifying\n                         a CONTEXT value\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -R, --recursive        operate on files and directories recursively\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v, --verbose          output a diagnostic for every file processed\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links (default)\n\n"
                             ,5);
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
    iVar2 = strcmp("chcon",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "chcon";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100345;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","chcon");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100345:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","chcon");
    if (pcVar4 == "chcon") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010005a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong main(int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_EDX;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  uint *puVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  long local_60;
  uint local_54;
  int local_50;
  long local_48;
  long local_40;
  
  uVar9 = 0;
  pcVar13 = "HLPRhvu:r:t:l:";
  uVar10 = (ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar12 = &switchD_0010123b::switchdataD_00101b7c;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  bVar1 = false;
  local_60 = 0;
  local_50 = -1;
  local_54 = 0x10;
  do {
    iVar3 = getopt_long(param_1,param_2,"HLPRhvu:r:t:l:",long_options,0);
    if (iVar3 == -1) {
      if (recurse == '\0') {
        local_54 = 0x10;
        cVar2 = local_50 != 0;
LAB_0010136e:
        affect_symlink_referent = cVar2;
        lVar8 = (long)_optind;
        iVar3 = _optind;
        if (((int)((local_60 != 0 | uVar9) << 0x1f) >> 0x1f) + 2 <= param_1 - _optind) {
          if (local_60 != 0) {
            param_2 = __errno_location();
            *param_2 = 0x5f;
            uVar10 = quotearg_style(4,local_60);
            uVar5 = dcgettext(0,"failed to get security context of %s",5);
            error(1,*param_2,uVar5,uVar10);
            goto LAB_00101a04;
          }
          if ((char)uVar9 == '\0') {
            _optind = _optind + 1;
            local_60 = *(long *)(param_2 + lVar8 * 2);
          }
          specified_context = local_60;
          if ((recurse == '\0') || (!bVar1)) {
            root_dev_ino = 0;
LAB_001013e3:
            uVar10 = 1;
            uVar9 = 1;
            pcVar13 = &DAT_00101c6c;
            puVar12 = (uint *)xfts_open(param_2 + (long)_optind * 2,local_54 | 8,0);
            param_2 = (int *)rpl_fts_read(puVar12);
            if (param_2 != (int *)0x0) goto LAB_00101420;
LAB_001014d3:
            piVar4 = __errno_location();
            if (*piVar4 != 0) {
              uVar9 = 0;
              uVar5 = dcgettext(0,"fts_read failed",5);
              error(0,*piVar4,uVar5);
            }
            iVar3 = rpl_fts_close(puVar12);
            if (iVar3 != 0) {
              uVar9 = 0;
              uVar5 = dcgettext(0,"fts_close failed",5);
              error(0,*piVar4,uVar5);
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return (ulong)(uVar9 ^ 1);
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          root_dev_ino = get_root_dev_ino(dev_ino_buf_0);
          if (root_dev_ino != 0) goto LAB_001013e3;
          uVar10 = quotearg_style(4,&_LC41);
          param_2 = (int *)dcgettext(0,"failed to get attributes of %s",5);
          piVar4 = __errno_location();
          error(1,*piVar4,param_2,uVar10);
          iVar3 = extraout_EDX;
        }
        if ((int)uVar10 <= iVar3) {
          uVar5 = dcgettext(0,"missing operand",5);
          error(0,0,uVar5);
          goto switchD_0010123b_caseD_49;
        }
      }
      else {
        if (local_54 == 0x10) {
          pcVar11 = "-R --dereference requires either -H or -L";
          cVar2 = '\0';
          if (local_50 != 1) goto LAB_0010136e;
        }
        else {
          cVar2 = recurse;
          if (local_50 != 0) goto LAB_0010136e;
LAB_00101a04:
          pcVar11 = "-R -h requires -P";
        }
        uVar5 = dcgettext(0,pcVar11,5);
        error(1,0,uVar5);
      }
      param_2 = (int *)quote(*(undefined8 *)(param_2 + uVar10 * 2 + -2));
      uVar5 = dcgettext(0,"missing operand after %s",5);
      error(0,0,uVar5,param_2);
      goto switchD_0010123b_caseD_49;
    }
    if (0x83 < iVar3) goto switchD_0010123b_caseD_49;
    if (iVar3 < 0x48) {
      if (iVar3 == -0x83) {
        uVar5 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar6 = proper_name_lite("Russell Coker","Russell Coker");
        version_etc(_stdout,"chcon","GNU coreutils",_Version,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
        usage(0);
        uVar6 = quotearg_style(4,uVar9);
        uVar5 = dcgettext(0,"cannot access %s",5);
        error(0,param_2[0x10],uVar5,uVar6);
        goto LAB_0010178c;
      }
      goto switchD_0010123b_caseD_49;
    }
    switch(iVar3) {
    case 0x48:
      local_54 = 0x11;
      break;
    default:
switchD_0010123b_caseD_49:
      usage(1);
      uVar5 = quotearg_n_style_colon(0,3,uVar9);
      error(0,param_2[0x10],&_LC48,uVar5);
LAB_0010178c:
      do {
        uVar9 = 0;
        while( true ) {
          if (recurse == '\0') {
            rpl_fts_set(puVar12,param_2,4);
          }
          uVar9 = (uint)uVar10 & uVar9;
          uVar10 = (ulong)uVar9;
          param_2 = (int *)rpl_fts_read(puVar12);
          if (param_2 == (int *)0x0) goto LAB_001014d3;
LAB_00101420:
          uVar5 = *(undefined8 *)(param_2 + 0xc);
          if (*(ushort *)(param_2 + 0x1a) < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x0010143b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (*(code *)(pcVar13 + *(int *)(pcVar13 + (ulong)*(ushort *)(param_2 + 0x1a) * 4)
                               ))();
            return uVar10;
          }
          if (verbose != '\0') {
            uVar6 = quotearg_style(4,*(undefined8 *)(param_2 + 0xe));
            uVar7 = dcgettext(0,"changing security context of %s\n",5);
            __printf_chk(2,uVar7,uVar6);
          }
          lVar8 = specified_context;
          local_48 = 0;
          if (specified_context == 0) {
            if (affect_symlink_referent == '\0') {
              iVar3 = lgetfileconat(puVar12[0xb],uVar5,&local_48);
            }
            else {
              iVar3 = getfileconat();
            }
            if ((iVar3 < 0) && (piVar4 = __errno_location(), *piVar4 != 0x3d)) {
              uVar5 = quotearg_style(4,uVar5);
              pcVar11 = "failed to get security context of %s";
            }
            else {
              lVar8 = local_48;
              if (local_48 == 0) {
                uVar5 = quotearg_style(4,uVar5);
                uVar6 = dcgettext(0,"can\'t apply partial context to unlabeled file %s",5);
                error(0,0,uVar6,uVar5);
                goto LAB_0010178c;
              }
              piVar4 = __errno_location();
              *piVar4 = 0x5f;
              uVar5 = quote(lVar8);
              pcVar11 = "failed to create security context: %s";
            }
            uVar6 = dcgettext(0,pcVar11,5);
            error(0,*piVar4,uVar6,uVar5);
            goto LAB_0010178c;
          }
          if (affect_symlink_referent == '\0') {
            iVar3 = lsetfileconat(puVar12[0xb],uVar5,specified_context);
          }
          else {
            iVar3 = setfileconat();
          }
          if (iVar3 != 0) break;
          uVar9 = 1;
        }
        uVar6 = quote_n(1,lVar8);
        uVar5 = quotearg_n_style(0,4,uVar5);
        uVar7 = dcgettext(0,"failed to change context of %s to %s",5);
        piVar4 = __errno_location();
        error(0,*piVar4,uVar7,uVar5,uVar6);
      } while( true );
    case 0x4c:
      local_54 = 2;
      break;
    case 0x50:
      local_54 = 0x10;
      break;
    case 0x52:
      recurse = '\x01';
      break;
    case 0x66:
      break;
    case 0x68:
      local_50 = 0;
      break;
    case 0x6c:
    case 0x72:
    case 0x74:
    case 0x75:
      uVar9 = 1;
      break;
    case 0x76:
      verbose = '\x01';
      break;
    case 0x80:
      local_50 = 1;
      break;
    case 0x81:
      bVar1 = false;
      break;
    case 0x82:
      bVar1 = true;
      break;
    case 0x83:
      local_60 = _optarg;
    }
  } while( true );
}


