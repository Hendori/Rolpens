
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
  error(3,0x22,&_LC0,__ptr);
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
    goto LAB_001000fa;
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
    iVar2 = strcmp("expr",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC2;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_001003dd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC2);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001003dd:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC2);
    if (puVar7 == &_LC2) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001000fa:
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
    if (iVar2 == 0) goto LAB_0010074b;
LAB_0010055f:
    pcVar4 = *(char **)(param_2 + 2);
  }
  else {
    if (*param_2 != 0) goto LAB_0010055f;
LAB_0010074b:
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
    error(2,0,&_LC0,pcVar4);
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
      goto joined_r0x001006d5;
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
      goto joined_r0x001006d5;
    }
    if (-1 < *(int *)(local_1b0._8_8_ + 4)) {
      *(undefined1 *)(*(long *)(param_1 + 2) + (long)*(int *)(local_1b0._8_8_ + 4)) = 0;
      iVar2 = *(int *)(local_1b0._0_8_ + 4);
      lVar1 = *(long *)(param_1 + 2);
      puVar5 = (undefined4 *)xmalloc(0x18);
      *puVar5 = 1;
      uVar6 = xstrdup(iVar2 + lVar1);
      *(undefined8 *)(puVar5 + 2) = uVar6;
      goto joined_r0x001006d5;
    }
  }
  puVar5 = (undefined4 *)xmalloc(0x18);
  *puVar5 = 1;
  uVar6 = xstrdup(&_LC4);
  *(undefined8 *)(puVar5 + 2) = uVar6;
joined_r0x001006d5:
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



