
/* WARNING: Unknown calling convention */

void append_quoted(char *str)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  char *pcVar4;
  
  bVar1 = *str;
  if (bVar1 == 0) {
    return;
  }
  bVar2 = true;
  do {
    if (print_ls_colors == false) {
      if (bVar1 == 0x3d) {
LAB_00100140:
        if (bVar2) {
          if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
            rpl_obstack_newchunk(&lsc_obstack,1);
          }
          pcVar4 = lsc_obstack.next_free + 1;
          *lsc_obstack.next_free = '\\';
          lsc_obstack.next_free = pcVar4;
        }
LAB_00100040:
        bVar2 = true;
        goto LAB_00100050;
      }
      if ((char)bVar1 < '>') {
        if (bVar1 == 0x27) {
          if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
            rpl_obstack_newchunk(&lsc_obstack,1);
          }
          pcVar4 = lsc_obstack.next_free + 1;
          *lsc_obstack.next_free = '\'';
          lsc_obstack.next_free = pcVar4;
          if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
            rpl_obstack_newchunk(&lsc_obstack,1);
          }
          pcVar4 = lsc_obstack.next_free + 1;
          *lsc_obstack.next_free = '\\';
          lsc_obstack.next_free = pcVar4;
          if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
            rpl_obstack_newchunk(&lsc_obstack,1);
          }
          pcVar4 = lsc_obstack.next_free + 1;
          *lsc_obstack.next_free = '\'';
          lsc_obstack.next_free = pcVar4;
        }
        else if (bVar1 == 0x3a) goto LAB_00100140;
        goto LAB_00100040;
      }
      bVar2 = (bool)(bVar2 ^ 1);
      if ((bVar1 & 0xfd) != 0x5c) goto LAB_00100040;
      if (lsc_obstack.chunk_limit == lsc_obstack.next_free) goto LAB_001000b8;
    }
    else {
LAB_00100050:
      if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
LAB_001000b8:
        rpl_obstack_newchunk(&lsc_obstack,1);
      }
    }
    pbVar3 = (byte *)lsc_obstack.next_free + 1;
    *lsc_obstack.next_free = *str;
    lsc_obstack.next_free = (char *)pbVar3;
    bVar1 = ((byte *)str)[1];
    str = (char *)((byte *)str + 1);
    if (bVar1 == 0) {
      return;
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

void append_entry(char prefix,char *item,char *arg)

{
  char *pcVar1;
  char cVar2;
  
  if (print_ls_colors) {
    append_quoted("\x1b[");
    append_quoted(arg);
    if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
      rpl_obstack_newchunk(&lsc_obstack,1);
    }
    pcVar1 = lsc_obstack.next_free + 1;
    *lsc_obstack.next_free = 'm';
    lsc_obstack.next_free = pcVar1;
  }
  if (prefix != '\0') {
    if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
      rpl_obstack_newchunk(&lsc_obstack,1);
    }
    pcVar1 = lsc_obstack.next_free + 1;
    *lsc_obstack.next_free = prefix;
    lsc_obstack.next_free = pcVar1;
  }
  append_quoted(item);
  if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
    rpl_obstack_newchunk(&lsc_obstack,1);
  }
  pcVar1 = lsc_obstack.next_free + 1;
  *lsc_obstack.next_free = (-(print_ls_colors == false) & 0x34U) + 9;
  lsc_obstack.next_free = pcVar1;
  append_quoted(arg);
  if (print_ls_colors == false) {
    cVar2 = ':';
    if (lsc_obstack.chunk_limit != lsc_obstack.next_free) goto LAB_001002ad;
LAB_00100340:
    rpl_obstack_newchunk(&lsc_obstack,1);
  }
  else {
    append_quoted("\x1b[0m");
    if (lsc_obstack.chunk_limit == lsc_obstack.next_free) goto LAB_00100340;
  }
  cVar2 = (-(print_ls_colors == false) & 0x30U) + 10;
LAB_001002ad:
  pcVar1 = lsc_obstack.next_free + 1;
  *lsc_obstack.next_free = cVar2;
  lsc_obstack.next_free = pcVar1;
  return;
}



/* WARNING: Unknown calling convention */

