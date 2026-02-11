
void append_quoted(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  
  bVar2 = true;
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      return;
    }
    if (print_ls_colors == '\0') {
      if (bVar1 == 0x3d) {
LAB_001000c0:
        if (bVar2) {
          if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
            rpl_obstack_newchunk(lsc_obstack,1);
          }
          pbVar3 = (byte *)(lsc_obstack._24_8_ + 1);
          *(byte *)lsc_obstack._24_8_ = 0x5c;
          lsc_obstack._24_8_ = pbVar3;
        }
LAB_00100038:
        bVar2 = true;
        goto LAB_00100040;
      }
      if ((char)bVar1 < '>') {
        if (bVar1 == 0x27) {
          if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
            rpl_obstack_newchunk(lsc_obstack,1);
          }
          pbVar3 = (byte *)(lsc_obstack._24_8_ + 1);
          *(byte *)lsc_obstack._24_8_ = 0x27;
          lsc_obstack._24_8_ = pbVar3;
          if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
            rpl_obstack_newchunk(lsc_obstack,1);
          }
          puVar4 = (undefined1 *)(lsc_obstack._24_8_ + 1);
          *(undefined1 *)lsc_obstack._24_8_ = 0x5c;
          lsc_obstack._24_8_ = puVar4;
          if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
            rpl_obstack_newchunk(lsc_obstack,1);
          }
          puVar4 = (undefined1 *)(lsc_obstack._24_8_ + 1);
          *(undefined1 *)lsc_obstack._24_8_ = 0x27;
          lsc_obstack._24_8_ = puVar4;
        }
        else if (bVar1 == 0x3a) goto LAB_001000c0;
        goto LAB_00100038;
      }
      bVar2 = (bool)(bVar2 ^ 1);
      if ((bVar1 & 0xfd) != 0x5c) goto LAB_00100038;
      if (lsc_obstack._32_8_ == lsc_obstack._24_8_) goto LAB_001000a0;
    }
    else {
LAB_00100040:
      if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
LAB_001000a0:
        rpl_obstack_newchunk(lsc_obstack,1);
      }
    }
    pbVar3 = (byte *)(lsc_obstack._24_8_ + 1);
    *(byte *)lsc_obstack._24_8_ = *param_1;
    lsc_obstack._24_8_ = pbVar3;
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}



void append_entry(char param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  
  if (print_ls_colors != '\0') {
    append_quoted(&_LC0);
    append_quoted(param_3);
    if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
      rpl_obstack_newchunk(lsc_obstack,1);
    }
    puVar2 = (undefined1 *)(lsc_obstack._24_8_ + 1);
    *(undefined1 *)lsc_obstack._24_8_ = 0x6d;
    lsc_obstack._24_8_ = puVar2;
  }
  if (param_1 != '\0') {
    if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
      rpl_obstack_newchunk(lsc_obstack,1);
    }
    pcVar1 = (char *)(lsc_obstack._24_8_ + 1);
    *(char *)lsc_obstack._24_8_ = param_1;
    lsc_obstack._24_8_ = pcVar1;
  }
  append_quoted(param_2);
  if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
    rpl_obstack_newchunk(lsc_obstack,1);
  }
  pcVar1 = (char *)(lsc_obstack._24_8_ + 1);
  *(byte *)lsc_obstack._24_8_ = (-(print_ls_colors == '\0') & 0x34U) + 9;
  lsc_obstack._24_8_ = pcVar1;
  append_quoted(param_3);
  if (print_ls_colors == '\0') {
    cVar3 = ':';
    if (lsc_obstack._32_8_ != lsc_obstack._24_8_) goto LAB_0010027d;
LAB_00100310:
    rpl_obstack_newchunk(lsc_obstack,1);
  }
  else {
    append_quoted(&_LC1);
    if (lsc_obstack._32_8_ == lsc_obstack._24_8_) goto LAB_00100310;
  }
  cVar3 = (-(print_ls_colors == '\0') & 0x30U) + 10;
LAB_0010027d:
  pcVar1 = (char *)(lsc_obstack._24_8_ + 1);
  *(char *)lsc_obstack._24_8_ = cVar3;
  lsc_obstack._24_8_ = pcVar1;
  return;
}



undefined1 dc_parse_stream(FILE *param_1,long param_2)

