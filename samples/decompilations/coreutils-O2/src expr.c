
void require_more_args(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*args != 0) {
    return;
  }
  uVar1 = quotearg_n_style(0,8,args[-1]);
  uVar2 = dcgettext(0,"syntax error: missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar2,uVar1);
}



undefined8 toarith(int *param_1)

{
  char *__ptr;
  int iVar1;
  char *pcVar2;
  
  if (*param_1 == 0) {
    return 1;
  }
  __ptr = *(char **)(param_1 + 2);
  pcVar2 = __ptr + (*__ptr == '-');
  do {
    if (9 < (int)*pcVar2 - 0x30U) {
      return 0;
    }
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  iVar1 = mpz_init_set_str(param_1 + 2,__ptr,10);
  if (iVar1 == 0) {
    free(__ptr);
    *param_1 = 0;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  error(3,0x22,&_LC1,__ptr);
}



ulong null(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 extraout_RDX;
  
  if (*param_1 == 0) {
    iVar2 = mpz_sgn(param_1 + 2);
    return CONCAT71((int7)((ulong)extraout_RDX >> 8),iVar2 == 0) & 0xffffffff;
  }
  uVar4 = 1;
  cVar1 = **(char **)(param_1 + 2);
  if (cVar1 != '\0') {
    pcVar3 = *(char **)(param_1 + 2) + (cVar1 == '-');
    while (*pcVar3 == '0') {
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') {
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
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
    goto LAB_001001ba;
  }
  uVar3 = dcgettext(0,"Usage: %s EXPRESSION\n  or:  %s OPTION\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pcVar4 = _stdout->_IO_write_ptr;
  if (pcVar4 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar4 + 1;
    *pcVar4 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nPrint the value of EXPRESSION to standard output.  A blank line below\nseparates increasing precedence groups.  EXPRESSION may be:\n\n  ARG1 | ARG2       ARG1 if it is neither null nor 0, otherwise ARG2\n\n  ARG1 & ARG2       ARG1 if neither argument is null or 0, otherwise 0\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  ARG1 < ARG2       ARG1 is less than ARG2\n  ARG1 <= ARG2      ARG1 is less than or equal to ARG2\n  ARG1 = ARG2       ARG1 is equal to ARG2\n  ARG1 != ARG2      ARG1 is unequal to ARG2\n  ARG1 >= ARG2      ARG1 is greater than or equal to ARG2\n  ARG1 > ARG2       ARG1 is greater than ARG2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  ARG1 + ARG2       arithmetic sum of ARG1 and ARG2\n  ARG1 - ARG2       arithmetic difference of ARG1 and ARG2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  ARG1 * ARG2       arithmetic product of ARG1 and ARG2\n  ARG1 / ARG2       arithmetic quotient of ARG1 divided by ARG2\n  ARG1 % ARG2       arithmetic remainder of ARG1 divided by ARG2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  STRING : REGEXP   anchored pattern match of REGEXP in STRING\n\n  match STRING REGEXP        same as STRING : REGEXP\n  substr STRING POS LENGTH   substring of STRING, POS counted from 1\n  index STRING CHARS         index in STRING where any CHARS is found, or 0\n  length STRING              length of STRING\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  + TOKEN                    interpret TOKEN as a string, even if it is a\n                               keyword like \'match\' or an operator like \'/\'\n\n  ( EXPRESSION )             value of EXPRESSION\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nBeware that many operators need to be escaped or quoted for shells.\nComparisons are arithmetic if both ARGs are numbers, else lexicographical.\nPattern matches return the string matched between \\( and \\) or null; if\n\\( and \\) are not used, they return the number of characters matched or 0.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nExit status is 0 if EXPRESSION is neither null nor 0, 1 if EXPRESSION is null\nor 0, 2 if EXPRESSION is syntactically invalid, and 3 if an error occurred.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC2;
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
    iVar2 = strcmp("expr",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC3;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010049d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC3);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010049d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC3);
    if (puVar7 == &_LC3) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001001ba:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * docolon(int *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined1 local_1bc [4];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [24];
  re_pattern_buffer local_198;
  undefined4 local_150 [2];
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    uVar6 = mpz_get_str(0,10,param_1 + 2);
    mpz_clear(param_1 + 2);
    *param_1 = 1;
    iVar2 = *param_2;
    *(undefined8 *)(param_1 + 2) = uVar6;
    if (iVar2 == 0) goto LAB_0010080b;
LAB_0010061f:
    pcVar4 = *(char **)(param_2 + 2);
  }
  else {
    if (*param_2 != 0) goto LAB_0010061f;
LAB_0010080b:
    pcVar4 = (char *)mpz_get_str(0,10,param_2 + 2);
    mpz_clear(param_2 + 2);
    *(char **)(param_2 + 2) = pcVar4;
    *param_2 = 1;
  }
  local_198.fastmap = local_148;
  local_1b8._0_4_ = 0;
  local_198.buffer = (uchar *)0x0;
  local_198.allocated = 0;
  local_198.translate = (uchar *)0x0;
  _re_syntax_options = 0x2c6;
  local_1b0._0_16_ = (undefined1  [16])0x0;
  sVar3 = strlen(pcVar4);
  pcVar4 = re_compile_pattern(pcVar4,sVar3,&local_198);
  if (pcVar4 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    error(2,0,&_LC1,pcVar4);
  }
  pcVar4 = *(char **)(param_1 + 2);
  local_198._56_1_ = local_198._56_1_ & 0x7f;
  sVar3 = strlen(pcVar4);
  iVar2 = re_match(&local_198,pcVar4,(int)sVar3,0,(re_registers *)local_1b8);
  if (iVar2 < 0) {
    if (iVar2 != -1) {
      uVar6 = dcgettext(0,"error in regular expression matcher",5);
      iVar12 = 0x4b;
      if (iVar2 == -2) {
        piVar8 = __errno_location();
        iVar12 = *piVar8;
      }
                    /* WARNING: Subroutine does not return */
      error(3,iVar12,uVar6);
    }
    if (local_198.re_nsub == 0) {
      puVar5 = (undefined4 *)xmalloc(0x18);
      *puVar5 = 0;
      mpz_init_set_ui(puVar5 + 2,0);
      goto joined_r0x00100795;
    }
  }
  else {
    if (local_198.re_nsub == 0) {
      sVar3 = __ctype_get_mb_cur_max();
      uVar13 = (long)iVar2;
      if (sVar3 != 1) {
        lVar1 = *(long *)(param_1 + 2);
        uVar10 = 0;
        uVar13 = 0;
        if (iVar2 == 0) {
          uVar13 = 0;
        }
        else {
          do {
            pcVar4 = (char *)(lVar1 + uVar10);
            if (*pcVar4 == '\0') break;
            uVar13 = uVar13 + 1;
            uVar11 = 1;
            if (*pcVar4 < '\0') {
              pcVar9 = pcVar4 + (2 - (ulong)(pcVar4[1] == '\0'));
              local_150[0] = 0;
              uVar7 = mbrtoc32(local_1bc,pcVar4,
                               pcVar9 + (*pcVar9 != '\0') +
                               ((ulong)(pcVar9[*pcVar9 != '\0'] != '\0') - (long)pcVar4),local_150);
              if (-1 < (long)uVar7) {
                uVar11 = uVar7 & 0xff;
              }
            }
            uVar10 = uVar10 + uVar11;
          } while (uVar10 < (ulong)(long)iVar2);
        }
      }
      puVar5 = (undefined4 *)xmalloc(0x18);
      *puVar5 = 0;
      mpz_init_set_ui(puVar5 + 2,uVar13);
      goto joined_r0x00100795;
    }
    if (-1 < *(int *)(local_1b0._8_8_ + 4)) {
      *(undefined1 *)(*(long *)(param_1 + 2) + (long)*(int *)(local_1b0._8_8_ + 4)) = 0;
      iVar2 = *(int *)(local_1b0._0_8_ + 4);
      lVar1 = *(long *)(param_1 + 2);
      puVar5 = (undefined4 *)xmalloc(0x18);
      *puVar5 = 1;
      uVar6 = xstrdup(iVar2 + lVar1);
      *(undefined8 *)(puVar5 + 2) = uVar6;
      goto joined_r0x00100795;
    }
  }
  puVar5 = (undefined4 *)xmalloc(0x18);
  *puVar5 = 1;
  uVar6 = xstrdup(&_LC5);
  *(undefined8 *)(puVar5 + 2) = uVar6;
joined_r0x00100795:
  if (local_1b8._0_4_ != 0) {
    free((void *)local_1b0._0_8_);
    free((void *)local_1b0._8_8_);
  }
  local_198.fastmap = (char *)0x0;
  regfree(&local_198);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int * eval6(char param_1)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  int *__ptr;
  ulong uVar10;
  undefined8 uVar11;
  size_t sVar12;
  long lVar13;
  char *pcVar14;
  void *__ptr_00;
  char *pcVar15;
  ulong uVar16;
  char *pcVar17;
  byte bVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  char *pcVar24;
  long in_FS_OFFSET;
  bool local_78;
  int local_4c;
  undefined4 local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar19 = (byte *)*args;
  if (pbVar19 == (byte *)0x0) goto LAB_00100eb8;
  uVar3 = *pbVar19 - 0x2b;
  if (uVar3 == 0) {
    uVar3 = (uint)pbVar19[1];
  }
  puVar1 = args + (uVar3 == 0);
  args = puVar1;
  if (uVar3 == 0) {
    require_more_args();
    uVar7 = *args;
    args = args + 1;
    piVar6 = (int *)xmalloc(0x18);
    *piVar6 = 1;
    uVar7 = xstrdup(uVar7);
    *(undefined8 *)(piVar6 + 2) = uVar7;
    goto LAB_001009d8;
  }
  if ((char *)*puVar1 == (char *)0x0) goto LAB_00100eb8;
  iVar4 = strcmp((char *)*puVar1,"length");
  puVar1 = puVar1 + (iVar4 == 0);
  args = puVar1;
  if (iVar4 == 0) {
    piVar8 = (int *)eval6(param_1);
    if (*piVar8 == 0) {
      uVar7 = mpz_get_str(0,10,piVar8 + 2);
      mpz_clear(piVar8 + 2);
      *(undefined8 *)(piVar8 + 2) = uVar7;
      *piVar8 = 1;
    }
    else {
      uVar7 = *(undefined8 *)(piVar8 + 2);
    }
    uVar7 = mbslen(uVar7);
    piVar6 = (int *)xmalloc(0x18);
    *piVar6 = 0;
    mpz_init_set_ui(piVar6 + 2,uVar7);
    iVar4 = *piVar8;
joined_r0x00100bc1:
    if (iVar4 == 1) {
      free(*(void **)(piVar8 + 2));
    }
    else {
      mpz_clear(piVar8 + 2);
    }
    free(piVar8);
  }
  else {
    if ((char *)*puVar1 == (char *)0x0) goto LAB_00100eb8;
    iVar4 = strcmp((char *)*puVar1,"match");
    puVar1 = puVar1 + (iVar4 == 0);
    args = puVar1;
    if (iVar4 == 0) {
      piVar8 = (int *)eval6(param_1);
      piVar9 = (int *)eval6(param_1);
      piVar6 = piVar8;
      if (param_1 != '\0') {
        piVar6 = (int *)docolon(piVar8,piVar9);
        if (*piVar8 == 1) {
          free(*(void **)(piVar8 + 2));
        }
        else {
          mpz_clear(piVar8 + 2);
        }
        free(piVar8);
      }
      if (*piVar9 == 1) {
        free(*(void **)(piVar9 + 2));
      }
      else {
        mpz_clear(piVar9 + 2);
      }
      free(piVar9);
      goto LAB_001009d8;
    }
    if ((char *)*puVar1 != (char *)0x0) {
      iVar4 = strcmp((char *)*puVar1,"index");
      puVar1 = puVar1 + (iVar4 == 0);
      args = puVar1;
      if (iVar4 == 0) {
        piVar9 = (int *)eval6(param_1);
        piVar8 = (int *)eval6(param_1);
        if (*piVar9 == 0) {
          uVar7 = mpz_get_str(0,10,piVar9 + 2);
          mpz_clear(piVar9 + 2);
          *(undefined8 *)(piVar9 + 2) = uVar7;
          *piVar9 = 1;
        }
        if (*piVar8 == 0) {
          pcVar14 = (char *)mpz_get_str(0,10,piVar8 + 2);
          mpz_clear(piVar8 + 2);
          *(char **)(piVar8 + 2) = pcVar14;
          *piVar8 = 1;
        }
        else {
          pcVar14 = *(char **)(piVar8 + 2);
        }
        pcVar24 = *(char **)(piVar9 + 2);
        if (*pcVar14 == '\0') {
LAB_00100b81:
          lVar22 = 0;
        }
        else {
          sVar12 = __ctype_get_mb_cur_max();
          if (1 < sVar12) {
            cVar2 = *pcVar24;
            if (cVar2 != '\0') {
              lVar22 = 0;
              do {
                lVar22 = lVar22 + 1;
                if (cVar2 < '\0') {
                  pcVar15 = pcVar24 + (2 - (ulong)(pcVar24[1] == '\0'));
                  local_48[0] = 0;
                  uVar16 = mbrtoc32(&local_4c,pcVar24,
                                    pcVar15 + (*pcVar15 != '\0') +
                                    ((ulong)(pcVar15[*pcVar15 != '\0'] != '\0') - (long)pcVar24));
                  iVar4 = local_4c;
                  if (((long)uVar16 < 0) || (uVar23 = uVar16 & 0xffffffff, (char)uVar16 == '\x01'))
                  goto LAB_00100faa;
                  cVar2 = *pcVar14;
                  pcVar15 = pcVar14;
                  while (cVar2 != '\0') {
                    iVar5 = (int)cVar2;
                    if (cVar2 < '\0') {
                      pcVar17 = pcVar15 + (2 - (ulong)(pcVar15[1] == '\0'));
                      local_48[0] = 0;
                      lVar13 = mbrtoc32(&local_4c,pcVar15,
                                        pcVar17 + (*pcVar17 != '\0') +
                                        ((ulong)(pcVar17[*pcVar17 != '\0'] != '\0') - (long)pcVar15)
                                        ,local_48);
                      iVar5 = local_4c;
                      if (-1 < lVar13) goto LAB_00101275;
                      bVar18 = 1;
                    }
                    else {
                      lVar13 = 1;
LAB_00101275:
                      bVar18 = (byte)lVar13;
                      if (iVar4 == iVar5) goto LAB_00100b84;
                    }
                    pcVar15 = pcVar15 + bVar18;
                    cVar2 = *pcVar15;
                  }
                }
                else {
LAB_00100faa:
                  lVar13 = mbschr(pcVar14,(int)*pcVar24);
                  if (lVar13 != 0) goto LAB_00100b84;
                  uVar23 = 1;
                }
                pcVar24 = pcVar24 + (uVar23 & 0xff);
                cVar2 = *pcVar24;
              } while (cVar2 != '\0');
            }
            goto LAB_00100b81;
          }
          sVar12 = strcspn(pcVar24,pcVar14);
          if (pcVar24[sVar12] == '\0') goto LAB_00100b81;
          lVar22 = sVar12 + 1;
        }
LAB_00100b84:
        piVar6 = (int *)xmalloc(0x18);
        *piVar6 = 0;
        mpz_init_set_ui(piVar6 + 2,lVar22);
        if (*piVar9 == 1) {
          free(*(void **)(piVar9 + 2));
        }
        else {
          mpz_clear(piVar9 + 2);
        }
        free(piVar9);
        iVar4 = *piVar8;
        goto joined_r0x00100bc1;
      }
      if ((char *)*puVar1 != (char *)0x0) {
        iVar4 = strcmp((char *)*puVar1,"substr");
        args = puVar1 + (iVar4 == 0);
        if (iVar4 == 0) {
          piVar8 = (int *)eval6(param_1);
          piVar9 = (int *)eval6(param_1);
          __ptr = (int *)eval6(param_1);
          if (*piVar8 == 0) {
            uVar7 = mpz_get_str(0,10,piVar8 + 2);
            mpz_clear(piVar8 + 2);
            *(undefined8 *)(piVar8 + 2) = uVar7;
            *piVar8 = 1;
          }
          cVar2 = toarith(piVar9);
          if ((cVar2 == '\0') || (cVar2 = toarith(__ptr), cVar2 == '\0')) {
            piVar6 = (int *)xmalloc(0x18);
            *piVar6 = 1;
            uVar7 = xstrdup(&_LC5);
            *(undefined8 *)(piVar6 + 2) = uVar7;
          }
          else {
            piVar6 = piVar9 + 2;
            iVar4 = mpz_sgn(piVar6);
            if (iVar4 < 0) {
              local_78 = false;
              uVar16 = 0xffffffffffffffff;
            }
            else {
              iVar4 = mpz_fits_ulong_p(piVar6);
              if (iVar4 == 0) {
                local_78 = false;
                uVar16 = 0xfffffffffffffffe;
              }
              else {
                uVar23 = mpz_get_ui(piVar6);
                uVar16 = 0xfffffffffffffffe;
                if (uVar23 != 0xffffffffffffffff) {
                  uVar16 = uVar23;
                }
                local_78 = uVar23 == 0;
              }
            }
            piVar6 = __ptr + 2;
            iVar4 = mpz_sgn(piVar6);
            if (iVar4 < 0) {
              uVar23 = 0xffffffffffffffff;
              local_78 = (bool)cVar2;
            }
            else {
              iVar4 = mpz_fits_ulong_p(piVar6);
              uVar23 = 0xfffffffffffffffe;
              if (iVar4 != 0) {
                uVar10 = mpz_get_ui(piVar6);
                uVar23 = 0xfffffffffffffffe;
                if (uVar10 != 0xffffffffffffffff) {
                  uVar23 = uVar10;
                }
              }
            }
            pcVar14 = *(char **)(piVar8 + 2);
            sVar12 = __ctype_get_mb_cur_max();
            if (sVar12 < 2) {
              uVar10 = strlen(pcVar14);
              if (uVar16 <= uVar10) goto LAB_0010118e;
              uVar20 = 0;
              uVar10 = 0;
              if (local_78 != false) goto LAB_001011b7;
LAB_001011af:
              uVar20 = uVar10;
              pcVar14 = pcVar14 + (uVar16 - 1);
            }
            else {
              uVar10 = mbslen();
              if (uVar10 < uVar16) {
                uVar20 = 0;
                uVar10 = 0;
                if (local_78 == false) {
LAB_00100d2c:
                  cVar2 = *pcVar14;
                  if (uVar10 != 0) {
                    uVar20 = 0;
                    uVar23 = 1;
                    pcVar24 = pcVar14;
                    if (cVar2 != '\0') {
                      do {
                        uVar21 = 1;
                        if (cVar2 < '\0') {
                          pcVar15 = pcVar24 + (2 - (ulong)(pcVar24[1] == '\0'));
                          local_48[0] = 0;
                          lVar22 = mbrtoc32(&local_4c,pcVar24,
                                            pcVar15 + (*pcVar15 != '\0') +
                                            ((ulong)(pcVar15[*pcVar15 != '\0'] != '\0') -
                                            (long)pcVar24),local_48);
                          bVar18 = (byte)lVar22;
                          if (lVar22 < 0) {
                            bVar18 = 1;
                          }
                          uVar21 = (ulong)bVar18;
                        }
                        if (uVar16 <= uVar23) {
                          if (uVar16 == uVar23) {
                            pcVar14 = pcVar24;
                          }
                          uVar10 = uVar10 - 1;
                          uVar20 = uVar20 + uVar21;
                        }
                        pcVar24 = pcVar24 + uVar21;
                        uVar23 = uVar23 + 1;
                        cVar2 = *pcVar24;
                      } while ((cVar2 != '\0') && (uVar10 != 0));
                      goto LAB_001011b7;
                    }
                  }
                  uVar20 = 0;
                }
              }
              else {
LAB_0010118e:
                uVar20 = 0;
                if (local_78 == false) {
                  uVar10 = (uVar10 - uVar16) + 1;
                  if (uVar23 < uVar10) {
                    uVar10 = uVar23;
                  }
                  if (sVar12 < 2) goto LAB_001011af;
                  goto LAB_00100d2c;
                }
              }
            }
LAB_001011b7:
            __ptr_00 = (void *)ximemdup0(pcVar14,uVar20);
            piVar6 = (int *)xmalloc(0x18);
            *piVar6 = 1;
            uVar7 = xstrdup(__ptr_00);
            *(undefined8 *)(piVar6 + 2) = uVar7;
            free(__ptr_00);
          }
          if (*piVar8 == 1) {
            free(*(void **)(piVar8 + 2));
          }
          else {
            mpz_clear(piVar8 + 2);
          }
          free(piVar8);
          if (*piVar9 == 1) {
            free(*(void **)(piVar9 + 2));
          }
          else {
            mpz_clear(piVar9 + 2);
          }
          free(piVar9);
          if (*__ptr == 1) {
            free(*(void **)(__ptr + 2));
          }
          else {
            mpz_clear(__ptr + 2);
          }
          free(__ptr);
          goto LAB_001009d8;
        }
      }
    }
LAB_00100eb8:
    require_more_args();
    pbVar19 = (byte *)*args;
    if (pbVar19 != (byte *)0x0) {
      uVar3 = *pbVar19 - 0x28;
      if (uVar3 == 0) {
        uVar3 = (uint)pbVar19[1];
      }
      args = args + (uVar3 == 0);
      if (uVar3 == 0) {
        piVar6 = (int *)eval(param_1);
        pbVar19 = (byte *)*args;
        if (pbVar19 == (byte *)0x0) {
          uVar7 = quotearg_n_style(0,8,args[-1]);
          pcVar14 = "syntax error: expecting \')\' after %s";
        }
        else {
          uVar3 = *pbVar19 - 0x29;
          if (uVar3 == 0) {
            uVar3 = (uint)pbVar19[1];
          }
          args = args + (uVar3 == 0);
          if (uVar3 == 0) goto LAB_001009d8;
          uVar7 = quotearg_n_style(0,8,*args);
          pcVar14 = "syntax error: expecting \')\' instead of %s";
        }
        uVar11 = dcgettext(0,pcVar14,5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar11,uVar7);
      }
      pbVar19 = (byte *)*args;
      if (pbVar19 != (byte *)0x0) {
        uVar3 = *pbVar19 - 0x29;
        if (uVar3 == 0) {
          uVar3 = (uint)pbVar19[1];
        }
        args = args + (uVar3 == 0);
        if (uVar3 == 0) {
          uVar7 = dcgettext(0,"syntax error: unexpected \')\'",5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar7);
        }
        pbVar19 = (byte *)*args;
      }
    }
    args = args + 1;
    piVar6 = (int *)xmalloc(0x18);
    *piVar6 = 1;
    uVar7 = xstrdup(pbVar19);
    *(undefined8 *)(piVar6 + 2) = uVar7;
  }
LAB_001009d8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return piVar6;
}



int * eval5(char param_1)

{
  byte *pbVar1;
  uint uVar2;
  int *__ptr;
  int *__ptr_00;
  int *piVar3;
  
  __ptr = (int *)eval6(param_1);
  pbVar1 = (byte *)*args;
  while( true ) {
    if (pbVar1 == (byte *)0x0) {
      return __ptr;
    }
    uVar2 = *pbVar1 - 0x3a;
    if (uVar2 == 0) {
      uVar2 = (uint)pbVar1[1];
    }
    args = args + (uVar2 == 0);
    if (uVar2 != 0) break;
    __ptr_00 = (int *)eval6(param_1);
    piVar3 = __ptr;
    if (param_1 != '\0') {
      piVar3 = (int *)docolon(__ptr,__ptr_00);
      if (*__ptr == 1) {
        free(*(void **)(__ptr + 2));
      }
      else {
        mpz_clear(__ptr + 2);
      }
      free(__ptr);
    }
    if (*__ptr_00 == 1) {
      free(*(void **)(__ptr_00 + 2));
    }
    else {
      mpz_clear(__ptr_00 + 2);
    }
    free(__ptr_00);
    pbVar1 = (byte *)*args;
    __ptr = piVar3;
  }
  return __ptr;
}



long eval4(char param_1)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *__ptr;
  code *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  
  lVar5 = eval5(param_1);
  do {
    pbVar1 = (byte *)*args;
    if (pbVar1 == (byte *)0x0) {
      return lVar5;
    }
    uVar3 = *pbVar1 - 0x2a;
    if (uVar3 == 0) {
      uVar3 = (uint)pbVar1[1];
    }
    iVar9 = 0;
    args = args + (uVar3 == 0);
    if (uVar3 != 0) {
      pbVar1 = (byte *)*args;
      if (pbVar1 == (byte *)0x0) {
        return lVar5;
      }
      uVar3 = *pbVar1 - 0x2f;
      if (uVar3 == 0) {
        uVar3 = (uint)pbVar1[1];
      }
      iVar9 = 1;
      args = args + (uVar3 == 0);
      if (uVar3 != 0) {
        pbVar1 = (byte *)*args;
        if (pbVar1 == (byte *)0x0) {
          return lVar5;
        }
        uVar3 = *pbVar1 - 0x25;
        if (uVar3 == 0) {
          uVar3 = (uint)pbVar1[1];
        }
        args = args + (uVar3 == 0);
        if (uVar3 != 0) {
          return lVar5;
        }
        iVar9 = 2;
      }
    }
    __ptr = (int *)eval5(param_1);
    if (param_1 != '\0') {
      cVar2 = toarith(lVar5);
      if ((cVar2 == '\0') || (cVar2 = toarith(__ptr), cVar2 == '\0')) {
        pcVar8 = "non-integer argument";
LAB_00101626:
        uVar7 = dcgettext(0,pcVar8,5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar7);
      }
      if (iVar9 == 0) {
        pcVar6 = mpz_mul;
      }
      else {
        iVar4 = mpz_sgn(__ptr + 2);
        if (iVar4 == 0) {
          pcVar8 = "division by zero";
          goto LAB_00101626;
        }
        if (iVar9 == 1) {
          pcVar6 = mpz_tdiv_q;
        }
        else {
          pcVar6 = mpz_tdiv_r;
        }
      }
      (*pcVar6)(lVar5 + 8,lVar5 + 8,__ptr + 2);
    }
    if (*__ptr == 1) {
      free(*(void **)(__ptr + 2));
    }
    else {
      mpz_clear(__ptr + 2);
    }
    free(__ptr);
  } while( true );
}



long eval3(char param_1)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int *__ptr;
  code *pcVar6;
  undefined8 uVar7;
  
  lVar5 = eval4(param_1);
  do {
    pbVar1 = (byte *)*args;
    if (pbVar1 == (byte *)0x0) {
      return lVar5;
    }
    uVar4 = *pbVar1 - 0x2b;
    if (uVar4 == 0) {
      uVar4 = (uint)pbVar1[1];
    }
    bVar2 = false;
    args = args + (uVar4 == 0);
    if (uVar4 != 0) {
      pbVar1 = (byte *)*args;
      if (pbVar1 == (byte *)0x0) {
        return lVar5;
      }
      uVar4 = *pbVar1 - 0x2d;
      if (uVar4 == 0) {
        uVar4 = (uint)pbVar1[1];
      }
      args = args + (uVar4 == 0);
      if (uVar4 != 0) {
        return lVar5;
      }
      bVar2 = true;
    }
    __ptr = (int *)eval4(param_1);
    if (param_1 != '\0') {
      cVar3 = toarith(lVar5);
      if ((cVar3 == '\0') || (cVar3 = toarith(__ptr), cVar3 == '\0')) {
        uVar7 = dcgettext(0,"non-integer argument",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar7);
      }
      if (bVar2) {
        pcVar6 = mpz_sub;
      }
      else {
        pcVar6 = mpz_add;
      }
      (*pcVar6)(lVar5 + 8,lVar5 + 8,__ptr + 2);
    }
    if (*__ptr == 1) {
      free(*(void **)(__ptr + 2));
    }
    else {
      mpz_clear(__ptr + 2);
    }
    free(__ptr);
  } while( true );
}



int * eval2(char param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int *__ptr;
  int *__ptr_00;
  char *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  __ptr = (int *)eval3(param_1);
LAB_00101813:
  pbVar1 = (byte *)*args;
  if (pbVar1 == (byte *)0x0) {
    return __ptr;
  }
  uVar2 = *pbVar1 - 0x3c;
  if (uVar2 == 0) {
    uVar2 = (uint)pbVar1[1];
  }
  uVar8 = 0;
  args = args + (uVar2 == 0);
  if (uVar2 != 0) {
    pbVar1 = (byte *)*args;
    if (pbVar1 == (byte *)0x0) {
      return __ptr;
    }
    uVar2 = *pbVar1 - 0x3c;
    if ((uVar2 == 0) && (uVar2 = pbVar1[1] - 0x3d, uVar2 == 0)) {
      uVar2 = (uint)pbVar1[2];
    }
    uVar8 = 1;
    args = args + (uVar2 == 0);
    if (uVar2 != 0) {
      pbVar1 = (byte *)*args;
      if (pbVar1 == (byte *)0x0) {
        return __ptr;
      }
      uVar2 = *pbVar1 - 0x3d;
      if (uVar2 == 0) {
        uVar2 = (uint)pbVar1[1];
      }
      args = args + (uVar2 == 0);
      if (uVar2 != 0) {
        pbVar1 = (byte *)*args;
        if (pbVar1 == (byte *)0x0) {
          return __ptr;
        }
        uVar2 = *pbVar1 - 0x3d;
        if ((uVar2 == 0) && (uVar2 = pbVar1[1] - 0x3d, uVar2 == 0)) {
          uVar2 = (uint)pbVar1[2];
        }
        args = args + (uVar2 == 0);
        if (uVar2 != 0) {
          pbVar1 = (byte *)*args;
          if (pbVar1 == (byte *)0x0) {
            return __ptr;
          }
          uVar2 = *pbVar1 - 0x21;
          if ((uVar2 == 0) && (uVar2 = pbVar1[1] - 0x3d, uVar2 == 0)) {
            uVar2 = (uint)pbVar1[2];
          }
          uVar8 = 3;
          args = args + (uVar2 == 0);
          if (uVar2 != 0) {
            pbVar1 = (byte *)*args;
            if (pbVar1 == (byte *)0x0) {
              return __ptr;
            }
            uVar2 = *pbVar1 - 0x3e;
            if ((uVar2 == 0) && (uVar2 = pbVar1[1] - 0x3d, uVar2 == 0)) {
              uVar2 = (uint)pbVar1[2];
            }
            uVar8 = 4;
            args = args + (uVar2 == 0);
            if (uVar2 != 0) {
              pbVar1 = (byte *)*args;
              if (pbVar1 == (byte *)0x0) {
                return __ptr;
              }
              uVar2 = *pbVar1 - 0x3e;
              if (uVar2 == 0) {
                uVar2 = (uint)pbVar1[1];
              }
              args = args + (uVar2 == 0);
              if (uVar2 != 0) {
                return __ptr;
              }
              uVar8 = 5;
            }
          }
          goto LAB_0010184c;
        }
      }
      uVar8 = 2;
    }
  }
LAB_0010184c:
  uVar7 = 0;
  __ptr_00 = (int *)eval3(param_1);
  if (param_1 != '\0') {
    if (*__ptr == 0) {
      uVar6 = mpz_get_str(0,10);
      mpz_clear(__ptr + 2);
      *__ptr = 1;
      iVar3 = *__ptr_00;
      *(undefined8 *)(__ptr + 2) = uVar6;
    }
    else {
      iVar3 = *__ptr_00;
    }
    if (iVar3 == 0) {
      uVar6 = mpz_get_str(0,10);
      mpz_clear(__ptr_00 + 2);
      *(undefined8 *)(__ptr_00 + 2) = uVar6;
      *__ptr_00 = 1;
    }
    pcVar4 = *(char **)(__ptr + 2) + (**(char **)(__ptr + 2) == '-');
    do {
      if (9 < (int)*pcVar4 - 0x30U) goto LAB_0010194b;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = *(char **)(__ptr_00 + 2) + (**(char **)(__ptr_00 + 2) == '-');
    do {
      if (9 < (int)*pcVar4 - 0x30U) goto LAB_0010194b;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    iVar3 = strintcmp();
    goto LAB_00101963;
  }
  goto LAB_00101863;
LAB_0010194b:
  piVar5 = __errno_location();
  *piVar5 = 0;
  iVar3 = strcoll(*(char **)(__ptr + 2),*(char **)(__ptr_00 + 2));
LAB_00101963:
  switch(uVar8) {
  default:
    uVar7 = (ulong)(long)iVar3 >> 0x3f;
    break;
  case 1:
    uVar7 = (ulong)(iVar3 < 1);
    break;
  case 2:
    uVar7 = (ulong)(iVar3 == 0);
    break;
  case 3:
    uVar7 = (ulong)(iVar3 != 0);
    break;
  case 4:
    uVar7 = (ulong)~(long)iVar3 >> 0x3f;
    break;
  case 5:
    uVar7 = (ulong)(0 < iVar3);
  }
LAB_00101863:
  if (*__ptr == 1) {
    free(*(void **)(__ptr + 2));
    free(__ptr);
    iVar3 = *__ptr_00;
  }
  else {
    mpz_clear(__ptr + 2);
    free(__ptr);
    iVar3 = *__ptr_00;
  }
  if (iVar3 == 1) {
    free(*(void **)(__ptr_00 + 2));
  }
  else {
    mpz_clear(__ptr_00 + 2);
  }
  free(__ptr_00);
  __ptr = (int *)xmalloc(0x18);
  *__ptr = 0;
  mpz_init_set_ui(__ptr + 2,uVar7);
  goto LAB_00101813;
}



int * eval1(char param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int *__ptr;
  int *__ptr_00;
  uint uVar4;
  
  __ptr = (int *)eval2(param_1);
  pbVar1 = (byte *)*args;
  while( true ) {
    if (pbVar1 == (byte *)0x0) {
      return __ptr;
    }
    uVar4 = *pbVar1 - 0x26;
    if (uVar4 == 0) {
      uVar4 = (uint)pbVar1[1];
    }
    args = args + (uVar4 == 0);
    if (uVar4 != 0) break;
    bVar2 = 0;
    if (param_1 != '\0') {
      bVar2 = null(__ptr);
      bVar2 = bVar2 ^ 1;
    }
    __ptr_00 = (int *)eval2(bVar2);
    cVar3 = null(__ptr);
    if ((cVar3 == '\0') && (cVar3 = null(__ptr_00), cVar3 == '\0')) {
      if (*__ptr_00 == 1) {
        free(*(void **)(__ptr_00 + 2));
      }
      else {
        mpz_clear(__ptr_00 + 2);
      }
      free(__ptr_00);
    }
    else {
      if (*__ptr == 1) {
        free(*(void **)(__ptr + 2));
      }
      else {
        mpz_clear(__ptr + 2);
      }
      free(__ptr);
      if (*__ptr_00 == 1) {
        free(*(void **)(__ptr_00 + 2));
      }
      else {
        mpz_clear(__ptr_00 + 2);
      }
      free(__ptr_00);
      __ptr = (int *)xmalloc(0x18);
      *__ptr = 0;
      mpz_init_set_ui(__ptr + 2,0);
    }
    pbVar1 = (byte *)*args;
  }
  return __ptr;
}



int * eval(char param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *__ptr;
  byte *pbVar3;
  int *__ptr_00;
  uint uVar4;
  
  __ptr = (int *)eval1(param_1);
  pbVar3 = (byte *)*args;
  do {
    if (pbVar3 == (byte *)0x0) {
      return __ptr;
    }
    while( true ) {
      uVar4 = *pbVar3 - 0x7c;
      if (uVar4 == 0) {
        uVar4 = (uint)pbVar3[1];
      }
      args = args + (uVar4 == 0);
      if (uVar4 != 0) {
        return __ptr;
      }
      uVar1 = 0;
      if (param_1 != '\0') {
        uVar1 = null(__ptr);
      }
      __ptr_00 = (int *)eval1(uVar1);
      cVar2 = null(__ptr);
      if (cVar2 != '\0') break;
      if (*__ptr_00 == 1) {
        free(*(void **)(__ptr_00 + 2));
      }
      else {
        mpz_clear(__ptr_00 + 2);
      }
      free(__ptr_00);
      pbVar3 = (byte *)*args;
      if (pbVar3 == (byte *)0x0) {
        return __ptr;
      }
    }
    if (*__ptr == 1) {
      free(*(void **)(__ptr + 2));
    }
    else {
      mpz_clear(__ptr + 2);
    }
    free(__ptr);
    cVar2 = null(__ptr_00);
    if (cVar2 != '\0') {
      if (*__ptr_00 == 1) {
        free(*(void **)(__ptr_00 + 2));
      }
      else {
        mpz_clear(__ptr_00 + 2);
      }
      free(__ptr_00);
      __ptr_00 = (int *)xmalloc(0x18);
      *__ptr_00 = 0;
      mpz_init_set_ui(__ptr_00 + 2,0);
    }
    pbVar3 = (byte *)*args;
    __ptr = __ptr_00;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 main(int param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 3;
  atexit((__func *)&close_stdout);
  uVar3 = proper_name_lite("Paul Eggert","Paul Eggert");
  uVar4 = proper_name_lite("James Youngman","James Youngman");
  uVar5 = proper_name_lite("Mike Parker","Mike Parker");
  parse_long_options(param_1,param_2,&_LC3,"GNU coreutils",&_LC47,usage,uVar5,uVar4,uVar3,0);
  if (1 < param_1) {
    pcVar1 = (char *)param_2[1];
    if (((*pcVar1 == '-') && (pcVar1[1] == '-')) && (pcVar1[2] == '\0')) {
      if (param_1 == 2) goto LAB_00102ad0;
      param_2 = param_2 + 1;
    }
    args = param_2 + 1;
    piVar6 = (int *)eval(1);
    if (*args == 0) {
      if (*piVar6 == 0) {
        mpz_out_str(_stdout,10,piVar6 + 2);
        pcVar1 = _stdout->_IO_write_ptr;
        if (pcVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = '\n';
        }
        else {
          __overflow(_stdout,10);
        }
      }
      else {
        puts(*(char **)(piVar6 + 2));
      }
      uVar2 = null(piVar6);
      return uVar2;
    }
    uVar3 = quotearg_n_style(0,8);
    uVar4 = dcgettext(0,"syntax error: unexpected argument %s",5);
                    /* WARNING: Subroutine does not return */
    error(2,0,uVar4,uVar3);
  }
LAB_00102ad0:
  uVar3 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
  error(0,0,uVar3);
}


