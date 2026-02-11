
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  uint uVar1;
  FILE *pFVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **ppuVar9;
  int __status;
  long in_FS_OFFSET;
  undefined *puStack_b0;
  char *pcStack_a8;
  char *apcStack_a0 [4];
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_38;
  ulong uStack_30;
  
  puVar4 = (uint *)__errno_location();
  uVar1 = *puVar4;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar5 = dcgettext(0,"write error",5);
  __status = 1;
  error(1,uVar1,uVar5);
  uVar5 = _program_name;
  ppuVar9 = &puStack_b0;
  uStack_38 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_30 = (ulong)uVar1;
  if (__status != 0) {
    uVar6 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar6,uVar5);
    goto LAB_001000aa;
  }
  uVar6 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar6,uVar5);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,"Convert tabs in each FILE to spaces, writing to standard output.\n",
                             5);
  fputs_unlocked(pcVar7,pFVar2);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar7,pFVar2);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar2);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,
                             "  -i, --initial    do not convert tabs after non blanks\n  -t, --tabs=N     have tabs N characters apart, not 8\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar2);
  emit_tab_list_info();
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar7,pFVar2);
  pFVar2 = _stdout;
  pcVar7 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar7,pFVar2);
  pcVar7 = "[";
  puStack_b0 = &_LC1;
  pcStack_a8 = "test invocation";
  apcStack_a0[0] = "coreutils";
  apcStack_a0[1] = "Multi-call invocation";
  apcStack_a0[2] = "sha224sum";
  apcStack_a0[3] = "sha2 utilities";
  pcStack_80 = "sha256sum";
  pcStack_78 = "sha2 utilities";
  pcStack_70 = "sha384sum";
  pcStack_68 = "sha2 utilities";
  pcStack_60 = "sha512sum";
  pcStack_58 = "sha2 utilities";
  auStack_50 = (undefined1  [16])0x0;
  do {
    iVar3 = strcmp("expand",pcVar7);
    if (iVar3 == 0) break;
    pcVar7 = *(char **)((long)ppuVar9 + 0x10);
    ppuVar9 = (undefined **)((long)ppuVar9 + 0x10);
  } while (pcVar7 != (char *)0x0);
  pcVar7 = *(char **)((long)ppuVar9 + 8);
  if (pcVar7 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar7 = "expand";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) goto LAB_001002dd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","expand");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
LAB_001002dd:
      iVar3 = strncmp(pcVar8,"en_",3);
      pFVar2 = _stdout;
      if (iVar3 != 0) {
        pcVar8 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar8,pFVar2);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar8 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","expand");
    if (pcVar7 == "expand") {
      pcVar8 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar7,pcVar8);
LAB_001000aa:
                    /* WARNING: Subroutine does not return */
  exit(__status);
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
    goto LAB_001000aa;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Convert tabs in each FILE to spaces, writing to standard output.\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --initial    do not convert tabs after non blanks\n  -t, --tabs=N     have tabs N characters apart, not 8\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  emit_tab_list_info();
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC1;
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
    iVar2 = strcmp("expand",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "expand";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001002dd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","expand");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001002dd:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","expand");
    if (pcVar4 == "expand") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001000aa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 main(int param_1,undefined8 *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  _IO_FILE *p_Var5;
  ushort **ppuVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ushort uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 local_41;
  long local_40;
  undefined1 local_32;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  convert_entire_line = 1;
LAB_0010084b:
  do {
    iVar3 = getopt_long(param_1,param_2,shortopts,longopts,0);
    if (iVar3 == -1) {
      finalize_tab_stops();
      puVar10 = (undefined8 *)0x0;
      if (_optind < param_1) {
        puVar10 = param_2 + _optind;
      }
      set_file_list(puVar10);
      p_Var5 = (_IO_FILE *)next_file(0);
      if (p_Var5 != (_IO_FILE *)0x0) {
LAB_00100952:
        lVar9 = 0;
        uVar11 = 1;
        local_40 = 0;
LAB_001009c4:
        pbVar2 = (byte *)p_Var5->_IO_read_ptr;
        if (pbVar2 < p_Var5->_IO_read_end) {
          p_Var5->_IO_read_ptr = (char *)(pbVar2 + 1);
          uVar8 = (uint)*pbVar2;
joined_r0x00100a29:
          if ((char)uVar11 == '\0') goto LAB_001009a4;
          if (uVar8 == 9) goto LAB_00100a42;
          if (uVar8 == 8) {
            lVar9 = lVar9 + -1 + (ulong)(lVar9 == 0);
            local_40 = local_40 + -1 + (ulong)(local_40 == 0);
            goto joined_r0x00100a0d;
          }
        }
        else {
          uVar8 = __uflow(p_Var5);
          if (-1 < (int)uVar8) goto joined_r0x00100a29;
          p_Var5 = (_IO_FILE *)next_file(p_Var5);
          if (p_Var5 != (_IO_FILE *)0x0) goto LAB_001009c4;
          if ((char)uVar11 == '\0') goto LAB_00100acd;
        }
        bVar12 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (!bVar12) {
          uVar11 = 1;
          if (convert_entire_line != 0) goto LAB_00100998;
          while( true ) {
            ppuVar6 = __ctype_b_loc();
            uVar11 = (*ppuVar6)[(int)uVar8] & 1;
LAB_00100998:
            if ((int)uVar8 < 0) break;
LAB_001009a4:
            do {
              pcVar1 = _stdout->_IO_write_ptr;
              if (pcVar1 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar1 + 1;
                *pcVar1 = (char)uVar8;
LAB_001009bf:
                if (uVar8 == 10) goto LAB_00100952;
                goto LAB_001009c4;
              }
              iVar3 = __overflow(_stdout,uVar8 & 0xff);
              if (-1 < iVar3) goto LAB_001009bf;
LAB_00100a3d:
              write_error();
LAB_00100a42:
              lVar7 = get_next_tab_column(lVar9,&local_40,&local_41);
LAB_00100a6b:
              lVar9 = lVar9 + 1;
              if (lVar9 < lVar7) {
                pcVar1 = _stdout->_IO_write_ptr;
                if (pcVar1 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar1 + 1;
                  *pcVar1 = ' ';
                  goto LAB_00100a6b;
                }
                iVar3 = __overflow(_stdout,0x20);
                if (iVar3 < 0) goto LAB_00100a3d;
                goto LAB_00100a6b;
              }
              uVar8 = 0x20;
joined_r0x00100a0d:
              uVar11 = (ushort)convert_entire_line;
            } while (convert_entire_line != 0);
          }
          goto LAB_00100acd;
        }
        goto LAB_00100b0b;
      }
LAB_00100acd:
      cleanup_file_list_stdin();
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return _exit_status;
      }
LAB_00100b2f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (iVar3 < 0x3a) {
      if (iVar3 < 0x30) {
        if (iVar3 == -0x83) {
          uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
          version_etc(_stdout,"expand","GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar3 == -0x82) {
          usage(0);
        }
LAB_00100b01:
        usage(1);
LAB_00100b0b:
        uVar4 = dcgettext(0,"input line is too long",5);
        error(1,0,uVar4);
        goto LAB_00100b2f;
      }
      if (_optarg == 0) {
        local_32 = (undefined1)iVar3;
        local_31 = 0;
        parse_tab_stops(&local_32);
      }
      else {
        parse_tab_stops(_optarg + -1);
      }
      goto LAB_0010084b;
    }
    if (iVar3 == 0x69) {
      convert_entire_line = 0;
    }
    else {
      if (iVar3 != 0x74) goto LAB_00100b01;
      parse_tab_stops(_optarg);
    }
  } while( true );
}