{
  NoteGnuProperty_4 *pNVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  __ssize_t _Var9;
  char *__pattern;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  NoteGnuProperty_4 *pNVar14;
  long *plVar15;
  NoteGnuProperty_4 *pNVar16;
  char *pcVar17;
  NoteGnuProperty_4 *pNVar18;
  long lVar19;
  long in_FS_OFFSET;
  char *local_88;
  undefined1 local_71;
  NoteGnuProperty_4 *local_50;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (NoteGnuProperty_4 *)0x0;
  local_48 = 0;
  pcVar6 = getenv("TERM");
  if (pcVar6 == (char *)0x0) {
    local_88 = "none";
  }
  else {
    local_88 = "none";
    if (*pcVar6 != '\0') {
      local_88 = pcVar6;
    }
  }
  iVar4 = 3;
  pcVar6 = "# Configuration file for dircolors, a utility to help you set the";
  pcVar7 = getenv("COLORTERM");
  local_71 = 1;
  pcVar8 = "";
  if (pcVar7 != (char *)0x0) {
    pcVar8 = pcVar7;
  }
  lVar19 = 0;
LAB_00100440:
  lVar19 = lVar19 + 1;
  pNVar18 = (NoteGnuProperty_4 *)pcVar6;
  if (param_1 == (FILE *)0x0) goto LAB_00100590;
LAB_0010044d:
  _Var9 = __getdelim((char **)&local_50,&local_48,10,param_1);
  pNVar18 = local_50;
  if (_Var9 < 1) {
    if ((param_1->_flags & 0x20) != 0) {
      uVar11 = quotearg_n_style_colon(0,3,param_2);
      uVar12 = dcgettext(0,"%s: read error",5);
      piVar13 = __errno_location();
      error(0,*piVar13,uVar12,uVar11);
      local_71 = 0;
    }
    free(local_50);
LAB_0010072a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_71;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  do {
    cVar2 = (char)pNVar18->namesz;
    if ('\r' < cVar2) goto LAB_001005bb;
LAB_0010047c:
    if (cVar2 < '\t') {
      do {
        if (cVar2 == '\0' || cVar2 == '#') goto LAB_00100440;
        cVar2 = (char)pNVar18->namesz;
        pNVar14 = pNVar18;
        if ('\r' < cVar2) goto LAB_001004b1;
        while ((cVar2 < '\t' && (cVar2 != '\0'))) {
          while( true ) {
            cVar2 = *(char *)((long)&pNVar14->namesz + 1);
            pNVar14 = (NoteGnuProperty_4 *)((long)&pNVar14->namesz + 1);
            if (cVar2 < '\x0e') break;
LAB_001004b1:
            if (cVar2 == ' ') goto LAB_001004b5;
          }
        }
LAB_001004b5:
        pcVar7 = (char *)ximemdup0(pNVar18,(long)pNVar14 - (long)pNVar18);
        if ((char)pNVar14->namesz == '\0') {
LAB_001007e3:
          uVar11 = quotearg_n_style_colon(0,3,param_2);
          uVar12 = dcgettext(0,"%s:%td: invalid line;  missing second token",5);
          error(0,0,uVar12,uVar11,lVar19);
          free(pcVar7);
          local_71 = 0;
          goto LAB_00100440;
        }
        do {
          while( true ) {
            pNVar18 = pNVar14;
            cVar2 = *(char *)((long)&pNVar18->namesz + 1);
            pNVar14 = (NoteGnuProperty_4 *)((long)&pNVar18->namesz + 1);
            if ('\r' < cVar2) break;
            if (cVar2 < '\t') goto LAB_001004e8;
          }
        } while (cVar2 == ' ');
LAB_001004e8:
        if ((cVar2 == '\0') || (pNVar1 = pNVar14, cVar2 == '#')) goto LAB_001007e3;
        do {
          pNVar16 = pNVar1;
          cVar2 = *(char *)((long)&pNVar16->namesz + 1);
          pNVar1 = (NoteGnuProperty_4 *)((long)&pNVar16->namesz + 1);
        } while (cVar2 != '\0' && cVar2 != '#');
        cVar2 = (char)pNVar16->namesz;
        if ('\r' < cVar2) goto LAB_0010052c;
        while ('\b' < cVar2) {
          while( true ) {
            cVar2 = pNVar16[-1].name[3];
            pNVar16 = (NoteGnuProperty_4 *)(pNVar16[-1].name + 3);
            if (cVar2 < '\x0e') break;
LAB_0010052c:
            if (cVar2 != ' ') goto LAB_00100530;
          }
        }
LAB_00100530:
        __pattern = (char *)ximemdup0(pNVar14,(long)pNVar16 - (long)pNVar18);
        iVar3 = c_strcasecmp(pcVar7,&_LC5);
        pcVar17 = local_88;
        if ((iVar3 == 0) || (iVar3 = c_strcasecmp(pcVar7,"COLORTERM"), pcVar17 = pcVar8, iVar3 == 0)
           ) {
          if (iVar4 != 2) {
            iVar4 = fnmatch(__pattern,pcVar17,0);
            iVar4 = (uint)(iVar4 == 0) * 2;
          }
        }
        else {
          if (iVar4 == 2) {
            cVar2 = *pcVar7;
            iVar4 = 1;
          }
          else {
            if (iVar4 == 0) goto LAB_00100573;
            cVar2 = *pcVar7;
          }
          if (cVar2 == '.') {
            append_entry(0x2a,pcVar7,__pattern);
          }
          else if (cVar2 == '*') {
            append_entry(0,pcVar7,__pattern);
          }
          else {
            iVar3 = c_strcasecmp(pcVar7,"OPTIONS");
            if (((iVar3 != 0) && (iVar3 = c_strcasecmp(pcVar7,"COLOR"), iVar3 != 0)) &&
               (iVar3 = c_strcasecmp(pcVar7,"EIGHTBIT"), iVar3 != 0)) {
              pcVar17 = "NORMAL";
              iVar3 = 0;
              plVar15 = (long *)(slack_codes + 8);
              do {
                iVar5 = c_strcasecmp(pcVar7,pcVar17);
                if (iVar5 == 0) {
                  append_entry(0,(&ls_codes)[iVar3],__pattern);
                  goto LAB_00100573;
                }
                pcVar17 = (char *)*plVar15;
                plVar15 = plVar15 + 1;
                iVar3 = iVar3 + 1;
              } while (pcVar17 != (char *)0x0);
              if (iVar4 - 1U < 2) {
                if (param_2 == 0) {
                  uVar11 = dcgettext(0,"<internal>",5);
                }
                else {
                  uVar11 = quotearg_n_style_colon(0,3);
                }
                uVar12 = dcgettext(0,"%s:%td: unrecognized keyword %s",5);
                error(0,0,uVar12,uVar11,lVar19,pcVar7);
                iVar4 = 1;
                local_71 = 0;
              }
            }
          }
        }
LAB_00100573:
        lVar19 = lVar19 + 1;
        free(pcVar7);
        free(__pattern);
        pNVar18 = (NoteGnuProperty_4 *)pcVar6;
        if (param_1 != (FILE *)0x0) goto LAB_0010044d;
LAB_00100590:
        if (pNVar18 == &NoteGnuProperty_4_00103390) goto LAB_0010072a;
        sVar10 = strlen((char *)pNVar18);
        pcVar6 = pNVar18->name + (sVar10 - 0xb);
        cVar2 = (char)pNVar18->namesz;
        if (cVar2 < '\x0e') goto LAB_0010047c;
LAB_001005bb:
        if (cVar2 == ' ') break;
      } while( true );
    }
    pNVar18 = (NoteGnuProperty_4 *)((long)&pNVar18->namesz + 1);
  } while( true );
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
    goto LAB_001008fa;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Output commands to set the LS_COLORS environment variable.\n\nDetermine format of output:\n  -b, --sh, --bourne-shell    output Bourne shell code to set LS_COLORS\n  -c, --csh, --c-shell        output C shell code to set LS_COLORS\n  -p, --print-database        output defaults\n      --print-ls-colors       output fully escaped colors for display\n"
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
                             "\nIf FILE is specified, read it to determine which colors to use for which\nfile types and extensions.  Otherwise, a precompiled database is used.\nFor details on the format of these files, run \'dircolors --print-database\'.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC14;
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
    iVar2 = strcmp("dircolors",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "dircolors";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100add;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","dircolors");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100add:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","dircolors");
    if (pcVar4 == "dircolors") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001008fa:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] main(int param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  char *__s;
  char *pcVar8;
  size_t sVar9;
  undefined **ppuVar10;
  byte bVar11;
  char cVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_38;
  
  bVar11 = 0;
  cVar12 = '\x02';
  ppuVar10 = &long_options;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  while (iVar2 = getopt_long(param_1,param_2,&_LC44,&long_options,0), iVar2 != -1) {
    if (iVar2 == 99) {
      cVar12 = '\x01';
    }
    else if (iVar2 < 100) {
      if (iVar2 == -0x82) {
        usage(0);
        goto LAB_0010190e;
      }
      if (iVar2 != 0x62) {
        if (iVar2 == -0x83) {
          uVar4 = proper_name_lite("H. Peter Anvin","H. Peter Anvin");
          version_etc(_stdout,"dircolors","GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00101835;
      }
      cVar12 = '\0';
    }
    else if (iVar2 == 0x70) {
      bVar11 = 1;
    }
    else {
      if (iVar2 != 0x80) goto LAB_00101835;
      print_ls_colors = '\x01';
    }
  }
  param_1 = param_1 - _optind;
  ppuVar10 = (undefined **)(param_2 + _optind);
  if ((print_ls_colors == '\0') && (bVar11 == 0)) {
    if (1 < param_1) {
LAB_0010190e:
      uVar4 = quote(ppuVar10[1]);
      uVar7 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar7,uVar4);
      goto LAB_00101835;
    }
    if (cVar12 == '\x02') goto LAB_0010163f;
LAB_00101697:
    rpl_obstack_begin(lsc_obstack,0,0,&malloc,free);
    if (param_1 == 0) {
      cVar1 = dc_parse_stream(0,0);
LAB_0010171b:
      uVar4 = lsc_obstack._16_8_;
      if (cVar1 != '\0') {
        sVar9 = lsc_obstack._24_8_ - lsc_obstack._16_8_;
        if (lsc_obstack._24_8_ == lsc_obstack._16_8_) {
          lsc_obstack[0x50] = lsc_obstack[0x50] | 2;
        }
        lsc_obstack._16_8_ = lsc_obstack._24_8_ + (-lsc_obstack._24_8_ & lsc_obstack._48_8_);
        if ((ulong)(lsc_obstack._32_8_ - lsc_obstack._8_8_) <
            (ulong)(lsc_obstack._16_8_ - lsc_obstack._8_8_)) {
          lsc_obstack._16_8_ = lsc_obstack._32_8_;
        }
        pcVar8 = "\';\nexport LS_COLORS\n";
        if (cVar12 != '\0') {
          pcVar8 = "\'\n";
        }
        __s = "LS_COLORS=\'";
        if (cVar12 != '\0') {
          __s = "setenv LS_COLORS \'";
        }
        lsc_obstack._24_8_ = lsc_obstack._16_8_;
        if (print_ls_colors == '\0') {
          fputs_unlocked(__s,_stdout);
        }
        fwrite_unlocked((void *)uVar4,1,sVar9,_stdout);
        if (print_ls_colors == '\0') {
          fputs_unlocked(pcVar8,_stdout);
        }
        goto LAB_001017ea;
      }
    }
    else {
      pcVar8 = *ppuVar10;
      iVar2 = strcmp(pcVar8,"-");
      if ((iVar2 == 0) || (lVar5 = freopen_safer(pcVar8,&_LC55,_stdin), lVar5 != 0)) {
        cVar1 = dc_parse_stream(_stdin,pcVar8);
        iVar2 = rpl_fclose(_stdin);
        if (iVar2 == 0) goto LAB_0010171b;
      }
      uVar4 = quotearg_n_style_colon(0,3,pcVar8);
      piVar6 = __errno_location();
      error(0,*piVar6,&_LC56,uVar4);
    }
    uVar3 = 0;
  }
  else {
    if (cVar12 == '\x02') {
      cVar1 = print_ls_colors;
      if (print_ls_colors == '\0') goto LAB_0010183f;
      pcVar8 = "options --print-database and --print-ls-colors are mutually exclusive";
      if (bVar11 == 0) goto LAB_0010183f;
    }
    else {
      pcVar8 = 
      "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive"
      ;
    }
    uVar4 = dcgettext(0,pcVar8,5);
    error(0,0,uVar4);
LAB_00101835:
    while( true ) {
      cVar1 = usage(1);
LAB_0010183f:
      if (param_1 <= (int)(uint)(bVar11 ^ 1)) break;
      uVar4 = quote(ppuVar10[bVar11 ^ 1]);
      uVar7 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar7,uVar4);
      if (bVar11 != 0) {
        uVar4 = dcgettext(0,"file operands cannot be combined with --print-database (-p)",5);
        __fprintf_chk(_stderr,2,&_LC49,uVar4);
      }
    }
    pcVar8 = "# Configuration file for dircolors, a utility to help you set the";
    if (bVar11 == 0) {
      cVar12 = '\x02';
      if (cVar1 == '\0') {
LAB_0010163f:
        pcVar8 = getenv("SHELL");
        if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
          uVar4 = dcgettext(0,"no SHELL environment variable, and no shell type option given",5);
          error(1,0,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pcVar8 = (char *)last_component(pcVar8);
        iVar2 = strcmp(pcVar8,"csh");
        if (iVar2 == 0) {
          cVar12 = '\x01';
        }
        else {
          iVar2 = strcmp(pcVar8,"tcsh");
          cVar12 = iVar2 == 0;
        }
      }
      goto LAB_00101697;
    }
    for (; pcVar8 + -0x101da0 < (char *)0x15f0; pcVar8 = pcVar8 + sVar9 + 1) {
      puts(pcVar8);
      sVar9 = strlen(pcVar8);
    }
LAB_001017ea:
    uVar3 = 1;
  }
  auVar13._0_4_ = uVar3 ^ 1;
  auVar13._4_4_ = 0;
  auVar13._8_8_ = uStack_38;
  return auVar13;
}


