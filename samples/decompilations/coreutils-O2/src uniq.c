
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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



void size_opt(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoimax(param_1,0,10,&local_28,&_LC1);
  if ((uVar1 < 2) && (-1 < local_28)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar2 = dcgettext(0,param_2,5);
    error(1,0,"%s: %s",param_1,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong writeline(long param_1,char param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  FILE *pFVar3;
  FILE *__n;
  void *__s2;
  void *__ptr;
  
  if (param_3 == 0) {
    uVar2 = (ulong)(output_unique ^ 1);
  }
  else if (param_2 == '\0') {
    uVar2 = (ulong)(output_first_repeated ^ 1);
  }
  else {
    uVar2 = (ulong)(output_later_repeated ^ 1);
  }
  if ((char)uVar2 == '\0') {
    if (count_occurrences != '\0') {
      __printf_chk(2,"%7jd ",param_3 + 1);
    }
    __ptr = *(void **)(param_1 + 0x10);
    __s2 = (void *)0x1;
    pFVar3 = _stdout;
    uVar2 = fwrite_unlocked(__ptr,1,*(size_t *)(param_1 + 8),_stdout);
    if (uVar2 != *(size_t *)(param_1 + 8)) {
      write_error();
      uVar2 = (ulong)ignore_case;
      if (ignore_case == 0) {
        uVar2 = 1;
        if (__n == pFVar3) {
          iVar1 = memcmp(__ptr,__s2,(size_t)__n);
          return (ulong)(iVar1 != 0);
        }
      }
      else if (__n == pFVar3) {
        iVar1 = memcasecmp();
        return (ulong)(iVar1 != 0);
      }
      return uVar2;
    }
  }
  return uVar2;
}



char different(void *param_1,void *param_2,size_t param_3,size_t param_4)

{
  char cVar1;
  int iVar2;
  
  if (ignore_case == '\0') {
    cVar1 = '\x01';
    if (param_3 == param_4) {
      iVar2 = memcmp(param_1,param_2,param_3);
      return iVar2 != 0;
    }
  }
  else {
    cVar1 = ignore_case;
    if (param_3 == param_4) {
      iVar2 = memcasecmp();
      return iVar2 != 0;
    }
  }
  return cVar1;
}



char * find_field_isra_0(long param_1,char *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  wint_t wVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  wint_t local_3c;
  undefined4 local_38 [2];
  long local_30;
  
  pcVar10 = param_2 + param_1 + -1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar11 = param_2 < pcVar10;
  lVar6 = skip_fields;
  lVar8 = check_chars;
  lVar4 = skip_chars;
  if (0 < skip_fields) {
LAB_00100200:
    lVar8 = check_chars;
    lVar4 = skip_chars;
    if (bVar11) {
      do {
        if (*param_2 < '\0') {
          local_38[0] = 0;
          lVar8 = mbrtoc32(&local_3c,param_2,(long)pcVar10 - (long)param_2,local_38);
          wVar5 = local_3c;
          if (-1 < lVar8) goto LAB_00100217;
          bVar7 = 1;
          wVar5 = 0;
LAB_0010021c:
          iVar2 = iswblank(wVar5);
          if (iVar2 == 0) goto LAB_001002a8;
        }
        else {
          lVar8 = 1;
          wVar5 = (int)*param_2;
LAB_00100217:
          bVar7 = (byte)lVar8;
          if (wVar5 != 10) goto LAB_0010021c;
        }
        param_2 = param_2 + bVar7;
        if (pcVar10 <= param_2) goto LAB_00100235;
      } while( true );
    }
  }
joined_r0x00100246:
  do {
    check_chars = lVar8;
    if ((lVar4 < 1) || (!bVar11)) goto LAB_00100340;
    if (*param_2 < '\0') {
      local_38[0] = 0;
      lVar8 = mbrtoc32(&local_3c,param_2,(long)pcVar10 - (long)param_2,local_38);
      if (lVar8 < 0) goto LAB_00100250;
    }
    else {
LAB_00100250:
      lVar8 = 1;
    }
    param_2 = param_2 + lVar8;
    bVar11 = param_2 < pcVar10;
    lVar8 = check_chars;
    lVar4 = lVar4 + -1;
  } while( true );
LAB_001002a8:
  if (pcVar10 <= param_2) {
LAB_00100235:
    bVar11 = param_2 < pcVar10;
    lVar8 = check_chars;
    lVar4 = skip_chars;
    goto joined_r0x00100246;
  }
  cVar1 = *param_2;
  if (cVar1 < '\0') goto LAB_001002e1;
LAB_001002b5:
  uVar9 = 1;
  wVar5 = (int)cVar1;
  while (wVar5 != 10) {
    while( true ) {
      iVar2 = iswblank(wVar5);
      if (iVar2 != 0) goto LAB_00100320;
      param_2 = param_2 + (uVar9 & 0xff);
      if (pcVar10 <= param_2) goto LAB_00100235;
      cVar1 = *param_2;
      if (-1 < cVar1) goto LAB_001002b5;
LAB_001002e1:
      local_38[0] = 0;
      uVar9 = mbrtoc32(&local_3c,param_2,(long)pcVar10 - (long)param_2,local_38);
      wVar5 = local_3c;
      if (-1 < (long)uVar9) break;
      uVar9 = 1;
      wVar5 = 0;
    }
  }
LAB_00100320:
  lVar6 = lVar6 + -1;
  bVar11 = param_2 < pcVar10;
  lVar8 = check_chars;
  lVar4 = skip_chars;
  if (lVar6 < 1) goto joined_r0x00100246;
  goto LAB_00100200;
LAB_00100340:
  lVar6 = (long)pcVar10 - (long)param_2;
  lVar4 = lVar6;
  if ((lVar8 < lVar6) && (sVar3 = __ctype_get_mb_cur_max(), lVar4 = lVar8, 1 < sVar3)) {
    if ((lVar8 < 1) || (pcVar10 = param_2, !bVar11)) {
      lVar4 = 0;
    }
    else {
      do {
        if (*param_2 < '\0') {
          local_38[0] = 0;
          lVar4 = mbrtoc32(&local_3c,param_2,lVar6,local_38);
          if (lVar4 < 0) goto LAB_001003e5;
        }
        else {
LAB_001003e5:
          lVar4 = 1;
        }
        pcVar10 = pcVar10 + lVar4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      lVar4 = (long)pcVar10 - (long)param_2;
    }
  }
  *param_3 = lVar4;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
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
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
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
    iVar2 = strcmp("uniq",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(uint param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  size_t sVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int *piVar19;
  uint uVar20;
  undefined8 extraout_RDX;
  undefined8 *puVar21;
  char *pcVar22;
  char *pcVar23;
  _IO_FILE *p_Var24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long in_FS_OFFSET;
  int local_d8;
  char local_c0;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  undefined8 local_98 [2];
  void *local_88;
  undefined8 local_78;
  undefined8 local_70;
  void *local_68;
  char *local_58 [3];
  long local_40;
  
  puVar4 = PTR__LC37_00102180;
  puVar25 = (undefined8 *)&DAT_00101e00;
  pcVar12 = (char *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar10 = getenv("POSIXLY_CORRECT");
  uVar16 = (ulong)(pcVar10 != (char *)0x0);
  local_58[0] = puVar4;
  local_58[1] = puVar4;
  puVar26 = (undefined8 *)0x0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  cVar2 = '\0';
  uVar20 = 0;
  do {
    pcVar10 = (char *)(ulong)uVar20;
    if ((int)puVar26 != -1) goto LAB_00101450;
    pcVar10 = (char *)(ulong)uVar20;
LAB_001014a2:
    puVar26 = (undefined8 *)0xffffffff;
    if ((int)pcVar12 <= _optind) {
LAB_001014ad:
      pcVar1 = local_58[1];
      pcVar22 = local_58[0];
      if (grouping == 0) {
        if (count_occurrences != '\0') {
          pcVar23 = "printing all duplicated lines and repeat counts is meaningless";
          cVar7 = output_later_repeated;
          goto joined_r0x00101863;
        }
      }
      else {
        if (cVar2 != '\0') {
          pcVar23 = "--group is mutually exclusive with -c/-d/-D/-u";
          goto LAB_00101869;
        }
        pcVar23 = "grouping and printing repeat counts is meaningless";
        cVar7 = count_occurrences;
joined_r0x00101863:
        if (cVar7 != '\0') {
LAB_00101869:
          uVar17 = dcgettext(0,pcVar23,5);
          error(0,0,uVar17);
          goto LAB_0010187e;
        }
      }
      iVar8 = strcmp(local_58[0],"-");
      pcVar10 = pcVar22;
      if (((iVar8 != 0) &&
          (lVar11 = freopen_safer(pcVar22,&_LC52,_stdin), pcVar23 = pcVar22, lVar11 == 0)) ||
         ((iVar8 = strcmp(pcVar1,"-"), iVar8 != 0 &&
          (lVar11 = freopen_safer(pcVar1,&_LC54,_stdout), pcVar23 = pcVar1, lVar11 == 0))))
      goto LAB_00101c18;
      puVar25 = local_98;
      puVar26 = &local_78;
      fadvise(_stdin,2);
      initbuffer(puVar25);
      initbuffer(puVar26);
      cVar2 = output_first_repeated;
      if (((output_unique == '\0') || (output_first_repeated == '\0')) ||
         (count_occurrences != '\0')) {
        cVar2 = '\n';
        lVar11 = readlinebuffer_delim(puVar26,_stdin,10);
        if (lVar11 != 0) {
          pcVar12 = (char *)find_field_isra_0(local_70,local_68,&local_a8);
          if ((*_stdin & 0x10) == 0) {
            bVar3 = true;
            lVar11 = 0;
            do {
              lVar13 = readlinebuffer_delim(puVar25,_stdin,10);
              if (lVar13 == 0) {
                if ((*_stdin & 0x20) == 0) goto LAB_00101a4d;
                goto LAB_00101a61;
              }
              pcVar23 = (char *)find_field_isra_0(puVar25[1],puVar25[2],&local_a0);
              pcVar10 = local_a0;
              bVar6 = different(pcVar23,pcVar12,local_a0,local_a8);
              lVar11 = lVar11 + (ulong)(bVar6 ^ 1);
              if (lVar11 == 0x7fffffffffffffff) {
                if (count_occurrences != '\0') goto LAB_00101dcf;
                lVar11 = 0x7ffffffffffffffe;
LAB_001016b6:
                puVar21 = puVar25;
                if (output_later_repeated == '\0') goto LAB_00101630;
                writeline(puVar26,1,lVar11);
                bVar6 = *_stdin;
                local_a8 = pcVar10;
                pcVar12 = pcVar23;
                puVar5 = puVar25;
                puVar25 = puVar26;
              }
              else {
                if (delimit_groups == 0) {
                  if (bVar6 == 0) goto LAB_001016b6;
                }
                else {
                  if (bVar6 == 0) {
                    if ((lVar11 == 1) &&
                       ((delimit_groups == 1 || ((delimit_groups == 2 && (!bVar3)))))) {
                      pcVar1 = _stdout->_IO_write_ptr;
                      if (pcVar1 < _stdout->_IO_write_end) {
                        _stdout->_IO_write_ptr = pcVar1 + 1;
                        *pcVar1 = '\n';
                      }
                      else {
                        __overflow(_stdout,10);
                      }
                    }
                    goto LAB_001016b6;
                  }
                  if (lVar11 != 0) {
                    bVar3 = false;
                  }
                }
                writeline(puVar26,0,lVar11);
                local_a8 = pcVar10;
                lVar11 = 0;
                pcVar12 = pcVar23;
                puVar21 = puVar26;
                puVar26 = puVar25;
LAB_00101630:
                bVar6 = *_stdin;
                puVar5 = puVar26;
                puVar25 = puVar21;
              }
              puVar26 = puVar5;
              if ((bVar6 & 0x10) != 0) goto LAB_00101a4d;
            } while( true );
          }
          lVar11 = 0;
LAB_00101a4d:
          writeline(puVar26,0,lVar11);
        }
        goto LAB_00101a61;
      }
      if ((*_stdin & 0x10) != 0) goto LAB_00101a61;
      pcVar12 = (char *)0x0;
      local_c0 = count_occurrences;
      goto LAB_00101b45;
    }
LAB_0010146b:
    local_d8 = (int)puVar26;
    lVar11 = (long)_optind;
    iVar8 = (int)pcVar10;
    if (iVar8 == 2) {
LAB_00101d24:
      uVar17 = quote();
      uVar18 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar18,uVar17);
      usage();
      pcVar22 = pcVar10;
LAB_00101d5a:
      p_Var24 = (_IO_FILE *)0x0;
      usage();
      goto LAB_00101d61;
    }
    _optind = _optind + 1;
    uVar20 = iVar8 + 1;
    local_58[iVar8] = (char *)param_2[lVar11];
  } while( true );
LAB_00101dcf:
  uVar17 = dcgettext(0,"too many repeated lines",5);
  error(1,0,uVar17);
  param_2 = (undefined8 *)0x7fffffffffffffff;
LAB_00101c18:
  uVar16 = quotearg_n_style_colon(0,3,pcVar23);
  piVar19 = __errno_location();
  error(1,*piVar19,&_LC53,uVar16);
LAB_00101c44:
  grouping = 3;
LAB_00101450:
  do {
    iVar8 = (int)pcVar10;
    if ((iVar8 != 0) && ((char)uVar16 != '\0')) {
      if (_optind < (int)pcVar12) goto LAB_0010146b;
      goto LAB_001014ad;
    }
    uVar14 = getopt_long((ulong)pcVar12 & 0xffffffff,param_2,"-0123456789Dcdf:is:uw:z",longopts,0);
    local_d8 = (int)uVar14;
    puVar26 = (undefined8 *)(uVar14 & 0xffffffff);
    if (local_d8 == -1) {
      pcVar10 = (char *)((ulong)pcVar10 & 0xffffffff);
      goto LAB_001014a2;
    }
    if (local_d8 < 0x81) {
      if (local_d8 < 0x30) {
        pcVar22 = pcVar10;
        if (local_d8 == -0x82) goto LAB_00101d5a;
        if (local_d8 == 1) {
          if (((*_optarg == '+') && (iVar9 = posix2_version(), 0x2b8 < iVar9 - 0x30db0U)) &&
             (uVar20 = xstrtoimax(_optarg,0,10,&local_78), uVar20 < 2)) {
            skip_chars = local_78;
          }
          else {
            if (iVar8 == 2) goto LAB_00101d24;
            pcVar10 = (char *)(ulong)(iVar8 + 1);
            local_58[iVar8] = _optarg;
          }
          goto LAB_00101450;
        }
        if (local_d8 == -0x83) {
          uVar17 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar18 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
          version_etc(_stdout,&_LC5,"GNU coreutils",_Version,uVar18,uVar17,0,uVar18);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
      }
      else if (local_d8 - 0x30U < 0x51) {
                    /* WARNING: Could not recover jumptable at 0x0010174a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar17 = (*(code *)((long)*(int *)((long)puVar25 + (ulong)(local_d8 - 0x30U) * 4) +
                           (long)puVar25))();
        return uVar17;
      }
    }
LAB_0010187e:
    usage();
    if (_optarg == (char *)0x0) goto LAB_00101c44;
    lVar11 = __xargmatch_internal
                       ("--group",_optarg,grouping_method_string,grouping_method_map,4,_argmatch_die
                        ,1,extraout_RDX);
    grouping = *(int *)(grouping_method_map + lVar11 * 4);
  } while( true );
LAB_00101b45:
  do {
    local_d8 = 10;
    lVar11 = readlinebuffer_delim(puVar25,_stdin,10);
    if (lVar11 == 0) break;
    pcVar10 = (char *)find_field_isra_0(puVar25[1],puVar25[2],&local_a0);
    iVar8 = grouping;
    if ((pcVar12 == (char *)0x0) ||
       (cVar7 = different(pcVar10,pcVar12,local_a0,local_b0), cVar7 != '\0')) {
      if ((iVar8 != 0) &&
         (((iVar8 == 1 || (iVar8 == 4)) || ((local_c0 != '\0' && (iVar8 - 2U < 2)))))) {
        pcVar12 = _stdout->_IO_write_ptr;
        if (pcVar12 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar12 + 1;
          *pcVar12 = '\n';
        }
        else {
          __overflow(_stdout,10);
        }
      }
LAB_00101af8:
      sVar15 = fwrite_unlocked((void *)puVar25[2],1,puVar25[1],_stdout);
      if (sVar15 != puVar25[1]) {
        write_error();
        goto LAB_00101d7a;
      }
      local_c0 = cVar2;
      puVar21 = puVar26;
      local_b0 = local_a0;
      puVar26 = puVar25;
      pcVar12 = pcVar10;
    }
    else {
      puVar21 = puVar25;
      if (iVar8 != 0) goto LAB_00101af8;
    }
    puVar25 = puVar21;
  } while ((*_stdin & 0x10) == 0);
  if (((grouping - 2U & 0xfffffffd) == 0) && (local_c0 != '\0')) {
    pcVar12 = _stdout->_IO_write_ptr;
    p_Var24 = _stdout;
    if (pcVar12 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar12 + 1;
      *pcVar12 = '\n';
    }
    else {
LAB_00101d61:
      __overflow(p_Var24,local_d8);
    }
  }
LAB_00101a61:
  pcVar10 = pcVar22;
  if (((*_stdin & 0x20) == 0) && (iVar8 = rpl_fclose(_stdin), iVar8 == 0)) {
    free(local_88);
    free(local_68);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
LAB_00101d7a:
    uVar17 = quotearg_style(4,pcVar10);
    uVar18 = dcgettext(0,"error reading %s",5);
    piVar19 = __errno_location();
    error(1,*piVar19,uVar18,uVar17);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


