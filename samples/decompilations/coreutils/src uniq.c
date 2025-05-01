
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void write_error(void)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long lStack_30;
  
  puVar3 = (uint *)__errno_location();
  uVar2 = *puVar3;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar4 = dcgettext(0,"write error",5);
  uVar5 = (ulong)uVar2;
  uVar6 = 1;
  error(1,uVar5,uVar4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = xstrtoimax();
  if ((uVar2 < 2) && (-1 < lStack_30)) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar4 = dcgettext(0,uVar5,5);
    error(1,0,"%s: %s",uVar6,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

idx_t size_opt(char *opt,char *msgid)

{
  uint uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  intmax_t size;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoimax(opt,0,10,&size,&_LC1);
  if ((uVar1 < 2) && (-1 < size)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return size;
    }
  }
  else {
    uVar2 = dcgettext(0,msgid,5);
    error(1,0,"%s: %s",opt,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void writeline(linebuffer *line,_Bool match,intmax_t linecount)

{
  bool bVar1;
  size_t sVar2;
  FILE *pFVar3;
  FILE *__n;
  void *__s2;
  char *__ptr;
  
  if (linecount == 0) {
    bVar1 = !output_unique;
  }
  else if (match) {
    bVar1 = !output_later_repeated;
  }
  else {
    bVar1 = !output_first_repeated;
  }
  if (!bVar1) {
    if (count_occurrences) {
      __printf_chk(2,"%7jd ",linecount + 1);
    }
    __ptr = line->buffer;
    __s2 = (void *)0x1;
    pFVar3 = _stdout;
    sVar2 = fwrite_unlocked(__ptr,1,line->length,_stdout);
    if (sVar2 != line->length) {
      write_error();
      if (ignore_case == false) {
        if (__n == pFVar3) {
          memcmp(__ptr,__s2,(size_t)__n);
          return;
        }
      }
      else if (__n == pFVar3) {
        memcasecmp();
        return;
      }
      return;
    }
  }
  return;
}



/* WARNING: Unknown calling convention */

_Bool different(char *old,char *new,idx_t oldlen,idx_t newlen)

{
  undefined1 uVar1;
  int iVar2;
  
  if (ignore_case) {
    uVar1 = ignore_case;
    if (oldlen == newlen) {
      iVar2 = memcasecmp();
      return iVar2 != 0;
    }
  }
  else {
    uVar1 = 1;
    if (oldlen == newlen) {
      iVar2 = memcmp(old,new,oldlen);
      return iVar2 != 0;
    }
  }
  return (_Bool)uVar1;
}



char * find_field(linebuffer *line,idx_t *plen)

{
  char cVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  long *in_RDX;
  wint_t wVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  idx_t *piVar11;
  long in_FS_OFFSET;
  bool bVar12;
  char32_t ch;
  mbstate_t mbs;
  
  piVar11 = (idx_t *)((long)plen + -1 + (long)line);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  bVar12 = plen < piVar11;
  lVar7 = skip_fields;
  lVar9 = check_chars;
  lVar5 = skip_chars;
  if (0 < skip_fields) {
LAB_00100200:
    lVar9 = check_chars;
    lVar5 = skip_chars;
    if (bVar12) {
      do {
        if ((char)*plen < '\0') {
          mbs.__count = 0;
          lVar9 = mbrtoc32(&ch,plen,(long)piVar11 - (long)plen,&mbs);
          wVar6 = ch;
          if (-1 < lVar9) goto LAB_00100217;
          bVar8 = 1;
          wVar6 = 0;
LAB_0010021c:
          iVar3 = iswblank(wVar6);
          if (iVar3 == 0) goto LAB_001002a8;
        }
        else {
          lVar9 = 1;
          wVar6 = (int)(char)*plen;
LAB_00100217:
          bVar8 = (byte)lVar9;
          if (wVar6 != 10) goto LAB_0010021c;
        }
        plen = (idx_t *)((long)plen + (ulong)bVar8);
        if (piVar11 <= plen) goto LAB_00100235;
      } while( true );
    }
  }
joined_r0x00100246:
  do {
    check_chars = lVar9;
    if ((lVar5 < 1) || (!bVar12)) goto LAB_00100340;
    if ((char)*plen < '\0') {
      mbs.__count = 0;
      lVar9 = mbrtoc32(&ch,plen,(long)piVar11 - (long)plen,&mbs);
      if (lVar9 < 0) goto LAB_00100250;
    }
    else {
LAB_00100250:
      lVar9 = 1;
    }
    plen = (idx_t *)((long)plen + lVar9);
    bVar12 = plen < piVar11;
    lVar9 = check_chars;
    lVar5 = lVar5 + -1;
  } while( true );
LAB_001002a8:
  if (piVar11 <= plen) {
LAB_00100235:
    bVar12 = plen < piVar11;
    lVar9 = check_chars;
    lVar5 = skip_chars;
    goto joined_r0x00100246;
  }
  cVar1 = (char)*plen;
  if (cVar1 < '\0') goto LAB_001002e1;
LAB_001002b5:
  uVar10 = 1;
  wVar6 = (int)cVar1;
  while (wVar6 != 10) {
    while( true ) {
      iVar3 = iswblank(wVar6);
      if (iVar3 != 0) goto LAB_00100320;
      plen = (idx_t *)((long)plen + (uVar10 & 0xff));
      if (piVar11 <= plen) goto LAB_00100235;
      cVar1 = (char)*plen;
      if (-1 < cVar1) goto LAB_001002b5;
LAB_001002e1:
      mbs.__count = 0;
      uVar10 = mbrtoc32(&ch,plen,(long)piVar11 - (long)plen,&mbs);
      wVar6 = ch;
      if (-1 < (long)uVar10) break;
      uVar10 = 1;
      wVar6 = 0;
    }
  }
LAB_00100320:
  lVar7 = lVar7 + -1;
  bVar12 = plen < piVar11;
  lVar9 = check_chars;
  lVar5 = skip_chars;
  if (lVar7 < 1) goto joined_r0x00100246;
  goto LAB_00100200;
LAB_00100340:
  lVar7 = (long)piVar11 - (long)plen;
  lVar5 = lVar7;
  if ((lVar9 < lVar7) && (sVar4 = __ctype_get_mb_cur_max(), lVar5 = lVar9, 1 < sVar4)) {
    if ((lVar9 < 1) || (piVar11 = plen, !bVar12)) {
      lVar5 = 0;
    }
    else {
      do {
        if ((char)*plen < '\0') {
          mbs.__count = 0;
          lVar5 = mbrtoc32(&ch,plen,lVar7,&mbs);
          if (lVar5 < 0) goto LAB_001003e5;
        }
        else {
LAB_001003e5:
          lVar5 = 1;
        }
        piVar11 = (idx_t *)((long)piVar11 + lVar5);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar5 = (long)piVar11 - (long)plen;
    }
  }
  *in_RDX = lVar5;
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (char *)plen;
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
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001004aa;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [INPUT [OUTPUT]]\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Filter adjacent matching lines from INPUT (or standard input),\nwriting to OUTPUT (or standard output).\n\nWith no options, matching lines are merged to the first occurrence.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c, --count           prefix lines by the number of occurrences\n  -d, --repeated        only print duplicate lines, one for each group\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -D                    print all duplicate lines\n      --all-repeated[=METHOD]  like -D, but allow separating groups\n                                 with an empty line;\n                                 METHOD={none(default),prepend,separate}\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -f, --skip-fields=N   avoid comparing the first N fields\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --group[=METHOD]  show all items, separating groups with an empty line;\n                          METHOD={separate(default),prepend,append,both}\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --ignore-case     ignore differences in case when comparing\n  -s, --skip-chars=N    avoid comparing the first N characters\n  -u, --unique          only print unique lines\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated     line delimiter is NUL, not newline\n",5)
  ;
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -w, --check-chars=N   compare no more than N characters in lines\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nA field is a run of blanks (usually spaces and/or TABs), then non-blank\ncharacters.  Fields are skipped before chars.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n\'uniq\' does not detect repeated lines unless they are adjacent.\nYou may want to sort the input first, or use \'sort -u\' without \'uniq\'.\n"
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
    iVar2 = strcmp("uniq",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC5;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_001007dd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001007dd:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
    if (puVar7 == &_LC5) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001004aa:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  grouping_method gVar6;
  undefined *puVar7;
  linebuffer *plVar8;
  _Bool _Var9;
  _Bool _Var10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  size_t sVar18;
  char *pcVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int *piVar23;
  uint uVar24;
  linebuffer *plVar25;
  char *pcVar26;
  linebuffer *plVar27;
  linebuffer *line;
  long in_FS_OFFSET;
  char local_c0;
  idx_t local_b0;
  idx_t prevlen;
  idx_t thislen;
  linebuffer lb1;
  intmax_t size;
  linebuffer *local_70;
  idx_t *local_68;
  char *file [2];
  
  puVar7 = PTR__LC37_00102180;
  plVar27 = (linebuffer *)&DAT_00101e00;
  pcVar15 = (char *)(ulong)(uint)argc;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar13 = getenv("POSIXLY_CORRECT");
  uVar20 = (ulong)(pcVar13 != (char *)0x0);
  file[0] = puVar7;
  file[1] = puVar7;
  line = (linebuffer *)0x0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  cVar3 = '\0';
  uVar24 = 0;
  do {
    pcVar13 = (char *)(ulong)uVar24;
    if ((int)line != -1) goto LAB_00101450;
    uVar17 = (ulong)uVar24;
LAB_001014a2:
    line = (linebuffer *)0xffffffff;
    iVar11 = (int)uVar17;
    if ((int)pcVar15 <= _optind) {
LAB_001014ad:
      pcVar19 = file[1];
      pcVar13 = file[0];
      if (grouping == GM_NONE) {
        if (count_occurrences != false) {
          pcVar26 = "printing all duplicated lines and repeat counts is meaningless";
          cVar4 = output_later_repeated;
          goto joined_r0x00101863;
        }
      }
      else {
        if (cVar3 != '\0') {
          pcVar26 = "--group is mutually exclusive with -c/-d/-D/-u";
          goto LAB_00101869;
        }
        pcVar26 = "grouping and printing repeat counts is meaningless";
        cVar4 = count_occurrences;
joined_r0x00101863:
        if (cVar4 != '\0') {
LAB_00101869:
          uVar21 = dcgettext(0,pcVar26,5);
          error(0,0,uVar21);
LAB_0010187e:
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
      }
      iVar11 = strcmp(file[0],"-");
      if (((iVar11 != 0) &&
          (lVar14 = freopen_safer(pcVar13,&_LC52,_stdin), pcVar26 = pcVar13, lVar14 == 0)) ||
         ((iVar11 = strcmp(pcVar19,"-"), iVar11 != 0 &&
          (lVar14 = freopen_safer(pcVar19,&_LC54,_stdout), pcVar26 = pcVar19, lVar14 == 0))))
      goto LAB_001018ce;
      plVar27 = &lb1;
      line = (linebuffer *)&size;
      fadvise(_stdin,2);
      initbuffer(plVar27);
      initbuffer(line);
      _Var9 = output_first_repeated;
      if (((output_unique == false) || (output_first_repeated == false)) ||
         (count_occurrences != false)) {
        cVar3 = '\n';
        lVar14 = readlinebuffer_delim(line,_stdin,10);
        if (lVar14 != 0) {
          pcVar15 = find_field(local_70,local_68);
          if ((*_stdin & 0x10) == 0) {
            bVar5 = true;
            lVar14 = 0;
            do {
              lVar16 = readlinebuffer_delim(plVar27,_stdin,10);
              if (lVar16 == 0) {
                if ((*_stdin & 0x20) == 0) goto LAB_00101a4d;
                goto LAB_00101a61;
              }
              pcVar26 = find_field((linebuffer *)plVar27->length,(idx_t *)plVar27->buffer);
              _Var9 = different(pcVar26,pcVar15,thislen,prevlen);
              lVar14 = lVar14 + (ulong)!_Var9;
              if (lVar14 == 0x7fffffffffffffff) {
                if (count_occurrences != false) goto LAB_00101dcf;
                lVar14 = 0x7ffffffffffffffe;
LAB_001016b6:
                plVar25 = plVar27;
                if (output_later_repeated == false) goto LAB_00101630;
                writeline(line,true,lVar14);
                bVar1 = *_stdin;
                prevlen = thislen;
                pcVar15 = pcVar26;
                plVar8 = plVar27;
                plVar27 = line;
              }
              else {
                if (delimit_groups == DM_NONE) {
                  if (!_Var9) goto LAB_001016b6;
                }
                else {
                  if (!_Var9) {
                    if ((lVar14 == 1) &&
                       ((delimit_groups == DM_PREPEND ||
                        ((delimit_groups == DM_SEPARATE && (!bVar5)))))) {
                      pcVar19 = _stdout->_IO_write_ptr;
                      if (pcVar19 < _stdout->_IO_write_end) {
                        _stdout->_IO_write_ptr = pcVar19 + 1;
                        *pcVar19 = '\n';
                      }
                      else {
                        __overflow(_stdout,10);
                      }
                    }
                    goto LAB_001016b6;
                  }
                  if (lVar14 != 0) {
                    bVar5 = false;
                  }
                }
                writeline(line,false,lVar14);
                prevlen = thislen;
                lVar14 = 0;
                pcVar15 = pcVar26;
                plVar25 = line;
                line = plVar27;
LAB_00101630:
                bVar1 = *_stdin;
                plVar8 = line;
                plVar27 = plVar25;
              }
              line = plVar8;
              if ((bVar1 & 0x10) != 0) goto LAB_00101a4d;
            } while( true );
          }
          lVar14 = 0;
LAB_00101a4d:
          writeline(line,false,lVar14);
        }
        goto LAB_00101a61;
      }
      if ((*_stdin & 0x10) != 0) goto LAB_00101a61;
      pcVar15 = (char *)0x0;
      local_c0 = count_occurrences;
      goto LAB_00101b45;
    }
LAB_0010146b:
    lVar14 = (long)_optind;
    if (iVar11 == 2) {
LAB_00101d24:
      uVar21 = quote();
      uVar22 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar22,uVar21);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    _optind = _optind + 1;
    uVar24 = iVar11 + 1;
    file[iVar11] = argv[lVar14];
  } while( true );
LAB_00101dcf:
  uVar21 = dcgettext(0,"too many repeated lines",5);
  error(1,0,uVar21);
  argv = (char **)0x7fffffffffffffff;
  pcVar13 = (char *)thislen;
LAB_001018ce:
  uVar20 = quotearg_n_style_colon(0,3,pcVar26);
  piVar23 = __errno_location();
  error(1,*piVar23,&_LC53,uVar20);
  grouping = GM_SEPARATE;
LAB_00101450:
  while( true ) {
    iVar11 = (int)pcVar13;
    if ((iVar11 != 0) && ((char)uVar20 != '\0')) break;
    uVar17 = getopt_long((ulong)pcVar15 & 0xffffffff,argv,"-0123456789Dcdf:is:uw:z",longopts,0);
    iVar12 = (int)uVar17;
    line = (linebuffer *)(uVar17 & 0xffffffff);
    if (iVar12 == -1) {
      uVar17 = (ulong)pcVar13 & 0xffffffff;
      goto LAB_001014a2;
    }
    if (0x80 < iVar12) goto LAB_0010187e;
    if (0x2f < iVar12) {
      if (iVar12 - 0x30U < 0x51) {
                    /* WARNING: Could not recover jumptable at 0x0010174a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar11 = (*(code *)((long)&plVar27->size +
                           (long)*(int *)((long)&plVar27->size + (ulong)(iVar12 - 0x30U) * 4)))();
        return iVar11;
      }
      goto LAB_0010187e;
    }
    if (iVar12 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    if (iVar12 != 1) {
      if (iVar12 == -0x83) {
        uVar21 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar22 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
        version_etc(_stdout,&_LC5,"GNU coreutils",_Version,uVar22,uVar21,0,uVar22);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      goto LAB_0010187e;
    }
    if (((*_optarg == '+') && (iVar12 = posix2_version(), 0x2b8 < iVar12 - 0x30db0U)) &&
       (uVar24 = xstrtoimax(_optarg,0,10,&size), uVar24 < 2)) {
      skip_chars = size;
    }
    else {
      if (iVar11 == 2) goto LAB_00101d24;
      pcVar13 = (char *)(ulong)(iVar11 + 1);
      file[iVar11] = _optarg;
    }
  }
  if (_optind < (int)pcVar15) goto LAB_0010146b;
  goto LAB_001014ad;
LAB_00101b45:
  do {
    lVar14 = readlinebuffer_delim(plVar27,_stdin,10);
    if (lVar14 == 0) break;
    pcVar19 = find_field((linebuffer *)plVar27->length,(idx_t *)plVar27->buffer);
    gVar6 = grouping;
    if ((pcVar15 == (char *)0x0) || (_Var10 = different(pcVar19,pcVar15,thislen,local_b0), _Var10))
    {
      if ((gVar6 != GM_NONE) &&
         (((gVar6 == GM_PREPEND || (gVar6 == GM_BOTH)) ||
          ((local_c0 != '\0' && (gVar6 - GM_APPEND < 2)))))) {
        pcVar15 = _stdout->_IO_write_ptr;
        if (pcVar15 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar15 + 1;
          *pcVar15 = '\n';
        }
        else {
          __overflow(_stdout,10);
        }
      }
LAB_00101af8:
      sVar18 = fwrite_unlocked(plVar27->buffer,1,plVar27->length,_stdout);
      if (sVar18 != plVar27->length) {
        write_error();
        goto LAB_00101d7a;
      }
      local_c0 = _Var9;
      plVar25 = line;
      local_b0 = thislen;
      line = plVar27;
      pcVar15 = pcVar19;
    }
    else {
      plVar25 = plVar27;
      if (gVar6 != GM_NONE) goto LAB_00101af8;
    }
    plVar27 = plVar25;
  } while ((*_stdin & 0x10) == 0);
  if (((grouping - GM_APPEND & 0xfffffffd) == 0) && (local_c0 != '\0')) {
    pcVar15 = _stdout->_IO_write_ptr;
    if (pcVar15 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar15 + 1;
      *pcVar15 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
  }
LAB_00101a61:
  pcVar19 = pcVar13;
  if (((*_stdin & 0x20) == 0) && (iVar11 = rpl_fclose(_stdin), iVar11 == 0)) {
    free(lb1.buffer);
    free(local_68);
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
LAB_00101d7a:
    uVar21 = quotearg_style(4,pcVar19);
    uVar22 = dcgettext(0,"error reading %s",5);
    piVar23 = __errno_location();
    error(1,*piVar23,uVar22,uVar21);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


