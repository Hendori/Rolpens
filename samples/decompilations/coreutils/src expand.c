
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
    iVar2 = strcmp("expand",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  _IO_FILE *p_Var6;
  ushort **ppuVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  char **ppcVar11;
  ushort uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  _Bool last_tab;
  idx_t tab_index;
  char tab_stop [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  convert_entire_line = 1;
LAB_0010084b:
  do {
    iVar4 = getopt_long(argc,argv,"it:0::1::2::3::4::5::6::7::8::9::",longopts,0);
    if (iVar4 == -1) {
      finalize_tab_stops();
      ppcVar11 = (char **)0x0;
      if (_optind < argc) {
        ppcVar11 = argv + _optind;
      }
      set_file_list(ppcVar11);
      p_Var6 = (_IO_FILE *)next_file(0);
      if (p_Var6 == (_IO_FILE *)0x0) {
LAB_00100acd:
        cleanup_file_list_stdin();
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return _exit_status;
        }
LAB_00100b2f:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_00100952:
      lVar10 = 0;
      uVar12 = 1;
      tab_index = 0;
LAB_001009c4:
      pbVar3 = (byte *)p_Var6->_IO_read_ptr;
      if (pbVar3 < p_Var6->_IO_read_end) {
        p_Var6->_IO_read_ptr = (char *)(pbVar3 + 1);
        uVar9 = (uint)*pbVar3;
joined_r0x00100a29:
        if ((char)uVar12 == '\0') goto LAB_001009a4;
        if (uVar9 == 9) goto LAB_00100a42;
        if (uVar9 == 8) {
          lVar10 = lVar10 + -1 + (ulong)(lVar10 == 0);
          tab_index = tab_index + -1 + (ulong)(tab_index == 0);
          goto joined_r0x00100a0d;
        }
      }
      else {
        uVar9 = __uflow(p_Var6);
        if (-1 < (int)uVar9) goto joined_r0x00100a29;
        p_Var6 = (_IO_FILE *)next_file(p_Var6);
        if (p_Var6 != (_IO_FILE *)0x0) goto LAB_001009c4;
        if ((char)uVar12 == '\0') goto LAB_00100acd;
      }
      bVar13 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (!bVar13) {
        uVar12 = 1;
        if (convert_entire_line != 0) goto LAB_00100998;
        while( true ) {
          ppuVar7 = __ctype_b_loc();
          uVar12 = (*ppuVar7)[(int)uVar9] & 1;
LAB_00100998:
          if ((int)uVar9 < 0) break;
LAB_001009a4:
          do {
            pcVar2 = _stdout->_IO_write_ptr;
            if (pcVar2 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar2 + 1;
              *pcVar2 = (char)uVar9;
LAB_001009bf:
              if (uVar9 == 10) goto LAB_00100952;
              goto LAB_001009c4;
            }
            iVar4 = __overflow(_stdout,uVar9 & 0xff);
            if (-1 < iVar4) goto LAB_001009bf;
LAB_00100a3d:
            write_error();
LAB_00100a42:
            lVar8 = get_next_tab_column(lVar10,&tab_index,&last_tab);
LAB_00100a6b:
            lVar10 = lVar10 + 1;
            if (lVar10 < lVar8) {
              pcVar2 = _stdout->_IO_write_ptr;
              if (pcVar2 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = pcVar2 + 1;
                *pcVar2 = ' ';
                goto LAB_00100a6b;
              }
              iVar4 = __overflow(_stdout,0x20);
              if (iVar4 < 0) goto LAB_00100a3d;
              goto LAB_00100a6b;
            }
            uVar9 = 0x20;
joined_r0x00100a0d:
            uVar12 = (ushort)convert_entire_line;
          } while (convert_entire_line != 0);
        }
        goto LAB_00100acd;
      }
      uVar5 = dcgettext(0,"input line is too long",5);
      error(1,0,uVar5);
      goto LAB_00100b2f;
    }
    if (iVar4 < 0x3a) {
      if (iVar4 < 0x30) {
        if (iVar4 == -0x83) {
          uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
          version_etc(_stdout,"expand","GNU coreutils",_Version,uVar5,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
LAB_00100b01:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      if (_optarg == 0) {
        tab_stop[0] = (char)iVar4;
        tab_stop[1] = '\0';
        parse_tab_stops(tab_stop);
      }
      else {
        parse_tab_stops(_optarg + -1);
      }
      goto LAB_0010084b;
    }
    if (iVar4 == 0x69) {
      convert_entire_line = 0;
    }
    else {
      if (iVar4 != 0x74) goto LAB_00100b01;
      parse_tab_stops(_optarg);
    }
  } while( true );
}


