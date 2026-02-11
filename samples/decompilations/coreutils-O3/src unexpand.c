
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
  pcVar7 = (char *)dcgettext(0,"Convert blanks in each FILE to tabs, writing to standard output.\n",
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
                             "  -a, --all        convert all blanks, instead of just initial blanks\n      --first-only  convert only leading sequences of blanks (overrides -a)\n  -t, --tabs=N     have tabs N characters apart instead of 8 (enables -a)\n"
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
    iVar3 = strcmp("unexpand",pcVar7);
    if (iVar3 == 0) break;
    pcVar7 = *(char **)((long)ppuVar9 + 0x10);
    ppuVar9 = (undefined **)((long)ppuVar9 + 0x10);
  } while (pcVar7 != (char *)0x0);
  pcVar7 = *(char **)((long)ppuVar9 + 8);
  if (pcVar7 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar7 = "unexpand";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) goto LAB_001002dd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","unexpand");
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","unexpand");
    if (pcVar7 == "unexpand") {
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
  pcVar4 = (char *)dcgettext(0,"Convert blanks in each FILE to tabs, writing to standard output.\n",
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
                             "  -a, --all        convert all blanks, instead of just initial blanks\n      --first-only  convert only leading sequences of blanks (overrides -a)\n  -t, --tabs=N     have tabs N characters apart instead of 8 (enables -a)\n"
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
    iVar2 = strcmp("unexpand",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "unexpand";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001002dd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","unexpand");
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","unexpand");
    if (pcVar4 == "unexpand") {
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
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  _IO_FILE *p_Var6;
  undefined1 *__ptr;
  size_t sVar7;
  ushort **ppuVar8;
  long lVar9;
  uint uVar10;
  long unaff_RBX;
  size_t __n;
  char *pcVar11;
  undefined8 *puVar12;
  ushort uVar13;
  long lVar14;
  ushort uVar15;
  long in_FS_OFFSET;
  byte local_62;
  byte local_61;
  char local_49;
  long local_48;
  long local_40;
  
  bVar2 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  uVar15 = 0x515;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  bVar3 = false;
LAB_00100908:
  do {
    iVar4 = getopt_long(param_1,param_2,",0123456789at:",longopts,0);
    if (iVar4 == -1) {
LAB_00100a28:
      if (bVar3) {
        convert_entire_line = 0;
      }
      if (bVar2) {
LAB_00100d12:
        add_tab_stop(unaff_RBX);
      }
      finalize_tab_stops();
      puVar12 = (undefined8 *)0x0;
      if (_optind < param_1) {
        puVar12 = param_2 + _optind;
      }
      set_file_list(puVar12);
      p_Var6 = (_IO_FILE *)next_file(0);
      if (p_Var6 == (_IO_FILE *)0x0) {
LAB_00100c9f:
        cleanup_file_list_stdin();
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return _exit_status;
      }
      __ptr = (undefined1 *)ximalloc(_max_column_width);
      do {
        local_62 = 1;
        __n = 0;
        lVar14 = 0;
        local_48 = 0;
        uVar13 = 1;
        local_61 = 0;
LAB_00100b47:
        do {
          pbVar1 = (byte *)p_Var6->_IO_read_ptr;
          if (pbVar1 < p_Var6->_IO_read_end) {
            p_Var6->_IO_read_ptr = (char *)(pbVar1 + 1);
            uVar10 = (uint)*pbVar1;
LAB_00100b60:
            if ((char)uVar13 == '\0') goto LAB_00100b1f;
            ppuVar8 = __ctype_b_loc();
            uVar15 = (*ppuVar8)[(int)uVar10] & 1;
            if (((*ppuVar8)[(int)uVar10] & 1) == 0) {
              if (uVar10 == 8) {
                lVar14 = lVar14 + -1 + (ulong)(lVar14 == 0);
                local_48 = local_48 + -1 + (ulong)(local_48 == 0);
                local_62 = (byte)uVar15;
                if (__n != 0) goto LAB_00100acb;
                uVar13 = convert_entire_line | uVar15;
                goto LAB_00100b1f;
              }
LAB_00100ab1:
              lVar14 = lVar14 + 1;
              if (lVar14 == 0) goto LAB_00100d43;
              uVar13 = 1;
              goto LAB_00100ac1;
            }
          }
          else {
            uVar10 = __uflow(p_Var6);
            if (-1 < (int)uVar10) goto LAB_00100b60;
            p_Var6 = (_IO_FILE *)next_file(p_Var6);
            if (p_Var6 != (_IO_FILE *)0x0) goto LAB_00100b47;
            if ((char)uVar13 == '\0') {
LAB_00100c95:
              free(__ptr);
              goto LAB_00100c9f;
            }
            ppuVar8 = __ctype_b_loc();
            uVar15 = (*ppuVar8)[(int)uVar10] & 1;
            if (((*ppuVar8)[(int)uVar10] & 1) == 0) goto LAB_00100ab1;
          }
          lVar9 = get_next_tab_column(lVar14,&local_48,&local_49);
          if (local_49 != '\0') goto LAB_00100c78;
          if (uVar10 == 9) {
            if (__n != 0) {
              *__ptr = 9;
            }
LAB_00100bd4:
            __n = (size_t)local_61;
            uVar13 = 1;
            uVar10 = 9;
            lVar14 = lVar9;
LAB_00100ac1:
            do {
              local_62 = (byte)uVar15;
              if (__n == 0) {
LAB_00100b07:
                uVar13 = uVar13 & (convert_entire_line | uVar15);
                if ((int)uVar10 < 0) goto LAB_00100c95;
                __n = 0;
LAB_00100b1f:
                pcVar11 = _stdout->_IO_write_ptr;
                if (pcVar11 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar11 + 1;
                  *pcVar11 = (char)uVar10;
                  goto LAB_00100b3e;
                }
                iVar4 = __overflow(_stdout,uVar10 & 0xff);
                if (-1 < iVar4) goto LAB_00100b3e;
              }
              else {
LAB_00100acb:
                if ((1 < (long)__n) && (local_61 != 0)) {
                  *__ptr = 9;
                }
                sVar7 = fwrite_unlocked(__ptr,1,__n,_stdout);
                if (__n == sVar7) {
                  local_61 = 0;
                  goto LAB_00100b07;
                }
              }
              write_error();
LAB_00100c78:
              uVar13 = 0;
            } while( true );
          }
          lVar14 = lVar14 + 1;
          local_62 = local_62 ^ 1 | lVar9 != lVar14;
          uVar13 = (ushort)local_62;
          if (local_62 == 0) {
            *__ptr = 9;
            lVar9 = lVar14;
            goto LAB_00100bd4;
          }
          if (lVar9 == lVar14) {
            local_61 = local_62;
          }
          __ptr[__n] = (char)uVar10;
          __n = __n + 1;
LAB_00100b3e:
        } while (uVar10 != 10);
      } while( true );
    }
    if (iVar4 == 0x61) {
      convert_entire_line = 1;
      goto LAB_00100908;
    }
    if (iVar4 < 0x62) {
      if (iVar4 == 0x2c) {
        if (bVar2) {
          add_tab_stop(unaff_RBX);
        }
        bVar2 = false;
      }
      else {
        if (iVar4 < 0x2d) {
          if (iVar4 == -0x83) {
            uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
            version_etc(_stdout,"unexpand","GNU coreutils",_Version,uVar5,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar4 == -0x82) {
            usage(0);
            goto LAB_00100a28;
          }
        }
        else if (iVar4 == 0x3f) {
          usage(1);
          goto LAB_00100d12;
        }
LAB_001009c6:
        if (!bVar2) {
          unaff_RBX = 0;
        }
        lVar14 = unaff_RBX * 10;
        if ((SEXT816(lVar14) != SEXT816(unaff_RBX) * SEXT816(10)) ||
           (unaff_RBX = lVar14 + (iVar4 + -0x30), SCARRY8(lVar14,(long)(iVar4 + -0x30)))) {
          pcVar11 = "tab stop value is too large";
          do {
            uVar5 = dcgettext(0,pcVar11,5);
            error(1,0,uVar5);
LAB_00100d43:
            pcVar11 = "input line is too long";
          } while( true );
        }
        bVar2 = true;
      }
    }
    else if (iVar4 == 0x74) {
      convert_entire_line = 1;
      parse_tab_stops(_optarg);
    }
    else {
      if (iVar4 != 0x80) goto LAB_001009c6;
      bVar3 = true;
    }
  } while( true );
}