_Bool dc_parse_stream(FILE *fp,char *filename)

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
  char *arg;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  NoteGnuProperty_4 *pNVar14;
  char **ppcVar15;
  NoteGnuProperty_4 *pNVar16;
  char *pcVar17;
  NoteGnuProperty_4 *pNVar18;
  long lVar19;
  long in_FS_OFFSET;
  char *local_88;
  _Bool local_71;
  char *input_line;
  size_t input_line_size;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  input_line = (char *)0x0;
  input_line_size = 0;
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
  local_71 = true;
  pcVar8 = "";
  if (pcVar7 != (char *)0x0) {
    pcVar8 = pcVar7;
  }
  lVar19 = 0;
LAB_00100470:
  lVar19 = lVar19 + 1;
  pNVar18 = (NoteGnuProperty_4 *)pcVar6;
  if (fp == (FILE *)0x0) goto LAB_001005c0;
LAB_0010047d:
  _Var9 = __getdelim(&input_line,&input_line_size,10,(FILE *)fp);
  pNVar18 = (NoteGnuProperty_4 *)input_line;
  if (_Var9 < 1) {
    if ((fp->_flags & 0x20) != 0) {
      uVar11 = quotearg_n_style_colon(0,3,filename);
      uVar12 = dcgettext(0,"%s: read error",5);
      piVar13 = __errno_location();
      error(0,*piVar13,uVar12,uVar11);
      local_71 = false;
    }
    free(input_line);
LAB_0010075a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_71;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  do {
    cVar2 = (char)pNVar18->namesz;
    if ('\r' < cVar2) goto LAB_001005eb;
LAB_001004ac:
    if (cVar2 < '\t') {
      do {
        if (cVar2 == '\0' || cVar2 == '#') goto LAB_00100470;
        cVar2 = (char)pNVar18->namesz;
        pNVar14 = pNVar18;
        if ('\r' < cVar2) goto LAB_001004e1;
        while ((cVar2 < '\t' && (cVar2 != '\0'))) {
          while( true ) {
            cVar2 = *(char *)((long)&pNVar14->namesz + 1);
            pNVar14 = (NoteGnuProperty_4 *)((long)&pNVar14->namesz + 1);
            if (cVar2 < '\x0e') break;
LAB_001004e1:
            if (cVar2 == ' ') goto LAB_001004e5;
          }
        }
LAB_001004e5:
        pcVar7 = (char *)ximemdup0(pNVar18,(long)pNVar14 - (long)pNVar18);
        if ((char)pNVar14->namesz == '\0') {
LAB_00100813:
          uVar11 = quotearg_n_style_colon(0,3,filename);
          uVar12 = dcgettext(0,"%s:%td: invalid line;  missing second token",5);
          error(0,0,uVar12,uVar11,lVar19);
          free(pcVar7);
          local_71 = false;
          goto LAB_00100470;
        }
        do {
          while( true ) {
            pNVar18 = pNVar14;
            cVar2 = *(char *)((long)&pNVar18->namesz + 1);
            pNVar14 = (NoteGnuProperty_4 *)((long)&pNVar18->namesz + 1);
            if ('\r' < cVar2) break;
            if (cVar2 < '\t') goto LAB_00100518;
          }
        } while (cVar2 == ' ');
LAB_00100518:
        if ((cVar2 == '\0') || (pNVar1 = pNVar14, cVar2 == '#')) goto LAB_00100813;
        do {
          pNVar16 = pNVar1;
          cVar2 = *(char *)((long)&pNVar16->namesz + 1);
          pNVar1 = (NoteGnuProperty_4 *)((long)&pNVar16->namesz + 1);
        } while (cVar2 != '\0' && cVar2 != '#');
        cVar2 = (char)pNVar16->namesz;
        if ('\r' < cVar2) goto LAB_0010055c;
        while ('\b' < cVar2) {
          while( true ) {
            cVar2 = pNVar16[-1].name[3];
            pNVar16 = (NoteGnuProperty_4 *)(pNVar16[-1].name + 3);
            if (cVar2 < '\x0e') break;
LAB_0010055c:
            if (cVar2 != ' ') goto LAB_00100560;
          }
        }
LAB_00100560:
        arg = (char *)ximemdup0(pNVar14,(long)pNVar16 - (long)pNVar18);
        iVar3 = c_strcasecmp(pcVar7,&_LC5);
        pcVar17 = local_88;
        if ((iVar3 == 0) || (iVar3 = c_strcasecmp(pcVar7,"COLORTERM"), pcVar17 = pcVar8, iVar3 == 0)
           ) {
          if (iVar4 != 2) {
            iVar4 = fnmatch(arg,pcVar17,0);
            iVar4 = (uint)(iVar4 == 0) * 2;
          }
        }
        else {
          if (iVar4 == 2) {
            cVar2 = *pcVar7;
            iVar4 = 1;
          }
          else {
            if (iVar4 == 0) goto LAB_001005a3;
            cVar2 = *pcVar7;
          }
          if (cVar2 == '.') {
            append_entry('*',pcVar7,arg);
          }
          else if (cVar2 == '*') {
            append_entry('\0',pcVar7,arg);
          }
          else {
            iVar3 = c_strcasecmp(pcVar7,"OPTIONS");
            if (((iVar3 != 0) && (iVar3 = c_strcasecmp(pcVar7,"COLOR"), iVar3 != 0)) &&
               (iVar3 = c_strcasecmp(pcVar7,"EIGHTBIT"), iVar3 != 0)) {
              pcVar17 = "NORMAL";
              iVar3 = 0;
              ppcVar15 = slack_codes;
              do {
                ppcVar15 = ppcVar15 + 1;
                iVar5 = c_strcasecmp(pcVar7,pcVar17);
                if (iVar5 == 0) {
                  append_entry('\0',ls_codes[iVar3],arg);
                  goto LAB_001005a3;
                }
                pcVar17 = *ppcVar15;
                iVar3 = iVar3 + 1;
              } while (pcVar17 != (char *)0x0);
              if (iVar4 - 1U < 2) {
                if (filename == (char *)0x0) {
                  uVar11 = dcgettext(0,"<internal>",5);
                }
                else {
                  uVar11 = quotearg_n_style_colon(0,3);
                }
                uVar12 = dcgettext(0,"%s:%td: unrecognized keyword %s",5);
                error(0,0,uVar12,uVar11,lVar19,pcVar7);
                iVar4 = 1;
                local_71 = false;
              }
            }
          }
        }
LAB_001005a3:
        lVar19 = lVar19 + 1;
        free(pcVar7);
        free(arg);
        pNVar18 = (NoteGnuProperty_4 *)pcVar6;
        if (fp != (FILE *)0x0) goto LAB_0010047d;
LAB_001005c0:
        if (pNVar18 == &NoteGnuProperty_4_001033b0) goto LAB_0010075a;
        sVar10 = strlen((char *)pNVar18);
        pcVar6 = pNVar18->name + (sVar10 - 0xb);
        cVar2 = (char)pNVar18->namesz;
        if (cVar2 < '\x0e') goto LAB_001004ac;
LAB_001005eb:
        if (cVar2 == ' ') break;
      } while( true );
    }
    pNVar18 = (NoteGnuProperty_4 *)((long)&pNVar18->namesz + 1);
  } while( true );
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
    goto LAB_0010092a;
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
    iVar2 = strcmp("dircolors",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "dircolors";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100b0d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","dircolors");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100b0d:
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
LAB_0010092a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char **ppcVar1;
  _Bool _Var2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  char *__s;
  char *__s_00;
  size_t sVar11;
  byte bVar12;
  char cVar13;
  
  bVar12 = 0;
  cVar13 = '\x02';
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  while (iVar3 = getopt_long(argc,argv,&_LC44,long_options,0), iVar4 = _optind, iVar3 != -1) {
    if (iVar3 == 99) {
      cVar13 = '\x01';
    }
    else if (iVar3 < 100) {
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      if (iVar3 != 0x62) {
        if (iVar3 == -0x83) {
          uVar6 = proper_name_lite("H. Peter Anvin","H. Peter Anvin");
          version_etc(_stdout,"dircolors","GNU coreutils",_Version,uVar6,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00101855;
      }
      cVar13 = '\0';
    }
    else if (iVar3 == 0x70) {
      bVar12 = 1;
    }
    else {
      if (iVar3 != 0x80) goto LAB_00101855;
      print_ls_colors = true;
    }
  }
  ppcVar1 = argv + _optind;
  if ((print_ls_colors != false) || (bVar12 != 0)) {
    if (cVar13 == '\x02') {
      if ((print_ls_colors == false) ||
         (pcVar7 = "options --print-database and --print-ls-colors are mutually exclusive",
         bVar12 == 0)) {
        if ((int)(uint)(bVar12 ^ 1) < argc - _optind) {
          uVar6 = quote(ppcVar1[bVar12 ^ 1]);
          uVar10 = dcgettext(0,"extra operand %s",5);
          error(0,0,uVar10,uVar6);
          if (bVar12 != 0) {
            uVar6 = dcgettext(0,"file operands cannot be combined with --print-database (-p)",5);
            __fprintf_chk(_stderr,2,&_LC49,uVar6);
          }
          goto LAB_00101855;
        }
        pcVar7 = "# Configuration file for dircolors, a utility to help you set the";
        if (bVar12 == 0) {
          cVar13 = '\x02';
          if (print_ls_colors == false) goto LAB_0010165f;
          goto LAB_001016b7;
        }
        for (; pcVar7 + -0x101dc0 < (char *)0x15f0; pcVar7 = pcVar7 + sVar11 + 1) {
          puts(pcVar7);
          sVar11 = strlen(pcVar7);
        }
        goto LAB_0010180a;
      }
    }
    else {
      pcVar7 = 
      "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive"
      ;
    }
    uVar6 = dcgettext(0,pcVar7,5);
    error(0,0,uVar6);
LAB_00101855:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (1 < argc - _optind) {
    uVar6 = quote(ppcVar1[1]);
    uVar10 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar10,uVar6);
    goto LAB_00101855;
  }
  if (cVar13 == '\x02') {
LAB_0010165f:
    pcVar7 = getenv("SHELL");
    if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
      uVar6 = dcgettext(0,"no SHELL environment variable, and no shell type option given",5);
      error(1,0,uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar7 = (char *)last_component(pcVar7);
    iVar3 = strcmp(pcVar7,"csh");
    if (iVar3 == 0) {
      cVar13 = '\x01';
    }
    else {
      iVar3 = strcmp(pcVar7,"tcsh");
      cVar13 = iVar3 == 0;
    }
  }
LAB_001016b7:
  rpl_obstack_begin(&lsc_obstack,0,0,&malloc,free);
  if (argc == iVar4) {
    _Var2 = dc_parse_stream((FILE *)0x0,(char *)0x0);
LAB_0010173b:
    pcVar7 = lsc_obstack.object_base;
    if (_Var2 != false) {
      sVar11 = (long)lsc_obstack.next_free - (long)lsc_obstack.object_base;
      if (lsc_obstack.next_free == lsc_obstack.object_base) {
        lsc_obstack._80_1_ = lsc_obstack._80_1_ | 2;
      }
      lsc_obstack.object_base =
           lsc_obstack.next_free + (-(long)lsc_obstack.next_free & lsc_obstack.alignment_mask);
      if ((ulong)((long)lsc_obstack.chunk_limit - (long)lsc_obstack.chunk) <
          (ulong)((long)(lsc_obstack.next_free +
                        (-(long)lsc_obstack.next_free & lsc_obstack.alignment_mask)) -
                 (long)lsc_obstack.chunk)) {
        lsc_obstack.object_base = lsc_obstack.chunk_limit;
      }
      __s = "\';\nexport LS_COLORS\n";
      if (cVar13 != '\0') {
        __s = "\'\n";
      }
      __s_00 = "LS_COLORS=\'";
      if (cVar13 != '\0') {
        __s_00 = "setenv LS_COLORS \'";
      }
      lsc_obstack.next_free = lsc_obstack.object_base;
      if (print_ls_colors == false) {
        fputs_unlocked(__s_00,_stdout);
      }
      fwrite_unlocked(pcVar7,1,sVar11,_stdout);
      if (print_ls_colors == false) {
        fputs_unlocked(__s,_stdout);
      }
LAB_0010180a:
      uVar5 = 1;
      goto LAB_0010180f;
    }
  }
  else {
    pcVar7 = *ppcVar1;
    iVar4 = strcmp(pcVar7,"-");
    if ((iVar4 == 0) || (lVar8 = freopen_safer(pcVar7,&_LC55,_stdin), lVar8 != 0)) {
      _Var2 = dc_parse_stream(_stdin,pcVar7);
      iVar4 = rpl_fclose(_stdin);
      if (iVar4 == 0) goto LAB_0010173b;
    }
    uVar6 = quotearg_n_style_colon(0,3,pcVar7);
    piVar9 = __errno_location();
    error(0,*piVar9,&_LC56,uVar6);
  }
  uVar5 = 0;
LAB_0010180f:
  return uVar5 ^ 1;
}