int * eval6_part_0(char param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  size_t sVar10;
  long lVar11;
  int *__ptr;
  ulong uVar12;
  char *pcVar13;
  void *__ptr_00;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  undefined8 uVar17;
  byte bVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  char *pcVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  bool local_78;
  int local_4c;
  undefined4 local_48 [2];
  long local_40;
  
  puVar1 = args;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char *)*args == (char *)0x0) goto LAB_001011ff;
  iVar3 = strcmp((char *)*args,"length");
  puVar1 = puVar1 + (iVar3 == 0);
  args = puVar1;
  if (iVar3 == 0) {
    piVar6 = (int *)eval6(param_1);
    if (*piVar6 == 0) {
      uVar7 = mpz_get_str(0,10,piVar6 + 2);
      mpz_clear(piVar6 + 2);
      *(undefined8 *)(piVar6 + 2) = uVar7;
      *piVar6 = 1;
    }
    else {
      uVar7 = *(undefined8 *)(piVar6 + 2);
    }
    uVar7 = mbslen(uVar7);
    piVar8 = (int *)xmalloc(0x18);
    *piVar8 = 0;
    mpz_init_set_ui(piVar8 + 2,uVar7);
    iVar3 = *piVar6;
joined_r0x001009c0:
    if (iVar3 == 1) {
      free(*(void **)(piVar6 + 2));
    }
    else {
      mpz_clear(piVar6 + 2);
    }
    free(piVar6);
    goto LAB_00100945;
  }
  if ((char *)*puVar1 == (char *)0x0) goto LAB_001011ff;
  iVar3 = strcmp((char *)*puVar1,"match");
  puVar1 = puVar1 + (iVar3 == 0);
  args = puVar1;
  if (iVar3 == 0) {
    piVar9 = (int *)eval6(param_1);
    piVar6 = (int *)eval6(param_1);
    piVar8 = piVar9;
    if (param_1 != '\0') {
      piVar8 = (int *)docolon(piVar9,piVar6);
      if (*piVar9 == 1) {
        free(*(void **)(piVar9 + 2));
      }
      else {
        mpz_clear(piVar9 + 2);
      }
      free(piVar9);
    }
    iVar3 = *piVar6;
    goto joined_r0x001009c0;
  }
  if ((char *)*puVar1 != (char *)0x0) {
    iVar3 = strcmp((char *)*puVar1,"index");
    puVar1 = puVar1 + (iVar3 == 0);
    args = puVar1;
    if (iVar3 == 0) {
      piVar6 = (int *)eval6(param_1);
      piVar9 = (int *)eval6(param_1);
      if (*piVar6 == 0) {
        uVar7 = mpz_get_str(0,10,piVar6 + 2);
        mpz_clear(piVar6 + 2);
        *(undefined8 *)(piVar6 + 2) = uVar7;
        *piVar6 = 1;
      }
      if (*piVar9 == 0) {
        pcVar13 = (char *)mpz_get_str(0,10,piVar9 + 2);
        mpz_clear(piVar9 + 2);
        *(char **)(piVar9 + 2) = pcVar13;
        *piVar9 = 1;
      }
      else {
        pcVar13 = *(char **)(piVar9 + 2);
      }
      pcVar23 = *(char **)(piVar6 + 2);
      if (*pcVar13 == '\0') {
LAB_00100a90:
        lVar22 = 0;
      }
      else {
        sVar10 = __ctype_get_mb_cur_max();
        if (1 < sVar10) {
          cVar2 = *pcVar23;
          if (cVar2 != '\0') {
            lVar22 = 0;
            do {
              lVar22 = lVar22 + 1;
              if (cVar2 < '\0') {
                pcVar14 = pcVar23 + (2 - (ulong)(pcVar23[1] == '\0'));
                local_48[0] = 0;
                uVar15 = mbrtoc32(&local_4c,pcVar23,
                                  pcVar14 + (*pcVar14 != '\0') +
                                  ((ulong)(pcVar14[*pcVar14 != '\0'] != '\0') - (long)pcVar23));
                iVar3 = local_4c;
                if (((long)uVar15 < 0) || (uVar24 = uVar15 & 0xffffffff, (char)uVar15 == '\x01')) {
                  cVar2 = *pcVar23;
                  goto LAB_00100a6c;
                }
                cVar2 = *pcVar13;
                pcVar14 = pcVar13;
                while (cVar2 != '\0') {
                  iVar5 = (int)cVar2;
                  if (cVar2 < '\0') {
                    pcVar16 = pcVar14 + (2 - (ulong)(pcVar14[1] == '\0'));
                    local_48[0] = 0;
                    lVar11 = mbrtoc32(&local_4c,pcVar14,
                                      pcVar16 + (*pcVar16 != '\0') +
                                      ((ulong)(pcVar16[*pcVar16 != '\0'] != '\0') - (long)pcVar14),
                                      local_48);
                    iVar5 = local_4c;
                    if (-1 < lVar11) goto LAB_00101115;
                    bVar18 = 1;
                  }
                  else {
                    lVar11 = 1;
LAB_00101115:
                    bVar18 = (byte)lVar11;
                    if (iVar5 == iVar3) goto LAB_00100a93;
                  }
                  pcVar14 = pcVar14 + bVar18;
                  cVar2 = *pcVar14;
                }
              }
              else {
LAB_00100a6c:
                lVar11 = mbschr(pcVar13,(int)cVar2);
                if (lVar11 != 0) goto LAB_00100a93;
                uVar24 = 1;
              }
              pcVar23 = pcVar23 + (uVar24 & 0xff);
              cVar2 = *pcVar23;
            } while (cVar2 != '\0');
          }
          goto LAB_00100a90;
        }
        sVar10 = strcspn(pcVar23,pcVar13);
        if (pcVar23[sVar10] == '\0') goto LAB_00100a90;
        lVar22 = sVar10 + 1;
      }
LAB_00100a93:
      piVar8 = (int *)xmalloc(0x18);
      *piVar8 = 0;
      mpz_init_set_ui(piVar8 + 2,lVar22);
      if (*piVar6 == 1) {
        free(*(void **)(piVar6 + 2));
      }
      else {
        mpz_clear(piVar6 + 2);
      }
      free(piVar6);
      if (*piVar9 == 1) {
        free(*(void **)(piVar9 + 2));
      }
      else {
        mpz_clear(piVar9 + 2);
      }
      free(piVar9);
LAB_00100945:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return piVar8;
    }
    if ((char *)*puVar1 != (char *)0x0) {
      iVar3 = strcmp((char *)*puVar1,"substr");
      args = puVar1 + (iVar3 == 0);
      if (iVar3 == 0) {
        piVar6 = (int *)eval6(param_1);
        piVar9 = (int *)eval6(param_1);
        __ptr = (int *)eval6(param_1);
        if (*piVar6 == 0) {
          uVar7 = mpz_get_str(0,10,piVar6 + 2);
          mpz_clear(piVar6 + 2);
          *(undefined8 *)(piVar6 + 2) = uVar7;
          *piVar6 = 1;
        }
        cVar2 = toarith(piVar9);
        if ((cVar2 == '\0') || (cVar2 = toarith(__ptr), cVar2 == '\0')) {
          piVar8 = (int *)xmalloc(0x18);
          *piVar8 = 1;
          uVar7 = xstrdup(&_LC4);
          *(undefined8 *)(piVar8 + 2) = uVar7;
        }
        else {
          piVar8 = piVar9 + 2;
          iVar3 = mpz_sgn(piVar8);
          if (iVar3 < 0) {
            local_78 = false;
            uVar15 = 0xffffffffffffffff;
          }
          else {
            iVar3 = mpz_fits_ulong_p(piVar8);
            if (iVar3 == 0) {
              local_78 = false;
              uVar15 = 0xfffffffffffffffe;
            }
            else {
              uVar24 = mpz_get_ui(piVar8);
              uVar15 = 0xfffffffffffffffe;
              if (uVar24 != 0xffffffffffffffff) {
                uVar15 = uVar24;
              }
              local_78 = uVar24 == 0;
            }
          }
          piVar8 = __ptr + 2;
          iVar3 = mpz_sgn(piVar8);
          if (iVar3 < 0) {
            uVar24 = 0xffffffffffffffff;
            local_78 = (bool)cVar2;
          }
          else {
            iVar3 = mpz_fits_ulong_p(piVar8);
            uVar24 = 0xfffffffffffffffe;
            if (iVar3 != 0) {
              uVar12 = mpz_get_ui(piVar8);
              uVar24 = 0xfffffffffffffffe;
              if (uVar12 != 0xffffffffffffffff) {
                uVar24 = uVar12;
              }
            }
          }
          pcVar13 = *(char **)(piVar6 + 2);
          sVar10 = __ctype_get_mb_cur_max();
          if (sVar10 < 2) {
            uVar12 = strlen(pcVar13);
            if (uVar15 <= uVar12) goto LAB_00101030;
            uVar20 = 0;
            uVar12 = 0;
            if (local_78 != false) goto LAB_00101059;
LAB_00101051:
            uVar20 = uVar12;
            pcVar13 = pcVar13 + (uVar15 - 1);
          }
          else {
            uVar12 = mbslen();
            if (uVar12 < uVar15) {
              uVar20 = 0;
              uVar12 = 0;
              if (local_78 == false) {
LAB_00100e90:
                cVar2 = *pcVar13;
                if (uVar12 != 0) {
                  uVar20 = 0;
                  uVar24 = 1;
                  pcVar23 = pcVar13;
                  if (cVar2 != '\0') {
                    do {
                      uVar21 = 1;
                      if (cVar2 < '\0') {
                        pcVar14 = pcVar23 + (2 - (ulong)(pcVar23[1] == '\0'));
                        local_48[0] = 0;
                        uVar21 = mbrtoc32(&local_4c,pcVar23,
                                          pcVar14 + (*pcVar14 != '\0') +
                                          ((ulong)(pcVar14[*pcVar14 != '\0'] != '\0') -
                                          (long)pcVar23),local_48);
                        if ((long)uVar21 < 0) {
                          uVar21 = 1;
                        }
                        uVar21 = uVar21 & 0xff;
                      }
                      if (uVar15 <= uVar24) {
                        if (uVar24 == uVar15) {
                          pcVar13 = pcVar23;
                        }
                        uVar12 = uVar12 - 1;
                        uVar20 = uVar20 + uVar21;
                      }
                      pcVar23 = pcVar23 + uVar21;
                      uVar24 = uVar24 + 1;
                      cVar2 = *pcVar23;
                    } while ((cVar2 != '\0') && (uVar12 != 0));
                    goto LAB_00101059;
                  }
                }
                uVar20 = 0;
              }
            }
            else {
LAB_00101030:
              uVar20 = 0;
              if (local_78 == false) {
                uVar12 = (uVar12 - uVar15) + 1;
                if (uVar24 < uVar12) {
                  uVar12 = uVar24;
                }
                if (sVar10 < 2) goto LAB_00101051;
                goto LAB_00100e90;
              }
            }
          }
LAB_00101059:
          __ptr_00 = (void *)ximemdup0(pcVar13,uVar20);
          piVar8 = (int *)xmalloc(0x18);
          *piVar8 = 1;
          uVar7 = xstrdup(__ptr_00);
          *(undefined8 *)(piVar8 + 2) = uVar7;
          free(__ptr_00);
        }
        if (*piVar6 == 1) {
          free(*(void **)(piVar6 + 2));
        }
        else {
          mpz_clear(piVar6 + 2);
        }
        free(piVar6);
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
        goto LAB_00100945;
      }
      pbVar19 = (byte *)*args;
      if (pbVar19 != (byte *)0x0) {
        uVar4 = *pbVar19 - 0x28;
        if (uVar4 == 0) {
          uVar4 = (uint)pbVar19[1];
        }
        args = args + (uVar4 == 0);
        if (uVar4 != 0) {
          pbVar19 = (byte *)*args;
          if (pbVar19 != (byte *)0x0) {
            uVar4 = *pbVar19 - 0x29;
            if (uVar4 == 0) {
              uVar4 = (uint)pbVar19[1];
            }
            args = args + (uVar4 == 0);
            if (uVar4 == 0) {
              uVar7 = dcgettext(0,"syntax error: unexpected \')\'",5);
                    /* WARNING: Subroutine does not return */
              error(2,0,uVar7);
            }
            pbVar19 = (byte *)*args;
          }
          args = args + 1;
          piVar8 = (int *)xmalloc(0x18);
          *piVar8 = 1;
          uVar7 = xstrdup(pbVar19);
          *(undefined8 *)(piVar8 + 2) = uVar7;
          goto LAB_00100945;
        }
        piVar8 = (int *)eval(param_1);
        pbVar19 = (byte *)*args;
        if (pbVar19 == (byte *)0x0) {
          uVar7 = quotearg_n_style(0,8,args[-1]);
          pcVar13 = "syntax error: expecting \')\' after %s";
        }
        else {
          uVar4 = *pbVar19 - 0x29;
          if (uVar4 == 0) {
            uVar4 = (uint)pbVar19[1];
          }
          args = args + (uVar4 == 0);
          if (uVar4 == 0) goto LAB_00100945;
          uVar7 = quotearg_n_style(0,8,*args);
          pcVar13 = "syntax error: expecting \')\' instead of %s";
        }
        goto LAB_0010121e;
      }
    }
  }
