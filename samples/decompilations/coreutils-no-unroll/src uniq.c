
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

char * writeline_part_0(long param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  long *extraout_RDX;
  char *pcVar7;
  wint_t wVar8;
  void *__ptr;
  long lVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  wint_t wStack_54;
  undefined4 auStack_50 [2];
  long lStack_48;
  long lStack_38;
  
  if (count_occurrences != '\0') {
    __printf_chk(2,"%7jd ",param_2 + 1);
  }
  __ptr = *(void **)(param_1 + 0x10);
  pcVar7 = (char *)0x1;
  pcVar4 = (char *)fwrite_unlocked(__ptr,1,*(size_t *)(param_1 + 8),_stdout);
  if (pcVar4 == *(char **)(param_1 + 8)) {
    return pcVar4;
  }
  write_error();
  pcVar4 = pcVar7 + -1 + (long)__ptr;
  lStack_48 = *(long *)(in_FS_OFFSET + 0x28);
  bVar14 = pcVar7 < pcVar4;
  lVar9 = skip_fields;
  lStack_38 = param_1;
  lVar12 = check_chars;
  lVar10 = skip_chars;
  if (0 < skip_fields) {
LAB_00100170:
    lVar12 = check_chars;
    lVar10 = skip_chars;
    if (bVar14) {
      do {
        if (*pcVar7 < '\0') {
          auStack_50[0] = 0;
          lVar12 = mbrtoc32(&wStack_54,pcVar7,(long)pcVar4 - (long)pcVar7,auStack_50);
          wVar8 = wStack_54;
          if (-1 < lVar12) goto LAB_00100187;
          bVar11 = 1;
          wVar8 = 0;
LAB_0010018c:
          iVar3 = iswblank(wVar8);
          if (iVar3 == 0) goto LAB_00100218;
        }
        else {
          lVar12 = 1;
          wVar8 = (int)*pcVar7;
LAB_00100187:
          bVar11 = (byte)lVar12;
          if (wVar8 != 10) goto LAB_0010018c;
        }
        pcVar7 = pcVar7 + bVar11;
        if (pcVar4 <= pcVar7) goto LAB_001001a5;
      } while( true );
    }
  }
joined_r0x001001b6:
  do {
    check_chars = lVar12;
    if ((lVar10 < 1) || (!bVar14)) goto LAB_001002b0;
    if (*pcVar7 < '\0') {
      auStack_50[0] = 0;
      lVar12 = mbrtoc32(&wStack_54,pcVar7,(long)pcVar4 - (long)pcVar7,auStack_50);
      if (lVar12 < 0) goto LAB_001001c0;
    }
    else {
LAB_001001c0:
      lVar12 = 1;
    }
    pcVar7 = pcVar7 + lVar12;
    bVar14 = pcVar7 < pcVar4;
    lVar12 = check_chars;
    lVar10 = lVar10 + -1;
  } while( true );
LAB_00100218:
  if (pcVar4 <= pcVar7) {
LAB_001001a5:
    bVar14 = pcVar7 < pcVar4;
    lVar12 = check_chars;
    lVar10 = skip_chars;
    goto joined_r0x001001b6;
  }
  cVar2 = *pcVar7;
  if (cVar2 < '\0') goto LAB_00100251;
LAB_00100225:
  uVar13 = 1;
  wVar8 = (int)cVar2;
  while (wVar8 != 10) {
    while( true ) {
      iVar3 = iswblank(wVar8);
      if (iVar3 != 0) goto LAB_00100290;
      pcVar7 = pcVar7 + (uVar13 & 0xff);
      if (pcVar4 <= pcVar7) goto LAB_001001a5;
      cVar2 = *pcVar7;
      if (-1 < cVar2) goto LAB_00100225;
LAB_00100251:
      auStack_50[0] = 0;
      uVar13 = mbrtoc32(&wStack_54,pcVar7,(long)pcVar4 - (long)pcVar7,auStack_50);
      wVar8 = wStack_54;
      if (-1 < (long)uVar13) break;
      uVar13 = 1;
      wVar8 = 0;
    }
  }
LAB_00100290:
  lVar9 = lVar9 + -1;
  bVar14 = pcVar7 < pcVar4;
  lVar12 = check_chars;
  lVar10 = skip_chars;
  if (lVar9 < 1) goto joined_r0x001001b6;
  goto LAB_00100170;
LAB_001002b0:
  lVar9 = (long)pcVar4 - (long)pcVar7;
  lVar10 = lVar9;
  if ((lVar12 < lVar9) && (sVar5 = __ctype_get_mb_cur_max(), lVar10 = lVar12, 1 < sVar5)) {
    if ((lVar12 < 1) || (pcVar4 = pcVar7, !bVar14)) {
      lVar10 = 0;
    }
    else {
      do {
        if (-1 < *pcVar7) {
          pcVar4 = pcVar4 + 1;
          pcVar1 = pcVar4 + lVar12 + -1;
          if (lVar12 + -1 != 0) {
            do {
              pcVar4 = pcVar4 + 1;
            } while (pcVar1 != pcVar4 && -1 < (long)pcVar1 - (long)pcVar4);
          }
          break;
        }
        auStack_50[0] = 0;
        uVar6 = mbrtoc32(&wStack_54,pcVar7,lVar9,auStack_50);
        uVar13 = 1;
        if (-1 < (long)uVar6) {
          uVar13 = uVar6 & 0xff;
        }
        pcVar4 = pcVar4 + uVar13;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      lVar10 = (long)pcVar4 - (long)pcVar7;
    }
  }
  *extraout_RDX = lVar10;
  if (lStack_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar7;
}



char * find_field_isra_0(long param_1,char *param_2,long *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  char *pcVar6;
  wint_t wVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  wint_t local_4c;
  undefined4 local_48 [2];
  long local_40;
  
  pcVar6 = param_2 + param_1 + -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar13 = param_2 < pcVar6;
  lVar8 = skip_fields;
  lVar11 = check_chars;
  lVar9 = skip_chars;
  if (0 < skip_fields) {
LAB_00100170:
    lVar11 = check_chars;
    lVar9 = skip_chars;
    if (bVar13) {
      do {
        if (*param_2 < '\0') {
          local_48[0] = 0;
          lVar11 = mbrtoc32(&local_4c,param_2,(long)pcVar6 - (long)param_2,local_48);
          wVar7 = local_4c;
          if (-1 < lVar11) goto LAB_00100187;
          bVar10 = 1;
          wVar7 = 0;
LAB_0010018c:
          iVar3 = iswblank(wVar7);
          if (iVar3 == 0) goto LAB_00100218;
        }
        else {
          lVar11 = 1;
          wVar7 = (int)*param_2;
LAB_00100187:
          bVar10 = (byte)lVar11;
          if (wVar7 != 10) goto LAB_0010018c;
        }
        param_2 = param_2 + bVar10;
        if (pcVar6 <= param_2) goto LAB_001001a5;
      } while( true );
    }
  }
joined_r0x001001b6:
  do {
    check_chars = lVar11;
    if ((lVar9 < 1) || (!bVar13)) goto LAB_001002b0;
    if (*param_2 < '\0') {
      local_48[0] = 0;
      lVar11 = mbrtoc32(&local_4c,param_2,(long)pcVar6 - (long)param_2,local_48);
      if (lVar11 < 0) goto LAB_001001c0;
    }
    else {
LAB_001001c0:
      lVar11 = 1;
    }
    param_2 = param_2 + lVar11;
    bVar13 = param_2 < pcVar6;
    lVar11 = check_chars;
    lVar9 = lVar9 + -1;
  } while( true );
LAB_00100218:
  if (pcVar6 <= param_2) {
LAB_001001a5:
    bVar13 = param_2 < pcVar6;
    lVar11 = check_chars;
    lVar9 = skip_chars;
    goto joined_r0x001001b6;
  }
  cVar2 = *param_2;
  if (cVar2 < '\0') goto LAB_00100251;
LAB_00100225:
  uVar12 = 1;
  wVar7 = (int)cVar2;
  while (wVar7 != 10) {
    while( true ) {
      iVar3 = iswblank(wVar7);
      if (iVar3 != 0) goto LAB_00100290;
      param_2 = param_2 + (uVar12 & 0xff);
      if (pcVar6 <= param_2) goto LAB_001001a5;
      cVar2 = *param_2;
      if (-1 < cVar2) goto LAB_00100225;
LAB_00100251:
      local_48[0] = 0;
      uVar12 = mbrtoc32(&local_4c,param_2,(long)pcVar6 - (long)param_2,local_48);
      wVar7 = local_4c;
      if (-1 < (long)uVar12) break;
      uVar12 = 1;
      wVar7 = 0;
    }
  }
LAB_00100290:
  lVar8 = lVar8 + -1;
  bVar13 = param_2 < pcVar6;
  lVar11 = check_chars;
  lVar9 = skip_chars;
  if (lVar8 < 1) goto joined_r0x001001b6;
  goto LAB_00100170;
LAB_001002b0:
  lVar8 = (long)pcVar6 - (long)param_2;
  lVar9 = lVar8;
  if ((lVar11 < lVar8) && (sVar4 = __ctype_get_mb_cur_max(), lVar9 = lVar11, 1 < sVar4)) {
    if ((lVar11 < 1) || (pcVar6 = param_2, !bVar13)) {
      lVar9 = 0;
    }
    else {
      do {
        if (-1 < *param_2) {
          pcVar6 = pcVar6 + 1;
          pcVar1 = pcVar6 + lVar11 + -1;
          if (lVar11 + -1 != 0) {
            do {
              pcVar6 = pcVar6 + 1;
            } while (pcVar1 != pcVar6 && -1 < (long)pcVar1 - (long)pcVar6);
          }
          break;
        }
        local_48[0] = 0;
        uVar5 = mbrtoc32(&local_4c,param_2,lVar8,local_48);
        uVar12 = 1;
        if (-1 < (long)uVar5) {
          uVar12 = uVar5 & 0xff;
        }
        pcVar6 = pcVar6 + uVar12;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      lVar9 = (long)pcVar6 - (long)param_2;
    }
  }
  *param_3 = lVar9;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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
    goto LAB_0010042a;
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
    if (pcVar4 != (char *)0x0) goto LAB_0010075d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC5);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010075d:
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
LAB_0010042a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  size_t *psVar1;
  char cVar2;
  char cVar3;
  char *__s1;
  char *__s1_00;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  size_t sVar9;
  void *__s1_01;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined8 unaff_RBX;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  _IO_FILE *p_Var17;
  void *__s2;
  uint uVar18;
  uint *__s1_02;
  char cVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  uint *local_d8;
  char local_ba;
  char *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98 [2];
  void *local_88;
  undefined8 local_78;
  undefined8 local_70;
  void *local_68;
  char *local_58 [3];
  long local_40;
  
  puVar4 = PTR__LC37_001021c0;
  __s1_02 = &switchD_0010168a::switchdataD_00101e50;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar7 = getenv("POSIXLY_CORRECT");
  puVar14 = (undefined8 *)CONCAT71((int7)((ulong)unaff_RBX >> 8),pcVar7 != (char *)0x0);
  local_58[0] = puVar4;
  local_58[1] = puVar4;
  uVar20 = 0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_d8 = (uint *)((ulong)puVar4 & 0xffffffffffffff00);
  uVar18 = 0;
  local_ba = '\n';
  cVar2 = '\0';
  do {
    puVar16 = (undefined8 *)(ulong)uVar18;
    if ((int)uVar20 == -1) {
      puVar16 = (undefined8 *)(ulong)uVar18;
    }
    else {
      while( true ) {
        iVar5 = (int)puVar16;
        if ((iVar5 != 0) && (__s1 = local_58[0], __s1_00 = local_58[1], pcVar7 != (char *)0x0))
        goto joined_r0x001013e9;
        uVar10 = 0;
        puVar13 = longopts;
        uVar18 = getopt_long(param_1,param_2,"-0123456789Dcdf:is:uw:z");
        uVar20 = (ulong)uVar18;
        if (uVar18 == 0xffffffff) break;
        if (0x80 < (int)uVar18) goto switchD_0010168a_caseD_a;
        if ((int)uVar18 < 0x30) {
          if (uVar18 == 0xffffff7e) {
            usage(0);
            goto LAB_00101daf;
          }
          if (uVar18 != 1) {
            if (uVar18 == 0xffffff7d) {
              uVar10 = proper_name_lite("David MacKenzie","David MacKenzie");
              auVar21 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
              version_etc(_stdout,&_LC5,"GNU coreutils",_Version,auVar21._0_8_,uVar10,0,
                          auVar21._8_8_);
                    /* WARNING: Subroutine does not return */
              exit(0);
            }
            goto switchD_0010168a_caseD_a;
          }
          if (((*_optarg == '+') && (iVar6 = posix2_version(), 0x2b8 < iVar6 - 0x30db0U)) &&
             (uVar18 = xstrtoimax(_optarg,0,10,&local_78), uVar18 < 2)) {
            skip_chars = local_78;
          }
          else {
            if (iVar5 == 2) goto LAB_00101d5e;
            puVar16 = (undefined8 *)(ulong)(iVar5 + 1);
            local_58[iVar5] = _optarg;
          }
        }
        else {
          iVar5 = uVar18 - 0x30;
          switch(iVar5) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
            if (cVar2 == '\x02') {
              skip_fields = 0;
            }
            lVar8 = skip_fields * 10;
            if ((SEXT816(lVar8) != SEXT816(skip_fields) * SEXT816(10)) ||
               (skip_fields = lVar8 + iVar5, SCARRY8(lVar8,(long)iVar5))) {
              skip_fields = 0x7fffffffffffffff;
            }
            cVar2 = '\x01';
            break;
          default:
            goto switchD_0010168a_caseD_a;
          case 0x14:
            output_unique = '\0';
            iVar5 = 0;
            output_later_repeated = '\x01';
            if (_optarg != (char *)0x0) {
              lVar8 = __xargmatch_internal
                                ("--all-repeated",_optarg,delimit_method_string,delimit_method_map,4
                                 ,_argmatch_die,1,uVar10);
              iVar5 = *(int *)(delimit_method_map + lVar8 * 4);
            }
            local_d8 = (uint *)CONCAT71(local_d8._1_7_,1);
            delimit_groups = iVar5;
            break;
          case 0x33:
            count_occurrences = '\x01';
            local_d8 = (uint *)CONCAT71(local_d8._1_7_,1);
            break;
          case 0x34:
            output_unique = '\0';
            local_d8 = (uint *)CONCAT71(local_d8._1_7_,1);
            break;
          case 0x36:
            skip_fields = size_opt(_optarg,"invalid number of fields to skip");
            cVar2 = '\x02';
            break;
          case 0x39:
            ignore_case = '\x01';
            break;
          case 0x43:
            skip_chars = size_opt(_optarg,"invalid number of bytes to skip");
            break;
          case 0x45:
            output_first_repeated = '\0';
            local_d8 = (uint *)CONCAT71(local_d8._1_7_,1);
            break;
          case 0x47:
            check_chars = size_opt(_optarg,"invalid number of bytes to compare");
            break;
          case 0x4a:
            local_ba = '\0';
            break;
          case 0x50:
            if (_optarg == (char *)0x0) {
              grouping = 3;
            }
            else {
              lVar8 = __xargmatch_internal
                                ("--group",_optarg,grouping_method_string,grouping_method_map,4,
                                 _argmatch_die,1,puVar13);
              grouping = *(int *)(grouping_method_map + lVar8 * 4);
            }
          }
        }
      }
    }
    uVar20 = 0xffffffff;
    __s1 = local_58[0];
    __s1_00 = local_58[1];
joined_r0x001013e9:
    local_58[0] = __s1;
    local_58[1] = __s1_00;
    if (param_1 <= _optind) {
      if (grouping == 0) {
        if (count_occurrences != '\0') {
          pcVar7 = "printing all duplicated lines and repeat counts is meaningless";
          cVar19 = output_later_repeated;
          goto joined_r0x001017a3;
        }
      }
      else {
        if ((char)local_d8 != '\0') {
          pcVar7 = "--group is mutually exclusive with -c/-d/-D/-u";
          goto LAB_00101d00;
        }
        pcVar7 = "grouping and printing repeat counts is meaningless";
        cVar19 = count_occurrences;
joined_r0x001017a3:
        if (cVar19 != '\0') {
LAB_00101d00:
          uVar10 = dcgettext(0,pcVar7,5);
          error(0,0,uVar10);
switchD_0010168a_caseD_a:
          usage(1);
          cVar19 = output_later_repeated;
          goto joined_r0x00101d28;
        }
      }
      iVar5 = strcmp(__s1,"-");
      if (((iVar5 != 0) && (lVar8 = freopen_safer(__s1,&_LC52,_stdin), pcVar7 = __s1, lVar8 == 0))
         || ((iVar5 = strcmp(__s1_00,"-"), iVar5 != 0 &&
             (lVar8 = freopen_safer(__s1_00,&_LC54,_stdout), pcVar7 = __s1_00, lVar8 == 0)))) {
        uVar10 = quotearg_n_style_colon(0,3,pcVar7);
        piVar12 = __errno_location();
        error(1,*piVar12,&_LC53,uVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar16 = local_98;
      puVar14 = &local_78;
      fadvise(_stdin,2);
      initbuffer(puVar16);
      initbuffer(puVar14);
      cVar2 = output_first_repeated;
      local_b8 = __s1;
      if (((output_unique != '\0') && (output_first_repeated != '\0')) &&
         (count_occurrences == '\0')) {
        if ((*_stdin & 0x10) != 0) goto LAB_00101ae4;
        uVar18 = (uint)local_ba;
        __s2 = (void *)0x0;
        cVar19 = '\0';
        break;
      }
      param_1 = (int)local_ba;
      lVar8 = readlinebuffer_delim(puVar14,_stdin,param_1);
      if (lVar8 == 0) goto LAB_00101ae4;
      local_d8 = (uint *)find_field_isra_0(local_70,local_68,&local_a8);
      if ((*_stdin & 0x10) != 0) goto LAB_00101b3c;
      cVar3 = '\x01';
      uVar20 = 0;
      goto LAB_00101860;
    }
    lVar8 = (long)_optind;
    iVar5 = (int)puVar16;
    if (iVar5 == 2) goto LAB_00101d5e;
    _optind = _optind + 1;
    uVar18 = iVar5 + 1;
    local_58[iVar5] = (char *)param_2[lVar8];
  } while( true );
  do {
    lVar8 = readlinebuffer_delim(puVar16,_stdin,uVar18);
    if (lVar8 == 0) break;
    __s1_01 = (void *)find_field_isra_0(puVar16[1],puVar16[2],&local_a0);
    if (__s2 == (void *)0x0) {
LAB_00101553:
      if ((grouping != 0) &&
         (((grouping == 1 || (grouping == 4)) || ((cVar19 != '\0' && (grouping - 2U < 2)))))) {
        pcVar7 = _stdout->_IO_write_ptr;
        if (pcVar7 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar7 + 1;
          *pcVar7 = local_ba;
        }
        else {
          __overflow(_stdout,uVar18);
        }
      }
LAB_00101580:
      sVar9 = fwrite_unlocked((void *)puVar16[2],1,puVar16[1],_stdout);
      psVar1 = puVar16 + 1;
      puVar15 = puVar16;
      __s2 = __s1_01;
      local_b0 = local_a0;
      puVar16 = puVar14;
      cVar19 = cVar2;
      if (sVar9 != *psVar1) goto LAB_00101daf;
    }
    else {
      if (ignore_case != '\0') {
        if (local_a0 == local_b0) {
          iVar5 = memcasecmp(__s1_01,__s2,local_b0);
          goto joined_r0x00101bc4;
        }
        goto LAB_00101553;
      }
      if (local_a0 != local_b0) goto LAB_00101553;
      iVar5 = memcmp(__s1_01,__s2,(size_t)local_b0);
joined_r0x00101bc4:
      if (iVar5 != 0) goto LAB_00101553;
      puVar15 = puVar14;
      if (grouping != 0) goto LAB_00101580;
    }
    puVar14 = puVar15;
  } while ((*_stdin & 0x10) == 0);
  __s1_02 = (uint *)(ulong)uVar18;
  if (((grouping - 2U & 0xfffffffd) == 0) && (cVar19 != '\0')) {
    pcVar7 = _stdout->_IO_write_ptr;
    p_Var17 = _stdout;
    if (_stdout->_IO_write_end <= pcVar7) goto LAB_00101d94;
    _stdout->_IO_write_ptr = pcVar7 + 1;
    *pcVar7 = local_ba;
  }
  goto LAB_00101ae4;
LAB_00101daf:
  write_error();
  goto LAB_00101db4;
LAB_00101d5e:
  uVar10 = quote();
  uVar11 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar11,uVar10);
  p_Var17 = (_IO_FILE *)0x1;
  usage();
LAB_00101d94:
  __overflow(p_Var17,(int)__s1_02);
  goto LAB_00101ae4;
LAB_00101860:
  do {
    lVar8 = readlinebuffer_delim(puVar16,_stdin,param_1);
    if (lVar8 == 0) {
      if ((*_stdin & 0x20) != 0) goto LAB_00101ae4;
      break;
    }
    __s1_02 = (uint *)find_field_isra_0(puVar16[1],puVar16[2],&local_a0);
    param_2 = local_a0;
    if (ignore_case == '\0') {
      if ((local_a8 != local_a0) || (iVar5 = memcmp(__s1_02,local_d8,(size_t)local_a0), iVar5 != 0))
      goto LAB_00101811;
LAB_001018c0:
      uVar20 = uVar20 + 1;
      cVar2 = cVar3;
      cVar19 = cVar3;
      if (uVar20 != 0x7fffffffffffffff) {
        if ((delimit_groups != 0) && (uVar20 == 1)) {
          if ((delimit_groups == 1) ||
             ((delimit_groups == 2 && (cVar19 = output_later_repeated, cVar3 == '\0')))) {
            pcVar7 = _stdout->_IO_write_ptr;
            if (pcVar7 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar7 + 1;
              *pcVar7 = local_ba;
              cVar19 = cVar3;
            }
            else {
              __overflow(_stdout,param_1);
              cVar19 = cVar3;
            }
          }
          goto joined_r0x00101d28;
        }
        puVar15 = puVar14;
        if (output_later_repeated == '\0') goto LAB_00101850;
        if (uVar20 != 0) goto LAB_001018fb;
        goto LAB_00101828;
      }
      if (count_occurrences != '\0') goto LAB_00101df5;
      uVar20 = 0x7ffffffffffffffe;
joined_r0x00101d28:
      cVar3 = cVar19;
      puVar15 = puVar14;
      if (output_later_repeated != '\0') {
LAB_001018fb:
        writeline_part_0(puVar14,uVar20);
        puVar15 = puVar16;
        puVar16 = puVar14;
        local_d8 = __s1_02;
        local_a8 = param_2;
        cVar2 = cVar3;
      }
    }
    else {
      if ((local_a8 == local_a0) && (iVar5 = memcasecmp(__s1_02,local_d8,local_a0), iVar5 == 0))
      goto LAB_001018c0;
LAB_00101811:
      cVar2 = output_first_repeated;
      if (delimit_groups == 0) {
        if (uVar20 == 0) {
LAB_00101828:
          uVar20 = 0;
          cVar2 = output_unique;
        }
      }
      else {
        if (uVar20 == 0) goto LAB_00101828;
        cVar3 = '\0';
      }
      if (cVar2 != '\0') {
        writeline_part_0(puVar14,uVar20);
      }
      local_a8 = param_2;
      uVar20 = 0;
      puVar15 = puVar16;
      puVar16 = puVar14;
      local_d8 = __s1_02;
      cVar2 = cVar3;
    }
LAB_00101850:
    cVar3 = cVar2;
    puVar14 = puVar15;
  } while ((*_stdin & 0x10) == 0);
  cVar2 = output_first_repeated;
  if (uVar20 == 0) {
LAB_00101b3c:
    uVar20 = 0;
    cVar2 = output_unique;
  }
  if (cVar2 == '\x01') {
    writeline_part_0(puVar14,uVar20);
  }
LAB_00101ae4:
  if (((*_stdin & 0x20) == 0) && (iVar5 = rpl_fclose(_stdin), iVar5 == 0)) {
    free(local_88);
    free(local_68);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
LAB_00101db4:
    uVar10 = quotearg_style(4,local_b8);
    uVar11 = dcgettext(0,"error reading %s",5);
    piVar12 = __errno_location();
    error(1,*piVar12,uVar11,uVar10);
LAB_00101df5:
    uVar10 = dcgettext(0,"too many repeated lines",5);
    error(1,0,uVar10);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