LAB_001011ff:
  uVar7 = quotearg_n_style(0,8,args[-1]);
  pcVar13 = "syntax error: missing argument after %s";
LAB_0010121e:
  uVar17 = dcgettext(0,pcVar13,5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar17,uVar7);
}



undefined4 * eval6(undefined1 param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pbVar1 = (byte *)*args;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = *pbVar1 - 0x2b;
    if (uVar3 == 0) {
      uVar3 = (uint)pbVar1[1];
    }
    args = args + (uVar3 == 0);
    if (uVar3 == 0) {
      lVar2 = *args;
      if (lVar2 != 0) {
        args = args + 1;
        puVar4 = (undefined4 *)xmalloc(0x18);
        *puVar4 = 1;
        uVar5 = xstrdup(lVar2);
        *(undefined8 *)(puVar4 + 2) = uVar5;
        return puVar4;
      }
      uVar5 = quotearg_n_style(0,8,args[-1]);
      uVar6 = dcgettext(0,"syntax error: missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar6,uVar5);
    }
  }
  puVar4 = (undefined4 *)eval6_part_0(param_1);
  return puVar4;
}



int * eval4(char param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  code *pcVar7;
  int *piVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  
  piVar4 = (int *)eval6(param_1);
  pbVar9 = (byte *)*args;
  if (pbVar9 == (byte *)0x0) {
    pbVar9 = (byte *)0x0;
    if (param_1 == '\0') {
LAB_00101780:
      do {
        if (pbVar9 == (byte *)0x0) {
          return piVar4;
        }
        uVar12 = *pbVar9 - 0x2a;
        if (uVar12 == 0) {
          uVar12 = (uint)pbVar9[1];
        }
        args = args + (uVar12 == 0);
        if (uVar12 != 0) {
          pbVar9 = (byte *)*args;
          if (pbVar9 == (byte *)0x0) {
            return piVar4;
          }
          uVar12 = *pbVar9 - 0x2f;
          if (uVar12 == 0) {
            uVar12 = (uint)pbVar9[1];
          }
          args = args + (uVar12 == 0);
          if (uVar12 != 0) {
            pbVar9 = (byte *)*args;
            if (pbVar9 == (byte *)0x0) {
              return piVar4;
            }
            uVar12 = *pbVar9 - 0x25;
            if (uVar12 == 0) {
              uVar12 = (uint)pbVar9[1];
            }
            args = args + (uVar12 == 0);
            if (uVar12 != 0) {
              return piVar4;
            }
          }
        }
        piVar5 = (int *)eval6(0);
        pbVar9 = (byte *)*args;
        while (pbVar9 != (byte *)0x0) {
          uVar12 = *pbVar9 - 0x3a;
          if (uVar12 == 0) {
            uVar12 = (uint)pbVar9[1];
          }
          args = args + (uVar12 == 0);
          if (uVar12 != 0) break;
          pbVar9 = (byte *)*args;
          if (pbVar9 == (byte *)0x0) {
LAB_00101890:
            piVar6 = (int *)eval6_part_0(0);
          }
          else {
            uVar12 = *pbVar9 - 0x2b;
            if (uVar12 == 0) {
              uVar12 = (uint)pbVar9[1];
            }
            args = args + (uVar12 == 0);
            if (uVar12 != 0) goto LAB_00101890;
            lVar1 = *args;
            if (lVar1 == 0) goto LAB_001018e3;
            args = args + 1;
            piVar6 = (int *)xmalloc(0x18);
            *piVar6 = 1;
            uVar11 = xstrdup(lVar1);
            *(undefined8 *)(piVar6 + 2) = uVar11;
          }
          if (*piVar6 == 1) {
            free(*(void **)(piVar6 + 2));
          }
          else {
            mpz_clear(piVar6 + 2);
          }
          free(piVar6);
          pbVar9 = (byte *)*args;
        }
        if (*piVar5 == 1) {
          free(*(void **)(piVar5 + 2));
        }
        else {
          mpz_clear(piVar5 + 2);
        }
        free(piVar5);
        pbVar9 = (byte *)*args;
      } while( true );
    }
  }
  else {
    piVar5 = piVar4;
    if (param_1 == '\0') {
      do {
        uVar12 = *pbVar9 - 0x3a;
        if (uVar12 == 0) {
          uVar12 = (uint)pbVar9[1];
        }
        args = args + (uVar12 == 0);
        if (uVar12 != 0) {
          pbVar9 = (byte *)*args;
          goto LAB_00101780;
        }
        piVar5 = (int *)eval6(0);
        if (*piVar5 == 1) {
          free(*(void **)(piVar5 + 2));
        }
        else {
          mpz_clear(piVar5 + 2);
        }
        free(piVar5);
        pbVar9 = (byte *)*args;
      } while (pbVar9 != (byte *)0x0);
    }
    else {
      do {
        uVar12 = *pbVar9 - 0x3a;
        if (uVar12 == 0) {
          uVar12 = (uint)pbVar9[1];
        }
        args = args + (uVar12 == 0);
        if (uVar12 != 0) goto LAB_001014fa;
        piVar6 = (int *)eval6(1);
        piVar4 = (int *)docolon(piVar5,piVar6);
        if (*piVar5 == 1) {
          free(*(void **)(piVar5 + 2));
          free(piVar5);
          if (*piVar6 == 1) goto LAB_0010147e;
LAB_001013f4:
          mpz_clear(piVar6 + 2);
        }
        else {
          mpz_clear(piVar5 + 2);
          free(piVar5);
          if (*piVar6 != 1) goto LAB_001013f4;
LAB_0010147e:
          free(*(void **)(piVar6 + 2));
        }
        free(piVar6);
        pbVar9 = (byte *)*args;
        piVar5 = piVar4;
      } while (pbVar9 != (byte *)0x0);
    }
  }
  return piVar4;
LAB_001014fa:
  pbVar9 = (byte *)*args;
  if (pbVar9 == (byte *)0x0) {
    return piVar5;
  }
  uVar12 = *pbVar9 - 0x2a;
  if (uVar12 == 0) {
    uVar12 = (uint)pbVar9[1];
  }
  iVar14 = 0;
  args = args + (uVar12 == 0);
  if (uVar12 != 0) {
    pbVar9 = (byte *)*args;
    if (pbVar9 == (byte *)0x0) {
      return piVar5;
    }
    uVar12 = *pbVar9 - 0x2f;
    if (uVar12 == 0) {
      uVar12 = (uint)pbVar9[1];
    }
    iVar14 = 1;
    args = args + (uVar12 == 0);
    if (uVar12 != 0) {
      pbVar9 = (byte *)*args;
      if (pbVar9 == (byte *)0x0) {
        return piVar5;
      }
      uVar12 = *pbVar9 - 0x25;
      if (uVar12 == 0) {
        uVar12 = (uint)pbVar9[1];
      }
      args = args + (uVar12 == 0);
      if (uVar12 != 0) {
        return piVar5;
      }
      iVar14 = 2;
    }
  }
  piVar4 = (int *)eval6(1);
  pbVar9 = (byte *)*args;
  while (pbVar9 != (byte *)0x0) {
    uVar12 = *pbVar9 - 0x3a;
    if (uVar12 == 0) {
      uVar12 = (uint)pbVar9[1];
    }
    args = args + (uVar12 == 0);
    if (uVar12 != 0) break;
    pbVar9 = (byte *)*args;
    if (pbVar9 == (byte *)0x0) {
LAB_00101660:
      piVar6 = (int *)eval6_part_0(1);
    }
    else {
      uVar12 = *pbVar9 - 0x2b;
      if (uVar12 == 0) {
        uVar12 = (uint)pbVar9[1];
      }
      args = args + (uVar12 == 0);
      if (uVar12 != 0) goto LAB_00101660;
      lVar1 = *args;
      if (lVar1 == 0) {
LAB_001018e3:
        uVar11 = quotearg_n_style(0,8,args[-1]);
        uVar10 = dcgettext(0,"syntax error: missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar10,uVar11);
      }
      args = args + 1;
      piVar6 = (int *)xmalloc(0x18);
      *piVar6 = 1;
      uVar11 = xstrdup(lVar1);
      *(undefined8 *)(piVar6 + 2) = uVar11;
    }
    piVar8 = (int *)docolon(piVar4,piVar6);
    if (*piVar4 == 1) {
      free(*(void **)(piVar4 + 2));
      free(piVar4);
      if (*piVar6 == 1) goto LAB_00101651;
LAB_00101572:
      mpz_clear(piVar6 + 2);
    }
    else {
      mpz_clear(piVar4 + 2);
      free(piVar4);
      if (*piVar6 != 1) goto LAB_00101572;
LAB_00101651:
      free(*(void **)(piVar6 + 2));
    }
    free(piVar6);
    piVar4 = piVar8;
    pbVar9 = (byte *)*args;
  }
  cVar2 = toarith(piVar5);
  if ((cVar2 == '\0') || (cVar2 = toarith(piVar4), cVar2 == '\0')) {
    pcVar13 = "non-integer argument";
LAB_00101929:
    uVar11 = dcgettext(0,pcVar13,5);
                    /* WARNING: Subroutine does not return */
    error(2,0,uVar11);
  }
  if (iVar14 == 0) {
    pcVar7 = mpz_mul;
  }
  else {
    iVar3 = mpz_sgn(piVar4 + 2);
    if (iVar3 == 0) {
      pcVar13 = "division by zero";
      goto LAB_00101929;
    }
    if (iVar14 == 1) {
      pcVar7 = mpz_tdiv_q;
    }
    else {
      pcVar7 = mpz_tdiv_r;
    }
  }
  (*pcVar7)(piVar5 + 2,piVar5 + 2,piVar4 + 2);
  if (*piVar4 == 1) {
    free(*(void **)(piVar4 + 2));
  }
  else {
    mpz_clear(piVar4 + 2);
  }
  free(piVar4);
  goto LAB_001014fa;
}



long eval3(char param_1)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  lVar5 = eval4(param_1);
  if (param_1 == '\0') {
    while (pbVar1 = (byte *)*args, pbVar1 != (byte *)0x0) {
      uVar4 = *pbVar1 - 0x2b;
      if (uVar4 == 0) {
        uVar4 = (uint)pbVar1[1];
      }
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
      }
      piVar6 = (int *)eval4(0);
      if (*piVar6 == 1) {
        free(*(void **)(piVar6 + 2));
      }
      else {
        mpz_clear(piVar6 + 2);
      }
      free(piVar6);
    }
  }
  else {
    while (pbVar1 = (byte *)*args, pbVar1 != (byte *)0x0) {
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
      piVar6 = (int *)eval4(1);
      cVar3 = toarith(lVar5);
      if ((cVar3 == '\0') || (cVar3 = toarith(piVar6), cVar3 == '\0')) {
        uVar8 = dcgettext(0,"non-integer argument",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar8);
      }
      if (bVar2) {
        pcVar7 = mpz_sub;
      }
      else {
        pcVar7 = mpz_add;
      }
      (*pcVar7)(lVar5 + 8,lVar5 + 8,piVar6 + 2);
      if (*piVar6 == 1) {
        free(*(void **)(piVar6 + 2));
      }
      else {
        mpz_clear(piVar6 + 2);
      }
      free(piVar6);
    }
  }
  return lVar5;
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
LAB_00101bb4:
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
          goto LAB_00101bf1;
        }
      }
      uVar8 = 2;
    }
  }
LAB_00101bf1:
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
      if (9 < (int)*pcVar4 - 0x30U) goto LAB_00101d20;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = *(char **)(__ptr_00 + 2) + (**(char **)(__ptr_00 + 2) == '-');
    do {
      if (9 < (int)*pcVar4 - 0x30U) goto LAB_00101d20;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    iVar3 = strintcmp();
    goto LAB_00101c78;
  }
  goto LAB_00101b60;
LAB_00101d20:
  piVar5 = __errno_location();
  *piVar5 = 0;
  iVar3 = strcoll(*(char **)(__ptr + 2),*(char **)(__ptr_00 + 2));
LAB_00101c78:
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
    iVar3 = *__ptr;
    goto joined_r0x00101c9c;
  }
LAB_00101b60:
  iVar3 = *__ptr;
joined_r0x00101c9c:
  if (iVar3 == 1) {
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
  goto LAB_00101bb4;
}



int * eval1(char param_1)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int *__ptr;
  char *pcVar4;
  int *__ptr_00;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  
  __ptr = (int *)eval2(param_1);
  pbVar2 = (byte *)*args;
  do {
    if (pbVar2 == (byte *)0x0) {
      return __ptr;
    }
    uVar6 = *pbVar2 - 0x26;
    if (uVar6 == 0) {
      uVar6 = (uint)pbVar2[1];
    }
    args = args + (uVar6 == 0);
    if (uVar6 != 0) {
      return __ptr;
    }
    bVar7 = false;
    if (param_1 != '\0') {
      if (*__ptr == 0) {
        iVar3 = mpz_sgn(__ptr + 2);
        bVar7 = iVar3 != 0;
      }
      else {
        cVar1 = **(char **)(__ptr + 2);
        if (cVar1 != '\0') {
          pcVar4 = *(char **)(__ptr + 2) + (cVar1 == '-');
          do {
            if (*pcVar4 != '0') {
              bVar7 = true;
              break;
            }
            pcVar4 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
        }
      }
    }
    __ptr_00 = (int *)eval2(bVar7);
    if (*__ptr == 0) {
      iVar3 = mpz_sgn(__ptr + 2);
      if (iVar3 == 0) {
LAB_001020a8:
        if (*__ptr == 1) {
          pcVar4 = *(char **)(__ptr + 2);
          goto LAB_00102100;
        }
        mpz_clear(__ptr + 2);
        free(__ptr);
        iVar3 = *__ptr_00;
        goto joined_r0x001020c4;
      }
LAB_00102032:
      if (*__ptr_00 != 0) {
        pcVar4 = *(char **)(__ptr_00 + 2);
        if (*pcVar4 != '\0') {
          pcVar5 = pcVar4 + (*pcVar4 == '-');
          do {
            if (*pcVar5 != '0') goto LAB_00102066;
            pcVar5 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
        }
        goto LAB_001020a8;
      }
      iVar3 = mpz_sgn(__ptr_00 + 2);
      if (iVar3 == 0) goto LAB_001020a8;
      if (*__ptr_00 == 1) {
        pcVar4 = *(char **)(__ptr_00 + 2);
LAB_00102066:
        free(pcVar4);
      }
      else {
        mpz_clear(__ptr_00 + 2);
      }
      free(__ptr_00);
    }
    else {
      pcVar4 = *(char **)(__ptr + 2);
      if (*pcVar4 != '\0') {
        pcVar5 = pcVar4 + (*pcVar4 == '-');
        do {
          if (*pcVar5 != '0') goto LAB_00102032;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
      }
LAB_00102100:
      free(pcVar4);
      free(__ptr);
      iVar3 = *__ptr_00;
joined_r0x001020c4:
      if (iVar3 == 1) {
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
    pbVar2 = (byte *)*args;
  } while( true );
}



int * eval(char param_1)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int *__ptr;
  char *pcVar4;
  int *__ptr_00;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  
  __ptr = (int *)eval1(param_1);
  pbVar2 = (byte *)*args;
  do {
    if (pbVar2 == (byte *)0x0) {
      return __ptr;
    }
    uVar6 = *pbVar2 - 0x7c;
    if (uVar6 == 0) {
      uVar6 = (uint)pbVar2[1];
    }
    args = args + (uVar6 == 0);
    if (uVar6 != 0) {
      return __ptr;
    }
    bVar7 = false;
    if (param_1 != '\0') {
      if (*__ptr == 0) {
        iVar3 = mpz_sgn(__ptr + 2);
        bVar7 = iVar3 == 0;
      }
      else {
        cVar1 = **(char **)(__ptr + 2);
        if (cVar1 != '\0') {
          pcVar4 = *(char **)(__ptr + 2) + (cVar1 == '-');
          do {
            if (*pcVar4 != '0') goto LAB_00102208;
            pcVar4 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
        }
        bVar7 = true;
      }
    }
LAB_00102208:
    __ptr_00 = (int *)eval1(bVar7);
    if (*__ptr == 0) {
      iVar3 = mpz_sgn(__ptr + 2);
      if (iVar3 == 0) {
        if (*__ptr == 1) {
          pcVar4 = *(char **)(__ptr + 2);
          goto LAB_00102328;
        }
        mpz_clear(__ptr + 2);
        free(__ptr);
        iVar3 = *__ptr_00;
        goto joined_r0x001022bc;
      }
LAB_0010224a:
      if (*__ptr_00 == 1) {
        free(*(void **)(__ptr_00 + 2));
      }
      else {
        mpz_clear(__ptr_00 + 2);
      }
      free(__ptr_00);
      __ptr_00 = __ptr;
    }
    else {
      pcVar4 = *(char **)(__ptr + 2);
      if (*pcVar4 != '\0') {
        pcVar5 = pcVar4 + (*pcVar4 == '-');
        do {
          if (*pcVar5 != '0') goto LAB_0010224a;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
      }
LAB_00102328:
      free(pcVar4);
      free(__ptr);
      iVar3 = *__ptr_00;
joined_r0x001022bc:
      if (iVar3 == 0) {
        iVar3 = mpz_sgn(__ptr_00 + 2);
        if (iVar3 != 0) goto LAB_00102267;
        if (*__ptr_00 == 1) {
          pcVar4 = *(char **)(__ptr_00 + 2);
          goto LAB_001023b0;
        }
        mpz_clear(__ptr_00 + 2);
      }
      else {
        pcVar4 = *(char **)(__ptr_00 + 2);
        if (*pcVar4 != '\0') {
          pcVar5 = pcVar4 + (*pcVar4 == '-');
          do {
            if (*pcVar5 != '0') goto LAB_00102267;
            pcVar5 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
        }
LAB_001023b0:
        free(pcVar4);
      }
      free(__ptr_00);
      __ptr_00 = (int *)xmalloc(0x18);
      *__ptr_00 = 0;
      mpz_init_set_ui(__ptr_00 + 2,0);
    }
LAB_00102267:
    pbVar2 = (byte *)*args;
    __ptr = __ptr_00;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool main(int param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 3;
  atexit((__func *)&close_stdout);
  uVar3 = proper_name_lite("Paul Eggert","Paul Eggert");
  uVar4 = proper_name_lite("James Youngman","James Youngman");
  uVar5 = proper_name_lite("Mike Parker","Mike Parker");
  parse_long_options(param_1,param_2,&_LC2,"GNU coreutils",&_LC47,usage,uVar5,uVar4,uVar3,0);
  if (param_1 < 2) {
LAB_0010309c:
    uVar3 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar3);
  }
  pcVar7 = (char *)param_2[1];
  if (((*pcVar7 == '-') && (pcVar7[1] == '-')) && (pcVar7[2] == '\0')) {
    if (param_1 == 2) goto LAB_0010309c;
    param_2 = param_2 + 1;
  }
  args = param_2 + 1;
  piVar6 = (int *)eval(1);
  if (*args != 0) {
    uVar3 = quotearg_n_style(0,8);
    uVar4 = dcgettext(0,"syntax error: unexpected argument %s",5);
                    /* WARNING: Subroutine does not return */
    error(2,0,uVar4,uVar3);
  }
  if (*piVar6 == 0) {
    mpz_out_str(_stdout,10,piVar6 + 2);
    pcVar7 = _stdout->_IO_write_ptr;
    if (pcVar7 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar7 + 1;
      *pcVar7 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
  }
  else {
    puts(*(char **)(piVar6 + 2));
  }
  if (*piVar6 == 0) {
    iVar2 = mpz_sgn(piVar6 + 2);
    bVar8 = iVar2 == 0;
  }
  else {
    bVar8 = true;
    cVar1 = **(char **)(piVar6 + 2);
    if (cVar1 != '\0') {
      pcVar7 = *(char **)(piVar6 + 2) + (cVar1 == '-');
      do {
        if (*pcVar7 != '0') {
          return false;
        }
        pcVar7 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      bVar8 = true;
    }
  }
  return bVar8;
}


